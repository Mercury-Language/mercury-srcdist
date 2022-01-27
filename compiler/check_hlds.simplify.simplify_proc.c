/*
** Automatically generated from `simplify_proc.m'
** by the Mercury compiler,
** version rotd-2015-09-15
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
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.det_analysis.mih"
#include "check_hlds.det_report.mih"
#include "check_hlds.det_util.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.simplify.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
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
#include "hlds.quantification.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
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




#line 151 "check_hlds.simplify.simplify_proc.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 154 "check_hlds.simplify.simplify_proc.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_proc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 277 "simplify_proc.m"
static void MR_CALL 
check_hlds__simplify__simplify_proc__IntroducedFrom__pred__simplify_proc_return_msgs__277__1_4_p_0(
#line 277 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__HeadVar__1_84,
#line 277 "simplify_proc.m"
  MR_String check_hlds__simplify__simplify_proc__HeadVar__2_85,
#line 277 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__HeadVar__3_86,
#line 277 "simplify_proc.m"
  MR_Word * check_hlds__simplify__simplify_proc__HeadVar__4_87);

#line 730 "simplify_proc.m"
static void MR_CALL 
check_hlds__simplify__simplify_proc__case_list_contains_trace_acc_4_p_0(
#line 730 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__HeadVar__1_1,
#line 730 "simplify_proc.m"
  MR_Word * check_hlds__simplify__simplify_proc__HeadVar__2_2,
#line 730 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ContainsTrace_0_3,
#line 730 "simplify_proc.m"
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_ContainsTrace_4);

#line 720 "simplify_proc.m"
static void MR_CALL 
check_hlds__simplify__simplify_proc__goal_list_contains_trace_acc_4_p_0(
#line 720 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__HeadVar__1_1,
#line 720 "simplify_proc.m"
  MR_Word * check_hlds__simplify__simplify_proc__HeadVar__2_2,
#line 720 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ContainsTrace_0_3,
#line 720 "simplify_proc.m"
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_ContainsTrace_4);

#line 610 "simplify_proc.m"
static void MR_CALL 
check_hlds__simplify__simplify_proc__goal_contains_trace_3_p_0(
#line 610 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__Goal0_4,
#line 610 "simplify_proc.m"
  MR_Word * check_hlds__simplify__simplify_proc__Goal_5,
#line 610 "simplify_proc.m"
  MR_Word * check_hlds__simplify__simplify_proc__ContainsTrace_6);

#line 532 "simplify_proc.m"
static void MR_CALL 
check_hlds__simplify__simplify_proc__do_process_top_level_goal_6_p_0(
#line 532 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_0_33,
#line 532 "simplify_proc.m"
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_34,
#line 532 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__NestedContext0_8,
#line 532 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__InstMap0_9,
#line 532 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_0_35,
#line 532 "simplify_proc.m"
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_36);

#line 483 "simplify_proc.m"
static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_top_level_goal_6_p_0(
#line 483 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_0_15,
#line 483 "simplify_proc.m"
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_16,
#line 483 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__NestedContext0_8,
#line 483 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__InstMap0_9,
#line 483 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_0_17,
#line 483 "simplify_proc.m"
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_18);

#line 430 "simplify_proc.m"
static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_maybe_warn_about_duplicates_5_p_0(
#line 430 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__ModuleInfo_6,
#line 430 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__PredId_7,
#line 430 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__ProcInfo_8,
#line 430 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_0_29,
#line 430 "simplify_proc.m"
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_30);

#line 371 "simplify_proc.m"
static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_analyze_and_format_calls_7_p_0(
#line 371 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_0_29,
#line 371 "simplify_proc.m"
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_30,
#line 371 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__PredId_9,
#line 371 "simplify_proc.m"
  MR_Integer check_hlds__simplify__simplify_proc__ProcId_10,
#line 371 "simplify_proc.m"
  MR_Word * check_hlds__simplify__simplify_proc__FormatSpecs_11,
#line 371 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_0_31,
#line 371 "simplify_proc.m"
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_32);

#line 352 "simplify_proc.m"
static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_maybe_mark_modecheck_clauses_2_p_0(
#line 352 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_0_13,
#line 352 "simplify_proc.m"
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_14);

#line 335 "simplify_proc.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_maybe_vary_parameters_5_p_0_1(
#line 335 "simplify_proc.m"
  MR_Box check_hlds__simplify__simplify_proc__closure_arg,
#line 335 "simplify_proc.m"
  MR_Box check_hlds__simplify__simplify_proc__wrapper_arg_1,
#line 335 "simplify_proc.m"
  MR_Box * check_hlds__simplify__simplify_proc__wrapper_arg_2);

#line 311 "simplify_proc.m"
static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_maybe_vary_parameters_5_p_0(
#line 311 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__ModuleInfo_6,
#line 311 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__PredId_7,
#line 311 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__ProcInfo_8,
#line 311 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_0_16,
#line 311 "simplify_proc.m"
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_17);

#line 277 "simplify_proc.m"
static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_return_msgs_8_p_0_1(
#line 277 "simplify_proc.m"
  MR_Box check_hlds__simplify__simplify_proc__closure_arg,
#line 277 "simplify_proc.m"
  MR_Box check_hlds__simplify__simplify_proc__wrapper_arg_1,
#line 277 "simplify_proc.m"
  MR_Box check_hlds__simplify__simplify_proc__wrapper_arg_2,
#line 277 "simplify_proc.m"
  MR_Box check_hlds__simplify__simplify_proc__wrapper_arg_3,
#line 277 "simplify_proc.m"
  MR_Box * check_hlds__simplify__simplify_proc__wrapper_arg_4);

#line 198 "simplify_proc.m"
static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_return_msgs_8_p_0(
#line 198 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__SimplifyTasks0_9,
#line 198 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__PredId_10,
#line 198 "simplify_proc.m"
  MR_Integer check_hlds__simplify__simplify_proc__ProcId_11,
#line 198 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_0_43,
#line 198 "simplify_proc.m"
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_44,
#line 198 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_0_45,
#line 198 "simplify_proc.m"
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_46,
#line 198 "simplify_proc.m"
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_47);


static /* final */ const MR_Box check_hlds__simplify__simplify_proc_scalar_common_1[21][2];

static /* final */ const MR_Box check_hlds__simplify__simplify_proc_scalar_common_2[3][3];

static /* final */ const MR_Box check_hlds__simplify__simplify_proc_scalar_common_3[4][1];

static /* final */ const MR_Box check_hlds__simplify__simplify_proc_scalar_common_4[1][7];

static /* final */ const MR_Box check_hlds__simplify__simplify_proc_scalar_common_5[1][5];


#line 749 "simplify_proc.m"
/* sealed */ struct check_hlds__simplify__simplify_proc__vector_common_type_6_0_s {
#line 749 "simplify_proc.m"
  const MR_String check_hlds__simplify__simplify_proc__vector_common_type_6_0__vct_6_f_0;
#line 749 "simplify_proc.m"
  const MR_Integer check_hlds__simplify__simplify_proc__vector_common_type_6_0__vct_6_f_1;
#line 749 "simplify_proc.m"
};

static /* final */ const struct check_hlds__simplify__simplify_proc__vector_common_type_6_0_s check_hlds__simplify__simplify_proc_vector_common_6[7];

#line 768 "simplify_proc.m"
/* sealed */ struct check_hlds__simplify__simplify_proc__vector_common_type_7_0_s {
#line 768 "simplify_proc.m"
  const MR_String check_hlds__simplify__simplify_proc__vector_common_type_7_0__vct_7_f_0;
#line 768 "simplify_proc.m"
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
    ((MR_Box) (&check_hlds__simplify__simplify_proc_scalar_common_3[1])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 20 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_proc_scalar_common_3[3])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_proc_scalar_common_2[3][3] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_proc_scalar_common_4[0])),
    ((MR_Box) (check_hlds__simplify__simplify_proc__simplify_proc_return_msgs_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_proc_scalar_common_5[0])),
    ((MR_Box) (check_hlds__simplify__simplify_proc__simplify_proc_maybe_vary_parameters_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_proc_scalar_common_3[4][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_proc_scalar_common_1[12])))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_proc_scalar_common_1[18])))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_proc_scalar_common_4[1][7] = {
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

static /* final */ const MR_Box check_hlds__simplify__simplify_proc_scalar_common_5[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
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



#line 598 "check_hlds.simplify.simplify_proc.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 606 "check_hlds.simplify.simplify_proc.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_proc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 83 "simplify_proc.m"
MR_bool MR_CALL 
check_hlds__simplify__simplify_proc__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_p_0(
#line 83 "simplify_proc.m"
  MR_String check_hlds__simplify__simplify_proc__ModuleName_4,
#line 83 "simplify_proc.m"
  MR_String check_hlds__simplify__simplify_proc__PredName_5)
#line 83 "simplify_proc.m"
{
#line 749 "simplify_proc.m"
  {
#line 749 "simplify_proc.m"
    MR_bool check_hlds__simplify__simplify_proc__succeeded;
#line 749 "simplify_proc.m"
    MR_Integer check_hlds__simplify__simplify_proc__lo_0;
#line 749 "simplify_proc.m"
    MR_Integer check_hlds__simplify__simplify_proc__hi_1;
#line 749 "simplify_proc.m"
    MR_Integer check_hlds__simplify__simplify_proc__mid_2;
#line 749 "simplify_proc.m"
    MR_Integer check_hlds__simplify__simplify_proc__result_3;

#line 749 "simplify_proc.m"
    /* binary string jump switch */
#line 749 "simplify_proc.m"
    check_hlds__simplify__simplify_proc__lo_0 = (MR_Integer) 0;
#line 749 "simplify_proc.m"
    check_hlds__simplify__simplify_proc__hi_1 = (MR_Integer) 6;
#line 749 "simplify_proc.m"
    do
#line 749 "simplify_proc.m"
      {
#line 749 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__mid_2 = (((check_hlds__simplify__simplify_proc__lo_0 + check_hlds__simplify__simplify_proc__hi_1)) / (MR_Integer) 2);
#line 749 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__result_3 = MR_strcmp(check_hlds__simplify__simplify_proc__ModuleName_4, ((&check_hlds__simplify__simplify_proc_vector_common_6[0 + check_hlds__simplify__simplify_proc__mid_2]))->check_hlds__simplify__simplify_proc__vector_common_type_6_0__vct_6_f_0);
#line 749 "simplify_proc.m"
        if ((check_hlds__simplify__simplify_proc__result_3 == (MR_Integer) 0))
#line 749 "simplify_proc.m"
          {
#line 749 "simplify_proc.m"
#line 749 "simplify_proc.m"
            switch (((&check_hlds__simplify__simplify_proc_vector_common_6[0 + check_hlds__simplify__simplify_proc__mid_2]))->check_hlds__simplify__simplify_proc__vector_common_type_6_0__vct_6_f_1) {
#line 749 "simplify_proc.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 749 "simplify_proc.m"
              case (MR_Integer) 0:
#line 757 "simplify_proc.m"
                {
#line 757 "simplify_proc.m"
                  /* case "int" */
#line 757 "simplify_proc.m"
                  {
#line 757 "simplify_proc.m"
                    MR_Integer check_hlds__simplify__simplify_proc__lo_10;
#line 757 "simplify_proc.m"
                    MR_Integer check_hlds__simplify__simplify_proc__hi_11;
#line 757 "simplify_proc.m"
                    MR_Integer check_hlds__simplify__simplify_proc__mid_12;
#line 757 "simplify_proc.m"
                    MR_Integer check_hlds__simplify__simplify_proc__result_13;

#line 757 "simplify_proc.m"
                    /* binary string simple lookup switch */
#line 757 "simplify_proc.m"
                    check_hlds__simplify__simplify_proc__lo_10 = (MR_Integer) 0;
#line 757 "simplify_proc.m"
                    check_hlds__simplify__simplify_proc__hi_11 = (MR_Integer) 4;
#line 757 "simplify_proc.m"
                    do
#line 757 "simplify_proc.m"
                      {
#line 757 "simplify_proc.m"
                        check_hlds__simplify__simplify_proc__mid_12 = (((check_hlds__simplify__simplify_proc__lo_10 + check_hlds__simplify__simplify_proc__hi_11)) / (MR_Integer) 2);
#line 757 "simplify_proc.m"
                        check_hlds__simplify__simplify_proc__result_13 = MR_strcmp(check_hlds__simplify__simplify_proc__PredName_5, ((&check_hlds__simplify__simplify_proc_vector_common_7[4 + check_hlds__simplify__simplify_proc__mid_12]))->check_hlds__simplify__simplify_proc__vector_common_type_7_0__vct_7_f_0);
#line 757 "simplify_proc.m"
                        if ((check_hlds__simplify__simplify_proc__result_13 == (MR_Integer) 0))
#line 757 "simplify_proc.m"
                          {
#line 757 "simplify_proc.m"
                            check_hlds__simplify__simplify_proc__succeeded = MR_TRUE;
#line 757 "simplify_proc.m"
                            /* jump out of search loop */
#line 757 "simplify_proc.m"
                            goto label_1;
#line 757 "simplify_proc.m"
                          }
#line 757 "simplify_proc.m"
                        else
#line 757 "simplify_proc.m"
                        if ((check_hlds__simplify__simplify_proc__result_13 < (MR_Integer) 0))
#line 757 "simplify_proc.m"
                          check_hlds__simplify__simplify_proc__hi_11 = (check_hlds__simplify__simplify_proc__mid_12 - (MR_Integer) 1);
#line 757 "simplify_proc.m"
                        else
#line 757 "simplify_proc.m"
                          check_hlds__simplify__simplify_proc__lo_10 = (check_hlds__simplify__simplify_proc__mid_12 + (MR_Integer) 1);
#line 757 "simplify_proc.m"
                      }
#line 757 "simplify_proc.m"
                    while ((check_hlds__simplify__simplify_proc__lo_10 <= check_hlds__simplify__simplify_proc__hi_11));
#line 757 "simplify_proc.m"
                    check_hlds__simplify__simplify_proc__succeeded = MR_FALSE;
#line 757 "simplify_proc.m"
                  label_1:;
#line 757 "simplify_proc.m"
                  }
#line 757 "simplify_proc.m"
                }
#line 749 "simplify_proc.m"
                break;
#line 749 "simplify_proc.m"
              case (MR_Integer) 1:
#line 764 "simplify_proc.m"
                {
#line 764 "simplify_proc.m"
                  /* case "io" */
#line 764 "simplify_proc.m"
                  check_hlds__simplify__simplify_proc__succeeded = (strcmp(check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "write_string") == 0);
#line 764 "simplify_proc.m"
                }
#line 749 "simplify_proc.m"
                break;
#line 749 "simplify_proc.m"
              case (MR_Integer) 2:
#line 751 "simplify_proc.m"
                {
#line 751 "simplify_proc.m"
                  /* case "private_builtin" */
#line 751 "simplify_proc.m"
                  if ((strcmp(check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "state_var_copy") == 0))
#line 752 "simplify_proc.m"
                    check_hlds__simplify__simplify_proc__succeeded = MR_TRUE;
#line 751 "simplify_proc.m"
                  else
#line 751 "simplify_proc.m"
                  if ((strcmp(check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "builtin_compound_eq") == 0))
#line 750 "simplify_proc.m"
                    check_hlds__simplify__simplify_proc__succeeded = MR_TRUE;
#line 751 "simplify_proc.m"
                  else
#line 751 "simplify_proc.m"
                  if ((strcmp(check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "builtin_compound_lt") == 0))
#line 751 "simplify_proc.m"
                    check_hlds__simplify__simplify_proc__succeeded = MR_TRUE;
#line 751 "simplify_proc.m"
                  else
#line 751 "simplify_proc.m"
                    check_hlds__simplify__simplify_proc__succeeded = MR_FALSE;
#line 751 "simplify_proc.m"
                }
#line 749 "simplify_proc.m"
                break;
#line 749 "simplify_proc.m"
              case (MR_Integer) 3:
#line 795 "simplify_proc.m"
                {
#line 795 "simplify_proc.m"
                  /* case "stream" */
#line 795 "simplify_proc.m"
                  check_hlds__simplify__simplify_proc__succeeded = (strcmp(check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "put") == 0);
#line 795 "simplify_proc.m"
                }
#line 749 "simplify_proc.m"
                break;
#line 749 "simplify_proc.m"
              case (MR_Integer) 4:
#line 768 "simplify_proc.m"
                {
#line 768 "simplify_proc.m"
                  /* case "string" */
#line 768 "simplify_proc.m"
                  {
#line 768 "simplify_proc.m"
                    MR_Integer check_hlds__simplify__simplify_proc__lo_6;
#line 768 "simplify_proc.m"
                    MR_Integer check_hlds__simplify__simplify_proc__hi_7;
#line 768 "simplify_proc.m"
                    MR_Integer check_hlds__simplify__simplify_proc__mid_8;
#line 768 "simplify_proc.m"
                    MR_Integer check_hlds__simplify__simplify_proc__result_9;

#line 768 "simplify_proc.m"
                    /* binary string simple lookup switch */
#line 768 "simplify_proc.m"
                    check_hlds__simplify__simplify_proc__lo_6 = (MR_Integer) 0;
#line 768 "simplify_proc.m"
                    check_hlds__simplify__simplify_proc__hi_7 = (MR_Integer) 3;
#line 768 "simplify_proc.m"
                    do
#line 768 "simplify_proc.m"
                      {
#line 768 "simplify_proc.m"
                        check_hlds__simplify__simplify_proc__mid_8 = (((check_hlds__simplify__simplify_proc__lo_6 + check_hlds__simplify__simplify_proc__hi_7)) / (MR_Integer) 2);
#line 768 "simplify_proc.m"
                        check_hlds__simplify__simplify_proc__result_9 = MR_strcmp(check_hlds__simplify__simplify_proc__PredName_5, ((&check_hlds__simplify__simplify_proc_vector_common_7[0 + check_hlds__simplify__simplify_proc__mid_8]))->check_hlds__simplify__simplify_proc__vector_common_type_7_0__vct_7_f_0);
#line 768 "simplify_proc.m"
                        if ((check_hlds__simplify__simplify_proc__result_9 == (MR_Integer) 0))
#line 768 "simplify_proc.m"
                          {
#line 768 "simplify_proc.m"
                            check_hlds__simplify__simplify_proc__succeeded = MR_TRUE;
#line 768 "simplify_proc.m"
                            /* jump out of search loop */
#line 768 "simplify_proc.m"
                            goto label_0;
#line 768 "simplify_proc.m"
                          }
#line 768 "simplify_proc.m"
                        else
#line 768 "simplify_proc.m"
                        if ((check_hlds__simplify__simplify_proc__result_9 < (MR_Integer) 0))
#line 768 "simplify_proc.m"
                          check_hlds__simplify__simplify_proc__hi_7 = (check_hlds__simplify__simplify_proc__mid_8 - (MR_Integer) 1);
#line 768 "simplify_proc.m"
                        else
#line 768 "simplify_proc.m"
                          check_hlds__simplify__simplify_proc__lo_6 = (check_hlds__simplify__simplify_proc__mid_8 + (MR_Integer) 1);
#line 768 "simplify_proc.m"
                      }
#line 768 "simplify_proc.m"
                    while ((check_hlds__simplify__simplify_proc__lo_6 <= check_hlds__simplify__simplify_proc__hi_7));
#line 768 "simplify_proc.m"
                    check_hlds__simplify__simplify_proc__succeeded = MR_FALSE;
#line 768 "simplify_proc.m"
                  label_0:;
#line 768 "simplify_proc.m"
                  }
#line 768 "simplify_proc.m"
                }
#line 749 "simplify_proc.m"
                break;
#line 749 "simplify_proc.m"
              case (MR_Integer) 5:
#line 775 "simplify_proc.m"
                {
#line 775 "simplify_proc.m"
                  /* case "string.format" */
#line 775 "simplify_proc.m"
                  {
#line 775 "simplify_proc.m"
                    MR_Integer check_hlds__simplify__simplify_proc__case_num_5 = (MR_Integer) -1;

#line 775 "simplify_proc.m"
                    if (((((((((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 0)) == (MR_Integer) 102)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 1)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 2)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 3)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 4)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 5)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 6)) == (MR_Integer) 95))))
#line 775 "simplify_proc.m"
#line 775 "simplify_proc.m"
                      switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 7)) {
#line 775 "simplify_proc.m"
                        case (MR_Integer) 99:
#line 775 "simplify_proc.m"
                          if (((((((((((((((((((((((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 8)) == (MR_Integer) 104)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 9)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 10)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 11)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 12)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 13)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 14)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 15)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 16)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 17)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 18)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 19)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 20)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 21)) == (MR_Integer) 95))))
#line 775 "simplify_proc.m"
#line 775 "simplify_proc.m"
                            switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 22)) {
#line 775 "simplify_proc.m"
                              case (MR_Integer) 110:
#line 775 "simplify_proc.m"
                                if (MR_offset_streq(23, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "format_char_component_nowidth"))
#line 775 "simplify_proc.m"
                                  check_hlds__simplify__simplify_proc__case_num_5 = (MR_Integer) 0;
#line 775 "simplify_proc.m"
                                break;
#line 775 "simplify_proc.m"
                              case (MR_Integer) 119:
#line 775 "simplify_proc.m"
                                if (MR_offset_streq(23, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "format_char_component_width"))
#line 775 "simplify_proc.m"
                                  check_hlds__simplify__simplify_proc__case_num_5 = (MR_Integer) 1;
#line 775 "simplify_proc.m"
                                break;
#line 775 "simplify_proc.m"
                            }
#line 775 "simplify_proc.m"
                          break;
#line 775 "simplify_proc.m"
                        case (MR_Integer) 102:
#line 775 "simplify_proc.m"
                          if (((((((((((((((((((((((((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 8)) == (MR_Integer) 108)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 9)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 10)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 11)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 12)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 13)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 14)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 15)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 16)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 17)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 18)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 19)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 20)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 21)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 22)) == (MR_Integer) 95))))
#line 775 "simplify_proc.m"
#line 775 "simplify_proc.m"
                            switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 23)) {
#line 775 "simplify_proc.m"
                              case (MR_Integer) 110:
#line 775 "simplify_proc.m"
                                if (((((((((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 24)) == (MR_Integer) 111)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 25)) == (MR_Integer) 119)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 26)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 27)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 28)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 29)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 30)) == (MR_Integer) 95))))
#line 775 "simplify_proc.m"
#line 775 "simplify_proc.m"
                                  switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 31)) {
#line 775 "simplify_proc.m"
                                    case (MR_Integer) 110:
#line 775 "simplify_proc.m"
                                      if (MR_offset_streq(32, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "format_float_component_nowidth_noprec"))
#line 775 "simplify_proc.m"
                                        check_hlds__simplify__simplify_proc__case_num_5 = (MR_Integer) 2;
#line 775 "simplify_proc.m"
                                      break;
#line 775 "simplify_proc.m"
                                    case (MR_Integer) 112:
#line 775 "simplify_proc.m"
                                      if (MR_offset_streq(32, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "format_float_component_nowidth_prec"))
#line 775 "simplify_proc.m"
                                        check_hlds__simplify__simplify_proc__case_num_5 = (MR_Integer) 3;
#line 775 "simplify_proc.m"
                                      break;
#line 775 "simplify_proc.m"
                                  }
#line 775 "simplify_proc.m"
                                break;
#line 775 "simplify_proc.m"
                              case (MR_Integer) 119:
#line 775 "simplify_proc.m"
                                if (((((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 24)) == (MR_Integer) 105)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 25)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 26)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 27)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 28)) == (MR_Integer) 95))))
#line 775 "simplify_proc.m"
#line 775 "simplify_proc.m"
                                  switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 29)) {
#line 775 "simplify_proc.m"
                                    case (MR_Integer) 110:
#line 775 "simplify_proc.m"
                                      if (MR_offset_streq(30, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "format_float_component_width_noprec"))
#line 775 "simplify_proc.m"
                                        check_hlds__simplify__simplify_proc__case_num_5 = (MR_Integer) 4;
#line 775 "simplify_proc.m"
                                      break;
#line 775 "simplify_proc.m"
                                    case (MR_Integer) 112:
#line 775 "simplify_proc.m"
                                      if (MR_offset_streq(30, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "format_float_component_width_prec"))
#line 775 "simplify_proc.m"
                                        check_hlds__simplify__simplify_proc__case_num_5 = (MR_Integer) 5;
#line 775 "simplify_proc.m"
                                      break;
#line 775 "simplify_proc.m"
                                  }
#line 775 "simplify_proc.m"
                                break;
#line 775 "simplify_proc.m"
                            }
#line 775 "simplify_proc.m"
                          break;
#line 775 "simplify_proc.m"
                        case (MR_Integer) 115:
#line 775 "simplify_proc.m"
#line 775 "simplify_proc.m"
                          switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 8)) {
#line 775 "simplify_proc.m"
                            case (MR_Integer) 105:
#line 775 "simplify_proc.m"
                              if (((((((((((((((((((((((((((((((((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 9)) == (MR_Integer) 103)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 10)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 11)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 12)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 13)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 14)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 15)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 16)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 17)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 18)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 19)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 20)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 21)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 22)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 23)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 24)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 25)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 26)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 27)) == (MR_Integer) 95))))
#line 775 "simplify_proc.m"
#line 775 "simplify_proc.m"
                                switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 28)) {
#line 775 "simplify_proc.m"
                                  case (MR_Integer) 110:
#line 775 "simplify_proc.m"
                                    if (((((((((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 29)) == (MR_Integer) 111)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 30)) == (MR_Integer) 119)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 31)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 32)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 33)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 34)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 35)) == (MR_Integer) 95))))
#line 775 "simplify_proc.m"
#line 775 "simplify_proc.m"
                                      switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 36)) {
#line 775 "simplify_proc.m"
                                        case (MR_Integer) 110:
#line 775 "simplify_proc.m"
                                          if (MR_offset_streq(37, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "format_signed_int_component_nowidth_noprec"))
#line 775 "simplify_proc.m"
                                            check_hlds__simplify__simplify_proc__case_num_5 = (MR_Integer) 6;
#line 775 "simplify_proc.m"
                                          break;
#line 775 "simplify_proc.m"
                                        case (MR_Integer) 112:
#line 775 "simplify_proc.m"
                                          if (MR_offset_streq(37, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "format_signed_int_component_nowidth_prec"))
#line 775 "simplify_proc.m"
                                            check_hlds__simplify__simplify_proc__case_num_5 = (MR_Integer) 7;
#line 775 "simplify_proc.m"
                                          break;
#line 775 "simplify_proc.m"
                                      }
#line 775 "simplify_proc.m"
                                    break;
#line 775 "simplify_proc.m"
                                  case (MR_Integer) 119:
#line 775 "simplify_proc.m"
                                    if (((((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 29)) == (MR_Integer) 105)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 30)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 31)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 32)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 33)) == (MR_Integer) 95))))
#line 775 "simplify_proc.m"
#line 775 "simplify_proc.m"
                                      switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 34)) {
#line 775 "simplify_proc.m"
                                        case (MR_Integer) 110:
#line 775 "simplify_proc.m"
                                          if (MR_offset_streq(35, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "format_signed_int_component_width_noprec"))
#line 775 "simplify_proc.m"
                                            check_hlds__simplify__simplify_proc__case_num_5 = (MR_Integer) 8;
#line 775 "simplify_proc.m"
                                          break;
#line 775 "simplify_proc.m"
                                        case (MR_Integer) 112:
#line 775 "simplify_proc.m"
                                          if (MR_offset_streq(35, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "format_signed_int_component_width_prec"))
#line 775 "simplify_proc.m"
                                            check_hlds__simplify__simplify_proc__case_num_5 = (MR_Integer) 9;
#line 775 "simplify_proc.m"
                                          break;
#line 775 "simplify_proc.m"
                                      }
#line 775 "simplify_proc.m"
                                    break;
#line 775 "simplify_proc.m"
                                }
#line 775 "simplify_proc.m"
                              break;
#line 775 "simplify_proc.m"
                            case (MR_Integer) 116:
#line 775 "simplify_proc.m"
                              if (((((((((((((((((((((((((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 9)) == (MR_Integer) 114)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 10)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 11)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 12)) == (MR_Integer) 103)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 13)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 14)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 15)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 16)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 17)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 18)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 19)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 20)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 21)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 22)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 23)) == (MR_Integer) 95))))
#line 775 "simplify_proc.m"
#line 775 "simplify_proc.m"
                                switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 24)) {
#line 775 "simplify_proc.m"
                                  case (MR_Integer) 110:
#line 775 "simplify_proc.m"
                                    if (((((((((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 25)) == (MR_Integer) 111)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 26)) == (MR_Integer) 119)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 27)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 28)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 29)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 30)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 31)) == (MR_Integer) 95))))
#line 775 "simplify_proc.m"
#line 775 "simplify_proc.m"
                                      switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 32)) {
#line 775 "simplify_proc.m"
                                        case (MR_Integer) 110:
#line 775 "simplify_proc.m"
                                          if (MR_offset_streq(33, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "format_string_component_nowidth_noprec"))
#line 775 "simplify_proc.m"
                                            check_hlds__simplify__simplify_proc__case_num_5 = (MR_Integer) 10;
#line 775 "simplify_proc.m"
                                          break;
#line 775 "simplify_proc.m"
                                        case (MR_Integer) 112:
#line 775 "simplify_proc.m"
                                          if (MR_offset_streq(33, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "format_string_component_nowidth_prec"))
#line 775 "simplify_proc.m"
                                            check_hlds__simplify__simplify_proc__case_num_5 = (MR_Integer) 11;
#line 775 "simplify_proc.m"
                                          break;
#line 775 "simplify_proc.m"
                                      }
#line 775 "simplify_proc.m"
                                    break;
#line 775 "simplify_proc.m"
                                  case (MR_Integer) 119:
#line 775 "simplify_proc.m"
                                    if (((((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 25)) == (MR_Integer) 105)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 26)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 27)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 28)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 29)) == (MR_Integer) 95))))
#line 775 "simplify_proc.m"
#line 775 "simplify_proc.m"
                                      switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 30)) {
#line 775 "simplify_proc.m"
                                        case (MR_Integer) 110:
#line 775 "simplify_proc.m"
                                          if (MR_offset_streq(31, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "format_string_component_width_noprec"))
#line 775 "simplify_proc.m"
                                            check_hlds__simplify__simplify_proc__case_num_5 = (MR_Integer) 12;
#line 775 "simplify_proc.m"
                                          break;
#line 775 "simplify_proc.m"
                                        case (MR_Integer) 112:
#line 775 "simplify_proc.m"
                                          if (MR_offset_streq(31, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "format_string_component_width_prec"))
#line 775 "simplify_proc.m"
                                            check_hlds__simplify__simplify_proc__case_num_5 = (MR_Integer) 13;
#line 775 "simplify_proc.m"
                                          break;
#line 775 "simplify_proc.m"
                                      }
#line 775 "simplify_proc.m"
                                    break;
#line 775 "simplify_proc.m"
                                }
#line 775 "simplify_proc.m"
                              break;
#line 775 "simplify_proc.m"
                          }
#line 775 "simplify_proc.m"
                          break;
#line 775 "simplify_proc.m"
                        case (MR_Integer) 117:
#line 775 "simplify_proc.m"
                          if (((((((((((((((((((((((((((((((((((((((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 8)) == (MR_Integer) 110)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 9)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 10)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 11)) == (MR_Integer) 103)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 12)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 13)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 14)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 15)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 16)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 17)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 18)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 19)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 20)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 21)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 22)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 23)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 24)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 25)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 26)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 27)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 28)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 29)) == (MR_Integer) 95))))
#line 775 "simplify_proc.m"
#line 775 "simplify_proc.m"
                            switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 30)) {
#line 775 "simplify_proc.m"
                              case (MR_Integer) 110:
#line 775 "simplify_proc.m"
                                if (((((((((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 31)) == (MR_Integer) 111)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 32)) == (MR_Integer) 119)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 33)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 34)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 35)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 36)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 37)) == (MR_Integer) 95))))
#line 775 "simplify_proc.m"
#line 775 "simplify_proc.m"
                                  switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 38)) {
#line 775 "simplify_proc.m"
                                    case (MR_Integer) 110:
#line 775 "simplify_proc.m"
                                      if (MR_offset_streq(39, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "format_unsigned_int_component_nowidth_noprec"))
#line 775 "simplify_proc.m"
                                        check_hlds__simplify__simplify_proc__case_num_5 = (MR_Integer) 14;
#line 775 "simplify_proc.m"
                                      break;
#line 775 "simplify_proc.m"
                                    case (MR_Integer) 112:
#line 775 "simplify_proc.m"
                                      if (MR_offset_streq(39, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "format_unsigned_int_component_nowidth_prec"))
#line 775 "simplify_proc.m"
                                        check_hlds__simplify__simplify_proc__case_num_5 = (MR_Integer) 15;
#line 775 "simplify_proc.m"
                                      break;
#line 775 "simplify_proc.m"
                                  }
#line 775 "simplify_proc.m"
                                break;
#line 775 "simplify_proc.m"
                              case (MR_Integer) 119:
#line 775 "simplify_proc.m"
                                if (((((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 31)) == (MR_Integer) 105)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 32)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 33)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 34)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 35)) == (MR_Integer) 95))))
#line 775 "simplify_proc.m"
#line 775 "simplify_proc.m"
                                  switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 36)) {
#line 775 "simplify_proc.m"
                                    case (MR_Integer) 110:
#line 775 "simplify_proc.m"
                                      if (MR_offset_streq(37, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "format_unsigned_int_component_width_noprec"))
#line 775 "simplify_proc.m"
                                        check_hlds__simplify__simplify_proc__case_num_5 = (MR_Integer) 16;
#line 775 "simplify_proc.m"
                                      break;
#line 775 "simplify_proc.m"
                                    case (MR_Integer) 112:
#line 775 "simplify_proc.m"
                                      if (MR_offset_streq(37, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "format_unsigned_int_component_width_prec"))
#line 775 "simplify_proc.m"
                                        check_hlds__simplify__simplify_proc__case_num_5 = (MR_Integer) 17;
#line 775 "simplify_proc.m"
                                      break;
#line 775 "simplify_proc.m"
                                  }
#line 775 "simplify_proc.m"
                                break;
#line 775 "simplify_proc.m"
                            }
#line 775 "simplify_proc.m"
                          break;
#line 775 "simplify_proc.m"
                      }
#line 775 "simplify_proc.m"
                    if ((check_hlds__simplify__simplify_proc__case_num_5 < (MR_Integer) 0))
#line 775 "simplify_proc.m"
                      check_hlds__simplify__simplify_proc__succeeded = MR_FALSE;
#line 775 "simplify_proc.m"
                    else
#line 775 "simplify_proc.m"
                      {
#line 775 "simplify_proc.m"
                        /* we found a match; look up the results */
#line 775 "simplify_proc.m"
                        check_hlds__simplify__simplify_proc__succeeded = MR_TRUE;
#line 775 "simplify_proc.m"
                      }
#line 775 "simplify_proc.m"
                  }
#line 775 "simplify_proc.m"
                }
#line 749 "simplify_proc.m"
                break;
#line 749 "simplify_proc.m"
              case (MR_Integer) 6:
#line 800 "simplify_proc.m"
                {
#line 800 "simplify_proc.m"
                  /* case "table_builtin" */
#line 800 "simplify_proc.m"
                  {
#line 800 "simplify_proc.m"
                    MR_Integer check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) -1;

#line 800 "simplify_proc.m"
                    if (((((((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 0)) == (MR_Integer) 116)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 1)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 2)) == (MR_Integer) 98)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 3)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 4)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 5)) == (MR_Integer) 95))))
#line 800 "simplify_proc.m"
#line 800 "simplify_proc.m"
                      switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 6)) {
#line 800 "simplify_proc.m"
                        case (MR_Integer) 101:
#line 800 "simplify_proc.m"
                          if (MR_offset_streq(7, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_error"))
#line 800 "simplify_proc.m"
                            check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 0;
#line 800 "simplify_proc.m"
                          break;
#line 800 "simplify_proc.m"
                        case (MR_Integer) 105:
#line 800 "simplify_proc.m"
                          if (((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 7)) == (MR_Integer) 111)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 8)) == (MR_Integer) 95))))
#line 800 "simplify_proc.m"
#line 800 "simplify_proc.m"
                            switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 9)) {
#line 800 "simplify_proc.m"
                              case (MR_Integer) 99:
#line 800 "simplify_proc.m"
                                if (MR_offset_streq(10, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_io_copy_io_state"))
#line 800 "simplify_proc.m"
                                  check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 1;
#line 800 "simplify_proc.m"
                                break;
#line 800 "simplify_proc.m"
                              case (MR_Integer) 104:
#line 800 "simplify_proc.m"
                                if (MR_offset_streq(10, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_io_has_occurred"))
#line 800 "simplify_proc.m"
                                  check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 2;
#line 800 "simplify_proc.m"
                                break;
#line 800 "simplify_proc.m"
                              case (MR_Integer) 105:
#line 800 "simplify_proc.m"
                                if (MR_offset_streq(10, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_io_in_range"))
#line 800 "simplify_proc.m"
                                  check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 3;
#line 800 "simplify_proc.m"
                                break;
#line 800 "simplify_proc.m"
                              case (MR_Integer) 108:
#line 800 "simplify_proc.m"
                                if (MR_offset_streq(10, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_io_left_bracket_unitized_goal"))
#line 800 "simplify_proc.m"
                                  check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 4;
#line 800 "simplify_proc.m"
                                break;
#line 800 "simplify_proc.m"
                              case (MR_Integer) 114:
#line 800 "simplify_proc.m"
                                if (MR_offset_streq(10, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_io_right_bracket_unitized_goal"))
#line 800 "simplify_proc.m"
                                  check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 5;
#line 800 "simplify_proc.m"
                                break;
#line 800 "simplify_proc.m"
                            }
#line 800 "simplify_proc.m"
                          break;
#line 800 "simplify_proc.m"
                        case (MR_Integer) 108:
#line 800 "simplify_proc.m"
                          if (((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 7)) == (MR_Integer) 111)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 8)) == (MR_Integer) 111))))
#line 800 "simplify_proc.m"
#line 800 "simplify_proc.m"
                            switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 9)) {
#line 800 "simplify_proc.m"
                              case (MR_Integer) 107:
#line 800 "simplify_proc.m"
                                if (((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 10)) == (MR_Integer) 117)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 11)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 12)) == (MR_Integer) 95))))
#line 800 "simplify_proc.m"
#line 800 "simplify_proc.m"
                                  switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 13)) {
#line 800 "simplify_proc.m"
                                    case (MR_Integer) 105:
#line 800 "simplify_proc.m"
                                      if (((((((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 14)) == (MR_Integer) 110)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 15)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 16)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 17)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 18)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 19)) == (MR_Integer) 95))))
#line 800 "simplify_proc.m"
#line 800 "simplify_proc.m"
                                        switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 20)) {
#line 800 "simplify_proc.m"
                                          case (MR_Integer) 97:
#line 800 "simplify_proc.m"
                                            if (MR_offset_streq(21, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_lookup_insert_addr"))
#line 800 "simplify_proc.m"
                                              check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 6;
#line 800 "simplify_proc.m"
                                            break;
#line 800 "simplify_proc.m"
                                          case (MR_Integer) 99:
#line 800 "simplify_proc.m"
                                            if (MR_offset_streq(21, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_lookup_insert_char"))
#line 800 "simplify_proc.m"
                                              check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 7;
#line 800 "simplify_proc.m"
                                            break;
#line 800 "simplify_proc.m"
                                          case (MR_Integer) 101:
#line 800 "simplify_proc.m"
                                            if (MR_offset_streq(21, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_lookup_insert_enum"))
#line 800 "simplify_proc.m"
                                              check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 8;
#line 800 "simplify_proc.m"
                                            break;
#line 800 "simplify_proc.m"
                                          case (MR_Integer) 102:
#line 800 "simplify_proc.m"
#line 800 "simplify_proc.m"
                                            switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 21)) {
#line 800 "simplify_proc.m"
                                              case (MR_Integer) 108:
#line 800 "simplify_proc.m"
                                                if (MR_offset_streq(22, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_lookup_insert_float"))
#line 800 "simplify_proc.m"
                                                  check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 9;
#line 800 "simplify_proc.m"
                                                break;
#line 800 "simplify_proc.m"
                                              case (MR_Integer) 111:
#line 800 "simplify_proc.m"
                                                if (MR_offset_streq(22, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_lookup_insert_foreign_enum"))
#line 800 "simplify_proc.m"
                                                  check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 10;
#line 800 "simplify_proc.m"
                                                break;
#line 800 "simplify_proc.m"
                                            }
#line 800 "simplify_proc.m"
                                            break;
#line 800 "simplify_proc.m"
                                          case (MR_Integer) 103:
#line 800 "simplify_proc.m"
                                            if (MR_offset_streq(21, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_lookup_insert_gen"))
#line 800 "simplify_proc.m"
                                              check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 11;
#line 800 "simplify_proc.m"
                                            break;
#line 800 "simplify_proc.m"
                                          case (MR_Integer) 105:
#line 800 "simplify_proc.m"
                                            if (MR_offset_streq(21, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_lookup_insert_int"))
#line 800 "simplify_proc.m"
                                              check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 12;
#line 800 "simplify_proc.m"
                                            break;
#line 800 "simplify_proc.m"
                                          case (MR_Integer) 112:
#line 800 "simplify_proc.m"
                                            if (((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 21)) == (MR_Integer) 111)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 22)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 23)) == (MR_Integer) 121))))
#line 800 "simplify_proc.m"
#line 800 "simplify_proc.m"
                                              switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 24)) {
#line 800 "simplify_proc.m"
                                                case (MR_Integer) 0:
#line 800 "simplify_proc.m"
                                                  check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 13;
#line 800 "simplify_proc.m"
                                                  break;
#line 800 "simplify_proc.m"
                                                case (MR_Integer) 95:
#line 800 "simplify_proc.m"
                                                  if (MR_offset_streq(25, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_lookup_insert_poly_addr"))
#line 800 "simplify_proc.m"
                                                    check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 14;
#line 800 "simplify_proc.m"
                                                  break;
#line 800 "simplify_proc.m"
                                              }
#line 800 "simplify_proc.m"
                                            break;
#line 800 "simplify_proc.m"
                                          case (MR_Integer) 115:
#line 800 "simplify_proc.m"
                                            if (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 21)) == (MR_Integer) 116))
#line 800 "simplify_proc.m"
#line 800 "simplify_proc.m"
                                              switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 22)) {
#line 800 "simplify_proc.m"
                                                case (MR_Integer) 97:
#line 800 "simplify_proc.m"
                                                  if (MR_offset_streq(23, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_lookup_insert_start_int"))
#line 800 "simplify_proc.m"
                                                    check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 15;
#line 800 "simplify_proc.m"
                                                  break;
#line 800 "simplify_proc.m"
                                                case (MR_Integer) 114:
#line 800 "simplify_proc.m"
                                                  if (MR_offset_streq(23, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_lookup_insert_string"))
#line 800 "simplify_proc.m"
                                                    check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 16;
#line 800 "simplify_proc.m"
                                                  break;
#line 800 "simplify_proc.m"
                                              }
#line 800 "simplify_proc.m"
                                            break;
#line 800 "simplify_proc.m"
                                          case (MR_Integer) 116:
#line 800 "simplify_proc.m"
                                            if (((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 21)) == (MR_Integer) 121)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 22)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 23)) == (MR_Integer) 101))))
#line 800 "simplify_proc.m"
#line 800 "simplify_proc.m"
                                              switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 24)) {
#line 800 "simplify_proc.m"
                                                case (MR_Integer) 99:
#line 800 "simplify_proc.m"
                                                  if (MR_offset_streq(25, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_lookup_insert_typeclassinfo"))
#line 800 "simplify_proc.m"
                                                    check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 17;
#line 800 "simplify_proc.m"
                                                  break;
#line 800 "simplify_proc.m"
                                                case (MR_Integer) 105:
#line 800 "simplify_proc.m"
                                                  if (MR_offset_streq(25, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_lookup_insert_typeinfo"))
#line 800 "simplify_proc.m"
                                                    check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 18;
#line 800 "simplify_proc.m"
                                                  break;
#line 800 "simplify_proc.m"
                                              }
#line 800 "simplify_proc.m"
                                            break;
#line 800 "simplify_proc.m"
                                        }
#line 800 "simplify_proc.m"
                                      break;
#line 800 "simplify_proc.m"
                                    case (MR_Integer) 114:
#line 800 "simplify_proc.m"
                                      if (((((((((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 14)) == (MR_Integer) 101)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 15)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 16)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 17)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 18)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 19)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 20)) == (MR_Integer) 95))))
#line 800 "simplify_proc.m"
#line 800 "simplify_proc.m"
                                        switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 21)) {
#line 800 "simplify_proc.m"
                                          case (MR_Integer) 97:
#line 800 "simplify_proc.m"
                                            if (MR_offset_streq(22, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_lookup_restore_any_answer"))
#line 800 "simplify_proc.m"
                                              check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 19;
#line 800 "simplify_proc.m"
                                            break;
#line 800 "simplify_proc.m"
                                          case (MR_Integer) 99:
#line 800 "simplify_proc.m"
                                            if (MR_offset_streq(22, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_lookup_restore_char_answer"))
#line 800 "simplify_proc.m"
                                              check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 20;
#line 800 "simplify_proc.m"
                                            break;
#line 800 "simplify_proc.m"
                                          case (MR_Integer) 102:
#line 800 "simplify_proc.m"
                                            if (MR_offset_streq(22, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_lookup_restore_float_answer"))
#line 800 "simplify_proc.m"
                                              check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 21;
#line 800 "simplify_proc.m"
                                            break;
#line 800 "simplify_proc.m"
                                          case (MR_Integer) 105:
#line 800 "simplify_proc.m"
#line 800 "simplify_proc.m"
                                            switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 22)) {
#line 800 "simplify_proc.m"
                                              case (MR_Integer) 110:
#line 800 "simplify_proc.m"
                                                if (MR_offset_streq(23, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_lookup_restore_int_answer"))
#line 800 "simplify_proc.m"
                                                  check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 22;
#line 800 "simplify_proc.m"
                                                break;
#line 800 "simplify_proc.m"
                                              case (MR_Integer) 111:
#line 800 "simplify_proc.m"
                                                if (MR_offset_streq(23, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_lookup_restore_io_state_answer"))
#line 800 "simplify_proc.m"
                                                  check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 23;
#line 800 "simplify_proc.m"
                                                break;
#line 800 "simplify_proc.m"
                                            }
#line 800 "simplify_proc.m"
                                            break;
#line 800 "simplify_proc.m"
                                          case (MR_Integer) 115:
#line 800 "simplify_proc.m"
                                            if (MR_offset_streq(22, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_lookup_restore_string_answer"))
#line 800 "simplify_proc.m"
                                              check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 24;
#line 800 "simplify_proc.m"
                                            break;
#line 800 "simplify_proc.m"
                                        }
#line 800 "simplify_proc.m"
                                      break;
#line 800 "simplify_proc.m"
                                    case (MR_Integer) 115:
#line 800 "simplify_proc.m"
                                      if (((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 14)) == (MR_Integer) 97)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 15)) == (MR_Integer) 118)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 16)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 17)) == (MR_Integer) 95))))
#line 800 "simplify_proc.m"
#line 800 "simplify_proc.m"
                                        switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 18)) {
#line 800 "simplify_proc.m"
                                          case (MR_Integer) 97:
#line 800 "simplify_proc.m"
                                            if (MR_offset_streq(19, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_lookup_save_any_answer"))
#line 800 "simplify_proc.m"
                                              check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 25;
#line 800 "simplify_proc.m"
                                            break;
#line 800 "simplify_proc.m"
                                          case (MR_Integer) 99:
#line 800 "simplify_proc.m"
                                            if (MR_offset_streq(19, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_lookup_save_char_answer"))
#line 800 "simplify_proc.m"
                                              check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 26;
#line 800 "simplify_proc.m"
                                            break;
#line 800 "simplify_proc.m"
                                          case (MR_Integer) 102:
#line 800 "simplify_proc.m"
                                            if (MR_offset_streq(19, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_lookup_save_float_answer"))
#line 800 "simplify_proc.m"
                                              check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 27;
#line 800 "simplify_proc.m"
                                            break;
#line 800 "simplify_proc.m"
                                          case (MR_Integer) 105:
#line 800 "simplify_proc.m"
#line 800 "simplify_proc.m"
                                            switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 19)) {
#line 800 "simplify_proc.m"
                                              case (MR_Integer) 110:
#line 800 "simplify_proc.m"
                                                if (MR_offset_streq(20, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_lookup_save_int_answer"))
#line 800 "simplify_proc.m"
                                                  check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 28;
#line 800 "simplify_proc.m"
                                                break;
#line 800 "simplify_proc.m"
                                              case (MR_Integer) 111:
#line 800 "simplify_proc.m"
                                                if (MR_offset_streq(20, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_lookup_save_io_state_answer"))
#line 800 "simplify_proc.m"
                                                  check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 29;
#line 800 "simplify_proc.m"
                                                break;
#line 800 "simplify_proc.m"
                                            }
#line 800 "simplify_proc.m"
                                            break;
#line 800 "simplify_proc.m"
                                          case (MR_Integer) 115:
#line 800 "simplify_proc.m"
                                            if (MR_offset_streq(19, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_lookup_save_string_answer"))
#line 800 "simplify_proc.m"
                                              check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 30;
#line 800 "simplify_proc.m"
                                            break;
#line 800 "simplify_proc.m"
                                        }
#line 800 "simplify_proc.m"
                                      break;
#line 800 "simplify_proc.m"
                                  }
#line 800 "simplify_proc.m"
                                break;
#line 800 "simplify_proc.m"
                              case (MR_Integer) 112:
#line 800 "simplify_proc.m"
                                if (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 10)) == (MR_Integer) 95))
#line 800 "simplify_proc.m"
#line 800 "simplify_proc.m"
                                  switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 11)) {
#line 800 "simplify_proc.m"
                                    case (MR_Integer) 109:
#line 800 "simplify_proc.m"
                                      if (((((((((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 12)) == (MR_Integer) 97)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 13)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 14)) == (MR_Integer) 107)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 15)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 16)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 17)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 18)) == (MR_Integer) 95))))
#line 800 "simplify_proc.m"
#line 800 "simplify_proc.m"
                                        switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 19)) {
#line 800 "simplify_proc.m"
                                          case (MR_Integer) 97:
#line 800 "simplify_proc.m"
                                            if (MR_offset_streq(20, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_loop_mark_as_active_and_fail"))
#line 800 "simplify_proc.m"
                                              check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 31;
#line 800 "simplify_proc.m"
                                            break;
#line 800 "simplify_proc.m"
                                          case (MR_Integer) 105:
#line 800 "simplify_proc.m"
                                            if (((((((((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 20)) == (MR_Integer) 110)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 21)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 22)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 23)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 24)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 25)) == (MR_Integer) 118)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 26)) == (MR_Integer) 101))))
#line 800 "simplify_proc.m"
#line 800 "simplify_proc.m"
                                              switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 27)) {
#line 800 "simplify_proc.m"
                                                case (MR_Integer) 0:
#line 800 "simplify_proc.m"
                                                  check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 32;
#line 800 "simplify_proc.m"
                                                  break;
#line 800 "simplify_proc.m"
                                                case (MR_Integer) 95:
#line 800 "simplify_proc.m"
                                                  if (MR_offset_streq(28, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_loop_mark_as_inactive_and_fail"))
#line 800 "simplify_proc.m"
                                                    check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 33;
#line 800 "simplify_proc.m"
                                                  break;
#line 800 "simplify_proc.m"
                                              }
#line 800 "simplify_proc.m"
                                            break;
#line 800 "simplify_proc.m"
                                        }
#line 800 "simplify_proc.m"
                                      break;
#line 800 "simplify_proc.m"
                                    case (MR_Integer) 115:
#line 800 "simplify_proc.m"
                                      if (((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 12)) == (MR_Integer) 101)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 13)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 14)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 15)) == (MR_Integer) 112))))
#line 800 "simplify_proc.m"
#line 800 "simplify_proc.m"
                                        switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 16)) {
#line 800 "simplify_proc.m"
                                          case (MR_Integer) 0:
#line 800 "simplify_proc.m"
                                            check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 34;
#line 800 "simplify_proc.m"
                                            break;
#line 800 "simplify_proc.m"
                                          case (MR_Integer) 95:
#line 800 "simplify_proc.m"
                                            if (MR_offset_streq(17, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_loop_setup_shortcut"))
#line 800 "simplify_proc.m"
                                              check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 35;
#line 800 "simplify_proc.m"
                                            break;
#line 800 "simplify_proc.m"
                                        }
#line 800 "simplify_proc.m"
                                      break;
#line 800 "simplify_proc.m"
                                  }
#line 800 "simplify_proc.m"
                                break;
#line 800 "simplify_proc.m"
                            }
#line 800 "simplify_proc.m"
                          break;
#line 800 "simplify_proc.m"
                        case (MR_Integer) 109:
#line 800 "simplify_proc.m"
#line 800 "simplify_proc.m"
                          switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 7)) {
#line 800 "simplify_proc.m"
                            case (MR_Integer) 101:
#line 800 "simplify_proc.m"
                              if (((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 8)) == (MR_Integer) 109)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 9)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 10)) == (MR_Integer) 95))))
#line 800 "simplify_proc.m"
#line 800 "simplify_proc.m"
                                switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 11)) {
#line 800 "simplify_proc.m"
                                  case (MR_Integer) 99:
#line 800 "simplify_proc.m"
                                    if (MR_offset_streq(12, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_memo_create_answer_block"))
#line 800 "simplify_proc.m"
                                      check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 36;
#line 800 "simplify_proc.m"
                                    break;
#line 800 "simplify_proc.m"
                                  case (MR_Integer) 100:
#line 800 "simplify_proc.m"
                                    if (((((((((((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 12)) == (MR_Integer) 101)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 13)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 14)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 15)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 16)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 17)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 18)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 19)) == (MR_Integer) 112))))
#line 800 "simplify_proc.m"
#line 800 "simplify_proc.m"
                                      switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 20)) {
#line 800 "simplify_proc.m"
                                        case (MR_Integer) 0:
#line 800 "simplify_proc.m"
                                          check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 37;
#line 800 "simplify_proc.m"
                                          break;
#line 800 "simplify_proc.m"
                                        case (MR_Integer) 95:
#line 800 "simplify_proc.m"
                                          if (MR_offset_streq(21, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_memo_det_setup_shortcut"))
#line 800 "simplify_proc.m"
                                            check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 38;
#line 800 "simplify_proc.m"
                                          break;
#line 800 "simplify_proc.m"
                                      }
#line 800 "simplify_proc.m"
                                    break;
#line 800 "simplify_proc.m"
                                  case (MR_Integer) 103:
#line 800 "simplify_proc.m"
                                    if (MR_offset_streq(12, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_memo_get_answer_block"))
#line 800 "simplify_proc.m"
                                      check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 39;
#line 800 "simplify_proc.m"
                                    break;
#line 800 "simplify_proc.m"
                                  case (MR_Integer) 109:
#line 800 "simplify_proc.m"
                                    if (((((((((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 12)) == (MR_Integer) 97)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 13)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 14)) == (MR_Integer) 107)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 15)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 16)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 17)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 18)) == (MR_Integer) 95))))
#line 800 "simplify_proc.m"
#line 800 "simplify_proc.m"
                                      switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 19)) {
#line 800 "simplify_proc.m"
                                        case (MR_Integer) 97:
#line 800 "simplify_proc.m"
                                          if (MR_offset_streq(20, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_memo_mark_as_active_and_fail"))
#line 800 "simplify_proc.m"
                                            check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 40;
#line 800 "simplify_proc.m"
                                          break;
#line 800 "simplify_proc.m"
                                        case (MR_Integer) 99:
#line 800 "simplify_proc.m"
                                          if (MR_offset_streq(20, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_memo_mark_as_complete_and_fail"))
#line 800 "simplify_proc.m"
                                            check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 41;
#line 800 "simplify_proc.m"
                                          break;
#line 800 "simplify_proc.m"
                                        case (MR_Integer) 102:
#line 800 "simplify_proc.m"
                                          if (MR_offset_streq(20, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_memo_mark_as_failed"))
#line 800 "simplify_proc.m"
                                            check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 42;
#line 800 "simplify_proc.m"
                                          break;
#line 800 "simplify_proc.m"
                                        case (MR_Integer) 105:
#line 800 "simplify_proc.m"
                                          if (MR_offset_streq(20, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_memo_mark_as_incomplete"))
#line 800 "simplify_proc.m"
                                            check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 43;
#line 800 "simplify_proc.m"
                                          break;
#line 800 "simplify_proc.m"
                                        case (MR_Integer) 115:
#line 800 "simplify_proc.m"
                                          if (MR_offset_streq(20, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_memo_mark_as_succeeded"))
#line 800 "simplify_proc.m"
                                            check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 44;
#line 800 "simplify_proc.m"
                                          break;
#line 800 "simplify_proc.m"
                                      }
#line 800 "simplify_proc.m"
                                    break;
#line 800 "simplify_proc.m"
                                  case (MR_Integer) 110:
#line 800 "simplify_proc.m"
                                    if (((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 12)) == (MR_Integer) 111)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 13)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 14)) == (MR_Integer) 95))))
#line 800 "simplify_proc.m"
#line 800 "simplify_proc.m"
                                      switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 15)) {
#line 800 "simplify_proc.m"
                                        case (MR_Integer) 97:
#line 800 "simplify_proc.m"
                                          if (((((((((((((((((((((((((((((((((((((((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 16)) == (MR_Integer) 110)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 17)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 18)) == (MR_Integer) 119)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 19)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 20)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 21)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 22)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 23)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 24)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 25)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 26)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 27)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 28)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 29)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 30)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 31)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 32)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 33)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 34)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 35)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 36)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 37)) == (MR_Integer) 101))))
#line 800 "simplify_proc.m"
#line 800 "simplify_proc.m"
                                            switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 38)) {
#line 800 "simplify_proc.m"
                                              case (MR_Integer) 0:
#line 800 "simplify_proc.m"
                                                check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 45;
#line 800 "simplify_proc.m"
                                                break;
#line 800 "simplify_proc.m"
                                              case (MR_Integer) 95:
#line 800 "simplify_proc.m"
                                                if (MR_offset_streq(39, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_memo_non_answer_is_not_duplicate_shortcut"))
#line 800 "simplify_proc.m"
                                                  check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 46;
#line 800 "simplify_proc.m"
                                                break;
#line 800 "simplify_proc.m"
                                            }
#line 800 "simplify_proc.m"
                                          break;
#line 800 "simplify_proc.m"
                                        case (MR_Integer) 103:
#line 800 "simplify_proc.m"
                                          if (MR_offset_streq(16, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_memo_non_get_answer_table"))
#line 800 "simplify_proc.m"
                                            check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 47;
#line 800 "simplify_proc.m"
                                          break;
#line 800 "simplify_proc.m"
                                        case (MR_Integer) 114:
#line 800 "simplify_proc.m"
                                          if (MR_offset_streq(16, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_memo_non_return_all_shortcut"))
#line 800 "simplify_proc.m"
                                            check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 48;
#line 800 "simplify_proc.m"
                                          break;
#line 800 "simplify_proc.m"
                                        case (MR_Integer) 115:
#line 800 "simplify_proc.m"
                                          if (MR_offset_streq(16, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_memo_non_setup"))
#line 800 "simplify_proc.m"
                                            check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 49;
#line 800 "simplify_proc.m"
                                          break;
#line 800 "simplify_proc.m"
                                      }
#line 800 "simplify_proc.m"
                                    break;
#line 800 "simplify_proc.m"
                                  case (MR_Integer) 114:
#line 800 "simplify_proc.m"
                                    if (((((((((((((((((((((((((((((((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 12)) == (MR_Integer) 101)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 13)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 14)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 15)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 16)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 17)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 18)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 19)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 20)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 21)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 22)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 23)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 24)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 25)) == (MR_Integer) 119)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 26)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 27)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 28)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 29)) == (MR_Integer) 95))))
#line 800 "simplify_proc.m"
#line 800 "simplify_proc.m"
                                      switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 30)) {
#line 800 "simplify_proc.m"
                                        case (MR_Integer) 109:
#line 800 "simplify_proc.m"
                                          if (MR_offset_streq(31, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_memo_return_all_answers_multi"))
#line 800 "simplify_proc.m"
                                            check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 50;
#line 800 "simplify_proc.m"
                                          break;
#line 800 "simplify_proc.m"
                                        case (MR_Integer) 110:
#line 800 "simplify_proc.m"
                                          if (MR_offset_streq(31, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_memo_return_all_answers_nondet"))
#line 800 "simplify_proc.m"
                                            check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 51;
#line 800 "simplify_proc.m"
                                          break;
#line 800 "simplify_proc.m"
                                      }
#line 800 "simplify_proc.m"
                                    break;
#line 800 "simplify_proc.m"
                                  case (MR_Integer) 115:
#line 800 "simplify_proc.m"
                                    if (((((((((((((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 12)) == (MR_Integer) 101)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 13)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 14)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 15)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 16)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 17)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 18)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 19)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 20)) == (MR_Integer) 112))))
#line 800 "simplify_proc.m"
#line 800 "simplify_proc.m"
                                      switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 21)) {
#line 800 "simplify_proc.m"
                                        case (MR_Integer) 0:
#line 800 "simplify_proc.m"
                                          check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 52;
#line 800 "simplify_proc.m"
                                          break;
#line 800 "simplify_proc.m"
                                        case (MR_Integer) 95:
#line 800 "simplify_proc.m"
                                          if (MR_offset_streq(22, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_memo_semi_setup_shortcut"))
#line 800 "simplify_proc.m"
                                            check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 53;
#line 800 "simplify_proc.m"
                                          break;
#line 800 "simplify_proc.m"
                                      }
#line 800 "simplify_proc.m"
                                    break;
#line 800 "simplify_proc.m"
                                }
#line 800 "simplify_proc.m"
                              break;
#line 800 "simplify_proc.m"
                            case (MR_Integer) 109:
#line 800 "simplify_proc.m"
#line 800 "simplify_proc.m"
                              switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 8)) {
#line 800 "simplify_proc.m"
                                case (MR_Integer) 95:
#line 800 "simplify_proc.m"
#line 800 "simplify_proc.m"
                                  switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 9)) {
#line 800 "simplify_proc.m"
                                    case (MR_Integer) 97:
#line 800 "simplify_proc.m"
                                      if (((((((((((((((((((((((((((((((((((((((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 10)) == (MR_Integer) 110)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 11)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 12)) == (MR_Integer) 119)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 13)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 14)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 15)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 16)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 17)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 18)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 19)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 20)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 21)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 22)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 23)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 24)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 25)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 26)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 27)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 28)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 29)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 30)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 31)) == (MR_Integer) 101))))
#line 800 "simplify_proc.m"
#line 800 "simplify_proc.m"
                                        switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 32)) {
#line 800 "simplify_proc.m"
                                          case (MR_Integer) 0:
#line 800 "simplify_proc.m"
                                            check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 54;
#line 800 "simplify_proc.m"
                                            break;
#line 800 "simplify_proc.m"
                                          case (MR_Integer) 95:
#line 800 "simplify_proc.m"
                                            if (MR_offset_streq(33, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_mm_answer_is_not_duplicate_shortcut"))
#line 800 "simplify_proc.m"
                                              check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 55;
#line 800 "simplify_proc.m"
                                            break;
#line 800 "simplify_proc.m"
                                        }
#line 800 "simplify_proc.m"
                                      break;
#line 800 "simplify_proc.m"
                                    case (MR_Integer) 99:
#line 800 "simplify_proc.m"
#line 800 "simplify_proc.m"
                                      switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 10)) {
#line 800 "simplify_proc.m"
                                        case (MR_Integer) 111:
#line 800 "simplify_proc.m"
                                          if (MR_offset_streq(11, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_mm_completion"))
#line 800 "simplify_proc.m"
                                            check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 56;
#line 800 "simplify_proc.m"
                                          break;
#line 800 "simplify_proc.m"
                                        case (MR_Integer) 114:
#line 800 "simplify_proc.m"
                                          if (MR_offset_streq(11, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_mm_create_answer_block"))
#line 800 "simplify_proc.m"
                                            check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 57;
#line 800 "simplify_proc.m"
                                          break;
#line 800 "simplify_proc.m"
                                      }
#line 800 "simplify_proc.m"
                                      break;
#line 800 "simplify_proc.m"
                                    case (MR_Integer) 102:
#line 800 "simplify_proc.m"
                                      if (MR_offset_streq(10, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_mm_fill_answer_block_shortcut"))
#line 800 "simplify_proc.m"
                                        check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 58;
#line 800 "simplify_proc.m"
                                      break;
#line 800 "simplify_proc.m"
                                    case (MR_Integer) 103:
#line 800 "simplify_proc.m"
                                      if (MR_offset_streq(10, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_mm_get_answer_table"))
#line 800 "simplify_proc.m"
                                        check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 59;
#line 800 "simplify_proc.m"
                                      break;
#line 800 "simplify_proc.m"
                                    case (MR_Integer) 114:
#line 800 "simplify_proc.m"
                                      if (((((((((((((((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 10)) == (MR_Integer) 101)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 11)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 12)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 13)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 14)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 15)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 16)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 17)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 18)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 19)) == (MR_Integer) 95))))
#line 800 "simplify_proc.m"
#line 800 "simplify_proc.m"
                                        switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 20)) {
#line 800 "simplify_proc.m"
                                          case (MR_Integer) 109:
#line 800 "simplify_proc.m"
                                            if (MR_offset_streq(21, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_mm_return_all_multi"))
#line 800 "simplify_proc.m"
                                              check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 60;
#line 800 "simplify_proc.m"
                                            break;
#line 800 "simplify_proc.m"
                                          case (MR_Integer) 110:
#line 800 "simplify_proc.m"
                                            if (MR_offset_streq(21, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_mm_return_all_nondet"))
#line 800 "simplify_proc.m"
                                              check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 61;
#line 800 "simplify_proc.m"
                                            break;
#line 800 "simplify_proc.m"
                                          case (MR_Integer) 115:
#line 800 "simplify_proc.m"
                                            if (MR_offset_streq(21, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_mm_return_all_shortcut"))
#line 800 "simplify_proc.m"
                                              check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 62;
#line 800 "simplify_proc.m"
                                            break;
#line 800 "simplify_proc.m"
                                        }
#line 800 "simplify_proc.m"
                                      break;
#line 800 "simplify_proc.m"
                                    case (MR_Integer) 115:
#line 800 "simplify_proc.m"
#line 800 "simplify_proc.m"
                                      switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 10)) {
#line 800 "simplify_proc.m"
                                        case (MR_Integer) 101:
#line 800 "simplify_proc.m"
                                          if (MR_offset_streq(11, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_mm_setup"))
#line 800 "simplify_proc.m"
                                            check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 63;
#line 800 "simplify_proc.m"
                                          break;
#line 800 "simplify_proc.m"
                                        case (MR_Integer) 117:
#line 800 "simplify_proc.m"
                                          if (MR_offset_streq(11, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_mm_suspend_consumer"))
#line 800 "simplify_proc.m"
                                            check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 64;
#line 800 "simplify_proc.m"
                                          break;
#line 800 "simplify_proc.m"
                                      }
#line 800 "simplify_proc.m"
                                      break;
#line 800 "simplify_proc.m"
                                  }
#line 800 "simplify_proc.m"
                                  break;
#line 800 "simplify_proc.m"
                                case (MR_Integer) 111:
#line 800 "simplify_proc.m"
                                  if (((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 9)) == (MR_Integer) 115)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 10)) == (MR_Integer) 95))))
#line 800 "simplify_proc.m"
#line 800 "simplify_proc.m"
                                    switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 11)) {
#line 800 "simplify_proc.m"
                                      case (MR_Integer) 97:
#line 800 "simplify_proc.m"
                                        if (((((((((((((((((((((((((((((((((((((((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 12)) == (MR_Integer) 110)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 13)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 14)) == (MR_Integer) 119)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 15)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 16)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 17)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 18)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 19)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 20)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 21)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 22)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 23)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 24)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 25)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 26)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 27)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 28)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 29)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 30)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 31)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 32)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 33)) == (MR_Integer) 101))))
#line 800 "simplify_proc.m"
#line 800 "simplify_proc.m"
                                          switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 34)) {
#line 800 "simplify_proc.m"
                                            case (MR_Integer) 0:
#line 800 "simplify_proc.m"
                                              check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 65;
#line 800 "simplify_proc.m"
                                              break;
#line 800 "simplify_proc.m"
                                            case (MR_Integer) 95:
#line 800 "simplify_proc.m"
                                              if (MR_offset_streq(35, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_mmos_answer_is_not_duplicate_shortcut"))
#line 800 "simplify_proc.m"
                                                check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 66;
#line 800 "simplify_proc.m"
                                              break;
#line 800 "simplify_proc.m"
                                          }
#line 800 "simplify_proc.m"
                                        break;
#line 800 "simplify_proc.m"
                                      case (MR_Integer) 99:
#line 800 "simplify_proc.m"
#line 800 "simplify_proc.m"
                                        switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 12)) {
#line 800 "simplify_proc.m"
                                          case (MR_Integer) 111:
#line 800 "simplify_proc.m"
#line 800 "simplify_proc.m"
                                            switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 13)) {
#line 800 "simplify_proc.m"
                                              case (MR_Integer) 109:
#line 800 "simplify_proc.m"
                                                if (MR_offset_streq(14, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_mmos_completion"))
#line 800 "simplify_proc.m"
                                                  check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 67;
#line 800 "simplify_proc.m"
                                                break;
#line 800 "simplify_proc.m"
                                              case (MR_Integer) 110:
#line 800 "simplify_proc.m"
                                                if (((((((((((((((((((((((((((((((((((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 14)) == (MR_Integer) 115)) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 15)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 16)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 17)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 18)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 19)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 20)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 21)) == (MR_Integer) 120)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 22)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 23)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 24)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 25)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 26)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 27)) == (MR_Integer) 119)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 28)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 29)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 30)) == (MR_Integer) 95))))
#line 800 "simplify_proc.m"
#line 800 "simplify_proc.m"
                                                  switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 31)) {
#line 800 "simplify_proc.m"
                                                    case (MR_Integer) 109:
#line 800 "simplify_proc.m"
                                                      if (MR_offset_streq(32, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_mmos_consume_next_answer_multi"))
#line 800 "simplify_proc.m"
                                                        check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 68;
#line 800 "simplify_proc.m"
                                                      break;
#line 800 "simplify_proc.m"
                                                    case (MR_Integer) 110:
#line 800 "simplify_proc.m"
                                                      if (MR_offset_streq(32, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_mmos_consume_next_answer_nondet"))
#line 800 "simplify_proc.m"
                                                        check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 69;
#line 800 "simplify_proc.m"
                                                      break;
#line 800 "simplify_proc.m"
                                                  }
#line 800 "simplify_proc.m"
                                                break;
#line 800 "simplify_proc.m"
                                            }
#line 800 "simplify_proc.m"
                                            break;
#line 800 "simplify_proc.m"
                                          case (MR_Integer) 114:
#line 800 "simplify_proc.m"
                                            if (MR_offset_streq(13, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_mmos_create_answer_block"))
#line 800 "simplify_proc.m"
                                              check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 70;
#line 800 "simplify_proc.m"
                                            break;
#line 800 "simplify_proc.m"
                                        }
#line 800 "simplify_proc.m"
                                        break;
#line 800 "simplify_proc.m"
                                      case (MR_Integer) 112:
#line 800 "simplify_proc.m"
                                        if (MR_offset_streq(12, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_mmos_pickup_inputs"))
#line 800 "simplify_proc.m"
                                          check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 71;
#line 800 "simplify_proc.m"
                                        break;
#line 800 "simplify_proc.m"
                                      case (MR_Integer) 114:
#line 800 "simplify_proc.m"
                                        if (((MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 12)) == (MR_Integer) 101))
#line 800 "simplify_proc.m"
#line 800 "simplify_proc.m"
                                          switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 13)) {
#line 800 "simplify_proc.m"
                                            case (MR_Integer) 115:
#line 800 "simplify_proc.m"
                                              if (MR_offset_streq(14, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_mmos_restore_answers"))
#line 800 "simplify_proc.m"
                                                check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 72;
#line 800 "simplify_proc.m"
                                              break;
#line 800 "simplify_proc.m"
                                            case (MR_Integer) 116:
#line 800 "simplify_proc.m"
                                              if (MR_offset_streq(14, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_mmos_return_answer"))
#line 800 "simplify_proc.m"
                                                check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 73;
#line 800 "simplify_proc.m"
                                              break;
#line 800 "simplify_proc.m"
                                          }
#line 800 "simplify_proc.m"
                                        break;
#line 800 "simplify_proc.m"
                                      case (MR_Integer) 115:
#line 800 "simplify_proc.m"
#line 800 "simplify_proc.m"
                                        switch (MR_nth_code_unit(check_hlds__simplify__simplify_proc__PredName_5, 12)) {
#line 800 "simplify_proc.m"
                                          case (MR_Integer) 97:
#line 800 "simplify_proc.m"
                                            if (MR_offset_streq(13, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_mmos_save_inputs"))
#line 800 "simplify_proc.m"
                                              check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 74;
#line 800 "simplify_proc.m"
                                            break;
#line 800 "simplify_proc.m"
                                          case (MR_Integer) 101:
#line 800 "simplify_proc.m"
                                            if (MR_offset_streq(13, check_hlds__simplify__simplify_proc__PredName_5, (MR_String) "table_mmos_setup_consumer"))
#line 800 "simplify_proc.m"
                                              check_hlds__simplify__simplify_proc__case_num_4 = (MR_Integer) 75;
#line 800 "simplify_proc.m"
                                            break;
#line 800 "simplify_proc.m"
                                        }
#line 800 "simplify_proc.m"
                                        break;
#line 800 "simplify_proc.m"
                                    }
#line 800 "simplify_proc.m"
                                  break;
#line 800 "simplify_proc.m"
                              }
#line 800 "simplify_proc.m"
                              break;
#line 800 "simplify_proc.m"
                          }
#line 800 "simplify_proc.m"
                          break;
#line 800 "simplify_proc.m"
                      }
#line 800 "simplify_proc.m"
                    if ((check_hlds__simplify__simplify_proc__case_num_4 < (MR_Integer) 0))
#line 800 "simplify_proc.m"
                      check_hlds__simplify__simplify_proc__succeeded = MR_FALSE;
#line 800 "simplify_proc.m"
                    else
#line 800 "simplify_proc.m"
                      {
#line 800 "simplify_proc.m"
                        /* we found a match; look up the results */
#line 800 "simplify_proc.m"
                        check_hlds__simplify__simplify_proc__succeeded = MR_TRUE;
#line 800 "simplify_proc.m"
                      }
#line 800 "simplify_proc.m"
                  }
#line 800 "simplify_proc.m"
                }
#line 749 "simplify_proc.m"
                break;
#line 749 "simplify_proc.m"
            }
#line 749 "simplify_proc.m"
            /* jump out of search loop */
#line 749 "simplify_proc.m"
            goto label_2;
#line 749 "simplify_proc.m"
          }
#line 749 "simplify_proc.m"
        else
#line 749 "simplify_proc.m"
        if ((check_hlds__simplify__simplify_proc__result_3 < (MR_Integer) 0))
#line 749 "simplify_proc.m"
          check_hlds__simplify__simplify_proc__hi_1 = (check_hlds__simplify__simplify_proc__mid_2 - (MR_Integer) 1);
#line 749 "simplify_proc.m"
        else
#line 749 "simplify_proc.m"
          check_hlds__simplify__simplify_proc__lo_0 = (check_hlds__simplify__simplify_proc__mid_2 + (MR_Integer) 1);
#line 749 "simplify_proc.m"
      }
#line 749 "simplify_proc.m"
    while ((check_hlds__simplify__simplify_proc__lo_0 <= check_hlds__simplify__simplify_proc__hi_1));
#line 749 "simplify_proc.m"
    check_hlds__simplify__simplify_proc__succeeded = MR_FALSE;
#line 749 "simplify_proc.m"
  label_2:;
#line 749 "simplify_proc.m"
    return check_hlds__simplify__simplify_proc__succeeded;
#line 749 "simplify_proc.m"
  }
#line 83 "simplify_proc.m"
}

#line 277 "simplify_proc.m"
static void MR_CALL 
check_hlds__simplify__simplify_proc__IntroducedFrom__pred__simplify_proc_return_msgs__277__1_4_p_0(
#line 277 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__HeadVar__1_84,
#line 277 "simplify_proc.m"
  MR_String check_hlds__simplify__simplify_proc__HeadVar__2_85,
#line 277 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__HeadVar__3_86,
#line 277 "simplify_proc.m"
  MR_Word * check_hlds__simplify__simplify_proc__HeadVar__4_87)
#line 277 "simplify_proc.m"
{
#line 277 "simplify_proc.m"
  {
#line 277 "simplify_proc.m"
    MR_bool check_hlds__simplify__simplify_proc__succeeded;

#line 277 "simplify_proc.m"
    {
#line 277 "simplify_proc.m"
      mercury__varset__name_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__simplify_proc__HeadVar__1_84, check_hlds__simplify__simplify_proc__HeadVar__2_85, check_hlds__simplify__simplify_proc__HeadVar__3_86, check_hlds__simplify__simplify_proc__HeadVar__4_87);
#line 277 "simplify_proc.m"
      return;
    }
#line 277 "simplify_proc.m"
  }
#line 277 "simplify_proc.m"
}

#line 730 "simplify_proc.m"
static void MR_CALL 
check_hlds__simplify__simplify_proc__case_list_contains_trace_acc_4_p_0(
#line 730 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__HeadVar__1_1,
#line 730 "simplify_proc.m"
  MR_Word * check_hlds__simplify__simplify_proc__HeadVar__2_2,
#line 730 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ContainsTrace_0_3,
#line 730 "simplify_proc.m"
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_ContainsTrace_4)
#line 730 "simplify_proc.m"
{
#line 733 "simplify_proc.m"
  {
#line 733 "simplify_proc.m"
    MR_bool check_hlds__simplify__simplify_proc__succeeded;

#line 733 "simplify_proc.m"
    if ((check_hlds__simplify__simplify_proc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 733 "simplify_proc.m"
      {
#line 733 "simplify_proc.m"
        *check_hlds__simplify__simplify_proc__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 733 "simplify_proc.m"
        *check_hlds__simplify__simplify_proc__STATE_VARIABLE_ContainsTrace_4 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_ContainsTrace_0_3;
#line 733 "simplify_proc.m"
      }
#line 733 "simplify_proc.m"
    else
#line 735 "simplify_proc.m"
      {
#line 735 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__Case0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_proc__HeadVar__1_1, (MR_Integer) 0)));
#line 735 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__Cases0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_proc__HeadVar__1_1, (MR_Integer) 1)));
#line 735 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__Case_10;
#line 735 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__Cases_11;
#line 735 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__MainConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__Case0_8, (MR_Integer) 0)));
#line 735 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__OtherConsIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__Case0_8, (MR_Integer) 1)));
#line 735 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__Goal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__Case0_8, (MR_Integer) 2)));
#line 735 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__Goal_16;
#line 735 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__GoalContainsTrace_17;
#line 735 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ContainsTrace_20_20;

#line 737 "simplify_proc.m"
        {
#line 737 "simplify_proc.m"
          check_hlds__simplify__simplify_proc__goal_contains_trace_3_p_0(check_hlds__simplify__simplify_proc__Goal0_15, &check_hlds__simplify__simplify_proc__Goal_16, &check_hlds__simplify__simplify_proc__GoalContainsTrace_17);
        }
#line 738 "simplify_proc.m"
        {
#line 738 "simplify_proc.m"
          check_hlds__simplify__simplify_proc__Case_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 738 "simplify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__Case_10, 0) = ((MR_Box) (check_hlds__simplify__simplify_proc__MainConsId_13));
#line 738 "simplify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__Case_10, 1) = ((MR_Box) (check_hlds__simplify__simplify_proc__OtherConsIds_14));
#line 738 "simplify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__Case_10, 2) = ((MR_Box) (check_hlds__simplify__simplify_proc__Goal_16));
#line 738 "simplify_proc.m"
        }
#line 739 "simplify_proc.m"
        {
#line 739 "simplify_proc.m"
          check_hlds__simplify__simplify_proc__STATE_VARIABLE_ContainsTrace_20_20 = hlds__hlds_goal__worst_contains_trace_2_f_0(check_hlds__simplify__simplify_proc__GoalContainsTrace_17, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ContainsTrace_0_3);
        }
#line 740 "simplify_proc.m"
        {
#line 740 "simplify_proc.m"
          check_hlds__simplify__simplify_proc__case_list_contains_trace_acc_4_p_0(check_hlds__simplify__simplify_proc__Cases0_9, &check_hlds__simplify__simplify_proc__Cases_11, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ContainsTrace_20_20, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ContainsTrace_4);
        }
#line 734 "simplify_proc.m"
        {
#line 734 "simplify_proc.m"
          MR_Word base;
#line 734 "simplify_proc.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 734 "simplify_proc.m"
          *check_hlds__simplify__simplify_proc__HeadVar__2_2 = base;
#line 734 "simplify_proc.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_proc__Case_10));
#line 734 "simplify_proc.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_proc__Cases_11));
#line 734 "simplify_proc.m"
        }
#line 735 "simplify_proc.m"
      }
#line 733 "simplify_proc.m"
  }
#line 730 "simplify_proc.m"
}

#line 720 "simplify_proc.m"
static void MR_CALL 
check_hlds__simplify__simplify_proc__goal_list_contains_trace_acc_4_p_0(
#line 720 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__HeadVar__1_1,
#line 720 "simplify_proc.m"
  MR_Word * check_hlds__simplify__simplify_proc__HeadVar__2_2,
#line 720 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ContainsTrace_0_3,
#line 720 "simplify_proc.m"
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_ContainsTrace_4)
#line 720 "simplify_proc.m"
{
#line 723 "simplify_proc.m"
  {
#line 723 "simplify_proc.m"
    MR_bool check_hlds__simplify__simplify_proc__succeeded;

#line 723 "simplify_proc.m"
    if ((check_hlds__simplify__simplify_proc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 723 "simplify_proc.m"
      {
#line 723 "simplify_proc.m"
        *check_hlds__simplify__simplify_proc__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 723 "simplify_proc.m"
        *check_hlds__simplify__simplify_proc__STATE_VARIABLE_ContainsTrace_4 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_ContainsTrace_0_3;
#line 723 "simplify_proc.m"
      }
#line 723 "simplify_proc.m"
    else
#line 725 "simplify_proc.m"
      {
#line 725 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__Goal0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_proc__HeadVar__1_1, (MR_Integer) 0)));
#line 725 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__Goals0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_proc__HeadVar__1_1, (MR_Integer) 1)));
#line 725 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__Goal_10;
#line 725 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__Goals_11;
#line 725 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__GoalContainsTrace_13;
#line 725 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ContainsTrace_16_16;

#line 726 "simplify_proc.m"
        {
#line 726 "simplify_proc.m"
          check_hlds__simplify__simplify_proc__goal_contains_trace_3_p_0(check_hlds__simplify__simplify_proc__Goal0_8, &check_hlds__simplify__simplify_proc__Goal_10, &check_hlds__simplify__simplify_proc__GoalContainsTrace_13);
        }
#line 727 "simplify_proc.m"
        {
#line 727 "simplify_proc.m"
          check_hlds__simplify__simplify_proc__STATE_VARIABLE_ContainsTrace_16_16 = hlds__hlds_goal__worst_contains_trace_2_f_0(check_hlds__simplify__simplify_proc__GoalContainsTrace_13, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ContainsTrace_0_3);
        }
#line 728 "simplify_proc.m"
        {
#line 728 "simplify_proc.m"
          check_hlds__simplify__simplify_proc__goal_list_contains_trace_acc_4_p_0(check_hlds__simplify__simplify_proc__Goals0_9, &check_hlds__simplify__simplify_proc__Goals_11, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ContainsTrace_16_16, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ContainsTrace_4);
        }
#line 724 "simplify_proc.m"
        {
#line 724 "simplify_proc.m"
          MR_Word base;
#line 724 "simplify_proc.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 724 "simplify_proc.m"
          *check_hlds__simplify__simplify_proc__HeadVar__2_2 = base;
#line 724 "simplify_proc.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_proc__Goal_10));
#line 724 "simplify_proc.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_proc__Goals_11));
#line 724 "simplify_proc.m"
        }
#line 725 "simplify_proc.m"
      }
#line 723 "simplify_proc.m"
  }
#line 720 "simplify_proc.m"
}

#line 610 "simplify_proc.m"
static void MR_CALL 
check_hlds__simplify__simplify_proc__goal_contains_trace_3_p_0(
#line 610 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__Goal0_4,
#line 610 "simplify_proc.m"
  MR_Word * check_hlds__simplify__simplify_proc__Goal_5,
#line 610 "simplify_proc.m"
  MR_Word * check_hlds__simplify__simplify_proc__ContainsTrace_6)
#line 610 "simplify_proc.m"
{
#line 613 "simplify_proc.m"
  {
#line 613 "simplify_proc.m"
    MR_bool check_hlds__simplify__simplify_proc__succeeded;
#line 613 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__GoalExpr0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__Goal0_4, (MR_Integer) 0)));
#line 613 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__GoalInfo0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__Goal0_4, (MR_Integer) 1)));
#line 613 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__GoalExpr_32;
#line 613 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__GoalInfo_92;

#line 623 "simplify_proc.m"
#line 623 "simplify_proc.m"
    switch (MR_tag((MR_Word) check_hlds__simplify__simplify_proc__GoalExpr0_7)) {
#line 623 "simplify_proc.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 623 "simplify_proc.m"
      case (MR_Integer) 0:
#line 650 "simplify_proc.m"
        {
#line 650 "simplify_proc.m"
          MR_Word check_hlds__simplify__simplify_proc__SubGoal0_51 = (MR_Word) MR_body(((MR_Word) check_hlds__simplify__simplify_proc__GoalExpr0_7), (MR_Integer) 0);
#line 650 "simplify_proc.m"
          MR_Word check_hlds__simplify__simplify_proc__SubGoal_52;

#line 651 "simplify_proc.m"
          {
#line 651 "simplify_proc.m"
            check_hlds__simplify__simplify_proc__goal_contains_trace_3_p_0(check_hlds__simplify__simplify_proc__SubGoal0_51, &check_hlds__simplify__simplify_proc__SubGoal_52, check_hlds__simplify__simplify_proc__ContainsTrace_6);
          }
#line 652 "simplify_proc.m"
          check_hlds__simplify__simplify_proc__GoalExpr_32 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__simplify__simplify_proc__SubGoal_52);
#line 650 "simplify_proc.m"
        }
#line 623 "simplify_proc.m"
        break;
#line 623 "simplify_proc.m"
      case (MR_Integer) 1:
#line 623 "simplify_proc.m"
      case (MR_Integer) 2:
#line 620 "simplify_proc.m"
        {
#line 621 "simplify_proc.m"
          check_hlds__simplify__simplify_proc__GoalExpr_32 = check_hlds__simplify__simplify_proc__GoalExpr0_7;
#line 622 "simplify_proc.m"
          *check_hlds__simplify__simplify_proc__ContainsTrace_6 = (MR_Integer) 1;
#line 620 "simplify_proc.m"
        }
#line 623 "simplify_proc.m"
        break;
#line 623 "simplify_proc.m"
      case (MR_Integer) 3:
#line 623 "simplify_proc.m"
#line 623 "simplify_proc.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr0_7, (MR_Integer) 0)))) {
#line 623 "simplify_proc.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 623 "simplify_proc.m"
          case (MR_Integer) 0:
#line 623 "simplify_proc.m"
          case (MR_Integer) 1:
#line 620 "simplify_proc.m"
            {
#line 621 "simplify_proc.m"
              check_hlds__simplify__simplify_proc__GoalExpr_32 = check_hlds__simplify__simplify_proc__GoalExpr0_7;
#line 622 "simplify_proc.m"
              *check_hlds__simplify__simplify_proc__ContainsTrace_6 = (MR_Integer) 1;
#line 620 "simplify_proc.m"
            }
#line 623 "simplify_proc.m"
            break;
#line 623 "simplify_proc.m"
          case (MR_Integer) 2:
#line 624 "simplify_proc.m"
            {
#line 624 "simplify_proc.m"
              MR_Word check_hlds__simplify__simplify_proc__ConjType_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr0_7, (MR_Integer) 1)));
#line 624 "simplify_proc.m"
              MR_Word check_hlds__simplify__simplify_proc__SubGoals0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr0_7, (MR_Integer) 2)));
#line 624 "simplify_proc.m"
              MR_Word check_hlds__simplify__simplify_proc__SubGoals_36;

#line 626 "simplify_proc.m"
              {
#line 626 "simplify_proc.m"
                check_hlds__simplify__simplify_proc__goal_list_contains_trace_acc_4_p_0(check_hlds__simplify__simplify_proc__SubGoals0_34, &check_hlds__simplify__simplify_proc__SubGoals_36, (MR_Integer) 1, check_hlds__simplify__simplify_proc__ContainsTrace_6);
              }
#line 628 "simplify_proc.m"
              {
#line 628 "simplify_proc.m"
                check_hlds__simplify__simplify_proc__GoalExpr_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 628 "simplify_proc.m"
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 628 "simplify_proc.m"
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr_32, 1) = ((MR_Box) (check_hlds__simplify__simplify_proc__ConjType_33));
#line 628 "simplify_proc.m"
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr_32, 2) = ((MR_Box) (check_hlds__simplify__simplify_proc__SubGoals_36));
#line 628 "simplify_proc.m"
              }
#line 624 "simplify_proc.m"
            }
#line 623 "simplify_proc.m"
            break;
#line 623 "simplify_proc.m"
          case (MR_Integer) 3:
#line 630 "simplify_proc.m"
            {
#line 630 "simplify_proc.m"
              MR_Word check_hlds__simplify__simplify_proc__SubGoals0_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr0_7, (MR_Integer) 1)));
#line 630 "simplify_proc.m"
              MR_Word check_hlds__simplify__simplify_proc__SubGoals_101;

#line 632 "simplify_proc.m"
              {
#line 632 "simplify_proc.m"
                check_hlds__simplify__simplify_proc__goal_list_contains_trace_acc_4_p_0(check_hlds__simplify__simplify_proc__SubGoals0_99, &check_hlds__simplify__simplify_proc__SubGoals_101, (MR_Integer) 1, check_hlds__simplify__simplify_proc__ContainsTrace_6);
              }
#line 634 "simplify_proc.m"
              {
#line 634 "simplify_proc.m"
                check_hlds__simplify__simplify_proc__GoalExpr_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 634 "simplify_proc.m"
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 634 "simplify_proc.m"
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr_32, 1) = ((MR_Box) (check_hlds__simplify__simplify_proc__SubGoals_101));
#line 634 "simplify_proc.m"
              }
#line 630 "simplify_proc.m"
            }
#line 623 "simplify_proc.m"
            break;
#line 623 "simplify_proc.m"
          case (MR_Integer) 4:
#line 636 "simplify_proc.m"
            {
#line 636 "simplify_proc.m"
              MR_Word check_hlds__simplify__simplify_proc__SwitchVar_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr0_7, (MR_Integer) 1)));
#line 636 "simplify_proc.m"
              MR_Word check_hlds__simplify__simplify_proc__CanFail_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr0_7, (MR_Integer) 2)));
#line 636 "simplify_proc.m"
              MR_Word check_hlds__simplify__simplify_proc__Cases0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr0_7, (MR_Integer) 3)));
#line 636 "simplify_proc.m"
              MR_Word check_hlds__simplify__simplify_proc__Cases_40;

#line 638 "simplify_proc.m"
              {
#line 638 "simplify_proc.m"
                check_hlds__simplify__simplify_proc__case_list_contains_trace_acc_4_p_0(check_hlds__simplify__simplify_proc__Cases0_39, &check_hlds__simplify__simplify_proc__Cases_40, (MR_Integer) 1, check_hlds__simplify__simplify_proc__ContainsTrace_6);
              }
#line 640 "simplify_proc.m"
              {
#line 640 "simplify_proc.m"
                check_hlds__simplify__simplify_proc__GoalExpr_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 640 "simplify_proc.m"
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 640 "simplify_proc.m"
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr_32, 1) = ((MR_Box) (check_hlds__simplify__simplify_proc__SwitchVar_37));
#line 640 "simplify_proc.m"
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr_32, 2) = ((MR_Box) (check_hlds__simplify__simplify_proc__CanFail_38));
#line 640 "simplify_proc.m"
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr_32, 3) = ((MR_Box) (check_hlds__simplify__simplify_proc__Cases_40));
#line 640 "simplify_proc.m"
              }
#line 636 "simplify_proc.m"
            }
#line 623 "simplify_proc.m"
            break;
#line 623 "simplify_proc.m"
          case (MR_Integer) 5:
#line 654 "simplify_proc.m"
            {
#line 654 "simplify_proc.m"
              MR_Word check_hlds__simplify__simplify_proc__Reason_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr0_7, (MR_Integer) 1)));
#line 654 "simplify_proc.m"
              MR_Word check_hlds__simplify__simplify_proc__SubGoal0_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr0_7, (MR_Integer) 2)));
#line 654 "simplify_proc.m"
              MR_Word check_hlds__simplify__simplify_proc__SubGoal_104;

#line 659 "simplify_proc.m"
#line 659 "simplify_proc.m"
              switch (MR_tag((MR_Word) check_hlds__simplify__simplify_proc__Reason_53)) {
#line 659 "simplify_proc.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 659 "simplify_proc.m"
                case (MR_Integer) 0:
#line 659 "simplify_proc.m"
                case (MR_Integer) 1:
#line 659 "simplify_proc.m"
                case (MR_Integer) 2:
#line 684 "simplify_proc.m"
                  {
#line 684 "simplify_proc.m"
                    check_hlds__simplify__simplify_proc__goal_contains_trace_3_p_0(check_hlds__simplify__simplify_proc__SubGoal0_103, &check_hlds__simplify__simplify_proc__SubGoal_104, check_hlds__simplify__simplify_proc__ContainsTrace_6);
                  }
#line 659 "simplify_proc.m"
                  break;
#line 659 "simplify_proc.m"
                case (MR_Integer) 3:
#line 659 "simplify_proc.m"
#line 659 "simplify_proc.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__Reason_53, (MR_Integer) 0)))) {
#line 659 "simplify_proc.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 659 "simplify_proc.m"
                    case (MR_Integer) 0:
#line 659 "simplify_proc.m"
                    case (MR_Integer) 1:
#line 659 "simplify_proc.m"
                    case (MR_Integer) 2:
#line 659 "simplify_proc.m"
                    case (MR_Integer) 3:
#line 659 "simplify_proc.m"
                    case (MR_Integer) 4:
#line 659 "simplify_proc.m"
                    case (MR_Integer) 7:
#line 684 "simplify_proc.m"
                      {
#line 684 "simplify_proc.m"
                        check_hlds__simplify__simplify_proc__goal_contains_trace_3_p_0(check_hlds__simplify__simplify_proc__SubGoal0_103, &check_hlds__simplify__simplify_proc__SubGoal_104, check_hlds__simplify__simplify_proc__ContainsTrace_6);
                      }
#line 659 "simplify_proc.m"
                      break;
#line 659 "simplify_proc.m"
                    case (MR_Integer) 5:
#line 660 "simplify_proc.m"
                      {
#line 660 "simplify_proc.m"
                        MR_Word check_hlds__simplify__simplify_proc__FGT_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__Reason_53, (MR_Integer) 2)));
#line 660 "simplify_proc.m"
                        MR_Word check_hlds__simplify__simplify_proc__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__Reason_53, (MR_Integer) 1)));

#line 667 "simplify_proc.m"
#line 667 "simplify_proc.m"
                        switch (check_hlds__simplify__simplify_proc__FGT_60) {
#line 667 "simplify_proc.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 667 "simplify_proc.m"
                          case (MR_Integer) 1:
#line 667 "simplify_proc.m"
                          case (MR_Integer) 2:
#line 664 "simplify_proc.m"
                            {
#line 665 "simplify_proc.m"
                              check_hlds__simplify__simplify_proc__SubGoal_104 = check_hlds__simplify__simplify_proc__SubGoal0_103;
#line 666 "simplify_proc.m"
                              *check_hlds__simplify__simplify_proc__ContainsTrace_6 = (MR_Integer) 1;
#line 664 "simplify_proc.m"
                            }
#line 667 "simplify_proc.m"
                            break;
#line 667 "simplify_proc.m"
                          case (MR_Integer) 0:
#line 667 "simplify_proc.m"
                          case (MR_Integer) 3:
#line 671 "simplify_proc.m"
                            {
#line 671 "simplify_proc.m"
                              check_hlds__simplify__simplify_proc__goal_contains_trace_3_p_0(check_hlds__simplify__simplify_proc__SubGoal0_103, &check_hlds__simplify__simplify_proc__SubGoal_104, check_hlds__simplify__simplify_proc__ContainsTrace_6);
                            }
#line 667 "simplify_proc.m"
                            break;
#line 667 "simplify_proc.m"
                        }
#line 660 "simplify_proc.m"
                      }
#line 659 "simplify_proc.m"
                      break;
#line 659 "simplify_proc.m"
                    case (MR_Integer) 6:
#line 656 "simplify_proc.m"
                      {
#line 657 "simplify_proc.m"
                        check_hlds__simplify__simplify_proc__SubGoal_104 = check_hlds__simplify__simplify_proc__SubGoal0_103;
#line 658 "simplify_proc.m"
                        *check_hlds__simplify__simplify_proc__ContainsTrace_6 = (MR_Integer) 0;
#line 656 "simplify_proc.m"
                      }
#line 659 "simplify_proc.m"
                      break;
#line 659 "simplify_proc.m"
                  }
#line 659 "simplify_proc.m"
                  break;
#line 659 "simplify_proc.m"
              }
#line 686 "simplify_proc.m"
              {
#line 686 "simplify_proc.m"
                check_hlds__simplify__simplify_proc__GoalExpr_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 686 "simplify_proc.m"
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 686 "simplify_proc.m"
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr_32, 1) = ((MR_Box) (check_hlds__simplify__simplify_proc__Reason_53));
#line 686 "simplify_proc.m"
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr_32, 2) = ((MR_Box) (check_hlds__simplify__simplify_proc__SubGoal_104));
#line 686 "simplify_proc.m"
              }
#line 654 "simplify_proc.m"
            }
#line 623 "simplify_proc.m"
            break;
#line 623 "simplify_proc.m"
          case (MR_Integer) 6:
#line 642 "simplify_proc.m"
            {
#line 642 "simplify_proc.m"
              MR_Word check_hlds__simplify__simplify_proc__Vars_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr0_7, (MR_Integer) 1)));
#line 642 "simplify_proc.m"
              MR_Word check_hlds__simplify__simplify_proc__Cond0_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr0_7, (MR_Integer) 2)));
#line 642 "simplify_proc.m"
              MR_Word check_hlds__simplify__simplify_proc__Then0_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr0_7, (MR_Integer) 3)));
#line 642 "simplify_proc.m"
              MR_Word check_hlds__simplify__simplify_proc__Else0_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr0_7, (MR_Integer) 4)));
#line 642 "simplify_proc.m"
              MR_Word check_hlds__simplify__simplify_proc__Cond_45;
#line 642 "simplify_proc.m"
              MR_Word check_hlds__simplify__simplify_proc__CondContainsTrace_46;
#line 642 "simplify_proc.m"
              MR_Word check_hlds__simplify__simplify_proc__Then_47;
#line 642 "simplify_proc.m"
              MR_Word check_hlds__simplify__simplify_proc__ThenContainsTrace_48;
#line 642 "simplify_proc.m"
              MR_Word check_hlds__simplify__simplify_proc__Else_49;
#line 642 "simplify_proc.m"
              MR_Word check_hlds__simplify__simplify_proc__ElseContainsTrace_50;
#line 642 "simplify_proc.m"
              MR_Word check_hlds__simplify__simplify_proc__V_96_96;

#line 643 "simplify_proc.m"
              {
#line 643 "simplify_proc.m"
                check_hlds__simplify__simplify_proc__goal_contains_trace_3_p_0(check_hlds__simplify__simplify_proc__Cond0_42, &check_hlds__simplify__simplify_proc__Cond_45, &check_hlds__simplify__simplify_proc__CondContainsTrace_46);
              }
#line 644 "simplify_proc.m"
              {
#line 644 "simplify_proc.m"
                check_hlds__simplify__simplify_proc__goal_contains_trace_3_p_0(check_hlds__simplify__simplify_proc__Then0_43, &check_hlds__simplify__simplify_proc__Then_47, &check_hlds__simplify__simplify_proc__ThenContainsTrace_48);
              }
#line 645 "simplify_proc.m"
              {
#line 645 "simplify_proc.m"
                check_hlds__simplify__simplify_proc__goal_contains_trace_3_p_0(check_hlds__simplify__simplify_proc__Else0_44, &check_hlds__simplify__simplify_proc__Else_49, &check_hlds__simplify__simplify_proc__ElseContainsTrace_50);
              }
#line 646 "simplify_proc.m"
              {
#line 646 "simplify_proc.m"
                check_hlds__simplify__simplify_proc__GoalExpr_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 646 "simplify_proc.m"
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 646 "simplify_proc.m"
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr_32, 1) = ((MR_Box) (check_hlds__simplify__simplify_proc__Vars_41));
#line 646 "simplify_proc.m"
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr_32, 2) = ((MR_Box) (check_hlds__simplify__simplify_proc__Cond_45));
#line 646 "simplify_proc.m"
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr_32, 3) = ((MR_Box) (check_hlds__simplify__simplify_proc__Then_47));
#line 646 "simplify_proc.m"
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr_32, 4) = ((MR_Box) (check_hlds__simplify__simplify_proc__Else_49));
#line 646 "simplify_proc.m"
              }
#line 648 "simplify_proc.m"
              {
#line 648 "simplify_proc.m"
                check_hlds__simplify__simplify_proc__V_96_96 = hlds__hlds_goal__worst_contains_trace_2_f_0(check_hlds__simplify__simplify_proc__ThenContainsTrace_48, check_hlds__simplify__simplify_proc__ElseContainsTrace_50);
              }
#line 647 "simplify_proc.m"
              {
#line 647 "simplify_proc.m"
                *check_hlds__simplify__simplify_proc__ContainsTrace_6 = hlds__hlds_goal__worst_contains_trace_2_f_0(check_hlds__simplify__simplify_proc__CondContainsTrace_46, check_hlds__simplify__simplify_proc__V_96_96);
              }
#line 642 "simplify_proc.m"
            }
#line 623 "simplify_proc.m"
            break;
#line 623 "simplify_proc.m"
          case (MR_Integer) 7:
#line 688 "simplify_proc.m"
            {
#line 688 "simplify_proc.m"
              MR_Word check_hlds__simplify__simplify_proc__ShortHand0_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr0_7, (MR_Integer) 1)));

#line 701 "simplify_proc.m"
#line 701 "simplify_proc.m"
              switch (MR_tag((MR_Word) check_hlds__simplify__simplify_proc__ShortHand0_74)) {
#line 701 "simplify_proc.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 701 "simplify_proc.m"
                case (MR_Integer) 0:
#line 707 "simplify_proc.m"
                  {
#line 708 "simplify_proc.m"
                    {
#line 708 "simplify_proc.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.simplify_proc", (MR_String) "predicate \140check_hlds.simplify.simplify_proc.goal_contains_trace\'/3", (MR_String) "bi_implication");
#line 708 "simplify_proc.m"
                      return;
                    }
#line 707 "simplify_proc.m"
                  }
#line 701 "simplify_proc.m"
                  break;
#line 701 "simplify_proc.m"
                case (MR_Integer) 1:
#line 691 "simplify_proc.m"
                  {
#line 691 "simplify_proc.m"
                    MR_Word check_hlds__simplify__simplify_proc__GoalType_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_proc__ShortHand0_74, (MR_Integer) 0)));
#line 691 "simplify_proc.m"
                    MR_Word check_hlds__simplify__simplify_proc__Outer_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_proc__ShortHand0_74, (MR_Integer) 1)));
#line 691 "simplify_proc.m"
                    MR_Word check_hlds__simplify__simplify_proc__Inner_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_proc__ShortHand0_74, (MR_Integer) 2)));
#line 691 "simplify_proc.m"
                    MR_Word check_hlds__simplify__simplify_proc__MaybeOutputVars_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_proc__ShortHand0_74, (MR_Integer) 3)));
#line 691 "simplify_proc.m"
                    MR_Word check_hlds__simplify__simplify_proc__MainGoal0_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_proc__ShortHand0_74, (MR_Integer) 4)));
#line 691 "simplify_proc.m"
                    MR_Word check_hlds__simplify__simplify_proc__OrElseGoals0_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_proc__ShortHand0_74, (MR_Integer) 5)));
#line 691 "simplify_proc.m"
                    MR_Word check_hlds__simplify__simplify_proc__OrElseInners_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_proc__ShortHand0_74, (MR_Integer) 6)));
#line 691 "simplify_proc.m"
                    MR_Word check_hlds__simplify__simplify_proc__MainGoal_82;
#line 691 "simplify_proc.m"
                    MR_Word check_hlds__simplify__simplify_proc__MainContainsTrace_83;
#line 691 "simplify_proc.m"
                    MR_Word check_hlds__simplify__simplify_proc__OrElseGoals_85;
#line 691 "simplify_proc.m"
                    MR_Word check_hlds__simplify__simplify_proc__OrElseContainsTrace_86;
#line 691 "simplify_proc.m"
                    MR_Word check_hlds__simplify__simplify_proc__ShortHand_87;

#line 692 "simplify_proc.m"
                    {
#line 692 "simplify_proc.m"
                      check_hlds__simplify__simplify_proc__goal_contains_trace_3_p_0(check_hlds__simplify__simplify_proc__MainGoal0_79, &check_hlds__simplify__simplify_proc__MainGoal_82, &check_hlds__simplify__simplify_proc__MainContainsTrace_83);
                    }
#line 694 "simplify_proc.m"
                    {
#line 694 "simplify_proc.m"
                      check_hlds__simplify__simplify_proc__goal_list_contains_trace_acc_4_p_0(check_hlds__simplify__simplify_proc__OrElseGoals0_80, &check_hlds__simplify__simplify_proc__OrElseGoals_85, (MR_Integer) 1, &check_hlds__simplify__simplify_proc__OrElseContainsTrace_86);
                    }
#line 696 "simplify_proc.m"
                    {
#line 696 "simplify_proc.m"
                      check_hlds__simplify__simplify_proc__ShortHand_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 696 "simplify_proc.m"
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_proc__ShortHand_87, 0) = ((MR_Box) (check_hlds__simplify__simplify_proc__GoalType_75));
#line 696 "simplify_proc.m"
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_proc__ShortHand_87, 1) = ((MR_Box) (check_hlds__simplify__simplify_proc__Outer_76));
#line 696 "simplify_proc.m"
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_proc__ShortHand_87, 2) = ((MR_Box) (check_hlds__simplify__simplify_proc__Inner_77));
#line 696 "simplify_proc.m"
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_proc__ShortHand_87, 3) = ((MR_Box) (check_hlds__simplify__simplify_proc__MaybeOutputVars_78));
#line 696 "simplify_proc.m"
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_proc__ShortHand_87, 4) = ((MR_Box) (check_hlds__simplify__simplify_proc__MainGoal_82));
#line 696 "simplify_proc.m"
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_proc__ShortHand_87, 5) = ((MR_Box) (check_hlds__simplify__simplify_proc__OrElseGoals_85));
#line 696 "simplify_proc.m"
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_proc__ShortHand_87, 6) = ((MR_Box) (check_hlds__simplify__simplify_proc__OrElseInners_81));
#line 696 "simplify_proc.m"
                    }
#line 698 "simplify_proc.m"
                    {
#line 698 "simplify_proc.m"
                      check_hlds__simplify__simplify_proc__GoalExpr_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 698 "simplify_proc.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 698 "simplify_proc.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr_32, 1) = ((MR_Box) (check_hlds__simplify__simplify_proc__ShortHand_87));
#line 698 "simplify_proc.m"
                    }
#line 699 "simplify_proc.m"
                    {
#line 699 "simplify_proc.m"
                      *check_hlds__simplify__simplify_proc__ContainsTrace_6 = hlds__hlds_goal__worst_contains_trace_2_f_0(check_hlds__simplify__simplify_proc__MainContainsTrace_83, check_hlds__simplify__simplify_proc__OrElseContainsTrace_86);
                    }
#line 691 "simplify_proc.m"
                  }
#line 701 "simplify_proc.m"
                  break;
#line 701 "simplify_proc.m"
                case (MR_Integer) 2:
#line 702 "simplify_proc.m"
                  {
#line 702 "simplify_proc.m"
                    MR_Word check_hlds__simplify__simplify_proc__MaybeIO_88 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_proc__ShortHand0_74, (MR_Integer) 0)));
#line 702 "simplify_proc.m"
                    MR_Word check_hlds__simplify__simplify_proc__ResultVar_89 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_proc__ShortHand0_74, (MR_Integer) 1)));
#line 702 "simplify_proc.m"
                    MR_Word check_hlds__simplify__simplify_proc__SubGoal0_105 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_proc__ShortHand0_74, (MR_Integer) 2)));
#line 702 "simplify_proc.m"
                    MR_Word check_hlds__simplify__simplify_proc__SubGoal_106;
#line 702 "simplify_proc.m"
                    MR_Word check_hlds__simplify__simplify_proc__ShortHand_107;

#line 703 "simplify_proc.m"
                    {
#line 703 "simplify_proc.m"
                      check_hlds__simplify__simplify_proc__goal_contains_trace_3_p_0(check_hlds__simplify__simplify_proc__SubGoal0_105, &check_hlds__simplify__simplify_proc__SubGoal_106, check_hlds__simplify__simplify_proc__ContainsTrace_6);
                    }
#line 704 "simplify_proc.m"
                    {
#line 704 "simplify_proc.m"
                      check_hlds__simplify__simplify_proc__ShortHand_107 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 704 "simplify_proc.m"
                      MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_proc__ShortHand_107, 0) = ((MR_Box) (check_hlds__simplify__simplify_proc__MaybeIO_88));
#line 704 "simplify_proc.m"
                      MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_proc__ShortHand_107, 1) = ((MR_Box) (check_hlds__simplify__simplify_proc__ResultVar_89));
#line 704 "simplify_proc.m"
                      MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_proc__ShortHand_107, 2) = ((MR_Box) (check_hlds__simplify__simplify_proc__SubGoal_106));
#line 704 "simplify_proc.m"
                    }
#line 705 "simplify_proc.m"
                    {
#line 705 "simplify_proc.m"
                      check_hlds__simplify__simplify_proc__GoalExpr_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 705 "simplify_proc.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 705 "simplify_proc.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr_32, 1) = ((MR_Box) (check_hlds__simplify__simplify_proc__ShortHand_107));
#line 705 "simplify_proc.m"
                    }
#line 702 "simplify_proc.m"
                  }
#line 701 "simplify_proc.m"
                  break;
#line 701 "simplify_proc.m"
              }
#line 688 "simplify_proc.m"
            }
#line 623 "simplify_proc.m"
            break;
#line 623 "simplify_proc.m"
        }
#line 623 "simplify_proc.m"
        break;
#line 623 "simplify_proc.m"
    }
#line 714 "simplify_proc.m"
#line 714 "simplify_proc.m"
    switch (*check_hlds__simplify__simplify_proc__ContainsTrace_6) {
#line 714 "simplify_proc.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 714 "simplify_proc.m"
      case (MR_Integer) 1:
#line 715 "simplify_proc.m"
        {
#line 716 "simplify_proc.m"
          {
#line 716 "simplify_proc.m"
            hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 17, check_hlds__simplify__simplify_proc__GoalInfo0_8, &check_hlds__simplify__simplify_proc__GoalInfo_92);
          }
#line 715 "simplify_proc.m"
        }
#line 714 "simplify_proc.m"
        break;
#line 714 "simplify_proc.m"
      case (MR_Integer) 0:
#line 712 "simplify_proc.m"
        {
#line 713 "simplify_proc.m"
          {
#line 713 "simplify_proc.m"
            hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 17, check_hlds__simplify__simplify_proc__GoalInfo0_8, &check_hlds__simplify__simplify_proc__GoalInfo_92);
          }
#line 712 "simplify_proc.m"
        }
#line 714 "simplify_proc.m"
        break;
#line 714 "simplify_proc.m"
    }
#line 718 "simplify_proc.m"
    {
#line 718 "simplify_proc.m"
      MR_Word base;
#line 718 "simplify_proc.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 718 "simplify_proc.m"
      *check_hlds__simplify__simplify_proc__Goal_5 = base;
#line 718 "simplify_proc.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_proc__GoalExpr_32));
#line 718 "simplify_proc.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_proc__GoalInfo_92));
#line 718 "simplify_proc.m"
    }
#line 613 "simplify_proc.m"
  }
#line 610 "simplify_proc.m"
}

#line 532 "simplify_proc.m"
static void MR_CALL 
check_hlds__simplify__simplify_proc__do_process_top_level_goal_6_p_0(
#line 532 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_0_33,
#line 532 "simplify_proc.m"
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_34,
#line 532 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__NestedContext0_8,
#line 532 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__InstMap0_9,
#line 532 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_0_35,
#line 532 "simplify_proc.m"
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_36)
#line 532 "simplify_proc.m"
{
#line 536 "simplify_proc.m"
  {
#line 536 "simplify_proc.m"
    MR_bool check_hlds__simplify__simplify_proc__succeeded;
#line 536 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__GoalInfo0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_0_33, (MR_Integer) 1)));
#line 536 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__Detism_13;
#line 536 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__NonLocals_14;
#line 536 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__ShouldRequantify_16;
#line 536 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__ShouldRerunDet_23;
#line 536 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_37_37;
#line 536 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__V_38_38;
#line 536 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_39_39;
#line 536 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_53_53;
#line 536 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_55_55;
#line 537 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_0_33, (MR_Integer) 0)));
#line 541 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc___Common_15;

#line 538 "simplify_proc.m"
    {
#line 538 "simplify_proc.m"
      check_hlds__simplify__simplify_proc__Detism_13 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__simplify__simplify_proc__GoalInfo0_12);
    }
#line 539 "simplify_proc.m"
    {
#line 539 "simplify_proc.m"
      check_hlds__simplify__simplify_proc__NonLocals_14 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__simplify__simplify_proc__GoalInfo0_12);
    }
#line 542 "simplify_proc.m"
    {
#line 542 "simplify_proc.m"
      check_hlds__simplify__simplify_proc__V_38_38 = check_hlds__simplify__common__common_info_init_0_f_0();
    }
#line 541 "simplify_proc.m"
    {
#line 541 "simplify_proc.m"
      check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_0_33, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_37_37, check_hlds__simplify__simplify_proc__NestedContext0_8, check_hlds__simplify__simplify_proc__InstMap0_9, check_hlds__simplify__simplify_proc__V_38_38, &check_hlds__simplify__simplify_proc___Common_15, check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_0_35, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_39_39);
    }
#line 544 "simplify_proc.m"
    {
#line 544 "simplify_proc.m"
      check_hlds__simplify__simplify_info__simplify_info_get_should_requantify_2_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_39_39, &check_hlds__simplify__simplify_proc__ShouldRequantify_16);
    }
#line 568 "simplify_proc.m"
#line 568 "simplify_proc.m"
    switch (check_hlds__simplify__simplify_proc__ShouldRequantify_16) {
#line 568 "simplify_proc.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 568 "simplify_proc.m"
      case (MR_Integer) 0:
#line 569 "simplify_proc.m"
        {
#line 569 "simplify_proc.m"
          check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_53_53 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_37_37;
#line 569 "simplify_proc.m"
          check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_55_55 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_39_39;
#line 569 "simplify_proc.m"
        }
#line 568 "simplify_proc.m"
        break;
#line 568 "simplify_proc.m"
      case (MR_Integer) 1:
#line 546 "simplify_proc.m"
        {
#line 546 "simplify_proc.m"
          MR_Word check_hlds__simplify__simplify_proc__InstVarSet_22;
#line 546 "simplify_proc.m"
          MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_VarSet_40_40;
#line 546 "simplify_proc.m"
          MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_VarTypes_41_41;
#line 546 "simplify_proc.m"
          MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_RttiVarMaps_42_42;
#line 546 "simplify_proc.m"
          MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_44_44;
#line 546 "simplify_proc.m"
          MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_VarSet_45_45;
#line 546 "simplify_proc.m"
          MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_VarTypes_46_46;
#line 546 "simplify_proc.m"
          MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_RttiVarMaps_47_47;
#line 546 "simplify_proc.m"
          MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_48_48;
#line 546 "simplify_proc.m"
          MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_49_49;
#line 546 "simplify_proc.m"
          MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_50_50;
#line 546 "simplify_proc.m"
          MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_51_51;
#line 546 "simplify_proc.m"
          MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_54_54;
#line 551 "simplify_proc.m"
          MR_Word check_hlds__simplify__simplify_proc__V_21_21;

#line 548 "simplify_proc.m"
          {
#line 548 "simplify_proc.m"
            check_hlds__simplify__simplify_info__simplify_info_get_varset_2_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_39_39, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_VarSet_40_40);
          }
#line 549 "simplify_proc.m"
          {
#line 549 "simplify_proc.m"
            check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_39_39, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_VarTypes_41_41);
          }
#line 550 "simplify_proc.m"
          {
#line 550 "simplify_proc.m"
            check_hlds__simplify__simplify_info__simplify_info_get_rtti_varmaps_2_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_39_39, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_RttiVarMaps_42_42);
          }
#line 551 "simplify_proc.m"
          {
#line 551 "simplify_proc.m"
            hlds__quantification__implicitly_quantify_goal_general_11_p_0((MR_Integer) 0, check_hlds__simplify__simplify_proc__NonLocals_14, &check_hlds__simplify__simplify_proc__V_21_21, check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_37_37, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_44_44, check_hlds__simplify__simplify_proc__STATE_VARIABLE_VarSet_40_40, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_VarSet_45_45, check_hlds__simplify__simplify_proc__STATE_VARIABLE_VarTypes_41_41, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_VarTypes_46_46, check_hlds__simplify__simplify_proc__STATE_VARIABLE_RttiVarMaps_42_42, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_RttiVarMaps_47_47);
          }
#line 554 "simplify_proc.m"
          {
#line 554 "simplify_proc.m"
            check_hlds__simplify__simplify_info__simplify_info_set_varset_3_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_VarSet_45_45, check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_39_39, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_48_48);
          }
#line 555 "simplify_proc.m"
          {
#line 555 "simplify_proc.m"
            check_hlds__simplify__simplify_info__simplify_info_set_var_types_3_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_VarTypes_46_46, check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_48_48, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_49_49);
          }
#line 556 "simplify_proc.m"
          {
#line 556 "simplify_proc.m"
            check_hlds__simplify__simplify_info__simplify_info_set_rtti_varmaps_3_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_RttiVarMaps_47_47, check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_49_49, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_50_50);
          }
#line 562 "simplify_proc.m"
          {
#line 562 "simplify_proc.m"
            check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_50_50, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_51_51);
          }
#line 563 "simplify_proc.m"
          {
#line 563 "simplify_proc.m"
            check_hlds__simplify__simplify_info__simplify_info_get_inst_varset_2_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_50_50, &check_hlds__simplify__simplify_proc__InstVarSet_22);
          }
#line 564 "simplify_proc.m"
          {
#line 564 "simplify_proc.m"
            check_hlds__mode_util__recompute_instmap_delta_8_p_0((MR_Integer) 0, check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_44_44, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_53_53, check_hlds__simplify__simplify_proc__STATE_VARIABLE_VarTypes_46_46, check_hlds__simplify__simplify_proc__InstVarSet_22, check_hlds__simplify__simplify_proc__InstMap0_9, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_51_51, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_54_54);
          }
#line 566 "simplify_proc.m"
          {
#line 566 "simplify_proc.m"
            check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_54_54, check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_50_50, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_55_55);
          }
#line 546 "simplify_proc.m"
        }
#line 568 "simplify_proc.m"
        break;
#line 568 "simplify_proc.m"
    }
#line 571 "simplify_proc.m"
    {
#line 571 "simplify_proc.m"
      check_hlds__simplify__simplify_info__simplify_info_get_should_rerun_det_2_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_55_55, &check_hlds__simplify__simplify_proc__ShouldRerunDet_23);
    }
#line 604 "simplify_proc.m"
#line 604 "simplify_proc.m"
    switch (check_hlds__simplify__simplify_proc__ShouldRerunDet_23) {
#line 604 "simplify_proc.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 604 "simplify_proc.m"
      case (MR_Integer) 0:
#line 605 "simplify_proc.m"
        {
#line 605 "simplify_proc.m"
          *check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_34 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_53_53;
#line 605 "simplify_proc.m"
          *check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_36 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_55_55;
#line 605 "simplify_proc.m"
        }
#line 604 "simplify_proc.m"
        break;
#line 604 "simplify_proc.m"
      case (MR_Integer) 1:
#line 573 "simplify_proc.m"
        {
#line 573 "simplify_proc.m"
          MR_Word check_hlds__simplify__simplify_proc__SolnContext_25;
#line 573 "simplify_proc.m"
          MR_Word check_hlds__simplify__simplify_proc__PredId_26;
#line 573 "simplify_proc.m"
          MR_Integer check_hlds__simplify__simplify_proc__ProcId_27;
#line 573 "simplify_proc.m"
          MR_Word check_hlds__simplify__simplify_proc__PredInfo_28;
#line 573 "simplify_proc.m"
          MR_Word check_hlds__simplify__simplify_proc__DetInfo0_29;
#line 573 "simplify_proc.m"
          MR_Word check_hlds__simplify__simplify_proc__DetInfo_32;
#line 573 "simplify_proc.m"
          MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_56_56;
#line 573 "simplify_proc.m"
          MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_VarSet_57_57;
#line 573 "simplify_proc.m"
          MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_VarTypes_58_58;
#line 573 "simplify_proc.m"
          MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_RttiVarMaps_59_59;
#line 573 "simplify_proc.m"
          MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_60_60;
#line 573 "simplify_proc.m"
          MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_61_61;
#line 573 "simplify_proc.m"
          MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_62_62;
#line 573 "simplify_proc.m"
          MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_63_63;
#line 573 "simplify_proc.m"
          MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_64_64;
#line 573 "simplify_proc.m"
          MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_65_65;
#line 573 "simplify_proc.m"
          MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_71_71;
#line 573 "simplify_proc.m"
          MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_VarTypes_72_72;
#line 573 "simplify_proc.m"
          MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_73_73;
#line 597 "simplify_proc.m"
          MR_Word check_hlds__simplify__simplify_proc__V_30_30;
#line 597 "simplify_proc.m"
          MR_Word check_hlds__simplify__simplify_proc__V_31_31;

#line 576 "simplify_proc.m"
          {
#line 576 "simplify_proc.m"
            check_hlds__det_analysis__det_get_soln_context_2_p_0(check_hlds__simplify__simplify_proc__Detism_13, &check_hlds__simplify__simplify_proc__SolnContext_25);
          }
#line 581 "simplify_proc.m"
          {
#line 581 "simplify_proc.m"
            check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_55_55, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_56_56);
          }
#line 582 "simplify_proc.m"
          {
#line 582 "simplify_proc.m"
            check_hlds__simplify__simplify_info__simplify_info_get_varset_2_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_55_55, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_VarSet_57_57);
          }
#line 583 "simplify_proc.m"
          {
#line 583 "simplify_proc.m"
            check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_55_55, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_VarTypes_58_58);
          }
#line 584 "simplify_proc.m"
          {
#line 584 "simplify_proc.m"
            check_hlds__simplify__simplify_info__simplify_info_get_rtti_varmaps_2_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_55_55, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_RttiVarMaps_59_59);
          }
#line 585 "simplify_proc.m"
          {
#line 585 "simplify_proc.m"
            check_hlds__simplify__simplify_info__simplify_info_get_pred_proc_id_3_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_55_55, &check_hlds__simplify__simplify_proc__PredId_26, &check_hlds__simplify__simplify_proc__ProcId_27);
          }
#line 586 "simplify_proc.m"
          {
#line 586 "simplify_proc.m"
            hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_56_56, check_hlds__simplify__simplify_proc__PredId_26, check_hlds__simplify__simplify_proc__ProcId_27, &check_hlds__simplify__simplify_proc__PredInfo_28, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_60_60);
          }
#line 588 "simplify_proc.m"
          {
#line 588 "simplify_proc.m"
            hlds__hlds_pred__proc_info_set_vartypes_3_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_VarTypes_58_58, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_60_60, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_61_61);
          }
#line 589 "simplify_proc.m"
          {
#line 589 "simplify_proc.m"
            hlds__hlds_pred__proc_info_set_varset_3_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_VarSet_57_57, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_61_61, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_62_62);
          }
#line 590 "simplify_proc.m"
          {
#line 590 "simplify_proc.m"
            hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_RttiVarMaps_59_59, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_62_62, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_63_63);
          }
#line 591 "simplify_proc.m"
          {
#line 591 "simplify_proc.m"
            hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(check_hlds__simplify__simplify_proc__PredId_26, check_hlds__simplify__simplify_proc__ProcId_27, check_hlds__simplify__simplify_proc__PredInfo_28, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_63_63, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_56_56, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_64_64);
          }
#line 593 "simplify_proc.m"
          {
#line 593 "simplify_proc.m"
            check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_64_64, check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_55_55, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_65_65);
          }
#line 595 "simplify_proc.m"
          {
#line 595 "simplify_proc.m"
            check_hlds__det_util__det_info_init_7_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_64_64, check_hlds__simplify__simplify_proc__STATE_VARIABLE_VarTypes_58_58, check_hlds__simplify__simplify_proc__PredId_26, check_hlds__simplify__simplify_proc__ProcId_27, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__simplify_proc__DetInfo0_29);
          }
#line 597 "simplify_proc.m"
          {
#line 597 "simplify_proc.m"
            check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_53_53, check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_34, check_hlds__simplify__simplify_proc__InstMap0_9, check_hlds__simplify__simplify_proc__SolnContext_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__simplify_proc__V_30_30, &check_hlds__simplify__simplify_proc__V_31_31, check_hlds__simplify__simplify_proc__DetInfo0_29, &check_hlds__simplify__simplify_proc__DetInfo_32);
          }
#line 599 "simplify_proc.m"
          {
#line 599 "simplify_proc.m"
            check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__simplify__simplify_proc__DetInfo_32, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_71_71);
          }
#line 600 "simplify_proc.m"
          {
#line 600 "simplify_proc.m"
            check_hlds__det_util__det_info_get_vartypes_2_p_0(check_hlds__simplify__simplify_proc__DetInfo_32, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_VarTypes_72_72);
          }
#line 601 "simplify_proc.m"
          {
#line 601 "simplify_proc.m"
            check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_71_71, check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_65_65, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_73_73);
          }
#line 602 "simplify_proc.m"
          {
#line 602 "simplify_proc.m"
            check_hlds__simplify__simplify_info__simplify_info_set_var_types_3_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_VarTypes_72_72, check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_73_73, check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_36);
#line 602 "simplify_proc.m"
            return;
          }
#line 573 "simplify_proc.m"
        }
#line 604 "simplify_proc.m"
        break;
#line 604 "simplify_proc.m"
    }
#line 536 "simplify_proc.m"
  }
#line 532 "simplify_proc.m"
}

#line 483 "simplify_proc.m"
static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_top_level_goal_6_p_0(
#line 483 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_0_15,
#line 483 "simplify_proc.m"
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_16,
#line 483 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__NestedContext0_8,
#line 483 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__InstMap0_9,
#line 483 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_0_17,
#line 483 "simplify_proc.m"
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_18)
#line 483 "simplify_proc.m"
{
#line 497 "simplify_proc.m"
  {
#line 497 "simplify_proc.m"
    MR_bool check_hlds__simplify__simplify_proc__succeeded;
#line 497 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12;
#line 497 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__FoundContainsTrace_13;
#line 497 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_25_25;
#line 497 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_36_36;
#line 497 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_37_37;

#line 497 "simplify_proc.m"
    {
#line 497 "simplify_proc.m"
      check_hlds__simplify__simplify_info__simplify_info_get_simplify_tasks_2_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_0_17, &check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12);
    }
#line 500 "simplify_proc.m"
    {
#line 500 "simplify_proc.m"
      check_hlds__simplify__simplify_proc__succeeded = check_hlds__simplify__simplify_info__simplify_do_common_struct_1_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_0_17);
    }
#line 501 "simplify_proc.m"
    if (!(check_hlds__simplify__simplify_proc__succeeded))
#line 501 "simplify_proc.m"
      {
#line 501 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__succeeded = check_hlds__simplify__simplify_info__simplify_do_opt_duplicate_calls_1_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_0_17);
      }
#line 516 "simplify_proc.m"
    if (check_hlds__simplify__simplify_proc__succeeded)
#line 504 "simplify_proc.m"
      {
#line 504 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_22_22;
#line 504 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_24_24;
#line 504 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_26_26;
#line 504 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_34_34;
#line 504 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__V_42_42 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 504 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 504 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 504 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 504 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 504 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 504 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 504 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 504 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 504 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 504 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 504 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__V_70_70;
#line 504 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__V_71_71;
#line 504 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__V_72_72;
#line 504 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__V_73_73;
#line 504 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__V_74_74;
#line 504 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__V_75_75;
#line 504 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__V_77_77;
#line 504 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__V_79_79;
#line 504 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__V_80_80;
#line 504 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__V_83_83;
#line 504 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__V_84_84;
#line 504 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__V_85_85;
#line 504 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__V_86_86;
#line 504 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__V_87_87;
#line 504 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__V_88_88;
#line 504 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__V_90_90;
#line 504 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__V_92_92;
#line 504 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__V_93_93;
#line 504 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__V_96_96;
#line 504 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__V_97_97;
#line 504 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__V_98_98;
#line 504 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__V_99_99;
#line 504 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__V_100_100;
#line 504 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__V_101_101;
#line 504 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__V_103_103;
#line 504 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__V_105_105;
#line 504 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__V_106_106;
#line 504 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 504 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 511 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__V_68_68;
#line 511 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__V_69_69;
#line 511 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__V_76_76;
#line 511 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__V_78_78;

#line 505 "simplify_proc.m"
        {
#line 505 "simplify_proc.m"
          check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 505 "simplify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_22_22, 0) = ((MR_Box) ((check_hlds__simplify__simplify_proc__V_42_42 | ((((check_hlds__simplify__simplify_proc__V_43_43 << (MR_Integer) 1)) | ((((check_hlds__simplify__simplify_proc__V_44_44 << (MR_Integer) 2)) | ((((check_hlds__simplify__simplify_proc__V_45_45 << (MR_Integer) 3)) | (((((MR_Integer) 0 << (MR_Integer) 4)) | ((((check_hlds__simplify__simplify_proc__V_47_47 << (MR_Integer) 5)) | (((((MR_Integer) 0 << (MR_Integer) 6)) | ((((check_hlds__simplify__simplify_proc__V_49_49 << (MR_Integer) 7)) | ((((check_hlds__simplify__simplify_proc__V_50_50 << (MR_Integer) 8)) | ((((check_hlds__simplify__simplify_proc__V_51_51 << (MR_Integer) 9)) | ((((check_hlds__simplify__simplify_proc__V_52_52 << (MR_Integer) 10)) | ((((check_hlds__simplify__simplify_proc__V_53_53 << (MR_Integer) 11)) | ((check_hlds__simplify__simplify_proc__V_54_54 << (MR_Integer) 12)))))))))))))))))))))))))));
#line 505 "simplify_proc.m"
        }
#line 506 "simplify_proc.m"
        {
#line 506 "simplify_proc.m"
          check_hlds__simplify__simplify_info__simplify_info_set_simplify_tasks_3_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_22_22, check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_0_17, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_24_24);
        }
#line 508 "simplify_proc.m"
        {
#line 508 "simplify_proc.m"
          check_hlds__simplify__simplify_proc__do_process_top_level_goal_6_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_0_15, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_25_25, check_hlds__simplify__simplify_proc__NestedContext0_8, check_hlds__simplify__simplify_proc__InstMap0_9, check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_24_24, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_26_26);
        }
#line 511 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__V_68_68 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 511 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__V_69_69 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 511 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__V_70_70 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 511 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 511 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 511 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 511 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 511 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__V_75_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 511 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__V_76_76 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 511 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__V_77_77 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 511 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__V_78_78 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 511 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__V_79_79 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 511 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__V_80_80 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__OriginalSimplifyTasks_12, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 512 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__V_83_83 = check_hlds__simplify__simplify_proc__V_70_70;
#line 512 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__V_84_84 = check_hlds__simplify__simplify_proc__V_71_71;
#line 512 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__V_85_85 = check_hlds__simplify__simplify_proc__V_72_72;
#line 512 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__V_86_86 = check_hlds__simplify__simplify_proc__V_73_73;
#line 512 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__V_87_87 = check_hlds__simplify__simplify_proc__V_74_74;
#line 512 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__V_88_88 = check_hlds__simplify__simplify_proc__V_75_75;
#line 512 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__V_90_90 = check_hlds__simplify__simplify_proc__V_77_77;
#line 512 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__V_92_92 = check_hlds__simplify__simplify_proc__V_79_79;
#line 512 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__V_93_93 = check_hlds__simplify__simplify_proc__V_80_80;
#line 513 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__V_96_96 = check_hlds__simplify__simplify_proc__V_83_83;
#line 513 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__V_97_97 = check_hlds__simplify__simplify_proc__V_84_84;
#line 513 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__V_98_98 = check_hlds__simplify__simplify_proc__V_85_85;
#line 513 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__V_99_99 = check_hlds__simplify__simplify_proc__V_86_86;
#line 513 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__V_100_100 = check_hlds__simplify__simplify_proc__V_87_87;
#line 513 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__V_101_101 = check_hlds__simplify__simplify_proc__V_88_88;
#line 513 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__V_103_103 = check_hlds__simplify__simplify_proc__V_90_90;
#line 513 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__V_105_105 = check_hlds__simplify__simplify_proc__V_92_92;
#line 513 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__V_106_106 = check_hlds__simplify__simplify_proc__V_93_93;
#line 514 "simplify_proc.m"
        {
#line 514 "simplify_proc.m"
          check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 514 "simplify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_34_34, 0) = ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | ((((check_hlds__simplify__simplify_proc__V_96_96 << (MR_Integer) 2)) | ((((check_hlds__simplify__simplify_proc__V_97_97 << (MR_Integer) 3)) | ((((check_hlds__simplify__simplify_proc__V_98_98 << (MR_Integer) 4)) | ((((check_hlds__simplify__simplify_proc__V_99_99 << (MR_Integer) 5)) | ((((check_hlds__simplify__simplify_proc__V_100_100 << (MR_Integer) 6)) | ((((check_hlds__simplify__simplify_proc__V_101_101 << (MR_Integer) 7)) | (((((MR_Integer) 0 << (MR_Integer) 8)) | ((((check_hlds__simplify__simplify_proc__V_103_103 << (MR_Integer) 9)) | (((((MR_Integer) 0 << (MR_Integer) 10)) | ((((check_hlds__simplify__simplify_proc__V_105_105 << (MR_Integer) 11)) | ((check_hlds__simplify__simplify_proc__V_106_106 << (MR_Integer) 12)))))))))))))))))))))))))));
#line 514 "simplify_proc.m"
        }
#line 515 "simplify_proc.m"
        {
#line 515 "simplify_proc.m"
          check_hlds__simplify__simplify_info__simplify_info_reinit_3_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_34_34, check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_26_26, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_36_36);
        }
#line 504 "simplify_proc.m"
      }
#line 516 "simplify_proc.m"
    else
#line 517 "simplify_proc.m"
      {
#line 517 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_36_36 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_0_17;
#line 517 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_25_25 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_0_15;
#line 517 "simplify_proc.m"
      }
#line 521 "simplify_proc.m"
    {
#line 521 "simplify_proc.m"
      check_hlds__simplify__simplify_proc__do_process_top_level_goal_6_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_25_25, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_37_37, check_hlds__simplify__simplify_proc__NestedContext0_8, check_hlds__simplify__simplify_proc__InstMap0_9, check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_36_36, check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_18);
    }
#line 523 "simplify_proc.m"
    {
#line 523 "simplify_proc.m"
      check_hlds__simplify__simplify_info__simplify_info_get_found_contains_trace_2_p_0(*check_hlds__simplify__simplify_proc__STATE_VARIABLE_Info_18, &check_hlds__simplify__simplify_proc__FoundContainsTrace_13);
    }
#line 526 "simplify_proc.m"
#line 526 "simplify_proc.m"
    switch (check_hlds__simplify__simplify_proc__FoundContainsTrace_13) {
#line 526 "simplify_proc.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 526 "simplify_proc.m"
      case (MR_Integer) 0:
#line 525 "simplify_proc.m"
        *check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_16 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_37_37;
#line 526 "simplify_proc.m"
        break;
#line 526 "simplify_proc.m"
      case (MR_Integer) 1:
#line 528 "simplify_proc.m"
        {
#line 528 "simplify_proc.m"
          MR_Word check_hlds__simplify__simplify_proc__V_14_14;

#line 528 "simplify_proc.m"
          {
#line 528 "simplify_proc.m"
            check_hlds__simplify__simplify_proc__goal_contains_trace_3_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_37_37, check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_16, &check_hlds__simplify__simplify_proc__V_14_14);
          }
#line 528 "simplify_proc.m"
        }
#line 526 "simplify_proc.m"
        break;
#line 526 "simplify_proc.m"
    }
#line 497 "simplify_proc.m"
  }
#line 483 "simplify_proc.m"
}

#line 430 "simplify_proc.m"
static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_maybe_warn_about_duplicates_5_p_0(
#line 430 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__ModuleInfo_6,
#line 430 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__PredId_7,
#line 430 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__ProcInfo_8,
#line 430 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_0_29,
#line 430 "simplify_proc.m"
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_30)
#line 430 "simplify_proc.m"
{
#line 434 "simplify_proc.m"
  {
#line 434 "simplify_proc.m"
    MR_bool check_hlds__simplify__simplify_proc__succeeded;
#line 434 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__PredInfo_10;
#line 434 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__Markers_11;
#line 434 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__Goal_12;
#line 434 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__GoalExpr_13;
#line 434 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__GoalInfo_14;
#line 477 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__MayDuplicate_23;
#line 442 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__Attributes_15;
#line 442 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__MaybeMayDuplicate_22;
#line 442 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__V_16_16;
#line 442 "simplify_proc.m"
    MR_Integer check_hlds__simplify__simplify_proc__V_17_17;
#line 442 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__V_18_18;
#line 442 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__V_19_19;
#line 442 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__V_20_20;
#line 442 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__V_21_21;

#line 435 "simplify_proc.m"
    {
#line 435 "simplify_proc.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__simplify__simplify_proc__ModuleInfo_6, check_hlds__simplify__simplify_proc__PredId_7, &check_hlds__simplify__simplify_proc__PredInfo_10);
    }
#line 436 "simplify_proc.m"
    {
#line 436 "simplify_proc.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__simplify__simplify_proc__PredInfo_10, &check_hlds__simplify__simplify_proc__Markers_11);
    }
#line 439 "simplify_proc.m"
    {
#line 439 "simplify_proc.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__simplify__simplify_proc__ProcInfo_8, &check_hlds__simplify__simplify_proc__Goal_12);
    }
#line 440 "simplify_proc.m"
    check_hlds__simplify__simplify_proc__GoalExpr_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__Goal_12, (MR_Integer) 0)));
#line 440 "simplify_proc.m"
    check_hlds__simplify__simplify_proc__GoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__Goal_12, (MR_Integer) 1)));
#line 442 "simplify_proc.m"
    check_hlds__simplify__simplify_proc__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_proc__GoalExpr_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 442 "simplify_proc.m"
    if (check_hlds__simplify__simplify_proc__succeeded)
#line 442 "simplify_proc.m"
      {
#line 442 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__Attributes_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr_13, (MR_Integer) 1)));
#line 442 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr_13, (MR_Integer) 2)));
#line 442 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr_13, (MR_Integer) 3)));
#line 442 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr_13, (MR_Integer) 4)));
#line 442 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr_13, (MR_Integer) 5)));
#line 442 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr_13, (MR_Integer) 6)));
#line 442 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr_13, (MR_Integer) 7)));
#line 443 "simplify_proc.m"
        {
#line 443 "simplify_proc.m"
          check_hlds__simplify__simplify_proc__MaybeMayDuplicate_22 = parse_tree__prog_data__get_may_duplicate_1_f_0(check_hlds__simplify__simplify_proc__Attributes_15);
        }
#line 444 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_proc__MaybeMayDuplicate_22)) == (MR_mktag((MR_Integer) 1)));
#line 444 "simplify_proc.m"
        if (check_hlds__simplify__simplify_proc__succeeded)
#line 444 "simplify_proc.m"
          check_hlds__simplify__simplify_proc__MayDuplicate_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_proc__MaybeMayDuplicate_22, (MR_Integer) 0)));
#line 442 "simplify_proc.m"
      }
#line 477 "simplify_proc.m"
    if (check_hlds__simplify__simplify_proc__succeeded)
#line 461 "simplify_proc.m"
#line 461 "simplify_proc.m"
      switch (check_hlds__simplify__simplify_proc__MayDuplicate_23) {
#line 461 "simplify_proc.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 461 "simplify_proc.m"
        case (MR_Integer) 0:
#line 458 "simplify_proc.m"
          {
#line 448 "simplify_proc.m"
            {
#line 448 "simplify_proc.m"
              check_hlds__simplify__simplify_proc__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__simplify__simplify_proc__Markers_11, (MR_Integer) 7);
            }
#line 458 "simplify_proc.m"
            if (check_hlds__simplify__simplify_proc__succeeded)
#line 449 "simplify_proc.m"
              {
#line 449 "simplify_proc.m"
                MR_Word check_hlds__simplify__simplify_proc__Context_24;
#line 449 "simplify_proc.m"
                MR_Word check_hlds__simplify__simplify_proc__Msg_26;
#line 449 "simplify_proc.m"
                MR_Word check_hlds__simplify__simplify_proc__Spec_28;
#line 449 "simplify_proc.m"
                MR_Word check_hlds__simplify__simplify_proc__V_76_76;

#line 449 "simplify_proc.m"
                {
#line 449 "simplify_proc.m"
                  check_hlds__simplify__simplify_proc__Context_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_proc__GoalInfo_14);
                }
#line 453 "simplify_proc.m"
                {
#line 453 "simplify_proc.m"
                  check_hlds__simplify__simplify_proc__Msg_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 453 "simplify_proc.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__Msg_26, 0) = ((MR_Box) (check_hlds__simplify__simplify_proc__Context_24));
#line 453 "simplify_proc.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__Msg_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_proc_scalar_common_1[19])));
#line 453 "simplify_proc.m"
                }
#line 456 "simplify_proc.m"
                {
#line 456 "simplify_proc.m"
                  check_hlds__simplify__simplify_proc__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 456 "simplify_proc.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_proc__V_76_76, 0) = ((MR_Box) (check_hlds__simplify__simplify_proc__Msg_26));
#line 456 "simplify_proc.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_proc__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 456 "simplify_proc.m"
                }
#line 455 "simplify_proc.m"
                {
#line 455 "simplify_proc.m"
                  check_hlds__simplify__simplify_proc__Spec_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 455 "simplify_proc.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__Spec_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 455 "simplify_proc.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__Spec_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_proc_scalar_common_3[2])));
#line 455 "simplify_proc.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__Spec_28, 2) = ((MR_Box) (check_hlds__simplify__simplify_proc__V_76_76));
#line 455 "simplify_proc.m"
                }
#line 457 "simplify_proc.m"
                {
#line 457 "simplify_proc.m"
                  MR_Word base;
#line 457 "simplify_proc.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 457 "simplify_proc.m"
                  *check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_30 = base;
#line 457 "simplify_proc.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_proc__Spec_28));
#line 457 "simplify_proc.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_0_29));
#line 457 "simplify_proc.m"
                }
#line 449 "simplify_proc.m"
              }
#line 458 "simplify_proc.m"
            else
#line 458 "simplify_proc.m"
              *check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_30 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_0_29;
#line 458 "simplify_proc.m"
          }
#line 461 "simplify_proc.m"
          break;
#line 461 "simplify_proc.m"
        case (MR_Integer) 1:
#line 473 "simplify_proc.m"
          {
#line 463 "simplify_proc.m"
            {
#line 463 "simplify_proc.m"
              check_hlds__simplify__simplify_proc__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__simplify__simplify_proc__Markers_11, (MR_Integer) 6);
            }
#line 473 "simplify_proc.m"
            if (check_hlds__simplify__simplify_proc__succeeded)
#line 464 "simplify_proc.m"
              {
#line 464 "simplify_proc.m"
                MR_Word check_hlds__simplify__simplify_proc__V_52_52;
#line 464 "simplify_proc.m"
                MR_Word check_hlds__simplify__simplify_proc__Context_79;
#line 464 "simplify_proc.m"
                MR_Word check_hlds__simplify__simplify_proc__Msg_81;
#line 464 "simplify_proc.m"
                MR_Word check_hlds__simplify__simplify_proc__Spec_83;

#line 464 "simplify_proc.m"
                {
#line 464 "simplify_proc.m"
                  check_hlds__simplify__simplify_proc__Context_79 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_proc__GoalInfo_14);
                }
#line 468 "simplify_proc.m"
                {
#line 468 "simplify_proc.m"
                  check_hlds__simplify__simplify_proc__Msg_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 468 "simplify_proc.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__Msg_81, 0) = ((MR_Box) (check_hlds__simplify__simplify_proc__Context_79));
#line 468 "simplify_proc.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__Msg_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_proc_scalar_common_1[20])));
#line 468 "simplify_proc.m"
                }
#line 471 "simplify_proc.m"
                {
#line 471 "simplify_proc.m"
                  check_hlds__simplify__simplify_proc__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 471 "simplify_proc.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_proc__V_52_52, 0) = ((MR_Box) (check_hlds__simplify__simplify_proc__Msg_81));
#line 471 "simplify_proc.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_proc__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 471 "simplify_proc.m"
                }
#line 470 "simplify_proc.m"
                {
#line 470 "simplify_proc.m"
                  check_hlds__simplify__simplify_proc__Spec_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 470 "simplify_proc.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__Spec_83, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 470 "simplify_proc.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__Spec_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_proc_scalar_common_3[2])));
#line 470 "simplify_proc.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__Spec_83, 2) = ((MR_Box) (check_hlds__simplify__simplify_proc__V_52_52));
#line 470 "simplify_proc.m"
                }
#line 472 "simplify_proc.m"
                {
#line 472 "simplify_proc.m"
                  MR_Word base;
#line 472 "simplify_proc.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 472 "simplify_proc.m"
                  *check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_30 = base;
#line 472 "simplify_proc.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_proc__Spec_83));
#line 472 "simplify_proc.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_0_29));
#line 472 "simplify_proc.m"
                }
#line 464 "simplify_proc.m"
              }
#line 473 "simplify_proc.m"
            else
#line 473 "simplify_proc.m"
              *check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_30 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_0_29;
#line 473 "simplify_proc.m"
          }
#line 461 "simplify_proc.m"
          break;
#line 461 "simplify_proc.m"
      }
#line 477 "simplify_proc.m"
    else
#line 477 "simplify_proc.m"
      *check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_30 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_0_29;
#line 434 "simplify_proc.m"
  }
#line 430 "simplify_proc.m"
}

#line 371 "simplify_proc.m"
static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_analyze_and_format_calls_7_p_0(
#line 371 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_0_29,
#line 371 "simplify_proc.m"
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_30,
#line 371 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__PredId_9,
#line 371 "simplify_proc.m"
  MR_Integer check_hlds__simplify__simplify_proc__ProcId_10,
#line 371 "simplify_proc.m"
  MR_Word * check_hlds__simplify__simplify_proc__FormatSpecs_11,
#line 371 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_0_31,
#line 371 "simplify_proc.m"
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_32)
#line 371 "simplify_proc.m"
{
#line 376 "simplify_proc.m"
  {
#line 376 "simplify_proc.m"
    MR_bool check_hlds__simplify__simplify_proc__succeeded;
#line 376 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__Goal0_13;
#line 376 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__VarSet0_14;
#line 376 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__VarTypes0_15;
#line 376 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__MaybeGoal_16;
#line 376 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__VarSet_17;
#line 376 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__VarTypes_18;

#line 377 "simplify_proc.m"
    {
#line 377 "simplify_proc.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_0_31, &check_hlds__simplify__simplify_proc__Goal0_13);
    }
#line 378 "simplify_proc.m"
    {
#line 378 "simplify_proc.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_0_31, &check_hlds__simplify__simplify_proc__VarSet0_14);
    }
#line 379 "simplify_proc.m"
    {
#line 379 "simplify_proc.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_0_31, &check_hlds__simplify__simplify_proc__VarTypes0_15);
    }
#line 380 "simplify_proc.m"
    {
#line 380 "simplify_proc.m"
      check_hlds__simplify__format_call__analyze_and_optimize_format_calls_8_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_0_29, check_hlds__simplify__simplify_proc__Goal0_13, &check_hlds__simplify__simplify_proc__MaybeGoal_16, check_hlds__simplify__simplify_proc__FormatSpecs_11, check_hlds__simplify__simplify_proc__VarSet0_14, &check_hlds__simplify__simplify_proc__VarSet_17, check_hlds__simplify__simplify_proc__VarTypes0_15, &check_hlds__simplify__simplify_proc__VarTypes_18);
    }
#line 423 "simplify_proc.m"
    if ((check_hlds__simplify__simplify_proc__MaybeGoal_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 424 "simplify_proc.m"
      {
#line 424 "simplify_proc.m"
        *check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_30 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_0_29;
#line 424 "simplify_proc.m"
        *check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_32 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_0_31;
#line 424 "simplify_proc.m"
      }
#line 423 "simplify_proc.m"
    else
#line 383 "simplify_proc.m"
      {
#line 383 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__TypeCtorInfo_43_43;
#line 383 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__TypeCtorInfo_44_44;
#line 383 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__Goal_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_proc__MaybeGoal_16, (MR_Integer) 0)));
#line 383 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__PredTable0_20;
#line 383 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__PredInfo0_21;
#line 383 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__ProcTable0_22;
#line 383 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__ProcTable_23;
#line 383 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__PredInfo1_24;
#line 383 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__Markers1_25;
#line 383 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__Markers_26;
#line 383 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__PredInfo_27;
#line 383 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__PredTable_28;
#line 383 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_33_33;
#line 383 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_34_34;
#line 383 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_35_35;
#line 383 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_37_37;
#line 383 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_40_40;
#line 412 "simplify_proc.m"
        MR_Box check_hlds__simplify__simplify_proc__conv0_PredInfo0_21;

#line 384 "simplify_proc.m"
        {
#line 384 "simplify_proc.m"
          hlds__hlds_pred__proc_info_set_goal_3_p_0(check_hlds__simplify__simplify_proc__Goal_19, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_0_31, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_33_33);
        }
#line 385 "simplify_proc.m"
        {
#line 385 "simplify_proc.m"
          hlds__hlds_pred__proc_info_set_varset_3_p_0(check_hlds__simplify__simplify_proc__VarSet_17, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_33_33, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_34_34);
        }
#line 386 "simplify_proc.m"
        {
#line 386 "simplify_proc.m"
          hlds__hlds_pred__proc_info_set_vartypes_3_p_0(check_hlds__simplify__simplify_proc__VarTypes_18, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_34_34, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_35_35);
        }
#line 398 "simplify_proc.m"
        {
#line 398 "simplify_proc.m"
          hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 0, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_35_35, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_37_37);
        }
#line 399 "simplify_proc.m"
        {
#line 399 "simplify_proc.m"
          check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 1, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_37_37, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_32, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_0_29, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_40_40);
        }
#line 411 "simplify_proc.m"
        {
#line 411 "simplify_proc.m"
          hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_40_40, &check_hlds__simplify__simplify_proc__PredTable0_20);
        }
#line 4116 "check_hlds.simplify.simplify_proc.c"
        check_hlds__simplify__simplify_proc__TypeCtorInfo_43_43 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 4118 "check_hlds.simplify.simplify_proc.c"
        check_hlds__simplify__simplify_proc__TypeCtorInfo_44_44 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 412 "simplify_proc.m"
        {
#line 412 "simplify_proc.m"
          mercury__map__lookup_3_p_0(check_hlds__simplify__simplify_proc__TypeCtorInfo_43_43, check_hlds__simplify__simplify_proc__TypeCtorInfo_44_44, check_hlds__simplify__simplify_proc__PredTable0_20, ((MR_Box) (check_hlds__simplify__simplify_proc__PredId_9)), &check_hlds__simplify__simplify_proc__conv0_PredInfo0_21);
        }
#line 412 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__PredInfo0_21 = ((MR_Word) check_hlds__simplify__simplify_proc__conv0_PredInfo0_21);
#line 413 "simplify_proc.m"
        {
#line 413 "simplify_proc.m"
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__simplify__simplify_proc__PredInfo0_21, &check_hlds__simplify__simplify_proc__ProcTable0_22);
        }
#line 414 "simplify_proc.m"
        {
#line 414 "simplify_proc.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__simplify__simplify_proc__ProcId_10, ((MR_Box) (*check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_32)), check_hlds__simplify__simplify_proc__ProcTable0_22, &check_hlds__simplify__simplify_proc__ProcTable_23);
        }
#line 415 "simplify_proc.m"
        {
#line 415 "simplify_proc.m"
          hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__simplify__simplify_proc__ProcTable_23, check_hlds__simplify__simplify_proc__PredInfo0_21, &check_hlds__simplify__simplify_proc__PredInfo1_24);
        }
#line 417 "simplify_proc.m"
        {
#line 417 "simplify_proc.m"
          hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__simplify__simplify_proc__PredInfo1_24, &check_hlds__simplify__simplify_proc__Markers1_25);
        }
#line 418 "simplify_proc.m"
        {
#line 418 "simplify_proc.m"
          hlds__hlds_pred__remove_marker_3_p_0((MR_Integer) 24, check_hlds__simplify__simplify_proc__Markers1_25, &check_hlds__simplify__simplify_proc__Markers_26);
        }
#line 419 "simplify_proc.m"
        {
#line 419 "simplify_proc.m"
          hlds__hlds_pred__pred_info_set_markers_3_p_0(check_hlds__simplify__simplify_proc__Markers_26, check_hlds__simplify__simplify_proc__PredInfo1_24, &check_hlds__simplify__simplify_proc__PredInfo_27);
        }
#line 421 "simplify_proc.m"
        {
#line 421 "simplify_proc.m"
          mercury__map__det_update_4_p_0(check_hlds__simplify__simplify_proc__TypeCtorInfo_43_43, check_hlds__simplify__simplify_proc__TypeCtorInfo_44_44, ((MR_Box) (check_hlds__simplify__simplify_proc__PredId_9)), ((MR_Box) (check_hlds__simplify__simplify_proc__PredInfo_27)), check_hlds__simplify__simplify_proc__PredTable0_20, &check_hlds__simplify__simplify_proc__PredTable_28);
        }
#line 422 "simplify_proc.m"
        {
#line 422 "simplify_proc.m"
          hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__simplify__simplify_proc__PredTable_28, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_40_40, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_30);
#line 422 "simplify_proc.m"
          return;
        }
#line 383 "simplify_proc.m"
      }
#line 376 "simplify_proc.m"
  }
#line 371 "simplify_proc.m"
}

#line 352 "simplify_proc.m"
static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_maybe_mark_modecheck_clauses_2_p_0(
#line 352 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_0_13,
#line 352 "simplify_proc.m"
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_14)
#line 352 "simplify_proc.m"
{
#line 355 "simplify_proc.m"
  {
#line 355 "simplify_proc.m"
    MR_bool check_hlds__simplify__simplify_proc__succeeded;
#line 355 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__Goal0_4;
#line 355 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__GoalExpr0_5;
#line 355 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__GoalInfo0_6;

#line 356 "simplify_proc.m"
    {
#line 356 "simplify_proc.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_0_13, &check_hlds__simplify__simplify_proc__Goal0_4);
    }
#line 357 "simplify_proc.m"
    check_hlds__simplify__simplify_proc__GoalExpr0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__Goal0_4, (MR_Integer) 0)));
#line 357 "simplify_proc.m"
    check_hlds__simplify__simplify_proc__GoalInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__Goal0_4, (MR_Integer) 1)));
#line 360 "simplify_proc.m"
    if (((((MR_tag((MR_Word) check_hlds__simplify__simplify_proc__GoalExpr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr0_5, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 359 "simplify_proc.m"
      check_hlds__simplify__simplify_proc__succeeded = MR_TRUE;
#line 360 "simplify_proc.m"
    else
#line 360 "simplify_proc.m"
    if (((((MR_tag((MR_Word) check_hlds__simplify__simplify_proc__GoalExpr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_proc__GoalExpr0_5, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 360 "simplify_proc.m"
      check_hlds__simplify__simplify_proc__succeeded = MR_TRUE;
#line 360 "simplify_proc.m"
    else
#line 360 "simplify_proc.m"
      check_hlds__simplify__simplify_proc__succeeded = MR_FALSE;
#line 367 "simplify_proc.m"
    if (check_hlds__simplify__simplify_proc__succeeded)
#line 364 "simplify_proc.m"
      {
#line 364 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__GoalInfo_11;
#line 364 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__Goal_12;

#line 363 "simplify_proc.m"
        {
#line 363 "simplify_proc.m"
          hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 14, check_hlds__simplify__simplify_proc__GoalInfo0_6, &check_hlds__simplify__simplify_proc__GoalInfo_11);
        }
#line 365 "simplify_proc.m"
        {
#line 365 "simplify_proc.m"
          check_hlds__simplify__simplify_proc__Goal_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 365 "simplify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__Goal_12, 0) = ((MR_Box) (check_hlds__simplify__simplify_proc__GoalExpr0_5));
#line 365 "simplify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__Goal_12, 1) = ((MR_Box) (check_hlds__simplify__simplify_proc__GoalInfo_11));
#line 365 "simplify_proc.m"
        }
#line 366 "simplify_proc.m"
        {
#line 366 "simplify_proc.m"
          hlds__hlds_pred__proc_info_set_goal_3_p_0(check_hlds__simplify__simplify_proc__Goal_12, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_0_13, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_14);
#line 366 "simplify_proc.m"
          return;
        }
#line 364 "simplify_proc.m"
      }
#line 367 "simplify_proc.m"
    else
#line 367 "simplify_proc.m"
      *check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_14 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_0_13;
#line 355 "simplify_proc.m"
  }
#line 352 "simplify_proc.m"
}

#line 335 "simplify_proc.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_maybe_vary_parameters_5_p_0_1(
#line 335 "simplify_proc.m"
  MR_Box check_hlds__simplify__simplify_proc__closure_arg,
#line 335 "simplify_proc.m"
  MR_Box check_hlds__simplify__simplify_proc__wrapper_arg_1,
#line 335 "simplify_proc.m"
  MR_Box * check_hlds__simplify__simplify_proc__wrapper_arg_2)
#line 335 "simplify_proc.m"
{
#line 335 "simplify_proc.m"
  {
#line 335 "simplify_proc.m"
    MR_bool check_hlds__simplify__simplify_proc__succeeded;
#line 335 "simplify_proc.m"
    MR_Box check_hlds__simplify__simplify_proc__closure = check_hlds__simplify__simplify_proc__closure_arg;
#line 335 "simplify_proc.m"
    MR_Integer check_hlds__simplify__simplify_proc__conv0_HeadVar__2_2;

#line 335 "simplify_proc.m"
    {
#line 335 "simplify_proc.m"
      check_hlds__simplify__simplify_proc__succeeded = mercury__string__to_int_2_p_0(((MR_String) check_hlds__simplify__simplify_proc__wrapper_arg_1), &check_hlds__simplify__simplify_proc__conv0_HeadVar__2_2);
    }
#line 335 "simplify_proc.m"
    if (check_hlds__simplify__simplify_proc__succeeded)
#line 335 "simplify_proc.m"
      {
#line 335 "simplify_proc.m"
        *check_hlds__simplify__simplify_proc__wrapper_arg_2 = ((MR_Box) (check_hlds__simplify__simplify_proc__conv0_HeadVar__2_2));
#line 335 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__succeeded = MR_TRUE;
#line 335 "simplify_proc.m"
      }
#line 335 "simplify_proc.m"
    return check_hlds__simplify__simplify_proc__succeeded;
#line 335 "simplify_proc.m"
  }
#line 335 "simplify_proc.m"
}

#line 311 "simplify_proc.m"
static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_maybe_vary_parameters_5_p_0(
#line 311 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__ModuleInfo_6,
#line 311 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__PredId_7,
#line 311 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__ProcInfo_8,
#line 311 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_0_16,
#line 311 "simplify_proc.m"
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_17)
#line 311 "simplify_proc.m"
{
#line 315 "simplify_proc.m"
  {
#line 315 "simplify_proc.m"
    MR_bool check_hlds__simplify__simplify_proc__succeeded;
#line 315 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__VarTypes0_10;
#line 315 "simplify_proc.m"
    MR_Integer check_hlds__simplify__simplify_proc__NumVars_11;
#line 315 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__Globals_12;
#line 315 "simplify_proc.m"
    MR_String check_hlds__simplify__simplify_proc__CommonStructPreds_13;
#line 315 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_19_19;

#line 316 "simplify_proc.m"
    {
#line 316 "simplify_proc.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__simplify__simplify_proc__ProcInfo_8, &check_hlds__simplify__simplify_proc__VarTypes0_10);
    }
#line 317 "simplify_proc.m"
    {
#line 317 "simplify_proc.m"
      hlds__vartypes__vartypes_count_2_p_0(check_hlds__simplify__simplify_proc__VarTypes0_10, &check_hlds__simplify__simplify_proc__NumVars_11);
    }
#line 318 "simplify_proc.m"
    check_hlds__simplify__simplify_proc__succeeded = (check_hlds__simplify__simplify_proc__NumVars_11 > (MR_Integer) 1000);
#line 324 "simplify_proc.m"
    if (check_hlds__simplify__simplify_proc__succeeded)
#line 323 "simplify_proc.m"
      {
#line 323 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_0_16, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 323 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_0_16, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 323 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_0_16, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 323 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_0_16, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 323 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_0_16, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 323 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_0_16, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 323 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_0_16, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 323 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_0_16, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 323 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_0_16, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 323 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_0_16, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 323 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_0_16, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 323 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_0_16, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 323 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_0_16, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);

#line 323 "simplify_proc.m"
        {
#line 323 "simplify_proc.m"
          check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 323 "simplify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_19_19, 0) = ((MR_Box) ((check_hlds__simplify__simplify_proc__V_27_27 | ((((check_hlds__simplify__simplify_proc__V_28_28 << (MR_Integer) 1)) | ((((check_hlds__simplify__simplify_proc__V_29_29 << (MR_Integer) 2)) | ((((check_hlds__simplify__simplify_proc__V_30_30 << (MR_Integer) 3)) | ((((check_hlds__simplify__simplify_proc__V_31_31 << (MR_Integer) 4)) | ((((check_hlds__simplify__simplify_proc__V_32_32 << (MR_Integer) 5)) | ((((check_hlds__simplify__simplify_proc__V_33_33 << (MR_Integer) 6)) | ((((check_hlds__simplify__simplify_proc__V_34_34 << (MR_Integer) 7)) | ((((check_hlds__simplify__simplify_proc__V_35_35 << (MR_Integer) 8)) | ((((check_hlds__simplify__simplify_proc__V_36_36 << (MR_Integer) 9)) | (((((MR_Integer) 0 << (MR_Integer) 10)) | ((((check_hlds__simplify__simplify_proc__V_38_38 << (MR_Integer) 11)) | ((check_hlds__simplify__simplify_proc__V_39_39 << (MR_Integer) 12)))))))))))))))))))))))))));
#line 323 "simplify_proc.m"
        }
#line 323 "simplify_proc.m"
      }
#line 324 "simplify_proc.m"
    else
#line 324 "simplify_proc.m"
      check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_19_19 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_0_16;
#line 327 "simplify_proc.m"
    {
#line 327 "simplify_proc.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__simplify__simplify_proc__ModuleInfo_6, &check_hlds__simplify__simplify_proc__Globals_12);
    }
#line 328 "simplify_proc.m"
    {
#line 328 "simplify_proc.m"
      libs__globals__lookup_string_option_3_p_0(check_hlds__simplify__simplify_proc__Globals_12, (MR_Integer) 351, &check_hlds__simplify__simplify_proc__CommonStructPreds_13);
    }
#line 330 "simplify_proc.m"
    check_hlds__simplify__simplify_proc__succeeded = (strcmp(check_hlds__simplify__simplify_proc__CommonStructPreds_13, (MR_String) "") == 0);
#line 332 "simplify_proc.m"
    if (check_hlds__simplify__simplify_proc__succeeded)
#line 332 "simplify_proc.m"
      *check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_17 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_19_19;
#line 332 "simplify_proc.m"
    else
#line 333 "simplify_proc.m"
      {
#line 333 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__CommonStructPredIdStrs_14;
#line 343 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__CommonStructPredIdInts_15;

#line 333 "simplify_proc.m"
        {
#line 333 "simplify_proc.m"
          check_hlds__simplify__simplify_proc__CommonStructPredIdStrs_14 = mercury__string__split_at_char_2_f_0((MR_Char) 44, check_hlds__simplify__simplify_proc__CommonStructPreds_13);
        }
#line 335 "simplify_proc.m"
        {
#line 335 "simplify_proc.m"
          check_hlds__simplify__simplify_proc__succeeded = mercury__list__map_3_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &check_hlds__simplify__simplify_proc_scalar_common_2[2], check_hlds__simplify__simplify_proc__CommonStructPredIdStrs_14, &check_hlds__simplify__simplify_proc__CommonStructPredIdInts_15);
        }
#line 343 "simplify_proc.m"
        if (check_hlds__simplify__simplify_proc__succeeded)
#line 340 "simplify_proc.m"
          {
#line 338 "simplify_proc.m"
            MR_Integer check_hlds__simplify__simplify_proc__V_24_24;

#line 338 "simplify_proc.m"
            {
#line 338 "simplify_proc.m"
              check_hlds__simplify__simplify_proc__V_24_24 = hlds__hlds_pred__pred_id_to_int_1_f_0(check_hlds__simplify__simplify_proc__PredId_7);
            }
#line 338 "simplify_proc.m"
            {
#line 338 "simplify_proc.m"
              check_hlds__simplify__simplify_proc__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (check_hlds__simplify__simplify_proc__V_24_24)), check_hlds__simplify__simplify_proc__CommonStructPredIdInts_15);
            }
#line 340 "simplify_proc.m"
            if (check_hlds__simplify__simplify_proc__succeeded)
#line 340 "simplify_proc.m"
              *check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_17 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_19_19;
#line 340 "simplify_proc.m"
            else
#line 341 "simplify_proc.m"
              {
#line 341 "simplify_proc.m"
                MR_Word check_hlds__simplify__simplify_proc__V_40_40 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_19_19, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 341 "simplify_proc.m"
                MR_Word check_hlds__simplify__simplify_proc__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_19_19, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 341 "simplify_proc.m"
                MR_Word check_hlds__simplify__simplify_proc__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_19_19, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 341 "simplify_proc.m"
                MR_Word check_hlds__simplify__simplify_proc__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_19_19, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 341 "simplify_proc.m"
                MR_Word check_hlds__simplify__simplify_proc__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_19_19, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 341 "simplify_proc.m"
                MR_Word check_hlds__simplify__simplify_proc__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_19_19, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 341 "simplify_proc.m"
                MR_Word check_hlds__simplify__simplify_proc__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_19_19, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 341 "simplify_proc.m"
                MR_Word check_hlds__simplify__simplify_proc__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_19_19, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 341 "simplify_proc.m"
                MR_Word check_hlds__simplify__simplify_proc__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_19_19, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 341 "simplify_proc.m"
                MR_Word check_hlds__simplify__simplify_proc__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_19_19, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 341 "simplify_proc.m"
                MR_Word check_hlds__simplify__simplify_proc__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_19_19, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 341 "simplify_proc.m"
                MR_Word check_hlds__simplify__simplify_proc__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_19_19, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 341 "simplify_proc.m"
                MR_Word check_hlds__simplify__simplify_proc__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_19_19, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);

#line 341 "simplify_proc.m"
                {
#line 341 "simplify_proc.m"
                  MR_Word base;
#line 341 "simplify_proc.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 341 "simplify_proc.m"
                  *check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_17 = base;
#line 341 "simplify_proc.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((check_hlds__simplify__simplify_proc__V_40_40 | ((((check_hlds__simplify__simplify_proc__V_41_41 << (MR_Integer) 1)) | ((((check_hlds__simplify__simplify_proc__V_42_42 << (MR_Integer) 2)) | ((((check_hlds__simplify__simplify_proc__V_43_43 << (MR_Integer) 3)) | ((((check_hlds__simplify__simplify_proc__V_44_44 << (MR_Integer) 4)) | ((((check_hlds__simplify__simplify_proc__V_45_45 << (MR_Integer) 5)) | ((((check_hlds__simplify__simplify_proc__V_46_46 << (MR_Integer) 6)) | ((((check_hlds__simplify__simplify_proc__V_47_47 << (MR_Integer) 7)) | ((((check_hlds__simplify__simplify_proc__V_48_48 << (MR_Integer) 8)) | ((((check_hlds__simplify__simplify_proc__V_49_49 << (MR_Integer) 9)) | (((((MR_Integer) 0 << (MR_Integer) 10)) | ((((check_hlds__simplify__simplify_proc__V_51_51 << (MR_Integer) 11)) | ((check_hlds__simplify__simplify_proc__V_52_52 << (MR_Integer) 12)))))))))))))))))))))))))));
#line 341 "simplify_proc.m"
                }
#line 341 "simplify_proc.m"
              }
#line 340 "simplify_proc.m"
          }
#line 343 "simplify_proc.m"
        else
#line 343 "simplify_proc.m"
          *check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_17 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_SimplifyTasks_19_19;
#line 333 "simplify_proc.m"
      }
#line 315 "simplify_proc.m"
  }
#line 311 "simplify_proc.m"
}

#line 277 "simplify_proc.m"
static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_return_msgs_8_p_0_1(
#line 277 "simplify_proc.m"
  MR_Box check_hlds__simplify__simplify_proc__closure_arg,
#line 277 "simplify_proc.m"
  MR_Box check_hlds__simplify__simplify_proc__wrapper_arg_1,
#line 277 "simplify_proc.m"
  MR_Box check_hlds__simplify__simplify_proc__wrapper_arg_2,
#line 277 "simplify_proc.m"
  MR_Box check_hlds__simplify__simplify_proc__wrapper_arg_3,
#line 277 "simplify_proc.m"
  MR_Box * check_hlds__simplify__simplify_proc__wrapper_arg_4)
#line 277 "simplify_proc.m"
{
#line 277 "simplify_proc.m"
  {
#line 277 "simplify_proc.m"
    MR_Box check_hlds__simplify__simplify_proc__closure = check_hlds__simplify__simplify_proc__closure_arg;
#line 277 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__conv0_HeadVar__4_87;

#line 277 "simplify_proc.m"
    {
#line 277 "simplify_proc.m"
      check_hlds__simplify__simplify_proc__IntroducedFrom__pred__simplify_proc_return_msgs__277__1_4_p_0(((MR_Word) check_hlds__simplify__simplify_proc__wrapper_arg_1), ((MR_String) check_hlds__simplify__simplify_proc__wrapper_arg_2), ((MR_Word) check_hlds__simplify__simplify_proc__wrapper_arg_3), &check_hlds__simplify__simplify_proc__conv0_HeadVar__4_87);
    }
#line 277 "simplify_proc.m"
    *check_hlds__simplify__simplify_proc__wrapper_arg_4 = ((MR_Box) (check_hlds__simplify__simplify_proc__conv0_HeadVar__4_87));
#line 277 "simplify_proc.m"
  }
#line 277 "simplify_proc.m"
}

#line 198 "simplify_proc.m"
static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_return_msgs_8_p_0(
#line 198 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__SimplifyTasks0_9,
#line 198 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__PredId_10,
#line 198 "simplify_proc.m"
  MR_Integer check_hlds__simplify__simplify_proc__ProcId_11,
#line 198 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_0_43,
#line 198 "simplify_proc.m"
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_44,
#line 198 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_0_45,
#line 198 "simplify_proc.m"
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_46,
#line 198 "simplify_proc.m"
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_47)
#line 198 "simplify_proc.m"
{
#line 203 "simplify_proc.m"
  {
#line 203 "simplify_proc.m"
    MR_bool check_hlds__simplify__simplify_proc__succeeded;
#line 203 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__TypeInfo_82_82;
#line 203 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__SimplifyTasks_15;
#line 203 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__PredInfo0_16;
#line 203 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__Markers0_17;
#line 203 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__FormatSpecs_18;
#line 203 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__Info0_19;
#line 203 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__CodeModel_22;
#line 203 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__ProcIsModelNon_23;
#line 203 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__NestedContext0_24;
#line 203 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__InstMap0_25;
#line 203 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__Goal0_26;
#line 203 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__Goal_27;
#line 203 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__Info_28;
#line 203 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__VarSet0_29;
#line 203 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__VarTypes1_30;
#line 203 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__RttiVarMaps_31;
#line 203 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__ElimVarsLists0_32;
#line 203 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__ElimVarsLists_33;
#line 203 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__ElimVars_34;
#line 203 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__VarSet1_35;
#line 203 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__VarTypes_36;
#line 203 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__VarSet_38;
#line 203 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__HasParallelConj_39;
#line 203 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__HasUserEvent_40;
#line 203 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__Status_41;
#line 203 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__IsDefinedHere_42;
#line 203 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_49_49;
#line 203 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_52_52;
#line 203 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_53_53;
#line 203 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_55_55;
#line 203 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_58_58;
#line 203 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_59_59;
#line 203 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_60_60;
#line 203 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_61_61;
#line 203 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_62_62;
#line 203 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_65_65;
#line 203 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_66_66;
#line 203 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_67_67;
#line 230 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__V_51_51;
#line 231 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__V_69_69;
#line 231 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__V_70_70;
#line 231 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__V_71_71;
#line 231 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__V_72_72;
#line 231 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__V_73_73;
#line 231 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__V_74_74;
#line 231 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__V_75_75;
#line 231 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__V_76_76;
#line 231 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__V_77_77;
#line 231 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__V_78_78;
#line 231 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__V_79_79;
#line 231 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__V_80_80;

#line 204 "simplify_proc.m"
    {
#line 204 "simplify_proc.m"
      check_hlds__simplify__simplify_proc__simplify_proc_maybe_vary_parameters_5_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_0_43, check_hlds__simplify__simplify_proc__PredId_10, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_0_45, check_hlds__simplify__simplify_proc__SimplifyTasks0_9, &check_hlds__simplify__simplify_proc__SimplifyTasks_15);
    }
#line 206 "simplify_proc.m"
    {
#line 206 "simplify_proc.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_0_43, check_hlds__simplify__simplify_proc__PredId_10, &check_hlds__simplify__simplify_proc__PredInfo0_16);
    }
#line 207 "simplify_proc.m"
    {
#line 207 "simplify_proc.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__simplify__simplify_proc__PredInfo0_16, &check_hlds__simplify__simplify_proc__Markers0_17);
    }
#line 208 "simplify_proc.m"
    {
#line 208 "simplify_proc.m"
      check_hlds__simplify__simplify_proc__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__simplify__simplify_proc__Markers0_17, (MR_Integer) 21);
    }
#line 210 "simplify_proc.m"
    if (check_hlds__simplify__simplify_proc__succeeded)
#line 209 "simplify_proc.m"
      {
#line 209 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__simplify_proc_maybe_mark_modecheck_clauses_2_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_0_45, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_49_49);
      }
#line 210 "simplify_proc.m"
    else
#line 210 "simplify_proc.m"
      check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_49_49 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_0_45;
#line 230 "simplify_proc.m"
    {
#line 230 "simplify_proc.m"
      check_hlds__simplify__simplify_proc__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__simplify__simplify_proc__Markers0_17, (MR_Integer) 24);
    }
#line 230 "simplify_proc.m"
    if (check_hlds__simplify__simplify_proc__succeeded)
#line 230 "simplify_proc.m"
      {
#line 231 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__V_69_69 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__SimplifyTasks_15, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 231 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__V_70_70 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__SimplifyTasks_15, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 231 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__SimplifyTasks_15, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 231 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__SimplifyTasks_15, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 231 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__SimplifyTasks_15, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 231 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__SimplifyTasks_15, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 231 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__SimplifyTasks_15, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 231 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__V_75_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__SimplifyTasks_15, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 231 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__V_76_76 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__SimplifyTasks_15, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 231 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__V_77_77 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__SimplifyTasks_15, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 231 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__V_78_78 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__SimplifyTasks_15, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 231 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__V_79_79 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__SimplifyTasks_15, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 231 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__V_80_80 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__SimplifyTasks_15, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 231 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__succeeded = (check_hlds__simplify__simplify_proc__V_51_51 == (MR_Integer) 1);
#line 230 "simplify_proc.m"
      }
#line 235 "simplify_proc.m"
    if (check_hlds__simplify__simplify_proc__succeeded)
#line 233 "simplify_proc.m"
      {
#line 233 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__simplify_proc_analyze_and_format_calls_7_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_0_43, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_52_52, check_hlds__simplify__simplify_proc__PredId_10, check_hlds__simplify__simplify_proc__ProcId_11, &check_hlds__simplify__simplify_proc__FormatSpecs_18, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_49_49, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_53_53);
      }
#line 235 "simplify_proc.m"
    else
#line 238 "simplify_proc.m"
      {
#line 238 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__FormatSpecs_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 238 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_53_53 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_49_49;
#line 238 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_52_52 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_0_43;
#line 238 "simplify_proc.m"
      }
#line 241 "simplify_proc.m"
    {
#line 241 "simplify_proc.m"
      check_hlds__simplify__simplify_info__simplify_info_init_6_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_52_52, check_hlds__simplify__simplify_proc__PredId_10, check_hlds__simplify__simplify_proc__ProcId_11, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_53_53, check_hlds__simplify__simplify_proc__SimplifyTasks_15, &check_hlds__simplify__simplify_proc__Info0_19);
    }
#line 246 "simplify_proc.m"
    {
#line 246 "simplify_proc.m"
      check_hlds__simplify__simplify_proc__CodeModel_22 = hlds__code_model__proc_info_interface_code_model_1_f_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_53_53);
    }
#line 252 "simplify_proc.m"
#line 252 "simplify_proc.m"
    switch (check_hlds__simplify__simplify_proc__CodeModel_22) {
#line 252 "simplify_proc.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 252 "simplify_proc.m"
      case (MR_Integer) 0:
#line 252 "simplify_proc.m"
      case (MR_Integer) 1:
#line 251 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__ProcIsModelNon_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 252 "simplify_proc.m"
        break;
#line 252 "simplify_proc.m"
      case (MR_Integer) 2:
#line 253 "simplify_proc.m"
        {
#line 254 "simplify_proc.m"
          check_hlds__simplify__simplify_proc__ProcIsModelNon_23 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_proc_scalar_common_3[0]);
#line 253 "simplify_proc.m"
        }
#line 252 "simplify_proc.m"
        break;
#line 252 "simplify_proc.m"
    }
#line 256 "simplify_proc.m"
    {
#line 256 "simplify_proc.m"
      check_hlds__simplify__simplify_proc__NestedContext0_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 256 "simplify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__NestedContext0_24, 0) = ((MR_Box) ((MR_Integer) 0));
#line 256 "simplify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__NestedContext0_24, 1) = ((MR_Box) ((MR_Integer) 0));
#line 256 "simplify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_proc__NestedContext0_24, 2) = ((MR_Box) (check_hlds__simplify__simplify_proc__ProcIsModelNon_23));
#line 256 "simplify_proc.m"
    }
#line 258 "simplify_proc.m"
    {
#line 258 "simplify_proc.m"
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_53_53, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_52_52, &check_hlds__simplify__simplify_proc__InstMap0_25);
    }
#line 260 "simplify_proc.m"
    {
#line 260 "simplify_proc.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_53_53, &check_hlds__simplify__simplify_proc__Goal0_26);
    }
#line 261 "simplify_proc.m"
    {
#line 261 "simplify_proc.m"
      check_hlds__simplify__simplify_proc__simplify_top_level_goal_6_p_0(check_hlds__simplify__simplify_proc__Goal0_26, &check_hlds__simplify__simplify_proc__Goal_27, check_hlds__simplify__simplify_proc__NestedContext0_24, check_hlds__simplify__simplify_proc__InstMap0_25, check_hlds__simplify__simplify_proc__Info0_19, &check_hlds__simplify__simplify_proc__Info_28);
    }
#line 263 "simplify_proc.m"
    {
#line 263 "simplify_proc.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(check_hlds__simplify__simplify_proc__Goal_27, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_53_53, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_55_55);
    }
#line 265 "simplify_proc.m"
    {
#line 265 "simplify_proc.m"
      check_hlds__simplify__simplify_info__simplify_info_get_varset_2_p_0(check_hlds__simplify__simplify_proc__Info_28, &check_hlds__simplify__simplify_proc__VarSet0_29);
    }
#line 266 "simplify_proc.m"
    {
#line 266 "simplify_proc.m"
      check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__simplify_proc__Info_28, &check_hlds__simplify__simplify_proc__VarTypes1_30);
    }
#line 267 "simplify_proc.m"
    {
#line 267 "simplify_proc.m"
      check_hlds__simplify__simplify_info__simplify_info_get_rtti_varmaps_2_p_0(check_hlds__simplify__simplify_proc__Info_28, &check_hlds__simplify__simplify_proc__RttiVarMaps_31);
    }
#line 268 "simplify_proc.m"
    {
#line 268 "simplify_proc.m"
      check_hlds__simplify__simplify_info__simplify_info_get_elim_vars_2_p_0(check_hlds__simplify__simplify_proc__Info_28, &check_hlds__simplify__simplify_proc__ElimVarsLists0_32);
    }
#line 270 "simplify_proc.m"
    {
#line 270 "simplify_proc.m"
      mercury__list__sort_2_p_0((MR_Word) &check_hlds__simplify__simplify_proc_scalar_common_1[1], check_hlds__simplify__simplify_proc__ElimVarsLists0_32, &check_hlds__simplify__simplify_proc__ElimVarsLists_33);
    }
#line 4847 "check_hlds.simplify.simplify_proc.c"
    check_hlds__simplify__simplify_proc__TypeInfo_82_82 = (MR_Word) &check_hlds__simplify__simplify_proc_scalar_common_1[0];
#line 271 "simplify_proc.m"
    {
#line 271 "simplify_proc.m"
      mercury__list__condense_2_p_0(check_hlds__simplify__simplify_proc__TypeInfo_82_82, check_hlds__simplify__simplify_proc__ElimVarsLists_33, &check_hlds__simplify__simplify_proc__ElimVars_34);
    }
#line 272 "simplify_proc.m"
    {
#line 272 "simplify_proc.m"
      mercury__varset__delete_sorted_vars_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__simplify_proc__ElimVars_34, check_hlds__simplify__simplify_proc__VarSet0_29, &check_hlds__simplify__simplify_proc__VarSet1_35);
    }
#line 273 "simplify_proc.m"
    {
#line 273 "simplify_proc.m"
      hlds__vartypes__delete_sorted_var_types_3_p_0(check_hlds__simplify__simplify_proc__ElimVars_34, check_hlds__simplify__simplify_proc__VarTypes1_30, &check_hlds__simplify__simplify_proc__VarTypes_36);
    }
#line 275 "simplify_proc.m"
    {
#line 275 "simplify_proc.m"
      check_hlds__simplify__simplify_proc__succeeded = check_hlds__simplify__simplify_info__simplify_do_after_front_end_1_p_0(check_hlds__simplify__simplify_proc__Info_28);
    }
#line 279 "simplify_proc.m"
    if (check_hlds__simplify__simplify_proc__succeeded)
#line 276 "simplify_proc.m"
      {
#line 276 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__TypeCtorInfo_89_89;
#line 276 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__VarNameRemap_37;
#line 276 "simplify_proc.m"
        MR_Word check_hlds__simplify__simplify_proc__V_57_57;
#line 277 "simplify_proc.m"
        MR_Box check_hlds__simplify__simplify_proc__conv1_VarSet_38;

#line 276 "simplify_proc.m"
        {
#line 276 "simplify_proc.m"
          hlds__hlds_pred__proc_info_get_var_name_remap_2_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_55_55, &check_hlds__simplify__simplify_proc__VarNameRemap_37);
        }
#line 4887 "check_hlds.simplify.simplify_proc.c"
        check_hlds__simplify__simplify_proc__TypeCtorInfo_89_89 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 277 "simplify_proc.m"
        {
#line 277 "simplify_proc.m"
          mercury__map__foldl_4_p_0(check_hlds__simplify__simplify_proc__TypeInfo_82_82, check_hlds__simplify__simplify_proc__TypeCtorInfo_89_89, (MR_Word) &check_hlds__simplify__simplify_proc_scalar_common_1[2], (MR_Word) &check_hlds__simplify__simplify_proc_scalar_common_2[1], check_hlds__simplify__simplify_proc__VarNameRemap_37, ((MR_Box) (check_hlds__simplify__simplify_proc__VarSet1_35)), &check_hlds__simplify__simplify_proc__conv1_VarSet_38);
        }
#line 277 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__VarSet_38 = ((MR_Word) check_hlds__simplify__simplify_proc__conv1_VarSet_38);
#line 278 "simplify_proc.m"
        {
#line 278 "simplify_proc.m"
          check_hlds__simplify__simplify_proc__V_57_57 = mercury__map__init_0_f_0(check_hlds__simplify__simplify_proc__TypeInfo_82_82, check_hlds__simplify__simplify_proc__TypeCtorInfo_89_89);
        }
#line 278 "simplify_proc.m"
        {
#line 278 "simplify_proc.m"
          hlds__hlds_pred__proc_info_set_var_name_remap_3_p_0(check_hlds__simplify__simplify_proc__V_57_57, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_55_55, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_58_58);
        }
#line 276 "simplify_proc.m"
      }
#line 279 "simplify_proc.m"
    else
#line 280 "simplify_proc.m"
      {
#line 280 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__VarSet_38 = check_hlds__simplify__simplify_proc__VarSet0_29;
#line 280 "simplify_proc.m"
        check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_58_58 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_55_55;
#line 280 "simplify_proc.m"
      }
#line 282 "simplify_proc.m"
    {
#line 282 "simplify_proc.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(check_hlds__simplify__simplify_proc__VarSet_38, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_58_58, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_59_59);
    }
#line 283 "simplify_proc.m"
    {
#line 283 "simplify_proc.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(check_hlds__simplify__simplify_proc__VarTypes_36, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_59_59, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_60_60);
    }
#line 284 "simplify_proc.m"
    {
#line 284 "simplify_proc.m"
      hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(check_hlds__simplify__simplify_proc__RttiVarMaps_31, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_60_60, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_61_61);
    }
#line 286 "simplify_proc.m"
    {
#line 286 "simplify_proc.m"
      check_hlds__simplify__simplify_info__simplify_info_get_has_parallel_conj_2_p_0(check_hlds__simplify__simplify_proc__Info_28, &check_hlds__simplify__simplify_proc__HasParallelConj_39);
    }
#line 287 "simplify_proc.m"
    {
#line 287 "simplify_proc.m"
      hlds__hlds_pred__proc_info_set_has_parallel_conj_3_p_0(check_hlds__simplify__simplify_proc__HasParallelConj_39, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_61_61, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_62_62);
    }
#line 289 "simplify_proc.m"
    {
#line 289 "simplify_proc.m"
      check_hlds__simplify__simplify_info__simplify_info_get_has_user_event_2_p_0(check_hlds__simplify__simplify_proc__Info_28, &check_hlds__simplify__simplify_proc__HasUserEvent_40);
    }
#line 290 "simplify_proc.m"
    {
#line 290 "simplify_proc.m"
      hlds__hlds_pred__proc_info_set_has_user_event_3_p_0(check_hlds__simplify__simplify_proc__HasUserEvent_40, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_62_62, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_46);
    }
#line 292 "simplify_proc.m"
    {
#line 292 "simplify_proc.m"
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_proc__Info_28, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_44);
    }
#line 293 "simplify_proc.m"
    {
#line 293 "simplify_proc.m"
      check_hlds__simplify__simplify_info__simplify_info_get_error_specs_2_p_0(check_hlds__simplify__simplify_proc__Info_28, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_65_65);
    }
#line 294 "simplify_proc.m"
    {
#line 294 "simplify_proc.m"
      check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_66_66 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__simplify__simplify_proc__FormatSpecs_18, check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_65_65);
    }
#line 296 "simplify_proc.m"
    {
#line 296 "simplify_proc.m"
      check_hlds__simplify__simplify_proc__simplify_proc_maybe_warn_about_duplicates_5_p_0(*check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_44, check_hlds__simplify__simplify_proc__PredId_10, *check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_46, check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_66_66, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_67_67);
    }
#line 299 "simplify_proc.m"
    {
#line 299 "simplify_proc.m"
      hlds__hlds_pred__pred_info_get_status_2_p_0(check_hlds__simplify__simplify_proc__PredInfo0_16, &check_hlds__simplify__simplify_proc__Status_41);
    }
#line 300 "simplify_proc.m"
    {
#line 300 "simplify_proc.m"
      check_hlds__simplify__simplify_proc__IsDefinedHere_42 = hlds__status__pred_status_defined_in_this_module_1_f_0(check_hlds__simplify__simplify_proc__Status_41);
    }
#line 307 "simplify_proc.m"
#line 307 "simplify_proc.m"
    switch (check_hlds__simplify__simplify_proc__IsDefinedHere_42) {
#line 307 "simplify_proc.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 307 "simplify_proc.m"
      case (MR_Integer) 0:
#line 306 "simplify_proc.m"
        *check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 307 "simplify_proc.m"
        break;
#line 307 "simplify_proc.m"
      case (MR_Integer) 1:
#line 308 "simplify_proc.m"
        *check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_47 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_67_67;
#line 307 "simplify_proc.m"
        break;
#line 307 "simplify_proc.m"
    }
#line 203 "simplify_proc.m"
  }
#line 198 "simplify_proc.m"
}

#line 83 "simplify_proc.m"
MR_bool MR_CALL 
check_hlds__simplify__simplify_proc__simplify_may_introduce_calls_3_p_0(
#line 83 "simplify_proc.m"
  MR_String check_hlds__simplify__simplify_proc__ModuleName_4,
#line 83 "simplify_proc.m"
  MR_String check_hlds__simplify__simplify_proc__PredName_5,
#line 83 "simplify_proc.m"
  MR_Integer check_hlds__simplify__simplify_proc___Arity_6)
#line 83 "simplify_proc.m"
{
#line 749 "simplify_proc.m"
  {
#line 749 "simplify_proc.m"
    MR_bool check_hlds__simplify__simplify_proc__succeeded;

#line 749 "simplify_proc.m"
    {
#line 749 "simplify_proc.m"
      return check_hlds__simplify__simplify_proc__succeeded = check_hlds__simplify__simplify_proc__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_p_0(check_hlds__simplify__simplify_proc__ModuleName_4, check_hlds__simplify__simplify_proc__PredName_5);
    }
#line 749 "simplify_proc.m"
    return check_hlds__simplify__simplify_proc__succeeded;
#line 749 "simplify_proc.m"
  }
#line 83 "simplify_proc.m"
}

#line 72 "simplify_proc.m"
void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_goal_update_vars_in_proc_11_p_0(
#line 72 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__SimplifyTasks_12,
#line 72 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_0_29,
#line 72 "simplify_proc.m"
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_30,
#line 72 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__PredId_14,
#line 72 "simplify_proc.m"
  MR_Integer check_hlds__simplify__simplify_proc__ProcId_15,
#line 72 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_0_31,
#line 72 "simplify_proc.m"
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_32,
#line 72 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__InstMap0_17,
#line 72 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_0_33,
#line 72 "simplify_proc.m"
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_34,
#line 72 "simplify_proc.m"
  MR_Integer * check_hlds__simplify__simplify_proc__CostDelta_19)
#line 72 "simplify_proc.m"
{
#line 167 "simplify_proc.m"
  {
#line 167 "simplify_proc.m"
    MR_bool check_hlds__simplify__simplify_proc__succeeded;
#line 167 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__SimplifyInfo0_20;
#line 167 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__SimplifyInfo_25;
#line 167 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__VarSet_26;
#line 167 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__VarTypes_27;
#line 167 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__RttiVarMaps_28;
#line 167 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_37_37;
#line 167 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_38_38;

#line 168 "simplify_proc.m"
    {
#line 168 "simplify_proc.m"
      check_hlds__simplify__simplify_info__simplify_info_init_6_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_0_29, check_hlds__simplify__simplify_proc__PredId_14, check_hlds__simplify__simplify_proc__ProcId_15, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_0_31, check_hlds__simplify__simplify_proc__SimplifyTasks_12, &check_hlds__simplify__simplify_proc__SimplifyInfo0_20);
    }
#line 180 "simplify_proc.m"
    {
#line 180 "simplify_proc.m"
      check_hlds__simplify__simplify_proc__simplify_top_level_goal_6_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_0_33, check_hlds__simplify__simplify_proc__STATE_VARIABLE_Goal_34, (MR_Word) &check_hlds__simplify__simplify_proc_scalar_common_2[0], check_hlds__simplify__simplify_proc__InstMap0_17, check_hlds__simplify__simplify_proc__SimplifyInfo0_20, &check_hlds__simplify__simplify_proc__SimplifyInfo_25);
    }
#line 183 "simplify_proc.m"
    {
#line 183 "simplify_proc.m"
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_proc__SimplifyInfo_25, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_30);
    }
#line 185 "simplify_proc.m"
    {
#line 185 "simplify_proc.m"
      check_hlds__simplify__simplify_info__simplify_info_get_varset_2_p_0(check_hlds__simplify__simplify_proc__SimplifyInfo_25, &check_hlds__simplify__simplify_proc__VarSet_26);
    }
#line 186 "simplify_proc.m"
    {
#line 186 "simplify_proc.m"
      check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__simplify_proc__SimplifyInfo_25, &check_hlds__simplify__simplify_proc__VarTypes_27);
    }
#line 187 "simplify_proc.m"
    {
#line 187 "simplify_proc.m"
      check_hlds__simplify__simplify_info__simplify_info_get_rtti_varmaps_2_p_0(check_hlds__simplify__simplify_proc__SimplifyInfo_25, &check_hlds__simplify__simplify_proc__RttiVarMaps_28);
    }
#line 188 "simplify_proc.m"
    {
#line 188 "simplify_proc.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(check_hlds__simplify__simplify_proc__VarSet_26, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_0_31, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_37_37);
    }
#line 189 "simplify_proc.m"
    {
#line 189 "simplify_proc.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(check_hlds__simplify__simplify_proc__VarTypes_27, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_37_37, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_38_38);
    }
#line 190 "simplify_proc.m"
    {
#line 190 "simplify_proc.m"
      hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(check_hlds__simplify__simplify_proc__RttiVarMaps_28, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_38_38, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_32);
    }
#line 192 "simplify_proc.m"
    {
#line 192 "simplify_proc.m"
      check_hlds__simplify__simplify_info__simplify_info_get_cost_delta_2_p_0(check_hlds__simplify__simplify_proc__SimplifyInfo_25, check_hlds__simplify__simplify_proc__CostDelta_19);
#line 192 "simplify_proc.m"
      return;
    }
#line 167 "simplify_proc.m"
  }
#line 72 "simplify_proc.m"
}

#line 52 "simplify_proc.m"
void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_7_p_0(
#line 52 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__SimplifyTasks_8,
#line 52 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__PredId_9,
#line 52 "simplify_proc.m"
  MR_Integer check_hlds__simplify__simplify_proc__ProcId_10,
#line 52 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_0_15,
#line 52 "simplify_proc.m"
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_16,
#line 52 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_0_17,
#line 52 "simplify_proc.m"
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_18)
#line 52 "simplify_proc.m"
{
#line 158 "simplify_proc.m"
  {
#line 158 "simplify_proc.m"
    MR_bool check_hlds__simplify__simplify_proc__succeeded;
#line 163 "simplify_proc.m"
    MR_Word check_hlds__simplify__simplify_proc__V_14_14;

#line 160 "simplify_proc.m"
    {
#line 160 "simplify_proc.m"
      hlds__passes_aux__write_pred_progress_message_5_p_0((MR_String) "% Simplifying ", check_hlds__simplify__simplify_proc__PredId_9, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_0_15);
    }
#line 163 "simplify_proc.m"
    {
#line 163 "simplify_proc.m"
      check_hlds__simplify__simplify_proc__simplify_proc_return_msgs_8_p_0(check_hlds__simplify__simplify_proc__SimplifyTasks_8, check_hlds__simplify__simplify_proc__PredId_9, check_hlds__simplify__simplify_proc__ProcId_10, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_0_15, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_16, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_0_17, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ProcInfo_18, &check_hlds__simplify__simplify_proc__V_14_14);
    }
#line 158 "simplify_proc.m"
  }
#line 52 "simplify_proc.m"
}

#line 42 "simplify_proc.m"
void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_pred_procs_9_p_0(
#line 42 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__SimplifyTasks_1,
#line 42 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__PredId_2,
#line 42 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__HeadVar__3_3,
#line 42 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_0_4,
#line 42 "simplify_proc.m"
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_5,
#line 42 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_PredInfo_0_6,
#line 42 "simplify_proc.m"
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_PredInfo_7,
#line 42 "simplify_proc.m"
  MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_0_8,
#line 42 "simplify_proc.m"
  MR_Word * check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_9)
#line 42 "simplify_proc.m"
{
#line 117 "simplify_proc.m"
  while (MR_TRUE)
#line 117 "simplify_proc.m"
    {
#line 117 "simplify_proc.m"
      /* tailcall optimized into a loop */
#line 117 "simplify_proc.m"
      {
#line 117 "simplify_proc.m"
        MR_bool check_hlds__simplify__simplify_proc__succeeded;

#line 117 "simplify_proc.m"
        if ((check_hlds__simplify__simplify_proc__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 117 "simplify_proc.m"
          {
#line 117 "simplify_proc.m"
            *check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_9 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_0_8;
#line 117 "simplify_proc.m"
            *check_hlds__simplify__simplify_proc__STATE_VARIABLE_PredInfo_7 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_PredInfo_0_6;
#line 117 "simplify_proc.m"
            *check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_5 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_0_4;
#line 117 "simplify_proc.m"
          }
#line 117 "simplify_proc.m"
        else
#line 119 "simplify_proc.m"
          {
#line 119 "simplify_proc.m"
            MR_Word check_hlds__simplify__simplify_proc__TypeCtorInfo_35_65;
#line 119 "simplify_proc.m"
            MR_Integer check_hlds__simplify__simplify_proc__ProcId_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_proc__HeadVar__3_3, (MR_Integer) 0)));
#line 119 "simplify_proc.m"
            MR_Word check_hlds__simplify__simplify_proc__ProcIds_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_proc__HeadVar__3_3, (MR_Integer) 1)));
#line 119 "simplify_proc.m"
            MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_34_34;
#line 119 "simplify_proc.m"
            MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_PredInfo_35_35;
#line 119 "simplify_proc.m"
            MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_36_36;
#line 119 "simplify_proc.m"
            MR_Word check_hlds__simplify__simplify_proc__ProcTable0_52;
#line 119 "simplify_proc.m"
            MR_Word check_hlds__simplify__simplify_proc__ProcInfo0_53;
#line 119 "simplify_proc.m"
            MR_Word check_hlds__simplify__simplify_proc__ProcInfo_54;
#line 119 "simplify_proc.m"
            MR_Word check_hlds__simplify__simplify_proc__ProcSpecs_55;
#line 119 "simplify_proc.m"
            MR_Word check_hlds__simplify__simplify_proc__HasParallelConj_56;
#line 119 "simplify_proc.m"
            MR_Word check_hlds__simplify__simplify_proc__HasUserEvent_57;
#line 119 "simplify_proc.m"
            MR_Word check_hlds__simplify__simplify_proc__ProcTable_58;
#line 119 "simplify_proc.m"
            MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_29_59;
#line 119 "simplify_proc.m"
            MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_30_60;
#line 132 "simplify_proc.m"
            MR_Box check_hlds__simplify__simplify_proc__conv0_ProcInfo0_53;

#line 131 "simplify_proc.m"
            {
#line 131 "simplify_proc.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_PredInfo_0_6, &check_hlds__simplify__simplify_proc__ProcTable0_52);
            }
#line 5267 "check_hlds.simplify.simplify_proc.c"
            check_hlds__simplify__simplify_proc__TypeCtorInfo_35_65 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 132 "simplify_proc.m"
            {
#line 132 "simplify_proc.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(check_hlds__simplify__simplify_proc__TypeCtorInfo_35_65, check_hlds__simplify__simplify_proc__ProcTable0_52, check_hlds__simplify__simplify_proc__ProcId_23, &check_hlds__simplify__simplify_proc__conv0_ProcInfo0_53);
            }
#line 132 "simplify_proc.m"
            check_hlds__simplify__simplify_proc__ProcInfo0_53 = ((MR_Word) check_hlds__simplify__simplify_proc__conv0_ProcInfo0_53);
#line 133 "simplify_proc.m"
            {
#line 133 "simplify_proc.m"
              check_hlds__simplify__simplify_proc__simplify_proc_return_msgs_8_p_0(check_hlds__simplify__simplify_proc__SimplifyTasks_1, check_hlds__simplify__simplify_proc__PredId_2, check_hlds__simplify__simplify_proc__ProcId_23, check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_0_4, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_29_59, check_hlds__simplify__simplify_proc__ProcInfo0_53, &check_hlds__simplify__simplify_proc__ProcInfo_54, &check_hlds__simplify__simplify_proc__ProcSpecs_55);
            }
#line 140 "simplify_proc.m"
            {
#line 140 "simplify_proc.m"
              hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(check_hlds__simplify__simplify_proc__ProcInfo_54, &check_hlds__simplify__simplify_proc__HasParallelConj_56);
            }
#line 144 "simplify_proc.m"
#line 144 "simplify_proc.m"
            switch (check_hlds__simplify__simplify_proc__HasParallelConj_56) {
#line 144 "simplify_proc.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 144 "simplify_proc.m"
              case (MR_Integer) 1:
#line 145 "simplify_proc.m"
                check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_30_60 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_29_59;
#line 144 "simplify_proc.m"
                break;
#line 144 "simplify_proc.m"
              case (MR_Integer) 0:
#line 143 "simplify_proc.m"
                {
#line 143 "simplify_proc.m"
                  hlds__hlds_module__module_info_set_has_parallel_conj_2_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_29_59, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_30_60);
                }
#line 144 "simplify_proc.m"
                break;
#line 144 "simplify_proc.m"
            }
#line 147 "simplify_proc.m"
            {
#line 147 "simplify_proc.m"
              hlds__hlds_pred__proc_info_get_has_user_event_2_p_0(check_hlds__simplify__simplify_proc__ProcInfo_54, &check_hlds__simplify__simplify_proc__HasUserEvent_57);
            }
#line 151 "simplify_proc.m"
#line 151 "simplify_proc.m"
            switch (check_hlds__simplify__simplify_proc__HasUserEvent_57) {
#line 151 "simplify_proc.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 151 "simplify_proc.m"
              case (MR_Integer) 1:
#line 152 "simplify_proc.m"
                check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_34_34 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_30_60;
#line 151 "simplify_proc.m"
                break;
#line 151 "simplify_proc.m"
              case (MR_Integer) 0:
#line 150 "simplify_proc.m"
                {
#line 150 "simplify_proc.m"
                  hlds__hlds_module__module_info_set_has_user_event_2_p_0(check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_30_60, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_34_34);
                }
#line 151 "simplify_proc.m"
                break;
#line 151 "simplify_proc.m"
            }
#line 154 "simplify_proc.m"
            {
#line 154 "simplify_proc.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(check_hlds__simplify__simplify_proc__TypeCtorInfo_35_65, check_hlds__simplify__simplify_proc__ProcId_23, ((MR_Box) (check_hlds__simplify__simplify_proc__ProcInfo_54)), check_hlds__simplify__simplify_proc__ProcTable0_52, &check_hlds__simplify__simplify_proc__ProcTable_58);
            }
#line 155 "simplify_proc.m"
            {
#line 155 "simplify_proc.m"
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__simplify__simplify_proc__ProcTable_58, check_hlds__simplify__simplify_proc__STATE_VARIABLE_PredInfo_0_6, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_PredInfo_35_35);
            }
#line 156 "simplify_proc.m"
            {
#line 156 "simplify_proc.m"
              parse_tree__error_util__accumulate_error_specs_for_proc_3_p_0(check_hlds__simplify__simplify_proc__ProcSpecs_55, check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_0_8, &check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_36_36);
            }
#line 122 "simplify_proc.m"
            /* direct tailcall eliminated */
#line 122 "simplify_proc.m"
            {
#line 122 "simplify_proc.m"
              MR_Word check_hlds__simplify__simplify_proc__HeadVar__3__tmp_copy_3 = check_hlds__simplify__simplify_proc__ProcIds_24;
#line 122 "simplify_proc.m"
              MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_0__tmp_copy_4 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_34_34;
#line 122 "simplify_proc.m"
              MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_PredInfo_0__tmp_copy_6 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_PredInfo_35_35;
#line 122 "simplify_proc.m"
              MR_Word check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_0__tmp_copy_8 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_36_36;

#line 122 "simplify_proc.m"
              check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_0_8 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_Specs_0__tmp_copy_8;
#line 122 "simplify_proc.m"
              check_hlds__simplify__simplify_proc__STATE_VARIABLE_PredInfo_0_6 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_PredInfo_0__tmp_copy_6;
#line 122 "simplify_proc.m"
              check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_0_4 = check_hlds__simplify__simplify_proc__STATE_VARIABLE_ModuleInfo_0__tmp_copy_4;
#line 122 "simplify_proc.m"
              check_hlds__simplify__simplify_proc__HeadVar__3_3 = check_hlds__simplify__simplify_proc__HeadVar__3__tmp_copy_3;
#line 122 "simplify_proc.m"
            }
#line 122 "simplify_proc.m"
            continue;
#line 119 "simplify_proc.m"
          }
#line 117 "simplify_proc.m"
      }
#line 117 "simplify_proc.m"
      break;
#line 117 "simplify_proc.m"
    }
#line 42 "simplify_proc.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.simplify.simplify_proc. */
