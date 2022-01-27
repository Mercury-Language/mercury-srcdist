/*
** Automatically generated from `live_vars.m'
** by the Mercury compiler,
** version rotd-2015-02-20
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
#include "integer.mih"
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
struct ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0_s {
#line 244 "live_vars.m"
  MR_bool ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded;
#line 290 "live_vars.m"
  MR_Word ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Goals_238;
#line 313 "live_vars.m"
  jmp_buf ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__commit_0;
#line 313 "live_vars.m"
  MR_Word ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__DisjunctGoalInfo_44;
#line 313 "live_vars.m"
  MR_Word ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__DisjunctResumePoint_45;
#line 313 "live_vars.m"
  MR_Word ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Locs_47;
#line 313 "live_vars.m"
  MR_Word ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__V_218_218;
#line 313 "live_vars.m"
  MR_Word ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Disjunct_236;
#line 313 "live_vars.m"
  MR_Word ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__V_337_337;
#line 313 "live_vars.m"
  MR_Box ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__conv1_Disjunct_236;
#line 232 "live_vars.m"
};


#line 167 "ll_backend.live_vars.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__live_vars__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 170 "ll_backend.live_vars.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__live_vars__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 173 "ll_backend.live_vars.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__live_vars__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 176 "ll_backend.live_vars.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__live_vars__array__ti_array_1check_hlds__type_util__type_ctor_info_is_dummy_type_0;

#line 179 "ll_backend.live_vars.c"
static const MR_PseudoTypeInfo ll_backend__live_vars__ll_backend__live_vars__field_types_alloc_data_0_0[6];

#line 182 "ll_backend.live_vars.c"
static const MR_ConstString ll_backend__live_vars__ll_backend__live_vars__field_names_alloc_data_0_0[6];

#line 185 "ll_backend.live_vars.c"
static const MR_DuFunctorDesc ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_alloc_data_0_0;

#line 188 "ll_backend.live_vars.c"
static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_alloc_data_0_0[1];

#line 191 "ll_backend.live_vars.c"
static const MR_DuPtagLayout ll_backend__live_vars__ll_backend__live_vars__du_ptag_ordered_alloc_data_0[1];

#line 194 "ll_backend.live_vars.c"
static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_name_ordered_alloc_data_0[1];

#line 197 "ll_backend.live_vars.c"
static const MR_Integer ll_backend__live_vars__ll_backend__live_vars__functor_number_map_alloc_data_0[1];

#line 200 "ll_backend.live_vars.c"
static const MR_DuFunctorDesc ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_0;

#line 203 "ll_backend.live_vars.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__live_vars__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 206 "ll_backend.live_vars.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__live_vars__list__ti_list_1tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 209 "ll_backend.live_vars.c"
static const MR_PseudoTypeInfo ll_backend__live_vars__ll_backend__live_vars__field_types_parallel_stackvars_0_1[3];

#line 212 "ll_backend.live_vars.c"
static const MR_DuFunctorDesc ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_1;

#line 215 "ll_backend.live_vars.c"
static const MR_PseudoTypeInfo ll_backend__live_vars__ll_backend__live_vars__field_types_parallel_stackvars_0_2[2];

#line 218 "ll_backend.live_vars.c"
static const MR_DuFunctorDesc ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_2;

#line 221 "ll_backend.live_vars.c"
static const MR_PseudoTypeInfo ll_backend__live_vars__ll_backend__live_vars__field_types_parallel_stackvars_0_3[3];

#line 224 "ll_backend.live_vars.c"
static const MR_DuFunctorDesc ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_3;

#line 227 "ll_backend.live_vars.c"
static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_parallel_stackvars_0_0[1];

#line 230 "ll_backend.live_vars.c"
static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_parallel_stackvars_0_1[1];

#line 233 "ll_backend.live_vars.c"
static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_parallel_stackvars_0_2[1];

#line 236 "ll_backend.live_vars.c"
static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_parallel_stackvars_0_3[1];

#line 239 "ll_backend.live_vars.c"
static const MR_DuPtagLayout ll_backend__live_vars__ll_backend__live_vars__du_ptag_ordered_parallel_stackvars_0[4];

#line 242 "ll_backend.live_vars.c"
static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_name_ordered_parallel_stackvars_0[4];

#line 245 "ll_backend.live_vars.c"
static const MR_Integer ll_backend__live_vars__ll_backend__live_vars__functor_number_map_parallel_stackvars_0[4];

#line 248 "ll_backend.live_vars.c"
static const MR_ConstString ll_backend__live_vars__ll_backend__live_vars__type_class_id_var_names_stack_alloc_info_1[1];

#line 251 "ll_backend.live_vars.c"
static const MR_TypeClassMethod ll_backend__live_vars__ll_backend__live_vars__type_class_id_method_ids_stack_alloc_info_1[4];

#line 254 "ll_backend.live_vars.c"
static const MR_TypeClassId ll_backend__live_vars__ll_backend__live_vars__type_class_id_stack_alloc_info_1;

#line 257 "ll_backend.live_vars.c"
static MR_bool MR_CALL 
ll_backend__live_vars____Unify____alloc_data_0_0_10001(
#line 260 "ll_backend.live_vars.c"
  MR_Box ll_backend__live_vars__wrapper_arg_1,
#line 262 "ll_backend.live_vars.c"
  MR_Box ll_backend__live_vars__wrapper_arg_2);

#line 265 "ll_backend.live_vars.c"
static void MR_CALL 
ll_backend__live_vars____Compare____alloc_data_0_0_10001(
#line 268 "ll_backend.live_vars.c"
  MR_Box * ll_backend__live_vars__wrapper_arg_1,
#line 270 "ll_backend.live_vars.c"
  MR_Box ll_backend__live_vars__wrapper_arg_2,
#line 272 "ll_backend.live_vars.c"
  MR_Box ll_backend__live_vars__wrapper_arg_3);

#line 275 "ll_backend.live_vars.c"
static MR_bool MR_CALL 
ll_backend__live_vars____Unify____parallel_stackvars_0_0_10001(
#line 278 "ll_backend.live_vars.c"
  MR_Box ll_backend__live_vars__wrapper_arg_1,
#line 280 "ll_backend.live_vars.c"
  MR_Box ll_backend__live_vars__wrapper_arg_2);

#line 283 "ll_backend.live_vars.c"
static void MR_CALL 
ll_backend__live_vars____Compare____parallel_stackvars_0_0_10001(
#line 286 "ll_backend.live_vars.c"
  MR_Box * ll_backend__live_vars__wrapper_arg_1,
#line 288 "ll_backend.live_vars.c"
  MR_Box ll_backend__live_vars__wrapper_arg_2,
#line 290 "ll_backend.live_vars.c"
  MR_Box ll_backend__live_vars__wrapper_arg_3);

#line 811 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars____Compare____parallel_stackvars_0_0(
#line 811 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__1_1,
#line 811 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__2_2,
#line 811 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__3_3);

#line 811 "live_vars.m"
static MR_bool MR_CALL 
ll_backend__live_vars____Unify____parallel_stackvars_0_0(
#line 811 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 811 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__2_2);

#line 1007 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__par_stack_vars_recursive_call_4_p_0(
#line 1007 "live_vars.m"
  MR_Word * ll_backend__live_vars__MaybeNeedLC_5,
#line 1007 "live_vars.m"
  MR_Word * ll_backend__live_vars__DelayDeathSet_6,
#line 1007 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_17,
#line 1007 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_18);

#line 986 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__par_stack_vars_get_nonlocals_2_p_0(
#line 986 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 986 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__2_2);

#line 967 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__par_stack_vars_accumulate_stack_vars_3_p_0(
#line 967 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 967 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__2_2,
#line 967 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__3_3);

#line 956 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__par_stack_vars_get_stackvars_2_p_0(
#line 956 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 956 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__2_2);

#line 929 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__par_stack_vars_end_loop_control_4_p_0(
#line 929 "live_vars.m"
  MR_Word ll_backend__live_vars__NewWouldDieSet_5,
#line 929 "live_vars.m"
  MR_Word ll_backend__live_vars__OldParStackVars_6,
#line 929 "live_vars.m"
  MR_Word ll_backend__live_vars__ParStackVars0_7,
#line 929 "live_vars.m"
  MR_Word * ll_backend__live_vars__ParStackVars_8);

#line 912 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__par_stack_vars_start_loop_control_3_p_0(
#line 912 "live_vars.m"
  MR_Word ll_backend__live_vars__NonLocals_4,
#line 912 "live_vars.m"
  MR_Word ll_backend__live_vars__ParStackVars0_5,
#line 912 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__3_3);

#line 867 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__par_stack_vars_end_parallel_conjunction_4_p_0(
#line 867 "live_vars.m"
  MR_Word ll_backend__live_vars__LiveSet_5,
#line 867 "live_vars.m"
  MR_Word ll_backend__live_vars__OuterParStackVars_6,
#line 867 "live_vars.m"
  MR_Word ll_backend__live_vars__ParStackVars0_7,
#line 867 "live_vars.m"
  MR_Word * ll_backend__live_vars__ParStackVars_8);

#line 859 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__par_stack_vars_start_parallel_conjunction_3_p_0(
#line 859 "live_vars.m"
  MR_Word ll_backend__live_vars__LiveSet_4,
#line 859 "live_vars.m"
  MR_Word ll_backend__live_vars__OuterParStackVars_5,
#line 859 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__3_3);

#line 798 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__record_par_conj_6_p_0(
#line 798 "live_vars.m"
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_17,
#line 798 "live_vars.m"
  MR_Word ll_backend__live_vars__NeedInParConj_7,
#line 798 "live_vars.m"
  MR_Word ll_backend__live_vars__AllocData_8,
#line 798 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_GoalInfo_0_11,
#line 798 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_GoalInfo_12,
#line 798 "live_vars.m"
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_13,
#line 798 "live_vars.m"
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_14);

#line 721 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_cases_12_p_0(
#line 721 "live_vars.m"
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_54,
#line 721 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 721 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__2_2,
#line 721 "live_vars.m"
  MR_Word ll_backend__live_vars__ResumeVars0_3,
#line 721 "live_vars.m"
  MR_Word ll_backend__live_vars__AllocData_4,
#line 721 "live_vars.m"
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_5,
#line 721 "live_vars.m"
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_6,
#line 721 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__7_7,
#line 721 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__8_8,
#line 721 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__9_9,
#line 721 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__10_10,
#line 721 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_11,
#line 721 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_12);

#line 677 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_disj_13_p_0(
#line 677 "live_vars.m"
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_61,
#line 677 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 677 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__2_2,
#line 677 "live_vars.m"
  MR_Word ll_backend__live_vars__DisjGoalInfo_3,
#line 677 "live_vars.m"
  MR_Word ll_backend__live_vars__ResumeVars0_4,
#line 677 "live_vars.m"
  MR_Word ll_backend__live_vars__AllocData_5,
#line 677 "live_vars.m"
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_6,
#line 677 "live_vars.m"
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_7,
#line 677 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__8_8,
#line 677 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__9_9,
#line 677 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__10_10,
#line 677 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__11_11,
#line 677 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_12,
#line 677 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_13);

#line 657 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_par_conj_12_p_0(
#line 657 "live_vars.m"
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_50,
#line 657 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 657 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__2_2,
#line 657 "live_vars.m"
  MR_Word ll_backend__live_vars__ResumeVars0_3,
#line 657 "live_vars.m"
  MR_Word ll_backend__live_vars__AllocData_4,
#line 657 "live_vars.m"
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_5,
#line 657 "live_vars.m"
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_6,
#line 657 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__7_7,
#line 657 "live_vars.m"
  MR_Word * ll_backend__live_vars__Liveness_8,
#line 657 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_9,
#line 657 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_10,
#line 657 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_11,
#line 657 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_12);

#line 629 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_conj_12_p_0(
#line 629 "live_vars.m"
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_60,
#line 629 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 629 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__2_2,
#line 629 "live_vars.m"
  MR_Word ll_backend__live_vars__ResumeVars0_3,
#line 629 "live_vars.m"
  MR_Word ll_backend__live_vars__AllocData_4,
#line 629 "live_vars.m"
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_5,
#line 629 "live_vars.m"
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_6,
#line 629 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_Liveness_0_7,
#line 629 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_Liveness_8,
#line 629 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_9,
#line 629 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_10,
#line 629 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_11,
#line 629 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_12);

#line 578 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_call_12_p_0(
#line 578 "live_vars.m"
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_57,
#line 578 "live_vars.m"
  MR_Word ll_backend__live_vars__OutVars_13,
#line 578 "live_vars.m"
  MR_Word ll_backend__live_vars__GoalInfo0_14,
#line 578 "live_vars.m"
  MR_Word * ll_backend__live_vars__GoalInfo_15,
#line 578 "live_vars.m"
  MR_Word ll_backend__live_vars__ResumeVars0_16,
#line 578 "live_vars.m"
  MR_Word ll_backend__live_vars__AllocData_17,
#line 578 "live_vars.m"
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_27,
#line 578 "live_vars.m"
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_28,
#line 578 "live_vars.m"
  MR_Word ll_backend__live_vars__Liveness_19,
#line 578 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_29,
#line 578 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_30,
#line 578 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_31,
#line 578 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_32);

#line 540 "live_vars.m"
static MR_Box MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_1(
#line 540 "live_vars.m"
  MR_Box ll_backend__live_vars__closure_arg,
#line 540 "live_vars.m"
  MR_Box ll_backend__live_vars__wrapper_arg_1);

#line 313 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_2(
#line 313 "live_vars.m"
  void * ll_backend__live_vars__env_ptr_arg);

#line 313 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_4(
#line 313 "live_vars.m"
  void * ll_backend__live_vars__env_ptr_arg);

#line 313 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_3(
#line 313 "live_vars.m"
  void * ll_backend__live_vars__env_ptr_arg);

#line 313 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_5(
#line 313 "live_vars.m"
  void * ll_backend__live_vars__env_ptr_arg);

#line 232 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0(
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
    ((MR_Box) (ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_1)),
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



#line 807 "ll_backend.live_vars.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__live_vars__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 815 "ll_backend.live_vars.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__live_vars__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__live_vars__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 824 "ll_backend.live_vars.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__live_vars__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 832 "ll_backend.live_vars.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__live_vars__array__ti_array_1check_hlds__type_util__type_ctor_info_is_dummy_type_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &check_hlds__type_util__check_hlds__type_util__type_ctor_info_is_dummy_type_0
  }
};

#line 840 "ll_backend.live_vars.c"
static const MR_PseudoTypeInfo ll_backend__live_vars__ll_backend__live_vars__field_types_alloc_data_0_0[6] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &ll_backend__live_vars__array__ti_array_1check_hlds__type_util__type_ctor_info_is_dummy_type_0
};

#line 850 "ll_backend.live_vars.c"
static const MR_ConstString ll_backend__live_vars__ll_backend__live_vars__field_names_alloc_data_0_0[6] = {
  (MR_String) "ad_module_info",
  (MR_String) "ad_proc_info",
  (MR_String) "ad_pred_proc_id",
  (MR_String) "ad_typeinfo_liveness",
  (MR_String) "ad_opt_no_return_calls",
  (MR_String) "ad_dummy_var_array"
};

#line 860 "ll_backend.live_vars.c"
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

#line 875 "ll_backend.live_vars.c"
static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_alloc_data_0_0[1] = {
  &ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_alloc_data_0_0
};

#line 880 "ll_backend.live_vars.c"
static const MR_DuPtagLayout ll_backend__live_vars__ll_backend__live_vars__du_ptag_ordered_alloc_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_alloc_data_0_0
  }
};

#line 889 "ll_backend.live_vars.c"
static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_name_ordered_alloc_data_0[1] = {
  &ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_alloc_data_0_0
};

#line 894 "ll_backend.live_vars.c"
static const MR_Integer ll_backend__live_vars__ll_backend__live_vars__functor_number_map_alloc_data_0[1] = {
  (MR_Integer) 0
};

#line 899 "ll_backend.live_vars.c"
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

#line 920 "ll_backend.live_vars.c"
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

#line 935 "ll_backend.live_vars.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__live_vars__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_TypeInfo) &ll_backend__live_vars__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 943 "ll_backend.live_vars.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__live_vars__list__ti_list_1tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__live_vars__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 951 "ll_backend.live_vars.c"
static const MR_PseudoTypeInfo ll_backend__live_vars__ll_backend__live_vars__field_types_parallel_stackvars_0_1[3] = {
  (MR_PseudoTypeInfo) &ll_backend__live_vars__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__live_vars__list__ti_list_1tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__live_vars__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 958 "ll_backend.live_vars.c"
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

#line 973 "ll_backend.live_vars.c"
static const MR_PseudoTypeInfo ll_backend__live_vars__ll_backend__live_vars__field_types_parallel_stackvars_0_2[2] = {
  (MR_PseudoTypeInfo) &ll_backend__live_vars__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__live_vars__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 979 "ll_backend.live_vars.c"
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

#line 994 "ll_backend.live_vars.c"
static const MR_PseudoTypeInfo ll_backend__live_vars__ll_backend__live_vars__field_types_parallel_stackvars_0_3[3] = {
  (MR_PseudoTypeInfo) &ll_backend__live_vars__list__ti_list_1tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__live_vars__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__live_vars__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1001 "ll_backend.live_vars.c"
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

#line 1016 "ll_backend.live_vars.c"
static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_parallel_stackvars_0_0[1] = {
  &ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_0
};

#line 1021 "ll_backend.live_vars.c"
static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_parallel_stackvars_0_1[1] = {
  &ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_1
};

#line 1026 "ll_backend.live_vars.c"
static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_parallel_stackvars_0_2[1] = {
  &ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_2
};

#line 1031 "ll_backend.live_vars.c"
static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_parallel_stackvars_0_3[1] = {
  &ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_3
};

#line 1036 "ll_backend.live_vars.c"
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

#line 1060 "ll_backend.live_vars.c"
static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_name_ordered_parallel_stackvars_0[4] = {
  &ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_3,
  &ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_2,
  &ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_0,
  &ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_1
};

#line 1068 "ll_backend.live_vars.c"
static const MR_Integer ll_backend__live_vars__ll_backend__live_vars__functor_number_map_parallel_stackvars_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1076 "ll_backend.live_vars.c"
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

#line 1097 "ll_backend.live_vars.c"
static const MR_ConstString ll_backend__live_vars__ll_backend__live_vars__type_class_id_var_names_stack_alloc_info_1[1] = {
  (MR_String) "T"
};

#line 1102 "ll_backend.live_vars.c"
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

#line 1126 "ll_backend.live_vars.c"
static const MR_TypeClassId ll_backend__live_vars__ll_backend__live_vars__type_class_id_stack_alloc_info_1 = {
  (MR_String) "ll_backend.live_vars",
  (MR_String) "stack_alloc_info",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__live_vars__ll_backend__live_vars__type_class_id_var_names_stack_alloc_info_1,
  ll_backend__live_vars__ll_backend__live_vars__type_class_id_method_ids_stack_alloc_info_1
};

#line 1137 "ll_backend.live_vars.c"
const MR_TypeClassDeclStruct ll_backend__live_vars__ll_backend__live_vars__type_class_decl_stack_alloc_info_1 = {
  &ll_backend__live_vars__ll_backend__live_vars__type_class_id_stack_alloc_info_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 1145 "ll_backend.live_vars.c"
static MR_bool MR_CALL 
ll_backend__live_vars____Unify____alloc_data_0_0_10001(
#line 1148 "ll_backend.live_vars.c"
  MR_Box ll_backend__live_vars__wrapper_arg_1,
#line 1150 "ll_backend.live_vars.c"
  MR_Box ll_backend__live_vars__wrapper_arg_2)
#line 1152 "ll_backend.live_vars.c"
{
#line 1154 "ll_backend.live_vars.c"
  {
#line 1156 "ll_backend.live_vars.c"
    MR_bool ll_backend__live_vars__succeeded;

#line 1159 "ll_backend.live_vars.c"
    {
#line 1161 "ll_backend.live_vars.c"
      ll_backend__live_vars__succeeded = ll_backend__live_vars____Unify____alloc_data_0_0(((MR_Word) ll_backend__live_vars__wrapper_arg_1), ((MR_Word) ll_backend__live_vars__wrapper_arg_2));
    }
#line 1164 "ll_backend.live_vars.c"
    return ll_backend__live_vars__succeeded;
#line 1166 "ll_backend.live_vars.c"
  }
#line 1168 "ll_backend.live_vars.c"
}

#line 1171 "ll_backend.live_vars.c"
static void MR_CALL 
ll_backend__live_vars____Compare____alloc_data_0_0_10001(
#line 1174 "ll_backend.live_vars.c"
  MR_Box * ll_backend__live_vars__wrapper_arg_1,
#line 1176 "ll_backend.live_vars.c"
  MR_Box ll_backend__live_vars__wrapper_arg_2,
#line 1178 "ll_backend.live_vars.c"
  MR_Box ll_backend__live_vars__wrapper_arg_3)
#line 1180 "ll_backend.live_vars.c"
{
#line 1182 "ll_backend.live_vars.c"
  {
#line 1184 "ll_backend.live_vars.c"
    MR_Word ll_backend__live_vars__conv0_HeadVar__1_1;

#line 1187 "ll_backend.live_vars.c"
    {
#line 1189 "ll_backend.live_vars.c"
      ll_backend__live_vars____Compare____alloc_data_0_0(&ll_backend__live_vars__conv0_HeadVar__1_1, ((MR_Word) ll_backend__live_vars__wrapper_arg_2), ((MR_Word) ll_backend__live_vars__wrapper_arg_3));
    }
#line 1192 "ll_backend.live_vars.c"
    *ll_backend__live_vars__wrapper_arg_1 = ((MR_Box) (ll_backend__live_vars__conv0_HeadVar__1_1));
#line 1194 "ll_backend.live_vars.c"
  }
#line 1196 "ll_backend.live_vars.c"
}

#line 1199 "ll_backend.live_vars.c"
static MR_bool MR_CALL 
ll_backend__live_vars____Unify____parallel_stackvars_0_0_10001(
#line 1202 "ll_backend.live_vars.c"
  MR_Box ll_backend__live_vars__wrapper_arg_1,
#line 1204 "ll_backend.live_vars.c"
  MR_Box ll_backend__live_vars__wrapper_arg_2)
#line 1206 "ll_backend.live_vars.c"
{
#line 1208 "ll_backend.live_vars.c"
  {
#line 1210 "ll_backend.live_vars.c"
    MR_bool ll_backend__live_vars__succeeded;

#line 1213 "ll_backend.live_vars.c"
    {
#line 1215 "ll_backend.live_vars.c"
      ll_backend__live_vars__succeeded = ll_backend__live_vars____Unify____parallel_stackvars_0_0(((MR_Word) ll_backend__live_vars__wrapper_arg_1), ((MR_Word) ll_backend__live_vars__wrapper_arg_2));
    }
#line 1218 "ll_backend.live_vars.c"
    return ll_backend__live_vars__succeeded;
#line 1220 "ll_backend.live_vars.c"
  }
#line 1222 "ll_backend.live_vars.c"
}

#line 1225 "ll_backend.live_vars.c"
static void MR_CALL 
ll_backend__live_vars____Compare____parallel_stackvars_0_0_10001(
#line 1228 "ll_backend.live_vars.c"
  MR_Box * ll_backend__live_vars__wrapper_arg_1,
#line 1230 "ll_backend.live_vars.c"
  MR_Box ll_backend__live_vars__wrapper_arg_2,
#line 1232 "ll_backend.live_vars.c"
  MR_Box ll_backend__live_vars__wrapper_arg_3)
#line 1234 "ll_backend.live_vars.c"
{
#line 1236 "ll_backend.live_vars.c"
  {
#line 1238 "ll_backend.live_vars.c"
    MR_Word ll_backend__live_vars__conv0_HeadVar__1_1;

#line 1241 "ll_backend.live_vars.c"
    {
#line 1243 "ll_backend.live_vars.c"
      ll_backend__live_vars____Compare____parallel_stackvars_0_0(&ll_backend__live_vars__conv0_HeadVar__1_1, ((MR_Word) ll_backend__live_vars__wrapper_arg_2), ((MR_Word) ll_backend__live_vars__wrapper_arg_3));
    }
#line 1246 "ll_backend.live_vars.c"
    *ll_backend__live_vars__wrapper_arg_1 = ((MR_Box) (ll_backend__live_vars__conv0_HeadVar__1_1));
#line 1248 "ll_backend.live_vars.c"
  }
#line 1250 "ll_backend.live_vars.c"
}

#line 811 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars____Compare____parallel_stackvars_0_0(
#line 811 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__1_1,
#line 811 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__2_2,
#line 811 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__3_3)
#line 811 "live_vars.m"
{
#line 811 "live_vars.m"
  {
#line 811 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;
#line 811 "live_vars.m"
    MR_Integer ll_backend__live_vars__CastX_73 = (MR_Integer) ll_backend__live_vars__HeadVar__2_2;
#line 811 "live_vars.m"
    MR_Integer ll_backend__live_vars__CastY_74 = (MR_Integer) ll_backend__live_vars__HeadVar__3_3;

#line 811 "live_vars.m"
    ll_backend__live_vars__succeeded = (ll_backend__live_vars__CastX_73 == ll_backend__live_vars__CastY_74);
#line 811 "live_vars.m"
    if (ll_backend__live_vars__succeeded)
#line 1277 "ll_backend.live_vars.c"
      *ll_backend__live_vars__HeadVar__1_1 = (MR_Integer) 0;
#line 811 "live_vars.m"
    else
#line 811 "live_vars.m"
      if ((ll_backend__live_vars__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 811 "live_vars.m"
        if ((ll_backend__live_vars__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 811 "live_vars.m"
          *ll_backend__live_vars__HeadVar__1_1 = (MR_Integer) 0;
#line 811 "live_vars.m"
        else
#line 811 "live_vars.m"
          if (((MR_tag((MR_Word) ll_backend__live_vars__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 1291 "ll_backend.live_vars.c"
            *ll_backend__live_vars__HeadVar__1_1 = (MR_Integer) 1;
#line 811 "live_vars.m"
          else
#line 811 "live_vars.m"
            if (((MR_tag((MR_Word) ll_backend__live_vars__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1297 "ll_backend.live_vars.c"
              *ll_backend__live_vars__HeadVar__1_1 = (MR_Integer) 1;
#line 811 "live_vars.m"
            else
#line 1301 "ll_backend.live_vars.c"
              *ll_backend__live_vars__HeadVar__1_1 = (MR_Integer) 1;
#line 811 "live_vars.m"
      else
#line 811 "live_vars.m"
        if (((MR_tag((MR_Word) ll_backend__live_vars__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
#line 811 "live_vars.m"
          {
#line 811 "live_vars.m"
            MR_Word ll_backend__live_vars__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 2)));
#line 811 "live_vars.m"
            MR_Word ll_backend__live_vars__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 1)));
#line 811 "live_vars.m"
            MR_Word ll_backend__live_vars__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 0)));

#line 811 "live_vars.m"
            if ((ll_backend__live_vars__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1318 "ll_backend.live_vars.c"
              *ll_backend__live_vars__HeadVar__1_1 = (MR_Integer) 2;
#line 811 "live_vars.m"
            else
#line 811 "live_vars.m"
              if (((MR_tag((MR_Word) ll_backend__live_vars__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 811 "live_vars.m"
                {
#line 811 "live_vars.m"
                  MR_Word ll_backend__live_vars__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__3_3, (MR_Integer) 0)));
#line 811 "live_vars.m"
                  MR_Word ll_backend__live_vars__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__3_3, (MR_Integer) 1)));
#line 811 "live_vars.m"
                  MR_Word ll_backend__live_vars__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__3_3, (MR_Integer) 2)));
#line 811 "live_vars.m"
                  MR_Word ll_backend__live_vars__V_71_71;

#line 811 "live_vars.m"
                  {
#line 811 "live_vars.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__live_vars_scalar_common_1[3], &ll_backend__live_vars__V_71_71, ((MR_Box) (ll_backend__live_vars__V_85_85)), ((MR_Box) (ll_backend__live_vars__V_68_68)));
                  }
#line 1340 "ll_backend.live_vars.c"
                  ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_71_71 == (MR_Integer) 0);
#line 811 "live_vars.m"
                  ll_backend__live_vars__succeeded = !(ll_backend__live_vars__succeeded);
#line 811 "live_vars.m"
                  if (ll_backend__live_vars__succeeded)
#line 811 "live_vars.m"
                    *ll_backend__live_vars__HeadVar__1_1 = ll_backend__live_vars__V_71_71;
#line 811 "live_vars.m"
                  else
#line 811 "live_vars.m"
                    {
#line 811 "live_vars.m"
                      MR_Word ll_backend__live_vars__V_72_72;

#line 811 "live_vars.m"
                      {
#line 811 "live_vars.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__live_vars_scalar_common_1[2], &ll_backend__live_vars__V_72_72, ((MR_Box) (ll_backend__live_vars__V_84_84)), ((MR_Box) (ll_backend__live_vars__V_69_69)));
                      }
#line 1360 "ll_backend.live_vars.c"
                      ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_72_72 == (MR_Integer) 0);
#line 811 "live_vars.m"
                      ll_backend__live_vars__succeeded = !(ll_backend__live_vars__succeeded);
#line 811 "live_vars.m"
                      if (ll_backend__live_vars__succeeded)
#line 811 "live_vars.m"
                        *ll_backend__live_vars__HeadVar__1_1 = ll_backend__live_vars__V_72_72;
#line 811 "live_vars.m"
                      else
#line 811 "live_vars.m"
                        {
#line 811 "live_vars.m"
                          {
#line 811 "live_vars.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__live_vars_scalar_common_1[2], ll_backend__live_vars__HeadVar__1_1, ((MR_Box) (ll_backend__live_vars__V_83_83)), ((MR_Box) (ll_backend__live_vars__V_70_70)));
#line 811 "live_vars.m"
                            return;
                          }
#line 811 "live_vars.m"
                        }
#line 811 "live_vars.m"
                    }
#line 811 "live_vars.m"
                }
#line 811 "live_vars.m"
              else
#line 811 "live_vars.m"
                if (((MR_tag((MR_Word) ll_backend__live_vars__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1389 "ll_backend.live_vars.c"
                  *ll_backend__live_vars__HeadVar__1_1 = (MR_Integer) 2;
#line 811 "live_vars.m"
                else
#line 1393 "ll_backend.live_vars.c"
                  *ll_backend__live_vars__HeadVar__1_1 = (MR_Integer) 2;
#line 811 "live_vars.m"
          }
#line 811 "live_vars.m"
        else
#line 811 "live_vars.m"
          if (((MR_tag((MR_Word) ll_backend__live_vars__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 811 "live_vars.m"
            {
#line 811 "live_vars.m"
              MR_Word ll_backend__live_vars__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 1)));
#line 811 "live_vars.m"
              MR_Word ll_backend__live_vars__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 0)));

#line 811 "live_vars.m"
              if ((ll_backend__live_vars__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1410 "ll_backend.live_vars.c"
                *ll_backend__live_vars__HeadVar__1_1 = (MR_Integer) 2;
#line 811 "live_vars.m"
              else
#line 811 "live_vars.m"
                if (((MR_tag((MR_Word) ll_backend__live_vars__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 1416 "ll_backend.live_vars.c"
                  *ll_backend__live_vars__HeadVar__1_1 = (MR_Integer) 1;
#line 811 "live_vars.m"
                else
#line 811 "live_vars.m"
                  if (((MR_tag((MR_Word) ll_backend__live_vars__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 811 "live_vars.m"
                    {
#line 811 "live_vars.m"
                      MR_Word ll_backend__live_vars__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__HeadVar__3_3, (MR_Integer) 0)));
#line 811 "live_vars.m"
                      MR_Word ll_backend__live_vars__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__HeadVar__3_3, (MR_Integer) 1)));
#line 811 "live_vars.m"
                      MR_Word ll_backend__live_vars__V_45_45;

#line 811 "live_vars.m"
                      {
#line 811 "live_vars.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__live_vars_scalar_common_1[2], &ll_backend__live_vars__V_45_45, ((MR_Box) (ll_backend__live_vars__V_87_87)), ((MR_Box) (ll_backend__live_vars__V_43_43)));
                      }
#line 1436 "ll_backend.live_vars.c"
                      ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_45_45 == (MR_Integer) 0);
#line 811 "live_vars.m"
                      ll_backend__live_vars__succeeded = !(ll_backend__live_vars__succeeded);
#line 811 "live_vars.m"
                      if (ll_backend__live_vars__succeeded)
#line 811 "live_vars.m"
                        *ll_backend__live_vars__HeadVar__1_1 = ll_backend__live_vars__V_45_45;
#line 811 "live_vars.m"
                      else
#line 811 "live_vars.m"
                        {
#line 811 "live_vars.m"
                          {
#line 811 "live_vars.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__live_vars_scalar_common_1[2], ll_backend__live_vars__HeadVar__1_1, ((MR_Box) (ll_backend__live_vars__V_86_86)), ((MR_Box) (ll_backend__live_vars__V_44_44)));
#line 811 "live_vars.m"
                            return;
                          }
#line 811 "live_vars.m"
                        }
#line 811 "live_vars.m"
                    }
#line 811 "live_vars.m"
                  else
#line 1461 "ll_backend.live_vars.c"
                    *ll_backend__live_vars__HeadVar__1_1 = (MR_Integer) 2;
#line 811 "live_vars.m"
            }
#line 811 "live_vars.m"
          else
#line 811 "live_vars.m"
            {
#line 811 "live_vars.m"
              MR_Word ll_backend__live_vars__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 2)));
#line 811 "live_vars.m"
              MR_Word ll_backend__live_vars__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 1)));
#line 811 "live_vars.m"
              MR_Word ll_backend__live_vars__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 0)));

#line 811 "live_vars.m"
              if ((ll_backend__live_vars__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1478 "ll_backend.live_vars.c"
                *ll_backend__live_vars__HeadVar__1_1 = (MR_Integer) 2;
#line 811 "live_vars.m"
              else
#line 811 "live_vars.m"
                if (((MR_tag((MR_Word) ll_backend__live_vars__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 1484 "ll_backend.live_vars.c"
                  *ll_backend__live_vars__HeadVar__1_1 = (MR_Integer) 1;
#line 811 "live_vars.m"
                else
#line 811 "live_vars.m"
                  if (((MR_tag((MR_Word) ll_backend__live_vars__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1490 "ll_backend.live_vars.c"
                    *ll_backend__live_vars__HeadVar__1_1 = (MR_Integer) 1;
#line 811 "live_vars.m"
                  else
#line 811 "live_vars.m"
                    {
#line 811 "live_vars.m"
                      MR_Word ll_backend__live_vars__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__3_3, (MR_Integer) 0)));
#line 811 "live_vars.m"
                      MR_Word ll_backend__live_vars__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__3_3, (MR_Integer) 1)));
#line 811 "live_vars.m"
                      MR_Word ll_backend__live_vars__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__3_3, (MR_Integer) 2)));
#line 811 "live_vars.m"
                      MR_Word ll_backend__live_vars__V_21_21;

#line 811 "live_vars.m"
                      {
#line 811 "live_vars.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__live_vars_scalar_common_1[2], &ll_backend__live_vars__V_21_21, ((MR_Box) (ll_backend__live_vars__V_90_90)), ((MR_Box) (ll_backend__live_vars__V_18_18)));
                      }
#line 1510 "ll_backend.live_vars.c"
                      ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_21_21 == (MR_Integer) 0);
#line 811 "live_vars.m"
                      ll_backend__live_vars__succeeded = !(ll_backend__live_vars__succeeded);
#line 811 "live_vars.m"
                      if (ll_backend__live_vars__succeeded)
#line 811 "live_vars.m"
                        *ll_backend__live_vars__HeadVar__1_1 = ll_backend__live_vars__V_21_21;
#line 811 "live_vars.m"
                      else
#line 811 "live_vars.m"
                        {
#line 811 "live_vars.m"
                          MR_Word ll_backend__live_vars__V_22_22;

#line 811 "live_vars.m"
                          {
#line 811 "live_vars.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__live_vars_scalar_common_1[3], &ll_backend__live_vars__V_22_22, ((MR_Box) (ll_backend__live_vars__V_89_89)), ((MR_Box) (ll_backend__live_vars__V_19_19)));
                          }
#line 1530 "ll_backend.live_vars.c"
                          ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_22_22 == (MR_Integer) 0);
#line 811 "live_vars.m"
                          ll_backend__live_vars__succeeded = !(ll_backend__live_vars__succeeded);
#line 811 "live_vars.m"
                          if (ll_backend__live_vars__succeeded)
#line 811 "live_vars.m"
                            *ll_backend__live_vars__HeadVar__1_1 = ll_backend__live_vars__V_22_22;
#line 811 "live_vars.m"
                          else
#line 811 "live_vars.m"
                            {
#line 811 "live_vars.m"
                              {
#line 811 "live_vars.m"
                                mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__live_vars_scalar_common_1[2], ll_backend__live_vars__HeadVar__1_1, ((MR_Box) (ll_backend__live_vars__V_88_88)), ((MR_Box) (ll_backend__live_vars__V_20_20)));
#line 811 "live_vars.m"
                                return;
                              }
#line 811 "live_vars.m"
                            }
#line 811 "live_vars.m"
                        }
#line 811 "live_vars.m"
                    }
#line 811 "live_vars.m"
            }
#line 811 "live_vars.m"
  }
#line 811 "live_vars.m"
}

#line 811 "live_vars.m"
static MR_bool MR_CALL 
ll_backend__live_vars____Unify____parallel_stackvars_0_0(
#line 811 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 811 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__2_2)
#line 811 "live_vars.m"
{
#line 811 "live_vars.m"
  {
#line 811 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;
#line 811 "live_vars.m"
    MR_Integer ll_backend__live_vars__CastX_21 = (MR_Integer) ll_backend__live_vars__HeadVar__1_1;
#line 811 "live_vars.m"
    MR_Integer ll_backend__live_vars__CastY_22 = (MR_Integer) ll_backend__live_vars__HeadVar__2_2;

#line 811 "live_vars.m"
    ll_backend__live_vars__succeeded = (ll_backend__live_vars__CastX_21 == ll_backend__live_vars__CastY_22);
#line 811 "live_vars.m"
    if (ll_backend__live_vars__succeeded)
#line 811 "live_vars.m"
      ll_backend__live_vars__succeeded = MR_TRUE;
#line 811 "live_vars.m"
    else
#line 811 "live_vars.m"
      if ((ll_backend__live_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 811 "live_vars.m"
        {
#line 811 "live_vars.m"
          MR_Integer ll_backend__live_vars__CastX_3 = (MR_Integer) ll_backend__live_vars__HeadVar__1_1;
#line 811 "live_vars.m"
          MR_Integer ll_backend__live_vars__CastY_4 = (MR_Integer) ll_backend__live_vars__HeadVar__2_2;

#line 811 "live_vars.m"
          ll_backend__live_vars__succeeded = (ll_backend__live_vars__CastY_4 == ll_backend__live_vars__CastX_3);
#line 811 "live_vars.m"
        }
#line 811 "live_vars.m"
      else
#line 811 "live_vars.m"
        if (((MR_tag((MR_Word) ll_backend__live_vars__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
#line 811 "live_vars.m"
          {
#line 811 "live_vars.m"
            MR_Word ll_backend__live_vars__TypeInfo_23_23;
#line 811 "live_vars.m"
            MR_Word ll_backend__live_vars__TypeInfo_24_24;
#line 811 "live_vars.m"
            MR_Word ll_backend__live_vars__TypeInfo_25_25;
#line 811 "live_vars.m"
            MR_Word ll_backend__live_vars__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 811 "live_vars.m"
            MR_Word ll_backend__live_vars__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 811 "live_vars.m"
            MR_Word ll_backend__live_vars__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 2)));
#line 811 "live_vars.m"
            MR_Word ll_backend__live_vars__V_18_18;
#line 811 "live_vars.m"
            MR_Word ll_backend__live_vars__V_19_19;
#line 811 "live_vars.m"
            MR_Word ll_backend__live_vars__V_20_20;

#line 811 "live_vars.m"
            ll_backend__live_vars__succeeded = ((MR_tag((MR_Word) ll_backend__live_vars__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 811 "live_vars.m"
            if (ll_backend__live_vars__succeeded)
#line 811 "live_vars.m"
              {
#line 811 "live_vars.m"
                ll_backend__live_vars__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 0)));
#line 811 "live_vars.m"
                ll_backend__live_vars__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 1)));
#line 811 "live_vars.m"
                ll_backend__live_vars__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 2)));
#line 1638 "ll_backend.live_vars.c"
                ll_backend__live_vars__TypeInfo_23_23 = (MR_Word) &ll_backend__live_vars_scalar_common_1[3];
#line 1640 "ll_backend.live_vars.c"
                {
#line 1642 "ll_backend.live_vars.c"
                  ll_backend__live_vars__succeeded = mercury__builtin__unify_2_p_0(ll_backend__live_vars__TypeInfo_23_23, ((MR_Box) (ll_backend__live_vars__V_15_15)), ((MR_Box) (ll_backend__live_vars__V_18_18)));
                }
#line 811 "live_vars.m"
                if (ll_backend__live_vars__succeeded)
#line 811 "live_vars.m"
                  {
#line 1649 "ll_backend.live_vars.c"
                    ll_backend__live_vars__TypeInfo_24_24 = (MR_Word) &ll_backend__live_vars_scalar_common_1[2];
#line 1651 "ll_backend.live_vars.c"
                    {
#line 1653 "ll_backend.live_vars.c"
                      ll_backend__live_vars__succeeded = mercury__builtin__unify_2_p_0(ll_backend__live_vars__TypeInfo_24_24, ((MR_Box) (ll_backend__live_vars__V_16_16)), ((MR_Box) (ll_backend__live_vars__V_19_19)));
                    }
#line 811 "live_vars.m"
                    if (ll_backend__live_vars__succeeded)
#line 811 "live_vars.m"
                      {
#line 1660 "ll_backend.live_vars.c"
                        ll_backend__live_vars__TypeInfo_25_25 = (MR_Word) &ll_backend__live_vars_scalar_common_1[2];
#line 1662 "ll_backend.live_vars.c"
                        {
#line 1664 "ll_backend.live_vars.c"
                          return ll_backend__live_vars__succeeded = mercury__builtin__unify_2_p_0(ll_backend__live_vars__TypeInfo_25_25, ((MR_Box) (ll_backend__live_vars__V_17_17)), ((MR_Box) (ll_backend__live_vars__V_20_20)));
                        }
#line 811 "live_vars.m"
                      }
#line 811 "live_vars.m"
                  }
#line 811 "live_vars.m"
              }
#line 811 "live_vars.m"
          }
#line 811 "live_vars.m"
        else
#line 811 "live_vars.m"
          if (((MR_tag((MR_Word) ll_backend__live_vars__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 811 "live_vars.m"
            {
#line 811 "live_vars.m"
              MR_Word ll_backend__live_vars__TypeInfo_26_26;
#line 811 "live_vars.m"
              MR_Word ll_backend__live_vars__TypeInfo_27_27;
#line 811 "live_vars.m"
              MR_Word ll_backend__live_vars__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 811 "live_vars.m"
              MR_Word ll_backend__live_vars__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 811 "live_vars.m"
              MR_Word ll_backend__live_vars__V_13_13;
#line 811 "live_vars.m"
              MR_Word ll_backend__live_vars__V_14_14;

#line 811 "live_vars.m"
              ll_backend__live_vars__succeeded = ((MR_tag((MR_Word) ll_backend__live_vars__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 811 "live_vars.m"
              if (ll_backend__live_vars__succeeded)
#line 811 "live_vars.m"
                {
#line 811 "live_vars.m"
                  ll_backend__live_vars__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 0)));
#line 811 "live_vars.m"
                  ll_backend__live_vars__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 1)));
#line 1704 "ll_backend.live_vars.c"
                  ll_backend__live_vars__TypeInfo_26_26 = (MR_Word) &ll_backend__live_vars_scalar_common_1[2];
#line 1706 "ll_backend.live_vars.c"
                  {
#line 1708 "ll_backend.live_vars.c"
                    ll_backend__live_vars__succeeded = mercury__builtin__unify_2_p_0(ll_backend__live_vars__TypeInfo_26_26, ((MR_Box) (ll_backend__live_vars__V_11_11)), ((MR_Box) (ll_backend__live_vars__V_13_13)));
                  }
#line 811 "live_vars.m"
                  if (ll_backend__live_vars__succeeded)
#line 811 "live_vars.m"
                    {
#line 1715 "ll_backend.live_vars.c"
                      ll_backend__live_vars__TypeInfo_27_27 = (MR_Word) &ll_backend__live_vars_scalar_common_1[2];
#line 1717 "ll_backend.live_vars.c"
                      {
#line 1719 "ll_backend.live_vars.c"
                        return ll_backend__live_vars__succeeded = mercury__builtin__unify_2_p_0(ll_backend__live_vars__TypeInfo_27_27, ((MR_Box) (ll_backend__live_vars__V_12_12)), ((MR_Box) (ll_backend__live_vars__V_14_14)));
                      }
#line 811 "live_vars.m"
                    }
#line 811 "live_vars.m"
                }
#line 811 "live_vars.m"
            }
#line 811 "live_vars.m"
          else
#line 811 "live_vars.m"
            {
#line 811 "live_vars.m"
              MR_Word ll_backend__live_vars__TypeInfo_28_28;
#line 811 "live_vars.m"
              MR_Word ll_backend__live_vars__TypeInfo_29_29;
#line 811 "live_vars.m"
              MR_Word ll_backend__live_vars__TypeInfo_30_30;
#line 811 "live_vars.m"
              MR_Word ll_backend__live_vars__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 811 "live_vars.m"
              MR_Word ll_backend__live_vars__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 811 "live_vars.m"
              MR_Word ll_backend__live_vars__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 2)));
#line 811 "live_vars.m"
              MR_Word ll_backend__live_vars__V_8_8;
#line 811 "live_vars.m"
              MR_Word ll_backend__live_vars__V_9_9;
#line 811 "live_vars.m"
              MR_Word ll_backend__live_vars__V_10_10;

#line 811 "live_vars.m"
              ll_backend__live_vars__succeeded = ((MR_tag((MR_Word) ll_backend__live_vars__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 811 "live_vars.m"
              if (ll_backend__live_vars__succeeded)
#line 811 "live_vars.m"
                {
#line 811 "live_vars.m"
                  ll_backend__live_vars__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 0)));
#line 811 "live_vars.m"
                  ll_backend__live_vars__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 1)));
#line 811 "live_vars.m"
                  ll_backend__live_vars__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 2)));
#line 1763 "ll_backend.live_vars.c"
                  ll_backend__live_vars__TypeInfo_28_28 = (MR_Word) &ll_backend__live_vars_scalar_common_1[2];
#line 1765 "ll_backend.live_vars.c"
                  {
#line 1767 "ll_backend.live_vars.c"
                    ll_backend__live_vars__succeeded = mercury__builtin__unify_2_p_0(ll_backend__live_vars__TypeInfo_28_28, ((MR_Box) (ll_backend__live_vars__V_5_5)), ((MR_Box) (ll_backend__live_vars__V_8_8)));
                  }
#line 811 "live_vars.m"
                  if (ll_backend__live_vars__succeeded)
#line 811 "live_vars.m"
                    {
#line 1774 "ll_backend.live_vars.c"
                      ll_backend__live_vars__TypeInfo_29_29 = (MR_Word) &ll_backend__live_vars_scalar_common_1[3];
#line 1776 "ll_backend.live_vars.c"
                      {
#line 1778 "ll_backend.live_vars.c"
                        ll_backend__live_vars__succeeded = mercury__builtin__unify_2_p_0(ll_backend__live_vars__TypeInfo_29_29, ((MR_Box) (ll_backend__live_vars__V_6_6)), ((MR_Box) (ll_backend__live_vars__V_9_9)));
                      }
#line 811 "live_vars.m"
                      if (ll_backend__live_vars__succeeded)
#line 811 "live_vars.m"
                        {
#line 1785 "ll_backend.live_vars.c"
                          ll_backend__live_vars__TypeInfo_30_30 = (MR_Word) &ll_backend__live_vars_scalar_common_1[2];
#line 1787 "ll_backend.live_vars.c"
                          {
#line 1789 "ll_backend.live_vars.c"
                            return ll_backend__live_vars__succeeded = mercury__builtin__unify_2_p_0(ll_backend__live_vars__TypeInfo_30_30, ((MR_Box) (ll_backend__live_vars__V_7_7)), ((MR_Box) (ll_backend__live_vars__V_10_10)));
                          }
#line 811 "live_vars.m"
                        }
#line 811 "live_vars.m"
                    }
#line 811 "live_vars.m"
                }
#line 811 "live_vars.m"
            }
#line 811 "live_vars.m"
    return ll_backend__live_vars__succeeded;
#line 811 "live_vars.m"
  }
#line 811 "live_vars.m"
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
#line 1831 "ll_backend.live_vars.c"
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
#line 1869 "ll_backend.live_vars.c"
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
#line 1889 "ll_backend.live_vars.c"
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
#line 1909 "ll_backend.live_vars.c"
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
#line 1933 "ll_backend.live_vars.c"
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
#line 1957 "ll_backend.live_vars.c"
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

#line 2048 "ll_backend.live_vars.c"
        {
#line 2050 "ll_backend.live_vars.c"
          ll_backend__live_vars__succeeded = hlds__hlds_module____Unify____module_info_0_0(ll_backend__live_vars__V_3_3, ll_backend__live_vars__V_9_9);
        }
#line 44 "live_vars.m"
        if (ll_backend__live_vars__succeeded)
#line 44 "live_vars.m"
          {
#line 2057 "ll_backend.live_vars.c"
            {
#line 2059 "ll_backend.live_vars.c"
              ll_backend__live_vars__succeeded = hlds__hlds_pred____Unify____proc_info_0_0(ll_backend__live_vars__V_4_4, ll_backend__live_vars__V_10_10);
            }
#line 44 "live_vars.m"
            if (ll_backend__live_vars__succeeded)
#line 44 "live_vars.m"
              {
#line 2066 "ll_backend.live_vars.c"
                {
#line 2068 "ll_backend.live_vars.c"
                  ll_backend__live_vars__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ll_backend__live_vars__V_5_5, ll_backend__live_vars__V_11_11);
                }
#line 44 "live_vars.m"
                if (ll_backend__live_vars__succeeded)
#line 44 "live_vars.m"
                  {
#line 2075 "ll_backend.live_vars.c"
                    ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_6_6 == ll_backend__live_vars__V_12_12);
#line 44 "live_vars.m"
                    if (ll_backend__live_vars__succeeded)
#line 44 "live_vars.m"
                      {
#line 2081 "ll_backend.live_vars.c"
                        ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_7_7 == ll_backend__live_vars__V_13_13);
#line 44 "live_vars.m"
                        if (ll_backend__live_vars__succeeded)
#line 44 "live_vars.m"
                          {
#line 2087 "ll_backend.live_vars.c"
                            ll_backend__live_vars__TypeCtorInfo_20_20 = (MR_Word) &check_hlds__type_util__check_hlds__type_util__type_ctor_info_is_dummy_type_0;
#line 2089 "ll_backend.live_vars.c"
                            {
#line 2091 "ll_backend.live_vars.c"
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

#line 1007 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__par_stack_vars_recursive_call_4_p_0(
#line 1007 "live_vars.m"
  MR_Word * ll_backend__live_vars__MaybeNeedLC_5,
#line 1007 "live_vars.m"
  MR_Word * ll_backend__live_vars__DelayDeathSet_6,
#line 1007 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_17,
#line 1007 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_18)
#line 1007 "live_vars.m"
{
#line 1015 "live_vars.m"
  {
#line 1015 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;

#line 1015 "live_vars.m"
    if (((MR_tag((MR_Word) ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_17)) == (MR_mktag((MR_Integer) 3))))
#line 1023 "live_vars.m"
      {
#line 1023 "live_vars.m"
        MR_Word ll_backend__live_vars__StackVarsList0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_17, (MR_Integer) 0)));
#line 1023 "live_vars.m"
        MR_Word ll_backend__live_vars__StackVars_14;
#line 1023 "live_vars.m"
        MR_Word ll_backend__live_vars__StackVarsList_15;
#line 1023 "live_vars.m"
        MR_Word ll_backend__live_vars__NonoverlapSets_16;
#line 1023 "live_vars.m"
        MR_Word ll_backend__live_vars__V_19_19;

#line 1022 "live_vars.m"
        *ll_backend__live_vars__DelayDeathSet_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_17, (MR_Integer) 1)));
#line 1022 "live_vars.m"
        ll_backend__live_vars__StackVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_17, (MR_Integer) 2)));
#line 1024 "live_vars.m"
        {
#line 1024 "live_vars.m"
          ll_backend__live_vars__StackVarsList_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1024 "live_vars.m"
          MR_hl_field(MR_mktag(1), ll_backend__live_vars__StackVarsList_15, 0) = ((MR_Box) (ll_backend__live_vars__StackVars_14));
#line 1024 "live_vars.m"
          MR_hl_field(MR_mktag(1), ll_backend__live_vars__StackVarsList_15, 1) = ((MR_Box) (ll_backend__live_vars__StackVarsList0_13));
#line 1024 "live_vars.m"
        }
#line 1025 "live_vars.m"
        {
#line 1025 "live_vars.m"
          parse_tree__set_of_var__cartesian_product_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__live_vars__StackVarsList_15, &ll_backend__live_vars__NonoverlapSets_16);
        }
#line 1026 "live_vars.m"
        ll_backend__live_vars__V_19_19 = (MR_Word) ll_backend__live_vars__NonoverlapSets_16;
#line 1026 "live_vars.m"
        {
#line 1026 "live_vars.m"
          MR_Word base;
#line 1026 "live_vars.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1026 "live_vars.m"
          *ll_backend__live_vars__MaybeNeedLC_5 = base;
#line 1026 "live_vars.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__live_vars__V_19_19));
#line 1026 "live_vars.m"
        }
#line 1027 "live_vars.m"
        *ll_backend__live_vars__STATE_VARIABLE_ParStackVars_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1023 "live_vars.m"
      }
#line 1015 "live_vars.m"
    else
#line 1015 "live_vars.m"
      if (((MR_tag((MR_Word) ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_17)) == (MR_mktag((MR_Integer) 2))))
#line 1019 "live_vars.m"
        {
#line 1020 "live_vars.m"
          {
#line 1020 "live_vars.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.live_vars", (MR_String) "predicate \140ll_backend.live_vars.par_stack_vars_recursive_call\'/4", (MR_String) "recursive call in loop control scope");
#line 1020 "live_vars.m"
            return;
          }
#line 1019 "live_vars.m"
        }
#line 1015 "live_vars.m"
      else
#line 1015 "live_vars.m"
        {
#line 1016 "live_vars.m"
          *ll_backend__live_vars__MaybeNeedLC_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1017 "live_vars.m"
          {
#line 1017 "live_vars.m"
            *ll_backend__live_vars__DelayDeathSet_6 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          }
#line 1015 "live_vars.m"
          *ll_backend__live_vars__STATE_VARIABLE_ParStackVars_18 = ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_17;
#line 1015 "live_vars.m"
        }
#line 1015 "live_vars.m"
  }
#line 1007 "live_vars.m"
}

#line 986 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__par_stack_vars_get_nonlocals_2_p_0(
#line 986 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 986 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__2_2)
#line 986 "live_vars.m"
{
#line 989 "live_vars.m"
  {
#line 989 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;

#line 989 "live_vars.m"
    if ((ll_backend__live_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 989 "live_vars.m"
      {
#line 989 "live_vars.m"
        {
#line 989 "live_vars.m"
          *ll_backend__live_vars__HeadVar__2_2 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
#line 989 "live_vars.m"
      }
#line 989 "live_vars.m"
    else
#line 989 "live_vars.m"
      if (((MR_tag((MR_Word) ll_backend__live_vars__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
#line 992 "live_vars.m"
        {
#line 993 "live_vars.m"
          {
#line 993 "live_vars.m"
            *ll_backend__live_vars__HeadVar__2_2 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          }
#line 992 "live_vars.m"
        }
#line 989 "live_vars.m"
      else
#line 989 "live_vars.m"
        if (((MR_tag((MR_Word) ll_backend__live_vars__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 991 "live_vars.m"
          {
#line 991 "live_vars.m"
            MR_Word ll_backend__live_vars__V_7_7;

#line 991 "live_vars.m"
            *ll_backend__live_vars__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 991 "live_vars.m"
            ll_backend__live_vars__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 991 "live_vars.m"
          }
#line 989 "live_vars.m"
        else
#line 990 "live_vars.m"
          {
#line 990 "live_vars.m"
            MR_Word ll_backend__live_vars__V_4_4;
#line 990 "live_vars.m"
            MR_Word ll_backend__live_vars__V_5_5;

#line 990 "live_vars.m"
            *ll_backend__live_vars__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 990 "live_vars.m"
            ll_backend__live_vars__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 990 "live_vars.m"
            ll_backend__live_vars__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 2)));
#line 990 "live_vars.m"
          }
#line 989 "live_vars.m"
  }
#line 986 "live_vars.m"
}

#line 967 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__par_stack_vars_accumulate_stack_vars_3_p_0(
#line 967 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 967 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__2_2,
#line 967 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__3_3)
#line 967 "live_vars.m"
{
#line 970 "live_vars.m"
  {
#line 970 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;

#line 970 "live_vars.m"
    if ((ll_backend__live_vars__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 971 "live_vars.m"
      *ll_backend__live_vars__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 970 "live_vars.m"
    else
#line 970 "live_vars.m"
      if (((MR_tag((MR_Word) ll_backend__live_vars__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
#line 983 "live_vars.m"
        {
#line 983 "live_vars.m"
          MR_Word ll_backend__live_vars__LocalStackVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 0)));
#line 983 "live_vars.m"
          MR_Word ll_backend__live_vars__WouldDieSet_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 1)));
#line 983 "live_vars.m"
          MR_Word ll_backend__live_vars__AccStackVars0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 2)));
#line 983 "live_vars.m"
          MR_Word ll_backend__live_vars__AccStackVars_19;

#line 984 "live_vars.m"
          {
#line 984 "live_vars.m"
            ll_backend__live_vars__AccStackVars_19 = parse_tree__set_of_var__union_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__live_vars__AccStackVars0_18, ll_backend__live_vars__HeadVar__1_1);
          }
#line 983 "live_vars.m"
          {
#line 983 "live_vars.m"
            MR_Word base;
#line 983 "live_vars.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 983 "live_vars.m"
            *ll_backend__live_vars__HeadVar__3_3 = base;
#line 983 "live_vars.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (ll_backend__live_vars__LocalStackVars_16));
#line 983 "live_vars.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__live_vars__WouldDieSet_17));
#line 983 "live_vars.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__live_vars__AccStackVars_19));
#line 983 "live_vars.m"
          }
#line 983 "live_vars.m"
        }
#line 970 "live_vars.m"
      else
#line 970 "live_vars.m"
        if (((MR_tag((MR_Word) ll_backend__live_vars__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 979 "live_vars.m"
          {
#line 979 "live_vars.m"
            MR_Word ll_backend__live_vars__NonLocals_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 0)));
#line 979 "live_vars.m"
            MR_Word ll_backend__live_vars__AccStackVars0_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 1)));
#line 979 "live_vars.m"
            MR_Word ll_backend__live_vars__AccStackVars_14;

#line 980 "live_vars.m"
            {
#line 980 "live_vars.m"
              ll_backend__live_vars__AccStackVars_14 = parse_tree__set_of_var__union_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__live_vars__AccStackVars0_13, ll_backend__live_vars__HeadVar__1_1);
            }
#line 979 "live_vars.m"
            {
#line 979 "live_vars.m"
              MR_Word base;
#line 979 "live_vars.m"
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 979 "live_vars.m"
              *ll_backend__live_vars__HeadVar__3_3 = base;
#line 979 "live_vars.m"
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__live_vars__NonLocals_12));
#line 979 "live_vars.m"
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ll_backend__live_vars__AccStackVars_14));
#line 979 "live_vars.m"
            }
#line 979 "live_vars.m"
          }
#line 970 "live_vars.m"
        else
#line 974 "live_vars.m"
          {
#line 974 "live_vars.m"
            MR_Word ll_backend__live_vars__TypeCtorInfo_20_20 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 974 "live_vars.m"
            MR_Word ll_backend__live_vars__Nonlocals_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 0)));
#line 974 "live_vars.m"
            MR_Word ll_backend__live_vars__ParallelVars_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 1)));
#line 974 "live_vars.m"
            MR_Word ll_backend__live_vars__AccStackVars0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 2)));
#line 974 "live_vars.m"
            MR_Word ll_backend__live_vars__AccStackVars_9;
#line 974 "live_vars.m"
            MR_Word ll_backend__live_vars__V_10_10;

#line 976 "live_vars.m"
            {
#line 976 "live_vars.m"
              ll_backend__live_vars__V_10_10 = parse_tree__set_of_var__difference_2_f_0(ll_backend__live_vars__TypeCtorInfo_20_20, ll_backend__live_vars__HeadVar__1_1, ll_backend__live_vars__Nonlocals_6);
            }
#line 975 "live_vars.m"
            {
#line 975 "live_vars.m"
              ll_backend__live_vars__AccStackVars_9 = parse_tree__set_of_var__union_2_f_0(ll_backend__live_vars__TypeCtorInfo_20_20, ll_backend__live_vars__AccStackVars0_8, ll_backend__live_vars__V_10_10);
            }
#line 974 "live_vars.m"
            {
#line 974 "live_vars.m"
              MR_Word base;
#line 974 "live_vars.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 974 "live_vars.m"
              *ll_backend__live_vars__HeadVar__3_3 = base;
#line 974 "live_vars.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__live_vars__Nonlocals_6));
#line 974 "live_vars.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__live_vars__ParallelVars_7));
#line 974 "live_vars.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ll_backend__live_vars__AccStackVars_9));
#line 974 "live_vars.m"
            }
#line 974 "live_vars.m"
          }
#line 970 "live_vars.m"
  }
#line 967 "live_vars.m"
}

#line 956 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__par_stack_vars_get_stackvars_2_p_0(
#line 956 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 956 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__2_2)
#line 956 "live_vars.m"
{
#line 959 "live_vars.m"
  {
#line 959 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;

#line 959 "live_vars.m"
    if ((ll_backend__live_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 959 "live_vars.m"
      {
#line 959 "live_vars.m"
        {
#line 959 "live_vars.m"
          *ll_backend__live_vars__HeadVar__2_2 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
#line 959 "live_vars.m"
      }
#line 959 "live_vars.m"
    else
#line 959 "live_vars.m"
      if (((MR_tag((MR_Word) ll_backend__live_vars__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
#line 964 "live_vars.m"
        {
#line 964 "live_vars.m"
          MR_Word ll_backend__live_vars__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 964 "live_vars.m"
          MR_Word ll_backend__live_vars__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 1)));

#line 964 "live_vars.m"
          *ll_backend__live_vars__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 2)));
#line 964 "live_vars.m"
        }
#line 959 "live_vars.m"
      else
#line 959 "live_vars.m"
        if (((MR_tag((MR_Word) ll_backend__live_vars__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 963 "live_vars.m"
          {
#line 963 "live_vars.m"
            MR_Word ll_backend__live_vars__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 0)));

#line 963 "live_vars.m"
            *ll_backend__live_vars__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 963 "live_vars.m"
          }
#line 959 "live_vars.m"
        else
#line 961 "live_vars.m"
          {
#line 961 "live_vars.m"
            MR_Word ll_backend__live_vars__StackVarss_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 960 "live_vars.m"
            MR_Word ll_backend__live_vars__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 960 "live_vars.m"
            MR_Word ll_backend__live_vars__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 2)));

#line 962 "live_vars.m"
            {
#line 962 "live_vars.m"
              *ll_backend__live_vars__HeadVar__2_2 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__live_vars__StackVarss_4);
            }
#line 961 "live_vars.m"
          }
#line 959 "live_vars.m"
  }
#line 956 "live_vars.m"
}

#line 929 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__par_stack_vars_end_loop_control_4_p_0(
#line 929 "live_vars.m"
  MR_Word ll_backend__live_vars__NewWouldDieSet_5,
#line 929 "live_vars.m"
  MR_Word ll_backend__live_vars__OldParStackVars_6,
#line 929 "live_vars.m"
  MR_Word ll_backend__live_vars__ParStackVars0_7,
#line 929 "live_vars.m"
  MR_Word * ll_backend__live_vars__ParStackVars_8)
#line 929 "live_vars.m"
{
#line 934 "live_vars.m"
  {
#line 934 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;
#line 934 "live_vars.m"
    MR_Word ll_backend__live_vars__NewStackVars_9;

#line 959 "live_vars.m"
    if ((ll_backend__live_vars__ParStackVars0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 959 "live_vars.m"
      {
#line 959 "live_vars.m"
        {
#line 959 "live_vars.m"
          ll_backend__live_vars__NewStackVars_9 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
#line 959 "live_vars.m"
      }
#line 959 "live_vars.m"
    else
#line 959 "live_vars.m"
      if (((MR_tag((MR_Word) ll_backend__live_vars__ParStackVars0_7)) == (MR_mktag((MR_Integer) 3))))
#line 964 "live_vars.m"
        {
#line 964 "live_vars.m"
          MR_Word ll_backend__live_vars__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 0)));
#line 964 "live_vars.m"
          MR_Word ll_backend__live_vars__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 1)));

#line 964 "live_vars.m"
          ll_backend__live_vars__NewStackVars_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 2)));
#line 964 "live_vars.m"
        }
#line 959 "live_vars.m"
      else
#line 959 "live_vars.m"
        if (((MR_tag((MR_Word) ll_backend__live_vars__ParStackVars0_7)) == (MR_mktag((MR_Integer) 2))))
#line 963 "live_vars.m"
          {
#line 963 "live_vars.m"
            MR_Word ll_backend__live_vars__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 0)));

#line 963 "live_vars.m"
            ll_backend__live_vars__NewStackVars_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 1)));
#line 963 "live_vars.m"
          }
#line 959 "live_vars.m"
        else
#line 961 "live_vars.m"
          {
#line 961 "live_vars.m"
            MR_Word ll_backend__live_vars__StackVarss_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 1)));
#line 960 "live_vars.m"
            MR_Word ll_backend__live_vars__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 0)));
#line 960 "live_vars.m"
            MR_Word ll_backend__live_vars__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 2)));

#line 962 "live_vars.m"
            {
#line 962 "live_vars.m"
              ll_backend__live_vars__NewStackVars_9 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__live_vars__StackVarss_29);
            }
#line 961 "live_vars.m"
          }
#line 940 "live_vars.m"
    if ((ll_backend__live_vars__OldParStackVars_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 937 "live_vars.m"
      {
#line 937 "live_vars.m"
        MR_Word ll_backend__live_vars__V_23_23;
#line 937 "live_vars.m"
        MR_Word ll_backend__live_vars__V_25_25;

#line 938 "live_vars.m"
        {
#line 938 "live_vars.m"
          ll_backend__live_vars__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 938 "live_vars.m"
          MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_23_23, 0) = ((MR_Box) (ll_backend__live_vars__NewStackVars_9));
#line 938 "live_vars.m"
          MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 938 "live_vars.m"
        }
#line 939 "live_vars.m"
        {
#line 939 "live_vars.m"
          ll_backend__live_vars__V_25_25 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
#line 938 "live_vars.m"
        {
#line 938 "live_vars.m"
          MR_Word base;
#line 938 "live_vars.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 938 "live_vars.m"
          *ll_backend__live_vars__ParStackVars_8 = base;
#line 938 "live_vars.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (ll_backend__live_vars__V_23_23));
#line 938 "live_vars.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__live_vars__NewWouldDieSet_5));
#line 938 "live_vars.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__live_vars__V_25_25));
#line 938 "live_vars.m"
        }
#line 937 "live_vars.m"
      }
#line 940 "live_vars.m"
    else
#line 940 "live_vars.m"
      if (((MR_tag((MR_Word) ll_backend__live_vars__OldParStackVars_6)) == (MR_mktag((MR_Integer) 3))))
#line 942 "live_vars.m"
        {
#line 942 "live_vars.m"
          MR_Word ll_backend__live_vars__StackVarsList_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__OldParStackVars_6, (MR_Integer) 0)));
#line 942 "live_vars.m"
          MR_Word ll_backend__live_vars__WouldDieSet0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__OldParStackVars_6, (MR_Integer) 1)));
#line 942 "live_vars.m"
          MR_Word ll_backend__live_vars__StackVarsAcc_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__OldParStackVars_6, (MR_Integer) 2)));
#line 942 "live_vars.m"
          MR_Word ll_backend__live_vars__WouldDieSet_13;
#line 942 "live_vars.m"
          MR_Word ll_backend__live_vars__V_22_22;

#line 943 "live_vars.m"
          {
#line 943 "live_vars.m"
            ll_backend__live_vars__WouldDieSet_13 = parse_tree__set_of_var__union_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__live_vars__WouldDieSet0_11, ll_backend__live_vars__NewWouldDieSet_5);
          }
#line 945 "live_vars.m"
          {
#line 945 "live_vars.m"
            ll_backend__live_vars__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 945 "live_vars.m"
            MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_22_22, 0) = ((MR_Box) (ll_backend__live_vars__NewStackVars_9));
#line 945 "live_vars.m"
            MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_22_22, 1) = ((MR_Box) (ll_backend__live_vars__StackVarsList_10));
#line 945 "live_vars.m"
          }
#line 945 "live_vars.m"
          {
#line 945 "live_vars.m"
            MR_Word base;
#line 945 "live_vars.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 945 "live_vars.m"
            *ll_backend__live_vars__ParStackVars_8 = base;
#line 945 "live_vars.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (ll_backend__live_vars__V_22_22));
#line 945 "live_vars.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__live_vars__WouldDieSet_13));
#line 945 "live_vars.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__live_vars__StackVarsAcc_12));
#line 945 "live_vars.m"
          }
#line 942 "live_vars.m"
        }
#line 940 "live_vars.m"
      else
#line 950 "live_vars.m"
        {
#line 951 "live_vars.m"
          {
#line 951 "live_vars.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.live_vars", (MR_String) "predicate \140ll_backend.live_vars.par_stack_vars_end_loop_control\'/4", (MR_String) "Loop control scope found in other parallel context");
#line 951 "live_vars.m"
            return;
          }
#line 950 "live_vars.m"
        }
#line 934 "live_vars.m"
  }
#line 929 "live_vars.m"
}

#line 912 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__par_stack_vars_start_loop_control_3_p_0(
#line 912 "live_vars.m"
  MR_Word ll_backend__live_vars__NonLocals_4,
#line 912 "live_vars.m"
  MR_Word ll_backend__live_vars__ParStackVars0_5,
#line 912 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__3_3)
#line 912 "live_vars.m"
{
#line 916 "live_vars.m"
  {
#line 916 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;
#line 916 "live_vars.m"
    MR_Word ll_backend__live_vars__V_14_14;

#line 916 "live_vars.m"
    {
#line 916 "live_vars.m"
      ll_backend__live_vars__V_14_14 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
#line 916 "live_vars.m"
    {
#line 916 "live_vars.m"
      MR_Word base;
#line 916 "live_vars.m"
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 916 "live_vars.m"
      *ll_backend__live_vars__HeadVar__3_3 = base;
#line 916 "live_vars.m"
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__live_vars__NonLocals_4));
#line 916 "live_vars.m"
      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ll_backend__live_vars__V_14_14));
#line 916 "live_vars.m"
    }
#line 921 "live_vars.m"
    if ((ll_backend__live_vars__ParStackVars0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 918 "live_vars.m"
      {
#line 918 "live_vars.m"
      }
#line 921 "live_vars.m"
    else
#line 921 "live_vars.m"
      if (((MR_tag((MR_Word) ll_backend__live_vars__ParStackVars0_5)) == (MR_mktag((MR_Integer) 3))))
#line 919 "live_vars.m"
        {
#line 919 "live_vars.m"
        }
#line 921 "live_vars.m"
      else
#line 924 "live_vars.m"
        {
#line 925 "live_vars.m"
          {
#line 925 "live_vars.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.live_vars", (MR_String) "predicate \140ll_backend.live_vars.par_stack_vars_start_loop_control\'/3", (MR_String) "Loop control scope found in other parallel context");
#line 925 "live_vars.m"
            return;
          }
#line 924 "live_vars.m"
        }
#line 916 "live_vars.m"
  }
#line 912 "live_vars.m"
}

#line 867 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__par_stack_vars_end_parallel_conjunction_4_p_0(
#line 867 "live_vars.m"
  MR_Word ll_backend__live_vars__LiveSet_5,
#line 867 "live_vars.m"
  MR_Word ll_backend__live_vars__OuterParStackVars_6,
#line 867 "live_vars.m"
  MR_Word ll_backend__live_vars__ParStackVars0_7,
#line 867 "live_vars.m"
  MR_Word * ll_backend__live_vars__ParStackVars_8)
#line 867 "live_vars.m"
{
#line 872 "live_vars.m"
  {
#line 872 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;
#line 872 "live_vars.m"
    MR_Word ll_backend__live_vars__InnerStackVars_9;

#line 959 "live_vars.m"
    if ((ll_backend__live_vars__ParStackVars0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 959 "live_vars.m"
      {
#line 959 "live_vars.m"
        {
#line 959 "live_vars.m"
          ll_backend__live_vars__InnerStackVars_9 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
#line 959 "live_vars.m"
      }
#line 959 "live_vars.m"
    else
#line 959 "live_vars.m"
      if (((MR_tag((MR_Word) ll_backend__live_vars__ParStackVars0_7)) == (MR_mktag((MR_Integer) 3))))
#line 964 "live_vars.m"
        {
#line 964 "live_vars.m"
          MR_Word ll_backend__live_vars__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 0)));
#line 964 "live_vars.m"
          MR_Word ll_backend__live_vars__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 1)));

#line 964 "live_vars.m"
          ll_backend__live_vars__InnerStackVars_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 2)));
#line 964 "live_vars.m"
        }
#line 959 "live_vars.m"
      else
#line 959 "live_vars.m"
        if (((MR_tag((MR_Word) ll_backend__live_vars__ParStackVars0_7)) == (MR_mktag((MR_Integer) 2))))
#line 963 "live_vars.m"
          {
#line 963 "live_vars.m"
            MR_Word ll_backend__live_vars__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 0)));

#line 963 "live_vars.m"
            ll_backend__live_vars__InnerStackVars_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 1)));
#line 963 "live_vars.m"
          }
#line 959 "live_vars.m"
        else
#line 961 "live_vars.m"
          {
#line 961 "live_vars.m"
            MR_Word ll_backend__live_vars__StackVarss_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 1)));
#line 960 "live_vars.m"
            MR_Word ll_backend__live_vars__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 0)));
#line 960 "live_vars.m"
            MR_Word ll_backend__live_vars__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 2)));

#line 962 "live_vars.m"
            {
#line 962 "live_vars.m"
              ll_backend__live_vars__InnerStackVars_9 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__live_vars__StackVarss_30);
            }
#line 961 "live_vars.m"
          }
#line 877 "live_vars.m"
    if ((ll_backend__live_vars__OuterParStackVars_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 876 "live_vars.m"
      *ll_backend__live_vars__ParStackVars_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 877 "live_vars.m"
    else
#line 877 "live_vars.m"
      if (((MR_tag((MR_Word) ll_backend__live_vars__OuterParStackVars_6)) == (MR_mktag((MR_Integer) 3))))
#line 903 "live_vars.m"
        {
#line 903 "live_vars.m"
          MR_Word ll_backend__live_vars__TypeCtorInfo_28_28 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 903 "live_vars.m"
          MR_Word ll_backend__live_vars__StackVarsList_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__OuterParStackVars_6, (MR_Integer) 0)));
#line 903 "live_vars.m"
          MR_Word ll_backend__live_vars__WouldDieSet_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__OuterParStackVars_6, (MR_Integer) 1)));
#line 903 "live_vars.m"
          MR_Word ll_backend__live_vars__V_18_18;
#line 903 "live_vars.m"
          MR_Word ll_backend__live_vars__StackVars0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__OuterParStackVars_6, (MR_Integer) 2)));
#line 903 "live_vars.m"
          MR_Word ll_backend__live_vars__StackVars_25;

#line 906 "live_vars.m"
          {
#line 906 "live_vars.m"
            ll_backend__live_vars__V_18_18 = parse_tree__set_of_var__union_2_f_0(ll_backend__live_vars__TypeCtorInfo_28_28, ll_backend__live_vars__StackVars0_24, ll_backend__live_vars__InnerStackVars_9);
          }
#line 907 "live_vars.m"
          {
#line 907 "live_vars.m"
            ll_backend__live_vars__StackVars_25 = parse_tree__set_of_var__union_2_f_0(ll_backend__live_vars__TypeCtorInfo_28_28, ll_backend__live_vars__V_18_18, ll_backend__live_vars__LiveSet_5);
          }
#line 908 "live_vars.m"
          {
#line 908 "live_vars.m"
            MR_Word base;
#line 908 "live_vars.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 908 "live_vars.m"
            *ll_backend__live_vars__ParStackVars_8 = base;
#line 908 "live_vars.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (ll_backend__live_vars__StackVarsList_16));
#line 908 "live_vars.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__live_vars__WouldDieSet_17));
#line 908 "live_vars.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__live_vars__StackVars_25));
#line 908 "live_vars.m"
          }
#line 903 "live_vars.m"
        }
#line 877 "live_vars.m"
      else
#line 877 "live_vars.m"
        if (((MR_tag((MR_Word) ll_backend__live_vars__OuterParStackVars_6)) == (MR_mktag((MR_Integer) 2))))
#line 892 "live_vars.m"
          {
#line 892 "live_vars.m"
            MR_Word ll_backend__live_vars__TypeCtorInfo_27_27 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 892 "live_vars.m"
            MR_Word ll_backend__live_vars__StackVars0_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__OuterParStackVars_6, (MR_Integer) 1)));
#line 892 "live_vars.m"
            MR_Word ll_backend__live_vars__StackVars_15;
#line 892 "live_vars.m"
            MR_Word ll_backend__live_vars__V_19_19;
#line 892 "live_vars.m"
            MR_Word ll_backend__live_vars__V_20_20;
#line 892 "live_vars.m"
            MR_Word ll_backend__live_vars__OuterNonLocals_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__OuterParStackVars_6, (MR_Integer) 0)));

#line 897 "live_vars.m"
            {
#line 897 "live_vars.m"
              ll_backend__live_vars__V_19_19 = parse_tree__set_of_var__union_2_f_0(ll_backend__live_vars__TypeCtorInfo_27_27, ll_backend__live_vars__StackVars0_14, ll_backend__live_vars__InnerStackVars_9);
            }
#line 899 "live_vars.m"
            {
#line 899 "live_vars.m"
              ll_backend__live_vars__V_20_20 = parse_tree__set_of_var__difference_2_f_0(ll_backend__live_vars__TypeCtorInfo_27_27, ll_backend__live_vars__LiveSet_5, ll_backend__live_vars__OuterNonLocals_23);
            }
#line 898 "live_vars.m"
            {
#line 898 "live_vars.m"
              ll_backend__live_vars__StackVars_15 = parse_tree__set_of_var__union_2_f_0(ll_backend__live_vars__TypeCtorInfo_27_27, ll_backend__live_vars__V_19_19, ll_backend__live_vars__V_20_20);
            }
#line 900 "live_vars.m"
            {
#line 900 "live_vars.m"
              MR_Word base;
#line 900 "live_vars.m"
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 900 "live_vars.m"
              *ll_backend__live_vars__ParStackVars_8 = base;
#line 900 "live_vars.m"
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__live_vars__OuterNonLocals_23));
#line 900 "live_vars.m"
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ll_backend__live_vars__StackVars_15));
#line 900 "live_vars.m"
            }
#line 892 "live_vars.m"
          }
#line 877 "live_vars.m"
        else
#line 879 "live_vars.m"
          {
#line 879 "live_vars.m"
            MR_Word ll_backend__live_vars__TypeCtorInfo_26_26 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 879 "live_vars.m"
            MR_Word ll_backend__live_vars__OuterNonLocals_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__OuterParStackVars_6, (MR_Integer) 0)));
#line 879 "live_vars.m"
            MR_Word ll_backend__live_vars__OuterLocalStackVars_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__OuterParStackVars_6, (MR_Integer) 1)));
#line 879 "live_vars.m"
            MR_Word ll_backend__live_vars__OuterAccStackVars0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__OuterParStackVars_6, (MR_Integer) 2)));
#line 879 "live_vars.m"
            MR_Word ll_backend__live_vars__OuterAccStackVars_13;
#line 879 "live_vars.m"
            MR_Word ll_backend__live_vars__V_21_21;
#line 879 "live_vars.m"
            MR_Word ll_backend__live_vars__V_22_22;

#line 886 "live_vars.m"
            {
#line 886 "live_vars.m"
              ll_backend__live_vars__V_21_21 = parse_tree__set_of_var__union_2_f_0(ll_backend__live_vars__TypeCtorInfo_26_26, ll_backend__live_vars__OuterAccStackVars0_12, ll_backend__live_vars__InnerStackVars_9);
            }
#line 888 "live_vars.m"
            {
#line 888 "live_vars.m"
              ll_backend__live_vars__V_22_22 = parse_tree__set_of_var__difference_2_f_0(ll_backend__live_vars__TypeCtorInfo_26_26, ll_backend__live_vars__LiveSet_5, ll_backend__live_vars__OuterNonLocals_10);
            }
#line 887 "live_vars.m"
            {
#line 887 "live_vars.m"
              ll_backend__live_vars__OuterAccStackVars_13 = parse_tree__set_of_var__union_2_f_0(ll_backend__live_vars__TypeCtorInfo_26_26, ll_backend__live_vars__V_21_21, ll_backend__live_vars__V_22_22);
            }
#line 889 "live_vars.m"
            {
#line 889 "live_vars.m"
              MR_Word base;
#line 889 "live_vars.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 889 "live_vars.m"
              *ll_backend__live_vars__ParStackVars_8 = base;
#line 889 "live_vars.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__live_vars__OuterNonLocals_10));
#line 889 "live_vars.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__live_vars__OuterLocalStackVars_11));
#line 889 "live_vars.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ll_backend__live_vars__OuterAccStackVars_13));
#line 889 "live_vars.m"
            }
#line 879 "live_vars.m"
          }
#line 872 "live_vars.m"
  }
#line 867 "live_vars.m"
}

#line 859 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__par_stack_vars_start_parallel_conjunction_3_p_0(
#line 859 "live_vars.m"
  MR_Word ll_backend__live_vars__LiveSet_4,
#line 859 "live_vars.m"
  MR_Word ll_backend__live_vars__OuterParStackVars_5,
#line 859 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__3_3)
#line 859 "live_vars.m"
{
#line 863 "live_vars.m"
  {
#line 863 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;
#line 863 "live_vars.m"
    MR_Word ll_backend__live_vars__TypeCtorInfo_10_10 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 863 "live_vars.m"
    MR_Word ll_backend__live_vars__InnerNonLocals_6;
#line 863 "live_vars.m"
    MR_Word ll_backend__live_vars__OuterNonLocals_7;
#line 863 "live_vars.m"
    MR_Word ll_backend__live_vars__V_9_9;

#line 863 "live_vars.m"
    {
#line 863 "live_vars.m"
      ll_backend__live_vars__V_9_9 = parse_tree__set_of_var__init_0_f_0(ll_backend__live_vars__TypeCtorInfo_10_10);
    }
#line 989 "live_vars.m"
    if ((ll_backend__live_vars__OuterParStackVars_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 989 "live_vars.m"
      {
#line 989 "live_vars.m"
        {
#line 989 "live_vars.m"
          ll_backend__live_vars__OuterNonLocals_7 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
#line 989 "live_vars.m"
      }
#line 989 "live_vars.m"
    else
#line 989 "live_vars.m"
      if (((MR_tag((MR_Word) ll_backend__live_vars__OuterParStackVars_5)) == (MR_mktag((MR_Integer) 3))))
#line 992 "live_vars.m"
        {
#line 993 "live_vars.m"
          {
#line 993 "live_vars.m"
            ll_backend__live_vars__OuterNonLocals_7 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          }
#line 992 "live_vars.m"
        }
#line 989 "live_vars.m"
      else
#line 989 "live_vars.m"
        if (((MR_tag((MR_Word) ll_backend__live_vars__OuterParStackVars_5)) == (MR_mktag((MR_Integer) 2))))
#line 991 "live_vars.m"
          {
#line 991 "live_vars.m"
            MR_Word ll_backend__live_vars__V_15_15;

#line 991 "live_vars.m"
            ll_backend__live_vars__OuterNonLocals_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__OuterParStackVars_5, (MR_Integer) 0)));
#line 991 "live_vars.m"
            ll_backend__live_vars__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__OuterParStackVars_5, (MR_Integer) 1)));
#line 991 "live_vars.m"
          }
#line 989 "live_vars.m"
        else
#line 990 "live_vars.m"
          {
#line 990 "live_vars.m"
            MR_Word ll_backend__live_vars__V_12_12;
#line 990 "live_vars.m"
            MR_Word ll_backend__live_vars__V_13_13;

#line 990 "live_vars.m"
            ll_backend__live_vars__OuterNonLocals_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__OuterParStackVars_5, (MR_Integer) 0)));
#line 990 "live_vars.m"
            ll_backend__live_vars__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__OuterParStackVars_5, (MR_Integer) 1)));
#line 990 "live_vars.m"
            ll_backend__live_vars__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__OuterParStackVars_5, (MR_Integer) 2)));
#line 990 "live_vars.m"
          }
#line 865 "live_vars.m"
    {
#line 865 "live_vars.m"
      ll_backend__live_vars__InnerNonLocals_6 = parse_tree__set_of_var__union_2_f_0(ll_backend__live_vars__TypeCtorInfo_10_10, ll_backend__live_vars__OuterNonLocals_7, ll_backend__live_vars__LiveSet_4);
    }
#line 863 "live_vars.m"
    {
#line 863 "live_vars.m"
      MR_Word base;
#line 863 "live_vars.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 863 "live_vars.m"
      *ll_backend__live_vars__HeadVar__3_3 = base;
#line 863 "live_vars.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__live_vars__InnerNonLocals_6));
#line 863 "live_vars.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 863 "live_vars.m"
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ll_backend__live_vars__V_9_9));
#line 863 "live_vars.m"
    }
#line 863 "live_vars.m"
  }
#line 859 "live_vars.m"
}

#line 798 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__record_par_conj_6_p_0(
#line 798 "live_vars.m"
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_17,
#line 798 "live_vars.m"
  MR_Word ll_backend__live_vars__NeedInParConj_7,
#line 798 "live_vars.m"
  MR_Word ll_backend__live_vars__AllocData_8,
#line 798 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_GoalInfo_0_11,
#line 798 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_GoalInfo_12,
#line 798 "live_vars.m"
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_13,
#line 798 "live_vars.m"
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_14)
#line 798 "live_vars.m"
{
#line 802 "live_vars.m"
  {
#line 802 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;
#line 3136 "ll_backend.live_vars.c"
    void MR_CALL (* ll_backend__live_vars__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 803 "live_vars.m"
    {
#line 803 "live_vars.m"
      hlds__hlds_llds__goal_info_set_need_in_par_conj_3_p_0(ll_backend__live_vars__NeedInParConj_7, ll_backend__live_vars__STATE_VARIABLE_GoalInfo_0_11, ll_backend__live_vars__STATE_VARIABLE_GoalInfo_12);
    }
#line 3144 "ll_backend.live_vars.c"
    ll_backend__live_vars__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_17, (MR_Integer) 0)), (MR_Integer) 7)));
#line 3146 "ll_backend.live_vars.c"
    {
#line 3148 "ll_backend.live_vars.c"
      ll_backend__live_vars__func_0(((MR_Box) ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_17), ((MR_Box) (ll_backend__live_vars__NeedInParConj_7)), ((MR_Box) (ll_backend__live_vars__AllocData_8)), ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_13, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_14);
#line 3150 "ll_backend.live_vars.c"
      return;
    }
#line 802 "live_vars.m"
  }
#line 798 "live_vars.m"
}

#line 721 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_cases_12_p_0(
#line 721 "live_vars.m"
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_54,
#line 721 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 721 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__2_2,
#line 721 "live_vars.m"
  MR_Word ll_backend__live_vars__ResumeVars0_3,
#line 721 "live_vars.m"
  MR_Word ll_backend__live_vars__AllocData_4,
#line 721 "live_vars.m"
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_5,
#line 721 "live_vars.m"
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_6,
#line 721 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__7_7,
#line 721 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__8_8,
#line 721 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__9_9,
#line 721 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__10_10,
#line 721 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_11,
#line 721 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_12)
#line 721 "live_vars.m"
{
#line 728 "live_vars.m"
  {
#line 728 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;

#line 728 "live_vars.m"
    if ((ll_backend__live_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 728 "live_vars.m"
      {
#line 728 "live_vars.m"
        *ll_backend__live_vars__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 729 "live_vars.m"
        *ll_backend__live_vars__STATE_VARIABLE_ParStackVars_12 = ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_11;
#line 729 "live_vars.m"
        *ll_backend__live_vars__HeadVar__10_10 = ll_backend__live_vars__HeadVar__9_9;
#line 729 "live_vars.m"
        *ll_backend__live_vars__HeadVar__8_8 = ll_backend__live_vars__HeadVar__7_7;
#line 729 "live_vars.m"
        *ll_backend__live_vars__STATE_VARIABLE_StackAlloc_6 = ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_5;
#line 728 "live_vars.m"
      }
#line 728 "live_vars.m"
    else
#line 732 "live_vars.m"
      {
#line 732 "live_vars.m"
        MR_Word ll_backend__live_vars__Case0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 732 "live_vars.m"
        MR_Word ll_backend__live_vars__Cases0_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 732 "live_vars.m"
        MR_Word ll_backend__live_vars__Case_29;
#line 732 "live_vars.m"
        MR_Word ll_backend__live_vars__Cases_30;
#line 732 "live_vars.m"
        MR_Word ll_backend__live_vars__MainConsId_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__Case0_27, (MR_Integer) 0)));
#line 732 "live_vars.m"
        MR_Word ll_backend__live_vars__OtherConsIds_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__Case0_27, (MR_Integer) 1)));
#line 732 "live_vars.m"
        MR_Word ll_backend__live_vars__Goal0_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__Case0_27, (MR_Integer) 2)));
#line 732 "live_vars.m"
        MR_Word ll_backend__live_vars__Goal_42;
#line 732 "live_vars.m"
        MR_Word ll_backend__live_vars__NondetLiveness1_43;
#line 732 "live_vars.m"
        MR_Word ll_backend__live_vars__NondetLiveness2_45;
#line 732 "live_vars.m"
        MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_50_50;
#line 732 "live_vars.m"
        MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_51_51;
#line 738 "live_vars.m"
        MR_Word ll_backend__live_vars___Liveness2_44;

#line 734 "live_vars.m"
        {
#line 734 "live_vars.m"
          ll_backend__live_vars__build_live_sets_in_goal_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_54, ll_backend__live_vars__Goal0_41, &ll_backend__live_vars__Goal_42, ll_backend__live_vars__ResumeVars0_3, ll_backend__live_vars__AllocData_4, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_5, &ll_backend__live_vars__STATE_VARIABLE_StackAlloc_50_50, ll_backend__live_vars__HeadVar__7_7, ll_backend__live_vars__HeadVar__8_8, ll_backend__live_vars__HeadVar__9_9, &ll_backend__live_vars__NondetLiveness1_43, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_11, &ll_backend__live_vars__STATE_VARIABLE_ParStackVars_51_51);
        }
#line 737 "live_vars.m"
        {
#line 737 "live_vars.m"
          ll_backend__live_vars__Case_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 737 "live_vars.m"
          MR_hl_field(MR_mktag(0), ll_backend__live_vars__Case_29, 0) = ((MR_Box) (ll_backend__live_vars__MainConsId_39));
#line 737 "live_vars.m"
          MR_hl_field(MR_mktag(0), ll_backend__live_vars__Case_29, 1) = ((MR_Box) (ll_backend__live_vars__OtherConsIds_40));
#line 737 "live_vars.m"
          MR_hl_field(MR_mktag(0), ll_backend__live_vars__Case_29, 2) = ((MR_Box) (ll_backend__live_vars__Goal_42));
#line 737 "live_vars.m"
        }
#line 738 "live_vars.m"
        {
#line 738 "live_vars.m"
          ll_backend__live_vars__build_live_sets_in_cases_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_54, ll_backend__live_vars__Cases0_28, &ll_backend__live_vars__Cases_30, ll_backend__live_vars__ResumeVars0_3, ll_backend__live_vars__AllocData_4, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_50_50, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_6, ll_backend__live_vars__HeadVar__7_7, &ll_backend__live_vars___Liveness2_44, ll_backend__live_vars__HeadVar__9_9, &ll_backend__live_vars__NondetLiveness2_45, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_51_51, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_12);
        }
#line 730 "live_vars.m"
        {
#line 730 "live_vars.m"
          MR_Word base;
#line 730 "live_vars.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 730 "live_vars.m"
          *ll_backend__live_vars__HeadVar__2_2 = base;
#line 730 "live_vars.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__live_vars__Case_29));
#line 730 "live_vars.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__live_vars__Cases_30));
#line 730 "live_vars.m"
        }
#line 741 "live_vars.m"
        {
#line 741 "live_vars.m"
          parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__live_vars__NondetLiveness1_43, ll_backend__live_vars__NondetLiveness2_45, ll_backend__live_vars__HeadVar__10_10);
#line 741 "live_vars.m"
          return;
        }
#line 732 "live_vars.m"
      }
#line 728 "live_vars.m"
  }
#line 721 "live_vars.m"
}

#line 677 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_disj_13_p_0(
#line 677 "live_vars.m"
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_61,
#line 677 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 677 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__2_2,
#line 677 "live_vars.m"
  MR_Word ll_backend__live_vars__DisjGoalInfo_3,
#line 677 "live_vars.m"
  MR_Word ll_backend__live_vars__ResumeVars0_4,
#line 677 "live_vars.m"
  MR_Word ll_backend__live_vars__AllocData_5,
#line 677 "live_vars.m"
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_6,
#line 677 "live_vars.m"
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_7,
#line 677 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__8_8,
#line 677 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__9_9,
#line 677 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__10_10,
#line 677 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__11_11,
#line 677 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_12,
#line 677 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_13)
#line 677 "live_vars.m"
{
#line 684 "live_vars.m"
  {
#line 684 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;

#line 684 "live_vars.m"
    if ((ll_backend__live_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 684 "live_vars.m"
      {
#line 684 "live_vars.m"
        *ll_backend__live_vars__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 685 "live_vars.m"
        *ll_backend__live_vars__STATE_VARIABLE_ParStackVars_13 = ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_12;
#line 685 "live_vars.m"
        *ll_backend__live_vars__HeadVar__11_11 = ll_backend__live_vars__HeadVar__10_10;
#line 685 "live_vars.m"
        *ll_backend__live_vars__HeadVar__9_9 = ll_backend__live_vars__HeadVar__8_8;
#line 685 "live_vars.m"
        *ll_backend__live_vars__STATE_VARIABLE_StackAlloc_7 = ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_6;
#line 684 "live_vars.m"
      }
#line 684 "live_vars.m"
    else
#line 688 "live_vars.m"
      {
#line 688 "live_vars.m"
        MR_Word ll_backend__live_vars__Goal0_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 688 "live_vars.m"
        MR_Word ll_backend__live_vars__Goals0_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 688 "live_vars.m"
        MR_Word ll_backend__live_vars__Goal_31;
#line 688 "live_vars.m"
        MR_Word ll_backend__live_vars__Goals_32;
#line 688 "live_vars.m"
        MR_Word ll_backend__live_vars__GoalInfo_43;
#line 688 "live_vars.m"
        MR_Word ll_backend__live_vars__NondetLiveness1_44;
#line 688 "live_vars.m"
        MR_Word ll_backend__live_vars__NondetLiveness2_46;
#line 688 "live_vars.m"
        MR_Word ll_backend__live_vars__DisjCodeModel_47;
#line 688 "live_vars.m"
        MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_56_56;
#line 688 "live_vars.m"
        MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_57_57;
#line 689 "live_vars.m"
        MR_Word ll_backend__live_vars__V_42_42;
#line 693 "live_vars.m"
        MR_Word ll_backend__live_vars___Liveness2_45;

#line 690 "live_vars.m"
        {
#line 690 "live_vars.m"
          ll_backend__live_vars__build_live_sets_in_goal_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_61, ll_backend__live_vars__Goal0_29, &ll_backend__live_vars__Goal_31, ll_backend__live_vars__ResumeVars0_4, ll_backend__live_vars__AllocData_5, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_6, &ll_backend__live_vars__STATE_VARIABLE_StackAlloc_56_56, ll_backend__live_vars__HeadVar__8_8, ll_backend__live_vars__HeadVar__9_9, ll_backend__live_vars__HeadVar__10_10, &ll_backend__live_vars__NondetLiveness1_44, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_12, &ll_backend__live_vars__STATE_VARIABLE_ParStackVars_57_57);
        }
#line 689 "live_vars.m"
        ll_backend__live_vars__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__Goal_31, (MR_Integer) 0)));
#line 689 "live_vars.m"
        ll_backend__live_vars__GoalInfo_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__Goal_31, (MR_Integer) 1)));
#line 693 "live_vars.m"
        {
#line 693 "live_vars.m"
          ll_backend__live_vars__build_live_sets_in_disj_13_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_61, ll_backend__live_vars__Goals0_30, &ll_backend__live_vars__Goals_32, ll_backend__live_vars__DisjGoalInfo_3, ll_backend__live_vars__ResumeVars0_4, ll_backend__live_vars__AllocData_5, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_56_56, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_7, ll_backend__live_vars__HeadVar__8_8, &ll_backend__live_vars___Liveness2_45, ll_backend__live_vars__HeadVar__10_10, &ll_backend__live_vars__NondetLiveness2_46, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_57_57, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_13);
        }
#line 686 "live_vars.m"
        {
#line 686 "live_vars.m"
          MR_Word base;
#line 686 "live_vars.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 686 "live_vars.m"
          *ll_backend__live_vars__HeadVar__2_2 = base;
#line 686 "live_vars.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__live_vars__Goal_31));
#line 686 "live_vars.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__live_vars__Goals_32));
#line 686 "live_vars.m"
        }
#line 696 "live_vars.m"
        {
#line 696 "live_vars.m"
          ll_backend__live_vars__DisjCodeModel_47 = hlds__code_model__goal_info_get_code_model_1_f_0(ll_backend__live_vars__DisjGoalInfo_3);
        }
#line 712 "live_vars.m"
        if ((ll_backend__live_vars__DisjCodeModel_47 == (MR_Integer) 2))
#line 698 "live_vars.m"
          {
#line 698 "live_vars.m"
            MR_Word ll_backend__live_vars__TypeCtorInfo_62_62 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 698 "live_vars.m"
            MR_Word ll_backend__live_vars__NondetLiveness3_48;
#line 698 "live_vars.m"
            MR_Word ll_backend__live_vars__Resume_49;
#line 709 "live_vars.m"
            MR_Word ll_backend__live_vars__ResumePointVars_50;
#line 705 "live_vars.m"
            MR_Word ll_backend__live_vars__Locs_51;
#line 705 "live_vars.m"
            MR_Word ll_backend__live_vars__V_60_60;

#line 702 "live_vars.m"
            {
#line 702 "live_vars.m"
              parse_tree__set_of_var__union_3_p_0(ll_backend__live_vars__TypeCtorInfo_62_62, ll_backend__live_vars__NondetLiveness1_44, ll_backend__live_vars__NondetLiveness2_46, &ll_backend__live_vars__NondetLiveness3_48);
            }
#line 703 "live_vars.m"
            {
#line 703 "live_vars.m"
              hlds__hlds_llds__goal_info_get_resume_point_2_p_0(ll_backend__live_vars__GoalInfo_43, &ll_backend__live_vars__Resume_49);
            }
#line 705 "live_vars.m"
            ll_backend__live_vars__succeeded = ((MR_tag((MR_Word) ll_backend__live_vars__Resume_49)) == (MR_mktag((MR_Integer) 1)));
#line 705 "live_vars.m"
            if (ll_backend__live_vars__succeeded)
#line 705 "live_vars.m"
              {
#line 705 "live_vars.m"
                ll_backend__live_vars__ResumePointVars_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__Resume_49, (MR_Integer) 0)));
#line 705 "live_vars.m"
                ll_backend__live_vars__Locs_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__Resume_49, (MR_Integer) 1)));
#line 706 "live_vars.m"
                ll_backend__live_vars__V_60_60 = (MR_Integer) 1;
#line 217 "live_vars.m"
                if ((ll_backend__live_vars__Locs_51 == (MR_Integer) 2))
#line 219 "live_vars.m"
                  {
#line 706 "live_vars.m"
                    ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_60_60 == (MR_Integer) 1);
#line 219 "live_vars.m"
                  }
#line 217 "live_vars.m"
                else
#line 217 "live_vars.m"
                  if ((ll_backend__live_vars__Locs_51 == (MR_Integer) 0))
#line 217 "live_vars.m"
                    {
#line 706 "live_vars.m"
                      ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_60_60 == (MR_Integer) 0);
#line 217 "live_vars.m"
                    }
#line 217 "live_vars.m"
                  else
#line 217 "live_vars.m"
                    if ((ll_backend__live_vars__Locs_51 == (MR_Integer) 3))
#line 220 "live_vars.m"
                      {
#line 706 "live_vars.m"
                        ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_60_60 == (MR_Integer) 1);
#line 220 "live_vars.m"
                      }
#line 217 "live_vars.m"
                    else
#line 218 "live_vars.m"
                      {
#line 706 "live_vars.m"
                        ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_60_60 == (MR_Integer) 1);
#line 218 "live_vars.m"
                      }
#line 705 "live_vars.m"
              }
#line 709 "live_vars.m"
            if (ll_backend__live_vars__succeeded)
#line 708 "live_vars.m"
              {
#line 708 "live_vars.m"
                parse_tree__set_of_var__union_3_p_0(ll_backend__live_vars__TypeCtorInfo_62_62, ll_backend__live_vars__NondetLiveness3_48, ll_backend__live_vars__ResumePointVars_50, ll_backend__live_vars__HeadVar__11_11);
#line 708 "live_vars.m"
                return;
              }
#line 709 "live_vars.m"
            else
#line 710 "live_vars.m"
              *ll_backend__live_vars__HeadVar__11_11 = ll_backend__live_vars__NondetLiveness3_48;
#line 698 "live_vars.m"
          }
#line 712 "live_vars.m"
        else
#line 716 "live_vars.m"
          *ll_backend__live_vars__HeadVar__11_11 = ll_backend__live_vars__HeadVar__10_10;
#line 688 "live_vars.m"
      }
#line 684 "live_vars.m"
  }
#line 677 "live_vars.m"
}

#line 657 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_par_conj_12_p_0(
#line 657 "live_vars.m"
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_50,
#line 657 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 657 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__2_2,
#line 657 "live_vars.m"
  MR_Word ll_backend__live_vars__ResumeVars0_3,
#line 657 "live_vars.m"
  MR_Word ll_backend__live_vars__AllocData_4,
#line 657 "live_vars.m"
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_5,
#line 657 "live_vars.m"
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_6,
#line 657 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__7_7,
#line 657 "live_vars.m"
  MR_Word * ll_backend__live_vars__Liveness_8,
#line 657 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_9,
#line 657 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_10,
#line 657 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_11,
#line 657 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_12)
#line 657 "live_vars.m"
{
#line 664 "live_vars.m"
  {
#line 664 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;

#line 664 "live_vars.m"
    if ((ll_backend__live_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 664 "live_vars.m"
      {
#line 664 "live_vars.m"
        *ll_backend__live_vars__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 665 "live_vars.m"
        *ll_backend__live_vars__Liveness_8 = ll_backend__live_vars__HeadVar__7_7;
#line 665 "live_vars.m"
        *ll_backend__live_vars__STATE_VARIABLE_ParStackVars_12 = ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_11;
#line 665 "live_vars.m"
        *ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_10 = ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_9;
#line 665 "live_vars.m"
        *ll_backend__live_vars__STATE_VARIABLE_StackAlloc_6 = ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_5;
#line 664 "live_vars.m"
      }
#line 664 "live_vars.m"
    else
#line 668 "live_vars.m"
      {
#line 668 "live_vars.m"
        MR_Word ll_backend__live_vars__Goal0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 668 "live_vars.m"
        MR_Word ll_backend__live_vars__Goals0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 668 "live_vars.m"
        MR_Word ll_backend__live_vars__Goal_27;
#line 668 "live_vars.m"
        MR_Word ll_backend__live_vars__Goals_28;
#line 668 "live_vars.m"
        MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_43_43;
#line 668 "live_vars.m"
        MR_Word ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_44_44;
#line 668 "live_vars.m"
        MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_45_45;
#line 668 "live_vars.m"
        MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_46_46;
#line 1003 "live_vars.m"
        MR_Word ll_backend__live_vars__Nonlocals_54;
#line 1003 "live_vars.m"
        MR_Word ll_backend__live_vars__PrevSets_55;
#line 1003 "live_vars.m"
        MR_Word ll_backend__live_vars__CurSet_56;
#line 672 "live_vars.m"
        MR_Word ll_backend__live_vars___Liveness1_36;

#line 669 "live_vars.m"
        {
#line 669 "live_vars.m"
          ll_backend__live_vars__build_live_sets_in_goal_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_50, ll_backend__live_vars__Goal0_25, &ll_backend__live_vars__Goal_27, ll_backend__live_vars__ResumeVars0_3, ll_backend__live_vars__AllocData_4, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_5, &ll_backend__live_vars__STATE_VARIABLE_StackAlloc_43_43, ll_backend__live_vars__HeadVar__7_7, ll_backend__live_vars__Liveness_8, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_9, &ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_44_44, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_11, &ll_backend__live_vars__STATE_VARIABLE_ParStackVars_45_45);
        }
#line 999 "live_vars.m"
        ll_backend__live_vars__succeeded = ((MR_tag((MR_Word) ll_backend__live_vars__STATE_VARIABLE_ParStackVars_45_45)) == (MR_mktag((MR_Integer) 1)));
#line 999 "live_vars.m"
        if (ll_backend__live_vars__succeeded)
#line 999 "live_vars.m"
          {
#line 999 "live_vars.m"
            ll_backend__live_vars__Nonlocals_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__STATE_VARIABLE_ParStackVars_45_45, (MR_Integer) 0)));
#line 999 "live_vars.m"
            ll_backend__live_vars__PrevSets_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__STATE_VARIABLE_ParStackVars_45_45, (MR_Integer) 1)));
#line 999 "live_vars.m"
            ll_backend__live_vars__CurSet_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__STATE_VARIABLE_ParStackVars_45_45, (MR_Integer) 2)));
#line 1000 "live_vars.m"
            {
#line 1000 "live_vars.m"
              MR_Word ll_backend__live_vars__V_58_58;
#line 1000 "live_vars.m"
              MR_Word ll_backend__live_vars__V_59_59;

#line 1001 "live_vars.m"
              {
#line 1001 "live_vars.m"
                ll_backend__live_vars__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1001 "live_vars.m"
                MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_58_58, 0) = ((MR_Box) (ll_backend__live_vars__CurSet_56));
#line 1001 "live_vars.m"
                MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_58_58, 1) = ((MR_Box) (ll_backend__live_vars__PrevSets_55));
#line 1001 "live_vars.m"
              }
#line 1002 "live_vars.m"
              {
#line 1002 "live_vars.m"
                ll_backend__live_vars__V_59_59 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
              }
#line 1001 "live_vars.m"
              {
#line 1001 "live_vars.m"
                ll_backend__live_vars__STATE_VARIABLE_ParStackVars_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1001 "live_vars.m"
                MR_hl_field(MR_mktag(1), ll_backend__live_vars__STATE_VARIABLE_ParStackVars_46_46, 0) = ((MR_Box) (ll_backend__live_vars__Nonlocals_54));
#line 1001 "live_vars.m"
                MR_hl_field(MR_mktag(1), ll_backend__live_vars__STATE_VARIABLE_ParStackVars_46_46, 1) = ((MR_Box) (ll_backend__live_vars__V_58_58));
#line 1001 "live_vars.m"
                MR_hl_field(MR_mktag(1), ll_backend__live_vars__STATE_VARIABLE_ParStackVars_46_46, 2) = ((MR_Box) (ll_backend__live_vars__V_59_59));
#line 1001 "live_vars.m"
              }
#line 1000 "live_vars.m"
            }
#line 999 "live_vars.m"
          }
#line 999 "live_vars.m"
        else
#line 1004 "live_vars.m"
          {
#line 1004 "live_vars.m"
            {
#line 1004 "live_vars.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.live_vars", (MR_String) "predicate \140ll_backend.live_vars.par_stack_vars_next_par_conjunct\'/2", (MR_String) "expected parallel_conjunction/3");
#line 1004 "live_vars.m"
              return;
            }
#line 1004 "live_vars.m"
          }
#line 672 "live_vars.m"
        {
#line 672 "live_vars.m"
          ll_backend__live_vars__build_live_sets_in_par_conj_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_50, ll_backend__live_vars__Goals0_26, &ll_backend__live_vars__Goals_28, ll_backend__live_vars__ResumeVars0_3, ll_backend__live_vars__AllocData_4, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_43_43, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_6, ll_backend__live_vars__HeadVar__7_7, &ll_backend__live_vars___Liveness1_36, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_44_44, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_10, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_46_46, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_12);
        }
#line 666 "live_vars.m"
        {
#line 666 "live_vars.m"
          MR_Word base;
#line 666 "live_vars.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 666 "live_vars.m"
          *ll_backend__live_vars__HeadVar__2_2 = base;
#line 666 "live_vars.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__live_vars__Goal_27));
#line 666 "live_vars.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__live_vars__Goals_28));
#line 666 "live_vars.m"
        }
#line 668 "live_vars.m"
      }
#line 664 "live_vars.m"
  }
#line 657 "live_vars.m"
}

#line 629 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_conj_12_p_0(
#line 629 "live_vars.m"
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_60,
#line 629 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 629 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__2_2,
#line 629 "live_vars.m"
  MR_Word ll_backend__live_vars__ResumeVars0_3,
#line 629 "live_vars.m"
  MR_Word ll_backend__live_vars__AllocData_4,
#line 629 "live_vars.m"
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_5,
#line 629 "live_vars.m"
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_6,
#line 629 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_Liveness_0_7,
#line 629 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_Liveness_8,
#line 629 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_9,
#line 629 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_10,
#line 629 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_11,
#line 629 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_12)
#line 629 "live_vars.m"
{
#line 636 "live_vars.m"
  {
#line 636 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;

#line 636 "live_vars.m"
    if ((ll_backend__live_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 636 "live_vars.m"
      {
#line 636 "live_vars.m"
        *ll_backend__live_vars__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 637 "live_vars.m"
        *ll_backend__live_vars__STATE_VARIABLE_ParStackVars_12 = ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_11;
#line 636 "live_vars.m"
        *ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_10 = ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_9;
#line 636 "live_vars.m"
        *ll_backend__live_vars__STATE_VARIABLE_Liveness_8 = ll_backend__live_vars__STATE_VARIABLE_Liveness_0_7;
#line 636 "live_vars.m"
        *ll_backend__live_vars__STATE_VARIABLE_StackAlloc_6 = ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_5;
#line 636 "live_vars.m"
      }
#line 636 "live_vars.m"
    else
#line 639 "live_vars.m"
      {
#line 639 "live_vars.m"
        MR_Word ll_backend__live_vars__Goal0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 639 "live_vars.m"
        MR_Word ll_backend__live_vars__Goals0_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 639 "live_vars.m"
        MR_Word ll_backend__live_vars__Goal_29;
#line 639 "live_vars.m"
        MR_Word ll_backend__live_vars__Goals_30;
#line 641 "live_vars.m"
        MR_Word ll_backend__live_vars__GoalInfo_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__Goal0_27, (MR_Integer) 1)));
#line 641 "live_vars.m"
        MR_Word ll_backend__live_vars__InstMapDelta_39;
#line 641 "live_vars.m"
        MR_Word ll_backend__live_vars__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__Goal0_27, (MR_Integer) 0)));

#line 642 "live_vars.m"
        {
#line 642 "live_vars.m"
          ll_backend__live_vars__InstMapDelta_39 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__live_vars__GoalInfo_38);
        }
#line 643 "live_vars.m"
        {
#line 643 "live_vars.m"
          ll_backend__live_vars__succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(ll_backend__live_vars__InstMapDelta_39);
        }
#line 648 "live_vars.m"
        if (ll_backend__live_vars__succeeded)
#line 646 "live_vars.m"
          {
#line 645 "live_vars.m"
            {
#line 645 "live_vars.m"
              ll_backend__live_vars__build_live_sets_in_goal_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_60, ll_backend__live_vars__Goal0_27, &ll_backend__live_vars__Goal_29, ll_backend__live_vars__ResumeVars0_3, ll_backend__live_vars__AllocData_4, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_5, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_6, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_7, ll_backend__live_vars__STATE_VARIABLE_Liveness_8, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_9, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_10, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_11, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_12);
            }
#line 647 "live_vars.m"
            ll_backend__live_vars__Goals_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 646 "live_vars.m"
          }
#line 648 "live_vars.m"
        else
#line 650 "live_vars.m"
          {
#line 650 "live_vars.m"
            MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_52_52;
#line 650 "live_vars.m"
            MR_Word ll_backend__live_vars__STATE_VARIABLE_Liveness_53_53;
#line 650 "live_vars.m"
            MR_Word ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_54_54;
#line 650 "live_vars.m"
            MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_55_55;

#line 649 "live_vars.m"
            {
#line 649 "live_vars.m"
              ll_backend__live_vars__build_live_sets_in_goal_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_60, ll_backend__live_vars__Goal0_27, &ll_backend__live_vars__Goal_29, ll_backend__live_vars__ResumeVars0_3, ll_backend__live_vars__AllocData_4, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_5, &ll_backend__live_vars__STATE_VARIABLE_StackAlloc_52_52, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_7, &ll_backend__live_vars__STATE_VARIABLE_Liveness_53_53, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_9, &ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_54_54, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_11, &ll_backend__live_vars__STATE_VARIABLE_ParStackVars_55_55);
            }
#line 651 "live_vars.m"
            {
#line 651 "live_vars.m"
              ll_backend__live_vars__build_live_sets_in_conj_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_60, ll_backend__live_vars__Goals0_28, &ll_backend__live_vars__Goals_30, ll_backend__live_vars__ResumeVars0_3, ll_backend__live_vars__AllocData_4, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_52_52, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_6, ll_backend__live_vars__STATE_VARIABLE_Liveness_53_53, ll_backend__live_vars__STATE_VARIABLE_Liveness_8, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_54_54, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_10, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_55_55, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_12);
            }
#line 650 "live_vars.m"
          }
#line 638 "live_vars.m"
        {
#line 638 "live_vars.m"
          MR_Word base;
#line 638 "live_vars.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 638 "live_vars.m"
          *ll_backend__live_vars__HeadVar__2_2 = base;
#line 638 "live_vars.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__live_vars__Goal_29));
#line 638 "live_vars.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__live_vars__Goals_30));
#line 638 "live_vars.m"
        }
#line 639 "live_vars.m"
      }
#line 636 "live_vars.m"
  }
#line 629 "live_vars.m"
}

#line 578 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_call_12_p_0(
#line 578 "live_vars.m"
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_57,
#line 578 "live_vars.m"
  MR_Word ll_backend__live_vars__OutVars_13,
#line 578 "live_vars.m"
  MR_Word ll_backend__live_vars__GoalInfo0_14,
#line 578 "live_vars.m"
  MR_Word * ll_backend__live_vars__GoalInfo_15,
#line 578 "live_vars.m"
  MR_Word ll_backend__live_vars__ResumeVars0_16,
#line 578 "live_vars.m"
  MR_Word ll_backend__live_vars__AllocData_17,
#line 578 "live_vars.m"
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_27,
#line 578 "live_vars.m"
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_28,
#line 578 "live_vars.m"
  MR_Word ll_backend__live_vars__Liveness_19,
#line 578 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_29,
#line 578 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_30,
#line 578 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_31,
#line 578 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_32)
#line 578 "live_vars.m"
{
#line 585 "live_vars.m"
  {
#line 585 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;
#line 585 "live_vars.m"
    MR_Word ll_backend__live_vars__TypeCtorInfo_58_58 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 585 "live_vars.m"
    MR_Word ll_backend__live_vars__ForwardVars0_22;
#line 585 "live_vars.m"
    MR_Word ll_backend__live_vars__ForwardVars_23;
#line 585 "live_vars.m"
    MR_Word ll_backend__live_vars__Detism_24;
#line 585 "live_vars.m"
    MR_Word ll_backend__live_vars__NeedAcrossCall_25;
#line 585 "live_vars.m"
    MR_Word ll_backend__live_vars__CodeModel_26;
#line 585 "live_vars.m"
    MR_Word ll_backend__live_vars__V_33_33;
#line 585 "live_vars.m"
    MR_Word ll_backend__live_vars__V_44_44;
#line 591 "live_vars.m"
    MR_Word ll_backend__live_vars__V_42_42;
#line 591 "live_vars.m"
    MR_Word ll_backend__live_vars__V_43_43;
#line 591 "live_vars.m"
    MR_Word ll_backend__live_vars__V_45_45;
#line 591 "live_vars.m"
    MR_ArrayPtr ll_backend__live_vars__V_46_46;
#line 596 "live_vars.m"
    MR_Word ll_backend__live_vars__V_35_35;
#line 597 "live_vars.m"
    MR_Word ll_backend__live_vars__V_52_52;
#line 597 "live_vars.m"
    MR_Word ll_backend__live_vars__V_53_53;
#line 597 "live_vars.m"
    MR_Word ll_backend__live_vars__V_54_54;
#line 597 "live_vars.m"
    MR_Word ll_backend__live_vars__V_55_55;
#line 597 "live_vars.m"
    MR_ArrayPtr ll_backend__live_vars__V_56_56;
#line 3896 "ll_backend.live_vars.c"
    void MR_CALL (* ll_backend__live_vars__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 586 "live_vars.m"
    {
#line 586 "live_vars.m"
      parse_tree__set_of_var__difference_3_p_0(ll_backend__live_vars__TypeCtorInfo_58_58, ll_backend__live_vars__Liveness_19, ll_backend__live_vars__OutVars_13, &ll_backend__live_vars__ForwardVars0_22);
    }
#line 591 "live_vars.m"
    ll_backend__live_vars__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_17, (MR_Integer) 0)));
#line 591 "live_vars.m"
    ll_backend__live_vars__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_17, (MR_Integer) 1)));
#line 591 "live_vars.m"
    ll_backend__live_vars__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_17, (MR_Integer) 2)));
#line 591 "live_vars.m"
    ll_backend__live_vars__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_17, (MR_Integer) 3)));
#line 591 "live_vars.m"
    ll_backend__live_vars__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_17, (MR_Integer) 4)));
#line 591 "live_vars.m"
    ll_backend__live_vars__V_46_46 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_17, (MR_Integer) 5)));
#line 769 "live_vars.m"
    if ((ll_backend__live_vars__V_44_44 == (MR_Integer) 0))
#line 777 "live_vars.m"
      ll_backend__live_vars__ForwardVars_23 = ll_backend__live_vars__ForwardVars0_22;
#line 769 "live_vars.m"
    else
#line 769 "live_vars.m"
      {
#line 769 "live_vars.m"
        MR_Word ll_backend__live_vars__TypeCtorInfo_18_71;
#line 769 "live_vars.m"
        MR_Word ll_backend__live_vars__VarTypes_65;
#line 769 "live_vars.m"
        MR_Word ll_backend__live_vars__RttiVarMaps_66;
#line 769 "live_vars.m"
        MR_Word ll_backend__live_vars__TypeInfoVarsLive_67;
#line 769 "live_vars.m"
        MR_Word ll_backend__live_vars__TypeInfoVarsOut_68;
#line 769 "live_vars.m"
        MR_Word ll_backend__live_vars__STATE_VARIABLE_LiveVars_16_69;

#line 770 "live_vars.m"
        {
#line 770 "live_vars.m"
          hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__live_vars__V_33_33, &ll_backend__live_vars__VarTypes_65);
        }
#line 771 "live_vars.m"
        {
#line 771 "live_vars.m"
          hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ll_backend__live_vars__V_33_33, &ll_backend__live_vars__RttiVarMaps_66);
        }
#line 772 "live_vars.m"
        {
#line 772 "live_vars.m"
          hlds__hlds_rtti__get_typeinfo_vars_4_p_0(ll_backend__live_vars__ForwardVars0_22, ll_backend__live_vars__VarTypes_65, ll_backend__live_vars__RttiVarMaps_66, &ll_backend__live_vars__TypeInfoVarsLive_67);
        }
#line 773 "live_vars.m"
        {
#line 773 "live_vars.m"
          hlds__hlds_rtti__get_typeinfo_vars_4_p_0(ll_backend__live_vars__OutVars_13, ll_backend__live_vars__VarTypes_65, ll_backend__live_vars__RttiVarMaps_66, &ll_backend__live_vars__TypeInfoVarsOut_68);
        }
#line 3957 "ll_backend.live_vars.c"
        ll_backend__live_vars__TypeCtorInfo_18_71 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 774 "live_vars.m"
        {
#line 774 "live_vars.m"
          parse_tree__set_of_var__union_3_p_0(ll_backend__live_vars__TypeCtorInfo_18_71, ll_backend__live_vars__ForwardVars0_22, ll_backend__live_vars__TypeInfoVarsOut_68, &ll_backend__live_vars__STATE_VARIABLE_LiveVars_16_69);
        }
#line 775 "live_vars.m"
        {
#line 775 "live_vars.m"
          parse_tree__set_of_var__union_3_p_0(ll_backend__live_vars__TypeCtorInfo_18_71, ll_backend__live_vars__STATE_VARIABLE_LiveVars_16_69, ll_backend__live_vars__TypeInfoVarsLive_67, &ll_backend__live_vars__ForwardVars_23);
        }
#line 769 "live_vars.m"
      }
#line 594 "live_vars.m"
    {
#line 594 "live_vars.m"
      ll_backend__live_vars__Detism_24 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ll_backend__live_vars__GoalInfo0_14);
    }
#line 596 "live_vars.m"
    ll_backend__live_vars__succeeded = (ll_backend__live_vars__Detism_24 == (MR_Integer) 6);
#line 596 "live_vars.m"
    if (ll_backend__live_vars__succeeded)
#line 596 "live_vars.m"
      {
#line 597 "live_vars.m"
        ll_backend__live_vars__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_17, (MR_Integer) 0)));
#line 597 "live_vars.m"
        ll_backend__live_vars__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_17, (MR_Integer) 1)));
#line 597 "live_vars.m"
        ll_backend__live_vars__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_17, (MR_Integer) 2)));
#line 597 "live_vars.m"
        ll_backend__live_vars__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_17, (MR_Integer) 3)));
#line 597 "live_vars.m"
        ll_backend__live_vars__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_17, (MR_Integer) 4)));
#line 597 "live_vars.m"
        ll_backend__live_vars__V_56_56 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_17, (MR_Integer) 5)));
#line 597 "live_vars.m"
        ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_35_35 == (MR_Integer) 1);
#line 596 "live_vars.m"
      }
#line 601 "live_vars.m"
    if (ll_backend__live_vars__succeeded)
#line 599 "live_vars.m"
      {
#line 599 "live_vars.m"
        MR_Word ll_backend__live_vars__V_36_36;
#line 599 "live_vars.m"
        MR_Word ll_backend__live_vars__V_37_37;
#line 599 "live_vars.m"
        MR_Word ll_backend__live_vars__V_38_38;

#line 599 "live_vars.m"
        {
#line 599 "live_vars.m"
          ll_backend__live_vars__V_36_36 = parse_tree__set_of_var__init_0_f_0(ll_backend__live_vars__TypeCtorInfo_58_58);
        }
#line 599 "live_vars.m"
        {
#line 599 "live_vars.m"
          ll_backend__live_vars__V_37_37 = parse_tree__set_of_var__init_0_f_0(ll_backend__live_vars__TypeCtorInfo_58_58);
        }
#line 600 "live_vars.m"
        {
#line 600 "live_vars.m"
          ll_backend__live_vars__V_38_38 = parse_tree__set_of_var__init_0_f_0(ll_backend__live_vars__TypeCtorInfo_58_58);
        }
#line 599 "live_vars.m"
        {
#line 599 "live_vars.m"
          ll_backend__live_vars__NeedAcrossCall_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 599 "live_vars.m"
          MR_hl_field(MR_mktag(0), ll_backend__live_vars__NeedAcrossCall_25, 0) = ((MR_Box) (ll_backend__live_vars__V_36_36));
#line 599 "live_vars.m"
          MR_hl_field(MR_mktag(0), ll_backend__live_vars__NeedAcrossCall_25, 1) = ((MR_Box) (ll_backend__live_vars__V_37_37));
#line 599 "live_vars.m"
          MR_hl_field(MR_mktag(0), ll_backend__live_vars__NeedAcrossCall_25, 2) = ((MR_Box) (ll_backend__live_vars__V_38_38));
#line 599 "live_vars.m"
        }
#line 599 "live_vars.m"
      }
#line 601 "live_vars.m"
    else
#line 602 "live_vars.m"
      {
#line 602 "live_vars.m"
        ll_backend__live_vars__NeedAcrossCall_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 602 "live_vars.m"
        MR_hl_field(MR_mktag(0), ll_backend__live_vars__NeedAcrossCall_25, 0) = ((MR_Box) (ll_backend__live_vars__ForwardVars_23));
#line 602 "live_vars.m"
        MR_hl_field(MR_mktag(0), ll_backend__live_vars__NeedAcrossCall_25, 1) = ((MR_Box) (ll_backend__live_vars__ResumeVars0_16));
#line 602 "live_vars.m"
        MR_hl_field(MR_mktag(0), ll_backend__live_vars__NeedAcrossCall_25, 2) = ((MR_Box) (ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_29));
#line 602 "live_vars.m"
      }
#line 787 "live_vars.m"
    {
#line 787 "live_vars.m"
      hlds__hlds_llds__goal_info_set_need_across_call_3_p_0(ll_backend__live_vars__NeedAcrossCall_25, ll_backend__live_vars__GoalInfo0_14, ll_backend__live_vars__GoalInfo_15);
    }
#line 4057 "ll_backend.live_vars.c"
    ll_backend__live_vars__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_57, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4059 "ll_backend.live_vars.c"
    {
#line 4061 "ll_backend.live_vars.c"
      ll_backend__live_vars__func_0(((MR_Box) ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_57), ((MR_Box) (ll_backend__live_vars__NeedAcrossCall_25)), ((MR_Box) (ll_backend__live_vars__AllocData_17)), ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_27, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_28);
    }
#line 612 "live_vars.m"
    {
#line 612 "live_vars.m"
      ll_backend__live_vars__CodeModel_26 = hlds__code_model__goal_info_get_code_model_1_f_0(*ll_backend__live_vars__GoalInfo_15);
    }
#line 615 "live_vars.m"
    if ((ll_backend__live_vars__CodeModel_26 == (MR_Integer) 0))
#line 614 "live_vars.m"
      *ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_30 = ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_29;
#line 615 "live_vars.m"
    else
#line 615 "live_vars.m"
      if ((ll_backend__live_vars__CodeModel_26 == (MR_Integer) 2))
#line 619 "live_vars.m"
        {
#line 619 "live_vars.m"
          parse_tree__set_of_var__union_3_p_0(ll_backend__live_vars__TypeCtorInfo_58_58, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_29, ll_backend__live_vars__ForwardVars_23, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_30);
        }
#line 615 "live_vars.m"
      else
#line 616 "live_vars.m"
        *ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_30 = ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_29;
#line 625 "live_vars.m"
    {
#line 625 "live_vars.m"
      ll_backend__live_vars__par_stack_vars_accumulate_stack_vars_3_p_0(ll_backend__live_vars__ForwardVars_23, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_31, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_32);
#line 625 "live_vars.m"
      return;
    }
#line 585 "live_vars.m"
  }
#line 578 "live_vars.m"
}

#line 540 "live_vars.m"
static MR_Box MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_1(
#line 540 "live_vars.m"
  MR_Box ll_backend__live_vars__closure_arg,
#line 540 "live_vars.m"
  MR_Box ll_backend__live_vars__wrapper_arg_1)
#line 540 "live_vars.m"
{
#line 540 "live_vars.m"
  {
#line 540 "live_vars.m"
    MR_Box ll_backend__live_vars__wrapper_arg_2;
#line 540 "live_vars.m"
    MR_Box ll_backend__live_vars__closure = ll_backend__live_vars__closure_arg;
#line 540 "live_vars.m"
    MR_Word ll_backend__live_vars__conv0_HeadVar__2_2;

#line 540 "live_vars.m"
    {
#line 540 "live_vars.m"
      ll_backend__live_vars__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) ll_backend__live_vars__wrapper_arg_1));
    }
#line 540 "live_vars.m"
    ll_backend__live_vars__wrapper_arg_2 = ((MR_Box) (ll_backend__live_vars__conv0_HeadVar__2_2));
#line 540 "live_vars.m"
    return ll_backend__live_vars__wrapper_arg_2;
#line 540 "live_vars.m"
  }
#line 540 "live_vars.m"
}

#line 313 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_2(
#line 313 "live_vars.m"
  void * ll_backend__live_vars__env_ptr_arg)
#line 313 "live_vars.m"
{
#line 313 "live_vars.m"
  {
#line 313 "live_vars.m"
    struct ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0_s * ll_backend__live_vars__env_ptr = (struct ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0_s *) ll_backend__live_vars__env_ptr_arg;

#line 313 "live_vars.m"
    MR_builtin_longjmp((ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__commit_0, 1);
#line 313 "live_vars.m"
  }
#line 313 "live_vars.m"
}

#line 313 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_4(
#line 313 "live_vars.m"
  void * ll_backend__live_vars__env_ptr_arg)
#line 313 "live_vars.m"
{
#line 313 "live_vars.m"
  {
#line 313 "live_vars.m"
    struct ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0_s * ll_backend__live_vars__env_ptr = (struct ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0_s *) ll_backend__live_vars__env_ptr_arg;

#line 313 "live_vars.m"
    (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Disjunct_236 = ((MR_Word) (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__conv1_Disjunct_236);
#line 313 "live_vars.m"
    {
#line 313 "live_vars.m"
      ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_3(ll_backend__live_vars__env_ptr);
#line 313 "live_vars.m"
      return;
    }
#line 313 "live_vars.m"
  }
#line 313 "live_vars.m"
}

#line 313 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_3(
#line 313 "live_vars.m"
  void * ll_backend__live_vars__env_ptr_arg)
#line 313 "live_vars.m"
{
#line 313 "live_vars.m"
  {
#line 313 "live_vars.m"
    struct ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0_s * ll_backend__live_vars__env_ptr = (struct ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0_s *) ll_backend__live_vars__env_ptr_arg;

#line 313 "live_vars.m"
    {
#line 314 "live_vars.m"
      MR_Word ll_backend__live_vars__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Disjunct_236, (MR_Integer) 0)));
#line 317 "live_vars.m"
      MR_Word ll_backend__live_vars__V_46_46;

#line 314 "live_vars.m"
      (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__DisjunctGoalInfo_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Disjunct_236, (MR_Integer) 1)));
#line 315 "live_vars.m"
      {
#line 315 "live_vars.m"
        hlds__hlds_llds__goal_info_get_resume_point_2_p_0((ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__DisjunctGoalInfo_44, &(ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__DisjunctResumePoint_45);
      }
#line 317 "live_vars.m"
      (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded = ((MR_tag((MR_Word) (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__DisjunctResumePoint_45)) == (MR_mktag((MR_Integer) 1)));
#line 317 "live_vars.m"
      if ((ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded)
#line 317 "live_vars.m"
        {
#line 317 "live_vars.m"
          {
#line 317 "live_vars.m"
            ll_backend__live_vars__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__DisjunctResumePoint_45, (MR_Integer) 0)));
#line 317 "live_vars.m"
            (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Locs_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__DisjunctResumePoint_45, (MR_Integer) 1)));
#line 317 "live_vars.m"
          }
#line 313 "live_vars.m"
          {
#line 318 "live_vars.m"
            (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__V_218_218 = (MR_Integer) 1;
#line 318 "live_vars.m"
            {
#line 318 "live_vars.m"
              ll_backend__live_vars__resume_locs_include_stack_2_p_0((ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Locs_47, &(ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__V_337_337);
            }
#line 318 "live_vars.m"
            (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded = ((ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__V_218_218 == (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__V_337_337);
#line 318 "live_vars.m"
            if ((ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded)
#line 318 "live_vars.m"
              {
#line 318 "live_vars.m"
                ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_2(ll_backend__live_vars__env_ptr);
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
ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_5(
#line 313 "live_vars.m"
  void * ll_backend__live_vars__env_ptr_arg)
#line 313 "live_vars.m"
{
#line 313 "live_vars.m"
  {
#line 313 "live_vars.m"
    struct ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0_s * ll_backend__live_vars__env_ptr = (struct ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0_s *) ll_backend__live_vars__env_ptr_arg;

#line 313 "live_vars.m"
    if (MR_builtin_setjmp((ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__commit_0) == 0)
#line 313 "live_vars.m"
      {
#line 313 "live_vars.m"
        {
#line 313 "live_vars.m"
          {
#line 313 "live_vars.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, &(ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__conv1_Disjunct_236, (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Goals_238, ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_4, ll_backend__live_vars__env_ptr);
          }
#line 313 "live_vars.m"
        }
#line 313 "live_vars.m"
        (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded = MR_FALSE;
#line 313 "live_vars.m"
      }
#line 313 "live_vars.m"
    else
#line 313 "live_vars.m"
      (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded = MR_TRUE;
#line 313 "live_vars.m"
  }
#line 313 "live_vars.m"
}

#line 232 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0(
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
    struct ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0_s ll_backend__live_vars__env;

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
#line 480 "live_vars.m"
        {
#line 480 "live_vars.m"
          MR_Word ll_backend__live_vars__PredId_99 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 0)));
#line 480 "live_vars.m"
          MR_Integer ll_backend__live_vars__ProcId_100 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 1)));
#line 480 "live_vars.m"
          MR_Word ll_backend__live_vars__Builtin_101 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 3)));
#line 480 "live_vars.m"
          MR_Word ll_backend__live_vars__CallerProcInfo_104;
#line 480 "live_vars.m"
          MR_Word ll_backend__live_vars__CalleePredProcId_106;
#line 480 "live_vars.m"
          MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_163_163;
#line 480 "live_vars.m"
          MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_165_165;
#line 480 "live_vars.m"
          MR_Word ll_backend__live_vars__ArgVars_267 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 2)));
#line 480 "live_vars.m"
          MR_Word ll_backend__live_vars__ProcInfo_268;
#line 480 "live_vars.m"
          MR_Word ll_backend__live_vars__VarTypes_269;
#line 480 "live_vars.m"
          MR_Word ll_backend__live_vars__ModuleInfo_270;
#line 480 "live_vars.m"
          MR_Word ll_backend__live_vars__OutVars_272;
#line 480 "live_vars.m"
          MR_Word ll_backend__live_vars__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 4)));
#line 480 "live_vars.m"
          MR_Word ll_backend__live_vars__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 5)));
#line 482 "live_vars.m"
          MR_Word ll_backend__live_vars__V_298_298;
#line 482 "live_vars.m"
          MR_Word ll_backend__live_vars__V_299_299;
#line 482 "live_vars.m"
          MR_Word ll_backend__live_vars__V_300_300;
#line 482 "live_vars.m"
          MR_ArrayPtr ll_backend__live_vars__V_301_301;
#line 485 "live_vars.m"
          MR_Word ll_backend__live_vars__V_105_105;
#line 486 "live_vars.m"
          MR_Word ll_backend__live_vars___InVars_265;
#line 486 "live_vars.m"
          MR_Word ll_backend__live_vars___UnusedVars_266;
#line 499 "live_vars.m"
          MR_Word ll_backend__live_vars__V_307_307;
#line 499 "live_vars.m"
          MR_Word ll_backend__live_vars__V_308_308;
#line 499 "live_vars.m"
          MR_Word ll_backend__live_vars__V_309_309;
#line 499 "live_vars.m"
          MR_Word ll_backend__live_vars__V_310_310;
#line 499 "live_vars.m"
          MR_ArrayPtr ll_backend__live_vars__V_311_311;
#line 500 "live_vars.m"
          MR_Word ll_backend__live_vars__V_338_338;
#line 500 "live_vars.m"
          MR_Integer ll_backend__live_vars__V_339_339;

#line 481 "live_vars.m"
          *ll_backend__live_vars__GoalExpr_16 = ll_backend__live_vars__GoalExpr0_15;
#line 482 "live_vars.m"
          ll_backend__live_vars__ModuleInfo_270 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 0)));
#line 482 "live_vars.m"
          ll_backend__live_vars__CallerProcInfo_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 1)));
#line 482 "live_vars.m"
          ll_backend__live_vars__V_298_298 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 2)));
#line 482 "live_vars.m"
          ll_backend__live_vars__V_299_299 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 3)));
#line 482 "live_vars.m"
          ll_backend__live_vars__V_300_300 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 4)));
#line 482 "live_vars.m"
          ll_backend__live_vars__V_301_301 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 5)));
#line 484 "live_vars.m"
          {
#line 484 "live_vars.m"
            hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__live_vars__CallerProcInfo_104, &ll_backend__live_vars__VarTypes_269);
          }
#line 485 "live_vars.m"
          {
#line 485 "live_vars.m"
            hlds__hlds_module__module_info_pred_proc_info_5_p_0(ll_backend__live_vars__ModuleInfo_270, ll_backend__live_vars__PredId_99, ll_backend__live_vars__ProcId_100, &ll_backend__live_vars__V_105_105, &ll_backend__live_vars__ProcInfo_268);
          }
#line 486 "live_vars.m"
          {
#line 486 "live_vars.m"
            hlds__arg_info__partition_proc_call_args_7_p_0(ll_backend__live_vars__ProcInfo_268, ll_backend__live_vars__VarTypes_269, ll_backend__live_vars__ModuleInfo_270, ll_backend__live_vars__ArgVars_267, &ll_backend__live_vars___InVars_265, &ll_backend__live_vars__OutVars_272, &ll_backend__live_vars___UnusedVars_266);
          }
#line 491 "live_vars.m"
          if ((ll_backend__live_vars__Builtin_101 == (MR_Integer) 0))
#line 489 "live_vars.m"
            {
#line 490 "live_vars.m"
              *ll_backend__live_vars__GoalInfo_18 = ll_backend__live_vars__GoalInfo0_17;
#line 489 "live_vars.m"
              ll_backend__live_vars__STATE_VARIABLE_StackAlloc_163_163 = ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142;
#line 489 "live_vars.m"
              *ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147 = ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146;
#line 489 "live_vars.m"
              ll_backend__live_vars__STATE_VARIABLE_ParStackVars_165_165 = ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148;
#line 489 "live_vars.m"
            }
#line 491 "live_vars.m"
          else
#line 494 "live_vars.m"
            {
#line 494 "live_vars.m"
              MR_Word ll_backend__live_vars__V_162_162;

#line 495 "live_vars.m"
              {
#line 495 "live_vars.m"
                ll_backend__live_vars__V_162_162 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__live_vars__OutVars_272);
              }
#line 495 "live_vars.m"
              {
#line 495 "live_vars.m"
                ll_backend__live_vars__build_live_sets_in_call_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322, ll_backend__live_vars__V_162_162, ll_backend__live_vars__GoalInfo0_17, ll_backend__live_vars__GoalInfo_18, ll_backend__live_vars__ResumeVars0_19, ll_backend__live_vars__AllocData_20, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142, &ll_backend__live_vars__STATE_VARIABLE_StackAlloc_163_163, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148, &ll_backend__live_vars__STATE_VARIABLE_ParStackVars_165_165);
              }
#line 494 "live_vars.m"
            }
#line 499 "live_vars.m"
          ll_backend__live_vars__V_307_307 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 0)));
#line 499 "live_vars.m"
          ll_backend__live_vars__V_308_308 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 1)));
#line 499 "live_vars.m"
          ll_backend__live_vars__CalleePredProcId_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 2)));
#line 499 "live_vars.m"
          ll_backend__live_vars__V_309_309 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 3)));
#line 499 "live_vars.m"
          ll_backend__live_vars__V_310_310 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 4)));
#line 499 "live_vars.m"
          ll_backend__live_vars__V_311_311 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 5)));
#line 500 "live_vars.m"
          ll_backend__live_vars__V_338_338 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__CalleePredProcId_106, (MR_Integer) 0)));
#line 500 "live_vars.m"
          ll_backend__live_vars__V_339_339 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__CalleePredProcId_106, (MR_Integer) 1)));
#line 500 "live_vars.m"
          {
#line 500 "live_vars.m"
            (ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ll_backend__live_vars__PredId_99, ll_backend__live_vars__V_338_338);
          }
#line 500 "live_vars.m"
          if ((ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded)
#line 500 "live_vars.m"
            (ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded = (ll_backend__live_vars__ProcId_100 == ll_backend__live_vars__V_339_339);
#line 515 "live_vars.m"
          if ((ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded)
#line 506 "live_vars.m"
            {
#line 506 "live_vars.m"
              MR_Word ll_backend__live_vars__MaybeNeedLC_107;
#line 506 "live_vars.m"
              MR_Word ll_backend__live_vars__DelayDeathSet_108;

#line 505 "live_vars.m"
              {
#line 505 "live_vars.m"
                ll_backend__live_vars__par_stack_vars_recursive_call_4_p_0(&ll_backend__live_vars__MaybeNeedLC_107, &ll_backend__live_vars__DelayDeathSet_108, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_165_165, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149);
              }
#line 511 "live_vars.m"
              if ((ll_backend__live_vars__MaybeNeedLC_107 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 512 "live_vars.m"
                *ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143 = ll_backend__live_vars__STATE_VARIABLE_StackAlloc_163_163;
#line 511 "live_vars.m"
              else
#line 508 "live_vars.m"
                {
#line 508 "live_vars.m"
                  MR_Word ll_backend__live_vars__NeedLC_109 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__MaybeNeedLC_107, (MR_Integer) 0)));

#line 509 "live_vars.m"
                  {
#line 509 "live_vars.m"
                    ll_backend__live_vars__at_recursive_call_for_loop_control_4_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322, ll_backend__live_vars__NeedLC_109, ll_backend__live_vars__AllocData_20, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_163_163, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143);
                  }
#line 508 "live_vars.m"
                }
#line 514 "live_vars.m"
              {
#line 514 "live_vars.m"
                *ll_backend__live_vars__STATE_VARIABLE_Liveness_145 = parse_tree__set_of_var__difference_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144, ll_backend__live_vars__DelayDeathSet_108);
              }
#line 506 "live_vars.m"
            }
#line 515 "live_vars.m"
          else
#line 516 "live_vars.m"
            {
#line 516 "live_vars.m"
              *ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149 = ll_backend__live_vars__STATE_VARIABLE_ParStackVars_165_165;
#line 516 "live_vars.m"
              *ll_backend__live_vars__STATE_VARIABLE_Liveness_145 = ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144;
#line 516 "live_vars.m"
              *ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143 = ll_backend__live_vars__STATE_VARIABLE_StackAlloc_163_163;
#line 516 "live_vars.m"
            }
#line 480 "live_vars.m"
        }
#line 244 "live_vars.m"
      else
#line 244 "live_vars.m"
        if (((MR_tag((MR_Word) ll_backend__live_vars__GoalExpr0_15)) == (MR_mktag((MR_Integer) 1))))
#line 519 "live_vars.m"
          {
#line 519 "live_vars.m"
            MR_Word ll_backend__live_vars__Unification_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 3)));
#line 519 "live_vars.m"
            MR_Word ll_backend__live_vars__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 0)));
#line 519 "live_vars.m"
            MR_Word ll_backend__live_vars__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 1)));
#line 519 "live_vars.m"
            MR_Word ll_backend__live_vars__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 2)));
#line 519 "live_vars.m"
            MR_Word ll_backend__live_vars__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 4)));

#line 520 "live_vars.m"
            *ll_backend__live_vars__GoalExpr_16 = ll_backend__live_vars__GoalExpr0_15;
#line 521 "live_vars.m"
            *ll_backend__live_vars__GoalInfo_18 = ll_backend__live_vars__GoalInfo0_17;
#line 528 "live_vars.m"
            if (((MR_tag((MR_Word) ll_backend__live_vars__Unification_113)) == (MR_mktag((MR_Integer) 2))))
#line 525 "live_vars.m"
              {
#line 525 "live_vars.m"
              }
#line 528 "live_vars.m"
            else
#line 528 "live_vars.m"
              if (((MR_tag((MR_Word) ll_backend__live_vars__Unification_113)) == (MR_mktag((MR_Integer) 0))))
#line 523 "live_vars.m"
                {
#line 523 "live_vars.m"
                }
#line 528 "live_vars.m"
              else
#line 528 "live_vars.m"
                if (((MR_tag((MR_Word) ll_backend__live_vars__Unification_113)) == (MR_mktag((MR_Integer) 1))))
#line 524 "live_vars.m"
                  {
#line 524 "live_vars.m"
                  }
#line 528 "live_vars.m"
                else
#line 528 "live_vars.m"
                  if (((((MR_tag((MR_Word) ll_backend__live_vars__Unification_113)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__Unification_113, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 529 "live_vars.m"
                    {
#line 530 "live_vars.m"
                      {
#line 530 "live_vars.m"
                        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.live_vars", (MR_String) "predicate \140ll_backend.live_vars.build_live_sets_in_goal_expr\'/14", (MR_String) "complicated_unify");
#line 530 "live_vars.m"
                        return;
                      }
#line 529 "live_vars.m"
                    }
#line 528 "live_vars.m"
                  else
#line 526 "live_vars.m"
                    {
#line 526 "live_vars.m"
                    }
#line 519 "live_vars.m"
            *ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143 = ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142;
#line 519 "live_vars.m"
            *ll_backend__live_vars__STATE_VARIABLE_Liveness_145 = ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144;
#line 519 "live_vars.m"
            *ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147 = ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146;
#line 519 "live_vars.m"
            *ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149 = ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148;
#line 519 "live_vars.m"
          }
#line 244 "live_vars.m"
        else
#line 244 "live_vars.m"
          if (((((MR_tag((MR_Word) ll_backend__live_vars__GoalExpr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 534 "live_vars.m"
            {
#line 534 "live_vars.m"
              MR_Word ll_backend__live_vars__Attributes_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 1)));
#line 534 "live_vars.m"
              MR_Word ll_backend__live_vars__Args_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 4)));
#line 534 "live_vars.m"
              MR_Word ll_backend__live_vars__CodeModel_276;
#line 534 "live_vars.m"
              MR_Word ll_backend__live_vars__ArgVars_277;
#line 534 "live_vars.m"
              MR_Word ll_backend__live_vars__ProcInfo_278;
#line 534 "live_vars.m"
              MR_Word ll_backend__live_vars__VarTypes_279;
#line 534 "live_vars.m"
              MR_Word ll_backend__live_vars__ModuleInfo_280;
#line 534 "live_vars.m"
              MR_Word ll_backend__live_vars__OutVars_282;
#line 534 "live_vars.m"
              MR_Word ll_backend__live_vars__PredId_284 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 2)));
#line 534 "live_vars.m"
              MR_Integer ll_backend__live_vars__ProcId_285 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 3)));
#line 534 "live_vars.m"
              MR_Word ll_backend__live_vars__CallerProcInfo_286;
#line 533 "live_vars.m"
              MR_Word ll_backend__live_vars__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 5)));
#line 533 "live_vars.m"
              MR_Word ll_backend__live_vars__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 6)));
#line 533 "live_vars.m"
              MR_Word ll_backend__live_vars__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 7)));
#line 536 "live_vars.m"
              MR_Word ll_backend__live_vars__V_313_313;
#line 536 "live_vars.m"
              MR_Word ll_backend__live_vars__V_314_314;
#line 536 "live_vars.m"
              MR_Word ll_backend__live_vars__V_315_315;
#line 536 "live_vars.m"
              MR_ArrayPtr ll_backend__live_vars__V_316_316;
#line 539 "live_vars.m"
              MR_Word ll_backend__live_vars__V_140_140;
#line 541 "live_vars.m"
              MR_Word ll_backend__live_vars___InVars_274;
#line 541 "live_vars.m"
              MR_Word ll_backend__live_vars___UnusedVars_275;
#line 550 "live_vars.m"
              MR_Word ll_backend__live_vars__V_154_154;

#line 535 "live_vars.m"
              *ll_backend__live_vars__GoalExpr_16 = ll_backend__live_vars__GoalExpr0_15;
#line 536 "live_vars.m"
              ll_backend__live_vars__ModuleInfo_280 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 0)));
#line 536 "live_vars.m"
              ll_backend__live_vars__CallerProcInfo_286 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 1)));
#line 536 "live_vars.m"
              ll_backend__live_vars__V_313_313 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 2)));
#line 536 "live_vars.m"
              ll_backend__live_vars__V_314_314 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 3)));
#line 536 "live_vars.m"
              ll_backend__live_vars__V_315_315 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 4)));
#line 536 "live_vars.m"
              ll_backend__live_vars__V_316_316 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 5)));
#line 538 "live_vars.m"
              {
#line 538 "live_vars.m"
                hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__live_vars__CallerProcInfo_286, &ll_backend__live_vars__VarTypes_279);
              }
#line 539 "live_vars.m"
              {
#line 539 "live_vars.m"
                hlds__hlds_module__module_info_pred_proc_info_5_p_0(ll_backend__live_vars__ModuleInfo_280, ll_backend__live_vars__PredId_284, ll_backend__live_vars__ProcId_285, &ll_backend__live_vars__V_140_140, &ll_backend__live_vars__ProcInfo_278);
              }
#line 540 "live_vars.m"
              {
#line 540 "live_vars.m"
                ll_backend__live_vars__ArgVars_277 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, (MR_Word) &ll_backend__live_vars_scalar_common_1[0], (MR_Word) &ll_backend__live_vars_scalar_common_2[3], ll_backend__live_vars__Args_136);
              }
#line 541 "live_vars.m"
              {
#line 541 "live_vars.m"
                hlds__arg_info__partition_proc_call_args_7_p_0(ll_backend__live_vars__ProcInfo_278, ll_backend__live_vars__VarTypes_279, ll_backend__live_vars__ModuleInfo_280, ll_backend__live_vars__ArgVars_277, &ll_backend__live_vars___InVars_274, &ll_backend__live_vars__OutVars_282, &ll_backend__live_vars___UnusedVars_275);
              }
#line 543 "live_vars.m"
              {
#line 543 "live_vars.m"
                ll_backend__live_vars__CodeModel_276 = hlds__code_model__goal_info_get_code_model_1_f_0(ll_backend__live_vars__GoalInfo0_17);
              }
#line 550 "live_vars.m"
              (ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded = (ll_backend__live_vars__CodeModel_276 == (MR_Integer) 2);
#line 550 "live_vars.m"
              (ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded = !((ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded);
#line 550 "live_vars.m"
              if ((ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded)
#line 550 "live_vars.m"
                {
#line 551 "live_vars.m"
                  {
#line 551 "live_vars.m"
                    ll_backend__live_vars__V_154_154 = parse_tree__prog_data__get_may_call_mercury_1_f_0(ll_backend__live_vars__Attributes_135);
                  }
#line 551 "live_vars.m"
                  (ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded = (ll_backend__live_vars__V_154_154 == (MR_Integer) 1);
#line 550 "live_vars.m"
                }
#line 554 "live_vars.m"
              if ((ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded)
#line 553 "live_vars.m"
                {
#line 553 "live_vars.m"
                  *ll_backend__live_vars__GoalInfo_18 = ll_backend__live_vars__GoalInfo0_17;
#line 553 "live_vars.m"
                  *ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149 = ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148;
#line 553 "live_vars.m"
                  *ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147 = ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146;
#line 553 "live_vars.m"
                  *ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143 = ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142;
#line 553 "live_vars.m"
                }
#line 554 "live_vars.m"
              else
#line 560 "live_vars.m"
                {
#line 560 "live_vars.m"
                  MR_Word ll_backend__live_vars__V_155_155;

#line 560 "live_vars.m"
                  {
#line 560 "live_vars.m"
                    ll_backend__live_vars__V_155_155 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__live_vars__OutVars_282);
                  }
#line 560 "live_vars.m"
                  {
#line 560 "live_vars.m"
                    ll_backend__live_vars__build_live_sets_in_call_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322, ll_backend__live_vars__V_155_155, ll_backend__live_vars__GoalInfo0_17, ll_backend__live_vars__GoalInfo_18, ll_backend__live_vars__ResumeVars0_19, ll_backend__live_vars__AllocData_20, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149);
                  }
#line 560 "live_vars.m"
                }
#line 534 "live_vars.m"
              *ll_backend__live_vars__STATE_VARIABLE_Liveness_145 = ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144;
#line 534 "live_vars.m"
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
#line 4816 "ll_backend.live_vars.c"
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
                    ll_backend__live_vars__build_live_sets_in_disj_13_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322, ll_backend__live_vars__Goals0_237, &(ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Goals_238, ll_backend__live_vars__GoalInfo0_17, ll_backend__live_vars__ResumeVars0_19, ll_backend__live_vars__AllocData_20, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144, ll_backend__live_vars__STATE_VARIABLE_Liveness_145, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146, &ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_215_215, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149);
                  }
#line 335 "live_vars.m"
                  if (((ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Goals_238 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 336 "live_vars.m"
                    *ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147 = ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_215_215;
#line 335 "live_vars.m"
                  else
#line 295 "live_vars.m"
                    {
#line 295 "live_vars.m"
                      MR_Word ll_backend__live_vars__FirstGoal_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Goals_238, (MR_Integer) 0)));
#line 295 "live_vars.m"
                      MR_Word ll_backend__live_vars__FirstGoalInfo_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__FirstGoal_35, (MR_Integer) 1)));
#line 295 "live_vars.m"
                      MR_Word ll_backend__live_vars__ResumePoint_39;
#line 295 "live_vars.m"
                      MR_Word ll_backend__live_vars__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Goals_238, (MR_Integer) 1)));
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
                          (ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded = (ll_backend__live_vars__V_217_217 == (MR_Integer) 2);
#line 311 "live_vars.m"
                          if ((ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded)
#line 313 "live_vars.m"
                            {
#line 313 "live_vars.m"
                              ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_5(&ll_backend__live_vars__env);
                            }
#line 323 "live_vars.m"
                          if ((ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded)
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
#line 323 "live_vars.m"
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
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Goals_238));
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
#line 459 "live_vars.m"
                  {
#line 459 "live_vars.m"
                    MR_Word ll_backend__live_vars__GenericCall_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 1)));
#line 459 "live_vars.m"
                    MR_Word ll_backend__live_vars__ArgVars_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 2)));
#line 459 "live_vars.m"
                    MR_Word ll_backend__live_vars__Modes_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 3)));
#line 459 "live_vars.m"
                    MR_Word ll_backend__live_vars__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 4)));
#line 459 "live_vars.m"
                    MR_Word ll_backend__live_vars__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 5)));

#line 460 "live_vars.m"
                    *ll_backend__live_vars__GoalExpr_16 = ll_backend__live_vars__GoalExpr0_15;
#line 464 "live_vars.m"
                    if (((MR_tag((MR_Word) ll_backend__live_vars__GenericCall_77)) == (MR_mktag((MR_Integer) 3))))
#line 462 "live_vars.m"
                      {
#line 463 "live_vars.m"
                        *ll_backend__live_vars__GoalInfo_18 = ll_backend__live_vars__GoalInfo0_17;
#line 462 "live_vars.m"
                        *ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143 = ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142;
#line 462 "live_vars.m"
                        *ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147 = ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146;
#line 462 "live_vars.m"
                        *ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149 = ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148;
#line 462 "live_vars.m"
                      }
#line 464 "live_vars.m"
                    else
#line 468 "live_vars.m"
                      {
#line 468 "live_vars.m"
                        MR_Word ll_backend__live_vars__ProcInfo_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 1)));
#line 468 "live_vars.m"
                        MR_Word ll_backend__live_vars__VarTypes_93;
#line 468 "live_vars.m"
                        MR_Word ll_backend__live_vars__Types_94;
#line 468 "live_vars.m"
                        MR_Word ll_backend__live_vars__ModuleInfo_95;
#line 468 "live_vars.m"
                        MR_Word ll_backend__live_vars__OutVars_97;
#line 468 "live_vars.m"
                        MR_Word ll_backend__live_vars__V_169_169;
#line 469 "live_vars.m"
                        MR_Word ll_backend__live_vars__V_287_287 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 0)));
#line 469 "live_vars.m"
                        MR_Word ll_backend__live_vars__V_288_288 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 2)));
#line 469 "live_vars.m"
                        MR_Word ll_backend__live_vars__V_289_289 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 3)));
#line 469 "live_vars.m"
                        MR_Word ll_backend__live_vars__V_290_290 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 4)));
#line 469 "live_vars.m"
                        MR_ArrayPtr ll_backend__live_vars__V_291_291 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 5)));
#line 472 "live_vars.m"
                        MR_Word ll_backend__live_vars__V_292_292;
#line 472 "live_vars.m"
                        MR_Word ll_backend__live_vars__V_293_293;
#line 472 "live_vars.m"
                        MR_Word ll_backend__live_vars__V_294_294;
#line 472 "live_vars.m"
                        MR_Word ll_backend__live_vars__V_295_295;
#line 472 "live_vars.m"
                        MR_ArrayPtr ll_backend__live_vars__V_296_296;
#line 473 "live_vars.m"
                        MR_Word ll_backend__live_vars___InVars_96;
#line 473 "live_vars.m"
                        MR_Word ll_backend__live_vars___UnusedVars_98;

#line 470 "live_vars.m"
                        {
#line 470 "live_vars.m"
                          hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__live_vars__ProcInfo_92, &ll_backend__live_vars__VarTypes_93);
                        }
#line 471 "live_vars.m"
                        {
#line 471 "live_vars.m"
                          parse_tree__prog_data__lookup_var_types_3_p_0(ll_backend__live_vars__VarTypes_93, ll_backend__live_vars__ArgVars_78, &ll_backend__live_vars__Types_94);
                        }
#line 472 "live_vars.m"
                        ll_backend__live_vars__ModuleInfo_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 0)));
#line 472 "live_vars.m"
                        ll_backend__live_vars__V_292_292 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 1)));
#line 472 "live_vars.m"
                        ll_backend__live_vars__V_293_293 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 2)));
#line 472 "live_vars.m"
                        ll_backend__live_vars__V_294_294 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 3)));
#line 472 "live_vars.m"
                        ll_backend__live_vars__V_295_295 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 4)));
#line 472 "live_vars.m"
                        ll_backend__live_vars__V_296_296 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 5)));
#line 473 "live_vars.m"
                        {
#line 473 "live_vars.m"
                          hlds__arg_info__partition_generic_call_args_7_p_0(ll_backend__live_vars__ModuleInfo_95, ll_backend__live_vars__ArgVars_78, ll_backend__live_vars__Types_94, ll_backend__live_vars__Modes_79, &ll_backend__live_vars___InVars_96, &ll_backend__live_vars__OutVars_97, &ll_backend__live_vars___UnusedVars_98);
                        }
#line 475 "live_vars.m"
                        {
#line 475 "live_vars.m"
                          ll_backend__live_vars__V_169_169 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__live_vars__OutVars_97);
                        }
#line 475 "live_vars.m"
                        {
#line 475 "live_vars.m"
                          ll_backend__live_vars__build_live_sets_in_call_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322, ll_backend__live_vars__V_169_169, ll_backend__live_vars__GoalInfo0_17, ll_backend__live_vars__GoalInfo_18, ll_backend__live_vars__ResumeVars0_19, ll_backend__live_vars__AllocData_20, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149);
                        }
#line 468 "live_vars.m"
                      }
#line 459 "live_vars.m"
                    *ll_backend__live_vars__STATE_VARIABLE_Liveness_145 = ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144;
#line 459 "live_vars.m"
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
                        (ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded = ((((MR_tag((MR_Word) ll_backend__live_vars__Reason_68)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__Reason_68, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 373 "live_vars.m"
                        if ((ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded)
#line 373 "live_vars.m"
                          {
#line 373 "live_vars.m"
                            ll_backend__live_vars__TermVar_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__Reason_68, (MR_Integer) 1)));
#line 373 "live_vars.m"
                            ll_backend__live_vars__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__Reason_68, (MR_Integer) 2)));
#line 373 "live_vars.m"
                            (ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded = (ll_backend__live_vars__V_173_173 == (MR_Integer) 1);
#line 373 "live_vars.m"
                          }
#line 386 "live_vars.m"
                        if ((ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded)
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
#line 377 "live_vars.m"
                            *ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149 = ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148;
#line 377 "live_vars.m"
                            *ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147 = ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146;
#line 377 "live_vars.m"
                            *ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143 = ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142;
#line 377 "live_vars.m"
                          }
#line 386 "live_vars.m"
                        else
#line 438 "live_vars.m"
                          {
#line 438 "live_vars.m"
                            MR_Word ll_backend__live_vars__LCVar_70;
#line 438 "live_vars.m"
                            MR_Word ll_backend__live_vars__LCSVar_71;
#line 386 "live_vars.m"
                            MR_Word ll_backend__live_vars__V_72_72;

#line 386 "live_vars.m"
                            (ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded = ((((MR_tag((MR_Word) ll_backend__live_vars__Reason_68)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__Reason_68, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 386 "live_vars.m"
                            if ((ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded)
#line 386 "live_vars.m"
                              {
#line 386 "live_vars.m"
                                ll_backend__live_vars__LCVar_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__Reason_68, (MR_Integer) 1)));
#line 386 "live_vars.m"
                                ll_backend__live_vars__LCSVar_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__Reason_68, (MR_Integer) 2)));
#line 386 "live_vars.m"
                                ll_backend__live_vars__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__Reason_68, (MR_Integer) 3)));
#line 398 "live_vars.m"
                                {
#line 398 "live_vars.m"
                                  MR_Word ll_backend__live_vars__TypeCtorInfo_328_328;
#line 398 "live_vars.m"
                                  MR_Word ll_backend__live_vars__LCStackVars_73;
#line 398 "live_vars.m"
                                  MR_Word ll_backend__live_vars__NeedInParConjSet_74;
#line 398 "live_vars.m"
                                  MR_Word ll_backend__live_vars__WouldDieSet_75;
#line 398 "live_vars.m"
                                  MR_Word ll_backend__live_vars__V_175_175;
#line 398 "live_vars.m"
                                  MR_Word ll_backend__live_vars__V_176_176;
#line 398 "live_vars.m"
                                  MR_Word ll_backend__live_vars__V_177_177;
#line 398 "live_vars.m"
                                  MR_Word ll_backend__live_vars__V_178_178;
#line 398 "live_vars.m"
                                  MR_Word ll_backend__live_vars__V_180_180;
#line 398 "live_vars.m"
                                  MR_Word ll_backend__live_vars__V_181_181;
#line 398 "live_vars.m"
                                  MR_Word ll_backend__live_vars__V_182_182;
#line 398 "live_vars.m"
                                  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_184_184;
#line 398 "live_vars.m"
                                  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_185_185;
#line 398 "live_vars.m"
                                  MR_Word ll_backend__live_vars__STATE_VARIABLE_Liveness_186_186;
#line 398 "live_vars.m"
                                  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_188_188;
#line 398 "live_vars.m"
                                  MR_Word ll_backend__live_vars__NonLocals_239;
#line 398 "live_vars.m"
                                  MR_Word ll_backend__live_vars__InnerStackVars_241;
#line 398 "live_vars.m"
                                  MR_Word ll_backend__live_vars__NeedInParConj_242;
#line 398 "live_vars.m"
                                  MR_Word ll_backend__live_vars__SubGoal_243;

#line 398 "live_vars.m"
                                  {
#line 398 "live_vars.m"
                                    ll_backend__live_vars__NonLocals_239 = hlds__hlds_goal__goal_info_get_code_gen_nonlocals_1_f_0(ll_backend__live_vars__GoalInfo0_17);
                                  }
#line 5353 "ll_backend.live_vars.c"
                                  ll_backend__live_vars__TypeCtorInfo_328_328 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 413 "live_vars.m"
                                  {
#line 413 "live_vars.m"
                                    ll_backend__live_vars__V_178_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 413 "live_vars.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_178_178, 0) = ((MR_Box) (ll_backend__live_vars__ResumeVars0_19));
#line 413 "live_vars.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_178_178, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 413 "live_vars.m"
                                  }
#line 413 "live_vars.m"
                                  {
#line 413 "live_vars.m"
                                    ll_backend__live_vars__V_177_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 413 "live_vars.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_177_177, 0) = ((MR_Box) (ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144));
#line 413 "live_vars.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_177_177, 1) = ((MR_Box) (ll_backend__live_vars__V_178_178));
#line 413 "live_vars.m"
                                  }
#line 413 "live_vars.m"
                                  {
#line 413 "live_vars.m"
                                    ll_backend__live_vars__V_176_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 413 "live_vars.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_176_176, 0) = ((MR_Box) (ll_backend__live_vars__NonLocals_239));
#line 413 "live_vars.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_176_176, 1) = ((MR_Box) (ll_backend__live_vars__V_177_177));
#line 413 "live_vars.m"
                                  }
#line 413 "live_vars.m"
                                  {
#line 413 "live_vars.m"
                                    ll_backend__live_vars__V_175_175 = parse_tree__set_of_var__union_list_1_f_0(ll_backend__live_vars__TypeCtorInfo_328_328, ll_backend__live_vars__V_176_176);
                                  }
#line 414 "live_vars.m"
                                  {
#line 414 "live_vars.m"
                                    ll_backend__live_vars__V_182_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 414 "live_vars.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_182_182, 0) = ((MR_Box) (ll_backend__live_vars__LCSVar_71));
#line 414 "live_vars.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_182_182, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 414 "live_vars.m"
                                  }
#line 414 "live_vars.m"
                                  {
#line 414 "live_vars.m"
                                    ll_backend__live_vars__V_181_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 414 "live_vars.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_181_181, 0) = ((MR_Box) (ll_backend__live_vars__LCVar_70));
#line 414 "live_vars.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_181_181, 1) = ((MR_Box) (ll_backend__live_vars__V_182_182));
#line 414 "live_vars.m"
                                  }
#line 414 "live_vars.m"
                                  {
#line 414 "live_vars.m"
                                    ll_backend__live_vars__V_180_180 = parse_tree__set_of_var__list_to_set_1_f_0(ll_backend__live_vars__TypeCtorInfo_328_328, ll_backend__live_vars__V_181_181);
                                  }
#line 414 "live_vars.m"
                                  {
#line 414 "live_vars.m"
                                    ll_backend__live_vars__LCStackVars_73 = parse_tree__set_of_var__union_2_f_0(ll_backend__live_vars__TypeCtorInfo_328_328, ll_backend__live_vars__V_175_175, ll_backend__live_vars__V_180_180);
                                  }
#line 415 "live_vars.m"
                                  {
#line 415 "live_vars.m"
                                    ll_backend__live_vars__par_stack_vars_start_loop_control_3_p_0(ll_backend__live_vars__LCStackVars_73, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148, &ll_backend__live_vars__STATE_VARIABLE_ParStackVars_184_184);
                                  }
#line 416 "live_vars.m"
                                  {
#line 416 "live_vars.m"
                                    ll_backend__live_vars__build_live_sets_in_goal_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322, ll_backend__live_vars__SubGoal0_263, &ll_backend__live_vars__SubGoal_243, ll_backend__live_vars__ResumeVars0_19, ll_backend__live_vars__AllocData_20, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142, &ll_backend__live_vars__STATE_VARIABLE_StackAlloc_185_185, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144, &ll_backend__live_vars__STATE_VARIABLE_Liveness_186_186, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_184_184, &ll_backend__live_vars__STATE_VARIABLE_ParStackVars_188_188);
                                  }
#line 418 "live_vars.m"
                                  {
#line 418 "live_vars.m"
                                    ll_backend__live_vars__par_stack_vars_get_stackvars_2_p_0(ll_backend__live_vars__STATE_VARIABLE_ParStackVars_188_188, &ll_backend__live_vars__InnerStackVars_241);
                                  }
#line 420 "live_vars.m"
                                  {
#line 420 "live_vars.m"
                                    ll_backend__live_vars__NeedInParConjSet_74 = parse_tree__set_of_var__union_2_f_0(ll_backend__live_vars__TypeCtorInfo_328_328, ll_backend__live_vars__LCStackVars_73, ll_backend__live_vars__InnerStackVars_241);
                                  }
#line 421 "live_vars.m"
                                  ll_backend__live_vars__NeedInParConj_242 = (MR_Word) ll_backend__live_vars__NeedInParConjSet_74;
#line 423 "live_vars.m"
                                  {
#line 423 "live_vars.m"
                                    ll_backend__live_vars__record_par_conj_6_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322, ll_backend__live_vars__NeedInParConj_242, ll_backend__live_vars__AllocData_20, ll_backend__live_vars__GoalInfo0_17, ll_backend__live_vars__GoalInfo_18, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_185_185, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143);
                                  }
#line 429 "live_vars.m"
                                  {
#line 429 "live_vars.m"
                                    ll_backend__live_vars__WouldDieSet_75 = parse_tree__set_of_var__difference_2_f_0(ll_backend__live_vars__TypeCtorInfo_328_328, ll_backend__live_vars__NeedInParConjSet_74, ll_backend__live_vars__STATE_VARIABLE_Liveness_186_186);
                                  }
#line 430 "live_vars.m"
                                  {
#line 430 "live_vars.m"
                                    *ll_backend__live_vars__STATE_VARIABLE_Liveness_145 = parse_tree__set_of_var__union_2_f_0(ll_backend__live_vars__TypeCtorInfo_328_328, ll_backend__live_vars__STATE_VARIABLE_Liveness_186_186, ll_backend__live_vars__WouldDieSet_75);
                                  }
#line 434 "live_vars.m"
                                  {
#line 434 "live_vars.m"
                                    ll_backend__live_vars__par_stack_vars_end_loop_control_4_p_0(ll_backend__live_vars__WouldDieSet_75, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_188_188, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149);
                                  }
#line 437 "live_vars.m"
                                  {
#line 437 "live_vars.m"
                                    MR_Word base;
#line 437 "live_vars.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 437 "live_vars.m"
                                    *ll_backend__live_vars__GoalExpr_16 = base;
#line 437 "live_vars.m"
                                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 437 "live_vars.m"
                                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__live_vars__Reason_68));
#line 437 "live_vars.m"
                                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__live_vars__SubGoal_243));
#line 437 "live_vars.m"
                                  }
#line 398 "live_vars.m"
                                }
#line 386 "live_vars.m"
                              }
#line 386 "live_vars.m"
                            else
#line 439 "live_vars.m"
                              {
#line 439 "live_vars.m"
                                MR_Word ll_backend__live_vars__CodeModel_76;
#line 439 "live_vars.m"
                                MR_Word ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_194_194;
#line 439 "live_vars.m"
                                MR_Word ll_backend__live_vars__SubGoal_245;

#line 440 "live_vars.m"
                                {
#line 440 "live_vars.m"
                                  ll_backend__live_vars__build_live_sets_in_goal_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322, ll_backend__live_vars__SubGoal0_263, &ll_backend__live_vars__SubGoal_245, ll_backend__live_vars__ResumeVars0_19, ll_backend__live_vars__AllocData_20, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144, ll_backend__live_vars__STATE_VARIABLE_Liveness_145, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146, &ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_194_194, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149);
                                }
#line 446 "live_vars.m"
                                {
#line 446 "live_vars.m"
                                  ll_backend__live_vars__CodeModel_76 = hlds__code_model__goal_info_get_code_model_1_f_0(ll_backend__live_vars__GoalInfo0_17);
                                }
#line 449 "live_vars.m"
                                if ((ll_backend__live_vars__CodeModel_76 == (MR_Integer) 2))
#line 448 "live_vars.m"
                                  *ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147 = ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_194_194;
#line 449 "live_vars.m"
                                else
#line 453 "live_vars.m"
                                  *ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147 = ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146;
#line 455 "live_vars.m"
                                {
#line 455 "live_vars.m"
                                  MR_Word base;
#line 455 "live_vars.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 455 "live_vars.m"
                                  *ll_backend__live_vars__GoalExpr_16 = base;
#line 455 "live_vars.m"
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 455 "live_vars.m"
                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__live_vars__Reason_68));
#line 455 "live_vars.m"
                                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__live_vars__SubGoal_245));
#line 455 "live_vars.m"
                                }
#line 456 "live_vars.m"
                                *ll_backend__live_vars__GoalInfo_18 = ll_backend__live_vars__GoalInfo0_17;
#line 439 "live_vars.m"
                              }
#line 438 "live_vars.m"
                          }
#line 372 "live_vars.m"
                      }
#line 244 "live_vars.m"
                    else
#line 244 "live_vars.m"
                      if (((((MR_tag((MR_Word) ll_backend__live_vars__GoalExpr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 565 "live_vars.m"
                        {
#line 567 "live_vars.m"
                          {
#line 567 "live_vars.m"
                            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.live_vars", (MR_String) "predicate \140ll_backend.live_vars.build_live_sets_in_goal_expr\'/14", (MR_String) "shorthand");
#line 567 "live_vars.m"
                            return;
                          }
#line 565 "live_vars.m"
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
#line 5724 "ll_backend.live_vars.c"
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
#line 183 "live_vars.m"
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
#line 5770 "ll_backend.live_vars.c"
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
#line 795 "live_vars.m"
        {
#line 795 "live_vars.m"
          hlds__hlds_llds__goal_info_set_need_in_resume_3_p_0(ll_backend__live_vars__NeedInResume_34, ll_backend__live_vars__GoalInfo0_22, &ll_backend__live_vars__GoalInfo1_30);
        }
#line 5849 "ll_backend.live_vars.c"
        ll_backend__live_vars__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_56, (MR_Integer) 0)), (MR_Integer) 6)));
#line 5851 "ll_backend.live_vars.c"
        {
#line 5853 "ll_backend.live_vars.c"
          ll_backend__live_vars__func_0(((MR_Box) ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_56), ((MR_Box) (ll_backend__live_vars__NeedInResume_34)), ((MR_Box) (ll_backend__live_vars__AllocData_16)), ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_37, &ll_backend__live_vars__STATE_VARIABLE_StackAlloc_49_49);
        }
#line 187 "live_vars.m"
      }
#line 5858 "ll_backend.live_vars.c"
    if ((ll_backend__live_vars__HasSubGoals_27 == (MR_Integer) 1))
#line 5860 "ll_backend.live_vars.c"
      {
#line 5862 "ll_backend.live_vars.c"
        MR_Word ll_backend__live_vars__STATE_VARIABLE_Liveness_47_47;

#line 176 "live_vars.m"
        {
#line 176 "live_vars.m"
          parse_tree__set_of_var__difference_3_p_0(ll_backend__live_vars__TypeCtorInfo_57_57, ll_backend__live_vars__STATE_VARIABLE_Liveness_46_46, ll_backend__live_vars__PostDeaths_25, &ll_backend__live_vars__STATE_VARIABLE_Liveness_47_47);
        }
#line 201 "live_vars.m"
        {
#line 201 "live_vars.m"
          ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_56, ll_backend__live_vars__GoalExpr0_21, &ll_backend__live_vars__GoalExpr_35, ll_backend__live_vars__GoalInfo1_30, &ll_backend__live_vars__GoalInfo_36, ll_backend__live_vars__ResumeVars1_29, ll_backend__live_vars__AllocData_16, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_49_49, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_38, ll_backend__live_vars__STATE_VARIABLE_Liveness_47_47, &ll_backend__live_vars__STATE_VARIABLE_Liveness_54_54, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_41, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_42, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_43, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_44);
        }
#line 5875 "ll_backend.live_vars.c"
      }
#line 5877 "ll_backend.live_vars.c"
    else
#line 5879 "ll_backend.live_vars.c"
      {
#line 5881 "ll_backend.live_vars.c"
        MR_Word ll_backend__live_vars__STATE_VARIABLE_Liveness_51_80;

#line 201 "live_vars.m"
        {
#line 201 "live_vars.m"
          ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_56, ll_backend__live_vars__GoalExpr0_21, &ll_backend__live_vars__GoalExpr_35, ll_backend__live_vars__GoalInfo1_30, &ll_backend__live_vars__GoalInfo_36, ll_backend__live_vars__ResumeVars1_29, ll_backend__live_vars__AllocData_16, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_49_49, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_38, ll_backend__live_vars__STATE_VARIABLE_Liveness_46_46, &ll_backend__live_vars__STATE_VARIABLE_Liveness_51_80, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_41, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_42, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_43, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_44);
        }
#line 209 "live_vars.m"
        {
#line 209 "live_vars.m"
          parse_tree__set_of_var__difference_3_p_0(ll_backend__live_vars__TypeCtorInfo_57_57, ll_backend__live_vars__STATE_VARIABLE_Liveness_51_80, ll_backend__live_vars__PostDeaths_25, &ll_backend__live_vars__STATE_VARIABLE_Liveness_54_54);
        }
#line 5894 "ll_backend.live_vars.c"
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
#line 5990 "ll_backend.live_vars.c"
                MR_Box MR_CALL (* ll_backend__live_vars__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__live_vars__TypeClassInfo_for_enum_31, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5992 "ll_backend.live_vars.c"
                MR_Box ll_backend__live_vars__conv1_V_26_26;
#line 129 "live_vars.m"
                MR_ArrayPtr ll_backend__live_vars__conv2_STATE_VARIABLE_DummyTypeArray_27_27;

#line 5997 "ll_backend.live_vars.c"
                {
#line 5999 "ll_backend.live_vars.c"
                  ll_backend__live_vars__conv1_V_26_26 = ll_backend__live_vars__func_0(((MR_Box) ll_backend__live_vars__TypeClassInfo_for_enum_31), ((MR_Box) (ll_backend__live_vars__Var_19)));
                }
#line 6002 "ll_backend.live_vars.c"
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
#line 6088 "ll_backend.live_vars.c"
    MR_Box MR_CALL (* ll_backend__live_vars__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__live_vars__TypeClassInfo_for_enum_11, (MR_Integer) 0)), (MR_Integer) 5)));
#line 6090 "ll_backend.live_vars.c"
    MR_Box ll_backend__live_vars__conv1_VarNum_7;

#line 6093 "ll_backend.live_vars.c"
    {
#line 6095 "ll_backend.live_vars.c"
      ll_backend__live_vars__conv1_VarNum_7 = ll_backend__live_vars__func_0(((MR_Box) ll_backend__live_vars__TypeClassInfo_for_enum_11), ((MR_Box) (ll_backend__live_vars__Var_4)));
    }
#line 6098 "ll_backend.live_vars.c"
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
#line 6171 "ll_backend.live_vars.c"
  {
#line 6173 "ll_backend.live_vars.c"
    MR_bool ll_backend__live_vars__succeeded;
#line 6175 "ll_backend.live_vars.c"
    void MR_CALL (* ll_backend__live_vars__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_5, (MR_Integer) 0)), (MR_Integer) 8)));

#line 6178 "ll_backend.live_vars.c"
    {
#line 6180 "ll_backend.live_vars.c"
      ll_backend__live_vars__func_0(((MR_Box) ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_5), ((MR_Box) (ll_backend__live_vars__HeadVar__1_1)), ((MR_Box) (ll_backend__live_vars__HeadVar__2_2)), ll_backend__live_vars__HeadVar__3_3, ll_backend__live_vars__HeadVar__4_4);
#line 6182 "ll_backend.live_vars.c"
      return;
    }
#line 6185 "ll_backend.live_vars.c"
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
#line 6205 "ll_backend.live_vars.c"
  {
#line 6207 "ll_backend.live_vars.c"
    MR_bool ll_backend__live_vars__succeeded;
#line 6209 "ll_backend.live_vars.c"
    void MR_CALL (* ll_backend__live_vars__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_5, (MR_Integer) 0)), (MR_Integer) 7)));

#line 6212 "ll_backend.live_vars.c"
    {
#line 6214 "ll_backend.live_vars.c"
      ll_backend__live_vars__func_0(((MR_Box) ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_5), ((MR_Box) (ll_backend__live_vars__HeadVar__1_1)), ((MR_Box) (ll_backend__live_vars__HeadVar__2_2)), ll_backend__live_vars__HeadVar__3_3, ll_backend__live_vars__HeadVar__4_4);
#line 6216 "ll_backend.live_vars.c"
      return;
    }
#line 6219 "ll_backend.live_vars.c"
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
#line 6239 "ll_backend.live_vars.c"
  {
#line 6241 "ll_backend.live_vars.c"
    MR_bool ll_backend__live_vars__succeeded;
#line 6243 "ll_backend.live_vars.c"
    void MR_CALL (* ll_backend__live_vars__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_5, (MR_Integer) 0)), (MR_Integer) 6)));

#line 6246 "ll_backend.live_vars.c"
    {
#line 6248 "ll_backend.live_vars.c"
      ll_backend__live_vars__func_0(((MR_Box) ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_5), ((MR_Box) (ll_backend__live_vars__HeadVar__1_1)), ((MR_Box) (ll_backend__live_vars__HeadVar__2_2)), ll_backend__live_vars__HeadVar__3_3, ll_backend__live_vars__HeadVar__4_4);
#line 6250 "ll_backend.live_vars.c"
      return;
    }
#line 6253 "ll_backend.live_vars.c"
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
#line 6273 "ll_backend.live_vars.c"
  {
#line 6275 "ll_backend.live_vars.c"
    MR_bool ll_backend__live_vars__succeeded;
#line 6277 "ll_backend.live_vars.c"
    void MR_CALL (* ll_backend__live_vars__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_5, (MR_Integer) 0)), (MR_Integer) 5)));

#line 6280 "ll_backend.live_vars.c"
    {
#line 6282 "ll_backend.live_vars.c"
      ll_backend__live_vars__func_0(((MR_Box) ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_5), ((MR_Box) (ll_backend__live_vars__HeadVar__1_1)), ((MR_Box) (ll_backend__live_vars__HeadVar__2_2)), ll_backend__live_vars__HeadVar__3_3, ll_backend__live_vars__HeadVar__4_4);
#line 6284 "ll_backend.live_vars.c"
      return;
    }
#line 6287 "ll_backend.live_vars.c"
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
