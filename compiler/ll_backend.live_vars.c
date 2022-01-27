/*
** Automatically generated from `live_vars.m'
** by the Mercury compiler,
** version rotd-2015-05-05
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


/* :- module ll_backend.live_vars. */
/* :- implementation. */

/*
INIT mercury__ll_backend__live_vars__init
ENDINIT
*/

#include "ll_backend.live_vars.mih"


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
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.arg_info.mih"
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
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
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



#line 232 "live_vars.m"
struct ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0_s {
#line 244 "live_vars.m"
  MR_bool ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__succeeded;
#line 290 "live_vars.m"
  MR_Word ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__Goals_238;
#line 313 "live_vars.m"
  jmp_buf ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__commit_0;
#line 313 "live_vars.m"
  MR_Word ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__DisjunctGoalInfo_44;
#line 313 "live_vars.m"
  MR_Word ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__DisjunctResumePoint_45;
#line 313 "live_vars.m"
  MR_Word ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__Locs_47;
#line 313 "live_vars.m"
  MR_Word ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__V_218_218;
#line 313 "live_vars.m"
  MR_Word ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__Disjunct_236;
#line 313 "live_vars.m"
  MR_Word ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__V_337_337;
#line 313 "live_vars.m"
  MR_Box ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__conv1_Disjunct_236;
#line 232 "live_vars.m"
};


#line 166 "ll_backend.live_vars.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__live_vars__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 169 "ll_backend.live_vars.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__live_vars__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 172 "ll_backend.live_vars.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__live_vars__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 175 "ll_backend.live_vars.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__live_vars__array__ti_array_1check_hlds__type_util__type_ctor_info_is_dummy_type_0;

#line 178 "ll_backend.live_vars.c"
static const MR_PseudoTypeInfo ll_backend__live_vars__ll_backend__live_vars__field_types_alloc_data_0_0[6];

#line 181 "ll_backend.live_vars.c"
static const MR_ConstString ll_backend__live_vars__ll_backend__live_vars__field_names_alloc_data_0_0[6];

#line 184 "ll_backend.live_vars.c"
static const MR_DuFunctorDesc ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_alloc_data_0_0;

#line 187 "ll_backend.live_vars.c"
static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_alloc_data_0_0[1];

#line 190 "ll_backend.live_vars.c"
static const MR_DuPtagLayout ll_backend__live_vars__ll_backend__live_vars__du_ptag_ordered_alloc_data_0[1];

#line 193 "ll_backend.live_vars.c"
static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_name_ordered_alloc_data_0[1];

#line 196 "ll_backend.live_vars.c"
static const MR_Integer ll_backend__live_vars__ll_backend__live_vars__functor_number_map_alloc_data_0[1];

#line 199 "ll_backend.live_vars.c"
static const MR_DuFunctorDesc ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_0;

#line 202 "ll_backend.live_vars.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__live_vars__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 205 "ll_backend.live_vars.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__live_vars__list__ti_list_1tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 208 "ll_backend.live_vars.c"
static const MR_PseudoTypeInfo ll_backend__live_vars__ll_backend__live_vars__field_types_parallel_stackvars_0_1[3];

#line 211 "ll_backend.live_vars.c"
static const MR_DuFunctorDesc ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_1;

#line 214 "ll_backend.live_vars.c"
static const MR_PseudoTypeInfo ll_backend__live_vars__ll_backend__live_vars__field_types_parallel_stackvars_0_2[2];

#line 217 "ll_backend.live_vars.c"
static const MR_DuFunctorDesc ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_2;

#line 220 "ll_backend.live_vars.c"
static const MR_PseudoTypeInfo ll_backend__live_vars__ll_backend__live_vars__field_types_parallel_stackvars_0_3[3];

#line 223 "ll_backend.live_vars.c"
static const MR_DuFunctorDesc ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_3;

#line 226 "ll_backend.live_vars.c"
static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_parallel_stackvars_0_0[1];

#line 229 "ll_backend.live_vars.c"
static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_parallel_stackvars_0_1[1];

#line 232 "ll_backend.live_vars.c"
static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_parallel_stackvars_0_2[1];

#line 235 "ll_backend.live_vars.c"
static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_parallel_stackvars_0_3[1];

#line 238 "ll_backend.live_vars.c"
static const MR_DuPtagLayout ll_backend__live_vars__ll_backend__live_vars__du_ptag_ordered_parallel_stackvars_0[4];

#line 241 "ll_backend.live_vars.c"
static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_name_ordered_parallel_stackvars_0[4];

#line 244 "ll_backend.live_vars.c"
static const MR_Integer ll_backend__live_vars__ll_backend__live_vars__functor_number_map_parallel_stackvars_0[4];

#line 247 "ll_backend.live_vars.c"
static const MR_ConstString ll_backend__live_vars__ll_backend__live_vars__type_class_id_var_names_stack_alloc_info_1[1];

#line 250 "ll_backend.live_vars.c"
static const MR_TypeClassMethod ll_backend__live_vars__ll_backend__live_vars__type_class_id_method_ids_stack_alloc_info_1[4];

#line 253 "ll_backend.live_vars.c"
static const MR_TypeClassId ll_backend__live_vars__ll_backend__live_vars__type_class_id_stack_alloc_info_1;

#line 256 "ll_backend.live_vars.c"
static MR_bool MR_CALL 
ll_backend__live_vars____Unify____alloc_data_0_0_10001(
#line 259 "ll_backend.live_vars.c"
  MR_Box ll_backend__live_vars__wrapper_arg_1,
#line 261 "ll_backend.live_vars.c"
  MR_Box ll_backend__live_vars__wrapper_arg_2);

#line 264 "ll_backend.live_vars.c"
static void MR_CALL 
ll_backend__live_vars____Compare____alloc_data_0_0_10001(
#line 267 "ll_backend.live_vars.c"
  MR_Box * ll_backend__live_vars__wrapper_arg_1,
#line 269 "ll_backend.live_vars.c"
  MR_Box ll_backend__live_vars__wrapper_arg_2,
#line 271 "ll_backend.live_vars.c"
  MR_Box ll_backend__live_vars__wrapper_arg_3);

#line 274 "ll_backend.live_vars.c"
static MR_bool MR_CALL 
ll_backend__live_vars____Unify____parallel_stackvars_0_0_10001(
#line 277 "ll_backend.live_vars.c"
  MR_Box ll_backend__live_vars__wrapper_arg_1,
#line 279 "ll_backend.live_vars.c"
  MR_Box ll_backend__live_vars__wrapper_arg_2);

#line 282 "ll_backend.live_vars.c"
static void MR_CALL 
ll_backend__live_vars____Compare____parallel_stackvars_0_0_10001(
#line 285 "ll_backend.live_vars.c"
  MR_Box * ll_backend__live_vars__wrapper_arg_1,
#line 287 "ll_backend.live_vars.c"
  MR_Box ll_backend__live_vars__wrapper_arg_2,
#line 289 "ll_backend.live_vars.c"
  MR_Box ll_backend__live_vars__wrapper_arg_3);

#line 812 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars____Compare____parallel_stackvars_0_0(
#line 812 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__1_1,
#line 812 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__2_2,
#line 812 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__3_3);

#line 812 "live_vars.m"
static MR_bool MR_CALL 
ll_backend__live_vars____Unify____parallel_stackvars_0_0(
#line 812 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 812 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__2_2);

#line 1008 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__par_stack_vars_recursive_call_4_p_0(
#line 1008 "live_vars.m"
  MR_Word * ll_backend__live_vars__MaybeNeedLC_5,
#line 1008 "live_vars.m"
  MR_Word * ll_backend__live_vars__DelayDeathSet_6,
#line 1008 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_17,
#line 1008 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_18);

#line 987 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__par_stack_vars_get_nonlocals_2_p_0(
#line 987 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 987 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__2_2);

#line 968 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__par_stack_vars_accumulate_stack_vars_3_p_0(
#line 968 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 968 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__2_2,
#line 968 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__3_3);

#line 957 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__par_stack_vars_get_stackvars_2_p_0(
#line 957 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 957 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__2_2);

#line 930 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__par_stack_vars_end_loop_control_4_p_0(
#line 930 "live_vars.m"
  MR_Word ll_backend__live_vars__NewWouldDieSet_5,
#line 930 "live_vars.m"
  MR_Word ll_backend__live_vars__OldParStackVars_6,
#line 930 "live_vars.m"
  MR_Word ll_backend__live_vars__ParStackVars0_7,
#line 930 "live_vars.m"
  MR_Word * ll_backend__live_vars__ParStackVars_8);

#line 913 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__par_stack_vars_start_loop_control_3_p_0(
#line 913 "live_vars.m"
  MR_Word ll_backend__live_vars__NonLocals_4,
#line 913 "live_vars.m"
  MR_Word ll_backend__live_vars__ParStackVars0_5,
#line 913 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__3_3);

#line 868 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__par_stack_vars_end_parallel_conjunction_4_p_0(
#line 868 "live_vars.m"
  MR_Word ll_backend__live_vars__LiveSet_5,
#line 868 "live_vars.m"
  MR_Word ll_backend__live_vars__OuterParStackVars_6,
#line 868 "live_vars.m"
  MR_Word ll_backend__live_vars__ParStackVars0_7,
#line 868 "live_vars.m"
  MR_Word * ll_backend__live_vars__ParStackVars_8);

#line 860 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__par_stack_vars_start_parallel_conjunction_3_p_0(
#line 860 "live_vars.m"
  MR_Word ll_backend__live_vars__LiveSet_4,
#line 860 "live_vars.m"
  MR_Word ll_backend__live_vars__OuterParStackVars_5,
#line 860 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__3_3);

#line 799 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__record_par_conj_6_p_0(
#line 799 "live_vars.m"
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_17,
#line 799 "live_vars.m"
  MR_Word ll_backend__live_vars__NeedInParConj_7,
#line 799 "live_vars.m"
  MR_Word ll_backend__live_vars__AllocData_8,
#line 799 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_GoalInfo_0_11,
#line 799 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_GoalInfo_12,
#line 799 "live_vars.m"
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_13,
#line 799 "live_vars.m"
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_14);

#line 722 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_cases_12_p_0(
#line 722 "live_vars.m"
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_54,
#line 722 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 722 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__2_2,
#line 722 "live_vars.m"
  MR_Word ll_backend__live_vars__ResumeVars0_3,
#line 722 "live_vars.m"
  MR_Word ll_backend__live_vars__AllocData_4,
#line 722 "live_vars.m"
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_5,
#line 722 "live_vars.m"
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_6,
#line 722 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__7_7,
#line 722 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__8_8,
#line 722 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__9_9,
#line 722 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__10_10,
#line 722 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_11,
#line 722 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_12);

#line 678 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_disj_13_p_0(
#line 678 "live_vars.m"
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_61,
#line 678 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 678 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__2_2,
#line 678 "live_vars.m"
  MR_Word ll_backend__live_vars__DisjGoalInfo_3,
#line 678 "live_vars.m"
  MR_Word ll_backend__live_vars__ResumeVars0_4,
#line 678 "live_vars.m"
  MR_Word ll_backend__live_vars__AllocData_5,
#line 678 "live_vars.m"
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_6,
#line 678 "live_vars.m"
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_7,
#line 678 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__8_8,
#line 678 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__9_9,
#line 678 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__10_10,
#line 678 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__11_11,
#line 678 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_12,
#line 678 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_13);

#line 658 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_par_conj_12_p_0(
#line 658 "live_vars.m"
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_50,
#line 658 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 658 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__2_2,
#line 658 "live_vars.m"
  MR_Word ll_backend__live_vars__ResumeVars0_3,
#line 658 "live_vars.m"
  MR_Word ll_backend__live_vars__AllocData_4,
#line 658 "live_vars.m"
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_5,
#line 658 "live_vars.m"
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_6,
#line 658 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__7_7,
#line 658 "live_vars.m"
  MR_Word * ll_backend__live_vars__Liveness_8,
#line 658 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_9,
#line 658 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_10,
#line 658 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_11,
#line 658 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_12);

#line 630 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_conj_12_p_0(
#line 630 "live_vars.m"
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_60,
#line 630 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 630 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__2_2,
#line 630 "live_vars.m"
  MR_Word ll_backend__live_vars__ResumeVars0_3,
#line 630 "live_vars.m"
  MR_Word ll_backend__live_vars__AllocData_4,
#line 630 "live_vars.m"
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_5,
#line 630 "live_vars.m"
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_6,
#line 630 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_Liveness_0_7,
#line 630 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_Liveness_8,
#line 630 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_9,
#line 630 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_10,
#line 630 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_11,
#line 630 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_12);

#line 579 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_call_12_p_0(
#line 579 "live_vars.m"
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_57,
#line 579 "live_vars.m"
  MR_Word ll_backend__live_vars__OutVars_13,
#line 579 "live_vars.m"
  MR_Word ll_backend__live_vars__GoalInfo0_14,
#line 579 "live_vars.m"
  MR_Word * ll_backend__live_vars__GoalInfo_15,
#line 579 "live_vars.m"
  MR_Word ll_backend__live_vars__ResumeVars0_16,
#line 579 "live_vars.m"
  MR_Word ll_backend__live_vars__AllocData_17,
#line 579 "live_vars.m"
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_27,
#line 579 "live_vars.m"
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_28,
#line 579 "live_vars.m"
  MR_Word ll_backend__live_vars__Liveness_19,
#line 579 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_29,
#line 579 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_30,
#line 579 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_31,
#line 579 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_32);

#line 541 "live_vars.m"
static MR_Box MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_1(
#line 541 "live_vars.m"
  MR_Box ll_backend__live_vars__closure_arg,
#line 541 "live_vars.m"
  MR_Box ll_backend__live_vars__wrapper_arg_1);

#line 313 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_2(
#line 313 "live_vars.m"
  void * ll_backend__live_vars__env_ptr_arg);

#line 313 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_4(
#line 313 "live_vars.m"
  void * ll_backend__live_vars__env_ptr_arg);

#line 313 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_3(
#line 313 "live_vars.m"
  void * ll_backend__live_vars__env_ptr_arg);

#line 313 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_5(
#line 313 "live_vars.m"
  void * ll_backend__live_vars__env_ptr_arg);

#line 232 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0(
#line 232 "live_vars.m"
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322,
#line 232 "live_vars.m"
  MR_Word ll_backend__live_vars__GoalExpr0_15,
#line 232 "live_vars.m"
  MR_Word * ll_backend__live_vars__GoalExpr_16,
#line 232 "live_vars.m"
  MR_Word ll_backend__live_vars__GoalInfo0_17,
#line 232 "live_vars.m"
  MR_Word * ll_backend__live_vars__GoalInfo_18,
#line 232 "live_vars.m"
  MR_Word ll_backend__live_vars__ResumeVars0_19,
#line 232 "live_vars.m"
  MR_Word ll_backend__live_vars__AllocData_20,
#line 232 "live_vars.m"
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142,
#line 232 "live_vars.m"
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143,
#line 232 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144,
#line 232 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_Liveness_145,
#line 232 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146,
#line 232 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147,
#line 232 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148,
#line 232 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149);

#line 215 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__resume_locs_include_stack_2_p_0(
#line 215 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 215 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__2_2);

#line 151 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_12_p_0(
#line 151 "live_vars.m"
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_56,
#line 151 "live_vars.m"
  MR_Word ll_backend__live_vars__Goal0_13,
#line 151 "live_vars.m"
  MR_Word * ll_backend__live_vars__Goal_14,
#line 151 "live_vars.m"
  MR_Word ll_backend__live_vars__ResumeVars0_15,
#line 151 "live_vars.m"
  MR_Word ll_backend__live_vars__AllocData_16,
#line 151 "live_vars.m"
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_37,
#line 151 "live_vars.m"
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_38,
#line 151 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_Liveness_0_39,
#line 151 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_Liveness_40,
#line 151 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_41,
#line 151 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_42,
#line 151 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_43,
#line 151 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_44);

#line 117 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__set_dummy_array_elements_6_p_0(
#line 117 "live_vars.m"
  MR_Word ll_backend__live_vars__ModuleInfo_1,
#line 117 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__2_2,
#line 117 "live_vars.m"
  MR_ArrayPtr ll_backend__live_vars__STATE_VARIABLE_DummyTypeArray_0_3,
#line 117 "live_vars.m"
  MR_ArrayPtr * ll_backend__live_vars__STATE_VARIABLE_DummyTypeArray_4,
#line 117 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_DummyVars_0_5,
#line 117 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_DummyVars_6);

#line 111 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__max_var_num_3_p_0(
#line 111 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 111 "live_vars.m"
  MR_Integer ll_backend__live_vars__STATE_VARIABLE_MaxVarNum_0_8,
#line 111 "live_vars.m"
  MR_Integer * ll_backend__live_vars__STATE_VARIABLE_MaxVarNum_9);

#line 104 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_dummy_type_array_4_p_0_1(
#line 104 "live_vars.m"
  MR_Box ll_backend__live_vars__closure_arg,
#line 104 "live_vars.m"
  MR_Box ll_backend__live_vars__wrapper_arg_1,
#line 104 "live_vars.m"
  MR_Box ll_backend__live_vars__wrapper_arg_2,
#line 104 "live_vars.m"
  MR_Box * ll_backend__live_vars__wrapper_arg_3);


static /* final */ const MR_Box ll_backend__live_vars_scalar_common_1[4][2];

static /* final */ const MR_Box ll_backend__live_vars_scalar_common_2[4][3];

static /* final */ const MR_Box ll_backend__live_vars_scalar_common_3[1][6];

static /* final */ const MR_Box ll_backend__live_vars_scalar_common_4[1][5];




static /* final */ const MR_Box ll_backend__live_vars_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&check_hlds__type_util__check_hlds__type_util__type_ctor_info_is_dummy_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__live_vars_scalar_common_1[2]))
  },
};

static /* final */ const MR_Box ll_backend__live_vars_scalar_common_2[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ll_backend__live_vars_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__live_vars_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&ll_backend__live_vars_scalar_common_3[0])),
    ((MR_Box) (ll_backend__live_vars__build_dummy_type_array_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ll_backend__live_vars_scalar_common_4[0])),
    ((MR_Box) (ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__live_vars_scalar_common_3[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__live_vars__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box ll_backend__live_vars_scalar_common_4[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&ll_backend__live_vars__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 806 "ll_backend.live_vars.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__live_vars__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 814 "ll_backend.live_vars.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__live_vars__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__live_vars__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 823 "ll_backend.live_vars.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__live_vars__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 831 "ll_backend.live_vars.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__live_vars__array__ti_array_1check_hlds__type_util__type_ctor_info_is_dummy_type_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &check_hlds__type_util__check_hlds__type_util__type_ctor_info_is_dummy_type_0
  }
};

#line 839 "ll_backend.live_vars.c"
static const MR_PseudoTypeInfo ll_backend__live_vars__ll_backend__live_vars__field_types_alloc_data_0_0[6] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &ll_backend__live_vars__array__ti_array_1check_hlds__type_util__type_ctor_info_is_dummy_type_0
};

#line 849 "ll_backend.live_vars.c"
static const MR_ConstString ll_backend__live_vars__ll_backend__live_vars__field_names_alloc_data_0_0[6] = {
  (MR_String) "ad_module_info",
  (MR_String) "ad_proc_info",
  (MR_String) "ad_pred_proc_id",
  (MR_String) "ad_typeinfo_liveness",
  (MR_String) "ad_opt_no_return_calls",
  (MR_String) "ad_dummy_var_array"
};

#line 859 "ll_backend.live_vars.c"
static const MR_DuFunctorDesc ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_alloc_data_0_0 = {
  (MR_String) "alloc_data",
  (MR_Integer) 6,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__live_vars__ll_backend__live_vars__field_types_alloc_data_0_0,
  ll_backend__live_vars__ll_backend__live_vars__field_names_alloc_data_0_0,
  NULL,
  NULL
};

#line 874 "ll_backend.live_vars.c"
static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_alloc_data_0_0[1] = {
  &ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_alloc_data_0_0
};

#line 879 "ll_backend.live_vars.c"
static const MR_DuPtagLayout ll_backend__live_vars__ll_backend__live_vars__du_ptag_ordered_alloc_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_alloc_data_0_0
  }
};

#line 888 "ll_backend.live_vars.c"
static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_name_ordered_alloc_data_0[1] = {
  &ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_alloc_data_0_0
};

#line 893 "ll_backend.live_vars.c"
static const MR_Integer ll_backend__live_vars__ll_backend__live_vars__functor_number_map_alloc_data_0[1] = {
  (MR_Integer) 0
};

#line 898 "ll_backend.live_vars.c"
const MR_TypeCtorInfo_Struct ll_backend__live_vars__ll_backend__live_vars__type_ctor_info_alloc_data_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__live_vars____Unify____alloc_data_0_0_10001)),
  ((MR_Box) (ll_backend__live_vars____Compare____alloc_data_0_0_10001)),
  (MR_String) "ll_backend.live_vars",
  (MR_String) "alloc_data",
  {
    ll_backend__live_vars__ll_backend__live_vars__du_name_ordered_alloc_data_0
  },
  {
    ll_backend__live_vars__ll_backend__live_vars__du_ptag_ordered_alloc_data_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__live_vars__ll_backend__live_vars__functor_number_map_alloc_data_0
};

#line 919 "ll_backend.live_vars.c"
static const MR_DuFunctorDesc ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_0 = {
  (MR_String) "not_in_parallel_context",
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

#line 934 "ll_backend.live_vars.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__live_vars__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_TypeInfo) &ll_backend__live_vars__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 942 "ll_backend.live_vars.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__live_vars__list__ti_list_1tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__live_vars__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 950 "ll_backend.live_vars.c"
static const MR_PseudoTypeInfo ll_backend__live_vars__ll_backend__live_vars__field_types_parallel_stackvars_0_1[3] = {
  (MR_PseudoTypeInfo) &ll_backend__live_vars__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__live_vars__list__ti_list_1tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__live_vars__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 957 "ll_backend.live_vars.c"
static const MR_DuFunctorDesc ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_1 = {
  (MR_String) "parallel_conjunction",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  ll_backend__live_vars__ll_backend__live_vars__field_types_parallel_stackvars_0_1,
  NULL,
  NULL,
  NULL
};

#line 972 "ll_backend.live_vars.c"
static const MR_PseudoTypeInfo ll_backend__live_vars__ll_backend__live_vars__field_types_parallel_stackvars_0_2[2] = {
  (MR_PseudoTypeInfo) &ll_backend__live_vars__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__live_vars__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 978 "ll_backend.live_vars.c"
static const MR_DuFunctorDesc ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_2 = {
  (MR_String) "loop_control_scope",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  ll_backend__live_vars__ll_backend__live_vars__field_types_parallel_stackvars_0_2,
  NULL,
  NULL,
  NULL
};

#line 993 "ll_backend.live_vars.c"
static const MR_PseudoTypeInfo ll_backend__live_vars__ll_backend__live_vars__field_types_parallel_stackvars_0_3[3] = {
  (MR_PseudoTypeInfo) &ll_backend__live_vars__list__ti_list_1tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__live_vars__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__live_vars__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1000 "ll_backend.live_vars.c"
static const MR_DuFunctorDesc ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_3 = {
  (MR_String) "after_loop_control_scope",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 3,
  ll_backend__live_vars__ll_backend__live_vars__field_types_parallel_stackvars_0_3,
  NULL,
  NULL,
  NULL
};

#line 1015 "ll_backend.live_vars.c"
static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_parallel_stackvars_0_0[1] = {
  &ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_0
};

#line 1020 "ll_backend.live_vars.c"
static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_parallel_stackvars_0_1[1] = {
  &ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_1
};

#line 1025 "ll_backend.live_vars.c"
static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_parallel_stackvars_0_2[1] = {
  &ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_2
};

#line 1030 "ll_backend.live_vars.c"
static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_parallel_stackvars_0_3[1] = {
  &ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_3
};

#line 1035 "ll_backend.live_vars.c"
static const MR_DuPtagLayout ll_backend__live_vars__ll_backend__live_vars__du_ptag_ordered_parallel_stackvars_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_parallel_stackvars_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_parallel_stackvars_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_parallel_stackvars_0_2
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_parallel_stackvars_0_3
  }
};

#line 1059 "ll_backend.live_vars.c"
static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_name_ordered_parallel_stackvars_0[4] = {
  &ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_3,
  &ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_2,
  &ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_0,
  &ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_1
};

#line 1067 "ll_backend.live_vars.c"
static const MR_Integer ll_backend__live_vars__ll_backend__live_vars__functor_number_map_parallel_stackvars_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1075 "ll_backend.live_vars.c"
const MR_TypeCtorInfo_Struct ll_backend__live_vars__ll_backend__live_vars__type_ctor_info_parallel_stackvars_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__live_vars____Unify____parallel_stackvars_0_0_10001)),
  ((MR_Box) (ll_backend__live_vars____Compare____parallel_stackvars_0_0_10001)),
  (MR_String) "ll_backend.live_vars",
  (MR_String) "parallel_stackvars",
  {
    ll_backend__live_vars__ll_backend__live_vars__du_name_ordered_parallel_stackvars_0
  },
  {
    ll_backend__live_vars__ll_backend__live_vars__du_ptag_ordered_parallel_stackvars_0
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  ll_backend__live_vars__ll_backend__live_vars__functor_number_map_parallel_stackvars_0
};

#line 1096 "ll_backend.live_vars.c"
static const MR_ConstString ll_backend__live_vars__ll_backend__live_vars__type_class_id_var_names_stack_alloc_info_1[1] = {
  (MR_String) "T"
};

#line 1101 "ll_backend.live_vars.c"
static const MR_TypeClassMethod ll_backend__live_vars__ll_backend__live_vars__type_class_id_method_ids_stack_alloc_info_1[4] = {
  {
    (MR_String) "at_call_site",
    (MR_Integer) 4,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "at_resume_site",
    (MR_Integer) 4,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "at_par_conj",
    (MR_Integer) 4,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "at_recursive_call_for_loop_control",
    (MR_Integer) 4,
    mercury__private_builtin__MR_PREDICATE
  }
};

#line 1125 "ll_backend.live_vars.c"
static const MR_TypeClassId ll_backend__live_vars__ll_backend__live_vars__type_class_id_stack_alloc_info_1 = {
  (MR_String) "ll_backend.live_vars",
  (MR_String) "stack_alloc_info",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__live_vars__ll_backend__live_vars__type_class_id_var_names_stack_alloc_info_1,
  ll_backend__live_vars__ll_backend__live_vars__type_class_id_method_ids_stack_alloc_info_1
};

#line 1136 "ll_backend.live_vars.c"
const MR_TypeClassDeclStruct ll_backend__live_vars__ll_backend__live_vars__type_class_decl_stack_alloc_info_1 = {
  &ll_backend__live_vars__ll_backend__live_vars__type_class_id_stack_alloc_info_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 1144 "ll_backend.live_vars.c"
static MR_bool MR_CALL 
ll_backend__live_vars____Unify____alloc_data_0_0_10001(
#line 1147 "ll_backend.live_vars.c"
  MR_Box ll_backend__live_vars__wrapper_arg_1,
#line 1149 "ll_backend.live_vars.c"
  MR_Box ll_backend__live_vars__wrapper_arg_2)
#line 1151 "ll_backend.live_vars.c"
{
#line 1153 "ll_backend.live_vars.c"
  {
#line 1155 "ll_backend.live_vars.c"
    MR_bool ll_backend__live_vars__succeeded;

#line 1158 "ll_backend.live_vars.c"
    {
#line 1160 "ll_backend.live_vars.c"
      ll_backend__live_vars__succeeded = ll_backend__live_vars____Unify____alloc_data_0_0(((MR_Word) ll_backend__live_vars__wrapper_arg_1), ((MR_Word) ll_backend__live_vars__wrapper_arg_2));
    }
#line 1163 "ll_backend.live_vars.c"
    return ll_backend__live_vars__succeeded;
#line 1165 "ll_backend.live_vars.c"
  }
#line 1167 "ll_backend.live_vars.c"
}

#line 1170 "ll_backend.live_vars.c"
static void MR_CALL 
ll_backend__live_vars____Compare____alloc_data_0_0_10001(
#line 1173 "ll_backend.live_vars.c"
  MR_Box * ll_backend__live_vars__wrapper_arg_1,
#line 1175 "ll_backend.live_vars.c"
  MR_Box ll_backend__live_vars__wrapper_arg_2,
#line 1177 "ll_backend.live_vars.c"
  MR_Box ll_backend__live_vars__wrapper_arg_3)
#line 1179 "ll_backend.live_vars.c"
{
#line 1181 "ll_backend.live_vars.c"
  {
#line 1183 "ll_backend.live_vars.c"
    MR_Word ll_backend__live_vars__conv0_HeadVar__1_1;

#line 1186 "ll_backend.live_vars.c"
    {
#line 1188 "ll_backend.live_vars.c"
      ll_backend__live_vars____Compare____alloc_data_0_0(&ll_backend__live_vars__conv0_HeadVar__1_1, ((MR_Word) ll_backend__live_vars__wrapper_arg_2), ((MR_Word) ll_backend__live_vars__wrapper_arg_3));
    }
#line 1191 "ll_backend.live_vars.c"
    *ll_backend__live_vars__wrapper_arg_1 = ((MR_Box) (ll_backend__live_vars__conv0_HeadVar__1_1));
#line 1193 "ll_backend.live_vars.c"
  }
#line 1195 "ll_backend.live_vars.c"
}

#line 1198 "ll_backend.live_vars.c"
static MR_bool MR_CALL 
ll_backend__live_vars____Unify____parallel_stackvars_0_0_10001(
#line 1201 "ll_backend.live_vars.c"
  MR_Box ll_backend__live_vars__wrapper_arg_1,
#line 1203 "ll_backend.live_vars.c"
  MR_Box ll_backend__live_vars__wrapper_arg_2)
#line 1205 "ll_backend.live_vars.c"
{
#line 1207 "ll_backend.live_vars.c"
  {
#line 1209 "ll_backend.live_vars.c"
    MR_bool ll_backend__live_vars__succeeded;

#line 1212 "ll_backend.live_vars.c"
    {
#line 1214 "ll_backend.live_vars.c"
      ll_backend__live_vars__succeeded = ll_backend__live_vars____Unify____parallel_stackvars_0_0(((MR_Word) ll_backend__live_vars__wrapper_arg_1), ((MR_Word) ll_backend__live_vars__wrapper_arg_2));
    }
#line 1217 "ll_backend.live_vars.c"
    return ll_backend__live_vars__succeeded;
#line 1219 "ll_backend.live_vars.c"
  }
#line 1221 "ll_backend.live_vars.c"
}

#line 1224 "ll_backend.live_vars.c"
static void MR_CALL 
ll_backend__live_vars____Compare____parallel_stackvars_0_0_10001(
#line 1227 "ll_backend.live_vars.c"
  MR_Box * ll_backend__live_vars__wrapper_arg_1,
#line 1229 "ll_backend.live_vars.c"
  MR_Box ll_backend__live_vars__wrapper_arg_2,
#line 1231 "ll_backend.live_vars.c"
  MR_Box ll_backend__live_vars__wrapper_arg_3)
#line 1233 "ll_backend.live_vars.c"
{
#line 1235 "ll_backend.live_vars.c"
  {
#line 1237 "ll_backend.live_vars.c"
    MR_Word ll_backend__live_vars__conv0_HeadVar__1_1;

#line 1240 "ll_backend.live_vars.c"
    {
#line 1242 "ll_backend.live_vars.c"
      ll_backend__live_vars____Compare____parallel_stackvars_0_0(&ll_backend__live_vars__conv0_HeadVar__1_1, ((MR_Word) ll_backend__live_vars__wrapper_arg_2), ((MR_Word) ll_backend__live_vars__wrapper_arg_3));
    }
#line 1245 "ll_backend.live_vars.c"
    *ll_backend__live_vars__wrapper_arg_1 = ((MR_Box) (ll_backend__live_vars__conv0_HeadVar__1_1));
#line 1247 "ll_backend.live_vars.c"
  }
#line 1249 "ll_backend.live_vars.c"
}

#line 812 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars____Compare____parallel_stackvars_0_0(
#line 812 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__1_1,
#line 812 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__2_2,
#line 812 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__3_3)
#line 812 "live_vars.m"
{
#line 812 "live_vars.m"
  {
#line 812 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;
#line 812 "live_vars.m"
    MR_Integer ll_backend__live_vars__CastX_73 = (MR_Integer) ll_backend__live_vars__HeadVar__2_2;
#line 812 "live_vars.m"
    MR_Integer ll_backend__live_vars__CastY_74 = (MR_Integer) ll_backend__live_vars__HeadVar__3_3;

#line 812 "live_vars.m"
    ll_backend__live_vars__succeeded = (ll_backend__live_vars__CastX_73 == ll_backend__live_vars__CastY_74);
#line 812 "live_vars.m"
    if (ll_backend__live_vars__succeeded)
#line 1276 "ll_backend.live_vars.c"
      *ll_backend__live_vars__HeadVar__1_1 = (MR_Integer) 0;
#line 812 "live_vars.m"
    else
#line 812 "live_vars.m"
      if ((ll_backend__live_vars__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 812 "live_vars.m"
        if ((ll_backend__live_vars__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 812 "live_vars.m"
          *ll_backend__live_vars__HeadVar__1_1 = (MR_Integer) 0;
#line 812 "live_vars.m"
        else
#line 812 "live_vars.m"
          if (((MR_tag((MR_Word) ll_backend__live_vars__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 1290 "ll_backend.live_vars.c"
            *ll_backend__live_vars__HeadVar__1_1 = (MR_Integer) 1;
#line 812 "live_vars.m"
          else
#line 812 "live_vars.m"
            if (((MR_tag((MR_Word) ll_backend__live_vars__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1296 "ll_backend.live_vars.c"
              *ll_backend__live_vars__HeadVar__1_1 = (MR_Integer) 1;
#line 812 "live_vars.m"
            else
#line 1300 "ll_backend.live_vars.c"
              *ll_backend__live_vars__HeadVar__1_1 = (MR_Integer) 1;
#line 812 "live_vars.m"
      else
#line 812 "live_vars.m"
        if (((MR_tag((MR_Word) ll_backend__live_vars__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
#line 812 "live_vars.m"
          {
#line 812 "live_vars.m"
            MR_Word ll_backend__live_vars__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 2)));
#line 812 "live_vars.m"
            MR_Word ll_backend__live_vars__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 1)));
#line 812 "live_vars.m"
            MR_Word ll_backend__live_vars__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 0)));

#line 812 "live_vars.m"
            if ((ll_backend__live_vars__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1317 "ll_backend.live_vars.c"
              *ll_backend__live_vars__HeadVar__1_1 = (MR_Integer) 2;
#line 812 "live_vars.m"
            else
#line 812 "live_vars.m"
              if (((MR_tag((MR_Word) ll_backend__live_vars__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 812 "live_vars.m"
                {
#line 812 "live_vars.m"
                  MR_Word ll_backend__live_vars__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__3_3, (MR_Integer) 0)));
#line 812 "live_vars.m"
                  MR_Word ll_backend__live_vars__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__3_3, (MR_Integer) 1)));
#line 812 "live_vars.m"
                  MR_Word ll_backend__live_vars__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__3_3, (MR_Integer) 2)));
#line 812 "live_vars.m"
                  MR_Word ll_backend__live_vars__V_71_71;

#line 812 "live_vars.m"
                  {
#line 812 "live_vars.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__live_vars_scalar_common_1[3], &ll_backend__live_vars__V_71_71, ((MR_Box) (ll_backend__live_vars__V_85_85)), ((MR_Box) (ll_backend__live_vars__V_68_68)));
                  }
#line 1339 "ll_backend.live_vars.c"
                  ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_71_71 == (MR_Integer) 0);
#line 812 "live_vars.m"
                  ll_backend__live_vars__succeeded = !(ll_backend__live_vars__succeeded);
#line 812 "live_vars.m"
                  if (ll_backend__live_vars__succeeded)
#line 812 "live_vars.m"
                    *ll_backend__live_vars__HeadVar__1_1 = ll_backend__live_vars__V_71_71;
#line 812 "live_vars.m"
                  else
#line 812 "live_vars.m"
                    {
#line 812 "live_vars.m"
                      MR_Word ll_backend__live_vars__V_72_72;

#line 812 "live_vars.m"
                      {
#line 812 "live_vars.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__live_vars_scalar_common_1[2], &ll_backend__live_vars__V_72_72, ((MR_Box) (ll_backend__live_vars__V_84_84)), ((MR_Box) (ll_backend__live_vars__V_69_69)));
                      }
#line 1359 "ll_backend.live_vars.c"
                      ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_72_72 == (MR_Integer) 0);
#line 812 "live_vars.m"
                      ll_backend__live_vars__succeeded = !(ll_backend__live_vars__succeeded);
#line 812 "live_vars.m"
                      if (ll_backend__live_vars__succeeded)
#line 812 "live_vars.m"
                        *ll_backend__live_vars__HeadVar__1_1 = ll_backend__live_vars__V_72_72;
#line 812 "live_vars.m"
                      else
#line 812 "live_vars.m"
                        {
#line 812 "live_vars.m"
                          {
#line 812 "live_vars.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__live_vars_scalar_common_1[2], ll_backend__live_vars__HeadVar__1_1, ((MR_Box) (ll_backend__live_vars__V_83_83)), ((MR_Box) (ll_backend__live_vars__V_70_70)));
#line 812 "live_vars.m"
                            return;
                          }
#line 812 "live_vars.m"
                        }
#line 812 "live_vars.m"
                    }
#line 812 "live_vars.m"
                }
#line 812 "live_vars.m"
              else
#line 812 "live_vars.m"
                if (((MR_tag((MR_Word) ll_backend__live_vars__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1388 "ll_backend.live_vars.c"
                  *ll_backend__live_vars__HeadVar__1_1 = (MR_Integer) 2;
#line 812 "live_vars.m"
                else
#line 1392 "ll_backend.live_vars.c"
                  *ll_backend__live_vars__HeadVar__1_1 = (MR_Integer) 2;
#line 812 "live_vars.m"
          }
#line 812 "live_vars.m"
        else
#line 812 "live_vars.m"
          if (((MR_tag((MR_Word) ll_backend__live_vars__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 812 "live_vars.m"
            {
#line 812 "live_vars.m"
              MR_Word ll_backend__live_vars__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 1)));
#line 812 "live_vars.m"
              MR_Word ll_backend__live_vars__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 0)));

#line 812 "live_vars.m"
              if ((ll_backend__live_vars__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1409 "ll_backend.live_vars.c"
                *ll_backend__live_vars__HeadVar__1_1 = (MR_Integer) 2;
#line 812 "live_vars.m"
              else
#line 812 "live_vars.m"
                if (((MR_tag((MR_Word) ll_backend__live_vars__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 1415 "ll_backend.live_vars.c"
                  *ll_backend__live_vars__HeadVar__1_1 = (MR_Integer) 1;
#line 812 "live_vars.m"
                else
#line 812 "live_vars.m"
                  if (((MR_tag((MR_Word) ll_backend__live_vars__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 812 "live_vars.m"
                    {
#line 812 "live_vars.m"
                      MR_Word ll_backend__live_vars__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__HeadVar__3_3, (MR_Integer) 0)));
#line 812 "live_vars.m"
                      MR_Word ll_backend__live_vars__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__HeadVar__3_3, (MR_Integer) 1)));
#line 812 "live_vars.m"
                      MR_Word ll_backend__live_vars__V_45_45;

#line 812 "live_vars.m"
                      {
#line 812 "live_vars.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__live_vars_scalar_common_1[2], &ll_backend__live_vars__V_45_45, ((MR_Box) (ll_backend__live_vars__V_87_87)), ((MR_Box) (ll_backend__live_vars__V_43_43)));
                      }
#line 1435 "ll_backend.live_vars.c"
                      ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_45_45 == (MR_Integer) 0);
#line 812 "live_vars.m"
                      ll_backend__live_vars__succeeded = !(ll_backend__live_vars__succeeded);
#line 812 "live_vars.m"
                      if (ll_backend__live_vars__succeeded)
#line 812 "live_vars.m"
                        *ll_backend__live_vars__HeadVar__1_1 = ll_backend__live_vars__V_45_45;
#line 812 "live_vars.m"
                      else
#line 812 "live_vars.m"
                        {
#line 812 "live_vars.m"
                          {
#line 812 "live_vars.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__live_vars_scalar_common_1[2], ll_backend__live_vars__HeadVar__1_1, ((MR_Box) (ll_backend__live_vars__V_86_86)), ((MR_Box) (ll_backend__live_vars__V_44_44)));
#line 812 "live_vars.m"
                            return;
                          }
#line 812 "live_vars.m"
                        }
#line 812 "live_vars.m"
                    }
#line 812 "live_vars.m"
                  else
#line 1460 "ll_backend.live_vars.c"
                    *ll_backend__live_vars__HeadVar__1_1 = (MR_Integer) 2;
#line 812 "live_vars.m"
            }
#line 812 "live_vars.m"
          else
#line 812 "live_vars.m"
            {
#line 812 "live_vars.m"
              MR_Word ll_backend__live_vars__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 2)));
#line 812 "live_vars.m"
              MR_Word ll_backend__live_vars__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 1)));
#line 812 "live_vars.m"
              MR_Word ll_backend__live_vars__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 0)));

#line 812 "live_vars.m"
              if ((ll_backend__live_vars__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1477 "ll_backend.live_vars.c"
                *ll_backend__live_vars__HeadVar__1_1 = (MR_Integer) 2;
#line 812 "live_vars.m"
              else
#line 812 "live_vars.m"
                if (((MR_tag((MR_Word) ll_backend__live_vars__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 1483 "ll_backend.live_vars.c"
                  *ll_backend__live_vars__HeadVar__1_1 = (MR_Integer) 1;
#line 812 "live_vars.m"
                else
#line 812 "live_vars.m"
                  if (((MR_tag((MR_Word) ll_backend__live_vars__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1489 "ll_backend.live_vars.c"
                    *ll_backend__live_vars__HeadVar__1_1 = (MR_Integer) 1;
#line 812 "live_vars.m"
                  else
#line 812 "live_vars.m"
                    {
#line 812 "live_vars.m"
                      MR_Word ll_backend__live_vars__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__3_3, (MR_Integer) 0)));
#line 812 "live_vars.m"
                      MR_Word ll_backend__live_vars__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__3_3, (MR_Integer) 1)));
#line 812 "live_vars.m"
                      MR_Word ll_backend__live_vars__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__3_3, (MR_Integer) 2)));
#line 812 "live_vars.m"
                      MR_Word ll_backend__live_vars__V_21_21;

#line 812 "live_vars.m"
                      {
#line 812 "live_vars.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__live_vars_scalar_common_1[2], &ll_backend__live_vars__V_21_21, ((MR_Box) (ll_backend__live_vars__V_90_90)), ((MR_Box) (ll_backend__live_vars__V_18_18)));
                      }
#line 1509 "ll_backend.live_vars.c"
                      ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_21_21 == (MR_Integer) 0);
#line 812 "live_vars.m"
                      ll_backend__live_vars__succeeded = !(ll_backend__live_vars__succeeded);
#line 812 "live_vars.m"
                      if (ll_backend__live_vars__succeeded)
#line 812 "live_vars.m"
                        *ll_backend__live_vars__HeadVar__1_1 = ll_backend__live_vars__V_21_21;
#line 812 "live_vars.m"
                      else
#line 812 "live_vars.m"
                        {
#line 812 "live_vars.m"
                          MR_Word ll_backend__live_vars__V_22_22;

#line 812 "live_vars.m"
                          {
#line 812 "live_vars.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__live_vars_scalar_common_1[3], &ll_backend__live_vars__V_22_22, ((MR_Box) (ll_backend__live_vars__V_89_89)), ((MR_Box) (ll_backend__live_vars__V_19_19)));
                          }
#line 1529 "ll_backend.live_vars.c"
                          ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_22_22 == (MR_Integer) 0);
#line 812 "live_vars.m"
                          ll_backend__live_vars__succeeded = !(ll_backend__live_vars__succeeded);
#line 812 "live_vars.m"
                          if (ll_backend__live_vars__succeeded)
#line 812 "live_vars.m"
                            *ll_backend__live_vars__HeadVar__1_1 = ll_backend__live_vars__V_22_22;
#line 812 "live_vars.m"
                          else
#line 812 "live_vars.m"
                            {
#line 812 "live_vars.m"
                              {
#line 812 "live_vars.m"
                                mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__live_vars_scalar_common_1[2], ll_backend__live_vars__HeadVar__1_1, ((MR_Box) (ll_backend__live_vars__V_88_88)), ((MR_Box) (ll_backend__live_vars__V_20_20)));
#line 812 "live_vars.m"
                                return;
                              }
#line 812 "live_vars.m"
                            }
#line 812 "live_vars.m"
                        }
#line 812 "live_vars.m"
                    }
#line 812 "live_vars.m"
            }
#line 812 "live_vars.m"
  }
#line 812 "live_vars.m"
}

#line 812 "live_vars.m"
static MR_bool MR_CALL 
ll_backend__live_vars____Unify____parallel_stackvars_0_0(
#line 812 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 812 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__2_2)
#line 812 "live_vars.m"
{
#line 812 "live_vars.m"
  {
#line 812 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;
#line 812 "live_vars.m"
    MR_Integer ll_backend__live_vars__CastX_21 = (MR_Integer) ll_backend__live_vars__HeadVar__1_1;
#line 812 "live_vars.m"
    MR_Integer ll_backend__live_vars__CastY_22 = (MR_Integer) ll_backend__live_vars__HeadVar__2_2;

#line 812 "live_vars.m"
    ll_backend__live_vars__succeeded = (ll_backend__live_vars__CastX_21 == ll_backend__live_vars__CastY_22);
#line 812 "live_vars.m"
    if (ll_backend__live_vars__succeeded)
#line 812 "live_vars.m"
      ll_backend__live_vars__succeeded = MR_TRUE;
#line 812 "live_vars.m"
    else
#line 812 "live_vars.m"
      if ((ll_backend__live_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 812 "live_vars.m"
        {
#line 812 "live_vars.m"
          MR_Integer ll_backend__live_vars__CastX_3 = (MR_Integer) ll_backend__live_vars__HeadVar__1_1;
#line 812 "live_vars.m"
          MR_Integer ll_backend__live_vars__CastY_4 = (MR_Integer) ll_backend__live_vars__HeadVar__2_2;

#line 812 "live_vars.m"
          ll_backend__live_vars__succeeded = (ll_backend__live_vars__CastY_4 == ll_backend__live_vars__CastX_3);
#line 812 "live_vars.m"
        }
#line 812 "live_vars.m"
      else
#line 812 "live_vars.m"
        if (((MR_tag((MR_Word) ll_backend__live_vars__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
#line 812 "live_vars.m"
          {
#line 812 "live_vars.m"
            MR_Word ll_backend__live_vars__TypeInfo_23_23;
#line 812 "live_vars.m"
            MR_Word ll_backend__live_vars__TypeInfo_24_24;
#line 812 "live_vars.m"
            MR_Word ll_backend__live_vars__TypeInfo_25_25;
#line 812 "live_vars.m"
            MR_Word ll_backend__live_vars__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 812 "live_vars.m"
            MR_Word ll_backend__live_vars__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 812 "live_vars.m"
            MR_Word ll_backend__live_vars__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 2)));
#line 812 "live_vars.m"
            MR_Word ll_backend__live_vars__V_18_18;
#line 812 "live_vars.m"
            MR_Word ll_backend__live_vars__V_19_19;
#line 812 "live_vars.m"
            MR_Word ll_backend__live_vars__V_20_20;

#line 812 "live_vars.m"
            ll_backend__live_vars__succeeded = ((MR_tag((MR_Word) ll_backend__live_vars__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 812 "live_vars.m"
            if (ll_backend__live_vars__succeeded)
#line 812 "live_vars.m"
              {
#line 812 "live_vars.m"
                ll_backend__live_vars__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 0)));
#line 812 "live_vars.m"
                ll_backend__live_vars__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 1)));
#line 812 "live_vars.m"
                ll_backend__live_vars__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 2)));
#line 1637 "ll_backend.live_vars.c"
                ll_backend__live_vars__TypeInfo_23_23 = (MR_Word) &ll_backend__live_vars_scalar_common_1[3];
#line 1639 "ll_backend.live_vars.c"
                {
#line 1641 "ll_backend.live_vars.c"
                  ll_backend__live_vars__succeeded = mercury__builtin__unify_2_p_0(ll_backend__live_vars__TypeInfo_23_23, ((MR_Box) (ll_backend__live_vars__V_15_15)), ((MR_Box) (ll_backend__live_vars__V_18_18)));
                }
#line 812 "live_vars.m"
                if (ll_backend__live_vars__succeeded)
#line 812 "live_vars.m"
                  {
#line 1648 "ll_backend.live_vars.c"
                    ll_backend__live_vars__TypeInfo_24_24 = (MR_Word) &ll_backend__live_vars_scalar_common_1[2];
#line 1650 "ll_backend.live_vars.c"
                    {
#line 1652 "ll_backend.live_vars.c"
                      ll_backend__live_vars__succeeded = mercury__builtin__unify_2_p_0(ll_backend__live_vars__TypeInfo_24_24, ((MR_Box) (ll_backend__live_vars__V_16_16)), ((MR_Box) (ll_backend__live_vars__V_19_19)));
                    }
#line 812 "live_vars.m"
                    if (ll_backend__live_vars__succeeded)
#line 812 "live_vars.m"
                      {
#line 1659 "ll_backend.live_vars.c"
                        ll_backend__live_vars__TypeInfo_25_25 = (MR_Word) &ll_backend__live_vars_scalar_common_1[2];
#line 1661 "ll_backend.live_vars.c"
                        {
#line 1663 "ll_backend.live_vars.c"
                          return ll_backend__live_vars__succeeded = mercury__builtin__unify_2_p_0(ll_backend__live_vars__TypeInfo_25_25, ((MR_Box) (ll_backend__live_vars__V_17_17)), ((MR_Box) (ll_backend__live_vars__V_20_20)));
                        }
#line 812 "live_vars.m"
                      }
#line 812 "live_vars.m"
                  }
#line 812 "live_vars.m"
              }
#line 812 "live_vars.m"
          }
#line 812 "live_vars.m"
        else
#line 812 "live_vars.m"
          if (((MR_tag((MR_Word) ll_backend__live_vars__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 812 "live_vars.m"
            {
#line 812 "live_vars.m"
              MR_Word ll_backend__live_vars__TypeInfo_26_26;
#line 812 "live_vars.m"
              MR_Word ll_backend__live_vars__TypeInfo_27_27;
#line 812 "live_vars.m"
              MR_Word ll_backend__live_vars__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 812 "live_vars.m"
              MR_Word ll_backend__live_vars__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 812 "live_vars.m"
              MR_Word ll_backend__live_vars__V_13_13;
#line 812 "live_vars.m"
              MR_Word ll_backend__live_vars__V_14_14;

#line 812 "live_vars.m"
              ll_backend__live_vars__succeeded = ((MR_tag((MR_Word) ll_backend__live_vars__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 812 "live_vars.m"
              if (ll_backend__live_vars__succeeded)
#line 812 "live_vars.m"
                {
#line 812 "live_vars.m"
                  ll_backend__live_vars__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 0)));
#line 812 "live_vars.m"
                  ll_backend__live_vars__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 1)));
#line 1703 "ll_backend.live_vars.c"
                  ll_backend__live_vars__TypeInfo_26_26 = (MR_Word) &ll_backend__live_vars_scalar_common_1[2];
#line 1705 "ll_backend.live_vars.c"
                  {
#line 1707 "ll_backend.live_vars.c"
                    ll_backend__live_vars__succeeded = mercury__builtin__unify_2_p_0(ll_backend__live_vars__TypeInfo_26_26, ((MR_Box) (ll_backend__live_vars__V_11_11)), ((MR_Box) (ll_backend__live_vars__V_13_13)));
                  }
#line 812 "live_vars.m"
                  if (ll_backend__live_vars__succeeded)
#line 812 "live_vars.m"
                    {
#line 1714 "ll_backend.live_vars.c"
                      ll_backend__live_vars__TypeInfo_27_27 = (MR_Word) &ll_backend__live_vars_scalar_common_1[2];
#line 1716 "ll_backend.live_vars.c"
                      {
#line 1718 "ll_backend.live_vars.c"
                        return ll_backend__live_vars__succeeded = mercury__builtin__unify_2_p_0(ll_backend__live_vars__TypeInfo_27_27, ((MR_Box) (ll_backend__live_vars__V_12_12)), ((MR_Box) (ll_backend__live_vars__V_14_14)));
                      }
#line 812 "live_vars.m"
                    }
#line 812 "live_vars.m"
                }
#line 812 "live_vars.m"
            }
#line 812 "live_vars.m"
          else
#line 812 "live_vars.m"
            {
#line 812 "live_vars.m"
              MR_Word ll_backend__live_vars__TypeInfo_28_28;
#line 812 "live_vars.m"
              MR_Word ll_backend__live_vars__TypeInfo_29_29;
#line 812 "live_vars.m"
              MR_Word ll_backend__live_vars__TypeInfo_30_30;
#line 812 "live_vars.m"
              MR_Word ll_backend__live_vars__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 812 "live_vars.m"
              MR_Word ll_backend__live_vars__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 812 "live_vars.m"
              MR_Word ll_backend__live_vars__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 2)));
#line 812 "live_vars.m"
              MR_Word ll_backend__live_vars__V_8_8;
#line 812 "live_vars.m"
              MR_Word ll_backend__live_vars__V_9_9;
#line 812 "live_vars.m"
              MR_Word ll_backend__live_vars__V_10_10;

#line 812 "live_vars.m"
              ll_backend__live_vars__succeeded = ((MR_tag((MR_Word) ll_backend__live_vars__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 812 "live_vars.m"
              if (ll_backend__live_vars__succeeded)
#line 812 "live_vars.m"
                {
#line 812 "live_vars.m"
                  ll_backend__live_vars__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 0)));
#line 812 "live_vars.m"
                  ll_backend__live_vars__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 1)));
#line 812 "live_vars.m"
                  ll_backend__live_vars__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 2)));
#line 1762 "ll_backend.live_vars.c"
                  ll_backend__live_vars__TypeInfo_28_28 = (MR_Word) &ll_backend__live_vars_scalar_common_1[2];
#line 1764 "ll_backend.live_vars.c"
                  {
#line 1766 "ll_backend.live_vars.c"
                    ll_backend__live_vars__succeeded = mercury__builtin__unify_2_p_0(ll_backend__live_vars__TypeInfo_28_28, ((MR_Box) (ll_backend__live_vars__V_5_5)), ((MR_Box) (ll_backend__live_vars__V_8_8)));
                  }
#line 812 "live_vars.m"
                  if (ll_backend__live_vars__succeeded)
#line 812 "live_vars.m"
                    {
#line 1773 "ll_backend.live_vars.c"
                      ll_backend__live_vars__TypeInfo_29_29 = (MR_Word) &ll_backend__live_vars_scalar_common_1[3];
#line 1775 "ll_backend.live_vars.c"
                      {
#line 1777 "ll_backend.live_vars.c"
                        ll_backend__live_vars__succeeded = mercury__builtin__unify_2_p_0(ll_backend__live_vars__TypeInfo_29_29, ((MR_Box) (ll_backend__live_vars__V_6_6)), ((MR_Box) (ll_backend__live_vars__V_9_9)));
                      }
#line 812 "live_vars.m"
                      if (ll_backend__live_vars__succeeded)
#line 812 "live_vars.m"
                        {
#line 1784 "ll_backend.live_vars.c"
                          ll_backend__live_vars__TypeInfo_30_30 = (MR_Word) &ll_backend__live_vars_scalar_common_1[2];
#line 1786 "ll_backend.live_vars.c"
                          {
#line 1788 "ll_backend.live_vars.c"
                            return ll_backend__live_vars__succeeded = mercury__builtin__unify_2_p_0(ll_backend__live_vars__TypeInfo_30_30, ((MR_Box) (ll_backend__live_vars__V_7_7)), ((MR_Box) (ll_backend__live_vars__V_10_10)));
                          }
#line 812 "live_vars.m"
                        }
#line 812 "live_vars.m"
                    }
#line 812 "live_vars.m"
                }
#line 812 "live_vars.m"
            }
#line 812 "live_vars.m"
    return ll_backend__live_vars__succeeded;
#line 812 "live_vars.m"
  }
#line 812 "live_vars.m"
}

#line 44 "live_vars.m"
void MR_CALL 
ll_backend__live_vars____Compare____alloc_data_0_0(
#line 44 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__1_1,
#line 44 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__2_2,
#line 44 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__3_3)
#line 44 "live_vars.m"
{
#line 44 "live_vars.m"
  {
#line 44 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;
#line 44 "live_vars.m"
    MR_Integer ll_backend__live_vars__CastX_21 = (MR_Integer) ll_backend__live_vars__HeadVar__2_2;
#line 44 "live_vars.m"
    MR_Integer ll_backend__live_vars__CastY_22 = (MR_Integer) ll_backend__live_vars__HeadVar__3_3;

#line 44 "live_vars.m"
    ll_backend__live_vars__succeeded = (ll_backend__live_vars__CastX_21 == ll_backend__live_vars__CastY_22);
#line 44 "live_vars.m"
    if (ll_backend__live_vars__succeeded)
#line 1830 "ll_backend.live_vars.c"
      *ll_backend__live_vars__HeadVar__1_1 = (MR_Integer) 0;
#line 44 "live_vars.m"
    else
#line 44 "live_vars.m"
      {
#line 44 "live_vars.m"
        MR_Word ll_backend__live_vars__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 0)));
#line 44 "live_vars.m"
        MR_Word ll_backend__live_vars__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 1)));
#line 44 "live_vars.m"
        MR_Word ll_backend__live_vars__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 2)));
#line 44 "live_vars.m"
        MR_Word ll_backend__live_vars__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 3)));
#line 44 "live_vars.m"
        MR_Word ll_backend__live_vars__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 4)));
#line 44 "live_vars.m"
        MR_ArrayPtr ll_backend__live_vars__V_9_9 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 5)));
#line 44 "live_vars.m"
        MR_Word ll_backend__live_vars__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__3_3, (MR_Integer) 0)));
#line 44 "live_vars.m"
        MR_Word ll_backend__live_vars__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__3_3, (MR_Integer) 1)));
#line 44 "live_vars.m"
        MR_Word ll_backend__live_vars__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__3_3, (MR_Integer) 2)));
#line 44 "live_vars.m"
        MR_Word ll_backend__live_vars__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__3_3, (MR_Integer) 3)));
#line 44 "live_vars.m"
        MR_Word ll_backend__live_vars__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__3_3, (MR_Integer) 4)));
#line 44 "live_vars.m"
        MR_ArrayPtr ll_backend__live_vars__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__3_3, (MR_Integer) 5)));
#line 44 "live_vars.m"
        MR_Word ll_backend__live_vars__V_16_16;

#line 44 "live_vars.m"
        {
#line 44 "live_vars.m"
          hlds__hlds_module____Compare____module_info_0_0(&ll_backend__live_vars__V_16_16, ll_backend__live_vars__V_4_4, ll_backend__live_vars__V_10_10);
        }
#line 1868 "ll_backend.live_vars.c"
        ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_16_16 == (MR_Integer) 0);
#line 44 "live_vars.m"
        ll_backend__live_vars__succeeded = !(ll_backend__live_vars__succeeded);
#line 44 "live_vars.m"
        if (ll_backend__live_vars__succeeded)
#line 44 "live_vars.m"
          *ll_backend__live_vars__HeadVar__1_1 = ll_backend__live_vars__V_16_16;
#line 44 "live_vars.m"
        else
#line 44 "live_vars.m"
          {
#line 44 "live_vars.m"
            MR_Word ll_backend__live_vars__V_17_17;

#line 44 "live_vars.m"
            {
#line 44 "live_vars.m"
              hlds__hlds_pred____Compare____proc_info_0_0(&ll_backend__live_vars__V_17_17, ll_backend__live_vars__V_5_5, ll_backend__live_vars__V_11_11);
            }
#line 1888 "ll_backend.live_vars.c"
            ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_17_17 == (MR_Integer) 0);
#line 44 "live_vars.m"
            ll_backend__live_vars__succeeded = !(ll_backend__live_vars__succeeded);
#line 44 "live_vars.m"
            if (ll_backend__live_vars__succeeded)
#line 44 "live_vars.m"
              *ll_backend__live_vars__HeadVar__1_1 = ll_backend__live_vars__V_17_17;
#line 44 "live_vars.m"
            else
#line 44 "live_vars.m"
              {
#line 44 "live_vars.m"
                MR_Word ll_backend__live_vars__V_18_18;

#line 44 "live_vars.m"
                {
#line 44 "live_vars.m"
                  hlds__hlds_pred____Compare____pred_proc_id_0_0(&ll_backend__live_vars__V_18_18, ll_backend__live_vars__V_6_6, ll_backend__live_vars__V_12_12);
                }
#line 1908 "ll_backend.live_vars.c"
                ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_18_18 == (MR_Integer) 0);
#line 44 "live_vars.m"
                ll_backend__live_vars__succeeded = !(ll_backend__live_vars__succeeded);
#line 44 "live_vars.m"
                if (ll_backend__live_vars__succeeded)
#line 44 "live_vars.m"
                  *ll_backend__live_vars__HeadVar__1_1 = ll_backend__live_vars__V_18_18;
#line 44 "live_vars.m"
                else
#line 44 "live_vars.m"
                  {
#line 44 "live_vars.m"
                    MR_Word ll_backend__live_vars__V_19_19;
#line 44 "live_vars.m"
                    MR_Integer ll_backend__live_vars__V_29_29 = (MR_Integer) ll_backend__live_vars__V_7_7;
#line 44 "live_vars.m"
                    MR_Integer ll_backend__live_vars__V_30_30 = (MR_Integer) ll_backend__live_vars__V_13_13;

#line 44 "live_vars.m"
                    {
#line 44 "live_vars.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__live_vars__V_19_19, ll_backend__live_vars__V_29_29, ll_backend__live_vars__V_30_30);
                    }
#line 1932 "ll_backend.live_vars.c"
                    ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_19_19 == (MR_Integer) 0);
#line 44 "live_vars.m"
                    ll_backend__live_vars__succeeded = !(ll_backend__live_vars__succeeded);
#line 44 "live_vars.m"
                    if (ll_backend__live_vars__succeeded)
#line 44 "live_vars.m"
                      *ll_backend__live_vars__HeadVar__1_1 = ll_backend__live_vars__V_19_19;
#line 44 "live_vars.m"
                    else
#line 44 "live_vars.m"
                      {
#line 44 "live_vars.m"
                        MR_Word ll_backend__live_vars__V_20_20;
#line 44 "live_vars.m"
                        MR_Integer ll_backend__live_vars__V_31_31 = (MR_Integer) ll_backend__live_vars__V_8_8;
#line 44 "live_vars.m"
                        MR_Integer ll_backend__live_vars__V_32_32 = (MR_Integer) ll_backend__live_vars__V_14_14;

#line 44 "live_vars.m"
                        {
#line 44 "live_vars.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__live_vars__V_20_20, ll_backend__live_vars__V_31_31, ll_backend__live_vars__V_32_32);
                        }
#line 1956 "ll_backend.live_vars.c"
                        ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_20_20 == (MR_Integer) 0);
#line 44 "live_vars.m"
                        ll_backend__live_vars__succeeded = !(ll_backend__live_vars__succeeded);
#line 44 "live_vars.m"
                        if (ll_backend__live_vars__succeeded)
#line 44 "live_vars.m"
                          *ll_backend__live_vars__HeadVar__1_1 = ll_backend__live_vars__V_20_20;
#line 44 "live_vars.m"
                        else
#line 44 "live_vars.m"
                          {
#line 44 "live_vars.m"
                            {
#line 44 "live_vars.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__live_vars_scalar_common_1[1], ll_backend__live_vars__HeadVar__1_1, ((MR_Box) (ll_backend__live_vars__V_9_9)), ((MR_Box) (ll_backend__live_vars__V_15_15)));
#line 44 "live_vars.m"
                              return;
                            }
#line 44 "live_vars.m"
                          }
#line 44 "live_vars.m"
                      }
#line 44 "live_vars.m"
                  }
#line 44 "live_vars.m"
              }
#line 44 "live_vars.m"
          }
#line 44 "live_vars.m"
      }
#line 44 "live_vars.m"
  }
#line 44 "live_vars.m"
}

#line 44 "live_vars.m"
MR_bool MR_CALL 
ll_backend__live_vars____Unify____alloc_data_0_0(
#line 44 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 44 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__2_2)
#line 44 "live_vars.m"
{
#line 44 "live_vars.m"
  {
#line 44 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;
#line 44 "live_vars.m"
    MR_Integer ll_backend__live_vars__CastX_15 = (MR_Integer) ll_backend__live_vars__HeadVar__1_1;
#line 44 "live_vars.m"
    MR_Integer ll_backend__live_vars__CastY_16 = (MR_Integer) ll_backend__live_vars__HeadVar__2_2;

#line 44 "live_vars.m"
    ll_backend__live_vars__succeeded = (ll_backend__live_vars__CastX_15 == ll_backend__live_vars__CastY_16);
#line 44 "live_vars.m"
    if (ll_backend__live_vars__succeeded)
#line 44 "live_vars.m"
      ll_backend__live_vars__succeeded = MR_TRUE;
#line 44 "live_vars.m"
    else
#line 44 "live_vars.m"
      {
#line 44 "live_vars.m"
        MR_Word ll_backend__live_vars__TypeCtorInfo_20_20;
#line 44 "live_vars.m"
        MR_Word ll_backend__live_vars__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 44 "live_vars.m"
        MR_Word ll_backend__live_vars__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 44 "live_vars.m"
        MR_Word ll_backend__live_vars__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 2)));
#line 44 "live_vars.m"
        MR_Word ll_backend__live_vars__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 3)));
#line 44 "live_vars.m"
        MR_Word ll_backend__live_vars__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 4)));
#line 44 "live_vars.m"
        MR_ArrayPtr ll_backend__live_vars__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 5)));
#line 44 "live_vars.m"
        MR_Word ll_backend__live_vars__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 0)));
#line 44 "live_vars.m"
        MR_Word ll_backend__live_vars__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 1)));
#line 44 "live_vars.m"
        MR_Word ll_backend__live_vars__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 2)));
#line 44 "live_vars.m"
        MR_Word ll_backend__live_vars__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 3)));
#line 44 "live_vars.m"
        MR_Word ll_backend__live_vars__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 4)));
#line 44 "live_vars.m"
        MR_ArrayPtr ll_backend__live_vars__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 5)));

#line 2047 "ll_backend.live_vars.c"
        {
#line 2049 "ll_backend.live_vars.c"
          ll_backend__live_vars__succeeded = hlds__hlds_module____Unify____module_info_0_0(ll_backend__live_vars__V_3_3, ll_backend__live_vars__V_9_9);
        }
#line 44 "live_vars.m"
        if (ll_backend__live_vars__succeeded)
#line 44 "live_vars.m"
          {
#line 2056 "ll_backend.live_vars.c"
            {
#line 2058 "ll_backend.live_vars.c"
              ll_backend__live_vars__succeeded = hlds__hlds_pred____Unify____proc_info_0_0(ll_backend__live_vars__V_4_4, ll_backend__live_vars__V_10_10);
            }
#line 44 "live_vars.m"
            if (ll_backend__live_vars__succeeded)
#line 44 "live_vars.m"
              {
#line 2065 "ll_backend.live_vars.c"
                {
#line 2067 "ll_backend.live_vars.c"
                  ll_backend__live_vars__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ll_backend__live_vars__V_5_5, ll_backend__live_vars__V_11_11);
                }
#line 44 "live_vars.m"
                if (ll_backend__live_vars__succeeded)
#line 44 "live_vars.m"
                  {
#line 2074 "ll_backend.live_vars.c"
                    ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_6_6 == ll_backend__live_vars__V_12_12);
#line 44 "live_vars.m"
                    if (ll_backend__live_vars__succeeded)
#line 44 "live_vars.m"
                      {
#line 2080 "ll_backend.live_vars.c"
                        ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_7_7 == ll_backend__live_vars__V_13_13);
#line 44 "live_vars.m"
                        if (ll_backend__live_vars__succeeded)
#line 44 "live_vars.m"
                          {
#line 2086 "ll_backend.live_vars.c"
                            ll_backend__live_vars__TypeCtorInfo_20_20 = (MR_Word) &check_hlds__type_util__check_hlds__type_util__type_ctor_info_is_dummy_type_0;
#line 2088 "ll_backend.live_vars.c"
                            {
#line 2090 "ll_backend.live_vars.c"
                              return ll_backend__live_vars__succeeded = mercury__array____Unify____array_1_0(ll_backend__live_vars__TypeCtorInfo_20_20, (MR_ArrayPtr) ll_backend__live_vars__V_8_8, (MR_ArrayPtr) ll_backend__live_vars__V_14_14);
                            }
#line 44 "live_vars.m"
                          }
#line 44 "live_vars.m"
                      }
#line 44 "live_vars.m"
                  }
#line 44 "live_vars.m"
              }
#line 44 "live_vars.m"
          }
#line 44 "live_vars.m"
      }
#line 44 "live_vars.m"
    return ll_backend__live_vars__succeeded;
#line 44 "live_vars.m"
  }
#line 44 "live_vars.m"
}

#line 1008 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__par_stack_vars_recursive_call_4_p_0(
#line 1008 "live_vars.m"
  MR_Word * ll_backend__live_vars__MaybeNeedLC_5,
#line 1008 "live_vars.m"
  MR_Word * ll_backend__live_vars__DelayDeathSet_6,
#line 1008 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_17,
#line 1008 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_18)
#line 1008 "live_vars.m"
{
#line 1016 "live_vars.m"
  {
#line 1016 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;

#line 1016 "live_vars.m"
    if (((MR_tag((MR_Word) ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_17)) == (MR_mktag((MR_Integer) 3))))
#line 1024 "live_vars.m"
      {
#line 1024 "live_vars.m"
        MR_Word ll_backend__live_vars__StackVarsList0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_17, (MR_Integer) 0)));
#line 1024 "live_vars.m"
        MR_Word ll_backend__live_vars__StackVars_14;
#line 1024 "live_vars.m"
        MR_Word ll_backend__live_vars__StackVarsList_15;
#line 1024 "live_vars.m"
        MR_Word ll_backend__live_vars__NonoverlapSets_16;
#line 1024 "live_vars.m"
        MR_Word ll_backend__live_vars__V_19_19;

#line 1023 "live_vars.m"
        *ll_backend__live_vars__DelayDeathSet_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_17, (MR_Integer) 1)));
#line 1023 "live_vars.m"
        ll_backend__live_vars__StackVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_17, (MR_Integer) 2)));
#line 1025 "live_vars.m"
        {
#line 1025 "live_vars.m"
          ll_backend__live_vars__StackVarsList_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1025 "live_vars.m"
          MR_hl_field(MR_mktag(1), ll_backend__live_vars__StackVarsList_15, 0) = ((MR_Box) (ll_backend__live_vars__StackVars_14));
#line 1025 "live_vars.m"
          MR_hl_field(MR_mktag(1), ll_backend__live_vars__StackVarsList_15, 1) = ((MR_Box) (ll_backend__live_vars__StackVarsList0_13));
#line 1025 "live_vars.m"
        }
#line 1026 "live_vars.m"
        {
#line 1026 "live_vars.m"
          parse_tree__set_of_var__cartesian_product_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__live_vars__StackVarsList_15, &ll_backend__live_vars__NonoverlapSets_16);
        }
#line 1027 "live_vars.m"
        ll_backend__live_vars__V_19_19 = (MR_Word) ll_backend__live_vars__NonoverlapSets_16;
#line 1027 "live_vars.m"
        {
#line 1027 "live_vars.m"
          MR_Word base;
#line 1027 "live_vars.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1027 "live_vars.m"
          *ll_backend__live_vars__MaybeNeedLC_5 = base;
#line 1027 "live_vars.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__live_vars__V_19_19));
#line 1027 "live_vars.m"
        }
#line 1028 "live_vars.m"
        *ll_backend__live_vars__STATE_VARIABLE_ParStackVars_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1024 "live_vars.m"
      }
#line 1016 "live_vars.m"
    else
#line 1016 "live_vars.m"
      if (((MR_tag((MR_Word) ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_17)) == (MR_mktag((MR_Integer) 2))))
#line 1020 "live_vars.m"
        {
#line 1021 "live_vars.m"
          {
#line 1021 "live_vars.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.live_vars", (MR_String) "predicate \140ll_backend.live_vars.par_stack_vars_recursive_call\'/4", (MR_String) "recursive call in loop control scope");
#line 1021 "live_vars.m"
            return;
          }
#line 1020 "live_vars.m"
        }
#line 1016 "live_vars.m"
      else
#line 1016 "live_vars.m"
        {
#line 1017 "live_vars.m"
          *ll_backend__live_vars__MaybeNeedLC_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1018 "live_vars.m"
          {
#line 1018 "live_vars.m"
            *ll_backend__live_vars__DelayDeathSet_6 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          }
#line 1018 "live_vars.m"
          *ll_backend__live_vars__STATE_VARIABLE_ParStackVars_18 = ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_17;
#line 1016 "live_vars.m"
        }
#line 1016 "live_vars.m"
  }
#line 1008 "live_vars.m"
}

#line 987 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__par_stack_vars_get_nonlocals_2_p_0(
#line 987 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 987 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__2_2)
#line 987 "live_vars.m"
{
#line 990 "live_vars.m"
  {
#line 990 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;

#line 990 "live_vars.m"
    if ((ll_backend__live_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 990 "live_vars.m"
      {
#line 990 "live_vars.m"
        {
#line 990 "live_vars.m"
          *ll_backend__live_vars__HeadVar__2_2 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
#line 990 "live_vars.m"
      }
#line 990 "live_vars.m"
    else
#line 990 "live_vars.m"
      if (((MR_tag((MR_Word) ll_backend__live_vars__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
#line 993 "live_vars.m"
        {
#line 994 "live_vars.m"
          {
#line 994 "live_vars.m"
            *ll_backend__live_vars__HeadVar__2_2 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          }
#line 993 "live_vars.m"
        }
#line 990 "live_vars.m"
      else
#line 990 "live_vars.m"
        if (((MR_tag((MR_Word) ll_backend__live_vars__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 992 "live_vars.m"
          {
#line 992 "live_vars.m"
            MR_Word ll_backend__live_vars__V_7_7;

#line 992 "live_vars.m"
            *ll_backend__live_vars__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 992 "live_vars.m"
            ll_backend__live_vars__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 992 "live_vars.m"
          }
#line 990 "live_vars.m"
        else
#line 991 "live_vars.m"
          {
#line 991 "live_vars.m"
            MR_Word ll_backend__live_vars__V_4_4;
#line 991 "live_vars.m"
            MR_Word ll_backend__live_vars__V_5_5;

#line 991 "live_vars.m"
            *ll_backend__live_vars__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 991 "live_vars.m"
            ll_backend__live_vars__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 991 "live_vars.m"
            ll_backend__live_vars__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 2)));
#line 991 "live_vars.m"
          }
#line 990 "live_vars.m"
  }
#line 987 "live_vars.m"
}

#line 968 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__par_stack_vars_accumulate_stack_vars_3_p_0(
#line 968 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 968 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__2_2,
#line 968 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__3_3)
#line 968 "live_vars.m"
{
#line 971 "live_vars.m"
  {
#line 971 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;

#line 971 "live_vars.m"
    if ((ll_backend__live_vars__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 972 "live_vars.m"
      *ll_backend__live_vars__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 971 "live_vars.m"
    else
#line 971 "live_vars.m"
      if (((MR_tag((MR_Word) ll_backend__live_vars__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
#line 984 "live_vars.m"
        {
#line 984 "live_vars.m"
          MR_Word ll_backend__live_vars__LocalStackVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 0)));
#line 984 "live_vars.m"
          MR_Word ll_backend__live_vars__WouldDieSet_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 1)));
#line 984 "live_vars.m"
          MR_Word ll_backend__live_vars__AccStackVars0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 2)));
#line 984 "live_vars.m"
          MR_Word ll_backend__live_vars__AccStackVars_19;

#line 985 "live_vars.m"
          {
#line 985 "live_vars.m"
            ll_backend__live_vars__AccStackVars_19 = parse_tree__set_of_var__union_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__live_vars__AccStackVars0_18, ll_backend__live_vars__HeadVar__1_1);
          }
#line 984 "live_vars.m"
          {
#line 984 "live_vars.m"
            MR_Word base;
#line 984 "live_vars.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 984 "live_vars.m"
            *ll_backend__live_vars__HeadVar__3_3 = base;
#line 984 "live_vars.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (ll_backend__live_vars__LocalStackVars_16));
#line 984 "live_vars.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__live_vars__WouldDieSet_17));
#line 984 "live_vars.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__live_vars__AccStackVars_19));
#line 984 "live_vars.m"
          }
#line 984 "live_vars.m"
        }
#line 971 "live_vars.m"
      else
#line 971 "live_vars.m"
        if (((MR_tag((MR_Word) ll_backend__live_vars__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 980 "live_vars.m"
          {
#line 980 "live_vars.m"
            MR_Word ll_backend__live_vars__NonLocals_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 0)));
#line 980 "live_vars.m"
            MR_Word ll_backend__live_vars__AccStackVars0_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 1)));
#line 980 "live_vars.m"
            MR_Word ll_backend__live_vars__AccStackVars_14;

#line 981 "live_vars.m"
            {
#line 981 "live_vars.m"
              ll_backend__live_vars__AccStackVars_14 = parse_tree__set_of_var__union_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__live_vars__AccStackVars0_13, ll_backend__live_vars__HeadVar__1_1);
            }
#line 980 "live_vars.m"
            {
#line 980 "live_vars.m"
              MR_Word base;
#line 980 "live_vars.m"
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 980 "live_vars.m"
              *ll_backend__live_vars__HeadVar__3_3 = base;
#line 980 "live_vars.m"
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__live_vars__NonLocals_12));
#line 980 "live_vars.m"
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ll_backend__live_vars__AccStackVars_14));
#line 980 "live_vars.m"
            }
#line 980 "live_vars.m"
          }
#line 971 "live_vars.m"
        else
#line 975 "live_vars.m"
          {
#line 975 "live_vars.m"
            MR_Word ll_backend__live_vars__TypeCtorInfo_20_20 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 975 "live_vars.m"
            MR_Word ll_backend__live_vars__Nonlocals_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 0)));
#line 975 "live_vars.m"
            MR_Word ll_backend__live_vars__ParallelVars_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 1)));
#line 975 "live_vars.m"
            MR_Word ll_backend__live_vars__AccStackVars0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 2)));
#line 975 "live_vars.m"
            MR_Word ll_backend__live_vars__AccStackVars_9;
#line 975 "live_vars.m"
            MR_Word ll_backend__live_vars__V_10_10;

#line 977 "live_vars.m"
            {
#line 977 "live_vars.m"
              ll_backend__live_vars__V_10_10 = parse_tree__set_of_var__difference_2_f_0(ll_backend__live_vars__TypeCtorInfo_20_20, ll_backend__live_vars__HeadVar__1_1, ll_backend__live_vars__Nonlocals_6);
            }
#line 976 "live_vars.m"
            {
#line 976 "live_vars.m"
              ll_backend__live_vars__AccStackVars_9 = parse_tree__set_of_var__union_2_f_0(ll_backend__live_vars__TypeCtorInfo_20_20, ll_backend__live_vars__AccStackVars0_8, ll_backend__live_vars__V_10_10);
            }
#line 975 "live_vars.m"
            {
#line 975 "live_vars.m"
              MR_Word base;
#line 975 "live_vars.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 975 "live_vars.m"
              *ll_backend__live_vars__HeadVar__3_3 = base;
#line 975 "live_vars.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__live_vars__Nonlocals_6));
#line 975 "live_vars.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__live_vars__ParallelVars_7));
#line 975 "live_vars.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ll_backend__live_vars__AccStackVars_9));
#line 975 "live_vars.m"
            }
#line 975 "live_vars.m"
          }
#line 971 "live_vars.m"
  }
#line 968 "live_vars.m"
}

#line 957 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__par_stack_vars_get_stackvars_2_p_0(
#line 957 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 957 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__2_2)
#line 957 "live_vars.m"
{
#line 960 "live_vars.m"
  {
#line 960 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;

#line 960 "live_vars.m"
    if ((ll_backend__live_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 960 "live_vars.m"
      {
#line 960 "live_vars.m"
        {
#line 960 "live_vars.m"
          *ll_backend__live_vars__HeadVar__2_2 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
#line 960 "live_vars.m"
      }
#line 960 "live_vars.m"
    else
#line 960 "live_vars.m"
      if (((MR_tag((MR_Word) ll_backend__live_vars__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
#line 965 "live_vars.m"
        {
#line 965 "live_vars.m"
          MR_Word ll_backend__live_vars__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 965 "live_vars.m"
          MR_Word ll_backend__live_vars__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 1)));

#line 965 "live_vars.m"
          *ll_backend__live_vars__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 2)));
#line 965 "live_vars.m"
        }
#line 960 "live_vars.m"
      else
#line 960 "live_vars.m"
        if (((MR_tag((MR_Word) ll_backend__live_vars__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 964 "live_vars.m"
          {
#line 964 "live_vars.m"
            MR_Word ll_backend__live_vars__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 0)));

#line 964 "live_vars.m"
            *ll_backend__live_vars__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 964 "live_vars.m"
          }
#line 960 "live_vars.m"
        else
#line 962 "live_vars.m"
          {
#line 962 "live_vars.m"
            MR_Word ll_backend__live_vars__StackVarss_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 961 "live_vars.m"
            MR_Word ll_backend__live_vars__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 961 "live_vars.m"
            MR_Word ll_backend__live_vars__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 2)));

#line 963 "live_vars.m"
            {
#line 963 "live_vars.m"
              *ll_backend__live_vars__HeadVar__2_2 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__live_vars__StackVarss_4);
            }
#line 962 "live_vars.m"
          }
#line 960 "live_vars.m"
  }
#line 957 "live_vars.m"
}

#line 930 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__par_stack_vars_end_loop_control_4_p_0(
#line 930 "live_vars.m"
  MR_Word ll_backend__live_vars__NewWouldDieSet_5,
#line 930 "live_vars.m"
  MR_Word ll_backend__live_vars__OldParStackVars_6,
#line 930 "live_vars.m"
  MR_Word ll_backend__live_vars__ParStackVars0_7,
#line 930 "live_vars.m"
  MR_Word * ll_backend__live_vars__ParStackVars_8)
#line 930 "live_vars.m"
{
#line 935 "live_vars.m"
  {
#line 935 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;
#line 935 "live_vars.m"
    MR_Word ll_backend__live_vars__NewStackVars_9;

#line 960 "live_vars.m"
    if ((ll_backend__live_vars__ParStackVars0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 960 "live_vars.m"
      {
#line 960 "live_vars.m"
        {
#line 960 "live_vars.m"
          ll_backend__live_vars__NewStackVars_9 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
#line 960 "live_vars.m"
      }
#line 960 "live_vars.m"
    else
#line 960 "live_vars.m"
      if (((MR_tag((MR_Word) ll_backend__live_vars__ParStackVars0_7)) == (MR_mktag((MR_Integer) 3))))
#line 965 "live_vars.m"
        {
#line 965 "live_vars.m"
          MR_Word ll_backend__live_vars__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 0)));
#line 965 "live_vars.m"
          MR_Word ll_backend__live_vars__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 1)));

#line 965 "live_vars.m"
          ll_backend__live_vars__NewStackVars_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 2)));
#line 965 "live_vars.m"
        }
#line 960 "live_vars.m"
      else
#line 960 "live_vars.m"
        if (((MR_tag((MR_Word) ll_backend__live_vars__ParStackVars0_7)) == (MR_mktag((MR_Integer) 2))))
#line 964 "live_vars.m"
          {
#line 964 "live_vars.m"
            MR_Word ll_backend__live_vars__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 0)));

#line 964 "live_vars.m"
            ll_backend__live_vars__NewStackVars_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 1)));
#line 964 "live_vars.m"
          }
#line 960 "live_vars.m"
        else
#line 962 "live_vars.m"
          {
#line 962 "live_vars.m"
            MR_Word ll_backend__live_vars__StackVarss_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 1)));
#line 961 "live_vars.m"
            MR_Word ll_backend__live_vars__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 0)));
#line 961 "live_vars.m"
            MR_Word ll_backend__live_vars__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 2)));

#line 963 "live_vars.m"
            {
#line 963 "live_vars.m"
              ll_backend__live_vars__NewStackVars_9 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__live_vars__StackVarss_29);
            }
#line 962 "live_vars.m"
          }
#line 941 "live_vars.m"
    if ((ll_backend__live_vars__OldParStackVars_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 938 "live_vars.m"
      {
#line 938 "live_vars.m"
        MR_Word ll_backend__live_vars__V_23_23;
#line 938 "live_vars.m"
        MR_Word ll_backend__live_vars__V_25_25;

#line 939 "live_vars.m"
        {
#line 939 "live_vars.m"
          ll_backend__live_vars__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 939 "live_vars.m"
          MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_23_23, 0) = ((MR_Box) (ll_backend__live_vars__NewStackVars_9));
#line 939 "live_vars.m"
          MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 939 "live_vars.m"
        }
#line 940 "live_vars.m"
        {
#line 940 "live_vars.m"
          ll_backend__live_vars__V_25_25 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
#line 939 "live_vars.m"
        {
#line 939 "live_vars.m"
          MR_Word base;
#line 939 "live_vars.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 939 "live_vars.m"
          *ll_backend__live_vars__ParStackVars_8 = base;
#line 939 "live_vars.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (ll_backend__live_vars__V_23_23));
#line 939 "live_vars.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__live_vars__NewWouldDieSet_5));
#line 939 "live_vars.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__live_vars__V_25_25));
#line 939 "live_vars.m"
        }
#line 938 "live_vars.m"
      }
#line 941 "live_vars.m"
    else
#line 941 "live_vars.m"
      if (((MR_tag((MR_Word) ll_backend__live_vars__OldParStackVars_6)) == (MR_mktag((MR_Integer) 3))))
#line 943 "live_vars.m"
        {
#line 943 "live_vars.m"
          MR_Word ll_backend__live_vars__StackVarsList_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__OldParStackVars_6, (MR_Integer) 0)));
#line 943 "live_vars.m"
          MR_Word ll_backend__live_vars__WouldDieSet0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__OldParStackVars_6, (MR_Integer) 1)));
#line 943 "live_vars.m"
          MR_Word ll_backend__live_vars__StackVarsAcc_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__OldParStackVars_6, (MR_Integer) 2)));
#line 943 "live_vars.m"
          MR_Word ll_backend__live_vars__WouldDieSet_13;
#line 943 "live_vars.m"
          MR_Word ll_backend__live_vars__V_22_22;

#line 944 "live_vars.m"
          {
#line 944 "live_vars.m"
            ll_backend__live_vars__WouldDieSet_13 = parse_tree__set_of_var__union_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__live_vars__WouldDieSet0_11, ll_backend__live_vars__NewWouldDieSet_5);
          }
#line 946 "live_vars.m"
          {
#line 946 "live_vars.m"
            ll_backend__live_vars__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 946 "live_vars.m"
            MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_22_22, 0) = ((MR_Box) (ll_backend__live_vars__NewStackVars_9));
#line 946 "live_vars.m"
            MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_22_22, 1) = ((MR_Box) (ll_backend__live_vars__StackVarsList_10));
#line 946 "live_vars.m"
          }
#line 946 "live_vars.m"
          {
#line 946 "live_vars.m"
            MR_Word base;
#line 946 "live_vars.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 946 "live_vars.m"
            *ll_backend__live_vars__ParStackVars_8 = base;
#line 946 "live_vars.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (ll_backend__live_vars__V_22_22));
#line 946 "live_vars.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__live_vars__WouldDieSet_13));
#line 946 "live_vars.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__live_vars__StackVarsAcc_12));
#line 946 "live_vars.m"
          }
#line 943 "live_vars.m"
        }
#line 941 "live_vars.m"
      else
#line 951 "live_vars.m"
        {
#line 952 "live_vars.m"
          {
#line 952 "live_vars.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.live_vars", (MR_String) "predicate \140ll_backend.live_vars.par_stack_vars_end_loop_control\'/4", (MR_String) "Loop control scope found in other parallel context");
#line 952 "live_vars.m"
            return;
          }
#line 951 "live_vars.m"
        }
#line 935 "live_vars.m"
  }
#line 930 "live_vars.m"
}

#line 913 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__par_stack_vars_start_loop_control_3_p_0(
#line 913 "live_vars.m"
  MR_Word ll_backend__live_vars__NonLocals_4,
#line 913 "live_vars.m"
  MR_Word ll_backend__live_vars__ParStackVars0_5,
#line 913 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__3_3)
#line 913 "live_vars.m"
{
#line 917 "live_vars.m"
  {
#line 917 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;
#line 917 "live_vars.m"
    MR_Word ll_backend__live_vars__V_14_14;

#line 917 "live_vars.m"
    {
#line 917 "live_vars.m"
      ll_backend__live_vars__V_14_14 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
#line 917 "live_vars.m"
    {
#line 917 "live_vars.m"
      MR_Word base;
#line 917 "live_vars.m"
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 917 "live_vars.m"
      *ll_backend__live_vars__HeadVar__3_3 = base;
#line 917 "live_vars.m"
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__live_vars__NonLocals_4));
#line 917 "live_vars.m"
      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ll_backend__live_vars__V_14_14));
#line 917 "live_vars.m"
    }
#line 922 "live_vars.m"
    if ((ll_backend__live_vars__ParStackVars0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 919 "live_vars.m"
      {
#line 919 "live_vars.m"
      }
#line 922 "live_vars.m"
    else
#line 922 "live_vars.m"
      if (((MR_tag((MR_Word) ll_backend__live_vars__ParStackVars0_5)) == (MR_mktag((MR_Integer) 3))))
#line 920 "live_vars.m"
        {
#line 920 "live_vars.m"
        }
#line 922 "live_vars.m"
      else
#line 925 "live_vars.m"
        {
#line 926 "live_vars.m"
          {
#line 926 "live_vars.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.live_vars", (MR_String) "predicate \140ll_backend.live_vars.par_stack_vars_start_loop_control\'/3", (MR_String) "Loop control scope found in other parallel context");
#line 926 "live_vars.m"
            return;
          }
#line 925 "live_vars.m"
        }
#line 917 "live_vars.m"
  }
#line 913 "live_vars.m"
}

#line 868 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__par_stack_vars_end_parallel_conjunction_4_p_0(
#line 868 "live_vars.m"
  MR_Word ll_backend__live_vars__LiveSet_5,
#line 868 "live_vars.m"
  MR_Word ll_backend__live_vars__OuterParStackVars_6,
#line 868 "live_vars.m"
  MR_Word ll_backend__live_vars__ParStackVars0_7,
#line 868 "live_vars.m"
  MR_Word * ll_backend__live_vars__ParStackVars_8)
#line 868 "live_vars.m"
{
#line 873 "live_vars.m"
  {
#line 873 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;
#line 873 "live_vars.m"
    MR_Word ll_backend__live_vars__InnerStackVars_9;

#line 960 "live_vars.m"
    if ((ll_backend__live_vars__ParStackVars0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 960 "live_vars.m"
      {
#line 960 "live_vars.m"
        {
#line 960 "live_vars.m"
          ll_backend__live_vars__InnerStackVars_9 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
#line 960 "live_vars.m"
      }
#line 960 "live_vars.m"
    else
#line 960 "live_vars.m"
      if (((MR_tag((MR_Word) ll_backend__live_vars__ParStackVars0_7)) == (MR_mktag((MR_Integer) 3))))
#line 965 "live_vars.m"
        {
#line 965 "live_vars.m"
          MR_Word ll_backend__live_vars__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 0)));
#line 965 "live_vars.m"
          MR_Word ll_backend__live_vars__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 1)));

#line 965 "live_vars.m"
          ll_backend__live_vars__InnerStackVars_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 2)));
#line 965 "live_vars.m"
        }
#line 960 "live_vars.m"
      else
#line 960 "live_vars.m"
        if (((MR_tag((MR_Word) ll_backend__live_vars__ParStackVars0_7)) == (MR_mktag((MR_Integer) 2))))
#line 964 "live_vars.m"
          {
#line 964 "live_vars.m"
            MR_Word ll_backend__live_vars__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 0)));

#line 964 "live_vars.m"
            ll_backend__live_vars__InnerStackVars_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 1)));
#line 964 "live_vars.m"
          }
#line 960 "live_vars.m"
        else
#line 962 "live_vars.m"
          {
#line 962 "live_vars.m"
            MR_Word ll_backend__live_vars__StackVarss_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 1)));
#line 961 "live_vars.m"
            MR_Word ll_backend__live_vars__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 0)));
#line 961 "live_vars.m"
            MR_Word ll_backend__live_vars__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 2)));

#line 963 "live_vars.m"
            {
#line 963 "live_vars.m"
              ll_backend__live_vars__InnerStackVars_9 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__live_vars__StackVarss_30);
            }
#line 962 "live_vars.m"
          }
#line 878 "live_vars.m"
    if ((ll_backend__live_vars__OuterParStackVars_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 877 "live_vars.m"
      *ll_backend__live_vars__ParStackVars_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 878 "live_vars.m"
    else
#line 878 "live_vars.m"
      if (((MR_tag((MR_Word) ll_backend__live_vars__OuterParStackVars_6)) == (MR_mktag((MR_Integer) 3))))
#line 904 "live_vars.m"
        {
#line 904 "live_vars.m"
          MR_Word ll_backend__live_vars__TypeCtorInfo_28_28 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 904 "live_vars.m"
          MR_Word ll_backend__live_vars__StackVarsList_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__OuterParStackVars_6, (MR_Integer) 0)));
#line 904 "live_vars.m"
          MR_Word ll_backend__live_vars__WouldDieSet_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__OuterParStackVars_6, (MR_Integer) 1)));
#line 904 "live_vars.m"
          MR_Word ll_backend__live_vars__V_18_18;
#line 904 "live_vars.m"
          MR_Word ll_backend__live_vars__StackVars0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__OuterParStackVars_6, (MR_Integer) 2)));
#line 904 "live_vars.m"
          MR_Word ll_backend__live_vars__StackVars_25;

#line 907 "live_vars.m"
          {
#line 907 "live_vars.m"
            ll_backend__live_vars__V_18_18 = parse_tree__set_of_var__union_2_f_0(ll_backend__live_vars__TypeCtorInfo_28_28, ll_backend__live_vars__StackVars0_24, ll_backend__live_vars__InnerStackVars_9);
          }
#line 908 "live_vars.m"
          {
#line 908 "live_vars.m"
            ll_backend__live_vars__StackVars_25 = parse_tree__set_of_var__union_2_f_0(ll_backend__live_vars__TypeCtorInfo_28_28, ll_backend__live_vars__V_18_18, ll_backend__live_vars__LiveSet_5);
          }
#line 909 "live_vars.m"
          {
#line 909 "live_vars.m"
            MR_Word base;
#line 909 "live_vars.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 909 "live_vars.m"
            *ll_backend__live_vars__ParStackVars_8 = base;
#line 909 "live_vars.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (ll_backend__live_vars__StackVarsList_16));
#line 909 "live_vars.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__live_vars__WouldDieSet_17));
#line 909 "live_vars.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__live_vars__StackVars_25));
#line 909 "live_vars.m"
          }
#line 904 "live_vars.m"
        }
#line 878 "live_vars.m"
      else
#line 878 "live_vars.m"
        if (((MR_tag((MR_Word) ll_backend__live_vars__OuterParStackVars_6)) == (MR_mktag((MR_Integer) 2))))
#line 893 "live_vars.m"
          {
#line 893 "live_vars.m"
            MR_Word ll_backend__live_vars__TypeCtorInfo_27_27 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 893 "live_vars.m"
            MR_Word ll_backend__live_vars__StackVars0_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__OuterParStackVars_6, (MR_Integer) 1)));
#line 893 "live_vars.m"
            MR_Word ll_backend__live_vars__StackVars_15;
#line 893 "live_vars.m"
            MR_Word ll_backend__live_vars__V_19_19;
#line 893 "live_vars.m"
            MR_Word ll_backend__live_vars__V_20_20;
#line 893 "live_vars.m"
            MR_Word ll_backend__live_vars__OuterNonLocals_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__OuterParStackVars_6, (MR_Integer) 0)));

#line 898 "live_vars.m"
            {
#line 898 "live_vars.m"
              ll_backend__live_vars__V_19_19 = parse_tree__set_of_var__union_2_f_0(ll_backend__live_vars__TypeCtorInfo_27_27, ll_backend__live_vars__StackVars0_14, ll_backend__live_vars__InnerStackVars_9);
            }
#line 900 "live_vars.m"
            {
#line 900 "live_vars.m"
              ll_backend__live_vars__V_20_20 = parse_tree__set_of_var__difference_2_f_0(ll_backend__live_vars__TypeCtorInfo_27_27, ll_backend__live_vars__LiveSet_5, ll_backend__live_vars__OuterNonLocals_23);
            }
#line 899 "live_vars.m"
            {
#line 899 "live_vars.m"
              ll_backend__live_vars__StackVars_15 = parse_tree__set_of_var__union_2_f_0(ll_backend__live_vars__TypeCtorInfo_27_27, ll_backend__live_vars__V_19_19, ll_backend__live_vars__V_20_20);
            }
#line 901 "live_vars.m"
            {
#line 901 "live_vars.m"
              MR_Word base;
#line 901 "live_vars.m"
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 901 "live_vars.m"
              *ll_backend__live_vars__ParStackVars_8 = base;
#line 901 "live_vars.m"
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__live_vars__OuterNonLocals_23));
#line 901 "live_vars.m"
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ll_backend__live_vars__StackVars_15));
#line 901 "live_vars.m"
            }
#line 893 "live_vars.m"
          }
#line 878 "live_vars.m"
        else
#line 880 "live_vars.m"
          {
#line 880 "live_vars.m"
            MR_Word ll_backend__live_vars__TypeCtorInfo_26_26 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 880 "live_vars.m"
            MR_Word ll_backend__live_vars__OuterNonLocals_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__OuterParStackVars_6, (MR_Integer) 0)));
#line 880 "live_vars.m"
            MR_Word ll_backend__live_vars__OuterLocalStackVars_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__OuterParStackVars_6, (MR_Integer) 1)));
#line 880 "live_vars.m"
            MR_Word ll_backend__live_vars__OuterAccStackVars0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__OuterParStackVars_6, (MR_Integer) 2)));
#line 880 "live_vars.m"
            MR_Word ll_backend__live_vars__OuterAccStackVars_13;
#line 880 "live_vars.m"
            MR_Word ll_backend__live_vars__V_21_21;
#line 880 "live_vars.m"
            MR_Word ll_backend__live_vars__V_22_22;

#line 887 "live_vars.m"
            {
#line 887 "live_vars.m"
              ll_backend__live_vars__V_21_21 = parse_tree__set_of_var__union_2_f_0(ll_backend__live_vars__TypeCtorInfo_26_26, ll_backend__live_vars__OuterAccStackVars0_12, ll_backend__live_vars__InnerStackVars_9);
            }
#line 889 "live_vars.m"
            {
#line 889 "live_vars.m"
              ll_backend__live_vars__V_22_22 = parse_tree__set_of_var__difference_2_f_0(ll_backend__live_vars__TypeCtorInfo_26_26, ll_backend__live_vars__LiveSet_5, ll_backend__live_vars__OuterNonLocals_10);
            }
#line 888 "live_vars.m"
            {
#line 888 "live_vars.m"
              ll_backend__live_vars__OuterAccStackVars_13 = parse_tree__set_of_var__union_2_f_0(ll_backend__live_vars__TypeCtorInfo_26_26, ll_backend__live_vars__V_21_21, ll_backend__live_vars__V_22_22);
            }
#line 890 "live_vars.m"
            {
#line 890 "live_vars.m"
              MR_Word base;
#line 890 "live_vars.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 890 "live_vars.m"
              *ll_backend__live_vars__ParStackVars_8 = base;
#line 890 "live_vars.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__live_vars__OuterNonLocals_10));
#line 890 "live_vars.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__live_vars__OuterLocalStackVars_11));
#line 890 "live_vars.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ll_backend__live_vars__OuterAccStackVars_13));
#line 890 "live_vars.m"
            }
#line 880 "live_vars.m"
          }
#line 873 "live_vars.m"
  }
#line 868 "live_vars.m"
}

#line 860 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__par_stack_vars_start_parallel_conjunction_3_p_0(
#line 860 "live_vars.m"
  MR_Word ll_backend__live_vars__LiveSet_4,
#line 860 "live_vars.m"
  MR_Word ll_backend__live_vars__OuterParStackVars_5,
#line 860 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__3_3)
#line 860 "live_vars.m"
{
#line 864 "live_vars.m"
  {
#line 864 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;
#line 864 "live_vars.m"
    MR_Word ll_backend__live_vars__TypeCtorInfo_10_10 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 864 "live_vars.m"
    MR_Word ll_backend__live_vars__InnerNonLocals_6;
#line 864 "live_vars.m"
    MR_Word ll_backend__live_vars__OuterNonLocals_7;
#line 864 "live_vars.m"
    MR_Word ll_backend__live_vars__V_9_9;

#line 864 "live_vars.m"
    {
#line 864 "live_vars.m"
      ll_backend__live_vars__V_9_9 = parse_tree__set_of_var__init_0_f_0(ll_backend__live_vars__TypeCtorInfo_10_10);
    }
#line 990 "live_vars.m"
    if ((ll_backend__live_vars__OuterParStackVars_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 990 "live_vars.m"
      {
#line 990 "live_vars.m"
        {
#line 990 "live_vars.m"
          ll_backend__live_vars__OuterNonLocals_7 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
#line 990 "live_vars.m"
      }
#line 990 "live_vars.m"
    else
#line 990 "live_vars.m"
      if (((MR_tag((MR_Word) ll_backend__live_vars__OuterParStackVars_5)) == (MR_mktag((MR_Integer) 3))))
#line 993 "live_vars.m"
        {
#line 994 "live_vars.m"
          {
#line 994 "live_vars.m"
            ll_backend__live_vars__OuterNonLocals_7 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          }
#line 993 "live_vars.m"
        }
#line 990 "live_vars.m"
      else
#line 990 "live_vars.m"
        if (((MR_tag((MR_Word) ll_backend__live_vars__OuterParStackVars_5)) == (MR_mktag((MR_Integer) 2))))
#line 992 "live_vars.m"
          {
#line 992 "live_vars.m"
            MR_Word ll_backend__live_vars__V_15_15;

#line 992 "live_vars.m"
            ll_backend__live_vars__OuterNonLocals_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__OuterParStackVars_5, (MR_Integer) 0)));
#line 992 "live_vars.m"
            ll_backend__live_vars__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__OuterParStackVars_5, (MR_Integer) 1)));
#line 992 "live_vars.m"
          }
#line 990 "live_vars.m"
        else
#line 991 "live_vars.m"
          {
#line 991 "live_vars.m"
            MR_Word ll_backend__live_vars__V_12_12;
#line 991 "live_vars.m"
            MR_Word ll_backend__live_vars__V_13_13;

#line 991 "live_vars.m"
            ll_backend__live_vars__OuterNonLocals_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__OuterParStackVars_5, (MR_Integer) 0)));
#line 991 "live_vars.m"
            ll_backend__live_vars__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__OuterParStackVars_5, (MR_Integer) 1)));
#line 991 "live_vars.m"
            ll_backend__live_vars__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__OuterParStackVars_5, (MR_Integer) 2)));
#line 991 "live_vars.m"
          }
#line 866 "live_vars.m"
    {
#line 866 "live_vars.m"
      ll_backend__live_vars__InnerNonLocals_6 = parse_tree__set_of_var__union_2_f_0(ll_backend__live_vars__TypeCtorInfo_10_10, ll_backend__live_vars__OuterNonLocals_7, ll_backend__live_vars__LiveSet_4);
    }
#line 864 "live_vars.m"
    {
#line 864 "live_vars.m"
      MR_Word base;
#line 864 "live_vars.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 864 "live_vars.m"
      *ll_backend__live_vars__HeadVar__3_3 = base;
#line 864 "live_vars.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__live_vars__InnerNonLocals_6));
#line 864 "live_vars.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 864 "live_vars.m"
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ll_backend__live_vars__V_9_9));
#line 864 "live_vars.m"
    }
#line 864 "live_vars.m"
  }
#line 860 "live_vars.m"
}

#line 799 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__record_par_conj_6_p_0(
#line 799 "live_vars.m"
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_17,
#line 799 "live_vars.m"
  MR_Word ll_backend__live_vars__NeedInParConj_7,
#line 799 "live_vars.m"
  MR_Word ll_backend__live_vars__AllocData_8,
#line 799 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_GoalInfo_0_11,
#line 799 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_GoalInfo_12,
#line 799 "live_vars.m"
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_13,
#line 799 "live_vars.m"
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_14)
#line 799 "live_vars.m"
{
#line 803 "live_vars.m"
  {
#line 803 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;
#line 3135 "ll_backend.live_vars.c"
    void MR_CALL (* ll_backend__live_vars__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 804 "live_vars.m"
    {
#line 804 "live_vars.m"
      hlds__hlds_llds__goal_info_set_need_in_par_conj_3_p_0(ll_backend__live_vars__NeedInParConj_7, ll_backend__live_vars__STATE_VARIABLE_GoalInfo_0_11, ll_backend__live_vars__STATE_VARIABLE_GoalInfo_12);
    }
#line 3143 "ll_backend.live_vars.c"
    ll_backend__live_vars__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_17, (MR_Integer) 0)), (MR_Integer) 7)));
#line 3145 "ll_backend.live_vars.c"
    {
#line 3147 "ll_backend.live_vars.c"
      ll_backend__live_vars__func_0(((MR_Box) ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_17), ((MR_Box) (ll_backend__live_vars__NeedInParConj_7)), ((MR_Box) (ll_backend__live_vars__AllocData_8)), ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_13, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_14);
#line 3149 "ll_backend.live_vars.c"
      return;
    }
#line 803 "live_vars.m"
  }
#line 799 "live_vars.m"
}

#line 722 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_cases_12_p_0(
#line 722 "live_vars.m"
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_54,
#line 722 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 722 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__2_2,
#line 722 "live_vars.m"
  MR_Word ll_backend__live_vars__ResumeVars0_3,
#line 722 "live_vars.m"
  MR_Word ll_backend__live_vars__AllocData_4,
#line 722 "live_vars.m"
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_5,
#line 722 "live_vars.m"
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_6,
#line 722 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__7_7,
#line 722 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__8_8,
#line 722 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__9_9,
#line 722 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__10_10,
#line 722 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_11,
#line 722 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_12)
#line 722 "live_vars.m"
{
#line 729 "live_vars.m"
  {
#line 729 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;

#line 729 "live_vars.m"
    if ((ll_backend__live_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 729 "live_vars.m"
      {
#line 729 "live_vars.m"
        *ll_backend__live_vars__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 730 "live_vars.m"
        *ll_backend__live_vars__STATE_VARIABLE_ParStackVars_12 = ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_11;
#line 730 "live_vars.m"
        *ll_backend__live_vars__HeadVar__10_10 = ll_backend__live_vars__HeadVar__9_9;
#line 730 "live_vars.m"
        *ll_backend__live_vars__HeadVar__8_8 = ll_backend__live_vars__HeadVar__7_7;
#line 730 "live_vars.m"
        *ll_backend__live_vars__STATE_VARIABLE_StackAlloc_6 = ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_5;
#line 729 "live_vars.m"
      }
#line 729 "live_vars.m"
    else
#line 733 "live_vars.m"
      {
#line 733 "live_vars.m"
        MR_Word ll_backend__live_vars__Case0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 733 "live_vars.m"
        MR_Word ll_backend__live_vars__Cases0_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 733 "live_vars.m"
        MR_Word ll_backend__live_vars__Case_29;
#line 733 "live_vars.m"
        MR_Word ll_backend__live_vars__Cases_30;
#line 733 "live_vars.m"
        MR_Word ll_backend__live_vars__MainConsId_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__Case0_27, (MR_Integer) 0)));
#line 733 "live_vars.m"
        MR_Word ll_backend__live_vars__OtherConsIds_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__Case0_27, (MR_Integer) 1)));
#line 733 "live_vars.m"
        MR_Word ll_backend__live_vars__Goal0_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__Case0_27, (MR_Integer) 2)));
#line 733 "live_vars.m"
        MR_Word ll_backend__live_vars__Goal_42;
#line 733 "live_vars.m"
        MR_Word ll_backend__live_vars__NondetLiveness1_43;
#line 733 "live_vars.m"
        MR_Word ll_backend__live_vars__NondetLiveness2_45;
#line 733 "live_vars.m"
        MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_50_50;
#line 733 "live_vars.m"
        MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_51_51;
#line 739 "live_vars.m"
        MR_Word ll_backend__live_vars___Liveness2_44;

#line 735 "live_vars.m"
        {
#line 735 "live_vars.m"
          ll_backend__live_vars__build_live_sets_in_goal_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_54, ll_backend__live_vars__Goal0_41, &ll_backend__live_vars__Goal_42, ll_backend__live_vars__ResumeVars0_3, ll_backend__live_vars__AllocData_4, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_5, &ll_backend__live_vars__STATE_VARIABLE_StackAlloc_50_50, ll_backend__live_vars__HeadVar__7_7, ll_backend__live_vars__HeadVar__8_8, ll_backend__live_vars__HeadVar__9_9, &ll_backend__live_vars__NondetLiveness1_43, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_11, &ll_backend__live_vars__STATE_VARIABLE_ParStackVars_51_51);
        }
#line 738 "live_vars.m"
        {
#line 738 "live_vars.m"
          ll_backend__live_vars__Case_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 738 "live_vars.m"
          MR_hl_field(MR_mktag(0), ll_backend__live_vars__Case_29, 0) = ((MR_Box) (ll_backend__live_vars__MainConsId_39));
#line 738 "live_vars.m"
          MR_hl_field(MR_mktag(0), ll_backend__live_vars__Case_29, 1) = ((MR_Box) (ll_backend__live_vars__OtherConsIds_40));
#line 738 "live_vars.m"
          MR_hl_field(MR_mktag(0), ll_backend__live_vars__Case_29, 2) = ((MR_Box) (ll_backend__live_vars__Goal_42));
#line 738 "live_vars.m"
        }
#line 739 "live_vars.m"
        {
#line 739 "live_vars.m"
          ll_backend__live_vars__build_live_sets_in_cases_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_54, ll_backend__live_vars__Cases0_28, &ll_backend__live_vars__Cases_30, ll_backend__live_vars__ResumeVars0_3, ll_backend__live_vars__AllocData_4, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_50_50, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_6, ll_backend__live_vars__HeadVar__7_7, &ll_backend__live_vars___Liveness2_44, ll_backend__live_vars__HeadVar__9_9, &ll_backend__live_vars__NondetLiveness2_45, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_51_51, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_12);
        }
#line 731 "live_vars.m"
        {
#line 731 "live_vars.m"
          MR_Word base;
#line 731 "live_vars.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 731 "live_vars.m"
          *ll_backend__live_vars__HeadVar__2_2 = base;
#line 731 "live_vars.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__live_vars__Case_29));
#line 731 "live_vars.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__live_vars__Cases_30));
#line 731 "live_vars.m"
        }
#line 742 "live_vars.m"
        {
#line 742 "live_vars.m"
          parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__live_vars__NondetLiveness1_43, ll_backend__live_vars__NondetLiveness2_45, ll_backend__live_vars__HeadVar__10_10);
#line 742 "live_vars.m"
          return;
        }
#line 733 "live_vars.m"
      }
#line 729 "live_vars.m"
  }
#line 722 "live_vars.m"
}

#line 678 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_disj_13_p_0(
#line 678 "live_vars.m"
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_61,
#line 678 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 678 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__2_2,
#line 678 "live_vars.m"
  MR_Word ll_backend__live_vars__DisjGoalInfo_3,
#line 678 "live_vars.m"
  MR_Word ll_backend__live_vars__ResumeVars0_4,
#line 678 "live_vars.m"
  MR_Word ll_backend__live_vars__AllocData_5,
#line 678 "live_vars.m"
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_6,
#line 678 "live_vars.m"
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_7,
#line 678 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__8_8,
#line 678 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__9_9,
#line 678 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__10_10,
#line 678 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__11_11,
#line 678 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_12,
#line 678 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_13)
#line 678 "live_vars.m"
{
#line 685 "live_vars.m"
  {
#line 685 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;

#line 685 "live_vars.m"
    if ((ll_backend__live_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 685 "live_vars.m"
      {
#line 685 "live_vars.m"
        *ll_backend__live_vars__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 686 "live_vars.m"
        *ll_backend__live_vars__STATE_VARIABLE_ParStackVars_13 = ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_12;
#line 686 "live_vars.m"
        *ll_backend__live_vars__HeadVar__11_11 = ll_backend__live_vars__HeadVar__10_10;
#line 686 "live_vars.m"
        *ll_backend__live_vars__HeadVar__9_9 = ll_backend__live_vars__HeadVar__8_8;
#line 686 "live_vars.m"
        *ll_backend__live_vars__STATE_VARIABLE_StackAlloc_7 = ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_6;
#line 685 "live_vars.m"
      }
#line 685 "live_vars.m"
    else
#line 689 "live_vars.m"
      {
#line 689 "live_vars.m"
        MR_Word ll_backend__live_vars__Goal0_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 689 "live_vars.m"
        MR_Word ll_backend__live_vars__Goals0_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 689 "live_vars.m"
        MR_Word ll_backend__live_vars__Goal_31;
#line 689 "live_vars.m"
        MR_Word ll_backend__live_vars__Goals_32;
#line 689 "live_vars.m"
        MR_Word ll_backend__live_vars__GoalInfo_43;
#line 689 "live_vars.m"
        MR_Word ll_backend__live_vars__NondetLiveness1_44;
#line 689 "live_vars.m"
        MR_Word ll_backend__live_vars__NondetLiveness2_46;
#line 689 "live_vars.m"
        MR_Word ll_backend__live_vars__DisjCodeModel_47;
#line 689 "live_vars.m"
        MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_56_56;
#line 689 "live_vars.m"
        MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_57_57;
#line 690 "live_vars.m"
        MR_Word ll_backend__live_vars__V_42_42;
#line 694 "live_vars.m"
        MR_Word ll_backend__live_vars___Liveness2_45;

#line 691 "live_vars.m"
        {
#line 691 "live_vars.m"
          ll_backend__live_vars__build_live_sets_in_goal_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_61, ll_backend__live_vars__Goal0_29, &ll_backend__live_vars__Goal_31, ll_backend__live_vars__ResumeVars0_4, ll_backend__live_vars__AllocData_5, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_6, &ll_backend__live_vars__STATE_VARIABLE_StackAlloc_56_56, ll_backend__live_vars__HeadVar__8_8, ll_backend__live_vars__HeadVar__9_9, ll_backend__live_vars__HeadVar__10_10, &ll_backend__live_vars__NondetLiveness1_44, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_12, &ll_backend__live_vars__STATE_VARIABLE_ParStackVars_57_57);
        }
#line 690 "live_vars.m"
        ll_backend__live_vars__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__Goal_31, (MR_Integer) 0)));
#line 690 "live_vars.m"
        ll_backend__live_vars__GoalInfo_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__Goal_31, (MR_Integer) 1)));
#line 694 "live_vars.m"
        {
#line 694 "live_vars.m"
          ll_backend__live_vars__build_live_sets_in_disj_13_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_61, ll_backend__live_vars__Goals0_30, &ll_backend__live_vars__Goals_32, ll_backend__live_vars__DisjGoalInfo_3, ll_backend__live_vars__ResumeVars0_4, ll_backend__live_vars__AllocData_5, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_56_56, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_7, ll_backend__live_vars__HeadVar__8_8, &ll_backend__live_vars___Liveness2_45, ll_backend__live_vars__HeadVar__10_10, &ll_backend__live_vars__NondetLiveness2_46, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_57_57, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_13);
        }
#line 687 "live_vars.m"
        {
#line 687 "live_vars.m"
          MR_Word base;
#line 687 "live_vars.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 687 "live_vars.m"
          *ll_backend__live_vars__HeadVar__2_2 = base;
#line 687 "live_vars.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__live_vars__Goal_31));
#line 687 "live_vars.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__live_vars__Goals_32));
#line 687 "live_vars.m"
        }
#line 697 "live_vars.m"
        {
#line 697 "live_vars.m"
          ll_backend__live_vars__DisjCodeModel_47 = hlds__code_model__goal_info_get_code_model_1_f_0(ll_backend__live_vars__DisjGoalInfo_3);
        }
#line 713 "live_vars.m"
        if ((ll_backend__live_vars__DisjCodeModel_47 == (MR_Integer) 2))
#line 699 "live_vars.m"
          {
#line 699 "live_vars.m"
            MR_Word ll_backend__live_vars__TypeCtorInfo_62_62 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 699 "live_vars.m"
            MR_Word ll_backend__live_vars__NondetLiveness3_48;
#line 699 "live_vars.m"
            MR_Word ll_backend__live_vars__Resume_49;
#line 710 "live_vars.m"
            MR_Word ll_backend__live_vars__ResumePointVars_50;
#line 706 "live_vars.m"
            MR_Word ll_backend__live_vars__Locs_51;
#line 706 "live_vars.m"
            MR_Word ll_backend__live_vars__V_60_60;

#line 703 "live_vars.m"
            {
#line 703 "live_vars.m"
              parse_tree__set_of_var__union_3_p_0(ll_backend__live_vars__TypeCtorInfo_62_62, ll_backend__live_vars__NondetLiveness1_44, ll_backend__live_vars__NondetLiveness2_46, &ll_backend__live_vars__NondetLiveness3_48);
            }
#line 704 "live_vars.m"
            {
#line 704 "live_vars.m"
              hlds__hlds_llds__goal_info_get_resume_point_2_p_0(ll_backend__live_vars__GoalInfo_43, &ll_backend__live_vars__Resume_49);
            }
#line 706 "live_vars.m"
            ll_backend__live_vars__succeeded = ((MR_tag((MR_Word) ll_backend__live_vars__Resume_49)) == (MR_mktag((MR_Integer) 1)));
#line 706 "live_vars.m"
            if (ll_backend__live_vars__succeeded)
#line 706 "live_vars.m"
              {
#line 706 "live_vars.m"
                ll_backend__live_vars__ResumePointVars_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__Resume_49, (MR_Integer) 0)));
#line 706 "live_vars.m"
                ll_backend__live_vars__Locs_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__Resume_49, (MR_Integer) 1)));
#line 707 "live_vars.m"
                ll_backend__live_vars__V_60_60 = (MR_Integer) 1;
#line 217 "live_vars.m"
                if ((ll_backend__live_vars__Locs_51 == (MR_Integer) 2))
#line 219 "live_vars.m"
                  {
#line 707 "live_vars.m"
                    ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_60_60 == (MR_Integer) 1);
#line 219 "live_vars.m"
                  }
#line 217 "live_vars.m"
                else
#line 217 "live_vars.m"
                  if ((ll_backend__live_vars__Locs_51 == (MR_Integer) 0))
#line 217 "live_vars.m"
                    {
#line 707 "live_vars.m"
                      ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_60_60 == (MR_Integer) 0);
#line 217 "live_vars.m"
                    }
#line 217 "live_vars.m"
                  else
#line 217 "live_vars.m"
                    if ((ll_backend__live_vars__Locs_51 == (MR_Integer) 3))
#line 220 "live_vars.m"
                      {
#line 707 "live_vars.m"
                        ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_60_60 == (MR_Integer) 1);
#line 220 "live_vars.m"
                      }
#line 217 "live_vars.m"
                    else
#line 218 "live_vars.m"
                      {
#line 707 "live_vars.m"
                        ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_60_60 == (MR_Integer) 1);
#line 218 "live_vars.m"
                      }
#line 706 "live_vars.m"
              }
#line 710 "live_vars.m"
            if (ll_backend__live_vars__succeeded)
#line 709 "live_vars.m"
              {
#line 709 "live_vars.m"
                parse_tree__set_of_var__union_3_p_0(ll_backend__live_vars__TypeCtorInfo_62_62, ll_backend__live_vars__NondetLiveness3_48, ll_backend__live_vars__ResumePointVars_50, ll_backend__live_vars__HeadVar__11_11);
#line 709 "live_vars.m"
                return;
              }
#line 710 "live_vars.m"
            else
#line 711 "live_vars.m"
              *ll_backend__live_vars__HeadVar__11_11 = ll_backend__live_vars__NondetLiveness3_48;
#line 699 "live_vars.m"
          }
#line 713 "live_vars.m"
        else
#line 717 "live_vars.m"
          *ll_backend__live_vars__HeadVar__11_11 = ll_backend__live_vars__HeadVar__10_10;
#line 689 "live_vars.m"
      }
#line 685 "live_vars.m"
  }
#line 678 "live_vars.m"
}

#line 658 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_par_conj_12_p_0(
#line 658 "live_vars.m"
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_50,
#line 658 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 658 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__2_2,
#line 658 "live_vars.m"
  MR_Word ll_backend__live_vars__ResumeVars0_3,
#line 658 "live_vars.m"
  MR_Word ll_backend__live_vars__AllocData_4,
#line 658 "live_vars.m"
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_5,
#line 658 "live_vars.m"
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_6,
#line 658 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__7_7,
#line 658 "live_vars.m"
  MR_Word * ll_backend__live_vars__Liveness_8,
#line 658 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_9,
#line 658 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_10,
#line 658 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_11,
#line 658 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_12)
#line 658 "live_vars.m"
{
#line 665 "live_vars.m"
  {
#line 665 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;

#line 665 "live_vars.m"
    if ((ll_backend__live_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 665 "live_vars.m"
      {
#line 665 "live_vars.m"
        *ll_backend__live_vars__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 666 "live_vars.m"
        *ll_backend__live_vars__Liveness_8 = ll_backend__live_vars__HeadVar__7_7;
#line 666 "live_vars.m"
        *ll_backend__live_vars__STATE_VARIABLE_ParStackVars_12 = ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_11;
#line 666 "live_vars.m"
        *ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_10 = ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_9;
#line 666 "live_vars.m"
        *ll_backend__live_vars__STATE_VARIABLE_StackAlloc_6 = ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_5;
#line 665 "live_vars.m"
      }
#line 665 "live_vars.m"
    else
#line 669 "live_vars.m"
      {
#line 669 "live_vars.m"
        MR_Word ll_backend__live_vars__Goal0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 669 "live_vars.m"
        MR_Word ll_backend__live_vars__Goals0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 669 "live_vars.m"
        MR_Word ll_backend__live_vars__Goal_27;
#line 669 "live_vars.m"
        MR_Word ll_backend__live_vars__Goals_28;
#line 669 "live_vars.m"
        MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_43_43;
#line 669 "live_vars.m"
        MR_Word ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_44_44;
#line 669 "live_vars.m"
        MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_45_45;
#line 669 "live_vars.m"
        MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_46_46;
#line 1004 "live_vars.m"
        MR_Word ll_backend__live_vars__Nonlocals_54;
#line 1004 "live_vars.m"
        MR_Word ll_backend__live_vars__PrevSets_55;
#line 1004 "live_vars.m"
        MR_Word ll_backend__live_vars__CurSet_56;
#line 673 "live_vars.m"
        MR_Word ll_backend__live_vars___Liveness1_36;

#line 670 "live_vars.m"
        {
#line 670 "live_vars.m"
          ll_backend__live_vars__build_live_sets_in_goal_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_50, ll_backend__live_vars__Goal0_25, &ll_backend__live_vars__Goal_27, ll_backend__live_vars__ResumeVars0_3, ll_backend__live_vars__AllocData_4, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_5, &ll_backend__live_vars__STATE_VARIABLE_StackAlloc_43_43, ll_backend__live_vars__HeadVar__7_7, ll_backend__live_vars__Liveness_8, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_9, &ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_44_44, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_11, &ll_backend__live_vars__STATE_VARIABLE_ParStackVars_45_45);
        }
#line 1000 "live_vars.m"
        ll_backend__live_vars__succeeded = ((MR_tag((MR_Word) ll_backend__live_vars__STATE_VARIABLE_ParStackVars_45_45)) == (MR_mktag((MR_Integer) 1)));
#line 1000 "live_vars.m"
        if (ll_backend__live_vars__succeeded)
#line 1000 "live_vars.m"
          {
#line 1000 "live_vars.m"
            ll_backend__live_vars__Nonlocals_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__STATE_VARIABLE_ParStackVars_45_45, (MR_Integer) 0)));
#line 1000 "live_vars.m"
            ll_backend__live_vars__PrevSets_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__STATE_VARIABLE_ParStackVars_45_45, (MR_Integer) 1)));
#line 1000 "live_vars.m"
            ll_backend__live_vars__CurSet_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__STATE_VARIABLE_ParStackVars_45_45, (MR_Integer) 2)));
#line 1001 "live_vars.m"
            {
#line 1001 "live_vars.m"
              MR_Word ll_backend__live_vars__V_58_58;
#line 1001 "live_vars.m"
              MR_Word ll_backend__live_vars__V_59_59;

#line 1002 "live_vars.m"
              {
#line 1002 "live_vars.m"
                ll_backend__live_vars__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1002 "live_vars.m"
                MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_58_58, 0) = ((MR_Box) (ll_backend__live_vars__CurSet_56));
#line 1002 "live_vars.m"
                MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_58_58, 1) = ((MR_Box) (ll_backend__live_vars__PrevSets_55));
#line 1002 "live_vars.m"
              }
#line 1003 "live_vars.m"
              {
#line 1003 "live_vars.m"
                ll_backend__live_vars__V_59_59 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
              }
#line 1002 "live_vars.m"
              {
#line 1002 "live_vars.m"
                ll_backend__live_vars__STATE_VARIABLE_ParStackVars_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1002 "live_vars.m"
                MR_hl_field(MR_mktag(1), ll_backend__live_vars__STATE_VARIABLE_ParStackVars_46_46, 0) = ((MR_Box) (ll_backend__live_vars__Nonlocals_54));
#line 1002 "live_vars.m"
                MR_hl_field(MR_mktag(1), ll_backend__live_vars__STATE_VARIABLE_ParStackVars_46_46, 1) = ((MR_Box) (ll_backend__live_vars__V_58_58));
#line 1002 "live_vars.m"
                MR_hl_field(MR_mktag(1), ll_backend__live_vars__STATE_VARIABLE_ParStackVars_46_46, 2) = ((MR_Box) (ll_backend__live_vars__V_59_59));
#line 1002 "live_vars.m"
              }
#line 1001 "live_vars.m"
            }
#line 1000 "live_vars.m"
          }
#line 1000 "live_vars.m"
        else
#line 1005 "live_vars.m"
          {
#line 1005 "live_vars.m"
            {
#line 1005 "live_vars.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.live_vars", (MR_String) "predicate \140ll_backend.live_vars.par_stack_vars_next_par_conjunct\'/2", (MR_String) "expected parallel_conjunction/3");
#line 1005 "live_vars.m"
              return;
            }
#line 1005 "live_vars.m"
          }
#line 673 "live_vars.m"
        {
#line 673 "live_vars.m"
          ll_backend__live_vars__build_live_sets_in_par_conj_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_50, ll_backend__live_vars__Goals0_26, &ll_backend__live_vars__Goals_28, ll_backend__live_vars__ResumeVars0_3, ll_backend__live_vars__AllocData_4, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_43_43, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_6, ll_backend__live_vars__HeadVar__7_7, &ll_backend__live_vars___Liveness1_36, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_44_44, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_10, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_46_46, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_12);
        }
#line 667 "live_vars.m"
        {
#line 667 "live_vars.m"
          MR_Word base;
#line 667 "live_vars.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 667 "live_vars.m"
          *ll_backend__live_vars__HeadVar__2_2 = base;
#line 667 "live_vars.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__live_vars__Goal_27));
#line 667 "live_vars.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__live_vars__Goals_28));
#line 667 "live_vars.m"
        }
#line 669 "live_vars.m"
      }
#line 665 "live_vars.m"
  }
#line 658 "live_vars.m"
}

#line 630 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_conj_12_p_0(
#line 630 "live_vars.m"
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_60,
#line 630 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 630 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__2_2,
#line 630 "live_vars.m"
  MR_Word ll_backend__live_vars__ResumeVars0_3,
#line 630 "live_vars.m"
  MR_Word ll_backend__live_vars__AllocData_4,
#line 630 "live_vars.m"
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_5,
#line 630 "live_vars.m"
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_6,
#line 630 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_Liveness_0_7,
#line 630 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_Liveness_8,
#line 630 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_9,
#line 630 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_10,
#line 630 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_11,
#line 630 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_12)
#line 630 "live_vars.m"
{
#line 637 "live_vars.m"
  {
#line 637 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;

#line 637 "live_vars.m"
    if ((ll_backend__live_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 637 "live_vars.m"
      {
#line 637 "live_vars.m"
        *ll_backend__live_vars__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 638 "live_vars.m"
        *ll_backend__live_vars__STATE_VARIABLE_ParStackVars_12 = ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_11;
#line 637 "live_vars.m"
        *ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_10 = ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_9;
#line 637 "live_vars.m"
        *ll_backend__live_vars__STATE_VARIABLE_Liveness_8 = ll_backend__live_vars__STATE_VARIABLE_Liveness_0_7;
#line 637 "live_vars.m"
        *ll_backend__live_vars__STATE_VARIABLE_StackAlloc_6 = ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_5;
#line 637 "live_vars.m"
      }
#line 637 "live_vars.m"
    else
#line 640 "live_vars.m"
      {
#line 640 "live_vars.m"
        MR_Word ll_backend__live_vars__Goal0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 640 "live_vars.m"
        MR_Word ll_backend__live_vars__Goals0_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 640 "live_vars.m"
        MR_Word ll_backend__live_vars__Goal_29;
#line 640 "live_vars.m"
        MR_Word ll_backend__live_vars__Goals_30;
#line 642 "live_vars.m"
        MR_Word ll_backend__live_vars__GoalInfo_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__Goal0_27, (MR_Integer) 1)));
#line 642 "live_vars.m"
        MR_Word ll_backend__live_vars__InstMapDelta_39;
#line 642 "live_vars.m"
        MR_Word ll_backend__live_vars__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__Goal0_27, (MR_Integer) 0)));

#line 643 "live_vars.m"
        {
#line 643 "live_vars.m"
          ll_backend__live_vars__InstMapDelta_39 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__live_vars__GoalInfo_38);
        }
#line 644 "live_vars.m"
        {
#line 644 "live_vars.m"
          ll_backend__live_vars__succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(ll_backend__live_vars__InstMapDelta_39);
        }
#line 649 "live_vars.m"
        if (ll_backend__live_vars__succeeded)
#line 647 "live_vars.m"
          {
#line 646 "live_vars.m"
            {
#line 646 "live_vars.m"
              ll_backend__live_vars__build_live_sets_in_goal_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_60, ll_backend__live_vars__Goal0_27, &ll_backend__live_vars__Goal_29, ll_backend__live_vars__ResumeVars0_3, ll_backend__live_vars__AllocData_4, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_5, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_6, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_7, ll_backend__live_vars__STATE_VARIABLE_Liveness_8, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_9, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_10, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_11, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_12);
            }
#line 648 "live_vars.m"
            ll_backend__live_vars__Goals_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 647 "live_vars.m"
          }
#line 649 "live_vars.m"
        else
#line 651 "live_vars.m"
          {
#line 651 "live_vars.m"
            MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_52_52;
#line 651 "live_vars.m"
            MR_Word ll_backend__live_vars__STATE_VARIABLE_Liveness_53_53;
#line 651 "live_vars.m"
            MR_Word ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_54_54;
#line 651 "live_vars.m"
            MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_55_55;

#line 650 "live_vars.m"
            {
#line 650 "live_vars.m"
              ll_backend__live_vars__build_live_sets_in_goal_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_60, ll_backend__live_vars__Goal0_27, &ll_backend__live_vars__Goal_29, ll_backend__live_vars__ResumeVars0_3, ll_backend__live_vars__AllocData_4, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_5, &ll_backend__live_vars__STATE_VARIABLE_StackAlloc_52_52, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_7, &ll_backend__live_vars__STATE_VARIABLE_Liveness_53_53, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_9, &ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_54_54, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_11, &ll_backend__live_vars__STATE_VARIABLE_ParStackVars_55_55);
            }
#line 652 "live_vars.m"
            {
#line 652 "live_vars.m"
              ll_backend__live_vars__build_live_sets_in_conj_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_60, ll_backend__live_vars__Goals0_28, &ll_backend__live_vars__Goals_30, ll_backend__live_vars__ResumeVars0_3, ll_backend__live_vars__AllocData_4, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_52_52, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_6, ll_backend__live_vars__STATE_VARIABLE_Liveness_53_53, ll_backend__live_vars__STATE_VARIABLE_Liveness_8, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_54_54, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_10, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_55_55, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_12);
            }
#line 651 "live_vars.m"
          }
#line 639 "live_vars.m"
        {
#line 639 "live_vars.m"
          MR_Word base;
#line 639 "live_vars.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 639 "live_vars.m"
          *ll_backend__live_vars__HeadVar__2_2 = base;
#line 639 "live_vars.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__live_vars__Goal_29));
#line 639 "live_vars.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__live_vars__Goals_30));
#line 639 "live_vars.m"
        }
#line 640 "live_vars.m"
      }
#line 637 "live_vars.m"
  }
#line 630 "live_vars.m"
}

#line 579 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_call_12_p_0(
#line 579 "live_vars.m"
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_57,
#line 579 "live_vars.m"
  MR_Word ll_backend__live_vars__OutVars_13,
#line 579 "live_vars.m"
  MR_Word ll_backend__live_vars__GoalInfo0_14,
#line 579 "live_vars.m"
  MR_Word * ll_backend__live_vars__GoalInfo_15,
#line 579 "live_vars.m"
  MR_Word ll_backend__live_vars__ResumeVars0_16,
#line 579 "live_vars.m"
  MR_Word ll_backend__live_vars__AllocData_17,
#line 579 "live_vars.m"
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_27,
#line 579 "live_vars.m"
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_28,
#line 579 "live_vars.m"
  MR_Word ll_backend__live_vars__Liveness_19,
#line 579 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_29,
#line 579 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_30,
#line 579 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_31,
#line 579 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_32)
#line 579 "live_vars.m"
{
#line 586 "live_vars.m"
  {
#line 586 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;
#line 586 "live_vars.m"
    MR_Word ll_backend__live_vars__TypeCtorInfo_58_58 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 586 "live_vars.m"
    MR_Word ll_backend__live_vars__ForwardVars0_22;
#line 586 "live_vars.m"
    MR_Word ll_backend__live_vars__ForwardVars_23;
#line 586 "live_vars.m"
    MR_Word ll_backend__live_vars__Detism_24;
#line 586 "live_vars.m"
    MR_Word ll_backend__live_vars__NeedAcrossCall_25;
#line 586 "live_vars.m"
    MR_Word ll_backend__live_vars__CodeModel_26;
#line 586 "live_vars.m"
    MR_Word ll_backend__live_vars__V_33_33;
#line 586 "live_vars.m"
    MR_Word ll_backend__live_vars__V_44_44;
#line 592 "live_vars.m"
    MR_Word ll_backend__live_vars__V_42_42;
#line 592 "live_vars.m"
    MR_Word ll_backend__live_vars__V_43_43;
#line 592 "live_vars.m"
    MR_Word ll_backend__live_vars__V_45_45;
#line 592 "live_vars.m"
    MR_ArrayPtr ll_backend__live_vars__V_46_46;
#line 597 "live_vars.m"
    MR_Word ll_backend__live_vars__V_35_35;
#line 598 "live_vars.m"
    MR_Word ll_backend__live_vars__V_52_52;
#line 598 "live_vars.m"
    MR_Word ll_backend__live_vars__V_53_53;
#line 598 "live_vars.m"
    MR_Word ll_backend__live_vars__V_54_54;
#line 598 "live_vars.m"
    MR_Word ll_backend__live_vars__V_55_55;
#line 598 "live_vars.m"
    MR_ArrayPtr ll_backend__live_vars__V_56_56;
#line 3895 "ll_backend.live_vars.c"
    void MR_CALL (* ll_backend__live_vars__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 587 "live_vars.m"
    {
#line 587 "live_vars.m"
      parse_tree__set_of_var__difference_3_p_0(ll_backend__live_vars__TypeCtorInfo_58_58, ll_backend__live_vars__Liveness_19, ll_backend__live_vars__OutVars_13, &ll_backend__live_vars__ForwardVars0_22);
    }
#line 592 "live_vars.m"
    ll_backend__live_vars__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_17, (MR_Integer) 0)));
#line 592 "live_vars.m"
    ll_backend__live_vars__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_17, (MR_Integer) 1)));
#line 592 "live_vars.m"
    ll_backend__live_vars__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_17, (MR_Integer) 2)));
#line 592 "live_vars.m"
    ll_backend__live_vars__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_17, (MR_Integer) 3)));
#line 592 "live_vars.m"
    ll_backend__live_vars__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_17, (MR_Integer) 4)));
#line 592 "live_vars.m"
    ll_backend__live_vars__V_46_46 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_17, (MR_Integer) 5)));
#line 770 "live_vars.m"
    if ((ll_backend__live_vars__V_44_44 == (MR_Integer) 0))
#line 778 "live_vars.m"
      ll_backend__live_vars__ForwardVars_23 = ll_backend__live_vars__ForwardVars0_22;
#line 770 "live_vars.m"
    else
#line 770 "live_vars.m"
      {
#line 770 "live_vars.m"
        MR_Word ll_backend__live_vars__TypeCtorInfo_18_71;
#line 770 "live_vars.m"
        MR_Word ll_backend__live_vars__VarTypes_65;
#line 770 "live_vars.m"
        MR_Word ll_backend__live_vars__RttiVarMaps_66;
#line 770 "live_vars.m"
        MR_Word ll_backend__live_vars__TypeInfoVarsLive_67;
#line 770 "live_vars.m"
        MR_Word ll_backend__live_vars__TypeInfoVarsOut_68;
#line 770 "live_vars.m"
        MR_Word ll_backend__live_vars__STATE_VARIABLE_LiveVars_16_69;

#line 771 "live_vars.m"
        {
#line 771 "live_vars.m"
          hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__live_vars__V_33_33, &ll_backend__live_vars__VarTypes_65);
        }
#line 772 "live_vars.m"
        {
#line 772 "live_vars.m"
          hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ll_backend__live_vars__V_33_33, &ll_backend__live_vars__RttiVarMaps_66);
        }
#line 773 "live_vars.m"
        {
#line 773 "live_vars.m"
          hlds__hlds_rtti__get_typeinfo_vars_4_p_0(ll_backend__live_vars__ForwardVars0_22, ll_backend__live_vars__VarTypes_65, ll_backend__live_vars__RttiVarMaps_66, &ll_backend__live_vars__TypeInfoVarsLive_67);
        }
#line 774 "live_vars.m"
        {
#line 774 "live_vars.m"
          hlds__hlds_rtti__get_typeinfo_vars_4_p_0(ll_backend__live_vars__OutVars_13, ll_backend__live_vars__VarTypes_65, ll_backend__live_vars__RttiVarMaps_66, &ll_backend__live_vars__TypeInfoVarsOut_68);
        }
#line 3956 "ll_backend.live_vars.c"
        ll_backend__live_vars__TypeCtorInfo_18_71 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 775 "live_vars.m"
        {
#line 775 "live_vars.m"
          parse_tree__set_of_var__union_3_p_0(ll_backend__live_vars__TypeCtorInfo_18_71, ll_backend__live_vars__ForwardVars0_22, ll_backend__live_vars__TypeInfoVarsOut_68, &ll_backend__live_vars__STATE_VARIABLE_LiveVars_16_69);
        }
#line 776 "live_vars.m"
        {
#line 776 "live_vars.m"
          parse_tree__set_of_var__union_3_p_0(ll_backend__live_vars__TypeCtorInfo_18_71, ll_backend__live_vars__STATE_VARIABLE_LiveVars_16_69, ll_backend__live_vars__TypeInfoVarsLive_67, &ll_backend__live_vars__ForwardVars_23);
        }
#line 770 "live_vars.m"
      }
#line 595 "live_vars.m"
    {
#line 595 "live_vars.m"
      ll_backend__live_vars__Detism_24 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ll_backend__live_vars__GoalInfo0_14);
    }
#line 597 "live_vars.m"
    ll_backend__live_vars__succeeded = (ll_backend__live_vars__Detism_24 == (MR_Integer) 6);
#line 597 "live_vars.m"
    if (ll_backend__live_vars__succeeded)
#line 597 "live_vars.m"
      {
#line 598 "live_vars.m"
        ll_backend__live_vars__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_17, (MR_Integer) 0)));
#line 598 "live_vars.m"
        ll_backend__live_vars__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_17, (MR_Integer) 1)));
#line 598 "live_vars.m"
        ll_backend__live_vars__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_17, (MR_Integer) 2)));
#line 598 "live_vars.m"
        ll_backend__live_vars__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_17, (MR_Integer) 3)));
#line 598 "live_vars.m"
        ll_backend__live_vars__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_17, (MR_Integer) 4)));
#line 598 "live_vars.m"
        ll_backend__live_vars__V_56_56 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_17, (MR_Integer) 5)));
#line 598 "live_vars.m"
        ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_35_35 == (MR_Integer) 1);
#line 597 "live_vars.m"
      }
#line 602 "live_vars.m"
    if (ll_backend__live_vars__succeeded)
#line 600 "live_vars.m"
      {
#line 600 "live_vars.m"
        MR_Word ll_backend__live_vars__V_36_36;
#line 600 "live_vars.m"
        MR_Word ll_backend__live_vars__V_37_37;
#line 600 "live_vars.m"
        MR_Word ll_backend__live_vars__V_38_38;

#line 600 "live_vars.m"
        {
#line 600 "live_vars.m"
          ll_backend__live_vars__V_36_36 = parse_tree__set_of_var__init_0_f_0(ll_backend__live_vars__TypeCtorInfo_58_58);
        }
#line 600 "live_vars.m"
        {
#line 600 "live_vars.m"
          ll_backend__live_vars__V_37_37 = parse_tree__set_of_var__init_0_f_0(ll_backend__live_vars__TypeCtorInfo_58_58);
        }
#line 601 "live_vars.m"
        {
#line 601 "live_vars.m"
          ll_backend__live_vars__V_38_38 = parse_tree__set_of_var__init_0_f_0(ll_backend__live_vars__TypeCtorInfo_58_58);
        }
#line 600 "live_vars.m"
        {
#line 600 "live_vars.m"
          ll_backend__live_vars__NeedAcrossCall_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 600 "live_vars.m"
          MR_hl_field(MR_mktag(0), ll_backend__live_vars__NeedAcrossCall_25, 0) = ((MR_Box) (ll_backend__live_vars__V_36_36));
#line 600 "live_vars.m"
          MR_hl_field(MR_mktag(0), ll_backend__live_vars__NeedAcrossCall_25, 1) = ((MR_Box) (ll_backend__live_vars__V_37_37));
#line 600 "live_vars.m"
          MR_hl_field(MR_mktag(0), ll_backend__live_vars__NeedAcrossCall_25, 2) = ((MR_Box) (ll_backend__live_vars__V_38_38));
#line 600 "live_vars.m"
        }
#line 600 "live_vars.m"
      }
#line 602 "live_vars.m"
    else
#line 603 "live_vars.m"
      {
#line 603 "live_vars.m"
        ll_backend__live_vars__NeedAcrossCall_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 603 "live_vars.m"
        MR_hl_field(MR_mktag(0), ll_backend__live_vars__NeedAcrossCall_25, 0) = ((MR_Box) (ll_backend__live_vars__ForwardVars_23));
#line 603 "live_vars.m"
        MR_hl_field(MR_mktag(0), ll_backend__live_vars__NeedAcrossCall_25, 1) = ((MR_Box) (ll_backend__live_vars__ResumeVars0_16));
#line 603 "live_vars.m"
        MR_hl_field(MR_mktag(0), ll_backend__live_vars__NeedAcrossCall_25, 2) = ((MR_Box) (ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_29));
#line 603 "live_vars.m"
      }
#line 788 "live_vars.m"
    {
#line 788 "live_vars.m"
      hlds__hlds_llds__goal_info_set_need_across_call_3_p_0(ll_backend__live_vars__NeedAcrossCall_25, ll_backend__live_vars__GoalInfo0_14, ll_backend__live_vars__GoalInfo_15);
    }
#line 4056 "ll_backend.live_vars.c"
    ll_backend__live_vars__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_57, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4058 "ll_backend.live_vars.c"
    {
#line 4060 "ll_backend.live_vars.c"
      ll_backend__live_vars__func_0(((MR_Box) ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_57), ((MR_Box) (ll_backend__live_vars__NeedAcrossCall_25)), ((MR_Box) (ll_backend__live_vars__AllocData_17)), ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_27, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_28);
    }
#line 613 "live_vars.m"
    {
#line 613 "live_vars.m"
      ll_backend__live_vars__CodeModel_26 = hlds__code_model__goal_info_get_code_model_1_f_0(*ll_backend__live_vars__GoalInfo_15);
    }
#line 616 "live_vars.m"
    if ((ll_backend__live_vars__CodeModel_26 == (MR_Integer) 0))
#line 615 "live_vars.m"
      *ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_30 = ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_29;
#line 616 "live_vars.m"
    else
#line 616 "live_vars.m"
      if ((ll_backend__live_vars__CodeModel_26 == (MR_Integer) 2))
#line 620 "live_vars.m"
        {
#line 620 "live_vars.m"
          parse_tree__set_of_var__union_3_p_0(ll_backend__live_vars__TypeCtorInfo_58_58, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_29, ll_backend__live_vars__ForwardVars_23, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_30);
        }
#line 616 "live_vars.m"
      else
#line 617 "live_vars.m"
        *ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_30 = ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_29;
#line 626 "live_vars.m"
    {
#line 626 "live_vars.m"
      ll_backend__live_vars__par_stack_vars_accumulate_stack_vars_3_p_0(ll_backend__live_vars__ForwardVars_23, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_31, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_32);
#line 626 "live_vars.m"
      return;
    }
#line 586 "live_vars.m"
  }
#line 579 "live_vars.m"
}

#line 541 "live_vars.m"
static MR_Box MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_1(
#line 541 "live_vars.m"
  MR_Box ll_backend__live_vars__closure_arg,
#line 541 "live_vars.m"
  MR_Box ll_backend__live_vars__wrapper_arg_1)
#line 541 "live_vars.m"
{
#line 541 "live_vars.m"
  {
#line 541 "live_vars.m"
    MR_Box ll_backend__live_vars__wrapper_arg_2;
#line 541 "live_vars.m"
    MR_Box ll_backend__live_vars__closure = ll_backend__live_vars__closure_arg;
#line 541 "live_vars.m"
    MR_Word ll_backend__live_vars__conv0_HeadVar__2_2;

#line 541 "live_vars.m"
    {
#line 541 "live_vars.m"
      ll_backend__live_vars__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) ll_backend__live_vars__wrapper_arg_1));
    }
#line 541 "live_vars.m"
    ll_backend__live_vars__wrapper_arg_2 = ((MR_Box) (ll_backend__live_vars__conv0_HeadVar__2_2));
#line 541 "live_vars.m"
    return ll_backend__live_vars__wrapper_arg_2;
#line 541 "live_vars.m"
  }
#line 541 "live_vars.m"
}

#line 313 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_2(
#line 313 "live_vars.m"
  void * ll_backend__live_vars__env_ptr_arg)
#line 313 "live_vars.m"
{
#line 313 "live_vars.m"
  {
#line 313 "live_vars.m"
    struct ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0_s * ll_backend__live_vars__env_ptr = (struct ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0_s *) ll_backend__live_vars__env_ptr_arg;

#line 313 "live_vars.m"
    MR_builtin_longjmp((ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__commit_0, 1);
#line 313 "live_vars.m"
  }
#line 313 "live_vars.m"
}

#line 313 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_4(
#line 313 "live_vars.m"
  void * ll_backend__live_vars__env_ptr_arg)
#line 313 "live_vars.m"
{
#line 313 "live_vars.m"
  {
#line 313 "live_vars.m"
    struct ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0_s * ll_backend__live_vars__env_ptr = (struct ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0_s *) ll_backend__live_vars__env_ptr_arg;

#line 313 "live_vars.m"
    (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__Disjunct_236 = ((MR_Word) (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__conv1_Disjunct_236);
#line 313 "live_vars.m"
    {
#line 313 "live_vars.m"
      ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_3(ll_backend__live_vars__env_ptr);
#line 313 "live_vars.m"
      return;
    }
#line 313 "live_vars.m"
  }
#line 313 "live_vars.m"
}

#line 313 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_3(
#line 313 "live_vars.m"
  void * ll_backend__live_vars__env_ptr_arg)
#line 313 "live_vars.m"
{
#line 313 "live_vars.m"
  {
#line 313 "live_vars.m"
    struct ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0_s * ll_backend__live_vars__env_ptr = (struct ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0_s *) ll_backend__live_vars__env_ptr_arg;

#line 313 "live_vars.m"
    {
#line 314 "live_vars.m"
      MR_Word ll_backend__live_vars__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__Disjunct_236, (MR_Integer) 0)));
#line 317 "live_vars.m"
      MR_Word ll_backend__live_vars__V_46_46;

#line 314 "live_vars.m"
      (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__DisjunctGoalInfo_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__Disjunct_236, (MR_Integer) 1)));
#line 315 "live_vars.m"
      {
#line 315 "live_vars.m"
        hlds__hlds_llds__goal_info_get_resume_point_2_p_0((ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__DisjunctGoalInfo_44, &(ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__DisjunctResumePoint_45);
      }
#line 317 "live_vars.m"
      (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__succeeded = ((MR_tag((MR_Word) (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__DisjunctResumePoint_45)) == (MR_mktag((MR_Integer) 1)));
#line 317 "live_vars.m"
      if ((ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__succeeded)
#line 317 "live_vars.m"
        {
#line 317 "live_vars.m"
          {
#line 317 "live_vars.m"
            ll_backend__live_vars__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__DisjunctResumePoint_45, (MR_Integer) 0)));
#line 317 "live_vars.m"
            (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__Locs_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__DisjunctResumePoint_45, (MR_Integer) 1)));
#line 317 "live_vars.m"
          }
#line 313 "live_vars.m"
          {
#line 318 "live_vars.m"
            (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__V_218_218 = (MR_Integer) 1;
#line 318 "live_vars.m"
            {
#line 318 "live_vars.m"
              ll_backend__live_vars__resume_locs_include_stack_2_p_0((ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__Locs_47, &(ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__V_337_337);
            }
#line 318 "live_vars.m"
            (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__succeeded = ((ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__V_218_218 == (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__V_337_337);
#line 318 "live_vars.m"
            if ((ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__succeeded)
#line 318 "live_vars.m"
              {
#line 318 "live_vars.m"
                ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_2(ll_backend__live_vars__env_ptr);
#line 318 "live_vars.m"
                return;
              }
#line 313 "live_vars.m"
          }
#line 317 "live_vars.m"
        }
#line 313 "live_vars.m"
    }
#line 313 "live_vars.m"
  }
#line 313 "live_vars.m"
}

#line 313 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_5(
#line 313 "live_vars.m"
  void * ll_backend__live_vars__env_ptr_arg)
#line 313 "live_vars.m"
{
#line 313 "live_vars.m"
  {
#line 313 "live_vars.m"
    struct ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0_s * ll_backend__live_vars__env_ptr = (struct ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0_s *) ll_backend__live_vars__env_ptr_arg;

#line 313 "live_vars.m"
    if (MR_builtin_setjmp((ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__commit_0) == 0)
#line 313 "live_vars.m"
      {
#line 313 "live_vars.m"
        {
#line 313 "live_vars.m"
          {
#line 313 "live_vars.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, &(ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__conv1_Disjunct_236, (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__Goals_238, ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_4, ll_backend__live_vars__env_ptr);
          }
#line 313 "live_vars.m"
        }
#line 313 "live_vars.m"
        (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__succeeded = MR_FALSE;
#line 313 "live_vars.m"
      }
#line 313 "live_vars.m"
    else
#line 313 "live_vars.m"
      (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__succeeded = MR_TRUE;
#line 313 "live_vars.m"
  }
#line 313 "live_vars.m"
}

#line 232 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0(
#line 232 "live_vars.m"
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322,
#line 232 "live_vars.m"
  MR_Word ll_backend__live_vars__GoalExpr0_15,
#line 232 "live_vars.m"
  MR_Word * ll_backend__live_vars__GoalExpr_16,
#line 232 "live_vars.m"
  MR_Word ll_backend__live_vars__GoalInfo0_17,
#line 232 "live_vars.m"
  MR_Word * ll_backend__live_vars__GoalInfo_18,
#line 232 "live_vars.m"
  MR_Word ll_backend__live_vars__ResumeVars0_19,
#line 232 "live_vars.m"
  MR_Word ll_backend__live_vars__AllocData_20,
#line 232 "live_vars.m"
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142,
#line 232 "live_vars.m"
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143,
#line 232 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144,
#line 232 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_Liveness_145,
#line 232 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146,
#line 232 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147,
#line 232 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148,
#line 232 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149)
#line 232 "live_vars.m"
{
#line 232 "live_vars.m"
  {
#line 232 "live_vars.m"
    struct ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0_s ll_backend__live_vars__env;

#line 244 "live_vars.m"
    if (((MR_tag((MR_Word) ll_backend__live_vars__GoalExpr0_15)) == (MR_mktag((MR_Integer) 0))))
#line 366 "live_vars.m"
      {
#line 366 "live_vars.m"
        MR_Word ll_backend__live_vars__SubGoal0_66 = (MR_Word) MR_body(((MR_Word) ll_backend__live_vars__GoalExpr0_15), (MR_Integer) 0);
#line 366 "live_vars.m"
        MR_Word ll_backend__live_vars__SubGoal_67;

#line 367 "live_vars.m"
        {
#line 367 "live_vars.m"
          ll_backend__live_vars__build_live_sets_in_goal_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322, ll_backend__live_vars__SubGoal0_66, &ll_backend__live_vars__SubGoal_67, ll_backend__live_vars__ResumeVars0_19, ll_backend__live_vars__AllocData_20, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144, ll_backend__live_vars__STATE_VARIABLE_Liveness_145, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149);
        }
#line 369 "live_vars.m"
        *ll_backend__live_vars__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ll_backend__live_vars__SubGoal_67);
#line 370 "live_vars.m"
        *ll_backend__live_vars__GoalInfo_18 = ll_backend__live_vars__GoalInfo0_17;
#line 366 "live_vars.m"
      }
#line 244 "live_vars.m"
    else
#line 244 "live_vars.m"
      if (((MR_tag((MR_Word) ll_backend__live_vars__GoalExpr0_15)) == (MR_mktag((MR_Integer) 2))))
#line 481 "live_vars.m"
        {
#line 481 "live_vars.m"
          MR_Word ll_backend__live_vars__PredId_99 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 0)));
#line 481 "live_vars.m"
          MR_Integer ll_backend__live_vars__ProcId_100 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 1)));
#line 481 "live_vars.m"
          MR_Word ll_backend__live_vars__Builtin_101 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 3)));
#line 481 "live_vars.m"
          MR_Word ll_backend__live_vars__CallerProcInfo_104;
#line 481 "live_vars.m"
          MR_Word ll_backend__live_vars__CalleePredProcId_106;
#line 481 "live_vars.m"
          MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_163_163;
#line 481 "live_vars.m"
          MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_165_165;
#line 481 "live_vars.m"
          MR_Word ll_backend__live_vars__ArgVars_267 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 2)));
#line 481 "live_vars.m"
          MR_Word ll_backend__live_vars__ProcInfo_268;
#line 481 "live_vars.m"
          MR_Word ll_backend__live_vars__VarTypes_269;
#line 481 "live_vars.m"
          MR_Word ll_backend__live_vars__ModuleInfo_270;
#line 481 "live_vars.m"
          MR_Word ll_backend__live_vars__OutVars_272;
#line 481 "live_vars.m"
          MR_Word ll_backend__live_vars__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 4)));
#line 481 "live_vars.m"
          MR_Word ll_backend__live_vars__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 5)));
#line 483 "live_vars.m"
          MR_Word ll_backend__live_vars__V_298_298;
#line 483 "live_vars.m"
          MR_Word ll_backend__live_vars__V_299_299;
#line 483 "live_vars.m"
          MR_Word ll_backend__live_vars__V_300_300;
#line 483 "live_vars.m"
          MR_ArrayPtr ll_backend__live_vars__V_301_301;
#line 486 "live_vars.m"
          MR_Word ll_backend__live_vars__V_105_105;
#line 487 "live_vars.m"
          MR_Word ll_backend__live_vars___InVars_265;
#line 487 "live_vars.m"
          MR_Word ll_backend__live_vars___UnusedVars_266;
#line 500 "live_vars.m"
          MR_Word ll_backend__live_vars__V_307_307;
#line 500 "live_vars.m"
          MR_Word ll_backend__live_vars__V_308_308;
#line 500 "live_vars.m"
          MR_Word ll_backend__live_vars__V_309_309;
#line 500 "live_vars.m"
          MR_Word ll_backend__live_vars__V_310_310;
#line 500 "live_vars.m"
          MR_ArrayPtr ll_backend__live_vars__V_311_311;
#line 501 "live_vars.m"
          MR_Word ll_backend__live_vars__V_338_338;
#line 501 "live_vars.m"
          MR_Integer ll_backend__live_vars__V_339_339;

#line 482 "live_vars.m"
          *ll_backend__live_vars__GoalExpr_16 = ll_backend__live_vars__GoalExpr0_15;
#line 483 "live_vars.m"
          ll_backend__live_vars__ModuleInfo_270 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 0)));
#line 483 "live_vars.m"
          ll_backend__live_vars__CallerProcInfo_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 1)));
#line 483 "live_vars.m"
          ll_backend__live_vars__V_298_298 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 2)));
#line 483 "live_vars.m"
          ll_backend__live_vars__V_299_299 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 3)));
#line 483 "live_vars.m"
          ll_backend__live_vars__V_300_300 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 4)));
#line 483 "live_vars.m"
          ll_backend__live_vars__V_301_301 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 5)));
#line 485 "live_vars.m"
          {
#line 485 "live_vars.m"
            hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__live_vars__CallerProcInfo_104, &ll_backend__live_vars__VarTypes_269);
          }
#line 486 "live_vars.m"
          {
#line 486 "live_vars.m"
            hlds__hlds_module__module_info_pred_proc_info_5_p_0(ll_backend__live_vars__ModuleInfo_270, ll_backend__live_vars__PredId_99, ll_backend__live_vars__ProcId_100, &ll_backend__live_vars__V_105_105, &ll_backend__live_vars__ProcInfo_268);
          }
#line 487 "live_vars.m"
          {
#line 487 "live_vars.m"
            hlds__arg_info__partition_proc_call_args_7_p_0(ll_backend__live_vars__ProcInfo_268, ll_backend__live_vars__VarTypes_269, ll_backend__live_vars__ModuleInfo_270, ll_backend__live_vars__ArgVars_267, &ll_backend__live_vars___InVars_265, &ll_backend__live_vars__OutVars_272, &ll_backend__live_vars___UnusedVars_266);
          }
#line 492 "live_vars.m"
          if ((ll_backend__live_vars__Builtin_101 == (MR_Integer) 0))
#line 490 "live_vars.m"
            {
#line 491 "live_vars.m"
              *ll_backend__live_vars__GoalInfo_18 = ll_backend__live_vars__GoalInfo0_17;
#line 491 "live_vars.m"
              ll_backend__live_vars__STATE_VARIABLE_StackAlloc_163_163 = ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142;
#line 491 "live_vars.m"
              *ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147 = ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146;
#line 491 "live_vars.m"
              ll_backend__live_vars__STATE_VARIABLE_ParStackVars_165_165 = ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148;
#line 490 "live_vars.m"
            }
#line 492 "live_vars.m"
          else
#line 495 "live_vars.m"
            {
#line 495 "live_vars.m"
              MR_Word ll_backend__live_vars__V_162_162;

#line 496 "live_vars.m"
              {
#line 496 "live_vars.m"
                ll_backend__live_vars__V_162_162 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__live_vars__OutVars_272);
              }
#line 496 "live_vars.m"
              {
#line 496 "live_vars.m"
                ll_backend__live_vars__build_live_sets_in_call_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322, ll_backend__live_vars__V_162_162, ll_backend__live_vars__GoalInfo0_17, ll_backend__live_vars__GoalInfo_18, ll_backend__live_vars__ResumeVars0_19, ll_backend__live_vars__AllocData_20, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142, &ll_backend__live_vars__STATE_VARIABLE_StackAlloc_163_163, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148, &ll_backend__live_vars__STATE_VARIABLE_ParStackVars_165_165);
              }
#line 495 "live_vars.m"
            }
#line 500 "live_vars.m"
          ll_backend__live_vars__V_307_307 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 0)));
#line 500 "live_vars.m"
          ll_backend__live_vars__V_308_308 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 1)));
#line 500 "live_vars.m"
          ll_backend__live_vars__CalleePredProcId_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 2)));
#line 500 "live_vars.m"
          ll_backend__live_vars__V_309_309 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 3)));
#line 500 "live_vars.m"
          ll_backend__live_vars__V_310_310 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 4)));
#line 500 "live_vars.m"
          ll_backend__live_vars__V_311_311 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 5)));
#line 501 "live_vars.m"
          ll_backend__live_vars__V_338_338 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__CalleePredProcId_106, (MR_Integer) 0)));
#line 501 "live_vars.m"
          ll_backend__live_vars__V_339_339 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__CalleePredProcId_106, (MR_Integer) 1)));
#line 501 "live_vars.m"
          {
#line 501 "live_vars.m"
            (ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ll_backend__live_vars__PredId_99, ll_backend__live_vars__V_338_338);
          }
#line 501 "live_vars.m"
          if ((ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__succeeded)
#line 501 "live_vars.m"
            (ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__succeeded = (ll_backend__live_vars__ProcId_100 == ll_backend__live_vars__V_339_339);
#line 516 "live_vars.m"
          if ((ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__succeeded)
#line 507 "live_vars.m"
            {
#line 507 "live_vars.m"
              MR_Word ll_backend__live_vars__MaybeNeedLC_107;
#line 507 "live_vars.m"
              MR_Word ll_backend__live_vars__DelayDeathSet_108;

#line 506 "live_vars.m"
              {
#line 506 "live_vars.m"
                ll_backend__live_vars__par_stack_vars_recursive_call_4_p_0(&ll_backend__live_vars__MaybeNeedLC_107, &ll_backend__live_vars__DelayDeathSet_108, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_165_165, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149);
              }
#line 512 "live_vars.m"
              if ((ll_backend__live_vars__MaybeNeedLC_107 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 513 "live_vars.m"
                *ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143 = ll_backend__live_vars__STATE_VARIABLE_StackAlloc_163_163;
#line 512 "live_vars.m"
              else
#line 509 "live_vars.m"
                {
#line 509 "live_vars.m"
                  MR_Word ll_backend__live_vars__NeedLC_109 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__MaybeNeedLC_107, (MR_Integer) 0)));

#line 510 "live_vars.m"
                  {
#line 510 "live_vars.m"
                    ll_backend__live_vars__at_recursive_call_for_loop_control_4_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322, ll_backend__live_vars__NeedLC_109, ll_backend__live_vars__AllocData_20, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_163_163, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143);
                  }
#line 509 "live_vars.m"
                }
#line 515 "live_vars.m"
              {
#line 515 "live_vars.m"
                *ll_backend__live_vars__STATE_VARIABLE_Liveness_145 = parse_tree__set_of_var__difference_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144, ll_backend__live_vars__DelayDeathSet_108);
              }
#line 507 "live_vars.m"
            }
#line 516 "live_vars.m"
          else
#line 517 "live_vars.m"
            {
#line 517 "live_vars.m"
              *ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149 = ll_backend__live_vars__STATE_VARIABLE_ParStackVars_165_165;
#line 517 "live_vars.m"
              *ll_backend__live_vars__STATE_VARIABLE_Liveness_145 = ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144;
#line 517 "live_vars.m"
              *ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143 = ll_backend__live_vars__STATE_VARIABLE_StackAlloc_163_163;
#line 517 "live_vars.m"
            }
#line 481 "live_vars.m"
        }
#line 244 "live_vars.m"
      else
#line 244 "live_vars.m"
        if (((MR_tag((MR_Word) ll_backend__live_vars__GoalExpr0_15)) == (MR_mktag((MR_Integer) 1))))
#line 520 "live_vars.m"
          {
#line 520 "live_vars.m"
            MR_Word ll_backend__live_vars__Unification_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 3)));
#line 520 "live_vars.m"
            MR_Word ll_backend__live_vars__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 0)));
#line 520 "live_vars.m"
            MR_Word ll_backend__live_vars__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 1)));
#line 520 "live_vars.m"
            MR_Word ll_backend__live_vars__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 2)));
#line 520 "live_vars.m"
            MR_Word ll_backend__live_vars__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 4)));

#line 521 "live_vars.m"
            *ll_backend__live_vars__GoalExpr_16 = ll_backend__live_vars__GoalExpr0_15;
#line 522 "live_vars.m"
            *ll_backend__live_vars__GoalInfo_18 = ll_backend__live_vars__GoalInfo0_17;
#line 529 "live_vars.m"
            if (((MR_tag((MR_Word) ll_backend__live_vars__Unification_113)) == (MR_mktag((MR_Integer) 2))))
#line 526 "live_vars.m"
              {
#line 526 "live_vars.m"
              }
#line 529 "live_vars.m"
            else
#line 529 "live_vars.m"
              if (((MR_tag((MR_Word) ll_backend__live_vars__Unification_113)) == (MR_mktag((MR_Integer) 0))))
#line 524 "live_vars.m"
                {
#line 524 "live_vars.m"
                }
#line 529 "live_vars.m"
              else
#line 529 "live_vars.m"
                if (((MR_tag((MR_Word) ll_backend__live_vars__Unification_113)) == (MR_mktag((MR_Integer) 1))))
#line 525 "live_vars.m"
                  {
#line 525 "live_vars.m"
                  }
#line 529 "live_vars.m"
                else
#line 529 "live_vars.m"
                  if (((((MR_tag((MR_Word) ll_backend__live_vars__Unification_113)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__Unification_113, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 530 "live_vars.m"
                    {
#line 531 "live_vars.m"
                      {
#line 531 "live_vars.m"
                        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.live_vars", (MR_String) "predicate \140ll_backend.live_vars.build_live_sets_in_goal_2\'/14", (MR_String) "complicated_unify");
#line 531 "live_vars.m"
                        return;
                      }
#line 530 "live_vars.m"
                    }
#line 529 "live_vars.m"
                  else
#line 527 "live_vars.m"
                    {
#line 527 "live_vars.m"
                    }
#line 531 "live_vars.m"
            *ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143 = ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142;
#line 531 "live_vars.m"
            *ll_backend__live_vars__STATE_VARIABLE_Liveness_145 = ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144;
#line 531 "live_vars.m"
            *ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147 = ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146;
#line 531 "live_vars.m"
            *ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149 = ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148;
#line 520 "live_vars.m"
          }
#line 244 "live_vars.m"
        else
#line 244 "live_vars.m"
          if (((((MR_tag((MR_Word) ll_backend__live_vars__GoalExpr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 535 "live_vars.m"
            {
#line 535 "live_vars.m"
              MR_Word ll_backend__live_vars__Attributes_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 1)));
#line 535 "live_vars.m"
              MR_Word ll_backend__live_vars__Args_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 4)));
#line 535 "live_vars.m"
              MR_Word ll_backend__live_vars__CodeModel_276;
#line 535 "live_vars.m"
              MR_Word ll_backend__live_vars__ArgVars_277;
#line 535 "live_vars.m"
              MR_Word ll_backend__live_vars__ProcInfo_278;
#line 535 "live_vars.m"
              MR_Word ll_backend__live_vars__VarTypes_279;
#line 535 "live_vars.m"
              MR_Word ll_backend__live_vars__ModuleInfo_280;
#line 535 "live_vars.m"
              MR_Word ll_backend__live_vars__OutVars_282;
#line 535 "live_vars.m"
              MR_Word ll_backend__live_vars__PredId_284 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 2)));
#line 535 "live_vars.m"
              MR_Integer ll_backend__live_vars__ProcId_285 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 3)));
#line 535 "live_vars.m"
              MR_Word ll_backend__live_vars__CallerProcInfo_286;
#line 534 "live_vars.m"
              MR_Word ll_backend__live_vars__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 5)));
#line 534 "live_vars.m"
              MR_Word ll_backend__live_vars__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 6)));
#line 534 "live_vars.m"
              MR_Word ll_backend__live_vars__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 7)));
#line 537 "live_vars.m"
              MR_Word ll_backend__live_vars__V_313_313;
#line 537 "live_vars.m"
              MR_Word ll_backend__live_vars__V_314_314;
#line 537 "live_vars.m"
              MR_Word ll_backend__live_vars__V_315_315;
#line 537 "live_vars.m"
              MR_ArrayPtr ll_backend__live_vars__V_316_316;
#line 540 "live_vars.m"
              MR_Word ll_backend__live_vars__V_140_140;
#line 542 "live_vars.m"
              MR_Word ll_backend__live_vars___InVars_274;
#line 542 "live_vars.m"
              MR_Word ll_backend__live_vars___UnusedVars_275;
#line 551 "live_vars.m"
              MR_Word ll_backend__live_vars__V_154_154;

#line 536 "live_vars.m"
              *ll_backend__live_vars__GoalExpr_16 = ll_backend__live_vars__GoalExpr0_15;
#line 537 "live_vars.m"
              ll_backend__live_vars__ModuleInfo_280 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 0)));
#line 537 "live_vars.m"
              ll_backend__live_vars__CallerProcInfo_286 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 1)));
#line 537 "live_vars.m"
              ll_backend__live_vars__V_313_313 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 2)));
#line 537 "live_vars.m"
              ll_backend__live_vars__V_314_314 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 3)));
#line 537 "live_vars.m"
              ll_backend__live_vars__V_315_315 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 4)));
#line 537 "live_vars.m"
              ll_backend__live_vars__V_316_316 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 5)));
#line 539 "live_vars.m"
              {
#line 539 "live_vars.m"
                hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__live_vars__CallerProcInfo_286, &ll_backend__live_vars__VarTypes_279);
              }
#line 540 "live_vars.m"
              {
#line 540 "live_vars.m"
                hlds__hlds_module__module_info_pred_proc_info_5_p_0(ll_backend__live_vars__ModuleInfo_280, ll_backend__live_vars__PredId_284, ll_backend__live_vars__ProcId_285, &ll_backend__live_vars__V_140_140, &ll_backend__live_vars__ProcInfo_278);
              }
#line 541 "live_vars.m"
              {
#line 541 "live_vars.m"
                ll_backend__live_vars__ArgVars_277 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, (MR_Word) &ll_backend__live_vars_scalar_common_1[0], (MR_Word) &ll_backend__live_vars_scalar_common_2[3], ll_backend__live_vars__Args_136);
              }
#line 542 "live_vars.m"
              {
#line 542 "live_vars.m"
                hlds__arg_info__partition_proc_call_args_7_p_0(ll_backend__live_vars__ProcInfo_278, ll_backend__live_vars__VarTypes_279, ll_backend__live_vars__ModuleInfo_280, ll_backend__live_vars__ArgVars_277, &ll_backend__live_vars___InVars_274, &ll_backend__live_vars__OutVars_282, &ll_backend__live_vars___UnusedVars_275);
              }
#line 544 "live_vars.m"
              {
#line 544 "live_vars.m"
                ll_backend__live_vars__CodeModel_276 = hlds__code_model__goal_info_get_code_model_1_f_0(ll_backend__live_vars__GoalInfo0_17);
              }
#line 551 "live_vars.m"
              (ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__succeeded = (ll_backend__live_vars__CodeModel_276 == (MR_Integer) 2);
#line 551 "live_vars.m"
              (ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__succeeded = !((ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__succeeded);
#line 551 "live_vars.m"
              if ((ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__succeeded)
#line 551 "live_vars.m"
                {
#line 552 "live_vars.m"
                  {
#line 552 "live_vars.m"
                    ll_backend__live_vars__V_154_154 = parse_tree__prog_data__get_may_call_mercury_1_f_0(ll_backend__live_vars__Attributes_135);
                  }
#line 552 "live_vars.m"
                  (ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__succeeded = (ll_backend__live_vars__V_154_154 == (MR_Integer) 1);
#line 551 "live_vars.m"
                }
#line 555 "live_vars.m"
              if ((ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__succeeded)
#line 554 "live_vars.m"
                {
#line 554 "live_vars.m"
                  *ll_backend__live_vars__GoalInfo_18 = ll_backend__live_vars__GoalInfo0_17;
#line 554 "live_vars.m"
                  *ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149 = ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148;
#line 554 "live_vars.m"
                  *ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147 = ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146;
#line 554 "live_vars.m"
                  *ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143 = ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142;
#line 554 "live_vars.m"
                }
#line 555 "live_vars.m"
              else
#line 561 "live_vars.m"
                {
#line 561 "live_vars.m"
                  MR_Word ll_backend__live_vars__V_155_155;

#line 561 "live_vars.m"
                  {
#line 561 "live_vars.m"
                    ll_backend__live_vars__V_155_155 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__live_vars__OutVars_282);
                  }
#line 561 "live_vars.m"
                  {
#line 561 "live_vars.m"
                    ll_backend__live_vars__build_live_sets_in_call_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322, ll_backend__live_vars__V_155_155, ll_backend__live_vars__GoalInfo0_17, ll_backend__live_vars__GoalInfo_18, ll_backend__live_vars__ResumeVars0_19, ll_backend__live_vars__AllocData_20, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149);
                  }
#line 561 "live_vars.m"
                }
#line 561 "live_vars.m"
              *ll_backend__live_vars__STATE_VARIABLE_Liveness_145 = ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144;
#line 535 "live_vars.m"
            }
#line 244 "live_vars.m"
          else
#line 244 "live_vars.m"
            if (((((MR_tag((MR_Word) ll_backend__live_vars__GoalExpr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 244 "live_vars.m"
              {
#line 244 "live_vars.m"
                MR_Word ll_backend__live_vars__ConjType_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 1)));
#line 244 "live_vars.m"
                MR_Word ll_backend__live_vars__Goals0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 2)));
#line 244 "live_vars.m"
                MR_Word ll_backend__live_vars__Goals_27;

#line 250 "live_vars.m"
                if ((ll_backend__live_vars__ConjType_25 == (MR_Integer) 1))
#line 251 "live_vars.m"
                  {
#line 251 "live_vars.m"
                    MR_Word ll_backend__live_vars__TypeCtorInfo_323_323;
#line 251 "live_vars.m"
                    MR_Word ll_backend__live_vars__NonLocals_28;
#line 251 "live_vars.m"
                    MR_Word ll_backend__live_vars__LiveSet_29;
#line 251 "live_vars.m"
                    MR_Word ll_backend__live_vars__OuterNonLocals_30;
#line 251 "live_vars.m"
                    MR_Word ll_backend__live_vars__InnerStackVars_32;
#line 251 "live_vars.m"
                    MR_Word ll_backend__live_vars__InnerNonLocals_33;
#line 251 "live_vars.m"
                    MR_Word ll_backend__live_vars__NeedInParConj_34;
#line 251 "live_vars.m"
                    MR_Word ll_backend__live_vars__V_220_220;
#line 251 "live_vars.m"
                    MR_Word ll_backend__live_vars__V_221_221;
#line 251 "live_vars.m"
                    MR_Word ll_backend__live_vars__V_222_222;
#line 251 "live_vars.m"
                    MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_224_224;
#line 251 "live_vars.m"
                    MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_225_225;
#line 251 "live_vars.m"
                    MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_228_228;
#line 251 "live_vars.m"
                    MR_Word ll_backend__live_vars__V_229_229;

#line 261 "live_vars.m"
                    {
#line 261 "live_vars.m"
                      ll_backend__live_vars__NonLocals_28 = hlds__hlds_goal__goal_info_get_code_gen_nonlocals_1_f_0(ll_backend__live_vars__GoalInfo0_17);
                    }
#line 4815 "ll_backend.live_vars.c"
                    ll_backend__live_vars__TypeCtorInfo_323_323 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 263 "live_vars.m"
                    {
#line 263 "live_vars.m"
                      ll_backend__live_vars__V_222_222 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 263 "live_vars.m"
                      MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_222_222, 0) = ((MR_Box) (ll_backend__live_vars__ResumeVars0_19));
#line 263 "live_vars.m"
                      MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_222_222, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 263 "live_vars.m"
                    }
#line 263 "live_vars.m"
                    {
#line 263 "live_vars.m"
                      ll_backend__live_vars__V_221_221 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 263 "live_vars.m"
                      MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_221_221, 0) = ((MR_Box) (ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144));
#line 263 "live_vars.m"
                      MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_221_221, 1) = ((MR_Box) (ll_backend__live_vars__V_222_222));
#line 263 "live_vars.m"
                    }
#line 263 "live_vars.m"
                    {
#line 263 "live_vars.m"
                      ll_backend__live_vars__V_220_220 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 263 "live_vars.m"
                      MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_220_220, 0) = ((MR_Box) (ll_backend__live_vars__NonLocals_28));
#line 263 "live_vars.m"
                      MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_220_220, 1) = ((MR_Box) (ll_backend__live_vars__V_221_221));
#line 263 "live_vars.m"
                    }
#line 263 "live_vars.m"
                    {
#line 263 "live_vars.m"
                      ll_backend__live_vars__LiveSet_29 = parse_tree__set_of_var__union_list_1_f_0(ll_backend__live_vars__TypeCtorInfo_323_323, ll_backend__live_vars__V_220_220);
                    }
#line 265 "live_vars.m"
                    {
#line 265 "live_vars.m"
                      ll_backend__live_vars__par_stack_vars_get_nonlocals_2_p_0(ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148, &ll_backend__live_vars__OuterNonLocals_30);
                    }
#line 268 "live_vars.m"
                    {
#line 268 "live_vars.m"
                      ll_backend__live_vars__par_stack_vars_start_parallel_conjunction_3_p_0(ll_backend__live_vars__LiveSet_29, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148, &ll_backend__live_vars__STATE_VARIABLE_ParStackVars_224_224);
                    }
#line 269 "live_vars.m"
                    {
#line 269 "live_vars.m"
                      ll_backend__live_vars__build_live_sets_in_par_conj_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322, ll_backend__live_vars__Goals0_26, &ll_backend__live_vars__Goals_27, ll_backend__live_vars__ResumeVars0_19, ll_backend__live_vars__AllocData_20, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142, &ll_backend__live_vars__STATE_VARIABLE_StackAlloc_225_225, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144, ll_backend__live_vars__STATE_VARIABLE_Liveness_145, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_224_224, &ll_backend__live_vars__STATE_VARIABLE_ParStackVars_228_228);
                    }
#line 272 "live_vars.m"
                    {
#line 272 "live_vars.m"
                      ll_backend__live_vars__par_stack_vars_get_stackvars_2_p_0(ll_backend__live_vars__STATE_VARIABLE_ParStackVars_228_228, &ll_backend__live_vars__InnerStackVars_32);
                    }
#line 279 "live_vars.m"
                    {
#line 279 "live_vars.m"
                      ll_backend__live_vars__InnerNonLocals_33 = parse_tree__set_of_var__union_2_f_0(ll_backend__live_vars__TypeCtorInfo_323_323, ll_backend__live_vars__LiveSet_29, ll_backend__live_vars__OuterNonLocals_30);
                    }
#line 280 "live_vars.m"
                    {
#line 280 "live_vars.m"
                      ll_backend__live_vars__V_229_229 = parse_tree__set_of_var__union_2_f_0(ll_backend__live_vars__TypeCtorInfo_323_323, ll_backend__live_vars__InnerNonLocals_33, ll_backend__live_vars__InnerStackVars_32);
                    }
#line 280 "live_vars.m"
                    ll_backend__live_vars__NeedInParConj_34 = (MR_Word) ll_backend__live_vars__V_229_229;
#line 282 "live_vars.m"
                    {
#line 282 "live_vars.m"
                      ll_backend__live_vars__record_par_conj_6_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322, ll_backend__live_vars__NeedInParConj_34, ll_backend__live_vars__AllocData_20, ll_backend__live_vars__GoalInfo0_17, ll_backend__live_vars__GoalInfo_18, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_225_225, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143);
                    }
#line 285 "live_vars.m"
                    {
#line 285 "live_vars.m"
                      ll_backend__live_vars__par_stack_vars_end_parallel_conjunction_4_p_0(ll_backend__live_vars__LiveSet_29, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_228_228, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149);
                    }
#line 251 "live_vars.m"
                  }
#line 250 "live_vars.m"
                else
#line 246 "live_vars.m"
                  {
#line 247 "live_vars.m"
                    *ll_backend__live_vars__GoalInfo_18 = ll_backend__live_vars__GoalInfo0_17;
#line 248 "live_vars.m"
                    {
#line 248 "live_vars.m"
                      ll_backend__live_vars__build_live_sets_in_conj_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322, ll_backend__live_vars__Goals0_26, &ll_backend__live_vars__Goals_27, ll_backend__live_vars__ResumeVars0_19, ll_backend__live_vars__AllocData_20, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144, ll_backend__live_vars__STATE_VARIABLE_Liveness_145, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149);
                    }
#line 246 "live_vars.m"
                  }
#line 288 "live_vars.m"
                {
#line 288 "live_vars.m"
                  MR_Word base;
#line 288 "live_vars.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 288 "live_vars.m"
                  *ll_backend__live_vars__GoalExpr_16 = base;
#line 288 "live_vars.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 288 "live_vars.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__live_vars__ConjType_25));
#line 288 "live_vars.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__live_vars__Goals_27));
#line 288 "live_vars.m"
                }
#line 244 "live_vars.m"
              }
#line 244 "live_vars.m"
            else
#line 244 "live_vars.m"
              if (((((MR_tag((MR_Word) ll_backend__live_vars__GoalExpr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 290 "live_vars.m"
                {
#line 290 "live_vars.m"
                  MR_Word ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_215_215;
#line 290 "live_vars.m"
                  MR_Word ll_backend__live_vars__Goals0_237 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 1)));

#line 291 "live_vars.m"
                  {
#line 291 "live_vars.m"
                    ll_backend__live_vars__build_live_sets_in_disj_13_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322, ll_backend__live_vars__Goals0_237, &(ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__Goals_238, ll_backend__live_vars__GoalInfo0_17, ll_backend__live_vars__ResumeVars0_19, ll_backend__live_vars__AllocData_20, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144, ll_backend__live_vars__STATE_VARIABLE_Liveness_145, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146, &ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_215_215, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149);
                  }
#line 335 "live_vars.m"
                  if (((ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__Goals_238 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 336 "live_vars.m"
                    *ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147 = ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_215_215;
#line 335 "live_vars.m"
                  else
#line 295 "live_vars.m"
                    {
#line 295 "live_vars.m"
                      MR_Word ll_backend__live_vars__FirstGoal_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__Goals_238, (MR_Integer) 0)));
#line 295 "live_vars.m"
                      MR_Word ll_backend__live_vars__FirstGoalInfo_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__FirstGoal_35, (MR_Integer) 1)));
#line 295 "live_vars.m"
                      MR_Word ll_backend__live_vars__ResumePoint_39;
#line 295 "live_vars.m"
                      MR_Word ll_backend__live_vars__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__Goals_238, (MR_Integer) 1)));
#line 296 "live_vars.m"
                      MR_Word ll_backend__live_vars__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__FirstGoal_35, (MR_Integer) 0)));

#line 297 "live_vars.m"
                      {
#line 297 "live_vars.m"
                        hlds__hlds_llds__goal_info_get_resume_point_2_p_0(ll_backend__live_vars__FirstGoalInfo_38, &ll_backend__live_vars__ResumePoint_39);
                      }
#line 326 "live_vars.m"
                      if ((ll_backend__live_vars__ResumePoint_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 333 "live_vars.m"
                        *ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147 = ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_215_215;
#line 326 "live_vars.m"
                      else
#line 299 "live_vars.m"
                        {
#line 299 "live_vars.m"
                          MR_Word ll_backend__live_vars__ResumeVars_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__ResumePoint_39, (MR_Integer) 0)));
#line 299 "live_vars.m"
                          MR_Word ll_backend__live_vars___Locs_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__ResumePoint_39, (MR_Integer) 1)));
#line 311 "live_vars.m"
                          MR_Word ll_backend__live_vars__V_217_217;

#line 311 "live_vars.m"
                          {
#line 311 "live_vars.m"
                            ll_backend__live_vars__V_217_217 = hlds__code_model__goal_info_get_code_model_1_f_0(ll_backend__live_vars__GoalInfo0_17);
                          }
#line 311 "live_vars.m"
                          (ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__succeeded = (ll_backend__live_vars__V_217_217 == (MR_Integer) 2);
#line 311 "live_vars.m"
                          if ((ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__succeeded)
#line 313 "live_vars.m"
                            {
#line 313 "live_vars.m"
                              ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_5(&ll_backend__live_vars__env);
                            }
#line 323 "live_vars.m"
                          if ((ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__succeeded)
#line 321 "live_vars.m"
                            {
#line 321 "live_vars.m"
                              {
#line 321 "live_vars.m"
                                parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_215_215, ll_backend__live_vars__ResumeVars_40, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147);
                              }
#line 321 "live_vars.m"
                            }
#line 323 "live_vars.m"
                          else
#line 321 "live_vars.m"
                            *ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147 = ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_215_215;
#line 299 "live_vars.m"
                        }
#line 295 "live_vars.m"
                    }
#line 338 "live_vars.m"
                  {
#line 338 "live_vars.m"
                    MR_Word base;
#line 338 "live_vars.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 338 "live_vars.m"
                    *ll_backend__live_vars__GoalExpr_16 = base;
#line 338 "live_vars.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 338 "live_vars.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__Goals_238));
#line 338 "live_vars.m"
                  }
#line 339 "live_vars.m"
                  *ll_backend__live_vars__GoalInfo_18 = ll_backend__live_vars__GoalInfo0_17;
#line 290 "live_vars.m"
                }
#line 244 "live_vars.m"
              else
#line 244 "live_vars.m"
                if (((((MR_tag((MR_Word) ll_backend__live_vars__GoalExpr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 460 "live_vars.m"
                  {
#line 460 "live_vars.m"
                    MR_Word ll_backend__live_vars__GenericCall_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 1)));
#line 460 "live_vars.m"
                    MR_Word ll_backend__live_vars__ArgVars_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 2)));
#line 460 "live_vars.m"
                    MR_Word ll_backend__live_vars__Modes_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 3)));
#line 460 "live_vars.m"
                    MR_Word ll_backend__live_vars__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 4)));
#line 460 "live_vars.m"
                    MR_Word ll_backend__live_vars__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 5)));

#line 461 "live_vars.m"
                    *ll_backend__live_vars__GoalExpr_16 = ll_backend__live_vars__GoalExpr0_15;
#line 465 "live_vars.m"
                    if (((MR_tag((MR_Word) ll_backend__live_vars__GenericCall_77)) == (MR_mktag((MR_Integer) 3))))
#line 463 "live_vars.m"
                      {
#line 464 "live_vars.m"
                        *ll_backend__live_vars__GoalInfo_18 = ll_backend__live_vars__GoalInfo0_17;
#line 464 "live_vars.m"
                        *ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143 = ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142;
#line 464 "live_vars.m"
                        *ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147 = ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146;
#line 464 "live_vars.m"
                        *ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149 = ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148;
#line 463 "live_vars.m"
                      }
#line 465 "live_vars.m"
                    else
#line 469 "live_vars.m"
                      {
#line 469 "live_vars.m"
                        MR_Word ll_backend__live_vars__ProcInfo_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 1)));
#line 469 "live_vars.m"
                        MR_Word ll_backend__live_vars__VarTypes_93;
#line 469 "live_vars.m"
                        MR_Word ll_backend__live_vars__Types_94;
#line 469 "live_vars.m"
                        MR_Word ll_backend__live_vars__ModuleInfo_95;
#line 469 "live_vars.m"
                        MR_Word ll_backend__live_vars__OutVars_97;
#line 469 "live_vars.m"
                        MR_Word ll_backend__live_vars__V_169_169;
#line 470 "live_vars.m"
                        MR_Word ll_backend__live_vars__V_287_287 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 0)));
#line 470 "live_vars.m"
                        MR_Word ll_backend__live_vars__V_288_288 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 2)));
#line 470 "live_vars.m"
                        MR_Word ll_backend__live_vars__V_289_289 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 3)));
#line 470 "live_vars.m"
                        MR_Word ll_backend__live_vars__V_290_290 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 4)));
#line 470 "live_vars.m"
                        MR_ArrayPtr ll_backend__live_vars__V_291_291 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 5)));
#line 473 "live_vars.m"
                        MR_Word ll_backend__live_vars__V_292_292;
#line 473 "live_vars.m"
                        MR_Word ll_backend__live_vars__V_293_293;
#line 473 "live_vars.m"
                        MR_Word ll_backend__live_vars__V_294_294;
#line 473 "live_vars.m"
                        MR_Word ll_backend__live_vars__V_295_295;
#line 473 "live_vars.m"
                        MR_ArrayPtr ll_backend__live_vars__V_296_296;
#line 474 "live_vars.m"
                        MR_Word ll_backend__live_vars___InVars_96;
#line 474 "live_vars.m"
                        MR_Word ll_backend__live_vars___UnusedVars_98;

#line 471 "live_vars.m"
                        {
#line 471 "live_vars.m"
                          hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__live_vars__ProcInfo_92, &ll_backend__live_vars__VarTypes_93);
                        }
#line 472 "live_vars.m"
                        {
#line 472 "live_vars.m"
                          parse_tree__prog_data__lookup_var_types_3_p_0(ll_backend__live_vars__VarTypes_93, ll_backend__live_vars__ArgVars_78, &ll_backend__live_vars__Types_94);
                        }
#line 473 "live_vars.m"
                        ll_backend__live_vars__ModuleInfo_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 0)));
#line 473 "live_vars.m"
                        ll_backend__live_vars__V_292_292 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 1)));
#line 473 "live_vars.m"
                        ll_backend__live_vars__V_293_293 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 2)));
#line 473 "live_vars.m"
                        ll_backend__live_vars__V_294_294 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 3)));
#line 473 "live_vars.m"
                        ll_backend__live_vars__V_295_295 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 4)));
#line 473 "live_vars.m"
                        ll_backend__live_vars__V_296_296 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 5)));
#line 474 "live_vars.m"
                        {
#line 474 "live_vars.m"
                          hlds__arg_info__partition_generic_call_args_7_p_0(ll_backend__live_vars__ModuleInfo_95, ll_backend__live_vars__ArgVars_78, ll_backend__live_vars__Types_94, ll_backend__live_vars__Modes_79, &ll_backend__live_vars___InVars_96, &ll_backend__live_vars__OutVars_97, &ll_backend__live_vars___UnusedVars_98);
                        }
#line 476 "live_vars.m"
                        {
#line 476 "live_vars.m"
                          ll_backend__live_vars__V_169_169 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__live_vars__OutVars_97);
                        }
#line 476 "live_vars.m"
                        {
#line 476 "live_vars.m"
                          ll_backend__live_vars__build_live_sets_in_call_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322, ll_backend__live_vars__V_169_169, ll_backend__live_vars__GoalInfo0_17, ll_backend__live_vars__GoalInfo_18, ll_backend__live_vars__ResumeVars0_19, ll_backend__live_vars__AllocData_20, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149);
                        }
#line 469 "live_vars.m"
                      }
#line 476 "live_vars.m"
                    *ll_backend__live_vars__STATE_VARIABLE_Liveness_145 = ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144;
#line 460 "live_vars.m"
                  }
#line 244 "live_vars.m"
                else
#line 244 "live_vars.m"
                  if (((((MR_tag((MR_Word) ll_backend__live_vars__GoalExpr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 347 "live_vars.m"
                    {
#line 347 "live_vars.m"
                      MR_Word ll_backend__live_vars__Vars_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 1)));
#line 347 "live_vars.m"
                      MR_Word ll_backend__live_vars__Cond0_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 2)));
#line 347 "live_vars.m"
                      MR_Word ll_backend__live_vars__Then0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 3)));
#line 347 "live_vars.m"
                      MR_Word ll_backend__live_vars__Else0_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 4)));
#line 347 "live_vars.m"
                      MR_Word ll_backend__live_vars__Cond_58;
#line 347 "live_vars.m"
                      MR_Word ll_backend__live_vars__LivenessCond_59;
#line 347 "live_vars.m"
                      MR_Word ll_backend__live_vars__NondetLivenessCond_60;
#line 347 "live_vars.m"
                      MR_Word ll_backend__live_vars__Then_61;
#line 347 "live_vars.m"
                      MR_Word ll_backend__live_vars__NondetLivenessThen_63;
#line 347 "live_vars.m"
                      MR_Word ll_backend__live_vars__Else_64;
#line 347 "live_vars.m"
                      MR_Word ll_backend__live_vars__NondetLivenessElse_65;
#line 347 "live_vars.m"
                      MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_201_201;
#line 347 "live_vars.m"
                      MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_202_202;
#line 347 "live_vars.m"
                      MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_203_203;
#line 347 "live_vars.m"
                      MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_204_204;
#line 353 "live_vars.m"
                      MR_Word ll_backend__live_vars___LivenessThen_62;

#line 350 "live_vars.m"
                      {
#line 350 "live_vars.m"
                        ll_backend__live_vars__build_live_sets_in_goal_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322, ll_backend__live_vars__Cond0_53, &ll_backend__live_vars__Cond_58, ll_backend__live_vars__ResumeVars0_19, ll_backend__live_vars__AllocData_20, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142, &ll_backend__live_vars__STATE_VARIABLE_StackAlloc_201_201, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144, &ll_backend__live_vars__LivenessCond_59, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146, &ll_backend__live_vars__NondetLivenessCond_60, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148, &ll_backend__live_vars__STATE_VARIABLE_ParStackVars_202_202);
                      }
#line 353 "live_vars.m"
                      {
#line 353 "live_vars.m"
                        ll_backend__live_vars__build_live_sets_in_goal_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322, ll_backend__live_vars__Then0_54, &ll_backend__live_vars__Then_61, ll_backend__live_vars__ResumeVars0_19, ll_backend__live_vars__AllocData_20, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_201_201, &ll_backend__live_vars__STATE_VARIABLE_StackAlloc_203_203, ll_backend__live_vars__LivenessCond_59, &ll_backend__live_vars___LivenessThen_62, ll_backend__live_vars__NondetLivenessCond_60, &ll_backend__live_vars__NondetLivenessThen_63, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_202_202, &ll_backend__live_vars__STATE_VARIABLE_ParStackVars_204_204);
                      }
#line 356 "live_vars.m"
                      {
#line 356 "live_vars.m"
                        ll_backend__live_vars__build_live_sets_in_goal_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322, ll_backend__live_vars__Else0_55, &ll_backend__live_vars__Else_64, ll_backend__live_vars__ResumeVars0_19, ll_backend__live_vars__AllocData_20, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_203_203, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144, ll_backend__live_vars__STATE_VARIABLE_Liveness_145, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146, &ll_backend__live_vars__NondetLivenessElse_65, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_204_204, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149);
                      }
#line 359 "live_vars.m"
                      {
#line 359 "live_vars.m"
                        parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__live_vars__NondetLivenessThen_63, ll_backend__live_vars__NondetLivenessElse_65, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147);
                      }
#line 363 "live_vars.m"
                      {
#line 363 "live_vars.m"
                        MR_Word base;
#line 363 "live_vars.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 363 "live_vars.m"
                        *ll_backend__live_vars__GoalExpr_16 = base;
#line 363 "live_vars.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 363 "live_vars.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__live_vars__Vars_52));
#line 363 "live_vars.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__live_vars__Cond_58));
#line 363 "live_vars.m"
                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__live_vars__Then_61));
#line 363 "live_vars.m"
                        MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ll_backend__live_vars__Else_64));
#line 363 "live_vars.m"
                      }
#line 364 "live_vars.m"
                      *ll_backend__live_vars__GoalInfo_18 = ll_backend__live_vars__GoalInfo0_17;
#line 347 "live_vars.m"
                    }
#line 244 "live_vars.m"
                  else
#line 244 "live_vars.m"
                    if (((((MR_tag((MR_Word) ll_backend__live_vars__GoalExpr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 372 "live_vars.m"
                      {
#line 372 "live_vars.m"
                        MR_Word ll_backend__live_vars__Reason_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 1)));
#line 372 "live_vars.m"
                        MR_Word ll_backend__live_vars__SubGoal0_263 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 2)));
#line 386 "live_vars.m"
                        MR_Word ll_backend__live_vars__TermVar_69;
#line 373 "live_vars.m"
                        MR_Word ll_backend__live_vars__V_173_173;

#line 373 "live_vars.m"
                        (ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__succeeded = ((((MR_tag((MR_Word) ll_backend__live_vars__Reason_68)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__Reason_68, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 373 "live_vars.m"
                        if ((ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__succeeded)
#line 373 "live_vars.m"
                          {
#line 373 "live_vars.m"
                            ll_backend__live_vars__TermVar_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__Reason_68, (MR_Integer) 1)));
#line 373 "live_vars.m"
                            ll_backend__live_vars__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__Reason_68, (MR_Integer) 2)));
#line 373 "live_vars.m"
                            (ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__succeeded = (ll_backend__live_vars__V_173_173 == (MR_Integer) 1);
#line 373 "live_vars.m"
                          }
#line 386 "live_vars.m"
                        if ((ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__succeeded)
#line 377 "live_vars.m"
                          {
#line 377 "live_vars.m"
                            *ll_backend__live_vars__GoalExpr_16 = ll_backend__live_vars__GoalExpr0_15;
#line 378 "live_vars.m"
                            *ll_backend__live_vars__GoalInfo_18 = ll_backend__live_vars__GoalInfo0_17;
#line 382 "live_vars.m"
                            {
#line 382 "live_vars.m"
                              parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__live_vars__TermVar_69, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144, ll_backend__live_vars__STATE_VARIABLE_Liveness_145);
                            }
#line 382 "live_vars.m"
                            *ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149 = ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148;
#line 382 "live_vars.m"
                            *ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147 = ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146;
#line 382 "live_vars.m"
                            *ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143 = ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142;
#line 377 "live_vars.m"
                          }
#line 386 "live_vars.m"
                        else
#line 439 "live_vars.m"
                          {
#line 439 "live_vars.m"
                            MR_Word ll_backend__live_vars__LCVar_70;
#line 439 "live_vars.m"
                            MR_Word ll_backend__live_vars__LCSVar_71;
#line 386 "live_vars.m"
                            MR_Word ll_backend__live_vars__V_72_72;

#line 386 "live_vars.m"
                            (ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__succeeded = ((((MR_tag((MR_Word) ll_backend__live_vars__Reason_68)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__Reason_68, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 386 "live_vars.m"
                            if ((ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0_env_0__succeeded)
#line 386 "live_vars.m"
                              {
#line 386 "live_vars.m"
                                ll_backend__live_vars__LCVar_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__Reason_68, (MR_Integer) 1)));
#line 386 "live_vars.m"
                                ll_backend__live_vars__LCSVar_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__Reason_68, (MR_Integer) 2)));
#line 386 "live_vars.m"
                                ll_backend__live_vars__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__Reason_68, (MR_Integer) 3)));
#line 399 "live_vars.m"
                                {
#line 399 "live_vars.m"
                                  MR_Word ll_backend__live_vars__TypeCtorInfo_328_328;
#line 399 "live_vars.m"
                                  MR_Word ll_backend__live_vars__LCStackVars_73;
#line 399 "live_vars.m"
                                  MR_Word ll_backend__live_vars__NeedInParConjSet_74;
#line 399 "live_vars.m"
                                  MR_Word ll_backend__live_vars__WouldDieSet_75;
#line 399 "live_vars.m"
                                  MR_Word ll_backend__live_vars__V_175_175;
#line 399 "live_vars.m"
                                  MR_Word ll_backend__live_vars__V_176_176;
#line 399 "live_vars.m"
                                  MR_Word ll_backend__live_vars__V_177_177;
#line 399 "live_vars.m"
                                  MR_Word ll_backend__live_vars__V_178_178;
#line 399 "live_vars.m"
                                  MR_Word ll_backend__live_vars__V_180_180;
#line 399 "live_vars.m"
                                  MR_Word ll_backend__live_vars__V_181_181;
#line 399 "live_vars.m"
                                  MR_Word ll_backend__live_vars__V_182_182;
#line 399 "live_vars.m"
                                  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_184_184;
#line 399 "live_vars.m"
                                  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_185_185;
#line 399 "live_vars.m"
                                  MR_Word ll_backend__live_vars__STATE_VARIABLE_Liveness_186_186;
#line 399 "live_vars.m"
                                  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_188_188;
#line 399 "live_vars.m"
                                  MR_Word ll_backend__live_vars__NonLocals_239;
#line 399 "live_vars.m"
                                  MR_Word ll_backend__live_vars__InnerStackVars_241;
#line 399 "live_vars.m"
                                  MR_Word ll_backend__live_vars__NeedInParConj_242;
#line 399 "live_vars.m"
                                  MR_Word ll_backend__live_vars__SubGoal_243;

#line 399 "live_vars.m"
                                  {
#line 399 "live_vars.m"
                                    ll_backend__live_vars__NonLocals_239 = hlds__hlds_goal__goal_info_get_code_gen_nonlocals_1_f_0(ll_backend__live_vars__GoalInfo0_17);
                                  }
#line 5352 "ll_backend.live_vars.c"
                                  ll_backend__live_vars__TypeCtorInfo_328_328 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 414 "live_vars.m"
                                  {
#line 414 "live_vars.m"
                                    ll_backend__live_vars__V_178_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 414 "live_vars.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_178_178, 0) = ((MR_Box) (ll_backend__live_vars__ResumeVars0_19));
#line 414 "live_vars.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_178_178, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 414 "live_vars.m"
                                  }
#line 414 "live_vars.m"
                                  {
#line 414 "live_vars.m"
                                    ll_backend__live_vars__V_177_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 414 "live_vars.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_177_177, 0) = ((MR_Box) (ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144));
#line 414 "live_vars.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_177_177, 1) = ((MR_Box) (ll_backend__live_vars__V_178_178));
#line 414 "live_vars.m"
                                  }
#line 414 "live_vars.m"
                                  {
#line 414 "live_vars.m"
                                    ll_backend__live_vars__V_176_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 414 "live_vars.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_176_176, 0) = ((MR_Box) (ll_backend__live_vars__NonLocals_239));
#line 414 "live_vars.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_176_176, 1) = ((MR_Box) (ll_backend__live_vars__V_177_177));
#line 414 "live_vars.m"
                                  }
#line 414 "live_vars.m"
                                  {
#line 414 "live_vars.m"
                                    ll_backend__live_vars__V_175_175 = parse_tree__set_of_var__union_list_1_f_0(ll_backend__live_vars__TypeCtorInfo_328_328, ll_backend__live_vars__V_176_176);
                                  }
#line 415 "live_vars.m"
                                  {
#line 415 "live_vars.m"
                                    ll_backend__live_vars__V_182_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "live_vars.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_182_182, 0) = ((MR_Box) (ll_backend__live_vars__LCSVar_71));
#line 415 "live_vars.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_182_182, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 415 "live_vars.m"
                                  }
#line 415 "live_vars.m"
                                  {
#line 415 "live_vars.m"
                                    ll_backend__live_vars__V_181_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "live_vars.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_181_181, 0) = ((MR_Box) (ll_backend__live_vars__LCVar_70));
#line 415 "live_vars.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_181_181, 1) = ((MR_Box) (ll_backend__live_vars__V_182_182));
#line 415 "live_vars.m"
                                  }
#line 415 "live_vars.m"
                                  {
#line 415 "live_vars.m"
                                    ll_backend__live_vars__V_180_180 = parse_tree__set_of_var__list_to_set_1_f_0(ll_backend__live_vars__TypeCtorInfo_328_328, ll_backend__live_vars__V_181_181);
                                  }
#line 415 "live_vars.m"
                                  {
#line 415 "live_vars.m"
                                    ll_backend__live_vars__LCStackVars_73 = parse_tree__set_of_var__union_2_f_0(ll_backend__live_vars__TypeCtorInfo_328_328, ll_backend__live_vars__V_175_175, ll_backend__live_vars__V_180_180);
                                  }
#line 416 "live_vars.m"
                                  {
#line 416 "live_vars.m"
                                    ll_backend__live_vars__par_stack_vars_start_loop_control_3_p_0(ll_backend__live_vars__LCStackVars_73, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148, &ll_backend__live_vars__STATE_VARIABLE_ParStackVars_184_184);
                                  }
#line 417 "live_vars.m"
                                  {
#line 417 "live_vars.m"
                                    ll_backend__live_vars__build_live_sets_in_goal_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322, ll_backend__live_vars__SubGoal0_263, &ll_backend__live_vars__SubGoal_243, ll_backend__live_vars__ResumeVars0_19, ll_backend__live_vars__AllocData_20, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142, &ll_backend__live_vars__STATE_VARIABLE_StackAlloc_185_185, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144, &ll_backend__live_vars__STATE_VARIABLE_Liveness_186_186, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_184_184, &ll_backend__live_vars__STATE_VARIABLE_ParStackVars_188_188);
                                  }
#line 419 "live_vars.m"
                                  {
#line 419 "live_vars.m"
                                    ll_backend__live_vars__par_stack_vars_get_stackvars_2_p_0(ll_backend__live_vars__STATE_VARIABLE_ParStackVars_188_188, &ll_backend__live_vars__InnerStackVars_241);
                                  }
#line 421 "live_vars.m"
                                  {
#line 421 "live_vars.m"
                                    ll_backend__live_vars__NeedInParConjSet_74 = parse_tree__set_of_var__union_2_f_0(ll_backend__live_vars__TypeCtorInfo_328_328, ll_backend__live_vars__LCStackVars_73, ll_backend__live_vars__InnerStackVars_241);
                                  }
#line 422 "live_vars.m"
                                  ll_backend__live_vars__NeedInParConj_242 = (MR_Word) ll_backend__live_vars__NeedInParConjSet_74;
#line 424 "live_vars.m"
                                  {
#line 424 "live_vars.m"
                                    ll_backend__live_vars__record_par_conj_6_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322, ll_backend__live_vars__NeedInParConj_242, ll_backend__live_vars__AllocData_20, ll_backend__live_vars__GoalInfo0_17, ll_backend__live_vars__GoalInfo_18, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_185_185, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143);
                                  }
#line 430 "live_vars.m"
                                  {
#line 430 "live_vars.m"
                                    ll_backend__live_vars__WouldDieSet_75 = parse_tree__set_of_var__difference_2_f_0(ll_backend__live_vars__TypeCtorInfo_328_328, ll_backend__live_vars__NeedInParConjSet_74, ll_backend__live_vars__STATE_VARIABLE_Liveness_186_186);
                                  }
#line 431 "live_vars.m"
                                  {
#line 431 "live_vars.m"
                                    *ll_backend__live_vars__STATE_VARIABLE_Liveness_145 = parse_tree__set_of_var__union_2_f_0(ll_backend__live_vars__TypeCtorInfo_328_328, ll_backend__live_vars__STATE_VARIABLE_Liveness_186_186, ll_backend__live_vars__WouldDieSet_75);
                                  }
#line 435 "live_vars.m"
                                  {
#line 435 "live_vars.m"
                                    ll_backend__live_vars__par_stack_vars_end_loop_control_4_p_0(ll_backend__live_vars__WouldDieSet_75, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_188_188, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149);
                                  }
#line 438 "live_vars.m"
                                  {
#line 438 "live_vars.m"
                                    MR_Word base;
#line 438 "live_vars.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 438 "live_vars.m"
                                    *ll_backend__live_vars__GoalExpr_16 = base;
#line 438 "live_vars.m"
                                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 438 "live_vars.m"
                                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__live_vars__Reason_68));
#line 438 "live_vars.m"
                                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__live_vars__SubGoal_243));
#line 438 "live_vars.m"
                                  }
#line 399 "live_vars.m"
                                }
#line 386 "live_vars.m"
                              }
#line 386 "live_vars.m"
                            else
#line 440 "live_vars.m"
                              {
#line 440 "live_vars.m"
                                MR_Word ll_backend__live_vars__CodeModel_76;
#line 440 "live_vars.m"
                                MR_Word ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_194_194;
#line 440 "live_vars.m"
                                MR_Word ll_backend__live_vars__SubGoal_245;

#line 441 "live_vars.m"
                                {
#line 441 "live_vars.m"
                                  ll_backend__live_vars__build_live_sets_in_goal_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322, ll_backend__live_vars__SubGoal0_263, &ll_backend__live_vars__SubGoal_245, ll_backend__live_vars__ResumeVars0_19, ll_backend__live_vars__AllocData_20, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144, ll_backend__live_vars__STATE_VARIABLE_Liveness_145, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146, &ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_194_194, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149);
                                }
#line 447 "live_vars.m"
                                {
#line 447 "live_vars.m"
                                  ll_backend__live_vars__CodeModel_76 = hlds__code_model__goal_info_get_code_model_1_f_0(ll_backend__live_vars__GoalInfo0_17);
                                }
#line 450 "live_vars.m"
                                if ((ll_backend__live_vars__CodeModel_76 == (MR_Integer) 2))
#line 449 "live_vars.m"
                                  *ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147 = ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_194_194;
#line 450 "live_vars.m"
                                else
#line 454 "live_vars.m"
                                  *ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147 = ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146;
#line 456 "live_vars.m"
                                {
#line 456 "live_vars.m"
                                  MR_Word base;
#line 456 "live_vars.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 456 "live_vars.m"
                                  *ll_backend__live_vars__GoalExpr_16 = base;
#line 456 "live_vars.m"
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 456 "live_vars.m"
                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__live_vars__Reason_68));
#line 456 "live_vars.m"
                                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__live_vars__SubGoal_245));
#line 456 "live_vars.m"
                                }
#line 457 "live_vars.m"
                                *ll_backend__live_vars__GoalInfo_18 = ll_backend__live_vars__GoalInfo0_17;
#line 440 "live_vars.m"
                              }
#line 439 "live_vars.m"
                          }
#line 372 "live_vars.m"
                      }
#line 244 "live_vars.m"
                    else
#line 244 "live_vars.m"
                      if (((((MR_tag((MR_Word) ll_backend__live_vars__GoalExpr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 566 "live_vars.m"
                        {
#line 568 "live_vars.m"
                          {
#line 568 "live_vars.m"
                            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.live_vars", (MR_String) "predicate \140ll_backend.live_vars.build_live_sets_in_goal_2\'/14", (MR_String) "shorthand");
#line 568 "live_vars.m"
                            return;
                          }
#line 566 "live_vars.m"
                        }
#line 244 "live_vars.m"
                      else
#line 341 "live_vars.m"
                        {
#line 341 "live_vars.m"
                          MR_Word ll_backend__live_vars__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 1)));
#line 341 "live_vars.m"
                          MR_Word ll_backend__live_vars__CanFail_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 2)));
#line 341 "live_vars.m"
                          MR_Word ll_backend__live_vars__Cases0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 3)));
#line 341 "live_vars.m"
                          MR_Word ll_backend__live_vars__Cases_51;

#line 342 "live_vars.m"
                          {
#line 342 "live_vars.m"
                            ll_backend__live_vars__build_live_sets_in_cases_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322, ll_backend__live_vars__Cases0_50, &ll_backend__live_vars__Cases_51, ll_backend__live_vars__ResumeVars0_19, ll_backend__live_vars__AllocData_20, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144, ll_backend__live_vars__STATE_VARIABLE_Liveness_145, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149);
                          }
#line 344 "live_vars.m"
                          {
#line 344 "live_vars.m"
                            MR_Word base;
#line 344 "live_vars.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 344 "live_vars.m"
                            *ll_backend__live_vars__GoalExpr_16 = base;
#line 344 "live_vars.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 344 "live_vars.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__live_vars__Var_48));
#line 344 "live_vars.m"
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__live_vars__CanFail_49));
#line 344 "live_vars.m"
                            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__live_vars__Cases_51));
#line 344 "live_vars.m"
                          }
#line 345 "live_vars.m"
                          *ll_backend__live_vars__GoalInfo_18 = ll_backend__live_vars__GoalInfo0_17;
#line 341 "live_vars.m"
                        }
#line 232 "live_vars.m"
  }
#line 232 "live_vars.m"
}

#line 215 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__resume_locs_include_stack_2_p_0(
#line 215 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 215 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__2_2)
#line 215 "live_vars.m"
{
#line 217 "live_vars.m"
  {
#line 217 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;

#line 217 "live_vars.m"
    if ((ll_backend__live_vars__HeadVar__1_1 == (MR_Integer) 2))
#line 219 "live_vars.m"
      *ll_backend__live_vars__HeadVar__2_2 = (MR_Integer) 1;
#line 217 "live_vars.m"
    else
#line 217 "live_vars.m"
      if ((ll_backend__live_vars__HeadVar__1_1 == (MR_Integer) 0))
#line 217 "live_vars.m"
        *ll_backend__live_vars__HeadVar__2_2 = (MR_Integer) 0;
#line 217 "live_vars.m"
      else
#line 217 "live_vars.m"
        if ((ll_backend__live_vars__HeadVar__1_1 == (MR_Integer) 3))
#line 220 "live_vars.m"
          *ll_backend__live_vars__HeadVar__2_2 = (MR_Integer) 1;
#line 217 "live_vars.m"
        else
#line 218 "live_vars.m"
          *ll_backend__live_vars__HeadVar__2_2 = (MR_Integer) 1;
#line 217 "live_vars.m"
  }
#line 215 "live_vars.m"
}

#line 151 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_12_p_0(
#line 151 "live_vars.m"
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_56,
#line 151 "live_vars.m"
  MR_Word ll_backend__live_vars__Goal0_13,
#line 151 "live_vars.m"
  MR_Word * ll_backend__live_vars__Goal_14,
#line 151 "live_vars.m"
  MR_Word ll_backend__live_vars__ResumeVars0_15,
#line 151 "live_vars.m"
  MR_Word ll_backend__live_vars__AllocData_16,
#line 151 "live_vars.m"
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_37,
#line 151 "live_vars.m"
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_38,
#line 151 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_Liveness_0_39,
#line 151 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_Liveness_40,
#line 151 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_41,
#line 151 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_42,
#line 151 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_43,
#line 151 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_44)
#line 151 "live_vars.m"
{
#line 159 "live_vars.m"
  {
#line 159 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;
#line 159 "live_vars.m"
    MR_Word ll_backend__live_vars__TypeCtorInfo_57_57;
#line 159 "live_vars.m"
    MR_Word ll_backend__live_vars__GoalExpr0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__Goal0_13, (MR_Integer) 0)));
#line 159 "live_vars.m"
    MR_Word ll_backend__live_vars__GoalInfo0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__Goal0_13, (MR_Integer) 1)));
#line 159 "live_vars.m"
    MR_Word ll_backend__live_vars__PreDeaths_23;
#line 159 "live_vars.m"
    MR_Word ll_backend__live_vars__PreBirths_24;
#line 159 "live_vars.m"
    MR_Word ll_backend__live_vars__PostDeaths_25;
#line 159 "live_vars.m"
    MR_Word ll_backend__live_vars__PostBirths_26;
#line 159 "live_vars.m"
    MR_Word ll_backend__live_vars__HasSubGoals_27;
#line 159 "live_vars.m"
    MR_Word ll_backend__live_vars__ResumePoint_28;
#line 159 "live_vars.m"
    MR_Word ll_backend__live_vars__ResumeVars1_29;
#line 159 "live_vars.m"
    MR_Word ll_backend__live_vars__GoalInfo1_30;
#line 159 "live_vars.m"
    MR_Word ll_backend__live_vars__GoalExpr_35;
#line 159 "live_vars.m"
    MR_Word ll_backend__live_vars__GoalInfo_36;
#line 159 "live_vars.m"
    MR_Word ll_backend__live_vars__STATE_VARIABLE_Liveness_45_45;
#line 159 "live_vars.m"
    MR_Word ll_backend__live_vars__STATE_VARIABLE_Liveness_46_46;
#line 159 "live_vars.m"
    MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_49_49;
#line 159 "live_vars.m"
    MR_Word ll_backend__live_vars__STATE_VARIABLE_Liveness_54_54;

#line 161 "live_vars.m"
    {
#line 161 "live_vars.m"
      hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(ll_backend__live_vars__GoalInfo0_22, &ll_backend__live_vars__PreDeaths_23);
    }
#line 162 "live_vars.m"
    {
#line 162 "live_vars.m"
      hlds__hlds_llds__goal_info_get_pre_births_2_p_0(ll_backend__live_vars__GoalInfo0_22, &ll_backend__live_vars__PreBirths_24);
    }
#line 163 "live_vars.m"
    {
#line 163 "live_vars.m"
      hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(ll_backend__live_vars__GoalInfo0_22, &ll_backend__live_vars__PostDeaths_25);
    }
#line 164 "live_vars.m"
    {
#line 164 "live_vars.m"
      hlds__hlds_llds__goal_info_get_post_births_2_p_0(ll_backend__live_vars__GoalInfo0_22, &ll_backend__live_vars__PostBirths_26);
    }
#line 5723 "ll_backend.live_vars.c"
    ll_backend__live_vars__TypeCtorInfo_57_57 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 167 "live_vars.m"
    {
#line 167 "live_vars.m"
      parse_tree__set_of_var__difference_3_p_0(ll_backend__live_vars__TypeCtorInfo_57_57, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_39, ll_backend__live_vars__PreDeaths_23, &ll_backend__live_vars__STATE_VARIABLE_Liveness_45_45);
    }
#line 168 "live_vars.m"
    {
#line 168 "live_vars.m"
      parse_tree__set_of_var__union_3_p_0(ll_backend__live_vars__TypeCtorInfo_57_57, ll_backend__live_vars__STATE_VARIABLE_Liveness_45_45, ll_backend__live_vars__PreBirths_24, &ll_backend__live_vars__STATE_VARIABLE_Liveness_46_46);
    }
#line 173 "live_vars.m"
    {
#line 173 "live_vars.m"
      ll_backend__live_vars__HasSubGoals_27 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(ll_backend__live_vars__GoalExpr0_21);
    }
#line 181 "live_vars.m"
    {
#line 181 "live_vars.m"
      hlds__hlds_llds__goal_info_get_resume_point_2_p_0(ll_backend__live_vars__GoalInfo0_22, &ll_backend__live_vars__ResumePoint_28);
    }
#line 186 "live_vars.m"
    if ((ll_backend__live_vars__ResumePoint_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 183 "live_vars.m"
      {
#line 184 "live_vars.m"
        ll_backend__live_vars__ResumeVars1_29 = ll_backend__live_vars__ResumeVars0_15;
#line 185 "live_vars.m"
        ll_backend__live_vars__GoalInfo1_30 = ll_backend__live_vars__GoalInfo0_22;
#line 185 "live_vars.m"
        ll_backend__live_vars__STATE_VARIABLE_StackAlloc_49_49 = ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_37;
#line 183 "live_vars.m"
      }
#line 186 "live_vars.m"
    else
#line 187 "live_vars.m"
      {
#line 187 "live_vars.m"
        MR_Word ll_backend__live_vars__ResumePointVars_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__ResumePoint_28, (MR_Integer) 0)));
#line 187 "live_vars.m"
        MR_Word ll_backend__live_vars__Locs_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__ResumePoint_28, (MR_Integer) 1)));
#line 187 "live_vars.m"
        MR_Word ll_backend__live_vars__ResumeOnStack_33;
#line 187 "live_vars.m"
        MR_Word ll_backend__live_vars__NeedInResume_34;
#line 5769 "ll_backend.live_vars.c"
        void MR_CALL (* ll_backend__live_vars__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 217 "live_vars.m"
        if ((ll_backend__live_vars__Locs_32 == (MR_Integer) 2))
#line 219 "live_vars.m"
          {
#line 188 "live_vars.m"
            ll_backend__live_vars__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
#line 219 "live_vars.m"
          }
#line 217 "live_vars.m"
        else
#line 217 "live_vars.m"
          if ((ll_backend__live_vars__Locs_32 == (MR_Integer) 0))
#line 217 "live_vars.m"
            {
#line 188 "live_vars.m"
              ll_backend__live_vars__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
#line 217 "live_vars.m"
            }
#line 217 "live_vars.m"
          else
#line 217 "live_vars.m"
            if ((ll_backend__live_vars__Locs_32 == (MR_Integer) 3))
#line 220 "live_vars.m"
              {
#line 188 "live_vars.m"
                ll_backend__live_vars__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
#line 220 "live_vars.m"
              }
#line 217 "live_vars.m"
            else
#line 218 "live_vars.m"
              {
#line 188 "live_vars.m"
                ll_backend__live_vars__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
#line 218 "live_vars.m"
              }
#line 191 "live_vars.m"
        if (ll_backend__live_vars__succeeded)
#line 189 "live_vars.m"
          {
#line 189 "live_vars.m"
            {
#line 189 "live_vars.m"
              parse_tree__set_of_var__union_3_p_0(ll_backend__live_vars__TypeCtorInfo_57_57, ll_backend__live_vars__ResumeVars0_15, ll_backend__live_vars__ResumePointVars_31, &ll_backend__live_vars__ResumeVars1_29);
            }
#line 190 "live_vars.m"
            ll_backend__live_vars__ResumeOnStack_33 = (MR_Integer) 1;
#line 189 "live_vars.m"
          }
#line 191 "live_vars.m"
        else
#line 192 "live_vars.m"
          {
#line 192 "live_vars.m"
            ll_backend__live_vars__ResumeVars1_29 = ll_backend__live_vars__ResumeVars0_15;
#line 193 "live_vars.m"
            ll_backend__live_vars__ResumeOnStack_33 = (MR_Integer) 0;
#line 192 "live_vars.m"
          }
#line 195 "live_vars.m"
        {
#line 195 "live_vars.m"
          ll_backend__live_vars__NeedInResume_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 195 "live_vars.m"
          MR_hl_field(MR_mktag(0), ll_backend__live_vars__NeedInResume_34, 0) = ((MR_Box) (ll_backend__live_vars__ResumeOnStack_33));
#line 195 "live_vars.m"
          MR_hl_field(MR_mktag(0), ll_backend__live_vars__NeedInResume_34, 1) = ((MR_Box) (ll_backend__live_vars__ResumeVars1_29));
#line 195 "live_vars.m"
          MR_hl_field(MR_mktag(0), ll_backend__live_vars__NeedInResume_34, 2) = ((MR_Box) (ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_41));
#line 195 "live_vars.m"
        }
#line 796 "live_vars.m"
        {
#line 796 "live_vars.m"
          hlds__hlds_llds__goal_info_set_need_in_resume_3_p_0(ll_backend__live_vars__NeedInResume_34, ll_backend__live_vars__GoalInfo0_22, &ll_backend__live_vars__GoalInfo1_30);
        }
#line 5848 "ll_backend.live_vars.c"
        ll_backend__live_vars__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_56, (MR_Integer) 0)), (MR_Integer) 6)));
#line 5850 "ll_backend.live_vars.c"
        {
#line 5852 "ll_backend.live_vars.c"
          ll_backend__live_vars__func_0(((MR_Box) ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_56), ((MR_Box) (ll_backend__live_vars__NeedInResume_34)), ((MR_Box) (ll_backend__live_vars__AllocData_16)), ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_37, &ll_backend__live_vars__STATE_VARIABLE_StackAlloc_49_49);
        }
#line 187 "live_vars.m"
      }
#line 5857 "ll_backend.live_vars.c"
    if ((ll_backend__live_vars__HasSubGoals_27 == (MR_Integer) 1))
#line 5859 "ll_backend.live_vars.c"
      {
#line 5861 "ll_backend.live_vars.c"
        MR_Word ll_backend__live_vars__STATE_VARIABLE_Liveness_47_47;

#line 176 "live_vars.m"
        {
#line 176 "live_vars.m"
          parse_tree__set_of_var__difference_3_p_0(ll_backend__live_vars__TypeCtorInfo_57_57, ll_backend__live_vars__STATE_VARIABLE_Liveness_46_46, ll_backend__live_vars__PostDeaths_25, &ll_backend__live_vars__STATE_VARIABLE_Liveness_47_47);
        }
#line 201 "live_vars.m"
        {
#line 201 "live_vars.m"
          ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_56, ll_backend__live_vars__GoalExpr0_21, &ll_backend__live_vars__GoalExpr_35, ll_backend__live_vars__GoalInfo1_30, &ll_backend__live_vars__GoalInfo_36, ll_backend__live_vars__ResumeVars1_29, ll_backend__live_vars__AllocData_16, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_49_49, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_38, ll_backend__live_vars__STATE_VARIABLE_Liveness_47_47, &ll_backend__live_vars__STATE_VARIABLE_Liveness_54_54, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_41, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_42, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_43, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_44);
        }
#line 5874 "ll_backend.live_vars.c"
      }
#line 5876 "ll_backend.live_vars.c"
    else
#line 5878 "ll_backend.live_vars.c"
      {
#line 5880 "ll_backend.live_vars.c"
        MR_Word ll_backend__live_vars__STATE_VARIABLE_Liveness_51_80;

#line 201 "live_vars.m"
        {
#line 201 "live_vars.m"
          ll_backend__live_vars__build_live_sets_in_goal_2_14_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_56, ll_backend__live_vars__GoalExpr0_21, &ll_backend__live_vars__GoalExpr_35, ll_backend__live_vars__GoalInfo1_30, &ll_backend__live_vars__GoalInfo_36, ll_backend__live_vars__ResumeVars1_29, ll_backend__live_vars__AllocData_16, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_49_49, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_38, ll_backend__live_vars__STATE_VARIABLE_Liveness_46_46, &ll_backend__live_vars__STATE_VARIABLE_Liveness_51_80, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_41, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_42, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_43, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_44);
        }
#line 209 "live_vars.m"
        {
#line 209 "live_vars.m"
          parse_tree__set_of_var__difference_3_p_0(ll_backend__live_vars__TypeCtorInfo_57_57, ll_backend__live_vars__STATE_VARIABLE_Liveness_51_80, ll_backend__live_vars__PostDeaths_25, &ll_backend__live_vars__STATE_VARIABLE_Liveness_54_54);
        }
#line 5893 "ll_backend.live_vars.c"
      }
#line 212 "live_vars.m"
    {
#line 212 "live_vars.m"
      parse_tree__set_of_var__union_3_p_0(ll_backend__live_vars__TypeCtorInfo_57_57, ll_backend__live_vars__STATE_VARIABLE_Liveness_54_54, ll_backend__live_vars__PostBirths_26, ll_backend__live_vars__STATE_VARIABLE_Liveness_40);
    }
#line 213 "live_vars.m"
    {
#line 213 "live_vars.m"
      MR_Word base;
#line 213 "live_vars.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 213 "live_vars.m"
      *ll_backend__live_vars__Goal_14 = base;
#line 213 "live_vars.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__live_vars__GoalExpr_35));
#line 213 "live_vars.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__live_vars__GoalInfo_36));
#line 213 "live_vars.m"
    }
#line 159 "live_vars.m"
  }
#line 151 "live_vars.m"
}

#line 117 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__set_dummy_array_elements_6_p_0(
#line 117 "live_vars.m"
  MR_Word ll_backend__live_vars__ModuleInfo_1,
#line 117 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__2_2,
#line 117 "live_vars.m"
  MR_ArrayPtr ll_backend__live_vars__STATE_VARIABLE_DummyTypeArray_0_3,
#line 117 "live_vars.m"
  MR_ArrayPtr * ll_backend__live_vars__STATE_VARIABLE_DummyTypeArray_4,
#line 117 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_DummyVars_0_5,
#line 117 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_DummyVars_6)
#line 117 "live_vars.m"
{
#line 122 "live_vars.m"
  while (MR_TRUE)
#line 122 "live_vars.m"
    {
#line 122 "live_vars.m"
      /* tailcall optimized into a loop */
#line 122 "live_vars.m"
      {
#line 122 "live_vars.m"
        MR_bool ll_backend__live_vars__succeeded;

#line 122 "live_vars.m"
        if ((ll_backend__live_vars__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 122 "live_vars.m"
          {
#line 122 "live_vars.m"
            *ll_backend__live_vars__STATE_VARIABLE_DummyVars_6 = ll_backend__live_vars__STATE_VARIABLE_DummyVars_0_5;
#line 122 "live_vars.m"
            *ll_backend__live_vars__STATE_VARIABLE_DummyTypeArray_4 = ll_backend__live_vars__STATE_VARIABLE_DummyTypeArray_0_3;
#line 122 "live_vars.m"
          }
#line 122 "live_vars.m"
        else
#line 124 "live_vars.m"
          {
#line 124 "live_vars.m"
            MR_Word ll_backend__live_vars__VarType_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 0)));
#line 124 "live_vars.m"
            MR_Word ll_backend__live_vars__VarsTypes_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 1)));
#line 124 "live_vars.m"
            MR_Word ll_backend__live_vars__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__VarType_15, (MR_Integer) 0)));
#line 124 "live_vars.m"
            MR_Word ll_backend__live_vars__Type_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__VarType_15, (MR_Integer) 1)));
#line 124 "live_vars.m"
            MR_Word ll_backend__live_vars__IsDummyType_21;
#line 124 "live_vars.m"
            MR_ArrayPtr ll_backend__live_vars__STATE_VARIABLE_DummyTypeArray_27_27;
#line 124 "live_vars.m"
            MR_Word ll_backend__live_vars__STATE_VARIABLE_DummyVars_28_28;

#line 126 "live_vars.m"
            {
#line 126 "live_vars.m"
              ll_backend__live_vars__IsDummyType_21 = check_hlds__type_util__check_dummy_type_2_f_0(ll_backend__live_vars__ModuleInfo_1, ll_backend__live_vars__Type_20);
            }
#line 131 "live_vars.m"
            if ((ll_backend__live_vars__IsDummyType_21 == (MR_Integer) 0))
#line 128 "live_vars.m"
              {
#line 128 "live_vars.m"
                MR_Word ll_backend__live_vars__TypeClassInfo_for_enum_31 = (MR_Word) &ll_backend__live_vars_scalar_common_2[1];
#line 128 "live_vars.m"
                MR_Integer ll_backend__live_vars__V_26_26;
#line 5989 "ll_backend.live_vars.c"
                MR_Box MR_CALL (* ll_backend__live_vars__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__live_vars__TypeClassInfo_for_enum_31, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5991 "ll_backend.live_vars.c"
                MR_Box ll_backend__live_vars__conv1_V_26_26;
#line 129 "live_vars.m"
                MR_ArrayPtr ll_backend__live_vars__conv2_STATE_VARIABLE_DummyTypeArray_27_27;

#line 5996 "ll_backend.live_vars.c"
                {
#line 5998 "ll_backend.live_vars.c"
                  ll_backend__live_vars__conv1_V_26_26 = ll_backend__live_vars__func_0(((MR_Box) ll_backend__live_vars__TypeClassInfo_for_enum_31), ((MR_Box) (ll_backend__live_vars__Var_19)));
                }
#line 6001 "ll_backend.live_vars.c"
                ll_backend__live_vars__V_26_26 = ((MR_Integer) ll_backend__live_vars__conv1_V_26_26);
#line 129 "live_vars.m"
                {
#line 129 "live_vars.m"
                  mercury__array__set_4_p_0((MR_Word) &check_hlds__type_util__check_hlds__type_util__type_ctor_info_is_dummy_type_0, ll_backend__live_vars__V_26_26, ((MR_Box) (ll_backend__live_vars__IsDummyType_21)), (MR_ArrayPtr) ll_backend__live_vars__STATE_VARIABLE_DummyTypeArray_0_3, &ll_backend__live_vars__conv2_STATE_VARIABLE_DummyTypeArray_27_27);
                }
#line 129 "live_vars.m"
                ll_backend__live_vars__STATE_VARIABLE_DummyTypeArray_27_27 = (MR_ArrayPtr) ll_backend__live_vars__conv2_STATE_VARIABLE_DummyTypeArray_27_27;
#line 130 "live_vars.m"
                {
#line 130 "live_vars.m"
                  ll_backend__live_vars__STATE_VARIABLE_DummyVars_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 130 "live_vars.m"
                  MR_hl_field(MR_mktag(1), ll_backend__live_vars__STATE_VARIABLE_DummyVars_28_28, 0) = ((MR_Box) (ll_backend__live_vars__Var_19));
#line 130 "live_vars.m"
                  MR_hl_field(MR_mktag(1), ll_backend__live_vars__STATE_VARIABLE_DummyVars_28_28, 1) = ((MR_Box) (ll_backend__live_vars__STATE_VARIABLE_DummyVars_0_5));
#line 130 "live_vars.m"
                }
#line 128 "live_vars.m"
              }
#line 131 "live_vars.m"
            else
#line 132 "live_vars.m"
              {
#line 132 "live_vars.m"
                ll_backend__live_vars__STATE_VARIABLE_DummyTypeArray_27_27 = ll_backend__live_vars__STATE_VARIABLE_DummyTypeArray_0_3;
#line 132 "live_vars.m"
                ll_backend__live_vars__STATE_VARIABLE_DummyVars_28_28 = ll_backend__live_vars__STATE_VARIABLE_DummyVars_0_5;
#line 132 "live_vars.m"
              }
#line 135 "live_vars.m"
            /* direct tailcall eliminated */
#line 135 "live_vars.m"
            {
#line 135 "live_vars.m"
              MR_Word ll_backend__live_vars__HeadVar__2__tmp_copy_2 = ll_backend__live_vars__VarsTypes_16;
#line 135 "live_vars.m"
              MR_ArrayPtr ll_backend__live_vars__STATE_VARIABLE_DummyTypeArray_0__tmp_copy_3 = ll_backend__live_vars__STATE_VARIABLE_DummyTypeArray_27_27;
#line 135 "live_vars.m"
              MR_Word ll_backend__live_vars__STATE_VARIABLE_DummyVars_0__tmp_copy_5 = ll_backend__live_vars__STATE_VARIABLE_DummyVars_28_28;

#line 135 "live_vars.m"
              ll_backend__live_vars__STATE_VARIABLE_DummyVars_0_5 = ll_backend__live_vars__STATE_VARIABLE_DummyVars_0__tmp_copy_5;
#line 135 "live_vars.m"
              ll_backend__live_vars__STATE_VARIABLE_DummyTypeArray_0_3 = ll_backend__live_vars__STATE_VARIABLE_DummyTypeArray_0__tmp_copy_3;
#line 135 "live_vars.m"
              ll_backend__live_vars__HeadVar__2_2 = ll_backend__live_vars__HeadVar__2__tmp_copy_2;
#line 135 "live_vars.m"
            }
#line 135 "live_vars.m"
            continue;
#line 124 "live_vars.m"
          }
#line 122 "live_vars.m"
      }
#line 122 "live_vars.m"
      break;
#line 122 "live_vars.m"
    }
#line 117 "live_vars.m"
}

#line 111 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__max_var_num_3_p_0(
#line 111 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 111 "live_vars.m"
  MR_Integer ll_backend__live_vars__STATE_VARIABLE_MaxVarNum_0_8,
#line 111 "live_vars.m"
  MR_Integer * ll_backend__live_vars__STATE_VARIABLE_MaxVarNum_9)
#line 111 "live_vars.m"
{
#line 113 "live_vars.m"
  {
#line 113 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;
#line 113 "live_vars.m"
    MR_Word ll_backend__live_vars__TypeClassInfo_for_enum_11 = (MR_Word) &ll_backend__live_vars_scalar_common_2[1];
#line 113 "live_vars.m"
    MR_Word ll_backend__live_vars__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 113 "live_vars.m"
    MR_Integer ll_backend__live_vars__VarNum_7;
#line 113 "live_vars.m"
    MR_Word ll_backend__live_vars___Type_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 6087 "ll_backend.live_vars.c"
    MR_Box MR_CALL (* ll_backend__live_vars__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__live_vars__TypeClassInfo_for_enum_11, (MR_Integer) 0)), (MR_Integer) 5)));
#line 6089 "ll_backend.live_vars.c"
    MR_Box ll_backend__live_vars__conv1_VarNum_7;

#line 6092 "ll_backend.live_vars.c"
    {
#line 6094 "ll_backend.live_vars.c"
      ll_backend__live_vars__conv1_VarNum_7 = ll_backend__live_vars__func_0(((MR_Box) ll_backend__live_vars__TypeClassInfo_for_enum_11), ((MR_Box) (ll_backend__live_vars__Var_4)));
    }
#line 6097 "ll_backend.live_vars.c"
    ll_backend__live_vars__VarNum_7 = ((MR_Integer) ll_backend__live_vars__conv1_VarNum_7);
#line 115 "live_vars.m"
    {
#line 115 "live_vars.m"
      mercury__int__max_3_p_0(ll_backend__live_vars__VarNum_7, ll_backend__live_vars__STATE_VARIABLE_MaxVarNum_0_8, ll_backend__live_vars__STATE_VARIABLE_MaxVarNum_9);
#line 115 "live_vars.m"
      return;
    }
#line 113 "live_vars.m"
  }
#line 111 "live_vars.m"
}

#line 73 "live_vars.m"
void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_no_par_stack_10_p_0(
#line 73 "live_vars.m"
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_29,
#line 73 "live_vars.m"
  MR_Word ll_backend__live_vars__Goal0_11,
#line 73 "live_vars.m"
  MR_Word * ll_backend__live_vars__Goal_12,
#line 73 "live_vars.m"
  MR_Word ll_backend__live_vars__ResumeVars0_13,
#line 73 "live_vars.m"
  MR_Word ll_backend__live_vars__AllocData_14,
#line 73 "live_vars.m"
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_20,
#line 73 "live_vars.m"
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_21,
#line 73 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_Liveness_0_22,
#line 73 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_Liveness_23,
#line 73 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_24,
#line 73 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_25)
#line 73 "live_vars.m"
{
#line 145 "live_vars.m"
  {
#line 145 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;
#line 147 "live_vars.m"
    MR_Word ll_backend__live_vars___ParStackVars_19;

#line 147 "live_vars.m"
    {
#line 147 "live_vars.m"
      ll_backend__live_vars__build_live_sets_in_goal_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_29, ll_backend__live_vars__Goal0_11, ll_backend__live_vars__Goal_12, ll_backend__live_vars__ResumeVars0_13, ll_backend__live_vars__AllocData_14, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_20, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_21, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_22, ll_backend__live_vars__STATE_VARIABLE_Liveness_23, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_24, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__live_vars___ParStackVars_19);
    }
#line 145 "live_vars.m"
  }
#line 73 "live_vars.m"
}

#line 69 "live_vars.m"
void MR_CALL 
ll_backend__live_vars__at_recursive_call_for_loop_control_4_p_0(
#line 69 "live_vars.m"
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_5,
#line 69 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 69 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__2_2,
#line 69 "live_vars.m"
  MR_Box ll_backend__live_vars__HeadVar__3_3,
#line 69 "live_vars.m"
  MR_Box * ll_backend__live_vars__HeadVar__4_4)
#line 69 "live_vars.m"
{
#line 6170 "ll_backend.live_vars.c"
  {
#line 6172 "ll_backend.live_vars.c"
    MR_bool ll_backend__live_vars__succeeded;
#line 6174 "ll_backend.live_vars.c"
    void MR_CALL (* ll_backend__live_vars__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_5, (MR_Integer) 0)), (MR_Integer) 8)));

#line 6177 "ll_backend.live_vars.c"
    {
#line 6179 "ll_backend.live_vars.c"
      ll_backend__live_vars__func_0(((MR_Box) ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_5), ((MR_Box) (ll_backend__live_vars__HeadVar__1_1)), ((MR_Box) (ll_backend__live_vars__HeadVar__2_2)), ll_backend__live_vars__HeadVar__3_3, ll_backend__live_vars__HeadVar__4_4);
#line 6181 "ll_backend.live_vars.c"
      return;
    }
#line 6184 "ll_backend.live_vars.c"
  }
#line 69 "live_vars.m"
}

#line 67 "live_vars.m"
void MR_CALL 
ll_backend__live_vars__at_par_conj_4_p_0(
#line 67 "live_vars.m"
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_5,
#line 67 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 67 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__2_2,
#line 67 "live_vars.m"
  MR_Box ll_backend__live_vars__HeadVar__3_3,
#line 67 "live_vars.m"
  MR_Box * ll_backend__live_vars__HeadVar__4_4)
#line 67 "live_vars.m"
{
#line 6204 "ll_backend.live_vars.c"
  {
#line 6206 "ll_backend.live_vars.c"
    MR_bool ll_backend__live_vars__succeeded;
#line 6208 "ll_backend.live_vars.c"
    void MR_CALL (* ll_backend__live_vars__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_5, (MR_Integer) 0)), (MR_Integer) 7)));

#line 6211 "ll_backend.live_vars.c"
    {
#line 6213 "ll_backend.live_vars.c"
      ll_backend__live_vars__func_0(((MR_Box) ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_5), ((MR_Box) (ll_backend__live_vars__HeadVar__1_1)), ((MR_Box) (ll_backend__live_vars__HeadVar__2_2)), ll_backend__live_vars__HeadVar__3_3, ll_backend__live_vars__HeadVar__4_4);
#line 6215 "ll_backend.live_vars.c"
      return;
    }
#line 6218 "ll_backend.live_vars.c"
  }
#line 67 "live_vars.m"
}

#line 65 "live_vars.m"
void MR_CALL 
ll_backend__live_vars__at_resume_site_4_p_0(
#line 65 "live_vars.m"
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_5,
#line 65 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 65 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__2_2,
#line 65 "live_vars.m"
  MR_Box ll_backend__live_vars__HeadVar__3_3,
#line 65 "live_vars.m"
  MR_Box * ll_backend__live_vars__HeadVar__4_4)
#line 65 "live_vars.m"
{
#line 6238 "ll_backend.live_vars.c"
  {
#line 6240 "ll_backend.live_vars.c"
    MR_bool ll_backend__live_vars__succeeded;
#line 6242 "ll_backend.live_vars.c"
    void MR_CALL (* ll_backend__live_vars__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_5, (MR_Integer) 0)), (MR_Integer) 6)));

#line 6245 "ll_backend.live_vars.c"
    {
#line 6247 "ll_backend.live_vars.c"
      ll_backend__live_vars__func_0(((MR_Box) ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_5), ((MR_Box) (ll_backend__live_vars__HeadVar__1_1)), ((MR_Box) (ll_backend__live_vars__HeadVar__2_2)), ll_backend__live_vars__HeadVar__3_3, ll_backend__live_vars__HeadVar__4_4);
#line 6249 "ll_backend.live_vars.c"
      return;
    }
#line 6252 "ll_backend.live_vars.c"
  }
#line 65 "live_vars.m"
}

#line 63 "live_vars.m"
void MR_CALL 
ll_backend__live_vars__at_call_site_4_p_0(
#line 63 "live_vars.m"
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_5,
#line 63 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 63 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__2_2,
#line 63 "live_vars.m"
  MR_Box ll_backend__live_vars__HeadVar__3_3,
#line 63 "live_vars.m"
  MR_Box * ll_backend__live_vars__HeadVar__4_4)
#line 63 "live_vars.m"
{
#line 6272 "ll_backend.live_vars.c"
  {
#line 6274 "ll_backend.live_vars.c"
    MR_bool ll_backend__live_vars__succeeded;
#line 6276 "ll_backend.live_vars.c"
    void MR_CALL (* ll_backend__live_vars__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_5, (MR_Integer) 0)), (MR_Integer) 5)));

#line 6279 "ll_backend.live_vars.c"
    {
#line 6281 "ll_backend.live_vars.c"
      ll_backend__live_vars__func_0(((MR_Box) ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_5), ((MR_Box) (ll_backend__live_vars__HeadVar__1_1)), ((MR_Box) (ll_backend__live_vars__HeadVar__2_2)), ll_backend__live_vars__HeadVar__3_3, ll_backend__live_vars__HeadVar__4_4);
#line 6283 "ll_backend.live_vars.c"
      return;
    }
#line 6286 "ll_backend.live_vars.c"
  }
#line 63 "live_vars.m"
}

#line 104 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_dummy_type_array_4_p_0_1(
#line 104 "live_vars.m"
  MR_Box ll_backend__live_vars__closure_arg,
#line 104 "live_vars.m"
  MR_Box ll_backend__live_vars__wrapper_arg_1,
#line 104 "live_vars.m"
  MR_Box ll_backend__live_vars__wrapper_arg_2,
#line 104 "live_vars.m"
  MR_Box * ll_backend__live_vars__wrapper_arg_3)
#line 104 "live_vars.m"
{
#line 104 "live_vars.m"
  {
#line 104 "live_vars.m"
    MR_Box ll_backend__live_vars__closure = ll_backend__live_vars__closure_arg;
#line 104 "live_vars.m"
    MR_Integer ll_backend__live_vars__conv0_STATE_VARIABLE_MaxVarNum_9;

#line 104 "live_vars.m"
    {
#line 104 "live_vars.m"
      ll_backend__live_vars__max_var_num_3_p_0(((MR_Word) ll_backend__live_vars__wrapper_arg_1), ((MR_Integer) ll_backend__live_vars__wrapper_arg_2), &ll_backend__live_vars__conv0_STATE_VARIABLE_MaxVarNum_9);
    }
#line 104 "live_vars.m"
    *ll_backend__live_vars__wrapper_arg_3 = ((MR_Box) (ll_backend__live_vars__conv0_STATE_VARIABLE_MaxVarNum_9));
#line 104 "live_vars.m"
  }
#line 104 "live_vars.m"
}

#line 39 "live_vars.m"
void MR_CALL 
ll_backend__live_vars__build_dummy_type_array_4_p_0(
#line 39 "live_vars.m"
  MR_Word ll_backend__live_vars__ModuleInfo_5,
#line 39 "live_vars.m"
  MR_Word ll_backend__live_vars__VarTypes_6,
#line 39 "live_vars.m"
  MR_ArrayPtr * ll_backend__live_vars__DummyTypeArray_7,
#line 39 "live_vars.m"
  MR_Word * ll_backend__live_vars__DummyVars_8)
#line 39 "live_vars.m"
{
#line 102 "live_vars.m"
  {
#line 102 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;
#line 102 "live_vars.m"
    MR_Word ll_backend__live_vars__VarsTypes_9;
#line 102 "live_vars.m"
    MR_Integer ll_backend__live_vars__MaxVarNum_10;
#line 102 "live_vars.m"
    MR_ArrayPtr ll_backend__live_vars__DummyTypeArray0_11;
#line 102 "live_vars.m"
    MR_Integer ll_backend__live_vars__V_14_14;
#line 104 "live_vars.m"
    MR_Box ll_backend__live_vars__conv1_MaxVarNum_10;
#line 107 "live_vars.m"
    MR_ArrayPtr ll_backend__live_vars__conv2_DummyTypeArray0_11;

#line 103 "live_vars.m"
    {
#line 103 "live_vars.m"
      parse_tree__prog_data__vartypes_to_assoc_list_2_p_0(ll_backend__live_vars__VarTypes_6, &ll_backend__live_vars__VarsTypes_9);
    }
#line 104 "live_vars.m"
    {
#line 104 "live_vars.m"
      mercury__list__foldl_4_p_0((MR_Word) &ll_backend__live_vars_scalar_common_2[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__live_vars_scalar_common_2[2], ll_backend__live_vars__VarsTypes_9, ((MR_Box) ((MR_Integer) 0)), &ll_backend__live_vars__conv1_MaxVarNum_10);
    }
#line 104 "live_vars.m"
    ll_backend__live_vars__MaxVarNum_10 = ((MR_Integer) ll_backend__live_vars__conv1_MaxVarNum_10);
#line 107 "live_vars.m"
    ll_backend__live_vars__V_14_14 = (ll_backend__live_vars__MaxVarNum_10 + (MR_Integer) 1);
#line 107 "live_vars.m"
    {
#line 107 "live_vars.m"
      mercury__array__init_3_p_0((MR_Word) &check_hlds__type_util__check_hlds__type_util__type_ctor_info_is_dummy_type_0, ll_backend__live_vars__V_14_14, ((MR_Box) ((MR_Integer) 1)), &ll_backend__live_vars__conv2_DummyTypeArray0_11);
    }
#line 107 "live_vars.m"
    ll_backend__live_vars__DummyTypeArray0_11 = (MR_ArrayPtr) ll_backend__live_vars__conv2_DummyTypeArray0_11;
#line 108 "live_vars.m"
    {
#line 108 "live_vars.m"
      ll_backend__live_vars__set_dummy_array_elements_6_p_0(ll_backend__live_vars__ModuleInfo_5, ll_backend__live_vars__VarsTypes_9, ll_backend__live_vars__DummyTypeArray0_11, ll_backend__live_vars__DummyTypeArray_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__live_vars__DummyVars_8);
#line 108 "live_vars.m"
      return;
    }
#line 102 "live_vars.m"
  }
#line 39 "live_vars.m"
}

void mercury__ll_backend__live_vars__init(void)
{
}

void mercury__ll_backend__live_vars__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__live_vars__ll_backend__live_vars__type_ctor_info_alloc_data_0);
	MR_register_type_ctor_info(&ll_backend__live_vars__ll_backend__live_vars__type_ctor_info_parallel_stackvars_0);
}

void mercury__ll_backend__live_vars__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.live_vars. */
