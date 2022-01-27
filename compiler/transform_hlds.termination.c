/*
** Automatically generated from `termination.m'
** by the Mercury compiler,
** version rotd-2016-02-18
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
#include "libs.compiler_util.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__termination__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__termination__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__decide_what_term_errors_to_report__562__1_1_p_0(
  MR_Word transform_hlds__termination__LambdaHeadVar__1_37);

static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__decide_what_term_errors_to_report__540__1_2_p_0(
  MR_Word transform_hlds__termination__ModuleInfo_5,
  MR_Word transform_hlds__termination__LambdaHeadVar__1_36);

static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__decide_what_term_errors_to_report__526__1_2_p_0(
  MR_Word transform_hlds__termination__ModuleInfo_5,
  MR_Word transform_hlds__termination__LambdaHeadVar__1_34);

static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__396__1_1_p_0(
  MR_Word transform_hlds__termination__LambdaHeadVar__1_57);

static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__362__1_2_p_0(
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47,
  MR_Word transform_hlds__termination__LambdaHeadVar__1_51);

static MR_Word MR_CALL 
transform_hlds__termination__IntroducedFrom__func__check_scc_pragmas_are_consistent__309__1_1_f_0(
  MR_Word transform_hlds__termination__LambdaHeadVar__1_41);

static void MR_CALL 
transform_hlds__termination__change_procs_termination_info_5_p_0(
  MR_Word transform_hlds__termination__HeadVar__1_1,
  MR_Word transform_hlds__termination__Override_2,
  MR_Word transform_hlds__termination__Termination_3,
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4,
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcTable_5);

static void MR_CALL 
transform_hlds__termination__change_procs_arg_size_info_5_p_0(
  MR_Word transform_hlds__termination__HeadVar__1_1,
  MR_Word transform_hlds__termination__Override_2,
  MR_Word transform_hlds__termination__ArgSize_3,
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4,
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcTable_5);

static void MR_CALL 
transform_hlds__termination__set_builtin_terminates_6_p_0(
  MR_Word transform_hlds__termination__HeadVar__1_1,
  MR_Word transform_hlds__termination__PredId_2,
  MR_Word transform_hlds__termination__PredInfo_3,
  MR_Word transform_hlds__termination__ModuleInfo_4,
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0_5,
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcTable_6);

static void MR_CALL 
transform_hlds__termination__set_generated_terminates_4_p_0(
  MR_Word transform_hlds__termination__HeadVar__1_1,
  MR_Word transform_hlds__termination__SpecialPredId_2,
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0_3,
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcTable_4);

static void MR_CALL 
transform_hlds__termination__term_preprocess_preds_3_p_0(
  MR_Word transform_hlds__termination__HeadVar__1_1,
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_3);

static MR_bool MR_CALL 
transform_hlds__termination__maybe_report_termination_errors_5_p_0_3(
  MR_Box transform_hlds__termination__closure_arg,
  MR_Box transform_hlds__termination__wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__termination__maybe_report_termination_errors_5_p_0_2(
  MR_Box transform_hlds__termination__closure_arg,
  MR_Box transform_hlds__termination__wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__termination__maybe_report_termination_errors_5_p_0_1(
  MR_Box transform_hlds__termination__closure_arg,
  MR_Box transform_hlds__termination__wrapper_arg_1);

static void MR_CALL 
transform_hlds__termination__maybe_report_termination_errors_5_p_0(
  MR_Word transform_hlds__termination__ModuleInfo_6,
  MR_Word transform_hlds__termination__SCC_7,
  MR_Word transform_hlds__termination__Errors_8,
  MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_0_12,
  MR_Word * transform_hlds__termination__STATE_VARIABLE_Specs_13);

static void MR_CALL 
transform_hlds__termination__set_termination_infos_4_p_0(
  MR_Word transform_hlds__termination__HeadVar__1_1,
  MR_Word transform_hlds__termination__TerminationInfo_2,
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4);

static void MR_CALL 
transform_hlds__termination__set_infinite_arg_size_infos_4_p_0(
  MR_Word transform_hlds__termination__HeadVar__1_1,
  MR_Word transform_hlds__termination__ArgSizeInfo_2,
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4);

static void MR_CALL 
transform_hlds__termination__set_finite_arg_size_infos_4_p_0(
  MR_Word transform_hlds__termination__HeadVar__1_1,
  MR_Word transform_hlds__termination__OutputSupplierMap_2,
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4);

static MR_bool MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0_3(
  MR_Box transform_hlds__termination__closure_arg,
  MR_Box transform_hlds__termination__wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0_2(
  MR_Box transform_hlds__termination__closure_arg,
  MR_Box transform_hlds__termination__wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0_1(
  MR_Box transform_hlds__termination__closure_arg,
  MR_Box transform_hlds__termination__wrapper_arg_1);

static void MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0(
  MR_Word transform_hlds__termination__PassInfo_7,
  MR_Word transform_hlds__termination__SCC_8,
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47,
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_48,
  MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_0_49,
  MR_Word * transform_hlds__termination__STATE_VARIABLE_Specs_50);

static MR_bool MR_CALL 
transform_hlds__termination__check_procs_known_term_3_p_0(
  MR_Word transform_hlds__termination__Status_1,
  MR_Word transform_hlds__termination__HeadVar__2_2,
  MR_Word transform_hlds__termination__ModuleInfo_3);

static MR_Box MR_CALL 
transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0_2(
  MR_Box transform_hlds__termination__closure_arg,
  MR_Box transform_hlds__termination__wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0_1(
  MR_Box transform_hlds__termination__closure_arg,
  MR_Box transform_hlds__termination__wrapper_arg_1);

static void MR_CALL 
transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0(
  MR_Word transform_hlds__termination__SCC_6,
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27,
  MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_0_28,
  MR_Word * transform_hlds__termination__STATE_VARIABLE_Specs_29);

static void MR_CALL 
transform_hlds__termination__check_foreign_code_attributes_of_proc_7_p_0(
  MR_Word transform_hlds__termination__ModuleInfo_8,
  MR_Word transform_hlds__termination__PPId_9,
  MR_Word transform_hlds__termination__Attributes_10,
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25,
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcInfo_26,
  MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_0_27,
  MR_Word * transform_hlds__termination__STATE_VARIABLE_Specs_28);

static void MR_CALL 
transform_hlds__termination__check_foreign_code_attributes_in_scc_5_p_0(
  MR_Word transform_hlds__termination__PPIds_6,
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27,
  MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_0_28,
  MR_Word * transform_hlds__termination__STATE_VARIABLE_Specs_29);

static void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_3_p_0_3(
  MR_Box transform_hlds__termination__closure_arg,
  MR_Box transform_hlds__termination__wrapper_arg_1,
  MR_Box transform_hlds__termination__wrapper_arg_2,
  MR_Box * transform_hlds__termination__wrapper_arg_3,
  MR_Box transform_hlds__termination__wrapper_arg_4,
  MR_Box * transform_hlds__termination__wrapper_arg_5);

static void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_3_p_0_2(
  MR_Box transform_hlds__termination__closure_arg,
  MR_Box transform_hlds__termination__wrapper_arg_1,
  MR_Box transform_hlds__termination__wrapper_arg_2,
  MR_Box * transform_hlds__termination__wrapper_arg_3,
  MR_Box transform_hlds__termination__wrapper_arg_4,
  MR_Box * transform_hlds__termination__wrapper_arg_5);

static void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_3_p_0_1(
  MR_Box transform_hlds__termination__closure_arg,
  MR_Box transform_hlds__termination__wrapper_arg_1,
  MR_Box transform_hlds__termination__wrapper_arg_2,
  MR_Box * transform_hlds__termination__wrapper_arg_3,
  MR_Box transform_hlds__termination__wrapper_arg_4,
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
    ((MR_Box) (transform_hlds__termination__maybe_report_termination_errors_5_p_0_3)),
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



static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__termination__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__termination__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__decide_what_term_errors_to_report__562__1_1_p_0(
  MR_Word transform_hlds__termination__LambdaHeadVar__1_37)
{
  {
    MR_bool transform_hlds__termination__succeeded;
    MR_Word transform_hlds__termination__ErrorKind_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__LambdaHeadVar__1_37, (MR_Integer) 1)));
    MR_Word transform_hlds__termination__V_38_38;
    MR_Word transform_hlds__termination__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__LambdaHeadVar__1_37, (MR_Integer) 0)));

    {
      transform_hlds__termination__V_38_38 = transform_hlds__term_errors__term_error_kind_is_direct_error_1_f_0(transform_hlds__termination__ErrorKind_28);
    }
    transform_hlds__termination__succeeded = (transform_hlds__termination__V_38_38 == (MR_Integer) 1);
    return transform_hlds__termination__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__decide_what_term_errors_to_report__540__1_2_p_0(
  MR_Word transform_hlds__termination__ModuleInfo_5,
  MR_Word transform_hlds__termination__LambdaHeadVar__1_36)
{
  {
    MR_bool transform_hlds__termination__succeeded;
    MR_Word transform_hlds__termination__PredInfo_41;
    MR_Word transform_hlds__termination__V_21_21;

    {
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__termination__ModuleInfo_5, transform_hlds__termination__LambdaHeadVar__1_36, &transform_hlds__termination__PredInfo_41, &transform_hlds__termination__V_21_21);
    }
    {
      transform_hlds__termination__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(transform_hlds__termination__PredInfo_41);
    }
    transform_hlds__termination__succeeded = !(transform_hlds__termination__succeeded);
    return transform_hlds__termination__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__decide_what_term_errors_to_report__526__1_2_p_0(
  MR_Word transform_hlds__termination__ModuleInfo_5,
  MR_Word transform_hlds__termination__LambdaHeadVar__1_34)
{
  {
    MR_bool transform_hlds__termination__succeeded;
    MR_Word transform_hlds__termination__PredInfo_14;
    MR_Word transform_hlds__termination__Markers_16;
    MR_Word transform_hlds__termination__V_35_35;
    MR_Word transform_hlds__termination__V_15_15;

    {
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__termination__ModuleInfo_5, transform_hlds__termination__LambdaHeadVar__1_34, &transform_hlds__termination__PredInfo_14, &transform_hlds__termination__V_15_15);
    }
    {
      transform_hlds__termination__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(transform_hlds__termination__PredInfo_14);
    }
    transform_hlds__termination__succeeded = !(transform_hlds__termination__succeeded);
    if (transform_hlds__termination__succeeded)
      {
        {
          hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__termination__PredInfo_14, &transform_hlds__termination__Markers_16);
        }
        transform_hlds__termination__V_35_35 = (MR_Integer) 20;
        {
          transform_hlds__termination__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__termination__Markers_16, transform_hlds__termination__V_35_35);
        }
      }
    return transform_hlds__termination__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__396__1_1_p_0(
  MR_Word transform_hlds__termination__LambdaHeadVar__1_57)
{
  {
    MR_bool transform_hlds__termination__succeeded;
    MR_Word transform_hlds__termination__ErrorKind_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__LambdaHeadVar__1_57, (MR_Integer) 1)));
    MR_Word transform_hlds__termination__V_58_58;
    MR_Word transform_hlds__termination___Context_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__LambdaHeadVar__1_57, (MR_Integer) 0)));

    {
      transform_hlds__termination__V_58_58 = transform_hlds__term_errors__term_error_kind_is_fatal_error_1_f_0(transform_hlds__termination__ErrorKind_33);
    }
    transform_hlds__termination__succeeded = (transform_hlds__termination__V_58_58 == (MR_Integer) 1);
    return transform_hlds__termination__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__362__1_2_p_0(
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47,
  MR_Word transform_hlds__termination__LambdaHeadVar__1_51)
{
  {
    MR_bool transform_hlds__termination__succeeded;
    MR_Word transform_hlds__termination__ProcInfo_14;
    MR_Word transform_hlds__termination__V_67_67;
    MR_Word transform_hlds__termination__V_13_13;
    MR_Word transform_hlds__termination__V_72_72;

    {
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47, transform_hlds__termination__LambdaHeadVar__1_51, &transform_hlds__termination__V_13_13, &transform_hlds__termination__ProcInfo_14);
    }
    {
      hlds__hlds_pred__proc_info_get_maybe_arg_size_info_2_p_0(transform_hlds__termination__ProcInfo_14, &transform_hlds__termination__V_67_67);
    }
    transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__V_67_67)) == (MR_mktag((MR_Integer) 1)));
    if (transform_hlds__termination__succeeded)
      transform_hlds__termination__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__V_67_67, (MR_Integer) 0)));
    return transform_hlds__termination__succeeded;
  }
}

static MR_Word MR_CALL 
transform_hlds__termination__IntroducedFrom__func__check_scc_pragmas_are_consistent__309__1_1_f_0(
  MR_Word transform_hlds__termination__LambdaHeadVar__1_41)
{
  {
    MR_bool transform_hlds__termination__succeeded;
    MR_Word transform_hlds__termination__LambdaHeadVar__2_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__LambdaHeadVar__1_41, (MR_Integer) 0)));
    MR_Integer transform_hlds__termination__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__LambdaHeadVar__1_41, (MR_Integer) 1)));

    return transform_hlds__termination__LambdaHeadVar__2_42;
  }
}

static void MR_CALL 
transform_hlds__termination__change_procs_termination_info_5_p_0(
  MR_Word transform_hlds__termination__HeadVar__1_1,
  MR_Word transform_hlds__termination__Override_2,
  MR_Word transform_hlds__termination__Termination_3,
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4,
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcTable_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__termination__succeeded;

        if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__termination__STATE_VARIABLE_ProcTable_5 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4;
        else
          {
            MR_Word transform_hlds__termination__TypeCtorInfo_25_25 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
            MR_Integer transform_hlds__termination__ProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__termination__ProcIds_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__termination__ProcInfo0_16;
            MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22;
            MR_Box transform_hlds__termination__conv0_ProcInfo0_16;

            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__termination__TypeCtorInfo_25_25, transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4, transform_hlds__termination__ProcId_11, &transform_hlds__termination__conv0_ProcInfo0_16);
            }
            transform_hlds__termination__ProcInfo0_16 = ((MR_Word) transform_hlds__termination__conv0_ProcInfo0_16);
            transform_hlds__termination__succeeded = (transform_hlds__termination__Override_2 == (MR_Integer) 1);
            if (!(transform_hlds__termination__succeeded))
              {
                MR_Word transform_hlds__termination__V_26_26;

                {
                  hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__termination__ProcInfo0_16, &transform_hlds__termination__V_26_26);
                }
                {
                  transform_hlds__termination__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[35], ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (transform_hlds__termination__V_26_26)));
                }
              }
            if (transform_hlds__termination__succeeded)
              {
                MR_Word transform_hlds__termination__ProcInfo_17;
                MR_Word transform_hlds__termination__V_21_21;

                {
                  transform_hlds__termination__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__V_21_21, 0) = ((MR_Box) (transform_hlds__termination__Termination_3));
                }
                {
                  hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(transform_hlds__termination__V_21_21, transform_hlds__termination__ProcInfo0_16, &transform_hlds__termination__ProcInfo_17);
                }
                {
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__termination__TypeCtorInfo_25_25, transform_hlds__termination__ProcId_11, ((MR_Box) (transform_hlds__termination__ProcInfo_17)), transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4, &transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22);
                }
              }
            else
              transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4;
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__ProcIds_12;
              MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_4 = transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22;

              transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_4;
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__termination__change_procs_arg_size_info_5_p_0(
  MR_Word transform_hlds__termination__HeadVar__1_1,
  MR_Word transform_hlds__termination__Override_2,
  MR_Word transform_hlds__termination__ArgSize_3,
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4,
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcTable_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__termination__succeeded;

        if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__termination__STATE_VARIABLE_ProcTable_5 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4;
        else
          {
            MR_Word transform_hlds__termination__TypeCtorInfo_25_25 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
            MR_Integer transform_hlds__termination__ProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__termination__ProcIds_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__termination__ProcInfo0_16;
            MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22;
            MR_Box transform_hlds__termination__conv0_ProcInfo0_16;

            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__termination__TypeCtorInfo_25_25, transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4, transform_hlds__termination__ProcId_11, &transform_hlds__termination__conv0_ProcInfo0_16);
            }
            transform_hlds__termination__ProcInfo0_16 = ((MR_Word) transform_hlds__termination__conv0_ProcInfo0_16);
            transform_hlds__termination__succeeded = (transform_hlds__termination__Override_2 == (MR_Integer) 1);
            if (!(transform_hlds__termination__succeeded))
              {
                MR_Word transform_hlds__termination__V_26_26;

                {
                  hlds__hlds_pred__proc_info_get_maybe_arg_size_info_2_p_0(transform_hlds__termination__ProcInfo0_16, &transform_hlds__termination__V_26_26);
                }
                {
                  transform_hlds__termination__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[34], ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (transform_hlds__termination__V_26_26)));
                }
              }
            if (transform_hlds__termination__succeeded)
              {
                MR_Word transform_hlds__termination__ProcInfo_17;
                MR_Word transform_hlds__termination__V_21_21;

                {
                  transform_hlds__termination__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__V_21_21, 0) = ((MR_Box) (transform_hlds__termination__ArgSize_3));
                }
                {
                  hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_p_0(transform_hlds__termination__V_21_21, transform_hlds__termination__ProcInfo0_16, &transform_hlds__termination__ProcInfo_17);
                }
                {
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__termination__TypeCtorInfo_25_25, transform_hlds__termination__ProcId_11, ((MR_Box) (transform_hlds__termination__ProcInfo_17)), transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4, &transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22);
                }
              }
            else
              transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4;
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__ProcIds_12;
              MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_4 = transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22;

              transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_4;
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__termination__set_builtin_terminates_6_p_0(
  MR_Word transform_hlds__termination__HeadVar__1_1,
  MR_Word transform_hlds__termination__PredId_2,
  MR_Word transform_hlds__termination__PredInfo_3,
  MR_Word transform_hlds__termination__ModuleInfo_4,
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0_5,
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcTable_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__termination__succeeded;

        if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__termination__STATE_VARIABLE_ProcTable_6 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0_5;
        else
          {
            MR_Word transform_hlds__termination__TypeCtorInfo_42_42 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
            MR_Integer transform_hlds__termination__ProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__termination__ProcIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__termination__ProcInfo0_19;
            MR_Word transform_hlds__termination__ArgSizeInfo_22;
            MR_Word transform_hlds__termination__ProcInfo1_26;
            MR_Word transform_hlds__termination__ProcInfo_27;
            MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_39_39;
            MR_Box transform_hlds__termination__conv0_ProcInfo0_19;

            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__termination__TypeCtorInfo_42_42, transform_hlds__termination__STATE_VARIABLE_ProcTable_0_5, transform_hlds__termination__ProcId_13, &transform_hlds__termination__conv0_ProcInfo0_19);
            }
            transform_hlds__termination__ProcInfo0_19 = ((MR_Word) transform_hlds__termination__conv0_ProcInfo0_19);
            {
              transform_hlds__termination__succeeded = transform_hlds__term_util__all_args_input_or_zero_size_3_p_0(transform_hlds__termination__ModuleInfo_4, transform_hlds__termination__PredInfo_3, transform_hlds__termination__ProcInfo0_19);
            }
            if (transform_hlds__termination__succeeded)
              {
                MR_Word transform_hlds__termination__HeadVars_20;
                MR_Word transform_hlds__termination__UsedArgs_21;
                MR_Word transform_hlds__termination__V_31_31;

                {
                  hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__termination__ProcInfo0_19, &transform_hlds__termination__HeadVars_20);
                }
                {
                  transform_hlds__term_util__make_bool_list_3_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[3], transform_hlds__termination__HeadVars_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__termination__UsedArgs_21);
                }
                {
                  transform_hlds__termination__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), transform_hlds__termination__V_31_31, 0) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(0), transform_hlds__termination__V_31_31, 1) = ((MR_Box) (transform_hlds__termination__UsedArgs_21));
                }
                {
                  transform_hlds__termination__ArgSizeInfo_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__ArgSizeInfo_22, 0) = ((MR_Box) (transform_hlds__termination__V_31_31));
                }
              }
            else
              {
                MR_Word transform_hlds__termination__Context_23;
                MR_Word transform_hlds__termination__Error_24;
                MR_Word transform_hlds__termination__ArgSizeError_25;
                MR_Word transform_hlds__termination__V_33_33;
                MR_Word transform_hlds__termination__V_34_34;

                {
                  hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__termination__PredInfo_3, &transform_hlds__termination__Context_23);
                }
                {
                  transform_hlds__termination__Error_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), transform_hlds__termination__Error_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), transform_hlds__termination__Error_24, 1) = ((MR_Box) (transform_hlds__termination__PredId_2));
                }
                {
                  transform_hlds__termination__ArgSizeError_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeError_25, 0) = ((MR_Box) (transform_hlds__termination__Context_23));
                  MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeError_25, 1) = ((MR_Box) (transform_hlds__termination__Error_24));
                }
                {
                  transform_hlds__termination__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__V_34_34, 0) = ((MR_Box) (transform_hlds__termination__ArgSizeError_25));
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  transform_hlds__termination__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__V_33_33, 0) = ((MR_Box) (transform_hlds__termination__V_34_34));
                }
                {
                  transform_hlds__termination__ArgSizeInfo_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__ArgSizeInfo_22, 0) = ((MR_Box) (transform_hlds__termination__V_33_33));
                }
              }
            {
              hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_p_0(transform_hlds__termination__ArgSizeInfo_22, transform_hlds__termination__ProcInfo0_19, &transform_hlds__termination__ProcInfo1_26);
            }
            mercury__private_builtin__dummy_var = (MR_Integer) 0;
            {
              hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_5[1]), transform_hlds__termination__ProcInfo1_26, &transform_hlds__termination__ProcInfo_27);
            }
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__termination__TypeCtorInfo_42_42, transform_hlds__termination__ProcId_13, ((MR_Box) (transform_hlds__termination__ProcInfo_27)), transform_hlds__termination__STATE_VARIABLE_ProcTable_0_5, &transform_hlds__termination__STATE_VARIABLE_ProcTable_39_39);
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__ProcIds_14;
              MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_5 = transform_hlds__termination__STATE_VARIABLE_ProcTable_39_39;

              transform_hlds__termination__STATE_VARIABLE_ProcTable_0_5 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_5;
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__termination__set_generated_terminates_4_p_0(
  MR_Word transform_hlds__termination__HeadVar__1_1,
  MR_Word transform_hlds__termination__SpecialPredId_2,
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0_3,
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcTable_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__termination__succeeded;

        if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__termination__STATE_VARIABLE_ProcTable_4 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0_3;
        else
          {
            MR_Word transform_hlds__termination__TypeCtorInfo_26_26 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
            MR_Integer transform_hlds__termination__ProcId_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__termination__ProcIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__termination__ProcInfo0_13;
            MR_Word transform_hlds__termination__HeadVars_14;
            MR_Word transform_hlds__termination__ArgSize_15;
            MR_Word transform_hlds__termination__Termination_16;
            MR_Word transform_hlds__termination__ProcInfo1_17;
            MR_Word transform_hlds__termination__ProcInfo_18;
            MR_Word transform_hlds__termination__V_21_21;
            MR_Word transform_hlds__termination__V_22_22;
            MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_23_23;
            MR_Box transform_hlds__termination__conv0_ProcInfo0_13;

            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__termination__TypeCtorInfo_26_26, transform_hlds__termination__STATE_VARIABLE_ProcTable_0_3, transform_hlds__termination__ProcId_9, &transform_hlds__termination__conv0_ProcInfo0_13);
            }
            transform_hlds__termination__ProcInfo0_13 = ((MR_Word) transform_hlds__termination__conv0_ProcInfo0_13);
            {
              hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__termination__ProcInfo0_13, &transform_hlds__termination__HeadVars_14);
            }
            switch (transform_hlds__termination__SpecialPredId_2) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 2:
                {
                  MR_Word transform_hlds__termination__OutList_31;

                  {
                    transform_hlds__term_util__make_bool_list_3_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[3], transform_hlds__termination__HeadVars_14, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[31]), &transform_hlds__termination__OutList_31);
                  }
                  {
                    transform_hlds__termination__ArgSize_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSize_15, 0) = ((MR_Box) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSize_15, 1) = ((MR_Box) (transform_hlds__termination__OutList_31));
                  }
                  mercury__private_builtin__dummy_var = (MR_Integer) 0;
                  transform_hlds__termination__Termination_16 = (MR_Word) &transform_hlds__termination_scalar_common_5[0];
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word transform_hlds__termination__OutList_56;

                  {
                    transform_hlds__term_util__make_bool_list_3_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[3], transform_hlds__termination__HeadVars_14, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[30]), &transform_hlds__termination__OutList_56);
                  }
                  {
                    transform_hlds__termination__ArgSize_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSize_15, 0) = ((MR_Box) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSize_15, 1) = ((MR_Box) (transform_hlds__termination__OutList_56));
                  }
                  mercury__private_builtin__dummy_var = (MR_Integer) 0;
                  transform_hlds__termination__Termination_16 = (MR_Word) &transform_hlds__termination_scalar_common_5[0];
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word transform_hlds__termination__OutList_55;

                  {
                    transform_hlds__term_util__make_bool_list_3_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[3], transform_hlds__termination__HeadVars_14, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[33]), &transform_hlds__termination__OutList_55);
                  }
                  {
                    transform_hlds__termination__ArgSize_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSize_15, 0) = ((MR_Box) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSize_15, 1) = ((MR_Box) (transform_hlds__termination__OutList_55));
                  }
                  mercury__private_builtin__dummy_var = (MR_Integer) 0;
                  transform_hlds__termination__Termination_16 = (MR_Word) &transform_hlds__termination_scalar_common_5[0];
                }
                break;
            }
            {
              transform_hlds__termination__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_21_21, 0) = ((MR_Box) (transform_hlds__termination__ArgSize_15));
            }
            {
              hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_p_0(transform_hlds__termination__V_21_21, transform_hlds__termination__ProcInfo0_13, &transform_hlds__termination__ProcInfo1_17);
            }
            {
              transform_hlds__termination__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_22_22, 0) = ((MR_Box) (transform_hlds__termination__Termination_16));
            }
            {
              hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(transform_hlds__termination__V_22_22, transform_hlds__termination__ProcInfo1_17, &transform_hlds__termination__ProcInfo_18);
            }
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__termination__TypeCtorInfo_26_26, transform_hlds__termination__ProcId_9, ((MR_Box) (transform_hlds__termination__ProcInfo_18)), transform_hlds__termination__STATE_VARIABLE_ProcTable_0_3, &transform_hlds__termination__STATE_VARIABLE_ProcTable_23_23);
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__ProcIds_10;
              MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_3 = transform_hlds__termination__STATE_VARIABLE_ProcTable_23_23;

              transform_hlds__termination__STATE_VARIABLE_ProcTable_0_3 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_3;
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__termination__term_preprocess_preds_3_p_0(
  MR_Word transform_hlds__termination__HeadVar__1_1,
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__termination__succeeded;

        if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_3 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2;
        else
          {
            MR_Word transform_hlds__termination__TypeCtorInfo_62_62;
            MR_Word transform_hlds__termination__TypeCtorInfo_63_63;
            MR_Word transform_hlds__termination__PredId_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__termination__PredIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__termination__Globals_10;
            MR_Word transform_hlds__termination__OpMode_11;
            MR_Word transform_hlds__termination__MakeOptInt_12;
            MR_Word transform_hlds__termination__PredTable0_13;
            MR_Word transform_hlds__termination__PredInfo0_14;
            MR_Word transform_hlds__termination__PredStatus_15;
            MR_Word transform_hlds__termination__Context_16;
            MR_Word transform_hlds__termination__ProcTable0_17;
            MR_Word transform_hlds__termination__Markers_18;
            MR_Word transform_hlds__termination__ProcIds_19;
            MR_Word transform_hlds__termination__ProcTable2_21;
            MR_Word transform_hlds__termination__ProcTable_28;
            MR_Word transform_hlds__termination__PredInfo_29;
            MR_Word transform_hlds__termination__PredTable_30;
            MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_58_58;
            MR_Word transform_hlds__termination__V_33_33;
            MR_Word transform_hlds__termination__V_34_34;
            MR_Box transform_hlds__termination__conv0_PredInfo0_14;
            MR_Word transform_hlds__termination__ProcTable1_20;

            {
              hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2, &transform_hlds__termination__Globals_10);
            }
            {
              libs__globals__get_op_mode_2_p_0(transform_hlds__termination__Globals_10, &transform_hlds__termination__OpMode_11);
            }
            transform_hlds__termination__succeeded = ((((MR_tag((MR_Word) transform_hlds__termination__OpMode_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__OpMode_11, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (transform_hlds__termination__succeeded)
              {
                transform_hlds__termination__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__OpMode_11, (MR_Integer) 1)));
                transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__V_33_33)) == (MR_mktag((MR_Integer) 1)));
                if (transform_hlds__termination__succeeded)
                  {
                    transform_hlds__termination__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__V_33_33, (MR_Integer) 0)));
                    transform_hlds__termination__succeeded = (transform_hlds__termination__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
              }
            if (transform_hlds__termination__succeeded)
              transform_hlds__termination__MakeOptInt_12 = (MR_Integer) 1;
            else
              transform_hlds__termination__MakeOptInt_12 = (MR_Integer) 0;
            {
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2, &transform_hlds__termination__PredTable0_13);
            }
            transform_hlds__termination__TypeCtorInfo_62_62 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
            transform_hlds__termination__TypeCtorInfo_63_63 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
            {
              mercury__map__lookup_3_p_0(transform_hlds__termination__TypeCtorInfo_62_62, transform_hlds__termination__TypeCtorInfo_63_63, transform_hlds__termination__PredTable0_13, ((MR_Box) (transform_hlds__termination__PredId_7)), &transform_hlds__termination__conv0_PredInfo0_14);
            }
            transform_hlds__termination__PredInfo0_14 = ((MR_Word) transform_hlds__termination__conv0_PredInfo0_14);
            {
              hlds__hlds_pred__pred_info_get_status_2_p_0(transform_hlds__termination__PredInfo0_14, &transform_hlds__termination__PredStatus_15);
            }
            {
              hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__termination__PredInfo0_14, &transform_hlds__termination__Context_16);
            }
            {
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__termination__PredInfo0_14, &transform_hlds__termination__ProcTable0_17);
            }
            {
              hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__termination__PredInfo0_14, &transform_hlds__termination__Markers_18);
            }
            {
              transform_hlds__termination__ProcIds_19 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__termination__PredInfo0_14);
            }
            {
              transform_hlds__termination__succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(transform_hlds__termination__PredInfo0_14);
            }
            if (transform_hlds__termination__succeeded)
              {
                {
                  transform_hlds__termination__set_builtin_terminates_6_p_0(transform_hlds__termination__ProcIds_19, transform_hlds__termination__PredId_7, transform_hlds__termination__PredInfo0_14, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2, transform_hlds__termination__ProcTable0_17, &transform_hlds__termination__ProcTable1_20);
                }
                transform_hlds__termination__succeeded = MR_TRUE;
              }
            else
              {
                MR_Word transform_hlds__termination__SpecialPredId_76;
                MR_Word transform_hlds__termination__SpecPredId0_74;
                MR_Word transform_hlds__termination__ModuleName_71;
                MR_String transform_hlds__termination__Name_72;
                MR_Integer transform_hlds__termination__Arity_73;
                MR_Integer transform_hlds__termination__V_81_81;
                MR_String transform_hlds__termination__V_75_75;

                {
                  transform_hlds__termination__ModuleName_71 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__termination__PredInfo0_14);
                }
                {
                  transform_hlds__termination__Name_72 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__termination__PredInfo0_14);
                }
                {
                  transform_hlds__termination__Arity_73 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__termination__PredInfo0_14);
                }
                {
                  transform_hlds__termination__succeeded = mdbcomp__prim_data__special_pred_name_arity_4_p_1(&transform_hlds__termination__SpecPredId0_74, transform_hlds__termination__Name_72, &transform_hlds__termination__V_75_75, &transform_hlds__termination__V_81_81);
                }
                if (transform_hlds__termination__succeeded)
                  {
                    transform_hlds__termination__succeeded = (transform_hlds__termination__Arity_73 == transform_hlds__termination__V_81_81);
                    if (transform_hlds__termination__succeeded)
                      {
                        transform_hlds__termination__succeeded = mdbcomp__builtin_modules__any_mercury_builtin_module_1_p_0(transform_hlds__termination__ModuleName_71);
                      }
                  }
                if (transform_hlds__termination__succeeded)
                  {
                    transform_hlds__termination__SpecialPredId_76 = transform_hlds__termination__SpecPredId0_74;
                    transform_hlds__termination__succeeded = MR_TRUE;
                  }
                else
                  {
                    MR_Word transform_hlds__termination__Origin_77;
                    MR_Word transform_hlds__termination__V_78_78;

                    {
                      hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__termination__PredInfo0_14, &transform_hlds__termination__Origin_77);
                    }
                    transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__Origin_77)) == (MR_mktag((MR_Integer) 0)));
                    if (transform_hlds__termination__succeeded)
                      {
                        transform_hlds__termination__SpecialPredId_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__Origin_77, (MR_Integer) 0)));
                        transform_hlds__termination__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__Origin_77, (MR_Integer) 1)));
                      }
                  }
                if (transform_hlds__termination__succeeded)
                  {
                    {
                      transform_hlds__termination__set_generated_terminates_4_p_0(transform_hlds__termination__ProcIds_19, transform_hlds__termination__SpecialPredId_76, transform_hlds__termination__ProcTable0_17, &transform_hlds__termination__ProcTable1_20);
                    }
                    transform_hlds__termination__succeeded = MR_TRUE;
                  }
              }
            if (transform_hlds__termination__succeeded)
              transform_hlds__termination__ProcTable2_21 = transform_hlds__termination__ProcTable1_20;
            else
              {
                MR_Word transform_hlds__termination__V_35_35;

                {
                  transform_hlds__termination__V_35_35 = hlds__status__pred_status_defined_in_this_module_1_f_0(transform_hlds__termination__PredStatus_15);
                }
                transform_hlds__termination__succeeded = (transform_hlds__termination__V_35_35 == (MR_Integer) 1);
                if (transform_hlds__termination__succeeded)
                  {
                    {
                      transform_hlds__termination__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__termination__Markers_18, (MR_Integer) 18);
                    }
                    if (transform_hlds__termination__succeeded)
                      {
                        mercury__private_builtin__dummy_var = (MR_Integer) 0;
                        {
                          transform_hlds__termination__change_procs_termination_info_5_p_0(transform_hlds__termination__ProcIds_19, (MR_Integer) 1, (MR_Word) &transform_hlds__termination_scalar_common_5[0], transform_hlds__termination__ProcTable0_17, &transform_hlds__termination__ProcTable2_21);
                        }
                      }
                    else
                      transform_hlds__termination__ProcTable2_21 = transform_hlds__termination__ProcTable0_17;
                  }
                else
                  {
                    MR_Word transform_hlds__termination__ArgSizeError_24;
                    MR_Word transform_hlds__termination__ArgSizeInfo_25;
                    MR_Word transform_hlds__termination__V_50_50;
                    MR_Word transform_hlds__termination__ProcTable1_60;

                    {
                      transform_hlds__termination__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__termination__Markers_18, (MR_Integer) 18);
                    }
                    if (!(transform_hlds__termination__succeeded))
                      {
                        MR_Word transform_hlds__termination__V_40_40;

                        transform_hlds__termination__succeeded = (transform_hlds__termination__MakeOptInt_12 == (MR_Integer) 0);
                        if (transform_hlds__termination__succeeded)
                          {
                            transform_hlds__termination__V_40_40 = (MR_Integer) 20;
                            {
                              transform_hlds__termination__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__termination__Markers_18, transform_hlds__termination__V_40_40);
                            }
                          }
                      }
                    if (transform_hlds__termination__succeeded)
                      {
                        mercury__private_builtin__dummy_var = (MR_Integer) 0;
                        {
                          transform_hlds__termination__change_procs_termination_info_5_p_0(transform_hlds__termination__ProcIds_19, (MR_Integer) 1, (MR_Word) &transform_hlds__termination_scalar_common_5[0], transform_hlds__termination__ProcTable0_17, &transform_hlds__termination__ProcTable1_60);
                        }
                      }
                    else
                      {
                        MR_Word transform_hlds__termination__TerminationError_22;
                        MR_Word transform_hlds__termination__TerminationInfo_23;
                        MR_Word transform_hlds__termination__V_46_46;

                        {
                          transform_hlds__termination__TerminationError_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), transform_hlds__termination__TerminationError_22, 0) = ((MR_Box) (transform_hlds__termination__Context_16));
                          MR_hl_field(MR_mktag(0), transform_hlds__termination__TerminationError_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                        }
                        {
                          transform_hlds__termination__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), transform_hlds__termination__V_46_46, 0) = ((MR_Box) (transform_hlds__termination__TerminationError_22));
                          MR_hl_field(MR_mktag(1), transform_hlds__termination__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          transform_hlds__termination__TerminationInfo_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), transform_hlds__termination__TerminationInfo_23, 0) = ((MR_Box) (transform_hlds__termination__V_46_46));
                        }
                        {
                          transform_hlds__termination__change_procs_termination_info_5_p_0(transform_hlds__termination__ProcIds_19, (MR_Integer) 0, transform_hlds__termination__TerminationInfo_23, transform_hlds__termination__ProcTable0_17, &transform_hlds__termination__ProcTable1_60);
                        }
                      }
                    {
                      transform_hlds__termination__ArgSizeError_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeError_24, 0) = ((MR_Box) (transform_hlds__termination__Context_16));
                      MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeError_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                    }
                    {
                      transform_hlds__termination__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), transform_hlds__termination__V_50_50, 0) = ((MR_Box) (transform_hlds__termination__ArgSizeError_24));
                      MR_hl_field(MR_mktag(1), transform_hlds__termination__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      transform_hlds__termination__ArgSizeInfo_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), transform_hlds__termination__ArgSizeInfo_25, 0) = ((MR_Box) (transform_hlds__termination__V_50_50));
                    }
                    {
                      transform_hlds__termination__change_procs_arg_size_info_5_p_0(transform_hlds__termination__ProcIds_19, (MR_Integer) 0, transform_hlds__termination__ArgSizeInfo_25, transform_hlds__termination__ProcTable1_60, &transform_hlds__termination__ProcTable2_21);
                    }
                  }
              }
            {
              transform_hlds__termination__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__termination__Markers_18, (MR_Integer) 19);
            }
            if (transform_hlds__termination__succeeded)
              {
                MR_Word transform_hlds__termination__RequestError_26;
                MR_Word transform_hlds__termination__RequestTerminationInfo_27;
                MR_Word transform_hlds__termination__V_54_54;
                MR_Word transform_hlds__termination__V_55_55;

                {
                  transform_hlds__termination__V_54_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), transform_hlds__termination__V_54_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                  MR_hl_field(MR_mktag(3), transform_hlds__termination__V_54_54, 1) = ((MR_Box) (transform_hlds__termination__PredId_7));
                }
                {
                  transform_hlds__termination__RequestError_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), transform_hlds__termination__RequestError_26, 0) = ((MR_Box) (transform_hlds__termination__Context_16));
                  MR_hl_field(MR_mktag(0), transform_hlds__termination__RequestError_26, 1) = ((MR_Box) (transform_hlds__termination__V_54_54));
                }
                {
                  transform_hlds__termination__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__V_55_55, 0) = ((MR_Box) (transform_hlds__termination__RequestError_26));
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  transform_hlds__termination__RequestTerminationInfo_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__RequestTerminationInfo_27, 0) = ((MR_Box) (transform_hlds__termination__V_55_55));
                }
                {
                  transform_hlds__termination__change_procs_termination_info_5_p_0(transform_hlds__termination__ProcIds_19, (MR_Integer) 1, transform_hlds__termination__RequestTerminationInfo_27, transform_hlds__termination__ProcTable2_21, &transform_hlds__termination__ProcTable_28);
                }
              }
            else
              transform_hlds__termination__ProcTable_28 = transform_hlds__termination__ProcTable2_21;
            {
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__termination__ProcTable_28, transform_hlds__termination__PredInfo0_14, &transform_hlds__termination__PredInfo_29);
            }
            {
              mercury__map__set_4_p_0(transform_hlds__termination__TypeCtorInfo_62_62, transform_hlds__termination__TypeCtorInfo_63_63, ((MR_Box) (transform_hlds__termination__PredId_7)), ((MR_Box) (transform_hlds__termination__PredInfo_29)), transform_hlds__termination__PredTable0_13, &transform_hlds__termination__PredTable_30);
            }
            {
              hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__termination__PredTable_30, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_58_58);
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__PredIds_8;
              MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_2 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_58_58;

              transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_2;
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
transform_hlds__termination__maybe_report_termination_errors_5_p_0_3(
  MR_Box transform_hlds__termination__closure_arg,
  MR_Box transform_hlds__termination__wrapper_arg_1)
{
  {
    MR_bool transform_hlds__termination__succeeded;
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

    {
      transform_hlds__termination__succeeded = transform_hlds__termination__IntroducedFrom__pred__decide_what_term_errors_to_report__562__1_1_p_0(((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
    return transform_hlds__termination__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__termination__maybe_report_termination_errors_5_p_0_2(
  MR_Box transform_hlds__termination__closure_arg,
  MR_Box transform_hlds__termination__wrapper_arg_1)
{
  {
    MR_bool transform_hlds__termination__succeeded;
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

    {
      transform_hlds__termination__succeeded = transform_hlds__termination__IntroducedFrom__pred__decide_what_term_errors_to_report__540__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
    return transform_hlds__termination__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__termination__maybe_report_termination_errors_5_p_0_1(
  MR_Box transform_hlds__termination__closure_arg,
  MR_Box transform_hlds__termination__wrapper_arg_1)
{
  {
    MR_bool transform_hlds__termination__succeeded;
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

    {
      transform_hlds__termination__succeeded = transform_hlds__termination__IntroducedFrom__pred__decide_what_term_errors_to_report__526__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
    return transform_hlds__termination__succeeded;
  }
}

static void MR_CALL 
transform_hlds__termination__maybe_report_termination_errors_5_p_0(
  MR_Word transform_hlds__termination__ModuleInfo_6,
  MR_Word transform_hlds__termination__SCC_7,
  MR_Word transform_hlds__termination__Errors_8,
  MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_0_12,
  MR_Word * transform_hlds__termination__STATE_VARIABLE_Specs_13)
{
  {
    MR_bool transform_hlds__termination__succeeded;
    MR_Word transform_hlds__termination__Globals_19;
    MR_Word transform_hlds__termination__NormalErrors_20;
    MR_Word transform_hlds__termination__VerboseErrors_21;
    MR_Word transform_hlds__termination__IsCheckTerm_22;
    MR_Word transform_hlds__termination__CheckTermPPIds_27;
    MR_Word transform_hlds__termination__V_28_28;
    MR_Word transform_hlds__termination__V_29_29;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__termination__ModuleInfo_6, &transform_hlds__termination__Globals_19);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__termination__Globals_19, (MR_Integer) 411, &transform_hlds__termination__NormalErrors_20);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__termination__Globals_19, (MR_Integer) 412, &transform_hlds__termination__VerboseErrors_21);
    }
    {
      transform_hlds__termination__IsCheckTerm_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsCheckTerm_22, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsCheckTerm_22, 1) = ((MR_Box) (transform_hlds__termination__maybe_report_termination_errors_5_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsCheckTerm_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsCheckTerm_22, 3) = ((MR_Box) (transform_hlds__termination__ModuleInfo_6));
    }
    {
      mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__termination__IsCheckTerm_22, transform_hlds__termination__SCC_7, &transform_hlds__termination__CheckTermPPIds_27);
    }
    transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__CheckTermPPIds_27)) == (MR_mktag((MR_Integer) 1)));
    if (transform_hlds__termination__succeeded)
      {
        transform_hlds__termination__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__CheckTermPPIds_27, (MR_Integer) 0)));
        transform_hlds__termination__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__CheckTermPPIds_27, (MR_Integer) 1)));
        {
          transform_hlds__term_errors__report_term_errors_5_p_0(transform_hlds__termination__ModuleInfo_6, transform_hlds__termination__SCC_7, transform_hlds__termination__Errors_8, transform_hlds__termination__STATE_VARIABLE_Specs_0_12, transform_hlds__termination__STATE_VARIABLE_Specs_13);
        }
      }
    else
      {
        MR_Word transform_hlds__termination__IsNonImported_30;
        MR_Word transform_hlds__termination__NonImportedPPIds_32;
        MR_Word transform_hlds__termination__V_33_33;
        MR_Word transform_hlds__termination__V_34_34;

        {
          transform_hlds__termination__IsNonImported_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__termination__IsNonImported_30, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_6[0]));
          MR_hl_field(MR_mktag(0), transform_hlds__termination__IsNonImported_30, 1) = ((MR_Box) (transform_hlds__termination__maybe_report_termination_errors_5_p_0_2));
          MR_hl_field(MR_mktag(0), transform_hlds__termination__IsNonImported_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), transform_hlds__termination__IsNonImported_30, 3) = ((MR_Box) (transform_hlds__termination__ModuleInfo_6));
        }
        {
          mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__termination__IsNonImported_30, transform_hlds__termination__SCC_7, &transform_hlds__termination__NonImportedPPIds_32);
        }
        transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__NonImportedPPIds_32)) == (MR_mktag((MR_Integer) 1)));
        if (transform_hlds__termination__succeeded)
          {
            transform_hlds__termination__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__NonImportedPPIds_32, (MR_Integer) 0)));
            transform_hlds__termination__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__NonImportedPPIds_32, (MR_Integer) 1)));
            switch (transform_hlds__termination__VerboseErrors_21) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word transform_hlds__termination__MaybeErrorsToReport_62;

                  switch (transform_hlds__termination__NormalErrors_20) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      transform_hlds__termination__MaybeErrorsToReport_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word transform_hlds__termination__DirectErrors_39;

                        {
                          mercury__list__filter_3_p_0((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0, (MR_Word) &transform_hlds__termination_scalar_common_2[5], transform_hlds__termination__Errors_8, &transform_hlds__termination__DirectErrors_39);
                        }
                        if ((transform_hlds__termination__DirectErrors_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                          {
                            transform_hlds__termination__MaybeErrorsToReport_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), transform_hlds__termination__MaybeErrorsToReport_62, 0) = ((MR_Box) (transform_hlds__termination__Errors_8));
                          }
                        else
                          {
                            transform_hlds__termination__MaybeErrorsToReport_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), transform_hlds__termination__MaybeErrorsToReport_62, 0) = ((MR_Box) (transform_hlds__termination__DirectErrors_39));
                          }
                      }
                      break;
                  }
                  if ((transform_hlds__termination__MaybeErrorsToReport_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    *transform_hlds__termination__STATE_VARIABLE_Specs_13 = transform_hlds__termination__STATE_VARIABLE_Specs_0_12;
                  else
                    {
                      MR_Word transform_hlds__termination__ErrorsToReport_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__MaybeErrorsToReport_62, (MR_Integer) 0)));

                      {
                        transform_hlds__term_errors__report_term_errors_5_p_0(transform_hlds__termination__ModuleInfo_6, transform_hlds__termination__SCC_7, transform_hlds__termination__ErrorsToReport_60, transform_hlds__termination__STATE_VARIABLE_Specs_0_12, transform_hlds__termination__STATE_VARIABLE_Specs_13);
                      }
                    }
                }
                break;
              case (MR_Integer) 1:
                {
                  transform_hlds__term_errors__report_term_errors_5_p_0(transform_hlds__termination__ModuleInfo_6, transform_hlds__termination__SCC_7, transform_hlds__termination__Errors_8, transform_hlds__termination__STATE_VARIABLE_Specs_0_12, transform_hlds__termination__STATE_VARIABLE_Specs_13);
                }
                break;
            }
          }
        else
          *transform_hlds__termination__STATE_VARIABLE_Specs_13 = transform_hlds__termination__STATE_VARIABLE_Specs_0_12;
      }
  }
}

static void MR_CALL 
transform_hlds__termination__set_termination_infos_4_p_0(
  MR_Word transform_hlds__termination__HeadVar__1_1,
  MR_Word transform_hlds__termination__TerminationInfo_2,
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__termination__succeeded;

        if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3;
        else
          {
            MR_Word transform_hlds__termination__TypeCtorInfo_28_28;
            MR_Word transform_hlds__termination__TypeCtorInfo_29_29;
            MR_Word transform_hlds__termination__TypeCtorInfo_31_31;
            MR_Word transform_hlds__termination__PPId_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__termination__PPIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__termination__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PPId_9, (MR_Integer) 0)));
            MR_Integer transform_hlds__termination__ProcId_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PPId_9, (MR_Integer) 1)));
            MR_Word transform_hlds__termination__PredTable0_15;
            MR_Word transform_hlds__termination__PredInfo0_16;
            MR_Word transform_hlds__termination__ProcTable0_17;
            MR_Word transform_hlds__termination__ProcInfo0_18;
            MR_Word transform_hlds__termination__ProcInfo_19;
            MR_Word transform_hlds__termination__ProcTable_20;
            MR_Word transform_hlds__termination__PredInfo_21;
            MR_Word transform_hlds__termination__PredTable_22;
            MR_Word transform_hlds__termination__V_25_25;
            MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26;
            MR_Box transform_hlds__termination__conv0_PredInfo0_16;
            MR_Box transform_hlds__termination__conv1_ProcInfo0_18;

            {
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__termination__PredTable0_15);
            }
            transform_hlds__termination__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
            transform_hlds__termination__TypeCtorInfo_29_29 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
            {
              mercury__map__lookup_3_p_0(transform_hlds__termination__TypeCtorInfo_28_28, transform_hlds__termination__TypeCtorInfo_29_29, transform_hlds__termination__PredTable0_15, ((MR_Box) (transform_hlds__termination__PredId_13)), &transform_hlds__termination__conv0_PredInfo0_16);
            }
            transform_hlds__termination__PredInfo0_16 = ((MR_Word) transform_hlds__termination__conv0_PredInfo0_16);
            {
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__termination__PredInfo0_16, &transform_hlds__termination__ProcTable0_17);
            }
            transform_hlds__termination__TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__termination__TypeCtorInfo_31_31, transform_hlds__termination__ProcTable0_17, transform_hlds__termination__ProcId_14, &transform_hlds__termination__conv1_ProcInfo0_18);
            }
            transform_hlds__termination__ProcInfo0_18 = ((MR_Word) transform_hlds__termination__conv1_ProcInfo0_18);
            {
              transform_hlds__termination__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_25_25, 0) = ((MR_Box) (transform_hlds__termination__TerminationInfo_2));
            }
            {
              hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(transform_hlds__termination__V_25_25, transform_hlds__termination__ProcInfo0_18, &transform_hlds__termination__ProcInfo_19);
            }
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__termination__TypeCtorInfo_31_31, transform_hlds__termination__ProcId_14, ((MR_Box) (transform_hlds__termination__ProcInfo_19)), transform_hlds__termination__ProcTable0_17, &transform_hlds__termination__ProcTable_20);
            }
            {
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__termination__ProcTable_20, transform_hlds__termination__PredInfo0_16, &transform_hlds__termination__PredInfo_21);
            }
            {
              mercury__map__det_update_4_p_0(transform_hlds__termination__TypeCtorInfo_28_28, transform_hlds__termination__TypeCtorInfo_29_29, ((MR_Box) (transform_hlds__termination__PredId_13)), ((MR_Box) (transform_hlds__termination__PredInfo_21)), transform_hlds__termination__PredTable0_15, &transform_hlds__termination__PredTable_22);
            }
            {
              hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__termination__PredTable_22, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26);
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__PPIds_10;
              MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26;

              transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__termination__set_infinite_arg_size_infos_4_p_0(
  MR_Word transform_hlds__termination__HeadVar__1_1,
  MR_Word transform_hlds__termination__ArgSizeInfo_2,
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__termination__succeeded;

        if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3;
        else
          {
            MR_Word transform_hlds__termination__TypeCtorInfo_28_28;
            MR_Word transform_hlds__termination__TypeCtorInfo_29_29;
            MR_Word transform_hlds__termination__TypeCtorInfo_31_31;
            MR_Word transform_hlds__termination__PPId_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__termination__PPIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__termination__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PPId_9, (MR_Integer) 0)));
            MR_Integer transform_hlds__termination__ProcId_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PPId_9, (MR_Integer) 1)));
            MR_Word transform_hlds__termination__PredTable0_15;
            MR_Word transform_hlds__termination__PredInfo0_16;
            MR_Word transform_hlds__termination__ProcTable0_17;
            MR_Word transform_hlds__termination__ProcInfo0_18;
            MR_Word transform_hlds__termination__ProcInfo_19;
            MR_Word transform_hlds__termination__ProcTable_20;
            MR_Word transform_hlds__termination__PredInfo_21;
            MR_Word transform_hlds__termination__PredTable_22;
            MR_Word transform_hlds__termination__V_25_25;
            MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26;
            MR_Box transform_hlds__termination__conv0_PredInfo0_16;
            MR_Box transform_hlds__termination__conv1_ProcInfo0_18;

            {
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__termination__PredTable0_15);
            }
            transform_hlds__termination__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
            transform_hlds__termination__TypeCtorInfo_29_29 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
            {
              mercury__map__lookup_3_p_0(transform_hlds__termination__TypeCtorInfo_28_28, transform_hlds__termination__TypeCtorInfo_29_29, transform_hlds__termination__PredTable0_15, ((MR_Box) (transform_hlds__termination__PredId_13)), &transform_hlds__termination__conv0_PredInfo0_16);
            }
            transform_hlds__termination__PredInfo0_16 = ((MR_Word) transform_hlds__termination__conv0_PredInfo0_16);
            {
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__termination__PredInfo0_16, &transform_hlds__termination__ProcTable0_17);
            }
            transform_hlds__termination__TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__termination__TypeCtorInfo_31_31, transform_hlds__termination__ProcTable0_17, transform_hlds__termination__ProcId_14, &transform_hlds__termination__conv1_ProcInfo0_18);
            }
            transform_hlds__termination__ProcInfo0_18 = ((MR_Word) transform_hlds__termination__conv1_ProcInfo0_18);
            {
              transform_hlds__termination__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_25_25, 0) = ((MR_Box) (transform_hlds__termination__ArgSizeInfo_2));
            }
            {
              hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_p_0(transform_hlds__termination__V_25_25, transform_hlds__termination__ProcInfo0_18, &transform_hlds__termination__ProcInfo_19);
            }
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__termination__TypeCtorInfo_31_31, transform_hlds__termination__ProcId_14, ((MR_Box) (transform_hlds__termination__ProcInfo_19)), transform_hlds__termination__ProcTable0_17, &transform_hlds__termination__ProcTable_20);
            }
            {
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__termination__ProcTable_20, transform_hlds__termination__PredInfo0_16, &transform_hlds__termination__PredInfo_21);
            }
            {
              mercury__map__set_4_p_0(transform_hlds__termination__TypeCtorInfo_28_28, transform_hlds__termination__TypeCtorInfo_29_29, ((MR_Box) (transform_hlds__termination__PredId_13)), ((MR_Box) (transform_hlds__termination__PredInfo_21)), transform_hlds__termination__PredTable0_15, &transform_hlds__termination__PredTable_22);
            }
            {
              hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__termination__PredTable_22, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26);
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__PPIds_10;
              MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26;

              transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__termination__set_finite_arg_size_infos_4_p_0(
  MR_Word transform_hlds__termination__HeadVar__1_1,
  MR_Word transform_hlds__termination__OutputSupplierMap_2,
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__termination__succeeded;

        if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3;
        else
          {
            MR_Word transform_hlds__termination__TypeCtorInfo_32_32;
            MR_Word transform_hlds__termination__TypeCtorInfo_33_33;
            MR_Word transform_hlds__termination__TypeCtorInfo_35_35;
            MR_Word transform_hlds__termination__Soln_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__termination__Solns_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__termination__PPId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__Soln_9, (MR_Integer) 0)));
            MR_Integer transform_hlds__termination__Gamma_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__Soln_9, (MR_Integer) 1)));
            MR_Word transform_hlds__termination__PredId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PPId_13, (MR_Integer) 0)));
            MR_Integer transform_hlds__termination__ProcId_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PPId_13, (MR_Integer) 1)));
            MR_Word transform_hlds__termination__PredTable0_17;
            MR_Word transform_hlds__termination__PredInfo0_18;
            MR_Word transform_hlds__termination__ProcTable0_19;
            MR_Word transform_hlds__termination__ProcInfo_20;
            MR_Word transform_hlds__termination__OutputSuppliers_21;
            MR_Word transform_hlds__termination__ArgSizeInfo_22;
            MR_Word transform_hlds__termination__ProcInfo1_23;
            MR_Word transform_hlds__termination__ProcTable_24;
            MR_Word transform_hlds__termination__PredInfo_25;
            MR_Word transform_hlds__termination__PredTable_26;
            MR_Word transform_hlds__termination__V_29_29;
            MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_30_30;
            MR_Box transform_hlds__termination__conv0_PredInfo0_18;
            MR_Box transform_hlds__termination__conv1_ProcInfo_20;
            MR_Box transform_hlds__termination__conv2_OutputSuppliers_21;

            {
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__termination__PredTable0_17);
            }
            transform_hlds__termination__TypeCtorInfo_32_32 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
            transform_hlds__termination__TypeCtorInfo_33_33 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
            {
              mercury__map__lookup_3_p_0(transform_hlds__termination__TypeCtorInfo_32_32, transform_hlds__termination__TypeCtorInfo_33_33, transform_hlds__termination__PredTable0_17, ((MR_Box) (transform_hlds__termination__PredId_15)), &transform_hlds__termination__conv0_PredInfo0_18);
            }
            transform_hlds__termination__PredInfo0_18 = ((MR_Word) transform_hlds__termination__conv0_PredInfo0_18);
            {
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__termination__PredInfo0_18, &transform_hlds__termination__ProcTable0_19);
            }
            transform_hlds__termination__TypeCtorInfo_35_35 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__termination__TypeCtorInfo_35_35, transform_hlds__termination__ProcTable0_19, transform_hlds__termination__ProcId_16, &transform_hlds__termination__conv1_ProcInfo_20);
            }
            transform_hlds__termination__ProcInfo_20 = ((MR_Word) transform_hlds__termination__conv1_ProcInfo_20);
            {
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__termination_scalar_common_1[2], transform_hlds__termination__OutputSupplierMap_2, ((MR_Box) (transform_hlds__termination__PPId_13)), &transform_hlds__termination__conv2_OutputSuppliers_21);
            }
            transform_hlds__termination__OutputSuppliers_21 = ((MR_Word) transform_hlds__termination__conv2_OutputSuppliers_21);
            {
              transform_hlds__termination__ArgSizeInfo_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeInfo_22, 0) = ((MR_Box) (transform_hlds__termination__Gamma_14));
              MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeInfo_22, 1) = ((MR_Box) (transform_hlds__termination__OutputSuppliers_21));
            }
            {
              transform_hlds__termination__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_29_29, 0) = ((MR_Box) (transform_hlds__termination__ArgSizeInfo_22));
            }
            {
              hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_p_0(transform_hlds__termination__V_29_29, transform_hlds__termination__ProcInfo_20, &transform_hlds__termination__ProcInfo1_23);
            }
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__termination__TypeCtorInfo_35_35, transform_hlds__termination__ProcId_16, ((MR_Box) (transform_hlds__termination__ProcInfo1_23)), transform_hlds__termination__ProcTable0_19, &transform_hlds__termination__ProcTable_24);
            }
            {
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__termination__ProcTable_24, transform_hlds__termination__PredInfo0_18, &transform_hlds__termination__PredInfo_25);
            }
            {
              mercury__map__set_4_p_0(transform_hlds__termination__TypeCtorInfo_32_32, transform_hlds__termination__TypeCtorInfo_33_33, ((MR_Box) (transform_hlds__termination__PredId_15)), ((MR_Box) (transform_hlds__termination__PredInfo_25)), transform_hlds__termination__PredTable0_17, &transform_hlds__termination__PredTable_26);
            }
            {
              hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__termination__PredTable_26, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_30_30);
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__Solns_10;
              MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_30_30;

              transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0_3(
  MR_Box transform_hlds__termination__closure_arg,
  MR_Box transform_hlds__termination__wrapper_arg_1)
{
  {
    MR_bool transform_hlds__termination__succeeded;
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

    {
      transform_hlds__termination__succeeded = transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__396__1_1_p_0(((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
    return transform_hlds__termination__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0_2(
  MR_Box transform_hlds__termination__closure_arg,
  MR_Box transform_hlds__termination__wrapper_arg_1)
{
  {
    MR_bool transform_hlds__termination__succeeded;
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

    {
      transform_hlds__termination__succeeded = transform_hlds__term_util__is_termination_known_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
    return transform_hlds__termination__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0_1(
  MR_Box transform_hlds__termination__closure_arg,
  MR_Box transform_hlds__termination__wrapper_arg_1)
{
  {
    MR_bool transform_hlds__termination__succeeded;
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

    {
      transform_hlds__termination__succeeded = transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__362__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
    return transform_hlds__termination__succeeded;
  }
}

static void MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0(
  MR_Word transform_hlds__termination__PassInfo_7,
  MR_Word transform_hlds__termination__SCC_8,
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47,
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_48,
  MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_0_49,
  MR_Word * transform_hlds__termination__STATE_VARIABLE_Specs_50)
{
  {
    MR_bool transform_hlds__termination__succeeded;
    MR_Word transform_hlds__termination__TypeCtorInfo_64_64;
    MR_Word transform_hlds__termination__IsArgSizeKnown_11;
    MR_Word transform_hlds__termination__SCCArgSizeUnknown_17;
    MR_Word transform_hlds__termination__ArgSizeErrors_18;
    MR_Word transform_hlds__termination__TermErrors_19;
    MR_Word transform_hlds__termination__SCCTerminationUnknown_27;
    MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_55_55;
    MR_Word transform_hlds__termination__V_56_56;
    MR_Word transform_hlds__termination___SCCArgSizeKnown_16;
    MR_Word transform_hlds__termination___SCCTerminationKnown_26;

    {
      transform_hlds__termination__IsArgSizeKnown_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsArgSizeKnown_11, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsArgSizeKnown_11, 1) = ((MR_Box) (transform_hlds__termination__analyse_termination_in_scc_6_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsArgSizeKnown_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsArgSizeKnown_11, 3) = ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47));
    }
    transform_hlds__termination__TypeCtorInfo_64_64 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
    {
      mercury__list__filter_4_p_0(transform_hlds__termination__TypeCtorInfo_64_64, transform_hlds__termination__IsArgSizeKnown_11, transform_hlds__termination__SCC_8, &transform_hlds__termination___SCCArgSizeKnown_16, &transform_hlds__termination__SCCArgSizeUnknown_17);
    }
    if ((transform_hlds__termination__SCCArgSizeUnknown_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        transform_hlds__termination__ArgSizeErrors_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        transform_hlds__termination__TermErrors_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        transform_hlds__termination__STATE_VARIABLE_ModuleInfo_55_55 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47;
      }
    else
      {
        MR_Word transform_hlds__termination__ArgSizeResult_22;

        {
          transform_hlds__term_pass1__find_arg_sizes_in_scc_5_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47, transform_hlds__termination__PassInfo_7, transform_hlds__termination__SCCArgSizeUnknown_17, &transform_hlds__termination__ArgSizeResult_22, &transform_hlds__termination__TermErrors_19);
        }
        if (((MR_tag((MR_Word) transform_hlds__termination__ArgSizeResult_22)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word transform_hlds__termination__V_53_53;

            transform_hlds__termination__ArgSizeErrors_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__ArgSizeResult_22, (MR_Integer) 0)));
            {
              transform_hlds__termination__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_53_53, 0) = ((MR_Box) (transform_hlds__termination__ArgSizeErrors_18));
            }
            {
              transform_hlds__termination__set_infinite_arg_size_infos_4_p_0(transform_hlds__termination__SCCArgSizeUnknown_17, transform_hlds__termination__V_53_53, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_55_55);
            }
          }
        else
          {
            MR_Word transform_hlds__termination__Solutions_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeResult_22, (MR_Integer) 0)));
            MR_Word transform_hlds__termination__OutputSupplierMap_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeResult_22, (MR_Integer) 1)));

            {
              transform_hlds__termination__set_finite_arg_size_infos_4_p_0(transform_hlds__termination__Solutions_23, transform_hlds__termination__OutputSupplierMap_24, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_55_55);
            }
            transform_hlds__termination__ArgSizeErrors_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
      }
    {
      transform_hlds__termination__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_56_56, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_56_56, 1) = ((MR_Box) (transform_hlds__termination__analyse_termination_in_scc_6_p_0_2));
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_56_56, 3) = ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_55_55));
    }
    {
      mercury__list__filter_4_p_0(transform_hlds__termination__TypeCtorInfo_64_64, transform_hlds__termination__V_56_56, transform_hlds__termination__SCC_8, &transform_hlds__termination___SCCTerminationKnown_26, &transform_hlds__termination__SCCTerminationUnknown_27);
    }
    if ((transform_hlds__termination__SCCTerminationUnknown_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_48 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_55_55;
        *transform_hlds__termination__STATE_VARIABLE_Specs_50 = transform_hlds__termination__STATE_VARIABLE_Specs_0_49;
      }
    else
      {
        MR_Word transform_hlds__termination__TypeCtorInfo_66_66 = (MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0;
        MR_Word transform_hlds__termination__FatalErrors_34;
        MR_Word transform_hlds__termination__BothErrors_35;

        {
          mercury__list__filter_3_p_0(transform_hlds__termination__TypeCtorInfo_66_66, (MR_Word) &transform_hlds__termination_scalar_common_2[4], transform_hlds__termination__ArgSizeErrors_18, &transform_hlds__termination__FatalErrors_34);
        }
        {
          transform_hlds__termination__BothErrors_35 = mercury__list__f_43_43_2_f_0(transform_hlds__termination__TypeCtorInfo_66_66, transform_hlds__termination__TermErrors_19, transform_hlds__termination__FatalErrors_34);
        }
        if ((transform_hlds__termination__BothErrors_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word transform_hlds__termination__TerminationResult_42;
            MR_Word transform_hlds__termination__Globals_43;
            MR_Integer transform_hlds__termination__SingleArgs_44;

            {
              hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_55_55, &transform_hlds__termination__Globals_43);
            }
            {
              libs__globals__lookup_int_option_3_p_0(transform_hlds__termination__Globals_43, (MR_Integer) 413, &transform_hlds__termination__SingleArgs_44);
            }
            {
              transform_hlds__term_pass2__prove_termination_in_scc_5_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_55_55, transform_hlds__termination__PassInfo_7, transform_hlds__termination__SCCTerminationUnknown_27, transform_hlds__termination__SingleArgs_44, &transform_hlds__termination__TerminationResult_42);
            }
            {
              transform_hlds__termination__set_termination_infos_4_p_0(transform_hlds__termination__SCCTerminationUnknown_27, transform_hlds__termination__TerminationResult_42, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_55_55, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_48);
            }
            if (((MR_tag((MR_Word) transform_hlds__termination__TerminationResult_42)) == (MR_mktag((MR_Integer) 1))))
              {
                MR_Word transform_hlds__termination__TerminationErrors_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__TerminationResult_42, (MR_Integer) 0)));

                {
                  transform_hlds__termination__maybe_report_termination_errors_5_p_0(*transform_hlds__termination__STATE_VARIABLE_ModuleInfo_48, transform_hlds__termination__SCC_8, transform_hlds__termination__TerminationErrors_45, transform_hlds__termination__STATE_VARIABLE_Specs_0_49, transform_hlds__termination__STATE_VARIABLE_Specs_50);
                }
              }
            else
              *transform_hlds__termination__STATE_VARIABLE_Specs_50 = transform_hlds__termination__STATE_VARIABLE_Specs_0_49;
          }
        else
          {
            MR_Integer transform_hlds__termination__MaxErrors_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PassInfo_7, (MR_Integer) 1)));
            MR_Word transform_hlds__termination__TerminationResult_69;
            MR_Word transform_hlds__termination__TerminationErrors_70;
            MR_Word transform_hlds__termination__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PassInfo_7, (MR_Integer) 0)));
            MR_Integer transform_hlds__termination__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PassInfo_7, (MR_Integer) 2)));

            {
              mercury__list__take_upto_3_p_0(transform_hlds__termination__TypeCtorInfo_66_66, transform_hlds__termination__MaxErrors_39, transform_hlds__termination__BothErrors_35, &transform_hlds__termination__TerminationErrors_70);
            }
            {
              transform_hlds__termination__TerminationResult_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__termination__TerminationResult_69, 0) = ((MR_Box) (transform_hlds__termination__TerminationErrors_70));
            }
            {
              transform_hlds__termination__set_termination_infos_4_p_0(transform_hlds__termination__SCCTerminationUnknown_27, transform_hlds__termination__TerminationResult_69, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_55_55, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_48);
            }
            {
              transform_hlds__termination__maybe_report_termination_errors_5_p_0(*transform_hlds__termination__STATE_VARIABLE_ModuleInfo_48, transform_hlds__termination__SCC_8, transform_hlds__termination__TerminationErrors_70, transform_hlds__termination__STATE_VARIABLE_Specs_0_49, transform_hlds__termination__STATE_VARIABLE_Specs_50);
            }
          }
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__termination__check_procs_known_term_3_p_0(
  MR_Word transform_hlds__termination__Status_1,
  MR_Word transform_hlds__termination__HeadVar__2_2,
  MR_Word transform_hlds__termination__ModuleInfo_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__termination__succeeded;

        if ((transform_hlds__termination__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          transform_hlds__termination__succeeded = MR_TRUE;
        else
          {
            MR_Word transform_hlds__termination__PPId_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word transform_hlds__termination__PPIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word transform_hlds__termination__ProcInfo_11;
            MR_Word transform_hlds__termination__MaybeTerm_12;
            MR_Word transform_hlds__termination__PPIdStatus_13;
            MR_Word transform_hlds__termination__V_10_10;

            {
              hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__termination__ModuleInfo_3, transform_hlds__termination__PPId_7, &transform_hlds__termination__V_10_10, &transform_hlds__termination__ProcInfo_11);
            }
            {
              hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__termination__ProcInfo_11, &transform_hlds__termination__MaybeTerm_12);
            }
            if ((transform_hlds__termination__MaybeTerm_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.termination", (MR_String) "predicate \140transform_hlds.termination.check_procs_known_term\'/3", (MR_String) "no termination info for procedure");
                }
              }
            else
              transform_hlds__termination__PPIdStatus_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__MaybeTerm_12, (MR_Integer) 0)));
            if (((MR_tag((MR_Word) transform_hlds__termination__Status_1)) == (MR_mktag((MR_Integer) 1))))
              {
                MR_Word transform_hlds__termination__V_17_17;

                transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__PPIdStatus_13)) == (MR_mktag((MR_Integer) 1)));
                if (transform_hlds__termination__succeeded)
                  transform_hlds__termination__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__PPIdStatus_13, (MR_Integer) 0)));
              }
            else
              transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__PPIdStatus_13)) == (MR_mktag((MR_Integer) 0)));
            if (transform_hlds__termination__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word transform_hlds__termination__HeadVar__2__tmp_copy_2 = transform_hlds__termination__PPIds_8;

                  transform_hlds__termination__HeadVar__2_2 = transform_hlds__termination__HeadVar__2__tmp_copy_2;
                }
                continue;
              }
          }
        return transform_hlds__termination__succeeded;
      }
      break;
    }
}

static MR_Box MR_CALL 
transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0_2(
  MR_Box transform_hlds__termination__closure_arg,
  MR_Box transform_hlds__termination__wrapper_arg_1)
{
  {
    MR_Box transform_hlds__termination__wrapper_arg_2;
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;
    MR_Word transform_hlds__termination__conv0_LambdaHeadVar__2_42;

    {
      transform_hlds__termination__conv0_LambdaHeadVar__2_42 = transform_hlds__termination__IntroducedFrom__func__check_scc_pragmas_are_consistent__309__1_1_f_0(((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
    transform_hlds__termination__wrapper_arg_2 = ((MR_Box) (transform_hlds__termination__conv0_LambdaHeadVar__2_42));
    return transform_hlds__termination__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0_1(
  MR_Box transform_hlds__termination__closure_arg,
  MR_Box transform_hlds__termination__wrapper_arg_1)
{
  {
    MR_bool transform_hlds__termination__succeeded;
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

    {
      transform_hlds__termination__succeeded = transform_hlds__term_util__is_termination_known_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
    return transform_hlds__termination__succeeded;
  }
}

static void MR_CALL 
transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0(
  MR_Word transform_hlds__termination__SCC_6,
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27,
  MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_0_28,
  MR_Word * transform_hlds__termination__STATE_VARIABLE_Specs_29)
{
  {
    MR_bool transform_hlds__termination__succeeded;
    MR_Word transform_hlds__termination__TypeCtorInfo_66_66;
    MR_Word transform_hlds__termination__SCCTerminationKnown_9;
    MR_Word transform_hlds__termination__SCCTerminationUnknown_10;
    MR_Word transform_hlds__termination__V_30_30;

    {
      transform_hlds__termination__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_30_30, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_30_30, 1) = ((MR_Box) (transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_30_30, 3) = ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26));
    }
    transform_hlds__termination__TypeCtorInfo_66_66 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
    {
      mercury__list__filter_4_p_0(transform_hlds__termination__TypeCtorInfo_66_66, transform_hlds__termination__V_30_30, transform_hlds__termination__SCC_6, &transform_hlds__termination__SCCTerminationKnown_9, &transform_hlds__termination__SCCTerminationUnknown_10);
    }
    if ((transform_hlds__termination__SCCTerminationKnown_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26;
        *transform_hlds__termination__STATE_VARIABLE_Specs_29 = transform_hlds__termination__STATE_VARIABLE_Specs_0_28;
      }
    else
      {
        MR_Word transform_hlds__termination__KnownPPId_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__SCCTerminationKnown_9, (MR_Integer) 0)));
        MR_Word transform_hlds__termination__KnownProcInfo_14;
        MR_Word transform_hlds__termination__MaybeKnownTerm_15;
        MR_Word transform_hlds__termination__KnownTermStatus_16;
        MR_Word transform_hlds__termination__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__SCCTerminationKnown_9, (MR_Integer) 1)));
        MR_Word transform_hlds__termination__V_13_13;
        MR_Word transform_hlds__termination__PPId_72;
        MR_Word transform_hlds__termination__PPIds_73;
        MR_Word transform_hlds__termination__ProcInfo_76;
        MR_Word transform_hlds__termination__MaybeTerm_77;
        MR_Word transform_hlds__termination__PPIdStatus_78;
        MR_Word transform_hlds__termination__V_75_75;

        {
          hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26, transform_hlds__termination__KnownPPId_11, &transform_hlds__termination__V_13_13, &transform_hlds__termination__KnownProcInfo_14);
        }
        {
          hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__termination__KnownProcInfo_14, &transform_hlds__termination__MaybeKnownTerm_15);
        }
        if ((transform_hlds__termination__MaybeKnownTerm_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.termination", (MR_String) "predicate \140transform_hlds.termination.check_scc_pragmas_are_consistent\'/5", (MR_String) "no termination info found");
              return;
            }
          }
        else
          transform_hlds__termination__KnownTermStatus_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__MaybeKnownTerm_15, (MR_Integer) 0)));
        transform_hlds__termination__PPId_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__SCCTerminationKnown_9, (MR_Integer) 0)));
        transform_hlds__termination__PPIds_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__SCCTerminationKnown_9, (MR_Integer) 1)));
        {
          hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26, transform_hlds__termination__PPId_72, &transform_hlds__termination__V_75_75, &transform_hlds__termination__ProcInfo_76);
        }
        {
          hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__termination__ProcInfo_76, &transform_hlds__termination__MaybeTerm_77);
        }
        if ((transform_hlds__termination__MaybeTerm_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.termination", (MR_String) "predicate \140transform_hlds.termination.check_procs_known_term\'/3", (MR_String) "no termination info for procedure");
              return;
            }
          }
        else
          transform_hlds__termination__PPIdStatus_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__MaybeTerm_77, (MR_Integer) 0)));
        if (((MR_tag((MR_Word) transform_hlds__termination__KnownTermStatus_16)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word transform_hlds__termination__V_82_82;

            transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__PPIdStatus_78)) == (MR_mktag((MR_Integer) 1)));
            if (transform_hlds__termination__succeeded)
              transform_hlds__termination__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__PPIdStatus_78, (MR_Integer) 0)));
          }
        else
          transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__PPIdStatus_78)) == (MR_mktag((MR_Integer) 0)));
        if (transform_hlds__termination__succeeded)
          {
            transform_hlds__termination__succeeded = transform_hlds__termination__check_procs_known_term_3_p_0(transform_hlds__termination__KnownTermStatus_16, transform_hlds__termination__PPIds_73, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26);
          }
        if (transform_hlds__termination__succeeded)
          {
            {
              transform_hlds__termination__set_termination_infos_4_p_0(transform_hlds__termination__SCCTerminationUnknown_10, transform_hlds__termination__KnownTermStatus_16, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27);
            }
            *transform_hlds__termination__STATE_VARIABLE_Specs_29 = transform_hlds__termination__STATE_VARIABLE_Specs_0_28;
          }
        else
          {
            MR_Word transform_hlds__termination__Context_17;
            MR_Word transform_hlds__termination__NewTermStatus_18;
            MR_Word transform_hlds__termination__PredIds_19;
            MR_Word transform_hlds__termination__PredNamePieces_22;
            MR_Word transform_hlds__termination__Pieces_23;
            MR_Word transform_hlds__termination__Msg_24;
            MR_Word transform_hlds__termination__Spec_25;
            MR_Word transform_hlds__termination__V_35_35;
            MR_Word transform_hlds__termination__V_36_36;
            MR_Word transform_hlds__termination__V_44_44;
            MR_Word transform_hlds__termination__V_54_54;
            MR_Word transform_hlds__termination__V_55_55;
            MR_Word transform_hlds__termination__V_59_59;

            {
              transform_hlds__term_util__get_context_from_scc_3_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26, transform_hlds__termination__SCCTerminationKnown_9, &transform_hlds__termination__Context_17);
            }
            {
              transform_hlds__termination__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__termination__V_36_36, 0) = ((MR_Box) (transform_hlds__termination__Context_17));
              MR_hl_field(MR_mktag(0), transform_hlds__termination__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
            }
            {
              transform_hlds__termination__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_35_35, 0) = ((MR_Box) (transform_hlds__termination__V_36_36));
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              transform_hlds__termination__NewTermStatus_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__termination__NewTermStatus_18, 0) = ((MR_Box) (transform_hlds__termination__V_35_35));
            }
            {
              transform_hlds__termination__set_termination_infos_4_p_0(transform_hlds__termination__SCC_6, transform_hlds__termination__NewTermStatus_18, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27);
            }
            {
              transform_hlds__termination__PredIds_19 = mercury__list__map_2_f_0(transform_hlds__termination__TypeCtorInfo_66_66, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &transform_hlds__termination_scalar_common_2[3], transform_hlds__termination__SCCTerminationKnown_9);
            }
            {
              transform_hlds__termination__PredNamePieces_22 = hlds__hlds_error_util__describe_several_pred_names_3_f_0(*transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27, (MR_Integer) 0, transform_hlds__termination__PredIds_19);
            }
            {
              transform_hlds__termination__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_44_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[36])));
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_44_44, 1) = ((MR_Box) (transform_hlds__termination__PredNamePieces_22));
            }
            {
              transform_hlds__termination__Pieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__termination__V_44_44, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[26]));
            }
            {
              transform_hlds__termination__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__termination__V_55_55, 0) = ((MR_Box) (transform_hlds__termination__Pieces_23));
            }
            {
              transform_hlds__termination__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_54_54, 0) = ((MR_Box) (transform_hlds__termination__V_55_55));
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              transform_hlds__termination__Msg_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__termination__Msg_24, 0) = ((MR_Box) (transform_hlds__termination__Context_17));
              MR_hl_field(MR_mktag(0), transform_hlds__termination__Msg_24, 1) = ((MR_Box) (transform_hlds__termination__V_54_54));
            }
            {
              transform_hlds__termination__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_59_59, 0) = ((MR_Box) (transform_hlds__termination__Msg_24));
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              transform_hlds__termination__Spec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
              MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
              MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_25, 2) = ((MR_Box) (transform_hlds__termination__V_59_59));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__termination__STATE_VARIABLE_Specs_29 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__termination__Spec_25));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_Specs_0_28));
            }
          }
      }
  }
}

static void MR_CALL 
transform_hlds__termination__check_foreign_code_attributes_of_proc_7_p_0(
  MR_Word transform_hlds__termination__ModuleInfo_8,
  MR_Word transform_hlds__termination__PPId_9,
  MR_Word transform_hlds__termination__Attributes_10,
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25,
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcInfo_26,
  MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_0_27,
  MR_Word * transform_hlds__termination__STATE_VARIABLE_Specs_28)
{
  {
    MR_bool transform_hlds__termination__succeeded;
    MR_Word transform_hlds__termination__MaybeTermination_13;
    MR_Word transform_hlds__termination__Context_14;

    {
      hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25, &transform_hlds__termination__MaybeTermination_13);
    }
    {
      hlds__hlds_pred__proc_info_get_context_2_p_0(transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25, &transform_hlds__termination__Context_14);
    }
    if ((transform_hlds__termination__MaybeTermination_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          transform_hlds__termination__succeeded = transform_hlds__term_util__attributes_imply_termination_1_p_0(transform_hlds__termination__Attributes_10);
        }
        if (transform_hlds__termination__succeeded)
          {
            mercury__private_builtin__dummy_var = (MR_Integer) 0;
            {
              hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_5[1]), transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25, transform_hlds__termination__STATE_VARIABLE_ProcInfo_26);
            }
          }
        else
          {
            MR_Word transform_hlds__termination__TermErr_16;
            MR_Word transform_hlds__termination__V_104_104;
            MR_Word transform_hlds__termination__V_105_105;
            MR_Word transform_hlds__termination__V_106_106;
            MR_Word transform_hlds__termination__TermStatus_109;

            {
              transform_hlds__termination__V_104_104 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), transform_hlds__termination__V_104_104, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
              MR_hl_field(MR_mktag(3), transform_hlds__termination__V_104_104, 1) = ((MR_Box) (transform_hlds__termination__PPId_9));
            }
            {
              transform_hlds__termination__TermErr_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__termination__TermErr_16, 0) = ((MR_Box) (transform_hlds__termination__Context_14));
              MR_hl_field(MR_mktag(0), transform_hlds__termination__TermErr_16, 1) = ((MR_Box) (transform_hlds__termination__V_104_104));
            }
            {
              transform_hlds__termination__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_106_106, 0) = ((MR_Box) (transform_hlds__termination__TermErr_16));
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_106_106, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              transform_hlds__termination__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_105_105, 0) = ((MR_Box) (transform_hlds__termination__V_106_106));
            }
            {
              transform_hlds__termination__TermStatus_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__termination__TermStatus_109, 0) = ((MR_Box) (transform_hlds__termination__V_105_105));
            }
            {
              hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(transform_hlds__termination__TermStatus_109, transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25, transform_hlds__termination__STATE_VARIABLE_ProcInfo_26);
            }
          }
        *transform_hlds__termination__STATE_VARIABLE_Specs_28 = transform_hlds__termination__STATE_VARIABLE_Specs_0_27;
      }
    else
      {
        MR_Word transform_hlds__termination__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__MaybeTermination_13, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) transform_hlds__termination__V_137_137)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word transform_hlds__termination__TermErrs0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__V_137_137, (MR_Integer) 0)));
            MR_Word transform_hlds__termination__ProcTerminates_130;

            {
              transform_hlds__termination__ProcTerminates_130 = parse_tree__prog_data__get_terminates_1_f_0(transform_hlds__termination__Attributes_10);
            }
            switch (transform_hlds__termination__ProcTerminates_130) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 2:
                {
                  *transform_hlds__termination__STATE_VARIABLE_ProcInfo_26 = transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25;
                  *transform_hlds__termination__STATE_VARIABLE_Specs_28 = transform_hlds__termination__STATE_VARIABLE_Specs_0_27;
                }
                break;
              case (MR_Integer) 1:
                {
                  *transform_hlds__termination__STATE_VARIABLE_ProcInfo_26 = transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25;
                  *transform_hlds__termination__STATE_VARIABLE_Specs_28 = transform_hlds__termination__STATE_VARIABLE_Specs_0_27;
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word transform_hlds__termination__TermErrs_24;
                  MR_Word transform_hlds__termination__V_31_31;
                  MR_Word transform_hlds__termination__V_34_34;
                  MR_Word transform_hlds__termination__V_56_56;
                  MR_Word transform_hlds__termination__V_57_57;
                  MR_Word transform_hlds__termination__V_61_61;
                  MR_Word transform_hlds__termination__TermStatus_116;
                  MR_Word transform_hlds__termination__TermErr_117;
                  MR_Word transform_hlds__termination__ProcNamePieces_118;
                  MR_Word transform_hlds__termination__Pieces_119;
                  MR_Word transform_hlds__termination__Msg_120;
                  MR_Word transform_hlds__termination__Spec_121;

                  {
                    transform_hlds__termination__TermErr_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__TermErr_117, 0) = ((MR_Box) (transform_hlds__termination__Context_14));
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__TermErr_117, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
                  }
                  {
                    transform_hlds__termination__TermErrs_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__TermErrs_24, 0) = ((MR_Box) (transform_hlds__termination__TermErr_117));
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__TermErrs_24, 1) = ((MR_Box) (transform_hlds__termination__TermErrs0_23));
                  }
                  {
                    transform_hlds__termination__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_31_31, 0) = ((MR_Box) (transform_hlds__termination__TermErrs_24));
                  }
                  {
                    transform_hlds__termination__TermStatus_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__TermStatus_116, 0) = ((MR_Box) (transform_hlds__termination__V_31_31));
                  }
                  {
                    hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(transform_hlds__termination__TermStatus_116, transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25, transform_hlds__termination__STATE_VARIABLE_ProcInfo_26);
                  }
                  {
                    transform_hlds__termination__ProcNamePieces_118 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__termination__ModuleInfo_8, (MR_Integer) 0, transform_hlds__termination__PPId_9);
                  }
                  {
                    transform_hlds__termination__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_34_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[36])));
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_34_34, 1) = ((MR_Box) (transform_hlds__termination__ProcNamePieces_118));
                  }
                  {
                    transform_hlds__termination__Pieces_119 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__termination__V_34_34, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[15]));
                  }
                  {
                    transform_hlds__termination__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__V_57_57, 0) = ((MR_Box) (transform_hlds__termination__Pieces_119));
                  }
                  {
                    transform_hlds__termination__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_56_56, 0) = ((MR_Box) (transform_hlds__termination__V_57_57));
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    transform_hlds__termination__Msg_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__Msg_120, 0) = ((MR_Box) (transform_hlds__termination__Context_14));
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__Msg_120, 1) = ((MR_Box) (transform_hlds__termination__V_56_56));
                  }
                  {
                    transform_hlds__termination__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_61_61, 0) = ((MR_Box) (transform_hlds__termination__Msg_120));
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    transform_hlds__termination__Spec_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_121, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_121, 2) = ((MR_Box) (transform_hlds__termination__V_61_61));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *transform_hlds__termination__STATE_VARIABLE_Specs_28 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__termination__Spec_121));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_Specs_0_27));
                  }
                }
                break;
            }
          }
        else
          {
            MR_Word transform_hlds__termination__ProcTerminates_18;

            {
              transform_hlds__termination__ProcTerminates_18 = parse_tree__prog_data__get_terminates_1_f_0(transform_hlds__termination__Attributes_10);
            }
            switch (transform_hlds__termination__ProcTerminates_18) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 2:
                {
                  *transform_hlds__termination__STATE_VARIABLE_ProcInfo_26 = transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25;
                  *transform_hlds__termination__STATE_VARIABLE_Specs_28 = transform_hlds__termination__STATE_VARIABLE_Specs_0_27;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word transform_hlds__termination__ProcNamePieces_19;
                  MR_Word transform_hlds__termination__Pieces_20;
                  MR_Word transform_hlds__termination__Msg_21;
                  MR_Word transform_hlds__termination__Spec_22;
                  MR_Word transform_hlds__termination__V_66_66;
                  MR_Word transform_hlds__termination__V_67_67;
                  MR_Word transform_hlds__termination__V_71_71;
                  MR_Word transform_hlds__termination__V_93_93;
                  MR_Word transform_hlds__termination__V_94_94;
                  MR_Word transform_hlds__termination__V_98_98;
                  MR_Word transform_hlds__termination__TermStatus_110;
                  MR_Word transform_hlds__termination__TermErr_111;

                  {
                    transform_hlds__termination__TermErr_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__TermErr_111, 0) = ((MR_Box) (transform_hlds__termination__Context_14));
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__TermErr_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
                  }
                  {
                    transform_hlds__termination__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_67_67, 0) = ((MR_Box) (transform_hlds__termination__TermErr_111));
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    transform_hlds__termination__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_66_66, 0) = ((MR_Box) (transform_hlds__termination__V_67_67));
                  }
                  {
                    transform_hlds__termination__TermStatus_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__TermStatus_110, 0) = ((MR_Box) (transform_hlds__termination__V_66_66));
                  }
                  {
                    hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(transform_hlds__termination__TermStatus_110, transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25, transform_hlds__termination__STATE_VARIABLE_ProcInfo_26);
                  }
                  {
                    transform_hlds__termination__ProcNamePieces_19 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__termination__ModuleInfo_8, (MR_Integer) 0, transform_hlds__termination__PPId_9);
                  }
                  {
                    transform_hlds__termination__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_71_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[36])));
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_71_71, 1) = ((MR_Box) (transform_hlds__termination__ProcNamePieces_19));
                  }
                  {
                    transform_hlds__termination__Pieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__termination__V_71_71, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[22]));
                  }
                  {
                    transform_hlds__termination__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__V_94_94, 0) = ((MR_Box) (transform_hlds__termination__Pieces_20));
                  }
                  {
                    transform_hlds__termination__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_93_93, 0) = ((MR_Box) (transform_hlds__termination__V_94_94));
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    transform_hlds__termination__Msg_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__Msg_21, 0) = ((MR_Box) (transform_hlds__termination__Context_14));
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__Msg_21, 1) = ((MR_Box) (transform_hlds__termination__V_93_93));
                  }
                  {
                    transform_hlds__termination__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_98_98, 0) = ((MR_Box) (transform_hlds__termination__Msg_21));
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_98_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    transform_hlds__termination__Spec_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                    MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_22, 2) = ((MR_Box) (transform_hlds__termination__V_98_98));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *transform_hlds__termination__STATE_VARIABLE_Specs_28 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__termination__Spec_22));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_Specs_0_27));
                  }
                }
                break;
              case (MR_Integer) 0:
                {
                  *transform_hlds__termination__STATE_VARIABLE_ProcInfo_26 = transform_hlds__termination__STATE_VARIABLE_ProcInfo_0_25;
                  *transform_hlds__termination__STATE_VARIABLE_Specs_28 = transform_hlds__termination__STATE_VARIABLE_Specs_0_27;
                }
                break;
            }
          }
      }
  }
}

static void MR_CALL 
transform_hlds__termination__check_foreign_code_attributes_in_scc_5_p_0(
  MR_Word transform_hlds__termination__PPIds_6,
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27,
  MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_0_28,
  MR_Word * transform_hlds__termination__STATE_VARIABLE_Specs_29)
{
  {
    MR_bool transform_hlds__termination__succeeded;

    if ((transform_hlds__termination__PPIds_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.termination", (MR_String) "predicate \140transform_hlds.termination.check_foreign_code_attributes_in_scc\'/5", (MR_String) "empty SCC");
          return;
        }
      }
    else
      {
        MR_Word transform_hlds__termination__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__PPIds_6, (MR_Integer) 1)));
        MR_Word transform_hlds__termination__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__PPIds_6, (MR_Integer) 0)));

        if ((transform_hlds__termination__V_37_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word transform_hlds__termination__PredInfo_10;
            MR_Word transform_hlds__termination__ProcInfo0_11;
            MR_Word transform_hlds__termination__Attributes_15;
            MR_Word transform_hlds__termination__Goal_12;
            MR_Word transform_hlds__termination__GoalExpr_13;
            MR_Word transform_hlds__termination___GoalInfo_14;
            MR_Word transform_hlds__termination__V_16_16;
            MR_Integer transform_hlds__termination__V_17_17;
            MR_Word transform_hlds__termination__V_18_18;
            MR_Word transform_hlds__termination__V_19_19;
            MR_Word transform_hlds__termination__V_20_20;
            MR_Word transform_hlds__termination__V_21_21;

            {
              hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26, transform_hlds__termination__V_38_38, &transform_hlds__termination__PredInfo_10, &transform_hlds__termination__ProcInfo0_11);
            }
            {
              hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__termination__ProcInfo0_11, &transform_hlds__termination__Goal_12);
            }
            transform_hlds__termination__GoalExpr_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__Goal_12, (MR_Integer) 0)));
            transform_hlds__termination___GoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__Goal_12, (MR_Integer) 1)));
            transform_hlds__termination__succeeded = ((((MR_tag((MR_Word) transform_hlds__termination__GoalExpr_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__GoalExpr_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (transform_hlds__termination__succeeded)
              {
                transform_hlds__termination__Attributes_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__GoalExpr_13, (MR_Integer) 1)));
                transform_hlds__termination__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__GoalExpr_13, (MR_Integer) 2)));
                transform_hlds__termination__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__termination__GoalExpr_13, (MR_Integer) 3)));
                transform_hlds__termination__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__GoalExpr_13, (MR_Integer) 4)));
                transform_hlds__termination__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__GoalExpr_13, (MR_Integer) 5)));
                transform_hlds__termination__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__GoalExpr_13, (MR_Integer) 6)));
                transform_hlds__termination__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__GoalExpr_13, (MR_Integer) 7)));
                {
                  MR_Word transform_hlds__termination__ProcInfo_22;

                  {
                    transform_hlds__termination__check_foreign_code_attributes_of_proc_7_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26, transform_hlds__termination__V_38_38, transform_hlds__termination__Attributes_15, transform_hlds__termination__ProcInfo0_11, &transform_hlds__termination__ProcInfo_22, transform_hlds__termination__STATE_VARIABLE_Specs_0_28, transform_hlds__termination__STATE_VARIABLE_Specs_29);
                  }
                  {
                    hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(transform_hlds__termination__V_38_38, transform_hlds__termination__PredInfo_10, transform_hlds__termination__ProcInfo_22, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27);
                  }
                }
              }
            else
              {
                *transform_hlds__termination__STATE_VARIABLE_Specs_29 = transform_hlds__termination__STATE_VARIABLE_Specs_0_28;
                *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26;
              }
          }
        else
          {
            *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26;
            *transform_hlds__termination__STATE_VARIABLE_Specs_29 = transform_hlds__termination__STATE_VARIABLE_Specs_0_28;
          }
      }
  }
}

static void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_3_p_0_3(
  MR_Box transform_hlds__termination__closure_arg,
  MR_Box transform_hlds__termination__wrapper_arg_1,
  MR_Box transform_hlds__termination__wrapper_arg_2,
  MR_Box * transform_hlds__termination__wrapper_arg_3,
  MR_Box transform_hlds__termination__wrapper_arg_4,
  MR_Box * transform_hlds__termination__wrapper_arg_5)
{
  {
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;
    MR_Word transform_hlds__termination__conv9_STATE_VARIABLE_ModuleInfo_48;
    MR_Word transform_hlds__termination__conv8_STATE_VARIABLE_Specs_50;

    {
      transform_hlds__termination__analyse_termination_in_scc_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1), ((MR_Word) transform_hlds__termination__wrapper_arg_2), &transform_hlds__termination__conv9_STATE_VARIABLE_ModuleInfo_48, ((MR_Word) transform_hlds__termination__wrapper_arg_4), &transform_hlds__termination__conv8_STATE_VARIABLE_Specs_50);
    }
    *transform_hlds__termination__wrapper_arg_3 = ((MR_Box) (transform_hlds__termination__conv9_STATE_VARIABLE_ModuleInfo_48));
    *transform_hlds__termination__wrapper_arg_5 = ((MR_Box) (transform_hlds__termination__conv8_STATE_VARIABLE_Specs_50));
  }
}

static void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_3_p_0_2(
  MR_Box transform_hlds__termination__closure_arg,
  MR_Box transform_hlds__termination__wrapper_arg_1,
  MR_Box transform_hlds__termination__wrapper_arg_2,
  MR_Box * transform_hlds__termination__wrapper_arg_3,
  MR_Box transform_hlds__termination__wrapper_arg_4,
  MR_Box * transform_hlds__termination__wrapper_arg_5)
{
  {
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;
    MR_Word transform_hlds__termination__conv5_STATE_VARIABLE_ModuleInfo_27;
    MR_Word transform_hlds__termination__conv4_STATE_VARIABLE_Specs_29;

    {
      transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0(((MR_Word) transform_hlds__termination__wrapper_arg_1), ((MR_Word) transform_hlds__termination__wrapper_arg_2), &transform_hlds__termination__conv5_STATE_VARIABLE_ModuleInfo_27, ((MR_Word) transform_hlds__termination__wrapper_arg_4), &transform_hlds__termination__conv4_STATE_VARIABLE_Specs_29);
    }
    *transform_hlds__termination__wrapper_arg_3 = ((MR_Box) (transform_hlds__termination__conv5_STATE_VARIABLE_ModuleInfo_27));
    *transform_hlds__termination__wrapper_arg_5 = ((MR_Box) (transform_hlds__termination__conv4_STATE_VARIABLE_Specs_29));
  }
}

static void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_3_p_0_1(
  MR_Box transform_hlds__termination__closure_arg,
  MR_Box transform_hlds__termination__wrapper_arg_1,
  MR_Box transform_hlds__termination__wrapper_arg_2,
  MR_Box * transform_hlds__termination__wrapper_arg_3,
  MR_Box transform_hlds__termination__wrapper_arg_4,
  MR_Box * transform_hlds__termination__wrapper_arg_5)
{
  {
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;
    MR_Word transform_hlds__termination__conv1_STATE_VARIABLE_ModuleInfo_27;
    MR_Word transform_hlds__termination__conv0_STATE_VARIABLE_Specs_29;

    {
      transform_hlds__termination__check_foreign_code_attributes_in_scc_5_p_0(((MR_Word) transform_hlds__termination__wrapper_arg_1), ((MR_Word) transform_hlds__termination__wrapper_arg_2), &transform_hlds__termination__conv1_STATE_VARIABLE_ModuleInfo_27, ((MR_Word) transform_hlds__termination__wrapper_arg_4), &transform_hlds__termination__conv0_STATE_VARIABLE_Specs_29);
    }
    *transform_hlds__termination__wrapper_arg_3 = ((MR_Box) (transform_hlds__termination__conv1_STATE_VARIABLE_ModuleInfo_27));
    *transform_hlds__termination__wrapper_arg_5 = ((MR_Box) (transform_hlds__termination__conv0_STATE_VARIABLE_Specs_29));
  }
}

void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_3_p_0(
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_18,
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_19,
  MR_Word * transform_hlds__termination__STATE_VARIABLE_Specs_20)
{
  {
    MR_bool transform_hlds__termination__succeeded;
    MR_Word transform_hlds__termination__Globals_6;
    MR_Word transform_hlds__termination__TermNorm_7;
    MR_Word transform_hlds__termination__FunctorInfo_8;
    MR_Integer transform_hlds__termination__MaxErrors_9;
    MR_Integer transform_hlds__termination__MaxPaths_10;
    MR_Word transform_hlds__termination__PassInfo_11;
    MR_Word transform_hlds__termination__PredIds_12;
    MR_Word transform_hlds__termination__DepInfo_13;
    MR_Word transform_hlds__termination__SCCs_14;
    MR_Word transform_hlds__termination__PostSpecs_15;
    MR_Word transform_hlds__termination__ProcAnalysisKinds0_16;
    MR_Word transform_hlds__termination__ProcAnalysisKinds_17;
    MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_23_23;
    MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_24_24;
    MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26;
    MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_27_27;
    MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_28_28;
    MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_29_29;
    MR_Word transform_hlds__termination__V_30_30;
    MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_31_31;
    MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_32_32;
    MR_Box transform_hlds__termination__conv3_STATE_VARIABLE_ModuleInfo_26_26;
    MR_Box transform_hlds__termination__conv2_STATE_VARIABLE_Specs_27_27;
    MR_Box transform_hlds__termination__conv7_STATE_VARIABLE_ModuleInfo_28_28;
    MR_Box transform_hlds__termination__conv6_STATE_VARIABLE_Specs_29_29;
    MR_Box transform_hlds__termination__conv11_STATE_VARIABLE_ModuleInfo_31_31;
    MR_Box transform_hlds__termination__conv10_STATE_VARIABLE_Specs_32_32;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_18, &transform_hlds__termination__Globals_6);
    }
    {
      libs__globals__get_termination_norm_2_p_0(transform_hlds__termination__Globals_6, &transform_hlds__termination__TermNorm_7);
    }
    {
      transform_hlds__termination__FunctorInfo_8 = transform_hlds__term_norm__set_functor_info_2_f_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_18, transform_hlds__termination__TermNorm_7);
    }
    {
      libs__globals__lookup_int_option_3_p_0(transform_hlds__termination__Globals_6, (MR_Integer) 415, &transform_hlds__termination__MaxErrors_9);
    }
    {
      libs__globals__lookup_int_option_3_p_0(transform_hlds__termination__Globals_6, (MR_Integer) 416, &transform_hlds__termination__MaxPaths_10);
    }
    {
      transform_hlds__termination__PassInfo_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__termination__PassInfo_11, 0) = ((MR_Box) (transform_hlds__termination__FunctorInfo_8));
      MR_hl_field(MR_mktag(0), transform_hlds__termination__PassInfo_11, 1) = ((MR_Box) (transform_hlds__termination__MaxErrors_9));
      MR_hl_field(MR_mktag(0), transform_hlds__termination__PassInfo_11, 2) = ((MR_Box) (transform_hlds__termination__MaxPaths_10));
    }
    {
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_18, &transform_hlds__termination__PredIds_12);
    }
    {
      transform_hlds__termination__term_preprocess_preds_3_p_0(transform_hlds__termination__PredIds_12, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_18, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_23_23);
    }
    {
      transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_23_23, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_24_24);
    }
    {
      hlds__hlds_module__module_info_dependency_info_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_24_24, &transform_hlds__termination__DepInfo_13);
    }
    {
      hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__termination__DepInfo_13, &transform_hlds__termination__SCCs_14);
    }
    {
      mercury__list__foldl2_6_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__termination_scalar_common_1[1], (MR_Word) &transform_hlds__termination_scalar_common_2[1], transform_hlds__termination__SCCs_14, ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_24_24)), &transform_hlds__termination__conv3_STATE_VARIABLE_ModuleInfo_26_26, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__termination__conv2_STATE_VARIABLE_Specs_27_27);
    }
    transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26 = ((MR_Word) transform_hlds__termination__conv3_STATE_VARIABLE_ModuleInfo_26_26);
    transform_hlds__termination__STATE_VARIABLE_Specs_27_27 = ((MR_Word) transform_hlds__termination__conv2_STATE_VARIABLE_Specs_27_27);
    {
      mercury__list__foldl2_6_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__termination_scalar_common_1[1], (MR_Word) &transform_hlds__termination_scalar_common_2[2], transform_hlds__termination__SCCs_14, ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26)), &transform_hlds__termination__conv7_STATE_VARIABLE_ModuleInfo_28_28, ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_Specs_27_27)), &transform_hlds__termination__conv6_STATE_VARIABLE_Specs_29_29);
    }
    transform_hlds__termination__STATE_VARIABLE_ModuleInfo_28_28 = ((MR_Word) transform_hlds__termination__conv7_STATE_VARIABLE_ModuleInfo_28_28);
    transform_hlds__termination__STATE_VARIABLE_Specs_29_29 = ((MR_Word) transform_hlds__termination__conv6_STATE_VARIABLE_Specs_29_29);
    {
      transform_hlds__termination__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_30_30, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_30_30, 1) = ((MR_Box) (transform_hlds__termination__analyse_termination_in_module_3_p_0_3));
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_30_30, 3) = ((MR_Box) (transform_hlds__termination__PassInfo_11));
    }
    {
      mercury__list__foldl2_6_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__termination_scalar_common_1[1], transform_hlds__termination__V_30_30, transform_hlds__termination__SCCs_14, ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_28_28)), &transform_hlds__termination__conv11_STATE_VARIABLE_ModuleInfo_31_31, ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_Specs_29_29)), &transform_hlds__termination__conv10_STATE_VARIABLE_Specs_32_32);
    }
    transform_hlds__termination__STATE_VARIABLE_ModuleInfo_31_31 = ((MR_Word) transform_hlds__termination__conv11_STATE_VARIABLE_ModuleInfo_31_31);
    transform_hlds__termination__STATE_VARIABLE_Specs_32_32 = ((MR_Word) transform_hlds__termination__conv10_STATE_VARIABLE_Specs_32_32);
    {
      transform_hlds__post_term_analysis__run_post_term_analysis_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_31_31, &transform_hlds__termination__PostSpecs_15);
    }
    {
      *transform_hlds__termination__STATE_VARIABLE_Specs_20 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, transform_hlds__termination__PostSpecs_15, transform_hlds__termination__STATE_VARIABLE_Specs_32_32);
    }
    {
      hlds__hlds_module__module_info_get_proc_analysis_kinds_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_31_31, &transform_hlds__termination__ProcAnalysisKinds0_16);
    }
    {
      mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0, ((MR_Box) ((MR_Integer) 3)), transform_hlds__termination__ProcAnalysisKinds0_16, &transform_hlds__termination__ProcAnalysisKinds_17);
    }
    {
      hlds__hlds_module__module_info_set_proc_analysis_kinds_3_p_0(transform_hlds__termination__ProcAnalysisKinds_17, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_31_31, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_19);
    }
  }
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
