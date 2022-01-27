/*
** Automatically generated from `termination.m'
** by the Mercury compiler,
** version rotd-2014-09-01
** configured for x86_64-apple-darwin13.3.0.
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




#line 140 "transform_hlds.termination.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__termination__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 143 "transform_hlds.termination.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__termination__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 944 "termination.m"
static void MR_CALL 
transform_hlds__termination__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_116_101_114_109_105_110_97_116_105_111_110_95_105_110_102_111_95_95_91_49_93_95_48_8_p_0(
#line 944 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_2,
#line 944 "termination.m"
  MR_Word transform_hlds__termination__ProcTable_3,
#line 944 "termination.m"
  MR_Word transform_hlds__termination__PredOrFunc_4,
#line 944 "termination.m"
  MR_Word transform_hlds__termination__SymName_5,
#line 944 "termination.m"
  MR_Word transform_hlds__termination__Context_6);

#line 545 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__545__1_1_p_0(
#line 545 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_49);

#line 518 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__518__1_2_p_0(
#line 518 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35,
#line 518 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_47);

#line 502 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__502__1_2_p_0(
#line 502 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35,
#line 502 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_41);

#line 395 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__395__1_1_p_0(
#line 395 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_59);

#line 361 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__361__1_2_p_0(
#line 361 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47,
#line 361 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_51);

#line 309 "termination.m"
static MR_Word MR_CALL 
transform_hlds__termination__IntroducedFrom__func__check_scc_pragmas_are_consistent__309__1_1_f_0(
#line 309 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_41);

#line 899 "termination.m"
static void MR_CALL 
transform_hlds__termination__make_termination_opt_int_4_p_0_1(
#line 899 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 899 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1,
#line 899 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_2,
#line 899 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_3);

#line 880 "termination.m"
static void MR_CALL 
transform_hlds__termination__make_termination_opt_int_4_p_0(
#line 880 "termination.m"
  MR_Word transform_hlds__termination__PredIds_5,
#line 880 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_6);

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

#line 601 "termination.m"
static void MR_CALL 
transform_hlds__termination__check_preds_5_p_0(
#line 601 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 601 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2,
#line 601 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_3);

#line 574 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__is_solver_init_wrapper_pred_2_p_0(
#line 574 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_3,
#line 574 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_2);

#line 545 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__report_termination_errors_6_p_0_4(
#line 545 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 545 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 530 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__report_termination_errors_6_p_0_3(
#line 530 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 530 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 518 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__report_termination_errors_6_p_0_2(
#line 518 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 518 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 502 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__report_termination_errors_6_p_0_1(
#line 502 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 502 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 492 "termination.m"
static void MR_CALL 
transform_hlds__termination__report_termination_errors_6_p_0(
#line 492 "termination.m"
  MR_Word transform_hlds__termination__SCC_7,
#line 492 "termination.m"
  MR_Word transform_hlds__termination__Errors_8,
#line 492 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35,
#line 492 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_36);

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

#line 357 "termination.m"
static void MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0(
#line 357 "termination.m"
  MR_Word transform_hlds__termination__PassInfo_7,
#line 357 "termination.m"
  MR_Word transform_hlds__termination__SCC_8,
#line 357 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47,
#line 357 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_48);

#line 326 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__check_procs_known_term_3_p_0(
#line 326 "termination.m"
  MR_Word transform_hlds__termination__Status_1,
#line 326 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_2,
#line 326 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_3);

#line 309 "termination.m"
static MR_Box MR_CALL 
transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0_2(
#line 309 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 309 "termination.m"
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

#line 269 "termination.m"
static void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_5_p_0_2(
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

static /* final */ const MR_Box transform_hlds__termination_scalar_common_2[4][1];

static /* final */ const MR_Box transform_hlds__termination_scalar_common_3[6][3];

static /* final */ const MR_Box transform_hlds__termination_scalar_common_4[1][8];

static /* final */ const MR_Box transform_hlds__termination_scalar_common_5[1][9];

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
    ((MR_Box) ((MR_String) "foreign code attribute set."))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &transform_hlds__termination_scalar_common_2[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[6])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration but also has the"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 12)),
    ((MR_Box) ((MR_String) "does_not_terminate"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "has a"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[11])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &transform_hlds__termination_scalar_common_2[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[6])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[14])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 12)),
    ((MR_Box) ((MR_String) "terminates"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[15])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[17])))
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
    ((MR_Box) (&transform_hlds__termination_scalar_common_3[0]))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Warning:"))
  },
};

static /* final */ const MR_Box transform_hlds__termination_scalar_common_2[4][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "terminates"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "does_not_terminate"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&transform_hlds__termination_scalar_common_2[2]))
  },
};

static /* final */ const MR_Box transform_hlds__termination_scalar_common_3[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_generic_termination_info_2)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&transform_hlds__termination_scalar_common_1[4]))
  },
  /* row 1 */
  {
    ((MR_Box) (&transform_hlds__termination_scalar_common_4[0])),
    ((MR_Box) (transform_hlds__termination__analyse_termination_in_module_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__termination_scalar_common_4[0])),
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

static /* final */ const MR_Box transform_hlds__termination_scalar_common_4[1][8] = {
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

static /* final */ const MR_Box transform_hlds__termination_scalar_common_5[1][9] = {
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



#line 843 "transform_hlds.termination.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__termination__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 851 "transform_hlds.termination.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__termination__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 944 "termination.m"
static void MR_CALL 
transform_hlds__termination__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_116_101_114_109_105_110_97_116_105_111_110_95_105_110_102_111_95_95_91_49_93_95_48_8_p_0(
#line 944 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_2,
#line 944 "termination.m"
  MR_Word transform_hlds__termination__ProcTable_3,
#line 944 "termination.m"
  MR_Word transform_hlds__termination__PredOrFunc_4,
#line 944 "termination.m"
  MR_Word transform_hlds__termination__SymName_5,
#line 944 "termination.m"
  MR_Word transform_hlds__termination__Context_6)
#line 944 "termination.m"
{
#line 948 "termination.m"
  while (MR_TRUE)
#line 948 "termination.m"
    {
#line 948 "termination.m"
      /* tailcall optimized into a loop */
#line 948 "termination.m"
      {
#line 948 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 948 "termination.m"
        if ((transform_hlds__termination__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 948 "termination.m"
          {
#line 948 "termination.m"
          }
#line 948 "termination.m"
        else
#line 950 "termination.m"
          {
#line 950 "termination.m"
            MR_Integer transform_hlds__termination__ProcId_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__2_2, (MR_Integer) 0)));
#line 950 "termination.m"
            MR_Word transform_hlds__termination__ProcIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__2_2, (MR_Integer) 1)));
#line 950 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo_25;
#line 950 "termination.m"
            MR_Word transform_hlds__termination__ArgSize_26;
#line 950 "termination.m"
            MR_Word transform_hlds__termination__Termination_27;
#line 950 "termination.m"
            MR_Word transform_hlds__termination__ModeList_28;
#line 951 "termination.m"
            MR_Box transform_hlds__termination__conv0_ProcInfo_25;

#line 951 "termination.m"
            {
#line 951 "termination.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__termination__ProcTable_3, ((MR_Box) (transform_hlds__termination__ProcId_18)), &transform_hlds__termination__conv0_ProcInfo_25);
            }
#line 951 "termination.m"
            transform_hlds__termination__ProcInfo_25 = ((MR_Word) transform_hlds__termination__conv0_ProcInfo_25);
#line 952 "termination.m"
            {
#line 952 "termination.m"
              hlds__hlds_pred__proc_info_get_maybe_arg_size_info_2_p_0(transform_hlds__termination__ProcInfo_25, &transform_hlds__termination__ArgSize_26);
            }
#line 953 "termination.m"
            {
#line 953 "termination.m"
              hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__termination__ProcInfo_25, &transform_hlds__termination__Termination_27);
            }
#line 954 "termination.m"
            {
#line 954 "termination.m"
              hlds__hlds_pred__proc_info_declared_argmodes_2_p_0(transform_hlds__termination__ProcInfo_25, &transform_hlds__termination__ModeList_28);
            }
#line 955 "termination.m"
            {
#line 955 "termination.m"
              parse_tree__mercury_to_mercury__write_pragma_termination_info_components_8_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[4], (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, transform_hlds__termination__PredOrFunc_4, transform_hlds__termination__SymName_5, transform_hlds__termination__ModeList_28, transform_hlds__termination__ArgSize_26, transform_hlds__termination__Termination_27, transform_hlds__termination__Context_6);
            }
#line 957 "termination.m"
            /* direct tailcall eliminated */
#line 957 "termination.m"
            {
#line 957 "termination.m"
              MR_Word transform_hlds__termination__HeadVar__2__tmp_copy_2 = transform_hlds__termination__ProcIds_19;

#line 957 "termination.m"
              transform_hlds__termination__HeadVar__2_2 = transform_hlds__termination__HeadVar__2__tmp_copy_2;
#line 957 "termination.m"
            }
#line 957 "termination.m"
            continue;
#line 950 "termination.m"
          }
#line 948 "termination.m"
      }
#line 948 "termination.m"
      break;
#line 948 "termination.m"
    }
#line 944 "termination.m"
}

#line 545 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__545__1_1_p_0(
#line 545 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_49)
#line 545 "termination.m"
{
#line 545 "termination.m"
  {
#line 545 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 545 "termination.m"
    MR_Word transform_hlds__termination__Error_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__HeadVar__1_49, (MR_Integer) 0)));
#line 545 "termination.m"
    MR_Word transform_hlds__termination__V_50_50;
#line 546 "termination.m"
    MR_Word transform_hlds__termination___Context_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__HeadVar__1_49, (MR_Integer) 1)));

#line 547 "termination.m"
    {
#line 547 "termination.m"
      transform_hlds__termination__V_50_50 = transform_hlds__term_errors__is_indirect_error_1_f_0(transform_hlds__termination__Error_30);
    }
#line 547 "termination.m"
    transform_hlds__termination__succeeded = (transform_hlds__termination__V_50_50 == (MR_Integer) 0);
#line 545 "termination.m"
    return transform_hlds__termination__succeeded;
#line 545 "termination.m"
  }
#line 545 "termination.m"
}

#line 518 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__518__1_2_p_0(
#line 518 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35,
#line 518 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_47)
#line 518 "termination.m"
{
#line 518 "termination.m"
  {
#line 518 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 518 "termination.m"
    MR_Word transform_hlds__termination__PredInfo_54;
#line 519 "termination.m"
    MR_Word transform_hlds__termination__V_23_23;

#line 519 "termination.m"
    {
#line 519 "termination.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35, transform_hlds__termination__HeadVar__2_47, &transform_hlds__termination__PredInfo_54, &transform_hlds__termination__V_23_23);
    }
#line 520 "termination.m"
    {
#line 520 "termination.m"
      transform_hlds__termination__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(transform_hlds__termination__PredInfo_54);
    }
#line 520 "termination.m"
    transform_hlds__termination__succeeded = !(transform_hlds__termination__succeeded);
#line 518 "termination.m"
    return transform_hlds__termination__succeeded;
#line 518 "termination.m"
  }
#line 518 "termination.m"
}

#line 502 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__502__1_2_p_0(
#line 502 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35,
#line 502 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_41)
#line 502 "termination.m"
{
#line 502 "termination.m"
  {
#line 502 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 502 "termination.m"
    MR_Word transform_hlds__termination__PredInfo_16;
#line 502 "termination.m"
    MR_Word transform_hlds__termination__Markers_18;
#line 502 "termination.m"
    MR_Word transform_hlds__termination__V_42_42;
#line 503 "termination.m"
    MR_Word transform_hlds__termination__V_17_17;

#line 503 "termination.m"
    {
#line 503 "termination.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35, transform_hlds__termination__HeadVar__2_41, &transform_hlds__termination__PredInfo_16, &transform_hlds__termination__V_17_17);
    }
#line 504 "termination.m"
    {
#line 504 "termination.m"
      transform_hlds__termination__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(transform_hlds__termination__PredInfo_16);
    }
#line 504 "termination.m"
    transform_hlds__termination__succeeded = !(transform_hlds__termination__succeeded);
#line 502 "termination.m"
    if (transform_hlds__termination__succeeded)
#line 502 "termination.m"
      {
#line 505 "termination.m"
        {
#line 505 "termination.m"
          hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__termination__PredInfo_16, &transform_hlds__termination__Markers_18);
        }
#line 506 "termination.m"
        transform_hlds__termination__V_42_42 = (MR_Integer) 19;
#line 506 "termination.m"
        {
#line 506 "termination.m"
          return transform_hlds__termination__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__termination__Markers_18, transform_hlds__termination__V_42_42);
        }
#line 502 "termination.m"
      }
#line 502 "termination.m"
    return transform_hlds__termination__succeeded;
#line 502 "termination.m"
  }
#line 502 "termination.m"
}

#line 395 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__395__1_1_p_0(
#line 395 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_59)
#line 395 "termination.m"
{
#line 395 "termination.m"
  {
#line 395 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 395 "termination.m"
    MR_Word transform_hlds__termination__Error_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__HeadVar__1_59, (MR_Integer) 0)));
#line 395 "termination.m"
    MR_Word transform_hlds__termination__V_60_60;
#line 396 "termination.m"
    MR_Word transform_hlds__termination__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__HeadVar__1_59, (MR_Integer) 1)));

#line 397 "termination.m"
    {
#line 397 "termination.m"
      transform_hlds__termination__V_60_60 = transform_hlds__term_errors__is_fatal_error_1_f_0(transform_hlds__termination__Error_32);
    }
#line 397 "termination.m"
    transform_hlds__termination__succeeded = (transform_hlds__termination__V_60_60 == (MR_Integer) 1);
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
  MR_Word transform_hlds__termination__HeadVar__2_51)
#line 361 "termination.m"
{
#line 361 "termination.m"
  {
#line 361 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 361 "termination.m"
    MR_Word transform_hlds__termination__ProcInfo_14;
#line 361 "termination.m"
    MR_Word transform_hlds__termination__V_72_72;
#line 362 "termination.m"
    MR_Word transform_hlds__termination__V_13_13;
#line 363 "termination.m"
    MR_Word transform_hlds__termination__V_77_77;

#line 362 "termination.m"
    {
#line 362 "termination.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47, transform_hlds__termination__HeadVar__2_51, &transform_hlds__termination__V_13_13, &transform_hlds__termination__ProcInfo_14);
    }
#line 363 "termination.m"
    {
#line 363 "termination.m"
      hlds__hlds_pred__proc_info_get_maybe_arg_size_info_2_p_0(transform_hlds__termination__ProcInfo_14, &transform_hlds__termination__V_72_72);
    }
#line 363 "termination.m"
    transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__V_72_72)) == (MR_mktag((MR_Integer) 1)));
#line 363 "termination.m"
    if (transform_hlds__termination__succeeded)
#line 363 "termination.m"
      transform_hlds__termination__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__V_72_72, (MR_Integer) 0)));
#line 361 "termination.m"
    return transform_hlds__termination__succeeded;
#line 361 "termination.m"
  }
#line 361 "termination.m"
}

#line 309 "termination.m"
static MR_Word MR_CALL 
transform_hlds__termination__IntroducedFrom__func__check_scc_pragmas_are_consistent__309__1_1_f_0(
#line 309 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_41)
#line 309 "termination.m"
{
#line 309 "termination.m"
  {
#line 309 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 309 "termination.m"
    MR_Word transform_hlds__termination__HeadVar__2_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__HeadVar__1_41, (MR_Integer) 0)));
#line 309 "termination.m"
    MR_Integer transform_hlds__termination__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__HeadVar__1_41, (MR_Integer) 1)));

#line 309 "termination.m"
    return transform_hlds__termination__HeadVar__2_42;
#line 309 "termination.m"
  }
#line 309 "termination.m"
}

#line 899 "termination.m"
static void MR_CALL 
transform_hlds__termination__make_termination_opt_int_4_p_0_1(
#line 899 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 899 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1,
#line 899 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_2,
#line 899 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_3)
#line 899 "termination.m"
{
#line 899 "termination.m"
  {
#line 899 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

#line 899 "termination.m"
    {
#line 899 "termination.m"
      transform_hlds__termination__write_pred_termination_info_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1));
#line 899 "termination.m"
      return;
    }
#line 899 "termination.m"
  }
#line 899 "termination.m"
}

#line 880 "termination.m"
static void MR_CALL 
transform_hlds__termination__make_termination_opt_int_4_p_0(
#line 880 "termination.m"
  MR_Word transform_hlds__termination__PredIds_5,
#line 880 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_6)
#line 880 "termination.m"
{
#line 883 "termination.m"
  {
#line 883 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 883 "termination.m"
    MR_Word transform_hlds__termination__Globals_8;
#line 883 "termination.m"
    MR_Word transform_hlds__termination__ModuleName_9;
#line 883 "termination.m"
    MR_String transform_hlds__termination__OptFileName_10;
#line 883 "termination.m"
    MR_Word transform_hlds__termination__Verbose_11;
#line 883 "termination.m"
    MR_Word transform_hlds__termination__OptFileRes_12;

#line 884 "termination.m"
    {
#line 884 "termination.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__termination__ModuleInfo_6, &transform_hlds__termination__Globals_8);
    }
#line 885 "termination.m"
    {
#line 885 "termination.m"
      hlds__hlds_module__module_info_get_name_2_p_0(transform_hlds__termination__ModuleInfo_6, &transform_hlds__termination__ModuleName_9);
    }
#line 886 "termination.m"
    {
#line 886 "termination.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(transform_hlds__termination__Globals_8, transform_hlds__termination__ModuleName_9, (MR_String) ".opt.tmp", (MR_Integer) 1, &transform_hlds__termination__OptFileName_10);
    }
#line 888 "termination.m"
    {
#line 888 "termination.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__termination__Globals_8, (MR_Integer) 44, &transform_hlds__termination__Verbose_11);
    }
#line 889 "termination.m"
    {
#line 889 "termination.m"
      libs__file_util__maybe_write_string_4_p_0(transform_hlds__termination__Verbose_11, (MR_String) "% Appending termination_info pragmas to \140");
    }
#line 891 "termination.m"
    {
#line 891 "termination.m"
      libs__file_util__maybe_write_string_4_p_0(transform_hlds__termination__Verbose_11, transform_hlds__termination__OptFileName_10);
    }
#line 892 "termination.m"
    {
#line 892 "termination.m"
      libs__file_util__maybe_write_string_4_p_0(transform_hlds__termination__Verbose_11, (MR_String) "\'...");
    }
#line 893 "termination.m"
    {
#line 893 "termination.m"
      libs__file_util__maybe_flush_output_3_p_0(transform_hlds__termination__Verbose_11);
    }
#line 895 "termination.m"
    {
#line 895 "termination.m"
      mercury__io__open_append_4_p_0(transform_hlds__termination__OptFileName_10, &transform_hlds__termination__OptFileRes_12);
    }
#line 903 "termination.m"
    if (((MR_tag((MR_Word) transform_hlds__termination__OptFileRes_12)) == (MR_mktag((MR_Integer) 1))))
#line 904 "termination.m"
      {
#line 904 "termination.m"
        MR_Word transform_hlds__termination__IOError_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__OptFileRes_12, (MR_Integer) 0)));
#line 904 "termination.m"
        MR_String transform_hlds__termination__IOErrorMessage_17;
#line 904 "termination.m"
        MR_Word transform_hlds__termination__V_33_33;
#line 904 "termination.m"
        MR_Word transform_hlds__termination__V_36_36;
#line 904 "termination.m"
        MR_Word transform_hlds__termination__V_37_37;
#line 904 "termination.m"
        MR_Word transform_hlds__termination__V_39_39;

#line 905 "termination.m"
        {
#line 905 "termination.m"
          libs__file_util__maybe_write_string_4_p_0(transform_hlds__termination__Verbose_11, (MR_String) " failed!\n");
        }
#line 906 "termination.m"
        {
#line 906 "termination.m"
          mercury__io__error_message_2_p_0(transform_hlds__termination__IOError_16, &transform_hlds__termination__IOErrorMessage_17);
        }
#line 908 "termination.m"
        {
#line 908 "termination.m"
          transform_hlds__termination__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 908 "termination.m"
          MR_hl_field(MR_mktag(1), transform_hlds__termination__V_39_39, 0) = ((MR_Box) (transform_hlds__termination__IOErrorMessage_17));
#line 908 "termination.m"
          MR_hl_field(MR_mktag(1), transform_hlds__termination__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 908 "termination.m"
        }
#line 908 "termination.m"
        {
#line 908 "termination.m"
          transform_hlds__termination__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 908 "termination.m"
          MR_hl_field(MR_mktag(1), transform_hlds__termination__V_37_37, 0) = ((MR_Box) ((MR_String) "\' for output: "));
#line 908 "termination.m"
          MR_hl_field(MR_mktag(1), transform_hlds__termination__V_37_37, 1) = ((MR_Box) (transform_hlds__termination__V_39_39));
#line 908 "termination.m"
        }
#line 908 "termination.m"
        {
#line 908 "termination.m"
          transform_hlds__termination__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 908 "termination.m"
          MR_hl_field(MR_mktag(1), transform_hlds__termination__V_36_36, 0) = ((MR_Box) (transform_hlds__termination__OptFileName_10));
#line 908 "termination.m"
          MR_hl_field(MR_mktag(1), transform_hlds__termination__V_36_36, 1) = ((MR_Box) (transform_hlds__termination__V_37_37));
#line 908 "termination.m"
        }
#line 907 "termination.m"
        {
#line 907 "termination.m"
          transform_hlds__termination__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 907 "termination.m"
          MR_hl_field(MR_mktag(1), transform_hlds__termination__V_33_33, 0) = ((MR_Box) ((MR_String) "Error opening file \140"));
#line 907 "termination.m"
          MR_hl_field(MR_mktag(1), transform_hlds__termination__V_33_33, 1) = ((MR_Box) (transform_hlds__termination__V_36_36));
#line 907 "termination.m"
        }
#line 907 "termination.m"
        {
#line 907 "termination.m"
          mercury__io__write_strings_3_p_0(transform_hlds__termination__V_33_33);
        }
#line 909 "termination.m"
        {
#line 909 "termination.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 909 "termination.m"
          return;
        }
#line 904 "termination.m"
      }
#line 903 "termination.m"
    else
#line 897 "termination.m"
      {
#line 897 "termination.m"
        MR_Word transform_hlds__termination__OptFile_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__OptFileRes_12, (MR_Integer) 0)));
#line 897 "termination.m"
        MR_Word transform_hlds__termination__OldStream_14;
#line 897 "termination.m"
        MR_Word transform_hlds__termination__V_44_44;
#line 899 "termination.m"
        MR_Box transform_hlds__termination__conv0_STATE_VARIABLE_IO_45_45;
#line 900 "termination.m"
        MR_Word transform_hlds__termination__V_15_15;

#line 898 "termination.m"
        {
#line 898 "termination.m"
          mercury__io__set_output_stream_4_p_0(transform_hlds__termination__OptFile_13, &transform_hlds__termination__OldStream_14);
        }
#line 899 "termination.m"
        {
#line 899 "termination.m"
          transform_hlds__termination__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 899 "termination.m"
          MR_hl_field(MR_mktag(0), transform_hlds__termination__V_44_44, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_8[0]));
#line 899 "termination.m"
          MR_hl_field(MR_mktag(0), transform_hlds__termination__V_44_44, 1) = ((MR_Box) (transform_hlds__termination__make_termination_opt_int_4_p_0_1));
#line 899 "termination.m"
          MR_hl_field(MR_mktag(0), transform_hlds__termination__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 899 "termination.m"
          MR_hl_field(MR_mktag(0), transform_hlds__termination__V_44_44, 3) = ((MR_Box) (transform_hlds__termination__ModuleInfo_6));
#line 899 "termination.m"
        }
#line 899 "termination.m"
        {
#line 899 "termination.m"
          mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__termination__V_44_44, transform_hlds__termination__PredIds_5, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__termination__conv0_STATE_VARIABLE_IO_45_45);
        }
#line 900 "termination.m"
        {
#line 900 "termination.m"
          mercury__io__set_output_stream_4_p_0(transform_hlds__termination__OldStream_14, &transform_hlds__termination__V_15_15);
        }
#line 901 "termination.m"
        {
#line 901 "termination.m"
          mercury__io__close_output_3_p_0(transform_hlds__termination__OptFile_13);
        }
#line 902 "termination.m"
        {
#line 902 "termination.m"
          libs__file_util__maybe_write_string_4_p_0(transform_hlds__termination__Verbose_11, (MR_String) " done.\n");
#line 902 "termination.m"
          return;
        }
#line 897 "termination.m"
      }
#line 883 "termination.m"
  }
#line 880 "termination.m"
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
            MR_Word transform_hlds__termination__TypeCtorInfo_24_24 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
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
              mercury__map__lookup_3_p_0(transform_hlds__termination__TypeCtorInfo_24_24, transform_hlds__termination__TypeCtorInfo_25_25, transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4, ((MR_Box) (transform_hlds__termination__ProcId_11)), &transform_hlds__termination__conv0_ProcInfo0_16);
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
                  transform_hlds__termination__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[30], ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (transform_hlds__termination__V_26_26)));
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
                  mercury__map__det_update_4_p_0(transform_hlds__termination__TypeCtorInfo_24_24, transform_hlds__termination__TypeCtorInfo_25_25, ((MR_Box) (transform_hlds__termination__ProcId_11)), ((MR_Box) (transform_hlds__termination__ProcInfo_17)), transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4, &transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22);
                }
#line 868 "termination.m"
              }
#line 870 "termination.m"
            else
#line 869 "termination.m"
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
            MR_Word transform_hlds__termination__TypeCtorInfo_24_24 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
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
              mercury__map__lookup_3_p_0(transform_hlds__termination__TypeCtorInfo_24_24, transform_hlds__termination__TypeCtorInfo_25_25, transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4, ((MR_Box) (transform_hlds__termination__ProcId_11)), &transform_hlds__termination__conv0_ProcInfo0_16);
            }
#line 826 "termination.m"
            transform_hlds__termination__ProcInfo0_16 = ((MR_Word) transform_hlds__termination__conv0_ProcInfo0_16);
#line 829 "termination.m"
            transform_hlds__termination__succeeded = (transform_hlds__termination__Override_2 == (MR_Integer) 1);
#line 830 "termination.m"
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
                  transform_hlds__termination__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[29], ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (transform_hlds__termination__V_26_26)));
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
                  mercury__map__det_update_4_p_0(transform_hlds__termination__TypeCtorInfo_24_24, transform_hlds__termination__TypeCtorInfo_25_25, ((MR_Box) (transform_hlds__termination__ProcId_11)), ((MR_Box) (transform_hlds__termination__ProcInfo_17)), transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4, &transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22);
                }
#line 834 "termination.m"
              }
#line 836 "termination.m"
            else
#line 835 "termination.m"
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
            MR_Word transform_hlds__termination__TypeCtorInfo_41_41 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
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
              mercury__map__lookup_3_p_0(transform_hlds__termination__TypeCtorInfo_41_41, transform_hlds__termination__TypeCtorInfo_42_42, transform_hlds__termination__STATE_VARIABLE_ProcTable_0_5, ((MR_Box) (transform_hlds__termination__ProcId_13)), &transform_hlds__termination__conv0_ProcInfo0_19);
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
                  MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeError_25, 0) = ((MR_Box) (transform_hlds__termination__Error_24));
#line 797 "termination.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeError_25, 1) = ((MR_Box) (transform_hlds__termination__Context_23));
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
              hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_2[3]), transform_hlds__termination__ProcInfo1_26, &transform_hlds__termination__ProcInfo_27);
            }
#line 804 "termination.m"
            {
#line 804 "termination.m"
              mercury__map__det_update_4_p_0(transform_hlds__termination__TypeCtorInfo_41_41, transform_hlds__termination__TypeCtorInfo_42_42, ((MR_Box) (transform_hlds__termination__ProcId_13)), ((MR_Box) (transform_hlds__termination__ProcInfo_27)), transform_hlds__termination__STATE_VARIABLE_ProcTable_0_5, &transform_hlds__termination__STATE_VARIABLE_ProcTable_39_39);
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
            if ((transform_hlds__termination__SpecialPredId_2 == (MR_Integer) 3))
#line 742 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ProcTable_23_23 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0_3;
#line 741 "termination.m"
            else
#line 732 "termination.m"
              {
#line 732 "termination.m"
                MR_Word transform_hlds__termination__TypeCtorInfo_25_25 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
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
                  mercury__map__lookup_3_p_0(transform_hlds__termination__TypeCtorInfo_25_25, transform_hlds__termination__TypeCtorInfo_26_26, transform_hlds__termination__STATE_VARIABLE_ProcTable_0_3, ((MR_Box) (transform_hlds__termination__ProcId_9)), &transform_hlds__termination__conv0_ProcInfo0_13);
                }
#line 733 "termination.m"
                transform_hlds__termination__ProcInfo0_13 = ((MR_Word) transform_hlds__termination__conv0_ProcInfo0_13);
#line 734 "termination.m"
                {
#line 734 "termination.m"
                  hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__termination__ProcInfo0_13, &transform_hlds__termination__HeadVars_14);
                }
#line 758 "termination.m"
                if ((transform_hlds__termination__SpecialPredId_2 == (MR_Integer) 2))
#line 758 "termination.m"
                  {
#line 758 "termination.m"
                    MR_Word transform_hlds__termination__OutList_31;

#line 759 "termination.m"
                    {
#line 759 "termination.m"
                      transform_hlds__term_util__make_bool_list_3_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[3], transform_hlds__termination__HeadVars_14, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[26]), &transform_hlds__termination__OutList_31);
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
                    transform_hlds__termination__Termination_16 = (MR_Word) &transform_hlds__termination_scalar_common_2[2];
#line 758 "termination.m"
                  }
#line 758 "termination.m"
                else
#line 758 "termination.m"
                  if ((transform_hlds__termination__SpecialPredId_2 == (MR_Integer) 1))
#line 768 "termination.m"
                    {
#line 768 "termination.m"
                      MR_Word transform_hlds__termination__OutList_59;

#line 769 "termination.m"
                      {
#line 769 "termination.m"
                        transform_hlds__term_util__make_bool_list_3_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[3], transform_hlds__termination__HeadVars_14, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[25]), &transform_hlds__termination__OutList_59);
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
                      transform_hlds__termination__Termination_16 = (MR_Word) &transform_hlds__termination_scalar_common_2[2];
#line 768 "termination.m"
                    }
#line 758 "termination.m"
                  else
#line 763 "termination.m"
                    {
#line 763 "termination.m"
                      MR_Word transform_hlds__termination__OutList_58;

#line 764 "termination.m"
                      {
#line 764 "termination.m"
                        transform_hlds__term_util__make_bool_list_3_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[3], transform_hlds__termination__HeadVars_14, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[28]), &transform_hlds__termination__OutList_58);
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
                      transform_hlds__termination__Termination_16 = (MR_Word) &transform_hlds__termination_scalar_common_2[2];
#line 763 "termination.m"
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
                  mercury__map__det_update_4_p_0(transform_hlds__termination__TypeCtorInfo_25_25, transform_hlds__termination__TypeCtorInfo_26_26, ((MR_Box) (transform_hlds__termination__ProcId_9)), ((MR_Box) (transform_hlds__termination__ProcInfo_18)), transform_hlds__termination__STATE_VARIABLE_ProcTable_0_3, &transform_hlds__termination__STATE_VARIABLE_ProcTable_23_23);
                }
#line 732 "termination.m"
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

#line 601 "termination.m"
static void MR_CALL 
transform_hlds__termination__check_preds_5_p_0(
#line 601 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 601 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2,
#line 601 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_3)
#line 601 "termination.m"
{
#line 604 "termination.m"
  while (MR_TRUE)
#line 604 "termination.m"
    {
#line 604 "termination.m"
      /* tailcall optimized into a loop */
#line 604 "termination.m"
      {
#line 604 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 604 "termination.m"
        if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 604 "termination.m"
          *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_3 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2;
#line 604 "termination.m"
        else
#line 605 "termination.m"
          {
#line 605 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_71_71;
#line 605 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_72_72;
#line 605 "termination.m"
            MR_Word transform_hlds__termination__PredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));
#line 605 "termination.m"
            MR_Word transform_hlds__termination__PredIds_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
#line 605 "termination.m"
            MR_Word transform_hlds__termination__Globals_16;
#line 605 "termination.m"
            MR_Word transform_hlds__termination__MakeOptInt_17;
#line 605 "termination.m"
            MR_Word transform_hlds__termination__PredTable0_18;
#line 605 "termination.m"
            MR_Word transform_hlds__termination__PredInfo0_19;
#line 605 "termination.m"
            MR_Word transform_hlds__termination__ImportStatus_20;
#line 605 "termination.m"
            MR_Word transform_hlds__termination__Context_21;
#line 605 "termination.m"
            MR_Word transform_hlds__termination__ProcTable0_22;
#line 605 "termination.m"
            MR_Word transform_hlds__termination__Markers_23;
#line 605 "termination.m"
            MR_Word transform_hlds__termination__ProcIds_24;
#line 605 "termination.m"
            MR_Word transform_hlds__termination__ProcTable2_26;
#line 605 "termination.m"
            MR_Word transform_hlds__termination__ProcTable_33;
#line 605 "termination.m"
            MR_Word transform_hlds__termination__PredInfo_34;
#line 605 "termination.m"
            MR_Word transform_hlds__termination__PredTable_35;
#line 605 "termination.m"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_66_66;
#line 612 "termination.m"
            MR_Box transform_hlds__termination__conv0_PredInfo0_19;
#line 626 "termination.m"
            MR_Word transform_hlds__termination__ProcTable1_25;

#line 606 "termination.m"
            {
#line 606 "termination.m"
              hlds__passes_aux__write_pred_progress_message_5_p_0((MR_String) "% Checking termination of ", transform_hlds__termination__PredId_12, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2);
            }
#line 608 "termination.m"
            {
#line 608 "termination.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2, &transform_hlds__termination__Globals_16);
            }
#line 609 "termination.m"
            {
#line 609 "termination.m"
              libs__globals__lookup_bool_option_3_p_0(transform_hlds__termination__Globals_16, (MR_Integer) 85, &transform_hlds__termination__MakeOptInt_17);
            }
#line 611 "termination.m"
            {
#line 611 "termination.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2, &transform_hlds__termination__PredTable0_18);
            }
#line 2251 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_71_71 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 2253 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_72_72 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 612 "termination.m"
            {
#line 612 "termination.m"
              mercury__map__lookup_3_p_0(transform_hlds__termination__TypeCtorInfo_71_71, transform_hlds__termination__TypeCtorInfo_72_72, transform_hlds__termination__PredTable0_18, ((MR_Box) (transform_hlds__termination__PredId_12)), &transform_hlds__termination__conv0_PredInfo0_19);
            }
#line 612 "termination.m"
            transform_hlds__termination__PredInfo0_19 = ((MR_Word) transform_hlds__termination__conv0_PredInfo0_19);
#line 613 "termination.m"
            {
#line 613 "termination.m"
              hlds__hlds_pred__pred_info_get_import_status_2_p_0(transform_hlds__termination__PredInfo0_19, &transform_hlds__termination__ImportStatus_20);
            }
#line 614 "termination.m"
            {
#line 614 "termination.m"
              hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__termination__PredInfo0_19, &transform_hlds__termination__Context_21);
            }
#line 615 "termination.m"
            {
#line 615 "termination.m"
              hlds__hlds_pred__pred_info_get_procedures_2_p_0(transform_hlds__termination__PredInfo0_19, &transform_hlds__termination__ProcTable0_22);
            }
#line 616 "termination.m"
            {
#line 616 "termination.m"
              hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__termination__PredInfo0_19, &transform_hlds__termination__Markers_23);
            }
#line 617 "termination.m"
            {
#line 617 "termination.m"
              transform_hlds__termination__ProcIds_24 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__termination__PredInfo0_19);
            }
#line 700 "termination.m"
            {
#line 700 "termination.m"
              transform_hlds__termination__succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(transform_hlds__termination__PredInfo0_19);
            }
#line 704 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 702 "termination.m"
              {
#line 702 "termination.m"
                {
#line 702 "termination.m"
                  transform_hlds__termination__set_builtin_terminates_6_p_0(transform_hlds__termination__ProcIds_24, transform_hlds__termination__PredId_12, transform_hlds__termination__PredInfo0_19, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2, transform_hlds__termination__ProcTable0_22, &transform_hlds__termination__ProcTable1_25);
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
                MR_Word transform_hlds__termination__SpecialPredId_85;
#line 713 "termination.m"
                MR_Word transform_hlds__termination__SpecPredId0_83;
#line 706 "termination.m"
                MR_Word transform_hlds__termination__ModuleName_80;
#line 706 "termination.m"
                MR_String transform_hlds__termination__Name_81;
#line 706 "termination.m"
                MR_Integer transform_hlds__termination__Arity_82;
#line 706 "termination.m"
                MR_Integer transform_hlds__termination__V_91_91;
#line 709 "termination.m"
                MR_String transform_hlds__termination__V_84_84;

#line 706 "termination.m"
                {
#line 706 "termination.m"
                  transform_hlds__termination__ModuleName_80 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__termination__PredInfo0_19);
                }
#line 707 "termination.m"
                {
#line 707 "termination.m"
                  transform_hlds__termination__Name_81 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__termination__PredInfo0_19);
                }
#line 708 "termination.m"
                {
#line 708 "termination.m"
                  transform_hlds__termination__Arity_82 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__termination__PredInfo0_19);
                }
#line 709 "termination.m"
                {
#line 709 "termination.m"
                  transform_hlds__termination__succeeded = mdbcomp__prim_data__special_pred_name_arity_4_p_1(&transform_hlds__termination__SpecPredId0_83, transform_hlds__termination__Name_81, &transform_hlds__termination__V_84_84, &transform_hlds__termination__V_91_91);
                }
#line 706 "termination.m"
                if (transform_hlds__termination__succeeded)
#line 706 "termination.m"
                  {
#line 709 "termination.m"
                    transform_hlds__termination__succeeded = (transform_hlds__termination__Arity_82 == transform_hlds__termination__V_91_91);
#line 706 "termination.m"
                    if (transform_hlds__termination__succeeded)
#line 710 "termination.m"
                      {
#line 710 "termination.m"
                        transform_hlds__termination__succeeded = mdbcomp__prim_data__any_mercury_builtin_module_1_p_0(transform_hlds__termination__ModuleName_80);
                      }
#line 706 "termination.m"
                  }
#line 713 "termination.m"
                if (transform_hlds__termination__succeeded)
#line 712 "termination.m"
                  {
#line 712 "termination.m"
                    transform_hlds__termination__SpecialPredId_85 = transform_hlds__termination__SpecPredId0_83;
#line 712 "termination.m"
                    transform_hlds__termination__succeeded = MR_TRUE;
#line 712 "termination.m"
                  }
#line 713 "termination.m"
                else
#line 714 "termination.m"
                  {
#line 714 "termination.m"
                    MR_Word transform_hlds__termination__Origin_86;
#line 714 "termination.m"
                    MR_Word transform_hlds__termination__V_89_89;
#line 715 "termination.m"
                    MR_Word transform_hlds__termination__V_87_87;

#line 714 "termination.m"
                    {
#line 714 "termination.m"
                      hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__termination__PredInfo0_19, &transform_hlds__termination__Origin_86);
                    }
#line 715 "termination.m"
                    transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__Origin_86)) == (MR_mktag((MR_Integer) 0)));
#line 715 "termination.m"
                    if (transform_hlds__termination__succeeded)
#line 715 "termination.m"
                      {
#line 715 "termination.m"
                        transform_hlds__termination__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__Origin_86, (MR_Integer) 0)));
#line 715 "termination.m"
                        transform_hlds__termination__SpecialPredId_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__V_89_89, (MR_Integer) 0)));
#line 715 "termination.m"
                        transform_hlds__termination__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__V_89_89, (MR_Integer) 1)));
#line 715 "termination.m"
                        transform_hlds__termination__succeeded = MR_TRUE;
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
                      transform_hlds__termination__set_generated_terminates_4_p_0(transform_hlds__termination__ProcIds_24, transform_hlds__termination__SpecialPredId_85, transform_hlds__termination__ProcTable0_22, &transform_hlds__termination__ProcTable1_25);
                    }
#line 718 "termination.m"
                    transform_hlds__termination__succeeded = MR_TRUE;
#line 719 "termination.m"
                  }
#line 719 "termination.m"
              }
#line 626 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 625 "termination.m"
              transform_hlds__termination__ProcTable2_26 = transform_hlds__termination__ProcTable1_25;
#line 626 "termination.m"
            else
#line 637 "termination.m"
              {
#line 627 "termination.m"
                MR_Word transform_hlds__termination__V_43_43;

#line 627 "termination.m"
                {
#line 627 "termination.m"
                  transform_hlds__termination__V_43_43 = hlds__hlds_pred__status_defined_in_this_module_1_f_0(transform_hlds__termination__ImportStatus_20);
                }
#line 627 "termination.m"
                transform_hlds__termination__succeeded = (transform_hlds__termination__V_43_43 == (MR_Integer) 1);
#line 637 "termination.m"
                if (transform_hlds__termination__succeeded)
#line 634 "termination.m"
                  {
#line 631 "termination.m"
                    {
#line 631 "termination.m"
                      transform_hlds__termination__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__termination__Markers_23, (MR_Integer) 17);
                    }
#line 634 "termination.m"
                    if (transform_hlds__termination__succeeded)
#line 632 "termination.m"
                      {
#line 632 "termination.m"
                        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 632 "termination.m"
                        {
#line 632 "termination.m"
                          transform_hlds__termination__change_procs_termination_info_5_p_0(transform_hlds__termination__ProcIds_24, (MR_Integer) 1, (MR_Word) &transform_hlds__termination_scalar_common_2[2], transform_hlds__termination__ProcTable0_22, &transform_hlds__termination__ProcTable2_26);
                        }
#line 632 "termination.m"
                      }
#line 634 "termination.m"
                    else
#line 635 "termination.m"
                      transform_hlds__termination__ProcTable2_26 = transform_hlds__termination__ProcTable0_22;
#line 634 "termination.m"
                  }
#line 637 "termination.m"
                else
#line 663 "termination.m"
                  {
#line 663 "termination.m"
                    MR_Word transform_hlds__termination__ArgSizeError_29;
#line 663 "termination.m"
                    MR_Word transform_hlds__termination__ArgSizeInfo_30;
#line 663 "termination.m"
                    MR_Word transform_hlds__termination__V_58_58;
#line 663 "termination.m"
                    MR_Word transform_hlds__termination__ProcTable1_69;

#line 649 "termination.m"
                    {
#line 649 "termination.m"
                      transform_hlds__termination__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__termination__Markers_23, (MR_Integer) 17);
                    }
#line 650 "termination.m"
                    if (!(transform_hlds__termination__succeeded))
#line 651 "termination.m"
                      {
#line 651 "termination.m"
                        MR_Word transform_hlds__termination__V_48_48;

#line 651 "termination.m"
                        transform_hlds__termination__succeeded = (transform_hlds__termination__MakeOptInt_17 == (MR_Integer) 0);
#line 651 "termination.m"
                        if (transform_hlds__termination__succeeded)
#line 651 "termination.m"
                          {
#line 652 "termination.m"
                            transform_hlds__termination__V_48_48 = (MR_Integer) 19;
#line 652 "termination.m"
                            {
#line 652 "termination.m"
                              transform_hlds__termination__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__termination__Markers_23, transform_hlds__termination__V_48_48);
                            }
#line 651 "termination.m"
                          }
#line 651 "termination.m"
                      }
#line 657 "termination.m"
                    if (transform_hlds__termination__succeeded)
#line 655 "termination.m"
                      {
#line 655 "termination.m"
                        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 655 "termination.m"
                        {
#line 655 "termination.m"
                          transform_hlds__termination__change_procs_termination_info_5_p_0(transform_hlds__termination__ProcIds_24, (MR_Integer) 1, (MR_Word) &transform_hlds__termination_scalar_common_2[2], transform_hlds__termination__ProcTable0_22, &transform_hlds__termination__ProcTable1_69);
                        }
#line 655 "termination.m"
                      }
#line 657 "termination.m"
                    else
#line 659 "termination.m"
                      {
#line 659 "termination.m"
                        MR_Word transform_hlds__termination__TerminationError_27;
#line 659 "termination.m"
                        MR_Word transform_hlds__termination__TerminationInfo_28;
#line 659 "termination.m"
                        MR_Word transform_hlds__termination__V_54_54;

#line 658 "termination.m"
                        {
#line 658 "termination.m"
                          transform_hlds__termination__TerminationError_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 658 "termination.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__termination__TerminationError_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 658 "termination.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__termination__TerminationError_27, 1) = ((MR_Box) (transform_hlds__termination__Context_21));
#line 658 "termination.m"
                        }
#line 660 "termination.m"
                        {
#line 660 "termination.m"
                          transform_hlds__termination__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 660 "termination.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__termination__V_54_54, 0) = ((MR_Box) (transform_hlds__termination__TerminationError_27));
#line 660 "termination.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__termination__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 660 "termination.m"
                        }
#line 660 "termination.m"
                        {
#line 660 "termination.m"
                          transform_hlds__termination__TerminationInfo_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 660 "termination.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__termination__TerminationInfo_28, 0) = ((MR_Box) (transform_hlds__termination__V_54_54));
#line 660 "termination.m"
                        }
#line 661 "termination.m"
                        {
#line 661 "termination.m"
                          transform_hlds__termination__change_procs_termination_info_5_p_0(transform_hlds__termination__ProcIds_24, (MR_Integer) 0, transform_hlds__termination__TerminationInfo_28, transform_hlds__termination__ProcTable0_22, &transform_hlds__termination__ProcTable1_69);
                        }
#line 659 "termination.m"
                      }
#line 664 "termination.m"
                    {
#line 664 "termination.m"
                      transform_hlds__termination__ArgSizeError_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 664 "termination.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeError_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 664 "termination.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeError_29, 1) = ((MR_Box) (transform_hlds__termination__Context_21));
#line 664 "termination.m"
                    }
#line 665 "termination.m"
                    {
#line 665 "termination.m"
                      transform_hlds__termination__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 665 "termination.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__termination__V_58_58, 0) = ((MR_Box) (transform_hlds__termination__ArgSizeError_29));
#line 665 "termination.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__termination__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 665 "termination.m"
                    }
#line 665 "termination.m"
                    {
#line 665 "termination.m"
                      transform_hlds__termination__ArgSizeInfo_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 665 "termination.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__termination__ArgSizeInfo_30, 0) = ((MR_Box) (transform_hlds__termination__V_58_58));
#line 665 "termination.m"
                    }
#line 666 "termination.m"
                    {
#line 666 "termination.m"
                      transform_hlds__termination__change_procs_arg_size_info_5_p_0(transform_hlds__termination__ProcIds_24, (MR_Integer) 0, transform_hlds__termination__ArgSizeInfo_30, transform_hlds__termination__ProcTable1_69, &transform_hlds__termination__ProcTable2_26);
                    }
#line 663 "termination.m"
                  }
#line 637 "termination.m"
              }
#line 669 "termination.m"
            {
#line 669 "termination.m"
              transform_hlds__termination__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__termination__Markers_23, (MR_Integer) 18);
            }
#line 675 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 671 "termination.m"
              {
#line 671 "termination.m"
                MR_Word transform_hlds__termination__RequestError_31;
#line 671 "termination.m"
                MR_Word transform_hlds__termination__RequestTerminationInfo_32;
#line 671 "termination.m"
                MR_Word transform_hlds__termination__V_62_62;
#line 671 "termination.m"
                MR_Word transform_hlds__termination__V_63_63;

#line 671 "termination.m"
                {
#line 671 "termination.m"
                  transform_hlds__termination__V_62_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 671 "termination.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__termination__V_62_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 671 "termination.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__termination__V_62_62, 1) = ((MR_Box) (transform_hlds__termination__PredId_12));
#line 671 "termination.m"
                }
#line 670 "termination.m"
                {
#line 670 "termination.m"
                  transform_hlds__termination__RequestError_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 670 "termination.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__termination__RequestError_31, 0) = ((MR_Box) (transform_hlds__termination__V_62_62));
#line 670 "termination.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__termination__RequestError_31, 1) = ((MR_Box) (transform_hlds__termination__Context_21));
#line 670 "termination.m"
                }
#line 672 "termination.m"
                {
#line 672 "termination.m"
                  transform_hlds__termination__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 672 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__V_63_63, 0) = ((MR_Box) (transform_hlds__termination__RequestError_31));
#line 672 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 672 "termination.m"
                }
#line 672 "termination.m"
                {
#line 672 "termination.m"
                  transform_hlds__termination__RequestTerminationInfo_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 672 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__RequestTerminationInfo_32, 0) = ((MR_Box) (transform_hlds__termination__V_63_63));
#line 672 "termination.m"
                }
#line 673 "termination.m"
                {
#line 673 "termination.m"
                  transform_hlds__termination__change_procs_termination_info_5_p_0(transform_hlds__termination__ProcIds_24, (MR_Integer) 1, transform_hlds__termination__RequestTerminationInfo_32, transform_hlds__termination__ProcTable2_26, &transform_hlds__termination__ProcTable_33);
                }
#line 671 "termination.m"
              }
#line 675 "termination.m"
            else
#line 676 "termination.m"
              transform_hlds__termination__ProcTable_33 = transform_hlds__termination__ProcTable2_26;
#line 678 "termination.m"
            {
#line 678 "termination.m"
              hlds__hlds_pred__pred_info_set_procedures_3_p_0(transform_hlds__termination__ProcTable_33, transform_hlds__termination__PredInfo0_19, &transform_hlds__termination__PredInfo_34);
            }
#line 679 "termination.m"
            {
#line 679 "termination.m"
              mercury__map__set_4_p_0(transform_hlds__termination__TypeCtorInfo_71_71, transform_hlds__termination__TypeCtorInfo_72_72, ((MR_Box) (transform_hlds__termination__PredId_12)), ((MR_Box) (transform_hlds__termination__PredInfo_34)), transform_hlds__termination__PredTable0_18, &transform_hlds__termination__PredTable_35);
            }
#line 680 "termination.m"
            {
#line 680 "termination.m"
              hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__termination__PredTable_35, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_66_66);
            }
#line 681 "termination.m"
            /* direct tailcall eliminated */
#line 681 "termination.m"
            {
#line 681 "termination.m"
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__PredIds_13;
#line 681 "termination.m"
              MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_2 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_66_66;

#line 681 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_2;
#line 681 "termination.m"
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
#line 681 "termination.m"
            }
#line 681 "termination.m"
            continue;
#line 605 "termination.m"
          }
#line 604 "termination.m"
      }
#line 604 "termination.m"
      break;
#line 604 "termination.m"
    }
#line 601 "termination.m"
}

#line 574 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__is_solver_init_wrapper_pred_2_p_0(
#line 574 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_3,
#line 574 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_2)
#line 574 "termination.m"
{
#line 577 "termination.m"
  {
#line 577 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 577 "termination.m"
    MR_Word transform_hlds__termination__PredId_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__HeadVar__2_2, (MR_Integer) 0)));
#line 577 "termination.m"
    MR_Word transform_hlds__termination__PredInfo_6;
#line 577 "termination.m"
    MR_Word transform_hlds__termination__PredOrigin_7;
#line 577 "termination.m"
    MR_Word transform_hlds__termination__SpecialPredId_8;
#line 577 "termination.m"
    MR_Word transform_hlds__termination__V_10_10;
#line 577 "termination.m"
    MR_Integer transform_hlds__termination__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__HeadVar__2_2, (MR_Integer) 1)));
#line 580 "termination.m"
    MR_Word transform_hlds__termination__V_9_9;

#line 578 "termination.m"
    {
#line 578 "termination.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__termination__ModuleInfo_3, transform_hlds__termination__PredId_4, &transform_hlds__termination__PredInfo_6);
    }
#line 579 "termination.m"
    {
#line 579 "termination.m"
      hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__termination__PredInfo_6, &transform_hlds__termination__PredOrigin_7);
    }
#line 580 "termination.m"
    transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__PredOrigin_7)) == (MR_mktag((MR_Integer) 0)));
#line 580 "termination.m"
    if (transform_hlds__termination__succeeded)
#line 580 "termination.m"
      {
#line 580 "termination.m"
        transform_hlds__termination__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PredOrigin_7, (MR_Integer) 0)));
#line 580 "termination.m"
        transform_hlds__termination__SpecialPredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__V_10_10, (MR_Integer) 0)));
#line 580 "termination.m"
        transform_hlds__termination__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__V_10_10, (MR_Integer) 1)));
#line 581 "termination.m"
        transform_hlds__termination__succeeded = (transform_hlds__termination__SpecialPredId_8 == (MR_Integer) 3);
#line 580 "termination.m"
      }
#line 577 "termination.m"
    return transform_hlds__termination__succeeded;
#line 577 "termination.m"
  }
#line 574 "termination.m"
}

#line 545 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__report_termination_errors_6_p_0_4(
#line 545 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 545 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1)
#line 545 "termination.m"
{
#line 545 "termination.m"
  {
#line 545 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 545 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

#line 545 "termination.m"
    {
#line 545 "termination.m"
      return transform_hlds__termination__succeeded = transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__545__1_1_p_0(((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 545 "termination.m"
    return transform_hlds__termination__succeeded;
#line 545 "termination.m"
  }
#line 545 "termination.m"
}

#line 530 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__report_termination_errors_6_p_0_3(
#line 530 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 530 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1)
#line 530 "termination.m"
{
#line 530 "termination.m"
  {
#line 530 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 530 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

#line 530 "termination.m"
    {
#line 530 "termination.m"
      return transform_hlds__termination__succeeded = transform_hlds__termination__is_solver_init_wrapper_pred_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 530 "termination.m"
    return transform_hlds__termination__succeeded;
#line 530 "termination.m"
  }
#line 530 "termination.m"
}

#line 518 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__report_termination_errors_6_p_0_2(
#line 518 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 518 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1)
#line 518 "termination.m"
{
#line 518 "termination.m"
  {
#line 518 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 518 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

#line 518 "termination.m"
    {
#line 518 "termination.m"
      return transform_hlds__termination__succeeded = transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__518__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 518 "termination.m"
    return transform_hlds__termination__succeeded;
#line 518 "termination.m"
  }
#line 518 "termination.m"
}

#line 502 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__report_termination_errors_6_p_0_1(
#line 502 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 502 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1)
#line 502 "termination.m"
{
#line 502 "termination.m"
  {
#line 502 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 502 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

#line 502 "termination.m"
    {
#line 502 "termination.m"
      return transform_hlds__termination__succeeded = transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__502__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 502 "termination.m"
    return transform_hlds__termination__succeeded;
#line 502 "termination.m"
  }
#line 502 "termination.m"
}

#line 492 "termination.m"
static void MR_CALL 
transform_hlds__termination__report_termination_errors_6_p_0(
#line 492 "termination.m"
  MR_Word transform_hlds__termination__SCC_7,
#line 492 "termination.m"
  MR_Word transform_hlds__termination__Errors_8,
#line 492 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35,
#line 492 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_36)
#line 492 "termination.m"
{
#line 496 "termination.m"
  {
#line 496 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 496 "termination.m"
    MR_Word transform_hlds__termination__Globals_11;
#line 496 "termination.m"
    MR_Word transform_hlds__termination__NormalErrors_12;
#line 496 "termination.m"
    MR_Word transform_hlds__termination__VerboseErrors_13;
#line 507 "termination.m"
    MR_Word transform_hlds__termination__IsCheckTerm_14;
#line 507 "termination.m"
    MR_Word transform_hlds__termination__CheckTermPPIds_19;
#line 509 "termination.m"
    MR_Word transform_hlds__termination__V_20_20;
#line 509 "termination.m"
    MR_Word transform_hlds__termination__V_21_21;

#line 497 "termination.m"
    {
#line 497 "termination.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35, &transform_hlds__termination__Globals_11);
    }
#line 498 "termination.m"
    {
#line 498 "termination.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__termination__Globals_11, (MR_Integer) 412, &transform_hlds__termination__NormalErrors_12);
    }
#line 499 "termination.m"
    {
#line 499 "termination.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__termination__Globals_11, (MR_Integer) 413, &transform_hlds__termination__VerboseErrors_13);
    }
#line 502 "termination.m"
    {
#line 502 "termination.m"
      transform_hlds__termination__IsCheckTerm_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 502 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsCheckTerm_14, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_6[0]));
#line 502 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsCheckTerm_14, 1) = ((MR_Box) (transform_hlds__termination__report_termination_errors_6_p_0_1));
#line 502 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsCheckTerm_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 502 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsCheckTerm_14, 3) = ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35));
#line 502 "termination.m"
    }
#line 508 "termination.m"
    {
#line 508 "termination.m"
      mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__termination__IsCheckTerm_14, transform_hlds__termination__SCC_7, &transform_hlds__termination__CheckTermPPIds_19);
    }
#line 509 "termination.m"
    transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__CheckTermPPIds_19)) == (MR_mktag((MR_Integer) 1)));
#line 509 "termination.m"
    if (transform_hlds__termination__succeeded)
#line 509 "termination.m"
      {
#line 509 "termination.m"
        transform_hlds__termination__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__CheckTermPPIds_19, (MR_Integer) 0)));
#line 509 "termination.m"
        transform_hlds__termination__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__CheckTermPPIds_19, (MR_Integer) 1)));
#line 514 "termination.m"
        {
#line 514 "termination.m"
          transform_hlds__term_errors__report_term_errors_5_p_0(transform_hlds__termination__SCC_7, transform_hlds__termination__Errors_8, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35);
        }
#line 515 "termination.m"
        {
#line 515 "termination.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
#line 516 "termination.m"
        {
#line 516 "termination.m"
          hlds__hlds_module__module_info_incr_errors_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_36);
#line 516 "termination.m"
          return;
        }
#line 509 "termination.m"
      }
#line 509 "termination.m"
    else
#line 567 "termination.m"
      {
#line 567 "termination.m"
        MR_Word transform_hlds__termination__PrintErrors_27;
#line 521 "termination.m"
        MR_Word transform_hlds__termination__TypeCtorInfo_62_62 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 521 "termination.m"
        MR_Word transform_hlds__termination__IsNonImported_22;
#line 521 "termination.m"
        MR_Word transform_hlds__termination__NonImportedPPIds_24;
#line 521 "termination.m"
        MR_Word transform_hlds__termination__V_48_48;
#line 523 "termination.m"
        MR_Word transform_hlds__termination__V_25_25;
#line 523 "termination.m"
        MR_Word transform_hlds__termination__V_26_26;

#line 518 "termination.m"
        {
#line 518 "termination.m"
          transform_hlds__termination__IsNonImported_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 518 "termination.m"
          MR_hl_field(MR_mktag(0), transform_hlds__termination__IsNonImported_22, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_6[0]));
#line 518 "termination.m"
          MR_hl_field(MR_mktag(0), transform_hlds__termination__IsNonImported_22, 1) = ((MR_Box) (transform_hlds__termination__report_termination_errors_6_p_0_2));
#line 518 "termination.m"
          MR_hl_field(MR_mktag(0), transform_hlds__termination__IsNonImported_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 518 "termination.m"
          MR_hl_field(MR_mktag(0), transform_hlds__termination__IsNonImported_22, 3) = ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35));
#line 518 "termination.m"
        }
#line 522 "termination.m"
        {
#line 522 "termination.m"
          mercury__list__filter_3_p_0(transform_hlds__termination__TypeCtorInfo_62_62, transform_hlds__termination__IsNonImported_22, transform_hlds__termination__SCC_7, &transform_hlds__termination__NonImportedPPIds_24);
        }
#line 523 "termination.m"
        transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__NonImportedPPIds_24)) == (MR_mktag((MR_Integer) 1)));
#line 523 "termination.m"
        if (transform_hlds__termination__succeeded)
#line 523 "termination.m"
          {
#line 523 "termination.m"
            transform_hlds__termination__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__NonImportedPPIds_24, (MR_Integer) 0)));
#line 523 "termination.m"
            transform_hlds__termination__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__NonImportedPPIds_24, (MR_Integer) 1)));
#line 530 "termination.m"
            {
#line 530 "termination.m"
              transform_hlds__termination__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 530 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__V_48_48, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_6[0]));
#line 530 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__V_48_48, 1) = ((MR_Box) (transform_hlds__termination__report_termination_errors_6_p_0_3));
#line 530 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 530 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__V_48_48, 3) = ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35));
#line 530 "termination.m"
            }
#line 530 "termination.m"
            {
#line 530 "termination.m"
              transform_hlds__termination__succeeded = mercury__list__all_false_2_p_0(transform_hlds__termination__TypeCtorInfo_62_62, transform_hlds__termination__V_48_48, transform_hlds__termination__SCC_7);
            }
#line 521 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 541 "termination.m"
              {
#line 541 "termination.m"
                if ((transform_hlds__termination__VerboseErrors_13 == (MR_Integer) 0))
#line 542 "termination.m"
                  {
#line 542 "termination.m"
                    MR_Word transform_hlds__termination__TypeCtorInfo_64_64;
#line 542 "termination.m"
                    MR_Word transform_hlds__termination__IsNonSimple_28;
#line 542 "termination.m"
                    MR_Word transform_hlds__termination__PrintErrors0_32;

#line 3062 "transform_hlds.termination.c"
                    transform_hlds__termination__succeeded = (transform_hlds__termination__NormalErrors_12 == (MR_Integer) 1);
#line 542 "termination.m"
                    if (transform_hlds__termination__succeeded)
#line 542 "termination.m"
                      {
#line 545 "termination.m"
                        transform_hlds__termination__IsNonSimple_28 = (MR_Word) &transform_hlds__termination_scalar_common_3[5];
#line 3070 "transform_hlds.termination.c"
                        transform_hlds__termination__TypeCtorInfo_64_64 = (MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0;
#line 549 "termination.m"
                        {
#line 549 "termination.m"
                          mercury__list__filter_3_p_0(transform_hlds__termination__TypeCtorInfo_64_64, transform_hlds__termination__IsNonSimple_28, transform_hlds__termination__Errors_8, &transform_hlds__termination__PrintErrors0_32);
                        }
#line 556 "termination.m"
                        if ((transform_hlds__termination__PrintErrors0_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 555 "termination.m"
                          transform_hlds__termination__PrintErrors_27 = transform_hlds__termination__Errors_8;
#line 556 "termination.m"
                        else
#line 558 "termination.m"
                          transform_hlds__termination__PrintErrors_27 = transform_hlds__termination__PrintErrors0_32;
#line 556 "termination.m"
                        transform_hlds__termination__succeeded = MR_TRUE;
#line 542 "termination.m"
                      }
#line 542 "termination.m"
                  }
#line 541 "termination.m"
                else
#line 540 "termination.m"
                  {
#line 540 "termination.m"
                    transform_hlds__termination__PrintErrors_27 = transform_hlds__termination__Errors_8;
#line 540 "termination.m"
                    transform_hlds__termination__succeeded = MR_TRUE;
#line 540 "termination.m"
                  }
#line 541 "termination.m"
              }
#line 523 "termination.m"
          }
#line 567 "termination.m"
        if (transform_hlds__termination__succeeded)
#line 566 "termination.m"
          {
#line 566 "termination.m"
            transform_hlds__term_errors__report_term_errors_5_p_0(transform_hlds__termination__SCC_7, transform_hlds__termination__PrintErrors_27, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35);
          }
#line 567 "termination.m"
        else
#line 566 "termination.m"
          {
#line 566 "termination.m"
          }
#line 566 "termination.m"
        *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_36 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35;
#line 567 "termination.m"
      }
#line 496 "termination.m"
  }
#line 492 "termination.m"
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
            MR_Word transform_hlds__termination__TypeCtorInfo_30_30;
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
#line 3205 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 3207 "transform_hlds.termination.c"
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
              hlds__hlds_pred__pred_info_get_procedures_2_p_0(transform_hlds__termination__PredInfo0_16, &transform_hlds__termination__ProcTable0_17);
            }
#line 3221 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_30_30 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 3223 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 482 "termination.m"
            {
#line 482 "termination.m"
              mercury__map__lookup_3_p_0(transform_hlds__termination__TypeCtorInfo_30_30, transform_hlds__termination__TypeCtorInfo_31_31, transform_hlds__termination__ProcTable0_17, ((MR_Box) (transform_hlds__termination__ProcId_14)), &transform_hlds__termination__conv1_ProcInfo0_18);
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
              mercury__map__det_update_4_p_0(transform_hlds__termination__TypeCtorInfo_30_30, transform_hlds__termination__TypeCtorInfo_31_31, ((MR_Box) (transform_hlds__termination__ProcId_14)), ((MR_Box) (transform_hlds__termination__ProcInfo_19)), transform_hlds__termination__ProcTable0_17, &transform_hlds__termination__ProcTable_20);
            }
#line 487 "termination.m"
            {
#line 487 "termination.m"
              hlds__hlds_pred__pred_info_set_procedures_3_p_0(transform_hlds__termination__ProcTable_20, transform_hlds__termination__PredInfo0_16, &transform_hlds__termination__PredInfo_21);
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
            MR_Word transform_hlds__termination__TypeCtorInfo_30_30;
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
#line 3371 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 3373 "transform_hlds.termination.c"
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
              hlds__hlds_pred__pred_info_get_procedures_2_p_0(transform_hlds__termination__PredInfo0_16, &transform_hlds__termination__ProcTable0_17);
            }
#line 3387 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_30_30 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 3389 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 462 "termination.m"
            {
#line 462 "termination.m"
              mercury__map__lookup_3_p_0(transform_hlds__termination__TypeCtorInfo_30_30, transform_hlds__termination__TypeCtorInfo_31_31, transform_hlds__termination__ProcTable0_17, ((MR_Box) (transform_hlds__termination__ProcId_14)), &transform_hlds__termination__conv1_ProcInfo0_18);
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
              mercury__map__set_4_p_0(transform_hlds__termination__TypeCtorInfo_30_30, transform_hlds__termination__TypeCtorInfo_31_31, ((MR_Box) (transform_hlds__termination__ProcId_14)), ((MR_Box) (transform_hlds__termination__ProcInfo_19)), transform_hlds__termination__ProcTable0_17, &transform_hlds__termination__ProcTable_20);
            }
#line 466 "termination.m"
            {
#line 466 "termination.m"
              hlds__hlds_pred__pred_info_set_procedures_3_p_0(transform_hlds__termination__ProcTable_20, transform_hlds__termination__PredInfo0_16, &transform_hlds__termination__PredInfo_21);
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
            MR_Word transform_hlds__termination__TypeCtorInfo_34_34;
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
#line 3547 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_32_32 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 3549 "transform_hlds.termination.c"
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
              hlds__hlds_pred__pred_info_get_procedures_2_p_0(transform_hlds__termination__PredInfo0_18, &transform_hlds__termination__ProcTable0_19);
            }
#line 3563 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_34_34 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 3565 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_35_35 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 442 "termination.m"
            {
#line 442 "termination.m"
              mercury__map__lookup_3_p_0(transform_hlds__termination__TypeCtorInfo_34_34, transform_hlds__termination__TypeCtorInfo_35_35, transform_hlds__termination__ProcTable0_19, ((MR_Box) (transform_hlds__termination__ProcId_16)), &transform_hlds__termination__conv1_ProcInfo_20);
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
              mercury__map__set_4_p_0(transform_hlds__termination__TypeCtorInfo_34_34, transform_hlds__termination__TypeCtorInfo_35_35, ((MR_Box) (transform_hlds__termination__ProcId_16)), ((MR_Box) (transform_hlds__termination__ProcInfo1_23)), transform_hlds__termination__ProcTable0_19, &transform_hlds__termination__ProcTable_24);
            }
#line 448 "termination.m"
            {
#line 448 "termination.m"
              hlds__hlds_pred__pred_info_set_procedures_3_p_0(transform_hlds__termination__ProcTable_24, transform_hlds__termination__PredInfo0_18, &transform_hlds__termination__PredInfo_25);
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
      return transform_hlds__termination__succeeded = transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__395__1_1_p_0(((MR_Word) transform_hlds__termination__wrapper_arg_1));
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
      return transform_hlds__termination__succeeded = transform_hlds__term_util__is_termination_known_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1));
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
      return transform_hlds__termination__succeeded = transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__361__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 361 "termination.m"
    return transform_hlds__termination__succeeded;
#line 361 "termination.m"
  }
#line 361 "termination.m"
}

#line 357 "termination.m"
static void MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0(
#line 357 "termination.m"
  MR_Word transform_hlds__termination__PassInfo_7,
#line 357 "termination.m"
  MR_Word transform_hlds__termination__SCC_8,
#line 357 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47,
#line 357 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_48)
#line 357 "termination.m"
{
#line 360 "termination.m"
  {
#line 360 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 360 "termination.m"
    MR_Word transform_hlds__termination__TypeCtorInfo_69_69;
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
    MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_57_57;
#line 360 "termination.m"
    MR_Word transform_hlds__termination__V_58_58;
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
#line 3788 "transform_hlds.termination.c"
    transform_hlds__termination__TypeCtorInfo_69_69 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 365 "termination.m"
    {
#line 365 "termination.m"
      mercury__list__filter_4_p_0(transform_hlds__termination__TypeCtorInfo_69_69, transform_hlds__termination__IsArgSizeKnown_11, transform_hlds__termination__SCC_8, &transform_hlds__termination___SCCArgSizeKnown_16, &transform_hlds__termination__SCCArgSizeUnknown_17);
    }
#line 370 "termination.m"
    if ((transform_hlds__termination__SCCArgSizeUnknown_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 367 "termination.m"
      {
#line 368 "termination.m"
        transform_hlds__termination__ArgSizeErrors_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 369 "termination.m"
        transform_hlds__termination__TermErrors_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 369 "termination.m"
        transform_hlds__termination__STATE_VARIABLE_ModuleInfo_57_57 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47;
#line 367 "termination.m"
      }
#line 370 "termination.m"
    else
#line 371 "termination.m"
      {
#line 371 "termination.m"
        MR_Word transform_hlds__termination__ArgSizeResult_22;
#line 371 "termination.m"
        MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_53_53;

#line 372 "termination.m"
        {
#line 372 "termination.m"
          transform_hlds__term_pass1__find_arg_sizes_in_scc_8_p_0(transform_hlds__termination__SCCArgSizeUnknown_17, transform_hlds__termination__PassInfo_7, &transform_hlds__termination__ArgSizeResult_22, &transform_hlds__termination__TermErrors_19, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_53_53);
        }
#line 379 "termination.m"
        if (((MR_tag((MR_Word) transform_hlds__termination__ArgSizeResult_22)) == (MR_mktag((MR_Integer) 1))))
#line 380 "termination.m"
          {
#line 380 "termination.m"
            MR_Word transform_hlds__termination__V_55_55;

#line 380 "termination.m"
            transform_hlds__termination__ArgSizeErrors_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__ArgSizeResult_22, (MR_Integer) 0)));
#line 382 "termination.m"
            {
#line 382 "termination.m"
              transform_hlds__termination__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 382 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_55_55, 0) = ((MR_Box) (transform_hlds__termination__ArgSizeErrors_18));
#line 382 "termination.m"
            }
#line 381 "termination.m"
            {
#line 381 "termination.m"
              transform_hlds__termination__set_infinite_arg_size_infos_4_p_0(transform_hlds__termination__SCCArgSizeUnknown_17, transform_hlds__termination__V_55_55, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_53_53, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_57_57);
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
              transform_hlds__termination__set_finite_arg_size_infos_4_p_0(transform_hlds__termination__Solutions_23, transform_hlds__termination__OutputSupplierMap_24, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_53_53, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_57_57);
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
      transform_hlds__termination__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 386 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_58_58, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_6[0]));
#line 386 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_58_58, 1) = ((MR_Box) (transform_hlds__termination__analyse_termination_in_scc_6_p_0_2));
#line 386 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_58_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 386 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_58_58, 3) = ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_57_57));
#line 386 "termination.m"
    }
#line 386 "termination.m"
    {
#line 386 "termination.m"
      mercury__list__filter_4_p_0(transform_hlds__termination__TypeCtorInfo_69_69, transform_hlds__termination__V_58_58, transform_hlds__termination__SCC_8, &transform_hlds__termination___SCCTerminationKnown_26, &transform_hlds__termination__SCCTerminationUnknown_27);
    }
#line 393 "termination.m"
    if ((transform_hlds__termination__SCCTerminationUnknown_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 392 "termination.m"
      *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_48 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_57_57;
#line 393 "termination.m"
    else
#line 394 "termination.m"
      {
#line 394 "termination.m"
        MR_Word transform_hlds__termination__TypeCtorInfo_71_71 = (MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0;
#line 394 "termination.m"
        MR_Word transform_hlds__termination__FatalErrors_34;
#line 394 "termination.m"
        MR_Word transform_hlds__termination__BothErrors_35;

#line 399 "termination.m"
        {
#line 399 "termination.m"
          mercury__list__filter_3_p_0(transform_hlds__termination__TypeCtorInfo_71_71, (MR_Word) &transform_hlds__termination_scalar_common_3[4], transform_hlds__termination__ArgSizeErrors_18, &transform_hlds__termination__FatalErrors_34);
        }
#line 400 "termination.m"
        {
#line 400 "termination.m"
          transform_hlds__termination__BothErrors_35 = mercury__list__f_43_43_2_f_0(transform_hlds__termination__TypeCtorInfo_71_71, transform_hlds__termination__TermErrors_19, transform_hlds__termination__FatalErrors_34);
        }
#line 3909 "transform_hlds.termination.c"
        if ((transform_hlds__termination__BothErrors_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3911 "transform_hlds.termination.c"
          {
#line 3913 "transform_hlds.termination.c"
            MR_Word transform_hlds__termination__TerminationResult_42;
#line 3915 "transform_hlds.termination.c"
            MR_Word transform_hlds__termination__Globals_43;
#line 3917 "transform_hlds.termination.c"
            MR_Integer transform_hlds__termination__SingleArgs_44;
#line 3919 "transform_hlds.termination.c"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_62_62;
#line 3921 "transform_hlds.termination.c"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_64_64;

#line 410 "termination.m"
            {
#line 410 "termination.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_57_57, &transform_hlds__termination__Globals_43);
            }
#line 411 "termination.m"
            {
#line 411 "termination.m"
              libs__globals__lookup_int_option_3_p_0(transform_hlds__termination__Globals_43, (MR_Integer) 414, &transform_hlds__termination__SingleArgs_44);
            }
#line 413 "termination.m"
            {
#line 413 "termination.m"
              transform_hlds__term_pass2__prove_termination_in_scc_8_p_0(transform_hlds__termination__SCCTerminationUnknown_27, transform_hlds__termination__PassInfo_7, transform_hlds__termination__SingleArgs_44, &transform_hlds__termination__TerminationResult_42, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_57_57, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_62_62);
            }
#line 416 "termination.m"
            {
#line 416 "termination.m"
              transform_hlds__termination__set_termination_infos_4_p_0(transform_hlds__termination__SCCTerminationUnknown_27, transform_hlds__termination__TerminationResult_42, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_62_62, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_64_64);
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
                  transform_hlds__termination__report_termination_errors_6_p_0(transform_hlds__termination__SCC_8, transform_hlds__termination__TerminationErrors_45, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_64_64, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_48);
#line 420 "termination.m"
                  return;
                }
#line 419 "termination.m"
              }
#line 422 "termination.m"
            else
#line 423 "termination.m"
              *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_48 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_64_64;
#line 3964 "transform_hlds.termination.c"
          }
#line 3966 "transform_hlds.termination.c"
        else
#line 3968 "transform_hlds.termination.c"
          {
#line 3970 "transform_hlds.termination.c"
            MR_Integer transform_hlds__termination__MaxErrors_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PassInfo_7, (MR_Integer) 1)));
#line 3972 "transform_hlds.termination.c"
            MR_Word transform_hlds__termination__TerminationResult_74;
#line 3974 "transform_hlds.termination.c"
            MR_Word transform_hlds__termination__TerminationErrors_75;
#line 3976 "transform_hlds.termination.c"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_64_78;
#line 405 "termination.m"
            MR_Word transform_hlds__termination__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PassInfo_7, (MR_Integer) 0)));
#line 405 "termination.m"
            MR_Integer transform_hlds__termination__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PassInfo_7, (MR_Integer) 2)));

#line 406 "termination.m"
            {
#line 406 "termination.m"
              mercury__list__take_upto_3_p_0(transform_hlds__termination__TypeCtorInfo_71_71, transform_hlds__termination__MaxErrors_39, transform_hlds__termination__BothErrors_35, &transform_hlds__termination__TerminationErrors_75);
            }
#line 407 "termination.m"
            {
#line 407 "termination.m"
              transform_hlds__termination__TerminationResult_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 407 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__TerminationResult_74, 0) = ((MR_Box) (transform_hlds__termination__TerminationErrors_75));
#line 407 "termination.m"
            }
#line 416 "termination.m"
            {
#line 416 "termination.m"
              transform_hlds__termination__set_termination_infos_4_p_0(transform_hlds__termination__SCCTerminationUnknown_27, transform_hlds__termination__TerminationResult_74, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_57_57, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_64_78);
            }
#line 420 "termination.m"
            {
#line 420 "termination.m"
              transform_hlds__termination__report_termination_errors_6_p_0(transform_hlds__termination__SCC_8, transform_hlds__termination__TerminationErrors_75, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_64_78, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_48);
#line 420 "termination.m"
              return;
            }
#line 4008 "transform_hlds.termination.c"
          }
#line 394 "termination.m"
      }
#line 360 "termination.m"
  }
#line 357 "termination.m"
}

#line 326 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__check_procs_known_term_3_p_0(
#line 326 "termination.m"
  MR_Word transform_hlds__termination__Status_1,
#line 326 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_2,
#line 326 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_3)
#line 326 "termination.m"
{
#line 329 "termination.m"
  while (MR_TRUE)
#line 329 "termination.m"
    {
#line 329 "termination.m"
      /* tailcall optimized into a loop */
#line 329 "termination.m"
      {
#line 329 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 329 "termination.m"
        if ((transform_hlds__termination__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 329 "termination.m"
          transform_hlds__termination__succeeded = MR_TRUE;
#line 329 "termination.m"
        else
#line 330 "termination.m"
          {
#line 330 "termination.m"
            MR_Word transform_hlds__termination__PPId_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__2_2, (MR_Integer) 0)));
#line 330 "termination.m"
            MR_Word transform_hlds__termination__PPIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__2_2, (MR_Integer) 1)));
#line 330 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo_11;
#line 330 "termination.m"
            MR_Word transform_hlds__termination__MaybeTerm_12;
#line 330 "termination.m"
            MR_Word transform_hlds__termination__PPIdStatus_13;
#line 331 "termination.m"
            MR_Word transform_hlds__termination__V_10_10;

#line 331 "termination.m"
            {
#line 331 "termination.m"
              hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__termination__ModuleInfo_3, transform_hlds__termination__PPId_7, &transform_hlds__termination__V_10_10, &transform_hlds__termination__ProcInfo_11);
            }
#line 332 "termination.m"
            {
#line 332 "termination.m"
              hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__termination__ProcInfo_11, &transform_hlds__termination__MaybeTerm_12);
            }
#line 336 "termination.m"
            if ((transform_hlds__termination__MaybeTerm_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 334 "termination.m"
              {
#line 335 "termination.m"
                {
#line 335 "termination.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.termination", (MR_String) "predicate \140transform_hlds.termination.check_procs_known_term\'/3", (MR_String) "no termination info for procedure");
                }
#line 334 "termination.m"
              }
#line 336 "termination.m"
            else
#line 337 "termination.m"
              transform_hlds__termination__PPIdStatus_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__MaybeTerm_12, (MR_Integer) 0)));
#line 342 "termination.m"
            if (((MR_tag((MR_Word) transform_hlds__termination__Status_1)) == (MR_mktag((MR_Integer) 1))))
#line 344 "termination.m"
              {
#line 344 "termination.m"
                MR_Word transform_hlds__termination__V_17_17;

#line 344 "termination.m"
                transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__PPIdStatus_13)) == (MR_mktag((MR_Integer) 1)));
#line 344 "termination.m"
                if (transform_hlds__termination__succeeded)
#line 344 "termination.m"
                  transform_hlds__termination__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__PPIdStatus_13, (MR_Integer) 0)));
#line 344 "termination.m"
              }
#line 342 "termination.m"
            else
#line 341 "termination.m"
              transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__PPIdStatus_13)) == (MR_mktag((MR_Integer) 0)));
#line 330 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 346 "termination.m"
              {
#line 346 "termination.m"
                /* direct tailcall eliminated */
#line 346 "termination.m"
                {
#line 346 "termination.m"
                  MR_Word transform_hlds__termination__HeadVar__2__tmp_copy_2 = transform_hlds__termination__PPIds_8;

#line 346 "termination.m"
                  transform_hlds__termination__HeadVar__2_2 = transform_hlds__termination__HeadVar__2__tmp_copy_2;
#line 346 "termination.m"
                }
#line 346 "termination.m"
                continue;
#line 346 "termination.m"
              }
#line 330 "termination.m"
          }
#line 329 "termination.m"
        return transform_hlds__termination__succeeded;
#line 329 "termination.m"
      }
#line 329 "termination.m"
      break;
#line 329 "termination.m"
    }
#line 326 "termination.m"
}

#line 309 "termination.m"
static MR_Box MR_CALL 
transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0_2(
#line 309 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 309 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1)
#line 309 "termination.m"
{
#line 309 "termination.m"
  {
#line 309 "termination.m"
    MR_Box transform_hlds__termination__wrapper_arg_2;
#line 309 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;
#line 309 "termination.m"
    MR_Word transform_hlds__termination__conv0_HeadVar__2_42;

#line 309 "termination.m"
    {
#line 309 "termination.m"
      transform_hlds__termination__conv0_HeadVar__2_42 = transform_hlds__termination__IntroducedFrom__func__check_scc_pragmas_are_consistent__309__1_1_f_0(((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 309 "termination.m"
    transform_hlds__termination__wrapper_arg_2 = ((MR_Box) (transform_hlds__termination__conv0_HeadVar__2_42));
#line 309 "termination.m"
    return transform_hlds__termination__wrapper_arg_2;
#line 309 "termination.m"
  }
#line 309 "termination.m"
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
      return transform_hlds__termination__succeeded = transform_hlds__term_util__is_termination_known_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1));
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
#line 4238 "transform_hlds.termination.c"
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
#line 330 "termination.m"
        MR_Word transform_hlds__termination__PPId_72;
#line 330 "termination.m"
        MR_Word transform_hlds__termination__PPIds_73;
#line 330 "termination.m"
        MR_Word transform_hlds__termination__ProcInfo_76;
#line 330 "termination.m"
        MR_Word transform_hlds__termination__MaybeTerm_77;
#line 330 "termination.m"
        MR_Word transform_hlds__termination__PPIdStatus_78;
#line 331 "termination.m"
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
#line 330 "termination.m"
        transform_hlds__termination__PPId_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__SCCTerminationKnown_9, (MR_Integer) 0)));
#line 330 "termination.m"
        transform_hlds__termination__PPIds_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__SCCTerminationKnown_9, (MR_Integer) 1)));
#line 331 "termination.m"
        {
#line 331 "termination.m"
          hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26, transform_hlds__termination__PPId_72, &transform_hlds__termination__V_75_75, &transform_hlds__termination__ProcInfo_76);
        }
#line 332 "termination.m"
        {
#line 332 "termination.m"
          hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__termination__ProcInfo_76, &transform_hlds__termination__MaybeTerm_77);
        }
#line 336 "termination.m"
        if ((transform_hlds__termination__MaybeTerm_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 334 "termination.m"
          {
#line 335 "termination.m"
            {
#line 335 "termination.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.termination", (MR_String) "predicate \140transform_hlds.termination.check_procs_known_term\'/3", (MR_String) "no termination info for procedure");
#line 335 "termination.m"
              return;
            }
#line 334 "termination.m"
          }
#line 336 "termination.m"
        else
#line 337 "termination.m"
          transform_hlds__termination__PPIdStatus_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__MaybeTerm_77, (MR_Integer) 0)));
#line 342 "termination.m"
        if (((MR_tag((MR_Word) transform_hlds__termination__KnownTermStatus_16)) == (MR_mktag((MR_Integer) 1))))
#line 344 "termination.m"
          {
#line 344 "termination.m"
            MR_Word transform_hlds__termination__V_82_82;

#line 344 "termination.m"
            transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__PPIdStatus_78)) == (MR_mktag((MR_Integer) 1)));
#line 344 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 344 "termination.m"
              transform_hlds__termination__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__PPIdStatus_78, (MR_Integer) 0)));
#line 344 "termination.m"
          }
#line 342 "termination.m"
        else
#line 341 "termination.m"
          transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__PPIdStatus_78)) == (MR_mktag((MR_Integer) 0)));
#line 330 "termination.m"
        if (transform_hlds__termination__succeeded)
#line 346 "termination.m"
          {
#line 346 "termination.m"
            transform_hlds__termination__succeeded = transform_hlds__termination__check_procs_known_term_3_p_0(transform_hlds__termination__KnownTermStatus_16, transform_hlds__termination__PPIds_73, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26);
          }
#line 299 "termination.m"
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
#line 299 "termination.m"
        else
#line 304 "termination.m"
          {
#line 304 "termination.m"
            MR_Word transform_hlds__termination__Context_17;
#line 304 "termination.m"
            MR_Word transform_hlds__termination__NewTermStatus_18;
#line 304 "termination.m"
            MR_Word transform_hlds__termination__PredIds_19;
#line 304 "termination.m"
            MR_Word transform_hlds__termination__PredNamePieces_22;
#line 304 "termination.m"
            MR_Word transform_hlds__termination__Pieces_23;
#line 304 "termination.m"
            MR_Word transform_hlds__termination__Msg_24;
#line 304 "termination.m"
            MR_Word transform_hlds__termination__Spec_25;
#line 304 "termination.m"
            MR_Word transform_hlds__termination__V_35_35;
#line 304 "termination.m"
            MR_Word transform_hlds__termination__V_36_36;
#line 304 "termination.m"
            MR_Word transform_hlds__termination__V_44_44;
#line 304 "termination.m"
            MR_Word transform_hlds__termination__V_54_54;
#line 304 "termination.m"
            MR_Word transform_hlds__termination__V_55_55;
#line 304 "termination.m"
            MR_Word transform_hlds__termination__V_59_59;

#line 303 "termination.m"
            {
#line 303 "termination.m"
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
#line 306 "termination.m"
            {
#line 306 "termination.m"
              transform_hlds__termination__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 306 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_35_35, 0) = ((MR_Box) (transform_hlds__termination__V_36_36));
#line 306 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 306 "termination.m"
            }
#line 305 "termination.m"
            {
#line 305 "termination.m"
              transform_hlds__termination__NewTermStatus_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 305 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__NewTermStatus_18, 0) = ((MR_Box) (transform_hlds__termination__V_35_35));
#line 305 "termination.m"
            }
#line 307 "termination.m"
            {
#line 307 "termination.m"
              transform_hlds__termination__set_termination_infos_4_p_0(transform_hlds__termination__SCC_6, transform_hlds__termination__NewTermStatus_18, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27);
            }
#line 309 "termination.m"
            {
#line 309 "termination.m"
              transform_hlds__termination__PredIds_19 = mercury__list__map_2_f_0(transform_hlds__termination__TypeCtorInfo_66_66, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &transform_hlds__termination_scalar_common_3[3], transform_hlds__termination__SCCTerminationKnown_9);
            }
#line 311 "termination.m"
            {
#line 311 "termination.m"
              transform_hlds__termination__PredNamePieces_22 = hlds__hlds_error_util__describe_several_pred_names_3_f_0(*transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27, (MR_Integer) 0, transform_hlds__termination__PredIds_19);
            }
#line 314 "termination.m"
            {
#line 314 "termination.m"
              transform_hlds__termination__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 314 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_44_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[31])));
#line 314 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_44_44, 1) = ((MR_Box) (transform_hlds__termination__PredNamePieces_22));
#line 314 "termination.m"
            }
#line 314 "termination.m"
            {
#line 314 "termination.m"
              transform_hlds__termination__Pieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__termination__V_44_44, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[22]));
            }
#line 317 "termination.m"
            {
#line 317 "termination.m"
              transform_hlds__termination__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 317 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__V_55_55, 0) = ((MR_Box) (transform_hlds__termination__Pieces_23));
#line 317 "termination.m"
            }
#line 317 "termination.m"
            {
#line 317 "termination.m"
              transform_hlds__termination__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 317 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_54_54, 0) = ((MR_Box) (transform_hlds__termination__V_55_55));
#line 317 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 317 "termination.m"
            }
#line 317 "termination.m"
            {
#line 317 "termination.m"
              transform_hlds__termination__Msg_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 317 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__Msg_24, 0) = ((MR_Box) (transform_hlds__termination__Context_17));
#line 317 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__Msg_24, 1) = ((MR_Box) (transform_hlds__termination__V_54_54));
#line 317 "termination.m"
            }
#line 318 "termination.m"
            {
#line 318 "termination.m"
              transform_hlds__termination__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 318 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_59_59, 0) = ((MR_Box) (transform_hlds__termination__Msg_24));
#line 318 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 318 "termination.m"
            }
#line 318 "termination.m"
            {
#line 318 "termination.m"
              transform_hlds__termination__Spec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 318 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 318 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 318 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_25, 2) = ((MR_Box) (transform_hlds__termination__V_59_59));
#line 318 "termination.m"
            }
#line 319 "termination.m"
            {
#line 319 "termination.m"
              MR_Word base;
#line 319 "termination.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 319 "termination.m"
              *transform_hlds__termination__STATE_VARIABLE_Specs_29 = base;
#line 319 "termination.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__termination__Spec_25));
#line 319 "termination.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_Specs_0_28));
#line 319 "termination.m"
            }
#line 304 "termination.m"
          }
#line 281 "termination.m"
      }
#line 275 "termination.m"
  }
#line 271 "termination.m"
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
        MR_Word transform_hlds__termination__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
#line 155 "termination.m"
        MR_Word transform_hlds__termination__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));

#line 155 "termination.m"
        if ((transform_hlds__termination__V_163_163 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 157 "termination.m"
          {
#line 157 "termination.m"
            MR_Word transform_hlds__termination__PredInfo_19;
#line 157 "termination.m"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ProcInfo_45_45;
#line 237 "termination.m"
            MR_Word transform_hlds__termination__Attributes_21;
#line 161 "termination.m"
            MR_Word transform_hlds__termination__Goal_20;
#line 161 "termination.m"
            MR_Word transform_hlds__termination__V_46_46;
#line 162 "termination.m"
            MR_Word transform_hlds__termination___GoalInfo_28;
#line 163 "termination.m"
            MR_Word transform_hlds__termination__V_22_22;
#line 163 "termination.m"
            MR_Integer transform_hlds__termination__V_23_23;
#line 163 "termination.m"
            MR_Word transform_hlds__termination__V_24_24;
#line 163 "termination.m"
            MR_Word transform_hlds__termination__V_25_25;
#line 163 "termination.m"
            MR_Word transform_hlds__termination__V_26_26;
#line 163 "termination.m"
            MR_Word transform_hlds__termination__V_27_27;

#line 159 "termination.m"
            {
#line 159 "termination.m"
              hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2, transform_hlds__termination__V_164_164, &transform_hlds__termination__PredInfo_19, &transform_hlds__termination__STATE_VARIABLE_ProcInfo_45_45);
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
#line 163 "termination.m"
            transform_hlds__termination__succeeded = ((((MR_tag((MR_Word) transform_hlds__termination__V_46_46)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__V_46_46, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 163 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 163 "termination.m"
              {
#line 163 "termination.m"
                transform_hlds__termination__Attributes_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__V_46_46, (MR_Integer) 1)));
#line 163 "termination.m"
                transform_hlds__termination__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__V_46_46, (MR_Integer) 2)));
#line 163 "termination.m"
                transform_hlds__termination__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__termination__V_46_46, (MR_Integer) 3)));
#line 163 "termination.m"
                transform_hlds__termination__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__V_46_46, (MR_Integer) 4)));
#line 163 "termination.m"
                transform_hlds__termination__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__V_46_46, (MR_Integer) 5)));
#line 163 "termination.m"
                transform_hlds__termination__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__V_46_46, (MR_Integer) 6)));
#line 163 "termination.m"
                transform_hlds__termination__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__V_46_46, (MR_Integer) 7)));
#line 166 "termination.m"
                {
#line 166 "termination.m"
                  MR_Word transform_hlds__termination__MaybeTermination_29;
#line 166 "termination.m"
                  MR_Word transform_hlds__termination__Context_30;
#line 166 "termination.m"
                  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcInfo_117_117;

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
                            hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_2[3]), transform_hlds__termination__STATE_VARIABLE_ProcInfo_45_45, &transform_hlds__termination__STATE_VARIABLE_ProcInfo_117_117);
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
                          MR_Word transform_hlds__termination__V_118_118;
#line 175 "termination.m"
                          MR_Word transform_hlds__termination__V_119_119;
#line 175 "termination.m"
                          MR_Word transform_hlds__termination__V_120_120;
#line 175 "termination.m"
                          MR_Word transform_hlds__termination__TermStatus_124;

#line 175 "termination.m"
                          {
#line 175 "termination.m"
                            transform_hlds__termination__V_118_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 175 "termination.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__termination__V_118_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 175 "termination.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__termination__V_118_118, 1) = ((MR_Box) (transform_hlds__termination__V_164_164));
#line 175 "termination.m"
                          }
#line 174 "termination.m"
                          {
#line 174 "termination.m"
                            transform_hlds__termination__TermErr_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 174 "termination.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__termination__TermErr_32, 0) = ((MR_Box) (transform_hlds__termination__V_118_118));
#line 174 "termination.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__termination__TermErr_32, 1) = ((MR_Box) (transform_hlds__termination__Context_30));
#line 174 "termination.m"
                          }
#line 176 "termination.m"
                          {
#line 176 "termination.m"
                            transform_hlds__termination__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 176 "termination.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__termination__V_120_120, 0) = ((MR_Box) (transform_hlds__termination__TermErr_32));
#line 176 "termination.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__termination__V_120_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 176 "termination.m"
                          }
#line 176 "termination.m"
                          {
#line 176 "termination.m"
                            transform_hlds__termination__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 176 "termination.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__termination__V_119_119, 0) = ((MR_Box) (transform_hlds__termination__V_120_120));
#line 176 "termination.m"
                          }
#line 176 "termination.m"
                          {
#line 176 "termination.m"
                            transform_hlds__termination__TermStatus_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 176 "termination.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__termination__TermStatus_124, 0) = ((MR_Box) (transform_hlds__termination__V_119_119));
#line 176 "termination.m"
                          }
#line 177 "termination.m"
                          {
#line 177 "termination.m"
                            hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(transform_hlds__termination__TermStatus_124, transform_hlds__termination__STATE_VARIABLE_ProcInfo_45_45, &transform_hlds__termination__STATE_VARIABLE_ProcInfo_117_117);
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
                      MR_Word transform_hlds__termination__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__MaybeTermination_29, (MR_Integer) 0)));

#line 179 "termination.m"
                      if (((MR_tag((MR_Word) transform_hlds__termination__V_165_165)) == (MR_mktag((MR_Integer) 1))))
#line 210 "termination.m"
                        {
#line 210 "termination.m"
                          MR_Word transform_hlds__termination__TermErrs0_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__V_165_165, (MR_Integer) 0)));
#line 211 "termination.m"
                          MR_Word transform_hlds__termination__V_48_48;

#line 211 "termination.m"
                          {
#line 211 "termination.m"
                            transform_hlds__termination__V_48_48 = parse_tree__prog_data__get_terminates_1_f_0(transform_hlds__termination__Attributes_21);
                          }
#line 211 "termination.m"
                          transform_hlds__termination__succeeded = (transform_hlds__termination__V_48_48 == (MR_Integer) 0);
#line 231 "termination.m"
                          if (transform_hlds__termination__succeeded)
#line 213 "termination.m"
                            {
#line 213 "termination.m"
                              MR_Word transform_hlds__termination__TermErrs_39;
#line 213 "termination.m"
                              MR_Word transform_hlds__termination__V_50_50;
#line 213 "termination.m"
                              MR_Word transform_hlds__termination__V_53_53;
#line 213 "termination.m"
                              MR_Word transform_hlds__termination__V_72_72;
#line 213 "termination.m"
                              MR_Word transform_hlds__termination__V_73_73;
#line 213 "termination.m"
                              MR_Word transform_hlds__termination__V_77_77;
#line 213 "termination.m"
                              MR_Word transform_hlds__termination__TermStatus_131;
#line 213 "termination.m"
                              MR_Word transform_hlds__termination__TermErr_132;
#line 213 "termination.m"
                              MR_Word transform_hlds__termination__ProcNamePieces_133;
#line 213 "termination.m"
                              MR_Word transform_hlds__termination__Pieces_134;
#line 213 "termination.m"
                              MR_Word transform_hlds__termination__Msg_135;
#line 213 "termination.m"
                              MR_Word transform_hlds__termination__Spec_136;

#line 212 "termination.m"
                              {
#line 212 "termination.m"
                                transform_hlds__termination__TermErr_132 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 212 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__TermErr_132, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 212 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__TermErr_132, 1) = ((MR_Box) (transform_hlds__termination__Context_30));
#line 212 "termination.m"
                              }
#line 214 "termination.m"
                              {
#line 214 "termination.m"
                                transform_hlds__termination__TermErrs_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 214 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__TermErrs_39, 0) = ((MR_Box) (transform_hlds__termination__TermErr_132));
#line 214 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__TermErrs_39, 1) = ((MR_Box) (transform_hlds__termination__TermErrs0_38));
#line 214 "termination.m"
                              }
#line 215 "termination.m"
                              {
#line 215 "termination.m"
                                transform_hlds__termination__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 215 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_50_50, 0) = ((MR_Box) (transform_hlds__termination__TermErrs_39));
#line 215 "termination.m"
                              }
#line 215 "termination.m"
                              {
#line 215 "termination.m"
                                transform_hlds__termination__TermStatus_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 215 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__TermStatus_131, 0) = ((MR_Box) (transform_hlds__termination__V_50_50));
#line 215 "termination.m"
                              }
#line 217 "termination.m"
                              {
#line 217 "termination.m"
                                hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(transform_hlds__termination__TermStatus_131, transform_hlds__termination__STATE_VARIABLE_ProcInfo_45_45, &transform_hlds__termination__STATE_VARIABLE_ProcInfo_117_117);
                              }
#line 219 "termination.m"
                              {
#line 219 "termination.m"
                                transform_hlds__termination__ProcNamePieces_133 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2, (MR_Integer) 0, transform_hlds__termination__V_164_164);
                              }
#line 222 "termination.m"
                              {
#line 222 "termination.m"
                                transform_hlds__termination__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 222 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_53_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[31])));
#line 222 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_53_53, 1) = ((MR_Box) (transform_hlds__termination__ProcNamePieces_133));
#line 222 "termination.m"
                              }
#line 222 "termination.m"
                              {
#line 222 "termination.m"
                                transform_hlds__termination__Pieces_134 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__termination__V_53_53, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[13]));
                              }
#line 227 "termination.m"
                              {
#line 227 "termination.m"
                                transform_hlds__termination__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 227 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__V_73_73, 0) = ((MR_Box) (transform_hlds__termination__Pieces_134));
#line 227 "termination.m"
                              }
#line 227 "termination.m"
                              {
#line 227 "termination.m"
                                transform_hlds__termination__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 227 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_72_72, 0) = ((MR_Box) (transform_hlds__termination__V_73_73));
#line 227 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 227 "termination.m"
                              }
#line 227 "termination.m"
                              {
#line 227 "termination.m"
                                transform_hlds__termination__Msg_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 227 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__Msg_135, 0) = ((MR_Box) (transform_hlds__termination__Context_30));
#line 227 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__Msg_135, 1) = ((MR_Box) (transform_hlds__termination__V_72_72));
#line 227 "termination.m"
                              }
#line 229 "termination.m"
                              {
#line 229 "termination.m"
                                transform_hlds__termination__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 229 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_77_77, 0) = ((MR_Box) (transform_hlds__termination__Msg_135));
#line 229 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 229 "termination.m"
                              }
#line 228 "termination.m"
                              {
#line 228 "termination.m"
                                transform_hlds__termination__Spec_136 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 228 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_136, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 228 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_136, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 228 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_136, 2) = ((MR_Box) (transform_hlds__termination__V_77_77));
#line 228 "termination.m"
                              }
#line 230 "termination.m"
                              {
#line 230 "termination.m"
                                MR_Word base;
#line 230 "termination.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 230 "termination.m"
                                *transform_hlds__termination__HeadVar__5_5 = base;
#line 230 "termination.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__termination__Spec_136));
#line 230 "termination.m"
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__termination__HeadVar__4_4));
#line 230 "termination.m"
                              }
#line 213 "termination.m"
                            }
#line 231 "termination.m"
                          else
#line 232 "termination.m"
                            {
#line 232 "termination.m"
                              transform_hlds__termination__STATE_VARIABLE_ProcInfo_117_117 = transform_hlds__termination__STATE_VARIABLE_ProcInfo_45_45;
#line 232 "termination.m"
                              *transform_hlds__termination__HeadVar__5_5 = transform_hlds__termination__HeadVar__4_4;
#line 232 "termination.m"
                            }
#line 210 "termination.m"
                        }
#line 179 "termination.m"
                      else
#line 203 "termination.m"
                        {
#line 184 "termination.m"
                          MR_Word transform_hlds__termination__V_81_81;

#line 184 "termination.m"
                          {
#line 184 "termination.m"
                            transform_hlds__termination__V_81_81 = parse_tree__prog_data__get_terminates_1_f_0(transform_hlds__termination__Attributes_21);
                          }
#line 184 "termination.m"
                          transform_hlds__termination__succeeded = (transform_hlds__termination__V_81_81 == (MR_Integer) 1);
#line 203 "termination.m"
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
                              MR_Word transform_hlds__termination__V_83_83;
#line 186 "termination.m"
                              MR_Word transform_hlds__termination__V_84_84;
#line 186 "termination.m"
                              MR_Word transform_hlds__termination__V_88_88;
#line 186 "termination.m"
                              MR_Word transform_hlds__termination__V_107_107;
#line 186 "termination.m"
                              MR_Word transform_hlds__termination__V_108_108;
#line 186 "termination.m"
                              MR_Word transform_hlds__termination__V_112_112;
#line 186 "termination.m"
                              MR_Word transform_hlds__termination__TermStatus_125;
#line 186 "termination.m"
                              MR_Word transform_hlds__termination__TermErr_126;

#line 185 "termination.m"
                              {
#line 185 "termination.m"
                                transform_hlds__termination__TermErr_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 185 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__TermErr_126, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 185 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__TermErr_126, 1) = ((MR_Box) (transform_hlds__termination__Context_30));
#line 185 "termination.m"
                              }
#line 187 "termination.m"
                              {
#line 187 "termination.m"
                                transform_hlds__termination__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 187 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_84_84, 0) = ((MR_Box) (transform_hlds__termination__TermErr_126));
#line 187 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 187 "termination.m"
                              }
#line 187 "termination.m"
                              {
#line 187 "termination.m"
                                transform_hlds__termination__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 187 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_83_83, 0) = ((MR_Box) (transform_hlds__termination__V_84_84));
#line 187 "termination.m"
                              }
#line 187 "termination.m"
                              {
#line 187 "termination.m"
                                transform_hlds__termination__TermStatus_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 187 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__TermStatus_125, 0) = ((MR_Box) (transform_hlds__termination__V_83_83));
#line 187 "termination.m"
                              }
#line 189 "termination.m"
                              {
#line 189 "termination.m"
                                hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(transform_hlds__termination__TermStatus_125, transform_hlds__termination__STATE_VARIABLE_ProcInfo_45_45, &transform_hlds__termination__STATE_VARIABLE_ProcInfo_117_117);
                              }
#line 191 "termination.m"
                              {
#line 191 "termination.m"
                                transform_hlds__termination__ProcNamePieces_34 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2, (MR_Integer) 0, transform_hlds__termination__V_164_164);
                              }
#line 194 "termination.m"
                              {
#line 194 "termination.m"
                                transform_hlds__termination__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 194 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_88_88, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[31])));
#line 194 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_88_88, 1) = ((MR_Box) (transform_hlds__termination__ProcNamePieces_34));
#line 194 "termination.m"
                              }
#line 194 "termination.m"
                              {
#line 194 "termination.m"
                                transform_hlds__termination__Pieces_35 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__termination__V_88_88, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[18]));
                              }
#line 199 "termination.m"
                              {
#line 199 "termination.m"
                                transform_hlds__termination__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 199 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__V_108_108, 0) = ((MR_Box) (transform_hlds__termination__Pieces_35));
#line 199 "termination.m"
                              }
#line 199 "termination.m"
                              {
#line 199 "termination.m"
                                transform_hlds__termination__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 199 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_107_107, 0) = ((MR_Box) (transform_hlds__termination__V_108_108));
#line 199 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_107_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 199 "termination.m"
                              }
#line 199 "termination.m"
                              {
#line 199 "termination.m"
                                transform_hlds__termination__Msg_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 199 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__Msg_36, 0) = ((MR_Box) (transform_hlds__termination__Context_30));
#line 199 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__Msg_36, 1) = ((MR_Box) (transform_hlds__termination__V_107_107));
#line 199 "termination.m"
                              }
#line 201 "termination.m"
                              {
#line 201 "termination.m"
                                transform_hlds__termination__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 201 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_112_112, 0) = ((MR_Box) (transform_hlds__termination__Msg_36));
#line 201 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_112_112, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 201 "termination.m"
                              }
#line 200 "termination.m"
                              {
#line 200 "termination.m"
                                transform_hlds__termination__Spec_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 200 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 200 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 200 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_37, 2) = ((MR_Box) (transform_hlds__termination__V_112_112));
#line 200 "termination.m"
                              }
#line 202 "termination.m"
                              {
#line 202 "termination.m"
                                MR_Word base;
#line 202 "termination.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 202 "termination.m"
                                *transform_hlds__termination__HeadVar__5_5 = base;
#line 202 "termination.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__termination__Spec_37));
#line 202 "termination.m"
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__termination__HeadVar__4_4));
#line 202 "termination.m"
                              }
#line 186 "termination.m"
                            }
#line 203 "termination.m"
                          else
#line 204 "termination.m"
                            {
#line 204 "termination.m"
                              transform_hlds__termination__STATE_VARIABLE_ProcInfo_117_117 = transform_hlds__termination__STATE_VARIABLE_ProcInfo_45_45;
#line 204 "termination.m"
                              *transform_hlds__termination__HeadVar__5_5 = transform_hlds__termination__HeadVar__4_4;
#line 204 "termination.m"
                            }
#line 203 "termination.m"
                        }
#line 179 "termination.m"
                    }
#line 235 "termination.m"
                  {
#line 235 "termination.m"
                    hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(transform_hlds__termination__V_164_164, transform_hlds__termination__PredInfo_19, transform_hlds__termination__STATE_VARIABLE_ProcInfo_117_117, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_3);
#line 235 "termination.m"
                    return;
                  }
#line 166 "termination.m"
                }
#line 163 "termination.m"
              }
#line 163 "termination.m"
            else
#line 238 "termination.m"
              {
#line 238 "termination.m"
                *transform_hlds__termination__HeadVar__5_5 = transform_hlds__termination__HeadVar__4_4;
#line 238 "termination.m"
                *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_3 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2;
#line 238 "termination.m"
              }
#line 157 "termination.m"
          }
#line 155 "termination.m"
        else
#line 241 "termination.m"
          {
#line 241 "termination.m"
            *transform_hlds__termination__HeadVar__5_5 = transform_hlds__termination__HeadVar__4_4;
#line 241 "termination.m"
            *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_3 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2;
#line 241 "termination.m"
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
#line 912 "termination.m"
  {
#line 912 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 912 "termination.m"
    MR_Word transform_hlds__termination__PredInfo_8;
#line 912 "termination.m"
    MR_Word transform_hlds__termination__ImportStatus_9;
#line 912 "termination.m"
    MR_Word transform_hlds__termination__TypeSpecInfo_10;
#line 912 "termination.m"
    MR_Word transform_hlds__termination__TypeSpecForcePreds_12;
#line 916 "termination.m"
    MR_Word transform_hlds__termination__V_11_11;
#line 916 "termination.m"
    MR_Word transform_hlds__termination__V_13_13;
#line 916 "termination.m"
    MR_Word transform_hlds__termination__V_14_14;
#line 929 "termination.m"
    MR_Word transform_hlds__termination__TypeCtorInfo_25_25;

#line 913 "termination.m"
    {
#line 913 "termination.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__termination__ModuleInfo_5, transform_hlds__termination__PredId_6, &transform_hlds__termination__PredInfo_8);
    }
#line 914 "termination.m"
    {
#line 914 "termination.m"
      hlds__hlds_pred__pred_info_get_import_status_2_p_0(transform_hlds__termination__PredInfo_8, &transform_hlds__termination__ImportStatus_9);
    }
#line 915 "termination.m"
    {
#line 915 "termination.m"
      hlds__hlds_module__module_info_get_type_spec_info_2_p_0(transform_hlds__termination__ModuleInfo_5, &transform_hlds__termination__TypeSpecInfo_10);
    }
#line 916 "termination.m"
    transform_hlds__termination__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__TypeSpecInfo_10, (MR_Integer) 0)));
#line 916 "termination.m"
    transform_hlds__termination__TypeSpecForcePreds_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__TypeSpecInfo_10, (MR_Integer) 1)));
#line 916 "termination.m"
    transform_hlds__termination__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__TypeSpecInfo_10, (MR_Integer) 2)));
#line 916 "termination.m"
    transform_hlds__termination__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__TypeSpecInfo_10, (MR_Integer) 3)));
#line 921 "termination.m"
    if ((transform_hlds__termination__ImportStatus_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 920 "termination.m"
      transform_hlds__termination__succeeded = MR_TRUE;
#line 921 "termination.m"
    else
#line 921 "termination.m"
      if ((transform_hlds__termination__ImportStatus_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 922 "termination.m"
        transform_hlds__termination__succeeded = MR_TRUE;
#line 921 "termination.m"
      else
#line 921 "termination.m"
        transform_hlds__termination__succeeded = MR_FALSE;
#line 923 "termination.m"
    if (transform_hlds__termination__succeeded)
#line 923 "termination.m"
      {
#line 924 "termination.m"
        {
#line 924 "termination.m"
          transform_hlds__termination__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(transform_hlds__termination__PredInfo_8);
        }
#line 924 "termination.m"
        transform_hlds__termination__succeeded = !(transform_hlds__termination__succeeded);
#line 923 "termination.m"
        if (transform_hlds__termination__succeeded)
#line 923 "termination.m"
          {
#line 5263 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_25_25 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 929 "termination.m"
            {
#line 929 "termination.m"
              transform_hlds__termination__succeeded = mercury__set__member_2_p_0(transform_hlds__termination__TypeCtorInfo_25_25, ((MR_Box) (transform_hlds__termination__PredId_6)), transform_hlds__termination__TypeSpecForcePreds_12);
            }
#line 929 "termination.m"
            transform_hlds__termination__succeeded = !(transform_hlds__termination__succeeded);
#line 923 "termination.m"
          }
#line 923 "termination.m"
      }
#line 940 "termination.m"
    if (transform_hlds__termination__succeeded)
#line 931 "termination.m"
      {
#line 931 "termination.m"
        MR_String transform_hlds__termination__PredName_15;
#line 931 "termination.m"
        MR_Word transform_hlds__termination__ProcIds_16;
#line 931 "termination.m"
        MR_Word transform_hlds__termination__PredOrFunc_17;
#line 931 "termination.m"
        MR_Word transform_hlds__termination__ModuleName_18;
#line 931 "termination.m"
        MR_Word transform_hlds__termination__ProcTable_19;
#line 931 "termination.m"
        MR_Word transform_hlds__termination__Context_20;
#line 931 "termination.m"
        MR_Word transform_hlds__termination__SymName_21;

#line 931 "termination.m"
        {
#line 931 "termination.m"
          transform_hlds__termination__PredName_15 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__termination__PredInfo_8);
        }
#line 932 "termination.m"
        {
#line 932 "termination.m"
          transform_hlds__termination__ProcIds_16 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__termination__PredInfo_8);
        }
#line 933 "termination.m"
        {
#line 933 "termination.m"
          transform_hlds__termination__PredOrFunc_17 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__termination__PredInfo_8);
        }
#line 934 "termination.m"
        {
#line 934 "termination.m"
          transform_hlds__termination__ModuleName_18 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__termination__PredInfo_8);
        }
#line 935 "termination.m"
        {
#line 935 "termination.m"
          hlds__hlds_pred__pred_info_get_procedures_2_p_0(transform_hlds__termination__PredInfo_8, &transform_hlds__termination__ProcTable_19);
        }
#line 936 "termination.m"
        {
#line 936 "termination.m"
          hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__termination__PredInfo_8, &transform_hlds__termination__Context_20);
        }
#line 937 "termination.m"
        {
#line 937 "termination.m"
          transform_hlds__termination__SymName_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 937 "termination.m"
          MR_hl_field(MR_mktag(1), transform_hlds__termination__SymName_21, 0) = ((MR_Box) (transform_hlds__termination__ModuleName_18));
#line 937 "termination.m"
          MR_hl_field(MR_mktag(1), transform_hlds__termination__SymName_21, 1) = ((MR_Box) (transform_hlds__termination__PredName_15));
#line 937 "termination.m"
        }
#line 938 "termination.m"
        {
#line 938 "termination.m"
          transform_hlds__termination__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_116_101_114_109_105_110_97_116_105_111_110_95_105_110_102_111_95_95_91_49_93_95_48_8_p_0(transform_hlds__termination__ProcIds_16, transform_hlds__termination__ProcTable_19, transform_hlds__termination__PredOrFunc_17, transform_hlds__termination__SymName_21, transform_hlds__termination__Context_20);
#line 938 "termination.m"
          return;
        }
#line 931 "termination.m"
      }
#line 940 "termination.m"
    else
#line 938 "termination.m"
      {
#line 938 "termination.m"
      }
#line 912 "termination.m"
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

#line 269 "termination.m"
static void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_5_p_0_2(
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
#line 269 "termination.m"
    MR_Box transform_hlds__termination__conv7_STATE_VARIABLE_ModuleInfo_32_32;
#line 269 "termination.m"
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
      libs__globals__lookup_int_option_3_p_0(transform_hlds__termination__Globals_9, (MR_Integer) 416, &transform_hlds__termination__MaxErrors_12);
    }
#line 96 "termination.m"
    {
#line 96 "termination.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__termination__Globals_9, (MR_Integer) 417, &transform_hlds__termination__MaxPaths_13);
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
      mercury__list__foldl2_6_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__termination_scalar_common_1[1], (MR_Word) &transform_hlds__termination_scalar_common_3[1], transform_hlds__termination__SCCs_17, ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_29_29)), &transform_hlds__termination__conv3_STATE_VARIABLE_ModuleInfo_30_30, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__termination__conv2_Specs1_18);
    }
#line 149 "termination.m"
    transform_hlds__termination__STATE_VARIABLE_ModuleInfo_30_30 = ((MR_Word) transform_hlds__termination__conv3_STATE_VARIABLE_ModuleInfo_30_30);
#line 149 "termination.m"
    transform_hlds__termination__Specs1_18 = ((MR_Word) transform_hlds__termination__conv2_Specs1_18);
#line 269 "termination.m"
    {
#line 269 "termination.m"
      mercury__list__foldl2_6_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__termination_scalar_common_1[1], (MR_Word) &transform_hlds__termination_scalar_common_3[2], transform_hlds__termination__SCCs_17, ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_30_30)), &transform_hlds__termination__conv7_STATE_VARIABLE_ModuleInfo_32_32, ((MR_Box) (transform_hlds__termination__Specs1_18)), &transform_hlds__termination__conv6_Specs_7);
    }
#line 269 "termination.m"
    transform_hlds__termination__STATE_VARIABLE_ModuleInfo_32_32 = ((MR_Word) transform_hlds__termination__conv7_STATE_VARIABLE_ModuleInfo_32_32);
#line 269 "termination.m"
    *transform_hlds__termination__Specs_7 = ((MR_Word) transform_hlds__termination__conv6_Specs_7);
#line 117 "termination.m"
    {
#line 117 "termination.m"
      transform_hlds__termination__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 117 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_33_33, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_5[0]));
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
