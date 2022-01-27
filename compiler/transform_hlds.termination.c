/*
** Automatically generated from `termination.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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


/* :- module transform_hlds.termination. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__termination__init
ENDINIT
*/

#include "transform_hlds.termination.mih"


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
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_error_util.mih"
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
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
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
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.dependency_graph.mih"
#include "transform_hlds.post_term_analysis.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_pass1.mih"
#include "transform_hlds.term_pass2.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 146 "transform_hlds.termination.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__termination__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 149 "transform_hlds.termination.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__termination__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 568 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__decide_what_term_errors_to_report__568__1_1_p_0(
#line 568 "termination.m"
  MR_Word transform_hlds__termination__LambdaHeadVar__1_38);

#line 539 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__decide_what_term_errors_to_report__539__1_2_p_0(
#line 539 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_5,
#line 539 "termination.m"
  MR_Word transform_hlds__termination__LambdaHeadVar__1_36);

#line 525 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__decide_what_term_errors_to_report__525__1_2_p_0(
#line 525 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_5,
#line 525 "termination.m"
  MR_Word transform_hlds__termination__LambdaHeadVar__1_34);

#line 395 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__395__1_1_p_0(
#line 395 "termination.m"
  MR_Word transform_hlds__termination__LambdaHeadVar__1_57);

#line 361 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__361__1_2_p_0(
#line 361 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47,
#line 361 "termination.m"
  MR_Word transform_hlds__termination__LambdaHeadVar__1_51);

#line 308 "termination.m"
static MR_Word MR_CALL 
transform_hlds__termination__IntroducedFrom__func__check_scc_pragmas_are_consistent__308__1_1_f_0(
#line 308 "termination.m"
  MR_Word transform_hlds__termination__LambdaHeadVar__1_41);

#line 853 "termination.m"
static void MR_CALL 
transform_hlds__termination__change_procs_termination_info_5_p_0(
#line 853 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 853 "termination.m"
  MR_Word transform_hlds__termination__Override_2,
#line 853 "termination.m"
  MR_Word transform_hlds__termination__Termination_3,
#line 853 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4,
#line 853 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcTable_5);

#line 823 "termination.m"
static void MR_CALL 
transform_hlds__termination__change_procs_arg_size_info_5_p_0(
#line 823 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 823 "termination.m"
  MR_Word transform_hlds__termination__Override_2,
#line 823 "termination.m"
  MR_Word transform_hlds__termination__ArgSize_3,
#line 823 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4,
#line 823 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcTable_5);

#line 783 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_builtin_terminates_6_p_0(
#line 783 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 783 "termination.m"
  MR_Word transform_hlds__termination__PredId_2,
#line 783 "termination.m"
  MR_Word transform_hlds__termination__PredInfo_3,
#line 783 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_4,
#line 783 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0_5,
#line 783 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcTable_6);

#line 726 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_generated_terminates_4_p_0(
#line 726 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 726 "termination.m"
  MR_Word transform_hlds__termination__SpecialPredId_2,
#line 726 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0_3,
#line 726 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcTable_4);

#line 608 "termination.m"
static void MR_CALL 
transform_hlds__termination__term_preprocess_preds_3_p_0(
#line 608 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 608 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2,
#line 608 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_3);

#line 568 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__maybe_report_termination_errors_5_p_0_4(
#line 568 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 568 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 551 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__maybe_report_termination_errors_5_p_0_3(
#line 551 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 551 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 539 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__maybe_report_termination_errors_5_p_0_2(
#line 539 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 539 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 525 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__maybe_report_termination_errors_5_p_0_1(
#line 525 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 525 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 494 "termination.m"
static void MR_CALL 
transform_hlds__termination__maybe_report_termination_errors_5_p_0(
#line 494 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_6,
#line 494 "termination.m"
  MR_Word transform_hlds__termination__SCC_7,
#line 494 "termination.m"
  MR_Word transform_hlds__termination__Errors_8,
#line 494 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_0_12,
#line 494 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_Specs_13);

#line 473 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_termination_infos_4_p_0(
#line 473 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 473 "termination.m"
  MR_Word transform_hlds__termination__TerminationInfo_2,
#line 473 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3,
#line 473 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4);

#line 453 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_infinite_arg_size_infos_4_p_0(
#line 453 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 453 "termination.m"
  MR_Word transform_hlds__termination__ArgSizeInfo_2,
#line 453 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3,
#line 453 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4);

#line 432 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_finite_arg_size_infos_4_p_0(
#line 432 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 432 "termination.m"
  MR_Word transform_hlds__termination__OutputSupplierMap_2,
#line 432 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3,
#line 432 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4);

#line 395 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0_3(
#line 395 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 395 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 386 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0_2(
#line 386 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 386 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 361 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0_1(
#line 361 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 361 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 356 "termination.m"
static void MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0(
#line 356 "termination.m"
  MR_Word transform_hlds__termination__PassInfo_7,
#line 356 "termination.m"
  MR_Word transform_hlds__termination__SCC_8,
#line 356 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47,
#line 356 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_48,
#line 356 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_0_49,
#line 356 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_Specs_50);

#line 325 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__check_procs_known_term_3_p_0(
#line 325 "termination.m"
  MR_Word transform_hlds__termination__Status_1,
#line 325 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_2,
#line 325 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_3);

#line 308 "termination.m"
static MR_Box MR_CALL 
transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0_2(
#line 308 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 308 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 276 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0_1(
#line 276 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 276 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 271 "termination.m"
static void MR_CALL 
transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0(
#line 271 "termination.m"
  MR_Word transform_hlds__termination__SCC_6,
#line 271 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26,
#line 271 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27,
#line 271 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_0_28,
#line 271 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_Specs_29);

#line 170 "termination.m"
static void MR_CALL 
transform_hlds__termination__check_foreign_code_attributes_of_proc_7_p_0(
#line 170 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_8,
#line 170 "termination.m"
  MR_Word transform_hlds__termination__PPId_9,
#line 170 "termination.m"
  MR_Word transform_hlds__termination__Attributes_10,
#line 170 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25,
#line 170 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcInfo_26,
#line 170 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_0_27,
#line 170 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_Specs_28);

#line 142 "termination.m"
static void MR_CALL 
transform_hlds__termination__check_foreign_code_attributes_in_scc_5_p_0(
#line 142 "termination.m"
  MR_Word transform_hlds__termination__PPIds_6,
#line 142 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26,
#line 142 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27,
#line 142 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_0_28,
#line 142 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_Specs_29);

#line 111 "termination.m"
static void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_3_p_0_3(
#line 111 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 111 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1,
#line 111 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_2,
#line 111 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_3,
#line 111 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_4,
#line 111 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_5);

#line 269 "termination.m"
static void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_3_p_0_2(
#line 269 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 269 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1,
#line 269 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_2,
#line 269 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_3,
#line 269 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_4,
#line 269 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_5);

#line 139 "termination.m"
static void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_3_p_0_1(
#line 139 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 139 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1,
#line 139 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_2,
#line 139 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_3,
#line 139 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_4,
#line 139 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_5);


static /* final */ const MR_Box transform_hlds__termination_scalar_common_1[37][2];

static /* final */ const MR_Box transform_hlds__termination_scalar_common_2[6][3];

static /* final */ const MR_Box transform_hlds__termination_scalar_common_3[1][8];

static /* final */ const MR_Box transform_hlds__termination_scalar_common_4[1][9];

static /* final */ const MR_Box transform_hlds__termination_scalar_common_5[2][1];

static /* final */ const MR_Box transform_hlds__termination_scalar_common_6[2][5];

static /* final */ const MR_Box transform_hlds__termination_scalar_common_7[1][4];




static /* final */ const MR_Box transform_hlds__termination_scalar_common_1[37][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "foreign code attribute set."))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "terminates"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but also has the"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
    ((MR_Box) ((MR_String) "does_not_terminate"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[11])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "has a"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[13])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "does_not_terminate"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[5])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[17])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[18])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
    ((MR_Box) ((MR_String) "terminates"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[19])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[21])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "termination pragmas are inconsistent."))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "are mutually recursive but some of their"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[24])))
  },
  /* row 27 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0))
  },
  /* row 28 */
  {
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_generic_arg_size_info_1)),
    ((MR_Box) (&transform_hlds__termination_scalar_common_1[27]))
  },
  /* row 29 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 30 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[29])))
  },
  /* row 31 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[30])))
  },
  /* row 32 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 33 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[32])))
  },
  /* row 34 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&transform_hlds__termination_scalar_common_1[28]))
  },
  /* row 35 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&transform_hlds__termination_scalar_common_2[0]))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning:"))
  },
};

static /* final */ const MR_Box transform_hlds__termination_scalar_common_2[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_generic_termination_info_2)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&transform_hlds__termination_scalar_common_1[27]))
  },
  /* row 1 */
  {
    ((MR_Box) (&transform_hlds__termination_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__termination__analyse_termination_in_module_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__termination_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__termination__analyse_termination_in_module_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&transform_hlds__termination_scalar_common_6[1])),
    ((MR_Box) (transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&transform_hlds__termination_scalar_common_7[0])),
    ((MR_Box) (transform_hlds__termination__analyse_termination_in_scc_6_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&transform_hlds__termination_scalar_common_7[0])),
    ((MR_Box) (transform_hlds__termination__maybe_report_termination_errors_5_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__termination_scalar_common_3[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__termination__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__termination__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&transform_hlds__termination__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box transform_hlds__termination_scalar_common_4[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__term_util__transform_hlds__term_util__type_ctor_info_pass_info_0)),
    ((MR_Box) (&transform_hlds__termination__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__termination__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&transform_hlds__termination__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box transform_hlds__termination_scalar_common_5[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&transform_hlds__termination_scalar_common_5[0]))
  },
};

static /* final */ const MR_Box transform_hlds__termination_scalar_common_6[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
};

static /* final */ const MR_Box transform_hlds__termination_scalar_common_7[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 825 "transform_hlds.termination.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__termination__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 833 "transform_hlds.termination.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__termination__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 568 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__decide_what_term_errors_to_report__568__1_1_p_0(
#line 568 "termination.m"
  MR_Word transform_hlds__termination__LambdaHeadVar__1_38)
#line 568 "termination.m"
{
#line 568 "termination.m"
  {
#line 568 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 568 "termination.m"
    MR_Word transform_hlds__termination__ErrorKind_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__LambdaHeadVar__1_38, (MR_Integer) 1)));
#line 568 "termination.m"
    MR_Word transform_hlds__termination__V_39_39;
#line 569 "termination.m"
    MR_Word transform_hlds__termination__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__LambdaHeadVar__1_38, (MR_Integer) 0)));

#line 570 "termination.m"
    {
#line 570 "termination.m"
      transform_hlds__termination__V_39_39 = transform_hlds__term_errors__term_error_kind_is_direct_error_1_f_0(transform_hlds__termination__ErrorKind_28);
    }
#line 570 "termination.m"
    transform_hlds__termination__succeeded = (transform_hlds__termination__V_39_39 == (MR_Integer) 1);
#line 568 "termination.m"
    return transform_hlds__termination__succeeded;
#line 568 "termination.m"
  }
#line 568 "termination.m"
}

#line 539 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__decide_what_term_errors_to_report__539__1_2_p_0(
#line 539 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_5,
#line 539 "termination.m"
  MR_Word transform_hlds__termination__LambdaHeadVar__1_36)
#line 539 "termination.m"
{
#line 539 "termination.m"
  {
#line 539 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 539 "termination.m"
    MR_Word transform_hlds__termination__PredInfo_42;
#line 540 "termination.m"
    MR_Word transform_hlds__termination__V_21_21;

#line 540 "termination.m"
    {
#line 540 "termination.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__termination__ModuleInfo_5, transform_hlds__termination__LambdaHeadVar__1_36, &transform_hlds__termination__PredInfo_42, &transform_hlds__termination__V_21_21);
    }
#line 541 "termination.m"
    {
#line 541 "termination.m"
      transform_hlds__termination__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(transform_hlds__termination__PredInfo_42);
    }
#line 541 "termination.m"
    transform_hlds__termination__succeeded = !(transform_hlds__termination__succeeded);
#line 539 "termination.m"
    return transform_hlds__termination__succeeded;
#line 539 "termination.m"
  }
#line 539 "termination.m"
}

#line 525 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__decide_what_term_errors_to_report__525__1_2_p_0(
#line 525 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_5,
#line 525 "termination.m"
  MR_Word transform_hlds__termination__LambdaHeadVar__1_34)
#line 525 "termination.m"
{
#line 525 "termination.m"
  {
#line 525 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 525 "termination.m"
    MR_Word transform_hlds__termination__PredInfo_14;
#line 525 "termination.m"
    MR_Word transform_hlds__termination__Markers_16;
#line 525 "termination.m"
    MR_Word transform_hlds__termination__V_35_35;
#line 527 "termination.m"
    MR_Word transform_hlds__termination__V_15_15;

#line 527 "termination.m"
    {
#line 527 "termination.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__termination__ModuleInfo_5, transform_hlds__termination__LambdaHeadVar__1_34, &transform_hlds__termination__PredInfo_14, &transform_hlds__termination__V_15_15);
    }
#line 528 "termination.m"
    {
#line 528 "termination.m"
      transform_hlds__termination__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(transform_hlds__termination__PredInfo_14);
    }
#line 528 "termination.m"
    transform_hlds__termination__succeeded = !(transform_hlds__termination__succeeded);
#line 525 "termination.m"
    if (transform_hlds__termination__succeeded)
#line 525 "termination.m"
      {
#line 529 "termination.m"
        {
#line 529 "termination.m"
          hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__termination__PredInfo_14, &transform_hlds__termination__Markers_16);
        }
#line 530 "termination.m"
        transform_hlds__termination__V_35_35 = (MR_Integer) 19;
#line 530 "termination.m"
        {
#line 530 "termination.m"
          transform_hlds__termination__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__termination__Markers_16, transform_hlds__termination__V_35_35);
        }
#line 525 "termination.m"
      }
#line 525 "termination.m"
    return transform_hlds__termination__succeeded;
#line 525 "termination.m"
  }
#line 525 "termination.m"
}

#line 395 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__395__1_1_p_0(
#line 395 "termination.m"
  MR_Word transform_hlds__termination__LambdaHeadVar__1_57)
#line 395 "termination.m"
{
#line 395 "termination.m"
  {
#line 395 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 395 "termination.m"
    MR_Word transform_hlds__termination__ErrorKind_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__LambdaHeadVar__1_57, (MR_Integer) 1)));
#line 395 "termination.m"
    MR_Word transform_hlds__termination__V_58_58;
#line 396 "termination.m"
    MR_Word transform_hlds__termination___Context_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__LambdaHeadVar__1_57, (MR_Integer) 0)));

#line 397 "termination.m"
    {
#line 397 "termination.m"
      transform_hlds__termination__V_58_58 = transform_hlds__term_errors__term_error_kind_is_fatal_error_1_f_0(transform_hlds__termination__ErrorKind_33);
    }
#line 397 "termination.m"
    transform_hlds__termination__succeeded = (transform_hlds__termination__V_58_58 == (MR_Integer) 1);
#line 395 "termination.m"
    return transform_hlds__termination__succeeded;
#line 395 "termination.m"
  }
#line 395 "termination.m"
}

#line 361 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__361__1_2_p_0(
#line 361 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47,
#line 361 "termination.m"
  MR_Word transform_hlds__termination__LambdaHeadVar__1_51)
#line 361 "termination.m"
{
#line 361 "termination.m"
  {
#line 361 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 361 "termination.m"
    MR_Word transform_hlds__termination__ProcInfo_14;
#line 361 "termination.m"
    MR_Word transform_hlds__termination__V_67_67;
#line 362 "termination.m"
    MR_Word transform_hlds__termination__V_13_13;
#line 363 "termination.m"
    MR_Word transform_hlds__termination__V_72_72;

#line 362 "termination.m"
    {
#line 362 "termination.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47, transform_hlds__termination__LambdaHeadVar__1_51, &transform_hlds__termination__V_13_13, &transform_hlds__termination__ProcInfo_14);
    }
#line 363 "termination.m"
    {
#line 363 "termination.m"
      hlds__hlds_pred__proc_info_get_maybe_arg_size_info_2_p_0(transform_hlds__termination__ProcInfo_14, &transform_hlds__termination__V_67_67);
    }
#line 363 "termination.m"
    transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__V_67_67)) == (MR_mktag((MR_Integer) 1)));
#line 363 "termination.m"
    if (transform_hlds__termination__succeeded)
#line 363 "termination.m"
      transform_hlds__termination__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__V_67_67, (MR_Integer) 0)));
#line 361 "termination.m"
    return transform_hlds__termination__succeeded;
#line 361 "termination.m"
  }
#line 361 "termination.m"
}

#line 308 "termination.m"
static MR_Word MR_CALL 
transform_hlds__termination__IntroducedFrom__func__check_scc_pragmas_are_consistent__308__1_1_f_0(
#line 308 "termination.m"
  MR_Word transform_hlds__termination__LambdaHeadVar__1_41)
#line 308 "termination.m"
{
#line 308 "termination.m"
  {
#line 308 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 308 "termination.m"
    MR_Word transform_hlds__termination__LambdaHeadVar__2_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__LambdaHeadVar__1_41, (MR_Integer) 0)));
#line 308 "termination.m"
    MR_Integer transform_hlds__termination__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__LambdaHeadVar__1_41, (MR_Integer) 1)));

#line 308 "termination.m"
    return transform_hlds__termination__LambdaHeadVar__2_42;
#line 308 "termination.m"
  }
#line 308 "termination.m"
}

#line 853 "termination.m"
static void MR_CALL 
transform_hlds__termination__change_procs_termination_info_5_p_0(
#line 853 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 853 "termination.m"
  MR_Word transform_hlds__termination__Override_2,
#line 853 "termination.m"
  MR_Word transform_hlds__termination__Termination_3,
#line 853 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4,
#line 853 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcTable_5)
#line 853 "termination.m"
{
#line 856 "termination.m"
  while (MR_TRUE)
#line 856 "termination.m"
    {
#line 856 "termination.m"
      /* tailcall optimized into a loop */
#line 856 "termination.m"
      {
#line 856 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 856 "termination.m"
        if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 856 "termination.m"
          *transform_hlds__termination__STATE_VARIABLE_ProcTable_5 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4;
#line 856 "termination.m"
        else
#line 858 "termination.m"
          {
#line 858 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_25_25 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 858 "termination.m"
            MR_Integer transform_hlds__termination__ProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));
#line 858 "termination.m"
            MR_Word transform_hlds__termination__ProcIds_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
#line 858 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo0_16;
#line 858 "termination.m"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22;
#line 859 "termination.m"
            MR_Box transform_hlds__termination__conv0_ProcInfo0_16;

#line 859 "termination.m"
            {
#line 859 "termination.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__termination__TypeCtorInfo_25_25, transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4, transform_hlds__termination__ProcId_11, &transform_hlds__termination__conv0_ProcInfo0_16);
            }
#line 859 "termination.m"
            transform_hlds__termination__ProcInfo0_16 = ((MR_Word) transform_hlds__termination__conv0_ProcInfo0_16);
#line 862 "termination.m"
            transform_hlds__termination__succeeded = (transform_hlds__termination__Override_2 == (MR_Integer) 1);
#line 863 "termination.m"
            if (!(transform_hlds__termination__succeeded))
#line 864 "termination.m"
              {
#line 864 "termination.m"
                MR_Word transform_hlds__termination__V_26_26;

#line 864 "termination.m"
                {
#line 864 "termination.m"
                  hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__termination__ProcInfo0_16, &transform_hlds__termination__V_26_26);
                }
#line 864 "termination.m"
                {
#line 864 "termination.m"
                  transform_hlds__termination__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[35], ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (transform_hlds__termination__V_26_26)));
                }
#line 864 "termination.m"
              }
#line 860 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 869 "termination.m"
              {
#line 869 "termination.m"
                MR_Word transform_hlds__termination__ProcInfo_17;
#line 869 "termination.m"
                MR_Word transform_hlds__termination__V_21_21;

#line 868 "termination.m"
                {
#line 868 "termination.m"
                  transform_hlds__termination__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 868 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__V_21_21, 0) = ((MR_Box) (transform_hlds__termination__Termination_3));
#line 868 "termination.m"
                }
#line 868 "termination.m"
                {
#line 868 "termination.m"
                  hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(transform_hlds__termination__V_21_21, transform_hlds__termination__ProcInfo0_16, &transform_hlds__termination__ProcInfo_17);
                }
#line 870 "termination.m"
                {
#line 870 "termination.m"
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__termination__TypeCtorInfo_25_25, transform_hlds__termination__ProcId_11, ((MR_Box) (transform_hlds__termination__ProcInfo_17)), transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4, &transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22);
                }
#line 869 "termination.m"
              }
#line 860 "termination.m"
            else
#line 860 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4;
#line 874 "termination.m"
            /* direct tailcall eliminated */
#line 874 "termination.m"
            {
#line 874 "termination.m"
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__ProcIds_12;
#line 874 "termination.m"
              MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_4 = transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22;

#line 874 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_4;
#line 874 "termination.m"
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
#line 874 "termination.m"
            }
#line 874 "termination.m"
            continue;
#line 858 "termination.m"
          }
#line 856 "termination.m"
      }
#line 856 "termination.m"
      break;
#line 856 "termination.m"
    }
#line 853 "termination.m"
}

#line 823 "termination.m"
static void MR_CALL 
transform_hlds__termination__change_procs_arg_size_info_5_p_0(
#line 823 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 823 "termination.m"
  MR_Word transform_hlds__termination__Override_2,
#line 823 "termination.m"
  MR_Word transform_hlds__termination__ArgSize_3,
#line 823 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4,
#line 823 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcTable_5)
#line 823 "termination.m"
{
#line 826 "termination.m"
  while (MR_TRUE)
#line 826 "termination.m"
    {
#line 826 "termination.m"
      /* tailcall optimized into a loop */
#line 826 "termination.m"
      {
#line 826 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 826 "termination.m"
        if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 826 "termination.m"
          *transform_hlds__termination__STATE_VARIABLE_ProcTable_5 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4;
#line 826 "termination.m"
        else
#line 828 "termination.m"
          {
#line 828 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_25_25 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 828 "termination.m"
            MR_Integer transform_hlds__termination__ProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));
#line 828 "termination.m"
            MR_Word transform_hlds__termination__ProcIds_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
#line 828 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo0_16;
#line 828 "termination.m"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22;
#line 829 "termination.m"
            MR_Box transform_hlds__termination__conv0_ProcInfo0_16;

#line 829 "termination.m"
            {
#line 829 "termination.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__termination__TypeCtorInfo_25_25, transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4, transform_hlds__termination__ProcId_11, &transform_hlds__termination__conv0_ProcInfo0_16);
            }
#line 829 "termination.m"
            transform_hlds__termination__ProcInfo0_16 = ((MR_Word) transform_hlds__termination__conv0_ProcInfo0_16);
#line 831 "termination.m"
            transform_hlds__termination__succeeded = (transform_hlds__termination__Override_2 == (MR_Integer) 1);
#line 832 "termination.m"
            if (!(transform_hlds__termination__succeeded))
#line 832 "termination.m"
              {
#line 832 "termination.m"
                MR_Word transform_hlds__termination__V_26_26;

#line 832 "termination.m"
                {
#line 832 "termination.m"
                  hlds__hlds_pred__proc_info_get_maybe_arg_size_info_2_p_0(transform_hlds__termination__ProcInfo0_16, &transform_hlds__termination__V_26_26);
                }
#line 832 "termination.m"
                {
#line 832 "termination.m"
                  transform_hlds__termination__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[34], ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (transform_hlds__termination__V_26_26)));
                }
#line 832 "termination.m"
              }
#line 830 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 835 "termination.m"
              {
#line 835 "termination.m"
                MR_Word transform_hlds__termination__ProcInfo_17;
#line 835 "termination.m"
                MR_Word transform_hlds__termination__V_21_21;

#line 835 "termination.m"
                {
#line 835 "termination.m"
                  transform_hlds__termination__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 835 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__V_21_21, 0) = ((MR_Box) (transform_hlds__termination__ArgSize_3));
#line 835 "termination.m"
                }
#line 835 "termination.m"
                {
#line 835 "termination.m"
                  hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_p_0(transform_hlds__termination__V_21_21, transform_hlds__termination__ProcInfo0_16, &transform_hlds__termination__ProcInfo_17);
                }
#line 836 "termination.m"
                {
#line 836 "termination.m"
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__termination__TypeCtorInfo_25_25, transform_hlds__termination__ProcId_11, ((MR_Box) (transform_hlds__termination__ProcInfo_17)), transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4, &transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22);
                }
#line 835 "termination.m"
              }
#line 830 "termination.m"
            else
#line 830 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4;
#line 840 "termination.m"
            /* direct tailcall eliminated */
#line 840 "termination.m"
            {
#line 840 "termination.m"
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__ProcIds_12;
#line 840 "termination.m"
              MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_4 = transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22;

#line 840 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_4;
#line 840 "termination.m"
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
#line 840 "termination.m"
            }
#line 840 "termination.m"
            continue;
#line 828 "termination.m"
          }
#line 826 "termination.m"
      }
#line 826 "termination.m"
      break;
#line 826 "termination.m"
    }
#line 823 "termination.m"
}

#line 783 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_builtin_terminates_6_p_0(
#line 783 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 783 "termination.m"
  MR_Word transform_hlds__termination__PredId_2,
#line 783 "termination.m"
  MR_Word transform_hlds__termination__PredInfo_3,
#line 783 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_4,
#line 783 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0_5,
#line 783 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcTable_6)
#line 783 "termination.m"
{
#line 786 "termination.m"
  while (MR_TRUE)
#line 786 "termination.m"
    {
#line 786 "termination.m"
      /* tailcall optimized into a loop */
#line 786 "termination.m"
      {
#line 786 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 786 "termination.m"
        if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 786 "termination.m"
          *transform_hlds__termination__STATE_VARIABLE_ProcTable_6 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0_5;
#line 786 "termination.m"
        else
#line 788 "termination.m"
          {
#line 788 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_42_42 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 788 "termination.m"
            MR_Integer transform_hlds__termination__ProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));
#line 788 "termination.m"
            MR_Word transform_hlds__termination__ProcIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
#line 788 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo0_19;
#line 788 "termination.m"
            MR_Word transform_hlds__termination__ArgSizeInfo_22;
#line 788 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo1_26;
#line 788 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo_27;
#line 788 "termination.m"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_39_39;
#line 789 "termination.m"
            MR_Box transform_hlds__termination__conv0_ProcInfo0_19;

#line 789 "termination.m"
            {
#line 789 "termination.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__termination__TypeCtorInfo_42_42, transform_hlds__termination__STATE_VARIABLE_ProcTable_0_5, transform_hlds__termination__ProcId_13, &transform_hlds__termination__conv0_ProcInfo0_19);
            }
#line 789 "termination.m"
            transform_hlds__termination__ProcInfo0_19 = ((MR_Word) transform_hlds__termination__conv0_ProcInfo0_19);
#line 790 "termination.m"
            {
#line 790 "termination.m"
              transform_hlds__termination__succeeded = transform_hlds__term_util__all_args_input_or_zero_size_3_p_0(transform_hlds__termination__ModuleInfo_4, transform_hlds__termination__PredInfo_3, transform_hlds__termination__ProcInfo0_19);
            }
#line 790 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 794 "termination.m"
              {
#line 794 "termination.m"
                MR_Word transform_hlds__termination__HeadVars_20;
#line 794 "termination.m"
                MR_Word transform_hlds__termination__UsedArgs_21;
#line 794 "termination.m"
                MR_Word transform_hlds__termination__V_31_31;

#line 794 "termination.m"
                {
#line 794 "termination.m"
                  hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__termination__ProcInfo0_19, &transform_hlds__termination__HeadVars_20);
                }
#line 795 "termination.m"
                {
#line 795 "termination.m"
                  transform_hlds__term_util__make_bool_list_3_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[3], transform_hlds__termination__HeadVars_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__termination__UsedArgs_21);
                }
#line 796 "termination.m"
                {
#line 796 "termination.m"
                  transform_hlds__termination__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 796 "termination.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__termination__V_31_31, 0) = ((MR_Box) ((MR_Integer) 0));
#line 796 "termination.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__termination__V_31_31, 1) = ((MR_Box) (transform_hlds__termination__UsedArgs_21));
#line 796 "termination.m"
                }
#line 796 "termination.m"
                {
#line 796 "termination.m"
                  transform_hlds__termination__ArgSizeInfo_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 796 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__ArgSizeInfo_22, 0) = ((MR_Box) (transform_hlds__termination__V_31_31));
#line 796 "termination.m"
                }
#line 794 "termination.m"
              }
#line 790 "termination.m"
            else
#line 798 "termination.m"
              {
#line 798 "termination.m"
                MR_Word transform_hlds__termination__Context_23;
#line 798 "termination.m"
                MR_Word transform_hlds__termination__Error_24;
#line 798 "termination.m"
                MR_Word transform_hlds__termination__ArgSizeError_25;
#line 798 "termination.m"
                MR_Word transform_hlds__termination__V_33_33;
#line 798 "termination.m"
                MR_Word transform_hlds__termination__V_34_34;

#line 798 "termination.m"
                {
#line 798 "termination.m"
                  hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__termination__PredInfo_3, &transform_hlds__termination__Context_23);
                }
#line 799 "termination.m"
                {
#line 799 "termination.m"
                  transform_hlds__termination__Error_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 799 "termination.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__termination__Error_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 799 "termination.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__termination__Error_24, 1) = ((MR_Box) (transform_hlds__termination__PredId_2));
#line 799 "termination.m"
                }
#line 800 "termination.m"
                {
#line 800 "termination.m"
                  transform_hlds__termination__ArgSizeError_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 800 "termination.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeError_25, 0) = ((MR_Box) (transform_hlds__termination__Context_23));
#line 800 "termination.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeError_25, 1) = ((MR_Box) (transform_hlds__termination__Error_24));
#line 800 "termination.m"
                }
#line 801 "termination.m"
                {
#line 801 "termination.m"
                  transform_hlds__termination__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 801 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__V_34_34, 0) = ((MR_Box) (transform_hlds__termination__ArgSizeError_25));
#line 801 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 801 "termination.m"
                }
#line 801 "termination.m"
                {
#line 801 "termination.m"
                  transform_hlds__termination__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 801 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__V_33_33, 0) = ((MR_Box) (transform_hlds__termination__V_34_34));
#line 801 "termination.m"
                }
#line 801 "termination.m"
                {
#line 801 "termination.m"
                  transform_hlds__termination__ArgSizeInfo_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 801 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__ArgSizeInfo_22, 0) = ((MR_Box) (transform_hlds__termination__V_33_33));
#line 801 "termination.m"
                }
#line 798 "termination.m"
              }
#line 804 "termination.m"
            {
#line 804 "termination.m"
              hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_p_0(transform_hlds__termination__ArgSizeInfo_22, transform_hlds__termination__ProcInfo0_19, &transform_hlds__termination__ProcInfo1_26);
            }
#line 805 "termination.m"
            mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 805 "termination.m"
            {
#line 805 "termination.m"
              hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_5[1]), transform_hlds__termination__ProcInfo1_26, &transform_hlds__termination__ProcInfo_27);
            }
#line 807 "termination.m"
            {
#line 807 "termination.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__termination__TypeCtorInfo_42_42, transform_hlds__termination__ProcId_13, ((MR_Box) (transform_hlds__termination__ProcInfo_27)), transform_hlds__termination__STATE_VARIABLE_ProcTable_0_5, &transform_hlds__termination__STATE_VARIABLE_ProcTable_39_39);
            }
#line 808 "termination.m"
            /* direct tailcall eliminated */
#line 808 "termination.m"
            {
#line 808 "termination.m"
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__ProcIds_14;
#line 808 "termination.m"
              MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_5 = transform_hlds__termination__STATE_VARIABLE_ProcTable_39_39;

#line 808 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ProcTable_0_5 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_5;
#line 808 "termination.m"
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
#line 808 "termination.m"
            }
#line 808 "termination.m"
            continue;
#line 788 "termination.m"
          }
#line 786 "termination.m"
      }
#line 786 "termination.m"
      break;
#line 786 "termination.m"
    }
#line 783 "termination.m"
}

#line 726 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_generated_terminates_4_p_0(
#line 726 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 726 "termination.m"
  MR_Word transform_hlds__termination__SpecialPredId_2,
#line 726 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0_3,
#line 726 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcTable_4)
#line 726 "termination.m"
{
#line 729 "termination.m"
  while (MR_TRUE)
#line 729 "termination.m"
    {
#line 729 "termination.m"
      /* tailcall optimized into a loop */
#line 729 "termination.m"
      {
#line 729 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 729 "termination.m"
        if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 729 "termination.m"
          *transform_hlds__termination__STATE_VARIABLE_ProcTable_4 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0_3;
#line 729 "termination.m"
        else
#line 730 "termination.m"
          {
#line 730 "termination.m"
            MR_Integer transform_hlds__termination__ProcId_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));
#line 730 "termination.m"
            MR_Word transform_hlds__termination__ProcIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
#line 730 "termination.m"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_23_23;

#line 744 "termination.m"
#line 744 "termination.m"
            switch (transform_hlds__termination__SpecialPredId_2) {
#line 744 "termination.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 744 "termination.m"
              case (MR_Integer) 2:
#line 744 "termination.m"
              case (MR_Integer) 1:
#line 744 "termination.m"
              case (MR_Integer) 0:
#line 735 "termination.m"
                {
#line 735 "termination.m"
                  MR_Word transform_hlds__termination__TypeCtorInfo_26_26 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 735 "termination.m"
                  MR_Word transform_hlds__termination__ProcInfo0_13;
#line 735 "termination.m"
                  MR_Word transform_hlds__termination__HeadVars_14;
#line 735 "termination.m"
                  MR_Word transform_hlds__termination__ArgSize_15;
#line 735 "termination.m"
                  MR_Word transform_hlds__termination__Termination_16;
#line 735 "termination.m"
                  MR_Word transform_hlds__termination__ProcInfo1_17;
#line 735 "termination.m"
                  MR_Word transform_hlds__termination__ProcInfo_18;
#line 735 "termination.m"
                  MR_Word transform_hlds__termination__V_21_21;
#line 735 "termination.m"
                  MR_Word transform_hlds__termination__V_22_22;
#line 736 "termination.m"
                  MR_Box transform_hlds__termination__conv0_ProcInfo0_13;

#line 736 "termination.m"
                  {
#line 736 "termination.m"
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__termination__TypeCtorInfo_26_26, transform_hlds__termination__STATE_VARIABLE_ProcTable_0_3, transform_hlds__termination__ProcId_9, &transform_hlds__termination__conv0_ProcInfo0_13);
                  }
#line 736 "termination.m"
                  transform_hlds__termination__ProcInfo0_13 = ((MR_Word) transform_hlds__termination__conv0_ProcInfo0_13);
#line 737 "termination.m"
                  {
#line 737 "termination.m"
                    hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__termination__ProcInfo0_13, &transform_hlds__termination__HeadVars_14);
                  }
#line 761 "termination.m"
#line 761 "termination.m"
                  switch (transform_hlds__termination__SpecialPredId_2) {
#line 761 "termination.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 761 "termination.m"
                    case (MR_Integer) 2:
#line 761 "termination.m"
                      {
#line 761 "termination.m"
                        MR_Word transform_hlds__termination__OutList_31;

#line 762 "termination.m"
                        {
#line 762 "termination.m"
                          transform_hlds__term_util__make_bool_list_3_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[3], transform_hlds__termination__HeadVars_14, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[31]), &transform_hlds__termination__OutList_31);
                        }
#line 763 "termination.m"
                        {
#line 763 "termination.m"
                          transform_hlds__termination__ArgSize_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 763 "termination.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSize_15, 0) = ((MR_Box) ((MR_Integer) 0));
#line 763 "termination.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSize_15, 1) = ((MR_Box) (transform_hlds__termination__OutList_31));
#line 763 "termination.m"
                        }
#line 764 "termination.m"
                        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 764 "termination.m"
                        transform_hlds__termination__Termination_16 = (MR_Word) &transform_hlds__termination_scalar_common_5[0];
#line 761 "termination.m"
                      }
#line 761 "termination.m"
                      break;
#line 761 "termination.m"
                    case (MR_Integer) 1:
#line 771 "termination.m"
                      {
#line 771 "termination.m"
                        MR_Word transform_hlds__termination__OutList_59;

#line 772 "termination.m"
                        {
#line 772 "termination.m"
                          transform_hlds__term_util__make_bool_list_3_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[3], transform_hlds__termination__HeadVars_14, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[30]), &transform_hlds__termination__OutList_59);
                        }
#line 773 "termination.m"
                        {
#line 773 "termination.m"
                          transform_hlds__termination__ArgSize_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 773 "termination.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSize_15, 0) = ((MR_Box) ((MR_Integer) 0));
#line 773 "termination.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSize_15, 1) = ((MR_Box) (transform_hlds__termination__OutList_59));
#line 773 "termination.m"
                        }
#line 774 "termination.m"
                        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 774 "termination.m"
                        transform_hlds__termination__Termination_16 = (MR_Word) &transform_hlds__termination_scalar_common_5[0];
#line 771 "termination.m"
                      }
#line 761 "termination.m"
                      break;
#line 761 "termination.m"
                    case (MR_Integer) 0:
#line 766 "termination.m"
                      {
#line 766 "termination.m"
                        MR_Word transform_hlds__termination__OutList_58;

#line 767 "termination.m"
                        {
#line 767 "termination.m"
                          transform_hlds__term_util__make_bool_list_3_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[3], transform_hlds__termination__HeadVars_14, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[33]), &transform_hlds__termination__OutList_58);
                        }
#line 768 "termination.m"
                        {
#line 768 "termination.m"
                          transform_hlds__termination__ArgSize_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 768 "termination.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSize_15, 0) = ((MR_Box) ((MR_Integer) 0));
#line 768 "termination.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSize_15, 1) = ((MR_Box) (transform_hlds__termination__OutList_58));
#line 768 "termination.m"
                        }
#line 769 "termination.m"
                        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 769 "termination.m"
                        transform_hlds__termination__Termination_16 = (MR_Word) &transform_hlds__termination_scalar_common_5[0];
#line 766 "termination.m"
                      }
#line 761 "termination.m"
                      break;
#line 761 "termination.m"
                  }
#line 740 "termination.m"
                  {
#line 740 "termination.m"
                    transform_hlds__termination__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 740 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_21_21, 0) = ((MR_Box) (transform_hlds__termination__ArgSize_15));
#line 740 "termination.m"
                  }
#line 740 "termination.m"
                  {
#line 740 "termination.m"
                    hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_p_0(transform_hlds__termination__V_21_21, transform_hlds__termination__ProcInfo0_13, &transform_hlds__termination__ProcInfo1_17);
                  }
#line 741 "termination.m"
                  {
#line 741 "termination.m"
                    transform_hlds__termination__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 741 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_22_22, 0) = ((MR_Box) (transform_hlds__termination__Termination_16));
#line 741 "termination.m"
                  }
#line 741 "termination.m"
                  {
#line 741 "termination.m"
                    hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(transform_hlds__termination__V_22_22, transform_hlds__termination__ProcInfo1_17, &transform_hlds__termination__ProcInfo_18);
                  }
#line 743 "termination.m"
                  {
#line 743 "termination.m"
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__termination__TypeCtorInfo_26_26, transform_hlds__termination__ProcId_9, ((MR_Box) (transform_hlds__termination__ProcInfo_18)), transform_hlds__termination__STATE_VARIABLE_ProcTable_0_3, &transform_hlds__termination__STATE_VARIABLE_ProcTable_23_23);
                  }
#line 735 "termination.m"
                }
#line 744 "termination.m"
                break;
#line 744 "termination.m"
              case (MR_Integer) 3:
#line 745 "termination.m"
                transform_hlds__termination__STATE_VARIABLE_ProcTable_23_23 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0_3;
#line 744 "termination.m"
                break;
#line 744 "termination.m"
            }
#line 750 "termination.m"
            /* direct tailcall eliminated */
#line 750 "termination.m"
            {
#line 750 "termination.m"
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__ProcIds_10;
#line 750 "termination.m"
              MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_3 = transform_hlds__termination__STATE_VARIABLE_ProcTable_23_23;

#line 750 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ProcTable_0_3 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_3;
#line 750 "termination.m"
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
#line 750 "termination.m"
            }
#line 750 "termination.m"
            continue;
#line 730 "termination.m"
          }
#line 729 "termination.m"
      }
#line 729 "termination.m"
      break;
#line 729 "termination.m"
    }
#line 726 "termination.m"
}

#line 608 "termination.m"
static void MR_CALL 
transform_hlds__termination__term_preprocess_preds_3_p_0(
#line 608 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 608 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2,
#line 608 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_3)
#line 608 "termination.m"
{
#line 611 "termination.m"
  while (MR_TRUE)
#line 611 "termination.m"
    {
#line 611 "termination.m"
      /* tailcall optimized into a loop */
#line 611 "termination.m"
      {
#line 611 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 611 "termination.m"
        if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 611 "termination.m"
          *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_3 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2;
#line 611 "termination.m"
        else
#line 612 "termination.m"
          {
#line 612 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_60_60;
#line 612 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_61_61;
#line 612 "termination.m"
            MR_Word transform_hlds__termination__PredId_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));
#line 612 "termination.m"
            MR_Word transform_hlds__termination__PredIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
#line 612 "termination.m"
            MR_Word transform_hlds__termination__Globals_10;
#line 612 "termination.m"
            MR_Word transform_hlds__termination__MakeOptInt_11;
#line 612 "termination.m"
            MR_Word transform_hlds__termination__PredTable0_12;
#line 612 "termination.m"
            MR_Word transform_hlds__termination__PredInfo0_13;
#line 612 "termination.m"
            MR_Word transform_hlds__termination__PredStatus_14;
#line 612 "termination.m"
            MR_Word transform_hlds__termination__Context_15;
#line 612 "termination.m"
            MR_Word transform_hlds__termination__ProcTable0_16;
#line 612 "termination.m"
            MR_Word transform_hlds__termination__Markers_17;
#line 612 "termination.m"
            MR_Word transform_hlds__termination__ProcIds_18;
#line 612 "termination.m"
            MR_Word transform_hlds__termination__ProcTable2_20;
#line 612 "termination.m"
            MR_Word transform_hlds__termination__ProcTable_27;
#line 612 "termination.m"
            MR_Word transform_hlds__termination__PredInfo_28;
#line 612 "termination.m"
            MR_Word transform_hlds__termination__PredTable_29;
#line 612 "termination.m"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_56_56;
#line 617 "termination.m"
            MR_Box transform_hlds__termination__conv0_PredInfo0_13;
#line 623 "termination.m"
            MR_Word transform_hlds__termination__ProcTable1_19;

#line 613 "termination.m"
            {
#line 613 "termination.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2, &transform_hlds__termination__Globals_10);
            }
#line 614 "termination.m"
            {
#line 614 "termination.m"
              libs__globals__lookup_bool_option_3_p_0(transform_hlds__termination__Globals_10, (MR_Integer) 87, &transform_hlds__termination__MakeOptInt_11);
            }
#line 616 "termination.m"
            {
#line 616 "termination.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2, &transform_hlds__termination__PredTable0_12);
            }
#line 1901 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_60_60 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 1903 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_61_61 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 617 "termination.m"
            {
#line 617 "termination.m"
              mercury__map__lookup_3_p_0(transform_hlds__termination__TypeCtorInfo_60_60, transform_hlds__termination__TypeCtorInfo_61_61, transform_hlds__termination__PredTable0_12, ((MR_Box) (transform_hlds__termination__PredId_7)), &transform_hlds__termination__conv0_PredInfo0_13);
            }
#line 617 "termination.m"
            transform_hlds__termination__PredInfo0_13 = ((MR_Word) transform_hlds__termination__conv0_PredInfo0_13);
#line 618 "termination.m"
            {
#line 618 "termination.m"
              hlds__hlds_pred__pred_info_get_status_2_p_0(transform_hlds__termination__PredInfo0_13, &transform_hlds__termination__PredStatus_14);
            }
#line 619 "termination.m"
            {
#line 619 "termination.m"
              hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__termination__PredInfo0_13, &transform_hlds__termination__Context_15);
            }
#line 620 "termination.m"
            {
#line 620 "termination.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__termination__PredInfo0_13, &transform_hlds__termination__ProcTable0_16);
            }
#line 621 "termination.m"
            {
#line 621 "termination.m"
              hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__termination__PredInfo0_13, &transform_hlds__termination__Markers_17);
            }
#line 622 "termination.m"
            {
#line 622 "termination.m"
              transform_hlds__termination__ProcIds_18 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__termination__PredInfo0_13);
            }
#line 703 "termination.m"
            {
#line 703 "termination.m"
              transform_hlds__termination__succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(transform_hlds__termination__PredInfo0_13);
            }
#line 702 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 705 "termination.m"
              {
#line 705 "termination.m"
                {
#line 705 "termination.m"
                  transform_hlds__termination__set_builtin_terminates_6_p_0(transform_hlds__termination__ProcIds_18, transform_hlds__termination__PredId_7, transform_hlds__termination__PredInfo0_13, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2, transform_hlds__termination__ProcTable0_16, &transform_hlds__termination__ProcTable1_19);
                }
#line 705 "termination.m"
                transform_hlds__termination__succeeded = MR_TRUE;
#line 705 "termination.m"
              }
#line 702 "termination.m"
            else
#line 707 "termination.m"
              {
#line 707 "termination.m"
                MR_Word transform_hlds__termination__SpecialPredId_74;
#line 708 "termination.m"
                MR_Word transform_hlds__termination__SpecPredId0_72;
#line 709 "termination.m"
                MR_Word transform_hlds__termination__ModuleName_69;
#line 709 "termination.m"
                MR_String transform_hlds__termination__Name_70;
#line 709 "termination.m"
                MR_Integer transform_hlds__termination__Arity_71;
#line 709 "termination.m"
                MR_Integer transform_hlds__termination__V_79_79;
#line 712 "termination.m"
                MR_String transform_hlds__termination__V_73_73;

#line 709 "termination.m"
                {
#line 709 "termination.m"
                  transform_hlds__termination__ModuleName_69 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__termination__PredInfo0_13);
                }
#line 710 "termination.m"
                {
#line 710 "termination.m"
                  transform_hlds__termination__Name_70 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__termination__PredInfo0_13);
                }
#line 711 "termination.m"
                {
#line 711 "termination.m"
                  transform_hlds__termination__Arity_71 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__termination__PredInfo0_13);
                }
#line 712 "termination.m"
                {
#line 712 "termination.m"
                  transform_hlds__termination__succeeded = mdbcomp__prim_data__special_pred_name_arity_4_p_1(&transform_hlds__termination__SpecPredId0_72, transform_hlds__termination__Name_70, &transform_hlds__termination__V_73_73, &transform_hlds__termination__V_79_79);
                }
#line 709 "termination.m"
                if (transform_hlds__termination__succeeded)
#line 709 "termination.m"
                  {
#line 712 "termination.m"
                    transform_hlds__termination__succeeded = (transform_hlds__termination__Arity_71 == transform_hlds__termination__V_79_79);
#line 709 "termination.m"
                    if (transform_hlds__termination__succeeded)
#line 713 "termination.m"
                      {
#line 713 "termination.m"
                        transform_hlds__termination__succeeded = mdbcomp__builtin_modules__any_mercury_builtin_module_1_p_0(transform_hlds__termination__ModuleName_69);
                      }
#line 709 "termination.m"
                  }
#line 708 "termination.m"
                if (transform_hlds__termination__succeeded)
#line 715 "termination.m"
                  {
#line 715 "termination.m"
                    transform_hlds__termination__SpecialPredId_74 = transform_hlds__termination__SpecPredId0_72;
#line 715 "termination.m"
                    transform_hlds__termination__succeeded = MR_TRUE;
#line 715 "termination.m"
                  }
#line 708 "termination.m"
                else
#line 717 "termination.m"
                  {
#line 717 "termination.m"
                    MR_Word transform_hlds__termination__Origin_75;
#line 718 "termination.m"
                    MR_Word transform_hlds__termination__V_76_76;

#line 717 "termination.m"
                    {
#line 717 "termination.m"
                      hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__termination__PredInfo0_13, &transform_hlds__termination__Origin_75);
                    }
#line 718 "termination.m"
                    transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__Origin_75)) == (MR_mktag((MR_Integer) 0)));
#line 718 "termination.m"
                    if (transform_hlds__termination__succeeded)
#line 718 "termination.m"
                      {
#line 718 "termination.m"
                        transform_hlds__termination__SpecialPredId_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__Origin_75, (MR_Integer) 0)));
#line 718 "termination.m"
                        transform_hlds__termination__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__Origin_75, (MR_Integer) 1)));
#line 718 "termination.m"
                      }
#line 717 "termination.m"
                  }
#line 707 "termination.m"
                if (transform_hlds__termination__succeeded)
#line 707 "termination.m"
                  {
#line 721 "termination.m"
                    {
#line 721 "termination.m"
                      transform_hlds__termination__set_generated_terminates_4_p_0(transform_hlds__termination__ProcIds_18, transform_hlds__termination__SpecialPredId_74, transform_hlds__termination__ProcTable0_16, &transform_hlds__termination__ProcTable1_19);
                    }
#line 721 "termination.m"
                    transform_hlds__termination__succeeded = MR_TRUE;
#line 707 "termination.m"
                  }
#line 707 "termination.m"
              }
#line 623 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 630 "termination.m"
              transform_hlds__termination__ProcTable2_20 = transform_hlds__termination__ProcTable1_19;
#line 623 "termination.m"
            else
#line 631 "termination.m"
              {
#line 632 "termination.m"
                MR_Word transform_hlds__termination__V_33_33;

#line 632 "termination.m"
                {
#line 632 "termination.m"
                  transform_hlds__termination__V_33_33 = hlds__status__pred_status_defined_in_this_module_1_f_0(transform_hlds__termination__PredStatus_14);
                }
#line 632 "termination.m"
                transform_hlds__termination__succeeded = (transform_hlds__termination__V_33_33 == (MR_Integer) 1);
#line 631 "termination.m"
                if (transform_hlds__termination__succeeded)
#line 636 "termination.m"
                  {
#line 636 "termination.m"
                    {
#line 636 "termination.m"
                      transform_hlds__termination__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__termination__Markers_17, (MR_Integer) 17);
                    }
#line 636 "termination.m"
                    if (transform_hlds__termination__succeeded)
#line 637 "termination.m"
                      {
#line 637 "termination.m"
                        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 637 "termination.m"
                        {
#line 637 "termination.m"
                          transform_hlds__termination__change_procs_termination_info_5_p_0(transform_hlds__termination__ProcIds_18, (MR_Integer) 1, (MR_Word) &transform_hlds__termination_scalar_common_5[0], transform_hlds__termination__ProcTable0_16, &transform_hlds__termination__ProcTable2_20);
                        }
#line 637 "termination.m"
                      }
#line 636 "termination.m"
                    else
#line 640 "termination.m"
                      transform_hlds__termination__ProcTable2_20 = transform_hlds__termination__ProcTable0_16;
#line 636 "termination.m"
                  }
#line 631 "termination.m"
                else
#line 667 "termination.m"
                  {
#line 667 "termination.m"
                    MR_Word transform_hlds__termination__ArgSizeError_23;
#line 667 "termination.m"
                    MR_Word transform_hlds__termination__ArgSizeInfo_24;
#line 667 "termination.m"
                    MR_Word transform_hlds__termination__V_48_48;
#line 667 "termination.m"
                    MR_Word transform_hlds__termination__ProcTable1_58;

#line 654 "termination.m"
                    {
#line 654 "termination.m"
                      transform_hlds__termination__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__termination__Markers_17, (MR_Integer) 17);
                    }
#line 655 "termination.m"
                    if (!(transform_hlds__termination__succeeded))
#line 656 "termination.m"
                      {
#line 656 "termination.m"
                        MR_Word transform_hlds__termination__V_38_38;

#line 656 "termination.m"
                        transform_hlds__termination__succeeded = (transform_hlds__termination__MakeOptInt_11 == (MR_Integer) 0);
#line 656 "termination.m"
                        if (transform_hlds__termination__succeeded)
#line 656 "termination.m"
                          {
#line 657 "termination.m"
                            transform_hlds__termination__V_38_38 = (MR_Integer) 19;
#line 657 "termination.m"
                            {
#line 657 "termination.m"
                              transform_hlds__termination__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__termination__Markers_17, transform_hlds__termination__V_38_38);
                            }
#line 656 "termination.m"
                          }
#line 656 "termination.m"
                      }
#line 652 "termination.m"
                    if (transform_hlds__termination__succeeded)
#line 660 "termination.m"
                      {
#line 660 "termination.m"
                        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 660 "termination.m"
                        {
#line 660 "termination.m"
                          transform_hlds__termination__change_procs_termination_info_5_p_0(transform_hlds__termination__ProcIds_18, (MR_Integer) 1, (MR_Word) &transform_hlds__termination_scalar_common_5[0], transform_hlds__termination__ProcTable0_16, &transform_hlds__termination__ProcTable1_58);
                        }
#line 660 "termination.m"
                      }
#line 652 "termination.m"
                    else
#line 663 "termination.m"
                      {
#line 663 "termination.m"
                        MR_Word transform_hlds__termination__TerminationError_21;
#line 663 "termination.m"
                        MR_Word transform_hlds__termination__TerminationInfo_22;
#line 663 "termination.m"
                        MR_Word transform_hlds__termination__V_44_44;

#line 663 "termination.m"
                        {
#line 663 "termination.m"
                          transform_hlds__termination__TerminationError_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 663 "termination.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__termination__TerminationError_21, 0) = ((MR_Box) (transform_hlds__termination__Context_15));
#line 663 "termination.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__termination__TerminationError_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 663 "termination.m"
                        }
#line 664 "termination.m"
                        {
#line 664 "termination.m"
                          transform_hlds__termination__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 664 "termination.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__termination__V_44_44, 0) = ((MR_Box) (transform_hlds__termination__TerminationError_21));
#line 664 "termination.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__termination__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 664 "termination.m"
                        }
#line 664 "termination.m"
                        {
#line 664 "termination.m"
                          transform_hlds__termination__TerminationInfo_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 664 "termination.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__termination__TerminationInfo_22, 0) = ((MR_Box) (transform_hlds__termination__V_44_44));
#line 664 "termination.m"
                        }
#line 665 "termination.m"
                        {
#line 665 "termination.m"
                          transform_hlds__termination__change_procs_termination_info_5_p_0(transform_hlds__termination__ProcIds_18, (MR_Integer) 0, transform_hlds__termination__TerminationInfo_22, transform_hlds__termination__ProcTable0_16, &transform_hlds__termination__ProcTable1_58);
                        }
#line 663 "termination.m"
                      }
#line 668 "termination.m"
                    {
#line 668 "termination.m"
                      transform_hlds__termination__ArgSizeError_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 668 "termination.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeError_23, 0) = ((MR_Box) (transform_hlds__termination__Context_15));
#line 668 "termination.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeError_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 668 "termination.m"
                    }
#line 669 "termination.m"
                    {
#line 669 "termination.m"
                      transform_hlds__termination__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 669 "termination.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__termination__V_48_48, 0) = ((MR_Box) (transform_hlds__termination__ArgSizeError_23));
#line 669 "termination.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__termination__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 669 "termination.m"
                    }
#line 669 "termination.m"
                    {
#line 669 "termination.m"
                      transform_hlds__termination__ArgSizeInfo_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 669 "termination.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__termination__ArgSizeInfo_24, 0) = ((MR_Box) (transform_hlds__termination__V_48_48));
#line 669 "termination.m"
                    }
#line 670 "termination.m"
                    {
#line 670 "termination.m"
                      transform_hlds__termination__change_procs_arg_size_info_5_p_0(transform_hlds__termination__ProcIds_18, (MR_Integer) 0, transform_hlds__termination__ArgSizeInfo_24, transform_hlds__termination__ProcTable1_58, &transform_hlds__termination__ProcTable2_20);
                    }
#line 667 "termination.m"
                  }
#line 631 "termination.m"
              }
#line 673 "termination.m"
            {
#line 673 "termination.m"
              transform_hlds__termination__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__termination__Markers_17, (MR_Integer) 18);
            }
#line 673 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 674 "termination.m"
              {
#line 674 "termination.m"
                MR_Word transform_hlds__termination__RequestError_25;
#line 674 "termination.m"
                MR_Word transform_hlds__termination__RequestTerminationInfo_26;
#line 674 "termination.m"
                MR_Word transform_hlds__termination__V_52_52;
#line 674 "termination.m"
                MR_Word transform_hlds__termination__V_53_53;

#line 674 "termination.m"
                {
#line 674 "termination.m"
                  transform_hlds__termination__V_52_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 674 "termination.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__termination__V_52_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 674 "termination.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__termination__V_52_52, 1) = ((MR_Box) (transform_hlds__termination__PredId_7));
#line 674 "termination.m"
                }
#line 674 "termination.m"
                {
#line 674 "termination.m"
                  transform_hlds__termination__RequestError_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 674 "termination.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__termination__RequestError_25, 0) = ((MR_Box) (transform_hlds__termination__Context_15));
#line 674 "termination.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__termination__RequestError_25, 1) = ((MR_Box) (transform_hlds__termination__V_52_52));
#line 674 "termination.m"
                }
#line 675 "termination.m"
                {
#line 675 "termination.m"
                  transform_hlds__termination__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 675 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__V_53_53, 0) = ((MR_Box) (transform_hlds__termination__RequestError_25));
#line 675 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 675 "termination.m"
                }
#line 675 "termination.m"
                {
#line 675 "termination.m"
                  transform_hlds__termination__RequestTerminationInfo_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 675 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__RequestTerminationInfo_26, 0) = ((MR_Box) (transform_hlds__termination__V_53_53));
#line 675 "termination.m"
                }
#line 676 "termination.m"
                {
#line 676 "termination.m"
                  transform_hlds__termination__change_procs_termination_info_5_p_0(transform_hlds__termination__ProcIds_18, (MR_Integer) 1, transform_hlds__termination__RequestTerminationInfo_26, transform_hlds__termination__ProcTable2_20, &transform_hlds__termination__ProcTable_27);
                }
#line 674 "termination.m"
              }
#line 673 "termination.m"
            else
#line 679 "termination.m"
              transform_hlds__termination__ProcTable_27 = transform_hlds__termination__ProcTable2_20;
#line 681 "termination.m"
            {
#line 681 "termination.m"
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__termination__ProcTable_27, transform_hlds__termination__PredInfo0_13, &transform_hlds__termination__PredInfo_28);
            }
#line 682 "termination.m"
            {
#line 682 "termination.m"
              mercury__map__set_4_p_0(transform_hlds__termination__TypeCtorInfo_60_60, transform_hlds__termination__TypeCtorInfo_61_61, ((MR_Box) (transform_hlds__termination__PredId_7)), ((MR_Box) (transform_hlds__termination__PredInfo_28)), transform_hlds__termination__PredTable0_12, &transform_hlds__termination__PredTable_29);
            }
#line 683 "termination.m"
            {
#line 683 "termination.m"
              hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__termination__PredTable_29, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_56_56);
            }
#line 684 "termination.m"
            /* direct tailcall eliminated */
#line 684 "termination.m"
            {
#line 684 "termination.m"
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__PredIds_8;
#line 684 "termination.m"
              MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_2 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_56_56;

#line 684 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_2;
#line 684 "termination.m"
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
#line 684 "termination.m"
            }
#line 684 "termination.m"
            continue;
#line 612 "termination.m"
          }
#line 611 "termination.m"
      }
#line 611 "termination.m"
      break;
#line 611 "termination.m"
    }
#line 608 "termination.m"
}

#line 568 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__maybe_report_termination_errors_5_p_0_4(
#line 568 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 568 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1)
#line 568 "termination.m"
{
#line 568 "termination.m"
  {
#line 568 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 568 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

#line 568 "termination.m"
    {
#line 568 "termination.m"
      transform_hlds__termination__succeeded = transform_hlds__termination__IntroducedFrom__pred__decide_what_term_errors_to_report__568__1_1_p_0(((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 568 "termination.m"
    return transform_hlds__termination__succeeded;
#line 568 "termination.m"
  }
#line 568 "termination.m"
}

#line 551 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__maybe_report_termination_errors_5_p_0_3(
#line 551 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 551 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1)
#line 551 "termination.m"
{
#line 551 "termination.m"
  {
#line 551 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 551 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

#line 551 "termination.m"
    {
#line 551 "termination.m"
      transform_hlds__termination__succeeded = transform_hlds__term_util__is_solver_init_wrapper_pred_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 551 "termination.m"
    return transform_hlds__termination__succeeded;
#line 551 "termination.m"
  }
#line 551 "termination.m"
}

#line 539 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__maybe_report_termination_errors_5_p_0_2(
#line 539 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 539 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1)
#line 539 "termination.m"
{
#line 539 "termination.m"
  {
#line 539 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 539 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

#line 539 "termination.m"
    {
#line 539 "termination.m"
      transform_hlds__termination__succeeded = transform_hlds__termination__IntroducedFrom__pred__decide_what_term_errors_to_report__539__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 539 "termination.m"
    return transform_hlds__termination__succeeded;
#line 539 "termination.m"
  }
#line 539 "termination.m"
}

#line 525 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__maybe_report_termination_errors_5_p_0_1(
#line 525 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 525 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1)
#line 525 "termination.m"
{
#line 525 "termination.m"
  {
#line 525 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 525 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

#line 525 "termination.m"
    {
#line 525 "termination.m"
      transform_hlds__termination__succeeded = transform_hlds__termination__IntroducedFrom__pred__decide_what_term_errors_to_report__525__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 525 "termination.m"
    return transform_hlds__termination__succeeded;
#line 525 "termination.m"
  }
#line 525 "termination.m"
}

#line 494 "termination.m"
static void MR_CALL 
transform_hlds__termination__maybe_report_termination_errors_5_p_0(
#line 494 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_6,
#line 494 "termination.m"
  MR_Word transform_hlds__termination__SCC_7,
#line 494 "termination.m"
  MR_Word transform_hlds__termination__Errors_8,
#line 494 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_0_12,
#line 494 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_Specs_13)
#line 494 "termination.m"
{
#line 498 "termination.m"
  {
#line 498 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 498 "termination.m"
    MR_Word transform_hlds__termination__Globals_19;
#line 498 "termination.m"
    MR_Word transform_hlds__termination__NormalErrors_20;
#line 498 "termination.m"
    MR_Word transform_hlds__termination__VerboseErrors_21;
#line 531 "termination.m"
    MR_Word transform_hlds__termination__IsCheckTerm_22;
#line 531 "termination.m"
    MR_Word transform_hlds__termination__CheckTermPPIds_27;
#line 533 "termination.m"
    MR_Word transform_hlds__termination__V_28_28;
#line 533 "termination.m"
    MR_Word transform_hlds__termination__V_29_29;

#line 520 "termination.m"
    {
#line 520 "termination.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__termination__ModuleInfo_6, &transform_hlds__termination__Globals_19);
    }
#line 521 "termination.m"
    {
#line 521 "termination.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__termination__Globals_19, (MR_Integer) 410, &transform_hlds__termination__NormalErrors_20);
    }
#line 522 "termination.m"
    {
#line 522 "termination.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__termination__Globals_19, (MR_Integer) 411, &transform_hlds__termination__VerboseErrors_21);
    }
#line 525 "termination.m"
    {
#line 525 "termination.m"
      transform_hlds__termination__IsCheckTerm_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 525 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsCheckTerm_22, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_6[0]));
#line 525 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsCheckTerm_22, 1) = ((MR_Box) (transform_hlds__termination__maybe_report_termination_errors_5_p_0_1));
#line 525 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsCheckTerm_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 525 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsCheckTerm_22, 3) = ((MR_Box) (transform_hlds__termination__ModuleInfo_6));
#line 525 "termination.m"
    }
#line 532 "termination.m"
    {
#line 532 "termination.m"
      mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__termination__IsCheckTerm_22, transform_hlds__termination__SCC_7, &transform_hlds__termination__CheckTermPPIds_27);
    }
#line 533 "termination.m"
    transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__CheckTermPPIds_27)) == (MR_mktag((MR_Integer) 1)));
#line 533 "termination.m"
    if (transform_hlds__termination__succeeded)
#line 533 "termination.m"
      {
#line 533 "termination.m"
        transform_hlds__termination__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__CheckTermPPIds_27, (MR_Integer) 0)));
#line 533 "termination.m"
        transform_hlds__termination__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__CheckTermPPIds_27, (MR_Integer) 1)));
#line 505 "termination.m"
        {
#line 505 "termination.m"
          transform_hlds__term_errors__report_term_errors_5_p_0(transform_hlds__termination__ModuleInfo_6, transform_hlds__termination__SCC_7, transform_hlds__termination__Errors_8, transform_hlds__termination__STATE_VARIABLE_Specs_0_12, transform_hlds__termination__STATE_VARIABLE_Specs_13);
        }
#line 533 "termination.m"
      }
#line 533 "termination.m"
    else
#line 2555 "transform_hlds.termination.c"
      {
#line 542 "termination.m"
        MR_Word transform_hlds__termination__TypeCtorInfo_49_59 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 542 "termination.m"
        MR_Word transform_hlds__termination__IsNonImported_30;
#line 542 "termination.m"
        MR_Word transform_hlds__termination__NonImportedPPIds_32;
#line 542 "termination.m"
        MR_Word transform_hlds__termination__V_47_47;
#line 544 "termination.m"
        MR_Word transform_hlds__termination__V_33_33;
#line 544 "termination.m"
        MR_Word transform_hlds__termination__V_34_34;

#line 539 "termination.m"
        {
#line 539 "termination.m"
          transform_hlds__termination__IsNonImported_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 539 "termination.m"
          MR_hl_field(MR_mktag(0), transform_hlds__termination__IsNonImported_30, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_6[0]));
#line 539 "termination.m"
          MR_hl_field(MR_mktag(0), transform_hlds__termination__IsNonImported_30, 1) = ((MR_Box) (transform_hlds__termination__maybe_report_termination_errors_5_p_0_2));
#line 539 "termination.m"
          MR_hl_field(MR_mktag(0), transform_hlds__termination__IsNonImported_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 539 "termination.m"
          MR_hl_field(MR_mktag(0), transform_hlds__termination__IsNonImported_30, 3) = ((MR_Box) (transform_hlds__termination__ModuleInfo_6));
#line 539 "termination.m"
        }
#line 543 "termination.m"
        {
#line 543 "termination.m"
          mercury__list__filter_3_p_0(transform_hlds__termination__TypeCtorInfo_49_59, transform_hlds__termination__IsNonImported_30, transform_hlds__termination__SCC_7, &transform_hlds__termination__NonImportedPPIds_32);
        }
#line 544 "termination.m"
        transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__NonImportedPPIds_32)) == (MR_mktag((MR_Integer) 1)));
#line 544 "termination.m"
        if (transform_hlds__termination__succeeded)
#line 544 "termination.m"
          {
#line 544 "termination.m"
            transform_hlds__termination__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__NonImportedPPIds_32, (MR_Integer) 0)));
#line 544 "termination.m"
            transform_hlds__termination__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__NonImportedPPIds_32, (MR_Integer) 1)));
#line 551 "termination.m"
            {
#line 551 "termination.m"
              transform_hlds__termination__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 551 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__V_47_47, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_6[0]));
#line 551 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__V_47_47, 1) = ((MR_Box) (transform_hlds__termination__maybe_report_termination_errors_5_p_0_3));
#line 551 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__V_47_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 551 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__V_47_47, 3) = ((MR_Box) (transform_hlds__termination__ModuleInfo_6));
#line 551 "termination.m"
            }
#line 551 "termination.m"
            {
#line 551 "termination.m"
              transform_hlds__termination__succeeded = mercury__list__all_false_2_p_0(transform_hlds__termination__TypeCtorInfo_49_59, transform_hlds__termination__V_47_47, transform_hlds__termination__SCC_7);
            }
#line 544 "termination.m"
          }
#line 2620 "transform_hlds.termination.c"
        if (transform_hlds__termination__succeeded)
#line 2622 "transform_hlds.termination.c"
#line 2623 "transform_hlds.termination.c"
          switch (transform_hlds__termination__VerboseErrors_21) {
#line 2625 "transform_hlds.termination.c"
            default: /*NOTREACHED*/ MR_assert(0);
#line 2627 "transform_hlds.termination.c"
            case (MR_Integer) 0:
#line 2629 "transform_hlds.termination.c"
              {
#line 2631 "transform_hlds.termination.c"
                MR_Word transform_hlds__termination__MaybeErrorsToReport_64;

#line 580 "termination.m"
#line 580 "termination.m"
                switch (transform_hlds__termination__NormalErrors_20) {
#line 580 "termination.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 580 "termination.m"
                  case (MR_Integer) 0:
#line 582 "termination.m"
                    transform_hlds__termination__MaybeErrorsToReport_64 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 580 "termination.m"
                    break;
#line 580 "termination.m"
                  case (MR_Integer) 1:
#line 562 "termination.m"
                    {
#line 562 "termination.m"
                      MR_Word transform_hlds__termination__DirectErrors_39;

#line 572 "termination.m"
                      {
#line 572 "termination.m"
                        mercury__list__filter_3_p_0((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0, (MR_Word) &transform_hlds__termination_scalar_common_2[5], transform_hlds__termination__Errors_8, &transform_hlds__termination__DirectErrors_39);
                      }
#line 576 "termination.m"
                      if ((transform_hlds__termination__DirectErrors_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 575 "termination.m"
                        {
#line 575 "termination.m"
                          transform_hlds__termination__MaybeErrorsToReport_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 575 "termination.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__termination__MaybeErrorsToReport_64, 0) = ((MR_Box) (transform_hlds__termination__Errors_8));
#line 575 "termination.m"
                        }
#line 576 "termination.m"
                      else
#line 578 "termination.m"
                        {
#line 578 "termination.m"
                          transform_hlds__termination__MaybeErrorsToReport_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 578 "termination.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__termination__MaybeErrorsToReport_64, 0) = ((MR_Box) (transform_hlds__termination__DirectErrors_39));
#line 578 "termination.m"
                        }
#line 562 "termination.m"
                    }
#line 580 "termination.m"
                    break;
#line 580 "termination.m"
                }
#line 503 "termination.m"
                if ((transform_hlds__termination__MaybeErrorsToReport_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 502 "termination.m"
                  *transform_hlds__termination__STATE_VARIABLE_Specs_13 = transform_hlds__termination__STATE_VARIABLE_Specs_0_12;
#line 503 "termination.m"
                else
#line 504 "termination.m"
                  {
#line 504 "termination.m"
                    MR_Word transform_hlds__termination__ErrorsToReport_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__MaybeErrorsToReport_64, (MR_Integer) 0)));

#line 505 "termination.m"
                    {
#line 505 "termination.m"
                      transform_hlds__term_errors__report_term_errors_5_p_0(transform_hlds__termination__ModuleInfo_6, transform_hlds__termination__SCC_7, transform_hlds__termination__ErrorsToReport_62, transform_hlds__termination__STATE_VARIABLE_Specs_0_12, transform_hlds__termination__STATE_VARIABLE_Specs_13);
                    }
#line 504 "termination.m"
                  }
#line 2701 "transform_hlds.termination.c"
              }
#line 2703 "transform_hlds.termination.c"
              break;
#line 2705 "transform_hlds.termination.c"
            case (MR_Integer) 1:
#line 505 "termination.m"
              {
#line 505 "termination.m"
                transform_hlds__term_errors__report_term_errors_5_p_0(transform_hlds__termination__ModuleInfo_6, transform_hlds__termination__SCC_7, transform_hlds__termination__Errors_8, transform_hlds__termination__STATE_VARIABLE_Specs_0_12, transform_hlds__termination__STATE_VARIABLE_Specs_13);
              }
#line 2712 "transform_hlds.termination.c"
              break;
#line 2714 "transform_hlds.termination.c"
          }
#line 2716 "transform_hlds.termination.c"
        else
#line 502 "termination.m"
          *transform_hlds__termination__STATE_VARIABLE_Specs_13 = transform_hlds__termination__STATE_VARIABLE_Specs_0_12;
#line 2720 "transform_hlds.termination.c"
      }
#line 498 "termination.m"
  }
#line 494 "termination.m"
}

#line 473 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_termination_infos_4_p_0(
#line 473 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 473 "termination.m"
  MR_Word transform_hlds__termination__TerminationInfo_2,
#line 473 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3,
#line 473 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4)
#line 473 "termination.m"
{
#line 476 "termination.m"
  while (MR_TRUE)
#line 476 "termination.m"
    {
#line 476 "termination.m"
      /* tailcall optimized into a loop */
#line 476 "termination.m"
      {
#line 476 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 476 "termination.m"
        if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 476 "termination.m"
          *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3;
#line 476 "termination.m"
        else
#line 477 "termination.m"
          {
#line 477 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_28_28;
#line 477 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_29_29;
#line 477 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_31_31;
#line 477 "termination.m"
            MR_Word transform_hlds__termination__PPId_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));
#line 477 "termination.m"
            MR_Word transform_hlds__termination__PPIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
#line 477 "termination.m"
            MR_Word transform_hlds__termination__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PPId_9, (MR_Integer) 0)));
#line 477 "termination.m"
            MR_Integer transform_hlds__termination__ProcId_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PPId_9, (MR_Integer) 1)));
#line 477 "termination.m"
            MR_Word transform_hlds__termination__PredTable0_15;
#line 477 "termination.m"
            MR_Word transform_hlds__termination__PredInfo0_16;
#line 477 "termination.m"
            MR_Word transform_hlds__termination__ProcTable0_17;
#line 477 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo0_18;
#line 477 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo_19;
#line 477 "termination.m"
            MR_Word transform_hlds__termination__ProcTable_20;
#line 477 "termination.m"
            MR_Word transform_hlds__termination__PredInfo_21;
#line 477 "termination.m"
            MR_Word transform_hlds__termination__PredTable_22;
#line 477 "termination.m"
            MR_Word transform_hlds__termination__V_25_25;
#line 477 "termination.m"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26;
#line 480 "termination.m"
            MR_Box transform_hlds__termination__conv0_PredInfo0_16;
#line 482 "termination.m"
            MR_Box transform_hlds__termination__conv1_ProcInfo0_18;

#line 479 "termination.m"
            {
#line 479 "termination.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__termination__PredTable0_15);
            }
#line 2803 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 2805 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_29_29 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 480 "termination.m"
            {
#line 480 "termination.m"
              mercury__map__lookup_3_p_0(transform_hlds__termination__TypeCtorInfo_28_28, transform_hlds__termination__TypeCtorInfo_29_29, transform_hlds__termination__PredTable0_15, ((MR_Box) (transform_hlds__termination__PredId_13)), &transform_hlds__termination__conv0_PredInfo0_16);
            }
#line 480 "termination.m"
            transform_hlds__termination__PredInfo0_16 = ((MR_Word) transform_hlds__termination__conv0_PredInfo0_16);
#line 481 "termination.m"
            {
#line 481 "termination.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__termination__PredInfo0_16, &transform_hlds__termination__ProcTable0_17);
            }
#line 2819 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 482 "termination.m"
            {
#line 482 "termination.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__termination__TypeCtorInfo_31_31, transform_hlds__termination__ProcTable0_17, transform_hlds__termination__ProcId_14, &transform_hlds__termination__conv1_ProcInfo0_18);
            }
#line 482 "termination.m"
            transform_hlds__termination__ProcInfo0_18 = ((MR_Word) transform_hlds__termination__conv1_ProcInfo0_18);
#line 484 "termination.m"
            {
#line 484 "termination.m"
              transform_hlds__termination__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 484 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_25_25, 0) = ((MR_Box) (transform_hlds__termination__TerminationInfo_2));
#line 484 "termination.m"
            }
#line 484 "termination.m"
            {
#line 484 "termination.m"
              hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(transform_hlds__termination__V_25_25, transform_hlds__termination__ProcInfo0_18, &transform_hlds__termination__ProcInfo_19);
            }
#line 486 "termination.m"
            {
#line 486 "termination.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__termination__TypeCtorInfo_31_31, transform_hlds__termination__ProcId_14, ((MR_Box) (transform_hlds__termination__ProcInfo_19)), transform_hlds__termination__ProcTable0_17, &transform_hlds__termination__ProcTable_20);
            }
#line 487 "termination.m"
            {
#line 487 "termination.m"
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__termination__ProcTable_20, transform_hlds__termination__PredInfo0_16, &transform_hlds__termination__PredInfo_21);
            }
#line 488 "termination.m"
            {
#line 488 "termination.m"
              mercury__map__det_update_4_p_0(transform_hlds__termination__TypeCtorInfo_28_28, transform_hlds__termination__TypeCtorInfo_29_29, ((MR_Box) (transform_hlds__termination__PredId_13)), ((MR_Box) (transform_hlds__termination__PredInfo_21)), transform_hlds__termination__PredTable0_15, &transform_hlds__termination__PredTable_22);
            }
#line 489 "termination.m"
            {
#line 489 "termination.m"
              hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__termination__PredTable_22, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26);
            }
#line 490 "termination.m"
            /* direct tailcall eliminated */
#line 490 "termination.m"
            {
#line 490 "termination.m"
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__PPIds_10;
#line 490 "termination.m"
              MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26;

#line 490 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 490 "termination.m"
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
#line 490 "termination.m"
            }
#line 490 "termination.m"
            continue;
#line 477 "termination.m"
          }
#line 476 "termination.m"
      }
#line 476 "termination.m"
      break;
#line 476 "termination.m"
    }
#line 473 "termination.m"
}

#line 453 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_infinite_arg_size_infos_4_p_0(
#line 453 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 453 "termination.m"
  MR_Word transform_hlds__termination__ArgSizeInfo_2,
#line 453 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3,
#line 453 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4)
#line 453 "termination.m"
{
#line 456 "termination.m"
  while (MR_TRUE)
#line 456 "termination.m"
    {
#line 456 "termination.m"
      /* tailcall optimized into a loop */
#line 456 "termination.m"
      {
#line 456 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 456 "termination.m"
        if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 456 "termination.m"
          *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3;
#line 456 "termination.m"
        else
#line 457 "termination.m"
          {
#line 457 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_28_28;
#line 457 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_29_29;
#line 457 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_31_31;
#line 457 "termination.m"
            MR_Word transform_hlds__termination__PPId_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));
#line 457 "termination.m"
            MR_Word transform_hlds__termination__PPIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
#line 457 "termination.m"
            MR_Word transform_hlds__termination__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PPId_9, (MR_Integer) 0)));
#line 457 "termination.m"
            MR_Integer transform_hlds__termination__ProcId_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PPId_9, (MR_Integer) 1)));
#line 457 "termination.m"
            MR_Word transform_hlds__termination__PredTable0_15;
#line 457 "termination.m"
            MR_Word transform_hlds__termination__PredInfo0_16;
#line 457 "termination.m"
            MR_Word transform_hlds__termination__ProcTable0_17;
#line 457 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo0_18;
#line 457 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo_19;
#line 457 "termination.m"
            MR_Word transform_hlds__termination__ProcTable_20;
#line 457 "termination.m"
            MR_Word transform_hlds__termination__PredInfo_21;
#line 457 "termination.m"
            MR_Word transform_hlds__termination__PredTable_22;
#line 457 "termination.m"
            MR_Word transform_hlds__termination__V_25_25;
#line 457 "termination.m"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26;
#line 460 "termination.m"
            MR_Box transform_hlds__termination__conv0_PredInfo0_16;
#line 462 "termination.m"
            MR_Box transform_hlds__termination__conv1_ProcInfo0_18;

#line 459 "termination.m"
            {
#line 459 "termination.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__termination__PredTable0_15);
            }
#line 2965 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 2967 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_29_29 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 460 "termination.m"
            {
#line 460 "termination.m"
              mercury__map__lookup_3_p_0(transform_hlds__termination__TypeCtorInfo_28_28, transform_hlds__termination__TypeCtorInfo_29_29, transform_hlds__termination__PredTable0_15, ((MR_Box) (transform_hlds__termination__PredId_13)), &transform_hlds__termination__conv0_PredInfo0_16);
            }
#line 460 "termination.m"
            transform_hlds__termination__PredInfo0_16 = ((MR_Word) transform_hlds__termination__conv0_PredInfo0_16);
#line 461 "termination.m"
            {
#line 461 "termination.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__termination__PredInfo0_16, &transform_hlds__termination__ProcTable0_17);
            }
#line 2981 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 462 "termination.m"
            {
#line 462 "termination.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__termination__TypeCtorInfo_31_31, transform_hlds__termination__ProcTable0_17, transform_hlds__termination__ProcId_14, &transform_hlds__termination__conv1_ProcInfo0_18);
            }
#line 462 "termination.m"
            transform_hlds__termination__ProcInfo0_18 = ((MR_Word) transform_hlds__termination__conv1_ProcInfo0_18);
#line 464 "termination.m"
            {
#line 464 "termination.m"
              transform_hlds__termination__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 464 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_25_25, 0) = ((MR_Box) (transform_hlds__termination__ArgSizeInfo_2));
#line 464 "termination.m"
            }
#line 464 "termination.m"
            {
#line 464 "termination.m"
              hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_p_0(transform_hlds__termination__V_25_25, transform_hlds__termination__ProcInfo0_18, &transform_hlds__termination__ProcInfo_19);
            }
#line 465 "termination.m"
            {
#line 465 "termination.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__termination__TypeCtorInfo_31_31, transform_hlds__termination__ProcId_14, ((MR_Box) (transform_hlds__termination__ProcInfo_19)), transform_hlds__termination__ProcTable0_17, &transform_hlds__termination__ProcTable_20);
            }
#line 466 "termination.m"
            {
#line 466 "termination.m"
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__termination__ProcTable_20, transform_hlds__termination__PredInfo0_16, &transform_hlds__termination__PredInfo_21);
            }
#line 467 "termination.m"
            {
#line 467 "termination.m"
              mercury__map__set_4_p_0(transform_hlds__termination__TypeCtorInfo_28_28, transform_hlds__termination__TypeCtorInfo_29_29, ((MR_Box) (transform_hlds__termination__PredId_13)), ((MR_Box) (transform_hlds__termination__PredInfo_21)), transform_hlds__termination__PredTable0_15, &transform_hlds__termination__PredTable_22);
            }
#line 468 "termination.m"
            {
#line 468 "termination.m"
              hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__termination__PredTable_22, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26);
            }
#line 469 "termination.m"
            /* direct tailcall eliminated */
#line 469 "termination.m"
            {
#line 469 "termination.m"
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__PPIds_10;
#line 469 "termination.m"
              MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26;

#line 469 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 469 "termination.m"
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
#line 469 "termination.m"
            }
#line 469 "termination.m"
            continue;
#line 457 "termination.m"
          }
#line 456 "termination.m"
      }
#line 456 "termination.m"
      break;
#line 456 "termination.m"
    }
#line 453 "termination.m"
}

#line 432 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_finite_arg_size_infos_4_p_0(
#line 432 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 432 "termination.m"
  MR_Word transform_hlds__termination__OutputSupplierMap_2,
#line 432 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3,
#line 432 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4)
#line 432 "termination.m"
{
#line 435 "termination.m"
  while (MR_TRUE)
#line 435 "termination.m"
    {
#line 435 "termination.m"
      /* tailcall optimized into a loop */
#line 435 "termination.m"
      {
#line 435 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 435 "termination.m"
        if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 435 "termination.m"
          *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3;
#line 435 "termination.m"
        else
#line 436 "termination.m"
          {
#line 436 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_32_32;
#line 436 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_33_33;
#line 436 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_35_35;
#line 436 "termination.m"
            MR_Word transform_hlds__termination__Soln_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));
#line 436 "termination.m"
            MR_Word transform_hlds__termination__Solns_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
#line 436 "termination.m"
            MR_Word transform_hlds__termination__PPId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__Soln_9, (MR_Integer) 0)));
#line 436 "termination.m"
            MR_Integer transform_hlds__termination__Gamma_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__Soln_9, (MR_Integer) 1)));
#line 436 "termination.m"
            MR_Word transform_hlds__termination__PredId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PPId_13, (MR_Integer) 0)));
#line 436 "termination.m"
            MR_Integer transform_hlds__termination__ProcId_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PPId_13, (MR_Integer) 1)));
#line 436 "termination.m"
            MR_Word transform_hlds__termination__PredTable0_17;
#line 436 "termination.m"
            MR_Word transform_hlds__termination__PredInfo0_18;
#line 436 "termination.m"
            MR_Word transform_hlds__termination__ProcTable0_19;
#line 436 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo_20;
#line 436 "termination.m"
            MR_Word transform_hlds__termination__OutputSuppliers_21;
#line 436 "termination.m"
            MR_Word transform_hlds__termination__ArgSizeInfo_22;
#line 436 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo1_23;
#line 436 "termination.m"
            MR_Word transform_hlds__termination__ProcTable_24;
#line 436 "termination.m"
            MR_Word transform_hlds__termination__PredInfo_25;
#line 436 "termination.m"
            MR_Word transform_hlds__termination__PredTable_26;
#line 436 "termination.m"
            MR_Word transform_hlds__termination__V_29_29;
#line 436 "termination.m"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_30_30;
#line 440 "termination.m"
            MR_Box transform_hlds__termination__conv0_PredInfo0_18;
#line 442 "termination.m"
            MR_Box transform_hlds__termination__conv1_ProcInfo_20;
#line 443 "termination.m"
            MR_Box transform_hlds__termination__conv2_OutputSuppliers_21;

#line 439 "termination.m"
            {
#line 439 "termination.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__termination__PredTable0_17);
            }
#line 3137 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_32_32 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 3139 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_33_33 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 440 "termination.m"
            {
#line 440 "termination.m"
              mercury__map__lookup_3_p_0(transform_hlds__termination__TypeCtorInfo_32_32, transform_hlds__termination__TypeCtorInfo_33_33, transform_hlds__termination__PredTable0_17, ((MR_Box) (transform_hlds__termination__PredId_15)), &transform_hlds__termination__conv0_PredInfo0_18);
            }
#line 440 "termination.m"
            transform_hlds__termination__PredInfo0_18 = ((MR_Word) transform_hlds__termination__conv0_PredInfo0_18);
#line 441 "termination.m"
            {
#line 441 "termination.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__termination__PredInfo0_18, &transform_hlds__termination__ProcTable0_19);
            }
#line 3153 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_35_35 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 442 "termination.m"
            {
#line 442 "termination.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__termination__TypeCtorInfo_35_35, transform_hlds__termination__ProcTable0_19, transform_hlds__termination__ProcId_16, &transform_hlds__termination__conv1_ProcInfo_20);
            }
#line 442 "termination.m"
            transform_hlds__termination__ProcInfo_20 = ((MR_Word) transform_hlds__termination__conv1_ProcInfo_20);
#line 443 "termination.m"
            {
#line 443 "termination.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__termination_scalar_common_1[2], transform_hlds__termination__OutputSupplierMap_2, ((MR_Box) (transform_hlds__termination__PPId_13)), &transform_hlds__termination__conv2_OutputSuppliers_21);
            }
#line 443 "termination.m"
            transform_hlds__termination__OutputSuppliers_21 = ((MR_Word) transform_hlds__termination__conv2_OutputSuppliers_21);
#line 444 "termination.m"
            {
#line 444 "termination.m"
              transform_hlds__termination__ArgSizeInfo_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 444 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeInfo_22, 0) = ((MR_Box) (transform_hlds__termination__Gamma_14));
#line 444 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeInfo_22, 1) = ((MR_Box) (transform_hlds__termination__OutputSuppliers_21));
#line 444 "termination.m"
            }
#line 446 "termination.m"
            {
#line 446 "termination.m"
              transform_hlds__termination__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 446 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_29_29, 0) = ((MR_Box) (transform_hlds__termination__ArgSizeInfo_22));
#line 446 "termination.m"
            }
#line 446 "termination.m"
            {
#line 446 "termination.m"
              hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_p_0(transform_hlds__termination__V_29_29, transform_hlds__termination__ProcInfo_20, &transform_hlds__termination__ProcInfo1_23);
            }
#line 447 "termination.m"
            {
#line 447 "termination.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__termination__TypeCtorInfo_35_35, transform_hlds__termination__ProcId_16, ((MR_Box) (transform_hlds__termination__ProcInfo1_23)), transform_hlds__termination__ProcTable0_19, &transform_hlds__termination__ProcTable_24);
            }
#line 448 "termination.m"
            {
#line 448 "termination.m"
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__termination__ProcTable_24, transform_hlds__termination__PredInfo0_18, &transform_hlds__termination__PredInfo_25);
            }
#line 449 "termination.m"
            {
#line 449 "termination.m"
              mercury__map__set_4_p_0(transform_hlds__termination__TypeCtorInfo_32_32, transform_hlds__termination__TypeCtorInfo_33_33, ((MR_Box) (transform_hlds__termination__PredId_15)), ((MR_Box) (transform_hlds__termination__PredInfo_25)), transform_hlds__termination__PredTable0_17, &transform_hlds__termination__PredTable_26);
            }
#line 450 "termination.m"
            {
#line 450 "termination.m"
              hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__termination__PredTable_26, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_30_30);
            }
#line 451 "termination.m"
            /* direct tailcall eliminated */
#line 451 "termination.m"
            {
#line 451 "termination.m"
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__Solns_10;
#line 451 "termination.m"
              MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_30_30;

#line 451 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 451 "termination.m"
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
#line 451 "termination.m"
            }
#line 451 "termination.m"
            continue;
#line 436 "termination.m"
          }
#line 435 "termination.m"
      }
#line 435 "termination.m"
      break;
#line 435 "termination.m"
    }
#line 432 "termination.m"
}

#line 395 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0_3(
#line 395 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 395 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1)
#line 395 "termination.m"
{
#line 395 "termination.m"
  {
#line 395 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 395 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

#line 395 "termination.m"
    {
#line 395 "termination.m"
      transform_hlds__termination__succeeded = transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__395__1_1_p_0(((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 395 "termination.m"
    return transform_hlds__termination__succeeded;
#line 395 "termination.m"
  }
#line 395 "termination.m"
}

#line 386 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0_2(
#line 386 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 386 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1)
#line 386 "termination.m"
{
#line 386 "termination.m"
  {
#line 386 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 386 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

#line 386 "termination.m"
    {
#line 386 "termination.m"
      transform_hlds__termination__succeeded = transform_hlds__term_util__is_termination_known_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 386 "termination.m"
    return transform_hlds__termination__succeeded;
#line 386 "termination.m"
  }
#line 386 "termination.m"
}

#line 361 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0_1(
#line 361 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 361 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1)
#line 361 "termination.m"
{
#line 361 "termination.m"
  {
#line 361 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 361 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

#line 361 "termination.m"
    {
#line 361 "termination.m"
      transform_hlds__termination__succeeded = transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__361__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 361 "termination.m"
    return transform_hlds__termination__succeeded;
#line 361 "termination.m"
  }
#line 361 "termination.m"
}

#line 356 "termination.m"
static void MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0(
#line 356 "termination.m"
  MR_Word transform_hlds__termination__PassInfo_7,
#line 356 "termination.m"
  MR_Word transform_hlds__termination__SCC_8,
#line 356 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47,
#line 356 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_48,
#line 356 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_0_49,
#line 356 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_Specs_50)
#line 356 "termination.m"
{
#line 360 "termination.m"
  {
#line 360 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 360 "termination.m"
    MR_Word transform_hlds__termination__TypeCtorInfo_64_64;
#line 360 "termination.m"
    MR_Word transform_hlds__termination__IsArgSizeKnown_11;
#line 360 "termination.m"
    MR_Word transform_hlds__termination__SCCArgSizeUnknown_17;
#line 360 "termination.m"
    MR_Word transform_hlds__termination__ArgSizeErrors_18;
#line 360 "termination.m"
    MR_Word transform_hlds__termination__TermErrors_19;
#line 360 "termination.m"
    MR_Word transform_hlds__termination__SCCTerminationUnknown_27;
#line 360 "termination.m"
    MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_55_55;
#line 360 "termination.m"
    MR_Word transform_hlds__termination__V_56_56;
#line 365 "termination.m"
    MR_Word transform_hlds__termination___SCCArgSizeKnown_16;
#line 386 "termination.m"
    MR_Word transform_hlds__termination___SCCTerminationKnown_26;

#line 361 "termination.m"
    {
#line 361 "termination.m"
      transform_hlds__termination__IsArgSizeKnown_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 361 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsArgSizeKnown_11, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_6[0]));
#line 361 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsArgSizeKnown_11, 1) = ((MR_Box) (transform_hlds__termination__analyse_termination_in_scc_6_p_0_1));
#line 361 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsArgSizeKnown_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 361 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsArgSizeKnown_11, 3) = ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47));
#line 361 "termination.m"
    }
#line 3380 "transform_hlds.termination.c"
    transform_hlds__termination__TypeCtorInfo_64_64 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 365 "termination.m"
    {
#line 365 "termination.m"
      mercury__list__filter_4_p_0(transform_hlds__termination__TypeCtorInfo_64_64, transform_hlds__termination__IsArgSizeKnown_11, transform_hlds__termination__SCC_8, &transform_hlds__termination___SCCArgSizeKnown_16, &transform_hlds__termination__SCCArgSizeUnknown_17);
    }
#line 370 "termination.m"
    if ((transform_hlds__termination__SCCArgSizeUnknown_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 367 "termination.m"
      {
#line 368 "termination.m"
        transform_hlds__termination__ArgSizeErrors_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 369 "termination.m"
        transform_hlds__termination__TermErrors_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 367 "termination.m"
        transform_hlds__termination__STATE_VARIABLE_ModuleInfo_55_55 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47;
#line 367 "termination.m"
      }
#line 370 "termination.m"
    else
#line 371 "termination.m"
      {
#line 371 "termination.m"
        MR_Word transform_hlds__termination__ArgSizeResult_22;

#line 372 "termination.m"
        {
#line 372 "termination.m"
          transform_hlds__term_pass1__find_arg_sizes_in_scc_5_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47, transform_hlds__termination__PassInfo_7, transform_hlds__termination__SCCArgSizeUnknown_17, &transform_hlds__termination__ArgSizeResult_22, &transform_hlds__termination__TermErrors_19);
        }
#line 379 "termination.m"
        if (((MR_tag((MR_Word) transform_hlds__termination__ArgSizeResult_22)) == (MR_mktag((MR_Integer) 1))))
#line 380 "termination.m"
          {
#line 380 "termination.m"
            MR_Word transform_hlds__termination__V_53_53;

#line 380 "termination.m"
            transform_hlds__termination__ArgSizeErrors_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__ArgSizeResult_22, (MR_Integer) 0)));
#line 381 "termination.m"
            {
#line 381 "termination.m"
              transform_hlds__termination__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 381 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_53_53, 0) = ((MR_Box) (transform_hlds__termination__ArgSizeErrors_18));
#line 381 "termination.m"
            }
#line 381 "termination.m"
            {
#line 381 "termination.m"
              transform_hlds__termination__set_infinite_arg_size_infos_4_p_0(transform_hlds__termination__SCCArgSizeUnknown_17, transform_hlds__termination__V_53_53, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_55_55);
            }
#line 380 "termination.m"
          }
#line 379 "termination.m"
        else
#line 375 "termination.m"
          {
#line 375 "termination.m"
            MR_Word transform_hlds__termination__Solutions_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeResult_22, (MR_Integer) 0)));
#line 375 "termination.m"
            MR_Word transform_hlds__termination__OutputSupplierMap_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeResult_22, (MR_Integer) 1)));

#line 376 "termination.m"
            {
#line 376 "termination.m"
              transform_hlds__termination__set_finite_arg_size_infos_4_p_0(transform_hlds__termination__Solutions_23, transform_hlds__termination__OutputSupplierMap_24, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_55_55);
            }
#line 378 "termination.m"
            transform_hlds__termination__ArgSizeErrors_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 375 "termination.m"
          }
#line 371 "termination.m"
      }
#line 386 "termination.m"
    {
#line 386 "termination.m"
      transform_hlds__termination__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 386 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_56_56, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_6[0]));
#line 386 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_56_56, 1) = ((MR_Box) (transform_hlds__termination__analyse_termination_in_scc_6_p_0_2));
#line 386 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 386 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_56_56, 3) = ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_55_55));
#line 386 "termination.m"
    }
#line 386 "termination.m"
    {
#line 386 "termination.m"
      mercury__list__filter_4_p_0(transform_hlds__termination__TypeCtorInfo_64_64, transform_hlds__termination__V_56_56, transform_hlds__termination__SCC_8, &transform_hlds__termination___SCCTerminationKnown_26, &transform_hlds__termination__SCCTerminationUnknown_27);
    }
#line 393 "termination.m"
    if ((transform_hlds__termination__SCCTerminationUnknown_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 392 "termination.m"
      {
#line 392 "termination.m"
        *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_48 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_55_55;
#line 392 "termination.m"
        *transform_hlds__termination__STATE_VARIABLE_Specs_50 = transform_hlds__termination__STATE_VARIABLE_Specs_0_49;
#line 392 "termination.m"
      }
#line 393 "termination.m"
    else
#line 394 "termination.m"
      {
#line 394 "termination.m"
        MR_Word transform_hlds__termination__TypeCtorInfo_66_66 = (MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0;
#line 394 "termination.m"
        MR_Word transform_hlds__termination__FatalErrors_34;
#line 394 "termination.m"
        MR_Word transform_hlds__termination__BothErrors_35;

#line 399 "termination.m"
        {
#line 399 "termination.m"
          mercury__list__filter_3_p_0(transform_hlds__termination__TypeCtorInfo_66_66, (MR_Word) &transform_hlds__termination_scalar_common_2[4], transform_hlds__termination__ArgSizeErrors_18, &transform_hlds__termination__FatalErrors_34);
        }
#line 400 "termination.m"
        {
#line 400 "termination.m"
          transform_hlds__termination__BothErrors_35 = mercury__list__f_43_43_2_f_0(transform_hlds__termination__TypeCtorInfo_66_66, transform_hlds__termination__TermErrors_19, transform_hlds__termination__FatalErrors_34);
        }
#line 3505 "transform_hlds.termination.c"
        if ((transform_hlds__termination__BothErrors_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3507 "transform_hlds.termination.c"
          {
#line 3509 "transform_hlds.termination.c"
            MR_Word transform_hlds__termination__TerminationResult_42;
#line 3511 "transform_hlds.termination.c"
            MR_Word transform_hlds__termination__Globals_43;
#line 3513 "transform_hlds.termination.c"
            MR_Integer transform_hlds__termination__SingleArgs_44;

#line 410 "termination.m"
            {
#line 410 "termination.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_55_55, &transform_hlds__termination__Globals_43);
            }
#line 411 "termination.m"
            {
#line 411 "termination.m"
              libs__globals__lookup_int_option_3_p_0(transform_hlds__termination__Globals_43, (MR_Integer) 412, &transform_hlds__termination__SingleArgs_44);
            }
#line 413 "termination.m"
            {
#line 413 "termination.m"
              transform_hlds__term_pass2__prove_termination_in_scc_5_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_55_55, transform_hlds__termination__PassInfo_7, transform_hlds__termination__SCCTerminationUnknown_27, transform_hlds__termination__SingleArgs_44, &transform_hlds__termination__TerminationResult_42);
            }
#line 416 "termination.m"
            {
#line 416 "termination.m"
              transform_hlds__termination__set_termination_infos_4_p_0(transform_hlds__termination__SCCTerminationUnknown_27, transform_hlds__termination__TerminationResult_42, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_55_55, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_48);
            }
#line 422 "termination.m"
            if (((MR_tag((MR_Word) transform_hlds__termination__TerminationResult_42)) == (MR_mktag((MR_Integer) 1))))
#line 419 "termination.m"
              {
#line 419 "termination.m"
                MR_Word transform_hlds__termination__TerminationErrors_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__TerminationResult_42, (MR_Integer) 0)));

#line 420 "termination.m"
                {
#line 420 "termination.m"
                  transform_hlds__termination__maybe_report_termination_errors_5_p_0(*transform_hlds__termination__STATE_VARIABLE_ModuleInfo_48, transform_hlds__termination__SCC_8, transform_hlds__termination__TerminationErrors_45, transform_hlds__termination__STATE_VARIABLE_Specs_0_49, transform_hlds__termination__STATE_VARIABLE_Specs_50);
                }
#line 419 "termination.m"
              }
#line 422 "termination.m"
            else
#line 423 "termination.m"
              *transform_hlds__termination__STATE_VARIABLE_Specs_50 = transform_hlds__termination__STATE_VARIABLE_Specs_0_49;
#line 3554 "transform_hlds.termination.c"
          }
#line 3556 "transform_hlds.termination.c"
        else
#line 3558 "transform_hlds.termination.c"
          {
#line 3560 "transform_hlds.termination.c"
            MR_Integer transform_hlds__termination__MaxErrors_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PassInfo_7, (MR_Integer) 1)));
#line 3562 "transform_hlds.termination.c"
            MR_Word transform_hlds__termination__TerminationResult_69;
#line 3564 "transform_hlds.termination.c"
            MR_Word transform_hlds__termination__TerminationErrors_70;
#line 405 "termination.m"
            MR_Word transform_hlds__termination__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PassInfo_7, (MR_Integer) 0)));
#line 405 "termination.m"
            MR_Integer transform_hlds__termination__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PassInfo_7, (MR_Integer) 2)));

#line 406 "termination.m"
            {
#line 406 "termination.m"
              mercury__list__take_upto_3_p_0(transform_hlds__termination__TypeCtorInfo_66_66, transform_hlds__termination__MaxErrors_39, transform_hlds__termination__BothErrors_35, &transform_hlds__termination__TerminationErrors_70);
            }
#line 407 "termination.m"
            {
#line 407 "termination.m"
              transform_hlds__termination__TerminationResult_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 407 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__TerminationResult_69, 0) = ((MR_Box) (transform_hlds__termination__TerminationErrors_70));
#line 407 "termination.m"
            }
#line 416 "termination.m"
            {
#line 416 "termination.m"
              transform_hlds__termination__set_termination_infos_4_p_0(transform_hlds__termination__SCCTerminationUnknown_27, transform_hlds__termination__TerminationResult_69, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_55_55, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_48);
            }
#line 420 "termination.m"
            {
#line 420 "termination.m"
              transform_hlds__termination__maybe_report_termination_errors_5_p_0(*transform_hlds__termination__STATE_VARIABLE_ModuleInfo_48, transform_hlds__termination__SCC_8, transform_hlds__termination__TerminationErrors_70, transform_hlds__termination__STATE_VARIABLE_Specs_0_49, transform_hlds__termination__STATE_VARIABLE_Specs_50);
            }
#line 3594 "transform_hlds.termination.c"
          }
#line 394 "termination.m"
      }
#line 360 "termination.m"
  }
#line 356 "termination.m"
}

#line 325 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__check_procs_known_term_3_p_0(
#line 325 "termination.m"
  MR_Word transform_hlds__termination__Status_1,
#line 325 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_2,
#line 325 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_3)
#line 325 "termination.m"
{
#line 328 "termination.m"
  while (MR_TRUE)
#line 328 "termination.m"
    {
#line 328 "termination.m"
      /* tailcall optimized into a loop */
#line 328 "termination.m"
      {
#line 328 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 328 "termination.m"
        if ((transform_hlds__termination__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 328 "termination.m"
          transform_hlds__termination__succeeded = MR_TRUE;
#line 328 "termination.m"
        else
#line 329 "termination.m"
          {
#line 329 "termination.m"
            MR_Word transform_hlds__termination__PPId_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__2_2, (MR_Integer) 0)));
#line 329 "termination.m"
            MR_Word transform_hlds__termination__PPIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__2_2, (MR_Integer) 1)));
#line 329 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo_11;
#line 329 "termination.m"
            MR_Word transform_hlds__termination__MaybeTerm_12;
#line 329 "termination.m"
            MR_Word transform_hlds__termination__PPIdStatus_13;
#line 330 "termination.m"
            MR_Word transform_hlds__termination__V_10_10;

#line 330 "termination.m"
            {
#line 330 "termination.m"
              hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__termination__ModuleInfo_3, transform_hlds__termination__PPId_7, &transform_hlds__termination__V_10_10, &transform_hlds__termination__ProcInfo_11);
            }
#line 331 "termination.m"
            {
#line 331 "termination.m"
              hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__termination__ProcInfo_11, &transform_hlds__termination__MaybeTerm_12);
            }
#line 335 "termination.m"
            if ((transform_hlds__termination__MaybeTerm_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 333 "termination.m"
              {
#line 334 "termination.m"
                {
#line 334 "termination.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.termination", (MR_String) "predicate \140transform_hlds.termination.check_procs_known_term\'/3", (MR_String) "no termination info for procedure");
                }
#line 333 "termination.m"
              }
#line 335 "termination.m"
            else
#line 336 "termination.m"
              transform_hlds__termination__PPIdStatus_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__MaybeTerm_12, (MR_Integer) 0)));
#line 341 "termination.m"
            if (((MR_tag((MR_Word) transform_hlds__termination__Status_1)) == (MR_mktag((MR_Integer) 1))))
#line 343 "termination.m"
              {
#line 343 "termination.m"
                MR_Word transform_hlds__termination__V_17_17;

#line 343 "termination.m"
                transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__PPIdStatus_13)) == (MR_mktag((MR_Integer) 1)));
#line 343 "termination.m"
                if (transform_hlds__termination__succeeded)
#line 343 "termination.m"
                  transform_hlds__termination__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__PPIdStatus_13, (MR_Integer) 0)));
#line 343 "termination.m"
              }
#line 341 "termination.m"
            else
#line 340 "termination.m"
              transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__PPIdStatus_13)) == (MR_mktag((MR_Integer) 0)));
#line 329 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 345 "termination.m"
              {
#line 345 "termination.m"
                /* direct tailcall eliminated */
#line 345 "termination.m"
                {
#line 345 "termination.m"
                  MR_Word transform_hlds__termination__HeadVar__2__tmp_copy_2 = transform_hlds__termination__PPIds_8;

#line 345 "termination.m"
                  transform_hlds__termination__HeadVar__2_2 = transform_hlds__termination__HeadVar__2__tmp_copy_2;
#line 345 "termination.m"
                }
#line 345 "termination.m"
                continue;
#line 345 "termination.m"
              }
#line 329 "termination.m"
          }
#line 328 "termination.m"
        return transform_hlds__termination__succeeded;
#line 328 "termination.m"
      }
#line 328 "termination.m"
      break;
#line 328 "termination.m"
    }
#line 325 "termination.m"
}

#line 308 "termination.m"
static MR_Box MR_CALL 
transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0_2(
#line 308 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 308 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1)
#line 308 "termination.m"
{
#line 308 "termination.m"
  {
#line 308 "termination.m"
    MR_Box transform_hlds__termination__wrapper_arg_2;
#line 308 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;
#line 308 "termination.m"
    MR_Word transform_hlds__termination__conv0_LambdaHeadVar__2_42;

#line 308 "termination.m"
    {
#line 308 "termination.m"
      transform_hlds__termination__conv0_LambdaHeadVar__2_42 = transform_hlds__termination__IntroducedFrom__func__check_scc_pragmas_are_consistent__308__1_1_f_0(((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 308 "termination.m"
    transform_hlds__termination__wrapper_arg_2 = ((MR_Box) (transform_hlds__termination__conv0_LambdaHeadVar__2_42));
#line 308 "termination.m"
    return transform_hlds__termination__wrapper_arg_2;
#line 308 "termination.m"
  }
#line 308 "termination.m"
}

#line 276 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0_1(
#line 276 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 276 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1)
#line 276 "termination.m"
{
#line 276 "termination.m"
  {
#line 276 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 276 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

#line 276 "termination.m"
    {
#line 276 "termination.m"
      transform_hlds__termination__succeeded = transform_hlds__term_util__is_termination_known_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 276 "termination.m"
    return transform_hlds__termination__succeeded;
#line 276 "termination.m"
  }
#line 276 "termination.m"
}

#line 271 "termination.m"
static void MR_CALL 
transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0(
#line 271 "termination.m"
  MR_Word transform_hlds__termination__SCC_6,
#line 271 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26,
#line 271 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27,
#line 271 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_0_28,
#line 271 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_Specs_29)
#line 271 "termination.m"
{
#line 275 "termination.m"
  {
#line 275 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 275 "termination.m"
    MR_Word transform_hlds__termination__TypeCtorInfo_66_66;
#line 275 "termination.m"
    MR_Word transform_hlds__termination__SCCTerminationKnown_9;
#line 275 "termination.m"
    MR_Word transform_hlds__termination__SCCTerminationUnknown_10;
#line 275 "termination.m"
    MR_Word transform_hlds__termination__V_30_30;

#line 276 "termination.m"
    {
#line 276 "termination.m"
      transform_hlds__termination__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 276 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_30_30, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_6[0]));
#line 276 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_30_30, 1) = ((MR_Box) (transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0_1));
#line 276 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 276 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_30_30, 3) = ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26));
#line 276 "termination.m"
    }
#line 3824 "transform_hlds.termination.c"
    transform_hlds__termination__TypeCtorInfo_66_66 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 276 "termination.m"
    {
#line 276 "termination.m"
      mercury__list__filter_4_p_0(transform_hlds__termination__TypeCtorInfo_66_66, transform_hlds__termination__V_30_30, transform_hlds__termination__SCC_6, &transform_hlds__termination__SCCTerminationKnown_9, &transform_hlds__termination__SCCTerminationUnknown_10);
    }
#line 280 "termination.m"
    if ((transform_hlds__termination__SCCTerminationKnown_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 279 "termination.m"
      {
#line 279 "termination.m"
        *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26;
#line 279 "termination.m"
        *transform_hlds__termination__STATE_VARIABLE_Specs_29 = transform_hlds__termination__STATE_VARIABLE_Specs_0_28;
#line 279 "termination.m"
      }
#line 280 "termination.m"
    else
#line 281 "termination.m"
      {
#line 281 "termination.m"
        MR_Word transform_hlds__termination__KnownPPId_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__SCCTerminationKnown_9, (MR_Integer) 0)));
#line 281 "termination.m"
        MR_Word transform_hlds__termination__KnownProcInfo_14;
#line 281 "termination.m"
        MR_Word transform_hlds__termination__MaybeKnownTerm_15;
#line 281 "termination.m"
        MR_Word transform_hlds__termination__KnownTermStatus_16;
#line 281 "termination.m"
        MR_Word transform_hlds__termination__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__SCCTerminationKnown_9, (MR_Integer) 1)));
#line 282 "termination.m"
        MR_Word transform_hlds__termination__V_13_13;
#line 329 "termination.m"
        MR_Word transform_hlds__termination__PPId_72;
#line 329 "termination.m"
        MR_Word transform_hlds__termination__PPIds_73;
#line 329 "termination.m"
        MR_Word transform_hlds__termination__ProcInfo_76;
#line 329 "termination.m"
        MR_Word transform_hlds__termination__MaybeTerm_77;
#line 329 "termination.m"
        MR_Word transform_hlds__termination__PPIdStatus_78;
#line 330 "termination.m"
        MR_Word transform_hlds__termination__V_75_75;

#line 282 "termination.m"
        {
#line 282 "termination.m"
          hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26, transform_hlds__termination__KnownPPId_11, &transform_hlds__termination__V_13_13, &transform_hlds__termination__KnownProcInfo_14);
        }
#line 283 "termination.m"
        {
#line 283 "termination.m"
          hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__termination__KnownProcInfo_14, &transform_hlds__termination__MaybeKnownTerm_15);
        }
#line 287 "termination.m"
        if ((transform_hlds__termination__MaybeKnownTerm_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 285 "termination.m"
          {
#line 286 "termination.m"
            {
#line 286 "termination.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.termination", (MR_String) "predicate \140transform_hlds.termination.check_scc_pragmas_are_consistent\'/5", (MR_String) "no termination info found");
#line 286 "termination.m"
              return;
            }
#line 285 "termination.m"
          }
#line 287 "termination.m"
        else
#line 288 "termination.m"
          transform_hlds__termination__KnownTermStatus_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__MaybeKnownTerm_15, (MR_Integer) 0)));
#line 329 "termination.m"
        transform_hlds__termination__PPId_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__SCCTerminationKnown_9, (MR_Integer) 0)));
#line 329 "termination.m"
        transform_hlds__termination__PPIds_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__SCCTerminationKnown_9, (MR_Integer) 1)));
#line 330 "termination.m"
        {
#line 330 "termination.m"
          hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26, transform_hlds__termination__PPId_72, &transform_hlds__termination__V_75_75, &transform_hlds__termination__ProcInfo_76);
        }
#line 331 "termination.m"
        {
#line 331 "termination.m"
          hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__termination__ProcInfo_76, &transform_hlds__termination__MaybeTerm_77);
        }
#line 335 "termination.m"
        if ((transform_hlds__termination__MaybeTerm_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 333 "termination.m"
          {
#line 334 "termination.m"
            {
#line 334 "termination.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.termination", (MR_String) "predicate \140transform_hlds.termination.check_procs_known_term\'/3", (MR_String) "no termination info for procedure");
#line 334 "termination.m"
              return;
            }
#line 333 "termination.m"
          }
#line 335 "termination.m"
        else
#line 336 "termination.m"
          transform_hlds__termination__PPIdStatus_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__MaybeTerm_77, (MR_Integer) 0)));
#line 341 "termination.m"
        if (((MR_tag((MR_Word) transform_hlds__termination__KnownTermStatus_16)) == (MR_mktag((MR_Integer) 1))))
#line 343 "termination.m"
          {
#line 343 "termination.m"
            MR_Word transform_hlds__termination__V_82_82;

#line 343 "termination.m"
            transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__PPIdStatus_78)) == (MR_mktag((MR_Integer) 1)));
#line 343 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 343 "termination.m"
              transform_hlds__termination__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__PPIdStatus_78, (MR_Integer) 0)));
#line 343 "termination.m"
          }
#line 341 "termination.m"
        else
#line 340 "termination.m"
          transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__PPIdStatus_78)) == (MR_mktag((MR_Integer) 0)));
#line 329 "termination.m"
        if (transform_hlds__termination__succeeded)
#line 345 "termination.m"
          {
#line 345 "termination.m"
            transform_hlds__termination__succeeded = transform_hlds__termination__check_procs_known_term_3_p_0(transform_hlds__termination__KnownTermStatus_16, transform_hlds__termination__PPIds_73, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26);
          }
#line 290 "termination.m"
        if (transform_hlds__termination__succeeded)
#line 297 "termination.m"
          {
#line 297 "termination.m"
            {
#line 297 "termination.m"
              transform_hlds__termination__set_termination_infos_4_p_0(transform_hlds__termination__SCCTerminationUnknown_10, transform_hlds__termination__KnownTermStatus_16, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27);
            }
#line 297 "termination.m"
            *transform_hlds__termination__STATE_VARIABLE_Specs_29 = transform_hlds__termination__STATE_VARIABLE_Specs_0_28;
#line 297 "termination.m"
          }
#line 290 "termination.m"
        else
#line 303 "termination.m"
          {
#line 303 "termination.m"
            MR_Word transform_hlds__termination__Context_17;
#line 303 "termination.m"
            MR_Word transform_hlds__termination__NewTermStatus_18;
#line 303 "termination.m"
            MR_Word transform_hlds__termination__PredIds_19;
#line 303 "termination.m"
            MR_Word transform_hlds__termination__PredNamePieces_22;
#line 303 "termination.m"
            MR_Word transform_hlds__termination__Pieces_23;
#line 303 "termination.m"
            MR_Word transform_hlds__termination__Msg_24;
#line 303 "termination.m"
            MR_Word transform_hlds__termination__Spec_25;
#line 303 "termination.m"
            MR_Word transform_hlds__termination__V_35_35;
#line 303 "termination.m"
            MR_Word transform_hlds__termination__V_36_36;
#line 303 "termination.m"
            MR_Word transform_hlds__termination__V_44_44;
#line 303 "termination.m"
            MR_Word transform_hlds__termination__V_54_54;
#line 303 "termination.m"
            MR_Word transform_hlds__termination__V_55_55;
#line 303 "termination.m"
            MR_Word transform_hlds__termination__V_59_59;

#line 303 "termination.m"
            {
#line 303 "termination.m"
              transform_hlds__term_util__get_context_from_scc_3_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26, transform_hlds__termination__SCCTerminationKnown_9, &transform_hlds__termination__Context_17);
            }
#line 305 "termination.m"
            {
#line 305 "termination.m"
              transform_hlds__termination__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 305 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__V_36_36, 0) = ((MR_Box) (transform_hlds__termination__Context_17));
#line 305 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 305 "termination.m"
            }
#line 305 "termination.m"
            {
#line 305 "termination.m"
              transform_hlds__termination__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 305 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_35_35, 0) = ((MR_Box) (transform_hlds__termination__V_36_36));
#line 305 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 305 "termination.m"
            }
#line 305 "termination.m"
            {
#line 305 "termination.m"
              transform_hlds__termination__NewTermStatus_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 305 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__NewTermStatus_18, 0) = ((MR_Box) (transform_hlds__termination__V_35_35));
#line 305 "termination.m"
            }
#line 306 "termination.m"
            {
#line 306 "termination.m"
              transform_hlds__termination__set_termination_infos_4_p_0(transform_hlds__termination__SCC_6, transform_hlds__termination__NewTermStatus_18, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27);
            }
#line 308 "termination.m"
            {
#line 308 "termination.m"
              transform_hlds__termination__PredIds_19 = mercury__list__map_2_f_0(transform_hlds__termination__TypeCtorInfo_66_66, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &transform_hlds__termination_scalar_common_2[3], transform_hlds__termination__SCCTerminationKnown_9);
            }
#line 310 "termination.m"
            {
#line 310 "termination.m"
              transform_hlds__termination__PredNamePieces_22 = hlds__hlds_error_util__describe_several_pred_names_3_f_0(*transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27, (MR_Integer) 0, transform_hlds__termination__PredIds_19);
            }
#line 313 "termination.m"
            {
#line 313 "termination.m"
              transform_hlds__termination__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_44_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[36])));
#line 313 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_44_44, 1) = ((MR_Box) (transform_hlds__termination__PredNamePieces_22));
#line 313 "termination.m"
            }
#line 313 "termination.m"
            {
#line 313 "termination.m"
              transform_hlds__termination__Pieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__termination__V_44_44, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[26]));
            }
#line 316 "termination.m"
            {
#line 316 "termination.m"
              transform_hlds__termination__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 316 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__V_55_55, 0) = ((MR_Box) (transform_hlds__termination__Pieces_23));
#line 316 "termination.m"
            }
#line 316 "termination.m"
            {
#line 316 "termination.m"
              transform_hlds__termination__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 316 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_54_54, 0) = ((MR_Box) (transform_hlds__termination__V_55_55));
#line 316 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 316 "termination.m"
            }
#line 316 "termination.m"
            {
#line 316 "termination.m"
              transform_hlds__termination__Msg_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 316 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__Msg_24, 0) = ((MR_Box) (transform_hlds__termination__Context_17));
#line 316 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__Msg_24, 1) = ((MR_Box) (transform_hlds__termination__V_54_54));
#line 316 "termination.m"
            }
#line 317 "termination.m"
            {
#line 317 "termination.m"
              transform_hlds__termination__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 317 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_59_59, 0) = ((MR_Box) (transform_hlds__termination__Msg_24));
#line 317 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 317 "termination.m"
            }
#line 317 "termination.m"
            {
#line 317 "termination.m"
              transform_hlds__termination__Spec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 317 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 317 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 317 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_25, 2) = ((MR_Box) (transform_hlds__termination__V_59_59));
#line 317 "termination.m"
            }
#line 318 "termination.m"
            {
#line 318 "termination.m"
              MR_Word base;
#line 318 "termination.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 318 "termination.m"
              *transform_hlds__termination__STATE_VARIABLE_Specs_29 = base;
#line 318 "termination.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__termination__Spec_25));
#line 318 "termination.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_Specs_0_28));
#line 318 "termination.m"
            }
#line 303 "termination.m"
          }
#line 281 "termination.m"
      }
#line 275 "termination.m"
  }
#line 271 "termination.m"
}

#line 170 "termination.m"
static void MR_CALL 
transform_hlds__termination__check_foreign_code_attributes_of_proc_7_p_0(
#line 170 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_8,
#line 170 "termination.m"
  MR_Word transform_hlds__termination__PPId_9,
#line 170 "termination.m"
  MR_Word transform_hlds__termination__Attributes_10,
#line 170 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25,
#line 170 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcInfo_26,
#line 170 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_0_27,
#line 170 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_Specs_28)
#line 170 "termination.m"
{
#line 176 "termination.m"
  {
#line 176 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 176 "termination.m"
    MR_Word transform_hlds__termination__MaybeTermination_13;
#line 176 "termination.m"
    MR_Word transform_hlds__termination__Context_14;

#line 177 "termination.m"
    {
#line 177 "termination.m"
      hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25, &transform_hlds__termination__MaybeTermination_13);
    }
#line 178 "termination.m"
    {
#line 178 "termination.m"
      hlds__hlds_pred__proc_info_get_context_2_p_0(transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25, &transform_hlds__termination__Context_14);
    }
#line 189 "termination.m"
    if ((transform_hlds__termination__MaybeTermination_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 180 "termination.m"
      {
#line 181 "termination.m"
        {
#line 181 "termination.m"
          transform_hlds__termination__succeeded = transform_hlds__term_util__attributes_imply_termination_1_p_0(transform_hlds__termination__Attributes_10);
        }
#line 181 "termination.m"
        if (transform_hlds__termination__succeeded)
#line 182 "termination.m"
          {
#line 182 "termination.m"
            mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 183 "termination.m"
            {
#line 183 "termination.m"
              hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_5[1]), transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25, transform_hlds__termination__STATE_VARIABLE_ProcInfo_26);
            }
#line 182 "termination.m"
          }
#line 181 "termination.m"
        else
#line 185 "termination.m"
          {
#line 185 "termination.m"
            MR_Word transform_hlds__termination__TermErr_16;
#line 185 "termination.m"
            MR_Word transform_hlds__termination__V_104_104;
#line 185 "termination.m"
            MR_Word transform_hlds__termination__V_105_105;
#line 185 "termination.m"
            MR_Word transform_hlds__termination__V_106_106;
#line 185 "termination.m"
            MR_Word transform_hlds__termination__TermStatus_109;

#line 185 "termination.m"
            {
#line 185 "termination.m"
              transform_hlds__termination__V_104_104 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 185 "termination.m"
              MR_hl_field(MR_mktag(3), transform_hlds__termination__V_104_104, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 185 "termination.m"
              MR_hl_field(MR_mktag(3), transform_hlds__termination__V_104_104, 1) = ((MR_Box) (transform_hlds__termination__PPId_9));
#line 185 "termination.m"
            }
#line 185 "termination.m"
            {
#line 185 "termination.m"
              transform_hlds__termination__TermErr_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 185 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__TermErr_16, 0) = ((MR_Box) (transform_hlds__termination__Context_14));
#line 185 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__TermErr_16, 1) = ((MR_Box) (transform_hlds__termination__V_104_104));
#line 185 "termination.m"
            }
#line 186 "termination.m"
            {
#line 186 "termination.m"
              transform_hlds__termination__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 186 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_106_106, 0) = ((MR_Box) (transform_hlds__termination__TermErr_16));
#line 186 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_106_106, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 186 "termination.m"
            }
#line 186 "termination.m"
            {
#line 186 "termination.m"
              transform_hlds__termination__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 186 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_105_105, 0) = ((MR_Box) (transform_hlds__termination__V_106_106));
#line 186 "termination.m"
            }
#line 186 "termination.m"
            {
#line 186 "termination.m"
              transform_hlds__termination__TermStatus_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 186 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__TermStatus_109, 0) = ((MR_Box) (transform_hlds__termination__V_105_105));
#line 186 "termination.m"
            }
#line 187 "termination.m"
            {
#line 187 "termination.m"
              hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(transform_hlds__termination__TermStatus_109, transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25, transform_hlds__termination__STATE_VARIABLE_ProcInfo_26);
            }
#line 185 "termination.m"
          }
#line 180 "termination.m"
        *transform_hlds__termination__STATE_VARIABLE_Specs_28 = transform_hlds__termination__STATE_VARIABLE_Specs_0_27;
#line 180 "termination.m"
      }
#line 189 "termination.m"
    else
#line 189 "termination.m"
      {
#line 189 "termination.m"
        MR_Word transform_hlds__termination__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__MaybeTermination_13, (MR_Integer) 0)));

#line 189 "termination.m"
        if (((MR_tag((MR_Word) transform_hlds__termination__V_137_137)) == (MR_mktag((MR_Integer) 1))))
#line 218 "termination.m"
          {
#line 218 "termination.m"
            MR_Word transform_hlds__termination__TermErrs0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__V_137_137, (MR_Integer) 0)));
#line 218 "termination.m"
            MR_Word transform_hlds__termination__ProcTerminates_130;

#line 219 "termination.m"
            {
#line 219 "termination.m"
              transform_hlds__termination__ProcTerminates_130 = parse_tree__prog_data__get_terminates_1_f_0(transform_hlds__termination__Attributes_10);
            }
#line 236 "termination.m"
#line 236 "termination.m"
            switch (transform_hlds__termination__ProcTerminates_130) {
#line 236 "termination.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 236 "termination.m"
              case (MR_Integer) 2:
#line 238 "termination.m"
                {
#line 238 "termination.m"
                  *transform_hlds__termination__STATE_VARIABLE_ProcInfo_26 = transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25;
#line 238 "termination.m"
                  *transform_hlds__termination__STATE_VARIABLE_Specs_28 = transform_hlds__termination__STATE_VARIABLE_Specs_0_27;
#line 238 "termination.m"
                }
#line 236 "termination.m"
                break;
#line 236 "termination.m"
              case (MR_Integer) 1:
#line 237 "termination.m"
                {
#line 237 "termination.m"
                  *transform_hlds__termination__STATE_VARIABLE_ProcInfo_26 = transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25;
#line 237 "termination.m"
                  *transform_hlds__termination__STATE_VARIABLE_Specs_28 = transform_hlds__termination__STATE_VARIABLE_Specs_0_27;
#line 237 "termination.m"
                }
#line 236 "termination.m"
                break;
#line 236 "termination.m"
              case (MR_Integer) 0:
#line 221 "termination.m"
                {
#line 221 "termination.m"
                  MR_Word transform_hlds__termination__TermErrs_24;
#line 221 "termination.m"
                  MR_Word transform_hlds__termination__V_31_31;
#line 221 "termination.m"
                  MR_Word transform_hlds__termination__V_34_34;
#line 221 "termination.m"
                  MR_Word transform_hlds__termination__V_56_56;
#line 221 "termination.m"
                  MR_Word transform_hlds__termination__V_57_57;
#line 221 "termination.m"
                  MR_Word transform_hlds__termination__V_61_61;
#line 221 "termination.m"
                  MR_Word transform_hlds__termination__TermStatus_116;
#line 221 "termination.m"
                  MR_Word transform_hlds__termination__TermErr_117;
#line 221 "termination.m"
                  MR_Word transform_hlds__termination__ProcNamePieces_118;
#line 221 "termination.m"
                  MR_Word transform_hlds__termination__Pieces_119;
#line 221 "termination.m"
                  MR_Word transform_hlds__termination__Msg_120;
#line 221 "termination.m"
                  MR_Word transform_hlds__termination__Spec_121;

#line 222 "termination.m"
                  {
#line 222 "termination.m"
                    transform_hlds__termination__TermErr_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 222 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__TermErr_117, 0) = ((MR_Box) (transform_hlds__termination__Context_14));
#line 222 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__TermErr_117, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 222 "termination.m"
                  }
#line 223 "termination.m"
                  {
#line 223 "termination.m"
                    transform_hlds__termination__TermErrs_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 223 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__TermErrs_24, 0) = ((MR_Box) (transform_hlds__termination__TermErr_117));
#line 223 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__TermErrs_24, 1) = ((MR_Box) (transform_hlds__termination__TermErrs0_23));
#line 223 "termination.m"
                  }
#line 224 "termination.m"
                  {
#line 224 "termination.m"
                    transform_hlds__termination__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 224 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_31_31, 0) = ((MR_Box) (transform_hlds__termination__TermErrs_24));
#line 224 "termination.m"
                  }
#line 224 "termination.m"
                  {
#line 224 "termination.m"
                    transform_hlds__termination__TermStatus_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 224 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__TermStatus_116, 0) = ((MR_Box) (transform_hlds__termination__V_31_31));
#line 224 "termination.m"
                  }
#line 226 "termination.m"
                  {
#line 226 "termination.m"
                    hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(transform_hlds__termination__TermStatus_116, transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25, transform_hlds__termination__STATE_VARIABLE_ProcInfo_26);
                  }
#line 227 "termination.m"
                  {
#line 227 "termination.m"
                    transform_hlds__termination__ProcNamePieces_118 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__termination__ModuleInfo_8, (MR_Integer) 0, transform_hlds__termination__PPId_9);
                  }
#line 229 "termination.m"
                  {
#line 229 "termination.m"
                    transform_hlds__termination__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 229 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_34_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[36])));
#line 229 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_34_34, 1) = ((MR_Box) (transform_hlds__termination__ProcNamePieces_118));
#line 229 "termination.m"
                  }
#line 229 "termination.m"
                  {
#line 229 "termination.m"
                    transform_hlds__termination__Pieces_119 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__termination__V_34_34, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[15]));
                  }
#line 233 "termination.m"
                  {
#line 233 "termination.m"
                    transform_hlds__termination__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 233 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__V_57_57, 0) = ((MR_Box) (transform_hlds__termination__Pieces_119));
#line 233 "termination.m"
                  }
#line 233 "termination.m"
                  {
#line 233 "termination.m"
                    transform_hlds__termination__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 233 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_56_56, 0) = ((MR_Box) (transform_hlds__termination__V_57_57));
#line 233 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 233 "termination.m"
                  }
#line 233 "termination.m"
                  {
#line 233 "termination.m"
                    transform_hlds__termination__Msg_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 233 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__Msg_120, 0) = ((MR_Box) (transform_hlds__termination__Context_14));
#line 233 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__Msg_120, 1) = ((MR_Box) (transform_hlds__termination__V_56_56));
#line 233 "termination.m"
                  }
#line 234 "termination.m"
                  {
#line 234 "termination.m"
                    transform_hlds__termination__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 234 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_61_61, 0) = ((MR_Box) (transform_hlds__termination__Msg_120));
#line 234 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 234 "termination.m"
                  }
#line 234 "termination.m"
                  {
#line 234 "termination.m"
                    transform_hlds__termination__Spec_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 234 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_121, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 234 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 234 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_121, 2) = ((MR_Box) (transform_hlds__termination__V_61_61));
#line 234 "termination.m"
                  }
#line 235 "termination.m"
                  {
#line 235 "termination.m"
                    MR_Word base;
#line 235 "termination.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 235 "termination.m"
                    *transform_hlds__termination__STATE_VARIABLE_Specs_28 = base;
#line 235 "termination.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__termination__Spec_121));
#line 235 "termination.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_Specs_0_27));
#line 235 "termination.m"
                  }
#line 221 "termination.m"
                }
#line 236 "termination.m"
                break;
#line 236 "termination.m"
            }
#line 218 "termination.m"
          }
#line 189 "termination.m"
        else
#line 192 "termination.m"
          {
#line 192 "termination.m"
            MR_Word transform_hlds__termination__ProcTerminates_18;

#line 193 "termination.m"
            {
#line 193 "termination.m"
              transform_hlds__termination__ProcTerminates_18 = parse_tree__prog_data__get_terminates_1_f_0(transform_hlds__termination__Attributes_10);
            }
#line 209 "termination.m"
#line 209 "termination.m"
            switch (transform_hlds__termination__ProcTerminates_18) {
#line 209 "termination.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 209 "termination.m"
              case (MR_Integer) 2:
#line 211 "termination.m"
                {
#line 211 "termination.m"
                  *transform_hlds__termination__STATE_VARIABLE_ProcInfo_26 = transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25;
#line 211 "termination.m"
                  *transform_hlds__termination__STATE_VARIABLE_Specs_28 = transform_hlds__termination__STATE_VARIABLE_Specs_0_27;
#line 211 "termination.m"
                }
#line 209 "termination.m"
                break;
#line 209 "termination.m"
              case (MR_Integer) 1:
#line 195 "termination.m"
                {
#line 195 "termination.m"
                  MR_Word transform_hlds__termination__ProcNamePieces_19;
#line 195 "termination.m"
                  MR_Word transform_hlds__termination__Pieces_20;
#line 195 "termination.m"
                  MR_Word transform_hlds__termination__Msg_21;
#line 195 "termination.m"
                  MR_Word transform_hlds__termination__Spec_22;
#line 195 "termination.m"
                  MR_Word transform_hlds__termination__V_66_66;
#line 195 "termination.m"
                  MR_Word transform_hlds__termination__V_67_67;
#line 195 "termination.m"
                  MR_Word transform_hlds__termination__V_71_71;
#line 195 "termination.m"
                  MR_Word transform_hlds__termination__V_93_93;
#line 195 "termination.m"
                  MR_Word transform_hlds__termination__V_94_94;
#line 195 "termination.m"
                  MR_Word transform_hlds__termination__V_98_98;
#line 195 "termination.m"
                  MR_Word transform_hlds__termination__TermStatus_110;
#line 195 "termination.m"
                  MR_Word transform_hlds__termination__TermErr_111;

#line 196 "termination.m"
                  {
#line 196 "termination.m"
                    transform_hlds__termination__TermErr_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 196 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__TermErr_111, 0) = ((MR_Box) (transform_hlds__termination__Context_14));
#line 196 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__TermErr_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 196 "termination.m"
                  }
#line 197 "termination.m"
                  {
#line 197 "termination.m"
                    transform_hlds__termination__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 197 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_67_67, 0) = ((MR_Box) (transform_hlds__termination__TermErr_111));
#line 197 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 197 "termination.m"
                  }
#line 197 "termination.m"
                  {
#line 197 "termination.m"
                    transform_hlds__termination__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 197 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_66_66, 0) = ((MR_Box) (transform_hlds__termination__V_67_67));
#line 197 "termination.m"
                  }
#line 197 "termination.m"
                  {
#line 197 "termination.m"
                    transform_hlds__termination__TermStatus_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 197 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__TermStatus_110, 0) = ((MR_Box) (transform_hlds__termination__V_66_66));
#line 197 "termination.m"
                  }
#line 199 "termination.m"
                  {
#line 199 "termination.m"
                    hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(transform_hlds__termination__TermStatus_110, transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25, transform_hlds__termination__STATE_VARIABLE_ProcInfo_26);
                  }
#line 200 "termination.m"
                  {
#line 200 "termination.m"
                    transform_hlds__termination__ProcNamePieces_19 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__termination__ModuleInfo_8, (MR_Integer) 0, transform_hlds__termination__PPId_9);
                  }
#line 202 "termination.m"
                  {
#line 202 "termination.m"
                    transform_hlds__termination__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 202 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_71_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[36])));
#line 202 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_71_71, 1) = ((MR_Box) (transform_hlds__termination__ProcNamePieces_19));
#line 202 "termination.m"
                  }
#line 202 "termination.m"
                  {
#line 202 "termination.m"
                    transform_hlds__termination__Pieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__termination__V_71_71, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[22]));
                  }
#line 206 "termination.m"
                  {
#line 206 "termination.m"
                    transform_hlds__termination__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 206 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__V_94_94, 0) = ((MR_Box) (transform_hlds__termination__Pieces_20));
#line 206 "termination.m"
                  }
#line 206 "termination.m"
                  {
#line 206 "termination.m"
                    transform_hlds__termination__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 206 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_93_93, 0) = ((MR_Box) (transform_hlds__termination__V_94_94));
#line 206 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 206 "termination.m"
                  }
#line 206 "termination.m"
                  {
#line 206 "termination.m"
                    transform_hlds__termination__Msg_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 206 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__Msg_21, 0) = ((MR_Box) (transform_hlds__termination__Context_14));
#line 206 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__Msg_21, 1) = ((MR_Box) (transform_hlds__termination__V_93_93));
#line 206 "termination.m"
                  }
#line 207 "termination.m"
                  {
#line 207 "termination.m"
                    transform_hlds__termination__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 207 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_98_98, 0) = ((MR_Box) (transform_hlds__termination__Msg_21));
#line 207 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_98_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 207 "termination.m"
                  }
#line 207 "termination.m"
                  {
#line 207 "termination.m"
                    transform_hlds__termination__Spec_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 207 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 207 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 207 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_22, 2) = ((MR_Box) (transform_hlds__termination__V_98_98));
#line 207 "termination.m"
                  }
#line 208 "termination.m"
                  {
#line 208 "termination.m"
                    MR_Word base;
#line 208 "termination.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 208 "termination.m"
                    *transform_hlds__termination__STATE_VARIABLE_Specs_28 = base;
#line 208 "termination.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__termination__Spec_22));
#line 208 "termination.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_Specs_0_27));
#line 208 "termination.m"
                  }
#line 195 "termination.m"
                }
#line 209 "termination.m"
                break;
#line 209 "termination.m"
              case (MR_Integer) 0:
#line 210 "termination.m"
                {
#line 210 "termination.m"
                  *transform_hlds__termination__STATE_VARIABLE_ProcInfo_26 = transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25;
#line 210 "termination.m"
                  *transform_hlds__termination__STATE_VARIABLE_Specs_28 = transform_hlds__termination__STATE_VARIABLE_Specs_0_27;
#line 210 "termination.m"
                }
#line 209 "termination.m"
                break;
#line 209 "termination.m"
            }
#line 192 "termination.m"
          }
#line 189 "termination.m"
      }
#line 176 "termination.m"
  }
#line 170 "termination.m"
}

#line 142 "termination.m"
static void MR_CALL 
transform_hlds__termination__check_foreign_code_attributes_in_scc_5_p_0(
#line 142 "termination.m"
  MR_Word transform_hlds__termination__PPIds_6,
#line 142 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26,
#line 142 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27,
#line 142 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_0_28,
#line 142 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_Specs_29)
#line 142 "termination.m"
{
#line 148 "termination.m"
  {
#line 148 "termination.m"
    MR_bool transform_hlds__termination__succeeded;

#line 148 "termination.m"
    if ((transform_hlds__termination__PPIds_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 148 "termination.m"
      {
#line 149 "termination.m"
        {
#line 149 "termination.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.termination", (MR_String) "predicate \140transform_hlds.termination.check_foreign_code_attributes_in_scc\'/5", (MR_String) "empty SCC");
#line 149 "termination.m"
          return;
        }
#line 148 "termination.m"
      }
#line 148 "termination.m"
    else
#line 148 "termination.m"
      {
#line 148 "termination.m"
        MR_Word transform_hlds__termination__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__PPIds_6, (MR_Integer) 1)));
#line 148 "termination.m"
        MR_Word transform_hlds__termination__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__PPIds_6, (MR_Integer) 0)));

#line 148 "termination.m"
        if ((transform_hlds__termination__V_37_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 151 "termination.m"
          {
#line 151 "termination.m"
            MR_Word transform_hlds__termination__PredInfo_10;
#line 151 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo0_11;
#line 153 "termination.m"
            MR_Word transform_hlds__termination__Attributes_15;
#line 154 "termination.m"
            MR_Word transform_hlds__termination__Goal_12;
#line 154 "termination.m"
            MR_Word transform_hlds__termination__GoalExpr_13;
#line 155 "termination.m"
            MR_Word transform_hlds__termination___GoalInfo_14;
#line 156 "termination.m"
            MR_Word transform_hlds__termination__V_16_16;
#line 156 "termination.m"
            MR_Integer transform_hlds__termination__V_17_17;
#line 156 "termination.m"
            MR_Word transform_hlds__termination__V_18_18;
#line 156 "termination.m"
            MR_Word transform_hlds__termination__V_19_19;
#line 156 "termination.m"
            MR_Word transform_hlds__termination__V_20_20;
#line 156 "termination.m"
            MR_Word transform_hlds__termination__V_21_21;

#line 152 "termination.m"
            {
#line 152 "termination.m"
              hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26, transform_hlds__termination__V_38_38, &transform_hlds__termination__PredInfo_10, &transform_hlds__termination__ProcInfo0_11);
            }
#line 154 "termination.m"
            {
#line 154 "termination.m"
              hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__termination__ProcInfo0_11, &transform_hlds__termination__Goal_12);
            }
#line 155 "termination.m"
            transform_hlds__termination__GoalExpr_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__Goal_12, (MR_Integer) 0)));
#line 155 "termination.m"
            transform_hlds__termination___GoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__Goal_12, (MR_Integer) 1)));
#line 156 "termination.m"
            transform_hlds__termination__succeeded = ((((MR_tag((MR_Word) transform_hlds__termination__GoalExpr_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__GoalExpr_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 156 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 156 "termination.m"
              {
#line 156 "termination.m"
                transform_hlds__termination__Attributes_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__GoalExpr_13, (MR_Integer) 1)));
#line 156 "termination.m"
                transform_hlds__termination__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__GoalExpr_13, (MR_Integer) 2)));
#line 156 "termination.m"
                transform_hlds__termination__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__termination__GoalExpr_13, (MR_Integer) 3)));
#line 156 "termination.m"
                transform_hlds__termination__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__GoalExpr_13, (MR_Integer) 4)));
#line 156 "termination.m"
                transform_hlds__termination__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__GoalExpr_13, (MR_Integer) 5)));
#line 156 "termination.m"
                transform_hlds__termination__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__GoalExpr_13, (MR_Integer) 6)));
#line 156 "termination.m"
                transform_hlds__termination__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__GoalExpr_13, (MR_Integer) 7)));
#line 159 "termination.m"
                {
#line 159 "termination.m"
                  MR_Word transform_hlds__termination__ProcInfo_22;

#line 158 "termination.m"
                  {
#line 158 "termination.m"
                    transform_hlds__termination__check_foreign_code_attributes_of_proc_7_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26, transform_hlds__termination__V_38_38, transform_hlds__termination__Attributes_15, transform_hlds__termination__ProcInfo0_11, &transform_hlds__termination__ProcInfo_22, transform_hlds__termination__STATE_VARIABLE_Specs_0_28, transform_hlds__termination__STATE_VARIABLE_Specs_29);
                  }
#line 160 "termination.m"
                  {
#line 160 "termination.m"
                    hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(transform_hlds__termination__V_38_38, transform_hlds__termination__PredInfo_10, transform_hlds__termination__ProcInfo_22, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27);
                  }
#line 159 "termination.m"
                }
#line 156 "termination.m"
              }
#line 156 "termination.m"
            else
#line 163 "termination.m"
              {
#line 163 "termination.m"
                *transform_hlds__termination__STATE_VARIABLE_Specs_29 = transform_hlds__termination__STATE_VARIABLE_Specs_0_28;
#line 163 "termination.m"
                *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26;
#line 163 "termination.m"
              }
#line 151 "termination.m"
          }
#line 148 "termination.m"
        else
#line 166 "termination.m"
          {
#line 166 "termination.m"
            *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26;
#line 166 "termination.m"
            *transform_hlds__termination__STATE_VARIABLE_Specs_29 = transform_hlds__termination__STATE_VARIABLE_Specs_0_28;
#line 166 "termination.m"
          }
#line 148 "termination.m"
      }
#line 148 "termination.m"
  }
#line 142 "termination.m"
}

#line 111 "termination.m"
static void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_3_p_0_3(
#line 111 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 111 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1,
#line 111 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_2,
#line 111 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_3,
#line 111 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_4,
#line 111 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_5)
#line 111 "termination.m"
{
#line 111 "termination.m"
  {
#line 111 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;
#line 111 "termination.m"
    MR_Word transform_hlds__termination__conv9_STATE_VARIABLE_ModuleInfo_48;
#line 111 "termination.m"
    MR_Word transform_hlds__termination__conv8_STATE_VARIABLE_Specs_50;

#line 111 "termination.m"
    {
#line 111 "termination.m"
      transform_hlds__termination__analyse_termination_in_scc_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1), ((MR_Word) transform_hlds__termination__wrapper_arg_2), &transform_hlds__termination__conv9_STATE_VARIABLE_ModuleInfo_48, ((MR_Word) transform_hlds__termination__wrapper_arg_4), &transform_hlds__termination__conv8_STATE_VARIABLE_Specs_50);
    }
#line 111 "termination.m"
    *transform_hlds__termination__wrapper_arg_3 = ((MR_Box) (transform_hlds__termination__conv9_STATE_VARIABLE_ModuleInfo_48));
#line 111 "termination.m"
    *transform_hlds__termination__wrapper_arg_5 = ((MR_Box) (transform_hlds__termination__conv8_STATE_VARIABLE_Specs_50));
#line 111 "termination.m"
  }
#line 111 "termination.m"
}

#line 269 "termination.m"
static void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_3_p_0_2(
#line 269 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 269 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1,
#line 269 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_2,
#line 269 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_3,
#line 269 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_4,
#line 269 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_5)
#line 269 "termination.m"
{
#line 269 "termination.m"
  {
#line 269 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;
#line 269 "termination.m"
    MR_Word transform_hlds__termination__conv5_STATE_VARIABLE_ModuleInfo_27;
#line 269 "termination.m"
    MR_Word transform_hlds__termination__conv4_STATE_VARIABLE_Specs_29;

#line 269 "termination.m"
    {
#line 269 "termination.m"
      transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0(((MR_Word) transform_hlds__termination__wrapper_arg_1), ((MR_Word) transform_hlds__termination__wrapper_arg_2), &transform_hlds__termination__conv5_STATE_VARIABLE_ModuleInfo_27, ((MR_Word) transform_hlds__termination__wrapper_arg_4), &transform_hlds__termination__conv4_STATE_VARIABLE_Specs_29);
    }
#line 269 "termination.m"
    *transform_hlds__termination__wrapper_arg_3 = ((MR_Box) (transform_hlds__termination__conv5_STATE_VARIABLE_ModuleInfo_27));
#line 269 "termination.m"
    *transform_hlds__termination__wrapper_arg_5 = ((MR_Box) (transform_hlds__termination__conv4_STATE_VARIABLE_Specs_29));
#line 269 "termination.m"
  }
#line 269 "termination.m"
}

#line 139 "termination.m"
static void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_3_p_0_1(
#line 139 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 139 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1,
#line 139 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_2,
#line 139 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_3,
#line 139 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_4,
#line 139 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_5)
#line 139 "termination.m"
{
#line 139 "termination.m"
  {
#line 139 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;
#line 139 "termination.m"
    MR_Word transform_hlds__termination__conv1_STATE_VARIABLE_ModuleInfo_27;
#line 139 "termination.m"
    MR_Word transform_hlds__termination__conv0_STATE_VARIABLE_Specs_29;

#line 139 "termination.m"
    {
#line 139 "termination.m"
      transform_hlds__termination__check_foreign_code_attributes_in_scc_5_p_0(((MR_Word) transform_hlds__termination__wrapper_arg_1), ((MR_Word) transform_hlds__termination__wrapper_arg_2), &transform_hlds__termination__conv1_STATE_VARIABLE_ModuleInfo_27, ((MR_Word) transform_hlds__termination__wrapper_arg_4), &transform_hlds__termination__conv0_STATE_VARIABLE_Specs_29);
    }
#line 139 "termination.m"
    *transform_hlds__termination__wrapper_arg_3 = ((MR_Box) (transform_hlds__termination__conv1_STATE_VARIABLE_ModuleInfo_27));
#line 139 "termination.m"
    *transform_hlds__termination__wrapper_arg_5 = ((MR_Box) (transform_hlds__termination__conv0_STATE_VARIABLE_Specs_29));
#line 139 "termination.m"
  }
#line 139 "termination.m"
}

#line 46 "termination.m"
void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_3_p_0(
#line 46 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_18,
#line 46 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_19,
#line 46 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_Specs_20)
#line 46 "termination.m"
{
#line 84 "termination.m"
  {
#line 84 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 84 "termination.m"
    MR_Word transform_hlds__termination__Globals_6;
#line 84 "termination.m"
    MR_Word transform_hlds__termination__TermNorm_7;
#line 84 "termination.m"
    MR_Word transform_hlds__termination__FunctorInfo_8;
#line 84 "termination.m"
    MR_Integer transform_hlds__termination__MaxErrors_9;
#line 84 "termination.m"
    MR_Integer transform_hlds__termination__MaxPaths_10;
#line 84 "termination.m"
    MR_Word transform_hlds__termination__PassInfo_11;
#line 84 "termination.m"
    MR_Word transform_hlds__termination__PredIds_12;
#line 84 "termination.m"
    MR_Word transform_hlds__termination__DepInfo_13;
#line 84 "termination.m"
    MR_Word transform_hlds__termination__SCCs_14;
#line 84 "termination.m"
    MR_Word transform_hlds__termination__PostSpecs_15;
#line 84 "termination.m"
    MR_Word transform_hlds__termination__ProcAnalysisKinds0_16;
#line 84 "termination.m"
    MR_Word transform_hlds__termination__ProcAnalysisKinds_17;
#line 84 "termination.m"
    MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_23_23;
#line 84 "termination.m"
    MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_24_24;
#line 84 "termination.m"
    MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26;
#line 84 "termination.m"
    MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_27_27;
#line 84 "termination.m"
    MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_28_28;
#line 84 "termination.m"
    MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_29_29;
#line 84 "termination.m"
    MR_Word transform_hlds__termination__V_30_30;
#line 84 "termination.m"
    MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_31_31;
#line 84 "termination.m"
    MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_32_32;
#line 139 "termination.m"
    MR_Box transform_hlds__termination__conv3_STATE_VARIABLE_ModuleInfo_26_26;
#line 139 "termination.m"
    MR_Box transform_hlds__termination__conv2_STATE_VARIABLE_Specs_27_27;
#line 269 "termination.m"
    MR_Box transform_hlds__termination__conv7_STATE_VARIABLE_ModuleInfo_28_28;
#line 269 "termination.m"
    MR_Box transform_hlds__termination__conv6_STATE_VARIABLE_Specs_29_29;
#line 111 "termination.m"
    MR_Box transform_hlds__termination__conv11_STATE_VARIABLE_ModuleInfo_31_31;
#line 111 "termination.m"
    MR_Box transform_hlds__termination__conv10_STATE_VARIABLE_Specs_32_32;

#line 85 "termination.m"
    {
#line 85 "termination.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_18, &transform_hlds__termination__Globals_6);
    }
#line 86 "termination.m"
    {
#line 86 "termination.m"
      libs__globals__get_termination_norm_2_p_0(transform_hlds__termination__Globals_6, &transform_hlds__termination__TermNorm_7);
    }
#line 87 "termination.m"
    {
#line 87 "termination.m"
      transform_hlds__termination__FunctorInfo_8 = transform_hlds__term_norm__set_functor_info_2_f_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_18, transform_hlds__termination__TermNorm_7);
    }
#line 88 "termination.m"
    {
#line 88 "termination.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__termination__Globals_6, (MR_Integer) 414, &transform_hlds__termination__MaxErrors_9);
    }
#line 89 "termination.m"
    {
#line 89 "termination.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__termination__Globals_6, (MR_Integer) 415, &transform_hlds__termination__MaxPaths_10);
    }
#line 90 "termination.m"
    {
#line 90 "termination.m"
      transform_hlds__termination__PassInfo_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 90 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__PassInfo_11, 0) = ((MR_Box) (transform_hlds__termination__FunctorInfo_8));
#line 90 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__PassInfo_11, 1) = ((MR_Box) (transform_hlds__termination__MaxErrors_9));
#line 90 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__PassInfo_11, 2) = ((MR_Box) (transform_hlds__termination__MaxPaths_10));
#line 90 "termination.m"
    }
#line 94 "termination.m"
    {
#line 94 "termination.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_18, &transform_hlds__termination__PredIds_12);
    }
#line 95 "termination.m"
    {
#line 95 "termination.m"
      transform_hlds__termination__term_preprocess_preds_3_p_0(transform_hlds__termination__PredIds_12, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_18, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_23_23);
    }
#line 98 "termination.m"
    {
#line 98 "termination.m"
      transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_23_23, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_24_24);
    }
#line 99 "termination.m"
    {
#line 99 "termination.m"
      hlds__hlds_module__module_info_dependency_info_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_24_24, &transform_hlds__termination__DepInfo_13);
    }
#line 100 "termination.m"
    {
#line 100 "termination.m"
      hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__termination__DepInfo_13, &transform_hlds__termination__SCCs_14);
    }
#line 139 "termination.m"
    {
#line 139 "termination.m"
      mercury__list__foldl2_6_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__termination_scalar_common_1[1], (MR_Word) &transform_hlds__termination_scalar_common_2[1], transform_hlds__termination__SCCs_14, ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_24_24)), &transform_hlds__termination__conv3_STATE_VARIABLE_ModuleInfo_26_26, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__termination__conv2_STATE_VARIABLE_Specs_27_27);
    }
#line 139 "termination.m"
    transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26 = ((MR_Word) transform_hlds__termination__conv3_STATE_VARIABLE_ModuleInfo_26_26);
#line 139 "termination.m"
    transform_hlds__termination__STATE_VARIABLE_Specs_27_27 = ((MR_Word) transform_hlds__termination__conv2_STATE_VARIABLE_Specs_27_27);
#line 269 "termination.m"
    {
#line 269 "termination.m"
      mercury__list__foldl2_6_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__termination_scalar_common_1[1], (MR_Word) &transform_hlds__termination_scalar_common_2[2], transform_hlds__termination__SCCs_14, ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26)), &transform_hlds__termination__conv7_STATE_VARIABLE_ModuleInfo_28_28, ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_Specs_27_27)), &transform_hlds__termination__conv6_STATE_VARIABLE_Specs_29_29);
    }
#line 269 "termination.m"
    transform_hlds__termination__STATE_VARIABLE_ModuleInfo_28_28 = ((MR_Word) transform_hlds__termination__conv7_STATE_VARIABLE_ModuleInfo_28_28);
#line 269 "termination.m"
    transform_hlds__termination__STATE_VARIABLE_Specs_29_29 = ((MR_Word) transform_hlds__termination__conv6_STATE_VARIABLE_Specs_29_29);
#line 111 "termination.m"
    {
#line 111 "termination.m"
      transform_hlds__termination__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 111 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_30_30, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_4[0]));
#line 111 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_30_30, 1) = ((MR_Box) (transform_hlds__termination__analyse_termination_in_module_3_p_0_3));
#line 111 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 111 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_30_30, 3) = ((MR_Box) (transform_hlds__termination__PassInfo_11));
#line 111 "termination.m"
    }
#line 111 "termination.m"
    {
#line 111 "termination.m"
      mercury__list__foldl2_6_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__termination_scalar_common_1[1], transform_hlds__termination__V_30_30, transform_hlds__termination__SCCs_14, ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_28_28)), &transform_hlds__termination__conv11_STATE_VARIABLE_ModuleInfo_31_31, ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_Specs_29_29)), &transform_hlds__termination__conv10_STATE_VARIABLE_Specs_32_32);
    }
#line 111 "termination.m"
    transform_hlds__termination__STATE_VARIABLE_ModuleInfo_31_31 = ((MR_Word) transform_hlds__termination__conv11_STATE_VARIABLE_ModuleInfo_31_31);
#line 111 "termination.m"
    transform_hlds__termination__STATE_VARIABLE_Specs_32_32 = ((MR_Word) transform_hlds__termination__conv10_STATE_VARIABLE_Specs_32_32);
#line 113 "termination.m"
    {
#line 113 "termination.m"
      transform_hlds__post_term_analysis__run_post_term_analysis_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_31_31, &transform_hlds__termination__PostSpecs_15);
    }
#line 114 "termination.m"
    {
#line 114 "termination.m"
      *transform_hlds__termination__STATE_VARIABLE_Specs_20 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, transform_hlds__termination__PostSpecs_15, transform_hlds__termination__STATE_VARIABLE_Specs_32_32);
    }
#line 116 "termination.m"
    {
#line 116 "termination.m"
      hlds__hlds_module__module_info_get_proc_analysis_kinds_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_31_31, &transform_hlds__termination__ProcAnalysisKinds0_16);
    }
#line 117 "termination.m"
    {
#line 117 "termination.m"
      mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0, ((MR_Box) ((MR_Integer) 3)), transform_hlds__termination__ProcAnalysisKinds0_16, &transform_hlds__termination__ProcAnalysisKinds_17);
    }
#line 118 "termination.m"
    {
#line 118 "termination.m"
      hlds__hlds_module__module_info_set_proc_analysis_kinds_3_p_0(transform_hlds__termination__ProcAnalysisKinds_17, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_31_31, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_19);
    }
#line 84 "termination.m"
  }
#line 46 "termination.m"
}

void mercury__transform_hlds__termination__init(void)
{
}

void mercury__transform_hlds__termination__init_type_tables(void)
{
}

void mercury__transform_hlds__termination__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.termination. */
