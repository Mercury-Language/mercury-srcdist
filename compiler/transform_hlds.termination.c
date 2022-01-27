/*
** Automatically generated from `termination.m'
** by the Mercury compiler,
** version rotd-14.01.1-2014-05-28, configured for x86_64-apple-darwin13.1.0.
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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
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
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "libs.file_util.mih"
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
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.dependency_graph.mih"
#include "transform_hlds.post_term_analysis.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_pass1.mih"
#include "transform_hlds.term_pass2.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 139 "transform_hlds.termination.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__termination__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 142 "transform_hlds.termination.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__termination__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 943 "termination.m"
static void MR_CALL 
transform_hlds__termination__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_116_101_114_109_105_110_97_116_105_111_110_95_105_110_102_111_95_95_91_49_93_95_48_8_p_0(
#line 943 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_2,
#line 943 "termination.m"
  MR_Word transform_hlds__termination__ProcTable_3,
#line 943 "termination.m"
  MR_Word transform_hlds__termination__PredOrFunc_4,
#line 943 "termination.m"
  MR_Word transform_hlds__termination__SymName_5,
#line 943 "termination.m"
  MR_Word transform_hlds__termination__Context_6);

#line 544 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__544__1_1_p_0(
#line 544 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_49);

#line 517 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__517__1_2_p_0(
#line 517 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35,
#line 517 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_47);

#line 501 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__501__1_2_p_0(
#line 501 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35,
#line 501 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_41);

#line 394 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__394__1_1_p_0(
#line 394 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_59);

#line 360 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__360__1_2_p_0(
#line 360 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47,
#line 360 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_51);

#line 308 "termination.m"
static MR_Word MR_CALL 
transform_hlds__termination__IntroducedFrom__func__check_scc_pragmas_are_consistent__308__1_1_f_0(
#line 308 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_41);

#line 898 "termination.m"
static void MR_CALL 
transform_hlds__termination__make_termination_opt_int_4_p_0_1(
#line 898 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 898 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1,
#line 898 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_2,
#line 898 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_3);

#line 879 "termination.m"
static void MR_CALL 
transform_hlds__termination__make_termination_opt_int_4_p_0(
#line 879 "termination.m"
  MR_Word transform_hlds__termination__PredIds_5,
#line 879 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_6);

#line 851 "termination.m"
static void MR_CALL 
transform_hlds__termination__change_procs_termination_info_5_p_0(
#line 851 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 851 "termination.m"
  MR_Word transform_hlds__termination__Override_2,
#line 851 "termination.m"
  MR_Word transform_hlds__termination__Termination_3,
#line 851 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4,
#line 851 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcTable_5);

#line 819 "termination.m"
static void MR_CALL 
transform_hlds__termination__change_procs_arg_size_info_5_p_0(
#line 819 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 819 "termination.m"
  MR_Word transform_hlds__termination__Override_2,
#line 819 "termination.m"
  MR_Word transform_hlds__termination__ArgSize_3,
#line 819 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4,
#line 819 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcTable_5);

#line 779 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_builtin_terminates_6_p_0(
#line 779 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 779 "termination.m"
  MR_Word transform_hlds__termination__PredId_2,
#line 779 "termination.m"
  MR_Word transform_hlds__termination__PredInfo_3,
#line 779 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_4,
#line 779 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0_5,
#line 779 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcTable_6);

#line 722 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_generated_terminates_4_p_0(
#line 722 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 722 "termination.m"
  MR_Word transform_hlds__termination__SpecialPredId_2,
#line 722 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0_3,
#line 722 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcTable_4);

#line 600 "termination.m"
static void MR_CALL 
transform_hlds__termination__check_preds_5_p_0(
#line 600 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 600 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2,
#line 600 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_3);

#line 573 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__is_solver_init_wrapper_pred_2_p_0(
#line 573 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_3,
#line 573 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_2);

#line 544 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__report_termination_errors_6_p_0_4(
#line 544 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 544 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 529 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__report_termination_errors_6_p_0_3(
#line 529 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 529 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 517 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__report_termination_errors_6_p_0_2(
#line 517 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 517 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 501 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__report_termination_errors_6_p_0_1(
#line 501 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 501 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 491 "termination.m"
static void MR_CALL 
transform_hlds__termination__report_termination_errors_6_p_0(
#line 491 "termination.m"
  MR_Word transform_hlds__termination__SCC_7,
#line 491 "termination.m"
  MR_Word transform_hlds__termination__Errors_8,
#line 491 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35,
#line 491 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_36);

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
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_48);

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

#line 151 "termination.m"
static void MR_CALL 
transform_hlds__termination__check_foreign_code_attributes_2_5_p_0(
#line 151 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 151 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2,
#line 151 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_3,
#line 151 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__4_4,
#line 151 "termination.m"
  MR_Word * transform_hlds__termination__HeadVar__5_5);

#line 117 "termination.m"
static void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_5_p_0_3(
#line 117 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 117 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1,
#line 117 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_2,
#line 117 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_3,
#line 117 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_4,
#line 117 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_5);

#line 268 "termination.m"
static void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_5_p_0_2(
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

#line 149 "termination.m"
static void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_5_p_0_1(
#line 149 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 149 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1,
#line 149 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_2,
#line 149 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_3,
#line 149 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_4,
#line 149 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_5);


static /* final */ const MR_Box transform_hlds__termination_scalar_common_1[32][2];

static /* final */ const MR_Box transform_hlds__termination_scalar_common_2[6][3];

static /* final */ const MR_Box transform_hlds__termination_scalar_common_3[1][8];

static /* final */ const MR_Box transform_hlds__termination_scalar_common_4[1][9];

static /* final */ const MR_Box transform_hlds__termination_scalar_common_5[2][1];

static /* final */ const MR_Box transform_hlds__termination_scalar_common_6[2][5];

static /* final */ const MR_Box transform_hlds__termination_scalar_common_7[1][4];

static /* final */ const MR_Box transform_hlds__termination_scalar_common_8[1][7];




static /* final */ const MR_Box transform_hlds__termination_scalar_common_1[32][2] = {
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
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "attribute set."))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "\140terminates\' foreign code"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration but also has the"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "has a \140pragma does_not_terminate\'"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "foreign code attribute set."))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "but also has the \140does_not_terminate\'"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "has a \140pragma terminates\' declaration"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[16])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "termination pragmas are inconsistent."))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "are mutually recursive but some of their"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[20])))
  },
  /* row 23 */
  {
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_generic_arg_size_info_1)),
    ((MR_Box) (&transform_hlds__termination_scalar_common_1[4]))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[24])))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[25])))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 28 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[27])))
  },
  /* row 29 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&transform_hlds__termination_scalar_common_1[23]))
  },
  /* row 30 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&transform_hlds__termination_scalar_common_2[0]))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Warning:"))
  },
};

static /* final */ const MR_Box transform_hlds__termination_scalar_common_2[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_generic_termination_info_2)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&transform_hlds__termination_scalar_common_1[4]))
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

static /* final */ const MR_Box transform_hlds__termination_scalar_common_8[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 834 "transform_hlds.termination.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__termination__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 842 "transform_hlds.termination.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__termination__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 943 "termination.m"
static void MR_CALL 
transform_hlds__termination__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_116_101_114_109_105_110_97_116_105_111_110_95_105_110_102_111_95_95_91_49_93_95_48_8_p_0(
#line 943 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_2,
#line 943 "termination.m"
  MR_Word transform_hlds__termination__ProcTable_3,
#line 943 "termination.m"
  MR_Word transform_hlds__termination__PredOrFunc_4,
#line 943 "termination.m"
  MR_Word transform_hlds__termination__SymName_5,
#line 943 "termination.m"
  MR_Word transform_hlds__termination__Context_6)
#line 943 "termination.m"
{
#line 947 "termination.m"
  while (MR_TRUE)
#line 947 "termination.m"
    {
#line 947 "termination.m"
      /* tailcall optimized into a loop */
#line 947 "termination.m"
      {
#line 947 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 947 "termination.m"
        if ((transform_hlds__termination__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 947 "termination.m"
          {
#line 947 "termination.m"
          }
#line 947 "termination.m"
        else
#line 949 "termination.m"
          {
#line 949 "termination.m"
            MR_Integer transform_hlds__termination__ProcId_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__2_2, (MR_Integer) 0)));
#line 949 "termination.m"
            MR_Word transform_hlds__termination__ProcIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__2_2, (MR_Integer) 1)));
#line 949 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo_25;
#line 949 "termination.m"
            MR_Word transform_hlds__termination__ArgSize_26;
#line 949 "termination.m"
            MR_Word transform_hlds__termination__Termination_27;
#line 949 "termination.m"
            MR_Word transform_hlds__termination__ModeList_28;
#line 950 "termination.m"
            MR_Box transform_hlds__termination__conv0_ProcInfo_25;

#line 950 "termination.m"
            {
#line 950 "termination.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__termination__ProcTable_3, ((MR_Box) (transform_hlds__termination__ProcId_18)), &transform_hlds__termination__conv0_ProcInfo_25);
            }
#line 950 "termination.m"
            transform_hlds__termination__ProcInfo_25 = ((MR_Word) transform_hlds__termination__conv0_ProcInfo_25);
#line 951 "termination.m"
            {
#line 951 "termination.m"
              hlds__hlds_pred__proc_info_get_maybe_arg_size_info_2_p_0(transform_hlds__termination__ProcInfo_25, &transform_hlds__termination__ArgSize_26);
            }
#line 952 "termination.m"
            {
#line 952 "termination.m"
              hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__termination__ProcInfo_25, &transform_hlds__termination__Termination_27);
            }
#line 953 "termination.m"
            {
#line 953 "termination.m"
              hlds__hlds_pred__proc_info_declared_argmodes_2_p_0(transform_hlds__termination__ProcInfo_25, &transform_hlds__termination__ModeList_28);
            }
#line 954 "termination.m"
            {
#line 954 "termination.m"
              parse_tree__mercury_to_mercury__write_pragma_termination_info_components_8_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[4], (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, transform_hlds__termination__PredOrFunc_4, transform_hlds__termination__SymName_5, transform_hlds__termination__ModeList_28, transform_hlds__termination__ArgSize_26, transform_hlds__termination__Termination_27, transform_hlds__termination__Context_6);
            }
#line 956 "termination.m"
            /* direct tailcall eliminated */
#line 956 "termination.m"
            {
#line 956 "termination.m"
              MR_Word transform_hlds__termination__HeadVar__2__tmp_copy_2 = transform_hlds__termination__ProcIds_19;

#line 956 "termination.m"
              transform_hlds__termination__HeadVar__2_2 = transform_hlds__termination__HeadVar__2__tmp_copy_2;
#line 956 "termination.m"
            }
#line 956 "termination.m"
            continue;
#line 949 "termination.m"
          }
#line 947 "termination.m"
      }
#line 947 "termination.m"
      break;
#line 947 "termination.m"
    }
#line 943 "termination.m"
}

#line 544 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__544__1_1_p_0(
#line 544 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_49)
#line 544 "termination.m"
{
#line 544 "termination.m"
  {
#line 544 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 544 "termination.m"
    MR_Word transform_hlds__termination__Error_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__HeadVar__1_49, (MR_Integer) 0)));
#line 544 "termination.m"
    MR_Word transform_hlds__termination__V_50_50;
#line 545 "termination.m"
    MR_Word transform_hlds__termination___Context_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__HeadVar__1_49, (MR_Integer) 1)));

#line 546 "termination.m"
    {
#line 546 "termination.m"
      transform_hlds__termination__V_50_50 = transform_hlds__term_errors__is_indirect_error_1_f_0(transform_hlds__termination__Error_30);
    }
#line 546 "termination.m"
    transform_hlds__termination__succeeded = (transform_hlds__termination__V_50_50 == (MR_Integer) 0);
#line 544 "termination.m"
    return transform_hlds__termination__succeeded;
#line 544 "termination.m"
  }
#line 544 "termination.m"
}

#line 517 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__517__1_2_p_0(
#line 517 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35,
#line 517 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_47)
#line 517 "termination.m"
{
#line 517 "termination.m"
  {
#line 517 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 517 "termination.m"
    MR_Word transform_hlds__termination__PredInfo_54;
#line 518 "termination.m"
    MR_Word transform_hlds__termination__V_23_23;

#line 518 "termination.m"
    {
#line 518 "termination.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35, transform_hlds__termination__HeadVar__2_47, &transform_hlds__termination__PredInfo_54, &transform_hlds__termination__V_23_23);
    }
#line 519 "termination.m"
    {
#line 519 "termination.m"
      transform_hlds__termination__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(transform_hlds__termination__PredInfo_54);
    }
#line 519 "termination.m"
    transform_hlds__termination__succeeded = !(transform_hlds__termination__succeeded);
#line 517 "termination.m"
    return transform_hlds__termination__succeeded;
#line 517 "termination.m"
  }
#line 517 "termination.m"
}

#line 501 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__501__1_2_p_0(
#line 501 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35,
#line 501 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_41)
#line 501 "termination.m"
{
#line 501 "termination.m"
  {
#line 501 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 501 "termination.m"
    MR_Word transform_hlds__termination__PredInfo_16;
#line 501 "termination.m"
    MR_Word transform_hlds__termination__Markers_18;
#line 501 "termination.m"
    MR_Word transform_hlds__termination__V_42_42;
#line 502 "termination.m"
    MR_Word transform_hlds__termination__V_17_17;

#line 502 "termination.m"
    {
#line 502 "termination.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35, transform_hlds__termination__HeadVar__2_41, &transform_hlds__termination__PredInfo_16, &transform_hlds__termination__V_17_17);
    }
#line 503 "termination.m"
    {
#line 503 "termination.m"
      transform_hlds__termination__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(transform_hlds__termination__PredInfo_16);
    }
#line 503 "termination.m"
    transform_hlds__termination__succeeded = !(transform_hlds__termination__succeeded);
#line 501 "termination.m"
    if (transform_hlds__termination__succeeded)
#line 501 "termination.m"
      {
#line 504 "termination.m"
        {
#line 504 "termination.m"
          hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__termination__PredInfo_16, &transform_hlds__termination__Markers_18);
        }
#line 505 "termination.m"
        transform_hlds__termination__V_42_42 = (MR_Integer) 19;
#line 505 "termination.m"
        {
#line 505 "termination.m"
          return transform_hlds__termination__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__termination__Markers_18, transform_hlds__termination__V_42_42);
        }
#line 501 "termination.m"
      }
#line 501 "termination.m"
    return transform_hlds__termination__succeeded;
#line 501 "termination.m"
  }
#line 501 "termination.m"
}

#line 394 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__394__1_1_p_0(
#line 394 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_59)
#line 394 "termination.m"
{
#line 394 "termination.m"
  {
#line 394 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 394 "termination.m"
    MR_Word transform_hlds__termination__Error_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__HeadVar__1_59, (MR_Integer) 0)));
#line 394 "termination.m"
    MR_Word transform_hlds__termination__V_60_60;
#line 395 "termination.m"
    MR_Word transform_hlds__termination__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__HeadVar__1_59, (MR_Integer) 1)));

#line 396 "termination.m"
    {
#line 396 "termination.m"
      transform_hlds__termination__V_60_60 = transform_hlds__term_errors__is_fatal_error_1_f_0(transform_hlds__termination__Error_32);
    }
#line 396 "termination.m"
    transform_hlds__termination__succeeded = (transform_hlds__termination__V_60_60 == (MR_Integer) 1);
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
    MR_Word transform_hlds__termination__V_72_72;
#line 361 "termination.m"
    MR_Word transform_hlds__termination__V_13_13;
#line 362 "termination.m"
    MR_Word transform_hlds__termination__V_77_77;

#line 361 "termination.m"
    {
#line 361 "termination.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47, transform_hlds__termination__HeadVar__2_51, &transform_hlds__termination__V_13_13, &transform_hlds__termination__ProcInfo_14);
    }
#line 362 "termination.m"
    {
#line 362 "termination.m"
      hlds__hlds_pred__proc_info_get_maybe_arg_size_info_2_p_0(transform_hlds__termination__ProcInfo_14, &transform_hlds__termination__V_72_72);
    }
#line 362 "termination.m"
    transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__V_72_72)) == (MR_mktag((MR_Integer) 1)));
#line 362 "termination.m"
    if (transform_hlds__termination__succeeded)
#line 362 "termination.m"
      transform_hlds__termination__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__V_72_72, (MR_Integer) 0)));
#line 360 "termination.m"
    return transform_hlds__termination__succeeded;
#line 360 "termination.m"
  }
#line 360 "termination.m"
}

#line 308 "termination.m"
static MR_Word MR_CALL 
transform_hlds__termination__IntroducedFrom__func__check_scc_pragmas_are_consistent__308__1_1_f_0(
#line 308 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_41)
#line 308 "termination.m"
{
#line 308 "termination.m"
  {
#line 308 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 308 "termination.m"
    MR_Word transform_hlds__termination__HeadVar__2_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__HeadVar__1_41, (MR_Integer) 0)));
#line 308 "termination.m"
    MR_Integer transform_hlds__termination__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__HeadVar__1_41, (MR_Integer) 1)));

#line 308 "termination.m"
    return transform_hlds__termination__HeadVar__2_42;
#line 308 "termination.m"
  }
#line 308 "termination.m"
}

#line 898 "termination.m"
static void MR_CALL 
transform_hlds__termination__make_termination_opt_int_4_p_0_1(
#line 898 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 898 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1,
#line 898 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_2,
#line 898 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_3)
#line 898 "termination.m"
{
#line 898 "termination.m"
  {
#line 898 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

#line 898 "termination.m"
    {
#line 898 "termination.m"
      transform_hlds__termination__write_pred_termination_info_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1));
#line 898 "termination.m"
      return;
    }
#line 898 "termination.m"
  }
#line 898 "termination.m"
}

#line 879 "termination.m"
static void MR_CALL 
transform_hlds__termination__make_termination_opt_int_4_p_0(
#line 879 "termination.m"
  MR_Word transform_hlds__termination__PredIds_5,
#line 879 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_6)
#line 879 "termination.m"
{
#line 882 "termination.m"
  {
#line 882 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 882 "termination.m"
    MR_Word transform_hlds__termination__Globals_8;
#line 882 "termination.m"
    MR_Word transform_hlds__termination__ModuleName_9;
#line 882 "termination.m"
    MR_String transform_hlds__termination__OptFileName_10;
#line 882 "termination.m"
    MR_Word transform_hlds__termination__Verbose_11;
#line 882 "termination.m"
    MR_Word transform_hlds__termination__OptFileRes_12;

#line 883 "termination.m"
    {
#line 883 "termination.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__termination__ModuleInfo_6, &transform_hlds__termination__Globals_8);
    }
#line 884 "termination.m"
    {
#line 884 "termination.m"
      hlds__hlds_module__module_info_get_name_2_p_0(transform_hlds__termination__ModuleInfo_6, &transform_hlds__termination__ModuleName_9);
    }
#line 885 "termination.m"
    {
#line 885 "termination.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(transform_hlds__termination__Globals_8, transform_hlds__termination__ModuleName_9, (MR_String) ".opt.tmp", (MR_Integer) 1, &transform_hlds__termination__OptFileName_10);
    }
#line 887 "termination.m"
    {
#line 887 "termination.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__termination__Globals_8, (MR_Integer) 44, &transform_hlds__termination__Verbose_11);
    }
#line 888 "termination.m"
    {
#line 888 "termination.m"
      libs__file_util__maybe_write_string_4_p_0(transform_hlds__termination__Verbose_11, (MR_String) "% Appending termination_info pragmas to \140");
    }
#line 890 "termination.m"
    {
#line 890 "termination.m"
      libs__file_util__maybe_write_string_4_p_0(transform_hlds__termination__Verbose_11, transform_hlds__termination__OptFileName_10);
    }
#line 891 "termination.m"
    {
#line 891 "termination.m"
      libs__file_util__maybe_write_string_4_p_0(transform_hlds__termination__Verbose_11, (MR_String) "\'...");
    }
#line 892 "termination.m"
    {
#line 892 "termination.m"
      libs__file_util__maybe_flush_output_3_p_0(transform_hlds__termination__Verbose_11);
    }
#line 894 "termination.m"
    {
#line 894 "termination.m"
      mercury__io__open_append_4_p_0(transform_hlds__termination__OptFileName_10, &transform_hlds__termination__OptFileRes_12);
    }
#line 902 "termination.m"
    if (((MR_tag((MR_Word) transform_hlds__termination__OptFileRes_12)) == (MR_mktag((MR_Integer) 1))))
#line 903 "termination.m"
      {
#line 903 "termination.m"
        MR_Word transform_hlds__termination__IOError_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__OptFileRes_12, (MR_Integer) 0)));
#line 903 "termination.m"
        MR_String transform_hlds__termination__IOErrorMessage_17;
#line 903 "termination.m"
        MR_Word transform_hlds__termination__V_33_33;
#line 903 "termination.m"
        MR_Word transform_hlds__termination__V_36_36;
#line 903 "termination.m"
        MR_Word transform_hlds__termination__V_37_37;
#line 903 "termination.m"
        MR_Word transform_hlds__termination__V_39_39;

#line 904 "termination.m"
        {
#line 904 "termination.m"
          libs__file_util__maybe_write_string_4_p_0(transform_hlds__termination__Verbose_11, (MR_String) " failed!\n");
        }
#line 905 "termination.m"
        {
#line 905 "termination.m"
          mercury__io__error_message_2_p_0(transform_hlds__termination__IOError_16, &transform_hlds__termination__IOErrorMessage_17);
        }
#line 907 "termination.m"
        {
#line 907 "termination.m"
          transform_hlds__termination__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 907 "termination.m"
          MR_hl_field(MR_mktag(1), transform_hlds__termination__V_39_39, 0) = ((MR_Box) (transform_hlds__termination__IOErrorMessage_17));
#line 907 "termination.m"
          MR_hl_field(MR_mktag(1), transform_hlds__termination__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 907 "termination.m"
        }
#line 907 "termination.m"
        {
#line 907 "termination.m"
          transform_hlds__termination__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 907 "termination.m"
          MR_hl_field(MR_mktag(1), transform_hlds__termination__V_37_37, 0) = ((MR_Box) ((MR_String) "\' for output: "));
#line 907 "termination.m"
          MR_hl_field(MR_mktag(1), transform_hlds__termination__V_37_37, 1) = ((MR_Box) (transform_hlds__termination__V_39_39));
#line 907 "termination.m"
        }
#line 906 "termination.m"
        {
#line 906 "termination.m"
          transform_hlds__termination__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 906 "termination.m"
          MR_hl_field(MR_mktag(1), transform_hlds__termination__V_36_36, 0) = ((MR_Box) (transform_hlds__termination__OptFileName_10));
#line 906 "termination.m"
          MR_hl_field(MR_mktag(1), transform_hlds__termination__V_36_36, 1) = ((MR_Box) (transform_hlds__termination__V_37_37));
#line 906 "termination.m"
        }
#line 906 "termination.m"
        {
#line 906 "termination.m"
          transform_hlds__termination__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 906 "termination.m"
          MR_hl_field(MR_mktag(1), transform_hlds__termination__V_33_33, 0) = ((MR_Box) ((MR_String) "Error opening file \140"));
#line 906 "termination.m"
          MR_hl_field(MR_mktag(1), transform_hlds__termination__V_33_33, 1) = ((MR_Box) (transform_hlds__termination__V_36_36));
#line 906 "termination.m"
        }
#line 906 "termination.m"
        {
#line 906 "termination.m"
          mercury__io__write_strings_3_p_0(transform_hlds__termination__V_33_33);
        }
#line 908 "termination.m"
        {
#line 908 "termination.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 908 "termination.m"
          return;
        }
#line 903 "termination.m"
      }
#line 902 "termination.m"
    else
#line 896 "termination.m"
      {
#line 896 "termination.m"
        MR_Word transform_hlds__termination__OptFile_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__OptFileRes_12, (MR_Integer) 0)));
#line 896 "termination.m"
        MR_Word transform_hlds__termination__OldStream_14;
#line 896 "termination.m"
        MR_Word transform_hlds__termination__V_44_44;
#line 898 "termination.m"
        MR_Box transform_hlds__termination__conv0_STATE_VARIABLE_IO_45_45;
#line 899 "termination.m"
        MR_Word transform_hlds__termination__V_15_15;

#line 897 "termination.m"
        {
#line 897 "termination.m"
          mercury__io__set_output_stream_4_p_0(transform_hlds__termination__OptFile_13, &transform_hlds__termination__OldStream_14);
        }
#line 898 "termination.m"
        {
#line 898 "termination.m"
          transform_hlds__termination__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 898 "termination.m"
          MR_hl_field(MR_mktag(0), transform_hlds__termination__V_44_44, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_8[0]));
#line 898 "termination.m"
          MR_hl_field(MR_mktag(0), transform_hlds__termination__V_44_44, 1) = ((MR_Box) (transform_hlds__termination__make_termination_opt_int_4_p_0_1));
#line 898 "termination.m"
          MR_hl_field(MR_mktag(0), transform_hlds__termination__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 898 "termination.m"
          MR_hl_field(MR_mktag(0), transform_hlds__termination__V_44_44, 3) = ((MR_Box) (transform_hlds__termination__ModuleInfo_6));
#line 898 "termination.m"
        }
#line 898 "termination.m"
        {
#line 898 "termination.m"
          mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__termination__V_44_44, transform_hlds__termination__PredIds_5, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__termination__conv0_STATE_VARIABLE_IO_45_45);
        }
#line 899 "termination.m"
        {
#line 899 "termination.m"
          mercury__io__set_output_stream_4_p_0(transform_hlds__termination__OldStream_14, &transform_hlds__termination__V_15_15);
        }
#line 900 "termination.m"
        {
#line 900 "termination.m"
          mercury__io__close_output_3_p_0(transform_hlds__termination__OptFile_13);
        }
#line 901 "termination.m"
        {
#line 901 "termination.m"
          libs__file_util__maybe_write_string_4_p_0(transform_hlds__termination__Verbose_11, (MR_String) " done.\n");
#line 901 "termination.m"
          return;
        }
#line 896 "termination.m"
      }
#line 882 "termination.m"
  }
#line 879 "termination.m"
}

#line 851 "termination.m"
static void MR_CALL 
transform_hlds__termination__change_procs_termination_info_5_p_0(
#line 851 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 851 "termination.m"
  MR_Word transform_hlds__termination__Override_2,
#line 851 "termination.m"
  MR_Word transform_hlds__termination__Termination_3,
#line 851 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4,
#line 851 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcTable_5)
#line 851 "termination.m"
{
#line 854 "termination.m"
  while (MR_TRUE)
#line 854 "termination.m"
    {
#line 854 "termination.m"
      /* tailcall optimized into a loop */
#line 854 "termination.m"
      {
#line 854 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 854 "termination.m"
        if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 854 "termination.m"
          *transform_hlds__termination__STATE_VARIABLE_ProcTable_5 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4;
#line 854 "termination.m"
        else
#line 856 "termination.m"
          {
#line 856 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_24_24 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 856 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_25_25 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 856 "termination.m"
            MR_Integer transform_hlds__termination__ProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));
#line 856 "termination.m"
            MR_Word transform_hlds__termination__ProcIds_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
#line 856 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo0_16;
#line 856 "termination.m"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22;
#line 857 "termination.m"
            MR_Box transform_hlds__termination__conv0_ProcInfo0_16;

#line 857 "termination.m"
            {
#line 857 "termination.m"
              mercury__map__lookup_3_p_0(transform_hlds__termination__TypeCtorInfo_24_24, transform_hlds__termination__TypeCtorInfo_25_25, transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4, ((MR_Box) (transform_hlds__termination__ProcId_11)), &transform_hlds__termination__conv0_ProcInfo0_16);
            }
#line 857 "termination.m"
            transform_hlds__termination__ProcInfo0_16 = ((MR_Word) transform_hlds__termination__conv0_ProcInfo0_16);
#line 860 "termination.m"
            transform_hlds__termination__succeeded = (transform_hlds__termination__Override_2 == (MR_Integer) 1);
#line 861 "termination.m"
            if (!(transform_hlds__termination__succeeded))
#line 862 "termination.m"
              {
#line 862 "termination.m"
                MR_Word transform_hlds__termination__V_26_26;

#line 862 "termination.m"
                {
#line 862 "termination.m"
                  hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__termination__ProcInfo0_16, &transform_hlds__termination__V_26_26);
                }
#line 862 "termination.m"
                {
#line 862 "termination.m"
                  transform_hlds__termination__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[30], ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (transform_hlds__termination__V_26_26)));
                }
#line 862 "termination.m"
              }
#line 869 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 867 "termination.m"
              {
#line 867 "termination.m"
                MR_Word transform_hlds__termination__ProcInfo_17;
#line 867 "termination.m"
                MR_Word transform_hlds__termination__V_21_21;

#line 866 "termination.m"
                {
#line 866 "termination.m"
                  transform_hlds__termination__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 866 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__V_21_21, 0) = ((MR_Box) (transform_hlds__termination__Termination_3));
#line 866 "termination.m"
                }
#line 866 "termination.m"
                {
#line 866 "termination.m"
                  hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(transform_hlds__termination__V_21_21, transform_hlds__termination__ProcInfo0_16, &transform_hlds__termination__ProcInfo_17);
                }
#line 868 "termination.m"
                {
#line 868 "termination.m"
                  mercury__map__det_update_4_p_0(transform_hlds__termination__TypeCtorInfo_24_24, transform_hlds__termination__TypeCtorInfo_25_25, ((MR_Box) (transform_hlds__termination__ProcId_11)), ((MR_Box) (transform_hlds__termination__ProcInfo_17)), transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4, &transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22);
                }
#line 867 "termination.m"
              }
#line 869 "termination.m"
            else
#line 868 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4;
#line 872 "termination.m"
            /* direct tailcall eliminated */
#line 872 "termination.m"
            {
#line 872 "termination.m"
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__ProcIds_12;
#line 872 "termination.m"
              MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_4 = transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22;

#line 872 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_4;
#line 872 "termination.m"
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
#line 872 "termination.m"
            }
#line 872 "termination.m"
            continue;
#line 856 "termination.m"
          }
#line 854 "termination.m"
      }
#line 854 "termination.m"
      break;
#line 854 "termination.m"
    }
#line 851 "termination.m"
}

#line 819 "termination.m"
static void MR_CALL 
transform_hlds__termination__change_procs_arg_size_info_5_p_0(
#line 819 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 819 "termination.m"
  MR_Word transform_hlds__termination__Override_2,
#line 819 "termination.m"
  MR_Word transform_hlds__termination__ArgSize_3,
#line 819 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4,
#line 819 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcTable_5)
#line 819 "termination.m"
{
#line 822 "termination.m"
  while (MR_TRUE)
#line 822 "termination.m"
    {
#line 822 "termination.m"
      /* tailcall optimized into a loop */
#line 822 "termination.m"
      {
#line 822 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 822 "termination.m"
        if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 822 "termination.m"
          *transform_hlds__termination__STATE_VARIABLE_ProcTable_5 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4;
#line 822 "termination.m"
        else
#line 824 "termination.m"
          {
#line 824 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_24_24 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 824 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_25_25 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 824 "termination.m"
            MR_Integer transform_hlds__termination__ProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));
#line 824 "termination.m"
            MR_Word transform_hlds__termination__ProcIds_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
#line 824 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo0_16;
#line 824 "termination.m"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22;
#line 825 "termination.m"
            MR_Box transform_hlds__termination__conv0_ProcInfo0_16;

#line 825 "termination.m"
            {
#line 825 "termination.m"
              mercury__map__lookup_3_p_0(transform_hlds__termination__TypeCtorInfo_24_24, transform_hlds__termination__TypeCtorInfo_25_25, transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4, ((MR_Box) (transform_hlds__termination__ProcId_11)), &transform_hlds__termination__conv0_ProcInfo0_16);
            }
#line 825 "termination.m"
            transform_hlds__termination__ProcInfo0_16 = ((MR_Word) transform_hlds__termination__conv0_ProcInfo0_16);
#line 828 "termination.m"
            transform_hlds__termination__succeeded = (transform_hlds__termination__Override_2 == (MR_Integer) 1);
#line 829 "termination.m"
            if (!(transform_hlds__termination__succeeded))
#line 830 "termination.m"
              {
#line 830 "termination.m"
                MR_Word transform_hlds__termination__V_26_26;

#line 830 "termination.m"
                {
#line 830 "termination.m"
                  hlds__hlds_pred__proc_info_get_maybe_arg_size_info_2_p_0(transform_hlds__termination__ProcInfo0_16, &transform_hlds__termination__V_26_26);
                }
#line 830 "termination.m"
                {
#line 830 "termination.m"
                  transform_hlds__termination__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[29], ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (transform_hlds__termination__V_26_26)));
                }
#line 830 "termination.m"
              }
#line 835 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 833 "termination.m"
              {
#line 833 "termination.m"
                MR_Word transform_hlds__termination__ProcInfo_17;
#line 833 "termination.m"
                MR_Word transform_hlds__termination__V_21_21;

#line 833 "termination.m"
                {
#line 833 "termination.m"
                  transform_hlds__termination__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 833 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__V_21_21, 0) = ((MR_Box) (transform_hlds__termination__ArgSize_3));
#line 833 "termination.m"
                }
#line 833 "termination.m"
                {
#line 833 "termination.m"
                  hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_p_0(transform_hlds__termination__V_21_21, transform_hlds__termination__ProcInfo0_16, &transform_hlds__termination__ProcInfo_17);
                }
#line 834 "termination.m"
                {
#line 834 "termination.m"
                  mercury__map__det_update_4_p_0(transform_hlds__termination__TypeCtorInfo_24_24, transform_hlds__termination__TypeCtorInfo_25_25, ((MR_Box) (transform_hlds__termination__ProcId_11)), ((MR_Box) (transform_hlds__termination__ProcInfo_17)), transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4, &transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22);
                }
#line 833 "termination.m"
              }
#line 835 "termination.m"
            else
#line 834 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4;
#line 838 "termination.m"
            /* direct tailcall eliminated */
#line 838 "termination.m"
            {
#line 838 "termination.m"
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__ProcIds_12;
#line 838 "termination.m"
              MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_4 = transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22;

#line 838 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_4;
#line 838 "termination.m"
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
#line 838 "termination.m"
            }
#line 838 "termination.m"
            continue;
#line 824 "termination.m"
          }
#line 822 "termination.m"
      }
#line 822 "termination.m"
      break;
#line 822 "termination.m"
    }
#line 819 "termination.m"
}

#line 779 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_builtin_terminates_6_p_0(
#line 779 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 779 "termination.m"
  MR_Word transform_hlds__termination__PredId_2,
#line 779 "termination.m"
  MR_Word transform_hlds__termination__PredInfo_3,
#line 779 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_4,
#line 779 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0_5,
#line 779 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcTable_6)
#line 779 "termination.m"
{
#line 782 "termination.m"
  while (MR_TRUE)
#line 782 "termination.m"
    {
#line 782 "termination.m"
      /* tailcall optimized into a loop */
#line 782 "termination.m"
      {
#line 782 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 782 "termination.m"
        if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 782 "termination.m"
          *transform_hlds__termination__STATE_VARIABLE_ProcTable_6 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0_5;
#line 782 "termination.m"
        else
#line 784 "termination.m"
          {
#line 784 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_41_41 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 784 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_42_42 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 784 "termination.m"
            MR_Integer transform_hlds__termination__ProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));
#line 784 "termination.m"
            MR_Word transform_hlds__termination__ProcIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
#line 784 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo0_19;
#line 784 "termination.m"
            MR_Word transform_hlds__termination__ArgSizeInfo_22;
#line 784 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo1_26;
#line 784 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo_27;
#line 784 "termination.m"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_39_39;
#line 785 "termination.m"
            MR_Box transform_hlds__termination__conv0_ProcInfo0_19;

#line 785 "termination.m"
            {
#line 785 "termination.m"
              mercury__map__lookup_3_p_0(transform_hlds__termination__TypeCtorInfo_41_41, transform_hlds__termination__TypeCtorInfo_42_42, transform_hlds__termination__STATE_VARIABLE_ProcTable_0_5, ((MR_Box) (transform_hlds__termination__ProcId_13)), &transform_hlds__termination__conv0_ProcInfo0_19);
            }
#line 785 "termination.m"
            transform_hlds__termination__ProcInfo0_19 = ((MR_Word) transform_hlds__termination__conv0_ProcInfo0_19);
#line 786 "termination.m"
            {
#line 786 "termination.m"
              transform_hlds__termination__succeeded = transform_hlds__term_util__all_args_input_or_zero_size_3_p_0(transform_hlds__termination__ModuleInfo_4, transform_hlds__termination__PredInfo_3, transform_hlds__termination__ProcInfo0_19);
            }
#line 793 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 790 "termination.m"
              {
#line 790 "termination.m"
                MR_Word transform_hlds__termination__HeadVars_20;
#line 790 "termination.m"
                MR_Word transform_hlds__termination__UsedArgs_21;
#line 790 "termination.m"
                MR_Word transform_hlds__termination__V_31_31;

#line 790 "termination.m"
                {
#line 790 "termination.m"
                  hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__termination__ProcInfo0_19, &transform_hlds__termination__HeadVars_20);
                }
#line 791 "termination.m"
                {
#line 791 "termination.m"
                  transform_hlds__term_util__make_bool_list_3_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[3], transform_hlds__termination__HeadVars_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__termination__UsedArgs_21);
                }
#line 792 "termination.m"
                {
#line 792 "termination.m"
                  transform_hlds__termination__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 792 "termination.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__termination__V_31_31, 0) = ((MR_Box) ((MR_Integer) 0));
#line 792 "termination.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__termination__V_31_31, 1) = ((MR_Box) (transform_hlds__termination__UsedArgs_21));
#line 792 "termination.m"
                }
#line 792 "termination.m"
                {
#line 792 "termination.m"
                  transform_hlds__termination__ArgSizeInfo_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 792 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__ArgSizeInfo_22, 0) = ((MR_Box) (transform_hlds__termination__V_31_31));
#line 792 "termination.m"
                }
#line 790 "termination.m"
              }
#line 793 "termination.m"
            else
#line 794 "termination.m"
              {
#line 794 "termination.m"
                MR_Word transform_hlds__termination__Context_23;
#line 794 "termination.m"
                MR_Word transform_hlds__termination__Error_24;
#line 794 "termination.m"
                MR_Word transform_hlds__termination__ArgSizeError_25;
#line 794 "termination.m"
                MR_Word transform_hlds__termination__V_33_33;
#line 794 "termination.m"
                MR_Word transform_hlds__termination__V_34_34;

#line 794 "termination.m"
                {
#line 794 "termination.m"
                  hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__termination__PredInfo_3, &transform_hlds__termination__Context_23);
                }
#line 795 "termination.m"
                {
#line 795 "termination.m"
                  transform_hlds__termination__Error_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 795 "termination.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__termination__Error_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 795 "termination.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__termination__Error_24, 1) = ((MR_Box) (transform_hlds__termination__PredId_2));
#line 795 "termination.m"
                }
#line 796 "termination.m"
                {
#line 796 "termination.m"
                  transform_hlds__termination__ArgSizeError_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 796 "termination.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeError_25, 0) = ((MR_Box) (transform_hlds__termination__Error_24));
#line 796 "termination.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeError_25, 1) = ((MR_Box) (transform_hlds__termination__Context_23));
#line 796 "termination.m"
                }
#line 797 "termination.m"
                {
#line 797 "termination.m"
                  transform_hlds__termination__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 797 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__V_34_34, 0) = ((MR_Box) (transform_hlds__termination__ArgSizeError_25));
#line 797 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 797 "termination.m"
                }
#line 797 "termination.m"
                {
#line 797 "termination.m"
                  transform_hlds__termination__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 797 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__V_33_33, 0) = ((MR_Box) (transform_hlds__termination__V_34_34));
#line 797 "termination.m"
                }
#line 797 "termination.m"
                {
#line 797 "termination.m"
                  transform_hlds__termination__ArgSizeInfo_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 797 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__ArgSizeInfo_22, 0) = ((MR_Box) (transform_hlds__termination__V_33_33));
#line 797 "termination.m"
                }
#line 794 "termination.m"
              }
#line 800 "termination.m"
            {
#line 800 "termination.m"
              hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_p_0(transform_hlds__termination__ArgSizeInfo_22, transform_hlds__termination__ProcInfo0_19, &transform_hlds__termination__ProcInfo1_26);
            }
#line 801 "termination.m"
            mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 801 "termination.m"
            {
#line 801 "termination.m"
              hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_5[1]), transform_hlds__termination__ProcInfo1_26, &transform_hlds__termination__ProcInfo_27);
            }
#line 803 "termination.m"
            {
#line 803 "termination.m"
              mercury__map__det_update_4_p_0(transform_hlds__termination__TypeCtorInfo_41_41, transform_hlds__termination__TypeCtorInfo_42_42, ((MR_Box) (transform_hlds__termination__ProcId_13)), ((MR_Box) (transform_hlds__termination__ProcInfo_27)), transform_hlds__termination__STATE_VARIABLE_ProcTable_0_5, &transform_hlds__termination__STATE_VARIABLE_ProcTable_39_39);
            }
#line 804 "termination.m"
            /* direct tailcall eliminated */
#line 804 "termination.m"
            {
#line 804 "termination.m"
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__ProcIds_14;
#line 804 "termination.m"
              MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_5 = transform_hlds__termination__STATE_VARIABLE_ProcTable_39_39;

#line 804 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ProcTable_0_5 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_5;
#line 804 "termination.m"
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
#line 804 "termination.m"
            }
#line 804 "termination.m"
            continue;
#line 784 "termination.m"
          }
#line 782 "termination.m"
      }
#line 782 "termination.m"
      break;
#line 782 "termination.m"
    }
#line 779 "termination.m"
}

#line 722 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_generated_terminates_4_p_0(
#line 722 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 722 "termination.m"
  MR_Word transform_hlds__termination__SpecialPredId_2,
#line 722 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0_3,
#line 722 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcTable_4)
#line 722 "termination.m"
{
#line 725 "termination.m"
  while (MR_TRUE)
#line 725 "termination.m"
    {
#line 725 "termination.m"
      /* tailcall optimized into a loop */
#line 725 "termination.m"
      {
#line 725 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 725 "termination.m"
        if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 725 "termination.m"
          *transform_hlds__termination__STATE_VARIABLE_ProcTable_4 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0_3;
#line 725 "termination.m"
        else
#line 726 "termination.m"
          {
#line 726 "termination.m"
            MR_Integer transform_hlds__termination__ProcId_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));
#line 726 "termination.m"
            MR_Word transform_hlds__termination__ProcIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
#line 726 "termination.m"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_23_23;

#line 740 "termination.m"
            if ((transform_hlds__termination__SpecialPredId_2 == (MR_Integer) 3))
#line 741 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ProcTable_23_23 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0_3;
#line 740 "termination.m"
            else
#line 731 "termination.m"
              {
#line 731 "termination.m"
                MR_Word transform_hlds__termination__TypeCtorInfo_25_25 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 731 "termination.m"
                MR_Word transform_hlds__termination__TypeCtorInfo_26_26 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 731 "termination.m"
                MR_Word transform_hlds__termination__ProcInfo0_13;
#line 731 "termination.m"
                MR_Word transform_hlds__termination__HeadVars_14;
#line 731 "termination.m"
                MR_Word transform_hlds__termination__ArgSize_15;
#line 731 "termination.m"
                MR_Word transform_hlds__termination__Termination_16;
#line 731 "termination.m"
                MR_Word transform_hlds__termination__ProcInfo1_17;
#line 731 "termination.m"
                MR_Word transform_hlds__termination__ProcInfo_18;
#line 731 "termination.m"
                MR_Word transform_hlds__termination__V_21_21;
#line 731 "termination.m"
                MR_Word transform_hlds__termination__V_22_22;
#line 732 "termination.m"
                MR_Box transform_hlds__termination__conv0_ProcInfo0_13;

#line 732 "termination.m"
                {
#line 732 "termination.m"
                  mercury__map__lookup_3_p_0(transform_hlds__termination__TypeCtorInfo_25_25, transform_hlds__termination__TypeCtorInfo_26_26, transform_hlds__termination__STATE_VARIABLE_ProcTable_0_3, ((MR_Box) (transform_hlds__termination__ProcId_9)), &transform_hlds__termination__conv0_ProcInfo0_13);
                }
#line 732 "termination.m"
                transform_hlds__termination__ProcInfo0_13 = ((MR_Word) transform_hlds__termination__conv0_ProcInfo0_13);
#line 733 "termination.m"
                {
#line 733 "termination.m"
                  hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__termination__ProcInfo0_13, &transform_hlds__termination__HeadVars_14);
                }
#line 757 "termination.m"
                if ((transform_hlds__termination__SpecialPredId_2 == (MR_Integer) 2))
#line 757 "termination.m"
                  {
#line 757 "termination.m"
                    MR_Word transform_hlds__termination__OutList_31;

#line 758 "termination.m"
                    {
#line 758 "termination.m"
                      transform_hlds__term_util__make_bool_list_3_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[3], transform_hlds__termination__HeadVars_14, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[26]), &transform_hlds__termination__OutList_31);
                    }
#line 759 "termination.m"
                    {
#line 759 "termination.m"
                      transform_hlds__termination__ArgSize_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 759 "termination.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSize_15, 0) = ((MR_Box) ((MR_Integer) 0));
#line 759 "termination.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSize_15, 1) = ((MR_Box) (transform_hlds__termination__OutList_31));
#line 759 "termination.m"
                    }
#line 760 "termination.m"
                    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 760 "termination.m"
                    transform_hlds__termination__Termination_16 = (MR_Word) &transform_hlds__termination_scalar_common_5[0];
#line 757 "termination.m"
                  }
#line 757 "termination.m"
                else
#line 757 "termination.m"
                  if ((transform_hlds__termination__SpecialPredId_2 == (MR_Integer) 1))
#line 767 "termination.m"
                    {
#line 767 "termination.m"
                      MR_Word transform_hlds__termination__OutList_59;

#line 768 "termination.m"
                      {
#line 768 "termination.m"
                        transform_hlds__term_util__make_bool_list_3_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[3], transform_hlds__termination__HeadVars_14, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[25]), &transform_hlds__termination__OutList_59);
                      }
#line 769 "termination.m"
                      {
#line 769 "termination.m"
                        transform_hlds__termination__ArgSize_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 769 "termination.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSize_15, 0) = ((MR_Box) ((MR_Integer) 0));
#line 769 "termination.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSize_15, 1) = ((MR_Box) (transform_hlds__termination__OutList_59));
#line 769 "termination.m"
                      }
#line 770 "termination.m"
                      mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 770 "termination.m"
                      transform_hlds__termination__Termination_16 = (MR_Word) &transform_hlds__termination_scalar_common_5[0];
#line 767 "termination.m"
                    }
#line 757 "termination.m"
                  else
#line 762 "termination.m"
                    {
#line 762 "termination.m"
                      MR_Word transform_hlds__termination__OutList_58;

#line 763 "termination.m"
                      {
#line 763 "termination.m"
                        transform_hlds__term_util__make_bool_list_3_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[3], transform_hlds__termination__HeadVars_14, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[28]), &transform_hlds__termination__OutList_58);
                      }
#line 764 "termination.m"
                      {
#line 764 "termination.m"
                        transform_hlds__termination__ArgSize_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 764 "termination.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSize_15, 0) = ((MR_Box) ((MR_Integer) 0));
#line 764 "termination.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSize_15, 1) = ((MR_Box) (transform_hlds__termination__OutList_58));
#line 764 "termination.m"
                      }
#line 765 "termination.m"
                      mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 765 "termination.m"
                      transform_hlds__termination__Termination_16 = (MR_Word) &transform_hlds__termination_scalar_common_5[0];
#line 762 "termination.m"
                    }
#line 736 "termination.m"
                {
#line 736 "termination.m"
                  transform_hlds__termination__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 736 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__V_21_21, 0) = ((MR_Box) (transform_hlds__termination__ArgSize_15));
#line 736 "termination.m"
                }
#line 736 "termination.m"
                {
#line 736 "termination.m"
                  hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_p_0(transform_hlds__termination__V_21_21, transform_hlds__termination__ProcInfo0_13, &transform_hlds__termination__ProcInfo1_17);
                }
#line 737 "termination.m"
                {
#line 737 "termination.m"
                  transform_hlds__termination__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 737 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__V_22_22, 0) = ((MR_Box) (transform_hlds__termination__Termination_16));
#line 737 "termination.m"
                }
#line 737 "termination.m"
                {
#line 737 "termination.m"
                  hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(transform_hlds__termination__V_22_22, transform_hlds__termination__ProcInfo1_17, &transform_hlds__termination__ProcInfo_18);
                }
#line 739 "termination.m"
                {
#line 739 "termination.m"
                  mercury__map__det_update_4_p_0(transform_hlds__termination__TypeCtorInfo_25_25, transform_hlds__termination__TypeCtorInfo_26_26, ((MR_Box) (transform_hlds__termination__ProcId_9)), ((MR_Box) (transform_hlds__termination__ProcInfo_18)), transform_hlds__termination__STATE_VARIABLE_ProcTable_0_3, &transform_hlds__termination__STATE_VARIABLE_ProcTable_23_23);
                }
#line 731 "termination.m"
              }
#line 746 "termination.m"
            /* direct tailcall eliminated */
#line 746 "termination.m"
            {
#line 746 "termination.m"
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__ProcIds_10;
#line 746 "termination.m"
              MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_3 = transform_hlds__termination__STATE_VARIABLE_ProcTable_23_23;

#line 746 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ProcTable_0_3 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_3;
#line 746 "termination.m"
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
#line 746 "termination.m"
            }
#line 746 "termination.m"
            continue;
#line 726 "termination.m"
          }
#line 725 "termination.m"
      }
#line 725 "termination.m"
      break;
#line 725 "termination.m"
    }
#line 722 "termination.m"
}

#line 600 "termination.m"
static void MR_CALL 
transform_hlds__termination__check_preds_5_p_0(
#line 600 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 600 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2,
#line 600 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_3)
#line 600 "termination.m"
{
#line 603 "termination.m"
  while (MR_TRUE)
#line 603 "termination.m"
    {
#line 603 "termination.m"
      /* tailcall optimized into a loop */
#line 603 "termination.m"
      {
#line 603 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 603 "termination.m"
        if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 603 "termination.m"
          *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_3 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2;
#line 603 "termination.m"
        else
#line 604 "termination.m"
          {
#line 604 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_71_71;
#line 604 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_72_72;
#line 604 "termination.m"
            MR_Word transform_hlds__termination__PredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));
#line 604 "termination.m"
            MR_Word transform_hlds__termination__PredIds_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
#line 604 "termination.m"
            MR_Word transform_hlds__termination__Globals_16;
#line 604 "termination.m"
            MR_Word transform_hlds__termination__MakeOptInt_17;
#line 604 "termination.m"
            MR_Word transform_hlds__termination__PredTable0_18;
#line 604 "termination.m"
            MR_Word transform_hlds__termination__PredInfo0_19;
#line 604 "termination.m"
            MR_Word transform_hlds__termination__ImportStatus_20;
#line 604 "termination.m"
            MR_Word transform_hlds__termination__Context_21;
#line 604 "termination.m"
            MR_Word transform_hlds__termination__ProcTable0_22;
#line 604 "termination.m"
            MR_Word transform_hlds__termination__Markers_23;
#line 604 "termination.m"
            MR_Word transform_hlds__termination__ProcIds_24;
#line 604 "termination.m"
            MR_Word transform_hlds__termination__ProcTable2_26;
#line 604 "termination.m"
            MR_Word transform_hlds__termination__ProcTable_33;
#line 604 "termination.m"
            MR_Word transform_hlds__termination__PredInfo_34;
#line 604 "termination.m"
            MR_Word transform_hlds__termination__PredTable_35;
#line 604 "termination.m"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_66_66;
#line 611 "termination.m"
            MR_Box transform_hlds__termination__conv0_PredInfo0_19;
#line 625 "termination.m"
            MR_Word transform_hlds__termination__ProcTable1_25;

#line 605 "termination.m"
            {
#line 605 "termination.m"
              hlds__passes_aux__write_pred_progress_message_5_p_0((MR_String) "% Checking termination of ", transform_hlds__termination__PredId_12, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2);
            }
#line 607 "termination.m"
            {
#line 607 "termination.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2, &transform_hlds__termination__Globals_16);
            }
#line 608 "termination.m"
            {
#line 608 "termination.m"
              libs__globals__lookup_bool_option_3_p_0(transform_hlds__termination__Globals_16, (MR_Integer) 85, &transform_hlds__termination__MakeOptInt_17);
            }
#line 610 "termination.m"
            {
#line 610 "termination.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2, &transform_hlds__termination__PredTable0_18);
            }
#line 2242 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_71_71 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 2244 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_72_72 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 611 "termination.m"
            {
#line 611 "termination.m"
              mercury__map__lookup_3_p_0(transform_hlds__termination__TypeCtorInfo_71_71, transform_hlds__termination__TypeCtorInfo_72_72, transform_hlds__termination__PredTable0_18, ((MR_Box) (transform_hlds__termination__PredId_12)), &transform_hlds__termination__conv0_PredInfo0_19);
            }
#line 611 "termination.m"
            transform_hlds__termination__PredInfo0_19 = ((MR_Word) transform_hlds__termination__conv0_PredInfo0_19);
#line 612 "termination.m"
            {
#line 612 "termination.m"
              hlds__hlds_pred__pred_info_get_import_status_2_p_0(transform_hlds__termination__PredInfo0_19, &transform_hlds__termination__ImportStatus_20);
            }
#line 613 "termination.m"
            {
#line 613 "termination.m"
              hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__termination__PredInfo0_19, &transform_hlds__termination__Context_21);
            }
#line 614 "termination.m"
            {
#line 614 "termination.m"
              hlds__hlds_pred__pred_info_get_procedures_2_p_0(transform_hlds__termination__PredInfo0_19, &transform_hlds__termination__ProcTable0_22);
            }
#line 615 "termination.m"
            {
#line 615 "termination.m"
              hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__termination__PredInfo0_19, &transform_hlds__termination__Markers_23);
            }
#line 616 "termination.m"
            {
#line 616 "termination.m"
              transform_hlds__termination__ProcIds_24 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__termination__PredInfo0_19);
            }
#line 699 "termination.m"
            {
#line 699 "termination.m"
              transform_hlds__termination__succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(transform_hlds__termination__PredInfo0_19);
            }
#line 703 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 701 "termination.m"
              {
#line 701 "termination.m"
                {
#line 701 "termination.m"
                  transform_hlds__termination__set_builtin_terminates_6_p_0(transform_hlds__termination__ProcIds_24, transform_hlds__termination__PredId_12, transform_hlds__termination__PredInfo0_19, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2, transform_hlds__termination__ProcTable0_22, &transform_hlds__termination__ProcTable1_25);
                }
#line 701 "termination.m"
                transform_hlds__termination__succeeded = MR_TRUE;
#line 701 "termination.m"
              }
#line 703 "termination.m"
            else
#line 718 "termination.m"
              {
#line 718 "termination.m"
                MR_Word transform_hlds__termination__SpecialPredId_85;
#line 712 "termination.m"
                MR_Word transform_hlds__termination__SpecPredId0_83;
#line 705 "termination.m"
                MR_Word transform_hlds__termination__ModuleName_80;
#line 705 "termination.m"
                MR_String transform_hlds__termination__Name_81;
#line 705 "termination.m"
                MR_Integer transform_hlds__termination__Arity_82;
#line 705 "termination.m"
                MR_Integer transform_hlds__termination__V_91_91;
#line 708 "termination.m"
                MR_String transform_hlds__termination__V_84_84;

#line 705 "termination.m"
                {
#line 705 "termination.m"
                  transform_hlds__termination__ModuleName_80 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__termination__PredInfo0_19);
                }
#line 706 "termination.m"
                {
#line 706 "termination.m"
                  transform_hlds__termination__Name_81 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__termination__PredInfo0_19);
                }
#line 707 "termination.m"
                {
#line 707 "termination.m"
                  transform_hlds__termination__Arity_82 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__termination__PredInfo0_19);
                }
#line 708 "termination.m"
                {
#line 708 "termination.m"
                  transform_hlds__termination__succeeded = mdbcomp__prim_data__special_pred_name_arity_4_p_1(&transform_hlds__termination__SpecPredId0_83, transform_hlds__termination__Name_81, &transform_hlds__termination__V_84_84, &transform_hlds__termination__V_91_91);
                }
#line 705 "termination.m"
                if (transform_hlds__termination__succeeded)
#line 705 "termination.m"
                  {
#line 708 "termination.m"
                    transform_hlds__termination__succeeded = (transform_hlds__termination__Arity_82 == transform_hlds__termination__V_91_91);
#line 705 "termination.m"
                    if (transform_hlds__termination__succeeded)
#line 709 "termination.m"
                      {
#line 709 "termination.m"
                        transform_hlds__termination__succeeded = mdbcomp__prim_data__any_mercury_builtin_module_1_p_0(transform_hlds__termination__ModuleName_80);
                      }
#line 705 "termination.m"
                  }
#line 712 "termination.m"
                if (transform_hlds__termination__succeeded)
#line 711 "termination.m"
                  {
#line 711 "termination.m"
                    transform_hlds__termination__SpecialPredId_85 = transform_hlds__termination__SpecPredId0_83;
#line 711 "termination.m"
                    transform_hlds__termination__succeeded = MR_TRUE;
#line 711 "termination.m"
                  }
#line 712 "termination.m"
                else
#line 713 "termination.m"
                  {
#line 713 "termination.m"
                    MR_Word transform_hlds__termination__Origin_86;
#line 713 "termination.m"
                    MR_Word transform_hlds__termination__V_89_89;
#line 714 "termination.m"
                    MR_Word transform_hlds__termination__V_87_87;

#line 713 "termination.m"
                    {
#line 713 "termination.m"
                      hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__termination__PredInfo0_19, &transform_hlds__termination__Origin_86);
                    }
#line 714 "termination.m"
                    transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__Origin_86)) == (MR_mktag((MR_Integer) 0)));
#line 714 "termination.m"
                    if (transform_hlds__termination__succeeded)
#line 714 "termination.m"
                      {
#line 714 "termination.m"
                        transform_hlds__termination__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__Origin_86, (MR_Integer) 0)));
#line 714 "termination.m"
                        transform_hlds__termination__SpecialPredId_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__V_89_89, (MR_Integer) 0)));
#line 714 "termination.m"
                        transform_hlds__termination__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__V_89_89, (MR_Integer) 1)));
#line 714 "termination.m"
                        transform_hlds__termination__succeeded = MR_TRUE;
#line 714 "termination.m"
                      }
#line 713 "termination.m"
                  }
#line 718 "termination.m"
                if (transform_hlds__termination__succeeded)
#line 718 "termination.m"
                  {
#line 717 "termination.m"
                    {
#line 717 "termination.m"
                      transform_hlds__termination__set_generated_terminates_4_p_0(transform_hlds__termination__ProcIds_24, transform_hlds__termination__SpecialPredId_85, transform_hlds__termination__ProcTable0_22, &transform_hlds__termination__ProcTable1_25);
                    }
#line 717 "termination.m"
                    transform_hlds__termination__succeeded = MR_TRUE;
#line 718 "termination.m"
                  }
#line 718 "termination.m"
              }
#line 625 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 624 "termination.m"
              transform_hlds__termination__ProcTable2_26 = transform_hlds__termination__ProcTable1_25;
#line 625 "termination.m"
            else
#line 636 "termination.m"
              {
#line 626 "termination.m"
                MR_Word transform_hlds__termination__V_43_43;

#line 626 "termination.m"
                {
#line 626 "termination.m"
                  transform_hlds__termination__V_43_43 = hlds__hlds_pred__status_defined_in_this_module_1_f_0(transform_hlds__termination__ImportStatus_20);
                }
#line 626 "termination.m"
                transform_hlds__termination__succeeded = (transform_hlds__termination__V_43_43 == (MR_Integer) 1);
#line 636 "termination.m"
                if (transform_hlds__termination__succeeded)
#line 633 "termination.m"
                  {
#line 630 "termination.m"
                    {
#line 630 "termination.m"
                      transform_hlds__termination__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__termination__Markers_23, (MR_Integer) 17);
                    }
#line 633 "termination.m"
                    if (transform_hlds__termination__succeeded)
#line 631 "termination.m"
                      {
#line 631 "termination.m"
                        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 631 "termination.m"
                        {
#line 631 "termination.m"
                          transform_hlds__termination__change_procs_termination_info_5_p_0(transform_hlds__termination__ProcIds_24, (MR_Integer) 1, (MR_Word) &transform_hlds__termination_scalar_common_5[0], transform_hlds__termination__ProcTable0_22, &transform_hlds__termination__ProcTable2_26);
                        }
#line 631 "termination.m"
                      }
#line 633 "termination.m"
                    else
#line 634 "termination.m"
                      transform_hlds__termination__ProcTable2_26 = transform_hlds__termination__ProcTable0_22;
#line 633 "termination.m"
                  }
#line 636 "termination.m"
                else
#line 662 "termination.m"
                  {
#line 662 "termination.m"
                    MR_Word transform_hlds__termination__ArgSizeError_29;
#line 662 "termination.m"
                    MR_Word transform_hlds__termination__ArgSizeInfo_30;
#line 662 "termination.m"
                    MR_Word transform_hlds__termination__V_58_58;
#line 662 "termination.m"
                    MR_Word transform_hlds__termination__ProcTable1_69;

#line 648 "termination.m"
                    {
#line 648 "termination.m"
                      transform_hlds__termination__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__termination__Markers_23, (MR_Integer) 17);
                    }
#line 649 "termination.m"
                    if (!(transform_hlds__termination__succeeded))
#line 650 "termination.m"
                      {
#line 650 "termination.m"
                        MR_Word transform_hlds__termination__V_48_48;

#line 650 "termination.m"
                        transform_hlds__termination__succeeded = (transform_hlds__termination__MakeOptInt_17 == (MR_Integer) 0);
#line 650 "termination.m"
                        if (transform_hlds__termination__succeeded)
#line 650 "termination.m"
                          {
#line 651 "termination.m"
                            transform_hlds__termination__V_48_48 = (MR_Integer) 19;
#line 651 "termination.m"
                            {
#line 651 "termination.m"
                              transform_hlds__termination__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__termination__Markers_23, transform_hlds__termination__V_48_48);
                            }
#line 650 "termination.m"
                          }
#line 650 "termination.m"
                      }
#line 656 "termination.m"
                    if (transform_hlds__termination__succeeded)
#line 654 "termination.m"
                      {
#line 654 "termination.m"
                        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 654 "termination.m"
                        {
#line 654 "termination.m"
                          transform_hlds__termination__change_procs_termination_info_5_p_0(transform_hlds__termination__ProcIds_24, (MR_Integer) 1, (MR_Word) &transform_hlds__termination_scalar_common_5[0], transform_hlds__termination__ProcTable0_22, &transform_hlds__termination__ProcTable1_69);
                        }
#line 654 "termination.m"
                      }
#line 656 "termination.m"
                    else
#line 658 "termination.m"
                      {
#line 658 "termination.m"
                        MR_Word transform_hlds__termination__TerminationError_27;
#line 658 "termination.m"
                        MR_Word transform_hlds__termination__TerminationInfo_28;
#line 658 "termination.m"
                        MR_Word transform_hlds__termination__V_54_54;

#line 657 "termination.m"
                        {
#line 657 "termination.m"
                          transform_hlds__termination__TerminationError_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 657 "termination.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__termination__TerminationError_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 657 "termination.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__termination__TerminationError_27, 1) = ((MR_Box) (transform_hlds__termination__Context_21));
#line 657 "termination.m"
                        }
#line 659 "termination.m"
                        {
#line 659 "termination.m"
                          transform_hlds__termination__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 659 "termination.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__termination__V_54_54, 0) = ((MR_Box) (transform_hlds__termination__TerminationError_27));
#line 659 "termination.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__termination__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 659 "termination.m"
                        }
#line 659 "termination.m"
                        {
#line 659 "termination.m"
                          transform_hlds__termination__TerminationInfo_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 659 "termination.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__termination__TerminationInfo_28, 0) = ((MR_Box) (transform_hlds__termination__V_54_54));
#line 659 "termination.m"
                        }
#line 660 "termination.m"
                        {
#line 660 "termination.m"
                          transform_hlds__termination__change_procs_termination_info_5_p_0(transform_hlds__termination__ProcIds_24, (MR_Integer) 0, transform_hlds__termination__TerminationInfo_28, transform_hlds__termination__ProcTable0_22, &transform_hlds__termination__ProcTable1_69);
                        }
#line 658 "termination.m"
                      }
#line 663 "termination.m"
                    {
#line 663 "termination.m"
                      transform_hlds__termination__ArgSizeError_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 663 "termination.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeError_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 663 "termination.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeError_29, 1) = ((MR_Box) (transform_hlds__termination__Context_21));
#line 663 "termination.m"
                    }
#line 664 "termination.m"
                    {
#line 664 "termination.m"
                      transform_hlds__termination__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 664 "termination.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__termination__V_58_58, 0) = ((MR_Box) (transform_hlds__termination__ArgSizeError_29));
#line 664 "termination.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__termination__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 664 "termination.m"
                    }
#line 664 "termination.m"
                    {
#line 664 "termination.m"
                      transform_hlds__termination__ArgSizeInfo_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 664 "termination.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__termination__ArgSizeInfo_30, 0) = ((MR_Box) (transform_hlds__termination__V_58_58));
#line 664 "termination.m"
                    }
#line 665 "termination.m"
                    {
#line 665 "termination.m"
                      transform_hlds__termination__change_procs_arg_size_info_5_p_0(transform_hlds__termination__ProcIds_24, (MR_Integer) 0, transform_hlds__termination__ArgSizeInfo_30, transform_hlds__termination__ProcTable1_69, &transform_hlds__termination__ProcTable2_26);
                    }
#line 662 "termination.m"
                  }
#line 636 "termination.m"
              }
#line 668 "termination.m"
            {
#line 668 "termination.m"
              transform_hlds__termination__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__termination__Markers_23, (MR_Integer) 18);
            }
#line 674 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 670 "termination.m"
              {
#line 670 "termination.m"
                MR_Word transform_hlds__termination__RequestError_31;
#line 670 "termination.m"
                MR_Word transform_hlds__termination__RequestTerminationInfo_32;
#line 670 "termination.m"
                MR_Word transform_hlds__termination__V_62_62;
#line 670 "termination.m"
                MR_Word transform_hlds__termination__V_63_63;

#line 669 "termination.m"
                {
#line 669 "termination.m"
                  transform_hlds__termination__V_62_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 669 "termination.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__termination__V_62_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 669 "termination.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__termination__V_62_62, 1) = ((MR_Box) (transform_hlds__termination__PredId_12));
#line 669 "termination.m"
                }
#line 669 "termination.m"
                {
#line 669 "termination.m"
                  transform_hlds__termination__RequestError_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 669 "termination.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__termination__RequestError_31, 0) = ((MR_Box) (transform_hlds__termination__V_62_62));
#line 669 "termination.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__termination__RequestError_31, 1) = ((MR_Box) (transform_hlds__termination__Context_21));
#line 669 "termination.m"
                }
#line 671 "termination.m"
                {
#line 671 "termination.m"
                  transform_hlds__termination__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 671 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__V_63_63, 0) = ((MR_Box) (transform_hlds__termination__RequestError_31));
#line 671 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 671 "termination.m"
                }
#line 671 "termination.m"
                {
#line 671 "termination.m"
                  transform_hlds__termination__RequestTerminationInfo_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 671 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__RequestTerminationInfo_32, 0) = ((MR_Box) (transform_hlds__termination__V_63_63));
#line 671 "termination.m"
                }
#line 672 "termination.m"
                {
#line 672 "termination.m"
                  transform_hlds__termination__change_procs_termination_info_5_p_0(transform_hlds__termination__ProcIds_24, (MR_Integer) 1, transform_hlds__termination__RequestTerminationInfo_32, transform_hlds__termination__ProcTable2_26, &transform_hlds__termination__ProcTable_33);
                }
#line 670 "termination.m"
              }
#line 674 "termination.m"
            else
#line 675 "termination.m"
              transform_hlds__termination__ProcTable_33 = transform_hlds__termination__ProcTable2_26;
#line 677 "termination.m"
            {
#line 677 "termination.m"
              hlds__hlds_pred__pred_info_set_procedures_3_p_0(transform_hlds__termination__ProcTable_33, transform_hlds__termination__PredInfo0_19, &transform_hlds__termination__PredInfo_34);
            }
#line 678 "termination.m"
            {
#line 678 "termination.m"
              mercury__map__set_4_p_0(transform_hlds__termination__TypeCtorInfo_71_71, transform_hlds__termination__TypeCtorInfo_72_72, ((MR_Box) (transform_hlds__termination__PredId_12)), ((MR_Box) (transform_hlds__termination__PredInfo_34)), transform_hlds__termination__PredTable0_18, &transform_hlds__termination__PredTable_35);
            }
#line 679 "termination.m"
            {
#line 679 "termination.m"
              hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__termination__PredTable_35, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_66_66);
            }
#line 680 "termination.m"
            /* direct tailcall eliminated */
#line 680 "termination.m"
            {
#line 680 "termination.m"
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__PredIds_13;
#line 680 "termination.m"
              MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_2 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_66_66;

#line 680 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_2;
#line 680 "termination.m"
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
#line 680 "termination.m"
            }
#line 680 "termination.m"
            continue;
#line 604 "termination.m"
          }
#line 603 "termination.m"
      }
#line 603 "termination.m"
      break;
#line 603 "termination.m"
    }
#line 600 "termination.m"
}

#line 573 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__is_solver_init_wrapper_pred_2_p_0(
#line 573 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_3,
#line 573 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_2)
#line 573 "termination.m"
{
#line 576 "termination.m"
  {
#line 576 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 576 "termination.m"
    MR_Word transform_hlds__termination__PredId_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__HeadVar__2_2, (MR_Integer) 0)));
#line 576 "termination.m"
    MR_Word transform_hlds__termination__PredInfo_6;
#line 576 "termination.m"
    MR_Word transform_hlds__termination__PredOrigin_7;
#line 576 "termination.m"
    MR_Word transform_hlds__termination__SpecialPredId_8;
#line 576 "termination.m"
    MR_Word transform_hlds__termination__V_10_10;
#line 576 "termination.m"
    MR_Integer transform_hlds__termination__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__HeadVar__2_2, (MR_Integer) 1)));
#line 579 "termination.m"
    MR_Word transform_hlds__termination__V_9_9;

#line 577 "termination.m"
    {
#line 577 "termination.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__termination__ModuleInfo_3, transform_hlds__termination__PredId_4, &transform_hlds__termination__PredInfo_6);
    }
#line 578 "termination.m"
    {
#line 578 "termination.m"
      hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__termination__PredInfo_6, &transform_hlds__termination__PredOrigin_7);
    }
#line 579 "termination.m"
    transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__PredOrigin_7)) == (MR_mktag((MR_Integer) 0)));
#line 579 "termination.m"
    if (transform_hlds__termination__succeeded)
#line 579 "termination.m"
      {
#line 579 "termination.m"
        transform_hlds__termination__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PredOrigin_7, (MR_Integer) 0)));
#line 579 "termination.m"
        transform_hlds__termination__SpecialPredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__V_10_10, (MR_Integer) 0)));
#line 579 "termination.m"
        transform_hlds__termination__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__V_10_10, (MR_Integer) 1)));
#line 580 "termination.m"
        transform_hlds__termination__succeeded = (transform_hlds__termination__SpecialPredId_8 == (MR_Integer) 3);
#line 579 "termination.m"
      }
#line 576 "termination.m"
    return transform_hlds__termination__succeeded;
#line 576 "termination.m"
  }
#line 573 "termination.m"
}

#line 544 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__report_termination_errors_6_p_0_4(
#line 544 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 544 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1)
#line 544 "termination.m"
{
#line 544 "termination.m"
  {
#line 544 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 544 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

#line 544 "termination.m"
    {
#line 544 "termination.m"
      return transform_hlds__termination__succeeded = transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__544__1_1_p_0(((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 544 "termination.m"
    return transform_hlds__termination__succeeded;
#line 544 "termination.m"
  }
#line 544 "termination.m"
}

#line 529 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__report_termination_errors_6_p_0_3(
#line 529 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 529 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1)
#line 529 "termination.m"
{
#line 529 "termination.m"
  {
#line 529 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 529 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

#line 529 "termination.m"
    {
#line 529 "termination.m"
      return transform_hlds__termination__succeeded = transform_hlds__termination__is_solver_init_wrapper_pred_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 529 "termination.m"
    return transform_hlds__termination__succeeded;
#line 529 "termination.m"
  }
#line 529 "termination.m"
}

#line 517 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__report_termination_errors_6_p_0_2(
#line 517 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 517 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1)
#line 517 "termination.m"
{
#line 517 "termination.m"
  {
#line 517 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 517 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

#line 517 "termination.m"
    {
#line 517 "termination.m"
      return transform_hlds__termination__succeeded = transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__517__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 517 "termination.m"
    return transform_hlds__termination__succeeded;
#line 517 "termination.m"
  }
#line 517 "termination.m"
}

#line 501 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__report_termination_errors_6_p_0_1(
#line 501 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 501 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1)
#line 501 "termination.m"
{
#line 501 "termination.m"
  {
#line 501 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 501 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

#line 501 "termination.m"
    {
#line 501 "termination.m"
      return transform_hlds__termination__succeeded = transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__501__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 501 "termination.m"
    return transform_hlds__termination__succeeded;
#line 501 "termination.m"
  }
#line 501 "termination.m"
}

#line 491 "termination.m"
static void MR_CALL 
transform_hlds__termination__report_termination_errors_6_p_0(
#line 491 "termination.m"
  MR_Word transform_hlds__termination__SCC_7,
#line 491 "termination.m"
  MR_Word transform_hlds__termination__Errors_8,
#line 491 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35,
#line 491 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_36)
#line 491 "termination.m"
{
#line 495 "termination.m"
  {
#line 495 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 495 "termination.m"
    MR_Word transform_hlds__termination__Globals_11;
#line 495 "termination.m"
    MR_Word transform_hlds__termination__NormalErrors_12;
#line 495 "termination.m"
    MR_Word transform_hlds__termination__VerboseErrors_13;
#line 506 "termination.m"
    MR_Word transform_hlds__termination__IsCheckTerm_14;
#line 506 "termination.m"
    MR_Word transform_hlds__termination__CheckTermPPIds_19;
#line 508 "termination.m"
    MR_Word transform_hlds__termination__V_20_20;
#line 508 "termination.m"
    MR_Word transform_hlds__termination__V_21_21;

#line 496 "termination.m"
    {
#line 496 "termination.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35, &transform_hlds__termination__Globals_11);
    }
#line 497 "termination.m"
    {
#line 497 "termination.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__termination__Globals_11, (MR_Integer) 415, &transform_hlds__termination__NormalErrors_12);
    }
#line 498 "termination.m"
    {
#line 498 "termination.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__termination__Globals_11, (MR_Integer) 416, &transform_hlds__termination__VerboseErrors_13);
    }
#line 501 "termination.m"
    {
#line 501 "termination.m"
      transform_hlds__termination__IsCheckTerm_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 501 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsCheckTerm_14, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_6[0]));
#line 501 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsCheckTerm_14, 1) = ((MR_Box) (transform_hlds__termination__report_termination_errors_6_p_0_1));
#line 501 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsCheckTerm_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 501 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsCheckTerm_14, 3) = ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35));
#line 501 "termination.m"
    }
#line 507 "termination.m"
    {
#line 507 "termination.m"
      mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__termination__IsCheckTerm_14, transform_hlds__termination__SCC_7, &transform_hlds__termination__CheckTermPPIds_19);
    }
#line 508 "termination.m"
    transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__CheckTermPPIds_19)) == (MR_mktag((MR_Integer) 1)));
#line 508 "termination.m"
    if (transform_hlds__termination__succeeded)
#line 508 "termination.m"
      {
#line 508 "termination.m"
        transform_hlds__termination__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__CheckTermPPIds_19, (MR_Integer) 0)));
#line 508 "termination.m"
        transform_hlds__termination__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__CheckTermPPIds_19, (MR_Integer) 1)));
#line 513 "termination.m"
        {
#line 513 "termination.m"
          transform_hlds__term_errors__report_term_errors_5_p_0(transform_hlds__termination__SCC_7, transform_hlds__termination__Errors_8, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35);
        }
#line 514 "termination.m"
        {
#line 514 "termination.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
#line 515 "termination.m"
        {
#line 515 "termination.m"
          hlds__hlds_module__module_info_incr_errors_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_36);
#line 515 "termination.m"
          return;
        }
#line 508 "termination.m"
      }
#line 508 "termination.m"
    else
#line 566 "termination.m"
      {
#line 566 "termination.m"
        MR_Word transform_hlds__termination__PrintErrors_27;
#line 520 "termination.m"
        MR_Word transform_hlds__termination__TypeCtorInfo_62_62 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 520 "termination.m"
        MR_Word transform_hlds__termination__IsNonImported_22;
#line 520 "termination.m"
        MR_Word transform_hlds__termination__NonImportedPPIds_24;
#line 520 "termination.m"
        MR_Word transform_hlds__termination__V_48_48;
#line 522 "termination.m"
        MR_Word transform_hlds__termination__V_25_25;
#line 522 "termination.m"
        MR_Word transform_hlds__termination__V_26_26;

#line 517 "termination.m"
        {
#line 517 "termination.m"
          transform_hlds__termination__IsNonImported_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 517 "termination.m"
          MR_hl_field(MR_mktag(0), transform_hlds__termination__IsNonImported_22, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_6[0]));
#line 517 "termination.m"
          MR_hl_field(MR_mktag(0), transform_hlds__termination__IsNonImported_22, 1) = ((MR_Box) (transform_hlds__termination__report_termination_errors_6_p_0_2));
#line 517 "termination.m"
          MR_hl_field(MR_mktag(0), transform_hlds__termination__IsNonImported_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 517 "termination.m"
          MR_hl_field(MR_mktag(0), transform_hlds__termination__IsNonImported_22, 3) = ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35));
#line 517 "termination.m"
        }
#line 521 "termination.m"
        {
#line 521 "termination.m"
          mercury__list__filter_3_p_0(transform_hlds__termination__TypeCtorInfo_62_62, transform_hlds__termination__IsNonImported_22, transform_hlds__termination__SCC_7, &transform_hlds__termination__NonImportedPPIds_24);
        }
#line 522 "termination.m"
        transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__NonImportedPPIds_24)) == (MR_mktag((MR_Integer) 1)));
#line 522 "termination.m"
        if (transform_hlds__termination__succeeded)
#line 522 "termination.m"
          {
#line 522 "termination.m"
            transform_hlds__termination__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__NonImportedPPIds_24, (MR_Integer) 0)));
#line 522 "termination.m"
            transform_hlds__termination__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__NonImportedPPIds_24, (MR_Integer) 1)));
#line 529 "termination.m"
            {
#line 529 "termination.m"
              transform_hlds__termination__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 529 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__V_48_48, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_6[0]));
#line 529 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__V_48_48, 1) = ((MR_Box) (transform_hlds__termination__report_termination_errors_6_p_0_3));
#line 529 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 529 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__V_48_48, 3) = ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35));
#line 529 "termination.m"
            }
#line 529 "termination.m"
            {
#line 529 "termination.m"
              transform_hlds__termination__succeeded = mercury__list__all_false_2_p_0(transform_hlds__termination__TypeCtorInfo_62_62, transform_hlds__termination__V_48_48, transform_hlds__termination__SCC_7);
            }
#line 520 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 540 "termination.m"
              {
#line 540 "termination.m"
                if ((transform_hlds__termination__VerboseErrors_13 == (MR_Integer) 0))
#line 541 "termination.m"
                  {
#line 541 "termination.m"
                    MR_Word transform_hlds__termination__TypeCtorInfo_64_64;
#line 541 "termination.m"
                    MR_Word transform_hlds__termination__IsNonSimple_28;
#line 541 "termination.m"
                    MR_Word transform_hlds__termination__PrintErrors0_32;

#line 3053 "transform_hlds.termination.c"
                    transform_hlds__termination__succeeded = (transform_hlds__termination__NormalErrors_12 == (MR_Integer) 1);
#line 541 "termination.m"
                    if (transform_hlds__termination__succeeded)
#line 541 "termination.m"
                      {
#line 544 "termination.m"
                        transform_hlds__termination__IsNonSimple_28 = (MR_Word) &transform_hlds__termination_scalar_common_2[5];
#line 3061 "transform_hlds.termination.c"
                        transform_hlds__termination__TypeCtorInfo_64_64 = (MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0;
#line 548 "termination.m"
                        {
#line 548 "termination.m"
                          mercury__list__filter_3_p_0(transform_hlds__termination__TypeCtorInfo_64_64, transform_hlds__termination__IsNonSimple_28, transform_hlds__termination__Errors_8, &transform_hlds__termination__PrintErrors0_32);
                        }
#line 555 "termination.m"
                        if ((transform_hlds__termination__PrintErrors0_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 554 "termination.m"
                          transform_hlds__termination__PrintErrors_27 = transform_hlds__termination__Errors_8;
#line 555 "termination.m"
                        else
#line 557 "termination.m"
                          transform_hlds__termination__PrintErrors_27 = transform_hlds__termination__PrintErrors0_32;
#line 555 "termination.m"
                        transform_hlds__termination__succeeded = MR_TRUE;
#line 541 "termination.m"
                      }
#line 541 "termination.m"
                  }
#line 540 "termination.m"
                else
#line 539 "termination.m"
                  {
#line 539 "termination.m"
                    transform_hlds__termination__PrintErrors_27 = transform_hlds__termination__Errors_8;
#line 539 "termination.m"
                    transform_hlds__termination__succeeded = MR_TRUE;
#line 539 "termination.m"
                  }
#line 540 "termination.m"
              }
#line 522 "termination.m"
          }
#line 566 "termination.m"
        if (transform_hlds__termination__succeeded)
#line 565 "termination.m"
          {
#line 565 "termination.m"
            transform_hlds__term_errors__report_term_errors_5_p_0(transform_hlds__termination__SCC_7, transform_hlds__termination__PrintErrors_27, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35);
          }
#line 566 "termination.m"
        else
#line 565 "termination.m"
          {
#line 565 "termination.m"
          }
#line 565 "termination.m"
        *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_36 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35;
#line 566 "termination.m"
      }
#line 495 "termination.m"
  }
#line 491 "termination.m"
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
            MR_Word transform_hlds__termination__TypeCtorInfo_30_30;
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
#line 3196 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 3198 "transform_hlds.termination.c"
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
              hlds__hlds_pred__pred_info_get_procedures_2_p_0(transform_hlds__termination__PredInfo0_16, &transform_hlds__termination__ProcTable0_17);
            }
#line 3212 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_30_30 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 3214 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 481 "termination.m"
            {
#line 481 "termination.m"
              mercury__map__lookup_3_p_0(transform_hlds__termination__TypeCtorInfo_30_30, transform_hlds__termination__TypeCtorInfo_31_31, transform_hlds__termination__ProcTable0_17, ((MR_Box) (transform_hlds__termination__ProcId_14)), &transform_hlds__termination__conv1_ProcInfo0_18);
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
              mercury__map__det_update_4_p_0(transform_hlds__termination__TypeCtorInfo_30_30, transform_hlds__termination__TypeCtorInfo_31_31, ((MR_Box) (transform_hlds__termination__ProcId_14)), ((MR_Box) (transform_hlds__termination__ProcInfo_19)), transform_hlds__termination__ProcTable0_17, &transform_hlds__termination__ProcTable_20);
            }
#line 486 "termination.m"
            {
#line 486 "termination.m"
              hlds__hlds_pred__pred_info_set_procedures_3_p_0(transform_hlds__termination__ProcTable_20, transform_hlds__termination__PredInfo0_16, &transform_hlds__termination__PredInfo_21);
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
            MR_Word transform_hlds__termination__TypeCtorInfo_30_30;
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
#line 3362 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 3364 "transform_hlds.termination.c"
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
              hlds__hlds_pred__pred_info_get_procedures_2_p_0(transform_hlds__termination__PredInfo0_16, &transform_hlds__termination__ProcTable0_17);
            }
#line 3378 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_30_30 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 3380 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 461 "termination.m"
            {
#line 461 "termination.m"
              mercury__map__lookup_3_p_0(transform_hlds__termination__TypeCtorInfo_30_30, transform_hlds__termination__TypeCtorInfo_31_31, transform_hlds__termination__ProcTable0_17, ((MR_Box) (transform_hlds__termination__ProcId_14)), &transform_hlds__termination__conv1_ProcInfo0_18);
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
              mercury__map__set_4_p_0(transform_hlds__termination__TypeCtorInfo_30_30, transform_hlds__termination__TypeCtorInfo_31_31, ((MR_Box) (transform_hlds__termination__ProcId_14)), ((MR_Box) (transform_hlds__termination__ProcInfo_19)), transform_hlds__termination__ProcTable0_17, &transform_hlds__termination__ProcTable_20);
            }
#line 465 "termination.m"
            {
#line 465 "termination.m"
              hlds__hlds_pred__pred_info_set_procedures_3_p_0(transform_hlds__termination__ProcTable_20, transform_hlds__termination__PredInfo0_16, &transform_hlds__termination__PredInfo_21);
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
            MR_Word transform_hlds__termination__TypeCtorInfo_34_34;
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
#line 3538 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_32_32 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 3540 "transform_hlds.termination.c"
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
              hlds__hlds_pred__pred_info_get_procedures_2_p_0(transform_hlds__termination__PredInfo0_18, &transform_hlds__termination__ProcTable0_19);
            }
#line 3554 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_34_34 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 3556 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_35_35 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 441 "termination.m"
            {
#line 441 "termination.m"
              mercury__map__lookup_3_p_0(transform_hlds__termination__TypeCtorInfo_34_34, transform_hlds__termination__TypeCtorInfo_35_35, transform_hlds__termination__ProcTable0_19, ((MR_Box) (transform_hlds__termination__ProcId_16)), &transform_hlds__termination__conv1_ProcInfo_20);
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
              mercury__map__set_4_p_0(transform_hlds__termination__TypeCtorInfo_34_34, transform_hlds__termination__TypeCtorInfo_35_35, ((MR_Box) (transform_hlds__termination__ProcId_16)), ((MR_Box) (transform_hlds__termination__ProcInfo1_23)), transform_hlds__termination__ProcTable0_19, &transform_hlds__termination__ProcTable_24);
            }
#line 447 "termination.m"
            {
#line 447 "termination.m"
              hlds__hlds_pred__pred_info_set_procedures_3_p_0(transform_hlds__termination__ProcTable_24, transform_hlds__termination__PredInfo0_18, &transform_hlds__termination__PredInfo_25);
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
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_48)
#line 356 "termination.m"
{
#line 359 "termination.m"
  {
#line 359 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 359 "termination.m"
    MR_Word transform_hlds__termination__TypeCtorInfo_69_69;
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
    MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_57_57;
#line 359 "termination.m"
    MR_Word transform_hlds__termination__V_58_58;
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
#line 3779 "transform_hlds.termination.c"
    transform_hlds__termination__TypeCtorInfo_69_69 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 364 "termination.m"
    {
#line 364 "termination.m"
      mercury__list__filter_4_p_0(transform_hlds__termination__TypeCtorInfo_69_69, transform_hlds__termination__IsArgSizeKnown_11, transform_hlds__termination__SCC_8, &transform_hlds__termination___SCCArgSizeKnown_16, &transform_hlds__termination__SCCArgSizeUnknown_17);
    }
#line 369 "termination.m"
    if ((transform_hlds__termination__SCCArgSizeUnknown_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 366 "termination.m"
      {
#line 367 "termination.m"
        transform_hlds__termination__ArgSizeErrors_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 368 "termination.m"
        transform_hlds__termination__TermErrors_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 368 "termination.m"
        transform_hlds__termination__STATE_VARIABLE_ModuleInfo_57_57 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47;
#line 366 "termination.m"
      }
#line 369 "termination.m"
    else
#line 370 "termination.m"
      {
#line 370 "termination.m"
        MR_Word transform_hlds__termination__ArgSizeResult_22;
#line 370 "termination.m"
        MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_53_53;

#line 371 "termination.m"
        {
#line 371 "termination.m"
          transform_hlds__term_pass1__find_arg_sizes_in_scc_8_p_0(transform_hlds__termination__SCCArgSizeUnknown_17, transform_hlds__termination__PassInfo_7, &transform_hlds__termination__ArgSizeResult_22, &transform_hlds__termination__TermErrors_19, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_53_53);
        }
#line 378 "termination.m"
        if (((MR_tag((MR_Word) transform_hlds__termination__ArgSizeResult_22)) == (MR_mktag((MR_Integer) 1))))
#line 379 "termination.m"
          {
#line 379 "termination.m"
            MR_Word transform_hlds__termination__V_55_55;

#line 379 "termination.m"
            transform_hlds__termination__ArgSizeErrors_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__ArgSizeResult_22, (MR_Integer) 0)));
#line 380 "termination.m"
            {
#line 380 "termination.m"
              transform_hlds__termination__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 380 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_55_55, 0) = ((MR_Box) (transform_hlds__termination__ArgSizeErrors_18));
#line 380 "termination.m"
            }
#line 380 "termination.m"
            {
#line 380 "termination.m"
              transform_hlds__termination__set_infinite_arg_size_infos_4_p_0(transform_hlds__termination__SCCArgSizeUnknown_17, transform_hlds__termination__V_55_55, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_53_53, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_57_57);
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
              transform_hlds__termination__set_finite_arg_size_infos_4_p_0(transform_hlds__termination__Solutions_23, transform_hlds__termination__OutputSupplierMap_24, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_53_53, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_57_57);
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
      transform_hlds__termination__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 385 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_58_58, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_6[0]));
#line 385 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_58_58, 1) = ((MR_Box) (transform_hlds__termination__analyse_termination_in_scc_6_p_0_2));
#line 385 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_58_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 385 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_58_58, 3) = ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_57_57));
#line 385 "termination.m"
    }
#line 385 "termination.m"
    {
#line 385 "termination.m"
      mercury__list__filter_4_p_0(transform_hlds__termination__TypeCtorInfo_69_69, transform_hlds__termination__V_58_58, transform_hlds__termination__SCC_8, &transform_hlds__termination___SCCTerminationKnown_26, &transform_hlds__termination__SCCTerminationUnknown_27);
    }
#line 392 "termination.m"
    if ((transform_hlds__termination__SCCTerminationUnknown_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 391 "termination.m"
      *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_48 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_57_57;
#line 392 "termination.m"
    else
#line 393 "termination.m"
      {
#line 393 "termination.m"
        MR_Word transform_hlds__termination__TypeCtorInfo_71_71 = (MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0;
#line 393 "termination.m"
        MR_Word transform_hlds__termination__FatalErrors_34;
#line 393 "termination.m"
        MR_Word transform_hlds__termination__BothErrors_35;

#line 398 "termination.m"
        {
#line 398 "termination.m"
          mercury__list__filter_3_p_0(transform_hlds__termination__TypeCtorInfo_71_71, (MR_Word) &transform_hlds__termination_scalar_common_2[4], transform_hlds__termination__ArgSizeErrors_18, &transform_hlds__termination__FatalErrors_34);
        }
#line 399 "termination.m"
        {
#line 399 "termination.m"
          transform_hlds__termination__BothErrors_35 = mercury__list__f_43_43_2_f_0(transform_hlds__termination__TypeCtorInfo_71_71, transform_hlds__termination__TermErrors_19, transform_hlds__termination__FatalErrors_34);
        }
#line 3900 "transform_hlds.termination.c"
        if ((transform_hlds__termination__BothErrors_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3902 "transform_hlds.termination.c"
          {
#line 3904 "transform_hlds.termination.c"
            MR_Word transform_hlds__termination__TerminationResult_42;
#line 3906 "transform_hlds.termination.c"
            MR_Word transform_hlds__termination__Globals_43;
#line 3908 "transform_hlds.termination.c"
            MR_Integer transform_hlds__termination__SingleArgs_44;
#line 3910 "transform_hlds.termination.c"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_62_62;
#line 3912 "transform_hlds.termination.c"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_64_64;

#line 409 "termination.m"
            {
#line 409 "termination.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_57_57, &transform_hlds__termination__Globals_43);
            }
#line 410 "termination.m"
            {
#line 410 "termination.m"
              libs__globals__lookup_int_option_3_p_0(transform_hlds__termination__Globals_43, (MR_Integer) 417, &transform_hlds__termination__SingleArgs_44);
            }
#line 412 "termination.m"
            {
#line 412 "termination.m"
              transform_hlds__term_pass2__prove_termination_in_scc_8_p_0(transform_hlds__termination__SCCTerminationUnknown_27, transform_hlds__termination__PassInfo_7, transform_hlds__termination__SingleArgs_44, &transform_hlds__termination__TerminationResult_42, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_57_57, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_62_62);
            }
#line 415 "termination.m"
            {
#line 415 "termination.m"
              transform_hlds__termination__set_termination_infos_4_p_0(transform_hlds__termination__SCCTerminationUnknown_27, transform_hlds__termination__TerminationResult_42, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_62_62, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_64_64);
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
                  transform_hlds__termination__report_termination_errors_6_p_0(transform_hlds__termination__SCC_8, transform_hlds__termination__TerminationErrors_45, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_64_64, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_48);
#line 419 "termination.m"
                  return;
                }
#line 418 "termination.m"
              }
#line 421 "termination.m"
            else
#line 422 "termination.m"
              *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_48 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_64_64;
#line 3955 "transform_hlds.termination.c"
          }
#line 3957 "transform_hlds.termination.c"
        else
#line 3959 "transform_hlds.termination.c"
          {
#line 3961 "transform_hlds.termination.c"
            MR_Integer transform_hlds__termination__MaxErrors_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PassInfo_7, (MR_Integer) 1)));
#line 3963 "transform_hlds.termination.c"
            MR_Word transform_hlds__termination__TerminationResult_74;
#line 3965 "transform_hlds.termination.c"
            MR_Word transform_hlds__termination__TerminationErrors_75;
#line 3967 "transform_hlds.termination.c"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_64_78;
#line 404 "termination.m"
            MR_Word transform_hlds__termination__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PassInfo_7, (MR_Integer) 0)));
#line 404 "termination.m"
            MR_Integer transform_hlds__termination__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PassInfo_7, (MR_Integer) 2)));

#line 405 "termination.m"
            {
#line 405 "termination.m"
              mercury__list__take_upto_3_p_0(transform_hlds__termination__TypeCtorInfo_71_71, transform_hlds__termination__MaxErrors_39, transform_hlds__termination__BothErrors_35, &transform_hlds__termination__TerminationErrors_75);
            }
#line 406 "termination.m"
            {
#line 406 "termination.m"
              transform_hlds__termination__TerminationResult_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 406 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__TerminationResult_74, 0) = ((MR_Box) (transform_hlds__termination__TerminationErrors_75));
#line 406 "termination.m"
            }
#line 415 "termination.m"
            {
#line 415 "termination.m"
              transform_hlds__termination__set_termination_infos_4_p_0(transform_hlds__termination__SCCTerminationUnknown_27, transform_hlds__termination__TerminationResult_74, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_57_57, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_64_78);
            }
#line 419 "termination.m"
            {
#line 419 "termination.m"
              transform_hlds__termination__report_termination_errors_6_p_0(transform_hlds__termination__SCC_8, transform_hlds__termination__TerminationErrors_75, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_64_78, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_48);
#line 419 "termination.m"
              return;
            }
#line 3999 "transform_hlds.termination.c"
          }
#line 393 "termination.m"
      }
#line 359 "termination.m"
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
    MR_Word transform_hlds__termination__conv0_HeadVar__2_42;

#line 308 "termination.m"
    {
#line 308 "termination.m"
      transform_hlds__termination__conv0_HeadVar__2_42 = transform_hlds__termination__IntroducedFrom__func__check_scc_pragmas_are_consistent__308__1_1_f_0(((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 308 "termination.m"
    transform_hlds__termination__wrapper_arg_2 = ((MR_Box) (transform_hlds__termination__conv0_HeadVar__2_42));
#line 308 "termination.m"
    return transform_hlds__termination__wrapper_arg_2;
#line 308 "termination.m"
  }
#line 308 "termination.m"
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
#line 4229 "transform_hlds.termination.c"
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

#line 302 "termination.m"
            {
#line 302 "termination.m"
              transform_hlds__term_util__get_context_from_scc_3_p_0(transform_hlds__termination__SCCTerminationKnown_9, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26, &transform_hlds__termination__Context_17);
            }
#line 305 "termination.m"
            {
#line 305 "termination.m"
              transform_hlds__termination__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 305 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__V_36_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 305 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__V_36_36, 1) = ((MR_Box) (transform_hlds__termination__Context_17));
#line 305 "termination.m"
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
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_44_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[31])));
#line 313 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_44_44, 1) = ((MR_Box) (transform_hlds__termination__PredNamePieces_22));
#line 313 "termination.m"
            }
#line 312 "termination.m"
            {
#line 312 "termination.m"
              transform_hlds__termination__Pieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__termination__V_44_44, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[22]));
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
              MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
#line 280 "termination.m"
      }
#line 274 "termination.m"
  }
#line 270 "termination.m"
}

#line 151 "termination.m"
static void MR_CALL 
transform_hlds__termination__check_foreign_code_attributes_2_5_p_0(
#line 151 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 151 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2,
#line 151 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_3,
#line 151 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__4_4,
#line 151 "termination.m"
  MR_Word * transform_hlds__termination__HeadVar__5_5)
#line 151 "termination.m"
{
#line 155 "termination.m"
  {
#line 155 "termination.m"
    MR_bool transform_hlds__termination__succeeded;

#line 155 "termination.m"
    if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 155 "termination.m"
      {
#line 156 "termination.m"
        {
#line 156 "termination.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.termination", (MR_String) "predicate \140transform_hlds.termination.check_foreign_code_attributes_2\'/5", (MR_String) "empty SCC");
#line 156 "termination.m"
          return;
        }
#line 155 "termination.m"
      }
#line 155 "termination.m"
    else
#line 155 "termination.m"
      {
#line 155 "termination.m"
        MR_Word transform_hlds__termination__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
#line 155 "termination.m"
        MR_Word transform_hlds__termination__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));

#line 155 "termination.m"
        if ((transform_hlds__termination__V_154_154 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 157 "termination.m"
          {
#line 157 "termination.m"
            MR_Word transform_hlds__termination__PredInfo_19;
#line 157 "termination.m"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ProcInfo_45_45;
#line 236 "termination.m"
            MR_Word transform_hlds__termination__Attributes_21;
#line 161 "termination.m"
            MR_Word transform_hlds__termination__Goal_20;
#line 161 "termination.m"
            MR_Word transform_hlds__termination__V_46_46;
#line 162 "termination.m"
            MR_Word transform_hlds__termination___GoalInfo_28;
#line 162 "termination.m"
            MR_Word transform_hlds__termination__V_22_22;
#line 162 "termination.m"
            MR_Integer transform_hlds__termination__V_23_23;
#line 162 "termination.m"
            MR_Word transform_hlds__termination__V_24_24;
#line 162 "termination.m"
            MR_Word transform_hlds__termination__V_25_25;
#line 162 "termination.m"
            MR_Word transform_hlds__termination__V_26_26;
#line 162 "termination.m"
            MR_Word transform_hlds__termination__V_27_27;

#line 159 "termination.m"
            {
#line 159 "termination.m"
              hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2, transform_hlds__termination__V_155_155, &transform_hlds__termination__PredInfo_19, &transform_hlds__termination__STATE_VARIABLE_ProcInfo_45_45);
            }
#line 161 "termination.m"
            {
#line 161 "termination.m"
              hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__termination__STATE_VARIABLE_ProcInfo_45_45, &transform_hlds__termination__Goal_20);
            }
#line 162 "termination.m"
            transform_hlds__termination__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__Goal_20, (MR_Integer) 0)));
#line 162 "termination.m"
            transform_hlds__termination___GoalInfo_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__Goal_20, (MR_Integer) 1)));
#line 162 "termination.m"
            transform_hlds__termination__succeeded = ((((MR_tag((MR_Word) transform_hlds__termination__V_46_46)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__V_46_46, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 162 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 162 "termination.m"
              {
#line 162 "termination.m"
                transform_hlds__termination__Attributes_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__V_46_46, (MR_Integer) 1)));
#line 162 "termination.m"
                transform_hlds__termination__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__V_46_46, (MR_Integer) 2)));
#line 162 "termination.m"
                transform_hlds__termination__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__termination__V_46_46, (MR_Integer) 3)));
#line 162 "termination.m"
                transform_hlds__termination__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__V_46_46, (MR_Integer) 4)));
#line 162 "termination.m"
                transform_hlds__termination__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__V_46_46, (MR_Integer) 5)));
#line 162 "termination.m"
                transform_hlds__termination__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__V_46_46, (MR_Integer) 6)));
#line 162 "termination.m"
                transform_hlds__termination__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__V_46_46, (MR_Integer) 7)));
#line 166 "termination.m"
                {
#line 166 "termination.m"
                  MR_Word transform_hlds__termination__MaybeTermination_29;
#line 166 "termination.m"
                  MR_Word transform_hlds__termination__Context_30;
#line 166 "termination.m"
                  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcInfo_108_108;

#line 166 "termination.m"
                  {
#line 166 "termination.m"
                    hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__termination__STATE_VARIABLE_ProcInfo_45_45, &transform_hlds__termination__MaybeTermination_29);
                  }
#line 167 "termination.m"
                  {
#line 167 "termination.m"
                    hlds__hlds_pred__proc_info_get_context_2_p_0(transform_hlds__termination__STATE_VARIABLE_ProcInfo_45_45, &transform_hlds__termination__Context_30);
                  }
#line 179 "termination.m"
                  if ((transform_hlds__termination__MaybeTermination_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 169 "termination.m"
                    {
#line 170 "termination.m"
                      {
#line 170 "termination.m"
                        transform_hlds__termination__succeeded = transform_hlds__term_util__attributes_imply_termination_1_p_0(transform_hlds__termination__Attributes_21);
                      }
#line 173 "termination.m"
                      if (transform_hlds__termination__succeeded)
#line 171 "termination.m"
                        {
#line 171 "termination.m"
                          mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 172 "termination.m"
                          {
#line 172 "termination.m"
                            hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_5[1]), transform_hlds__termination__STATE_VARIABLE_ProcInfo_45_45, &transform_hlds__termination__STATE_VARIABLE_ProcInfo_108_108);
                          }
#line 171 "termination.m"
                        }
#line 173 "termination.m"
                      else
#line 175 "termination.m"
                        {
#line 175 "termination.m"
                          MR_Word transform_hlds__termination__TermErr_32;
#line 175 "termination.m"
                          MR_Word transform_hlds__termination__V_109_109;
#line 175 "termination.m"
                          MR_Word transform_hlds__termination__V_110_110;
#line 175 "termination.m"
                          MR_Word transform_hlds__termination__V_111_111;
#line 175 "termination.m"
                          MR_Word transform_hlds__termination__TermStatus_115;

#line 174 "termination.m"
                          {
#line 174 "termination.m"
                            transform_hlds__termination__V_109_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 174 "termination.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__termination__V_109_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 174 "termination.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__termination__V_109_109, 1) = ((MR_Box) (transform_hlds__termination__V_155_155));
#line 174 "termination.m"
                          }
#line 174 "termination.m"
                          {
#line 174 "termination.m"
                            transform_hlds__termination__TermErr_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 174 "termination.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__termination__TermErr_32, 0) = ((MR_Box) (transform_hlds__termination__V_109_109));
#line 174 "termination.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__termination__TermErr_32, 1) = ((MR_Box) (transform_hlds__termination__Context_30));
#line 174 "termination.m"
                          }
#line 176 "termination.m"
                          {
#line 176 "termination.m"
                            transform_hlds__termination__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 176 "termination.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__termination__V_111_111, 0) = ((MR_Box) (transform_hlds__termination__TermErr_32));
#line 176 "termination.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__termination__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 176 "termination.m"
                          }
#line 176 "termination.m"
                          {
#line 176 "termination.m"
                            transform_hlds__termination__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 176 "termination.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__termination__V_110_110, 0) = ((MR_Box) (transform_hlds__termination__V_111_111));
#line 176 "termination.m"
                          }
#line 176 "termination.m"
                          {
#line 176 "termination.m"
                            transform_hlds__termination__TermStatus_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 176 "termination.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__termination__TermStatus_115, 0) = ((MR_Box) (transform_hlds__termination__V_110_110));
#line 176 "termination.m"
                          }
#line 177 "termination.m"
                          {
#line 177 "termination.m"
                            hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(transform_hlds__termination__TermStatus_115, transform_hlds__termination__STATE_VARIABLE_ProcInfo_45_45, &transform_hlds__termination__STATE_VARIABLE_ProcInfo_108_108);
                          }
#line 175 "termination.m"
                        }
#line 177 "termination.m"
                      *transform_hlds__termination__HeadVar__5_5 = transform_hlds__termination__HeadVar__4_4;
#line 169 "termination.m"
                    }
#line 179 "termination.m"
                  else
#line 179 "termination.m"
                    {
#line 179 "termination.m"
                      MR_Word transform_hlds__termination__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__MaybeTermination_29, (MR_Integer) 0)));

#line 179 "termination.m"
                      if (((MR_tag((MR_Word) transform_hlds__termination__V_156_156)) == (MR_mktag((MR_Integer) 1))))
#line 209 "termination.m"
                        {
#line 209 "termination.m"
                          MR_Word transform_hlds__termination__TermErrs0_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__V_156_156, (MR_Integer) 0)));
#line 210 "termination.m"
                          MR_Word transform_hlds__termination__V_48_48;

#line 210 "termination.m"
                          {
#line 210 "termination.m"
                            transform_hlds__termination__V_48_48 = parse_tree__prog_data__get_terminates_1_f_0(transform_hlds__termination__Attributes_21);
                          }
#line 210 "termination.m"
                          transform_hlds__termination__succeeded = (transform_hlds__termination__V_48_48 == (MR_Integer) 0);
#line 230 "termination.m"
                          if (transform_hlds__termination__succeeded)
#line 212 "termination.m"
                            {
#line 212 "termination.m"
                              MR_Word transform_hlds__termination__TermErrs_39;
#line 212 "termination.m"
                              MR_Word transform_hlds__termination__V_50_50;
#line 212 "termination.m"
                              MR_Word transform_hlds__termination__V_53_53;
#line 212 "termination.m"
                              MR_Word transform_hlds__termination__V_69_69;
#line 212 "termination.m"
                              MR_Word transform_hlds__termination__V_70_70;
#line 212 "termination.m"
                              MR_Word transform_hlds__termination__V_74_74;
#line 212 "termination.m"
                              MR_Word transform_hlds__termination__TermStatus_122;
#line 212 "termination.m"
                              MR_Word transform_hlds__termination__TermErr_123;
#line 212 "termination.m"
                              MR_Word transform_hlds__termination__ProcNamePieces_124;
#line 212 "termination.m"
                              MR_Word transform_hlds__termination__Pieces_125;
#line 212 "termination.m"
                              MR_Word transform_hlds__termination__Msg_126;
#line 212 "termination.m"
                              MR_Word transform_hlds__termination__Spec_127;

#line 211 "termination.m"
                              {
#line 211 "termination.m"
                                transform_hlds__termination__TermErr_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 211 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__TermErr_123, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 211 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__TermErr_123, 1) = ((MR_Box) (transform_hlds__termination__Context_30));
#line 211 "termination.m"
                              }
#line 213 "termination.m"
                              {
#line 213 "termination.m"
                                transform_hlds__termination__TermErrs_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 213 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__TermErrs_39, 0) = ((MR_Box) (transform_hlds__termination__TermErr_123));
#line 213 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__TermErrs_39, 1) = ((MR_Box) (transform_hlds__termination__TermErrs0_38));
#line 213 "termination.m"
                              }
#line 214 "termination.m"
                              {
#line 214 "termination.m"
                                transform_hlds__termination__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 214 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_50_50, 0) = ((MR_Box) (transform_hlds__termination__TermErrs_39));
#line 214 "termination.m"
                              }
#line 214 "termination.m"
                              {
#line 214 "termination.m"
                                transform_hlds__termination__TermStatus_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 214 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__TermStatus_122, 0) = ((MR_Box) (transform_hlds__termination__V_50_50));
#line 214 "termination.m"
                              }
#line 216 "termination.m"
                              {
#line 216 "termination.m"
                                hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(transform_hlds__termination__TermStatus_122, transform_hlds__termination__STATE_VARIABLE_ProcInfo_45_45, &transform_hlds__termination__STATE_VARIABLE_ProcInfo_108_108);
                              }
#line 218 "termination.m"
                              {
#line 218 "termination.m"
                                transform_hlds__termination__ProcNamePieces_124 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2, (MR_Integer) 0, transform_hlds__termination__V_155_155);
                              }
#line 221 "termination.m"
                              {
#line 221 "termination.m"
                                transform_hlds__termination__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 221 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_53_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[31])));
#line 221 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_53_53, 1) = ((MR_Box) (transform_hlds__termination__ProcNamePieces_124));
#line 221 "termination.m"
                              }
#line 220 "termination.m"
                              {
#line 220 "termination.m"
                                transform_hlds__termination__Pieces_125 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__termination__V_53_53, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[12]));
                              }
#line 226 "termination.m"
                              {
#line 226 "termination.m"
                                transform_hlds__termination__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 226 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__V_70_70, 0) = ((MR_Box) (transform_hlds__termination__Pieces_125));
#line 226 "termination.m"
                              }
#line 226 "termination.m"
                              {
#line 226 "termination.m"
                                transform_hlds__termination__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 226 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_69_69, 0) = ((MR_Box) (transform_hlds__termination__V_70_70));
#line 226 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 226 "termination.m"
                              }
#line 226 "termination.m"
                              {
#line 226 "termination.m"
                                transform_hlds__termination__Msg_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 226 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__Msg_126, 0) = ((MR_Box) (transform_hlds__termination__Context_30));
#line 226 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__Msg_126, 1) = ((MR_Box) (transform_hlds__termination__V_69_69));
#line 226 "termination.m"
                              }
#line 227 "termination.m"
                              {
#line 227 "termination.m"
                                transform_hlds__termination__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 227 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_74_74, 0) = ((MR_Box) (transform_hlds__termination__Msg_126));
#line 227 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 227 "termination.m"
                              }
#line 227 "termination.m"
                              {
#line 227 "termination.m"
                                transform_hlds__termination__Spec_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 227 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_127, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 227 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 227 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_127, 2) = ((MR_Box) (transform_hlds__termination__V_74_74));
#line 227 "termination.m"
                              }
#line 229 "termination.m"
                              {
#line 229 "termination.m"
                                MR_Word base;
#line 229 "termination.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 229 "termination.m"
                                *transform_hlds__termination__HeadVar__5_5 = base;
#line 229 "termination.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__termination__Spec_127));
#line 229 "termination.m"
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__termination__HeadVar__4_4));
#line 229 "termination.m"
                              }
#line 212 "termination.m"
                            }
#line 230 "termination.m"
                          else
#line 231 "termination.m"
                            {
#line 231 "termination.m"
                              transform_hlds__termination__STATE_VARIABLE_ProcInfo_108_108 = transform_hlds__termination__STATE_VARIABLE_ProcInfo_45_45;
#line 231 "termination.m"
                              *transform_hlds__termination__HeadVar__5_5 = transform_hlds__termination__HeadVar__4_4;
#line 231 "termination.m"
                            }
#line 209 "termination.m"
                        }
#line 179 "termination.m"
                      else
#line 202 "termination.m"
                        {
#line 184 "termination.m"
                          MR_Word transform_hlds__termination__V_78_78;

#line 184 "termination.m"
                          {
#line 184 "termination.m"
                            transform_hlds__termination__V_78_78 = parse_tree__prog_data__get_terminates_1_f_0(transform_hlds__termination__Attributes_21);
                          }
#line 184 "termination.m"
                          transform_hlds__termination__succeeded = (transform_hlds__termination__V_78_78 == (MR_Integer) 1);
#line 202 "termination.m"
                          if (transform_hlds__termination__succeeded)
#line 186 "termination.m"
                            {
#line 186 "termination.m"
                              MR_Word transform_hlds__termination__ProcNamePieces_34;
#line 186 "termination.m"
                              MR_Word transform_hlds__termination__Pieces_35;
#line 186 "termination.m"
                              MR_Word transform_hlds__termination__Msg_36;
#line 186 "termination.m"
                              MR_Word transform_hlds__termination__Spec_37;
#line 186 "termination.m"
                              MR_Word transform_hlds__termination__V_80_80;
#line 186 "termination.m"
                              MR_Word transform_hlds__termination__V_81_81;
#line 186 "termination.m"
                              MR_Word transform_hlds__termination__V_85_85;
#line 186 "termination.m"
                              MR_Word transform_hlds__termination__V_98_98;
#line 186 "termination.m"
                              MR_Word transform_hlds__termination__V_99_99;
#line 186 "termination.m"
                              MR_Word transform_hlds__termination__V_103_103;
#line 186 "termination.m"
                              MR_Word transform_hlds__termination__TermStatus_116;
#line 186 "termination.m"
                              MR_Word transform_hlds__termination__TermErr_117;

#line 185 "termination.m"
                              {
#line 185 "termination.m"
                                transform_hlds__termination__TermErr_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 185 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__TermErr_117, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 185 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__TermErr_117, 1) = ((MR_Box) (transform_hlds__termination__Context_30));
#line 185 "termination.m"
                              }
#line 187 "termination.m"
                              {
#line 187 "termination.m"
                                transform_hlds__termination__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 187 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_81_81, 0) = ((MR_Box) (transform_hlds__termination__TermErr_117));
#line 187 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 187 "termination.m"
                              }
#line 187 "termination.m"
                              {
#line 187 "termination.m"
                                transform_hlds__termination__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 187 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_80_80, 0) = ((MR_Box) (transform_hlds__termination__V_81_81));
#line 187 "termination.m"
                              }
#line 187 "termination.m"
                              {
#line 187 "termination.m"
                                transform_hlds__termination__TermStatus_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 187 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__TermStatus_116, 0) = ((MR_Box) (transform_hlds__termination__V_80_80));
#line 187 "termination.m"
                              }
#line 189 "termination.m"
                              {
#line 189 "termination.m"
                                hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(transform_hlds__termination__TermStatus_116, transform_hlds__termination__STATE_VARIABLE_ProcInfo_45_45, &transform_hlds__termination__STATE_VARIABLE_ProcInfo_108_108);
                              }
#line 191 "termination.m"
                              {
#line 191 "termination.m"
                                transform_hlds__termination__ProcNamePieces_34 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2, (MR_Integer) 0, transform_hlds__termination__V_155_155);
                              }
#line 194 "termination.m"
                              {
#line 194 "termination.m"
                                transform_hlds__termination__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 194 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_85_85, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[31])));
#line 194 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_85_85, 1) = ((MR_Box) (transform_hlds__termination__ProcNamePieces_34));
#line 194 "termination.m"
                              }
#line 193 "termination.m"
                              {
#line 193 "termination.m"
                                transform_hlds__termination__Pieces_35 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__termination__V_85_85, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[18]));
                              }
#line 198 "termination.m"
                              {
#line 198 "termination.m"
                                transform_hlds__termination__V_99_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 198 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__V_99_99, 0) = ((MR_Box) (transform_hlds__termination__Pieces_35));
#line 198 "termination.m"
                              }
#line 198 "termination.m"
                              {
#line 198 "termination.m"
                                transform_hlds__termination__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 198 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_98_98, 0) = ((MR_Box) (transform_hlds__termination__V_99_99));
#line 198 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_98_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 198 "termination.m"
                              }
#line 198 "termination.m"
                              {
#line 198 "termination.m"
                                transform_hlds__termination__Msg_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 198 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__Msg_36, 0) = ((MR_Box) (transform_hlds__termination__Context_30));
#line 198 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__Msg_36, 1) = ((MR_Box) (transform_hlds__termination__V_98_98));
#line 198 "termination.m"
                              }
#line 199 "termination.m"
                              {
#line 199 "termination.m"
                                transform_hlds__termination__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 199 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_103_103, 0) = ((MR_Box) (transform_hlds__termination__Msg_36));
#line 199 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_103_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 199 "termination.m"
                              }
#line 199 "termination.m"
                              {
#line 199 "termination.m"
                                transform_hlds__termination__Spec_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 199 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 199 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 199 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_37, 2) = ((MR_Box) (transform_hlds__termination__V_103_103));
#line 199 "termination.m"
                              }
#line 201 "termination.m"
                              {
#line 201 "termination.m"
                                MR_Word base;
#line 201 "termination.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 201 "termination.m"
                                *transform_hlds__termination__HeadVar__5_5 = base;
#line 201 "termination.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__termination__Spec_37));
#line 201 "termination.m"
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__termination__HeadVar__4_4));
#line 201 "termination.m"
                              }
#line 186 "termination.m"
                            }
#line 202 "termination.m"
                          else
#line 203 "termination.m"
                            {
#line 203 "termination.m"
                              transform_hlds__termination__STATE_VARIABLE_ProcInfo_108_108 = transform_hlds__termination__STATE_VARIABLE_ProcInfo_45_45;
#line 203 "termination.m"
                              *transform_hlds__termination__HeadVar__5_5 = transform_hlds__termination__HeadVar__4_4;
#line 203 "termination.m"
                            }
#line 202 "termination.m"
                        }
#line 179 "termination.m"
                    }
#line 234 "termination.m"
                  {
#line 234 "termination.m"
                    hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(transform_hlds__termination__V_155_155, transform_hlds__termination__PredInfo_19, transform_hlds__termination__STATE_VARIABLE_ProcInfo_108_108, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_3);
#line 234 "termination.m"
                    return;
                  }
#line 166 "termination.m"
                }
#line 162 "termination.m"
              }
#line 162 "termination.m"
            else
#line 237 "termination.m"
              {
#line 237 "termination.m"
                *transform_hlds__termination__HeadVar__5_5 = transform_hlds__termination__HeadVar__4_4;
#line 237 "termination.m"
                *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_3 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2;
#line 237 "termination.m"
              }
#line 157 "termination.m"
          }
#line 155 "termination.m"
        else
#line 240 "termination.m"
          {
#line 240 "termination.m"
            *transform_hlds__termination__HeadVar__5_5 = transform_hlds__termination__HeadVar__4_4;
#line 240 "termination.m"
            *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_3 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2;
#line 240 "termination.m"
          }
#line 155 "termination.m"
      }
#line 155 "termination.m"
  }
#line 151 "termination.m"
}

#line 53 "termination.m"
void MR_CALL 
transform_hlds__termination__write_pred_termination_info_4_p_0(
#line 53 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_5,
#line 53 "termination.m"
  MR_Word transform_hlds__termination__PredId_6)
#line 53 "termination.m"
{
#line 911 "termination.m"
  {
#line 911 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 911 "termination.m"
    MR_Word transform_hlds__termination__PredInfo_8;
#line 911 "termination.m"
    MR_Word transform_hlds__termination__ImportStatus_9;
#line 911 "termination.m"
    MR_Word transform_hlds__termination__TypeSpecInfo_10;
#line 911 "termination.m"
    MR_Word transform_hlds__termination__TypeSpecForcePreds_12;
#line 915 "termination.m"
    MR_Word transform_hlds__termination__V_11_11;
#line 915 "termination.m"
    MR_Word transform_hlds__termination__V_13_13;
#line 915 "termination.m"
    MR_Word transform_hlds__termination__V_14_14;
#line 928 "termination.m"
    MR_Word transform_hlds__termination__TypeCtorInfo_25_25;

#line 912 "termination.m"
    {
#line 912 "termination.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__termination__ModuleInfo_5, transform_hlds__termination__PredId_6, &transform_hlds__termination__PredInfo_8);
    }
#line 913 "termination.m"
    {
#line 913 "termination.m"
      hlds__hlds_pred__pred_info_get_import_status_2_p_0(transform_hlds__termination__PredInfo_8, &transform_hlds__termination__ImportStatus_9);
    }
#line 914 "termination.m"
    {
#line 914 "termination.m"
      hlds__hlds_module__module_info_get_type_spec_info_2_p_0(transform_hlds__termination__ModuleInfo_5, &transform_hlds__termination__TypeSpecInfo_10);
    }
#line 915 "termination.m"
    transform_hlds__termination__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__TypeSpecInfo_10, (MR_Integer) 0)));
#line 915 "termination.m"
    transform_hlds__termination__TypeSpecForcePreds_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__TypeSpecInfo_10, (MR_Integer) 1)));
#line 915 "termination.m"
    transform_hlds__termination__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__TypeSpecInfo_10, (MR_Integer) 2)));
#line 915 "termination.m"
    transform_hlds__termination__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__TypeSpecInfo_10, (MR_Integer) 3)));
#line 920 "termination.m"
    if ((transform_hlds__termination__ImportStatus_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 919 "termination.m"
      transform_hlds__termination__succeeded = MR_TRUE;
#line 920 "termination.m"
    else
#line 920 "termination.m"
      if ((transform_hlds__termination__ImportStatus_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 921 "termination.m"
        transform_hlds__termination__succeeded = MR_TRUE;
#line 920 "termination.m"
      else
#line 920 "termination.m"
        transform_hlds__termination__succeeded = MR_FALSE;
#line 922 "termination.m"
    if (transform_hlds__termination__succeeded)
#line 922 "termination.m"
      {
#line 923 "termination.m"
        {
#line 923 "termination.m"
          transform_hlds__termination__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(transform_hlds__termination__PredInfo_8);
        }
#line 923 "termination.m"
        transform_hlds__termination__succeeded = !(transform_hlds__termination__succeeded);
#line 922 "termination.m"
        if (transform_hlds__termination__succeeded)
#line 922 "termination.m"
          {
#line 5254 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_25_25 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 928 "termination.m"
            {
#line 928 "termination.m"
              transform_hlds__termination__succeeded = mercury__set__member_2_p_0(transform_hlds__termination__TypeCtorInfo_25_25, ((MR_Box) (transform_hlds__termination__PredId_6)), transform_hlds__termination__TypeSpecForcePreds_12);
            }
#line 928 "termination.m"
            transform_hlds__termination__succeeded = !(transform_hlds__termination__succeeded);
#line 922 "termination.m"
          }
#line 922 "termination.m"
      }
#line 939 "termination.m"
    if (transform_hlds__termination__succeeded)
#line 930 "termination.m"
      {
#line 930 "termination.m"
        MR_String transform_hlds__termination__PredName_15;
#line 930 "termination.m"
        MR_Word transform_hlds__termination__ProcIds_16;
#line 930 "termination.m"
        MR_Word transform_hlds__termination__PredOrFunc_17;
#line 930 "termination.m"
        MR_Word transform_hlds__termination__ModuleName_18;
#line 930 "termination.m"
        MR_Word transform_hlds__termination__ProcTable_19;
#line 930 "termination.m"
        MR_Word transform_hlds__termination__Context_20;
#line 930 "termination.m"
        MR_Word transform_hlds__termination__SymName_21;

#line 930 "termination.m"
        {
#line 930 "termination.m"
          transform_hlds__termination__PredName_15 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__termination__PredInfo_8);
        }
#line 931 "termination.m"
        {
#line 931 "termination.m"
          transform_hlds__termination__ProcIds_16 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__termination__PredInfo_8);
        }
#line 932 "termination.m"
        {
#line 932 "termination.m"
          transform_hlds__termination__PredOrFunc_17 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__termination__PredInfo_8);
        }
#line 933 "termination.m"
        {
#line 933 "termination.m"
          transform_hlds__termination__ModuleName_18 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__termination__PredInfo_8);
        }
#line 934 "termination.m"
        {
#line 934 "termination.m"
          hlds__hlds_pred__pred_info_get_procedures_2_p_0(transform_hlds__termination__PredInfo_8, &transform_hlds__termination__ProcTable_19);
        }
#line 935 "termination.m"
        {
#line 935 "termination.m"
          hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__termination__PredInfo_8, &transform_hlds__termination__Context_20);
        }
#line 936 "termination.m"
        {
#line 936 "termination.m"
          transform_hlds__termination__SymName_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 936 "termination.m"
          MR_hl_field(MR_mktag(1), transform_hlds__termination__SymName_21, 0) = ((MR_Box) (transform_hlds__termination__ModuleName_18));
#line 936 "termination.m"
          MR_hl_field(MR_mktag(1), transform_hlds__termination__SymName_21, 1) = ((MR_Box) (transform_hlds__termination__PredName_15));
#line 936 "termination.m"
        }
#line 937 "termination.m"
        {
#line 937 "termination.m"
          transform_hlds__termination__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_116_101_114_109_105_110_97_116_105_111_110_95_105_110_102_111_95_95_91_49_93_95_48_8_p_0(transform_hlds__termination__ProcIds_16, transform_hlds__termination__ProcTable_19, transform_hlds__termination__PredOrFunc_17, transform_hlds__termination__SymName_21, transform_hlds__termination__Context_20);
#line 937 "termination.m"
          return;
        }
#line 930 "termination.m"
      }
#line 939 "termination.m"
    else
#line 937 "termination.m"
      {
#line 937 "termination.m"
      }
#line 911 "termination.m"
  }
#line 53 "termination.m"
}

#line 117 "termination.m"
static void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_5_p_0_3(
#line 117 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 117 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1,
#line 117 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_2,
#line 117 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_3,
#line 117 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_4,
#line 117 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_5)
#line 117 "termination.m"
{
#line 117 "termination.m"
  {
#line 117 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;
#line 117 "termination.m"
    MR_Word transform_hlds__termination__conv8_STATE_VARIABLE_ModuleInfo_48;

#line 117 "termination.m"
    {
#line 117 "termination.m"
      transform_hlds__termination__analyse_termination_in_scc_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1), ((MR_Word) transform_hlds__termination__wrapper_arg_2), &transform_hlds__termination__conv8_STATE_VARIABLE_ModuleInfo_48);
    }
#line 117 "termination.m"
    *transform_hlds__termination__wrapper_arg_3 = ((MR_Box) (transform_hlds__termination__conv8_STATE_VARIABLE_ModuleInfo_48));
#line 117 "termination.m"
  }
#line 117 "termination.m"
}

#line 268 "termination.m"
static void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_5_p_0_2(
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

#line 149 "termination.m"
static void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_5_p_0_1(
#line 149 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 149 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1,
#line 149 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_2,
#line 149 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_3,
#line 149 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_4,
#line 149 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_5)
#line 149 "termination.m"
{
#line 149 "termination.m"
  {
#line 149 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;
#line 149 "termination.m"
    MR_Word transform_hlds__termination__conv1_STATE_VARIABLE_ModuleInfo_3;
#line 149 "termination.m"
    MR_Word transform_hlds__termination__conv0_HeadVar__5_5;

#line 149 "termination.m"
    {
#line 149 "termination.m"
      transform_hlds__termination__check_foreign_code_attributes_2_5_p_0(((MR_Word) transform_hlds__termination__wrapper_arg_1), ((MR_Word) transform_hlds__termination__wrapper_arg_2), &transform_hlds__termination__conv1_STATE_VARIABLE_ModuleInfo_3, ((MR_Word) transform_hlds__termination__wrapper_arg_4), &transform_hlds__termination__conv0_HeadVar__5_5);
    }
#line 149 "termination.m"
    *transform_hlds__termination__wrapper_arg_3 = ((MR_Box) (transform_hlds__termination__conv1_STATE_VARIABLE_ModuleInfo_3));
#line 149 "termination.m"
    *transform_hlds__termination__wrapper_arg_5 = ((MR_Box) (transform_hlds__termination__conv0_HeadVar__5_5));
#line 149 "termination.m"
  }
#line 149 "termination.m"
}

#line 46 "termination.m"
void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_5_p_0(
#line 46 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_20,
#line 46 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_21,
#line 46 "termination.m"
  MR_Word * transform_hlds__termination__Specs_7)
#line 46 "termination.m"
{
#line 91 "termination.m"
  {
#line 91 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 91 "termination.m"
    MR_Word transform_hlds__termination__Globals_9;
#line 91 "termination.m"
    MR_Word transform_hlds__termination__TermNorm_10;
#line 91 "termination.m"
    MR_Word transform_hlds__termination__FunctorInfo_11;
#line 91 "termination.m"
    MR_Integer transform_hlds__termination__MaxErrors_12;
#line 91 "termination.m"
    MR_Integer transform_hlds__termination__MaxPaths_13;
#line 91 "termination.m"
    MR_Word transform_hlds__termination__PassInfo_14;
#line 91 "termination.m"
    MR_Word transform_hlds__termination__PredIds_15;
#line 91 "termination.m"
    MR_Word transform_hlds__termination__DepInfo_16;
#line 91 "termination.m"
    MR_Word transform_hlds__termination__SCCs_17;
#line 91 "termination.m"
    MR_Word transform_hlds__termination__Specs1_18;
#line 91 "termination.m"
    MR_Word transform_hlds__termination__MakeOptInt_19;
#line 91 "termination.m"
    MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26;
#line 91 "termination.m"
    MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27_27;
#line 91 "termination.m"
    MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_29_29;
#line 91 "termination.m"
    MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_30_30;
#line 91 "termination.m"
    MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_32_32;
#line 91 "termination.m"
    MR_Word transform_hlds__termination__V_33_33;
#line 149 "termination.m"
    MR_Box transform_hlds__termination__conv3_STATE_VARIABLE_ModuleInfo_30_30;
#line 149 "termination.m"
    MR_Box transform_hlds__termination__conv2_Specs1_18;
#line 268 "termination.m"
    MR_Box transform_hlds__termination__conv7_STATE_VARIABLE_ModuleInfo_32_32;
#line 268 "termination.m"
    MR_Box transform_hlds__termination__conv6_Specs_7;
#line 117 "termination.m"
    MR_Box transform_hlds__termination__conv10_STATE_VARIABLE_ModuleInfo_21;
#line 117 "termination.m"
    MR_Box transform_hlds__termination__conv9_STATE_VARIABLE_IO_35_35;

#line 92 "termination.m"
    {
#line 92 "termination.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_20, &transform_hlds__termination__Globals_9);
    }
#line 93 "termination.m"
    {
#line 93 "termination.m"
      libs__globals__get_termination_norm_2_p_0(transform_hlds__termination__Globals_9, &transform_hlds__termination__TermNorm_10);
    }
#line 94 "termination.m"
    {
#line 94 "termination.m"
      transform_hlds__termination__FunctorInfo_11 = transform_hlds__term_norm__set_functor_info_2_f_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_20, transform_hlds__termination__TermNorm_10);
    }
#line 95 "termination.m"
    {
#line 95 "termination.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__termination__Globals_9, (MR_Integer) 419, &transform_hlds__termination__MaxErrors_12);
    }
#line 96 "termination.m"
    {
#line 96 "termination.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__termination__Globals_9, (MR_Integer) 420, &transform_hlds__termination__MaxPaths_13);
    }
#line 97 "termination.m"
    {
#line 97 "termination.m"
      transform_hlds__termination__PassInfo_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 97 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__PassInfo_14, 0) = ((MR_Box) (transform_hlds__termination__FunctorInfo_11));
#line 97 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__PassInfo_14, 1) = ((MR_Box) (transform_hlds__termination__MaxErrors_12));
#line 97 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__PassInfo_14, 2) = ((MR_Box) (transform_hlds__termination__MaxPaths_13));
#line 97 "termination.m"
    }
#line 101 "termination.m"
    {
#line 101 "termination.m"
      hlds__hlds_module__module_info_get_valid_predids_3_p_0(&transform_hlds__termination__PredIds_15, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_20, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26);
    }
#line 102 "termination.m"
    {
#line 102 "termination.m"
      transform_hlds__termination__check_preds_5_p_0(transform_hlds__termination__PredIds_15, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27_27);
    }
#line 105 "termination.m"
    {
#line 105 "termination.m"
      transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27_27, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_29_29);
    }
#line 106 "termination.m"
    {
#line 106 "termination.m"
      hlds__hlds_module__module_info_dependency_info_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_29_29, &transform_hlds__termination__DepInfo_16);
    }
#line 107 "termination.m"
    {
#line 107 "termination.m"
      hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__termination__DepInfo_16, &transform_hlds__termination__SCCs_17);
    }
#line 149 "termination.m"
    {
#line 149 "termination.m"
      mercury__list__foldl2_6_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__termination_scalar_common_1[1], (MR_Word) &transform_hlds__termination_scalar_common_2[1], transform_hlds__termination__SCCs_17, ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_29_29)), &transform_hlds__termination__conv3_STATE_VARIABLE_ModuleInfo_30_30, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__termination__conv2_Specs1_18);
    }
#line 149 "termination.m"
    transform_hlds__termination__STATE_VARIABLE_ModuleInfo_30_30 = ((MR_Word) transform_hlds__termination__conv3_STATE_VARIABLE_ModuleInfo_30_30);
#line 149 "termination.m"
    transform_hlds__termination__Specs1_18 = ((MR_Word) transform_hlds__termination__conv2_Specs1_18);
#line 268 "termination.m"
    {
#line 268 "termination.m"
      mercury__list__foldl2_6_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__termination_scalar_common_1[1], (MR_Word) &transform_hlds__termination_scalar_common_2[2], transform_hlds__termination__SCCs_17, ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_30_30)), &transform_hlds__termination__conv7_STATE_VARIABLE_ModuleInfo_32_32, ((MR_Box) (transform_hlds__termination__Specs1_18)), &transform_hlds__termination__conv6_Specs_7);
    }
#line 268 "termination.m"
    transform_hlds__termination__STATE_VARIABLE_ModuleInfo_32_32 = ((MR_Word) transform_hlds__termination__conv7_STATE_VARIABLE_ModuleInfo_32_32);
#line 268 "termination.m"
    *transform_hlds__termination__Specs_7 = ((MR_Word) transform_hlds__termination__conv6_Specs_7);
#line 117 "termination.m"
    {
#line 117 "termination.m"
      transform_hlds__termination__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 117 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_33_33, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_4[0]));
#line 117 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_33_33, 1) = ((MR_Box) (transform_hlds__termination__analyse_termination_in_module_5_p_0_3));
#line 117 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 117 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_33_33, 3) = ((MR_Box) (transform_hlds__termination__PassInfo_14));
#line 117 "termination.m"
    }
#line 117 "termination.m"
    {
#line 117 "termination.m"
      mercury__list__foldl2_6_p_2((MR_Word) &transform_hlds__termination_scalar_common_1[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__termination__V_33_33, transform_hlds__termination__SCCs_17, ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_32_32)), &transform_hlds__termination__conv10_STATE_VARIABLE_ModuleInfo_21, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__termination__conv9_STATE_VARIABLE_IO_35_35);
    }
#line 117 "termination.m"
    *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_21 = ((MR_Word) transform_hlds__termination__conv10_STATE_VARIABLE_ModuleInfo_21);
#line 120 "termination.m"
    {
#line 120 "termination.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__termination__Globals_9, (MR_Integer) 85, &transform_hlds__termination__MakeOptInt_19);
    }
#line 125 "termination.m"
    if ((transform_hlds__termination__MakeOptInt_19 == (MR_Integer) 0))
#line 126 "termination.m"
      {
#line 126 "termination.m"
      }
#line 125 "termination.m"
    else
#line 124 "termination.m"
      {
#line 124 "termination.m"
        transform_hlds__termination__make_termination_opt_int_4_p_0(transform_hlds__termination__PredIds_15, *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_21);
      }
#line 128 "termination.m"
    {
#line 128 "termination.m"
      transform_hlds__post_term_analysis__run_post_term_analysis_3_p_0(*transform_hlds__termination__STATE_VARIABLE_ModuleInfo_21);
#line 128 "termination.m"
      return;
    }
#line 91 "termination.m"
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
