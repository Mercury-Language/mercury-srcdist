/*
** Automatically generated from `delay_partial_inst.m'
** by the Mercury compiler,
** version rotd-2015-08-10
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
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.vartypes.mih"
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
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 273 "delay_partial_inst.m"
struct check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0_s {
#line 277 "delay_partial_inst.m"
  MR_bool check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded;
#line 326 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__UniModes_47;
#line 334 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__ModuleInfo_55;
#line 337 "delay_partial_inst.m"
  jmp_buf check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__commit_0;
#line 337 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__V_136_136;
#line 337 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__V_137_137;
#line 337 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__RhsAfter_164;
#line 337 "delay_partial_inst.m"
  MR_Box check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__conv0_V_136_136;
#line 273 "delay_partial_inst.m"
};


#line 168 "check_hlds.delay_partial_inst.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__delay_partial_inst__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

#line 171 "check_hlds.delay_partial_inst.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__delay_partial_inst__pair__ti_pair_2builtin__type_ctor_info_int_0hlds__hlds_pred__type_ctor_info_proc_info_0;

#line 174 "check_hlds.delay_partial_inst.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__delay_partial_inst__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0hlds__hlds_pred__type_ctor_info_proc_info_0;

#line 177 "check_hlds.delay_partial_inst.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__delay_partial_inst__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 180 "check_hlds.delay_partial_inst.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_partial_inst__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 183 "check_hlds.delay_partial_inst.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_partial_inst__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 186 "check_hlds.delay_partial_inst.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__delay_partial_inst__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 189 "check_hlds.delay_partial_inst.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__delay_partial_inst__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 192 "check_hlds.delay_partial_inst.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_partial_inst__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 195 "check_hlds.delay_partial_inst.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__delay_partial_inst__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 198 "check_hlds.delay_partial_inst.c"
static const MR_PseudoTypeInfo check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__field_types_delay_partial_inst_info_0_0[4];

#line 201 "check_hlds.delay_partial_inst.c"
static const MR_ConstString check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__field_names_delay_partial_inst_info_0_0[4];

#line 204 "check_hlds.delay_partial_inst.c"
static const MR_DuFunctorDesc check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__du_functor_desc_delay_partial_inst_info_0_0;

#line 207 "check_hlds.delay_partial_inst.c"
static const MR_DuFunctorDescPtr check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__du_stag_ordered_delay_partial_inst_info_0_0[1];

#line 210 "check_hlds.delay_partial_inst.c"
static const MR_DuPtagLayout check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__du_ptag_ordered_delay_partial_inst_info_0[1];

#line 213 "check_hlds.delay_partial_inst.c"
static const MR_DuFunctorDescPtr check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__du_name_ordered_delay_partial_inst_info_0[1];

#line 216 "check_hlds.delay_partial_inst.c"
static const MR_Integer check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__functor_number_map_delay_partial_inst_info_0[1];

#line 219 "check_hlds.delay_partial_inst.c"
static MR_bool MR_CALL 
check_hlds__delay_partial_inst____Unify____canon_vars_map_0_0_10001(
#line 222 "check_hlds.delay_partial_inst.c"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_1,
#line 224 "check_hlds.delay_partial_inst.c"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_2);

#line 227 "check_hlds.delay_partial_inst.c"
static void MR_CALL 
check_hlds__delay_partial_inst____Compare____canon_vars_map_0_0_10001(
#line 230 "check_hlds.delay_partial_inst.c"
  MR_Box * check_hlds__delay_partial_inst__wrapper_arg_1,
#line 232 "check_hlds.delay_partial_inst.c"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_2,
#line 234 "check_hlds.delay_partial_inst.c"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_3);

#line 237 "check_hlds.delay_partial_inst.c"
static MR_bool MR_CALL 
check_hlds__delay_partial_inst____Unify____construct_map_0_0_10001(
#line 240 "check_hlds.delay_partial_inst.c"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_1,
#line 242 "check_hlds.delay_partial_inst.c"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_2);

#line 245 "check_hlds.delay_partial_inst.c"
static void MR_CALL 
check_hlds__delay_partial_inst____Compare____construct_map_0_0_10001(
#line 248 "check_hlds.delay_partial_inst.c"
  MR_Box * check_hlds__delay_partial_inst__wrapper_arg_1,
#line 250 "check_hlds.delay_partial_inst.c"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_2,
#line 252 "check_hlds.delay_partial_inst.c"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_3);

#line 255 "check_hlds.delay_partial_inst.c"
static MR_bool MR_CALL 
check_hlds__delay_partial_inst____Unify____delay_partial_inst_info_0_0_10001(
#line 258 "check_hlds.delay_partial_inst.c"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_1,
#line 260 "check_hlds.delay_partial_inst.c"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_2);

#line 263 "check_hlds.delay_partial_inst.c"
static void MR_CALL 
check_hlds__delay_partial_inst____Compare____delay_partial_inst_info_0_0_10001(
#line 266 "check_hlds.delay_partial_inst.c"
  MR_Box * check_hlds__delay_partial_inst__wrapper_arg_1,
#line 268 "check_hlds.delay_partial_inst.c"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_2,
#line 270 "check_hlds.delay_partial_inst.c"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_3);

#line 154 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst____Compare____delay_partial_inst_info_0_0(
#line 154 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__HeadVar__1_1,
#line 154 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__2_2,
#line 154 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__3_3);

#line 154 "delay_partial_inst.m"
static MR_bool MR_CALL 
check_hlds__delay_partial_inst____Unify____delay_partial_inst_info_0_0(
#line 154 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__1_1,
#line 154 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__2_2);

#line 185 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst____Compare____construct_map_0_0(
#line 185 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__HeadVar__1_1,
#line 185 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__2_2,
#line 185 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__3_3);

#line 185 "delay_partial_inst.m"
static MR_bool MR_CALL 
check_hlds__delay_partial_inst____Unify____construct_map_0_0(
#line 185 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__1_1,
#line 185 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__2_2);

#line 187 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst____Compare____canon_vars_map_0_0(
#line 187 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__HeadVar__1_1,
#line 187 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__2_2,
#line 187 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__3_3);

#line 187 "delay_partial_inst.m"
static MR_bool MR_CALL 
check_hlds__delay_partial_inst____Unify____canon_vars_map_0_0(
#line 187 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__1_1,
#line 187 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__2_2);

#line 611 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_complicated_unify_9_p_0(
#line 611 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__Goal0_10,
#line 611 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__LHS_11,
#line 611 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__RHS0_12,
#line 611 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__Unify_13,
#line 611 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__Goal_14,
#line 611 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_28,
#line 611 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_29,
#line 611 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_30,
#line 611 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_31);

#line 596 "delay_partial_inst.m"
static MR_bool MR_CALL 
check_hlds__delay_partial_inst__maybe_unify_var_with_ground_var_5_f_0(
#line 596 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__ModuleInfo_7,
#line 596 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__Context_8,
#line 596 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__LhsVar_9,
#line 596 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__RhsVar_10,
#line 596 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__ArgMode_11,
#line 596 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__Goal_12);

#line 566 "delay_partial_inst.m"
static MR_bool MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_deconstruct_8_p_0_1(
#line 566 "delay_partial_inst.m"
  MR_Box check_hlds__delay_partial_inst__closure_arg,
#line 566 "delay_partial_inst.m"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_1,
#line 566 "delay_partial_inst.m"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_2,
#line 566 "delay_partial_inst.m"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_3,
#line 566 "delay_partial_inst.m"
  MR_Box * check_hlds__delay_partial_inst__wrapper_arg_4);

#line 549 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_deconstruct_8_p_0(
#line 549 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__Goal0_9,
#line 549 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__UniMode_10,
#line 549 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__Unify_11,
#line 549 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__Goal_12,
#line 549 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_34,
#line 549 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_35,
#line 549 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_36,
#line 549 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_37);

#line 529 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst__add_to_construct_map_5_p_0(
#line 529 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__Var_6,
#line 529 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__ConsId_7,
#line 529 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__CanonVars_8,
#line 529 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_13,
#line 529 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_14);

#line 510 "delay_partial_inst.m"
static MR_bool MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_partial_construct_7_p_0_1(
#line 510 "delay_partial_inst.m"
  MR_Box check_hlds__delay_partial_inst__closure_arg,
#line 510 "delay_partial_inst.m"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_1,
#line 510 "delay_partial_inst.m"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_2,
#line 510 "delay_partial_inst.m"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_3,
#line 510 "delay_partial_inst.m"
  MR_Box * check_hlds__delay_partial_inst__wrapper_arg_4);

#line 485 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_partial_construct_7_p_0(
#line 485 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__GoalInfo0_8,
#line 485 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__Unify_9,
#line 485 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__Goal_10,
#line 485 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_26,
#line 485 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_27,
#line 485 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_28,
#line 485 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_29);

#line 465 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_cases_7_p_0(
#line 465 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__InstMap0_1,
#line 465 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__2_2,
#line 465 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__HeadVar__3_3,
#line 465 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_4,
#line 465 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_5,
#line 465 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_6,
#line 465 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_7);

#line 437 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_disj_7_p_0(
#line 437 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__InstMap0_1,
#line 437 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__2_2,
#line 437 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__HeadVar__3_3,
#line 437 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_4,
#line 437 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_5,
#line 437 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_6,
#line 437 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_7);

#line 421 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_conj_7_p_0(
#line 421 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__InstMap0_1,
#line 421 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__2_2,
#line 421 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__HeadVar__3_3,
#line 421 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_4,
#line 421 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_5,
#line 421 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_6,
#line 421 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_7);

#line 337 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_1(
#line 337 "delay_partial_inst.m"
  void * check_hlds__delay_partial_inst__env_ptr_arg);

#line 337 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_3(
#line 337 "delay_partial_inst.m"
  void * check_hlds__delay_partial_inst__env_ptr_arg);

#line 337 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_2(
#line 337 "delay_partial_inst.m"
  void * check_hlds__delay_partial_inst__env_ptr_arg);

#line 337 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_4(
#line 337 "delay_partial_inst.m"
  void * check_hlds__delay_partial_inst__env_ptr_arg);

#line 273 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(
#line 273 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__InstMap0_8,
#line 273 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__Goal0_9,
#line 273 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__Goal_10,
#line 273 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_121,
#line 273 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_122,
#line 273 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_123,
#line 273 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_124);

#line 221 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_proc_6_p_0(
#line 221 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__ModuleInfo_7,
#line 221 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__PredId_8,
#line 221 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__ProcTable_9,
#line 221 "delay_partial_inst.m"
  MR_Integer check_hlds__delay_partial_inst__ProcId_10,
#line 221 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ChangedProcs_0_27,
#line 221 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_ChangedProcs_28);

#line 208 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_preds_acc_5_p_0_1(
#line 208 "delay_partial_inst.m"
  MR_Box check_hlds__delay_partial_inst__closure_arg,
#line 208 "delay_partial_inst.m"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_1,
#line 208 "delay_partial_inst.m"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_2,
#line 208 "delay_partial_inst.m"
  MR_Box * check_hlds__delay_partial_inst__wrapper_arg_3);

#line 198 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_preds_acc_5_p_0(
#line 198 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__1_1,
#line 198 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_RevChangedPredIds_0_2,
#line 198 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_RevChangedPredIds_3,
#line 198 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_0_4,
#line 198 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_5);


static /* final */ const MR_Box check_hlds__delay_partial_inst_scalar_common_1[4][3];

static /* final */ const MR_Box check_hlds__delay_partial_inst_scalar_common_2[4][2];

static /* final */ const MR_Box check_hlds__delay_partial_inst_scalar_common_3[2][9];

static /* final */ const MR_Box check_hlds__delay_partial_inst_scalar_common_4[1][1];




static /* final */ const MR_Box check_hlds__delay_partial_inst_scalar_common_1[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&check_hlds__delay_partial_inst_scalar_common_2[2]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__delay_partial_inst_scalar_common_2[1])),
    ((MR_Box) (&check_hlds__delay_partial_inst_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__delay_partial_inst_scalar_common_2[1])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box check_hlds__delay_partial_inst_scalar_common_2[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__delay_partial_inst_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__delay_partial_inst_scalar_common_2[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__delay_partial_inst_scalar_common_3[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__delay_partial_inst__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__delay_partial_inst__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&check_hlds__delay_partial_inst__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0hlds__hlds_pred__type_ctor_info_proc_info_0))
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
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 690 "check_hlds.delay_partial_inst.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__delay_partial_inst__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0
  }
};

#line 699 "check_hlds.delay_partial_inst.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__delay_partial_inst__pair__ti_pair_2builtin__type_ctor_info_int_0hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0
  }
};

#line 708 "check_hlds.delay_partial_inst.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__delay_partial_inst__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__delay_partial_inst__pair__ti_pair_2builtin__type_ctor_info_int_0hlds__hlds_pred__type_ctor_info_proc_info_0
  }
};

#line 716 "check_hlds.delay_partial_inst.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__delay_partial_inst__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 724 "check_hlds.delay_partial_inst.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_partial_inst__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 732 "check_hlds.delay_partial_inst.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_partial_inst__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__delay_partial_inst__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 740 "check_hlds.delay_partial_inst.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__delay_partial_inst__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
    (MR_TypeInfo) &check_hlds__delay_partial_inst__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 749 "check_hlds.delay_partial_inst.c"
const MR_TypeCtorInfo_Struct check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__type_ctor_info_canon_vars_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__delay_partial_inst____Unify____canon_vars_map_0_0_10001)),
  ((MR_Box) (check_hlds__delay_partial_inst____Compare____canon_vars_map_0_0_10001)),
  (MR_String) "check_hlds.delay_partial_inst",
  (MR_String) "canon_vars_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__delay_partial_inst__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 766 "check_hlds.delay_partial_inst.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__delay_partial_inst__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__delay_partial_inst__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &check_hlds__delay_partial_inst__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 775 "check_hlds.delay_partial_inst.c"
const MR_TypeCtorInfo_Struct check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__type_ctor_info_construct_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__delay_partial_inst____Unify____construct_map_0_0_10001)),
  ((MR_Box) (check_hlds__delay_partial_inst____Compare____construct_map_0_0_10001)),
  (MR_String) "check_hlds.delay_partial_inst",
  (MR_String) "construct_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__delay_partial_inst__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 792 "check_hlds.delay_partial_inst.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_partial_inst__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 800 "check_hlds.delay_partial_inst.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__delay_partial_inst__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__delay_partial_inst__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 809 "check_hlds.delay_partial_inst.c"
static const MR_PseudoTypeInfo check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__field_types_delay_partial_inst_info_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &check_hlds__delay_partial_inst__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__delay_partial_inst__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 817 "check_hlds.delay_partial_inst.c"
static const MR_ConstString check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__field_names_delay_partial_inst_info_0_0[4] = {
  (MR_String) "dpi_module_info",
  (MR_String) "dpi_varset",
  (MR_String) "dpi_vartypes",
  (MR_String) "dpi_changed"
};

#line 825 "check_hlds.delay_partial_inst.c"
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

#line 840 "check_hlds.delay_partial_inst.c"
static const MR_DuFunctorDescPtr check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__du_stag_ordered_delay_partial_inst_info_0_0[1] = {
  &check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__du_functor_desc_delay_partial_inst_info_0_0
};

#line 845 "check_hlds.delay_partial_inst.c"
static const MR_DuPtagLayout check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__du_ptag_ordered_delay_partial_inst_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__du_stag_ordered_delay_partial_inst_info_0_0
  }
};

#line 854 "check_hlds.delay_partial_inst.c"
static const MR_DuFunctorDescPtr check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__du_name_ordered_delay_partial_inst_info_0[1] = {
  &check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__du_functor_desc_delay_partial_inst_info_0_0
};

#line 859 "check_hlds.delay_partial_inst.c"
static const MR_Integer check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__functor_number_map_delay_partial_inst_info_0[1] = {
  (MR_Integer) 0
};

#line 864 "check_hlds.delay_partial_inst.c"
const MR_TypeCtorInfo_Struct check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__type_ctor_info_delay_partial_inst_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__delay_partial_inst____Unify____delay_partial_inst_info_0_0_10001)),
  ((MR_Box) (check_hlds__delay_partial_inst____Compare____delay_partial_inst_info_0_0_10001)),
  (MR_String) "check_hlds.delay_partial_inst",
  (MR_String) "delay_partial_inst_info",
  {     check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__du_name_ordered_delay_partial_inst_info_0 },
  {     check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__du_ptag_ordered_delay_partial_inst_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__functor_number_map_delay_partial_inst_info_0
};

#line 881 "check_hlds.delay_partial_inst.c"
static MR_bool MR_CALL 
check_hlds__delay_partial_inst____Unify____canon_vars_map_0_0_10001(
#line 884 "check_hlds.delay_partial_inst.c"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_1,
#line 886 "check_hlds.delay_partial_inst.c"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_2)
#line 888 "check_hlds.delay_partial_inst.c"
{
#line 890 "check_hlds.delay_partial_inst.c"
  {
#line 892 "check_hlds.delay_partial_inst.c"
    MR_bool check_hlds__delay_partial_inst__succeeded;

#line 895 "check_hlds.delay_partial_inst.c"
    {
#line 897 "check_hlds.delay_partial_inst.c"
      check_hlds__delay_partial_inst__succeeded = check_hlds__delay_partial_inst____Unify____canon_vars_map_0_0(((MR_Word) check_hlds__delay_partial_inst__wrapper_arg_1), ((MR_Word) check_hlds__delay_partial_inst__wrapper_arg_2));
    }
#line 900 "check_hlds.delay_partial_inst.c"
    return check_hlds__delay_partial_inst__succeeded;
#line 902 "check_hlds.delay_partial_inst.c"
  }
#line 904 "check_hlds.delay_partial_inst.c"
}

#line 907 "check_hlds.delay_partial_inst.c"
static void MR_CALL 
check_hlds__delay_partial_inst____Compare____canon_vars_map_0_0_10001(
#line 910 "check_hlds.delay_partial_inst.c"
  MR_Box * check_hlds__delay_partial_inst__wrapper_arg_1,
#line 912 "check_hlds.delay_partial_inst.c"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_2,
#line 914 "check_hlds.delay_partial_inst.c"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_3)
#line 916 "check_hlds.delay_partial_inst.c"
{
#line 918 "check_hlds.delay_partial_inst.c"
  {
#line 920 "check_hlds.delay_partial_inst.c"
    MR_Word check_hlds__delay_partial_inst__conv0_HeadVar__1_1;

#line 923 "check_hlds.delay_partial_inst.c"
    {
#line 925 "check_hlds.delay_partial_inst.c"
      check_hlds__delay_partial_inst____Compare____canon_vars_map_0_0(&check_hlds__delay_partial_inst__conv0_HeadVar__1_1, ((MR_Word) check_hlds__delay_partial_inst__wrapper_arg_2), ((MR_Word) check_hlds__delay_partial_inst__wrapper_arg_3));
    }
#line 928 "check_hlds.delay_partial_inst.c"
    *check_hlds__delay_partial_inst__wrapper_arg_1 = ((MR_Box) (check_hlds__delay_partial_inst__conv0_HeadVar__1_1));
#line 930 "check_hlds.delay_partial_inst.c"
  }
#line 932 "check_hlds.delay_partial_inst.c"
}

#line 935 "check_hlds.delay_partial_inst.c"
static MR_bool MR_CALL 
check_hlds__delay_partial_inst____Unify____construct_map_0_0_10001(
#line 938 "check_hlds.delay_partial_inst.c"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_1,
#line 940 "check_hlds.delay_partial_inst.c"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_2)
#line 942 "check_hlds.delay_partial_inst.c"
{
#line 944 "check_hlds.delay_partial_inst.c"
  {
#line 946 "check_hlds.delay_partial_inst.c"
    MR_bool check_hlds__delay_partial_inst__succeeded;

#line 949 "check_hlds.delay_partial_inst.c"
    {
#line 951 "check_hlds.delay_partial_inst.c"
      check_hlds__delay_partial_inst__succeeded = check_hlds__delay_partial_inst____Unify____construct_map_0_0(((MR_Word) check_hlds__delay_partial_inst__wrapper_arg_1), ((MR_Word) check_hlds__delay_partial_inst__wrapper_arg_2));
    }
#line 954 "check_hlds.delay_partial_inst.c"
    return check_hlds__delay_partial_inst__succeeded;
#line 956 "check_hlds.delay_partial_inst.c"
  }
#line 958 "check_hlds.delay_partial_inst.c"
}

#line 961 "check_hlds.delay_partial_inst.c"
static void MR_CALL 
check_hlds__delay_partial_inst____Compare____construct_map_0_0_10001(
#line 964 "check_hlds.delay_partial_inst.c"
  MR_Box * check_hlds__delay_partial_inst__wrapper_arg_1,
#line 966 "check_hlds.delay_partial_inst.c"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_2,
#line 968 "check_hlds.delay_partial_inst.c"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_3)
#line 970 "check_hlds.delay_partial_inst.c"
{
#line 972 "check_hlds.delay_partial_inst.c"
  {
#line 974 "check_hlds.delay_partial_inst.c"
    MR_Word check_hlds__delay_partial_inst__conv0_HeadVar__1_1;

#line 977 "check_hlds.delay_partial_inst.c"
    {
#line 979 "check_hlds.delay_partial_inst.c"
      check_hlds__delay_partial_inst____Compare____construct_map_0_0(&check_hlds__delay_partial_inst__conv0_HeadVar__1_1, ((MR_Word) check_hlds__delay_partial_inst__wrapper_arg_2), ((MR_Word) check_hlds__delay_partial_inst__wrapper_arg_3));
    }
#line 982 "check_hlds.delay_partial_inst.c"
    *check_hlds__delay_partial_inst__wrapper_arg_1 = ((MR_Box) (check_hlds__delay_partial_inst__conv0_HeadVar__1_1));
#line 984 "check_hlds.delay_partial_inst.c"
  }
#line 986 "check_hlds.delay_partial_inst.c"
}

#line 989 "check_hlds.delay_partial_inst.c"
static MR_bool MR_CALL 
check_hlds__delay_partial_inst____Unify____delay_partial_inst_info_0_0_10001(
#line 992 "check_hlds.delay_partial_inst.c"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_1,
#line 994 "check_hlds.delay_partial_inst.c"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_2)
#line 996 "check_hlds.delay_partial_inst.c"
{
#line 998 "check_hlds.delay_partial_inst.c"
  {
#line 1000 "check_hlds.delay_partial_inst.c"
    MR_bool check_hlds__delay_partial_inst__succeeded;

#line 1003 "check_hlds.delay_partial_inst.c"
    {
#line 1005 "check_hlds.delay_partial_inst.c"
      check_hlds__delay_partial_inst__succeeded = check_hlds__delay_partial_inst____Unify____delay_partial_inst_info_0_0(((MR_Word) check_hlds__delay_partial_inst__wrapper_arg_1), ((MR_Word) check_hlds__delay_partial_inst__wrapper_arg_2));
    }
#line 1008 "check_hlds.delay_partial_inst.c"
    return check_hlds__delay_partial_inst__succeeded;
#line 1010 "check_hlds.delay_partial_inst.c"
  }
#line 1012 "check_hlds.delay_partial_inst.c"
}

#line 1015 "check_hlds.delay_partial_inst.c"
static void MR_CALL 
check_hlds__delay_partial_inst____Compare____delay_partial_inst_info_0_0_10001(
#line 1018 "check_hlds.delay_partial_inst.c"
  MR_Box * check_hlds__delay_partial_inst__wrapper_arg_1,
#line 1020 "check_hlds.delay_partial_inst.c"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_2,
#line 1022 "check_hlds.delay_partial_inst.c"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_3)
#line 1024 "check_hlds.delay_partial_inst.c"
{
#line 1026 "check_hlds.delay_partial_inst.c"
  {
#line 1028 "check_hlds.delay_partial_inst.c"
    MR_Word check_hlds__delay_partial_inst__conv0_HeadVar__1_1;

#line 1031 "check_hlds.delay_partial_inst.c"
    {
#line 1033 "check_hlds.delay_partial_inst.c"
      check_hlds__delay_partial_inst____Compare____delay_partial_inst_info_0_0(&check_hlds__delay_partial_inst__conv0_HeadVar__1_1, ((MR_Word) check_hlds__delay_partial_inst__wrapper_arg_2), ((MR_Word) check_hlds__delay_partial_inst__wrapper_arg_3));
    }
#line 1036 "check_hlds.delay_partial_inst.c"
    *check_hlds__delay_partial_inst__wrapper_arg_1 = ((MR_Box) (check_hlds__delay_partial_inst__conv0_HeadVar__1_1));
#line 1038 "check_hlds.delay_partial_inst.c"
  }
#line 1040 "check_hlds.delay_partial_inst.c"
}

#line 154 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst____Compare____delay_partial_inst_info_0_0(
#line 154 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__HeadVar__1_1,
#line 154 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__2_2,
#line 154 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__3_3)
#line 154 "delay_partial_inst.m"
{
#line 154 "delay_partial_inst.m"
  {
#line 154 "delay_partial_inst.m"
    MR_bool check_hlds__delay_partial_inst__succeeded;
#line 154 "delay_partial_inst.m"
    MR_Integer check_hlds__delay_partial_inst__CastX_15 = (MR_Integer) check_hlds__delay_partial_inst__HeadVar__2_2;
#line 154 "delay_partial_inst.m"
    MR_Integer check_hlds__delay_partial_inst__CastY_16 = (MR_Integer) check_hlds__delay_partial_inst__HeadVar__3_3;

#line 154 "delay_partial_inst.m"
    check_hlds__delay_partial_inst__succeeded = (check_hlds__delay_partial_inst__CastX_15 == check_hlds__delay_partial_inst__CastY_16);
#line 154 "delay_partial_inst.m"
    if (check_hlds__delay_partial_inst__succeeded)
#line 1067 "check_hlds.delay_partial_inst.c"
      *check_hlds__delay_partial_inst__HeadVar__1_1 = (MR_Integer) 0;
#line 154 "delay_partial_inst.m"
    else
#line 154 "delay_partial_inst.m"
      {
#line 154 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__HeadVar__2_2, (MR_Integer) 0)));
#line 154 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__HeadVar__2_2, (MR_Integer) 1)));
#line 154 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__HeadVar__2_2, (MR_Integer) 2)));
#line 154 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__HeadVar__2_2, (MR_Integer) 3)));
#line 154 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__HeadVar__3_3, (MR_Integer) 0)));
#line 154 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__HeadVar__3_3, (MR_Integer) 1)));
#line 154 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__HeadVar__3_3, (MR_Integer) 2)));
#line 154 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__HeadVar__3_3, (MR_Integer) 3)));
#line 154 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__V_12_12;

#line 154 "delay_partial_inst.m"
        {
#line 154 "delay_partial_inst.m"
          hlds__hlds_module____Compare____module_info_0_0(&check_hlds__delay_partial_inst__V_12_12, check_hlds__delay_partial_inst__V_4_4, check_hlds__delay_partial_inst__V_8_8);
        }
#line 1097 "check_hlds.delay_partial_inst.c"
        check_hlds__delay_partial_inst__succeeded = (check_hlds__delay_partial_inst__V_12_12 == (MR_Integer) 0);
#line 154 "delay_partial_inst.m"
        check_hlds__delay_partial_inst__succeeded = !(check_hlds__delay_partial_inst__succeeded);
#line 154 "delay_partial_inst.m"
        if (check_hlds__delay_partial_inst__succeeded)
#line 154 "delay_partial_inst.m"
          *check_hlds__delay_partial_inst__HeadVar__1_1 = check_hlds__delay_partial_inst__V_12_12;
#line 154 "delay_partial_inst.m"
        else
#line 154 "delay_partial_inst.m"
          {
#line 154 "delay_partial_inst.m"
            MR_Word check_hlds__delay_partial_inst__V_13_13;

#line 154 "delay_partial_inst.m"
            {
#line 154 "delay_partial_inst.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[3], &check_hlds__delay_partial_inst__V_13_13, ((MR_Box) (check_hlds__delay_partial_inst__V_5_5)), ((MR_Box) (check_hlds__delay_partial_inst__V_9_9)));
            }
#line 1117 "check_hlds.delay_partial_inst.c"
            check_hlds__delay_partial_inst__succeeded = (check_hlds__delay_partial_inst__V_13_13 == (MR_Integer) 0);
#line 154 "delay_partial_inst.m"
            check_hlds__delay_partial_inst__succeeded = !(check_hlds__delay_partial_inst__succeeded);
#line 154 "delay_partial_inst.m"
            if (check_hlds__delay_partial_inst__succeeded)
#line 154 "delay_partial_inst.m"
              *check_hlds__delay_partial_inst__HeadVar__1_1 = check_hlds__delay_partial_inst__V_13_13;
#line 154 "delay_partial_inst.m"
            else
#line 154 "delay_partial_inst.m"
              {
#line 154 "delay_partial_inst.m"
                MR_Word check_hlds__delay_partial_inst__V_14_14;

#line 154 "delay_partial_inst.m"
                {
#line 154 "delay_partial_inst.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__delay_partial_inst_scalar_common_1[3], &check_hlds__delay_partial_inst__V_14_14, ((MR_Box) (check_hlds__delay_partial_inst__V_6_6)), ((MR_Box) (check_hlds__delay_partial_inst__V_10_10)));
                }
#line 1137 "check_hlds.delay_partial_inst.c"
                check_hlds__delay_partial_inst__succeeded = (check_hlds__delay_partial_inst__V_14_14 == (MR_Integer) 0);
#line 154 "delay_partial_inst.m"
                check_hlds__delay_partial_inst__succeeded = !(check_hlds__delay_partial_inst__succeeded);
#line 154 "delay_partial_inst.m"
                if (check_hlds__delay_partial_inst__succeeded)
#line 154 "delay_partial_inst.m"
                  *check_hlds__delay_partial_inst__HeadVar__1_1 = check_hlds__delay_partial_inst__V_14_14;
#line 154 "delay_partial_inst.m"
                else
#line 154 "delay_partial_inst.m"
                  {
#line 154 "delay_partial_inst.m"
                    MR_Integer check_hlds__delay_partial_inst__V_21_21 = (MR_Integer) check_hlds__delay_partial_inst__V_7_7;
#line 154 "delay_partial_inst.m"
                    MR_Integer check_hlds__delay_partial_inst__V_22_22 = (MR_Integer) check_hlds__delay_partial_inst__V_11_11;

#line 154 "delay_partial_inst.m"
                    {
#line 154 "delay_partial_inst.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__delay_partial_inst__HeadVar__1_1, check_hlds__delay_partial_inst__V_21_21, check_hlds__delay_partial_inst__V_22_22);
#line 154 "delay_partial_inst.m"
                      return;
                    }
#line 154 "delay_partial_inst.m"
                  }
#line 154 "delay_partial_inst.m"
              }
#line 154 "delay_partial_inst.m"
          }
#line 154 "delay_partial_inst.m"
      }
#line 154 "delay_partial_inst.m"
  }
#line 154 "delay_partial_inst.m"
}

#line 154 "delay_partial_inst.m"
static MR_bool MR_CALL 
check_hlds__delay_partial_inst____Unify____delay_partial_inst_info_0_0(
#line 154 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__1_1,
#line 154 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__2_2)
#line 154 "delay_partial_inst.m"
{
#line 154 "delay_partial_inst.m"
  {
#line 154 "delay_partial_inst.m"
    MR_bool check_hlds__delay_partial_inst__succeeded;
#line 154 "delay_partial_inst.m"
    MR_Integer check_hlds__delay_partial_inst__CastX_11 = (MR_Integer) check_hlds__delay_partial_inst__HeadVar__1_1;
#line 154 "delay_partial_inst.m"
    MR_Integer check_hlds__delay_partial_inst__CastY_12 = (MR_Integer) check_hlds__delay_partial_inst__HeadVar__2_2;

#line 154 "delay_partial_inst.m"
    check_hlds__delay_partial_inst__succeeded = (check_hlds__delay_partial_inst__CastX_11 == check_hlds__delay_partial_inst__CastY_12);
#line 154 "delay_partial_inst.m"
    if (check_hlds__delay_partial_inst__succeeded)
#line 154 "delay_partial_inst.m"
      check_hlds__delay_partial_inst__succeeded = MR_TRUE;
#line 154 "delay_partial_inst.m"
    else
#line 154 "delay_partial_inst.m"
      {
#line 154 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__TypeInfo_14_14;
#line 154 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__TypeInfo_15_15;
#line 154 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__HeadVar__1_1, (MR_Integer) 0)));
#line 154 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__HeadVar__1_1, (MR_Integer) 1)));
#line 154 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__HeadVar__1_1, (MR_Integer) 2)));
#line 154 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__HeadVar__1_1, (MR_Integer) 3)));
#line 154 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__HeadVar__2_2, (MR_Integer) 0)));
#line 154 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__HeadVar__2_2, (MR_Integer) 1)));
#line 154 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__HeadVar__2_2, (MR_Integer) 2)));
#line 154 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__HeadVar__2_2, (MR_Integer) 3)));

#line 1223 "check_hlds.delay_partial_inst.c"
        {
#line 1225 "check_hlds.delay_partial_inst.c"
          check_hlds__delay_partial_inst__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__delay_partial_inst__V_3_3, check_hlds__delay_partial_inst__V_7_7);
        }
#line 154 "delay_partial_inst.m"
        if (check_hlds__delay_partial_inst__succeeded)
#line 154 "delay_partial_inst.m"
          {
#line 1232 "check_hlds.delay_partial_inst.c"
            check_hlds__delay_partial_inst__TypeInfo_14_14 = (MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[3];
#line 1234 "check_hlds.delay_partial_inst.c"
            {
#line 1236 "check_hlds.delay_partial_inst.c"
              check_hlds__delay_partial_inst__succeeded = mercury__builtin__unify_2_p_0(check_hlds__delay_partial_inst__TypeInfo_14_14, ((MR_Box) (check_hlds__delay_partial_inst__V_4_4)), ((MR_Box) (check_hlds__delay_partial_inst__V_8_8)));
            }
#line 154 "delay_partial_inst.m"
            if (check_hlds__delay_partial_inst__succeeded)
#line 154 "delay_partial_inst.m"
              {
#line 1243 "check_hlds.delay_partial_inst.c"
                check_hlds__delay_partial_inst__TypeInfo_15_15 = (MR_Word) &check_hlds__delay_partial_inst_scalar_common_1[3];
#line 1245 "check_hlds.delay_partial_inst.c"
                {
#line 1247 "check_hlds.delay_partial_inst.c"
                  check_hlds__delay_partial_inst__succeeded = mercury__builtin__unify_2_p_0(check_hlds__delay_partial_inst__TypeInfo_15_15, ((MR_Box) (check_hlds__delay_partial_inst__V_5_5)), ((MR_Box) (check_hlds__delay_partial_inst__V_9_9)));
                }
#line 154 "delay_partial_inst.m"
                if (check_hlds__delay_partial_inst__succeeded)
#line 1252 "check_hlds.delay_partial_inst.c"
                  check_hlds__delay_partial_inst__succeeded = (check_hlds__delay_partial_inst__V_6_6 == check_hlds__delay_partial_inst__V_10_10);
#line 154 "delay_partial_inst.m"
              }
#line 154 "delay_partial_inst.m"
          }
#line 154 "delay_partial_inst.m"
      }
#line 154 "delay_partial_inst.m"
    return check_hlds__delay_partial_inst__succeeded;
#line 154 "delay_partial_inst.m"
  }
#line 154 "delay_partial_inst.m"
}

#line 185 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst____Compare____construct_map_0_0(
#line 185 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__HeadVar__1_1,
#line 185 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__2_2,
#line 185 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__3_3)
#line 185 "delay_partial_inst.m"
{
#line 185 "delay_partial_inst.m"
  {
#line 185 "delay_partial_inst.m"
    MR_bool check_hlds__delay_partial_inst__succeeded;
#line 185 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__Cast_HeadVar1_4 = check_hlds__delay_partial_inst__HeadVar__2_2;
#line 185 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__Cast_HeadVar2_5 = check_hlds__delay_partial_inst__HeadVar__3_3;

#line 185 "delay_partial_inst.m"
    {
#line 185 "delay_partial_inst.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__delay_partial_inst_scalar_common_1[2], check_hlds__delay_partial_inst__HeadVar__1_1, ((MR_Box) (check_hlds__delay_partial_inst__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__delay_partial_inst__Cast_HeadVar2_5)));
#line 185 "delay_partial_inst.m"
      return;
    }
#line 185 "delay_partial_inst.m"
  }
#line 185 "delay_partial_inst.m"
}

#line 185 "delay_partial_inst.m"
static MR_bool MR_CALL 
check_hlds__delay_partial_inst____Unify____construct_map_0_0(
#line 185 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__1_1,
#line 185 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__2_2)
#line 185 "delay_partial_inst.m"
{
#line 185 "delay_partial_inst.m"
  {
#line 185 "delay_partial_inst.m"
    MR_bool check_hlds__delay_partial_inst__succeeded;
#line 185 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__Cast_HeadVar1_3 = check_hlds__delay_partial_inst__HeadVar__1_1;
#line 185 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__Cast_HeadVar2_4 = check_hlds__delay_partial_inst__HeadVar__2_2;

#line 185 "delay_partial_inst.m"
    {
#line 185 "delay_partial_inst.m"
      return check_hlds__delay_partial_inst__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__delay_partial_inst_scalar_common_1[2], ((MR_Box) (check_hlds__delay_partial_inst__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__delay_partial_inst__Cast_HeadVar2_4)));
    }
#line 185 "delay_partial_inst.m"
    return check_hlds__delay_partial_inst__succeeded;
#line 185 "delay_partial_inst.m"
  }
#line 185 "delay_partial_inst.m"
}

#line 187 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst____Compare____canon_vars_map_0_0(
#line 187 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__HeadVar__1_1,
#line 187 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__2_2,
#line 187 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__3_3)
#line 187 "delay_partial_inst.m"
{
#line 187 "delay_partial_inst.m"
  {
#line 187 "delay_partial_inst.m"
    MR_bool check_hlds__delay_partial_inst__succeeded;
#line 187 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__Cast_HeadVar1_4 = check_hlds__delay_partial_inst__HeadVar__2_2;
#line 187 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__Cast_HeadVar2_5 = check_hlds__delay_partial_inst__HeadVar__3_3;

#line 187 "delay_partial_inst.m"
    {
#line 187 "delay_partial_inst.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__delay_partial_inst_scalar_common_1[1], check_hlds__delay_partial_inst__HeadVar__1_1, ((MR_Box) (check_hlds__delay_partial_inst__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__delay_partial_inst__Cast_HeadVar2_5)));
#line 187 "delay_partial_inst.m"
      return;
    }
#line 187 "delay_partial_inst.m"
  }
#line 187 "delay_partial_inst.m"
}

#line 187 "delay_partial_inst.m"
static MR_bool MR_CALL 
check_hlds__delay_partial_inst____Unify____canon_vars_map_0_0(
#line 187 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__1_1,
#line 187 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__2_2)
#line 187 "delay_partial_inst.m"
{
#line 187 "delay_partial_inst.m"
  {
#line 187 "delay_partial_inst.m"
    MR_bool check_hlds__delay_partial_inst__succeeded;
#line 187 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__Cast_HeadVar1_3 = check_hlds__delay_partial_inst__HeadVar__1_1;
#line 187 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__Cast_HeadVar2_4 = check_hlds__delay_partial_inst__HeadVar__2_2;

#line 187 "delay_partial_inst.m"
    {
#line 187 "delay_partial_inst.m"
      return check_hlds__delay_partial_inst__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__delay_partial_inst_scalar_common_1[1], ((MR_Box) (check_hlds__delay_partial_inst__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__delay_partial_inst__Cast_HeadVar2_4)));
    }
#line 187 "delay_partial_inst.m"
    return check_hlds__delay_partial_inst__succeeded;
#line 187 "delay_partial_inst.m"
  }
#line 187 "delay_partial_inst.m"
}

#line 611 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_complicated_unify_9_p_0(
#line 611 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__Goal0_10,
#line 611 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__LHS_11,
#line 611 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__RHS0_12,
#line 611 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__Unify_13,
#line 611 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__Goal_14,
#line 611 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_28,
#line 611 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_29,
#line 611 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_30,
#line 611 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_31)
#line 611 "delay_partial_inst.m"
{
#line 618 "delay_partial_inst.m"
  {
#line 618 "delay_partial_inst.m"
    MR_bool check_hlds__delay_partial_inst__succeeded;
#line 618 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__CanFail_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__Unify_13, (MR_Integer) 2)));
#line 619 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst___UniMode_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__Unify_13, (MR_Integer) 1)));
#line 619 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst___TypeInfos_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__Unify_13, (MR_Integer) 3)));
#line 647 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__RHSVar_20;
#line 647 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__ConsId_21;
#line 647 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__CanonArgs_22;
#line 633 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__TypeInfo_20_54;
#line 633 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__TypeInfo_21_55;
#line 633 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__TypeCtorInfo_22_56;
#line 633 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__TypeInfo_23_57;
#line 633 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__CanonVarsMap_43;
#line 633 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__List_44;
#line 633 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__Rest_45;
#line 633 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__V_58_58;
#line 655 "delay_partial_inst.m"
    MR_Box check_hlds__delay_partial_inst__conv0_CanonVarsMap_43;

#line 633 "delay_partial_inst.m"
    check_hlds__delay_partial_inst__succeeded = (check_hlds__delay_partial_inst__CanFail_18 == (MR_Integer) 0);
#line 633 "delay_partial_inst.m"
    if (check_hlds__delay_partial_inst__succeeded)
#line 633 "delay_partial_inst.m"
      {
#line 634 "delay_partial_inst.m"
        check_hlds__delay_partial_inst__succeeded = ((MR_tag((MR_Word) check_hlds__delay_partial_inst__RHS0_12)) == (MR_mktag((MR_Integer) 0)));
#line 634 "delay_partial_inst.m"
        if (check_hlds__delay_partial_inst__succeeded)
#line 634 "delay_partial_inst.m"
          {
#line 634 "delay_partial_inst.m"
            check_hlds__delay_partial_inst__RHSVar_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__RHS0_12, (MR_Integer) 0)));
#line 1463 "check_hlds.delay_partial_inst.c"
            check_hlds__delay_partial_inst__TypeInfo_20_54 = (MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[1];
#line 1465 "check_hlds.delay_partial_inst.c"
            check_hlds__delay_partial_inst__TypeInfo_21_55 = (MR_Word) &check_hlds__delay_partial_inst_scalar_common_1[1];
#line 655 "delay_partial_inst.m"
            {
#line 655 "delay_partial_inst.m"
              check_hlds__delay_partial_inst__succeeded = mercury__map__search_3_p_0(check_hlds__delay_partial_inst__TypeInfo_20_54, check_hlds__delay_partial_inst__TypeInfo_21_55, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_28, ((MR_Box) (check_hlds__delay_partial_inst__LHS_11)), &check_hlds__delay_partial_inst__conv0_CanonVarsMap_43);
            }
#line 655 "delay_partial_inst.m"
            if (check_hlds__delay_partial_inst__succeeded)
#line 655 "delay_partial_inst.m"
              {
#line 655 "delay_partial_inst.m"
                check_hlds__delay_partial_inst__CanonVarsMap_43 = ((MR_Word) check_hlds__delay_partial_inst__conv0_CanonVarsMap_43);
#line 655 "delay_partial_inst.m"
                check_hlds__delay_partial_inst__succeeded = MR_TRUE;
#line 655 "delay_partial_inst.m"
              }
#line 633 "delay_partial_inst.m"
            if (check_hlds__delay_partial_inst__succeeded)
#line 633 "delay_partial_inst.m"
              {
#line 1486 "check_hlds.delay_partial_inst.c"
                check_hlds__delay_partial_inst__TypeCtorInfo_22_56 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 1488 "check_hlds.delay_partial_inst.c"
                check_hlds__delay_partial_inst__TypeInfo_23_57 = (MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[2];
#line 656 "delay_partial_inst.m"
                {
#line 656 "delay_partial_inst.m"
                  check_hlds__delay_partial_inst__List_44 = mercury__map__to_assoc_list_1_f_0(check_hlds__delay_partial_inst__TypeCtorInfo_22_56, check_hlds__delay_partial_inst__TypeInfo_23_57, check_hlds__delay_partial_inst__CanonVarsMap_43);
                }
#line 1495 "check_hlds.delay_partial_inst.c"
                check_hlds__delay_partial_inst__succeeded = ((MR_tag((MR_Word) check_hlds__delay_partial_inst__List_44)) == (MR_mktag((MR_Integer) 1)));
#line 1497 "check_hlds.delay_partial_inst.c"
                if (check_hlds__delay_partial_inst__succeeded)
#line 1499 "check_hlds.delay_partial_inst.c"
                  {
#line 1501 "check_hlds.delay_partial_inst.c"
                    check_hlds__delay_partial_inst__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__List_44, (MR_Integer) 0)));
#line 1503 "check_hlds.delay_partial_inst.c"
                    check_hlds__delay_partial_inst__Rest_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__List_44, (MR_Integer) 1)));
#line 661 "delay_partial_inst.m"
                    check_hlds__delay_partial_inst__ConsId_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_58_58, (MR_Integer) 0)));
#line 661 "delay_partial_inst.m"
                    check_hlds__delay_partial_inst__CanonArgs_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_58_58, (MR_Integer) 1)));
#line 664 "delay_partial_inst.m"
                    if ((check_hlds__delay_partial_inst__Rest_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 663 "delay_partial_inst.m"
                      {
#line 663 "delay_partial_inst.m"
                      }
#line 664 "delay_partial_inst.m"
                    else
#line 665 "delay_partial_inst.m"
                      {
#line 669 "delay_partial_inst.m"
                        {
#line 669 "delay_partial_inst.m"
                          mercury__require__sorry_3_p_0((MR_String) "check_hlds.delay_partial_inst", (MR_String) "predicate \140check_hlds.delay_partial_inst.get_sole_cons_id_and_canon_vars\'/4", (MR_String) "delaying partial instantiations when variable could be bound to multiple functors");
#line 669 "delay_partial_inst.m"
                          return;
                        }
#line 665 "delay_partial_inst.m"
                      }
#line 664 "delay_partial_inst.m"
                    check_hlds__delay_partial_inst__succeeded = MR_TRUE;
#line 1530 "check_hlds.delay_partial_inst.c"
                  }
#line 633 "delay_partial_inst.m"
              }
#line 634 "delay_partial_inst.m"
          }
#line 633 "delay_partial_inst.m"
      }
#line 647 "delay_partial_inst.m"
    if (check_hlds__delay_partial_inst__succeeded)
#line 638 "delay_partial_inst.m"
      {
#line 638 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__GoalInfo0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Goal0_10, (MR_Integer) 1)));
#line 638 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__ProgContext_25;
#line 638 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__TestGoal_26;
#line 638 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__AssignGoal_27;
#line 638 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__V_32_32;
#line 638 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Goal0_10, (MR_Integer) 0)));

#line 639 "delay_partial_inst.m"
        {
#line 639 "delay_partial_inst.m"
          check_hlds__delay_partial_inst__ProgContext_25 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__delay_partial_inst__GoalInfo0_24);
        }
#line 641 "delay_partial_inst.m"
        {
#line 641 "delay_partial_inst.m"
          check_hlds__delay_partial_inst__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 641 "delay_partial_inst.m"
          MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__V_32_32, 0) = ((MR_Box) (check_hlds__delay_partial_inst__ConsId_21));
#line 641 "delay_partial_inst.m"
          MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__V_32_32, 1) = ((MR_Box) ((MR_Integer) 0));
#line 641 "delay_partial_inst.m"
          MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__V_32_32, 2) = ((MR_Box) (check_hlds__delay_partial_inst__CanonArgs_22));
#line 641 "delay_partial_inst.m"
        }
#line 640 "delay_partial_inst.m"
        {
#line 640 "delay_partial_inst.m"
          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__delay_partial_inst__RHSVar_20, check_hlds__delay_partial_inst__V_32_32, check_hlds__delay_partial_inst__ProgContext_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__delay_partial_inst__TestGoal_26);
        }
#line 643 "delay_partial_inst.m"
        {
#line 643 "delay_partial_inst.m"
          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__delay_partial_inst__LHS_11, check_hlds__delay_partial_inst__RHS0_12, check_hlds__delay_partial_inst__ProgContext_25, (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__delay_partial_inst_scalar_common_4[0]), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__delay_partial_inst__AssignGoal_27);
        }
#line 646 "delay_partial_inst.m"
        {
#line 646 "delay_partial_inst.m"
          hlds__hlds_goal__conjoin_goals_3_p_0(check_hlds__delay_partial_inst__TestGoal_26, check_hlds__delay_partial_inst__AssignGoal_27, check_hlds__delay_partial_inst__Goal_14);
        }
#line 638 "delay_partial_inst.m"
      }
#line 647 "delay_partial_inst.m"
    else
#line 648 "delay_partial_inst.m"
      *check_hlds__delay_partial_inst__Goal_14 = check_hlds__delay_partial_inst__Goal0_10;
#line 618 "delay_partial_inst.m"
    *check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_31 = check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_30;
#line 618 "delay_partial_inst.m"
    *check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_29 = check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_28;
#line 618 "delay_partial_inst.m"
  }
#line 611 "delay_partial_inst.m"
}

#line 596 "delay_partial_inst.m"
static MR_bool MR_CALL 
check_hlds__delay_partial_inst__maybe_unify_var_with_ground_var_5_f_0(
#line 596 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__ModuleInfo_7,
#line 596 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__Context_8,
#line 596 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__LhsVar_9,
#line 596 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__RhsVar_10,
#line 596 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__ArgMode_11,
#line 596 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__Goal_12)
#line 596 "delay_partial_inst.m"
{
#line 600 "delay_partial_inst.m"
  {
#line 600 "delay_partial_inst.m"
    MR_bool check_hlds__delay_partial_inst__succeeded;
#line 600 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__Inst_15;
#line 600 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__ArgMode_11, (MR_Integer) 1)));
#line 600 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__V_19_19;
#line 600 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__V_20_20;
#line 600 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__V_21_21;
#line 600 "delay_partial_inst.m"
    MR_String check_hlds__delay_partial_inst__V_22_22;
#line 601 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__ArgMode_11, (MR_Integer) 0)));
#line 601 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__V_16_16;

#line 601 "delay_partial_inst.m"
    check_hlds__delay_partial_inst__Inst_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_18_18, (MR_Integer) 0)));
#line 601 "delay_partial_inst.m"
    check_hlds__delay_partial_inst__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_18_18, (MR_Integer) 1)));
#line 602 "delay_partial_inst.m"
    {
#line 602 "delay_partial_inst.m"
      check_hlds__delay_partial_inst__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(check_hlds__delay_partial_inst__ModuleInfo_7, check_hlds__delay_partial_inst__Inst_15);
    }
#line 600 "delay_partial_inst.m"
    if (check_hlds__delay_partial_inst__succeeded)
#line 600 "delay_partial_inst.m"
      {
#line 604 "delay_partial_inst.m"
        check_hlds__delay_partial_inst__V_22_22 = (MR_String) "delay_partial_inst";
#line 604 "delay_partial_inst.m"
        check_hlds__delay_partial_inst__V_21_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 603 "delay_partial_inst.m"
        {
#line 603 "delay_partial_inst.m"
          check_hlds__delay_partial_inst__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 603 "delay_partial_inst.m"
          MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_19_19, 0) = ((MR_Box) (check_hlds__delay_partial_inst__RhsVar_10));
#line 603 "delay_partial_inst.m"
        }
#line 604 "delay_partial_inst.m"
        check_hlds__delay_partial_inst__V_20_20 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__delay_partial_inst_scalar_common_4[0]);
#line 603 "delay_partial_inst.m"
        {
#line 603 "delay_partial_inst.m"
          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__delay_partial_inst__LhsVar_9, check_hlds__delay_partial_inst__V_19_19, check_hlds__delay_partial_inst__Context_8, check_hlds__delay_partial_inst__V_20_20, check_hlds__delay_partial_inst__V_21_21, check_hlds__delay_partial_inst__Goal_12);
        }
#line 603 "delay_partial_inst.m"
        check_hlds__delay_partial_inst__succeeded = MR_TRUE;
#line 600 "delay_partial_inst.m"
      }
#line 600 "delay_partial_inst.m"
    return check_hlds__delay_partial_inst__succeeded;
#line 600 "delay_partial_inst.m"
  }
#line 596 "delay_partial_inst.m"
}

#line 566 "delay_partial_inst.m"
static MR_bool MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_deconstruct_8_p_0_1(
#line 566 "delay_partial_inst.m"
  MR_Box check_hlds__delay_partial_inst__closure_arg,
#line 566 "delay_partial_inst.m"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_1,
#line 566 "delay_partial_inst.m"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_2,
#line 566 "delay_partial_inst.m"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_3,
#line 566 "delay_partial_inst.m"
  MR_Box * check_hlds__delay_partial_inst__wrapper_arg_4)
#line 566 "delay_partial_inst.m"
{
#line 566 "delay_partial_inst.m"
  {
#line 566 "delay_partial_inst.m"
    MR_bool check_hlds__delay_partial_inst__succeeded;
#line 566 "delay_partial_inst.m"
    MR_Box check_hlds__delay_partial_inst__closure = check_hlds__delay_partial_inst__closure_arg;
#line 566 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__conv2_Goal_12;

#line 566 "delay_partial_inst.m"
    {
#line 566 "delay_partial_inst.m"
      check_hlds__delay_partial_inst__succeeded = check_hlds__delay_partial_inst__maybe_unify_var_with_ground_var_5_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__delay_partial_inst__wrapper_arg_1), ((MR_Word) check_hlds__delay_partial_inst__wrapper_arg_2), ((MR_Word) check_hlds__delay_partial_inst__wrapper_arg_3), &check_hlds__delay_partial_inst__conv2_Goal_12);
    }
#line 566 "delay_partial_inst.m"
    if (check_hlds__delay_partial_inst__succeeded)
#line 566 "delay_partial_inst.m"
      {
#line 566 "delay_partial_inst.m"
        *check_hlds__delay_partial_inst__wrapper_arg_4 = ((MR_Box) (check_hlds__delay_partial_inst__conv2_Goal_12));
#line 566 "delay_partial_inst.m"
        check_hlds__delay_partial_inst__succeeded = MR_TRUE;
#line 566 "delay_partial_inst.m"
      }
#line 566 "delay_partial_inst.m"
    return check_hlds__delay_partial_inst__succeeded;
#line 566 "delay_partial_inst.m"
  }
#line 566 "delay_partial_inst.m"
}

#line 549 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_deconstruct_8_p_0(
#line 549 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__Goal0_9,
#line 549 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__UniMode_10,
#line 549 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__Unify_11,
#line 549 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__Goal_12,
#line 549 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_34,
#line 549 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_35,
#line 549 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_36,
#line 549 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_37)
#line 549 "delay_partial_inst.m"
{
#line 555 "delay_partial_inst.m"
  {
#line 555 "delay_partial_inst.m"
    MR_bool check_hlds__delay_partial_inst__succeeded;
#line 555 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__Unify_11, (MR_Integer) 0)));
#line 555 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__ConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__Unify_11, (MR_Integer) 1)));
#line 555 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__Unify_11, (MR_Integer) 2)));
#line 555 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__UniModes_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__Unify_11, (MR_Integer) 3)));
#line 556 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst___CanFail_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__Unify_11, (MR_Integer) 4)));
#line 556 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst___CanCGC_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__Unify_11, (MR_Integer) 5)));
#line 586 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__CanonVarsMap0_21;
#line 586 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__CanonArgs_22;
#line 558 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__TypeCtorInfo_47_47;
#line 558 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__TypeInfo_48_48;
#line 558 "delay_partial_inst.m"
    MR_Box check_hlds__delay_partial_inst__conv0_CanonVarsMap0_21;
#line 559 "delay_partial_inst.m"
    MR_Box check_hlds__delay_partial_inst__conv1_CanonArgs_22;

#line 558 "delay_partial_inst.m"
    {
#line 558 "delay_partial_inst.m"
      check_hlds__delay_partial_inst__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[1], (MR_Word) &check_hlds__delay_partial_inst_scalar_common_1[1], check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_34, ((MR_Box) (check_hlds__delay_partial_inst__Var_15)), &check_hlds__delay_partial_inst__conv0_CanonVarsMap0_21);
    }
#line 558 "delay_partial_inst.m"
    if (check_hlds__delay_partial_inst__succeeded)
#line 558 "delay_partial_inst.m"
      {
#line 558 "delay_partial_inst.m"
        check_hlds__delay_partial_inst__CanonVarsMap0_21 = ((MR_Word) check_hlds__delay_partial_inst__conv0_CanonVarsMap0_21);
#line 558 "delay_partial_inst.m"
        check_hlds__delay_partial_inst__succeeded = MR_TRUE;
#line 558 "delay_partial_inst.m"
      }
#line 558 "delay_partial_inst.m"
    if (check_hlds__delay_partial_inst__succeeded)
#line 558 "delay_partial_inst.m"
      {
#line 1798 "check_hlds.delay_partial_inst.c"
        check_hlds__delay_partial_inst__TypeCtorInfo_47_47 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 1800 "check_hlds.delay_partial_inst.c"
        check_hlds__delay_partial_inst__TypeInfo_48_48 = (MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[2];
#line 559 "delay_partial_inst.m"
        {
#line 559 "delay_partial_inst.m"
          check_hlds__delay_partial_inst__succeeded = mercury__map__search_3_p_0(check_hlds__delay_partial_inst__TypeCtorInfo_47_47, check_hlds__delay_partial_inst__TypeInfo_48_48, check_hlds__delay_partial_inst__CanonVarsMap0_21, ((MR_Box) (check_hlds__delay_partial_inst__ConsId_16)), &check_hlds__delay_partial_inst__conv1_CanonArgs_22);
        }
#line 559 "delay_partial_inst.m"
        if (check_hlds__delay_partial_inst__succeeded)
#line 559 "delay_partial_inst.m"
          {
#line 559 "delay_partial_inst.m"
            check_hlds__delay_partial_inst__CanonArgs_22 = ((MR_Word) check_hlds__delay_partial_inst__conv1_CanonArgs_22);
#line 559 "delay_partial_inst.m"
            check_hlds__delay_partial_inst__succeeded = MR_TRUE;
#line 559 "delay_partial_inst.m"
          }
#line 558 "delay_partial_inst.m"
      }
#line 586 "delay_partial_inst.m"
    if (check_hlds__delay_partial_inst__succeeded)
#line 563 "delay_partial_inst.m"
      {
#line 563 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__TypeInfo_49_49 = (MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[1];
#line 563 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__TypeCtorInfo_51_51 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 563 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__ModuleInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_36, (MR_Integer) 0)));
#line 563 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__ProgContext_24;
#line 563 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__GoalInfo0_25;
#line 563 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__SubUnifyGoals_26;
#line 563 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__LHS_Mode_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__UniMode_10, (MR_Integer) 0)));
#line 563 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__FinalInst_29;
#line 563 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__ConjList_32;
#line 563 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__V_38_38;
#line 563 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_36, (MR_Integer) 1)));
#line 563 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_36, (MR_Integer) 2)));
#line 563 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_36, (MR_Integer) 3)));
#line 570 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst___RHS_Mode_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__UniMode_10, (MR_Integer) 1)));
#line 584 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__V_33_33;

#line 571 "delay_partial_inst.m"
        {
#line 571 "delay_partial_inst.m"
          check_hlds__delay_partial_inst__FinalInst_29 = check_hlds__mode_util__mode_get_final_inst_2_f_0(check_hlds__delay_partial_inst__ModuleInfo_23, check_hlds__delay_partial_inst__LHS_Mode_27);
        }
#line 584 "delay_partial_inst.m"
        check_hlds__delay_partial_inst__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Goal0_9, (MR_Integer) 0)));
#line 584 "delay_partial_inst.m"
        check_hlds__delay_partial_inst__GoalInfo0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Goal0_9, (MR_Integer) 1)));
#line 564 "delay_partial_inst.m"
        {
#line 564 "delay_partial_inst.m"
          check_hlds__delay_partial_inst__ProgContext_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__delay_partial_inst__GoalInfo0_25);
        }
#line 566 "delay_partial_inst.m"
        {
#line 566 "delay_partial_inst.m"
          check_hlds__delay_partial_inst__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 566 "delay_partial_inst.m"
          MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_38_38, 0) = ((MR_Box) (&check_hlds__delay_partial_inst_scalar_common_3[1]));
#line 566 "delay_partial_inst.m"
          MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_38_38, 1) = ((MR_Box) (check_hlds__delay_partial_inst__delay_partial_inst_in_deconstruct_8_p_0_1));
#line 566 "delay_partial_inst.m"
          MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 566 "delay_partial_inst.m"
          MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_38_38, 3) = ((MR_Box) (check_hlds__delay_partial_inst__ModuleInfo_23));
#line 566 "delay_partial_inst.m"
          MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_38_38, 4) = ((MR_Box) (check_hlds__delay_partial_inst__ProgContext_24));
#line 566 "delay_partial_inst.m"
        }
#line 565 "delay_partial_inst.m"
        {
#line 565 "delay_partial_inst.m"
          check_hlds__delay_partial_inst__SubUnifyGoals_26 = mercury__list__filter_map_corresponding3_4_f_0(check_hlds__delay_partial_inst__TypeInfo_49_49, check_hlds__delay_partial_inst__TypeInfo_49_49, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_uni_mode_0, check_hlds__delay_partial_inst__TypeCtorInfo_51_51, check_hlds__delay_partial_inst__V_38_38, check_hlds__delay_partial_inst__CanonArgs_22, check_hlds__delay_partial_inst__Args_17, check_hlds__delay_partial_inst__UniModes_18);
        }
#line 572 "delay_partial_inst.m"
        {
#line 572 "delay_partial_inst.m"
          check_hlds__delay_partial_inst__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(check_hlds__delay_partial_inst__ModuleInfo_23, check_hlds__delay_partial_inst__FinalInst_29);
        }
#line 581 "delay_partial_inst.m"
        if (check_hlds__delay_partial_inst__succeeded)
#line 573 "delay_partial_inst.m"
          {
#line 573 "delay_partial_inst.m"
            MR_Word check_hlds__delay_partial_inst__ConstructGoal_30;
#line 573 "delay_partial_inst.m"
            MR_Word check_hlds__delay_partial_inst__CanonVarsMap_31;
#line 573 "delay_partial_inst.m"
            MR_Word check_hlds__delay_partial_inst__V_40_40;

#line 573 "delay_partial_inst.m"
            {
#line 573 "delay_partial_inst.m"
              hlds__make_goal__construct_functor_4_p_0(check_hlds__delay_partial_inst__Var_15, check_hlds__delay_partial_inst__ConsId_16, check_hlds__delay_partial_inst__CanonArgs_22, &check_hlds__delay_partial_inst__ConstructGoal_30);
            }
#line 577 "delay_partial_inst.m"
            {
#line 577 "delay_partial_inst.m"
              mercury__map__delete_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[2], ((MR_Box) (check_hlds__delay_partial_inst__ConsId_16)), check_hlds__delay_partial_inst__CanonVarsMap0_21, &check_hlds__delay_partial_inst__CanonVarsMap_31);
            }
#line 578 "delay_partial_inst.m"
            {
#line 578 "delay_partial_inst.m"
              mercury__map__det_update_4_p_0(check_hlds__delay_partial_inst__TypeInfo_49_49, (MR_Word) &check_hlds__delay_partial_inst_scalar_common_1[1], ((MR_Box) (check_hlds__delay_partial_inst__Var_15)), ((MR_Box) (check_hlds__delay_partial_inst__CanonVarsMap_31)), check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_34, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_35);
            }
#line 580 "delay_partial_inst.m"
            {
#line 580 "delay_partial_inst.m"
              check_hlds__delay_partial_inst__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 580 "delay_partial_inst.m"
              MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__V_40_40, 0) = ((MR_Box) (check_hlds__delay_partial_inst__ConstructGoal_30));
#line 580 "delay_partial_inst.m"
              MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 580 "delay_partial_inst.m"
            }
#line 580 "delay_partial_inst.m"
            {
#line 580 "delay_partial_inst.m"
              check_hlds__delay_partial_inst__ConjList_32 = mercury__list__f_43_43_2_f_0(check_hlds__delay_partial_inst__TypeCtorInfo_51_51, check_hlds__delay_partial_inst__SubUnifyGoals_26, check_hlds__delay_partial_inst__V_40_40);
            }
#line 573 "delay_partial_inst.m"
          }
#line 581 "delay_partial_inst.m"
        else
#line 582 "delay_partial_inst.m"
          {
#line 582 "delay_partial_inst.m"
            check_hlds__delay_partial_inst__ConjList_32 = check_hlds__delay_partial_inst__SubUnifyGoals_26;
#line 582 "delay_partial_inst.m"
            *check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_35 = check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_34;
#line 582 "delay_partial_inst.m"
          }
#line 585 "delay_partial_inst.m"
        {
#line 585 "delay_partial_inst.m"
          hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__delay_partial_inst__ConjList_32, check_hlds__delay_partial_inst__GoalInfo0_25, check_hlds__delay_partial_inst__Goal_12);
        }
#line 563 "delay_partial_inst.m"
      }
#line 586 "delay_partial_inst.m"
    else
#line 587 "delay_partial_inst.m"
      {
#line 587 "delay_partial_inst.m"
        *check_hlds__delay_partial_inst__Goal_12 = check_hlds__delay_partial_inst__Goal0_9;
#line 587 "delay_partial_inst.m"
        *check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_35 = check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_34;
#line 587 "delay_partial_inst.m"
      }
#line 555 "delay_partial_inst.m"
    *check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_37 = check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_36;
#line 555 "delay_partial_inst.m"
  }
#line 549 "delay_partial_inst.m"
}

#line 529 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst__add_to_construct_map_5_p_0(
#line 529 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__Var_6,
#line 529 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__ConsId_7,
#line 529 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__CanonVars_8,
#line 529 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_13,
#line 529 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_14)
#line 529 "delay_partial_inst.m"
{
#line 532 "delay_partial_inst.m"
  {
#line 532 "delay_partial_inst.m"
    MR_bool check_hlds__delay_partial_inst__succeeded;
#line 532 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__ConsIdMap1_11;
#line 532 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__ConsIdMap_12;
#line 535 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__ConsIdMap0_10;
#line 533 "delay_partial_inst.m"
    MR_Box check_hlds__delay_partial_inst__conv0_ConsIdMap0_10;

#line 533 "delay_partial_inst.m"
    {
#line 533 "delay_partial_inst.m"
      check_hlds__delay_partial_inst__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[1], (MR_Word) &check_hlds__delay_partial_inst_scalar_common_1[1], check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_13, ((MR_Box) (check_hlds__delay_partial_inst__Var_6)), &check_hlds__delay_partial_inst__conv0_ConsIdMap0_10);
    }
#line 533 "delay_partial_inst.m"
    if (check_hlds__delay_partial_inst__succeeded)
#line 533 "delay_partial_inst.m"
      {
#line 533 "delay_partial_inst.m"
        check_hlds__delay_partial_inst__ConsIdMap0_10 = ((MR_Word) check_hlds__delay_partial_inst__conv0_ConsIdMap0_10);
#line 533 "delay_partial_inst.m"
        check_hlds__delay_partial_inst__succeeded = MR_TRUE;
#line 533 "delay_partial_inst.m"
      }
#line 535 "delay_partial_inst.m"
    if (check_hlds__delay_partial_inst__succeeded)
#line 534 "delay_partial_inst.m"
      check_hlds__delay_partial_inst__ConsIdMap1_11 = check_hlds__delay_partial_inst__ConsIdMap0_10;
#line 535 "delay_partial_inst.m"
    else
#line 536 "delay_partial_inst.m"
      {
#line 536 "delay_partial_inst.m"
        {
#line 536 "delay_partial_inst.m"
          check_hlds__delay_partial_inst__ConsIdMap1_11 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[2]);
        }
#line 536 "delay_partial_inst.m"
      }
#line 538 "delay_partial_inst.m"
    {
#line 538 "delay_partial_inst.m"
      mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[2], ((MR_Box) (check_hlds__delay_partial_inst__ConsId_7)), ((MR_Box) (check_hlds__delay_partial_inst__CanonVars_8)), check_hlds__delay_partial_inst__ConsIdMap1_11, &check_hlds__delay_partial_inst__ConsIdMap_12);
    }
#line 539 "delay_partial_inst.m"
    {
#line 539 "delay_partial_inst.m"
      mercury__map__set_4_p_0((MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[1], (MR_Word) &check_hlds__delay_partial_inst_scalar_common_1[1], ((MR_Box) (check_hlds__delay_partial_inst__Var_6)), ((MR_Box) (check_hlds__delay_partial_inst__ConsIdMap_12)), check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_13, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_14);
#line 539 "delay_partial_inst.m"
      return;
    }
#line 532 "delay_partial_inst.m"
  }
#line 529 "delay_partial_inst.m"
}

#line 510 "delay_partial_inst.m"
static MR_bool MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_partial_construct_7_p_0_1(
#line 510 "delay_partial_inst.m"
  MR_Box check_hlds__delay_partial_inst__closure_arg,
#line 510 "delay_partial_inst.m"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_1,
#line 510 "delay_partial_inst.m"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_2,
#line 510 "delay_partial_inst.m"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_3,
#line 510 "delay_partial_inst.m"
  MR_Box * check_hlds__delay_partial_inst__wrapper_arg_4)
#line 510 "delay_partial_inst.m"
{
#line 510 "delay_partial_inst.m"
  {
#line 510 "delay_partial_inst.m"
    MR_bool check_hlds__delay_partial_inst__succeeded;
#line 510 "delay_partial_inst.m"
    MR_Box check_hlds__delay_partial_inst__closure = check_hlds__delay_partial_inst__closure_arg;
#line 510 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__conv2_Goal_12;

#line 510 "delay_partial_inst.m"
    {
#line 510 "delay_partial_inst.m"
      check_hlds__delay_partial_inst__succeeded = check_hlds__delay_partial_inst__maybe_unify_var_with_ground_var_5_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__delay_partial_inst__wrapper_arg_1), ((MR_Word) check_hlds__delay_partial_inst__wrapper_arg_2), ((MR_Word) check_hlds__delay_partial_inst__wrapper_arg_3), &check_hlds__delay_partial_inst__conv2_Goal_12);
    }
#line 510 "delay_partial_inst.m"
    if (check_hlds__delay_partial_inst__succeeded)
#line 510 "delay_partial_inst.m"
      {
#line 510 "delay_partial_inst.m"
        *check_hlds__delay_partial_inst__wrapper_arg_4 = ((MR_Box) (check_hlds__delay_partial_inst__conv2_Goal_12));
#line 510 "delay_partial_inst.m"
        check_hlds__delay_partial_inst__succeeded = MR_TRUE;
#line 510 "delay_partial_inst.m"
      }
#line 510 "delay_partial_inst.m"
    return check_hlds__delay_partial_inst__succeeded;
#line 510 "delay_partial_inst.m"
  }
#line 510 "delay_partial_inst.m"
}

#line 485 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_partial_construct_7_p_0(
#line 485 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__GoalInfo0_8,
#line 485 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__Unify_9,
#line 485 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__Goal_10,
#line 485 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_26,
#line 485 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_27,
#line 485 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_28,
#line 485 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_29)
#line 485 "delay_partial_inst.m"
{
#line 491 "delay_partial_inst.m"
  {
#line 491 "delay_partial_inst.m"
    MR_bool check_hlds__delay_partial_inst__succeeded;
#line 491 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__TypeInfo_46_46;
#line 491 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Unify_9, (MR_Integer) 0)));
#line 491 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__ConsId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Unify_9, (MR_Integer) 1)));
#line 491 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__Args_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Unify_9, (MR_Integer) 2)));
#line 491 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__UniModes_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Unify_9, (MR_Integer) 3)));
#line 491 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__CanonVars_22;
#line 491 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__ModuleInfo_23;
#line 491 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__ProgContext_24;
#line 491 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__SubUnifyGoals_25;
#line 491 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_30_30;
#line 491 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__V_32_32;
#line 492 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Unify_9, (MR_Integer) 4)));
#line 492 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Unify_9, (MR_Integer) 5)));
#line 492 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Unify_9, (MR_Integer) 6)));
#line 500 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__CanonVars0_21;
#line 496 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__TypeCtorInfo_44_44;
#line 496 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__TypeInfo_45_45;
#line 496 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__CanonVarsMap0_20;
#line 496 "delay_partial_inst.m"
    MR_Box check_hlds__delay_partial_inst__conv0_CanonVarsMap0_20;
#line 497 "delay_partial_inst.m"
    MR_Box check_hlds__delay_partial_inst__conv1_CanonVars0_21;
#line 507 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__V_35_35;
#line 507 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__V_36_36;
#line 507 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__V_37_37;
#line 515 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__V_38_38;
#line 515 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__V_39_39;
#line 515 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__V_40_40;
#line 515 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__V_41_41;

#line 496 "delay_partial_inst.m"
    {
#line 496 "delay_partial_inst.m"
      check_hlds__delay_partial_inst__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[1], (MR_Word) &check_hlds__delay_partial_inst_scalar_common_1[1], check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_26, ((MR_Box) (check_hlds__delay_partial_inst__Var_13)), &check_hlds__delay_partial_inst__conv0_CanonVarsMap0_20);
    }
#line 496 "delay_partial_inst.m"
    if (check_hlds__delay_partial_inst__succeeded)
#line 496 "delay_partial_inst.m"
      {
#line 496 "delay_partial_inst.m"
        check_hlds__delay_partial_inst__CanonVarsMap0_20 = ((MR_Word) check_hlds__delay_partial_inst__conv0_CanonVarsMap0_20);
#line 496 "delay_partial_inst.m"
        check_hlds__delay_partial_inst__succeeded = MR_TRUE;
#line 496 "delay_partial_inst.m"
      }
#line 496 "delay_partial_inst.m"
    if (check_hlds__delay_partial_inst__succeeded)
#line 496 "delay_partial_inst.m"
      {
#line 2189 "check_hlds.delay_partial_inst.c"
        check_hlds__delay_partial_inst__TypeCtorInfo_44_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 2191 "check_hlds.delay_partial_inst.c"
        check_hlds__delay_partial_inst__TypeInfo_45_45 = (MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[2];
#line 497 "delay_partial_inst.m"
        {
#line 497 "delay_partial_inst.m"
          check_hlds__delay_partial_inst__succeeded = mercury__map__search_3_p_0(check_hlds__delay_partial_inst__TypeCtorInfo_44_44, check_hlds__delay_partial_inst__TypeInfo_45_45, check_hlds__delay_partial_inst__CanonVarsMap0_20, ((MR_Box) (check_hlds__delay_partial_inst__ConsId_14)), &check_hlds__delay_partial_inst__conv1_CanonVars0_21);
        }
#line 497 "delay_partial_inst.m"
        if (check_hlds__delay_partial_inst__succeeded)
#line 497 "delay_partial_inst.m"
          {
#line 497 "delay_partial_inst.m"
            check_hlds__delay_partial_inst__CanonVars0_21 = ((MR_Word) check_hlds__delay_partial_inst__conv1_CanonVars0_21);
#line 497 "delay_partial_inst.m"
            check_hlds__delay_partial_inst__succeeded = MR_TRUE;
#line 497 "delay_partial_inst.m"
          }
#line 496 "delay_partial_inst.m"
      }
#line 500 "delay_partial_inst.m"
    if (check_hlds__delay_partial_inst__succeeded)
#line 499 "delay_partial_inst.m"
      {
#line 499 "delay_partial_inst.m"
        check_hlds__delay_partial_inst__CanonVars_22 = check_hlds__delay_partial_inst__CanonVars0_21;
#line 499 "delay_partial_inst.m"
        check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_30_30 = check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_28;
#line 499 "delay_partial_inst.m"
        *check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_27 = check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_26;
#line 499 "delay_partial_inst.m"
      }
#line 500 "delay_partial_inst.m"
    else
#line 501 "delay_partial_inst.m"
      {
#line 501 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__TypeInfo_35_83 = (MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[1];
#line 501 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__VarSet0_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_28, (MR_Integer) 1)));
#line 501 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__VarTypes0_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_28, (MR_Integer) 2)));
#line 501 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__VarSet_60;
#line 501 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__VarTypes_61;
#line 501 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__Renaming_62;
#line 501 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__V_65_65;
#line 501 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__V_75_75;
#line 501 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__V_78_78;
#line 521 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_28, (MR_Integer) 0)));
#line 521 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_28, (MR_Integer) 3)));
#line 526 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__V_76_76;
#line 526 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__V_77_77;

#line 524 "delay_partial_inst.m"
        {
#line 524 "delay_partial_inst.m"
          check_hlds__delay_partial_inst__V_65_65 = mercury__map__init_0_f_0(check_hlds__delay_partial_inst__TypeInfo_35_83, check_hlds__delay_partial_inst__TypeInfo_35_83);
        }
#line 523 "delay_partial_inst.m"
        {
#line 523 "delay_partial_inst.m"
          hlds__goal_util__clone_variables_9_p_0(check_hlds__delay_partial_inst__Args_15, check_hlds__delay_partial_inst__VarSet0_58, check_hlds__delay_partial_inst__VarTypes0_59, check_hlds__delay_partial_inst__VarSet0_58, &check_hlds__delay_partial_inst__VarSet_60, check_hlds__delay_partial_inst__VarTypes0_59, &check_hlds__delay_partial_inst__VarTypes_61, check_hlds__delay_partial_inst__V_65_65, &check_hlds__delay_partial_inst__Renaming_62);
        }
#line 525 "delay_partial_inst.m"
        {
#line 525 "delay_partial_inst.m"
          parse_tree__prog_rename__rename_var_list_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 0, check_hlds__delay_partial_inst__Renaming_62, check_hlds__delay_partial_inst__Args_15, &check_hlds__delay_partial_inst__CanonVars_22);
        }
#line 526 "delay_partial_inst.m"
        check_hlds__delay_partial_inst__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_28, (MR_Integer) 0)));
#line 526 "delay_partial_inst.m"
        check_hlds__delay_partial_inst__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_28, (MR_Integer) 1)));
#line 526 "delay_partial_inst.m"
        check_hlds__delay_partial_inst__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_28, (MR_Integer) 2)));
#line 526 "delay_partial_inst.m"
        check_hlds__delay_partial_inst__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_28, (MR_Integer) 3)));
#line 527 "delay_partial_inst.m"
        {
#line 527 "delay_partial_inst.m"
          check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 527 "delay_partial_inst.m"
          MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_30_30, 0) = ((MR_Box) (check_hlds__delay_partial_inst__V_75_75));
#line 527 "delay_partial_inst.m"
          MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_30_30, 1) = ((MR_Box) (check_hlds__delay_partial_inst__VarSet_60));
#line 527 "delay_partial_inst.m"
          MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_30_30, 2) = ((MR_Box) (check_hlds__delay_partial_inst__VarTypes_61));
#line 527 "delay_partial_inst.m"
          MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_30_30, 3) = ((MR_Box) (check_hlds__delay_partial_inst__V_78_78));
#line 527 "delay_partial_inst.m"
        }
#line 502 "delay_partial_inst.m"
        {
#line 502 "delay_partial_inst.m"
          check_hlds__delay_partial_inst__add_to_construct_map_5_p_0(check_hlds__delay_partial_inst__Var_13, check_hlds__delay_partial_inst__ConsId_14, check_hlds__delay_partial_inst__CanonVars_22, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_26, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_27);
        }
#line 501 "delay_partial_inst.m"
      }
#line 507 "delay_partial_inst.m"
    check_hlds__delay_partial_inst__ModuleInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_30_30, (MR_Integer) 0)));
#line 507 "delay_partial_inst.m"
    check_hlds__delay_partial_inst__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_30_30, (MR_Integer) 1)));
#line 507 "delay_partial_inst.m"
    check_hlds__delay_partial_inst__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_30_30, (MR_Integer) 2)));
#line 507 "delay_partial_inst.m"
    check_hlds__delay_partial_inst__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_30_30, (MR_Integer) 3)));
#line 508 "delay_partial_inst.m"
    {
#line 508 "delay_partial_inst.m"
      check_hlds__delay_partial_inst__ProgContext_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__delay_partial_inst__GoalInfo0_8);
    }
#line 2310 "check_hlds.delay_partial_inst.c"
    check_hlds__delay_partial_inst__TypeInfo_46_46 = (MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[1];
#line 510 "delay_partial_inst.m"
    {
#line 510 "delay_partial_inst.m"
      check_hlds__delay_partial_inst__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 510 "delay_partial_inst.m"
      MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_32_32, 0) = ((MR_Box) (&check_hlds__delay_partial_inst_scalar_common_3[1]));
#line 510 "delay_partial_inst.m"
      MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_32_32, 1) = ((MR_Box) (check_hlds__delay_partial_inst__delay_partial_inst_in_partial_construct_7_p_0_1));
#line 510 "delay_partial_inst.m"
      MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 510 "delay_partial_inst.m"
      MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_32_32, 3) = ((MR_Box) (check_hlds__delay_partial_inst__ModuleInfo_23));
#line 510 "delay_partial_inst.m"
      MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_32_32, 4) = ((MR_Box) (check_hlds__delay_partial_inst__ProgContext_24));
#line 510 "delay_partial_inst.m"
    }
#line 509 "delay_partial_inst.m"
    {
#line 509 "delay_partial_inst.m"
      check_hlds__delay_partial_inst__SubUnifyGoals_25 = mercury__list__filter_map_corresponding3_4_f_0(check_hlds__delay_partial_inst__TypeInfo_46_46, check_hlds__delay_partial_inst__TypeInfo_46_46, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_uni_mode_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__delay_partial_inst__V_32_32, check_hlds__delay_partial_inst__CanonVars_22, check_hlds__delay_partial_inst__Args_15, check_hlds__delay_partial_inst__UniModes_16);
    }
#line 512 "delay_partial_inst.m"
    {
#line 512 "delay_partial_inst.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__delay_partial_inst__SubUnifyGoals_25, check_hlds__delay_partial_inst__GoalInfo0_8, check_hlds__delay_partial_inst__Goal_10);
    }
#line 515 "delay_partial_inst.m"
    check_hlds__delay_partial_inst__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_30_30, (MR_Integer) 0)));
#line 515 "delay_partial_inst.m"
    check_hlds__delay_partial_inst__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_30_30, (MR_Integer) 1)));
#line 515 "delay_partial_inst.m"
    check_hlds__delay_partial_inst__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_30_30, (MR_Integer) 2)));
#line 515 "delay_partial_inst.m"
    check_hlds__delay_partial_inst__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_30_30, (MR_Integer) 3)));
#line 515 "delay_partial_inst.m"
    {
#line 515 "delay_partial_inst.m"
      MR_Word base;
#line 515 "delay_partial_inst.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 515 "delay_partial_inst.m"
      *check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_29 = base;
#line 515 "delay_partial_inst.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__delay_partial_inst__V_38_38));
#line 515 "delay_partial_inst.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__delay_partial_inst__V_39_39));
#line 515 "delay_partial_inst.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__delay_partial_inst__V_40_40));
#line 515 "delay_partial_inst.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Integer) 1));
#line 515 "delay_partial_inst.m"
    }
#line 491 "delay_partial_inst.m"
  }
#line 485 "delay_partial_inst.m"
}

#line 465 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_cases_7_p_0(
#line 465 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__InstMap0_1,
#line 465 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__2_2,
#line 465 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__HeadVar__3_3,
#line 465 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_4,
#line 465 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_5,
#line 465 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_6,
#line 465 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_7)
#line 465 "delay_partial_inst.m"
{
#line 469 "delay_partial_inst.m"
  {
#line 469 "delay_partial_inst.m"
    MR_bool check_hlds__delay_partial_inst__succeeded;

#line 469 "delay_partial_inst.m"
    if ((check_hlds__delay_partial_inst__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 469 "delay_partial_inst.m"
      {
#line 469 "delay_partial_inst.m"
        *check_hlds__delay_partial_inst__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 469 "delay_partial_inst.m"
        *check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_7 = check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_6;
#line 469 "delay_partial_inst.m"
        *check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_5 = check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_4;
#line 469 "delay_partial_inst.m"
      }
#line 469 "delay_partial_inst.m"
    else
#line 471 "delay_partial_inst.m"
      {
#line 471 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__Case0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__HeadVar__2_2, (MR_Integer) 0)));
#line 471 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__Cases0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__HeadVar__2_2, (MR_Integer) 1)));
#line 471 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__Case_18;
#line 471 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__Cases_19;
#line 471 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__MainConsId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Case0_16, (MR_Integer) 0)));
#line 471 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__OtherConsIds_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Case0_16, (MR_Integer) 1)));
#line 471 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__Goal0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Case0_16, (MR_Integer) 2)));
#line 471 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__Goal_25;
#line 471 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_30_30;
#line 471 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_31_31;

#line 474 "delay_partial_inst.m"
        {
#line 474 "delay_partial_inst.m"
          check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(check_hlds__delay_partial_inst__InstMap0_1, check_hlds__delay_partial_inst__Goal0_24, &check_hlds__delay_partial_inst__Goal_25, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_4, &check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_30_30, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_6, &check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_31_31);
        }
#line 476 "delay_partial_inst.m"
        {
#line 476 "delay_partial_inst.m"
          check_hlds__delay_partial_inst__Case_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 476 "delay_partial_inst.m"
          MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Case_18, 0) = ((MR_Box) (check_hlds__delay_partial_inst__MainConsId_22));
#line 476 "delay_partial_inst.m"
          MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Case_18, 1) = ((MR_Box) (check_hlds__delay_partial_inst__OtherConsIds_23));
#line 476 "delay_partial_inst.m"
          MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Case_18, 2) = ((MR_Box) (check_hlds__delay_partial_inst__Goal_25));
#line 476 "delay_partial_inst.m"
        }
#line 477 "delay_partial_inst.m"
        {
#line 477 "delay_partial_inst.m"
          check_hlds__delay_partial_inst__delay_partial_inst_in_cases_7_p_0(check_hlds__delay_partial_inst__InstMap0_1, check_hlds__delay_partial_inst__Cases0_17, &check_hlds__delay_partial_inst__Cases_19, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_30_30, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_5, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_31_31, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_7);
        }
#line 470 "delay_partial_inst.m"
        {
#line 470 "delay_partial_inst.m"
          MR_Word base;
#line 470 "delay_partial_inst.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 470 "delay_partial_inst.m"
          *check_hlds__delay_partial_inst__HeadVar__3_3 = base;
#line 470 "delay_partial_inst.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__delay_partial_inst__Case_18));
#line 470 "delay_partial_inst.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__delay_partial_inst__Cases_19));
#line 470 "delay_partial_inst.m"
        }
#line 471 "delay_partial_inst.m"
      }
#line 469 "delay_partial_inst.m"
  }
#line 465 "delay_partial_inst.m"
}

#line 437 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_disj_7_p_0(
#line 437 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__InstMap0_1,
#line 437 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__2_2,
#line 437 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__HeadVar__3_3,
#line 437 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_4,
#line 437 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_5,
#line 437 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_6,
#line 437 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_7)
#line 437 "delay_partial_inst.m"
{
#line 442 "delay_partial_inst.m"
  {
#line 442 "delay_partial_inst.m"
    MR_bool check_hlds__delay_partial_inst__succeeded;

#line 442 "delay_partial_inst.m"
    if ((check_hlds__delay_partial_inst__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 442 "delay_partial_inst.m"
      {
#line 442 "delay_partial_inst.m"
        *check_hlds__delay_partial_inst__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 442 "delay_partial_inst.m"
        *check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_7 = check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_6;
#line 442 "delay_partial_inst.m"
        *check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_5 = check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_4;
#line 442 "delay_partial_inst.m"
      }
#line 442 "delay_partial_inst.m"
    else
#line 444 "delay_partial_inst.m"
      {
#line 444 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__Goal0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__HeadVar__2_2, (MR_Integer) 0)));
#line 444 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__Goals0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__HeadVar__2_2, (MR_Integer) 1)));
#line 444 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__Goal_18;
#line 444 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__Goals_19;
#line 444 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_26_26;
#line 444 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_27_27;

#line 460 "delay_partial_inst.m"
        {
#line 460 "delay_partial_inst.m"
          check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(check_hlds__delay_partial_inst__InstMap0_1, check_hlds__delay_partial_inst__Goal0_16, &check_hlds__delay_partial_inst__Goal_18, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_4, &check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_26_26, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_6, &check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_27_27);
        }
#line 462 "delay_partial_inst.m"
        {
#line 462 "delay_partial_inst.m"
          check_hlds__delay_partial_inst__delay_partial_inst_in_disj_7_p_0(check_hlds__delay_partial_inst__InstMap0_1, check_hlds__delay_partial_inst__Goals0_17, &check_hlds__delay_partial_inst__Goals_19, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_26_26, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_5, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_27_27, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_7);
        }
#line 443 "delay_partial_inst.m"
        {
#line 443 "delay_partial_inst.m"
          MR_Word base;
#line 443 "delay_partial_inst.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 443 "delay_partial_inst.m"
          *check_hlds__delay_partial_inst__HeadVar__3_3 = base;
#line 443 "delay_partial_inst.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__delay_partial_inst__Goal_18));
#line 443 "delay_partial_inst.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__delay_partial_inst__Goals_19));
#line 443 "delay_partial_inst.m"
        }
#line 444 "delay_partial_inst.m"
      }
#line 442 "delay_partial_inst.m"
  }
#line 437 "delay_partial_inst.m"
}

#line 421 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_conj_7_p_0(
#line 421 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__InstMap0_1,
#line 421 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__2_2,
#line 421 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__HeadVar__3_3,
#line 421 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_4,
#line 421 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_5,
#line 421 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_6,
#line 421 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_7)
#line 421 "delay_partial_inst.m"
{
#line 426 "delay_partial_inst.m"
  {
#line 426 "delay_partial_inst.m"
    MR_bool check_hlds__delay_partial_inst__succeeded;

#line 426 "delay_partial_inst.m"
    if ((check_hlds__delay_partial_inst__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 426 "delay_partial_inst.m"
      {
#line 426 "delay_partial_inst.m"
        *check_hlds__delay_partial_inst__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 426 "delay_partial_inst.m"
        *check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_7 = check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_6;
#line 426 "delay_partial_inst.m"
        *check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_5 = check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_4;
#line 426 "delay_partial_inst.m"
      }
#line 426 "delay_partial_inst.m"
    else
#line 428 "delay_partial_inst.m"
      {
#line 428 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__HeadGoal0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__HeadVar__2_2, (MR_Integer) 0)));
#line 428 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__TailGoals0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__HeadVar__2_2, (MR_Integer) 1)));
#line 428 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__HeadGoal_21;
#line 428 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__InstMap1_22;
#line 428 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__TailGoals_23;
#line 428 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__HeadGoals_24;
#line 428 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_29_29;
#line 428 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_30_30;

#line 429 "delay_partial_inst.m"
        {
#line 429 "delay_partial_inst.m"
          check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(check_hlds__delay_partial_inst__InstMap0_1, check_hlds__delay_partial_inst__HeadGoal0_16, &check_hlds__delay_partial_inst__HeadGoal_21, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_4, &check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_29_29, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_6, &check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_30_30);
        }
#line 431 "delay_partial_inst.m"
        {
#line 431 "delay_partial_inst.m"
          hlds__goal_util__update_instmap_3_p_0(check_hlds__delay_partial_inst__HeadGoal0_16, check_hlds__delay_partial_inst__InstMap0_1, &check_hlds__delay_partial_inst__InstMap1_22);
        }
#line 432 "delay_partial_inst.m"
        {
#line 432 "delay_partial_inst.m"
          check_hlds__delay_partial_inst__delay_partial_inst_in_conj_7_p_0(check_hlds__delay_partial_inst__InstMap1_22, check_hlds__delay_partial_inst__TailGoals0_17, &check_hlds__delay_partial_inst__TailGoals_23, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_29_29, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_5, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_30_30, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_7);
        }
#line 434 "delay_partial_inst.m"
        {
#line 434 "delay_partial_inst.m"
          hlds__hlds_goal__goal_to_conj_list_2_p_0(check_hlds__delay_partial_inst__HeadGoal_21, &check_hlds__delay_partial_inst__HeadGoals_24);
        }
#line 435 "delay_partial_inst.m"
        {
#line 435 "delay_partial_inst.m"
          *check_hlds__delay_partial_inst__HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__delay_partial_inst__HeadGoals_24, check_hlds__delay_partial_inst__TailGoals_23);
        }
#line 428 "delay_partial_inst.m"
      }
#line 426 "delay_partial_inst.m"
  }
#line 421 "delay_partial_inst.m"
}

#line 337 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_1(
#line 337 "delay_partial_inst.m"
  void * check_hlds__delay_partial_inst__env_ptr_arg)
#line 337 "delay_partial_inst.m"
{
#line 337 "delay_partial_inst.m"
  {
#line 337 "delay_partial_inst.m"
    struct check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0_s * check_hlds__delay_partial_inst__env_ptr = (struct check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0_s *) check_hlds__delay_partial_inst__env_ptr_arg;

#line 337 "delay_partial_inst.m"
    MR_builtin_longjmp((check_hlds__delay_partial_inst__env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__commit_0, 1);
#line 337 "delay_partial_inst.m"
  }
#line 337 "delay_partial_inst.m"
}

#line 337 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_3(
#line 337 "delay_partial_inst.m"
  void * check_hlds__delay_partial_inst__env_ptr_arg)
#line 337 "delay_partial_inst.m"
{
#line 337 "delay_partial_inst.m"
  {
#line 337 "delay_partial_inst.m"
    struct check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0_s * check_hlds__delay_partial_inst__env_ptr = (struct check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0_s *) check_hlds__delay_partial_inst__env_ptr_arg;

#line 337 "delay_partial_inst.m"
    (check_hlds__delay_partial_inst__env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__V_136_136 = ((MR_Word) (check_hlds__delay_partial_inst__env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__conv0_V_136_136);
#line 337 "delay_partial_inst.m"
    {
#line 337 "delay_partial_inst.m"
      check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_2(check_hlds__delay_partial_inst__env_ptr);
#line 337 "delay_partial_inst.m"
      return;
    }
#line 337 "delay_partial_inst.m"
  }
#line 337 "delay_partial_inst.m"
}

#line 337 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_2(
#line 337 "delay_partial_inst.m"
  void * check_hlds__delay_partial_inst__env_ptr_arg)
#line 337 "delay_partial_inst.m"
{
#line 337 "delay_partial_inst.m"
  {
#line 337 "delay_partial_inst.m"
    struct check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0_s * check_hlds__delay_partial_inst__env_ptr = (struct check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0_s *) check_hlds__delay_partial_inst__env_ptr_arg;

#line 337 "delay_partial_inst.m"
    {
#line 337 "delay_partial_inst.m"
      MR_Word check_hlds__delay_partial_inst__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__delay_partial_inst__env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__V_136_136, (MR_Integer) 0)));
#line 337 "delay_partial_inst.m"
      MR_Word check_hlds__delay_partial_inst__V_58_58;

#line 337 "delay_partial_inst.m"
      (check_hlds__delay_partial_inst__env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__delay_partial_inst__env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__V_136_136, (MR_Integer) 1)));
#line 337 "delay_partial_inst.m"
      check_hlds__delay_partial_inst__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__delay_partial_inst__env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__V_137_137, (MR_Integer) 0)));
#line 337 "delay_partial_inst.m"
      (check_hlds__delay_partial_inst__env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__RhsAfter_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__delay_partial_inst__env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__V_137_137, (MR_Integer) 1)));
#line 338 "delay_partial_inst.m"
      {
#line 338 "delay_partial_inst.m"
        (check_hlds__delay_partial_inst__env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded = check_hlds__inst_match__inst_is_free_2_p_0((check_hlds__delay_partial_inst__env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__ModuleInfo_55, (check_hlds__delay_partial_inst__env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__RhsAfter_164);
      }
#line 338 "delay_partial_inst.m"
      if ((check_hlds__delay_partial_inst__env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded)
#line 338 "delay_partial_inst.m"
        {
#line 338 "delay_partial_inst.m"
          check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_1(check_hlds__delay_partial_inst__env_ptr);
#line 338 "delay_partial_inst.m"
          return;
        }
#line 337 "delay_partial_inst.m"
    }
#line 337 "delay_partial_inst.m"
  }
#line 337 "delay_partial_inst.m"
}

#line 337 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_4(
#line 337 "delay_partial_inst.m"
  void * check_hlds__delay_partial_inst__env_ptr_arg)
#line 337 "delay_partial_inst.m"
{
#line 337 "delay_partial_inst.m"
  {
#line 337 "delay_partial_inst.m"
    struct check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0_s * check_hlds__delay_partial_inst__env_ptr = (struct check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0_s *) check_hlds__delay_partial_inst__env_ptr_arg;

#line 337 "delay_partial_inst.m"
    if (MR_builtin_setjmp((check_hlds__delay_partial_inst__env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__commit_0) == 0)
#line 337 "delay_partial_inst.m"
      {
#line 337 "delay_partial_inst.m"
        {
#line 337 "delay_partial_inst.m"
          {
#line 337 "delay_partial_inst.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_uni_mode_0, &(check_hlds__delay_partial_inst__env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__conv0_V_136_136, (check_hlds__delay_partial_inst__env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__UniModes_47, check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_3, check_hlds__delay_partial_inst__env_ptr);
          }
#line 337 "delay_partial_inst.m"
        }
#line 337 "delay_partial_inst.m"
        (check_hlds__delay_partial_inst__env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded = MR_FALSE;
#line 337 "delay_partial_inst.m"
      }
#line 337 "delay_partial_inst.m"
    else
#line 337 "delay_partial_inst.m"
      (check_hlds__delay_partial_inst__env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded = MR_TRUE;
#line 337 "delay_partial_inst.m"
  }
#line 337 "delay_partial_inst.m"
}

#line 273 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(
#line 273 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__InstMap0_8,
#line 273 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__Goal0_9,
#line 273 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__Goal_10,
#line 273 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_121,
#line 273 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_122,
#line 273 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_123,
#line 273 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_124)
#line 273 "delay_partial_inst.m"
{
#line 273 "delay_partial_inst.m"
  {
#line 273 "delay_partial_inst.m"
    struct check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0_s check_hlds__delay_partial_inst__env;

#line 277 "delay_partial_inst.m"
    {
#line 277 "delay_partial_inst.m"
      MR_Word check_hlds__delay_partial_inst__GoalExpr0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Goal0_9, (MR_Integer) 0)));
#line 277 "delay_partial_inst.m"
      MR_Word check_hlds__delay_partial_inst__GoalInfo0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Goal0_9, (MR_Integer) 1)));

#line 284 "delay_partial_inst.m"
#line 284 "delay_partial_inst.m"
      switch (MR_tag((MR_Word) check_hlds__delay_partial_inst__GoalExpr0_13)) {
#line 284 "delay_partial_inst.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 284 "delay_partial_inst.m"
        case (MR_Integer) 0:
#line 290 "delay_partial_inst.m"
          {
#line 290 "delay_partial_inst.m"
            MR_Word check_hlds__delay_partial_inst__NegGoal0_18 = (MR_Word) MR_body(((MR_Word) check_hlds__delay_partial_inst__GoalExpr0_13), (MR_Integer) 0);
#line 290 "delay_partial_inst.m"
            MR_Word check_hlds__delay_partial_inst__NegGoal_19;
#line 290 "delay_partial_inst.m"
            MR_Word check_hlds__delay_partial_inst__V_155_155;
#line 291 "delay_partial_inst.m"
            MR_Word check_hlds__delay_partial_inst__V_20_20;

#line 291 "delay_partial_inst.m"
            {
#line 291 "delay_partial_inst.m"
              check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(check_hlds__delay_partial_inst__InstMap0_8, check_hlds__delay_partial_inst__NegGoal0_18, &check_hlds__delay_partial_inst__NegGoal_19, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_121, &check_hlds__delay_partial_inst__V_20_20, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_123, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_124);
            }
#line 293 "delay_partial_inst.m"
            check_hlds__delay_partial_inst__V_155_155 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__delay_partial_inst__NegGoal_19);
#line 293 "delay_partial_inst.m"
            {
#line 293 "delay_partial_inst.m"
              MR_Word base;
#line 293 "delay_partial_inst.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 293 "delay_partial_inst.m"
              *check_hlds__delay_partial_inst__Goal_10 = base;
#line 293 "delay_partial_inst.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__delay_partial_inst__V_155_155));
#line 293 "delay_partial_inst.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__delay_partial_inst__GoalInfo0_14));
#line 293 "delay_partial_inst.m"
            }
#line 290 "delay_partial_inst.m"
            *check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_122 = check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_121;
#line 290 "delay_partial_inst.m"
          }
#line 284 "delay_partial_inst.m"
          break;
#line 284 "delay_partial_inst.m"
        case (MR_Integer) 1:
#line 324 "delay_partial_inst.m"
          {
#line 324 "delay_partial_inst.m"
            MR_Word check_hlds__delay_partial_inst__LHS_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 0)));
#line 324 "delay_partial_inst.m"
            MR_Word check_hlds__delay_partial_inst__RHS0_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 1)));
#line 324 "delay_partial_inst.m"
            MR_Word check_hlds__delay_partial_inst__Mode_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 2)));
#line 324 "delay_partial_inst.m"
            MR_Word check_hlds__delay_partial_inst__Unify_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 3)));
#line 324 "delay_partial_inst.m"
            MR_Word check_hlds__delay_partial_inst__Context_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 4)));

#line 366 "delay_partial_inst.m"
#line 366 "delay_partial_inst.m"
            switch (MR_tag((MR_Word) check_hlds__delay_partial_inst__Unify_42)) {
#line 366 "delay_partial_inst.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 366 "delay_partial_inst.m"
              case (MR_Integer) 0:
#line 326 "delay_partial_inst.m"
                {
#line 326 "delay_partial_inst.m"
                  MR_Word check_hlds__delay_partial_inst__ConsId_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Unify_42, (MR_Integer) 1)));
#line 326 "delay_partial_inst.m"
                  MR_Word check_hlds__delay_partial_inst___Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Unify_42, (MR_Integer) 0)));
#line 326 "delay_partial_inst.m"
                  MR_Word check_hlds__delay_partial_inst___Args_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Unify_42, (MR_Integer) 2)));
#line 326 "delay_partial_inst.m"
                  MR_Word check_hlds__delay_partial_inst__V_48_48;
#line 326 "delay_partial_inst.m"
                  MR_Word check_hlds__delay_partial_inst__V_49_49;
#line 326 "delay_partial_inst.m"
                  MR_Word check_hlds__delay_partial_inst__V_50_50;
#line 335 "delay_partial_inst.m"
                  MR_Word check_hlds__delay_partial_inst__V_182_182;
#line 335 "delay_partial_inst.m"
                  MR_Word check_hlds__delay_partial_inst__V_183_183;
#line 335 "delay_partial_inst.m"
                  MR_Word check_hlds__delay_partial_inst__V_184_184;

#line 326 "delay_partial_inst.m"
                  (check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__UniModes_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Unify_42, (MR_Integer) 3)));
#line 326 "delay_partial_inst.m"
                  check_hlds__delay_partial_inst__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Unify_42, (MR_Integer) 4)));
#line 326 "delay_partial_inst.m"
                  check_hlds__delay_partial_inst__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Unify_42, (MR_Integer) 5)));
#line 326 "delay_partial_inst.m"
                  check_hlds__delay_partial_inst__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Unify_42, (MR_Integer) 6)));
#line 333 "delay_partial_inst.m"
                  if (((((MR_tag((MR_Word) check_hlds__delay_partial_inst__ConsId_45)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__ConsId_45, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 332 "delay_partial_inst.m"
                    (check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded = MR_TRUE;
#line 333 "delay_partial_inst.m"
                  else
#line 333 "delay_partial_inst.m"
                  if (((((MR_tag((MR_Word) check_hlds__delay_partial_inst__ConsId_45)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__ConsId_45, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 333 "delay_partial_inst.m"
                    (check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded = MR_TRUE;
#line 333 "delay_partial_inst.m"
                  else
#line 333 "delay_partial_inst.m"
                    (check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded = MR_FALSE;
#line 334 "delay_partial_inst.m"
                  if ((check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded)
#line 334 "delay_partial_inst.m"
                    {
#line 335 "delay_partial_inst.m"
                      (check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__ModuleInfo_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_123, (MR_Integer) 0)));
#line 335 "delay_partial_inst.m"
                      check_hlds__delay_partial_inst__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_123, (MR_Integer) 1)));
#line 335 "delay_partial_inst.m"
                      check_hlds__delay_partial_inst__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_123, (MR_Integer) 2)));
#line 335 "delay_partial_inst.m"
                      check_hlds__delay_partial_inst__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_123, (MR_Integer) 3)));
#line 337 "delay_partial_inst.m"
                      {
#line 337 "delay_partial_inst.m"
                        check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_4(&check_hlds__delay_partial_inst__env);
                      }
#line 334 "delay_partial_inst.m"
                    }
#line 343 "delay_partial_inst.m"
                  if ((check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded)
#line 341 "delay_partial_inst.m"
                    {
#line 341 "delay_partial_inst.m"
                      check_hlds__delay_partial_inst__delay_partial_inst_in_partial_construct_7_p_0(check_hlds__delay_partial_inst__GoalInfo0_14, check_hlds__delay_partial_inst__Unify_42, check_hlds__delay_partial_inst__Goal_10, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_121, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_122, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_123, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_124);
#line 341 "delay_partial_inst.m"
                      return;
                    }
#line 343 "delay_partial_inst.m"
                  else
#line 359 "delay_partial_inst.m"
                    {
#line 359 "delay_partial_inst.m"
#line 359 "delay_partial_inst.m"
                      switch (MR_tag((MR_Word) check_hlds__delay_partial_inst__RHS0_40)) {
#line 359 "delay_partial_inst.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 359 "delay_partial_inst.m"
                        case (MR_Integer) 0:
#line 359 "delay_partial_inst.m"
                        case (MR_Integer) 1:
#line 362 "delay_partial_inst.m"
                          {
#line 363 "delay_partial_inst.m"
                            *check_hlds__delay_partial_inst__Goal_10 = check_hlds__delay_partial_inst__Goal0_9;
#line 362 "delay_partial_inst.m"
                            *check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_124 = check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_123;
#line 362 "delay_partial_inst.m"
                          }
#line 359 "delay_partial_inst.m"
                          break;
#line 359 "delay_partial_inst.m"
                        case (MR_Integer) 2:
#line 350 "delay_partial_inst.m"
                          {
#line 350 "delay_partial_inst.m"
                            MR_Word check_hlds__delay_partial_inst__Purity_59 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__RHS0_40, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 350 "delay_partial_inst.m"
                            MR_Word check_hlds__delay_partial_inst__Groundness_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__RHS0_40, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 350 "delay_partial_inst.m"
                            MR_Word check_hlds__delay_partial_inst__PredOrFunc_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__RHS0_40, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 350 "delay_partial_inst.m"
                            MR_Word check_hlds__delay_partial_inst__NonLocals_63 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__RHS0_40, (MR_Integer) 2)));
#line 350 "delay_partial_inst.m"
                            MR_Word check_hlds__delay_partial_inst__LambdaQuantVars_64 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__RHS0_40, (MR_Integer) 3)));
#line 350 "delay_partial_inst.m"
                            MR_Word check_hlds__delay_partial_inst__Modues_65 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__RHS0_40, (MR_Integer) 4)));
#line 350 "delay_partial_inst.m"
                            MR_Word check_hlds__delay_partial_inst__Detism_66 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__RHS0_40, (MR_Integer) 5)));
#line 350 "delay_partial_inst.m"
                            MR_Word check_hlds__delay_partial_inst__LambdaGoal0_67 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__RHS0_40, (MR_Integer) 6)));
#line 350 "delay_partial_inst.m"
                            MR_Word check_hlds__delay_partial_inst__LambdaGoal_68;
#line 350 "delay_partial_inst.m"
                            MR_Word check_hlds__delay_partial_inst__RHS_70;
#line 350 "delay_partial_inst.m"
                            MR_Word check_hlds__delay_partial_inst__GoalExpr_71;
#line 350 "delay_partial_inst.m"
                            MR_Word check_hlds__delay_partial_inst__V_140_140;
#line 351 "delay_partial_inst.m"
                            MR_Word check_hlds__delay_partial_inst___ConstructMap_69;

#line 352 "delay_partial_inst.m"
                            {
#line 352 "delay_partial_inst.m"
                              check_hlds__delay_partial_inst__V_140_140 = mercury__map__init_0_f_0((MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[1], (MR_Word) &check_hlds__delay_partial_inst_scalar_common_1[1]);
                            }
#line 351 "delay_partial_inst.m"
                            {
#line 351 "delay_partial_inst.m"
                              check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(check_hlds__delay_partial_inst__InstMap0_8, check_hlds__delay_partial_inst__LambdaGoal0_67, &check_hlds__delay_partial_inst__LambdaGoal_68, check_hlds__delay_partial_inst__V_140_140, &check_hlds__delay_partial_inst___ConstructMap_69, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_123, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_124);
                            }
#line 354 "delay_partial_inst.m"
                            {
#line 354 "delay_partial_inst.m"
                              check_hlds__delay_partial_inst__RHS_70 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 354 "delay_partial_inst.m"
                              MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__RHS_70, 0) = ((MR_Box) ((check_hlds__delay_partial_inst__Purity_59 | ((((check_hlds__delay_partial_inst__Groundness_60 << (MR_Integer) 2)) | ((check_hlds__delay_partial_inst__PredOrFunc_61 << (MR_Integer) 3)))))));
#line 354 "delay_partial_inst.m"
                              MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__RHS_70, 1) = (MR_Integer) 0;
#line 354 "delay_partial_inst.m"
                              MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__RHS_70, 2) = ((MR_Box) (check_hlds__delay_partial_inst__NonLocals_63));
#line 354 "delay_partial_inst.m"
                              MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__RHS_70, 3) = ((MR_Box) (check_hlds__delay_partial_inst__LambdaQuantVars_64));
#line 354 "delay_partial_inst.m"
                              MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__RHS_70, 4) = ((MR_Box) (check_hlds__delay_partial_inst__Modues_65));
#line 354 "delay_partial_inst.m"
                              MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__RHS_70, 5) = ((MR_Box) (check_hlds__delay_partial_inst__Detism_66));
#line 354 "delay_partial_inst.m"
                              MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__RHS_70, 6) = ((MR_Box) (check_hlds__delay_partial_inst__LambdaGoal_68));
#line 354 "delay_partial_inst.m"
                            }
#line 357 "delay_partial_inst.m"
                            {
#line 357 "delay_partial_inst.m"
                              check_hlds__delay_partial_inst__GoalExpr_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 357 "delay_partial_inst.m"
                              MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__GoalExpr_71, 0) = ((MR_Box) (check_hlds__delay_partial_inst__LHS_39));
#line 357 "delay_partial_inst.m"
                              MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__GoalExpr_71, 1) = ((MR_Box) (check_hlds__delay_partial_inst__RHS_70));
#line 357 "delay_partial_inst.m"
                              MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__GoalExpr_71, 2) = ((MR_Box) (check_hlds__delay_partial_inst__Mode_41));
#line 357 "delay_partial_inst.m"
                              MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__GoalExpr_71, 3) = ((MR_Box) (check_hlds__delay_partial_inst__Unify_42));
#line 357 "delay_partial_inst.m"
                              MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__GoalExpr_71, 4) = ((MR_Box) (check_hlds__delay_partial_inst__Context_43));
#line 357 "delay_partial_inst.m"
                            }
#line 358 "delay_partial_inst.m"
                            {
#line 358 "delay_partial_inst.m"
                              MR_Word base;
#line 358 "delay_partial_inst.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 358 "delay_partial_inst.m"
                              *check_hlds__delay_partial_inst__Goal_10 = base;
#line 358 "delay_partial_inst.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__delay_partial_inst__GoalExpr_71));
#line 358 "delay_partial_inst.m"
                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__delay_partial_inst__GoalInfo0_14));
#line 358 "delay_partial_inst.m"
                            }
#line 350 "delay_partial_inst.m"
                          }
#line 359 "delay_partial_inst.m"
                          break;
#line 359 "delay_partial_inst.m"
                      }
#line 359 "delay_partial_inst.m"
                      *check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_122 = check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_121;
#line 359 "delay_partial_inst.m"
                    }
#line 326 "delay_partial_inst.m"
                }
#line 366 "delay_partial_inst.m"
                break;
#line 366 "delay_partial_inst.m"
              case (MR_Integer) 1:
#line 369 "delay_partial_inst.m"
                {
#line 369 "delay_partial_inst.m"
                  check_hlds__delay_partial_inst__delay_partial_inst_in_deconstruct_8_p_0(check_hlds__delay_partial_inst__Goal0_9, check_hlds__delay_partial_inst__Mode_41, check_hlds__delay_partial_inst__Unify_42, check_hlds__delay_partial_inst__Goal_10, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_121, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_122, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_123, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_124);
#line 369 "delay_partial_inst.m"
                  return;
                }
#line 366 "delay_partial_inst.m"
                break;
#line 366 "delay_partial_inst.m"
              case (MR_Integer) 2:
#line 378 "delay_partial_inst.m"
                {
#line 379 "delay_partial_inst.m"
                  *check_hlds__delay_partial_inst__Goal_10 = check_hlds__delay_partial_inst__Goal0_9;
#line 378 "delay_partial_inst.m"
                  *check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_122 = check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_121;
#line 378 "delay_partial_inst.m"
                  *check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_124 = check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_123;
#line 378 "delay_partial_inst.m"
                }
#line 366 "delay_partial_inst.m"
                break;
#line 366 "delay_partial_inst.m"
              case (MR_Integer) 3:
#line 366 "delay_partial_inst.m"
#line 366 "delay_partial_inst.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__Unify_42, (MR_Integer) 0)))) {
#line 366 "delay_partial_inst.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 366 "delay_partial_inst.m"
                  case (MR_Integer) 0:
#line 378 "delay_partial_inst.m"
                    {
#line 379 "delay_partial_inst.m"
                      *check_hlds__delay_partial_inst__Goal_10 = check_hlds__delay_partial_inst__Goal0_9;
#line 378 "delay_partial_inst.m"
                      *check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_122 = check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_121;
#line 378 "delay_partial_inst.m"
                      *check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_124 = check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_123;
#line 378 "delay_partial_inst.m"
                    }
#line 366 "delay_partial_inst.m"
                    break;
#line 366 "delay_partial_inst.m"
                  case (MR_Integer) 1:
#line 373 "delay_partial_inst.m"
                    {
#line 373 "delay_partial_inst.m"
                      check_hlds__delay_partial_inst__delay_partial_inst_in_complicated_unify_9_p_0(check_hlds__delay_partial_inst__Goal0_9, check_hlds__delay_partial_inst__LHS_39, check_hlds__delay_partial_inst__RHS0_40, check_hlds__delay_partial_inst__Unify_42, check_hlds__delay_partial_inst__Goal_10, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_121, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_122, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_123, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_124);
#line 373 "delay_partial_inst.m"
                      return;
                    }
#line 366 "delay_partial_inst.m"
                    break;
#line 366 "delay_partial_inst.m"
                }
#line 366 "delay_partial_inst.m"
                break;
#line 366 "delay_partial_inst.m"
            }
#line 324 "delay_partial_inst.m"
          }
#line 284 "delay_partial_inst.m"
          break;
#line 284 "delay_partial_inst.m"
        case (MR_Integer) 2:
#line 385 "delay_partial_inst.m"
          {
#line 386 "delay_partial_inst.m"
            *check_hlds__delay_partial_inst__Goal_10 = check_hlds__delay_partial_inst__Goal0_9;
#line 385 "delay_partial_inst.m"
            *check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_122 = check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_121;
#line 385 "delay_partial_inst.m"
            *check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_124 = check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_123;
#line 385 "delay_partial_inst.m"
          }
#line 284 "delay_partial_inst.m"
          break;
#line 284 "delay_partial_inst.m"
        case (MR_Integer) 3:
#line 284 "delay_partial_inst.m"
#line 284 "delay_partial_inst.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 0)))) {
#line 284 "delay_partial_inst.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 284 "delay_partial_inst.m"
            case (MR_Integer) 0:
#line 284 "delay_partial_inst.m"
            case (MR_Integer) 1:
#line 385 "delay_partial_inst.m"
              {
#line 386 "delay_partial_inst.m"
                *check_hlds__delay_partial_inst__Goal_10 = check_hlds__delay_partial_inst__Goal0_9;
#line 385 "delay_partial_inst.m"
                *check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_122 = check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_121;
#line 385 "delay_partial_inst.m"
                *check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_124 = check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_123;
#line 385 "delay_partial_inst.m"
              }
#line 284 "delay_partial_inst.m"
              break;
#line 284 "delay_partial_inst.m"
            case (MR_Integer) 2:
#line 280 "delay_partial_inst.m"
              {
#line 280 "delay_partial_inst.m"
                MR_Word check_hlds__delay_partial_inst__ConjType_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 1)));
#line 280 "delay_partial_inst.m"
                MR_Word check_hlds__delay_partial_inst__Goals0_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 2)));
#line 280 "delay_partial_inst.m"
                MR_Word check_hlds__delay_partial_inst__Goals_17;
#line 280 "delay_partial_inst.m"
                MR_Word check_hlds__delay_partial_inst__V_161_161;

#line 281 "delay_partial_inst.m"
                {
#line 281 "delay_partial_inst.m"
                  check_hlds__delay_partial_inst__delay_partial_inst_in_conj_7_p_0(check_hlds__delay_partial_inst__InstMap0_8, check_hlds__delay_partial_inst__Goals0_16, &check_hlds__delay_partial_inst__Goals_17, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_121, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_122, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_123, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_124);
                }
#line 283 "delay_partial_inst.m"
                {
#line 283 "delay_partial_inst.m"
                  check_hlds__delay_partial_inst__V_161_161 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 283 "delay_partial_inst.m"
                  MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__V_161_161, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 283 "delay_partial_inst.m"
                  MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__V_161_161, 1) = ((MR_Box) (check_hlds__delay_partial_inst__ConjType_15));
#line 283 "delay_partial_inst.m"
                  MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__V_161_161, 2) = ((MR_Box) (check_hlds__delay_partial_inst__Goals_17));
#line 283 "delay_partial_inst.m"
                }
#line 283 "delay_partial_inst.m"
                {
#line 283 "delay_partial_inst.m"
                  MR_Word base;
#line 283 "delay_partial_inst.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 283 "delay_partial_inst.m"
                  *check_hlds__delay_partial_inst__Goal_10 = base;
#line 283 "delay_partial_inst.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__delay_partial_inst__V_161_161));
#line 283 "delay_partial_inst.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__delay_partial_inst__GoalInfo0_14));
#line 283 "delay_partial_inst.m"
                }
#line 280 "delay_partial_inst.m"
              }
#line 284 "delay_partial_inst.m"
              break;
#line 284 "delay_partial_inst.m"
            case (MR_Integer) 3:
#line 285 "delay_partial_inst.m"
              {
#line 285 "delay_partial_inst.m"
                MR_Word check_hlds__delay_partial_inst__V_158_158;
#line 285 "delay_partial_inst.m"
                MR_Word check_hlds__delay_partial_inst__Goals0_162 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 1)));
#line 285 "delay_partial_inst.m"
                MR_Word check_hlds__delay_partial_inst__Goals_163;

#line 286 "delay_partial_inst.m"
                {
#line 286 "delay_partial_inst.m"
                  check_hlds__delay_partial_inst__delay_partial_inst_in_disj_7_p_0(check_hlds__delay_partial_inst__InstMap0_8, check_hlds__delay_partial_inst__Goals0_162, &check_hlds__delay_partial_inst__Goals_163, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_121, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_122, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_123, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_124);
                }
#line 288 "delay_partial_inst.m"
                {
#line 288 "delay_partial_inst.m"
                  check_hlds__delay_partial_inst__V_158_158 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 288 "delay_partial_inst.m"
                  MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__V_158_158, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 288 "delay_partial_inst.m"
                  MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__V_158_158, 1) = ((MR_Box) (check_hlds__delay_partial_inst__Goals_163));
#line 288 "delay_partial_inst.m"
                }
#line 288 "delay_partial_inst.m"
                {
#line 288 "delay_partial_inst.m"
                  MR_Word base;
#line 288 "delay_partial_inst.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 288 "delay_partial_inst.m"
                  *check_hlds__delay_partial_inst__Goal_10 = base;
#line 288 "delay_partial_inst.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__delay_partial_inst__V_158_158));
#line 288 "delay_partial_inst.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__delay_partial_inst__GoalInfo0_14));
#line 288 "delay_partial_inst.m"
                }
#line 285 "delay_partial_inst.m"
              }
#line 284 "delay_partial_inst.m"
              break;
#line 284 "delay_partial_inst.m"
            case (MR_Integer) 4:
#line 295 "delay_partial_inst.m"
              {
#line 295 "delay_partial_inst.m"
                MR_Word check_hlds__delay_partial_inst__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 1)));
#line 295 "delay_partial_inst.m"
                MR_Word check_hlds__delay_partial_inst__CanFail_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 2)));
#line 295 "delay_partial_inst.m"
                MR_Word check_hlds__delay_partial_inst__Cases0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 3)));
#line 295 "delay_partial_inst.m"
                MR_Word check_hlds__delay_partial_inst__Cases_24;
#line 295 "delay_partial_inst.m"
                MR_Word check_hlds__delay_partial_inst__V_153_153;

#line 296 "delay_partial_inst.m"
                {
#line 296 "delay_partial_inst.m"
                  check_hlds__delay_partial_inst__delay_partial_inst_in_cases_7_p_0(check_hlds__delay_partial_inst__InstMap0_8, check_hlds__delay_partial_inst__Cases0_23, &check_hlds__delay_partial_inst__Cases_24, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_121, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_122, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_123, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_124);
                }
#line 298 "delay_partial_inst.m"
                {
#line 298 "delay_partial_inst.m"
                  check_hlds__delay_partial_inst__V_153_153 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 298 "delay_partial_inst.m"
                  MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__V_153_153, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 298 "delay_partial_inst.m"
                  MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__V_153_153, 1) = ((MR_Box) (check_hlds__delay_partial_inst__Var_21));
#line 298 "delay_partial_inst.m"
                  MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__V_153_153, 2) = ((MR_Box) (check_hlds__delay_partial_inst__CanFail_22));
#line 298 "delay_partial_inst.m"
                  MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__V_153_153, 3) = ((MR_Box) (check_hlds__delay_partial_inst__Cases_24));
#line 298 "delay_partial_inst.m"
                }
#line 298 "delay_partial_inst.m"
                {
#line 298 "delay_partial_inst.m"
                  MR_Word base;
#line 298 "delay_partial_inst.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 298 "delay_partial_inst.m"
                  *check_hlds__delay_partial_inst__Goal_10 = base;
#line 298 "delay_partial_inst.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__delay_partial_inst__V_153_153));
#line 298 "delay_partial_inst.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__delay_partial_inst__GoalInfo0_14));
#line 298 "delay_partial_inst.m"
                }
#line 295 "delay_partial_inst.m"
              }
#line 284 "delay_partial_inst.m"
              break;
#line 284 "delay_partial_inst.m"
            case (MR_Integer) 5:
#line 310 "delay_partial_inst.m"
              {
#line 310 "delay_partial_inst.m"
                MR_Word check_hlds__delay_partial_inst__Reason_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 1)));
#line 310 "delay_partial_inst.m"
                MR_Word check_hlds__delay_partial_inst__SubGoal0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 2)));
#line 312 "delay_partial_inst.m"
                MR_Word check_hlds__delay_partial_inst__FGT_36;
#line 312 "delay_partial_inst.m"
                MR_Word check_hlds__delay_partial_inst__V_35_35;

#line 312 "delay_partial_inst.m"
                (check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded = ((((MR_tag((MR_Word) check_hlds__delay_partial_inst__Reason_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__Reason_33, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 312 "delay_partial_inst.m"
                if ((check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded)
#line 312 "delay_partial_inst.m"
                  {
#line 312 "delay_partial_inst.m"
                    check_hlds__delay_partial_inst__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__Reason_33, (MR_Integer) 1)));
#line 312 "delay_partial_inst.m"
                    check_hlds__delay_partial_inst__FGT_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__Reason_33, (MR_Integer) 2)));
#line 314 "delay_partial_inst.m"
#line 314 "delay_partial_inst.m"
                    switch (check_hlds__delay_partial_inst__FGT_36) {
#line 314 "delay_partial_inst.m"
                      default:
#line 314 "delay_partial_inst.m"
                        (check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded = MR_FALSE;
#line 314 "delay_partial_inst.m"
                        break;
#line 314 "delay_partial_inst.m"
                      case (MR_Integer) 1:
#line 313 "delay_partial_inst.m"
                        (check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded = MR_TRUE;
#line 314 "delay_partial_inst.m"
                        break;
#line 314 "delay_partial_inst.m"
                      case (MR_Integer) 2:
#line 314 "delay_partial_inst.m"
                        (check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded = MR_TRUE;
#line 314 "delay_partial_inst.m"
                        break;
#line 314 "delay_partial_inst.m"
                    }
#line 312 "delay_partial_inst.m"
                  }
#line 318 "delay_partial_inst.m"
                if ((check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded)
#line 317 "delay_partial_inst.m"
                  {
#line 317 "delay_partial_inst.m"
                    *check_hlds__delay_partial_inst__Goal_10 = check_hlds__delay_partial_inst__Goal0_9;
#line 317 "delay_partial_inst.m"
                    *check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_124 = check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_123;
#line 317 "delay_partial_inst.m"
                  }
#line 318 "delay_partial_inst.m"
                else
#line 320 "delay_partial_inst.m"
                  {
#line 320 "delay_partial_inst.m"
                    MR_Word check_hlds__delay_partial_inst__SubGoal_37;
#line 320 "delay_partial_inst.m"
                    MR_Word check_hlds__delay_partial_inst__V_143_143;
#line 319 "delay_partial_inst.m"
                    MR_Word check_hlds__delay_partial_inst__V_38_38;

#line 319 "delay_partial_inst.m"
                    {
#line 319 "delay_partial_inst.m"
                      check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(check_hlds__delay_partial_inst__InstMap0_8, check_hlds__delay_partial_inst__SubGoal0_34, &check_hlds__delay_partial_inst__SubGoal_37, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_121, &check_hlds__delay_partial_inst__V_38_38, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_123, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_124);
                    }
#line 321 "delay_partial_inst.m"
                    {
#line 321 "delay_partial_inst.m"
                      check_hlds__delay_partial_inst__V_143_143 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 321 "delay_partial_inst.m"
                      MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__V_143_143, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 321 "delay_partial_inst.m"
                      MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__V_143_143, 1) = ((MR_Box) (check_hlds__delay_partial_inst__Reason_33));
#line 321 "delay_partial_inst.m"
                      MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__V_143_143, 2) = ((MR_Box) (check_hlds__delay_partial_inst__SubGoal_37));
#line 321 "delay_partial_inst.m"
                    }
#line 321 "delay_partial_inst.m"
                    {
#line 321 "delay_partial_inst.m"
                      MR_Word base;
#line 321 "delay_partial_inst.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 321 "delay_partial_inst.m"
                      *check_hlds__delay_partial_inst__Goal_10 = base;
#line 321 "delay_partial_inst.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__delay_partial_inst__V_143_143));
#line 321 "delay_partial_inst.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__delay_partial_inst__GoalInfo0_14));
#line 321 "delay_partial_inst.m"
                    }
#line 320 "delay_partial_inst.m"
                  }
#line 310 "delay_partial_inst.m"
                *check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_122 = check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_121;
#line 310 "delay_partial_inst.m"
              }
#line 284 "delay_partial_inst.m"
              break;
#line 284 "delay_partial_inst.m"
            case (MR_Integer) 6:
#line 300 "delay_partial_inst.m"
              {
#line 300 "delay_partial_inst.m"
                MR_Word check_hlds__delay_partial_inst__Vars_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 1)));
#line 300 "delay_partial_inst.m"
                MR_Word check_hlds__delay_partial_inst__Cond0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 2)));
#line 300 "delay_partial_inst.m"
                MR_Word check_hlds__delay_partial_inst__Then0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 3)));
#line 300 "delay_partial_inst.m"
                MR_Word check_hlds__delay_partial_inst__Else0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 4)));
#line 300 "delay_partial_inst.m"
                MR_Word check_hlds__delay_partial_inst__InstMapThen_29;
#line 300 "delay_partial_inst.m"
                MR_Word check_hlds__delay_partial_inst__Cond_30;
#line 300 "delay_partial_inst.m"
                MR_Word check_hlds__delay_partial_inst__Then_31;
#line 300 "delay_partial_inst.m"
                MR_Word check_hlds__delay_partial_inst__Else_32;
#line 300 "delay_partial_inst.m"
                MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_144_144;
#line 300 "delay_partial_inst.m"
                MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_145_145;
#line 300 "delay_partial_inst.m"
                MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_146_146;
#line 300 "delay_partial_inst.m"
                MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_147_147;
#line 300 "delay_partial_inst.m"
                MR_Word check_hlds__delay_partial_inst__V_150_150;

#line 301 "delay_partial_inst.m"
                {
#line 301 "delay_partial_inst.m"
                  hlds__goal_util__update_instmap_3_p_0(check_hlds__delay_partial_inst__Cond0_26, check_hlds__delay_partial_inst__InstMap0_8, &check_hlds__delay_partial_inst__InstMapThen_29);
                }
#line 302 "delay_partial_inst.m"
                {
#line 302 "delay_partial_inst.m"
                  check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(check_hlds__delay_partial_inst__InstMap0_8, check_hlds__delay_partial_inst__Cond0_26, &check_hlds__delay_partial_inst__Cond_30, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_121, &check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_144_144, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_123, &check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_145_145);
                }
#line 304 "delay_partial_inst.m"
                {
#line 304 "delay_partial_inst.m"
                  check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(check_hlds__delay_partial_inst__InstMapThen_29, check_hlds__delay_partial_inst__Then0_27, &check_hlds__delay_partial_inst__Then_31, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_144_144, &check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_146_146, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_145_145, &check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_147_147);
                }
#line 306 "delay_partial_inst.m"
                {
#line 306 "delay_partial_inst.m"
                  check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(check_hlds__delay_partial_inst__InstMap0_8, check_hlds__delay_partial_inst__Else0_28, &check_hlds__delay_partial_inst__Else_32, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_146_146, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_122, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_147_147, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_124);
                }
#line 308 "delay_partial_inst.m"
                {
#line 308 "delay_partial_inst.m"
                  check_hlds__delay_partial_inst__V_150_150 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 308 "delay_partial_inst.m"
                  MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__V_150_150, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 308 "delay_partial_inst.m"
                  MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__V_150_150, 1) = ((MR_Box) (check_hlds__delay_partial_inst__Vars_25));
#line 308 "delay_partial_inst.m"
                  MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__V_150_150, 2) = ((MR_Box) (check_hlds__delay_partial_inst__Cond_30));
#line 308 "delay_partial_inst.m"
                  MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__V_150_150, 3) = ((MR_Box) (check_hlds__delay_partial_inst__Then_31));
#line 308 "delay_partial_inst.m"
                  MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__V_150_150, 4) = ((MR_Box) (check_hlds__delay_partial_inst__Else_32));
#line 308 "delay_partial_inst.m"
                }
#line 308 "delay_partial_inst.m"
                {
#line 308 "delay_partial_inst.m"
                  MR_Word base;
#line 308 "delay_partial_inst.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 308 "delay_partial_inst.m"
                  *check_hlds__delay_partial_inst__Goal_10 = base;
#line 308 "delay_partial_inst.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__delay_partial_inst__V_150_150));
#line 308 "delay_partial_inst.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__delay_partial_inst__GoalInfo0_14));
#line 308 "delay_partial_inst.m"
                }
#line 300 "delay_partial_inst.m"
              }
#line 284 "delay_partial_inst.m"
              break;
#line 284 "delay_partial_inst.m"
            case (MR_Integer) 7:
#line 388 "delay_partial_inst.m"
              {
#line 388 "delay_partial_inst.m"
                MR_Word check_hlds__delay_partial_inst__ShortHand0_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 1)));

#line 402 "delay_partial_inst.m"
#line 402 "delay_partial_inst.m"
                switch (MR_tag((MR_Word) check_hlds__delay_partial_inst__ShortHand0_104)) {
#line 402 "delay_partial_inst.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 402 "delay_partial_inst.m"
                  case (MR_Integer) 0:
#line 410 "delay_partial_inst.m"
                    {
#line 412 "delay_partial_inst.m"
                      {
#line 412 "delay_partial_inst.m"
                        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.delay_partial_inst", (MR_String) "predicate \140check_hlds.delay_partial_inst.delay_partial_inst_in_goal\'/7", (MR_String) "bi_implication");
#line 412 "delay_partial_inst.m"
                        return;
                      }
#line 410 "delay_partial_inst.m"
                    }
#line 402 "delay_partial_inst.m"
                    break;
#line 402 "delay_partial_inst.m"
                  case (MR_Integer) 1:
#line 391 "delay_partial_inst.m"
                    {
#line 391 "delay_partial_inst.m"
                      MR_Word check_hlds__delay_partial_inst__GoalType_105 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__ShortHand0_104, (MR_Integer) 0)));
#line 391 "delay_partial_inst.m"
                      MR_Word check_hlds__delay_partial_inst__Outer_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__ShortHand0_104, (MR_Integer) 1)));
#line 391 "delay_partial_inst.m"
                      MR_Word check_hlds__delay_partial_inst__Inner_107 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__ShortHand0_104, (MR_Integer) 2)));
#line 391 "delay_partial_inst.m"
                      MR_Word check_hlds__delay_partial_inst__MaybeOutputVars_108 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__ShortHand0_104, (MR_Integer) 3)));
#line 391 "delay_partial_inst.m"
                      MR_Word check_hlds__delay_partial_inst__MainGoal0_109 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__ShortHand0_104, (MR_Integer) 4)));
#line 391 "delay_partial_inst.m"
                      MR_Word check_hlds__delay_partial_inst__OrElseGoals0_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__ShortHand0_104, (MR_Integer) 5)));
#line 391 "delay_partial_inst.m"
                      MR_Word check_hlds__delay_partial_inst__OrElseInners_111 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__ShortHand0_104, (MR_Integer) 6)));
#line 391 "delay_partial_inst.m"
                      MR_Word check_hlds__delay_partial_inst__MainGoal_112;
#line 391 "delay_partial_inst.m"
                      MR_Word check_hlds__delay_partial_inst__OrElseGoals_114;
#line 391 "delay_partial_inst.m"
                      MR_Word check_hlds__delay_partial_inst__ShortHand_116;
#line 391 "delay_partial_inst.m"
                      MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_130_130;
#line 391 "delay_partial_inst.m"
                      MR_Word check_hlds__delay_partial_inst__GoalExpr_171;
#line 394 "delay_partial_inst.m"
                      MR_Word check_hlds__delay_partial_inst__V_113_113;
#line 396 "delay_partial_inst.m"
                      MR_Word check_hlds__delay_partial_inst__V_115_115;

#line 394 "delay_partial_inst.m"
                      {
#line 394 "delay_partial_inst.m"
                        check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(check_hlds__delay_partial_inst__InstMap0_8, check_hlds__delay_partial_inst__MainGoal0_109, &check_hlds__delay_partial_inst__MainGoal_112, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_121, &check_hlds__delay_partial_inst__V_113_113, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_123, &check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_130_130);
                      }
#line 396 "delay_partial_inst.m"
                      {
#line 396 "delay_partial_inst.m"
                        check_hlds__delay_partial_inst__delay_partial_inst_in_disj_7_p_0(check_hlds__delay_partial_inst__InstMap0_8, check_hlds__delay_partial_inst__OrElseGoals0_110, &check_hlds__delay_partial_inst__OrElseGoals_114, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_121, &check_hlds__delay_partial_inst__V_115_115, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_130_130, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_124);
                      }
#line 398 "delay_partial_inst.m"
                      {
#line 398 "delay_partial_inst.m"
                        check_hlds__delay_partial_inst__ShortHand_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 398 "delay_partial_inst.m"
                        MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__ShortHand_116, 0) = ((MR_Box) (check_hlds__delay_partial_inst__GoalType_105));
#line 398 "delay_partial_inst.m"
                        MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__ShortHand_116, 1) = ((MR_Box) (check_hlds__delay_partial_inst__Outer_106));
#line 398 "delay_partial_inst.m"
                        MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__ShortHand_116, 2) = ((MR_Box) (check_hlds__delay_partial_inst__Inner_107));
#line 398 "delay_partial_inst.m"
                        MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__ShortHand_116, 3) = ((MR_Box) (check_hlds__delay_partial_inst__MaybeOutputVars_108));
#line 398 "delay_partial_inst.m"
                        MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__ShortHand_116, 4) = ((MR_Box) (check_hlds__delay_partial_inst__MainGoal_112));
#line 398 "delay_partial_inst.m"
                        MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__ShortHand_116, 5) = ((MR_Box) (check_hlds__delay_partial_inst__OrElseGoals_114));
#line 398 "delay_partial_inst.m"
                        MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__ShortHand_116, 6) = ((MR_Box) (check_hlds__delay_partial_inst__OrElseInners_111));
#line 398 "delay_partial_inst.m"
                      }
#line 400 "delay_partial_inst.m"
                      {
#line 400 "delay_partial_inst.m"
                        check_hlds__delay_partial_inst__GoalExpr_171 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 400 "delay_partial_inst.m"
                        MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__GoalExpr_171, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 400 "delay_partial_inst.m"
                        MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__GoalExpr_171, 1) = ((MR_Box) (check_hlds__delay_partial_inst__ShortHand_116));
#line 400 "delay_partial_inst.m"
                      }
#line 401 "delay_partial_inst.m"
                      {
#line 401 "delay_partial_inst.m"
                        MR_Word base;
#line 401 "delay_partial_inst.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 401 "delay_partial_inst.m"
                        *check_hlds__delay_partial_inst__Goal_10 = base;
#line 401 "delay_partial_inst.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__delay_partial_inst__GoalExpr_171));
#line 401 "delay_partial_inst.m"
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__delay_partial_inst__GoalInfo0_14));
#line 401 "delay_partial_inst.m"
                      }
#line 391 "delay_partial_inst.m"
                      *check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_122 = check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_121;
#line 391 "delay_partial_inst.m"
                    }
#line 402 "delay_partial_inst.m"
                    break;
#line 402 "delay_partial_inst.m"
                  case (MR_Integer) 2:
#line 403 "delay_partial_inst.m"
                    {
#line 403 "delay_partial_inst.m"
                      MR_Word check_hlds__delay_partial_inst__MaybeIO_117 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__ShortHand0_104, (MR_Integer) 0)));
#line 403 "delay_partial_inst.m"
                      MR_Word check_hlds__delay_partial_inst__ResultVar_118 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__ShortHand0_104, (MR_Integer) 1)));
#line 403 "delay_partial_inst.m"
                      MR_Word check_hlds__delay_partial_inst__SubGoal0_172 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__ShortHand0_104, (MR_Integer) 2)));
#line 403 "delay_partial_inst.m"
                      MR_Word check_hlds__delay_partial_inst__SubGoal_173;
#line 403 "delay_partial_inst.m"
                      MR_Word check_hlds__delay_partial_inst__GoalExpr_174;
#line 403 "delay_partial_inst.m"
                      MR_Word check_hlds__delay_partial_inst__ShortHand_175;

#line 404 "delay_partial_inst.m"
                      {
#line 404 "delay_partial_inst.m"
                        check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(check_hlds__delay_partial_inst__InstMap0_8, check_hlds__delay_partial_inst__SubGoal0_172, &check_hlds__delay_partial_inst__SubGoal_173, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_121, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_122, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_123, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_124);
                      }
#line 406 "delay_partial_inst.m"
                      {
#line 406 "delay_partial_inst.m"
                        check_hlds__delay_partial_inst__ShortHand_175 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 406 "delay_partial_inst.m"
                        MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__ShortHand_175, 0) = ((MR_Box) (check_hlds__delay_partial_inst__MaybeIO_117));
#line 406 "delay_partial_inst.m"
                        MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__ShortHand_175, 1) = ((MR_Box) (check_hlds__delay_partial_inst__ResultVar_118));
#line 406 "delay_partial_inst.m"
                        MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__ShortHand_175, 2) = ((MR_Box) (check_hlds__delay_partial_inst__SubGoal_173));
#line 406 "delay_partial_inst.m"
                      }
#line 407 "delay_partial_inst.m"
                      {
#line 407 "delay_partial_inst.m"
                        check_hlds__delay_partial_inst__GoalExpr_174 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 407 "delay_partial_inst.m"
                        MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__GoalExpr_174, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 407 "delay_partial_inst.m"
                        MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__GoalExpr_174, 1) = ((MR_Box) (check_hlds__delay_partial_inst__ShortHand_175));
#line 407 "delay_partial_inst.m"
                      }
#line 408 "delay_partial_inst.m"
                      {
#line 408 "delay_partial_inst.m"
                        MR_Word base;
#line 408 "delay_partial_inst.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 408 "delay_partial_inst.m"
                        *check_hlds__delay_partial_inst__Goal_10 = base;
#line 408 "delay_partial_inst.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__delay_partial_inst__GoalExpr_174));
#line 408 "delay_partial_inst.m"
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__delay_partial_inst__GoalInfo0_14));
#line 408 "delay_partial_inst.m"
                      }
#line 403 "delay_partial_inst.m"
                    }
#line 402 "delay_partial_inst.m"
                    break;
#line 402 "delay_partial_inst.m"
                }
#line 388 "delay_partial_inst.m"
              }
#line 284 "delay_partial_inst.m"
              break;
#line 284 "delay_partial_inst.m"
          }
#line 284 "delay_partial_inst.m"
          break;
#line 284 "delay_partial_inst.m"
      }
#line 277 "delay_partial_inst.m"
    }
#line 273 "delay_partial_inst.m"
  }
#line 273 "delay_partial_inst.m"
}

#line 221 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_proc_6_p_0(
#line 221 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__ModuleInfo_7,
#line 221 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__PredId_8,
#line 221 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__ProcTable_9,
#line 221 "delay_partial_inst.m"
  MR_Integer check_hlds__delay_partial_inst__ProcId_10,
#line 221 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ChangedProcs_0_27,
#line 221 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_ChangedProcs_28)
#line 221 "delay_partial_inst.m"
{
#line 227 "delay_partial_inst.m"
  {
#line 227 "delay_partial_inst.m"
    MR_bool check_hlds__delay_partial_inst__succeeded;
#line 227 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__VarSet0_14;
#line 227 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__VarTypes0_15;
#line 227 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__InstMap0_16;
#line 227 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__Goal0_17;
#line 227 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__DelayInfo0_19;
#line 227 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__Goal_20;
#line 227 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__DelayInfo_22;
#line 227 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__VarSet_24;
#line 227 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__VarTypes_25;
#line 227 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__Changed_26;
#line 227 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ProcInfo_32_32;
#line 227 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__V_33_33;
#line 233 "delay_partial_inst.m"
    MR_Box check_hlds__delay_partial_inst__conv0_STATE_VARIABLE_ProcInfo_32_32;
#line 242 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst___ConstructMap_21;
#line 244 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__V_23_23;

#line 229 "delay_partial_inst.m"
    {
#line 229 "delay_partial_inst.m"
      hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Delaying partial instantiations in ", check_hlds__delay_partial_inst__PredId_8, check_hlds__delay_partial_inst__ProcId_10, check_hlds__delay_partial_inst__ModuleInfo_7);
    }
#line 233 "delay_partial_inst.m"
    {
#line 233 "delay_partial_inst.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__delay_partial_inst__ProcTable_9, check_hlds__delay_partial_inst__ProcId_10, &check_hlds__delay_partial_inst__conv0_STATE_VARIABLE_ProcInfo_32_32);
    }
#line 233 "delay_partial_inst.m"
    check_hlds__delay_partial_inst__STATE_VARIABLE_ProcInfo_32_32 = ((MR_Word) check_hlds__delay_partial_inst__conv0_STATE_VARIABLE_ProcInfo_32_32);
#line 234 "delay_partial_inst.m"
    {
#line 234 "delay_partial_inst.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__delay_partial_inst__STATE_VARIABLE_ProcInfo_32_32, &check_hlds__delay_partial_inst__VarSet0_14);
    }
#line 235 "delay_partial_inst.m"
    {
#line 235 "delay_partial_inst.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__delay_partial_inst__STATE_VARIABLE_ProcInfo_32_32, &check_hlds__delay_partial_inst__VarTypes0_15);
    }
#line 236 "delay_partial_inst.m"
    {
#line 236 "delay_partial_inst.m"
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(check_hlds__delay_partial_inst__STATE_VARIABLE_ProcInfo_32_32, check_hlds__delay_partial_inst__ModuleInfo_7, &check_hlds__delay_partial_inst__InstMap0_16);
    }
#line 237 "delay_partial_inst.m"
    {
#line 237 "delay_partial_inst.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__delay_partial_inst__STATE_VARIABLE_ProcInfo_32_32, &check_hlds__delay_partial_inst__Goal0_17);
    }
#line 240 "delay_partial_inst.m"
    {
#line 240 "delay_partial_inst.m"
      check_hlds__delay_partial_inst__DelayInfo0_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 240 "delay_partial_inst.m"
      MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__DelayInfo0_19, 0) = ((MR_Box) (check_hlds__delay_partial_inst__ModuleInfo_7));
#line 240 "delay_partial_inst.m"
      MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__DelayInfo0_19, 1) = ((MR_Box) (check_hlds__delay_partial_inst__VarSet0_14));
#line 240 "delay_partial_inst.m"
      MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__DelayInfo0_19, 2) = ((MR_Box) (check_hlds__delay_partial_inst__VarTypes0_15));
#line 240 "delay_partial_inst.m"
      MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__DelayInfo0_19, 3) = ((MR_Box) ((MR_Integer) 0));
#line 240 "delay_partial_inst.m"
    }
#line 243 "delay_partial_inst.m"
    {
#line 243 "delay_partial_inst.m"
      check_hlds__delay_partial_inst__V_33_33 = mercury__map__init_0_f_0((MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[1], (MR_Word) &check_hlds__delay_partial_inst_scalar_common_1[1]);
    }
#line 242 "delay_partial_inst.m"
    {
#line 242 "delay_partial_inst.m"
      check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(check_hlds__delay_partial_inst__InstMap0_16, check_hlds__delay_partial_inst__Goal0_17, &check_hlds__delay_partial_inst__Goal_20, check_hlds__delay_partial_inst__V_33_33, &check_hlds__delay_partial_inst___ConstructMap_21, check_hlds__delay_partial_inst__DelayInfo0_19, &check_hlds__delay_partial_inst__DelayInfo_22);
    }
#line 244 "delay_partial_inst.m"
    check_hlds__delay_partial_inst__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__DelayInfo_22, (MR_Integer) 0)));
#line 244 "delay_partial_inst.m"
    check_hlds__delay_partial_inst__VarSet_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__DelayInfo_22, (MR_Integer) 1)));
#line 244 "delay_partial_inst.m"
    check_hlds__delay_partial_inst__VarTypes_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__DelayInfo_22, (MR_Integer) 2)));
#line 244 "delay_partial_inst.m"
    check_hlds__delay_partial_inst__Changed_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__DelayInfo_22, (MR_Integer) 3)));
#line 266 "delay_partial_inst.m"
#line 266 "delay_partial_inst.m"
    switch (check_hlds__delay_partial_inst__Changed_26) {
#line 266 "delay_partial_inst.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 266 "delay_partial_inst.m"
      case (MR_Integer) 0:
#line 267 "delay_partial_inst.m"
        *check_hlds__delay_partial_inst__STATE_VARIABLE_ChangedProcs_28 = check_hlds__delay_partial_inst__STATE_VARIABLE_ChangedProcs_0_27;
#line 266 "delay_partial_inst.m"
        break;
#line 266 "delay_partial_inst.m"
      case (MR_Integer) 1:
#line 248 "delay_partial_inst.m"
        {
#line 248 "delay_partial_inst.m"
          MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ProcInfo_34_34;
#line 248 "delay_partial_inst.m"
          MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ProcInfo_35_35;
#line 248 "delay_partial_inst.m"
          MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ProcInfo_36_36;
#line 248 "delay_partial_inst.m"
          MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ProcInfo_38_38;
#line 248 "delay_partial_inst.m"
          MR_Word check_hlds__delay_partial_inst__V_40_40;

#line 249 "delay_partial_inst.m"
          {
#line 249 "delay_partial_inst.m"
            hlds__hlds_pred__proc_info_set_goal_3_p_0(check_hlds__delay_partial_inst__Goal_20, check_hlds__delay_partial_inst__STATE_VARIABLE_ProcInfo_32_32, &check_hlds__delay_partial_inst__STATE_VARIABLE_ProcInfo_34_34);
          }
#line 250 "delay_partial_inst.m"
          {
#line 250 "delay_partial_inst.m"
            hlds__hlds_pred__proc_info_set_varset_3_p_0(check_hlds__delay_partial_inst__VarSet_24, check_hlds__delay_partial_inst__STATE_VARIABLE_ProcInfo_34_34, &check_hlds__delay_partial_inst__STATE_VARIABLE_ProcInfo_35_35);
          }
#line 251 "delay_partial_inst.m"
          {
#line 251 "delay_partial_inst.m"
            hlds__hlds_pred__proc_info_set_vartypes_3_p_0(check_hlds__delay_partial_inst__VarTypes_25, check_hlds__delay_partial_inst__STATE_VARIABLE_ProcInfo_35_35, &check_hlds__delay_partial_inst__STATE_VARIABLE_ProcInfo_36_36);
          }
#line 252 "delay_partial_inst.m"
          {
#line 252 "delay_partial_inst.m"
            hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 0, check_hlds__delay_partial_inst__STATE_VARIABLE_ProcInfo_36_36, &check_hlds__delay_partial_inst__STATE_VARIABLE_ProcInfo_38_38);
          }
#line 254 "delay_partial_inst.m"
          {
#line 254 "delay_partial_inst.m"
            check_hlds__delay_partial_inst__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 254 "delay_partial_inst.m"
            MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_40_40, 0) = ((MR_Box) (check_hlds__delay_partial_inst__ProcId_10));
#line 254 "delay_partial_inst.m"
            MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_40_40, 1) = ((MR_Box) (check_hlds__delay_partial_inst__STATE_VARIABLE_ProcInfo_38_38));
#line 254 "delay_partial_inst.m"
          }
#line 254 "delay_partial_inst.m"
          {
#line 254 "delay_partial_inst.m"
            MR_Word base;
#line 254 "delay_partial_inst.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 254 "delay_partial_inst.m"
            *check_hlds__delay_partial_inst__STATE_VARIABLE_ChangedProcs_28 = base;
#line 254 "delay_partial_inst.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__delay_partial_inst__V_40_40));
#line 254 "delay_partial_inst.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__delay_partial_inst__STATE_VARIABLE_ChangedProcs_0_27));
#line 254 "delay_partial_inst.m"
          }
#line 248 "delay_partial_inst.m"
        }
#line 266 "delay_partial_inst.m"
        break;
#line 266 "delay_partial_inst.m"
    }
#line 227 "delay_partial_inst.m"
  }
#line 221 "delay_partial_inst.m"
}

#line 208 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_preds_acc_5_p_0_1(
#line 208 "delay_partial_inst.m"
  MR_Box check_hlds__delay_partial_inst__closure_arg,
#line 208 "delay_partial_inst.m"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_1,
#line 208 "delay_partial_inst.m"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_2,
#line 208 "delay_partial_inst.m"
  MR_Box * check_hlds__delay_partial_inst__wrapper_arg_3)
#line 208 "delay_partial_inst.m"
{
#line 208 "delay_partial_inst.m"
  {
#line 208 "delay_partial_inst.m"
    MR_Box check_hlds__delay_partial_inst__closure = check_hlds__delay_partial_inst__closure_arg;
#line 208 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__conv0_STATE_VARIABLE_ChangedProcs_28;

#line 208 "delay_partial_inst.m"
    {
#line 208 "delay_partial_inst.m"
      check_hlds__delay_partial_inst__delay_partial_inst_proc_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__closure, (MR_Integer) 5))), ((MR_Integer) check_hlds__delay_partial_inst__wrapper_arg_1), ((MR_Word) check_hlds__delay_partial_inst__wrapper_arg_2), &check_hlds__delay_partial_inst__conv0_STATE_VARIABLE_ChangedProcs_28);
    }
#line 208 "delay_partial_inst.m"
    *check_hlds__delay_partial_inst__wrapper_arg_3 = ((MR_Box) (check_hlds__delay_partial_inst__conv0_STATE_VARIABLE_ChangedProcs_28));
#line 208 "delay_partial_inst.m"
  }
#line 208 "delay_partial_inst.m"
}

#line 198 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_preds_acc_5_p_0(
#line 198 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__1_1,
#line 198 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_RevChangedPredIds_0_2,
#line 198 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_RevChangedPredIds_3,
#line 198 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_0_4,
#line 198 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_5)
#line 198 "delay_partial_inst.m"
{
#line 202 "delay_partial_inst.m"
  while (MR_TRUE)
#line 202 "delay_partial_inst.m"
    {
#line 202 "delay_partial_inst.m"
      /* tailcall optimized into a loop */
#line 202 "delay_partial_inst.m"
      {
#line 202 "delay_partial_inst.m"
        MR_bool check_hlds__delay_partial_inst__succeeded;

#line 202 "delay_partial_inst.m"
        if ((check_hlds__delay_partial_inst__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 202 "delay_partial_inst.m"
          {
#line 202 "delay_partial_inst.m"
            *check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_5 = check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_0_4;
#line 202 "delay_partial_inst.m"
            *check_hlds__delay_partial_inst__STATE_VARIABLE_RevChangedPredIds_3 = check_hlds__delay_partial_inst__STATE_VARIABLE_RevChangedPredIds_0_2;
#line 202 "delay_partial_inst.m"
          }
#line 202 "delay_partial_inst.m"
        else
#line 204 "delay_partial_inst.m"
          {
#line 204 "delay_partial_inst.m"
            MR_Word check_hlds__delay_partial_inst__TypeCtorInfo_37_37;
#line 204 "delay_partial_inst.m"
            MR_Word check_hlds__delay_partial_inst__PredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__HeadVar__1_1, (MR_Integer) 0)));
#line 204 "delay_partial_inst.m"
            MR_Word check_hlds__delay_partial_inst__PredIds_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__HeadVar__1_1, (MR_Integer) 1)));
#line 204 "delay_partial_inst.m"
            MR_Word check_hlds__delay_partial_inst__PredInfo0_16;
#line 204 "delay_partial_inst.m"
            MR_Word check_hlds__delay_partial_inst__ProcTable0_17;
#line 204 "delay_partial_inst.m"
            MR_Word check_hlds__delay_partial_inst__ProcIds_18;
#line 204 "delay_partial_inst.m"
            MR_Word check_hlds__delay_partial_inst__ChangedProcs_19;
#line 204 "delay_partial_inst.m"
            MR_Word check_hlds__delay_partial_inst__V_28_28;
#line 204 "delay_partial_inst.m"
            MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_30_30;
#line 204 "delay_partial_inst.m"
            MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_RevChangedPredIds_31_31;
#line 208 "delay_partial_inst.m"
            MR_Box check_hlds__delay_partial_inst__conv1_ChangedProcs_19;

#line 205 "delay_partial_inst.m"
            {
#line 205 "delay_partial_inst.m"
              hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_0_4, check_hlds__delay_partial_inst__PredId_12, &check_hlds__delay_partial_inst__PredInfo0_16);
            }
#line 206 "delay_partial_inst.m"
            {
#line 206 "delay_partial_inst.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__delay_partial_inst__PredInfo0_16, &check_hlds__delay_partial_inst__ProcTable0_17);
            }
#line 207 "delay_partial_inst.m"
            {
#line 207 "delay_partial_inst.m"
              check_hlds__delay_partial_inst__ProcIds_18 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(check_hlds__delay_partial_inst__PredInfo0_16);
            }
#line 208 "delay_partial_inst.m"
            {
#line 208 "delay_partial_inst.m"
              check_hlds__delay_partial_inst__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 208 "delay_partial_inst.m"
              MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_28_28, 0) = ((MR_Box) (&check_hlds__delay_partial_inst_scalar_common_3[0]));
#line 208 "delay_partial_inst.m"
              MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_28_28, 1) = ((MR_Box) (check_hlds__delay_partial_inst__delay_partial_inst_preds_acc_5_p_0_1));
#line 208 "delay_partial_inst.m"
              MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 208 "delay_partial_inst.m"
              MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_28_28, 3) = ((MR_Box) (check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_0_4));
#line 208 "delay_partial_inst.m"
              MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_28_28, 4) = ((MR_Box) (check_hlds__delay_partial_inst__PredId_12));
#line 208 "delay_partial_inst.m"
              MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_28_28, 5) = ((MR_Box) (check_hlds__delay_partial_inst__ProcTable0_17));
#line 208 "delay_partial_inst.m"
            }
#line 4039 "check_hlds.delay_partial_inst.c"
            check_hlds__delay_partial_inst__TypeCtorInfo_37_37 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 208 "delay_partial_inst.m"
            {
#line 208 "delay_partial_inst.m"
              mercury__list__foldl_4_p_0(check_hlds__delay_partial_inst__TypeCtorInfo_37_37, (MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[0], check_hlds__delay_partial_inst__V_28_28, check_hlds__delay_partial_inst__ProcIds_18, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__delay_partial_inst__conv1_ChangedProcs_19);
            }
#line 208 "delay_partial_inst.m"
            check_hlds__delay_partial_inst__ChangedProcs_19 = ((MR_Word) check_hlds__delay_partial_inst__conv1_ChangedProcs_19);
#line 216 "delay_partial_inst.m"
            if ((check_hlds__delay_partial_inst__ChangedProcs_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 217 "delay_partial_inst.m"
              {
#line 217 "delay_partial_inst.m"
                check_hlds__delay_partial_inst__STATE_VARIABLE_RevChangedPredIds_31_31 = check_hlds__delay_partial_inst__STATE_VARIABLE_RevChangedPredIds_0_2;
#line 217 "delay_partial_inst.m"
                check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_30_30 = check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_0_4;
#line 217 "delay_partial_inst.m"
              }
#line 216 "delay_partial_inst.m"
            else
#line 211 "delay_partial_inst.m"
              {
#line 211 "delay_partial_inst.m"
                MR_Word check_hlds__delay_partial_inst__ProcTable_22;
#line 211 "delay_partial_inst.m"
                MR_Word check_hlds__delay_partial_inst__PredInfo_23;

#line 212 "delay_partial_inst.m"
                {
#line 212 "delay_partial_inst.m"
                  mercury__map__set_from_assoc_list_3_p_0(check_hlds__delay_partial_inst__TypeCtorInfo_37_37, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__delay_partial_inst__ChangedProcs_19, check_hlds__delay_partial_inst__ProcTable0_17, &check_hlds__delay_partial_inst__ProcTable_22);
                }
#line 213 "delay_partial_inst.m"
                {
#line 213 "delay_partial_inst.m"
                  hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__delay_partial_inst__ProcTable_22, check_hlds__delay_partial_inst__PredInfo0_16, &check_hlds__delay_partial_inst__PredInfo_23);
                }
#line 214 "delay_partial_inst.m"
                {
#line 214 "delay_partial_inst.m"
                  hlds__hlds_module__module_info_set_pred_info_4_p_0(check_hlds__delay_partial_inst__PredId_12, check_hlds__delay_partial_inst__PredInfo_23, check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_0_4, &check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_30_30);
                }
#line 215 "delay_partial_inst.m"
                {
#line 215 "delay_partial_inst.m"
                  check_hlds__delay_partial_inst__STATE_VARIABLE_RevChangedPredIds_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "delay_partial_inst.m"
                  MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__STATE_VARIABLE_RevChangedPredIds_31_31, 0) = ((MR_Box) (check_hlds__delay_partial_inst__PredId_12));
#line 215 "delay_partial_inst.m"
                  MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__STATE_VARIABLE_RevChangedPredIds_31_31, 1) = ((MR_Box) (check_hlds__delay_partial_inst__STATE_VARIABLE_RevChangedPredIds_0_2));
#line 215 "delay_partial_inst.m"
                }
#line 211 "delay_partial_inst.m"
              }
#line 219 "delay_partial_inst.m"
            /* direct tailcall eliminated */
#line 219 "delay_partial_inst.m"
            {
#line 219 "delay_partial_inst.m"
              MR_Word check_hlds__delay_partial_inst__HeadVar__1__tmp_copy_1 = check_hlds__delay_partial_inst__PredIds_13;
#line 219 "delay_partial_inst.m"
              MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_RevChangedPredIds_0__tmp_copy_2 = check_hlds__delay_partial_inst__STATE_VARIABLE_RevChangedPredIds_31_31;
#line 219 "delay_partial_inst.m"
              MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_0__tmp_copy_4 = check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_30_30;

#line 219 "delay_partial_inst.m"
              check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_0_4 = check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_0__tmp_copy_4;
#line 219 "delay_partial_inst.m"
              check_hlds__delay_partial_inst__STATE_VARIABLE_RevChangedPredIds_0_2 = check_hlds__delay_partial_inst__STATE_VARIABLE_RevChangedPredIds_0__tmp_copy_2;
#line 219 "delay_partial_inst.m"
              check_hlds__delay_partial_inst__HeadVar__1_1 = check_hlds__delay_partial_inst__HeadVar__1__tmp_copy_1;
#line 219 "delay_partial_inst.m"
            }
#line 219 "delay_partial_inst.m"
            continue;
#line 204 "delay_partial_inst.m"
          }
#line 202 "delay_partial_inst.m"
      }
#line 202 "delay_partial_inst.m"
      break;
#line 202 "delay_partial_inst.m"
    }
#line 198 "delay_partial_inst.m"
}

#line 119 "delay_partial_inst.m"
void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_preds_4_p_0(
#line 119 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__PredIds_5,
#line 119 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__ChangedPredIds_6,
#line 119 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_0_9,
#line 119 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_10)
#line 119 "delay_partial_inst.m"
{
#line 191 "delay_partial_inst.m"
  {
#line 191 "delay_partial_inst.m"
    MR_bool check_hlds__delay_partial_inst__succeeded;
#line 191 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__RevChangedPredIds_8;

#line 192 "delay_partial_inst.m"
    {
#line 192 "delay_partial_inst.m"
      check_hlds__delay_partial_inst__delay_partial_inst_preds_acc_5_p_0(check_hlds__delay_partial_inst__PredIds_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__delay_partial_inst__RevChangedPredIds_8, check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_0_9, check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_10);
    }
#line 193 "delay_partial_inst.m"
    {
#line 193 "delay_partial_inst.m"
      mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, check_hlds__delay_partial_inst__RevChangedPredIds_8, check_hlds__delay_partial_inst__ChangedPredIds_6);
#line 193 "delay_partial_inst.m"
      return;
    }
#line 191 "delay_partial_inst.m"
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
