/*
** Automatically generated from `termination.m'
** by the Mercury compiler,
** version rotd-2015-08-10
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
#include "transform_hlds.mih"
#include "tree234.mih"
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
#include "hlds.vartypes.mih"
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
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
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




#line 148 "transform_hlds.termination.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__termination__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 151 "transform_hlds.termination.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__termination__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 948 "termination.m"
static void MR_CALL 
transform_hlds__termination__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_116_101_114_109_105_110_97_116_105_111_110_95_105_110_102_111_95_95_91_49_93_95_48_8_p_0(
#line 948 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_2,
#line 948 "termination.m"
  MR_Word transform_hlds__termination__ProcTable_3,
#line 948 "termination.m"
  MR_Word transform_hlds__termination__PredOrFunc_4,
#line 948 "termination.m"
  MR_Word transform_hlds__termination__SymName_5,
#line 948 "termination.m"
  MR_Word transform_hlds__termination__Context_6);

#line 549 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__549__1_1_p_0(
#line 549 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_49);

#line 522 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__522__1_2_p_0(
#line 522 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35,
#line 522 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_47);

#line 506 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__506__1_2_p_0(
#line 506 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35,
#line 506 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_41);

#line 399 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__399__1_1_p_0(
#line 399 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_59);

#line 365 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__365__1_2_p_0(
#line 365 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47,
#line 365 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_51);

#line 313 "termination.m"
static MR_Word MR_CALL 
transform_hlds__termination__IntroducedFrom__func__check_scc_pragmas_are_consistent__313__1_1_f_0(
#line 313 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_41);

#line 903 "termination.m"
static void MR_CALL 
transform_hlds__termination__make_termination_opt_int_4_p_0_1(
#line 903 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 903 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1,
#line 903 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_2,
#line 903 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_3);

#line 884 "termination.m"
static void MR_CALL 
transform_hlds__termination__make_termination_opt_int_4_p_0(
#line 884 "termination.m"
  MR_Word transform_hlds__termination__PredIds_5,
#line 884 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_6);

#line 856 "termination.m"
static void MR_CALL 
transform_hlds__termination__change_procs_termination_info_5_p_0(
#line 856 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 856 "termination.m"
  MR_Word transform_hlds__termination__Override_2,
#line 856 "termination.m"
  MR_Word transform_hlds__termination__Termination_3,
#line 856 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4,
#line 856 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcTable_5);

#line 824 "termination.m"
static void MR_CALL 
transform_hlds__termination__change_procs_arg_size_info_5_p_0(
#line 824 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 824 "termination.m"
  MR_Word transform_hlds__termination__Override_2,
#line 824 "termination.m"
  MR_Word transform_hlds__termination__ArgSize_3,
#line 824 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4,
#line 824 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcTable_5);

#line 784 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_builtin_terminates_6_p_0(
#line 784 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 784 "termination.m"
  MR_Word transform_hlds__termination__PredId_2,
#line 784 "termination.m"
  MR_Word transform_hlds__termination__PredInfo_3,
#line 784 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_4,
#line 784 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0_5,
#line 784 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcTable_6);

#line 727 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_generated_terminates_4_p_0(
#line 727 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 727 "termination.m"
  MR_Word transform_hlds__termination__SpecialPredId_2,
#line 727 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0_3,
#line 727 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcTable_4);

#line 605 "termination.m"
static void MR_CALL 
transform_hlds__termination__check_preds_5_p_0(
#line 605 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 605 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2,
#line 605 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_3);

#line 578 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__is_solver_init_wrapper_pred_2_p_0(
#line 578 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_3,
#line 578 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_2);

#line 549 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__report_termination_errors_6_p_0_4(
#line 549 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 549 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 534 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__report_termination_errors_6_p_0_3(
#line 534 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 534 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 522 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__report_termination_errors_6_p_0_2(
#line 522 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 522 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 506 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__report_termination_errors_6_p_0_1(
#line 506 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 506 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 496 "termination.m"
static void MR_CALL 
transform_hlds__termination__report_termination_errors_6_p_0(
#line 496 "termination.m"
  MR_Word transform_hlds__termination__SCC_7,
#line 496 "termination.m"
  MR_Word transform_hlds__termination__Errors_8,
#line 496 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35,
#line 496 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_36);

#line 477 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_termination_infos_4_p_0(
#line 477 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 477 "termination.m"
  MR_Word transform_hlds__termination__TerminationInfo_2,
#line 477 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3,
#line 477 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4);

#line 457 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_infinite_arg_size_infos_4_p_0(
#line 457 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 457 "termination.m"
  MR_Word transform_hlds__termination__ArgSizeInfo_2,
#line 457 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3,
#line 457 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4);

#line 436 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_finite_arg_size_infos_4_p_0(
#line 436 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 436 "termination.m"
  MR_Word transform_hlds__termination__OutputSupplierMap_2,
#line 436 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3,
#line 436 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4);

#line 399 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0_3(
#line 399 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 399 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 390 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0_2(
#line 390 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 390 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 365 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0_1(
#line 365 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 365 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 361 "termination.m"
static void MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0(
#line 361 "termination.m"
  MR_Word transform_hlds__termination__PassInfo_7,
#line 361 "termination.m"
  MR_Word transform_hlds__termination__SCC_8,
#line 361 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47,
#line 361 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_48);

#line 330 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__check_procs_known_term_3_p_0(
#line 330 "termination.m"
  MR_Word transform_hlds__termination__Status_1,
#line 330 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_2,
#line 330 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_3);

#line 313 "termination.m"
static MR_Box MR_CALL 
transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0_2(
#line 313 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 313 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 280 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0_1(
#line 280 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 280 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1);

#line 275 "termination.m"
static void MR_CALL 
transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0(
#line 275 "termination.m"
  MR_Word transform_hlds__termination__SCC_6,
#line 275 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26,
#line 275 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27,
#line 275 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_0_28,
#line 275 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_Specs_29);

#line 155 "termination.m"
static void MR_CALL 
transform_hlds__termination__check_foreign_code_attributes_2_5_p_0(
#line 155 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 155 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2,
#line 155 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_3,
#line 155 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__4_4,
#line 155 "termination.m"
  MR_Word * transform_hlds__termination__HeadVar__5_5);

#line 121 "termination.m"
static void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_5_p_0_3(
#line 121 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 121 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1,
#line 121 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_2,
#line 121 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_3,
#line 121 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_4,
#line 121 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_5);

#line 273 "termination.m"
static void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_5_p_0_2(
#line 273 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 273 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1,
#line 273 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_2,
#line 273 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_3,
#line 273 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_4,
#line 273 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_5);

#line 153 "termination.m"
static void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_5_p_0_1(
#line 153 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 153 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1,
#line 153 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_2,
#line 153 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_3,
#line 153 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_4,
#line 153 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_5);


static /* final */ const MR_Box transform_hlds__termination_scalar_common_1[34][2];

static /* final */ const MR_Box transform_hlds__termination_scalar_common_2[6][3];

static /* final */ const MR_Box transform_hlds__termination_scalar_common_3[1][8];

static /* final */ const MR_Box transform_hlds__termination_scalar_common_4[1][9];

static /* final */ const MR_Box transform_hlds__termination_scalar_common_5[2][1];

static /* final */ const MR_Box transform_hlds__termination_scalar_common_6[2][5];

static /* final */ const MR_Box transform_hlds__termination_scalar_common_7[1][4];

static /* final */ const MR_Box transform_hlds__termination_scalar_common_8[1][7];




static /* final */ const MR_Box transform_hlds__termination_scalar_common_1[34][2] = {
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "foreign code attribute set."))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "terminates"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration but also has the"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
    ((MR_Box) ((MR_String) "does_not_terminate"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "has a"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "does_not_terminate"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[6])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[16])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
    ((MR_Box) ((MR_String) "terminates"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[17])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[19])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "termination pragmas are inconsistent."))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "are mutually recursive but some of their"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[22])))
  },
  /* row 25 */
  {
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_generic_arg_size_info_1)),
    ((MR_Box) (&transform_hlds__termination_scalar_common_1[4]))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[26])))
  },
  /* row 28 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[27])))
  },
  /* row 29 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 30 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[29])))
  },
  /* row 31 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&transform_hlds__termination_scalar_common_1[25]))
  },
  /* row 32 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&transform_hlds__termination_scalar_common_2[0]))
  },
  /* row 33 */
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

#line 948 "termination.m"
static void MR_CALL 
transform_hlds__termination__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_116_101_114_109_105_110_97_116_105_111_110_95_105_110_102_111_95_95_91_49_93_95_48_8_p_0(
#line 948 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_2,
#line 948 "termination.m"
  MR_Word transform_hlds__termination__ProcTable_3,
#line 948 "termination.m"
  MR_Word transform_hlds__termination__PredOrFunc_4,
#line 948 "termination.m"
  MR_Word transform_hlds__termination__SymName_5,
#line 948 "termination.m"
  MR_Word transform_hlds__termination__Context_6)
#line 948 "termination.m"
{
#line 952 "termination.m"
  while (MR_TRUE)
#line 952 "termination.m"
    {
#line 952 "termination.m"
      /* tailcall optimized into a loop */
#line 952 "termination.m"
      {
#line 952 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 952 "termination.m"
        if ((transform_hlds__termination__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 952 "termination.m"
          {
#line 952 "termination.m"
          }
#line 952 "termination.m"
        else
#line 954 "termination.m"
          {
#line 954 "termination.m"
            MR_Integer transform_hlds__termination__ProcId_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__2_2, (MR_Integer) 0)));
#line 954 "termination.m"
            MR_Word transform_hlds__termination__ProcIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__2_2, (MR_Integer) 1)));
#line 954 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo_25;
#line 954 "termination.m"
            MR_Word transform_hlds__termination__ArgSize_26;
#line 954 "termination.m"
            MR_Word transform_hlds__termination__Termination_27;
#line 954 "termination.m"
            MR_Word transform_hlds__termination__ModeList_28;
#line 955 "termination.m"
            MR_Box transform_hlds__termination__conv0_ProcInfo_25;

#line 955 "termination.m"
            {
#line 955 "termination.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__termination__ProcTable_3, transform_hlds__termination__ProcId_18, &transform_hlds__termination__conv0_ProcInfo_25);
            }
#line 955 "termination.m"
            transform_hlds__termination__ProcInfo_25 = ((MR_Word) transform_hlds__termination__conv0_ProcInfo_25);
#line 956 "termination.m"
            {
#line 956 "termination.m"
              hlds__hlds_pred__proc_info_get_maybe_arg_size_info_2_p_0(transform_hlds__termination__ProcInfo_25, &transform_hlds__termination__ArgSize_26);
            }
#line 957 "termination.m"
            {
#line 957 "termination.m"
              hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__termination__ProcInfo_25, &transform_hlds__termination__Termination_27);
            }
#line 958 "termination.m"
            {
#line 958 "termination.m"
              hlds__hlds_pred__proc_info_declared_argmodes_2_p_0(transform_hlds__termination__ProcInfo_25, &transform_hlds__termination__ModeList_28);
            }
#line 959 "termination.m"
            {
#line 959 "termination.m"
              parse_tree__mercury_to_mercury__write_pragma_termination_info_components_9_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[4], (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, (MR_Integer) 0, transform_hlds__termination__PredOrFunc_4, transform_hlds__termination__SymName_5, transform_hlds__termination__ModeList_28, transform_hlds__termination__ArgSize_26, transform_hlds__termination__Termination_27, transform_hlds__termination__Context_6);
            }
#line 961 "termination.m"
            /* direct tailcall eliminated */
#line 961 "termination.m"
            {
#line 961 "termination.m"
              MR_Word transform_hlds__termination__HeadVar__2__tmp_copy_2 = transform_hlds__termination__ProcIds_19;

#line 961 "termination.m"
              transform_hlds__termination__HeadVar__2_2 = transform_hlds__termination__HeadVar__2__tmp_copy_2;
#line 961 "termination.m"
            }
#line 961 "termination.m"
            continue;
#line 954 "termination.m"
          }
#line 952 "termination.m"
      }
#line 952 "termination.m"
      break;
#line 952 "termination.m"
    }
#line 948 "termination.m"
}

#line 549 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__549__1_1_p_0(
#line 549 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_49)
#line 549 "termination.m"
{
#line 549 "termination.m"
  {
#line 549 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 549 "termination.m"
    MR_Word transform_hlds__termination__Error_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__HeadVar__1_49, (MR_Integer) 0)));
#line 549 "termination.m"
    MR_Word transform_hlds__termination__V_50_50;
#line 550 "termination.m"
    MR_Word transform_hlds__termination___Context_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__HeadVar__1_49, (MR_Integer) 1)));

#line 551 "termination.m"
    {
#line 551 "termination.m"
      transform_hlds__termination__V_50_50 = transform_hlds__term_errors__is_indirect_error_1_f_0(transform_hlds__termination__Error_30);
    }
#line 551 "termination.m"
    transform_hlds__termination__succeeded = (transform_hlds__termination__V_50_50 == (MR_Integer) 0);
#line 549 "termination.m"
    return transform_hlds__termination__succeeded;
#line 549 "termination.m"
  }
#line 549 "termination.m"
}

#line 522 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__522__1_2_p_0(
#line 522 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35,
#line 522 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_47)
#line 522 "termination.m"
{
#line 522 "termination.m"
  {
#line 522 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 522 "termination.m"
    MR_Word transform_hlds__termination__PredInfo_54;
#line 523 "termination.m"
    MR_Word transform_hlds__termination__V_23_23;

#line 523 "termination.m"
    {
#line 523 "termination.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35, transform_hlds__termination__HeadVar__2_47, &transform_hlds__termination__PredInfo_54, &transform_hlds__termination__V_23_23);
    }
#line 524 "termination.m"
    {
#line 524 "termination.m"
      transform_hlds__termination__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(transform_hlds__termination__PredInfo_54);
    }
#line 524 "termination.m"
    transform_hlds__termination__succeeded = !(transform_hlds__termination__succeeded);
#line 522 "termination.m"
    return transform_hlds__termination__succeeded;
#line 522 "termination.m"
  }
#line 522 "termination.m"
}

#line 506 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__506__1_2_p_0(
#line 506 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35,
#line 506 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_41)
#line 506 "termination.m"
{
#line 506 "termination.m"
  {
#line 506 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 506 "termination.m"
    MR_Word transform_hlds__termination__PredInfo_16;
#line 506 "termination.m"
    MR_Word transform_hlds__termination__Markers_18;
#line 506 "termination.m"
    MR_Word transform_hlds__termination__V_42_42;
#line 507 "termination.m"
    MR_Word transform_hlds__termination__V_17_17;

#line 507 "termination.m"
    {
#line 507 "termination.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35, transform_hlds__termination__HeadVar__2_41, &transform_hlds__termination__PredInfo_16, &transform_hlds__termination__V_17_17);
    }
#line 508 "termination.m"
    {
#line 508 "termination.m"
      transform_hlds__termination__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(transform_hlds__termination__PredInfo_16);
    }
#line 508 "termination.m"
    transform_hlds__termination__succeeded = !(transform_hlds__termination__succeeded);
#line 506 "termination.m"
    if (transform_hlds__termination__succeeded)
#line 506 "termination.m"
      {
#line 509 "termination.m"
        {
#line 509 "termination.m"
          hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__termination__PredInfo_16, &transform_hlds__termination__Markers_18);
        }
#line 510 "termination.m"
        transform_hlds__termination__V_42_42 = (MR_Integer) 19;
#line 510 "termination.m"
        {
#line 510 "termination.m"
          return transform_hlds__termination__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__termination__Markers_18, transform_hlds__termination__V_42_42);
        }
#line 506 "termination.m"
      }
#line 506 "termination.m"
    return transform_hlds__termination__succeeded;
#line 506 "termination.m"
  }
#line 506 "termination.m"
}

#line 399 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__399__1_1_p_0(
#line 399 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_59)
#line 399 "termination.m"
{
#line 399 "termination.m"
  {
#line 399 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 399 "termination.m"
    MR_Word transform_hlds__termination__Error_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__HeadVar__1_59, (MR_Integer) 0)));
#line 399 "termination.m"
    MR_Word transform_hlds__termination__V_60_60;
#line 400 "termination.m"
    MR_Word transform_hlds__termination__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__HeadVar__1_59, (MR_Integer) 1)));

#line 401 "termination.m"
    {
#line 401 "termination.m"
      transform_hlds__termination__V_60_60 = transform_hlds__term_errors__is_fatal_error_1_f_0(transform_hlds__termination__Error_32);
    }
#line 401 "termination.m"
    transform_hlds__termination__succeeded = (transform_hlds__termination__V_60_60 == (MR_Integer) 1);
#line 399 "termination.m"
    return transform_hlds__termination__succeeded;
#line 399 "termination.m"
  }
#line 399 "termination.m"
}

#line 365 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__365__1_2_p_0(
#line 365 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47,
#line 365 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_51)
#line 365 "termination.m"
{
#line 365 "termination.m"
  {
#line 365 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 365 "termination.m"
    MR_Word transform_hlds__termination__ProcInfo_14;
#line 365 "termination.m"
    MR_Word transform_hlds__termination__V_72_72;
#line 366 "termination.m"
    MR_Word transform_hlds__termination__V_13_13;
#line 367 "termination.m"
    MR_Word transform_hlds__termination__V_77_77;

#line 366 "termination.m"
    {
#line 366 "termination.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47, transform_hlds__termination__HeadVar__2_51, &transform_hlds__termination__V_13_13, &transform_hlds__termination__ProcInfo_14);
    }
#line 367 "termination.m"
    {
#line 367 "termination.m"
      hlds__hlds_pred__proc_info_get_maybe_arg_size_info_2_p_0(transform_hlds__termination__ProcInfo_14, &transform_hlds__termination__V_72_72);
    }
#line 367 "termination.m"
    transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__V_72_72)) == (MR_mktag((MR_Integer) 1)));
#line 367 "termination.m"
    if (transform_hlds__termination__succeeded)
#line 367 "termination.m"
      transform_hlds__termination__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__V_72_72, (MR_Integer) 0)));
#line 365 "termination.m"
    return transform_hlds__termination__succeeded;
#line 365 "termination.m"
  }
#line 365 "termination.m"
}

#line 313 "termination.m"
static MR_Word MR_CALL 
transform_hlds__termination__IntroducedFrom__func__check_scc_pragmas_are_consistent__313__1_1_f_0(
#line 313 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_41)
#line 313 "termination.m"
{
#line 313 "termination.m"
  {
#line 313 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 313 "termination.m"
    MR_Word transform_hlds__termination__HeadVar__2_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__HeadVar__1_41, (MR_Integer) 0)));
#line 313 "termination.m"
    MR_Integer transform_hlds__termination__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__HeadVar__1_41, (MR_Integer) 1)));

#line 313 "termination.m"
    return transform_hlds__termination__HeadVar__2_42;
#line 313 "termination.m"
  }
#line 313 "termination.m"
}

#line 903 "termination.m"
static void MR_CALL 
transform_hlds__termination__make_termination_opt_int_4_p_0_1(
#line 903 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 903 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1,
#line 903 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_2,
#line 903 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_3)
#line 903 "termination.m"
{
#line 903 "termination.m"
  {
#line 903 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

#line 903 "termination.m"
    {
#line 903 "termination.m"
      transform_hlds__termination__write_pred_termination_info_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1));
#line 903 "termination.m"
      return;
    }
#line 903 "termination.m"
  }
#line 903 "termination.m"
}

#line 884 "termination.m"
static void MR_CALL 
transform_hlds__termination__make_termination_opt_int_4_p_0(
#line 884 "termination.m"
  MR_Word transform_hlds__termination__PredIds_5,
#line 884 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_6)
#line 884 "termination.m"
{
#line 887 "termination.m"
  {
#line 887 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 887 "termination.m"
    MR_Word transform_hlds__termination__Globals_8;
#line 887 "termination.m"
    MR_Word transform_hlds__termination__ModuleName_9;
#line 887 "termination.m"
    MR_String transform_hlds__termination__OptFileName_10;
#line 887 "termination.m"
    MR_Word transform_hlds__termination__Verbose_11;
#line 887 "termination.m"
    MR_Word transform_hlds__termination__OptFileRes_12;

#line 888 "termination.m"
    {
#line 888 "termination.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__termination__ModuleInfo_6, &transform_hlds__termination__Globals_8);
    }
#line 889 "termination.m"
    {
#line 889 "termination.m"
      hlds__hlds_module__module_info_get_name_2_p_0(transform_hlds__termination__ModuleInfo_6, &transform_hlds__termination__ModuleName_9);
    }
#line 890 "termination.m"
    {
#line 890 "termination.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(transform_hlds__termination__Globals_8, transform_hlds__termination__ModuleName_9, (MR_String) ".opt.tmp", (MR_Integer) 1, &transform_hlds__termination__OptFileName_10);
    }
#line 892 "termination.m"
    {
#line 892 "termination.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__termination__Globals_8, (MR_Integer) 45, &transform_hlds__termination__Verbose_11);
    }
#line 893 "termination.m"
    {
#line 893 "termination.m"
      libs__file_util__maybe_write_string_4_p_0(transform_hlds__termination__Verbose_11, (MR_String) "% Appending termination_info pragmas to \140");
    }
#line 895 "termination.m"
    {
#line 895 "termination.m"
      libs__file_util__maybe_write_string_4_p_0(transform_hlds__termination__Verbose_11, transform_hlds__termination__OptFileName_10);
    }
#line 896 "termination.m"
    {
#line 896 "termination.m"
      libs__file_util__maybe_write_string_4_p_0(transform_hlds__termination__Verbose_11, (MR_String) "\'...");
    }
#line 897 "termination.m"
    {
#line 897 "termination.m"
      libs__file_util__maybe_flush_output_3_p_0(transform_hlds__termination__Verbose_11);
    }
#line 899 "termination.m"
    {
#line 899 "termination.m"
      mercury__io__open_append_4_p_0(transform_hlds__termination__OptFileName_10, &transform_hlds__termination__OptFileRes_12);
    }
#line 907 "termination.m"
    if (((MR_tag((MR_Word) transform_hlds__termination__OptFileRes_12)) == (MR_mktag((MR_Integer) 1))))
#line 908 "termination.m"
      {
#line 908 "termination.m"
        MR_Word transform_hlds__termination__IOError_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__OptFileRes_12, (MR_Integer) 0)));
#line 908 "termination.m"
        MR_String transform_hlds__termination__IOErrorMessage_17;
#line 908 "termination.m"
        MR_Word transform_hlds__termination__V_33_33;
#line 908 "termination.m"
        MR_Word transform_hlds__termination__V_36_36;
#line 908 "termination.m"
        MR_Word transform_hlds__termination__V_37_37;
#line 908 "termination.m"
        MR_Word transform_hlds__termination__V_39_39;

#line 909 "termination.m"
        {
#line 909 "termination.m"
          libs__file_util__maybe_write_string_4_p_0(transform_hlds__termination__Verbose_11, (MR_String) " failed!\n");
        }
#line 910 "termination.m"
        {
#line 910 "termination.m"
          mercury__io__error_message_2_p_0(transform_hlds__termination__IOError_16, &transform_hlds__termination__IOErrorMessage_17);
        }
#line 912 "termination.m"
        {
#line 912 "termination.m"
          transform_hlds__termination__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 912 "termination.m"
          MR_hl_field(MR_mktag(1), transform_hlds__termination__V_39_39, 0) = ((MR_Box) (transform_hlds__termination__IOErrorMessage_17));
#line 912 "termination.m"
          MR_hl_field(MR_mktag(1), transform_hlds__termination__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 912 "termination.m"
        }
#line 912 "termination.m"
        {
#line 912 "termination.m"
          transform_hlds__termination__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 912 "termination.m"
          MR_hl_field(MR_mktag(1), transform_hlds__termination__V_37_37, 0) = ((MR_Box) ((MR_String) "\' for output: "));
#line 912 "termination.m"
          MR_hl_field(MR_mktag(1), transform_hlds__termination__V_37_37, 1) = ((MR_Box) (transform_hlds__termination__V_39_39));
#line 912 "termination.m"
        }
#line 912 "termination.m"
        {
#line 912 "termination.m"
          transform_hlds__termination__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 912 "termination.m"
          MR_hl_field(MR_mktag(1), transform_hlds__termination__V_36_36, 0) = ((MR_Box) (transform_hlds__termination__OptFileName_10));
#line 912 "termination.m"
          MR_hl_field(MR_mktag(1), transform_hlds__termination__V_36_36, 1) = ((MR_Box) (transform_hlds__termination__V_37_37));
#line 912 "termination.m"
        }
#line 911 "termination.m"
        {
#line 911 "termination.m"
          transform_hlds__termination__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 911 "termination.m"
          MR_hl_field(MR_mktag(1), transform_hlds__termination__V_33_33, 0) = ((MR_Box) ((MR_String) "Error opening file \140"));
#line 911 "termination.m"
          MR_hl_field(MR_mktag(1), transform_hlds__termination__V_33_33, 1) = ((MR_Box) (transform_hlds__termination__V_36_36));
#line 911 "termination.m"
        }
#line 911 "termination.m"
        {
#line 911 "termination.m"
          mercury__io__write_strings_3_p_0(transform_hlds__termination__V_33_33);
        }
#line 913 "termination.m"
        {
#line 913 "termination.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 913 "termination.m"
          return;
        }
#line 908 "termination.m"
      }
#line 907 "termination.m"
    else
#line 901 "termination.m"
      {
#line 901 "termination.m"
        MR_Word transform_hlds__termination__OptFile_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__OptFileRes_12, (MR_Integer) 0)));
#line 901 "termination.m"
        MR_Word transform_hlds__termination__OldStream_14;
#line 901 "termination.m"
        MR_Word transform_hlds__termination__V_44_44;
#line 903 "termination.m"
        MR_Box transform_hlds__termination__conv0_STATE_VARIABLE_IO_45_45;
#line 904 "termination.m"
        MR_Word transform_hlds__termination__V_15_15;

#line 902 "termination.m"
        {
#line 902 "termination.m"
          mercury__io__set_output_stream_4_p_0(transform_hlds__termination__OptFile_13, &transform_hlds__termination__OldStream_14);
        }
#line 903 "termination.m"
        {
#line 903 "termination.m"
          transform_hlds__termination__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 903 "termination.m"
          MR_hl_field(MR_mktag(0), transform_hlds__termination__V_44_44, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_8[0]));
#line 903 "termination.m"
          MR_hl_field(MR_mktag(0), transform_hlds__termination__V_44_44, 1) = ((MR_Box) (transform_hlds__termination__make_termination_opt_int_4_p_0_1));
#line 903 "termination.m"
          MR_hl_field(MR_mktag(0), transform_hlds__termination__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 903 "termination.m"
          MR_hl_field(MR_mktag(0), transform_hlds__termination__V_44_44, 3) = ((MR_Box) (transform_hlds__termination__ModuleInfo_6));
#line 903 "termination.m"
        }
#line 903 "termination.m"
        {
#line 903 "termination.m"
          mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__termination__V_44_44, transform_hlds__termination__PredIds_5, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__termination__conv0_STATE_VARIABLE_IO_45_45);
        }
#line 904 "termination.m"
        {
#line 904 "termination.m"
          mercury__io__set_output_stream_4_p_0(transform_hlds__termination__OldStream_14, &transform_hlds__termination__V_15_15);
        }
#line 905 "termination.m"
        {
#line 905 "termination.m"
          mercury__io__close_output_3_p_0(transform_hlds__termination__OptFile_13);
        }
#line 906 "termination.m"
        {
#line 906 "termination.m"
          libs__file_util__maybe_write_string_4_p_0(transform_hlds__termination__Verbose_11, (MR_String) " done.\n");
#line 906 "termination.m"
          return;
        }
#line 901 "termination.m"
      }
#line 887 "termination.m"
  }
#line 884 "termination.m"
}

#line 856 "termination.m"
static void MR_CALL 
transform_hlds__termination__change_procs_termination_info_5_p_0(
#line 856 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 856 "termination.m"
  MR_Word transform_hlds__termination__Override_2,
#line 856 "termination.m"
  MR_Word transform_hlds__termination__Termination_3,
#line 856 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4,
#line 856 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcTable_5)
#line 856 "termination.m"
{
#line 859 "termination.m"
  while (MR_TRUE)
#line 859 "termination.m"
    {
#line 859 "termination.m"
      /* tailcall optimized into a loop */
#line 859 "termination.m"
      {
#line 859 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 859 "termination.m"
        if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 859 "termination.m"
          *transform_hlds__termination__STATE_VARIABLE_ProcTable_5 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4;
#line 859 "termination.m"
        else
#line 861 "termination.m"
          {
#line 861 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_25_25 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 861 "termination.m"
            MR_Integer transform_hlds__termination__ProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));
#line 861 "termination.m"
            MR_Word transform_hlds__termination__ProcIds_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
#line 861 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo0_16;
#line 861 "termination.m"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22;
#line 862 "termination.m"
            MR_Box transform_hlds__termination__conv0_ProcInfo0_16;

#line 862 "termination.m"
            {
#line 862 "termination.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__termination__TypeCtorInfo_25_25, transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4, transform_hlds__termination__ProcId_11, &transform_hlds__termination__conv0_ProcInfo0_16);
            }
#line 862 "termination.m"
            transform_hlds__termination__ProcInfo0_16 = ((MR_Word) transform_hlds__termination__conv0_ProcInfo0_16);
#line 865 "termination.m"
            transform_hlds__termination__succeeded = (transform_hlds__termination__Override_2 == (MR_Integer) 1);
#line 866 "termination.m"
            if (!(transform_hlds__termination__succeeded))
#line 867 "termination.m"
              {
#line 867 "termination.m"
                MR_Word transform_hlds__termination__V_26_26;

#line 867 "termination.m"
                {
#line 867 "termination.m"
                  hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__termination__ProcInfo0_16, &transform_hlds__termination__V_26_26);
                }
#line 867 "termination.m"
                {
#line 867 "termination.m"
                  transform_hlds__termination__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[32], ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (transform_hlds__termination__V_26_26)));
                }
#line 867 "termination.m"
              }
#line 874 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 872 "termination.m"
              {
#line 872 "termination.m"
                MR_Word transform_hlds__termination__ProcInfo_17;
#line 872 "termination.m"
                MR_Word transform_hlds__termination__V_21_21;

#line 871 "termination.m"
                {
#line 871 "termination.m"
                  transform_hlds__termination__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 871 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__V_21_21, 0) = ((MR_Box) (transform_hlds__termination__Termination_3));
#line 871 "termination.m"
                }
#line 871 "termination.m"
                {
#line 871 "termination.m"
                  hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(transform_hlds__termination__V_21_21, transform_hlds__termination__ProcInfo0_16, &transform_hlds__termination__ProcInfo_17);
                }
#line 873 "termination.m"
                {
#line 873 "termination.m"
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__termination__TypeCtorInfo_25_25, transform_hlds__termination__ProcId_11, ((MR_Box) (transform_hlds__termination__ProcInfo_17)), transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4, &transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22);
                }
#line 872 "termination.m"
              }
#line 874 "termination.m"
            else
#line 874 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4;
#line 877 "termination.m"
            /* direct tailcall eliminated */
#line 877 "termination.m"
            {
#line 877 "termination.m"
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__ProcIds_12;
#line 877 "termination.m"
              MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_4 = transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22;

#line 877 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_4;
#line 877 "termination.m"
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
#line 877 "termination.m"
            }
#line 877 "termination.m"
            continue;
#line 861 "termination.m"
          }
#line 859 "termination.m"
      }
#line 859 "termination.m"
      break;
#line 859 "termination.m"
    }
#line 856 "termination.m"
}

#line 824 "termination.m"
static void MR_CALL 
transform_hlds__termination__change_procs_arg_size_info_5_p_0(
#line 824 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 824 "termination.m"
  MR_Word transform_hlds__termination__Override_2,
#line 824 "termination.m"
  MR_Word transform_hlds__termination__ArgSize_3,
#line 824 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4,
#line 824 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcTable_5)
#line 824 "termination.m"
{
#line 827 "termination.m"
  while (MR_TRUE)
#line 827 "termination.m"
    {
#line 827 "termination.m"
      /* tailcall optimized into a loop */
#line 827 "termination.m"
      {
#line 827 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 827 "termination.m"
        if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 827 "termination.m"
          *transform_hlds__termination__STATE_VARIABLE_ProcTable_5 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4;
#line 827 "termination.m"
        else
#line 829 "termination.m"
          {
#line 829 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_25_25 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 829 "termination.m"
            MR_Integer transform_hlds__termination__ProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));
#line 829 "termination.m"
            MR_Word transform_hlds__termination__ProcIds_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
#line 829 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo0_16;
#line 829 "termination.m"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22;
#line 830 "termination.m"
            MR_Box transform_hlds__termination__conv0_ProcInfo0_16;

#line 830 "termination.m"
            {
#line 830 "termination.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__termination__TypeCtorInfo_25_25, transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4, transform_hlds__termination__ProcId_11, &transform_hlds__termination__conv0_ProcInfo0_16);
            }
#line 830 "termination.m"
            transform_hlds__termination__ProcInfo0_16 = ((MR_Word) transform_hlds__termination__conv0_ProcInfo0_16);
#line 833 "termination.m"
            transform_hlds__termination__succeeded = (transform_hlds__termination__Override_2 == (MR_Integer) 1);
#line 834 "termination.m"
            if (!(transform_hlds__termination__succeeded))
#line 835 "termination.m"
              {
#line 835 "termination.m"
                MR_Word transform_hlds__termination__V_26_26;

#line 835 "termination.m"
                {
#line 835 "termination.m"
                  hlds__hlds_pred__proc_info_get_maybe_arg_size_info_2_p_0(transform_hlds__termination__ProcInfo0_16, &transform_hlds__termination__V_26_26);
                }
#line 835 "termination.m"
                {
#line 835 "termination.m"
                  transform_hlds__termination__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[31], ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (transform_hlds__termination__V_26_26)));
                }
#line 835 "termination.m"
              }
#line 840 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 838 "termination.m"
              {
#line 838 "termination.m"
                MR_Word transform_hlds__termination__ProcInfo_17;
#line 838 "termination.m"
                MR_Word transform_hlds__termination__V_21_21;

#line 838 "termination.m"
                {
#line 838 "termination.m"
                  transform_hlds__termination__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 838 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__V_21_21, 0) = ((MR_Box) (transform_hlds__termination__ArgSize_3));
#line 838 "termination.m"
                }
#line 838 "termination.m"
                {
#line 838 "termination.m"
                  hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_p_0(transform_hlds__termination__V_21_21, transform_hlds__termination__ProcInfo0_16, &transform_hlds__termination__ProcInfo_17);
                }
#line 839 "termination.m"
                {
#line 839 "termination.m"
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__termination__TypeCtorInfo_25_25, transform_hlds__termination__ProcId_11, ((MR_Box) (transform_hlds__termination__ProcInfo_17)), transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4, &transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22);
                }
#line 838 "termination.m"
              }
#line 840 "termination.m"
            else
#line 840 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4;
#line 843 "termination.m"
            /* direct tailcall eliminated */
#line 843 "termination.m"
            {
#line 843 "termination.m"
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__ProcIds_12;
#line 843 "termination.m"
              MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_4 = transform_hlds__termination__STATE_VARIABLE_ProcTable_22_22;

#line 843 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ProcTable_0_4 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_4;
#line 843 "termination.m"
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
#line 843 "termination.m"
            }
#line 843 "termination.m"
            continue;
#line 829 "termination.m"
          }
#line 827 "termination.m"
      }
#line 827 "termination.m"
      break;
#line 827 "termination.m"
    }
#line 824 "termination.m"
}

#line 784 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_builtin_terminates_6_p_0(
#line 784 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 784 "termination.m"
  MR_Word transform_hlds__termination__PredId_2,
#line 784 "termination.m"
  MR_Word transform_hlds__termination__PredInfo_3,
#line 784 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_4,
#line 784 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0_5,
#line 784 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcTable_6)
#line 784 "termination.m"
{
#line 787 "termination.m"
  while (MR_TRUE)
#line 787 "termination.m"
    {
#line 787 "termination.m"
      /* tailcall optimized into a loop */
#line 787 "termination.m"
      {
#line 787 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 787 "termination.m"
        if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 787 "termination.m"
          *transform_hlds__termination__STATE_VARIABLE_ProcTable_6 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0_5;
#line 787 "termination.m"
        else
#line 789 "termination.m"
          {
#line 789 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_42_42 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 789 "termination.m"
            MR_Integer transform_hlds__termination__ProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));
#line 789 "termination.m"
            MR_Word transform_hlds__termination__ProcIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
#line 789 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo0_19;
#line 789 "termination.m"
            MR_Word transform_hlds__termination__ArgSizeInfo_22;
#line 789 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo1_26;
#line 789 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo_27;
#line 789 "termination.m"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_39_39;
#line 790 "termination.m"
            MR_Box transform_hlds__termination__conv0_ProcInfo0_19;

#line 790 "termination.m"
            {
#line 790 "termination.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__termination__TypeCtorInfo_42_42, transform_hlds__termination__STATE_VARIABLE_ProcTable_0_5, transform_hlds__termination__ProcId_13, &transform_hlds__termination__conv0_ProcInfo0_19);
            }
#line 790 "termination.m"
            transform_hlds__termination__ProcInfo0_19 = ((MR_Word) transform_hlds__termination__conv0_ProcInfo0_19);
#line 791 "termination.m"
            {
#line 791 "termination.m"
              transform_hlds__termination__succeeded = transform_hlds__term_util__all_args_input_or_zero_size_3_p_0(transform_hlds__termination__ModuleInfo_4, transform_hlds__termination__PredInfo_3, transform_hlds__termination__ProcInfo0_19);
            }
#line 798 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 795 "termination.m"
              {
#line 795 "termination.m"
                MR_Word transform_hlds__termination__HeadVars_20;
#line 795 "termination.m"
                MR_Word transform_hlds__termination__UsedArgs_21;
#line 795 "termination.m"
                MR_Word transform_hlds__termination__V_31_31;

#line 795 "termination.m"
                {
#line 795 "termination.m"
                  hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__termination__ProcInfo0_19, &transform_hlds__termination__HeadVars_20);
                }
#line 796 "termination.m"
                {
#line 796 "termination.m"
                  transform_hlds__term_util__make_bool_list_3_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[3], transform_hlds__termination__HeadVars_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__termination__UsedArgs_21);
                }
#line 797 "termination.m"
                {
#line 797 "termination.m"
                  transform_hlds__termination__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 797 "termination.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__termination__V_31_31, 0) = ((MR_Box) ((MR_Integer) 0));
#line 797 "termination.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__termination__V_31_31, 1) = ((MR_Box) (transform_hlds__termination__UsedArgs_21));
#line 797 "termination.m"
                }
#line 797 "termination.m"
                {
#line 797 "termination.m"
                  transform_hlds__termination__ArgSizeInfo_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 797 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__ArgSizeInfo_22, 0) = ((MR_Box) (transform_hlds__termination__V_31_31));
#line 797 "termination.m"
                }
#line 795 "termination.m"
              }
#line 798 "termination.m"
            else
#line 799 "termination.m"
              {
#line 799 "termination.m"
                MR_Word transform_hlds__termination__Context_23;
#line 799 "termination.m"
                MR_Word transform_hlds__termination__Error_24;
#line 799 "termination.m"
                MR_Word transform_hlds__termination__ArgSizeError_25;
#line 799 "termination.m"
                MR_Word transform_hlds__termination__V_33_33;
#line 799 "termination.m"
                MR_Word transform_hlds__termination__V_34_34;

#line 799 "termination.m"
                {
#line 799 "termination.m"
                  hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__termination__PredInfo_3, &transform_hlds__termination__Context_23);
                }
#line 800 "termination.m"
                {
#line 800 "termination.m"
                  transform_hlds__termination__Error_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 800 "termination.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__termination__Error_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 800 "termination.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__termination__Error_24, 1) = ((MR_Box) (transform_hlds__termination__PredId_2));
#line 800 "termination.m"
                }
#line 801 "termination.m"
                {
#line 801 "termination.m"
                  transform_hlds__termination__ArgSizeError_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 801 "termination.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeError_25, 0) = ((MR_Box) (transform_hlds__termination__Error_24));
#line 801 "termination.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeError_25, 1) = ((MR_Box) (transform_hlds__termination__Context_23));
#line 801 "termination.m"
                }
#line 802 "termination.m"
                {
#line 802 "termination.m"
                  transform_hlds__termination__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 802 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__V_34_34, 0) = ((MR_Box) (transform_hlds__termination__ArgSizeError_25));
#line 802 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 802 "termination.m"
                }
#line 802 "termination.m"
                {
#line 802 "termination.m"
                  transform_hlds__termination__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 802 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__V_33_33, 0) = ((MR_Box) (transform_hlds__termination__V_34_34));
#line 802 "termination.m"
                }
#line 802 "termination.m"
                {
#line 802 "termination.m"
                  transform_hlds__termination__ArgSizeInfo_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 802 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__ArgSizeInfo_22, 0) = ((MR_Box) (transform_hlds__termination__V_33_33));
#line 802 "termination.m"
                }
#line 799 "termination.m"
              }
#line 805 "termination.m"
            {
#line 805 "termination.m"
              hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_p_0(transform_hlds__termination__ArgSizeInfo_22, transform_hlds__termination__ProcInfo0_19, &transform_hlds__termination__ProcInfo1_26);
            }
#line 806 "termination.m"
            mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 806 "termination.m"
            {
#line 806 "termination.m"
              hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_5[1]), transform_hlds__termination__ProcInfo1_26, &transform_hlds__termination__ProcInfo_27);
            }
#line 808 "termination.m"
            {
#line 808 "termination.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__termination__TypeCtorInfo_42_42, transform_hlds__termination__ProcId_13, ((MR_Box) (transform_hlds__termination__ProcInfo_27)), transform_hlds__termination__STATE_VARIABLE_ProcTable_0_5, &transform_hlds__termination__STATE_VARIABLE_ProcTable_39_39);
            }
#line 809 "termination.m"
            /* direct tailcall eliminated */
#line 809 "termination.m"
            {
#line 809 "termination.m"
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__ProcIds_14;
#line 809 "termination.m"
              MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_5 = transform_hlds__termination__STATE_VARIABLE_ProcTable_39_39;

#line 809 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ProcTable_0_5 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_5;
#line 809 "termination.m"
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
#line 809 "termination.m"
            }
#line 809 "termination.m"
            continue;
#line 789 "termination.m"
          }
#line 787 "termination.m"
      }
#line 787 "termination.m"
      break;
#line 787 "termination.m"
    }
#line 784 "termination.m"
}

#line 727 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_generated_terminates_4_p_0(
#line 727 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 727 "termination.m"
  MR_Word transform_hlds__termination__SpecialPredId_2,
#line 727 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0_3,
#line 727 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ProcTable_4)
#line 727 "termination.m"
{
#line 730 "termination.m"
  while (MR_TRUE)
#line 730 "termination.m"
    {
#line 730 "termination.m"
      /* tailcall optimized into a loop */
#line 730 "termination.m"
      {
#line 730 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 730 "termination.m"
        if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 730 "termination.m"
          *transform_hlds__termination__STATE_VARIABLE_ProcTable_4 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0_3;
#line 730 "termination.m"
        else
#line 731 "termination.m"
          {
#line 731 "termination.m"
            MR_Integer transform_hlds__termination__ProcId_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));
#line 731 "termination.m"
            MR_Word transform_hlds__termination__ProcIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
#line 731 "termination.m"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_23_23;

#line 745 "termination.m"
#line 745 "termination.m"
            switch (transform_hlds__termination__SpecialPredId_2) {
#line 745 "termination.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 745 "termination.m"
              case (MR_Integer) 2:
#line 745 "termination.m"
              case (MR_Integer) 1:
#line 745 "termination.m"
              case (MR_Integer) 0:
#line 736 "termination.m"
                {
#line 736 "termination.m"
                  MR_Word transform_hlds__termination__TypeCtorInfo_26_26 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 736 "termination.m"
                  MR_Word transform_hlds__termination__ProcInfo0_13;
#line 736 "termination.m"
                  MR_Word transform_hlds__termination__HeadVars_14;
#line 736 "termination.m"
                  MR_Word transform_hlds__termination__ArgSize_15;
#line 736 "termination.m"
                  MR_Word transform_hlds__termination__Termination_16;
#line 736 "termination.m"
                  MR_Word transform_hlds__termination__ProcInfo1_17;
#line 736 "termination.m"
                  MR_Word transform_hlds__termination__ProcInfo_18;
#line 736 "termination.m"
                  MR_Word transform_hlds__termination__V_21_21;
#line 736 "termination.m"
                  MR_Word transform_hlds__termination__V_22_22;
#line 737 "termination.m"
                  MR_Box transform_hlds__termination__conv0_ProcInfo0_13;

#line 737 "termination.m"
                  {
#line 737 "termination.m"
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__termination__TypeCtorInfo_26_26, transform_hlds__termination__STATE_VARIABLE_ProcTable_0_3, transform_hlds__termination__ProcId_9, &transform_hlds__termination__conv0_ProcInfo0_13);
                  }
#line 737 "termination.m"
                  transform_hlds__termination__ProcInfo0_13 = ((MR_Word) transform_hlds__termination__conv0_ProcInfo0_13);
#line 738 "termination.m"
                  {
#line 738 "termination.m"
                    hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__termination__ProcInfo0_13, &transform_hlds__termination__HeadVars_14);
                  }
#line 762 "termination.m"
#line 762 "termination.m"
                  switch (transform_hlds__termination__SpecialPredId_2) {
#line 762 "termination.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 762 "termination.m"
                    case (MR_Integer) 2:
#line 762 "termination.m"
                      {
#line 762 "termination.m"
                        MR_Word transform_hlds__termination__OutList_31;

#line 763 "termination.m"
                        {
#line 763 "termination.m"
                          transform_hlds__term_util__make_bool_list_3_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[3], transform_hlds__termination__HeadVars_14, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[28]), &transform_hlds__termination__OutList_31);
                        }
#line 764 "termination.m"
                        {
#line 764 "termination.m"
                          transform_hlds__termination__ArgSize_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 764 "termination.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSize_15, 0) = ((MR_Box) ((MR_Integer) 0));
#line 764 "termination.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSize_15, 1) = ((MR_Box) (transform_hlds__termination__OutList_31));
#line 764 "termination.m"
                        }
#line 765 "termination.m"
                        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 765 "termination.m"
                        transform_hlds__termination__Termination_16 = (MR_Word) &transform_hlds__termination_scalar_common_5[0];
#line 762 "termination.m"
                      }
#line 762 "termination.m"
                      break;
#line 762 "termination.m"
                    case (MR_Integer) 1:
#line 772 "termination.m"
                      {
#line 772 "termination.m"
                        MR_Word transform_hlds__termination__OutList_59;

#line 773 "termination.m"
                        {
#line 773 "termination.m"
                          transform_hlds__term_util__make_bool_list_3_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[3], transform_hlds__termination__HeadVars_14, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[27]), &transform_hlds__termination__OutList_59);
                        }
#line 774 "termination.m"
                        {
#line 774 "termination.m"
                          transform_hlds__termination__ArgSize_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 774 "termination.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSize_15, 0) = ((MR_Box) ((MR_Integer) 0));
#line 774 "termination.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSize_15, 1) = ((MR_Box) (transform_hlds__termination__OutList_59));
#line 774 "termination.m"
                        }
#line 775 "termination.m"
                        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 775 "termination.m"
                        transform_hlds__termination__Termination_16 = (MR_Word) &transform_hlds__termination_scalar_common_5[0];
#line 772 "termination.m"
                      }
#line 762 "termination.m"
                      break;
#line 762 "termination.m"
                    case (MR_Integer) 0:
#line 767 "termination.m"
                      {
#line 767 "termination.m"
                        MR_Word transform_hlds__termination__OutList_58;

#line 768 "termination.m"
                        {
#line 768 "termination.m"
                          transform_hlds__term_util__make_bool_list_3_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[3], transform_hlds__termination__HeadVars_14, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[30]), &transform_hlds__termination__OutList_58);
                        }
#line 769 "termination.m"
                        {
#line 769 "termination.m"
                          transform_hlds__termination__ArgSize_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 769 "termination.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSize_15, 0) = ((MR_Box) ((MR_Integer) 0));
#line 769 "termination.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSize_15, 1) = ((MR_Box) (transform_hlds__termination__OutList_58));
#line 769 "termination.m"
                        }
#line 770 "termination.m"
                        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 770 "termination.m"
                        transform_hlds__termination__Termination_16 = (MR_Word) &transform_hlds__termination_scalar_common_5[0];
#line 767 "termination.m"
                      }
#line 762 "termination.m"
                      break;
#line 762 "termination.m"
                  }
#line 741 "termination.m"
                  {
#line 741 "termination.m"
                    transform_hlds__termination__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 741 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_21_21, 0) = ((MR_Box) (transform_hlds__termination__ArgSize_15));
#line 741 "termination.m"
                  }
#line 741 "termination.m"
                  {
#line 741 "termination.m"
                    hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_p_0(transform_hlds__termination__V_21_21, transform_hlds__termination__ProcInfo0_13, &transform_hlds__termination__ProcInfo1_17);
                  }
#line 742 "termination.m"
                  {
#line 742 "termination.m"
                    transform_hlds__termination__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 742 "termination.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__termination__V_22_22, 0) = ((MR_Box) (transform_hlds__termination__Termination_16));
#line 742 "termination.m"
                  }
#line 742 "termination.m"
                  {
#line 742 "termination.m"
                    hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(transform_hlds__termination__V_22_22, transform_hlds__termination__ProcInfo1_17, &transform_hlds__termination__ProcInfo_18);
                  }
#line 744 "termination.m"
                  {
#line 744 "termination.m"
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__termination__TypeCtorInfo_26_26, transform_hlds__termination__ProcId_9, ((MR_Box) (transform_hlds__termination__ProcInfo_18)), transform_hlds__termination__STATE_VARIABLE_ProcTable_0_3, &transform_hlds__termination__STATE_VARIABLE_ProcTable_23_23);
                  }
#line 736 "termination.m"
                }
#line 745 "termination.m"
                break;
#line 745 "termination.m"
              case (MR_Integer) 3:
#line 746 "termination.m"
                transform_hlds__termination__STATE_VARIABLE_ProcTable_23_23 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0_3;
#line 745 "termination.m"
                break;
#line 745 "termination.m"
            }
#line 751 "termination.m"
            /* direct tailcall eliminated */
#line 751 "termination.m"
            {
#line 751 "termination.m"
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__ProcIds_10;
#line 751 "termination.m"
              MR_Word transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_3 = transform_hlds__termination__STATE_VARIABLE_ProcTable_23_23;

#line 751 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ProcTable_0_3 = transform_hlds__termination__STATE_VARIABLE_ProcTable_0__tmp_copy_3;
#line 751 "termination.m"
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
#line 751 "termination.m"
            }
#line 751 "termination.m"
            continue;
#line 731 "termination.m"
          }
#line 730 "termination.m"
      }
#line 730 "termination.m"
      break;
#line 730 "termination.m"
    }
#line 727 "termination.m"
}

#line 605 "termination.m"
static void MR_CALL 
transform_hlds__termination__check_preds_5_p_0(
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
            MR_Word transform_hlds__termination__TypeCtorInfo_71_71;
#line 609 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_72_72;
#line 609 "termination.m"
            MR_Word transform_hlds__termination__PredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));
#line 609 "termination.m"
            MR_Word transform_hlds__termination__PredIds_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
#line 609 "termination.m"
            MR_Word transform_hlds__termination__Globals_16;
#line 609 "termination.m"
            MR_Word transform_hlds__termination__MakeOptInt_17;
#line 609 "termination.m"
            MR_Word transform_hlds__termination__PredTable0_18;
#line 609 "termination.m"
            MR_Word transform_hlds__termination__PredInfo0_19;
#line 609 "termination.m"
            MR_Word transform_hlds__termination__ImportStatus_20;
#line 609 "termination.m"
            MR_Word transform_hlds__termination__Context_21;
#line 609 "termination.m"
            MR_Word transform_hlds__termination__ProcTable0_22;
#line 609 "termination.m"
            MR_Word transform_hlds__termination__Markers_23;
#line 609 "termination.m"
            MR_Word transform_hlds__termination__ProcIds_24;
#line 609 "termination.m"
            MR_Word transform_hlds__termination__ProcTable2_26;
#line 609 "termination.m"
            MR_Word transform_hlds__termination__ProcTable_33;
#line 609 "termination.m"
            MR_Word transform_hlds__termination__PredInfo_34;
#line 609 "termination.m"
            MR_Word transform_hlds__termination__PredTable_35;
#line 609 "termination.m"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_66_66;
#line 616 "termination.m"
            MR_Box transform_hlds__termination__conv0_PredInfo0_19;
#line 630 "termination.m"
            MR_Word transform_hlds__termination__ProcTable1_25;

#line 610 "termination.m"
            {
#line 610 "termination.m"
              hlds__passes_aux__write_pred_progress_message_5_p_0((MR_String) "% Checking termination of ", transform_hlds__termination__PredId_12, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2);
            }
#line 612 "termination.m"
            {
#line 612 "termination.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2, &transform_hlds__termination__Globals_16);
            }
#line 613 "termination.m"
            {
#line 613 "termination.m"
              libs__globals__lookup_bool_option_3_p_0(transform_hlds__termination__Globals_16, (MR_Integer) 87, &transform_hlds__termination__MakeOptInt_17);
            }
#line 615 "termination.m"
            {
#line 615 "termination.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2, &transform_hlds__termination__PredTable0_18);
            }
#line 2273 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_71_71 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 2275 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_72_72 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 616 "termination.m"
            {
#line 616 "termination.m"
              mercury__map__lookup_3_p_0(transform_hlds__termination__TypeCtorInfo_71_71, transform_hlds__termination__TypeCtorInfo_72_72, transform_hlds__termination__PredTable0_18, ((MR_Box) (transform_hlds__termination__PredId_12)), &transform_hlds__termination__conv0_PredInfo0_19);
            }
#line 616 "termination.m"
            transform_hlds__termination__PredInfo0_19 = ((MR_Word) transform_hlds__termination__conv0_PredInfo0_19);
#line 617 "termination.m"
            {
#line 617 "termination.m"
              hlds__hlds_pred__pred_info_get_import_status_2_p_0(transform_hlds__termination__PredInfo0_19, &transform_hlds__termination__ImportStatus_20);
            }
#line 618 "termination.m"
            {
#line 618 "termination.m"
              hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__termination__PredInfo0_19, &transform_hlds__termination__Context_21);
            }
#line 619 "termination.m"
            {
#line 619 "termination.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__termination__PredInfo0_19, &transform_hlds__termination__ProcTable0_22);
            }
#line 620 "termination.m"
            {
#line 620 "termination.m"
              hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__termination__PredInfo0_19, &transform_hlds__termination__Markers_23);
            }
#line 621 "termination.m"
            {
#line 621 "termination.m"
              transform_hlds__termination__ProcIds_24 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__termination__PredInfo0_19);
            }
#line 704 "termination.m"
            {
#line 704 "termination.m"
              transform_hlds__termination__succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(transform_hlds__termination__PredInfo0_19);
            }
#line 708 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 706 "termination.m"
              {
#line 706 "termination.m"
                {
#line 706 "termination.m"
                  transform_hlds__termination__set_builtin_terminates_6_p_0(transform_hlds__termination__ProcIds_24, transform_hlds__termination__PredId_12, transform_hlds__termination__PredInfo0_19, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2, transform_hlds__termination__ProcTable0_22, &transform_hlds__termination__ProcTable1_25);
                }
#line 706 "termination.m"
                transform_hlds__termination__succeeded = MR_TRUE;
#line 706 "termination.m"
              }
#line 708 "termination.m"
            else
#line 723 "termination.m"
              {
#line 723 "termination.m"
                MR_Word transform_hlds__termination__SpecialPredId_85;
#line 717 "termination.m"
                MR_Word transform_hlds__termination__SpecPredId0_83;
#line 710 "termination.m"
                MR_Word transform_hlds__termination__ModuleName_80;
#line 710 "termination.m"
                MR_String transform_hlds__termination__Name_81;
#line 710 "termination.m"
                MR_Integer transform_hlds__termination__Arity_82;
#line 710 "termination.m"
                MR_Integer transform_hlds__termination__V_91_91;
#line 713 "termination.m"
                MR_String transform_hlds__termination__V_84_84;

#line 710 "termination.m"
                {
#line 710 "termination.m"
                  transform_hlds__termination__ModuleName_80 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__termination__PredInfo0_19);
                }
#line 711 "termination.m"
                {
#line 711 "termination.m"
                  transform_hlds__termination__Name_81 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__termination__PredInfo0_19);
                }
#line 712 "termination.m"
                {
#line 712 "termination.m"
                  transform_hlds__termination__Arity_82 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__termination__PredInfo0_19);
                }
#line 713 "termination.m"
                {
#line 713 "termination.m"
                  transform_hlds__termination__succeeded = mdbcomp__prim_data__special_pred_name_arity_4_p_1(&transform_hlds__termination__SpecPredId0_83, transform_hlds__termination__Name_81, &transform_hlds__termination__V_84_84, &transform_hlds__termination__V_91_91);
                }
#line 710 "termination.m"
                if (transform_hlds__termination__succeeded)
#line 710 "termination.m"
                  {
#line 713 "termination.m"
                    transform_hlds__termination__succeeded = (transform_hlds__termination__Arity_82 == transform_hlds__termination__V_91_91);
#line 710 "termination.m"
                    if (transform_hlds__termination__succeeded)
#line 714 "termination.m"
                      {
#line 714 "termination.m"
                        transform_hlds__termination__succeeded = mdbcomp__builtin_modules__any_mercury_builtin_module_1_p_0(transform_hlds__termination__ModuleName_80);
                      }
#line 710 "termination.m"
                  }
#line 717 "termination.m"
                if (transform_hlds__termination__succeeded)
#line 716 "termination.m"
                  {
#line 716 "termination.m"
                    transform_hlds__termination__SpecialPredId_85 = transform_hlds__termination__SpecPredId0_83;
#line 716 "termination.m"
                    transform_hlds__termination__succeeded = MR_TRUE;
#line 716 "termination.m"
                  }
#line 717 "termination.m"
                else
#line 718 "termination.m"
                  {
#line 718 "termination.m"
                    MR_Word transform_hlds__termination__Origin_86;
#line 718 "termination.m"
                    MR_Word transform_hlds__termination__V_89_89;
#line 719 "termination.m"
                    MR_Word transform_hlds__termination__V_87_87;

#line 718 "termination.m"
                    {
#line 718 "termination.m"
                      hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__termination__PredInfo0_19, &transform_hlds__termination__Origin_86);
                    }
#line 719 "termination.m"
                    transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__Origin_86)) == (MR_mktag((MR_Integer) 0)));
#line 719 "termination.m"
                    if (transform_hlds__termination__succeeded)
#line 719 "termination.m"
                      {
#line 719 "termination.m"
                        transform_hlds__termination__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__Origin_86, (MR_Integer) 0)));
#line 719 "termination.m"
                        transform_hlds__termination__SpecialPredId_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__V_89_89, (MR_Integer) 0)));
#line 719 "termination.m"
                        transform_hlds__termination__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__V_89_89, (MR_Integer) 1)));
#line 719 "termination.m"
                        transform_hlds__termination__succeeded = MR_TRUE;
#line 719 "termination.m"
                      }
#line 718 "termination.m"
                  }
#line 723 "termination.m"
                if (transform_hlds__termination__succeeded)
#line 723 "termination.m"
                  {
#line 722 "termination.m"
                    {
#line 722 "termination.m"
                      transform_hlds__termination__set_generated_terminates_4_p_0(transform_hlds__termination__ProcIds_24, transform_hlds__termination__SpecialPredId_85, transform_hlds__termination__ProcTable0_22, &transform_hlds__termination__ProcTable1_25);
                    }
#line 722 "termination.m"
                    transform_hlds__termination__succeeded = MR_TRUE;
#line 723 "termination.m"
                  }
#line 723 "termination.m"
              }
#line 630 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 629 "termination.m"
              transform_hlds__termination__ProcTable2_26 = transform_hlds__termination__ProcTable1_25;
#line 630 "termination.m"
            else
#line 641 "termination.m"
              {
#line 631 "termination.m"
                MR_Word transform_hlds__termination__V_43_43;

#line 631 "termination.m"
                {
#line 631 "termination.m"
                  transform_hlds__termination__V_43_43 = parse_tree__status__status_defined_in_this_module_1_f_0(transform_hlds__termination__ImportStatus_20);
                }
#line 631 "termination.m"
                transform_hlds__termination__succeeded = (transform_hlds__termination__V_43_43 == (MR_Integer) 1);
#line 641 "termination.m"
                if (transform_hlds__termination__succeeded)
#line 638 "termination.m"
                  {
#line 635 "termination.m"
                    {
#line 635 "termination.m"
                      transform_hlds__termination__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__termination__Markers_23, (MR_Integer) 17);
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
                          transform_hlds__termination__change_procs_termination_info_5_p_0(transform_hlds__termination__ProcIds_24, (MR_Integer) 1, (MR_Word) &transform_hlds__termination_scalar_common_5[0], transform_hlds__termination__ProcTable0_22, &transform_hlds__termination__ProcTable2_26);
                        }
#line 636 "termination.m"
                      }
#line 638 "termination.m"
                    else
#line 639 "termination.m"
                      transform_hlds__termination__ProcTable2_26 = transform_hlds__termination__ProcTable0_22;
#line 638 "termination.m"
                  }
#line 641 "termination.m"
                else
#line 667 "termination.m"
                  {
#line 667 "termination.m"
                    MR_Word transform_hlds__termination__ArgSizeError_29;
#line 667 "termination.m"
                    MR_Word transform_hlds__termination__ArgSizeInfo_30;
#line 667 "termination.m"
                    MR_Word transform_hlds__termination__V_58_58;
#line 667 "termination.m"
                    MR_Word transform_hlds__termination__ProcTable1_69;

#line 653 "termination.m"
                    {
#line 653 "termination.m"
                      transform_hlds__termination__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__termination__Markers_23, (MR_Integer) 17);
                    }
#line 654 "termination.m"
                    if (!(transform_hlds__termination__succeeded))
#line 655 "termination.m"
                      {
#line 655 "termination.m"
                        MR_Word transform_hlds__termination__V_48_48;

#line 655 "termination.m"
                        transform_hlds__termination__succeeded = (transform_hlds__termination__MakeOptInt_17 == (MR_Integer) 0);
#line 655 "termination.m"
                        if (transform_hlds__termination__succeeded)
#line 655 "termination.m"
                          {
#line 656 "termination.m"
                            transform_hlds__termination__V_48_48 = (MR_Integer) 19;
#line 656 "termination.m"
                            {
#line 656 "termination.m"
                              transform_hlds__termination__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__termination__Markers_23, transform_hlds__termination__V_48_48);
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
                          transform_hlds__termination__change_procs_termination_info_5_p_0(transform_hlds__termination__ProcIds_24, (MR_Integer) 1, (MR_Word) &transform_hlds__termination_scalar_common_5[0], transform_hlds__termination__ProcTable0_22, &transform_hlds__termination__ProcTable1_69);
                        }
#line 659 "termination.m"
                      }
#line 661 "termination.m"
                    else
#line 663 "termination.m"
                      {
#line 663 "termination.m"
                        MR_Word transform_hlds__termination__TerminationError_27;
#line 663 "termination.m"
                        MR_Word transform_hlds__termination__TerminationInfo_28;
#line 663 "termination.m"
                        MR_Word transform_hlds__termination__V_54_54;

#line 662 "termination.m"
                        {
#line 662 "termination.m"
                          transform_hlds__termination__TerminationError_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 662 "termination.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__termination__TerminationError_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 662 "termination.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__termination__TerminationError_27, 1) = ((MR_Box) (transform_hlds__termination__Context_21));
#line 662 "termination.m"
                        }
#line 664 "termination.m"
                        {
#line 664 "termination.m"
                          transform_hlds__termination__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 664 "termination.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__termination__V_54_54, 0) = ((MR_Box) (transform_hlds__termination__TerminationError_27));
#line 664 "termination.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__termination__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 664 "termination.m"
                        }
#line 664 "termination.m"
                        {
#line 664 "termination.m"
                          transform_hlds__termination__TerminationInfo_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 664 "termination.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__termination__TerminationInfo_28, 0) = ((MR_Box) (transform_hlds__termination__V_54_54));
#line 664 "termination.m"
                        }
#line 665 "termination.m"
                        {
#line 665 "termination.m"
                          transform_hlds__termination__change_procs_termination_info_5_p_0(transform_hlds__termination__ProcIds_24, (MR_Integer) 0, transform_hlds__termination__TerminationInfo_28, transform_hlds__termination__ProcTable0_22, &transform_hlds__termination__ProcTable1_69);
                        }
#line 663 "termination.m"
                      }
#line 668 "termination.m"
                    {
#line 668 "termination.m"
                      transform_hlds__termination__ArgSizeError_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 668 "termination.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeError_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 668 "termination.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeError_29, 1) = ((MR_Box) (transform_hlds__termination__Context_21));
#line 668 "termination.m"
                    }
#line 669 "termination.m"
                    {
#line 669 "termination.m"
                      transform_hlds__termination__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 669 "termination.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__termination__V_58_58, 0) = ((MR_Box) (transform_hlds__termination__ArgSizeError_29));
#line 669 "termination.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__termination__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 669 "termination.m"
                    }
#line 669 "termination.m"
                    {
#line 669 "termination.m"
                      transform_hlds__termination__ArgSizeInfo_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 669 "termination.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__termination__ArgSizeInfo_30, 0) = ((MR_Box) (transform_hlds__termination__V_58_58));
#line 669 "termination.m"
                    }
#line 670 "termination.m"
                    {
#line 670 "termination.m"
                      transform_hlds__termination__change_procs_arg_size_info_5_p_0(transform_hlds__termination__ProcIds_24, (MR_Integer) 0, transform_hlds__termination__ArgSizeInfo_30, transform_hlds__termination__ProcTable1_69, &transform_hlds__termination__ProcTable2_26);
                    }
#line 667 "termination.m"
                  }
#line 641 "termination.m"
              }
#line 673 "termination.m"
            {
#line 673 "termination.m"
              transform_hlds__termination__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__termination__Markers_23, (MR_Integer) 18);
            }
#line 679 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 675 "termination.m"
              {
#line 675 "termination.m"
                MR_Word transform_hlds__termination__RequestError_31;
#line 675 "termination.m"
                MR_Word transform_hlds__termination__RequestTerminationInfo_32;
#line 675 "termination.m"
                MR_Word transform_hlds__termination__V_62_62;
#line 675 "termination.m"
                MR_Word transform_hlds__termination__V_63_63;

#line 675 "termination.m"
                {
#line 675 "termination.m"
                  transform_hlds__termination__V_62_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 675 "termination.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__termination__V_62_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 675 "termination.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__termination__V_62_62, 1) = ((MR_Box) (transform_hlds__termination__PredId_12));
#line 675 "termination.m"
                }
#line 674 "termination.m"
                {
#line 674 "termination.m"
                  transform_hlds__termination__RequestError_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 674 "termination.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__termination__RequestError_31, 0) = ((MR_Box) (transform_hlds__termination__V_62_62));
#line 674 "termination.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__termination__RequestError_31, 1) = ((MR_Box) (transform_hlds__termination__Context_21));
#line 674 "termination.m"
                }
#line 676 "termination.m"
                {
#line 676 "termination.m"
                  transform_hlds__termination__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 676 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__V_63_63, 0) = ((MR_Box) (transform_hlds__termination__RequestError_31));
#line 676 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 676 "termination.m"
                }
#line 676 "termination.m"
                {
#line 676 "termination.m"
                  transform_hlds__termination__RequestTerminationInfo_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 676 "termination.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__termination__RequestTerminationInfo_32, 0) = ((MR_Box) (transform_hlds__termination__V_63_63));
#line 676 "termination.m"
                }
#line 677 "termination.m"
                {
#line 677 "termination.m"
                  transform_hlds__termination__change_procs_termination_info_5_p_0(transform_hlds__termination__ProcIds_24, (MR_Integer) 1, transform_hlds__termination__RequestTerminationInfo_32, transform_hlds__termination__ProcTable2_26, &transform_hlds__termination__ProcTable_33);
                }
#line 675 "termination.m"
              }
#line 679 "termination.m"
            else
#line 680 "termination.m"
              transform_hlds__termination__ProcTable_33 = transform_hlds__termination__ProcTable2_26;
#line 682 "termination.m"
            {
#line 682 "termination.m"
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__termination__ProcTable_33, transform_hlds__termination__PredInfo0_19, &transform_hlds__termination__PredInfo_34);
            }
#line 683 "termination.m"
            {
#line 683 "termination.m"
              mercury__map__set_4_p_0(transform_hlds__termination__TypeCtorInfo_71_71, transform_hlds__termination__TypeCtorInfo_72_72, ((MR_Box) (transform_hlds__termination__PredId_12)), ((MR_Box) (transform_hlds__termination__PredInfo_34)), transform_hlds__termination__PredTable0_18, &transform_hlds__termination__PredTable_35);
            }
#line 684 "termination.m"
            {
#line 684 "termination.m"
              hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__termination__PredTable_35, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_66_66);
            }
#line 685 "termination.m"
            /* direct tailcall eliminated */
#line 685 "termination.m"
            {
#line 685 "termination.m"
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__PredIds_13;
#line 685 "termination.m"
              MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_2 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_66_66;

#line 685 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_2;
#line 685 "termination.m"
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
#line 685 "termination.m"
            }
#line 685 "termination.m"
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

#line 578 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__is_solver_init_wrapper_pred_2_p_0(
#line 578 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_3,
#line 578 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_2)
#line 578 "termination.m"
{
#line 581 "termination.m"
  {
#line 581 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 581 "termination.m"
    MR_Word transform_hlds__termination__PredId_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__HeadVar__2_2, (MR_Integer) 0)));
#line 581 "termination.m"
    MR_Word transform_hlds__termination__PredInfo_6;
#line 581 "termination.m"
    MR_Word transform_hlds__termination__PredOrigin_7;
#line 581 "termination.m"
    MR_Word transform_hlds__termination__SpecialPredId_8;
#line 581 "termination.m"
    MR_Word transform_hlds__termination__V_10_10;
#line 581 "termination.m"
    MR_Integer transform_hlds__termination__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__HeadVar__2_2, (MR_Integer) 1)));
#line 584 "termination.m"
    MR_Word transform_hlds__termination__V_9_9;

#line 582 "termination.m"
    {
#line 582 "termination.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__termination__ModuleInfo_3, transform_hlds__termination__PredId_4, &transform_hlds__termination__PredInfo_6);
    }
#line 583 "termination.m"
    {
#line 583 "termination.m"
      hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__termination__PredInfo_6, &transform_hlds__termination__PredOrigin_7);
    }
#line 584 "termination.m"
    transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__PredOrigin_7)) == (MR_mktag((MR_Integer) 0)));
#line 584 "termination.m"
    if (transform_hlds__termination__succeeded)
#line 584 "termination.m"
      {
#line 584 "termination.m"
        transform_hlds__termination__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PredOrigin_7, (MR_Integer) 0)));
#line 584 "termination.m"
        transform_hlds__termination__SpecialPredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__V_10_10, (MR_Integer) 0)));
#line 584 "termination.m"
        transform_hlds__termination__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__V_10_10, (MR_Integer) 1)));
#line 585 "termination.m"
        transform_hlds__termination__succeeded = (transform_hlds__termination__SpecialPredId_8 == (MR_Integer) 3);
#line 584 "termination.m"
      }
#line 581 "termination.m"
    return transform_hlds__termination__succeeded;
#line 581 "termination.m"
  }
#line 578 "termination.m"
}

#line 549 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__report_termination_errors_6_p_0_4(
#line 549 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 549 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1)
#line 549 "termination.m"
{
#line 549 "termination.m"
  {
#line 549 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 549 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

#line 549 "termination.m"
    {
#line 549 "termination.m"
      return transform_hlds__termination__succeeded = transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__549__1_1_p_0(((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 549 "termination.m"
    return transform_hlds__termination__succeeded;
#line 549 "termination.m"
  }
#line 549 "termination.m"
}

#line 534 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__report_termination_errors_6_p_0_3(
#line 534 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 534 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1)
#line 534 "termination.m"
{
#line 534 "termination.m"
  {
#line 534 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 534 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

#line 534 "termination.m"
    {
#line 534 "termination.m"
      return transform_hlds__termination__succeeded = transform_hlds__termination__is_solver_init_wrapper_pred_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 534 "termination.m"
    return transform_hlds__termination__succeeded;
#line 534 "termination.m"
  }
#line 534 "termination.m"
}

#line 522 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__report_termination_errors_6_p_0_2(
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
      return transform_hlds__termination__succeeded = transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__522__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 522 "termination.m"
    return transform_hlds__termination__succeeded;
#line 522 "termination.m"
  }
#line 522 "termination.m"
}

#line 506 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__report_termination_errors_6_p_0_1(
#line 506 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 506 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1)
#line 506 "termination.m"
{
#line 506 "termination.m"
  {
#line 506 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 506 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

#line 506 "termination.m"
    {
#line 506 "termination.m"
      return transform_hlds__termination__succeeded = transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__506__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 506 "termination.m"
    return transform_hlds__termination__succeeded;
#line 506 "termination.m"
  }
#line 506 "termination.m"
}

#line 496 "termination.m"
static void MR_CALL 
transform_hlds__termination__report_termination_errors_6_p_0(
#line 496 "termination.m"
  MR_Word transform_hlds__termination__SCC_7,
#line 496 "termination.m"
  MR_Word transform_hlds__termination__Errors_8,
#line 496 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35,
#line 496 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_36)
#line 496 "termination.m"
{
#line 500 "termination.m"
  {
#line 500 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 500 "termination.m"
    MR_Word transform_hlds__termination__Globals_11;
#line 500 "termination.m"
    MR_Word transform_hlds__termination__NormalErrors_12;
#line 500 "termination.m"
    MR_Word transform_hlds__termination__VerboseErrors_13;
#line 511 "termination.m"
    MR_Word transform_hlds__termination__IsCheckTerm_14;
#line 511 "termination.m"
    MR_Word transform_hlds__termination__CheckTermPPIds_19;
#line 513 "termination.m"
    MR_Word transform_hlds__termination__V_20_20;
#line 513 "termination.m"
    MR_Word transform_hlds__termination__V_21_21;

#line 501 "termination.m"
    {
#line 501 "termination.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35, &transform_hlds__termination__Globals_11);
    }
#line 502 "termination.m"
    {
#line 502 "termination.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__termination__Globals_11, (MR_Integer) 418, &transform_hlds__termination__NormalErrors_12);
    }
#line 503 "termination.m"
    {
#line 503 "termination.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__termination__Globals_11, (MR_Integer) 419, &transform_hlds__termination__VerboseErrors_13);
    }
#line 506 "termination.m"
    {
#line 506 "termination.m"
      transform_hlds__termination__IsCheckTerm_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 506 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsCheckTerm_14, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_6[0]));
#line 506 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsCheckTerm_14, 1) = ((MR_Box) (transform_hlds__termination__report_termination_errors_6_p_0_1));
#line 506 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsCheckTerm_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 506 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsCheckTerm_14, 3) = ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35));
#line 506 "termination.m"
    }
#line 512 "termination.m"
    {
#line 512 "termination.m"
      mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__termination__IsCheckTerm_14, transform_hlds__termination__SCC_7, &transform_hlds__termination__CheckTermPPIds_19);
    }
#line 513 "termination.m"
    transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__CheckTermPPIds_19)) == (MR_mktag((MR_Integer) 1)));
#line 513 "termination.m"
    if (transform_hlds__termination__succeeded)
#line 513 "termination.m"
      {
#line 513 "termination.m"
        transform_hlds__termination__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__CheckTermPPIds_19, (MR_Integer) 0)));
#line 513 "termination.m"
        transform_hlds__termination__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__CheckTermPPIds_19, (MR_Integer) 1)));
#line 518 "termination.m"
        {
#line 518 "termination.m"
          transform_hlds__term_errors__report_term_errors_5_p_0(transform_hlds__termination__SCC_7, transform_hlds__termination__Errors_8, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35);
        }
#line 519 "termination.m"
        {
#line 519 "termination.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
#line 520 "termination.m"
        {
#line 520 "termination.m"
          hlds__hlds_module__module_info_incr_errors_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_36);
#line 520 "termination.m"
          return;
        }
#line 513 "termination.m"
      }
#line 513 "termination.m"
    else
#line 571 "termination.m"
      {
#line 571 "termination.m"
        MR_Word transform_hlds__termination__PrintErrors_27;
#line 525 "termination.m"
        MR_Word transform_hlds__termination__TypeCtorInfo_62_62 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 525 "termination.m"
        MR_Word transform_hlds__termination__IsNonImported_22;
#line 525 "termination.m"
        MR_Word transform_hlds__termination__NonImportedPPIds_24;
#line 525 "termination.m"
        MR_Word transform_hlds__termination__V_48_48;
#line 527 "termination.m"
        MR_Word transform_hlds__termination__V_25_25;
#line 527 "termination.m"
        MR_Word transform_hlds__termination__V_26_26;

#line 522 "termination.m"
        {
#line 522 "termination.m"
          transform_hlds__termination__IsNonImported_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 522 "termination.m"
          MR_hl_field(MR_mktag(0), transform_hlds__termination__IsNonImported_22, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_6[0]));
#line 522 "termination.m"
          MR_hl_field(MR_mktag(0), transform_hlds__termination__IsNonImported_22, 1) = ((MR_Box) (transform_hlds__termination__report_termination_errors_6_p_0_2));
#line 522 "termination.m"
          MR_hl_field(MR_mktag(0), transform_hlds__termination__IsNonImported_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 522 "termination.m"
          MR_hl_field(MR_mktag(0), transform_hlds__termination__IsNonImported_22, 3) = ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35));
#line 522 "termination.m"
        }
#line 526 "termination.m"
        {
#line 526 "termination.m"
          mercury__list__filter_3_p_0(transform_hlds__termination__TypeCtorInfo_62_62, transform_hlds__termination__IsNonImported_22, transform_hlds__termination__SCC_7, &transform_hlds__termination__NonImportedPPIds_24);
        }
#line 527 "termination.m"
        transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__NonImportedPPIds_24)) == (MR_mktag((MR_Integer) 1)));
#line 527 "termination.m"
        if (transform_hlds__termination__succeeded)
#line 527 "termination.m"
          {
#line 527 "termination.m"
            transform_hlds__termination__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__NonImportedPPIds_24, (MR_Integer) 0)));
#line 527 "termination.m"
            transform_hlds__termination__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__NonImportedPPIds_24, (MR_Integer) 1)));
#line 534 "termination.m"
            {
#line 534 "termination.m"
              transform_hlds__termination__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 534 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__V_48_48, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_6[0]));
#line 534 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__V_48_48, 1) = ((MR_Box) (transform_hlds__termination__report_termination_errors_6_p_0_3));
#line 534 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 534 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__V_48_48, 3) = ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35));
#line 534 "termination.m"
            }
#line 534 "termination.m"
            {
#line 534 "termination.m"
              transform_hlds__termination__succeeded = mercury__list__all_false_2_p_0(transform_hlds__termination__TypeCtorInfo_62_62, transform_hlds__termination__V_48_48, transform_hlds__termination__SCC_7);
            }
#line 525 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 545 "termination.m"
#line 545 "termination.m"
              switch (transform_hlds__termination__VerboseErrors_13) {
#line 545 "termination.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 545 "termination.m"
                case (MR_Integer) 0:
#line 546 "termination.m"
                  {
#line 546 "termination.m"
                    MR_Word transform_hlds__termination__TypeCtorInfo_64_64;
#line 546 "termination.m"
                    MR_Word transform_hlds__termination__IsNonSimple_28;
#line 546 "termination.m"
                    MR_Word transform_hlds__termination__PrintErrors0_32;

#line 3087 "transform_hlds.termination.c"
                    transform_hlds__termination__succeeded = (transform_hlds__termination__NormalErrors_12 == (MR_Integer) 1);
#line 546 "termination.m"
                    if (transform_hlds__termination__succeeded)
#line 546 "termination.m"
                      {
#line 549 "termination.m"
                        transform_hlds__termination__IsNonSimple_28 = (MR_Word) &transform_hlds__termination_scalar_common_2[5];
#line 3095 "transform_hlds.termination.c"
                        transform_hlds__termination__TypeCtorInfo_64_64 = (MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0;
#line 553 "termination.m"
                        {
#line 553 "termination.m"
                          mercury__list__filter_3_p_0(transform_hlds__termination__TypeCtorInfo_64_64, transform_hlds__termination__IsNonSimple_28, transform_hlds__termination__Errors_8, &transform_hlds__termination__PrintErrors0_32);
                        }
#line 560 "termination.m"
                        if ((transform_hlds__termination__PrintErrors0_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 559 "termination.m"
                          transform_hlds__termination__PrintErrors_27 = transform_hlds__termination__Errors_8;
#line 560 "termination.m"
                        else
#line 562 "termination.m"
                          transform_hlds__termination__PrintErrors_27 = transform_hlds__termination__PrintErrors0_32;
#line 560 "termination.m"
                        transform_hlds__termination__succeeded = MR_TRUE;
#line 546 "termination.m"
                      }
#line 546 "termination.m"
                  }
#line 545 "termination.m"
                  break;
#line 545 "termination.m"
                case (MR_Integer) 1:
#line 544 "termination.m"
                  {
#line 544 "termination.m"
                    transform_hlds__termination__PrintErrors_27 = transform_hlds__termination__Errors_8;
#line 544 "termination.m"
                    transform_hlds__termination__succeeded = MR_TRUE;
#line 544 "termination.m"
                  }
#line 545 "termination.m"
                  break;
#line 545 "termination.m"
              }
#line 527 "termination.m"
          }
#line 571 "termination.m"
        if (transform_hlds__termination__succeeded)
#line 570 "termination.m"
          {
#line 570 "termination.m"
            transform_hlds__term_errors__report_term_errors_5_p_0(transform_hlds__termination__SCC_7, transform_hlds__termination__PrintErrors_27, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35);
          }
#line 571 "termination.m"
        else
#line 571 "termination.m"
          {
#line 571 "termination.m"
          }
#line 571 "termination.m"
        *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_36 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_35;
#line 571 "termination.m"
      }
#line 500 "termination.m"
  }
#line 496 "termination.m"
}

#line 477 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_termination_infos_4_p_0(
#line 477 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 477 "termination.m"
  MR_Word transform_hlds__termination__TerminationInfo_2,
#line 477 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3,
#line 477 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4)
#line 477 "termination.m"
{
#line 480 "termination.m"
  while (MR_TRUE)
#line 480 "termination.m"
    {
#line 480 "termination.m"
      /* tailcall optimized into a loop */
#line 480 "termination.m"
      {
#line 480 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 480 "termination.m"
        if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 480 "termination.m"
          *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3;
#line 480 "termination.m"
        else
#line 481 "termination.m"
          {
#line 481 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_28_28;
#line 481 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_29_29;
#line 481 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_31_31;
#line 481 "termination.m"
            MR_Word transform_hlds__termination__PPId_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));
#line 481 "termination.m"
            MR_Word transform_hlds__termination__PPIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
#line 481 "termination.m"
            MR_Word transform_hlds__termination__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PPId_9, (MR_Integer) 0)));
#line 481 "termination.m"
            MR_Integer transform_hlds__termination__ProcId_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PPId_9, (MR_Integer) 1)));
#line 481 "termination.m"
            MR_Word transform_hlds__termination__PredTable0_15;
#line 481 "termination.m"
            MR_Word transform_hlds__termination__PredInfo0_16;
#line 481 "termination.m"
            MR_Word transform_hlds__termination__ProcTable0_17;
#line 481 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo0_18;
#line 481 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo_19;
#line 481 "termination.m"
            MR_Word transform_hlds__termination__ProcTable_20;
#line 481 "termination.m"
            MR_Word transform_hlds__termination__PredInfo_21;
#line 481 "termination.m"
            MR_Word transform_hlds__termination__PredTable_22;
#line 481 "termination.m"
            MR_Word transform_hlds__termination__V_25_25;
#line 481 "termination.m"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26;
#line 484 "termination.m"
            MR_Box transform_hlds__termination__conv0_PredInfo0_16;
#line 486 "termination.m"
            MR_Box transform_hlds__termination__conv1_ProcInfo0_18;

#line 483 "termination.m"
            {
#line 483 "termination.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__termination__PredTable0_15);
            }
#line 3232 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 3234 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_29_29 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 484 "termination.m"
            {
#line 484 "termination.m"
              mercury__map__lookup_3_p_0(transform_hlds__termination__TypeCtorInfo_28_28, transform_hlds__termination__TypeCtorInfo_29_29, transform_hlds__termination__PredTable0_15, ((MR_Box) (transform_hlds__termination__PredId_13)), &transform_hlds__termination__conv0_PredInfo0_16);
            }
#line 484 "termination.m"
            transform_hlds__termination__PredInfo0_16 = ((MR_Word) transform_hlds__termination__conv0_PredInfo0_16);
#line 485 "termination.m"
            {
#line 485 "termination.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__termination__PredInfo0_16, &transform_hlds__termination__ProcTable0_17);
            }
#line 3248 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 486 "termination.m"
            {
#line 486 "termination.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__termination__TypeCtorInfo_31_31, transform_hlds__termination__ProcTable0_17, transform_hlds__termination__ProcId_14, &transform_hlds__termination__conv1_ProcInfo0_18);
            }
#line 486 "termination.m"
            transform_hlds__termination__ProcInfo0_18 = ((MR_Word) transform_hlds__termination__conv1_ProcInfo0_18);
#line 488 "termination.m"
            {
#line 488 "termination.m"
              transform_hlds__termination__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 488 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_25_25, 0) = ((MR_Box) (transform_hlds__termination__TerminationInfo_2));
#line 488 "termination.m"
            }
#line 488 "termination.m"
            {
#line 488 "termination.m"
              hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(transform_hlds__termination__V_25_25, transform_hlds__termination__ProcInfo0_18, &transform_hlds__termination__ProcInfo_19);
            }
#line 490 "termination.m"
            {
#line 490 "termination.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__termination__TypeCtorInfo_31_31, transform_hlds__termination__ProcId_14, ((MR_Box) (transform_hlds__termination__ProcInfo_19)), transform_hlds__termination__ProcTable0_17, &transform_hlds__termination__ProcTable_20);
            }
#line 491 "termination.m"
            {
#line 491 "termination.m"
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__termination__ProcTable_20, transform_hlds__termination__PredInfo0_16, &transform_hlds__termination__PredInfo_21);
            }
#line 492 "termination.m"
            {
#line 492 "termination.m"
              mercury__map__det_update_4_p_0(transform_hlds__termination__TypeCtorInfo_28_28, transform_hlds__termination__TypeCtorInfo_29_29, ((MR_Box) (transform_hlds__termination__PredId_13)), ((MR_Box) (transform_hlds__termination__PredInfo_21)), transform_hlds__termination__PredTable0_15, &transform_hlds__termination__PredTable_22);
            }
#line 493 "termination.m"
            {
#line 493 "termination.m"
              hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__termination__PredTable_22, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26);
            }
#line 494 "termination.m"
            /* direct tailcall eliminated */
#line 494 "termination.m"
            {
#line 494 "termination.m"
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__PPIds_10;
#line 494 "termination.m"
              MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26;

#line 494 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 494 "termination.m"
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
#line 494 "termination.m"
            }
#line 494 "termination.m"
            continue;
#line 481 "termination.m"
          }
#line 480 "termination.m"
      }
#line 480 "termination.m"
      break;
#line 480 "termination.m"
    }
#line 477 "termination.m"
}

#line 457 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_infinite_arg_size_infos_4_p_0(
#line 457 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 457 "termination.m"
  MR_Word transform_hlds__termination__ArgSizeInfo_2,
#line 457 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3,
#line 457 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4)
#line 457 "termination.m"
{
#line 460 "termination.m"
  while (MR_TRUE)
#line 460 "termination.m"
    {
#line 460 "termination.m"
      /* tailcall optimized into a loop */
#line 460 "termination.m"
      {
#line 460 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 460 "termination.m"
        if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 460 "termination.m"
          *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3;
#line 460 "termination.m"
        else
#line 461 "termination.m"
          {
#line 461 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_28_28;
#line 461 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_29_29;
#line 461 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_31_31;
#line 461 "termination.m"
            MR_Word transform_hlds__termination__PPId_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));
#line 461 "termination.m"
            MR_Word transform_hlds__termination__PPIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
#line 461 "termination.m"
            MR_Word transform_hlds__termination__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PPId_9, (MR_Integer) 0)));
#line 461 "termination.m"
            MR_Integer transform_hlds__termination__ProcId_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PPId_9, (MR_Integer) 1)));
#line 461 "termination.m"
            MR_Word transform_hlds__termination__PredTable0_15;
#line 461 "termination.m"
            MR_Word transform_hlds__termination__PredInfo0_16;
#line 461 "termination.m"
            MR_Word transform_hlds__termination__ProcTable0_17;
#line 461 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo0_18;
#line 461 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo_19;
#line 461 "termination.m"
            MR_Word transform_hlds__termination__ProcTable_20;
#line 461 "termination.m"
            MR_Word transform_hlds__termination__PredInfo_21;
#line 461 "termination.m"
            MR_Word transform_hlds__termination__PredTable_22;
#line 461 "termination.m"
            MR_Word transform_hlds__termination__V_25_25;
#line 461 "termination.m"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26;
#line 464 "termination.m"
            MR_Box transform_hlds__termination__conv0_PredInfo0_16;
#line 466 "termination.m"
            MR_Box transform_hlds__termination__conv1_ProcInfo0_18;

#line 463 "termination.m"
            {
#line 463 "termination.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__termination__PredTable0_15);
            }
#line 3394 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 3396 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_29_29 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 464 "termination.m"
            {
#line 464 "termination.m"
              mercury__map__lookup_3_p_0(transform_hlds__termination__TypeCtorInfo_28_28, transform_hlds__termination__TypeCtorInfo_29_29, transform_hlds__termination__PredTable0_15, ((MR_Box) (transform_hlds__termination__PredId_13)), &transform_hlds__termination__conv0_PredInfo0_16);
            }
#line 464 "termination.m"
            transform_hlds__termination__PredInfo0_16 = ((MR_Word) transform_hlds__termination__conv0_PredInfo0_16);
#line 465 "termination.m"
            {
#line 465 "termination.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__termination__PredInfo0_16, &transform_hlds__termination__ProcTable0_17);
            }
#line 3410 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 466 "termination.m"
            {
#line 466 "termination.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__termination__TypeCtorInfo_31_31, transform_hlds__termination__ProcTable0_17, transform_hlds__termination__ProcId_14, &transform_hlds__termination__conv1_ProcInfo0_18);
            }
#line 466 "termination.m"
            transform_hlds__termination__ProcInfo0_18 = ((MR_Word) transform_hlds__termination__conv1_ProcInfo0_18);
#line 468 "termination.m"
            {
#line 468 "termination.m"
              transform_hlds__termination__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 468 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_25_25, 0) = ((MR_Box) (transform_hlds__termination__ArgSizeInfo_2));
#line 468 "termination.m"
            }
#line 468 "termination.m"
            {
#line 468 "termination.m"
              hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_p_0(transform_hlds__termination__V_25_25, transform_hlds__termination__ProcInfo0_18, &transform_hlds__termination__ProcInfo_19);
            }
#line 469 "termination.m"
            {
#line 469 "termination.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__termination__TypeCtorInfo_31_31, transform_hlds__termination__ProcId_14, ((MR_Box) (transform_hlds__termination__ProcInfo_19)), transform_hlds__termination__ProcTable0_17, &transform_hlds__termination__ProcTable_20);
            }
#line 470 "termination.m"
            {
#line 470 "termination.m"
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__termination__ProcTable_20, transform_hlds__termination__PredInfo0_16, &transform_hlds__termination__PredInfo_21);
            }
#line 471 "termination.m"
            {
#line 471 "termination.m"
              mercury__map__set_4_p_0(transform_hlds__termination__TypeCtorInfo_28_28, transform_hlds__termination__TypeCtorInfo_29_29, ((MR_Box) (transform_hlds__termination__PredId_13)), ((MR_Box) (transform_hlds__termination__PredInfo_21)), transform_hlds__termination__PredTable0_15, &transform_hlds__termination__PredTable_22);
            }
#line 472 "termination.m"
            {
#line 472 "termination.m"
              hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__termination__PredTable_22, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26);
            }
#line 473 "termination.m"
            /* direct tailcall eliminated */
#line 473 "termination.m"
            {
#line 473 "termination.m"
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__PPIds_10;
#line 473 "termination.m"
              MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26;

#line 473 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 473 "termination.m"
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
#line 473 "termination.m"
            }
#line 473 "termination.m"
            continue;
#line 461 "termination.m"
          }
#line 460 "termination.m"
      }
#line 460 "termination.m"
      break;
#line 460 "termination.m"
    }
#line 457 "termination.m"
}

#line 436 "termination.m"
static void MR_CALL 
transform_hlds__termination__set_finite_arg_size_infos_4_p_0(
#line 436 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 436 "termination.m"
  MR_Word transform_hlds__termination__OutputSupplierMap_2,
#line 436 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3,
#line 436 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4)
#line 436 "termination.m"
{
#line 439 "termination.m"
  while (MR_TRUE)
#line 439 "termination.m"
    {
#line 439 "termination.m"
      /* tailcall optimized into a loop */
#line 439 "termination.m"
      {
#line 439 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 439 "termination.m"
        if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 439 "termination.m"
          *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_4 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3;
#line 439 "termination.m"
        else
#line 440 "termination.m"
          {
#line 440 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_32_32;
#line 440 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_33_33;
#line 440 "termination.m"
            MR_Word transform_hlds__termination__TypeCtorInfo_35_35;
#line 440 "termination.m"
            MR_Word transform_hlds__termination__Soln_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));
#line 440 "termination.m"
            MR_Word transform_hlds__termination__Solns_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
#line 440 "termination.m"
            MR_Word transform_hlds__termination__PPId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__Soln_9, (MR_Integer) 0)));
#line 440 "termination.m"
            MR_Integer transform_hlds__termination__Gamma_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__Soln_9, (MR_Integer) 1)));
#line 440 "termination.m"
            MR_Word transform_hlds__termination__PredId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PPId_13, (MR_Integer) 0)));
#line 440 "termination.m"
            MR_Integer transform_hlds__termination__ProcId_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PPId_13, (MR_Integer) 1)));
#line 440 "termination.m"
            MR_Word transform_hlds__termination__PredTable0_17;
#line 440 "termination.m"
            MR_Word transform_hlds__termination__PredInfo0_18;
#line 440 "termination.m"
            MR_Word transform_hlds__termination__ProcTable0_19;
#line 440 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo_20;
#line 440 "termination.m"
            MR_Word transform_hlds__termination__OutputSuppliers_21;
#line 440 "termination.m"
            MR_Word transform_hlds__termination__ArgSizeInfo_22;
#line 440 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo1_23;
#line 440 "termination.m"
            MR_Word transform_hlds__termination__ProcTable_24;
#line 440 "termination.m"
            MR_Word transform_hlds__termination__PredInfo_25;
#line 440 "termination.m"
            MR_Word transform_hlds__termination__PredTable_26;
#line 440 "termination.m"
            MR_Word transform_hlds__termination__V_29_29;
#line 440 "termination.m"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_30_30;
#line 444 "termination.m"
            MR_Box transform_hlds__termination__conv0_PredInfo0_18;
#line 446 "termination.m"
            MR_Box transform_hlds__termination__conv1_ProcInfo_20;
#line 447 "termination.m"
            MR_Box transform_hlds__termination__conv2_OutputSuppliers_21;

#line 443 "termination.m"
            {
#line 443 "termination.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__termination__PredTable0_17);
            }
#line 3566 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_32_32 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 3568 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_33_33 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 444 "termination.m"
            {
#line 444 "termination.m"
              mercury__map__lookup_3_p_0(transform_hlds__termination__TypeCtorInfo_32_32, transform_hlds__termination__TypeCtorInfo_33_33, transform_hlds__termination__PredTable0_17, ((MR_Box) (transform_hlds__termination__PredId_15)), &transform_hlds__termination__conv0_PredInfo0_18);
            }
#line 444 "termination.m"
            transform_hlds__termination__PredInfo0_18 = ((MR_Word) transform_hlds__termination__conv0_PredInfo0_18);
#line 445 "termination.m"
            {
#line 445 "termination.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__termination__PredInfo0_18, &transform_hlds__termination__ProcTable0_19);
            }
#line 3582 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_35_35 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 446 "termination.m"
            {
#line 446 "termination.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__termination__TypeCtorInfo_35_35, transform_hlds__termination__ProcTable0_19, transform_hlds__termination__ProcId_16, &transform_hlds__termination__conv1_ProcInfo_20);
            }
#line 446 "termination.m"
            transform_hlds__termination__ProcInfo_20 = ((MR_Word) transform_hlds__termination__conv1_ProcInfo_20);
#line 447 "termination.m"
            {
#line 447 "termination.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__termination_scalar_common_1[2], transform_hlds__termination__OutputSupplierMap_2, ((MR_Box) (transform_hlds__termination__PPId_13)), &transform_hlds__termination__conv2_OutputSuppliers_21);
            }
#line 447 "termination.m"
            transform_hlds__termination__OutputSuppliers_21 = ((MR_Word) transform_hlds__termination__conv2_OutputSuppliers_21);
#line 448 "termination.m"
            {
#line 448 "termination.m"
              transform_hlds__termination__ArgSizeInfo_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 448 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeInfo_22, 0) = ((MR_Box) (transform_hlds__termination__Gamma_14));
#line 448 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeInfo_22, 1) = ((MR_Box) (transform_hlds__termination__OutputSuppliers_21));
#line 448 "termination.m"
            }
#line 450 "termination.m"
            {
#line 450 "termination.m"
              transform_hlds__termination__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 450 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_29_29, 0) = ((MR_Box) (transform_hlds__termination__ArgSizeInfo_22));
#line 450 "termination.m"
            }
#line 450 "termination.m"
            {
#line 450 "termination.m"
              hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_p_0(transform_hlds__termination__V_29_29, transform_hlds__termination__ProcInfo_20, &transform_hlds__termination__ProcInfo1_23);
            }
#line 451 "termination.m"
            {
#line 451 "termination.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__termination__TypeCtorInfo_35_35, transform_hlds__termination__ProcId_16, ((MR_Box) (transform_hlds__termination__ProcInfo1_23)), transform_hlds__termination__ProcTable0_19, &transform_hlds__termination__ProcTable_24);
            }
#line 452 "termination.m"
            {
#line 452 "termination.m"
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__termination__ProcTable_24, transform_hlds__termination__PredInfo0_18, &transform_hlds__termination__PredInfo_25);
            }
#line 453 "termination.m"
            {
#line 453 "termination.m"
              mercury__map__set_4_p_0(transform_hlds__termination__TypeCtorInfo_32_32, transform_hlds__termination__TypeCtorInfo_33_33, ((MR_Box) (transform_hlds__termination__PredId_15)), ((MR_Box) (transform_hlds__termination__PredInfo_25)), transform_hlds__termination__PredTable0_17, &transform_hlds__termination__PredTable_26);
            }
#line 454 "termination.m"
            {
#line 454 "termination.m"
              hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__termination__PredTable_26, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_30_30);
            }
#line 455 "termination.m"
            /* direct tailcall eliminated */
#line 455 "termination.m"
            {
#line 455 "termination.m"
              MR_Word transform_hlds__termination__HeadVar__1__tmp_copy_1 = transform_hlds__termination__Solns_10;
#line 455 "termination.m"
              MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_30_30;

#line 455 "termination.m"
              transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_3 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 455 "termination.m"
              transform_hlds__termination__HeadVar__1_1 = transform_hlds__termination__HeadVar__1__tmp_copy_1;
#line 455 "termination.m"
            }
#line 455 "termination.m"
            continue;
#line 440 "termination.m"
          }
#line 439 "termination.m"
      }
#line 439 "termination.m"
      break;
#line 439 "termination.m"
    }
#line 436 "termination.m"
}

#line 399 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0_3(
#line 399 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 399 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1)
#line 399 "termination.m"
{
#line 399 "termination.m"
  {
#line 399 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 399 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

#line 399 "termination.m"
    {
#line 399 "termination.m"
      return transform_hlds__termination__succeeded = transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__399__1_1_p_0(((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 399 "termination.m"
    return transform_hlds__termination__succeeded;
#line 399 "termination.m"
  }
#line 399 "termination.m"
}

#line 390 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0_2(
#line 390 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 390 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1)
#line 390 "termination.m"
{
#line 390 "termination.m"
  {
#line 390 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 390 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

#line 390 "termination.m"
    {
#line 390 "termination.m"
      return transform_hlds__termination__succeeded = transform_hlds__term_util__is_termination_known_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 390 "termination.m"
    return transform_hlds__termination__succeeded;
#line 390 "termination.m"
  }
#line 390 "termination.m"
}

#line 365 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0_1(
#line 365 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 365 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1)
#line 365 "termination.m"
{
#line 365 "termination.m"
  {
#line 365 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 365 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

#line 365 "termination.m"
    {
#line 365 "termination.m"
      return transform_hlds__termination__succeeded = transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__365__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 365 "termination.m"
    return transform_hlds__termination__succeeded;
#line 365 "termination.m"
  }
#line 365 "termination.m"
}

#line 361 "termination.m"
static void MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0(
#line 361 "termination.m"
  MR_Word transform_hlds__termination__PassInfo_7,
#line 361 "termination.m"
  MR_Word transform_hlds__termination__SCC_8,
#line 361 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47,
#line 361 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_48)
#line 361 "termination.m"
{
#line 364 "termination.m"
  {
#line 364 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 364 "termination.m"
    MR_Word transform_hlds__termination__TypeCtorInfo_69_69;
#line 364 "termination.m"
    MR_Word transform_hlds__termination__IsArgSizeKnown_11;
#line 364 "termination.m"
    MR_Word transform_hlds__termination__SCCArgSizeUnknown_17;
#line 364 "termination.m"
    MR_Word transform_hlds__termination__ArgSizeErrors_18;
#line 364 "termination.m"
    MR_Word transform_hlds__termination__TermErrors_19;
#line 364 "termination.m"
    MR_Word transform_hlds__termination__SCCTerminationUnknown_27;
#line 364 "termination.m"
    MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_57_57;
#line 364 "termination.m"
    MR_Word transform_hlds__termination__V_58_58;
#line 369 "termination.m"
    MR_Word transform_hlds__termination___SCCArgSizeKnown_16;
#line 390 "termination.m"
    MR_Word transform_hlds__termination___SCCTerminationKnown_26;

#line 365 "termination.m"
    {
#line 365 "termination.m"
      transform_hlds__termination__IsArgSizeKnown_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 365 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsArgSizeKnown_11, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_6[0]));
#line 365 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsArgSizeKnown_11, 1) = ((MR_Box) (transform_hlds__termination__analyse_termination_in_scc_6_p_0_1));
#line 365 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsArgSizeKnown_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 365 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__IsArgSizeKnown_11, 3) = ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47));
#line 365 "termination.m"
    }
#line 3805 "transform_hlds.termination.c"
    transform_hlds__termination__TypeCtorInfo_69_69 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 369 "termination.m"
    {
#line 369 "termination.m"
      mercury__list__filter_4_p_0(transform_hlds__termination__TypeCtorInfo_69_69, transform_hlds__termination__IsArgSizeKnown_11, transform_hlds__termination__SCC_8, &transform_hlds__termination___SCCArgSizeKnown_16, &transform_hlds__termination__SCCArgSizeUnknown_17);
    }
#line 374 "termination.m"
    if ((transform_hlds__termination__SCCArgSizeUnknown_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 371 "termination.m"
      {
#line 372 "termination.m"
        transform_hlds__termination__ArgSizeErrors_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 373 "termination.m"
        transform_hlds__termination__TermErrors_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 371 "termination.m"
        transform_hlds__termination__STATE_VARIABLE_ModuleInfo_57_57 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47;
#line 371 "termination.m"
      }
#line 374 "termination.m"
    else
#line 375 "termination.m"
      {
#line 375 "termination.m"
        MR_Word transform_hlds__termination__ArgSizeResult_22;
#line 375 "termination.m"
        MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_53_53;

#line 376 "termination.m"
        {
#line 376 "termination.m"
          transform_hlds__term_pass1__find_arg_sizes_in_scc_8_p_0(transform_hlds__termination__SCCArgSizeUnknown_17, transform_hlds__termination__PassInfo_7, &transform_hlds__termination__ArgSizeResult_22, &transform_hlds__termination__TermErrors_19, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_47, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_53_53);
        }
#line 383 "termination.m"
        if (((MR_tag((MR_Word) transform_hlds__termination__ArgSizeResult_22)) == (MR_mktag((MR_Integer) 1))))
#line 384 "termination.m"
          {
#line 384 "termination.m"
            MR_Word transform_hlds__termination__V_55_55;

#line 384 "termination.m"
            transform_hlds__termination__ArgSizeErrors_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__ArgSizeResult_22, (MR_Integer) 0)));
#line 386 "termination.m"
            {
#line 386 "termination.m"
              transform_hlds__termination__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 386 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_55_55, 0) = ((MR_Box) (transform_hlds__termination__ArgSizeErrors_18));
#line 386 "termination.m"
            }
#line 385 "termination.m"
            {
#line 385 "termination.m"
              transform_hlds__termination__set_infinite_arg_size_infos_4_p_0(transform_hlds__termination__SCCArgSizeUnknown_17, transform_hlds__termination__V_55_55, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_53_53, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_57_57);
            }
#line 384 "termination.m"
          }
#line 383 "termination.m"
        else
#line 379 "termination.m"
          {
#line 379 "termination.m"
            MR_Word transform_hlds__termination__Solutions_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeResult_22, (MR_Integer) 0)));
#line 379 "termination.m"
            MR_Word transform_hlds__termination__OutputSupplierMap_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__ArgSizeResult_22, (MR_Integer) 1)));

#line 380 "termination.m"
            {
#line 380 "termination.m"
              transform_hlds__termination__set_finite_arg_size_infos_4_p_0(transform_hlds__termination__Solutions_23, transform_hlds__termination__OutputSupplierMap_24, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_53_53, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_57_57);
            }
#line 382 "termination.m"
            transform_hlds__termination__ArgSizeErrors_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 379 "termination.m"
          }
#line 375 "termination.m"
      }
#line 390 "termination.m"
    {
#line 390 "termination.m"
      transform_hlds__termination__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 390 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_58_58, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_6[0]));
#line 390 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_58_58, 1) = ((MR_Box) (transform_hlds__termination__analyse_termination_in_scc_6_p_0_2));
#line 390 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_58_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 390 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_58_58, 3) = ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_57_57));
#line 390 "termination.m"
    }
#line 390 "termination.m"
    {
#line 390 "termination.m"
      mercury__list__filter_4_p_0(transform_hlds__termination__TypeCtorInfo_69_69, transform_hlds__termination__V_58_58, transform_hlds__termination__SCC_8, &transform_hlds__termination___SCCTerminationKnown_26, &transform_hlds__termination__SCCTerminationUnknown_27);
    }
#line 397 "termination.m"
    if ((transform_hlds__termination__SCCTerminationUnknown_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 396 "termination.m"
      *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_48 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_57_57;
#line 397 "termination.m"
    else
#line 398 "termination.m"
      {
#line 398 "termination.m"
        MR_Word transform_hlds__termination__TypeCtorInfo_71_71 = (MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0;
#line 398 "termination.m"
        MR_Word transform_hlds__termination__FatalErrors_34;
#line 398 "termination.m"
        MR_Word transform_hlds__termination__BothErrors_35;

#line 403 "termination.m"
        {
#line 403 "termination.m"
          mercury__list__filter_3_p_0(transform_hlds__termination__TypeCtorInfo_71_71, (MR_Word) &transform_hlds__termination_scalar_common_2[4], transform_hlds__termination__ArgSizeErrors_18, &transform_hlds__termination__FatalErrors_34);
        }
#line 404 "termination.m"
        {
#line 404 "termination.m"
          transform_hlds__termination__BothErrors_35 = mercury__list__f_43_43_2_f_0(transform_hlds__termination__TypeCtorInfo_71_71, transform_hlds__termination__TermErrors_19, transform_hlds__termination__FatalErrors_34);
        }
#line 3926 "transform_hlds.termination.c"
        if ((transform_hlds__termination__BothErrors_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3928 "transform_hlds.termination.c"
          {
#line 3930 "transform_hlds.termination.c"
            MR_Word transform_hlds__termination__TerminationResult_42;
#line 3932 "transform_hlds.termination.c"
            MR_Word transform_hlds__termination__Globals_43;
#line 3934 "transform_hlds.termination.c"
            MR_Integer transform_hlds__termination__SingleArgs_44;
#line 3936 "transform_hlds.termination.c"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_62_62;
#line 3938 "transform_hlds.termination.c"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_64_64;

#line 414 "termination.m"
            {
#line 414 "termination.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_57_57, &transform_hlds__termination__Globals_43);
            }
#line 415 "termination.m"
            {
#line 415 "termination.m"
              libs__globals__lookup_int_option_3_p_0(transform_hlds__termination__Globals_43, (MR_Integer) 420, &transform_hlds__termination__SingleArgs_44);
            }
#line 417 "termination.m"
            {
#line 417 "termination.m"
              transform_hlds__term_pass2__prove_termination_in_scc_8_p_0(transform_hlds__termination__SCCTerminationUnknown_27, transform_hlds__termination__PassInfo_7, transform_hlds__termination__SingleArgs_44, &transform_hlds__termination__TerminationResult_42, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_57_57, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_62_62);
            }
#line 420 "termination.m"
            {
#line 420 "termination.m"
              transform_hlds__termination__set_termination_infos_4_p_0(transform_hlds__termination__SCCTerminationUnknown_27, transform_hlds__termination__TerminationResult_42, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_62_62, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_64_64);
            }
#line 426 "termination.m"
            if (((MR_tag((MR_Word) transform_hlds__termination__TerminationResult_42)) == (MR_mktag((MR_Integer) 1))))
#line 423 "termination.m"
              {
#line 423 "termination.m"
                MR_Word transform_hlds__termination__TerminationErrors_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__TerminationResult_42, (MR_Integer) 0)));

#line 424 "termination.m"
                {
#line 424 "termination.m"
                  transform_hlds__termination__report_termination_errors_6_p_0(transform_hlds__termination__SCC_8, transform_hlds__termination__TerminationErrors_45, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_64_64, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_48);
#line 424 "termination.m"
                  return;
                }
#line 423 "termination.m"
              }
#line 426 "termination.m"
            else
#line 427 "termination.m"
              *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_48 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_64_64;
#line 3981 "transform_hlds.termination.c"
          }
#line 3983 "transform_hlds.termination.c"
        else
#line 3985 "transform_hlds.termination.c"
          {
#line 3987 "transform_hlds.termination.c"
            MR_Integer transform_hlds__termination__MaxErrors_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PassInfo_7, (MR_Integer) 1)));
#line 3989 "transform_hlds.termination.c"
            MR_Word transform_hlds__termination__TerminationResult_74;
#line 3991 "transform_hlds.termination.c"
            MR_Word transform_hlds__termination__TerminationErrors_75;
#line 3993 "transform_hlds.termination.c"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_64_78;
#line 409 "termination.m"
            MR_Word transform_hlds__termination__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PassInfo_7, (MR_Integer) 0)));
#line 409 "termination.m"
            MR_Integer transform_hlds__termination__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__termination__PassInfo_7, (MR_Integer) 2)));

#line 410 "termination.m"
            {
#line 410 "termination.m"
              mercury__list__take_upto_3_p_0(transform_hlds__termination__TypeCtorInfo_71_71, transform_hlds__termination__MaxErrors_39, transform_hlds__termination__BothErrors_35, &transform_hlds__termination__TerminationErrors_75);
            }
#line 411 "termination.m"
            {
#line 411 "termination.m"
              transform_hlds__termination__TerminationResult_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 411 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__TerminationResult_74, 0) = ((MR_Box) (transform_hlds__termination__TerminationErrors_75));
#line 411 "termination.m"
            }
#line 420 "termination.m"
            {
#line 420 "termination.m"
              transform_hlds__termination__set_termination_infos_4_p_0(transform_hlds__termination__SCCTerminationUnknown_27, transform_hlds__termination__TerminationResult_74, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_57_57, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_64_78);
            }
#line 424 "termination.m"
            {
#line 424 "termination.m"
              transform_hlds__termination__report_termination_errors_6_p_0(transform_hlds__termination__SCC_8, transform_hlds__termination__TerminationErrors_75, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_64_78, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_48);
#line 424 "termination.m"
              return;
            }
#line 4025 "transform_hlds.termination.c"
          }
#line 398 "termination.m"
      }
#line 364 "termination.m"
  }
#line 361 "termination.m"
}

#line 330 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__check_procs_known_term_3_p_0(
#line 330 "termination.m"
  MR_Word transform_hlds__termination__Status_1,
#line 330 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__2_2,
#line 330 "termination.m"
  MR_Word transform_hlds__termination__ModuleInfo_3)
#line 330 "termination.m"
{
#line 333 "termination.m"
  while (MR_TRUE)
#line 333 "termination.m"
    {
#line 333 "termination.m"
      /* tailcall optimized into a loop */
#line 333 "termination.m"
      {
#line 333 "termination.m"
        MR_bool transform_hlds__termination__succeeded;

#line 333 "termination.m"
        if ((transform_hlds__termination__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 333 "termination.m"
          transform_hlds__termination__succeeded = MR_TRUE;
#line 333 "termination.m"
        else
#line 334 "termination.m"
          {
#line 334 "termination.m"
            MR_Word transform_hlds__termination__PPId_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__2_2, (MR_Integer) 0)));
#line 334 "termination.m"
            MR_Word transform_hlds__termination__PPIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__2_2, (MR_Integer) 1)));
#line 334 "termination.m"
            MR_Word transform_hlds__termination__ProcInfo_11;
#line 334 "termination.m"
            MR_Word transform_hlds__termination__MaybeTerm_12;
#line 334 "termination.m"
            MR_Word transform_hlds__termination__PPIdStatus_13;
#line 335 "termination.m"
            MR_Word transform_hlds__termination__V_10_10;

#line 335 "termination.m"
            {
#line 335 "termination.m"
              hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__termination__ModuleInfo_3, transform_hlds__termination__PPId_7, &transform_hlds__termination__V_10_10, &transform_hlds__termination__ProcInfo_11);
            }
#line 336 "termination.m"
            {
#line 336 "termination.m"
              hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__termination__ProcInfo_11, &transform_hlds__termination__MaybeTerm_12);
            }
#line 340 "termination.m"
            if ((transform_hlds__termination__MaybeTerm_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 338 "termination.m"
              {
#line 339 "termination.m"
                {
#line 339 "termination.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.termination", (MR_String) "predicate \140transform_hlds.termination.check_procs_known_term\'/3", (MR_String) "no termination info for procedure");
                }
#line 338 "termination.m"
              }
#line 340 "termination.m"
            else
#line 341 "termination.m"
              transform_hlds__termination__PPIdStatus_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__MaybeTerm_12, (MR_Integer) 0)));
#line 346 "termination.m"
            if (((MR_tag((MR_Word) transform_hlds__termination__Status_1)) == (MR_mktag((MR_Integer) 1))))
#line 348 "termination.m"
              {
#line 348 "termination.m"
                MR_Word transform_hlds__termination__V_17_17;

#line 348 "termination.m"
                transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__PPIdStatus_13)) == (MR_mktag((MR_Integer) 1)));
#line 348 "termination.m"
                if (transform_hlds__termination__succeeded)
#line 348 "termination.m"
                  transform_hlds__termination__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__PPIdStatus_13, (MR_Integer) 0)));
#line 348 "termination.m"
              }
#line 346 "termination.m"
            else
#line 345 "termination.m"
              transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__PPIdStatus_13)) == (MR_mktag((MR_Integer) 0)));
#line 334 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 350 "termination.m"
              {
#line 350 "termination.m"
                /* direct tailcall eliminated */
#line 350 "termination.m"
                {
#line 350 "termination.m"
                  MR_Word transform_hlds__termination__HeadVar__2__tmp_copy_2 = transform_hlds__termination__PPIds_8;

#line 350 "termination.m"
                  transform_hlds__termination__HeadVar__2_2 = transform_hlds__termination__HeadVar__2__tmp_copy_2;
#line 350 "termination.m"
                }
#line 350 "termination.m"
                continue;
#line 350 "termination.m"
              }
#line 334 "termination.m"
          }
#line 333 "termination.m"
        return transform_hlds__termination__succeeded;
#line 333 "termination.m"
      }
#line 333 "termination.m"
      break;
#line 333 "termination.m"
    }
#line 330 "termination.m"
}

#line 313 "termination.m"
static MR_Box MR_CALL 
transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0_2(
#line 313 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 313 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1)
#line 313 "termination.m"
{
#line 313 "termination.m"
  {
#line 313 "termination.m"
    MR_Box transform_hlds__termination__wrapper_arg_2;
#line 313 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;
#line 313 "termination.m"
    MR_Word transform_hlds__termination__conv0_HeadVar__2_42;

#line 313 "termination.m"
    {
#line 313 "termination.m"
      transform_hlds__termination__conv0_HeadVar__2_42 = transform_hlds__termination__IntroducedFrom__func__check_scc_pragmas_are_consistent__313__1_1_f_0(((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 313 "termination.m"
    transform_hlds__termination__wrapper_arg_2 = ((MR_Box) (transform_hlds__termination__conv0_HeadVar__2_42));
#line 313 "termination.m"
    return transform_hlds__termination__wrapper_arg_2;
#line 313 "termination.m"
  }
#line 313 "termination.m"
}

#line 280 "termination.m"
static MR_bool MR_CALL 
transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0_1(
#line 280 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 280 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1)
#line 280 "termination.m"
{
#line 280 "termination.m"
  {
#line 280 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 280 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;

#line 280 "termination.m"
    {
#line 280 "termination.m"
      return transform_hlds__termination__succeeded = transform_hlds__term_util__is_termination_known_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1));
    }
#line 280 "termination.m"
    return transform_hlds__termination__succeeded;
#line 280 "termination.m"
  }
#line 280 "termination.m"
}

#line 275 "termination.m"
static void MR_CALL 
transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0(
#line 275 "termination.m"
  MR_Word transform_hlds__termination__SCC_6,
#line 275 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26,
#line 275 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27,
#line 275 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_Specs_0_28,
#line 275 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_Specs_29)
#line 275 "termination.m"
{
#line 279 "termination.m"
  {
#line 279 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 279 "termination.m"
    MR_Word transform_hlds__termination__TypeCtorInfo_66_66;
#line 279 "termination.m"
    MR_Word transform_hlds__termination__SCCTerminationKnown_9;
#line 279 "termination.m"
    MR_Word transform_hlds__termination__SCCTerminationUnknown_10;
#line 279 "termination.m"
    MR_Word transform_hlds__termination__V_30_30;

#line 280 "termination.m"
    {
#line 280 "termination.m"
      transform_hlds__termination__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 280 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_30_30, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_6[0]));
#line 280 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_30_30, 1) = ((MR_Box) (transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0_1));
#line 280 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 280 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_30_30, 3) = ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26));
#line 280 "termination.m"
    }
#line 4255 "transform_hlds.termination.c"
    transform_hlds__termination__TypeCtorInfo_66_66 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 280 "termination.m"
    {
#line 280 "termination.m"
      mercury__list__filter_4_p_0(transform_hlds__termination__TypeCtorInfo_66_66, transform_hlds__termination__V_30_30, transform_hlds__termination__SCC_6, &transform_hlds__termination__SCCTerminationKnown_9, &transform_hlds__termination__SCCTerminationUnknown_10);
    }
#line 284 "termination.m"
    if ((transform_hlds__termination__SCCTerminationKnown_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 283 "termination.m"
      {
#line 283 "termination.m"
        *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26;
#line 283 "termination.m"
        *transform_hlds__termination__STATE_VARIABLE_Specs_29 = transform_hlds__termination__STATE_VARIABLE_Specs_0_28;
#line 283 "termination.m"
      }
#line 284 "termination.m"
    else
#line 285 "termination.m"
      {
#line 285 "termination.m"
        MR_Word transform_hlds__termination__KnownPPId_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__SCCTerminationKnown_9, (MR_Integer) 0)));
#line 285 "termination.m"
        MR_Word transform_hlds__termination__KnownProcInfo_14;
#line 285 "termination.m"
        MR_Word transform_hlds__termination__MaybeKnownTerm_15;
#line 285 "termination.m"
        MR_Word transform_hlds__termination__KnownTermStatus_16;
#line 285 "termination.m"
        MR_Word transform_hlds__termination__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__SCCTerminationKnown_9, (MR_Integer) 1)));
#line 286 "termination.m"
        MR_Word transform_hlds__termination__V_13_13;
#line 334 "termination.m"
        MR_Word transform_hlds__termination__PPId_72;
#line 334 "termination.m"
        MR_Word transform_hlds__termination__PPIds_73;
#line 334 "termination.m"
        MR_Word transform_hlds__termination__ProcInfo_76;
#line 334 "termination.m"
        MR_Word transform_hlds__termination__MaybeTerm_77;
#line 334 "termination.m"
        MR_Word transform_hlds__termination__PPIdStatus_78;
#line 335 "termination.m"
        MR_Word transform_hlds__termination__V_75_75;

#line 286 "termination.m"
        {
#line 286 "termination.m"
          hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26, transform_hlds__termination__KnownPPId_11, &transform_hlds__termination__V_13_13, &transform_hlds__termination__KnownProcInfo_14);
        }
#line 287 "termination.m"
        {
#line 287 "termination.m"
          hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__termination__KnownProcInfo_14, &transform_hlds__termination__MaybeKnownTerm_15);
        }
#line 291 "termination.m"
        if ((transform_hlds__termination__MaybeKnownTerm_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 289 "termination.m"
          {
#line 290 "termination.m"
            {
#line 290 "termination.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.termination", (MR_String) "predicate \140transform_hlds.termination.check_scc_pragmas_are_consistent\'/5", (MR_String) "no termination info found");
#line 290 "termination.m"
              return;
            }
#line 289 "termination.m"
          }
#line 291 "termination.m"
        else
#line 292 "termination.m"
          transform_hlds__termination__KnownTermStatus_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__MaybeKnownTerm_15, (MR_Integer) 0)));
#line 334 "termination.m"
        transform_hlds__termination__PPId_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__SCCTerminationKnown_9, (MR_Integer) 0)));
#line 334 "termination.m"
        transform_hlds__termination__PPIds_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__SCCTerminationKnown_9, (MR_Integer) 1)));
#line 335 "termination.m"
        {
#line 335 "termination.m"
          hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26, transform_hlds__termination__PPId_72, &transform_hlds__termination__V_75_75, &transform_hlds__termination__ProcInfo_76);
        }
#line 336 "termination.m"
        {
#line 336 "termination.m"
          hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__termination__ProcInfo_76, &transform_hlds__termination__MaybeTerm_77);
        }
#line 340 "termination.m"
        if ((transform_hlds__termination__MaybeTerm_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 338 "termination.m"
          {
#line 339 "termination.m"
            {
#line 339 "termination.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.termination", (MR_String) "predicate \140transform_hlds.termination.check_procs_known_term\'/3", (MR_String) "no termination info for procedure");
#line 339 "termination.m"
              return;
            }
#line 338 "termination.m"
          }
#line 340 "termination.m"
        else
#line 341 "termination.m"
          transform_hlds__termination__PPIdStatus_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__MaybeTerm_77, (MR_Integer) 0)));
#line 346 "termination.m"
        if (((MR_tag((MR_Word) transform_hlds__termination__KnownTermStatus_16)) == (MR_mktag((MR_Integer) 1))))
#line 348 "termination.m"
          {
#line 348 "termination.m"
            MR_Word transform_hlds__termination__V_82_82;

#line 348 "termination.m"
            transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__PPIdStatus_78)) == (MR_mktag((MR_Integer) 1)));
#line 348 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 348 "termination.m"
              transform_hlds__termination__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__PPIdStatus_78, (MR_Integer) 0)));
#line 348 "termination.m"
          }
#line 346 "termination.m"
        else
#line 345 "termination.m"
          transform_hlds__termination__succeeded = ((MR_tag((MR_Word) transform_hlds__termination__PPIdStatus_78)) == (MR_mktag((MR_Integer) 0)));
#line 334 "termination.m"
        if (transform_hlds__termination__succeeded)
#line 350 "termination.m"
          {
#line 350 "termination.m"
            transform_hlds__termination__succeeded = transform_hlds__termination__check_procs_known_term_3_p_0(transform_hlds__termination__KnownTermStatus_16, transform_hlds__termination__PPIds_73, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26);
          }
#line 303 "termination.m"
        if (transform_hlds__termination__succeeded)
#line 301 "termination.m"
          {
#line 301 "termination.m"
            {
#line 301 "termination.m"
              transform_hlds__termination__set_termination_infos_4_p_0(transform_hlds__termination__SCCTerminationUnknown_10, transform_hlds__termination__KnownTermStatus_16, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27);
            }
#line 301 "termination.m"
            *transform_hlds__termination__STATE_VARIABLE_Specs_29 = transform_hlds__termination__STATE_VARIABLE_Specs_0_28;
#line 301 "termination.m"
          }
#line 303 "termination.m"
        else
#line 308 "termination.m"
          {
#line 308 "termination.m"
            MR_Word transform_hlds__termination__Context_17;
#line 308 "termination.m"
            MR_Word transform_hlds__termination__NewTermStatus_18;
#line 308 "termination.m"
            MR_Word transform_hlds__termination__PredIds_19;
#line 308 "termination.m"
            MR_Word transform_hlds__termination__PredNamePieces_22;
#line 308 "termination.m"
            MR_Word transform_hlds__termination__Pieces_23;
#line 308 "termination.m"
            MR_Word transform_hlds__termination__Msg_24;
#line 308 "termination.m"
            MR_Word transform_hlds__termination__Spec_25;
#line 308 "termination.m"
            MR_Word transform_hlds__termination__V_35_35;
#line 308 "termination.m"
            MR_Word transform_hlds__termination__V_36_36;
#line 308 "termination.m"
            MR_Word transform_hlds__termination__V_44_44;
#line 308 "termination.m"
            MR_Word transform_hlds__termination__V_54_54;
#line 308 "termination.m"
            MR_Word transform_hlds__termination__V_55_55;
#line 308 "termination.m"
            MR_Word transform_hlds__termination__V_59_59;

#line 307 "termination.m"
            {
#line 307 "termination.m"
              transform_hlds__term_util__get_context_from_scc_3_p_0(transform_hlds__termination__SCCTerminationKnown_9, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26, &transform_hlds__termination__Context_17);
            }
#line 309 "termination.m"
            {
#line 309 "termination.m"
              transform_hlds__termination__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 309 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__V_36_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 309 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__V_36_36, 1) = ((MR_Box) (transform_hlds__termination__Context_17));
#line 309 "termination.m"
            }
#line 310 "termination.m"
            {
#line 310 "termination.m"
              transform_hlds__termination__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 310 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_35_35, 0) = ((MR_Box) (transform_hlds__termination__V_36_36));
#line 310 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 310 "termination.m"
            }
#line 309 "termination.m"
            {
#line 309 "termination.m"
              transform_hlds__termination__NewTermStatus_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 309 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__NewTermStatus_18, 0) = ((MR_Box) (transform_hlds__termination__V_35_35));
#line 309 "termination.m"
            }
#line 311 "termination.m"
            {
#line 311 "termination.m"
              transform_hlds__termination__set_termination_infos_4_p_0(transform_hlds__termination__SCC_6, transform_hlds__termination__NewTermStatus_18, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_26, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27);
            }
#line 313 "termination.m"
            {
#line 313 "termination.m"
              transform_hlds__termination__PredIds_19 = mercury__list__map_2_f_0(transform_hlds__termination__TypeCtorInfo_66_66, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &transform_hlds__termination_scalar_common_2[3], transform_hlds__termination__SCCTerminationKnown_9);
            }
#line 315 "termination.m"
            {
#line 315 "termination.m"
              transform_hlds__termination__PredNamePieces_22 = hlds__hlds_error_util__describe_several_pred_names_3_f_0(*transform_hlds__termination__STATE_VARIABLE_ModuleInfo_27, (MR_Integer) 0, transform_hlds__termination__PredIds_19);
            }
#line 318 "termination.m"
            {
#line 318 "termination.m"
              transform_hlds__termination__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 318 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_44_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[33])));
#line 318 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_44_44, 1) = ((MR_Box) (transform_hlds__termination__PredNamePieces_22));
#line 318 "termination.m"
            }
#line 318 "termination.m"
            {
#line 318 "termination.m"
              transform_hlds__termination__Pieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__termination__V_44_44, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[24]));
            }
#line 321 "termination.m"
            {
#line 321 "termination.m"
              transform_hlds__termination__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 321 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__V_55_55, 0) = ((MR_Box) (transform_hlds__termination__Pieces_23));
#line 321 "termination.m"
            }
#line 321 "termination.m"
            {
#line 321 "termination.m"
              transform_hlds__termination__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 321 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_54_54, 0) = ((MR_Box) (transform_hlds__termination__V_55_55));
#line 321 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 321 "termination.m"
            }
#line 321 "termination.m"
            {
#line 321 "termination.m"
              transform_hlds__termination__Msg_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 321 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__Msg_24, 0) = ((MR_Box) (transform_hlds__termination__Context_17));
#line 321 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__Msg_24, 1) = ((MR_Box) (transform_hlds__termination__V_54_54));
#line 321 "termination.m"
            }
#line 322 "termination.m"
            {
#line 322 "termination.m"
              transform_hlds__termination__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 322 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_59_59, 0) = ((MR_Box) (transform_hlds__termination__Msg_24));
#line 322 "termination.m"
              MR_hl_field(MR_mktag(1), transform_hlds__termination__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 322 "termination.m"
            }
#line 322 "termination.m"
            {
#line 322 "termination.m"
              transform_hlds__termination__Spec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 322 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 322 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 322 "termination.m"
              MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_25, 2) = ((MR_Box) (transform_hlds__termination__V_59_59));
#line 322 "termination.m"
            }
#line 323 "termination.m"
            {
#line 323 "termination.m"
              MR_Word base;
#line 323 "termination.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 323 "termination.m"
              *transform_hlds__termination__STATE_VARIABLE_Specs_29 = base;
#line 323 "termination.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__termination__Spec_25));
#line 323 "termination.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_Specs_0_28));
#line 323 "termination.m"
            }
#line 308 "termination.m"
          }
#line 285 "termination.m"
      }
#line 279 "termination.m"
  }
#line 275 "termination.m"
}

#line 155 "termination.m"
static void MR_CALL 
transform_hlds__termination__check_foreign_code_attributes_2_5_p_0(
#line 155 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__1_1,
#line 155 "termination.m"
  MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2,
#line 155 "termination.m"
  MR_Word * transform_hlds__termination__STATE_VARIABLE_ModuleInfo_3,
#line 155 "termination.m"
  MR_Word transform_hlds__termination__HeadVar__4_4,
#line 155 "termination.m"
  MR_Word * transform_hlds__termination__HeadVar__5_5)
#line 155 "termination.m"
{
#line 159 "termination.m"
  {
#line 159 "termination.m"
    MR_bool transform_hlds__termination__succeeded;

#line 159 "termination.m"
    if ((transform_hlds__termination__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 159 "termination.m"
      {
#line 160 "termination.m"
        {
#line 160 "termination.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.termination", (MR_String) "predicate \140transform_hlds.termination.check_foreign_code_attributes_2\'/5", (MR_String) "empty SCC");
#line 160 "termination.m"
          return;
        }
#line 159 "termination.m"
      }
#line 159 "termination.m"
    else
#line 159 "termination.m"
      {
#line 159 "termination.m"
        MR_Word transform_hlds__termination__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 1)));
#line 159 "termination.m"
        MR_Word transform_hlds__termination__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__HeadVar__1_1, (MR_Integer) 0)));

#line 159 "termination.m"
        if ((transform_hlds__termination__V_163_163 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 161 "termination.m"
          {
#line 161 "termination.m"
            MR_Word transform_hlds__termination__PredInfo_19;
#line 161 "termination.m"
            MR_Word transform_hlds__termination__STATE_VARIABLE_ProcInfo_45_45;
#line 241 "termination.m"
            MR_Word transform_hlds__termination__Attributes_21;
#line 165 "termination.m"
            MR_Word transform_hlds__termination__Goal_20;
#line 165 "termination.m"
            MR_Word transform_hlds__termination__V_46_46;
#line 166 "termination.m"
            MR_Word transform_hlds__termination___GoalInfo_28;
#line 167 "termination.m"
            MR_Word transform_hlds__termination__V_22_22;
#line 167 "termination.m"
            MR_Integer transform_hlds__termination__V_23_23;
#line 167 "termination.m"
            MR_Word transform_hlds__termination__V_24_24;
#line 167 "termination.m"
            MR_Word transform_hlds__termination__V_25_25;
#line 167 "termination.m"
            MR_Word transform_hlds__termination__V_26_26;
#line 167 "termination.m"
            MR_Word transform_hlds__termination__V_27_27;

#line 163 "termination.m"
            {
#line 163 "termination.m"
              hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2, transform_hlds__termination__V_164_164, &transform_hlds__termination__PredInfo_19, &transform_hlds__termination__STATE_VARIABLE_ProcInfo_45_45);
            }
#line 165 "termination.m"
            {
#line 165 "termination.m"
              hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__termination__STATE_VARIABLE_ProcInfo_45_45, &transform_hlds__termination__Goal_20);
            }
#line 166 "termination.m"
            transform_hlds__termination__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__Goal_20, (MR_Integer) 0)));
#line 166 "termination.m"
            transform_hlds__termination___GoalInfo_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__Goal_20, (MR_Integer) 1)));
#line 167 "termination.m"
            transform_hlds__termination__succeeded = ((((MR_tag((MR_Word) transform_hlds__termination__V_46_46)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__V_46_46, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 167 "termination.m"
            if (transform_hlds__termination__succeeded)
#line 167 "termination.m"
              {
#line 167 "termination.m"
                transform_hlds__termination__Attributes_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__V_46_46, (MR_Integer) 1)));
#line 167 "termination.m"
                transform_hlds__termination__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__V_46_46, (MR_Integer) 2)));
#line 167 "termination.m"
                transform_hlds__termination__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__termination__V_46_46, (MR_Integer) 3)));
#line 167 "termination.m"
                transform_hlds__termination__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__V_46_46, (MR_Integer) 4)));
#line 167 "termination.m"
                transform_hlds__termination__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__V_46_46, (MR_Integer) 5)));
#line 167 "termination.m"
                transform_hlds__termination__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__V_46_46, (MR_Integer) 6)));
#line 167 "termination.m"
                transform_hlds__termination__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__termination__V_46_46, (MR_Integer) 7)));
#line 170 "termination.m"
                {
#line 170 "termination.m"
                  MR_Word transform_hlds__termination__MaybeTermination_29;
#line 170 "termination.m"
                  MR_Word transform_hlds__termination__Context_30;
#line 170 "termination.m"
                  MR_Word transform_hlds__termination__STATE_VARIABLE_ProcInfo_117_117;

#line 170 "termination.m"
                  {
#line 170 "termination.m"
                    hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__termination__STATE_VARIABLE_ProcInfo_45_45, &transform_hlds__termination__MaybeTermination_29);
                  }
#line 171 "termination.m"
                  {
#line 171 "termination.m"
                    hlds__hlds_pred__proc_info_get_context_2_p_0(transform_hlds__termination__STATE_VARIABLE_ProcInfo_45_45, &transform_hlds__termination__Context_30);
                  }
#line 183 "termination.m"
                  if ((transform_hlds__termination__MaybeTermination_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 173 "termination.m"
                    {
#line 174 "termination.m"
                      {
#line 174 "termination.m"
                        transform_hlds__termination__succeeded = transform_hlds__term_util__attributes_imply_termination_1_p_0(transform_hlds__termination__Attributes_21);
                      }
#line 177 "termination.m"
                      if (transform_hlds__termination__succeeded)
#line 175 "termination.m"
                        {
#line 175 "termination.m"
                          mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 176 "termination.m"
                          {
#line 176 "termination.m"
                            hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_5[1]), transform_hlds__termination__STATE_VARIABLE_ProcInfo_45_45, &transform_hlds__termination__STATE_VARIABLE_ProcInfo_117_117);
                          }
#line 175 "termination.m"
                        }
#line 177 "termination.m"
                      else
#line 179 "termination.m"
                        {
#line 179 "termination.m"
                          MR_Word transform_hlds__termination__TermErr_32;
#line 179 "termination.m"
                          MR_Word transform_hlds__termination__V_118_118;
#line 179 "termination.m"
                          MR_Word transform_hlds__termination__V_119_119;
#line 179 "termination.m"
                          MR_Word transform_hlds__termination__V_120_120;
#line 179 "termination.m"
                          MR_Word transform_hlds__termination__TermStatus_124;

#line 179 "termination.m"
                          {
#line 179 "termination.m"
                            transform_hlds__termination__V_118_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 179 "termination.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__termination__V_118_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 179 "termination.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__termination__V_118_118, 1) = ((MR_Box) (transform_hlds__termination__V_164_164));
#line 179 "termination.m"
                          }
#line 178 "termination.m"
                          {
#line 178 "termination.m"
                            transform_hlds__termination__TermErr_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 178 "termination.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__termination__TermErr_32, 0) = ((MR_Box) (transform_hlds__termination__V_118_118));
#line 178 "termination.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__termination__TermErr_32, 1) = ((MR_Box) (transform_hlds__termination__Context_30));
#line 178 "termination.m"
                          }
#line 180 "termination.m"
                          {
#line 180 "termination.m"
                            transform_hlds__termination__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 180 "termination.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__termination__V_120_120, 0) = ((MR_Box) (transform_hlds__termination__TermErr_32));
#line 180 "termination.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__termination__V_120_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 180 "termination.m"
                          }
#line 180 "termination.m"
                          {
#line 180 "termination.m"
                            transform_hlds__termination__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 180 "termination.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__termination__V_119_119, 0) = ((MR_Box) (transform_hlds__termination__V_120_120));
#line 180 "termination.m"
                          }
#line 180 "termination.m"
                          {
#line 180 "termination.m"
                            transform_hlds__termination__TermStatus_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 180 "termination.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__termination__TermStatus_124, 0) = ((MR_Box) (transform_hlds__termination__V_119_119));
#line 180 "termination.m"
                          }
#line 181 "termination.m"
                          {
#line 181 "termination.m"
                            hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(transform_hlds__termination__TermStatus_124, transform_hlds__termination__STATE_VARIABLE_ProcInfo_45_45, &transform_hlds__termination__STATE_VARIABLE_ProcInfo_117_117);
                          }
#line 179 "termination.m"
                        }
#line 173 "termination.m"
                      *transform_hlds__termination__HeadVar__5_5 = transform_hlds__termination__HeadVar__4_4;
#line 173 "termination.m"
                    }
#line 183 "termination.m"
                  else
#line 183 "termination.m"
                    {
#line 183 "termination.m"
                      MR_Word transform_hlds__termination__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__MaybeTermination_29, (MR_Integer) 0)));

#line 183 "termination.m"
                      if (((MR_tag((MR_Word) transform_hlds__termination__V_165_165)) == (MR_mktag((MR_Integer) 1))))
#line 214 "termination.m"
                        {
#line 214 "termination.m"
                          MR_Word transform_hlds__termination__TermErrs0_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__termination__V_165_165, (MR_Integer) 0)));
#line 215 "termination.m"
                          MR_Word transform_hlds__termination__V_48_48;

#line 215 "termination.m"
                          {
#line 215 "termination.m"
                            transform_hlds__termination__V_48_48 = parse_tree__prog_data__get_terminates_1_f_0(transform_hlds__termination__Attributes_21);
                          }
#line 215 "termination.m"
                          transform_hlds__termination__succeeded = (transform_hlds__termination__V_48_48 == (MR_Integer) 0);
#line 235 "termination.m"
                          if (transform_hlds__termination__succeeded)
#line 217 "termination.m"
                            {
#line 217 "termination.m"
                              MR_Word transform_hlds__termination__TermErrs_39;
#line 217 "termination.m"
                              MR_Word transform_hlds__termination__V_50_50;
#line 217 "termination.m"
                              MR_Word transform_hlds__termination__V_53_53;
#line 217 "termination.m"
                              MR_Word transform_hlds__termination__V_72_72;
#line 217 "termination.m"
                              MR_Word transform_hlds__termination__V_73_73;
#line 217 "termination.m"
                              MR_Word transform_hlds__termination__V_77_77;
#line 217 "termination.m"
                              MR_Word transform_hlds__termination__TermStatus_131;
#line 217 "termination.m"
                              MR_Word transform_hlds__termination__TermErr_132;
#line 217 "termination.m"
                              MR_Word transform_hlds__termination__ProcNamePieces_133;
#line 217 "termination.m"
                              MR_Word transform_hlds__termination__Pieces_134;
#line 217 "termination.m"
                              MR_Word transform_hlds__termination__Msg_135;
#line 217 "termination.m"
                              MR_Word transform_hlds__termination__Spec_136;

#line 216 "termination.m"
                              {
#line 216 "termination.m"
                                transform_hlds__termination__TermErr_132 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 216 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__TermErr_132, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 216 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__TermErr_132, 1) = ((MR_Box) (transform_hlds__termination__Context_30));
#line 216 "termination.m"
                              }
#line 218 "termination.m"
                              {
#line 218 "termination.m"
                                transform_hlds__termination__TermErrs_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 218 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__TermErrs_39, 0) = ((MR_Box) (transform_hlds__termination__TermErr_132));
#line 218 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__TermErrs_39, 1) = ((MR_Box) (transform_hlds__termination__TermErrs0_38));
#line 218 "termination.m"
                              }
#line 219 "termination.m"
                              {
#line 219 "termination.m"
                                transform_hlds__termination__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 219 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_50_50, 0) = ((MR_Box) (transform_hlds__termination__TermErrs_39));
#line 219 "termination.m"
                              }
#line 219 "termination.m"
                              {
#line 219 "termination.m"
                                transform_hlds__termination__TermStatus_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 219 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__TermStatus_131, 0) = ((MR_Box) (transform_hlds__termination__V_50_50));
#line 219 "termination.m"
                              }
#line 221 "termination.m"
                              {
#line 221 "termination.m"
                                hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(transform_hlds__termination__TermStatus_131, transform_hlds__termination__STATE_VARIABLE_ProcInfo_45_45, &transform_hlds__termination__STATE_VARIABLE_ProcInfo_117_117);
                              }
#line 223 "termination.m"
                              {
#line 223 "termination.m"
                                transform_hlds__termination__ProcNamePieces_133 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2, (MR_Integer) 0, transform_hlds__termination__V_164_164);
                              }
#line 226 "termination.m"
                              {
#line 226 "termination.m"
                                transform_hlds__termination__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 226 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_53_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[33])));
#line 226 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_53_53, 1) = ((MR_Box) (transform_hlds__termination__ProcNamePieces_133));
#line 226 "termination.m"
                              }
#line 226 "termination.m"
                              {
#line 226 "termination.m"
                                transform_hlds__termination__Pieces_134 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__termination__V_53_53, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[14]));
                              }
#line 231 "termination.m"
                              {
#line 231 "termination.m"
                                transform_hlds__termination__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 231 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__V_73_73, 0) = ((MR_Box) (transform_hlds__termination__Pieces_134));
#line 231 "termination.m"
                              }
#line 231 "termination.m"
                              {
#line 231 "termination.m"
                                transform_hlds__termination__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 231 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_72_72, 0) = ((MR_Box) (transform_hlds__termination__V_73_73));
#line 231 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 231 "termination.m"
                              }
#line 231 "termination.m"
                              {
#line 231 "termination.m"
                                transform_hlds__termination__Msg_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 231 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__Msg_135, 0) = ((MR_Box) (transform_hlds__termination__Context_30));
#line 231 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__Msg_135, 1) = ((MR_Box) (transform_hlds__termination__V_72_72));
#line 231 "termination.m"
                              }
#line 233 "termination.m"
                              {
#line 233 "termination.m"
                                transform_hlds__termination__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 233 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_77_77, 0) = ((MR_Box) (transform_hlds__termination__Msg_135));
#line 233 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 233 "termination.m"
                              }
#line 232 "termination.m"
                              {
#line 232 "termination.m"
                                transform_hlds__termination__Spec_136 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 232 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_136, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 232 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_136, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 232 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_136, 2) = ((MR_Box) (transform_hlds__termination__V_77_77));
#line 232 "termination.m"
                              }
#line 234 "termination.m"
                              {
#line 234 "termination.m"
                                MR_Word base;
#line 234 "termination.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 234 "termination.m"
                                *transform_hlds__termination__HeadVar__5_5 = base;
#line 234 "termination.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__termination__Spec_136));
#line 234 "termination.m"
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__termination__HeadVar__4_4));
#line 234 "termination.m"
                              }
#line 217 "termination.m"
                            }
#line 235 "termination.m"
                          else
#line 236 "termination.m"
                            {
#line 236 "termination.m"
                              transform_hlds__termination__STATE_VARIABLE_ProcInfo_117_117 = transform_hlds__termination__STATE_VARIABLE_ProcInfo_45_45;
#line 236 "termination.m"
                              *transform_hlds__termination__HeadVar__5_5 = transform_hlds__termination__HeadVar__4_4;
#line 236 "termination.m"
                            }
#line 214 "termination.m"
                        }
#line 183 "termination.m"
                      else
#line 207 "termination.m"
                        {
#line 188 "termination.m"
                          MR_Word transform_hlds__termination__V_81_81;

#line 188 "termination.m"
                          {
#line 188 "termination.m"
                            transform_hlds__termination__V_81_81 = parse_tree__prog_data__get_terminates_1_f_0(transform_hlds__termination__Attributes_21);
                          }
#line 188 "termination.m"
                          transform_hlds__termination__succeeded = (transform_hlds__termination__V_81_81 == (MR_Integer) 1);
#line 207 "termination.m"
                          if (transform_hlds__termination__succeeded)
#line 190 "termination.m"
                            {
#line 190 "termination.m"
                              MR_Word transform_hlds__termination__ProcNamePieces_34;
#line 190 "termination.m"
                              MR_Word transform_hlds__termination__Pieces_35;
#line 190 "termination.m"
                              MR_Word transform_hlds__termination__Msg_36;
#line 190 "termination.m"
                              MR_Word transform_hlds__termination__Spec_37;
#line 190 "termination.m"
                              MR_Word transform_hlds__termination__V_83_83;
#line 190 "termination.m"
                              MR_Word transform_hlds__termination__V_84_84;
#line 190 "termination.m"
                              MR_Word transform_hlds__termination__V_88_88;
#line 190 "termination.m"
                              MR_Word transform_hlds__termination__V_107_107;
#line 190 "termination.m"
                              MR_Word transform_hlds__termination__V_108_108;
#line 190 "termination.m"
                              MR_Word transform_hlds__termination__V_112_112;
#line 190 "termination.m"
                              MR_Word transform_hlds__termination__TermStatus_125;
#line 190 "termination.m"
                              MR_Word transform_hlds__termination__TermErr_126;

#line 189 "termination.m"
                              {
#line 189 "termination.m"
                                transform_hlds__termination__TermErr_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 189 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__TermErr_126, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 189 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__TermErr_126, 1) = ((MR_Box) (transform_hlds__termination__Context_30));
#line 189 "termination.m"
                              }
#line 191 "termination.m"
                              {
#line 191 "termination.m"
                                transform_hlds__termination__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 191 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_84_84, 0) = ((MR_Box) (transform_hlds__termination__TermErr_126));
#line 191 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 191 "termination.m"
                              }
#line 191 "termination.m"
                              {
#line 191 "termination.m"
                                transform_hlds__termination__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 191 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_83_83, 0) = ((MR_Box) (transform_hlds__termination__V_84_84));
#line 191 "termination.m"
                              }
#line 191 "termination.m"
                              {
#line 191 "termination.m"
                                transform_hlds__termination__TermStatus_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 191 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__TermStatus_125, 0) = ((MR_Box) (transform_hlds__termination__V_83_83));
#line 191 "termination.m"
                              }
#line 193 "termination.m"
                              {
#line 193 "termination.m"
                                hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(transform_hlds__termination__TermStatus_125, transform_hlds__termination__STATE_VARIABLE_ProcInfo_45_45, &transform_hlds__termination__STATE_VARIABLE_ProcInfo_117_117);
                              }
#line 195 "termination.m"
                              {
#line 195 "termination.m"
                                transform_hlds__termination__ProcNamePieces_34 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2, (MR_Integer) 0, transform_hlds__termination__V_164_164);
                              }
#line 198 "termination.m"
                              {
#line 198 "termination.m"
                                transform_hlds__termination__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 198 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_88_88, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[33])));
#line 198 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_88_88, 1) = ((MR_Box) (transform_hlds__termination__ProcNamePieces_34));
#line 198 "termination.m"
                              }
#line 198 "termination.m"
                              {
#line 198 "termination.m"
                                transform_hlds__termination__Pieces_35 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__termination__V_88_88, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[20]));
                              }
#line 203 "termination.m"
                              {
#line 203 "termination.m"
                                transform_hlds__termination__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 203 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__V_108_108, 0) = ((MR_Box) (transform_hlds__termination__Pieces_35));
#line 203 "termination.m"
                              }
#line 203 "termination.m"
                              {
#line 203 "termination.m"
                                transform_hlds__termination__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 203 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_107_107, 0) = ((MR_Box) (transform_hlds__termination__V_108_108));
#line 203 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_107_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 203 "termination.m"
                              }
#line 203 "termination.m"
                              {
#line 203 "termination.m"
                                transform_hlds__termination__Msg_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 203 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__Msg_36, 0) = ((MR_Box) (transform_hlds__termination__Context_30));
#line 203 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__Msg_36, 1) = ((MR_Box) (transform_hlds__termination__V_107_107));
#line 203 "termination.m"
                              }
#line 205 "termination.m"
                              {
#line 205 "termination.m"
                                transform_hlds__termination__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 205 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_112_112, 0) = ((MR_Box) (transform_hlds__termination__Msg_36));
#line 205 "termination.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__termination__V_112_112, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 205 "termination.m"
                              }
#line 204 "termination.m"
                              {
#line 204 "termination.m"
                                transform_hlds__termination__Spec_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 204 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 204 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 204 "termination.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__termination__Spec_37, 2) = ((MR_Box) (transform_hlds__termination__V_112_112));
#line 204 "termination.m"
                              }
#line 206 "termination.m"
                              {
#line 206 "termination.m"
                                MR_Word base;
#line 206 "termination.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 206 "termination.m"
                                *transform_hlds__termination__HeadVar__5_5 = base;
#line 206 "termination.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__termination__Spec_37));
#line 206 "termination.m"
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__termination__HeadVar__4_4));
#line 206 "termination.m"
                              }
#line 190 "termination.m"
                            }
#line 207 "termination.m"
                          else
#line 208 "termination.m"
                            {
#line 208 "termination.m"
                              transform_hlds__termination__STATE_VARIABLE_ProcInfo_117_117 = transform_hlds__termination__STATE_VARIABLE_ProcInfo_45_45;
#line 208 "termination.m"
                              *transform_hlds__termination__HeadVar__5_5 = transform_hlds__termination__HeadVar__4_4;
#line 208 "termination.m"
                            }
#line 207 "termination.m"
                        }
#line 183 "termination.m"
                    }
#line 239 "termination.m"
                  {
#line 239 "termination.m"
                    hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(transform_hlds__termination__V_164_164, transform_hlds__termination__PredInfo_19, transform_hlds__termination__STATE_VARIABLE_ProcInfo_117_117, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_3);
#line 239 "termination.m"
                    return;
                  }
#line 170 "termination.m"
                }
#line 167 "termination.m"
              }
#line 167 "termination.m"
            else
#line 242 "termination.m"
              {
#line 242 "termination.m"
                *transform_hlds__termination__HeadVar__5_5 = transform_hlds__termination__HeadVar__4_4;
#line 242 "termination.m"
                *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_3 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2;
#line 242 "termination.m"
              }
#line 161 "termination.m"
          }
#line 159 "termination.m"
        else
#line 245 "termination.m"
          {
#line 245 "termination.m"
            *transform_hlds__termination__HeadVar__5_5 = transform_hlds__termination__HeadVar__4_4;
#line 245 "termination.m"
            *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_3 = transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_2;
#line 245 "termination.m"
          }
#line 159 "termination.m"
      }
#line 159 "termination.m"
  }
#line 155 "termination.m"
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
#line 916 "termination.m"
  {
#line 916 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 916 "termination.m"
    MR_Word transform_hlds__termination__PredInfo_8;
#line 916 "termination.m"
    MR_Word transform_hlds__termination__ImportStatus_9;
#line 916 "termination.m"
    MR_Word transform_hlds__termination__TypeSpecInfo_10;
#line 916 "termination.m"
    MR_Word transform_hlds__termination__TypeSpecForcePreds_12;
#line 920 "termination.m"
    MR_Word transform_hlds__termination__V_11_11;
#line 920 "termination.m"
    MR_Word transform_hlds__termination__V_13_13;
#line 920 "termination.m"
    MR_Word transform_hlds__termination__V_14_14;
#line 933 "termination.m"
    MR_Word transform_hlds__termination__TypeCtorInfo_25_25;

#line 917 "termination.m"
    {
#line 917 "termination.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__termination__ModuleInfo_5, transform_hlds__termination__PredId_6, &transform_hlds__termination__PredInfo_8);
    }
#line 918 "termination.m"
    {
#line 918 "termination.m"
      hlds__hlds_pred__pred_info_get_import_status_2_p_0(transform_hlds__termination__PredInfo_8, &transform_hlds__termination__ImportStatus_9);
    }
#line 919 "termination.m"
    {
#line 919 "termination.m"
      hlds__hlds_module__module_info_get_type_spec_info_2_p_0(transform_hlds__termination__ModuleInfo_5, &transform_hlds__termination__TypeSpecInfo_10);
    }
#line 920 "termination.m"
    transform_hlds__termination__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__TypeSpecInfo_10, (MR_Integer) 0)));
#line 920 "termination.m"
    transform_hlds__termination__TypeSpecForcePreds_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__TypeSpecInfo_10, (MR_Integer) 1)));
#line 920 "termination.m"
    transform_hlds__termination__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__TypeSpecInfo_10, (MR_Integer) 2)));
#line 920 "termination.m"
    transform_hlds__termination__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__TypeSpecInfo_10, (MR_Integer) 3)));
#line 925 "termination.m"
    if ((transform_hlds__termination__ImportStatus_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 924 "termination.m"
      transform_hlds__termination__succeeded = MR_TRUE;
#line 925 "termination.m"
    else
#line 925 "termination.m"
    if ((transform_hlds__termination__ImportStatus_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 926 "termination.m"
      transform_hlds__termination__succeeded = MR_TRUE;
#line 925 "termination.m"
    else
#line 925 "termination.m"
      transform_hlds__termination__succeeded = MR_FALSE;
#line 927 "termination.m"
    if (transform_hlds__termination__succeeded)
#line 927 "termination.m"
      {
#line 928 "termination.m"
        {
#line 928 "termination.m"
          transform_hlds__termination__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(transform_hlds__termination__PredInfo_8);
        }
#line 928 "termination.m"
        transform_hlds__termination__succeeded = !(transform_hlds__termination__succeeded);
#line 927 "termination.m"
        if (transform_hlds__termination__succeeded)
#line 927 "termination.m"
          {
#line 5280 "transform_hlds.termination.c"
            transform_hlds__termination__TypeCtorInfo_25_25 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 933 "termination.m"
            {
#line 933 "termination.m"
              transform_hlds__termination__succeeded = mercury__set__member_2_p_0(transform_hlds__termination__TypeCtorInfo_25_25, ((MR_Box) (transform_hlds__termination__PredId_6)), transform_hlds__termination__TypeSpecForcePreds_12);
            }
#line 933 "termination.m"
            transform_hlds__termination__succeeded = !(transform_hlds__termination__succeeded);
#line 927 "termination.m"
          }
#line 927 "termination.m"
      }
#line 944 "termination.m"
    if (transform_hlds__termination__succeeded)
#line 935 "termination.m"
      {
#line 935 "termination.m"
        MR_String transform_hlds__termination__PredName_15;
#line 935 "termination.m"
        MR_Word transform_hlds__termination__ProcIds_16;
#line 935 "termination.m"
        MR_Word transform_hlds__termination__PredOrFunc_17;
#line 935 "termination.m"
        MR_Word transform_hlds__termination__ModuleName_18;
#line 935 "termination.m"
        MR_Word transform_hlds__termination__ProcTable_19;
#line 935 "termination.m"
        MR_Word transform_hlds__termination__Context_20;
#line 935 "termination.m"
        MR_Word transform_hlds__termination__SymName_21;

#line 935 "termination.m"
        {
#line 935 "termination.m"
          transform_hlds__termination__PredName_15 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__termination__PredInfo_8);
        }
#line 936 "termination.m"
        {
#line 936 "termination.m"
          transform_hlds__termination__ProcIds_16 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__termination__PredInfo_8);
        }
#line 937 "termination.m"
        {
#line 937 "termination.m"
          transform_hlds__termination__PredOrFunc_17 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__termination__PredInfo_8);
        }
#line 938 "termination.m"
        {
#line 938 "termination.m"
          transform_hlds__termination__ModuleName_18 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__termination__PredInfo_8);
        }
#line 939 "termination.m"
        {
#line 939 "termination.m"
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__termination__PredInfo_8, &transform_hlds__termination__ProcTable_19);
        }
#line 940 "termination.m"
        {
#line 940 "termination.m"
          hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__termination__PredInfo_8, &transform_hlds__termination__Context_20);
        }
#line 941 "termination.m"
        {
#line 941 "termination.m"
          transform_hlds__termination__SymName_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 941 "termination.m"
          MR_hl_field(MR_mktag(1), transform_hlds__termination__SymName_21, 0) = ((MR_Box) (transform_hlds__termination__ModuleName_18));
#line 941 "termination.m"
          MR_hl_field(MR_mktag(1), transform_hlds__termination__SymName_21, 1) = ((MR_Box) (transform_hlds__termination__PredName_15));
#line 941 "termination.m"
        }
#line 942 "termination.m"
        {
#line 942 "termination.m"
          transform_hlds__termination__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_116_101_114_109_105_110_97_116_105_111_110_95_105_110_102_111_95_95_91_49_93_95_48_8_p_0(transform_hlds__termination__ProcIds_16, transform_hlds__termination__ProcTable_19, transform_hlds__termination__PredOrFunc_17, transform_hlds__termination__SymName_21, transform_hlds__termination__Context_20);
#line 942 "termination.m"
          return;
        }
#line 935 "termination.m"
      }
#line 944 "termination.m"
    else
#line 944 "termination.m"
      {
#line 944 "termination.m"
      }
#line 916 "termination.m"
  }
#line 53 "termination.m"
}

#line 121 "termination.m"
static void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_5_p_0_3(
#line 121 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 121 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1,
#line 121 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_2,
#line 121 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_3,
#line 121 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_4,
#line 121 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_5)
#line 121 "termination.m"
{
#line 121 "termination.m"
  {
#line 121 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;
#line 121 "termination.m"
    MR_Word transform_hlds__termination__conv8_STATE_VARIABLE_ModuleInfo_48;

#line 121 "termination.m"
    {
#line 121 "termination.m"
      transform_hlds__termination__analyse_termination_in_scc_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__termination__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__termination__wrapper_arg_1), ((MR_Word) transform_hlds__termination__wrapper_arg_2), &transform_hlds__termination__conv8_STATE_VARIABLE_ModuleInfo_48);
    }
#line 121 "termination.m"
    *transform_hlds__termination__wrapper_arg_3 = ((MR_Box) (transform_hlds__termination__conv8_STATE_VARIABLE_ModuleInfo_48));
#line 121 "termination.m"
  }
#line 121 "termination.m"
}

#line 273 "termination.m"
static void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_5_p_0_2(
#line 273 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 273 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1,
#line 273 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_2,
#line 273 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_3,
#line 273 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_4,
#line 273 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_5)
#line 273 "termination.m"
{
#line 273 "termination.m"
  {
#line 273 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;
#line 273 "termination.m"
    MR_Word transform_hlds__termination__conv5_STATE_VARIABLE_ModuleInfo_27;
#line 273 "termination.m"
    MR_Word transform_hlds__termination__conv4_STATE_VARIABLE_Specs_29;

#line 273 "termination.m"
    {
#line 273 "termination.m"
      transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0(((MR_Word) transform_hlds__termination__wrapper_arg_1), ((MR_Word) transform_hlds__termination__wrapper_arg_2), &transform_hlds__termination__conv5_STATE_VARIABLE_ModuleInfo_27, ((MR_Word) transform_hlds__termination__wrapper_arg_4), &transform_hlds__termination__conv4_STATE_VARIABLE_Specs_29);
    }
#line 273 "termination.m"
    *transform_hlds__termination__wrapper_arg_3 = ((MR_Box) (transform_hlds__termination__conv5_STATE_VARIABLE_ModuleInfo_27));
#line 273 "termination.m"
    *transform_hlds__termination__wrapper_arg_5 = ((MR_Box) (transform_hlds__termination__conv4_STATE_VARIABLE_Specs_29));
#line 273 "termination.m"
  }
#line 273 "termination.m"
}

#line 153 "termination.m"
static void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_5_p_0_1(
#line 153 "termination.m"
  MR_Box transform_hlds__termination__closure_arg,
#line 153 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_1,
#line 153 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_2,
#line 153 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_3,
#line 153 "termination.m"
  MR_Box transform_hlds__termination__wrapper_arg_4,
#line 153 "termination.m"
  MR_Box * transform_hlds__termination__wrapper_arg_5)
#line 153 "termination.m"
{
#line 153 "termination.m"
  {
#line 153 "termination.m"
    MR_Box transform_hlds__termination__closure = transform_hlds__termination__closure_arg;
#line 153 "termination.m"
    MR_Word transform_hlds__termination__conv1_STATE_VARIABLE_ModuleInfo_3;
#line 153 "termination.m"
    MR_Word transform_hlds__termination__conv0_HeadVar__5_5;

#line 153 "termination.m"
    {
#line 153 "termination.m"
      transform_hlds__termination__check_foreign_code_attributes_2_5_p_0(((MR_Word) transform_hlds__termination__wrapper_arg_1), ((MR_Word) transform_hlds__termination__wrapper_arg_2), &transform_hlds__termination__conv1_STATE_VARIABLE_ModuleInfo_3, ((MR_Word) transform_hlds__termination__wrapper_arg_4), &transform_hlds__termination__conv0_HeadVar__5_5);
    }
#line 153 "termination.m"
    *transform_hlds__termination__wrapper_arg_3 = ((MR_Box) (transform_hlds__termination__conv1_STATE_VARIABLE_ModuleInfo_3));
#line 153 "termination.m"
    *transform_hlds__termination__wrapper_arg_5 = ((MR_Box) (transform_hlds__termination__conv0_HeadVar__5_5));
#line 153 "termination.m"
  }
#line 153 "termination.m"
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
#line 95 "termination.m"
  {
#line 95 "termination.m"
    MR_bool transform_hlds__termination__succeeded;
#line 95 "termination.m"
    MR_Word transform_hlds__termination__Globals_9;
#line 95 "termination.m"
    MR_Word transform_hlds__termination__TermNorm_10;
#line 95 "termination.m"
    MR_Word transform_hlds__termination__FunctorInfo_11;
#line 95 "termination.m"
    MR_Integer transform_hlds__termination__MaxErrors_12;
#line 95 "termination.m"
    MR_Integer transform_hlds__termination__MaxPaths_13;
#line 95 "termination.m"
    MR_Word transform_hlds__termination__PassInfo_14;
#line 95 "termination.m"
    MR_Word transform_hlds__termination__PredIds_15;
#line 95 "termination.m"
    MR_Word transform_hlds__termination__DepInfo_16;
#line 95 "termination.m"
    MR_Word transform_hlds__termination__SCCs_17;
#line 95 "termination.m"
    MR_Word transform_hlds__termination__Specs1_18;
#line 95 "termination.m"
    MR_Word transform_hlds__termination__MakeOptInt_19;
#line 95 "termination.m"
    MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26;
#line 95 "termination.m"
    MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_28_28;
#line 95 "termination.m"
    MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_29_29;
#line 95 "termination.m"
    MR_Word transform_hlds__termination__STATE_VARIABLE_ModuleInfo_31_31;
#line 95 "termination.m"
    MR_Word transform_hlds__termination__V_32_32;
#line 153 "termination.m"
    MR_Box transform_hlds__termination__conv3_STATE_VARIABLE_ModuleInfo_29_29;
#line 153 "termination.m"
    MR_Box transform_hlds__termination__conv2_Specs1_18;
#line 273 "termination.m"
    MR_Box transform_hlds__termination__conv7_STATE_VARIABLE_ModuleInfo_31_31;
#line 273 "termination.m"
    MR_Box transform_hlds__termination__conv6_Specs_7;
#line 121 "termination.m"
    MR_Box transform_hlds__termination__conv10_STATE_VARIABLE_ModuleInfo_21;
#line 121 "termination.m"
    MR_Box transform_hlds__termination__conv9_STATE_VARIABLE_IO_34_34;

#line 96 "termination.m"
    {
#line 96 "termination.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_20, &transform_hlds__termination__Globals_9);
    }
#line 97 "termination.m"
    {
#line 97 "termination.m"
      libs__globals__get_termination_norm_2_p_0(transform_hlds__termination__Globals_9, &transform_hlds__termination__TermNorm_10);
    }
#line 98 "termination.m"
    {
#line 98 "termination.m"
      transform_hlds__termination__FunctorInfo_11 = transform_hlds__term_norm__set_functor_info_2_f_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_20, transform_hlds__termination__TermNorm_10);
    }
#line 99 "termination.m"
    {
#line 99 "termination.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__termination__Globals_9, (MR_Integer) 422, &transform_hlds__termination__MaxErrors_12);
    }
#line 100 "termination.m"
    {
#line 100 "termination.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__termination__Globals_9, (MR_Integer) 423, &transform_hlds__termination__MaxPaths_13);
    }
#line 101 "termination.m"
    {
#line 101 "termination.m"
      transform_hlds__termination__PassInfo_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 101 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__PassInfo_14, 0) = ((MR_Box) (transform_hlds__termination__FunctorInfo_11));
#line 101 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__PassInfo_14, 1) = ((MR_Box) (transform_hlds__termination__MaxErrors_12));
#line 101 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__PassInfo_14, 2) = ((MR_Box) (transform_hlds__termination__MaxPaths_13));
#line 101 "termination.m"
    }
#line 105 "termination.m"
    {
#line 105 "termination.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_20, &transform_hlds__termination__PredIds_15);
    }
#line 106 "termination.m"
    {
#line 106 "termination.m"
      transform_hlds__termination__check_preds_5_p_0(transform_hlds__termination__PredIds_15, transform_hlds__termination__STATE_VARIABLE_ModuleInfo_0_20, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26);
    }
#line 109 "termination.m"
    {
#line 109 "termination.m"
      transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_26_26, &transform_hlds__termination__STATE_VARIABLE_ModuleInfo_28_28);
    }
#line 110 "termination.m"
    {
#line 110 "termination.m"
      hlds__hlds_module__module_info_dependency_info_2_p_0(transform_hlds__termination__STATE_VARIABLE_ModuleInfo_28_28, &transform_hlds__termination__DepInfo_16);
    }
#line 111 "termination.m"
    {
#line 111 "termination.m"
      hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__termination__DepInfo_16, &transform_hlds__termination__SCCs_17);
    }
#line 153 "termination.m"
    {
#line 153 "termination.m"
      mercury__list__foldl2_6_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__termination_scalar_common_1[1], (MR_Word) &transform_hlds__termination_scalar_common_2[1], transform_hlds__termination__SCCs_17, ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_28_28)), &transform_hlds__termination__conv3_STATE_VARIABLE_ModuleInfo_29_29, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__termination__conv2_Specs1_18);
    }
#line 153 "termination.m"
    transform_hlds__termination__STATE_VARIABLE_ModuleInfo_29_29 = ((MR_Word) transform_hlds__termination__conv3_STATE_VARIABLE_ModuleInfo_29_29);
#line 153 "termination.m"
    transform_hlds__termination__Specs1_18 = ((MR_Word) transform_hlds__termination__conv2_Specs1_18);
#line 273 "termination.m"
    {
#line 273 "termination.m"
      mercury__list__foldl2_6_p_0((MR_Word) &transform_hlds__termination_scalar_common_1[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__termination_scalar_common_1[1], (MR_Word) &transform_hlds__termination_scalar_common_2[2], transform_hlds__termination__SCCs_17, ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_29_29)), &transform_hlds__termination__conv7_STATE_VARIABLE_ModuleInfo_31_31, ((MR_Box) (transform_hlds__termination__Specs1_18)), &transform_hlds__termination__conv6_Specs_7);
    }
#line 273 "termination.m"
    transform_hlds__termination__STATE_VARIABLE_ModuleInfo_31_31 = ((MR_Word) transform_hlds__termination__conv7_STATE_VARIABLE_ModuleInfo_31_31);
#line 273 "termination.m"
    *transform_hlds__termination__Specs_7 = ((MR_Word) transform_hlds__termination__conv6_Specs_7);
#line 121 "termination.m"
    {
#line 121 "termination.m"
      transform_hlds__termination__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 121 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_32_32, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_4[0]));
#line 121 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_32_32, 1) = ((MR_Box) (transform_hlds__termination__analyse_termination_in_module_5_p_0_3));
#line 121 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 121 "termination.m"
      MR_hl_field(MR_mktag(0), transform_hlds__termination__V_32_32, 3) = ((MR_Box) (transform_hlds__termination__PassInfo_14));
#line 121 "termination.m"
    }
#line 121 "termination.m"
    {
#line 121 "termination.m"
      mercury__list__foldl2_6_p_2((MR_Word) &transform_hlds__termination_scalar_common_1[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__termination__V_32_32, transform_hlds__termination__SCCs_17, ((MR_Box) (transform_hlds__termination__STATE_VARIABLE_ModuleInfo_31_31)), &transform_hlds__termination__conv10_STATE_VARIABLE_ModuleInfo_21, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__termination__conv9_STATE_VARIABLE_IO_34_34);
    }
#line 121 "termination.m"
    *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_21 = ((MR_Word) transform_hlds__termination__conv10_STATE_VARIABLE_ModuleInfo_21);
#line 124 "termination.m"
    {
#line 124 "termination.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__termination__Globals_9, (MR_Integer) 87, &transform_hlds__termination__MakeOptInt_19);
    }
#line 129 "termination.m"
#line 129 "termination.m"
    switch (transform_hlds__termination__MakeOptInt_19) {
#line 129 "termination.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 129 "termination.m"
      case (MR_Integer) 0:
#line 130 "termination.m"
        {
#line 130 "termination.m"
        }
#line 129 "termination.m"
        break;
#line 129 "termination.m"
      case (MR_Integer) 1:
#line 128 "termination.m"
        {
#line 128 "termination.m"
          transform_hlds__termination__make_termination_opt_int_4_p_0(transform_hlds__termination__PredIds_15, *transform_hlds__termination__STATE_VARIABLE_ModuleInfo_21);
        }
#line 129 "termination.m"
        break;
#line 129 "termination.m"
    }
#line 132 "termination.m"
    {
#line 132 "termination.m"
      transform_hlds__post_term_analysis__run_post_term_analysis_3_p_0(*transform_hlds__termination__STATE_VARIABLE_ModuleInfo_21);
#line 132 "termination.m"
      return;
    }
#line 95 "termination.m"
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
