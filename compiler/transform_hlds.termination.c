/*
** Automatically generated from `termination.m'
** by the Mercury compiler,
** version rotd-2015-01-28
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
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
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




#line 144 "transform_hlds.termination.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__termination__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 147 "transform_hlds.termination.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__termination__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 947 "termination.m"
static void MR_CALL 
transform_hlds__termination__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_116_101_114_109_105_110_97_116_105_111_110_95_105_110_102_111_95_95_91_49_93_95_48_8_p_0(
#line 947 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_2,
#line 947 "termination.m"
  MR_Word transform_hlds__termination__ProcTable_3,
#line 947 "termination.m"
  MR_Word transform_hlds__termination__PredOrFunc_4,
#line 947 "termination.m"
  MR_Word transform_hlds__termination__SymName_5,
#line 947 "termination.m"
  MR_Word transform_hlds__termination__Context_6);

#line 548 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__548__1_1_p_0(
#line 548 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_49);

#line 521 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__521__1_2_p_0(
#line 521 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35,
#line 521 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_47);

#line 505 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__505__1_2_p_0(
#line 505 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35,
#line 505 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_41);

#line 398 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__398__1_1_p_0(
#line 398 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_59);

#line 364 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__364__1_2_p_0(
#line 364 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47,
#line 364 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_51);

#line 312 "termination.m"
static MR_Word MR_CALL 
transform_hlds__termination__IntroducedFrom__func__check_scc_pragmas_are_consistent__312__1_1_f_0(
#line 312 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_41);

#line 902 "termination.m"
static void MR_CALL 
transform_hlds__termination__make_termination_opt_int_4_p_0_1(
#line 902 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 902 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1,
#line 902 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_2,
#line 902 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_3);

#line 883 "termination.m"
static void MR_CALL 
transform_hlds__termination__make_termination_opt_int_4_p_0(
#line 883 "termination.m"
  MR_Word transform_hlds__termination__PredIds_5,
#line 883 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_6);

#line 855 "termination.m"
static void MR_CALL 
transform_hlds__termination__change_procs_termination_info_5_p_0(
#line 855 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 855 "termination.m"
  MR_Word transform_hlds__termination__Override_2,
#line 855 "termination.m"
  MR_Word transform_hlds__termination__Termination_3,
#line 855 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4,
#line 855 "termination.m"
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

#line 604 "termination.m"
static void MR_CALL 
transform_hlds__termination__check_preds_5_p_0(
#line 604 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 604 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2,
#line 604 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_3);

#line 577 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__is_solver_init_wrapper_pred_2_p_0(
#line 577 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_3,
#line 577 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_2);

#line 548 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__report_termination_errors_6_p_0_4(
#line 548 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 548 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 533 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__report_termination_errors_6_p_0_3(
#line 533 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 533 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 521 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__report_termination_errors_6_p_0_2(
#line 521 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 521 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 505 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__report_termination_errors_6_p_0_1(
#line 505 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 505 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 495 "termination.m"
static void MR_CALL 
transform_hlds__termination__report_termination_errors_6_p_0(
#line 495 "termination.m"
  MR_Word transform_hlds__termination__SCC_7,
#line 495 "termination.m"
  MR_Word transform_hlds__termination__Errors_8,
#line 495 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35,
#line 495 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_36);

#line 476 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_termination_infos_4_p_0(
#line 476 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 476 "termination.m"
  MR_Word transform_hlds__termination__TerminationInfo_2,
#line 476 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3,
#line 476 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4);

#line 456 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_infinite_arg_size_infos_4_p_0(
#line 456 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 456 "termination.m"
  MR_Word transform_hlds__termination__ArgSizeInfo_2,
#line 456 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3,
#line 456 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4);

#line 435 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_finite_arg_size_infos_4_p_0(
#line 435 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 435 "termination.m"
  MR_Word transform_hlds__termination__OutputSupplierMap_2,
#line 435 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3,
#line 435 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4);

#line 398 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0_3(
#line 398 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 398 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 389 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0_2(
#line 389 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 389 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 364 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0_1(
#line 364 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 364 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 360 "termination.m"
static void MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0(
#line 360 "termination.m"
  MR_Word transform_hlds__termination__PassInfo_7,
#line 360 "termination.m"
  MR_Word transform_hlds__termination__SCC_8,
#line 360 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47,
#line 360 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_48);

#line 329 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__check_procs_known_term_3_p_0(
#line 329 "termination.m"
  MR_Word transform_hlds__termination__Status_1,
#line 329 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_2,
#line 329 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_3);

#line 312 "termination.m"
static MR_Box MR_CALL 
transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0_2(
#line 312 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 312 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 279 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0_1(
#line 279 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 279 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 274 "termination.m"
static void MR_CALL 
transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0(
#line 274 "termination.m"
  MR_Word transform_hlds__termination__SCC_6,
#line 274 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26,
#line 274 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27,
#line 274 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_0_28,
#line 274 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_Specs_29);

#line 154 "termination.m"
static void MR_CALL 
transform_hlds__termination__check_foreign_code_attributes_2_5_p_0(
#line 154 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 154 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2,
#line 154 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_3,
#line 154 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__4_4,
#line 154 "termination.m"
  MR_Word * transform_hlds__termination__HeadVar__5_5);

#line 120 "termination.m"
static void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_5_p_0_3(
#line 120 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 120 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1,
#line 120 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_2,
#line 120 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_3,
#line 120 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_4,
#line 120 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_5);

#line 272 "termination.m"
static void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_5_p_0_2(
#line 272 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 272 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1,
#line 272 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_2,
#line 272 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_3,
#line 272 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_4,
#line 272 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_5);

#line 152 "termination.m"
static void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_5_p_0_1(
#line 152 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 152 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1,
#line 152 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_2,
#line 152 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_3,
#line 152 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_4,
#line 152 "termination.m"
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



#line 847 "transform_hlds.termination.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__termination__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 855 "transform_hlds.termination.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__termination__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 947 "termination.m"
static void MR_CALL 
transform_hlds__termination__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_116_101_114_109_105_110_97_116_105_111_110_95_105_110_102_111_95_95_91_49_93_95_48_8_p_0(
#line 947 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_2,
#line 947 "termination.m"
  MR_Word transform_hlds__termination__ProcTable_3,
#line 947 "termination.m"
  MR_Word transform_hlds__termination__PredOrFunc_4,
#line 947 "termination.m"
  MR_Word transform_hlds__termination__SymName_5,
#line 947 "termination.m"
  MR_Word transform_hlds__termination__Context_6)
#line 947 "termination.m"
{
#line 951 "termination.m"
  while (MR_TRUE)
#line 951 "termination.m"
    {
#line 951 "termination.m"
      /* tailcall optimized into a loop */
#line 951 "termination.m"
      {
#line 951 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 951 "termination.m"
        if ((transform_hlds__termination__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 951 "termination.m"
          {
#line 951 "termination.m"
          }
#line 951 "termination.m"
        else
#line 953 "termination.m"
          {
#line 953 "termination.m"
            MR_Integer transform_hlds__termination__ProcId_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__2_2, (MR_Integer) 0)));
#line 953 "termination.m"
            MR_Word transform_hlds__termination__ProcIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__2_2, (MR_Integer) 1)));
#line 953 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo_25;
#line 953 "termination.m"
            MR_Word transform_hlds__termination__ArgSize_26;
#line 953 "termination.m"
            MR_Word transform_hlds__termination__Termination_27;
#line 953 "termination.m"
            MR_Word transform_hlds__termination__ModeList_28;
#line 954 "termination.m"
            MR_Box transform_hlds__termination__conv0_ProcInfo_25;

#line 954 "termination.m"
            {
#line 954 "termination.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__termination__ProcTable_3, ((MR_Box) (transform_hlds__termination__ProcId_18)), &transform_hlds__termination__conv0_ProcInfo_25);
            }
#line 954 "termination.m"
            transform_hlds__termination__ProcInfo_25 = ((MR_Word) transform_hlds__termination__conv0_ProcInfo_25);
#line 955 "termination.m"
            {
#line 955 "termination.m"
              hlds__hlds_pred__proc_info_get_maybe_arg_size_info_2_p_0(transform_hlds__termination__ProcInfo_25, &transform_hlds__termination__ArgSize_26);
            }
#line 956 "termination.m"
            {
#line 956 "termination.m"
              hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__termination__ProcInfo_25, &transform_hlds__termination__Termination_27);
            }
#line 957 "termination.m"
            {
#line 957 "termination.m"
              hlds__hlds_pred__proc_info_declared_argmodes_2_p_0(transform_hlds__termination__ProcInfo_25, &transform_hlds__termination__ModeList_28);
            }
#line 958 "termination.m"
            {
#line 958 "termination.m"
              parse_tree__mercury_to_mercury__write_pragma_termination_info_components_8_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[4], (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, transform_hlds__termination__PredOrFunc_4, transform_hlds__termination__SymName_5, transform_hlds__termination__ModeList_28, transform_hlds__termination__ArgSize_26, transform_hlds__termination__Termination_27, transform_hlds__termination__Context_6);
            }
#line 960 "termination.m"
            /* direct tailcall eliminated */
#line 960 "termination.m"
            {
#line 960 "termination.m"
              MR_Word transform_hlds__termination__HeadVar__2__tmp_copy_2 = transform_hlds__termination__ProcIds_19;

#line 960 "termination.m"
              transform_hlds__termination__HeadVar__2_2 = transform_hlds__termination__HeadVar__2__tmp_copy_2;
#line 960 "termination.m"
            }
#line 960 "termination.m"
            continue;
#line 953 "termination.m"
          }
#line 951 "termination.m"
      }
#line 951 "termination.m"
      break;
#line 951 "termination.m"
    }
#line 947 "termination.m"
}

#line 548 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__548__1_1_p_0(
#line 548 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_49)
#line 548 "termination.m"
{
#line 548 "termination.m"
  {
#line 548 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 548 "termination.m"
    MR_Word transform_hlds__termination__Error_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__HeadVar__1_49, (MR_Integer) 0)));
#line 548 "termination.m"
    MR_Word transform_hlds__termination__V_50_50;
#line 549 "termination.m"
    MR_Word transform_hlds__termination___Context_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__HeadVar__1_49, (MR_Integer) 1)));

#line 550 "termination.m"
    {
#line 550 "termination.m"
      transform_hlds__termination__V_50_50 = transform_hlds__term_errors__is_indirect_error_1_f_0(transform_hlds__termination__Error_30);
    }
#line 550 "termination.m"
    transform_hlds__termination__succeeded = (transform_hlds__termination__V_50_50 == (MR_Integer) 0);
#line 548 "termination.m"
    return transform_hlds__termination__succeeded;
#line 548 "termination.m"
  }
#line 548 "termination.m"
}

#line 521 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__521__1_2_p_0(
#line 521 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35,
#line 521 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_47)
#line 521 "termination.m"
{
#line 521 "termination.m"
  {
#line 521 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 521 "termination.m"
    MR_Word transform_hlds__termination__PredInfo_54;
#line 522 "termination.m"
    MR_Word transform_hlds__termination__V_23_23;

#line 522 "termination.m"
    {
#line 522 "termination.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35, transform_hlds__termination__HeadVar__2_47, &transform_hlds__termination__PredInfo_54, &transform_hlds__termination__V_23_23);
    }
#line 523 "termination.m"
    {
#line 523 "termination.m"
      transform_hlds__termination__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(transform_hlds__termination__PredInfo_54);
    }
#line 523 "termination.m"
    transform_hlds__termination__succeeded = !(transform_hlds__termination__succeeded);
#line 521 "termination.m"
    return transform_hlds__termination__succeeded;
#line 521 "termination.m"
  }
#line 521 "termination.m"
}

#line 505 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__505__1_2_p_0(
#line 505 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35,
#line 505 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_41)
#line 505 "termination.m"
{
#line 505 "termination.m"
  {
#line 505 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 505 "termination.m"
    MR_Word transform_hlds__termination__PredInfo_16;
#line 505 "termination.m"
    MR_Word transform_hlds__termination__Markers_18;
#line 505 "termination.m"
    MR_Word transform_hlds__termination__V_42_42;
#line 506 "termination.m"
    MR_Word transform_hlds__termination__V_17_17;

#line 506 "termination.m"
    {
#line 506 "termination.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35, transform_hlds__termination__HeadVar__2_41, &transform_hlds__termination__PredInfo_16, &transform_hlds__termination__V_17_17);
    }
#line 507 "termination.m"
    {
#line 507 "termination.m"
      transform_hlds__termination__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(transform_hlds__termination__PredInfo_16);
    }
#line 507 "termination.m"
    transform_hlds__termination__succeeded = !(transform_hlds__termination__succeeded);
#line 505 "termination.m"
    if (transform_hlds__termination__succeeded)
#line 505 "termination.m"
      {
#line 508 "termination.m"
        {
#line 508 "termination.m"
          hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__termination__PredInfo_16, &transform_hlds__termination__Markers_18);
        }
#line 509 "termination.m"
        transform_hlds__termination__V_42_42 = (MR_Integer) 19;
#line 509 "termination.m"
        {
#line 509 "termination.m"
          return transform_hlds__termination__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__termination__Markers_18, transform_hlds__termination__V_42_42);
        }
#line 505 "termination.m"
      }
#line 505 "termination.m"
    return transform_hlds__termination__succeeded;
#line 505 "termination.m"
  }
#line 505 "termination.m"
}

#line 398 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__398__1_1_p_0(
#line 398 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_59)
#line 398 "termination.m"
{
#line 398 "termination.m"
  {
#line 398 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 398 "termination.m"
    MR_Word transform_hlds__termination__Error_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__HeadVar__1_59, (MR_Integer) 0)));
#line 398 "termination.m"
    MR_Word transform_hlds__termination__V_60_60;
#line 399 "termination.m"
    MR_Word transform_hlds__termination__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__HeadVar__1_59, (MR_Integer) 1)));

#line 400 "termination.m"
    {
#line 400 "termination.m"
      transform_hlds__termination__V_60_60 = transform_hlds__term_errors__is_fatal_error_1_f_0(transform_hlds__termination__Error_32);
    }
#line 400 "termination.m"
    transform_hlds__termination__succeeded = (transform_hlds__termination__V_60_60 == (MR_Integer) 1);
#line 398 "termination.m"
    return transform_hlds__termination__succeeded;
#line 398 "termination.m"
  }
#line 398 "termination.m"
}

#line 364 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__364__1_2_p_0(
#line 364 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47,
#line 364 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_51)
#line 364 "termination.m"
{
#line 364 "termination.m"
  {
#line 364 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 364 "termination.m"
    MR_Word transform_hlds__termination__ProcInfo_14;
#line 364 "termination.m"
    MR_Word transform_hlds__termination__V_72_72;
#line 365 "termination.m"
    MR_Word transform_hlds__termination__V_13_13;
#line 366 "termination.m"
    MR_Word transform_hlds__termination__V_77_77;

#line 365 "termination.m"
    {
#line 365 "termination.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47, transform_hlds__termination__HeadVar__2_51, &transform_hlds__termination__V_13_13, &transform_hlds__termination__ProcInfo_14);
    }
#line 366 "termination.m"
    {
#line 366 "termination.m"
      hlds__hlds_pred__proc_info_get_maybe_arg_size_info_2_p_0(transform_hlds__termination__ProcInfo_14, &transform_hlds__termination__V_72_72);
    }
#line 366 "termination.m"
    transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__V_72_72)) == (MR_mktag((MR_Integer) 1)));
#line 366 "termination.m"
    if (transform_hlds__termination__succeeded)
#line 366 "termination.m"
      transform_hlds__termination__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__V_72_72, (MR_Integer) 0)));
#line 364 "termination.m"
    return transform_hlds__termination__succeeded;
#line 364 "termination.m"
  }
#line 364 "termination.m"
}

#line 312 "termination.m"
static MR_Word MR_CALL 
transform_hlds__termination__IntroducedFrom__func__check_scc_pragmas_are_consistent__312__1_1_f_0(
#line 312 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_41)
#line 312 "termination.m"
{
#line 312 "termination.m"
  {
#line 312 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 312 "termination.m"
    MR_Word transform_hlds__termination__HeadVar__2_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__HeadVar__1_41, (MR_Integer) 0)));
#line 312 "termination.m"
    MR_Integer transform_hlds__termination__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__HeadVar__1_41, (MR_Integer) 1)));

#line 312 "termination.m"
    return transform_hlds__termination__HeadVar__2_42;
#line 312 "termination.m"
  }
#line 312 "termination.m"
}

#line 902 "termination.m"
static void MR_CALL 
transform_hlds__termination__make_termination_opt_int_4_p_0_1(
#line 902 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 902 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1,
#line 902 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_2,
#line 902 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_3)
#line 902 "termination.m"
{
#line 902 "termination.m"
  {
#line 902 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

#line 902 "termination.m"
    {
#line 902 "termination.m"
      transform_hlds__termination__write_pred_termination_info_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1));
#line 902 "termination.m"
      return;
    }
#line 902 "termination.m"
  }
#line 902 "termination.m"
}

#line 883 "termination.m"
static void MR_CALL 
transform_hlds__termination__make_termination_opt_int_4_p_0(
#line 883 "termination.m"
  MR_Word transform_hlds__termination__PredIds_5,
#line 883 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_6)
#line 883 "termination.m"
{
#line 886 "termination.m"
  {
#line 886 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 886 "termination.m"
    MR_Word transform_hlds__termination__Globals_8;
#line 886 "termination.m"
    MR_Word transform_hlds__termination__ModuleName_9;
#line 886 "termination.m"
    MR_String transform_hlds__termination__OptFileName_10;
#line 886 "termination.m"
    MR_Word transform_hlds__termination__Verbose_11;
#line 886 "termination.m"
    MR_Word transform_hlds__termination__OptFileRes_12;

#line 887 "termination.m"
    {
#line 887 "termination.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__termination__ModuleInfo_6, &transform_hlds__termination__Globals_8);
    }
#line 888 "termination.m"
    {
#line 888 "termination.m"
      hlds__hlds_module__module_info_get_name_2_p_0(transform_hlds__termination__ModuleInfo_6, &transform_hlds__termination__ModuleName_9);
    }
#line 889 "termination.m"
    {
#line 889 "termination.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(transform_hlds__termination__Globals_8, transform_hlds__termination__ModuleName_9, (MR_String) ".opt.tmp", (MR_Integer) 1, &transform_hlds__termination__OptFileName_10);
    }
#line 891 "termination.m"
    {
#line 891 "termination.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__termination__Globals_8, (MR_Integer) 45, &transform_hlds__termination__Verbose_11);
    }
#line 892 "termination.m"
    {
#line 892 "termination.m"
      libs__file_util__maybe_write_string_4_p_0(transform_hlds__termination__Verbose_11, (MR_String) "% Appending termination_info pragmas to \140");
    }
#line 894 "termination.m"
    {
#line 894 "termination.m"
      libs__file_util__maybe_write_string_4_p_0(transform_hlds__termination__Verbose_11, transform_hlds__termination__OptFileName_10);
    }
#line 895 "termination.m"
    {
#line 895 "termination.m"
      libs__file_util__maybe_write_string_4_p_0(transform_hlds__termination__Verbose_11, (MR_String) "\'...");
    }
#line 896 "termination.m"
    {
#line 896 "termination.m"
      libs__file_util__maybe_flush_output_3_p_0(transform_hlds__termination__Verbose_11);
    }
#line 898 "termination.m"
    {
#line 898 "termination.m"
      mercury__io__open_append_4_p_0(transform_hlds__termination__OptFileName_10, &transform_hlds__termination__OptFileRes_12);
    }
#line 906 "termination.m"
    if (((MR_tag((MR_Word) transform_hlds__termination__OptFileRes_12)) == (MR_mktag((MR_Integer) 1))))
#line 907 "termination.m"
      {
#line 907 "termination.m"
        MR_Word transform_hlds__termination__IOError_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__OptFileRes_12, (MR_Integer) 0)));
#line 907 "termination.m"
        MR_String transform_hlds__termination__IOErrorMessage_17;
#line 907 "termination.m"
        MR_Word transform_hlds__termination__V_33_33;
#line 907 "termination.m"
        MR_Word transform_hlds__termination__V_36_36;
#line 907 "termination.m"
        MR_Word transform_hlds__termination__V_37_37;
#line 907 "termination.m"
        MR_Word transform_hlds__termination__V_39_39;

#line 908 "termination.m"
        {
#line 908 "termination.m"
          libs__file_util__maybe_write_string_4_p_0(transform_hlds__termination__Verbose_11, (MR_String) " failed!\n");
        }
#line 909 "termination.m"
        {
#line 909 "termination.m"
          mercury__io__error_message_2_p_0(transform_hlds__termination__IOError_16, &transform_hlds__termination__IOErrorMessage_17);
        }
#line 911 "termination.m"
        {
#line 911 "termination.m"
          transform_hlds__termination__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 911 "termination.m"
          MR_hl_field(MR_mktag(1), transform_hlds__termination__V_39_39, 0) = ((MR_Box) (transform_hlds__termination__IOErrorMessage_17));
#line 911 "termination.m"
          MR_hl_field(MR_mktag(1), transform_hlds__termination__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 911 "termination.m"
        }
#line 911 "termination.m"
        {
#line 911 "termination.m"
          transform_hlds__termination__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 911 "termination.m"
          MR_hl_field(MR_mktag(1), transform_hlds__termination__V_37_37, 0) = ((MR_Box) ((MR_String) "\' for output: "));
#line 911 "termination.m"
          MR_hl_field(MR_mktag(1), transform_hlds__termination__V_37_37, 1) = ((MR_Box) (transform_hlds__termination__V_39_39));
#line 911 "termination.m"
        }
#line 911 "termination.m"
        {
#line 911 "termination.m"
          transform_hlds__termination__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 911 "termination.m"
          MR_hl_field(MR_mktag(1), transform_hlds__termination__V_36_36, 0) = ((MR_Box) (transform_hlds__termination__OptFileName_10));
#line 911 "termination.m"
          MR_hl_field(MR_mktag(1), transform_hlds__termination__V_36_36, 1) = ((MR_Box) (transform_hlds__termination__V_37_37));
#line 911 "termination.m"
        }
#line 910 "termination.m"
        {
#line 910 "termination.m"
          transform_hlds__termination__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 910 "termination.m"
          MR_hl_field(MR_mktag(1), transform_hlds__termination__V_33_33, 0) = ((MR_Box) ((MR_String) "Error opening file \140"));
#line 910 "termination.m"
          MR_hl_field(MR_mktag(1), transform_hlds__termination__V_33_33, 1) = ((MR_Box) (transform_hlds__termination__V_36_36));
#line 910 "termination.m"
        }
#line 910 "termination.m"
        {
#line 910 "termination.m"
          mercury__io__write_strings_3_p_0(transform_hlds__termination__V_33_33);
        }
#line 912 "termination.m"
        {
#line 912 "termination.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 912 "termination.m"
          return;
        }
#line 907 "termination.m"
      }
#line 906 "termination.m"
    else
#line 900 "termination.m"
      {
#line 900 "termination.m"
        MR_Word transform_hlds__termination__OptFile_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__OptFileRes_12, (MR_Integer) 0)));
#line 900 "termination.m"
        MR_Word transform_hlds__termination__OldStream_14;
#line 900 "termination.m"
        MR_Word transform_hlds__termination__V_44_44;
#line 902 "termination.m"
        MR_Box transform_hlds__termination__conv0_STATE_VARIABLE_IO_45_45;
#line 903 "termination.m"
        MR_Word transform_hlds__termination__V_15_15;

#line 901 "termination.m"
        {
#line 901 "termination.m"
          mercury__io__set_output_stream_4_p_0(transform_hlds__termination__OptFile_13, &transform_hlds__termination__OldStream_14);
        }
#line 902 "termination.m"
        {
#line 902 "termination.m"
          transform_hlds__termination__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 902 "termination.m"
          MR_hl_field(MR_mktag(0), transform_hlds__termination__V_44_44, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_8[0]));
#line 902 "termination.m"
          MR_hl_field(MR_mktag(0), transform_hlds__termination__V_44_44, 1) = ((MR_Box) (transform_hlds__termination__make_termination_opt_int_4_p_0_1));
#line 902 "termination.m"
          MR_hl_field(MR_mktag(0), transform_hlds__termination__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 902 "termination.m"
          MR_hl_field(MR_mktag(0), transform_hlds__termination__V_44_44, 3) = ((MR_Box) (transform_hlds__termination__ModuleInfo_6));
#line 902 "termination.m"
        }
#line 902 "termination.m"
        {
#line 902 "termination.m"
          mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__termination__V_44_44, transform_hlds__termination__PredIds_5, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__termination__conv0_STATE_VARIABLE_IO_45_45);
        }
#line 903 "termination.m"
        {
#line 903 "termination.m"
          mercury__io__set_output_stream_4_p_0(transform_hlds__termination__OldStream_14, &transform_hlds__termination__V_15_15);
        }
#line 904 "termination.m"
        {
#line 904 "termination.m"
          mercury__io__close_output_3_p_0(transform_hlds__termination__OptFile_13);
        }
#line 905 "termination.m"
        {
#line 905 "termination.m"
          libs__file_util__maybe_write_string_4_p_0(transform_hlds__termination__Verbose_11, (MR_String) " done.\n");
#line 905 "termination.m"
          return;
        }
#line 900 "termination.m"
      }
#line 886 "termination.m"
  }
#line 883 "termination.m"
}

#line 855 "termination.m"
static void MR_CALL 
transform_hlds__termination__change_procs_termination_info_5_p_0(
#line 855 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 855 "termination.m"
  MR_Word transform_hlds__termination__Override_2,
#line 855 "termination.m"
  MR_Word transform_hlds__termination__Termination_3,
#line 855 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4,
#line 855 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcTable_5)
#line 855 "termination.m"
{
#line 858 "termination.m"
  while (MR_TRUE)
#line 858 "termination.m"
    {
#line 858 "termination.m"
      /* tailcall optimized into a loop */
#line 858 "termination.m"
      {
#line 858 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 858 "termination.m"
        if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 858 "termination.m"
          *transform_hlds__termination__STATE_VARIABLE_ProcTable_5 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4;
#line 858 "termination.m"
        else
#line 860 "termination.m"
          {
#line 860 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_24_24 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 860 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_25_25 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 860 "termination.m"
            MR_Integer transform_hlds__termination__ProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));
#line 860 "termination.m"
            MR_Word transform_hlds__termination__ProcIds_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
#line 860 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo0_16;
#line 860 "termination.m"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22;
#line 861 "termination.m"
            MR_Box transform_hlds__termination__conv0_ProcInfo0_16;

#line 861 "termination.m"
            {
#line 861 "termination.m"
              mercury__map__lookup_3_p_0(transform_hlds__termination__TypeCtorInfo_24_24, transform_hlds__termination__TypeCtorInfo_25_25, transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4, ((MR_Box) (transform_hlds__termination__ProcId_11)), &transform_hlds__termination__conv0_ProcInfo0_16);
            }
#line 861 "termination.m"
            transform_hlds__termination__ProcInfo0_16 = ((MR_Word) transform_hlds__termination__conv0_ProcInfo0_16);
#line 864 "termination.m"
            transform_hlds__termination__succeeded = (transform_hlds__termination__Override_2 == (MR_Integer) 1);
#line 865 "termination.m"
            if (!(transform_hlds__termination__succeeded))
#line 866 "termination.m"
              {
#line 866 "termination.m"
                MR_Word transform_hlds__termination__V_26_26;

#line 866 "termination.m"
                {
#line 866 "termination.m"
                  hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__termination__ProcInfo0_16, &transform_hlds__termination__V_26_26);
                }
#line 866 "termination.m"
                {
#line 866 "termination.m"
                  transform_hlds__termination__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[30], ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (transform_hlds__termination__V_26_26)));
                }
#line 866 "termination.m"
              }
#line 873 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 871 "termination.m"
              {
#line 871 "termination.m"
                MR_Word transform_hlds__termination__ProcInfo_17;
#line 871 "termination.m"
                MR_Word transform_hlds__termination__V_21_21;

#line 870 "termination.m"
                {
#line 870 "termination.m"
                  transform_hlds__termination__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 870 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__V_21_21, 0) = ((MR_Box) (transform_hlds__termination__Termination_3));
#line 870 "termination.m"
                }
#line 870 "termination.m"
                {
#line 870 "termination.m"
                  hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(transform_hlds__termination__V_21_21, transform_hlds__termination__ProcInfo0_16, &transform_hlds__termination__ProcInfo_17);
                }
#line 872 "termination.m"
                {
#line 872 "termination.m"
                  mercury__map__det_update_4_p_0(transform_hlds__termination__TypeCtorInfo_24_24, transform_hlds__termination__TypeCtorInfo_25_25, ((MR_Box) (transform_hlds__termination__ProcId_11)), ((MR_Box) (transform_hlds__termination__ProcInfo_17)), transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4, &transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22);
                }
#line 871 "termination.m"
              }
#line 873 "termination.m"
            else
#line 873 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4;
#line 876 "termination.m"
            /* direct tailcall eliminated */
#line 876 "termination.m"
            {
#line 876 "termination.m"
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__ProcIds_12;
#line 876 "termination.m"
              MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_4 = transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22;

#line 876 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_4;
#line 876 "termination.m"
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
#line 876 "termination.m"
            }
#line 876 "termination.m"
            continue;
#line 860 "termination.m"
          }
#line 858 "termination.m"
      }
#line 858 "termination.m"
      break;
#line 858 "termination.m"
    }
#line 855 "termination.m"
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
            MR_Word transform_hlds__termination__TypeCtorInfo_24_24 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
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
              mercury__map__lookup_3_p_0(transform_hlds__termination__TypeCtorInfo_24_24, transform_hlds__termination__TypeCtorInfo_25_25, transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4, ((MR_Box) (transform_hlds__termination__ProcId_11)), &transform_hlds__termination__conv0_ProcInfo0_16);
            }
#line 829 "termination.m"
            transform_hlds__termination__ProcInfo0_16 = ((MR_Word) transform_hlds__termination__conv0_ProcInfo0_16);
#line 832 "termination.m"
            transform_hlds__termination__succeeded = (transform_hlds__termination__Override_2 == (MR_Integer) 1);
#line 833 "termination.m"
            if (!(transform_hlds__termination__succeeded))
#line 834 "termination.m"
              {
#line 834 "termination.m"
                MR_Word transform_hlds__termination__V_26_26;

#line 834 "termination.m"
                {
#line 834 "termination.m"
                  hlds__hlds_pred__proc_info_get_maybe_arg_size_info_2_p_0(transform_hlds__termination__ProcInfo0_16, &transform_hlds__termination__V_26_26);
                }
#line 834 "termination.m"
                {
#line 834 "termination.m"
                  transform_hlds__termination__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[29], ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (transform_hlds__termination__V_26_26)));
                }
#line 834 "termination.m"
              }
#line 839 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 837 "termination.m"
              {
#line 837 "termination.m"
                MR_Word transform_hlds__termination__ProcInfo_17;
#line 837 "termination.m"
                MR_Word transform_hlds__termination__V_21_21;

#line 837 "termination.m"
                {
#line 837 "termination.m"
                  transform_hlds__termination__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 837 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__V_21_21, 0) = ((MR_Box) (transform_hlds__termination__ArgSize_3));
#line 837 "termination.m"
                }
#line 837 "termination.m"
                {
#line 837 "termination.m"
                  hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_p_0(transform_hlds__termination__V_21_21, transform_hlds__termination__ProcInfo0_16, &transform_hlds__termination__ProcInfo_17);
                }
#line 838 "termination.m"
                {
#line 838 "termination.m"
                  mercury__map__det_update_4_p_0(transform_hlds__termination__TypeCtorInfo_24_24, transform_hlds__termination__TypeCtorInfo_25_25, ((MR_Box) (transform_hlds__termination__ProcId_11)), ((MR_Box) (transform_hlds__termination__ProcInfo_17)), transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4, &transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22);
                }
#line 837 "termination.m"
              }
#line 839 "termination.m"
            else
#line 839 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4;
#line 842 "termination.m"
            /* direct tailcall eliminated */
#line 842 "termination.m"
            {
#line 842 "termination.m"
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__ProcIds_12;
#line 842 "termination.m"
              MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_4 = transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22;

#line 842 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_4;
#line 842 "termination.m"
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
#line 842 "termination.m"
            }
#line 842 "termination.m"
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
            MR_Word transform_hlds__termination__TypeCtorInfo_41_41 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
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
              mercury__map__lookup_3_p_0(transform_hlds__termination__TypeCtorInfo_41_41, transform_hlds__termination__TypeCtorInfo_42_42, transform_hlds__termination__STATE_VARIABLE_ProcTable_0_5, ((MR_Box) (transform_hlds__termination__ProcId_13)), &transform_hlds__termination__conv0_ProcInfo0_19);
            }
#line 789 "termination.m"
            transform_hlds__termination__ProcInfo0_19 = ((MR_Word) transform_hlds__termination__conv0_ProcInfo0_19);
#line 790 "termination.m"
            {
#line 790 "termination.m"
              transform_hlds__termination__succeeded = transform_hlds__term_util__all_args_input_or_zero_size_3_p_0(transform_hlds__termination__ModuleInfo_4, transform_hlds__termination__PredInfo_3, transform_hlds__termination__ProcInfo0_19);
            }
#line 797 "termination.m"
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
#line 797 "termination.m"
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
                  MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeError_25, 0) = ((MR_Box) (transform_hlds__termination__Error_24));
#line 800 "termination.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeError_25, 1) = ((MR_Box) (transform_hlds__termination__Context_23));
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
              hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_2[3]), transform_hlds__termination__ProcInfo1_26, &transform_hlds__termination__ProcInfo_27);
            }
#line 807 "termination.m"
            {
#line 807 "termination.m"
              mercury__map__det_update_4_p_0(transform_hlds__termination__TypeCtorInfo_41_41, transform_hlds__termination__TypeCtorInfo_42_42, ((MR_Box) (transform_hlds__termination__ProcId_13)), ((MR_Box) (transform_hlds__termination__ProcInfo_27)), transform_hlds__termination__STATE_VARIABLE_ProcTable_0_5, &transform_hlds__termination__STATE_VARIABLE_ProcTable_39_39);
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
            if ((transform_hlds__termination__SpecialPredId_2 == (MR_Integer) 3))
#line 745 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ProcTable_23_23 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0_3;
#line 744 "termination.m"
            else
#line 735 "termination.m"
              {
#line 735 "termination.m"
                MR_Word transform_hlds__termination__TypeCtorInfo_25_25 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
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
                  mercury__map__lookup_3_p_0(transform_hlds__termination__TypeCtorInfo_25_25, transform_hlds__termination__TypeCtorInfo_26_26, transform_hlds__termination__STATE_VARIABLE_ProcTable_0_3, ((MR_Box) (transform_hlds__termination__ProcId_9)), &transform_hlds__termination__conv0_ProcInfo0_13);
                }
#line 736 "termination.m"
                transform_hlds__termination__ProcInfo0_13 = ((MR_Word) transform_hlds__termination__conv0_ProcInfo0_13);
#line 737 "termination.m"
                {
#line 737 "termination.m"
                  hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__termination__ProcInfo0_13, &transform_hlds__termination__HeadVars_14);
                }
#line 761 "termination.m"
                if ((transform_hlds__termination__SpecialPredId_2 == (MR_Integer) 2))
#line 761 "termination.m"
                  {
#line 761 "termination.m"
                    MR_Word transform_hlds__termination__OutList_31;

#line 762 "termination.m"
                    {
#line 762 "termination.m"
                      transform_hlds__term_util__make_bool_list_3_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[3], transform_hlds__termination__HeadVars_14, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[26]), &transform_hlds__termination__OutList_31);
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
                    transform_hlds__termination__Termination_16 = (MR_Word) &transform_hlds__termination_scalar_common_2[2];
#line 761 "termination.m"
                  }
#line 761 "termination.m"
                else
#line 761 "termination.m"
                  if ((transform_hlds__termination__SpecialPredId_2 == (MR_Integer) 1))
#line 771 "termination.m"
                    {
#line 771 "termination.m"
                      MR_Word transform_hlds__termination__OutList_59;

#line 772 "termination.m"
                      {
#line 772 "termination.m"
                        transform_hlds__term_util__make_bool_list_3_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[3], transform_hlds__termination__HeadVars_14, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[25]), &transform_hlds__termination__OutList_59);
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
                      transform_hlds__termination__Termination_16 = (MR_Word) &transform_hlds__termination_scalar_common_2[2];
#line 771 "termination.m"
                    }
#line 761 "termination.m"
                  else
#line 766 "termination.m"
                    {
#line 766 "termination.m"
                      MR_Word transform_hlds__termination__OutList_58;

#line 767 "termination.m"
                      {
#line 767 "termination.m"
                        transform_hlds__term_util__make_bool_list_3_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[3], transform_hlds__termination__HeadVars_14, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[28]), &transform_hlds__termination__OutList_58);
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
                      transform_hlds__termination__Termination_16 = (MR_Word) &transform_hlds__termination_scalar_common_2[2];
#line 766 "termination.m"
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
                  mercury__map__det_update_4_p_0(transform_hlds__termination__TypeCtorInfo_25_25, transform_hlds__termination__TypeCtorInfo_26_26, ((MR_Box) (transform_hlds__termination__ProcId_9)), ((MR_Box) (transform_hlds__termination__ProcInfo_18)), transform_hlds__termination__STATE_VARIABLE_ProcTable_0_3, &transform_hlds__termination__STATE_VARIABLE_ProcTable_23_23);
                }
#line 735 "termination.m"
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

#line 604 "termination.m"
static void MR_CALL 
transform_hlds__termination__check_preds_5_p_0(
#line 604 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 604 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2,
#line 604 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_3)
#line 604 "termination.m"
{
#line 607 "termination.m"
  while (MR_TRUE)
#line 607 "termination.m"
    {
#line 607 "termination.m"
      /* tailcall optimized into a loop */
#line 607 "termination.m"
      {
#line 607 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 607 "termination.m"
        if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 607 "termination.m"
          *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_3 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2;
#line 607 "termination.m"
        else
#line 608 "termination.m"
          {
#line 608 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_71_71;
#line 608 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_72_72;
#line 608 "termination.m"
            MR_Word transform_hlds__termination__PredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));
#line 608 "termination.m"
            MR_Word transform_hlds__termination__PredIds_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
#line 608 "termination.m"
            MR_Word transform_hlds__termination__Globals_16;
#line 608 "termination.m"
            MR_Word transform_hlds__termination__MakeOptInt_17;
#line 608 "termination.m"
            MR_Word transform_hlds__termination__PredTable0_18;
#line 608 "termination.m"
            MR_Word transform_hlds__termination__PredInfo0_19;
#line 608 "termination.m"
            MR_Word transform_hlds__termination__ImportStatus_20;
#line 608 "termination.m"
            MR_Word transform_hlds__termination__Context_21;
#line 608 "termination.m"
            MR_Word transform_hlds__termination__ProcTable0_22;
#line 608 "termination.m"
            MR_Word transform_hlds__termination__Markers_23;
#line 608 "termination.m"
            MR_Word transform_hlds__termination__ProcIds_24;
#line 608 "termination.m"
            MR_Word transform_hlds__termination__ProcTable2_26;
#line 608 "termination.m"
            MR_Word transform_hlds__termination__ProcTable_33;
#line 608 "termination.m"
            MR_Word transform_hlds__termination__PredInfo_34;
#line 608 "termination.m"
            MR_Word transform_hlds__termination__PredTable_35;
#line 608 "termination.m"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_66_66;
#line 615 "termination.m"
            MR_Box transform_hlds__termination__conv0_PredInfo0_19;
#line 629 "termination.m"
            MR_Word transform_hlds__termination__ProcTable1_25;

#line 609 "termination.m"
            {
#line 609 "termination.m"
              hlds__passes_aux__write_pred_progress_message_5_p_0((MR_String) "% Checking termination of ", transform_hlds__termination__PredId_12, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2);
            }
#line 611 "termination.m"
            {
#line 611 "termination.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2, &transform_hlds__termination__Globals_16);
            }
#line 612 "termination.m"
            {
#line 612 "termination.m"
              libs__globals__lookup_bool_option_3_p_0(transform_hlds__termination__Globals_16, (MR_Integer) 86, &transform_hlds__termination__MakeOptInt_17);
            }
#line 614 "termination.m"
            {
#line 614 "termination.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2, &transform_hlds__termination__PredTable0_18);
            }
#line 2255 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_71_71 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 2257 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_72_72 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 615 "termination.m"
            {
#line 615 "termination.m"
              mercury__map__lookup_3_p_0(transform_hlds__termination__TypeCtorInfo_71_71, transform_hlds__termination__TypeCtorInfo_72_72, transform_hlds__termination__PredTable0_18, ((MR_Box) (transform_hlds__termination__PredId_12)), &transform_hlds__termination__conv0_PredInfo0_19);
            }
#line 615 "termination.m"
            transform_hlds__termination__PredInfo0_19 = ((MR_Word) transform_hlds__termination__conv0_PredInfo0_19);
#line 616 "termination.m"
            {
#line 616 "termination.m"
              hlds__hlds_pred__pred_info_get_import_status_2_p_0(transform_hlds__termination__PredInfo0_19, &transform_hlds__termination__ImportStatus_20);
            }
#line 617 "termination.m"
            {
#line 617 "termination.m"
              hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__termination__PredInfo0_19, &transform_hlds__termination__Context_21);
            }
#line 618 "termination.m"
            {
#line 618 "termination.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__termination__PredInfo0_19, &transform_hlds__termination__ProcTable0_22);
            }
#line 619 "termination.m"
            {
#line 619 "termination.m"
              hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__termination__PredInfo0_19, &transform_hlds__termination__Markers_23);
            }
#line 620 "termination.m"
            {
#line 620 "termination.m"
              transform_hlds__termination__ProcIds_24 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__termination__PredInfo0_19);
            }
#line 703 "termination.m"
            {
#line 703 "termination.m"
              transform_hlds__termination__succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(transform_hlds__termination__PredInfo0_19);
            }
#line 707 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 705 "termination.m"
              {
#line 705 "termination.m"
                {
#line 705 "termination.m"
                  transform_hlds__termination__set_builtin_terminates_6_p_0(transform_hlds__termination__ProcIds_24, transform_hlds__termination__PredId_12, transform_hlds__termination__PredInfo0_19, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2, transform_hlds__termination__ProcTable0_22, &transform_hlds__termination__ProcTable1_25);
                }
#line 705 "termination.m"
                transform_hlds__termination__succeeded = MR_TRUE;
#line 705 "termination.m"
              }
#line 707 "termination.m"
            else
#line 722 "termination.m"
              {
#line 722 "termination.m"
                MR_Word transform_hlds__termination__SpecialPredId_85;
#line 716 "termination.m"
                MR_Word transform_hlds__termination__SpecPredId0_83;
#line 709 "termination.m"
                MR_Word transform_hlds__termination__ModuleName_80;
#line 709 "termination.m"
                MR_String transform_hlds__termination__Name_81;
#line 709 "termination.m"
                MR_Integer transform_hlds__termination__Arity_82;
#line 709 "termination.m"
                MR_Integer transform_hlds__termination__V_91_91;
#line 712 "termination.m"
                MR_String transform_hlds__termination__V_84_84;

#line 709 "termination.m"
                {
#line 709 "termination.m"
                  transform_hlds__termination__ModuleName_80 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__termination__PredInfo0_19);
                }
#line 710 "termination.m"
                {
#line 710 "termination.m"
                  transform_hlds__termination__Name_81 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__termination__PredInfo0_19);
                }
#line 711 "termination.m"
                {
#line 711 "termination.m"
                  transform_hlds__termination__Arity_82 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__termination__PredInfo0_19);
                }
#line 712 "termination.m"
                {
#line 712 "termination.m"
                  transform_hlds__termination__succeeded = mdbcomp__prim_data__special_pred_name_arity_4_p_1(&transform_hlds__termination__SpecPredId0_83, transform_hlds__termination__Name_81, &transform_hlds__termination__V_84_84, &transform_hlds__termination__V_91_91);
                }
#line 709 "termination.m"
                if (transform_hlds__termination__succeeded)
#line 709 "termination.m"
                  {
#line 712 "termination.m"
                    transform_hlds__termination__succeeded = (transform_hlds__termination__Arity_82 == transform_hlds__termination__V_91_91);
#line 709 "termination.m"
                    if (transform_hlds__termination__succeeded)
#line 713 "termination.m"
                      {
#line 713 "termination.m"
                        transform_hlds__termination__succeeded = mdbcomp__builtin_modules__any_mercury_builtin_module_1_p_0(transform_hlds__termination__ModuleName_80);
                      }
#line 709 "termination.m"
                  }
#line 716 "termination.m"
                if (transform_hlds__termination__succeeded)
#line 715 "termination.m"
                  {
#line 715 "termination.m"
                    transform_hlds__termination__SpecialPredId_85 = transform_hlds__termination__SpecPredId0_83;
#line 715 "termination.m"
                    transform_hlds__termination__succeeded = MR_TRUE;
#line 715 "termination.m"
                  }
#line 716 "termination.m"
                else
#line 717 "termination.m"
                  {
#line 717 "termination.m"
                    MR_Word transform_hlds__termination__Origin_86;
#line 717 "termination.m"
                    MR_Word transform_hlds__termination__V_89_89;
#line 718 "termination.m"
                    MR_Word transform_hlds__termination__V_87_87;

#line 717 "termination.m"
                    {
#line 717 "termination.m"
                      hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__termination__PredInfo0_19, &transform_hlds__termination__Origin_86);
                    }
#line 718 "termination.m"
                    transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__Origin_86)) == (MR_mktag((MR_Integer) 0)));
#line 718 "termination.m"
                    if (transform_hlds__termination__succeeded)
#line 718 "termination.m"
                      {
#line 718 "termination.m"
                        transform_hlds__termination__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__Origin_86, (MR_Integer) 0)));
#line 718 "termination.m"
                        transform_hlds__termination__SpecialPredId_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__V_89_89, (MR_Integer) 0)));
#line 718 "termination.m"
                        transform_hlds__termination__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__V_89_89, (MR_Integer) 1)));
#line 718 "termination.m"
                        transform_hlds__termination__succeeded = MR_TRUE;
#line 718 "termination.m"
                      }
#line 717 "termination.m"
                  }
#line 722 "termination.m"
                if (transform_hlds__termination__succeeded)
#line 722 "termination.m"
                  {
#line 721 "termination.m"
                    {
#line 721 "termination.m"
                      transform_hlds__termination__set_generated_terminates_4_p_0(transform_hlds__termination__ProcIds_24, transform_hlds__termination__SpecialPredId_85, transform_hlds__termination__ProcTable0_22, &transform_hlds__termination__ProcTable1_25);
                    }
#line 721 "termination.m"
                    transform_hlds__termination__succeeded = MR_TRUE;
#line 722 "termination.m"
                  }
#line 722 "termination.m"
              }
#line 629 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 628 "termination.m"
              transform_hlds__termination__ProcTable2_26 = transform_hlds__termination__ProcTable1_25;
#line 629 "termination.m"
            else
#line 640 "termination.m"
              {
#line 630 "termination.m"
                MR_Word transform_hlds__termination__V_43_43;

#line 630 "termination.m"
                {
#line 630 "termination.m"
                  transform_hlds__termination__V_43_43 = hlds__hlds_pred__status_defined_in_this_module_1_f_0(transform_hlds__termination__ImportStatus_20);
                }
#line 630 "termination.m"
                transform_hlds__termination__succeeded = (transform_hlds__termination__V_43_43 == (MR_Integer) 1);
#line 640 "termination.m"
                if (transform_hlds__termination__succeeded)
#line 637 "termination.m"
                  {
#line 634 "termination.m"
                    {
#line 634 "termination.m"
                      transform_hlds__termination__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__termination__Markers_23, (MR_Integer) 17);
                    }
#line 637 "termination.m"
                    if (transform_hlds__termination__succeeded)
#line 635 "termination.m"
                      {
#line 635 "termination.m"
                        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 635 "termination.m"
                        {
#line 635 "termination.m"
                          transform_hlds__termination__change_procs_termination_info_5_p_0(transform_hlds__termination__ProcIds_24, (MR_Integer) 1, (MR_Word) &transform_hlds__termination_scalar_common_2[2], transform_hlds__termination__ProcTable0_22, &transform_hlds__termination__ProcTable2_26);
                        }
#line 635 "termination.m"
                      }
#line 637 "termination.m"
                    else
#line 638 "termination.m"
                      transform_hlds__termination__ProcTable2_26 = transform_hlds__termination__ProcTable0_22;
#line 637 "termination.m"
                  }
#line 640 "termination.m"
                else
#line 666 "termination.m"
                  {
#line 666 "termination.m"
                    MR_Word transform_hlds__termination__ArgSizeError_29;
#line 666 "termination.m"
                    MR_Word transform_hlds__termination__ArgSizeInfo_30;
#line 666 "termination.m"
                    MR_Word transform_hlds__termination__V_58_58;
#line 666 "termination.m"
                    MR_Word transform_hlds__termination__ProcTable1_69;

#line 652 "termination.m"
                    {
#line 652 "termination.m"
                      transform_hlds__termination__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__termination__Markers_23, (MR_Integer) 17);
                    }
#line 653 "termination.m"
                    if (!(transform_hlds__termination__succeeded))
#line 654 "termination.m"
                      {
#line 654 "termination.m"
                        MR_Word transform_hlds__termination__V_48_48;

#line 654 "termination.m"
                        transform_hlds__termination__succeeded = (transform_hlds__termination__MakeOptInt_17 == (MR_Integer) 0);
#line 654 "termination.m"
                        if (transform_hlds__termination__succeeded)
#line 654 "termination.m"
                          {
#line 655 "termination.m"
                            transform_hlds__termination__V_48_48 = (MR_Integer) 19;
#line 655 "termination.m"
                            {
#line 655 "termination.m"
                              transform_hlds__termination__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__termination__Markers_23, transform_hlds__termination__V_48_48);
                            }
#line 654 "termination.m"
                          }
#line 654 "termination.m"
                      }
#line 660 "termination.m"
                    if (transform_hlds__termination__succeeded)
#line 658 "termination.m"
                      {
#line 658 "termination.m"
                        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 658 "termination.m"
                        {
#line 658 "termination.m"
                          transform_hlds__termination__change_procs_termination_info_5_p_0(transform_hlds__termination__ProcIds_24, (MR_Integer) 1, (MR_Word) &transform_hlds__termination_scalar_common_2[2], transform_hlds__termination__ProcTable0_22, &transform_hlds__termination__ProcTable1_69);
                        }
#line 658 "termination.m"
                      }
#line 660 "termination.m"
                    else
#line 662 "termination.m"
                      {
#line 662 "termination.m"
                        MR_Word transform_hlds__termination__TerminationError_27;
#line 662 "termination.m"
                        MR_Word transform_hlds__termination__TerminationInfo_28;
#line 662 "termination.m"
                        MR_Word transform_hlds__termination__V_54_54;

#line 661 "termination.m"
                        {
#line 661 "termination.m"
                          transform_hlds__termination__TerminationError_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 661 "termination.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__termination__TerminationError_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 661 "termination.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__termination__TerminationError_27, 1) = ((MR_Box) (transform_hlds__termination__Context_21));
#line 661 "termination.m"
                        }
#line 663 "termination.m"
                        {
#line 663 "termination.m"
                          transform_hlds__termination__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 663 "termination.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__termination__V_54_54, 0) = ((MR_Box) (transform_hlds__termination__TerminationError_27));
#line 663 "termination.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__termination__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 663 "termination.m"
                        }
#line 663 "termination.m"
                        {
#line 663 "termination.m"
                          transform_hlds__termination__TerminationInfo_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 663 "termination.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__termination__TerminationInfo_28, 0) = ((MR_Box) (transform_hlds__termination__V_54_54));
#line 663 "termination.m"
                        }
#line 664 "termination.m"
                        {
#line 664 "termination.m"
                          transform_hlds__termination__change_procs_termination_info_5_p_0(transform_hlds__termination__ProcIds_24, (MR_Integer) 0, transform_hlds__termination__TerminationInfo_28, transform_hlds__termination__ProcTable0_22, &transform_hlds__termination__ProcTable1_69);
                        }
#line 662 "termination.m"
                      }
#line 667 "termination.m"
                    {
#line 667 "termination.m"
                      transform_hlds__termination__ArgSizeError_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 667 "termination.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeError_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 667 "termination.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeError_29, 1) = ((MR_Box) (transform_hlds__termination__Context_21));
#line 667 "termination.m"
                    }
#line 668 "termination.m"
                    {
#line 668 "termination.m"
                      transform_hlds__termination__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 668 "termination.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__termination__V_58_58, 0) = ((MR_Box) (transform_hlds__termination__ArgSizeError_29));
#line 668 "termination.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__termination__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 668 "termination.m"
                    }
#line 668 "termination.m"
                    {
#line 668 "termination.m"
                      transform_hlds__termination__ArgSizeInfo_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 668 "termination.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__termination__ArgSizeInfo_30, 0) = ((MR_Box) (transform_hlds__termination__V_58_58));
#line 668 "termination.m"
                    }
#line 669 "termination.m"
                    {
#line 669 "termination.m"
                      transform_hlds__termination__change_procs_arg_size_info_5_p_0(transform_hlds__termination__ProcIds_24, (MR_Integer) 0, transform_hlds__termination__ArgSizeInfo_30, transform_hlds__termination__ProcTable1_69, &transform_hlds__termination__ProcTable2_26);
                    }
#line 666 "termination.m"
                  }
#line 640 "termination.m"
              }
#line 672 "termination.m"
            {
#line 672 "termination.m"
              transform_hlds__termination__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__termination__Markers_23, (MR_Integer) 18);
            }
#line 678 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 674 "termination.m"
              {
#line 674 "termination.m"
                MR_Word transform_hlds__termination__RequestError_31;
#line 674 "termination.m"
                MR_Word transform_hlds__termination__RequestTerminationInfo_32;
#line 674 "termination.m"
                MR_Word transform_hlds__termination__V_62_62;
#line 674 "termination.m"
                MR_Word transform_hlds__termination__V_63_63;

#line 674 "termination.m"
                {
#line 674 "termination.m"
                  transform_hlds__termination__V_62_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 674 "termination.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__termination__V_62_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 674 "termination.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__termination__V_62_62, 1) = ((MR_Box) (transform_hlds__termination__PredId_12));
#line 674 "termination.m"
                }
#line 673 "termination.m"
                {
#line 673 "termination.m"
                  transform_hlds__termination__RequestError_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 673 "termination.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__termination__RequestError_31, 0) = ((MR_Box) (transform_hlds__termination__V_62_62));
#line 673 "termination.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__termination__RequestError_31, 1) = ((MR_Box) (transform_hlds__termination__Context_21));
#line 673 "termination.m"
                }
#line 675 "termination.m"
                {
#line 675 "termination.m"
                  transform_hlds__termination__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 675 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__V_63_63, 0) = ((MR_Box) (transform_hlds__termination__RequestError_31));
#line 675 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 675 "termination.m"
                }
#line 675 "termination.m"
                {
#line 675 "termination.m"
                  transform_hlds__termination__RequestTerminationInfo_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 675 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__RequestTerminationInfo_32, 0) = ((MR_Box) (transform_hlds__termination__V_63_63));
#line 675 "termination.m"
                }
#line 676 "termination.m"
                {
#line 676 "termination.m"
                  transform_hlds__termination__change_procs_termination_info_5_p_0(transform_hlds__termination__ProcIds_24, (MR_Integer) 1, transform_hlds__termination__RequestTerminationInfo_32, transform_hlds__termination__ProcTable2_26, &transform_hlds__termination__ProcTable_33);
                }
#line 674 "termination.m"
              }
#line 678 "termination.m"
            else
#line 679 "termination.m"
              transform_hlds__termination__ProcTable_33 = transform_hlds__termination__ProcTable2_26;
#line 681 "termination.m"
            {
#line 681 "termination.m"
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__termination__ProcTable_33, transform_hlds__termination__PredInfo0_19, &transform_hlds__termination__PredInfo_34);
            }
#line 682 "termination.m"
            {
#line 682 "termination.m"
              mercury__map__set_4_p_0(transform_hlds__termination__TypeCtorInfo_71_71, transform_hlds__termination__TypeCtorInfo_72_72, ((MR_Box) (transform_hlds__termination__PredId_12)), ((MR_Box) (transform_hlds__termination__PredInfo_34)), transform_hlds__termination__PredTable0_18, &transform_hlds__termination__PredTable_35);
            }
#line 683 "termination.m"
            {
#line 683 "termination.m"
              hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__termination__PredTable_35, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_66_66);
            }
#line 684 "termination.m"
            /* direct tailcall eliminated */
#line 684 "termination.m"
            {
#line 684 "termination.m"
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__PredIds_13;
#line 684 "termination.m"
              MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_2 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_66_66;

#line 684 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_2;
#line 684 "termination.m"
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
#line 684 "termination.m"
            }
#line 684 "termination.m"
            continue;
#line 608 "termination.m"
          }
#line 607 "termination.m"
      }
#line 607 "termination.m"
      break;
#line 607 "termination.m"
    }
#line 604 "termination.m"
}

#line 577 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__is_solver_init_wrapper_pred_2_p_0(
#line 577 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_3,
#line 577 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_2)
#line 577 "termination.m"
{
#line 580 "termination.m"
  {
#line 580 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 580 "termination.m"
    MR_Word transform_hlds__termination__PredId_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__HeadVar__2_2, (MR_Integer) 0)));
#line 580 "termination.m"
    MR_Word transform_hlds__termination__PredInfo_6;
#line 580 "termination.m"
    MR_Word transform_hlds__termination__PredOrigin_7;
#line 580 "termination.m"
    MR_Word transform_hlds__termination__SpecialPredId_8;
#line 580 "termination.m"
    MR_Word transform_hlds__termination__V_10_10;
#line 580 "termination.m"
    MR_Integer transform_hlds__termination__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__HeadVar__2_2, (MR_Integer) 1)));
#line 583 "termination.m"
    MR_Word transform_hlds__termination__V_9_9;

#line 581 "termination.m"
    {
#line 581 "termination.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__termination__ModuleInfo_3, transform_hlds__termination__PredId_4, &transform_hlds__termination__PredInfo_6);
    }
#line 582 "termination.m"
    {
#line 582 "termination.m"
      hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__termination__PredInfo_6, &transform_hlds__termination__PredOrigin_7);
    }
#line 583 "termination.m"
    transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__PredOrigin_7)) == (MR_mktag((MR_Integer) 0)));
#line 583 "termination.m"
    if (transform_hlds__termination__succeeded)
#line 583 "termination.m"
      {
#line 583 "termination.m"
        transform_hlds__termination__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PredOrigin_7, (MR_Integer) 0)));
#line 583 "termination.m"
        transform_hlds__termination__SpecialPredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__V_10_10, (MR_Integer) 0)));
#line 583 "termination.m"
        transform_hlds__termination__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__V_10_10, (MR_Integer) 1)));
#line 584 "termination.m"
        transform_hlds__termination__succeeded = (transform_hlds__termination__SpecialPredId_8 == (MR_Integer) 3);
#line 583 "termination.m"
      }
#line 580 "termination.m"
    return transform_hlds__termination__succeeded;
#line 580 "termination.m"
  }
#line 577 "termination.m"
}

#line 548 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__report_termination_errors_6_p_0_4(
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
      return transform_hlds__termination__succeeded = transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__548__1_1_p_0(((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 548 "termination.m"
    return transform_hlds__termination__succeeded;
#line 548 "termination.m"
  }
#line 548 "termination.m"
}

#line 533 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__report_termination_errors_6_p_0_3(
#line 533 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 533 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1)
#line 533 "termination.m"
{
#line 533 "termination.m"
  {
#line 533 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 533 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

#line 533 "termination.m"
    {
#line 533 "termination.m"
      return transform_hlds__termination__succeeded = transform_hlds__termination__is_solver_init_wrapper_pred_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 533 "termination.m"
    return transform_hlds__termination__succeeded;
#line 533 "termination.m"
  }
#line 533 "termination.m"
}

#line 521 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__report_termination_errors_6_p_0_2(
#line 521 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 521 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1)
#line 521 "termination.m"
{
#line 521 "termination.m"
  {
#line 521 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 521 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

#line 521 "termination.m"
    {
#line 521 "termination.m"
      return transform_hlds__termination__succeeded = transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__521__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 521 "termination.m"
    return transform_hlds__termination__succeeded;
#line 521 "termination.m"
  }
#line 521 "termination.m"
}

#line 505 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__report_termination_errors_6_p_0_1(
#line 505 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 505 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1)
#line 505 "termination.m"
{
#line 505 "termination.m"
  {
#line 505 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 505 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

#line 505 "termination.m"
    {
#line 505 "termination.m"
      return transform_hlds__termination__succeeded = transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__505__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 505 "termination.m"
    return transform_hlds__termination__succeeded;
#line 505 "termination.m"
  }
#line 505 "termination.m"
}

#line 495 "termination.m"
static void MR_CALL 
transform_hlds__termination__report_termination_errors_6_p_0(
#line 495 "termination.m"
  MR_Word transform_hlds__termination__SCC_7,
#line 495 "termination.m"
  MR_Word transform_hlds__termination__Errors_8,
#line 495 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35,
#line 495 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_36)
#line 495 "termination.m"
{
#line 499 "termination.m"
  {
#line 499 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 499 "termination.m"
    MR_Word transform_hlds__termination__Globals_11;
#line 499 "termination.m"
    MR_Word transform_hlds__termination__NormalErrors_12;
#line 499 "termination.m"
    MR_Word transform_hlds__termination__VerboseErrors_13;
#line 510 "termination.m"
    MR_Word transform_hlds__termination__IsCheckTerm_14;
#line 510 "termination.m"
    MR_Word transform_hlds__termination__CheckTermPPIds_19;
#line 512 "termination.m"
    MR_Word transform_hlds__termination__V_20_20;
#line 512 "termination.m"
    MR_Word transform_hlds__termination__V_21_21;

#line 500 "termination.m"
    {
#line 500 "termination.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35, &transform_hlds__termination__Globals_11);
    }
#line 501 "termination.m"
    {
#line 501 "termination.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__termination__Globals_11, (MR_Integer) 415, &transform_hlds__termination__NormalErrors_12);
    }
#line 502 "termination.m"
    {
#line 502 "termination.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__termination__Globals_11, (MR_Integer) 416, &transform_hlds__termination__VerboseErrors_13);
    }
#line 505 "termination.m"
    {
#line 505 "termination.m"
      transform_hlds__termination__IsCheckTerm_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 505 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsCheckTerm_14, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_6[0]));
#line 505 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsCheckTerm_14, 1) = ((MR_Box) (transform_hlds__termination__report_termination_errors_6_p_0_1));
#line 505 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsCheckTerm_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 505 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsCheckTerm_14, 3) = ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35));
#line 505 "termination.m"
    }
#line 511 "termination.m"
    {
#line 511 "termination.m"
      mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__termination__IsCheckTerm_14, transform_hlds__termination__SCC_7, &transform_hlds__termination__CheckTermPPIds_19);
    }
#line 512 "termination.m"
    transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__CheckTermPPIds_19)) == (MR_mktag((MR_Integer) 1)));
#line 512 "termination.m"
    if (transform_hlds__termination__succeeded)
#line 512 "termination.m"
      {
#line 512 "termination.m"
        transform_hlds__termination__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__CheckTermPPIds_19, (MR_Integer) 0)));
#line 512 "termination.m"
        transform_hlds__termination__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__CheckTermPPIds_19, (MR_Integer) 1)));
#line 517 "termination.m"
        {
#line 517 "termination.m"
          transform_hlds__term_errors__report_term_errors_5_p_0(transform_hlds__termination__SCC_7, transform_hlds__termination__Errors_8, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35);
        }
#line 518 "termination.m"
        {
#line 518 "termination.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
#line 519 "termination.m"
        {
#line 519 "termination.m"
          hlds__hlds_module__module_info_incr_errors_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_36);
#line 519 "termination.m"
          return;
        }
#line 512 "termination.m"
      }
#line 512 "termination.m"
    else
#line 570 "termination.m"
      {
#line 570 "termination.m"
        MR_Word transform_hlds__termination__PrintErrors_27;
#line 524 "termination.m"
        MR_Word transform_hlds__termination__TypeCtorInfo_62_62 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 524 "termination.m"
        MR_Word transform_hlds__termination__IsNonImported_22;
#line 524 "termination.m"
        MR_Word transform_hlds__termination__NonImportedPPIds_24;
#line 524 "termination.m"
        MR_Word transform_hlds__termination__V_48_48;
#line 526 "termination.m"
        MR_Word transform_hlds__termination__V_25_25;
#line 526 "termination.m"
        MR_Word transform_hlds__termination__V_26_26;

#line 521 "termination.m"
        {
#line 521 "termination.m"
          transform_hlds__termination__IsNonImported_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 521 "termination.m"
          MR_hl_field(MR_mktag(0), transform_hlds__termination__IsNonImported_22, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_6[0]));
#line 521 "termination.m"
          MR_hl_field(MR_mktag(0), transform_hlds__termination__IsNonImported_22, 1) = ((MR_Box) (transform_hlds__termination__report_termination_errors_6_p_0_2));
#line 521 "termination.m"
          MR_hl_field(MR_mktag(0), transform_hlds__termination__IsNonImported_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 521 "termination.m"
          MR_hl_field(MR_mktag(0), transform_hlds__termination__IsNonImported_22, 3) = ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35));
#line 521 "termination.m"
        }
#line 525 "termination.m"
        {
#line 525 "termination.m"
          mercury__list__filter_3_p_0(transform_hlds__termination__TypeCtorInfo_62_62, transform_hlds__termination__IsNonImported_22, transform_hlds__termination__SCC_7, &transform_hlds__termination__NonImportedPPIds_24);
        }
#line 526 "termination.m"
        transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__NonImportedPPIds_24)) == (MR_mktag((MR_Integer) 1)));
#line 526 "termination.m"
        if (transform_hlds__termination__succeeded)
#line 526 "termination.m"
          {
#line 526 "termination.m"
            transform_hlds__termination__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__NonImportedPPIds_24, (MR_Integer) 0)));
#line 526 "termination.m"
            transform_hlds__termination__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__NonImportedPPIds_24, (MR_Integer) 1)));
#line 533 "termination.m"
            {
#line 533 "termination.m"
              transform_hlds__termination__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 533 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__V_48_48, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_6[0]));
#line 533 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__V_48_48, 1) = ((MR_Box) (transform_hlds__termination__report_termination_errors_6_p_0_3));
#line 533 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 533 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__V_48_48, 3) = ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35));
#line 533 "termination.m"
            }
#line 533 "termination.m"
            {
#line 533 "termination.m"
              transform_hlds__termination__succeeded = mercury__list__all_false_2_p_0(transform_hlds__termination__TypeCtorInfo_62_62, transform_hlds__termination__V_48_48, transform_hlds__termination__SCC_7);
            }
#line 524 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 544 "termination.m"
              {
#line 544 "termination.m"
                if ((transform_hlds__termination__VerboseErrors_13 == (MR_Integer) 0))
#line 545 "termination.m"
                  {
#line 545 "termination.m"
                    MR_Word transform_hlds__termination__TypeCtorInfo_64_64;
#line 545 "termination.m"
                    MR_Word transform_hlds__termination__IsNonSimple_28;
#line 545 "termination.m"
                    MR_Word transform_hlds__termination__PrintErrors0_32;

#line 3066 "transform_hlds.termination.c"
                    transform_hlds__termination__succeeded = (transform_hlds__termination__NormalErrors_12 == (MR_Integer) 1);
#line 545 "termination.m"
                    if (transform_hlds__termination__succeeded)
#line 545 "termination.m"
                      {
#line 548 "termination.m"
                        transform_hlds__termination__IsNonSimple_28 = (MR_Word) &transform_hlds__termination_scalar_common_3[5];
#line 3074 "transform_hlds.termination.c"
                        transform_hlds__termination__TypeCtorInfo_64_64 = (MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0;
#line 552 "termination.m"
                        {
#line 552 "termination.m"
                          mercury__list__filter_3_p_0(transform_hlds__termination__TypeCtorInfo_64_64, transform_hlds__termination__IsNonSimple_28, transform_hlds__termination__Errors_8, &transform_hlds__termination__PrintErrors0_32);
                        }
#line 559 "termination.m"
                        if ((transform_hlds__termination__PrintErrors0_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 558 "termination.m"
                          transform_hlds__termination__PrintErrors_27 = transform_hlds__termination__Errors_8;
#line 559 "termination.m"
                        else
#line 561 "termination.m"
                          transform_hlds__termination__PrintErrors_27 = transform_hlds__termination__PrintErrors0_32;
#line 559 "termination.m"
                        transform_hlds__termination__succeeded = MR_TRUE;
#line 545 "termination.m"
                      }
#line 545 "termination.m"
                  }
#line 544 "termination.m"
                else
#line 543 "termination.m"
                  {
#line 543 "termination.m"
                    transform_hlds__termination__PrintErrors_27 = transform_hlds__termination__Errors_8;
#line 543 "termination.m"
                    transform_hlds__termination__succeeded = MR_TRUE;
#line 543 "termination.m"
                  }
#line 544 "termination.m"
              }
#line 526 "termination.m"
          }
#line 570 "termination.m"
        if (transform_hlds__termination__succeeded)
#line 569 "termination.m"
          {
#line 569 "termination.m"
            transform_hlds__term_errors__report_term_errors_5_p_0(transform_hlds__termination__SCC_7, transform_hlds__termination__PrintErrors_27, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35);
          }
#line 570 "termination.m"
        else
#line 570 "termination.m"
          {
#line 570 "termination.m"
          }
#line 570 "termination.m"
        *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_36 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35;
#line 570 "termination.m"
      }
#line 499 "termination.m"
  }
#line 495 "termination.m"
}

#line 476 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_termination_infos_4_p_0(
#line 476 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 476 "termination.m"
  MR_Word transform_hlds__termination__TerminationInfo_2,
#line 476 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3,
#line 476 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4)
#line 476 "termination.m"
{
#line 479 "termination.m"
  while (MR_TRUE)
#line 479 "termination.m"
    {
#line 479 "termination.m"
      /* tailcall optimized into a loop */
#line 479 "termination.m"
      {
#line 479 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 479 "termination.m"
        if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 479 "termination.m"
          *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3;
#line 479 "termination.m"
        else
#line 480 "termination.m"
          {
#line 480 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_28_28;
#line 480 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_29_29;
#line 480 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_30_30;
#line 480 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_31_31;
#line 480 "termination.m"
            MR_Word transform_hlds__termination__PPId_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));
#line 480 "termination.m"
            MR_Word transform_hlds__termination__PPIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
#line 480 "termination.m"
            MR_Word transform_hlds__termination__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PPId_9, (MR_Integer) 0)));
#line 480 "termination.m"
            MR_Integer transform_hlds__termination__ProcId_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PPId_9, (MR_Integer) 1)));
#line 480 "termination.m"
            MR_Word transform_hlds__termination__PredTable0_15;
#line 480 "termination.m"
            MR_Word transform_hlds__termination__PredInfo0_16;
#line 480 "termination.m"
            MR_Word transform_hlds__termination__ProcTable0_17;
#line 480 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo0_18;
#line 480 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo_19;
#line 480 "termination.m"
            MR_Word transform_hlds__termination__ProcTable_20;
#line 480 "termination.m"
            MR_Word transform_hlds__termination__PredInfo_21;
#line 480 "termination.m"
            MR_Word transform_hlds__termination__PredTable_22;
#line 480 "termination.m"
            MR_Word transform_hlds__termination__V_25_25;
#line 480 "termination.m"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26;
#line 483 "termination.m"
            MR_Box transform_hlds__termination__conv0_PredInfo0_16;
#line 485 "termination.m"
            MR_Box transform_hlds__termination__conv1_ProcInfo0_18;

#line 482 "termination.m"
            {
#line 482 "termination.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__termination__PredTable0_15);
            }
#line 3209 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 3211 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_29_29 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 483 "termination.m"
            {
#line 483 "termination.m"
              mercury__map__lookup_3_p_0(transform_hlds__termination__TypeCtorInfo_28_28, transform_hlds__termination__TypeCtorInfo_29_29, transform_hlds__termination__PredTable0_15, ((MR_Box) (transform_hlds__termination__PredId_13)), &transform_hlds__termination__conv0_PredInfo0_16);
            }
#line 483 "termination.m"
            transform_hlds__termination__PredInfo0_16 = ((MR_Word) transform_hlds__termination__conv0_PredInfo0_16);
#line 484 "termination.m"
            {
#line 484 "termination.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__termination__PredInfo0_16, &transform_hlds__termination__ProcTable0_17);
            }
#line 3225 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_30_30 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 3227 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 485 "termination.m"
            {
#line 485 "termination.m"
              mercury__map__lookup_3_p_0(transform_hlds__termination__TypeCtorInfo_30_30, transform_hlds__termination__TypeCtorInfo_31_31, transform_hlds__termination__ProcTable0_17, ((MR_Box) (transform_hlds__termination__ProcId_14)), &transform_hlds__termination__conv1_ProcInfo0_18);
            }
#line 485 "termination.m"
            transform_hlds__termination__ProcInfo0_18 = ((MR_Word) transform_hlds__termination__conv1_ProcInfo0_18);
#line 487 "termination.m"
            {
#line 487 "termination.m"
              transform_hlds__termination__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 487 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_25_25, 0) = ((MR_Box) (transform_hlds__termination__TerminationInfo_2));
#line 487 "termination.m"
            }
#line 487 "termination.m"
            {
#line 487 "termination.m"
              hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(transform_hlds__termination__V_25_25, transform_hlds__termination__ProcInfo0_18, &transform_hlds__termination__ProcInfo_19);
            }
#line 489 "termination.m"
            {
#line 489 "termination.m"
              mercury__map__det_update_4_p_0(transform_hlds__termination__TypeCtorInfo_30_30, transform_hlds__termination__TypeCtorInfo_31_31, ((MR_Box) (transform_hlds__termination__ProcId_14)), ((MR_Box) (transform_hlds__termination__ProcInfo_19)), transform_hlds__termination__ProcTable0_17, &transform_hlds__termination__ProcTable_20);
            }
#line 490 "termination.m"
            {
#line 490 "termination.m"
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__termination__ProcTable_20, transform_hlds__termination__PredInfo0_16, &transform_hlds__termination__PredInfo_21);
            }
#line 491 "termination.m"
            {
#line 491 "termination.m"
              mercury__map__det_update_4_p_0(transform_hlds__termination__TypeCtorInfo_28_28, transform_hlds__termination__TypeCtorInfo_29_29, ((MR_Box) (transform_hlds__termination__PredId_13)), ((MR_Box) (transform_hlds__termination__PredInfo_21)), transform_hlds__termination__PredTable0_15, &transform_hlds__termination__PredTable_22);
            }
#line 492 "termination.m"
            {
#line 492 "termination.m"
              hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__termination__PredTable_22, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26);
            }
#line 493 "termination.m"
            /* direct tailcall eliminated */
#line 493 "termination.m"
            {
#line 493 "termination.m"
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__PPIds_10;
#line 493 "termination.m"
              MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26;

#line 493 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 493 "termination.m"
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
#line 493 "termination.m"
            }
#line 493 "termination.m"
            continue;
#line 480 "termination.m"
          }
#line 479 "termination.m"
      }
#line 479 "termination.m"
      break;
#line 479 "termination.m"
    }
#line 476 "termination.m"
}

#line 456 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_infinite_arg_size_infos_4_p_0(
#line 456 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 456 "termination.m"
  MR_Word transform_hlds__termination__ArgSizeInfo_2,
#line 456 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3,
#line 456 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4)
#line 456 "termination.m"
{
#line 459 "termination.m"
  while (MR_TRUE)
#line 459 "termination.m"
    {
#line 459 "termination.m"
      /* tailcall optimized into a loop */
#line 459 "termination.m"
      {
#line 459 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 459 "termination.m"
        if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 459 "termination.m"
          *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3;
#line 459 "termination.m"
        else
#line 460 "termination.m"
          {
#line 460 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_28_28;
#line 460 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_29_29;
#line 460 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_30_30;
#line 460 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_31_31;
#line 460 "termination.m"
            MR_Word transform_hlds__termination__PPId_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));
#line 460 "termination.m"
            MR_Word transform_hlds__termination__PPIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
#line 460 "termination.m"
            MR_Word transform_hlds__termination__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PPId_9, (MR_Integer) 0)));
#line 460 "termination.m"
            MR_Integer transform_hlds__termination__ProcId_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PPId_9, (MR_Integer) 1)));
#line 460 "termination.m"
            MR_Word transform_hlds__termination__PredTable0_15;
#line 460 "termination.m"
            MR_Word transform_hlds__termination__PredInfo0_16;
#line 460 "termination.m"
            MR_Word transform_hlds__termination__ProcTable0_17;
#line 460 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo0_18;
#line 460 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo_19;
#line 460 "termination.m"
            MR_Word transform_hlds__termination__ProcTable_20;
#line 460 "termination.m"
            MR_Word transform_hlds__termination__PredInfo_21;
#line 460 "termination.m"
            MR_Word transform_hlds__termination__PredTable_22;
#line 460 "termination.m"
            MR_Word transform_hlds__termination__V_25_25;
#line 460 "termination.m"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26;
#line 463 "termination.m"
            MR_Box transform_hlds__termination__conv0_PredInfo0_16;
#line 465 "termination.m"
            MR_Box transform_hlds__termination__conv1_ProcInfo0_18;

#line 462 "termination.m"
            {
#line 462 "termination.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__termination__PredTable0_15);
            }
#line 3375 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 3377 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_29_29 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 463 "termination.m"
            {
#line 463 "termination.m"
              mercury__map__lookup_3_p_0(transform_hlds__termination__TypeCtorInfo_28_28, transform_hlds__termination__TypeCtorInfo_29_29, transform_hlds__termination__PredTable0_15, ((MR_Box) (transform_hlds__termination__PredId_13)), &transform_hlds__termination__conv0_PredInfo0_16);
            }
#line 463 "termination.m"
            transform_hlds__termination__PredInfo0_16 = ((MR_Word) transform_hlds__termination__conv0_PredInfo0_16);
#line 464 "termination.m"
            {
#line 464 "termination.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__termination__PredInfo0_16, &transform_hlds__termination__ProcTable0_17);
            }
#line 3391 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_30_30 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 3393 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 465 "termination.m"
            {
#line 465 "termination.m"
              mercury__map__lookup_3_p_0(transform_hlds__termination__TypeCtorInfo_30_30, transform_hlds__termination__TypeCtorInfo_31_31, transform_hlds__termination__ProcTable0_17, ((MR_Box) (transform_hlds__termination__ProcId_14)), &transform_hlds__termination__conv1_ProcInfo0_18);
            }
#line 465 "termination.m"
            transform_hlds__termination__ProcInfo0_18 = ((MR_Word) transform_hlds__termination__conv1_ProcInfo0_18);
#line 467 "termination.m"
            {
#line 467 "termination.m"
              transform_hlds__termination__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 467 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_25_25, 0) = ((MR_Box) (transform_hlds__termination__ArgSizeInfo_2));
#line 467 "termination.m"
            }
#line 467 "termination.m"
            {
#line 467 "termination.m"
              hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_p_0(transform_hlds__termination__V_25_25, transform_hlds__termination__ProcInfo0_18, &transform_hlds__termination__ProcInfo_19);
            }
#line 468 "termination.m"
            {
#line 468 "termination.m"
              mercury__map__set_4_p_0(transform_hlds__termination__TypeCtorInfo_30_30, transform_hlds__termination__TypeCtorInfo_31_31, ((MR_Box) (transform_hlds__termination__ProcId_14)), ((MR_Box) (transform_hlds__termination__ProcInfo_19)), transform_hlds__termination__ProcTable0_17, &transform_hlds__termination__ProcTable_20);
            }
#line 469 "termination.m"
            {
#line 469 "termination.m"
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__termination__ProcTable_20, transform_hlds__termination__PredInfo0_16, &transform_hlds__termination__PredInfo_21);
            }
#line 470 "termination.m"
            {
#line 470 "termination.m"
              mercury__map__set_4_p_0(transform_hlds__termination__TypeCtorInfo_28_28, transform_hlds__termination__TypeCtorInfo_29_29, ((MR_Box) (transform_hlds__termination__PredId_13)), ((MR_Box) (transform_hlds__termination__PredInfo_21)), transform_hlds__termination__PredTable0_15, &transform_hlds__termination__PredTable_22);
            }
#line 471 "termination.m"
            {
#line 471 "termination.m"
              hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__termination__PredTable_22, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26);
            }
#line 472 "termination.m"
            /* direct tailcall eliminated */
#line 472 "termination.m"
            {
#line 472 "termination.m"
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__PPIds_10;
#line 472 "termination.m"
              MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26;

#line 472 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 472 "termination.m"
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
#line 472 "termination.m"
            }
#line 472 "termination.m"
            continue;
#line 460 "termination.m"
          }
#line 459 "termination.m"
      }
#line 459 "termination.m"
      break;
#line 459 "termination.m"
    }
#line 456 "termination.m"
}

#line 435 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_finite_arg_size_infos_4_p_0(
#line 435 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 435 "termination.m"
  MR_Word transform_hlds__termination__OutputSupplierMap_2,
#line 435 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3,
#line 435 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4)
#line 435 "termination.m"
{
#line 438 "termination.m"
  while (MR_TRUE)
#line 438 "termination.m"
    {
#line 438 "termination.m"
      /* tailcall optimized into a loop */
#line 438 "termination.m"
      {
#line 438 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 438 "termination.m"
        if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 438 "termination.m"
          *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3;
#line 438 "termination.m"
        else
#line 439 "termination.m"
          {
#line 439 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_32_32;
#line 439 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_33_33;
#line 439 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_34_34;
#line 439 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_35_35;
#line 439 "termination.m"
            MR_Word transform_hlds__termination__Soln_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));
#line 439 "termination.m"
            MR_Word transform_hlds__termination__Solns_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
#line 439 "termination.m"
            MR_Word transform_hlds__termination__PPId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__Soln_9, (MR_Integer) 0)));
#line 439 "termination.m"
            MR_Integer transform_hlds__termination__Gamma_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__Soln_9, (MR_Integer) 1)));
#line 439 "termination.m"
            MR_Word transform_hlds__termination__PredId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PPId_13, (MR_Integer) 0)));
#line 439 "termination.m"
            MR_Integer transform_hlds__termination__ProcId_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PPId_13, (MR_Integer) 1)));
#line 439 "termination.m"
            MR_Word transform_hlds__termination__PredTable0_17;
#line 439 "termination.m"
            MR_Word transform_hlds__termination__PredInfo0_18;
#line 439 "termination.m"
            MR_Word transform_hlds__termination__ProcTable0_19;
#line 439 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo_20;
#line 439 "termination.m"
            MR_Word transform_hlds__termination__OutputSuppliers_21;
#line 439 "termination.m"
            MR_Word transform_hlds__termination__ArgSizeInfo_22;
#line 439 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo1_23;
#line 439 "termination.m"
            MR_Word transform_hlds__termination__ProcTable_24;
#line 439 "termination.m"
            MR_Word transform_hlds__termination__PredInfo_25;
#line 439 "termination.m"
            MR_Word transform_hlds__termination__PredTable_26;
#line 439 "termination.m"
            MR_Word transform_hlds__termination__V_29_29;
#line 439 "termination.m"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_30_30;
#line 443 "termination.m"
            MR_Box transform_hlds__termination__conv0_PredInfo0_18;
#line 445 "termination.m"
            MR_Box transform_hlds__termination__conv1_ProcInfo_20;
#line 446 "termination.m"
            MR_Box transform_hlds__termination__conv2_OutputSuppliers_21;

#line 442 "termination.m"
            {
#line 442 "termination.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__termination__PredTable0_17);
            }
#line 3551 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_32_32 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 3553 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_33_33 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 443 "termination.m"
            {
#line 443 "termination.m"
              mercury__map__lookup_3_p_0(transform_hlds__termination__TypeCtorInfo_32_32, transform_hlds__termination__TypeCtorInfo_33_33, transform_hlds__termination__PredTable0_17, ((MR_Box) (transform_hlds__termination__PredId_15)), &transform_hlds__termination__conv0_PredInfo0_18);
            }
#line 443 "termination.m"
            transform_hlds__termination__PredInfo0_18 = ((MR_Word) transform_hlds__termination__conv0_PredInfo0_18);
#line 444 "termination.m"
            {
#line 444 "termination.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__termination__PredInfo0_18, &transform_hlds__termination__ProcTable0_19);
            }
#line 3567 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_34_34 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 3569 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_35_35 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 445 "termination.m"
            {
#line 445 "termination.m"
              mercury__map__lookup_3_p_0(transform_hlds__termination__TypeCtorInfo_34_34, transform_hlds__termination__TypeCtorInfo_35_35, transform_hlds__termination__ProcTable0_19, ((MR_Box) (transform_hlds__termination__ProcId_16)), &transform_hlds__termination__conv1_ProcInfo_20);
            }
#line 445 "termination.m"
            transform_hlds__termination__ProcInfo_20 = ((MR_Word) transform_hlds__termination__conv1_ProcInfo_20);
#line 446 "termination.m"
            {
#line 446 "termination.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__termination_scalar_common_1[2], transform_hlds__termination__OutputSupplierMap_2, ((MR_Box) (transform_hlds__termination__PPId_13)), &transform_hlds__termination__conv2_OutputSuppliers_21);
            }
#line 446 "termination.m"
            transform_hlds__termination__OutputSuppliers_21 = ((MR_Word) transform_hlds__termination__conv2_OutputSuppliers_21);
#line 447 "termination.m"
            {
#line 447 "termination.m"
              transform_hlds__termination__ArgSizeInfo_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 447 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeInfo_22, 0) = ((MR_Box) (transform_hlds__termination__Gamma_14));
#line 447 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeInfo_22, 1) = ((MR_Box) (transform_hlds__termination__OutputSuppliers_21));
#line 447 "termination.m"
            }
#line 449 "termination.m"
            {
#line 449 "termination.m"
              transform_hlds__termination__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 449 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_29_29, 0) = ((MR_Box) (transform_hlds__termination__ArgSizeInfo_22));
#line 449 "termination.m"
            }
#line 449 "termination.m"
            {
#line 449 "termination.m"
              hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_p_0(transform_hlds__termination__V_29_29, transform_hlds__termination__ProcInfo_20, &transform_hlds__termination__ProcInfo1_23);
            }
#line 450 "termination.m"
            {
#line 450 "termination.m"
              mercury__map__set_4_p_0(transform_hlds__termination__TypeCtorInfo_34_34, transform_hlds__termination__TypeCtorInfo_35_35, ((MR_Box) (transform_hlds__termination__ProcId_16)), ((MR_Box) (transform_hlds__termination__ProcInfo1_23)), transform_hlds__termination__ProcTable0_19, &transform_hlds__termination__ProcTable_24);
            }
#line 451 "termination.m"
            {
#line 451 "termination.m"
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__termination__ProcTable_24, transform_hlds__termination__PredInfo0_18, &transform_hlds__termination__PredInfo_25);
            }
#line 452 "termination.m"
            {
#line 452 "termination.m"
              mercury__map__set_4_p_0(transform_hlds__termination__TypeCtorInfo_32_32, transform_hlds__termination__TypeCtorInfo_33_33, ((MR_Box) (transform_hlds__termination__PredId_15)), ((MR_Box) (transform_hlds__termination__PredInfo_25)), transform_hlds__termination__PredTable0_17, &transform_hlds__termination__PredTable_26);
            }
#line 453 "termination.m"
            {
#line 453 "termination.m"
              hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__termination__PredTable_26, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_30_30);
            }
#line 454 "termination.m"
            /* direct tailcall eliminated */
#line 454 "termination.m"
            {
#line 454 "termination.m"
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__Solns_10;
#line 454 "termination.m"
              MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_30_30;

#line 454 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 454 "termination.m"
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
#line 454 "termination.m"
            }
#line 454 "termination.m"
            continue;
#line 439 "termination.m"
          }
#line 438 "termination.m"
      }
#line 438 "termination.m"
      break;
#line 438 "termination.m"
    }
#line 435 "termination.m"
}

#line 398 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0_3(
#line 398 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 398 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1)
#line 398 "termination.m"
{
#line 398 "termination.m"
  {
#line 398 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 398 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

#line 398 "termination.m"
    {
#line 398 "termination.m"
      return transform_hlds__termination__succeeded = transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__398__1_1_p_0(((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 398 "termination.m"
    return transform_hlds__termination__succeeded;
#line 398 "termination.m"
  }
#line 398 "termination.m"
}

#line 389 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0_2(
#line 389 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 389 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1)
#line 389 "termination.m"
{
#line 389 "termination.m"
  {
#line 389 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 389 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

#line 389 "termination.m"
    {
#line 389 "termination.m"
      return transform_hlds__termination__succeeded = transform_hlds__term_util__is_termination_known_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 389 "termination.m"
    return transform_hlds__termination__succeeded;
#line 389 "termination.m"
  }
#line 389 "termination.m"
}

#line 364 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0_1(
#line 364 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 364 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1)
#line 364 "termination.m"
{
#line 364 "termination.m"
  {
#line 364 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 364 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

#line 364 "termination.m"
    {
#line 364 "termination.m"
      return transform_hlds__termination__succeeded = transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__364__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 364 "termination.m"
    return transform_hlds__termination__succeeded;
#line 364 "termination.m"
  }
#line 364 "termination.m"
}

#line 360 "termination.m"
static void MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0(
#line 360 "termination.m"
  MR_Word transform_hlds__termination__PassInfo_7,
#line 360 "termination.m"
  MR_Word transform_hlds__termination__SCC_8,
#line 360 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47,
#line 360 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_48)
#line 360 "termination.m"
{
#line 363 "termination.m"
  {
#line 363 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 363 "termination.m"
    MR_Word transform_hlds__termination__TypeCtorInfo_69_69;
#line 363 "termination.m"
    MR_Word transform_hlds__termination__IsArgSizeKnown_11;
#line 363 "termination.m"
    MR_Word transform_hlds__termination__SCCArgSizeUnknown_17;
#line 363 "termination.m"
    MR_Word transform_hlds__termination__ArgSizeErrors_18;
#line 363 "termination.m"
    MR_Word transform_hlds__termination__TermErrors_19;
#line 363 "termination.m"
    MR_Word transform_hlds__termination__SCCTerminationUnknown_27;
#line 363 "termination.m"
    MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_57_57;
#line 363 "termination.m"
    MR_Word transform_hlds__termination__V_58_58;
#line 368 "termination.m"
    MR_Word transform_hlds__termination___SCCArgSizeKnown_16;
#line 389 "termination.m"
    MR_Word transform_hlds__termination___SCCTerminationKnown_26;

#line 364 "termination.m"
    {
#line 364 "termination.m"
      transform_hlds__termination__IsArgSizeKnown_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 364 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsArgSizeKnown_11, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_6[0]));
#line 364 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsArgSizeKnown_11, 1) = ((MR_Box) (transform_hlds__termination__analyse_termination_in_scc_6_p_0_1));
#line 364 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsArgSizeKnown_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 364 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsArgSizeKnown_11, 3) = ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47));
#line 364 "termination.m"
    }
#line 3792 "transform_hlds.termination.c"
    transform_hlds__termination__TypeCtorInfo_69_69 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 368 "termination.m"
    {
#line 368 "termination.m"
      mercury__list__filter_4_p_0(transform_hlds__termination__TypeCtorInfo_69_69, transform_hlds__termination__IsArgSizeKnown_11, transform_hlds__termination__SCC_8, &transform_hlds__termination___SCCArgSizeKnown_16, &transform_hlds__termination__SCCArgSizeUnknown_17);
    }
#line 373 "termination.m"
    if ((transform_hlds__termination__SCCArgSizeUnknown_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 370 "termination.m"
      {
#line 371 "termination.m"
        transform_hlds__termination__ArgSizeErrors_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 372 "termination.m"
        transform_hlds__termination__TermErrors_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 370 "termination.m"
        transform_hlds__termination__STATE_VARIABLE_ModuleInfo_57_57 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47;
#line 370 "termination.m"
      }
#line 373 "termination.m"
    else
#line 374 "termination.m"
      {
#line 374 "termination.m"
        MR_Word transform_hlds__termination__ArgSizeResult_22;
#line 374 "termination.m"
        MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_53_53;

#line 375 "termination.m"
        {
#line 375 "termination.m"
          transform_hlds__term_pass1__find_arg_sizes_in_scc_8_p_0(transform_hlds__termination__SCCArgSizeUnknown_17, transform_hlds__termination__PassInfo_7, &transform_hlds__termination__ArgSizeResult_22, &transform_hlds__termination__TermErrors_19, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_53_53);
        }
#line 382 "termination.m"
        if (((MR_tag((MR_Word) transform_hlds__termination__ArgSizeResult_22)) == (MR_mktag((MR_Integer) 1))))
#line 383 "termination.m"
          {
#line 383 "termination.m"
            MR_Word transform_hlds__termination__V_55_55;

#line 383 "termination.m"
            transform_hlds__termination__ArgSizeErrors_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__ArgSizeResult_22, (MR_Integer) 0)));
#line 385 "termination.m"
            {
#line 385 "termination.m"
              transform_hlds__termination__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 385 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_55_55, 0) = ((MR_Box) (transform_hlds__termination__ArgSizeErrors_18));
#line 385 "termination.m"
            }
#line 384 "termination.m"
            {
#line 384 "termination.m"
              transform_hlds__termination__set_infinite_arg_size_infos_4_p_0(transform_hlds__termination__SCCArgSizeUnknown_17, transform_hlds__termination__V_55_55, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_53_53, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_57_57);
            }
#line 383 "termination.m"
          }
#line 382 "termination.m"
        else
#line 378 "termination.m"
          {
#line 378 "termination.m"
            MR_Word transform_hlds__termination__Solutions_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeResult_22, (MR_Integer) 0)));
#line 378 "termination.m"
            MR_Word transform_hlds__termination__OutputSupplierMap_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeResult_22, (MR_Integer) 1)));

#line 379 "termination.m"
            {
#line 379 "termination.m"
              transform_hlds__termination__set_finite_arg_size_infos_4_p_0(transform_hlds__termination__Solutions_23, transform_hlds__termination__OutputSupplierMap_24, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_53_53, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_57_57);
            }
#line 381 "termination.m"
            transform_hlds__termination__ArgSizeErrors_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 378 "termination.m"
          }
#line 374 "termination.m"
      }
#line 389 "termination.m"
    {
#line 389 "termination.m"
      transform_hlds__termination__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 389 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_58_58, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_6[0]));
#line 389 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_58_58, 1) = ((MR_Box) (transform_hlds__termination__analyse_termination_in_scc_6_p_0_2));
#line 389 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_58_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 389 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_58_58, 3) = ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_57_57));
#line 389 "termination.m"
    }
#line 389 "termination.m"
    {
#line 389 "termination.m"
      mercury__list__filter_4_p_0(transform_hlds__termination__TypeCtorInfo_69_69, transform_hlds__termination__V_58_58, transform_hlds__termination__SCC_8, &transform_hlds__termination___SCCTerminationKnown_26, &transform_hlds__termination__SCCTerminationUnknown_27);
    }
#line 396 "termination.m"
    if ((transform_hlds__termination__SCCTerminationUnknown_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 395 "termination.m"
      *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_48 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_57_57;
#line 396 "termination.m"
    else
#line 397 "termination.m"
      {
#line 397 "termination.m"
        MR_Word transform_hlds__termination__TypeCtorInfo_71_71 = (MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0;
#line 397 "termination.m"
        MR_Word transform_hlds__termination__FatalErrors_34;
#line 397 "termination.m"
        MR_Word transform_hlds__termination__BothErrors_35;

#line 402 "termination.m"
        {
#line 402 "termination.m"
          mercury__list__filter_3_p_0(transform_hlds__termination__TypeCtorInfo_71_71, (MR_Word) &transform_hlds__termination_scalar_common_3[4], transform_hlds__termination__ArgSizeErrors_18, &transform_hlds__termination__FatalErrors_34);
        }
#line 403 "termination.m"
        {
#line 403 "termination.m"
          transform_hlds__termination__BothErrors_35 = mercury__list__f_43_43_2_f_0(transform_hlds__termination__TypeCtorInfo_71_71, transform_hlds__termination__TermErrors_19, transform_hlds__termination__FatalErrors_34);
        }
#line 3913 "transform_hlds.termination.c"
        if ((transform_hlds__termination__BothErrors_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3915 "transform_hlds.termination.c"
          {
#line 3917 "transform_hlds.termination.c"
            MR_Word transform_hlds__termination__TerminationResult_42;
#line 3919 "transform_hlds.termination.c"
            MR_Word transform_hlds__termination__Globals_43;
#line 3921 "transform_hlds.termination.c"
            MR_Integer transform_hlds__termination__SingleArgs_44;
#line 3923 "transform_hlds.termination.c"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_62_62;
#line 3925 "transform_hlds.termination.c"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_64_64;

#line 413 "termination.m"
            {
#line 413 "termination.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_57_57, &transform_hlds__termination__Globals_43);
            }
#line 414 "termination.m"
            {
#line 414 "termination.m"
              libs__globals__lookup_int_option_3_p_0(transform_hlds__termination__Globals_43, (MR_Integer) 417, &transform_hlds__termination__SingleArgs_44);
            }
#line 416 "termination.m"
            {
#line 416 "termination.m"
              transform_hlds__term_pass2__prove_termination_in_scc_8_p_0(transform_hlds__termination__SCCTerminationUnknown_27, transform_hlds__termination__PassInfo_7, transform_hlds__termination__SingleArgs_44, &transform_hlds__termination__TerminationResult_42, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_57_57, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_62_62);
            }
#line 419 "termination.m"
            {
#line 419 "termination.m"
              transform_hlds__termination__set_termination_infos_4_p_0(transform_hlds__termination__SCCTerminationUnknown_27, transform_hlds__termination__TerminationResult_42, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_62_62, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_64_64);
            }
#line 425 "termination.m"
            if (((MR_tag((MR_Word) transform_hlds__termination__TerminationResult_42)) == (MR_mktag((MR_Integer) 1))))
#line 422 "termination.m"
              {
#line 422 "termination.m"
                MR_Word transform_hlds__termination__TerminationErrors_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__TerminationResult_42, (MR_Integer) 0)));

#line 423 "termination.m"
                {
#line 423 "termination.m"
                  transform_hlds__termination__report_termination_errors_6_p_0(transform_hlds__termination__SCC_8, transform_hlds__termination__TerminationErrors_45, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_64_64, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_48);
#line 423 "termination.m"
                  return;
                }
#line 422 "termination.m"
              }
#line 425 "termination.m"
            else
#line 426 "termination.m"
              *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_48 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_64_64;
#line 3968 "transform_hlds.termination.c"
          }
#line 3970 "transform_hlds.termination.c"
        else
#line 3972 "transform_hlds.termination.c"
          {
#line 3974 "transform_hlds.termination.c"
            MR_Integer transform_hlds__termination__MaxErrors_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PassInfo_7, (MR_Integer) 1)));
#line 3976 "transform_hlds.termination.c"
            MR_Word transform_hlds__termination__TerminationResult_74;
#line 3978 "transform_hlds.termination.c"
            MR_Word transform_hlds__termination__TerminationErrors_75;
#line 3980 "transform_hlds.termination.c"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_64_78;
#line 408 "termination.m"
            MR_Word transform_hlds__termination__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PassInfo_7, (MR_Integer) 0)));
#line 408 "termination.m"
            MR_Integer transform_hlds__termination__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PassInfo_7, (MR_Integer) 2)));

#line 409 "termination.m"
            {
#line 409 "termination.m"
              mercury__list__take_upto_3_p_0(transform_hlds__termination__TypeCtorInfo_71_71, transform_hlds__termination__MaxErrors_39, transform_hlds__termination__BothErrors_35, &transform_hlds__termination__TerminationErrors_75);
            }
#line 410 "termination.m"
            {
#line 410 "termination.m"
              transform_hlds__termination__TerminationResult_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 410 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__TerminationResult_74, 0) = ((MR_Box) (transform_hlds__termination__TerminationErrors_75));
#line 410 "termination.m"
            }
#line 419 "termination.m"
            {
#line 419 "termination.m"
              transform_hlds__termination__set_termination_infos_4_p_0(transform_hlds__termination__SCCTerminationUnknown_27, transform_hlds__termination__TerminationResult_74, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_57_57, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_64_78);
            }
#line 423 "termination.m"
            {
#line 423 "termination.m"
              transform_hlds__termination__report_termination_errors_6_p_0(transform_hlds__termination__SCC_8, transform_hlds__termination__TerminationErrors_75, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_64_78, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_48);
#line 423 "termination.m"
              return;
            }
#line 4012 "transform_hlds.termination.c"
          }
#line 397 "termination.m"
      }
#line 363 "termination.m"
  }
#line 360 "termination.m"
}

#line 329 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__check_procs_known_term_3_p_0(
#line 329 "termination.m"
  MR_Word transform_hlds__termination__Status_1,
#line 329 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_2,
#line 329 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_3)
#line 329 "termination.m"
{
#line 332 "termination.m"
  while (MR_TRUE)
#line 332 "termination.m"
    {
#line 332 "termination.m"
      /* tailcall optimized into a loop */
#line 332 "termination.m"
      {
#line 332 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 332 "termination.m"
        if ((transform_hlds__termination__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 332 "termination.m"
          transform_hlds__termination__succeeded = MR_TRUE;
#line 332 "termination.m"
        else
#line 333 "termination.m"
          {
#line 333 "termination.m"
            MR_Word transform_hlds__termination__PPId_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__2_2, (MR_Integer) 0)));
#line 333 "termination.m"
            MR_Word transform_hlds__termination__PPIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__2_2, (MR_Integer) 1)));
#line 333 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo_11;
#line 333 "termination.m"
            MR_Word transform_hlds__termination__MaybeTerm_12;
#line 333 "termination.m"
            MR_Word transform_hlds__termination__PPIdStatus_13;
#line 334 "termination.m"
            MR_Word transform_hlds__termination__V_10_10;

#line 334 "termination.m"
            {
#line 334 "termination.m"
              hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__termination__ModuleInfo_3, transform_hlds__termination__PPId_7, &transform_hlds__termination__V_10_10, &transform_hlds__termination__ProcInfo_11);
            }
#line 335 "termination.m"
            {
#line 335 "termination.m"
              hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__termination__ProcInfo_11, &transform_hlds__termination__MaybeTerm_12);
            }
#line 339 "termination.m"
            if ((transform_hlds__termination__MaybeTerm_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 337 "termination.m"
              {
#line 338 "termination.m"
                {
#line 338 "termination.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.termination", (MR_String) "predicate \140transform_hlds.termination.check_procs_known_term\'/3", (MR_String) "no termination info for procedure");
                }
#line 337 "termination.m"
              }
#line 339 "termination.m"
            else
#line 340 "termination.m"
              transform_hlds__termination__PPIdStatus_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__MaybeTerm_12, (MR_Integer) 0)));
#line 345 "termination.m"
            if (((MR_tag((MR_Word) transform_hlds__termination__Status_1)) == (MR_mktag((MR_Integer) 1))))
#line 347 "termination.m"
              {
#line 347 "termination.m"
                MR_Word transform_hlds__termination__V_17_17;

#line 347 "termination.m"
                transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__PPIdStatus_13)) == (MR_mktag((MR_Integer) 1)));
#line 347 "termination.m"
                if (transform_hlds__termination__succeeded)
#line 347 "termination.m"
                  transform_hlds__termination__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__PPIdStatus_13, (MR_Integer) 0)));
#line 347 "termination.m"
              }
#line 345 "termination.m"
            else
#line 344 "termination.m"
              transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__PPIdStatus_13)) == (MR_mktag((MR_Integer) 0)));
#line 333 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 349 "termination.m"
              {
#line 349 "termination.m"
                /* direct tailcall eliminated */
#line 349 "termination.m"
                {
#line 349 "termination.m"
                  MR_Word transform_hlds__termination__HeadVar__2__tmp_copy_2 = transform_hlds__termination__PPIds_8;

#line 349 "termination.m"
                  transform_hlds__termination__HeadVar__2_2 = transform_hlds__termination__HeadVar__2__tmp_copy_2;
#line 349 "termination.m"
                }
#line 349 "termination.m"
                continue;
#line 349 "termination.m"
              }
#line 333 "termination.m"
          }
#line 332 "termination.m"
        return transform_hlds__termination__succeeded;
#line 332 "termination.m"
      }
#line 332 "termination.m"
      break;
#line 332 "termination.m"
    }
#line 329 "termination.m"
}

#line 312 "termination.m"
static MR_Box MR_CALL 
transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0_2(
#line 312 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 312 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1)
#line 312 "termination.m"
{
#line 312 "termination.m"
  {
#line 312 "termination.m"
    MR_Box transform_hlds__termination__wrapper_arg_2;
#line 312 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;
#line 312 "termination.m"
    MR_Word transform_hlds__termination__conv0_HeadVar__2_42;

#line 312 "termination.m"
    {
#line 312 "termination.m"
      transform_hlds__termination__conv0_HeadVar__2_42 = transform_hlds__termination__IntroducedFrom__func__check_scc_pragmas_are_consistent__312__1_1_f_0(((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 312 "termination.m"
    transform_hlds__termination__wrapper_arg_2 = ((MR_Box) (transform_hlds__termination__conv0_HeadVar__2_42));
#line 312 "termination.m"
    return transform_hlds__termination__wrapper_arg_2;
#line 312 "termination.m"
  }
#line 312 "termination.m"
}

#line 279 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0_1(
#line 279 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 279 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1)
#line 279 "termination.m"
{
#line 279 "termination.m"
  {
#line 279 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 279 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

#line 279 "termination.m"
    {
#line 279 "termination.m"
      return transform_hlds__termination__succeeded = transform_hlds__term_util__is_termination_known_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 279 "termination.m"
    return transform_hlds__termination__succeeded;
#line 279 "termination.m"
  }
#line 279 "termination.m"
}

#line 274 "termination.m"
static void MR_CALL 
transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0(
#line 274 "termination.m"
  MR_Word transform_hlds__termination__SCC_6,
#line 274 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26,
#line 274 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27,
#line 274 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_0_28,
#line 274 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_Specs_29)
#line 274 "termination.m"
{
#line 278 "termination.m"
  {
#line 278 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 278 "termination.m"
    MR_Word transform_hlds__termination__TypeCtorInfo_66_66;
#line 278 "termination.m"
    MR_Word transform_hlds__termination__SCCTerminationKnown_9;
#line 278 "termination.m"
    MR_Word transform_hlds__termination__SCCTerminationUnknown_10;
#line 278 "termination.m"
    MR_Word transform_hlds__termination__V_30_30;

#line 279 "termination.m"
    {
#line 279 "termination.m"
      transform_hlds__termination__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 279 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_30_30, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_6[0]));
#line 279 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_30_30, 1) = ((MR_Box) (transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0_1));
#line 279 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 279 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_30_30, 3) = ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26));
#line 279 "termination.m"
    }
#line 4242 "transform_hlds.termination.c"
    transform_hlds__termination__TypeCtorInfo_66_66 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 279 "termination.m"
    {
#line 279 "termination.m"
      mercury__list__filter_4_p_0(transform_hlds__termination__TypeCtorInfo_66_66, transform_hlds__termination__V_30_30, transform_hlds__termination__SCC_6, &transform_hlds__termination__SCCTerminationKnown_9, &transform_hlds__termination__SCCTerminationUnknown_10);
    }
#line 283 "termination.m"
    if ((transform_hlds__termination__SCCTerminationKnown_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 282 "termination.m"
      {
#line 282 "termination.m"
        *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26;
#line 282 "termination.m"
        *transform_hlds__termination__STATE_VARIABLE_Specs_29 = transform_hlds__termination__STATE_VARIABLE_Specs_0_28;
#line 282 "termination.m"
      }
#line 283 "termination.m"
    else
#line 284 "termination.m"
      {
#line 284 "termination.m"
        MR_Word transform_hlds__termination__KnownPPId_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__SCCTerminationKnown_9, (MR_Integer) 0)));
#line 284 "termination.m"
        MR_Word transform_hlds__termination__KnownProcInfo_14;
#line 284 "termination.m"
        MR_Word transform_hlds__termination__MaybeKnownTerm_15;
#line 284 "termination.m"
        MR_Word transform_hlds__termination__KnownTermStatus_16;
#line 284 "termination.m"
        MR_Word transform_hlds__termination__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__SCCTerminationKnown_9, (MR_Integer) 1)));
#line 285 "termination.m"
        MR_Word transform_hlds__termination__V_13_13;
#line 333 "termination.m"
        MR_Word transform_hlds__termination__PPId_72;
#line 333 "termination.m"
        MR_Word transform_hlds__termination__PPIds_73;
#line 333 "termination.m"
        MR_Word transform_hlds__termination__ProcInfo_76;
#line 333 "termination.m"
        MR_Word transform_hlds__termination__MaybeTerm_77;
#line 333 "termination.m"
        MR_Word transform_hlds__termination__PPIdStatus_78;
#line 334 "termination.m"
        MR_Word transform_hlds__termination__V_75_75;

#line 285 "termination.m"
        {
#line 285 "termination.m"
          hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26, transform_hlds__termination__KnownPPId_11, &transform_hlds__termination__V_13_13, &transform_hlds__termination__KnownProcInfo_14);
        }
#line 286 "termination.m"
        {
#line 286 "termination.m"
          hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__termination__KnownProcInfo_14, &transform_hlds__termination__MaybeKnownTerm_15);
        }
#line 290 "termination.m"
        if ((transform_hlds__termination__MaybeKnownTerm_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 288 "termination.m"
          {
#line 289 "termination.m"
            {
#line 289 "termination.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.termination", (MR_String) "predicate \140transform_hlds.termination.check_scc_pragmas_are_consistent\'/5", (MR_String) "no termination info found");
#line 289 "termination.m"
              return;
            }
#line 288 "termination.m"
          }
#line 290 "termination.m"
        else
#line 291 "termination.m"
          transform_hlds__termination__KnownTermStatus_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__MaybeKnownTerm_15, (MR_Integer) 0)));
#line 333 "termination.m"
        transform_hlds__termination__PPId_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__SCCTerminationKnown_9, (MR_Integer) 0)));
#line 333 "termination.m"
        transform_hlds__termination__PPIds_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__SCCTerminationKnown_9, (MR_Integer) 1)));
#line 334 "termination.m"
        {
#line 334 "termination.m"
          hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26, transform_hlds__termination__PPId_72, &transform_hlds__termination__V_75_75, &transform_hlds__termination__ProcInfo_76);
        }
#line 335 "termination.m"
        {
#line 335 "termination.m"
          hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__termination__ProcInfo_76, &transform_hlds__termination__MaybeTerm_77);
        }
#line 339 "termination.m"
        if ((transform_hlds__termination__MaybeTerm_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 337 "termination.m"
          {
#line 338 "termination.m"
            {
#line 338 "termination.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.termination", (MR_String) "predicate \140transform_hlds.termination.check_procs_known_term\'/3", (MR_String) "no termination info for procedure");
#line 338 "termination.m"
              return;
            }
#line 337 "termination.m"
          }
#line 339 "termination.m"
        else
#line 340 "termination.m"
          transform_hlds__termination__PPIdStatus_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__MaybeTerm_77, (MR_Integer) 0)));
#line 345 "termination.m"
        if (((MR_tag((MR_Word) transform_hlds__termination__KnownTermStatus_16)) == (MR_mktag((MR_Integer) 1))))
#line 347 "termination.m"
          {
#line 347 "termination.m"
            MR_Word transform_hlds__termination__V_82_82;

#line 347 "termination.m"
            transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__PPIdStatus_78)) == (MR_mktag((MR_Integer) 1)));
#line 347 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 347 "termination.m"
              transform_hlds__termination__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__PPIdStatus_78, (MR_Integer) 0)));
#line 347 "termination.m"
          }
#line 345 "termination.m"
        else
#line 344 "termination.m"
          transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__PPIdStatus_78)) == (MR_mktag((MR_Integer) 0)));
#line 333 "termination.m"
        if (transform_hlds__termination__succeeded)
#line 349 "termination.m"
          {
#line 349 "termination.m"
            transform_hlds__termination__succeeded = transform_hlds__termination__check_procs_known_term_3_p_0(transform_hlds__termination__KnownTermStatus_16, transform_hlds__termination__PPIds_73, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26);
          }
#line 302 "termination.m"
        if (transform_hlds__termination__succeeded)
#line 300 "termination.m"
          {
#line 300 "termination.m"
            {
#line 300 "termination.m"
              transform_hlds__termination__set_termination_infos_4_p_0(transform_hlds__termination__SCCTerminationUnknown_10, transform_hlds__termination__KnownTermStatus_16, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27);
            }
#line 300 "termination.m"
            *transform_hlds__termination__STATE_VARIABLE_Specs_29 = transform_hlds__termination__STATE_VARIABLE_Specs_0_28;
#line 300 "termination.m"
          }
#line 302 "termination.m"
        else
#line 307 "termination.m"
          {
#line 307 "termination.m"
            MR_Word transform_hlds__termination__Context_17;
#line 307 "termination.m"
            MR_Word transform_hlds__termination__NewTermStatus_18;
#line 307 "termination.m"
            MR_Word transform_hlds__termination__PredIds_19;
#line 307 "termination.m"
            MR_Word transform_hlds__termination__PredNamePieces_22;
#line 307 "termination.m"
            MR_Word transform_hlds__termination__Pieces_23;
#line 307 "termination.m"
            MR_Word transform_hlds__termination__Msg_24;
#line 307 "termination.m"
            MR_Word transform_hlds__termination__Spec_25;
#line 307 "termination.m"
            MR_Word transform_hlds__termination__V_35_35;
#line 307 "termination.m"
            MR_Word transform_hlds__termination__V_36_36;
#line 307 "termination.m"
            MR_Word transform_hlds__termination__V_44_44;
#line 307 "termination.m"
            MR_Word transform_hlds__termination__V_54_54;
#line 307 "termination.m"
            MR_Word transform_hlds__termination__V_55_55;
#line 307 "termination.m"
            MR_Word transform_hlds__termination__V_59_59;

#line 306 "termination.m"
            {
#line 306 "termination.m"
              transform_hlds__term_util__get_context_from_scc_3_p_0(transform_hlds__termination__SCCTerminationKnown_9, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26, &transform_hlds__termination__Context_17);
            }
#line 308 "termination.m"
            {
#line 308 "termination.m"
              transform_hlds__termination__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 308 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__V_36_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 308 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__V_36_36, 1) = ((MR_Box) (transform_hlds__termination__Context_17));
#line 308 "termination.m"
            }
#line 309 "termination.m"
            {
#line 309 "termination.m"
              transform_hlds__termination__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 309 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_35_35, 0) = ((MR_Box) (transform_hlds__termination__V_36_36));
#line 309 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 309 "termination.m"
            }
#line 308 "termination.m"
            {
#line 308 "termination.m"
              transform_hlds__termination__NewTermStatus_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 308 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__NewTermStatus_18, 0) = ((MR_Box) (transform_hlds__termination__V_35_35));
#line 308 "termination.m"
            }
#line 310 "termination.m"
            {
#line 310 "termination.m"
              transform_hlds__termination__set_termination_infos_4_p_0(transform_hlds__termination__SCC_6, transform_hlds__termination__NewTermStatus_18, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27);
            }
#line 312 "termination.m"
            {
#line 312 "termination.m"
              transform_hlds__termination__PredIds_19 = mercury__list__map_2_f_0(transform_hlds__termination__TypeCtorInfo_66_66, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &transform_hlds__termination_scalar_common_3[3], transform_hlds__termination__SCCTerminationKnown_9);
            }
#line 314 "termination.m"
            {
#line 314 "termination.m"
              transform_hlds__termination__PredNamePieces_22 = hlds__hlds_error_util__describe_several_pred_names_3_f_0(*transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27, (MR_Integer) 0, transform_hlds__termination__PredIds_19);
            }
#line 317 "termination.m"
            {
#line 317 "termination.m"
              transform_hlds__termination__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 317 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_44_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[31])));
#line 317 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_44_44, 1) = ((MR_Box) (transform_hlds__termination__PredNamePieces_22));
#line 317 "termination.m"
            }
#line 317 "termination.m"
            {
#line 317 "termination.m"
              transform_hlds__termination__Pieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__termination__V_44_44, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[22]));
            }
#line 320 "termination.m"
            {
#line 320 "termination.m"
              transform_hlds__termination__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 320 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__V_55_55, 0) = ((MR_Box) (transform_hlds__termination__Pieces_23));
#line 320 "termination.m"
            }
#line 320 "termination.m"
            {
#line 320 "termination.m"
              transform_hlds__termination__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 320 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_54_54, 0) = ((MR_Box) (transform_hlds__termination__V_55_55));
#line 320 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 320 "termination.m"
            }
#line 320 "termination.m"
            {
#line 320 "termination.m"
              transform_hlds__termination__Msg_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 320 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__Msg_24, 0) = ((MR_Box) (transform_hlds__termination__Context_17));
#line 320 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__Msg_24, 1) = ((MR_Box) (transform_hlds__termination__V_54_54));
#line 320 "termination.m"
            }
#line 321 "termination.m"
            {
#line 321 "termination.m"
              transform_hlds__termination__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 321 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_59_59, 0) = ((MR_Box) (transform_hlds__termination__Msg_24));
#line 321 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 321 "termination.m"
            }
#line 321 "termination.m"
            {
#line 321 "termination.m"
              transform_hlds__termination__Spec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 321 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 321 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 321 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_25, 2) = ((MR_Box) (transform_hlds__termination__V_59_59));
#line 321 "termination.m"
            }
#line 322 "termination.m"
            {
#line 322 "termination.m"
              MR_Word base;
#line 322 "termination.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 322 "termination.m"
              *transform_hlds__termination__STATE_VARIABLE_Specs_29 = base;
#line 322 "termination.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__termination__Spec_25));
#line 322 "termination.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_Specs_0_28));
#line 322 "termination.m"
            }
#line 307 "termination.m"
          }
#line 284 "termination.m"
      }
#line 278 "termination.m"
  }
#line 274 "termination.m"
}

#line 154 "termination.m"
static void MR_CALL 
transform_hlds__termination__check_foreign_code_attributes_2_5_p_0(
#line 154 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 154 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2,
#line 154 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_3,
#line 154 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__4_4,
#line 154 "termination.m"
  MR_Word * transform_hlds__termination__HeadVar__5_5)
#line 154 "termination.m"
{
#line 158 "termination.m"
  {
#line 158 "termination.m"
    MR_bool transform_hlds__termination__succeeded;

#line 158 "termination.m"
    if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 158 "termination.m"
      {
#line 159 "termination.m"
        {
#line 159 "termination.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.termination", (MR_String) "predicate \140transform_hlds.termination.check_foreign_code_attributes_2\'/5", (MR_String) "empty SCC");
#line 159 "termination.m"
          return;
        }
#line 158 "termination.m"
      }
#line 158 "termination.m"
    else
#line 158 "termination.m"
      {
#line 158 "termination.m"
        MR_Word transform_hlds__termination__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
#line 158 "termination.m"
        MR_Word transform_hlds__termination__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));

#line 158 "termination.m"
        if ((transform_hlds__termination__V_163_163 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 160 "termination.m"
          {
#line 160 "termination.m"
            MR_Word transform_hlds__termination__PredInfo_19;
#line 160 "termination.m"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ProcInfo_45_45;
#line 240 "termination.m"
            MR_Word transform_hlds__termination__Attributes_21;
#line 164 "termination.m"
            MR_Word transform_hlds__termination__Goal_20;
#line 164 "termination.m"
            MR_Word transform_hlds__termination__V_46_46;
#line 165 "termination.m"
            MR_Word transform_hlds__termination___GoalInfo_28;
#line 166 "termination.m"
            MR_Word transform_hlds__termination__V_22_22;
#line 166 "termination.m"
            MR_Integer transform_hlds__termination__V_23_23;
#line 166 "termination.m"
            MR_Word transform_hlds__termination__V_24_24;
#line 166 "termination.m"
            MR_Word transform_hlds__termination__V_25_25;
#line 166 "termination.m"
            MR_Word transform_hlds__termination__V_26_26;
#line 166 "termination.m"
            MR_Word transform_hlds__termination__V_27_27;

#line 162 "termination.m"
            {
#line 162 "termination.m"
              hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2, transform_hlds__termination__V_164_164, &transform_hlds__termination__PredInfo_19, &transform_hlds__termination__STATE_VARIABLE_ProcInfo_45_45);
            }
#line 164 "termination.m"
            {
#line 164 "termination.m"
              hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__termination__STATE_VARIABLE_ProcInfo_45_45, &transform_hlds__termination__Goal_20);
            }
#line 165 "termination.m"
            transform_hlds__termination__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__Goal_20, (MR_Integer) 0)));
#line 165 "termination.m"
            transform_hlds__termination___GoalInfo_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__Goal_20, (MR_Integer) 1)));
#line 166 "termination.m"
            transform_hlds__termination__succeeded = ((((MR_tag((MR_Word) transform_hlds__termination__V_46_46)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__V_46_46, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 166 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 166 "termination.m"
              {
#line 166 "termination.m"
                transform_hlds__termination__Attributes_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__V_46_46, (MR_Integer) 1)));
#line 166 "termination.m"
                transform_hlds__termination__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__V_46_46, (MR_Integer) 2)));
#line 166 "termination.m"
                transform_hlds__termination__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__termination__V_46_46, (MR_Integer) 3)));
#line 166 "termination.m"
                transform_hlds__termination__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__V_46_46, (MR_Integer) 4)));
#line 166 "termination.m"
                transform_hlds__termination__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__V_46_46, (MR_Integer) 5)));
#line 166 "termination.m"
                transform_hlds__termination__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__V_46_46, (MR_Integer) 6)));
#line 166 "termination.m"
                transform_hlds__termination__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__V_46_46, (MR_Integer) 7)));
#line 169 "termination.m"
                {
#line 169 "termination.m"
                  MR_Word transform_hlds__termination__MaybeTermination_29;
#line 169 "termination.m"
                  MR_Word transform_hlds__termination__Context_30;
#line 169 "termination.m"
                  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcInfo_117_117;

#line 169 "termination.m"
                  {
#line 169 "termination.m"
                    hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__termination__STATE_VARIABLE_ProcInfo_45_45, &transform_hlds__termination__MaybeTermination_29);
                  }
#line 170 "termination.m"
                  {
#line 170 "termination.m"
                    hlds__hlds_pred__proc_info_get_context_2_p_0(transform_hlds__termination__STATE_VARIABLE_ProcInfo_45_45, &transform_hlds__termination__Context_30);
                  }
#line 182 "termination.m"
                  if ((transform_hlds__termination__MaybeTermination_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 172 "termination.m"
                    {
#line 173 "termination.m"
                      {
#line 173 "termination.m"
                        transform_hlds__termination__succeeded = transform_hlds__term_util__attributes_imply_termination_1_p_0(transform_hlds__termination__Attributes_21);
                      }
#line 176 "termination.m"
                      if (transform_hlds__termination__succeeded)
#line 174 "termination.m"
                        {
#line 174 "termination.m"
                          mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 175 "termination.m"
                          {
#line 175 "termination.m"
                            hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_2[3]), transform_hlds__termination__STATE_VARIABLE_ProcInfo_45_45, &transform_hlds__termination__STATE_VARIABLE_ProcInfo_117_117);
                          }
#line 174 "termination.m"
                        }
#line 176 "termination.m"
                      else
#line 178 "termination.m"
                        {
#line 178 "termination.m"
                          MR_Word transform_hlds__termination__TermErr_32;
#line 178 "termination.m"
                          MR_Word transform_hlds__termination__V_118_118;
#line 178 "termination.m"
                          MR_Word transform_hlds__termination__V_119_119;
#line 178 "termination.m"
                          MR_Word transform_hlds__termination__V_120_120;
#line 178 "termination.m"
                          MR_Word transform_hlds__termination__TermStatus_124;

#line 178 "termination.m"
                          {
#line 178 "termination.m"
                            transform_hlds__termination__V_118_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 178 "termination.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__termination__V_118_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 178 "termination.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__termination__V_118_118, 1) = ((MR_Box) (transform_hlds__termination__V_164_164));
#line 178 "termination.m"
                          }
#line 177 "termination.m"
                          {
#line 177 "termination.m"
                            transform_hlds__termination__TermErr_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 177 "termination.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__termination__TermErr_32, 0) = ((MR_Box) (transform_hlds__termination__V_118_118));
#line 177 "termination.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__termination__TermErr_32, 1) = ((MR_Box) (transform_hlds__termination__Context_30));
#line 177 "termination.m"
                          }
#line 179 "termination.m"
                          {
#line 179 "termination.m"
                            transform_hlds__termination__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 179 "termination.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__termination__V_120_120, 0) = ((MR_Box) (transform_hlds__termination__TermErr_32));
#line 179 "termination.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__termination__V_120_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 179 "termination.m"
                          }
#line 179 "termination.m"
                          {
#line 179 "termination.m"
                            transform_hlds__termination__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 179 "termination.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__termination__V_119_119, 0) = ((MR_Box) (transform_hlds__termination__V_120_120));
#line 179 "termination.m"
                          }
#line 179 "termination.m"
                          {
#line 179 "termination.m"
                            transform_hlds__termination__TermStatus_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 179 "termination.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__termination__TermStatus_124, 0) = ((MR_Box) (transform_hlds__termination__V_119_119));
#line 179 "termination.m"
                          }
#line 180 "termination.m"
                          {
#line 180 "termination.m"
                            hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(transform_hlds__termination__TermStatus_124, transform_hlds__termination__STATE_VARIABLE_ProcInfo_45_45, &transform_hlds__termination__STATE_VARIABLE_ProcInfo_117_117);
                          }
#line 178 "termination.m"
                        }
#line 172 "termination.m"
                      *transform_hlds__termination__HeadVar__5_5 = transform_hlds__termination__HeadVar__4_4;
#line 172 "termination.m"
                    }
#line 182 "termination.m"
                  else
#line 182 "termination.m"
                    {
#line 182 "termination.m"
                      MR_Word transform_hlds__termination__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__MaybeTermination_29, (MR_Integer) 0)));

#line 182 "termination.m"
                      if (((MR_tag((MR_Word) transform_hlds__termination__V_165_165)) == (MR_mktag((MR_Integer) 1))))
#line 213 "termination.m"
                        {
#line 213 "termination.m"
                          MR_Word transform_hlds__termination__TermErrs0_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__V_165_165, (MR_Integer) 0)));
#line 214 "termination.m"
                          MR_Word transform_hlds__termination__V_48_48;

#line 214 "termination.m"
                          {
#line 214 "termination.m"
                            transform_hlds__termination__V_48_48 = parse_tree__prog_data__get_terminates_1_f_0(transform_hlds__termination__Attributes_21);
                          }
#line 214 "termination.m"
                          transform_hlds__termination__succeeded = (transform_hlds__termination__V_48_48 == (MR_Integer) 0);
#line 234 "termination.m"
                          if (transform_hlds__termination__succeeded)
#line 216 "termination.m"
                            {
#line 216 "termination.m"
                              MR_Word transform_hlds__termination__TermErrs_39;
#line 216 "termination.m"
                              MR_Word transform_hlds__termination__V_50_50;
#line 216 "termination.m"
                              MR_Word transform_hlds__termination__V_53_53;
#line 216 "termination.m"
                              MR_Word transform_hlds__termination__V_72_72;
#line 216 "termination.m"
                              MR_Word transform_hlds__termination__V_73_73;
#line 216 "termination.m"
                              MR_Word transform_hlds__termination__V_77_77;
#line 216 "termination.m"
                              MR_Word transform_hlds__termination__TermStatus_131;
#line 216 "termination.m"
                              MR_Word transform_hlds__termination__TermErr_132;
#line 216 "termination.m"
                              MR_Word transform_hlds__termination__ProcNamePieces_133;
#line 216 "termination.m"
                              MR_Word transform_hlds__termination__Pieces_134;
#line 216 "termination.m"
                              MR_Word transform_hlds__termination__Msg_135;
#line 216 "termination.m"
                              MR_Word transform_hlds__termination__Spec_136;

#line 215 "termination.m"
                              {
#line 215 "termination.m"
                                transform_hlds__termination__TermErr_132 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 215 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__TermErr_132, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 215 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__TermErr_132, 1) = ((MR_Box) (transform_hlds__termination__Context_30));
#line 215 "termination.m"
                              }
#line 217 "termination.m"
                              {
#line 217 "termination.m"
                                transform_hlds__termination__TermErrs_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 217 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__TermErrs_39, 0) = ((MR_Box) (transform_hlds__termination__TermErr_132));
#line 217 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__TermErrs_39, 1) = ((MR_Box) (transform_hlds__termination__TermErrs0_38));
#line 217 "termination.m"
                              }
#line 218 "termination.m"
                              {
#line 218 "termination.m"
                                transform_hlds__termination__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 218 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_50_50, 0) = ((MR_Box) (transform_hlds__termination__TermErrs_39));
#line 218 "termination.m"
                              }
#line 218 "termination.m"
                              {
#line 218 "termination.m"
                                transform_hlds__termination__TermStatus_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 218 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__TermStatus_131, 0) = ((MR_Box) (transform_hlds__termination__V_50_50));
#line 218 "termination.m"
                              }
#line 220 "termination.m"
                              {
#line 220 "termination.m"
                                hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(transform_hlds__termination__TermStatus_131, transform_hlds__termination__STATE_VARIABLE_ProcInfo_45_45, &transform_hlds__termination__STATE_VARIABLE_ProcInfo_117_117);
                              }
#line 222 "termination.m"
                              {
#line 222 "termination.m"
                                transform_hlds__termination__ProcNamePieces_133 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2, (MR_Integer) 0, transform_hlds__termination__V_164_164);
                              }
#line 225 "termination.m"
                              {
#line 225 "termination.m"
                                transform_hlds__termination__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 225 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_53_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[31])));
#line 225 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_53_53, 1) = ((MR_Box) (transform_hlds__termination__ProcNamePieces_133));
#line 225 "termination.m"
                              }
#line 225 "termination.m"
                              {
#line 225 "termination.m"
                                transform_hlds__termination__Pieces_134 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__termination__V_53_53, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[13]));
                              }
#line 230 "termination.m"
                              {
#line 230 "termination.m"
                                transform_hlds__termination__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 230 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__V_73_73, 0) = ((MR_Box) (transform_hlds__termination__Pieces_134));
#line 230 "termination.m"
                              }
#line 230 "termination.m"
                              {
#line 230 "termination.m"
                                transform_hlds__termination__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 230 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_72_72, 0) = ((MR_Box) (transform_hlds__termination__V_73_73));
#line 230 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 230 "termination.m"
                              }
#line 230 "termination.m"
                              {
#line 230 "termination.m"
                                transform_hlds__termination__Msg_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 230 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__Msg_135, 0) = ((MR_Box) (transform_hlds__termination__Context_30));
#line 230 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__Msg_135, 1) = ((MR_Box) (transform_hlds__termination__V_72_72));
#line 230 "termination.m"
                              }
#line 232 "termination.m"
                              {
#line 232 "termination.m"
                                transform_hlds__termination__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 232 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_77_77, 0) = ((MR_Box) (transform_hlds__termination__Msg_135));
#line 232 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 232 "termination.m"
                              }
#line 231 "termination.m"
                              {
#line 231 "termination.m"
                                transform_hlds__termination__Spec_136 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 231 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_136, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 231 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_136, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 231 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_136, 2) = ((MR_Box) (transform_hlds__termination__V_77_77));
#line 231 "termination.m"
                              }
#line 233 "termination.m"
                              {
#line 233 "termination.m"
                                MR_Word base;
#line 233 "termination.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 233 "termination.m"
                                *transform_hlds__termination__HeadVar__5_5 = base;
#line 233 "termination.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__termination__Spec_136));
#line 233 "termination.m"
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__termination__HeadVar__4_4));
#line 233 "termination.m"
                              }
#line 216 "termination.m"
                            }
#line 234 "termination.m"
                          else
#line 235 "termination.m"
                            {
#line 235 "termination.m"
                              transform_hlds__termination__STATE_VARIABLE_ProcInfo_117_117 = transform_hlds__termination__STATE_VARIABLE_ProcInfo_45_45;
#line 235 "termination.m"
                              *transform_hlds__termination__HeadVar__5_5 = transform_hlds__termination__HeadVar__4_4;
#line 235 "termination.m"
                            }
#line 213 "termination.m"
                        }
#line 182 "termination.m"
                      else
#line 206 "termination.m"
                        {
#line 187 "termination.m"
                          MR_Word transform_hlds__termination__V_81_81;

#line 187 "termination.m"
                          {
#line 187 "termination.m"
                            transform_hlds__termination__V_81_81 = parse_tree__prog_data__get_terminates_1_f_0(transform_hlds__termination__Attributes_21);
                          }
#line 187 "termination.m"
                          transform_hlds__termination__succeeded = (transform_hlds__termination__V_81_81 == (MR_Integer) 1);
#line 206 "termination.m"
                          if (transform_hlds__termination__succeeded)
#line 189 "termination.m"
                            {
#line 189 "termination.m"
                              MR_Word transform_hlds__termination__ProcNamePieces_34;
#line 189 "termination.m"
                              MR_Word transform_hlds__termination__Pieces_35;
#line 189 "termination.m"
                              MR_Word transform_hlds__termination__Msg_36;
#line 189 "termination.m"
                              MR_Word transform_hlds__termination__Spec_37;
#line 189 "termination.m"
                              MR_Word transform_hlds__termination__V_83_83;
#line 189 "termination.m"
                              MR_Word transform_hlds__termination__V_84_84;
#line 189 "termination.m"
                              MR_Word transform_hlds__termination__V_88_88;
#line 189 "termination.m"
                              MR_Word transform_hlds__termination__V_107_107;
#line 189 "termination.m"
                              MR_Word transform_hlds__termination__V_108_108;
#line 189 "termination.m"
                              MR_Word transform_hlds__termination__V_112_112;
#line 189 "termination.m"
                              MR_Word transform_hlds__termination__TermStatus_125;
#line 189 "termination.m"
                              MR_Word transform_hlds__termination__TermErr_126;

#line 188 "termination.m"
                              {
#line 188 "termination.m"
                                transform_hlds__termination__TermErr_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 188 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__TermErr_126, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 188 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__TermErr_126, 1) = ((MR_Box) (transform_hlds__termination__Context_30));
#line 188 "termination.m"
                              }
#line 190 "termination.m"
                              {
#line 190 "termination.m"
                                transform_hlds__termination__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 190 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_84_84, 0) = ((MR_Box) (transform_hlds__termination__TermErr_126));
#line 190 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 190 "termination.m"
                              }
#line 190 "termination.m"
                              {
#line 190 "termination.m"
                                transform_hlds__termination__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 190 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_83_83, 0) = ((MR_Box) (transform_hlds__termination__V_84_84));
#line 190 "termination.m"
                              }
#line 190 "termination.m"
                              {
#line 190 "termination.m"
                                transform_hlds__termination__TermStatus_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 190 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__TermStatus_125, 0) = ((MR_Box) (transform_hlds__termination__V_83_83));
#line 190 "termination.m"
                              }
#line 192 "termination.m"
                              {
#line 192 "termination.m"
                                hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(transform_hlds__termination__TermStatus_125, transform_hlds__termination__STATE_VARIABLE_ProcInfo_45_45, &transform_hlds__termination__STATE_VARIABLE_ProcInfo_117_117);
                              }
#line 194 "termination.m"
                              {
#line 194 "termination.m"
                                transform_hlds__termination__ProcNamePieces_34 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2, (MR_Integer) 0, transform_hlds__termination__V_164_164);
                              }
#line 197 "termination.m"
                              {
#line 197 "termination.m"
                                transform_hlds__termination__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 197 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_88_88, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[31])));
#line 197 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_88_88, 1) = ((MR_Box) (transform_hlds__termination__ProcNamePieces_34));
#line 197 "termination.m"
                              }
#line 197 "termination.m"
                              {
#line 197 "termination.m"
                                transform_hlds__termination__Pieces_35 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__termination__V_88_88, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[18]));
                              }
#line 202 "termination.m"
                              {
#line 202 "termination.m"
                                transform_hlds__termination__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 202 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__V_108_108, 0) = ((MR_Box) (transform_hlds__termination__Pieces_35));
#line 202 "termination.m"
                              }
#line 202 "termination.m"
                              {
#line 202 "termination.m"
                                transform_hlds__termination__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 202 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_107_107, 0) = ((MR_Box) (transform_hlds__termination__V_108_108));
#line 202 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_107_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 202 "termination.m"
                              }
#line 202 "termination.m"
                              {
#line 202 "termination.m"
                                transform_hlds__termination__Msg_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 202 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__Msg_36, 0) = ((MR_Box) (transform_hlds__termination__Context_30));
#line 202 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__Msg_36, 1) = ((MR_Box) (transform_hlds__termination__V_107_107));
#line 202 "termination.m"
                              }
#line 204 "termination.m"
                              {
#line 204 "termination.m"
                                transform_hlds__termination__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 204 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_112_112, 0) = ((MR_Box) (transform_hlds__termination__Msg_36));
#line 204 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_112_112, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 204 "termination.m"
                              }
#line 203 "termination.m"
                              {
#line 203 "termination.m"
                                transform_hlds__termination__Spec_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 203 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 203 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 203 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_37, 2) = ((MR_Box) (transform_hlds__termination__V_112_112));
#line 203 "termination.m"
                              }
#line 205 "termination.m"
                              {
#line 205 "termination.m"
                                MR_Word base;
#line 205 "termination.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 205 "termination.m"
                                *transform_hlds__termination__HeadVar__5_5 = base;
#line 205 "termination.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__termination__Spec_37));
#line 205 "termination.m"
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__termination__HeadVar__4_4));
#line 205 "termination.m"
                              }
#line 189 "termination.m"
                            }
#line 206 "termination.m"
                          else
#line 207 "termination.m"
                            {
#line 207 "termination.m"
                              transform_hlds__termination__STATE_VARIABLE_ProcInfo_117_117 = transform_hlds__termination__STATE_VARIABLE_ProcInfo_45_45;
#line 207 "termination.m"
                              *transform_hlds__termination__HeadVar__5_5 = transform_hlds__termination__HeadVar__4_4;
#line 207 "termination.m"
                            }
#line 206 "termination.m"
                        }
#line 182 "termination.m"
                    }
#line 238 "termination.m"
                  {
#line 238 "termination.m"
                    hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(transform_hlds__termination__V_164_164, transform_hlds__termination__PredInfo_19, transform_hlds__termination__STATE_VARIABLE_ProcInfo_117_117, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_3);
#line 238 "termination.m"
                    return;
                  }
#line 169 "termination.m"
                }
#line 166 "termination.m"
              }
#line 166 "termination.m"
            else
#line 241 "termination.m"
              {
#line 241 "termination.m"
                *transform_hlds__termination__HeadVar__5_5 = transform_hlds__termination__HeadVar__4_4;
#line 241 "termination.m"
                *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_3 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2;
#line 241 "termination.m"
              }
#line 160 "termination.m"
          }
#line 158 "termination.m"
        else
#line 244 "termination.m"
          {
#line 244 "termination.m"
            *transform_hlds__termination__HeadVar__5_5 = transform_hlds__termination__HeadVar__4_4;
#line 244 "termination.m"
            *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_3 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2;
#line 244 "termination.m"
          }
#line 158 "termination.m"
      }
#line 158 "termination.m"
  }
#line 154 "termination.m"
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
#line 915 "termination.m"
  {
#line 915 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 915 "termination.m"
    MR_Word transform_hlds__termination__PredInfo_8;
#line 915 "termination.m"
    MR_Word transform_hlds__termination__ImportStatus_9;
#line 915 "termination.m"
    MR_Word transform_hlds__termination__TypeSpecInfo_10;
#line 915 "termination.m"
    MR_Word transform_hlds__termination__TypeSpecForcePreds_12;
#line 919 "termination.m"
    MR_Word transform_hlds__termination__V_11_11;
#line 919 "termination.m"
    MR_Word transform_hlds__termination__V_13_13;
#line 919 "termination.m"
    MR_Word transform_hlds__termination__V_14_14;
#line 932 "termination.m"
    MR_Word transform_hlds__termination__TypeCtorInfo_25_25;

#line 916 "termination.m"
    {
#line 916 "termination.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__termination__ModuleInfo_5, transform_hlds__termination__PredId_6, &transform_hlds__termination__PredInfo_8);
    }
#line 917 "termination.m"
    {
#line 917 "termination.m"
      hlds__hlds_pred__pred_info_get_import_status_2_p_0(transform_hlds__termination__PredInfo_8, &transform_hlds__termination__ImportStatus_9);
    }
#line 918 "termination.m"
    {
#line 918 "termination.m"
      hlds__hlds_module__module_info_get_type_spec_info_2_p_0(transform_hlds__termination__ModuleInfo_5, &transform_hlds__termination__TypeSpecInfo_10);
    }
#line 919 "termination.m"
    transform_hlds__termination__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__TypeSpecInfo_10, (MR_Integer) 0)));
#line 919 "termination.m"
    transform_hlds__termination__TypeSpecForcePreds_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__TypeSpecInfo_10, (MR_Integer) 1)));
#line 919 "termination.m"
    transform_hlds__termination__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__TypeSpecInfo_10, (MR_Integer) 2)));
#line 919 "termination.m"
    transform_hlds__termination__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__TypeSpecInfo_10, (MR_Integer) 3)));
#line 924 "termination.m"
    if ((transform_hlds__termination__ImportStatus_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 923 "termination.m"
      transform_hlds__termination__succeeded = MR_TRUE;
#line 924 "termination.m"
    else
#line 924 "termination.m"
      if ((transform_hlds__termination__ImportStatus_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 925 "termination.m"
        transform_hlds__termination__succeeded = MR_TRUE;
#line 924 "termination.m"
      else
#line 924 "termination.m"
        transform_hlds__termination__succeeded = MR_FALSE;
#line 926 "termination.m"
    if (transform_hlds__termination__succeeded)
#line 926 "termination.m"
      {
#line 927 "termination.m"
        {
#line 927 "termination.m"
          transform_hlds__termination__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(transform_hlds__termination__PredInfo_8);
        }
#line 927 "termination.m"
        transform_hlds__termination__succeeded = !(transform_hlds__termination__succeeded);
#line 926 "termination.m"
        if (transform_hlds__termination__succeeded)
#line 926 "termination.m"
          {
#line 5267 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_25_25 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 932 "termination.m"
            {
#line 932 "termination.m"
              transform_hlds__termination__succeeded = mercury__set__member_2_p_0(transform_hlds__termination__TypeCtorInfo_25_25, ((MR_Box) (transform_hlds__termination__PredId_6)), transform_hlds__termination__TypeSpecForcePreds_12);
            }
#line 932 "termination.m"
            transform_hlds__termination__succeeded = !(transform_hlds__termination__succeeded);
#line 926 "termination.m"
          }
#line 926 "termination.m"
      }
#line 943 "termination.m"
    if (transform_hlds__termination__succeeded)
#line 934 "termination.m"
      {
#line 934 "termination.m"
        MR_String transform_hlds__termination__PredName_15;
#line 934 "termination.m"
        MR_Word transform_hlds__termination__ProcIds_16;
#line 934 "termination.m"
        MR_Word transform_hlds__termination__PredOrFunc_17;
#line 934 "termination.m"
        MR_Word transform_hlds__termination__ModuleName_18;
#line 934 "termination.m"
        MR_Word transform_hlds__termination__ProcTable_19;
#line 934 "termination.m"
        MR_Word transform_hlds__termination__Context_20;
#line 934 "termination.m"
        MR_Word transform_hlds__termination__SymName_21;

#line 934 "termination.m"
        {
#line 934 "termination.m"
          transform_hlds__termination__PredName_15 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__termination__PredInfo_8);
        }
#line 935 "termination.m"
        {
#line 935 "termination.m"
          transform_hlds__termination__ProcIds_16 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__termination__PredInfo_8);
        }
#line 936 "termination.m"
        {
#line 936 "termination.m"
          transform_hlds__termination__PredOrFunc_17 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__termination__PredInfo_8);
        }
#line 937 "termination.m"
        {
#line 937 "termination.m"
          transform_hlds__termination__ModuleName_18 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__termination__PredInfo_8);
        }
#line 938 "termination.m"
        {
#line 938 "termination.m"
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__termination__PredInfo_8, &transform_hlds__termination__ProcTable_19);
        }
#line 939 "termination.m"
        {
#line 939 "termination.m"
          hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__termination__PredInfo_8, &transform_hlds__termination__Context_20);
        }
#line 940 "termination.m"
        {
#line 940 "termination.m"
          transform_hlds__termination__SymName_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 940 "termination.m"
          MR_hl_field(MR_mktag(1), transform_hlds__termination__SymName_21, 0) = ((MR_Box) (transform_hlds__termination__ModuleName_18));
#line 940 "termination.m"
          MR_hl_field(MR_mktag(1), transform_hlds__termination__SymName_21, 1) = ((MR_Box) (transform_hlds__termination__PredName_15));
#line 940 "termination.m"
        }
#line 941 "termination.m"
        {
#line 941 "termination.m"
          transform_hlds__termination__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_116_101_114_109_105_110_97_116_105_111_110_95_105_110_102_111_95_95_91_49_93_95_48_8_p_0(transform_hlds__termination__ProcIds_16, transform_hlds__termination__ProcTable_19, transform_hlds__termination__PredOrFunc_17, transform_hlds__termination__SymName_21, transform_hlds__termination__Context_20);
#line 941 "termination.m"
          return;
        }
#line 934 "termination.m"
      }
#line 943 "termination.m"
    else
#line 943 "termination.m"
      {
#line 943 "termination.m"
      }
#line 915 "termination.m"
  }
#line 53 "termination.m"
}

#line 120 "termination.m"
static void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_5_p_0_3(
#line 120 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 120 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1,
#line 120 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_2,
#line 120 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_3,
#line 120 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_4,
#line 120 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_5)
#line 120 "termination.m"
{
#line 120 "termination.m"
  {
#line 120 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;
#line 120 "termination.m"
    MR_Word transform_hlds__termination__conv8_STATE_VARIABLE_ModuleInfo_48;

#line 120 "termination.m"
    {
#line 120 "termination.m"
      transform_hlds__termination__analyse_termination_in_scc_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1), ((MR_Word) transform_hlds__termination__wrapper_arg_2), &transform_hlds__termination__conv8_STATE_VARIABLE_ModuleInfo_48);
    }
#line 120 "termination.m"
    *transform_hlds__termination__wrapper_arg_3 = ((MR_Box) (transform_hlds__termination__conv8_STATE_VARIABLE_ModuleInfo_48));
#line 120 "termination.m"
  }
#line 120 "termination.m"
}

#line 272 "termination.m"
static void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_5_p_0_2(
#line 272 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 272 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1,
#line 272 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_2,
#line 272 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_3,
#line 272 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_4,
#line 272 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_5)
#line 272 "termination.m"
{
#line 272 "termination.m"
  {
#line 272 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;
#line 272 "termination.m"
    MR_Word transform_hlds__termination__conv5_STATE_VARIABLE_ModuleInfo_27;
#line 272 "termination.m"
    MR_Word transform_hlds__termination__conv4_STATE_VARIABLE_Specs_29;

#line 272 "termination.m"
    {
#line 272 "termination.m"
      transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0(((MR_Word) transform_hlds__termination__wrapper_arg_1), ((MR_Word) transform_hlds__termination__wrapper_arg_2), &transform_hlds__termination__conv5_STATE_VARIABLE_ModuleInfo_27, ((MR_Word) transform_hlds__termination__wrapper_arg_4), &transform_hlds__termination__conv4_STATE_VARIABLE_Specs_29);
    }
#line 272 "termination.m"
    *transform_hlds__termination__wrapper_arg_3 = ((MR_Box) (transform_hlds__termination__conv5_STATE_VARIABLE_ModuleInfo_27));
#line 272 "termination.m"
    *transform_hlds__termination__wrapper_arg_5 = ((MR_Box) (transform_hlds__termination__conv4_STATE_VARIABLE_Specs_29));
#line 272 "termination.m"
  }
#line 272 "termination.m"
}

#line 152 "termination.m"
static void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_5_p_0_1(
#line 152 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 152 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1,
#line 152 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_2,
#line 152 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_3,
#line 152 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_4,
#line 152 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_5)
#line 152 "termination.m"
{
#line 152 "termination.m"
  {
#line 152 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;
#line 152 "termination.m"
    MR_Word transform_hlds__termination__conv1_STATE_VARIABLE_ModuleInfo_3;
#line 152 "termination.m"
    MR_Word transform_hlds__termination__conv0_HeadVar__5_5;

#line 152 "termination.m"
    {
#line 152 "termination.m"
      transform_hlds__termination__check_foreign_code_attributes_2_5_p_0(((MR_Word) transform_hlds__termination__wrapper_arg_1), ((MR_Word) transform_hlds__termination__wrapper_arg_2), &transform_hlds__termination__conv1_STATE_VARIABLE_ModuleInfo_3, ((MR_Word) transform_hlds__termination__wrapper_arg_4), &transform_hlds__termination__conv0_HeadVar__5_5);
    }
#line 152 "termination.m"
    *transform_hlds__termination__wrapper_arg_3 = ((MR_Box) (transform_hlds__termination__conv1_STATE_VARIABLE_ModuleInfo_3));
#line 152 "termination.m"
    *transform_hlds__termination__wrapper_arg_5 = ((MR_Box) (transform_hlds__termination__conv0_HeadVar__5_5));
#line 152 "termination.m"
  }
#line 152 "termination.m"
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
#line 94 "termination.m"
  {
#line 94 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 94 "termination.m"
    MR_Word transform_hlds__termination__Globals_9;
#line 94 "termination.m"
    MR_Word transform_hlds__termination__TermNorm_10;
#line 94 "termination.m"
    MR_Word transform_hlds__termination__FunctorInfo_11;
#line 94 "termination.m"
    MR_Integer transform_hlds__termination__MaxErrors_12;
#line 94 "termination.m"
    MR_Integer transform_hlds__termination__MaxPaths_13;
#line 94 "termination.m"
    MR_Word transform_hlds__termination__PassInfo_14;
#line 94 "termination.m"
    MR_Word transform_hlds__termination__PredIds_15;
#line 94 "termination.m"
    MR_Word transform_hlds__termination__DepInfo_16;
#line 94 "termination.m"
    MR_Word transform_hlds__termination__SCCs_17;
#line 94 "termination.m"
    MR_Word transform_hlds__termination__Specs1_18;
#line 94 "termination.m"
    MR_Word transform_hlds__termination__MakeOptInt_19;
#line 94 "termination.m"
    MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26;
#line 94 "termination.m"
    MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_28_28;
#line 94 "termination.m"
    MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_29_29;
#line 94 "termination.m"
    MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_31_31;
#line 94 "termination.m"
    MR_Word transform_hlds__termination__V_32_32;
#line 152 "termination.m"
    MR_Box transform_hlds__termination__conv3_STATE_VARIABLE_ModuleInfo_29_29;
#line 152 "termination.m"
    MR_Box transform_hlds__termination__conv2_Specs1_18;
#line 272 "termination.m"
    MR_Box transform_hlds__termination__conv7_STATE_VARIABLE_ModuleInfo_31_31;
#line 272 "termination.m"
    MR_Box transform_hlds__termination__conv6_Specs_7;
#line 120 "termination.m"
    MR_Box transform_hlds__termination__conv10_STATE_VARIABLE_ModuleInfo_21;
#line 120 "termination.m"
    MR_Box transform_hlds__termination__conv9_STATE_VARIABLE_IO_34_34;

#line 95 "termination.m"
    {
#line 95 "termination.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_20, &transform_hlds__termination__Globals_9);
    }
#line 96 "termination.m"
    {
#line 96 "termination.m"
      libs__globals__get_termination_norm_2_p_0(transform_hlds__termination__Globals_9, &transform_hlds__termination__TermNorm_10);
    }
#line 97 "termination.m"
    {
#line 97 "termination.m"
      transform_hlds__termination__FunctorInfo_11 = transform_hlds__term_norm__set_functor_info_2_f_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_20, transform_hlds__termination__TermNorm_10);
    }
#line 98 "termination.m"
    {
#line 98 "termination.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__termination__Globals_9, (MR_Integer) 419, &transform_hlds__termination__MaxErrors_12);
    }
#line 99 "termination.m"
    {
#line 99 "termination.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__termination__Globals_9, (MR_Integer) 420, &transform_hlds__termination__MaxPaths_13);
    }
#line 100 "termination.m"
    {
#line 100 "termination.m"
      transform_hlds__termination__PassInfo_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 100 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__PassInfo_14, 0) = ((MR_Box) (transform_hlds__termination__FunctorInfo_11));
#line 100 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__PassInfo_14, 1) = ((MR_Box) (transform_hlds__termination__MaxErrors_12));
#line 100 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__PassInfo_14, 2) = ((MR_Box) (transform_hlds__termination__MaxPaths_13));
#line 100 "termination.m"
    }
#line 104 "termination.m"
    {
#line 104 "termination.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_20, &transform_hlds__termination__PredIds_15);
    }
#line 105 "termination.m"
    {
#line 105 "termination.m"
      transform_hlds__termination__check_preds_5_p_0(transform_hlds__termination__PredIds_15, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_20, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26);
    }
#line 108 "termination.m"
    {
#line 108 "termination.m"
      transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_28_28);
    }
#line 109 "termination.m"
    {
#line 109 "termination.m"
      hlds__hlds_module__module_info_dependency_info_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_28_28, &transform_hlds__termination__DepInfo_16);
    }
#line 110 "termination.m"
    {
#line 110 "termination.m"
      hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__termination__DepInfo_16, &transform_hlds__termination__SCCs_17);
    }
#line 152 "termination.m"
    {
#line 152 "termination.m"
      mercury__list__foldl2_6_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__termination_scalar_common_1[1], (MR_Word) &transform_hlds__termination_scalar_common_3[1], transform_hlds__termination__SCCs_17, ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_28_28)), &transform_hlds__termination__conv3_STATE_VARIABLE_ModuleInfo_29_29, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__termination__conv2_Specs1_18);
    }
#line 152 "termination.m"
    transform_hlds__termination__STATE_VARIABLE_ModuleInfo_29_29 = ((MR_Word) transform_hlds__termination__conv3_STATE_VARIABLE_ModuleInfo_29_29);
#line 152 "termination.m"
    transform_hlds__termination__Specs1_18 = ((MR_Word) transform_hlds__termination__conv2_Specs1_18);
#line 272 "termination.m"
    {
#line 272 "termination.m"
      mercury__list__foldl2_6_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__termination_scalar_common_1[1], (MR_Word) &transform_hlds__termination_scalar_common_3[2], transform_hlds__termination__SCCs_17, ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_29_29)), &transform_hlds__termination__conv7_STATE_VARIABLE_ModuleInfo_31_31, ((MR_Box) (transform_hlds__termination__Specs1_18)), &transform_hlds__termination__conv6_Specs_7);
    }
#line 272 "termination.m"
    transform_hlds__termination__STATE_VARIABLE_ModuleInfo_31_31 = ((MR_Word) transform_hlds__termination__conv7_STATE_VARIABLE_ModuleInfo_31_31);
#line 272 "termination.m"
    *transform_hlds__termination__Specs_7 = ((MR_Word) transform_hlds__termination__conv6_Specs_7);
#line 120 "termination.m"
    {
#line 120 "termination.m"
      transform_hlds__termination__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 120 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_32_32, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_5[0]));
#line 120 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_32_32, 1) = ((MR_Box) (transform_hlds__termination__analyse_termination_in_module_5_p_0_3));
#line 120 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 120 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_32_32, 3) = ((MR_Box) (transform_hlds__termination__PassInfo_14));
#line 120 "termination.m"
    }
#line 120 "termination.m"
    {
#line 120 "termination.m"
      mercury__list__foldl2_6_p_2((MR_Word) &transform_hlds__termination_scalar_common_1[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__termination__V_32_32, transform_hlds__termination__SCCs_17, ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_31_31)), &transform_hlds__termination__conv10_STATE_VARIABLE_ModuleInfo_21, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__termination__conv9_STATE_VARIABLE_IO_34_34);
    }
#line 120 "termination.m"
    *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_21 = ((MR_Word) transform_hlds__termination__conv10_STATE_VARIABLE_ModuleInfo_21);
#line 123 "termination.m"
    {
#line 123 "termination.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__termination__Globals_9, (MR_Integer) 86, &transform_hlds__termination__MakeOptInt_19);
    }
#line 128 "termination.m"
    if ((transform_hlds__termination__MakeOptInt_19 == (MR_Integer) 0))
#line 129 "termination.m"
      {
#line 129 "termination.m"
      }
#line 128 "termination.m"
    else
#line 127 "termination.m"
      {
#line 127 "termination.m"
        transform_hlds__termination__make_termination_opt_int_4_p_0(transform_hlds__termination__PredIds_15, *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_21);
      }
#line 131 "termination.m"
    {
#line 131 "termination.m"
      transform_hlds__post_term_analysis__run_post_term_analysis_3_p_0(*transform_hlds__termination__STATE_VARIABLE_ModuleInfo_21);
#line 131 "termination.m"
      return;
    }
#line 94 "termination.m"
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
