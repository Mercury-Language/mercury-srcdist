/*
** Automatically generated from `push_goals_together.m'
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


/* :- module transform_hlds.implicit_parallelism.push_goals_together. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__implicit_parallelism__push_goals_together__init
ENDINIT
*/

#include "transform_hlds.implicit_parallelism.push_goals_together.mih"


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
#include "int.mih"
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
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
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
#include "transform_hlds.implicit_parallelism.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 147 "transform_hlds.implicit_parallelism.push_goals_together.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__implicit_parallelism__push_goals_together__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 150 "transform_hlds.implicit_parallelism.push_goals_together.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__implicit_parallelism__push_goals_together__list__pti_list_1__plain_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0;

#line 153 "transform_hlds.implicit_parallelism.push_goals_together.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__implicit_parallelism__push_goals_together__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 156 "transform_hlds.implicit_parallelism.push_goals_together.c"
static const MR_EnumFunctorDesc transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_functor_desc_maybe_pushable_0_0;

#line 159 "transform_hlds.implicit_parallelism.push_goals_together.c"
static const MR_EnumFunctorDesc transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_functor_desc_maybe_pushable_0_1;

#line 162 "transform_hlds.implicit_parallelism.push_goals_together.c"
static const MR_EnumFunctorDescPtr transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_value_ordered_maybe_pushable_0[2];

#line 165 "transform_hlds.implicit_parallelism.push_goals_together.c"
static const MR_EnumFunctorDescPtr transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_name_ordered_maybe_pushable_0[2];

#line 168 "transform_hlds.implicit_parallelism.push_goals_together.c"
static const MR_Integer transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__functor_number_map_maybe_pushable_0[2];

#line 171 "transform_hlds.implicit_parallelism.push_goals_together.c"
static const MR_Integer transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__functor_number_map_push_info_0[1];

#line 174 "transform_hlds.implicit_parallelism.push_goals_together.c"
static const MR_NotagFunctorDesc transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__notag_functor_desc_push_info_0;

#line 177 "transform_hlds.implicit_parallelism.push_goals_together.c"
static const MR_EnumFunctorDesc transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_functor_desc_push_result_0_0;

#line 180 "transform_hlds.implicit_parallelism.push_goals_together.c"
static const MR_EnumFunctorDesc transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_functor_desc_push_result_0_1;

#line 183 "transform_hlds.implicit_parallelism.push_goals_together.c"
static const MR_EnumFunctorDescPtr transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_value_ordered_push_result_0[2];

#line 186 "transform_hlds.implicit_parallelism.push_goals_together.c"
static const MR_EnumFunctorDescPtr transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_name_ordered_push_result_0[2];

#line 189 "transform_hlds.implicit_parallelism.push_goals_together.c"
static const MR_Integer transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__functor_number_map_push_result_0[2];

#line 192 "transform_hlds.implicit_parallelism.push_goals_together.c"
static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Unify____maybe_pushable_0_0_10001(
#line 195 "transform_hlds.implicit_parallelism.push_goals_together.c"
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1,
#line 197 "transform_hlds.implicit_parallelism.push_goals_together.c"
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2);

#line 200 "transform_hlds.implicit_parallelism.push_goals_together.c"
static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Compare____maybe_pushable_0_0_10001(
#line 203 "transform_hlds.implicit_parallelism.push_goals_together.c"
  MR_Box * transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1,
#line 205 "transform_hlds.implicit_parallelism.push_goals_together.c"
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2,
#line 207 "transform_hlds.implicit_parallelism.push_goals_together.c"
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_3);

#line 210 "transform_hlds.implicit_parallelism.push_goals_together.c"
static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Unify____push_info_0_0_10001(
#line 213 "transform_hlds.implicit_parallelism.push_goals_together.c"
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1,
#line 215 "transform_hlds.implicit_parallelism.push_goals_together.c"
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2);

#line 218 "transform_hlds.implicit_parallelism.push_goals_together.c"
static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Compare____push_info_0_0_10001(
#line 221 "transform_hlds.implicit_parallelism.push_goals_together.c"
  MR_Box * transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1,
#line 223 "transform_hlds.implicit_parallelism.push_goals_together.c"
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2,
#line 225 "transform_hlds.implicit_parallelism.push_goals_together.c"
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_3);

#line 228 "transform_hlds.implicit_parallelism.push_goals_together.c"
static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Unify____push_result_0_0_10001(
#line 231 "transform_hlds.implicit_parallelism.push_goals_together.c"
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1,
#line 233 "transform_hlds.implicit_parallelism.push_goals_together.c"
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2);

#line 236 "transform_hlds.implicit_parallelism.push_goals_together.c"
static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Compare____push_result_0_0_10001(
#line 239 "transform_hlds.implicit_parallelism.push_goals_together.c"
  MR_Box * transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1,
#line 241 "transform_hlds.implicit_parallelism.push_goals_together.c"
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2,
#line 243 "transform_hlds.implicit_parallelism.push_goals_together.c"
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_3);

#line 623 "push_goals_together.m"
static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__IntroducedFrom__pred__push_into_goal__623__1_2_p_0(
#line 623 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__TailPaths_9,
#line 623 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_119);

#line 644 "push_goals_together.m"
static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__IntroducedFrom__pred__push_into_goal__644__1_2_p_0(
#line 644 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__TailPaths_9,
#line 644 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_113);

#line 79 "push_goals_together.m"
static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Compare____push_info_0_0(
#line 79 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
#line 79 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2,
#line 79 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3);

#line 79 "push_goals_together.m"
static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Unify____push_info_0_0(
#line 79 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
#line 79 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2);

#line 450 "push_goals_together.m"
static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Compare____maybe_pushable_0_0(
#line 450 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
#line 450 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2,
#line 450 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3);

#line 450 "push_goals_together.m"
static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Unify____maybe_pushable_0_0(
#line 450 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_1,
#line 450 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2);

#line 966 "push_goals_together.m"
static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__maybe_steps_after_3_p_0(
#line 966 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Step_4,
#line 966 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2,
#line 966 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__Tail_5);

#line 956 "push_goals_together.m"
static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__find_relative_paths_3_p_0(
#line 956 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
#line 956 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2,
#line 956 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3);

#line 946 "push_goals_together.m"
static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_of_case_3_p_0(
#line 946 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__AddedGoals_4,
#line 946 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Case0_5,
#line 946 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__Case_6);

#line 935 "push_goals_together.m"
static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_3_p_0(
#line 935 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__AddedGoals_4,
#line 935 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goal0_5,
#line 935 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__Goal_6);

#line 916 "push_goals_together.m"
static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__build_ite_paths_map_3_p_0(
#line 916 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
#line 916 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2,
#line 916 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3);

#line 901 "push_goals_together.m"
static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__build_switch_paths_map_3_p_0(
#line 901 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
#line 901 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_0_2,
#line 901 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_3);

#line 886 "push_goals_together.m"
static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__build_disj_paths_map_3_p_0(
#line 886 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
#line 886 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_0_2,
#line 886 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_3);

#line 858 "push_goals_together.m"
static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__push_into_cases_6_p_0_1(
#line 858 "push_goals_together.m"
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__closure_arg,
#line 858 "push_goals_together.m"
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1,
#line 858 "push_goals_together.m"
  MR_Box * transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2);

#line 841 "push_goals_together.m"
static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__push_into_cases_6_p_0(
#line 841 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
#line 841 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__PathList_2,
#line 841 "push_goals_together.m"
  MR_Integer transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3,
#line 841 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__4_4,
#line 841 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__5_5,
#line 841 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__Pushable_6);

#line 815 "push_goals_together.m"
static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__push_into_disjuncts_6_p_0_1(
#line 815 "push_goals_together.m"
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__closure_arg,
#line 815 "push_goals_together.m"
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1,
#line 815 "push_goals_together.m"
  MR_Box * transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2);

#line 797 "push_goals_together.m"
static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__push_into_disjuncts_6_p_0(
#line 797 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
#line 797 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2,
#line 797 "push_goals_together.m"
  MR_Integer transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3,
#line 797 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__4_4,
#line 797 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__5_5,
#line 797 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__Pushable_6);

#line 762 "push_goals_together.m"
static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0_4(
#line 762 "push_goals_together.m"
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__closure_arg,
#line 762 "push_goals_together.m"
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1,
#line 762 "push_goals_together.m"
  MR_Box * transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2);

#line 655 "push_goals_together.m"
static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0_3(
#line 655 "push_goals_together.m"
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__closure_arg,
#line 655 "push_goals_together.m"
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1,
#line 655 "push_goals_together.m"
  MR_Box * transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2);

#line 644 "push_goals_together.m"
static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0_2(
#line 644 "push_goals_together.m"
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__closure_arg);

#line 623 "push_goals_together.m"
static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0_1(
#line 623 "push_goals_together.m"
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__closure_arg);

#line 615 "push_goals_together.m"
static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0(
#line 615 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__LoHi_7,
#line 615 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadPath_8,
#line 615 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__TailPaths_9,
#line 615 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goal0_10,
#line 615 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__Goal_11,
#line 615 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__Pushable_12);

#line 560 "push_goals_together.m"
static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__is_non_rtti_var_2_p_0(
#line 560 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__RttiVarMaps_3,
#line 560 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Arg_4);

#line 545 "push_goals_together.m"
static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__is_pushable_case_list_3_p_0(
#line 545 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
#line 545 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2,
#line 545 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3);

#line 531 "push_goals_together.m"
static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_list_3_p_0(
#line 531 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
#line 531 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2,
#line 531 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3);

#line 483 "push_goals_together.m"
static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_p_0_1(
#line 483 "push_goals_together.m"
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__closure_arg,
#line 483 "push_goals_together.m"
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1);

#line 459 "push_goals_together.m"
static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_p_0(
#line 459 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__PushInfo_4,
#line 459 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goal_5,
#line 459 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__Pushable_6);

#line 424 "push_goals_together.m"
static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__find_hi_goals_7_p_0(
#line 424 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
#line 424 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2,
#line 424 "push_goals_together.m"
  MR_Integer transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3,
#line 424 "push_goals_together.m"
  MR_Integer transform_hlds__implicit_parallelism__push_goals_together__HeadVar__4_4,
#line 424 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__5_5,
#line 424 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__6_6,
#line 424 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__7_7);

#line 389 "push_goals_together.m"
static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__find_lo_hi_goals_9_p_0(
#line 389 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__PushInfo_10,
#line 389 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Conjuncts_11,
#line 389 "push_goals_together.m"
  MR_Integer transform_hlds__implicit_parallelism__push_goals_together__Lo_12,
#line 389 "push_goals_together.m"
  MR_Integer transform_hlds__implicit_parallelism__push_goals_together__Hi_13,
#line 389 "push_goals_together.m"
  MR_Integer transform_hlds__implicit_parallelism__push_goals_together__Cur_14,
#line 389 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__Before_15,
#line 389 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__LoHi_16,
#line 389 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__After_17,
#line 389 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__Pushable_18);

#line 353 "push_goals_together.m"
static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__perform_push_transform_5_p_0_1(
#line 353 "push_goals_together.m"
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__closure_arg,
#line 353 "push_goals_together.m"
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1,
#line 353 "push_goals_together.m"
  MR_Box * transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2);

#line 339 "push_goals_together.m"
static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__perform_push_transform_5_p_0(
#line 339 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__PushGoal_6,
#line 339 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__PushInfo_7,
#line 339 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__Result_8,
#line 339 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_0_32,
#line 339 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_33);

#line 317 "push_goals_together.m"
static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__do_push_in_cases_7_p_0(
#line 317 "push_goals_together.m"
  MR_Integer transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
#line 317 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2,
#line 317 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3,
#line 317 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__4_4,
#line 317 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__5_5,
#line 317 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__6_6,
#line 317 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__7_7);

#line 298 "push_goals_together.m"
static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goals_7_p_0(
#line 298 "push_goals_together.m"
  MR_Integer transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
#line 298 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2,
#line 298 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3,
#line 298 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__4_4,
#line 298 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__5_5,
#line 298 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__6_6,
#line 298 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__7_7);

#line 175 "push_goals_together.m"
static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_p_0(
#line 175 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
#line 175 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__PushGoal_2,
#line 175 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__PushInfo_3,
#line 175 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__Result_4,
#line 175 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_0_5,
#line 175 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_6);

#line 145 "push_goals_together.m"
static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__do_push_list_5_p_0(
#line 145 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
#line 145 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__PushInfo_2,
#line 145 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3,
#line 145 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_0_4,
#line 145 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_5);


static /* final */ const MR_Box transform_hlds__implicit_parallelism__push_goals_together_scalar_common_1[4][2];

static /* final */ const MR_Box transform_hlds__implicit_parallelism__push_goals_together_scalar_common_2[3][6];

static /* final */ const MR_Box transform_hlds__implicit_parallelism__push_goals_together_scalar_common_3[2][5];

static /* final */ const MR_Box transform_hlds__implicit_parallelism__push_goals_together_scalar_common_4[1][4];




static /* final */ const MR_Box transform_hlds__implicit_parallelism__push_goals_together_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box transform_hlds__implicit_parallelism__push_goals_together_scalar_common_2[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_path_step_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__implicit_parallelism__push_goals_together__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__implicit_parallelism__push_goals_together__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0))
  },
};

static /* final */ const MR_Box transform_hlds__implicit_parallelism__push_goals_together_scalar_common_3[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&transform_hlds__implicit_parallelism__push_goals_together__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__implicit_parallelism__push_goals_together__list__pti_list_1__plain_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0)),
    ((MR_Box) (&transform_hlds__implicit_parallelism__push_goals_together__list__pti_list_1__plain_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0))
  },
};

static /* final */ const MR_Box transform_hlds__implicit_parallelism__push_goals_together_scalar_common_4[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (&transform_hlds__implicit_parallelism__push_goals_together_scalar_common_2[0])),
    ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__implicit_parallelism__push_goals_together_scalar_common_1[3])))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 747 "transform_hlds.implicit_parallelism.push_goals_together.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__implicit_parallelism__push_goals_together__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 755 "transform_hlds.implicit_parallelism.push_goals_together.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__implicit_parallelism__push_goals_together__list__pti_list_1__plain_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
  }
};

#line 763 "transform_hlds.implicit_parallelism.push_goals_together.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__implicit_parallelism__push_goals_together__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 771 "transform_hlds.implicit_parallelism.push_goals_together.c"
static const MR_EnumFunctorDesc transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_functor_desc_maybe_pushable_0_0 = {
  (MR_String) "not_pushable",
  (MR_Integer) 0
};

#line 777 "transform_hlds.implicit_parallelism.push_goals_together.c"
static const MR_EnumFunctorDesc transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_functor_desc_maybe_pushable_0_1 = {
  (MR_String) "pushable",
  (MR_Integer) 1
};

#line 783 "transform_hlds.implicit_parallelism.push_goals_together.c"
static const MR_EnumFunctorDescPtr transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_value_ordered_maybe_pushable_0[2] = {
  &transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_functor_desc_maybe_pushable_0_0,
  &transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_functor_desc_maybe_pushable_0_1
};

#line 789 "transform_hlds.implicit_parallelism.push_goals_together.c"
static const MR_EnumFunctorDescPtr transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_name_ordered_maybe_pushable_0[2] = {
  &transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_functor_desc_maybe_pushable_0_0,
  &transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_functor_desc_maybe_pushable_0_1
};

#line 795 "transform_hlds.implicit_parallelism.push_goals_together.c"
static const MR_Integer transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__functor_number_map_maybe_pushable_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 801 "transform_hlds.implicit_parallelism.push_goals_together.c"
const MR_TypeCtorInfo_Struct transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__type_ctor_info_maybe_pushable_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together____Unify____maybe_pushable_0_0_10001)),
  ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together____Compare____maybe_pushable_0_0_10001)),
  (MR_String) "transform_hlds.implicit_parallelism.push_goals_together",
  (MR_String) "maybe_pushable",
  {     transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_name_ordered_maybe_pushable_0 },
  {     transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_value_ordered_maybe_pushable_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__functor_number_map_maybe_pushable_0
};

#line 818 "transform_hlds.implicit_parallelism.push_goals_together.c"
static const MR_Integer transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__functor_number_map_push_info_0[1] = {
  (MR_Integer) 0
};

#line 823 "transform_hlds.implicit_parallelism.push_goals_together.c"
static const MR_NotagFunctorDesc transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__notag_functor_desc_push_info_0 = {
  (MR_String) "push_info",
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0,
  (MR_String) "pi_rtti_varmaps"
};

#line 830 "transform_hlds.implicit_parallelism.push_goals_together.c"
const MR_TypeCtorInfo_Struct transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__type_ctor_info_push_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together____Unify____push_info_0_0_10001)),
  ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together____Compare____push_info_0_0_10001)),
  (MR_String) "transform_hlds.implicit_parallelism.push_goals_together",
  (MR_String) "push_info",
  {     &transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__notag_functor_desc_push_info_0 },
  {     &transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__notag_functor_desc_push_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__functor_number_map_push_info_0
};

#line 847 "transform_hlds.implicit_parallelism.push_goals_together.c"
static const MR_EnumFunctorDesc transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_functor_desc_push_result_0_0 = {
  (MR_String) "push_failed",
  (MR_Integer) 0
};

#line 853 "transform_hlds.implicit_parallelism.push_goals_together.c"
static const MR_EnumFunctorDesc transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_functor_desc_push_result_0_1 = {
  (MR_String) "push_succeeded",
  (MR_Integer) 1
};

#line 859 "transform_hlds.implicit_parallelism.push_goals_together.c"
static const MR_EnumFunctorDescPtr transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_value_ordered_push_result_0[2] = {
  &transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_functor_desc_push_result_0_0,
  &transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_functor_desc_push_result_0_1
};

#line 865 "transform_hlds.implicit_parallelism.push_goals_together.c"
static const MR_EnumFunctorDescPtr transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_name_ordered_push_result_0[2] = {
  &transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_functor_desc_push_result_0_0,
  &transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_functor_desc_push_result_0_1
};

#line 871 "transform_hlds.implicit_parallelism.push_goals_together.c"
static const MR_Integer transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__functor_number_map_push_result_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 877 "transform_hlds.implicit_parallelism.push_goals_together.c"
const MR_TypeCtorInfo_Struct transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__type_ctor_info_push_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together____Unify____push_result_0_0_10001)),
  ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together____Compare____push_result_0_0_10001)),
  (MR_String) "transform_hlds.implicit_parallelism.push_goals_together",
  (MR_String) "push_result",
  {     transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_name_ordered_push_result_0 },
  {     transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_value_ordered_push_result_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__functor_number_map_push_result_0
};

#line 894 "transform_hlds.implicit_parallelism.push_goals_together.c"
static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Unify____maybe_pushable_0_0_10001(
#line 897 "transform_hlds.implicit_parallelism.push_goals_together.c"
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1,
#line 899 "transform_hlds.implicit_parallelism.push_goals_together.c"
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2)
#line 901 "transform_hlds.implicit_parallelism.push_goals_together.c"
{
#line 903 "transform_hlds.implicit_parallelism.push_goals_together.c"
  {
#line 905 "transform_hlds.implicit_parallelism.push_goals_together.c"
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;

#line 908 "transform_hlds.implicit_parallelism.push_goals_together.c"
    {
#line 910 "transform_hlds.implicit_parallelism.push_goals_together.c"
      transform_hlds__implicit_parallelism__push_goals_together__succeeded = transform_hlds__implicit_parallelism__push_goals_together____Unify____maybe_pushable_0_0(((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1), ((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2));
    }
#line 913 "transform_hlds.implicit_parallelism.push_goals_together.c"
    return transform_hlds__implicit_parallelism__push_goals_together__succeeded;
#line 915 "transform_hlds.implicit_parallelism.push_goals_together.c"
  }
#line 917 "transform_hlds.implicit_parallelism.push_goals_together.c"
}

#line 920 "transform_hlds.implicit_parallelism.push_goals_together.c"
static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Compare____maybe_pushable_0_0_10001(
#line 923 "transform_hlds.implicit_parallelism.push_goals_together.c"
  MR_Box * transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1,
#line 925 "transform_hlds.implicit_parallelism.push_goals_together.c"
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2,
#line 927 "transform_hlds.implicit_parallelism.push_goals_together.c"
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_3)
#line 929 "transform_hlds.implicit_parallelism.push_goals_together.c"
{
#line 931 "transform_hlds.implicit_parallelism.push_goals_together.c"
  {
#line 933 "transform_hlds.implicit_parallelism.push_goals_together.c"
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__conv0_HeadVar__1_1;

#line 936 "transform_hlds.implicit_parallelism.push_goals_together.c"
    {
#line 938 "transform_hlds.implicit_parallelism.push_goals_together.c"
      transform_hlds__implicit_parallelism__push_goals_together____Compare____maybe_pushable_0_0(&transform_hlds__implicit_parallelism__push_goals_together__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2), ((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_3));
    }
#line 941 "transform_hlds.implicit_parallelism.push_goals_together.c"
    *transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1 = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__conv0_HeadVar__1_1));
#line 943 "transform_hlds.implicit_parallelism.push_goals_together.c"
  }
#line 945 "transform_hlds.implicit_parallelism.push_goals_together.c"
}

#line 948 "transform_hlds.implicit_parallelism.push_goals_together.c"
static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Unify____push_info_0_0_10001(
#line 951 "transform_hlds.implicit_parallelism.push_goals_together.c"
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1,
#line 953 "transform_hlds.implicit_parallelism.push_goals_together.c"
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2)
#line 955 "transform_hlds.implicit_parallelism.push_goals_together.c"
{
#line 957 "transform_hlds.implicit_parallelism.push_goals_together.c"
  {
#line 959 "transform_hlds.implicit_parallelism.push_goals_together.c"
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;

#line 962 "transform_hlds.implicit_parallelism.push_goals_together.c"
    {
#line 964 "transform_hlds.implicit_parallelism.push_goals_together.c"
      transform_hlds__implicit_parallelism__push_goals_together__succeeded = transform_hlds__implicit_parallelism__push_goals_together____Unify____push_info_0_0(((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1), ((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2));
    }
#line 967 "transform_hlds.implicit_parallelism.push_goals_together.c"
    return transform_hlds__implicit_parallelism__push_goals_together__succeeded;
#line 969 "transform_hlds.implicit_parallelism.push_goals_together.c"
  }
#line 971 "transform_hlds.implicit_parallelism.push_goals_together.c"
}

#line 974 "transform_hlds.implicit_parallelism.push_goals_together.c"
static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Compare____push_info_0_0_10001(
#line 977 "transform_hlds.implicit_parallelism.push_goals_together.c"
  MR_Box * transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1,
#line 979 "transform_hlds.implicit_parallelism.push_goals_together.c"
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2,
#line 981 "transform_hlds.implicit_parallelism.push_goals_together.c"
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_3)
#line 983 "transform_hlds.implicit_parallelism.push_goals_together.c"
{
#line 985 "transform_hlds.implicit_parallelism.push_goals_together.c"
  {
#line 987 "transform_hlds.implicit_parallelism.push_goals_together.c"
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__conv0_HeadVar__1_1;

#line 990 "transform_hlds.implicit_parallelism.push_goals_together.c"
    {
#line 992 "transform_hlds.implicit_parallelism.push_goals_together.c"
      transform_hlds__implicit_parallelism__push_goals_together____Compare____push_info_0_0(&transform_hlds__implicit_parallelism__push_goals_together__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2), ((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_3));
    }
#line 995 "transform_hlds.implicit_parallelism.push_goals_together.c"
    *transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1 = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__conv0_HeadVar__1_1));
#line 997 "transform_hlds.implicit_parallelism.push_goals_together.c"
  }
#line 999 "transform_hlds.implicit_parallelism.push_goals_together.c"
}

#line 1002 "transform_hlds.implicit_parallelism.push_goals_together.c"
static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Unify____push_result_0_0_10001(
#line 1005 "transform_hlds.implicit_parallelism.push_goals_together.c"
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1,
#line 1007 "transform_hlds.implicit_parallelism.push_goals_together.c"
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2)
#line 1009 "transform_hlds.implicit_parallelism.push_goals_together.c"
{
#line 1011 "transform_hlds.implicit_parallelism.push_goals_together.c"
  {
#line 1013 "transform_hlds.implicit_parallelism.push_goals_together.c"
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;

#line 1016 "transform_hlds.implicit_parallelism.push_goals_together.c"
    {
#line 1018 "transform_hlds.implicit_parallelism.push_goals_together.c"
      transform_hlds__implicit_parallelism__push_goals_together__succeeded = transform_hlds__implicit_parallelism__push_goals_together____Unify____push_result_0_0(((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1), ((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2));
    }
#line 1021 "transform_hlds.implicit_parallelism.push_goals_together.c"
    return transform_hlds__implicit_parallelism__push_goals_together__succeeded;
#line 1023 "transform_hlds.implicit_parallelism.push_goals_together.c"
  }
#line 1025 "transform_hlds.implicit_parallelism.push_goals_together.c"
}

#line 1028 "transform_hlds.implicit_parallelism.push_goals_together.c"
static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Compare____push_result_0_0_10001(
#line 1031 "transform_hlds.implicit_parallelism.push_goals_together.c"
  MR_Box * transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1,
#line 1033 "transform_hlds.implicit_parallelism.push_goals_together.c"
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2,
#line 1035 "transform_hlds.implicit_parallelism.push_goals_together.c"
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_3)
#line 1037 "transform_hlds.implicit_parallelism.push_goals_together.c"
{
#line 1039 "transform_hlds.implicit_parallelism.push_goals_together.c"
  {
#line 1041 "transform_hlds.implicit_parallelism.push_goals_together.c"
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__conv0_HeadVar__1_1;

#line 1044 "transform_hlds.implicit_parallelism.push_goals_together.c"
    {
#line 1046 "transform_hlds.implicit_parallelism.push_goals_together.c"
      transform_hlds__implicit_parallelism__push_goals_together____Compare____push_result_0_0(&transform_hlds__implicit_parallelism__push_goals_together__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2), ((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_3));
    }
#line 1049 "transform_hlds.implicit_parallelism.push_goals_together.c"
    *transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1 = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__conv0_HeadVar__1_1));
#line 1051 "transform_hlds.implicit_parallelism.push_goals_together.c"
  }
#line 1053 "transform_hlds.implicit_parallelism.push_goals_together.c"
}

#line 623 "push_goals_together.m"
static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__IntroducedFrom__pred__push_into_goal__623__1_2_p_0(
#line 623 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__TailPaths_9,
#line 623 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_119)
#line 623 "push_goals_together.m"
{
#line 623 "push_goals_together.m"
  {
#line 623 "push_goals_together.m"
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;

#line 623 "push_goals_together.m"
    {
#line 623 "push_goals_together.m"
      return transform_hlds__implicit_parallelism__push_goals_together__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__implicit_parallelism__push_goals_together_scalar_common_1[1], ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__TailPaths_9)), ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_119)));
    }
#line 623 "push_goals_together.m"
    return transform_hlds__implicit_parallelism__push_goals_together__succeeded;
#line 623 "push_goals_together.m"
  }
#line 623 "push_goals_together.m"
}

#line 644 "push_goals_together.m"
static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__IntroducedFrom__pred__push_into_goal__644__1_2_p_0(
#line 644 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__TailPaths_9,
#line 644 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_113)
#line 644 "push_goals_together.m"
{
#line 644 "push_goals_together.m"
  {
#line 644 "push_goals_together.m"
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;

#line 644 "push_goals_together.m"
    {
#line 644 "push_goals_together.m"
      return transform_hlds__implicit_parallelism__push_goals_together__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__implicit_parallelism__push_goals_together_scalar_common_1[1], ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__TailPaths_9)), ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_113)));
    }
#line 644 "push_goals_together.m"
    return transform_hlds__implicit_parallelism__push_goals_together__succeeded;
#line 644 "push_goals_together.m"
  }
#line 644 "push_goals_together.m"
}

#line 29 "push_goals_together.m"
void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Compare____push_result_0_0(
#line 29 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
#line 29 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2,
#line 29 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3)
#line 29 "push_goals_together.m"
{
#line 29 "push_goals_together.m"
  {
#line 29 "push_goals_together.m"
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;
#line 29 "push_goals_together.m"
    MR_Integer transform_hlds__implicit_parallelism__push_goals_together__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2;
#line 29 "push_goals_together.m"
    MR_Integer transform_hlds__implicit_parallelism__push_goals_together__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3;

#line 29 "push_goals_together.m"
    {
#line 29 "push_goals_together.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1, transform_hlds__implicit_parallelism__push_goals_together__Cast_HeadVar1_4, transform_hlds__implicit_parallelism__push_goals_together__Cast_HeadVar2_5);
#line 29 "push_goals_together.m"
      return;
    }
#line 29 "push_goals_together.m"
  }
#line 29 "push_goals_together.m"
}

#line 29 "push_goals_together.m"
MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Unify____push_result_0_0(
#line 29 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_1,
#line 29 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2)
#line 29 "push_goals_together.m"
{
#line 1149 "transform_hlds.implicit_parallelism.push_goals_together.c"
  {
#line 1151 "transform_hlds.implicit_parallelism.push_goals_together.c"
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded = (transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_1 == transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2);

#line 1154 "transform_hlds.implicit_parallelism.push_goals_together.c"
    return transform_hlds__implicit_parallelism__push_goals_together__succeeded;
#line 1156 "transform_hlds.implicit_parallelism.push_goals_together.c"
  }
#line 29 "push_goals_together.m"
}

#line 79 "push_goals_together.m"
static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Compare____push_info_0_0(
#line 79 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
#line 79 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2,
#line 79 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3)
#line 79 "push_goals_together.m"
{
#line 79 "push_goals_together.m"
  {
#line 79 "push_goals_together.m"
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;
#line 79 "push_goals_together.m"
    MR_Integer transform_hlds__implicit_parallelism__push_goals_together__CastX_6 = (MR_Integer) transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2;
#line 79 "push_goals_together.m"
    MR_Integer transform_hlds__implicit_parallelism__push_goals_together__CastY_7 = (MR_Integer) transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3;

#line 79 "push_goals_together.m"
    transform_hlds__implicit_parallelism__push_goals_together__succeeded = (transform_hlds__implicit_parallelism__push_goals_together__CastX_6 == transform_hlds__implicit_parallelism__push_goals_together__CastY_7);
#line 79 "push_goals_together.m"
    if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 1185 "transform_hlds.implicit_parallelism.push_goals_together.c"
      *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1 = (MR_Integer) 0;
#line 79 "push_goals_together.m"
    else
#line 79 "push_goals_together.m"
      {
#line 79 "push_goals_together.m"
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_4_4 = (MR_Word) transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2;
#line 79 "push_goals_together.m"
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_5_5 = (MR_Word) transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3;

#line 79 "push_goals_together.m"
        {
#line 79 "push_goals_together.m"
          hlds__hlds_rtti____Compare____rtti_varmaps_0_0(transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1, transform_hlds__implicit_parallelism__push_goals_together__V_4_4, transform_hlds__implicit_parallelism__push_goals_together__V_5_5);
#line 79 "push_goals_together.m"
          return;
        }
#line 79 "push_goals_together.m"
      }
#line 79 "push_goals_together.m"
  }
#line 79 "push_goals_together.m"
}

#line 79 "push_goals_together.m"
static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Unify____push_info_0_0(
#line 79 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
#line 79 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2)
#line 79 "push_goals_together.m"
{
#line 79 "push_goals_together.m"
  {
#line 79 "push_goals_together.m"
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;
#line 79 "push_goals_together.m"
    MR_Integer transform_hlds__implicit_parallelism__push_goals_together__CastX_5 = (MR_Integer) transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1;
#line 79 "push_goals_together.m"
    MR_Integer transform_hlds__implicit_parallelism__push_goals_together__CastY_6 = (MR_Integer) transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2;

#line 79 "push_goals_together.m"
    transform_hlds__implicit_parallelism__push_goals_together__succeeded = (transform_hlds__implicit_parallelism__push_goals_together__CastX_5 == transform_hlds__implicit_parallelism__push_goals_together__CastY_6);
#line 79 "push_goals_together.m"
    if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 79 "push_goals_together.m"
      transform_hlds__implicit_parallelism__push_goals_together__succeeded = MR_TRUE;
#line 79 "push_goals_together.m"
    else
#line 79 "push_goals_together.m"
      {
#line 79 "push_goals_together.m"
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_3_3 = (MR_Word) transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1;
#line 79 "push_goals_together.m"
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_4_4 = (MR_Word) transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2;

#line 1243 "transform_hlds.implicit_parallelism.push_goals_together.c"
        {
#line 1245 "transform_hlds.implicit_parallelism.push_goals_together.c"
          return transform_hlds__implicit_parallelism__push_goals_together__succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(transform_hlds__implicit_parallelism__push_goals_together__V_3_3, transform_hlds__implicit_parallelism__push_goals_together__V_4_4);
        }
#line 79 "push_goals_together.m"
      }
#line 79 "push_goals_together.m"
    return transform_hlds__implicit_parallelism__push_goals_together__succeeded;
#line 79 "push_goals_together.m"
  }
#line 79 "push_goals_together.m"
}

#line 450 "push_goals_together.m"
static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Compare____maybe_pushable_0_0(
#line 450 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
#line 450 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2,
#line 450 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3)
#line 450 "push_goals_together.m"
{
#line 450 "push_goals_together.m"
  {
#line 450 "push_goals_together.m"
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;
#line 450 "push_goals_together.m"
    MR_Integer transform_hlds__implicit_parallelism__push_goals_together__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2;
#line 450 "push_goals_together.m"
    MR_Integer transform_hlds__implicit_parallelism__push_goals_together__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3;

#line 450 "push_goals_together.m"
    {
#line 450 "push_goals_together.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1, transform_hlds__implicit_parallelism__push_goals_together__Cast_HeadVar1_4, transform_hlds__implicit_parallelism__push_goals_together__Cast_HeadVar2_5);
#line 450 "push_goals_together.m"
      return;
    }
#line 450 "push_goals_together.m"
  }
#line 450 "push_goals_together.m"
}

#line 450 "push_goals_together.m"
static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Unify____maybe_pushable_0_0(
#line 450 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_1,
#line 450 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2)
#line 450 "push_goals_together.m"
{
#line 1298 "transform_hlds.implicit_parallelism.push_goals_together.c"
  {
#line 1300 "transform_hlds.implicit_parallelism.push_goals_together.c"
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded = (transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_1 == transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2);

#line 1303 "transform_hlds.implicit_parallelism.push_goals_together.c"
    return transform_hlds__implicit_parallelism__push_goals_together__succeeded;
#line 1305 "transform_hlds.implicit_parallelism.push_goals_together.c"
  }
#line 450 "push_goals_together.m"
}

#line 966 "push_goals_together.m"
static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__maybe_steps_after_3_p_0(
#line 966 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Step_4,
#line 966 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2,
#line 966 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__Tail_5)
#line 966 "push_goals_together.m"
{
#line 969 "push_goals_together.m"
  {
#line 969 "push_goals_together.m"
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded = ((MR_tag((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 969 "push_goals_together.m"
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_6_6;

#line 969 "push_goals_together.m"
    if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 969 "push_goals_together.m"
      {
#line 969 "push_goals_together.m"
        transform_hlds__implicit_parallelism__push_goals_together__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2, (MR_Integer) 0)));
#line 969 "push_goals_together.m"
        *transform_hlds__implicit_parallelism__push_goals_together__Tail_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2, (MR_Integer) 1)));
#line 969 "push_goals_together.m"
        {
#line 969 "push_goals_together.m"
          return transform_hlds__implicit_parallelism__push_goals_together__succeeded = mdbcomp__goal_path____Unify____goal_path_step_0_0(transform_hlds__implicit_parallelism__push_goals_together__Step_4, transform_hlds__implicit_parallelism__push_goals_together__V_6_6);
        }
#line 969 "push_goals_together.m"
      }
#line 969 "push_goals_together.m"
    return transform_hlds__implicit_parallelism__push_goals_together__succeeded;
#line 969 "push_goals_together.m"
  }
#line 966 "push_goals_together.m"
}

#line 956 "push_goals_together.m"
static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__find_relative_paths_3_p_0(
#line 956 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
#line 956 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2,
#line 956 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3)
#line 956 "push_goals_together.m"
{
#line 959 "push_goals_together.m"
  {
#line 959 "push_goals_together.m"
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;

#line 959 "push_goals_together.m"
    if ((transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 959 "push_goals_together.m"
      {
#line 959 "push_goals_together.m"
        *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 959 "push_goals_together.m"
        transform_hlds__implicit_parallelism__push_goals_together__succeeded = MR_TRUE;
#line 959 "push_goals_together.m"
      }
#line 959 "push_goals_together.m"
    else
#line 961 "push_goals_together.m"
      {
#line 961 "push_goals_together.m"
        MR_String transform_hlds__implicit_parallelism__push_goals_together__HeadStr_6 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2, (MR_Integer) 0)));
#line 961 "push_goals_together.m"
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__TailStrs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2, (MR_Integer) 1)));
#line 961 "push_goals_together.m"
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadRelPath_8;
#line 961 "push_goals_together.m"
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__TailRelPaths_9;
#line 961 "push_goals_together.m"
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadGoalPath_10;

#line 962 "push_goals_together.m"
        {
#line 962 "push_goals_together.m"
          transform_hlds__implicit_parallelism__push_goals_together__succeeded = mdbcomp__goal_path__goal_path_from_string_2_p_0(transform_hlds__implicit_parallelism__push_goals_together__HeadStr_6, &transform_hlds__implicit_parallelism__push_goals_together__HeadGoalPath_10);
        }
#line 961 "push_goals_together.m"
        if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 961 "push_goals_together.m"
          {
#line 963 "push_goals_together.m"
            {
#line 963 "push_goals_together.m"
              transform_hlds__implicit_parallelism__push_goals_together__succeeded = mdbcomp__goal_path__goal_path_inside_relative_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1, transform_hlds__implicit_parallelism__push_goals_together__HeadGoalPath_10, &transform_hlds__implicit_parallelism__push_goals_together__HeadRelPath_8);
            }
#line 961 "push_goals_together.m"
            if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 961 "push_goals_together.m"
              {
#line 964 "push_goals_together.m"
                {
#line 964 "push_goals_together.m"
                  transform_hlds__implicit_parallelism__push_goals_together__succeeded = transform_hlds__implicit_parallelism__push_goals_together__find_relative_paths_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1, transform_hlds__implicit_parallelism__push_goals_together__TailStrs_7, &transform_hlds__implicit_parallelism__push_goals_together__TailRelPaths_9);
                }
#line 961 "push_goals_together.m"
                if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 961 "push_goals_together.m"
                  {
#line 961 "push_goals_together.m"
                    {
#line 961 "push_goals_together.m"
                      MR_Word base;
#line 961 "push_goals_together.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 961 "push_goals_together.m"
                      *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3 = base;
#line 961 "push_goals_together.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__HeadRelPath_8));
#line 961 "push_goals_together.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__TailRelPaths_9));
#line 961 "push_goals_together.m"
                    }
#line 961 "push_goals_together.m"
                    transform_hlds__implicit_parallelism__push_goals_together__succeeded = MR_TRUE;
#line 961 "push_goals_together.m"
                  }
#line 961 "push_goals_together.m"
              }
#line 961 "push_goals_together.m"
          }
#line 961 "push_goals_together.m"
      }
#line 959 "push_goals_together.m"
    return transform_hlds__implicit_parallelism__push_goals_together__succeeded;
#line 959 "push_goals_together.m"
  }
#line 956 "push_goals_together.m"
}

#line 946 "push_goals_together.m"
static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_of_case_3_p_0(
#line 946 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__AddedGoals_4,
#line 946 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Case0_5,
#line 946 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__Case_6)
#line 946 "push_goals_together.m"
{
#line 949 "push_goals_together.m"
  {
#line 949 "push_goals_together.m"
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;
#line 949 "push_goals_together.m"
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__MainConsId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__Case0_5, (MR_Integer) 0)));
#line 949 "push_goals_together.m"
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__OtherConsIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__Case0_5, (MR_Integer) 1)));
#line 949 "push_goals_together.m"
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goal0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__Case0_5, (MR_Integer) 2)));
#line 949 "push_goals_together.m"
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goal_10;

#line 951 "push_goals_together.m"
    {
#line 951 "push_goals_together.m"
      transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__AddedGoals_4, transform_hlds__implicit_parallelism__push_goals_together__Goal0_9, &transform_hlds__implicit_parallelism__push_goals_together__Goal_10);
    }
#line 952 "push_goals_together.m"
    {
#line 952 "push_goals_together.m"
      MR_Word base;
#line 952 "push_goals_together.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 952 "push_goals_together.m"
      *transform_hlds__implicit_parallelism__push_goals_together__Case_6 = base;
#line 952 "push_goals_together.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__MainConsId_7));
#line 952 "push_goals_together.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__OtherConsIds_8));
#line 952 "push_goals_together.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Goal_10));
#line 952 "push_goals_together.m"
    }
#line 949 "push_goals_together.m"
  }
#line 946 "push_goals_together.m"
}

#line 935 "push_goals_together.m"
static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_3_p_0(
#line 935 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__AddedGoals_4,
#line 935 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goal0_5,
#line 935 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__Goal_6)
#line 935 "push_goals_together.m"
{
#line 938 "push_goals_together.m"
  {
#line 938 "push_goals_together.m"
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;
#line 938 "push_goals_together.m"
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__Goal0_5, (MR_Integer) 0)));
#line 939 "push_goals_together.m"
    MR_Word transform_hlds__implicit_parallelism__push_goals_together___GoalInfo0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__Goal0_5, (MR_Integer) 1)));
#line 942 "push_goals_together.m"
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__Conjuncts0_9;
#line 940 "push_goals_together.m"
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_10_10;

#line 940 "push_goals_together.m"
    transform_hlds__implicit_parallelism__push_goals_together__succeeded = ((((MR_tag((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 940 "push_goals_together.m"
    if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 940 "push_goals_together.m"
      {
#line 940 "push_goals_together.m"
        transform_hlds__implicit_parallelism__push_goals_together__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_7, (MR_Integer) 1)));
#line 940 "push_goals_together.m"
        transform_hlds__implicit_parallelism__push_goals_together__Conjuncts0_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_7, (MR_Integer) 2)));
#line 940 "push_goals_together.m"
        transform_hlds__implicit_parallelism__push_goals_together__succeeded = (transform_hlds__implicit_parallelism__push_goals_together__V_10_10 == (MR_Integer) 0);
#line 940 "push_goals_together.m"
      }
#line 942 "push_goals_together.m"
    if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 941 "push_goals_together.m"
      {
#line 941 "push_goals_together.m"
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_11_11;

#line 941 "push_goals_together.m"
        {
#line 941 "push_goals_together.m"
          transform_hlds__implicit_parallelism__push_goals_together__V_11_11 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__implicit_parallelism__push_goals_together__Conjuncts0_9, transform_hlds__implicit_parallelism__push_goals_together__AddedGoals_4);
        }
#line 941 "push_goals_together.m"
        {
#line 941 "push_goals_together.m"
          hlds__goal_util__create_conj_from_list_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__V_11_11, (MR_Integer) 0, transform_hlds__implicit_parallelism__push_goals_together__Goal_6);
#line 941 "push_goals_together.m"
          return;
        }
#line 941 "push_goals_together.m"
      }
#line 942 "push_goals_together.m"
    else
#line 943 "push_goals_together.m"
      {
#line 943 "push_goals_together.m"
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_13_13;

#line 943 "push_goals_together.m"
        {
#line 943 "push_goals_together.m"
          transform_hlds__implicit_parallelism__push_goals_together__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 943 "push_goals_together.m"
          MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__V_13_13, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Goal0_5));
#line 943 "push_goals_together.m"
          MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__V_13_13, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__AddedGoals_4));
#line 943 "push_goals_together.m"
        }
#line 943 "push_goals_together.m"
        {
#line 943 "push_goals_together.m"
          hlds__goal_util__create_conj_from_list_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__V_13_13, (MR_Integer) 0, transform_hlds__implicit_parallelism__push_goals_together__Goal_6);
#line 943 "push_goals_together.m"
          return;
        }
#line 943 "push_goals_together.m"
      }
#line 938 "push_goals_together.m"
  }
#line 935 "push_goals_together.m"
}

#line 916 "push_goals_together.m"
static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__build_ite_paths_map_3_p_0(
#line 916 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
#line 916 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2,
#line 916 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3)
#line 916 "push_goals_together.m"
{
#line 919 "push_goals_together.m"
  {
#line 919 "push_goals_together.m"
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;

#line 919 "push_goals_together.m"
    if ((transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 919 "push_goals_together.m"
      {
#line 919 "push_goals_together.m"
        *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 919 "push_goals_together.m"
        *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 919 "push_goals_together.m"
        transform_hlds__implicit_parallelism__push_goals_together__succeeded = MR_TRUE;
#line 919 "push_goals_together.m"
      }
#line 919 "push_goals_together.m"
    else
#line 920 "push_goals_together.m"
      {
#line 920 "push_goals_together.m"
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__Head_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1, (MR_Integer) 0)));
#line 920 "push_goals_together.m"
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__Tail_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1, (MR_Integer) 1)));
#line 920 "push_goals_together.m"
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__ThenPathsTail_8;
#line 920 "push_goals_together.m"
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__ElsePathsTail_9;
#line 920 "push_goals_together.m"
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadFirstStep_10;
#line 920 "push_goals_together.m"
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadLaterPath_11;

#line 921 "push_goals_together.m"
        {
#line 921 "push_goals_together.m"
          transform_hlds__implicit_parallelism__push_goals_together__succeeded = transform_hlds__implicit_parallelism__push_goals_together__build_ite_paths_map_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__Tail_5, &transform_hlds__implicit_parallelism__push_goals_together__ThenPathsTail_8, &transform_hlds__implicit_parallelism__push_goals_together__ElsePathsTail_9);
        }
#line 920 "push_goals_together.m"
        if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 920 "push_goals_together.m"
          {
#line 922 "push_goals_together.m"
            transform_hlds__implicit_parallelism__push_goals_together__succeeded = ((MR_tag((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__Head_4)) == (MR_mktag((MR_Integer) 1)));
#line 922 "push_goals_together.m"
            if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 922 "push_goals_together.m"
              {
#line 922 "push_goals_together.m"
                transform_hlds__implicit_parallelism__push_goals_together__HeadFirstStep_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__Head_4, (MR_Integer) 0)));
#line 922 "push_goals_together.m"
                transform_hlds__implicit_parallelism__push_goals_together__HeadLaterPath_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__Head_4, (MR_Integer) 1)));
#line 923 "push_goals_together.m"
                transform_hlds__implicit_parallelism__push_goals_together__succeeded = (transform_hlds__implicit_parallelism__push_goals_together__HeadFirstStep_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 926 "push_goals_together.m"
                if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 924 "push_goals_together.m"
                  {
#line 924 "push_goals_together.m"
                    {
#line 924 "push_goals_together.m"
                      MR_Word base;
#line 924 "push_goals_together.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 924 "push_goals_together.m"
                      *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2 = base;
#line 924 "push_goals_together.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__HeadLaterPath_11));
#line 924 "push_goals_together.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__ThenPathsTail_8));
#line 924 "push_goals_together.m"
                    }
#line 925 "push_goals_together.m"
                    *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3 = transform_hlds__implicit_parallelism__push_goals_together__ElsePathsTail_9;
#line 924 "push_goals_together.m"
                    transform_hlds__implicit_parallelism__push_goals_together__succeeded = MR_TRUE;
#line 924 "push_goals_together.m"
                  }
#line 926 "push_goals_together.m"
                else
#line 929 "push_goals_together.m"
                  {
#line 926 "push_goals_together.m"
                    transform_hlds__implicit_parallelism__push_goals_together__succeeded = (transform_hlds__implicit_parallelism__push_goals_together__HeadFirstStep_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 929 "push_goals_together.m"
                    if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 929 "push_goals_together.m"
                      {
#line 927 "push_goals_together.m"
                        *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2 = transform_hlds__implicit_parallelism__push_goals_together__ThenPathsTail_8;
#line 928 "push_goals_together.m"
                        {
#line 928 "push_goals_together.m"
                          MR_Word base;
#line 928 "push_goals_together.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 928 "push_goals_together.m"
                          *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3 = base;
#line 928 "push_goals_together.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__HeadLaterPath_11));
#line 928 "push_goals_together.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__ElsePathsTail_9));
#line 928 "push_goals_together.m"
                        }
#line 928 "push_goals_together.m"
                        transform_hlds__implicit_parallelism__push_goals_together__succeeded = MR_TRUE;
#line 929 "push_goals_together.m"
                      }
#line 929 "push_goals_together.m"
                  }
#line 922 "push_goals_together.m"
              }
#line 920 "push_goals_together.m"
          }
#line 920 "push_goals_together.m"
      }
#line 919 "push_goals_together.m"
    return transform_hlds__implicit_parallelism__push_goals_together__succeeded;
#line 919 "push_goals_together.m"
  }
#line 916 "push_goals_together.m"
}

#line 901 "push_goals_together.m"
static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__build_switch_paths_map_3_p_0(
#line 901 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
#line 901 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_0_2,
#line 901 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_3)
#line 901 "push_goals_together.m"
{
#line 905 "push_goals_together.m"
  while (MR_TRUE)
#line 905 "push_goals_together.m"
    {
#line 905 "push_goals_together.m"
      /* tailcall optimized into a loop */
#line 905 "push_goals_together.m"
      {
#line 905 "push_goals_together.m"
        MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;

#line 905 "push_goals_together.m"
        if ((transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 905 "push_goals_together.m"
          {
#line 905 "push_goals_together.m"
            *transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_3 = transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_0_2;
#line 905 "push_goals_together.m"
            transform_hlds__implicit_parallelism__push_goals_together__succeeded = MR_TRUE;
#line 905 "push_goals_together.m"
          }
#line 905 "push_goals_together.m"
        else
#line 906 "push_goals_together.m"
          {
#line 906 "push_goals_together.m"
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__Head_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1, (MR_Integer) 0)));
#line 906 "push_goals_together.m"
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__Tail_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1, (MR_Integer) 1)));
#line 906 "push_goals_together.m"
            MR_Integer transform_hlds__implicit_parallelism__push_goals_together__N_10;
#line 906 "push_goals_together.m"
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadLaterPath_12;
#line 906 "push_goals_together.m"
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_17_17;
#line 906 "push_goals_together.m"
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_20_20;
#line 907 "push_goals_together.m"
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_11_11;
#line 911 "push_goals_together.m"
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__One_13;
#line 911 "push_goals_together.m"
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__More_14;
#line 908 "push_goals_together.m"
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__TypeInfo_27_27;
#line 908 "push_goals_together.m"
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_18_18;
#line 908 "push_goals_together.m"
            MR_Box transform_hlds__implicit_parallelism__push_goals_together__conv0_V_18_18;

#line 907 "push_goals_together.m"
            transform_hlds__implicit_parallelism__push_goals_together__succeeded = ((MR_tag((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__Head_7)) == (MR_mktag((MR_Integer) 1)));
#line 907 "push_goals_together.m"
            if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 907 "push_goals_together.m"
              {
#line 907 "push_goals_together.m"
                transform_hlds__implicit_parallelism__push_goals_together__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__Head_7, (MR_Integer) 0)));
#line 907 "push_goals_together.m"
                transform_hlds__implicit_parallelism__push_goals_together__HeadLaterPath_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__Head_7, (MR_Integer) 1)));
#line 907 "push_goals_together.m"
                transform_hlds__implicit_parallelism__push_goals_together__succeeded = ((((MR_tag((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__V_17_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__V_17_17, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 907 "push_goals_together.m"
                if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 907 "push_goals_together.m"
                  {
#line 907 "push_goals_together.m"
                    transform_hlds__implicit_parallelism__push_goals_together__N_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__V_17_17, (MR_Integer) 1)));
#line 907 "push_goals_together.m"
                    transform_hlds__implicit_parallelism__push_goals_together__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__V_17_17, (MR_Integer) 2)));
#line 1805 "transform_hlds.implicit_parallelism.push_goals_together.c"
                    transform_hlds__implicit_parallelism__push_goals_together__TypeInfo_27_27 = (MR_Word) &transform_hlds__implicit_parallelism__push_goals_together_scalar_common_1[2];
#line 908 "push_goals_together.m"
                    {
#line 908 "push_goals_together.m"
                      transform_hlds__implicit_parallelism__push_goals_together__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__TypeInfo_27_27, transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_0_2, transform_hlds__implicit_parallelism__push_goals_together__N_10, &transform_hlds__implicit_parallelism__push_goals_together__conv0_V_18_18);
                    }
#line 908 "push_goals_together.m"
                    if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 908 "push_goals_together.m"
                      {
#line 908 "push_goals_together.m"
                        transform_hlds__implicit_parallelism__push_goals_together__V_18_18 = ((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__conv0_V_18_18);
#line 908 "push_goals_together.m"
                        transform_hlds__implicit_parallelism__push_goals_together__succeeded = MR_TRUE;
#line 908 "push_goals_together.m"
                      }
#line 908 "push_goals_together.m"
                    if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 908 "push_goals_together.m"
                      {
#line 908 "push_goals_together.m"
                        transform_hlds__implicit_parallelism__push_goals_together__One_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_18_18, (MR_Integer) 0)));
#line 908 "push_goals_together.m"
                        transform_hlds__implicit_parallelism__push_goals_together__More_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_18_18, (MR_Integer) 1)));
#line 908 "push_goals_together.m"
                        transform_hlds__implicit_parallelism__push_goals_together__succeeded = MR_TRUE;
#line 908 "push_goals_together.m"
                      }
#line 911 "push_goals_together.m"
                    if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 909 "push_goals_together.m"
                      {
#line 909 "push_goals_together.m"
                        MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_19_19;
#line 909 "push_goals_together.m"
                        MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_21_21;

#line 909 "push_goals_together.m"
                        {
#line 909 "push_goals_together.m"
                          transform_hlds__implicit_parallelism__push_goals_together__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 909 "push_goals_together.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__V_21_21, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__One_13));
#line 909 "push_goals_together.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__V_21_21, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__More_14));
#line 909 "push_goals_together.m"
                        }
#line 909 "push_goals_together.m"
                        {
#line 909 "push_goals_together.m"
                          transform_hlds__implicit_parallelism__push_goals_together__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 909 "push_goals_together.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_19_19, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__HeadLaterPath_12));
#line 909 "push_goals_together.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_19_19, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__V_21_21));
#line 909 "push_goals_together.m"
                        }
#line 909 "push_goals_together.m"
                        {
#line 909 "push_goals_together.m"
                          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &transform_hlds__implicit_parallelism__push_goals_together_scalar_common_1[2], transform_hlds__implicit_parallelism__push_goals_together__N_10, ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__V_19_19)), transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_0_2, &transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_20_20);
                        }
#line 909 "push_goals_together.m"
                      }
#line 911 "push_goals_together.m"
                    else
#line 912 "push_goals_together.m"
                      {
#line 912 "push_goals_together.m"
                        MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_22_22;

#line 912 "push_goals_together.m"
                        {
#line 912 "push_goals_together.m"
                          transform_hlds__implicit_parallelism__push_goals_together__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 912 "push_goals_together.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_22_22, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__HeadLaterPath_12));
#line 912 "push_goals_together.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 912 "push_goals_together.m"
                        }
#line 912 "push_goals_together.m"
                        {
#line 912 "push_goals_together.m"
                          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &transform_hlds__implicit_parallelism__push_goals_together_scalar_common_1[2], transform_hlds__implicit_parallelism__push_goals_together__N_10, ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__V_22_22)), transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_0_2, &transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_20_20);
                        }
#line 912 "push_goals_together.m"
                      }
#line 914 "push_goals_together.m"
                    {
#line 914 "push_goals_together.m"
                      /* direct tailcall eliminated */
#line 914 "push_goals_together.m"
                      {
#line 914 "push_goals_together.m"
                        MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1__tmp_copy_1 = transform_hlds__implicit_parallelism__push_goals_together__Tail_8;
#line 914 "push_goals_together.m"
                        MR_Word transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_0__tmp_copy_2 = transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_20_20;

#line 914 "push_goals_together.m"
                        transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_0_2 = transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_0__tmp_copy_2;
#line 914 "push_goals_together.m"
                        transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1 = transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1__tmp_copy_1;
#line 914 "push_goals_together.m"
                      }
#line 914 "push_goals_together.m"
                      continue;
#line 914 "push_goals_together.m"
                    }
#line 907 "push_goals_together.m"
                  }
#line 907 "push_goals_together.m"
              }
#line 906 "push_goals_together.m"
          }
#line 905 "push_goals_together.m"
        return transform_hlds__implicit_parallelism__push_goals_together__succeeded;
#line 905 "push_goals_together.m"
      }
#line 905 "push_goals_together.m"
      break;
#line 905 "push_goals_together.m"
    }
#line 901 "push_goals_together.m"
}

#line 886 "push_goals_together.m"
static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__build_disj_paths_map_3_p_0(
#line 886 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
#line 886 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_0_2,
#line 886 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_3)
#line 886 "push_goals_together.m"
{
#line 890 "push_goals_together.m"
  while (MR_TRUE)
#line 890 "push_goals_together.m"
    {
#line 890 "push_goals_together.m"
      /* tailcall optimized into a loop */
#line 890 "push_goals_together.m"
      {
#line 890 "push_goals_together.m"
        MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;

#line 890 "push_goals_together.m"
        if ((transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 890 "push_goals_together.m"
          {
#line 890 "push_goals_together.m"
            *transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_3 = transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_0_2;
#line 890 "push_goals_together.m"
            transform_hlds__implicit_parallelism__push_goals_together__succeeded = MR_TRUE;
#line 890 "push_goals_together.m"
          }
#line 890 "push_goals_together.m"
        else
#line 891 "push_goals_together.m"
          {
#line 891 "push_goals_together.m"
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__Head_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1, (MR_Integer) 0)));
#line 891 "push_goals_together.m"
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__Tail_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1, (MR_Integer) 1)));
#line 891 "push_goals_together.m"
            MR_Integer transform_hlds__implicit_parallelism__push_goals_together__N_10;
#line 891 "push_goals_together.m"
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadLaterPath_11;
#line 891 "push_goals_together.m"
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_16_16;
#line 891 "push_goals_together.m"
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_19_19;
#line 896 "push_goals_together.m"
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__One_12;
#line 896 "push_goals_together.m"
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__More_13;
#line 893 "push_goals_together.m"
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__TypeInfo_26_26;
#line 893 "push_goals_together.m"
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_17_17;
#line 893 "push_goals_together.m"
            MR_Box transform_hlds__implicit_parallelism__push_goals_together__conv0_V_17_17;

#line 892 "push_goals_together.m"
            transform_hlds__implicit_parallelism__push_goals_together__succeeded = ((MR_tag((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__Head_7)) == (MR_mktag((MR_Integer) 1)));
#line 892 "push_goals_together.m"
            if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 892 "push_goals_together.m"
              {
#line 892 "push_goals_together.m"
                transform_hlds__implicit_parallelism__push_goals_together__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__Head_7, (MR_Integer) 0)));
#line 892 "push_goals_together.m"
                transform_hlds__implicit_parallelism__push_goals_together__HeadLaterPath_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__Head_7, (MR_Integer) 1)));
#line 892 "push_goals_together.m"
                transform_hlds__implicit_parallelism__push_goals_together__succeeded = ((MR_tag((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__V_16_16)) == (MR_mktag((MR_Integer) 2)));
#line 892 "push_goals_together.m"
                if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 892 "push_goals_together.m"
                  {
#line 892 "push_goals_together.m"
                    transform_hlds__implicit_parallelism__push_goals_together__N_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__implicit_parallelism__push_goals_together__V_16_16, (MR_Integer) 0)));
#line 2009 "transform_hlds.implicit_parallelism.push_goals_together.c"
                    transform_hlds__implicit_parallelism__push_goals_together__TypeInfo_26_26 = (MR_Word) &transform_hlds__implicit_parallelism__push_goals_together_scalar_common_1[2];
#line 893 "push_goals_together.m"
                    {
#line 893 "push_goals_together.m"
                      transform_hlds__implicit_parallelism__push_goals_together__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__TypeInfo_26_26, transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_0_2, transform_hlds__implicit_parallelism__push_goals_together__N_10, &transform_hlds__implicit_parallelism__push_goals_together__conv0_V_17_17);
                    }
#line 893 "push_goals_together.m"
                    if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 893 "push_goals_together.m"
                      {
#line 893 "push_goals_together.m"
                        transform_hlds__implicit_parallelism__push_goals_together__V_17_17 = ((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__conv0_V_17_17);
#line 893 "push_goals_together.m"
                        transform_hlds__implicit_parallelism__push_goals_together__succeeded = MR_TRUE;
#line 893 "push_goals_together.m"
                      }
#line 893 "push_goals_together.m"
                    if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 893 "push_goals_together.m"
                      {
#line 893 "push_goals_together.m"
                        transform_hlds__implicit_parallelism__push_goals_together__One_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_17_17, (MR_Integer) 0)));
#line 893 "push_goals_together.m"
                        transform_hlds__implicit_parallelism__push_goals_together__More_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_17_17, (MR_Integer) 1)));
#line 893 "push_goals_together.m"
                        transform_hlds__implicit_parallelism__push_goals_together__succeeded = MR_TRUE;
#line 893 "push_goals_together.m"
                      }
#line 896 "push_goals_together.m"
                    if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 894 "push_goals_together.m"
                      {
#line 894 "push_goals_together.m"
                        MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_18_18;
#line 894 "push_goals_together.m"
                        MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_20_20;

#line 894 "push_goals_together.m"
                        {
#line 894 "push_goals_together.m"
                          transform_hlds__implicit_parallelism__push_goals_together__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 894 "push_goals_together.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__V_20_20, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__One_12));
#line 894 "push_goals_together.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__V_20_20, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__More_13));
#line 894 "push_goals_together.m"
                        }
#line 894 "push_goals_together.m"
                        {
#line 894 "push_goals_together.m"
                          transform_hlds__implicit_parallelism__push_goals_together__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 894 "push_goals_together.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_18_18, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__HeadLaterPath_11));
#line 894 "push_goals_together.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_18_18, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__V_20_20));
#line 894 "push_goals_together.m"
                        }
#line 894 "push_goals_together.m"
                        {
#line 894 "push_goals_together.m"
                          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &transform_hlds__implicit_parallelism__push_goals_together_scalar_common_1[2], transform_hlds__implicit_parallelism__push_goals_together__N_10, ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__V_18_18)), transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_0_2, &transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_19_19);
                        }
#line 894 "push_goals_together.m"
                      }
#line 896 "push_goals_together.m"
                    else
#line 897 "push_goals_together.m"
                      {
#line 897 "push_goals_together.m"
                        MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_21_21;

#line 897 "push_goals_together.m"
                        {
#line 897 "push_goals_together.m"
                          transform_hlds__implicit_parallelism__push_goals_together__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 897 "push_goals_together.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_21_21, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__HeadLaterPath_11));
#line 897 "push_goals_together.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 897 "push_goals_together.m"
                        }
#line 897 "push_goals_together.m"
                        {
#line 897 "push_goals_together.m"
                          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &transform_hlds__implicit_parallelism__push_goals_together_scalar_common_1[2], transform_hlds__implicit_parallelism__push_goals_together__N_10, ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__V_21_21)), transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_0_2, &transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_19_19);
                        }
#line 897 "push_goals_together.m"
                      }
#line 899 "push_goals_together.m"
                    {
#line 899 "push_goals_together.m"
                      /* direct tailcall eliminated */
#line 899 "push_goals_together.m"
                      {
#line 899 "push_goals_together.m"
                        MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1__tmp_copy_1 = transform_hlds__implicit_parallelism__push_goals_together__Tail_8;
#line 899 "push_goals_together.m"
                        MR_Word transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_0__tmp_copy_2 = transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_19_19;

#line 899 "push_goals_together.m"
                        transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_0_2 = transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_0__tmp_copy_2;
#line 899 "push_goals_together.m"
                        transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1 = transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1__tmp_copy_1;
#line 899 "push_goals_together.m"
                      }
#line 899 "push_goals_together.m"
                      continue;
#line 899 "push_goals_together.m"
                    }
#line 892 "push_goals_together.m"
                  }
#line 892 "push_goals_together.m"
              }
#line 891 "push_goals_together.m"
          }
#line 890 "push_goals_together.m"
        return transform_hlds__implicit_parallelism__push_goals_together__succeeded;
#line 890 "push_goals_together.m"
      }
#line 890 "push_goals_together.m"
      break;
#line 890 "push_goals_together.m"
    }
#line 886 "push_goals_together.m"
}

#line 858 "push_goals_together.m"
static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__push_into_cases_6_p_0_1(
#line 858 "push_goals_together.m"
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__closure_arg,
#line 858 "push_goals_together.m"
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1,
#line 858 "push_goals_together.m"
  MR_Box * transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2)
#line 858 "push_goals_together.m"
{
#line 858 "push_goals_together.m"
  {
#line 858 "push_goals_together.m"
    MR_Box transform_hlds__implicit_parallelism__push_goals_together__closure = transform_hlds__implicit_parallelism__push_goals_together__closure_arg;
#line 858 "push_goals_together.m"
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__conv0_Case_6;

#line 858 "push_goals_together.m"
    {
#line 858 "push_goals_together.m"
      transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_of_case_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1), &transform_hlds__implicit_parallelism__push_goals_together__conv0_Case_6);
    }
#line 858 "push_goals_together.m"
    *transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2 = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__conv0_Case_6));
#line 858 "push_goals_together.m"
  }
#line 858 "push_goals_together.m"
}

#line 841 "push_goals_together.m"
static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__push_into_cases_6_p_0(
#line 841 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
#line 841 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__PathList_2,
#line 841 "push_goals_together.m"
  MR_Integer transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3,
#line 841 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__4_4,
#line 841 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__5_5,
#line 841 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__Pushable_6)
#line 841 "push_goals_together.m"
{
#line 845 "push_goals_together.m"
  {
#line 845 "push_goals_together.m"
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;

#line 845 "push_goals_together.m"
    if ((transform_hlds__implicit_parallelism__push_goals_together__PathList_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 845 "push_goals_together.m"
      if ((transform_hlds__implicit_parallelism__push_goals_together__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 845 "push_goals_together.m"
        {
#line 845 "push_goals_together.m"
          *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 848 "push_goals_together.m"
          *transform_hlds__implicit_parallelism__push_goals_together__Pushable_6 = (MR_Integer) 1;
#line 845 "push_goals_together.m"
        }
#line 845 "push_goals_together.m"
      else
#line 854 "push_goals_together.m"
        {
#line 854 "push_goals_together.m"
          MR_Word transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_35_35;
#line 854 "push_goals_together.m"
          MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadCase0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__4_4, (MR_Integer) 0)));
#line 854 "push_goals_together.m"
          MR_Word transform_hlds__implicit_parallelism__push_goals_together__TailCases0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__4_4, (MR_Integer) 1)));
#line 854 "push_goals_together.m"
          MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadCase_18;
#line 854 "push_goals_together.m"
          MR_Word transform_hlds__implicit_parallelism__push_goals_together__TailCases_19;
#line 854 "push_goals_together.m"
          MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_32_32;
#line 854 "push_goals_together.m"
          MR_Word transform_hlds__implicit_parallelism__push_goals_together__MainConsId_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__HeadCase0_16, (MR_Integer) 0)));
#line 854 "push_goals_together.m"
          MR_Word transform_hlds__implicit_parallelism__push_goals_together__OtherConsIds_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__HeadCase0_16, (MR_Integer) 1)));
#line 854 "push_goals_together.m"
          MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goal0_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__HeadCase0_16, (MR_Integer) 2)));
#line 854 "push_goals_together.m"
          MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goal_64;

#line 951 "push_goals_together.m"
          {
#line 951 "push_goals_together.m"
            transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1, transform_hlds__implicit_parallelism__push_goals_together__Goal0_63, &transform_hlds__implicit_parallelism__push_goals_together__Goal_64);
          }
#line 952 "push_goals_together.m"
          {
#line 952 "push_goals_together.m"
            transform_hlds__implicit_parallelism__push_goals_together__HeadCase_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 952 "push_goals_together.m"
            MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__HeadCase_18, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__MainConsId_61));
#line 952 "push_goals_together.m"
            MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__HeadCase_18, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__OtherConsIds_62));
#line 952 "push_goals_together.m"
            MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__HeadCase_18, 2) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Goal_64));
#line 952 "push_goals_together.m"
          }
#line 858 "push_goals_together.m"
          {
#line 858 "push_goals_together.m"
            transform_hlds__implicit_parallelism__push_goals_together__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 858 "push_goals_together.m"
            MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_32_32, 0) = ((MR_Box) (&transform_hlds__implicit_parallelism__push_goals_together_scalar_common_2[2]));
#line 858 "push_goals_together.m"
            MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_32_32, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__push_into_cases_6_p_0_1));
#line 858 "push_goals_together.m"
            MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 858 "push_goals_together.m"
            MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_32_32, 3) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1));
#line 858 "push_goals_together.m"
          }
#line 2256 "transform_hlds.implicit_parallelism.push_goals_together.c"
          transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_35_35 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 858 "push_goals_together.m"
          {
#line 858 "push_goals_together.m"
            mercury__list__map_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_35_35, transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_35_35, transform_hlds__implicit_parallelism__push_goals_together__V_32_32, transform_hlds__implicit_parallelism__push_goals_together__TailCases0_17, &transform_hlds__implicit_parallelism__push_goals_together__TailCases_19);
          }
#line 859 "push_goals_together.m"
          *transform_hlds__implicit_parallelism__push_goals_together__Pushable_6 = (MR_Integer) 1;
#line 854 "push_goals_together.m"
          {
#line 854 "push_goals_together.m"
            MR_Word base;
#line 854 "push_goals_together.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 854 "push_goals_together.m"
            *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__5_5 = base;
#line 854 "push_goals_together.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__HeadCase_18));
#line 854 "push_goals_together.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__TailCases_19));
#line 854 "push_goals_together.m"
          }
#line 854 "push_goals_together.m"
        }
#line 845 "push_goals_together.m"
    else
#line 845 "push_goals_together.m"
      {
#line 845 "push_goals_together.m"
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__PathList_2, (MR_Integer) 1)));
#line 845 "push_goals_together.m"
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__PathList_2, (MR_Integer) 0)));

#line 845 "push_goals_together.m"
        if ((transform_hlds__implicit_parallelism__push_goals_together__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 845 "push_goals_together.m"
          {
#line 845 "push_goals_together.m"
            *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 851 "push_goals_together.m"
            *transform_hlds__implicit_parallelism__push_goals_together__Pushable_6 = (MR_Integer) 0;
#line 845 "push_goals_together.m"
          }
#line 845 "push_goals_together.m"
        else
#line 854 "push_goals_together.m"
          {
#line 854 "push_goals_together.m"
            MR_Integer transform_hlds__implicit_parallelism__push_goals_together__PathListHeadNum_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_57_57, (MR_Integer) 0)));
#line 854 "push_goals_together.m"
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__One_24;
#line 854 "push_goals_together.m"
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__More_25;
#line 854 "push_goals_together.m"
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_57_57, (MR_Integer) 1)));
#line 854 "push_goals_together.m"
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadCase0_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__4_4, (MR_Integer) 0)));
#line 854 "push_goals_together.m"
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__TailCases0_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__4_4, (MR_Integer) 1)));
#line 854 "push_goals_together.m"
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadCase_41;
#line 854 "push_goals_together.m"
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__TailCases_42;

#line 863 "push_goals_together.m"
            transform_hlds__implicit_parallelism__push_goals_together__One_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_27_27, (MR_Integer) 0)));
#line 863 "push_goals_together.m"
            transform_hlds__implicit_parallelism__push_goals_together__More_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_27_27, (MR_Integer) 1)));
#line 864 "push_goals_together.m"
            transform_hlds__implicit_parallelism__push_goals_together__succeeded = (transform_hlds__implicit_parallelism__push_goals_together__PathListHeadNum_23 == transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3);
#line 876 "push_goals_together.m"
            if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 866 "push_goals_together.m"
              {
#line 866 "push_goals_together.m"
                MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalPushable_26;
#line 866 "push_goals_together.m"
                MR_Word transform_hlds__implicit_parallelism__push_goals_together__MainConsId_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__HeadCase0_39, (MR_Integer) 0)));
#line 866 "push_goals_together.m"
                MR_Word transform_hlds__implicit_parallelism__push_goals_together__OtherConsIds_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__HeadCase0_39, (MR_Integer) 1)));
#line 866 "push_goals_together.m"
                MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goal0_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__HeadCase0_39, (MR_Integer) 2)));
#line 866 "push_goals_together.m"
                MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goal_74;

#line 794 "push_goals_together.m"
                {
#line 794 "push_goals_together.m"
                  transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0(transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1, transform_hlds__implicit_parallelism__push_goals_together__One_24, transform_hlds__implicit_parallelism__push_goals_together__More_25, transform_hlds__implicit_parallelism__push_goals_together__Goal0_73, &transform_hlds__implicit_parallelism__push_goals_together__Goal_74, &transform_hlds__implicit_parallelism__push_goals_together__GoalPushable_26);
                }
#line 795 "push_goals_together.m"
                {
#line 795 "push_goals_together.m"
                  transform_hlds__implicit_parallelism__push_goals_together__HeadCase_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 795 "push_goals_together.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__HeadCase_41, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__MainConsId_71));
#line 795 "push_goals_together.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__HeadCase_41, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__OtherConsIds_72));
#line 795 "push_goals_together.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__HeadCase_41, 2) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Goal_74));
#line 795 "push_goals_together.m"
                }
#line 871 "push_goals_together.m"
#line 871 "push_goals_together.m"
                switch (transform_hlds__implicit_parallelism__push_goals_together__GoalPushable_26) {
#line 871 "push_goals_together.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 871 "push_goals_together.m"
                  case (MR_Integer) 0:
#line 872 "push_goals_together.m"
                    {
#line 873 "push_goals_together.m"
                      transform_hlds__implicit_parallelism__push_goals_together__TailCases_42 = transform_hlds__implicit_parallelism__push_goals_together__TailCases0_40;
#line 874 "push_goals_together.m"
                      *transform_hlds__implicit_parallelism__push_goals_together__Pushable_6 = (MR_Integer) 0;
#line 872 "push_goals_together.m"
                    }
#line 871 "push_goals_together.m"
                    break;
#line 871 "push_goals_together.m"
                  case (MR_Integer) 1:
#line 868 "push_goals_together.m"
                    {
#line 868 "push_goals_together.m"
                      MR_Integer transform_hlds__implicit_parallelism__push_goals_together__V_28_28 = (transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3 + (MR_Integer) 1);

#line 869 "push_goals_together.m"
                      {
#line 869 "push_goals_together.m"
                        transform_hlds__implicit_parallelism__push_goals_together__push_into_cases_6_p_0(transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1, transform_hlds__implicit_parallelism__push_goals_together__V_56_56, transform_hlds__implicit_parallelism__push_goals_together__V_28_28, transform_hlds__implicit_parallelism__push_goals_together__TailCases0_40, &transform_hlds__implicit_parallelism__push_goals_together__TailCases_42, transform_hlds__implicit_parallelism__push_goals_together__Pushable_6);
                      }
#line 868 "push_goals_together.m"
                    }
#line 871 "push_goals_together.m"
                    break;
#line 871 "push_goals_together.m"
                }
#line 866 "push_goals_together.m"
              }
#line 876 "push_goals_together.m"
            else
#line 877 "push_goals_together.m"
              {
#line 877 "push_goals_together.m"
                MR_Integer transform_hlds__implicit_parallelism__push_goals_together__V_30_30;
#line 877 "push_goals_together.m"
                MR_Word transform_hlds__implicit_parallelism__push_goals_together__MainConsId_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__HeadCase0_39, (MR_Integer) 0)));
#line 877 "push_goals_together.m"
                MR_Word transform_hlds__implicit_parallelism__push_goals_together__OtherConsIds_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__HeadCase0_39, (MR_Integer) 1)));
#line 877 "push_goals_together.m"
                MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goal0_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__HeadCase0_39, (MR_Integer) 2)));
#line 877 "push_goals_together.m"
                MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goal_81;

#line 951 "push_goals_together.m"
                {
#line 951 "push_goals_together.m"
                  transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1, transform_hlds__implicit_parallelism__push_goals_together__Goal0_80, &transform_hlds__implicit_parallelism__push_goals_together__Goal_81);
                }
#line 952 "push_goals_together.m"
                {
#line 952 "push_goals_together.m"
                  transform_hlds__implicit_parallelism__push_goals_together__HeadCase_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 952 "push_goals_together.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__HeadCase_41, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__MainConsId_78));
#line 952 "push_goals_together.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__HeadCase_41, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__OtherConsIds_79));
#line 952 "push_goals_together.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__HeadCase_41, 2) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Goal_81));
#line 952 "push_goals_together.m"
                }
#line 878 "push_goals_together.m"
                transform_hlds__implicit_parallelism__push_goals_together__V_30_30 = (transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3 + (MR_Integer) 1);
#line 878 "push_goals_together.m"
                {
#line 878 "push_goals_together.m"
                  transform_hlds__implicit_parallelism__push_goals_together__push_into_cases_6_p_0(transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1, transform_hlds__implicit_parallelism__push_goals_together__PathList_2, transform_hlds__implicit_parallelism__push_goals_together__V_30_30, transform_hlds__implicit_parallelism__push_goals_together__TailCases0_40, &transform_hlds__implicit_parallelism__push_goals_together__TailCases_42, transform_hlds__implicit_parallelism__push_goals_together__Pushable_6);
                }
#line 877 "push_goals_together.m"
              }
#line 854 "push_goals_together.m"
            {
#line 854 "push_goals_together.m"
              MR_Word base;
#line 854 "push_goals_together.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 854 "push_goals_together.m"
              *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__5_5 = base;
#line 854 "push_goals_together.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__HeadCase_41));
#line 854 "push_goals_together.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__TailCases_42));
#line 854 "push_goals_together.m"
            }
#line 854 "push_goals_together.m"
          }
#line 845 "push_goals_together.m"
      }
#line 845 "push_goals_together.m"
  }
#line 841 "push_goals_together.m"
}

#line 815 "push_goals_together.m"
static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__push_into_disjuncts_6_p_0_1(
#line 815 "push_goals_together.m"
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__closure_arg,
#line 815 "push_goals_together.m"
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1,
#line 815 "push_goals_together.m"
  MR_Box * transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2)
#line 815 "push_goals_together.m"
{
#line 815 "push_goals_together.m"
  {
#line 815 "push_goals_together.m"
    MR_Box transform_hlds__implicit_parallelism__push_goals_together__closure = transform_hlds__implicit_parallelism__push_goals_together__closure_arg;
#line 815 "push_goals_together.m"
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__conv0_Goal_6;

#line 815 "push_goals_together.m"
    {
#line 815 "push_goals_together.m"
      transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1), &transform_hlds__implicit_parallelism__push_goals_together__conv0_Goal_6);
    }
#line 815 "push_goals_together.m"
    *transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2 = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__conv0_Goal_6));
#line 815 "push_goals_together.m"
  }
#line 815 "push_goals_together.m"
}

#line 797 "push_goals_together.m"
static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__push_into_disjuncts_6_p_0(
#line 797 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
#line 797 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2,
#line 797 "push_goals_together.m"
  MR_Integer transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3,
#line 797 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__4_4,
#line 797 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__5_5,
#line 797 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__Pushable_6)
#line 797 "push_goals_together.m"
{
#line 802 "push_goals_together.m"
  {
#line 802 "push_goals_together.m"
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;

#line 802 "push_goals_together.m"
    if ((transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 802 "push_goals_together.m"
      if ((transform_hlds__implicit_parallelism__push_goals_together__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 802 "push_goals_together.m"
        {
#line 802 "push_goals_together.m"
          *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 805 "push_goals_together.m"
          *transform_hlds__implicit_parallelism__push_goals_together__Pushable_6 = (MR_Integer) 1;
#line 802 "push_goals_together.m"
        }
#line 802 "push_goals_together.m"
      else
#line 811 "push_goals_together.m"
        {
#line 811 "push_goals_together.m"
          MR_Word transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_35_35;
#line 811 "push_goals_together.m"
          MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadDisjunct0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__4_4, (MR_Integer) 0)));
#line 811 "push_goals_together.m"
          MR_Word transform_hlds__implicit_parallelism__push_goals_together__TailDisjuncts0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__4_4, (MR_Integer) 1)));
#line 811 "push_goals_together.m"
          MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadDisjunct_18;
#line 811 "push_goals_together.m"
          MR_Word transform_hlds__implicit_parallelism__push_goals_together__TailDisjuncts_19;
#line 811 "push_goals_together.m"
          MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_32_32;

#line 814 "push_goals_together.m"
          {
#line 814 "push_goals_together.m"
            transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1, transform_hlds__implicit_parallelism__push_goals_together__HeadDisjunct0_16, &transform_hlds__implicit_parallelism__push_goals_together__HeadDisjunct_18);
          }
#line 815 "push_goals_together.m"
          {
#line 815 "push_goals_together.m"
            transform_hlds__implicit_parallelism__push_goals_together__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 815 "push_goals_together.m"
            MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_32_32, 0) = ((MR_Box) (&transform_hlds__implicit_parallelism__push_goals_together_scalar_common_2[1]));
#line 815 "push_goals_together.m"
            MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_32_32, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__push_into_disjuncts_6_p_0_1));
#line 815 "push_goals_together.m"
            MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 815 "push_goals_together.m"
            MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_32_32, 3) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1));
#line 815 "push_goals_together.m"
          }
#line 2560 "transform_hlds.implicit_parallelism.push_goals_together.c"
          transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_35_35 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 815 "push_goals_together.m"
          {
#line 815 "push_goals_together.m"
            mercury__list__map_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_35_35, transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_35_35, transform_hlds__implicit_parallelism__push_goals_together__V_32_32, transform_hlds__implicit_parallelism__push_goals_together__TailDisjuncts0_17, &transform_hlds__implicit_parallelism__push_goals_together__TailDisjuncts_19);
          }
#line 816 "push_goals_together.m"
          *transform_hlds__implicit_parallelism__push_goals_together__Pushable_6 = (MR_Integer) 1;
#line 811 "push_goals_together.m"
          {
#line 811 "push_goals_together.m"
            MR_Word base;
#line 811 "push_goals_together.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 811 "push_goals_together.m"
            *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__5_5 = base;
#line 811 "push_goals_together.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__HeadDisjunct_18));
#line 811 "push_goals_together.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__TailDisjuncts_19));
#line 811 "push_goals_together.m"
          }
#line 811 "push_goals_together.m"
        }
#line 802 "push_goals_together.m"
    else
#line 802 "push_goals_together.m"
      {
#line 802 "push_goals_together.m"
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2, (MR_Integer) 1)));
#line 802 "push_goals_together.m"
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2, (MR_Integer) 0)));

#line 802 "push_goals_together.m"
        if ((transform_hlds__implicit_parallelism__push_goals_together__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 802 "push_goals_together.m"
          {
#line 802 "push_goals_together.m"
            *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 808 "push_goals_together.m"
            *transform_hlds__implicit_parallelism__push_goals_together__Pushable_6 = (MR_Integer) 0;
#line 802 "push_goals_together.m"
          }
#line 802 "push_goals_together.m"
        else
#line 811 "push_goals_together.m"
          {
#line 811 "push_goals_together.m"
            MR_Integer transform_hlds__implicit_parallelism__push_goals_together__PathListHeadNum_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_57_57, (MR_Integer) 0)));
#line 811 "push_goals_together.m"
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__One_24;
#line 811 "push_goals_together.m"
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__More_25;
#line 811 "push_goals_together.m"
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_57_57, (MR_Integer) 1)));
#line 811 "push_goals_together.m"
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadDisjunct0_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__4_4, (MR_Integer) 0)));
#line 811 "push_goals_together.m"
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__TailDisjuncts0_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__4_4, (MR_Integer) 1)));
#line 811 "push_goals_together.m"
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadDisjunct_41;
#line 811 "push_goals_together.m"
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__TailDisjuncts_42;

#line 820 "push_goals_together.m"
            transform_hlds__implicit_parallelism__push_goals_together__One_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_27_27, (MR_Integer) 0)));
#line 820 "push_goals_together.m"
            transform_hlds__implicit_parallelism__push_goals_together__More_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_27_27, (MR_Integer) 1)));
#line 821 "push_goals_together.m"
            transform_hlds__implicit_parallelism__push_goals_together__succeeded = (transform_hlds__implicit_parallelism__push_goals_together__PathListHeadNum_23 == transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3);
#line 833 "push_goals_together.m"
            if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 823 "push_goals_together.m"
              {
#line 823 "push_goals_together.m"
                MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalPushable_26;

#line 822 "push_goals_together.m"
                {
#line 822 "push_goals_together.m"
                  transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0(transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1, transform_hlds__implicit_parallelism__push_goals_together__One_24, transform_hlds__implicit_parallelism__push_goals_together__More_25, transform_hlds__implicit_parallelism__push_goals_together__HeadDisjunct0_39, &transform_hlds__implicit_parallelism__push_goals_together__HeadDisjunct_41, &transform_hlds__implicit_parallelism__push_goals_together__GoalPushable_26);
                }
#line 828 "push_goals_together.m"
#line 828 "push_goals_together.m"
                switch (transform_hlds__implicit_parallelism__push_goals_together__GoalPushable_26) {
#line 828 "push_goals_together.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 828 "push_goals_together.m"
                  case (MR_Integer) 0:
#line 829 "push_goals_together.m"
                    {
#line 830 "push_goals_together.m"
                      transform_hlds__implicit_parallelism__push_goals_together__TailDisjuncts_42 = transform_hlds__implicit_parallelism__push_goals_together__TailDisjuncts0_40;
#line 831 "push_goals_together.m"
                      *transform_hlds__implicit_parallelism__push_goals_together__Pushable_6 = (MR_Integer) 0;
#line 829 "push_goals_together.m"
                    }
#line 828 "push_goals_together.m"
                    break;
#line 828 "push_goals_together.m"
                  case (MR_Integer) 1:
#line 825 "push_goals_together.m"
                    {
#line 825 "push_goals_together.m"
                      MR_Integer transform_hlds__implicit_parallelism__push_goals_together__V_28_28 = (transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3 + (MR_Integer) 1);

#line 826 "push_goals_together.m"
                      {
#line 826 "push_goals_together.m"
                        transform_hlds__implicit_parallelism__push_goals_together__push_into_disjuncts_6_p_0(transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1, transform_hlds__implicit_parallelism__push_goals_together__V_56_56, transform_hlds__implicit_parallelism__push_goals_together__V_28_28, transform_hlds__implicit_parallelism__push_goals_together__TailDisjuncts0_40, &transform_hlds__implicit_parallelism__push_goals_together__TailDisjuncts_42, transform_hlds__implicit_parallelism__push_goals_together__Pushable_6);
                      }
#line 825 "push_goals_together.m"
                    }
#line 828 "push_goals_together.m"
                    break;
#line 828 "push_goals_together.m"
                }
#line 823 "push_goals_together.m"
              }
#line 833 "push_goals_together.m"
            else
#line 834 "push_goals_together.m"
              {
#line 834 "push_goals_together.m"
                MR_Integer transform_hlds__implicit_parallelism__push_goals_together__V_30_30;

#line 834 "push_goals_together.m"
                {
#line 834 "push_goals_together.m"
                  transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1, transform_hlds__implicit_parallelism__push_goals_together__HeadDisjunct0_39, &transform_hlds__implicit_parallelism__push_goals_together__HeadDisjunct_41);
                }
#line 835 "push_goals_together.m"
                transform_hlds__implicit_parallelism__push_goals_together__V_30_30 = (transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3 + (MR_Integer) 1);
#line 835 "push_goals_together.m"
                {
#line 835 "push_goals_together.m"
                  transform_hlds__implicit_parallelism__push_goals_together__push_into_disjuncts_6_p_0(transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1, transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2, transform_hlds__implicit_parallelism__push_goals_together__V_30_30, transform_hlds__implicit_parallelism__push_goals_together__TailDisjuncts0_40, &transform_hlds__implicit_parallelism__push_goals_together__TailDisjuncts_42, transform_hlds__implicit_parallelism__push_goals_together__Pushable_6);
                }
#line 834 "push_goals_together.m"
              }
#line 811 "push_goals_together.m"
            {
#line 811 "push_goals_together.m"
              MR_Word base;
#line 811 "push_goals_together.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 811 "push_goals_together.m"
              *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__5_5 = base;
#line 811 "push_goals_together.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__HeadDisjunct_41));
#line 811 "push_goals_together.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__TailDisjuncts_42));
#line 811 "push_goals_together.m"
            }
#line 811 "push_goals_together.m"
          }
#line 802 "push_goals_together.m"
      }
#line 802 "push_goals_together.m"
  }
#line 797 "push_goals_together.m"
}

#line 762 "push_goals_together.m"
static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0_4(
#line 762 "push_goals_together.m"
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__closure_arg,
#line 762 "push_goals_together.m"
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1,
#line 762 "push_goals_together.m"
  MR_Box * transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2)
#line 762 "push_goals_together.m"
{
#line 762 "push_goals_together.m"
  {
#line 762 "push_goals_together.m"
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;
#line 762 "push_goals_together.m"
    MR_Box transform_hlds__implicit_parallelism__push_goals_together__closure = transform_hlds__implicit_parallelism__push_goals_together__closure_arg;
#line 762 "push_goals_together.m"
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__conv2_Tail_5;

#line 762 "push_goals_together.m"
    {
#line 762 "push_goals_together.m"
      transform_hlds__implicit_parallelism__push_goals_together__succeeded = transform_hlds__implicit_parallelism__push_goals_together__maybe_steps_after_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1), &transform_hlds__implicit_parallelism__push_goals_together__conv2_Tail_5);
    }
#line 762 "push_goals_together.m"
    if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 762 "push_goals_together.m"
      {
#line 762 "push_goals_together.m"
        *transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2 = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__conv2_Tail_5));
#line 762 "push_goals_together.m"
        transform_hlds__implicit_parallelism__push_goals_together__succeeded = MR_TRUE;
#line 762 "push_goals_together.m"
      }
#line 762 "push_goals_together.m"
    return transform_hlds__implicit_parallelism__push_goals_together__succeeded;
#line 762 "push_goals_together.m"
  }
#line 762 "push_goals_together.m"
}

#line 655 "push_goals_together.m"
static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0_3(
#line 655 "push_goals_together.m"
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__closure_arg,
#line 655 "push_goals_together.m"
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1,
#line 655 "push_goals_together.m"
  MR_Box * transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2)
#line 655 "push_goals_together.m"
{
#line 655 "push_goals_together.m"
  {
#line 655 "push_goals_together.m"
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;
#line 655 "push_goals_together.m"
    MR_Box transform_hlds__implicit_parallelism__push_goals_together__closure = transform_hlds__implicit_parallelism__push_goals_together__closure_arg;
#line 655 "push_goals_together.m"
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__conv0_Tail_5;

#line 655 "push_goals_together.m"
    {
#line 655 "push_goals_together.m"
      transform_hlds__implicit_parallelism__push_goals_together__succeeded = transform_hlds__implicit_parallelism__push_goals_together__maybe_steps_after_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1), &transform_hlds__implicit_parallelism__push_goals_together__conv0_Tail_5);
    }
#line 655 "push_goals_together.m"
    if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 655 "push_goals_together.m"
      {
#line 655 "push_goals_together.m"
        *transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2 = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__conv0_Tail_5));
#line 655 "push_goals_together.m"
        transform_hlds__implicit_parallelism__push_goals_together__succeeded = MR_TRUE;
#line 655 "push_goals_together.m"
      }
#line 655 "push_goals_together.m"
    return transform_hlds__implicit_parallelism__push_goals_together__succeeded;
#line 655 "push_goals_together.m"
  }
#line 655 "push_goals_together.m"
}

#line 644 "push_goals_together.m"
static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0_2(
#line 644 "push_goals_together.m"
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__closure_arg)
#line 644 "push_goals_together.m"
{
#line 644 "push_goals_together.m"
  {
#line 644 "push_goals_together.m"
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;
#line 644 "push_goals_together.m"
    MR_Box transform_hlds__implicit_parallelism__push_goals_together__closure = transform_hlds__implicit_parallelism__push_goals_together__closure_arg;

#line 644 "push_goals_together.m"
    {
#line 644 "push_goals_together.m"
      return transform_hlds__implicit_parallelism__push_goals_together__succeeded = transform_hlds__implicit_parallelism__push_goals_together__IntroducedFrom__pred__push_into_goal__644__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__closure, (MR_Integer) 4))));
    }
#line 644 "push_goals_together.m"
    return transform_hlds__implicit_parallelism__push_goals_together__succeeded;
#line 644 "push_goals_together.m"
  }
#line 644 "push_goals_together.m"
}

#line 623 "push_goals_together.m"
static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0_1(
#line 623 "push_goals_together.m"
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__closure_arg)
#line 623 "push_goals_together.m"
{
#line 623 "push_goals_together.m"
  {
#line 623 "push_goals_together.m"
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;
#line 623 "push_goals_together.m"
    MR_Box transform_hlds__implicit_parallelism__push_goals_together__closure = transform_hlds__implicit_parallelism__push_goals_together__closure_arg;

#line 623 "push_goals_together.m"
    {
#line 623 "push_goals_together.m"
      return transform_hlds__implicit_parallelism__push_goals_together__succeeded = transform_hlds__implicit_parallelism__push_goals_together__IntroducedFrom__pred__push_into_goal__623__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__closure, (MR_Integer) 4))));
    }
#line 623 "push_goals_together.m"
    return transform_hlds__implicit_parallelism__push_goals_together__succeeded;
#line 623 "push_goals_together.m"
  }
#line 623 "push_goals_together.m"
}

#line 615 "push_goals_together.m"
static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0(
#line 615 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__LoHi_7,
#line 615 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadPath_8,
#line 615 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__TailPaths_9,
#line 615 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goal0_10,
#line 615 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__Goal_11,
#line 615 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__Pushable_12)
#line 615 "push_goals_together.m"
{
#line 619 "push_goals_together.m"
  {
#line 619 "push_goals_together.m"
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;
#line 619 "push_goals_together.m"
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__Goal0_10, (MR_Integer) 0)));
#line 619 "push_goals_together.m"
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalInfo0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__Goal0_10, (MR_Integer) 1)));

#line 626 "push_goals_together.m"
    if ((transform_hlds__implicit_parallelism__push_goals_together__HeadPath_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 622 "push_goals_together.m"
      {
#line 622 "push_goals_together.m"
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_116_116;

#line 623 "push_goals_together.m"
        {
#line 623 "push_goals_together.m"
          transform_hlds__implicit_parallelism__push_goals_together__V_116_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 623 "push_goals_together.m"
          MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_116_116, 0) = ((MR_Box) (&transform_hlds__implicit_parallelism__push_goals_together_scalar_common_3[1]));
#line 623 "push_goals_together.m"
          MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_116_116, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0_1));
#line 623 "push_goals_together.m"
          MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_116_116, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 623 "push_goals_together.m"
          MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_116_116, 3) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__TailPaths_9));
#line 623 "push_goals_together.m"
          MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_116_116, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 623 "push_goals_together.m"
        }
#line 623 "push_goals_together.m"
        {
#line 623 "push_goals_together.m"
          mercury__require__expect_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__V_116_116, (MR_String) "transform_hlds.implicit_parallelism.push_goals_together", (MR_String) "TailSteps != []");
        }
#line 624 "push_goals_together.m"
        {
#line 624 "push_goals_together.m"
          transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__LoHi_7, transform_hlds__implicit_parallelism__push_goals_together__Goal0_10, transform_hlds__implicit_parallelism__push_goals_together__Goal_11);
        }
#line 625 "push_goals_together.m"
        *transform_hlds__implicit_parallelism__push_goals_together__Pushable_12 = (MR_Integer) 1;
#line 622 "push_goals_together.m"
      }
#line 626 "push_goals_together.m"
    else
#line 627 "push_goals_together.m"
      {
#line 627 "push_goals_together.m"
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__FirstHeadStep_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadPath_8, (MR_Integer) 0)));
#line 627 "push_goals_together.m"
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__LaterHeadPath_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadPath_8, (MR_Integer) 1)));

#line 636 "push_goals_together.m"
#line 636 "push_goals_together.m"
        switch (MR_tag((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_13)) {
#line 636 "push_goals_together.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 636 "push_goals_together.m"
          case (MR_Integer) 0:
#line 748 "push_goals_together.m"
            {
#line 751 "push_goals_together.m"
              *transform_hlds__implicit_parallelism__push_goals_together__Goal_11 = transform_hlds__implicit_parallelism__push_goals_together__Goal0_10;
#line 752 "push_goals_together.m"
              *transform_hlds__implicit_parallelism__push_goals_together__Pushable_12 = (MR_Integer) 0;
#line 748 "push_goals_together.m"
            }
#line 636 "push_goals_together.m"
            break;
#line 636 "push_goals_together.m"
          case (MR_Integer) 1:
#line 636 "push_goals_together.m"
          case (MR_Integer) 2:
#line 633 "push_goals_together.m"
            {
#line 634 "push_goals_together.m"
              *transform_hlds__implicit_parallelism__push_goals_together__Goal_11 = transform_hlds__implicit_parallelism__push_goals_together__Goal0_10;
#line 635 "push_goals_together.m"
              *transform_hlds__implicit_parallelism__push_goals_together__Pushable_12 = (MR_Integer) 0;
#line 633 "push_goals_together.m"
            }
#line 636 "push_goals_together.m"
            break;
#line 636 "push_goals_together.m"
          case (MR_Integer) 3:
#line 636 "push_goals_together.m"
#line 636 "push_goals_together.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_13, (MR_Integer) 0)))) {
#line 636 "push_goals_together.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 636 "push_goals_together.m"
              case (MR_Integer) 0:
#line 636 "push_goals_together.m"
              case (MR_Integer) 1:
#line 633 "push_goals_together.m"
                {
#line 634 "push_goals_together.m"
                  *transform_hlds__implicit_parallelism__push_goals_together__Goal_11 = transform_hlds__implicit_parallelism__push_goals_together__Goal0_10;
#line 635 "push_goals_together.m"
                  *transform_hlds__implicit_parallelism__push_goals_together__Pushable_12 = (MR_Integer) 0;
#line 633 "push_goals_together.m"
                }
#line 636 "push_goals_together.m"
                break;
#line 636 "push_goals_together.m"
              case (MR_Integer) 2:
#line 637 "push_goals_together.m"
                {
#line 637 "push_goals_together.m"
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__ConjType_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_13, (MR_Integer) 1)));
#line 637 "push_goals_together.m"
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Conjuncts0_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_13, (MR_Integer) 2)));
#line 641 "push_goals_together.m"
                  MR_Integer transform_hlds__implicit_parallelism__push_goals_together__V_42_42;

#line 641 "push_goals_together.m"
                  transform_hlds__implicit_parallelism__push_goals_together__succeeded = ((MR_tag((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__FirstHeadStep_15)) == (MR_mktag((MR_Integer) 1)));
#line 641 "push_goals_together.m"
                  if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 641 "push_goals_together.m"
                    {
#line 641 "push_goals_together.m"
                      transform_hlds__implicit_parallelism__push_goals_together__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__FirstHeadStep_15, (MR_Integer) 0)));
#line 642 "push_goals_together.m"
                      transform_hlds__implicit_parallelism__push_goals_together__succeeded = (transform_hlds__implicit_parallelism__push_goals_together__LaterHeadPath_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 641 "push_goals_together.m"
                    }
#line 647 "push_goals_together.m"
                  if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 644 "push_goals_together.m"
                    {
#line 644 "push_goals_together.m"
                      MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_110_110;

#line 644 "push_goals_together.m"
                      {
#line 644 "push_goals_together.m"
                        transform_hlds__implicit_parallelism__push_goals_together__V_110_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 644 "push_goals_together.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_110_110, 0) = ((MR_Box) (&transform_hlds__implicit_parallelism__push_goals_together_scalar_common_3[1]));
#line 644 "push_goals_together.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_110_110, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0_2));
#line 644 "push_goals_together.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_110_110, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 644 "push_goals_together.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_110_110, 3) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__TailPaths_9));
#line 644 "push_goals_together.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_110_110, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 644 "push_goals_together.m"
                      }
#line 644 "push_goals_together.m"
                      {
#line 644 "push_goals_together.m"
                        mercury__require__expect_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__V_110_110, (MR_String) "transform_hlds.implicit_parallelism.push_goals_together", (MR_String) "TailSteps != []");
                      }
#line 645 "push_goals_together.m"
                      {
#line 645 "push_goals_together.m"
                        transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__LoHi_7, transform_hlds__implicit_parallelism__push_goals_together__Goal0_10, transform_hlds__implicit_parallelism__push_goals_together__Goal_11);
                      }
#line 646 "push_goals_together.m"
                      *transform_hlds__implicit_parallelism__push_goals_together__Pushable_12 = (MR_Integer) 1;
#line 644 "push_goals_together.m"
                    }
#line 647 "push_goals_together.m"
                  else
#line 675 "push_goals_together.m"
                    {
#line 675 "push_goals_together.m"
                      MR_Integer transform_hlds__implicit_parallelism__push_goals_together__ConjNum_43;
#line 675 "push_goals_together.m"
                      MR_Word transform_hlds__implicit_parallelism__push_goals_together__LaterTailPaths_44;
#line 675 "push_goals_together.m"
                      MR_Word transform_hlds__implicit_parallelism__push_goals_together__SelectedConjunct0_45;
#line 654 "push_goals_together.m"
                      MR_Word transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_143_143;
#line 654 "push_goals_together.m"
                      MR_Word transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_144_144;
#line 654 "push_goals_together.m"
                      MR_Integer transform_hlds__implicit_parallelism__push_goals_together__Length_46;
#line 654 "push_goals_together.m"
                      MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_114_114;
#line 657 "push_goals_together.m"
                      MR_Box transform_hlds__implicit_parallelism__push_goals_together__conv1_SelectedConjunct0_45;

#line 654 "push_goals_together.m"
                      transform_hlds__implicit_parallelism__push_goals_together__succeeded = ((MR_tag((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__FirstHeadStep_15)) == (MR_mktag((MR_Integer) 1)));
#line 654 "push_goals_together.m"
                      if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 654 "push_goals_together.m"
                        {
#line 654 "push_goals_together.m"
                          transform_hlds__implicit_parallelism__push_goals_together__ConjNum_43 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__FirstHeadStep_15, (MR_Integer) 0)));
#line 3073 "transform_hlds.implicit_parallelism.push_goals_together.c"
                          transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_143_143 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0;
#line 655 "push_goals_together.m"
                          {
#line 655 "push_goals_together.m"
                            transform_hlds__implicit_parallelism__push_goals_together__V_114_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 655 "push_goals_together.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_114_114, 0) = ((MR_Box) (&transform_hlds__implicit_parallelism__push_goals_together_scalar_common_2[0]));
#line 655 "push_goals_together.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_114_114, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0_3));
#line 655 "push_goals_together.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_114_114, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 655 "push_goals_together.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_114_114, 3) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__FirstHeadStep_15));
#line 655 "push_goals_together.m"
                          }
#line 655 "push_goals_together.m"
                          {
#line 655 "push_goals_together.m"
                            transform_hlds__implicit_parallelism__push_goals_together__succeeded = mercury__list__map_3_p_2(transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_143_143, transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_143_143, transform_hlds__implicit_parallelism__push_goals_together__V_114_114, transform_hlds__implicit_parallelism__push_goals_together__TailPaths_9, &transform_hlds__implicit_parallelism__push_goals_together__LaterTailPaths_44);
                          }
#line 654 "push_goals_together.m"
                          if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 654 "push_goals_together.m"
                            {
#line 3098 "transform_hlds.implicit_parallelism.push_goals_together.c"
                              transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_144_144 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 657 "push_goals_together.m"
                              {
#line 657 "push_goals_together.m"
                                transform_hlds__implicit_parallelism__push_goals_together__succeeded = mercury__list__index1_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_144_144, transform_hlds__implicit_parallelism__push_goals_together__Conjuncts0_41, transform_hlds__implicit_parallelism__push_goals_together__ConjNum_43, &transform_hlds__implicit_parallelism__push_goals_together__conv1_SelectedConjunct0_45);
                              }
#line 657 "push_goals_together.m"
                              if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 657 "push_goals_together.m"
                                {
#line 657 "push_goals_together.m"
                                  transform_hlds__implicit_parallelism__push_goals_together__SelectedConjunct0_45 = ((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__conv1_SelectedConjunct0_45);
#line 657 "push_goals_together.m"
                                  transform_hlds__implicit_parallelism__push_goals_together__succeeded = MR_TRUE;
#line 657 "push_goals_together.m"
                                }
#line 654 "push_goals_together.m"
                              if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 654 "push_goals_together.m"
                                {
#line 666 "push_goals_together.m"
                                  {
#line 666 "push_goals_together.m"
                                    mercury__list__length_2_p_0(transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_144_144, transform_hlds__implicit_parallelism__push_goals_together__Conjuncts0_41, &transform_hlds__implicit_parallelism__push_goals_together__Length_46);
                                  }
#line 667 "push_goals_together.m"
                                  transform_hlds__implicit_parallelism__push_goals_together__succeeded = (transform_hlds__implicit_parallelism__push_goals_together__ConjNum_43 == transform_hlds__implicit_parallelism__push_goals_together__Length_46);
#line 654 "push_goals_together.m"
                                }
#line 654 "push_goals_together.m"
                            }
#line 654 "push_goals_together.m"
                        }
#line 675 "push_goals_together.m"
                      if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 670 "push_goals_together.m"
                        {
#line 670 "push_goals_together.m"
                          MR_Word transform_hlds__implicit_parallelism__push_goals_together__SelectedConjunct_47;
#line 670 "push_goals_together.m"
                          MR_Word transform_hlds__implicit_parallelism__push_goals_together__Conjuncts_48;
#line 670 "push_goals_together.m"
                          MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_49;

#line 669 "push_goals_together.m"
                          {
#line 669 "push_goals_together.m"
                            transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0(transform_hlds__implicit_parallelism__push_goals_together__LoHi_7, transform_hlds__implicit_parallelism__push_goals_together__LaterHeadPath_16, transform_hlds__implicit_parallelism__push_goals_together__LaterTailPaths_44, transform_hlds__implicit_parallelism__push_goals_together__SelectedConjunct0_45, &transform_hlds__implicit_parallelism__push_goals_together__SelectedConjunct_47, transform_hlds__implicit_parallelism__push_goals_together__Pushable_12);
                          }
#line 671 "push_goals_together.m"
                          {
#line 671 "push_goals_together.m"
                            mercury__list__det_replace_nth_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__implicit_parallelism__push_goals_together__Conjuncts0_41, transform_hlds__implicit_parallelism__push_goals_together__ConjNum_43, ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__SelectedConjunct_47)), &transform_hlds__implicit_parallelism__push_goals_together__Conjuncts_48);
                          }
#line 673 "push_goals_together.m"
                          {
#line 673 "push_goals_together.m"
                            transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 673 "push_goals_together.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 673 "push_goals_together.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_49, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__ConjType_40));
#line 673 "push_goals_together.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_49, 2) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Conjuncts_48));
#line 673 "push_goals_together.m"
                          }
#line 674 "push_goals_together.m"
                          {
#line 674 "push_goals_together.m"
                            MR_Word base;
#line 674 "push_goals_together.m"
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 674 "push_goals_together.m"
                            *transform_hlds__implicit_parallelism__push_goals_together__Goal_11 = base;
#line 674 "push_goals_together.m"
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_49));
#line 674 "push_goals_together.m"
                            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__GoalInfo0_14));
#line 674 "push_goals_together.m"
                          }
#line 670 "push_goals_together.m"
                        }
#line 675 "push_goals_together.m"
                      else
#line 676 "push_goals_together.m"
                        {
#line 676 "push_goals_together.m"
                          *transform_hlds__implicit_parallelism__push_goals_together__Goal_11 = transform_hlds__implicit_parallelism__push_goals_together__Goal0_10;
#line 677 "push_goals_together.m"
                          *transform_hlds__implicit_parallelism__push_goals_together__Pushable_12 = (MR_Integer) 0;
#line 676 "push_goals_together.m"
                        }
#line 675 "push_goals_together.m"
                    }
#line 637 "push_goals_together.m"
                }
#line 636 "push_goals_together.m"
                break;
#line 636 "push_goals_together.m"
              case (MR_Integer) 3:
#line 680 "push_goals_together.m"
                {
#line 680 "push_goals_together.m"
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Disjuncts0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_13, (MR_Integer) 1)));
#line 690 "push_goals_together.m"
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__PathsMap_51;
#line 682 "push_goals_together.m"
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_107_107;
#line 682 "push_goals_together.m"
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_108_108;

#line 682 "push_goals_together.m"
                  {
#line 682 "push_goals_together.m"
                    transform_hlds__implicit_parallelism__push_goals_together__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 682 "push_goals_together.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__V_107_107, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__HeadPath_8));
#line 682 "push_goals_together.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__V_107_107, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__TailPaths_9));
#line 682 "push_goals_together.m"
                  }
#line 683 "push_goals_together.m"
                  {
#line 683 "push_goals_together.m"
                    transform_hlds__implicit_parallelism__push_goals_together__V_108_108 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &transform_hlds__implicit_parallelism__push_goals_together_scalar_common_1[2]);
                  }
#line 682 "push_goals_together.m"
                  {
#line 682 "push_goals_together.m"
                    transform_hlds__implicit_parallelism__push_goals_together__succeeded = transform_hlds__implicit_parallelism__push_goals_together__build_disj_paths_map_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__V_107_107, transform_hlds__implicit_parallelism__push_goals_together__V_108_108, &transform_hlds__implicit_parallelism__push_goals_together__PathsMap_51);
                  }
#line 690 "push_goals_together.m"
                  if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 685 "push_goals_together.m"
                    {
#line 685 "push_goals_together.m"
                      MR_Word transform_hlds__implicit_parallelism__push_goals_together__PathsList_52;
#line 685 "push_goals_together.m"
                      MR_Word transform_hlds__implicit_parallelism__push_goals_together__Disjuncts_53;
#line 685 "push_goals_together.m"
                      MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_120;

#line 685 "push_goals_together.m"
                      {
#line 685 "push_goals_together.m"
                        mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &transform_hlds__implicit_parallelism__push_goals_together_scalar_common_1[2], transform_hlds__implicit_parallelism__push_goals_together__PathsMap_51, &transform_hlds__implicit_parallelism__push_goals_together__PathsList_52);
                      }
#line 686 "push_goals_together.m"
                      {
#line 686 "push_goals_together.m"
                        transform_hlds__implicit_parallelism__push_goals_together__push_into_disjuncts_6_p_0(transform_hlds__implicit_parallelism__push_goals_together__LoHi_7, transform_hlds__implicit_parallelism__push_goals_together__PathsList_52, (MR_Integer) 1, transform_hlds__implicit_parallelism__push_goals_together__Disjuncts0_50, &transform_hlds__implicit_parallelism__push_goals_together__Disjuncts_53, transform_hlds__implicit_parallelism__push_goals_together__Pushable_12);
                      }
#line 688 "push_goals_together.m"
                      {
#line 688 "push_goals_together.m"
                        transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 688 "push_goals_together.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_120, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 688 "push_goals_together.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_120, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Disjuncts_53));
#line 688 "push_goals_together.m"
                      }
#line 689 "push_goals_together.m"
                      {
#line 689 "push_goals_together.m"
                        MR_Word base;
#line 689 "push_goals_together.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 689 "push_goals_together.m"
                        *transform_hlds__implicit_parallelism__push_goals_together__Goal_11 = base;
#line 689 "push_goals_together.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_120));
#line 689 "push_goals_together.m"
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__GoalInfo0_14));
#line 689 "push_goals_together.m"
                      }
#line 685 "push_goals_together.m"
                    }
#line 690 "push_goals_together.m"
                  else
#line 691 "push_goals_together.m"
                    {
#line 691 "push_goals_together.m"
                      *transform_hlds__implicit_parallelism__push_goals_together__Goal_11 = transform_hlds__implicit_parallelism__push_goals_together__Goal0_10;
#line 692 "push_goals_together.m"
                      *transform_hlds__implicit_parallelism__push_goals_together__Pushable_12 = (MR_Integer) 0;
#line 691 "push_goals_together.m"
                    }
#line 680 "push_goals_together.m"
                }
#line 636 "push_goals_together.m"
                break;
#line 636 "push_goals_together.m"
              case (MR_Integer) 4:
#line 695 "push_goals_together.m"
                {
#line 695 "push_goals_together.m"
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_13, (MR_Integer) 1)));
#line 695 "push_goals_together.m"
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__CanFail_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_13, (MR_Integer) 2)));
#line 695 "push_goals_together.m"
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Cases0_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_13, (MR_Integer) 3)));
#line 704 "push_goals_together.m"
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__PathsMap_126;
#line 697 "push_goals_together.m"
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_104_104;
#line 697 "push_goals_together.m"
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_105_105;

#line 697 "push_goals_together.m"
                  {
#line 697 "push_goals_together.m"
                    transform_hlds__implicit_parallelism__push_goals_together__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 697 "push_goals_together.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__V_104_104, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__HeadPath_8));
#line 697 "push_goals_together.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__V_104_104, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__TailPaths_9));
#line 697 "push_goals_together.m"
                  }
#line 698 "push_goals_together.m"
                  {
#line 698 "push_goals_together.m"
                    transform_hlds__implicit_parallelism__push_goals_together__V_105_105 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &transform_hlds__implicit_parallelism__push_goals_together_scalar_common_1[2]);
                  }
#line 697 "push_goals_together.m"
                  {
#line 697 "push_goals_together.m"
                    transform_hlds__implicit_parallelism__push_goals_together__succeeded = transform_hlds__implicit_parallelism__push_goals_together__build_switch_paths_map_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__V_104_104, transform_hlds__implicit_parallelism__push_goals_together__V_105_105, &transform_hlds__implicit_parallelism__push_goals_together__PathsMap_126);
                  }
#line 704 "push_goals_together.m"
                  if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 700 "push_goals_together.m"
                    {
#line 700 "push_goals_together.m"
                      MR_Word transform_hlds__implicit_parallelism__push_goals_together__Cases_57;
#line 700 "push_goals_together.m"
                      MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_123;
#line 700 "push_goals_together.m"
                      MR_Word transform_hlds__implicit_parallelism__push_goals_together__PathsList_124;

#line 700 "push_goals_together.m"
                      {
#line 700 "push_goals_together.m"
                        mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &transform_hlds__implicit_parallelism__push_goals_together_scalar_common_1[2], transform_hlds__implicit_parallelism__push_goals_together__PathsMap_126, &transform_hlds__implicit_parallelism__push_goals_together__PathsList_124);
                      }
#line 701 "push_goals_together.m"
                      {
#line 701 "push_goals_together.m"
                        transform_hlds__implicit_parallelism__push_goals_together__push_into_cases_6_p_0(transform_hlds__implicit_parallelism__push_goals_together__LoHi_7, transform_hlds__implicit_parallelism__push_goals_together__PathsList_124, (MR_Integer) 1, transform_hlds__implicit_parallelism__push_goals_together__Cases0_56, &transform_hlds__implicit_parallelism__push_goals_together__Cases_57, transform_hlds__implicit_parallelism__push_goals_together__Pushable_12);
                      }
#line 702 "push_goals_together.m"
                      {
#line 702 "push_goals_together.m"
                        transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 702 "push_goals_together.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 702 "push_goals_together.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_123, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Var_54));
#line 702 "push_goals_together.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_123, 2) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__CanFail_55));
#line 702 "push_goals_together.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_123, 3) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Cases_57));
#line 702 "push_goals_together.m"
                      }
#line 703 "push_goals_together.m"
                      {
#line 703 "push_goals_together.m"
                        MR_Word base;
#line 703 "push_goals_together.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 703 "push_goals_together.m"
                        *transform_hlds__implicit_parallelism__push_goals_together__Goal_11 = base;
#line 703 "push_goals_together.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_123));
#line 703 "push_goals_together.m"
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__GoalInfo0_14));
#line 703 "push_goals_together.m"
                      }
#line 700 "push_goals_together.m"
                    }
#line 704 "push_goals_together.m"
                  else
#line 705 "push_goals_together.m"
                    {
#line 705 "push_goals_together.m"
                      *transform_hlds__implicit_parallelism__push_goals_together__Goal_11 = transform_hlds__implicit_parallelism__push_goals_together__Goal0_10;
#line 706 "push_goals_together.m"
                      *transform_hlds__implicit_parallelism__push_goals_together__Pushable_12 = (MR_Integer) 0;
#line 705 "push_goals_together.m"
                    }
#line 695 "push_goals_together.m"
                }
#line 636 "push_goals_together.m"
                break;
#line 636 "push_goals_together.m"
              case (MR_Integer) 5:
#line 754 "push_goals_together.m"
                {
#line 754 "push_goals_together.m"
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Reason_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_13, (MR_Integer) 1)));
#line 754 "push_goals_together.m"
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__SubGoal0_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_13, (MR_Integer) 2)));
#line 754 "push_goals_together.m"
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__SubGoalInfo0_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__SubGoal0_74, (MR_Integer) 1)));
#line 754 "push_goals_together.m"
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Detism_77;
#line 754 "push_goals_together.m"
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__SubDetism_78;
#line 755 "push_goals_together.m"
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together___SubGoalExpr0_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__SubGoal0_74, (MR_Integer) 0)));
#line 769 "push_goals_together.m"
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadPathAfter_79;
#line 769 "push_goals_together.m"
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__TailPathsAfter_80;
#line 759 "push_goals_together.m"
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_156_156;
#line 759 "push_goals_together.m"
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_98_98;
#line 759 "push_goals_together.m"
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_99_99;
#line 759 "push_goals_together.m"
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_100_100;

#line 756 "push_goals_together.m"
                  {
#line 756 "push_goals_together.m"
                    transform_hlds__implicit_parallelism__push_goals_together__Detism_77 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__implicit_parallelism__push_goals_together__GoalInfo0_14);
                  }
#line 757 "push_goals_together.m"
                  {
#line 757 "push_goals_together.m"
                    transform_hlds__implicit_parallelism__push_goals_together__SubDetism_78 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__implicit_parallelism__push_goals_together__SubGoalInfo0_76);
                  }
#line 759 "push_goals_together.m"
                  transform_hlds__implicit_parallelism__push_goals_together__succeeded = (transform_hlds__implicit_parallelism__push_goals_together__Detism_77 == transform_hlds__implicit_parallelism__push_goals_together__SubDetism_78);
#line 759 "push_goals_together.m"
                  if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 759 "push_goals_together.m"
                    {
#line 760 "push_goals_together.m"
                      transform_hlds__implicit_parallelism__push_goals_together__V_99_99 = (MR_Integer) 1;
#line 760 "push_goals_together.m"
                      transform_hlds__implicit_parallelism__push_goals_together__V_98_98 = (MR_Word) MR_mkword(MR_mktag(3), &transform_hlds__implicit_parallelism__push_goals_together_scalar_common_1[3]);
#line 760 "push_goals_together.m"
                      {
#line 760 "push_goals_together.m"
                        transform_hlds__implicit_parallelism__push_goals_together__succeeded = transform_hlds__implicit_parallelism__push_goals_together__maybe_steps_after_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__V_98_98, transform_hlds__implicit_parallelism__push_goals_together__HeadPath_8, &transform_hlds__implicit_parallelism__push_goals_together__HeadPathAfter_79);
                      }
#line 759 "push_goals_together.m"
                      if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 759 "push_goals_together.m"
                        {
#line 3451 "transform_hlds.implicit_parallelism.push_goals_together.c"
                          transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_156_156 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0;
#line 762 "push_goals_together.m"
                          transform_hlds__implicit_parallelism__push_goals_together__V_100_100 = (MR_Word) &transform_hlds__implicit_parallelism__push_goals_together_scalar_common_4[0];
#line 762 "push_goals_together.m"
                          {
#line 762 "push_goals_together.m"
                            transform_hlds__implicit_parallelism__push_goals_together__succeeded = mercury__list__map_3_p_2(transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_156_156, transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_156_156, transform_hlds__implicit_parallelism__push_goals_together__V_100_100, transform_hlds__implicit_parallelism__push_goals_together__TailPaths_9, &transform_hlds__implicit_parallelism__push_goals_together__TailPathsAfter_80);
                          }
#line 759 "push_goals_together.m"
                        }
#line 759 "push_goals_together.m"
                    }
#line 769 "push_goals_together.m"
                  if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 766 "push_goals_together.m"
                    {
#line 766 "push_goals_together.m"
                      MR_Word transform_hlds__implicit_parallelism__push_goals_together__SubGoal_81;
#line 766 "push_goals_together.m"
                      MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_136;

#line 765 "push_goals_together.m"
                      {
#line 765 "push_goals_together.m"
                        transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0(transform_hlds__implicit_parallelism__push_goals_together__LoHi_7, transform_hlds__implicit_parallelism__push_goals_together__HeadPathAfter_79, transform_hlds__implicit_parallelism__push_goals_together__TailPathsAfter_80, transform_hlds__implicit_parallelism__push_goals_together__SubGoal0_74, &transform_hlds__implicit_parallelism__push_goals_together__SubGoal_81, transform_hlds__implicit_parallelism__push_goals_together__Pushable_12);
                      }
#line 767 "push_goals_together.m"
                      {
#line 767 "push_goals_together.m"
                        transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_136 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 767 "push_goals_together.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_136, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 767 "push_goals_together.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_136, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Reason_73));
#line 767 "push_goals_together.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_136, 2) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__SubGoal_81));
#line 767 "push_goals_together.m"
                      }
#line 768 "push_goals_together.m"
                      {
#line 768 "push_goals_together.m"
                        MR_Word base;
#line 768 "push_goals_together.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 768 "push_goals_together.m"
                        *transform_hlds__implicit_parallelism__push_goals_together__Goal_11 = base;
#line 768 "push_goals_together.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_136));
#line 768 "push_goals_together.m"
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__GoalInfo0_14));
#line 768 "push_goals_together.m"
                      }
#line 766 "push_goals_together.m"
                    }
#line 769 "push_goals_together.m"
                  else
#line 770 "push_goals_together.m"
                    {
#line 770 "push_goals_together.m"
                      *transform_hlds__implicit_parallelism__push_goals_together__Goal_11 = transform_hlds__implicit_parallelism__push_goals_together__Goal0_10;
#line 771 "push_goals_together.m"
                      *transform_hlds__implicit_parallelism__push_goals_together__Pushable_12 = (MR_Integer) 0;
#line 770 "push_goals_together.m"
                    }
#line 754 "push_goals_together.m"
                }
#line 636 "push_goals_together.m"
                break;
#line 636 "push_goals_together.m"
              case (MR_Integer) 6:
#line 709 "push_goals_together.m"
                {
#line 709 "push_goals_together.m"
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Vars_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_13, (MR_Integer) 1)));
#line 709 "push_goals_together.m"
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Cond_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_13, (MR_Integer) 2)));
#line 709 "push_goals_together.m"
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Then0_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_13, (MR_Integer) 3)));
#line 709 "push_goals_together.m"
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Else0_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_13, (MR_Integer) 4)));
#line 743 "push_goals_together.m"
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__ThenPaths_62;
#line 743 "push_goals_together.m"
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__ElsePaths_63;
#line 711 "push_goals_together.m"
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__ThenPathsTail_161;
#line 711 "push_goals_together.m"
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__ElsePathsTail_162;
#line 711 "push_goals_together.m"
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadFirstStep_163;
#line 711 "push_goals_together.m"
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadLaterPath_164;

#line 921 "push_goals_together.m"
                  {
#line 921 "push_goals_together.m"
                    transform_hlds__implicit_parallelism__push_goals_together__succeeded = transform_hlds__implicit_parallelism__push_goals_together__build_ite_paths_map_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__TailPaths_9, &transform_hlds__implicit_parallelism__push_goals_together__ThenPathsTail_161, &transform_hlds__implicit_parallelism__push_goals_together__ElsePathsTail_162);
                  }
#line 711 "push_goals_together.m"
                  if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 711 "push_goals_together.m"
                    {
#line 922 "push_goals_together.m"
                      transform_hlds__implicit_parallelism__push_goals_together__HeadFirstStep_163 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadPath_8, (MR_Integer) 0)));
#line 922 "push_goals_together.m"
                      transform_hlds__implicit_parallelism__push_goals_together__HeadLaterPath_164 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadPath_8, (MR_Integer) 1)));
#line 923 "push_goals_together.m"
                      transform_hlds__implicit_parallelism__push_goals_together__succeeded = (transform_hlds__implicit_parallelism__push_goals_together__HeadFirstStep_163 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 926 "push_goals_together.m"
                      if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 924 "push_goals_together.m"
                        {
#line 924 "push_goals_together.m"
                          {
#line 924 "push_goals_together.m"
                            transform_hlds__implicit_parallelism__push_goals_together__ThenPaths_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 924 "push_goals_together.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__ThenPaths_62, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__HeadLaterPath_164));
#line 924 "push_goals_together.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__ThenPaths_62, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__ThenPathsTail_161));
#line 924 "push_goals_together.m"
                          }
#line 925 "push_goals_together.m"
                          transform_hlds__implicit_parallelism__push_goals_together__ElsePaths_63 = transform_hlds__implicit_parallelism__push_goals_together__ElsePathsTail_162;
#line 924 "push_goals_together.m"
                          transform_hlds__implicit_parallelism__push_goals_together__succeeded = MR_TRUE;
#line 924 "push_goals_together.m"
                        }
#line 926 "push_goals_together.m"
                      else
#line 929 "push_goals_together.m"
                        {
#line 926 "push_goals_together.m"
                          transform_hlds__implicit_parallelism__push_goals_together__succeeded = (transform_hlds__implicit_parallelism__push_goals_together__HeadFirstStep_163 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 929 "push_goals_together.m"
                          if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 929 "push_goals_together.m"
                            {
#line 927 "push_goals_together.m"
                              transform_hlds__implicit_parallelism__push_goals_together__ThenPaths_62 = transform_hlds__implicit_parallelism__push_goals_together__ThenPathsTail_161;
#line 928 "push_goals_together.m"
                              {
#line 928 "push_goals_together.m"
                                transform_hlds__implicit_parallelism__push_goals_together__ElsePaths_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 928 "push_goals_together.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__ElsePaths_63, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__HeadLaterPath_164));
#line 928 "push_goals_together.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__ElsePaths_63, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__ElsePathsTail_162));
#line 928 "push_goals_together.m"
                              }
#line 928 "push_goals_together.m"
                              transform_hlds__implicit_parallelism__push_goals_together__succeeded = MR_TRUE;
#line 929 "push_goals_together.m"
                            }
#line 929 "push_goals_together.m"
                        }
#line 711 "push_goals_together.m"
                    }
#line 743 "push_goals_together.m"
                  if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 722 "push_goals_together.m"
                    {
#line 722 "push_goals_together.m"
                      MR_Word transform_hlds__implicit_parallelism__push_goals_together__Then_64;
#line 722 "push_goals_together.m"
                      MR_Word transform_hlds__implicit_parallelism__push_goals_together__ThenPushable_65;
#line 722 "push_goals_together.m"
                      MR_Word transform_hlds__implicit_parallelism__push_goals_together__Else_68;
#line 722 "push_goals_together.m"
                      MR_Word transform_hlds__implicit_parallelism__push_goals_together__ElsePushable_69;

#line 718 "push_goals_together.m"
                      if ((transform_hlds__implicit_parallelism__push_goals_together__ThenPaths_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 715 "push_goals_together.m"
                        {
#line 716 "push_goals_together.m"
                          {
#line 716 "push_goals_together.m"
                            transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__LoHi_7, transform_hlds__implicit_parallelism__push_goals_together__Then0_60, &transform_hlds__implicit_parallelism__push_goals_together__Then_64);
                          }
#line 717 "push_goals_together.m"
                          transform_hlds__implicit_parallelism__push_goals_together__ThenPushable_65 = (MR_Integer) 1;
#line 715 "push_goals_together.m"
                        }
#line 718 "push_goals_together.m"
                      else
#line 719 "push_goals_together.m"
                        {
#line 719 "push_goals_together.m"
                          MR_Word transform_hlds__implicit_parallelism__push_goals_together__ThenPathsHead_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__ThenPaths_62, (MR_Integer) 0)));
#line 719 "push_goals_together.m"
                          MR_Word transform_hlds__implicit_parallelism__push_goals_together__ThenPathsTail_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__ThenPaths_62, (MR_Integer) 1)));

#line 720 "push_goals_together.m"
                          {
#line 720 "push_goals_together.m"
                            transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0(transform_hlds__implicit_parallelism__push_goals_together__LoHi_7, transform_hlds__implicit_parallelism__push_goals_together__ThenPathsHead_66, transform_hlds__implicit_parallelism__push_goals_together__ThenPathsTail_67, transform_hlds__implicit_parallelism__push_goals_together__Then0_60, &transform_hlds__implicit_parallelism__push_goals_together__Then_64, &transform_hlds__implicit_parallelism__push_goals_together__ThenPushable_65);
                          }
#line 719 "push_goals_together.m"
                        }
#line 727 "push_goals_together.m"
                      if ((transform_hlds__implicit_parallelism__push_goals_together__ElsePaths_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 724 "push_goals_together.m"
                        {
#line 725 "push_goals_together.m"
                          {
#line 725 "push_goals_together.m"
                            transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__LoHi_7, transform_hlds__implicit_parallelism__push_goals_together__Else0_61, &transform_hlds__implicit_parallelism__push_goals_together__Else_68);
                          }
#line 726 "push_goals_together.m"
                          transform_hlds__implicit_parallelism__push_goals_together__ElsePushable_69 = (MR_Integer) 1;
#line 724 "push_goals_together.m"
                        }
#line 727 "push_goals_together.m"
                      else
#line 728 "push_goals_together.m"
                        {
#line 728 "push_goals_together.m"
                          MR_Word transform_hlds__implicit_parallelism__push_goals_together__ElsePathsHead_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__ElsePaths_63, (MR_Integer) 0)));
#line 728 "push_goals_together.m"
                          MR_Word transform_hlds__implicit_parallelism__push_goals_together__ElsePathsTail_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__ElsePaths_63, (MR_Integer) 1)));

#line 729 "push_goals_together.m"
                          {
#line 729 "push_goals_together.m"
                            transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0(transform_hlds__implicit_parallelism__push_goals_together__LoHi_7, transform_hlds__implicit_parallelism__push_goals_together__ElsePathsHead_70, transform_hlds__implicit_parallelism__push_goals_together__ElsePathsTail_71, transform_hlds__implicit_parallelism__push_goals_together__Else0_61, &transform_hlds__implicit_parallelism__push_goals_together__Else_68, &transform_hlds__implicit_parallelism__push_goals_together__ElsePushable_69);
                          }
#line 728 "push_goals_together.m"
                        }
#line 733 "push_goals_together.m"
                      transform_hlds__implicit_parallelism__push_goals_together__succeeded = (transform_hlds__implicit_parallelism__push_goals_together__ThenPushable_65 == (MR_Integer) 1);
#line 733 "push_goals_together.m"
                      if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 734 "push_goals_together.m"
                        transform_hlds__implicit_parallelism__push_goals_together__succeeded = (transform_hlds__implicit_parallelism__push_goals_together__ElsePushable_69 == (MR_Integer) 1);
#line 739 "push_goals_together.m"
                      if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 736 "push_goals_together.m"
                        {
#line 736 "push_goals_together.m"
                          MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_131;

#line 736 "push_goals_together.m"
                          {
#line 736 "push_goals_together.m"
                            transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 736 "push_goals_together.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_131, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 736 "push_goals_together.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_131, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Vars_58));
#line 736 "push_goals_together.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_131, 2) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Cond_59));
#line 736 "push_goals_together.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_131, 3) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Then_64));
#line 736 "push_goals_together.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_131, 4) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Else_68));
#line 736 "push_goals_together.m"
                          }
#line 737 "push_goals_together.m"
                          {
#line 737 "push_goals_together.m"
                            MR_Word base;
#line 737 "push_goals_together.m"
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 737 "push_goals_together.m"
                            *transform_hlds__implicit_parallelism__push_goals_together__Goal_11 = base;
#line 737 "push_goals_together.m"
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_131));
#line 737 "push_goals_together.m"
                            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__GoalInfo0_14));
#line 737 "push_goals_together.m"
                          }
#line 738 "push_goals_together.m"
                          *transform_hlds__implicit_parallelism__push_goals_together__Pushable_12 = (MR_Integer) 1;
#line 736 "push_goals_together.m"
                        }
#line 739 "push_goals_together.m"
                      else
#line 740 "push_goals_together.m"
                        {
#line 740 "push_goals_together.m"
                          *transform_hlds__implicit_parallelism__push_goals_together__Goal_11 = transform_hlds__implicit_parallelism__push_goals_together__Goal0_10;
#line 741 "push_goals_together.m"
                          *transform_hlds__implicit_parallelism__push_goals_together__Pushable_12 = (MR_Integer) 0;
#line 740 "push_goals_together.m"
                        }
#line 722 "push_goals_together.m"
                    }
#line 743 "push_goals_together.m"
                  else
#line 744 "push_goals_together.m"
                    {
#line 744 "push_goals_together.m"
                      *transform_hlds__implicit_parallelism__push_goals_together__Goal_11 = transform_hlds__implicit_parallelism__push_goals_together__Goal0_10;
#line 745 "push_goals_together.m"
                      *transform_hlds__implicit_parallelism__push_goals_together__Pushable_12 = (MR_Integer) 0;
#line 744 "push_goals_together.m"
                    }
#line 709 "push_goals_together.m"
                }
#line 636 "push_goals_together.m"
                break;
#line 636 "push_goals_together.m"
              case (MR_Integer) 7:
#line 774 "push_goals_together.m"
                {
#line 774 "push_goals_together.m"
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Shorthand_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_13, (MR_Integer) 1)));

#line 781 "push_goals_together.m"
#line 781 "push_goals_together.m"
                  switch (MR_tag((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__Shorthand_82)) {
#line 781 "push_goals_together.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 781 "push_goals_together.m"
                    case (MR_Integer) 0:
#line 782 "push_goals_together.m"
                      {
#line 783 "push_goals_together.m"
                        {
#line 783 "push_goals_together.m"
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.implicit_parallelism.push_goals_together", (MR_String) "predicate \140transform_hlds.implicit_parallelism.push_goals_together.push_into_goal\'/6", (MR_String) "bi_implication");
#line 783 "push_goals_together.m"
                          return;
                        }
#line 782 "push_goals_together.m"
                      }
#line 781 "push_goals_together.m"
                      break;
#line 781 "push_goals_together.m"
                    case (MR_Integer) 1:
#line 781 "push_goals_together.m"
                    case (MR_Integer) 2:
#line 778 "push_goals_together.m"
                      {
#line 779 "push_goals_together.m"
                        *transform_hlds__implicit_parallelism__push_goals_together__Goal_11 = transform_hlds__implicit_parallelism__push_goals_together__Goal0_10;
#line 780 "push_goals_together.m"
                        *transform_hlds__implicit_parallelism__push_goals_together__Pushable_12 = (MR_Integer) 0;
#line 778 "push_goals_together.m"
                      }
#line 781 "push_goals_together.m"
                      break;
#line 781 "push_goals_together.m"
                  }
#line 774 "push_goals_together.m"
                }
#line 636 "push_goals_together.m"
                break;
#line 636 "push_goals_together.m"
            }
#line 636 "push_goals_together.m"
            break;
#line 636 "push_goals_together.m"
        }
#line 627 "push_goals_together.m"
      }
#line 619 "push_goals_together.m"
  }
#line 615 "push_goals_together.m"
}

#line 560 "push_goals_together.m"
static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__is_non_rtti_var_2_p_0(
#line 560 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__RttiVarMaps_3,
#line 560 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Arg_4)
#line 560 "push_goals_together.m"
{
#line 562 "push_goals_together.m"
  {
#line 562 "push_goals_together.m"
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;
#line 562 "push_goals_together.m"
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__RttiVarInfo_5;

#line 563 "push_goals_together.m"
    {
#line 563 "push_goals_together.m"
      hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__RttiVarMaps_3, transform_hlds__implicit_parallelism__push_goals_together__Arg_4, &transform_hlds__implicit_parallelism__push_goals_together__RttiVarInfo_5);
    }
#line 564 "push_goals_together.m"
    transform_hlds__implicit_parallelism__push_goals_together__succeeded = (transform_hlds__implicit_parallelism__push_goals_together__RttiVarInfo_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 562 "push_goals_together.m"
    return transform_hlds__implicit_parallelism__push_goals_together__succeeded;
#line 562 "push_goals_together.m"
  }
#line 560 "push_goals_together.m"
}

#line 545 "push_goals_together.m"
static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__is_pushable_case_list_3_p_0(
#line 545 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
#line 545 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2,
#line 545 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3)
#line 545 "push_goals_together.m"
{
#line 548 "push_goals_together.m"
  while (MR_TRUE)
#line 548 "push_goals_together.m"
    {
#line 548 "push_goals_together.m"
      /* tailcall optimized into a loop */
#line 548 "push_goals_together.m"
      {
#line 548 "push_goals_together.m"
        MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;

#line 548 "push_goals_together.m"
        if ((transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 548 "push_goals_together.m"
          *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3 = (MR_Integer) 1;
#line 548 "push_goals_together.m"
        else
#line 549 "push_goals_together.m"
          {
#line 549 "push_goals_together.m"
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__Case_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2, (MR_Integer) 0)));
#line 549 "push_goals_together.m"
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__Cases_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2, (MR_Integer) 1)));
#line 549 "push_goals_together.m"
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goal_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__Case_6, (MR_Integer) 2)));
#line 549 "push_goals_together.m"
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalPushable_12;
#line 550 "push_goals_together.m"
            MR_Word transform_hlds__implicit_parallelism__push_goals_together___MainConsId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__Case_6, (MR_Integer) 0)));
#line 550 "push_goals_together.m"
            MR_Word transform_hlds__implicit_parallelism__push_goals_together___OtherConsIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__Case_6, (MR_Integer) 1)));

#line 551 "push_goals_together.m"
            {
#line 551 "push_goals_together.m"
              transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1, transform_hlds__implicit_parallelism__push_goals_together__Goal_11, &transform_hlds__implicit_parallelism__push_goals_together__GoalPushable_12);
            }
#line 555 "push_goals_together.m"
#line 555 "push_goals_together.m"
            switch (transform_hlds__implicit_parallelism__push_goals_together__GoalPushable_12) {
#line 555 "push_goals_together.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 555 "push_goals_together.m"
              case (MR_Integer) 0:
#line 554 "push_goals_together.m"
                *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3 = (MR_Integer) 0;
#line 555 "push_goals_together.m"
                break;
#line 555 "push_goals_together.m"
              case (MR_Integer) 1:
#line 557 "push_goals_together.m"
                {
#line 557 "push_goals_together.m"
                  /* direct tailcall eliminated */
#line 557 "push_goals_together.m"
                  {
#line 557 "push_goals_together.m"
                    MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2__tmp_copy_2 = transform_hlds__implicit_parallelism__push_goals_together__Cases_7;

#line 557 "push_goals_together.m"
                    transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2 = transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2__tmp_copy_2;
#line 557 "push_goals_together.m"
                  }
#line 557 "push_goals_together.m"
                  continue;
#line 557 "push_goals_together.m"
                }
#line 555 "push_goals_together.m"
                break;
#line 555 "push_goals_together.m"
            }
#line 549 "push_goals_together.m"
          }
#line 548 "push_goals_together.m"
      }
#line 548 "push_goals_together.m"
      break;
#line 548 "push_goals_together.m"
    }
#line 545 "push_goals_together.m"
}

#line 531 "push_goals_together.m"
static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_list_3_p_0(
#line 531 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
#line 531 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2,
#line 531 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3)
#line 531 "push_goals_together.m"
{
#line 534 "push_goals_together.m"
  while (MR_TRUE)
#line 534 "push_goals_together.m"
    {
#line 534 "push_goals_together.m"
      /* tailcall optimized into a loop */
#line 534 "push_goals_together.m"
      {
#line 534 "push_goals_together.m"
        MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;

#line 534 "push_goals_together.m"
        if ((transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 534 "push_goals_together.m"
          *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3 = (MR_Integer) 1;
#line 534 "push_goals_together.m"
        else
#line 535 "push_goals_together.m"
          {
#line 535 "push_goals_together.m"
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goal_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2, (MR_Integer) 0)));
#line 535 "push_goals_together.m"
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goals_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2, (MR_Integer) 1)));
#line 535 "push_goals_together.m"
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalPushable_9;

#line 536 "push_goals_together.m"
            {
#line 536 "push_goals_together.m"
              transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1, transform_hlds__implicit_parallelism__push_goals_together__Goal_6, &transform_hlds__implicit_parallelism__push_goals_together__GoalPushable_9);
            }
#line 540 "push_goals_together.m"
#line 540 "push_goals_together.m"
            switch (transform_hlds__implicit_parallelism__push_goals_together__GoalPushable_9) {
#line 540 "push_goals_together.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 540 "push_goals_together.m"
              case (MR_Integer) 0:
#line 539 "push_goals_together.m"
                *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3 = (MR_Integer) 0;
#line 540 "push_goals_together.m"
                break;
#line 540 "push_goals_together.m"
              case (MR_Integer) 1:
#line 542 "push_goals_together.m"
                {
#line 542 "push_goals_together.m"
                  /* direct tailcall eliminated */
#line 542 "push_goals_together.m"
                  {
#line 542 "push_goals_together.m"
                    MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2__tmp_copy_2 = transform_hlds__implicit_parallelism__push_goals_together__Goals_7;

#line 542 "push_goals_together.m"
                    transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2 = transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2__tmp_copy_2;
#line 542 "push_goals_together.m"
                  }
#line 542 "push_goals_together.m"
                  continue;
#line 542 "push_goals_together.m"
                }
#line 540 "push_goals_together.m"
                break;
#line 540 "push_goals_together.m"
            }
#line 535 "push_goals_together.m"
          }
#line 534 "push_goals_together.m"
      }
#line 534 "push_goals_together.m"
      break;
#line 534 "push_goals_together.m"
    }
#line 531 "push_goals_together.m"
}

#line 483 "push_goals_together.m"
static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_p_0_1(
#line 483 "push_goals_together.m"
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__closure_arg,
#line 483 "push_goals_together.m"
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1)
#line 483 "push_goals_together.m"
{
#line 483 "push_goals_together.m"
  {
#line 483 "push_goals_together.m"
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;
#line 483 "push_goals_together.m"
    MR_Box transform_hlds__implicit_parallelism__push_goals_together__closure = transform_hlds__implicit_parallelism__push_goals_together__closure_arg;

#line 483 "push_goals_together.m"
    {
#line 483 "push_goals_together.m"
      return transform_hlds__implicit_parallelism__push_goals_together__succeeded = transform_hlds__implicit_parallelism__push_goals_together__is_non_rtti_var_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1));
    }
#line 483 "push_goals_together.m"
    return transform_hlds__implicit_parallelism__push_goals_together__succeeded;
#line 483 "push_goals_together.m"
  }
#line 483 "push_goals_together.m"
}

#line 459 "push_goals_together.m"
static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_p_0(
#line 459 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__PushInfo_4,
#line 459 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goal_5,
#line 459 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__Pushable_6)
#line 459 "push_goals_together.m"
{
#line 462 "push_goals_together.m"
  while (MR_TRUE)
#line 462 "push_goals_together.m"
    {
#line 462 "push_goals_together.m"
      /* tailcall optimized into a loop */
#line 462 "push_goals_together.m"
      {
#line 462 "push_goals_together.m"
        MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;
#line 462 "push_goals_together.m"
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__Goal_5, (MR_Integer) 0)));
#line 462 "push_goals_together.m"
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__Goal_5, (MR_Integer) 1)));
#line 462 "push_goals_together.m"
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__Purity_9;
#line 462 "push_goals_together.m"
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__Detism_10;

#line 464 "push_goals_together.m"
        {
#line 464 "push_goals_together.m"
          transform_hlds__implicit_parallelism__push_goals_together__Purity_9 = hlds__hlds_goal__goal_info_get_purity_1_f_0(transform_hlds__implicit_parallelism__push_goals_together__GoalInfo_8);
        }
#line 465 "push_goals_together.m"
        {
#line 465 "push_goals_together.m"
          transform_hlds__implicit_parallelism__push_goals_together__Detism_10 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__implicit_parallelism__push_goals_together__GoalInfo_8);
        }
#line 467 "push_goals_together.m"
        transform_hlds__implicit_parallelism__push_goals_together__succeeded = (transform_hlds__implicit_parallelism__push_goals_together__Purity_9 == (MR_Integer) 0);
#line 467 "push_goals_together.m"
        if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 468 "push_goals_together.m"
          transform_hlds__implicit_parallelism__push_goals_together__succeeded = (transform_hlds__implicit_parallelism__push_goals_together__Detism_10 == (MR_Integer) 0);
#line 527 "push_goals_together.m"
        if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 492 "push_goals_together.m"
#line 492 "push_goals_together.m"
          switch (MR_tag((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_7)) {
#line 492 "push_goals_together.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 492 "push_goals_together.m"
            case (MR_Integer) 0:
#line 512 "push_goals_together.m"
              {
#line 512 "push_goals_together.m"
                MR_Word transform_hlds__implicit_parallelism__push_goals_together__SubGoal_64 = (MR_Word) MR_body(((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_7), (MR_Integer) 0);

#line 513 "push_goals_together.m"
                /* direct tailcall eliminated */
#line 513 "push_goals_together.m"
                {
#line 513 "push_goals_together.m"
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goal__tmp_copy_5 = transform_hlds__implicit_parallelism__push_goals_together__SubGoal_64;

#line 513 "push_goals_together.m"
                  transform_hlds__implicit_parallelism__push_goals_together__Goal_5 = transform_hlds__implicit_parallelism__push_goals_together__Goal__tmp_copy_5;
#line 513 "push_goals_together.m"
                }
#line 513 "push_goals_together.m"
                continue;
#line 512 "push_goals_together.m"
              }
#line 492 "push_goals_together.m"
              break;
#line 492 "push_goals_together.m"
            case (MR_Integer) 1:
#line 471 "push_goals_together.m"
              {
#line 471 "push_goals_together.m"
                MR_Word transform_hlds__implicit_parallelism__push_goals_together__Unification_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_7, (MR_Integer) 3)));
#line 471 "push_goals_together.m"
                MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_7, (MR_Integer) 0)));
#line 471 "push_goals_together.m"
                MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_7, (MR_Integer) 1)));
#line 471 "push_goals_together.m"
                MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_7, (MR_Integer) 2)));
#line 471 "push_goals_together.m"
                MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_7, (MR_Integer) 4)));

#line 478 "push_goals_together.m"
#line 478 "push_goals_together.m"
                switch (MR_tag((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__Unification_14)) {
#line 478 "push_goals_together.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 478 "push_goals_together.m"
                  case (MR_Integer) 0:
#line 478 "push_goals_together.m"
                  case (MR_Integer) 2:
#line 477 "push_goals_together.m"
                    *transform_hlds__implicit_parallelism__push_goals_together__Pushable_6 = (MR_Integer) 1;
#line 478 "push_goals_together.m"
                    break;
#line 478 "push_goals_together.m"
                  case (MR_Integer) 1:
#line 479 "push_goals_together.m"
                    {
#line 479 "push_goals_together.m"
                      MR_Word transform_hlds__implicit_parallelism__push_goals_together__Args_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__Unification_14, (MR_Integer) 2)));
#line 479 "push_goals_together.m"
                      MR_Word transform_hlds__implicit_parallelism__push_goals_together__RttiVarMaps_33 = (MR_Word) transform_hlds__implicit_parallelism__push_goals_together__PushInfo_4;
#line 479 "push_goals_together.m"
                      MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__Unification_14, (MR_Integer) 0)));
#line 479 "push_goals_together.m"
                      MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__Unification_14, (MR_Integer) 1)));
#line 479 "push_goals_together.m"
                      MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__Unification_14, (MR_Integer) 3)));
#line 479 "push_goals_together.m"
                      MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__Unification_14, (MR_Integer) 4)));
#line 479 "push_goals_together.m"
                      MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__Unification_14, (MR_Integer) 5)));
#line 483 "push_goals_together.m"
                      MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_89_89;

#line 483 "push_goals_together.m"
                      {
#line 483 "push_goals_together.m"
                        transform_hlds__implicit_parallelism__push_goals_together__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 483 "push_goals_together.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_89_89, 0) = ((MR_Box) (&transform_hlds__implicit_parallelism__push_goals_together_scalar_common_3[0]));
#line 483 "push_goals_together.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_89_89, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_p_0_1));
#line 483 "push_goals_together.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_89_89, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 483 "push_goals_together.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_89_89, 3) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__RttiVarMaps_33));
#line 483 "push_goals_together.m"
                      }
#line 483 "push_goals_together.m"
                      {
#line 483 "push_goals_together.m"
                        transform_hlds__implicit_parallelism__push_goals_together__succeeded = mercury__list__all_true_2_p_0((MR_Word) &transform_hlds__implicit_parallelism__push_goals_together_scalar_common_1[0], transform_hlds__implicit_parallelism__push_goals_together__V_89_89, transform_hlds__implicit_parallelism__push_goals_together__Args_29);
                      }
#line 485 "push_goals_together.m"
                      if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 484 "push_goals_together.m"
                        *transform_hlds__implicit_parallelism__push_goals_together__Pushable_6 = (MR_Integer) 1;
#line 485 "push_goals_together.m"
                      else
#line 486 "push_goals_together.m"
                        *transform_hlds__implicit_parallelism__push_goals_together__Pushable_6 = (MR_Integer) 0;
#line 479 "push_goals_together.m"
                    }
#line 478 "push_goals_together.m"
                    break;
#line 478 "push_goals_together.m"
                  case (MR_Integer) 3:
#line 478 "push_goals_together.m"
#line 478 "push_goals_together.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__Unification_14, (MR_Integer) 0)))) {
#line 478 "push_goals_together.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 478 "push_goals_together.m"
                      case (MR_Integer) 0:
#line 477 "push_goals_together.m"
                        *transform_hlds__implicit_parallelism__push_goals_together__Pushable_6 = (MR_Integer) 1;
#line 478 "push_goals_together.m"
                        break;
#line 478 "push_goals_together.m"
                      case (MR_Integer) 1:
#line 489 "push_goals_together.m"
                        {
#line 490 "push_goals_together.m"
                          {
#line 490 "push_goals_together.m"
                            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.implicit_parallelism.push_goals_together", (MR_String) "predicate \140transform_hlds.implicit_parallelism.push_goals_together.is_pushable_goal\'/3", (MR_String) "complicated_unify");
#line 490 "push_goals_together.m"
                            return;
                          }
#line 489 "push_goals_together.m"
                        }
#line 478 "push_goals_together.m"
                        break;
#line 478 "push_goals_together.m"
                    }
#line 478 "push_goals_together.m"
                    break;
#line 478 "push_goals_together.m"
                }
#line 471 "push_goals_together.m"
              }
#line 492 "push_goals_together.m"
              break;
#line 492 "push_goals_together.m"
            case (MR_Integer) 2:
#line 497 "push_goals_together.m"
              *transform_hlds__implicit_parallelism__push_goals_together__Pushable_6 = (MR_Integer) 1;
#line 492 "push_goals_together.m"
              break;
#line 492 "push_goals_together.m"
            case (MR_Integer) 3:
#line 492 "push_goals_together.m"
#line 492 "push_goals_together.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_7, (MR_Integer) 0)))) {
#line 492 "push_goals_together.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 492 "push_goals_together.m"
                case (MR_Integer) 0:
#line 492 "push_goals_together.m"
                case (MR_Integer) 1:
#line 497 "push_goals_together.m"
                  *transform_hlds__implicit_parallelism__push_goals_together__Pushable_6 = (MR_Integer) 1;
#line 492 "push_goals_together.m"
                  break;
#line 492 "push_goals_together.m"
                case (MR_Integer) 2:
#line 501 "push_goals_together.m"
                  {
#line 501 "push_goals_together.m"
                    MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goals_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_7, (MR_Integer) 2)));
#line 499 "push_goals_together.m"
                    MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_7, (MR_Integer) 1)));

#line 502 "push_goals_together.m"
                    {
#line 502 "push_goals_together.m"
                      transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_list_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__PushInfo_4, transform_hlds__implicit_parallelism__push_goals_together__Goals_56, transform_hlds__implicit_parallelism__push_goals_together__Pushable_6);
#line 502 "push_goals_together.m"
                      return;
                    }
#line 501 "push_goals_together.m"
                  }
#line 492 "push_goals_together.m"
                  break;
#line 492 "push_goals_together.m"
                case (MR_Integer) 3:
#line 501 "push_goals_together.m"
                  {
#line 501 "push_goals_together.m"
                    MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goals_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_7, (MR_Integer) 1)));

#line 502 "push_goals_together.m"
                    {
#line 502 "push_goals_together.m"
                      transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_list_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__PushInfo_4, transform_hlds__implicit_parallelism__push_goals_together__Goals_92, transform_hlds__implicit_parallelism__push_goals_together__Pushable_6);
#line 502 "push_goals_together.m"
                      return;
                    }
#line 501 "push_goals_together.m"
                  }
#line 492 "push_goals_together.m"
                  break;
#line 492 "push_goals_together.m"
                case (MR_Integer) 4:
#line 504 "push_goals_together.m"
                  {
#line 504 "push_goals_together.m"
                    MR_Word transform_hlds__implicit_parallelism__push_goals_together__Cases_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_7, (MR_Integer) 3)));
#line 504 "push_goals_together.m"
                    MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_7, (MR_Integer) 1)));
#line 504 "push_goals_together.m"
                    MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_7, (MR_Integer) 2)));

#line 505 "push_goals_together.m"
                    {
#line 505 "push_goals_together.m"
                      transform_hlds__implicit_parallelism__push_goals_together__is_pushable_case_list_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__PushInfo_4, transform_hlds__implicit_parallelism__push_goals_together__Cases_59, transform_hlds__implicit_parallelism__push_goals_together__Pushable_6);
#line 505 "push_goals_together.m"
                      return;
                    }
#line 504 "push_goals_together.m"
                  }
#line 492 "push_goals_together.m"
                  break;
#line 492 "push_goals_together.m"
                case (MR_Integer) 5:
#line 512 "push_goals_together.m"
                  {
#line 512 "push_goals_together.m"
                    MR_Word transform_hlds__implicit_parallelism__push_goals_together__SubGoal_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_7, (MR_Integer) 2)));
#line 511 "push_goals_together.m"
                    MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_7, (MR_Integer) 1)));

#line 513 "push_goals_together.m"
                    /* direct tailcall eliminated */
#line 513 "push_goals_together.m"
                    {
#line 513 "push_goals_together.m"
                      MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goal__tmp_copy_5 = transform_hlds__implicit_parallelism__push_goals_together__SubGoal_93;

#line 513 "push_goals_together.m"
                      transform_hlds__implicit_parallelism__push_goals_together__Goal_5 = transform_hlds__implicit_parallelism__push_goals_together__Goal__tmp_copy_5;
#line 513 "push_goals_together.m"
                    }
#line 513 "push_goals_together.m"
                    continue;
#line 512 "push_goals_together.m"
                  }
#line 492 "push_goals_together.m"
                  break;
#line 492 "push_goals_together.m"
                case (MR_Integer) 6:
#line 507 "push_goals_together.m"
                  {
#line 507 "push_goals_together.m"
                    MR_Word transform_hlds__implicit_parallelism__push_goals_together__Then_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_7, (MR_Integer) 3)));
#line 507 "push_goals_together.m"
                    MR_Word transform_hlds__implicit_parallelism__push_goals_together__Else_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_7, (MR_Integer) 4)));
#line 507 "push_goals_together.m"
                    MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_84_84;
#line 507 "push_goals_together.m"
                    MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goal_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_7, (MR_Integer) 2)));
#line 507 "push_goals_together.m"
                    MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goals_97;
#line 507 "push_goals_together.m"
                    MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalPushable_99;
#line 507 "push_goals_together.m"
                    MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_7, (MR_Integer) 1)));

#line 508 "push_goals_together.m"
                    {
#line 508 "push_goals_together.m"
                      transform_hlds__implicit_parallelism__push_goals_together__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 508 "push_goals_together.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__V_84_84, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Else_63));
#line 508 "push_goals_together.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 508 "push_goals_together.m"
                    }
#line 508 "push_goals_together.m"
                    {
#line 508 "push_goals_together.m"
                      transform_hlds__implicit_parallelism__push_goals_together__Goals_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 508 "push_goals_together.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__Goals_97, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Then_62));
#line 508 "push_goals_together.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__Goals_97, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__V_84_84));
#line 508 "push_goals_together.m"
                    }
#line 536 "push_goals_together.m"
                    {
#line 536 "push_goals_together.m"
                      transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__PushInfo_4, transform_hlds__implicit_parallelism__push_goals_together__Goal_96, &transform_hlds__implicit_parallelism__push_goals_together__GoalPushable_99);
                    }
#line 540 "push_goals_together.m"
#line 540 "push_goals_together.m"
                    switch (transform_hlds__implicit_parallelism__push_goals_together__GoalPushable_99) {
#line 540 "push_goals_together.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 540 "push_goals_together.m"
                      case (MR_Integer) 0:
#line 539 "push_goals_together.m"
                        *transform_hlds__implicit_parallelism__push_goals_together__Pushable_6 = (MR_Integer) 0;
#line 540 "push_goals_together.m"
                        break;
#line 540 "push_goals_together.m"
                      case (MR_Integer) 1:
#line 535 "push_goals_together.m"
                        {
#line 535 "push_goals_together.m"
                          MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goal_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__Goals_97, (MR_Integer) 0)));
#line 535 "push_goals_together.m"
                          MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goals_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__Goals_97, (MR_Integer) 1)));
#line 535 "push_goals_together.m"
                          MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalPushable_105;

#line 536 "push_goals_together.m"
                          {
#line 536 "push_goals_together.m"
                            transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__PushInfo_4, transform_hlds__implicit_parallelism__push_goals_together__Goal_102, &transform_hlds__implicit_parallelism__push_goals_together__GoalPushable_105);
                          }
#line 540 "push_goals_together.m"
#line 540 "push_goals_together.m"
                          switch (transform_hlds__implicit_parallelism__push_goals_together__GoalPushable_105) {
#line 540 "push_goals_together.m"
                            default: /*NOTREACHED*/ MR_assert(0);
#line 540 "push_goals_together.m"
                            case (MR_Integer) 0:
#line 539 "push_goals_together.m"
                              *transform_hlds__implicit_parallelism__push_goals_together__Pushable_6 = (MR_Integer) 0;
#line 540 "push_goals_together.m"
                              break;
#line 540 "push_goals_together.m"
                            case (MR_Integer) 1:
#line 535 "push_goals_together.m"
                              {
#line 535 "push_goals_together.m"
                                MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goal_108 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__Goals_103, (MR_Integer) 0)));
#line 535 "push_goals_together.m"
                                MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalPushable_111;
#line 535 "push_goals_together.m"
                                MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goals_109 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__Goals_103, (MR_Integer) 1)));

#line 536 "push_goals_together.m"
                                {
#line 536 "push_goals_together.m"
                                  transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__PushInfo_4, transform_hlds__implicit_parallelism__push_goals_together__Goal_108, &transform_hlds__implicit_parallelism__push_goals_together__GoalPushable_111);
                                }
#line 540 "push_goals_together.m"
#line 540 "push_goals_together.m"
                                switch (transform_hlds__implicit_parallelism__push_goals_together__GoalPushable_111) {
#line 540 "push_goals_together.m"
                                  default: /*NOTREACHED*/ MR_assert(0);
#line 540 "push_goals_together.m"
                                  case (MR_Integer) 0:
#line 539 "push_goals_together.m"
                                    *transform_hlds__implicit_parallelism__push_goals_together__Pushable_6 = (MR_Integer) 0;
#line 540 "push_goals_together.m"
                                    break;
#line 540 "push_goals_together.m"
                                  case (MR_Integer) 1:
#line 534 "push_goals_together.m"
                                    *transform_hlds__implicit_parallelism__push_goals_together__Pushable_6 = (MR_Integer) 1;
#line 540 "push_goals_together.m"
                                    break;
#line 540 "push_goals_together.m"
                                }
#line 535 "push_goals_together.m"
                              }
#line 540 "push_goals_together.m"
                              break;
#line 540 "push_goals_together.m"
                          }
#line 535 "push_goals_together.m"
                        }
#line 540 "push_goals_together.m"
                        break;
#line 540 "push_goals_together.m"
                    }
#line 507 "push_goals_together.m"
                  }
#line 492 "push_goals_together.m"
                  break;
#line 492 "push_goals_together.m"
                case (MR_Integer) 7:
#line 515 "push_goals_together.m"
                  {
#line 515 "push_goals_together.m"
                    MR_Word transform_hlds__implicit_parallelism__push_goals_together__Shorthand_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_7, (MR_Integer) 1)));

#line 522 "push_goals_together.m"
#line 522 "push_goals_together.m"
                    switch (MR_tag((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__Shorthand_66)) {
#line 522 "push_goals_together.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 522 "push_goals_together.m"
                      case (MR_Integer) 0:
#line 523 "push_goals_together.m"
                        {
#line 524 "push_goals_together.m"
                          {
#line 524 "push_goals_together.m"
                            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.implicit_parallelism.push_goals_together", (MR_String) "predicate \140transform_hlds.implicit_parallelism.push_goals_together.is_pushable_goal\'/3", (MR_String) "bi_implication");
#line 524 "push_goals_together.m"
                            return;
                          }
#line 523 "push_goals_together.m"
                        }
#line 522 "push_goals_together.m"
                        break;
#line 522 "push_goals_together.m"
                      case (MR_Integer) 1:
#line 522 "push_goals_together.m"
                      case (MR_Integer) 2:
#line 521 "push_goals_together.m"
                        *transform_hlds__implicit_parallelism__push_goals_together__Pushable_6 = (MR_Integer) 0;
#line 522 "push_goals_together.m"
                        break;
#line 522 "push_goals_together.m"
                    }
#line 515 "push_goals_together.m"
                  }
#line 492 "push_goals_together.m"
                  break;
#line 492 "push_goals_together.m"
              }
#line 492 "push_goals_together.m"
              break;
#line 492 "push_goals_together.m"
          }
#line 527 "push_goals_together.m"
        else
#line 528 "push_goals_together.m"
          *transform_hlds__implicit_parallelism__push_goals_together__Pushable_6 = (MR_Integer) 0;
#line 462 "push_goals_together.m"
      }
#line 462 "push_goals_together.m"
      break;
#line 462 "push_goals_together.m"
    }
#line 459 "push_goals_together.m"
}

#line 424 "push_goals_together.m"
static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__find_hi_goals_7_p_0(
#line 424 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
#line 424 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2,
#line 424 "push_goals_together.m"
  MR_Integer transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3,
#line 424 "push_goals_together.m"
  MR_Integer transform_hlds__implicit_parallelism__push_goals_together__HeadVar__4_4,
#line 424 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__5_5,
#line 424 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__6_6,
#line 424 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__7_7)
#line 424 "push_goals_together.m"
{
#line 427 "push_goals_together.m"
  {
#line 427 "push_goals_together.m"
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;

#line 427 "push_goals_together.m"
    if ((transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 427 "push_goals_together.m"
      {
#line 427 "push_goals_together.m"
        *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 427 "push_goals_together.m"
        *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 427 "push_goals_together.m"
        *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__7_7 = (MR_Integer) 0;
#line 427 "push_goals_together.m"
      }
#line 427 "push_goals_together.m"
    else
#line 428 "push_goals_together.m"
      {
#line 428 "push_goals_together.m"
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__Head_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2, (MR_Integer) 0)));
#line 428 "push_goals_together.m"
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__Tail_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2, (MR_Integer) 1)));
#line 428 "push_goals_together.m"
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadPushable_19;

#line 429 "push_goals_together.m"
        {
#line 429 "push_goals_together.m"
          transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1, transform_hlds__implicit_parallelism__push_goals_together__Head_12, &transform_hlds__implicit_parallelism__push_goals_together__HeadPushable_19);
        }
#line 441 "push_goals_together.m"
#line 441 "push_goals_together.m"
        switch (transform_hlds__implicit_parallelism__push_goals_together__HeadPushable_19) {
#line 441 "push_goals_together.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 441 "push_goals_together.m"
          case (MR_Integer) 0:
#line 442 "push_goals_together.m"
            {
#line 443 "push_goals_together.m"
              *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 444 "push_goals_together.m"
              *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 445 "push_goals_together.m"
              *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__7_7 = (MR_Integer) 0;
#line 442 "push_goals_together.m"
            }
#line 441 "push_goals_together.m"
            break;
#line 441 "push_goals_together.m"
          case (MR_Integer) 1:
#line 436 "push_goals_together.m"
            {
#line 432 "push_goals_together.m"
              transform_hlds__implicit_parallelism__push_goals_together__succeeded = (transform_hlds__implicit_parallelism__push_goals_together__HeadVar__4_4 == transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3);
#line 436 "push_goals_together.m"
              if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 433 "push_goals_together.m"
                {
#line 433 "push_goals_together.m"
                  {
#line 433 "push_goals_together.m"
                    MR_Word base;
#line 433 "push_goals_together.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 433 "push_goals_together.m"
                    *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__5_5 = base;
#line 433 "push_goals_together.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Head_12));
#line 433 "push_goals_together.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 433 "push_goals_together.m"
                  }
#line 434 "push_goals_together.m"
                  *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__6_6 = transform_hlds__implicit_parallelism__push_goals_together__Tail_13;
#line 435 "push_goals_together.m"
                  *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__7_7 = (MR_Integer) 1;
#line 433 "push_goals_together.m"
                }
#line 436 "push_goals_together.m"
              else
#line 438 "push_goals_together.m"
                {
#line 438 "push_goals_together.m"
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__LoHiTail_20;
#line 438 "push_goals_together.m"
                  MR_Integer transform_hlds__implicit_parallelism__push_goals_together__V_22_22 = (transform_hlds__implicit_parallelism__push_goals_together__HeadVar__4_4 + (MR_Integer) 1);

#line 437 "push_goals_together.m"
                  {
#line 437 "push_goals_together.m"
                    transform_hlds__implicit_parallelism__push_goals_together__find_hi_goals_7_p_0(transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1, transform_hlds__implicit_parallelism__push_goals_together__Tail_13, transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3, transform_hlds__implicit_parallelism__push_goals_together__V_22_22, &transform_hlds__implicit_parallelism__push_goals_together__LoHiTail_20, transform_hlds__implicit_parallelism__push_goals_together__HeadVar__6_6, transform_hlds__implicit_parallelism__push_goals_together__HeadVar__7_7);
                  }
#line 439 "push_goals_together.m"
                  {
#line 439 "push_goals_together.m"
                    MR_Word base;
#line 439 "push_goals_together.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 439 "push_goals_together.m"
                    *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__5_5 = base;
#line 439 "push_goals_together.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Head_12));
#line 439 "push_goals_together.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__LoHiTail_20));
#line 439 "push_goals_together.m"
                  }
#line 438 "push_goals_together.m"
                }
#line 436 "push_goals_together.m"
            }
#line 441 "push_goals_together.m"
            break;
#line 441 "push_goals_together.m"
        }
#line 428 "push_goals_together.m"
      }
#line 427 "push_goals_together.m"
  }
#line 424 "push_goals_together.m"
}

#line 389 "push_goals_together.m"
static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__find_lo_hi_goals_9_p_0(
#line 389 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__PushInfo_10,
#line 389 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Conjuncts_11,
#line 389 "push_goals_together.m"
  MR_Integer transform_hlds__implicit_parallelism__push_goals_together__Lo_12,
#line 389 "push_goals_together.m"
  MR_Integer transform_hlds__implicit_parallelism__push_goals_together__Hi_13,
#line 389 "push_goals_together.m"
  MR_Integer transform_hlds__implicit_parallelism__push_goals_together__Cur_14,
#line 389 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__Before_15,
#line 389 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__LoHi_16,
#line 389 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__After_17,
#line 389 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__Pushable_18)
#line 389 "push_goals_together.m"
{
#line 398 "push_goals_together.m"
  {
#line 398 "push_goals_together.m"
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded = (transform_hlds__implicit_parallelism__push_goals_together__Cur_14 == transform_hlds__implicit_parallelism__push_goals_together__Lo_12);

#line 398 "push_goals_together.m"
    if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 396 "push_goals_together.m"
      {
#line 396 "push_goals_together.m"
        {
#line 396 "push_goals_together.m"
          transform_hlds__implicit_parallelism__push_goals_together__find_hi_goals_7_p_0(transform_hlds__implicit_parallelism__push_goals_together__PushInfo_10, transform_hlds__implicit_parallelism__push_goals_together__Conjuncts_11, transform_hlds__implicit_parallelism__push_goals_together__Hi_13, transform_hlds__implicit_parallelism__push_goals_together__Cur_14, transform_hlds__implicit_parallelism__push_goals_together__LoHi_16, transform_hlds__implicit_parallelism__push_goals_together__After_17, transform_hlds__implicit_parallelism__push_goals_together__Pushable_18);
        }
#line 397 "push_goals_together.m"
        *transform_hlds__implicit_parallelism__push_goals_together__Before_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 396 "push_goals_together.m"
      }
#line 398 "push_goals_together.m"
    else
#line 405 "push_goals_together.m"
    if ((transform_hlds__implicit_parallelism__push_goals_together__Conjuncts_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 400 "push_goals_together.m"
      {
#line 401 "push_goals_together.m"
        *transform_hlds__implicit_parallelism__push_goals_together__Before_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 402 "push_goals_together.m"
        *transform_hlds__implicit_parallelism__push_goals_together__LoHi_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 403 "push_goals_together.m"
        *transform_hlds__implicit_parallelism__push_goals_together__After_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 404 "push_goals_together.m"
        *transform_hlds__implicit_parallelism__push_goals_together__Pushable_18 = (MR_Integer) 0;
#line 400 "push_goals_together.m"
      }
#line 405 "push_goals_together.m"
    else
#line 406 "push_goals_together.m"
      {
#line 406 "push_goals_together.m"
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__Head_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__Conjuncts_11, (MR_Integer) 0)));
#line 406 "push_goals_together.m"
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__Tail_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__Conjuncts_11, (MR_Integer) 1)));
#line 406 "push_goals_together.m"
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__BeforeTail_21;
#line 406 "push_goals_together.m"
        MR_Integer transform_hlds__implicit_parallelism__push_goals_together__V_22_22 = (transform_hlds__implicit_parallelism__push_goals_together__Cur_14 + (MR_Integer) 1);

#line 407 "push_goals_together.m"
        {
#line 407 "push_goals_together.m"
          transform_hlds__implicit_parallelism__push_goals_together__find_lo_hi_goals_9_p_0(transform_hlds__implicit_parallelism__push_goals_together__PushInfo_10, transform_hlds__implicit_parallelism__push_goals_together__Tail_20, transform_hlds__implicit_parallelism__push_goals_together__Lo_12, transform_hlds__implicit_parallelism__push_goals_together__Hi_13, transform_hlds__implicit_parallelism__push_goals_together__V_22_22, &transform_hlds__implicit_parallelism__push_goals_together__BeforeTail_21, transform_hlds__implicit_parallelism__push_goals_together__LoHi_16, transform_hlds__implicit_parallelism__push_goals_together__After_17, transform_hlds__implicit_parallelism__push_goals_together__Pushable_18);
        }
#line 409 "push_goals_together.m"
        {
#line 409 "push_goals_together.m"
          MR_Word base;
#line 409 "push_goals_together.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 409 "push_goals_together.m"
          *transform_hlds__implicit_parallelism__push_goals_together__Before_15 = base;
#line 409 "push_goals_together.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Head_19));
#line 409 "push_goals_together.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__BeforeTail_21));
#line 409 "push_goals_together.m"
        }
#line 406 "push_goals_together.m"
      }
#line 398 "push_goals_together.m"
  }
#line 389 "push_goals_together.m"
}

#line 353 "push_goals_together.m"
static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__perform_push_transform_5_p_0_1(
#line 353 "push_goals_together.m"
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__closure_arg,
#line 353 "push_goals_together.m"
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1,
#line 353 "push_goals_together.m"
  MR_Box * transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2)
#line 353 "push_goals_together.m"
{
#line 353 "push_goals_together.m"
  {
#line 353 "push_goals_together.m"
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;
#line 353 "push_goals_together.m"
    MR_Box transform_hlds__implicit_parallelism__push_goals_together__closure = transform_hlds__implicit_parallelism__push_goals_together__closure_arg;
#line 353 "push_goals_together.m"
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__conv0_Tail_5;

#line 353 "push_goals_together.m"
    {
#line 353 "push_goals_together.m"
      transform_hlds__implicit_parallelism__push_goals_together__succeeded = transform_hlds__implicit_parallelism__push_goals_together__maybe_steps_after_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1), &transform_hlds__implicit_parallelism__push_goals_together__conv0_Tail_5);
    }
#line 353 "push_goals_together.m"
    if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 353 "push_goals_together.m"
      {
#line 353 "push_goals_together.m"
        *transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2 = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__conv0_Tail_5));
#line 353 "push_goals_together.m"
        transform_hlds__implicit_parallelism__push_goals_together__succeeded = MR_TRUE;
#line 353 "push_goals_together.m"
      }
#line 353 "push_goals_together.m"
    return transform_hlds__implicit_parallelism__push_goals_together__succeeded;
#line 353 "push_goals_together.m"
  }
#line 353 "push_goals_together.m"
}

#line 339 "push_goals_together.m"
static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__perform_push_transform_5_p_0(
#line 339 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__PushGoal_6,
#line 339 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__PushInfo_7,
#line 339 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__Result_8,
#line 339 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_0_32,
#line 339 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_33)
#line 339 "push_goals_together.m"
{
#line 342 "push_goals_together.m"
  {
#line 342 "push_goals_together.m"
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;
#line 342 "push_goals_together.m"
    MR_String transform_hlds__implicit_parallelism__push_goals_together__GoalPathStr_10 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__PushGoal_6, (MR_Integer) 0)));
#line 342 "push_goals_together.m"
    MR_Integer transform_hlds__implicit_parallelism__push_goals_together__Lo_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__PushGoal_6, (MR_Integer) 1)));
#line 342 "push_goals_together.m"
    MR_Integer transform_hlds__implicit_parallelism__push_goals_together__Hi_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__PushGoal_6, (MR_Integer) 2)));
#line 342 "push_goals_together.m"
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__PushedInto_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__PushGoal_6, (MR_Integer) 3)));
#line 342 "push_goals_together.m"
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalPath_14;
#line 342 "push_goals_together.m"
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_15;
#line 342 "push_goals_together.m"
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalInfo0_16;
#line 367 "push_goals_together.m"
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__Before0_18;
#line 367 "push_goals_together.m"
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__After_20;
#line 367 "push_goals_together.m"
    MR_Integer transform_hlds__implicit_parallelism__push_goals_together__PushConjNum_24;
#line 367 "push_goals_together.m"
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__PushIntoGoal_28;
#line 347 "push_goals_together.m"
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_50_50;
#line 347 "push_goals_together.m"
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_51_51;
#line 347 "push_goals_together.m"
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__Conjuncts_17;
#line 347 "push_goals_together.m"
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__LoHi_19;
#line 347 "push_goals_together.m"
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__RelGoalPaths_21;
#line 347 "push_goals_together.m"
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadRelGoalPath_22;
#line 347 "push_goals_together.m"
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__TailRelGoalPaths_23;
#line 347 "push_goals_together.m"
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadRestRelPath_25;
#line 347 "push_goals_together.m"
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__TailRestRelPaths_26;
#line 347 "push_goals_together.m"
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__PushIntoGoal0_27;
#line 347 "push_goals_together.m"
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_34_34;
#line 347 "push_goals_together.m"
    MR_Integer transform_hlds__implicit_parallelism__push_goals_together__V_35_35;
#line 347 "push_goals_together.m"
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_36_36;
#line 347 "push_goals_together.m"
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_37_37;
#line 347 "push_goals_together.m"
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_38_38;
#line 347 "push_goals_together.m"
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_40_40;
#line 347 "push_goals_together.m"
    MR_Integer transform_hlds__implicit_parallelism__push_goals_together__V_41_41;
#line 347 "push_goals_together.m"
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_53_53;
#line 347 "push_goals_together.m"
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_54_54;
#line 355 "push_goals_together.m"
    MR_Box transform_hlds__implicit_parallelism__push_goals_together__conv1_PushIntoGoal0_27;

#line 344 "push_goals_together.m"
    {
#line 344 "push_goals_together.m"
      mdbcomp__goal_path__goal_path_from_string_det_2_p_0(transform_hlds__implicit_parallelism__push_goals_together__GoalPathStr_10, &transform_hlds__implicit_parallelism__push_goals_together__GoalPath_14);
    }
#line 345 "push_goals_together.m"
    transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_0_32, (MR_Integer) 0)));
#line 345 "push_goals_together.m"
    transform_hlds__implicit_parallelism__push_goals_together__GoalInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_0_32, (MR_Integer) 1)));
#line 347 "push_goals_together.m"
    transform_hlds__implicit_parallelism__push_goals_together__succeeded = ((((MR_tag((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_15, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 347 "push_goals_together.m"
    if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 347 "push_goals_together.m"
      {
#line 347 "push_goals_together.m"
        transform_hlds__implicit_parallelism__push_goals_together__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_15, (MR_Integer) 1)));
#line 347 "push_goals_together.m"
        transform_hlds__implicit_parallelism__push_goals_together__Conjuncts_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_15, (MR_Integer) 2)));
#line 347 "push_goals_together.m"
        transform_hlds__implicit_parallelism__push_goals_together__succeeded = (transform_hlds__implicit_parallelism__push_goals_together__V_34_34 == (MR_Integer) 0);
#line 347 "push_goals_together.m"
        if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 347 "push_goals_together.m"
          {
#line 348 "push_goals_together.m"
            transform_hlds__implicit_parallelism__push_goals_together__V_35_35 = (MR_Integer) 1;
#line 349 "push_goals_together.m"
            transform_hlds__implicit_parallelism__push_goals_together__V_36_36 = (MR_Integer) 1;
#line 348 "push_goals_together.m"
            {
#line 348 "push_goals_together.m"
              transform_hlds__implicit_parallelism__push_goals_together__find_lo_hi_goals_9_p_0(transform_hlds__implicit_parallelism__push_goals_together__PushInfo_7, transform_hlds__implicit_parallelism__push_goals_together__Conjuncts_17, transform_hlds__implicit_parallelism__push_goals_together__Lo_11, transform_hlds__implicit_parallelism__push_goals_together__Hi_12, transform_hlds__implicit_parallelism__push_goals_together__V_35_35, &transform_hlds__implicit_parallelism__push_goals_together__Before0_18, &transform_hlds__implicit_parallelism__push_goals_together__LoHi_19, &transform_hlds__implicit_parallelism__push_goals_together__After_20, &transform_hlds__implicit_parallelism__push_goals_together__V_53_53);
            }
#line 348 "push_goals_together.m"
            transform_hlds__implicit_parallelism__push_goals_together__succeeded = (transform_hlds__implicit_parallelism__push_goals_together__V_36_36 == transform_hlds__implicit_parallelism__push_goals_together__V_53_53);
#line 347 "push_goals_together.m"
            if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 347 "push_goals_together.m"
              {
#line 350 "push_goals_together.m"
                {
#line 350 "push_goals_together.m"
                  transform_hlds__implicit_parallelism__push_goals_together__succeeded = transform_hlds__implicit_parallelism__push_goals_together__find_relative_paths_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__GoalPath_14, transform_hlds__implicit_parallelism__push_goals_together__PushedInto_13, &transform_hlds__implicit_parallelism__push_goals_together__RelGoalPaths_21);
                }
#line 347 "push_goals_together.m"
                if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 347 "push_goals_together.m"
                  {
#line 351 "push_goals_together.m"
                    transform_hlds__implicit_parallelism__push_goals_together__succeeded = ((MR_tag((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__RelGoalPaths_21)) == (MR_mktag((MR_Integer) 1)));
#line 351 "push_goals_together.m"
                    if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 351 "push_goals_together.m"
                      {
#line 351 "push_goals_together.m"
                        transform_hlds__implicit_parallelism__push_goals_together__HeadRelGoalPath_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__RelGoalPaths_21, (MR_Integer) 0)));
#line 351 "push_goals_together.m"
                        transform_hlds__implicit_parallelism__push_goals_together__TailRelGoalPaths_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__RelGoalPaths_21, (MR_Integer) 1)));
#line 352 "push_goals_together.m"
                        transform_hlds__implicit_parallelism__push_goals_together__succeeded = ((MR_tag((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__HeadRelGoalPath_22)) == (MR_mktag((MR_Integer) 1)));
#line 352 "push_goals_together.m"
                        if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 352 "push_goals_together.m"
                          {
#line 352 "push_goals_together.m"
                            transform_hlds__implicit_parallelism__push_goals_together__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadRelGoalPath_22, (MR_Integer) 0)));
#line 352 "push_goals_together.m"
                            transform_hlds__implicit_parallelism__push_goals_together__HeadRestRelPath_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadRelGoalPath_22, (MR_Integer) 1)));
#line 352 "push_goals_together.m"
                            transform_hlds__implicit_parallelism__push_goals_together__succeeded = ((MR_tag((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__V_37_37)) == (MR_mktag((MR_Integer) 1)));
#line 352 "push_goals_together.m"
                            if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 352 "push_goals_together.m"
                              {
#line 352 "push_goals_together.m"
                                transform_hlds__implicit_parallelism__push_goals_together__PushConjNum_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__V_37_37, (MR_Integer) 0)));
#line 4988 "transform_hlds.implicit_parallelism.push_goals_together.c"
                                transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_50_50 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0;
#line 353 "push_goals_together.m"
                                {
#line 353 "push_goals_together.m"
                                  transform_hlds__implicit_parallelism__push_goals_together__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 353 "push_goals_together.m"
                                  MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_38_38, 0) = ((MR_Box) (&transform_hlds__implicit_parallelism__push_goals_together_scalar_common_2[0]));
#line 353 "push_goals_together.m"
                                  MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_38_38, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__perform_push_transform_5_p_0_1));
#line 353 "push_goals_together.m"
                                  MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 353 "push_goals_together.m"
                                  MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_38_38, 3) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__V_37_37));
#line 353 "push_goals_together.m"
                                }
#line 353 "push_goals_together.m"
                                {
#line 353 "push_goals_together.m"
                                  transform_hlds__implicit_parallelism__push_goals_together__succeeded = mercury__list__map_3_p_2(transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_50_50, transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_50_50, transform_hlds__implicit_parallelism__push_goals_together__V_38_38, transform_hlds__implicit_parallelism__push_goals_together__TailRelGoalPaths_23, &transform_hlds__implicit_parallelism__push_goals_together__TailRestRelPaths_26);
                                }
#line 347 "push_goals_together.m"
                                if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 347 "push_goals_together.m"
                                  {
#line 5013 "transform_hlds.implicit_parallelism.push_goals_together.c"
                                    transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_51_51 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 355 "push_goals_together.m"
                                    {
#line 355 "push_goals_together.m"
                                      transform_hlds__implicit_parallelism__push_goals_together__succeeded = mercury__list__index1_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_51_51, transform_hlds__implicit_parallelism__push_goals_together__Before0_18, transform_hlds__implicit_parallelism__push_goals_together__PushConjNum_24, &transform_hlds__implicit_parallelism__push_goals_together__conv1_PushIntoGoal0_27);
                                    }
#line 355 "push_goals_together.m"
                                    if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 355 "push_goals_together.m"
                                      {
#line 355 "push_goals_together.m"
                                        transform_hlds__implicit_parallelism__push_goals_together__PushIntoGoal0_27 = ((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__conv1_PushIntoGoal0_27);
#line 355 "push_goals_together.m"
                                        transform_hlds__implicit_parallelism__push_goals_together__succeeded = MR_TRUE;
#line 355 "push_goals_together.m"
                                      }
#line 347 "push_goals_together.m"
                                    if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 347 "push_goals_together.m"
                                      {
#line 357 "push_goals_together.m"
                                        transform_hlds__implicit_parallelism__push_goals_together__V_40_40 = (MR_Integer) 1;
#line 356 "push_goals_together.m"
                                        {
#line 356 "push_goals_together.m"
                                          transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0(transform_hlds__implicit_parallelism__push_goals_together__LoHi_19, transform_hlds__implicit_parallelism__push_goals_together__HeadRestRelPath_25, transform_hlds__implicit_parallelism__push_goals_together__TailRestRelPaths_26, transform_hlds__implicit_parallelism__push_goals_together__PushIntoGoal0_27, &transform_hlds__implicit_parallelism__push_goals_together__PushIntoGoal_28, &transform_hlds__implicit_parallelism__push_goals_together__V_54_54);
                                        }
#line 356 "push_goals_together.m"
                                        transform_hlds__implicit_parallelism__push_goals_together__succeeded = (transform_hlds__implicit_parallelism__push_goals_together__V_40_40 == transform_hlds__implicit_parallelism__push_goals_together__V_54_54);
#line 347 "push_goals_together.m"
                                        if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 347 "push_goals_together.m"
                                          {
#line 361 "push_goals_together.m"
                                            transform_hlds__implicit_parallelism__push_goals_together__V_41_41 = (transform_hlds__implicit_parallelism__push_goals_together__Lo_11 - transform_hlds__implicit_parallelism__push_goals_together__PushConjNum_24);
#line 361 "push_goals_together.m"
                                            transform_hlds__implicit_parallelism__push_goals_together__succeeded = (transform_hlds__implicit_parallelism__push_goals_together__V_41_41 == (MR_Integer) 1);
#line 347 "push_goals_together.m"
                                          }
#line 347 "push_goals_together.m"
                                      }
#line 347 "push_goals_together.m"
                                  }
#line 352 "push_goals_together.m"
                              }
#line 352 "push_goals_together.m"
                          }
#line 351 "push_goals_together.m"
                      }
#line 347 "push_goals_together.m"
                  }
#line 347 "push_goals_together.m"
              }
#line 347 "push_goals_together.m"
          }
#line 347 "push_goals_together.m"
      }
#line 367 "push_goals_together.m"
    if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 363 "push_goals_together.m"
      {
#line 363 "push_goals_together.m"
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_52_52 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 363 "push_goals_together.m"
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__Before_29;
#line 363 "push_goals_together.m"
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_30;
#line 363 "push_goals_together.m"
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_43_43;

#line 363 "push_goals_together.m"
        {
#line 363 "push_goals_together.m"
          mercury__list__det_replace_nth_4_p_0(transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_52_52, transform_hlds__implicit_parallelism__push_goals_together__Before0_18, transform_hlds__implicit_parallelism__push_goals_together__PushConjNum_24, ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__PushIntoGoal_28)), &transform_hlds__implicit_parallelism__push_goals_together__Before_29);
        }
#line 364 "push_goals_together.m"
        {
#line 364 "push_goals_together.m"
          transform_hlds__implicit_parallelism__push_goals_together__V_43_43 = mercury__list__f_43_43_2_f_0(transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_52_52, transform_hlds__implicit_parallelism__push_goals_together__Before_29, transform_hlds__implicit_parallelism__push_goals_together__After_20);
        }
#line 364 "push_goals_together.m"
        {
#line 364 "push_goals_together.m"
          transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 364 "push_goals_together.m"
          MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 364 "push_goals_together.m"
          MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_30, 1) = ((MR_Box) ((MR_Integer) 0));
#line 364 "push_goals_together.m"
          MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_30, 2) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__V_43_43));
#line 364 "push_goals_together.m"
        }
#line 365 "push_goals_together.m"
        {
#line 365 "push_goals_together.m"
          MR_Word base;
#line 365 "push_goals_together.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 365 "push_goals_together.m"
          *transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_33 = base;
#line 365 "push_goals_together.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_30));
#line 365 "push_goals_together.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__GoalInfo0_16));
#line 365 "push_goals_together.m"
        }
#line 366 "push_goals_together.m"
        *transform_hlds__implicit_parallelism__push_goals_together__Result_8 = (MR_Integer) 1;
#line 363 "push_goals_together.m"
      }
#line 367 "push_goals_together.m"
    else
#line 368 "push_goals_together.m"
      {
#line 368 "push_goals_together.m"
        *transform_hlds__implicit_parallelism__push_goals_together__Result_8 = (MR_Integer) 0;
#line 368 "push_goals_together.m"
        *transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_33 = transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_0_32;
#line 368 "push_goals_together.m"
      }
#line 342 "push_goals_together.m"
  }
#line 339 "push_goals_together.m"
}

#line 317 "push_goals_together.m"
static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__do_push_in_cases_7_p_0(
#line 317 "push_goals_together.m"
  MR_Integer transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
#line 317 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2,
#line 317 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3,
#line 317 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__4_4,
#line 317 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__5_5,
#line 317 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__6_6,
#line 317 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__7_7)
#line 317 "push_goals_together.m"
{
#line 320 "push_goals_together.m"
  {
#line 320 "push_goals_together.m"
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;

#line 320 "push_goals_together.m"
    if ((transform_hlds__implicit_parallelism__push_goals_together__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 320 "push_goals_together.m"
      {
#line 320 "push_goals_together.m"
        *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__5_5 = (MR_Integer) 0;
#line 320 "push_goals_together.m"
        *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 320 "push_goals_together.m"
      }
#line 320 "push_goals_together.m"
    else
#line 325 "push_goals_together.m"
      {
#line 325 "push_goals_together.m"
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__Case0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__6_6, (MR_Integer) 0)));
#line 325 "push_goals_together.m"
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__Cases0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__6_6, (MR_Integer) 1)));
#line 325 "push_goals_together.m"
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__Case_23;
#line 325 "push_goals_together.m"
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__Cases_24;

#line 326 "push_goals_together.m"
        transform_hlds__implicit_parallelism__push_goals_together__succeeded = (transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1 == (MR_Integer) 1);
#line 331 "push_goals_together.m"
        if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 327 "push_goals_together.m"
          {
#line 327 "push_goals_together.m"
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__MainConsId_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__Case0_21, (MR_Integer) 0)));
#line 327 "push_goals_together.m"
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__OtherConsIds_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__Case0_21, (MR_Integer) 1)));
#line 327 "push_goals_together.m"
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goal0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__Case0_21, (MR_Integer) 2)));
#line 327 "push_goals_together.m"
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goal_28;

#line 328 "push_goals_together.m"
            {
#line 328 "push_goals_together.m"
              transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_p_0(transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2, transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3, transform_hlds__implicit_parallelism__push_goals_together__HeadVar__4_4, transform_hlds__implicit_parallelism__push_goals_together__HeadVar__5_5, transform_hlds__implicit_parallelism__push_goals_together__Goal0_27, &transform_hlds__implicit_parallelism__push_goals_together__Goal_28);
            }
#line 329 "push_goals_together.m"
            {
#line 329 "push_goals_together.m"
              transform_hlds__implicit_parallelism__push_goals_together__Case_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 329 "push_goals_together.m"
              MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__Case_23, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__MainConsId_25));
#line 329 "push_goals_together.m"
              MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__Case_23, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__OtherConsIds_26));
#line 329 "push_goals_together.m"
              MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__Case_23, 2) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Goal_28));
#line 329 "push_goals_together.m"
            }
#line 330 "push_goals_together.m"
            transform_hlds__implicit_parallelism__push_goals_together__Cases_24 = transform_hlds__implicit_parallelism__push_goals_together__Cases0_22;
#line 327 "push_goals_together.m"
          }
#line 331 "push_goals_together.m"
        else
#line 332 "push_goals_together.m"
          {
#line 332 "push_goals_together.m"
            MR_Integer transform_hlds__implicit_parallelism__push_goals_together__V_29_29;

#line 332 "push_goals_together.m"
            transform_hlds__implicit_parallelism__push_goals_together__Case_23 = transform_hlds__implicit_parallelism__push_goals_together__Case0_21;
#line 333 "push_goals_together.m"
            transform_hlds__implicit_parallelism__push_goals_together__V_29_29 = (transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1 - (MR_Integer) 1);
#line 333 "push_goals_together.m"
            {
#line 333 "push_goals_together.m"
              transform_hlds__implicit_parallelism__push_goals_together__do_push_in_cases_7_p_0(transform_hlds__implicit_parallelism__push_goals_together__V_29_29, transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2, transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3, transform_hlds__implicit_parallelism__push_goals_together__HeadVar__4_4, transform_hlds__implicit_parallelism__push_goals_together__HeadVar__5_5, transform_hlds__implicit_parallelism__push_goals_together__Cases0_22, &transform_hlds__implicit_parallelism__push_goals_together__Cases_24);
            }
#line 332 "push_goals_together.m"
          }
#line 325 "push_goals_together.m"
        {
#line 325 "push_goals_together.m"
          MR_Word base;
#line 325 "push_goals_together.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 325 "push_goals_together.m"
          *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__7_7 = base;
#line 325 "push_goals_together.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Case_23));
#line 325 "push_goals_together.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Cases_24));
#line 325 "push_goals_together.m"
        }
#line 325 "push_goals_together.m"
      }
#line 320 "push_goals_together.m"
  }
#line 317 "push_goals_together.m"
}

#line 298 "push_goals_together.m"
static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goals_7_p_0(
#line 298 "push_goals_together.m"
  MR_Integer transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
#line 298 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2,
#line 298 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3,
#line 298 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__4_4,
#line 298 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__5_5,
#line 298 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__6_6,
#line 298 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__7_7)
#line 298 "push_goals_together.m"
{
#line 302 "push_goals_together.m"
  {
#line 302 "push_goals_together.m"
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;

#line 302 "push_goals_together.m"
    if ((transform_hlds__implicit_parallelism__push_goals_together__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 302 "push_goals_together.m"
      {
#line 302 "push_goals_together.m"
        *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__5_5 = (MR_Integer) 0;
#line 302 "push_goals_together.m"
        *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 302 "push_goals_together.m"
      }
#line 302 "push_goals_together.m"
    else
#line 307 "push_goals_together.m"
      {
#line 307 "push_goals_together.m"
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goal0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__6_6, (MR_Integer) 0)));
#line 307 "push_goals_together.m"
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goals0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__6_6, (MR_Integer) 1)));
#line 307 "push_goals_together.m"
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goal_23;
#line 307 "push_goals_together.m"
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goals_24;

#line 308 "push_goals_together.m"
        transform_hlds__implicit_parallelism__push_goals_together__succeeded = (transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1 == (MR_Integer) 1);
#line 311 "push_goals_together.m"
        if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 309 "push_goals_together.m"
          {
#line 309 "push_goals_together.m"
            {
#line 309 "push_goals_together.m"
              transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_p_0(transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2, transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3, transform_hlds__implicit_parallelism__push_goals_together__HeadVar__4_4, transform_hlds__implicit_parallelism__push_goals_together__HeadVar__5_5, transform_hlds__implicit_parallelism__push_goals_together__Goal0_21, &transform_hlds__implicit_parallelism__push_goals_together__Goal_23);
            }
#line 310 "push_goals_together.m"
            transform_hlds__implicit_parallelism__push_goals_together__Goals_24 = transform_hlds__implicit_parallelism__push_goals_together__Goals0_22;
#line 309 "push_goals_together.m"
          }
#line 311 "push_goals_together.m"
        else
#line 312 "push_goals_together.m"
          {
#line 312 "push_goals_together.m"
            MR_Integer transform_hlds__implicit_parallelism__push_goals_together__V_25_25;

#line 312 "push_goals_together.m"
            transform_hlds__implicit_parallelism__push_goals_together__Goal_23 = transform_hlds__implicit_parallelism__push_goals_together__Goal0_21;
#line 313 "push_goals_together.m"
            transform_hlds__implicit_parallelism__push_goals_together__V_25_25 = (transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1 - (MR_Integer) 1);
#line 313 "push_goals_together.m"
            {
#line 313 "push_goals_together.m"
              transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goals_7_p_0(transform_hlds__implicit_parallelism__push_goals_together__V_25_25, transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2, transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3, transform_hlds__implicit_parallelism__push_goals_together__HeadVar__4_4, transform_hlds__implicit_parallelism__push_goals_together__HeadVar__5_5, transform_hlds__implicit_parallelism__push_goals_together__Goals0_22, &transform_hlds__implicit_parallelism__push_goals_together__Goals_24);
            }
#line 312 "push_goals_together.m"
          }
#line 307 "push_goals_together.m"
        {
#line 307 "push_goals_together.m"
          MR_Word base;
#line 307 "push_goals_together.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 307 "push_goals_together.m"
          *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__7_7 = base;
#line 307 "push_goals_together.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Goal_23));
#line 307 "push_goals_together.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Goals_24));
#line 307 "push_goals_together.m"
        }
#line 307 "push_goals_together.m"
      }
#line 302 "push_goals_together.m"
  }
#line 298 "push_goals_together.m"
}

#line 175 "push_goals_together.m"
static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_p_0(
#line 175 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
#line 175 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__PushGoal_2,
#line 175 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__PushInfo_3,
#line 175 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__Result_4,
#line 175 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_0_5,
#line 175 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_6)
#line 175 "push_goals_together.m"
{
#line 178 "push_goals_together.m"
  {
#line 178 "push_goals_together.m"
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;

#line 178 "push_goals_together.m"
    if ((transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 180 "push_goals_together.m"
      {
#line 180 "push_goals_together.m"
        transform_hlds__implicit_parallelism__push_goals_together__perform_push_transform_5_p_0(transform_hlds__implicit_parallelism__push_goals_together__PushGoal_2, transform_hlds__implicit_parallelism__push_goals_together__PushInfo_3, transform_hlds__implicit_parallelism__push_goals_together__Result_4, transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_0_5, transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_6);
#line 180 "push_goals_together.m"
        return;
      }
#line 178 "push_goals_together.m"
    else
#line 181 "push_goals_together.m"
      {
#line 181 "push_goals_together.m"
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__Step_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1, (MR_Integer) 0)));
#line 181 "push_goals_together.m"
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__Path_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1, (MR_Integer) 1)));
#line 181 "push_goals_together.m"
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_0_5, (MR_Integer) 0)));
#line 181 "push_goals_together.m"
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalInfo0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_0_5, (MR_Integer) 1)));

#line 196 "push_goals_together.m"
#line 196 "push_goals_together.m"
        switch (MR_tag((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__Step_14)) {
#line 196 "push_goals_together.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 196 "push_goals_together.m"
          case (MR_Integer) 0:
#line 196 "push_goals_together.m"
#line 196 "push_goals_together.m"
            switch (MR_unmkbody(transform_hlds__implicit_parallelism__push_goals_together__Step_14)) {
#line 196 "push_goals_together.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 196 "push_goals_together.m"
              case (MR_Integer) 0:
#line 228 "push_goals_together.m"
                {
#line 228 "push_goals_together.m"
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Vars0_33;
#line 228 "push_goals_together.m"
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Cond0_34;
#line 228 "push_goals_together.m"
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Then0_35;
#line 228 "push_goals_together.m"
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Else0_36;

#line 224 "push_goals_together.m"
                  transform_hlds__implicit_parallelism__push_goals_together__succeeded = ((((MR_tag((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 224 "push_goals_together.m"
                  if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 224 "push_goals_together.m"
                    {
#line 224 "push_goals_together.m"
                      transform_hlds__implicit_parallelism__push_goals_together__Vars0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20, (MR_Integer) 1)));
#line 224 "push_goals_together.m"
                      transform_hlds__implicit_parallelism__push_goals_together__Cond0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20, (MR_Integer) 2)));
#line 224 "push_goals_together.m"
                      transform_hlds__implicit_parallelism__push_goals_together__Then0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20, (MR_Integer) 3)));
#line 224 "push_goals_together.m"
                      transform_hlds__implicit_parallelism__push_goals_together__Else0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20, (MR_Integer) 4)));
#line 225 "push_goals_together.m"
                      {
#line 225 "push_goals_together.m"
                        MR_Word transform_hlds__implicit_parallelism__push_goals_together__Cond_37;
#line 225 "push_goals_together.m"
                        MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_95;

#line 225 "push_goals_together.m"
                        {
#line 225 "push_goals_together.m"
                          transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_p_0(transform_hlds__implicit_parallelism__push_goals_together__Path_15, transform_hlds__implicit_parallelism__push_goals_together__PushGoal_2, transform_hlds__implicit_parallelism__push_goals_together__PushInfo_3, transform_hlds__implicit_parallelism__push_goals_together__Result_4, transform_hlds__implicit_parallelism__push_goals_together__Cond0_34, &transform_hlds__implicit_parallelism__push_goals_together__Cond_37);
                        }
#line 226 "push_goals_together.m"
                        {
#line 226 "push_goals_together.m"
                          transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 226 "push_goals_together.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 226 "push_goals_together.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_95, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Vars0_33));
#line 226 "push_goals_together.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_95, 2) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Cond_37));
#line 226 "push_goals_together.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_95, 3) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Then0_35));
#line 226 "push_goals_together.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_95, 4) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Else0_36));
#line 226 "push_goals_together.m"
                        }
#line 227 "push_goals_together.m"
                        {
#line 227 "push_goals_together.m"
                          MR_Word base;
#line 227 "push_goals_together.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 227 "push_goals_together.m"
                          *transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_6 = base;
#line 227 "push_goals_together.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_95));
#line 227 "push_goals_together.m"
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__GoalInfo0_21));
#line 227 "push_goals_together.m"
                        }
#line 225 "push_goals_together.m"
                      }
#line 224 "push_goals_together.m"
                    }
#line 224 "push_goals_together.m"
                  else
#line 229 "push_goals_together.m"
                    {
#line 229 "push_goals_together.m"
                      *transform_hlds__implicit_parallelism__push_goals_together__Result_4 = (MR_Integer) 0;
#line 229 "push_goals_together.m"
                      *transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_6 = transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_0_5;
#line 229 "push_goals_together.m"
                    }
#line 228 "push_goals_together.m"
                }
#line 196 "push_goals_together.m"
                break;
#line 196 "push_goals_together.m"
              case (MR_Integer) 1:
#line 240 "push_goals_together.m"
                {
#line 240 "push_goals_together.m"
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Vars0_100;
#line 240 "push_goals_together.m"
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Cond0_101;
#line 240 "push_goals_together.m"
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Then0_102;
#line 240 "push_goals_together.m"
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Else0_103;

#line 236 "push_goals_together.m"
                  transform_hlds__implicit_parallelism__push_goals_together__succeeded = ((((MR_tag((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 236 "push_goals_together.m"
                  if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 236 "push_goals_together.m"
                    {
#line 236 "push_goals_together.m"
                      transform_hlds__implicit_parallelism__push_goals_together__Vars0_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20, (MR_Integer) 1)));
#line 236 "push_goals_together.m"
                      transform_hlds__implicit_parallelism__push_goals_together__Cond0_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20, (MR_Integer) 2)));
#line 236 "push_goals_together.m"
                      transform_hlds__implicit_parallelism__push_goals_together__Then0_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20, (MR_Integer) 3)));
#line 236 "push_goals_together.m"
                      transform_hlds__implicit_parallelism__push_goals_together__Else0_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20, (MR_Integer) 4)));
#line 237 "push_goals_together.m"
                      {
#line 237 "push_goals_together.m"
                        MR_Word transform_hlds__implicit_parallelism__push_goals_together__Then_38;
#line 237 "push_goals_together.m"
                        MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_98;

#line 237 "push_goals_together.m"
                        {
#line 237 "push_goals_together.m"
                          transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_p_0(transform_hlds__implicit_parallelism__push_goals_together__Path_15, transform_hlds__implicit_parallelism__push_goals_together__PushGoal_2, transform_hlds__implicit_parallelism__push_goals_together__PushInfo_3, transform_hlds__implicit_parallelism__push_goals_together__Result_4, transform_hlds__implicit_parallelism__push_goals_together__Then0_102, &transform_hlds__implicit_parallelism__push_goals_together__Then_38);
                        }
#line 238 "push_goals_together.m"
                        {
#line 238 "push_goals_together.m"
                          transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 238 "push_goals_together.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 238 "push_goals_together.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_98, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Vars0_100));
#line 238 "push_goals_together.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_98, 2) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Cond0_101));
#line 238 "push_goals_together.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_98, 3) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Then_38));
#line 238 "push_goals_together.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_98, 4) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Else0_103));
#line 238 "push_goals_together.m"
                        }
#line 239 "push_goals_together.m"
                        {
#line 239 "push_goals_together.m"
                          MR_Word base;
#line 239 "push_goals_together.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 239 "push_goals_together.m"
                          *transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_6 = base;
#line 239 "push_goals_together.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_98));
#line 239 "push_goals_together.m"
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__GoalInfo0_21));
#line 239 "push_goals_together.m"
                        }
#line 237 "push_goals_together.m"
                      }
#line 236 "push_goals_together.m"
                    }
#line 236 "push_goals_together.m"
                  else
#line 241 "push_goals_together.m"
                    {
#line 241 "push_goals_together.m"
                      *transform_hlds__implicit_parallelism__push_goals_together__Result_4 = (MR_Integer) 0;
#line 241 "push_goals_together.m"
                      *transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_6 = transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_0_5;
#line 241 "push_goals_together.m"
                    }
#line 240 "push_goals_together.m"
                }
#line 196 "push_goals_together.m"
                break;
#line 196 "push_goals_together.m"
              case (MR_Integer) 2:
#line 252 "push_goals_together.m"
                {
#line 252 "push_goals_together.m"
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Vars0_111;
#line 252 "push_goals_together.m"
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Cond0_112;
#line 252 "push_goals_together.m"
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Then0_113;
#line 252 "push_goals_together.m"
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Else0_114;

#line 248 "push_goals_together.m"
                  transform_hlds__implicit_parallelism__push_goals_together__succeeded = ((((MR_tag((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 248 "push_goals_together.m"
                  if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 248 "push_goals_together.m"
                    {
#line 248 "push_goals_together.m"
                      transform_hlds__implicit_parallelism__push_goals_together__Vars0_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20, (MR_Integer) 1)));
#line 248 "push_goals_together.m"
                      transform_hlds__implicit_parallelism__push_goals_together__Cond0_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20, (MR_Integer) 2)));
#line 248 "push_goals_together.m"
                      transform_hlds__implicit_parallelism__push_goals_together__Then0_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20, (MR_Integer) 3)));
#line 248 "push_goals_together.m"
                      transform_hlds__implicit_parallelism__push_goals_together__Else0_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20, (MR_Integer) 4)));
#line 249 "push_goals_together.m"
                      {
#line 249 "push_goals_together.m"
                        MR_Word transform_hlds__implicit_parallelism__push_goals_together__Else_39;
#line 249 "push_goals_together.m"
                        MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_109;

#line 249 "push_goals_together.m"
                        {
#line 249 "push_goals_together.m"
                          transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_p_0(transform_hlds__implicit_parallelism__push_goals_together__Path_15, transform_hlds__implicit_parallelism__push_goals_together__PushGoal_2, transform_hlds__implicit_parallelism__push_goals_together__PushInfo_3, transform_hlds__implicit_parallelism__push_goals_together__Result_4, transform_hlds__implicit_parallelism__push_goals_together__Else0_114, &transform_hlds__implicit_parallelism__push_goals_together__Else_39);
                        }
#line 250 "push_goals_together.m"
                        {
#line 250 "push_goals_together.m"
                          transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 250 "push_goals_together.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 250 "push_goals_together.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_109, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Vars0_111));
#line 250 "push_goals_together.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_109, 2) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Cond0_112));
#line 250 "push_goals_together.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_109, 3) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Then0_113));
#line 250 "push_goals_together.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_109, 4) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Else_39));
#line 250 "push_goals_together.m"
                        }
#line 251 "push_goals_together.m"
                        {
#line 251 "push_goals_together.m"
                          MR_Word base;
#line 251 "push_goals_together.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 251 "push_goals_together.m"
                          *transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_6 = base;
#line 251 "push_goals_together.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_109));
#line 251 "push_goals_together.m"
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__GoalInfo0_21));
#line 251 "push_goals_together.m"
                        }
#line 249 "push_goals_together.m"
                      }
#line 248 "push_goals_together.m"
                    }
#line 248 "push_goals_together.m"
                  else
#line 253 "push_goals_together.m"
                    {
#line 253 "push_goals_together.m"
                      *transform_hlds__implicit_parallelism__push_goals_together__Result_4 = (MR_Integer) 0;
#line 253 "push_goals_together.m"
                      *transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_6 = transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_0_5;
#line 253 "push_goals_together.m"
                    }
#line 252 "push_goals_together.m"
                }
#line 196 "push_goals_together.m"
                break;
#line 196 "push_goals_together.m"
              case (MR_Integer) 3:
#line 265 "push_goals_together.m"
                {
#line 265 "push_goals_together.m"
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__SubGoal0_40;

#line 260 "push_goals_together.m"
                  transform_hlds__implicit_parallelism__push_goals_together__succeeded = ((MR_tag((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20)) == (MR_mktag((MR_Integer) 0)));
#line 260 "push_goals_together.m"
                  if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 260 "push_goals_together.m"
                    {
#line 260 "push_goals_together.m"
                      transform_hlds__implicit_parallelism__push_goals_together__SubGoal0_40 = (MR_Word) MR_body(((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20), (MR_Integer) 0);
#line 262 "push_goals_together.m"
                      {
#line 262 "push_goals_together.m"
                        MR_Word transform_hlds__implicit_parallelism__push_goals_together__SubGoal_41;
#line 262 "push_goals_together.m"
                        MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_120;

#line 261 "push_goals_together.m"
                        {
#line 261 "push_goals_together.m"
                          transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_p_0(transform_hlds__implicit_parallelism__push_goals_together__Path_15, transform_hlds__implicit_parallelism__push_goals_together__PushGoal_2, transform_hlds__implicit_parallelism__push_goals_together__PushInfo_3, transform_hlds__implicit_parallelism__push_goals_together__Result_4, transform_hlds__implicit_parallelism__push_goals_together__SubGoal0_40, &transform_hlds__implicit_parallelism__push_goals_together__SubGoal_41);
                        }
#line 263 "push_goals_together.m"
                        transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_120 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__implicit_parallelism__push_goals_together__SubGoal_41);
#line 264 "push_goals_together.m"
                        {
#line 264 "push_goals_together.m"
                          MR_Word base;
#line 264 "push_goals_together.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 264 "push_goals_together.m"
                          *transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_6 = base;
#line 264 "push_goals_together.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_120));
#line 264 "push_goals_together.m"
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__GoalInfo0_21));
#line 264 "push_goals_together.m"
                        }
#line 262 "push_goals_together.m"
                      }
#line 260 "push_goals_together.m"
                    }
#line 260 "push_goals_together.m"
                  else
#line 266 "push_goals_together.m"
                    {
#line 266 "push_goals_together.m"
                      *transform_hlds__implicit_parallelism__push_goals_together__Result_4 = (MR_Integer) 0;
#line 266 "push_goals_together.m"
                      *transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_6 = transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_0_5;
#line 266 "push_goals_together.m"
                    }
#line 265 "push_goals_together.m"
                }
#line 196 "push_goals_together.m"
                break;
#line 196 "push_goals_together.m"
              case (MR_Integer) 4:
#line 196 "push_goals_together.m"
              case (MR_Integer) 5:
#line 196 "push_goals_together.m"
              case (MR_Integer) 6:
#line 289 "push_goals_together.m"
                {
#line 292 "push_goals_together.m"
                  *transform_hlds__implicit_parallelism__push_goals_together__Result_4 = (MR_Integer) 0;
#line 289 "push_goals_together.m"
                  *transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_6 = transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_0_5;
#line 289 "push_goals_together.m"
                }
#line 196 "push_goals_together.m"
                break;
#line 196 "push_goals_together.m"
            }
#line 196 "push_goals_together.m"
            break;
#line 196 "push_goals_together.m"
          case (MR_Integer) 1:
#line 184 "push_goals_together.m"
            {
#line 184 "push_goals_together.m"
              MR_Integer transform_hlds__implicit_parallelism__push_goals_together__N_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__Step_14, (MR_Integer) 0)));
#line 190 "push_goals_together.m"
              MR_Word transform_hlds__implicit_parallelism__push_goals_together__ConjType_23;
#line 190 "push_goals_together.m"
              MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goals0_24;

#line 185 "push_goals_together.m"
              transform_hlds__implicit_parallelism__push_goals_together__succeeded = ((((MR_tag((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 185 "push_goals_together.m"
              if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 185 "push_goals_together.m"
                {
#line 185 "push_goals_together.m"
                  transform_hlds__implicit_parallelism__push_goals_together__ConjType_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20, (MR_Integer) 1)));
#line 185 "push_goals_together.m"
                  transform_hlds__implicit_parallelism__push_goals_together__Goals0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20, (MR_Integer) 2)));
#line 187 "push_goals_together.m"
                  {
#line 187 "push_goals_together.m"
                    MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goals_25;
#line 187 "push_goals_together.m"
                    MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_26;

#line 186 "push_goals_together.m"
                    {
#line 186 "push_goals_together.m"
                      transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goals_7_p_0(transform_hlds__implicit_parallelism__push_goals_together__N_22, transform_hlds__implicit_parallelism__push_goals_together__Path_15, transform_hlds__implicit_parallelism__push_goals_together__PushGoal_2, transform_hlds__implicit_parallelism__push_goals_together__PushInfo_3, transform_hlds__implicit_parallelism__push_goals_together__Result_4, transform_hlds__implicit_parallelism__push_goals_together__Goals0_24, &transform_hlds__implicit_parallelism__push_goals_together__Goals_25);
                    }
#line 188 "push_goals_together.m"
                    {
#line 188 "push_goals_together.m"
                      transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 188 "push_goals_together.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 188 "push_goals_together.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_26, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__ConjType_23));
#line 188 "push_goals_together.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_26, 2) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Goals_25));
#line 188 "push_goals_together.m"
                    }
#line 189 "push_goals_together.m"
                    {
#line 189 "push_goals_together.m"
                      MR_Word base;
#line 189 "push_goals_together.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 189 "push_goals_together.m"
                      *transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_6 = base;
#line 189 "push_goals_together.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_26));
#line 189 "push_goals_together.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__GoalInfo0_21));
#line 189 "push_goals_together.m"
                    }
#line 187 "push_goals_together.m"
                  }
#line 185 "push_goals_together.m"
                }
#line 185 "push_goals_together.m"
              else
#line 191 "push_goals_together.m"
                {
#line 191 "push_goals_together.m"
                  *transform_hlds__implicit_parallelism__push_goals_together__Result_4 = (MR_Integer) 0;
#line 191 "push_goals_together.m"
                  *transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_6 = transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_0_5;
#line 191 "push_goals_together.m"
                }
#line 184 "push_goals_together.m"
            }
#line 196 "push_goals_together.m"
            break;
#line 196 "push_goals_together.m"
          case (MR_Integer) 2:
#line 197 "push_goals_together.m"
            {
#line 197 "push_goals_together.m"
              MR_Integer transform_hlds__implicit_parallelism__push_goals_together__N_87 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__implicit_parallelism__push_goals_together__Step_14, (MR_Integer) 0)));
#line 203 "push_goals_together.m"
              MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goals0_84;

#line 198 "push_goals_together.m"
              transform_hlds__implicit_parallelism__push_goals_together__succeeded = ((((MR_tag((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 198 "push_goals_together.m"
              if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 198 "push_goals_together.m"
                {
#line 198 "push_goals_together.m"
                  transform_hlds__implicit_parallelism__push_goals_together__Goals0_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20, (MR_Integer) 1)));
#line 200 "push_goals_together.m"
                  {
#line 200 "push_goals_together.m"
                    MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goals_82;
#line 200 "push_goals_together.m"
                    MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_83;

#line 199 "push_goals_together.m"
                    {
#line 199 "push_goals_together.m"
                      transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goals_7_p_0(transform_hlds__implicit_parallelism__push_goals_together__N_87, transform_hlds__implicit_parallelism__push_goals_together__Path_15, transform_hlds__implicit_parallelism__push_goals_together__PushGoal_2, transform_hlds__implicit_parallelism__push_goals_together__PushInfo_3, transform_hlds__implicit_parallelism__push_goals_together__Result_4, transform_hlds__implicit_parallelism__push_goals_together__Goals0_84, &transform_hlds__implicit_parallelism__push_goals_together__Goals_82);
                    }
#line 201 "push_goals_together.m"
                    {
#line 201 "push_goals_together.m"
                      transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 201 "push_goals_together.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 201 "push_goals_together.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_83, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Goals_82));
#line 201 "push_goals_together.m"
                    }
#line 202 "push_goals_together.m"
                    {
#line 202 "push_goals_together.m"
                      MR_Word base;
#line 202 "push_goals_together.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 202 "push_goals_together.m"
                      *transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_6 = base;
#line 202 "push_goals_together.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_83));
#line 202 "push_goals_together.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__GoalInfo0_21));
#line 202 "push_goals_together.m"
                    }
#line 200 "push_goals_together.m"
                  }
#line 198 "push_goals_together.m"
                }
#line 198 "push_goals_together.m"
              else
#line 204 "push_goals_together.m"
                {
#line 204 "push_goals_together.m"
                  *transform_hlds__implicit_parallelism__push_goals_together__Result_4 = (MR_Integer) 0;
#line 204 "push_goals_together.m"
                  *transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_6 = transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_0_5;
#line 204 "push_goals_together.m"
                }
#line 197 "push_goals_together.m"
            }
#line 196 "push_goals_together.m"
            break;
#line 196 "push_goals_together.m"
          case (MR_Integer) 3:
#line 196 "push_goals_together.m"
#line 196 "push_goals_together.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__Step_14, (MR_Integer) 0)))) {
#line 196 "push_goals_together.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 196 "push_goals_together.m"
              case (MR_Integer) 0:
#line 210 "push_goals_together.m"
                {
#line 210 "push_goals_together.m"
                  MR_Integer transform_hlds__implicit_parallelism__push_goals_together__N_93 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__Step_14, (MR_Integer) 1)));
#line 210 "push_goals_together.m"
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__Step_14, (MR_Integer) 2)));
#line 216 "push_goals_together.m"
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Var_29;
#line 216 "push_goals_together.m"
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__CanFail_30;
#line 216 "push_goals_together.m"
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Cases0_31;

#line 211 "push_goals_together.m"
                  transform_hlds__implicit_parallelism__push_goals_together__succeeded = ((((MR_tag((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 211 "push_goals_together.m"
                  if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 211 "push_goals_together.m"
                    {
#line 211 "push_goals_together.m"
                      transform_hlds__implicit_parallelism__push_goals_together__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20, (MR_Integer) 1)));
#line 211 "push_goals_together.m"
                      transform_hlds__implicit_parallelism__push_goals_together__CanFail_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20, (MR_Integer) 2)));
#line 211 "push_goals_together.m"
                      transform_hlds__implicit_parallelism__push_goals_together__Cases0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20, (MR_Integer) 3)));
#line 213 "push_goals_together.m"
                      {
#line 213 "push_goals_together.m"
                        MR_Word transform_hlds__implicit_parallelism__push_goals_together__Cases_32;
#line 213 "push_goals_together.m"
                        MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_91;

#line 212 "push_goals_together.m"
                        {
#line 212 "push_goals_together.m"
                          transform_hlds__implicit_parallelism__push_goals_together__do_push_in_cases_7_p_0(transform_hlds__implicit_parallelism__push_goals_together__N_93, transform_hlds__implicit_parallelism__push_goals_together__Path_15, transform_hlds__implicit_parallelism__push_goals_together__PushGoal_2, transform_hlds__implicit_parallelism__push_goals_together__PushInfo_3, transform_hlds__implicit_parallelism__push_goals_together__Result_4, transform_hlds__implicit_parallelism__push_goals_together__Cases0_31, &transform_hlds__implicit_parallelism__push_goals_together__Cases_32);
                        }
#line 214 "push_goals_together.m"
                        {
#line 214 "push_goals_together.m"
                          transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 214 "push_goals_together.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_91, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 214 "push_goals_together.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_91, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Var_29));
#line 214 "push_goals_together.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_91, 2) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__CanFail_30));
#line 214 "push_goals_together.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_91, 3) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Cases_32));
#line 214 "push_goals_together.m"
                        }
#line 215 "push_goals_together.m"
                        {
#line 215 "push_goals_together.m"
                          MR_Word base;
#line 215 "push_goals_together.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 215 "push_goals_together.m"
                          *transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_6 = base;
#line 215 "push_goals_together.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_91));
#line 215 "push_goals_together.m"
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__GoalInfo0_21));
#line 215 "push_goals_together.m"
                        }
#line 213 "push_goals_together.m"
                      }
#line 211 "push_goals_together.m"
                    }
#line 211 "push_goals_together.m"
                  else
#line 217 "push_goals_together.m"
                    {
#line 217 "push_goals_together.m"
                      *transform_hlds__implicit_parallelism__push_goals_together__Result_4 = (MR_Integer) 0;
#line 217 "push_goals_together.m"
                      *transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_6 = transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_0_5;
#line 217 "push_goals_together.m"
                    }
#line 210 "push_goals_together.m"
                }
#line 196 "push_goals_together.m"
                break;
#line 196 "push_goals_together.m"
              case (MR_Integer) 1:
#line 278 "push_goals_together.m"
                {
#line 278 "push_goals_together.m"
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Reason_43;
#line 278 "push_goals_together.m"
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__SubGoal0_126;

#line 273 "push_goals_together.m"
                  transform_hlds__implicit_parallelism__push_goals_together__succeeded = ((((MR_tag((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 273 "push_goals_together.m"
                  if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 273 "push_goals_together.m"
                    {
#line 273 "push_goals_together.m"
                      transform_hlds__implicit_parallelism__push_goals_together__Reason_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20, (MR_Integer) 1)));
#line 273 "push_goals_together.m"
                      transform_hlds__implicit_parallelism__push_goals_together__SubGoal0_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20, (MR_Integer) 2)));
#line 275 "push_goals_together.m"
                      {
#line 275 "push_goals_together.m"
                        MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_123;
#line 275 "push_goals_together.m"
                        MR_Word transform_hlds__implicit_parallelism__push_goals_together__SubGoal_124;

#line 274 "push_goals_together.m"
                        {
#line 274 "push_goals_together.m"
                          transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_p_0(transform_hlds__implicit_parallelism__push_goals_together__Path_15, transform_hlds__implicit_parallelism__push_goals_together__PushGoal_2, transform_hlds__implicit_parallelism__push_goals_together__PushInfo_3, transform_hlds__implicit_parallelism__push_goals_together__Result_4, transform_hlds__implicit_parallelism__push_goals_together__SubGoal0_126, &transform_hlds__implicit_parallelism__push_goals_together__SubGoal_124);
                        }
#line 276 "push_goals_together.m"
                        {
#line 276 "push_goals_together.m"
                          transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 276 "push_goals_together.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 276 "push_goals_together.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_123, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Reason_43));
#line 276 "push_goals_together.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_123, 2) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__SubGoal_124));
#line 276 "push_goals_together.m"
                        }
#line 277 "push_goals_together.m"
                        {
#line 277 "push_goals_together.m"
                          MR_Word base;
#line 277 "push_goals_together.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 277 "push_goals_together.m"
                          *transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_6 = base;
#line 277 "push_goals_together.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_123));
#line 277 "push_goals_together.m"
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__GoalInfo0_21));
#line 277 "push_goals_together.m"
                        }
#line 275 "push_goals_together.m"
                      }
#line 273 "push_goals_together.m"
                    }
#line 273 "push_goals_together.m"
                  else
#line 279 "push_goals_together.m"
                    {
#line 279 "push_goals_together.m"
                      *transform_hlds__implicit_parallelism__push_goals_together__Result_4 = (MR_Integer) 0;
#line 279 "push_goals_together.m"
                      *transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_6 = transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_0_5;
#line 279 "push_goals_together.m"
                    }
#line 278 "push_goals_together.m"
                }
#line 196 "push_goals_together.m"
                break;
#line 196 "push_goals_together.m"
              case (MR_Integer) 2:
#line 289 "push_goals_together.m"
                {
#line 292 "push_goals_together.m"
                  *transform_hlds__implicit_parallelism__push_goals_together__Result_4 = (MR_Integer) 0;
#line 289 "push_goals_together.m"
                  *transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_6 = transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_0_5;
#line 289 "push_goals_together.m"
                }
#line 196 "push_goals_together.m"
                break;
#line 196 "push_goals_together.m"
            }
#line 196 "push_goals_together.m"
            break;
#line 196 "push_goals_together.m"
        }
#line 181 "push_goals_together.m"
      }
#line 178 "push_goals_together.m"
  }
#line 175 "push_goals_together.m"
}

#line 145 "push_goals_together.m"
static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__do_push_list_5_p_0(
#line 145 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
#line 145 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__PushInfo_2,
#line 145 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3,
#line 145 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_0_4,
#line 145 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_5)
#line 145 "push_goals_together.m"
{
#line 148 "push_goals_together.m"
  while (MR_TRUE)
#line 148 "push_goals_together.m"
    {
#line 148 "push_goals_together.m"
      /* tailcall optimized into a loop */
#line 148 "push_goals_together.m"
      {
#line 148 "push_goals_together.m"
        MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;

#line 148 "push_goals_together.m"
        if ((transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 148 "push_goals_together.m"
          {
#line 148 "push_goals_together.m"
            *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3 = (MR_Integer) 1;
#line 148 "push_goals_together.m"
            *transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_5 = transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_0_4;
#line 148 "push_goals_together.m"
          }
#line 148 "push_goals_together.m"
        else
#line 149 "push_goals_together.m"
          {
#line 149 "push_goals_together.m"
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__PushGoal_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1, (MR_Integer) 0)));
#line 149 "push_goals_together.m"
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__PushGoals_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1, (MR_Integer) 1)));
#line 149 "push_goals_together.m"
            MR_String transform_hlds__implicit_parallelism__push_goals_together__GoalPathStr_26 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__PushGoal_10, (MR_Integer) 0)));
#line 163 "push_goals_together.m"
            MR_Integer transform_hlds__implicit_parallelism__push_goals_together___Lo_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__PushGoal_10, (MR_Integer) 1)));
#line 163 "push_goals_together.m"
            MR_Integer transform_hlds__implicit_parallelism__push_goals_together___Hi_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__PushGoal_10, (MR_Integer) 2)));
#line 163 "push_goals_together.m"
            MR_Word transform_hlds__implicit_parallelism__push_goals_together___PushedInto_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__PushGoal_10, (MR_Integer) 3)));
#line 6152 "transform_hlds.implicit_parallelism.push_goals_together.c"
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalPath_30;

#line 164 "push_goals_together.m"
            {
#line 164 "push_goals_together.m"
              transform_hlds__implicit_parallelism__push_goals_together__succeeded = mdbcomp__goal_path__goal_path_from_string_2_p_0(transform_hlds__implicit_parallelism__push_goals_together__GoalPathStr_26, &transform_hlds__implicit_parallelism__push_goals_together__GoalPath_30);
            }
#line 6160 "transform_hlds.implicit_parallelism.push_goals_together.c"
            if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
#line 6162 "transform_hlds.implicit_parallelism.push_goals_together.c"
              {
#line 6164 "transform_hlds.implicit_parallelism.push_goals_together.c"
                MR_Word transform_hlds__implicit_parallelism__push_goals_together__Result_15;
#line 6166 "transform_hlds.implicit_parallelism.push_goals_together.c"
                MR_Word transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_18_18;

#line 165 "push_goals_together.m"
                {
#line 165 "push_goals_together.m"
                  transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_p_0(transform_hlds__implicit_parallelism__push_goals_together__GoalPath_30, transform_hlds__implicit_parallelism__push_goals_together__PushGoal_10, transform_hlds__implicit_parallelism__push_goals_together__PushInfo_2, &transform_hlds__implicit_parallelism__push_goals_together__Result_15, transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_0_4, &transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_18_18);
                }
#line 154 "push_goals_together.m"
#line 154 "push_goals_together.m"
                switch (transform_hlds__implicit_parallelism__push_goals_together__Result_15) {
#line 154 "push_goals_together.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 154 "push_goals_together.m"
                  case (MR_Integer) 0:
#line 155 "push_goals_together.m"
                    {
#line 156 "push_goals_together.m"
                      *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3 = (MR_Integer) 0;
#line 155 "push_goals_together.m"
                      *transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_5 = transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_18_18;
#line 155 "push_goals_together.m"
                    }
#line 154 "push_goals_together.m"
                    break;
#line 154 "push_goals_together.m"
                  case (MR_Integer) 1:
#line 153 "push_goals_together.m"
                    {
#line 153 "push_goals_together.m"
                      /* direct tailcall eliminated */
#line 153 "push_goals_together.m"
                      {
#line 153 "push_goals_together.m"
                        MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1__tmp_copy_1 = transform_hlds__implicit_parallelism__push_goals_together__PushGoals_11;
#line 153 "push_goals_together.m"
                        MR_Word transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_0__tmp_copy_4 = transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_18_18;

#line 153 "push_goals_together.m"
                        transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_0_4 = transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_0__tmp_copy_4;
#line 153 "push_goals_together.m"
                        transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1 = transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1__tmp_copy_1;
#line 153 "push_goals_together.m"
                      }
#line 153 "push_goals_together.m"
                      continue;
#line 153 "push_goals_together.m"
                    }
#line 154 "push_goals_together.m"
                    break;
#line 154 "push_goals_together.m"
                }
#line 6218 "transform_hlds.implicit_parallelism.push_goals_together.c"
              }
#line 6220 "transform_hlds.implicit_parallelism.push_goals_together.c"
            else
#line 6222 "transform_hlds.implicit_parallelism.push_goals_together.c"
              {
#line 156 "push_goals_together.m"
                *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3 = (MR_Integer) 0;
#line 155 "push_goals_together.m"
                *transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_5 = transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_0_4;
#line 6228 "transform_hlds.implicit_parallelism.push_goals_together.c"
              }
#line 149 "push_goals_together.m"
          }
#line 148 "push_goals_together.m"
      }
#line 148 "push_goals_together.m"
      break;
#line 148 "push_goals_together.m"
    }
#line 145 "push_goals_together.m"
}

#line 45 "push_goals_together.m"
void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__push_goals_in_proc_6_p_0(
#line 45 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__PushGoals_7,
#line 45 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__OverallResult_8,
#line 45 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ProcInfo_0_29,
#line 45 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ProcInfo_30,
#line 45 "push_goals_together.m"
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ModuleInfo_0_31,
#line 45 "push_goals_together.m"
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ModuleInfo_32)
#line 45 "push_goals_together.m"
{
#line 84 "push_goals_together.m"
  {
#line 84 "push_goals_together.m"
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;
#line 84 "push_goals_together.m"
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goal0_11;
#line 84 "push_goals_together.m"
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__VarSet0_12;
#line 84 "push_goals_together.m"
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__VarTypes0_13;
#line 84 "push_goals_together.m"
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__RttiVarMaps0_14;
#line 84 "push_goals_together.m"
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__PushInfo_15;
#line 84 "push_goals_together.m"
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__Globals_16;
#line 84 "push_goals_together.m"
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goal1_19;
#line 91 "push_goals_together.m"
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__OutInfo_17;

#line 85 "push_goals_together.m"
    {
#line 85 "push_goals_together.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ProcInfo_0_29, &transform_hlds__implicit_parallelism__push_goals_together__Goal0_11);
    }
#line 86 "push_goals_together.m"
    {
#line 86 "push_goals_together.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ProcInfo_0_29, &transform_hlds__implicit_parallelism__push_goals_together__VarSet0_12);
    }
#line 87 "push_goals_together.m"
    {
#line 87 "push_goals_together.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ProcInfo_0_29, &transform_hlds__implicit_parallelism__push_goals_together__VarTypes0_13);
    }
#line 88 "push_goals_together.m"
    {
#line 88 "push_goals_together.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ProcInfo_0_29, &transform_hlds__implicit_parallelism__push_goals_together__RttiVarMaps0_14);
    }
#line 89 "push_goals_together.m"
    transform_hlds__implicit_parallelism__push_goals_together__PushInfo_15 = (MR_Word) transform_hlds__implicit_parallelism__push_goals_together__RttiVarMaps0_14;
#line 90 "push_goals_together.m"
    {
#line 90 "push_goals_together.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ModuleInfo_0_31, &transform_hlds__implicit_parallelism__push_goals_together__Globals_16);
    }
#line 91 "push_goals_together.m"
    {
#line 91 "push_goals_together.m"
      transform_hlds__implicit_parallelism__push_goals_together__OutInfo_17 = hlds__hlds_out__hlds_out_util__init_hlds_out_info_2_f_0(transform_hlds__implicit_parallelism__push_goals_together__Globals_16, (MR_Integer) 1);
    }
#line 97 "push_goals_together.m"
    {
#line 97 "push_goals_together.m"
      transform_hlds__implicit_parallelism__push_goals_together__do_push_list_5_p_0(transform_hlds__implicit_parallelism__push_goals_together__PushGoals_7, transform_hlds__implicit_parallelism__push_goals_together__PushInfo_15, transform_hlds__implicit_parallelism__push_goals_together__OverallResult_8, transform_hlds__implicit_parallelism__push_goals_together__Goal0_11, &transform_hlds__implicit_parallelism__push_goals_together__Goal1_19);
    }
#line 100 "push_goals_together.m"
#line 100 "push_goals_together.m"
    switch (*transform_hlds__implicit_parallelism__push_goals_together__OverallResult_8) {
#line 100 "push_goals_together.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 100 "push_goals_together.m"
      case (MR_Integer) 0:
#line 99 "push_goals_together.m"
        {
#line 99 "push_goals_together.m"
          *transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ProcInfo_30 = transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ProcInfo_0_29;
#line 99 "push_goals_together.m"
          *transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ModuleInfo_32 = transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ModuleInfo_0_31;
#line 99 "push_goals_together.m"
        }
#line 100 "push_goals_together.m"
        break;
#line 100 "push_goals_together.m"
      case (MR_Integer) 1:
#line 101 "push_goals_together.m"
        {
#line 101 "push_goals_together.m"
          MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVars_20;
#line 101 "push_goals_together.m"
          MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goal2_22;
#line 101 "push_goals_together.m"
          MR_Word transform_hlds__implicit_parallelism__push_goals_together__VarSet_23;
#line 101 "push_goals_together.m"
          MR_Word transform_hlds__implicit_parallelism__push_goals_together__VarTypes_24;
#line 101 "push_goals_together.m"
          MR_Word transform_hlds__implicit_parallelism__push_goals_together__RttiVarMaps_25;
#line 101 "push_goals_together.m"
          MR_Word transform_hlds__implicit_parallelism__push_goals_together__InstMap0_26;
#line 101 "push_goals_together.m"
          MR_Word transform_hlds__implicit_parallelism__push_goals_together__InstVarSet_27;
#line 101 "push_goals_together.m"
          MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goal_28;
#line 101 "push_goals_together.m"
          MR_Word transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ProcInfo_53_53;
#line 101 "push_goals_together.m"
          MR_Word transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ProcInfo_54_54;
#line 101 "push_goals_together.m"
          MR_Word transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ProcInfo_55_55;
#line 124 "push_goals_together.m"
          MR_Word transform_hlds__implicit_parallelism__push_goals_together___Warnings_21;

#line 123 "push_goals_together.m"
          {
#line 123 "push_goals_together.m"
            hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ProcInfo_0_29, &transform_hlds__implicit_parallelism__push_goals_together__HeadVars_20);
          }
#line 124 "push_goals_together.m"
          {
#line 124 "push_goals_together.m"
            hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 1, transform_hlds__implicit_parallelism__push_goals_together__HeadVars_20, &transform_hlds__implicit_parallelism__push_goals_together___Warnings_21, transform_hlds__implicit_parallelism__push_goals_together__Goal1_19, &transform_hlds__implicit_parallelism__push_goals_together__Goal2_22, transform_hlds__implicit_parallelism__push_goals_together__VarSet0_12, &transform_hlds__implicit_parallelism__push_goals_together__VarSet_23, transform_hlds__implicit_parallelism__push_goals_together__VarTypes0_13, &transform_hlds__implicit_parallelism__push_goals_together__VarTypes_24, transform_hlds__implicit_parallelism__push_goals_together__RttiVarMaps0_14, &transform_hlds__implicit_parallelism__push_goals_together__RttiVarMaps_25);
          }
#line 128 "push_goals_together.m"
          {
#line 128 "push_goals_together.m"
            hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ProcInfo_0_29, transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ModuleInfo_0_31, &transform_hlds__implicit_parallelism__push_goals_together__InstMap0_26);
          }
#line 129 "push_goals_together.m"
          {
#line 129 "push_goals_together.m"
            hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ProcInfo_0_29, &transform_hlds__implicit_parallelism__push_goals_together__InstVarSet_27);
          }
#line 130 "push_goals_together.m"
          {
#line 130 "push_goals_together.m"
            check_hlds__mode_util__recompute_instmap_delta_8_p_0((MR_Integer) 1, transform_hlds__implicit_parallelism__push_goals_together__Goal2_22, &transform_hlds__implicit_parallelism__push_goals_together__Goal_28, transform_hlds__implicit_parallelism__push_goals_together__VarTypes_24, transform_hlds__implicit_parallelism__push_goals_together__InstVarSet_27, transform_hlds__implicit_parallelism__push_goals_together__InstMap0_26, transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ModuleInfo_0_31, transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ModuleInfo_32);
          }
#line 132 "push_goals_together.m"
          {
#line 132 "push_goals_together.m"
            hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__Goal_28, transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ProcInfo_0_29, &transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ProcInfo_53_53);
          }
#line 133 "push_goals_together.m"
          {
#line 133 "push_goals_together.m"
            hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__VarSet_23, transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ProcInfo_53_53, &transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ProcInfo_54_54);
          }
#line 134 "push_goals_together.m"
          {
#line 134 "push_goals_together.m"
            hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__VarTypes_24, transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ProcInfo_54_54, &transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ProcInfo_55_55);
          }
#line 135 "push_goals_together.m"
          {
#line 135 "push_goals_together.m"
            hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__RttiVarMaps_25, transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ProcInfo_55_55, transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ProcInfo_30);
#line 135 "push_goals_together.m"
            return;
          }
#line 101 "push_goals_together.m"
        }
#line 100 "push_goals_together.m"
        break;
#line 100 "push_goals_together.m"
    }
#line 84 "push_goals_together.m"
  }
#line 45 "push_goals_together.m"
}

void mercury__transform_hlds__implicit_parallelism__push_goals_together__init(void)
{
}

void mercury__transform_hlds__implicit_parallelism__push_goals_together__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__type_ctor_info_maybe_pushable_0);
	MR_register_type_ctor_info(&transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__type_ctor_info_push_info_0);
	MR_register_type_ctor_info(&transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__type_ctor_info_push_result_0);
}

void mercury__transform_hlds__implicit_parallelism__push_goals_together__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.implicit_parallelism.push_goals_together. */
