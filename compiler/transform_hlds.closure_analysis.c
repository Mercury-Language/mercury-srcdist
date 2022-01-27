/*
** Automatically generated from `closure_analysis.m'
** by the Mercury compiler,
** version rotd-2016-03-21
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


/* :- module transform_hlds.closure_analysis. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__closure_analysis__init
ENDINIT
*/

#include "transform_hlds.closure_analysis.mih"


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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
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
#include "hlds.passes_aux.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
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
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.dependency_graph.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__closure_analysis__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__closure_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__closure_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__closure_analysis__type_ctor_info_closure_values_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__closure_analysis__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__closure_analysis__type_ctor_info_closure_values_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__closure_analysis__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__closure_analysis__type_ctor_info_closure_values_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__closure_analysis__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__closure_analysis__type_ctor_info_closure_values_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__closure_analysis__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__closure_analysis__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_case_0__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__closure_analysis__type_ctor_info_closure_values_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__closure_analysis__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__closure_analysis__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_DuFunctorDesc transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_functor_desc_closure_values_0_0;

static const MR_PseudoTypeInfo transform_hlds__closure_analysis__transform_hlds__closure_analysis__field_types_closure_values_0_1[1];

static const MR_DuFunctorDesc transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_functor_desc_closure_values_0_1;

static const MR_PseudoTypeInfo transform_hlds__closure_analysis__transform_hlds__closure_analysis__field_types_closure_values_0_2[1];

static const MR_DuFunctorDesc transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_functor_desc_closure_values_0_2;

static const MR_DuFunctorDescPtr transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_stag_ordered_closure_values_0_0[1];

static const MR_DuFunctorDescPtr transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_stag_ordered_closure_values_0_1[1];

static const MR_DuFunctorDescPtr transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_stag_ordered_closure_values_0_2[1];

static const MR_DuPtagLayout transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_ptag_ordered_closure_values_0[3];

static const MR_DuFunctorDescPtr transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_name_ordered_closure_values_0[3];

static const MR_Integer transform_hlds__closure_analysis__transform_hlds__closure_analysis__functor_number_map_closure_values_0[3];

static MR_bool MR_CALL 
transform_hlds__closure_analysis____Unify____closure_info_0_0_10001(
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2);

static void MR_CALL 
transform_hlds__closure_analysis____Compare____closure_info_0_0_10001(
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_1,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__closure_analysis____Unify____closure_values_0_0_10001(
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2);

static void MR_CALL 
transform_hlds__closure_analysis____Compare____closure_values_0_0_10001(
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_1,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_3);

static void MR_CALL 
transform_hlds__closure_analysis__IntroducedFrom__pred__dump_ho_value__501__1_3_p_0(
  MR_Word transform_hlds__closure_analysis__LambdaHeadVar__1_22);

static MR_Word MR_CALL 
transform_hlds__closure_analysis__IntroducedFrom__func__dump_closure_info_expr__468__1_1_f_0(
  MR_Word transform_hlds__closure_analysis__LambdaHeadVar__1_59);

static MR_Word MR_CALL 
transform_hlds__closure_analysis__IntroducedFrom__func__closure_analyse_goal__276__1_4_f_0(
  MR_Word transform_hlds__closure_analysis__VarTypes_7,
  MR_Word transform_hlds__closure_analysis__ModuleInfo_8,
  MR_Word transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131,
  MR_Word transform_hlds__closure_analysis__LambdaHeadVar__1_158);

static void MR_CALL 
transform_hlds__closure_analysis__IntroducedFrom__pred__closure_analyse_goal__214__1_4_p_0(
  MR_Word transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131,
  MR_Word transform_hlds__closure_analysis__LambdaHeadVar__1_178,
  MR_Word transform_hlds__closure_analysis__LambdaHeadVar__2_179,
  MR_Word * transform_hlds__closure_analysis__LambdaHeadVar__3_180);

static void MR_CALL 
transform_hlds__closure_analysis__IntroducedFrom__pred__closure_analyse_goal__254__1_4_p_0(
  MR_Word transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131,
  MR_Word transform_hlds__closure_analysis__LambdaHeadVar__1_167,
  MR_Word transform_hlds__closure_analysis__LambdaHeadVar__2_168,
  MR_Word * transform_hlds__closure_analysis__LambdaHeadVar__3_169);

static MR_Word MR_CALL 
transform_hlds__closure_analysis__IntroducedFrom__func__closure_analyse_goal__333__1_4_f_0(
  MR_Word transform_hlds__closure_analysis__VarTypes_7,
  MR_Word transform_hlds__closure_analysis__ModuleInfo_8,
  MR_Word transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131,
  MR_Word transform_hlds__closure_analysis__LambdaHeadVar__1_144);

static MR_bool MR_CALL 
transform_hlds__closure_analysis__IntroducedFrom__pred__closure_analyse_goal__381__1_3_p_0(
  MR_Word transform_hlds__closure_analysis__ModuleInfo_8,
  MR_Word transform_hlds__closure_analysis__LambdaHeadVar__1_136,
  MR_Word * transform_hlds__closure_analysis__LambdaHeadVar__2_137);

static void MR_CALL 
transform_hlds__closure_analysis____Compare____closure_values_0_0(
  MR_Word * transform_hlds__closure_analysis__HeadVar__1_1,
  MR_Word transform_hlds__closure_analysis__HeadVar__2_2,
  MR_Word transform_hlds__closure_analysis__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__closure_analysis____Unify____closure_values_0_0(
  MR_Word transform_hlds__closure_analysis__HeadVar__1_1,
  MR_Word transform_hlds__closure_analysis__HeadVar__2_2);

static void MR_CALL 
transform_hlds__closure_analysis____Compare____closure_info_0_0(
  MR_Word * transform_hlds__closure_analysis__HeadVar__1_1,
  MR_Word transform_hlds__closure_analysis__HeadVar__2_2,
  MR_Word transform_hlds__closure_analysis__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__closure_analysis____Unify____closure_info_0_0(
  MR_Word transform_hlds__closure_analysis__HeadVar__1_1,
  MR_Word transform_hlds__closure_analysis__HeadVar__2_2);

static void MR_CALL 
transform_hlds__closure_analysis__dump_ho_value_5_p_0_1(
  MR_Box transform_hlds__closure_analysis__closure_arg,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3);

static void MR_CALL 
transform_hlds__closure_analysis__dump_ho_value_5_p_0(
  MR_Word transform_hlds__closure_analysis__Varset_6,
  MR_Word transform_hlds__closure_analysis__ProgVar_7,
  MR_Word transform_hlds__closure_analysis__Values_8);

static void MR_CALL 
transform_hlds__closure_analysis__dump_ho_values_4_p_0_1(
  MR_Box transform_hlds__closure_analysis__closure_arg,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_3,
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_4);

static void MR_CALL 
transform_hlds__closure_analysis__dump_ho_values_4_p_0(
  MR_Word transform_hlds__closure_analysis__GoalInfo_5,
  MR_Word transform_hlds__closure_analysis__Varset_6);

static void MR_CALL 
transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0_5(
  MR_Box transform_hlds__closure_analysis__closure_arg,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3);

static MR_Box MR_CALL 
transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0_4(
  MR_Box transform_hlds__closure_analysis__closure_arg,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1);

static void MR_CALL 
transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0_3(
  MR_Box transform_hlds__closure_analysis__closure_arg,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3);

static void MR_CALL 
transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0_2(
  MR_Box transform_hlds__closure_analysis__closure_arg,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3);

static void MR_CALL 
transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0_1(
  MR_Box transform_hlds__closure_analysis__closure_arg,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3);

static void MR_CALL 
transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0(
  MR_Word transform_hlds__closure_analysis__Varset_1,
  MR_Word transform_hlds__closure_analysis__HeadVar__2_2,
  MR_Word transform_hlds__closure_analysis__GoalInfo_3);

static void MR_CALL 
transform_hlds__closure_analysis__dump_closure_info_4_p_0(
  MR_Word transform_hlds__closure_analysis__Varset_5,
  MR_Word transform_hlds__closure_analysis__Goal_6);

static void MR_CALL 
transform_hlds__closure_analysis__merge_closure_values_3_p_0(
  MR_Word transform_hlds__closure_analysis__HeadVar__1_1,
  MR_Word transform_hlds__closure_analysis__HeadVar__2_2,
  MR_Word * transform_hlds__closure_analysis__HeadVar__3_3);

static void MR_CALL 
transform_hlds__closure_analysis__merge_closure_infos_3_p_0_1(
  MR_Box transform_hlds__closure_analysis__closure_arg,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3);

static void MR_CALL 
transform_hlds__closure_analysis__merge_closure_infos_3_p_0(
  MR_Word transform_hlds__closure_analysis__A_4,
  MR_Word transform_hlds__closure_analysis__B_5,
  MR_Word * transform_hlds__closure_analysis__C_6);

static void MR_CALL 
transform_hlds__closure_analysis__partition_arguments_8_p_0(
  MR_Word transform_hlds__closure_analysis__ModuleInfo_1,
  MR_Word transform_hlds__closure_analysis__VarTypes_2,
  MR_Word transform_hlds__closure_analysis__HeadVar__3_3,
  MR_Word transform_hlds__closure_analysis__HeadVar__4_4,
  MR_Word transform_hlds__closure_analysis__STATE_VARIABLE_Inputs_0_5,
  MR_Word * transform_hlds__closure_analysis__STATE_VARIABLE_Inputs_6,
  MR_Word transform_hlds__closure_analysis__STATE_VARIABLE_Outputs_0_7,
  MR_Word * transform_hlds__closure_analysis__STATE_VARIABLE_Outputs_8);

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_13(
  MR_Box transform_hlds__closure_analysis__closure_arg,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_12(
  MR_Box transform_hlds__closure_analysis__closure_arg,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1);

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_11(
  MR_Box transform_hlds__closure_analysis__closure_arg,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3);

static MR_Box MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_10(
  MR_Box transform_hlds__closure_analysis__closure_arg,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1);

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_9(
  MR_Box transform_hlds__closure_analysis__closure_arg,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3);

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_8(
  MR_Box transform_hlds__closure_analysis__closure_arg,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3);

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_7(
  MR_Box transform_hlds__closure_analysis__closure_arg,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3);

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_6(
  MR_Box transform_hlds__closure_analysis__closure_arg,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3);

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_5(
  MR_Box transform_hlds__closure_analysis__closure_arg,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3);

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_4(
  MR_Box transform_hlds__closure_analysis__closure_arg,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3);

static MR_Box MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_3(
  MR_Box transform_hlds__closure_analysis__closure_arg,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1);

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_2(
  MR_Box transform_hlds__closure_analysis__closure_arg,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_2,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_3,
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_4);

static MR_bool MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_1(
  MR_Box transform_hlds__closure_analysis__closure_arg,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_2);

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0(
  MR_Word transform_hlds__closure_analysis__VarTypes_7,
  MR_Word transform_hlds__closure_analysis__ModuleInfo_8,
  MR_Word transform_hlds__closure_analysis__Goal0_9,
  MR_Word * transform_hlds__closure_analysis__Goal_10,
  MR_Word transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131,
  MR_Word * transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_132);

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_proc_6_p_0_2(
  MR_Box transform_hlds__closure_analysis__closure_arg,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__closure_analysis__closure_analyse_proc_6_p_0_1(
  MR_Box transform_hlds__closure_analysis__closure_arg,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1);

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_proc_6_p_0(
  MR_Word transform_hlds__closure_analysis__Debug_7,
  MR_Word transform_hlds__closure_analysis__PPId_8,
  MR_Word transform_hlds__closure_analysis__STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * transform_hlds__closure_analysis__STATE_VARIABLE_ModuleInfo_23);

static void MR_CALL 
transform_hlds__closure_analysis__insert_unknown_3_p_0(
  MR_Word transform_hlds__closure_analysis__Var_4,
  MR_Word transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_6,
  MR_Word * transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_7);

static MR_bool MR_CALL 
transform_hlds__closure_analysis__var_has_ho_type_2_p_0(
  MR_Word transform_hlds__closure_analysis__VarTypes_3,
  MR_Word transform_hlds__closure_analysis__Var_4);

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_scc_6_p_0_1(
  MR_Box transform_hlds__closure_analysis__closure_arg,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_4,
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_5);

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_scc_6_p_0(
  MR_Word transform_hlds__closure_analysis__Debug_7,
  MR_Word transform_hlds__closure_analysis__SCC_8,
  MR_Word transform_hlds__closure_analysis__STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * transform_hlds__closure_analysis__STATE_VARIABLE_ModuleInfo_12);

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_module_4_p_0_1(
  MR_Box transform_hlds__closure_analysis__closure_arg,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_4,
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_5);


static /* final */ const MR_Box transform_hlds__closure_analysis_scalar_common_1[3][2];

static /* final */ const MR_Box transform_hlds__closure_analysis_scalar_common_2[15][3];

static /* final */ const MR_Box transform_hlds__closure_analysis_scalar_common_3[3][9];

static /* final */ const MR_Box transform_hlds__closure_analysis_scalar_common_4[2][5];

static /* final */ const MR_Box transform_hlds__closure_analysis_scalar_common_5[5][6];

static /* final */ const MR_Box transform_hlds__closure_analysis_scalar_common_6[3][8];

static /* final */ const MR_Box transform_hlds__closure_analysis_scalar_common_7[2][7];




static /* final */ const MR_Box transform_hlds__closure_analysis_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};

static /* final */ const MR_Box transform_hlds__closure_analysis_scalar_common_2[15][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_1[1])),
    ((MR_Box) (&transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_1[1])),
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_1[2]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_2[0]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_2[0]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_1[1])),
    ((MR_Box) (&transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_proc_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_5[2])),
    ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_5[3])),
    ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_9)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_5[2])),
    ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_11)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_13)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_5[3])),
    ((MR_Box) (transform_hlds__closure_analysis__merge_closure_infos_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_4[1])),
    ((MR_Box) (transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_5[4])),
    ((MR_Box) (transform_hlds__closure_analysis__dump_ho_value_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__closure_analysis_scalar_common_3[3][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__closure_analysis__type_ctor_info_closure_values_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__closure_analysis__type_ctor_info_closure_values_0))
  },
};

static /* final */ const MR_Box transform_hlds__closure_analysis_scalar_common_4[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box transform_hlds__closure_analysis_scalar_common_5[5][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__closure_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__closure_analysis__type_ctor_info_closure_values_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__closure_analysis__type_ctor_info_closure_values_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__closure_analysis__type_ctor_info_closure_values_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__closure_analysis__type_ctor_info_closure_values_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__closure_analysis__type_ctor_info_closure_values_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__closure_analysis__type_ctor_info_closure_values_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box transform_hlds__closure_analysis_scalar_common_6[3][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__closure_analysis__type_ctor_info_closure_values_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__closure_analysis__type_ctor_info_closure_values_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__closure_analysis__type_ctor_info_closure_values_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_case_0__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__closure_analysis__type_ctor_info_closure_values_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__closure_analysis__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box transform_hlds__closure_analysis_scalar_common_7[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__closure_analysis__type_ctor_info_closure_values_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__closure_analysis__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__closure_analysis__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__closure_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__closure_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__closure_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__closure_analysis__type_ctor_info_closure_values_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__closure_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__closure_analysis__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__closure_analysis__type_ctor_info_closure_values_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__closure_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__closure_analysis__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__closure_analysis__type_ctor_info_closure_values_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__closure_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__closure_analysis__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__closure_analysis__type_ctor_info_closure_values_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
    (MR_PseudoTypeInfo) &transform_hlds__closure_analysis__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__closure_analysis__type_ctor_info_closure_values_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__closure_analysis__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__closure_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__closure_analysis__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__closure_analysis__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_case_0__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__closure_analysis__type_ctor_info_closure_values_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0,
    (MR_PseudoTypeInfo) &transform_hlds__closure_analysis__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__closure_analysis__type_ctor_info_closure_values_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__closure_analysis__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__closure_analysis__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__closure_analysis____Unify____closure_info_0_0_10001)),
  ((MR_Box) (transform_hlds__closure_analysis____Compare____closure_info_0_0_10001)),
  (MR_String) "transform_hlds.closure_analysis",
  (MR_String) "closure_info",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__closure_analysis__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__closure_analysis__type_ctor_info_closure_values_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_DuFunctorDesc transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_functor_desc_closure_values_0_0 = {
  (MR_String) "unknown",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo transform_hlds__closure_analysis__transform_hlds__closure_analysis__field_types_closure_values_0_1[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__closure_analysis__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

static const MR_DuFunctorDesc transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_functor_desc_closure_values_0_1 = {
  (MR_String) "partial",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  transform_hlds__closure_analysis__transform_hlds__closure_analysis__field_types_closure_values_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo transform_hlds__closure_analysis__transform_hlds__closure_analysis__field_types_closure_values_0_2[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__closure_analysis__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

static const MR_DuFunctorDesc transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_functor_desc_closure_values_0_2 = {
  (MR_String) "exclusive",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  transform_hlds__closure_analysis__transform_hlds__closure_analysis__field_types_closure_values_0_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_stag_ordered_closure_values_0_0[1] = {
  &transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_functor_desc_closure_values_0_0
};

static const MR_DuFunctorDescPtr transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_stag_ordered_closure_values_0_1[1] = {
  &transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_functor_desc_closure_values_0_1
};

static const MR_DuFunctorDescPtr transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_stag_ordered_closure_values_0_2[1] = {
  &transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_functor_desc_closure_values_0_2
};

static const MR_DuPtagLayout transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_ptag_ordered_closure_values_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_stag_ordered_closure_values_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_stag_ordered_closure_values_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_stag_ordered_closure_values_0_2
  }
};

static const MR_DuFunctorDescPtr transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_name_ordered_closure_values_0[3] = {
  &transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_functor_desc_closure_values_0_2,
  &transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_functor_desc_closure_values_0_1,
  &transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_functor_desc_closure_values_0_0
};

static const MR_Integer transform_hlds__closure_analysis__transform_hlds__closure_analysis__functor_number_map_closure_values_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__closure_analysis____Unify____closure_values_0_0_10001)),
  ((MR_Box) (transform_hlds__closure_analysis____Compare____closure_values_0_0_10001)),
  (MR_String) "transform_hlds.closure_analysis",
  (MR_String) "closure_values",
  {     transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_name_ordered_closure_values_0 },
  {     transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_ptag_ordered_closure_values_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  transform_hlds__closure_analysis__transform_hlds__closure_analysis__functor_number_map_closure_values_0
};

static MR_bool MR_CALL 
transform_hlds__closure_analysis____Unify____closure_info_0_0_10001(
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__closure_analysis__succeeded;

    {
      transform_hlds__closure_analysis__succeeded = transform_hlds__closure_analysis____Unify____closure_info_0_0(((MR_Word) transform_hlds__closure_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_2));
    }
    return transform_hlds__closure_analysis__succeeded;
  }
}

static void MR_CALL 
transform_hlds__closure_analysis____Compare____closure_info_0_0_10001(
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_1,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__closure_analysis__conv0_HeadVar__1_1;

    {
      transform_hlds__closure_analysis____Compare____closure_info_0_0(&transform_hlds__closure_analysis__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_2), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_3));
    }
    *transform_hlds__closure_analysis__wrapper_arg_1 = ((MR_Box) (transform_hlds__closure_analysis__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__closure_analysis____Unify____closure_values_0_0_10001(
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__closure_analysis__succeeded;

    {
      transform_hlds__closure_analysis__succeeded = transform_hlds__closure_analysis____Unify____closure_values_0_0(((MR_Word) transform_hlds__closure_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_2));
    }
    return transform_hlds__closure_analysis__succeeded;
  }
}

static void MR_CALL 
transform_hlds__closure_analysis____Compare____closure_values_0_0_10001(
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_1,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__closure_analysis__conv0_HeadVar__1_1;

    {
      transform_hlds__closure_analysis____Compare____closure_values_0_0(&transform_hlds__closure_analysis__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_2), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_3));
    }
    *transform_hlds__closure_analysis__wrapper_arg_1 = ((MR_Box) (transform_hlds__closure_analysis__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__IntroducedFrom__pred__dump_ho_value__501__1_3_p_0(
  MR_Word transform_hlds__closure_analysis__LambdaHeadVar__1_22)
{
  {
    MR_bool transform_hlds__closure_analysis__succeeded;

    {
      mercury__io__write_string_3_p_0((MR_String) "\t");
    }
    {
      mercury__io__write_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (transform_hlds__closure_analysis__LambdaHeadVar__1_22)));
    }
    {
      mercury__io__nl_2_p_0();
    }
  }
}

static MR_Word MR_CALL 
transform_hlds__closure_analysis__IntroducedFrom__func__dump_closure_info_expr__468__1_1_f_0(
  MR_Word transform_hlds__closure_analysis__LambdaHeadVar__1_59)
{
  {
    MR_bool transform_hlds__closure_analysis__succeeded;
    MR_Word transform_hlds__closure_analysis__LambdaHeadVar__2_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__LambdaHeadVar__1_59, (MR_Integer) 2)));
    MR_Word transform_hlds__closure_analysis__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__LambdaHeadVar__1_59, (MR_Integer) 0)));
    MR_Word transform_hlds__closure_analysis__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__LambdaHeadVar__1_59, (MR_Integer) 1)));

    return transform_hlds__closure_analysis__LambdaHeadVar__2_60;
  }
}

static MR_Word MR_CALL 
transform_hlds__closure_analysis__IntroducedFrom__func__closure_analyse_goal__276__1_4_f_0(
  MR_Word transform_hlds__closure_analysis__VarTypes_7,
  MR_Word transform_hlds__closure_analysis__ModuleInfo_8,
  MR_Word transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131,
  MR_Word transform_hlds__closure_analysis__LambdaHeadVar__1_158)
{
  {
    MR_bool transform_hlds__closure_analysis__succeeded;
    MR_Word transform_hlds__closure_analysis__LambdaHeadVar__2_159;
    MR_Word transform_hlds__closure_analysis__Case_53;
    MR_Word transform_hlds__closure_analysis__CaseInfo_54;
    MR_Word transform_hlds__closure_analysis__MainConsId_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__LambdaHeadVar__1_158, (MR_Integer) 0)));
    MR_Word transform_hlds__closure_analysis__OtherConsIds_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__LambdaHeadVar__1_158, (MR_Integer) 1)));
    MR_Word transform_hlds__closure_analysis__CaseGoal0_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__LambdaHeadVar__1_158, (MR_Integer) 2)));
    MR_Word transform_hlds__closure_analysis__CaseGoal_58;

    {
      transform_hlds__closure_analysis__closure_analyse_goal_6_p_0(transform_hlds__closure_analysis__VarTypes_7, transform_hlds__closure_analysis__ModuleInfo_8, transform_hlds__closure_analysis__CaseGoal0_57, &transform_hlds__closure_analysis__CaseGoal_58, transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131, &transform_hlds__closure_analysis__CaseInfo_54);
    }
    {
      transform_hlds__closure_analysis__Case_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__Case_53, 0) = ((MR_Box) (transform_hlds__closure_analysis__MainConsId_55));
      MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__Case_53, 1) = ((MR_Box) (transform_hlds__closure_analysis__OtherConsIds_56));
      MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__Case_53, 2) = ((MR_Box) (transform_hlds__closure_analysis__CaseGoal_58));
    }
    {
      transform_hlds__closure_analysis__LambdaHeadVar__2_159 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__LambdaHeadVar__2_159, 0) = ((MR_Box) (transform_hlds__closure_analysis__Case_53));
      MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__LambdaHeadVar__2_159, 1) = ((MR_Box) (transform_hlds__closure_analysis__CaseInfo_54));
    }
    return transform_hlds__closure_analysis__LambdaHeadVar__2_159;
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__IntroducedFrom__pred__closure_analyse_goal__214__1_4_p_0(
  MR_Word transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131,
  MR_Word transform_hlds__closure_analysis__LambdaHeadVar__1_178,
  MR_Word transform_hlds__closure_analysis__LambdaHeadVar__2_179,
  MR_Word * transform_hlds__closure_analysis__LambdaHeadVar__3_180)
{
  {
    MR_bool transform_hlds__closure_analysis__succeeded;
    MR_Word transform_hlds__closure_analysis__PossibleValues_32;
    MR_Box transform_hlds__closure_analysis__conv0_PossibleValues_32;

    {
      transform_hlds__closure_analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__closure_analysis_scalar_common_1[1], (MR_Word) &transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0, transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131, ((MR_Box) (transform_hlds__closure_analysis__LambdaHeadVar__1_178)), &transform_hlds__closure_analysis__conv0_PossibleValues_32);
    }
    if (transform_hlds__closure_analysis__succeeded)
      {
        transform_hlds__closure_analysis__PossibleValues_32 = ((MR_Word) transform_hlds__closure_analysis__conv0_PossibleValues_32);
        transform_hlds__closure_analysis__succeeded = MR_TRUE;
      }
    if (transform_hlds__closure_analysis__succeeded)
      switch (MR_tag((MR_Word) transform_hlds__closure_analysis__PossibleValues_32)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *transform_hlds__closure_analysis__LambdaHeadVar__3_180 = transform_hlds__closure_analysis__LambdaHeadVar__2_179;
          break;
        case (MR_Integer) 1:
          *transform_hlds__closure_analysis__LambdaHeadVar__3_180 = transform_hlds__closure_analysis__LambdaHeadVar__2_179;
          break;
        case (MR_Integer) 2:
          {
            MR_Word transform_hlds__closure_analysis__KnownValues_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__closure_analysis__PossibleValues_32, (MR_Integer) 0)));

            {
              mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__closure_analysis_scalar_common_1[1], (MR_Word) &transform_hlds__closure_analysis_scalar_common_1[2], ((MR_Box) (transform_hlds__closure_analysis__LambdaHeadVar__1_178)), ((MR_Box) (transform_hlds__closure_analysis__KnownValues_34)), transform_hlds__closure_analysis__LambdaHeadVar__2_179, transform_hlds__closure_analysis__LambdaHeadVar__3_180);
            }
          }
          break;
      }
    else
      *transform_hlds__closure_analysis__LambdaHeadVar__3_180 = transform_hlds__closure_analysis__LambdaHeadVar__2_179;
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__IntroducedFrom__pred__closure_analyse_goal__254__1_4_p_0(
  MR_Word transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131,
  MR_Word transform_hlds__closure_analysis__LambdaHeadVar__1_167,
  MR_Word transform_hlds__closure_analysis__LambdaHeadVar__2_168,
  MR_Word * transform_hlds__closure_analysis__LambdaHeadVar__3_169)
{
  {
    MR_bool transform_hlds__closure_analysis__succeeded;
    MR_Word transform_hlds__closure_analysis__PossibleValues_192;
    MR_Box transform_hlds__closure_analysis__conv0_PossibleValues_192;

    {
      transform_hlds__closure_analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__closure_analysis_scalar_common_1[1], (MR_Word) &transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0, transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131, ((MR_Box) (transform_hlds__closure_analysis__LambdaHeadVar__1_167)), &transform_hlds__closure_analysis__conv0_PossibleValues_192);
    }
    if (transform_hlds__closure_analysis__succeeded)
      {
        transform_hlds__closure_analysis__PossibleValues_192 = ((MR_Word) transform_hlds__closure_analysis__conv0_PossibleValues_192);
        transform_hlds__closure_analysis__succeeded = MR_TRUE;
      }
    if (transform_hlds__closure_analysis__succeeded)
      switch (MR_tag((MR_Word) transform_hlds__closure_analysis__PossibleValues_192)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *transform_hlds__closure_analysis__LambdaHeadVar__3_169 = transform_hlds__closure_analysis__LambdaHeadVar__2_168;
          break;
        case (MR_Integer) 1:
          *transform_hlds__closure_analysis__LambdaHeadVar__3_169 = transform_hlds__closure_analysis__LambdaHeadVar__2_168;
          break;
        case (MR_Integer) 2:
          {
            MR_Word transform_hlds__closure_analysis__KnownValues_190 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__closure_analysis__PossibleValues_192, (MR_Integer) 0)));

            {
              mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__closure_analysis_scalar_common_1[1], (MR_Word) &transform_hlds__closure_analysis_scalar_common_1[2], ((MR_Box) (transform_hlds__closure_analysis__LambdaHeadVar__1_167)), ((MR_Box) (transform_hlds__closure_analysis__KnownValues_190)), transform_hlds__closure_analysis__LambdaHeadVar__2_168, transform_hlds__closure_analysis__LambdaHeadVar__3_169);
            }
          }
          break;
      }
    else
      *transform_hlds__closure_analysis__LambdaHeadVar__3_169 = transform_hlds__closure_analysis__LambdaHeadVar__2_168;
  }
}

static MR_Word MR_CALL 
transform_hlds__closure_analysis__IntroducedFrom__func__closure_analyse_goal__333__1_4_f_0(
  MR_Word transform_hlds__closure_analysis__VarTypes_7,
  MR_Word transform_hlds__closure_analysis__ModuleInfo_8,
  MR_Word transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131,
  MR_Word transform_hlds__closure_analysis__LambdaHeadVar__1_144)
{
  {
    MR_bool transform_hlds__closure_analysis__succeeded;
    MR_Word transform_hlds__closure_analysis__LambdaHeadVar__2_145;
    MR_Word transform_hlds__closure_analysis__Disjunct_93;
    MR_Word transform_hlds__closure_analysis__ClosureInfoForDisjunct_94;

    {
      transform_hlds__closure_analysis__closure_analyse_goal_6_p_0(transform_hlds__closure_analysis__VarTypes_7, transform_hlds__closure_analysis__ModuleInfo_8, transform_hlds__closure_analysis__LambdaHeadVar__1_144, &transform_hlds__closure_analysis__Disjunct_93, transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131, &transform_hlds__closure_analysis__ClosureInfoForDisjunct_94);
    }
    {
      transform_hlds__closure_analysis__LambdaHeadVar__2_145 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__LambdaHeadVar__2_145, 0) = ((MR_Box) (transform_hlds__closure_analysis__Disjunct_93));
      MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__LambdaHeadVar__2_145, 1) = ((MR_Box) (transform_hlds__closure_analysis__ClosureInfoForDisjunct_94));
    }
    return transform_hlds__closure_analysis__LambdaHeadVar__2_145;
  }
}

static MR_bool MR_CALL 
transform_hlds__closure_analysis__IntroducedFrom__pred__closure_analyse_goal__381__1_3_p_0(
  MR_Word transform_hlds__closure_analysis__ModuleInfo_8,
  MR_Word transform_hlds__closure_analysis__LambdaHeadVar__1_136,
  MR_Word * transform_hlds__closure_analysis__LambdaHeadVar__2_137)
{
  {
    MR_bool transform_hlds__closure_analysis__succeeded;
    MR_Word transform_hlds__closure_analysis__NameMode_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__LambdaHeadVar__1_136, (MR_Integer) 1)));
    MR_Word transform_hlds__closure_analysis__Type_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__LambdaHeadVar__1_136, (MR_Integer) 2)));
    MR_Word transform_hlds__closure_analysis__Mode_128;
    MR_Word transform_hlds__closure_analysis__V_138_138;
    MR_Word transform_hlds__closure_analysis__V_139_139;
    MR_Word transform_hlds__closure_analysis__Var_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__LambdaHeadVar__1_136, (MR_Integer) 0)));
    MR_Word transform_hlds__closure_analysis___BoxPolicy_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__LambdaHeadVar__1_136, (MR_Integer) 3)));
    MR_String transform_hlds__closure_analysis__V_127_127;

    transform_hlds__closure_analysis__succeeded = ((MR_tag((MR_Word) transform_hlds__closure_analysis__NameMode_124)) == (MR_mktag((MR_Integer) 1)));
    if (transform_hlds__closure_analysis__succeeded)
      {
        transform_hlds__closure_analysis__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__closure_analysis__NameMode_124, (MR_Integer) 0)));
        transform_hlds__closure_analysis__V_127_127 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_138_138, (MR_Integer) 0)));
        transform_hlds__closure_analysis__Mode_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_138_138, (MR_Integer) 1)));
        {
          transform_hlds__closure_analysis__succeeded = check_hlds__mode_util__mode_is_output_2_p_0(transform_hlds__closure_analysis__ModuleInfo_8, transform_hlds__closure_analysis__Mode_128);
        }
        if (transform_hlds__closure_analysis__succeeded)
          {
            {
              transform_hlds__closure_analysis__succeeded = parse_tree__prog_type__type_is_higher_order_1_p_0(transform_hlds__closure_analysis__Type_125);
            }
            if (transform_hlds__closure_analysis__succeeded)
              {
                transform_hlds__closure_analysis__V_139_139 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  *transform_hlds__closure_analysis__LambdaHeadVar__2_137 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__closure_analysis__Var_226));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__closure_analysis__V_139_139));
                }
                transform_hlds__closure_analysis__succeeded = MR_TRUE;
              }
          }
      }
    return transform_hlds__closure_analysis__succeeded;
  }
}

static void MR_CALL 
transform_hlds__closure_analysis____Compare____closure_values_0_0(
  MR_Word * transform_hlds__closure_analysis__HeadVar__1_1,
  MR_Word transform_hlds__closure_analysis__HeadVar__2_2,
  MR_Word transform_hlds__closure_analysis__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__closure_analysis__succeeded;
    MR_Integer transform_hlds__closure_analysis__CastX_16 = (MR_Integer) transform_hlds__closure_analysis__HeadVar__2_2;
    MR_Integer transform_hlds__closure_analysis__CastY_17 = (MR_Integer) transform_hlds__closure_analysis__HeadVar__3_3;

    transform_hlds__closure_analysis__succeeded = (transform_hlds__closure_analysis__CastX_16 == transform_hlds__closure_analysis__CastY_17);
    if (transform_hlds__closure_analysis__succeeded)
      *transform_hlds__closure_analysis__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) transform_hlds__closure_analysis__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) transform_hlds__closure_analysis__HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *transform_hlds__closure_analysis__HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *transform_hlds__closure_analysis__HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *transform_hlds__closure_analysis__HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word transform_hlds__closure_analysis__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__closure_analysis__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) transform_hlds__closure_analysis__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *transform_hlds__closure_analysis__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word transform_hlds__closure_analysis__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__closure_analysis__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__closure_analysis_scalar_common_1[2], transform_hlds__closure_analysis__HeadVar__1_1, ((MR_Box) (transform_hlds__closure_analysis__V_21_21)), ((MR_Box) (transform_hlds__closure_analysis__V_8_8)));
                  }
                }
                break;
              case (MR_Integer) 2:
                *transform_hlds__closure_analysis__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word transform_hlds__closure_analysis__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__closure_analysis__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) transform_hlds__closure_analysis__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *transform_hlds__closure_analysis__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *transform_hlds__closure_analysis__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word transform_hlds__closure_analysis__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__closure_analysis__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__closure_analysis_scalar_common_1[2], transform_hlds__closure_analysis__HeadVar__1_1, ((MR_Box) (transform_hlds__closure_analysis__V_20_20)), ((MR_Box) (transform_hlds__closure_analysis__V_15_15)));
                  }
                }
                break;
            }
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__closure_analysis____Unify____closure_values_0_0(
  MR_Word transform_hlds__closure_analysis__HeadVar__1_1,
  MR_Word transform_hlds__closure_analysis__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__closure_analysis__succeeded;
    MR_Integer transform_hlds__closure_analysis__CastX_9 = (MR_Integer) transform_hlds__closure_analysis__HeadVar__1_1;
    MR_Integer transform_hlds__closure_analysis__CastY_10 = (MR_Integer) transform_hlds__closure_analysis__HeadVar__2_2;

    transform_hlds__closure_analysis__succeeded = (transform_hlds__closure_analysis__CastX_9 == transform_hlds__closure_analysis__CastY_10);
    if (transform_hlds__closure_analysis__succeeded)
      transform_hlds__closure_analysis__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) transform_hlds__closure_analysis__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer transform_hlds__closure_analysis__CastX_3 = (MR_Integer) transform_hlds__closure_analysis__HeadVar__1_1;
            MR_Integer transform_hlds__closure_analysis__CastY_4 = (MR_Integer) transform_hlds__closure_analysis__HeadVar__2_2;

            transform_hlds__closure_analysis__succeeded = (transform_hlds__closure_analysis__CastY_4 == transform_hlds__closure_analysis__CastX_3);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word transform_hlds__closure_analysis__TypeInfo_12_12;
            MR_Word transform_hlds__closure_analysis__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__closure_analysis__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__closure_analysis__V_6_6;

            transform_hlds__closure_analysis__succeeded = ((MR_tag((MR_Word) transform_hlds__closure_analysis__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (transform_hlds__closure_analysis__succeeded)
              {
                transform_hlds__closure_analysis__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__closure_analysis__HeadVar__2_2, (MR_Integer) 0)));
                transform_hlds__closure_analysis__TypeInfo_12_12 = (MR_Word) &transform_hlds__closure_analysis_scalar_common_1[2];
                {
                  transform_hlds__closure_analysis__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__closure_analysis__TypeInfo_12_12, ((MR_Box) (transform_hlds__closure_analysis__V_5_5)), ((MR_Box) (transform_hlds__closure_analysis__V_6_6)));
                }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word transform_hlds__closure_analysis__TypeInfo_11_11;
            MR_Word transform_hlds__closure_analysis__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__closure_analysis__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__closure_analysis__V_8_8;

            transform_hlds__closure_analysis__succeeded = ((MR_tag((MR_Word) transform_hlds__closure_analysis__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (transform_hlds__closure_analysis__succeeded)
              {
                transform_hlds__closure_analysis__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__closure_analysis__HeadVar__2_2, (MR_Integer) 0)));
                transform_hlds__closure_analysis__TypeInfo_11_11 = (MR_Word) &transform_hlds__closure_analysis_scalar_common_1[2];
                {
                  transform_hlds__closure_analysis__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__closure_analysis__TypeInfo_11_11, ((MR_Box) (transform_hlds__closure_analysis__V_7_7)), ((MR_Box) (transform_hlds__closure_analysis__V_8_8)));
                }
              }
          }
          break;
      }
    return transform_hlds__closure_analysis__succeeded;
  }
}

static void MR_CALL 
transform_hlds__closure_analysis____Compare____closure_info_0_0(
  MR_Word * transform_hlds__closure_analysis__HeadVar__1_1,
  MR_Word transform_hlds__closure_analysis__HeadVar__2_2,
  MR_Word transform_hlds__closure_analysis__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__closure_analysis__succeeded;
    MR_Word transform_hlds__closure_analysis__Cast_HeadVar1_4 = transform_hlds__closure_analysis__HeadVar__2_2;
    MR_Word transform_hlds__closure_analysis__Cast_HeadVar2_5 = transform_hlds__closure_analysis__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__closure_analysis_scalar_common_2[0], transform_hlds__closure_analysis__HeadVar__1_1, ((MR_Box) (transform_hlds__closure_analysis__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__closure_analysis__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__closure_analysis____Unify____closure_info_0_0(
  MR_Word transform_hlds__closure_analysis__HeadVar__1_1,
  MR_Word transform_hlds__closure_analysis__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__closure_analysis__succeeded;
    MR_Word transform_hlds__closure_analysis__Cast_HeadVar1_3 = transform_hlds__closure_analysis__HeadVar__1_1;
    MR_Word transform_hlds__closure_analysis__Cast_HeadVar2_4 = transform_hlds__closure_analysis__HeadVar__2_2;

    {
      transform_hlds__closure_analysis__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__closure_analysis_scalar_common_2[0], ((MR_Box) (transform_hlds__closure_analysis__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__closure_analysis__Cast_HeadVar2_4)));
    }
    return transform_hlds__closure_analysis__succeeded;
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__dump_ho_value_5_p_0_1(
  MR_Box transform_hlds__closure_analysis__closure_arg,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__closure_analysis__closure = transform_hlds__closure_analysis__closure_arg;

    {
      transform_hlds__closure_analysis__IntroducedFrom__pred__dump_ho_value__501__1_3_p_0(((MR_Word) transform_hlds__closure_analysis__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__dump_ho_value_5_p_0(
  MR_Word transform_hlds__closure_analysis__Varset_6,
  MR_Word transform_hlds__closure_analysis__ProgVar_7,
  MR_Word transform_hlds__closure_analysis__Values_8)
{
  {
    MR_bool transform_hlds__closure_analysis__succeeded;
    MR_String transform_hlds__closure_analysis__VarName_10;
    MR_Box transform_hlds__closure_analysis__conv0_STATE_VARIABLE_IO_14;

    {
      transform_hlds__closure_analysis__VarName_10 = mercury__varset__lookup_name_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__closure_analysis__Varset_6, transform_hlds__closure_analysis__ProgVar_7);
    }
    {
      mercury__io__write_string_3_p_0(transform_hlds__closure_analysis__VarName_10);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " =\n");
    }
    {
      mercury__set__fold_4_p_2((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[14], transform_hlds__closure_analysis__Values_8, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__closure_analysis__conv0_STATE_VARIABLE_IO_14);
    }
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__dump_ho_values_4_p_0_1(
  MR_Box transform_hlds__closure_analysis__closure_arg,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_3,
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_4)
{
  {
    MR_Box transform_hlds__closure_analysis__closure = transform_hlds__closure_analysis__closure_arg;

    {
      transform_hlds__closure_analysis__dump_ho_value_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_2));
    }
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__dump_ho_values_4_p_0(
  MR_Word transform_hlds__closure_analysis__GoalInfo_5,
  MR_Word transform_hlds__closure_analysis__Varset_6)
{
  {
    MR_bool transform_hlds__closure_analysis__succeeded;
    MR_Word transform_hlds__closure_analysis__HO_Values_8;

    {
      transform_hlds__closure_analysis__HO_Values_8 = hlds__hlds_goal__goal_info_get_ho_values_1_f_0(transform_hlds__closure_analysis__GoalInfo_5);
    }
    {
      transform_hlds__closure_analysis__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &transform_hlds__closure_analysis_scalar_common_1[1], (MR_Word) &transform_hlds__closure_analysis_scalar_common_1[2], transform_hlds__closure_analysis__HO_Values_8);
    }
    if (transform_hlds__closure_analysis__succeeded)
      {
      }
    else
      {
        MR_Word transform_hlds__closure_analysis__V_11_11;
        MR_Word transform_hlds__closure_analysis__V_14_14;
        MR_Box transform_hlds__closure_analysis__conv0_STATE_VARIABLE_IO_10;

        {
          transform_hlds__closure_analysis__V_11_11 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__closure_analysis__GoalInfo_5);
        }
        {
          parse_tree__prog_out__write_context_3_p_0(transform_hlds__closure_analysis__V_11_11);
        }
        {
          mercury__io__nl_2_p_0();
        }
        {
          transform_hlds__closure_analysis__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_14_14, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_6[2]));
          MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_14_14, 1) = ((MR_Box) (transform_hlds__closure_analysis__dump_ho_values_4_p_0_1));
          MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_14_14, 3) = ((MR_Box) (transform_hlds__closure_analysis__Varset_6));
        }
        {
          mercury__map__foldl_4_p_2((MR_Word) &transform_hlds__closure_analysis_scalar_common_1[1], (MR_Word) &transform_hlds__closure_analysis_scalar_common_1[2], (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__closure_analysis__V_14_14, transform_hlds__closure_analysis__HO_Values_8, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__closure_analysis__conv0_STATE_VARIABLE_IO_10);
        }
      }
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0_5(
  MR_Box transform_hlds__closure_analysis__closure_arg,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__closure_analysis__closure = transform_hlds__closure_analysis__closure_arg;

    {
      transform_hlds__closure_analysis__dump_closure_info_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_1));
    }
  }
}

static MR_Box MR_CALL 
transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0_4(
  MR_Box transform_hlds__closure_analysis__closure_arg,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1)
{
  {
    MR_Box transform_hlds__closure_analysis__wrapper_arg_2;
    MR_Box transform_hlds__closure_analysis__closure = transform_hlds__closure_analysis__closure_arg;
    MR_Word transform_hlds__closure_analysis__conv3_LambdaHeadVar__2_60;

    {
      transform_hlds__closure_analysis__conv3_LambdaHeadVar__2_60 = transform_hlds__closure_analysis__IntroducedFrom__func__dump_closure_info_expr__468__1_1_f_0(((MR_Word) transform_hlds__closure_analysis__wrapper_arg_1));
    }
    transform_hlds__closure_analysis__wrapper_arg_2 = ((MR_Box) (transform_hlds__closure_analysis__conv3_LambdaHeadVar__2_60));
    return transform_hlds__closure_analysis__wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0_3(
  MR_Box transform_hlds__closure_analysis__closure_arg,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__closure_analysis__closure = transform_hlds__closure_analysis__closure_arg;

    {
      transform_hlds__closure_analysis__dump_closure_info_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0_2(
  MR_Box transform_hlds__closure_analysis__closure_arg,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__closure_analysis__closure = transform_hlds__closure_analysis__closure_arg;

    {
      transform_hlds__closure_analysis__dump_closure_info_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0_1(
  MR_Box transform_hlds__closure_analysis__closure_arg,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__closure_analysis__closure = transform_hlds__closure_analysis__closure_arg;

    {
      transform_hlds__closure_analysis__dump_closure_info_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0(
  MR_Word transform_hlds__closure_analysis__Varset_1,
  MR_Word transform_hlds__closure_analysis__HeadVar__2_2,
  MR_Word transform_hlds__closure_analysis__GoalInfo_3)
{
  {
    MR_bool transform_hlds__closure_analysis__succeeded;

    switch (MR_tag((MR_Word) transform_hlds__closure_analysis__HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word transform_hlds__closure_analysis__Goal_94 = (MR_Word) MR_body(((MR_Word) transform_hlds__closure_analysis__HeadVar__2_2), (MR_Integer) 0);

          {
            transform_hlds__closure_analysis__dump_closure_info_4_p_0(transform_hlds__closure_analysis__Varset_1, transform_hlds__closure_analysis__Goal_94);
          }
        }
        break;
      case (MR_Integer) 1:
        {
        }
        break;
      case (MR_Integer) 2:
        {
          transform_hlds__closure_analysis__dump_ho_values_4_p_0(transform_hlds__closure_analysis__GoalInfo_3, transform_hlds__closure_analysis__Varset_1);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__HeadVar__2_2, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              transform_hlds__closure_analysis__dump_ho_values_4_p_0(transform_hlds__closure_analysis__GoalInfo_3, transform_hlds__closure_analysis__Varset_1);
            }
            break;
          case (MR_Integer) 1:
            {
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word transform_hlds__closure_analysis__Goals_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__HeadVar__2_2, (MR_Integer) 2)));
              MR_Word transform_hlds__closure_analysis__V_13_13;
              MR_Word transform_hlds__closure_analysis___ConjType_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__HeadVar__2_2, (MR_Integer) 1)));
              MR_Box transform_hlds__closure_analysis__conv0_STATE_VARIABLE_IO_5;

              {
                transform_hlds__closure_analysis__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_13_13, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_7[1]));
                MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_13_13, 1) = ((MR_Box) (transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0_1));
                MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_13_13, 3) = ((MR_Box) (transform_hlds__closure_analysis__Varset_1));
              }
              {
                mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__closure_analysis__V_13_13, transform_hlds__closure_analysis__Goals_8, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__closure_analysis__conv0_STATE_VARIABLE_IO_5);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word transform_hlds__closure_analysis__Goals_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__HeadVar__2_2, (MR_Integer) 1)));
              MR_Word transform_hlds__closure_analysis__V_118_118;
              MR_Box transform_hlds__closure_analysis__conv1_STATE_VARIABLE_IO_5;

              {
                transform_hlds__closure_analysis__V_118_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_118_118, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_7[1]));
                MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_118_118, 1) = ((MR_Box) (transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0_2));
                MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_118_118, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_118_118, 3) = ((MR_Box) (transform_hlds__closure_analysis__Varset_1));
              }
              {
                mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__closure_analysis__V_118_118, transform_hlds__closure_analysis__Goals_113, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__closure_analysis__conv1_STATE_VARIABLE_IO_5);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word transform_hlds__closure_analysis__TypeCtorInfo_134_134 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
              MR_Word transform_hlds__closure_analysis__Cases_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__HeadVar__2_2, (MR_Integer) 3)));
              MR_Word transform_hlds__closure_analysis__Goals_56;
              MR_Word transform_hlds__closure_analysis__V_61_61;
              MR_Word transform_hlds__closure_analysis__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__HeadVar__2_2, (MR_Integer) 1)));
              MR_Word transform_hlds__closure_analysis__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__HeadVar__2_2, (MR_Integer) 2)));
              MR_Box transform_hlds__closure_analysis__conv4_STATE_VARIABLE_IO_5;

              {
                transform_hlds__closure_analysis__Goals_56 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, transform_hlds__closure_analysis__TypeCtorInfo_134_134, (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[13], transform_hlds__closure_analysis__Cases_49);
              }
              {
                transform_hlds__closure_analysis__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_61_61, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_7[1]));
                MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_61_61, 1) = ((MR_Box) (transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0_5));
                MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_61_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_61_61, 3) = ((MR_Box) (transform_hlds__closure_analysis__Varset_1));
              }
              {
                mercury__list__foldl_4_p_2(transform_hlds__closure_analysis__TypeCtorInfo_134_134, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__closure_analysis__V_61_61, transform_hlds__closure_analysis__Goals_56, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__closure_analysis__conv4_STATE_VARIABLE_IO_5);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word transform_hlds__closure_analysis__Goal_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__HeadVar__2_2, (MR_Integer) 2)));
              MR_Word transform_hlds__closure_analysis__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__HeadVar__2_2, (MR_Integer) 1)));

              {
                transform_hlds__closure_analysis__dump_closure_info_4_p_0(transform_hlds__closure_analysis__Varset_1, transform_hlds__closure_analysis__Goal_40);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word transform_hlds__closure_analysis__Cond_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__HeadVar__2_2, (MR_Integer) 2)));
              MR_Word transform_hlds__closure_analysis__Then_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__HeadVar__2_2, (MR_Integer) 3)));
              MR_Word transform_hlds__closure_analysis__Else_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__HeadVar__2_2, (MR_Integer) 4)));
              MR_Word transform_hlds__closure_analysis__V_77_77;
              MR_Word transform_hlds__closure_analysis__V_78_78;
              MR_Word transform_hlds__closure_analysis__V_80_80;
              MR_Word transform_hlds__closure_analysis__V_81_81;
              MR_Word transform_hlds__closure_analysis__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__HeadVar__2_2, (MR_Integer) 1)));
              MR_Box transform_hlds__closure_analysis__conv2_STATE_VARIABLE_IO_5;

              {
                transform_hlds__closure_analysis__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_77_77, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_7[1]));
                MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_77_77, 1) = ((MR_Box) (transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0_3));
                MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_77_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_77_77, 3) = ((MR_Box) (transform_hlds__closure_analysis__Varset_1));
              }
              {
                transform_hlds__closure_analysis__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), transform_hlds__closure_analysis__V_81_81, 0) = ((MR_Box) (transform_hlds__closure_analysis__Else_72));
                MR_hl_field(MR_mktag(1), transform_hlds__closure_analysis__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                transform_hlds__closure_analysis__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), transform_hlds__closure_analysis__V_80_80, 0) = ((MR_Box) (transform_hlds__closure_analysis__Then_71));
                MR_hl_field(MR_mktag(1), transform_hlds__closure_analysis__V_80_80, 1) = ((MR_Box) (transform_hlds__closure_analysis__V_81_81));
              }
              {
                transform_hlds__closure_analysis__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), transform_hlds__closure_analysis__V_78_78, 0) = ((MR_Box) (transform_hlds__closure_analysis__Cond_70));
                MR_hl_field(MR_mktag(1), transform_hlds__closure_analysis__V_78_78, 1) = ((MR_Box) (transform_hlds__closure_analysis__V_80_80));
              }
              {
                mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__closure_analysis__V_77_77, transform_hlds__closure_analysis__V_78_78, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__closure_analysis__conv2_STATE_VARIABLE_IO_5);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.closure_analysis", (MR_String) "predicate \140transform_hlds.closure_analysis.dump_closure_info_expr\'/5", (MR_String) "shorthand");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__dump_closure_info_4_p_0(
  MR_Word transform_hlds__closure_analysis__Varset_5,
  MR_Word transform_hlds__closure_analysis__Goal_6)
{
  {
    MR_bool transform_hlds__closure_analysis__succeeded;
    MR_Word transform_hlds__closure_analysis__GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__Goal_6, (MR_Integer) 0)));
    MR_Word transform_hlds__closure_analysis__GoalInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__Goal_6, (MR_Integer) 1)));

    {
      transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0(transform_hlds__closure_analysis__Varset_5, transform_hlds__closure_analysis__GoalExpr_8, transform_hlds__closure_analysis__GoalInfo_9);
    }
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__merge_closure_values_3_p_0(
  MR_Word transform_hlds__closure_analysis__HeadVar__1_1,
  MR_Word transform_hlds__closure_analysis__HeadVar__2_2,
  MR_Word * transform_hlds__closure_analysis__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__closure_analysis__succeeded;

    switch (MR_tag((MR_Word) transform_hlds__closure_analysis__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) transform_hlds__closure_analysis__HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *transform_hlds__closure_analysis__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 1:
            *transform_hlds__closure_analysis__HeadVar__3_3 = transform_hlds__closure_analysis__HeadVar__2_2;
            break;
          case (MR_Integer) 2:
            {
              MR_Word transform_hlds__closure_analysis__A_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__closure_analysis__HeadVar__2_2, (MR_Integer) 0)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *transform_hlds__closure_analysis__HeadVar__3_3 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__closure_analysis__A_5));
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__closure_analysis__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__closure_analysis__HeadVar__1_1, (MR_Integer) 0)));

          switch (MR_tag((MR_Word) transform_hlds__closure_analysis__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *transform_hlds__closure_analysis__HeadVar__3_3 = transform_hlds__closure_analysis__HeadVar__1_1;
              break;
            case (MR_Integer) 1:
              {
                MR_Word transform_hlds__closure_analysis__B_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__closure_analysis__HeadVar__2_2, (MR_Integer) 0)));
                MR_Word transform_hlds__closure_analysis__V_9_9;

                {
                  transform_hlds__closure_analysis__V_9_9 = mercury__set__union_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__closure_analysis__V_25_25, transform_hlds__closure_analysis__B_8);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *transform_hlds__closure_analysis__HeadVar__3_3 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__closure_analysis__V_9_9));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word transform_hlds__closure_analysis__B_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__closure_analysis__HeadVar__2_2, (MR_Integer) 0)));
                MR_Word transform_hlds__closure_analysis__V_12_12;

                {
                  transform_hlds__closure_analysis__V_12_12 = mercury__set__union_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__closure_analysis__V_25_25, transform_hlds__closure_analysis__B_11);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *transform_hlds__closure_analysis__HeadVar__3_3 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__closure_analysis__V_12_12));
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word transform_hlds__closure_analysis__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__closure_analysis__HeadVar__1_1, (MR_Integer) 0)));

          switch (MR_tag((MR_Word) transform_hlds__closure_analysis__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *transform_hlds__closure_analysis__HeadVar__3_3 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__closure_analysis__V_24_24));
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word transform_hlds__closure_analysis__B_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__closure_analysis__HeadVar__2_2, (MR_Integer) 0)));
                MR_Word transform_hlds__closure_analysis__V_16_16;

                {
                  transform_hlds__closure_analysis__V_16_16 = mercury__set__union_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__closure_analysis__V_24_24, transform_hlds__closure_analysis__B_15);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *transform_hlds__closure_analysis__HeadVar__3_3 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__closure_analysis__V_16_16));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word transform_hlds__closure_analysis__B_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__closure_analysis__HeadVar__2_2, (MR_Integer) 0)));
                MR_Word transform_hlds__closure_analysis__V_19_19;

                {
                  transform_hlds__closure_analysis__V_19_19 = mercury__set__union_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__closure_analysis__V_24_24, transform_hlds__closure_analysis__B_18);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *transform_hlds__closure_analysis__HeadVar__3_3 = base;
                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (transform_hlds__closure_analysis__V_19_19));
                }
              }
              break;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__merge_closure_infos_3_p_0_1(
  MR_Box transform_hlds__closure_analysis__closure_arg,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__closure_analysis__closure = transform_hlds__closure_analysis__closure_arg;
    MR_Word transform_hlds__closure_analysis__conv0_HeadVar__3_3;

    {
      transform_hlds__closure_analysis__merge_closure_values_3_p_0(((MR_Word) transform_hlds__closure_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_2), &transform_hlds__closure_analysis__conv0_HeadVar__3_3);
    }
    *transform_hlds__closure_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__closure_analysis__conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__merge_closure_infos_3_p_0(
  MR_Word transform_hlds__closure_analysis__A_4,
  MR_Word transform_hlds__closure_analysis__B_5,
  MR_Word * transform_hlds__closure_analysis__C_6)
{
  {
    MR_bool transform_hlds__closure_analysis__succeeded;

    {
      mercury__map__union_4_p_1((MR_Word) &transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0, (MR_Word) &transform_hlds__closure_analysis_scalar_common_1[1], (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[12], transform_hlds__closure_analysis__A_4, transform_hlds__closure_analysis__B_5, transform_hlds__closure_analysis__C_6);
    }
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__partition_arguments_8_p_0(
  MR_Word transform_hlds__closure_analysis__ModuleInfo_1,
  MR_Word transform_hlds__closure_analysis__VarTypes_2,
  MR_Word transform_hlds__closure_analysis__HeadVar__3_3,
  MR_Word transform_hlds__closure_analysis__HeadVar__4_4,
  MR_Word transform_hlds__closure_analysis__STATE_VARIABLE_Inputs_0_5,
  MR_Word * transform_hlds__closure_analysis__STATE_VARIABLE_Inputs_6,
  MR_Word transform_hlds__closure_analysis__STATE_VARIABLE_Outputs_0_7,
  MR_Word * transform_hlds__closure_analysis__STATE_VARIABLE_Outputs_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__closure_analysis__succeeded;

        if ((transform_hlds__closure_analysis__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((transform_hlds__closure_analysis__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              *transform_hlds__closure_analysis__STATE_VARIABLE_Outputs_8 = transform_hlds__closure_analysis__STATE_VARIABLE_Outputs_0_7;
              *transform_hlds__closure_analysis__STATE_VARIABLE_Inputs_6 = transform_hlds__closure_analysis__STATE_VARIABLE_Inputs_0_5;
            }
          else
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.closure_analysis", (MR_String) "predicate \140transform_hlds.closure_analysis.partition_arguments\'/8", (MR_String) "unequal length lists.");
                return;
              }
            }
        else
          {
            MR_Word transform_hlds__closure_analysis__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__closure_analysis__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word transform_hlds__closure_analysis__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__closure_analysis__HeadVar__3_3, (MR_Integer) 0)));

            if ((transform_hlds__closure_analysis__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.closure_analysis", (MR_String) "predicate \140transform_hlds.closure_analysis.partition_arguments\'/8", (MR_String) "unequal length lists.");
                  return;
                }
              }
            else
              {
                MR_Word transform_hlds__closure_analysis__Mode_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__closure_analysis__HeadVar__4_4, (MR_Integer) 0)));
                MR_Word transform_hlds__closure_analysis__Modes_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__closure_analysis__HeadVar__4_4, (MR_Integer) 1)));
                MR_Word transform_hlds__closure_analysis__STATE_VARIABLE_Inputs_51_51;
                MR_Word transform_hlds__closure_analysis__STATE_VARIABLE_Outputs_52_52;
                MR_Word transform_hlds__closure_analysis__Type_61;

                {
                  hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__closure_analysis__VarTypes_2, transform_hlds__closure_analysis__V_58_58, &transform_hlds__closure_analysis__Type_61);
                }
                {
                  transform_hlds__closure_analysis__succeeded = parse_tree__prog_type__type_is_higher_order_1_p_0(transform_hlds__closure_analysis__Type_61);
                }
                if (transform_hlds__closure_analysis__succeeded)
                  {
                    {
                      transform_hlds__closure_analysis__succeeded = check_hlds__mode_util__mode_is_input_2_p_0(transform_hlds__closure_analysis__ModuleInfo_1, transform_hlds__closure_analysis__Mode_43);
                    }
                    if (transform_hlds__closure_analysis__succeeded)
                      {
                        {
                          parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__closure_analysis__V_58_58, transform_hlds__closure_analysis__STATE_VARIABLE_Inputs_0_5, &transform_hlds__closure_analysis__STATE_VARIABLE_Inputs_51_51);
                        }
                        transform_hlds__closure_analysis__STATE_VARIABLE_Outputs_52_52 = transform_hlds__closure_analysis__STATE_VARIABLE_Outputs_0_7;
                      }
                    else
                      {
                        {
                          transform_hlds__closure_analysis__succeeded = check_hlds__mode_util__mode_is_output_2_p_0(transform_hlds__closure_analysis__ModuleInfo_1, transform_hlds__closure_analysis__Mode_43);
                        }
                        if (transform_hlds__closure_analysis__succeeded)
                          {
                            {
                              parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__closure_analysis__V_58_58, transform_hlds__closure_analysis__STATE_VARIABLE_Outputs_0_7, &transform_hlds__closure_analysis__STATE_VARIABLE_Outputs_52_52);
                            }
                          }
                        else
                          transform_hlds__closure_analysis__STATE_VARIABLE_Outputs_52_52 = transform_hlds__closure_analysis__STATE_VARIABLE_Outputs_0_7;
                        transform_hlds__closure_analysis__STATE_VARIABLE_Inputs_51_51 = transform_hlds__closure_analysis__STATE_VARIABLE_Inputs_0_5;
                      }
                  }
                else
                  {
                    transform_hlds__closure_analysis__STATE_VARIABLE_Outputs_52_52 = transform_hlds__closure_analysis__STATE_VARIABLE_Outputs_0_7;
                    transform_hlds__closure_analysis__STATE_VARIABLE_Inputs_51_51 = transform_hlds__closure_analysis__STATE_VARIABLE_Inputs_0_5;
                  }
                /* direct tailcall eliminated */
                {
                  MR_Word transform_hlds__closure_analysis__HeadVar__3__tmp_copy_3 = transform_hlds__closure_analysis__V_57_57;
                  MR_Word transform_hlds__closure_analysis__HeadVar__4__tmp_copy_4 = transform_hlds__closure_analysis__Modes_44;
                  MR_Word transform_hlds__closure_analysis__STATE_VARIABLE_Inputs_0__tmp_copy_5 = transform_hlds__closure_analysis__STATE_VARIABLE_Inputs_51_51;
                  MR_Word transform_hlds__closure_analysis__STATE_VARIABLE_Outputs_0__tmp_copy_7 = transform_hlds__closure_analysis__STATE_VARIABLE_Outputs_52_52;

                  transform_hlds__closure_analysis__STATE_VARIABLE_Outputs_0_7 = transform_hlds__closure_analysis__STATE_VARIABLE_Outputs_0__tmp_copy_7;
                  transform_hlds__closure_analysis__STATE_VARIABLE_Inputs_0_5 = transform_hlds__closure_analysis__STATE_VARIABLE_Inputs_0__tmp_copy_5;
                  transform_hlds__closure_analysis__HeadVar__4_4 = transform_hlds__closure_analysis__HeadVar__4__tmp_copy_4;
                  transform_hlds__closure_analysis__HeadVar__3_3 = transform_hlds__closure_analysis__HeadVar__3__tmp_copy_3;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_13(
  MR_Box transform_hlds__closure_analysis__closure_arg,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__closure_analysis__closure = transform_hlds__closure_analysis__closure_arg;
    MR_Word transform_hlds__closure_analysis__conv20_STATE_VARIABLE_ClosureInfo_7;

    {
      transform_hlds__closure_analysis__insert_unknown_3_p_0(((MR_Word) transform_hlds__closure_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_2), &transform_hlds__closure_analysis__conv20_STATE_VARIABLE_ClosureInfo_7);
    }
    *transform_hlds__closure_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__closure_analysis__conv20_STATE_VARIABLE_ClosureInfo_7));
  }
}

static MR_bool MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_12(
  MR_Box transform_hlds__closure_analysis__closure_arg,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1)
{
  {
    MR_bool transform_hlds__closure_analysis__succeeded;
    MR_Box transform_hlds__closure_analysis__closure = transform_hlds__closure_analysis__closure_arg;

    {
      transform_hlds__closure_analysis__succeeded = transform_hlds__closure_analysis__var_has_ho_type_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_1));
    }
    return transform_hlds__closure_analysis__succeeded;
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_11(
  MR_Box transform_hlds__closure_analysis__closure_arg,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__closure_analysis__closure = transform_hlds__closure_analysis__closure_arg;
    MR_Word transform_hlds__closure_analysis__conv17_C_6;

    {
      transform_hlds__closure_analysis__merge_closure_infos_3_p_0(((MR_Word) transform_hlds__closure_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_2), &transform_hlds__closure_analysis__conv17_C_6);
    }
    *transform_hlds__closure_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__closure_analysis__conv17_C_6));
  }
}

static MR_Box MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_10(
  MR_Box transform_hlds__closure_analysis__closure_arg,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1)
{
  {
    MR_Box transform_hlds__closure_analysis__wrapper_arg_2;
    MR_Box transform_hlds__closure_analysis__closure = transform_hlds__closure_analysis__closure_arg;
    MR_Word transform_hlds__closure_analysis__conv16_LambdaHeadVar__2_159;

    {
      transform_hlds__closure_analysis__conv16_LambdaHeadVar__2_159 = transform_hlds__closure_analysis__IntroducedFrom__func__closure_analyse_goal__276__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_1));
    }
    transform_hlds__closure_analysis__wrapper_arg_2 = ((MR_Box) (transform_hlds__closure_analysis__conv16_LambdaHeadVar__2_159));
    return transform_hlds__closure_analysis__wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_9(
  MR_Box transform_hlds__closure_analysis__closure_arg,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__closure_analysis__closure = transform_hlds__closure_analysis__closure_arg;
    MR_Word transform_hlds__closure_analysis__conv14_STATE_VARIABLE_ClosureInfo_7;

    {
      transform_hlds__closure_analysis__insert_unknown_3_p_0(((MR_Word) transform_hlds__closure_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_2), &transform_hlds__closure_analysis__conv14_STATE_VARIABLE_ClosureInfo_7);
    }
    *transform_hlds__closure_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__closure_analysis__conv14_STATE_VARIABLE_ClosureInfo_7));
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_8(
  MR_Box transform_hlds__closure_analysis__closure_arg,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__closure_analysis__closure = transform_hlds__closure_analysis__closure_arg;
    MR_Word transform_hlds__closure_analysis__conv12_LambdaHeadVar__3_180;

    {
      transform_hlds__closure_analysis__IntroducedFrom__pred__closure_analyse_goal__214__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_2), &transform_hlds__closure_analysis__conv12_LambdaHeadVar__3_180);
    }
    *transform_hlds__closure_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__closure_analysis__conv12_LambdaHeadVar__3_180));
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_7(
  MR_Box transform_hlds__closure_analysis__closure_arg,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__closure_analysis__closure = transform_hlds__closure_analysis__closure_arg;
    MR_Word transform_hlds__closure_analysis__conv11_HeadVar__3_3;

    {
      transform_hlds__closure_analysis__merge_closure_values_3_p_0(((MR_Word) transform_hlds__closure_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_2), &transform_hlds__closure_analysis__conv11_HeadVar__3_3);
    }
    *transform_hlds__closure_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__closure_analysis__conv11_HeadVar__3_3));
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_6(
  MR_Box transform_hlds__closure_analysis__closure_arg,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__closure_analysis__closure = transform_hlds__closure_analysis__closure_arg;
    MR_Word transform_hlds__closure_analysis__conv9_STATE_VARIABLE_ClosureInfo_7;

    {
      transform_hlds__closure_analysis__insert_unknown_3_p_0(((MR_Word) transform_hlds__closure_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_2), &transform_hlds__closure_analysis__conv9_STATE_VARIABLE_ClosureInfo_7);
    }
    *transform_hlds__closure_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__closure_analysis__conv9_STATE_VARIABLE_ClosureInfo_7));
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_5(
  MR_Box transform_hlds__closure_analysis__closure_arg,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__closure_analysis__closure = transform_hlds__closure_analysis__closure_arg;
    MR_Word transform_hlds__closure_analysis__conv7_LambdaHeadVar__3_169;

    {
      transform_hlds__closure_analysis__IntroducedFrom__pred__closure_analyse_goal__254__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_2), &transform_hlds__closure_analysis__conv7_LambdaHeadVar__3_169);
    }
    *transform_hlds__closure_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__closure_analysis__conv7_LambdaHeadVar__3_169));
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_4(
  MR_Box transform_hlds__closure_analysis__closure_arg,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__closure_analysis__closure = transform_hlds__closure_analysis__closure_arg;
    MR_Word transform_hlds__closure_analysis__conv5_C_6;

    {
      transform_hlds__closure_analysis__merge_closure_infos_3_p_0(((MR_Word) transform_hlds__closure_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_2), &transform_hlds__closure_analysis__conv5_C_6);
    }
    *transform_hlds__closure_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__closure_analysis__conv5_C_6));
  }
}

static MR_Box MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_3(
  MR_Box transform_hlds__closure_analysis__closure_arg,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1)
{
  {
    MR_Box transform_hlds__closure_analysis__wrapper_arg_2;
    MR_Box transform_hlds__closure_analysis__closure = transform_hlds__closure_analysis__closure_arg;
    MR_Word transform_hlds__closure_analysis__conv4_LambdaHeadVar__2_145;

    {
      transform_hlds__closure_analysis__conv4_LambdaHeadVar__2_145 = transform_hlds__closure_analysis__IntroducedFrom__func__closure_analyse_goal__333__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_1));
    }
    transform_hlds__closure_analysis__wrapper_arg_2 = ((MR_Box) (transform_hlds__closure_analysis__conv4_LambdaHeadVar__2_145));
    return transform_hlds__closure_analysis__wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_2(
  MR_Box transform_hlds__closure_analysis__closure_arg,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_2,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_3,
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_4)
{
  {
    MR_Box transform_hlds__closure_analysis__closure = transform_hlds__closure_analysis__closure_arg;
    MR_Word transform_hlds__closure_analysis__conv2_Goal_10;
    MR_Word transform_hlds__closure_analysis__conv1_STATE_VARIABLE_ClosureInfo_132;

    {
      transform_hlds__closure_analysis__closure_analyse_goal_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_1), &transform_hlds__closure_analysis__conv2_Goal_10, ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_3), &transform_hlds__closure_analysis__conv1_STATE_VARIABLE_ClosureInfo_132);
    }
    *transform_hlds__closure_analysis__wrapper_arg_2 = ((MR_Box) (transform_hlds__closure_analysis__conv2_Goal_10));
    *transform_hlds__closure_analysis__wrapper_arg_4 = ((MR_Box) (transform_hlds__closure_analysis__conv1_STATE_VARIABLE_ClosureInfo_132));
  }
}

static MR_bool MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_1(
  MR_Box transform_hlds__closure_analysis__closure_arg,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__closure_analysis__succeeded;
    MR_Box transform_hlds__closure_analysis__closure = transform_hlds__closure_analysis__closure_arg;
    MR_Word transform_hlds__closure_analysis__conv0_LambdaHeadVar__2_137;

    {
      transform_hlds__closure_analysis__succeeded = transform_hlds__closure_analysis__IntroducedFrom__pred__closure_analyse_goal__381__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_1), &transform_hlds__closure_analysis__conv0_LambdaHeadVar__2_137);
    }
    if (transform_hlds__closure_analysis__succeeded)
      {
        *transform_hlds__closure_analysis__wrapper_arg_2 = ((MR_Box) (transform_hlds__closure_analysis__conv0_LambdaHeadVar__2_137));
        transform_hlds__closure_analysis__succeeded = MR_TRUE;
      }
    return transform_hlds__closure_analysis__succeeded;
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0(
  MR_Word transform_hlds__closure_analysis__VarTypes_7,
  MR_Word transform_hlds__closure_analysis__ModuleInfo_8,
  MR_Word transform_hlds__closure_analysis__Goal0_9,
  MR_Word * transform_hlds__closure_analysis__Goal_10,
  MR_Word transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131,
  MR_Word * transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_132)
{
  {
    MR_bool transform_hlds__closure_analysis__succeeded;
    MR_Word transform_hlds__closure_analysis__GoalExpr0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__Goal0_9, (MR_Integer) 0)));
    MR_Word transform_hlds__closure_analysis__GoalInfo0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__Goal0_9, (MR_Integer) 1)));

    switch (MR_tag((MR_Word) transform_hlds__closure_analysis__GoalExpr0_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word transform_hlds__closure_analysis__NegatedGoal0_97 = (MR_Word) MR_body(((MR_Word) transform_hlds__closure_analysis__GoalExpr0_12), (MR_Integer) 0);
          MR_Word transform_hlds__closure_analysis__NegatedGoal_98;
          MR_Word transform_hlds__closure_analysis__GoalExpr_223;
          MR_Word transform_hlds__closure_analysis__V_99_99;

          {
            transform_hlds__closure_analysis__closure_analyse_goal_6_p_0(transform_hlds__closure_analysis__VarTypes_7, transform_hlds__closure_analysis__ModuleInfo_8, transform_hlds__closure_analysis__NegatedGoal0_97, &transform_hlds__closure_analysis__NegatedGoal_98, transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131, &transform_hlds__closure_analysis__V_99_99);
          }
          transform_hlds__closure_analysis__GoalExpr_223 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__closure_analysis__NegatedGoal_98);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *transform_hlds__closure_analysis__Goal_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__closure_analysis__GoalExpr_223));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__closure_analysis__GoalInfo0_13));
          }
          *transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_132 = transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__closure_analysis__Unification_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 3)));
          MR_Word transform_hlds__closure_analysis__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 0)));
          MR_Word transform_hlds__closure_analysis__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 1)));
          MR_Word transform_hlds__closure_analysis__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 2)));
          MR_Word transform_hlds__closure_analysis__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 4)));

          switch (MR_tag((MR_Word) transform_hlds__closure_analysis__Unification_65)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word transform_hlds__closure_analysis__LHS_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__Unification_65, (MR_Integer) 0)));
                MR_Word transform_hlds__closure_analysis__RHS_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__Unification_65, (MR_Integer) 1)));
                MR_Word transform_hlds__closure_analysis__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__Unification_65, (MR_Integer) 2)));
                MR_Word transform_hlds__closure_analysis__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__Unification_65, (MR_Integer) 3)));
                MR_Word transform_hlds__closure_analysis__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__Unification_65, (MR_Integer) 4)));
                MR_Word transform_hlds__closure_analysis__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__Unification_65, (MR_Integer) 5)));
                MR_Word transform_hlds__closure_analysis__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__Unification_65, (MR_Integer) 6)));
                MR_Word transform_hlds__closure_analysis__ShroudedPPId_74;

                transform_hlds__closure_analysis__succeeded = ((((MR_tag((MR_Word) transform_hlds__closure_analysis__RHS_68)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__RHS_68, (MR_Integer) 0)))) == (MR_Integer) 4)));
                if (transform_hlds__closure_analysis__succeeded)
                  {
                    transform_hlds__closure_analysis__ShroudedPPId_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__RHS_68, (MR_Integer) 1)));
                    {
                      MR_Word transform_hlds__closure_analysis__PPId_76;
                      MR_Word transform_hlds__closure_analysis__HO_Value_77;
                      MR_Word transform_hlds__closure_analysis__V_156_156;

                      {
                        transform_hlds__closure_analysis__PPId_76 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(transform_hlds__closure_analysis__ShroudedPPId_74);
                      }
                      {
                        transform_hlds__closure_analysis__HO_Value_77 = mercury__set__make_singleton_set_1_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (transform_hlds__closure_analysis__PPId_76)));
                      }
                      {
                        transform_hlds__closure_analysis__V_156_156 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), transform_hlds__closure_analysis__V_156_156, 0) = ((MR_Box) (transform_hlds__closure_analysis__HO_Value_77));
                      }
                      {
                        mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__closure_analysis_scalar_common_1[1], (MR_Word) &transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0, ((MR_Box) (transform_hlds__closure_analysis__LHS_67)), ((MR_Box) (transform_hlds__closure_analysis__V_156_156)), transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131, transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_132);
                      }
                    }
                  }
                else
                  *transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_132 = transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word transform_hlds__closure_analysis__TypeInfo_274_274 = (MR_Word) &transform_hlds__closure_analysis_scalar_common_1[1];
                MR_Word transform_hlds__closure_analysis__Args_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__closure_analysis__Unification_65, (MR_Integer) 2)));
                MR_Word transform_hlds__closure_analysis__HO_Args_84;
                MR_Word transform_hlds__closure_analysis__V_153_153;
                MR_Word transform_hlds__closure_analysis__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__closure_analysis__Unification_65, (MR_Integer) 0)));
                MR_Word transform_hlds__closure_analysis__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__closure_analysis__Unification_65, (MR_Integer) 1)));
                MR_Word transform_hlds__closure_analysis__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__closure_analysis__Unification_65, (MR_Integer) 3)));
                MR_Word transform_hlds__closure_analysis__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__closure_analysis__Unification_65, (MR_Integer) 4)));
                MR_Word transform_hlds__closure_analysis__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__closure_analysis__Unification_65, (MR_Integer) 5)));
                MR_Box transform_hlds__closure_analysis__conv21_STATE_VARIABLE_ClosureInfo_132;

                {
                  transform_hlds__closure_analysis__V_153_153 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_153_153, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_4[0]));
                  MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_153_153, 1) = ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_12));
                  MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_153_153, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_153_153, 3) = ((MR_Box) (transform_hlds__closure_analysis__VarTypes_7));
                }
                {
                  transform_hlds__closure_analysis__HO_Args_84 = mercury__list__filter_2_f_0(transform_hlds__closure_analysis__TypeInfo_274_274, transform_hlds__closure_analysis__V_153_153, transform_hlds__closure_analysis__Args_80);
                }
                {
                  mercury__list__foldl_4_p_0(transform_hlds__closure_analysis__TypeInfo_274_274, (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[0], (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[11], transform_hlds__closure_analysis__HO_Args_84, ((MR_Box) (transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131)), &transform_hlds__closure_analysis__conv21_STATE_VARIABLE_ClosureInfo_132);
                }
                *transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_132 = ((MR_Word) transform_hlds__closure_analysis__conv21_STATE_VARIABLE_ClosureInfo_132);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word transform_hlds__closure_analysis__LHS_215 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__closure_analysis__Unification_65, (MR_Integer) 0)));
                MR_Word transform_hlds__closure_analysis__RHS_216 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__closure_analysis__Unification_65, (MR_Integer) 1)));

                {
                  transform_hlds__closure_analysis__succeeded = transform_hlds__closure_analysis__var_has_ho_type_2_p_0(transform_hlds__closure_analysis__VarTypes_7, transform_hlds__closure_analysis__LHS_215);
                }
                if (transform_hlds__closure_analysis__succeeded)
                  {
                    MR_Word transform_hlds__closure_analysis__TypeInfo_280_280;
                    MR_Word transform_hlds__closure_analysis__TypeCtorInfo_281_281;
                    MR_Word transform_hlds__closure_analysis__Values_212;
                    MR_Box transform_hlds__closure_analysis__conv19_Values_212;

                    {
                      transform_hlds__closure_analysis__succeeded = transform_hlds__closure_analysis__var_has_ho_type_2_p_0(transform_hlds__closure_analysis__VarTypes_7, transform_hlds__closure_analysis__RHS_216);
                    }
                    if (transform_hlds__closure_analysis__succeeded)
                      {
                      }
                    else
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.closure_analysis", (MR_String) "predicate \140transform_hlds.closure_analysis.closure_analyse_goal\'/6", (MR_String) "not a higher-order var");
                          return;
                        }
                      }
                    transform_hlds__closure_analysis__TypeInfo_280_280 = (MR_Word) &transform_hlds__closure_analysis_scalar_common_1[1];
                    transform_hlds__closure_analysis__TypeCtorInfo_281_281 = (MR_Word) &transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0;
                    {
                      transform_hlds__closure_analysis__conv19_Values_212 = mercury__map__lookup_2_f_0(transform_hlds__closure_analysis__TypeInfo_280_280, transform_hlds__closure_analysis__TypeCtorInfo_281_281, transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131, ((MR_Box) (transform_hlds__closure_analysis__RHS_216)));
                    }
                    transform_hlds__closure_analysis__Values_212 = ((MR_Word) transform_hlds__closure_analysis__conv19_Values_212);
                    {
                      mercury__map__det_insert_4_p_0(transform_hlds__closure_analysis__TypeInfo_280_280, transform_hlds__closure_analysis__TypeCtorInfo_281_281, ((MR_Box) (transform_hlds__closure_analysis__LHS_215)), ((MR_Box) (transform_hlds__closure_analysis__Values_212)), transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131, transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_132);
                    }
                  }
                else
                  *transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_132 = transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131;
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__Unification_65, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_132 = transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131;
                  break;
                case (MR_Integer) 1:
                  *transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_132 = transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131;
                  break;
              }
              break;
          }
          *transform_hlds__closure_analysis__Goal_10 = transform_hlds__closure_analysis__Goal0_9;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word transform_hlds__closure_analysis__TypeCtorInfo_239_239;
          MR_Word transform_hlds__closure_analysis__CallPredId_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 0)));
          MR_Integer transform_hlds__closure_analysis__CallProcId_19 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 1)));
          MR_Word transform_hlds__closure_analysis__CallArgs_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 2)));
          MR_Word transform_hlds__closure_analysis__CallProcInfo_25;
          MR_Word transform_hlds__closure_analysis__CallArgModes_26;
          MR_Word transform_hlds__closure_analysis__InputArgs_27;
          MR_Word transform_hlds__closure_analysis__OutputArgs_28;
          MR_Word transform_hlds__closure_analysis__AddValues_29;
          MR_Word transform_hlds__closure_analysis__Values_35;
          MR_Word transform_hlds__closure_analysis__GoalInfo_36;
          MR_Word transform_hlds__closure_analysis__V_174_174;
          MR_Word transform_hlds__closure_analysis__V_175_175;
          MR_Word transform_hlds__closure_analysis__V_182_182;
          MR_Word transform_hlds__closure_analysis__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 3)));
          MR_Word transform_hlds__closure_analysis__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 4)));
          MR_Word transform_hlds__closure_analysis__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 5)));
          MR_Word transform_hlds__closure_analysis___CallPredInfo_24;
          MR_Box transform_hlds__closure_analysis__conv13_Values_35;
          MR_Box transform_hlds__closure_analysis__conv15_STATE_VARIABLE_ClosureInfo_132;

          {
            hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__closure_analysis__ModuleInfo_8, transform_hlds__closure_analysis__CallPredId_18, transform_hlds__closure_analysis__CallProcId_19, &transform_hlds__closure_analysis___CallPredInfo_24, &transform_hlds__closure_analysis__CallProcInfo_25);
          }
          {
            hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__closure_analysis__CallProcInfo_25, &transform_hlds__closure_analysis__CallArgModes_26);
          }
          transform_hlds__closure_analysis__TypeCtorInfo_239_239 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
          {
            transform_hlds__closure_analysis__V_174_174 = parse_tree__set_of_var__init_0_f_0(transform_hlds__closure_analysis__TypeCtorInfo_239_239);
          }
          {
            transform_hlds__closure_analysis__V_175_175 = parse_tree__set_of_var__init_0_f_0(transform_hlds__closure_analysis__TypeCtorInfo_239_239);
          }
          {
            transform_hlds__closure_analysis__partition_arguments_8_p_0(transform_hlds__closure_analysis__ModuleInfo_8, transform_hlds__closure_analysis__VarTypes_7, transform_hlds__closure_analysis__CallArgs_20, transform_hlds__closure_analysis__CallArgModes_26, transform_hlds__closure_analysis__V_174_174, &transform_hlds__closure_analysis__InputArgs_27, transform_hlds__closure_analysis__V_175_175, &transform_hlds__closure_analysis__OutputArgs_28);
          }
          {
            transform_hlds__closure_analysis__AddValues_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__AddValues_29, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_7[0]));
            MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__AddValues_29, 1) = ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_8));
            MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__AddValues_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__AddValues_29, 3) = ((MR_Box) (transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131));
          }
          {
            transform_hlds__closure_analysis__V_182_182 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__closure_analysis_scalar_common_1[1], (MR_Word) &transform_hlds__closure_analysis_scalar_common_1[2]);
          }
          {
            parse_tree__set_of_var__fold_4_p_0(transform_hlds__closure_analysis__TypeCtorInfo_239_239, (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[1], transform_hlds__closure_analysis__AddValues_29, transform_hlds__closure_analysis__InputArgs_27, ((MR_Box) (transform_hlds__closure_analysis__V_182_182)), &transform_hlds__closure_analysis__conv13_Values_35);
          }
          transform_hlds__closure_analysis__Values_35 = ((MR_Word) transform_hlds__closure_analysis__conv13_Values_35);
          {
            hlds__hlds_goal__goal_info_set_ho_values_3_p_0(transform_hlds__closure_analysis__Values_35, transform_hlds__closure_analysis__GoalInfo0_13, &transform_hlds__closure_analysis__GoalInfo_36);
          }
          {
            parse_tree__set_of_var__fold_4_p_0(transform_hlds__closure_analysis__TypeCtorInfo_239_239, (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[0], (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[9], transform_hlds__closure_analysis__OutputArgs_28, ((MR_Box) (transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131)), &transform_hlds__closure_analysis__conv15_STATE_VARIABLE_ClosureInfo_132);
          }
          *transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_132 = ((MR_Word) transform_hlds__closure_analysis__conv15_STATE_VARIABLE_ClosureInfo_132);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *transform_hlds__closure_analysis__Goal_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__closure_analysis__GoalExpr0_12));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__closure_analysis__GoalInfo_36));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word transform_hlds__closure_analysis__TypeCtorInfo_251_251 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
              MR_Word transform_hlds__closure_analysis__Details_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 1)));
              MR_Word transform_hlds__closure_analysis__GCallArgs_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 2)));
              MR_Word transform_hlds__closure_analysis__GCallModes_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 3)));
              MR_Word transform_hlds__closure_analysis__InputArgs0_42;
              MR_Word transform_hlds__closure_analysis__V_163_163;
              MR_Word transform_hlds__closure_analysis__V_164_164;
              MR_Word transform_hlds__closure_analysis__V_171_171;
              MR_Word transform_hlds__closure_analysis__InputArgs_203;
              MR_Word transform_hlds__closure_analysis__OutputArgs_204;
              MR_Word transform_hlds__closure_analysis__AddValues_205;
              MR_Word transform_hlds__closure_analysis__Values_208;
              MR_Word transform_hlds__closure_analysis__GoalInfo_209;
              MR_Word transform_hlds__closure_analysis__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 4)));
              MR_Word transform_hlds__closure_analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 5)));
              MR_Word transform_hlds__closure_analysis__CalledClosure0_43;
              MR_Word transform_hlds__closure_analysis__V_44_44;
              MR_Word transform_hlds__closure_analysis__V_45_45;
              MR_Integer transform_hlds__closure_analysis__V_46_46;
              MR_Box transform_hlds__closure_analysis__conv8_Values_208;
              MR_Box transform_hlds__closure_analysis__conv10_STATE_VARIABLE_ClosureInfo_132;

              {
                transform_hlds__closure_analysis__V_163_163 = parse_tree__set_of_var__init_0_f_0(transform_hlds__closure_analysis__TypeCtorInfo_251_251);
              }
              {
                transform_hlds__closure_analysis__V_164_164 = parse_tree__set_of_var__init_0_f_0(transform_hlds__closure_analysis__TypeCtorInfo_251_251);
              }
              {
                transform_hlds__closure_analysis__partition_arguments_8_p_0(transform_hlds__closure_analysis__ModuleInfo_8, transform_hlds__closure_analysis__VarTypes_7, transform_hlds__closure_analysis__GCallArgs_38, transform_hlds__closure_analysis__GCallModes_39, transform_hlds__closure_analysis__V_163_163, &transform_hlds__closure_analysis__InputArgs0_42, transform_hlds__closure_analysis__V_164_164, &transform_hlds__closure_analysis__OutputArgs_204);
              }
              transform_hlds__closure_analysis__succeeded = ((MR_tag((MR_Word) transform_hlds__closure_analysis__Details_37)) == (MR_mktag((MR_Integer) 0)));
              if (transform_hlds__closure_analysis__succeeded)
                {
                  transform_hlds__closure_analysis__CalledClosure0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__Details_37, (MR_Integer) 0)));
                  transform_hlds__closure_analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__Details_37, (MR_Integer) 1)));
                  transform_hlds__closure_analysis__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__Details_37, (MR_Integer) 2)));
                  transform_hlds__closure_analysis__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__Details_37, (MR_Integer) 3)));
                  {
                    parse_tree__set_of_var__insert_3_p_0(transform_hlds__closure_analysis__TypeCtorInfo_251_251, transform_hlds__closure_analysis__CalledClosure0_43, transform_hlds__closure_analysis__InputArgs0_42, &transform_hlds__closure_analysis__InputArgs_203);
                  }
                }
              else
                transform_hlds__closure_analysis__InputArgs_203 = transform_hlds__closure_analysis__InputArgs0_42;
              {
                transform_hlds__closure_analysis__AddValues_205 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__AddValues_205, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_7[0]));
                MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__AddValues_205, 1) = ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_5));
                MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__AddValues_205, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__AddValues_205, 3) = ((MR_Box) (transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131));
              }
              {
                transform_hlds__closure_analysis__V_171_171 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__closure_analysis_scalar_common_1[1], (MR_Word) &transform_hlds__closure_analysis_scalar_common_1[2]);
              }
              {
                parse_tree__set_of_var__fold_4_p_0(transform_hlds__closure_analysis__TypeCtorInfo_251_251, (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[1], transform_hlds__closure_analysis__AddValues_205, transform_hlds__closure_analysis__InputArgs_203, ((MR_Box) (transform_hlds__closure_analysis__V_171_171)), &transform_hlds__closure_analysis__conv8_Values_208);
              }
              transform_hlds__closure_analysis__Values_208 = ((MR_Word) transform_hlds__closure_analysis__conv8_Values_208);
              {
                hlds__hlds_goal__goal_info_set_ho_values_3_p_0(transform_hlds__closure_analysis__Values_208, transform_hlds__closure_analysis__GoalInfo0_13, &transform_hlds__closure_analysis__GoalInfo_209);
              }
              {
                parse_tree__set_of_var__fold_4_p_0(transform_hlds__closure_analysis__TypeCtorInfo_251_251, (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[0], (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[7], transform_hlds__closure_analysis__OutputArgs_204, ((MR_Box) (transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131)), &transform_hlds__closure_analysis__conv10_STATE_VARIABLE_ClosureInfo_132);
              }
              *transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_132 = ((MR_Word) transform_hlds__closure_analysis__conv10_STATE_VARIABLE_ClosureInfo_132);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__closure_analysis__Goal_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__closure_analysis__GoalExpr0_12));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__closure_analysis__GoalInfo_209));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word transform_hlds__closure_analysis__ForeignHOArgs_121;
              MR_Word transform_hlds__closure_analysis__OutputForeignHOArgs_129;
              MR_Word transform_hlds__closure_analysis__Args_232 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 4)));
              MR_Word transform_hlds__closure_analysis__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 1)));
              MR_Word transform_hlds__closure_analysis__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 2)));
              MR_Integer transform_hlds__closure_analysis__V_117_117 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 3)));
              MR_Word transform_hlds__closure_analysis___ExtraArgs_118 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 5)));
              MR_Word transform_hlds__closure_analysis__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 6)));
              MR_Word transform_hlds__closure_analysis__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 7)));

              {
                transform_hlds__closure_analysis__ForeignHOArgs_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__ForeignHOArgs_121, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_5[1]));
                MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__ForeignHOArgs_121, 1) = ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_1));
                MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__ForeignHOArgs_121, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__ForeignHOArgs_121, 3) = ((MR_Box) (transform_hlds__closure_analysis__ModuleInfo_8));
              }
              {
                mercury__list__filter_map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[4], transform_hlds__closure_analysis__ForeignHOArgs_121, transform_hlds__closure_analysis__Args_232, &transform_hlds__closure_analysis__OutputForeignHOArgs_129);
              }
              {
                mercury__map__det_insert_from_assoc_list_3_p_0((MR_Word) &transform_hlds__closure_analysis_scalar_common_1[1], (MR_Word) &transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0, transform_hlds__closure_analysis__OutputForeignHOArgs_129, transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131, transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_132);
              }
              *transform_hlds__closure_analysis__Goal_10 = transform_hlds__closure_analysis__Goal0_9;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word transform_hlds__closure_analysis__TypeCtorInfo_237_237;
              MR_Word transform_hlds__closure_analysis__ConjType_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 1)));
              MR_Word transform_hlds__closure_analysis__Goals0_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 2)));
              MR_Word transform_hlds__closure_analysis__Goals_16;
              MR_Word transform_hlds__closure_analysis__GoalExpr_17;
              MR_Word transform_hlds__closure_analysis__V_185_185;
              MR_Box transform_hlds__closure_analysis__conv3_STATE_VARIABLE_ClosureInfo_132;

              {
                transform_hlds__closure_analysis__V_185_185 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_185_185, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_3[2]));
                MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_185_185, 1) = ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_2));
                MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_185_185, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_185_185, 3) = ((MR_Box) (transform_hlds__closure_analysis__VarTypes_7));
                MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_185_185, 4) = ((MR_Box) (transform_hlds__closure_analysis__ModuleInfo_8));
              }
              transform_hlds__closure_analysis__TypeCtorInfo_237_237 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
              {
                mercury__list__map_foldl_5_p_0(transform_hlds__closure_analysis__TypeCtorInfo_237_237, transform_hlds__closure_analysis__TypeCtorInfo_237_237, (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[0], transform_hlds__closure_analysis__V_185_185, transform_hlds__closure_analysis__Goals0_15, &transform_hlds__closure_analysis__Goals_16, ((MR_Box) (transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131)), &transform_hlds__closure_analysis__conv3_STATE_VARIABLE_ClosureInfo_132);
              }
              *transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_132 = ((MR_Word) transform_hlds__closure_analysis__conv3_STATE_VARIABLE_ClosureInfo_132);
              {
                transform_hlds__closure_analysis__GoalExpr_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr_17, 1) = ((MR_Box) (transform_hlds__closure_analysis__ConjType_14));
                MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr_17, 2) = ((MR_Box) (transform_hlds__closure_analysis__Goals_16));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__closure_analysis__Goal_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__closure_analysis__GoalExpr_17));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__closure_analysis__GoalInfo0_13));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word transform_hlds__closure_analysis__TypeCtorInfo_282_282;
              MR_Word transform_hlds__closure_analysis__TypeInfo_284_284;
              MR_Word transform_hlds__closure_analysis__ProcessDisjunct_90;
              MR_Word transform_hlds__closure_analysis__DisjunctsAndInfos_95;
              MR_Word transform_hlds__closure_analysis__DisjunctsInfo_96;
              MR_Word transform_hlds__closure_analysis__V_147_147;
              MR_Word transform_hlds__closure_analysis__Goals0_220 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 1)));
              MR_Word transform_hlds__closure_analysis__Goals_221;
              MR_Word transform_hlds__closure_analysis__GoalExpr_222;
              MR_Box transform_hlds__closure_analysis__conv6_STATE_VARIABLE_ClosureInfo_132;

              {
                transform_hlds__closure_analysis__ProcessDisjunct_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__ProcessDisjunct_90, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_6[0]));
                MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__ProcessDisjunct_90, 1) = ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_3));
                MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__ProcessDisjunct_90, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__ProcessDisjunct_90, 3) = ((MR_Box) (transform_hlds__closure_analysis__VarTypes_7));
                MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__ProcessDisjunct_90, 4) = ((MR_Box) (transform_hlds__closure_analysis__ModuleInfo_8));
                MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__ProcessDisjunct_90, 5) = ((MR_Box) (transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131));
              }
              transform_hlds__closure_analysis__TypeCtorInfo_282_282 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
              {
                transform_hlds__closure_analysis__DisjunctsAndInfos_95 = mercury__list__map_2_f_0(transform_hlds__closure_analysis__TypeCtorInfo_282_282, (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[3], transform_hlds__closure_analysis__ProcessDisjunct_90, transform_hlds__closure_analysis__Goals0_220);
              }
              transform_hlds__closure_analysis__TypeInfo_284_284 = (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[0];
              {
                mercury__assoc_list__keys_and_values_3_p_0(transform_hlds__closure_analysis__TypeCtorInfo_282_282, transform_hlds__closure_analysis__TypeInfo_284_284, transform_hlds__closure_analysis__DisjunctsAndInfos_95, &transform_hlds__closure_analysis__Goals_221, &transform_hlds__closure_analysis__DisjunctsInfo_96);
              }
              {
                transform_hlds__closure_analysis__V_147_147 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__closure_analysis_scalar_common_1[1], (MR_Word) &transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0);
              }
              {
                mercury__list__foldl_4_p_0(transform_hlds__closure_analysis__TypeInfo_284_284, transform_hlds__closure_analysis__TypeInfo_284_284, (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[6], transform_hlds__closure_analysis__DisjunctsInfo_96, ((MR_Box) (transform_hlds__closure_analysis__V_147_147)), &transform_hlds__closure_analysis__conv6_STATE_VARIABLE_ClosureInfo_132);
              }
              *transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_132 = ((MR_Word) transform_hlds__closure_analysis__conv6_STATE_VARIABLE_ClosureInfo_132);
              {
                transform_hlds__closure_analysis__GoalExpr_222 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr_222, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr_222, 1) = ((MR_Box) (transform_hlds__closure_analysis__Goals_221));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__closure_analysis__Goal_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__closure_analysis__GoalExpr_222));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__closure_analysis__GoalInfo0_13));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word transform_hlds__closure_analysis__TypeCtorInfo_263_263;
              MR_Word transform_hlds__closure_analysis__TypeInfo_265_265;
              MR_Word transform_hlds__closure_analysis__SwitchVar_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 1)));
              MR_Word transform_hlds__closure_analysis__SwitchCanFail_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 2)));
              MR_Word transform_hlds__closure_analysis__Cases0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 3)));
              MR_Word transform_hlds__closure_analysis__ProcessCase_51;
              MR_Word transform_hlds__closure_analysis__CasesAndInfos_59;
              MR_Word transform_hlds__closure_analysis__Cases_60;
              MR_Word transform_hlds__closure_analysis__CasesInfo_61;
              MR_Word transform_hlds__closure_analysis__V_161_161;
              MR_Word transform_hlds__closure_analysis__GoalExpr_211;
              MR_Box transform_hlds__closure_analysis__conv18_STATE_VARIABLE_ClosureInfo_132;

              {
                transform_hlds__closure_analysis__ProcessCase_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__ProcessCase_51, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_6[1]));
                MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__ProcessCase_51, 1) = ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_10));
                MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__ProcessCase_51, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__ProcessCase_51, 3) = ((MR_Box) (transform_hlds__closure_analysis__VarTypes_7));
                MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__ProcessCase_51, 4) = ((MR_Box) (transform_hlds__closure_analysis__ModuleInfo_8));
                MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__ProcessCase_51, 5) = ((MR_Box) (transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131));
              }
              transform_hlds__closure_analysis__TypeCtorInfo_263_263 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
              {
                transform_hlds__closure_analysis__CasesAndInfos_59 = mercury__list__map_2_f_0(transform_hlds__closure_analysis__TypeCtorInfo_263_263, (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[2], transform_hlds__closure_analysis__ProcessCase_51, transform_hlds__closure_analysis__Cases0_50);
              }
              transform_hlds__closure_analysis__TypeInfo_265_265 = (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[0];
              {
                mercury__assoc_list__keys_and_values_3_p_0(transform_hlds__closure_analysis__TypeCtorInfo_263_263, transform_hlds__closure_analysis__TypeInfo_265_265, transform_hlds__closure_analysis__CasesAndInfos_59, &transform_hlds__closure_analysis__Cases_60, &transform_hlds__closure_analysis__CasesInfo_61);
              }
              {
                transform_hlds__closure_analysis__V_161_161 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__closure_analysis_scalar_common_1[1], (MR_Word) &transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0);
              }
              {
                mercury__list__foldl_4_p_0(transform_hlds__closure_analysis__TypeInfo_265_265, transform_hlds__closure_analysis__TypeInfo_265_265, (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[10], transform_hlds__closure_analysis__CasesInfo_61, ((MR_Box) (transform_hlds__closure_analysis__V_161_161)), &transform_hlds__closure_analysis__conv18_STATE_VARIABLE_ClosureInfo_132);
              }
              *transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_132 = ((MR_Word) transform_hlds__closure_analysis__conv18_STATE_VARIABLE_ClosureInfo_132);
              {
                transform_hlds__closure_analysis__GoalExpr_211 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr_211, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr_211, 1) = ((MR_Box) (transform_hlds__closure_analysis__SwitchVar_48));
                MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr_211, 2) = ((MR_Box) (transform_hlds__closure_analysis__SwitchCanFail_49));
                MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr_211, 3) = ((MR_Box) (transform_hlds__closure_analysis__Cases_60));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__closure_analysis__Goal_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__closure_analysis__GoalExpr_211));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__closure_analysis__GoalInfo0_13));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word transform_hlds__closure_analysis__Reason_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 1)));
              MR_Word transform_hlds__closure_analysis__SubGoal0_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 2)));
              MR_Word transform_hlds__closure_analysis__SubGoal_104;
              MR_Word transform_hlds__closure_analysis__GoalExpr_224;
              MR_Word transform_hlds__closure_analysis__FGT_103;
              MR_Word transform_hlds__closure_analysis__V_102_102;

              transform_hlds__closure_analysis__succeeded = ((((MR_tag((MR_Word) transform_hlds__closure_analysis__Reason_100)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__Reason_100, (MR_Integer) 0)))) == (MR_Integer) 5)));
              if (transform_hlds__closure_analysis__succeeded)
                {
                  transform_hlds__closure_analysis__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__Reason_100, (MR_Integer) 1)));
                  transform_hlds__closure_analysis__FGT_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__Reason_100, (MR_Integer) 2)));
                  switch (transform_hlds__closure_analysis__FGT_103) {
                    default:
                      transform_hlds__closure_analysis__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 1:
                      transform_hlds__closure_analysis__succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 2:
                      transform_hlds__closure_analysis__succeeded = MR_TRUE;
                      break;
                  }
                }
              if (transform_hlds__closure_analysis__succeeded)
                {
                  transform_hlds__closure_analysis__SubGoal_104 = transform_hlds__closure_analysis__SubGoal0_101;
                  *transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_132 = transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131;
                }
              else
                {
                  transform_hlds__closure_analysis__closure_analyse_goal_6_p_0(transform_hlds__closure_analysis__VarTypes_7, transform_hlds__closure_analysis__ModuleInfo_8, transform_hlds__closure_analysis__SubGoal0_101, &transform_hlds__closure_analysis__SubGoal_104, transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131, transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_132);
                }
              {
                transform_hlds__closure_analysis__GoalExpr_224 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr_224, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr_224, 1) = ((MR_Box) (transform_hlds__closure_analysis__Reason_100));
                MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr_224, 2) = ((MR_Box) (transform_hlds__closure_analysis__SubGoal_104));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__closure_analysis__Goal_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__closure_analysis__GoalExpr_224));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__closure_analysis__GoalInfo0_13));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word transform_hlds__closure_analysis__ExistQVars_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 1)));
              MR_Word transform_hlds__closure_analysis__Cond0_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 2)));
              MR_Word transform_hlds__closure_analysis__Then0_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 3)));
              MR_Word transform_hlds__closure_analysis__Else0_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr0_12, (MR_Integer) 4)));
              MR_Word transform_hlds__closure_analysis__Cond_109;
              MR_Word transform_hlds__closure_analysis__CondInfo_110;
              MR_Word transform_hlds__closure_analysis__Then_111;
              MR_Word transform_hlds__closure_analysis__CondThenInfo_112;
              MR_Word transform_hlds__closure_analysis__Else_113;
              MR_Word transform_hlds__closure_analysis__ElseInfo_114;
              MR_Word transform_hlds__closure_analysis__GoalExpr_225;

              {
                transform_hlds__closure_analysis__closure_analyse_goal_6_p_0(transform_hlds__closure_analysis__VarTypes_7, transform_hlds__closure_analysis__ModuleInfo_8, transform_hlds__closure_analysis__Cond0_106, &transform_hlds__closure_analysis__Cond_109, transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131, &transform_hlds__closure_analysis__CondInfo_110);
              }
              {
                transform_hlds__closure_analysis__closure_analyse_goal_6_p_0(transform_hlds__closure_analysis__VarTypes_7, transform_hlds__closure_analysis__ModuleInfo_8, transform_hlds__closure_analysis__Then0_107, &transform_hlds__closure_analysis__Then_111, transform_hlds__closure_analysis__CondInfo_110, &transform_hlds__closure_analysis__CondThenInfo_112);
              }
              {
                transform_hlds__closure_analysis__closure_analyse_goal_6_p_0(transform_hlds__closure_analysis__VarTypes_7, transform_hlds__closure_analysis__ModuleInfo_8, transform_hlds__closure_analysis__Else0_108, &transform_hlds__closure_analysis__Else_113, transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_131, &transform_hlds__closure_analysis__ElseInfo_114);
              }
              {
                mercury__map__union_4_p_1((MR_Word) &transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0, (MR_Word) &transform_hlds__closure_analysis_scalar_common_1[1], (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[8], transform_hlds__closure_analysis__CondThenInfo_112, transform_hlds__closure_analysis__ElseInfo_114, transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_132);
              }
              {
                transform_hlds__closure_analysis__GoalExpr_225 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr_225, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr_225, 1) = ((MR_Box) (transform_hlds__closure_analysis__ExistQVars_105));
                MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr_225, 2) = ((MR_Box) (transform_hlds__closure_analysis__Cond_109));
                MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr_225, 3) = ((MR_Box) (transform_hlds__closure_analysis__Then_111));
                MR_hl_field(MR_mktag(3), transform_hlds__closure_analysis__GoalExpr_225, 4) = ((MR_Box) (transform_hlds__closure_analysis__Else_113));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__closure_analysis__Goal_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__closure_analysis__GoalExpr_225));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__closure_analysis__GoalInfo0_13));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.closure_analysis", (MR_String) "predicate \140transform_hlds.closure_analysis.closure_analyse_goal\'/6", (MR_String) "shorthand");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_proc_6_p_0_2(
  MR_Box transform_hlds__closure_analysis__closure_arg,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__closure_analysis__closure = transform_hlds__closure_analysis__closure_arg;
    MR_Word transform_hlds__closure_analysis__conv0_STATE_VARIABLE_ClosureInfo_7;

    {
      transform_hlds__closure_analysis__insert_unknown_3_p_0(((MR_Word) transform_hlds__closure_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_2), &transform_hlds__closure_analysis__conv0_STATE_VARIABLE_ClosureInfo_7);
    }
    *transform_hlds__closure_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__closure_analysis__conv0_STATE_VARIABLE_ClosureInfo_7));
  }
}

static MR_bool MR_CALL 
transform_hlds__closure_analysis__closure_analyse_proc_6_p_0_1(
  MR_Box transform_hlds__closure_analysis__closure_arg,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1)
{
  {
    MR_bool transform_hlds__closure_analysis__succeeded;
    MR_Box transform_hlds__closure_analysis__closure = transform_hlds__closure_analysis__closure_arg;

    {
      transform_hlds__closure_analysis__succeeded = transform_hlds__closure_analysis__var_has_ho_type_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_1));
    }
    return transform_hlds__closure_analysis__succeeded;
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_proc_6_p_0(
  MR_Word transform_hlds__closure_analysis__Debug_7,
  MR_Word transform_hlds__closure_analysis__PPId_8,
  MR_Word transform_hlds__closure_analysis__STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * transform_hlds__closure_analysis__STATE_VARIABLE_ModuleInfo_23)
{
  {
    MR_bool transform_hlds__closure_analysis__succeeded;
    MR_Word transform_hlds__closure_analysis__TypeCtorInfo_19_44;
    MR_Word transform_hlds__closure_analysis__PredInfo_11;
    MR_Word transform_hlds__closure_analysis__ProcInfo0_12;
    MR_Word transform_hlds__closure_analysis__HeadVars_13;
    MR_Word transform_hlds__closure_analysis__VarTypes_14;
    MR_Word transform_hlds__closure_analysis__ArgModes_15;
    MR_Word transform_hlds__closure_analysis__ClosureInfo0_16;
    MR_Word transform_hlds__closure_analysis__Body0_17;
    MR_Word transform_hlds__closure_analysis__Body_18;
    MR_Word transform_hlds__closure_analysis__ProcInfo_20;
    MR_Word transform_hlds__closure_analysis__Inputs0_36;
    MR_Word transform_hlds__closure_analysis__Inputs_38;
    MR_Word transform_hlds__closure_analysis__V_39_39;
    MR_Word transform_hlds__closure_analysis__V_40_40;
    MR_Word transform_hlds__closure_analysis__V_41_41;
    MR_Word transform_hlds__closure_analysis__V_43_43;
    MR_Word transform_hlds__closure_analysis___Outputs_37;
    MR_Box transform_hlds__closure_analysis__conv1_ClosureInfo0_16;
    MR_Word transform_hlds__closure_analysis___ClosureInfo_19;

    {
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__closure_analysis__STATE_VARIABLE_ModuleInfo_0_22, transform_hlds__closure_analysis__PPId_8, &transform_hlds__closure_analysis__PredInfo_11, &transform_hlds__closure_analysis__ProcInfo0_12);
    }
    {
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__closure_analysis__ProcInfo0_12, &transform_hlds__closure_analysis__HeadVars_13);
    }
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__closure_analysis__ProcInfo0_12, &transform_hlds__closure_analysis__VarTypes_14);
    }
    {
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__closure_analysis__ProcInfo0_12, &transform_hlds__closure_analysis__ArgModes_15);
    }
    transform_hlds__closure_analysis__TypeCtorInfo_19_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      transform_hlds__closure_analysis__V_39_39 = parse_tree__set_of_var__init_0_f_0(transform_hlds__closure_analysis__TypeCtorInfo_19_44);
    }
    {
      transform_hlds__closure_analysis__V_40_40 = parse_tree__set_of_var__init_0_f_0(transform_hlds__closure_analysis__TypeCtorInfo_19_44);
    }
    {
      transform_hlds__closure_analysis__partition_arguments_8_p_0(transform_hlds__closure_analysis__STATE_VARIABLE_ModuleInfo_0_22, transform_hlds__closure_analysis__VarTypes_14, transform_hlds__closure_analysis__HeadVars_13, transform_hlds__closure_analysis__ArgModes_15, transform_hlds__closure_analysis__V_39_39, &transform_hlds__closure_analysis__Inputs0_36, transform_hlds__closure_analysis__V_40_40, &transform_hlds__closure_analysis___Outputs_37);
    }
    {
      transform_hlds__closure_analysis__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_41_41, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_41_41, 1) = ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_proc_6_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_41_41, 3) = ((MR_Box) (transform_hlds__closure_analysis__VarTypes_14));
    }
    {
      transform_hlds__closure_analysis__Inputs_38 = parse_tree__set_of_var__filter_2_f_0(transform_hlds__closure_analysis__TypeCtorInfo_19_44, transform_hlds__closure_analysis__V_41_41, transform_hlds__closure_analysis__Inputs0_36);
    }
    {
      transform_hlds__closure_analysis__V_43_43 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__closure_analysis_scalar_common_1[1], (MR_Word) &transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0);
    }
    {
      parse_tree__set_of_var__fold_4_p_0(transform_hlds__closure_analysis__TypeCtorInfo_19_44, (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[0], (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[5], transform_hlds__closure_analysis__Inputs_38, ((MR_Box) (transform_hlds__closure_analysis__V_43_43)), &transform_hlds__closure_analysis__conv1_ClosureInfo0_16);
    }
    transform_hlds__closure_analysis__ClosureInfo0_16 = ((MR_Word) transform_hlds__closure_analysis__conv1_ClosureInfo0_16);
    {
      hlds__passes_aux__write_proc_progress_message_5_p_0((MR_String) "% Analysing closures in ", transform_hlds__closure_analysis__PPId_8, transform_hlds__closure_analysis__STATE_VARIABLE_ModuleInfo_0_22);
    }
    {
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__closure_analysis__ProcInfo0_12, &transform_hlds__closure_analysis__Body0_17);
    }
    {
      transform_hlds__closure_analysis__closure_analyse_goal_6_p_0(transform_hlds__closure_analysis__VarTypes_14, transform_hlds__closure_analysis__STATE_VARIABLE_ModuleInfo_0_22, transform_hlds__closure_analysis__Body0_17, &transform_hlds__closure_analysis__Body_18, transform_hlds__closure_analysis__ClosureInfo0_16, &transform_hlds__closure_analysis___ClosureInfo_19);
    }
    {
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__closure_analysis__Body_18, transform_hlds__closure_analysis__ProcInfo0_12, &transform_hlds__closure_analysis__ProcInfo_20);
    }
    switch (transform_hlds__closure_analysis__Debug_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__closure_analysis__Varset_21;
          MR_Word transform_hlds__closure_analysis__GoalExpr_57;
          MR_Word transform_hlds__closure_analysis__GoalInfo_58;

          {
            hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__closure_analysis__ProcInfo_20, &transform_hlds__closure_analysis__Varset_21);
          }
          transform_hlds__closure_analysis__GoalExpr_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__Body_18, (MR_Integer) 0)));
          transform_hlds__closure_analysis__GoalInfo_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__Body_18, (MR_Integer) 1)));
          {
            transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0(transform_hlds__closure_analysis__Varset_21, transform_hlds__closure_analysis__GoalExpr_57, transform_hlds__closure_analysis__GoalInfo_58);
          }
          {
            mercury__io__flush_output_2_p_0();
          }
        }
        break;
    }
    {
      hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(transform_hlds__closure_analysis__PPId_8, transform_hlds__closure_analysis__PredInfo_11, transform_hlds__closure_analysis__ProcInfo_20, transform_hlds__closure_analysis__STATE_VARIABLE_ModuleInfo_0_22, transform_hlds__closure_analysis__STATE_VARIABLE_ModuleInfo_23);
    }
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__insert_unknown_3_p_0(
  MR_Word transform_hlds__closure_analysis__Var_4,
  MR_Word transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_6,
  MR_Word * transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_7)
{
  {
    MR_bool transform_hlds__closure_analysis__succeeded;

    {
      mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__closure_analysis_scalar_common_1[1], (MR_Word) &transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0, ((MR_Box) (transform_hlds__closure_analysis__Var_4)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_0_6, transform_hlds__closure_analysis__STATE_VARIABLE_ClosureInfo_7);
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__closure_analysis__var_has_ho_type_2_p_0(
  MR_Word transform_hlds__closure_analysis__VarTypes_3,
  MR_Word transform_hlds__closure_analysis__Var_4)
{
  {
    MR_bool transform_hlds__closure_analysis__succeeded;
    MR_Word transform_hlds__closure_analysis__Type_5;

    {
      hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__closure_analysis__VarTypes_3, transform_hlds__closure_analysis__Var_4, &transform_hlds__closure_analysis__Type_5);
    }
    {
      transform_hlds__closure_analysis__succeeded = parse_tree__prog_type__type_is_higher_order_1_p_0(transform_hlds__closure_analysis__Type_5);
    }
    return transform_hlds__closure_analysis__succeeded;
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_scc_6_p_0_1(
  MR_Box transform_hlds__closure_analysis__closure_arg,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_4,
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_5)
{
  {
    MR_Box transform_hlds__closure_analysis__closure = transform_hlds__closure_analysis__closure_arg;
    MR_Word transform_hlds__closure_analysis__conv0_STATE_VARIABLE_ModuleInfo_23;

    {
      transform_hlds__closure_analysis__closure_analyse_proc_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_2), &transform_hlds__closure_analysis__conv0_STATE_VARIABLE_ModuleInfo_23);
    }
    *transform_hlds__closure_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__closure_analysis__conv0_STATE_VARIABLE_ModuleInfo_23));
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_scc_6_p_0(
  MR_Word transform_hlds__closure_analysis__Debug_7,
  MR_Word transform_hlds__closure_analysis__SCC_8,
  MR_Word transform_hlds__closure_analysis__STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * transform_hlds__closure_analysis__STATE_VARIABLE_ModuleInfo_12)
{
  {
    MR_bool transform_hlds__closure_analysis__succeeded;
    MR_Word transform_hlds__closure_analysis__V_15_15;
    MR_Box transform_hlds__closure_analysis__conv2_STATE_VARIABLE_ModuleInfo_12;
    MR_Box transform_hlds__closure_analysis__conv1_STATE_VARIABLE_IO_14;

    {
      transform_hlds__closure_analysis__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_15_15, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_15_15, 1) = ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_scc_6_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_15_15, 3) = ((MR_Box) (transform_hlds__closure_analysis__Debug_7));
    }
    {
      mercury__list__foldl2_6_p_2((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__closure_analysis__V_15_15, transform_hlds__closure_analysis__SCC_8, ((MR_Box) (transform_hlds__closure_analysis__STATE_VARIABLE_ModuleInfo_0_11)), &transform_hlds__closure_analysis__conv2_STATE_VARIABLE_ModuleInfo_12, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__closure_analysis__conv1_STATE_VARIABLE_IO_14);
    }
    *transform_hlds__closure_analysis__STATE_VARIABLE_ModuleInfo_12 = ((MR_Word) transform_hlds__closure_analysis__conv2_STATE_VARIABLE_ModuleInfo_12);
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_module_4_p_0_1(
  MR_Box transform_hlds__closure_analysis__closure_arg,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_1,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_3,
  MR_Box transform_hlds__closure_analysis__wrapper_arg_4,
  MR_Box * transform_hlds__closure_analysis__wrapper_arg_5)
{
  {
    MR_Box transform_hlds__closure_analysis__closure = transform_hlds__closure_analysis__closure_arg;
    MR_Word transform_hlds__closure_analysis__conv0_STATE_VARIABLE_ModuleInfo_12;

    {
      transform_hlds__closure_analysis__closure_analyse_scc_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__closure_analysis__wrapper_arg_2), &transform_hlds__closure_analysis__conv0_STATE_VARIABLE_ModuleInfo_12);
    }
    *transform_hlds__closure_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__closure_analysis__conv0_STATE_VARIABLE_ModuleInfo_12));
  }
}

void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_module_4_p_0(
  MR_Word transform_hlds__closure_analysis__STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * transform_hlds__closure_analysis__STATE_VARIABLE_ModuleInfo_12)
{
  {
    MR_bool transform_hlds__closure_analysis__succeeded;
    MR_Word transform_hlds__closure_analysis__Globals_7;
    MR_Word transform_hlds__closure_analysis__Debug_8;
    MR_Word transform_hlds__closure_analysis__DepInfo_9;
    MR_Word transform_hlds__closure_analysis__SCCs_10;
    MR_Word transform_hlds__closure_analysis__STATE_VARIABLE_ModuleInfo_16_16;
    MR_Word transform_hlds__closure_analysis__V_17_17;
    MR_Box transform_hlds__closure_analysis__conv2_STATE_VARIABLE_ModuleInfo_12;
    MR_Box transform_hlds__closure_analysis__conv1_STATE_VARIABLE_IO_14;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__closure_analysis__STATE_VARIABLE_ModuleInfo_0_11, &transform_hlds__closure_analysis__Globals_7);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__closure_analysis__Globals_7, (MR_Integer) 78, &transform_hlds__closure_analysis__Debug_8);
    }
    {
      transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_p_0(transform_hlds__closure_analysis__STATE_VARIABLE_ModuleInfo_0_11, &transform_hlds__closure_analysis__STATE_VARIABLE_ModuleInfo_16_16);
    }
    {
      hlds__hlds_module__module_info_dependency_info_2_p_0(transform_hlds__closure_analysis__STATE_VARIABLE_ModuleInfo_16_16, &transform_hlds__closure_analysis__DepInfo_9);
    }
    {
      hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__closure_analysis__DepInfo_9, &transform_hlds__closure_analysis__SCCs_10);
    }
    {
      transform_hlds__closure_analysis__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_17_17, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_17_17, 1) = ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_module_4_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__closure_analysis__V_17_17, 3) = ((MR_Box) (transform_hlds__closure_analysis__Debug_8));
    }
    {
      mercury__list__foldl2_6_p_2((MR_Word) &transform_hlds__closure_analysis_scalar_common_1[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__closure_analysis__V_17_17, transform_hlds__closure_analysis__SCCs_10, ((MR_Box) (transform_hlds__closure_analysis__STATE_VARIABLE_ModuleInfo_16_16)), &transform_hlds__closure_analysis__conv2_STATE_VARIABLE_ModuleInfo_12, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__closure_analysis__conv1_STATE_VARIABLE_IO_14);
    }
    *transform_hlds__closure_analysis__STATE_VARIABLE_ModuleInfo_12 = ((MR_Word) transform_hlds__closure_analysis__conv2_STATE_VARIABLE_ModuleInfo_12);
  }
}

void mercury__transform_hlds__closure_analysis__init(void)
{
}

void mercury__transform_hlds__closure_analysis__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_info_0);
	MR_register_type_ctor_info(&transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0);
}

void mercury__transform_hlds__closure_analysis__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.closure_analysis. */
