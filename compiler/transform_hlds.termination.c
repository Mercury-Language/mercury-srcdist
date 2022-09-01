/*
** Automatically generated from `termination.m'
** by the Mercury compiler,
** version rotd-2022-09-01
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module transform_hlds.termination.
// :- implementation.

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
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
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
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_error_util.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
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
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "transform_hlds.post_term_analysis.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_pass1.mih"
#include "transform_hlds.term_pass2.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__termination__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__termination__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__termination__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__termination__parse_tree__prog_data_pragma__pti_generic_termination_info_2__plain_unit__type_ctor_info_unit_0__plain_list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__termination__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__termination__parse_tree__prog_data_pragma__pti_generic_arg_size_info_1__plain_list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0;

static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__decide_what_term_errors_to_report__550__1_1_p_0(
  MR_Word LambdaHeadVar__1_33);

static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__decide_what_term_errors_to_report__527__1_2_p_0(
  MR_Word ModuleInfo_5,
  MR_Word LambdaHeadVar__1_32);

static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__decide_what_term_errors_to_report__513__1_2_p_0(
  MR_Word ModuleInfo_5,
  MR_Word LambdaHeadVar__1_30);

static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__399__1_1_p_0(
  MR_Word LambdaHeadVar__1_54);

static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__366__1_2_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_43,
  MR_Word LambdaHeadVar__1_47);

static MR_Word MR_CALL 
transform_hlds__termination__IntroducedFrom__func__check_scc_pragmas_are_consistent__311__1_1_f_0(
  MR_Word HeadVar__1_73);

static void MR_CALL 
transform_hlds__termination__set_termination_info_4_p_0(
  MR_Word TerminationInfo_5,
  MR_Word PPId_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15);

static void MR_CALL 
transform_hlds__termination__set_infinite_arg_size_info_4_p_0(
  MR_Word ArgSizeInfo_5,
  MR_Word PPId_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15);

static MR_bool MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0(
  MR_Word PassInfo_7,
  MR_Word SCC_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_43,
  MR_Word * STATE_VARIABLE_ModuleInfo_44,
  MR_Word STATE_VARIABLE_Specs_0_45,
  MR_Word * STATE_VARIABLE_Specs_46);

static void MR_CALL 
transform_hlds__termination__set_finite_arg_size_infos_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word OutputSupplierMap_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4);

static MR_Box MR_CALL 
transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0(
  MR_Word SCC_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_24,
  MR_Word * STATE_VARIABLE_ModuleInfo_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27);

static void MR_CALL 
transform_hlds__termination__classify_termination_status_10_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_KnownPredNamesIds_0_3,
  MR_Word * STATE_VARIABLE_KnownPredNamesIds_4,
  MR_Word STATE_VARIABLE_KnownContexts_0_5,
  MR_Word * STATE_VARIABLE_KnownContexts_6,
  MR_Word STATE_VARIABLE_KnownTermStatuses_0_7,
  MR_Word * STATE_VARIABLE_KnownTermStatuses_8,
  MR_Word STATE_VARIABLE_UnknownPPIds_0_9,
  MR_Word * STATE_VARIABLE_UnknownPPIds_10);

static void MR_CALL 
transform_hlds__termination__check_foreign_code_attributes_in_scc_5_p_0(
  MR_Word SCC_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_27,
  MR_Word * STATE_VARIABLE_ModuleInfo_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30);

static void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__termination__term_preprocess_preds_4_p_0(
  MR_Word BelieveCheckTerm_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4);

static void MR_CALL 
transform_hlds__termination__change_procs_termination_info_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Override_2,
  MR_Word Termination_3,
  MR_Word STATE_VARIABLE_ProcTable_0_4,
  MR_Word * STATE_VARIABLE_ProcTable_5);

static void MR_CALL 
transform_hlds__termination__change_procs_arg_size_info_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Override_2,
  MR_Word ArgSize_3,
  MR_Word STATE_VARIABLE_ProcTable_0_4,
  MR_Word * STATE_VARIABLE_ProcTable_5);

static void MR_CALL 
transform_hlds__termination__set_builtin_terminates_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PredId_2,
  MR_Word PredInfo_3,
  MR_Word ModuleInfo_4,
  MR_Word STATE_VARIABLE_ProcTable_0_5,
  MR_Word * STATE_VARIABLE_ProcTable_6);

static void MR_CALL 
transform_hlds__termination__set_generated_terminates_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word SpecialPredId_2,
  MR_Word STATE_VARIABLE_ProcTable_0_3,
  MR_Word * STATE_VARIABLE_ProcTable_4);


static /* final */ const MR_Box transform_hlds__termination_scalar_common_1[37][2];

static /* final */ const MR_Box transform_hlds__termination_scalar_common_2[7][3];

static /* final */ const MR_Box transform_hlds__termination_scalar_common_3[2][1];

static /* final */ const MR_Box transform_hlds__termination_scalar_common_4[1][8];

static /* final */ const MR_Box transform_hlds__termination_scalar_common_5[1][9];

static /* final */ const MR_Box transform_hlds__termination_scalar_common_6[2][7];

static /* final */ const MR_Box transform_hlds__termination_scalar_common_7[2][5];

static /* final */ const MR_Box transform_hlds__termination_scalar_common_8[1][4];




static /* final */ const MR_Box transform_hlds__termination_scalar_common_1[37][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning:"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "foreign code attribute set."))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[6]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "terminates"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[7])))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "but also has the"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[9])))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[11])))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "does_not_terminate"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[13])))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has a"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[15])))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "does_not_terminate"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[7])))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[19])))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[20])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "terminates"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[21])))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[23])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "termination pragmas are inconsistent."))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[25]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "are mutually recursive but some of their"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[26])))
  },
  /* row  29 */
  {
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_generic_arg_size_info_1)),
    ((MR_Box) (&transform_hlds__termination_scalar_common_1[2]))
  },
  /* row  30 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  31 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[30])))
  },
  /* row  32 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[31])))
  },
  /* row  33 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  34 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[33])))
  },
  /* row  35 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&transform_hlds__termination_scalar_common_1[29]))
  },
  /* row  36 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&transform_hlds__termination_scalar_common_2[1]))
  },
};

static /* final */ const MR_Box transform_hlds__termination_scalar_common_2[7][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_generic_termination_info_2)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&transform_hlds__termination_scalar_common_1[2]))
  },
  /* row   2 */
  {
    ((MR_Box) (&transform_hlds__termination_scalar_common_4[0])),
    ((MR_Box) (transform_hlds__termination__analyse_termination_in_module_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&transform_hlds__termination_scalar_common_4[0])),
    ((MR_Box) (transform_hlds__termination__analyse_termination_in_module_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&transform_hlds__termination_scalar_common_7[0])),
    ((MR_Box) (transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&transform_hlds__termination_scalar_common_8[0])),
    ((MR_Box) (transform_hlds__termination__analyse_termination_in_scc_6_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&transform_hlds__termination_scalar_common_8[0])),
    ((MR_Box) (transform_hlds__termination__analyse_termination_in_scc_6_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__termination_scalar_common_3[2][1] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&transform_hlds__termination_scalar_common_3[0]))
  },
};

static /* final */ const MR_Box transform_hlds__termination_scalar_common_4[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__termination__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__termination__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&transform_hlds__termination__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box transform_hlds__termination_scalar_common_5[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__term_util__transform_hlds__term_util__type_ctor_info_pass_info_0)),
    ((MR_Box) (&transform_hlds__termination__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__termination__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&transform_hlds__termination__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box transform_hlds__termination_scalar_common_6[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__termination__parse_tree__prog_data_pragma__pti_generic_termination_info_2__plain_unit__type_ctor_info_unit_0__plain_list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__termination__parse_tree__prog_data_pragma__pti_generic_arg_size_info_1__plain_list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__termination_scalar_common_7[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__termination__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};

static /* final */ const MR_Box transform_hlds__termination_scalar_common_8[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"



static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__termination__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__termination__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__termination__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__termination__parse_tree__prog_data_pragma__pti_generic_termination_info_2__plain_unit__type_ctor_info_unit_0__plain_list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0 = {
  &parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_generic_termination_info_2,
  {
    (MR_PseudoTypeInfo) (&mercury__unit__unit__type_ctor_info_unit_0),
    (MR_PseudoTypeInfo) (&transform_hlds__termination__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__termination__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__termination__parse_tree__prog_data_pragma__pti_generic_arg_size_info_1__plain_list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0 = {
  &parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_generic_arg_size_info_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__termination__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0)
  }
};

static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__decide_what_term_errors_to_report__550__1_1_p_0(
  MR_Word LambdaHeadVar__1_33)
{
  MR_bool succeeded;
  MR_Word ErrorKind_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_33, (MR_Integer) 1))));
  MR_Word Var_34;

  Var_34 = transform_hlds__term_errors__term_error_kind_is_direct_error_1_f_0(ErrorKind_24);
  succeeded = (Var_34 == (MR_Integer) 1);
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__decide_what_term_errors_to_report__527__1_2_p_0(
  MR_Word ModuleInfo_5,
  MR_Word LambdaHeadVar__1_32)
{
  MR_bool succeeded;
  MR_Word PredInfo_37;
  MR_Word Var_19;

  hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_5, LambdaHeadVar__1_32, &PredInfo_37, &Var_19);
  succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo_37);
  succeeded = !(succeeded);
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__decide_what_term_errors_to_report__513__1_2_p_0(
  MR_Word ModuleInfo_5,
  MR_Word LambdaHeadVar__1_30)
{
  MR_bool succeeded;
  MR_Word PredInfo_14;
  MR_Word Markers_16;
  MR_Word Var_31;
  MR_Word Var_15;

  hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_5, LambdaHeadVar__1_30, &PredInfo_14, &Var_15);
  succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo_14);
  succeeded = !(succeeded);
  if (succeeded)
  {
    hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_14, &Markers_16);
    Var_31 = (MR_Integer) 21;
    succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_16, Var_31);
  }
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__399__1_1_p_0(
  MR_Word LambdaHeadVar__1_54)
{
  MR_bool succeeded;
  MR_Word ErrorKind_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_54, (MR_Integer) 1))));
  MR_Word Var_55;

  Var_55 = transform_hlds__term_errors__term_error_kind_is_fatal_error_1_f_0(ErrorKind_29);
  succeeded = (Var_55 == (MR_Integer) 1);
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__366__1_2_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_43,
  MR_Word LambdaHeadVar__1_47)
{
  MR_bool succeeded;
  MR_Word ProcInfo_14;
  MR_Word Var_73;
  MR_Word Var_13;

  hlds__hlds_module__module_info_pred_proc_info_4_p_0(STATE_VARIABLE_ModuleInfo_0_43, LambdaHeadVar__1_47, &Var_13, &ProcInfo_14);
  hlds__hlds_pred__proc_info_get_maybe_arg_size_info_2_p_0(ProcInfo_14, &Var_73);
  succeeded = (Var_73 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
  }
  return succeeded;
}

static MR_Word MR_CALL 
transform_hlds__termination__IntroducedFrom__func__check_scc_pragmas_are_consistent__311__1_1_f_0(
  MR_Word HeadVar__1_73)
{
  MR_Word HeadVar__2_74;
  MR_Box conv0_HeadVar__2_74;

  conv0_HeadVar__2_74 = mercury__pair__snd_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), HeadVar__1_73);
  HeadVar__2_74 = ((MR_Word) (conv0_HeadVar__2_74));
  return HeadVar__2_74;
}

static void MR_CALL 
transform_hlds__termination__set_termination_info_4_p_0(
  MR_Word TerminationInfo_5,
  MR_Word PPId_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15)
{
  MR_Word PredId_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PPId_6, (MR_Integer) 0))));
  MR_Integer ProcId_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PPId_6, (MR_Integer) 1))));
  MR_Word PredInfo0_10;
  MR_Word ProcInfo0_11;
  MR_Word ProcInfo_12;
  MR_Word PredInfo_13;
  MR_Word Var_16;

  hlds__hlds_module__module_info_pred_proc_info_5_p_0(STATE_VARIABLE_ModuleInfo_0_14, PredId_8, ProcId_9, &PredInfo0_10, &ProcInfo0_11);
  {
    Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (TerminationInfo_5));
  }
  hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(Var_16, ProcInfo0_11, &ProcInfo_12);
  hlds__hlds_pred__pred_info_set_proc_info_4_p_0(ProcId_9, ProcInfo_12, PredInfo0_10, &PredInfo_13);
  hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_8, PredInfo_13, STATE_VARIABLE_ModuleInfo_0_14, STATE_VARIABLE_ModuleInfo_15);
}

static void MR_CALL 
transform_hlds__termination__set_infinite_arg_size_info_4_p_0(
  MR_Word ArgSizeInfo_5,
  MR_Word PPId_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15)
{
  MR_Word PredId_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PPId_6, (MR_Integer) 0))));
  MR_Integer ProcId_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PPId_6, (MR_Integer) 1))));
  MR_Word PredInfo0_10;
  MR_Word ProcInfo0_11;
  MR_Word ProcInfo_12;
  MR_Word PredInfo_13;
  MR_Word Var_16;

  hlds__hlds_module__module_info_pred_proc_info_5_p_0(STATE_VARIABLE_ModuleInfo_0_14, PredId_8, ProcId_9, &PredInfo0_10, &ProcInfo0_11);
  {
    Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (ArgSizeInfo_5));
  }
  hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_p_0(Var_16, ProcInfo0_11, &ProcInfo_12);
  hlds__hlds_pred__pred_info_set_proc_info_4_p_0(ProcId_9, ProcInfo_12, PredInfo0_10, &PredInfo_13);
  hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_8, PredInfo_13, STATE_VARIABLE_ModuleInfo_0_14, STATE_VARIABLE_ModuleInfo_15);
}

static MR_bool MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__termination__IntroducedFrom__pred__decide_what_term_errors_to_report__550__1_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__termination__IntroducedFrom__pred__decide_what_term_errors_to_report__527__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__termination__IntroducedFrom__pred__decide_what_term_errors_to_report__513__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_ModuleInfo_15;

  transform_hlds__termination__set_termination_info_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ModuleInfo_15);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ModuleInfo_15));
}

static MR_bool MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__399__1_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__term_util__is_termination_known_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_15;

  transform_hlds__termination__set_infinite_arg_size_info_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleInfo_15);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_15));
}

static MR_bool MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__366__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__termination__analyse_termination_in_scc_6_p_0(
  MR_Word PassInfo_7,
  MR_Word SCC_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_43,
  MR_Word * STATE_VARIABLE_ModuleInfo_44,
  MR_Word STATE_VARIABLE_Specs_0_45,
  MR_Word * STATE_VARIABLE_Specs_46)
{
  MR_bool succeeded;
  MR_Word IsArgSizeKnown_11;
  MR_Word SCCArgSizeUnknown_17;
  MR_Word ArgSizeErrors_18;
  MR_Word TermErrors_19;
  MR_Word SCCTerminationUnknown_25;
  MR_Word STATE_VARIABLE_ModuleInfo_49_49;
  MR_Word Var_53;
  MR_Word _SCCArgSizeKnown_16;
  MR_Word _SCCTerminationKnown_24;

  {
    IsArgSizeKnown_11 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), IsArgSizeKnown_11, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_7[1]));
    MR_hl_field(MR_mktag(0), IsArgSizeKnown_11, 1) = ((MR_Box) (transform_hlds__termination__analyse_termination_in_scc_6_p_0_1));
    MR_hl_field(MR_mktag(0), IsArgSizeKnown_11, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), IsArgSizeKnown_11, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_43));
  }
  mercury__set__filter_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), IsArgSizeKnown_11, SCC_8, &_SCCArgSizeKnown_16, &SCCArgSizeUnknown_17);
  succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), SCCArgSizeUnknown_17);
  if (succeeded)
  {
    ArgSizeErrors_18 = (MR_Word) ((MR_Unsigned) 0U);
    TermErrors_19 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_ModuleInfo_49_49 = STATE_VARIABLE_ModuleInfo_0_43;
  }
  else
  {
    MR_Word ArgSizeResult_20;

    transform_hlds__term_pass1__find_arg_sizes_in_scc_5_p_0(STATE_VARIABLE_ModuleInfo_0_43, PassInfo_7, SCCArgSizeUnknown_17, &ArgSizeResult_20, &TermErrors_19);
    if (((MR_tag((MR_Word) ArgSizeResult_20)) == (MR_Integer) 1))
    {
      MR_Word Var_50;
      MR_Word Var_52;
      MR_Box conv1_STATE_VARIABLE_ModuleInfo_49_49;

      ArgSizeErrors_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgSizeResult_20, (MR_Integer) 0))));
      {
        Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (ArgSizeErrors_18));
      }
      {
        Var_50 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_6[1]));
        MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (transform_hlds__termination__analyse_termination_in_scc_6_p_0_2));
        MR_hl_field(MR_mktag(0), Var_50, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_50, 3) = ((MR_Box) (Var_52));
      }
      mercury__set__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_50, SCCArgSizeUnknown_17, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_43)), &conv1_STATE_VARIABLE_ModuleInfo_49_49);
      STATE_VARIABLE_ModuleInfo_49_49 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_49_49));
    }
    else
    {
      MR_Word Solutions_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgSizeResult_20, (MR_Integer) 0))));
      MR_Word OutputSupplierMap_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgSizeResult_20, (MR_Integer) 1))));

      transform_hlds__termination__set_finite_arg_size_infos_4_p_0(Solutions_21, OutputSupplierMap_22, STATE_VARIABLE_ModuleInfo_0_43, &STATE_VARIABLE_ModuleInfo_49_49);
      ArgSizeErrors_18 = (MR_Word) ((MR_Unsigned) 0U);
    }
  }
  {
    Var_53 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_7[1]));
    MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (transform_hlds__termination__analyse_termination_in_scc_6_p_0_3));
    MR_hl_field(MR_mktag(0), Var_53, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_53, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_49_49));
  }
  mercury__set__filter_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), Var_53, SCC_8, &_SCCTerminationKnown_24, &SCCTerminationUnknown_25);
  succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), SCCTerminationUnknown_25);
  if (succeeded)
  {
    *STATE_VARIABLE_Specs_46 = STATE_VARIABLE_Specs_0_45;
    *STATE_VARIABLE_ModuleInfo_44 = STATE_VARIABLE_ModuleInfo_49_49;
  }
  else
  {
    MR_Word FatalErrors_30;
    MR_Word BothErrors_31;
    MR_Word TerminationResult_38;
    MR_Word Var_57;
    MR_Box conv3_STATE_VARIABLE_ModuleInfo_44;

    mercury__list__filter_3_p_0((MR_Word) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0), (MR_Word) (&transform_hlds__termination_scalar_common_2[5]), ArgSizeErrors_18, &FatalErrors_30);
    BothErrors_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0), TermErrors_19, FatalErrors_30);
    if ((BothErrors_31 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Globals_39;
      MR_Integer SingleArgs_40;

      hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_49_49, &Globals_39);
      libs__globals__lookup_int_option_3_p_0(Globals_39, (MR_Integer) 518, &SingleArgs_40);
      transform_hlds__term_pass2__prove_termination_in_scc_5_p_0(STATE_VARIABLE_ModuleInfo_49_49, PassInfo_7, SCCTerminationUnknown_25, SingleArgs_40, &TerminationResult_38);
    }
    else
    {
      MR_Integer MaxErrors_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PassInfo_7, (MR_Integer) 1))));
      MR_Word ReportedErrors_37;

      mercury__list__take_upto_3_p_0((MR_Word) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0), MaxErrors_35, BothErrors_31, &ReportedErrors_37);
      {
        TerminationResult_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), TerminationResult_38, 0) = ((MR_Box) (ReportedErrors_37));
      }
    }
    {
      Var_57 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (transform_hlds__termination__analyse_termination_in_scc_6_p_0_5));
      MR_hl_field(MR_mktag(0), Var_57, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_57, 3) = ((MR_Box) (TerminationResult_38));
    }
    mercury__set__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_57, SCCTerminationUnknown_25, ((MR_Box) (STATE_VARIABLE_ModuleInfo_49_49)), &conv3_STATE_VARIABLE_ModuleInfo_44);
    *STATE_VARIABLE_ModuleInfo_44 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_44));
    if (((MR_tag((MR_Word) TerminationResult_38)) == (MR_Integer) 1))
    {
      MR_Word TerminationErrors_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TerminationResult_38, (MR_Integer) 0))));
      MR_Word Globals_75;
      MR_Word NormalErrors_76;
      MR_Word VerboseErrors_77;
      MR_Word IsCheckTerm_78;
      MR_Word CheckTermPPIds_79;

      hlds__hlds_module__module_info_get_globals_2_p_0(*STATE_VARIABLE_ModuleInfo_44, &Globals_75);
      libs__globals__lookup_bool_option_3_p_0(Globals_75, (MR_Integer) 516, &NormalErrors_76);
      libs__globals__lookup_bool_option_3_p_0(Globals_75, (MR_Integer) 517, &VerboseErrors_77);
      {
        IsCheckTerm_78 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), IsCheckTerm_78, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_7[1]));
        MR_hl_field(MR_mktag(0), IsCheckTerm_78, 1) = ((MR_Box) (transform_hlds__termination__analyse_termination_in_scc_6_p_0_6));
        MR_hl_field(MR_mktag(0), IsCheckTerm_78, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), IsCheckTerm_78, 3) = ((MR_Box) (*STATE_VARIABLE_ModuleInfo_44));
      }
      mercury__set__filter_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), IsCheckTerm_78, SCC_8, &CheckTermPPIds_79);
      succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), CheckTermPPIds_79);
      if (succeeded)
        transform_hlds__term_errors__report_term_errors_5_p_0(*STATE_VARIABLE_ModuleInfo_44, SCC_8, TerminationErrors_41, STATE_VARIABLE_Specs_0_45, STATE_VARIABLE_Specs_46);
      else
      {
        MR_Word IsNonImported_80;
        MR_Word NonImportedPPIds_81;

        {
          IsNonImported_80 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), IsNonImported_80, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_7[1]));
          MR_hl_field(MR_mktag(0), IsNonImported_80, 1) = ((MR_Box) (transform_hlds__termination__analyse_termination_in_scc_6_p_0_7));
          MR_hl_field(MR_mktag(0), IsNonImported_80, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), IsNonImported_80, 3) = ((MR_Box) (*STATE_VARIABLE_ModuleInfo_44));
        }
        mercury__set__filter_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), IsNonImported_80, SCC_8, &NonImportedPPIds_81);
        succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), NonImportedPPIds_81);
        if (succeeded)
          switch (VerboseErrors_77) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word MaybeErrorsToReport_91;

                switch (NormalErrors_76) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    MaybeErrorsToReport_91 = (MR_Word) ((MR_Unsigned) 0U);
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word DirectErrors_83;

                      mercury__list__filter_3_p_0((MR_Word) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0), (MR_Word) (&transform_hlds__termination_scalar_common_2[6]), TerminationErrors_41, &DirectErrors_83);
                      if ((DirectErrors_83 == (MR_Word) ((MR_Unsigned) 0U)))
                        {
                          MaybeErrorsToReport_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), MaybeErrorsToReport_91, 0) = ((MR_Box) (TerminationErrors_41));
                        }
                      else
                        {
                          MaybeErrorsToReport_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), MaybeErrorsToReport_91, 0) = ((MR_Box) (DirectErrors_83));
                        }
                    }
                    break;
                }
                if ((MaybeErrorsToReport_91 == (MR_Word) ((MR_Unsigned) 0U)))
                  *STATE_VARIABLE_Specs_46 = STATE_VARIABLE_Specs_0_45;
                else
                {
                  MR_Word ErrorsToReport_89 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeErrorsToReport_91, (MR_Integer) 0))));

                  transform_hlds__term_errors__report_term_errors_5_p_0(*STATE_VARIABLE_ModuleInfo_44, SCC_8, ErrorsToReport_89, STATE_VARIABLE_Specs_0_45, STATE_VARIABLE_Specs_46);
                }
              }
              break;
            case (MR_Integer) 1:
              transform_hlds__term_errors__report_term_errors_5_p_0(*STATE_VARIABLE_ModuleInfo_44, SCC_8, TerminationErrors_41, STATE_VARIABLE_Specs_0_45, STATE_VARIABLE_Specs_46);
              break;
          }
        else
          *STATE_VARIABLE_Specs_46 = STATE_VARIABLE_Specs_0_45;
      }
    }
    else
      *STATE_VARIABLE_Specs_46 = STATE_VARIABLE_Specs_0_45;
  }
}

static void MR_CALL 
transform_hlds__termination__set_finite_arg_size_infos_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word OutputSupplierMap_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ModuleInfo_4 = STATE_VARIABLE_ModuleInfo_0_3;
    else
    {
      MR_Word Soln_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Solns_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word PPId_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Soln_9, (MR_Integer) 0))));
      MR_Integer Gamma_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Soln_9, (MR_Integer) 1))));
      MR_Word PredId_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PPId_13, (MR_Integer) 0))));
      MR_Integer ProcId_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PPId_13, (MR_Integer) 1))));
      MR_Word PredInfo0_17;
      MR_Word ProcInfo0_18;
      MR_Word OutputSuppliers_19;
      MR_Word ArgSizeInfo_20;
      MR_Word ProcInfo_21;
      MR_Word PredInfo_22;
      MR_Word Var_25;
      MR_Word STATE_VARIABLE_ModuleInfo_26_26;
      MR_Box conv0_OutputSuppliers_19;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_3;

      hlds__hlds_module__module_info_pred_proc_info_5_p_0(STATE_VARIABLE_ModuleInfo_0_3, PredId_15, ProcId_16, &PredInfo0_17, &ProcInfo0_18);
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__termination_scalar_common_1[3]), OutputSupplierMap_2, ((MR_Box) (PPId_13)), &conv0_OutputSuppliers_19);
      OutputSuppliers_19 = ((MR_Word) (conv0_OutputSuppliers_19));
      {
        ArgSizeInfo_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ArgSizeInfo_20, 0) = ((MR_Box) (Gamma_14));
        MR_hl_field(MR_mktag(0), ArgSizeInfo_20, 1) = ((MR_Box) (OutputSuppliers_19));
      }
      {
        Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (ArgSizeInfo_20));
      }
      hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_p_0(Var_25, ProcInfo0_18, &ProcInfo_21);
      hlds__hlds_pred__pred_info_set_proc_info_4_p_0(ProcId_16, ProcInfo_21, PredInfo0_17, &PredInfo_22);
      hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_15, PredInfo_22, STATE_VARIABLE_ModuleInfo_0_3, &STATE_VARIABLE_ModuleInfo_26_26);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Solns_10;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_3 = STATE_VARIABLE_ModuleInfo_26_26;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ModuleInfo_0_3 = next_value_of_STATE_VARIABLE_ModuleInfo_0_3;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv5_HeadVar__2_74;

  conv5_HeadVar__2_74 = transform_hlds__termination__IntroducedFrom__func__check_scc_pragmas_are_consistent__311__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__2_74));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_ModuleInfo_15;

  transform_hlds__termination__set_termination_info_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_ModuleInfo_15);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_ModuleInfo_15));
}

static void MR_CALL 
transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_15;

  transform_hlds__termination__set_termination_info_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleInfo_15);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_15));
}

static void MR_CALL 
transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0(
  MR_Word SCC_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_24,
  MR_Word * STATE_VARIABLE_ModuleInfo_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  MR_Word KnownPredNamesIdsSet_9;
  MR_Word KnownContextSet_10;
  MR_Word KnownTermStatusSet_11;
  MR_Word UnknownPPIdSet_12;
  MR_Word KnownTermStatuses_13;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_32;

  Var_28 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), SCC_6);
  Var_29 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__termination_scalar_common_2[0]));
  Var_30 = mercury__set__init_0_f_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0));
  Var_31 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__termination_scalar_common_2[1]));
  Var_32 = mercury__set__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0));
  transform_hlds__termination__classify_termination_status_10_p_0(STATE_VARIABLE_ModuleInfo_0_24, Var_28, Var_29, &KnownPredNamesIdsSet_9, Var_30, &KnownContextSet_10, Var_31, &KnownTermStatusSet_11, Var_32, &UnknownPPIdSet_12);
  KnownTermStatuses_13 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&transform_hlds__termination_scalar_common_2[1]), KnownTermStatusSet_11);
  if ((KnownTermStatuses_13 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_ModuleInfo_25 = STATE_VARIABLE_ModuleInfo_0_24;
    *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
  }
  else
  {
    MR_Word Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(1), KnownTermStatuses_13, (MR_Integer) 1))));
    MR_Word Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(1), KnownTermStatuses_13, (MR_Integer) 0))));

    if ((Var_78 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_34;
      MR_Box conv1_STATE_VARIABLE_ModuleInfo_25;

      {
        Var_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_6[0]));
        MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_34, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_34, 3) = ((MR_Box) (Var_79));
      }
      mercury__set__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_34, UnknownPPIdSet_12, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_24)), &conv1_STATE_VARIABLE_ModuleInfo_25);
      *STATE_VARIABLE_ModuleInfo_25 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_25));
      *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
    }
    else
    {
      MR_Word LeastContext_18;
      MR_Word NewTermStatus_19;
      MR_Word PredNamesIds_20;
      MR_Word PredNamePieces_21;
      MR_Word Pieces_22;
      MR_Word Spec_23;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word Var_42;
      MR_Word Var_45;
      MR_Word Var_47;
      MR_Box conv2_LeastContext_18;
      MR_Box conv4_STATE_VARIABLE_ModuleInfo_25;

      Var_37 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), KnownContextSet_10);
      conv2_LeastContext_18 = mercury__list__det_head_1_f_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), Var_37);
      LeastContext_18 = ((MR_Word) (conv2_LeastContext_18));
      {
        Var_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (LeastContext_18));
        MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) ((MR_Unsigned) 28U));
      }
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        NewTermStatus_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), NewTermStatus_19, 0) = ((MR_Box) (Var_38));
      }
      {
        Var_42 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_6[0]));
        MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0_2));
        MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (NewTermStatus_19));
      }
      mercury__set__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_42, SCC_6, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_24)), &conv4_STATE_VARIABLE_ModuleInfo_25);
      *STATE_VARIABLE_ModuleInfo_25 = ((MR_Word) (conv4_STATE_VARIABLE_ModuleInfo_25));
      PredNamesIds_20 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&transform_hlds__termination_scalar_common_2[0]), KnownPredNamesIdsSet_9);
      Var_45 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__termination_scalar_common_2[0]), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&transform_hlds__termination_scalar_common_2[4]), PredNamesIds_20);
      PredNamePieces_21 = hlds__hlds_error_util__describe_several_pred_names_3_f_0(*STATE_VARIABLE_ModuleInfo_25, (MR_Integer) 0, Var_45);
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[5])));
        MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (PredNamePieces_21));
      }
      Pieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_47, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[28])));
      {
        Spec_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_23, 0) = ((MR_Box) ((MR_String) "predicate \140transform_hlds.termination.check_scc_pragmas_are_consistent\'/5"));
        MR_hl_field(MR_mktag(1), Spec_23, 1) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(1), Spec_23, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_23, 3) = ((MR_Box) (LeastContext_18));
        MR_hl_field(MR_mktag(1), Spec_23, 4) = ((MR_Box) (Pieces_22));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_27 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_23));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_26));
      }
    }
  }
}

static void MR_CALL 
transform_hlds__termination__classify_termination_status_10_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_KnownPredNamesIds_0_3,
  MR_Word * STATE_VARIABLE_KnownPredNamesIds_4,
  MR_Word STATE_VARIABLE_KnownContexts_0_5,
  MR_Word * STATE_VARIABLE_KnownContexts_6,
  MR_Word STATE_VARIABLE_KnownTermStatuses_0_7,
  MR_Word * STATE_VARIABLE_KnownTermStatuses_8,
  MR_Word STATE_VARIABLE_UnknownPPIds_0_9,
  MR_Word * STATE_VARIABLE_UnknownPPIds_10)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_UnknownPPIds_10 = STATE_VARIABLE_UnknownPPIds_0_9;
      *STATE_VARIABLE_KnownTermStatuses_8 = STATE_VARIABLE_KnownTermStatuses_0_7;
      *STATE_VARIABLE_KnownContexts_6 = STATE_VARIABLE_KnownContexts_0_5;
      *STATE_VARIABLE_KnownPredNamesIds_4 = STATE_VARIABLE_KnownPredNamesIds_0_3;
    }
    else
    {
      MR_Word PPId_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word PPIds_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word PredInfo_31;
      MR_Word ProcInfo_32;
      MR_Word MaybeTermStatus_33;
      MR_Word STATE_VARIABLE_KnownPredNamesIds_48_48;
      MR_Word STATE_VARIABLE_KnownContexts_49_49;
      MR_Word STATE_VARIABLE_KnownTermStatuses_50_50;
      MR_Word STATE_VARIABLE_UnknownPPIds_51_51;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_KnownPredNamesIds_0_3;
      MR_Word next_value_of_STATE_VARIABLE_KnownContexts_0_5;
      MR_Word next_value_of_STATE_VARIABLE_KnownTermStatuses_0_7;
      MR_Word next_value_of_STATE_VARIABLE_UnknownPPIds_0_9;

      hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_1, PPId_25, &PredInfo_31, &ProcInfo_32);
      hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(ProcInfo_32, &MaybeTermStatus_33);
      if ((MaybeTermStatus_33 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (PPId_25)), STATE_VARIABLE_UnknownPPIds_0_9, &STATE_VARIABLE_UnknownPPIds_51_51);
        STATE_VARIABLE_KnownPredNamesIds_48_48 = STATE_VARIABLE_KnownPredNamesIds_0_3;
        STATE_VARIABLE_KnownContexts_49_49 = STATE_VARIABLE_KnownContexts_0_5;
        STATE_VARIABLE_KnownTermStatuses_50_50 = STATE_VARIABLE_KnownTermStatuses_0_7;
      }
      else
      {
        MR_Word TermStatus_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTermStatus_33, (MR_Integer) 0))));
        MR_String PredName_35;
        MR_Word PredId_36;
        MR_Word Context_38;
        MR_Word Var_47;

        PredName_35 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_31);
        PredId_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PPId_25, (MR_Integer) 0))));
        {
          Var_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (PredName_35));
          MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (PredId_36));
        }
        mercury__set__insert_3_p_0((MR_Word) (&transform_hlds__termination_scalar_common_2[0]), ((MR_Box) (Var_47)), STATE_VARIABLE_KnownPredNamesIds_0_3, &STATE_VARIABLE_KnownPredNamesIds_48_48);
        hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_31, &Context_38);
        mercury__set__insert_3_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (Context_38)), STATE_VARIABLE_KnownContexts_0_5, &STATE_VARIABLE_KnownContexts_49_49);
        mercury__set__insert_3_p_0((MR_Word) (&transform_hlds__termination_scalar_common_2[1]), ((MR_Box) (TermStatus_34)), STATE_VARIABLE_KnownTermStatuses_0_7, &STATE_VARIABLE_KnownTermStatuses_50_50);
        STATE_VARIABLE_UnknownPPIds_51_51 = STATE_VARIABLE_UnknownPPIds_0_9;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = PPIds_26;
      next_value_of_STATE_VARIABLE_KnownPredNamesIds_0_3 = STATE_VARIABLE_KnownPredNamesIds_48_48;
      next_value_of_STATE_VARIABLE_KnownContexts_0_5 = STATE_VARIABLE_KnownContexts_49_49;
      next_value_of_STATE_VARIABLE_KnownTermStatuses_0_7 = STATE_VARIABLE_KnownTermStatuses_50_50;
      next_value_of_STATE_VARIABLE_UnknownPPIds_0_9 = STATE_VARIABLE_UnknownPPIds_51_51;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_KnownPredNamesIds_0_3 = next_value_of_STATE_VARIABLE_KnownPredNamesIds_0_3;
      STATE_VARIABLE_KnownContexts_0_5 = next_value_of_STATE_VARIABLE_KnownContexts_0_5;
      STATE_VARIABLE_KnownTermStatuses_0_7 = next_value_of_STATE_VARIABLE_KnownTermStatuses_0_7;
      STATE_VARIABLE_UnknownPPIds_0_9 = next_value_of_STATE_VARIABLE_UnknownPPIds_0_9;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__termination__check_foreign_code_attributes_in_scc_5_p_0(
  MR_Word SCC_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_27,
  MR_Word * STATE_VARIABLE_ModuleInfo_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30)
{
  MR_bool succeeded;
  MR_Word PPIds_9;

  mercury__set__to_sorted_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), SCC_6, &PPIds_9);
  if ((PPIds_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.termination.check_foreign_code_attributes_in_scc\'/5", (MR_String) "empty SCC");
      return;
    }
  else
  {
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PPIds_9, (MR_Integer) 1))));
    MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PPIds_9, (MR_Integer) 0))));

    if ((Var_38 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word PredInfo_11;
      MR_Word ProcInfo0_12;
      MR_Word Attributes_16;
      MR_Word Goal_13;
      MR_Word GoalExpr_14;

      hlds__hlds_module__module_info_pred_proc_info_4_p_0(STATE_VARIABLE_ModuleInfo_0_27, Var_39, &PredInfo_11, &ProcInfo0_12);
      hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo0_12, &Goal_13);
      GoalExpr_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_13, (MR_Integer) 0))));
      succeeded = ((((MR_tag((MR_Word) GoalExpr_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_14, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Attributes_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_14, (MR_Integer) 1))));
        {
          MR_Word ProcInfo_23;
          MR_Word MaybeTermination_40;
          MR_Word Context_41;

          hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(ProcInfo0_12, &MaybeTermination_40);
          hlds__hlds_pred__proc_info_get_context_2_p_0(ProcInfo0_12, &Context_41);
          if ((MaybeTermination_40 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            succeeded = transform_hlds__term_util__attributes_imply_termination_1_p_0(Attributes_16);
            if (succeeded)
              hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0((MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_3[1])), ProcInfo0_12, &ProcInfo_23);
            else
            {
              MR_Word TermErr_43;
              MR_Word Var_53;
              MR_Word Var_54;
              MR_Word Var_55;
              MR_Word TermStatus_81;

              {
                Var_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_53, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(MR_mktag(3), Var_53, 1) = ((MR_Box) (Var_39));
              }
              {
                TermErr_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TermErr_43, 0) = ((MR_Box) (Context_41));
                MR_hl_field(MR_mktag(0), TermErr_43, 1) = ((MR_Box) (Var_53));
              }
              {
                Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (TermErr_43));
                MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Var_55));
              }
              {
                TermStatus_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), TermStatus_81, 0) = ((MR_Box) (Var_54));
              }
              hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(TermStatus_81, ProcInfo0_12, &ProcInfo_23);
            }
            *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_0_29;
          }
          else
          {
            MR_Word Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTermination_40, (MR_Integer) 0))));

            if (((MR_tag((MR_Word) Var_92)) == (MR_Integer) 1))
            {
              MR_Word TermErrs0_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_92, (MR_Integer) 0))));
              MR_Word ProcTerminates_89;

              ProcTerminates_89 = parse_tree__prog_data_foreign__get_terminates_1_f_0(Attributes_16);
              switch (ProcTerminates_89) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 2:
                  {
                    ProcInfo_23 = ProcInfo0_12;
                    *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_0_29;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    ProcInfo_23 = ProcInfo0_12;
                    *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_0_29;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word TermErrs_50;
                    MR_Word Var_72;
                    MR_Word Var_74;
                    MR_Word TermStatus_84;
                    MR_Word TermErr_85;
                    MR_Word ProcNamePieces_86;
                    MR_Word Pieces_87;
                    MR_Word Spec_88;

                    {
                      TermErr_85 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), TermErr_85, 0) = ((MR_Box) (Context_41));
                      MR_hl_field(MR_mktag(0), TermErr_85, 1) = ((MR_Box) ((MR_Unsigned) 28U));
                    }
                    {
                      TermErrs_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), TermErrs_50, 0) = ((MR_Box) (TermErr_85));
                      MR_hl_field(MR_mktag(1), TermErrs_50, 1) = ((MR_Box) (TermErrs0_49));
                    }
                    {
                      Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (TermErrs_50));
                    }
                    {
                      TermStatus_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), TermStatus_84, 0) = ((MR_Box) (Var_72));
                    }
                    hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(TermStatus_84, ProcInfo0_12, &ProcInfo_23);
                    ProcNamePieces_86 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(STATE_VARIABLE_ModuleInfo_0_27, (MR_Integer) 0, Var_39);
                    {
                      Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[5])));
                      MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (ProcNamePieces_86));
                    }
                    Pieces_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_74, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[17])));
                    {
                      Spec_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Spec_88, 0) = ((MR_Box) ((MR_String) "predicate \140transform_hlds.termination.check_foreign_code_attributes_of_proc\'/7"));
                      MR_hl_field(MR_mktag(1), Spec_88, 1) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(MR_mktag(1), Spec_88, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                      MR_hl_field(MR_mktag(1), Spec_88, 3) = ((MR_Box) (Context_41));
                      MR_hl_field(MR_mktag(1), Spec_88, 4) = ((MR_Box) (Pieces_87));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *STATE_VARIABLE_Specs_30 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_88));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_29));
                    }
                  }
                  break;
              }
            }
            else
            {
              MR_Word ProcTerminates_45;

              ProcTerminates_45 = parse_tree__prog_data_foreign__get_terminates_1_f_0(Attributes_16);
              switch (ProcTerminates_45) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 2:
                  {
                    ProcInfo_23 = ProcInfo0_12;
                    *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_0_29;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ProcNamePieces_46;
                    MR_Word Pieces_47;
                    MR_Word Spec_48;
                    MR_Word Var_59;
                    MR_Word Var_60;
                    MR_Word Var_63;
                    MR_Word TermStatus_82;
                    MR_Word TermErr_83;

                    {
                      TermErr_83 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), TermErr_83, 0) = ((MR_Box) (Context_41));
                      MR_hl_field(MR_mktag(0), TermErr_83, 1) = ((MR_Box) ((MR_Unsigned) 28U));
                    }
                    {
                      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (TermErr_83));
                      MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
                    }
                    {
                      TermStatus_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), TermStatus_82, 0) = ((MR_Box) (Var_59));
                    }
                    hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(TermStatus_82, ProcInfo0_12, &ProcInfo_23);
                    ProcNamePieces_46 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(STATE_VARIABLE_ModuleInfo_0_27, (MR_Integer) 0, Var_39);
                    {
                      Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__termination_scalar_common_1[5])));
                      MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (ProcNamePieces_46));
                    }
                    Pieces_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_63, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[24])));
                    {
                      Spec_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Spec_48, 0) = ((MR_Box) ((MR_String) "predicate \140transform_hlds.termination.check_foreign_code_attributes_of_proc\'/7"));
                      MR_hl_field(MR_mktag(1), Spec_48, 1) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(MR_mktag(1), Spec_48, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                      MR_hl_field(MR_mktag(1), Spec_48, 3) = ((MR_Box) (Context_41));
                      MR_hl_field(MR_mktag(1), Spec_48, 4) = ((MR_Box) (Pieces_47));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *STATE_VARIABLE_Specs_30 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_48));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_29));
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    ProcInfo_23 = ProcInfo0_12;
                    *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_0_29;
                  }
                  break;
              }
            }
          }
          hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(Var_39, PredInfo_11, ProcInfo_23, STATE_VARIABLE_ModuleInfo_0_27, STATE_VARIABLE_ModuleInfo_28);
        }
      }
      else
      {
        *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_0_29;
        *STATE_VARIABLE_ModuleInfo_28 = STATE_VARIABLE_ModuleInfo_0_27;
      }
    }
    else
    {
      *STATE_VARIABLE_ModuleInfo_28 = STATE_VARIABLE_ModuleInfo_0_27;
      *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_0_29;
    }
  }
}

static void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv9_STATE_VARIABLE_ModuleInfo_44;
  MR_Word conv8_STATE_VARIABLE_Specs_46;

  transform_hlds__termination__analyse_termination_in_scc_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv9_STATE_VARIABLE_ModuleInfo_44, ((MR_Word) (wrapper_arg_4)), &conv8_STATE_VARIABLE_Specs_46);
  *wrapper_arg_3 = ((MR_Box) (conv9_STATE_VARIABLE_ModuleInfo_44));
  *wrapper_arg_5 = ((MR_Box) (conv8_STATE_VARIABLE_Specs_46));
}

static void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_ModuleInfo_25;
  MR_Word conv4_STATE_VARIABLE_Specs_27;

  transform_hlds__termination__check_scc_pragmas_are_consistent_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_ModuleInfo_25, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_Specs_27);
  *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_ModuleInfo_25));
  *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_Specs_27));
}

static void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_ModuleInfo_28;
  MR_Word conv0_STATE_VARIABLE_Specs_30;

  transform_hlds__termination__check_foreign_code_attributes_in_scc_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ModuleInfo_28, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_30);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ModuleInfo_28));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_30));
}

void MR_CALL 
transform_hlds__termination__analyse_termination_in_module_3_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * STATE_VARIABLE_ModuleInfo_20,
  MR_Word * STATE_VARIABLE_Specs_21)
{
  MR_Word Globals_6;
  MR_Word TermNorm_7;
  MR_Word FunctorInfo_8;
  MR_Integer MaxErrors_9;
  MR_Integer MaxPaths_10;
  MR_Word PassInfo_11;
  MR_Word BelieveCheckTerm_12;
  MR_Word PredIds_13;
  MR_Word DepInfo_14;
  MR_Word SCCs_15;
  MR_Word PostSpecs_16;
  MR_Word ProcAnalysisKinds0_17;
  MR_Word ProcAnalysisKinds_18;
  MR_Word STATE_VARIABLE_ModuleInfo_24_24;
  MR_Word STATE_VARIABLE_ModuleInfo_25_25;
  MR_Word STATE_VARIABLE_ModuleInfo_27_27;
  MR_Word STATE_VARIABLE_Specs_28_28;
  MR_Word STATE_VARIABLE_ModuleInfo_29_29;
  MR_Word STATE_VARIABLE_Specs_30_30;
  MR_Word Var_31;
  MR_Word STATE_VARIABLE_ModuleInfo_32_32;
  MR_Word STATE_VARIABLE_Specs_33_33;
  MR_Box conv3_STATE_VARIABLE_ModuleInfo_27_27;
  MR_Box conv2_STATE_VARIABLE_Specs_28_28;
  MR_Box conv7_STATE_VARIABLE_ModuleInfo_29_29;
  MR_Box conv6_STATE_VARIABLE_Specs_30_30;
  MR_Box conv11_STATE_VARIABLE_ModuleInfo_32_32;
  MR_Box conv10_STATE_VARIABLE_Specs_33_33;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_19, &Globals_6);
  libs__globals__get_termination_norm_2_p_0(Globals_6, &TermNorm_7);
  FunctorInfo_8 = transform_hlds__term_norm__set_functor_info_2_f_0(STATE_VARIABLE_ModuleInfo_0_19, TermNorm_7);
  libs__globals__lookup_int_option_3_p_0(Globals_6, (MR_Integer) 520, &MaxErrors_9);
  libs__globals__lookup_int_option_3_p_0(Globals_6, (MR_Integer) 521, &MaxPaths_10);
  {
    PassInfo_11 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), PassInfo_11, 0) = ((MR_Box) (FunctorInfo_8));
    MR_hl_field(MR_mktag(0), PassInfo_11, 1) = ((MR_Box) (MaxErrors_9));
    MR_hl_field(MR_mktag(0), PassInfo_11, 2) = ((MR_Box) (MaxPaths_10));
  }
  transform_hlds__term_util__should_we_believe_check_termination_markers_2_p_0(STATE_VARIABLE_ModuleInfo_0_19, &BelieveCheckTerm_12);
  hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_0_19, &PredIds_13);
  transform_hlds__termination__term_preprocess_preds_4_p_0(BelieveCheckTerm_12, PredIds_13, STATE_VARIABLE_ModuleInfo_0_19, &STATE_VARIABLE_ModuleInfo_24_24);
  hlds__hlds_dependency_graph__module_info_ensure_dependency_info_3_p_0(STATE_VARIABLE_ModuleInfo_24_24, &STATE_VARIABLE_ModuleInfo_25_25, &DepInfo_14);
  SCCs_15 = libs__dependency_graph__dependency_info_get_bottom_up_sccs_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), DepInfo_14);
  mercury__list__foldl2_6_p_0((MR_Word) (&transform_hlds__termination_scalar_common_1[0]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__termination_scalar_common_1[1]), (MR_Word) (&transform_hlds__termination_scalar_common_2[2]), SCCs_15, ((MR_Box) (STATE_VARIABLE_ModuleInfo_25_25)), &conv3_STATE_VARIABLE_ModuleInfo_27_27, ((MR_Box) ((MR_Unsigned) 0U)), &conv2_STATE_VARIABLE_Specs_28_28);
  STATE_VARIABLE_ModuleInfo_27_27 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_27_27));
  STATE_VARIABLE_Specs_28_28 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_28_28));
  mercury__list__foldl2_6_p_0((MR_Word) (&transform_hlds__termination_scalar_common_1[0]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__termination_scalar_common_1[1]), (MR_Word) (&transform_hlds__termination_scalar_common_2[3]), SCCs_15, ((MR_Box) (STATE_VARIABLE_ModuleInfo_27_27)), &conv7_STATE_VARIABLE_ModuleInfo_29_29, ((MR_Box) (STATE_VARIABLE_Specs_28_28)), &conv6_STATE_VARIABLE_Specs_30_30);
  STATE_VARIABLE_ModuleInfo_29_29 = ((MR_Word) (conv7_STATE_VARIABLE_ModuleInfo_29_29));
  STATE_VARIABLE_Specs_30_30 = ((MR_Word) (conv6_STATE_VARIABLE_Specs_30_30));
  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&transform_hlds__termination_scalar_common_5[0]));
    MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (transform_hlds__termination__analyse_termination_in_module_3_p_0_3));
    MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (PassInfo_11));
  }
  mercury__list__foldl2_6_p_0((MR_Word) (&transform_hlds__termination_scalar_common_1[0]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__termination_scalar_common_1[1]), Var_31, SCCs_15, ((MR_Box) (STATE_VARIABLE_ModuleInfo_29_29)), &conv11_STATE_VARIABLE_ModuleInfo_32_32, ((MR_Box) (STATE_VARIABLE_Specs_30_30)), &conv10_STATE_VARIABLE_Specs_33_33);
  STATE_VARIABLE_ModuleInfo_32_32 = ((MR_Word) (conv11_STATE_VARIABLE_ModuleInfo_32_32));
  STATE_VARIABLE_Specs_33_33 = ((MR_Word) (conv10_STATE_VARIABLE_Specs_33_33));
  transform_hlds__post_term_analysis__run_post_term_analysis_2_p_0(STATE_VARIABLE_ModuleInfo_32_32, &PostSpecs_16);
  *STATE_VARIABLE_Specs_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), PostSpecs_16, STATE_VARIABLE_Specs_33_33);
  hlds__hlds_module__module_info_get_proc_analysis_kinds_2_p_0(STATE_VARIABLE_ModuleInfo_32_32, &ProcAnalysisKinds0_17);
  mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0), ((MR_Box) ((MR_Integer) 3)), ProcAnalysisKinds0_17, &ProcAnalysisKinds_18);
  hlds__hlds_module__module_info_set_proc_analysis_kinds_3_p_0(ProcAnalysisKinds_18, STATE_VARIABLE_ModuleInfo_32_32, STATE_VARIABLE_ModuleInfo_20);
}

static void MR_CALL 
transform_hlds__termination__term_preprocess_preds_4_p_0(
  MR_Word BelieveCheckTerm_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ModuleInfo_4 = STATE_VARIABLE_ModuleInfo_0_3;
    else
    {
      MR_Word PredId_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word PredIds_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ModuleInfo_15_15;
      MR_Word PredInfo0_16;
      MR_Word PredStatus_17;
      MR_Word Context_18;
      MR_Word ProcTable0_19;
      MR_Word Markers_20;
      MR_Word ProcIds_21;
      MR_Word ProcTable2_23;
      MR_Word ProcTable_30;
      MR_Word PredInfo_31;
      MR_Word ProcTable1_22;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_3;

      hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_3, PredId_10, &PredInfo0_16);
      hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo0_16, &PredStatus_17);
      hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo0_16, &Context_18);
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_16, &ProcTable0_19);
      hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo0_16, &Markers_20);
      ProcIds_21 = hlds__hlds_pred__pred_info_valid_procids_1_f_0(PredInfo0_16);
      succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(PredInfo0_16);
      if (succeeded)
      {
        transform_hlds__termination__set_builtin_terminates_6_p_0(ProcIds_21, PredId_10, PredInfo0_16, STATE_VARIABLE_ModuleInfo_0_3, ProcTable0_19, &ProcTable1_22);
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word SpecialPredId_61;
        MR_Word SpecPredId0_59;
        MR_Word ModuleName_56;
        MR_String Name_57;
        MR_Integer Arity_58;
        MR_Integer Var_65;
        MR_String Var_60;

        ModuleName_56 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo0_16);
        Name_57 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo0_16);
        Arity_58 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo0_16);
        succeeded = mdbcomp__prim_data__special_pred_name_arity_4_p_1(&SpecPredId0_59, Name_57, &Var_60, &Var_65);
        if (succeeded)
        {
          succeeded = (Arity_58 == Var_65);
          if (succeeded)
            succeeded = mdbcomp__builtin_modules__any_mercury_builtin_module_1_p_0(ModuleName_56);
        }
        if (succeeded)
        {
          SpecialPredId_61 = SpecPredId0_59;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word Origin_62;
          MR_Word Var_64;

          hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo0_16, &Origin_62);
          succeeded = ((MR_tag((MR_Word) Origin_62)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Origin_62, (MR_Integer) 0))));
            succeeded = ((MR_tag((MR_Word) Var_64)) == (MR_Integer) 0);
            if (succeeded)
              SpecialPredId_61 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_64, (MR_Integer) 0))) & (MR_Integer) 3);
          }
        }
        if (succeeded)
        {
          transform_hlds__termination__set_generated_terminates_4_p_0(ProcIds_21, SpecialPredId_61, ProcTable0_19, &ProcTable1_22);
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
        ProcTable2_23 = ProcTable1_22;
      else
      {
        MR_Word Var_32;

        Var_32 = hlds__status__pred_status_defined_in_this_module_1_f_0(PredStatus_17);
        succeeded = (Var_32 == (MR_Integer) 1);
        if (succeeded)
        {
          succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_20, (MR_Integer) 19);
          if (succeeded)
            transform_hlds__termination__change_procs_termination_info_5_p_0(ProcIds_21, (MR_Integer) 1, (MR_Word) (&transform_hlds__termination_scalar_common_3[0]), ProcTable0_19, &ProcTable2_23);
          else
            ProcTable2_23 = ProcTable0_19;
        }
        else
        {
          MR_Word ArgSizeError_26;
          MR_Word ArgSizeInfo_27;
          MR_Word Var_47;
          MR_Word ProcTable1_55;

          succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_20, (MR_Integer) 19);
          if (!(succeeded))
          {
            MR_Word Var_38;

            succeeded = (BelieveCheckTerm_1 == (MR_Integer) 1);
            if (succeeded)
            {
              Var_38 = (MR_Integer) 21;
              succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_20, Var_38);
            }
          }
          if (succeeded)
            transform_hlds__termination__change_procs_termination_info_5_p_0(ProcIds_21, (MR_Integer) 1, (MR_Word) (&transform_hlds__termination_scalar_common_3[0]), ProcTable0_19, &ProcTable1_55);
          else
          {
            MR_Word TerminationError_24;
            MR_Word TerminationInfo_25;
            MR_Word Var_43;

            {
              TerminationError_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TerminationError_24, 0) = ((MR_Box) (Context_18));
              MR_hl_field(MR_mktag(0), TerminationError_24, 1) = ((MR_Box) ((MR_Unsigned) 4U));
            }
            {
              Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (TerminationError_24));
              MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              TerminationInfo_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), TerminationInfo_25, 0) = ((MR_Box) (Var_43));
            }
            transform_hlds__termination__change_procs_termination_info_5_p_0(ProcIds_21, (MR_Integer) 0, TerminationInfo_25, ProcTable0_19, &ProcTable1_55);
          }
          {
            ArgSizeError_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ArgSizeError_26, 0) = ((MR_Box) (Context_18));
            MR_hl_field(MR_mktag(0), ArgSizeError_26, 1) = ((MR_Box) ((MR_Unsigned) 4U));
          }
          {
            Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (ArgSizeError_26));
            MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            ArgSizeInfo_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ArgSizeInfo_27, 0) = ((MR_Box) (Var_47));
          }
          transform_hlds__termination__change_procs_arg_size_info_5_p_0(ProcIds_21, (MR_Integer) 0, ArgSizeInfo_27, ProcTable1_55, &ProcTable2_23);
        }
      }
      succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_20, (MR_Integer) 20);
      if (succeeded)
      {
        MR_Word RequestError_28;
        MR_Word RequestTerminationInfo_29;
        MR_Word Var_51;
        MR_Word Var_52;

        {
          Var_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_51, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(MR_mktag(3), Var_51, 1) = ((MR_Box) (PredId_10));
        }
        {
          RequestError_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), RequestError_28, 0) = ((MR_Box) (Context_18));
          MR_hl_field(MR_mktag(0), RequestError_28, 1) = ((MR_Box) (Var_51));
        }
        {
          Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (RequestError_28));
          MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          RequestTerminationInfo_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), RequestTerminationInfo_29, 0) = ((MR_Box) (Var_52));
        }
        transform_hlds__termination__change_procs_termination_info_5_p_0(ProcIds_21, (MR_Integer) 1, RequestTerminationInfo_29, ProcTable2_23, &ProcTable_30);
      }
      else
        ProcTable_30 = ProcTable2_23;
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_30, PredInfo0_16, &PredInfo_31);
      hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_10, PredInfo_31, STATE_VARIABLE_ModuleInfo_0_3, &STATE_VARIABLE_ModuleInfo_15_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = PredIds_11;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_3 = STATE_VARIABLE_ModuleInfo_15_15;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_ModuleInfo_0_3 = next_value_of_STATE_VARIABLE_ModuleInfo_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__termination__change_procs_termination_info_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Override_2,
  MR_Word Termination_3,
  MR_Word STATE_VARIABLE_ProcTable_0_4,
  MR_Word * STATE_VARIABLE_ProcTable_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ProcTable_5 = STATE_VARIABLE_ProcTable_0_4;
    else
    {
      MR_Integer ProcId_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ProcIds_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ProcInfo0_16;
      MR_Word STATE_VARIABLE_ProcTable_22_22;
      MR_Box conv0_ProcInfo0_16;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ProcTable_0_4;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), STATE_VARIABLE_ProcTable_0_4, ((MR_Box) (ProcId_11)), &conv0_ProcInfo0_16);
      ProcInfo0_16 = ((MR_Word) (conv0_ProcInfo0_16));
      succeeded = (Override_2 == (MR_Integer) 1);
      if (!(succeeded))
      {
        MR_Word Var_25;

        hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(ProcInfo0_16, &Var_25);
        succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__termination_scalar_common_1[36]), ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_25)));
      }
      if (succeeded)
      {
        MR_Word ProcInfo_17;
        MR_Word Var_21;

        {
          Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Termination_3));
        }
        hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(Var_21, ProcInfo0_16, &ProcInfo_17);
        mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_11)), ((MR_Box) (ProcInfo_17)), STATE_VARIABLE_ProcTable_0_4, &STATE_VARIABLE_ProcTable_22_22);
      }
      else
        STATE_VARIABLE_ProcTable_22_22 = STATE_VARIABLE_ProcTable_0_4;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ProcIds_12;
      next_value_of_STATE_VARIABLE_ProcTable_0_4 = STATE_VARIABLE_ProcTable_22_22;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ProcTable_0_4 = next_value_of_STATE_VARIABLE_ProcTable_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__termination__change_procs_arg_size_info_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Override_2,
  MR_Word ArgSize_3,
  MR_Word STATE_VARIABLE_ProcTable_0_4,
  MR_Word * STATE_VARIABLE_ProcTable_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ProcTable_5 = STATE_VARIABLE_ProcTable_0_4;
    else
    {
      MR_Integer ProcId_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ProcIds_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ProcInfo0_16;
      MR_Word STATE_VARIABLE_ProcTable_22_22;
      MR_Box conv0_ProcInfo0_16;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ProcTable_0_4;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), STATE_VARIABLE_ProcTable_0_4, ((MR_Box) (ProcId_11)), &conv0_ProcInfo0_16);
      ProcInfo0_16 = ((MR_Word) (conv0_ProcInfo0_16));
      succeeded = (Override_2 == (MR_Integer) 1);
      if (!(succeeded))
      {
        MR_Word Var_25;

        hlds__hlds_pred__proc_info_get_maybe_arg_size_info_2_p_0(ProcInfo0_16, &Var_25);
        succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__termination_scalar_common_1[35]), ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_25)));
      }
      if (succeeded)
      {
        MR_Word ProcInfo_17;
        MR_Word Var_21;

        {
          Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (ArgSize_3));
        }
        hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_p_0(Var_21, ProcInfo0_16, &ProcInfo_17);
        mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_11)), ((MR_Box) (ProcInfo_17)), STATE_VARIABLE_ProcTable_0_4, &STATE_VARIABLE_ProcTable_22_22);
      }
      else
        STATE_VARIABLE_ProcTable_22_22 = STATE_VARIABLE_ProcTable_0_4;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ProcIds_12;
      next_value_of_STATE_VARIABLE_ProcTable_0_4 = STATE_VARIABLE_ProcTable_22_22;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ProcTable_0_4 = next_value_of_STATE_VARIABLE_ProcTable_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__termination__set_builtin_terminates_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PredId_2,
  MR_Word PredInfo_3,
  MR_Word ModuleInfo_4,
  MR_Word STATE_VARIABLE_ProcTable_0_5,
  MR_Word * STATE_VARIABLE_ProcTable_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ProcTable_6 = STATE_VARIABLE_ProcTable_0_5;
    else
    {
      MR_Integer ProcId_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ProcIds_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ProcInfo0_19;
      MR_Word ArgSizeInfo_22;
      MR_Word ProcInfo1_26;
      MR_Word ProcInfo_27;
      MR_Word STATE_VARIABLE_ProcTable_39_39;
      MR_Box conv0_ProcInfo0_19;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ProcTable_0_5;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), STATE_VARIABLE_ProcTable_0_5, ((MR_Box) (ProcId_13)), &conv0_ProcInfo0_19);
      ProcInfo0_19 = ((MR_Word) (conv0_ProcInfo0_19));
      succeeded = transform_hlds__term_util__all_args_input_or_zero_size_3_p_0(ModuleInfo_4, PredInfo_3, ProcInfo0_19);
      if (succeeded)
      {
        MR_Word HeadVars_20;
        MR_Word UsedArgs_21;
        MR_Word Var_31;

        hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo0_19, &HeadVars_20);
        transform_hlds__term_util__make_bool_list_3_p_0((MR_Word) (&transform_hlds__termination_scalar_common_1[4]), HeadVars_20, (MR_Word) ((MR_Unsigned) 0U), &UsedArgs_21);
        {
          Var_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (UsedArgs_21));
        }
        {
          ArgSizeInfo_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ArgSizeInfo_22, 0) = ((MR_Box) (Var_31));
        }
      }
      else
      {
        MR_Word Context_23;
        MR_Word Error_24;
        MR_Word ArgSizeError_25;
        MR_Word Var_33;
        MR_Word Var_34;

        hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_3, &Context_23);
        {
          Error_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Error_24, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Error_24, 1) = ((MR_Box) (PredId_2));
        }
        {
          ArgSizeError_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ArgSizeError_25, 0) = ((MR_Box) (Context_23));
          MR_hl_field(MR_mktag(0), ArgSizeError_25, 1) = ((MR_Box) (Error_24));
        }
        {
          Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (ArgSizeError_25));
          MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
        }
        {
          ArgSizeInfo_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ArgSizeInfo_22, 0) = ((MR_Box) (Var_33));
        }
      }
      hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_p_0(ArgSizeInfo_22, ProcInfo0_19, &ProcInfo1_26);
      hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0((MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_3[1])), ProcInfo1_26, &ProcInfo_27);
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_13)), ((MR_Box) (ProcInfo_27)), STATE_VARIABLE_ProcTable_0_5, &STATE_VARIABLE_ProcTable_39_39);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ProcIds_14;
      next_value_of_STATE_VARIABLE_ProcTable_0_5 = STATE_VARIABLE_ProcTable_39_39;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ProcTable_0_5 = next_value_of_STATE_VARIABLE_ProcTable_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__termination__set_generated_terminates_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word SpecialPredId_2,
  MR_Word STATE_VARIABLE_ProcTable_0_3,
  MR_Word * STATE_VARIABLE_ProcTable_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ProcTable_4 = STATE_VARIABLE_ProcTable_0_3;
    else
    {
      MR_Integer ProcId_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ProcIds_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ProcInfo0_13;
      MR_Word HeadVars_14;
      MR_Word ArgSize_15;
      MR_Word Termination_16;
      MR_Word ProcInfo1_17;
      MR_Word ProcInfo_18;
      MR_Word Var_21;
      MR_Word Var_22;
      MR_Word STATE_VARIABLE_ProcTable_23_23;
      MR_Box conv0_ProcInfo0_13;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ProcTable_0_3;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), STATE_VARIABLE_ProcTable_0_3, ((MR_Box) (ProcId_9)), &conv0_ProcInfo0_13);
      ProcInfo0_13 = ((MR_Word) (conv0_ProcInfo0_13));
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo0_13, &HeadVars_14);
      switch (SpecialPredId_2) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          {
            MR_Word OutList_26;

            transform_hlds__term_util__make_bool_list_3_p_0((MR_Word) (&transform_hlds__termination_scalar_common_1[4]), HeadVars_14, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[32])), &OutList_26);
            {
              ArgSize_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ArgSize_15, 0) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(0), ArgSize_15, 1) = ((MR_Box) (OutList_26));
            }
            Termination_16 = (MR_Word) (&transform_hlds__termination_scalar_common_3[0]);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word OutList_37;

            transform_hlds__term_util__make_bool_list_3_p_0((MR_Word) (&transform_hlds__termination_scalar_common_1[4]), HeadVars_14, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[31])), &OutList_37);
            {
              ArgSize_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ArgSize_15, 0) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(0), ArgSize_15, 1) = ((MR_Box) (OutList_37));
            }
            Termination_16 = (MR_Word) (&transform_hlds__termination_scalar_common_3[0]);
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word OutList_36;

            transform_hlds__term_util__make_bool_list_3_p_0((MR_Word) (&transform_hlds__termination_scalar_common_1[4]), HeadVars_14, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__termination_scalar_common_1[34])), &OutList_36);
            {
              ArgSize_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ArgSize_15, 0) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(0), ArgSize_15, 1) = ((MR_Box) (OutList_36));
            }
            Termination_16 = (MR_Word) (&transform_hlds__termination_scalar_common_3[0]);
          }
          break;
      }
      {
        Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (ArgSize_15));
      }
      hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_p_0(Var_21, ProcInfo0_13, &ProcInfo1_17);
      {
        Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Termination_16));
      }
      hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(Var_22, ProcInfo1_17, &ProcInfo_18);
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_9)), ((MR_Box) (ProcInfo_18)), STATE_VARIABLE_ProcTable_0_3, &STATE_VARIABLE_ProcTable_23_23);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ProcIds_10;
      next_value_of_STATE_VARIABLE_ProcTable_0_3 = STATE_VARIABLE_ProcTable_23_23;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ProcTable_0_3 = next_value_of_STATE_VARIABLE_ProcTable_0_3;
      continue;
    }
    break;
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

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__termination__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.termination.
