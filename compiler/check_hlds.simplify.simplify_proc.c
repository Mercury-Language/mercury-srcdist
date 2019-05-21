/*
** Automatically generated from `simplify_proc.m'
** by the Mercury compiler,
** version rotd-2017-08-07
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


/* :- module check_hlds.simplify.simplify_proc. */
/* :- implementation. */

/*
INIT mercury__check_hlds__simplify__simplify_proc__init
ENDINIT
*/

#include "check_hlds.simplify.simplify_proc.mih"


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
#include "check_hlds.det_analysis.mih"
#include "check_hlds.det_report.mih"
#include "check_hlds.det_util.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.simplify.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
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
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
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
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.common.mih"
#include "check_hlds.simplify.format_call.mih"
#include "check_hlds.simplify.simplify_goal.mih"
#include "check_hlds.simplify.simplify_info.mih"
#include "check_hlds.simplify.simplify_tasks.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_proc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static void MR_CALL 
check_hlds__simplify__simplify_proc__IntroducedFrom__pred__simplify_proc_return_msgs__286__1_4_p_0(
  MR_Word check_hlds__simplify__simplify_proc__HeadVar__1_121,
  MR_String check_hlds__simplify__simplify_proc__HeadVar__2_122,
  MR_Word check_hlds__simplify__simplify_proc__HeadVar__3_123,
  MR_Word * check_hlds__simplify__simplify_proc__HeadVar__4_124);

static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_return_msgs_8_p_0_1(
  MR_Box check_hlds__simplify__simplify_proc__closure_arg,
  MR_Box check_hlds__simplify__simplify_proc__wrapper_arg_1,
  MR_Box check_hlds__simplify__simplify_proc__wrapper_arg_2,
  MR_Box check_hlds__simplify__simplify_proc__wrapper_arg_3,
  MR_Box * check_hlds__simplify__simplify_proc__wrapper_arg_4);

static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_return_msgs_8_p_0(
  MR_Word check_hlds__simplify__simplify_proc__SimplifyTasks0_9,
  MR_Word check_hlds__simplify__simplify_proc__PredId_10,
  MR_Integer check_hlds__simplify__simplify_proc__ProcId_11,
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_0_47,
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_48,
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_0_49,
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_50,
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_51);

static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_top_level_goal_6_p_0(
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_0_15,
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_16,
  MR_Word check_hlds__simplify__simplify_proc__NestedContext0_8,
  MR_Word check_hlds__simplify__simplify_proc__InstMap0_9,
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_0_17,
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_18);

static void MR_CALL 
check_hlds__simplify__simplify_proc__case_list_contains_trace_acc_4_p_0(
  MR_Word check_hlds__simplify__simplify_proc__HeadVar__1_1,
  MR_Word * check_hlds__simplify__simplify_proc__HeadVar__2_2,
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ContainsTrace_0_3,
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_ContainsTrace_4);

static void MR_CALL 
check_hlds__simplify__simplify_proc__goal_list_contains_trace_acc_4_p_0(
  MR_Word check_hlds__simplify__simplify_proc__HeadVar__1_1,
  MR_Word * check_hlds__simplify__simplify_proc__HeadVar__2_2,
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ContainsTrace_0_3,
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_ContainsTrace_4);

static void MR_CALL 
check_hlds__simplify__simplify_proc__goal_contains_trace_3_p_0(
  MR_Word check_hlds__simplify__simplify_proc__Goal0_4,
  MR_Word * check_hlds__simplify__simplify_proc__Goal_5,
  MR_Word * check_hlds__simplify__simplify_proc__ContainsTrace_6);

static void MR_CALL 
check_hlds__simplify__simplify_proc__do_process_top_level_goal_6_p_0(
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_0_32,
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_33,
  MR_Word check_hlds__simplify__simplify_proc__NestedContext0_8,
  MR_Word check_hlds__simplify__simplify_proc__InstMap0_9,
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_0_34,
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_35);

static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_maybe_warn_about_duplicates_5_p_0(
  MR_Word check_hlds__simplify__simplify_proc__ModuleInfo_6,
  MR_Word check_hlds__simplify__simplify_proc__PredId_7,
  MR_Word check_hlds__simplify__simplify_proc__ProcInfo_8,
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_0_29,
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_30);

static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_analyze_and_format_calls_8_p_0(
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_32,
  MR_Word check_hlds__simplify__simplify_proc__ImplicitStreamWarnings_10,
  MR_Word check_hlds__simplify__simplify_proc__PredId_11,
  MR_Integer check_hlds__simplify__simplify_proc__ProcId_12,
  MR_Word * check_hlds__simplify__simplify_proc__FormatSpecs_13,
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_0_33,
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_34);

static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_maybe_mark_modecheck_clauses_2_p_0(
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_0_13,
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_14);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_maybe_vary_parameters_5_p_0_1(
  MR_Box check_hlds__simplify__simplify_proc__closure_arg,
  MR_Box check_hlds__simplify__simplify_proc__wrapper_arg_1,
  MR_Box * check_hlds__simplify__simplify_proc__wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_maybe_vary_parameters_5_p_0(
  MR_Word check_hlds__simplify__simplify_proc__ModuleInfo_6,
  MR_Word check_hlds__simplify__simplify_proc__PredId_7,
  MR_Word check_hlds__simplify__simplify_proc__ProcInfo_8,
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_0_17,
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_18);


static /* final */ const MR_Box check_hlds__simplify__simplify_proc_scalar_common_1[21][2];

static /* final */ const MR_Box check_hlds__simplify__simplify_proc_scalar_common_2[1][5];

static /* final */ const MR_Box check_hlds__simplify__simplify_proc_scalar_common_3[3][3];

static /* final */ const MR_Box check_hlds__simplify__simplify_proc_scalar_common_4[4][1];

static /* final */ const MR_Box check_hlds__simplify__simplify_proc_scalar_common_5[1][7];


/* sealed */ struct check_hlds__simplify__simplify_proc__vector_common_type_6_0_s {
  const MR_String check_hlds__simplify__simplify_proc__vector_common_type_6_0__vct_6_f_0;
  const MR_Integer check_hlds__simplify__simplify_proc__vector_common_type_6_0__vct_6_f_1;
};

static /* final */ const struct check_hlds__simplify__simplify_proc__vector_common_type_6_0_s check_hlds__simplify__simplify_proc_vector_common_6[7];

/* sealed */ struct check_hlds__simplify__simplify_proc__vector_common_type_7_0_s {
  const MR_String check_hlds__simplify__simplify_proc__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct check_hlds__simplify__simplify_proc__vector_common_type_7_0_s check_hlds__simplify__simplify_proc_vector_common_7[9];



static /* final */ const MR_Box check_hlds__simplify__simplify_proc_scalar_common_1[21][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__simplify__simplify_proc_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "pragma on the predicate."))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_proc_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "no_inline"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_proc_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_proc_scalar_common_1[4])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "attribute on the foreign_proc contradicts the"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_proc_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_proc_scalar_common_1[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "may_duplicate"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_proc_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_proc_scalar_common_1[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_proc_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_proc_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "inline"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_proc_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_proc_scalar_common_1[4])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_proc_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_proc_scalar_common_1[14])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "may_not_duplicate"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_proc_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_proc_scalar_common_1[15])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_proc_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_proc_scalar_common_1[17])))
  },
  /* row 19 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_proc_scalar_common_4[0])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 20 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_proc_scalar_common_4[2])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_proc_scalar_common_2[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_proc_scalar_common_3[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_proc_scalar_common_2[0])),
    ((MR_Box) (check_hlds__simplify__simplify_proc__simplify_proc_maybe_vary_parameters_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_proc_scalar_common_5[0])),
    ((MR_Box) (check_hlds__simplify__simplify_proc__simplify_proc_return_msgs_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_proc_scalar_common_4[4][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_proc_scalar_common_1[12])))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_proc_scalar_common_1[18])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_proc_scalar_common_5[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__simplify__simplify_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&check_hlds__simplify__simplify_proc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__simplify__simplify_proc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};


static /* final */ const struct check_hlds__simplify__simplify_proc__vector_common_type_6_0_s check_hlds__simplify__simplify_proc_vector_common_6[7] = {
  /* row 0 */
  {
    (MR_String) "int",
    (MR_Integer) 0
  },
  /* row 1 */
  {
    (MR_String) "io",
    (MR_Integer) 1
  },
  /* row 2 */
  {
    (MR_String) "private_builtin",
    (MR_Integer) 2
  },
  /* row 3 */
  {
    (MR_String) "stream",
    (MR_Integer) 3
  },
  /* row 4 */
  {
    (MR_String) "string",
    (MR_Integer) 4
  },
  /* row 5 */
  {
    (MR_String) "string.format",
    (MR_Integer) 5
  },
  /* row 6 */
  {
    (MR_String) "table_builtin",
    (MR_Integer) 6
  },
};

static /* final */ const struct check_hlds__simplify__simplify_proc__vector_common_type_7_0_s check_hlds__simplify__simplify_proc_vector_common_7[9] = {
  /* row 0 */   {     (MR_String) "++" },
  /* row 1 */   {     (MR_String) "char_to_string" },
  /* row 2 */   {     (MR_String) "float_to_string" },
  /* row 3 */   {     (MR_String) "int_to_string" },
  /* row 4 */   {     (MR_String) "*" },
  /* row 5 */   {     (MR_String) "unchecked_left_shift" },
  /* row 6 */   {     (MR_String) "unchecked_quotient" },
  /* row 7 */   {     (MR_String) "unchecked_rem" },
  /* row 8 */   {     (MR_String) "unchecked_right_shift" },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_proc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static void MR_CALL 
check_hlds__simplify__simplify_proc__IntroducedFrom__pred__simplify_proc_return_msgs__286__1_4_p_0(
  MR_Word check_hlds__simplify__simplify_proc__HeadVar__1_121,
  MR_String check_hlds__simplify__simplify_proc__HeadVar__2_122,
  MR_Word check_hlds__simplify__simplify_proc__HeadVar__3_123,
  MR_Word * check_hlds__simplify__simplify_proc__HeadVar__4_124)
{
  {
    mercury__varset__name_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__simplify_proc__HeadVar__1_121, check_hlds__simplify__simplify_proc__HeadVar__2_122, check_hlds__simplify__simplify_proc__HeadVar__3_123, check_hlds__simplify__simplify_proc__HeadVar__4_124);
  }
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_proc__simplify_may_introduce_calls_3_p_0(
  MR_String check_hlds__simplify__simplify_proc__ModuleName_4,
  MR_String check_hlds__simplify__simplify_proc__PredName_5,
  MR_Integer check_hlds__simplify__simplify_proc___Arity_6)
{
  {
    MR_bool check_hlds__simplify__simplify_proc__succeeded;

    check_hlds__simplify__simplify_proc__succeeded = check_hlds__simplify__simplify_proc__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_p_0(check_hlds__simplify__simplify_proc__ModuleName_4, check_hlds__simplify__simplify_proc__PredName_5);
    return check_hlds__simplify__simplify_proc__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_proc__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_p_0(
  MR_String check_hlds__simplify__simplify_proc__ModuleName_4,
  MR_String check_hlds__simplify__simplify_proc__PredName_5)
{
  {
    MR_bool check_hlds__simplify__simplify_proc__succeeded;
    MR_Integer check_hlds__simplify__simplify_proc__lo_0;
    MR_Integer check_hlds__simplify__simplify_proc__hi_1;
    MR_Integer check_hlds__simplify__simplify_proc__mid_2;
    MR_Integer check_hlds__simplify__simplify_proc__result_3;

    /* binary string jump switch */
    check_hlds__simplify__simplify_proc__lo_0 = (MR_Integer) 0;
    check_hlds__simplify__simplify_proc__hi_1 = (MR_Integer) 6;
    do
    {
      check_hlds__simplify__simplify_proc__mid_2 = (((check_hlds__simplify__simplify_proc__lo_0 + check_hlds__simplify__simplify_proc__hi_1)) / (MR_Integer) 2);
      check_hlds__simplify__simplify_proc__result_3 = MR_strcmp(check_hlds__simplify__simplify_proc__ModuleName_4, ((&check_hlds__simplify__simplify_proc_vector_common_6[0 + check_hlds__simplify__simplify_proc__mid_2]))->check_hlds__simplify__simplify_proc__vector_common_type_6_0__vct_6_f_0);
      if ((check_hlds__simplify__simplify_proc__result_3 == (MR_Integer) 0))
      {
        switch (((&check_hlds__simplify__simplify_proc_vector_common_6[0 + check_hlds__simplify__simplify_proc__mid_2]))->check_hlds__simplify__simplify_proc__vector_common_type_6_0__vct_6_f_1) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              /* case "int" */
              {
                MR_Integer check_hlds__simplify__simplify_proc__lo_10;
                MR_Integer check_hlds__simplify__simplify_proc__hi_11;
                MR_Integer check_hlds__simplify__simplify_proc__mid_12;
                MR_Integer check_hlds__simplify__simplify_proc__result_13;

                /* binary string simple lookup switch */
                check_hlds__simplify__simplify_proc__lo_10 = (MR_Integer) 0;
                check_hlds__simplify__simplify_proc__hi_11 = (MR_Integer) 4;
                do
                {
                  check_hlds__simplify__simplify_proc__mid_12 = (((check_hlds__simplify__simplify_proc__lo_10 + check_hlds__simplify__simplify_proc__hi_11)) / (MR_Integer) 2);
                  check_hlds__simplify__simplify_proc__result_13 = MR_strcmp(check_hlds__simplify__simplify_proc__PredName_5, ((&check_hlds__simplify__simplify_proc_vector_common_7[4 + check_hlds__simplify__simplify_proc__mid_12]))->check_hlds__simplify__simplify_proc__vector_common_type_7_0__vct_7_f_0);
                  if ((check_hlds__simplify__simplify_proc__result_13 == (MR_Integer) 0))
                  {
                    check_hlds__simplify__simplify_proc__succeeded = MR_TRUE;
                    /* jump out of search loop */
                    goto label_1;
                  }
                  else
                  if ((check_hlds__simplify__simplify_proc__result_13 < (MR_Integer) 0))
                    check_hlds__simplify__simplify_proc__hi_11 = (check_hlds__simplify__simplify_proc__mid_12 - (MR_Integer) 1);
                  else
                    check_hlds__simplify__simplify_proc__lo_10 = (check_hlds__simplify__simplify_proc__mid_12 + (MR_Integer) 1);
                }
                while ((check_hlds__simplify__simplify_proc__lo_10 <= check_hlds__simplify__simplify_proc__hi_11));
                check_hlds__simplify__simplify_proc__succeeded = MR_FALSE;
              label_1:;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              /* case "io" */
              check_hlds__simplify__simplify_proc__succeeded = (strcmp(check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "write_string") == 0);
            }
            break;
          case (MR_Integer) 2:
            {
              /* case "private_builtin" */
              if ((strcmp(check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "state_var_copy") == 0))
                check_hlds__simplify__simplify_proc__succeeded = MR_TRUE;
              else
              if ((strcmp(check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "builtin_compound_eq") == 0))
                check_hlds__simplify__simplify_proc__succeeded = MR_TRUE;
              else
              if ((strcmp(check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "builtin_compound_lt") == 0))
                check_hlds__simplify__simplify_proc__succeeded = MR_TRUE;
              else
                check_hlds__simplify__simplify_proc__succeeded = MR_FALSE;
            }
            break;
          case (MR_Integer) 3:
            {
              /* case "stream" */
              check_hlds__simplify__simplify_proc__succeeded = (strcmp(check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "put") == 0);
            }
            break;
          case (MR_Integer) 4:
            {
              /* case "string" */
              {
                MR_Integer check_hlds__simplify__simplify_proc__lo_6;
                MR_Integer check_hlds__simplify__simplify_proc__hi_7;
                MR_Integer check_hlds__simplify__simplify_proc__mid_8;
                MR_Integer check_hlds__simplify__simplify_proc__result_9;

                /* binary string simple lookup switch */
                check_hlds__simplify__simplify_proc__lo_6 = (MR_Integer) 0;
                check_hlds__simplify__simplify_proc__hi_7 = (MR_Integer) 3;
                do
                {
                  check_hlds__simplify__simplify_proc__mid_8 = (((check_hlds__simplify__simplify_proc__lo_6 + check_hlds__simplify__simplify_proc__hi_7)) / (MR_Integer) 2);
                  check_hlds__simplify__simplify_proc__result_9 = MR_strcmp(check_hlds__simplify__simplify_proc__PredName_5, ((&check_hlds__simplify__simplify_proc_vector_common_7[0 + check_hlds__simplify__simplify_proc__mid_8]))->check_hlds__simplify__simplify_proc__vector_common_type_7_0__vct_7_f_0);
                  if ((check_hlds__simplify__simplify_proc__result_9 == (MR_Integer) 0))
                  {
                    check_hlds__simplify__simplify_proc__succeeded = MR_TRUE;
                    /* jump out of search loop */
                    goto label_0;
                  }
                  else
                  if ((check_hlds__simplify__simplify_proc__result_9 < (MR_Integer) 0))
                    check_hlds__simplify__simplify_proc__hi_7 = (check_hlds__simplify__simplify_proc__mid_8 - (MR_Integer) 1);
                  else
                    check_hlds__simplify__simplify_proc__lo_6 = (check_hlds__simplify__simplify_proc__mid_8 + (MR_Integer) 1);
                }
                while ((check_hlds__simplify__simplify_proc__lo_6 <= check_hlds__simplify__simplify_proc__hi_7));
                check_hlds__simplify__simplify_proc__succeeded = MR_FALSE;
              label_0:;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              /* case "string.format" */
              {
                MR_Integer check_hlds__simplify__simplify_proc__case_num_5 = (MR_Integer) -1;

                if (((((((((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 0)) == (MR_Integer) 102)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 1)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 2)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 3)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 4)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 5)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 6)) == (MR_Integer) 95))))
                  switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 7)) {
                    case (MR_Integer) 99:
                      if (((((((((((((((((((((((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 8)) == (MR_Integer) 104)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 9)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 10)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 11)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 12)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 13)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 14)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 15)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 16)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 17)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 18)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 19)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 20)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 21)) == (MR_Integer) 95))))
                        switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 22)) {
                          case (MR_Integer) 110:
                            if (MR_offset_streq(23, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "format_char_component_nowidth"))
                              check_hlds__simplify__simplify_proc__case_num_5 = (MR_Integer) 0;
                            break;
                          case (MR_Integer) 119:
                            if (MR_offset_streq(23, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "format_char_component_width"))
                              check_hlds__simplify__simplify_proc__case_num_5 = (MR_Integer) 1;
                            break;
                        }
                      break;
                    case (MR_Integer) 102:
                      if (((((((((((((((((((((((((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 8)) == (MR_Integer) 108)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 9)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 10)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 11)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 12)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 13)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 14)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 15)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 16)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 17)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 18)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 19)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 20)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 21)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 22)) == (MR_Integer) 95))))
                        switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 23)) {
                          case (MR_Integer) 110:
                            if (((((((((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 24)) == (MR_Integer) 111)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 25)) == (MR_Integer) 119)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 26)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 27)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 28)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 29)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 30)) == (MR_Integer) 95))))
                              switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 31)) {
                                case (MR_Integer) 110:
                                  if (MR_offset_streq(32, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "format_float_component_nowidth_noprec"))
                                    check_hlds__simplify__simplify_proc__case_num_5 = (MR_Integer) 2;
                                  break;
                                case (MR_Integer) 112:
                                  if (MR_offset_streq(32, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "format_float_component_nowidth_prec"))
                                    check_hlds__simplify__simplify_proc__case_num_5 = (MR_Integer) 3;
                                  break;
                              }
                            break;
                          case (MR_Integer) 119:
                            if (((((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 24)) == (MR_Integer) 105)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 25)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 26)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 27)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 28)) == (MR_Integer) 95))))
                              switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 29)) {
                                case (MR_Integer) 110:
                                  if (MR_offset_streq(30, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "format_float_component_width_noprec"))
                                    check_hlds__simplify__simplify_proc__case_num_5 = (MR_Integer) 4;
                                  break;
                                case (MR_Integer) 112:
                                  if (MR_offset_streq(30, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "format_float_component_width_prec"))
                                    check_hlds__simplify__simplify_proc__case_num_5 = (MR_Integer) 5;
                                  break;
                              }
                            break;
                        }
                      break;
                    case (MR_Integer) 115:
                      switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 8)) {
                        case (MR_Integer) 105:
                          if (((((((((((((((((((((((((((((((((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 9)) == (MR_Integer) 103)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 10)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 11)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 12)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 13)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 14)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 15)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 16)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 17)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 18)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 19)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 20)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 21)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 22)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 23)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 24)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 25)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 26)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 27)) == (MR_Integer) 95))))
                            switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 28)) {
                              case (MR_Integer) 110:
                                if (((((((((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 29)) == (MR_Integer) 111)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 30)) == (MR_Integer) 119)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 31)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 32)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 33)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 34)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 35)) == (MR_Integer) 95))))
                                  switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 36)) {
                                    case (MR_Integer) 110:
                                      if (MR_offset_streq(37, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "format_signed_int_component_nowidth_noprec"))
                                        check_hlds__simplify__simplify_proc__case_num_5 = (MR_Integer) 6;
                                      break;
                                    case (MR_Integer) 112:
                                      if (MR_offset_streq(37, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "format_signed_int_component_nowidth_prec"))
                                        check_hlds__simplify__simplify_proc__case_num_5 = (MR_Integer) 7;
                                      break;
                                  }
                                break;
                              case (MR_Integer) 119:
                                if (((((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 29)) == (MR_Integer) 105)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 30)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 31)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 32)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 33)) == (MR_Integer) 95))))
                                  switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 34)) {
                                    case (MR_Integer) 110:
                                      if (MR_offset_streq(35, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "format_signed_int_component_width_noprec"))
                                        check_hlds__simplify__simplify_proc__case_num_5 = (MR_Integer) 8;
                                      break;
                                    case (MR_Integer) 112:
                                      if (MR_offset_streq(35, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "format_signed_int_component_width_prec"))
                                        check_hlds__simplify__simplify_proc__case_num_5 = (MR_Integer) 9;
                                      break;
                                  }
                                break;
                            }
                          break;
                        case (MR_Integer) 116:
                          if (((((((((((((((((((((((((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 9)) == (MR_Integer) 114)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 10)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 11)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 12)) == (MR_Integer) 103)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 13)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 14)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 15)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 16)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 17)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 18)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 19)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 20)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 21)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 22)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 23)) == (MR_Integer) 95))))
                            switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 24)) {
                              case (MR_Integer) 110:
                                if (((((((((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 25)) == (MR_Integer) 111)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 26)) == (MR_Integer) 119)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 27)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 28)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 29)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 30)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 31)) == (MR_Integer) 95))))
                                  switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 32)) {
                                    case (MR_Integer) 110:
                                      if (MR_offset_streq(33, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "format_string_component_nowidth_noprec"))
                                        check_hlds__simplify__simplify_proc__case_num_5 = (MR_Integer) 10;
                                      break;
                                    case (MR_Integer) 112:
                                      if (MR_offset_streq(33, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "format_string_component_nowidth_prec"))
                                        check_hlds__simplify__simplify_proc__case_num_5 = (MR_Integer) 11;
                                      break;
                                  }
                                break;
                              case (MR_Integer) 119:
                                if (((((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 25)) == (MR_Integer) 105)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 26)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 27)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 28)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 29)) == (MR_Integer) 95))))
                                  switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 30)) {
                                    case (MR_Integer) 110:
                                      if (MR_offset_streq(31, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "format_string_component_width_noprec"))
                                        check_hlds__simplify__simplify_proc__case_num_5 = (MR_Integer) 12;
                                      break;
                                    case (MR_Integer) 112:
                                      if (MR_offset_streq(31, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "format_string_component_width_prec"))
                                        check_hlds__simplify__simplify_proc__case_num_5 = (MR_Integer) 13;
                                      break;
                                  }
                                break;
                            }
                          break;
                      }
                      break;
                    case (MR_Integer) 117:
                      if (((((((((((((((((((((((((((((((((((((((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 8)) == (MR_Integer) 110)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 9)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 10)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 11)) == (MR_Integer) 103)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 12)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 13)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 14)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 15)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 16)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 17)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 18)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 19)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 20)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 21)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 22)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 23)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 24)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 25)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 26)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 27)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 28)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 29)) == (MR_Integer) 95))))
                        switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 30)) {
                          case (MR_Integer) 110:
                            if (((((((((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 31)) == (MR_Integer) 111)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 32)) == (MR_Integer) 119)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 33)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 34)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 35)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 36)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 37)) == (MR_Integer) 95))))
                              switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 38)) {
                                case (MR_Integer) 110:
                                  if (MR_offset_streq(39, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "format_unsigned_int_component_nowidth_noprec"))
                                    check_hlds__simplify__simplify_proc__case_num_5 = (MR_Integer) 14;
                                  break;
                                case (MR_Integer) 112:
                                  if (MR_offset_streq(39, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "format_unsigned_int_component_nowidth_prec"))
                                    check_hlds__simplify__simplify_proc__case_num_5 = (MR_Integer) 15;
                                  break;
                              }
                            break;
                          case (MR_Integer) 119:
                            if (((((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 31)) == (MR_Integer) 105)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 32)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 33)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 34)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 35)) == (MR_Integer) 95))))
                              switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 36)) {
                                case (MR_Integer) 110:
                                  if (MR_offset_streq(37, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "format_unsigned_int_component_width_noprec"))
                                    check_hlds__simplify__simplify_proc__case_num_5 = (MR_Integer) 16;
                                  break;
                                case (MR_Integer) 112:
                                  if (MR_offset_streq(37, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "format_unsigned_int_component_width_prec"))
                                    check_hlds__simplify__simplify_proc__case_num_5 = (MR_Integer) 17;
                                  break;
                              }
                            break;
                        }
                      break;
                  }
                if ((check_hlds__simplify__simplify_proc__case_num_5 < (MR_Integer) 0))
                  check_hlds__simplify__simplify_proc__succeeded = MR_FALSE;
                else
                {
                  /* we found a match; look up the results */
                  check_hlds__simplify__simplify_proc__succeeded = MR_TRUE;
                }
              }
            }
            break;
          case (MR_Integer) 6:
            {
              /* case "table_builtin" */
              {
                MR_Integer check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) -1;

                if (((((((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 0)) == (MR_Integer) 116)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 1)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 2)) == (MR_Integer) 98)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 3)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 4)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 5)) == (MR_Integer) 95))))
                  switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 6)) {
                    case (MR_Integer) 101:
                      if (MR_offset_streq(7, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_error"))
                        check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 105:
                      if (((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 7)) == (MR_Integer) 111)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 8)) == (MR_Integer) 95))))
                        switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 9)) {
                          case (MR_Integer) 99:
                            if (MR_offset_streq(10, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_io_copy_io_state"))
                              check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 104:
                            if (MR_offset_streq(10, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_io_has_occurred"))
                              check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 105:
                            if (MR_offset_streq(10, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_io_in_range"))
                              check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 3;
                            break;
                          case (MR_Integer) 108:
                            if (MR_offset_streq(10, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_io_left_bracket_unitized_goal"))
                              check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 4;
                            break;
                          case (MR_Integer) 114:
                            if (MR_offset_streq(10, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_io_right_bracket_unitized_goal"))
                              check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 5;
                            break;
                        }
                      break;
                    case (MR_Integer) 108:
                      if (((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 7)) == (MR_Integer) 111)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 8)) == (MR_Integer) 111))))
                        switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 9)) {
                          case (MR_Integer) 107:
                            if (((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 10)) == (MR_Integer) 117)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 11)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 12)) == (MR_Integer) 95))))
                              switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 13)) {
                                case (MR_Integer) 105:
                                  if (((((((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 14)) == (MR_Integer) 110)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 15)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 16)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 17)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 18)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 19)) == (MR_Integer) 95))))
                                    switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 20)) {
                                      case (MR_Integer) 97:
                                        if (MR_offset_streq(21, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_lookup_insert_addr"))
                                          check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 6;
                                        break;
                                      case (MR_Integer) 99:
                                        if (MR_offset_streq(21, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_lookup_insert_char"))
                                          check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 7;
                                        break;
                                      case (MR_Integer) 101:
                                        if (MR_offset_streq(21, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_lookup_insert_enum"))
                                          check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 8;
                                        break;
                                      case (MR_Integer) 102:
                                        switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 21)) {
                                          case (MR_Integer) 108:
                                            if (MR_offset_streq(22, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_lookup_insert_float"))
                                              check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 9;
                                            break;
                                          case (MR_Integer) 111:
                                            if (MR_offset_streq(22, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_lookup_insert_foreign_enum"))
                                              check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 10;
                                            break;
                                        }
                                        break;
                                      case (MR_Integer) 103:
                                        if (MR_offset_streq(21, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_lookup_insert_gen"))
                                          check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 11;
                                        break;
                                      case (MR_Integer) 105:
                                        if (MR_offset_streq(21, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_lookup_insert_int"))
                                          check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 12;
                                        break;
                                      case (MR_Integer) 112:
                                        if (((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 21)) == (MR_Integer) 111)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 22)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 23)) == (MR_Integer) 121))))
                                          switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 24)) {
                                            case (MR_Integer) 0:
                                              check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 13;
                                              break;
                                            case (MR_Integer) 95:
                                              if (MR_offset_streq(25, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_lookup_insert_poly_addr"))
                                                check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 14;
                                              break;
                                          }
                                        break;
                                      case (MR_Integer) 115:
                                        if (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 21)) == (MR_Integer) 116))
                                          switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 22)) {
                                            case (MR_Integer) 97:
                                              if (MR_offset_streq(23, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_lookup_insert_start_int"))
                                                check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 15;
                                              break;
                                            case (MR_Integer) 114:
                                              if (MR_offset_streq(23, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_lookup_insert_string"))
                                                check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 16;
                                              break;
                                          }
                                        break;
                                      case (MR_Integer) 116:
                                        if (((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 21)) == (MR_Integer) 121)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 22)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 23)) == (MR_Integer) 101))))
                                          switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 24)) {
                                            case (MR_Integer) 99:
                                              if (MR_offset_streq(25, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_lookup_insert_typeclassinfo"))
                                                check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 17;
                                              break;
                                            case (MR_Integer) 105:
                                              if (MR_offset_streq(25, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_lookup_insert_typeinfo"))
                                                check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 18;
                                              break;
                                          }
                                        break;
                                    }
                                  break;
                                case (MR_Integer) 114:
                                  if (((((((((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 14)) == (MR_Integer) 101)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 15)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 16)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 17)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 18)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 19)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 20)) == (MR_Integer) 95))))
                                    switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 21)) {
                                      case (MR_Integer) 97:
                                        if (MR_offset_streq(22, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_lookup_restore_any_answer"))
                                          check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 19;
                                        break;
                                      case (MR_Integer) 99:
                                        if (MR_offset_streq(22, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_lookup_restore_char_answer"))
                                          check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 20;
                                        break;
                                      case (MR_Integer) 102:
                                        if (MR_offset_streq(22, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_lookup_restore_float_answer"))
                                          check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 21;
                                        break;
                                      case (MR_Integer) 105:
                                        switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 22)) {
                                          case (MR_Integer) 110:
                                            if (MR_offset_streq(23, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_lookup_restore_int_answer"))
                                              check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 22;
                                            break;
                                          case (MR_Integer) 111:
                                            if (MR_offset_streq(23, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_lookup_restore_io_state_answer"))
                                              check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 23;
                                            break;
                                        }
                                        break;
                                      case (MR_Integer) 115:
                                        if (MR_offset_streq(22, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_lookup_restore_string_answer"))
                                          check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 24;
                                        break;
                                    }
                                  break;
                                case (MR_Integer) 115:
                                  if (((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 14)) == (MR_Integer) 97)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 15)) == (MR_Integer) 118)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 16)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 17)) == (MR_Integer) 95))))
                                    switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 18)) {
                                      case (MR_Integer) 97:
                                        if (MR_offset_streq(19, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_lookup_save_any_answer"))
                                          check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 25;
                                        break;
                                      case (MR_Integer) 99:
                                        if (MR_offset_streq(19, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_lookup_save_char_answer"))
                                          check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 26;
                                        break;
                                      case (MR_Integer) 102:
                                        if (MR_offset_streq(19, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_lookup_save_float_answer"))
                                          check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 27;
                                        break;
                                      case (MR_Integer) 105:
                                        switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 19)) {
                                          case (MR_Integer) 110:
                                            if (MR_offset_streq(20, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_lookup_save_int_answer"))
                                              check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 28;
                                            break;
                                          case (MR_Integer) 111:
                                            if (MR_offset_streq(20, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_lookup_save_io_state_answer"))
                                              check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 29;
                                            break;
                                        }
                                        break;
                                      case (MR_Integer) 115:
                                        if (MR_offset_streq(19, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_lookup_save_string_answer"))
                                          check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 30;
                                        break;
                                    }
                                  break;
                              }
                            break;
                          case (MR_Integer) 112:
                            if (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 10)) == (MR_Integer) 95))
                              switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 11)) {
                                case (MR_Integer) 109:
                                  if (((((((((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 12)) == (MR_Integer) 97)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 13)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 14)) == (MR_Integer) 107)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 15)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 16)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 17)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 18)) == (MR_Integer) 95))))
                                    switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 19)) {
                                      case (MR_Integer) 97:
                                        if (MR_offset_streq(20, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_loop_mark_as_active_and_fail"))
                                          check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 31;
                                        break;
                                      case (MR_Integer) 105:
                                        if (((((((((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 20)) == (MR_Integer) 110)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 21)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 22)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 23)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 24)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 25)) == (MR_Integer) 118)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 26)) == (MR_Integer) 101))))
                                          switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 27)) {
                                            case (MR_Integer) 0:
                                              check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 32;
                                              break;
                                            case (MR_Integer) 95:
                                              if (MR_offset_streq(28, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_loop_mark_as_inactive_and_fail"))
                                                check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 33;
                                              break;
                                          }
                                        break;
                                    }
                                  break;
                                case (MR_Integer) 115:
                                  if (((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 12)) == (MR_Integer) 101)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 13)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 14)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 15)) == (MR_Integer) 112))))
                                    switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 16)) {
                                      case (MR_Integer) 0:
                                        check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 34;
                                        break;
                                      case (MR_Integer) 95:
                                        if (MR_offset_streq(17, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_loop_setup_shortcut"))
                                          check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 35;
                                        break;
                                    }
                                  break;
                              }
                            break;
                        }
                      break;
                    case (MR_Integer) 109:
                      switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 7)) {
                        case (MR_Integer) 101:
                          if (((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 8)) == (MR_Integer) 109)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 9)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 10)) == (MR_Integer) 95))))
                            switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 11)) {
                              case (MR_Integer) 99:
                                if (MR_offset_streq(12, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_memo_create_answer_block"))
                                  check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 36;
                                break;
                              case (MR_Integer) 100:
                                if (((((((((((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 12)) == (MR_Integer) 101)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 13)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 14)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 15)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 16)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 17)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 18)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 19)) == (MR_Integer) 112))))
                                  switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 20)) {
                                    case (MR_Integer) 0:
                                      check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 37;
                                      break;
                                    case (MR_Integer) 95:
                                      if (MR_offset_streq(21, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_memo_det_setup_shortcut"))
                                        check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 38;
                                      break;
                                  }
                                break;
                              case (MR_Integer) 103:
                                if (MR_offset_streq(12, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_memo_get_answer_block"))
                                  check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 39;
                                break;
                              case (MR_Integer) 109:
                                if (((((((((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 12)) == (MR_Integer) 97)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 13)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 14)) == (MR_Integer) 107)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 15)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 16)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 17)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 18)) == (MR_Integer) 95))))
                                  switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 19)) {
                                    case (MR_Integer) 97:
                                      if (MR_offset_streq(20, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_memo_mark_as_active_and_fail"))
                                        check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 40;
                                      break;
                                    case (MR_Integer) 99:
                                      if (MR_offset_streq(20, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_memo_mark_as_complete_and_fail"))
                                        check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 41;
                                      break;
                                    case (MR_Integer) 102:
                                      if (MR_offset_streq(20, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_memo_mark_as_failed"))
                                        check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 42;
                                      break;
                                    case (MR_Integer) 105:
                                      if (MR_offset_streq(20, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_memo_mark_as_incomplete"))
                                        check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 43;
                                      break;
                                    case (MR_Integer) 115:
                                      if (MR_offset_streq(20, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_memo_mark_as_succeeded"))
                                        check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 44;
                                      break;
                                  }
                                break;
                              case (MR_Integer) 110:
                                if (((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 12)) == (MR_Integer) 111)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 13)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 14)) == (MR_Integer) 95))))
                                  switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 15)) {
                                    case (MR_Integer) 97:
                                      if (((((((((((((((((((((((((((((((((((((((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 16)) == (MR_Integer) 110)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 17)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 18)) == (MR_Integer) 119)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 19)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 20)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 21)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 22)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 23)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 24)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 25)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 26)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 27)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 28)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 29)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 30)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 31)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 32)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 33)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 34)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 35)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 36)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 37)) == (MR_Integer) 101))))
                                        switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 38)) {
                                          case (MR_Integer) 0:
                                            check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 45;
                                            break;
                                          case (MR_Integer) 95:
                                            if (MR_offset_streq(39, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_memo_non_answer_is_not_duplicate_shortcut"))
                                              check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 46;
                                            break;
                                        }
                                      break;
                                    case (MR_Integer) 103:
                                      if (MR_offset_streq(16, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_memo_non_get_answer_table"))
                                        check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 47;
                                      break;
                                    case (MR_Integer) 114:
                                      if (MR_offset_streq(16, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_memo_non_return_all_shortcut"))
                                        check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 48;
                                      break;
                                    case (MR_Integer) 115:
                                      if (MR_offset_streq(16, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_memo_non_setup"))
                                        check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 49;
                                      break;
                                  }
                                break;
                              case (MR_Integer) 114:
                                if (((((((((((((((((((((((((((((((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 12)) == (MR_Integer) 101)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 13)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 14)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 15)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 16)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 17)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 18)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 19)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 20)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 21)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 22)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 23)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 24)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 25)) == (MR_Integer) 119)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 26)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 27)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 28)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 29)) == (MR_Integer) 95))))
                                  switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 30)) {
                                    case (MR_Integer) 109:
                                      if (MR_offset_streq(31, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_memo_return_all_answers_multi"))
                                        check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 50;
                                      break;
                                    case (MR_Integer) 110:
                                      if (MR_offset_streq(31, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_memo_return_all_answers_nondet"))
                                        check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 51;
                                      break;
                                  }
                                break;
                              case (MR_Integer) 115:
                                if (((((((((((((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 12)) == (MR_Integer) 101)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 13)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 14)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 15)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 16)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 17)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 18)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 19)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 20)) == (MR_Integer) 112))))
                                  switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 21)) {
                                    case (MR_Integer) 0:
                                      check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 52;
                                      break;
                                    case (MR_Integer) 95:
                                      if (MR_offset_streq(22, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_memo_semi_setup_shortcut"))
                                        check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 53;
                                      break;
                                  }
                                break;
                            }
                          break;
                        case (MR_Integer) 109:
                          switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 8)) {
                            case (MR_Integer) 95:
                              switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 9)) {
                                case (MR_Integer) 97:
                                  if (((((((((((((((((((((((((((((((((((((((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 10)) == (MR_Integer) 110)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 11)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 12)) == (MR_Integer) 119)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 13)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 14)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 15)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 16)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 17)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 18)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 19)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 20)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 21)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 22)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 23)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 24)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 25)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 26)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 27)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 28)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 29)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 30)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 31)) == (MR_Integer) 101))))
                                    switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 32)) {
                                      case (MR_Integer) 0:
                                        check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 54;
                                        break;
                                      case (MR_Integer) 95:
                                        if (MR_offset_streq(33, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_mm_answer_is_not_duplicate_shortcut"))
                                          check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 55;
                                        break;
                                    }
                                  break;
                                case (MR_Integer) 99:
                                  switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 10)) {
                                    case (MR_Integer) 111:
                                      if (MR_offset_streq(11, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_mm_completion"))
                                        check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 56;
                                      break;
                                    case (MR_Integer) 114:
                                      if (MR_offset_streq(11, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_mm_create_answer_block"))
                                        check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 57;
                                      break;
                                  }
                                  break;
                                case (MR_Integer) 102:
                                  if (MR_offset_streq(10, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_mm_fill_answer_block_shortcut"))
                                    check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 58;
                                  break;
                                case (MR_Integer) 103:
                                  if (MR_offset_streq(10, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_mm_get_answer_table"))
                                    check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 59;
                                  break;
                                case (MR_Integer) 114:
                                  if (((((((((((((((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 10)) == (MR_Integer) 101)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 11)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 12)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 13)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 14)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 15)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 16)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 17)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 18)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 19)) == (MR_Integer) 95))))
                                    switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 20)) {
                                      case (MR_Integer) 109:
                                        if (MR_offset_streq(21, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_mm_return_all_multi"))
                                          check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 60;
                                        break;
                                      case (MR_Integer) 110:
                                        if (MR_offset_streq(21, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_mm_return_all_nondet"))
                                          check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 61;
                                        break;
                                      case (MR_Integer) 115:
                                        if (MR_offset_streq(21, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_mm_return_all_shortcut"))
                                          check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 62;
                                        break;
                                    }
                                  break;
                                case (MR_Integer) 115:
                                  switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 10)) {
                                    case (MR_Integer) 101:
                                      if (MR_offset_streq(11, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_mm_setup"))
                                        check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 63;
                                      break;
                                    case (MR_Integer) 117:
                                      if (MR_offset_streq(11, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_mm_suspend_consumer"))
                                        check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 64;
                                      break;
                                  }
                                  break;
                              }
                              break;
                            case (MR_Integer) 111:
                              if (((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 9)) == (MR_Integer) 115)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 10)) == (MR_Integer) 95))))
                                switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 11)) {
                                  case (MR_Integer) 97:
                                    if (((((((((((((((((((((((((((((((((((((((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 12)) == (MR_Integer) 110)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 13)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 14)) == (MR_Integer) 119)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 15)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 16)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 17)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 18)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 19)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 20)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 21)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 22)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 23)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 24)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 25)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 26)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 27)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 28)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 29)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 30)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 31)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 32)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 33)) == (MR_Integer) 101))))
                                      switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 34)) {
                                        case (MR_Integer) 0:
                                          check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 65;
                                          break;
                                        case (MR_Integer) 95:
                                          if (MR_offset_streq(35, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_mmos_answer_is_not_duplicate_shortcut"))
                                            check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 66;
                                          break;
                                      }
                                    break;
                                  case (MR_Integer) 99:
                                    switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 12)) {
                                      case (MR_Integer) 111:
                                        switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 13)) {
                                          case (MR_Integer) 109:
                                            if (MR_offset_streq(14, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_mmos_completion"))
                                              check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 67;
                                            break;
                                          case (MR_Integer) 110:
                                            if (((((((((((((((((((((((((((((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 14)) == (MR_Integer) 115)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 15)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 16)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 17)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 18)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 19)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 20)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 21)) == (MR_Integer) 120)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 22)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 23)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 24)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 25)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 26)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 27)) == (MR_Integer) 119)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 28)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 29)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 30)) == (MR_Integer) 95))))
                                              switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 31)) {
                                                case (MR_Integer) 109:
                                                  if (MR_offset_streq(32, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_mmos_consume_next_answer_multi"))
                                                    check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 68;
                                                  break;
                                                case (MR_Integer) 110:
                                                  if (MR_offset_streq(32, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_mmos_consume_next_answer_nondet"))
                                                    check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 69;
                                                  break;
                                              }
                                            break;
                                        }
                                        break;
                                      case (MR_Integer) 114:
                                        if (MR_offset_streq(13, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_mmos_create_answer_block"))
                                          check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 70;
                                        break;
                                    }
                                    break;
                                  case (MR_Integer) 112:
                                    if (MR_offset_streq(12, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_mmos_pickup_inputs"))
                                      check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 71;
                                    break;
                                  case (MR_Integer) 114:
                                    if (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 12)) == (MR_Integer) 101))
                                      switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 13)) {
                                        case (MR_Integer) 115:
                                          if (MR_offset_streq(14, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_mmos_restore_answers"))
                                            check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 72;
                                          break;
                                        case (MR_Integer) 116:
                                          if (MR_offset_streq(14, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_mmos_return_answer"))
                                            check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 73;
                                          break;
                                      }
                                    break;
                                  case (MR_Integer) 115:
                                    switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 12)) {
                                      case (MR_Integer) 97:
                                        if (MR_offset_streq(13, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_mmos_save_inputs"))
                                          check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 74;
                                        break;
                                      case (MR_Integer) 101:
                                        if (MR_offset_streq(13, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_mmos_setup_consumer"))
                                          check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 75;
                                        break;
                                    }
                                    break;
                                }
                              break;
                          }
                          break;
                      }
                      break;
                  }
                if ((check_hlds__simplify__simplify_proc__case_num_4 < (MR_Integer) 0))
                  check_hlds__simplify__simplify_proc__succeeded = MR_FALSE;
                else
                {
                  /* we found a match; look up the results */
                  check_hlds__simplify__simplify_proc__succeeded = MR_TRUE;
                }
              }
            }
            break;
        }
        /* jump out of search loop */
        goto label_2;
      }
      else
      if ((check_hlds__simplify__simplify_proc__result_3 < (MR_Integer) 0))
        check_hlds__simplify__simplify_proc__hi_1 = (check_hlds__simplify__simplify_proc__mid_2 - (MR_Integer) 1);
      else
        check_hlds__simplify__simplify_proc__lo_0 = (check_hlds__simplify__simplify_proc__mid_2 + (MR_Integer) 1);
    }
    while ((check_hlds__simplify__simplify_proc__lo_0 <= check_hlds__simplify__simplify_proc__hi_1));
    check_hlds__simplify__simplify_proc__succeeded = MR_FALSE;
  label_2:;
    return check_hlds__simplify__simplify_proc__succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_goal_update_vars_in_proc_11_p_0(
  MR_Word check_hlds__simplify__simplify_proc__SimplifyTasks_12,
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_30,
  MR_Word check_hlds__simplify__simplify_proc__PredId_14,
  MR_Integer check_hlds__simplify__simplify_proc__ProcId_15,
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_0_31,
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_32,
  MR_Word check_hlds__simplify__simplify_proc__InstMap0_17,
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_0_33,
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_34,
  MR_Integer * check_hlds__simplify__simplify_proc__CostDelta_19)
{
  {
    MR_Word check_hlds__simplify__simplify_proc__SimplifyInfo0_20;
    MR_Word check_hlds__simplify__simplify_proc__SimplifyInfo_25;
    MR_Word check_hlds__simplify__simplify_proc__VarSet_26;
    MR_Word check_hlds__simplify__simplify_proc__VarTypes_27;
    MR_Word check_hlds__simplify__simplify_proc__RttiVarMaps_28;
    MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_37_37;
    MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_38_38;

    check_hlds__simplify__simplify_info__simplify_info_init_6_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_0_29, check_hlds__simplify__simplify_proc__PredId_14, check_hlds__simplify__simplify_proc__ProcId_15, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_0_31, check_hlds__simplify__simplify_proc__SimplifyTasks_12, &check_hlds__simplify__simplify_proc__SimplifyInfo0_20);
    check_hlds__simplify__simplify_proc__simplify_top_level_goal_6_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_0_33, check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_34, (MR_Word) &check_hlds__simplify__simplify_proc_scalar_common_3[2], check_hlds__simplify__simplify_proc__InstMap0_17, check_hlds__simplify__simplify_proc__SimplifyInfo0_20, &check_hlds__simplify__simplify_proc__SimplifyInfo_25);
    check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_proc__SimplifyInfo_25, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_30);
    check_hlds__simplify__simplify_info__simplify_info_get_varset_2_p_0(check_hlds__simplify__simplify_proc__SimplifyInfo_25, &check_hlds__simplify__simplify_proc__VarSet_26);
    check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__simplify_proc__SimplifyInfo_25, &check_hlds__simplify__simplify_proc__VarTypes_27);
    check_hlds__simplify__simplify_info__simplify_info_get_rtti_varmaps_2_p_0(check_hlds__simplify__simplify_proc__SimplifyInfo_25, &check_hlds__simplify__simplify_proc__RttiVarMaps_28);
    hlds__hlds_pred__proc_info_set_varset_3_p_0(check_hlds__simplify__simplify_proc__VarSet_26, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_0_31, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_37_37);
    hlds__hlds_pred__proc_info_set_vartypes_3_p_0(check_hlds__simplify__simplify_proc__VarTypes_27, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_37_37, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_38_38);
    hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(check_hlds__simplify__simplify_proc__RttiVarMaps_28, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_38_38, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_32);
    check_hlds__simplify__simplify_info__simplify_info_get_cost_delta_2_p_0(check_hlds__simplify__simplify_proc__SimplifyInfo_25, check_hlds__simplify__simplify_proc__CostDelta_19);
  }
}

void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_7_p_0(
  MR_Word check_hlds__simplify__simplify_proc__SimplifyTasks_8,
  MR_Word check_hlds__simplify__simplify_proc__PredId_9,
  MR_Integer check_hlds__simplify__simplify_proc__ProcId_10,
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_16,
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_0_17,
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_18)
{
  {
    MR_Word check_hlds__simplify__simplify_proc__Var_14;

    hlds__passes_aux__write_pred_progress_message_5_p_0((MR_String) "% Simplifying ", check_hlds__simplify__simplify_proc__PredId_9, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_0_15);
    check_hlds__simplify__simplify_proc__simplify_proc_return_msgs_8_p_0(check_hlds__simplify__simplify_proc__SimplifyTasks_8, check_hlds__simplify__simplify_proc__PredId_9, check_hlds__simplify__simplify_proc__ProcId_10, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_0_15, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_16, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_0_17, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_18, &check_hlds__simplify__simplify_proc__Var_14);
  }
}

void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_pred_procs_9_p_0(
  MR_Word check_hlds__simplify__simplify_proc__SimplifyTasks_1,
  MR_Word check_hlds__simplify__simplify_proc__PredId_2,
  MR_Word check_hlds__simplify__simplify_proc__HeadVar__3_3,
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_0_4,
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_5,
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_PredInfo_0_6,
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_PredInfo_7,
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_0_8,
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_9)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((check_hlds__simplify__simplify_proc__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_9 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_0_8;
      *check_hlds__simplify__simplify_proc__STATE_VARIABLE_PredInfo_7 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_PredInfo_0_6;
      *check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_5 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_0_4;
    }
    else
    {
      MR_Word check_hlds__simplify__simplify_proc__TypeCtorInfo_35_65;
      MR_Integer check_hlds__simplify__simplify_proc__ProcId_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_proc__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word check_hlds__simplify__simplify_proc__ProcIds_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_proc__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_34_34;
      MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_PredInfo_35_35;
      MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_36_36;
      MR_Word check_hlds__simplify__simplify_proc__ProcTable0_52;
      MR_Word check_hlds__simplify__simplify_proc__ProcInfo0_53;
      MR_Word check_hlds__simplify__simplify_proc__ProcInfo_54;
      MR_Word check_hlds__simplify__simplify_proc__ProcSpecs_55;
      MR_Word check_hlds__simplify__simplify_proc__HasParallelConj_56;
      MR_Word check_hlds__simplify__simplify_proc__HasUserEvent_57;
      MR_Word check_hlds__simplify__simplify_proc__ProcTable_58;
      MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_29_59;
      MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_30_60;
      MR_Box check_hlds__simplify__simplify_proc__conv0_ProcInfo0_53;

      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_PredInfo_0_6, &check_hlds__simplify__simplify_proc__ProcTable0_52);
      check_hlds__simplify__simplify_proc__TypeCtorInfo_35_65 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(check_hlds__simplify__simplify_proc__TypeCtorInfo_35_65, check_hlds__simplify__simplify_proc__ProcTable0_52, check_hlds__simplify__simplify_proc__ProcId_23, &check_hlds__simplify__simplify_proc__conv0_ProcInfo0_53);
      check_hlds__simplify__simplify_proc__ProcInfo0_53 = ((MR_Word) check_hlds__simplify__simplify_proc__conv0_ProcInfo0_53);
      check_hlds__simplify__simplify_proc__simplify_proc_return_msgs_8_p_0(check_hlds__simplify__simplify_proc__SimplifyTasks_1, check_hlds__simplify__simplify_proc__PredId_2, check_hlds__simplify__simplify_proc__ProcId_23, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_0_4, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_29_59, check_hlds__simplify__simplify_proc__ProcInfo0_53, &check_hlds__simplify__simplify_proc__ProcInfo_54, &check_hlds__simplify__simplify_proc__ProcSpecs_55);
      hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(check_hlds__simplify__simplify_proc__ProcInfo_54, &check_hlds__simplify__simplify_proc__HasParallelConj_56);
      switch (check_hlds__simplify__simplify_proc__HasParallelConj_56) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_30_60 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_29_59;
          break;
        case (MR_Integer) 0:
          hlds__hlds_module__module_info_set_has_parallel_conj_2_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_29_59, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_30_60);
          break;
      }
      hlds__hlds_pred__proc_info_get_has_user_event_2_p_0(check_hlds__simplify__simplify_proc__ProcInfo_54, &check_hlds__simplify__simplify_proc__HasUserEvent_57);
      switch (check_hlds__simplify__simplify_proc__HasUserEvent_57) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_34_34 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_30_60;
          break;
        case (MR_Integer) 0:
          hlds__hlds_module__module_info_set_has_user_event_2_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_30_60, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_34_34);
          break;
      }
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(check_hlds__simplify__simplify_proc__TypeCtorInfo_35_65, check_hlds__simplify__simplify_proc__ProcId_23, ((MR_Box) (check_hlds__simplify__simplify_proc__ProcInfo_54)), check_hlds__simplify__simplify_proc__ProcTable0_52, &check_hlds__simplify__simplify_proc__ProcTable_58);
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__simplify__simplify_proc__ProcTable_58, check_hlds__simplify__simplify_proc__STATE_VARIABLE_PredInfo_0_6, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_PredInfo_35_35);
      parse_tree__error_util__accumulate_error_specs_for_proc_3_p_0(check_hlds__simplify__simplify_proc__ProcSpecs_55, check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_0_8, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_36_36);
      /* direct tailcall eliminated */
      {
        MR_Word check_hlds__simplify__simplify_proc__next_value_of_HeadVar__3_3 = check_hlds__simplify__simplify_proc__ProcIds_24;
        MR_Word check_hlds__simplify__simplify_proc__next_value_of_STATE_VARIABLE_ModuleInfo_0_4 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_34_34;
        MR_Word check_hlds__simplify__simplify_proc__next_value_of_STATE_VARIABLE_PredInfo_0_6 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_PredInfo_35_35;
        MR_Word check_hlds__simplify__simplify_proc__next_value_of_STATE_VARIABLE_Specs_0_8 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_36_36;

        check_hlds__simplify__simplify_proc__HeadVar__3_3 = check_hlds__simplify__simplify_proc__next_value_of_HeadVar__3_3;
        check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_0_4 = check_hlds__simplify__simplify_proc__next_value_of_STATE_VARIABLE_ModuleInfo_0_4;
        check_hlds__simplify__simplify_proc__STATE_VARIABLE_PredInfo_0_6 = check_hlds__simplify__simplify_proc__next_value_of_STATE_VARIABLE_PredInfo_0_6;
        check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_0_8 = check_hlds__simplify__simplify_proc__next_value_of_STATE_VARIABLE_Specs_0_8;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_return_msgs_8_p_0_1(
  MR_Box check_hlds__simplify__simplify_proc__closure_arg,
  MR_Box check_hlds__simplify__simplify_proc__wrapper_arg_1,
  MR_Box check_hlds__simplify__simplify_proc__wrapper_arg_2,
  MR_Box check_hlds__simplify__simplify_proc__wrapper_arg_3,
  MR_Box * check_hlds__simplify__simplify_proc__wrapper_arg_4)
{
  {
    MR_Box check_hlds__simplify__simplify_proc__closure = check_hlds__simplify__simplify_proc__closure_arg;
    MR_Word check_hlds__simplify__simplify_proc__conv0_HeadVar__4_124;

    check_hlds__simplify__simplify_proc__IntroducedFrom__pred__simplify_proc_return_msgs__286__1_4_p_0(((MR_Word) check_hlds__simplify__simplify_proc__wrapper_arg_1), ((MR_String) check_hlds__simplify__simplify_proc__wrapper_arg_2), ((MR_Word) check_hlds__simplify__simplify_proc__wrapper_arg_3), &check_hlds__simplify__simplify_proc__conv0_HeadVar__4_124);
    *check_hlds__simplify__simplify_proc__wrapper_arg_4 = ((MR_Box) (check_hlds__simplify__simplify_proc__conv0_HeadVar__4_124));
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_return_msgs_8_p_0(
  MR_Word check_hlds__simplify__simplify_proc__SimplifyTasks0_9,
  MR_Word check_hlds__simplify__simplify_proc__PredId_10,
  MR_Integer check_hlds__simplify__simplify_proc__ProcId_11,
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_0_47,
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_48,
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_0_49,
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_50,
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_51)
{
  {
    MR_bool check_hlds__simplify__simplify_proc__succeeded;
    MR_Word check_hlds__simplify__simplify_proc__TypeInfo_119_119;
    MR_Word check_hlds__simplify__simplify_proc__SimplifyTasks_15;
    MR_Word check_hlds__simplify__simplify_proc__PredInfo0_16;
    MR_Word check_hlds__simplify__simplify_proc__Markers0_17;
    MR_Word check_hlds__simplify__simplify_proc__FormatSpecs_19;
    MR_Word check_hlds__simplify__simplify_proc__Info0_20;
    MR_Word check_hlds__simplify__simplify_proc__CodeModel_23;
    MR_Word check_hlds__simplify__simplify_proc__ProcIsModelNon_24;
    MR_Word check_hlds__simplify__simplify_proc__NestedContext0_25;
    MR_Word check_hlds__simplify__simplify_proc__InstMap0_26;
    MR_Word check_hlds__simplify__simplify_proc__Goal0_27;
    MR_Word check_hlds__simplify__simplify_proc__Goal_28;
    MR_Word check_hlds__simplify__simplify_proc__Info_29;
    MR_Word check_hlds__simplify__simplify_proc__VarSet0_30;
    MR_Word check_hlds__simplify__simplify_proc__VarTypes1_31;
    MR_Word check_hlds__simplify__simplify_proc__RttiVarMaps_32;
    MR_Word check_hlds__simplify__simplify_proc__ElimVarsLists0_33;
    MR_Word check_hlds__simplify__simplify_proc__ElimVarsLists_34;
    MR_Word check_hlds__simplify__simplify_proc__ElimVars_35;
    MR_Word check_hlds__simplify__simplify_proc__VarSet1_36;
    MR_Word check_hlds__simplify__simplify_proc__VarTypes_37;
    MR_Word check_hlds__simplify__simplify_proc__VarSet_39;
    MR_Word check_hlds__simplify__simplify_proc__HasParallelConj_40;
    MR_Word check_hlds__simplify__simplify_proc__HasUserEvent_41;
    MR_Word check_hlds__simplify__simplify_proc__CurDeletedCallCallees_42;
    MR_Word check_hlds__simplify__simplify_proc__DeletedCallCallees0_43;
    MR_Word check_hlds__simplify__simplify_proc__DeletedCallCallees_44;
    MR_Word check_hlds__simplify__simplify_proc__Status_45;
    MR_Word check_hlds__simplify__simplify_proc__IsDefinedHere_46;
    MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_53_53;
    MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_58_58;
    MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_59_59;
    MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_61_61;
    MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_64_64;
    MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_65_65;
    MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_66_66;
    MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_67_67;
    MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_68_68;
    MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_69_69;
    MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_72_72;
    MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_73_73;
    MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_74_74;
    MR_Word check_hlds__simplify__simplify_proc__Var_78;
    MR_Word check_hlds__simplify__simplify_proc__Var_55;
    MR_Word check_hlds__simplify__simplify_proc__Var_76;
    MR_Word check_hlds__simplify__simplify_proc__Var_77;
    MR_Word check_hlds__simplify__simplify_proc__Var_79;
    MR_Word check_hlds__simplify__simplify_proc__Var_80;
    MR_Word check_hlds__simplify__simplify_proc__Var_81;
    MR_Word check_hlds__simplify__simplify_proc__Var_82;
    MR_Word check_hlds__simplify__simplify_proc__Var_83;
    MR_Word check_hlds__simplify__simplify_proc__Var_84;
    MR_Word check_hlds__simplify__simplify_proc__Var_85;
    MR_Word check_hlds__simplify__simplify_proc__Var_86;
    MR_Word check_hlds__simplify__simplify_proc__Var_87;
    MR_Word check_hlds__simplify__simplify_proc__Var_88;
    MR_Word check_hlds__simplify__simplify_proc__Var_89;

    check_hlds__simplify__simplify_proc__simplify_proc_maybe_vary_parameters_5_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_0_47, check_hlds__simplify__simplify_proc__PredId_10, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_0_49, check_hlds__simplify__simplify_proc__SimplifyTasks0_9, &check_hlds__simplify__simplify_proc__SimplifyTasks_15);
    hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_0_47, check_hlds__simplify__simplify_proc__PredId_10, &check_hlds__simplify__simplify_proc__PredInfo0_16);
    hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__simplify__simplify_proc__PredInfo0_16, &check_hlds__simplify__simplify_proc__Markers0_17);
    check_hlds__simplify__simplify_proc__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__simplify__simplify_proc__Markers0_17, (MR_Integer) 23);
    if (check_hlds__simplify__simplify_proc__succeeded)
      check_hlds__simplify__simplify_proc__simplify_proc_maybe_mark_modecheck_clauses_2_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_0_49, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_53_53);
    else
      check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_53_53 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_0_49;
    check_hlds__simplify__simplify_proc__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__simplify__simplify_proc__Markers0_17, (MR_Integer) 27);
    if (check_hlds__simplify__simplify_proc__succeeded)
    {
      check_hlds__simplify__simplify_proc__Var_76 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__SimplifyTasks_15, (MR_Integer) 0)))) & (MR_Integer) 1);
      check_hlds__simplify__simplify_proc__Var_77 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__SimplifyTasks_15, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      check_hlds__simplify__simplify_proc__Var_78 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__SimplifyTasks_15, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      check_hlds__simplify__simplify_proc__Var_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__SimplifyTasks_15, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      check_hlds__simplify__simplify_proc__Var_79 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__SimplifyTasks_15, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
      check_hlds__simplify__simplify_proc__Var_80 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__SimplifyTasks_15, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
      check_hlds__simplify__simplify_proc__Var_81 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__SimplifyTasks_15, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
      check_hlds__simplify__simplify_proc__Var_82 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__SimplifyTasks_15, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
      check_hlds__simplify__simplify_proc__Var_83 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__SimplifyTasks_15, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
      check_hlds__simplify__simplify_proc__Var_84 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__SimplifyTasks_15, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
      check_hlds__simplify__simplify_proc__Var_85 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__SimplifyTasks_15, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
      check_hlds__simplify__simplify_proc__Var_86 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__SimplifyTasks_15, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
      check_hlds__simplify__simplify_proc__Var_87 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__SimplifyTasks_15, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
      check_hlds__simplify__simplify_proc__Var_88 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__SimplifyTasks_15, (MR_Integer) 0)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
      check_hlds__simplify__simplify_proc__Var_89 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__SimplifyTasks_15, (MR_Integer) 0)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
      check_hlds__simplify__simplify_proc__succeeded = (check_hlds__simplify__simplify_proc__Var_55 == (MR_Integer) 1);
    }
    if (check_hlds__simplify__simplify_proc__succeeded)
    {
      MR_Word check_hlds__simplify__simplify_proc__ImplicitStreamWarnings_18;

      switch (check_hlds__simplify__simplify_proc__Var_78) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          check_hlds__simplify__simplify_proc__ImplicitStreamWarnings_18 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          check_hlds__simplify__simplify_proc__ImplicitStreamWarnings_18 = (MR_Integer) 1;
          break;
      }
      check_hlds__simplify__simplify_proc__simplify_proc_analyze_and_format_calls_8_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_0_47, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_58_58, check_hlds__simplify__simplify_proc__ImplicitStreamWarnings_18, check_hlds__simplify__simplify_proc__PredId_10, check_hlds__simplify__simplify_proc__ProcId_11, &check_hlds__simplify__simplify_proc__FormatSpecs_19, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_53_53, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_59_59);
    }
    else
    {
      check_hlds__simplify__simplify_proc__FormatSpecs_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_59_59 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_53_53;
      check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_58_58 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_0_47;
    }
    check_hlds__simplify__simplify_info__simplify_info_init_6_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_58_58, check_hlds__simplify__simplify_proc__PredId_10, check_hlds__simplify__simplify_proc__ProcId_11, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_59_59, check_hlds__simplify__simplify_proc__SimplifyTasks_15, &check_hlds__simplify__simplify_proc__Info0_20);
    check_hlds__simplify__simplify_proc__CodeModel_23 = hlds__code_model__proc_info_interface_code_model_1_f_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_59_59);
    switch (check_hlds__simplify__simplify_proc__CodeModel_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        check_hlds__simplify__simplify_proc__ProcIsModelNon_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 2:
        {
          check_hlds__simplify__simplify_proc__ProcIsModelNon_24 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_proc_scalar_common_4[3]);
        }
        break;
    }
    {
      check_hlds__simplify__simplify_proc__NestedContext0_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__NestedContext0_25, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__NestedContext0_25, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__NestedContext0_25, 2) = ((MR_Box) (check_hlds__simplify__simplify_proc__ProcIsModelNon_24));
    }
    hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_59_59, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_58_58, &check_hlds__simplify__simplify_proc__InstMap0_26);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_59_59, &check_hlds__simplify__simplify_proc__Goal0_27);
    check_hlds__simplify__simplify_proc__simplify_top_level_goal_6_p_0(check_hlds__simplify__simplify_proc__Goal0_27, &check_hlds__simplify__simplify_proc__Goal_28, check_hlds__simplify__simplify_proc__NestedContext0_25, check_hlds__simplify__simplify_proc__InstMap0_26, check_hlds__simplify__simplify_proc__Info0_20, &check_hlds__simplify__simplify_proc__Info_29);
    hlds__hlds_pred__proc_info_set_goal_3_p_0(check_hlds__simplify__simplify_proc__Goal_28, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_59_59, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_61_61);
    check_hlds__simplify__simplify_info__simplify_info_get_varset_2_p_0(check_hlds__simplify__simplify_proc__Info_29, &check_hlds__simplify__simplify_proc__VarSet0_30);
    check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__simplify_proc__Info_29, &check_hlds__simplify__simplify_proc__VarTypes1_31);
    check_hlds__simplify__simplify_info__simplify_info_get_rtti_varmaps_2_p_0(check_hlds__simplify__simplify_proc__Info_29, &check_hlds__simplify__simplify_proc__RttiVarMaps_32);
    check_hlds__simplify__simplify_info__simplify_info_get_elim_vars_2_p_0(check_hlds__simplify__simplify_proc__Info_29, &check_hlds__simplify__simplify_proc__ElimVarsLists0_33);
    mercury__list__sort_2_p_0((MR_Word) &check_hlds__simplify__simplify_proc_scalar_common_1[1], check_hlds__simplify__simplify_proc__ElimVarsLists0_33, &check_hlds__simplify__simplify_proc__ElimVarsLists_34);
    check_hlds__simplify__simplify_proc__TypeInfo_119_119 = (MR_Word) &check_hlds__simplify__simplify_proc_scalar_common_1[0];
    mercury__list__condense_2_p_0(check_hlds__simplify__simplify_proc__TypeInfo_119_119, check_hlds__simplify__simplify_proc__ElimVarsLists_34, &check_hlds__simplify__simplify_proc__ElimVars_35);
    mercury__varset__delete_sorted_vars_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__simplify_proc__ElimVars_35, check_hlds__simplify__simplify_proc__VarSet0_30, &check_hlds__simplify__simplify_proc__VarSet1_36);
    hlds__vartypes__delete_sorted_var_types_3_p_0(check_hlds__simplify__simplify_proc__ElimVars_35, check_hlds__simplify__simplify_proc__VarTypes1_31, &check_hlds__simplify__simplify_proc__VarTypes_37);
    check_hlds__simplify__simplify_proc__succeeded = check_hlds__simplify__simplify_info__simplify_do_after_front_end_1_p_0(check_hlds__simplify__simplify_proc__Info_29);
    if (check_hlds__simplify__simplify_proc__succeeded)
    {
      MR_Word check_hlds__simplify__simplify_proc__TypeCtorInfo_126_126;
      MR_Word check_hlds__simplify__simplify_proc__VarNameRemap_38;
      MR_Word check_hlds__simplify__simplify_proc__Var_63;
      MR_Box check_hlds__simplify__simplify_proc__conv1_VarSet_39;

      hlds__hlds_pred__proc_info_get_var_name_remap_2_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_61_61, &check_hlds__simplify__simplify_proc__VarNameRemap_38);
      check_hlds__simplify__simplify_proc__TypeCtorInfo_126_126 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
      mercury__map__foldl_4_p_0(check_hlds__simplify__simplify_proc__TypeInfo_119_119, check_hlds__simplify__simplify_proc__TypeCtorInfo_126_126, (MR_Word) &check_hlds__simplify__simplify_proc_scalar_common_1[2], (MR_Word) &check_hlds__simplify__simplify_proc_scalar_common_3[1], check_hlds__simplify__simplify_proc__VarNameRemap_38, ((MR_Box) (check_hlds__simplify__simplify_proc__VarSet1_36)), &check_hlds__simplify__simplify_proc__conv1_VarSet_39);
      check_hlds__simplify__simplify_proc__VarSet_39 = ((MR_Word) check_hlds__simplify__simplify_proc__conv1_VarSet_39);
      check_hlds__simplify__simplify_proc__Var_63 = mercury__map__init_0_f_0(check_hlds__simplify__simplify_proc__TypeInfo_119_119, check_hlds__simplify__simplify_proc__TypeCtorInfo_126_126);
      hlds__hlds_pred__proc_info_set_var_name_remap_3_p_0(check_hlds__simplify__simplify_proc__Var_63, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_61_61, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_64_64);
    }
    else
    {
      check_hlds__simplify__simplify_proc__VarSet_39 = check_hlds__simplify__simplify_proc__VarSet0_30;
      check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_64_64 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_61_61;
    }
    hlds__hlds_pred__proc_info_set_varset_3_p_0(check_hlds__simplify__simplify_proc__VarSet_39, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_64_64, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_65_65);
    hlds__hlds_pred__proc_info_set_vartypes_3_p_0(check_hlds__simplify__simplify_proc__VarTypes_37, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_65_65, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_66_66);
    hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(check_hlds__simplify__simplify_proc__RttiVarMaps_32, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_66_66, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_67_67);
    check_hlds__simplify__simplify_info__simplify_info_get_has_parallel_conj_2_p_0(check_hlds__simplify__simplify_proc__Info_29, &check_hlds__simplify__simplify_proc__HasParallelConj_40);
    hlds__hlds_pred__proc_info_set_has_parallel_conj_3_p_0(check_hlds__simplify__simplify_proc__HasParallelConj_40, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_67_67, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_68_68);
    check_hlds__simplify__simplify_info__simplify_info_get_has_user_event_2_p_0(check_hlds__simplify__simplify_proc__Info_29, &check_hlds__simplify__simplify_proc__HasUserEvent_41);
    hlds__hlds_pred__proc_info_set_has_user_event_3_p_0(check_hlds__simplify__simplify_proc__HasUserEvent_41, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_68_68, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_69_69);
    check_hlds__simplify__simplify_info__simplify_info_get_deleted_call_callees_2_p_0(check_hlds__simplify__simplify_proc__Info_29, &check_hlds__simplify__simplify_proc__CurDeletedCallCallees_42);
    hlds__hlds_pred__proc_info_get_deleted_call_callees_2_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_69_69, &check_hlds__simplify__simplify_proc__DeletedCallCallees0_43);
    mercury__set__union_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, check_hlds__simplify__simplify_proc__CurDeletedCallCallees_42, check_hlds__simplify__simplify_proc__DeletedCallCallees0_43, &check_hlds__simplify__simplify_proc__DeletedCallCallees_44);
    hlds__hlds_pred__proc_info_set_deleted_call_callees_3_p_0(check_hlds__simplify__simplify_proc__DeletedCallCallees_44, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_69_69, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_50);
    check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_proc__Info_29, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_48);
    check_hlds__simplify__simplify_info__simplify_info_get_error_specs_2_p_0(check_hlds__simplify__simplify_proc__Info_29, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_72_72);
    check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_73_73 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__simplify__simplify_proc__FormatSpecs_19, check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_72_72);
    check_hlds__simplify__simplify_proc__simplify_proc_maybe_warn_about_duplicates_5_p_0(*check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_48, check_hlds__simplify__simplify_proc__PredId_10, *check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_50, check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_73_73, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_74_74);
    hlds__hlds_pred__pred_info_get_status_2_p_0(check_hlds__simplify__simplify_proc__PredInfo0_16, &check_hlds__simplify__simplify_proc__Status_45);
    check_hlds__simplify__simplify_proc__IsDefinedHere_46 = hlds__status__pred_status_defined_in_this_module_1_f_0(check_hlds__simplify__simplify_proc__Status_45);
    switch (check_hlds__simplify__simplify_proc__IsDefinedHere_46) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        *check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_51 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_74_74;
        break;
    }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_top_level_goal_6_p_0(
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_0_15,
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_16,
  MR_Word check_hlds__simplify__simplify_proc__NestedContext0_8,
  MR_Word check_hlds__simplify__simplify_proc__InstMap0_9,
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_0_17,
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_18)
{
  {
    MR_bool check_hlds__simplify__simplify_proc__succeeded;
    MR_Word check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12;
    MR_Word check_hlds__simplify__simplify_proc__FoundContainsTrace_13;
    MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_25_25;
    MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_34_34;
    MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_35_35;

    check_hlds__simplify__simplify_info__simplify_info_get_simplify_tasks_2_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_0_17, &check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12);
    check_hlds__simplify__simplify_proc__succeeded = check_hlds__simplify__simplify_info__simplify_do_common_struct_1_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_0_17);
    if (!(check_hlds__simplify__simplify_proc__succeeded))
      check_hlds__simplify__simplify_proc__succeeded = check_hlds__simplify__simplify_info__simplify_do_opt_duplicate_calls_1_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_0_17);
    if (check_hlds__simplify__simplify_proc__succeeded)
    {
      MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_22_22;
      MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_24_24;
      MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_26_26;
      MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_29_29;
      MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_32_32;
      MR_Word check_hlds__simplify__simplify_proc__Var_40 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12, (MR_Integer) 0)))) & (MR_Integer) 1);
      MR_Word check_hlds__simplify__simplify_proc__Var_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word check_hlds__simplify__simplify_proc__Var_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word check_hlds__simplify__simplify_proc__Var_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word check_hlds__simplify__simplify_proc__Var_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
      MR_Word check_hlds__simplify__simplify_proc__Var_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
      MR_Word check_hlds__simplify__simplify_proc__Var_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
      MR_Word check_hlds__simplify__simplify_proc__Var_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
      MR_Word check_hlds__simplify__simplify_proc__Var_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
      MR_Word check_hlds__simplify__simplify_proc__Var_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
      MR_Word check_hlds__simplify__simplify_proc__Var_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
      MR_Word check_hlds__simplify__simplify_proc__Var_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12, (MR_Integer) 0)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
      MR_Word check_hlds__simplify__simplify_proc__Var_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12, (MR_Integer) 0)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
      MR_Word check_hlds__simplify__simplify_proc__Var_70;
      MR_Word check_hlds__simplify__simplify_proc__Var_71;
      MR_Word check_hlds__simplify__simplify_proc__Var_72;
      MR_Word check_hlds__simplify__simplify_proc__Var_73;
      MR_Word check_hlds__simplify__simplify_proc__Var_74;
      MR_Word check_hlds__simplify__simplify_proc__Var_75;
      MR_Word check_hlds__simplify__simplify_proc__Var_76;
      MR_Word check_hlds__simplify__simplify_proc__Var_77;
      MR_Word check_hlds__simplify__simplify_proc__Var_78;
      MR_Word check_hlds__simplify__simplify_proc__Var_79;
      MR_Word check_hlds__simplify__simplify_proc__Var_81;
      MR_Word check_hlds__simplify__simplify_proc__Var_83;
      MR_Word check_hlds__simplify__simplify_proc__Var_84;
      MR_Word check_hlds__simplify__simplify_proc__Var_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
      MR_Word check_hlds__simplify__simplify_proc__Var_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
      MR_Word check_hlds__simplify__simplify_proc__Var_80;
      MR_Word check_hlds__simplify__simplify_proc__Var_82;

      {
        check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_22_22, 0) = ((MR_Box) ((check_hlds__simplify__simplify_proc__Var_40 | ((((check_hlds__simplify__simplify_proc__Var_41 << (MR_Integer) 1)) | ((((check_hlds__simplify__simplify_proc__Var_42 << (MR_Integer) 2)) | ((((check_hlds__simplify__simplify_proc__Var_43 << (MR_Integer) 3)) | ((((check_hlds__simplify__simplify_proc__Var_44 << (MR_Integer) 4)) | (((((MR_Integer) 0 << (MR_Integer) 5)) | ((((check_hlds__simplify__simplify_proc__Var_46 << (MR_Integer) 6)) | (((((MR_Integer) 0 << (MR_Integer) 7)) | ((((check_hlds__simplify__simplify_proc__Var_48 << (MR_Integer) 8)) | ((((check_hlds__simplify__simplify_proc__Var_49 << (MR_Integer) 9)) | ((((check_hlds__simplify__simplify_proc__Var_50 << (MR_Integer) 10)) | ((((check_hlds__simplify__simplify_proc__Var_51 << (MR_Integer) 11)) | ((((check_hlds__simplify__simplify_proc__Var_52 << (MR_Integer) 12)) | ((((check_hlds__simplify__simplify_proc__Var_53 << (MR_Integer) 13)) | ((check_hlds__simplify__simplify_proc__Var_54 << (MR_Integer) 14)))))))))))))))))))))))))))))));
      }
      check_hlds__simplify__simplify_info__simplify_info_set_simplify_tasks_3_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_22_22, check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_0_17, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_24_24);
      check_hlds__simplify__simplify_proc__do_process_top_level_goal_6_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_0_15, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_25_25, check_hlds__simplify__simplify_proc__NestedContext0_8, check_hlds__simplify__simplify_proc__InstMap0_9, check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_24_24, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_26_26);
      check_hlds__simplify__simplify_info__simplify_info_set_allow_messages_3_p_0((MR_Integer) 0, check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_26_26, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_29_29);
      check_hlds__simplify__simplify_proc__Var_70 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12, (MR_Integer) 0)))) & (MR_Integer) 1);
      check_hlds__simplify__simplify_proc__Var_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      check_hlds__simplify__simplify_proc__Var_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      check_hlds__simplify__simplify_proc__Var_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      check_hlds__simplify__simplify_proc__Var_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
      check_hlds__simplify__simplify_proc__Var_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
      check_hlds__simplify__simplify_proc__Var_76 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
      check_hlds__simplify__simplify_proc__Var_77 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
      check_hlds__simplify__simplify_proc__Var_78 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
      check_hlds__simplify__simplify_proc__Var_79 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
      check_hlds__simplify__simplify_proc__Var_80 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
      check_hlds__simplify__simplify_proc__Var_81 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
      check_hlds__simplify__simplify_proc__Var_82 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
      check_hlds__simplify__simplify_proc__Var_83 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12, (MR_Integer) 0)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
      check_hlds__simplify__simplify_proc__Var_84 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12, (MR_Integer) 0)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
      {
        check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_32_32, 0) = ((MR_Box) ((check_hlds__simplify__simplify_proc__Var_70 | ((((check_hlds__simplify__simplify_proc__Var_71 << (MR_Integer) 1)) | ((((check_hlds__simplify__simplify_proc__Var_72 << (MR_Integer) 2)) | ((((check_hlds__simplify__simplify_proc__Var_73 << (MR_Integer) 3)) | ((((check_hlds__simplify__simplify_proc__Var_74 << (MR_Integer) 4)) | ((((check_hlds__simplify__simplify_proc__Var_75 << (MR_Integer) 5)) | ((((check_hlds__simplify__simplify_proc__Var_76 << (MR_Integer) 6)) | ((((check_hlds__simplify__simplify_proc__Var_77 << (MR_Integer) 7)) | ((((check_hlds__simplify__simplify_proc__Var_78 << (MR_Integer) 8)) | ((((check_hlds__simplify__simplify_proc__Var_79 << (MR_Integer) 9)) | (((((MR_Integer) 0 << (MR_Integer) 10)) | ((((check_hlds__simplify__simplify_proc__Var_81 << (MR_Integer) 11)) | (((((MR_Integer) 0 << (MR_Integer) 12)) | ((((check_hlds__simplify__simplify_proc__Var_83 << (MR_Integer) 13)) | ((check_hlds__simplify__simplify_proc__Var_84 << (MR_Integer) 14)))))))))))))))))))))))))))))));
      }
      check_hlds__simplify__simplify_info__simplify_info_reinit_3_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_32_32, check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_29_29, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_34_34);
    }
    else
    {
      check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_34_34 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_0_17;
      check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_25_25 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_0_15;
    }
    check_hlds__simplify__simplify_proc__do_process_top_level_goal_6_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_25_25, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_35_35, check_hlds__simplify__simplify_proc__NestedContext0_8, check_hlds__simplify__simplify_proc__InstMap0_9, check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_34_34, check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_18);
    check_hlds__simplify__simplify_info__simplify_info_get_found_contains_trace_2_p_0(*check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_18, &check_hlds__simplify__simplify_proc__FoundContainsTrace_13);
    switch (check_hlds__simplify__simplify_proc__FoundContainsTrace_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_16 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_35_35;
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__simplify__simplify_proc__Var_14;

          check_hlds__simplify__simplify_proc__goal_contains_trace_3_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_35_35, check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_16, &check_hlds__simplify__simplify_proc__Var_14);
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_proc__case_list_contains_trace_acc_4_p_0(
  MR_Word check_hlds__simplify__simplify_proc__HeadVar__1_1,
  MR_Word * check_hlds__simplify__simplify_proc__HeadVar__2_2,
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ContainsTrace_0_3,
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_ContainsTrace_4)
{
  if ((check_hlds__simplify__simplify_proc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *check_hlds__simplify__simplify_proc__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *check_hlds__simplify__simplify_proc__STATE_VARIABLE_ContainsTrace_4 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_ContainsTrace_0_3;
  }
  else
  {
    MR_Word check_hlds__simplify__simplify_proc__Case0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_proc__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_proc__Cases0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_proc__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_proc__Case_10;
    MR_Word check_hlds__simplify__simplify_proc__Cases_11;
    MR_Word check_hlds__simplify__simplify_proc__MainConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__Case0_8, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_proc__OtherConsIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__Case0_8, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_proc__Goal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__Case0_8, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_proc__Goal_16;
    MR_Word check_hlds__simplify__simplify_proc__GoalContainsTrace_17;
    MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ContainsTrace_20_20;

    check_hlds__simplify__simplify_proc__goal_contains_trace_3_p_0(check_hlds__simplify__simplify_proc__Goal0_15, &check_hlds__simplify__simplify_proc__Goal_16, &check_hlds__simplify__simplify_proc__GoalContainsTrace_17);
    {
      check_hlds__simplify__simplify_proc__Case_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__Case_10, 0) = ((MR_Box) (check_hlds__simplify__simplify_proc__MainConsId_13));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__Case_10, 1) = ((MR_Box) (check_hlds__simplify__simplify_proc__OtherConsIds_14));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__Case_10, 2) = ((MR_Box) (check_hlds__simplify__simplify_proc__Goal_16));
    }
    check_hlds__simplify__simplify_proc__STATE_VARIABLE_ContainsTrace_20_20 = hlds__hlds_goal__worst_contains_trace_2_f_0(check_hlds__simplify__simplify_proc__GoalContainsTrace_17, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ContainsTrace_0_3);
    check_hlds__simplify__simplify_proc__case_list_contains_trace_acc_4_p_0(check_hlds__simplify__simplify_proc__Cases0_9, &check_hlds__simplify__simplify_proc__Cases_11, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ContainsTrace_20_20, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ContainsTrace_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *check_hlds__simplify__simplify_proc__HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_proc__Case_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_proc__Cases_11));
    }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_proc__goal_list_contains_trace_acc_4_p_0(
  MR_Word check_hlds__simplify__simplify_proc__HeadVar__1_1,
  MR_Word * check_hlds__simplify__simplify_proc__HeadVar__2_2,
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ContainsTrace_0_3,
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_ContainsTrace_4)
{
  if ((check_hlds__simplify__simplify_proc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *check_hlds__simplify__simplify_proc__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *check_hlds__simplify__simplify_proc__STATE_VARIABLE_ContainsTrace_4 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_ContainsTrace_0_3;
  }
  else
  {
    MR_Word check_hlds__simplify__simplify_proc__Goal0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_proc__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_proc__Goals0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_proc__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_proc__Goal_10;
    MR_Word check_hlds__simplify__simplify_proc__Goals_11;
    MR_Word check_hlds__simplify__simplify_proc__GoalContainsTrace_13;
    MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ContainsTrace_16_16;

    check_hlds__simplify__simplify_proc__goal_contains_trace_3_p_0(check_hlds__simplify__simplify_proc__Goal0_8, &check_hlds__simplify__simplify_proc__Goal_10, &check_hlds__simplify__simplify_proc__GoalContainsTrace_13);
    check_hlds__simplify__simplify_proc__STATE_VARIABLE_ContainsTrace_16_16 = hlds__hlds_goal__worst_contains_trace_2_f_0(check_hlds__simplify__simplify_proc__GoalContainsTrace_13, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ContainsTrace_0_3);
    check_hlds__simplify__simplify_proc__goal_list_contains_trace_acc_4_p_0(check_hlds__simplify__simplify_proc__Goals0_9, &check_hlds__simplify__simplify_proc__Goals_11, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ContainsTrace_16_16, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ContainsTrace_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *check_hlds__simplify__simplify_proc__HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_proc__Goal_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_proc__Goals_11));
    }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_proc__goal_contains_trace_3_p_0(
  MR_Word check_hlds__simplify__simplify_proc__Goal0_4,
  MR_Word * check_hlds__simplify__simplify_proc__Goal_5,
  MR_Word * check_hlds__simplify__simplify_proc__ContainsTrace_6)
{
  {
    MR_Word check_hlds__simplify__simplify_proc__GoalExpr0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__Goal0_4, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_proc__GoalInfo0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__Goal0_4, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_proc__GoalExpr_32;
    MR_Word check_hlds__simplify__simplify_proc__GoalInfo_94;

    switch (MR_tag((MR_Word) check_hlds__simplify__simplify_proc__GoalExpr0_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__simplify__simplify_proc__SubGoal0_51 = (MR_Word) MR_body(((MR_Word) check_hlds__simplify__simplify_proc__GoalExpr0_7), (MR_Integer) 0);
          MR_Word check_hlds__simplify__simplify_proc__SubGoal_52;

          check_hlds__simplify__simplify_proc__goal_contains_trace_3_p_0(check_hlds__simplify__simplify_proc__SubGoal0_51, &check_hlds__simplify__simplify_proc__SubGoal_52, check_hlds__simplify__simplify_proc__ContainsTrace_6);
          check_hlds__simplify__simplify_proc__GoalExpr_32 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__simplify__simplify_proc__SubGoal_52);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          check_hlds__simplify__simplify_proc__GoalExpr_32 = check_hlds__simplify__simplify_proc__GoalExpr0_7;
          *check_hlds__simplify__simplify_proc__ContainsTrace_6 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr0_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              check_hlds__simplify__simplify_proc__GoalExpr_32 = check_hlds__simplify__simplify_proc__GoalExpr0_7;
              *check_hlds__simplify__simplify_proc__ContainsTrace_6 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word check_hlds__simplify__simplify_proc__ConjType_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr0_7, (MR_Integer) 1)));
              MR_Word check_hlds__simplify__simplify_proc__SubGoals0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr0_7, (MR_Integer) 2)));
              MR_Word check_hlds__simplify__simplify_proc__SubGoals_36;

              check_hlds__simplify__simplify_proc__goal_list_contains_trace_acc_4_p_0(check_hlds__simplify__simplify_proc__SubGoals0_34, &check_hlds__simplify__simplify_proc__SubGoals_36, (MR_Integer) 1, check_hlds__simplify__simplify_proc__ContainsTrace_6);
              {
                check_hlds__simplify__simplify_proc__GoalExpr_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr_32, 1) = ((MR_Box) (check_hlds__simplify__simplify_proc__ConjType_33));
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr_32, 2) = ((MR_Box) (check_hlds__simplify__simplify_proc__SubGoals_36));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word check_hlds__simplify__simplify_proc__SubGoals0_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr0_7, (MR_Integer) 1)));
              MR_Word check_hlds__simplify__simplify_proc__SubGoals_103;

              check_hlds__simplify__simplify_proc__goal_list_contains_trace_acc_4_p_0(check_hlds__simplify__simplify_proc__SubGoals0_101, &check_hlds__simplify__simplify_proc__SubGoals_103, (MR_Integer) 1, check_hlds__simplify__simplify_proc__ContainsTrace_6);
              {
                check_hlds__simplify__simplify_proc__GoalExpr_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr_32, 1) = ((MR_Box) (check_hlds__simplify__simplify_proc__SubGoals_103));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word check_hlds__simplify__simplify_proc__SwitchVar_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr0_7, (MR_Integer) 1)));
              MR_Word check_hlds__simplify__simplify_proc__CanFail_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr0_7, (MR_Integer) 2)));
              MR_Word check_hlds__simplify__simplify_proc__Cases0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr0_7, (MR_Integer) 3)));
              MR_Word check_hlds__simplify__simplify_proc__Cases_40;

              check_hlds__simplify__simplify_proc__case_list_contains_trace_acc_4_p_0(check_hlds__simplify__simplify_proc__Cases0_39, &check_hlds__simplify__simplify_proc__Cases_40, (MR_Integer) 1, check_hlds__simplify__simplify_proc__ContainsTrace_6);
              {
                check_hlds__simplify__simplify_proc__GoalExpr_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr_32, 1) = ((MR_Box) (check_hlds__simplify__simplify_proc__SwitchVar_37));
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr_32, 2) = ((MR_Box) (check_hlds__simplify__simplify_proc__CanFail_38));
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr_32, 3) = ((MR_Box) (check_hlds__simplify__simplify_proc__Cases_40));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word check_hlds__simplify__simplify_proc__Reason_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr0_7, (MR_Integer) 1)));
              MR_Word check_hlds__simplify__simplify_proc__SubGoal0_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr0_7, (MR_Integer) 2)));
              MR_Word check_hlds__simplify__simplify_proc__SubGoal_106;

              switch (MR_tag((MR_Word) check_hlds__simplify__simplify_proc__Reason_53)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  check_hlds__simplify__simplify_proc__goal_contains_trace_3_p_0(check_hlds__simplify__simplify_proc__SubGoal0_105, &check_hlds__simplify__simplify_proc__SubGoal_106, check_hlds__simplify__simplify_proc__ContainsTrace_6);
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__Reason_53, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                    case (MR_Integer) 3:
                    case (MR_Integer) 4:
                    case (MR_Integer) 5:
                    case (MR_Integer) 8:
                      check_hlds__simplify__simplify_proc__goal_contains_trace_3_p_0(check_hlds__simplify__simplify_proc__SubGoal0_105, &check_hlds__simplify__simplify_proc__SubGoal_106, check_hlds__simplify__simplify_proc__ContainsTrace_6);
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Word check_hlds__simplify__simplify_proc__FGT_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__Reason_53, (MR_Integer) 2)));
                        MR_Word check_hlds__simplify__simplify_proc__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__Reason_53, (MR_Integer) 1)));

                        switch (check_hlds__simplify__simplify_proc__FGT_60) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                          case (MR_Integer) 2:
                            {
                              check_hlds__simplify__simplify_proc__SubGoal_106 = check_hlds__simplify__simplify_proc__SubGoal0_105;
                              *check_hlds__simplify__simplify_proc__ContainsTrace_6 = (MR_Integer) 1;
                            }
                            break;
                          case (MR_Integer) 0:
                          case (MR_Integer) 3:
                            check_hlds__simplify__simplify_proc__goal_contains_trace_3_p_0(check_hlds__simplify__simplify_proc__SubGoal0_105, &check_hlds__simplify__simplify_proc__SubGoal_106, check_hlds__simplify__simplify_proc__ContainsTrace_6);
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        check_hlds__simplify__simplify_proc__SubGoal_106 = check_hlds__simplify__simplify_proc__SubGoal0_105;
                        *check_hlds__simplify__simplify_proc__ContainsTrace_6 = (MR_Integer) 0;
                      }
                      break;
                  }
                  break;
              }
              {
                check_hlds__simplify__simplify_proc__GoalExpr_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr_32, 1) = ((MR_Box) (check_hlds__simplify__simplify_proc__Reason_53));
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr_32, 2) = ((MR_Box) (check_hlds__simplify__simplify_proc__SubGoal_106));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word check_hlds__simplify__simplify_proc__Vars_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr0_7, (MR_Integer) 1)));
              MR_Word check_hlds__simplify__simplify_proc__Cond0_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr0_7, (MR_Integer) 2)));
              MR_Word check_hlds__simplify__simplify_proc__Then0_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr0_7, (MR_Integer) 3)));
              MR_Word check_hlds__simplify__simplify_proc__Else0_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr0_7, (MR_Integer) 4)));
              MR_Word check_hlds__simplify__simplify_proc__Cond_45;
              MR_Word check_hlds__simplify__simplify_proc__CondContainsTrace_46;
              MR_Word check_hlds__simplify__simplify_proc__Then_47;
              MR_Word check_hlds__simplify__simplify_proc__ThenContainsTrace_48;
              MR_Word check_hlds__simplify__simplify_proc__Else_49;
              MR_Word check_hlds__simplify__simplify_proc__ElseContainsTrace_50;
              MR_Word check_hlds__simplify__simplify_proc__Var_98;

              check_hlds__simplify__simplify_proc__goal_contains_trace_3_p_0(check_hlds__simplify__simplify_proc__Cond0_42, &check_hlds__simplify__simplify_proc__Cond_45, &check_hlds__simplify__simplify_proc__CondContainsTrace_46);
              check_hlds__simplify__simplify_proc__goal_contains_trace_3_p_0(check_hlds__simplify__simplify_proc__Then0_43, &check_hlds__simplify__simplify_proc__Then_47, &check_hlds__simplify__simplify_proc__ThenContainsTrace_48);
              check_hlds__simplify__simplify_proc__goal_contains_trace_3_p_0(check_hlds__simplify__simplify_proc__Else0_44, &check_hlds__simplify__simplify_proc__Else_49, &check_hlds__simplify__simplify_proc__ElseContainsTrace_50);
              {
                check_hlds__simplify__simplify_proc__GoalExpr_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr_32, 1) = ((MR_Box) (check_hlds__simplify__simplify_proc__Vars_41));
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr_32, 2) = ((MR_Box) (check_hlds__simplify__simplify_proc__Cond_45));
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr_32, 3) = ((MR_Box) (check_hlds__simplify__simplify_proc__Then_47));
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr_32, 4) = ((MR_Box) (check_hlds__simplify__simplify_proc__Else_49));
              }
              check_hlds__simplify__simplify_proc__Var_98 = hlds__hlds_goal__worst_contains_trace_2_f_0(check_hlds__simplify__simplify_proc__ThenContainsTrace_48, check_hlds__simplify__simplify_proc__ElseContainsTrace_50);
              *check_hlds__simplify__simplify_proc__ContainsTrace_6 = hlds__hlds_goal__worst_contains_trace_2_f_0(check_hlds__simplify__simplify_proc__CondContainsTrace_46, check_hlds__simplify__simplify_proc__Var_98);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word check_hlds__simplify__simplify_proc__ShortHand0_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr0_7, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) check_hlds__simplify__simplify_proc__ShortHand0_76)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.simplify_proc", (MR_String) "predicate \140check_hlds.simplify.simplify_proc.goal_contains_trace\'/3", (MR_String) "bi_implication");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word check_hlds__simplify__simplify_proc__GoalType_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_proc__ShortHand0_76, (MR_Integer) 0)));
                    MR_Word check_hlds__simplify__simplify_proc__Outer_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_proc__ShortHand0_76, (MR_Integer) 1)));
                    MR_Word check_hlds__simplify__simplify_proc__Inner_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_proc__ShortHand0_76, (MR_Integer) 2)));
                    MR_Word check_hlds__simplify__simplify_proc__MaybeOutputVars_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_proc__ShortHand0_76, (MR_Integer) 3)));
                    MR_Word check_hlds__simplify__simplify_proc__MainGoal0_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_proc__ShortHand0_76, (MR_Integer) 4)));
                    MR_Word check_hlds__simplify__simplify_proc__OrElseGoals0_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_proc__ShortHand0_76, (MR_Integer) 5)));
                    MR_Word check_hlds__simplify__simplify_proc__OrElseInners_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_proc__ShortHand0_76, (MR_Integer) 6)));
                    MR_Word check_hlds__simplify__simplify_proc__MainGoal_84;
                    MR_Word check_hlds__simplify__simplify_proc__MainContainsTrace_85;
                    MR_Word check_hlds__simplify__simplify_proc__OrElseGoals_87;
                    MR_Word check_hlds__simplify__simplify_proc__OrElseContainsTrace_88;
                    MR_Word check_hlds__simplify__simplify_proc__ShortHand_89;

                    check_hlds__simplify__simplify_proc__goal_contains_trace_3_p_0(check_hlds__simplify__simplify_proc__MainGoal0_81, &check_hlds__simplify__simplify_proc__MainGoal_84, &check_hlds__simplify__simplify_proc__MainContainsTrace_85);
                    check_hlds__simplify__simplify_proc__goal_list_contains_trace_acc_4_p_0(check_hlds__simplify__simplify_proc__OrElseGoals0_82, &check_hlds__simplify__simplify_proc__OrElseGoals_87, (MR_Integer) 1, &check_hlds__simplify__simplify_proc__OrElseContainsTrace_88);
                    {
                      check_hlds__simplify__simplify_proc__ShortHand_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_proc__ShortHand_89, 0) = ((MR_Box) (check_hlds__simplify__simplify_proc__GoalType_77));
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_proc__ShortHand_89, 1) = ((MR_Box) (check_hlds__simplify__simplify_proc__Outer_78));
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_proc__ShortHand_89, 2) = ((MR_Box) (check_hlds__simplify__simplify_proc__Inner_79));
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_proc__ShortHand_89, 3) = ((MR_Box) (check_hlds__simplify__simplify_proc__MaybeOutputVars_80));
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_proc__ShortHand_89, 4) = ((MR_Box) (check_hlds__simplify__simplify_proc__MainGoal_84));
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_proc__ShortHand_89, 5) = ((MR_Box) (check_hlds__simplify__simplify_proc__OrElseGoals_87));
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_proc__ShortHand_89, 6) = ((MR_Box) (check_hlds__simplify__simplify_proc__OrElseInners_83));
                    }
                    {
                      check_hlds__simplify__simplify_proc__GoalExpr_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr_32, 1) = ((MR_Box) (check_hlds__simplify__simplify_proc__ShortHand_89));
                    }
                    *check_hlds__simplify__simplify_proc__ContainsTrace_6 = hlds__hlds_goal__worst_contains_trace_2_f_0(check_hlds__simplify__simplify_proc__MainContainsTrace_85, check_hlds__simplify__simplify_proc__OrElseContainsTrace_88);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word check_hlds__simplify__simplify_proc__MaybeIO_90 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_proc__ShortHand0_76, (MR_Integer) 0)));
                    MR_Word check_hlds__simplify__simplify_proc__ResultVar_91 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_proc__ShortHand0_76, (MR_Integer) 1)));
                    MR_Word check_hlds__simplify__simplify_proc__SubGoal0_107 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_proc__ShortHand0_76, (MR_Integer) 2)));
                    MR_Word check_hlds__simplify__simplify_proc__SubGoal_108;
                    MR_Word check_hlds__simplify__simplify_proc__ShortHand_109;

                    check_hlds__simplify__simplify_proc__goal_contains_trace_3_p_0(check_hlds__simplify__simplify_proc__SubGoal0_107, &check_hlds__simplify__simplify_proc__SubGoal_108, check_hlds__simplify__simplify_proc__ContainsTrace_6);
                    {
                      check_hlds__simplify__simplify_proc__ShortHand_109 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_proc__ShortHand_109, 0) = ((MR_Box) (check_hlds__simplify__simplify_proc__MaybeIO_90));
                      MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_proc__ShortHand_109, 1) = ((MR_Box) (check_hlds__simplify__simplify_proc__ResultVar_91));
                      MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_proc__ShortHand_109, 2) = ((MR_Box) (check_hlds__simplify__simplify_proc__SubGoal_108));
                    }
                    {
                      check_hlds__simplify__simplify_proc__GoalExpr_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr_32, 1) = ((MR_Box) (check_hlds__simplify__simplify_proc__ShortHand_109));
                    }
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    switch (*check_hlds__simplify__simplify_proc__ContainsTrace_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 18, check_hlds__simplify__simplify_proc__GoalInfo0_8, &check_hlds__simplify__simplify_proc__GoalInfo_94);
        }
        break;
      case (MR_Integer) 0:
        {
          hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 18, check_hlds__simplify__simplify_proc__GoalInfo0_8, &check_hlds__simplify__simplify_proc__GoalInfo_94);
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__simplify__simplify_proc__Goal_5 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_proc__GoalExpr_32));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_proc__GoalInfo_94));
    }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_proc__do_process_top_level_goal_6_p_0(
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_0_32,
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_33,
  MR_Word check_hlds__simplify__simplify_proc__NestedContext0_8,
  MR_Word check_hlds__simplify__simplify_proc__InstMap0_9,
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_0_34,
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_35)
{
  {
    MR_Word check_hlds__simplify__simplify_proc__GoalInfo0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_0_32, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_proc__Detism_13;
    MR_Word check_hlds__simplify__simplify_proc__NonLocals_14;
    MR_Word check_hlds__simplify__simplify_proc__ShouldRequantify_16;
    MR_Word check_hlds__simplify__simplify_proc__ShouldRerunDet_23;
    MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_36_36;
    MR_Word check_hlds__simplify__simplify_proc__Var_37;
    MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_38_38;
    MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_52_52;
    MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_54_54;
    MR_Word check_hlds__simplify__simplify_proc__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_0_32, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_proc___Common_15;

    check_hlds__simplify__simplify_proc__Detism_13 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__simplify__simplify_proc__GoalInfo0_12);
    check_hlds__simplify__simplify_proc__NonLocals_14 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__simplify__simplify_proc__GoalInfo0_12);
    check_hlds__simplify__simplify_proc__Var_37 = check_hlds__simplify__common__common_info_init_0_f_0();
    check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_0_32, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_36_36, check_hlds__simplify__simplify_proc__NestedContext0_8, check_hlds__simplify__simplify_proc__InstMap0_9, check_hlds__simplify__simplify_proc__Var_37, &check_hlds__simplify__simplify_proc___Common_15, check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_0_34, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_38_38);
    check_hlds__simplify__simplify_info__simplify_info_get_should_requantify_2_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_38_38, &check_hlds__simplify__simplify_proc__ShouldRequantify_16);
    switch (check_hlds__simplify__simplify_proc__ShouldRequantify_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_52_52 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_36_36;
          check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_54_54 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_38_38;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__simplify__simplify_proc__InstVarSet_22;
          MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_VarSet_39_39;
          MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_VarTypes_40_40;
          MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_RttiVarMaps_41_41;
          MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_43_43;
          MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_VarSet_44_44;
          MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_VarTypes_45_45;
          MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_RttiVarMaps_46_46;
          MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_47_47;
          MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_48_48;
          MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_49_49;
          MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_50_50;
          MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_53_53;
          MR_Word check_hlds__simplify__simplify_proc__Var_21;

          check_hlds__simplify__simplify_info__simplify_info_get_varset_2_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_38_38, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_VarSet_39_39);
          check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_38_38, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_VarTypes_40_40);
          check_hlds__simplify__simplify_info__simplify_info_get_rtti_varmaps_2_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_38_38, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_RttiVarMaps_41_41);
          hlds__quantification__implicitly_quantify_goal_general_11_p_0((MR_Integer) 0, check_hlds__simplify__simplify_proc__NonLocals_14, &check_hlds__simplify__simplify_proc__Var_21, check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_36_36, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_43_43, check_hlds__simplify__simplify_proc__STATE_VARIABLE_VarSet_39_39, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_VarSet_44_44, check_hlds__simplify__simplify_proc__STATE_VARIABLE_VarTypes_40_40, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_VarTypes_45_45, check_hlds__simplify__simplify_proc__STATE_VARIABLE_RttiVarMaps_41_41, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_RttiVarMaps_46_46);
          check_hlds__simplify__simplify_info__simplify_info_set_varset_3_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_VarSet_44_44, check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_38_38, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_47_47);
          check_hlds__simplify__simplify_info__simplify_info_set_var_types_3_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_VarTypes_45_45, check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_47_47, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_48_48);
          check_hlds__simplify__simplify_info__simplify_info_set_rtti_varmaps_3_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_RttiVarMaps_46_46, check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_48_48, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_49_49);
          check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_49_49, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_50_50);
          check_hlds__simplify__simplify_info__simplify_info_get_inst_varset_2_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_49_49, &check_hlds__simplify__simplify_proc__InstVarSet_22);
          check_hlds__mode_util__recompute_instmap_delta_8_p_0((MR_Integer) 0, check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_43_43, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_52_52, check_hlds__simplify__simplify_proc__STATE_VARIABLE_VarTypes_45_45, check_hlds__simplify__simplify_proc__InstVarSet_22, check_hlds__simplify__simplify_proc__InstMap0_9, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_50_50, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_53_53);
          check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_53_53, check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_49_49, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_54_54);
        }
        break;
    }
    check_hlds__simplify__simplify_info__simplify_info_get_should_rerun_det_2_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_54_54, &check_hlds__simplify__simplify_proc__ShouldRerunDet_23);
    switch (check_hlds__simplify__simplify_proc__ShouldRerunDet_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_33 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_52_52;
          *check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_35 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_54_54;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__simplify__simplify_proc__SolnContext_25;
          MR_Word check_hlds__simplify__simplify_proc__PredProcId_26;
          MR_Word check_hlds__simplify__simplify_proc__PredInfo_27;
          MR_Word check_hlds__simplify__simplify_proc__DetInfo0_28;
          MR_Word check_hlds__simplify__simplify_proc__DetInfo_31;
          MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_55_55;
          MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_VarSet_56_56;
          MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_VarTypes_57_57;
          MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_RttiVarMaps_58_58;
          MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_59_59;
          MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_60_60;
          MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_61_61;
          MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_62_62;
          MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_63_63;
          MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_64_64;
          MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_70_70;
          MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_VarTypes_71_71;
          MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_72_72;
          MR_Word check_hlds__simplify__simplify_proc__Var_29;
          MR_Word check_hlds__simplify__simplify_proc__Var_30;

          check_hlds__det_analysis__det_get_soln_context_2_p_0(check_hlds__simplify__simplify_proc__Detism_13, &check_hlds__simplify__simplify_proc__SolnContext_25);
          check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_54_54, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_55_55);
          check_hlds__simplify__simplify_info__simplify_info_get_varset_2_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_54_54, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_VarSet_56_56);
          check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_54_54, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_VarTypes_57_57);
          check_hlds__simplify__simplify_info__simplify_info_get_rtti_varmaps_2_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_54_54, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_RttiVarMaps_58_58);
          check_hlds__simplify__simplify_info__simplify_info_get_pred_proc_id_2_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_54_54, &check_hlds__simplify__simplify_proc__PredProcId_26);
          hlds__hlds_module__module_info_pred_proc_info_4_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_55_55, check_hlds__simplify__simplify_proc__PredProcId_26, &check_hlds__simplify__simplify_proc__PredInfo_27, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_59_59);
          hlds__hlds_pred__proc_info_set_vartypes_3_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_VarTypes_57_57, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_59_59, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_60_60);
          hlds__hlds_pred__proc_info_set_varset_3_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_VarSet_56_56, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_60_60, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_61_61);
          hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_RttiVarMaps_58_58, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_61_61, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_62_62);
          hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(check_hlds__simplify__simplify_proc__PredProcId_26, check_hlds__simplify__simplify_proc__PredInfo_27, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_62_62, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_55_55, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_63_63);
          check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_63_63, check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_54_54, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_64_64);
          check_hlds__det_util__det_info_init_7_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_63_63, check_hlds__simplify__simplify_proc__PredProcId_26, check_hlds__simplify__simplify_proc__STATE_VARIABLE_VarSet_56_56, check_hlds__simplify__simplify_proc__STATE_VARIABLE_VarTypes_57_57, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__simplify_proc__DetInfo0_28);
          check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_52_52, check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_33, check_hlds__simplify__simplify_proc__InstMap0_9, check_hlds__simplify__simplify_proc__SolnContext_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__simplify_proc__Var_29, &check_hlds__simplify__simplify_proc__Var_30, check_hlds__simplify__simplify_proc__DetInfo0_28, &check_hlds__simplify__simplify_proc__DetInfo_31);
          check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__simplify__simplify_proc__DetInfo_31, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_70_70);
          check_hlds__det_util__det_info_get_vartypes_2_p_0(check_hlds__simplify__simplify_proc__DetInfo_31, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_VarTypes_71_71);
          check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_70_70, check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_64_64, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_72_72);
          check_hlds__simplify__simplify_info__simplify_info_set_var_types_3_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_VarTypes_71_71, check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_72_72, check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_35);
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_maybe_warn_about_duplicates_5_p_0(
  MR_Word check_hlds__simplify__simplify_proc__ModuleInfo_6,
  MR_Word check_hlds__simplify__simplify_proc__PredId_7,
  MR_Word check_hlds__simplify__simplify_proc__ProcInfo_8,
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_0_29,
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_30)
{
  {
    MR_bool check_hlds__simplify__simplify_proc__succeeded;
    MR_Word check_hlds__simplify__simplify_proc__PredInfo_10;
    MR_Word check_hlds__simplify__simplify_proc__Markers_11;
    MR_Word check_hlds__simplify__simplify_proc__Goal_12;
    MR_Word check_hlds__simplify__simplify_proc__GoalExpr_13;
    MR_Word check_hlds__simplify__simplify_proc__GoalInfo_14;
    MR_Word check_hlds__simplify__simplify_proc__MayDuplicate_23;
    MR_Word check_hlds__simplify__simplify_proc__Attributes_15;
    MR_Word check_hlds__simplify__simplify_proc__MaybeMayDuplicate_22;
    MR_Word check_hlds__simplify__simplify_proc__Var_16;
    MR_Integer check_hlds__simplify__simplify_proc__Var_17;
    MR_Word check_hlds__simplify__simplify_proc__Var_18;
    MR_Word check_hlds__simplify__simplify_proc__Var_19;
    MR_Word check_hlds__simplify__simplify_proc__Var_20;
    MR_Word check_hlds__simplify__simplify_proc__Var_21;

    hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__simplify__simplify_proc__ModuleInfo_6, check_hlds__simplify__simplify_proc__PredId_7, &check_hlds__simplify__simplify_proc__PredInfo_10);
    hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__simplify__simplify_proc__PredInfo_10, &check_hlds__simplify__simplify_proc__Markers_11);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__simplify__simplify_proc__ProcInfo_8, &check_hlds__simplify__simplify_proc__Goal_12);
    check_hlds__simplify__simplify_proc__GoalExpr_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__Goal_12, (MR_Integer) 0)));
    check_hlds__simplify__simplify_proc__GoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__Goal_12, (MR_Integer) 1)));
    check_hlds__simplify__simplify_proc__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_proc__GoalExpr_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (check_hlds__simplify__simplify_proc__succeeded)
    {
      check_hlds__simplify__simplify_proc__Attributes_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr_13, (MR_Integer) 1)));
      check_hlds__simplify__simplify_proc__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr_13, (MR_Integer) 2)));
      check_hlds__simplify__simplify_proc__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr_13, (MR_Integer) 3)));
      check_hlds__simplify__simplify_proc__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr_13, (MR_Integer) 4)));
      check_hlds__simplify__simplify_proc__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr_13, (MR_Integer) 5)));
      check_hlds__simplify__simplify_proc__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr_13, (MR_Integer) 6)));
      check_hlds__simplify__simplify_proc__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr_13, (MR_Integer) 7)));
      check_hlds__simplify__simplify_proc__MaybeMayDuplicate_22 = parse_tree__prog_data_foreign__get_may_duplicate_1_f_0(check_hlds__simplify__simplify_proc__Attributes_15);
      check_hlds__simplify__simplify_proc__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_proc__MaybeMayDuplicate_22)) == (MR_mktag((MR_Integer) 1)));
      if (check_hlds__simplify__simplify_proc__succeeded)
        check_hlds__simplify__simplify_proc__MayDuplicate_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_proc__MaybeMayDuplicate_22, (MR_Integer) 0)));
    }
    if (check_hlds__simplify__simplify_proc__succeeded)
      switch (check_hlds__simplify__simplify_proc__MayDuplicate_23) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            check_hlds__simplify__simplify_proc__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__simplify__simplify_proc__Markers_11, (MR_Integer) 8);
            if (check_hlds__simplify__simplify_proc__succeeded)
            {
              MR_Word check_hlds__simplify__simplify_proc__Context_24;
              MR_Word check_hlds__simplify__simplify_proc__Msg_26;
              MR_Word check_hlds__simplify__simplify_proc__Spec_28;
              MR_Word check_hlds__simplify__simplify_proc__Var_76;

              check_hlds__simplify__simplify_proc__Context_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_proc__GoalInfo_14);
              {
                check_hlds__simplify__simplify_proc__Msg_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__Msg_26, 0) = ((MR_Box) (check_hlds__simplify__simplify_proc__Context_24));
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__Msg_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_proc_scalar_common_1[19])));
              }
              {
                check_hlds__simplify__simplify_proc__Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_proc__Var_76, 0) = ((MR_Box) (check_hlds__simplify__simplify_proc__Msg_26));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_proc__Var_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__simplify__simplify_proc__Spec_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__Spec_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__Spec_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_proc_scalar_common_4[1])));
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__Spec_28, 2) = ((MR_Box) (check_hlds__simplify__simplify_proc__Var_76));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_30 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_proc__Spec_28));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_0_29));
              }
            }
            else
              *check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_30 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_0_29;
          }
          break;
        case (MR_Integer) 1:
          {
            check_hlds__simplify__simplify_proc__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__simplify__simplify_proc__Markers_11, (MR_Integer) 7);
            if (check_hlds__simplify__simplify_proc__succeeded)
            {
              MR_Word check_hlds__simplify__simplify_proc__Var_52;
              MR_Word check_hlds__simplify__simplify_proc__Context_79;
              MR_Word check_hlds__simplify__simplify_proc__Msg_81;
              MR_Word check_hlds__simplify__simplify_proc__Spec_83;

              check_hlds__simplify__simplify_proc__Context_79 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_proc__GoalInfo_14);
              {
                check_hlds__simplify__simplify_proc__Msg_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__Msg_81, 0) = ((MR_Box) (check_hlds__simplify__simplify_proc__Context_79));
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__Msg_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_proc_scalar_common_1[20])));
              }
              {
                check_hlds__simplify__simplify_proc__Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_proc__Var_52, 0) = ((MR_Box) (check_hlds__simplify__simplify_proc__Msg_81));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_proc__Var_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__simplify__simplify_proc__Spec_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__Spec_83, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__Spec_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_proc_scalar_common_4[1])));
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__Spec_83, 2) = ((MR_Box) (check_hlds__simplify__simplify_proc__Var_52));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_30 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_proc__Spec_83));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_0_29));
              }
            }
            else
              *check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_30 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_0_29;
          }
          break;
      }
    else
      *check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_30 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_0_29;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_analyze_and_format_calls_8_p_0(
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_32,
  MR_Word check_hlds__simplify__simplify_proc__ImplicitStreamWarnings_10,
  MR_Word check_hlds__simplify__simplify_proc__PredId_11,
  MR_Integer check_hlds__simplify__simplify_proc__ProcId_12,
  MR_Word * check_hlds__simplify__simplify_proc__FormatSpecs_13,
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_0_33,
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_34)
{
  {
    MR_Word check_hlds__simplify__simplify_proc__Goal0_15;
    MR_Word check_hlds__simplify__simplify_proc__VarSet0_16;
    MR_Word check_hlds__simplify__simplify_proc__VarTypes0_17;
    MR_Word check_hlds__simplify__simplify_proc__MaybeGoal_18;
    MR_Word check_hlds__simplify__simplify_proc__VarSet_19;
    MR_Word check_hlds__simplify__simplify_proc__VarTypes_20;

    hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_0_33, &check_hlds__simplify__simplify_proc__Goal0_15);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_0_33, &check_hlds__simplify__simplify_proc__VarSet0_16);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_0_33, &check_hlds__simplify__simplify_proc__VarTypes0_17);
    check_hlds__simplify__format_call__analyze_and_optimize_format_calls_9_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_0_31, check_hlds__simplify__simplify_proc__ImplicitStreamWarnings_10, check_hlds__simplify__simplify_proc__Goal0_15, &check_hlds__simplify__simplify_proc__MaybeGoal_18, check_hlds__simplify__simplify_proc__FormatSpecs_13, check_hlds__simplify__simplify_proc__VarSet0_16, &check_hlds__simplify__simplify_proc__VarSet_19, check_hlds__simplify__simplify_proc__VarTypes0_17, &check_hlds__simplify__simplify_proc__VarTypes_20);
    if ((check_hlds__simplify__simplify_proc__MaybeGoal_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_32 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_0_31;
      *check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_34 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_0_33;
    }
    else
    {
      MR_Word check_hlds__simplify__simplify_proc__TypeCtorInfo_45_45;
      MR_Word check_hlds__simplify__simplify_proc__TypeCtorInfo_46_46;
      MR_Word check_hlds__simplify__simplify_proc__Goal_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_proc__MaybeGoal_18, (MR_Integer) 0)));
      MR_Word check_hlds__simplify__simplify_proc__PredTable0_22;
      MR_Word check_hlds__simplify__simplify_proc__PredInfo0_23;
      MR_Word check_hlds__simplify__simplify_proc__ProcTable0_24;
      MR_Word check_hlds__simplify__simplify_proc__ProcTable_25;
      MR_Word check_hlds__simplify__simplify_proc__PredInfo1_26;
      MR_Word check_hlds__simplify__simplify_proc__Markers1_27;
      MR_Word check_hlds__simplify__simplify_proc__Markers_28;
      MR_Word check_hlds__simplify__simplify_proc__PredInfo_29;
      MR_Word check_hlds__simplify__simplify_proc__PredTable_30;
      MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_35_35;
      MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_36_36;
      MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_37_37;
      MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_39_39;
      MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_42_42;
      MR_Box check_hlds__simplify__simplify_proc__conv0_PredInfo0_23;

      hlds__hlds_pred__proc_info_set_goal_3_p_0(check_hlds__simplify__simplify_proc__Goal_21, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_0_33, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_35_35);
      hlds__hlds_pred__proc_info_set_varset_3_p_0(check_hlds__simplify__simplify_proc__VarSet_19, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_35_35, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_36_36);
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(check_hlds__simplify__simplify_proc__VarTypes_20, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_36_36, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_37_37);
      hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 0, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_37_37, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_39_39);
      check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 1, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_39_39, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_34, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_0_31, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_42_42);
      hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_42_42, &check_hlds__simplify__simplify_proc__PredTable0_22);
      check_hlds__simplify__simplify_proc__TypeCtorInfo_45_45 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
      check_hlds__simplify__simplify_proc__TypeCtorInfo_46_46 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
      mercury__map__lookup_3_p_0(check_hlds__simplify__simplify_proc__TypeCtorInfo_45_45, check_hlds__simplify__simplify_proc__TypeCtorInfo_46_46, check_hlds__simplify__simplify_proc__PredTable0_22, ((MR_Box) (check_hlds__simplify__simplify_proc__PredId_11)), &check_hlds__simplify__simplify_proc__conv0_PredInfo0_23);
      check_hlds__simplify__simplify_proc__PredInfo0_23 = ((MR_Word) check_hlds__simplify__simplify_proc__conv0_PredInfo0_23);
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__simplify__simplify_proc__PredInfo0_23, &check_hlds__simplify__simplify_proc__ProcTable0_24);
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__simplify__simplify_proc__ProcId_12, ((MR_Box) (*check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_34)), check_hlds__simplify__simplify_proc__ProcTable0_24, &check_hlds__simplify__simplify_proc__ProcTable_25);
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__simplify__simplify_proc__ProcTable_25, check_hlds__simplify__simplify_proc__PredInfo0_23, &check_hlds__simplify__simplify_proc__PredInfo1_26);
      hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__simplify__simplify_proc__PredInfo1_26, &check_hlds__simplify__simplify_proc__Markers1_27);
      hlds__hlds_pred__remove_marker_3_p_0((MR_Integer) 27, check_hlds__simplify__simplify_proc__Markers1_27, &check_hlds__simplify__simplify_proc__Markers_28);
      hlds__hlds_pred__pred_info_set_markers_3_p_0(check_hlds__simplify__simplify_proc__Markers_28, check_hlds__simplify__simplify_proc__PredInfo1_26, &check_hlds__simplify__simplify_proc__PredInfo_29);
      mercury__map__det_update_4_p_0(check_hlds__simplify__simplify_proc__TypeCtorInfo_45_45, check_hlds__simplify__simplify_proc__TypeCtorInfo_46_46, ((MR_Box) (check_hlds__simplify__simplify_proc__PredId_11)), ((MR_Box) (check_hlds__simplify__simplify_proc__PredInfo_29)), check_hlds__simplify__simplify_proc__PredTable0_22, &check_hlds__simplify__simplify_proc__PredTable_30);
      hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__simplify__simplify_proc__PredTable_30, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_42_42, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_32);
    }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_maybe_mark_modecheck_clauses_2_p_0(
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_0_13,
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_14)
{
  {
    MR_bool check_hlds__simplify__simplify_proc__succeeded;
    MR_Word check_hlds__simplify__simplify_proc__Goal0_4;
    MR_Word check_hlds__simplify__simplify_proc__GoalExpr0_5;
    MR_Word check_hlds__simplify__simplify_proc__GoalInfo0_6;

    hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_0_13, &check_hlds__simplify__simplify_proc__Goal0_4);
    check_hlds__simplify__simplify_proc__GoalExpr0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__Goal0_4, (MR_Integer) 0)));
    check_hlds__simplify__simplify_proc__GoalInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__Goal0_4, (MR_Integer) 1)));
    if (((((MR_tag((MR_Word) check_hlds__simplify__simplify_proc__GoalExpr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr0_5, (MR_Integer) 0)))) == (MR_Integer) 3))))
      check_hlds__simplify__simplify_proc__succeeded = MR_TRUE;
    else
    if (((((MR_tag((MR_Word) check_hlds__simplify__simplify_proc__GoalExpr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr0_5, (MR_Integer) 0)))) == (MR_Integer) 4))))
      check_hlds__simplify__simplify_proc__succeeded = MR_TRUE;
    else
      check_hlds__simplify__simplify_proc__succeeded = MR_FALSE;
    if (check_hlds__simplify__simplify_proc__succeeded)
    {
      MR_Word check_hlds__simplify__simplify_proc__GoalInfo_11;
      MR_Word check_hlds__simplify__simplify_proc__Goal_12;

      hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 15, check_hlds__simplify__simplify_proc__GoalInfo0_6, &check_hlds__simplify__simplify_proc__GoalInfo_11);
      {
        check_hlds__simplify__simplify_proc__Goal_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__Goal_12, 0) = ((MR_Box) (check_hlds__simplify__simplify_proc__GoalExpr0_5));
        MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__Goal_12, 1) = ((MR_Box) (check_hlds__simplify__simplify_proc__GoalInfo_11));
      }
      hlds__hlds_pred__proc_info_set_goal_3_p_0(check_hlds__simplify__simplify_proc__Goal_12, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_0_13, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_14);
    }
    else
      *check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_14 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_0_13;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_maybe_vary_parameters_5_p_0_1(
  MR_Box check_hlds__simplify__simplify_proc__closure_arg,
  MR_Box check_hlds__simplify__simplify_proc__wrapper_arg_1,
  MR_Box * check_hlds__simplify__simplify_proc__wrapper_arg_2)
{
  {
    MR_bool check_hlds__simplify__simplify_proc__succeeded;
    MR_Box check_hlds__simplify__simplify_proc__closure = check_hlds__simplify__simplify_proc__closure_arg;
    MR_Integer check_hlds__simplify__simplify_proc__conv0_HeadVar__2_2;

    check_hlds__simplify__simplify_proc__succeeded = mercury__string__to_int_2_p_0(((MR_String) check_hlds__simplify__simplify_proc__wrapper_arg_1), &check_hlds__simplify__simplify_proc__conv0_HeadVar__2_2);
    if (check_hlds__simplify__simplify_proc__succeeded)
    {
      *check_hlds__simplify__simplify_proc__wrapper_arg_2 = ((MR_Box) (check_hlds__simplify__simplify_proc__conv0_HeadVar__2_2));
      check_hlds__simplify__simplify_proc__succeeded = MR_TRUE;
    }
    return check_hlds__simplify__simplify_proc__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_maybe_vary_parameters_5_p_0(
  MR_Word check_hlds__simplify__simplify_proc__ModuleInfo_6,
  MR_Word check_hlds__simplify__simplify_proc__PredId_7,
  MR_Word check_hlds__simplify__simplify_proc__ProcInfo_8,
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_0_17,
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_18)
{
  {
    MR_bool check_hlds__simplify__simplify_proc__succeeded;
    MR_Word check_hlds__simplify__simplify_proc__VarTypes0_10;
    MR_Integer check_hlds__simplify__simplify_proc__NumVars_11;
    MR_Word check_hlds__simplify__simplify_proc__Globals_12;
    MR_String check_hlds__simplify__simplify_proc__CommonStructPreds_13;
    MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_20_20;

    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__simplify__simplify_proc__ProcInfo_8, &check_hlds__simplify__simplify_proc__VarTypes0_10);
    hlds__vartypes__vartypes_count_2_p_0(check_hlds__simplify__simplify_proc__VarTypes0_10, &check_hlds__simplify__simplify_proc__NumVars_11);
    check_hlds__simplify__simplify_proc__succeeded = (check_hlds__simplify__simplify_proc__NumVars_11 > (MR_Integer) 1000);
    if (check_hlds__simplify__simplify_proc__succeeded)
    {
      MR_Word check_hlds__simplify__simplify_proc__Var_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_0_17, (MR_Integer) 0)))) & (MR_Integer) 1);
      MR_Word check_hlds__simplify__simplify_proc__Var_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_0_17, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word check_hlds__simplify__simplify_proc__Var_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_0_17, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word check_hlds__simplify__simplify_proc__Var_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_0_17, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word check_hlds__simplify__simplify_proc__Var_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_0_17, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
      MR_Word check_hlds__simplify__simplify_proc__Var_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_0_17, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
      MR_Word check_hlds__simplify__simplify_proc__Var_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_0_17, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
      MR_Word check_hlds__simplify__simplify_proc__Var_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_0_17, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
      MR_Word check_hlds__simplify__simplify_proc__Var_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_0_17, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
      MR_Word check_hlds__simplify__simplify_proc__Var_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_0_17, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
      MR_Word check_hlds__simplify__simplify_proc__Var_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_0_17, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
      MR_Word check_hlds__simplify__simplify_proc__Var_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_0_17, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
      MR_Word check_hlds__simplify__simplify_proc__Var_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_0_17, (MR_Integer) 0)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
      MR_Word check_hlds__simplify__simplify_proc__Var_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_0_17, (MR_Integer) 0)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
      MR_Word check_hlds__simplify__simplify_proc__Var_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_0_17, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

      {
        check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_20_20, 0) = ((MR_Box) ((check_hlds__simplify__simplify_proc__Var_27 | ((((check_hlds__simplify__simplify_proc__Var_28 << (MR_Integer) 1)) | ((((check_hlds__simplify__simplify_proc__Var_29 << (MR_Integer) 2)) | ((((check_hlds__simplify__simplify_proc__Var_30 << (MR_Integer) 3)) | ((((check_hlds__simplify__simplify_proc__Var_31 << (MR_Integer) 4)) | ((((check_hlds__simplify__simplify_proc__Var_32 << (MR_Integer) 5)) | ((((check_hlds__simplify__simplify_proc__Var_33 << (MR_Integer) 6)) | ((((check_hlds__simplify__simplify_proc__Var_34 << (MR_Integer) 7)) | ((((check_hlds__simplify__simplify_proc__Var_35 << (MR_Integer) 8)) | ((((check_hlds__simplify__simplify_proc__Var_36 << (MR_Integer) 9)) | ((((check_hlds__simplify__simplify_proc__Var_37 << (MR_Integer) 10)) | ((((check_hlds__simplify__simplify_proc__Var_38 << (MR_Integer) 11)) | (((((MR_Integer) 0 << (MR_Integer) 12)) | ((((check_hlds__simplify__simplify_proc__Var_40 << (MR_Integer) 13)) | ((check_hlds__simplify__simplify_proc__Var_41 << (MR_Integer) 14)))))))))))))))))))))))))))))));
      }
    }
    else
      check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_20_20 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_0_17;
    hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__simplify__simplify_proc__ModuleInfo_6, &check_hlds__simplify__simplify_proc__Globals_12);
    libs__globals__lookup_string_option_3_p_0(check_hlds__simplify__simplify_proc__Globals_12, (MR_Integer) 355, &check_hlds__simplify__simplify_proc__CommonStructPreds_13);
    check_hlds__simplify__simplify_proc__succeeded = (strcmp(check_hlds__simplify__simplify_proc__CommonStructPreds_13, (MR_String) "") == 0);
    if (check_hlds__simplify__simplify_proc__succeeded)
      *check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_18 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_20_20;
    else
    {
      MR_Word check_hlds__simplify__simplify_proc__CommonStructPredIdStrs_14;
      MR_Word check_hlds__simplify__simplify_proc__CommonStructPredIdInts_15;

      check_hlds__simplify__simplify_proc__CommonStructPredIdStrs_14 = mercury__string__split_at_char_2_f_0((MR_Char) 44, check_hlds__simplify__simplify_proc__CommonStructPreds_13);
      check_hlds__simplify__simplify_proc__succeeded = mercury__list__map_3_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &check_hlds__simplify__simplify_proc_scalar_common_3[0], check_hlds__simplify__simplify_proc__CommonStructPredIdStrs_14, &check_hlds__simplify__simplify_proc__CommonStructPredIdInts_15);
      if (check_hlds__simplify__simplify_proc__succeeded)
      {
        MR_Integer check_hlds__simplify__simplify_proc__PredIdInt_16;

        check_hlds__simplify__simplify_proc__PredIdInt_16 = hlds__hlds_pred__pred_id_to_int_1_f_0(check_hlds__simplify__simplify_proc__PredId_7);
        check_hlds__simplify__simplify_proc__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (check_hlds__simplify__simplify_proc__PredIdInt_16)), check_hlds__simplify__simplify_proc__CommonStructPredIdInts_15);
        if (check_hlds__simplify__simplify_proc__succeeded)
          *check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_18 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_20_20;
        else
        {
          MR_Word check_hlds__simplify__simplify_proc__Var_42 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_20_20, (MR_Integer) 0)))) & (MR_Integer) 1);
          MR_Word check_hlds__simplify__simplify_proc__Var_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_20_20, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          MR_Word check_hlds__simplify__simplify_proc__Var_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_20_20, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          MR_Word check_hlds__simplify__simplify_proc__Var_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_20_20, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
          MR_Word check_hlds__simplify__simplify_proc__Var_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_20_20, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
          MR_Word check_hlds__simplify__simplify_proc__Var_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_20_20, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
          MR_Word check_hlds__simplify__simplify_proc__Var_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_20_20, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
          MR_Word check_hlds__simplify__simplify_proc__Var_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_20_20, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
          MR_Word check_hlds__simplify__simplify_proc__Var_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_20_20, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
          MR_Word check_hlds__simplify__simplify_proc__Var_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_20_20, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
          MR_Word check_hlds__simplify__simplify_proc__Var_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_20_20, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
          MR_Word check_hlds__simplify__simplify_proc__Var_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_20_20, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
          MR_Word check_hlds__simplify__simplify_proc__Var_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_20_20, (MR_Integer) 0)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
          MR_Word check_hlds__simplify__simplify_proc__Var_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_20_20, (MR_Integer) 0)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
          MR_Word check_hlds__simplify__simplify_proc__Var_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_20_20, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_18 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((check_hlds__simplify__simplify_proc__Var_42 | ((((check_hlds__simplify__simplify_proc__Var_43 << (MR_Integer) 1)) | ((((check_hlds__simplify__simplify_proc__Var_44 << (MR_Integer) 2)) | ((((check_hlds__simplify__simplify_proc__Var_45 << (MR_Integer) 3)) | ((((check_hlds__simplify__simplify_proc__Var_46 << (MR_Integer) 4)) | ((((check_hlds__simplify__simplify_proc__Var_47 << (MR_Integer) 5)) | ((((check_hlds__simplify__simplify_proc__Var_48 << (MR_Integer) 6)) | ((((check_hlds__simplify__simplify_proc__Var_49 << (MR_Integer) 7)) | ((((check_hlds__simplify__simplify_proc__Var_50 << (MR_Integer) 8)) | ((((check_hlds__simplify__simplify_proc__Var_51 << (MR_Integer) 9)) | ((((check_hlds__simplify__simplify_proc__Var_52 << (MR_Integer) 10)) | ((((check_hlds__simplify__simplify_proc__Var_53 << (MR_Integer) 11)) | (((((MR_Integer) 0 << (MR_Integer) 12)) | ((((check_hlds__simplify__simplify_proc__Var_55 << (MR_Integer) 13)) | ((check_hlds__simplify__simplify_proc__Var_56 << (MR_Integer) 14)))))))))))))))))))))))))))))));
          }
        }
      }
      else
        *check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_18 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_20_20;
    }
  }
}

void mercury__check_hlds__simplify__simplify_proc__init(void)
{
}

void mercury__check_hlds__simplify__simplify_proc__init_type_tables(void)
{
}

void mercury__check_hlds__simplify__simplify_proc__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__simplify__simplify_proc__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module check_hlds.simplify.simplify_proc. */
