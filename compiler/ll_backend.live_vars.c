/*
** Automatically generated from `live_vars.m'
** by the Mercury compiler,
** version rotd-2015-09-28
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
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
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
#include "hlds.status.mih"
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



#line 229 "live_vars.m"
struct ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0_s {
#line 241 "live_vars.m"
  MR_bool ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded;
#line 287 "live_vars.m"
  MR_Word ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Goals_238;
#line 310 "live_vars.m"
  jmp_buf ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__commit_0;
#line 310 "live_vars.m"
  MR_Word ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__DisjunctGoalInfo_44;
#line 310 "live_vars.m"
  MR_Word ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__DisjunctResumePoint_45;
#line 310 "live_vars.m"
  MR_Word ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Locs_47;
#line 310 "live_vars.m"
  MR_Word ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__V_218_218;
#line 310 "live_vars.m"
  MR_Word ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Disjunct_236;
#line 310 "live_vars.m"
  MR_Word ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__V_337_337;
#line 310 "live_vars.m"
  MR_Box ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__conv1_Disjunct_236;
#line 229 "live_vars.m"
};


#line 170 "ll_backend.live_vars.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__live_vars__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 173 "ll_backend.live_vars.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__live_vars__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 176 "ll_backend.live_vars.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__live_vars__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 179 "ll_backend.live_vars.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__live_vars__array__ti_array_1check_hlds__type_util__type_ctor_info_is_dummy_type_0;

#line 182 "ll_backend.live_vars.c"
static const MR_PseudoTypeInfo ll_backend__live_vars__ll_backend__live_vars__field_types_alloc_data_0_0[6];

#line 185 "ll_backend.live_vars.c"
static const MR_ConstString ll_backend__live_vars__ll_backend__live_vars__field_names_alloc_data_0_0[6];

#line 188 "ll_backend.live_vars.c"
static const MR_DuFunctorDesc ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_alloc_data_0_0;

#line 191 "ll_backend.live_vars.c"
static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_alloc_data_0_0[1];

#line 194 "ll_backend.live_vars.c"
static const MR_DuPtagLayout ll_backend__live_vars__ll_backend__live_vars__du_ptag_ordered_alloc_data_0[1];

#line 197 "ll_backend.live_vars.c"
static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_name_ordered_alloc_data_0[1];

#line 200 "ll_backend.live_vars.c"
static const MR_Integer ll_backend__live_vars__ll_backend__live_vars__functor_number_map_alloc_data_0[1];

#line 203 "ll_backend.live_vars.c"
static const MR_DuFunctorDesc ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_0;

#line 206 "ll_backend.live_vars.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__live_vars__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 209 "ll_backend.live_vars.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__live_vars__list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 212 "ll_backend.live_vars.c"
static const MR_PseudoTypeInfo ll_backend__live_vars__ll_backend__live_vars__field_types_parallel_stackvars_0_1[3];

#line 215 "ll_backend.live_vars.c"
static const MR_DuFunctorDesc ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_1;

#line 218 "ll_backend.live_vars.c"
static const MR_PseudoTypeInfo ll_backend__live_vars__ll_backend__live_vars__field_types_parallel_stackvars_0_2[2];

#line 221 "ll_backend.live_vars.c"
static const MR_DuFunctorDesc ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_2;

#line 224 "ll_backend.live_vars.c"
static const MR_PseudoTypeInfo ll_backend__live_vars__ll_backend__live_vars__field_types_parallel_stackvars_0_3[3];

#line 227 "ll_backend.live_vars.c"
static const MR_DuFunctorDesc ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_3;

#line 230 "ll_backend.live_vars.c"
static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_parallel_stackvars_0_0[1];

#line 233 "ll_backend.live_vars.c"
static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_parallel_stackvars_0_1[1];

#line 236 "ll_backend.live_vars.c"
static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_parallel_stackvars_0_2[1];

#line 239 "ll_backend.live_vars.c"
static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_parallel_stackvars_0_3[1];

#line 242 "ll_backend.live_vars.c"
static const MR_DuPtagLayout ll_backend__live_vars__ll_backend__live_vars__du_ptag_ordered_parallel_stackvars_0[4];

#line 245 "ll_backend.live_vars.c"
static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_name_ordered_parallel_stackvars_0[4];

#line 248 "ll_backend.live_vars.c"
static const MR_Integer ll_backend__live_vars__ll_backend__live_vars__functor_number_map_parallel_stackvars_0[4];

#line 251 "ll_backend.live_vars.c"
static const MR_ConstString ll_backend__live_vars__ll_backend__live_vars__type_class_id_var_names_stack_alloc_info_1[1];

#line 254 "ll_backend.live_vars.c"
static const MR_TypeClassMethod ll_backend__live_vars__ll_backend__live_vars__type_class_id_method_ids_stack_alloc_info_1[4];

#line 257 "ll_backend.live_vars.c"
static const MR_TypeClassId ll_backend__live_vars__ll_backend__live_vars__type_class_id_stack_alloc_info_1;

#line 260 "ll_backend.live_vars.c"
static MR_bool MR_CALL 
ll_backend__live_vars____Unify____alloc_data_0_0_10001(
#line 263 "ll_backend.live_vars.c"
  MR_Box ll_backend__live_vars__wrapper_arg_1,
#line 265 "ll_backend.live_vars.c"
  MR_Box ll_backend__live_vars__wrapper_arg_2);

#line 268 "ll_backend.live_vars.c"
static void MR_CALL 
ll_backend__live_vars____Compare____alloc_data_0_0_10001(
#line 271 "ll_backend.live_vars.c"
  MR_Box * ll_backend__live_vars__wrapper_arg_1,
#line 273 "ll_backend.live_vars.c"
  MR_Box ll_backend__live_vars__wrapper_arg_2,
#line 275 "ll_backend.live_vars.c"
  MR_Box ll_backend__live_vars__wrapper_arg_3);

#line 278 "ll_backend.live_vars.c"
static MR_bool MR_CALL 
ll_backend__live_vars____Unify____parallel_stackvars_0_0_10001(
#line 281 "ll_backend.live_vars.c"
  MR_Box ll_backend__live_vars__wrapper_arg_1,
#line 283 "ll_backend.live_vars.c"
  MR_Box ll_backend__live_vars__wrapper_arg_2);

#line 286 "ll_backend.live_vars.c"
static void MR_CALL 
ll_backend__live_vars____Compare____parallel_stackvars_0_0_10001(
#line 289 "ll_backend.live_vars.c"
  MR_Box * ll_backend__live_vars__wrapper_arg_1,
#line 291 "ll_backend.live_vars.c"
  MR_Box ll_backend__live_vars__wrapper_arg_2,
#line 293 "ll_backend.live_vars.c"
  MR_Box ll_backend__live_vars__wrapper_arg_3);

#line 808 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars____Compare____parallel_stackvars_0_0(
#line 808 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__1_1,
#line 808 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__2_2,
#line 808 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__3_3);

#line 808 "live_vars.m"
static MR_bool MR_CALL 
ll_backend__live_vars____Unify____parallel_stackvars_0_0(
#line 808 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 808 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__2_2);

#line 1004 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__par_stack_vars_recursive_call_4_p_0(
#line 1004 "live_vars.m"
  MR_Word * ll_backend__live_vars__MaybeNeedLC_5,
#line 1004 "live_vars.m"
  MR_Word * ll_backend__live_vars__DelayDeathSet_6,
#line 1004 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_17,
#line 1004 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_18);

#line 983 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__par_stack_vars_get_nonlocals_2_p_0(
#line 983 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 983 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__2_2);

#line 964 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__par_stack_vars_accumulate_stack_vars_3_p_0(
#line 964 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 964 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__2_2,
#line 964 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__3_3);

#line 953 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__par_stack_vars_get_stackvars_2_p_0(
#line 953 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 953 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__2_2);

#line 926 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__par_stack_vars_end_loop_control_4_p_0(
#line 926 "live_vars.m"
  MR_Word ll_backend__live_vars__NewWouldDieSet_5,
#line 926 "live_vars.m"
  MR_Word ll_backend__live_vars__OldParStackVars_6,
#line 926 "live_vars.m"
  MR_Word ll_backend__live_vars__ParStackVars0_7,
#line 926 "live_vars.m"
  MR_Word * ll_backend__live_vars__ParStackVars_8);

#line 909 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__par_stack_vars_start_loop_control_3_p_0(
#line 909 "live_vars.m"
  MR_Word ll_backend__live_vars__NonLocals_4,
#line 909 "live_vars.m"
  MR_Word ll_backend__live_vars__ParStackVars0_5,
#line 909 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__3_3);

#line 864 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__par_stack_vars_end_parallel_conjunction_4_p_0(
#line 864 "live_vars.m"
  MR_Word ll_backend__live_vars__LiveSet_5,
#line 864 "live_vars.m"
  MR_Word ll_backend__live_vars__OuterParStackVars_6,
#line 864 "live_vars.m"
  MR_Word ll_backend__live_vars__ParStackVars0_7,
#line 864 "live_vars.m"
  MR_Word * ll_backend__live_vars__ParStackVars_8);

#line 856 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__par_stack_vars_start_parallel_conjunction_3_p_0(
#line 856 "live_vars.m"
  MR_Word ll_backend__live_vars__LiveSet_4,
#line 856 "live_vars.m"
  MR_Word ll_backend__live_vars__OuterParStackVars_5,
#line 856 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__3_3);

#line 795 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__record_par_conj_6_p_0(
#line 795 "live_vars.m"
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_17,
#line 795 "live_vars.m"
  MR_Word ll_backend__live_vars__NeedInParConj_7,
#line 795 "live_vars.m"
  MR_Word ll_backend__live_vars__AllocData_8,
#line 795 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_GoalInfo_0_11,
#line 795 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_GoalInfo_12,
#line 795 "live_vars.m"
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_13,
#line 795 "live_vars.m"
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_14);

#line 718 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_cases_12_p_0(
#line 718 "live_vars.m"
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_54,
#line 718 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 718 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__2_2,
#line 718 "live_vars.m"
  MR_Word ll_backend__live_vars__ResumeVars0_3,
#line 718 "live_vars.m"
  MR_Word ll_backend__live_vars__AllocData_4,
#line 718 "live_vars.m"
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_5,
#line 718 "live_vars.m"
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_6,
#line 718 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__7_7,
#line 718 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__8_8,
#line 718 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__9_9,
#line 718 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__10_10,
#line 718 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_11,
#line 718 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_12);

#line 674 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_disj_13_p_0(
#line 674 "live_vars.m"
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_61,
#line 674 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 674 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__2_2,
#line 674 "live_vars.m"
  MR_Word ll_backend__live_vars__DisjGoalInfo_3,
#line 674 "live_vars.m"
  MR_Word ll_backend__live_vars__ResumeVars0_4,
#line 674 "live_vars.m"
  MR_Word ll_backend__live_vars__AllocData_5,
#line 674 "live_vars.m"
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_6,
#line 674 "live_vars.m"
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_7,
#line 674 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__8_8,
#line 674 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__9_9,
#line 674 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__10_10,
#line 674 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__11_11,
#line 674 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_12,
#line 674 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_13);

#line 654 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_par_conj_12_p_0(
#line 654 "live_vars.m"
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_50,
#line 654 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 654 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__2_2,
#line 654 "live_vars.m"
  MR_Word ll_backend__live_vars__ResumeVars0_3,
#line 654 "live_vars.m"
  MR_Word ll_backend__live_vars__AllocData_4,
#line 654 "live_vars.m"
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_5,
#line 654 "live_vars.m"
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_6,
#line 654 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__7_7,
#line 654 "live_vars.m"
  MR_Word * ll_backend__live_vars__Liveness_8,
#line 654 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_9,
#line 654 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_10,
#line 654 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_11,
#line 654 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_12);

#line 626 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_conj_12_p_0(
#line 626 "live_vars.m"
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_60,
#line 626 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 626 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__2_2,
#line 626 "live_vars.m"
  MR_Word ll_backend__live_vars__ResumeVars0_3,
#line 626 "live_vars.m"
  MR_Word ll_backend__live_vars__AllocData_4,
#line 626 "live_vars.m"
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_5,
#line 626 "live_vars.m"
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_6,
#line 626 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_Liveness_0_7,
#line 626 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_Liveness_8,
#line 626 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_9,
#line 626 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_10,
#line 626 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_11,
#line 626 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_12);

#line 575 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_call_12_p_0(
#line 575 "live_vars.m"
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_57,
#line 575 "live_vars.m"
  MR_Word ll_backend__live_vars__OutVars_13,
#line 575 "live_vars.m"
  MR_Word ll_backend__live_vars__GoalInfo0_14,
#line 575 "live_vars.m"
  MR_Word * ll_backend__live_vars__GoalInfo_15,
#line 575 "live_vars.m"
  MR_Word ll_backend__live_vars__ResumeVars0_16,
#line 575 "live_vars.m"
  MR_Word ll_backend__live_vars__AllocData_17,
#line 575 "live_vars.m"
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_27,
#line 575 "live_vars.m"
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_28,
#line 575 "live_vars.m"
  MR_Word ll_backend__live_vars__Liveness_19,
#line 575 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_29,
#line 575 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_30,
#line 575 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_31,
#line 575 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_32);

#line 537 "live_vars.m"
static MR_Box MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_1(
#line 537 "live_vars.m"
  MR_Box ll_backend__live_vars__closure_arg,
#line 537 "live_vars.m"
  MR_Box ll_backend__live_vars__wrapper_arg_1);

#line 310 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_2(
#line 310 "live_vars.m"
  void * ll_backend__live_vars__env_ptr_arg);

#line 310 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_4(
#line 310 "live_vars.m"
  void * ll_backend__live_vars__env_ptr_arg);

#line 310 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_3(
#line 310 "live_vars.m"
  void * ll_backend__live_vars__env_ptr_arg);

#line 310 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_5(
#line 310 "live_vars.m"
  void * ll_backend__live_vars__env_ptr_arg);

#line 229 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0(
#line 229 "live_vars.m"
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322,
#line 229 "live_vars.m"
  MR_Word ll_backend__live_vars__GoalExpr0_15,
#line 229 "live_vars.m"
  MR_Word * ll_backend__live_vars__GoalExpr_16,
#line 229 "live_vars.m"
  MR_Word ll_backend__live_vars__GoalInfo0_17,
#line 229 "live_vars.m"
  MR_Word * ll_backend__live_vars__GoalInfo_18,
#line 229 "live_vars.m"
  MR_Word ll_backend__live_vars__ResumeVars0_19,
#line 229 "live_vars.m"
  MR_Word ll_backend__live_vars__AllocData_20,
#line 229 "live_vars.m"
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142,
#line 229 "live_vars.m"
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143,
#line 229 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144,
#line 229 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_Liveness_145,
#line 229 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146,
#line 229 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147,
#line 229 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148,
#line 229 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149);

#line 212 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__resume_locs_include_stack_2_p_0(
#line 212 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 212 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__2_2);

#line 148 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_12_p_0(
#line 148 "live_vars.m"
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_56,
#line 148 "live_vars.m"
  MR_Word ll_backend__live_vars__Goal0_13,
#line 148 "live_vars.m"
  MR_Word * ll_backend__live_vars__Goal_14,
#line 148 "live_vars.m"
  MR_Word ll_backend__live_vars__ResumeVars0_15,
#line 148 "live_vars.m"
  MR_Word ll_backend__live_vars__AllocData_16,
#line 148 "live_vars.m"
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_37,
#line 148 "live_vars.m"
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_38,
#line 148 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_Liveness_0_39,
#line 148 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_Liveness_40,
#line 148 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_41,
#line 148 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_42,
#line 148 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_43,
#line 148 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_44);

#line 114 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__set_dummy_array_elements_6_p_0(
#line 114 "live_vars.m"
  MR_Word ll_backend__live_vars__ModuleInfo_1,
#line 114 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__2_2,
#line 114 "live_vars.m"
  MR_ArrayPtr ll_backend__live_vars__STATE_VARIABLE_DummyTypeArray_0_3,
#line 114 "live_vars.m"
  MR_ArrayPtr * ll_backend__live_vars__STATE_VARIABLE_DummyTypeArray_4,
#line 114 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_DummyVars_0_5,
#line 114 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_DummyVars_6);

#line 108 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__max_var_num_3_p_0(
#line 108 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 108 "live_vars.m"
  MR_Integer ll_backend__live_vars__STATE_VARIABLE_MaxVarNum_0_8,
#line 108 "live_vars.m"
  MR_Integer * ll_backend__live_vars__STATE_VARIABLE_MaxVarNum_9);

#line 101 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_dummy_type_array_4_p_0_1(
#line 101 "live_vars.m"
  MR_Box ll_backend__live_vars__closure_arg,
#line 101 "live_vars.m"
  MR_Box ll_backend__live_vars__wrapper_arg_1,
#line 101 "live_vars.m"
  MR_Box ll_backend__live_vars__wrapper_arg_2,
#line 101 "live_vars.m"
  MR_Box * ll_backend__live_vars__wrapper_arg_3);


static /* final */ const MR_Box ll_backend__live_vars_scalar_common_1[4][2];

static /* final */ const MR_Box ll_backend__live_vars_scalar_common_2[4][3];

static /* final */ const MR_Box ll_backend__live_vars_scalar_common_3[1][6];

static /* final */ const MR_Box ll_backend__live_vars_scalar_common_5[1][5];


#line 214 "live_vars.m"
/* sealed */ struct ll_backend__live_vars__vector_common_type_4_0_s {
#line 214 "live_vars.m"
  const MR_Word ll_backend__live_vars__vector_common_type_4_0__vct_4_f_0;
#line 214 "live_vars.m"
};

static /* final */ const struct ll_backend__live_vars__vector_common_type_4_0_s ll_backend__live_vars_vector_common_4[4];



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
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&ll_backend__live_vars_scalar_common_1[0]))
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
    ((MR_Box) (&ll_backend__live_vars_scalar_common_5[0])),
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

static /* final */ const MR_Box ll_backend__live_vars_scalar_common_5[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&ll_backend__live_vars__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};


static /* final */ const struct ll_backend__live_vars__vector_common_type_4_0_s ll_backend__live_vars_vector_common_4[4] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 1 },
  /* row 2 */   {     (MR_Integer) 1 },
  /* row 3 */   {     (MR_Integer) 1 },
};


#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 819 "ll_backend.live_vars.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__live_vars__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 827 "ll_backend.live_vars.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__live_vars__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__live_vars__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 836 "ll_backend.live_vars.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__live_vars__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 844 "ll_backend.live_vars.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__live_vars__array__ti_array_1check_hlds__type_util__type_ctor_info_is_dummy_type_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &check_hlds__type_util__check_hlds__type_util__type_ctor_info_is_dummy_type_0
  }
};

#line 852 "ll_backend.live_vars.c"
static const MR_PseudoTypeInfo ll_backend__live_vars__ll_backend__live_vars__field_types_alloc_data_0_0[6] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &ll_backend__live_vars__array__ti_array_1check_hlds__type_util__type_ctor_info_is_dummy_type_0
};

#line 862 "ll_backend.live_vars.c"
static const MR_ConstString ll_backend__live_vars__ll_backend__live_vars__field_names_alloc_data_0_0[6] = {
  (MR_String) "ad_module_info",
  (MR_String) "ad_proc_info",
  (MR_String) "ad_pred_proc_id",
  (MR_String) "ad_typeinfo_liveness",
  (MR_String) "ad_opt_no_return_calls",
  (MR_String) "ad_dummy_var_array"
};

#line 872 "ll_backend.live_vars.c"
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

#line 887 "ll_backend.live_vars.c"
static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_alloc_data_0_0[1] = {
  &ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_alloc_data_0_0
};

#line 892 "ll_backend.live_vars.c"
static const MR_DuPtagLayout ll_backend__live_vars__ll_backend__live_vars__du_ptag_ordered_alloc_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_alloc_data_0_0
  }
};

#line 901 "ll_backend.live_vars.c"
static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_name_ordered_alloc_data_0[1] = {
  &ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_alloc_data_0_0
};

#line 906 "ll_backend.live_vars.c"
static const MR_Integer ll_backend__live_vars__ll_backend__live_vars__functor_number_map_alloc_data_0[1] = {
  (MR_Integer) 0
};

#line 911 "ll_backend.live_vars.c"
const MR_TypeCtorInfo_Struct ll_backend__live_vars__ll_backend__live_vars__type_ctor_info_alloc_data_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__live_vars____Unify____alloc_data_0_0_10001)),
  ((MR_Box) (ll_backend__live_vars____Compare____alloc_data_0_0_10001)),
  (MR_String) "ll_backend.live_vars",
  (MR_String) "alloc_data",
  {     ll_backend__live_vars__ll_backend__live_vars__du_name_ordered_alloc_data_0 },
  {     ll_backend__live_vars__ll_backend__live_vars__du_ptag_ordered_alloc_data_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__live_vars__ll_backend__live_vars__functor_number_map_alloc_data_0
};

#line 928 "ll_backend.live_vars.c"
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

#line 943 "ll_backend.live_vars.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__live_vars__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &ll_backend__live_vars__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 951 "ll_backend.live_vars.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__live_vars__list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__live_vars__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 959 "ll_backend.live_vars.c"
static const MR_PseudoTypeInfo ll_backend__live_vars__ll_backend__live_vars__field_types_parallel_stackvars_0_1[3] = {
  (MR_PseudoTypeInfo) &ll_backend__live_vars__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__live_vars__list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__live_vars__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 966 "ll_backend.live_vars.c"
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

#line 981 "ll_backend.live_vars.c"
static const MR_PseudoTypeInfo ll_backend__live_vars__ll_backend__live_vars__field_types_parallel_stackvars_0_2[2] = {
  (MR_PseudoTypeInfo) &ll_backend__live_vars__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__live_vars__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 987 "ll_backend.live_vars.c"
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

#line 1002 "ll_backend.live_vars.c"
static const MR_PseudoTypeInfo ll_backend__live_vars__ll_backend__live_vars__field_types_parallel_stackvars_0_3[3] = {
  (MR_PseudoTypeInfo) &ll_backend__live_vars__list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__live_vars__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__live_vars__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1009 "ll_backend.live_vars.c"
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

#line 1024 "ll_backend.live_vars.c"
static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_parallel_stackvars_0_0[1] = {
  &ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_0
};

#line 1029 "ll_backend.live_vars.c"
static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_parallel_stackvars_0_1[1] = {
  &ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_1
};

#line 1034 "ll_backend.live_vars.c"
static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_parallel_stackvars_0_2[1] = {
  &ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_2
};

#line 1039 "ll_backend.live_vars.c"
static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_parallel_stackvars_0_3[1] = {
  &ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_3
};

#line 1044 "ll_backend.live_vars.c"
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

#line 1068 "ll_backend.live_vars.c"
static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_name_ordered_parallel_stackvars_0[4] = {
  &ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_3,
  &ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_2,
  &ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_0,
  &ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_1
};

#line 1076 "ll_backend.live_vars.c"
static const MR_Integer ll_backend__live_vars__ll_backend__live_vars__functor_number_map_parallel_stackvars_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1084 "ll_backend.live_vars.c"
const MR_TypeCtorInfo_Struct ll_backend__live_vars__ll_backend__live_vars__type_ctor_info_parallel_stackvars_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__live_vars____Unify____parallel_stackvars_0_0_10001)),
  ((MR_Box) (ll_backend__live_vars____Compare____parallel_stackvars_0_0_10001)),
  (MR_String) "ll_backend.live_vars",
  (MR_String) "parallel_stackvars",
  {     ll_backend__live_vars__ll_backend__live_vars__du_name_ordered_parallel_stackvars_0 },
  {     ll_backend__live_vars__ll_backend__live_vars__du_ptag_ordered_parallel_stackvars_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  ll_backend__live_vars__ll_backend__live_vars__functor_number_map_parallel_stackvars_0
};

#line 1101 "ll_backend.live_vars.c"
static const MR_ConstString ll_backend__live_vars__ll_backend__live_vars__type_class_id_var_names_stack_alloc_info_1[1] = {
  (MR_String) "T"
};

#line 1106 "ll_backend.live_vars.c"
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

#line 1130 "ll_backend.live_vars.c"
static const MR_TypeClassId ll_backend__live_vars__ll_backend__live_vars__type_class_id_stack_alloc_info_1 = {
  (MR_String) "ll_backend.live_vars",
  (MR_String) "stack_alloc_info",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__live_vars__ll_backend__live_vars__type_class_id_var_names_stack_alloc_info_1,
  ll_backend__live_vars__ll_backend__live_vars__type_class_id_method_ids_stack_alloc_info_1
};

#line 1141 "ll_backend.live_vars.c"
const MR_TypeClassDeclStruct ll_backend__live_vars__ll_backend__live_vars__type_class_decl_stack_alloc_info_1 = {
  &ll_backend__live_vars__ll_backend__live_vars__type_class_id_stack_alloc_info_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 1149 "ll_backend.live_vars.c"
static MR_bool MR_CALL 
ll_backend__live_vars____Unify____alloc_data_0_0_10001(
#line 1152 "ll_backend.live_vars.c"
  MR_Box ll_backend__live_vars__wrapper_arg_1,
#line 1154 "ll_backend.live_vars.c"
  MR_Box ll_backend__live_vars__wrapper_arg_2)
#line 1156 "ll_backend.live_vars.c"
{
#line 1158 "ll_backend.live_vars.c"
  {
#line 1160 "ll_backend.live_vars.c"
    MR_bool ll_backend__live_vars__succeeded;

#line 1163 "ll_backend.live_vars.c"
    {
#line 1165 "ll_backend.live_vars.c"
      ll_backend__live_vars__succeeded = ll_backend__live_vars____Unify____alloc_data_0_0(((MR_Word) ll_backend__live_vars__wrapper_arg_1), ((MR_Word) ll_backend__live_vars__wrapper_arg_2));
    }
#line 1168 "ll_backend.live_vars.c"
    return ll_backend__live_vars__succeeded;
#line 1170 "ll_backend.live_vars.c"
  }
#line 1172 "ll_backend.live_vars.c"
}

#line 1175 "ll_backend.live_vars.c"
static void MR_CALL 
ll_backend__live_vars____Compare____alloc_data_0_0_10001(
#line 1178 "ll_backend.live_vars.c"
  MR_Box * ll_backend__live_vars__wrapper_arg_1,
#line 1180 "ll_backend.live_vars.c"
  MR_Box ll_backend__live_vars__wrapper_arg_2,
#line 1182 "ll_backend.live_vars.c"
  MR_Box ll_backend__live_vars__wrapper_arg_3)
#line 1184 "ll_backend.live_vars.c"
{
#line 1186 "ll_backend.live_vars.c"
  {
#line 1188 "ll_backend.live_vars.c"
    MR_Word ll_backend__live_vars__conv0_HeadVar__1_1;

#line 1191 "ll_backend.live_vars.c"
    {
#line 1193 "ll_backend.live_vars.c"
      ll_backend__live_vars____Compare____alloc_data_0_0(&ll_backend__live_vars__conv0_HeadVar__1_1, ((MR_Word) ll_backend__live_vars__wrapper_arg_2), ((MR_Word) ll_backend__live_vars__wrapper_arg_3));
    }
#line 1196 "ll_backend.live_vars.c"
    *ll_backend__live_vars__wrapper_arg_1 = ((MR_Box) (ll_backend__live_vars__conv0_HeadVar__1_1));
#line 1198 "ll_backend.live_vars.c"
  }
#line 1200 "ll_backend.live_vars.c"
}

#line 1203 "ll_backend.live_vars.c"
static MR_bool MR_CALL 
ll_backend__live_vars____Unify____parallel_stackvars_0_0_10001(
#line 1206 "ll_backend.live_vars.c"
  MR_Box ll_backend__live_vars__wrapper_arg_1,
#line 1208 "ll_backend.live_vars.c"
  MR_Box ll_backend__live_vars__wrapper_arg_2)
#line 1210 "ll_backend.live_vars.c"
{
#line 1212 "ll_backend.live_vars.c"
  {
#line 1214 "ll_backend.live_vars.c"
    MR_bool ll_backend__live_vars__succeeded;

#line 1217 "ll_backend.live_vars.c"
    {
#line 1219 "ll_backend.live_vars.c"
      ll_backend__live_vars__succeeded = ll_backend__live_vars____Unify____parallel_stackvars_0_0(((MR_Word) ll_backend__live_vars__wrapper_arg_1), ((MR_Word) ll_backend__live_vars__wrapper_arg_2));
    }
#line 1222 "ll_backend.live_vars.c"
    return ll_backend__live_vars__succeeded;
#line 1224 "ll_backend.live_vars.c"
  }
#line 1226 "ll_backend.live_vars.c"
}

#line 1229 "ll_backend.live_vars.c"
static void MR_CALL 
ll_backend__live_vars____Compare____parallel_stackvars_0_0_10001(
#line 1232 "ll_backend.live_vars.c"
  MR_Box * ll_backend__live_vars__wrapper_arg_1,
#line 1234 "ll_backend.live_vars.c"
  MR_Box ll_backend__live_vars__wrapper_arg_2,
#line 1236 "ll_backend.live_vars.c"
  MR_Box ll_backend__live_vars__wrapper_arg_3)
#line 1238 "ll_backend.live_vars.c"
{
#line 1240 "ll_backend.live_vars.c"
  {
#line 1242 "ll_backend.live_vars.c"
    MR_Word ll_backend__live_vars__conv0_HeadVar__1_1;

#line 1245 "ll_backend.live_vars.c"
    {
#line 1247 "ll_backend.live_vars.c"
      ll_backend__live_vars____Compare____parallel_stackvars_0_0(&ll_backend__live_vars__conv0_HeadVar__1_1, ((MR_Word) ll_backend__live_vars__wrapper_arg_2), ((MR_Word) ll_backend__live_vars__wrapper_arg_3));
    }
#line 1250 "ll_backend.live_vars.c"
    *ll_backend__live_vars__wrapper_arg_1 = ((MR_Box) (ll_backend__live_vars__conv0_HeadVar__1_1));
#line 1252 "ll_backend.live_vars.c"
  }
#line 1254 "ll_backend.live_vars.c"
}

#line 808 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars____Compare____parallel_stackvars_0_0(
#line 808 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__1_1,
#line 808 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__2_2,
#line 808 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__3_3)
#line 808 "live_vars.m"
{
#line 808 "live_vars.m"
  {
#line 808 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;
#line 808 "live_vars.m"
    MR_Integer ll_backend__live_vars__CastX_73 = (MR_Integer) ll_backend__live_vars__HeadVar__2_2;
#line 808 "live_vars.m"
    MR_Integer ll_backend__live_vars__CastY_74 = (MR_Integer) ll_backend__live_vars__HeadVar__3_3;

#line 808 "live_vars.m"
    ll_backend__live_vars__succeeded = (ll_backend__live_vars__CastX_73 == ll_backend__live_vars__CastY_74);
#line 808 "live_vars.m"
    if (ll_backend__live_vars__succeeded)
#line 1281 "ll_backend.live_vars.c"
      *ll_backend__live_vars__HeadVar__1_1 = (MR_Integer) 0;
#line 808 "live_vars.m"
    else
#line 808 "live_vars.m"
#line 808 "live_vars.m"
      switch (MR_tag((MR_Word) ll_backend__live_vars__HeadVar__2_2)) {
#line 808 "live_vars.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 808 "live_vars.m"
        case (MR_Integer) 0:
#line 808 "live_vars.m"
#line 808 "live_vars.m"
          switch (MR_tag((MR_Word) ll_backend__live_vars__HeadVar__3_3)) {
#line 808 "live_vars.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 808 "live_vars.m"
            case (MR_Integer) 0:
#line 808 "live_vars.m"
              *ll_backend__live_vars__HeadVar__1_1 = (MR_Integer) 0;
#line 808 "live_vars.m"
              break;
#line 808 "live_vars.m"
            case (MR_Integer) 1:
#line 1305 "ll_backend.live_vars.c"
              *ll_backend__live_vars__HeadVar__1_1 = (MR_Integer) 1;
#line 808 "live_vars.m"
              break;
#line 808 "live_vars.m"
            case (MR_Integer) 2:
#line 1311 "ll_backend.live_vars.c"
              *ll_backend__live_vars__HeadVar__1_1 = (MR_Integer) 1;
#line 808 "live_vars.m"
              break;
#line 808 "live_vars.m"
            case (MR_Integer) 3:
#line 1317 "ll_backend.live_vars.c"
              *ll_backend__live_vars__HeadVar__1_1 = (MR_Integer) 1;
#line 808 "live_vars.m"
              break;
#line 808 "live_vars.m"
          }
#line 808 "live_vars.m"
          break;
#line 808 "live_vars.m"
        case (MR_Integer) 1:
#line 808 "live_vars.m"
          {
#line 808 "live_vars.m"
            MR_Word ll_backend__live_vars__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 2)));
#line 808 "live_vars.m"
            MR_Word ll_backend__live_vars__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 1)));
#line 808 "live_vars.m"
            MR_Word ll_backend__live_vars__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 0)));

#line 808 "live_vars.m"
#line 808 "live_vars.m"
            switch (MR_tag((MR_Word) ll_backend__live_vars__HeadVar__3_3)) {
#line 808 "live_vars.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 808 "live_vars.m"
              case (MR_Integer) 0:
#line 1343 "ll_backend.live_vars.c"
                *ll_backend__live_vars__HeadVar__1_1 = (MR_Integer) 2;
#line 808 "live_vars.m"
                break;
#line 808 "live_vars.m"
              case (MR_Integer) 1:
#line 808 "live_vars.m"
                {
#line 808 "live_vars.m"
                  MR_Word ll_backend__live_vars__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__3_3, (MR_Integer) 0)));
#line 808 "live_vars.m"
                  MR_Word ll_backend__live_vars__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__3_3, (MR_Integer) 1)));
#line 808 "live_vars.m"
                  MR_Word ll_backend__live_vars__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__3_3, (MR_Integer) 2)));
#line 808 "live_vars.m"
                  MR_Word ll_backend__live_vars__V_21_21;

#line 808 "live_vars.m"
                  {
#line 808 "live_vars.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__live_vars_scalar_common_1[2], &ll_backend__live_vars__V_21_21, ((MR_Box) (ll_backend__live_vars__V_90_90)), ((MR_Box) (ll_backend__live_vars__V_18_18)));
                  }
#line 1365 "ll_backend.live_vars.c"
                  ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_21_21 == (MR_Integer) 0);
#line 808 "live_vars.m"
                  ll_backend__live_vars__succeeded = !(ll_backend__live_vars__succeeded);
#line 808 "live_vars.m"
                  if (ll_backend__live_vars__succeeded)
#line 808 "live_vars.m"
                    *ll_backend__live_vars__HeadVar__1_1 = ll_backend__live_vars__V_21_21;
#line 808 "live_vars.m"
                  else
#line 808 "live_vars.m"
                    {
#line 808 "live_vars.m"
                      MR_Word ll_backend__live_vars__V_22_22;

#line 808 "live_vars.m"
                      {
#line 808 "live_vars.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__live_vars_scalar_common_1[3], &ll_backend__live_vars__V_22_22, ((MR_Box) (ll_backend__live_vars__V_89_89)), ((MR_Box) (ll_backend__live_vars__V_19_19)));
                      }
#line 1385 "ll_backend.live_vars.c"
                      ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_22_22 == (MR_Integer) 0);
#line 808 "live_vars.m"
                      ll_backend__live_vars__succeeded = !(ll_backend__live_vars__succeeded);
#line 808 "live_vars.m"
                      if (ll_backend__live_vars__succeeded)
#line 808 "live_vars.m"
                        *ll_backend__live_vars__HeadVar__1_1 = ll_backend__live_vars__V_22_22;
#line 808 "live_vars.m"
                      else
#line 808 "live_vars.m"
                        {
#line 808 "live_vars.m"
                          {
#line 808 "live_vars.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__live_vars_scalar_common_1[2], ll_backend__live_vars__HeadVar__1_1, ((MR_Box) (ll_backend__live_vars__V_88_88)), ((MR_Box) (ll_backend__live_vars__V_20_20)));
#line 808 "live_vars.m"
                            return;
                          }
#line 808 "live_vars.m"
                        }
#line 808 "live_vars.m"
                    }
#line 808 "live_vars.m"
                }
#line 808 "live_vars.m"
                break;
#line 808 "live_vars.m"
              case (MR_Integer) 2:
#line 1414 "ll_backend.live_vars.c"
                *ll_backend__live_vars__HeadVar__1_1 = (MR_Integer) 1;
#line 808 "live_vars.m"
                break;
#line 808 "live_vars.m"
              case (MR_Integer) 3:
#line 1420 "ll_backend.live_vars.c"
                *ll_backend__live_vars__HeadVar__1_1 = (MR_Integer) 1;
#line 808 "live_vars.m"
                break;
#line 808 "live_vars.m"
            }
#line 808 "live_vars.m"
          }
#line 808 "live_vars.m"
          break;
#line 808 "live_vars.m"
        case (MR_Integer) 2:
#line 808 "live_vars.m"
          {
#line 808 "live_vars.m"
            MR_Word ll_backend__live_vars__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 1)));
#line 808 "live_vars.m"
            MR_Word ll_backend__live_vars__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 0)));

#line 808 "live_vars.m"
#line 808 "live_vars.m"
            switch (MR_tag((MR_Word) ll_backend__live_vars__HeadVar__3_3)) {
#line 808 "live_vars.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 808 "live_vars.m"
              case (MR_Integer) 0:
#line 1446 "ll_backend.live_vars.c"
                *ll_backend__live_vars__HeadVar__1_1 = (MR_Integer) 2;
#line 808 "live_vars.m"
                break;
#line 808 "live_vars.m"
              case (MR_Integer) 1:
#line 1452 "ll_backend.live_vars.c"
                *ll_backend__live_vars__HeadVar__1_1 = (MR_Integer) 2;
#line 808 "live_vars.m"
                break;
#line 808 "live_vars.m"
              case (MR_Integer) 2:
#line 808 "live_vars.m"
                {
#line 808 "live_vars.m"
                  MR_Word ll_backend__live_vars__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__HeadVar__3_3, (MR_Integer) 0)));
#line 808 "live_vars.m"
                  MR_Word ll_backend__live_vars__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__HeadVar__3_3, (MR_Integer) 1)));
#line 808 "live_vars.m"
                  MR_Word ll_backend__live_vars__V_45_45;

#line 808 "live_vars.m"
                  {
#line 808 "live_vars.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__live_vars_scalar_common_1[2], &ll_backend__live_vars__V_45_45, ((MR_Box) (ll_backend__live_vars__V_87_87)), ((MR_Box) (ll_backend__live_vars__V_43_43)));
                  }
#line 1472 "ll_backend.live_vars.c"
                  ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_45_45 == (MR_Integer) 0);
#line 808 "live_vars.m"
                  ll_backend__live_vars__succeeded = !(ll_backend__live_vars__succeeded);
#line 808 "live_vars.m"
                  if (ll_backend__live_vars__succeeded)
#line 808 "live_vars.m"
                    *ll_backend__live_vars__HeadVar__1_1 = ll_backend__live_vars__V_45_45;
#line 808 "live_vars.m"
                  else
#line 808 "live_vars.m"
                    {
#line 808 "live_vars.m"
                      {
#line 808 "live_vars.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__live_vars_scalar_common_1[2], ll_backend__live_vars__HeadVar__1_1, ((MR_Box) (ll_backend__live_vars__V_86_86)), ((MR_Box) (ll_backend__live_vars__V_44_44)));
#line 808 "live_vars.m"
                        return;
                      }
#line 808 "live_vars.m"
                    }
#line 808 "live_vars.m"
                }
#line 808 "live_vars.m"
                break;
#line 808 "live_vars.m"
              case (MR_Integer) 3:
#line 1499 "ll_backend.live_vars.c"
                *ll_backend__live_vars__HeadVar__1_1 = (MR_Integer) 1;
#line 808 "live_vars.m"
                break;
#line 808 "live_vars.m"
            }
#line 808 "live_vars.m"
          }
#line 808 "live_vars.m"
          break;
#line 808 "live_vars.m"
        case (MR_Integer) 3:
#line 808 "live_vars.m"
          {
#line 808 "live_vars.m"
            MR_Word ll_backend__live_vars__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 2)));
#line 808 "live_vars.m"
            MR_Word ll_backend__live_vars__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 1)));
#line 808 "live_vars.m"
            MR_Word ll_backend__live_vars__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 0)));

#line 808 "live_vars.m"
#line 808 "live_vars.m"
            switch (MR_tag((MR_Word) ll_backend__live_vars__HeadVar__3_3)) {
#line 808 "live_vars.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 808 "live_vars.m"
              case (MR_Integer) 0:
#line 1527 "ll_backend.live_vars.c"
                *ll_backend__live_vars__HeadVar__1_1 = (MR_Integer) 2;
#line 808 "live_vars.m"
                break;
#line 808 "live_vars.m"
              case (MR_Integer) 1:
#line 1533 "ll_backend.live_vars.c"
                *ll_backend__live_vars__HeadVar__1_1 = (MR_Integer) 2;
#line 808 "live_vars.m"
                break;
#line 808 "live_vars.m"
              case (MR_Integer) 2:
#line 1539 "ll_backend.live_vars.c"
                *ll_backend__live_vars__HeadVar__1_1 = (MR_Integer) 2;
#line 808 "live_vars.m"
                break;
#line 808 "live_vars.m"
              case (MR_Integer) 3:
#line 808 "live_vars.m"
                {
#line 808 "live_vars.m"
                  MR_Word ll_backend__live_vars__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__3_3, (MR_Integer) 0)));
#line 808 "live_vars.m"
                  MR_Word ll_backend__live_vars__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__3_3, (MR_Integer) 1)));
#line 808 "live_vars.m"
                  MR_Word ll_backend__live_vars__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__3_3, (MR_Integer) 2)));
#line 808 "live_vars.m"
                  MR_Word ll_backend__live_vars__V_71_71;

#line 808 "live_vars.m"
                  {
#line 808 "live_vars.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__live_vars_scalar_common_1[3], &ll_backend__live_vars__V_71_71, ((MR_Box) (ll_backend__live_vars__V_85_85)), ((MR_Box) (ll_backend__live_vars__V_68_68)));
                  }
#line 1561 "ll_backend.live_vars.c"
                  ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_71_71 == (MR_Integer) 0);
#line 808 "live_vars.m"
                  ll_backend__live_vars__succeeded = !(ll_backend__live_vars__succeeded);
#line 808 "live_vars.m"
                  if (ll_backend__live_vars__succeeded)
#line 808 "live_vars.m"
                    *ll_backend__live_vars__HeadVar__1_1 = ll_backend__live_vars__V_71_71;
#line 808 "live_vars.m"
                  else
#line 808 "live_vars.m"
                    {
#line 808 "live_vars.m"
                      MR_Word ll_backend__live_vars__V_72_72;

#line 808 "live_vars.m"
                      {
#line 808 "live_vars.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__live_vars_scalar_common_1[2], &ll_backend__live_vars__V_72_72, ((MR_Box) (ll_backend__live_vars__V_84_84)), ((MR_Box) (ll_backend__live_vars__V_69_69)));
                      }
#line 1581 "ll_backend.live_vars.c"
                      ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_72_72 == (MR_Integer) 0);
#line 808 "live_vars.m"
                      ll_backend__live_vars__succeeded = !(ll_backend__live_vars__succeeded);
#line 808 "live_vars.m"
                      if (ll_backend__live_vars__succeeded)
#line 808 "live_vars.m"
                        *ll_backend__live_vars__HeadVar__1_1 = ll_backend__live_vars__V_72_72;
#line 808 "live_vars.m"
                      else
#line 808 "live_vars.m"
                        {
#line 808 "live_vars.m"
                          {
#line 808 "live_vars.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__live_vars_scalar_common_1[2], ll_backend__live_vars__HeadVar__1_1, ((MR_Box) (ll_backend__live_vars__V_83_83)), ((MR_Box) (ll_backend__live_vars__V_70_70)));
#line 808 "live_vars.m"
                            return;
                          }
#line 808 "live_vars.m"
                        }
#line 808 "live_vars.m"
                    }
#line 808 "live_vars.m"
                }
#line 808 "live_vars.m"
                break;
#line 808 "live_vars.m"
            }
#line 808 "live_vars.m"
          }
#line 808 "live_vars.m"
          break;
#line 808 "live_vars.m"
      }
#line 808 "live_vars.m"
  }
#line 808 "live_vars.m"
}

#line 808 "live_vars.m"
static MR_bool MR_CALL 
ll_backend__live_vars____Unify____parallel_stackvars_0_0(
#line 808 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 808 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__2_2)
#line 808 "live_vars.m"
{
#line 808 "live_vars.m"
  {
#line 808 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;
#line 808 "live_vars.m"
    MR_Integer ll_backend__live_vars__CastX_21 = (MR_Integer) ll_backend__live_vars__HeadVar__1_1;
#line 808 "live_vars.m"
    MR_Integer ll_backend__live_vars__CastY_22 = (MR_Integer) ll_backend__live_vars__HeadVar__2_2;

#line 808 "live_vars.m"
    ll_backend__live_vars__succeeded = (ll_backend__live_vars__CastX_21 == ll_backend__live_vars__CastY_22);
#line 808 "live_vars.m"
    if (ll_backend__live_vars__succeeded)
#line 808 "live_vars.m"
      ll_backend__live_vars__succeeded = MR_TRUE;
#line 808 "live_vars.m"
    else
#line 808 "live_vars.m"
#line 808 "live_vars.m"
      switch (MR_tag((MR_Word) ll_backend__live_vars__HeadVar__1_1)) {
#line 808 "live_vars.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 808 "live_vars.m"
        case (MR_Integer) 0:
#line 808 "live_vars.m"
          {
#line 808 "live_vars.m"
            MR_Integer ll_backend__live_vars__CastX_3 = (MR_Integer) ll_backend__live_vars__HeadVar__1_1;
#line 808 "live_vars.m"
            MR_Integer ll_backend__live_vars__CastY_4 = (MR_Integer) ll_backend__live_vars__HeadVar__2_2;

#line 808 "live_vars.m"
            ll_backend__live_vars__succeeded = (ll_backend__live_vars__CastY_4 == ll_backend__live_vars__CastX_3);
#line 808 "live_vars.m"
          }
#line 808 "live_vars.m"
          break;
#line 808 "live_vars.m"
        case (MR_Integer) 1:
#line 808 "live_vars.m"
          {
#line 808 "live_vars.m"
            MR_Word ll_backend__live_vars__TypeInfo_28_28;
#line 808 "live_vars.m"
            MR_Word ll_backend__live_vars__TypeInfo_29_29;
#line 808 "live_vars.m"
            MR_Word ll_backend__live_vars__TypeInfo_30_30;
#line 808 "live_vars.m"
            MR_Word ll_backend__live_vars__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 808 "live_vars.m"
            MR_Word ll_backend__live_vars__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 808 "live_vars.m"
            MR_Word ll_backend__live_vars__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 2)));
#line 808 "live_vars.m"
            MR_Word ll_backend__live_vars__V_8_8;
#line 808 "live_vars.m"
            MR_Word ll_backend__live_vars__V_9_9;
#line 808 "live_vars.m"
            MR_Word ll_backend__live_vars__V_10_10;

#line 808 "live_vars.m"
            ll_backend__live_vars__succeeded = ((MR_tag((MR_Word) ll_backend__live_vars__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 808 "live_vars.m"
            if (ll_backend__live_vars__succeeded)
#line 808 "live_vars.m"
              {
#line 808 "live_vars.m"
                ll_backend__live_vars__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 0)));
#line 808 "live_vars.m"
                ll_backend__live_vars__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 1)));
#line 808 "live_vars.m"
                ll_backend__live_vars__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 2)));
#line 1702 "ll_backend.live_vars.c"
                ll_backend__live_vars__TypeInfo_28_28 = (MR_Word) &ll_backend__live_vars_scalar_common_1[2];
#line 1704 "ll_backend.live_vars.c"
                {
#line 1706 "ll_backend.live_vars.c"
                  ll_backend__live_vars__succeeded = mercury__builtin__unify_2_p_0(ll_backend__live_vars__TypeInfo_28_28, ((MR_Box) (ll_backend__live_vars__V_5_5)), ((MR_Box) (ll_backend__live_vars__V_8_8)));
                }
#line 808 "live_vars.m"
                if (ll_backend__live_vars__succeeded)
#line 808 "live_vars.m"
                  {
#line 1713 "ll_backend.live_vars.c"
                    ll_backend__live_vars__TypeInfo_29_29 = (MR_Word) &ll_backend__live_vars_scalar_common_1[3];
#line 1715 "ll_backend.live_vars.c"
                    {
#line 1717 "ll_backend.live_vars.c"
                      ll_backend__live_vars__succeeded = mercury__builtin__unify_2_p_0(ll_backend__live_vars__TypeInfo_29_29, ((MR_Box) (ll_backend__live_vars__V_6_6)), ((MR_Box) (ll_backend__live_vars__V_9_9)));
                    }
#line 808 "live_vars.m"
                    if (ll_backend__live_vars__succeeded)
#line 808 "live_vars.m"
                      {
#line 1724 "ll_backend.live_vars.c"
                        ll_backend__live_vars__TypeInfo_30_30 = (MR_Word) &ll_backend__live_vars_scalar_common_1[2];
#line 1726 "ll_backend.live_vars.c"
                        {
#line 1728 "ll_backend.live_vars.c"
                          return ll_backend__live_vars__succeeded = mercury__builtin__unify_2_p_0(ll_backend__live_vars__TypeInfo_30_30, ((MR_Box) (ll_backend__live_vars__V_7_7)), ((MR_Box) (ll_backend__live_vars__V_10_10)));
                        }
#line 808 "live_vars.m"
                      }
#line 808 "live_vars.m"
                  }
#line 808 "live_vars.m"
              }
#line 808 "live_vars.m"
          }
#line 808 "live_vars.m"
          break;
#line 808 "live_vars.m"
        case (MR_Integer) 2:
#line 808 "live_vars.m"
          {
#line 808 "live_vars.m"
            MR_Word ll_backend__live_vars__TypeInfo_26_26;
#line 808 "live_vars.m"
            MR_Word ll_backend__live_vars__TypeInfo_27_27;
#line 808 "live_vars.m"
            MR_Word ll_backend__live_vars__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 808 "live_vars.m"
            MR_Word ll_backend__live_vars__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 808 "live_vars.m"
            MR_Word ll_backend__live_vars__V_13_13;
#line 808 "live_vars.m"
            MR_Word ll_backend__live_vars__V_14_14;

#line 808 "live_vars.m"
            ll_backend__live_vars__succeeded = ((MR_tag((MR_Word) ll_backend__live_vars__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 808 "live_vars.m"
            if (ll_backend__live_vars__succeeded)
#line 808 "live_vars.m"
              {
#line 808 "live_vars.m"
                ll_backend__live_vars__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 0)));
#line 808 "live_vars.m"
                ll_backend__live_vars__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 1)));
#line 1768 "ll_backend.live_vars.c"
                ll_backend__live_vars__TypeInfo_26_26 = (MR_Word) &ll_backend__live_vars_scalar_common_1[2];
#line 1770 "ll_backend.live_vars.c"
                {
#line 1772 "ll_backend.live_vars.c"
                  ll_backend__live_vars__succeeded = mercury__builtin__unify_2_p_0(ll_backend__live_vars__TypeInfo_26_26, ((MR_Box) (ll_backend__live_vars__V_11_11)), ((MR_Box) (ll_backend__live_vars__V_13_13)));
                }
#line 808 "live_vars.m"
                if (ll_backend__live_vars__succeeded)
#line 808 "live_vars.m"
                  {
#line 1779 "ll_backend.live_vars.c"
                    ll_backend__live_vars__TypeInfo_27_27 = (MR_Word) &ll_backend__live_vars_scalar_common_1[2];
#line 1781 "ll_backend.live_vars.c"
                    {
#line 1783 "ll_backend.live_vars.c"
                      return ll_backend__live_vars__succeeded = mercury__builtin__unify_2_p_0(ll_backend__live_vars__TypeInfo_27_27, ((MR_Box) (ll_backend__live_vars__V_12_12)), ((MR_Box) (ll_backend__live_vars__V_14_14)));
                    }
#line 808 "live_vars.m"
                  }
#line 808 "live_vars.m"
              }
#line 808 "live_vars.m"
          }
#line 808 "live_vars.m"
          break;
#line 808 "live_vars.m"
        case (MR_Integer) 3:
#line 808 "live_vars.m"
          {
#line 808 "live_vars.m"
            MR_Word ll_backend__live_vars__TypeInfo_23_23;
#line 808 "live_vars.m"
            MR_Word ll_backend__live_vars__TypeInfo_24_24;
#line 808 "live_vars.m"
            MR_Word ll_backend__live_vars__TypeInfo_25_25;
#line 808 "live_vars.m"
            MR_Word ll_backend__live_vars__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 808 "live_vars.m"
            MR_Word ll_backend__live_vars__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 808 "live_vars.m"
            MR_Word ll_backend__live_vars__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 2)));
#line 808 "live_vars.m"
            MR_Word ll_backend__live_vars__V_18_18;
#line 808 "live_vars.m"
            MR_Word ll_backend__live_vars__V_19_19;
#line 808 "live_vars.m"
            MR_Word ll_backend__live_vars__V_20_20;

#line 808 "live_vars.m"
            ll_backend__live_vars__succeeded = ((MR_tag((MR_Word) ll_backend__live_vars__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 808 "live_vars.m"
            if (ll_backend__live_vars__succeeded)
#line 808 "live_vars.m"
              {
#line 808 "live_vars.m"
                ll_backend__live_vars__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 0)));
#line 808 "live_vars.m"
                ll_backend__live_vars__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 1)));
#line 808 "live_vars.m"
                ll_backend__live_vars__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 2)));
#line 1829 "ll_backend.live_vars.c"
                ll_backend__live_vars__TypeInfo_23_23 = (MR_Word) &ll_backend__live_vars_scalar_common_1[3];
#line 1831 "ll_backend.live_vars.c"
                {
#line 1833 "ll_backend.live_vars.c"
                  ll_backend__live_vars__succeeded = mercury__builtin__unify_2_p_0(ll_backend__live_vars__TypeInfo_23_23, ((MR_Box) (ll_backend__live_vars__V_15_15)), ((MR_Box) (ll_backend__live_vars__V_18_18)));
                }
#line 808 "live_vars.m"
                if (ll_backend__live_vars__succeeded)
#line 808 "live_vars.m"
                  {
#line 1840 "ll_backend.live_vars.c"
                    ll_backend__live_vars__TypeInfo_24_24 = (MR_Word) &ll_backend__live_vars_scalar_common_1[2];
#line 1842 "ll_backend.live_vars.c"
                    {
#line 1844 "ll_backend.live_vars.c"
                      ll_backend__live_vars__succeeded = mercury__builtin__unify_2_p_0(ll_backend__live_vars__TypeInfo_24_24, ((MR_Box) (ll_backend__live_vars__V_16_16)), ((MR_Box) (ll_backend__live_vars__V_19_19)));
                    }
#line 808 "live_vars.m"
                    if (ll_backend__live_vars__succeeded)
#line 808 "live_vars.m"
                      {
#line 1851 "ll_backend.live_vars.c"
                        ll_backend__live_vars__TypeInfo_25_25 = (MR_Word) &ll_backend__live_vars_scalar_common_1[2];
#line 1853 "ll_backend.live_vars.c"
                        {
#line 1855 "ll_backend.live_vars.c"
                          return ll_backend__live_vars__succeeded = mercury__builtin__unify_2_p_0(ll_backend__live_vars__TypeInfo_25_25, ((MR_Box) (ll_backend__live_vars__V_17_17)), ((MR_Box) (ll_backend__live_vars__V_20_20)));
                        }
#line 808 "live_vars.m"
                      }
#line 808 "live_vars.m"
                  }
#line 808 "live_vars.m"
              }
#line 808 "live_vars.m"
          }
#line 808 "live_vars.m"
          break;
#line 808 "live_vars.m"
      }
#line 808 "live_vars.m"
    return ll_backend__live_vars__succeeded;
#line 808 "live_vars.m"
  }
#line 808 "live_vars.m"
}

#line 45 "live_vars.m"
void MR_CALL 
ll_backend__live_vars____Compare____alloc_data_0_0(
#line 45 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__1_1,
#line 45 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__2_2,
#line 45 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__3_3)
#line 45 "live_vars.m"
{
#line 45 "live_vars.m"
  {
#line 45 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;
#line 45 "live_vars.m"
    MR_Integer ll_backend__live_vars__CastX_21 = (MR_Integer) ll_backend__live_vars__HeadVar__2_2;
#line 45 "live_vars.m"
    MR_Integer ll_backend__live_vars__CastY_22 = (MR_Integer) ll_backend__live_vars__HeadVar__3_3;

#line 45 "live_vars.m"
    ll_backend__live_vars__succeeded = (ll_backend__live_vars__CastX_21 == ll_backend__live_vars__CastY_22);
#line 45 "live_vars.m"
    if (ll_backend__live_vars__succeeded)
#line 1901 "ll_backend.live_vars.c"
      *ll_backend__live_vars__HeadVar__1_1 = (MR_Integer) 0;
#line 45 "live_vars.m"
    else
#line 45 "live_vars.m"
      {
#line 45 "live_vars.m"
        MR_Word ll_backend__live_vars__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 0)));
#line 45 "live_vars.m"
        MR_Word ll_backend__live_vars__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 1)));
#line 45 "live_vars.m"
        MR_Word ll_backend__live_vars__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 2)));
#line 45 "live_vars.m"
        MR_Word ll_backend__live_vars__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 3)));
#line 45 "live_vars.m"
        MR_Word ll_backend__live_vars__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 4)));
#line 45 "live_vars.m"
        MR_ArrayPtr ll_backend__live_vars__V_9_9 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 5)));
#line 45 "live_vars.m"
        MR_Word ll_backend__live_vars__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__3_3, (MR_Integer) 0)));
#line 45 "live_vars.m"
        MR_Word ll_backend__live_vars__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__3_3, (MR_Integer) 1)));
#line 45 "live_vars.m"
        MR_Word ll_backend__live_vars__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__3_3, (MR_Integer) 2)));
#line 45 "live_vars.m"
        MR_Word ll_backend__live_vars__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__3_3, (MR_Integer) 3)));
#line 45 "live_vars.m"
        MR_Word ll_backend__live_vars__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__3_3, (MR_Integer) 4)));
#line 45 "live_vars.m"
        MR_ArrayPtr ll_backend__live_vars__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__3_3, (MR_Integer) 5)));
#line 45 "live_vars.m"
        MR_Word ll_backend__live_vars__V_16_16;

#line 45 "live_vars.m"
        {
#line 45 "live_vars.m"
          hlds__hlds_module____Compare____module_info_0_0(&ll_backend__live_vars__V_16_16, ll_backend__live_vars__V_4_4, ll_backend__live_vars__V_10_10);
        }
#line 1939 "ll_backend.live_vars.c"
        ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_16_16 == (MR_Integer) 0);
#line 45 "live_vars.m"
        ll_backend__live_vars__succeeded = !(ll_backend__live_vars__succeeded);
#line 45 "live_vars.m"
        if (ll_backend__live_vars__succeeded)
#line 45 "live_vars.m"
          *ll_backend__live_vars__HeadVar__1_1 = ll_backend__live_vars__V_16_16;
#line 45 "live_vars.m"
        else
#line 45 "live_vars.m"
          {
#line 45 "live_vars.m"
            MR_Word ll_backend__live_vars__V_17_17;

#line 45 "live_vars.m"
            {
#line 45 "live_vars.m"
              hlds__hlds_pred____Compare____proc_info_0_0(&ll_backend__live_vars__V_17_17, ll_backend__live_vars__V_5_5, ll_backend__live_vars__V_11_11);
            }
#line 1959 "ll_backend.live_vars.c"
            ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_17_17 == (MR_Integer) 0);
#line 45 "live_vars.m"
            ll_backend__live_vars__succeeded = !(ll_backend__live_vars__succeeded);
#line 45 "live_vars.m"
            if (ll_backend__live_vars__succeeded)
#line 45 "live_vars.m"
              *ll_backend__live_vars__HeadVar__1_1 = ll_backend__live_vars__V_17_17;
#line 45 "live_vars.m"
            else
#line 45 "live_vars.m"
              {
#line 45 "live_vars.m"
                MR_Word ll_backend__live_vars__V_18_18;

#line 45 "live_vars.m"
                {
#line 45 "live_vars.m"
                  hlds__hlds_pred____Compare____pred_proc_id_0_0(&ll_backend__live_vars__V_18_18, ll_backend__live_vars__V_6_6, ll_backend__live_vars__V_12_12);
                }
#line 1979 "ll_backend.live_vars.c"
                ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_18_18 == (MR_Integer) 0);
#line 45 "live_vars.m"
                ll_backend__live_vars__succeeded = !(ll_backend__live_vars__succeeded);
#line 45 "live_vars.m"
                if (ll_backend__live_vars__succeeded)
#line 45 "live_vars.m"
                  *ll_backend__live_vars__HeadVar__1_1 = ll_backend__live_vars__V_18_18;
#line 45 "live_vars.m"
                else
#line 45 "live_vars.m"
                  {
#line 45 "live_vars.m"
                    MR_Word ll_backend__live_vars__V_19_19;
#line 45 "live_vars.m"
                    MR_Integer ll_backend__live_vars__V_29_29 = (MR_Integer) ll_backend__live_vars__V_7_7;
#line 45 "live_vars.m"
                    MR_Integer ll_backend__live_vars__V_30_30 = (MR_Integer) ll_backend__live_vars__V_13_13;

#line 45 "live_vars.m"
                    {
#line 45 "live_vars.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__live_vars__V_19_19, ll_backend__live_vars__V_29_29, ll_backend__live_vars__V_30_30);
                    }
#line 2003 "ll_backend.live_vars.c"
                    ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_19_19 == (MR_Integer) 0);
#line 45 "live_vars.m"
                    ll_backend__live_vars__succeeded = !(ll_backend__live_vars__succeeded);
#line 45 "live_vars.m"
                    if (ll_backend__live_vars__succeeded)
#line 45 "live_vars.m"
                      *ll_backend__live_vars__HeadVar__1_1 = ll_backend__live_vars__V_19_19;
#line 45 "live_vars.m"
                    else
#line 45 "live_vars.m"
                      {
#line 45 "live_vars.m"
                        MR_Word ll_backend__live_vars__V_20_20;
#line 45 "live_vars.m"
                        MR_Integer ll_backend__live_vars__V_31_31 = (MR_Integer) ll_backend__live_vars__V_8_8;
#line 45 "live_vars.m"
                        MR_Integer ll_backend__live_vars__V_32_32 = (MR_Integer) ll_backend__live_vars__V_14_14;

#line 45 "live_vars.m"
                        {
#line 45 "live_vars.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__live_vars__V_20_20, ll_backend__live_vars__V_31_31, ll_backend__live_vars__V_32_32);
                        }
#line 2027 "ll_backend.live_vars.c"
                        ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_20_20 == (MR_Integer) 0);
#line 45 "live_vars.m"
                        ll_backend__live_vars__succeeded = !(ll_backend__live_vars__succeeded);
#line 45 "live_vars.m"
                        if (ll_backend__live_vars__succeeded)
#line 45 "live_vars.m"
                          *ll_backend__live_vars__HeadVar__1_1 = ll_backend__live_vars__V_20_20;
#line 45 "live_vars.m"
                        else
#line 45 "live_vars.m"
                          {
#line 45 "live_vars.m"
                            {
#line 45 "live_vars.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__live_vars_scalar_common_1[1], ll_backend__live_vars__HeadVar__1_1, ((MR_Box) (ll_backend__live_vars__V_9_9)), ((MR_Box) (ll_backend__live_vars__V_15_15)));
#line 45 "live_vars.m"
                              return;
                            }
#line 45 "live_vars.m"
                          }
#line 45 "live_vars.m"
                      }
#line 45 "live_vars.m"
                  }
#line 45 "live_vars.m"
              }
#line 45 "live_vars.m"
          }
#line 45 "live_vars.m"
      }
#line 45 "live_vars.m"
  }
#line 45 "live_vars.m"
}

#line 45 "live_vars.m"
MR_bool MR_CALL 
ll_backend__live_vars____Unify____alloc_data_0_0(
#line 45 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 45 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__2_2)
#line 45 "live_vars.m"
{
#line 45 "live_vars.m"
  {
#line 45 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;
#line 45 "live_vars.m"
    MR_Integer ll_backend__live_vars__CastX_15 = (MR_Integer) ll_backend__live_vars__HeadVar__1_1;
#line 45 "live_vars.m"
    MR_Integer ll_backend__live_vars__CastY_16 = (MR_Integer) ll_backend__live_vars__HeadVar__2_2;

#line 45 "live_vars.m"
    ll_backend__live_vars__succeeded = (ll_backend__live_vars__CastX_15 == ll_backend__live_vars__CastY_16);
#line 45 "live_vars.m"
    if (ll_backend__live_vars__succeeded)
#line 45 "live_vars.m"
      ll_backend__live_vars__succeeded = MR_TRUE;
#line 45 "live_vars.m"
    else
#line 45 "live_vars.m"
      {
#line 45 "live_vars.m"
        MR_Word ll_backend__live_vars__TypeCtorInfo_20_20;
#line 45 "live_vars.m"
        MR_Word ll_backend__live_vars__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 45 "live_vars.m"
        MR_Word ll_backend__live_vars__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 45 "live_vars.m"
        MR_Word ll_backend__live_vars__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 2)));
#line 45 "live_vars.m"
        MR_Word ll_backend__live_vars__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 3)));
#line 45 "live_vars.m"
        MR_Word ll_backend__live_vars__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 4)));
#line 45 "live_vars.m"
        MR_ArrayPtr ll_backend__live_vars__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 5)));
#line 45 "live_vars.m"
        MR_Word ll_backend__live_vars__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 0)));
#line 45 "live_vars.m"
        MR_Word ll_backend__live_vars__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 1)));
#line 45 "live_vars.m"
        MR_Word ll_backend__live_vars__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 2)));
#line 45 "live_vars.m"
        MR_Word ll_backend__live_vars__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 3)));
#line 45 "live_vars.m"
        MR_Word ll_backend__live_vars__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 4)));
#line 45 "live_vars.m"
        MR_ArrayPtr ll_backend__live_vars__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 5)));

#line 2118 "ll_backend.live_vars.c"
        {
#line 2120 "ll_backend.live_vars.c"
          ll_backend__live_vars__succeeded = hlds__hlds_module____Unify____module_info_0_0(ll_backend__live_vars__V_3_3, ll_backend__live_vars__V_9_9);
        }
#line 45 "live_vars.m"
        if (ll_backend__live_vars__succeeded)
#line 45 "live_vars.m"
          {
#line 2127 "ll_backend.live_vars.c"
            {
#line 2129 "ll_backend.live_vars.c"
              ll_backend__live_vars__succeeded = hlds__hlds_pred____Unify____proc_info_0_0(ll_backend__live_vars__V_4_4, ll_backend__live_vars__V_10_10);
            }
#line 45 "live_vars.m"
            if (ll_backend__live_vars__succeeded)
#line 45 "live_vars.m"
              {
#line 2136 "ll_backend.live_vars.c"
                {
#line 2138 "ll_backend.live_vars.c"
                  ll_backend__live_vars__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ll_backend__live_vars__V_5_5, ll_backend__live_vars__V_11_11);
                }
#line 45 "live_vars.m"
                if (ll_backend__live_vars__succeeded)
#line 45 "live_vars.m"
                  {
#line 2145 "ll_backend.live_vars.c"
                    ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_6_6 == ll_backend__live_vars__V_12_12);
#line 45 "live_vars.m"
                    if (ll_backend__live_vars__succeeded)
#line 45 "live_vars.m"
                      {
#line 2151 "ll_backend.live_vars.c"
                        ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_7_7 == ll_backend__live_vars__V_13_13);
#line 45 "live_vars.m"
                        if (ll_backend__live_vars__succeeded)
#line 45 "live_vars.m"
                          {
#line 2157 "ll_backend.live_vars.c"
                            ll_backend__live_vars__TypeCtorInfo_20_20 = (MR_Word) &check_hlds__type_util__check_hlds__type_util__type_ctor_info_is_dummy_type_0;
#line 2159 "ll_backend.live_vars.c"
                            {
#line 2161 "ll_backend.live_vars.c"
                              return ll_backend__live_vars__succeeded = mercury__array____Unify____array_1_0(ll_backend__live_vars__TypeCtorInfo_20_20, (MR_ArrayPtr) ll_backend__live_vars__V_8_8, (MR_ArrayPtr) ll_backend__live_vars__V_14_14);
                            }
#line 45 "live_vars.m"
                          }
#line 45 "live_vars.m"
                      }
#line 45 "live_vars.m"
                  }
#line 45 "live_vars.m"
              }
#line 45 "live_vars.m"
          }
#line 45 "live_vars.m"
      }
#line 45 "live_vars.m"
    return ll_backend__live_vars__succeeded;
#line 45 "live_vars.m"
  }
#line 45 "live_vars.m"
}

#line 1004 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__par_stack_vars_recursive_call_4_p_0(
#line 1004 "live_vars.m"
  MR_Word * ll_backend__live_vars__MaybeNeedLC_5,
#line 1004 "live_vars.m"
  MR_Word * ll_backend__live_vars__DelayDeathSet_6,
#line 1004 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_17,
#line 1004 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_18)
#line 1004 "live_vars.m"
{
#line 1012 "live_vars.m"
  {
#line 1012 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;

#line 1012 "live_vars.m"
#line 1012 "live_vars.m"
    switch (MR_tag((MR_Word) ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_17)) {
#line 1012 "live_vars.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1012 "live_vars.m"
      case (MR_Integer) 0:
#line 1012 "live_vars.m"
        {
#line 1013 "live_vars.m"
          *ll_backend__live_vars__MaybeNeedLC_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1014 "live_vars.m"
          {
#line 1014 "live_vars.m"
            *ll_backend__live_vars__DelayDeathSet_6 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          }
#line 1012 "live_vars.m"
          *ll_backend__live_vars__STATE_VARIABLE_ParStackVars_18 = ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_17;
#line 1012 "live_vars.m"
        }
#line 1012 "live_vars.m"
        break;
#line 1012 "live_vars.m"
      case (MR_Integer) 1:
#line 1012 "live_vars.m"
        {
#line 1013 "live_vars.m"
          *ll_backend__live_vars__MaybeNeedLC_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1014 "live_vars.m"
          {
#line 1014 "live_vars.m"
            *ll_backend__live_vars__DelayDeathSet_6 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          }
#line 1012 "live_vars.m"
          *ll_backend__live_vars__STATE_VARIABLE_ParStackVars_18 = ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_17;
#line 1012 "live_vars.m"
        }
#line 1012 "live_vars.m"
        break;
#line 1012 "live_vars.m"
      case (MR_Integer) 2:
#line 1016 "live_vars.m"
        {
#line 1017 "live_vars.m"
          {
#line 1017 "live_vars.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.live_vars", (MR_String) "predicate \140ll_backend.live_vars.par_stack_vars_recursive_call\'/4", (MR_String) "recursive call in loop control scope");
#line 1017 "live_vars.m"
            return;
          }
#line 1016 "live_vars.m"
        }
#line 1012 "live_vars.m"
        break;
#line 1012 "live_vars.m"
      case (MR_Integer) 3:
#line 1020 "live_vars.m"
        {
#line 1020 "live_vars.m"
          MR_Word ll_backend__live_vars__StackVarsList0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_17, (MR_Integer) 0)));
#line 1020 "live_vars.m"
          MR_Word ll_backend__live_vars__StackVars_14;
#line 1020 "live_vars.m"
          MR_Word ll_backend__live_vars__StackVarsList_15;
#line 1020 "live_vars.m"
          MR_Word ll_backend__live_vars__NonoverlapSets_16;
#line 1020 "live_vars.m"
          MR_Word ll_backend__live_vars__V_19_19;

#line 1019 "live_vars.m"
          *ll_backend__live_vars__DelayDeathSet_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_17, (MR_Integer) 1)));
#line 1019 "live_vars.m"
          ll_backend__live_vars__StackVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_17, (MR_Integer) 2)));
#line 1021 "live_vars.m"
          {
#line 1021 "live_vars.m"
            ll_backend__live_vars__StackVarsList_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1021 "live_vars.m"
            MR_hl_field(MR_mktag(1), ll_backend__live_vars__StackVarsList_15, 0) = ((MR_Box) (ll_backend__live_vars__StackVars_14));
#line 1021 "live_vars.m"
            MR_hl_field(MR_mktag(1), ll_backend__live_vars__StackVarsList_15, 1) = ((MR_Box) (ll_backend__live_vars__StackVarsList0_13));
#line 1021 "live_vars.m"
          }
#line 1022 "live_vars.m"
          {
#line 1022 "live_vars.m"
            parse_tree__set_of_var__cartesian_product_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__live_vars__StackVarsList_15, &ll_backend__live_vars__NonoverlapSets_16);
          }
#line 1023 "live_vars.m"
          ll_backend__live_vars__V_19_19 = (MR_Word) ll_backend__live_vars__NonoverlapSets_16;
#line 1023 "live_vars.m"
          {
#line 1023 "live_vars.m"
            MR_Word base;
#line 1023 "live_vars.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1023 "live_vars.m"
            *ll_backend__live_vars__MaybeNeedLC_5 = base;
#line 1023 "live_vars.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__live_vars__V_19_19));
#line 1023 "live_vars.m"
          }
#line 1024 "live_vars.m"
          *ll_backend__live_vars__STATE_VARIABLE_ParStackVars_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1020 "live_vars.m"
        }
#line 1012 "live_vars.m"
        break;
#line 1012 "live_vars.m"
    }
#line 1012 "live_vars.m"
  }
#line 1004 "live_vars.m"
}

#line 983 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__par_stack_vars_get_nonlocals_2_p_0(
#line 983 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 983 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__2_2)
#line 983 "live_vars.m"
{
#line 986 "live_vars.m"
  {
#line 986 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;

#line 986 "live_vars.m"
#line 986 "live_vars.m"
    switch (MR_tag((MR_Word) ll_backend__live_vars__HeadVar__1_1)) {
#line 986 "live_vars.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 986 "live_vars.m"
      case (MR_Integer) 0:
#line 986 "live_vars.m"
        {
#line 986 "live_vars.m"
          {
#line 986 "live_vars.m"
            *ll_backend__live_vars__HeadVar__2_2 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          }
#line 986 "live_vars.m"
        }
#line 986 "live_vars.m"
        break;
#line 986 "live_vars.m"
      case (MR_Integer) 1:
#line 987 "live_vars.m"
        {
#line 987 "live_vars.m"
          MR_Word ll_backend__live_vars__V_4_4;
#line 987 "live_vars.m"
          MR_Word ll_backend__live_vars__V_5_5;

#line 987 "live_vars.m"
          *ll_backend__live_vars__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 987 "live_vars.m"
          ll_backend__live_vars__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 987 "live_vars.m"
          ll_backend__live_vars__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 2)));
#line 987 "live_vars.m"
        }
#line 986 "live_vars.m"
        break;
#line 986 "live_vars.m"
      case (MR_Integer) 2:
#line 988 "live_vars.m"
        {
#line 988 "live_vars.m"
          MR_Word ll_backend__live_vars__V_7_7;

#line 988 "live_vars.m"
          *ll_backend__live_vars__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 988 "live_vars.m"
          ll_backend__live_vars__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 988 "live_vars.m"
        }
#line 986 "live_vars.m"
        break;
#line 986 "live_vars.m"
      case (MR_Integer) 3:
#line 989 "live_vars.m"
        {
#line 990 "live_vars.m"
          {
#line 990 "live_vars.m"
            *ll_backend__live_vars__HeadVar__2_2 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          }
#line 989 "live_vars.m"
        }
#line 986 "live_vars.m"
        break;
#line 986 "live_vars.m"
    }
#line 986 "live_vars.m"
  }
#line 983 "live_vars.m"
}

#line 964 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__par_stack_vars_accumulate_stack_vars_3_p_0(
#line 964 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 964 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__2_2,
#line 964 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__3_3)
#line 964 "live_vars.m"
{
#line 967 "live_vars.m"
  {
#line 967 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;

#line 967 "live_vars.m"
#line 967 "live_vars.m"
    switch (MR_tag((MR_Word) ll_backend__live_vars__HeadVar__2_2)) {
#line 967 "live_vars.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 967 "live_vars.m"
      case (MR_Integer) 0:
#line 968 "live_vars.m"
        *ll_backend__live_vars__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 967 "live_vars.m"
        break;
#line 967 "live_vars.m"
      case (MR_Integer) 1:
#line 971 "live_vars.m"
        {
#line 971 "live_vars.m"
          MR_Word ll_backend__live_vars__TypeCtorInfo_20_20 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 971 "live_vars.m"
          MR_Word ll_backend__live_vars__Nonlocals_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 0)));
#line 971 "live_vars.m"
          MR_Word ll_backend__live_vars__ParallelVars_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 1)));
#line 971 "live_vars.m"
          MR_Word ll_backend__live_vars__AccStackVars0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 2)));
#line 971 "live_vars.m"
          MR_Word ll_backend__live_vars__AccStackVars_9;
#line 971 "live_vars.m"
          MR_Word ll_backend__live_vars__V_10_10;

#line 973 "live_vars.m"
          {
#line 973 "live_vars.m"
            ll_backend__live_vars__V_10_10 = parse_tree__set_of_var__difference_2_f_0(ll_backend__live_vars__TypeCtorInfo_20_20, ll_backend__live_vars__HeadVar__1_1, ll_backend__live_vars__Nonlocals_6);
          }
#line 972 "live_vars.m"
          {
#line 972 "live_vars.m"
            ll_backend__live_vars__AccStackVars_9 = parse_tree__set_of_var__union_2_f_0(ll_backend__live_vars__TypeCtorInfo_20_20, ll_backend__live_vars__AccStackVars0_8, ll_backend__live_vars__V_10_10);
          }
#line 971 "live_vars.m"
          {
#line 971 "live_vars.m"
            MR_Word base;
#line 971 "live_vars.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 971 "live_vars.m"
            *ll_backend__live_vars__HeadVar__3_3 = base;
#line 971 "live_vars.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__live_vars__Nonlocals_6));
#line 971 "live_vars.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__live_vars__ParallelVars_7));
#line 971 "live_vars.m"
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ll_backend__live_vars__AccStackVars_9));
#line 971 "live_vars.m"
          }
#line 971 "live_vars.m"
        }
#line 967 "live_vars.m"
        break;
#line 967 "live_vars.m"
      case (MR_Integer) 2:
#line 976 "live_vars.m"
        {
#line 976 "live_vars.m"
          MR_Word ll_backend__live_vars__NonLocals_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 0)));
#line 976 "live_vars.m"
          MR_Word ll_backend__live_vars__AccStackVars0_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 1)));
#line 976 "live_vars.m"
          MR_Word ll_backend__live_vars__AccStackVars_14;

#line 977 "live_vars.m"
          {
#line 977 "live_vars.m"
            ll_backend__live_vars__AccStackVars_14 = parse_tree__set_of_var__union_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__live_vars__AccStackVars0_13, ll_backend__live_vars__HeadVar__1_1);
          }
#line 976 "live_vars.m"
          {
#line 976 "live_vars.m"
            MR_Word base;
#line 976 "live_vars.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 976 "live_vars.m"
            *ll_backend__live_vars__HeadVar__3_3 = base;
#line 976 "live_vars.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__live_vars__NonLocals_12));
#line 976 "live_vars.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ll_backend__live_vars__AccStackVars_14));
#line 976 "live_vars.m"
          }
#line 976 "live_vars.m"
        }
#line 967 "live_vars.m"
        break;
#line 967 "live_vars.m"
      case (MR_Integer) 3:
#line 980 "live_vars.m"
        {
#line 980 "live_vars.m"
          MR_Word ll_backend__live_vars__LocalStackVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 0)));
#line 980 "live_vars.m"
          MR_Word ll_backend__live_vars__WouldDieSet_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 1)));
#line 980 "live_vars.m"
          MR_Word ll_backend__live_vars__AccStackVars0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 2)));
#line 980 "live_vars.m"
          MR_Word ll_backend__live_vars__AccStackVars_19;

#line 981 "live_vars.m"
          {
#line 981 "live_vars.m"
            ll_backend__live_vars__AccStackVars_19 = parse_tree__set_of_var__union_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__live_vars__AccStackVars0_18, ll_backend__live_vars__HeadVar__1_1);
          }
#line 980 "live_vars.m"
          {
#line 980 "live_vars.m"
            MR_Word base;
#line 980 "live_vars.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 980 "live_vars.m"
            *ll_backend__live_vars__HeadVar__3_3 = base;
#line 980 "live_vars.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (ll_backend__live_vars__LocalStackVars_16));
#line 980 "live_vars.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__live_vars__WouldDieSet_17));
#line 980 "live_vars.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__live_vars__AccStackVars_19));
#line 980 "live_vars.m"
          }
#line 980 "live_vars.m"
        }
#line 967 "live_vars.m"
        break;
#line 967 "live_vars.m"
    }
#line 967 "live_vars.m"
  }
#line 964 "live_vars.m"
}

#line 953 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__par_stack_vars_get_stackvars_2_p_0(
#line 953 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 953 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__2_2)
#line 953 "live_vars.m"
{
#line 956 "live_vars.m"
  {
#line 956 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;

#line 956 "live_vars.m"
#line 956 "live_vars.m"
    switch (MR_tag((MR_Word) ll_backend__live_vars__HeadVar__1_1)) {
#line 956 "live_vars.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 956 "live_vars.m"
      case (MR_Integer) 0:
#line 956 "live_vars.m"
        {
#line 956 "live_vars.m"
          {
#line 956 "live_vars.m"
            *ll_backend__live_vars__HeadVar__2_2 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          }
#line 956 "live_vars.m"
        }
#line 956 "live_vars.m"
        break;
#line 956 "live_vars.m"
      case (MR_Integer) 1:
#line 958 "live_vars.m"
        {
#line 958 "live_vars.m"
          MR_Word ll_backend__live_vars__StackVarss_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 957 "live_vars.m"
          MR_Word ll_backend__live_vars__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 957 "live_vars.m"
          MR_Word ll_backend__live_vars__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 2)));

#line 959 "live_vars.m"
          {
#line 959 "live_vars.m"
            *ll_backend__live_vars__HeadVar__2_2 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__live_vars__StackVarss_4);
          }
#line 958 "live_vars.m"
        }
#line 956 "live_vars.m"
        break;
#line 956 "live_vars.m"
      case (MR_Integer) 2:
#line 960 "live_vars.m"
        {
#line 960 "live_vars.m"
          MR_Word ll_backend__live_vars__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 0)));

#line 960 "live_vars.m"
          *ll_backend__live_vars__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 960 "live_vars.m"
        }
#line 956 "live_vars.m"
        break;
#line 956 "live_vars.m"
      case (MR_Integer) 3:
#line 961 "live_vars.m"
        {
#line 961 "live_vars.m"
          MR_Word ll_backend__live_vars__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 961 "live_vars.m"
          MR_Word ll_backend__live_vars__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 1)));

#line 961 "live_vars.m"
          *ll_backend__live_vars__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 2)));
#line 961 "live_vars.m"
        }
#line 956 "live_vars.m"
        break;
#line 956 "live_vars.m"
    }
#line 956 "live_vars.m"
  }
#line 953 "live_vars.m"
}

#line 926 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__par_stack_vars_end_loop_control_4_p_0(
#line 926 "live_vars.m"
  MR_Word ll_backend__live_vars__NewWouldDieSet_5,
#line 926 "live_vars.m"
  MR_Word ll_backend__live_vars__OldParStackVars_6,
#line 926 "live_vars.m"
  MR_Word ll_backend__live_vars__ParStackVars0_7,
#line 926 "live_vars.m"
  MR_Word * ll_backend__live_vars__ParStackVars_8)
#line 926 "live_vars.m"
{
#line 931 "live_vars.m"
  {
#line 931 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;
#line 931 "live_vars.m"
    MR_Word ll_backend__live_vars__NewStackVars_9;

#line 956 "live_vars.m"
#line 956 "live_vars.m"
    switch (MR_tag((MR_Word) ll_backend__live_vars__ParStackVars0_7)) {
#line 956 "live_vars.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 956 "live_vars.m"
      case (MR_Integer) 0:
#line 956 "live_vars.m"
        {
#line 956 "live_vars.m"
          {
#line 956 "live_vars.m"
            ll_backend__live_vars__NewStackVars_9 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          }
#line 956 "live_vars.m"
        }
#line 956 "live_vars.m"
        break;
#line 956 "live_vars.m"
      case (MR_Integer) 1:
#line 958 "live_vars.m"
        {
#line 958 "live_vars.m"
          MR_Word ll_backend__live_vars__StackVarss_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 1)));
#line 957 "live_vars.m"
          MR_Word ll_backend__live_vars__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 0)));
#line 957 "live_vars.m"
          MR_Word ll_backend__live_vars__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 2)));

#line 959 "live_vars.m"
          {
#line 959 "live_vars.m"
            ll_backend__live_vars__NewStackVars_9 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__live_vars__StackVarss_29);
          }
#line 958 "live_vars.m"
        }
#line 956 "live_vars.m"
        break;
#line 956 "live_vars.m"
      case (MR_Integer) 2:
#line 960 "live_vars.m"
        {
#line 960 "live_vars.m"
          MR_Word ll_backend__live_vars__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 0)));

#line 960 "live_vars.m"
          ll_backend__live_vars__NewStackVars_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 1)));
#line 960 "live_vars.m"
        }
#line 956 "live_vars.m"
        break;
#line 956 "live_vars.m"
      case (MR_Integer) 3:
#line 961 "live_vars.m"
        {
#line 961 "live_vars.m"
          MR_Word ll_backend__live_vars__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 0)));
#line 961 "live_vars.m"
          MR_Word ll_backend__live_vars__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 1)));

#line 961 "live_vars.m"
          ll_backend__live_vars__NewStackVars_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 2)));
#line 961 "live_vars.m"
        }
#line 956 "live_vars.m"
        break;
#line 956 "live_vars.m"
    }
#line 937 "live_vars.m"
#line 937 "live_vars.m"
    switch (MR_tag((MR_Word) ll_backend__live_vars__OldParStackVars_6)) {
#line 937 "live_vars.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 937 "live_vars.m"
      case (MR_Integer) 0:
#line 934 "live_vars.m"
        {
#line 934 "live_vars.m"
          MR_Word ll_backend__live_vars__V_23_23;
#line 934 "live_vars.m"
          MR_Word ll_backend__live_vars__V_25_25;

#line 935 "live_vars.m"
          {
#line 935 "live_vars.m"
            ll_backend__live_vars__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 935 "live_vars.m"
            MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_23_23, 0) = ((MR_Box) (ll_backend__live_vars__NewStackVars_9));
#line 935 "live_vars.m"
            MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 935 "live_vars.m"
          }
#line 936 "live_vars.m"
          {
#line 936 "live_vars.m"
            ll_backend__live_vars__V_25_25 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          }
#line 935 "live_vars.m"
          {
#line 935 "live_vars.m"
            MR_Word base;
#line 935 "live_vars.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 935 "live_vars.m"
            *ll_backend__live_vars__ParStackVars_8 = base;
#line 935 "live_vars.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (ll_backend__live_vars__V_23_23));
#line 935 "live_vars.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__live_vars__NewWouldDieSet_5));
#line 935 "live_vars.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__live_vars__V_25_25));
#line 935 "live_vars.m"
          }
#line 934 "live_vars.m"
        }
#line 937 "live_vars.m"
        break;
#line 937 "live_vars.m"
      case (MR_Integer) 1:
#line 937 "live_vars.m"
      case (MR_Integer) 2:
#line 947 "live_vars.m"
        {
#line 948 "live_vars.m"
          {
#line 948 "live_vars.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.live_vars", (MR_String) "predicate \140ll_backend.live_vars.par_stack_vars_end_loop_control\'/4", (MR_String) "Loop control scope found in other parallel context");
#line 948 "live_vars.m"
            return;
          }
#line 947 "live_vars.m"
        }
#line 937 "live_vars.m"
        break;
#line 937 "live_vars.m"
      case (MR_Integer) 3:
#line 939 "live_vars.m"
        {
#line 939 "live_vars.m"
          MR_Word ll_backend__live_vars__StackVarsList_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__OldParStackVars_6, (MR_Integer) 0)));
#line 939 "live_vars.m"
          MR_Word ll_backend__live_vars__WouldDieSet0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__OldParStackVars_6, (MR_Integer) 1)));
#line 939 "live_vars.m"
          MR_Word ll_backend__live_vars__StackVarsAcc_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__OldParStackVars_6, (MR_Integer) 2)));
#line 939 "live_vars.m"
          MR_Word ll_backend__live_vars__WouldDieSet_13;
#line 939 "live_vars.m"
          MR_Word ll_backend__live_vars__V_22_22;

#line 940 "live_vars.m"
          {
#line 940 "live_vars.m"
            ll_backend__live_vars__WouldDieSet_13 = parse_tree__set_of_var__union_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__live_vars__WouldDieSet0_11, ll_backend__live_vars__NewWouldDieSet_5);
          }
#line 942 "live_vars.m"
          {
#line 942 "live_vars.m"
            ll_backend__live_vars__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 942 "live_vars.m"
            MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_22_22, 0) = ((MR_Box) (ll_backend__live_vars__NewStackVars_9));
#line 942 "live_vars.m"
            MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_22_22, 1) = ((MR_Box) (ll_backend__live_vars__StackVarsList_10));
#line 942 "live_vars.m"
          }
#line 942 "live_vars.m"
          {
#line 942 "live_vars.m"
            MR_Word base;
#line 942 "live_vars.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 942 "live_vars.m"
            *ll_backend__live_vars__ParStackVars_8 = base;
#line 942 "live_vars.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (ll_backend__live_vars__V_22_22));
#line 942 "live_vars.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__live_vars__WouldDieSet_13));
#line 942 "live_vars.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__live_vars__StackVarsAcc_12));
#line 942 "live_vars.m"
          }
#line 939 "live_vars.m"
        }
#line 937 "live_vars.m"
        break;
#line 937 "live_vars.m"
    }
#line 931 "live_vars.m"
  }
#line 926 "live_vars.m"
}

#line 909 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__par_stack_vars_start_loop_control_3_p_0(
#line 909 "live_vars.m"
  MR_Word ll_backend__live_vars__NonLocals_4,
#line 909 "live_vars.m"
  MR_Word ll_backend__live_vars__ParStackVars0_5,
#line 909 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__3_3)
#line 909 "live_vars.m"
{
#line 913 "live_vars.m"
  {
#line 913 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;
#line 913 "live_vars.m"
    MR_Word ll_backend__live_vars__V_14_14;

#line 913 "live_vars.m"
    {
#line 913 "live_vars.m"
      ll_backend__live_vars__V_14_14 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
#line 913 "live_vars.m"
    {
#line 913 "live_vars.m"
      MR_Word base;
#line 913 "live_vars.m"
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 913 "live_vars.m"
      *ll_backend__live_vars__HeadVar__3_3 = base;
#line 913 "live_vars.m"
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__live_vars__NonLocals_4));
#line 913 "live_vars.m"
      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ll_backend__live_vars__V_14_14));
#line 913 "live_vars.m"
    }
#line 918 "live_vars.m"
#line 918 "live_vars.m"
    switch (MR_tag((MR_Word) ll_backend__live_vars__ParStackVars0_5)) {
#line 918 "live_vars.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 918 "live_vars.m"
      case (MR_Integer) 0:
#line 915 "live_vars.m"
        {
#line 915 "live_vars.m"
        }
#line 918 "live_vars.m"
        break;
#line 918 "live_vars.m"
      case (MR_Integer) 1:
#line 918 "live_vars.m"
      case (MR_Integer) 2:
#line 921 "live_vars.m"
        {
#line 922 "live_vars.m"
          {
#line 922 "live_vars.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.live_vars", (MR_String) "predicate \140ll_backend.live_vars.par_stack_vars_start_loop_control\'/3", (MR_String) "Loop control scope found in other parallel context");
#line 922 "live_vars.m"
            return;
          }
#line 921 "live_vars.m"
        }
#line 918 "live_vars.m"
        break;
#line 918 "live_vars.m"
      case (MR_Integer) 3:
#line 916 "live_vars.m"
        {
#line 916 "live_vars.m"
        }
#line 918 "live_vars.m"
        break;
#line 918 "live_vars.m"
    }
#line 913 "live_vars.m"
  }
#line 909 "live_vars.m"
}

#line 864 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__par_stack_vars_end_parallel_conjunction_4_p_0(
#line 864 "live_vars.m"
  MR_Word ll_backend__live_vars__LiveSet_5,
#line 864 "live_vars.m"
  MR_Word ll_backend__live_vars__OuterParStackVars_6,
#line 864 "live_vars.m"
  MR_Word ll_backend__live_vars__ParStackVars0_7,
#line 864 "live_vars.m"
  MR_Word * ll_backend__live_vars__ParStackVars_8)
#line 864 "live_vars.m"
{
#line 869 "live_vars.m"
  {
#line 869 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;
#line 869 "live_vars.m"
    MR_Word ll_backend__live_vars__InnerStackVars_9;

#line 956 "live_vars.m"
#line 956 "live_vars.m"
    switch (MR_tag((MR_Word) ll_backend__live_vars__ParStackVars0_7)) {
#line 956 "live_vars.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 956 "live_vars.m"
      case (MR_Integer) 0:
#line 956 "live_vars.m"
        {
#line 956 "live_vars.m"
          {
#line 956 "live_vars.m"
            ll_backend__live_vars__InnerStackVars_9 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          }
#line 956 "live_vars.m"
        }
#line 956 "live_vars.m"
        break;
#line 956 "live_vars.m"
      case (MR_Integer) 1:
#line 958 "live_vars.m"
        {
#line 958 "live_vars.m"
          MR_Word ll_backend__live_vars__StackVarss_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 1)));
#line 957 "live_vars.m"
          MR_Word ll_backend__live_vars__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 0)));
#line 957 "live_vars.m"
          MR_Word ll_backend__live_vars__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 2)));

#line 959 "live_vars.m"
          {
#line 959 "live_vars.m"
            ll_backend__live_vars__InnerStackVars_9 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__live_vars__StackVarss_30);
          }
#line 958 "live_vars.m"
        }
#line 956 "live_vars.m"
        break;
#line 956 "live_vars.m"
      case (MR_Integer) 2:
#line 960 "live_vars.m"
        {
#line 960 "live_vars.m"
          MR_Word ll_backend__live_vars__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 0)));

#line 960 "live_vars.m"
          ll_backend__live_vars__InnerStackVars_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 1)));
#line 960 "live_vars.m"
        }
#line 956 "live_vars.m"
        break;
#line 956 "live_vars.m"
      case (MR_Integer) 3:
#line 961 "live_vars.m"
        {
#line 961 "live_vars.m"
          MR_Word ll_backend__live_vars__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 0)));
#line 961 "live_vars.m"
          MR_Word ll_backend__live_vars__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 1)));

#line 961 "live_vars.m"
          ll_backend__live_vars__InnerStackVars_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 2)));
#line 961 "live_vars.m"
        }
#line 956 "live_vars.m"
        break;
#line 956 "live_vars.m"
    }
#line 874 "live_vars.m"
#line 874 "live_vars.m"
    switch (MR_tag((MR_Word) ll_backend__live_vars__OuterParStackVars_6)) {
#line 874 "live_vars.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 874 "live_vars.m"
      case (MR_Integer) 0:
#line 873 "live_vars.m"
        *ll_backend__live_vars__ParStackVars_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 874 "live_vars.m"
        break;
#line 874 "live_vars.m"
      case (MR_Integer) 1:
#line 876 "live_vars.m"
        {
#line 876 "live_vars.m"
          MR_Word ll_backend__live_vars__TypeCtorInfo_26_26 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 876 "live_vars.m"
          MR_Word ll_backend__live_vars__OuterNonLocals_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__OuterParStackVars_6, (MR_Integer) 0)));
#line 876 "live_vars.m"
          MR_Word ll_backend__live_vars__OuterLocalStackVars_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__OuterParStackVars_6, (MR_Integer) 1)));
#line 876 "live_vars.m"
          MR_Word ll_backend__live_vars__OuterAccStackVars0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__OuterParStackVars_6, (MR_Integer) 2)));
#line 876 "live_vars.m"
          MR_Word ll_backend__live_vars__OuterAccStackVars_13;
#line 876 "live_vars.m"
          MR_Word ll_backend__live_vars__V_21_21;
#line 876 "live_vars.m"
          MR_Word ll_backend__live_vars__V_22_22;

#line 883 "live_vars.m"
          {
#line 883 "live_vars.m"
            ll_backend__live_vars__V_21_21 = parse_tree__set_of_var__union_2_f_0(ll_backend__live_vars__TypeCtorInfo_26_26, ll_backend__live_vars__OuterAccStackVars0_12, ll_backend__live_vars__InnerStackVars_9);
          }
#line 885 "live_vars.m"
          {
#line 885 "live_vars.m"
            ll_backend__live_vars__V_22_22 = parse_tree__set_of_var__difference_2_f_0(ll_backend__live_vars__TypeCtorInfo_26_26, ll_backend__live_vars__LiveSet_5, ll_backend__live_vars__OuterNonLocals_10);
          }
#line 884 "live_vars.m"
          {
#line 884 "live_vars.m"
            ll_backend__live_vars__OuterAccStackVars_13 = parse_tree__set_of_var__union_2_f_0(ll_backend__live_vars__TypeCtorInfo_26_26, ll_backend__live_vars__V_21_21, ll_backend__live_vars__V_22_22);
          }
#line 886 "live_vars.m"
          {
#line 886 "live_vars.m"
            MR_Word base;
#line 886 "live_vars.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 886 "live_vars.m"
            *ll_backend__live_vars__ParStackVars_8 = base;
#line 886 "live_vars.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__live_vars__OuterNonLocals_10));
#line 886 "live_vars.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__live_vars__OuterLocalStackVars_11));
#line 886 "live_vars.m"
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ll_backend__live_vars__OuterAccStackVars_13));
#line 886 "live_vars.m"
          }
#line 876 "live_vars.m"
        }
#line 874 "live_vars.m"
        break;
#line 874 "live_vars.m"
      case (MR_Integer) 2:
#line 889 "live_vars.m"
        {
#line 889 "live_vars.m"
          MR_Word ll_backend__live_vars__TypeCtorInfo_27_27 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 889 "live_vars.m"
          MR_Word ll_backend__live_vars__StackVars0_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__OuterParStackVars_6, (MR_Integer) 1)));
#line 889 "live_vars.m"
          MR_Word ll_backend__live_vars__StackVars_15;
#line 889 "live_vars.m"
          MR_Word ll_backend__live_vars__V_19_19;
#line 889 "live_vars.m"
          MR_Word ll_backend__live_vars__V_20_20;
#line 889 "live_vars.m"
          MR_Word ll_backend__live_vars__OuterNonLocals_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__OuterParStackVars_6, (MR_Integer) 0)));

#line 894 "live_vars.m"
          {
#line 894 "live_vars.m"
            ll_backend__live_vars__V_19_19 = parse_tree__set_of_var__union_2_f_0(ll_backend__live_vars__TypeCtorInfo_27_27, ll_backend__live_vars__StackVars0_14, ll_backend__live_vars__InnerStackVars_9);
          }
#line 896 "live_vars.m"
          {
#line 896 "live_vars.m"
            ll_backend__live_vars__V_20_20 = parse_tree__set_of_var__difference_2_f_0(ll_backend__live_vars__TypeCtorInfo_27_27, ll_backend__live_vars__LiveSet_5, ll_backend__live_vars__OuterNonLocals_23);
          }
#line 895 "live_vars.m"
          {
#line 895 "live_vars.m"
            ll_backend__live_vars__StackVars_15 = parse_tree__set_of_var__union_2_f_0(ll_backend__live_vars__TypeCtorInfo_27_27, ll_backend__live_vars__V_19_19, ll_backend__live_vars__V_20_20);
          }
#line 897 "live_vars.m"
          {
#line 897 "live_vars.m"
            MR_Word base;
#line 897 "live_vars.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 897 "live_vars.m"
            *ll_backend__live_vars__ParStackVars_8 = base;
#line 897 "live_vars.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__live_vars__OuterNonLocals_23));
#line 897 "live_vars.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ll_backend__live_vars__StackVars_15));
#line 897 "live_vars.m"
          }
#line 889 "live_vars.m"
        }
#line 874 "live_vars.m"
        break;
#line 874 "live_vars.m"
      case (MR_Integer) 3:
#line 900 "live_vars.m"
        {
#line 900 "live_vars.m"
          MR_Word ll_backend__live_vars__TypeCtorInfo_28_28 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 900 "live_vars.m"
          MR_Word ll_backend__live_vars__StackVarsList_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__OuterParStackVars_6, (MR_Integer) 0)));
#line 900 "live_vars.m"
          MR_Word ll_backend__live_vars__WouldDieSet_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__OuterParStackVars_6, (MR_Integer) 1)));
#line 900 "live_vars.m"
          MR_Word ll_backend__live_vars__V_18_18;
#line 900 "live_vars.m"
          MR_Word ll_backend__live_vars__StackVars0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__OuterParStackVars_6, (MR_Integer) 2)));
#line 900 "live_vars.m"
          MR_Word ll_backend__live_vars__StackVars_25;

#line 903 "live_vars.m"
          {
#line 903 "live_vars.m"
            ll_backend__live_vars__V_18_18 = parse_tree__set_of_var__union_2_f_0(ll_backend__live_vars__TypeCtorInfo_28_28, ll_backend__live_vars__StackVars0_24, ll_backend__live_vars__InnerStackVars_9);
          }
#line 904 "live_vars.m"
          {
#line 904 "live_vars.m"
            ll_backend__live_vars__StackVars_25 = parse_tree__set_of_var__union_2_f_0(ll_backend__live_vars__TypeCtorInfo_28_28, ll_backend__live_vars__V_18_18, ll_backend__live_vars__LiveSet_5);
          }
#line 905 "live_vars.m"
          {
#line 905 "live_vars.m"
            MR_Word base;
#line 905 "live_vars.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 905 "live_vars.m"
            *ll_backend__live_vars__ParStackVars_8 = base;
#line 905 "live_vars.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (ll_backend__live_vars__StackVarsList_16));
#line 905 "live_vars.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__live_vars__WouldDieSet_17));
#line 905 "live_vars.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__live_vars__StackVars_25));
#line 905 "live_vars.m"
          }
#line 900 "live_vars.m"
        }
#line 874 "live_vars.m"
        break;
#line 874 "live_vars.m"
    }
#line 869 "live_vars.m"
  }
#line 864 "live_vars.m"
}

#line 856 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__par_stack_vars_start_parallel_conjunction_3_p_0(
#line 856 "live_vars.m"
  MR_Word ll_backend__live_vars__LiveSet_4,
#line 856 "live_vars.m"
  MR_Word ll_backend__live_vars__OuterParStackVars_5,
#line 856 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__3_3)
#line 856 "live_vars.m"
{
#line 860 "live_vars.m"
  {
#line 860 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;
#line 860 "live_vars.m"
    MR_Word ll_backend__live_vars__TypeCtorInfo_10_10 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 860 "live_vars.m"
    MR_Word ll_backend__live_vars__InnerNonLocals_6;
#line 860 "live_vars.m"
    MR_Word ll_backend__live_vars__OuterNonLocals_7;
#line 860 "live_vars.m"
    MR_Word ll_backend__live_vars__V_9_9;

#line 860 "live_vars.m"
    {
#line 860 "live_vars.m"
      ll_backend__live_vars__V_9_9 = parse_tree__set_of_var__init_0_f_0(ll_backend__live_vars__TypeCtorInfo_10_10);
    }
#line 986 "live_vars.m"
#line 986 "live_vars.m"
    switch (MR_tag((MR_Word) ll_backend__live_vars__OuterParStackVars_5)) {
#line 986 "live_vars.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 986 "live_vars.m"
      case (MR_Integer) 0:
#line 986 "live_vars.m"
        {
#line 986 "live_vars.m"
          {
#line 986 "live_vars.m"
            ll_backend__live_vars__OuterNonLocals_7 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          }
#line 986 "live_vars.m"
        }
#line 986 "live_vars.m"
        break;
#line 986 "live_vars.m"
      case (MR_Integer) 1:
#line 987 "live_vars.m"
        {
#line 987 "live_vars.m"
          MR_Word ll_backend__live_vars__V_12_12;
#line 987 "live_vars.m"
          MR_Word ll_backend__live_vars__V_13_13;

#line 987 "live_vars.m"
          ll_backend__live_vars__OuterNonLocals_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__OuterParStackVars_5, (MR_Integer) 0)));
#line 987 "live_vars.m"
          ll_backend__live_vars__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__OuterParStackVars_5, (MR_Integer) 1)));
#line 987 "live_vars.m"
          ll_backend__live_vars__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__OuterParStackVars_5, (MR_Integer) 2)));
#line 987 "live_vars.m"
        }
#line 986 "live_vars.m"
        break;
#line 986 "live_vars.m"
      case (MR_Integer) 2:
#line 988 "live_vars.m"
        {
#line 988 "live_vars.m"
          MR_Word ll_backend__live_vars__V_15_15;

#line 988 "live_vars.m"
          ll_backend__live_vars__OuterNonLocals_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__OuterParStackVars_5, (MR_Integer) 0)));
#line 988 "live_vars.m"
          ll_backend__live_vars__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__OuterParStackVars_5, (MR_Integer) 1)));
#line 988 "live_vars.m"
        }
#line 986 "live_vars.m"
        break;
#line 986 "live_vars.m"
      case (MR_Integer) 3:
#line 989 "live_vars.m"
        {
#line 990 "live_vars.m"
          {
#line 990 "live_vars.m"
            ll_backend__live_vars__OuterNonLocals_7 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          }
#line 989 "live_vars.m"
        }
#line 986 "live_vars.m"
        break;
#line 986 "live_vars.m"
    }
#line 862 "live_vars.m"
    {
#line 862 "live_vars.m"
      ll_backend__live_vars__InnerNonLocals_6 = parse_tree__set_of_var__union_2_f_0(ll_backend__live_vars__TypeCtorInfo_10_10, ll_backend__live_vars__OuterNonLocals_7, ll_backend__live_vars__LiveSet_4);
    }
#line 860 "live_vars.m"
    {
#line 860 "live_vars.m"
      MR_Word base;
#line 860 "live_vars.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 860 "live_vars.m"
      *ll_backend__live_vars__HeadVar__3_3 = base;
#line 860 "live_vars.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__live_vars__InnerNonLocals_6));
#line 860 "live_vars.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "live_vars.m"
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ll_backend__live_vars__V_9_9));
#line 860 "live_vars.m"
    }
#line 860 "live_vars.m"
  }
#line 856 "live_vars.m"
}

#line 795 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__record_par_conj_6_p_0(
#line 795 "live_vars.m"
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_17,
#line 795 "live_vars.m"
  MR_Word ll_backend__live_vars__NeedInParConj_7,
#line 795 "live_vars.m"
  MR_Word ll_backend__live_vars__AllocData_8,
#line 795 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_GoalInfo_0_11,
#line 795 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_GoalInfo_12,
#line 795 "live_vars.m"
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_13,
#line 795 "live_vars.m"
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_14)
#line 795 "live_vars.m"
{
#line 799 "live_vars.m"
  {
#line 799 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;
#line 3337 "ll_backend.live_vars.c"
    void MR_CALL (* ll_backend__live_vars__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 800 "live_vars.m"
    {
#line 800 "live_vars.m"
      hlds__hlds_llds__goal_info_set_need_in_par_conj_3_p_0(ll_backend__live_vars__NeedInParConj_7, ll_backend__live_vars__STATE_VARIABLE_GoalInfo_0_11, ll_backend__live_vars__STATE_VARIABLE_GoalInfo_12);
    }
#line 3345 "ll_backend.live_vars.c"
    ll_backend__live_vars__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_17, (MR_Integer) 0)), (MR_Integer) 7)));
#line 3347 "ll_backend.live_vars.c"
    {
#line 3349 "ll_backend.live_vars.c"
      ll_backend__live_vars__func_0(((MR_Box) ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_17), ((MR_Box) (ll_backend__live_vars__NeedInParConj_7)), ((MR_Box) (ll_backend__live_vars__AllocData_8)), ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_13, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_14);
#line 3351 "ll_backend.live_vars.c"
      return;
    }
#line 799 "live_vars.m"
  }
#line 795 "live_vars.m"
}

#line 718 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_cases_12_p_0(
#line 718 "live_vars.m"
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_54,
#line 718 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 718 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__2_2,
#line 718 "live_vars.m"
  MR_Word ll_backend__live_vars__ResumeVars0_3,
#line 718 "live_vars.m"
  MR_Word ll_backend__live_vars__AllocData_4,
#line 718 "live_vars.m"
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_5,
#line 718 "live_vars.m"
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_6,
#line 718 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__7_7,
#line 718 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__8_8,
#line 718 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__9_9,
#line 718 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__10_10,
#line 718 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_11,
#line 718 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_12)
#line 718 "live_vars.m"
{
#line 725 "live_vars.m"
  {
#line 725 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;

#line 725 "live_vars.m"
    if ((ll_backend__live_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 725 "live_vars.m"
      {
#line 725 "live_vars.m"
        *ll_backend__live_vars__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 726 "live_vars.m"
        *ll_backend__live_vars__STATE_VARIABLE_ParStackVars_12 = ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_11;
#line 726 "live_vars.m"
        *ll_backend__live_vars__HeadVar__10_10 = ll_backend__live_vars__HeadVar__9_9;
#line 726 "live_vars.m"
        *ll_backend__live_vars__HeadVar__8_8 = ll_backend__live_vars__HeadVar__7_7;
#line 726 "live_vars.m"
        *ll_backend__live_vars__STATE_VARIABLE_StackAlloc_6 = ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_5;
#line 725 "live_vars.m"
      }
#line 725 "live_vars.m"
    else
#line 729 "live_vars.m"
      {
#line 729 "live_vars.m"
        MR_Word ll_backend__live_vars__Case0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 729 "live_vars.m"
        MR_Word ll_backend__live_vars__Cases0_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 729 "live_vars.m"
        MR_Word ll_backend__live_vars__Case_29;
#line 729 "live_vars.m"
        MR_Word ll_backend__live_vars__Cases_30;
#line 729 "live_vars.m"
        MR_Word ll_backend__live_vars__MainConsId_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__Case0_27, (MR_Integer) 0)));
#line 729 "live_vars.m"
        MR_Word ll_backend__live_vars__OtherConsIds_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__Case0_27, (MR_Integer) 1)));
#line 729 "live_vars.m"
        MR_Word ll_backend__live_vars__Goal0_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__Case0_27, (MR_Integer) 2)));
#line 729 "live_vars.m"
        MR_Word ll_backend__live_vars__Goal_42;
#line 729 "live_vars.m"
        MR_Word ll_backend__live_vars__NondetLiveness1_43;
#line 729 "live_vars.m"
        MR_Word ll_backend__live_vars__NondetLiveness2_45;
#line 729 "live_vars.m"
        MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_50_50;
#line 729 "live_vars.m"
        MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_51_51;
#line 735 "live_vars.m"
        MR_Word ll_backend__live_vars___Liveness2_44;

#line 731 "live_vars.m"
        {
#line 731 "live_vars.m"
          ll_backend__live_vars__build_live_sets_in_goal_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_54, ll_backend__live_vars__Goal0_41, &ll_backend__live_vars__Goal_42, ll_backend__live_vars__ResumeVars0_3, ll_backend__live_vars__AllocData_4, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_5, &ll_backend__live_vars__STATE_VARIABLE_StackAlloc_50_50, ll_backend__live_vars__HeadVar__7_7, ll_backend__live_vars__HeadVar__8_8, ll_backend__live_vars__HeadVar__9_9, &ll_backend__live_vars__NondetLiveness1_43, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_11, &ll_backend__live_vars__STATE_VARIABLE_ParStackVars_51_51);
        }
#line 734 "live_vars.m"
        {
#line 734 "live_vars.m"
          ll_backend__live_vars__Case_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 734 "live_vars.m"
          MR_hl_field(MR_mktag(0), ll_backend__live_vars__Case_29, 0) = ((MR_Box) (ll_backend__live_vars__MainConsId_39));
#line 734 "live_vars.m"
          MR_hl_field(MR_mktag(0), ll_backend__live_vars__Case_29, 1) = ((MR_Box) (ll_backend__live_vars__OtherConsIds_40));
#line 734 "live_vars.m"
          MR_hl_field(MR_mktag(0), ll_backend__live_vars__Case_29, 2) = ((MR_Box) (ll_backend__live_vars__Goal_42));
#line 734 "live_vars.m"
        }
#line 735 "live_vars.m"
        {
#line 735 "live_vars.m"
          ll_backend__live_vars__build_live_sets_in_cases_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_54, ll_backend__live_vars__Cases0_28, &ll_backend__live_vars__Cases_30, ll_backend__live_vars__ResumeVars0_3, ll_backend__live_vars__AllocData_4, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_50_50, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_6, ll_backend__live_vars__HeadVar__7_7, &ll_backend__live_vars___Liveness2_44, ll_backend__live_vars__HeadVar__9_9, &ll_backend__live_vars__NondetLiveness2_45, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_51_51, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_12);
        }
#line 727 "live_vars.m"
        {
#line 727 "live_vars.m"
          MR_Word base;
#line 727 "live_vars.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 727 "live_vars.m"
          *ll_backend__live_vars__HeadVar__2_2 = base;
#line 727 "live_vars.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__live_vars__Case_29));
#line 727 "live_vars.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__live_vars__Cases_30));
#line 727 "live_vars.m"
        }
#line 738 "live_vars.m"
        {
#line 738 "live_vars.m"
          parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__live_vars__NondetLiveness1_43, ll_backend__live_vars__NondetLiveness2_45, ll_backend__live_vars__HeadVar__10_10);
#line 738 "live_vars.m"
          return;
        }
#line 729 "live_vars.m"
      }
#line 725 "live_vars.m"
  }
#line 718 "live_vars.m"
}

#line 674 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_disj_13_p_0(
#line 674 "live_vars.m"
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_61,
#line 674 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 674 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__2_2,
#line 674 "live_vars.m"
  MR_Word ll_backend__live_vars__DisjGoalInfo_3,
#line 674 "live_vars.m"
  MR_Word ll_backend__live_vars__ResumeVars0_4,
#line 674 "live_vars.m"
  MR_Word ll_backend__live_vars__AllocData_5,
#line 674 "live_vars.m"
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_6,
#line 674 "live_vars.m"
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_7,
#line 674 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__8_8,
#line 674 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__9_9,
#line 674 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__10_10,
#line 674 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__11_11,
#line 674 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_12,
#line 674 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_13)
#line 674 "live_vars.m"
{
#line 681 "live_vars.m"
  {
#line 681 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;

#line 681 "live_vars.m"
    if ((ll_backend__live_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 681 "live_vars.m"
      {
#line 681 "live_vars.m"
        *ll_backend__live_vars__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 682 "live_vars.m"
        *ll_backend__live_vars__STATE_VARIABLE_ParStackVars_13 = ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_12;
#line 682 "live_vars.m"
        *ll_backend__live_vars__HeadVar__11_11 = ll_backend__live_vars__HeadVar__10_10;
#line 682 "live_vars.m"
        *ll_backend__live_vars__HeadVar__9_9 = ll_backend__live_vars__HeadVar__8_8;
#line 682 "live_vars.m"
        *ll_backend__live_vars__STATE_VARIABLE_StackAlloc_7 = ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_6;
#line 681 "live_vars.m"
      }
#line 681 "live_vars.m"
    else
#line 685 "live_vars.m"
      {
#line 685 "live_vars.m"
        MR_Word ll_backend__live_vars__Goal0_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 685 "live_vars.m"
        MR_Word ll_backend__live_vars__Goals0_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 685 "live_vars.m"
        MR_Word ll_backend__live_vars__Goal_31;
#line 685 "live_vars.m"
        MR_Word ll_backend__live_vars__Goals_32;
#line 685 "live_vars.m"
        MR_Word ll_backend__live_vars__GoalInfo_43;
#line 685 "live_vars.m"
        MR_Word ll_backend__live_vars__NondetLiveness1_44;
#line 685 "live_vars.m"
        MR_Word ll_backend__live_vars__NondetLiveness2_46;
#line 685 "live_vars.m"
        MR_Word ll_backend__live_vars__DisjCodeModel_47;
#line 685 "live_vars.m"
        MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_56_56;
#line 685 "live_vars.m"
        MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_57_57;
#line 686 "live_vars.m"
        MR_Word ll_backend__live_vars__V_42_42;
#line 690 "live_vars.m"
        MR_Word ll_backend__live_vars___Liveness2_45;

#line 687 "live_vars.m"
        {
#line 687 "live_vars.m"
          ll_backend__live_vars__build_live_sets_in_goal_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_61, ll_backend__live_vars__Goal0_29, &ll_backend__live_vars__Goal_31, ll_backend__live_vars__ResumeVars0_4, ll_backend__live_vars__AllocData_5, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_6, &ll_backend__live_vars__STATE_VARIABLE_StackAlloc_56_56, ll_backend__live_vars__HeadVar__8_8, ll_backend__live_vars__HeadVar__9_9, ll_backend__live_vars__HeadVar__10_10, &ll_backend__live_vars__NondetLiveness1_44, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_12, &ll_backend__live_vars__STATE_VARIABLE_ParStackVars_57_57);
        }
#line 686 "live_vars.m"
        ll_backend__live_vars__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__Goal_31, (MR_Integer) 0)));
#line 686 "live_vars.m"
        ll_backend__live_vars__GoalInfo_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__Goal_31, (MR_Integer) 1)));
#line 690 "live_vars.m"
        {
#line 690 "live_vars.m"
          ll_backend__live_vars__build_live_sets_in_disj_13_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_61, ll_backend__live_vars__Goals0_30, &ll_backend__live_vars__Goals_32, ll_backend__live_vars__DisjGoalInfo_3, ll_backend__live_vars__ResumeVars0_4, ll_backend__live_vars__AllocData_5, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_56_56, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_7, ll_backend__live_vars__HeadVar__8_8, &ll_backend__live_vars___Liveness2_45, ll_backend__live_vars__HeadVar__10_10, &ll_backend__live_vars__NondetLiveness2_46, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_57_57, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_13);
        }
#line 683 "live_vars.m"
        {
#line 683 "live_vars.m"
          MR_Word base;
#line 683 "live_vars.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 683 "live_vars.m"
          *ll_backend__live_vars__HeadVar__2_2 = base;
#line 683 "live_vars.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__live_vars__Goal_31));
#line 683 "live_vars.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__live_vars__Goals_32));
#line 683 "live_vars.m"
        }
#line 693 "live_vars.m"
        {
#line 693 "live_vars.m"
          ll_backend__live_vars__DisjCodeModel_47 = hlds__code_model__goal_info_get_code_model_1_f_0(ll_backend__live_vars__DisjGoalInfo_3);
        }
#line 709 "live_vars.m"
#line 709 "live_vars.m"
        switch (ll_backend__live_vars__DisjCodeModel_47) {
#line 709 "live_vars.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 709 "live_vars.m"
          case (MR_Integer) 0:
#line 709 "live_vars.m"
          case (MR_Integer) 1:
#line 713 "live_vars.m"
            *ll_backend__live_vars__HeadVar__11_11 = ll_backend__live_vars__HeadVar__10_10;
#line 709 "live_vars.m"
            break;
#line 709 "live_vars.m"
          case (MR_Integer) 2:
#line 695 "live_vars.m"
            {
#line 695 "live_vars.m"
              MR_Word ll_backend__live_vars__TypeCtorInfo_62_62 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 695 "live_vars.m"
              MR_Word ll_backend__live_vars__NondetLiveness3_48;
#line 695 "live_vars.m"
              MR_Word ll_backend__live_vars__Resume_49;
#line 706 "live_vars.m"
              MR_Word ll_backend__live_vars__ResumePointVars_50;
#line 702 "live_vars.m"
              MR_Word ll_backend__live_vars__Locs_51;
#line 702 "live_vars.m"
              MR_Word ll_backend__live_vars__V_60_60;

#line 699 "live_vars.m"
              {
#line 699 "live_vars.m"
                parse_tree__set_of_var__union_3_p_0(ll_backend__live_vars__TypeCtorInfo_62_62, ll_backend__live_vars__NondetLiveness1_44, ll_backend__live_vars__NondetLiveness2_46, &ll_backend__live_vars__NondetLiveness3_48);
              }
#line 700 "live_vars.m"
              {
#line 700 "live_vars.m"
                hlds__hlds_llds__goal_info_get_resume_point_2_p_0(ll_backend__live_vars__GoalInfo_43, &ll_backend__live_vars__Resume_49);
              }
#line 702 "live_vars.m"
              ll_backend__live_vars__succeeded = ((MR_tag((MR_Word) ll_backend__live_vars__Resume_49)) == (MR_mktag((MR_Integer) 1)));
#line 702 "live_vars.m"
              if (ll_backend__live_vars__succeeded)
#line 702 "live_vars.m"
                {
#line 702 "live_vars.m"
                  ll_backend__live_vars__ResumePointVars_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__Resume_49, (MR_Integer) 0)));
#line 702 "live_vars.m"
                  ll_backend__live_vars__Locs_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__Resume_49, (MR_Integer) 1)));
#line 703 "live_vars.m"
                  ll_backend__live_vars__V_60_60 = (MR_Integer) 1;
#line 214 "live_vars.m"
#line 214 "live_vars.m"
                  switch (ll_backend__live_vars__Locs_51) {
#line 214 "live_vars.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 214 "live_vars.m"
                    case (MR_Integer) 2:
#line 216 "live_vars.m"
                      {
#line 703 "live_vars.m"
                        ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_60_60 == (MR_Integer) 1);
#line 216 "live_vars.m"
                      }
#line 214 "live_vars.m"
                      break;
#line 214 "live_vars.m"
                    case (MR_Integer) 0:
#line 214 "live_vars.m"
                      {
#line 703 "live_vars.m"
                        ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_60_60 == (MR_Integer) 0);
#line 214 "live_vars.m"
                      }
#line 214 "live_vars.m"
                      break;
#line 214 "live_vars.m"
                    case (MR_Integer) 3:
#line 217 "live_vars.m"
                      {
#line 703 "live_vars.m"
                        ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_60_60 == (MR_Integer) 1);
#line 217 "live_vars.m"
                      }
#line 214 "live_vars.m"
                      break;
#line 214 "live_vars.m"
                    case (MR_Integer) 1:
#line 215 "live_vars.m"
                      {
#line 703 "live_vars.m"
                        ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_60_60 == (MR_Integer) 1);
#line 215 "live_vars.m"
                      }
#line 214 "live_vars.m"
                      break;
#line 214 "live_vars.m"
                  }
#line 702 "live_vars.m"
                }
#line 706 "live_vars.m"
              if (ll_backend__live_vars__succeeded)
#line 705 "live_vars.m"
                {
#line 705 "live_vars.m"
                  parse_tree__set_of_var__union_3_p_0(ll_backend__live_vars__TypeCtorInfo_62_62, ll_backend__live_vars__NondetLiveness3_48, ll_backend__live_vars__ResumePointVars_50, ll_backend__live_vars__HeadVar__11_11);
#line 705 "live_vars.m"
                  return;
                }
#line 706 "live_vars.m"
              else
#line 707 "live_vars.m"
                *ll_backend__live_vars__HeadVar__11_11 = ll_backend__live_vars__NondetLiveness3_48;
#line 695 "live_vars.m"
            }
#line 709 "live_vars.m"
            break;
#line 709 "live_vars.m"
        }
#line 685 "live_vars.m"
      }
#line 681 "live_vars.m"
  }
#line 674 "live_vars.m"
}

#line 654 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_par_conj_12_p_0(
#line 654 "live_vars.m"
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_50,
#line 654 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 654 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__2_2,
#line 654 "live_vars.m"
  MR_Word ll_backend__live_vars__ResumeVars0_3,
#line 654 "live_vars.m"
  MR_Word ll_backend__live_vars__AllocData_4,
#line 654 "live_vars.m"
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_5,
#line 654 "live_vars.m"
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_6,
#line 654 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__7_7,
#line 654 "live_vars.m"
  MR_Word * ll_backend__live_vars__Liveness_8,
#line 654 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_9,
#line 654 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_10,
#line 654 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_11,
#line 654 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_12)
#line 654 "live_vars.m"
{
#line 661 "live_vars.m"
  {
#line 661 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;

#line 661 "live_vars.m"
    if ((ll_backend__live_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 661 "live_vars.m"
      {
#line 661 "live_vars.m"
        *ll_backend__live_vars__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 662 "live_vars.m"
        *ll_backend__live_vars__Liveness_8 = ll_backend__live_vars__HeadVar__7_7;
#line 662 "live_vars.m"
        *ll_backend__live_vars__STATE_VARIABLE_ParStackVars_12 = ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_11;
#line 662 "live_vars.m"
        *ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_10 = ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_9;
#line 662 "live_vars.m"
        *ll_backend__live_vars__STATE_VARIABLE_StackAlloc_6 = ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_5;
#line 661 "live_vars.m"
      }
#line 661 "live_vars.m"
    else
#line 665 "live_vars.m"
      {
#line 665 "live_vars.m"
        MR_Word ll_backend__live_vars__Goal0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 665 "live_vars.m"
        MR_Word ll_backend__live_vars__Goals0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 665 "live_vars.m"
        MR_Word ll_backend__live_vars__Goal_27;
#line 665 "live_vars.m"
        MR_Word ll_backend__live_vars__Goals_28;
#line 665 "live_vars.m"
        MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_43_43;
#line 665 "live_vars.m"
        MR_Word ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_44_44;
#line 665 "live_vars.m"
        MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_45_45;
#line 665 "live_vars.m"
        MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_46_46;
#line 1000 "live_vars.m"
        MR_Word ll_backend__live_vars__Nonlocals_54;
#line 1000 "live_vars.m"
        MR_Word ll_backend__live_vars__PrevSets_55;
#line 1000 "live_vars.m"
        MR_Word ll_backend__live_vars__CurSet_56;
#line 669 "live_vars.m"
        MR_Word ll_backend__live_vars___Liveness1_36;

#line 666 "live_vars.m"
        {
#line 666 "live_vars.m"
          ll_backend__live_vars__build_live_sets_in_goal_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_50, ll_backend__live_vars__Goal0_25, &ll_backend__live_vars__Goal_27, ll_backend__live_vars__ResumeVars0_3, ll_backend__live_vars__AllocData_4, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_5, &ll_backend__live_vars__STATE_VARIABLE_StackAlloc_43_43, ll_backend__live_vars__HeadVar__7_7, ll_backend__live_vars__Liveness_8, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_9, &ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_44_44, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_11, &ll_backend__live_vars__STATE_VARIABLE_ParStackVars_45_45);
        }
#line 996 "live_vars.m"
        ll_backend__live_vars__succeeded = ((MR_tag((MR_Word) ll_backend__live_vars__STATE_VARIABLE_ParStackVars_45_45)) == (MR_mktag((MR_Integer) 1)));
#line 996 "live_vars.m"
        if (ll_backend__live_vars__succeeded)
#line 996 "live_vars.m"
          {
#line 996 "live_vars.m"
            ll_backend__live_vars__Nonlocals_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__STATE_VARIABLE_ParStackVars_45_45, (MR_Integer) 0)));
#line 996 "live_vars.m"
            ll_backend__live_vars__PrevSets_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__STATE_VARIABLE_ParStackVars_45_45, (MR_Integer) 1)));
#line 996 "live_vars.m"
            ll_backend__live_vars__CurSet_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__STATE_VARIABLE_ParStackVars_45_45, (MR_Integer) 2)));
#line 997 "live_vars.m"
            {
#line 997 "live_vars.m"
              MR_Word ll_backend__live_vars__V_58_58;
#line 997 "live_vars.m"
              MR_Word ll_backend__live_vars__V_59_59;

#line 998 "live_vars.m"
              {
#line 998 "live_vars.m"
                ll_backend__live_vars__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 998 "live_vars.m"
                MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_58_58, 0) = ((MR_Box) (ll_backend__live_vars__CurSet_56));
#line 998 "live_vars.m"
                MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_58_58, 1) = ((MR_Box) (ll_backend__live_vars__PrevSets_55));
#line 998 "live_vars.m"
              }
#line 999 "live_vars.m"
              {
#line 999 "live_vars.m"
                ll_backend__live_vars__V_59_59 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
              }
#line 998 "live_vars.m"
              {
#line 998 "live_vars.m"
                ll_backend__live_vars__STATE_VARIABLE_ParStackVars_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 998 "live_vars.m"
                MR_hl_field(MR_mktag(1), ll_backend__live_vars__STATE_VARIABLE_ParStackVars_46_46, 0) = ((MR_Box) (ll_backend__live_vars__Nonlocals_54));
#line 998 "live_vars.m"
                MR_hl_field(MR_mktag(1), ll_backend__live_vars__STATE_VARIABLE_ParStackVars_46_46, 1) = ((MR_Box) (ll_backend__live_vars__V_58_58));
#line 998 "live_vars.m"
                MR_hl_field(MR_mktag(1), ll_backend__live_vars__STATE_VARIABLE_ParStackVars_46_46, 2) = ((MR_Box) (ll_backend__live_vars__V_59_59));
#line 998 "live_vars.m"
              }
#line 997 "live_vars.m"
            }
#line 996 "live_vars.m"
          }
#line 996 "live_vars.m"
        else
#line 1001 "live_vars.m"
          {
#line 1001 "live_vars.m"
            {
#line 1001 "live_vars.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.live_vars", (MR_String) "predicate \140ll_backend.live_vars.par_stack_vars_next_par_conjunct\'/2", (MR_String) "expected parallel_conjunction/3");
#line 1001 "live_vars.m"
              return;
            }
#line 1001 "live_vars.m"
          }
#line 669 "live_vars.m"
        {
#line 669 "live_vars.m"
          ll_backend__live_vars__build_live_sets_in_par_conj_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_50, ll_backend__live_vars__Goals0_26, &ll_backend__live_vars__Goals_28, ll_backend__live_vars__ResumeVars0_3, ll_backend__live_vars__AllocData_4, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_43_43, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_6, ll_backend__live_vars__HeadVar__7_7, &ll_backend__live_vars___Liveness1_36, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_44_44, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_10, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_46_46, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_12);
        }
#line 663 "live_vars.m"
        {
#line 663 "live_vars.m"
          MR_Word base;
#line 663 "live_vars.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 663 "live_vars.m"
          *ll_backend__live_vars__HeadVar__2_2 = base;
#line 663 "live_vars.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__live_vars__Goal_27));
#line 663 "live_vars.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__live_vars__Goals_28));
#line 663 "live_vars.m"
        }
#line 665 "live_vars.m"
      }
#line 661 "live_vars.m"
  }
#line 654 "live_vars.m"
}

#line 626 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_conj_12_p_0(
#line 626 "live_vars.m"
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_60,
#line 626 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 626 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__2_2,
#line 626 "live_vars.m"
  MR_Word ll_backend__live_vars__ResumeVars0_3,
#line 626 "live_vars.m"
  MR_Word ll_backend__live_vars__AllocData_4,
#line 626 "live_vars.m"
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_5,
#line 626 "live_vars.m"
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_6,
#line 626 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_Liveness_0_7,
#line 626 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_Liveness_8,
#line 626 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_9,
#line 626 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_10,
#line 626 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_11,
#line 626 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_12)
#line 626 "live_vars.m"
{
#line 633 "live_vars.m"
  {
#line 633 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;

#line 633 "live_vars.m"
    if ((ll_backend__live_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 633 "live_vars.m"
      {
#line 633 "live_vars.m"
        *ll_backend__live_vars__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 634 "live_vars.m"
        *ll_backend__live_vars__STATE_VARIABLE_ParStackVars_12 = ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_11;
#line 633 "live_vars.m"
        *ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_10 = ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_9;
#line 633 "live_vars.m"
        *ll_backend__live_vars__STATE_VARIABLE_Liveness_8 = ll_backend__live_vars__STATE_VARIABLE_Liveness_0_7;
#line 633 "live_vars.m"
        *ll_backend__live_vars__STATE_VARIABLE_StackAlloc_6 = ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_5;
#line 633 "live_vars.m"
      }
#line 633 "live_vars.m"
    else
#line 636 "live_vars.m"
      {
#line 636 "live_vars.m"
        MR_Word ll_backend__live_vars__Goal0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 636 "live_vars.m"
        MR_Word ll_backend__live_vars__Goals0_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 636 "live_vars.m"
        MR_Word ll_backend__live_vars__Goal_29;
#line 636 "live_vars.m"
        MR_Word ll_backend__live_vars__Goals_30;
#line 638 "live_vars.m"
        MR_Word ll_backend__live_vars__GoalInfo_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__Goal0_27, (MR_Integer) 1)));
#line 638 "live_vars.m"
        MR_Word ll_backend__live_vars__InstMapDelta_39;
#line 638 "live_vars.m"
        MR_Word ll_backend__live_vars__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__Goal0_27, (MR_Integer) 0)));

#line 639 "live_vars.m"
        {
#line 639 "live_vars.m"
          ll_backend__live_vars__InstMapDelta_39 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__live_vars__GoalInfo_38);
        }
#line 640 "live_vars.m"
        {
#line 640 "live_vars.m"
          ll_backend__live_vars__succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(ll_backend__live_vars__InstMapDelta_39);
        }
#line 645 "live_vars.m"
        if (ll_backend__live_vars__succeeded)
#line 643 "live_vars.m"
          {
#line 642 "live_vars.m"
            {
#line 642 "live_vars.m"
              ll_backend__live_vars__build_live_sets_in_goal_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_60, ll_backend__live_vars__Goal0_27, &ll_backend__live_vars__Goal_29, ll_backend__live_vars__ResumeVars0_3, ll_backend__live_vars__AllocData_4, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_5, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_6, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_7, ll_backend__live_vars__STATE_VARIABLE_Liveness_8, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_9, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_10, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_11, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_12);
            }
#line 644 "live_vars.m"
            ll_backend__live_vars__Goals_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 643 "live_vars.m"
          }
#line 645 "live_vars.m"
        else
#line 647 "live_vars.m"
          {
#line 647 "live_vars.m"
            MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_52_52;
#line 647 "live_vars.m"
            MR_Word ll_backend__live_vars__STATE_VARIABLE_Liveness_53_53;
#line 647 "live_vars.m"
            MR_Word ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_54_54;
#line 647 "live_vars.m"
            MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_55_55;

#line 646 "live_vars.m"
            {
#line 646 "live_vars.m"
              ll_backend__live_vars__build_live_sets_in_goal_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_60, ll_backend__live_vars__Goal0_27, &ll_backend__live_vars__Goal_29, ll_backend__live_vars__ResumeVars0_3, ll_backend__live_vars__AllocData_4, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_5, &ll_backend__live_vars__STATE_VARIABLE_StackAlloc_52_52, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_7, &ll_backend__live_vars__STATE_VARIABLE_Liveness_53_53, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_9, &ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_54_54, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_11, &ll_backend__live_vars__STATE_VARIABLE_ParStackVars_55_55);
            }
#line 648 "live_vars.m"
            {
#line 648 "live_vars.m"
              ll_backend__live_vars__build_live_sets_in_conj_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_60, ll_backend__live_vars__Goals0_28, &ll_backend__live_vars__Goals_30, ll_backend__live_vars__ResumeVars0_3, ll_backend__live_vars__AllocData_4, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_52_52, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_6, ll_backend__live_vars__STATE_VARIABLE_Liveness_53_53, ll_backend__live_vars__STATE_VARIABLE_Liveness_8, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_54_54, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_10, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_55_55, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_12);
            }
#line 647 "live_vars.m"
          }
#line 635 "live_vars.m"
        {
#line 635 "live_vars.m"
          MR_Word base;
#line 635 "live_vars.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 635 "live_vars.m"
          *ll_backend__live_vars__HeadVar__2_2 = base;
#line 635 "live_vars.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__live_vars__Goal_29));
#line 635 "live_vars.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__live_vars__Goals_30));
#line 635 "live_vars.m"
        }
#line 636 "live_vars.m"
      }
#line 633 "live_vars.m"
  }
#line 626 "live_vars.m"
}

#line 575 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_call_12_p_0(
#line 575 "live_vars.m"
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_57,
#line 575 "live_vars.m"
  MR_Word ll_backend__live_vars__OutVars_13,
#line 575 "live_vars.m"
  MR_Word ll_backend__live_vars__GoalInfo0_14,
#line 575 "live_vars.m"
  MR_Word * ll_backend__live_vars__GoalInfo_15,
#line 575 "live_vars.m"
  MR_Word ll_backend__live_vars__ResumeVars0_16,
#line 575 "live_vars.m"
  MR_Word ll_backend__live_vars__AllocData_17,
#line 575 "live_vars.m"
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_27,
#line 575 "live_vars.m"
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_28,
#line 575 "live_vars.m"
  MR_Word ll_backend__live_vars__Liveness_19,
#line 575 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_29,
#line 575 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_30,
#line 575 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_31,
#line 575 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_32)
#line 575 "live_vars.m"
{
#line 582 "live_vars.m"
  {
#line 582 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;
#line 582 "live_vars.m"
    MR_Word ll_backend__live_vars__TypeCtorInfo_58_58 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 582 "live_vars.m"
    MR_Word ll_backend__live_vars__ForwardVars0_22;
#line 582 "live_vars.m"
    MR_Word ll_backend__live_vars__ForwardVars_23;
#line 582 "live_vars.m"
    MR_Word ll_backend__live_vars__Detism_24;
#line 582 "live_vars.m"
    MR_Word ll_backend__live_vars__NeedAcrossCall_25;
#line 582 "live_vars.m"
    MR_Word ll_backend__live_vars__CodeModel_26;
#line 582 "live_vars.m"
    MR_Word ll_backend__live_vars__V_33_33;
#line 582 "live_vars.m"
    MR_Word ll_backend__live_vars__V_44_44;
#line 588 "live_vars.m"
    MR_Word ll_backend__live_vars__V_42_42;
#line 588 "live_vars.m"
    MR_Word ll_backend__live_vars__V_43_43;
#line 588 "live_vars.m"
    MR_Word ll_backend__live_vars__V_45_45;
#line 588 "live_vars.m"
    MR_ArrayPtr ll_backend__live_vars__V_46_46;
#line 593 "live_vars.m"
    MR_Word ll_backend__live_vars__V_35_35;
#line 594 "live_vars.m"
    MR_Word ll_backend__live_vars__V_52_52;
#line 594 "live_vars.m"
    MR_Word ll_backend__live_vars__V_53_53;
#line 594 "live_vars.m"
    MR_Word ll_backend__live_vars__V_54_54;
#line 594 "live_vars.m"
    MR_Word ll_backend__live_vars__V_55_55;
#line 594 "live_vars.m"
    MR_ArrayPtr ll_backend__live_vars__V_56_56;
#line 4121 "ll_backend.live_vars.c"
    void MR_CALL (* ll_backend__live_vars__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 583 "live_vars.m"
    {
#line 583 "live_vars.m"
      parse_tree__set_of_var__difference_3_p_0(ll_backend__live_vars__TypeCtorInfo_58_58, ll_backend__live_vars__Liveness_19, ll_backend__live_vars__OutVars_13, &ll_backend__live_vars__ForwardVars0_22);
    }
#line 588 "live_vars.m"
    ll_backend__live_vars__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_17, (MR_Integer) 0)));
#line 588 "live_vars.m"
    ll_backend__live_vars__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_17, (MR_Integer) 1)));
#line 588 "live_vars.m"
    ll_backend__live_vars__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_17, (MR_Integer) 2)));
#line 588 "live_vars.m"
    ll_backend__live_vars__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_17, (MR_Integer) 3)));
#line 588 "live_vars.m"
    ll_backend__live_vars__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_17, (MR_Integer) 4)));
#line 588 "live_vars.m"
    ll_backend__live_vars__V_46_46 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_17, (MR_Integer) 5)));
#line 766 "live_vars.m"
#line 766 "live_vars.m"
    switch (ll_backend__live_vars__V_44_44) {
#line 766 "live_vars.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 766 "live_vars.m"
      case (MR_Integer) 0:
#line 774 "live_vars.m"
        ll_backend__live_vars__ForwardVars_23 = ll_backend__live_vars__ForwardVars0_22;
#line 766 "live_vars.m"
        break;
#line 766 "live_vars.m"
      case (MR_Integer) 1:
#line 766 "live_vars.m"
        {
#line 766 "live_vars.m"
          MR_Word ll_backend__live_vars__TypeCtorInfo_18_71;
#line 766 "live_vars.m"
          MR_Word ll_backend__live_vars__VarTypes_65;
#line 766 "live_vars.m"
          MR_Word ll_backend__live_vars__RttiVarMaps_66;
#line 766 "live_vars.m"
          MR_Word ll_backend__live_vars__TypeInfoVarsLive_67;
#line 766 "live_vars.m"
          MR_Word ll_backend__live_vars__TypeInfoVarsOut_68;
#line 766 "live_vars.m"
          MR_Word ll_backend__live_vars__STATE_VARIABLE_LiveVars_16_69;

#line 767 "live_vars.m"
          {
#line 767 "live_vars.m"
            hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__live_vars__V_33_33, &ll_backend__live_vars__VarTypes_65);
          }
#line 768 "live_vars.m"
          {
#line 768 "live_vars.m"
            hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ll_backend__live_vars__V_33_33, &ll_backend__live_vars__RttiVarMaps_66);
          }
#line 769 "live_vars.m"
          {
#line 769 "live_vars.m"
            hlds__hlds_rtti__get_typeinfo_vars_4_p_0(ll_backend__live_vars__ForwardVars0_22, ll_backend__live_vars__VarTypes_65, ll_backend__live_vars__RttiVarMaps_66, &ll_backend__live_vars__TypeInfoVarsLive_67);
          }
#line 770 "live_vars.m"
          {
#line 770 "live_vars.m"
            hlds__hlds_rtti__get_typeinfo_vars_4_p_0(ll_backend__live_vars__OutVars_13, ll_backend__live_vars__VarTypes_65, ll_backend__live_vars__RttiVarMaps_66, &ll_backend__live_vars__TypeInfoVarsOut_68);
          }
#line 4189 "ll_backend.live_vars.c"
          ll_backend__live_vars__TypeCtorInfo_18_71 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 771 "live_vars.m"
          {
#line 771 "live_vars.m"
            parse_tree__set_of_var__union_3_p_0(ll_backend__live_vars__TypeCtorInfo_18_71, ll_backend__live_vars__ForwardVars0_22, ll_backend__live_vars__TypeInfoVarsOut_68, &ll_backend__live_vars__STATE_VARIABLE_LiveVars_16_69);
          }
#line 772 "live_vars.m"
          {
#line 772 "live_vars.m"
            parse_tree__set_of_var__union_3_p_0(ll_backend__live_vars__TypeCtorInfo_18_71, ll_backend__live_vars__STATE_VARIABLE_LiveVars_16_69, ll_backend__live_vars__TypeInfoVarsLive_67, &ll_backend__live_vars__ForwardVars_23);
          }
#line 766 "live_vars.m"
        }
#line 766 "live_vars.m"
        break;
#line 766 "live_vars.m"
    }
#line 591 "live_vars.m"
    {
#line 591 "live_vars.m"
      ll_backend__live_vars__Detism_24 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ll_backend__live_vars__GoalInfo0_14);
    }
#line 593 "live_vars.m"
    ll_backend__live_vars__succeeded = (ll_backend__live_vars__Detism_24 == (MR_Integer) 6);
#line 593 "live_vars.m"
    if (ll_backend__live_vars__succeeded)
#line 593 "live_vars.m"
      {
#line 594 "live_vars.m"
        ll_backend__live_vars__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_17, (MR_Integer) 0)));
#line 594 "live_vars.m"
        ll_backend__live_vars__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_17, (MR_Integer) 1)));
#line 594 "live_vars.m"
        ll_backend__live_vars__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_17, (MR_Integer) 2)));
#line 594 "live_vars.m"
        ll_backend__live_vars__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_17, (MR_Integer) 3)));
#line 594 "live_vars.m"
        ll_backend__live_vars__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_17, (MR_Integer) 4)));
#line 594 "live_vars.m"
        ll_backend__live_vars__V_56_56 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_17, (MR_Integer) 5)));
#line 594 "live_vars.m"
        ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_35_35 == (MR_Integer) 1);
#line 593 "live_vars.m"
      }
#line 598 "live_vars.m"
    if (ll_backend__live_vars__succeeded)
#line 596 "live_vars.m"
      {
#line 596 "live_vars.m"
        MR_Word ll_backend__live_vars__V_36_36;
#line 596 "live_vars.m"
        MR_Word ll_backend__live_vars__V_37_37;
#line 596 "live_vars.m"
        MR_Word ll_backend__live_vars__V_38_38;

#line 596 "live_vars.m"
        {
#line 596 "live_vars.m"
          ll_backend__live_vars__V_36_36 = parse_tree__set_of_var__init_0_f_0(ll_backend__live_vars__TypeCtorInfo_58_58);
        }
#line 596 "live_vars.m"
        {
#line 596 "live_vars.m"
          ll_backend__live_vars__V_37_37 = parse_tree__set_of_var__init_0_f_0(ll_backend__live_vars__TypeCtorInfo_58_58);
        }
#line 597 "live_vars.m"
        {
#line 597 "live_vars.m"
          ll_backend__live_vars__V_38_38 = parse_tree__set_of_var__init_0_f_0(ll_backend__live_vars__TypeCtorInfo_58_58);
        }
#line 596 "live_vars.m"
        {
#line 596 "live_vars.m"
          ll_backend__live_vars__NeedAcrossCall_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 596 "live_vars.m"
          MR_hl_field(MR_mktag(0), ll_backend__live_vars__NeedAcrossCall_25, 0) = ((MR_Box) (ll_backend__live_vars__V_36_36));
#line 596 "live_vars.m"
          MR_hl_field(MR_mktag(0), ll_backend__live_vars__NeedAcrossCall_25, 1) = ((MR_Box) (ll_backend__live_vars__V_37_37));
#line 596 "live_vars.m"
          MR_hl_field(MR_mktag(0), ll_backend__live_vars__NeedAcrossCall_25, 2) = ((MR_Box) (ll_backend__live_vars__V_38_38));
#line 596 "live_vars.m"
        }
#line 596 "live_vars.m"
      }
#line 598 "live_vars.m"
    else
#line 599 "live_vars.m"
      {
#line 599 "live_vars.m"
        ll_backend__live_vars__NeedAcrossCall_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 599 "live_vars.m"
        MR_hl_field(MR_mktag(0), ll_backend__live_vars__NeedAcrossCall_25, 0) = ((MR_Box) (ll_backend__live_vars__ForwardVars_23));
#line 599 "live_vars.m"
        MR_hl_field(MR_mktag(0), ll_backend__live_vars__NeedAcrossCall_25, 1) = ((MR_Box) (ll_backend__live_vars__ResumeVars0_16));
#line 599 "live_vars.m"
        MR_hl_field(MR_mktag(0), ll_backend__live_vars__NeedAcrossCall_25, 2) = ((MR_Box) (ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_29));
#line 599 "live_vars.m"
      }
#line 784 "live_vars.m"
    {
#line 784 "live_vars.m"
      hlds__hlds_llds__goal_info_set_need_across_call_3_p_0(ll_backend__live_vars__NeedAcrossCall_25, ll_backend__live_vars__GoalInfo0_14, ll_backend__live_vars__GoalInfo_15);
    }
#line 4293 "ll_backend.live_vars.c"
    ll_backend__live_vars__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_57, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4295 "ll_backend.live_vars.c"
    {
#line 4297 "ll_backend.live_vars.c"
      ll_backend__live_vars__func_0(((MR_Box) ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_57), ((MR_Box) (ll_backend__live_vars__NeedAcrossCall_25)), ((MR_Box) (ll_backend__live_vars__AllocData_17)), ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_27, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_28);
    }
#line 609 "live_vars.m"
    {
#line 609 "live_vars.m"
      ll_backend__live_vars__CodeModel_26 = hlds__code_model__goal_info_get_code_model_1_f_0(*ll_backend__live_vars__GoalInfo_15);
    }
#line 612 "live_vars.m"
#line 612 "live_vars.m"
    switch (ll_backend__live_vars__CodeModel_26) {
#line 612 "live_vars.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 612 "live_vars.m"
      case (MR_Integer) 0:
#line 611 "live_vars.m"
        *ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_30 = ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_29;
#line 612 "live_vars.m"
        break;
#line 612 "live_vars.m"
      case (MR_Integer) 2:
#line 616 "live_vars.m"
        {
#line 616 "live_vars.m"
          parse_tree__set_of_var__union_3_p_0(ll_backend__live_vars__TypeCtorInfo_58_58, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_29, ll_backend__live_vars__ForwardVars_23, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_30);
        }
#line 612 "live_vars.m"
        break;
#line 612 "live_vars.m"
      case (MR_Integer) 1:
#line 613 "live_vars.m"
        *ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_30 = ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_29;
#line 612 "live_vars.m"
        break;
#line 612 "live_vars.m"
    }
#line 622 "live_vars.m"
    {
#line 622 "live_vars.m"
      ll_backend__live_vars__par_stack_vars_accumulate_stack_vars_3_p_0(ll_backend__live_vars__ForwardVars_23, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_31, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_32);
#line 622 "live_vars.m"
      return;
    }
#line 582 "live_vars.m"
  }
#line 575 "live_vars.m"
}

#line 537 "live_vars.m"
static MR_Box MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_1(
#line 537 "live_vars.m"
  MR_Box ll_backend__live_vars__closure_arg,
#line 537 "live_vars.m"
  MR_Box ll_backend__live_vars__wrapper_arg_1)
#line 537 "live_vars.m"
{
#line 537 "live_vars.m"
  {
#line 537 "live_vars.m"
    MR_Box ll_backend__live_vars__wrapper_arg_2;
#line 537 "live_vars.m"
    MR_Box ll_backend__live_vars__closure = ll_backend__live_vars__closure_arg;
#line 537 "live_vars.m"
    MR_Word ll_backend__live_vars__conv0_HeadVar__2_2;

#line 537 "live_vars.m"
    {
#line 537 "live_vars.m"
      ll_backend__live_vars__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) ll_backend__live_vars__wrapper_arg_1));
    }
#line 537 "live_vars.m"
    ll_backend__live_vars__wrapper_arg_2 = ((MR_Box) (ll_backend__live_vars__conv0_HeadVar__2_2));
#line 537 "live_vars.m"
    return ll_backend__live_vars__wrapper_arg_2;
#line 537 "live_vars.m"
  }
#line 537 "live_vars.m"
}

#line 310 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_2(
#line 310 "live_vars.m"
  void * ll_backend__live_vars__env_ptr_arg)
#line 310 "live_vars.m"
{
#line 310 "live_vars.m"
  {
#line 310 "live_vars.m"
    struct ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0_s * ll_backend__live_vars__env_ptr = (struct ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0_s *) ll_backend__live_vars__env_ptr_arg;

#line 310 "live_vars.m"
    MR_builtin_longjmp((ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__commit_0, 1);
#line 310 "live_vars.m"
  }
#line 310 "live_vars.m"
}

#line 310 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_4(
#line 310 "live_vars.m"
  void * ll_backend__live_vars__env_ptr_arg)
#line 310 "live_vars.m"
{
#line 310 "live_vars.m"
  {
#line 310 "live_vars.m"
    struct ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0_s * ll_backend__live_vars__env_ptr = (struct ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0_s *) ll_backend__live_vars__env_ptr_arg;

#line 310 "live_vars.m"
    (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Disjunct_236 = ((MR_Word) (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__conv1_Disjunct_236);
#line 310 "live_vars.m"
    {
#line 310 "live_vars.m"
      ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_3(ll_backend__live_vars__env_ptr);
#line 310 "live_vars.m"
      return;
    }
#line 310 "live_vars.m"
  }
#line 310 "live_vars.m"
}

#line 310 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_3(
#line 310 "live_vars.m"
  void * ll_backend__live_vars__env_ptr_arg)
#line 310 "live_vars.m"
{
#line 310 "live_vars.m"
  {
#line 310 "live_vars.m"
    struct ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0_s * ll_backend__live_vars__env_ptr = (struct ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0_s *) ll_backend__live_vars__env_ptr_arg;

#line 310 "live_vars.m"
    {
#line 311 "live_vars.m"
      MR_Word ll_backend__live_vars__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Disjunct_236, (MR_Integer) 0)));
#line 314 "live_vars.m"
      MR_Word ll_backend__live_vars__V_46_46;

#line 311 "live_vars.m"
      (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__DisjunctGoalInfo_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Disjunct_236, (MR_Integer) 1)));
#line 312 "live_vars.m"
      {
#line 312 "live_vars.m"
        hlds__hlds_llds__goal_info_get_resume_point_2_p_0((ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__DisjunctGoalInfo_44, &(ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__DisjunctResumePoint_45);
      }
#line 314 "live_vars.m"
      (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded = ((MR_tag((MR_Word) (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__DisjunctResumePoint_45)) == (MR_mktag((MR_Integer) 1)));
#line 314 "live_vars.m"
      if ((ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded)
#line 314 "live_vars.m"
        {
#line 314 "live_vars.m"
          {
#line 314 "live_vars.m"
            ll_backend__live_vars__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__DisjunctResumePoint_45, (MR_Integer) 0)));
#line 314 "live_vars.m"
            (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Locs_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__DisjunctResumePoint_45, (MR_Integer) 1)));
#line 314 "live_vars.m"
          }
#line 310 "live_vars.m"
          {
#line 315 "live_vars.m"
            (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__V_218_218 = (MR_Integer) 1;
#line 315 "live_vars.m"
            {
#line 315 "live_vars.m"
              ll_backend__live_vars__resume_locs_include_stack_2_p_0((ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Locs_47, &(ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__V_337_337);
            }
#line 315 "live_vars.m"
            (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded = ((ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__V_218_218 == (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__V_337_337);
#line 315 "live_vars.m"
            if ((ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded)
#line 315 "live_vars.m"
              {
#line 315 "live_vars.m"
                ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_2(ll_backend__live_vars__env_ptr);
#line 315 "live_vars.m"
                return;
              }
#line 310 "live_vars.m"
          }
#line 314 "live_vars.m"
        }
#line 310 "live_vars.m"
    }
#line 310 "live_vars.m"
  }
#line 310 "live_vars.m"
}

#line 310 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_5(
#line 310 "live_vars.m"
  void * ll_backend__live_vars__env_ptr_arg)
#line 310 "live_vars.m"
{
#line 310 "live_vars.m"
  {
#line 310 "live_vars.m"
    struct ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0_s * ll_backend__live_vars__env_ptr = (struct ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0_s *) ll_backend__live_vars__env_ptr_arg;

#line 310 "live_vars.m"
    if (MR_builtin_setjmp((ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__commit_0) == 0)
#line 310 "live_vars.m"
      {
#line 310 "live_vars.m"
        {
#line 310 "live_vars.m"
          {
#line 310 "live_vars.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, &(ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__conv1_Disjunct_236, (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Goals_238, ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_4, ll_backend__live_vars__env_ptr);
          }
#line 310 "live_vars.m"
        }
#line 310 "live_vars.m"
        (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded = MR_FALSE;
#line 310 "live_vars.m"
      }
#line 310 "live_vars.m"
    else
#line 310 "live_vars.m"
      (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded = MR_TRUE;
#line 310 "live_vars.m"
  }
#line 310 "live_vars.m"
}

#line 229 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0(
#line 229 "live_vars.m"
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322,
#line 229 "live_vars.m"
  MR_Word ll_backend__live_vars__GoalExpr0_15,
#line 229 "live_vars.m"
  MR_Word * ll_backend__live_vars__GoalExpr_16,
#line 229 "live_vars.m"
  MR_Word ll_backend__live_vars__GoalInfo0_17,
#line 229 "live_vars.m"
  MR_Word * ll_backend__live_vars__GoalInfo_18,
#line 229 "live_vars.m"
  MR_Word ll_backend__live_vars__ResumeVars0_19,
#line 229 "live_vars.m"
  MR_Word ll_backend__live_vars__AllocData_20,
#line 229 "live_vars.m"
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142,
#line 229 "live_vars.m"
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143,
#line 229 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144,
#line 229 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_Liveness_145,
#line 229 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146,
#line 229 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147,
#line 229 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148,
#line 229 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149)
#line 229 "live_vars.m"
{
#line 229 "live_vars.m"
  {
#line 229 "live_vars.m"
    struct ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0_s ll_backend__live_vars__env;

#line 241 "live_vars.m"
#line 241 "live_vars.m"
    switch (MR_tag((MR_Word) ll_backend__live_vars__GoalExpr0_15)) {
#line 241 "live_vars.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 241 "live_vars.m"
      case (MR_Integer) 0:
#line 363 "live_vars.m"
        {
#line 363 "live_vars.m"
          MR_Word ll_backend__live_vars__SubGoal0_66 = (MR_Word) MR_body(((MR_Word) ll_backend__live_vars__GoalExpr0_15), (MR_Integer) 0);
#line 363 "live_vars.m"
          MR_Word ll_backend__live_vars__SubGoal_67;

#line 364 "live_vars.m"
          {
#line 364 "live_vars.m"
            ll_backend__live_vars__build_live_sets_in_goal_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322, ll_backend__live_vars__SubGoal0_66, &ll_backend__live_vars__SubGoal_67, ll_backend__live_vars__ResumeVars0_19, ll_backend__live_vars__AllocData_20, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144, ll_backend__live_vars__STATE_VARIABLE_Liveness_145, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149);
          }
#line 366 "live_vars.m"
          *ll_backend__live_vars__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ll_backend__live_vars__SubGoal_67);
#line 367 "live_vars.m"
          *ll_backend__live_vars__GoalInfo_18 = ll_backend__live_vars__GoalInfo0_17;
#line 363 "live_vars.m"
        }
#line 241 "live_vars.m"
        break;
#line 241 "live_vars.m"
      case (MR_Integer) 1:
#line 516 "live_vars.m"
        {
#line 516 "live_vars.m"
          MR_Word ll_backend__live_vars__Unification_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 3)));
#line 516 "live_vars.m"
          MR_Word ll_backend__live_vars__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 0)));
#line 516 "live_vars.m"
          MR_Word ll_backend__live_vars__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 1)));
#line 516 "live_vars.m"
          MR_Word ll_backend__live_vars__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 2)));
#line 516 "live_vars.m"
          MR_Word ll_backend__live_vars__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 4)));

#line 517 "live_vars.m"
          *ll_backend__live_vars__GoalExpr_16 = ll_backend__live_vars__GoalExpr0_15;
#line 518 "live_vars.m"
          *ll_backend__live_vars__GoalInfo_18 = ll_backend__live_vars__GoalInfo0_17;
#line 525 "live_vars.m"
#line 525 "live_vars.m"
          switch (MR_tag((MR_Word) ll_backend__live_vars__Unification_113)) {
#line 525 "live_vars.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 525 "live_vars.m"
            case (MR_Integer) 0:
#line 520 "live_vars.m"
              {
#line 520 "live_vars.m"
              }
#line 525 "live_vars.m"
              break;
#line 525 "live_vars.m"
            case (MR_Integer) 1:
#line 521 "live_vars.m"
              {
#line 521 "live_vars.m"
              }
#line 525 "live_vars.m"
              break;
#line 525 "live_vars.m"
            case (MR_Integer) 2:
#line 522 "live_vars.m"
              {
#line 522 "live_vars.m"
              }
#line 525 "live_vars.m"
              break;
#line 525 "live_vars.m"
            case (MR_Integer) 3:
#line 525 "live_vars.m"
#line 525 "live_vars.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__Unification_113, (MR_Integer) 0)))) {
#line 525 "live_vars.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 525 "live_vars.m"
                case (MR_Integer) 0:
#line 523 "live_vars.m"
                  {
#line 523 "live_vars.m"
                  }
#line 525 "live_vars.m"
                  break;
#line 525 "live_vars.m"
                case (MR_Integer) 1:
#line 526 "live_vars.m"
                  {
#line 527 "live_vars.m"
                    {
#line 527 "live_vars.m"
                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.live_vars", (MR_String) "predicate \140ll_backend.live_vars.build_live_sets_in_goal_expr\'/14", (MR_String) "complicated_unify");
#line 527 "live_vars.m"
                      return;
                    }
#line 526 "live_vars.m"
                  }
#line 525 "live_vars.m"
                  break;
#line 525 "live_vars.m"
              }
#line 525 "live_vars.m"
              break;
#line 525 "live_vars.m"
          }
#line 516 "live_vars.m"
          *ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143 = ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142;
#line 516 "live_vars.m"
          *ll_backend__live_vars__STATE_VARIABLE_Liveness_145 = ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144;
#line 516 "live_vars.m"
          *ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147 = ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146;
#line 516 "live_vars.m"
          *ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149 = ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148;
#line 516 "live_vars.m"
        }
#line 241 "live_vars.m"
        break;
#line 241 "live_vars.m"
      case (MR_Integer) 2:
#line 477 "live_vars.m"
        {
#line 477 "live_vars.m"
          MR_Word ll_backend__live_vars__PredId_99 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 0)));
#line 477 "live_vars.m"
          MR_Integer ll_backend__live_vars__ProcId_100 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 1)));
#line 477 "live_vars.m"
          MR_Word ll_backend__live_vars__Builtin_101 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 3)));
#line 477 "live_vars.m"
          MR_Word ll_backend__live_vars__CallerProcInfo_104;
#line 477 "live_vars.m"
          MR_Word ll_backend__live_vars__CalleePredProcId_106;
#line 477 "live_vars.m"
          MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_163_163;
#line 477 "live_vars.m"
          MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_165_165;
#line 477 "live_vars.m"
          MR_Word ll_backend__live_vars__ArgVars_267 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 2)));
#line 477 "live_vars.m"
          MR_Word ll_backend__live_vars__ProcInfo_268;
#line 477 "live_vars.m"
          MR_Word ll_backend__live_vars__VarTypes_269;
#line 477 "live_vars.m"
          MR_Word ll_backend__live_vars__ModuleInfo_270;
#line 477 "live_vars.m"
          MR_Word ll_backend__live_vars__OutVars_272;
#line 477 "live_vars.m"
          MR_Word ll_backend__live_vars__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 4)));
#line 477 "live_vars.m"
          MR_Word ll_backend__live_vars__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 5)));
#line 479 "live_vars.m"
          MR_Word ll_backend__live_vars__V_298_298;
#line 479 "live_vars.m"
          MR_Word ll_backend__live_vars__V_299_299;
#line 479 "live_vars.m"
          MR_Word ll_backend__live_vars__V_300_300;
#line 479 "live_vars.m"
          MR_ArrayPtr ll_backend__live_vars__V_301_301;
#line 482 "live_vars.m"
          MR_Word ll_backend__live_vars__V_105_105;
#line 483 "live_vars.m"
          MR_Word ll_backend__live_vars___InVars_265;
#line 483 "live_vars.m"
          MR_Word ll_backend__live_vars___UnusedVars_266;
#line 496 "live_vars.m"
          MR_Word ll_backend__live_vars__V_307_307;
#line 496 "live_vars.m"
          MR_Word ll_backend__live_vars__V_308_308;
#line 496 "live_vars.m"
          MR_Word ll_backend__live_vars__V_309_309;
#line 496 "live_vars.m"
          MR_Word ll_backend__live_vars__V_310_310;
#line 496 "live_vars.m"
          MR_ArrayPtr ll_backend__live_vars__V_311_311;
#line 497 "live_vars.m"
          MR_Word ll_backend__live_vars__V_338_338;
#line 497 "live_vars.m"
          MR_Integer ll_backend__live_vars__V_339_339;

#line 478 "live_vars.m"
          *ll_backend__live_vars__GoalExpr_16 = ll_backend__live_vars__GoalExpr0_15;
#line 479 "live_vars.m"
          ll_backend__live_vars__ModuleInfo_270 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 0)));
#line 479 "live_vars.m"
          ll_backend__live_vars__CallerProcInfo_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 1)));
#line 479 "live_vars.m"
          ll_backend__live_vars__V_298_298 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 2)));
#line 479 "live_vars.m"
          ll_backend__live_vars__V_299_299 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 3)));
#line 479 "live_vars.m"
          ll_backend__live_vars__V_300_300 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 4)));
#line 479 "live_vars.m"
          ll_backend__live_vars__V_301_301 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 5)));
#line 481 "live_vars.m"
          {
#line 481 "live_vars.m"
            hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__live_vars__CallerProcInfo_104, &ll_backend__live_vars__VarTypes_269);
          }
#line 482 "live_vars.m"
          {
#line 482 "live_vars.m"
            hlds__hlds_module__module_info_pred_proc_info_5_p_0(ll_backend__live_vars__ModuleInfo_270, ll_backend__live_vars__PredId_99, ll_backend__live_vars__ProcId_100, &ll_backend__live_vars__V_105_105, &ll_backend__live_vars__ProcInfo_268);
          }
#line 483 "live_vars.m"
          {
#line 483 "live_vars.m"
            hlds__arg_info__partition_proc_call_args_7_p_0(ll_backend__live_vars__ProcInfo_268, ll_backend__live_vars__VarTypes_269, ll_backend__live_vars__ModuleInfo_270, ll_backend__live_vars__ArgVars_267, &ll_backend__live_vars___InVars_265, &ll_backend__live_vars__OutVars_272, &ll_backend__live_vars___UnusedVars_266);
          }
#line 488 "live_vars.m"
#line 488 "live_vars.m"
          switch (ll_backend__live_vars__Builtin_101) {
#line 488 "live_vars.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 488 "live_vars.m"
            case (MR_Integer) 0:
#line 486 "live_vars.m"
              {
#line 487 "live_vars.m"
                *ll_backend__live_vars__GoalInfo_18 = ll_backend__live_vars__GoalInfo0_17;
#line 486 "live_vars.m"
                ll_backend__live_vars__STATE_VARIABLE_StackAlloc_163_163 = ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142;
#line 486 "live_vars.m"
                *ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147 = ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146;
#line 486 "live_vars.m"
                ll_backend__live_vars__STATE_VARIABLE_ParStackVars_165_165 = ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148;
#line 486 "live_vars.m"
              }
#line 488 "live_vars.m"
              break;
#line 488 "live_vars.m"
            case (MR_Integer) 2:
#line 488 "live_vars.m"
            case (MR_Integer) 1:
#line 491 "live_vars.m"
              {
#line 491 "live_vars.m"
                MR_Word ll_backend__live_vars__V_162_162;

#line 492 "live_vars.m"
                {
#line 492 "live_vars.m"
                  ll_backend__live_vars__V_162_162 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__live_vars__OutVars_272);
                }
#line 492 "live_vars.m"
                {
#line 492 "live_vars.m"
                  ll_backend__live_vars__build_live_sets_in_call_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322, ll_backend__live_vars__V_162_162, ll_backend__live_vars__GoalInfo0_17, ll_backend__live_vars__GoalInfo_18, ll_backend__live_vars__ResumeVars0_19, ll_backend__live_vars__AllocData_20, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142, &ll_backend__live_vars__STATE_VARIABLE_StackAlloc_163_163, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148, &ll_backend__live_vars__STATE_VARIABLE_ParStackVars_165_165);
                }
#line 491 "live_vars.m"
              }
#line 488 "live_vars.m"
              break;
#line 488 "live_vars.m"
          }
#line 496 "live_vars.m"
          ll_backend__live_vars__V_307_307 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 0)));
#line 496 "live_vars.m"
          ll_backend__live_vars__V_308_308 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 1)));
#line 496 "live_vars.m"
          ll_backend__live_vars__CalleePredProcId_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 2)));
#line 496 "live_vars.m"
          ll_backend__live_vars__V_309_309 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 3)));
#line 496 "live_vars.m"
          ll_backend__live_vars__V_310_310 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 4)));
#line 496 "live_vars.m"
          ll_backend__live_vars__V_311_311 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 5)));
#line 497 "live_vars.m"
          ll_backend__live_vars__V_338_338 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__CalleePredProcId_106, (MR_Integer) 0)));
#line 497 "live_vars.m"
          ll_backend__live_vars__V_339_339 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__CalleePredProcId_106, (MR_Integer) 1)));
#line 497 "live_vars.m"
          {
#line 497 "live_vars.m"
            (ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ll_backend__live_vars__PredId_99, ll_backend__live_vars__V_338_338);
          }
#line 497 "live_vars.m"
          if ((ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded)
#line 497 "live_vars.m"
            (ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded = (ll_backend__live_vars__ProcId_100 == ll_backend__live_vars__V_339_339);
#line 512 "live_vars.m"
          if ((ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded)
#line 503 "live_vars.m"
            {
#line 503 "live_vars.m"
              MR_Word ll_backend__live_vars__MaybeNeedLC_107;
#line 503 "live_vars.m"
              MR_Word ll_backend__live_vars__DelayDeathSet_108;

#line 502 "live_vars.m"
              {
#line 502 "live_vars.m"
                ll_backend__live_vars__par_stack_vars_recursive_call_4_p_0(&ll_backend__live_vars__MaybeNeedLC_107, &ll_backend__live_vars__DelayDeathSet_108, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_165_165, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149);
              }
#line 508 "live_vars.m"
              if ((ll_backend__live_vars__MaybeNeedLC_107 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 509 "live_vars.m"
                *ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143 = ll_backend__live_vars__STATE_VARIABLE_StackAlloc_163_163;
#line 508 "live_vars.m"
              else
#line 505 "live_vars.m"
                {
#line 505 "live_vars.m"
                  MR_Word ll_backend__live_vars__NeedLC_109 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__MaybeNeedLC_107, (MR_Integer) 0)));

#line 506 "live_vars.m"
                  {
#line 506 "live_vars.m"
                    ll_backend__live_vars__at_recursive_call_for_loop_control_4_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322, ll_backend__live_vars__NeedLC_109, ll_backend__live_vars__AllocData_20, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_163_163, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143);
                  }
#line 505 "live_vars.m"
                }
#line 511 "live_vars.m"
              {
#line 511 "live_vars.m"
                *ll_backend__live_vars__STATE_VARIABLE_Liveness_145 = parse_tree__set_of_var__difference_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144, ll_backend__live_vars__DelayDeathSet_108);
              }
#line 503 "live_vars.m"
            }
#line 512 "live_vars.m"
          else
#line 513 "live_vars.m"
            {
#line 513 "live_vars.m"
              *ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149 = ll_backend__live_vars__STATE_VARIABLE_ParStackVars_165_165;
#line 513 "live_vars.m"
              *ll_backend__live_vars__STATE_VARIABLE_Liveness_145 = ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144;
#line 513 "live_vars.m"
              *ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143 = ll_backend__live_vars__STATE_VARIABLE_StackAlloc_163_163;
#line 513 "live_vars.m"
            }
#line 477 "live_vars.m"
        }
#line 241 "live_vars.m"
        break;
#line 241 "live_vars.m"
      case (MR_Integer) 3:
#line 241 "live_vars.m"
#line 241 "live_vars.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 0)))) {
#line 241 "live_vars.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 241 "live_vars.m"
          case (MR_Integer) 0:
#line 456 "live_vars.m"
            {
#line 456 "live_vars.m"
              MR_Word ll_backend__live_vars__GenericCall_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 1)));
#line 456 "live_vars.m"
              MR_Word ll_backend__live_vars__ArgVars_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 2)));
#line 456 "live_vars.m"
              MR_Word ll_backend__live_vars__Modes_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 3)));
#line 456 "live_vars.m"
              MR_Word ll_backend__live_vars__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 4)));
#line 456 "live_vars.m"
              MR_Word ll_backend__live_vars__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 5)));

#line 457 "live_vars.m"
              *ll_backend__live_vars__GoalExpr_16 = ll_backend__live_vars__GoalExpr0_15;
#line 461 "live_vars.m"
#line 461 "live_vars.m"
              switch (MR_tag((MR_Word) ll_backend__live_vars__GenericCall_77)) {
#line 461 "live_vars.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 461 "live_vars.m"
                case (MR_Integer) 0:
#line 461 "live_vars.m"
                case (MR_Integer) 1:
#line 461 "live_vars.m"
                case (MR_Integer) 2:
#line 465 "live_vars.m"
                  {
#line 465 "live_vars.m"
                    MR_Word ll_backend__live_vars__ProcInfo_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 1)));
#line 465 "live_vars.m"
                    MR_Word ll_backend__live_vars__VarTypes_93;
#line 465 "live_vars.m"
                    MR_Word ll_backend__live_vars__Types_94;
#line 465 "live_vars.m"
                    MR_Word ll_backend__live_vars__ModuleInfo_95;
#line 465 "live_vars.m"
                    MR_Word ll_backend__live_vars__OutVars_97;
#line 465 "live_vars.m"
                    MR_Word ll_backend__live_vars__V_169_169;
#line 466 "live_vars.m"
                    MR_Word ll_backend__live_vars__V_287_287 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 0)));
#line 466 "live_vars.m"
                    MR_Word ll_backend__live_vars__V_288_288 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 2)));
#line 466 "live_vars.m"
                    MR_Word ll_backend__live_vars__V_289_289 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 3)));
#line 466 "live_vars.m"
                    MR_Word ll_backend__live_vars__V_290_290 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 4)));
#line 466 "live_vars.m"
                    MR_ArrayPtr ll_backend__live_vars__V_291_291 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 5)));
#line 469 "live_vars.m"
                    MR_Word ll_backend__live_vars__V_292_292;
#line 469 "live_vars.m"
                    MR_Word ll_backend__live_vars__V_293_293;
#line 469 "live_vars.m"
                    MR_Word ll_backend__live_vars__V_294_294;
#line 469 "live_vars.m"
                    MR_Word ll_backend__live_vars__V_295_295;
#line 469 "live_vars.m"
                    MR_ArrayPtr ll_backend__live_vars__V_296_296;
#line 470 "live_vars.m"
                    MR_Word ll_backend__live_vars___InVars_96;
#line 470 "live_vars.m"
                    MR_Word ll_backend__live_vars___UnusedVars_98;

#line 467 "live_vars.m"
                    {
#line 467 "live_vars.m"
                      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__live_vars__ProcInfo_92, &ll_backend__live_vars__VarTypes_93);
                    }
#line 468 "live_vars.m"
                    {
#line 468 "live_vars.m"
                      hlds__vartypes__lookup_var_types_3_p_0(ll_backend__live_vars__VarTypes_93, ll_backend__live_vars__ArgVars_78, &ll_backend__live_vars__Types_94);
                    }
#line 469 "live_vars.m"
                    ll_backend__live_vars__ModuleInfo_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 0)));
#line 469 "live_vars.m"
                    ll_backend__live_vars__V_292_292 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 1)));
#line 469 "live_vars.m"
                    ll_backend__live_vars__V_293_293 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 2)));
#line 469 "live_vars.m"
                    ll_backend__live_vars__V_294_294 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 3)));
#line 469 "live_vars.m"
                    ll_backend__live_vars__V_295_295 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 4)));
#line 469 "live_vars.m"
                    ll_backend__live_vars__V_296_296 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 5)));
#line 470 "live_vars.m"
                    {
#line 470 "live_vars.m"
                      hlds__arg_info__partition_generic_call_args_7_p_0(ll_backend__live_vars__ModuleInfo_95, ll_backend__live_vars__ArgVars_78, ll_backend__live_vars__Types_94, ll_backend__live_vars__Modes_79, &ll_backend__live_vars___InVars_96, &ll_backend__live_vars__OutVars_97, &ll_backend__live_vars___UnusedVars_98);
                    }
#line 472 "live_vars.m"
                    {
#line 472 "live_vars.m"
                      ll_backend__live_vars__V_169_169 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__live_vars__OutVars_97);
                    }
#line 472 "live_vars.m"
                    {
#line 472 "live_vars.m"
                      ll_backend__live_vars__build_live_sets_in_call_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322, ll_backend__live_vars__V_169_169, ll_backend__live_vars__GoalInfo0_17, ll_backend__live_vars__GoalInfo_18, ll_backend__live_vars__ResumeVars0_19, ll_backend__live_vars__AllocData_20, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149);
                    }
#line 465 "live_vars.m"
                  }
#line 461 "live_vars.m"
                  break;
#line 461 "live_vars.m"
                case (MR_Integer) 3:
#line 459 "live_vars.m"
                  {
#line 460 "live_vars.m"
                    *ll_backend__live_vars__GoalInfo_18 = ll_backend__live_vars__GoalInfo0_17;
#line 459 "live_vars.m"
                    *ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143 = ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142;
#line 459 "live_vars.m"
                    *ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147 = ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146;
#line 459 "live_vars.m"
                    *ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149 = ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148;
#line 459 "live_vars.m"
                  }
#line 461 "live_vars.m"
                  break;
#line 461 "live_vars.m"
              }
#line 456 "live_vars.m"
              *ll_backend__live_vars__STATE_VARIABLE_Liveness_145 = ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144;
#line 456 "live_vars.m"
            }
#line 241 "live_vars.m"
            break;
#line 241 "live_vars.m"
          case (MR_Integer) 1:
#line 531 "live_vars.m"
            {
#line 531 "live_vars.m"
              MR_Word ll_backend__live_vars__Attributes_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 1)));
#line 531 "live_vars.m"
              MR_Word ll_backend__live_vars__Args_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 4)));
#line 531 "live_vars.m"
              MR_Word ll_backend__live_vars__CodeModel_276;
#line 531 "live_vars.m"
              MR_Word ll_backend__live_vars__ArgVars_277;
#line 531 "live_vars.m"
              MR_Word ll_backend__live_vars__ProcInfo_278;
#line 531 "live_vars.m"
              MR_Word ll_backend__live_vars__VarTypes_279;
#line 531 "live_vars.m"
              MR_Word ll_backend__live_vars__ModuleInfo_280;
#line 531 "live_vars.m"
              MR_Word ll_backend__live_vars__OutVars_282;
#line 531 "live_vars.m"
              MR_Word ll_backend__live_vars__PredId_284 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 2)));
#line 531 "live_vars.m"
              MR_Integer ll_backend__live_vars__ProcId_285 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 3)));
#line 531 "live_vars.m"
              MR_Word ll_backend__live_vars__CallerProcInfo_286;
#line 530 "live_vars.m"
              MR_Word ll_backend__live_vars__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 5)));
#line 530 "live_vars.m"
              MR_Word ll_backend__live_vars__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 6)));
#line 530 "live_vars.m"
              MR_Word ll_backend__live_vars__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 7)));
#line 533 "live_vars.m"
              MR_Word ll_backend__live_vars__V_313_313;
#line 533 "live_vars.m"
              MR_Word ll_backend__live_vars__V_314_314;
#line 533 "live_vars.m"
              MR_Word ll_backend__live_vars__V_315_315;
#line 533 "live_vars.m"
              MR_ArrayPtr ll_backend__live_vars__V_316_316;
#line 536 "live_vars.m"
              MR_Word ll_backend__live_vars__V_140_140;
#line 538 "live_vars.m"
              MR_Word ll_backend__live_vars___InVars_274;
#line 538 "live_vars.m"
              MR_Word ll_backend__live_vars___UnusedVars_275;
#line 547 "live_vars.m"
              MR_Word ll_backend__live_vars__V_154_154;

#line 532 "live_vars.m"
              *ll_backend__live_vars__GoalExpr_16 = ll_backend__live_vars__GoalExpr0_15;
#line 533 "live_vars.m"
              ll_backend__live_vars__ModuleInfo_280 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 0)));
#line 533 "live_vars.m"
              ll_backend__live_vars__CallerProcInfo_286 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 1)));
#line 533 "live_vars.m"
              ll_backend__live_vars__V_313_313 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 2)));
#line 533 "live_vars.m"
              ll_backend__live_vars__V_314_314 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 3)));
#line 533 "live_vars.m"
              ll_backend__live_vars__V_315_315 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 4)));
#line 533 "live_vars.m"
              ll_backend__live_vars__V_316_316 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 5)));
#line 535 "live_vars.m"
              {
#line 535 "live_vars.m"
                hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__live_vars__CallerProcInfo_286, &ll_backend__live_vars__VarTypes_279);
              }
#line 536 "live_vars.m"
              {
#line 536 "live_vars.m"
                hlds__hlds_module__module_info_pred_proc_info_5_p_0(ll_backend__live_vars__ModuleInfo_280, ll_backend__live_vars__PredId_284, ll_backend__live_vars__ProcId_285, &ll_backend__live_vars__V_140_140, &ll_backend__live_vars__ProcInfo_278);
              }
#line 537 "live_vars.m"
              {
#line 537 "live_vars.m"
                ll_backend__live_vars__ArgVars_277 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, (MR_Word) &ll_backend__live_vars_scalar_common_1[0], (MR_Word) &ll_backend__live_vars_scalar_common_2[3], ll_backend__live_vars__Args_136);
              }
#line 538 "live_vars.m"
              {
#line 538 "live_vars.m"
                hlds__arg_info__partition_proc_call_args_7_p_0(ll_backend__live_vars__ProcInfo_278, ll_backend__live_vars__VarTypes_279, ll_backend__live_vars__ModuleInfo_280, ll_backend__live_vars__ArgVars_277, &ll_backend__live_vars___InVars_274, &ll_backend__live_vars__OutVars_282, &ll_backend__live_vars___UnusedVars_275);
              }
#line 540 "live_vars.m"
              {
#line 540 "live_vars.m"
                ll_backend__live_vars__CodeModel_276 = hlds__code_model__goal_info_get_code_model_1_f_0(ll_backend__live_vars__GoalInfo0_17);
              }
#line 547 "live_vars.m"
              (ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded = (ll_backend__live_vars__CodeModel_276 == (MR_Integer) 2);
#line 547 "live_vars.m"
              (ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded = !((ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded);
#line 547 "live_vars.m"
              if ((ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded)
#line 547 "live_vars.m"
                {
#line 548 "live_vars.m"
                  {
#line 548 "live_vars.m"
                    ll_backend__live_vars__V_154_154 = parse_tree__prog_data__get_may_call_mercury_1_f_0(ll_backend__live_vars__Attributes_135);
                  }
#line 548 "live_vars.m"
                  (ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded = (ll_backend__live_vars__V_154_154 == (MR_Integer) 1);
#line 547 "live_vars.m"
                }
#line 551 "live_vars.m"
              if ((ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded)
#line 550 "live_vars.m"
                {
#line 550 "live_vars.m"
                  *ll_backend__live_vars__GoalInfo_18 = ll_backend__live_vars__GoalInfo0_17;
#line 550 "live_vars.m"
                  *ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149 = ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148;
#line 550 "live_vars.m"
                  *ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147 = ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146;
#line 550 "live_vars.m"
                  *ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143 = ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142;
#line 550 "live_vars.m"
                }
#line 551 "live_vars.m"
              else
#line 557 "live_vars.m"
                {
#line 557 "live_vars.m"
                  MR_Word ll_backend__live_vars__V_155_155;

#line 557 "live_vars.m"
                  {
#line 557 "live_vars.m"
                    ll_backend__live_vars__V_155_155 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__live_vars__OutVars_282);
                  }
#line 557 "live_vars.m"
                  {
#line 557 "live_vars.m"
                    ll_backend__live_vars__build_live_sets_in_call_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322, ll_backend__live_vars__V_155_155, ll_backend__live_vars__GoalInfo0_17, ll_backend__live_vars__GoalInfo_18, ll_backend__live_vars__ResumeVars0_19, ll_backend__live_vars__AllocData_20, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149);
                  }
#line 557 "live_vars.m"
                }
#line 531 "live_vars.m"
              *ll_backend__live_vars__STATE_VARIABLE_Liveness_145 = ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144;
#line 531 "live_vars.m"
            }
#line 241 "live_vars.m"
            break;
#line 241 "live_vars.m"
          case (MR_Integer) 2:
#line 241 "live_vars.m"
            {
#line 241 "live_vars.m"
              MR_Word ll_backend__live_vars__ConjType_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 1)));
#line 241 "live_vars.m"
              MR_Word ll_backend__live_vars__Goals0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 2)));
#line 241 "live_vars.m"
              MR_Word ll_backend__live_vars__Goals_27;

#line 247 "live_vars.m"
#line 247 "live_vars.m"
              switch (ll_backend__live_vars__ConjType_25) {
#line 247 "live_vars.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 247 "live_vars.m"
                case (MR_Integer) 1:
#line 248 "live_vars.m"
                  {
#line 248 "live_vars.m"
                    MR_Word ll_backend__live_vars__TypeCtorInfo_323_323;
#line 248 "live_vars.m"
                    MR_Word ll_backend__live_vars__NonLocals_28;
#line 248 "live_vars.m"
                    MR_Word ll_backend__live_vars__LiveSet_29;
#line 248 "live_vars.m"
                    MR_Word ll_backend__live_vars__OuterNonLocals_30;
#line 248 "live_vars.m"
                    MR_Word ll_backend__live_vars__InnerStackVars_32;
#line 248 "live_vars.m"
                    MR_Word ll_backend__live_vars__InnerNonLocals_33;
#line 248 "live_vars.m"
                    MR_Word ll_backend__live_vars__NeedInParConj_34;
#line 248 "live_vars.m"
                    MR_Word ll_backend__live_vars__V_220_220;
#line 248 "live_vars.m"
                    MR_Word ll_backend__live_vars__V_221_221;
#line 248 "live_vars.m"
                    MR_Word ll_backend__live_vars__V_222_222;
#line 248 "live_vars.m"
                    MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_224_224;
#line 248 "live_vars.m"
                    MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_225_225;
#line 248 "live_vars.m"
                    MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_228_228;
#line 248 "live_vars.m"
                    MR_Word ll_backend__live_vars__V_229_229;

#line 258 "live_vars.m"
                    {
#line 258 "live_vars.m"
                      ll_backend__live_vars__NonLocals_28 = hlds__hlds_goal__goal_info_get_code_gen_nonlocals_1_f_0(ll_backend__live_vars__GoalInfo0_17);
                    }
#line 5247 "ll_backend.live_vars.c"
                    ll_backend__live_vars__TypeCtorInfo_323_323 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 260 "live_vars.m"
                    {
#line 260 "live_vars.m"
                      ll_backend__live_vars__V_222_222 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 260 "live_vars.m"
                      MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_222_222, 0) = ((MR_Box) (ll_backend__live_vars__ResumeVars0_19));
#line 260 "live_vars.m"
                      MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_222_222, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 260 "live_vars.m"
                    }
#line 260 "live_vars.m"
                    {
#line 260 "live_vars.m"
                      ll_backend__live_vars__V_221_221 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 260 "live_vars.m"
                      MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_221_221, 0) = ((MR_Box) (ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144));
#line 260 "live_vars.m"
                      MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_221_221, 1) = ((MR_Box) (ll_backend__live_vars__V_222_222));
#line 260 "live_vars.m"
                    }
#line 260 "live_vars.m"
                    {
#line 260 "live_vars.m"
                      ll_backend__live_vars__V_220_220 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 260 "live_vars.m"
                      MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_220_220, 0) = ((MR_Box) (ll_backend__live_vars__NonLocals_28));
#line 260 "live_vars.m"
                      MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_220_220, 1) = ((MR_Box) (ll_backend__live_vars__V_221_221));
#line 260 "live_vars.m"
                    }
#line 260 "live_vars.m"
                    {
#line 260 "live_vars.m"
                      ll_backend__live_vars__LiveSet_29 = parse_tree__set_of_var__union_list_1_f_0(ll_backend__live_vars__TypeCtorInfo_323_323, ll_backend__live_vars__V_220_220);
                    }
#line 262 "live_vars.m"
                    {
#line 262 "live_vars.m"
                      ll_backend__live_vars__par_stack_vars_get_nonlocals_2_p_0(ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148, &ll_backend__live_vars__OuterNonLocals_30);
                    }
#line 265 "live_vars.m"
                    {
#line 265 "live_vars.m"
                      ll_backend__live_vars__par_stack_vars_start_parallel_conjunction_3_p_0(ll_backend__live_vars__LiveSet_29, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148, &ll_backend__live_vars__STATE_VARIABLE_ParStackVars_224_224);
                    }
#line 266 "live_vars.m"
                    {
#line 266 "live_vars.m"
                      ll_backend__live_vars__build_live_sets_in_par_conj_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322, ll_backend__live_vars__Goals0_26, &ll_backend__live_vars__Goals_27, ll_backend__live_vars__ResumeVars0_19, ll_backend__live_vars__AllocData_20, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142, &ll_backend__live_vars__STATE_VARIABLE_StackAlloc_225_225, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144, ll_backend__live_vars__STATE_VARIABLE_Liveness_145, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_224_224, &ll_backend__live_vars__STATE_VARIABLE_ParStackVars_228_228);
                    }
#line 269 "live_vars.m"
                    {
#line 269 "live_vars.m"
                      ll_backend__live_vars__par_stack_vars_get_stackvars_2_p_0(ll_backend__live_vars__STATE_VARIABLE_ParStackVars_228_228, &ll_backend__live_vars__InnerStackVars_32);
                    }
#line 276 "live_vars.m"
                    {
#line 276 "live_vars.m"
                      ll_backend__live_vars__InnerNonLocals_33 = parse_tree__set_of_var__union_2_f_0(ll_backend__live_vars__TypeCtorInfo_323_323, ll_backend__live_vars__LiveSet_29, ll_backend__live_vars__OuterNonLocals_30);
                    }
#line 277 "live_vars.m"
                    {
#line 277 "live_vars.m"
                      ll_backend__live_vars__V_229_229 = parse_tree__set_of_var__union_2_f_0(ll_backend__live_vars__TypeCtorInfo_323_323, ll_backend__live_vars__InnerNonLocals_33, ll_backend__live_vars__InnerStackVars_32);
                    }
#line 277 "live_vars.m"
                    ll_backend__live_vars__NeedInParConj_34 = (MR_Word) ll_backend__live_vars__V_229_229;
#line 279 "live_vars.m"
                    {
#line 279 "live_vars.m"
                      ll_backend__live_vars__record_par_conj_6_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322, ll_backend__live_vars__NeedInParConj_34, ll_backend__live_vars__AllocData_20, ll_backend__live_vars__GoalInfo0_17, ll_backend__live_vars__GoalInfo_18, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_225_225, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143);
                    }
#line 282 "live_vars.m"
                    {
#line 282 "live_vars.m"
                      ll_backend__live_vars__par_stack_vars_end_parallel_conjunction_4_p_0(ll_backend__live_vars__LiveSet_29, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_228_228, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149);
                    }
#line 248 "live_vars.m"
                  }
#line 247 "live_vars.m"
                  break;
#line 247 "live_vars.m"
                case (MR_Integer) 0:
#line 243 "live_vars.m"
                  {
#line 244 "live_vars.m"
                    *ll_backend__live_vars__GoalInfo_18 = ll_backend__live_vars__GoalInfo0_17;
#line 245 "live_vars.m"
                    {
#line 245 "live_vars.m"
                      ll_backend__live_vars__build_live_sets_in_conj_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322, ll_backend__live_vars__Goals0_26, &ll_backend__live_vars__Goals_27, ll_backend__live_vars__ResumeVars0_19, ll_backend__live_vars__AllocData_20, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144, ll_backend__live_vars__STATE_VARIABLE_Liveness_145, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149);
                    }
#line 243 "live_vars.m"
                  }
#line 247 "live_vars.m"
                  break;
#line 247 "live_vars.m"
              }
#line 285 "live_vars.m"
              {
#line 285 "live_vars.m"
                MR_Word base;
#line 285 "live_vars.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 285 "live_vars.m"
                *ll_backend__live_vars__GoalExpr_16 = base;
#line 285 "live_vars.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 285 "live_vars.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__live_vars__ConjType_25));
#line 285 "live_vars.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__live_vars__Goals_27));
#line 285 "live_vars.m"
              }
#line 241 "live_vars.m"
            }
#line 241 "live_vars.m"
            break;
#line 241 "live_vars.m"
          case (MR_Integer) 3:
#line 287 "live_vars.m"
            {
#line 287 "live_vars.m"
              MR_Word ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_215_215;
#line 287 "live_vars.m"
              MR_Word ll_backend__live_vars__Goals0_237 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 1)));

#line 288 "live_vars.m"
              {
#line 288 "live_vars.m"
                ll_backend__live_vars__build_live_sets_in_disj_13_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322, ll_backend__live_vars__Goals0_237, &(ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Goals_238, ll_backend__live_vars__GoalInfo0_17, ll_backend__live_vars__ResumeVars0_19, ll_backend__live_vars__AllocData_20, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144, ll_backend__live_vars__STATE_VARIABLE_Liveness_145, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146, &ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_215_215, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149);
              }
#line 332 "live_vars.m"
              if (((ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Goals_238 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 333 "live_vars.m"
                *ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147 = ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_215_215;
#line 332 "live_vars.m"
              else
#line 292 "live_vars.m"
                {
#line 292 "live_vars.m"
                  MR_Word ll_backend__live_vars__FirstGoal_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Goals_238, (MR_Integer) 0)));
#line 292 "live_vars.m"
                  MR_Word ll_backend__live_vars__FirstGoalInfo_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__FirstGoal_35, (MR_Integer) 1)));
#line 292 "live_vars.m"
                  MR_Word ll_backend__live_vars__ResumePoint_39;
#line 292 "live_vars.m"
                  MR_Word ll_backend__live_vars__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Goals_238, (MR_Integer) 1)));
#line 293 "live_vars.m"
                  MR_Word ll_backend__live_vars__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__FirstGoal_35, (MR_Integer) 0)));

#line 294 "live_vars.m"
                  {
#line 294 "live_vars.m"
                    hlds__hlds_llds__goal_info_get_resume_point_2_p_0(ll_backend__live_vars__FirstGoalInfo_38, &ll_backend__live_vars__ResumePoint_39);
                  }
#line 323 "live_vars.m"
                  if ((ll_backend__live_vars__ResumePoint_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 330 "live_vars.m"
                    *ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147 = ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_215_215;
#line 323 "live_vars.m"
                  else
#line 296 "live_vars.m"
                    {
#line 296 "live_vars.m"
                      MR_Word ll_backend__live_vars__ResumeVars_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__ResumePoint_39, (MR_Integer) 0)));
#line 296 "live_vars.m"
                      MR_Word ll_backend__live_vars___Locs_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__ResumePoint_39, (MR_Integer) 1)));
#line 308 "live_vars.m"
                      MR_Word ll_backend__live_vars__V_217_217;

#line 308 "live_vars.m"
                      {
#line 308 "live_vars.m"
                        ll_backend__live_vars__V_217_217 = hlds__code_model__goal_info_get_code_model_1_f_0(ll_backend__live_vars__GoalInfo0_17);
                      }
#line 308 "live_vars.m"
                      (ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded = (ll_backend__live_vars__V_217_217 == (MR_Integer) 2);
#line 308 "live_vars.m"
                      if ((ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded)
#line 310 "live_vars.m"
                        {
#line 310 "live_vars.m"
                          ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_5(&ll_backend__live_vars__env);
                        }
#line 320 "live_vars.m"
                      if ((ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded)
#line 318 "live_vars.m"
                        {
#line 318 "live_vars.m"
                          {
#line 318 "live_vars.m"
                            parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_215_215, ll_backend__live_vars__ResumeVars_40, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147);
                          }
#line 318 "live_vars.m"
                        }
#line 320 "live_vars.m"
                      else
#line 320 "live_vars.m"
                        *ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147 = ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_215_215;
#line 296 "live_vars.m"
                    }
#line 292 "live_vars.m"
                }
#line 335 "live_vars.m"
              {
#line 335 "live_vars.m"
                MR_Word base;
#line 335 "live_vars.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 335 "live_vars.m"
                *ll_backend__live_vars__GoalExpr_16 = base;
#line 335 "live_vars.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 335 "live_vars.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Goals_238));
#line 335 "live_vars.m"
              }
#line 336 "live_vars.m"
              *ll_backend__live_vars__GoalInfo_18 = ll_backend__live_vars__GoalInfo0_17;
#line 287 "live_vars.m"
            }
#line 241 "live_vars.m"
            break;
#line 241 "live_vars.m"
          case (MR_Integer) 4:
#line 338 "live_vars.m"
            {
#line 338 "live_vars.m"
              MR_Word ll_backend__live_vars__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 1)));
#line 338 "live_vars.m"
              MR_Word ll_backend__live_vars__CanFail_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 2)));
#line 338 "live_vars.m"
              MR_Word ll_backend__live_vars__Cases0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 3)));
#line 338 "live_vars.m"
              MR_Word ll_backend__live_vars__Cases_51;

#line 339 "live_vars.m"
              {
#line 339 "live_vars.m"
                ll_backend__live_vars__build_live_sets_in_cases_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322, ll_backend__live_vars__Cases0_50, &ll_backend__live_vars__Cases_51, ll_backend__live_vars__ResumeVars0_19, ll_backend__live_vars__AllocData_20, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144, ll_backend__live_vars__STATE_VARIABLE_Liveness_145, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149);
              }
#line 341 "live_vars.m"
              {
#line 341 "live_vars.m"
                MR_Word base;
#line 341 "live_vars.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 341 "live_vars.m"
                *ll_backend__live_vars__GoalExpr_16 = base;
#line 341 "live_vars.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 341 "live_vars.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__live_vars__Var_48));
#line 341 "live_vars.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__live_vars__CanFail_49));
#line 341 "live_vars.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__live_vars__Cases_51));
#line 341 "live_vars.m"
              }
#line 342 "live_vars.m"
              *ll_backend__live_vars__GoalInfo_18 = ll_backend__live_vars__GoalInfo0_17;
#line 338 "live_vars.m"
            }
#line 241 "live_vars.m"
            break;
#line 241 "live_vars.m"
          case (MR_Integer) 5:
#line 369 "live_vars.m"
            {
#line 369 "live_vars.m"
              MR_Word ll_backend__live_vars__Reason_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 1)));
#line 369 "live_vars.m"
              MR_Word ll_backend__live_vars__SubGoal0_263 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 2)));
#line 383 "live_vars.m"
              MR_Word ll_backend__live_vars__TermVar_69;
#line 370 "live_vars.m"
              MR_Word ll_backend__live_vars__V_173_173;

#line 370 "live_vars.m"
              (ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded = ((((MR_tag((MR_Word) ll_backend__live_vars__Reason_68)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__Reason_68, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 370 "live_vars.m"
              if ((ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded)
#line 370 "live_vars.m"
                {
#line 370 "live_vars.m"
                  ll_backend__live_vars__TermVar_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__Reason_68, (MR_Integer) 1)));
#line 370 "live_vars.m"
                  ll_backend__live_vars__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__Reason_68, (MR_Integer) 2)));
#line 370 "live_vars.m"
                  (ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded = (ll_backend__live_vars__V_173_173 == (MR_Integer) 1);
#line 370 "live_vars.m"
                }
#line 383 "live_vars.m"
              if ((ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded)
#line 374 "live_vars.m"
                {
#line 374 "live_vars.m"
                  *ll_backend__live_vars__GoalExpr_16 = ll_backend__live_vars__GoalExpr0_15;
#line 375 "live_vars.m"
                  *ll_backend__live_vars__GoalInfo_18 = ll_backend__live_vars__GoalInfo0_17;
#line 379 "live_vars.m"
                  {
#line 379 "live_vars.m"
                    parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__live_vars__TermVar_69, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144, ll_backend__live_vars__STATE_VARIABLE_Liveness_145);
                  }
#line 374 "live_vars.m"
                  *ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149 = ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148;
#line 374 "live_vars.m"
                  *ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147 = ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146;
#line 374 "live_vars.m"
                  *ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143 = ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142;
#line 374 "live_vars.m"
                }
#line 383 "live_vars.m"
              else
#line 435 "live_vars.m"
                {
#line 435 "live_vars.m"
                  MR_Word ll_backend__live_vars__LCVar_70;
#line 435 "live_vars.m"
                  MR_Word ll_backend__live_vars__LCSVar_71;
#line 383 "live_vars.m"
                  MR_Word ll_backend__live_vars__V_72_72;

#line 383 "live_vars.m"
                  (ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded = ((((MR_tag((MR_Word) ll_backend__live_vars__Reason_68)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__Reason_68, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 383 "live_vars.m"
                  if ((ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded)
#line 383 "live_vars.m"
                    {
#line 383 "live_vars.m"
                      ll_backend__live_vars__LCVar_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__Reason_68, (MR_Integer) 1)));
#line 383 "live_vars.m"
                      ll_backend__live_vars__LCSVar_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__Reason_68, (MR_Integer) 2)));
#line 383 "live_vars.m"
                      ll_backend__live_vars__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__Reason_68, (MR_Integer) 3)));
#line 395 "live_vars.m"
                      {
#line 395 "live_vars.m"
                        MR_Word ll_backend__live_vars__TypeCtorInfo_328_328;
#line 395 "live_vars.m"
                        MR_Word ll_backend__live_vars__LCStackVars_73;
#line 395 "live_vars.m"
                        MR_Word ll_backend__live_vars__NeedInParConjSet_74;
#line 395 "live_vars.m"
                        MR_Word ll_backend__live_vars__WouldDieSet_75;
#line 395 "live_vars.m"
                        MR_Word ll_backend__live_vars__V_175_175;
#line 395 "live_vars.m"
                        MR_Word ll_backend__live_vars__V_176_176;
#line 395 "live_vars.m"
                        MR_Word ll_backend__live_vars__V_177_177;
#line 395 "live_vars.m"
                        MR_Word ll_backend__live_vars__V_178_178;
#line 395 "live_vars.m"
                        MR_Word ll_backend__live_vars__V_180_180;
#line 395 "live_vars.m"
                        MR_Word ll_backend__live_vars__V_181_181;
#line 395 "live_vars.m"
                        MR_Word ll_backend__live_vars__V_182_182;
#line 395 "live_vars.m"
                        MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_184_184;
#line 395 "live_vars.m"
                        MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_185_185;
#line 395 "live_vars.m"
                        MR_Word ll_backend__live_vars__STATE_VARIABLE_Liveness_186_186;
#line 395 "live_vars.m"
                        MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_188_188;
#line 395 "live_vars.m"
                        MR_Word ll_backend__live_vars__NonLocals_239;
#line 395 "live_vars.m"
                        MR_Word ll_backend__live_vars__InnerStackVars_241;
#line 395 "live_vars.m"
                        MR_Word ll_backend__live_vars__NeedInParConj_242;
#line 395 "live_vars.m"
                        MR_Word ll_backend__live_vars__SubGoal_243;

#line 395 "live_vars.m"
                        {
#line 395 "live_vars.m"
                          ll_backend__live_vars__NonLocals_239 = hlds__hlds_goal__goal_info_get_code_gen_nonlocals_1_f_0(ll_backend__live_vars__GoalInfo0_17);
                        }
#line 5632 "ll_backend.live_vars.c"
                        ll_backend__live_vars__TypeCtorInfo_328_328 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 410 "live_vars.m"
                        {
#line 410 "live_vars.m"
                          ll_backend__live_vars__V_178_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 410 "live_vars.m"
                          MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_178_178, 0) = ((MR_Box) (ll_backend__live_vars__ResumeVars0_19));
#line 410 "live_vars.m"
                          MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_178_178, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 410 "live_vars.m"
                        }
#line 410 "live_vars.m"
                        {
#line 410 "live_vars.m"
                          ll_backend__live_vars__V_177_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 410 "live_vars.m"
                          MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_177_177, 0) = ((MR_Box) (ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144));
#line 410 "live_vars.m"
                          MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_177_177, 1) = ((MR_Box) (ll_backend__live_vars__V_178_178));
#line 410 "live_vars.m"
                        }
#line 410 "live_vars.m"
                        {
#line 410 "live_vars.m"
                          ll_backend__live_vars__V_176_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 410 "live_vars.m"
                          MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_176_176, 0) = ((MR_Box) (ll_backend__live_vars__NonLocals_239));
#line 410 "live_vars.m"
                          MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_176_176, 1) = ((MR_Box) (ll_backend__live_vars__V_177_177));
#line 410 "live_vars.m"
                        }
#line 410 "live_vars.m"
                        {
#line 410 "live_vars.m"
                          ll_backend__live_vars__V_175_175 = parse_tree__set_of_var__union_list_1_f_0(ll_backend__live_vars__TypeCtorInfo_328_328, ll_backend__live_vars__V_176_176);
                        }
#line 411 "live_vars.m"
                        {
#line 411 "live_vars.m"
                          ll_backend__live_vars__V_182_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 411 "live_vars.m"
                          MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_182_182, 0) = ((MR_Box) (ll_backend__live_vars__LCSVar_71));
#line 411 "live_vars.m"
                          MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_182_182, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 411 "live_vars.m"
                        }
#line 411 "live_vars.m"
                        {
#line 411 "live_vars.m"
                          ll_backend__live_vars__V_181_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 411 "live_vars.m"
                          MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_181_181, 0) = ((MR_Box) (ll_backend__live_vars__LCVar_70));
#line 411 "live_vars.m"
                          MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_181_181, 1) = ((MR_Box) (ll_backend__live_vars__V_182_182));
#line 411 "live_vars.m"
                        }
#line 411 "live_vars.m"
                        {
#line 411 "live_vars.m"
                          ll_backend__live_vars__V_180_180 = parse_tree__set_of_var__list_to_set_1_f_0(ll_backend__live_vars__TypeCtorInfo_328_328, ll_backend__live_vars__V_181_181);
                        }
#line 411 "live_vars.m"
                        {
#line 411 "live_vars.m"
                          ll_backend__live_vars__LCStackVars_73 = parse_tree__set_of_var__union_2_f_0(ll_backend__live_vars__TypeCtorInfo_328_328, ll_backend__live_vars__V_175_175, ll_backend__live_vars__V_180_180);
                        }
#line 412 "live_vars.m"
                        {
#line 412 "live_vars.m"
                          ll_backend__live_vars__par_stack_vars_start_loop_control_3_p_0(ll_backend__live_vars__LCStackVars_73, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148, &ll_backend__live_vars__STATE_VARIABLE_ParStackVars_184_184);
                        }
#line 413 "live_vars.m"
                        {
#line 413 "live_vars.m"
                          ll_backend__live_vars__build_live_sets_in_goal_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322, ll_backend__live_vars__SubGoal0_263, &ll_backend__live_vars__SubGoal_243, ll_backend__live_vars__ResumeVars0_19, ll_backend__live_vars__AllocData_20, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142, &ll_backend__live_vars__STATE_VARIABLE_StackAlloc_185_185, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144, &ll_backend__live_vars__STATE_VARIABLE_Liveness_186_186, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_184_184, &ll_backend__live_vars__STATE_VARIABLE_ParStackVars_188_188);
                        }
#line 415 "live_vars.m"
                        {
#line 415 "live_vars.m"
                          ll_backend__live_vars__par_stack_vars_get_stackvars_2_p_0(ll_backend__live_vars__STATE_VARIABLE_ParStackVars_188_188, &ll_backend__live_vars__InnerStackVars_241);
                        }
#line 417 "live_vars.m"
                        {
#line 417 "live_vars.m"
                          ll_backend__live_vars__NeedInParConjSet_74 = parse_tree__set_of_var__union_2_f_0(ll_backend__live_vars__TypeCtorInfo_328_328, ll_backend__live_vars__LCStackVars_73, ll_backend__live_vars__InnerStackVars_241);
                        }
#line 418 "live_vars.m"
                        ll_backend__live_vars__NeedInParConj_242 = (MR_Word) ll_backend__live_vars__NeedInParConjSet_74;
#line 420 "live_vars.m"
                        {
#line 420 "live_vars.m"
                          ll_backend__live_vars__record_par_conj_6_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322, ll_backend__live_vars__NeedInParConj_242, ll_backend__live_vars__AllocData_20, ll_backend__live_vars__GoalInfo0_17, ll_backend__live_vars__GoalInfo_18, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_185_185, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143);
                        }
#line 426 "live_vars.m"
                        {
#line 426 "live_vars.m"
                          ll_backend__live_vars__WouldDieSet_75 = parse_tree__set_of_var__difference_2_f_0(ll_backend__live_vars__TypeCtorInfo_328_328, ll_backend__live_vars__NeedInParConjSet_74, ll_backend__live_vars__STATE_VARIABLE_Liveness_186_186);
                        }
#line 427 "live_vars.m"
                        {
#line 427 "live_vars.m"
                          *ll_backend__live_vars__STATE_VARIABLE_Liveness_145 = parse_tree__set_of_var__union_2_f_0(ll_backend__live_vars__TypeCtorInfo_328_328, ll_backend__live_vars__STATE_VARIABLE_Liveness_186_186, ll_backend__live_vars__WouldDieSet_75);
                        }
#line 431 "live_vars.m"
                        {
#line 431 "live_vars.m"
                          ll_backend__live_vars__par_stack_vars_end_loop_control_4_p_0(ll_backend__live_vars__WouldDieSet_75, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_188_188, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149);
                        }
#line 434 "live_vars.m"
                        {
#line 434 "live_vars.m"
                          MR_Word base;
#line 434 "live_vars.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 434 "live_vars.m"
                          *ll_backend__live_vars__GoalExpr_16 = base;
#line 434 "live_vars.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 434 "live_vars.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__live_vars__Reason_68));
#line 434 "live_vars.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__live_vars__SubGoal_243));
#line 434 "live_vars.m"
                        }
#line 395 "live_vars.m"
                      }
#line 383 "live_vars.m"
                    }
#line 383 "live_vars.m"
                  else
#line 436 "live_vars.m"
                    {
#line 436 "live_vars.m"
                      MR_Word ll_backend__live_vars__CodeModel_76;
#line 436 "live_vars.m"
                      MR_Word ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_194_194;
#line 436 "live_vars.m"
                      MR_Word ll_backend__live_vars__SubGoal_245;

#line 437 "live_vars.m"
                      {
#line 437 "live_vars.m"
                        ll_backend__live_vars__build_live_sets_in_goal_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322, ll_backend__live_vars__SubGoal0_263, &ll_backend__live_vars__SubGoal_245, ll_backend__live_vars__ResumeVars0_19, ll_backend__live_vars__AllocData_20, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144, ll_backend__live_vars__STATE_VARIABLE_Liveness_145, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146, &ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_194_194, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149);
                      }
#line 443 "live_vars.m"
                      {
#line 443 "live_vars.m"
                        ll_backend__live_vars__CodeModel_76 = hlds__code_model__goal_info_get_code_model_1_f_0(ll_backend__live_vars__GoalInfo0_17);
                      }
#line 446 "live_vars.m"
#line 446 "live_vars.m"
                      switch (ll_backend__live_vars__CodeModel_76) {
#line 446 "live_vars.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 446 "live_vars.m"
                        case (MR_Integer) 0:
#line 446 "live_vars.m"
                        case (MR_Integer) 1:
#line 450 "live_vars.m"
                          *ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147 = ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146;
#line 446 "live_vars.m"
                          break;
#line 446 "live_vars.m"
                        case (MR_Integer) 2:
#line 445 "live_vars.m"
                          *ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147 = ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_194_194;
#line 446 "live_vars.m"
                          break;
#line 446 "live_vars.m"
                      }
#line 452 "live_vars.m"
                      {
#line 452 "live_vars.m"
                        MR_Word base;
#line 452 "live_vars.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 452 "live_vars.m"
                        *ll_backend__live_vars__GoalExpr_16 = base;
#line 452 "live_vars.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 452 "live_vars.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__live_vars__Reason_68));
#line 452 "live_vars.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__live_vars__SubGoal_245));
#line 452 "live_vars.m"
                      }
#line 453 "live_vars.m"
                      *ll_backend__live_vars__GoalInfo_18 = ll_backend__live_vars__GoalInfo0_17;
#line 436 "live_vars.m"
                    }
#line 435 "live_vars.m"
                }
#line 369 "live_vars.m"
            }
#line 241 "live_vars.m"
            break;
#line 241 "live_vars.m"
          case (MR_Integer) 6:
#line 344 "live_vars.m"
            {
#line 344 "live_vars.m"
              MR_Word ll_backend__live_vars__Vars_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 1)));
#line 344 "live_vars.m"
              MR_Word ll_backend__live_vars__Cond0_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 2)));
#line 344 "live_vars.m"
              MR_Word ll_backend__live_vars__Then0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 3)));
#line 344 "live_vars.m"
              MR_Word ll_backend__live_vars__Else0_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 4)));
#line 344 "live_vars.m"
              MR_Word ll_backend__live_vars__Cond_58;
#line 344 "live_vars.m"
              MR_Word ll_backend__live_vars__LivenessCond_59;
#line 344 "live_vars.m"
              MR_Word ll_backend__live_vars__NondetLivenessCond_60;
#line 344 "live_vars.m"
              MR_Word ll_backend__live_vars__Then_61;
#line 344 "live_vars.m"
              MR_Word ll_backend__live_vars__NondetLivenessThen_63;
#line 344 "live_vars.m"
              MR_Word ll_backend__live_vars__Else_64;
#line 344 "live_vars.m"
              MR_Word ll_backend__live_vars__NondetLivenessElse_65;
#line 344 "live_vars.m"
              MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_201_201;
#line 344 "live_vars.m"
              MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_202_202;
#line 344 "live_vars.m"
              MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_203_203;
#line 344 "live_vars.m"
              MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_204_204;
#line 350 "live_vars.m"
              MR_Word ll_backend__live_vars___LivenessThen_62;

#line 347 "live_vars.m"
              {
#line 347 "live_vars.m"
                ll_backend__live_vars__build_live_sets_in_goal_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322, ll_backend__live_vars__Cond0_53, &ll_backend__live_vars__Cond_58, ll_backend__live_vars__ResumeVars0_19, ll_backend__live_vars__AllocData_20, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142, &ll_backend__live_vars__STATE_VARIABLE_StackAlloc_201_201, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144, &ll_backend__live_vars__LivenessCond_59, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146, &ll_backend__live_vars__NondetLivenessCond_60, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148, &ll_backend__live_vars__STATE_VARIABLE_ParStackVars_202_202);
              }
#line 350 "live_vars.m"
              {
#line 350 "live_vars.m"
                ll_backend__live_vars__build_live_sets_in_goal_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322, ll_backend__live_vars__Then0_54, &ll_backend__live_vars__Then_61, ll_backend__live_vars__ResumeVars0_19, ll_backend__live_vars__AllocData_20, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_201_201, &ll_backend__live_vars__STATE_VARIABLE_StackAlloc_203_203, ll_backend__live_vars__LivenessCond_59, &ll_backend__live_vars___LivenessThen_62, ll_backend__live_vars__NondetLivenessCond_60, &ll_backend__live_vars__NondetLivenessThen_63, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_202_202, &ll_backend__live_vars__STATE_VARIABLE_ParStackVars_204_204);
              }
#line 353 "live_vars.m"
              {
#line 353 "live_vars.m"
                ll_backend__live_vars__build_live_sets_in_goal_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322, ll_backend__live_vars__Else0_55, &ll_backend__live_vars__Else_64, ll_backend__live_vars__ResumeVars0_19, ll_backend__live_vars__AllocData_20, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_203_203, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144, ll_backend__live_vars__STATE_VARIABLE_Liveness_145, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146, &ll_backend__live_vars__NondetLivenessElse_65, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_204_204, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149);
              }
#line 356 "live_vars.m"
              {
#line 356 "live_vars.m"
                parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__live_vars__NondetLivenessThen_63, ll_backend__live_vars__NondetLivenessElse_65, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147);
              }
#line 360 "live_vars.m"
              {
#line 360 "live_vars.m"
                MR_Word base;
#line 360 "live_vars.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 360 "live_vars.m"
                *ll_backend__live_vars__GoalExpr_16 = base;
#line 360 "live_vars.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 360 "live_vars.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__live_vars__Vars_52));
#line 360 "live_vars.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__live_vars__Cond_58));
#line 360 "live_vars.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__live_vars__Then_61));
#line 360 "live_vars.m"
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ll_backend__live_vars__Else_64));
#line 360 "live_vars.m"
              }
#line 361 "live_vars.m"
              *ll_backend__live_vars__GoalInfo_18 = ll_backend__live_vars__GoalInfo0_17;
#line 344 "live_vars.m"
            }
#line 241 "live_vars.m"
            break;
#line 241 "live_vars.m"
          case (MR_Integer) 7:
#line 562 "live_vars.m"
            {
#line 564 "live_vars.m"
              {
#line 564 "live_vars.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.live_vars", (MR_String) "predicate \140ll_backend.live_vars.build_live_sets_in_goal_expr\'/14", (MR_String) "shorthand");
#line 564 "live_vars.m"
                return;
              }
#line 562 "live_vars.m"
            }
#line 241 "live_vars.m"
            break;
#line 241 "live_vars.m"
        }
#line 241 "live_vars.m"
        break;
#line 241 "live_vars.m"
    }
#line 229 "live_vars.m"
  }
#line 229 "live_vars.m"
}

#line 212 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__resume_locs_include_stack_2_p_0(
#line 212 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 212 "live_vars.m"
  MR_Word * ll_backend__live_vars__HeadVar__2_2)
#line 212 "live_vars.m"
{
#line 214 "live_vars.m"
  {
#line 214 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;

#line 214 "live_vars.m"
    *ll_backend__live_vars__HeadVar__2_2 = ((&ll_backend__live_vars_vector_common_4[0 + ll_backend__live_vars__HeadVar__1_1]))->ll_backend__live_vars__vector_common_type_4_0__vct_4_f_0;
#line 214 "live_vars.m"
  }
#line 212 "live_vars.m"
}

#line 148 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_12_p_0(
#line 148 "live_vars.m"
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_56,
#line 148 "live_vars.m"
  MR_Word ll_backend__live_vars__Goal0_13,
#line 148 "live_vars.m"
  MR_Word * ll_backend__live_vars__Goal_14,
#line 148 "live_vars.m"
  MR_Word ll_backend__live_vars__ResumeVars0_15,
#line 148 "live_vars.m"
  MR_Word ll_backend__live_vars__AllocData_16,
#line 148 "live_vars.m"
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_37,
#line 148 "live_vars.m"
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_38,
#line 148 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_Liveness_0_39,
#line 148 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_Liveness_40,
#line 148 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_41,
#line 148 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_42,
#line 148 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_43,
#line 148 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_44)
#line 148 "live_vars.m"
{
#line 156 "live_vars.m"
  {
#line 156 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;
#line 156 "live_vars.m"
    MR_Word ll_backend__live_vars__TypeCtorInfo_57_57;
#line 156 "live_vars.m"
    MR_Word ll_backend__live_vars__GoalExpr0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__Goal0_13, (MR_Integer) 0)));
#line 156 "live_vars.m"
    MR_Word ll_backend__live_vars__GoalInfo0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__Goal0_13, (MR_Integer) 1)));
#line 156 "live_vars.m"
    MR_Word ll_backend__live_vars__PreDeaths_23;
#line 156 "live_vars.m"
    MR_Word ll_backend__live_vars__PreBirths_24;
#line 156 "live_vars.m"
    MR_Word ll_backend__live_vars__PostDeaths_25;
#line 156 "live_vars.m"
    MR_Word ll_backend__live_vars__PostBirths_26;
#line 156 "live_vars.m"
    MR_Word ll_backend__live_vars__HasSubGoals_27;
#line 156 "live_vars.m"
    MR_Word ll_backend__live_vars__ResumePoint_28;
#line 156 "live_vars.m"
    MR_Word ll_backend__live_vars__ResumeVars1_29;
#line 156 "live_vars.m"
    MR_Word ll_backend__live_vars__GoalInfo1_30;
#line 156 "live_vars.m"
    MR_Word ll_backend__live_vars__GoalExpr_35;
#line 156 "live_vars.m"
    MR_Word ll_backend__live_vars__GoalInfo_36;
#line 156 "live_vars.m"
    MR_Word ll_backend__live_vars__STATE_VARIABLE_Liveness_45_45;
#line 156 "live_vars.m"
    MR_Word ll_backend__live_vars__STATE_VARIABLE_Liveness_46_46;
#line 156 "live_vars.m"
    MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_49_49;
#line 156 "live_vars.m"
    MR_Word ll_backend__live_vars__STATE_VARIABLE_Liveness_54_54;

#line 158 "live_vars.m"
    {
#line 158 "live_vars.m"
      hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(ll_backend__live_vars__GoalInfo0_22, &ll_backend__live_vars__PreDeaths_23);
    }
#line 159 "live_vars.m"
    {
#line 159 "live_vars.m"
      hlds__hlds_llds__goal_info_get_pre_births_2_p_0(ll_backend__live_vars__GoalInfo0_22, &ll_backend__live_vars__PreBirths_24);
    }
#line 160 "live_vars.m"
    {
#line 160 "live_vars.m"
      hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(ll_backend__live_vars__GoalInfo0_22, &ll_backend__live_vars__PostDeaths_25);
    }
#line 161 "live_vars.m"
    {
#line 161 "live_vars.m"
      hlds__hlds_llds__goal_info_get_post_births_2_p_0(ll_backend__live_vars__GoalInfo0_22, &ll_backend__live_vars__PostBirths_26);
    }
#line 6049 "ll_backend.live_vars.c"
    ll_backend__live_vars__TypeCtorInfo_57_57 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 164 "live_vars.m"
    {
#line 164 "live_vars.m"
      parse_tree__set_of_var__difference_3_p_0(ll_backend__live_vars__TypeCtorInfo_57_57, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_39, ll_backend__live_vars__PreDeaths_23, &ll_backend__live_vars__STATE_VARIABLE_Liveness_45_45);
    }
#line 165 "live_vars.m"
    {
#line 165 "live_vars.m"
      parse_tree__set_of_var__union_3_p_0(ll_backend__live_vars__TypeCtorInfo_57_57, ll_backend__live_vars__STATE_VARIABLE_Liveness_45_45, ll_backend__live_vars__PreBirths_24, &ll_backend__live_vars__STATE_VARIABLE_Liveness_46_46);
    }
#line 170 "live_vars.m"
    {
#line 170 "live_vars.m"
      ll_backend__live_vars__HasSubGoals_27 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(ll_backend__live_vars__GoalExpr0_21);
    }
#line 178 "live_vars.m"
    {
#line 178 "live_vars.m"
      hlds__hlds_llds__goal_info_get_resume_point_2_p_0(ll_backend__live_vars__GoalInfo0_22, &ll_backend__live_vars__ResumePoint_28);
    }
#line 183 "live_vars.m"
    if ((ll_backend__live_vars__ResumePoint_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 180 "live_vars.m"
      {
#line 181 "live_vars.m"
        ll_backend__live_vars__ResumeVars1_29 = ll_backend__live_vars__ResumeVars0_15;
#line 182 "live_vars.m"
        ll_backend__live_vars__GoalInfo1_30 = ll_backend__live_vars__GoalInfo0_22;
#line 180 "live_vars.m"
        ll_backend__live_vars__STATE_VARIABLE_StackAlloc_49_49 = ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_37;
#line 180 "live_vars.m"
      }
#line 183 "live_vars.m"
    else
#line 184 "live_vars.m"
      {
#line 184 "live_vars.m"
        MR_Word ll_backend__live_vars__ResumePointVars_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__ResumePoint_28, (MR_Integer) 0)));
#line 184 "live_vars.m"
        MR_Word ll_backend__live_vars__Locs_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__ResumePoint_28, (MR_Integer) 1)));
#line 184 "live_vars.m"
        MR_Word ll_backend__live_vars__ResumeOnStack_33;
#line 184 "live_vars.m"
        MR_Word ll_backend__live_vars__NeedInResume_34;
#line 6095 "ll_backend.live_vars.c"
        void MR_CALL (* ll_backend__live_vars__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 214 "live_vars.m"
#line 214 "live_vars.m"
        switch (ll_backend__live_vars__Locs_32) {
#line 214 "live_vars.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 214 "live_vars.m"
          case (MR_Integer) 2:
#line 216 "live_vars.m"
            {
#line 185 "live_vars.m"
              ll_backend__live_vars__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
#line 216 "live_vars.m"
            }
#line 214 "live_vars.m"
            break;
#line 214 "live_vars.m"
          case (MR_Integer) 0:
#line 214 "live_vars.m"
            {
#line 185 "live_vars.m"
              ll_backend__live_vars__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
#line 214 "live_vars.m"
            }
#line 214 "live_vars.m"
            break;
#line 214 "live_vars.m"
          case (MR_Integer) 3:
#line 217 "live_vars.m"
            {
#line 185 "live_vars.m"
              ll_backend__live_vars__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
#line 217 "live_vars.m"
            }
#line 214 "live_vars.m"
            break;
#line 214 "live_vars.m"
          case (MR_Integer) 1:
#line 215 "live_vars.m"
            {
#line 185 "live_vars.m"
              ll_backend__live_vars__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
#line 215 "live_vars.m"
            }
#line 214 "live_vars.m"
            break;
#line 214 "live_vars.m"
        }
#line 188 "live_vars.m"
        if (ll_backend__live_vars__succeeded)
#line 186 "live_vars.m"
          {
#line 186 "live_vars.m"
            {
#line 186 "live_vars.m"
              parse_tree__set_of_var__union_3_p_0(ll_backend__live_vars__TypeCtorInfo_57_57, ll_backend__live_vars__ResumeVars0_15, ll_backend__live_vars__ResumePointVars_31, &ll_backend__live_vars__ResumeVars1_29);
            }
#line 187 "live_vars.m"
            ll_backend__live_vars__ResumeOnStack_33 = (MR_Integer) 1;
#line 186 "live_vars.m"
          }
#line 188 "live_vars.m"
        else
#line 189 "live_vars.m"
          {
#line 189 "live_vars.m"
            ll_backend__live_vars__ResumeVars1_29 = ll_backend__live_vars__ResumeVars0_15;
#line 190 "live_vars.m"
            ll_backend__live_vars__ResumeOnStack_33 = (MR_Integer) 0;
#line 189 "live_vars.m"
          }
#line 192 "live_vars.m"
        {
#line 192 "live_vars.m"
          ll_backend__live_vars__NeedInResume_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 192 "live_vars.m"
          MR_hl_field(MR_mktag(0), ll_backend__live_vars__NeedInResume_34, 0) = ((MR_Box) (ll_backend__live_vars__ResumeOnStack_33));
#line 192 "live_vars.m"
          MR_hl_field(MR_mktag(0), ll_backend__live_vars__NeedInResume_34, 1) = ((MR_Box) (ll_backend__live_vars__ResumeVars1_29));
#line 192 "live_vars.m"
          MR_hl_field(MR_mktag(0), ll_backend__live_vars__NeedInResume_34, 2) = ((MR_Box) (ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_41));
#line 192 "live_vars.m"
        }
#line 792 "live_vars.m"
        {
#line 792 "live_vars.m"
          hlds__hlds_llds__goal_info_set_need_in_resume_3_p_0(ll_backend__live_vars__NeedInResume_34, ll_backend__live_vars__GoalInfo0_22, &ll_backend__live_vars__GoalInfo1_30);
        }
#line 6185 "ll_backend.live_vars.c"
        ll_backend__live_vars__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_56, (MR_Integer) 0)), (MR_Integer) 6)));
#line 6187 "ll_backend.live_vars.c"
        {
#line 6189 "ll_backend.live_vars.c"
          ll_backend__live_vars__func_0(((MR_Box) ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_56), ((MR_Box) (ll_backend__live_vars__NeedInResume_34)), ((MR_Box) (ll_backend__live_vars__AllocData_16)), ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_37, &ll_backend__live_vars__STATE_VARIABLE_StackAlloc_49_49);
        }
#line 184 "live_vars.m"
      }
#line 6194 "ll_backend.live_vars.c"
#line 6195 "ll_backend.live_vars.c"
    switch (ll_backend__live_vars__HasSubGoals_27) {
#line 6197 "ll_backend.live_vars.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 6199 "ll_backend.live_vars.c"
      case (MR_Integer) 1:
#line 6201 "ll_backend.live_vars.c"
        {
#line 6203 "ll_backend.live_vars.c"
          MR_Word ll_backend__live_vars__STATE_VARIABLE_Liveness_47_47;

#line 173 "live_vars.m"
          {
#line 173 "live_vars.m"
            parse_tree__set_of_var__difference_3_p_0(ll_backend__live_vars__TypeCtorInfo_57_57, ll_backend__live_vars__STATE_VARIABLE_Liveness_46_46, ll_backend__live_vars__PostDeaths_25, &ll_backend__live_vars__STATE_VARIABLE_Liveness_47_47);
          }
#line 198 "live_vars.m"
          {
#line 198 "live_vars.m"
            ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_56, ll_backend__live_vars__GoalExpr0_21, &ll_backend__live_vars__GoalExpr_35, ll_backend__live_vars__GoalInfo1_30, &ll_backend__live_vars__GoalInfo_36, ll_backend__live_vars__ResumeVars1_29, ll_backend__live_vars__AllocData_16, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_49_49, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_38, ll_backend__live_vars__STATE_VARIABLE_Liveness_47_47, &ll_backend__live_vars__STATE_VARIABLE_Liveness_54_54, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_41, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_42, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_43, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_44);
          }
#line 6216 "ll_backend.live_vars.c"
        }
#line 6218 "ll_backend.live_vars.c"
        break;
#line 6220 "ll_backend.live_vars.c"
      case (MR_Integer) 0:
#line 6222 "ll_backend.live_vars.c"
        {
#line 6224 "ll_backend.live_vars.c"
          MR_Word ll_backend__live_vars__STATE_VARIABLE_Liveness_51_80;

#line 198 "live_vars.m"
          {
#line 198 "live_vars.m"
            ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_56, ll_backend__live_vars__GoalExpr0_21, &ll_backend__live_vars__GoalExpr_35, ll_backend__live_vars__GoalInfo1_30, &ll_backend__live_vars__GoalInfo_36, ll_backend__live_vars__ResumeVars1_29, ll_backend__live_vars__AllocData_16, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_49_49, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_38, ll_backend__live_vars__STATE_VARIABLE_Liveness_46_46, &ll_backend__live_vars__STATE_VARIABLE_Liveness_51_80, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_41, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_42, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_43, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_44);
          }
#line 206 "live_vars.m"
          {
#line 206 "live_vars.m"
            parse_tree__set_of_var__difference_3_p_0(ll_backend__live_vars__TypeCtorInfo_57_57, ll_backend__live_vars__STATE_VARIABLE_Liveness_51_80, ll_backend__live_vars__PostDeaths_25, &ll_backend__live_vars__STATE_VARIABLE_Liveness_54_54);
          }
#line 6237 "ll_backend.live_vars.c"
        }
#line 6239 "ll_backend.live_vars.c"
        break;
#line 6241 "ll_backend.live_vars.c"
    }
#line 209 "live_vars.m"
    {
#line 209 "live_vars.m"
      parse_tree__set_of_var__union_3_p_0(ll_backend__live_vars__TypeCtorInfo_57_57, ll_backend__live_vars__STATE_VARIABLE_Liveness_54_54, ll_backend__live_vars__PostBirths_26, ll_backend__live_vars__STATE_VARIABLE_Liveness_40);
    }
#line 210 "live_vars.m"
    {
#line 210 "live_vars.m"
      MR_Word base;
#line 210 "live_vars.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 210 "live_vars.m"
      *ll_backend__live_vars__Goal_14 = base;
#line 210 "live_vars.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__live_vars__GoalExpr_35));
#line 210 "live_vars.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__live_vars__GoalInfo_36));
#line 210 "live_vars.m"
    }
#line 156 "live_vars.m"
  }
#line 148 "live_vars.m"
}

#line 114 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__set_dummy_array_elements_6_p_0(
#line 114 "live_vars.m"
  MR_Word ll_backend__live_vars__ModuleInfo_1,
#line 114 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__2_2,
#line 114 "live_vars.m"
  MR_ArrayPtr ll_backend__live_vars__STATE_VARIABLE_DummyTypeArray_0_3,
#line 114 "live_vars.m"
  MR_ArrayPtr * ll_backend__live_vars__STATE_VARIABLE_DummyTypeArray_4,
#line 114 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_DummyVars_0_5,
#line 114 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_DummyVars_6)
#line 114 "live_vars.m"
{
#line 119 "live_vars.m"
  while (MR_TRUE)
#line 119 "live_vars.m"
    {
#line 119 "live_vars.m"
      /* tailcall optimized into a loop */
#line 119 "live_vars.m"
      {
#line 119 "live_vars.m"
        MR_bool ll_backend__live_vars__succeeded;

#line 119 "live_vars.m"
        if ((ll_backend__live_vars__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 119 "live_vars.m"
          {
#line 119 "live_vars.m"
            *ll_backend__live_vars__STATE_VARIABLE_DummyVars_6 = ll_backend__live_vars__STATE_VARIABLE_DummyVars_0_5;
#line 119 "live_vars.m"
            *ll_backend__live_vars__STATE_VARIABLE_DummyTypeArray_4 = ll_backend__live_vars__STATE_VARIABLE_DummyTypeArray_0_3;
#line 119 "live_vars.m"
          }
#line 119 "live_vars.m"
        else
#line 121 "live_vars.m"
          {
#line 121 "live_vars.m"
            MR_Word ll_backend__live_vars__VarType_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 0)));
#line 121 "live_vars.m"
            MR_Word ll_backend__live_vars__VarsTypes_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 1)));
#line 121 "live_vars.m"
            MR_Word ll_backend__live_vars__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__VarType_15, (MR_Integer) 0)));
#line 121 "live_vars.m"
            MR_Word ll_backend__live_vars__Type_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__VarType_15, (MR_Integer) 1)));
#line 121 "live_vars.m"
            MR_Word ll_backend__live_vars__IsDummyType_21;
#line 121 "live_vars.m"
            MR_ArrayPtr ll_backend__live_vars__STATE_VARIABLE_DummyTypeArray_27_27;
#line 121 "live_vars.m"
            MR_Word ll_backend__live_vars__STATE_VARIABLE_DummyVars_28_28;

#line 123 "live_vars.m"
            {
#line 123 "live_vars.m"
              ll_backend__live_vars__IsDummyType_21 = check_hlds__type_util__check_dummy_type_2_f_0(ll_backend__live_vars__ModuleInfo_1, ll_backend__live_vars__Type_20);
            }
#line 128 "live_vars.m"
#line 128 "live_vars.m"
            switch (ll_backend__live_vars__IsDummyType_21) {
#line 128 "live_vars.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 128 "live_vars.m"
              case (MR_Integer) 0:
#line 125 "live_vars.m"
                {
#line 125 "live_vars.m"
                  MR_Word ll_backend__live_vars__TypeClassInfo_for_enum_31 = (MR_Word) &ll_backend__live_vars_scalar_common_2[1];
#line 125 "live_vars.m"
                  MR_Integer ll_backend__live_vars__V_26_26;
#line 6342 "ll_backend.live_vars.c"
                  MR_Box MR_CALL (* ll_backend__live_vars__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__live_vars__TypeClassInfo_for_enum_31, (MR_Integer) 0)), (MR_Integer) 5)));
#line 6344 "ll_backend.live_vars.c"
                  MR_Box ll_backend__live_vars__conv1_V_26_26;
#line 126 "live_vars.m"
                  MR_ArrayPtr ll_backend__live_vars__conv2_STATE_VARIABLE_DummyTypeArray_27_27;

#line 6349 "ll_backend.live_vars.c"
                  {
#line 6351 "ll_backend.live_vars.c"
                    ll_backend__live_vars__conv1_V_26_26 = ll_backend__live_vars__func_0(((MR_Box) ll_backend__live_vars__TypeClassInfo_for_enum_31), ((MR_Box) (ll_backend__live_vars__Var_19)));
                  }
#line 6354 "ll_backend.live_vars.c"
                  ll_backend__live_vars__V_26_26 = ((MR_Integer) ll_backend__live_vars__conv1_V_26_26);
#line 126 "live_vars.m"
                  {
#line 126 "live_vars.m"
                    mercury__array__set_4_p_0((MR_Word) &check_hlds__type_util__check_hlds__type_util__type_ctor_info_is_dummy_type_0, ll_backend__live_vars__V_26_26, ((MR_Box) (ll_backend__live_vars__IsDummyType_21)), (MR_ArrayPtr) ll_backend__live_vars__STATE_VARIABLE_DummyTypeArray_0_3, &ll_backend__live_vars__conv2_STATE_VARIABLE_DummyTypeArray_27_27);
                  }
#line 126 "live_vars.m"
                  ll_backend__live_vars__STATE_VARIABLE_DummyTypeArray_27_27 = (MR_ArrayPtr) ll_backend__live_vars__conv2_STATE_VARIABLE_DummyTypeArray_27_27;
#line 127 "live_vars.m"
                  {
#line 127 "live_vars.m"
                    ll_backend__live_vars__STATE_VARIABLE_DummyVars_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 127 "live_vars.m"
                    MR_hl_field(MR_mktag(1), ll_backend__live_vars__STATE_VARIABLE_DummyVars_28_28, 0) = ((MR_Box) (ll_backend__live_vars__Var_19));
#line 127 "live_vars.m"
                    MR_hl_field(MR_mktag(1), ll_backend__live_vars__STATE_VARIABLE_DummyVars_28_28, 1) = ((MR_Box) (ll_backend__live_vars__STATE_VARIABLE_DummyVars_0_5));
#line 127 "live_vars.m"
                  }
#line 125 "live_vars.m"
                }
#line 128 "live_vars.m"
                break;
#line 128 "live_vars.m"
              case (MR_Integer) 1:
#line 129 "live_vars.m"
                {
#line 129 "live_vars.m"
                  ll_backend__live_vars__STATE_VARIABLE_DummyTypeArray_27_27 = ll_backend__live_vars__STATE_VARIABLE_DummyTypeArray_0_3;
#line 129 "live_vars.m"
                  ll_backend__live_vars__STATE_VARIABLE_DummyVars_28_28 = ll_backend__live_vars__STATE_VARIABLE_DummyVars_0_5;
#line 129 "live_vars.m"
                }
#line 128 "live_vars.m"
                break;
#line 128 "live_vars.m"
            }
#line 132 "live_vars.m"
            /* direct tailcall eliminated */
#line 132 "live_vars.m"
            {
#line 132 "live_vars.m"
              MR_Word ll_backend__live_vars__HeadVar__2__tmp_copy_2 = ll_backend__live_vars__VarsTypes_16;
#line 132 "live_vars.m"
              MR_ArrayPtr ll_backend__live_vars__STATE_VARIABLE_DummyTypeArray_0__tmp_copy_3 = ll_backend__live_vars__STATE_VARIABLE_DummyTypeArray_27_27;
#line 132 "live_vars.m"
              MR_Word ll_backend__live_vars__STATE_VARIABLE_DummyVars_0__tmp_copy_5 = ll_backend__live_vars__STATE_VARIABLE_DummyVars_28_28;

#line 132 "live_vars.m"
              ll_backend__live_vars__STATE_VARIABLE_DummyVars_0_5 = ll_backend__live_vars__STATE_VARIABLE_DummyVars_0__tmp_copy_5;
#line 132 "live_vars.m"
              ll_backend__live_vars__STATE_VARIABLE_DummyTypeArray_0_3 = ll_backend__live_vars__STATE_VARIABLE_DummyTypeArray_0__tmp_copy_3;
#line 132 "live_vars.m"
              ll_backend__live_vars__HeadVar__2_2 = ll_backend__live_vars__HeadVar__2__tmp_copy_2;
#line 132 "live_vars.m"
            }
#line 132 "live_vars.m"
            continue;
#line 121 "live_vars.m"
          }
#line 119 "live_vars.m"
      }
#line 119 "live_vars.m"
      break;
#line 119 "live_vars.m"
    }
#line 114 "live_vars.m"
}

#line 108 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__max_var_num_3_p_0(
#line 108 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 108 "live_vars.m"
  MR_Integer ll_backend__live_vars__STATE_VARIABLE_MaxVarNum_0_8,
#line 108 "live_vars.m"
  MR_Integer * ll_backend__live_vars__STATE_VARIABLE_MaxVarNum_9)
#line 108 "live_vars.m"
{
#line 110 "live_vars.m"
  {
#line 110 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;
#line 110 "live_vars.m"
    MR_Word ll_backend__live_vars__TypeClassInfo_for_enum_11 = (MR_Word) &ll_backend__live_vars_scalar_common_2[1];
#line 110 "live_vars.m"
    MR_Word ll_backend__live_vars__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 110 "live_vars.m"
    MR_Integer ll_backend__live_vars__VarNum_7;
#line 110 "live_vars.m"
    MR_Word ll_backend__live_vars___Type_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 6446 "ll_backend.live_vars.c"
    MR_Box MR_CALL (* ll_backend__live_vars__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__live_vars__TypeClassInfo_for_enum_11, (MR_Integer) 0)), (MR_Integer) 5)));
#line 6448 "ll_backend.live_vars.c"
    MR_Box ll_backend__live_vars__conv1_VarNum_7;

#line 6451 "ll_backend.live_vars.c"
    {
#line 6453 "ll_backend.live_vars.c"
      ll_backend__live_vars__conv1_VarNum_7 = ll_backend__live_vars__func_0(((MR_Box) ll_backend__live_vars__TypeClassInfo_for_enum_11), ((MR_Box) (ll_backend__live_vars__Var_4)));
    }
#line 6456 "ll_backend.live_vars.c"
    ll_backend__live_vars__VarNum_7 = ((MR_Integer) ll_backend__live_vars__conv1_VarNum_7);
#line 112 "live_vars.m"
    {
#line 112 "live_vars.m"
      mercury__int__max_3_p_0(ll_backend__live_vars__VarNum_7, ll_backend__live_vars__STATE_VARIABLE_MaxVarNum_0_8, ll_backend__live_vars__STATE_VARIABLE_MaxVarNum_9);
#line 112 "live_vars.m"
      return;
    }
#line 110 "live_vars.m"
  }
#line 108 "live_vars.m"
}

#line 74 "live_vars.m"
void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_no_par_stack_10_p_0(
#line 74 "live_vars.m"
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_29,
#line 74 "live_vars.m"
  MR_Word ll_backend__live_vars__Goal0_11,
#line 74 "live_vars.m"
  MR_Word * ll_backend__live_vars__Goal_12,
#line 74 "live_vars.m"
  MR_Word ll_backend__live_vars__ResumeVars0_13,
#line 74 "live_vars.m"
  MR_Word ll_backend__live_vars__AllocData_14,
#line 74 "live_vars.m"
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_20,
#line 74 "live_vars.m"
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_21,
#line 74 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_Liveness_0_22,
#line 74 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_Liveness_23,
#line 74 "live_vars.m"
  MR_Word ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_24,
#line 74 "live_vars.m"
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_25)
#line 74 "live_vars.m"
{
#line 142 "live_vars.m"
  {
#line 142 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;
#line 144 "live_vars.m"
    MR_Word ll_backend__live_vars___ParStackVars_19;

#line 144 "live_vars.m"
    {
#line 144 "live_vars.m"
      ll_backend__live_vars__build_live_sets_in_goal_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_29, ll_backend__live_vars__Goal0_11, ll_backend__live_vars__Goal_12, ll_backend__live_vars__ResumeVars0_13, ll_backend__live_vars__AllocData_14, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_20, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_21, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_22, ll_backend__live_vars__STATE_VARIABLE_Liveness_23, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_24, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__live_vars___ParStackVars_19);
    }
#line 142 "live_vars.m"
  }
#line 74 "live_vars.m"
}

#line 70 "live_vars.m"
void MR_CALL 
ll_backend__live_vars__at_recursive_call_for_loop_control_4_p_0(
#line 70 "live_vars.m"
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_5,
#line 70 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 70 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__2_2,
#line 70 "live_vars.m"
  MR_Box ll_backend__live_vars__HeadVar__3_3,
#line 70 "live_vars.m"
  MR_Box * ll_backend__live_vars__HeadVar__4_4)
#line 70 "live_vars.m"
{
#line 6529 "ll_backend.live_vars.c"
  {
#line 6531 "ll_backend.live_vars.c"
    MR_bool ll_backend__live_vars__succeeded;
#line 6533 "ll_backend.live_vars.c"
    void MR_CALL (* ll_backend__live_vars__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_5, (MR_Integer) 0)), (MR_Integer) 8)));

#line 6536 "ll_backend.live_vars.c"
    {
#line 6538 "ll_backend.live_vars.c"
      ll_backend__live_vars__func_0(((MR_Box) ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_5), ((MR_Box) (ll_backend__live_vars__HeadVar__1_1)), ((MR_Box) (ll_backend__live_vars__HeadVar__2_2)), ll_backend__live_vars__HeadVar__3_3, ll_backend__live_vars__HeadVar__4_4);
#line 6540 "ll_backend.live_vars.c"
      return;
    }
#line 6543 "ll_backend.live_vars.c"
  }
#line 70 "live_vars.m"
}

#line 68 "live_vars.m"
void MR_CALL 
ll_backend__live_vars__at_par_conj_4_p_0(
#line 68 "live_vars.m"
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_5,
#line 68 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 68 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__2_2,
#line 68 "live_vars.m"
  MR_Box ll_backend__live_vars__HeadVar__3_3,
#line 68 "live_vars.m"
  MR_Box * ll_backend__live_vars__HeadVar__4_4)
#line 68 "live_vars.m"
{
#line 6563 "ll_backend.live_vars.c"
  {
#line 6565 "ll_backend.live_vars.c"
    MR_bool ll_backend__live_vars__succeeded;
#line 6567 "ll_backend.live_vars.c"
    void MR_CALL (* ll_backend__live_vars__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_5, (MR_Integer) 0)), (MR_Integer) 7)));

#line 6570 "ll_backend.live_vars.c"
    {
#line 6572 "ll_backend.live_vars.c"
      ll_backend__live_vars__func_0(((MR_Box) ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_5), ((MR_Box) (ll_backend__live_vars__HeadVar__1_1)), ((MR_Box) (ll_backend__live_vars__HeadVar__2_2)), ll_backend__live_vars__HeadVar__3_3, ll_backend__live_vars__HeadVar__4_4);
#line 6574 "ll_backend.live_vars.c"
      return;
    }
#line 6577 "ll_backend.live_vars.c"
  }
#line 68 "live_vars.m"
}

#line 66 "live_vars.m"
void MR_CALL 
ll_backend__live_vars__at_resume_site_4_p_0(
#line 66 "live_vars.m"
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_5,
#line 66 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 66 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__2_2,
#line 66 "live_vars.m"
  MR_Box ll_backend__live_vars__HeadVar__3_3,
#line 66 "live_vars.m"
  MR_Box * ll_backend__live_vars__HeadVar__4_4)
#line 66 "live_vars.m"
{
#line 6597 "ll_backend.live_vars.c"
  {
#line 6599 "ll_backend.live_vars.c"
    MR_bool ll_backend__live_vars__succeeded;
#line 6601 "ll_backend.live_vars.c"
    void MR_CALL (* ll_backend__live_vars__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_5, (MR_Integer) 0)), (MR_Integer) 6)));

#line 6604 "ll_backend.live_vars.c"
    {
#line 6606 "ll_backend.live_vars.c"
      ll_backend__live_vars__func_0(((MR_Box) ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_5), ((MR_Box) (ll_backend__live_vars__HeadVar__1_1)), ((MR_Box) (ll_backend__live_vars__HeadVar__2_2)), ll_backend__live_vars__HeadVar__3_3, ll_backend__live_vars__HeadVar__4_4);
#line 6608 "ll_backend.live_vars.c"
      return;
    }
#line 6611 "ll_backend.live_vars.c"
  }
#line 66 "live_vars.m"
}

#line 64 "live_vars.m"
void MR_CALL 
ll_backend__live_vars__at_call_site_4_p_0(
#line 64 "live_vars.m"
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_5,
#line 64 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__1_1,
#line 64 "live_vars.m"
  MR_Word ll_backend__live_vars__HeadVar__2_2,
#line 64 "live_vars.m"
  MR_Box ll_backend__live_vars__HeadVar__3_3,
#line 64 "live_vars.m"
  MR_Box * ll_backend__live_vars__HeadVar__4_4)
#line 64 "live_vars.m"
{
#line 6631 "ll_backend.live_vars.c"
  {
#line 6633 "ll_backend.live_vars.c"
    MR_bool ll_backend__live_vars__succeeded;
#line 6635 "ll_backend.live_vars.c"
    void MR_CALL (* ll_backend__live_vars__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_5, (MR_Integer) 0)), (MR_Integer) 5)));

#line 6638 "ll_backend.live_vars.c"
    {
#line 6640 "ll_backend.live_vars.c"
      ll_backend__live_vars__func_0(((MR_Box) ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_5), ((MR_Box) (ll_backend__live_vars__HeadVar__1_1)), ((MR_Box) (ll_backend__live_vars__HeadVar__2_2)), ll_backend__live_vars__HeadVar__3_3, ll_backend__live_vars__HeadVar__4_4);
#line 6642 "ll_backend.live_vars.c"
      return;
    }
#line 6645 "ll_backend.live_vars.c"
  }
#line 64 "live_vars.m"
}

#line 101 "live_vars.m"
static void MR_CALL 
ll_backend__live_vars__build_dummy_type_array_4_p_0_1(
#line 101 "live_vars.m"
  MR_Box ll_backend__live_vars__closure_arg,
#line 101 "live_vars.m"
  MR_Box ll_backend__live_vars__wrapper_arg_1,
#line 101 "live_vars.m"
  MR_Box ll_backend__live_vars__wrapper_arg_2,
#line 101 "live_vars.m"
  MR_Box * ll_backend__live_vars__wrapper_arg_3)
#line 101 "live_vars.m"
{
#line 101 "live_vars.m"
  {
#line 101 "live_vars.m"
    MR_Box ll_backend__live_vars__closure = ll_backend__live_vars__closure_arg;
#line 101 "live_vars.m"
    MR_Integer ll_backend__live_vars__conv0_STATE_VARIABLE_MaxVarNum_9;

#line 101 "live_vars.m"
    {
#line 101 "live_vars.m"
      ll_backend__live_vars__max_var_num_3_p_0(((MR_Word) ll_backend__live_vars__wrapper_arg_1), ((MR_Integer) ll_backend__live_vars__wrapper_arg_2), &ll_backend__live_vars__conv0_STATE_VARIABLE_MaxVarNum_9);
    }
#line 101 "live_vars.m"
    *ll_backend__live_vars__wrapper_arg_3 = ((MR_Box) (ll_backend__live_vars__conv0_STATE_VARIABLE_MaxVarNum_9));
#line 101 "live_vars.m"
  }
#line 101 "live_vars.m"
}

#line 40 "live_vars.m"
void MR_CALL 
ll_backend__live_vars__build_dummy_type_array_4_p_0(
#line 40 "live_vars.m"
  MR_Word ll_backend__live_vars__ModuleInfo_5,
#line 40 "live_vars.m"
  MR_Word ll_backend__live_vars__VarTypes_6,
#line 40 "live_vars.m"
  MR_ArrayPtr * ll_backend__live_vars__DummyTypeArray_7,
#line 40 "live_vars.m"
  MR_Word * ll_backend__live_vars__DummyVars_8)
#line 40 "live_vars.m"
{
#line 99 "live_vars.m"
  {
#line 99 "live_vars.m"
    MR_bool ll_backend__live_vars__succeeded;
#line 99 "live_vars.m"
    MR_Word ll_backend__live_vars__VarsTypes_9;
#line 99 "live_vars.m"
    MR_Integer ll_backend__live_vars__MaxVarNum_10;
#line 99 "live_vars.m"
    MR_ArrayPtr ll_backend__live_vars__DummyTypeArray0_11;
#line 99 "live_vars.m"
    MR_Integer ll_backend__live_vars__V_14_14;
#line 101 "live_vars.m"
    MR_Box ll_backend__live_vars__conv1_MaxVarNum_10;
#line 104 "live_vars.m"
    MR_ArrayPtr ll_backend__live_vars__conv2_DummyTypeArray0_11;

#line 100 "live_vars.m"
    {
#line 100 "live_vars.m"
      hlds__vartypes__vartypes_to_assoc_list_2_p_0(ll_backend__live_vars__VarTypes_6, &ll_backend__live_vars__VarsTypes_9);
    }
#line 101 "live_vars.m"
    {
#line 101 "live_vars.m"
      mercury__list__foldl_4_p_0((MR_Word) &ll_backend__live_vars_scalar_common_2[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__live_vars_scalar_common_2[2], ll_backend__live_vars__VarsTypes_9, ((MR_Box) ((MR_Integer) 0)), &ll_backend__live_vars__conv1_MaxVarNum_10);
    }
#line 101 "live_vars.m"
    ll_backend__live_vars__MaxVarNum_10 = ((MR_Integer) ll_backend__live_vars__conv1_MaxVarNum_10);
#line 104 "live_vars.m"
    ll_backend__live_vars__V_14_14 = (ll_backend__live_vars__MaxVarNum_10 + (MR_Integer) 1);
#line 104 "live_vars.m"
    {
#line 104 "live_vars.m"
      mercury__array__init_3_p_0((MR_Word) &check_hlds__type_util__check_hlds__type_util__type_ctor_info_is_dummy_type_0, ll_backend__live_vars__V_14_14, ((MR_Box) ((MR_Integer) 1)), &ll_backend__live_vars__conv2_DummyTypeArray0_11);
    }
#line 104 "live_vars.m"
    ll_backend__live_vars__DummyTypeArray0_11 = (MR_ArrayPtr) ll_backend__live_vars__conv2_DummyTypeArray0_11;
#line 105 "live_vars.m"
    {
#line 105 "live_vars.m"
      ll_backend__live_vars__set_dummy_array_elements_6_p_0(ll_backend__live_vars__ModuleInfo_5, ll_backend__live_vars__VarsTypes_9, ll_backend__live_vars__DummyTypeArray0_11, ll_backend__live_vars__DummyTypeArray_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__live_vars__DummyVars_8);
#line 105 "live_vars.m"
      return;
    }
#line 99 "live_vars.m"
  }
#line 40 "live_vars.m"
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
