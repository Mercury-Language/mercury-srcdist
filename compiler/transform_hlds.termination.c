/*
** Automatically generated from `termination.m'
** by the Mercury compiler,
** version rotd-2015-09-18
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

#line 551 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__551__1_1_p_0(
#line 551 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_49);

#line 524 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__524__1_2_p_0(
#line 524 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35,
#line 524 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_47);

#line 508 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__508__1_2_p_0(
#line 508 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35,
#line 508 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_41);

#line 402 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__402__1_1_p_0(
#line 402 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_59);

#line 368 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__368__1_2_p_0(
#line 368 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47,
#line 368 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_51);

#line 316 "termination.m"
static MR_Word MR_CALL 
transform_hlds__termination__IntroducedFrom__func__check_scc_pragmas_are_consistent__316__1_1_f_0(
#line 316 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_41);

#line 857 "termination.m"
static void MR_CALL 
transform_hlds__termination__change_procs_termination_info_5_p_0(
#line 857 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 857 "termination.m"
  MR_Word transform_hlds__termination__Override_2,
#line 857 "termination.m"
  MR_Word transform_hlds__termination__Termination_3,
#line 857 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4,
#line 857 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcTable_5);

#line 827 "termination.m"
static void MR_CALL 
transform_hlds__termination__change_procs_arg_size_info_5_p_0(
#line 827 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 827 "termination.m"
  MR_Word transform_hlds__termination__Override_2,
#line 827 "termination.m"
  MR_Word transform_hlds__termination__ArgSize_3,
#line 827 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4,
#line 827 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcTable_5);

#line 787 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_builtin_terminates_6_p_0(
#line 787 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 787 "termination.m"
  MR_Word transform_hlds__termination__PredId_2,
#line 787 "termination.m"
  MR_Word transform_hlds__termination__PredInfo_3,
#line 787 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_4,
#line 787 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0_5,
#line 787 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcTable_6);

#line 730 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_generated_terminates_4_p_0(
#line 730 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 730 "termination.m"
  MR_Word transform_hlds__termination__SpecialPredId_2,
#line 730 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0_3,
#line 730 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcTable_4);

#line 608 "termination.m"
static void MR_CALL 
transform_hlds__termination__check_preds_5_p_0(
#line 608 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 608 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2,
#line 608 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_3);

#line 580 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__is_solver_init_wrapper_pred_2_p_0(
#line 580 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_3,
#line 580 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_2);

#line 551 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__report_termination_errors_6_p_0_4(
#line 551 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 551 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 536 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__report_termination_errors_6_p_0_3(
#line 536 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 536 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 524 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__report_termination_errors_6_p_0_2(
#line 524 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 524 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 508 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__report_termination_errors_6_p_0_1(
#line 508 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 508 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 498 "termination.m"
static void MR_CALL 
transform_hlds__termination__report_termination_errors_6_p_0(
#line 498 "termination.m"
  MR_Word transform_hlds__termination__SCC_7,
#line 498 "termination.m"
  MR_Word transform_hlds__termination__Errors_8,
#line 498 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35,
#line 498 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_36);

#line 479 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_termination_infos_4_p_0(
#line 479 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 479 "termination.m"
  MR_Word transform_hlds__termination__TerminationInfo_2,
#line 479 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3,
#line 479 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4);

#line 459 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_infinite_arg_size_infos_4_p_0(
#line 459 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 459 "termination.m"
  MR_Word transform_hlds__termination__ArgSizeInfo_2,
#line 459 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3,
#line 459 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4);

#line 438 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_finite_arg_size_infos_4_p_0(
#line 438 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 438 "termination.m"
  MR_Word transform_hlds__termination__OutputSupplierMap_2,
#line 438 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3,
#line 438 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4);

#line 402 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0_3(
#line 402 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 402 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 393 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0_2(
#line 393 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 393 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 368 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0_1(
#line 368 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 368 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 364 "termination.m"
static void MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0(
#line 364 "termination.m"
  MR_Word transform_hlds__termination__PassInfo_7,
#line 364 "termination.m"
  MR_Word transform_hlds__termination__SCC_8,
#line 364 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47,
#line 364 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_48);

#line 333 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__check_procs_known_term_3_p_0(
#line 333 "termination.m"
  MR_Word transform_hlds__termination__Status_1,
#line 333 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_2,
#line 333 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_3);

#line 316 "termination.m"
static MR_Box MR_CALL 
transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0_2(
#line 316 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 316 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 283 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0_1(
#line 283 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 283 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 278 "termination.m"
static void MR_CALL 
transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0(
#line 278 "termination.m"
  MR_Word transform_hlds__termination__SCC_6,
#line 278 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26,
#line 278 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27,
#line 278 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_0_28,
#line 278 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_Specs_29);

#line 174 "termination.m"
static void MR_CALL 
transform_hlds__termination__check_foreign_code_attributes_of_proc_7_p_0(
#line 174 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_8,
#line 174 "termination.m"
  MR_Word transform_hlds__termination__PPId_9,
#line 174 "termination.m"
  MR_Word transform_hlds__termination__Attributes_10,
#line 174 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25,
#line 174 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcInfo_26,
#line 174 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_0_27,
#line 174 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_Specs_28);

#line 146 "termination.m"
static void MR_CALL 
transform_hlds__termination__check_foreign_code_attributes_in_scc_5_p_0(
#line 146 "termination.m"
  MR_Word transform_hlds__termination__PPIds_6,
#line 146 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26,
#line 146 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27,
#line 146 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_0_28,
#line 146 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_Specs_29);

#line 110 "termination.m"
static void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_5_p_0_3(
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

#line 276 "termination.m"
static void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_5_p_0_2(
#line 276 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 276 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1,
#line 276 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_2,
#line 276 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_3,
#line 276 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_4,
#line 276 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_5);

#line 143 "termination.m"
static void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_5_p_0_1(
#line 143 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 143 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1,
#line 143 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_2,
#line 143 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_3,
#line 143 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_4,
#line 143 "termination.m"
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
    ((MR_Box) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0))
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
    ((MR_Box) (transform_hlds__termination__analyse_termination_in_module_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__termination_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__termination__analyse_termination_in_module_5_p_0_2)),
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
    ((MR_Box) (transform_hlds__termination__report_termination_errors_6_p_0_4)),
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
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
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
    ((MR_Box) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 827 "transform_hlds.termination.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__termination__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 835 "transform_hlds.termination.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__termination__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 551 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__551__1_1_p_0(
#line 551 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_49)
#line 551 "termination.m"
{
#line 551 "termination.m"
  {
#line 551 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 551 "termination.m"
    MR_Word transform_hlds__termination__Error_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__HeadVar__1_49, (MR_Integer) 0)));
#line 551 "termination.m"
    MR_Word transform_hlds__termination__V_50_50;
#line 552 "termination.m"
    MR_Word transform_hlds__termination___Context_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__HeadVar__1_49, (MR_Integer) 1)));

#line 553 "termination.m"
    {
#line 553 "termination.m"
      transform_hlds__termination__V_50_50 = transform_hlds__term_errors__is_indirect_error_1_f_0(transform_hlds__termination__Error_30);
    }
#line 553 "termination.m"
    transform_hlds__termination__succeeded = (transform_hlds__termination__V_50_50 == (MR_Integer) 0);
#line 551 "termination.m"
    return transform_hlds__termination__succeeded;
#line 551 "termination.m"
  }
#line 551 "termination.m"
}

#line 524 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__524__1_2_p_0(
#line 524 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35,
#line 524 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_47)
#line 524 "termination.m"
{
#line 524 "termination.m"
  {
#line 524 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 524 "termination.m"
    MR_Word transform_hlds__termination__PredInfo_54;
#line 525 "termination.m"
    MR_Word transform_hlds__termination__V_23_23;

#line 525 "termination.m"
    {
#line 525 "termination.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35, transform_hlds__termination__HeadVar__2_47, &transform_hlds__termination__PredInfo_54, &transform_hlds__termination__V_23_23);
    }
#line 526 "termination.m"
    {
#line 526 "termination.m"
      transform_hlds__termination__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(transform_hlds__termination__PredInfo_54);
    }
#line 526 "termination.m"
    transform_hlds__termination__succeeded = !(transform_hlds__termination__succeeded);
#line 524 "termination.m"
    return transform_hlds__termination__succeeded;
#line 524 "termination.m"
  }
#line 524 "termination.m"
}

#line 508 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__508__1_2_p_0(
#line 508 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35,
#line 508 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_41)
#line 508 "termination.m"
{
#line 508 "termination.m"
  {
#line 508 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 508 "termination.m"
    MR_Word transform_hlds__termination__PredInfo_16;
#line 508 "termination.m"
    MR_Word transform_hlds__termination__Markers_18;
#line 508 "termination.m"
    MR_Word transform_hlds__termination__V_42_42;
#line 510 "termination.m"
    MR_Word transform_hlds__termination__V_17_17;

#line 510 "termination.m"
    {
#line 510 "termination.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35, transform_hlds__termination__HeadVar__2_41, &transform_hlds__termination__PredInfo_16, &transform_hlds__termination__V_17_17);
    }
#line 511 "termination.m"
    {
#line 511 "termination.m"
      transform_hlds__termination__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(transform_hlds__termination__PredInfo_16);
    }
#line 511 "termination.m"
    transform_hlds__termination__succeeded = !(transform_hlds__termination__succeeded);
#line 508 "termination.m"
    if (transform_hlds__termination__succeeded)
#line 508 "termination.m"
      {
#line 512 "termination.m"
        {
#line 512 "termination.m"
          hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__termination__PredInfo_16, &transform_hlds__termination__Markers_18);
        }
#line 513 "termination.m"
        transform_hlds__termination__V_42_42 = (MR_Integer) 19;
#line 513 "termination.m"
        {
#line 513 "termination.m"
          return transform_hlds__termination__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__termination__Markers_18, transform_hlds__termination__V_42_42);
        }
#line 508 "termination.m"
      }
#line 508 "termination.m"
    return transform_hlds__termination__succeeded;
#line 508 "termination.m"
  }
#line 508 "termination.m"
}

#line 402 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__402__1_1_p_0(
#line 402 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_59)
#line 402 "termination.m"
{
#line 402 "termination.m"
  {
#line 402 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 402 "termination.m"
    MR_Word transform_hlds__termination__Error_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__HeadVar__1_59, (MR_Integer) 0)));
#line 402 "termination.m"
    MR_Word transform_hlds__termination__V_60_60;
#line 403 "termination.m"
    MR_Word transform_hlds__termination__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__HeadVar__1_59, (MR_Integer) 1)));

#line 404 "termination.m"
    {
#line 404 "termination.m"
      transform_hlds__termination__V_60_60 = transform_hlds__term_errors__is_fatal_error_1_f_0(transform_hlds__termination__Error_32);
    }
#line 404 "termination.m"
    transform_hlds__termination__succeeded = (transform_hlds__termination__V_60_60 == (MR_Integer) 1);
#line 402 "termination.m"
    return transform_hlds__termination__succeeded;
#line 402 "termination.m"
  }
#line 402 "termination.m"
}

#line 368 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__368__1_2_p_0(
#line 368 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47,
#line 368 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_51)
#line 368 "termination.m"
{
#line 368 "termination.m"
  {
#line 368 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 368 "termination.m"
    MR_Word transform_hlds__termination__ProcInfo_14;
#line 368 "termination.m"
    MR_Word transform_hlds__termination__V_72_72;
#line 369 "termination.m"
    MR_Word transform_hlds__termination__V_13_13;
#line 370 "termination.m"
    MR_Word transform_hlds__termination__V_77_77;

#line 369 "termination.m"
    {
#line 369 "termination.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47, transform_hlds__termination__HeadVar__2_51, &transform_hlds__termination__V_13_13, &transform_hlds__termination__ProcInfo_14);
    }
#line 370 "termination.m"
    {
#line 370 "termination.m"
      hlds__hlds_pred__proc_info_get_maybe_arg_size_info_2_p_0(transform_hlds__termination__ProcInfo_14, &transform_hlds__termination__V_72_72);
    }
#line 370 "termination.m"
    transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__V_72_72)) == (MR_mktag((MR_Integer) 1)));
#line 370 "termination.m"
    if (transform_hlds__termination__succeeded)
#line 370 "termination.m"
      transform_hlds__termination__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__V_72_72, (MR_Integer) 0)));
#line 368 "termination.m"
    return transform_hlds__termination__succeeded;
#line 368 "termination.m"
  }
#line 368 "termination.m"
}

#line 316 "termination.m"
static MR_Word MR_CALL 
transform_hlds__termination__IntroducedFrom__func__check_scc_pragmas_are_consistent__316__1_1_f_0(
#line 316 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_41)
#line 316 "termination.m"
{
#line 316 "termination.m"
  {
#line 316 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 316 "termination.m"
    MR_Word transform_hlds__termination__HeadVar__2_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__HeadVar__1_41, (MR_Integer) 0)));
#line 316 "termination.m"
    MR_Integer transform_hlds__termination__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__HeadVar__1_41, (MR_Integer) 1)));

#line 316 "termination.m"
    return transform_hlds__termination__HeadVar__2_42;
#line 316 "termination.m"
  }
#line 316 "termination.m"
}

#line 857 "termination.m"
static void MR_CALL 
transform_hlds__termination__change_procs_termination_info_5_p_0(
#line 857 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 857 "termination.m"
  MR_Word transform_hlds__termination__Override_2,
#line 857 "termination.m"
  MR_Word transform_hlds__termination__Termination_3,
#line 857 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4,
#line 857 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcTable_5)
#line 857 "termination.m"
{
#line 860 "termination.m"
  while (MR_TRUE)
#line 860 "termination.m"
    {
#line 860 "termination.m"
      /* tailcall optimized into a loop */
#line 860 "termination.m"
      {
#line 860 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 860 "termination.m"
        if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 860 "termination.m"
          *transform_hlds__termination__STATE_VARIABLE_ProcTable_5 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4;
#line 860 "termination.m"
        else
#line 862 "termination.m"
          {
#line 862 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_25_25 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 862 "termination.m"
            MR_Integer transform_hlds__termination__ProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));
#line 862 "termination.m"
            MR_Word transform_hlds__termination__ProcIds_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
#line 862 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo0_16;
#line 862 "termination.m"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22;
#line 863 "termination.m"
            MR_Box transform_hlds__termination__conv0_ProcInfo0_16;

#line 863 "termination.m"
            {
#line 863 "termination.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__termination__TypeCtorInfo_25_25, transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4, transform_hlds__termination__ProcId_11, &transform_hlds__termination__conv0_ProcInfo0_16);
            }
#line 863 "termination.m"
            transform_hlds__termination__ProcInfo0_16 = ((MR_Word) transform_hlds__termination__conv0_ProcInfo0_16);
#line 866 "termination.m"
            transform_hlds__termination__succeeded = (transform_hlds__termination__Override_2 == (MR_Integer) 1);
#line 867 "termination.m"
            if (!(transform_hlds__termination__succeeded))
#line 868 "termination.m"
              {
#line 868 "termination.m"
                MR_Word transform_hlds__termination__V_26_26;

#line 868 "termination.m"
                {
#line 868 "termination.m"
                  hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__termination__ProcInfo0_16, &transform_hlds__termination__V_26_26);
                }
#line 868 "termination.m"
                {
#line 868 "termination.m"
                  transform_hlds__termination__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[35], ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (transform_hlds__termination__V_26_26)));
                }
#line 868 "termination.m"
              }
#line 875 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 873 "termination.m"
              {
#line 873 "termination.m"
                MR_Word transform_hlds__termination__ProcInfo_17;
#line 873 "termination.m"
                MR_Word transform_hlds__termination__V_21_21;

#line 872 "termination.m"
                {
#line 872 "termination.m"
                  transform_hlds__termination__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 872 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__V_21_21, 0) = ((MR_Box) (transform_hlds__termination__Termination_3));
#line 872 "termination.m"
                }
#line 872 "termination.m"
                {
#line 872 "termination.m"
                  hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(transform_hlds__termination__V_21_21, transform_hlds__termination__ProcInfo0_16, &transform_hlds__termination__ProcInfo_17);
                }
#line 874 "termination.m"
                {
#line 874 "termination.m"
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__termination__TypeCtorInfo_25_25, transform_hlds__termination__ProcId_11, ((MR_Box) (transform_hlds__termination__ProcInfo_17)), transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4, &transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22);
                }
#line 873 "termination.m"
              }
#line 875 "termination.m"
            else
#line 875 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4;
#line 878 "termination.m"
            /* direct tailcall eliminated */
#line 878 "termination.m"
            {
#line 878 "termination.m"
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__ProcIds_12;
#line 878 "termination.m"
              MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_4 = transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22;

#line 878 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_4;
#line 878 "termination.m"
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
#line 878 "termination.m"
            }
#line 878 "termination.m"
            continue;
#line 862 "termination.m"
          }
#line 860 "termination.m"
      }
#line 860 "termination.m"
      break;
#line 860 "termination.m"
    }
#line 857 "termination.m"
}

#line 827 "termination.m"
static void MR_CALL 
transform_hlds__termination__change_procs_arg_size_info_5_p_0(
#line 827 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 827 "termination.m"
  MR_Word transform_hlds__termination__Override_2,
#line 827 "termination.m"
  MR_Word transform_hlds__termination__ArgSize_3,
#line 827 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4,
#line 827 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcTable_5)
#line 827 "termination.m"
{
#line 830 "termination.m"
  while (MR_TRUE)
#line 830 "termination.m"
    {
#line 830 "termination.m"
      /* tailcall optimized into a loop */
#line 830 "termination.m"
      {
#line 830 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 830 "termination.m"
        if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 830 "termination.m"
          *transform_hlds__termination__STATE_VARIABLE_ProcTable_5 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4;
#line 830 "termination.m"
        else
#line 832 "termination.m"
          {
#line 832 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_25_25 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 832 "termination.m"
            MR_Integer transform_hlds__termination__ProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));
#line 832 "termination.m"
            MR_Word transform_hlds__termination__ProcIds_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
#line 832 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo0_16;
#line 832 "termination.m"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22;
#line 833 "termination.m"
            MR_Box transform_hlds__termination__conv0_ProcInfo0_16;

#line 833 "termination.m"
            {
#line 833 "termination.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__termination__TypeCtorInfo_25_25, transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4, transform_hlds__termination__ProcId_11, &transform_hlds__termination__conv0_ProcInfo0_16);
            }
#line 833 "termination.m"
            transform_hlds__termination__ProcInfo0_16 = ((MR_Word) transform_hlds__termination__conv0_ProcInfo0_16);
#line 835 "termination.m"
            transform_hlds__termination__succeeded = (transform_hlds__termination__Override_2 == (MR_Integer) 1);
#line 836 "termination.m"
            if (!(transform_hlds__termination__succeeded))
#line 836 "termination.m"
              {
#line 836 "termination.m"
                MR_Word transform_hlds__termination__V_26_26;

#line 836 "termination.m"
                {
#line 836 "termination.m"
                  hlds__hlds_pred__proc_info_get_maybe_arg_size_info_2_p_0(transform_hlds__termination__ProcInfo0_16, &transform_hlds__termination__V_26_26);
                }
#line 836 "termination.m"
                {
#line 836 "termination.m"
                  transform_hlds__termination__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[34], ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (transform_hlds__termination__V_26_26)));
                }
#line 836 "termination.m"
              }
#line 841 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 839 "termination.m"
              {
#line 839 "termination.m"
                MR_Word transform_hlds__termination__ProcInfo_17;
#line 839 "termination.m"
                MR_Word transform_hlds__termination__V_21_21;

#line 839 "termination.m"
                {
#line 839 "termination.m"
                  transform_hlds__termination__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 839 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__V_21_21, 0) = ((MR_Box) (transform_hlds__termination__ArgSize_3));
#line 839 "termination.m"
                }
#line 839 "termination.m"
                {
#line 839 "termination.m"
                  hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_p_0(transform_hlds__termination__V_21_21, transform_hlds__termination__ProcInfo0_16, &transform_hlds__termination__ProcInfo_17);
                }
#line 840 "termination.m"
                {
#line 840 "termination.m"
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__termination__TypeCtorInfo_25_25, transform_hlds__termination__ProcId_11, ((MR_Box) (transform_hlds__termination__ProcInfo_17)), transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4, &transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22);
                }
#line 839 "termination.m"
              }
#line 841 "termination.m"
            else
#line 841 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4;
#line 844 "termination.m"
            /* direct tailcall eliminated */
#line 844 "termination.m"
            {
#line 844 "termination.m"
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__ProcIds_12;
#line 844 "termination.m"
              MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_4 = transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22;

#line 844 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_4;
#line 844 "termination.m"
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
#line 844 "termination.m"
            }
#line 844 "termination.m"
            continue;
#line 832 "termination.m"
          }
#line 830 "termination.m"
      }
#line 830 "termination.m"
      break;
#line 830 "termination.m"
    }
#line 827 "termination.m"
}

#line 787 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_builtin_terminates_6_p_0(
#line 787 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 787 "termination.m"
  MR_Word transform_hlds__termination__PredId_2,
#line 787 "termination.m"
  MR_Word transform_hlds__termination__PredInfo_3,
#line 787 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_4,
#line 787 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0_5,
#line 787 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcTable_6)
#line 787 "termination.m"
{
#line 790 "termination.m"
  while (MR_TRUE)
#line 790 "termination.m"
    {
#line 790 "termination.m"
      /* tailcall optimized into a loop */
#line 790 "termination.m"
      {
#line 790 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 790 "termination.m"
        if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 790 "termination.m"
          *transform_hlds__termination__STATE_VARIABLE_ProcTable_6 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0_5;
#line 790 "termination.m"
        else
#line 792 "termination.m"
          {
#line 792 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_42_42 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 792 "termination.m"
            MR_Integer transform_hlds__termination__ProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));
#line 792 "termination.m"
            MR_Word transform_hlds__termination__ProcIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
#line 792 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo0_19;
#line 792 "termination.m"
            MR_Word transform_hlds__termination__ArgSizeInfo_22;
#line 792 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo1_26;
#line 792 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo_27;
#line 792 "termination.m"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_39_39;
#line 793 "termination.m"
            MR_Box transform_hlds__termination__conv0_ProcInfo0_19;

#line 793 "termination.m"
            {
#line 793 "termination.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__termination__TypeCtorInfo_42_42, transform_hlds__termination__STATE_VARIABLE_ProcTable_0_5, transform_hlds__termination__ProcId_13, &transform_hlds__termination__conv0_ProcInfo0_19);
            }
#line 793 "termination.m"
            transform_hlds__termination__ProcInfo0_19 = ((MR_Word) transform_hlds__termination__conv0_ProcInfo0_19);
#line 794 "termination.m"
            {
#line 794 "termination.m"
              transform_hlds__termination__succeeded = transform_hlds__term_util__all_args_input_or_zero_size_3_p_0(transform_hlds__termination__ModuleInfo_4, transform_hlds__termination__PredInfo_3, transform_hlds__termination__ProcInfo0_19);
            }
#line 801 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 798 "termination.m"
              {
#line 798 "termination.m"
                MR_Word transform_hlds__termination__HeadVars_20;
#line 798 "termination.m"
                MR_Word transform_hlds__termination__UsedArgs_21;
#line 798 "termination.m"
                MR_Word transform_hlds__termination__V_31_31;

#line 798 "termination.m"
                {
#line 798 "termination.m"
                  hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__termination__ProcInfo0_19, &transform_hlds__termination__HeadVars_20);
                }
#line 799 "termination.m"
                {
#line 799 "termination.m"
                  transform_hlds__term_util__make_bool_list_3_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[3], transform_hlds__termination__HeadVars_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__termination__UsedArgs_21);
                }
#line 800 "termination.m"
                {
#line 800 "termination.m"
                  transform_hlds__termination__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 800 "termination.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__termination__V_31_31, 0) = ((MR_Box) ((MR_Integer) 0));
#line 800 "termination.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__termination__V_31_31, 1) = ((MR_Box) (transform_hlds__termination__UsedArgs_21));
#line 800 "termination.m"
                }
#line 800 "termination.m"
                {
#line 800 "termination.m"
                  transform_hlds__termination__ArgSizeInfo_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 800 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__ArgSizeInfo_22, 0) = ((MR_Box) (transform_hlds__termination__V_31_31));
#line 800 "termination.m"
                }
#line 798 "termination.m"
              }
#line 801 "termination.m"
            else
#line 802 "termination.m"
              {
#line 802 "termination.m"
                MR_Word transform_hlds__termination__Context_23;
#line 802 "termination.m"
                MR_Word transform_hlds__termination__Error_24;
#line 802 "termination.m"
                MR_Word transform_hlds__termination__ArgSizeError_25;
#line 802 "termination.m"
                MR_Word transform_hlds__termination__V_33_33;
#line 802 "termination.m"
                MR_Word transform_hlds__termination__V_34_34;

#line 802 "termination.m"
                {
#line 802 "termination.m"
                  hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__termination__PredInfo_3, &transform_hlds__termination__Context_23);
                }
#line 803 "termination.m"
                {
#line 803 "termination.m"
                  transform_hlds__termination__Error_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 803 "termination.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__termination__Error_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 803 "termination.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__termination__Error_24, 1) = ((MR_Box) (transform_hlds__termination__PredId_2));
#line 803 "termination.m"
                }
#line 804 "termination.m"
                {
#line 804 "termination.m"
                  transform_hlds__termination__ArgSizeError_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 804 "termination.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeError_25, 0) = ((MR_Box) (transform_hlds__termination__Error_24));
#line 804 "termination.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeError_25, 1) = ((MR_Box) (transform_hlds__termination__Context_23));
#line 804 "termination.m"
                }
#line 805 "termination.m"
                {
#line 805 "termination.m"
                  transform_hlds__termination__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 805 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__V_34_34, 0) = ((MR_Box) (transform_hlds__termination__ArgSizeError_25));
#line 805 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 805 "termination.m"
                }
#line 805 "termination.m"
                {
#line 805 "termination.m"
                  transform_hlds__termination__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 805 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__V_33_33, 0) = ((MR_Box) (transform_hlds__termination__V_34_34));
#line 805 "termination.m"
                }
#line 805 "termination.m"
                {
#line 805 "termination.m"
                  transform_hlds__termination__ArgSizeInfo_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 805 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__ArgSizeInfo_22, 0) = ((MR_Box) (transform_hlds__termination__V_33_33));
#line 805 "termination.m"
                }
#line 802 "termination.m"
              }
#line 808 "termination.m"
            {
#line 808 "termination.m"
              hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_p_0(transform_hlds__termination__ArgSizeInfo_22, transform_hlds__termination__ProcInfo0_19, &transform_hlds__termination__ProcInfo1_26);
            }
#line 809 "termination.m"
            mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 809 "termination.m"
            {
#line 809 "termination.m"
              hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_5[1]), transform_hlds__termination__ProcInfo1_26, &transform_hlds__termination__ProcInfo_27);
            }
#line 811 "termination.m"
            {
#line 811 "termination.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__termination__TypeCtorInfo_42_42, transform_hlds__termination__ProcId_13, ((MR_Box) (transform_hlds__termination__ProcInfo_27)), transform_hlds__termination__STATE_VARIABLE_ProcTable_0_5, &transform_hlds__termination__STATE_VARIABLE_ProcTable_39_39);
            }
#line 812 "termination.m"
            /* direct tailcall eliminated */
#line 812 "termination.m"
            {
#line 812 "termination.m"
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__ProcIds_14;
#line 812 "termination.m"
              MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_5 = transform_hlds__termination__STATE_VARIABLE_ProcTable_39_39;

#line 812 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ProcTable_0_5 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_5;
#line 812 "termination.m"
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
#line 812 "termination.m"
            }
#line 812 "termination.m"
            continue;
#line 792 "termination.m"
          }
#line 790 "termination.m"
      }
#line 790 "termination.m"
      break;
#line 790 "termination.m"
    }
#line 787 "termination.m"
}

#line 730 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_generated_terminates_4_p_0(
#line 730 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 730 "termination.m"
  MR_Word transform_hlds__termination__SpecialPredId_2,
#line 730 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0_3,
#line 730 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcTable_4)
#line 730 "termination.m"
{
#line 733 "termination.m"
  while (MR_TRUE)
#line 733 "termination.m"
    {
#line 733 "termination.m"
      /* tailcall optimized into a loop */
#line 733 "termination.m"
      {
#line 733 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 733 "termination.m"
        if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 733 "termination.m"
          *transform_hlds__termination__STATE_VARIABLE_ProcTable_4 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0_3;
#line 733 "termination.m"
        else
#line 734 "termination.m"
          {
#line 734 "termination.m"
            MR_Integer transform_hlds__termination__ProcId_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));
#line 734 "termination.m"
            MR_Word transform_hlds__termination__ProcIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
#line 734 "termination.m"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_23_23;

#line 748 "termination.m"
#line 748 "termination.m"
            switch (transform_hlds__termination__SpecialPredId_2) {
#line 748 "termination.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 748 "termination.m"
              case (MR_Integer) 2:
#line 748 "termination.m"
              case (MR_Integer) 1:
#line 748 "termination.m"
              case (MR_Integer) 0:
#line 739 "termination.m"
                {
#line 739 "termination.m"
                  MR_Word transform_hlds__termination__TypeCtorInfo_26_26 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 739 "termination.m"
                  MR_Word transform_hlds__termination__ProcInfo0_13;
#line 739 "termination.m"
                  MR_Word transform_hlds__termination__HeadVars_14;
#line 739 "termination.m"
                  MR_Word transform_hlds__termination__ArgSize_15;
#line 739 "termination.m"
                  MR_Word transform_hlds__termination__Termination_16;
#line 739 "termination.m"
                  MR_Word transform_hlds__termination__ProcInfo1_17;
#line 739 "termination.m"
                  MR_Word transform_hlds__termination__ProcInfo_18;
#line 739 "termination.m"
                  MR_Word transform_hlds__termination__V_21_21;
#line 739 "termination.m"
                  MR_Word transform_hlds__termination__V_22_22;
#line 740 "termination.m"
                  MR_Box transform_hlds__termination__conv0_ProcInfo0_13;

#line 740 "termination.m"
                  {
#line 740 "termination.m"
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__termination__TypeCtorInfo_26_26, transform_hlds__termination__STATE_VARIABLE_ProcTable_0_3, transform_hlds__termination__ProcId_9, &transform_hlds__termination__conv0_ProcInfo0_13);
                  }
#line 740 "termination.m"
                  transform_hlds__termination__ProcInfo0_13 = ((MR_Word) transform_hlds__termination__conv0_ProcInfo0_13);
#line 741 "termination.m"
                  {
#line 741 "termination.m"
                    hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__termination__ProcInfo0_13, &transform_hlds__termination__HeadVars_14);
                  }
#line 765 "termination.m"
#line 765 "termination.m"
                  switch (transform_hlds__termination__SpecialPredId_2) {
#line 765 "termination.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 765 "termination.m"
                    case (MR_Integer) 2:
#line 765 "termination.m"
                      {
#line 765 "termination.m"
                        MR_Word transform_hlds__termination__OutList_31;

#line 766 "termination.m"
                        {
#line 766 "termination.m"
                          transform_hlds__term_util__make_bool_list_3_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[3], transform_hlds__termination__HeadVars_14, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[31]), &transform_hlds__termination__OutList_31);
                        }
#line 767 "termination.m"
                        {
#line 767 "termination.m"
                          transform_hlds__termination__ArgSize_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 767 "termination.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSize_15, 0) = ((MR_Box) ((MR_Integer) 0));
#line 767 "termination.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSize_15, 1) = ((MR_Box) (transform_hlds__termination__OutList_31));
#line 767 "termination.m"
                        }
#line 768 "termination.m"
                        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 768 "termination.m"
                        transform_hlds__termination__Termination_16 = (MR_Word) &transform_hlds__termination_scalar_common_5[0];
#line 765 "termination.m"
                      }
#line 765 "termination.m"
                      break;
#line 765 "termination.m"
                    case (MR_Integer) 1:
#line 775 "termination.m"
                      {
#line 775 "termination.m"
                        MR_Word transform_hlds__termination__OutList_59;

#line 776 "termination.m"
                        {
#line 776 "termination.m"
                          transform_hlds__term_util__make_bool_list_3_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[3], transform_hlds__termination__HeadVars_14, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[30]), &transform_hlds__termination__OutList_59);
                        }
#line 777 "termination.m"
                        {
#line 777 "termination.m"
                          transform_hlds__termination__ArgSize_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 777 "termination.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSize_15, 0) = ((MR_Box) ((MR_Integer) 0));
#line 777 "termination.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSize_15, 1) = ((MR_Box) (transform_hlds__termination__OutList_59));
#line 777 "termination.m"
                        }
#line 778 "termination.m"
                        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 778 "termination.m"
                        transform_hlds__termination__Termination_16 = (MR_Word) &transform_hlds__termination_scalar_common_5[0];
#line 775 "termination.m"
                      }
#line 765 "termination.m"
                      break;
#line 765 "termination.m"
                    case (MR_Integer) 0:
#line 770 "termination.m"
                      {
#line 770 "termination.m"
                        MR_Word transform_hlds__termination__OutList_58;

#line 771 "termination.m"
                        {
#line 771 "termination.m"
                          transform_hlds__term_util__make_bool_list_3_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[3], transform_hlds__termination__HeadVars_14, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[33]), &transform_hlds__termination__OutList_58);
                        }
#line 772 "termination.m"
                        {
#line 772 "termination.m"
                          transform_hlds__termination__ArgSize_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 772 "termination.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSize_15, 0) = ((MR_Box) ((MR_Integer) 0));
#line 772 "termination.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSize_15, 1) = ((MR_Box) (transform_hlds__termination__OutList_58));
#line 772 "termination.m"
                        }
#line 773 "termination.m"
                        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 773 "termination.m"
                        transform_hlds__termination__Termination_16 = (MR_Word) &transform_hlds__termination_scalar_common_5[0];
#line 770 "termination.m"
                      }
#line 765 "termination.m"
                      break;
#line 765 "termination.m"
                  }
#line 744 "termination.m"
                  {
#line 744 "termination.m"
                    transform_hlds__termination__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 744 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_21_21, 0) = ((MR_Box) (transform_hlds__termination__ArgSize_15));
#line 744 "termination.m"
                  }
#line 744 "termination.m"
                  {
#line 744 "termination.m"
                    hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_p_0(transform_hlds__termination__V_21_21, transform_hlds__termination__ProcInfo0_13, &transform_hlds__termination__ProcInfo1_17);
                  }
#line 745 "termination.m"
                  {
#line 745 "termination.m"
                    transform_hlds__termination__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 745 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_22_22, 0) = ((MR_Box) (transform_hlds__termination__Termination_16));
#line 745 "termination.m"
                  }
#line 745 "termination.m"
                  {
#line 745 "termination.m"
                    hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(transform_hlds__termination__V_22_22, transform_hlds__termination__ProcInfo1_17, &transform_hlds__termination__ProcInfo_18);
                  }
#line 747 "termination.m"
                  {
#line 747 "termination.m"
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__termination__TypeCtorInfo_26_26, transform_hlds__termination__ProcId_9, ((MR_Box) (transform_hlds__termination__ProcInfo_18)), transform_hlds__termination__STATE_VARIABLE_ProcTable_0_3, &transform_hlds__termination__STATE_VARIABLE_ProcTable_23_23);
                  }
#line 739 "termination.m"
                }
#line 748 "termination.m"
                break;
#line 748 "termination.m"
              case (MR_Integer) 3:
#line 749 "termination.m"
                transform_hlds__termination__STATE_VARIABLE_ProcTable_23_23 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0_3;
#line 748 "termination.m"
                break;
#line 748 "termination.m"
            }
#line 754 "termination.m"
            /* direct tailcall eliminated */
#line 754 "termination.m"
            {
#line 754 "termination.m"
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__ProcIds_10;
#line 754 "termination.m"
              MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_3 = transform_hlds__termination__STATE_VARIABLE_ProcTable_23_23;

#line 754 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ProcTable_0_3 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_3;
#line 754 "termination.m"
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
#line 754 "termination.m"
            }
#line 754 "termination.m"
            continue;
#line 734 "termination.m"
          }
#line 733 "termination.m"
      }
#line 733 "termination.m"
      break;
#line 733 "termination.m"
    }
#line 730 "termination.m"
}

#line 608 "termination.m"
static void MR_CALL 
transform_hlds__termination__check_preds_5_p_0(
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
            MR_Word transform_hlds__termination__TypeCtorInfo_71_71;
#line 612 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_72_72;
#line 612 "termination.m"
            MR_Word transform_hlds__termination__PredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));
#line 612 "termination.m"
            MR_Word transform_hlds__termination__PredIds_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
#line 612 "termination.m"
            MR_Word transform_hlds__termination__Globals_16;
#line 612 "termination.m"
            MR_Word transform_hlds__termination__MakeOptInt_17;
#line 612 "termination.m"
            MR_Word transform_hlds__termination__PredTable0_18;
#line 612 "termination.m"
            MR_Word transform_hlds__termination__PredInfo0_19;
#line 612 "termination.m"
            MR_Word transform_hlds__termination__PredStatus_20;
#line 612 "termination.m"
            MR_Word transform_hlds__termination__Context_21;
#line 612 "termination.m"
            MR_Word transform_hlds__termination__ProcTable0_22;
#line 612 "termination.m"
            MR_Word transform_hlds__termination__Markers_23;
#line 612 "termination.m"
            MR_Word transform_hlds__termination__ProcIds_24;
#line 612 "termination.m"
            MR_Word transform_hlds__termination__ProcTable2_26;
#line 612 "termination.m"
            MR_Word transform_hlds__termination__ProcTable_33;
#line 612 "termination.m"
            MR_Word transform_hlds__termination__PredInfo_34;
#line 612 "termination.m"
            MR_Word transform_hlds__termination__PredTable_35;
#line 612 "termination.m"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_66_66;
#line 619 "termination.m"
            MR_Box transform_hlds__termination__conv0_PredInfo0_19;
#line 633 "termination.m"
            MR_Word transform_hlds__termination__ProcTable1_25;

#line 613 "termination.m"
            {
#line 613 "termination.m"
              hlds__passes_aux__write_pred_progress_message_5_p_0((MR_String) "% Checking termination of ", transform_hlds__termination__PredId_12, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2);
            }
#line 615 "termination.m"
            {
#line 615 "termination.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2, &transform_hlds__termination__Globals_16);
            }
#line 616 "termination.m"
            {
#line 616 "termination.m"
              libs__globals__lookup_bool_option_3_p_0(transform_hlds__termination__Globals_16, (MR_Integer) 87, &transform_hlds__termination__MakeOptInt_17);
            }
#line 618 "termination.m"
            {
#line 618 "termination.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2, &transform_hlds__termination__PredTable0_18);
            }
#line 1908 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_71_71 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 1910 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_72_72 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 619 "termination.m"
            {
#line 619 "termination.m"
              mercury__map__lookup_3_p_0(transform_hlds__termination__TypeCtorInfo_71_71, transform_hlds__termination__TypeCtorInfo_72_72, transform_hlds__termination__PredTable0_18, ((MR_Box) (transform_hlds__termination__PredId_12)), &transform_hlds__termination__conv0_PredInfo0_19);
            }
#line 619 "termination.m"
            transform_hlds__termination__PredInfo0_19 = ((MR_Word) transform_hlds__termination__conv0_PredInfo0_19);
#line 620 "termination.m"
            {
#line 620 "termination.m"
              hlds__hlds_pred__pred_info_get_status_2_p_0(transform_hlds__termination__PredInfo0_19, &transform_hlds__termination__PredStatus_20);
            }
#line 621 "termination.m"
            {
#line 621 "termination.m"
              hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__termination__PredInfo0_19, &transform_hlds__termination__Context_21);
            }
#line 622 "termination.m"
            {
#line 622 "termination.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__termination__PredInfo0_19, &transform_hlds__termination__ProcTable0_22);
            }
#line 623 "termination.m"
            {
#line 623 "termination.m"
              hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__termination__PredInfo0_19, &transform_hlds__termination__Markers_23);
            }
#line 624 "termination.m"
            {
#line 624 "termination.m"
              transform_hlds__termination__ProcIds_24 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__termination__PredInfo0_19);
            }
#line 707 "termination.m"
            {
#line 707 "termination.m"
              transform_hlds__termination__succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(transform_hlds__termination__PredInfo0_19);
            }
#line 711 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 709 "termination.m"
              {
#line 709 "termination.m"
                {
#line 709 "termination.m"
                  transform_hlds__termination__set_builtin_terminates_6_p_0(transform_hlds__termination__ProcIds_24, transform_hlds__termination__PredId_12, transform_hlds__termination__PredInfo0_19, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2, transform_hlds__termination__ProcTable0_22, &transform_hlds__termination__ProcTable1_25);
                }
#line 709 "termination.m"
                transform_hlds__termination__succeeded = MR_TRUE;
#line 709 "termination.m"
              }
#line 711 "termination.m"
            else
#line 726 "termination.m"
              {
#line 726 "termination.m"
                MR_Word transform_hlds__termination__SpecialPredId_85;
#line 720 "termination.m"
                MR_Word transform_hlds__termination__SpecPredId0_83;
#line 713 "termination.m"
                MR_Word transform_hlds__termination__ModuleName_80;
#line 713 "termination.m"
                MR_String transform_hlds__termination__Name_81;
#line 713 "termination.m"
                MR_Integer transform_hlds__termination__Arity_82;
#line 713 "termination.m"
                MR_Integer transform_hlds__termination__V_90_90;
#line 716 "termination.m"
                MR_String transform_hlds__termination__V_84_84;

#line 713 "termination.m"
                {
#line 713 "termination.m"
                  transform_hlds__termination__ModuleName_80 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__termination__PredInfo0_19);
                }
#line 714 "termination.m"
                {
#line 714 "termination.m"
                  transform_hlds__termination__Name_81 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__termination__PredInfo0_19);
                }
#line 715 "termination.m"
                {
#line 715 "termination.m"
                  transform_hlds__termination__Arity_82 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__termination__PredInfo0_19);
                }
#line 716 "termination.m"
                {
#line 716 "termination.m"
                  transform_hlds__termination__succeeded = mdbcomp__prim_data__special_pred_name_arity_4_p_1(&transform_hlds__termination__SpecPredId0_83, transform_hlds__termination__Name_81, &transform_hlds__termination__V_84_84, &transform_hlds__termination__V_90_90);
                }
#line 713 "termination.m"
                if (transform_hlds__termination__succeeded)
#line 713 "termination.m"
                  {
#line 716 "termination.m"
                    transform_hlds__termination__succeeded = (transform_hlds__termination__Arity_82 == transform_hlds__termination__V_90_90);
#line 713 "termination.m"
                    if (transform_hlds__termination__succeeded)
#line 717 "termination.m"
                      {
#line 717 "termination.m"
                        transform_hlds__termination__succeeded = mdbcomp__builtin_modules__any_mercury_builtin_module_1_p_0(transform_hlds__termination__ModuleName_80);
                      }
#line 713 "termination.m"
                  }
#line 720 "termination.m"
                if (transform_hlds__termination__succeeded)
#line 719 "termination.m"
                  {
#line 719 "termination.m"
                    transform_hlds__termination__SpecialPredId_85 = transform_hlds__termination__SpecPredId0_83;
#line 719 "termination.m"
                    transform_hlds__termination__succeeded = MR_TRUE;
#line 719 "termination.m"
                  }
#line 720 "termination.m"
                else
#line 721 "termination.m"
                  {
#line 721 "termination.m"
                    MR_Word transform_hlds__termination__Origin_86;
#line 722 "termination.m"
                    MR_Word transform_hlds__termination__V_87_87;

#line 721 "termination.m"
                    {
#line 721 "termination.m"
                      hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__termination__PredInfo0_19, &transform_hlds__termination__Origin_86);
                    }
#line 722 "termination.m"
                    transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__Origin_86)) == (MR_mktag((MR_Integer) 0)));
#line 722 "termination.m"
                    if (transform_hlds__termination__succeeded)
#line 722 "termination.m"
                      {
#line 722 "termination.m"
                        transform_hlds__termination__SpecialPredId_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__Origin_86, (MR_Integer) 0)));
#line 722 "termination.m"
                        transform_hlds__termination__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__Origin_86, (MR_Integer) 1)));
#line 722 "termination.m"
                      }
#line 721 "termination.m"
                  }
#line 726 "termination.m"
                if (transform_hlds__termination__succeeded)
#line 726 "termination.m"
                  {
#line 725 "termination.m"
                    {
#line 725 "termination.m"
                      transform_hlds__termination__set_generated_terminates_4_p_0(transform_hlds__termination__ProcIds_24, transform_hlds__termination__SpecialPredId_85, transform_hlds__termination__ProcTable0_22, &transform_hlds__termination__ProcTable1_25);
                    }
#line 725 "termination.m"
                    transform_hlds__termination__succeeded = MR_TRUE;
#line 726 "termination.m"
                  }
#line 726 "termination.m"
              }
#line 633 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 632 "termination.m"
              transform_hlds__termination__ProcTable2_26 = transform_hlds__termination__ProcTable1_25;
#line 633 "termination.m"
            else
#line 644 "termination.m"
              {
#line 634 "termination.m"
                MR_Word transform_hlds__termination__V_43_43;

#line 634 "termination.m"
                {
#line 634 "termination.m"
                  transform_hlds__termination__V_43_43 = hlds__status__pred_status_defined_in_this_module_1_f_0(transform_hlds__termination__PredStatus_20);
                }
#line 634 "termination.m"
                transform_hlds__termination__succeeded = (transform_hlds__termination__V_43_43 == (MR_Integer) 1);
#line 644 "termination.m"
                if (transform_hlds__termination__succeeded)
#line 641 "termination.m"
                  {
#line 638 "termination.m"
                    {
#line 638 "termination.m"
                      transform_hlds__termination__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__termination__Markers_23, (MR_Integer) 17);
                    }
#line 641 "termination.m"
                    if (transform_hlds__termination__succeeded)
#line 639 "termination.m"
                      {
#line 639 "termination.m"
                        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 639 "termination.m"
                        {
#line 639 "termination.m"
                          transform_hlds__termination__change_procs_termination_info_5_p_0(transform_hlds__termination__ProcIds_24, (MR_Integer) 1, (MR_Word) &transform_hlds__termination_scalar_common_5[0], transform_hlds__termination__ProcTable0_22, &transform_hlds__termination__ProcTable2_26);
                        }
#line 639 "termination.m"
                      }
#line 641 "termination.m"
                    else
#line 642 "termination.m"
                      transform_hlds__termination__ProcTable2_26 = transform_hlds__termination__ProcTable0_22;
#line 641 "termination.m"
                  }
#line 644 "termination.m"
                else
#line 670 "termination.m"
                  {
#line 670 "termination.m"
                    MR_Word transform_hlds__termination__ArgSizeError_29;
#line 670 "termination.m"
                    MR_Word transform_hlds__termination__ArgSizeInfo_30;
#line 670 "termination.m"
                    MR_Word transform_hlds__termination__V_58_58;
#line 670 "termination.m"
                    MR_Word transform_hlds__termination__ProcTable1_69;

#line 656 "termination.m"
                    {
#line 656 "termination.m"
                      transform_hlds__termination__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__termination__Markers_23, (MR_Integer) 17);
                    }
#line 657 "termination.m"
                    if (!(transform_hlds__termination__succeeded))
#line 658 "termination.m"
                      {
#line 658 "termination.m"
                        MR_Word transform_hlds__termination__V_48_48;

#line 658 "termination.m"
                        transform_hlds__termination__succeeded = (transform_hlds__termination__MakeOptInt_17 == (MR_Integer) 0);
#line 658 "termination.m"
                        if (transform_hlds__termination__succeeded)
#line 658 "termination.m"
                          {
#line 659 "termination.m"
                            transform_hlds__termination__V_48_48 = (MR_Integer) 19;
#line 659 "termination.m"
                            {
#line 659 "termination.m"
                              transform_hlds__termination__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__termination__Markers_23, transform_hlds__termination__V_48_48);
                            }
#line 658 "termination.m"
                          }
#line 658 "termination.m"
                      }
#line 664 "termination.m"
                    if (transform_hlds__termination__succeeded)
#line 662 "termination.m"
                      {
#line 662 "termination.m"
                        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 662 "termination.m"
                        {
#line 662 "termination.m"
                          transform_hlds__termination__change_procs_termination_info_5_p_0(transform_hlds__termination__ProcIds_24, (MR_Integer) 1, (MR_Word) &transform_hlds__termination_scalar_common_5[0], transform_hlds__termination__ProcTable0_22, &transform_hlds__termination__ProcTable1_69);
                        }
#line 662 "termination.m"
                      }
#line 664 "termination.m"
                    else
#line 666 "termination.m"
                      {
#line 666 "termination.m"
                        MR_Word transform_hlds__termination__TerminationError_27;
#line 666 "termination.m"
                        MR_Word transform_hlds__termination__TerminationInfo_28;
#line 666 "termination.m"
                        MR_Word transform_hlds__termination__V_54_54;

#line 665 "termination.m"
                        {
#line 665 "termination.m"
                          transform_hlds__termination__TerminationError_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 665 "termination.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__termination__TerminationError_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 665 "termination.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__termination__TerminationError_27, 1) = ((MR_Box) (transform_hlds__termination__Context_21));
#line 665 "termination.m"
                        }
#line 667 "termination.m"
                        {
#line 667 "termination.m"
                          transform_hlds__termination__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 667 "termination.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__termination__V_54_54, 0) = ((MR_Box) (transform_hlds__termination__TerminationError_27));
#line 667 "termination.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__termination__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 667 "termination.m"
                        }
#line 667 "termination.m"
                        {
#line 667 "termination.m"
                          transform_hlds__termination__TerminationInfo_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 667 "termination.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__termination__TerminationInfo_28, 0) = ((MR_Box) (transform_hlds__termination__V_54_54));
#line 667 "termination.m"
                        }
#line 668 "termination.m"
                        {
#line 668 "termination.m"
                          transform_hlds__termination__change_procs_termination_info_5_p_0(transform_hlds__termination__ProcIds_24, (MR_Integer) 0, transform_hlds__termination__TerminationInfo_28, transform_hlds__termination__ProcTable0_22, &transform_hlds__termination__ProcTable1_69);
                        }
#line 666 "termination.m"
                      }
#line 671 "termination.m"
                    {
#line 671 "termination.m"
                      transform_hlds__termination__ArgSizeError_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 671 "termination.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeError_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 671 "termination.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeError_29, 1) = ((MR_Box) (transform_hlds__termination__Context_21));
#line 671 "termination.m"
                    }
#line 672 "termination.m"
                    {
#line 672 "termination.m"
                      transform_hlds__termination__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 672 "termination.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__termination__V_58_58, 0) = ((MR_Box) (transform_hlds__termination__ArgSizeError_29));
#line 672 "termination.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__termination__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 672 "termination.m"
                    }
#line 672 "termination.m"
                    {
#line 672 "termination.m"
                      transform_hlds__termination__ArgSizeInfo_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 672 "termination.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__termination__ArgSizeInfo_30, 0) = ((MR_Box) (transform_hlds__termination__V_58_58));
#line 672 "termination.m"
                    }
#line 673 "termination.m"
                    {
#line 673 "termination.m"
                      transform_hlds__termination__change_procs_arg_size_info_5_p_0(transform_hlds__termination__ProcIds_24, (MR_Integer) 0, transform_hlds__termination__ArgSizeInfo_30, transform_hlds__termination__ProcTable1_69, &transform_hlds__termination__ProcTable2_26);
                    }
#line 670 "termination.m"
                  }
#line 644 "termination.m"
              }
#line 676 "termination.m"
            {
#line 676 "termination.m"
              transform_hlds__termination__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__termination__Markers_23, (MR_Integer) 18);
            }
#line 682 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 678 "termination.m"
              {
#line 678 "termination.m"
                MR_Word transform_hlds__termination__RequestError_31;
#line 678 "termination.m"
                MR_Word transform_hlds__termination__RequestTerminationInfo_32;
#line 678 "termination.m"
                MR_Word transform_hlds__termination__V_62_62;
#line 678 "termination.m"
                MR_Word transform_hlds__termination__V_63_63;

#line 678 "termination.m"
                {
#line 678 "termination.m"
                  transform_hlds__termination__V_62_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 678 "termination.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__termination__V_62_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 678 "termination.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__termination__V_62_62, 1) = ((MR_Box) (transform_hlds__termination__PredId_12));
#line 678 "termination.m"
                }
#line 677 "termination.m"
                {
#line 677 "termination.m"
                  transform_hlds__termination__RequestError_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 677 "termination.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__termination__RequestError_31, 0) = ((MR_Box) (transform_hlds__termination__V_62_62));
#line 677 "termination.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__termination__RequestError_31, 1) = ((MR_Box) (transform_hlds__termination__Context_21));
#line 677 "termination.m"
                }
#line 679 "termination.m"
                {
#line 679 "termination.m"
                  transform_hlds__termination__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 679 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__V_63_63, 0) = ((MR_Box) (transform_hlds__termination__RequestError_31));
#line 679 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 679 "termination.m"
                }
#line 679 "termination.m"
                {
#line 679 "termination.m"
                  transform_hlds__termination__RequestTerminationInfo_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 679 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__RequestTerminationInfo_32, 0) = ((MR_Box) (transform_hlds__termination__V_63_63));
#line 679 "termination.m"
                }
#line 680 "termination.m"
                {
#line 680 "termination.m"
                  transform_hlds__termination__change_procs_termination_info_5_p_0(transform_hlds__termination__ProcIds_24, (MR_Integer) 1, transform_hlds__termination__RequestTerminationInfo_32, transform_hlds__termination__ProcTable2_26, &transform_hlds__termination__ProcTable_33);
                }
#line 678 "termination.m"
              }
#line 682 "termination.m"
            else
#line 683 "termination.m"
              transform_hlds__termination__ProcTable_33 = transform_hlds__termination__ProcTable2_26;
#line 685 "termination.m"
            {
#line 685 "termination.m"
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__termination__ProcTable_33, transform_hlds__termination__PredInfo0_19, &transform_hlds__termination__PredInfo_34);
            }
#line 686 "termination.m"
            {
#line 686 "termination.m"
              mercury__map__set_4_p_0(transform_hlds__termination__TypeCtorInfo_71_71, transform_hlds__termination__TypeCtorInfo_72_72, ((MR_Box) (transform_hlds__termination__PredId_12)), ((MR_Box) (transform_hlds__termination__PredInfo_34)), transform_hlds__termination__PredTable0_18, &transform_hlds__termination__PredTable_35);
            }
#line 687 "termination.m"
            {
#line 687 "termination.m"
              hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__termination__PredTable_35, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_66_66);
            }
#line 688 "termination.m"
            /* direct tailcall eliminated */
#line 688 "termination.m"
            {
#line 688 "termination.m"
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__PredIds_13;
#line 688 "termination.m"
              MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_2 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_66_66;

#line 688 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_2;
#line 688 "termination.m"
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
#line 688 "termination.m"
            }
#line 688 "termination.m"
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

#line 580 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__is_solver_init_wrapper_pred_2_p_0(
#line 580 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_3,
#line 580 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_2)
#line 580 "termination.m"
{
#line 583 "termination.m"
  {
#line 583 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 583 "termination.m"
    MR_Word transform_hlds__termination__PredId_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__HeadVar__2_2, (MR_Integer) 0)));
#line 583 "termination.m"
    MR_Word transform_hlds__termination__PredInfo_6;
#line 583 "termination.m"
    MR_Word transform_hlds__termination__PredOrigin_7;
#line 583 "termination.m"
    MR_Word transform_hlds__termination__SpecialPredId_8;
#line 583 "termination.m"
    MR_Integer transform_hlds__termination__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__HeadVar__2_2, (MR_Integer) 1)));
#line 586 "termination.m"
    MR_Word transform_hlds__termination__V_9_9;

#line 584 "termination.m"
    {
#line 584 "termination.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__termination__ModuleInfo_3, transform_hlds__termination__PredId_4, &transform_hlds__termination__PredInfo_6);
    }
#line 585 "termination.m"
    {
#line 585 "termination.m"
      hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__termination__PredInfo_6, &transform_hlds__termination__PredOrigin_7);
    }
#line 586 "termination.m"
    transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__PredOrigin_7)) == (MR_mktag((MR_Integer) 0)));
#line 586 "termination.m"
    if (transform_hlds__termination__succeeded)
#line 586 "termination.m"
      {
#line 586 "termination.m"
        transform_hlds__termination__SpecialPredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PredOrigin_7, (MR_Integer) 0)));
#line 586 "termination.m"
        transform_hlds__termination__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PredOrigin_7, (MR_Integer) 1)));
#line 587 "termination.m"
        transform_hlds__termination__succeeded = (transform_hlds__termination__SpecialPredId_8 == (MR_Integer) 3);
#line 586 "termination.m"
      }
#line 583 "termination.m"
    return transform_hlds__termination__succeeded;
#line 583 "termination.m"
  }
#line 580 "termination.m"
}

#line 551 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__report_termination_errors_6_p_0_4(
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
      return transform_hlds__termination__succeeded = transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__551__1_1_p_0(((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 551 "termination.m"
    return transform_hlds__termination__succeeded;
#line 551 "termination.m"
  }
#line 551 "termination.m"
}

#line 536 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__report_termination_errors_6_p_0_3(
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
      return transform_hlds__termination__succeeded = transform_hlds__termination__is_solver_init_wrapper_pred_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 536 "termination.m"
    return transform_hlds__termination__succeeded;
#line 536 "termination.m"
  }
#line 536 "termination.m"
}

#line 524 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__report_termination_errors_6_p_0_2(
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
      return transform_hlds__termination__succeeded = transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__524__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 524 "termination.m"
    return transform_hlds__termination__succeeded;
#line 524 "termination.m"
  }
#line 524 "termination.m"
}

#line 508 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__report_termination_errors_6_p_0_1(
#line 508 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 508 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1)
#line 508 "termination.m"
{
#line 508 "termination.m"
  {
#line 508 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 508 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

#line 508 "termination.m"
    {
#line 508 "termination.m"
      return transform_hlds__termination__succeeded = transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__508__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 508 "termination.m"
    return transform_hlds__termination__succeeded;
#line 508 "termination.m"
  }
#line 508 "termination.m"
}

#line 498 "termination.m"
static void MR_CALL 
transform_hlds__termination__report_termination_errors_6_p_0(
#line 498 "termination.m"
  MR_Word transform_hlds__termination__SCC_7,
#line 498 "termination.m"
  MR_Word transform_hlds__termination__Errors_8,
#line 498 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35,
#line 498 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_36)
#line 498 "termination.m"
{
#line 502 "termination.m"
  {
#line 502 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 502 "termination.m"
    MR_Word transform_hlds__termination__Globals_11;
#line 502 "termination.m"
    MR_Word transform_hlds__termination__NormalErrors_12;
#line 502 "termination.m"
    MR_Word transform_hlds__termination__VerboseErrors_13;
#line 514 "termination.m"
    MR_Word transform_hlds__termination__IsCheckTerm_14;
#line 514 "termination.m"
    MR_Word transform_hlds__termination__CheckTermPPIds_19;
#line 516 "termination.m"
    MR_Word transform_hlds__termination__V_20_20;
#line 516 "termination.m"
    MR_Word transform_hlds__termination__V_21_21;

#line 503 "termination.m"
    {
#line 503 "termination.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35, &transform_hlds__termination__Globals_11);
    }
#line 504 "termination.m"
    {
#line 504 "termination.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__termination__Globals_11, (MR_Integer) 419, &transform_hlds__termination__NormalErrors_12);
    }
#line 505 "termination.m"
    {
#line 505 "termination.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__termination__Globals_11, (MR_Integer) 420, &transform_hlds__termination__VerboseErrors_13);
    }
#line 508 "termination.m"
    {
#line 508 "termination.m"
      transform_hlds__termination__IsCheckTerm_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 508 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsCheckTerm_14, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_6[0]));
#line 508 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsCheckTerm_14, 1) = ((MR_Box) (transform_hlds__termination__report_termination_errors_6_p_0_1));
#line 508 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsCheckTerm_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 508 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsCheckTerm_14, 3) = ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35));
#line 508 "termination.m"
    }
#line 515 "termination.m"
    {
#line 515 "termination.m"
      mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__termination__IsCheckTerm_14, transform_hlds__termination__SCC_7, &transform_hlds__termination__CheckTermPPIds_19);
    }
#line 516 "termination.m"
    transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__CheckTermPPIds_19)) == (MR_mktag((MR_Integer) 1)));
#line 516 "termination.m"
    if (transform_hlds__termination__succeeded)
#line 516 "termination.m"
      {
#line 516 "termination.m"
        transform_hlds__termination__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__CheckTermPPIds_19, (MR_Integer) 0)));
#line 516 "termination.m"
        transform_hlds__termination__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__CheckTermPPIds_19, (MR_Integer) 1)));
#line 520 "termination.m"
        {
#line 520 "termination.m"
          transform_hlds__term_errors__report_term_errors_5_p_0(transform_hlds__termination__SCC_7, transform_hlds__termination__Errors_8, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35);
        }
#line 521 "termination.m"
        {
#line 521 "termination.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
#line 522 "termination.m"
        {
#line 522 "termination.m"
          hlds__hlds_module__module_info_incr_errors_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_36);
#line 522 "termination.m"
          return;
        }
#line 516 "termination.m"
      }
#line 516 "termination.m"
    else
#line 573 "termination.m"
      {
#line 573 "termination.m"
        MR_Word transform_hlds__termination__PrintErrors_27;
#line 527 "termination.m"
        MR_Word transform_hlds__termination__TypeCtorInfo_62_62 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 527 "termination.m"
        MR_Word transform_hlds__termination__IsNonImported_22;
#line 527 "termination.m"
        MR_Word transform_hlds__termination__NonImportedPPIds_24;
#line 527 "termination.m"
        MR_Word transform_hlds__termination__V_48_48;
#line 529 "termination.m"
        MR_Word transform_hlds__termination__V_25_25;
#line 529 "termination.m"
        MR_Word transform_hlds__termination__V_26_26;

#line 524 "termination.m"
        {
#line 524 "termination.m"
          transform_hlds__termination__IsNonImported_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 524 "termination.m"
          MR_hl_field(MR_mktag(0), transform_hlds__termination__IsNonImported_22, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_6[0]));
#line 524 "termination.m"
          MR_hl_field(MR_mktag(0), transform_hlds__termination__IsNonImported_22, 1) = ((MR_Box) (transform_hlds__termination__report_termination_errors_6_p_0_2));
#line 524 "termination.m"
          MR_hl_field(MR_mktag(0), transform_hlds__termination__IsNonImported_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 524 "termination.m"
          MR_hl_field(MR_mktag(0), transform_hlds__termination__IsNonImported_22, 3) = ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35));
#line 524 "termination.m"
        }
#line 528 "termination.m"
        {
#line 528 "termination.m"
          mercury__list__filter_3_p_0(transform_hlds__termination__TypeCtorInfo_62_62, transform_hlds__termination__IsNonImported_22, transform_hlds__termination__SCC_7, &transform_hlds__termination__NonImportedPPIds_24);
        }
#line 529 "termination.m"
        transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__NonImportedPPIds_24)) == (MR_mktag((MR_Integer) 1)));
#line 529 "termination.m"
        if (transform_hlds__termination__succeeded)
#line 529 "termination.m"
          {
#line 529 "termination.m"
            transform_hlds__termination__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__NonImportedPPIds_24, (MR_Integer) 0)));
#line 529 "termination.m"
            transform_hlds__termination__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__NonImportedPPIds_24, (MR_Integer) 1)));
#line 536 "termination.m"
            {
#line 536 "termination.m"
              transform_hlds__termination__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 536 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__V_48_48, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_6[0]));
#line 536 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__V_48_48, 1) = ((MR_Box) (transform_hlds__termination__report_termination_errors_6_p_0_3));
#line 536 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 536 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__V_48_48, 3) = ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35));
#line 536 "termination.m"
            }
#line 536 "termination.m"
            {
#line 536 "termination.m"
              transform_hlds__termination__succeeded = mercury__list__all_false_2_p_0(transform_hlds__termination__TypeCtorInfo_62_62, transform_hlds__termination__V_48_48, transform_hlds__termination__SCC_7);
            }
#line 527 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 547 "termination.m"
#line 547 "termination.m"
              switch (transform_hlds__termination__VerboseErrors_13) {
#line 547 "termination.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 547 "termination.m"
                case (MR_Integer) 0:
#line 548 "termination.m"
                  {
#line 548 "termination.m"
                    MR_Word transform_hlds__termination__TypeCtorInfo_64_64;
#line 548 "termination.m"
                    MR_Word transform_hlds__termination__IsNonSimple_28;
#line 548 "termination.m"
                    MR_Word transform_hlds__termination__PrintErrors0_32;

#line 2712 "transform_hlds.termination.c"
                    transform_hlds__termination__succeeded = (transform_hlds__termination__NormalErrors_12 == (MR_Integer) 1);
#line 548 "termination.m"
                    if (transform_hlds__termination__succeeded)
#line 548 "termination.m"
                      {
#line 551 "termination.m"
                        transform_hlds__termination__IsNonSimple_28 = (MR_Word) &transform_hlds__termination_scalar_common_2[5];
#line 2720 "transform_hlds.termination.c"
                        transform_hlds__termination__TypeCtorInfo_64_64 = (MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0;
#line 555 "termination.m"
                        {
#line 555 "termination.m"
                          mercury__list__filter_3_p_0(transform_hlds__termination__TypeCtorInfo_64_64, transform_hlds__termination__IsNonSimple_28, transform_hlds__termination__Errors_8, &transform_hlds__termination__PrintErrors0_32);
                        }
#line 562 "termination.m"
                        if ((transform_hlds__termination__PrintErrors0_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 561 "termination.m"
                          transform_hlds__termination__PrintErrors_27 = transform_hlds__termination__Errors_8;
#line 562 "termination.m"
                        else
#line 564 "termination.m"
                          transform_hlds__termination__PrintErrors_27 = transform_hlds__termination__PrintErrors0_32;
#line 562 "termination.m"
                        transform_hlds__termination__succeeded = MR_TRUE;
#line 548 "termination.m"
                      }
#line 548 "termination.m"
                  }
#line 547 "termination.m"
                  break;
#line 547 "termination.m"
                case (MR_Integer) 1:
#line 546 "termination.m"
                  {
#line 546 "termination.m"
                    transform_hlds__termination__PrintErrors_27 = transform_hlds__termination__Errors_8;
#line 546 "termination.m"
                    transform_hlds__termination__succeeded = MR_TRUE;
#line 546 "termination.m"
                  }
#line 547 "termination.m"
                  break;
#line 547 "termination.m"
              }
#line 529 "termination.m"
          }
#line 573 "termination.m"
        if (transform_hlds__termination__succeeded)
#line 572 "termination.m"
          {
#line 572 "termination.m"
            transform_hlds__term_errors__report_term_errors_5_p_0(transform_hlds__termination__SCC_7, transform_hlds__termination__PrintErrors_27, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35);
          }
#line 573 "termination.m"
        else
#line 573 "termination.m"
          {
#line 573 "termination.m"
          }
#line 573 "termination.m"
        *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_36 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35;
#line 573 "termination.m"
      }
#line 502 "termination.m"
  }
#line 498 "termination.m"
}

#line 479 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_termination_infos_4_p_0(
#line 479 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 479 "termination.m"
  MR_Word transform_hlds__termination__TerminationInfo_2,
#line 479 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3,
#line 479 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4)
#line 479 "termination.m"
{
#line 482 "termination.m"
  while (MR_TRUE)
#line 482 "termination.m"
    {
#line 482 "termination.m"
      /* tailcall optimized into a loop */
#line 482 "termination.m"
      {
#line 482 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 482 "termination.m"
        if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 482 "termination.m"
          *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3;
#line 482 "termination.m"
        else
#line 483 "termination.m"
          {
#line 483 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_28_28;
#line 483 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_29_29;
#line 483 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_31_31;
#line 483 "termination.m"
            MR_Word transform_hlds__termination__PPId_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));
#line 483 "termination.m"
            MR_Word transform_hlds__termination__PPIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
#line 483 "termination.m"
            MR_Word transform_hlds__termination__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PPId_9, (MR_Integer) 0)));
#line 483 "termination.m"
            MR_Integer transform_hlds__termination__ProcId_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PPId_9, (MR_Integer) 1)));
#line 483 "termination.m"
            MR_Word transform_hlds__termination__PredTable0_15;
#line 483 "termination.m"
            MR_Word transform_hlds__termination__PredInfo0_16;
#line 483 "termination.m"
            MR_Word transform_hlds__termination__ProcTable0_17;
#line 483 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo0_18;
#line 483 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo_19;
#line 483 "termination.m"
            MR_Word transform_hlds__termination__ProcTable_20;
#line 483 "termination.m"
            MR_Word transform_hlds__termination__PredInfo_21;
#line 483 "termination.m"
            MR_Word transform_hlds__termination__PredTable_22;
#line 483 "termination.m"
            MR_Word transform_hlds__termination__V_25_25;
#line 483 "termination.m"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26;
#line 486 "termination.m"
            MR_Box transform_hlds__termination__conv0_PredInfo0_16;
#line 488 "termination.m"
            MR_Box transform_hlds__termination__conv1_ProcInfo0_18;

#line 485 "termination.m"
            {
#line 485 "termination.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__termination__PredTable0_15);
            }
#line 2857 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 2859 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_29_29 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 486 "termination.m"
            {
#line 486 "termination.m"
              mercury__map__lookup_3_p_0(transform_hlds__termination__TypeCtorInfo_28_28, transform_hlds__termination__TypeCtorInfo_29_29, transform_hlds__termination__PredTable0_15, ((MR_Box) (transform_hlds__termination__PredId_13)), &transform_hlds__termination__conv0_PredInfo0_16);
            }
#line 486 "termination.m"
            transform_hlds__termination__PredInfo0_16 = ((MR_Word) transform_hlds__termination__conv0_PredInfo0_16);
#line 487 "termination.m"
            {
#line 487 "termination.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__termination__PredInfo0_16, &transform_hlds__termination__ProcTable0_17);
            }
#line 2873 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 488 "termination.m"
            {
#line 488 "termination.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__termination__TypeCtorInfo_31_31, transform_hlds__termination__ProcTable0_17, transform_hlds__termination__ProcId_14, &transform_hlds__termination__conv1_ProcInfo0_18);
            }
#line 488 "termination.m"
            transform_hlds__termination__ProcInfo0_18 = ((MR_Word) transform_hlds__termination__conv1_ProcInfo0_18);
#line 490 "termination.m"
            {
#line 490 "termination.m"
              transform_hlds__termination__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 490 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_25_25, 0) = ((MR_Box) (transform_hlds__termination__TerminationInfo_2));
#line 490 "termination.m"
            }
#line 490 "termination.m"
            {
#line 490 "termination.m"
              hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(transform_hlds__termination__V_25_25, transform_hlds__termination__ProcInfo0_18, &transform_hlds__termination__ProcInfo_19);
            }
#line 492 "termination.m"
            {
#line 492 "termination.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__termination__TypeCtorInfo_31_31, transform_hlds__termination__ProcId_14, ((MR_Box) (transform_hlds__termination__ProcInfo_19)), transform_hlds__termination__ProcTable0_17, &transform_hlds__termination__ProcTable_20);
            }
#line 493 "termination.m"
            {
#line 493 "termination.m"
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__termination__ProcTable_20, transform_hlds__termination__PredInfo0_16, &transform_hlds__termination__PredInfo_21);
            }
#line 494 "termination.m"
            {
#line 494 "termination.m"
              mercury__map__det_update_4_p_0(transform_hlds__termination__TypeCtorInfo_28_28, transform_hlds__termination__TypeCtorInfo_29_29, ((MR_Box) (transform_hlds__termination__PredId_13)), ((MR_Box) (transform_hlds__termination__PredInfo_21)), transform_hlds__termination__PredTable0_15, &transform_hlds__termination__PredTable_22);
            }
#line 495 "termination.m"
            {
#line 495 "termination.m"
              hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__termination__PredTable_22, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26);
            }
#line 496 "termination.m"
            /* direct tailcall eliminated */
#line 496 "termination.m"
            {
#line 496 "termination.m"
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__PPIds_10;
#line 496 "termination.m"
              MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26;

#line 496 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 496 "termination.m"
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
#line 496 "termination.m"
            }
#line 496 "termination.m"
            continue;
#line 483 "termination.m"
          }
#line 482 "termination.m"
      }
#line 482 "termination.m"
      break;
#line 482 "termination.m"
    }
#line 479 "termination.m"
}

#line 459 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_infinite_arg_size_infos_4_p_0(
#line 459 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 459 "termination.m"
  MR_Word transform_hlds__termination__ArgSizeInfo_2,
#line 459 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3,
#line 459 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4)
#line 459 "termination.m"
{
#line 462 "termination.m"
  while (MR_TRUE)
#line 462 "termination.m"
    {
#line 462 "termination.m"
      /* tailcall optimized into a loop */
#line 462 "termination.m"
      {
#line 462 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 462 "termination.m"
        if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 462 "termination.m"
          *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3;
#line 462 "termination.m"
        else
#line 463 "termination.m"
          {
#line 463 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_28_28;
#line 463 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_29_29;
#line 463 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_31_31;
#line 463 "termination.m"
            MR_Word transform_hlds__termination__PPId_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));
#line 463 "termination.m"
            MR_Word transform_hlds__termination__PPIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
#line 463 "termination.m"
            MR_Word transform_hlds__termination__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PPId_9, (MR_Integer) 0)));
#line 463 "termination.m"
            MR_Integer transform_hlds__termination__ProcId_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PPId_9, (MR_Integer) 1)));
#line 463 "termination.m"
            MR_Word transform_hlds__termination__PredTable0_15;
#line 463 "termination.m"
            MR_Word transform_hlds__termination__PredInfo0_16;
#line 463 "termination.m"
            MR_Word transform_hlds__termination__ProcTable0_17;
#line 463 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo0_18;
#line 463 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo_19;
#line 463 "termination.m"
            MR_Word transform_hlds__termination__ProcTable_20;
#line 463 "termination.m"
            MR_Word transform_hlds__termination__PredInfo_21;
#line 463 "termination.m"
            MR_Word transform_hlds__termination__PredTable_22;
#line 463 "termination.m"
            MR_Word transform_hlds__termination__V_25_25;
#line 463 "termination.m"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26;
#line 466 "termination.m"
            MR_Box transform_hlds__termination__conv0_PredInfo0_16;
#line 468 "termination.m"
            MR_Box transform_hlds__termination__conv1_ProcInfo0_18;

#line 465 "termination.m"
            {
#line 465 "termination.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__termination__PredTable0_15);
            }
#line 3019 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 3021 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_29_29 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 466 "termination.m"
            {
#line 466 "termination.m"
              mercury__map__lookup_3_p_0(transform_hlds__termination__TypeCtorInfo_28_28, transform_hlds__termination__TypeCtorInfo_29_29, transform_hlds__termination__PredTable0_15, ((MR_Box) (transform_hlds__termination__PredId_13)), &transform_hlds__termination__conv0_PredInfo0_16);
            }
#line 466 "termination.m"
            transform_hlds__termination__PredInfo0_16 = ((MR_Word) transform_hlds__termination__conv0_PredInfo0_16);
#line 467 "termination.m"
            {
#line 467 "termination.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__termination__PredInfo0_16, &transform_hlds__termination__ProcTable0_17);
            }
#line 3035 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 468 "termination.m"
            {
#line 468 "termination.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__termination__TypeCtorInfo_31_31, transform_hlds__termination__ProcTable0_17, transform_hlds__termination__ProcId_14, &transform_hlds__termination__conv1_ProcInfo0_18);
            }
#line 468 "termination.m"
            transform_hlds__termination__ProcInfo0_18 = ((MR_Word) transform_hlds__termination__conv1_ProcInfo0_18);
#line 470 "termination.m"
            {
#line 470 "termination.m"
              transform_hlds__termination__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 470 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_25_25, 0) = ((MR_Box) (transform_hlds__termination__ArgSizeInfo_2));
#line 470 "termination.m"
            }
#line 470 "termination.m"
            {
#line 470 "termination.m"
              hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_p_0(transform_hlds__termination__V_25_25, transform_hlds__termination__ProcInfo0_18, &transform_hlds__termination__ProcInfo_19);
            }
#line 471 "termination.m"
            {
#line 471 "termination.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__termination__TypeCtorInfo_31_31, transform_hlds__termination__ProcId_14, ((MR_Box) (transform_hlds__termination__ProcInfo_19)), transform_hlds__termination__ProcTable0_17, &transform_hlds__termination__ProcTable_20);
            }
#line 472 "termination.m"
            {
#line 472 "termination.m"
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__termination__ProcTable_20, transform_hlds__termination__PredInfo0_16, &transform_hlds__termination__PredInfo_21);
            }
#line 473 "termination.m"
            {
#line 473 "termination.m"
              mercury__map__set_4_p_0(transform_hlds__termination__TypeCtorInfo_28_28, transform_hlds__termination__TypeCtorInfo_29_29, ((MR_Box) (transform_hlds__termination__PredId_13)), ((MR_Box) (transform_hlds__termination__PredInfo_21)), transform_hlds__termination__PredTable0_15, &transform_hlds__termination__PredTable_22);
            }
#line 474 "termination.m"
            {
#line 474 "termination.m"
              hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__termination__PredTable_22, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26);
            }
#line 475 "termination.m"
            /* direct tailcall eliminated */
#line 475 "termination.m"
            {
#line 475 "termination.m"
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__PPIds_10;
#line 475 "termination.m"
              MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26;

#line 475 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 475 "termination.m"
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
#line 475 "termination.m"
            }
#line 475 "termination.m"
            continue;
#line 463 "termination.m"
          }
#line 462 "termination.m"
      }
#line 462 "termination.m"
      break;
#line 462 "termination.m"
    }
#line 459 "termination.m"
}

#line 438 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_finite_arg_size_infos_4_p_0(
#line 438 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 438 "termination.m"
  MR_Word transform_hlds__termination__OutputSupplierMap_2,
#line 438 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3,
#line 438 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4)
#line 438 "termination.m"
{
#line 441 "termination.m"
  while (MR_TRUE)
#line 441 "termination.m"
    {
#line 441 "termination.m"
      /* tailcall optimized into a loop */
#line 441 "termination.m"
      {
#line 441 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 441 "termination.m"
        if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 441 "termination.m"
          *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3;
#line 441 "termination.m"
        else
#line 442 "termination.m"
          {
#line 442 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_32_32;
#line 442 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_33_33;
#line 442 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_35_35;
#line 442 "termination.m"
            MR_Word transform_hlds__termination__Soln_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));
#line 442 "termination.m"
            MR_Word transform_hlds__termination__Solns_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
#line 442 "termination.m"
            MR_Word transform_hlds__termination__PPId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__Soln_9, (MR_Integer) 0)));
#line 442 "termination.m"
            MR_Integer transform_hlds__termination__Gamma_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__Soln_9, (MR_Integer) 1)));
#line 442 "termination.m"
            MR_Word transform_hlds__termination__PredId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PPId_13, (MR_Integer) 0)));
#line 442 "termination.m"
            MR_Integer transform_hlds__termination__ProcId_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PPId_13, (MR_Integer) 1)));
#line 442 "termination.m"
            MR_Word transform_hlds__termination__PredTable0_17;
#line 442 "termination.m"
            MR_Word transform_hlds__termination__PredInfo0_18;
#line 442 "termination.m"
            MR_Word transform_hlds__termination__ProcTable0_19;
#line 442 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo_20;
#line 442 "termination.m"
            MR_Word transform_hlds__termination__OutputSuppliers_21;
#line 442 "termination.m"
            MR_Word transform_hlds__termination__ArgSizeInfo_22;
#line 442 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo1_23;
#line 442 "termination.m"
            MR_Word transform_hlds__termination__ProcTable_24;
#line 442 "termination.m"
            MR_Word transform_hlds__termination__PredInfo_25;
#line 442 "termination.m"
            MR_Word transform_hlds__termination__PredTable_26;
#line 442 "termination.m"
            MR_Word transform_hlds__termination__V_29_29;
#line 442 "termination.m"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_30_30;
#line 446 "termination.m"
            MR_Box transform_hlds__termination__conv0_PredInfo0_18;
#line 448 "termination.m"
            MR_Box transform_hlds__termination__conv1_ProcInfo_20;
#line 449 "termination.m"
            MR_Box transform_hlds__termination__conv2_OutputSuppliers_21;

#line 445 "termination.m"
            {
#line 445 "termination.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__termination__PredTable0_17);
            }
#line 3191 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_32_32 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 3193 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_33_33 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 446 "termination.m"
            {
#line 446 "termination.m"
              mercury__map__lookup_3_p_0(transform_hlds__termination__TypeCtorInfo_32_32, transform_hlds__termination__TypeCtorInfo_33_33, transform_hlds__termination__PredTable0_17, ((MR_Box) (transform_hlds__termination__PredId_15)), &transform_hlds__termination__conv0_PredInfo0_18);
            }
#line 446 "termination.m"
            transform_hlds__termination__PredInfo0_18 = ((MR_Word) transform_hlds__termination__conv0_PredInfo0_18);
#line 447 "termination.m"
            {
#line 447 "termination.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__termination__PredInfo0_18, &transform_hlds__termination__ProcTable0_19);
            }
#line 3207 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_35_35 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 448 "termination.m"
            {
#line 448 "termination.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__termination__TypeCtorInfo_35_35, transform_hlds__termination__ProcTable0_19, transform_hlds__termination__ProcId_16, &transform_hlds__termination__conv1_ProcInfo_20);
            }
#line 448 "termination.m"
            transform_hlds__termination__ProcInfo_20 = ((MR_Word) transform_hlds__termination__conv1_ProcInfo_20);
#line 449 "termination.m"
            {
#line 449 "termination.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__termination_scalar_common_1[2], transform_hlds__termination__OutputSupplierMap_2, ((MR_Box) (transform_hlds__termination__PPId_13)), &transform_hlds__termination__conv2_OutputSuppliers_21);
            }
#line 449 "termination.m"
            transform_hlds__termination__OutputSuppliers_21 = ((MR_Word) transform_hlds__termination__conv2_OutputSuppliers_21);
#line 450 "termination.m"
            {
#line 450 "termination.m"
              transform_hlds__termination__ArgSizeInfo_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 450 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeInfo_22, 0) = ((MR_Box) (transform_hlds__termination__Gamma_14));
#line 450 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeInfo_22, 1) = ((MR_Box) (transform_hlds__termination__OutputSuppliers_21));
#line 450 "termination.m"
            }
#line 452 "termination.m"
            {
#line 452 "termination.m"
              transform_hlds__termination__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 452 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_29_29, 0) = ((MR_Box) (transform_hlds__termination__ArgSizeInfo_22));
#line 452 "termination.m"
            }
#line 452 "termination.m"
            {
#line 452 "termination.m"
              hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_p_0(transform_hlds__termination__V_29_29, transform_hlds__termination__ProcInfo_20, &transform_hlds__termination__ProcInfo1_23);
            }
#line 453 "termination.m"
            {
#line 453 "termination.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__termination__TypeCtorInfo_35_35, transform_hlds__termination__ProcId_16, ((MR_Box) (transform_hlds__termination__ProcInfo1_23)), transform_hlds__termination__ProcTable0_19, &transform_hlds__termination__ProcTable_24);
            }
#line 454 "termination.m"
            {
#line 454 "termination.m"
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__termination__ProcTable_24, transform_hlds__termination__PredInfo0_18, &transform_hlds__termination__PredInfo_25);
            }
#line 455 "termination.m"
            {
#line 455 "termination.m"
              mercury__map__set_4_p_0(transform_hlds__termination__TypeCtorInfo_32_32, transform_hlds__termination__TypeCtorInfo_33_33, ((MR_Box) (transform_hlds__termination__PredId_15)), ((MR_Box) (transform_hlds__termination__PredInfo_25)), transform_hlds__termination__PredTable0_17, &transform_hlds__termination__PredTable_26);
            }
#line 456 "termination.m"
            {
#line 456 "termination.m"
              hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__termination__PredTable_26, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_30_30);
            }
#line 457 "termination.m"
            /* direct tailcall eliminated */
#line 457 "termination.m"
            {
#line 457 "termination.m"
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__Solns_10;
#line 457 "termination.m"
              MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_30_30;

#line 457 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 457 "termination.m"
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
#line 457 "termination.m"
            }
#line 457 "termination.m"
            continue;
#line 442 "termination.m"
          }
#line 441 "termination.m"
      }
#line 441 "termination.m"
      break;
#line 441 "termination.m"
    }
#line 438 "termination.m"
}

#line 402 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0_3(
#line 402 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 402 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1)
#line 402 "termination.m"
{
#line 402 "termination.m"
  {
#line 402 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 402 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

#line 402 "termination.m"
    {
#line 402 "termination.m"
      return transform_hlds__termination__succeeded = transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__402__1_1_p_0(((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 402 "termination.m"
    return transform_hlds__termination__succeeded;
#line 402 "termination.m"
  }
#line 402 "termination.m"
}

#line 393 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0_2(
#line 393 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 393 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1)
#line 393 "termination.m"
{
#line 393 "termination.m"
  {
#line 393 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 393 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

#line 393 "termination.m"
    {
#line 393 "termination.m"
      return transform_hlds__termination__succeeded = transform_hlds__term_util__is_termination_known_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 393 "termination.m"
    return transform_hlds__termination__succeeded;
#line 393 "termination.m"
  }
#line 393 "termination.m"
}

#line 368 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0_1(
#line 368 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 368 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1)
#line 368 "termination.m"
{
#line 368 "termination.m"
  {
#line 368 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 368 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

#line 368 "termination.m"
    {
#line 368 "termination.m"
      return transform_hlds__termination__succeeded = transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__368__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 368 "termination.m"
    return transform_hlds__termination__succeeded;
#line 368 "termination.m"
  }
#line 368 "termination.m"
}

#line 364 "termination.m"
static void MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0(
#line 364 "termination.m"
  MR_Word transform_hlds__termination__PassInfo_7,
#line 364 "termination.m"
  MR_Word transform_hlds__termination__SCC_8,
#line 364 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47,
#line 364 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_48)
#line 364 "termination.m"
{
#line 367 "termination.m"
  {
#line 367 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 367 "termination.m"
    MR_Word transform_hlds__termination__TypeCtorInfo_69_69;
#line 367 "termination.m"
    MR_Word transform_hlds__termination__IsArgSizeKnown_11;
#line 367 "termination.m"
    MR_Word transform_hlds__termination__SCCArgSizeUnknown_17;
#line 367 "termination.m"
    MR_Word transform_hlds__termination__ArgSizeErrors_18;
#line 367 "termination.m"
    MR_Word transform_hlds__termination__TermErrors_19;
#line 367 "termination.m"
    MR_Word transform_hlds__termination__SCCTerminationUnknown_27;
#line 367 "termination.m"
    MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_57_57;
#line 367 "termination.m"
    MR_Word transform_hlds__termination__V_58_58;
#line 372 "termination.m"
    MR_Word transform_hlds__termination___SCCArgSizeKnown_16;
#line 393 "termination.m"
    MR_Word transform_hlds__termination___SCCTerminationKnown_26;

#line 368 "termination.m"
    {
#line 368 "termination.m"
      transform_hlds__termination__IsArgSizeKnown_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 368 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsArgSizeKnown_11, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_6[0]));
#line 368 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsArgSizeKnown_11, 1) = ((MR_Box) (transform_hlds__termination__analyse_termination_in_scc_6_p_0_1));
#line 368 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsArgSizeKnown_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 368 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsArgSizeKnown_11, 3) = ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47));
#line 368 "termination.m"
    }
#line 3430 "transform_hlds.termination.c"
    transform_hlds__termination__TypeCtorInfo_69_69 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 372 "termination.m"
    {
#line 372 "termination.m"
      mercury__list__filter_4_p_0(transform_hlds__termination__TypeCtorInfo_69_69, transform_hlds__termination__IsArgSizeKnown_11, transform_hlds__termination__SCC_8, &transform_hlds__termination___SCCArgSizeKnown_16, &transform_hlds__termination__SCCArgSizeUnknown_17);
    }
#line 377 "termination.m"
    if ((transform_hlds__termination__SCCArgSizeUnknown_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 374 "termination.m"
      {
#line 375 "termination.m"
        transform_hlds__termination__ArgSizeErrors_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 376 "termination.m"
        transform_hlds__termination__TermErrors_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 374 "termination.m"
        transform_hlds__termination__STATE_VARIABLE_ModuleInfo_57_57 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47;
#line 374 "termination.m"
      }
#line 377 "termination.m"
    else
#line 378 "termination.m"
      {
#line 378 "termination.m"
        MR_Word transform_hlds__termination__ArgSizeResult_22;
#line 378 "termination.m"
        MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_53_53;

#line 379 "termination.m"
        {
#line 379 "termination.m"
          transform_hlds__term_pass1__find_arg_sizes_in_scc_8_p_0(transform_hlds__termination__SCCArgSizeUnknown_17, transform_hlds__termination__PassInfo_7, &transform_hlds__termination__ArgSizeResult_22, &transform_hlds__termination__TermErrors_19, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_53_53);
        }
#line 386 "termination.m"
        if (((MR_tag((MR_Word) transform_hlds__termination__ArgSizeResult_22)) == (MR_mktag((MR_Integer) 1))))
#line 387 "termination.m"
          {
#line 387 "termination.m"
            MR_Word transform_hlds__termination__V_55_55;

#line 387 "termination.m"
            transform_hlds__termination__ArgSizeErrors_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__ArgSizeResult_22, (MR_Integer) 0)));
#line 388 "termination.m"
            {
#line 388 "termination.m"
              transform_hlds__termination__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 388 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_55_55, 0) = ((MR_Box) (transform_hlds__termination__ArgSizeErrors_18));
#line 388 "termination.m"
            }
#line 388 "termination.m"
            {
#line 388 "termination.m"
              transform_hlds__termination__set_infinite_arg_size_infos_4_p_0(transform_hlds__termination__SCCArgSizeUnknown_17, transform_hlds__termination__V_55_55, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_53_53, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_57_57);
            }
#line 387 "termination.m"
          }
#line 386 "termination.m"
        else
#line 382 "termination.m"
          {
#line 382 "termination.m"
            MR_Word transform_hlds__termination__Solutions_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeResult_22, (MR_Integer) 0)));
#line 382 "termination.m"
            MR_Word transform_hlds__termination__OutputSupplierMap_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeResult_22, (MR_Integer) 1)));

#line 383 "termination.m"
            {
#line 383 "termination.m"
              transform_hlds__termination__set_finite_arg_size_infos_4_p_0(transform_hlds__termination__Solutions_23, transform_hlds__termination__OutputSupplierMap_24, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_53_53, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_57_57);
            }
#line 385 "termination.m"
            transform_hlds__termination__ArgSizeErrors_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 382 "termination.m"
          }
#line 378 "termination.m"
      }
#line 393 "termination.m"
    {
#line 393 "termination.m"
      transform_hlds__termination__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 393 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_58_58, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_6[0]));
#line 393 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_58_58, 1) = ((MR_Box) (transform_hlds__termination__analyse_termination_in_scc_6_p_0_2));
#line 393 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_58_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 393 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_58_58, 3) = ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_57_57));
#line 393 "termination.m"
    }
#line 393 "termination.m"
    {
#line 393 "termination.m"
      mercury__list__filter_4_p_0(transform_hlds__termination__TypeCtorInfo_69_69, transform_hlds__termination__V_58_58, transform_hlds__termination__SCC_8, &transform_hlds__termination___SCCTerminationKnown_26, &transform_hlds__termination__SCCTerminationUnknown_27);
    }
#line 400 "termination.m"
    if ((transform_hlds__termination__SCCTerminationUnknown_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 399 "termination.m"
      *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_48 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_57_57;
#line 400 "termination.m"
    else
#line 401 "termination.m"
      {
#line 401 "termination.m"
        MR_Word transform_hlds__termination__TypeCtorInfo_71_71 = (MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0;
#line 401 "termination.m"
        MR_Word transform_hlds__termination__FatalErrors_34;
#line 401 "termination.m"
        MR_Word transform_hlds__termination__BothErrors_35;

#line 406 "termination.m"
        {
#line 406 "termination.m"
          mercury__list__filter_3_p_0(transform_hlds__termination__TypeCtorInfo_71_71, (MR_Word) &transform_hlds__termination_scalar_common_2[4], transform_hlds__termination__ArgSizeErrors_18, &transform_hlds__termination__FatalErrors_34);
        }
#line 407 "termination.m"
        {
#line 407 "termination.m"
          transform_hlds__termination__BothErrors_35 = mercury__list__f_43_43_2_f_0(transform_hlds__termination__TypeCtorInfo_71_71, transform_hlds__termination__TermErrors_19, transform_hlds__termination__FatalErrors_34);
        }
#line 3551 "transform_hlds.termination.c"
        if ((transform_hlds__termination__BothErrors_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3553 "transform_hlds.termination.c"
          {
#line 3555 "transform_hlds.termination.c"
            MR_Word transform_hlds__termination__TerminationResult_42;
#line 3557 "transform_hlds.termination.c"
            MR_Word transform_hlds__termination__Globals_43;
#line 3559 "transform_hlds.termination.c"
            MR_Integer transform_hlds__termination__SingleArgs_44;
#line 3561 "transform_hlds.termination.c"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_62_62;
#line 3563 "transform_hlds.termination.c"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_64_64;

#line 417 "termination.m"
            {
#line 417 "termination.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_57_57, &transform_hlds__termination__Globals_43);
            }
#line 418 "termination.m"
            {
#line 418 "termination.m"
              libs__globals__lookup_int_option_3_p_0(transform_hlds__termination__Globals_43, (MR_Integer) 421, &transform_hlds__termination__SingleArgs_44);
            }
#line 420 "termination.m"
            {
#line 420 "termination.m"
              transform_hlds__term_pass2__prove_termination_in_scc_8_p_0(transform_hlds__termination__SCCTerminationUnknown_27, transform_hlds__termination__PassInfo_7, transform_hlds__termination__SingleArgs_44, &transform_hlds__termination__TerminationResult_42, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_57_57, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_62_62);
            }
#line 423 "termination.m"
            {
#line 423 "termination.m"
              transform_hlds__termination__set_termination_infos_4_p_0(transform_hlds__termination__SCCTerminationUnknown_27, transform_hlds__termination__TerminationResult_42, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_62_62, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_64_64);
            }
#line 428 "termination.m"
            if (((MR_tag((MR_Word) transform_hlds__termination__TerminationResult_42)) == (MR_mktag((MR_Integer) 1))))
#line 426 "termination.m"
              {
#line 426 "termination.m"
                MR_Word transform_hlds__termination__TerminationErrors_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__TerminationResult_42, (MR_Integer) 0)));

#line 427 "termination.m"
                {
#line 427 "termination.m"
                  transform_hlds__termination__report_termination_errors_6_p_0(transform_hlds__termination__SCC_8, transform_hlds__termination__TerminationErrors_45, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_64_64, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_48);
#line 427 "termination.m"
                  return;
                }
#line 426 "termination.m"
              }
#line 428 "termination.m"
            else
#line 429 "termination.m"
              *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_48 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_64_64;
#line 3606 "transform_hlds.termination.c"
          }
#line 3608 "transform_hlds.termination.c"
        else
#line 3610 "transform_hlds.termination.c"
          {
#line 3612 "transform_hlds.termination.c"
            MR_Integer transform_hlds__termination__MaxErrors_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PassInfo_7, (MR_Integer) 1)));
#line 3614 "transform_hlds.termination.c"
            MR_Word transform_hlds__termination__TerminationResult_74;
#line 3616 "transform_hlds.termination.c"
            MR_Word transform_hlds__termination__TerminationErrors_75;
#line 3618 "transform_hlds.termination.c"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_64_78;
#line 412 "termination.m"
            MR_Word transform_hlds__termination__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PassInfo_7, (MR_Integer) 0)));
#line 412 "termination.m"
            MR_Integer transform_hlds__termination__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PassInfo_7, (MR_Integer) 2)));

#line 413 "termination.m"
            {
#line 413 "termination.m"
              mercury__list__take_upto_3_p_0(transform_hlds__termination__TypeCtorInfo_71_71, transform_hlds__termination__MaxErrors_39, transform_hlds__termination__BothErrors_35, &transform_hlds__termination__TerminationErrors_75);
            }
#line 414 "termination.m"
            {
#line 414 "termination.m"
              transform_hlds__termination__TerminationResult_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 414 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__TerminationResult_74, 0) = ((MR_Box) (transform_hlds__termination__TerminationErrors_75));
#line 414 "termination.m"
            }
#line 423 "termination.m"
            {
#line 423 "termination.m"
              transform_hlds__termination__set_termination_infos_4_p_0(transform_hlds__termination__SCCTerminationUnknown_27, transform_hlds__termination__TerminationResult_74, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_57_57, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_64_78);
            }
#line 427 "termination.m"
            {
#line 427 "termination.m"
              transform_hlds__termination__report_termination_errors_6_p_0(transform_hlds__termination__SCC_8, transform_hlds__termination__TerminationErrors_75, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_64_78, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_48);
#line 427 "termination.m"
              return;
            }
#line 3650 "transform_hlds.termination.c"
          }
#line 401 "termination.m"
      }
#line 367 "termination.m"
  }
#line 364 "termination.m"
}

#line 333 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__check_procs_known_term_3_p_0(
#line 333 "termination.m"
  MR_Word transform_hlds__termination__Status_1,
#line 333 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_2,
#line 333 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_3)
#line 333 "termination.m"
{
#line 336 "termination.m"
  while (MR_TRUE)
#line 336 "termination.m"
    {
#line 336 "termination.m"
      /* tailcall optimized into a loop */
#line 336 "termination.m"
      {
#line 336 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 336 "termination.m"
        if ((transform_hlds__termination__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 336 "termination.m"
          transform_hlds__termination__succeeded = MR_TRUE;
#line 336 "termination.m"
        else
#line 337 "termination.m"
          {
#line 337 "termination.m"
            MR_Word transform_hlds__termination__PPId_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__2_2, (MR_Integer) 0)));
#line 337 "termination.m"
            MR_Word transform_hlds__termination__PPIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__2_2, (MR_Integer) 1)));
#line 337 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo_11;
#line 337 "termination.m"
            MR_Word transform_hlds__termination__MaybeTerm_12;
#line 337 "termination.m"
            MR_Word transform_hlds__termination__PPIdStatus_13;
#line 338 "termination.m"
            MR_Word transform_hlds__termination__V_10_10;

#line 338 "termination.m"
            {
#line 338 "termination.m"
              hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__termination__ModuleInfo_3, transform_hlds__termination__PPId_7, &transform_hlds__termination__V_10_10, &transform_hlds__termination__ProcInfo_11);
            }
#line 339 "termination.m"
            {
#line 339 "termination.m"
              hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__termination__ProcInfo_11, &transform_hlds__termination__MaybeTerm_12);
            }
#line 343 "termination.m"
            if ((transform_hlds__termination__MaybeTerm_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 341 "termination.m"
              {
#line 342 "termination.m"
                {
#line 342 "termination.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.termination", (MR_String) "predicate \140transform_hlds.termination.check_procs_known_term\'/3", (MR_String) "no termination info for procedure");
                }
#line 341 "termination.m"
              }
#line 343 "termination.m"
            else
#line 344 "termination.m"
              transform_hlds__termination__PPIdStatus_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__MaybeTerm_12, (MR_Integer) 0)));
#line 349 "termination.m"
            if (((MR_tag((MR_Word) transform_hlds__termination__Status_1)) == (MR_mktag((MR_Integer) 1))))
#line 351 "termination.m"
              {
#line 351 "termination.m"
                MR_Word transform_hlds__termination__V_17_17;

#line 351 "termination.m"
                transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__PPIdStatus_13)) == (MR_mktag((MR_Integer) 1)));
#line 351 "termination.m"
                if (transform_hlds__termination__succeeded)
#line 351 "termination.m"
                  transform_hlds__termination__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__PPIdStatus_13, (MR_Integer) 0)));
#line 351 "termination.m"
              }
#line 349 "termination.m"
            else
#line 348 "termination.m"
              transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__PPIdStatus_13)) == (MR_mktag((MR_Integer) 0)));
#line 337 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 353 "termination.m"
              {
#line 353 "termination.m"
                /* direct tailcall eliminated */
#line 353 "termination.m"
                {
#line 353 "termination.m"
                  MR_Word transform_hlds__termination__HeadVar__2__tmp_copy_2 = transform_hlds__termination__PPIds_8;

#line 353 "termination.m"
                  transform_hlds__termination__HeadVar__2_2 = transform_hlds__termination__HeadVar__2__tmp_copy_2;
#line 353 "termination.m"
                }
#line 353 "termination.m"
                continue;
#line 353 "termination.m"
              }
#line 337 "termination.m"
          }
#line 336 "termination.m"
        return transform_hlds__termination__succeeded;
#line 336 "termination.m"
      }
#line 336 "termination.m"
      break;
#line 336 "termination.m"
    }
#line 333 "termination.m"
}

#line 316 "termination.m"
static MR_Box MR_CALL 
transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0_2(
#line 316 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 316 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1)
#line 316 "termination.m"
{
#line 316 "termination.m"
  {
#line 316 "termination.m"
    MR_Box transform_hlds__termination__wrapper_arg_2;
#line 316 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;
#line 316 "termination.m"
    MR_Word transform_hlds__termination__conv0_HeadVar__2_42;

#line 316 "termination.m"
    {
#line 316 "termination.m"
      transform_hlds__termination__conv0_HeadVar__2_42 = transform_hlds__termination__IntroducedFrom__func__check_scc_pragmas_are_consistent__316__1_1_f_0(((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 316 "termination.m"
    transform_hlds__termination__wrapper_arg_2 = ((MR_Box) (transform_hlds__termination__conv0_HeadVar__2_42));
#line 316 "termination.m"
    return transform_hlds__termination__wrapper_arg_2;
#line 316 "termination.m"
  }
#line 316 "termination.m"
}

#line 283 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0_1(
#line 283 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 283 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1)
#line 283 "termination.m"
{
#line 283 "termination.m"
  {
#line 283 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 283 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

#line 283 "termination.m"
    {
#line 283 "termination.m"
      return transform_hlds__termination__succeeded = transform_hlds__term_util__is_termination_known_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 283 "termination.m"
    return transform_hlds__termination__succeeded;
#line 283 "termination.m"
  }
#line 283 "termination.m"
}

#line 278 "termination.m"
static void MR_CALL 
transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0(
#line 278 "termination.m"
  MR_Word transform_hlds__termination__SCC_6,
#line 278 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26,
#line 278 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27,
#line 278 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_0_28,
#line 278 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_Specs_29)
#line 278 "termination.m"
{
#line 282 "termination.m"
  {
#line 282 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 282 "termination.m"
    MR_Word transform_hlds__termination__TypeCtorInfo_66_66;
#line 282 "termination.m"
    MR_Word transform_hlds__termination__SCCTerminationKnown_9;
#line 282 "termination.m"
    MR_Word transform_hlds__termination__SCCTerminationUnknown_10;
#line 282 "termination.m"
    MR_Word transform_hlds__termination__V_30_30;

#line 283 "termination.m"
    {
#line 283 "termination.m"
      transform_hlds__termination__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 283 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_30_30, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_6[0]));
#line 283 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_30_30, 1) = ((MR_Box) (transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0_1));
#line 283 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 283 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_30_30, 3) = ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26));
#line 283 "termination.m"
    }
#line 3880 "transform_hlds.termination.c"
    transform_hlds__termination__TypeCtorInfo_66_66 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 283 "termination.m"
    {
#line 283 "termination.m"
      mercury__list__filter_4_p_0(transform_hlds__termination__TypeCtorInfo_66_66, transform_hlds__termination__V_30_30, transform_hlds__termination__SCC_6, &transform_hlds__termination__SCCTerminationKnown_9, &transform_hlds__termination__SCCTerminationUnknown_10);
    }
#line 287 "termination.m"
    if ((transform_hlds__termination__SCCTerminationKnown_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 286 "termination.m"
      {
#line 286 "termination.m"
        *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26;
#line 286 "termination.m"
        *transform_hlds__termination__STATE_VARIABLE_Specs_29 = transform_hlds__termination__STATE_VARIABLE_Specs_0_28;
#line 286 "termination.m"
      }
#line 287 "termination.m"
    else
#line 288 "termination.m"
      {
#line 288 "termination.m"
        MR_Word transform_hlds__termination__KnownPPId_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__SCCTerminationKnown_9, (MR_Integer) 0)));
#line 288 "termination.m"
        MR_Word transform_hlds__termination__KnownProcInfo_14;
#line 288 "termination.m"
        MR_Word transform_hlds__termination__MaybeKnownTerm_15;
#line 288 "termination.m"
        MR_Word transform_hlds__termination__KnownTermStatus_16;
#line 288 "termination.m"
        MR_Word transform_hlds__termination__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__SCCTerminationKnown_9, (MR_Integer) 1)));
#line 289 "termination.m"
        MR_Word transform_hlds__termination__V_13_13;
#line 337 "termination.m"
        MR_Word transform_hlds__termination__PPId_72;
#line 337 "termination.m"
        MR_Word transform_hlds__termination__PPIds_73;
#line 337 "termination.m"
        MR_Word transform_hlds__termination__ProcInfo_76;
#line 337 "termination.m"
        MR_Word transform_hlds__termination__MaybeTerm_77;
#line 337 "termination.m"
        MR_Word transform_hlds__termination__PPIdStatus_78;
#line 338 "termination.m"
        MR_Word transform_hlds__termination__V_75_75;

#line 289 "termination.m"
        {
#line 289 "termination.m"
          hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26, transform_hlds__termination__KnownPPId_11, &transform_hlds__termination__V_13_13, &transform_hlds__termination__KnownProcInfo_14);
        }
#line 290 "termination.m"
        {
#line 290 "termination.m"
          hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__termination__KnownProcInfo_14, &transform_hlds__termination__MaybeKnownTerm_15);
        }
#line 294 "termination.m"
        if ((transform_hlds__termination__MaybeKnownTerm_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 292 "termination.m"
          {
#line 293 "termination.m"
            {
#line 293 "termination.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.termination", (MR_String) "predicate \140transform_hlds.termination.check_scc_pragmas_are_consistent\'/5", (MR_String) "no termination info found");
#line 293 "termination.m"
              return;
            }
#line 292 "termination.m"
          }
#line 294 "termination.m"
        else
#line 295 "termination.m"
          transform_hlds__termination__KnownTermStatus_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__MaybeKnownTerm_15, (MR_Integer) 0)));
#line 337 "termination.m"
        transform_hlds__termination__PPId_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__SCCTerminationKnown_9, (MR_Integer) 0)));
#line 337 "termination.m"
        transform_hlds__termination__PPIds_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__SCCTerminationKnown_9, (MR_Integer) 1)));
#line 338 "termination.m"
        {
#line 338 "termination.m"
          hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26, transform_hlds__termination__PPId_72, &transform_hlds__termination__V_75_75, &transform_hlds__termination__ProcInfo_76);
        }
#line 339 "termination.m"
        {
#line 339 "termination.m"
          hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__termination__ProcInfo_76, &transform_hlds__termination__MaybeTerm_77);
        }
#line 343 "termination.m"
        if ((transform_hlds__termination__MaybeTerm_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 341 "termination.m"
          {
#line 342 "termination.m"
            {
#line 342 "termination.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.termination", (MR_String) "predicate \140transform_hlds.termination.check_procs_known_term\'/3", (MR_String) "no termination info for procedure");
#line 342 "termination.m"
              return;
            }
#line 341 "termination.m"
          }
#line 343 "termination.m"
        else
#line 344 "termination.m"
          transform_hlds__termination__PPIdStatus_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__MaybeTerm_77, (MR_Integer) 0)));
#line 349 "termination.m"
        if (((MR_tag((MR_Word) transform_hlds__termination__KnownTermStatus_16)) == (MR_mktag((MR_Integer) 1))))
#line 351 "termination.m"
          {
#line 351 "termination.m"
            MR_Word transform_hlds__termination__V_82_82;

#line 351 "termination.m"
            transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__PPIdStatus_78)) == (MR_mktag((MR_Integer) 1)));
#line 351 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 351 "termination.m"
              transform_hlds__termination__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__PPIdStatus_78, (MR_Integer) 0)));
#line 351 "termination.m"
          }
#line 349 "termination.m"
        else
#line 348 "termination.m"
          transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__PPIdStatus_78)) == (MR_mktag((MR_Integer) 0)));
#line 337 "termination.m"
        if (transform_hlds__termination__succeeded)
#line 353 "termination.m"
          {
#line 353 "termination.m"
            transform_hlds__termination__succeeded = transform_hlds__termination__check_procs_known_term_3_p_0(transform_hlds__termination__KnownTermStatus_16, transform_hlds__termination__PPIds_73, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26);
          }
#line 306 "termination.m"
        if (transform_hlds__termination__succeeded)
#line 304 "termination.m"
          {
#line 304 "termination.m"
            {
#line 304 "termination.m"
              transform_hlds__termination__set_termination_infos_4_p_0(transform_hlds__termination__SCCTerminationUnknown_10, transform_hlds__termination__KnownTermStatus_16, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27);
            }
#line 304 "termination.m"
            *transform_hlds__termination__STATE_VARIABLE_Specs_29 = transform_hlds__termination__STATE_VARIABLE_Specs_0_28;
#line 304 "termination.m"
          }
#line 306 "termination.m"
        else
#line 311 "termination.m"
          {
#line 311 "termination.m"
            MR_Word transform_hlds__termination__Context_17;
#line 311 "termination.m"
            MR_Word transform_hlds__termination__NewTermStatus_18;
#line 311 "termination.m"
            MR_Word transform_hlds__termination__PredIds_19;
#line 311 "termination.m"
            MR_Word transform_hlds__termination__PredNamePieces_22;
#line 311 "termination.m"
            MR_Word transform_hlds__termination__Pieces_23;
#line 311 "termination.m"
            MR_Word transform_hlds__termination__Msg_24;
#line 311 "termination.m"
            MR_Word transform_hlds__termination__Spec_25;
#line 311 "termination.m"
            MR_Word transform_hlds__termination__V_35_35;
#line 311 "termination.m"
            MR_Word transform_hlds__termination__V_36_36;
#line 311 "termination.m"
            MR_Word transform_hlds__termination__V_44_44;
#line 311 "termination.m"
            MR_Word transform_hlds__termination__V_54_54;
#line 311 "termination.m"
            MR_Word transform_hlds__termination__V_55_55;
#line 311 "termination.m"
            MR_Word transform_hlds__termination__V_59_59;

#line 310 "termination.m"
            {
#line 310 "termination.m"
              transform_hlds__term_util__get_context_from_scc_3_p_0(transform_hlds__termination__SCCTerminationKnown_9, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26, &transform_hlds__termination__Context_17);
            }
#line 312 "termination.m"
            {
#line 312 "termination.m"
              transform_hlds__termination__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 312 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__V_36_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 312 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__V_36_36, 1) = ((MR_Box) (transform_hlds__termination__Context_17));
#line 312 "termination.m"
            }
#line 313 "termination.m"
            {
#line 313 "termination.m"
              transform_hlds__termination__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_35_35, 0) = ((MR_Box) (transform_hlds__termination__V_36_36));
#line 313 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 313 "termination.m"
            }
#line 312 "termination.m"
            {
#line 312 "termination.m"
              transform_hlds__termination__NewTermStatus_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 312 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__NewTermStatus_18, 0) = ((MR_Box) (transform_hlds__termination__V_35_35));
#line 312 "termination.m"
            }
#line 314 "termination.m"
            {
#line 314 "termination.m"
              transform_hlds__termination__set_termination_infos_4_p_0(transform_hlds__termination__SCC_6, transform_hlds__termination__NewTermStatus_18, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27);
            }
#line 316 "termination.m"
            {
#line 316 "termination.m"
              transform_hlds__termination__PredIds_19 = mercury__list__map_2_f_0(transform_hlds__termination__TypeCtorInfo_66_66, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &transform_hlds__termination_scalar_common_2[3], transform_hlds__termination__SCCTerminationKnown_9);
            }
#line 318 "termination.m"
            {
#line 318 "termination.m"
              transform_hlds__termination__PredNamePieces_22 = hlds__hlds_error_util__describe_several_pred_names_3_f_0(*transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27, (MR_Integer) 0, transform_hlds__termination__PredIds_19);
            }
#line 321 "termination.m"
            {
#line 321 "termination.m"
              transform_hlds__termination__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 321 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_44_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[36])));
#line 321 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_44_44, 1) = ((MR_Box) (transform_hlds__termination__PredNamePieces_22));
#line 321 "termination.m"
            }
#line 321 "termination.m"
            {
#line 321 "termination.m"
              transform_hlds__termination__Pieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__termination__V_44_44, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[26]));
            }
#line 324 "termination.m"
            {
#line 324 "termination.m"
              transform_hlds__termination__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 324 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__V_55_55, 0) = ((MR_Box) (transform_hlds__termination__Pieces_23));
#line 324 "termination.m"
            }
#line 324 "termination.m"
            {
#line 324 "termination.m"
              transform_hlds__termination__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 324 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_54_54, 0) = ((MR_Box) (transform_hlds__termination__V_55_55));
#line 324 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 324 "termination.m"
            }
#line 324 "termination.m"
            {
#line 324 "termination.m"
              transform_hlds__termination__Msg_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 324 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__Msg_24, 0) = ((MR_Box) (transform_hlds__termination__Context_17));
#line 324 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__Msg_24, 1) = ((MR_Box) (transform_hlds__termination__V_54_54));
#line 324 "termination.m"
            }
#line 325 "termination.m"
            {
#line 325 "termination.m"
              transform_hlds__termination__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 325 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_59_59, 0) = ((MR_Box) (transform_hlds__termination__Msg_24));
#line 325 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 325 "termination.m"
            }
#line 325 "termination.m"
            {
#line 325 "termination.m"
              transform_hlds__termination__Spec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 325 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 325 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 325 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_25, 2) = ((MR_Box) (transform_hlds__termination__V_59_59));
#line 325 "termination.m"
            }
#line 326 "termination.m"
            {
#line 326 "termination.m"
              MR_Word base;
#line 326 "termination.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 326 "termination.m"
              *transform_hlds__termination__STATE_VARIABLE_Specs_29 = base;
#line 326 "termination.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__termination__Spec_25));
#line 326 "termination.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_Specs_0_28));
#line 326 "termination.m"
            }
#line 311 "termination.m"
          }
#line 288 "termination.m"
      }
#line 282 "termination.m"
  }
#line 278 "termination.m"
}

#line 174 "termination.m"
static void MR_CALL 
transform_hlds__termination__check_foreign_code_attributes_of_proc_7_p_0(
#line 174 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_8,
#line 174 "termination.m"
  MR_Word transform_hlds__termination__PPId_9,
#line 174 "termination.m"
  MR_Word transform_hlds__termination__Attributes_10,
#line 174 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25,
#line 174 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcInfo_26,
#line 174 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_0_27,
#line 174 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_Specs_28)
#line 174 "termination.m"
{
#line 180 "termination.m"
  {
#line 180 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 180 "termination.m"
    MR_Word transform_hlds__termination__MaybeTermination_13;
#line 180 "termination.m"
    MR_Word transform_hlds__termination__Context_14;

#line 181 "termination.m"
    {
#line 181 "termination.m"
      hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25, &transform_hlds__termination__MaybeTermination_13);
    }
#line 182 "termination.m"
    {
#line 182 "termination.m"
      hlds__hlds_pred__proc_info_get_context_2_p_0(transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25, &transform_hlds__termination__Context_14);
    }
#line 194 "termination.m"
    if ((transform_hlds__termination__MaybeTermination_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 184 "termination.m"
      {
#line 185 "termination.m"
        {
#line 185 "termination.m"
          transform_hlds__termination__succeeded = transform_hlds__term_util__attributes_imply_termination_1_p_0(transform_hlds__termination__Attributes_10);
        }
#line 188 "termination.m"
        if (transform_hlds__termination__succeeded)
#line 186 "termination.m"
          {
#line 186 "termination.m"
            mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 187 "termination.m"
            {
#line 187 "termination.m"
              hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_5[1]), transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25, transform_hlds__termination__STATE_VARIABLE_ProcInfo_26);
            }
#line 186 "termination.m"
          }
#line 188 "termination.m"
        else
#line 190 "termination.m"
          {
#line 190 "termination.m"
            MR_Word transform_hlds__termination__TermErr_16;
#line 190 "termination.m"
            MR_Word transform_hlds__termination__V_104_104;
#line 190 "termination.m"
            MR_Word transform_hlds__termination__V_105_105;
#line 190 "termination.m"
            MR_Word transform_hlds__termination__V_106_106;
#line 190 "termination.m"
            MR_Word transform_hlds__termination__TermStatus_109;

#line 190 "termination.m"
            {
#line 190 "termination.m"
              transform_hlds__termination__V_104_104 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 190 "termination.m"
              MR_hl_field(MR_mktag(3), transform_hlds__termination__V_104_104, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 190 "termination.m"
              MR_hl_field(MR_mktag(3), transform_hlds__termination__V_104_104, 1) = ((MR_Box) (transform_hlds__termination__PPId_9));
#line 190 "termination.m"
            }
#line 189 "termination.m"
            {
#line 189 "termination.m"
              transform_hlds__termination__TermErr_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 189 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__TermErr_16, 0) = ((MR_Box) (transform_hlds__termination__V_104_104));
#line 189 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__TermErr_16, 1) = ((MR_Box) (transform_hlds__termination__Context_14));
#line 189 "termination.m"
            }
#line 191 "termination.m"
            {
#line 191 "termination.m"
              transform_hlds__termination__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 191 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_106_106, 0) = ((MR_Box) (transform_hlds__termination__TermErr_16));
#line 191 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_106_106, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 191 "termination.m"
            }
#line 191 "termination.m"
            {
#line 191 "termination.m"
              transform_hlds__termination__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 191 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_105_105, 0) = ((MR_Box) (transform_hlds__termination__V_106_106));
#line 191 "termination.m"
            }
#line 191 "termination.m"
            {
#line 191 "termination.m"
              transform_hlds__termination__TermStatus_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 191 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__TermStatus_109, 0) = ((MR_Box) (transform_hlds__termination__V_105_105));
#line 191 "termination.m"
            }
#line 192 "termination.m"
            {
#line 192 "termination.m"
              hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(transform_hlds__termination__TermStatus_109, transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25, transform_hlds__termination__STATE_VARIABLE_ProcInfo_26);
            }
#line 190 "termination.m"
          }
#line 184 "termination.m"
        *transform_hlds__termination__STATE_VARIABLE_Specs_28 = transform_hlds__termination__STATE_VARIABLE_Specs_0_27;
#line 184 "termination.m"
      }
#line 194 "termination.m"
    else
#line 194 "termination.m"
      {
#line 194 "termination.m"
        MR_Word transform_hlds__termination__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__MaybeTermination_13, (MR_Integer) 0)));

#line 194 "termination.m"
        if (((MR_tag((MR_Word) transform_hlds__termination__V_137_137)) == (MR_mktag((MR_Integer) 1))))
#line 224 "termination.m"
          {
#line 224 "termination.m"
            MR_Word transform_hlds__termination__TermErrs0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__V_137_137, (MR_Integer) 0)));
#line 224 "termination.m"
            MR_Word transform_hlds__termination__ProcTerminates_130;

#line 225 "termination.m"
            {
#line 225 "termination.m"
              transform_hlds__termination__ProcTerminates_130 = parse_tree__prog_data__get_terminates_1_f_0(transform_hlds__termination__Attributes_10);
            }
#line 243 "termination.m"
#line 243 "termination.m"
            switch (transform_hlds__termination__ProcTerminates_130) {
#line 243 "termination.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 243 "termination.m"
              case (MR_Integer) 2:
#line 245 "termination.m"
                {
#line 245 "termination.m"
                  *transform_hlds__termination__STATE_VARIABLE_ProcInfo_26 = transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25;
#line 245 "termination.m"
                  *transform_hlds__termination__STATE_VARIABLE_Specs_28 = transform_hlds__termination__STATE_VARIABLE_Specs_0_27;
#line 245 "termination.m"
                }
#line 243 "termination.m"
                break;
#line 243 "termination.m"
              case (MR_Integer) 1:
#line 244 "termination.m"
                {
#line 244 "termination.m"
                  *transform_hlds__termination__STATE_VARIABLE_ProcInfo_26 = transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25;
#line 244 "termination.m"
                  *transform_hlds__termination__STATE_VARIABLE_Specs_28 = transform_hlds__termination__STATE_VARIABLE_Specs_0_27;
#line 244 "termination.m"
                }
#line 243 "termination.m"
                break;
#line 243 "termination.m"
              case (MR_Integer) 0:
#line 227 "termination.m"
                {
#line 227 "termination.m"
                  MR_Word transform_hlds__termination__TermErrs_24;
#line 227 "termination.m"
                  MR_Word transform_hlds__termination__V_31_31;
#line 227 "termination.m"
                  MR_Word transform_hlds__termination__V_34_34;
#line 227 "termination.m"
                  MR_Word transform_hlds__termination__V_56_56;
#line 227 "termination.m"
                  MR_Word transform_hlds__termination__V_57_57;
#line 227 "termination.m"
                  MR_Word transform_hlds__termination__V_61_61;
#line 227 "termination.m"
                  MR_Word transform_hlds__termination__TermStatus_116;
#line 227 "termination.m"
                  MR_Word transform_hlds__termination__TermErr_117;
#line 227 "termination.m"
                  MR_Word transform_hlds__termination__ProcNamePieces_118;
#line 227 "termination.m"
                  MR_Word transform_hlds__termination__Pieces_119;
#line 227 "termination.m"
                  MR_Word transform_hlds__termination__Msg_120;
#line 227 "termination.m"
                  MR_Word transform_hlds__termination__Spec_121;

#line 228 "termination.m"
                  {
#line 228 "termination.m"
                    transform_hlds__termination__TermErr_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 228 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__TermErr_117, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 228 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__TermErr_117, 1) = ((MR_Box) (transform_hlds__termination__Context_14));
#line 228 "termination.m"
                  }
#line 230 "termination.m"
                  {
#line 230 "termination.m"
                    transform_hlds__termination__TermErrs_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 230 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__TermErrs_24, 0) = ((MR_Box) (transform_hlds__termination__TermErr_117));
#line 230 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__TermErrs_24, 1) = ((MR_Box) (transform_hlds__termination__TermErrs0_23));
#line 230 "termination.m"
                  }
#line 231 "termination.m"
                  {
#line 231 "termination.m"
                    transform_hlds__termination__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 231 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_31_31, 0) = ((MR_Box) (transform_hlds__termination__TermErrs_24));
#line 231 "termination.m"
                  }
#line 231 "termination.m"
                  {
#line 231 "termination.m"
                    transform_hlds__termination__TermStatus_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 231 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__TermStatus_116, 0) = ((MR_Box) (transform_hlds__termination__V_31_31));
#line 231 "termination.m"
                  }
#line 233 "termination.m"
                  {
#line 233 "termination.m"
                    hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(transform_hlds__termination__TermStatus_116, transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25, transform_hlds__termination__STATE_VARIABLE_ProcInfo_26);
                  }
#line 234 "termination.m"
                  {
#line 234 "termination.m"
                    transform_hlds__termination__ProcNamePieces_118 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__termination__ModuleInfo_8, (MR_Integer) 0, transform_hlds__termination__PPId_9);
                  }
#line 236 "termination.m"
                  {
#line 236 "termination.m"
                    transform_hlds__termination__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 236 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_34_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[36])));
#line 236 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_34_34, 1) = ((MR_Box) (transform_hlds__termination__ProcNamePieces_118));
#line 236 "termination.m"
                  }
#line 236 "termination.m"
                  {
#line 236 "termination.m"
                    transform_hlds__termination__Pieces_119 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__termination__V_34_34, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[15]));
                  }
#line 240 "termination.m"
                  {
#line 240 "termination.m"
                    transform_hlds__termination__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 240 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__V_57_57, 0) = ((MR_Box) (transform_hlds__termination__Pieces_119));
#line 240 "termination.m"
                  }
#line 240 "termination.m"
                  {
#line 240 "termination.m"
                    transform_hlds__termination__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 240 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_56_56, 0) = ((MR_Box) (transform_hlds__termination__V_57_57));
#line 240 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 240 "termination.m"
                  }
#line 240 "termination.m"
                  {
#line 240 "termination.m"
                    transform_hlds__termination__Msg_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 240 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__Msg_120, 0) = ((MR_Box) (transform_hlds__termination__Context_14));
#line 240 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__Msg_120, 1) = ((MR_Box) (transform_hlds__termination__V_56_56));
#line 240 "termination.m"
                  }
#line 241 "termination.m"
                  {
#line 241 "termination.m"
                    transform_hlds__termination__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 241 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_61_61, 0) = ((MR_Box) (transform_hlds__termination__Msg_120));
#line 241 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 241 "termination.m"
                  }
#line 241 "termination.m"
                  {
#line 241 "termination.m"
                    transform_hlds__termination__Spec_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 241 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_121, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 241 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 241 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_121, 2) = ((MR_Box) (transform_hlds__termination__V_61_61));
#line 241 "termination.m"
                  }
#line 242 "termination.m"
                  {
#line 242 "termination.m"
                    MR_Word base;
#line 242 "termination.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 242 "termination.m"
                    *transform_hlds__termination__STATE_VARIABLE_Specs_28 = base;
#line 242 "termination.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__termination__Spec_121));
#line 242 "termination.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_Specs_0_27));
#line 242 "termination.m"
                  }
#line 227 "termination.m"
                }
#line 243 "termination.m"
                break;
#line 243 "termination.m"
            }
#line 224 "termination.m"
          }
#line 194 "termination.m"
        else
#line 197 "termination.m"
          {
#line 197 "termination.m"
            MR_Word transform_hlds__termination__ProcTerminates_18;

#line 198 "termination.m"
            {
#line 198 "termination.m"
              transform_hlds__termination__ProcTerminates_18 = parse_tree__prog_data__get_terminates_1_f_0(transform_hlds__termination__Attributes_10);
            }
#line 215 "termination.m"
#line 215 "termination.m"
            switch (transform_hlds__termination__ProcTerminates_18) {
#line 215 "termination.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 215 "termination.m"
              case (MR_Integer) 2:
#line 217 "termination.m"
                {
#line 217 "termination.m"
                  *transform_hlds__termination__STATE_VARIABLE_ProcInfo_26 = transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25;
#line 217 "termination.m"
                  *transform_hlds__termination__STATE_VARIABLE_Specs_28 = transform_hlds__termination__STATE_VARIABLE_Specs_0_27;
#line 217 "termination.m"
                }
#line 215 "termination.m"
                break;
#line 215 "termination.m"
              case (MR_Integer) 1:
#line 200 "termination.m"
                {
#line 200 "termination.m"
                  MR_Word transform_hlds__termination__ProcNamePieces_19;
#line 200 "termination.m"
                  MR_Word transform_hlds__termination__Pieces_20;
#line 200 "termination.m"
                  MR_Word transform_hlds__termination__Msg_21;
#line 200 "termination.m"
                  MR_Word transform_hlds__termination__Spec_22;
#line 200 "termination.m"
                  MR_Word transform_hlds__termination__V_66_66;
#line 200 "termination.m"
                  MR_Word transform_hlds__termination__V_67_67;
#line 200 "termination.m"
                  MR_Word transform_hlds__termination__V_71_71;
#line 200 "termination.m"
                  MR_Word transform_hlds__termination__V_93_93;
#line 200 "termination.m"
                  MR_Word transform_hlds__termination__V_94_94;
#line 200 "termination.m"
                  MR_Word transform_hlds__termination__V_98_98;
#line 200 "termination.m"
                  MR_Word transform_hlds__termination__TermStatus_110;
#line 200 "termination.m"
                  MR_Word transform_hlds__termination__TermErr_111;

#line 201 "termination.m"
                  {
#line 201 "termination.m"
                    transform_hlds__termination__TermErr_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 201 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__TermErr_111, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 201 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__TermErr_111, 1) = ((MR_Box) (transform_hlds__termination__Context_14));
#line 201 "termination.m"
                  }
#line 203 "termination.m"
                  {
#line 203 "termination.m"
                    transform_hlds__termination__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 203 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_67_67, 0) = ((MR_Box) (transform_hlds__termination__TermErr_111));
#line 203 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 203 "termination.m"
                  }
#line 203 "termination.m"
                  {
#line 203 "termination.m"
                    transform_hlds__termination__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 203 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_66_66, 0) = ((MR_Box) (transform_hlds__termination__V_67_67));
#line 203 "termination.m"
                  }
#line 203 "termination.m"
                  {
#line 203 "termination.m"
                    transform_hlds__termination__TermStatus_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 203 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__TermStatus_110, 0) = ((MR_Box) (transform_hlds__termination__V_66_66));
#line 203 "termination.m"
                  }
#line 205 "termination.m"
                  {
#line 205 "termination.m"
                    hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(transform_hlds__termination__TermStatus_110, transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25, transform_hlds__termination__STATE_VARIABLE_ProcInfo_26);
                  }
#line 206 "termination.m"
                  {
#line 206 "termination.m"
                    transform_hlds__termination__ProcNamePieces_19 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__termination__ModuleInfo_8, (MR_Integer) 0, transform_hlds__termination__PPId_9);
                  }
#line 208 "termination.m"
                  {
#line 208 "termination.m"
                    transform_hlds__termination__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 208 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_71_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[36])));
#line 208 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_71_71, 1) = ((MR_Box) (transform_hlds__termination__ProcNamePieces_19));
#line 208 "termination.m"
                  }
#line 208 "termination.m"
                  {
#line 208 "termination.m"
                    transform_hlds__termination__Pieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__termination__V_71_71, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[22]));
                  }
#line 212 "termination.m"
                  {
#line 212 "termination.m"
                    transform_hlds__termination__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 212 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__V_94_94, 0) = ((MR_Box) (transform_hlds__termination__Pieces_20));
#line 212 "termination.m"
                  }
#line 212 "termination.m"
                  {
#line 212 "termination.m"
                    transform_hlds__termination__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 212 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_93_93, 0) = ((MR_Box) (transform_hlds__termination__V_94_94));
#line 212 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 212 "termination.m"
                  }
#line 212 "termination.m"
                  {
#line 212 "termination.m"
                    transform_hlds__termination__Msg_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 212 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__Msg_21, 0) = ((MR_Box) (transform_hlds__termination__Context_14));
#line 212 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__Msg_21, 1) = ((MR_Box) (transform_hlds__termination__V_93_93));
#line 212 "termination.m"
                  }
#line 213 "termination.m"
                  {
#line 213 "termination.m"
                    transform_hlds__termination__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 213 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_98_98, 0) = ((MR_Box) (transform_hlds__termination__Msg_21));
#line 213 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_98_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 213 "termination.m"
                  }
#line 213 "termination.m"
                  {
#line 213 "termination.m"
                    transform_hlds__termination__Spec_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 213 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 213 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 213 "termination.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_22, 2) = ((MR_Box) (transform_hlds__termination__V_98_98));
#line 213 "termination.m"
                  }
#line 214 "termination.m"
                  {
#line 214 "termination.m"
                    MR_Word base;
#line 214 "termination.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 214 "termination.m"
                    *transform_hlds__termination__STATE_VARIABLE_Specs_28 = base;
#line 214 "termination.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__termination__Spec_22));
#line 214 "termination.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_Specs_0_27));
#line 214 "termination.m"
                  }
#line 200 "termination.m"
                }
#line 215 "termination.m"
                break;
#line 215 "termination.m"
              case (MR_Integer) 0:
#line 216 "termination.m"
                {
#line 216 "termination.m"
                  *transform_hlds__termination__STATE_VARIABLE_ProcInfo_26 = transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25;
#line 216 "termination.m"
                  *transform_hlds__termination__STATE_VARIABLE_Specs_28 = transform_hlds__termination__STATE_VARIABLE_Specs_0_27;
#line 216 "termination.m"
                }
#line 215 "termination.m"
                break;
#line 215 "termination.m"
            }
#line 197 "termination.m"
          }
#line 194 "termination.m"
      }
#line 180 "termination.m"
  }
#line 174 "termination.m"
}

#line 146 "termination.m"
static void MR_CALL 
transform_hlds__termination__check_foreign_code_attributes_in_scc_5_p_0(
#line 146 "termination.m"
  MR_Word transform_hlds__termination__PPIds_6,
#line 146 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26,
#line 146 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27,
#line 146 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_0_28,
#line 146 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_Specs_29)
#line 146 "termination.m"
{
#line 152 "termination.m"
  {
#line 152 "termination.m"
    MR_bool transform_hlds__termination__succeeded;

#line 152 "termination.m"
    if ((transform_hlds__termination__PPIds_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 152 "termination.m"
      {
#line 153 "termination.m"
        {
#line 153 "termination.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.termination", (MR_String) "predicate \140transform_hlds.termination.check_foreign_code_attributes_in_scc\'/5", (MR_String) "empty SCC");
#line 153 "termination.m"
          return;
        }
#line 152 "termination.m"
      }
#line 152 "termination.m"
    else
#line 152 "termination.m"
      {
#line 152 "termination.m"
        MR_Word transform_hlds__termination__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__PPIds_6, (MR_Integer) 1)));
#line 152 "termination.m"
        MR_Word transform_hlds__termination__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__PPIds_6, (MR_Integer) 0)));

#line 152 "termination.m"
        if ((transform_hlds__termination__V_37_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 155 "termination.m"
          {
#line 155 "termination.m"
            MR_Word transform_hlds__termination__PredInfo_10;
#line 155 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo0_11;
#line 166 "termination.m"
            MR_Word transform_hlds__termination__Attributes_15;
#line 158 "termination.m"
            MR_Word transform_hlds__termination__Goal_12;
#line 158 "termination.m"
            MR_Word transform_hlds__termination__GoalExpr_13;
#line 159 "termination.m"
            MR_Word transform_hlds__termination___GoalInfo_14;
#line 160 "termination.m"
            MR_Word transform_hlds__termination__V_16_16;
#line 160 "termination.m"
            MR_Integer transform_hlds__termination__V_17_17;
#line 160 "termination.m"
            MR_Word transform_hlds__termination__V_18_18;
#line 160 "termination.m"
            MR_Word transform_hlds__termination__V_19_19;
#line 160 "termination.m"
            MR_Word transform_hlds__termination__V_20_20;
#line 160 "termination.m"
            MR_Word transform_hlds__termination__V_21_21;

#line 156 "termination.m"
            {
#line 156 "termination.m"
              hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26, transform_hlds__termination__V_38_38, &transform_hlds__termination__PredInfo_10, &transform_hlds__termination__ProcInfo0_11);
            }
#line 158 "termination.m"
            {
#line 158 "termination.m"
              hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__termination__ProcInfo0_11, &transform_hlds__termination__Goal_12);
            }
#line 159 "termination.m"
            transform_hlds__termination__GoalExpr_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__Goal_12, (MR_Integer) 0)));
#line 159 "termination.m"
            transform_hlds__termination___GoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__Goal_12, (MR_Integer) 1)));
#line 160 "termination.m"
            transform_hlds__termination__succeeded = ((((MR_tag((MR_Word) transform_hlds__termination__GoalExpr_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__GoalExpr_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 160 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 160 "termination.m"
              {
#line 160 "termination.m"
                transform_hlds__termination__Attributes_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__GoalExpr_13, (MR_Integer) 1)));
#line 160 "termination.m"
                transform_hlds__termination__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__GoalExpr_13, (MR_Integer) 2)));
#line 160 "termination.m"
                transform_hlds__termination__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__termination__GoalExpr_13, (MR_Integer) 3)));
#line 160 "termination.m"
                transform_hlds__termination__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__GoalExpr_13, (MR_Integer) 4)));
#line 160 "termination.m"
                transform_hlds__termination__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__GoalExpr_13, (MR_Integer) 5)));
#line 160 "termination.m"
                transform_hlds__termination__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__GoalExpr_13, (MR_Integer) 6)));
#line 160 "termination.m"
                transform_hlds__termination__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__GoalExpr_13, (MR_Integer) 7)));
#line 163 "termination.m"
                {
#line 163 "termination.m"
                  MR_Word transform_hlds__termination__ProcInfo_22;

#line 162 "termination.m"
                  {
#line 162 "termination.m"
                    transform_hlds__termination__check_foreign_code_attributes_of_proc_7_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26, transform_hlds__termination__V_38_38, transform_hlds__termination__Attributes_15, transform_hlds__termination__ProcInfo0_11, &transform_hlds__termination__ProcInfo_22, transform_hlds__termination__STATE_VARIABLE_Specs_0_28, transform_hlds__termination__STATE_VARIABLE_Specs_29);
                  }
#line 164 "termination.m"
                  {
#line 164 "termination.m"
                    hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(transform_hlds__termination__V_38_38, transform_hlds__termination__PredInfo_10, transform_hlds__termination__ProcInfo_22, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27);
#line 164 "termination.m"
                    return;
                  }
#line 163 "termination.m"
                }
#line 160 "termination.m"
              }
#line 160 "termination.m"
            else
#line 167 "termination.m"
              {
#line 167 "termination.m"
                *transform_hlds__termination__STATE_VARIABLE_Specs_29 = transform_hlds__termination__STATE_VARIABLE_Specs_0_28;
#line 167 "termination.m"
                *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26;
#line 167 "termination.m"
              }
#line 155 "termination.m"
          }
#line 152 "termination.m"
        else
#line 170 "termination.m"
          {
#line 170 "termination.m"
            *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26;
#line 170 "termination.m"
            *transform_hlds__termination__STATE_VARIABLE_Specs_29 = transform_hlds__termination__STATE_VARIABLE_Specs_0_28;
#line 170 "termination.m"
          }
#line 152 "termination.m"
      }
#line 152 "termination.m"
  }
#line 146 "termination.m"
}

#line 110 "termination.m"
static void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_5_p_0_3(
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
    MR_Word transform_hlds__termination__conv8_STATE_VARIABLE_ModuleInfo_48;

#line 110 "termination.m"
    {
#line 110 "termination.m"
      transform_hlds__termination__analyse_termination_in_scc_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1), ((MR_Word) transform_hlds__termination__wrapper_arg_2), &transform_hlds__termination__conv8_STATE_VARIABLE_ModuleInfo_48);
    }
#line 110 "termination.m"
    *transform_hlds__termination__wrapper_arg_3 = ((MR_Box) (transform_hlds__termination__conv8_STATE_VARIABLE_ModuleInfo_48));
#line 110 "termination.m"
  }
#line 110 "termination.m"
}

#line 276 "termination.m"
static void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_5_p_0_2(
#line 276 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 276 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1,
#line 276 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_2,
#line 276 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_3,
#line 276 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_4,
#line 276 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_5)
#line 276 "termination.m"
{
#line 276 "termination.m"
  {
#line 276 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;
#line 276 "termination.m"
    MR_Word transform_hlds__termination__conv5_STATE_VARIABLE_ModuleInfo_27;
#line 276 "termination.m"
    MR_Word transform_hlds__termination__conv4_STATE_VARIABLE_Specs_29;

#line 276 "termination.m"
    {
#line 276 "termination.m"
      transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0(((MR_Word) transform_hlds__termination__wrapper_arg_1), ((MR_Word) transform_hlds__termination__wrapper_arg_2), &transform_hlds__termination__conv5_STATE_VARIABLE_ModuleInfo_27, ((MR_Word) transform_hlds__termination__wrapper_arg_4), &transform_hlds__termination__conv4_STATE_VARIABLE_Specs_29);
    }
#line 276 "termination.m"
    *transform_hlds__termination__wrapper_arg_3 = ((MR_Box) (transform_hlds__termination__conv5_STATE_VARIABLE_ModuleInfo_27));
#line 276 "termination.m"
    *transform_hlds__termination__wrapper_arg_5 = ((MR_Box) (transform_hlds__termination__conv4_STATE_VARIABLE_Specs_29));
#line 276 "termination.m"
  }
#line 276 "termination.m"
}

#line 143 "termination.m"
static void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_5_p_0_1(
#line 143 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 143 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1,
#line 143 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_2,
#line 143 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_3,
#line 143 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_4,
#line 143 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_5)
#line 143 "termination.m"
{
#line 143 "termination.m"
  {
#line 143 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;
#line 143 "termination.m"
    MR_Word transform_hlds__termination__conv1_STATE_VARIABLE_ModuleInfo_27;
#line 143 "termination.m"
    MR_Word transform_hlds__termination__conv0_STATE_VARIABLE_Specs_29;

#line 143 "termination.m"
    {
#line 143 "termination.m"
      transform_hlds__termination__check_foreign_code_attributes_in_scc_5_p_0(((MR_Word) transform_hlds__termination__wrapper_arg_1), ((MR_Word) transform_hlds__termination__wrapper_arg_2), &transform_hlds__termination__conv1_STATE_VARIABLE_ModuleInfo_27, ((MR_Word) transform_hlds__termination__wrapper_arg_4), &transform_hlds__termination__conv0_STATE_VARIABLE_Specs_29);
    }
#line 143 "termination.m"
    *transform_hlds__termination__wrapper_arg_3 = ((MR_Box) (transform_hlds__termination__conv1_STATE_VARIABLE_ModuleInfo_27));
#line 143 "termination.m"
    *transform_hlds__termination__wrapper_arg_5 = ((MR_Box) (transform_hlds__termination__conv0_STATE_VARIABLE_Specs_29));
#line 143 "termination.m"
  }
#line 143 "termination.m"
}

#line 45 "termination.m"
void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_5_p_0(
#line 45 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_20,
#line 45 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_21,
#line 45 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_Specs_22)
#line 45 "termination.m"
{
#line 83 "termination.m"
  {
#line 83 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 83 "termination.m"
    MR_Word transform_hlds__termination__Globals_9;
#line 83 "termination.m"
    MR_Word transform_hlds__termination__TermNorm_10;
#line 83 "termination.m"
    MR_Word transform_hlds__termination__FunctorInfo_11;
#line 83 "termination.m"
    MR_Integer transform_hlds__termination__MaxErrors_12;
#line 83 "termination.m"
    MR_Integer transform_hlds__termination__MaxPaths_13;
#line 83 "termination.m"
    MR_Word transform_hlds__termination__PassInfo_14;
#line 83 "termination.m"
    MR_Word transform_hlds__termination__PredIds_15;
#line 83 "termination.m"
    MR_Word transform_hlds__termination__DepInfo_16;
#line 83 "termination.m"
    MR_Word transform_hlds__termination__SCCs_17;
#line 83 "termination.m"
    MR_Word transform_hlds__termination__MakeOptInt_18;
#line 83 "termination.m"
    MR_Word transform_hlds__termination__PostSpecs_19;
#line 83 "termination.m"
    MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27_27;
#line 83 "termination.m"
    MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_29_29;
#line 83 "termination.m"
    MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_31_31;
#line 83 "termination.m"
    MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_32_32;
#line 83 "termination.m"
    MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_33_33;
#line 83 "termination.m"
    MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_34_34;
#line 83 "termination.m"
    MR_Word transform_hlds__termination__V_35_35;
#line 143 "termination.m"
    MR_Box transform_hlds__termination__conv3_STATE_VARIABLE_ModuleInfo_31_31;
#line 143 "termination.m"
    MR_Box transform_hlds__termination__conv2_STATE_VARIABLE_Specs_32_32;
#line 276 "termination.m"
    MR_Box transform_hlds__termination__conv7_STATE_VARIABLE_ModuleInfo_33_33;
#line 276 "termination.m"
    MR_Box transform_hlds__termination__conv6_STATE_VARIABLE_Specs_34_34;
#line 110 "termination.m"
    MR_Box transform_hlds__termination__conv10_STATE_VARIABLE_ModuleInfo_21;
#line 110 "termination.m"
    MR_Box transform_hlds__termination__conv9_STATE_VARIABLE_IO_37_37;

#line 84 "termination.m"
    {
#line 84 "termination.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_20, &transform_hlds__termination__Globals_9);
    }
#line 85 "termination.m"
    {
#line 85 "termination.m"
      libs__globals__get_termination_norm_2_p_0(transform_hlds__termination__Globals_9, &transform_hlds__termination__TermNorm_10);
    }
#line 86 "termination.m"
    {
#line 86 "termination.m"
      transform_hlds__termination__FunctorInfo_11 = transform_hlds__term_norm__set_functor_info_2_f_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_20, transform_hlds__termination__TermNorm_10);
    }
#line 87 "termination.m"
    {
#line 87 "termination.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__termination__Globals_9, (MR_Integer) 423, &transform_hlds__termination__MaxErrors_12);
    }
#line 88 "termination.m"
    {
#line 88 "termination.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__termination__Globals_9, (MR_Integer) 424, &transform_hlds__termination__MaxPaths_13);
    }
#line 89 "termination.m"
    {
#line 89 "termination.m"
      transform_hlds__termination__PassInfo_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 89 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__PassInfo_14, 0) = ((MR_Box) (transform_hlds__termination__FunctorInfo_11));
#line 89 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__PassInfo_14, 1) = ((MR_Box) (transform_hlds__termination__MaxErrors_12));
#line 89 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__PassInfo_14, 2) = ((MR_Box) (transform_hlds__termination__MaxPaths_13));
#line 89 "termination.m"
    }
#line 93 "termination.m"
    {
#line 93 "termination.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_20, &transform_hlds__termination__PredIds_15);
    }
#line 94 "termination.m"
    {
#line 94 "termination.m"
      transform_hlds__termination__check_preds_5_p_0(transform_hlds__termination__PredIds_15, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_20, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27_27);
    }
#line 97 "termination.m"
    {
#line 97 "termination.m"
      transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27_27, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_29_29);
    }
#line 98 "termination.m"
    {
#line 98 "termination.m"
      hlds__hlds_module__module_info_dependency_info_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_29_29, &transform_hlds__termination__DepInfo_16);
    }
#line 99 "termination.m"
    {
#line 99 "termination.m"
      hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__termination__DepInfo_16, &transform_hlds__termination__SCCs_17);
    }
#line 143 "termination.m"
    {
#line 143 "termination.m"
      mercury__list__foldl2_6_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__termination_scalar_common_1[1], (MR_Word) &transform_hlds__termination_scalar_common_2[1], transform_hlds__termination__SCCs_17, ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_29_29)), &transform_hlds__termination__conv3_STATE_VARIABLE_ModuleInfo_31_31, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__termination__conv2_STATE_VARIABLE_Specs_32_32);
    }
#line 143 "termination.m"
    transform_hlds__termination__STATE_VARIABLE_ModuleInfo_31_31 = ((MR_Word) transform_hlds__termination__conv3_STATE_VARIABLE_ModuleInfo_31_31);
#line 143 "termination.m"
    transform_hlds__termination__STATE_VARIABLE_Specs_32_32 = ((MR_Word) transform_hlds__termination__conv2_STATE_VARIABLE_Specs_32_32);
#line 276 "termination.m"
    {
#line 276 "termination.m"
      mercury__list__foldl2_6_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__termination_scalar_common_1[1], (MR_Word) &transform_hlds__termination_scalar_common_2[2], transform_hlds__termination__SCCs_17, ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_31_31)), &transform_hlds__termination__conv7_STATE_VARIABLE_ModuleInfo_33_33, ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_Specs_32_32)), &transform_hlds__termination__conv6_STATE_VARIABLE_Specs_34_34);
    }
#line 276 "termination.m"
    transform_hlds__termination__STATE_VARIABLE_ModuleInfo_33_33 = ((MR_Word) transform_hlds__termination__conv7_STATE_VARIABLE_ModuleInfo_33_33);
#line 276 "termination.m"
    transform_hlds__termination__STATE_VARIABLE_Specs_34_34 = ((MR_Word) transform_hlds__termination__conv6_STATE_VARIABLE_Specs_34_34);
#line 110 "termination.m"
    {
#line 110 "termination.m"
      transform_hlds__termination__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 110 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_35_35, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_4[0]));
#line 110 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_35_35, 1) = ((MR_Box) (transform_hlds__termination__analyse_termination_in_module_5_p_0_3));
#line 110 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 110 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_35_35, 3) = ((MR_Box) (transform_hlds__termination__PassInfo_14));
#line 110 "termination.m"
    }
#line 110 "termination.m"
    {
#line 110 "termination.m"
      mercury__list__foldl2_6_p_2((MR_Word) &transform_hlds__termination_scalar_common_1[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__termination__V_35_35, transform_hlds__termination__SCCs_17, ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_33_33)), &transform_hlds__termination__conv10_STATE_VARIABLE_ModuleInfo_21, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__termination__conv9_STATE_VARIABLE_IO_37_37);
    }
#line 110 "termination.m"
    *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_21 = ((MR_Word) transform_hlds__termination__conv10_STATE_VARIABLE_ModuleInfo_21);
#line 113 "termination.m"
    {
#line 113 "termination.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__termination__Globals_9, (MR_Integer) 87, &transform_hlds__termination__MakeOptInt_18);
    }
#line 118 "termination.m"
#line 118 "termination.m"
    switch (transform_hlds__termination__MakeOptInt_18) {
#line 118 "termination.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 118 "termination.m"
      case (MR_Integer) 0:
#line 119 "termination.m"
        {
#line 119 "termination.m"
        }
#line 118 "termination.m"
        break;
#line 118 "termination.m"
      case (MR_Integer) 1:
#line 117 "termination.m"
        {
#line 117 "termination.m"
          transform_hlds__intermod__append_termination_pragmas_to_opt_file_3_p_0(*transform_hlds__termination__STATE_VARIABLE_ModuleInfo_21);
        }
#line 118 "termination.m"
        break;
#line 118 "termination.m"
    }
#line 121 "termination.m"
    {
#line 121 "termination.m"
      transform_hlds__post_term_analysis__run_post_term_analysis_2_p_0(*transform_hlds__termination__STATE_VARIABLE_ModuleInfo_21, &transform_hlds__termination__PostSpecs_19);
    }
#line 122 "termination.m"
    {
#line 122 "termination.m"
      *transform_hlds__termination__STATE_VARIABLE_Specs_22 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, transform_hlds__termination__PostSpecs_19, transform_hlds__termination__STATE_VARIABLE_Specs_34_34);
    }
#line 83 "termination.m"
  }
#line 45 "termination.m"
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
