/*
** Automatically generated from `termination.m'
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
#include "hlds.passes_aux.mih"
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
#include "transform_hlds.intermod.mih"
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

#line 567 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__decide_what_term_errors_to_report__567__1_1_p_0(
#line 567 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_38);

#line 538 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__decide_what_term_errors_to_report__538__1_2_p_0(
#line 538 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_5,
#line 538 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_36);

#line 524 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__decide_what_term_errors_to_report__524__1_2_p_0(
#line 524 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_5,
#line 524 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_34);

#line 394 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__394__1_1_p_0(
#line 394 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_57);

#line 360 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__360__1_2_p_0(
#line 360 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47,
#line 360 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_51);

#line 307 "termination.m"
static MR_Word MR_CALL 
transform_hlds__termination__IntroducedFrom__func__check_scc_pragmas_are_consistent__307__1_1_f_0(
#line 307 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_41);

#line 852 "termination.m"
static void MR_CALL 
transform_hlds__termination__change_procs_termination_info_5_p_0(
#line 852 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 852 "termination.m"
  MR_Word transform_hlds__termination__Override_2,
#line 852 "termination.m"
  MR_Word transform_hlds__termination__Termination_3,
#line 852 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4,
#line 852 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcTable_5);

#line 822 "termination.m"
static void MR_CALL 
transform_hlds__termination__change_procs_arg_size_info_5_p_0(
#line 822 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 822 "termination.m"
  MR_Word transform_hlds__termination__Override_2,
#line 822 "termination.m"
  MR_Word transform_hlds__termination__ArgSize_3,
#line 822 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4,
#line 822 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcTable_5);

#line 782 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_builtin_terminates_6_p_0(
#line 782 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 782 "termination.m"
  MR_Word transform_hlds__termination__PredId_2,
#line 782 "termination.m"
  MR_Word transform_hlds__termination__PredInfo_3,
#line 782 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_4,
#line 782 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0_5,
#line 782 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcTable_6);

#line 725 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_generated_terminates_4_p_0(
#line 725 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 725 "termination.m"
  MR_Word transform_hlds__termination__SpecialPredId_2,
#line 725 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0_3,
#line 725 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcTable_4);

#line 607 "termination.m"
static void MR_CALL 
transform_hlds__termination__term_preprocess_preds_3_p_0(
#line 607 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 607 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2,
#line 607 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_3);

#line 567 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__maybe_report_termination_errors_5_p_0_4(
#line 567 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 567 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 550 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__maybe_report_termination_errors_5_p_0_3(
#line 550 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 550 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 538 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__maybe_report_termination_errors_5_p_0_2(
#line 538 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 538 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 524 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__maybe_report_termination_errors_5_p_0_1(
#line 524 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 524 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 493 "termination.m"
static void MR_CALL 
transform_hlds__termination__maybe_report_termination_errors_5_p_0(
#line 493 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_6,
#line 493 "termination.m"
  MR_Word transform_hlds__termination__SCC_7,
#line 493 "termination.m"
  MR_Word transform_hlds__termination__Errors_8,
#line 493 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_0_12,
#line 493 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_Specs_13);

#line 472 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_termination_infos_4_p_0(
#line 472 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 472 "termination.m"
  MR_Word transform_hlds__termination__TerminationInfo_2,
#line 472 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3,
#line 472 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4);

#line 452 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_infinite_arg_size_infos_4_p_0(
#line 452 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 452 "termination.m"
  MR_Word transform_hlds__termination__ArgSizeInfo_2,
#line 452 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3,
#line 452 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4);

#line 431 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_finite_arg_size_infos_4_p_0(
#line 431 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 431 "termination.m"
  MR_Word transform_hlds__termination__OutputSupplierMap_2,
#line 431 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3,
#line 431 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4);

#line 394 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0_3(
#line 394 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 394 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 385 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0_2(
#line 385 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 385 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 360 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0_1(
#line 360 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 360 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 355 "termination.m"
static void MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0(
#line 355 "termination.m"
  MR_Word transform_hlds__termination__PassInfo_7,
#line 355 "termination.m"
  MR_Word transform_hlds__termination__SCC_8,
#line 355 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47,
#line 355 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_48,
#line 355 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_0_49,
#line 355 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_Specs_50);

#line 324 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__check_procs_known_term_3_p_0(
#line 324 "termination.m"
  MR_Word transform_hlds__termination__Status_1,
#line 324 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_2,
#line 324 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_3);

#line 307 "termination.m"
static MR_Box MR_CALL 
transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0_2(
#line 307 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 307 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 275 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0_1(
#line 275 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 275 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 270 "termination.m"
static void MR_CALL 
transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0(
#line 270 "termination.m"
  MR_Word transform_hlds__termination__SCC_6,
#line 270 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26,
#line 270 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27,
#line 270 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_0_28,
#line 270 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_Specs_29);

#line 169 "termination.m"
static void MR_CALL 
transform_hlds__termination__check_foreign_code_attributes_of_proc_7_p_0(
#line 169 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_8,
#line 169 "termination.m"
  MR_Word transform_hlds__termination__PPId_9,
#line 169 "termination.m"
  MR_Word transform_hlds__termination__Attributes_10,
#line 169 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25,
#line 169 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcInfo_26,
#line 169 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_0_27,
#line 169 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_Specs_28);

#line 141 "termination.m"
static void MR_CALL 
transform_hlds__termination__check_foreign_code_attributes_in_scc_5_p_0(
#line 141 "termination.m"
  MR_Word transform_hlds__termination__PPIds_6,
#line 141 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26,
#line 141 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27,
#line 141 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_0_28,
#line 141 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_Specs_29);

#line 110 "termination.m"
static void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_3_p_0_3(
#line 110 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 110 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1,
#line 110 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_2,
#line 110 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_3,
#line 110 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_4,
#line 110 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_5);

#line 268 "termination.m"
static void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_3_p_0_2(
#line 268 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 268 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1,
#line 268 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_2,
#line 268 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_3,
#line 268 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_4,
#line 268 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_5);

#line 138 "termination.m"
static void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_3_p_0_1(
#line 138 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 138 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1,
#line 138 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_2,
#line 138 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_3,
#line 138 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_4,
#line 138 "termination.m"
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

#line 567 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__decide_what_term_errors_to_report__567__1_1_p_0(
#line 567 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_38)
#line 567 "termination.m"
{
#line 567 "termination.m"
  {
#line 567 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 567 "termination.m"
    MR_Word transform_hlds__termination__ErrorKind_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__HeadVar__1_38, (MR_Integer) 1)));
#line 567 "termination.m"
    MR_Word transform_hlds__termination__V_39_39;
#line 568 "termination.m"
    MR_Word transform_hlds__termination__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__HeadVar__1_38, (MR_Integer) 0)));

#line 569 "termination.m"
    {
#line 569 "termination.m"
      transform_hlds__termination__V_39_39 = transform_hlds__term_errors__term_error_kind_is_direct_error_1_f_0(transform_hlds__termination__ErrorKind_28);
    }
#line 569 "termination.m"
    transform_hlds__termination__succeeded = (transform_hlds__termination__V_39_39 == (MR_Integer) 1);
#line 567 "termination.m"
    return transform_hlds__termination__succeeded;
#line 567 "termination.m"
  }
#line 567 "termination.m"
}

#line 538 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__decide_what_term_errors_to_report__538__1_2_p_0(
#line 538 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_5,
#line 538 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_36)
#line 538 "termination.m"
{
#line 538 "termination.m"
  {
#line 538 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 538 "termination.m"
    MR_Word transform_hlds__termination__PredInfo_42;
#line 539 "termination.m"
    MR_Word transform_hlds__termination__V_21_21;

#line 539 "termination.m"
    {
#line 539 "termination.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__termination__ModuleInfo_5, transform_hlds__termination__HeadVar__2_36, &transform_hlds__termination__PredInfo_42, &transform_hlds__termination__V_21_21);
    }
#line 540 "termination.m"
    {
#line 540 "termination.m"
      transform_hlds__termination__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(transform_hlds__termination__PredInfo_42);
    }
#line 540 "termination.m"
    transform_hlds__termination__succeeded = !(transform_hlds__termination__succeeded);
#line 538 "termination.m"
    return transform_hlds__termination__succeeded;
#line 538 "termination.m"
  }
#line 538 "termination.m"
}

#line 524 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__decide_what_term_errors_to_report__524__1_2_p_0(
#line 524 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_5,
#line 524 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_34)
#line 524 "termination.m"
{
#line 524 "termination.m"
  {
#line 524 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 524 "termination.m"
    MR_Word transform_hlds__termination__PredInfo_14;
#line 524 "termination.m"
    MR_Word transform_hlds__termination__Markers_16;
#line 524 "termination.m"
    MR_Word transform_hlds__termination__V_35_35;
#line 526 "termination.m"
    MR_Word transform_hlds__termination__V_15_15;

#line 526 "termination.m"
    {
#line 526 "termination.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__termination__ModuleInfo_5, transform_hlds__termination__HeadVar__2_34, &transform_hlds__termination__PredInfo_14, &transform_hlds__termination__V_15_15);
    }
#line 527 "termination.m"
    {
#line 527 "termination.m"
      transform_hlds__termination__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(transform_hlds__termination__PredInfo_14);
    }
#line 527 "termination.m"
    transform_hlds__termination__succeeded = !(transform_hlds__termination__succeeded);
#line 524 "termination.m"
    if (transform_hlds__termination__succeeded)
#line 524 "termination.m"
      {
#line 528 "termination.m"
        {
#line 528 "termination.m"
          hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__termination__PredInfo_14, &transform_hlds__termination__Markers_16);
        }
#line 529 "termination.m"
        transform_hlds__termination__V_35_35 = (MR_Integer) 19;
#line 529 "termination.m"
        {
#line 529 "termination.m"
          return transform_hlds__termination__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__termination__Markers_16, transform_hlds__termination__V_35_35);
        }
#line 524 "termination.m"
      }
#line 524 "termination.m"
    return transform_hlds__termination__succeeded;
#line 524 "termination.m"
  }
#line 524 "termination.m"
}

#line 394 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__394__1_1_p_0(
#line 394 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_57)
#line 394 "termination.m"
{
#line 394 "termination.m"
  {
#line 394 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 394 "termination.m"
    MR_Word transform_hlds__termination__ErrorKind_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__HeadVar__1_57, (MR_Integer) 1)));
#line 394 "termination.m"
    MR_Word transform_hlds__termination__V_58_58;
#line 395 "termination.m"
    MR_Word transform_hlds__termination___Context_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__HeadVar__1_57, (MR_Integer) 0)));

#line 396 "termination.m"
    {
#line 396 "termination.m"
      transform_hlds__termination__V_58_58 = transform_hlds__term_errors__term_error_kind_is_fatal_error_1_f_0(transform_hlds__termination__ErrorKind_33);
    }
#line 396 "termination.m"
    transform_hlds__termination__succeeded = (transform_hlds__termination__V_58_58 == (MR_Integer) 1);
#line 394 "termination.m"
    return transform_hlds__termination__succeeded;
#line 394 "termination.m"
  }
#line 394 "termination.m"
}

#line 360 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__360__1_2_p_0(
#line 360 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47,
#line 360 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_51)
#line 360 "termination.m"
{
#line 360 "termination.m"
  {
#line 360 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 360 "termination.m"
    MR_Word transform_hlds__termination__ProcInfo_14;
#line 360 "termination.m"
    MR_Word transform_hlds__termination__V_67_67;
#line 361 "termination.m"
    MR_Word transform_hlds__termination__V_13_13;
#line 362 "termination.m"
    MR_Word transform_hlds__termination__V_72_72;

#line 361 "termination.m"
    {
#line 361 "termination.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47, transform_hlds__termination__HeadVar__2_51, &transform_hlds__termination__V_13_13, &transform_hlds__termination__ProcInfo_14);
    }
#line 362 "termination.m"
    {
#line 362 "termination.m"
      hlds__hlds_pred__proc_info_get_maybe_arg_size_info_2_p_0(transform_hlds__termination__ProcInfo_14, &transform_hlds__termination__V_67_67);
    }
#line 362 "termination.m"
    transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__V_67_67)) == (MR_mktag((MR_Integer) 1)));
#line 362 "termination.m"
    if (transform_hlds__termination__succeeded)
#line 362 "termination.m"
      transform_hlds__termination__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__V_67_67, (MR_Integer) 0)));
#line 360 "termination.m"
    return transform_hlds__termination__succeeded;
#line 360 "termination.m"
  }
#line 360 "termination.m"
}

#line 307 "termination.m"
static MR_Word MR_CALL 
transform_hlds__termination__IntroducedFrom__func__check_scc_pragmas_are_consistent__307__1_1_f_0(
#line 307 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_41)
#line 307 "termination.m"
{
#line 307 "termination.m"
  {
#line 307 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 307 "termination.m"
    MR_Word transform_hlds__termination__HeadVar__2_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__HeadVar__1_41, (MR_Integer) 0)));
#line 307 "termination.m"
    MR_Integer transform_hlds__termination__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__HeadVar__1_41, (MR_Integer) 1)));

#line 307 "termination.m"
    return transform_hlds__termination__HeadVar__2_42;
#line 307 "termination.m"
  }
#line 307 "termination.m"
}

#line 852 "termination.m"
static void MR_CALL 
transform_hlds__termination__change_procs_termination_info_5_p_0(
#line 852 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 852 "termination.m"
  MR_Word transform_hlds__termination__Override_2,
#line 852 "termination.m"
  MR_Word transform_hlds__termination__Termination_3,
#line 852 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4,
#line 852 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcTable_5)
#line 852 "termination.m"
{
#line 855 "termination.m"
  while (MR_TRUE)
#line 855 "termination.m"
    {
#line 855 "termination.m"
      /* tailcall optimized into a loop */
#line 855 "termination.m"
      {
#line 855 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 855 "termination.m"
        if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 855 "termination.m"
          *transform_hlds__termination__STATE_VARIABLE_ProcTable_5 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4;
#line 855 "termination.m"
        else
#line 857 "termination.m"
          {
#line 857 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_25_25 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 857 "termination.m"
            MR_Integer transform_hlds__termination__ProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));
#line 857 "termination.m"
            MR_Word transform_hlds__termination__ProcIds_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
#line 857 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo0_16;
#line 857 "termination.m"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22;
#line 858 "termination.m"
            MR_Box transform_hlds__termination__conv0_ProcInfo0_16;

#line 858 "termination.m"
            {
#line 858 "termination.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__termination__TypeCtorInfo_25_25, transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4, transform_hlds__termination__ProcId_11, &transform_hlds__termination__conv0_ProcInfo0_16);
            }
#line 858 "termination.m"
            transform_hlds__termination__ProcInfo0_16 = ((MR_Word) transform_hlds__termination__conv0_ProcInfo0_16);
#line 861 "termination.m"
            transform_hlds__termination__succeeded = (transform_hlds__termination__Override_2 == (MR_Integer) 1);
#line 862 "termination.m"
            if (!(transform_hlds__termination__succeeded))
#line 863 "termination.m"
              {
#line 863 "termination.m"
                MR_Word transform_hlds__termination__V_26_26;

#line 863 "termination.m"
                {
#line 863 "termination.m"
                  hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__termination__ProcInfo0_16, &transform_hlds__termination__V_26_26);
                }
#line 863 "termination.m"
                {
#line 863 "termination.m"
                  transform_hlds__termination__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[35], ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (transform_hlds__termination__V_26_26)));
                }
#line 863 "termination.m"
              }
#line 870 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 868 "termination.m"
              {
#line 868 "termination.m"
                MR_Word transform_hlds__termination__ProcInfo_17;
#line 868 "termination.m"
                MR_Word transform_hlds__termination__V_21_21;

#line 867 "termination.m"
                {
#line 867 "termination.m"
                  transform_hlds__termination__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 867 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__V_21_21, 0) = ((MR_Box) (transform_hlds__termination__Termination_3));
#line 867 "termination.m"
                }
#line 867 "termination.m"
                {
#line 867 "termination.m"
                  hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(transform_hlds__termination__V_21_21, transform_hlds__termination__ProcInfo0_16, &transform_hlds__termination__ProcInfo_17);
                }
#line 869 "termination.m"
                {
#line 869 "termination.m"
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__termination__TypeCtorInfo_25_25, transform_hlds__termination__ProcId_11, ((MR_Box) (transform_hlds__termination__ProcInfo_17)), transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4, &transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22);
                }
#line 868 "termination.m"
              }
#line 870 "termination.m"
            else
#line 870 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4;
#line 873 "termination.m"
            /* direct tailcall eliminated */
#line 873 "termination.m"
            {
#line 873 "termination.m"
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__ProcIds_12;
#line 873 "termination.m"
              MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_4 = transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22;

#line 873 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_4;
#line 873 "termination.m"
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
#line 873 "termination.m"
            }
#line 873 "termination.m"
            continue;
#line 857 "termination.m"
          }
#line 855 "termination.m"
      }
#line 855 "termination.m"
      break;
#line 855 "termination.m"
    }
#line 852 "termination.m"
}

#line 822 "termination.m"
static void MR_CALL 
transform_hlds__termination__change_procs_arg_size_info_5_p_0(
#line 822 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 822 "termination.m"
  MR_Word transform_hlds__termination__Override_2,
#line 822 "termination.m"
  MR_Word transform_hlds__termination__ArgSize_3,
#line 822 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4,
#line 822 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcTable_5)
#line 822 "termination.m"
{
#line 825 "termination.m"
  while (MR_TRUE)
#line 825 "termination.m"
    {
#line 825 "termination.m"
      /* tailcall optimized into a loop */
#line 825 "termination.m"
      {
#line 825 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 825 "termination.m"
        if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 825 "termination.m"
          *transform_hlds__termination__STATE_VARIABLE_ProcTable_5 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4;
#line 825 "termination.m"
        else
#line 827 "termination.m"
          {
#line 827 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_25_25 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 827 "termination.m"
            MR_Integer transform_hlds__termination__ProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));
#line 827 "termination.m"
            MR_Word transform_hlds__termination__ProcIds_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
#line 827 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo0_16;
#line 827 "termination.m"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22;
#line 828 "termination.m"
            MR_Box transform_hlds__termination__conv0_ProcInfo0_16;

#line 828 "termination.m"
            {
#line 828 "termination.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__termination__TypeCtorInfo_25_25, transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4, transform_hlds__termination__ProcId_11, &transform_hlds__termination__conv0_ProcInfo0_16);
            }
#line 828 "termination.m"
            transform_hlds__termination__ProcInfo0_16 = ((MR_Word) transform_hlds__termination__conv0_ProcInfo0_16);
#line 830 "termination.m"
            transform_hlds__termination__succeeded = (transform_hlds__termination__Override_2 == (MR_Integer) 1);
#line 831 "termination.m"
            if (!(transform_hlds__termination__succeeded))
#line 831 "termination.m"
              {
#line 831 "termination.m"
                MR_Word transform_hlds__termination__V_26_26;

#line 831 "termination.m"
                {
#line 831 "termination.m"
                  hlds__hlds_pred__proc_info_get_maybe_arg_size_info_2_p_0(transform_hlds__termination__ProcInfo0_16, &transform_hlds__termination__V_26_26);
                }
#line 831 "termination.m"
                {
#line 831 "termination.m"
                  transform_hlds__termination__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[34], ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (transform_hlds__termination__V_26_26)));
                }
#line 831 "termination.m"
              }
#line 836 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 834 "termination.m"
              {
#line 834 "termination.m"
                MR_Word transform_hlds__termination__ProcInfo_17;
#line 834 "termination.m"
                MR_Word transform_hlds__termination__V_21_21;

#line 834 "termination.m"
                {
#line 834 "termination.m"
                  transform_hlds__termination__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 834 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__V_21_21, 0) = ((MR_Box) (transform_hlds__termination__ArgSize_3));
#line 834 "termination.m"
                }
#line 834 "termination.m"
                {
#line 834 "termination.m"
                  hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_p_0(transform_hlds__termination__V_21_21, transform_hlds__termination__ProcInfo0_16, &transform_hlds__termination__ProcInfo_17);
                }
#line 835 "termination.m"
                {
#line 835 "termination.m"
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__termination__TypeCtorInfo_25_25, transform_hlds__termination__ProcId_11, ((MR_Box) (transform_hlds__termination__ProcInfo_17)), transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4, &transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22);
                }
#line 834 "termination.m"
              }
#line 836 "termination.m"
            else
#line 836 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4;
#line 839 "termination.m"
            /* direct tailcall eliminated */
#line 839 "termination.m"
            {
#line 839 "termination.m"
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__ProcIds_12;
#line 839 "termination.m"
              MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_4 = transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22;

#line 839 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_4;
#line 839 "termination.m"
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
#line 839 "termination.m"
            }
#line 839 "termination.m"
            continue;
#line 827 "termination.m"
          }
#line 825 "termination.m"
      }
#line 825 "termination.m"
      break;
#line 825 "termination.m"
    }
#line 822 "termination.m"
}

#line 782 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_builtin_terminates_6_p_0(
#line 782 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 782 "termination.m"
  MR_Word transform_hlds__termination__PredId_2,
#line 782 "termination.m"
  MR_Word transform_hlds__termination__PredInfo_3,
#line 782 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_4,
#line 782 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0_5,
#line 782 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcTable_6)
#line 782 "termination.m"
{
#line 785 "termination.m"
  while (MR_TRUE)
#line 785 "termination.m"
    {
#line 785 "termination.m"
      /* tailcall optimized into a loop */
#line 785 "termination.m"
      {
#line 785 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 785 "termination.m"
        if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 785 "termination.m"
          *transform_hlds__termination__STATE_VARIABLE_ProcTable_6 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0_5;
#line 785 "termination.m"
        else
#line 787 "termination.m"
          {
#line 787 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_42_42 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 787 "termination.m"
            MR_Integer transform_hlds__termination__ProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));
#line 787 "termination.m"
            MR_Word transform_hlds__termination__ProcIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
#line 787 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo0_19;
#line 787 "termination.m"
            MR_Word transform_hlds__termination__ArgSizeInfo_22;
#line 787 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo1_26;
#line 787 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo_27;
#line 787 "termination.m"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_39_39;
#line 788 "termination.m"
            MR_Box transform_hlds__termination__conv0_ProcInfo0_19;

#line 788 "termination.m"
            {
#line 788 "termination.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__termination__TypeCtorInfo_42_42, transform_hlds__termination__STATE_VARIABLE_ProcTable_0_5, transform_hlds__termination__ProcId_13, &transform_hlds__termination__conv0_ProcInfo0_19);
            }
#line 788 "termination.m"
            transform_hlds__termination__ProcInfo0_19 = ((MR_Word) transform_hlds__termination__conv0_ProcInfo0_19);
#line 789 "termination.m"
            {
#line 789 "termination.m"
              transform_hlds__termination__succeeded = transform_hlds__term_util__all_args_input_or_zero_size_3_p_0(transform_hlds__termination__ModuleInfo_4, transform_hlds__termination__PredInfo_3, transform_hlds__termination__ProcInfo0_19);
            }
#line 796 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 793 "termination.m"
              {
#line 793 "termination.m"
                MR_Word transform_hlds__termination__HeadVars_20;
#line 793 "termination.m"
                MR_Word transform_hlds__termination__UsedArgs_21;
#line 793 "termination.m"
                MR_Word transform_hlds__termination__V_31_31;

#line 793 "termination.m"
                {
#line 793 "termination.m"
                  hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__termination__ProcInfo0_19, &transform_hlds__termination__HeadVars_20);
                }
#line 794 "termination.m"
                {
#line 794 "termination.m"
                  transform_hlds__term_util__make_bool_list_3_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[3], transform_hlds__termination__HeadVars_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__termination__UsedArgs_21);
                }
#line 795 "termination.m"
                {
#line 795 "termination.m"
                  transform_hlds__termination__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 795 "termination.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__termination__V_31_31, 0) = ((MR_Box) ((MR_Integer) 0));
#line 795 "termination.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__termination__V_31_31, 1) = ((MR_Box) (transform_hlds__termination__UsedArgs_21));
#line 795 "termination.m"
                }
#line 795 "termination.m"
                {
#line 795 "termination.m"
                  transform_hlds__termination__ArgSizeInfo_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 795 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__ArgSizeInfo_22, 0) = ((MR_Box) (transform_hlds__termination__V_31_31));
#line 795 "termination.m"
                }
#line 793 "termination.m"
              }
#line 796 "termination.m"
            else
#line 797 "termination.m"
              {
#line 797 "termination.m"
                MR_Word transform_hlds__termination__Context_23;
#line 797 "termination.m"
                MR_Word transform_hlds__termination__Error_24;
#line 797 "termination.m"
                MR_Word transform_hlds__termination__ArgSizeError_25;
#line 797 "termination.m"
                MR_Word transform_hlds__termination__V_33_33;
#line 797 "termination.m"
                MR_Word transform_hlds__termination__V_34_34;

#line 797 "termination.m"
                {
#line 797 "termination.m"
                  hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__termination__PredInfo_3, &transform_hlds__termination__Context_23);
                }
#line 798 "termination.m"
                {
#line 798 "termination.m"
                  transform_hlds__termination__Error_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 798 "termination.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__termination__Error_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 798 "termination.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__termination__Error_24, 1) = ((MR_Box) (transform_hlds__termination__PredId_2));
#line 798 "termination.m"
                }
#line 799 "termination.m"
                {
#line 799 "termination.m"
                  transform_hlds__termination__ArgSizeError_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 799 "termination.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeError_25, 0) = ((MR_Box) (transform_hlds__termination__Context_23));
#line 799 "termination.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeError_25, 1) = ((MR_Box) (transform_hlds__termination__Error_24));
#line 799 "termination.m"
                }
#line 800 "termination.m"
                {
#line 800 "termination.m"
                  transform_hlds__termination__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 800 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__V_34_34, 0) = ((MR_Box) (transform_hlds__termination__ArgSizeError_25));
#line 800 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 800 "termination.m"
                }
#line 800 "termination.m"
                {
#line 800 "termination.m"
                  transform_hlds__termination__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 800 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__V_33_33, 0) = ((MR_Box) (transform_hlds__termination__V_34_34));
#line 800 "termination.m"
                }
#line 800 "termination.m"
                {
#line 800 "termination.m"
                  transform_hlds__termination__ArgSizeInfo_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 800 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__ArgSizeInfo_22, 0) = ((MR_Box) (transform_hlds__termination__V_33_33));
#line 800 "termination.m"
                }
#line 797 "termination.m"
              }
#line 803 "termination.m"
            {
#line 803 "termination.m"
              hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_p_0(transform_hlds__termination__ArgSizeInfo_22, transform_hlds__termination__ProcInfo0_19, &transform_hlds__termination__ProcInfo1_26);
            }
#line 804 "termination.m"
            mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 804 "termination.m"
            {
#line 804 "termination.m"
              hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_5[1]), transform_hlds__termination__ProcInfo1_26, &transform_hlds__termination__ProcInfo_27);
            }
#line 806 "termination.m"
            {
#line 806 "termination.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__termination__TypeCtorInfo_42_42, transform_hlds__termination__ProcId_13, ((MR_Box) (transform_hlds__termination__ProcInfo_27)), transform_hlds__termination__STATE_VARIABLE_ProcTable_0_5, &transform_hlds__termination__STATE_VARIABLE_ProcTable_39_39);
            }
#line 807 "termination.m"
            /* direct tailcall eliminated */
#line 807 "termination.m"
            {
#line 807 "termination.m"
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__ProcIds_14;
#line 807 "termination.m"
              MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_5 = transform_hlds__termination__STATE_VARIABLE_ProcTable_39_39;

#line 807 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ProcTable_0_5 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_5;
#line 807 "termination.m"
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
#line 807 "termination.m"
            }
#line 807 "termination.m"
            continue;
#line 787 "termination.m"
          }
#line 785 "termination.m"
      }
#line 785 "termination.m"
      break;
#line 785 "termination.m"
    }
#line 782 "termination.m"
}

#line 725 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_generated_terminates_4_p_0(
#line 725 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 725 "termination.m"
  MR_Word transform_hlds__termination__SpecialPredId_2,
#line 725 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0_3,
#line 725 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcTable_4)
#line 725 "termination.m"
{
#line 728 "termination.m"
  while (MR_TRUE)
#line 728 "termination.m"
    {
#line 728 "termination.m"
      /* tailcall optimized into a loop */
#line 728 "termination.m"
      {
#line 728 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 728 "termination.m"
        if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 728 "termination.m"
          *transform_hlds__termination__STATE_VARIABLE_ProcTable_4 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0_3;
#line 728 "termination.m"
        else
#line 729 "termination.m"
          {
#line 729 "termination.m"
            MR_Integer transform_hlds__termination__ProcId_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));
#line 729 "termination.m"
            MR_Word transform_hlds__termination__ProcIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
#line 729 "termination.m"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_23_23;

#line 743 "termination.m"
#line 743 "termination.m"
            switch (transform_hlds__termination__SpecialPredId_2) {
#line 743 "termination.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 743 "termination.m"
              case (MR_Integer) 2:
#line 743 "termination.m"
              case (MR_Integer) 1:
#line 743 "termination.m"
              case (MR_Integer) 0:
#line 734 "termination.m"
                {
#line 734 "termination.m"
                  MR_Word transform_hlds__termination__TypeCtorInfo_26_26 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 734 "termination.m"
                  MR_Word transform_hlds__termination__ProcInfo0_13;
#line 734 "termination.m"
                  MR_Word transform_hlds__termination__HeadVars_14;
#line 734 "termination.m"
                  MR_Word transform_hlds__termination__ArgSize_15;
#line 734 "termination.m"
                  MR_Word transform_hlds__termination__Termination_16;
#line 734 "termination.m"
                  MR_Word transform_hlds__termination__ProcInfo1_17;
#line 734 "termination.m"
                  MR_Word transform_hlds__termination__ProcInfo_18;
#line 734 "termination.m"
                  MR_Word transform_hlds__termination__V_21_21;
#line 734 "termination.m"
                  MR_Word transform_hlds__termination__V_22_22;
#line 735 "termination.m"
                  MR_Box transform_hlds__termination__conv0_ProcInfo0_13;

#line 735 "termination.m"
                  {
#line 735 "termination.m"
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__termination__TypeCtorInfo_26_26, transform_hlds__termination__STATE_VARIABLE_ProcTable_0_3, transform_hlds__termination__ProcId_9, &transform_hlds__termination__conv0_ProcInfo0_13);
                  }
#line 735 "termination.m"
                  transform_hlds__termination__ProcInfo0_13 = ((MR_Word) transform_hlds__termination__conv0_ProcInfo0_13);
#line 736 "termination.m"
                  {
#line 736 "termination.m"
                    hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__termination__ProcInfo0_13, &transform_hlds__termination__HeadVars_14);
                  }
#line 760 "termination.m"
#line 760 "termination.m"
                  switch (transform_hlds__termination__SpecialPredId_2) {
#line 760 "termination.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 760 "termination.m"
                    case (MR_Integer) 2:
#line 760 "termination.m"
                      {
#line 760 "termination.m"
                        MR_Word transform_hlds__termination__OutList_31;

#line 761 "termination.m"
                        {
#line 761 "termination.m"
                          transform_hlds__term_util__make_bool_list_3_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[3], transform_hlds__termination__HeadVars_14, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[31]), &transform_hlds__termination__OutList_31);
                        }
#line 762 "termination.m"
                        {
#line 762 "termination.m"
                          transform_hlds__termination__ArgSize_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 762 "termination.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSize_15, 0) = ((MR_Box) ((MR_Integer) 0));
#line 762 "termination.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSize_15, 1) = ((MR_Box) (transform_hlds__termination__OutList_31));
#line 762 "termination.m"
                        }
#line 763 "termination.m"
                        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 763 "termination.m"
                        transform_hlds__termination__Termination_16 = (MR_Word) &transform_hlds__termination_scalar_common_5[0];
#line 760 "termination.m"
                      }
#line 760 "termination.m"
                      break;
#line 760 "termination.m"
                    case (MR_Integer) 1:
#line 770 "termination.m"
                      {
#line 770 "termination.m"
                        MR_Word transform_hlds__termination__OutList_59;

#line 771 "termination.m"
                        {
#line 771 "termination.m"
                          transform_hlds__term_util__make_bool_list_3_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[3], transform_hlds__termination__HeadVars_14, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[30]), &transform_hlds__termination__OutList_59);
                        }
#line 772 "termination.m"
                        {
#line 772 "termination.m"
                          transform_hlds__termination__ArgSize_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 772 "termination.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSize_15, 0) = ((MR_Box) ((MR_Integer) 0));
#line 772 "termination.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSize_15, 1) = ((MR_Box) (transform_hlds__termination__OutList_59));
#line 772 "termination.m"
                        }
#line 773 "termination.m"
                        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 773 "termination.m"
                        transform_hlds__termination__Termination_16 = (MR_Word) &transform_hlds__termination_scalar_common_5[0];
#line 770 "termination.m"
                      }
#line 760 "termination.m"
                      break;
#line 760 "termination.m"
                    case (MR_Integer) 0:
#line 765 "termination.m"
                      {
#line 765 "termination.m"
                        MR_Word transform_hlds__termination__OutList_58;

#line 766 "termination.m"
                        {
#line 766 "termination.m"
                          transform_hlds__term_util__make_bool_list_3_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[3], transform_hlds__termination__HeadVars_14, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[33]), &transform_hlds__termination__OutList_58);
                        }
#line 767 "termination.m"
                        {
#line 767 "termination.m"
                          transform_hlds__termination__ArgSize_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 767 "termination.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSize_15, 0) = ((MR_Box) ((MR_Integer) 0));
#line 767 "termination.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSize_15, 1) = ((MR_Box) (transform_hlds__termination__OutList_58));
#line 767 "termination.m"
                        }
#line 768 "termination.m"
                        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 768 "termination.m"
                        transform_hlds__termination__Termination_16 = (MR_Word) &transform_hlds__termination_scalar_common_5[0];
#line 765 "termination.m"
                      }
#line 760 "termination.m"
                      break;
#line 760 "termination.m"
                  }
#line 739 "termination.m"
                  {
#line 739 "termination.m"
                    transform_hlds__termination__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 739 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_21_21, 0) = ((MR_Box) (transform_hlds__termination__ArgSize_15));
#line 739 "termination.m"
                  }
#line 739 "termination.m"
                  {
#line 739 "termination.m"
                    hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_p_0(transform_hlds__termination__V_21_21, transform_hlds__termination__ProcInfo0_13, &transform_hlds__termination__ProcInfo1_17);
                  }
#line 740 "termination.m"
                  {
#line 740 "termination.m"
                    transform_hlds__termination__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 740 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_22_22, 0) = ((MR_Box) (transform_hlds__termination__Termination_16));
#line 740 "termination.m"
                  }
#line 740 "termination.m"
                  {
#line 740 "termination.m"
                    hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(transform_hlds__termination__V_22_22, transform_hlds__termination__ProcInfo1_17, &transform_hlds__termination__ProcInfo_18);
                  }
#line 742 "termination.m"
                  {
#line 742 "termination.m"
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__termination__TypeCtorInfo_26_26, transform_hlds__termination__ProcId_9, ((MR_Box) (transform_hlds__termination__ProcInfo_18)), transform_hlds__termination__STATE_VARIABLE_ProcTable_0_3, &transform_hlds__termination__STATE_VARIABLE_ProcTable_23_23);
                  }
#line 734 "termination.m"
                }
#line 743 "termination.m"
                break;
#line 743 "termination.m"
              case (MR_Integer) 3:
#line 744 "termination.m"
                transform_hlds__termination__STATE_VARIABLE_ProcTable_23_23 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0_3;
#line 743 "termination.m"
                break;
#line 743 "termination.m"
            }
#line 749 "termination.m"
            /* direct tailcall eliminated */
#line 749 "termination.m"
            {
#line 749 "termination.m"
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__ProcIds_10;
#line 749 "termination.m"
              MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_3 = transform_hlds__termination__STATE_VARIABLE_ProcTable_23_23;

#line 749 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ProcTable_0_3 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_3;
#line 749 "termination.m"
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
#line 749 "termination.m"
            }
#line 749 "termination.m"
            continue;
#line 729 "termination.m"
          }
#line 728 "termination.m"
      }
#line 728 "termination.m"
      break;
#line 728 "termination.m"
    }
#line 725 "termination.m"
}

#line 607 "termination.m"
static void MR_CALL 
transform_hlds__termination__term_preprocess_preds_3_p_0(
#line 607 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 607 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2,
#line 607 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_3)
#line 607 "termination.m"
{
#line 610 "termination.m"
  while (MR_TRUE)
#line 610 "termination.m"
    {
#line 610 "termination.m"
      /* tailcall optimized into a loop */
#line 610 "termination.m"
      {
#line 610 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 610 "termination.m"
        if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 610 "termination.m"
          *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_3 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2;
#line 610 "termination.m"
        else
#line 611 "termination.m"
          {
#line 611 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_60_60;
#line 611 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_61_61;
#line 611 "termination.m"
            MR_Word transform_hlds__termination__PredId_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));
#line 611 "termination.m"
            MR_Word transform_hlds__termination__PredIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
#line 611 "termination.m"
            MR_Word transform_hlds__termination__Globals_10;
#line 611 "termination.m"
            MR_Word transform_hlds__termination__MakeOptInt_11;
#line 611 "termination.m"
            MR_Word transform_hlds__termination__PredTable0_12;
#line 611 "termination.m"
            MR_Word transform_hlds__termination__PredInfo0_13;
#line 611 "termination.m"
            MR_Word transform_hlds__termination__PredStatus_14;
#line 611 "termination.m"
            MR_Word transform_hlds__termination__Context_15;
#line 611 "termination.m"
            MR_Word transform_hlds__termination__ProcTable0_16;
#line 611 "termination.m"
            MR_Word transform_hlds__termination__Markers_17;
#line 611 "termination.m"
            MR_Word transform_hlds__termination__ProcIds_18;
#line 611 "termination.m"
            MR_Word transform_hlds__termination__ProcTable2_20;
#line 611 "termination.m"
            MR_Word transform_hlds__termination__ProcTable_27;
#line 611 "termination.m"
            MR_Word transform_hlds__termination__PredInfo_28;
#line 611 "termination.m"
            MR_Word transform_hlds__termination__PredTable_29;
#line 611 "termination.m"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_56_56;
#line 616 "termination.m"
            MR_Box transform_hlds__termination__conv0_PredInfo0_13;
#line 630 "termination.m"
            MR_Word transform_hlds__termination__ProcTable1_19;

#line 612 "termination.m"
            {
#line 612 "termination.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2, &transform_hlds__termination__Globals_10);
            }
#line 613 "termination.m"
            {
#line 613 "termination.m"
              libs__globals__lookup_bool_option_3_p_0(transform_hlds__termination__Globals_10, (MR_Integer) 86, &transform_hlds__termination__MakeOptInt_11);
            }
#line 615 "termination.m"
            {
#line 615 "termination.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2, &transform_hlds__termination__PredTable0_12);
            }
#line 1901 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_60_60 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 1903 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_61_61 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 616 "termination.m"
            {
#line 616 "termination.m"
              mercury__map__lookup_3_p_0(transform_hlds__termination__TypeCtorInfo_60_60, transform_hlds__termination__TypeCtorInfo_61_61, transform_hlds__termination__PredTable0_12, ((MR_Box) (transform_hlds__termination__PredId_7)), &transform_hlds__termination__conv0_PredInfo0_13);
            }
#line 616 "termination.m"
            transform_hlds__termination__PredInfo0_13 = ((MR_Word) transform_hlds__termination__conv0_PredInfo0_13);
#line 617 "termination.m"
            {
#line 617 "termination.m"
              hlds__hlds_pred__pred_info_get_status_2_p_0(transform_hlds__termination__PredInfo0_13, &transform_hlds__termination__PredStatus_14);
            }
#line 618 "termination.m"
            {
#line 618 "termination.m"
              hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__termination__PredInfo0_13, &transform_hlds__termination__Context_15);
            }
#line 619 "termination.m"
            {
#line 619 "termination.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__termination__PredInfo0_13, &transform_hlds__termination__ProcTable0_16);
            }
#line 620 "termination.m"
            {
#line 620 "termination.m"
              hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__termination__PredInfo0_13, &transform_hlds__termination__Markers_17);
            }
#line 621 "termination.m"
            {
#line 621 "termination.m"
              transform_hlds__termination__ProcIds_18 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__termination__PredInfo0_13);
            }
#line 702 "termination.m"
            {
#line 702 "termination.m"
              transform_hlds__termination__succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(transform_hlds__termination__PredInfo0_13);
            }
#line 706 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 704 "termination.m"
              {
#line 704 "termination.m"
                {
#line 704 "termination.m"
                  transform_hlds__termination__set_builtin_terminates_6_p_0(transform_hlds__termination__ProcIds_18, transform_hlds__termination__PredId_7, transform_hlds__termination__PredInfo0_13, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2, transform_hlds__termination__ProcTable0_16, &transform_hlds__termination__ProcTable1_19);
                }
#line 704 "termination.m"
                transform_hlds__termination__succeeded = MR_TRUE;
#line 704 "termination.m"
              }
#line 706 "termination.m"
            else
#line 721 "termination.m"
              {
#line 721 "termination.m"
                MR_Word transform_hlds__termination__SpecialPredId_74;
#line 715 "termination.m"
                MR_Word transform_hlds__termination__SpecPredId0_72;
#line 708 "termination.m"
                MR_Word transform_hlds__termination__ModuleName_69;
#line 708 "termination.m"
                MR_String transform_hlds__termination__Name_70;
#line 708 "termination.m"
                MR_Integer transform_hlds__termination__Arity_71;
#line 708 "termination.m"
                MR_Integer transform_hlds__termination__V_79_79;
#line 711 "termination.m"
                MR_String transform_hlds__termination__V_73_73;

#line 708 "termination.m"
                {
#line 708 "termination.m"
                  transform_hlds__termination__ModuleName_69 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__termination__PredInfo0_13);
                }
#line 709 "termination.m"
                {
#line 709 "termination.m"
                  transform_hlds__termination__Name_70 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__termination__PredInfo0_13);
                }
#line 710 "termination.m"
                {
#line 710 "termination.m"
                  transform_hlds__termination__Arity_71 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__termination__PredInfo0_13);
                }
#line 711 "termination.m"
                {
#line 711 "termination.m"
                  transform_hlds__termination__succeeded = mdbcomp__prim_data__special_pred_name_arity_4_p_1(&transform_hlds__termination__SpecPredId0_72, transform_hlds__termination__Name_70, &transform_hlds__termination__V_73_73, &transform_hlds__termination__V_79_79);
                }
#line 708 "termination.m"
                if (transform_hlds__termination__succeeded)
#line 708 "termination.m"
                  {
#line 711 "termination.m"
                    transform_hlds__termination__succeeded = (transform_hlds__termination__Arity_71 == transform_hlds__termination__V_79_79);
#line 708 "termination.m"
                    if (transform_hlds__termination__succeeded)
#line 712 "termination.m"
                      {
#line 712 "termination.m"
                        transform_hlds__termination__succeeded = mdbcomp__builtin_modules__any_mercury_builtin_module_1_p_0(transform_hlds__termination__ModuleName_69);
                      }
#line 708 "termination.m"
                  }
#line 715 "termination.m"
                if (transform_hlds__termination__succeeded)
#line 714 "termination.m"
                  {
#line 714 "termination.m"
                    transform_hlds__termination__SpecialPredId_74 = transform_hlds__termination__SpecPredId0_72;
#line 714 "termination.m"
                    transform_hlds__termination__succeeded = MR_TRUE;
#line 714 "termination.m"
                  }
#line 715 "termination.m"
                else
#line 716 "termination.m"
                  {
#line 716 "termination.m"
                    MR_Word transform_hlds__termination__Origin_75;
#line 717 "termination.m"
                    MR_Word transform_hlds__termination__V_76_76;

#line 716 "termination.m"
                    {
#line 716 "termination.m"
                      hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__termination__PredInfo0_13, &transform_hlds__termination__Origin_75);
                    }
#line 717 "termination.m"
                    transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__Origin_75)) == (MR_mktag((MR_Integer) 0)));
#line 717 "termination.m"
                    if (transform_hlds__termination__succeeded)
#line 717 "termination.m"
                      {
#line 717 "termination.m"
                        transform_hlds__termination__SpecialPredId_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__Origin_75, (MR_Integer) 0)));
#line 717 "termination.m"
                        transform_hlds__termination__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__Origin_75, (MR_Integer) 1)));
#line 717 "termination.m"
                      }
#line 716 "termination.m"
                  }
#line 721 "termination.m"
                if (transform_hlds__termination__succeeded)
#line 721 "termination.m"
                  {
#line 720 "termination.m"
                    {
#line 720 "termination.m"
                      transform_hlds__termination__set_generated_terminates_4_p_0(transform_hlds__termination__ProcIds_18, transform_hlds__termination__SpecialPredId_74, transform_hlds__termination__ProcTable0_16, &transform_hlds__termination__ProcTable1_19);
                    }
#line 720 "termination.m"
                    transform_hlds__termination__succeeded = MR_TRUE;
#line 721 "termination.m"
                  }
#line 721 "termination.m"
              }
#line 630 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 629 "termination.m"
              transform_hlds__termination__ProcTable2_20 = transform_hlds__termination__ProcTable1_19;
#line 630 "termination.m"
            else
#line 641 "termination.m"
              {
#line 631 "termination.m"
                MR_Word transform_hlds__termination__V_33_33;

#line 631 "termination.m"
                {
#line 631 "termination.m"
                  transform_hlds__termination__V_33_33 = hlds__status__pred_status_defined_in_this_module_1_f_0(transform_hlds__termination__PredStatus_14);
                }
#line 631 "termination.m"
                transform_hlds__termination__succeeded = (transform_hlds__termination__V_33_33 == (MR_Integer) 1);
#line 641 "termination.m"
                if (transform_hlds__termination__succeeded)
#line 638 "termination.m"
                  {
#line 635 "termination.m"
                    {
#line 635 "termination.m"
                      transform_hlds__termination__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__termination__Markers_17, (MR_Integer) 17);
                    }
#line 638 "termination.m"
                    if (transform_hlds__termination__succeeded)
#line 636 "termination.m"
                      {
#line 636 "termination.m"
                        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 636 "termination.m"
                        {
#line 636 "termination.m"
                          transform_hlds__termination__change_procs_termination_info_5_p_0(transform_hlds__termination__ProcIds_18, (MR_Integer) 1, (MR_Word) &transform_hlds__termination_scalar_common_5[0], transform_hlds__termination__ProcTable0_16, &transform_hlds__termination__ProcTable2_20);
                        }
#line 636 "termination.m"
                      }
#line 638 "termination.m"
                    else
#line 639 "termination.m"
                      transform_hlds__termination__ProcTable2_20 = transform_hlds__termination__ProcTable0_16;
#line 638 "termination.m"
                  }
#line 641 "termination.m"
                else
#line 666 "termination.m"
                  {
#line 666 "termination.m"
                    MR_Word transform_hlds__termination__ArgSizeError_23;
#line 666 "termination.m"
                    MR_Word transform_hlds__termination__ArgSizeInfo_24;
#line 666 "termination.m"
                    MR_Word transform_hlds__termination__V_48_48;
#line 666 "termination.m"
                    MR_Word transform_hlds__termination__ProcTable1_58;

#line 653 "termination.m"
                    {
#line 653 "termination.m"
                      transform_hlds__termination__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__termination__Markers_17, (MR_Integer) 17);
                    }
#line 654 "termination.m"
                    if (!(transform_hlds__termination__succeeded))
#line 655 "termination.m"
                      {
#line 655 "termination.m"
                        MR_Word transform_hlds__termination__V_38_38;

#line 655 "termination.m"
                        transform_hlds__termination__succeeded = (transform_hlds__termination__MakeOptInt_11 == (MR_Integer) 0);
#line 655 "termination.m"
                        if (transform_hlds__termination__succeeded)
#line 655 "termination.m"
                          {
#line 656 "termination.m"
                            transform_hlds__termination__V_38_38 = (MR_Integer) 19;
#line 656 "termination.m"
                            {
#line 656 "termination.m"
                              transform_hlds__termination__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__termination__Markers_17, transform_hlds__termination__V_38_38);
                            }
#line 655 "termination.m"
                          }
#line 655 "termination.m"
                      }
#line 661 "termination.m"
                    if (transform_hlds__termination__succeeded)
#line 659 "termination.m"
                      {
#line 659 "termination.m"
                        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 659 "termination.m"
                        {
#line 659 "termination.m"
                          transform_hlds__termination__change_procs_termination_info_5_p_0(transform_hlds__termination__ProcIds_18, (MR_Integer) 1, (MR_Word) &transform_hlds__termination_scalar_common_5[0], transform_hlds__termination__ProcTable0_16, &transform_hlds__termination__ProcTable1_58);
                        }
#line 659 "termination.m"
                      }
#line 661 "termination.m"
                    else
#line 662 "termination.m"
                      {
#line 662 "termination.m"
                        MR_Word transform_hlds__termination__TerminationError_21;
#line 662 "termination.m"
                        MR_Word transform_hlds__termination__TerminationInfo_22;
#line 662 "termination.m"
                        MR_Word transform_hlds__termination__V_44_44;

#line 662 "termination.m"
                        {
#line 662 "termination.m"
                          transform_hlds__termination__TerminationError_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 662 "termination.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__termination__TerminationError_21, 0) = ((MR_Box) (transform_hlds__termination__Context_15));
#line 662 "termination.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__termination__TerminationError_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 662 "termination.m"
                        }
#line 663 "termination.m"
                        {
#line 663 "termination.m"
                          transform_hlds__termination__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 663 "termination.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__termination__V_44_44, 0) = ((MR_Box) (transform_hlds__termination__TerminationError_21));
#line 663 "termination.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__termination__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 663 "termination.m"
                        }
#line 663 "termination.m"
                        {
#line 663 "termination.m"
                          transform_hlds__termination__TerminationInfo_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 663 "termination.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__termination__TerminationInfo_22, 0) = ((MR_Box) (transform_hlds__termination__V_44_44));
#line 663 "termination.m"
                        }
#line 664 "termination.m"
                        {
#line 664 "termination.m"
                          transform_hlds__termination__change_procs_termination_info_5_p_0(transform_hlds__termination__ProcIds_18, (MR_Integer) 0, transform_hlds__termination__TerminationInfo_22, transform_hlds__termination__ProcTable0_16, &transform_hlds__termination__ProcTable1_58);
                        }
#line 662 "termination.m"
                      }
#line 667 "termination.m"
                    {
#line 667 "termination.m"
                      transform_hlds__termination__ArgSizeError_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 667 "termination.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeError_23, 0) = ((MR_Box) (transform_hlds__termination__Context_15));
#line 667 "termination.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeError_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 667 "termination.m"
                    }
#line 668 "termination.m"
                    {
#line 668 "termination.m"
                      transform_hlds__termination__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 668 "termination.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__termination__V_48_48, 0) = ((MR_Box) (transform_hlds__termination__ArgSizeError_23));
#line 668 "termination.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__termination__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 668 "termination.m"
                    }
#line 668 "termination.m"
                    {
#line 668 "termination.m"
                      transform_hlds__termination__ArgSizeInfo_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 668 "termination.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__termination__ArgSizeInfo_24, 0) = ((MR_Box) (transform_hlds__termination__V_48_48));
#line 668 "termination.m"
                    }
#line 669 "termination.m"
                    {
#line 669 "termination.m"
                      transform_hlds__termination__change_procs_arg_size_info_5_p_0(transform_hlds__termination__ProcIds_18, (MR_Integer) 0, transform_hlds__termination__ArgSizeInfo_24, transform_hlds__termination__ProcTable1_58, &transform_hlds__termination__ProcTable2_20);
                    }
#line 666 "termination.m"
                  }
#line 641 "termination.m"
              }
#line 672 "termination.m"
            {
#line 672 "termination.m"
              transform_hlds__termination__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__termination__Markers_17, (MR_Integer) 18);
            }
#line 677 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 673 "termination.m"
              {
#line 673 "termination.m"
                MR_Word transform_hlds__termination__RequestError_25;
#line 673 "termination.m"
                MR_Word transform_hlds__termination__RequestTerminationInfo_26;
#line 673 "termination.m"
                MR_Word transform_hlds__termination__V_52_52;
#line 673 "termination.m"
                MR_Word transform_hlds__termination__V_53_53;

#line 673 "termination.m"
                {
#line 673 "termination.m"
                  transform_hlds__termination__V_52_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 673 "termination.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__termination__V_52_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 673 "termination.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__termination__V_52_52, 1) = ((MR_Box) (transform_hlds__termination__PredId_7));
#line 673 "termination.m"
                }
#line 673 "termination.m"
                {
#line 673 "termination.m"
                  transform_hlds__termination__RequestError_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 673 "termination.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__termination__RequestError_25, 0) = ((MR_Box) (transform_hlds__termination__Context_15));
#line 673 "termination.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__termination__RequestError_25, 1) = ((MR_Box) (transform_hlds__termination__V_52_52));
#line 673 "termination.m"
                }
#line 674 "termination.m"
                {
#line 674 "termination.m"
                  transform_hlds__termination__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 674 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__V_53_53, 0) = ((MR_Box) (transform_hlds__termination__RequestError_25));
#line 674 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 674 "termination.m"
                }
#line 674 "termination.m"
                {
#line 674 "termination.m"
                  transform_hlds__termination__RequestTerminationInfo_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 674 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__RequestTerminationInfo_26, 0) = ((MR_Box) (transform_hlds__termination__V_53_53));
#line 674 "termination.m"
                }
#line 675 "termination.m"
                {
#line 675 "termination.m"
                  transform_hlds__termination__change_procs_termination_info_5_p_0(transform_hlds__termination__ProcIds_18, (MR_Integer) 1, transform_hlds__termination__RequestTerminationInfo_26, transform_hlds__termination__ProcTable2_20, &transform_hlds__termination__ProcTable_27);
                }
#line 673 "termination.m"
              }
#line 677 "termination.m"
            else
#line 678 "termination.m"
              transform_hlds__termination__ProcTable_27 = transform_hlds__termination__ProcTable2_20;
#line 680 "termination.m"
            {
#line 680 "termination.m"
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__termination__ProcTable_27, transform_hlds__termination__PredInfo0_13, &transform_hlds__termination__PredInfo_28);
            }
#line 681 "termination.m"
            {
#line 681 "termination.m"
              mercury__map__set_4_p_0(transform_hlds__termination__TypeCtorInfo_60_60, transform_hlds__termination__TypeCtorInfo_61_61, ((MR_Box) (transform_hlds__termination__PredId_7)), ((MR_Box) (transform_hlds__termination__PredInfo_28)), transform_hlds__termination__PredTable0_12, &transform_hlds__termination__PredTable_29);
            }
#line 682 "termination.m"
            {
#line 682 "termination.m"
              hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__termination__PredTable_29, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_56_56);
            }
#line 683 "termination.m"
            /* direct tailcall eliminated */
#line 683 "termination.m"
            {
#line 683 "termination.m"
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__PredIds_8;
#line 683 "termination.m"
              MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_2 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_56_56;

#line 683 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_2;
#line 683 "termination.m"
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
#line 683 "termination.m"
            }
#line 683 "termination.m"
            continue;
#line 611 "termination.m"
          }
#line 610 "termination.m"
      }
#line 610 "termination.m"
      break;
#line 610 "termination.m"
    }
#line 607 "termination.m"
}

#line 567 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__maybe_report_termination_errors_5_p_0_4(
#line 567 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 567 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1)
#line 567 "termination.m"
{
#line 567 "termination.m"
  {
#line 567 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 567 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

#line 567 "termination.m"
    {
#line 567 "termination.m"
      return transform_hlds__termination__succeeded = transform_hlds__termination__IntroducedFrom__pred__decide_what_term_errors_to_report__567__1_1_p_0(((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 567 "termination.m"
    return transform_hlds__termination__succeeded;
#line 567 "termination.m"
  }
#line 567 "termination.m"
}

#line 550 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__maybe_report_termination_errors_5_p_0_3(
#line 550 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 550 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1)
#line 550 "termination.m"
{
#line 550 "termination.m"
  {
#line 550 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 550 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

#line 550 "termination.m"
    {
#line 550 "termination.m"
      return transform_hlds__termination__succeeded = transform_hlds__term_util__is_solver_init_wrapper_pred_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 550 "termination.m"
    return transform_hlds__termination__succeeded;
#line 550 "termination.m"
  }
#line 550 "termination.m"
}

#line 538 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__maybe_report_termination_errors_5_p_0_2(
#line 538 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 538 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1)
#line 538 "termination.m"
{
#line 538 "termination.m"
  {
#line 538 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 538 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

#line 538 "termination.m"
    {
#line 538 "termination.m"
      return transform_hlds__termination__succeeded = transform_hlds__termination__IntroducedFrom__pred__decide_what_term_errors_to_report__538__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 538 "termination.m"
    return transform_hlds__termination__succeeded;
#line 538 "termination.m"
  }
#line 538 "termination.m"
}

#line 524 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__maybe_report_termination_errors_5_p_0_1(
#line 524 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 524 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1)
#line 524 "termination.m"
{
#line 524 "termination.m"
  {
#line 524 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 524 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

#line 524 "termination.m"
    {
#line 524 "termination.m"
      return transform_hlds__termination__succeeded = transform_hlds__termination__IntroducedFrom__pred__decide_what_term_errors_to_report__524__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 524 "termination.m"
    return transform_hlds__termination__succeeded;
#line 524 "termination.m"
  }
#line 524 "termination.m"
}

#line 493 "termination.m"
static void MR_CALL 
transform_hlds__termination__maybe_report_termination_errors_5_p_0(
#line 493 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_6,
#line 493 "termination.m"
  MR_Word transform_hlds__termination__SCC_7,
#line 493 "termination.m"
  MR_Word transform_hlds__termination__Errors_8,
#line 493 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_0_12,
#line 493 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_Specs_13)
#line 493 "termination.m"
{
#line 497 "termination.m"
  {
#line 497 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 497 "termination.m"
    MR_Word transform_hlds__termination__Globals_19;
#line 497 "termination.m"
    MR_Word transform_hlds__termination__NormalErrors_20;
#line 497 "termination.m"
    MR_Word transform_hlds__termination__VerboseErrors_21;
#line 530 "termination.m"
    MR_Word transform_hlds__termination__IsCheckTerm_22;
#line 530 "termination.m"
    MR_Word transform_hlds__termination__CheckTermPPIds_27;
#line 532 "termination.m"
    MR_Word transform_hlds__termination__V_28_28;
#line 532 "termination.m"
    MR_Word transform_hlds__termination__V_29_29;

#line 519 "termination.m"
    {
#line 519 "termination.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__termination__ModuleInfo_6, &transform_hlds__termination__Globals_19);
    }
#line 520 "termination.m"
    {
#line 520 "termination.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__termination__Globals_19, (MR_Integer) 410, &transform_hlds__termination__NormalErrors_20);
    }
#line 521 "termination.m"
    {
#line 521 "termination.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__termination__Globals_19, (MR_Integer) 411, &transform_hlds__termination__VerboseErrors_21);
    }
#line 524 "termination.m"
    {
#line 524 "termination.m"
      transform_hlds__termination__IsCheckTerm_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 524 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsCheckTerm_22, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_6[0]));
#line 524 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsCheckTerm_22, 1) = ((MR_Box) (transform_hlds__termination__maybe_report_termination_errors_5_p_0_1));
#line 524 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsCheckTerm_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 524 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsCheckTerm_22, 3) = ((MR_Box) (transform_hlds__termination__ModuleInfo_6));
#line 524 "termination.m"
    }
#line 531 "termination.m"
    {
#line 531 "termination.m"
      mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__termination__IsCheckTerm_22, transform_hlds__termination__SCC_7, &transform_hlds__termination__CheckTermPPIds_27);
    }
#line 532 "termination.m"
    transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__CheckTermPPIds_27)) == (MR_mktag((MR_Integer) 1)));
#line 532 "termination.m"
    if (transform_hlds__termination__succeeded)
#line 532 "termination.m"
      {
#line 532 "termination.m"
        transform_hlds__termination__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__CheckTermPPIds_27, (MR_Integer) 0)));
#line 532 "termination.m"
        transform_hlds__termination__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__CheckTermPPIds_27, (MR_Integer) 1)));
#line 504 "termination.m"
        {
#line 504 "termination.m"
          transform_hlds__term_errors__report_term_errors_5_p_0(transform_hlds__termination__ModuleInfo_6, transform_hlds__termination__SCC_7, transform_hlds__termination__Errors_8, transform_hlds__termination__STATE_VARIABLE_Specs_0_12, transform_hlds__termination__STATE_VARIABLE_Specs_13);
#line 504 "termination.m"
          return;
        }
#line 532 "termination.m"
      }
#line 532 "termination.m"
    else
#line 2557 "transform_hlds.termination.c"
      {
#line 541 "termination.m"
        MR_Word transform_hlds__termination__TypeCtorInfo_49_59 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 541 "termination.m"
        MR_Word transform_hlds__termination__IsNonImported_30;
#line 541 "termination.m"
        MR_Word transform_hlds__termination__NonImportedPPIds_32;
#line 541 "termination.m"
        MR_Word transform_hlds__termination__V_47_47;
#line 543 "termination.m"
        MR_Word transform_hlds__termination__V_33_33;
#line 543 "termination.m"
        MR_Word transform_hlds__termination__V_34_34;

#line 538 "termination.m"
        {
#line 538 "termination.m"
          transform_hlds__termination__IsNonImported_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 538 "termination.m"
          MR_hl_field(MR_mktag(0), transform_hlds__termination__IsNonImported_30, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_6[0]));
#line 538 "termination.m"
          MR_hl_field(MR_mktag(0), transform_hlds__termination__IsNonImported_30, 1) = ((MR_Box) (transform_hlds__termination__maybe_report_termination_errors_5_p_0_2));
#line 538 "termination.m"
          MR_hl_field(MR_mktag(0), transform_hlds__termination__IsNonImported_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 538 "termination.m"
          MR_hl_field(MR_mktag(0), transform_hlds__termination__IsNonImported_30, 3) = ((MR_Box) (transform_hlds__termination__ModuleInfo_6));
#line 538 "termination.m"
        }
#line 542 "termination.m"
        {
#line 542 "termination.m"
          mercury__list__filter_3_p_0(transform_hlds__termination__TypeCtorInfo_49_59, transform_hlds__termination__IsNonImported_30, transform_hlds__termination__SCC_7, &transform_hlds__termination__NonImportedPPIds_32);
        }
#line 543 "termination.m"
        transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__NonImportedPPIds_32)) == (MR_mktag((MR_Integer) 1)));
#line 543 "termination.m"
        if (transform_hlds__termination__succeeded)
#line 543 "termination.m"
          {
#line 543 "termination.m"
            transform_hlds__termination__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__NonImportedPPIds_32, (MR_Integer) 0)));
#line 543 "termination.m"
            transform_hlds__termination__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__NonImportedPPIds_32, (MR_Integer) 1)));
#line 550 "termination.m"
            {
#line 550 "termination.m"
              transform_hlds__termination__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 550 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__V_47_47, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_6[0]));
#line 550 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__V_47_47, 1) = ((MR_Box) (transform_hlds__termination__maybe_report_termination_errors_5_p_0_3));
#line 550 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__V_47_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 550 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__V_47_47, 3) = ((MR_Box) (transform_hlds__termination__ModuleInfo_6));
#line 550 "termination.m"
            }
#line 550 "termination.m"
            {
#line 550 "termination.m"
              transform_hlds__termination__succeeded = mercury__list__all_false_2_p_0(transform_hlds__termination__TypeCtorInfo_49_59, transform_hlds__termination__V_47_47, transform_hlds__termination__SCC_7);
            }
#line 543 "termination.m"
          }
#line 2622 "transform_hlds.termination.c"
        if (transform_hlds__termination__succeeded)
#line 2624 "transform_hlds.termination.c"
#line 2625 "transform_hlds.termination.c"
          switch (transform_hlds__termination__VerboseErrors_21) {
#line 2627 "transform_hlds.termination.c"
            default: /*NOTREACHED*/ MR_assert(0);
#line 2629 "transform_hlds.termination.c"
            case (MR_Integer) 0:
#line 2631 "transform_hlds.termination.c"
              {
#line 2633 "transform_hlds.termination.c"
                MR_Word transform_hlds__termination__MaybeErrorsToReport_64;

#line 579 "termination.m"
#line 579 "termination.m"
                switch (transform_hlds__termination__NormalErrors_20) {
#line 579 "termination.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 579 "termination.m"
                  case (MR_Integer) 0:
#line 581 "termination.m"
                    transform_hlds__termination__MaybeErrorsToReport_64 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 579 "termination.m"
                    break;
#line 579 "termination.m"
                  case (MR_Integer) 1:
#line 561 "termination.m"
                    {
#line 561 "termination.m"
                      MR_Word transform_hlds__termination__DirectErrors_39;

#line 571 "termination.m"
                      {
#line 571 "termination.m"
                        mercury__list__filter_3_p_0((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0, (MR_Word) &transform_hlds__termination_scalar_common_2[5], transform_hlds__termination__Errors_8, &transform_hlds__termination__DirectErrors_39);
                      }
#line 575 "termination.m"
                      if ((transform_hlds__termination__DirectErrors_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 574 "termination.m"
                        {
#line 574 "termination.m"
                          transform_hlds__termination__MaybeErrorsToReport_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 574 "termination.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__termination__MaybeErrorsToReport_64, 0) = ((MR_Box) (transform_hlds__termination__Errors_8));
#line 574 "termination.m"
                        }
#line 575 "termination.m"
                      else
#line 577 "termination.m"
                        {
#line 577 "termination.m"
                          transform_hlds__termination__MaybeErrorsToReport_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 577 "termination.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__termination__MaybeErrorsToReport_64, 0) = ((MR_Box) (transform_hlds__termination__DirectErrors_39));
#line 577 "termination.m"
                        }
#line 561 "termination.m"
                    }
#line 579 "termination.m"
                    break;
#line 579 "termination.m"
                }
#line 502 "termination.m"
                if ((transform_hlds__termination__MaybeErrorsToReport_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 501 "termination.m"
                  *transform_hlds__termination__STATE_VARIABLE_Specs_13 = transform_hlds__termination__STATE_VARIABLE_Specs_0_12;
#line 502 "termination.m"
                else
#line 503 "termination.m"
                  {
#line 503 "termination.m"
                    MR_Word transform_hlds__termination__ErrorsToReport_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__MaybeErrorsToReport_64, (MR_Integer) 0)));

#line 504 "termination.m"
                    {
#line 504 "termination.m"
                      transform_hlds__term_errors__report_term_errors_5_p_0(transform_hlds__termination__ModuleInfo_6, transform_hlds__termination__SCC_7, transform_hlds__termination__ErrorsToReport_62, transform_hlds__termination__STATE_VARIABLE_Specs_0_12, transform_hlds__termination__STATE_VARIABLE_Specs_13);
#line 504 "termination.m"
                      return;
                    }
#line 503 "termination.m"
                  }
#line 2705 "transform_hlds.termination.c"
              }
#line 2707 "transform_hlds.termination.c"
              break;
#line 2709 "transform_hlds.termination.c"
            case (MR_Integer) 1:
#line 504 "termination.m"
              {
#line 504 "termination.m"
                transform_hlds__term_errors__report_term_errors_5_p_0(transform_hlds__termination__ModuleInfo_6, transform_hlds__termination__SCC_7, transform_hlds__termination__Errors_8, transform_hlds__termination__STATE_VARIABLE_Specs_0_12, transform_hlds__termination__STATE_VARIABLE_Specs_13);
#line 504 "termination.m"
                return;
              }
#line 2718 "transform_hlds.termination.c"
              break;
#line 2720 "transform_hlds.termination.c"
          }
#line 2722 "transform_hlds.termination.c"
        else
#line 501 "termination.m"
          *transform_hlds__termination__STATE_VARIABLE_Specs_13 = transform_hlds__termination__STATE_VARIABLE_Specs_0_12;
#line 2726 "transform_hlds.termination.c"
      }
#line 497 "termination.m"
  }
#line 493 "termination.m"
}

#line 472 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_termination_infos_4_p_0(
#line 472 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 472 "termination.m"
  MR_Word transform_hlds__termination__TerminationInfo_2,
#line 472 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3,
#line 472 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4)
#line 472 "termination.m"
{
#line 475 "termination.m"
  while (MR_TRUE)
#line 475 "termination.m"
    {
#line 475 "termination.m"
      /* tailcall optimized into a loop */
#line 475 "termination.m"
      {
#line 475 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 475 "termination.m"
        if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 475 "termination.m"
          *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3;
#line 475 "termination.m"
        else
#line 476 "termination.m"
          {
#line 476 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_28_28;
#line 476 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_29_29;
#line 476 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_31_31;
#line 476 "termination.m"
            MR_Word transform_hlds__termination__PPId_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));
#line 476 "termination.m"
            MR_Word transform_hlds__termination__PPIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
#line 476 "termination.m"
            MR_Word transform_hlds__termination__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PPId_9, (MR_Integer) 0)));
#line 476 "termination.m"
            MR_Integer transform_hlds__termination__ProcId_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PPId_9, (MR_Integer) 1)));
#line 476 "termination.m"
            MR_Word transform_hlds__termination__PredTable0_15;
#line 476 "termination.m"
            MR_Word transform_hlds__termination__PredInfo0_16;
#line 476 "termination.m"
            MR_Word transform_hlds__termination__ProcTable0_17;
#line 476 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo0_18;
#line 476 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo_19;
#line 476 "termination.m"
            MR_Word transform_hlds__termination__ProcTable_20;
#line 476 "termination.m"
            MR_Word transform_hlds__termination__PredInfo_21;
#line 476 "termination.m"
            MR_Word transform_hlds__termination__PredTable_22;
#line 476 "termination.m"
            MR_Word transform_hlds__termination__V_25_25;
#line 476 "termination.m"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26;
#line 479 "termination.m"
            MR_Box transform_hlds__termination__conv0_PredInfo0_16;
#line 481 "termination.m"
            MR_Box transform_hlds__termination__conv1_ProcInfo0_18;

#line 478 "termination.m"
            {
#line 478 "termination.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__termination__PredTable0_15);
            }
#line 2809 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 2811 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_29_29 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 479 "termination.m"
            {
#line 479 "termination.m"
              mercury__map__lookup_3_p_0(transform_hlds__termination__TypeCtorInfo_28_28, transform_hlds__termination__TypeCtorInfo_29_29, transform_hlds__termination__PredTable0_15, ((MR_Box) (transform_hlds__termination__PredId_13)), &transform_hlds__termination__conv0_PredInfo0_16);
            }
#line 479 "termination.m"
            transform_hlds__termination__PredInfo0_16 = ((MR_Word) transform_hlds__termination__conv0_PredInfo0_16);
#line 480 "termination.m"
            {
#line 480 "termination.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__termination__PredInfo0_16, &transform_hlds__termination__ProcTable0_17);
            }
#line 2825 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 481 "termination.m"
            {
#line 481 "termination.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__termination__TypeCtorInfo_31_31, transform_hlds__termination__ProcTable0_17, transform_hlds__termination__ProcId_14, &transform_hlds__termination__conv1_ProcInfo0_18);
            }
#line 481 "termination.m"
            transform_hlds__termination__ProcInfo0_18 = ((MR_Word) transform_hlds__termination__conv1_ProcInfo0_18);
#line 483 "termination.m"
            {
#line 483 "termination.m"
              transform_hlds__termination__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 483 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_25_25, 0) = ((MR_Box) (transform_hlds__termination__TerminationInfo_2));
#line 483 "termination.m"
            }
#line 483 "termination.m"
            {
#line 483 "termination.m"
              hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(transform_hlds__termination__V_25_25, transform_hlds__termination__ProcInfo0_18, &transform_hlds__termination__ProcInfo_19);
            }
#line 485 "termination.m"
            {
#line 485 "termination.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__termination__TypeCtorInfo_31_31, transform_hlds__termination__ProcId_14, ((MR_Box) (transform_hlds__termination__ProcInfo_19)), transform_hlds__termination__ProcTable0_17, &transform_hlds__termination__ProcTable_20);
            }
#line 486 "termination.m"
            {
#line 486 "termination.m"
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__termination__ProcTable_20, transform_hlds__termination__PredInfo0_16, &transform_hlds__termination__PredInfo_21);
            }
#line 487 "termination.m"
            {
#line 487 "termination.m"
              mercury__map__det_update_4_p_0(transform_hlds__termination__TypeCtorInfo_28_28, transform_hlds__termination__TypeCtorInfo_29_29, ((MR_Box) (transform_hlds__termination__PredId_13)), ((MR_Box) (transform_hlds__termination__PredInfo_21)), transform_hlds__termination__PredTable0_15, &transform_hlds__termination__PredTable_22);
            }
#line 488 "termination.m"
            {
#line 488 "termination.m"
              hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__termination__PredTable_22, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26);
            }
#line 489 "termination.m"
            /* direct tailcall eliminated */
#line 489 "termination.m"
            {
#line 489 "termination.m"
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__PPIds_10;
#line 489 "termination.m"
              MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26;

#line 489 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 489 "termination.m"
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
#line 489 "termination.m"
            }
#line 489 "termination.m"
            continue;
#line 476 "termination.m"
          }
#line 475 "termination.m"
      }
#line 475 "termination.m"
      break;
#line 475 "termination.m"
    }
#line 472 "termination.m"
}

#line 452 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_infinite_arg_size_infos_4_p_0(
#line 452 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 452 "termination.m"
  MR_Word transform_hlds__termination__ArgSizeInfo_2,
#line 452 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3,
#line 452 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4)
#line 452 "termination.m"
{
#line 455 "termination.m"
  while (MR_TRUE)
#line 455 "termination.m"
    {
#line 455 "termination.m"
      /* tailcall optimized into a loop */
#line 455 "termination.m"
      {
#line 455 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 455 "termination.m"
        if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 455 "termination.m"
          *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3;
#line 455 "termination.m"
        else
#line 456 "termination.m"
          {
#line 456 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_28_28;
#line 456 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_29_29;
#line 456 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_31_31;
#line 456 "termination.m"
            MR_Word transform_hlds__termination__PPId_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));
#line 456 "termination.m"
            MR_Word transform_hlds__termination__PPIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
#line 456 "termination.m"
            MR_Word transform_hlds__termination__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PPId_9, (MR_Integer) 0)));
#line 456 "termination.m"
            MR_Integer transform_hlds__termination__ProcId_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PPId_9, (MR_Integer) 1)));
#line 456 "termination.m"
            MR_Word transform_hlds__termination__PredTable0_15;
#line 456 "termination.m"
            MR_Word transform_hlds__termination__PredInfo0_16;
#line 456 "termination.m"
            MR_Word transform_hlds__termination__ProcTable0_17;
#line 456 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo0_18;
#line 456 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo_19;
#line 456 "termination.m"
            MR_Word transform_hlds__termination__ProcTable_20;
#line 456 "termination.m"
            MR_Word transform_hlds__termination__PredInfo_21;
#line 456 "termination.m"
            MR_Word transform_hlds__termination__PredTable_22;
#line 456 "termination.m"
            MR_Word transform_hlds__termination__V_25_25;
#line 456 "termination.m"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26;
#line 459 "termination.m"
            MR_Box transform_hlds__termination__conv0_PredInfo0_16;
#line 461 "termination.m"
            MR_Box transform_hlds__termination__conv1_ProcInfo0_18;

#line 458 "termination.m"
            {
#line 458 "termination.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__termination__PredTable0_15);
            }
#line 2971 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 2973 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_29_29 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 459 "termination.m"
            {
#line 459 "termination.m"
              mercury__map__lookup_3_p_0(transform_hlds__termination__TypeCtorInfo_28_28, transform_hlds__termination__TypeCtorInfo_29_29, transform_hlds__termination__PredTable0_15, ((MR_Box) (transform_hlds__termination__PredId_13)), &transform_hlds__termination__conv0_PredInfo0_16);
            }
#line 459 "termination.m"
            transform_hlds__termination__PredInfo0_16 = ((MR_Word) transform_hlds__termination__conv0_PredInfo0_16);
#line 460 "termination.m"
            {
#line 460 "termination.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__termination__PredInfo0_16, &transform_hlds__termination__ProcTable0_17);
            }
#line 2987 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 461 "termination.m"
            {
#line 461 "termination.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__termination__TypeCtorInfo_31_31, transform_hlds__termination__ProcTable0_17, transform_hlds__termination__ProcId_14, &transform_hlds__termination__conv1_ProcInfo0_18);
            }
#line 461 "termination.m"
            transform_hlds__termination__ProcInfo0_18 = ((MR_Word) transform_hlds__termination__conv1_ProcInfo0_18);
#line 463 "termination.m"
            {
#line 463 "termination.m"
              transform_hlds__termination__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 463 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_25_25, 0) = ((MR_Box) (transform_hlds__termination__ArgSizeInfo_2));
#line 463 "termination.m"
            }
#line 463 "termination.m"
            {
#line 463 "termination.m"
              hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_p_0(transform_hlds__termination__V_25_25, transform_hlds__termination__ProcInfo0_18, &transform_hlds__termination__ProcInfo_19);
            }
#line 464 "termination.m"
            {
#line 464 "termination.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__termination__TypeCtorInfo_31_31, transform_hlds__termination__ProcId_14, ((MR_Box) (transform_hlds__termination__ProcInfo_19)), transform_hlds__termination__ProcTable0_17, &transform_hlds__termination__ProcTable_20);
            }
#line 465 "termination.m"
            {
#line 465 "termination.m"
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__termination__ProcTable_20, transform_hlds__termination__PredInfo0_16, &transform_hlds__termination__PredInfo_21);
            }
#line 466 "termination.m"
            {
#line 466 "termination.m"
              mercury__map__set_4_p_0(transform_hlds__termination__TypeCtorInfo_28_28, transform_hlds__termination__TypeCtorInfo_29_29, ((MR_Box) (transform_hlds__termination__PredId_13)), ((MR_Box) (transform_hlds__termination__PredInfo_21)), transform_hlds__termination__PredTable0_15, &transform_hlds__termination__PredTable_22);
            }
#line 467 "termination.m"
            {
#line 467 "termination.m"
              hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__termination__PredTable_22, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26);
            }
#line 468 "termination.m"
            /* direct tailcall eliminated */
#line 468 "termination.m"
            {
#line 468 "termination.m"
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__PPIds_10;
#line 468 "termination.m"
              MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26;

#line 468 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 468 "termination.m"
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
#line 468 "termination.m"
            }
#line 468 "termination.m"
            continue;
#line 456 "termination.m"
          }
#line 455 "termination.m"
      }
#line 455 "termination.m"
      break;
#line 455 "termination.m"
    }
#line 452 "termination.m"
}

#line 431 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_finite_arg_size_infos_4_p_0(
#line 431 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 431 "termination.m"
  MR_Word transform_hlds__termination__OutputSupplierMap_2,
#line 431 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3,
#line 431 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4)
#line 431 "termination.m"
{
#line 434 "termination.m"
  while (MR_TRUE)
#line 434 "termination.m"
    {
#line 434 "termination.m"
      /* tailcall optimized into a loop */
#line 434 "termination.m"
      {
#line 434 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 434 "termination.m"
        if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 434 "termination.m"
          *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3;
#line 434 "termination.m"
        else
#line 435 "termination.m"
          {
#line 435 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_32_32;
#line 435 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_33_33;
#line 435 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_35_35;
#line 435 "termination.m"
            MR_Word transform_hlds__termination__Soln_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));
#line 435 "termination.m"
            MR_Word transform_hlds__termination__Solns_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
#line 435 "termination.m"
            MR_Word transform_hlds__termination__PPId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__Soln_9, (MR_Integer) 0)));
#line 435 "termination.m"
            MR_Integer transform_hlds__termination__Gamma_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__Soln_9, (MR_Integer) 1)));
#line 435 "termination.m"
            MR_Word transform_hlds__termination__PredId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PPId_13, (MR_Integer) 0)));
#line 435 "termination.m"
            MR_Integer transform_hlds__termination__ProcId_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PPId_13, (MR_Integer) 1)));
#line 435 "termination.m"
            MR_Word transform_hlds__termination__PredTable0_17;
#line 435 "termination.m"
            MR_Word transform_hlds__termination__PredInfo0_18;
#line 435 "termination.m"
            MR_Word transform_hlds__termination__ProcTable0_19;
#line 435 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo_20;
#line 435 "termination.m"
            MR_Word transform_hlds__termination__OutputSuppliers_21;
#line 435 "termination.m"
            MR_Word transform_hlds__termination__ArgSizeInfo_22;
#line 435 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo1_23;
#line 435 "termination.m"
            MR_Word transform_hlds__termination__ProcTable_24;
#line 435 "termination.m"
            MR_Word transform_hlds__termination__PredInfo_25;
#line 435 "termination.m"
            MR_Word transform_hlds__termination__PredTable_26;
#line 435 "termination.m"
            MR_Word transform_hlds__termination__V_29_29;
#line 435 "termination.m"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_30_30;
#line 439 "termination.m"
            MR_Box transform_hlds__termination__conv0_PredInfo0_18;
#line 441 "termination.m"
            MR_Box transform_hlds__termination__conv1_ProcInfo_20;
#line 442 "termination.m"
            MR_Box transform_hlds__termination__conv2_OutputSuppliers_21;

#line 438 "termination.m"
            {
#line 438 "termination.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__termination__PredTable0_17);
            }
#line 3143 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_32_32 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 3145 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_33_33 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 439 "termination.m"
            {
#line 439 "termination.m"
              mercury__map__lookup_3_p_0(transform_hlds__termination__TypeCtorInfo_32_32, transform_hlds__termination__TypeCtorInfo_33_33, transform_hlds__termination__PredTable0_17, ((MR_Box) (transform_hlds__termination__PredId_15)), &transform_hlds__termination__conv0_PredInfo0_18);
            }
#line 439 "termination.m"
            transform_hlds__termination__PredInfo0_18 = ((MR_Word) transform_hlds__termination__conv0_PredInfo0_18);
#line 440 "termination.m"
            {
#line 440 "termination.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__termination__PredInfo0_18, &transform_hlds__termination__ProcTable0_19);
            }
#line 3159 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_35_35 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 441 "termination.m"
            {
#line 441 "termination.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__termination__TypeCtorInfo_35_35, transform_hlds__termination__ProcTable0_19, transform_hlds__termination__ProcId_16, &transform_hlds__termination__conv1_ProcInfo_20);
            }
#line 441 "termination.m"
            transform_hlds__termination__ProcInfo_20 = ((MR_Word) transform_hlds__termination__conv1_ProcInfo_20);
#line 442 "termination.m"
            {
#line 442 "termination.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__termination_scalar_common_1[2], transform_hlds__termination__OutputSupplierMap_2, ((MR_Box) (transform_hlds__termination__PPId_13)), &transform_hlds__termination__conv2_OutputSuppliers_21);
            }
#line 442 "termination.m"
            transform_hlds__termination__OutputSuppliers_21 = ((MR_Word) transform_hlds__termination__conv2_OutputSuppliers_21);
#line 443 "termination.m"
            {
#line 443 "termination.m"
              transform_hlds__termination__ArgSizeInfo_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 443 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeInfo_22, 0) = ((MR_Box) (transform_hlds__termination__Gamma_14));
#line 443 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeInfo_22, 1) = ((MR_Box) (transform_hlds__termination__OutputSuppliers_21));
#line 443 "termination.m"
            }
#line 445 "termination.m"
            {
#line 445 "termination.m"
              transform_hlds__termination__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 445 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_29_29, 0) = ((MR_Box) (transform_hlds__termination__ArgSizeInfo_22));
#line 445 "termination.m"
            }
#line 445 "termination.m"
            {
#line 445 "termination.m"
              hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_p_0(transform_hlds__termination__V_29_29, transform_hlds__termination__ProcInfo_20, &transform_hlds__termination__ProcInfo1_23);
            }
#line 446 "termination.m"
            {
#line 446 "termination.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__termination__TypeCtorInfo_35_35, transform_hlds__termination__ProcId_16, ((MR_Box) (transform_hlds__termination__ProcInfo1_23)), transform_hlds__termination__ProcTable0_19, &transform_hlds__termination__ProcTable_24);
            }
#line 447 "termination.m"
            {
#line 447 "termination.m"
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__termination__ProcTable_24, transform_hlds__termination__PredInfo0_18, &transform_hlds__termination__PredInfo_25);
            }
#line 448 "termination.m"
            {
#line 448 "termination.m"
              mercury__map__set_4_p_0(transform_hlds__termination__TypeCtorInfo_32_32, transform_hlds__termination__TypeCtorInfo_33_33, ((MR_Box) (transform_hlds__termination__PredId_15)), ((MR_Box) (transform_hlds__termination__PredInfo_25)), transform_hlds__termination__PredTable0_17, &transform_hlds__termination__PredTable_26);
            }
#line 449 "termination.m"
            {
#line 449 "termination.m"
              hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__termination__PredTable_26, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_30_30);
            }
#line 450 "termination.m"
            /* direct tailcall eliminated */
#line 450 "termination.m"
            {
#line 450 "termination.m"
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__Solns_10;
#line 450 "termination.m"
              MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_30_30;

#line 450 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 450 "termination.m"
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
#line 450 "termination.m"
            }
#line 450 "termination.m"
            continue;
#line 435 "termination.m"
          }
#line 434 "termination.m"
      }
#line 434 "termination.m"
      break;
#line 434 "termination.m"
    }
#line 431 "termination.m"
}

#line 394 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0_3(
#line 394 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 394 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1)
#line 394 "termination.m"
{
#line 394 "termination.m"
  {
#line 394 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 394 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

#line 394 "termination.m"
    {
#line 394 "termination.m"
      return transform_hlds__termination__succeeded = transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__394__1_1_p_0(((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 394 "termination.m"
    return transform_hlds__termination__succeeded;
#line 394 "termination.m"
  }
#line 394 "termination.m"
}

#line 385 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0_2(
#line 385 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 385 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1)
#line 385 "termination.m"
{
#line 385 "termination.m"
  {
#line 385 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 385 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

#line 385 "termination.m"
    {
#line 385 "termination.m"
      return transform_hlds__termination__succeeded = transform_hlds__term_util__is_termination_known_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 385 "termination.m"
    return transform_hlds__termination__succeeded;
#line 385 "termination.m"
  }
#line 385 "termination.m"
}

#line 360 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0_1(
#line 360 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 360 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1)
#line 360 "termination.m"
{
#line 360 "termination.m"
  {
#line 360 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 360 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

#line 360 "termination.m"
    {
#line 360 "termination.m"
      return transform_hlds__termination__succeeded = transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__360__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 360 "termination.m"
    return transform_hlds__termination__succeeded;
#line 360 "termination.m"
  }
#line 360 "termination.m"
}

#line 355 "termination.m"
static void MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0(
#line 355 "termination.m"
  MR_Word transform_hlds__termination__PassInfo_7,
#line 355 "termination.m"
  MR_Word transform_hlds__termination__SCC_8,
#line 355 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47,
#line 355 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_48,
#line 355 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_0_49,
#line 355 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_Specs_50)
#line 355 "termination.m"
{
#line 359 "termination.m"
  {
#line 359 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 359 "termination.m"
    MR_Word transform_hlds__termination__TypeCtorInfo_64_64;
#line 359 "termination.m"
    MR_Word transform_hlds__termination__IsArgSizeKnown_11;
#line 359 "termination.m"
    MR_Word transform_hlds__termination__SCCArgSizeUnknown_17;
#line 359 "termination.m"
    MR_Word transform_hlds__termination__ArgSizeErrors_18;
#line 359 "termination.m"
    MR_Word transform_hlds__termination__TermErrors_19;
#line 359 "termination.m"
    MR_Word transform_hlds__termination__SCCTerminationUnknown_27;
#line 359 "termination.m"
    MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_55_55;
#line 359 "termination.m"
    MR_Word transform_hlds__termination__V_56_56;
#line 364 "termination.m"
    MR_Word transform_hlds__termination___SCCArgSizeKnown_16;
#line 385 "termination.m"
    MR_Word transform_hlds__termination___SCCTerminationKnown_26;

#line 360 "termination.m"
    {
#line 360 "termination.m"
      transform_hlds__termination__IsArgSizeKnown_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 360 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsArgSizeKnown_11, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_6[0]));
#line 360 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsArgSizeKnown_11, 1) = ((MR_Box) (transform_hlds__termination__analyse_termination_in_scc_6_p_0_1));
#line 360 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsArgSizeKnown_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 360 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsArgSizeKnown_11, 3) = ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47));
#line 360 "termination.m"
    }
#line 3386 "transform_hlds.termination.c"
    transform_hlds__termination__TypeCtorInfo_64_64 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 364 "termination.m"
    {
#line 364 "termination.m"
      mercury__list__filter_4_p_0(transform_hlds__termination__TypeCtorInfo_64_64, transform_hlds__termination__IsArgSizeKnown_11, transform_hlds__termination__SCC_8, &transform_hlds__termination___SCCArgSizeKnown_16, &transform_hlds__termination__SCCArgSizeUnknown_17);
    }
#line 369 "termination.m"
    if ((transform_hlds__termination__SCCArgSizeUnknown_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 366 "termination.m"
      {
#line 367 "termination.m"
        transform_hlds__termination__ArgSizeErrors_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 368 "termination.m"
        transform_hlds__termination__TermErrors_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 366 "termination.m"
        transform_hlds__termination__STATE_VARIABLE_ModuleInfo_55_55 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47;
#line 366 "termination.m"
      }
#line 369 "termination.m"
    else
#line 370 "termination.m"
      {
#line 370 "termination.m"
        MR_Word transform_hlds__termination__ArgSizeResult_22;

#line 371 "termination.m"
        {
#line 371 "termination.m"
          transform_hlds__term_pass1__find_arg_sizes_in_scc_5_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47, transform_hlds__termination__PassInfo_7, transform_hlds__termination__SCCArgSizeUnknown_17, &transform_hlds__termination__ArgSizeResult_22, &transform_hlds__termination__TermErrors_19);
        }
#line 378 "termination.m"
        if (((MR_tag((MR_Word) transform_hlds__termination__ArgSizeResult_22)) == (MR_mktag((MR_Integer) 1))))
#line 379 "termination.m"
          {
#line 379 "termination.m"
            MR_Word transform_hlds__termination__V_53_53;

#line 379 "termination.m"
            transform_hlds__termination__ArgSizeErrors_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__ArgSizeResult_22, (MR_Integer) 0)));
#line 380 "termination.m"
            {
#line 380 "termination.m"
              transform_hlds__termination__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 380 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_53_53, 0) = ((MR_Box) (transform_hlds__termination__ArgSizeErrors_18));
#line 380 "termination.m"
            }
#line 380 "termination.m"
            {
#line 380 "termination.m"
              transform_hlds__termination__set_infinite_arg_size_infos_4_p_0(transform_hlds__termination__SCCArgSizeUnknown_17, transform_hlds__termination__V_53_53, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_55_55);
            }
#line 379 "termination.m"
          }
#line 378 "termination.m"
        else
#line 374 "termination.m"
          {
#line 374 "termination.m"
            MR_Word transform_hlds__termination__Solutions_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeResult_22, (MR_Integer) 0)));
#line 374 "termination.m"
            MR_Word transform_hlds__termination__OutputSupplierMap_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeResult_22, (MR_Integer) 1)));

#line 375 "termination.m"
            {
#line 375 "termination.m"
              transform_hlds__termination__set_finite_arg_size_infos_4_p_0(transform_hlds__termination__Solutions_23, transform_hlds__termination__OutputSupplierMap_24, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_55_55);
            }
#line 377 "termination.m"
            transform_hlds__termination__ArgSizeErrors_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 374 "termination.m"
          }
#line 370 "termination.m"
      }
#line 385 "termination.m"
    {
#line 385 "termination.m"
      transform_hlds__termination__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 385 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_56_56, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_6[0]));
#line 385 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_56_56, 1) = ((MR_Box) (transform_hlds__termination__analyse_termination_in_scc_6_p_0_2));
#line 385 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 385 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_56_56, 3) = ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_55_55));
#line 385 "termination.m"
    }
#line 385 "termination.m"
    {
#line 385 "termination.m"
      mercury__list__filter_4_p_0(transform_hlds__termination__TypeCtorInfo_64_64, transform_hlds__termination__V_56_56, transform_hlds__termination__SCC_8, &transform_hlds__termination___SCCTerminationKnown_26, &transform_hlds__termination__SCCTerminationUnknown_27);
    }
#line 392 "termination.m"
    if ((transform_hlds__termination__SCCTerminationUnknown_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 391 "termination.m"
      {
#line 391 "termination.m"
        *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_48 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_55_55;
#line 391 "termination.m"
        *transform_hlds__termination__STATE_VARIABLE_Specs_50 = transform_hlds__termination__STATE_VARIABLE_Specs_0_49;
#line 391 "termination.m"
      }
#line 392 "termination.m"
    else
#line 393 "termination.m"
      {
#line 393 "termination.m"
        MR_Word transform_hlds__termination__TypeCtorInfo_66_66 = (MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0;
#line 393 "termination.m"
        MR_Word transform_hlds__termination__FatalErrors_34;
#line 393 "termination.m"
        MR_Word transform_hlds__termination__BothErrors_35;

#line 398 "termination.m"
        {
#line 398 "termination.m"
          mercury__list__filter_3_p_0(transform_hlds__termination__TypeCtorInfo_66_66, (MR_Word) &transform_hlds__termination_scalar_common_2[4], transform_hlds__termination__ArgSizeErrors_18, &transform_hlds__termination__FatalErrors_34);
        }
#line 399 "termination.m"
        {
#line 399 "termination.m"
          transform_hlds__termination__BothErrors_35 = mercury__list__f_43_43_2_f_0(transform_hlds__termination__TypeCtorInfo_66_66, transform_hlds__termination__TermErrors_19, transform_hlds__termination__FatalErrors_34);
        }
#line 3511 "transform_hlds.termination.c"
        if ((transform_hlds__termination__BothErrors_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3513 "transform_hlds.termination.c"
          {
#line 3515 "transform_hlds.termination.c"
            MR_Word transform_hlds__termination__TerminationResult_42;
#line 3517 "transform_hlds.termination.c"
            MR_Word transform_hlds__termination__Globals_43;
#line 3519 "transform_hlds.termination.c"
            MR_Integer transform_hlds__termination__SingleArgs_44;

#line 409 "termination.m"
            {
#line 409 "termination.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_55_55, &transform_hlds__termination__Globals_43);
            }
#line 410 "termination.m"
            {
#line 410 "termination.m"
              libs__globals__lookup_int_option_3_p_0(transform_hlds__termination__Globals_43, (MR_Integer) 412, &transform_hlds__termination__SingleArgs_44);
            }
#line 412 "termination.m"
            {
#line 412 "termination.m"
              transform_hlds__term_pass2__prove_termination_in_scc_5_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_55_55, transform_hlds__termination__PassInfo_7, transform_hlds__termination__SCCTerminationUnknown_27, transform_hlds__termination__SingleArgs_44, &transform_hlds__termination__TerminationResult_42);
            }
#line 415 "termination.m"
            {
#line 415 "termination.m"
              transform_hlds__termination__set_termination_infos_4_p_0(transform_hlds__termination__SCCTerminationUnknown_27, transform_hlds__termination__TerminationResult_42, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_55_55, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_48);
            }
#line 421 "termination.m"
            if (((MR_tag((MR_Word) transform_hlds__termination__TerminationResult_42)) == (MR_mktag((MR_Integer) 1))))
#line 418 "termination.m"
              {
#line 418 "termination.m"
                MR_Word transform_hlds__termination__TerminationErrors_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__TerminationResult_42, (MR_Integer) 0)));

#line 419 "termination.m"
                {
#line 419 "termination.m"
                  transform_hlds__termination__maybe_report_termination_errors_5_p_0(*transform_hlds__termination__STATE_VARIABLE_ModuleInfo_48, transform_hlds__termination__SCC_8, transform_hlds__termination__TerminationErrors_45, transform_hlds__termination__STATE_VARIABLE_Specs_0_49, transform_hlds__termination__STATE_VARIABLE_Specs_50);
#line 419 "termination.m"
                  return;
                }
#line 418 "termination.m"
              }
#line 421 "termination.m"
            else
#line 422 "termination.m"
              *transform_hlds__termination__STATE_VARIABLE_Specs_50 = transform_hlds__termination__STATE_VARIABLE_Specs_0_49;
#line 3562 "transform_hlds.termination.c"
          }
#line 3564 "transform_hlds.termination.c"
        else
#line 3566 "transform_hlds.termination.c"
          {
#line 3568 "transform_hlds.termination.c"
            MR_Integer transform_hlds__termination__MaxErrors_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PassInfo_7, (MR_Integer) 1)));
#line 3570 "transform_hlds.termination.c"
            MR_Word transform_hlds__termination__TerminationResult_69;
#line 3572 "transform_hlds.termination.c"
            MR_Word transform_hlds__termination__TerminationErrors_70;
#line 404 "termination.m"
            MR_Word transform_hlds__termination__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PassInfo_7, (MR_Integer) 0)));
#line 404 "termination.m"
            MR_Integer transform_hlds__termination__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PassInfo_7, (MR_Integer) 2)));

#line 405 "termination.m"
            {
#line 405 "termination.m"
              mercury__list__take_upto_3_p_0(transform_hlds__termination__TypeCtorInfo_66_66, transform_hlds__termination__MaxErrors_39, transform_hlds__termination__BothErrors_35, &transform_hlds__termination__TerminationErrors_70);
            }
#line 406 "termination.m"
            {
#line 406 "termination.m"
              transform_hlds__termination__TerminationResult_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 406 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__TerminationResult_69, 0) = ((MR_Box) (transform_hlds__termination__TerminationErrors_70));
#line 406 "termination.m"
            }
#line 415 "termination.m"
            {
#line 415 "termination.m"
              transform_hlds__termination__set_termination_infos_4_p_0(transform_hlds__termination__SCCTerminationUnknown_27, transform_hlds__termination__TerminationResult_69, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_55_55, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_48);
            }
#line 419 "termination.m"
            {
#line 419 "termination.m"
              transform_hlds__termination__maybe_report_termination_errors_5_p_0(*transform_hlds__termination__STATE_VARIABLE_ModuleInfo_48, transform_hlds__termination__SCC_8, transform_hlds__termination__TerminationErrors_70, transform_hlds__termination__STATE_VARIABLE_Specs_0_49, transform_hlds__termination__STATE_VARIABLE_Specs_50);
#line 419 "termination.m"
              return;
            }
#line 3604 "transform_hlds.termination.c"
          }
#line 393 "termination.m"
      }
#line 359 "termination.m"
  }
#line 355 "termination.m"
}

#line 324 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__check_procs_known_term_3_p_0(
#line 324 "termination.m"
  MR_Word transform_hlds__termination__Status_1,
#line 324 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_2,
#line 324 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_3)
#line 324 "termination.m"
{
#line 327 "termination.m"
  while (MR_TRUE)
#line 327 "termination.m"
    {
#line 327 "termination.m"
      /* tailcall optimized into a loop */
#line 327 "termination.m"
      {
#line 327 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 327 "termination.m"
        if ((transform_hlds__termination__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 327 "termination.m"
          transform_hlds__termination__succeeded = MR_TRUE;
#line 327 "termination.m"
        else
#line 328 "termination.m"
          {
#line 328 "termination.m"
            MR_Word transform_hlds__termination__PPId_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__2_2, (MR_Integer) 0)));
#line 328 "termination.m"
            MR_Word transform_hlds__termination__PPIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__2_2, (MR_Integer) 1)));
#line 328 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo_11;
#line 328 "termination.m"
            MR_Word transform_hlds__termination__MaybeTerm_12;
#line 328 "termination.m"
            MR_Word transform_hlds__termination__PPIdStatus_13;
#line 329 "termination.m"
            MR_Word transform_hlds__termination__V_10_10;

#line 329 "termination.m"
            {
#line 329 "termination.m"
              hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__termination__ModuleInfo_3, transform_hlds__termination__PPId_7, &transform_hlds__termination__V_10_10, &transform_hlds__termination__ProcInfo_11);
            }
#line 330 "termination.m"
            {
#line 330 "termination.m"
              hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__termination__ProcInfo_11, &transform_hlds__termination__MaybeTerm_12);
            }
#line 334 "termination.m"
            if ((transform_hlds__termination__MaybeTerm_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 332 "termination.m"
              {
#line 333 "termination.m"
                {
#line 333 "termination.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.termination", (MR_String) "predicate \140transform_hlds.termination.check_procs_known_term\'/3", (MR_String) "no termination info for procedure");
                }
#line 332 "termination.m"
              }
#line 334 "termination.m"
            else
#line 335 "termination.m"
              transform_hlds__termination__PPIdStatus_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__MaybeTerm_12, (MR_Integer) 0)));
#line 340 "termination.m"
            if (((MR_tag((MR_Word) transform_hlds__termination__Status_1)) == (MR_mktag((MR_Integer) 1))))
#line 342 "termination.m"
              {
#line 342 "termination.m"
                MR_Word transform_hlds__termination__V_17_17;

#line 342 "termination.m"
                transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__PPIdStatus_13)) == (MR_mktag((MR_Integer) 1)));
#line 342 "termination.m"
                if (transform_hlds__termination__succeeded)
#line 342 "termination.m"
                  transform_hlds__termination__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__PPIdStatus_13, (MR_Integer) 0)));
#line 342 "termination.m"
              }
#line 340 "termination.m"
            else
#line 339 "termination.m"
              transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__PPIdStatus_13)) == (MR_mktag((MR_Integer) 0)));
#line 328 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 344 "termination.m"
              {
#line 344 "termination.m"
                /* direct tailcall eliminated */
#line 344 "termination.m"
                {
#line 344 "termination.m"
                  MR_Word transform_hlds__termination__HeadVar__2__tmp_copy_2 = transform_hlds__termination__PPIds_8;

#line 344 "termination.m"
                  transform_hlds__termination__HeadVar__2_2 = transform_hlds__termination__HeadVar__2__tmp_copy_2;
#line 344 "termination.m"
                }
#line 344 "termination.m"
                continue;
#line 344 "termination.m"
              }
#line 328 "termination.m"
          }
#line 327 "termination.m"
        return transform_hlds__termination__succeeded;
#line 327 "termination.m"
      }
#line 327 "termination.m"
      break;
#line 327 "termination.m"
    }
#line 324 "termination.m"
}

#line 307 "termination.m"
static MR_Box MR_CALL 
transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0_2(
#line 307 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 307 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1)
#line 307 "termination.m"
{
#line 307 "termination.m"
  {
#line 307 "termination.m"
    MR_Box transform_hlds__termination__wrapper_arg_2;
#line 307 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;
#line 307 "termination.m"
    MR_Word transform_hlds__termination__conv0_HeadVar__2_42;

#line 307 "termination.m"
    {
#line 307 "termination.m"
      transform_hlds__termination__conv0_HeadVar__2_42 = transform_hlds__termination__IntroducedFrom__func__check_scc_pragmas_are_consistent__307__1_1_f_0(((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 307 "termination.m"
    transform_hlds__termination__wrapper_arg_2 = ((MR_Box) (transform_hlds__termination__conv0_HeadVar__2_42));
#line 307 "termination.m"
    return transform_hlds__termination__wrapper_arg_2;
#line 307 "termination.m"
  }
#line 307 "termination.m"
}

#line 275 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0_1(
#line 275 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 275 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1)
#line 275 "termination.m"
{
#line 275 "termination.m"
  {
#line 275 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 275 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

#line 275 "termination.m"
    {
#line 275 "termination.m"
      return transform_hlds__termination__succeeded = transform_hlds__term_util__is_termination_known_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 275 "termination.m"
    return transform_hlds__termination__succeeded;
#line 275 "termination.m"
  }
#line 275 "termination.m"
}

#line 270 "termination.m"
static void MR_CALL 
transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0(
#line 270 "termination.m"
  MR_Word transform_hlds__termination__SCC_6,
#line 270 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26,
#line 270 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27,
#line 270 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_0_28,
#line 270 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_Specs_29)
#line 270 "termination.m"
{
#line 274 "termination.m"
  {
#line 274 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 274 "termination.m"
    MR_Word transform_hlds__termination__TypeCtorInfo_66_66;
#line 274 "termination.m"
    MR_Word transform_hlds__termination__SCCTerminationKnown_9;
#line 274 "termination.m"
    MR_Word transform_hlds__termination__SCCTerminationUnknown_10;
#line 274 "termination.m"
    MR_Word transform_hlds__termination__V_30_30;

#line 275 "termination.m"
    {
#line 275 "termination.m"
      transform_hlds__termination__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 275 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_30_30, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_6[0]));
#line 275 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_30_30, 1) = ((MR_Box) (transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0_1));
#line 275 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 275 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_30_30, 3) = ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26));
#line 275 "termination.m"
    }
#line 3834 "transform_hlds.termination.c"
    transform_hlds__termination__TypeCtorInfo_66_66 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 275 "termination.m"
    {
#line 275 "termination.m"
      mercury__list__filter_4_p_0(transform_hlds__termination__TypeCtorInfo_66_66, transform_hlds__termination__V_30_30, transform_hlds__termination__SCC_6, &transform_hlds__termination__SCCTerminationKnown_9, &transform_hlds__termination__SCCTerminationUnknown_10);
    }
#line 279 "termination.m"
    if ((transform_hlds__termination__SCCTerminationKnown_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 278 "termination.m"
      {
#line 278 "termination.m"
        *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26;
#line 278 "termination.m"
        *transform_hlds__termination__STATE_VARIABLE_Specs_29 = transform_hlds__termination__STATE_VARIABLE_Specs_0_28;
#line 278 "termination.m"
      }
#line 279 "termination.m"
    else
#line 280 "termination.m"
      {
#line 280 "termination.m"
        MR_Word transform_hlds__termination__KnownPPId_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__SCCTerminationKnown_9, (MR_Integer) 0)));
#line 280 "termination.m"
        MR_Word transform_hlds__termination__KnownProcInfo_14;
#line 280 "termination.m"
        MR_Word transform_hlds__termination__MaybeKnownTerm_15;
#line 280 "termination.m"
        MR_Word transform_hlds__termination__KnownTermStatus_16;
#line 280 "termination.m"
        MR_Word transform_hlds__termination__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__SCCTerminationKnown_9, (MR_Integer) 1)));
#line 281 "termination.m"
        MR_Word transform_hlds__termination__V_13_13;
#line 328 "termination.m"
        MR_Word transform_hlds__termination__PPId_72;
#line 328 "termination.m"
        MR_Word transform_hlds__termination__PPIds_73;
#line 328 "termination.m"
        MR_Word transform_hlds__termination__ProcInfo_76;
#line 328 "termination.m"
        MR_Word transform_hlds__termination__MaybeTerm_77;
#line 328 "termination.m"
        MR_Word transform_hlds__termination__PPIdStatus_78;
#line 329 "termination.m"
        MR_Word transform_hlds__termination__V_75_75;

#line 281 "termination.m"
        {
#line 281 "termination.m"
          hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26, transform_hlds__termination__KnownPPId_11, &transform_hlds__termination__V_13_13, &transform_hlds__termination__KnownProcInfo_14);
        }
#line 282 "termination.m"
        {
#line 282 "termination.m"
          hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__termination__KnownProcInfo_14, &transform_hlds__termination__MaybeKnownTerm_15);
        }
#line 286 "termination.m"
        if ((transform_hlds__termination__MaybeKnownTerm_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 284 "termination.m"
          {
#line 285 "termination.m"
            {
#line 285 "termination.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.termination", (MR_String) "predicate \140transform_hlds.termination.check_scc_pragmas_are_consistent\'/5", (MR_String) "no termination info found");
#line 285 "termination.m"
              return;
            }
#line 284 "termination.m"
          }
#line 286 "termination.m"
        else
#line 287 "termination.m"
          transform_hlds__termination__KnownTermStatus_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__MaybeKnownTerm_15, (MR_Integer) 0)));
#line 328 "termination.m"
        transform_hlds__termination__PPId_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__SCCTerminationKnown_9, (MR_Integer) 0)));
#line 328 "termination.m"
        transform_hlds__termination__PPIds_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__SCCTerminationKnown_9, (MR_Integer) 1)));
#line 329 "termination.m"
        {
#line 329 "termination.m"
          hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26, transform_hlds__termination__PPId_72, &transform_hlds__termination__V_75_75, &transform_hlds__termination__ProcInfo_76);
        }
#line 330 "termination.m"
        {
#line 330 "termination.m"
          hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__termination__ProcInfo_76, &transform_hlds__termination__MaybeTerm_77);
        }
#line 334 "termination.m"
        if ((transform_hlds__termination__MaybeTerm_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 332 "termination.m"
          {
#line 333 "termination.m"
            {
#line 333 "termination.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.termination", (MR_String) "predicate \140transform_hlds.termination.check_procs_known_term\'/3", (MR_String) "no termination info for procedure");
#line 333 "termination.m"
              return;
            }
#line 332 "termination.m"
          }
#line 334 "termination.m"
        else
#line 335 "termination.m"
          transform_hlds__termination__PPIdStatus_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__MaybeTerm_77, (MR_Integer) 0)));
#line 340 "termination.m"
        if (((MR_tag((MR_Word) transform_hlds__termination__KnownTermStatus_16)) == (MR_mktag((MR_Integer) 1))))
#line 342 "termination.m"
          {
#line 342 "termination.m"
            MR_Word transform_hlds__termination__V_82_82;

#line 342 "termination.m"
            transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__PPIdStatus_78)) == (MR_mktag((MR_Integer) 1)));
#line 342 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 342 "termination.m"
              transform_hlds__termination__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__PPIdStatus_78, (MR_Integer) 0)));
#line 342 "termination.m"
          }
#line 340 "termination.m"
        else
#line 339 "termination.m"
          transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__PPIdStatus_78)) == (MR_mktag((MR_Integer) 0)));
#line 328 "termination.m"
        if (transform_hlds__termination__succeeded)
#line 344 "termination.m"
          {
#line 344 "termination.m"
            transform_hlds__termination__succeeded = transform_hlds__termination__check_procs_known_term_3_p_0(transform_hlds__termination__KnownTermStatus_16, transform_hlds__termination__PPIds_73, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26);
          }
#line 298 "termination.m"
        if (transform_hlds__termination__succeeded)
#line 296 "termination.m"
          {
#line 296 "termination.m"
            {
#line 296 "termination.m"
              transform_hlds__termination__set_termination_infos_4_p_0(transform_hlds__termination__SCCTerminationUnknown_10, transform_hlds__termination__KnownTermStatus_16, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27);
            }
#line 296 "termination.m"
            *transform_hlds__termination__STATE_VARIABLE_Specs_29 = transform_hlds__termination__STATE_VARIABLE_Specs_0_28;
#line 296 "termination.m"
          }
#line 298 "termination.m"
        else
#line 302 "termination.m"
          {
#line 302 "termination.m"
            MR_Word transform_hlds__termination__Context_17;
#line 302 "termination.m"
            MR_Word transform_hlds__termination__NewTermStatus_18;
#line 302 "termination.m"
            MR_Word transform_hlds__termination__PredIds_19;
#line 302 "termination.m"
            MR_Word transform_hlds__termination__PredNamePieces_22;
#line 302 "termination.m"
            MR_Word transform_hlds__termination__Pieces_23;
#line 302 "termination.m"
            MR_Word transform_hlds__termination__Msg_24;
#line 302 "termination.m"
            MR_Word transform_hlds__termination__Spec_25;
#line 302 "termination.m"
            MR_Word transform_hlds__termination__V_35_35;
#line 302 "termination.m"
            MR_Word transform_hlds__termination__V_36_36;
#line 302 "termination.m"
            MR_Word transform_hlds__termination__V_44_44;
#line 302 "termination.m"
            MR_Word transform_hlds__termination__V_54_54;
#line 302 "termination.m"
            MR_Word transform_hlds__termination__V_55_55;
#line 302 "termination.m"
            MR_Word transform_hlds__termination__V_59_59;

#line 302 "termination.m"
            {
#line 302 "termination.m"
              transform_hlds__term_util__get_context_from_scc_3_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26, transform_hlds__termination__SCCTerminationKnown_9, &transform_hlds__termination__Context_17);
            }
#line 304 "termination.m"
            {
#line 304 "termination.m"
              transform_hlds__termination__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 304 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__V_36_36, 0) = ((MR_Box) (transform_hlds__termination__Context_17));
#line 304 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 304 "termination.m"
            }
#line 304 "termination.m"
            {
#line 304 "termination.m"
              transform_hlds__termination__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 304 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_35_35, 0) = ((MR_Box) (transform_hlds__termination__V_36_36));
#line 304 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 304 "termination.m"
            }
#line 304 "termination.m"
            {
#line 304 "termination.m"
              transform_hlds__termination__NewTermStatus_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 304 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__NewTermStatus_18, 0) = ((MR_Box) (transform_hlds__termination__V_35_35));
#line 304 "termination.m"
            }
#line 305 "termination.m"
            {
#line 305 "termination.m"
              transform_hlds__termination__set_termination_infos_4_p_0(transform_hlds__termination__SCC_6, transform_hlds__termination__NewTermStatus_18, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27);
            }
#line 307 "termination.m"
            {
#line 307 "termination.m"
              transform_hlds__termination__PredIds_19 = mercury__list__map_2_f_0(transform_hlds__termination__TypeCtorInfo_66_66, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &transform_hlds__termination_scalar_common_2[3], transform_hlds__termination__SCCTerminationKnown_9);
            }
#line 309 "termination.m"
            {
#line 309 "termination.m"
              transform_hlds__termination__PredNamePieces_22 = hlds__hlds_error_util__describe_several_pred_names_3_f_0(*transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27, (MR_Integer) 0, transform_hlds__termination__PredIds_19);
            }
#line 312 "termination.m"
            {
#line 312 "termination.m"
              transform_hlds__termination__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 312 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_44_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[36])));
#line 312 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_44_44, 1) = ((MR_Box) (transform_hlds__termination__PredNamePieces_22));
#line 312 "termination.m"
            }
#line 312 "termination.m"
            {
#line 312 "termination.m"
              transform_hlds__termination__Pieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__termination__V_44_44, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[26]));
            }
#line 315 "termination.m"
            {
#line 315 "termination.m"
              transform_hlds__termination__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 315 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__V_55_55, 0) = ((MR_Box) (transform_hlds__termination__Pieces_23));
#line 315 "termination.m"
            }
#line 315 "termination.m"
            {
#line 315 "termination.m"
              transform_hlds__termination__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 315 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_54_54, 0) = ((MR_Box) (transform_hlds__termination__V_55_55));
#line 315 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 315 "termination.m"
            }
#line 315 "termination.m"
            {
#line 315 "termination.m"
              transform_hlds__termination__Msg_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 315 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__Msg_24, 0) = ((MR_Box) (transform_hlds__termination__Context_17));
#line 315 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__Msg_24, 1) = ((MR_Box) (transform_hlds__termination__V_54_54));
#line 315 "termination.m"
            }
#line 316 "termination.m"
            {
#line 316 "termination.m"
              transform_hlds__termination__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 316 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_59_59, 0) = ((MR_Box) (transform_hlds__termination__Msg_24));
#line 316 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 316 "termination.m"
            }
#line 316 "termination.m"
            {
#line 316 "termination.m"
              transform_hlds__termination__Spec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 316 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 316 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 316 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_25, 2) = ((MR_Box) (transform_hlds__termination__V_59_59));
#line 316 "termination.m"
            }
#line 317 "termination.m"
            {
#line 317 "termination.m"
              MR_Word base;
#line 317 "termination.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 317 "termination.m"
              *transform_hlds__termination__STATE_VARIABLE_Specs_29 = base;
#line 317 "termination.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__termination__Spec_25));
#line 317 "termination.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_Specs_0_28));
#line 317 "termination.m"
            }
#line 302 "termination.m"
          }
#line 280 "termination.m"
      }
#line 274 "termination.m"
  }
#line 270 "termination.m"
}

#line 169 "termination.m"
static void MR_CALL 
transform_hlds__termination__check_foreign_code_attributes_of_proc_7_p_0(
#line 169 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_8,
#line 169 "termination.m"
  MR_Word transform_hlds__termination__PPId_9,
#line 169 "termination.m"
  MR_Word transform_hlds__termination__Attributes_10,
#line 169 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25,
#line 169 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcInfo_26,
#line 169 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_0_27,
#line 169 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_Specs_28)
#line 169 "termination.m"
{
#line 175 "termination.m"
  {
#line 175 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 175 "termination.m"
    MR_Word transform_hlds__termination__MaybeTermination_13;
#line 175 "termination.m"
    MR_Word transform_hlds__termination__Context_14;

#line 176 "termination.m"
    {
#line 176 "termination.m"
      hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25, &transform_hlds__termination__MaybeTermination_13);
    }
#line 177 "termination.m"
    {
#line 177 "termination.m"
      hlds__hlds_pred__proc_info_get_context_2_p_0(transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25, &transform_hlds__termination__Context_14);
    }
#line 188 "termination.m"
    if ((transform_hlds__termination__MaybeTermination_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 179 "termination.m"
      {
#line 180 "termination.m"
        {
#line 180 "termination.m"
          transform_hlds__termination__succeeded = transform_hlds__term_util__attributes_imply_termination_1_p_0(transform_hlds__termination__Attributes_10);
        }
#line 183 "termination.m"
        if (transform_hlds__termination__succeeded)
#line 181 "termination.m"
          {
#line 181 "termination.m"
            mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 182 "termination.m"
            {
#line 182 "termination.m"
              hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_5[1]), transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25, transform_hlds__termination__STATE_VARIABLE_ProcInfo_26);
            }
#line 181 "termination.m"
          }
#line 183 "termination.m"
        else
#line 184 "termination.m"
          {
#line 184 "termination.m"
            MR_Word transform_hlds__termination__TermErr_16;
#line 184 "termination.m"
            MR_Word transform_hlds__termination__V_104_104;
#line 184 "termination.m"
            MR_Word transform_hlds__termination__V_105_105;
#line 184 "termination.m"
            MR_Word transform_hlds__termination__V_106_106;
#line 184 "termination.m"
            MR_Word transform_hlds__termination__TermStatus_109;

#line 184 "termination.m"
            {
#line 184 "termination.m"
              transform_hlds__termination__V_104_104 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 184 "termination.m"
              MR_hl_field(MR_mktag(3), transform_hlds__termination__V_104_104, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 184 "termination.m"
              MR_hl_field(MR_mktag(3), transform_hlds__termination__V_104_104, 1) = ((MR_Box) (transform_hlds__termination__PPId_9));
#line 184 "termination.m"
            }
#line 184 "termination.m"
            {
#line 184 "termination.m"
              transform_hlds__termination__TermErr_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 184 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__TermErr_16, 0) = ((MR_Box) (transform_hlds__termination__Context_14));
#line 184 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__TermErr_16, 1) = ((MR_Box) (transform_hlds__termination__V_104_104));
#line 184 "termination.m"
            }
#line 185 "termination.m"
            {
#line 185 "termination.m"
              transform_hlds__termination__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 185 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_106_106, 0) = ((MR_Box) (transform_hlds__termination__TermErr_16));
#line 185 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_106_106, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 185 "termination.m"
            }
#line 185 "termination.m"
            {
#line 185 "termination.m"
              transform_hlds__termination__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 185 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_105_105, 0) = ((MR_Box) (transform_hlds__termination__V_106_106));
#line 185 "termination.m"
            }
#line 185 "termination.m"
            {
#line 185 "termination.m"
              transform_hlds__termination__TermStatus_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 185 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__TermStatus_109, 0) = ((MR_Box) (transform_hlds__termination__V_105_105));
#line 185 "termination.m"
            }
#line 186 "termination.m"
            {
#line 186 "termination.m"
              hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(transform_hlds__termination__TermStatus_109, transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25, transform_hlds__termination__STATE_VARIABLE_ProcInfo_26);
            }
#line 184 "termination.m"
          }
#line 179 "termination.m"
        *transform_hlds__termination__STATE_VARIABLE_Specs_28 = transform_hlds__termination__STATE_VARIABLE_Specs_0_27;
#line 179 "termination.m"
      }
#line 188 "termination.m"
    else
#line 188 "termination.m"
      {
#line 188 "termination.m"
        MR_Word transform_hlds__termination__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__MaybeTermination_13, (MR_Integer) 0)));

#line 188 "termination.m"
        if (((MR_tag((MR_Word) transform_hlds__termination__V_137_137)) == (MR_mktag((MR_Integer) 1))))
#line 217 "termination.m"
          {
#line 217 "termination.m"
            MR_Word transform_hlds__termination__TermErrs0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__V_137_137, (MR_Integer) 0)));
#line 217 "termination.m"
            MR_Word transform_hlds__termination__ProcTerminates_130;

#line 218 "termination.m"
            {
#line 218 "termination.m"
              transform_hlds__termination__ProcTerminates_130 = parse_tree__prog_data__get_terminates_1_f_0(transform_hlds__termination__Attributes_10);
            }
#line 235 "termination.m"
#line 235 "termination.m"
            switch (transform_hlds__termination__ProcTerminates_130) {
#line 235 "termination.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 235 "termination.m"
              case (MR_Integer) 2:
#line 237 "termination.m"
                {
#line 237 "termination.m"
                  *transform_hlds__termination__STATE_VARIABLE_ProcInfo_26 = transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25;
#line 237 "termination.m"
                  *transform_hlds__termination__STATE_VARIABLE_Specs_28 = transform_hlds__termination__STATE_VARIABLE_Specs_0_27;
#line 237 "termination.m"
                }
#line 235 "termination.m"
                break;
#line 235 "termination.m"
              case (MR_Integer) 1:
#line 236 "termination.m"
                {
#line 236 "termination.m"
                  *transform_hlds__termination__STATE_VARIABLE_ProcInfo_26 = transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25;
#line 236 "termination.m"
                  *transform_hlds__termination__STATE_VARIABLE_Specs_28 = transform_hlds__termination__STATE_VARIABLE_Specs_0_27;
#line 236 "termination.m"
                }
#line 235 "termination.m"
                break;
#line 235 "termination.m"
              case (MR_Integer) 0:
#line 220 "termination.m"
                {
#line 220 "termination.m"
                  MR_Word transform_hlds__termination__TermErrs_24;
#line 220 "termination.m"
                  MR_Word transform_hlds__termination__V_31_31;
#line 220 "termination.m"
                  MR_Word transform_hlds__termination__V_34_34;
#line 220 "termination.m"
                  MR_Word transform_hlds__termination__V_56_56;
#line 220 "termination.m"
                  MR_Word transform_hlds__termination__V_57_57;
#line 220 "termination.m"
                  MR_Word transform_hlds__termination__V_61_61;
#line 220 "termination.m"
                  MR_Word transform_hlds__termination__TermStatus_116;
#line 220 "termination.m"
                  MR_Word transform_hlds__termination__TermErr_117;
#line 220 "termination.m"
                  MR_Word transform_hlds__termination__ProcNamePieces_118;
#line 220 "termination.m"
                  MR_Word transform_hlds__termination__Pieces_119;
#line 220 "termination.m"
                  MR_Word transform_hlds__termination__Msg_120;
#line 220 "termination.m"
                  MR_Word transform_hlds__termination__Spec_121;

#line 221 "termination.m"
                  {
#line 221 "termination.m"
                    transform_hlds__termination__TermErr_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 221 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__TermErr_117, 0) = ((MR_Box) (transform_hlds__termination__Context_14));
#line 221 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__TermErr_117, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 221 "termination.m"
                  }
#line 222 "termination.m"
                  {
#line 222 "termination.m"
                    transform_hlds__termination__TermErrs_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 222 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__TermErrs_24, 0) = ((MR_Box) (transform_hlds__termination__TermErr_117));
#line 222 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__TermErrs_24, 1) = ((MR_Box) (transform_hlds__termination__TermErrs0_23));
#line 222 "termination.m"
                  }
#line 223 "termination.m"
                  {
#line 223 "termination.m"
                    transform_hlds__termination__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 223 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_31_31, 0) = ((MR_Box) (transform_hlds__termination__TermErrs_24));
#line 223 "termination.m"
                  }
#line 223 "termination.m"
                  {
#line 223 "termination.m"
                    transform_hlds__termination__TermStatus_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 223 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__TermStatus_116, 0) = ((MR_Box) (transform_hlds__termination__V_31_31));
#line 223 "termination.m"
                  }
#line 225 "termination.m"
                  {
#line 225 "termination.m"
                    hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(transform_hlds__termination__TermStatus_116, transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25, transform_hlds__termination__STATE_VARIABLE_ProcInfo_26);
                  }
#line 226 "termination.m"
                  {
#line 226 "termination.m"
                    transform_hlds__termination__ProcNamePieces_118 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__termination__ModuleInfo_8, (MR_Integer) 0, transform_hlds__termination__PPId_9);
                  }
#line 228 "termination.m"
                  {
#line 228 "termination.m"
                    transform_hlds__termination__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 228 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_34_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[36])));
#line 228 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_34_34, 1) = ((MR_Box) (transform_hlds__termination__ProcNamePieces_118));
#line 228 "termination.m"
                  }
#line 228 "termination.m"
                  {
#line 228 "termination.m"
                    transform_hlds__termination__Pieces_119 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__termination__V_34_34, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[15]));
                  }
#line 232 "termination.m"
                  {
#line 232 "termination.m"
                    transform_hlds__termination__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 232 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__V_57_57, 0) = ((MR_Box) (transform_hlds__termination__Pieces_119));
#line 232 "termination.m"
                  }
#line 232 "termination.m"
                  {
#line 232 "termination.m"
                    transform_hlds__termination__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 232 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_56_56, 0) = ((MR_Box) (transform_hlds__termination__V_57_57));
#line 232 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 232 "termination.m"
                  }
#line 232 "termination.m"
                  {
#line 232 "termination.m"
                    transform_hlds__termination__Msg_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 232 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__Msg_120, 0) = ((MR_Box) (transform_hlds__termination__Context_14));
#line 232 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__Msg_120, 1) = ((MR_Box) (transform_hlds__termination__V_56_56));
#line 232 "termination.m"
                  }
#line 233 "termination.m"
                  {
#line 233 "termination.m"
                    transform_hlds__termination__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 233 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_61_61, 0) = ((MR_Box) (transform_hlds__termination__Msg_120));
#line 233 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 233 "termination.m"
                  }
#line 233 "termination.m"
                  {
#line 233 "termination.m"
                    transform_hlds__termination__Spec_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 233 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_121, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 233 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 233 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_121, 2) = ((MR_Box) (transform_hlds__termination__V_61_61));
#line 233 "termination.m"
                  }
#line 234 "termination.m"
                  {
#line 234 "termination.m"
                    MR_Word base;
#line 234 "termination.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 234 "termination.m"
                    *transform_hlds__termination__STATE_VARIABLE_Specs_28 = base;
#line 234 "termination.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__termination__Spec_121));
#line 234 "termination.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_Specs_0_27));
#line 234 "termination.m"
                  }
#line 220 "termination.m"
                }
#line 235 "termination.m"
                break;
#line 235 "termination.m"
            }
#line 217 "termination.m"
          }
#line 188 "termination.m"
        else
#line 191 "termination.m"
          {
#line 191 "termination.m"
            MR_Word transform_hlds__termination__ProcTerminates_18;

#line 192 "termination.m"
            {
#line 192 "termination.m"
              transform_hlds__termination__ProcTerminates_18 = parse_tree__prog_data__get_terminates_1_f_0(transform_hlds__termination__Attributes_10);
            }
#line 208 "termination.m"
#line 208 "termination.m"
            switch (transform_hlds__termination__ProcTerminates_18) {
#line 208 "termination.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 208 "termination.m"
              case (MR_Integer) 2:
#line 210 "termination.m"
                {
#line 210 "termination.m"
                  *transform_hlds__termination__STATE_VARIABLE_ProcInfo_26 = transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25;
#line 210 "termination.m"
                  *transform_hlds__termination__STATE_VARIABLE_Specs_28 = transform_hlds__termination__STATE_VARIABLE_Specs_0_27;
#line 210 "termination.m"
                }
#line 208 "termination.m"
                break;
#line 208 "termination.m"
              case (MR_Integer) 1:
#line 194 "termination.m"
                {
#line 194 "termination.m"
                  MR_Word transform_hlds__termination__ProcNamePieces_19;
#line 194 "termination.m"
                  MR_Word transform_hlds__termination__Pieces_20;
#line 194 "termination.m"
                  MR_Word transform_hlds__termination__Msg_21;
#line 194 "termination.m"
                  MR_Word transform_hlds__termination__Spec_22;
#line 194 "termination.m"
                  MR_Word transform_hlds__termination__V_66_66;
#line 194 "termination.m"
                  MR_Word transform_hlds__termination__V_67_67;
#line 194 "termination.m"
                  MR_Word transform_hlds__termination__V_71_71;
#line 194 "termination.m"
                  MR_Word transform_hlds__termination__V_93_93;
#line 194 "termination.m"
                  MR_Word transform_hlds__termination__V_94_94;
#line 194 "termination.m"
                  MR_Word transform_hlds__termination__V_98_98;
#line 194 "termination.m"
                  MR_Word transform_hlds__termination__TermStatus_110;
#line 194 "termination.m"
                  MR_Word transform_hlds__termination__TermErr_111;

#line 195 "termination.m"
                  {
#line 195 "termination.m"
                    transform_hlds__termination__TermErr_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 195 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__TermErr_111, 0) = ((MR_Box) (transform_hlds__termination__Context_14));
#line 195 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__TermErr_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 195 "termination.m"
                  }
#line 196 "termination.m"
                  {
#line 196 "termination.m"
                    transform_hlds__termination__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 196 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_67_67, 0) = ((MR_Box) (transform_hlds__termination__TermErr_111));
#line 196 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 196 "termination.m"
                  }
#line 196 "termination.m"
                  {
#line 196 "termination.m"
                    transform_hlds__termination__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 196 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_66_66, 0) = ((MR_Box) (transform_hlds__termination__V_67_67));
#line 196 "termination.m"
                  }
#line 196 "termination.m"
                  {
#line 196 "termination.m"
                    transform_hlds__termination__TermStatus_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 196 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__TermStatus_110, 0) = ((MR_Box) (transform_hlds__termination__V_66_66));
#line 196 "termination.m"
                  }
#line 198 "termination.m"
                  {
#line 198 "termination.m"
                    hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(transform_hlds__termination__TermStatus_110, transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25, transform_hlds__termination__STATE_VARIABLE_ProcInfo_26);
                  }
#line 199 "termination.m"
                  {
#line 199 "termination.m"
                    transform_hlds__termination__ProcNamePieces_19 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__termination__ModuleInfo_8, (MR_Integer) 0, transform_hlds__termination__PPId_9);
                  }
#line 201 "termination.m"
                  {
#line 201 "termination.m"
                    transform_hlds__termination__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 201 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_71_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[36])));
#line 201 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_71_71, 1) = ((MR_Box) (transform_hlds__termination__ProcNamePieces_19));
#line 201 "termination.m"
                  }
#line 201 "termination.m"
                  {
#line 201 "termination.m"
                    transform_hlds__termination__Pieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__termination__V_71_71, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[22]));
                  }
#line 205 "termination.m"
                  {
#line 205 "termination.m"
                    transform_hlds__termination__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 205 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__V_94_94, 0) = ((MR_Box) (transform_hlds__termination__Pieces_20));
#line 205 "termination.m"
                  }
#line 205 "termination.m"
                  {
#line 205 "termination.m"
                    transform_hlds__termination__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 205 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_93_93, 0) = ((MR_Box) (transform_hlds__termination__V_94_94));
#line 205 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 205 "termination.m"
                  }
#line 205 "termination.m"
                  {
#line 205 "termination.m"
                    transform_hlds__termination__Msg_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 205 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__Msg_21, 0) = ((MR_Box) (transform_hlds__termination__Context_14));
#line 205 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__Msg_21, 1) = ((MR_Box) (transform_hlds__termination__V_93_93));
#line 205 "termination.m"
                  }
#line 206 "termination.m"
                  {
#line 206 "termination.m"
                    transform_hlds__termination__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 206 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_98_98, 0) = ((MR_Box) (transform_hlds__termination__Msg_21));
#line 206 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_98_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 206 "termination.m"
                  }
#line 206 "termination.m"
                  {
#line 206 "termination.m"
                    transform_hlds__termination__Spec_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 206 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 206 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 206 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_22, 2) = ((MR_Box) (transform_hlds__termination__V_98_98));
#line 206 "termination.m"
                  }
#line 207 "termination.m"
                  {
#line 207 "termination.m"
                    MR_Word base;
#line 207 "termination.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 207 "termination.m"
                    *transform_hlds__termination__STATE_VARIABLE_Specs_28 = base;
#line 207 "termination.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__termination__Spec_22));
#line 207 "termination.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_Specs_0_27));
#line 207 "termination.m"
                  }
#line 194 "termination.m"
                }
#line 208 "termination.m"
                break;
#line 208 "termination.m"
              case (MR_Integer) 0:
#line 209 "termination.m"
                {
#line 209 "termination.m"
                  *transform_hlds__termination__STATE_VARIABLE_ProcInfo_26 = transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25;
#line 209 "termination.m"
                  *transform_hlds__termination__STATE_VARIABLE_Specs_28 = transform_hlds__termination__STATE_VARIABLE_Specs_0_27;
#line 209 "termination.m"
                }
#line 208 "termination.m"
                break;
#line 208 "termination.m"
            }
#line 191 "termination.m"
          }
#line 188 "termination.m"
      }
#line 175 "termination.m"
  }
#line 169 "termination.m"
}

#line 141 "termination.m"
static void MR_CALL 
transform_hlds__termination__check_foreign_code_attributes_in_scc_5_p_0(
#line 141 "termination.m"
  MR_Word transform_hlds__termination__PPIds_6,
#line 141 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26,
#line 141 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27,
#line 141 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_0_28,
#line 141 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_Specs_29)
#line 141 "termination.m"
{
#line 147 "termination.m"
  {
#line 147 "termination.m"
    MR_bool transform_hlds__termination__succeeded;

#line 147 "termination.m"
    if ((transform_hlds__termination__PPIds_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 147 "termination.m"
      {
#line 148 "termination.m"
        {
#line 148 "termination.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.termination", (MR_String) "predicate \140transform_hlds.termination.check_foreign_code_attributes_in_scc\'/5", (MR_String) "empty SCC");
#line 148 "termination.m"
          return;
        }
#line 147 "termination.m"
      }
#line 147 "termination.m"
    else
#line 147 "termination.m"
      {
#line 147 "termination.m"
        MR_Word transform_hlds__termination__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__PPIds_6, (MR_Integer) 1)));
#line 147 "termination.m"
        MR_Word transform_hlds__termination__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__PPIds_6, (MR_Integer) 0)));

#line 147 "termination.m"
        if ((transform_hlds__termination__V_37_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 150 "termination.m"
          {
#line 150 "termination.m"
            MR_Word transform_hlds__termination__PredInfo_10;
#line 150 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo0_11;
#line 161 "termination.m"
            MR_Word transform_hlds__termination__Attributes_15;
#line 153 "termination.m"
            MR_Word transform_hlds__termination__Goal_12;
#line 153 "termination.m"
            MR_Word transform_hlds__termination__GoalExpr_13;
#line 154 "termination.m"
            MR_Word transform_hlds__termination___GoalInfo_14;
#line 155 "termination.m"
            MR_Word transform_hlds__termination__V_16_16;
#line 155 "termination.m"
            MR_Integer transform_hlds__termination__V_17_17;
#line 155 "termination.m"
            MR_Word transform_hlds__termination__V_18_18;
#line 155 "termination.m"
            MR_Word transform_hlds__termination__V_19_19;
#line 155 "termination.m"
            MR_Word transform_hlds__termination__V_20_20;
#line 155 "termination.m"
            MR_Word transform_hlds__termination__V_21_21;

#line 151 "termination.m"
            {
#line 151 "termination.m"
              hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26, transform_hlds__termination__V_38_38, &transform_hlds__termination__PredInfo_10, &transform_hlds__termination__ProcInfo0_11);
            }
#line 153 "termination.m"
            {
#line 153 "termination.m"
              hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__termination__ProcInfo0_11, &transform_hlds__termination__Goal_12);
            }
#line 154 "termination.m"
            transform_hlds__termination__GoalExpr_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__Goal_12, (MR_Integer) 0)));
#line 154 "termination.m"
            transform_hlds__termination___GoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__Goal_12, (MR_Integer) 1)));
#line 155 "termination.m"
            transform_hlds__termination__succeeded = ((((MR_tag((MR_Word) transform_hlds__termination__GoalExpr_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__GoalExpr_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 155 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 155 "termination.m"
              {
#line 155 "termination.m"
                transform_hlds__termination__Attributes_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__GoalExpr_13, (MR_Integer) 1)));
#line 155 "termination.m"
                transform_hlds__termination__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__GoalExpr_13, (MR_Integer) 2)));
#line 155 "termination.m"
                transform_hlds__termination__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__termination__GoalExpr_13, (MR_Integer) 3)));
#line 155 "termination.m"
                transform_hlds__termination__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__GoalExpr_13, (MR_Integer) 4)));
#line 155 "termination.m"
                transform_hlds__termination__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__GoalExpr_13, (MR_Integer) 5)));
#line 155 "termination.m"
                transform_hlds__termination__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__GoalExpr_13, (MR_Integer) 6)));
#line 155 "termination.m"
                transform_hlds__termination__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__GoalExpr_13, (MR_Integer) 7)));
#line 158 "termination.m"
                {
#line 158 "termination.m"
                  MR_Word transform_hlds__termination__ProcInfo_22;

#line 157 "termination.m"
                  {
#line 157 "termination.m"
                    transform_hlds__termination__check_foreign_code_attributes_of_proc_7_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26, transform_hlds__termination__V_38_38, transform_hlds__termination__Attributes_15, transform_hlds__termination__ProcInfo0_11, &transform_hlds__termination__ProcInfo_22, transform_hlds__termination__STATE_VARIABLE_Specs_0_28, transform_hlds__termination__STATE_VARIABLE_Specs_29);
                  }
#line 159 "termination.m"
                  {
#line 159 "termination.m"
                    hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(transform_hlds__termination__V_38_38, transform_hlds__termination__PredInfo_10, transform_hlds__termination__ProcInfo_22, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27);
#line 159 "termination.m"
                    return;
                  }
#line 158 "termination.m"
                }
#line 155 "termination.m"
              }
#line 155 "termination.m"
            else
#line 162 "termination.m"
              {
#line 162 "termination.m"
                *transform_hlds__termination__STATE_VARIABLE_Specs_29 = transform_hlds__termination__STATE_VARIABLE_Specs_0_28;
#line 162 "termination.m"
                *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26;
#line 162 "termination.m"
              }
#line 150 "termination.m"
          }
#line 147 "termination.m"
        else
#line 165 "termination.m"
          {
#line 165 "termination.m"
            *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26;
#line 165 "termination.m"
            *transform_hlds__termination__STATE_VARIABLE_Specs_29 = transform_hlds__termination__STATE_VARIABLE_Specs_0_28;
#line 165 "termination.m"
          }
#line 147 "termination.m"
      }
#line 147 "termination.m"
  }
#line 141 "termination.m"
}

#line 110 "termination.m"
static void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_3_p_0_3(
#line 110 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 110 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1,
#line 110 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_2,
#line 110 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_3,
#line 110 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_4,
#line 110 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_5)
#line 110 "termination.m"
{
#line 110 "termination.m"
  {
#line 110 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;
#line 110 "termination.m"
    MR_Word transform_hlds__termination__conv9_STATE_VARIABLE_ModuleInfo_48;
#line 110 "termination.m"
    MR_Word transform_hlds__termination__conv8_STATE_VARIABLE_Specs_50;

#line 110 "termination.m"
    {
#line 110 "termination.m"
      transform_hlds__termination__analyse_termination_in_scc_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1), ((MR_Word) transform_hlds__termination__wrapper_arg_2), &transform_hlds__termination__conv9_STATE_VARIABLE_ModuleInfo_48, ((MR_Word) transform_hlds__termination__wrapper_arg_4), &transform_hlds__termination__conv8_STATE_VARIABLE_Specs_50);
    }
#line 110 "termination.m"
    *transform_hlds__termination__wrapper_arg_3 = ((MR_Box) (transform_hlds__termination__conv9_STATE_VARIABLE_ModuleInfo_48));
#line 110 "termination.m"
    *transform_hlds__termination__wrapper_arg_5 = ((MR_Box) (transform_hlds__termination__conv8_STATE_VARIABLE_Specs_50));
#line 110 "termination.m"
  }
#line 110 "termination.m"
}

#line 268 "termination.m"
static void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_3_p_0_2(
#line 268 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 268 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1,
#line 268 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_2,
#line 268 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_3,
#line 268 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_4,
#line 268 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_5)
#line 268 "termination.m"
{
#line 268 "termination.m"
  {
#line 268 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;
#line 268 "termination.m"
    MR_Word transform_hlds__termination__conv5_STATE_VARIABLE_ModuleInfo_27;
#line 268 "termination.m"
    MR_Word transform_hlds__termination__conv4_STATE_VARIABLE_Specs_29;

#line 268 "termination.m"
    {
#line 268 "termination.m"
      transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0(((MR_Word) transform_hlds__termination__wrapper_arg_1), ((MR_Word) transform_hlds__termination__wrapper_arg_2), &transform_hlds__termination__conv5_STATE_VARIABLE_ModuleInfo_27, ((MR_Word) transform_hlds__termination__wrapper_arg_4), &transform_hlds__termination__conv4_STATE_VARIABLE_Specs_29);
    }
#line 268 "termination.m"
    *transform_hlds__termination__wrapper_arg_3 = ((MR_Box) (transform_hlds__termination__conv5_STATE_VARIABLE_ModuleInfo_27));
#line 268 "termination.m"
    *transform_hlds__termination__wrapper_arg_5 = ((MR_Box) (transform_hlds__termination__conv4_STATE_VARIABLE_Specs_29));
#line 268 "termination.m"
  }
#line 268 "termination.m"
}

#line 138 "termination.m"
static void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_3_p_0_1(
#line 138 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 138 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1,
#line 138 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_2,
#line 138 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_3,
#line 138 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_4,
#line 138 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_5)
#line 138 "termination.m"
{
#line 138 "termination.m"
  {
#line 138 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;
#line 138 "termination.m"
    MR_Word transform_hlds__termination__conv1_STATE_VARIABLE_ModuleInfo_27;
#line 138 "termination.m"
    MR_Word transform_hlds__termination__conv0_STATE_VARIABLE_Specs_29;

#line 138 "termination.m"
    {
#line 138 "termination.m"
      transform_hlds__termination__check_foreign_code_attributes_in_scc_5_p_0(((MR_Word) transform_hlds__termination__wrapper_arg_1), ((MR_Word) transform_hlds__termination__wrapper_arg_2), &transform_hlds__termination__conv1_STATE_VARIABLE_ModuleInfo_27, ((MR_Word) transform_hlds__termination__wrapper_arg_4), &transform_hlds__termination__conv0_STATE_VARIABLE_Specs_29);
    }
#line 138 "termination.m"
    *transform_hlds__termination__wrapper_arg_3 = ((MR_Box) (transform_hlds__termination__conv1_STATE_VARIABLE_ModuleInfo_27));
#line 138 "termination.m"
    *transform_hlds__termination__wrapper_arg_5 = ((MR_Box) (transform_hlds__termination__conv0_STATE_VARIABLE_Specs_29));
#line 138 "termination.m"
  }
#line 138 "termination.m"
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
#line 83 "termination.m"
  {
#line 83 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 83 "termination.m"
    MR_Word transform_hlds__termination__Globals_6;
#line 83 "termination.m"
    MR_Word transform_hlds__termination__TermNorm_7;
#line 83 "termination.m"
    MR_Word transform_hlds__termination__FunctorInfo_8;
#line 83 "termination.m"
    MR_Integer transform_hlds__termination__MaxErrors_9;
#line 83 "termination.m"
    MR_Integer transform_hlds__termination__MaxPaths_10;
#line 83 "termination.m"
    MR_Word transform_hlds__termination__PassInfo_11;
#line 83 "termination.m"
    MR_Word transform_hlds__termination__PredIds_12;
#line 83 "termination.m"
    MR_Word transform_hlds__termination__DepInfo_13;
#line 83 "termination.m"
    MR_Word transform_hlds__termination__SCCs_14;
#line 83 "termination.m"
    MR_Word transform_hlds__termination__PostSpecs_15;
#line 83 "termination.m"
    MR_Word transform_hlds__termination__ProcAnalysisKinds0_16;
#line 83 "termination.m"
    MR_Word transform_hlds__termination__ProcAnalysisKinds_17;
#line 83 "termination.m"
    MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_23_23;
#line 83 "termination.m"
    MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_24_24;
#line 83 "termination.m"
    MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26;
#line 83 "termination.m"
    MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_27_27;
#line 83 "termination.m"
    MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_28_28;
#line 83 "termination.m"
    MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_29_29;
#line 83 "termination.m"
    MR_Word transform_hlds__termination__V_30_30;
#line 83 "termination.m"
    MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_31_31;
#line 83 "termination.m"
    MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_32_32;
#line 138 "termination.m"
    MR_Box transform_hlds__termination__conv3_STATE_VARIABLE_ModuleInfo_26_26;
#line 138 "termination.m"
    MR_Box transform_hlds__termination__conv2_STATE_VARIABLE_Specs_27_27;
#line 268 "termination.m"
    MR_Box transform_hlds__termination__conv7_STATE_VARIABLE_ModuleInfo_28_28;
#line 268 "termination.m"
    MR_Box transform_hlds__termination__conv6_STATE_VARIABLE_Specs_29_29;
#line 110 "termination.m"
    MR_Box transform_hlds__termination__conv11_STATE_VARIABLE_ModuleInfo_31_31;
#line 110 "termination.m"
    MR_Box transform_hlds__termination__conv10_STATE_VARIABLE_Specs_32_32;

#line 84 "termination.m"
    {
#line 84 "termination.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_18, &transform_hlds__termination__Globals_6);
    }
#line 85 "termination.m"
    {
#line 85 "termination.m"
      libs__globals__get_termination_norm_2_p_0(transform_hlds__termination__Globals_6, &transform_hlds__termination__TermNorm_7);
    }
#line 86 "termination.m"
    {
#line 86 "termination.m"
      transform_hlds__termination__FunctorInfo_8 = transform_hlds__term_norm__set_functor_info_2_f_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_18, transform_hlds__termination__TermNorm_7);
    }
#line 87 "termination.m"
    {
#line 87 "termination.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__termination__Globals_6, (MR_Integer) 414, &transform_hlds__termination__MaxErrors_9);
    }
#line 88 "termination.m"
    {
#line 88 "termination.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__termination__Globals_6, (MR_Integer) 415, &transform_hlds__termination__MaxPaths_10);
    }
#line 89 "termination.m"
    {
#line 89 "termination.m"
      transform_hlds__termination__PassInfo_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 89 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__PassInfo_11, 0) = ((MR_Box) (transform_hlds__termination__FunctorInfo_8));
#line 89 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__PassInfo_11, 1) = ((MR_Box) (transform_hlds__termination__MaxErrors_9));
#line 89 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__PassInfo_11, 2) = ((MR_Box) (transform_hlds__termination__MaxPaths_10));
#line 89 "termination.m"
    }
#line 93 "termination.m"
    {
#line 93 "termination.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_18, &transform_hlds__termination__PredIds_12);
    }
#line 94 "termination.m"
    {
#line 94 "termination.m"
      transform_hlds__termination__term_preprocess_preds_3_p_0(transform_hlds__termination__PredIds_12, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_18, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_23_23);
    }
#line 97 "termination.m"
    {
#line 97 "termination.m"
      transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_23_23, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_24_24);
    }
#line 98 "termination.m"
    {
#line 98 "termination.m"
      hlds__hlds_module__module_info_dependency_info_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_24_24, &transform_hlds__termination__DepInfo_13);
    }
#line 99 "termination.m"
    {
#line 99 "termination.m"
      hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__termination__DepInfo_13, &transform_hlds__termination__SCCs_14);
    }
#line 138 "termination.m"
    {
#line 138 "termination.m"
      mercury__list__foldl2_6_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__termination_scalar_common_1[1], (MR_Word) &transform_hlds__termination_scalar_common_2[1], transform_hlds__termination__SCCs_14, ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_24_24)), &transform_hlds__termination__conv3_STATE_VARIABLE_ModuleInfo_26_26, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__termination__conv2_STATE_VARIABLE_Specs_27_27);
    }
#line 138 "termination.m"
    transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26 = ((MR_Word) transform_hlds__termination__conv3_STATE_VARIABLE_ModuleInfo_26_26);
#line 138 "termination.m"
    transform_hlds__termination__STATE_VARIABLE_Specs_27_27 = ((MR_Word) transform_hlds__termination__conv2_STATE_VARIABLE_Specs_27_27);
#line 268 "termination.m"
    {
#line 268 "termination.m"
      mercury__list__foldl2_6_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__termination_scalar_common_1[1], (MR_Word) &transform_hlds__termination_scalar_common_2[2], transform_hlds__termination__SCCs_14, ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26)), &transform_hlds__termination__conv7_STATE_VARIABLE_ModuleInfo_28_28, ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_Specs_27_27)), &transform_hlds__termination__conv6_STATE_VARIABLE_Specs_29_29);
    }
#line 268 "termination.m"
    transform_hlds__termination__STATE_VARIABLE_ModuleInfo_28_28 = ((MR_Word) transform_hlds__termination__conv7_STATE_VARIABLE_ModuleInfo_28_28);
#line 268 "termination.m"
    transform_hlds__termination__STATE_VARIABLE_Specs_29_29 = ((MR_Word) transform_hlds__termination__conv6_STATE_VARIABLE_Specs_29_29);
#line 110 "termination.m"
    {
#line 110 "termination.m"
      transform_hlds__termination__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 110 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_30_30, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_4[0]));
#line 110 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_30_30, 1) = ((MR_Box) (transform_hlds__termination__analyse_termination_in_module_3_p_0_3));
#line 110 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 110 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_30_30, 3) = ((MR_Box) (transform_hlds__termination__PassInfo_11));
#line 110 "termination.m"
    }
#line 110 "termination.m"
    {
#line 110 "termination.m"
      mercury__list__foldl2_6_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__termination_scalar_common_1[1], transform_hlds__termination__V_30_30, transform_hlds__termination__SCCs_14, ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_28_28)), &transform_hlds__termination__conv11_STATE_VARIABLE_ModuleInfo_31_31, ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_Specs_29_29)), &transform_hlds__termination__conv10_STATE_VARIABLE_Specs_32_32);
    }
#line 110 "termination.m"
    transform_hlds__termination__STATE_VARIABLE_ModuleInfo_31_31 = ((MR_Word) transform_hlds__termination__conv11_STATE_VARIABLE_ModuleInfo_31_31);
#line 110 "termination.m"
    transform_hlds__termination__STATE_VARIABLE_Specs_32_32 = ((MR_Word) transform_hlds__termination__conv10_STATE_VARIABLE_Specs_32_32);
#line 112 "termination.m"
    {
#line 112 "termination.m"
      transform_hlds__post_term_analysis__run_post_term_analysis_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_31_31, &transform_hlds__termination__PostSpecs_15);
    }
#line 113 "termination.m"
    {
#line 113 "termination.m"
      *transform_hlds__termination__STATE_VARIABLE_Specs_20 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, transform_hlds__termination__PostSpecs_15, transform_hlds__termination__STATE_VARIABLE_Specs_32_32);
    }
#line 115 "termination.m"
    {
#line 115 "termination.m"
      hlds__hlds_module__module_info_get_proc_analysis_kinds_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_31_31, &transform_hlds__termination__ProcAnalysisKinds0_16);
    }
#line 116 "termination.m"
    {
#line 116 "termination.m"
      mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0, ((MR_Box) ((MR_Integer) 3)), transform_hlds__termination__ProcAnalysisKinds0_16, &transform_hlds__termination__ProcAnalysisKinds_17);
    }
#line 117 "termination.m"
    {
#line 117 "termination.m"
      hlds__hlds_module__module_info_set_proc_analysis_kinds_3_p_0(transform_hlds__termination__ProcAnalysisKinds_17, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_31_31, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_19);
#line 117 "termination.m"
      return;
    }
#line 83 "termination.m"
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
