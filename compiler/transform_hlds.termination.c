/*
** Automatically generated from `termination.m'
** by the Mercury compiler,
** version 2015-10-27
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




#line 145 "transform_hlds.termination.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__termination__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 148 "transform_hlds.termination.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__termination__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 565 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__decide_what_term_errors_to_report__565__1_1_p_0(
#line 565 "termination.m"
  MR_Word transform_hlds__termination__LambdaHeadVar__1_38);

#line 536 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__decide_what_term_errors_to_report__536__1_2_p_0(
#line 536 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_5,
#line 536 "termination.m"
  MR_Word transform_hlds__termination__LambdaHeadVar__1_36);

#line 522 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__decide_what_term_errors_to_report__522__1_2_p_0(
#line 522 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_5,
#line 522 "termination.m"
  MR_Word transform_hlds__termination__LambdaHeadVar__1_34);

#line 392 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__392__1_1_p_0(
#line 392 "termination.m"
  MR_Word transform_hlds__termination__LambdaHeadVar__1_57);

#line 358 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__358__1_2_p_0(
#line 358 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47,
#line 358 "termination.m"
  MR_Word transform_hlds__termination__LambdaHeadVar__1_51);

#line 305 "termination.m"
static MR_Word MR_CALL 
transform_hlds__termination__IntroducedFrom__func__check_scc_pragmas_are_consistent__305__1_1_f_0(
#line 305 "termination.m"
  MR_Word transform_hlds__termination__LambdaHeadVar__1_41);

#line 850 "termination.m"
static void MR_CALL 
transform_hlds__termination__change_procs_termination_info_5_p_0(
#line 850 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 850 "termination.m"
  MR_Word transform_hlds__termination__Override_2,
#line 850 "termination.m"
  MR_Word transform_hlds__termination__Termination_3,
#line 850 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4,
#line 850 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcTable_5);

#line 820 "termination.m"
static void MR_CALL 
transform_hlds__termination__change_procs_arg_size_info_5_p_0(
#line 820 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 820 "termination.m"
  MR_Word transform_hlds__termination__Override_2,
#line 820 "termination.m"
  MR_Word transform_hlds__termination__ArgSize_3,
#line 820 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4,
#line 820 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcTable_5);

#line 780 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_builtin_terminates_6_p_0(
#line 780 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 780 "termination.m"
  MR_Word transform_hlds__termination__PredId_2,
#line 780 "termination.m"
  MR_Word transform_hlds__termination__PredInfo_3,
#line 780 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_4,
#line 780 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0_5,
#line 780 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcTable_6);

#line 723 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_generated_terminates_4_p_0(
#line 723 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 723 "termination.m"
  MR_Word transform_hlds__termination__SpecialPredId_2,
#line 723 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0_3,
#line 723 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcTable_4);

#line 605 "termination.m"
static void MR_CALL 
transform_hlds__termination__term_preprocess_preds_3_p_0(
#line 605 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 605 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2,
#line 605 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_3);

#line 565 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__maybe_report_termination_errors_5_p_0_4(
#line 565 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 565 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 548 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__maybe_report_termination_errors_5_p_0_3(
#line 548 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 548 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 536 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__maybe_report_termination_errors_5_p_0_2(
#line 536 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 536 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 522 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__maybe_report_termination_errors_5_p_0_1(
#line 522 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 522 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 491 "termination.m"
static void MR_CALL 
transform_hlds__termination__maybe_report_termination_errors_5_p_0(
#line 491 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_6,
#line 491 "termination.m"
  MR_Word transform_hlds__termination__SCC_7,
#line 491 "termination.m"
  MR_Word transform_hlds__termination__Errors_8,
#line 491 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_0_12,
#line 491 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_Specs_13);

#line 470 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_termination_infos_4_p_0(
#line 470 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 470 "termination.m"
  MR_Word transform_hlds__termination__TerminationInfo_2,
#line 470 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3,
#line 470 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4);

#line 450 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_infinite_arg_size_infos_4_p_0(
#line 450 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 450 "termination.m"
  MR_Word transform_hlds__termination__ArgSizeInfo_2,
#line 450 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3,
#line 450 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4);

#line 429 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_finite_arg_size_infos_4_p_0(
#line 429 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 429 "termination.m"
  MR_Word transform_hlds__termination__OutputSupplierMap_2,
#line 429 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3,
#line 429 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4);

#line 392 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0_3(
#line 392 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 392 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 383 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0_2(
#line 383 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 383 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 358 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0_1(
#line 358 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 358 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 353 "termination.m"
static void MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0(
#line 353 "termination.m"
  MR_Word transform_hlds__termination__PassInfo_7,
#line 353 "termination.m"
  MR_Word transform_hlds__termination__SCC_8,
#line 353 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47,
#line 353 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_48,
#line 353 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_0_49,
#line 353 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_Specs_50);

#line 322 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__check_procs_known_term_3_p_0(
#line 322 "termination.m"
  MR_Word transform_hlds__termination__Status_1,
#line 322 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_2,
#line 322 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_3);

#line 305 "termination.m"
static MR_Box MR_CALL 
transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0_2(
#line 305 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 305 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 273 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0_1(
#line 273 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 273 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 268 "termination.m"
static void MR_CALL 
transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0(
#line 268 "termination.m"
  MR_Word transform_hlds__termination__SCC_6,
#line 268 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26,
#line 268 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27,
#line 268 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_0_28,
#line 268 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_Specs_29);

#line 167 "termination.m"
static void MR_CALL 
transform_hlds__termination__check_foreign_code_attributes_of_proc_7_p_0(
#line 167 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_8,
#line 167 "termination.m"
  MR_Word transform_hlds__termination__PPId_9,
#line 167 "termination.m"
  MR_Word transform_hlds__termination__Attributes_10,
#line 167 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25,
#line 167 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcInfo_26,
#line 167 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_0_27,
#line 167 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_Specs_28);

#line 139 "termination.m"
static void MR_CALL 
transform_hlds__termination__check_foreign_code_attributes_in_scc_5_p_0(
#line 139 "termination.m"
  MR_Word transform_hlds__termination__PPIds_6,
#line 139 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26,
#line 139 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27,
#line 139 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_0_28,
#line 139 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_Specs_29);

#line 108 "termination.m"
static void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_3_p_0_3(
#line 108 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 108 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1,
#line 108 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_2,
#line 108 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_3,
#line 108 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_4,
#line 108 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_5);

#line 266 "termination.m"
static void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_3_p_0_2(
#line 266 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 266 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1,
#line 266 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_2,
#line 266 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_3,
#line 266 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_4,
#line 266 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_5);

#line 136 "termination.m"
static void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_3_p_0_1(
#line 136 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 136 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1,
#line 136 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_2,
#line 136 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_3,
#line 136 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_4,
#line 136 "termination.m"
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



#line 824 "transform_hlds.termination.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__termination__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 832 "transform_hlds.termination.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__termination__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 565 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__decide_what_term_errors_to_report__565__1_1_p_0(
#line 565 "termination.m"
  MR_Word transform_hlds__termination__LambdaHeadVar__1_38)
#line 565 "termination.m"
{
#line 565 "termination.m"
  {
#line 565 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 565 "termination.m"
    MR_Word transform_hlds__termination__ErrorKind_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__LambdaHeadVar__1_38, (MR_Integer) 1)));
#line 565 "termination.m"
    MR_Word transform_hlds__termination__V_39_39;
#line 566 "termination.m"
    MR_Word transform_hlds__termination__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__LambdaHeadVar__1_38, (MR_Integer) 0)));

#line 567 "termination.m"
    {
#line 567 "termination.m"
      transform_hlds__termination__V_39_39 = transform_hlds__term_errors__term_error_kind_is_direct_error_1_f_0(transform_hlds__termination__ErrorKind_28);
    }
#line 567 "termination.m"
    transform_hlds__termination__succeeded = (transform_hlds__termination__V_39_39 == (MR_Integer) 1);
#line 565 "termination.m"
    return transform_hlds__termination__succeeded;
#line 565 "termination.m"
  }
#line 565 "termination.m"
}

#line 536 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__decide_what_term_errors_to_report__536__1_2_p_0(
#line 536 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_5,
#line 536 "termination.m"
  MR_Word transform_hlds__termination__LambdaHeadVar__1_36)
#line 536 "termination.m"
{
#line 536 "termination.m"
  {
#line 536 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 536 "termination.m"
    MR_Word transform_hlds__termination__PredInfo_42;
#line 537 "termination.m"
    MR_Word transform_hlds__termination__V_21_21;

#line 537 "termination.m"
    {
#line 537 "termination.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__termination__ModuleInfo_5, transform_hlds__termination__LambdaHeadVar__1_36, &transform_hlds__termination__PredInfo_42, &transform_hlds__termination__V_21_21);
    }
#line 538 "termination.m"
    {
#line 538 "termination.m"
      transform_hlds__termination__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(transform_hlds__termination__PredInfo_42);
    }
#line 538 "termination.m"
    transform_hlds__termination__succeeded = !(transform_hlds__termination__succeeded);
#line 536 "termination.m"
    return transform_hlds__termination__succeeded;
#line 536 "termination.m"
  }
#line 536 "termination.m"
}

#line 522 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__decide_what_term_errors_to_report__522__1_2_p_0(
#line 522 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_5,
#line 522 "termination.m"
  MR_Word transform_hlds__termination__LambdaHeadVar__1_34)
#line 522 "termination.m"
{
#line 522 "termination.m"
  {
#line 522 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 522 "termination.m"
    MR_Word transform_hlds__termination__PredInfo_14;
#line 522 "termination.m"
    MR_Word transform_hlds__termination__Markers_16;
#line 522 "termination.m"
    MR_Word transform_hlds__termination__V_35_35;
#line 524 "termination.m"
    MR_Word transform_hlds__termination__V_15_15;

#line 524 "termination.m"
    {
#line 524 "termination.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__termination__ModuleInfo_5, transform_hlds__termination__LambdaHeadVar__1_34, &transform_hlds__termination__PredInfo_14, &transform_hlds__termination__V_15_15);
    }
#line 525 "termination.m"
    {
#line 525 "termination.m"
      transform_hlds__termination__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(transform_hlds__termination__PredInfo_14);
    }
#line 525 "termination.m"
    transform_hlds__termination__succeeded = !(transform_hlds__termination__succeeded);
#line 522 "termination.m"
    if (transform_hlds__termination__succeeded)
#line 522 "termination.m"
      {
#line 526 "termination.m"
        {
#line 526 "termination.m"
          hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__termination__PredInfo_14, &transform_hlds__termination__Markers_16);
        }
#line 527 "termination.m"
        transform_hlds__termination__V_35_35 = (MR_Integer) 19;
#line 527 "termination.m"
        {
#line 527 "termination.m"
          return transform_hlds__termination__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__termination__Markers_16, transform_hlds__termination__V_35_35);
        }
#line 522 "termination.m"
      }
#line 522 "termination.m"
    return transform_hlds__termination__succeeded;
#line 522 "termination.m"
  }
#line 522 "termination.m"
}

#line 392 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__392__1_1_p_0(
#line 392 "termination.m"
  MR_Word transform_hlds__termination__LambdaHeadVar__1_57)
#line 392 "termination.m"
{
#line 392 "termination.m"
  {
#line 392 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 392 "termination.m"
    MR_Word transform_hlds__termination__ErrorKind_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__LambdaHeadVar__1_57, (MR_Integer) 1)));
#line 392 "termination.m"
    MR_Word transform_hlds__termination__V_58_58;
#line 393 "termination.m"
    MR_Word transform_hlds__termination___Context_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__LambdaHeadVar__1_57, (MR_Integer) 0)));

#line 394 "termination.m"
    {
#line 394 "termination.m"
      transform_hlds__termination__V_58_58 = transform_hlds__term_errors__term_error_kind_is_fatal_error_1_f_0(transform_hlds__termination__ErrorKind_33);
    }
#line 394 "termination.m"
    transform_hlds__termination__succeeded = (transform_hlds__termination__V_58_58 == (MR_Integer) 1);
#line 392 "termination.m"
    return transform_hlds__termination__succeeded;
#line 392 "termination.m"
  }
#line 392 "termination.m"
}

#line 358 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__358__1_2_p_0(
#line 358 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47,
#line 358 "termination.m"
  MR_Word transform_hlds__termination__LambdaHeadVar__1_51)
#line 358 "termination.m"
{
#line 358 "termination.m"
  {
#line 358 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 358 "termination.m"
    MR_Word transform_hlds__termination__ProcInfo_14;
#line 358 "termination.m"
    MR_Word transform_hlds__termination__V_67_67;
#line 359 "termination.m"
    MR_Word transform_hlds__termination__V_13_13;
#line 360 "termination.m"
    MR_Word transform_hlds__termination__V_72_72;

#line 359 "termination.m"
    {
#line 359 "termination.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47, transform_hlds__termination__LambdaHeadVar__1_51, &transform_hlds__termination__V_13_13, &transform_hlds__termination__ProcInfo_14);
    }
#line 360 "termination.m"
    {
#line 360 "termination.m"
      hlds__hlds_pred__proc_info_get_maybe_arg_size_info_2_p_0(transform_hlds__termination__ProcInfo_14, &transform_hlds__termination__V_67_67);
    }
#line 360 "termination.m"
    transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__V_67_67)) == (MR_mktag((MR_Integer) 1)));
#line 360 "termination.m"
    if (transform_hlds__termination__succeeded)
#line 360 "termination.m"
      transform_hlds__termination__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__V_67_67, (MR_Integer) 0)));
#line 358 "termination.m"
    return transform_hlds__termination__succeeded;
#line 358 "termination.m"
  }
#line 358 "termination.m"
}

#line 305 "termination.m"
static MR_Word MR_CALL 
transform_hlds__termination__IntroducedFrom__func__check_scc_pragmas_are_consistent__305__1_1_f_0(
#line 305 "termination.m"
  MR_Word transform_hlds__termination__LambdaHeadVar__1_41)
#line 305 "termination.m"
{
#line 305 "termination.m"
  {
#line 305 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 305 "termination.m"
    MR_Word transform_hlds__termination__LambdaHeadVar__2_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__LambdaHeadVar__1_41, (MR_Integer) 0)));
#line 305 "termination.m"
    MR_Integer transform_hlds__termination__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__LambdaHeadVar__1_41, (MR_Integer) 1)));

#line 305 "termination.m"
    return transform_hlds__termination__LambdaHeadVar__2_42;
#line 305 "termination.m"
  }
#line 305 "termination.m"
}

#line 850 "termination.m"
static void MR_CALL 
transform_hlds__termination__change_procs_termination_info_5_p_0(
#line 850 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 850 "termination.m"
  MR_Word transform_hlds__termination__Override_2,
#line 850 "termination.m"
  MR_Word transform_hlds__termination__Termination_3,
#line 850 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4,
#line 850 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcTable_5)
#line 850 "termination.m"
{
#line 853 "termination.m"
  while (MR_TRUE)
#line 853 "termination.m"
    {
#line 853 "termination.m"
      /* tailcall optimized into a loop */
#line 853 "termination.m"
      {
#line 853 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 853 "termination.m"
        if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 853 "termination.m"
          *transform_hlds__termination__STATE_VARIABLE_ProcTable_5 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4;
#line 853 "termination.m"
        else
#line 855 "termination.m"
          {
#line 855 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_25_25 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 855 "termination.m"
            MR_Integer transform_hlds__termination__ProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));
#line 855 "termination.m"
            MR_Word transform_hlds__termination__ProcIds_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
#line 855 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo0_16;
#line 855 "termination.m"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22;
#line 856 "termination.m"
            MR_Box transform_hlds__termination__conv0_ProcInfo0_16;

#line 856 "termination.m"
            {
#line 856 "termination.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__termination__TypeCtorInfo_25_25, transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4, transform_hlds__termination__ProcId_11, &transform_hlds__termination__conv0_ProcInfo0_16);
            }
#line 856 "termination.m"
            transform_hlds__termination__ProcInfo0_16 = ((MR_Word) transform_hlds__termination__conv0_ProcInfo0_16);
#line 859 "termination.m"
            transform_hlds__termination__succeeded = (transform_hlds__termination__Override_2 == (MR_Integer) 1);
#line 860 "termination.m"
            if (!(transform_hlds__termination__succeeded))
#line 861 "termination.m"
              {
#line 861 "termination.m"
                MR_Word transform_hlds__termination__V_26_26;

#line 861 "termination.m"
                {
#line 861 "termination.m"
                  hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__termination__ProcInfo0_16, &transform_hlds__termination__V_26_26);
                }
#line 861 "termination.m"
                {
#line 861 "termination.m"
                  transform_hlds__termination__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[35], ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (transform_hlds__termination__V_26_26)));
                }
#line 861 "termination.m"
              }
#line 868 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 866 "termination.m"
              {
#line 866 "termination.m"
                MR_Word transform_hlds__termination__ProcInfo_17;
#line 866 "termination.m"
                MR_Word transform_hlds__termination__V_21_21;

#line 865 "termination.m"
                {
#line 865 "termination.m"
                  transform_hlds__termination__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 865 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__V_21_21, 0) = ((MR_Box) (transform_hlds__termination__Termination_3));
#line 865 "termination.m"
                }
#line 865 "termination.m"
                {
#line 865 "termination.m"
                  hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(transform_hlds__termination__V_21_21, transform_hlds__termination__ProcInfo0_16, &transform_hlds__termination__ProcInfo_17);
                }
#line 867 "termination.m"
                {
#line 867 "termination.m"
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__termination__TypeCtorInfo_25_25, transform_hlds__termination__ProcId_11, ((MR_Box) (transform_hlds__termination__ProcInfo_17)), transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4, &transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22);
                }
#line 866 "termination.m"
              }
#line 868 "termination.m"
            else
#line 868 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4;
#line 871 "termination.m"
            /* direct tailcall eliminated */
#line 871 "termination.m"
            {
#line 871 "termination.m"
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__ProcIds_12;
#line 871 "termination.m"
              MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_4 = transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22;

#line 871 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_4;
#line 871 "termination.m"
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
#line 871 "termination.m"
            }
#line 871 "termination.m"
            continue;
#line 855 "termination.m"
          }
#line 853 "termination.m"
      }
#line 853 "termination.m"
      break;
#line 853 "termination.m"
    }
#line 850 "termination.m"
}

#line 820 "termination.m"
static void MR_CALL 
transform_hlds__termination__change_procs_arg_size_info_5_p_0(
#line 820 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 820 "termination.m"
  MR_Word transform_hlds__termination__Override_2,
#line 820 "termination.m"
  MR_Word transform_hlds__termination__ArgSize_3,
#line 820 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4,
#line 820 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcTable_5)
#line 820 "termination.m"
{
#line 823 "termination.m"
  while (MR_TRUE)
#line 823 "termination.m"
    {
#line 823 "termination.m"
      /* tailcall optimized into a loop */
#line 823 "termination.m"
      {
#line 823 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 823 "termination.m"
        if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 823 "termination.m"
          *transform_hlds__termination__STATE_VARIABLE_ProcTable_5 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4;
#line 823 "termination.m"
        else
#line 825 "termination.m"
          {
#line 825 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_25_25 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 825 "termination.m"
            MR_Integer transform_hlds__termination__ProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));
#line 825 "termination.m"
            MR_Word transform_hlds__termination__ProcIds_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
#line 825 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo0_16;
#line 825 "termination.m"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22;
#line 826 "termination.m"
            MR_Box transform_hlds__termination__conv0_ProcInfo0_16;

#line 826 "termination.m"
            {
#line 826 "termination.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__termination__TypeCtorInfo_25_25, transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4, transform_hlds__termination__ProcId_11, &transform_hlds__termination__conv0_ProcInfo0_16);
            }
#line 826 "termination.m"
            transform_hlds__termination__ProcInfo0_16 = ((MR_Word) transform_hlds__termination__conv0_ProcInfo0_16);
#line 828 "termination.m"
            transform_hlds__termination__succeeded = (transform_hlds__termination__Override_2 == (MR_Integer) 1);
#line 829 "termination.m"
            if (!(transform_hlds__termination__succeeded))
#line 829 "termination.m"
              {
#line 829 "termination.m"
                MR_Word transform_hlds__termination__V_26_26;

#line 829 "termination.m"
                {
#line 829 "termination.m"
                  hlds__hlds_pred__proc_info_get_maybe_arg_size_info_2_p_0(transform_hlds__termination__ProcInfo0_16, &transform_hlds__termination__V_26_26);
                }
#line 829 "termination.m"
                {
#line 829 "termination.m"
                  transform_hlds__termination__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[34], ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (transform_hlds__termination__V_26_26)));
                }
#line 829 "termination.m"
              }
#line 834 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 832 "termination.m"
              {
#line 832 "termination.m"
                MR_Word transform_hlds__termination__ProcInfo_17;
#line 832 "termination.m"
                MR_Word transform_hlds__termination__V_21_21;

#line 832 "termination.m"
                {
#line 832 "termination.m"
                  transform_hlds__termination__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 832 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__V_21_21, 0) = ((MR_Box) (transform_hlds__termination__ArgSize_3));
#line 832 "termination.m"
                }
#line 832 "termination.m"
                {
#line 832 "termination.m"
                  hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_p_0(transform_hlds__termination__V_21_21, transform_hlds__termination__ProcInfo0_16, &transform_hlds__termination__ProcInfo_17);
                }
#line 833 "termination.m"
                {
#line 833 "termination.m"
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__termination__TypeCtorInfo_25_25, transform_hlds__termination__ProcId_11, ((MR_Box) (transform_hlds__termination__ProcInfo_17)), transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4, &transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22);
                }
#line 832 "termination.m"
              }
#line 834 "termination.m"
            else
#line 834 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4;
#line 837 "termination.m"
            /* direct tailcall eliminated */
#line 837 "termination.m"
            {
#line 837 "termination.m"
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__ProcIds_12;
#line 837 "termination.m"
              MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_4 = transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22;

#line 837 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_4;
#line 837 "termination.m"
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
#line 837 "termination.m"
            }
#line 837 "termination.m"
            continue;
#line 825 "termination.m"
          }
#line 823 "termination.m"
      }
#line 823 "termination.m"
      break;
#line 823 "termination.m"
    }
#line 820 "termination.m"
}

#line 780 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_builtin_terminates_6_p_0(
#line 780 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 780 "termination.m"
  MR_Word transform_hlds__termination__PredId_2,
#line 780 "termination.m"
  MR_Word transform_hlds__termination__PredInfo_3,
#line 780 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_4,
#line 780 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0_5,
#line 780 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcTable_6)
#line 780 "termination.m"
{
#line 783 "termination.m"
  while (MR_TRUE)
#line 783 "termination.m"
    {
#line 783 "termination.m"
      /* tailcall optimized into a loop */
#line 783 "termination.m"
      {
#line 783 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 783 "termination.m"
        if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 783 "termination.m"
          *transform_hlds__termination__STATE_VARIABLE_ProcTable_6 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0_5;
#line 783 "termination.m"
        else
#line 785 "termination.m"
          {
#line 785 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_42_42 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 785 "termination.m"
            MR_Integer transform_hlds__termination__ProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));
#line 785 "termination.m"
            MR_Word transform_hlds__termination__ProcIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
#line 785 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo0_19;
#line 785 "termination.m"
            MR_Word transform_hlds__termination__ArgSizeInfo_22;
#line 785 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo1_26;
#line 785 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo_27;
#line 785 "termination.m"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_39_39;
#line 786 "termination.m"
            MR_Box transform_hlds__termination__conv0_ProcInfo0_19;

#line 786 "termination.m"
            {
#line 786 "termination.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__termination__TypeCtorInfo_42_42, transform_hlds__termination__STATE_VARIABLE_ProcTable_0_5, transform_hlds__termination__ProcId_13, &transform_hlds__termination__conv0_ProcInfo0_19);
            }
#line 786 "termination.m"
            transform_hlds__termination__ProcInfo0_19 = ((MR_Word) transform_hlds__termination__conv0_ProcInfo0_19);
#line 787 "termination.m"
            {
#line 787 "termination.m"
              transform_hlds__termination__succeeded = transform_hlds__term_util__all_args_input_or_zero_size_3_p_0(transform_hlds__termination__ModuleInfo_4, transform_hlds__termination__PredInfo_3, transform_hlds__termination__ProcInfo0_19);
            }
#line 794 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 791 "termination.m"
              {
#line 791 "termination.m"
                MR_Word transform_hlds__termination__HeadVars_20;
#line 791 "termination.m"
                MR_Word transform_hlds__termination__UsedArgs_21;
#line 791 "termination.m"
                MR_Word transform_hlds__termination__V_31_31;

#line 791 "termination.m"
                {
#line 791 "termination.m"
                  hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__termination__ProcInfo0_19, &transform_hlds__termination__HeadVars_20);
                }
#line 792 "termination.m"
                {
#line 792 "termination.m"
                  transform_hlds__term_util__make_bool_list_3_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[3], transform_hlds__termination__HeadVars_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__termination__UsedArgs_21);
                }
#line 793 "termination.m"
                {
#line 793 "termination.m"
                  transform_hlds__termination__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 793 "termination.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__termination__V_31_31, 0) = ((MR_Box) ((MR_Integer) 0));
#line 793 "termination.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__termination__V_31_31, 1) = ((MR_Box) (transform_hlds__termination__UsedArgs_21));
#line 793 "termination.m"
                }
#line 793 "termination.m"
                {
#line 793 "termination.m"
                  transform_hlds__termination__ArgSizeInfo_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 793 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__ArgSizeInfo_22, 0) = ((MR_Box) (transform_hlds__termination__V_31_31));
#line 793 "termination.m"
                }
#line 791 "termination.m"
              }
#line 794 "termination.m"
            else
#line 795 "termination.m"
              {
#line 795 "termination.m"
                MR_Word transform_hlds__termination__Context_23;
#line 795 "termination.m"
                MR_Word transform_hlds__termination__Error_24;
#line 795 "termination.m"
                MR_Word transform_hlds__termination__ArgSizeError_25;
#line 795 "termination.m"
                MR_Word transform_hlds__termination__V_33_33;
#line 795 "termination.m"
                MR_Word transform_hlds__termination__V_34_34;

#line 795 "termination.m"
                {
#line 795 "termination.m"
                  hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__termination__PredInfo_3, &transform_hlds__termination__Context_23);
                }
#line 796 "termination.m"
                {
#line 796 "termination.m"
                  transform_hlds__termination__Error_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 796 "termination.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__termination__Error_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 796 "termination.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__termination__Error_24, 1) = ((MR_Box) (transform_hlds__termination__PredId_2));
#line 796 "termination.m"
                }
#line 797 "termination.m"
                {
#line 797 "termination.m"
                  transform_hlds__termination__ArgSizeError_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 797 "termination.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeError_25, 0) = ((MR_Box) (transform_hlds__termination__Context_23));
#line 797 "termination.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeError_25, 1) = ((MR_Box) (transform_hlds__termination__Error_24));
#line 797 "termination.m"
                }
#line 798 "termination.m"
                {
#line 798 "termination.m"
                  transform_hlds__termination__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 798 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__V_34_34, 0) = ((MR_Box) (transform_hlds__termination__ArgSizeError_25));
#line 798 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 798 "termination.m"
                }
#line 798 "termination.m"
                {
#line 798 "termination.m"
                  transform_hlds__termination__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 798 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__V_33_33, 0) = ((MR_Box) (transform_hlds__termination__V_34_34));
#line 798 "termination.m"
                }
#line 798 "termination.m"
                {
#line 798 "termination.m"
                  transform_hlds__termination__ArgSizeInfo_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 798 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__ArgSizeInfo_22, 0) = ((MR_Box) (transform_hlds__termination__V_33_33));
#line 798 "termination.m"
                }
#line 795 "termination.m"
              }
#line 801 "termination.m"
            {
#line 801 "termination.m"
              hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_p_0(transform_hlds__termination__ArgSizeInfo_22, transform_hlds__termination__ProcInfo0_19, &transform_hlds__termination__ProcInfo1_26);
            }
#line 802 "termination.m"
            mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 802 "termination.m"
            {
#line 802 "termination.m"
              hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_5[1]), transform_hlds__termination__ProcInfo1_26, &transform_hlds__termination__ProcInfo_27);
            }
#line 804 "termination.m"
            {
#line 804 "termination.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__termination__TypeCtorInfo_42_42, transform_hlds__termination__ProcId_13, ((MR_Box) (transform_hlds__termination__ProcInfo_27)), transform_hlds__termination__STATE_VARIABLE_ProcTable_0_5, &transform_hlds__termination__STATE_VARIABLE_ProcTable_39_39);
            }
#line 805 "termination.m"
            /* direct tailcall eliminated */
#line 805 "termination.m"
            {
#line 805 "termination.m"
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__ProcIds_14;
#line 805 "termination.m"
              MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_5 = transform_hlds__termination__STATE_VARIABLE_ProcTable_39_39;

#line 805 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ProcTable_0_5 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_5;
#line 805 "termination.m"
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
#line 805 "termination.m"
            }
#line 805 "termination.m"
            continue;
#line 785 "termination.m"
          }
#line 783 "termination.m"
      }
#line 783 "termination.m"
      break;
#line 783 "termination.m"
    }
#line 780 "termination.m"
}

#line 723 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_generated_terminates_4_p_0(
#line 723 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 723 "termination.m"
  MR_Word transform_hlds__termination__SpecialPredId_2,
#line 723 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0_3,
#line 723 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcTable_4)
#line 723 "termination.m"
{
#line 726 "termination.m"
  while (MR_TRUE)
#line 726 "termination.m"
    {
#line 726 "termination.m"
      /* tailcall optimized into a loop */
#line 726 "termination.m"
      {
#line 726 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 726 "termination.m"
        if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 726 "termination.m"
          *transform_hlds__termination__STATE_VARIABLE_ProcTable_4 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0_3;
#line 726 "termination.m"
        else
#line 727 "termination.m"
          {
#line 727 "termination.m"
            MR_Integer transform_hlds__termination__ProcId_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));
#line 727 "termination.m"
            MR_Word transform_hlds__termination__ProcIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
#line 727 "termination.m"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_23_23;

#line 741 "termination.m"
#line 741 "termination.m"
            switch (transform_hlds__termination__SpecialPredId_2) {
#line 741 "termination.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 741 "termination.m"
              case (MR_Integer) 2:
#line 741 "termination.m"
              case (MR_Integer) 1:
#line 741 "termination.m"
              case (MR_Integer) 0:
#line 732 "termination.m"
                {
#line 732 "termination.m"
                  MR_Word transform_hlds__termination__TypeCtorInfo_26_26 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 732 "termination.m"
                  MR_Word transform_hlds__termination__ProcInfo0_13;
#line 732 "termination.m"
                  MR_Word transform_hlds__termination__HeadVars_14;
#line 732 "termination.m"
                  MR_Word transform_hlds__termination__ArgSize_15;
#line 732 "termination.m"
                  MR_Word transform_hlds__termination__Termination_16;
#line 732 "termination.m"
                  MR_Word transform_hlds__termination__ProcInfo1_17;
#line 732 "termination.m"
                  MR_Word transform_hlds__termination__ProcInfo_18;
#line 732 "termination.m"
                  MR_Word transform_hlds__termination__V_21_21;
#line 732 "termination.m"
                  MR_Word transform_hlds__termination__V_22_22;
#line 733 "termination.m"
                  MR_Box transform_hlds__termination__conv0_ProcInfo0_13;

#line 733 "termination.m"
                  {
#line 733 "termination.m"
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__termination__TypeCtorInfo_26_26, transform_hlds__termination__STATE_VARIABLE_ProcTable_0_3, transform_hlds__termination__ProcId_9, &transform_hlds__termination__conv0_ProcInfo0_13);
                  }
#line 733 "termination.m"
                  transform_hlds__termination__ProcInfo0_13 = ((MR_Word) transform_hlds__termination__conv0_ProcInfo0_13);
#line 734 "termination.m"
                  {
#line 734 "termination.m"
                    hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__termination__ProcInfo0_13, &transform_hlds__termination__HeadVars_14);
                  }
#line 758 "termination.m"
#line 758 "termination.m"
                  switch (transform_hlds__termination__SpecialPredId_2) {
#line 758 "termination.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 758 "termination.m"
                    case (MR_Integer) 2:
#line 758 "termination.m"
                      {
#line 758 "termination.m"
                        MR_Word transform_hlds__termination__OutList_31;

#line 759 "termination.m"
                        {
#line 759 "termination.m"
                          transform_hlds__term_util__make_bool_list_3_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[3], transform_hlds__termination__HeadVars_14, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[31]), &transform_hlds__termination__OutList_31);
                        }
#line 760 "termination.m"
                        {
#line 760 "termination.m"
                          transform_hlds__termination__ArgSize_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 760 "termination.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSize_15, 0) = ((MR_Box) ((MR_Integer) 0));
#line 760 "termination.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSize_15, 1) = ((MR_Box) (transform_hlds__termination__OutList_31));
#line 760 "termination.m"
                        }
#line 761 "termination.m"
                        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 761 "termination.m"
                        transform_hlds__termination__Termination_16 = (MR_Word) &transform_hlds__termination_scalar_common_5[0];
#line 758 "termination.m"
                      }
#line 758 "termination.m"
                      break;
#line 758 "termination.m"
                    case (MR_Integer) 1:
#line 768 "termination.m"
                      {
#line 768 "termination.m"
                        MR_Word transform_hlds__termination__OutList_59;

#line 769 "termination.m"
                        {
#line 769 "termination.m"
                          transform_hlds__term_util__make_bool_list_3_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[3], transform_hlds__termination__HeadVars_14, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[30]), &transform_hlds__termination__OutList_59);
                        }
#line 770 "termination.m"
                        {
#line 770 "termination.m"
                          transform_hlds__termination__ArgSize_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 770 "termination.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSize_15, 0) = ((MR_Box) ((MR_Integer) 0));
#line 770 "termination.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSize_15, 1) = ((MR_Box) (transform_hlds__termination__OutList_59));
#line 770 "termination.m"
                        }
#line 771 "termination.m"
                        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 771 "termination.m"
                        transform_hlds__termination__Termination_16 = (MR_Word) &transform_hlds__termination_scalar_common_5[0];
#line 768 "termination.m"
                      }
#line 758 "termination.m"
                      break;
#line 758 "termination.m"
                    case (MR_Integer) 0:
#line 763 "termination.m"
                      {
#line 763 "termination.m"
                        MR_Word transform_hlds__termination__OutList_58;

#line 764 "termination.m"
                        {
#line 764 "termination.m"
                          transform_hlds__term_util__make_bool_list_3_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[3], transform_hlds__termination__HeadVars_14, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[33]), &transform_hlds__termination__OutList_58);
                        }
#line 765 "termination.m"
                        {
#line 765 "termination.m"
                          transform_hlds__termination__ArgSize_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 765 "termination.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSize_15, 0) = ((MR_Box) ((MR_Integer) 0));
#line 765 "termination.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSize_15, 1) = ((MR_Box) (transform_hlds__termination__OutList_58));
#line 765 "termination.m"
                        }
#line 766 "termination.m"
                        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 766 "termination.m"
                        transform_hlds__termination__Termination_16 = (MR_Word) &transform_hlds__termination_scalar_common_5[0];
#line 763 "termination.m"
                      }
#line 758 "termination.m"
                      break;
#line 758 "termination.m"
                  }
#line 737 "termination.m"
                  {
#line 737 "termination.m"
                    transform_hlds__termination__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 737 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_21_21, 0) = ((MR_Box) (transform_hlds__termination__ArgSize_15));
#line 737 "termination.m"
                  }
#line 737 "termination.m"
                  {
#line 737 "termination.m"
                    hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_p_0(transform_hlds__termination__V_21_21, transform_hlds__termination__ProcInfo0_13, &transform_hlds__termination__ProcInfo1_17);
                  }
#line 738 "termination.m"
                  {
#line 738 "termination.m"
                    transform_hlds__termination__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 738 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_22_22, 0) = ((MR_Box) (transform_hlds__termination__Termination_16));
#line 738 "termination.m"
                  }
#line 738 "termination.m"
                  {
#line 738 "termination.m"
                    hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(transform_hlds__termination__V_22_22, transform_hlds__termination__ProcInfo1_17, &transform_hlds__termination__ProcInfo_18);
                  }
#line 740 "termination.m"
                  {
#line 740 "termination.m"
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__termination__TypeCtorInfo_26_26, transform_hlds__termination__ProcId_9, ((MR_Box) (transform_hlds__termination__ProcInfo_18)), transform_hlds__termination__STATE_VARIABLE_ProcTable_0_3, &transform_hlds__termination__STATE_VARIABLE_ProcTable_23_23);
                  }
#line 732 "termination.m"
                }
#line 741 "termination.m"
                break;
#line 741 "termination.m"
              case (MR_Integer) 3:
#line 742 "termination.m"
                transform_hlds__termination__STATE_VARIABLE_ProcTable_23_23 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0_3;
#line 741 "termination.m"
                break;
#line 741 "termination.m"
            }
#line 747 "termination.m"
            /* direct tailcall eliminated */
#line 747 "termination.m"
            {
#line 747 "termination.m"
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__ProcIds_10;
#line 747 "termination.m"
              MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_3 = transform_hlds__termination__STATE_VARIABLE_ProcTable_23_23;

#line 747 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ProcTable_0_3 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_3;
#line 747 "termination.m"
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
#line 747 "termination.m"
            }
#line 747 "termination.m"
            continue;
#line 727 "termination.m"
          }
#line 726 "termination.m"
      }
#line 726 "termination.m"
      break;
#line 726 "termination.m"
    }
#line 723 "termination.m"
}

#line 605 "termination.m"
static void MR_CALL 
transform_hlds__termination__term_preprocess_preds_3_p_0(
#line 605 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 605 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2,
#line 605 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_3)
#line 605 "termination.m"
{
#line 608 "termination.m"
  while (MR_TRUE)
#line 608 "termination.m"
    {
#line 608 "termination.m"
      /* tailcall optimized into a loop */
#line 608 "termination.m"
      {
#line 608 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 608 "termination.m"
        if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 608 "termination.m"
          *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_3 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2;
#line 608 "termination.m"
        else
#line 609 "termination.m"
          {
#line 609 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_60_60;
#line 609 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_61_61;
#line 609 "termination.m"
            MR_Word transform_hlds__termination__PredId_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));
#line 609 "termination.m"
            MR_Word transform_hlds__termination__PredIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
#line 609 "termination.m"
            MR_Word transform_hlds__termination__Globals_10;
#line 609 "termination.m"
            MR_Word transform_hlds__termination__MakeOptInt_11;
#line 609 "termination.m"
            MR_Word transform_hlds__termination__PredTable0_12;
#line 609 "termination.m"
            MR_Word transform_hlds__termination__PredInfo0_13;
#line 609 "termination.m"
            MR_Word transform_hlds__termination__PredStatus_14;
#line 609 "termination.m"
            MR_Word transform_hlds__termination__Context_15;
#line 609 "termination.m"
            MR_Word transform_hlds__termination__ProcTable0_16;
#line 609 "termination.m"
            MR_Word transform_hlds__termination__Markers_17;
#line 609 "termination.m"
            MR_Word transform_hlds__termination__ProcIds_18;
#line 609 "termination.m"
            MR_Word transform_hlds__termination__ProcTable2_20;
#line 609 "termination.m"
            MR_Word transform_hlds__termination__ProcTable_27;
#line 609 "termination.m"
            MR_Word transform_hlds__termination__PredInfo_28;
#line 609 "termination.m"
            MR_Word transform_hlds__termination__PredTable_29;
#line 609 "termination.m"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_56_56;
#line 614 "termination.m"
            MR_Box transform_hlds__termination__conv0_PredInfo0_13;
#line 628 "termination.m"
            MR_Word transform_hlds__termination__ProcTable1_19;

#line 610 "termination.m"
            {
#line 610 "termination.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2, &transform_hlds__termination__Globals_10);
            }
#line 611 "termination.m"
            {
#line 611 "termination.m"
              libs__globals__lookup_bool_option_3_p_0(transform_hlds__termination__Globals_10, (MR_Integer) 86, &transform_hlds__termination__MakeOptInt_11);
            }
#line 613 "termination.m"
            {
#line 613 "termination.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2, &transform_hlds__termination__PredTable0_12);
            }
#line 1900 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_60_60 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 1902 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_61_61 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 614 "termination.m"
            {
#line 614 "termination.m"
              mercury__map__lookup_3_p_0(transform_hlds__termination__TypeCtorInfo_60_60, transform_hlds__termination__TypeCtorInfo_61_61, transform_hlds__termination__PredTable0_12, ((MR_Box) (transform_hlds__termination__PredId_7)), &transform_hlds__termination__conv0_PredInfo0_13);
            }
#line 614 "termination.m"
            transform_hlds__termination__PredInfo0_13 = ((MR_Word) transform_hlds__termination__conv0_PredInfo0_13);
#line 615 "termination.m"
            {
#line 615 "termination.m"
              hlds__hlds_pred__pred_info_get_status_2_p_0(transform_hlds__termination__PredInfo0_13, &transform_hlds__termination__PredStatus_14);
            }
#line 616 "termination.m"
            {
#line 616 "termination.m"
              hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__termination__PredInfo0_13, &transform_hlds__termination__Context_15);
            }
#line 617 "termination.m"
            {
#line 617 "termination.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__termination__PredInfo0_13, &transform_hlds__termination__ProcTable0_16);
            }
#line 618 "termination.m"
            {
#line 618 "termination.m"
              hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__termination__PredInfo0_13, &transform_hlds__termination__Markers_17);
            }
#line 619 "termination.m"
            {
#line 619 "termination.m"
              transform_hlds__termination__ProcIds_18 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__termination__PredInfo0_13);
            }
#line 700 "termination.m"
            {
#line 700 "termination.m"
              transform_hlds__termination__succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(transform_hlds__termination__PredInfo0_13);
            }
#line 704 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 702 "termination.m"
              {
#line 702 "termination.m"
                {
#line 702 "termination.m"
                  transform_hlds__termination__set_builtin_terminates_6_p_0(transform_hlds__termination__ProcIds_18, transform_hlds__termination__PredId_7, transform_hlds__termination__PredInfo0_13, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2, transform_hlds__termination__ProcTable0_16, &transform_hlds__termination__ProcTable1_19);
                }
#line 702 "termination.m"
                transform_hlds__termination__succeeded = MR_TRUE;
#line 702 "termination.m"
              }
#line 704 "termination.m"
            else
#line 719 "termination.m"
              {
#line 719 "termination.m"
                MR_Word transform_hlds__termination__SpecialPredId_74;
#line 713 "termination.m"
                MR_Word transform_hlds__termination__SpecPredId0_72;
#line 706 "termination.m"
                MR_Word transform_hlds__termination__ModuleName_69;
#line 706 "termination.m"
                MR_String transform_hlds__termination__Name_70;
#line 706 "termination.m"
                MR_Integer transform_hlds__termination__Arity_71;
#line 706 "termination.m"
                MR_Integer transform_hlds__termination__V_79_79;
#line 709 "termination.m"
                MR_String transform_hlds__termination__V_73_73;

#line 706 "termination.m"
                {
#line 706 "termination.m"
                  transform_hlds__termination__ModuleName_69 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__termination__PredInfo0_13);
                }
#line 707 "termination.m"
                {
#line 707 "termination.m"
                  transform_hlds__termination__Name_70 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__termination__PredInfo0_13);
                }
#line 708 "termination.m"
                {
#line 708 "termination.m"
                  transform_hlds__termination__Arity_71 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__termination__PredInfo0_13);
                }
#line 709 "termination.m"
                {
#line 709 "termination.m"
                  transform_hlds__termination__succeeded = mdbcomp__prim_data__special_pred_name_arity_4_p_1(&transform_hlds__termination__SpecPredId0_72, transform_hlds__termination__Name_70, &transform_hlds__termination__V_73_73, &transform_hlds__termination__V_79_79);
                }
#line 706 "termination.m"
                if (transform_hlds__termination__succeeded)
#line 706 "termination.m"
                  {
#line 709 "termination.m"
                    transform_hlds__termination__succeeded = (transform_hlds__termination__Arity_71 == transform_hlds__termination__V_79_79);
#line 706 "termination.m"
                    if (transform_hlds__termination__succeeded)
#line 710 "termination.m"
                      {
#line 710 "termination.m"
                        transform_hlds__termination__succeeded = mdbcomp__builtin_modules__any_mercury_builtin_module_1_p_0(transform_hlds__termination__ModuleName_69);
                      }
#line 706 "termination.m"
                  }
#line 713 "termination.m"
                if (transform_hlds__termination__succeeded)
#line 712 "termination.m"
                  {
#line 712 "termination.m"
                    transform_hlds__termination__SpecialPredId_74 = transform_hlds__termination__SpecPredId0_72;
#line 712 "termination.m"
                    transform_hlds__termination__succeeded = MR_TRUE;
#line 712 "termination.m"
                  }
#line 713 "termination.m"
                else
#line 714 "termination.m"
                  {
#line 714 "termination.m"
                    MR_Word transform_hlds__termination__Origin_75;
#line 715 "termination.m"
                    MR_Word transform_hlds__termination__V_76_76;

#line 714 "termination.m"
                    {
#line 714 "termination.m"
                      hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__termination__PredInfo0_13, &transform_hlds__termination__Origin_75);
                    }
#line 715 "termination.m"
                    transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__Origin_75)) == (MR_mktag((MR_Integer) 0)));
#line 715 "termination.m"
                    if (transform_hlds__termination__succeeded)
#line 715 "termination.m"
                      {
#line 715 "termination.m"
                        transform_hlds__termination__SpecialPredId_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__Origin_75, (MR_Integer) 0)));
#line 715 "termination.m"
                        transform_hlds__termination__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__Origin_75, (MR_Integer) 1)));
#line 715 "termination.m"
                      }
#line 714 "termination.m"
                  }
#line 719 "termination.m"
                if (transform_hlds__termination__succeeded)
#line 719 "termination.m"
                  {
#line 718 "termination.m"
                    {
#line 718 "termination.m"
                      transform_hlds__termination__set_generated_terminates_4_p_0(transform_hlds__termination__ProcIds_18, transform_hlds__termination__SpecialPredId_74, transform_hlds__termination__ProcTable0_16, &transform_hlds__termination__ProcTable1_19);
                    }
#line 718 "termination.m"
                    transform_hlds__termination__succeeded = MR_TRUE;
#line 719 "termination.m"
                  }
#line 719 "termination.m"
              }
#line 628 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 627 "termination.m"
              transform_hlds__termination__ProcTable2_20 = transform_hlds__termination__ProcTable1_19;
#line 628 "termination.m"
            else
#line 639 "termination.m"
              {
#line 629 "termination.m"
                MR_Word transform_hlds__termination__V_33_33;

#line 629 "termination.m"
                {
#line 629 "termination.m"
                  transform_hlds__termination__V_33_33 = hlds__status__pred_status_defined_in_this_module_1_f_0(transform_hlds__termination__PredStatus_14);
                }
#line 629 "termination.m"
                transform_hlds__termination__succeeded = (transform_hlds__termination__V_33_33 == (MR_Integer) 1);
#line 639 "termination.m"
                if (transform_hlds__termination__succeeded)
#line 636 "termination.m"
                  {
#line 633 "termination.m"
                    {
#line 633 "termination.m"
                      transform_hlds__termination__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__termination__Markers_17, (MR_Integer) 17);
                    }
#line 636 "termination.m"
                    if (transform_hlds__termination__succeeded)
#line 634 "termination.m"
                      {
#line 634 "termination.m"
                        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 634 "termination.m"
                        {
#line 634 "termination.m"
                          transform_hlds__termination__change_procs_termination_info_5_p_0(transform_hlds__termination__ProcIds_18, (MR_Integer) 1, (MR_Word) &transform_hlds__termination_scalar_common_5[0], transform_hlds__termination__ProcTable0_16, &transform_hlds__termination__ProcTable2_20);
                        }
#line 634 "termination.m"
                      }
#line 636 "termination.m"
                    else
#line 637 "termination.m"
                      transform_hlds__termination__ProcTable2_20 = transform_hlds__termination__ProcTable0_16;
#line 636 "termination.m"
                  }
#line 639 "termination.m"
                else
#line 664 "termination.m"
                  {
#line 664 "termination.m"
                    MR_Word transform_hlds__termination__ArgSizeError_23;
#line 664 "termination.m"
                    MR_Word transform_hlds__termination__ArgSizeInfo_24;
#line 664 "termination.m"
                    MR_Word transform_hlds__termination__V_48_48;
#line 664 "termination.m"
                    MR_Word transform_hlds__termination__ProcTable1_58;

#line 651 "termination.m"
                    {
#line 651 "termination.m"
                      transform_hlds__termination__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__termination__Markers_17, (MR_Integer) 17);
                    }
#line 652 "termination.m"
                    if (!(transform_hlds__termination__succeeded))
#line 653 "termination.m"
                      {
#line 653 "termination.m"
                        MR_Word transform_hlds__termination__V_38_38;

#line 653 "termination.m"
                        transform_hlds__termination__succeeded = (transform_hlds__termination__MakeOptInt_11 == (MR_Integer) 0);
#line 653 "termination.m"
                        if (transform_hlds__termination__succeeded)
#line 653 "termination.m"
                          {
#line 654 "termination.m"
                            transform_hlds__termination__V_38_38 = (MR_Integer) 19;
#line 654 "termination.m"
                            {
#line 654 "termination.m"
                              transform_hlds__termination__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__termination__Markers_17, transform_hlds__termination__V_38_38);
                            }
#line 653 "termination.m"
                          }
#line 653 "termination.m"
                      }
#line 659 "termination.m"
                    if (transform_hlds__termination__succeeded)
#line 657 "termination.m"
                      {
#line 657 "termination.m"
                        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 657 "termination.m"
                        {
#line 657 "termination.m"
                          transform_hlds__termination__change_procs_termination_info_5_p_0(transform_hlds__termination__ProcIds_18, (MR_Integer) 1, (MR_Word) &transform_hlds__termination_scalar_common_5[0], transform_hlds__termination__ProcTable0_16, &transform_hlds__termination__ProcTable1_58);
                        }
#line 657 "termination.m"
                      }
#line 659 "termination.m"
                    else
#line 660 "termination.m"
                      {
#line 660 "termination.m"
                        MR_Word transform_hlds__termination__TerminationError_21;
#line 660 "termination.m"
                        MR_Word transform_hlds__termination__TerminationInfo_22;
#line 660 "termination.m"
                        MR_Word transform_hlds__termination__V_44_44;

#line 660 "termination.m"
                        {
#line 660 "termination.m"
                          transform_hlds__termination__TerminationError_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 660 "termination.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__termination__TerminationError_21, 0) = ((MR_Box) (transform_hlds__termination__Context_15));
#line 660 "termination.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__termination__TerminationError_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 660 "termination.m"
                        }
#line 661 "termination.m"
                        {
#line 661 "termination.m"
                          transform_hlds__termination__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 661 "termination.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__termination__V_44_44, 0) = ((MR_Box) (transform_hlds__termination__TerminationError_21));
#line 661 "termination.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__termination__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 661 "termination.m"
                        }
#line 661 "termination.m"
                        {
#line 661 "termination.m"
                          transform_hlds__termination__TerminationInfo_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 661 "termination.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__termination__TerminationInfo_22, 0) = ((MR_Box) (transform_hlds__termination__V_44_44));
#line 661 "termination.m"
                        }
#line 662 "termination.m"
                        {
#line 662 "termination.m"
                          transform_hlds__termination__change_procs_termination_info_5_p_0(transform_hlds__termination__ProcIds_18, (MR_Integer) 0, transform_hlds__termination__TerminationInfo_22, transform_hlds__termination__ProcTable0_16, &transform_hlds__termination__ProcTable1_58);
                        }
#line 660 "termination.m"
                      }
#line 665 "termination.m"
                    {
#line 665 "termination.m"
                      transform_hlds__termination__ArgSizeError_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 665 "termination.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeError_23, 0) = ((MR_Box) (transform_hlds__termination__Context_15));
#line 665 "termination.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeError_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 665 "termination.m"
                    }
#line 666 "termination.m"
                    {
#line 666 "termination.m"
                      transform_hlds__termination__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 666 "termination.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__termination__V_48_48, 0) = ((MR_Box) (transform_hlds__termination__ArgSizeError_23));
#line 666 "termination.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__termination__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 666 "termination.m"
                    }
#line 666 "termination.m"
                    {
#line 666 "termination.m"
                      transform_hlds__termination__ArgSizeInfo_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 666 "termination.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__termination__ArgSizeInfo_24, 0) = ((MR_Box) (transform_hlds__termination__V_48_48));
#line 666 "termination.m"
                    }
#line 667 "termination.m"
                    {
#line 667 "termination.m"
                      transform_hlds__termination__change_procs_arg_size_info_5_p_0(transform_hlds__termination__ProcIds_18, (MR_Integer) 0, transform_hlds__termination__ArgSizeInfo_24, transform_hlds__termination__ProcTable1_58, &transform_hlds__termination__ProcTable2_20);
                    }
#line 664 "termination.m"
                  }
#line 639 "termination.m"
              }
#line 670 "termination.m"
            {
#line 670 "termination.m"
              transform_hlds__termination__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__termination__Markers_17, (MR_Integer) 18);
            }
#line 675 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 671 "termination.m"
              {
#line 671 "termination.m"
                MR_Word transform_hlds__termination__RequestError_25;
#line 671 "termination.m"
                MR_Word transform_hlds__termination__RequestTerminationInfo_26;
#line 671 "termination.m"
                MR_Word transform_hlds__termination__V_52_52;
#line 671 "termination.m"
                MR_Word transform_hlds__termination__V_53_53;

#line 671 "termination.m"
                {
#line 671 "termination.m"
                  transform_hlds__termination__V_52_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 671 "termination.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__termination__V_52_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 671 "termination.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__termination__V_52_52, 1) = ((MR_Box) (transform_hlds__termination__PredId_7));
#line 671 "termination.m"
                }
#line 671 "termination.m"
                {
#line 671 "termination.m"
                  transform_hlds__termination__RequestError_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 671 "termination.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__termination__RequestError_25, 0) = ((MR_Box) (transform_hlds__termination__Context_15));
#line 671 "termination.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__termination__RequestError_25, 1) = ((MR_Box) (transform_hlds__termination__V_52_52));
#line 671 "termination.m"
                }
#line 672 "termination.m"
                {
#line 672 "termination.m"
                  transform_hlds__termination__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 672 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__V_53_53, 0) = ((MR_Box) (transform_hlds__termination__RequestError_25));
#line 672 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 672 "termination.m"
                }
#line 672 "termination.m"
                {
#line 672 "termination.m"
                  transform_hlds__termination__RequestTerminationInfo_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 672 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__RequestTerminationInfo_26, 0) = ((MR_Box) (transform_hlds__termination__V_53_53));
#line 672 "termination.m"
                }
#line 673 "termination.m"
                {
#line 673 "termination.m"
                  transform_hlds__termination__change_procs_termination_info_5_p_0(transform_hlds__termination__ProcIds_18, (MR_Integer) 1, transform_hlds__termination__RequestTerminationInfo_26, transform_hlds__termination__ProcTable2_20, &transform_hlds__termination__ProcTable_27);
                }
#line 671 "termination.m"
              }
#line 675 "termination.m"
            else
#line 676 "termination.m"
              transform_hlds__termination__ProcTable_27 = transform_hlds__termination__ProcTable2_20;
#line 678 "termination.m"
            {
#line 678 "termination.m"
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__termination__ProcTable_27, transform_hlds__termination__PredInfo0_13, &transform_hlds__termination__PredInfo_28);
            }
#line 679 "termination.m"
            {
#line 679 "termination.m"
              mercury__map__set_4_p_0(transform_hlds__termination__TypeCtorInfo_60_60, transform_hlds__termination__TypeCtorInfo_61_61, ((MR_Box) (transform_hlds__termination__PredId_7)), ((MR_Box) (transform_hlds__termination__PredInfo_28)), transform_hlds__termination__PredTable0_12, &transform_hlds__termination__PredTable_29);
            }
#line 680 "termination.m"
            {
#line 680 "termination.m"
              hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__termination__PredTable_29, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_56_56);
            }
#line 681 "termination.m"
            /* direct tailcall eliminated */
#line 681 "termination.m"
            {
#line 681 "termination.m"
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__PredIds_8;
#line 681 "termination.m"
              MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_2 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_56_56;

#line 681 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_2;
#line 681 "termination.m"
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
#line 681 "termination.m"
            }
#line 681 "termination.m"
            continue;
#line 609 "termination.m"
          }
#line 608 "termination.m"
      }
#line 608 "termination.m"
      break;
#line 608 "termination.m"
    }
#line 605 "termination.m"
}

#line 565 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__maybe_report_termination_errors_5_p_0_4(
#line 565 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 565 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1)
#line 565 "termination.m"
{
#line 565 "termination.m"
  {
#line 565 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 565 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

#line 565 "termination.m"
    {
#line 565 "termination.m"
      return transform_hlds__termination__succeeded = transform_hlds__termination__IntroducedFrom__pred__decide_what_term_errors_to_report__565__1_1_p_0(((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 565 "termination.m"
    return transform_hlds__termination__succeeded;
#line 565 "termination.m"
  }
#line 565 "termination.m"
}

#line 548 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__maybe_report_termination_errors_5_p_0_3(
#line 548 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 548 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1)
#line 548 "termination.m"
{
#line 548 "termination.m"
  {
#line 548 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 548 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

#line 548 "termination.m"
    {
#line 548 "termination.m"
      return transform_hlds__termination__succeeded = transform_hlds__term_util__is_solver_init_wrapper_pred_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 548 "termination.m"
    return transform_hlds__termination__succeeded;
#line 548 "termination.m"
  }
#line 548 "termination.m"
}

#line 536 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__maybe_report_termination_errors_5_p_0_2(
#line 536 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 536 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1)
#line 536 "termination.m"
{
#line 536 "termination.m"
  {
#line 536 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 536 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

#line 536 "termination.m"
    {
#line 536 "termination.m"
      return transform_hlds__termination__succeeded = transform_hlds__termination__IntroducedFrom__pred__decide_what_term_errors_to_report__536__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 536 "termination.m"
    return transform_hlds__termination__succeeded;
#line 536 "termination.m"
  }
#line 536 "termination.m"
}

#line 522 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__maybe_report_termination_errors_5_p_0_1(
#line 522 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 522 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1)
#line 522 "termination.m"
{
#line 522 "termination.m"
  {
#line 522 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 522 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

#line 522 "termination.m"
    {
#line 522 "termination.m"
      return transform_hlds__termination__succeeded = transform_hlds__termination__IntroducedFrom__pred__decide_what_term_errors_to_report__522__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 522 "termination.m"
    return transform_hlds__termination__succeeded;
#line 522 "termination.m"
  }
#line 522 "termination.m"
}

#line 491 "termination.m"
static void MR_CALL 
transform_hlds__termination__maybe_report_termination_errors_5_p_0(
#line 491 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_6,
#line 491 "termination.m"
  MR_Word transform_hlds__termination__SCC_7,
#line 491 "termination.m"
  MR_Word transform_hlds__termination__Errors_8,
#line 491 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_0_12,
#line 491 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_Specs_13)
#line 491 "termination.m"
{
#line 495 "termination.m"
  {
#line 495 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 495 "termination.m"
    MR_Word transform_hlds__termination__Globals_19;
#line 495 "termination.m"
    MR_Word transform_hlds__termination__NormalErrors_20;
#line 495 "termination.m"
    MR_Word transform_hlds__termination__VerboseErrors_21;
#line 528 "termination.m"
    MR_Word transform_hlds__termination__IsCheckTerm_22;
#line 528 "termination.m"
    MR_Word transform_hlds__termination__CheckTermPPIds_27;
#line 530 "termination.m"
    MR_Word transform_hlds__termination__V_28_28;
#line 530 "termination.m"
    MR_Word transform_hlds__termination__V_29_29;

#line 517 "termination.m"
    {
#line 517 "termination.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__termination__ModuleInfo_6, &transform_hlds__termination__Globals_19);
    }
#line 518 "termination.m"
    {
#line 518 "termination.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__termination__Globals_19, (MR_Integer) 409, &transform_hlds__termination__NormalErrors_20);
    }
#line 519 "termination.m"
    {
#line 519 "termination.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__termination__Globals_19, (MR_Integer) 410, &transform_hlds__termination__VerboseErrors_21);
    }
#line 522 "termination.m"
    {
#line 522 "termination.m"
      transform_hlds__termination__IsCheckTerm_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 522 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsCheckTerm_22, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_6[0]));
#line 522 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsCheckTerm_22, 1) = ((MR_Box) (transform_hlds__termination__maybe_report_termination_errors_5_p_0_1));
#line 522 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsCheckTerm_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 522 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsCheckTerm_22, 3) = ((MR_Box) (transform_hlds__termination__ModuleInfo_6));
#line 522 "termination.m"
    }
#line 529 "termination.m"
    {
#line 529 "termination.m"
      mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__termination__IsCheckTerm_22, transform_hlds__termination__SCC_7, &transform_hlds__termination__CheckTermPPIds_27);
    }
#line 530 "termination.m"
    transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__CheckTermPPIds_27)) == (MR_mktag((MR_Integer) 1)));
#line 530 "termination.m"
    if (transform_hlds__termination__succeeded)
#line 530 "termination.m"
      {
#line 530 "termination.m"
        transform_hlds__termination__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__CheckTermPPIds_27, (MR_Integer) 0)));
#line 530 "termination.m"
        transform_hlds__termination__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__CheckTermPPIds_27, (MR_Integer) 1)));
#line 502 "termination.m"
        {
#line 502 "termination.m"
          transform_hlds__term_errors__report_term_errors_5_p_0(transform_hlds__termination__ModuleInfo_6, transform_hlds__termination__SCC_7, transform_hlds__termination__Errors_8, transform_hlds__termination__STATE_VARIABLE_Specs_0_12, transform_hlds__termination__STATE_VARIABLE_Specs_13);
#line 502 "termination.m"
          return;
        }
#line 530 "termination.m"
      }
#line 530 "termination.m"
    else
#line 2556 "transform_hlds.termination.c"
      {
#line 539 "termination.m"
        MR_Word transform_hlds__termination__TypeCtorInfo_49_59 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 539 "termination.m"
        MR_Word transform_hlds__termination__IsNonImported_30;
#line 539 "termination.m"
        MR_Word transform_hlds__termination__NonImportedPPIds_32;
#line 539 "termination.m"
        MR_Word transform_hlds__termination__V_47_47;
#line 541 "termination.m"
        MR_Word transform_hlds__termination__V_33_33;
#line 541 "termination.m"
        MR_Word transform_hlds__termination__V_34_34;

#line 536 "termination.m"
        {
#line 536 "termination.m"
          transform_hlds__termination__IsNonImported_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 536 "termination.m"
          MR_hl_field(MR_mktag(0), transform_hlds__termination__IsNonImported_30, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_6[0]));
#line 536 "termination.m"
          MR_hl_field(MR_mktag(0), transform_hlds__termination__IsNonImported_30, 1) = ((MR_Box) (transform_hlds__termination__maybe_report_termination_errors_5_p_0_2));
#line 536 "termination.m"
          MR_hl_field(MR_mktag(0), transform_hlds__termination__IsNonImported_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 536 "termination.m"
          MR_hl_field(MR_mktag(0), transform_hlds__termination__IsNonImported_30, 3) = ((MR_Box) (transform_hlds__termination__ModuleInfo_6));
#line 536 "termination.m"
        }
#line 540 "termination.m"
        {
#line 540 "termination.m"
          mercury__list__filter_3_p_0(transform_hlds__termination__TypeCtorInfo_49_59, transform_hlds__termination__IsNonImported_30, transform_hlds__termination__SCC_7, &transform_hlds__termination__NonImportedPPIds_32);
        }
#line 541 "termination.m"
        transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__NonImportedPPIds_32)) == (MR_mktag((MR_Integer) 1)));
#line 541 "termination.m"
        if (transform_hlds__termination__succeeded)
#line 541 "termination.m"
          {
#line 541 "termination.m"
            transform_hlds__termination__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__NonImportedPPIds_32, (MR_Integer) 0)));
#line 541 "termination.m"
            transform_hlds__termination__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__NonImportedPPIds_32, (MR_Integer) 1)));
#line 548 "termination.m"
            {
#line 548 "termination.m"
              transform_hlds__termination__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 548 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__V_47_47, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_6[0]));
#line 548 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__V_47_47, 1) = ((MR_Box) (transform_hlds__termination__maybe_report_termination_errors_5_p_0_3));
#line 548 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__V_47_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 548 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__V_47_47, 3) = ((MR_Box) (transform_hlds__termination__ModuleInfo_6));
#line 548 "termination.m"
            }
#line 548 "termination.m"
            {
#line 548 "termination.m"
              transform_hlds__termination__succeeded = mercury__list__all_false_2_p_0(transform_hlds__termination__TypeCtorInfo_49_59, transform_hlds__termination__V_47_47, transform_hlds__termination__SCC_7);
            }
#line 541 "termination.m"
          }
#line 2621 "transform_hlds.termination.c"
        if (transform_hlds__termination__succeeded)
#line 2623 "transform_hlds.termination.c"
#line 2624 "transform_hlds.termination.c"
          switch (transform_hlds__termination__VerboseErrors_21) {
#line 2626 "transform_hlds.termination.c"
            default: /*NOTREACHED*/ MR_assert(0);
#line 2628 "transform_hlds.termination.c"
            case (MR_Integer) 0:
#line 2630 "transform_hlds.termination.c"
              {
#line 2632 "transform_hlds.termination.c"
                MR_Word transform_hlds__termination__MaybeErrorsToReport_64;

#line 577 "termination.m"
#line 577 "termination.m"
                switch (transform_hlds__termination__NormalErrors_20) {
#line 577 "termination.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 577 "termination.m"
                  case (MR_Integer) 0:
#line 579 "termination.m"
                    transform_hlds__termination__MaybeErrorsToReport_64 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 577 "termination.m"
                    break;
#line 577 "termination.m"
                  case (MR_Integer) 1:
#line 559 "termination.m"
                    {
#line 559 "termination.m"
                      MR_Word transform_hlds__termination__DirectErrors_39;

#line 569 "termination.m"
                      {
#line 569 "termination.m"
                        mercury__list__filter_3_p_0((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0, (MR_Word) &transform_hlds__termination_scalar_common_2[5], transform_hlds__termination__Errors_8, &transform_hlds__termination__DirectErrors_39);
                      }
#line 573 "termination.m"
                      if ((transform_hlds__termination__DirectErrors_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 572 "termination.m"
                        {
#line 572 "termination.m"
                          transform_hlds__termination__MaybeErrorsToReport_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 572 "termination.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__termination__MaybeErrorsToReport_64, 0) = ((MR_Box) (transform_hlds__termination__Errors_8));
#line 572 "termination.m"
                        }
#line 573 "termination.m"
                      else
#line 575 "termination.m"
                        {
#line 575 "termination.m"
                          transform_hlds__termination__MaybeErrorsToReport_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 575 "termination.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__termination__MaybeErrorsToReport_64, 0) = ((MR_Box) (transform_hlds__termination__DirectErrors_39));
#line 575 "termination.m"
                        }
#line 559 "termination.m"
                    }
#line 577 "termination.m"
                    break;
#line 577 "termination.m"
                }
#line 500 "termination.m"
                if ((transform_hlds__termination__MaybeErrorsToReport_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 499 "termination.m"
                  *transform_hlds__termination__STATE_VARIABLE_Specs_13 = transform_hlds__termination__STATE_VARIABLE_Specs_0_12;
#line 500 "termination.m"
                else
#line 501 "termination.m"
                  {
#line 501 "termination.m"
                    MR_Word transform_hlds__termination__ErrorsToReport_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__MaybeErrorsToReport_64, (MR_Integer) 0)));

#line 502 "termination.m"
                    {
#line 502 "termination.m"
                      transform_hlds__term_errors__report_term_errors_5_p_0(transform_hlds__termination__ModuleInfo_6, transform_hlds__termination__SCC_7, transform_hlds__termination__ErrorsToReport_62, transform_hlds__termination__STATE_VARIABLE_Specs_0_12, transform_hlds__termination__STATE_VARIABLE_Specs_13);
#line 502 "termination.m"
                      return;
                    }
#line 501 "termination.m"
                  }
#line 2704 "transform_hlds.termination.c"
              }
#line 2706 "transform_hlds.termination.c"
              break;
#line 2708 "transform_hlds.termination.c"
            case (MR_Integer) 1:
#line 502 "termination.m"
              {
#line 502 "termination.m"
                transform_hlds__term_errors__report_term_errors_5_p_0(transform_hlds__termination__ModuleInfo_6, transform_hlds__termination__SCC_7, transform_hlds__termination__Errors_8, transform_hlds__termination__STATE_VARIABLE_Specs_0_12, transform_hlds__termination__STATE_VARIABLE_Specs_13);
#line 502 "termination.m"
                return;
              }
#line 2717 "transform_hlds.termination.c"
              break;
#line 2719 "transform_hlds.termination.c"
          }
#line 2721 "transform_hlds.termination.c"
        else
#line 499 "termination.m"
          *transform_hlds__termination__STATE_VARIABLE_Specs_13 = transform_hlds__termination__STATE_VARIABLE_Specs_0_12;
#line 2725 "transform_hlds.termination.c"
      }
#line 495 "termination.m"
  }
#line 491 "termination.m"
}

#line 470 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_termination_infos_4_p_0(
#line 470 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 470 "termination.m"
  MR_Word transform_hlds__termination__TerminationInfo_2,
#line 470 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3,
#line 470 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4)
#line 470 "termination.m"
{
#line 473 "termination.m"
  while (MR_TRUE)
#line 473 "termination.m"
    {
#line 473 "termination.m"
      /* tailcall optimized into a loop */
#line 473 "termination.m"
      {
#line 473 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 473 "termination.m"
        if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 473 "termination.m"
          *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3;
#line 473 "termination.m"
        else
#line 474 "termination.m"
          {
#line 474 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_28_28;
#line 474 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_29_29;
#line 474 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_31_31;
#line 474 "termination.m"
            MR_Word transform_hlds__termination__PPId_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));
#line 474 "termination.m"
            MR_Word transform_hlds__termination__PPIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
#line 474 "termination.m"
            MR_Word transform_hlds__termination__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PPId_9, (MR_Integer) 0)));
#line 474 "termination.m"
            MR_Integer transform_hlds__termination__ProcId_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PPId_9, (MR_Integer) 1)));
#line 474 "termination.m"
            MR_Word transform_hlds__termination__PredTable0_15;
#line 474 "termination.m"
            MR_Word transform_hlds__termination__PredInfo0_16;
#line 474 "termination.m"
            MR_Word transform_hlds__termination__ProcTable0_17;
#line 474 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo0_18;
#line 474 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo_19;
#line 474 "termination.m"
            MR_Word transform_hlds__termination__ProcTable_20;
#line 474 "termination.m"
            MR_Word transform_hlds__termination__PredInfo_21;
#line 474 "termination.m"
            MR_Word transform_hlds__termination__PredTable_22;
#line 474 "termination.m"
            MR_Word transform_hlds__termination__V_25_25;
#line 474 "termination.m"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26;
#line 477 "termination.m"
            MR_Box transform_hlds__termination__conv0_PredInfo0_16;
#line 479 "termination.m"
            MR_Box transform_hlds__termination__conv1_ProcInfo0_18;

#line 476 "termination.m"
            {
#line 476 "termination.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__termination__PredTable0_15);
            }
#line 2808 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 2810 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_29_29 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 477 "termination.m"
            {
#line 477 "termination.m"
              mercury__map__lookup_3_p_0(transform_hlds__termination__TypeCtorInfo_28_28, transform_hlds__termination__TypeCtorInfo_29_29, transform_hlds__termination__PredTable0_15, ((MR_Box) (transform_hlds__termination__PredId_13)), &transform_hlds__termination__conv0_PredInfo0_16);
            }
#line 477 "termination.m"
            transform_hlds__termination__PredInfo0_16 = ((MR_Word) transform_hlds__termination__conv0_PredInfo0_16);
#line 478 "termination.m"
            {
#line 478 "termination.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__termination__PredInfo0_16, &transform_hlds__termination__ProcTable0_17);
            }
#line 2824 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 479 "termination.m"
            {
#line 479 "termination.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__termination__TypeCtorInfo_31_31, transform_hlds__termination__ProcTable0_17, transform_hlds__termination__ProcId_14, &transform_hlds__termination__conv1_ProcInfo0_18);
            }
#line 479 "termination.m"
            transform_hlds__termination__ProcInfo0_18 = ((MR_Word) transform_hlds__termination__conv1_ProcInfo0_18);
#line 481 "termination.m"
            {
#line 481 "termination.m"
              transform_hlds__termination__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 481 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_25_25, 0) = ((MR_Box) (transform_hlds__termination__TerminationInfo_2));
#line 481 "termination.m"
            }
#line 481 "termination.m"
            {
#line 481 "termination.m"
              hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(transform_hlds__termination__V_25_25, transform_hlds__termination__ProcInfo0_18, &transform_hlds__termination__ProcInfo_19);
            }
#line 483 "termination.m"
            {
#line 483 "termination.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__termination__TypeCtorInfo_31_31, transform_hlds__termination__ProcId_14, ((MR_Box) (transform_hlds__termination__ProcInfo_19)), transform_hlds__termination__ProcTable0_17, &transform_hlds__termination__ProcTable_20);
            }
#line 484 "termination.m"
            {
#line 484 "termination.m"
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__termination__ProcTable_20, transform_hlds__termination__PredInfo0_16, &transform_hlds__termination__PredInfo_21);
            }
#line 485 "termination.m"
            {
#line 485 "termination.m"
              mercury__map__det_update_4_p_0(transform_hlds__termination__TypeCtorInfo_28_28, transform_hlds__termination__TypeCtorInfo_29_29, ((MR_Box) (transform_hlds__termination__PredId_13)), ((MR_Box) (transform_hlds__termination__PredInfo_21)), transform_hlds__termination__PredTable0_15, &transform_hlds__termination__PredTable_22);
            }
#line 486 "termination.m"
            {
#line 486 "termination.m"
              hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__termination__PredTable_22, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26);
            }
#line 487 "termination.m"
            /* direct tailcall eliminated */
#line 487 "termination.m"
            {
#line 487 "termination.m"
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__PPIds_10;
#line 487 "termination.m"
              MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26;

#line 487 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 487 "termination.m"
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
#line 487 "termination.m"
            }
#line 487 "termination.m"
            continue;
#line 474 "termination.m"
          }
#line 473 "termination.m"
      }
#line 473 "termination.m"
      break;
#line 473 "termination.m"
    }
#line 470 "termination.m"
}

#line 450 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_infinite_arg_size_infos_4_p_0(
#line 450 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 450 "termination.m"
  MR_Word transform_hlds__termination__ArgSizeInfo_2,
#line 450 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3,
#line 450 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4)
#line 450 "termination.m"
{
#line 453 "termination.m"
  while (MR_TRUE)
#line 453 "termination.m"
    {
#line 453 "termination.m"
      /* tailcall optimized into a loop */
#line 453 "termination.m"
      {
#line 453 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 453 "termination.m"
        if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 453 "termination.m"
          *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3;
#line 453 "termination.m"
        else
#line 454 "termination.m"
          {
#line 454 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_28_28;
#line 454 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_29_29;
#line 454 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_31_31;
#line 454 "termination.m"
            MR_Word transform_hlds__termination__PPId_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));
#line 454 "termination.m"
            MR_Word transform_hlds__termination__PPIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
#line 454 "termination.m"
            MR_Word transform_hlds__termination__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PPId_9, (MR_Integer) 0)));
#line 454 "termination.m"
            MR_Integer transform_hlds__termination__ProcId_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PPId_9, (MR_Integer) 1)));
#line 454 "termination.m"
            MR_Word transform_hlds__termination__PredTable0_15;
#line 454 "termination.m"
            MR_Word transform_hlds__termination__PredInfo0_16;
#line 454 "termination.m"
            MR_Word transform_hlds__termination__ProcTable0_17;
#line 454 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo0_18;
#line 454 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo_19;
#line 454 "termination.m"
            MR_Word transform_hlds__termination__ProcTable_20;
#line 454 "termination.m"
            MR_Word transform_hlds__termination__PredInfo_21;
#line 454 "termination.m"
            MR_Word transform_hlds__termination__PredTable_22;
#line 454 "termination.m"
            MR_Word transform_hlds__termination__V_25_25;
#line 454 "termination.m"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26;
#line 457 "termination.m"
            MR_Box transform_hlds__termination__conv0_PredInfo0_16;
#line 459 "termination.m"
            MR_Box transform_hlds__termination__conv1_ProcInfo0_18;

#line 456 "termination.m"
            {
#line 456 "termination.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__termination__PredTable0_15);
            }
#line 2970 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 2972 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_29_29 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 457 "termination.m"
            {
#line 457 "termination.m"
              mercury__map__lookup_3_p_0(transform_hlds__termination__TypeCtorInfo_28_28, transform_hlds__termination__TypeCtorInfo_29_29, transform_hlds__termination__PredTable0_15, ((MR_Box) (transform_hlds__termination__PredId_13)), &transform_hlds__termination__conv0_PredInfo0_16);
            }
#line 457 "termination.m"
            transform_hlds__termination__PredInfo0_16 = ((MR_Word) transform_hlds__termination__conv0_PredInfo0_16);
#line 458 "termination.m"
            {
#line 458 "termination.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__termination__PredInfo0_16, &transform_hlds__termination__ProcTable0_17);
            }
#line 2986 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 459 "termination.m"
            {
#line 459 "termination.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__termination__TypeCtorInfo_31_31, transform_hlds__termination__ProcTable0_17, transform_hlds__termination__ProcId_14, &transform_hlds__termination__conv1_ProcInfo0_18);
            }
#line 459 "termination.m"
            transform_hlds__termination__ProcInfo0_18 = ((MR_Word) transform_hlds__termination__conv1_ProcInfo0_18);
#line 461 "termination.m"
            {
#line 461 "termination.m"
              transform_hlds__termination__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 461 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_25_25, 0) = ((MR_Box) (transform_hlds__termination__ArgSizeInfo_2));
#line 461 "termination.m"
            }
#line 461 "termination.m"
            {
#line 461 "termination.m"
              hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_p_0(transform_hlds__termination__V_25_25, transform_hlds__termination__ProcInfo0_18, &transform_hlds__termination__ProcInfo_19);
            }
#line 462 "termination.m"
            {
#line 462 "termination.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__termination__TypeCtorInfo_31_31, transform_hlds__termination__ProcId_14, ((MR_Box) (transform_hlds__termination__ProcInfo_19)), transform_hlds__termination__ProcTable0_17, &transform_hlds__termination__ProcTable_20);
            }
#line 463 "termination.m"
            {
#line 463 "termination.m"
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__termination__ProcTable_20, transform_hlds__termination__PredInfo0_16, &transform_hlds__termination__PredInfo_21);
            }
#line 464 "termination.m"
            {
#line 464 "termination.m"
              mercury__map__set_4_p_0(transform_hlds__termination__TypeCtorInfo_28_28, transform_hlds__termination__TypeCtorInfo_29_29, ((MR_Box) (transform_hlds__termination__PredId_13)), ((MR_Box) (transform_hlds__termination__PredInfo_21)), transform_hlds__termination__PredTable0_15, &transform_hlds__termination__PredTable_22);
            }
#line 465 "termination.m"
            {
#line 465 "termination.m"
              hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__termination__PredTable_22, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26);
            }
#line 466 "termination.m"
            /* direct tailcall eliminated */
#line 466 "termination.m"
            {
#line 466 "termination.m"
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__PPIds_10;
#line 466 "termination.m"
              MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26;

#line 466 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 466 "termination.m"
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
#line 466 "termination.m"
            }
#line 466 "termination.m"
            continue;
#line 454 "termination.m"
          }
#line 453 "termination.m"
      }
#line 453 "termination.m"
      break;
#line 453 "termination.m"
    }
#line 450 "termination.m"
}

#line 429 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_finite_arg_size_infos_4_p_0(
#line 429 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 429 "termination.m"
  MR_Word transform_hlds__termination__OutputSupplierMap_2,
#line 429 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3,
#line 429 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4)
#line 429 "termination.m"
{
#line 432 "termination.m"
  while (MR_TRUE)
#line 432 "termination.m"
    {
#line 432 "termination.m"
      /* tailcall optimized into a loop */
#line 432 "termination.m"
      {
#line 432 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 432 "termination.m"
        if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 432 "termination.m"
          *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3;
#line 432 "termination.m"
        else
#line 433 "termination.m"
          {
#line 433 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_32_32;
#line 433 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_33_33;
#line 433 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_35_35;
#line 433 "termination.m"
            MR_Word transform_hlds__termination__Soln_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));
#line 433 "termination.m"
            MR_Word transform_hlds__termination__Solns_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
#line 433 "termination.m"
            MR_Word transform_hlds__termination__PPId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__Soln_9, (MR_Integer) 0)));
#line 433 "termination.m"
            MR_Integer transform_hlds__termination__Gamma_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__Soln_9, (MR_Integer) 1)));
#line 433 "termination.m"
            MR_Word transform_hlds__termination__PredId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PPId_13, (MR_Integer) 0)));
#line 433 "termination.m"
            MR_Integer transform_hlds__termination__ProcId_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PPId_13, (MR_Integer) 1)));
#line 433 "termination.m"
            MR_Word transform_hlds__termination__PredTable0_17;
#line 433 "termination.m"
            MR_Word transform_hlds__termination__PredInfo0_18;
#line 433 "termination.m"
            MR_Word transform_hlds__termination__ProcTable0_19;
#line 433 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo_20;
#line 433 "termination.m"
            MR_Word transform_hlds__termination__OutputSuppliers_21;
#line 433 "termination.m"
            MR_Word transform_hlds__termination__ArgSizeInfo_22;
#line 433 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo1_23;
#line 433 "termination.m"
            MR_Word transform_hlds__termination__ProcTable_24;
#line 433 "termination.m"
            MR_Word transform_hlds__termination__PredInfo_25;
#line 433 "termination.m"
            MR_Word transform_hlds__termination__PredTable_26;
#line 433 "termination.m"
            MR_Word transform_hlds__termination__V_29_29;
#line 433 "termination.m"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_30_30;
#line 437 "termination.m"
            MR_Box transform_hlds__termination__conv0_PredInfo0_18;
#line 439 "termination.m"
            MR_Box transform_hlds__termination__conv1_ProcInfo_20;
#line 440 "termination.m"
            MR_Box transform_hlds__termination__conv2_OutputSuppliers_21;

#line 436 "termination.m"
            {
#line 436 "termination.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__termination__PredTable0_17);
            }
#line 3142 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_32_32 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 3144 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_33_33 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 437 "termination.m"
            {
#line 437 "termination.m"
              mercury__map__lookup_3_p_0(transform_hlds__termination__TypeCtorInfo_32_32, transform_hlds__termination__TypeCtorInfo_33_33, transform_hlds__termination__PredTable0_17, ((MR_Box) (transform_hlds__termination__PredId_15)), &transform_hlds__termination__conv0_PredInfo0_18);
            }
#line 437 "termination.m"
            transform_hlds__termination__PredInfo0_18 = ((MR_Word) transform_hlds__termination__conv0_PredInfo0_18);
#line 438 "termination.m"
            {
#line 438 "termination.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__termination__PredInfo0_18, &transform_hlds__termination__ProcTable0_19);
            }
#line 3158 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_35_35 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 439 "termination.m"
            {
#line 439 "termination.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__termination__TypeCtorInfo_35_35, transform_hlds__termination__ProcTable0_19, transform_hlds__termination__ProcId_16, &transform_hlds__termination__conv1_ProcInfo_20);
            }
#line 439 "termination.m"
            transform_hlds__termination__ProcInfo_20 = ((MR_Word) transform_hlds__termination__conv1_ProcInfo_20);
#line 440 "termination.m"
            {
#line 440 "termination.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__termination_scalar_common_1[2], transform_hlds__termination__OutputSupplierMap_2, ((MR_Box) (transform_hlds__termination__PPId_13)), &transform_hlds__termination__conv2_OutputSuppliers_21);
            }
#line 440 "termination.m"
            transform_hlds__termination__OutputSuppliers_21 = ((MR_Word) transform_hlds__termination__conv2_OutputSuppliers_21);
#line 441 "termination.m"
            {
#line 441 "termination.m"
              transform_hlds__termination__ArgSizeInfo_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 441 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeInfo_22, 0) = ((MR_Box) (transform_hlds__termination__Gamma_14));
#line 441 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeInfo_22, 1) = ((MR_Box) (transform_hlds__termination__OutputSuppliers_21));
#line 441 "termination.m"
            }
#line 443 "termination.m"
            {
#line 443 "termination.m"
              transform_hlds__termination__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 443 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_29_29, 0) = ((MR_Box) (transform_hlds__termination__ArgSizeInfo_22));
#line 443 "termination.m"
            }
#line 443 "termination.m"
            {
#line 443 "termination.m"
              hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_p_0(transform_hlds__termination__V_29_29, transform_hlds__termination__ProcInfo_20, &transform_hlds__termination__ProcInfo1_23);
            }
#line 444 "termination.m"
            {
#line 444 "termination.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__termination__TypeCtorInfo_35_35, transform_hlds__termination__ProcId_16, ((MR_Box) (transform_hlds__termination__ProcInfo1_23)), transform_hlds__termination__ProcTable0_19, &transform_hlds__termination__ProcTable_24);
            }
#line 445 "termination.m"
            {
#line 445 "termination.m"
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__termination__ProcTable_24, transform_hlds__termination__PredInfo0_18, &transform_hlds__termination__PredInfo_25);
            }
#line 446 "termination.m"
            {
#line 446 "termination.m"
              mercury__map__set_4_p_0(transform_hlds__termination__TypeCtorInfo_32_32, transform_hlds__termination__TypeCtorInfo_33_33, ((MR_Box) (transform_hlds__termination__PredId_15)), ((MR_Box) (transform_hlds__termination__PredInfo_25)), transform_hlds__termination__PredTable0_17, &transform_hlds__termination__PredTable_26);
            }
#line 447 "termination.m"
            {
#line 447 "termination.m"
              hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__termination__PredTable_26, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_30_30);
            }
#line 448 "termination.m"
            /* direct tailcall eliminated */
#line 448 "termination.m"
            {
#line 448 "termination.m"
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__Solns_10;
#line 448 "termination.m"
              MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_30_30;

#line 448 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 448 "termination.m"
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
#line 448 "termination.m"
            }
#line 448 "termination.m"
            continue;
#line 433 "termination.m"
          }
#line 432 "termination.m"
      }
#line 432 "termination.m"
      break;
#line 432 "termination.m"
    }
#line 429 "termination.m"
}

#line 392 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0_3(
#line 392 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 392 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1)
#line 392 "termination.m"
{
#line 392 "termination.m"
  {
#line 392 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 392 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

#line 392 "termination.m"
    {
#line 392 "termination.m"
      return transform_hlds__termination__succeeded = transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__392__1_1_p_0(((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 392 "termination.m"
    return transform_hlds__termination__succeeded;
#line 392 "termination.m"
  }
#line 392 "termination.m"
}

#line 383 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0_2(
#line 383 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 383 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1)
#line 383 "termination.m"
{
#line 383 "termination.m"
  {
#line 383 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 383 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

#line 383 "termination.m"
    {
#line 383 "termination.m"
      return transform_hlds__termination__succeeded = transform_hlds__term_util__is_termination_known_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 383 "termination.m"
    return transform_hlds__termination__succeeded;
#line 383 "termination.m"
  }
#line 383 "termination.m"
}

#line 358 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0_1(
#line 358 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 358 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1)
#line 358 "termination.m"
{
#line 358 "termination.m"
  {
#line 358 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 358 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

#line 358 "termination.m"
    {
#line 358 "termination.m"
      return transform_hlds__termination__succeeded = transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__358__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 358 "termination.m"
    return transform_hlds__termination__succeeded;
#line 358 "termination.m"
  }
#line 358 "termination.m"
}

#line 353 "termination.m"
static void MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0(
#line 353 "termination.m"
  MR_Word transform_hlds__termination__PassInfo_7,
#line 353 "termination.m"
  MR_Word transform_hlds__termination__SCC_8,
#line 353 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47,
#line 353 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_48,
#line 353 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_0_49,
#line 353 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_Specs_50)
#line 353 "termination.m"
{
#line 357 "termination.m"
  {
#line 357 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 357 "termination.m"
    MR_Word transform_hlds__termination__TypeCtorInfo_64_64;
#line 357 "termination.m"
    MR_Word transform_hlds__termination__IsArgSizeKnown_11;
#line 357 "termination.m"
    MR_Word transform_hlds__termination__SCCArgSizeUnknown_17;
#line 357 "termination.m"
    MR_Word transform_hlds__termination__ArgSizeErrors_18;
#line 357 "termination.m"
    MR_Word transform_hlds__termination__TermErrors_19;
#line 357 "termination.m"
    MR_Word transform_hlds__termination__SCCTerminationUnknown_27;
#line 357 "termination.m"
    MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_55_55;
#line 357 "termination.m"
    MR_Word transform_hlds__termination__V_56_56;
#line 362 "termination.m"
    MR_Word transform_hlds__termination___SCCArgSizeKnown_16;
#line 383 "termination.m"
    MR_Word transform_hlds__termination___SCCTerminationKnown_26;

#line 358 "termination.m"
    {
#line 358 "termination.m"
      transform_hlds__termination__IsArgSizeKnown_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 358 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsArgSizeKnown_11, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_6[0]));
#line 358 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsArgSizeKnown_11, 1) = ((MR_Box) (transform_hlds__termination__analyse_termination_in_scc_6_p_0_1));
#line 358 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsArgSizeKnown_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 358 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsArgSizeKnown_11, 3) = ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47));
#line 358 "termination.m"
    }
#line 3385 "transform_hlds.termination.c"
    transform_hlds__termination__TypeCtorInfo_64_64 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 362 "termination.m"
    {
#line 362 "termination.m"
      mercury__list__filter_4_p_0(transform_hlds__termination__TypeCtorInfo_64_64, transform_hlds__termination__IsArgSizeKnown_11, transform_hlds__termination__SCC_8, &transform_hlds__termination___SCCArgSizeKnown_16, &transform_hlds__termination__SCCArgSizeUnknown_17);
    }
#line 367 "termination.m"
    if ((transform_hlds__termination__SCCArgSizeUnknown_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 364 "termination.m"
      {
#line 365 "termination.m"
        transform_hlds__termination__ArgSizeErrors_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 366 "termination.m"
        transform_hlds__termination__TermErrors_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 364 "termination.m"
        transform_hlds__termination__STATE_VARIABLE_ModuleInfo_55_55 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47;
#line 364 "termination.m"
      }
#line 367 "termination.m"
    else
#line 368 "termination.m"
      {
#line 368 "termination.m"
        MR_Word transform_hlds__termination__ArgSizeResult_22;

#line 369 "termination.m"
        {
#line 369 "termination.m"
          transform_hlds__term_pass1__find_arg_sizes_in_scc_5_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47, transform_hlds__termination__PassInfo_7, transform_hlds__termination__SCCArgSizeUnknown_17, &transform_hlds__termination__ArgSizeResult_22, &transform_hlds__termination__TermErrors_19);
        }
#line 376 "termination.m"
        if (((MR_tag((MR_Word) transform_hlds__termination__ArgSizeResult_22)) == (MR_mktag((MR_Integer) 1))))
#line 377 "termination.m"
          {
#line 377 "termination.m"
            MR_Word transform_hlds__termination__V_53_53;

#line 377 "termination.m"
            transform_hlds__termination__ArgSizeErrors_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__ArgSizeResult_22, (MR_Integer) 0)));
#line 378 "termination.m"
            {
#line 378 "termination.m"
              transform_hlds__termination__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 378 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_53_53, 0) = ((MR_Box) (transform_hlds__termination__ArgSizeErrors_18));
#line 378 "termination.m"
            }
#line 378 "termination.m"
            {
#line 378 "termination.m"
              transform_hlds__termination__set_infinite_arg_size_infos_4_p_0(transform_hlds__termination__SCCArgSizeUnknown_17, transform_hlds__termination__V_53_53, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_55_55);
            }
#line 377 "termination.m"
          }
#line 376 "termination.m"
        else
#line 372 "termination.m"
          {
#line 372 "termination.m"
            MR_Word transform_hlds__termination__Solutions_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeResult_22, (MR_Integer) 0)));
#line 372 "termination.m"
            MR_Word transform_hlds__termination__OutputSupplierMap_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeResult_22, (MR_Integer) 1)));

#line 373 "termination.m"
            {
#line 373 "termination.m"
              transform_hlds__termination__set_finite_arg_size_infos_4_p_0(transform_hlds__termination__Solutions_23, transform_hlds__termination__OutputSupplierMap_24, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_55_55);
            }
#line 375 "termination.m"
            transform_hlds__termination__ArgSizeErrors_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 372 "termination.m"
          }
#line 368 "termination.m"
      }
#line 383 "termination.m"
    {
#line 383 "termination.m"
      transform_hlds__termination__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 383 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_56_56, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_6[0]));
#line 383 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_56_56, 1) = ((MR_Box) (transform_hlds__termination__analyse_termination_in_scc_6_p_0_2));
#line 383 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 383 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_56_56, 3) = ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_55_55));
#line 383 "termination.m"
    }
#line 383 "termination.m"
    {
#line 383 "termination.m"
      mercury__list__filter_4_p_0(transform_hlds__termination__TypeCtorInfo_64_64, transform_hlds__termination__V_56_56, transform_hlds__termination__SCC_8, &transform_hlds__termination___SCCTerminationKnown_26, &transform_hlds__termination__SCCTerminationUnknown_27);
    }
#line 390 "termination.m"
    if ((transform_hlds__termination__SCCTerminationUnknown_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 389 "termination.m"
      {
#line 389 "termination.m"
        *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_48 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_55_55;
#line 389 "termination.m"
        *transform_hlds__termination__STATE_VARIABLE_Specs_50 = transform_hlds__termination__STATE_VARIABLE_Specs_0_49;
#line 389 "termination.m"
      }
#line 390 "termination.m"
    else
#line 391 "termination.m"
      {
#line 391 "termination.m"
        MR_Word transform_hlds__termination__TypeCtorInfo_66_66 = (MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0;
#line 391 "termination.m"
        MR_Word transform_hlds__termination__FatalErrors_34;
#line 391 "termination.m"
        MR_Word transform_hlds__termination__BothErrors_35;

#line 396 "termination.m"
        {
#line 396 "termination.m"
          mercury__list__filter_3_p_0(transform_hlds__termination__TypeCtorInfo_66_66, (MR_Word) &transform_hlds__termination_scalar_common_2[4], transform_hlds__termination__ArgSizeErrors_18, &transform_hlds__termination__FatalErrors_34);
        }
#line 397 "termination.m"
        {
#line 397 "termination.m"
          transform_hlds__termination__BothErrors_35 = mercury__list__f_43_43_2_f_0(transform_hlds__termination__TypeCtorInfo_66_66, transform_hlds__termination__TermErrors_19, transform_hlds__termination__FatalErrors_34);
        }
#line 3510 "transform_hlds.termination.c"
        if ((transform_hlds__termination__BothErrors_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3512 "transform_hlds.termination.c"
          {
#line 3514 "transform_hlds.termination.c"
            MR_Word transform_hlds__termination__TerminationResult_42;
#line 3516 "transform_hlds.termination.c"
            MR_Word transform_hlds__termination__Globals_43;
#line 3518 "transform_hlds.termination.c"
            MR_Integer transform_hlds__termination__SingleArgs_44;

#line 407 "termination.m"
            {
#line 407 "termination.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_55_55, &transform_hlds__termination__Globals_43);
            }
#line 408 "termination.m"
            {
#line 408 "termination.m"
              libs__globals__lookup_int_option_3_p_0(transform_hlds__termination__Globals_43, (MR_Integer) 411, &transform_hlds__termination__SingleArgs_44);
            }
#line 410 "termination.m"
            {
#line 410 "termination.m"
              transform_hlds__term_pass2__prove_termination_in_scc_5_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_55_55, transform_hlds__termination__PassInfo_7, transform_hlds__termination__SCCTerminationUnknown_27, transform_hlds__termination__SingleArgs_44, &transform_hlds__termination__TerminationResult_42);
            }
#line 413 "termination.m"
            {
#line 413 "termination.m"
              transform_hlds__termination__set_termination_infos_4_p_0(transform_hlds__termination__SCCTerminationUnknown_27, transform_hlds__termination__TerminationResult_42, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_55_55, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_48);
            }
#line 419 "termination.m"
            if (((MR_tag((MR_Word) transform_hlds__termination__TerminationResult_42)) == (MR_mktag((MR_Integer) 1))))
#line 416 "termination.m"
              {
#line 416 "termination.m"
                MR_Word transform_hlds__termination__TerminationErrors_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__TerminationResult_42, (MR_Integer) 0)));

#line 417 "termination.m"
                {
#line 417 "termination.m"
                  transform_hlds__termination__maybe_report_termination_errors_5_p_0(*transform_hlds__termination__STATE_VARIABLE_ModuleInfo_48, transform_hlds__termination__SCC_8, transform_hlds__termination__TerminationErrors_45, transform_hlds__termination__STATE_VARIABLE_Specs_0_49, transform_hlds__termination__STATE_VARIABLE_Specs_50);
#line 417 "termination.m"
                  return;
                }
#line 416 "termination.m"
              }
#line 419 "termination.m"
            else
#line 420 "termination.m"
              *transform_hlds__termination__STATE_VARIABLE_Specs_50 = transform_hlds__termination__STATE_VARIABLE_Specs_0_49;
#line 3561 "transform_hlds.termination.c"
          }
#line 3563 "transform_hlds.termination.c"
        else
#line 3565 "transform_hlds.termination.c"
          {
#line 3567 "transform_hlds.termination.c"
            MR_Integer transform_hlds__termination__MaxErrors_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PassInfo_7, (MR_Integer) 1)));
#line 3569 "transform_hlds.termination.c"
            MR_Word transform_hlds__termination__TerminationResult_69;
#line 3571 "transform_hlds.termination.c"
            MR_Word transform_hlds__termination__TerminationErrors_70;
#line 402 "termination.m"
            MR_Word transform_hlds__termination__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PassInfo_7, (MR_Integer) 0)));
#line 402 "termination.m"
            MR_Integer transform_hlds__termination__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PassInfo_7, (MR_Integer) 2)));

#line 403 "termination.m"
            {
#line 403 "termination.m"
              mercury__list__take_upto_3_p_0(transform_hlds__termination__TypeCtorInfo_66_66, transform_hlds__termination__MaxErrors_39, transform_hlds__termination__BothErrors_35, &transform_hlds__termination__TerminationErrors_70);
            }
#line 404 "termination.m"
            {
#line 404 "termination.m"
              transform_hlds__termination__TerminationResult_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 404 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__TerminationResult_69, 0) = ((MR_Box) (transform_hlds__termination__TerminationErrors_70));
#line 404 "termination.m"
            }
#line 413 "termination.m"
            {
#line 413 "termination.m"
              transform_hlds__termination__set_termination_infos_4_p_0(transform_hlds__termination__SCCTerminationUnknown_27, transform_hlds__termination__TerminationResult_69, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_55_55, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_48);
            }
#line 417 "termination.m"
            {
#line 417 "termination.m"
              transform_hlds__termination__maybe_report_termination_errors_5_p_0(*transform_hlds__termination__STATE_VARIABLE_ModuleInfo_48, transform_hlds__termination__SCC_8, transform_hlds__termination__TerminationErrors_70, transform_hlds__termination__STATE_VARIABLE_Specs_0_49, transform_hlds__termination__STATE_VARIABLE_Specs_50);
#line 417 "termination.m"
              return;
            }
#line 3603 "transform_hlds.termination.c"
          }
#line 391 "termination.m"
      }
#line 357 "termination.m"
  }
#line 353 "termination.m"
}

#line 322 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__check_procs_known_term_3_p_0(
#line 322 "termination.m"
  MR_Word transform_hlds__termination__Status_1,
#line 322 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_2,
#line 322 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_3)
#line 322 "termination.m"
{
#line 325 "termination.m"
  while (MR_TRUE)
#line 325 "termination.m"
    {
#line 325 "termination.m"
      /* tailcall optimized into a loop */
#line 325 "termination.m"
      {
#line 325 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 325 "termination.m"
        if ((transform_hlds__termination__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 325 "termination.m"
          transform_hlds__termination__succeeded = MR_TRUE;
#line 325 "termination.m"
        else
#line 326 "termination.m"
          {
#line 326 "termination.m"
            MR_Word transform_hlds__termination__PPId_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__2_2, (MR_Integer) 0)));
#line 326 "termination.m"
            MR_Word transform_hlds__termination__PPIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__2_2, (MR_Integer) 1)));
#line 326 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo_11;
#line 326 "termination.m"
            MR_Word transform_hlds__termination__MaybeTerm_12;
#line 326 "termination.m"
            MR_Word transform_hlds__termination__PPIdStatus_13;
#line 327 "termination.m"
            MR_Word transform_hlds__termination__V_10_10;

#line 327 "termination.m"
            {
#line 327 "termination.m"
              hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__termination__ModuleInfo_3, transform_hlds__termination__PPId_7, &transform_hlds__termination__V_10_10, &transform_hlds__termination__ProcInfo_11);
            }
#line 328 "termination.m"
            {
#line 328 "termination.m"
              hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__termination__ProcInfo_11, &transform_hlds__termination__MaybeTerm_12);
            }
#line 332 "termination.m"
            if ((transform_hlds__termination__MaybeTerm_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 330 "termination.m"
              {
#line 331 "termination.m"
                {
#line 331 "termination.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.termination", (MR_String) "predicate \140transform_hlds.termination.check_procs_known_term\'/3", (MR_String) "no termination info for procedure");
                }
#line 330 "termination.m"
              }
#line 332 "termination.m"
            else
#line 333 "termination.m"
              transform_hlds__termination__PPIdStatus_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__MaybeTerm_12, (MR_Integer) 0)));
#line 338 "termination.m"
            if (((MR_tag((MR_Word) transform_hlds__termination__Status_1)) == (MR_mktag((MR_Integer) 1))))
#line 340 "termination.m"
              {
#line 340 "termination.m"
                MR_Word transform_hlds__termination__V_17_17;

#line 340 "termination.m"
                transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__PPIdStatus_13)) == (MR_mktag((MR_Integer) 1)));
#line 340 "termination.m"
                if (transform_hlds__termination__succeeded)
#line 340 "termination.m"
                  transform_hlds__termination__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__PPIdStatus_13, (MR_Integer) 0)));
#line 340 "termination.m"
              }
#line 338 "termination.m"
            else
#line 337 "termination.m"
              transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__PPIdStatus_13)) == (MR_mktag((MR_Integer) 0)));
#line 326 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 342 "termination.m"
              {
#line 342 "termination.m"
                /* direct tailcall eliminated */
#line 342 "termination.m"
                {
#line 342 "termination.m"
                  MR_Word transform_hlds__termination__HeadVar__2__tmp_copy_2 = transform_hlds__termination__PPIds_8;

#line 342 "termination.m"
                  transform_hlds__termination__HeadVar__2_2 = transform_hlds__termination__HeadVar__2__tmp_copy_2;
#line 342 "termination.m"
                }
#line 342 "termination.m"
                continue;
#line 342 "termination.m"
              }
#line 326 "termination.m"
          }
#line 325 "termination.m"
        return transform_hlds__termination__succeeded;
#line 325 "termination.m"
      }
#line 325 "termination.m"
      break;
#line 325 "termination.m"
    }
#line 322 "termination.m"
}

#line 305 "termination.m"
static MR_Box MR_CALL 
transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0_2(
#line 305 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 305 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1)
#line 305 "termination.m"
{
#line 305 "termination.m"
  {
#line 305 "termination.m"
    MR_Box transform_hlds__termination__wrapper_arg_2;
#line 305 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;
#line 305 "termination.m"
    MR_Word transform_hlds__termination__conv0_LambdaHeadVar__2_42;

#line 305 "termination.m"
    {
#line 305 "termination.m"
      transform_hlds__termination__conv0_LambdaHeadVar__2_42 = transform_hlds__termination__IntroducedFrom__func__check_scc_pragmas_are_consistent__305__1_1_f_0(((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 305 "termination.m"
    transform_hlds__termination__wrapper_arg_2 = ((MR_Box) (transform_hlds__termination__conv0_LambdaHeadVar__2_42));
#line 305 "termination.m"
    return transform_hlds__termination__wrapper_arg_2;
#line 305 "termination.m"
  }
#line 305 "termination.m"
}

#line 273 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0_1(
#line 273 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 273 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1)
#line 273 "termination.m"
{
#line 273 "termination.m"
  {
#line 273 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 273 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

#line 273 "termination.m"
    {
#line 273 "termination.m"
      return transform_hlds__termination__succeeded = transform_hlds__term_util__is_termination_known_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 273 "termination.m"
    return transform_hlds__termination__succeeded;
#line 273 "termination.m"
  }
#line 273 "termination.m"
}

#line 268 "termination.m"
static void MR_CALL 
transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0(
#line 268 "termination.m"
  MR_Word transform_hlds__termination__SCC_6,
#line 268 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26,
#line 268 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27,
#line 268 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_0_28,
#line 268 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_Specs_29)
#line 268 "termination.m"
{
#line 272 "termination.m"
  {
#line 272 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 272 "termination.m"
    MR_Word transform_hlds__termination__TypeCtorInfo_66_66;
#line 272 "termination.m"
    MR_Word transform_hlds__termination__SCCTerminationKnown_9;
#line 272 "termination.m"
    MR_Word transform_hlds__termination__SCCTerminationUnknown_10;
#line 272 "termination.m"
    MR_Word transform_hlds__termination__V_30_30;

#line 273 "termination.m"
    {
#line 273 "termination.m"
      transform_hlds__termination__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 273 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_30_30, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_6[0]));
#line 273 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_30_30, 1) = ((MR_Box) (transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0_1));
#line 273 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 273 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_30_30, 3) = ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26));
#line 273 "termination.m"
    }
#line 3833 "transform_hlds.termination.c"
    transform_hlds__termination__TypeCtorInfo_66_66 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 273 "termination.m"
    {
#line 273 "termination.m"
      mercury__list__filter_4_p_0(transform_hlds__termination__TypeCtorInfo_66_66, transform_hlds__termination__V_30_30, transform_hlds__termination__SCC_6, &transform_hlds__termination__SCCTerminationKnown_9, &transform_hlds__termination__SCCTerminationUnknown_10);
    }
#line 277 "termination.m"
    if ((transform_hlds__termination__SCCTerminationKnown_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 276 "termination.m"
      {
#line 276 "termination.m"
        *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26;
#line 276 "termination.m"
        *transform_hlds__termination__STATE_VARIABLE_Specs_29 = transform_hlds__termination__STATE_VARIABLE_Specs_0_28;
#line 276 "termination.m"
      }
#line 277 "termination.m"
    else
#line 278 "termination.m"
      {
#line 278 "termination.m"
        MR_Word transform_hlds__termination__KnownPPId_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__SCCTerminationKnown_9, (MR_Integer) 0)));
#line 278 "termination.m"
        MR_Word transform_hlds__termination__KnownProcInfo_14;
#line 278 "termination.m"
        MR_Word transform_hlds__termination__MaybeKnownTerm_15;
#line 278 "termination.m"
        MR_Word transform_hlds__termination__KnownTermStatus_16;
#line 278 "termination.m"
        MR_Word transform_hlds__termination__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__SCCTerminationKnown_9, (MR_Integer) 1)));
#line 279 "termination.m"
        MR_Word transform_hlds__termination__V_13_13;
#line 326 "termination.m"
        MR_Word transform_hlds__termination__PPId_72;
#line 326 "termination.m"
        MR_Word transform_hlds__termination__PPIds_73;
#line 326 "termination.m"
        MR_Word transform_hlds__termination__ProcInfo_76;
#line 326 "termination.m"
        MR_Word transform_hlds__termination__MaybeTerm_77;
#line 326 "termination.m"
        MR_Word transform_hlds__termination__PPIdStatus_78;
#line 327 "termination.m"
        MR_Word transform_hlds__termination__V_75_75;

#line 279 "termination.m"
        {
#line 279 "termination.m"
          hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26, transform_hlds__termination__KnownPPId_11, &transform_hlds__termination__V_13_13, &transform_hlds__termination__KnownProcInfo_14);
        }
#line 280 "termination.m"
        {
#line 280 "termination.m"
          hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__termination__KnownProcInfo_14, &transform_hlds__termination__MaybeKnownTerm_15);
        }
#line 284 "termination.m"
        if ((transform_hlds__termination__MaybeKnownTerm_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 282 "termination.m"
          {
#line 283 "termination.m"
            {
#line 283 "termination.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.termination", (MR_String) "predicate \140transform_hlds.termination.check_scc_pragmas_are_consistent\'/5", (MR_String) "no termination info found");
#line 283 "termination.m"
              return;
            }
#line 282 "termination.m"
          }
#line 284 "termination.m"
        else
#line 285 "termination.m"
          transform_hlds__termination__KnownTermStatus_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__MaybeKnownTerm_15, (MR_Integer) 0)));
#line 326 "termination.m"
        transform_hlds__termination__PPId_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__SCCTerminationKnown_9, (MR_Integer) 0)));
#line 326 "termination.m"
        transform_hlds__termination__PPIds_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__SCCTerminationKnown_9, (MR_Integer) 1)));
#line 327 "termination.m"
        {
#line 327 "termination.m"
          hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26, transform_hlds__termination__PPId_72, &transform_hlds__termination__V_75_75, &transform_hlds__termination__ProcInfo_76);
        }
#line 328 "termination.m"
        {
#line 328 "termination.m"
          hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__termination__ProcInfo_76, &transform_hlds__termination__MaybeTerm_77);
        }
#line 332 "termination.m"
        if ((transform_hlds__termination__MaybeTerm_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 330 "termination.m"
          {
#line 331 "termination.m"
            {
#line 331 "termination.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.termination", (MR_String) "predicate \140transform_hlds.termination.check_procs_known_term\'/3", (MR_String) "no termination info for procedure");
#line 331 "termination.m"
              return;
            }
#line 330 "termination.m"
          }
#line 332 "termination.m"
        else
#line 333 "termination.m"
          transform_hlds__termination__PPIdStatus_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__MaybeTerm_77, (MR_Integer) 0)));
#line 338 "termination.m"
        if (((MR_tag((MR_Word) transform_hlds__termination__KnownTermStatus_16)) == (MR_mktag((MR_Integer) 1))))
#line 340 "termination.m"
          {
#line 340 "termination.m"
            MR_Word transform_hlds__termination__V_82_82;

#line 340 "termination.m"
            transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__PPIdStatus_78)) == (MR_mktag((MR_Integer) 1)));
#line 340 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 340 "termination.m"
              transform_hlds__termination__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__PPIdStatus_78, (MR_Integer) 0)));
#line 340 "termination.m"
          }
#line 338 "termination.m"
        else
#line 337 "termination.m"
          transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__PPIdStatus_78)) == (MR_mktag((MR_Integer) 0)));
#line 326 "termination.m"
        if (transform_hlds__termination__succeeded)
#line 342 "termination.m"
          {
#line 342 "termination.m"
            transform_hlds__termination__succeeded = transform_hlds__termination__check_procs_known_term_3_p_0(transform_hlds__termination__KnownTermStatus_16, transform_hlds__termination__PPIds_73, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26);
          }
#line 296 "termination.m"
        if (transform_hlds__termination__succeeded)
#line 294 "termination.m"
          {
#line 294 "termination.m"
            {
#line 294 "termination.m"
              transform_hlds__termination__set_termination_infos_4_p_0(transform_hlds__termination__SCCTerminationUnknown_10, transform_hlds__termination__KnownTermStatus_16, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27);
            }
#line 294 "termination.m"
            *transform_hlds__termination__STATE_VARIABLE_Specs_29 = transform_hlds__termination__STATE_VARIABLE_Specs_0_28;
#line 294 "termination.m"
          }
#line 296 "termination.m"
        else
#line 300 "termination.m"
          {
#line 300 "termination.m"
            MR_Word transform_hlds__termination__Context_17;
#line 300 "termination.m"
            MR_Word transform_hlds__termination__NewTermStatus_18;
#line 300 "termination.m"
            MR_Word transform_hlds__termination__PredIds_19;
#line 300 "termination.m"
            MR_Word transform_hlds__termination__PredNamePieces_22;
#line 300 "termination.m"
            MR_Word transform_hlds__termination__Pieces_23;
#line 300 "termination.m"
            MR_Word transform_hlds__termination__Msg_24;
#line 300 "termination.m"
            MR_Word transform_hlds__termination__Spec_25;
#line 300 "termination.m"
            MR_Word transform_hlds__termination__V_35_35;
#line 300 "termination.m"
            MR_Word transform_hlds__termination__V_36_36;
#line 300 "termination.m"
            MR_Word transform_hlds__termination__V_44_44;
#line 300 "termination.m"
            MR_Word transform_hlds__termination__V_54_54;
#line 300 "termination.m"
            MR_Word transform_hlds__termination__V_55_55;
#line 300 "termination.m"
            MR_Word transform_hlds__termination__V_59_59;

#line 300 "termination.m"
            {
#line 300 "termination.m"
              transform_hlds__term_util__get_context_from_scc_3_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26, transform_hlds__termination__SCCTerminationKnown_9, &transform_hlds__termination__Context_17);
            }
#line 302 "termination.m"
            {
#line 302 "termination.m"
              transform_hlds__termination__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 302 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__V_36_36, 0) = ((MR_Box) (transform_hlds__termination__Context_17));
#line 302 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 302 "termination.m"
            }
#line 302 "termination.m"
            {
#line 302 "termination.m"
              transform_hlds__termination__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 302 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_35_35, 0) = ((MR_Box) (transform_hlds__termination__V_36_36));
#line 302 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 302 "termination.m"
            }
#line 302 "termination.m"
            {
#line 302 "termination.m"
              transform_hlds__termination__NewTermStatus_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 302 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__NewTermStatus_18, 0) = ((MR_Box) (transform_hlds__termination__V_35_35));
#line 302 "termination.m"
            }
#line 303 "termination.m"
            {
#line 303 "termination.m"
              transform_hlds__termination__set_termination_infos_4_p_0(transform_hlds__termination__SCC_6, transform_hlds__termination__NewTermStatus_18, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27);
            }
#line 305 "termination.m"
            {
#line 305 "termination.m"
              transform_hlds__termination__PredIds_19 = mercury__list__map_2_f_0(transform_hlds__termination__TypeCtorInfo_66_66, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &transform_hlds__termination_scalar_common_2[3], transform_hlds__termination__SCCTerminationKnown_9);
            }
#line 307 "termination.m"
            {
#line 307 "termination.m"
              transform_hlds__termination__PredNamePieces_22 = hlds__hlds_error_util__describe_several_pred_names_3_f_0(*transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27, (MR_Integer) 0, transform_hlds__termination__PredIds_19);
            }
#line 310 "termination.m"
            {
#line 310 "termination.m"
              transform_hlds__termination__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 310 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_44_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[36])));
#line 310 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_44_44, 1) = ((MR_Box) (transform_hlds__termination__PredNamePieces_22));
#line 310 "termination.m"
            }
#line 310 "termination.m"
            {
#line 310 "termination.m"
              transform_hlds__termination__Pieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__termination__V_44_44, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[26]));
            }
#line 313 "termination.m"
            {
#line 313 "termination.m"
              transform_hlds__termination__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 313 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__V_55_55, 0) = ((MR_Box) (transform_hlds__termination__Pieces_23));
#line 313 "termination.m"
            }
#line 313 "termination.m"
            {
#line 313 "termination.m"
              transform_hlds__termination__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_54_54, 0) = ((MR_Box) (transform_hlds__termination__V_55_55));
#line 313 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 313 "termination.m"
            }
#line 313 "termination.m"
            {
#line 313 "termination.m"
              transform_hlds__termination__Msg_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 313 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__Msg_24, 0) = ((MR_Box) (transform_hlds__termination__Context_17));
#line 313 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__Msg_24, 1) = ((MR_Box) (transform_hlds__termination__V_54_54));
#line 313 "termination.m"
            }
#line 314 "termination.m"
            {
#line 314 "termination.m"
              transform_hlds__termination__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 314 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_59_59, 0) = ((MR_Box) (transform_hlds__termination__Msg_24));
#line 314 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 314 "termination.m"
            }
#line 314 "termination.m"
            {
#line 314 "termination.m"
              transform_hlds__termination__Spec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 314 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 314 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 314 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_25, 2) = ((MR_Box) (transform_hlds__termination__V_59_59));
#line 314 "termination.m"
            }
#line 315 "termination.m"
            {
#line 315 "termination.m"
              MR_Word base;
#line 315 "termination.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 315 "termination.m"
              *transform_hlds__termination__STATE_VARIABLE_Specs_29 = base;
#line 315 "termination.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__termination__Spec_25));
#line 315 "termination.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_Specs_0_28));
#line 315 "termination.m"
            }
#line 300 "termination.m"
          }
#line 278 "termination.m"
      }
#line 272 "termination.m"
  }
#line 268 "termination.m"
}

#line 167 "termination.m"
static void MR_CALL 
transform_hlds__termination__check_foreign_code_attributes_of_proc_7_p_0(
#line 167 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_8,
#line 167 "termination.m"
  MR_Word transform_hlds__termination__PPId_9,
#line 167 "termination.m"
  MR_Word transform_hlds__termination__Attributes_10,
#line 167 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25,
#line 167 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcInfo_26,
#line 167 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_0_27,
#line 167 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_Specs_28)
#line 167 "termination.m"
{
#line 173 "termination.m"
  {
#line 173 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 173 "termination.m"
    MR_Word transform_hlds__termination__MaybeTermination_13;
#line 173 "termination.m"
    MR_Word transform_hlds__termination__Context_14;

#line 174 "termination.m"
    {
#line 174 "termination.m"
      hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25, &transform_hlds__termination__MaybeTermination_13);
    }
#line 175 "termination.m"
    {
#line 175 "termination.m"
      hlds__hlds_pred__proc_info_get_context_2_p_0(transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25, &transform_hlds__termination__Context_14);
    }
#line 186 "termination.m"
    if ((transform_hlds__termination__MaybeTermination_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 177 "termination.m"
      {
#line 178 "termination.m"
        {
#line 178 "termination.m"
          transform_hlds__termination__succeeded = transform_hlds__term_util__attributes_imply_termination_1_p_0(transform_hlds__termination__Attributes_10);
        }
#line 181 "termination.m"
        if (transform_hlds__termination__succeeded)
#line 179 "termination.m"
          {
#line 179 "termination.m"
            mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 180 "termination.m"
            {
#line 180 "termination.m"
              hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_5[1]), transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25, transform_hlds__termination__STATE_VARIABLE_ProcInfo_26);
            }
#line 179 "termination.m"
          }
#line 181 "termination.m"
        else
#line 182 "termination.m"
          {
#line 182 "termination.m"
            MR_Word transform_hlds__termination__TermErr_16;
#line 182 "termination.m"
            MR_Word transform_hlds__termination__V_104_104;
#line 182 "termination.m"
            MR_Word transform_hlds__termination__V_105_105;
#line 182 "termination.m"
            MR_Word transform_hlds__termination__V_106_106;
#line 182 "termination.m"
            MR_Word transform_hlds__termination__TermStatus_109;

#line 182 "termination.m"
            {
#line 182 "termination.m"
              transform_hlds__termination__V_104_104 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 182 "termination.m"
              MR_hl_field(MR_mktag(3), transform_hlds__termination__V_104_104, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 182 "termination.m"
              MR_hl_field(MR_mktag(3), transform_hlds__termination__V_104_104, 1) = ((MR_Box) (transform_hlds__termination__PPId_9));
#line 182 "termination.m"
            }
#line 182 "termination.m"
            {
#line 182 "termination.m"
              transform_hlds__termination__TermErr_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 182 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__TermErr_16, 0) = ((MR_Box) (transform_hlds__termination__Context_14));
#line 182 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__TermErr_16, 1) = ((MR_Box) (transform_hlds__termination__V_104_104));
#line 182 "termination.m"
            }
#line 183 "termination.m"
            {
#line 183 "termination.m"
              transform_hlds__termination__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 183 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_106_106, 0) = ((MR_Box) (transform_hlds__termination__TermErr_16));
#line 183 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_106_106, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 183 "termination.m"
            }
#line 183 "termination.m"
            {
#line 183 "termination.m"
              transform_hlds__termination__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 183 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_105_105, 0) = ((MR_Box) (transform_hlds__termination__V_106_106));
#line 183 "termination.m"
            }
#line 183 "termination.m"
            {
#line 183 "termination.m"
              transform_hlds__termination__TermStatus_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 183 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__TermStatus_109, 0) = ((MR_Box) (transform_hlds__termination__V_105_105));
#line 183 "termination.m"
            }
#line 184 "termination.m"
            {
#line 184 "termination.m"
              hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(transform_hlds__termination__TermStatus_109, transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25, transform_hlds__termination__STATE_VARIABLE_ProcInfo_26);
            }
#line 182 "termination.m"
          }
#line 177 "termination.m"
        *transform_hlds__termination__STATE_VARIABLE_Specs_28 = transform_hlds__termination__STATE_VARIABLE_Specs_0_27;
#line 177 "termination.m"
      }
#line 186 "termination.m"
    else
#line 186 "termination.m"
      {
#line 186 "termination.m"
        MR_Word transform_hlds__termination__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__MaybeTermination_13, (MR_Integer) 0)));

#line 186 "termination.m"
        if (((MR_tag((MR_Word) transform_hlds__termination__V_137_137)) == (MR_mktag((MR_Integer) 1))))
#line 215 "termination.m"
          {
#line 215 "termination.m"
            MR_Word transform_hlds__termination__TermErrs0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__V_137_137, (MR_Integer) 0)));
#line 215 "termination.m"
            MR_Word transform_hlds__termination__ProcTerminates_130;

#line 216 "termination.m"
            {
#line 216 "termination.m"
              transform_hlds__termination__ProcTerminates_130 = parse_tree__prog_data__get_terminates_1_f_0(transform_hlds__termination__Attributes_10);
            }
#line 233 "termination.m"
#line 233 "termination.m"
            switch (transform_hlds__termination__ProcTerminates_130) {
#line 233 "termination.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 233 "termination.m"
              case (MR_Integer) 2:
#line 235 "termination.m"
                {
#line 235 "termination.m"
                  *transform_hlds__termination__STATE_VARIABLE_ProcInfo_26 = transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25;
#line 235 "termination.m"
                  *transform_hlds__termination__STATE_VARIABLE_Specs_28 = transform_hlds__termination__STATE_VARIABLE_Specs_0_27;
#line 235 "termination.m"
                }
#line 233 "termination.m"
                break;
#line 233 "termination.m"
              case (MR_Integer) 1:
#line 234 "termination.m"
                {
#line 234 "termination.m"
                  *transform_hlds__termination__STATE_VARIABLE_ProcInfo_26 = transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25;
#line 234 "termination.m"
                  *transform_hlds__termination__STATE_VARIABLE_Specs_28 = transform_hlds__termination__STATE_VARIABLE_Specs_0_27;
#line 234 "termination.m"
                }
#line 233 "termination.m"
                break;
#line 233 "termination.m"
              case (MR_Integer) 0:
#line 218 "termination.m"
                {
#line 218 "termination.m"
                  MR_Word transform_hlds__termination__TermErrs_24;
#line 218 "termination.m"
                  MR_Word transform_hlds__termination__V_31_31;
#line 218 "termination.m"
                  MR_Word transform_hlds__termination__V_34_34;
#line 218 "termination.m"
                  MR_Word transform_hlds__termination__V_56_56;
#line 218 "termination.m"
                  MR_Word transform_hlds__termination__V_57_57;
#line 218 "termination.m"
                  MR_Word transform_hlds__termination__V_61_61;
#line 218 "termination.m"
                  MR_Word transform_hlds__termination__TermStatus_116;
#line 218 "termination.m"
                  MR_Word transform_hlds__termination__TermErr_117;
#line 218 "termination.m"
                  MR_Word transform_hlds__termination__ProcNamePieces_118;
#line 218 "termination.m"
                  MR_Word transform_hlds__termination__Pieces_119;
#line 218 "termination.m"
                  MR_Word transform_hlds__termination__Msg_120;
#line 218 "termination.m"
                  MR_Word transform_hlds__termination__Spec_121;

#line 219 "termination.m"
                  {
#line 219 "termination.m"
                    transform_hlds__termination__TermErr_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 219 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__TermErr_117, 0) = ((MR_Box) (transform_hlds__termination__Context_14));
#line 219 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__TermErr_117, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 219 "termination.m"
                  }
#line 220 "termination.m"
                  {
#line 220 "termination.m"
                    transform_hlds__termination__TermErrs_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 220 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__TermErrs_24, 0) = ((MR_Box) (transform_hlds__termination__TermErr_117));
#line 220 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__TermErrs_24, 1) = ((MR_Box) (transform_hlds__termination__TermErrs0_23));
#line 220 "termination.m"
                  }
#line 221 "termination.m"
                  {
#line 221 "termination.m"
                    transform_hlds__termination__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 221 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_31_31, 0) = ((MR_Box) (transform_hlds__termination__TermErrs_24));
#line 221 "termination.m"
                  }
#line 221 "termination.m"
                  {
#line 221 "termination.m"
                    transform_hlds__termination__TermStatus_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 221 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__TermStatus_116, 0) = ((MR_Box) (transform_hlds__termination__V_31_31));
#line 221 "termination.m"
                  }
#line 223 "termination.m"
                  {
#line 223 "termination.m"
                    hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(transform_hlds__termination__TermStatus_116, transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25, transform_hlds__termination__STATE_VARIABLE_ProcInfo_26);
                  }
#line 224 "termination.m"
                  {
#line 224 "termination.m"
                    transform_hlds__termination__ProcNamePieces_118 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__termination__ModuleInfo_8, (MR_Integer) 0, transform_hlds__termination__PPId_9);
                  }
#line 226 "termination.m"
                  {
#line 226 "termination.m"
                    transform_hlds__termination__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 226 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_34_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[36])));
#line 226 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_34_34, 1) = ((MR_Box) (transform_hlds__termination__ProcNamePieces_118));
#line 226 "termination.m"
                  }
#line 226 "termination.m"
                  {
#line 226 "termination.m"
                    transform_hlds__termination__Pieces_119 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__termination__V_34_34, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[15]));
                  }
#line 230 "termination.m"
                  {
#line 230 "termination.m"
                    transform_hlds__termination__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 230 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__V_57_57, 0) = ((MR_Box) (transform_hlds__termination__Pieces_119));
#line 230 "termination.m"
                  }
#line 230 "termination.m"
                  {
#line 230 "termination.m"
                    transform_hlds__termination__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 230 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_56_56, 0) = ((MR_Box) (transform_hlds__termination__V_57_57));
#line 230 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 230 "termination.m"
                  }
#line 230 "termination.m"
                  {
#line 230 "termination.m"
                    transform_hlds__termination__Msg_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 230 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__Msg_120, 0) = ((MR_Box) (transform_hlds__termination__Context_14));
#line 230 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__Msg_120, 1) = ((MR_Box) (transform_hlds__termination__V_56_56));
#line 230 "termination.m"
                  }
#line 231 "termination.m"
                  {
#line 231 "termination.m"
                    transform_hlds__termination__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 231 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_61_61, 0) = ((MR_Box) (transform_hlds__termination__Msg_120));
#line 231 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 231 "termination.m"
                  }
#line 231 "termination.m"
                  {
#line 231 "termination.m"
                    transform_hlds__termination__Spec_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 231 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_121, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 231 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 231 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_121, 2) = ((MR_Box) (transform_hlds__termination__V_61_61));
#line 231 "termination.m"
                  }
#line 232 "termination.m"
                  {
#line 232 "termination.m"
                    MR_Word base;
#line 232 "termination.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 232 "termination.m"
                    *transform_hlds__termination__STATE_VARIABLE_Specs_28 = base;
#line 232 "termination.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__termination__Spec_121));
#line 232 "termination.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_Specs_0_27));
#line 232 "termination.m"
                  }
#line 218 "termination.m"
                }
#line 233 "termination.m"
                break;
#line 233 "termination.m"
            }
#line 215 "termination.m"
          }
#line 186 "termination.m"
        else
#line 189 "termination.m"
          {
#line 189 "termination.m"
            MR_Word transform_hlds__termination__ProcTerminates_18;

#line 190 "termination.m"
            {
#line 190 "termination.m"
              transform_hlds__termination__ProcTerminates_18 = parse_tree__prog_data__get_terminates_1_f_0(transform_hlds__termination__Attributes_10);
            }
#line 206 "termination.m"
#line 206 "termination.m"
            switch (transform_hlds__termination__ProcTerminates_18) {
#line 206 "termination.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 206 "termination.m"
              case (MR_Integer) 2:
#line 208 "termination.m"
                {
#line 208 "termination.m"
                  *transform_hlds__termination__STATE_VARIABLE_ProcInfo_26 = transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25;
#line 208 "termination.m"
                  *transform_hlds__termination__STATE_VARIABLE_Specs_28 = transform_hlds__termination__STATE_VARIABLE_Specs_0_27;
#line 208 "termination.m"
                }
#line 206 "termination.m"
                break;
#line 206 "termination.m"
              case (MR_Integer) 1:
#line 192 "termination.m"
                {
#line 192 "termination.m"
                  MR_Word transform_hlds__termination__ProcNamePieces_19;
#line 192 "termination.m"
                  MR_Word transform_hlds__termination__Pieces_20;
#line 192 "termination.m"
                  MR_Word transform_hlds__termination__Msg_21;
#line 192 "termination.m"
                  MR_Word transform_hlds__termination__Spec_22;
#line 192 "termination.m"
                  MR_Word transform_hlds__termination__V_66_66;
#line 192 "termination.m"
                  MR_Word transform_hlds__termination__V_67_67;
#line 192 "termination.m"
                  MR_Word transform_hlds__termination__V_71_71;
#line 192 "termination.m"
                  MR_Word transform_hlds__termination__V_93_93;
#line 192 "termination.m"
                  MR_Word transform_hlds__termination__V_94_94;
#line 192 "termination.m"
                  MR_Word transform_hlds__termination__V_98_98;
#line 192 "termination.m"
                  MR_Word transform_hlds__termination__TermStatus_110;
#line 192 "termination.m"
                  MR_Word transform_hlds__termination__TermErr_111;

#line 193 "termination.m"
                  {
#line 193 "termination.m"
                    transform_hlds__termination__TermErr_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 193 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__TermErr_111, 0) = ((MR_Box) (transform_hlds__termination__Context_14));
#line 193 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__TermErr_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 193 "termination.m"
                  }
#line 194 "termination.m"
                  {
#line 194 "termination.m"
                    transform_hlds__termination__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 194 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_67_67, 0) = ((MR_Box) (transform_hlds__termination__TermErr_111));
#line 194 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 194 "termination.m"
                  }
#line 194 "termination.m"
                  {
#line 194 "termination.m"
                    transform_hlds__termination__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 194 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_66_66, 0) = ((MR_Box) (transform_hlds__termination__V_67_67));
#line 194 "termination.m"
                  }
#line 194 "termination.m"
                  {
#line 194 "termination.m"
                    transform_hlds__termination__TermStatus_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 194 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__TermStatus_110, 0) = ((MR_Box) (transform_hlds__termination__V_66_66));
#line 194 "termination.m"
                  }
#line 196 "termination.m"
                  {
#line 196 "termination.m"
                    hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(transform_hlds__termination__TermStatus_110, transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25, transform_hlds__termination__STATE_VARIABLE_ProcInfo_26);
                  }
#line 197 "termination.m"
                  {
#line 197 "termination.m"
                    transform_hlds__termination__ProcNamePieces_19 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__termination__ModuleInfo_8, (MR_Integer) 0, transform_hlds__termination__PPId_9);
                  }
#line 199 "termination.m"
                  {
#line 199 "termination.m"
                    transform_hlds__termination__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 199 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_71_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[36])));
#line 199 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_71_71, 1) = ((MR_Box) (transform_hlds__termination__ProcNamePieces_19));
#line 199 "termination.m"
                  }
#line 199 "termination.m"
                  {
#line 199 "termination.m"
                    transform_hlds__termination__Pieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__termination__V_71_71, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[22]));
                  }
#line 203 "termination.m"
                  {
#line 203 "termination.m"
                    transform_hlds__termination__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 203 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__V_94_94, 0) = ((MR_Box) (transform_hlds__termination__Pieces_20));
#line 203 "termination.m"
                  }
#line 203 "termination.m"
                  {
#line 203 "termination.m"
                    transform_hlds__termination__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 203 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_93_93, 0) = ((MR_Box) (transform_hlds__termination__V_94_94));
#line 203 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 203 "termination.m"
                  }
#line 203 "termination.m"
                  {
#line 203 "termination.m"
                    transform_hlds__termination__Msg_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 203 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__Msg_21, 0) = ((MR_Box) (transform_hlds__termination__Context_14));
#line 203 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__Msg_21, 1) = ((MR_Box) (transform_hlds__termination__V_93_93));
#line 203 "termination.m"
                  }
#line 204 "termination.m"
                  {
#line 204 "termination.m"
                    transform_hlds__termination__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 204 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_98_98, 0) = ((MR_Box) (transform_hlds__termination__Msg_21));
#line 204 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_98_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 204 "termination.m"
                  }
#line 204 "termination.m"
                  {
#line 204 "termination.m"
                    transform_hlds__termination__Spec_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 204 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 204 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 204 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_22, 2) = ((MR_Box) (transform_hlds__termination__V_98_98));
#line 204 "termination.m"
                  }
#line 205 "termination.m"
                  {
#line 205 "termination.m"
                    MR_Word base;
#line 205 "termination.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 205 "termination.m"
                    *transform_hlds__termination__STATE_VARIABLE_Specs_28 = base;
#line 205 "termination.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__termination__Spec_22));
#line 205 "termination.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_Specs_0_27));
#line 205 "termination.m"
                  }
#line 192 "termination.m"
                }
#line 206 "termination.m"
                break;
#line 206 "termination.m"
              case (MR_Integer) 0:
#line 207 "termination.m"
                {
#line 207 "termination.m"
                  *transform_hlds__termination__STATE_VARIABLE_ProcInfo_26 = transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25;
#line 207 "termination.m"
                  *transform_hlds__termination__STATE_VARIABLE_Specs_28 = transform_hlds__termination__STATE_VARIABLE_Specs_0_27;
#line 207 "termination.m"
                }
#line 206 "termination.m"
                break;
#line 206 "termination.m"
            }
#line 189 "termination.m"
          }
#line 186 "termination.m"
      }
#line 173 "termination.m"
  }
#line 167 "termination.m"
}

#line 139 "termination.m"
static void MR_CALL 
transform_hlds__termination__check_foreign_code_attributes_in_scc_5_p_0(
#line 139 "termination.m"
  MR_Word transform_hlds__termination__PPIds_6,
#line 139 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26,
#line 139 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27,
#line 139 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_0_28,
#line 139 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_Specs_29)
#line 139 "termination.m"
{
#line 145 "termination.m"
  {
#line 145 "termination.m"
    MR_bool transform_hlds__termination__succeeded;

#line 145 "termination.m"
    if ((transform_hlds__termination__PPIds_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 145 "termination.m"
      {
#line 146 "termination.m"
        {
#line 146 "termination.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.termination", (MR_String) "predicate \140transform_hlds.termination.check_foreign_code_attributes_in_scc\'/5", (MR_String) "empty SCC");
#line 146 "termination.m"
          return;
        }
#line 145 "termination.m"
      }
#line 145 "termination.m"
    else
#line 145 "termination.m"
      {
#line 145 "termination.m"
        MR_Word transform_hlds__termination__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__PPIds_6, (MR_Integer) 1)));
#line 145 "termination.m"
        MR_Word transform_hlds__termination__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__PPIds_6, (MR_Integer) 0)));

#line 145 "termination.m"
        if ((transform_hlds__termination__V_37_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 148 "termination.m"
          {
#line 148 "termination.m"
            MR_Word transform_hlds__termination__PredInfo_10;
#line 148 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo0_11;
#line 159 "termination.m"
            MR_Word transform_hlds__termination__Attributes_15;
#line 151 "termination.m"
            MR_Word transform_hlds__termination__Goal_12;
#line 151 "termination.m"
            MR_Word transform_hlds__termination__GoalExpr_13;
#line 152 "termination.m"
            MR_Word transform_hlds__termination___GoalInfo_14;
#line 153 "termination.m"
            MR_Word transform_hlds__termination__V_16_16;
#line 153 "termination.m"
            MR_Integer transform_hlds__termination__V_17_17;
#line 153 "termination.m"
            MR_Word transform_hlds__termination__V_18_18;
#line 153 "termination.m"
            MR_Word transform_hlds__termination__V_19_19;
#line 153 "termination.m"
            MR_Word transform_hlds__termination__V_20_20;
#line 153 "termination.m"
            MR_Word transform_hlds__termination__V_21_21;

#line 149 "termination.m"
            {
#line 149 "termination.m"
              hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26, transform_hlds__termination__V_38_38, &transform_hlds__termination__PredInfo_10, &transform_hlds__termination__ProcInfo0_11);
            }
#line 151 "termination.m"
            {
#line 151 "termination.m"
              hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__termination__ProcInfo0_11, &transform_hlds__termination__Goal_12);
            }
#line 152 "termination.m"
            transform_hlds__termination__GoalExpr_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__Goal_12, (MR_Integer) 0)));
#line 152 "termination.m"
            transform_hlds__termination___GoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__Goal_12, (MR_Integer) 1)));
#line 153 "termination.m"
            transform_hlds__termination__succeeded = ((((MR_tag((MR_Word) transform_hlds__termination__GoalExpr_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__GoalExpr_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 153 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 153 "termination.m"
              {
#line 153 "termination.m"
                transform_hlds__termination__Attributes_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__GoalExpr_13, (MR_Integer) 1)));
#line 153 "termination.m"
                transform_hlds__termination__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__GoalExpr_13, (MR_Integer) 2)));
#line 153 "termination.m"
                transform_hlds__termination__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__termination__GoalExpr_13, (MR_Integer) 3)));
#line 153 "termination.m"
                transform_hlds__termination__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__GoalExpr_13, (MR_Integer) 4)));
#line 153 "termination.m"
                transform_hlds__termination__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__GoalExpr_13, (MR_Integer) 5)));
#line 153 "termination.m"
                transform_hlds__termination__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__GoalExpr_13, (MR_Integer) 6)));
#line 153 "termination.m"
                transform_hlds__termination__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__GoalExpr_13, (MR_Integer) 7)));
#line 156 "termination.m"
                {
#line 156 "termination.m"
                  MR_Word transform_hlds__termination__ProcInfo_22;

#line 155 "termination.m"
                  {
#line 155 "termination.m"
                    transform_hlds__termination__check_foreign_code_attributes_of_proc_7_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26, transform_hlds__termination__V_38_38, transform_hlds__termination__Attributes_15, transform_hlds__termination__ProcInfo0_11, &transform_hlds__termination__ProcInfo_22, transform_hlds__termination__STATE_VARIABLE_Specs_0_28, transform_hlds__termination__STATE_VARIABLE_Specs_29);
                  }
#line 157 "termination.m"
                  {
#line 157 "termination.m"
                    hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(transform_hlds__termination__V_38_38, transform_hlds__termination__PredInfo_10, transform_hlds__termination__ProcInfo_22, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27);
#line 157 "termination.m"
                    return;
                  }
#line 156 "termination.m"
                }
#line 153 "termination.m"
              }
#line 153 "termination.m"
            else
#line 160 "termination.m"
              {
#line 160 "termination.m"
                *transform_hlds__termination__STATE_VARIABLE_Specs_29 = transform_hlds__termination__STATE_VARIABLE_Specs_0_28;
#line 160 "termination.m"
                *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26;
#line 160 "termination.m"
              }
#line 148 "termination.m"
          }
#line 145 "termination.m"
        else
#line 163 "termination.m"
          {
#line 163 "termination.m"
            *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26;
#line 163 "termination.m"
            *transform_hlds__termination__STATE_VARIABLE_Specs_29 = transform_hlds__termination__STATE_VARIABLE_Specs_0_28;
#line 163 "termination.m"
          }
#line 145 "termination.m"
      }
#line 145 "termination.m"
  }
#line 139 "termination.m"
}

#line 108 "termination.m"
static void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_3_p_0_3(
#line 108 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 108 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1,
#line 108 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_2,
#line 108 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_3,
#line 108 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_4,
#line 108 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_5)
#line 108 "termination.m"
{
#line 108 "termination.m"
  {
#line 108 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;
#line 108 "termination.m"
    MR_Word transform_hlds__termination__conv9_STATE_VARIABLE_ModuleInfo_48;
#line 108 "termination.m"
    MR_Word transform_hlds__termination__conv8_STATE_VARIABLE_Specs_50;

#line 108 "termination.m"
    {
#line 108 "termination.m"
      transform_hlds__termination__analyse_termination_in_scc_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1), ((MR_Word) transform_hlds__termination__wrapper_arg_2), &transform_hlds__termination__conv9_STATE_VARIABLE_ModuleInfo_48, ((MR_Word) transform_hlds__termination__wrapper_arg_4), &transform_hlds__termination__conv8_STATE_VARIABLE_Specs_50);
    }
#line 108 "termination.m"
    *transform_hlds__termination__wrapper_arg_3 = ((MR_Box) (transform_hlds__termination__conv9_STATE_VARIABLE_ModuleInfo_48));
#line 108 "termination.m"
    *transform_hlds__termination__wrapper_arg_5 = ((MR_Box) (transform_hlds__termination__conv8_STATE_VARIABLE_Specs_50));
#line 108 "termination.m"
  }
#line 108 "termination.m"
}

#line 266 "termination.m"
static void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_3_p_0_2(
#line 266 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 266 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1,
#line 266 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_2,
#line 266 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_3,
#line 266 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_4,
#line 266 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_5)
#line 266 "termination.m"
{
#line 266 "termination.m"
  {
#line 266 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;
#line 266 "termination.m"
    MR_Word transform_hlds__termination__conv5_STATE_VARIABLE_ModuleInfo_27;
#line 266 "termination.m"
    MR_Word transform_hlds__termination__conv4_STATE_VARIABLE_Specs_29;

#line 266 "termination.m"
    {
#line 266 "termination.m"
      transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0(((MR_Word) transform_hlds__termination__wrapper_arg_1), ((MR_Word) transform_hlds__termination__wrapper_arg_2), &transform_hlds__termination__conv5_STATE_VARIABLE_ModuleInfo_27, ((MR_Word) transform_hlds__termination__wrapper_arg_4), &transform_hlds__termination__conv4_STATE_VARIABLE_Specs_29);
    }
#line 266 "termination.m"
    *transform_hlds__termination__wrapper_arg_3 = ((MR_Box) (transform_hlds__termination__conv5_STATE_VARIABLE_ModuleInfo_27));
#line 266 "termination.m"
    *transform_hlds__termination__wrapper_arg_5 = ((MR_Box) (transform_hlds__termination__conv4_STATE_VARIABLE_Specs_29));
#line 266 "termination.m"
  }
#line 266 "termination.m"
}

#line 136 "termination.m"
static void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_3_p_0_1(
#line 136 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 136 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1,
#line 136 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_2,
#line 136 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_3,
#line 136 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_4,
#line 136 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_5)
#line 136 "termination.m"
{
#line 136 "termination.m"
  {
#line 136 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;
#line 136 "termination.m"
    MR_Word transform_hlds__termination__conv1_STATE_VARIABLE_ModuleInfo_27;
#line 136 "termination.m"
    MR_Word transform_hlds__termination__conv0_STATE_VARIABLE_Specs_29;

#line 136 "termination.m"
    {
#line 136 "termination.m"
      transform_hlds__termination__check_foreign_code_attributes_in_scc_5_p_0(((MR_Word) transform_hlds__termination__wrapper_arg_1), ((MR_Word) transform_hlds__termination__wrapper_arg_2), &transform_hlds__termination__conv1_STATE_VARIABLE_ModuleInfo_27, ((MR_Word) transform_hlds__termination__wrapper_arg_4), &transform_hlds__termination__conv0_STATE_VARIABLE_Specs_29);
    }
#line 136 "termination.m"
    *transform_hlds__termination__wrapper_arg_3 = ((MR_Box) (transform_hlds__termination__conv1_STATE_VARIABLE_ModuleInfo_27));
#line 136 "termination.m"
    *transform_hlds__termination__wrapper_arg_5 = ((MR_Box) (transform_hlds__termination__conv0_STATE_VARIABLE_Specs_29));
#line 136 "termination.m"
  }
#line 136 "termination.m"
}

#line 44 "termination.m"
void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_3_p_0(
#line 44 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_18,
#line 44 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_19,
#line 44 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_Specs_20)
#line 44 "termination.m"
{
#line 81 "termination.m"
  {
#line 81 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 81 "termination.m"
    MR_Word transform_hlds__termination__Globals_6;
#line 81 "termination.m"
    MR_Word transform_hlds__termination__TermNorm_7;
#line 81 "termination.m"
    MR_Word transform_hlds__termination__FunctorInfo_8;
#line 81 "termination.m"
    MR_Integer transform_hlds__termination__MaxErrors_9;
#line 81 "termination.m"
    MR_Integer transform_hlds__termination__MaxPaths_10;
#line 81 "termination.m"
    MR_Word transform_hlds__termination__PassInfo_11;
#line 81 "termination.m"
    MR_Word transform_hlds__termination__PredIds_12;
#line 81 "termination.m"
    MR_Word transform_hlds__termination__DepInfo_13;
#line 81 "termination.m"
    MR_Word transform_hlds__termination__SCCs_14;
#line 81 "termination.m"
    MR_Word transform_hlds__termination__PostSpecs_15;
#line 81 "termination.m"
    MR_Word transform_hlds__termination__ProcAnalysisKinds0_16;
#line 81 "termination.m"
    MR_Word transform_hlds__termination__ProcAnalysisKinds_17;
#line 81 "termination.m"
    MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_23_23;
#line 81 "termination.m"
    MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_24_24;
#line 81 "termination.m"
    MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26;
#line 81 "termination.m"
    MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_27_27;
#line 81 "termination.m"
    MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_28_28;
#line 81 "termination.m"
    MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_29_29;
#line 81 "termination.m"
    MR_Word transform_hlds__termination__V_30_30;
#line 81 "termination.m"
    MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_31_31;
#line 81 "termination.m"
    MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_32_32;
#line 136 "termination.m"
    MR_Box transform_hlds__termination__conv3_STATE_VARIABLE_ModuleInfo_26_26;
#line 136 "termination.m"
    MR_Box transform_hlds__termination__conv2_STATE_VARIABLE_Specs_27_27;
#line 266 "termination.m"
    MR_Box transform_hlds__termination__conv7_STATE_VARIABLE_ModuleInfo_28_28;
#line 266 "termination.m"
    MR_Box transform_hlds__termination__conv6_STATE_VARIABLE_Specs_29_29;
#line 108 "termination.m"
    MR_Box transform_hlds__termination__conv11_STATE_VARIABLE_ModuleInfo_31_31;
#line 108 "termination.m"
    MR_Box transform_hlds__termination__conv10_STATE_VARIABLE_Specs_32_32;

#line 82 "termination.m"
    {
#line 82 "termination.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_18, &transform_hlds__termination__Globals_6);
    }
#line 83 "termination.m"
    {
#line 83 "termination.m"
      libs__globals__get_termination_norm_2_p_0(transform_hlds__termination__Globals_6, &transform_hlds__termination__TermNorm_7);
    }
#line 84 "termination.m"
    {
#line 84 "termination.m"
      transform_hlds__termination__FunctorInfo_8 = transform_hlds__term_norm__set_functor_info_2_f_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_18, transform_hlds__termination__TermNorm_7);
    }
#line 85 "termination.m"
    {
#line 85 "termination.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__termination__Globals_6, (MR_Integer) 413, &transform_hlds__termination__MaxErrors_9);
    }
#line 86 "termination.m"
    {
#line 86 "termination.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__termination__Globals_6, (MR_Integer) 414, &transform_hlds__termination__MaxPaths_10);
    }
#line 87 "termination.m"
    {
#line 87 "termination.m"
      transform_hlds__termination__PassInfo_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 87 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__PassInfo_11, 0) = ((MR_Box) (transform_hlds__termination__FunctorInfo_8));
#line 87 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__PassInfo_11, 1) = ((MR_Box) (transform_hlds__termination__MaxErrors_9));
#line 87 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__PassInfo_11, 2) = ((MR_Box) (transform_hlds__termination__MaxPaths_10));
#line 87 "termination.m"
    }
#line 91 "termination.m"
    {
#line 91 "termination.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_18, &transform_hlds__termination__PredIds_12);
    }
#line 92 "termination.m"
    {
#line 92 "termination.m"
      transform_hlds__termination__term_preprocess_preds_3_p_0(transform_hlds__termination__PredIds_12, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_18, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_23_23);
    }
#line 95 "termination.m"
    {
#line 95 "termination.m"
      transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_23_23, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_24_24);
    }
#line 96 "termination.m"
    {
#line 96 "termination.m"
      hlds__hlds_module__module_info_dependency_info_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_24_24, &transform_hlds__termination__DepInfo_13);
    }
#line 97 "termination.m"
    {
#line 97 "termination.m"
      hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__termination__DepInfo_13, &transform_hlds__termination__SCCs_14);
    }
#line 136 "termination.m"
    {
#line 136 "termination.m"
      mercury__list__foldl2_6_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__termination_scalar_common_1[1], (MR_Word) &transform_hlds__termination_scalar_common_2[1], transform_hlds__termination__SCCs_14, ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_24_24)), &transform_hlds__termination__conv3_STATE_VARIABLE_ModuleInfo_26_26, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__termination__conv2_STATE_VARIABLE_Specs_27_27);
    }
#line 136 "termination.m"
    transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26 = ((MR_Word) transform_hlds__termination__conv3_STATE_VARIABLE_ModuleInfo_26_26);
#line 136 "termination.m"
    transform_hlds__termination__STATE_VARIABLE_Specs_27_27 = ((MR_Word) transform_hlds__termination__conv2_STATE_VARIABLE_Specs_27_27);
#line 266 "termination.m"
    {
#line 266 "termination.m"
      mercury__list__foldl2_6_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__termination_scalar_common_1[1], (MR_Word) &transform_hlds__termination_scalar_common_2[2], transform_hlds__termination__SCCs_14, ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26)), &transform_hlds__termination__conv7_STATE_VARIABLE_ModuleInfo_28_28, ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_Specs_27_27)), &transform_hlds__termination__conv6_STATE_VARIABLE_Specs_29_29);
    }
#line 266 "termination.m"
    transform_hlds__termination__STATE_VARIABLE_ModuleInfo_28_28 = ((MR_Word) transform_hlds__termination__conv7_STATE_VARIABLE_ModuleInfo_28_28);
#line 266 "termination.m"
    transform_hlds__termination__STATE_VARIABLE_Specs_29_29 = ((MR_Word) transform_hlds__termination__conv6_STATE_VARIABLE_Specs_29_29);
#line 108 "termination.m"
    {
#line 108 "termination.m"
      transform_hlds__termination__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 108 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_30_30, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_4[0]));
#line 108 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_30_30, 1) = ((MR_Box) (transform_hlds__termination__analyse_termination_in_module_3_p_0_3));
#line 108 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 108 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_30_30, 3) = ((MR_Box) (transform_hlds__termination__PassInfo_11));
#line 108 "termination.m"
    }
#line 108 "termination.m"
    {
#line 108 "termination.m"
      mercury__list__foldl2_6_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__termination_scalar_common_1[1], transform_hlds__termination__V_30_30, transform_hlds__termination__SCCs_14, ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_28_28)), &transform_hlds__termination__conv11_STATE_VARIABLE_ModuleInfo_31_31, ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_Specs_29_29)), &transform_hlds__termination__conv10_STATE_VARIABLE_Specs_32_32);
    }
#line 108 "termination.m"
    transform_hlds__termination__STATE_VARIABLE_ModuleInfo_31_31 = ((MR_Word) transform_hlds__termination__conv11_STATE_VARIABLE_ModuleInfo_31_31);
#line 108 "termination.m"
    transform_hlds__termination__STATE_VARIABLE_Specs_32_32 = ((MR_Word) transform_hlds__termination__conv10_STATE_VARIABLE_Specs_32_32);
#line 110 "termination.m"
    {
#line 110 "termination.m"
      transform_hlds__post_term_analysis__run_post_term_analysis_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_31_31, &transform_hlds__termination__PostSpecs_15);
    }
#line 111 "termination.m"
    {
#line 111 "termination.m"
      *transform_hlds__termination__STATE_VARIABLE_Specs_20 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, transform_hlds__termination__PostSpecs_15, transform_hlds__termination__STATE_VARIABLE_Specs_32_32);
    }
#line 113 "termination.m"
    {
#line 113 "termination.m"
      hlds__hlds_module__module_info_get_proc_analysis_kinds_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_31_31, &transform_hlds__termination__ProcAnalysisKinds0_16);
    }
#line 114 "termination.m"
    {
#line 114 "termination.m"
      mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0, ((MR_Box) ((MR_Integer) 3)), transform_hlds__termination__ProcAnalysisKinds0_16, &transform_hlds__termination__ProcAnalysisKinds_17);
    }
#line 115 "termination.m"
    {
#line 115 "termination.m"
      hlds__hlds_module__module_info_set_proc_analysis_kinds_3_p_0(transform_hlds__termination__ProcAnalysisKinds_17, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_31_31, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_19);
#line 115 "termination.m"
      return;
    }
#line 81 "termination.m"
  }
#line 44 "termination.m"
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
