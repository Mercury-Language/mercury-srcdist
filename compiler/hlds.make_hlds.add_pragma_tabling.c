/*
** Automatically generated from `add_pragma_tabling.m'
** by the Mercury compiler,
** version rotd-2025-10-05
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


// :- module hlds.make_hlds.add_pragma_tabling.
// :- implementation.

/*
INIT mercury__hlds__make_hlds__add_pragma_tabling__init
ENDINIT
*/

#include "hlds.make_hlds.add_pragma_tabling.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
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
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
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
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_test.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_code_util.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_hlds.mih"
#include "hlds.make_hlds_error.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.llds_out.mih"
#include "ll_backend.rtti_out.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.mlds.mih"
#include "ml_backend.mlds_to_c_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_out_sym_name.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.item_types.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.add_clause.mih"
#include "hlds.make_hlds.add_foreign_proc.mih"
#include "hlds.make_hlds.add_pred.mih"
#include "hlds.make_hlds.make_hlds_types.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "ll_backend.llds_out.llds_out_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_tabling__maybe__pti_maybe_1__plain_parse_tree__prog_data_pragma__type_ctor_info_table_attributes_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_tabling__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_tabling__IntroducedFrom__pred__table_info_c_global_var_name__753__1_2_p_0(
  MR_Word Target_10,
  MR_Word HeadVar__2_26);

static void MR_CALL 
hlds__make_hlds__add_pragma_tabling__module_add_pragma_tabled_for_pred_16_p_0(
  MR_Word ProgressStream_17,
  MR_Word TabledMethod0_18,
  MR_Word PFUMM_19,
  MR_Word PredModuleName_20,
  MR_String PredName_21,
  MR_Word MaybeAttributes_22,
  MR_Word Context_23,
  MR_Word ItemMercuryStatus_24,
  MR_Word PredStatus_25,
  MR_Word PredId_26,
  MR_Word STATE_VARIABLE_ModuleInfo_0_70,
  MR_Word * STATE_VARIABLE_ModuleInfo_71,
  MR_Word STATE_VARIABLE_QualInfo_0_72,
  MR_Word * STATE_VARIABLE_QualInfo_73,
  MR_Word STATE_VARIABLE_Specs_0_74,
  MR_Word * STATE_VARIABLE_Specs_75);

static void MR_CALL 
hlds__make_hlds__add_pragma_tabling__set_eval_method_create_aux_preds_list_21_p_0(
  MR_Word ProgressStream_1,
  MR_Word PredInfo_2,
  MR_Word PredOrFunc_3,
  MR_Word PredModuleName_4,
  MR_String PredName_5,
  MR_Word UserArity_6,
  MR_Word HeadVar__7_7,
  MR_Word SingleProc_8,
  MR_Word Context_9,
  MR_Word TabledMethod_10,
  MR_Word MaybeAttributes_11,
  MR_Word ItemMercuryStatus_12,
  MR_Word PredStatus_13,
  MR_Word STATE_VARIABLE_ProcTable_0_14,
  MR_Word * STATE_VARIABLE_ProcTable_15,
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17,
  MR_Word STATE_VARIABLE_QualInfo_0_18,
  MR_Word * STATE_VARIABLE_QualInfo_19,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21);

static void MR_CALL 
hlds__make_hlds__add_pragma_tabling__set_eval_method_create_aux_preds_22_p_0(
  MR_Word ProgressStream_23,
  MR_Word PredInfo_24,
  MR_Word PredOrFunc_25,
  MR_Word PredModuleName_26,
  MR_String PredName_27,
  MR_Word UserArity_28,
  MR_Integer ProcId_29,
  MR_Word ProcInfo0_30,
  MR_Word SingleProc_31,
  MR_Word Context_32,
  MR_Word TabledMethod_33,
  MR_Word MaybeAttributes_34,
  MR_Word ItemMercuryStatus_35,
  MR_Word PredStatus_36,
  MR_Word STATE_VARIABLE_ProcTable_0_69,
  MR_Word * STATE_VARIABLE_ProcTable_70,
  MR_Word STATE_VARIABLE_ModuleInfo_0_71,
  MR_Word * STATE_VARIABLE_ModuleInfo_72,
  MR_Word STATE_VARIABLE_QualInfo_0_73,
  MR_Word * STATE_VARIABLE_QualInfo_74,
  MR_Word STATE_VARIABLE_Specs_0_75,
  MR_Word * STATE_VARIABLE_Specs_76);

static void MR_CALL 
hlds__make_hlds__add_pragma_tabling__check_pred_args_against_tabling_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Integer ArgNum_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
hlds__make_hlds__add_pragma_tabling__check_pred_args_against_tabling_methods_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Integer ArgNum_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
hlds__make_hlds__add_pragma_tabling__create_tabling_reset_pred_17_p_0(
  MR_Word ProgressStream_18,
  MR_Word PredOrFunc_19,
  MR_Word PredModuleName_20,
  MR_String PredName_21,
  MR_Word UserArity_22,
  MR_Integer ProcId_23,
  MR_Word SingleProc_24,
  MR_Word Context_25,
  MR_Word IsTablingSupported_26,
  MR_Word ItemMercuryStatus_27,
  MR_Word PredStatus_28,
  MR_Word STATE_VARIABLE_ModuleInfo_0_63,
  MR_Word * STATE_VARIABLE_ModuleInfo_64,
  MR_Word STATE_VARIABLE_QualInfo_0_65,
  MR_Word * STATE_VARIABLE_QualInfo_66,
  MR_Word STATE_VARIABLE_Specs_0_67,
  MR_Word * STATE_VARIABLE_Specs_68);

static void MR_CALL 
hlds__make_hlds__add_pragma_tabling__create_tabling_statistics_pred_17_p_0(
  MR_Word ProgressStream_18,
  MR_Word PredOrFunc_19,
  MR_Word PredModuleName_20,
  MR_String PredName_21,
  MR_Word UserArity_22,
  MR_Integer ProcId_23,
  MR_Word SingleProc_24,
  MR_Word Context_25,
  MR_Word IsTablingSupported_26,
  MR_Word ItemMercuryStatus_27,
  MR_Word PredStatus_28,
  MR_Word STATE_VARIABLE_ModuleInfo_0_74,
  MR_Word * STATE_VARIABLE_ModuleInfo_75,
  MR_Word STATE_VARIABLE_QualInfo_0_76,
  MR_Word * STATE_VARIABLE_QualInfo_77,
  MR_Word STATE_VARIABLE_Specs_0_78,
  MR_Word * STATE_VARIABLE_Specs_79);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_tabling__table_info_c_global_var_name_3_f_0_1(
  MR_Box closure_arg);

static MR_String MR_CALL 
hlds__make_hlds__add_pragma_tabling__table_info_c_global_var_name_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word PFSymNameArity_6,
  MR_Integer ProcId_7);

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma_tabling__tabled_eval_method_needs_stratification_1_f_0(
  MR_Word TabledMethod_3);

static void MR_CALL 
hlds__make_hlds__add_pragma_tabling__module_add_pragma_tabled_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);


static /* final */ const MR_Box hlds__make_hlds__add_pragma_tabling_scalar_common_1[99][2];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_tabling_scalar_common_2[5][1];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_tabling_scalar_common_3[1][19];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_tabling_scalar_common_4[1][5];




static /* final */ const MR_Box hlds__make_hlds__add_pragma_tabling_scalar_common_1[99][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[1]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[3]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "cannot request statistics"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[5]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for the ambiguous name"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[7]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[9]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "would have an ambiguous name too."))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[11])))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "statistics predicate"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[13])))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "since the compiler-generated"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[15])))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "cannot request allow_reset"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[18]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "since the compiler-generated reset predicate"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[13])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning:"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[22]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "has both a"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[24]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "and a"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[26]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[28]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_String) "inline"))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[29])))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The inline pragma"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[32]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  34 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[33])))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "will be ignored,"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[35]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "option to suppress this warning."))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[11])))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--no-warn-table-with-inline"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[38])))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "You can use the"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[40])))
  },
  /* row  43 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[42])))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "because tabled predicates cannot be inlined."))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[43])))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: a"))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "may not specify"))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[47]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "that it is for an imported"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "such as"))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[50]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[52]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for the"))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "which has"))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[55]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "no declared modes."))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[57]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[59]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "undeclared mode"))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[61]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of"))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error in"))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "has"))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[66]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "duplicate"))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "pragmas"))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[69]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "specified."))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[11])))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "tabling pragmas specified,"))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[73]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "two conflicting"))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[75]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[74])))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[77]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  79 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "too many argument tabling methods specified."))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[11])))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "not enough argument tabling methods specified."))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[82]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[11])))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in"))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "argument tabling method"))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[85]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[65]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[86])))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[88]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "input modes."))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[90]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "not compatible with"))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[92]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[91])))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "output modes."))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[94]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[92]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[95])))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is neither input or output."))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[97]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[11])))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_tabling_scalar_common_2[5][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 183U) },
  /* row   3 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   4 */
  { ((MR_Box) ((MR_Integer) 1)) },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_tabling_scalar_common_3[1][19] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 16)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tabled_eval_method_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pred_func_or_unknown_maybe_modes_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_tabling__maybe__pti_maybe_1__plain_parse_tree__prog_data_pragma__type_ctor_info_table_attributes_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_pred_status_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_tabling__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_tabling__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_tabling_scalar_common_4[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_compilation_target_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_compilation_target_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_tabling__maybe__pti_maybe_1__plain_parse_tree__prog_data_pragma__type_ctor_info_table_attributes_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_table_attributes_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_tabling__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_tabling__IntroducedFrom__pred__table_info_c_global_var_name__753__1_2_p_0(
  MR_Word Target_10,
  MR_Word HeadVar__2_26)
{
  MR_bool succeeded = (Target_10 == HeadVar__2_26);

  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_pragma_tabling__module_add_pragma_tabled_for_pred_16_p_0(
  MR_Word ProgressStream_17,
  MR_Word TabledMethod0_18,
  MR_Word PFUMM_19,
  MR_Word PredModuleName_20,
  MR_String PredName_21,
  MR_Word MaybeAttributes_22,
  MR_Word Context_23,
  MR_Word ItemMercuryStatus_24,
  MR_Word PredStatus_25,
  MR_Word PredId_26,
  MR_Word STATE_VARIABLE_ModuleInfo_0_70,
  MR_Word * STATE_VARIABLE_ModuleInfo_71,
  MR_Word STATE_VARIABLE_QualInfo_0_72,
  MR_Word * STATE_VARIABLE_QualInfo_73,
  MR_Word STATE_VARIABLE_Specs_0_74,
  MR_Word * STATE_VARIABLE_Specs_75)
{
  MR_bool succeeded;
  MR_Word Globals_30;
  MR_Word TabledMethod_33;
  MR_Word PredInfo0_34;
  MR_Word MaybePredOrFunc_35;
  MR_Word UserArity_36;
  MR_Word MaybeModes_37;
  MR_Word PredOrFunc_38;
  MR_Word PredSymName_39;
  MR_Word PredFormArity_40;
  MR_Word PFSymNameArity_41;
  MR_String TabledMethodStr_42;
  MR_Word VeryVerbose_43;
  MR_Word Markers_46;
  MR_Word STATE_VARIABLE_Specs_1_159;
  MR_Word WarnTableWithInline_47;
  MR_Word Var_89;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_70, &Globals_30);
  succeeded = ((MR_tag((MR_Word) TabledMethod0_18)) == (MR_Integer) 3);
  if (succeeded)
  {
    MR_Word OwnStacks_32;

    libs__globals__lookup_bool_option_3_p_0(Globals_30, (MR_Integer) 95, &OwnStacks_32);
    switch (OwnStacks_32) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        TabledMethod_33 = (MR_Word) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_2[0]));
        break;
      case (MR_Integer) 1:
        TabledMethod_33 = (MR_Word) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_2[1]));
        break;
    }
  }
  else
    TabledMethod_33 = TabledMethod0_18;
  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_70, PredId_26, &PredInfo0_34);
  parse_tree__prog_item__pfumm_to_maybe_pf_arity_maybe_modes_4_p_0(PFUMM_19, &MaybePredOrFunc_35, &UserArity_36, &MaybeModes_37);
  if ((MaybePredOrFunc_35 == (MR_Word) ((MR_Unsigned) 0U)))
    PredOrFunc_38 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo0_34);
  else
    PredOrFunc_38 = ((MR_Word) ((MR_hl_field(1, MaybePredOrFunc_35, 0))));
  {
    PredSymName_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, PredSymName_39, 0) = ((MR_Box) (PredModuleName_20));
    MR_hl_field(1, PredSymName_39, 1) = ((MR_Box) (PredName_21));
  }
  parse_tree__prog_util__user_arity_pred_form_arity_3_p_0(PredOrFunc_38, UserArity_36, &PredFormArity_40);
  {
    PFSymNameArity_41 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PFSymNameArity_41, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_38));
    MR_hl_field(0, PFSymNameArity_41, 1) = ((MR_Box) (PredSymName_39));
    MR_hl_field(0, PFSymNameArity_41, 2) = ((MR_Box) (UserArity_36));
  }
  TabledMethodStr_42 = parse_tree__parse_tree_out_misc__tabled_eval_method_to_string_1_f_0(TabledMethod_33);
  libs__globals__lookup_bool_option_3_p_0(Globals_30, (MR_Integer) 132, &VeryVerbose_43);
  switch (VeryVerbose_43) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String IdStr_45;

        IdStr_45 = parse_tree__parse_tree_out_sym_name__pf_sym_name_pred_form_arity_to_string_3_f_0(PredOrFunc_38, PredSymName_39, PredFormArity_40);
        mercury__io__write_string_4_p_0(ProgressStream_17, (MR_String) "% Processing \140:- pragma ");
        mercury__io__write_string_4_p_0(ProgressStream_17, TabledMethodStr_42);
        mercury__io__write_string_4_p_0(ProgressStream_17, (MR_String) "\' for ");
        mercury__io__write_string_4_p_0(ProgressStream_17, IdStr_45);
        mercury__io__write_string_4_p_0(ProgressStream_17, (MR_String) "...\n");
      }
      break;
  }
  hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo0_34, &Markers_46);
  succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_46, (MR_Integer) 6);
  if (succeeded)
  {
    Var_89 = (MR_Integer) 183;
    libs__globals__lookup_bool_option_3_p_0(Globals_30, Var_89, &WarnTableWithInline_47);
    succeeded = (WarnTableWithInline_47 == (MR_Integer) 1);
  }
  if (succeeded)
  {
    MR_Word InlineWarningPieces_48;
    MR_Word InlineWarningSpec_50;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word Var_99;
    MR_Word Var_104;
    MR_Word Var_105;
    MR_Word Var_106;
    MR_Word Var_107;
    MR_Word Var_112;
    MR_Word Var_117;
    MR_Word Var_118;
    MR_Word Var_126;
    MR_Word Var_133;
    MR_Word Var_134;

    {
      Var_97 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_97, 0) = ((MR_Box) ((MR_Unsigned) 18U));
      MR_hl_field(3, Var_97, 1) = ((MR_Box) (PFSymNameArity_41));
    }
    {
      Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_96, 0) = ((MR_Box) (Var_97));
      MR_hl_field(1, Var_96, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_95 = parse_tree__error_spec__color_as_subject_1_f_0(Var_96);
    {
      Var_107 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_107, 0) = ((MR_Box) ((MR_Unsigned) 36U));
      MR_hl_field(3, Var_107, 1) = ((MR_Box) (TabledMethodStr_42));
    }
    {
      Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_106, 0) = ((MR_Box) (Var_107));
      MR_hl_field(1, Var_106, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[2])));
    }
    Var_105 = parse_tree__error_spec__color_as_inconsistent_1_f_0(Var_106);
    Var_118 = parse_tree__error_spec__color_as_inconsistent_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[31])));
    Var_134 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[36])));
    Var_133 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_134, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[45])));
    Var_126 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[34])), Var_133);
    Var_117 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_118, Var_126);
    Var_112 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[27])), Var_117);
    Var_104 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_105, Var_112);
    Var_99 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[25])), Var_104);
    Var_94 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_95, Var_99);
    InlineWarningPieces_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[23])), Var_94);
    {
      InlineWarningSpec_50 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, InlineWarningSpec_50, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_tabling.module_add_pragma_tabled_for_pred\'/16"));
      MR_hl_field(0, InlineWarningSpec_50, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_2[2])));
      MR_hl_field(0, InlineWarningSpec_50, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(0, InlineWarningSpec_50, 3) = ((MR_Box) (Context_23));
      MR_hl_field(0, InlineWarningSpec_50, 4) = ((MR_Box) (InlineWarningPieces_48));
    }
    {
      STATE_VARIABLE_Specs_1_159 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Specs_1_159, 0) = ((MR_Box) (InlineWarningSpec_50));
      MR_hl_field(1, STATE_VARIABLE_Specs_1_159, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_74));
    }
  }
  else
    STATE_VARIABLE_Specs_1_159 = STATE_VARIABLE_Specs_0_74;
  succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo0_34);
  if (succeeded)
  {
    MR_Integer UserArityInt_51 = (MR_Integer) (UserArity_36);
    MR_Word SNA_52;
    MR_Word Pieces_53;
    MR_Word Spec_54;
    MR_Word Var_160;
    MR_Word Var_163;
    MR_Word Var_164;
    MR_Word Var_169;
    MR_Word Var_170;
    MR_Word Var_175;
    MR_Word Var_176;
    MR_Word Var_179;
    MR_Word Var_180;
    MR_Word Var_185;
    MR_Word Var_186;
    MR_Word Var_187;
    MR_Word Var_188;

    {
      SNA_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SNA_52, 0) = ((MR_Box) (PredSymName_39));
      MR_hl_field(0, SNA_52, 1) = ((MR_Box) (UserArityInt_51));
    }
    {
      Var_164 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_164, 0) = ((MR_Box) ((MR_Unsigned) 36U));
      MR_hl_field(3, Var_164, 1) = ((MR_Box) (TabledMethodStr_42));
    }
    {
      Var_163 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_163, 0) = ((MR_Box) (Var_164));
      MR_hl_field(1, Var_163, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[2])));
    }
    {
      Var_160 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_160, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[46])));
      MR_hl_field(1, Var_160, 1) = ((MR_Box) (Var_163));
    }
    Var_170 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[48])));
    {
      Var_180 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_180, 0) = ((MR_Box) ((MR_Unsigned) 31U));
      MR_hl_field(3, Var_180, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_38));
    }
    {
      Var_179 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_179, 0) = ((MR_Box) (Var_180));
      MR_hl_field(1, Var_179, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[51])));
    }
    {
      Var_176 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_176, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[49])));
      MR_hl_field(1, Var_176, 1) = ((MR_Box) (Var_179));
    }
    {
      Var_188 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_188, 0) = ((MR_Box) ((MR_Unsigned) 14U));
      MR_hl_field(3, Var_188, 1) = ((MR_Box) (SNA_52));
    }
    {
      Var_187 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_187, 0) = ((MR_Box) (Var_188));
      MR_hl_field(1, Var_187, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[53])));
    }
    Var_186 = parse_tree__error_spec__color_as_subject_1_f_0(Var_187);
    Var_185 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_186, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[11])));
    Var_175 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_176, Var_185);
    Var_169 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_170, Var_175);
    Pieces_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_160, Var_169);
    {
      Spec_54 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_54, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_tabling.module_add_pragma_tabled_for_pred\'/16"));
      MR_hl_field(0, Spec_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_54, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(0, Spec_54, 3) = ((MR_Box) (Context_23));
      MR_hl_field(0, Spec_54, 4) = ((MR_Box) (Pieces_53));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_75 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_54));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_1_159));
    }
    *STATE_VARIABLE_QualInfo_73 = STATE_VARIABLE_QualInfo_0_72;
    *STATE_VARIABLE_ModuleInfo_71 = STATE_VARIABLE_ModuleInfo_0_70;
  }
  else
  {
    MR_Word NeedsStrat_55;
    MR_Word ProcTable0_58;
    MR_Word STATE_VARIABLE_ModuleInfo_1_200;

    NeedsStrat_55 = hlds__make_hlds__add_pragma_tabling__tabled_eval_method_needs_stratification_1_f_0(TabledMethod_33);
    switch (NeedsStrat_55) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_ModuleInfo_1_200 = STATE_VARIABLE_ModuleInfo_0_70;
        break;
      case (MR_Integer) 1:
        {
          MR_Word StratPredIds0_56;
          MR_Word StratPredIds_57;

          hlds__hlds_module__module_info_get_must_be_stratified_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_70, &StratPredIds0_56);
          mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_26)), StratPredIds0_56, &StratPredIds_57);
          hlds__hlds_module__module_info_set_must_be_stratified_preds_3_p_0(StratPredIds_57, STATE_VARIABLE_ModuleInfo_0_70, &STATE_VARIABLE_ModuleInfo_1_200);
        }
        break;
    }
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_34, &ProcTable0_58);
    if ((MaybeModes_37 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ExistingProcs_64;

      mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_58, &ExistingProcs_64);
      if ((ExistingProcs_64 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_243;
        MR_Word Var_246;
        MR_Word Var_247;
        MR_Word Var_248;
        MR_Word Var_251;
        MR_Word Var_254;
        MR_Word Var_255;
        MR_Word Var_257;
        MR_Word Var_258;
        MR_Word Var_259;
        MR_Word Var_260;
        MR_Word Var_265;
        MR_Word Var_270;
        MR_Word Var_271;
        MR_Integer UserArityInt_299 = (MR_Integer) (UserArity_36);
        MR_Word SNA_300;
        MR_Word Pieces_301;
        MR_Word Spec_302;

        {
          SNA_300 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, SNA_300, 0) = ((MR_Box) (PredSymName_39));
          MR_hl_field(0, SNA_300, 1) = ((MR_Box) (UserArityInt_299));
        }
        {
          Var_247 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_247, 0) = ((MR_Box) ((MR_Unsigned) 36U));
          MR_hl_field(3, Var_247, 1) = ((MR_Box) (TabledMethodStr_42));
        }
        {
          Var_255 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_255, 0) = ((MR_Box) ((MR_Unsigned) 31U));
          MR_hl_field(3, Var_255, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_38));
        }
        {
          Var_254 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_254, 0) = ((MR_Box) (Var_255));
          MR_hl_field(1, Var_254, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_251 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_251, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[54])));
          MR_hl_field(1, Var_251, 1) = ((MR_Box) (Var_254));
        }
        {
          Var_248 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_248, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[1])));
          MR_hl_field(1, Var_248, 1) = ((MR_Box) (Var_251));
        }
        {
          Var_246 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_246, 0) = ((MR_Box) (Var_247));
          MR_hl_field(1, Var_246, 1) = ((MR_Box) (Var_248));
        }
        {
          Var_243 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_243, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[3])));
          MR_hl_field(1, Var_243, 1) = ((MR_Box) (Var_246));
        }
        {
          Var_260 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_260, 0) = ((MR_Box) ((MR_Unsigned) 14U));
          MR_hl_field(3, Var_260, 1) = ((MR_Box) (SNA_300));
        }
        {
          Var_259 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_259, 0) = ((MR_Box) (Var_260));
          MR_hl_field(1, Var_259, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[10])));
        }
        Var_258 = parse_tree__error_spec__color_as_subject_1_f_0(Var_259);
        Var_271 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[58])));
        Var_270 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_271, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[11])));
        Var_265 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[56])), Var_270);
        Var_257 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_258, Var_265);
        Pieces_301 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_243, Var_257);
        {
          Spec_302 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_302, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_tabling.module_add_pragma_tabled_for_pred\'/16"));
          MR_hl_field(0, Spec_302, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_302, 2) = ((MR_Box) ((MR_Unsigned) 44U));
          MR_hl_field(0, Spec_302, 3) = ((MR_Box) (Context_23));
          MR_hl_field(0, Spec_302, 4) = ((MR_Box) (Pieces_301));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_75 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_302));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_1_159));
        }
        *STATE_VARIABLE_ModuleInfo_71 = STATE_VARIABLE_ModuleInfo_1_200;
        *STATE_VARIABLE_QualInfo_73 = STATE_VARIABLE_QualInfo_0_72;
      }
      else
      {
        MR_Word ExistingProcsTail_66 = ((MR_Word) ((MR_hl_field(1, ExistingProcs_64, 1))));
        MR_Word SingleProc_67;
        MR_Word STATE_VARIABLE_ModuleInfo_4_283;
        MR_Word ProcTable_303;
        MR_Word PredInfo_304;

        if ((ExistingProcsTail_66 == (MR_Word) ((MR_Unsigned) 0U)))
          SingleProc_67 = (MR_Integer) 1;
        else
          SingleProc_67 = (MR_Integer) 0;
        hlds__make_hlds__add_pragma_tabling__set_eval_method_create_aux_preds_list_21_p_0(ProgressStream_17, PredInfo0_34, PredOrFunc_38, PredModuleName_20, PredName_21, UserArity_36, ExistingProcs_64, SingleProc_67, Context_23, TabledMethod_33, MaybeAttributes_22, ItemMercuryStatus_24, PredStatus_25, ProcTable0_58, &ProcTable_303, STATE_VARIABLE_ModuleInfo_1_200, &STATE_VARIABLE_ModuleInfo_4_283, STATE_VARIABLE_QualInfo_0_72, STATE_VARIABLE_QualInfo_73, STATE_VARIABLE_Specs_1_159, STATE_VARIABLE_Specs_75);
        hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_303, PredInfo0_34, &PredInfo_304);
        hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_26, PredInfo_304, STATE_VARIABLE_ModuleInfo_4_283, STATE_VARIABLE_ModuleInfo_71);
      }
    }
    else
    {
      MR_Word Modes_59 = ((MR_Word) ((MR_hl_field(1, MaybeModes_37, 0))));
      MR_Integer ProcId_60;
      MR_Word ProcInfo0_61;

      succeeded = hlds__hlds_code_util__get_procedure_matching_argmodes_5_p_0(STATE_VARIABLE_ModuleInfo_1_200, ProcTable0_58, Modes_59, &ProcId_60, &ProcInfo0_61);
      if (succeeded)
      {
        MR_Word ProcTable_62;
        MR_Word PredInfo_63;
        MR_Word STATE_VARIABLE_ModuleInfo_2_202;

        hlds__make_hlds__add_pragma_tabling__set_eval_method_create_aux_preds_22_p_0(ProgressStream_17, PredInfo0_34, PredOrFunc_38, PredModuleName_20, PredName_21, UserArity_36, ProcId_60, ProcInfo0_61, (MR_Integer) 1, Context_23, TabledMethod_33, MaybeAttributes_22, ItemMercuryStatus_24, PredStatus_25, ProcTable0_58, &ProcTable_62, STATE_VARIABLE_ModuleInfo_1_200, &STATE_VARIABLE_ModuleInfo_2_202, STATE_VARIABLE_QualInfo_0_72, STATE_VARIABLE_QualInfo_73, STATE_VARIABLE_Specs_1_159, STATE_VARIABLE_Specs_75);
        hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_62, PredInfo0_34, &PredInfo_63);
        hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_26, PredInfo_63, STATE_VARIABLE_ModuleInfo_2_202, STATE_VARIABLE_ModuleInfo_71);
      }
      else
      {
        MR_Word Var_206;
        MR_Word Var_209;
        MR_Word Var_210;
        MR_Word Var_215;
        MR_Word Var_216;
        MR_Word Var_221;
        MR_Word Var_222;
        MR_Word Var_225;
        MR_Word Var_226;
        MR_Word Var_228;
        MR_Word Var_229;
        MR_Word Var_230;
        MR_Word Var_231;
        MR_Integer UserArityInt_287 = (MR_Integer) (UserArity_36);
        MR_Word SNA_288;
        MR_Word Pieces_289;
        MR_Word Spec_290;

        {
          SNA_288 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, SNA_288, 0) = ((MR_Box) (PredSymName_39));
          MR_hl_field(0, SNA_288, 1) = ((MR_Box) (UserArityInt_287));
        }
        {
          Var_210 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_210, 0) = ((MR_Box) ((MR_Unsigned) 36U));
          MR_hl_field(3, Var_210, 1) = ((MR_Box) (TabledMethodStr_42));
        }
        {
          Var_209 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_209, 0) = ((MR_Box) (Var_210));
          MR_hl_field(1, Var_209, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[60])));
        }
        {
          Var_206 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_206, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[3])));
          MR_hl_field(1, Var_206, 1) = ((MR_Box) (Var_209));
        }
        Var_216 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[62])));
        {
          Var_226 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_226, 0) = ((MR_Box) ((MR_Unsigned) 31U));
          MR_hl_field(3, Var_226, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_38));
        }
        {
          Var_225 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_225, 0) = ((MR_Box) (Var_226));
          MR_hl_field(1, Var_225, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_222 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_222, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[63])));
          MR_hl_field(1, Var_222, 1) = ((MR_Box) (Var_225));
        }
        {
          Var_231 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_231, 0) = ((MR_Box) ((MR_Unsigned) 14U));
          MR_hl_field(3, Var_231, 1) = ((MR_Box) (SNA_288));
        }
        {
          Var_230 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_230, 0) = ((MR_Box) (Var_231));
          MR_hl_field(1, Var_230, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[53])));
        }
        Var_229 = parse_tree__error_spec__color_as_subject_1_f_0(Var_230);
        Var_228 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_229, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[11])));
        Var_221 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_222, Var_228);
        Var_215 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_216, Var_221);
        Pieces_289 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_206, Var_215);
        {
          Spec_290 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_290, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_tabling.module_add_pragma_tabled_for_pred\'/16"));
          MR_hl_field(0, Spec_290, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_290, 2) = ((MR_Box) ((MR_Unsigned) 44U));
          MR_hl_field(0, Spec_290, 3) = ((MR_Box) (Context_23));
          MR_hl_field(0, Spec_290, 4) = ((MR_Box) (Pieces_289));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_75 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_290));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_1_159));
        }
        *STATE_VARIABLE_QualInfo_73 = STATE_VARIABLE_QualInfo_0_72;
        *STATE_VARIABLE_ModuleInfo_71 = STATE_VARIABLE_ModuleInfo_1_200;
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_tabling__set_eval_method_create_aux_preds_list_21_p_0(
  MR_Word ProgressStream_1,
  MR_Word PredInfo_2,
  MR_Word PredOrFunc_3,
  MR_Word PredModuleName_4,
  MR_String PredName_5,
  MR_Word UserArity_6,
  MR_Word HeadVar__7_7,
  MR_Word SingleProc_8,
  MR_Word Context_9,
  MR_Word TabledMethod_10,
  MR_Word MaybeAttributes_11,
  MR_Word ItemMercuryStatus_12,
  MR_Word PredStatus_13,
  MR_Word STATE_VARIABLE_ProcTable_0_14,
  MR_Word * STATE_VARIABLE_ProcTable_15,
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17,
  MR_Word STATE_VARIABLE_QualInfo_0_18,
  MR_Word * STATE_VARIABLE_QualInfo_19,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__7_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_21 = STATE_VARIABLE_Specs_0_20;
      *STATE_VARIABLE_QualInfo_19 = STATE_VARIABLE_QualInfo_0_18;
      *STATE_VARIABLE_ModuleInfo_17 = STATE_VARIABLE_ModuleInfo_0_16;
      *STATE_VARIABLE_ProcTable_15 = STATE_VARIABLE_ProcTable_0_14;
    }
    else
    {
      MR_Integer ProcId_52;
      MR_Word ProcInfo0_53;
      MR_Word ProcIdsInfos_54 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, 1))));
      MR_Word Var_73 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, 0))));
      MR_Word STATE_VARIABLE_ProcTable_1_74;
      MR_Word STATE_VARIABLE_ModuleInfo_1_75;
      MR_Word STATE_VARIABLE_QualInfo_1_76;
      MR_Word STATE_VARIABLE_Specs_1_77;
      MR_Word next_value_of_HeadVar__7_7;
      MR_Word next_value_of_STATE_VARIABLE_ProcTable_0_14;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_16;
      MR_Word next_value_of_STATE_VARIABLE_QualInfo_0_18;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_20;

      ProcId_52 = ((MR_Integer) ((MR_hl_field(0, Var_73, 0))));
      ProcInfo0_53 = ((MR_Word) ((MR_hl_field(0, Var_73, 1))));
      hlds__make_hlds__add_pragma_tabling__set_eval_method_create_aux_preds_22_p_0(ProgressStream_1, PredInfo_2, PredOrFunc_3, PredModuleName_4, PredName_5, UserArity_6, ProcId_52, ProcInfo0_53, SingleProc_8, Context_9, TabledMethod_10, MaybeAttributes_11, ItemMercuryStatus_12, PredStatus_13, STATE_VARIABLE_ProcTable_0_14, &STATE_VARIABLE_ProcTable_1_74, STATE_VARIABLE_ModuleInfo_0_16, &STATE_VARIABLE_ModuleInfo_1_75, STATE_VARIABLE_QualInfo_0_18, &STATE_VARIABLE_QualInfo_1_76, STATE_VARIABLE_Specs_0_20, &STATE_VARIABLE_Specs_1_77);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__7_7 = ProcIdsInfos_54;
      next_value_of_STATE_VARIABLE_ProcTable_0_14 = STATE_VARIABLE_ProcTable_1_74;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_16 = STATE_VARIABLE_ModuleInfo_1_75;
      next_value_of_STATE_VARIABLE_QualInfo_0_18 = STATE_VARIABLE_QualInfo_1_76;
      next_value_of_STATE_VARIABLE_Specs_0_20 = STATE_VARIABLE_Specs_1_77;
      HeadVar__7_7 = next_value_of_HeadVar__7_7;
      STATE_VARIABLE_ProcTable_0_14 = next_value_of_STATE_VARIABLE_ProcTable_0_14;
      STATE_VARIABLE_ModuleInfo_0_16 = next_value_of_STATE_VARIABLE_ModuleInfo_0_16;
      STATE_VARIABLE_QualInfo_0_18 = next_value_of_STATE_VARIABLE_QualInfo_0_18;
      STATE_VARIABLE_Specs_0_20 = next_value_of_STATE_VARIABLE_Specs_0_20;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_tabling__set_eval_method_create_aux_preds_22_p_0(
  MR_Word ProgressStream_23,
  MR_Word PredInfo_24,
  MR_Word PredOrFunc_25,
  MR_Word PredModuleName_26,
  MR_String PredName_27,
  MR_Word UserArity_28,
  MR_Integer ProcId_29,
  MR_Word ProcInfo0_30,
  MR_Word SingleProc_31,
  MR_Word Context_32,
  MR_Word TabledMethod_33,
  MR_Word MaybeAttributes_34,
  MR_Word ItemMercuryStatus_35,
  MR_Word PredStatus_36,
  MR_Word STATE_VARIABLE_ProcTable_0_69,
  MR_Word * STATE_VARIABLE_ProcTable_70,
  MR_Word STATE_VARIABLE_ModuleInfo_0_71,
  MR_Word * STATE_VARIABLE_ModuleInfo_72,
  MR_Word STATE_VARIABLE_QualInfo_0_73,
  MR_Word * STATE_VARIABLE_QualInfo_74,
  MR_Word STATE_VARIABLE_Specs_0_75,
  MR_Word * STATE_VARIABLE_Specs_76)
{
  MR_bool succeeded;
  MR_Word OldEvalMethod_41;
  MR_Word PredSymName_42;
  MR_Word PFSymNameArity_43;

  hlds__hlds_pred__proc_info_get_eval_method_2_p_0(ProcInfo0_30, &OldEvalMethod_41);
  {
    PredSymName_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, PredSymName_42, 0) = ((MR_Box) (PredModuleName_26));
    MR_hl_field(1, PredSymName_42, 1) = ((MR_Box) (PredName_27));
  }
  {
    PFSymNameArity_43 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PFSymNameArity_43, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_25));
    MR_hl_field(0, PFSymNameArity_43, 1) = ((MR_Box) (PredSymName_42));
    MR_hl_field(0, PFSymNameArity_43, 2) = ((MR_Box) (UserArity_28));
  }
  if ((OldEvalMethod_41 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word MaybeDeclaredArgModes_44;

    hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0(ProcInfo0_30, &MaybeDeclaredArgModes_44);
    if ((MaybeDeclaredArgModes_44 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String TabledMethodStr_45;
      MR_Integer UserArityInt_46;
      MR_Word SNA_47;
      MR_Word Pieces_48;
      MR_Word Spec_49;
      MR_Word Var_77;
      MR_Word Var_80;
      MR_Word Var_81;
      MR_Word Var_82;
      MR_Word Var_85;
      MR_Word Var_86;
      MR_Word Var_88;
      MR_Word Var_89;
      MR_Word Var_90;
      MR_Word Var_91;
      MR_Word Var_96;
      MR_Word Var_101;
      MR_Word Var_102;

      TabledMethodStr_45 = parse_tree__parse_tree_out_misc__tabled_eval_method_to_pragma_name_1_f_0(TabledMethod_33);
      UserArityInt_46 = (MR_Integer) (UserArity_28);
      {
        SNA_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, SNA_47, 0) = ((MR_Box) (PredSymName_42));
        MR_hl_field(0, SNA_47, 1) = ((MR_Box) (UserArityInt_46));
      }
      {
        Var_81 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_81, 0) = ((MR_Box) ((MR_Unsigned) 36U));
        MR_hl_field(3, Var_81, 1) = ((MR_Box) (TabledMethodStr_45));
      }
      {
        Var_86 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_86, 0) = ((MR_Box) ((MR_Unsigned) 31U));
        MR_hl_field(3, Var_86, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_25));
      }
      {
        Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_85, 0) = ((MR_Box) (Var_86));
        MR_hl_field(1, Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_82, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[59])));
        MR_hl_field(1, Var_82, 1) = ((MR_Box) (Var_85));
      }
      {
        Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_80, 0) = ((MR_Box) (Var_81));
        MR_hl_field(1, Var_80, 1) = ((MR_Box) (Var_82));
      }
      {
        Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_77, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[3])));
        MR_hl_field(1, Var_77, 1) = ((MR_Box) (Var_80));
      }
      {
        Var_91 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_91, 0) = ((MR_Box) ((MR_Unsigned) 14U));
        MR_hl_field(3, Var_91, 1) = ((MR_Box) (SNA_47));
      }
      {
        Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_90, 0) = ((MR_Box) (Var_91));
        MR_hl_field(1, Var_90, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[10])));
      }
      Var_89 = parse_tree__error_spec__color_as_subject_1_f_0(Var_90);
      Var_102 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[58])));
      Var_101 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_102, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[11])));
      Var_96 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[56])), Var_101);
      Var_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_89, Var_96);
      Pieces_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_77, Var_88);
      {
        Spec_49 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_49, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_tabling.set_eval_method_create_aux_preds\'/22"));
        MR_hl_field(0, Spec_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_49, 2) = ((MR_Box) ((MR_Unsigned) 44U));
        MR_hl_field(0, Spec_49, 3) = ((MR_Box) (Context_32));
        MR_hl_field(0, Spec_49, 4) = ((MR_Box) (Pieces_48));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_76 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_49));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_75));
      }
      *STATE_VARIABLE_ProcTable_70 = STATE_VARIABLE_ProcTable_0_69;
      *STATE_VARIABLE_ModuleInfo_72 = STATE_VARIABLE_ModuleInfo_0_71;
      *STATE_VARIABLE_QualInfo_74 = STATE_VARIABLE_QualInfo_0_73;
    }
    else
    {
      MR_Word DeclaredArgModes_50 = ((MR_Word) ((MR_hl_field(1, MaybeDeclaredArgModes_44, 0))));
      MR_Word ArgTypes_51;
      MR_Word DeclaredArgTypesModes_52;
      MR_Word Statistics_55;
      MR_Word AllowReset_56;
      MR_Word ArgErrorPieces_59;
      MR_Word EvalMethod_62;
      MR_Word ProcInfo1_63;
      MR_Word ProcInfo_64;
      MR_Word Globals_65;
      MR_Word IsTablingSupported_66;
      MR_Word STATE_VARIABLE_Specs_2_133;
      MR_Word STATE_VARIABLE_ModuleInfo_1_135;
      MR_Word STATE_VARIABLE_QualInfo_1_136;
      MR_Word STATE_VARIABLE_Specs_3_137;

      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_24, &ArgTypes_51);
      mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgTypes_51, DeclaredArgModes_50, &DeclaredArgTypesModes_52);
      if ((MaybeAttributes_34 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        Statistics_55 = (MR_Integer) 0;
        AllowReset_56 = (MR_Integer) 0;
        hlds__make_hlds__add_pragma_tabling__check_pred_args_against_tabling_4_p_0(STATE_VARIABLE_ModuleInfo_0_71, (MR_Integer) 1, DeclaredArgTypesModes_52, &ArgErrorPieces_59);
      }
      else
      {
        MR_Word Attributes_53 = ((MR_Word) ((MR_hl_field(1, MaybeAttributes_34, 0))));
        MR_Word Strictness_250 = ((MR_Word) ((MR_hl_field(0, Attributes_53, 0))));

        Statistics_55 = ((((MR_Unsigned) ((MR_hl_field(0, Attributes_53, 2))) >> 2)) & (MR_Integer) 1);
        AllowReset_56 = ((((MR_Unsigned) ((MR_hl_field(0, Attributes_53, 2))) >> 1)) & (MR_Integer) 1);
        switch (MR_tag((MR_Word) Strictness_250)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            hlds__make_hlds__add_pragma_tabling__check_pred_args_against_tabling_4_p_0(STATE_VARIABLE_ModuleInfo_0_71, (MR_Integer) 1, DeclaredArgTypesModes_52, &ArgErrorPieces_59);
            break;
          case (MR_Integer) 1:
            {
              MR_Word MaybeArgMethods_57 = ((MR_Word) ((MR_hl_field(1, Strictness_250, 0))));

              hlds__make_hlds__add_pragma_tabling__check_pred_args_against_tabling_methods_5_p_0(STATE_VARIABLE_ModuleInfo_0_71, (MR_Integer) 1, DeclaredArgTypesModes_52, MaybeArgMethods_57, &ArgErrorPieces_59);
            }
            break;
        }
      }
      if ((ArgErrorPieces_59 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_Specs_2_133 = STATE_VARIABLE_Specs_0_75;
      else
      {
        MR_Word Var_118;
        MR_Word Var_119;
        MR_Word Var_120;
        MR_Word Var_123;
        MR_Word Var_124;
        MR_Word Var_125;
        MR_Word Var_128;
        MR_String TabledMethodStr_214;
        MR_Word Pieces_215;
        MR_Word Spec_216;

        TabledMethodStr_214 = parse_tree__parse_tree_out_misc__tabled_eval_method_to_pragma_name_1_f_0(TabledMethod_33);
        {
          Var_119 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_119, 0) = ((MR_Box) ((MR_Unsigned) 36U));
          MR_hl_field(3, Var_119, 1) = ((MR_Box) (TabledMethodStr_214));
        }
        {
          Var_124 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_124, 0) = ((MR_Box) ((MR_Unsigned) 18U));
          MR_hl_field(3, Var_124, 1) = ((MR_Box) (PFSymNameArity_43));
        }
        {
          Var_128 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_128, 0) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(1, Var_128, 1) = ((MR_Box) (ArgErrorPieces_59));
        }
        {
          Var_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_125, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[65])));
          MR_hl_field(1, Var_125, 1) = ((MR_Box) (Var_128));
        }
        {
          Var_123 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_123, 0) = ((MR_Box) (Var_124));
          MR_hl_field(1, Var_123, 1) = ((MR_Box) (Var_125));
        }
        {
          Var_120 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_120, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[59])));
          MR_hl_field(1, Var_120, 1) = ((MR_Box) (Var_123));
        }
        {
          Var_118 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_118, 0) = ((MR_Box) (Var_119));
          MR_hl_field(1, Var_118, 1) = ((MR_Box) (Var_120));
        }
        {
          Pieces_215 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_215, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[64])));
          MR_hl_field(1, Pieces_215, 1) = ((MR_Box) (Var_118));
        }
        {
          Spec_216 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_216, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_tabling.set_eval_method_create_aux_preds\'/22"));
          MR_hl_field(0, Spec_216, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_216, 2) = ((MR_Box) ((MR_Unsigned) 44U));
          MR_hl_field(0, Spec_216, 3) = ((MR_Box) (Context_32));
          MR_hl_field(0, Spec_216, 4) = ((MR_Box) (Pieces_215));
        }
        {
          STATE_VARIABLE_Specs_2_133 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_Specs_2_133, 0) = ((MR_Box) (Spec_216));
          MR_hl_field(1, STATE_VARIABLE_Specs_2_133, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_75));
        }
      }
      {
        EvalMethod_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, EvalMethod_62, 0) = ((MR_Box) (TabledMethod_33));
      }
      hlds__hlds_pred__proc_info_set_eval_method_3_p_0(EvalMethod_62, ProcInfo0_30, &ProcInfo1_63);
      hlds__hlds_pred__proc_info_set_table_attributes_3_p_0(MaybeAttributes_34, ProcInfo1_63, &ProcInfo_64);
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_29)), ((MR_Box) (ProcInfo_64)), STATE_VARIABLE_ProcTable_0_69, STATE_VARIABLE_ProcTable_70);
      hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_71, &Globals_65);
      libs__globals__current_grade_supports_tabling_3_p_0(Globals_65, TabledMethod_33, &IsTablingSupported_66);
      switch (Statistics_55) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            STATE_VARIABLE_ModuleInfo_1_135 = STATE_VARIABLE_ModuleInfo_0_71;
            STATE_VARIABLE_QualInfo_1_136 = STATE_VARIABLE_QualInfo_0_73;
            STATE_VARIABLE_Specs_3_137 = STATE_VARIABLE_Specs_2_133;
          }
          break;
        case (MR_Integer) 1:
          hlds__make_hlds__add_pragma_tabling__create_tabling_statistics_pred_17_p_0(ProgressStream_23, PredOrFunc_25, PredModuleName_26, PredName_27, UserArity_28, ProcId_29, SingleProc_31, Context_32, IsTablingSupported_66, ItemMercuryStatus_35, PredStatus_36, STATE_VARIABLE_ModuleInfo_0_71, &STATE_VARIABLE_ModuleInfo_1_135, STATE_VARIABLE_QualInfo_0_73, &STATE_VARIABLE_QualInfo_1_136, STATE_VARIABLE_Specs_2_133, &STATE_VARIABLE_Specs_3_137);
          break;
      }
      switch (AllowReset_56) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          hlds__make_hlds__add_pragma_tabling__create_tabling_reset_pred_17_p_0(ProgressStream_23, PredOrFunc_25, PredModuleName_26, PredName_27, UserArity_28, ProcId_29, SingleProc_31, Context_32, IsTablingSupported_66, ItemMercuryStatus_35, PredStatus_36, STATE_VARIABLE_ModuleInfo_1_135, STATE_VARIABLE_ModuleInfo_72, STATE_VARIABLE_QualInfo_1_136, STATE_VARIABLE_QualInfo_74, STATE_VARIABLE_Specs_3_137, STATE_VARIABLE_Specs_76);
          break;
        case (MR_Integer) 0:
          {
            *STATE_VARIABLE_ModuleInfo_72 = STATE_VARIABLE_ModuleInfo_1_135;
            *STATE_VARIABLE_QualInfo_74 = STATE_VARIABLE_QualInfo_1_136;
            *STATE_VARIABLE_Specs_76 = STATE_VARIABLE_Specs_3_137;
          }
          break;
      }
    }
  }
  else
  {
    MR_Word OldTabledMethod_67 = ((MR_Word) ((MR_hl_field(1, OldEvalMethod_41, 0))));
    MR_String TabledMethodStr_223;
    MR_Integer UserArityInt_224;
    MR_Word SNA_225;
    MR_Word Pieces_226;
    MR_Word Spec_227;

    TabledMethodStr_223 = parse_tree__parse_tree_out_misc__tabled_eval_method_to_pragma_name_1_f_0(TabledMethod_33);
    UserArityInt_224 = (MR_Integer) (UserArity_28);
    {
      SNA_225 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SNA_225, 0) = ((MR_Box) (PredSymName_42));
      MR_hl_field(0, SNA_225, 1) = ((MR_Box) (UserArityInt_224));
    }
    succeeded = parse_tree__prog_data_pragma____Unify____tabled_eval_method_0_0(OldTabledMethod_67, TabledMethod_33);
    if (succeeded)
    {
      MR_Word Var_141;
      MR_Word Var_144;
      MR_Word Var_145;
      MR_Word Var_146;
      MR_Word Var_147;
      MR_Word Var_152;
      MR_Word Var_153;
      MR_Word Var_154;
      MR_Word Var_157;
      MR_Word Var_158;

      {
        Var_145 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_145, 0) = ((MR_Box) ((MR_Unsigned) 31U));
        MR_hl_field(3, Var_145, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_25));
      }
      {
        Var_147 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_147, 0) = ((MR_Box) ((MR_Unsigned) 14U));
        MR_hl_field(3, Var_147, 1) = ((MR_Box) (SNA_225));
      }
      {
        Var_146 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_146, 0) = ((MR_Box) (Var_147));
        MR_hl_field(1, Var_146, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[67])));
      }
      {
        Var_144 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_144, 0) = ((MR_Box) (Var_145));
        MR_hl_field(1, Var_144, 1) = ((MR_Box) (Var_146));
      }
      {
        Var_141 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_141, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[3])));
        MR_hl_field(1, Var_141, 1) = ((MR_Box) (Var_144));
      }
      {
        Var_158 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_158, 0) = ((MR_Box) (TabledMethodStr_223));
      }
      {
        Var_157 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_157, 0) = ((MR_Box) (Var_158));
        MR_hl_field(1, Var_157, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[70])));
      }
      {
        Var_154 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_154, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[68])));
        MR_hl_field(1, Var_154, 1) = ((MR_Box) (Var_157));
      }
      Var_153 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_154);
      Var_152 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_153, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[72])));
      Pieces_226 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_141, Var_152);
    }
    else
    {
      MR_String OldTabledMethodStr_68;
      MR_Word Var_169;
      MR_Word Var_172;
      MR_Word Var_173;
      MR_Word Var_174;
      MR_Word Var_175;
      MR_Word Var_180;
      MR_Word Var_181;
      MR_Word Var_189;
      MR_Word Var_190;
      MR_Word Var_191;
      MR_Word Var_192;
      MR_Word Var_194;
      MR_Word Var_199;
      MR_Word Var_200;
      MR_Word Var_201;
      MR_Word Var_202;

      OldTabledMethodStr_68 = parse_tree__parse_tree_out_misc__tabled_eval_method_to_pragma_name_1_f_0(OldTabledMethod_67);
      {
        Var_173 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_173, 0) = ((MR_Box) ((MR_Unsigned) 31U));
        MR_hl_field(3, Var_173, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_25));
      }
      {
        Var_175 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_175, 0) = ((MR_Box) ((MR_Unsigned) 14U));
        MR_hl_field(3, Var_175, 1) = ((MR_Box) (SNA_225));
      }
      {
        Var_174 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_174, 0) = ((MR_Box) (Var_175));
        MR_hl_field(1, Var_174, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[67])));
      }
      {
        Var_172 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_172, 0) = ((MR_Box) (Var_173));
        MR_hl_field(1, Var_172, 1) = ((MR_Box) (Var_174));
      }
      {
        Var_169 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_169, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[3])));
        MR_hl_field(1, Var_169, 1) = ((MR_Box) (Var_172));
      }
      Var_181 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[76])));
      {
        Var_192 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_192, 0) = ((MR_Box) (OldTabledMethodStr_68));
      }
      {
        Var_191 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_191, 0) = ((MR_Box) (Var_192));
        MR_hl_field(1, Var_191, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_190 = parse_tree__error_spec__color_as_inconsistent_1_f_0(Var_191);
      {
        Var_202 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_202, 0) = ((MR_Box) (TabledMethodStr_223));
      }
      {
        Var_201 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_201, 0) = ((MR_Box) (Var_202));
        MR_hl_field(1, Var_201, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[53])));
      }
      Var_200 = parse_tree__error_spec__color_as_inconsistent_1_f_0(Var_201);
      Var_199 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_200, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[11])));
      Var_194 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[78])), Var_199);
      Var_189 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_190, Var_194);
      Var_180 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_181, Var_189);
      Pieces_226 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_169, Var_180);
    }
    {
      Spec_227 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_227, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_tabling.set_eval_method_create_aux_preds\'/22"));
      MR_hl_field(0, Spec_227, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_227, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(0, Spec_227, 3) = ((MR_Box) (Context_32));
      MR_hl_field(0, Spec_227, 4) = ((MR_Box) (Pieces_226));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_76 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_227));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_75));
    }
    *STATE_VARIABLE_ProcTable_70 = STATE_VARIABLE_ProcTable_0_69;
    *STATE_VARIABLE_ModuleInfo_72 = STATE_VARIABLE_ModuleInfo_0_71;
    *STATE_VARIABLE_QualInfo_74 = STATE_VARIABLE_QualInfo_0_73;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_tabling__check_pred_args_against_tabling_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Integer ArgNum_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Type_9;
      MR_Word Mode_10;
      MR_Word TypesModes_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

      Type_9 = ((MR_Word) ((MR_hl_field(0, Var_13, 0))));
      Mode_10 = ((MR_Word) ((MR_hl_field(0, Var_13, 1))));
      succeeded = check_hlds__mode_test__mode_is_fully_input_3_p_0(ModuleInfo_1, Type_9, Mode_10);
      if (succeeded)
      {
        MR_Integer Var_14 = (MR_Integer) ((MR_Unsigned) ArgNum_2 + (MR_Unsigned) 1);
        MR_Integer next_value_of_ArgNum_2 = Var_14;
        MR_Word next_value_of_HeadVar__3_3 = TypesModes_11;

        // direct tailcall eliminated
        ;
        ArgNum_2 = next_value_of_ArgNum_2;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        continue;
      }
      else
      {
        succeeded = check_hlds__mode_test__mode_is_fully_output_3_p_0(ModuleInfo_1, Type_9, Mode_10);
        if (succeeded)
        {
          MR_Integer Var_16 = (MR_Integer) ((MR_Unsigned) ArgNum_2 + (MR_Unsigned) 1);
          MR_Integer next_value_of_ArgNum_2 = Var_16;
          MR_Word next_value_of_HeadVar__3_3 = TypesModes_11;

          // direct tailcall eliminated
          ;
          ArgNum_2 = next_value_of_ArgNum_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
        else
        {
          MR_Word Var_18;
          MR_String Var_19;
          MR_String Var_21;

          Var_21 = mercury__string__int_to_string_1_f_0(ArgNum_2);
          Var_19 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", Var_21);
          {
            Var_18 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_18, 0) = ((MR_Box) (Var_19));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__4_4 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_18));
            MR_hl_field(1, base, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[98])));
          }
        }
      }
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_tabling__check_pred_args_against_tabling_methods_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Integer ArgNum_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      else
        *HeadVar__5_5 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[81]));
    else
    {
      MR_Word Var_131 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word Var_132 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

      if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__5_5 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[83]));
      else
      {
        MR_Word Type_30 = ((MR_Word) ((MR_hl_field(0, Var_132, 0))));
        MR_Word Mode_31 = ((MR_Word) ((MR_hl_field(0, Var_132, 1))));
        MR_Word MaybeArgMethod_33 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
        MR_Word MaybeArgMethods_34 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));

        succeeded = check_hlds__mode_test__mode_is_fully_input_3_p_0(ModuleInfo_1, Type_30, Mode_31);
        if (succeeded)
          if ((MaybeArgMethod_33 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_String MethodStr_37;
            MR_Word Var_42;
            MR_Word Var_45;
            MR_Word Var_46;
            MR_String Var_47;
            MR_String Var_49;
            MR_Word Var_57;
            MR_Word Var_58;
            MR_Word Var_59;
            MR_Word Var_60;
            MR_Word Var_62;
            MR_Word Var_67;
            MR_Word Var_68;

            MethodStr_37 = parse_tree__parse_tree_out_misc__maybe_arg_tabling_method_to_string_1_f_0(MaybeArgMethod_33);
            Var_49 = mercury__string__int_to_string_1_f_0(ArgNum_2);
            Var_47 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", Var_49);
            {
              Var_46 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_46, 0) = ((MR_Box) (Var_47));
            }
            {
              Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_46));
              MR_hl_field(1, Var_45, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[87])));
            }
            {
              Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_42, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[84])));
              MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_45));
            }
            {
              Var_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_60, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_60, 1) = ((MR_Box) (MethodStr_37));
            }
            {
              Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_59, 0) = ((MR_Box) (Var_60));
              MR_hl_field(1, Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_58 = parse_tree__error_spec__color_as_subject_1_f_0(Var_59);
            Var_68 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[93])));
            Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_68, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[11])));
            Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[89])), Var_67);
            Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_58, Var_62);
            *HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_42, Var_57);
          }
          else
          {
            MR_Integer Var_40 = (MR_Integer) ((MR_Unsigned) ArgNum_2 + (MR_Unsigned) 1);
            MR_Integer next_value_of_ArgNum_2 = Var_40;
            MR_Word next_value_of_HeadVar__3_3 = Var_131;
            MR_Word next_value_of_HeadVar__4_4 = MaybeArgMethods_34;

            // direct tailcall eliminated
            ;
            ArgNum_2 = next_value_of_ArgNum_2;
            HeadVar__3_3 = next_value_of_HeadVar__3_3;
            HeadVar__4_4 = next_value_of_HeadVar__4_4;
            continue;
          }
        else
        {
          succeeded = check_hlds__mode_test__mode_is_fully_output_3_p_0(ModuleInfo_1, Type_30, Mode_31);
          if (succeeded)
            if ((MaybeArgMethod_33 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Integer Var_116 = (MR_Integer) ((MR_Unsigned) ArgNum_2 + (MR_Unsigned) 1);
              MR_Integer next_value_of_ArgNum_2 = Var_116;
              MR_Word next_value_of_HeadVar__3_3 = Var_131;
              MR_Word next_value_of_HeadVar__4_4 = MaybeArgMethods_34;

              // direct tailcall eliminated
              ;
              ArgNum_2 = next_value_of_ArgNum_2;
              HeadVar__3_3 = next_value_of_HeadVar__3_3;
              HeadVar__4_4 = next_value_of_HeadVar__4_4;
              continue;
            }
            else
            {
              MR_Word Var_79;
              MR_Word Var_82;
              MR_Word Var_83;
              MR_String Var_84;
              MR_String Var_86;
              MR_Word Var_94;
              MR_Word Var_95;
              MR_Word Var_96;
              MR_Word Var_97;
              MR_Word Var_99;
              MR_Word Var_104;
              MR_Word Var_105;
              MR_String MethodStr_128;

              MethodStr_128 = parse_tree__parse_tree_out_misc__maybe_arg_tabling_method_to_string_1_f_0(MaybeArgMethod_33);
              Var_86 = mercury__string__int_to_string_1_f_0(ArgNum_2);
              Var_84 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", Var_86);
              {
                Var_83 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Var_83, 0) = ((MR_Box) (Var_84));
              }
              {
                Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_82, 0) = ((MR_Box) (Var_83));
                MR_hl_field(1, Var_82, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[87])));
              }
              {
                Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_79, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[84])));
                MR_hl_field(1, Var_79, 1) = ((MR_Box) (Var_82));
              }
              {
                Var_97 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_97, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_97, 1) = ((MR_Box) (MethodStr_128));
              }
              {
                Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_96, 0) = ((MR_Box) (Var_97));
                MR_hl_field(1, Var_96, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              Var_95 = parse_tree__error_spec__color_as_subject_1_f_0(Var_96);
              Var_105 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[96])));
              Var_104 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_105, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[11])));
              Var_99 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[89])), Var_104);
              Var_94 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_95, Var_99);
              *HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_79, Var_94);
            }
          else
          {
            MR_Word Var_118;
            MR_String Var_119;
            MR_String Var_121;

            Var_121 = mercury__string__int_to_string_1_f_0(ArgNum_2);
            Var_119 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", Var_121);
            {
              Var_118 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_118, 0) = ((MR_Box) (Var_119));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__5_5 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_118));
              MR_hl_field(1, base, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[98])));
            }
          }
        }
      }
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_tabling__create_tabling_reset_pred_17_p_0(
  MR_Word ProgressStream_18,
  MR_Word PredOrFunc_19,
  MR_Word PredModuleName_20,
  MR_String PredName_21,
  MR_Word UserArity_22,
  MR_Integer ProcId_23,
  MR_Word SingleProc_24,
  MR_Word Context_25,
  MR_Word IsTablingSupported_26,
  MR_Word ItemMercuryStatus_27,
  MR_Word PredStatus_28,
  MR_Word STATE_VARIABLE_ModuleInfo_0_63,
  MR_Word * STATE_VARIABLE_ModuleInfo_64,
  MR_Word STATE_VARIABLE_QualInfo_0_65,
  MR_Word * STATE_VARIABLE_QualInfo_66,
  MR_Word STATE_VARIABLE_Specs_0_67,
  MR_Word * STATE_VARIABLE_Specs_68)
{
  MR_Word Transform_32;
  MR_String ResetPredName_33;
  MR_Word ResetPredSymName_34;
  MR_Word TypeAndModeArg1_35;
  MR_Word TypeAndModeArg2_36;
  MR_Word ArgTypesAndMaybeModes_37;
  MR_Word TypeVarSet_38;
  MR_Word InstVarSet_39;
  MR_Word PredSymName_42;
  MR_Word PredSpec_43;
  MR_Word Attrs_44;
  MR_Word MaybeAttrs_45;
  MR_Word PredDecl_46;
  MR_Word PredFormArity_48;
  MR_Word PFSymNameArity_49;
  MR_Word IO0_51;
  MR_Word IO_52;
  MR_Integer Var_70;
  MR_Word Var_71;
  MR_Word Var_72;
  MR_Word Var_73;
  MR_Word Var_74;
  MR_Word Var_75;
  MR_Word Var_76;
  MR_Word Var_80;
  MR_Word STATE_VARIABLE_ModuleInfo_1_90;
  MR_Word STATE_VARIABLE_Specs_1_91;
  MR_Word STATE_VARIABLE_VarSet_1_92;
  MR_Word STATE_VARIABLE_VarSet_2_94;
  MR_Word STATE_VARIABLE_VarSet_3_96;
  MR_Word _MaybePredProcId_47;

  Var_70 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_23);
  {
    Transform_32 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Transform_32, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_19));
    MR_hl_field(2, Transform_32, 1) = ((MR_Box) (UserArity_22));
    MR_hl_field(2, Transform_32, 2) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) (SingleProc_24)));
    MR_hl_field(2, Transform_32, 3) = ((MR_Box) (Var_70));
  }
  hlds__pred_name__make_transformed_pred_name_3_p_0(PredName_21, Transform_32, &ResetPredName_33);
  {
    ResetPredSymName_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ResetPredSymName_34, 0) = ((MR_Box) (PredModuleName_20));
    MR_hl_field(1, ResetPredSymName_34, 1) = ((MR_Box) (ResetPredName_33));
  }
  Var_71 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
  Var_72 = parse_tree__prog_mode__di_mode_0_f_0();
  {
    TypeAndModeArg1_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeAndModeArg1_35, 0) = ((MR_Box) (Var_71));
    MR_hl_field(0, TypeAndModeArg1_35, 1) = ((MR_Box) (Var_72));
  }
  Var_73 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
  Var_74 = parse_tree__prog_mode__uo_mode_0_f_0();
  {
    TypeAndModeArg2_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeAndModeArg2_36, 0) = ((MR_Box) (Var_73));
    MR_hl_field(0, TypeAndModeArg2_36, 1) = ((MR_Box) (Var_74));
  }
  {
    Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_76, 0) = ((MR_Box) (TypeAndModeArg2_36));
    MR_hl_field(1, Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_75, 0) = ((MR_Box) (TypeAndModeArg1_35));
    MR_hl_field(1, Var_75, 1) = ((MR_Box) (Var_76));
  }
  {
    ArgTypesAndMaybeModes_37 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, ArgTypesAndMaybeModes_37, 0) = ((MR_Box) (Var_75));
  }
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet_38);
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_39);
  {
    PredSymName_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, PredSymName_42, 0) = ((MR_Box) (PredModuleName_20));
    MR_hl_field(1, PredSymName_42, 1) = ((MR_Box) (PredName_21));
  }
  {
    PredSpec_43 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PredSpec_43, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_19));
    MR_hl_field(0, PredSpec_43, 1) = ((MR_Box) (PredSymName_42));
    MR_hl_field(0, PredSpec_43, 2) = ((MR_Box) (UserArity_22));
  }
  {
    Var_80 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_80, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_80, 1) = ((MR_Box) (PredSpec_43));
    MR_hl_field(3, Var_80, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  Attrs_44 = (MR_Word) (Var_80);
  {
    MaybeAttrs_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MaybeAttrs_45, 0) = ((MR_Box) (Attrs_44));
  }
  {
    PredDecl_46 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PredDecl_46, 0) = ((MR_Box) (ResetPredSymName_34));
    MR_hl_field(0, PredDecl_46, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(0, PredDecl_46, 2) = ((MR_Box) (ArgTypesAndMaybeModes_37));
    MR_hl_field(0, PredDecl_46, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, PredDecl_46, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, PredDecl_46, 5) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_2[3])));
    MR_hl_field(0, PredDecl_46, 6) = ((MR_Box) (MaybeAttrs_45));
    MR_hl_field(0, PredDecl_46, 7) = ((MR_Box) (TypeVarSet_38));
    MR_hl_field(0, PredDecl_46, 8) = ((MR_Box) (InstVarSet_39));
    MR_hl_field(0, PredDecl_46, 9) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, PredDecl_46, 10) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(0, PredDecl_46, 11) = ((MR_Box) (&hlds__make_hlds__add_pragma_tabling_scalar_common_1[79]));
    MR_hl_field(0, PredDecl_46, 12) = ((MR_Box) (Context_25));
    MR_hl_field(0, PredDecl_46, 13) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  hlds__make_hlds__add_pred__module_add_pred_decl_9_p_0(ItemMercuryStatus_27, PredStatus_28, (MR_Integer) 1, PredDecl_46, &_MaybePredProcId_47, STATE_VARIABLE_ModuleInfo_0_63, &STATE_VARIABLE_ModuleInfo_1_90, STATE_VARIABLE_Specs_0_67, &STATE_VARIABLE_Specs_1_91);
  parse_tree__prog_util__user_arity_pred_form_arity_3_p_0(PredOrFunc_19, UserArity_22, &PredFormArity_48);
  {
    PFSymNameArity_49 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PFSymNameArity_49, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_19));
    MR_hl_field(0, PFSymNameArity_49, 1) = ((MR_Box) (PredSymName_42));
    MR_hl_field(0, PFSymNameArity_49, 2) = ((MR_Box) (PredFormArity_48));
  }
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &STATE_VARIABLE_VarSet_1_92);
  mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "IO0", &IO0_51, STATE_VARIABLE_VarSet_1_92, &STATE_VARIABLE_VarSet_2_94);
  mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "IO", &IO_52, STATE_VARIABLE_VarSet_2_94, &STATE_VARIABLE_VarSet_3_96);
  switch (IsTablingSupported_26) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Args_59;
        MR_Word BodyExpr_60;
        MR_Word ResetClauseInfo_61;
        MR_Word Var_123;
        MR_Word Var_124;
        MR_Word Var_125;
        MR_Word Var_131;

        {
          Var_123 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_123, 0) = ((MR_Box) (IO0_51));
          MR_hl_field(1, Var_123, 1) = ((MR_Box) (Context_25));
        }
        {
          Var_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_125, 0) = ((MR_Box) (IO_52));
          MR_hl_field(1, Var_125, 1) = ((MR_Box) (Context_25));
        }
        {
          Var_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_124, 0) = ((MR_Box) (Var_125));
          MR_hl_field(1, Var_124, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Args_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Args_59, 0) = ((MR_Box) (Var_123));
          MR_hl_field(1, Args_59, 1) = ((MR_Box) (Var_124));
        }
        {
          BodyExpr_60 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, BodyExpr_60, 0) = ((MR_Box) (Context_25));
          MR_hl_field(0, BodyExpr_60, 1) = ((MR_Box) (Var_123));
          MR_hl_field(0, BodyExpr_60, 2) = ((MR_Box) (Var_125));
          MR_hl_field(0, BodyExpr_60, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        {
          Var_131 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_131, 0) = ((MR_Box) (BodyExpr_60));
          MR_hl_field(1, Var_131, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          ResetClauseInfo_61 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ResetClauseInfo_61, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(0, ResetClauseInfo_61, 1) = ((MR_Box) (ResetPredSymName_34));
          MR_hl_field(0, ResetClauseInfo_61, 2) = ((MR_Box) (Args_59));
          MR_hl_field(0, ResetClauseInfo_61, 3) = ((MR_Box) (STATE_VARIABLE_VarSet_3_96));
          MR_hl_field(0, ResetClauseInfo_61, 4) = ((MR_Box) (Var_131));
          MR_hl_field(0, ResetClauseInfo_61, 5) = ((MR_Box) (Context_25));
          MR_hl_field(0, ResetClauseInfo_61, 6) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        hlds__make_hlds__add_clause__module_add_clause_10_p_0(ProgressStream_18, PredStatus_28, (MR_Word) ((MR_Unsigned) 0U), ResetClauseInfo_61, STATE_VARIABLE_ModuleInfo_1_90, STATE_VARIABLE_ModuleInfo_64, STATE_VARIABLE_QualInfo_0_65, STATE_VARIABLE_QualInfo_66, STATE_VARIABLE_Specs_1_91, STATE_VARIABLE_Specs_68);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Arg1_53;
        MR_Word Arg2_54;
        MR_String GlobalVarName_55;
        MR_String ResetCode_56;
        MR_Word ResetImpl_57;
        MR_Word ResetFCInfo_58;
        MR_Word Var_98;
        MR_Word Var_101;
        MR_Word STATE_VARIABLE_Attrs_1_103;
        MR_Word STATE_VARIABLE_Attrs_2_106;
        MR_Word STATE_VARIABLE_Attrs_3_108;
        MR_Word STATE_VARIABLE_Attrs_4_110;
        MR_Word STATE_VARIABLE_Attrs_5_112;
        MR_Word Var_115;
        MR_Word Var_117;
        MR_Word Var_118;

        Var_98 = parse_tree__prog_mode__di_mode_0_f_0();
        {
          Arg1_53 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Arg1_53, 0) = ((MR_Box) (IO0_51));
          MR_hl_field(0, Arg1_53, 1) = ((MR_Box) ((MR_String) "_IO0"));
          MR_hl_field(0, Arg1_53, 2) = ((MR_Box) (Var_98));
          MR_hl_field(0, Arg1_53, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        }
        Var_101 = parse_tree__prog_mode__uo_mode_0_f_0();
        {
          Arg2_54 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Arg2_54, 0) = ((MR_Box) (IO_52));
          MR_hl_field(0, Arg2_54, 1) = ((MR_Box) ((MR_String) "_IO"));
          MR_hl_field(0, Arg2_54, 2) = ((MR_Box) (Var_101));
          MR_hl_field(0, Arg2_54, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        }
        STATE_VARIABLE_Attrs_1_103 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 0);
        parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_1_103, &STATE_VARIABLE_Attrs_2_106);
        parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_2_106, &STATE_VARIABLE_Attrs_3_108);
        parse_tree__prog_data_foreign__set_purity_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_3_108, &STATE_VARIABLE_Attrs_4_110);
        parse_tree__prog_data_foreign__set_may_duplicate_3_p_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_2[4])), STATE_VARIABLE_Attrs_4_110, &STATE_VARIABLE_Attrs_5_112);
        GlobalVarName_55 = hlds__make_hlds__add_pragma_tabling__table_info_c_global_var_name_3_f_0(STATE_VARIABLE_ModuleInfo_1_90, PFSymNameArity_49, ProcId_23);
        ResetCode_56 = mercury__string__f_43_43_2_f_0(GlobalVarName_55, (MR_String) ".MR_pt_tablenode.MR_integer = 0;");
        {
          Var_115 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_115, 0) = ((MR_Box) (Context_25));
        }
        {
          ResetImpl_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ResetImpl_57, 0) = ((MR_Box) (ResetCode_56));
          MR_hl_field(0, ResetImpl_57, 1) = ((MR_Box) (Var_115));
        }
        {
          Var_118 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_118, 0) = ((MR_Box) (Arg2_54));
          MR_hl_field(1, Var_118, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_117 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_117, 0) = ((MR_Box) (Arg1_53));
          MR_hl_field(1, Var_117, 1) = ((MR_Box) (Var_118));
        }
        {
          ResetFCInfo_58 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ResetFCInfo_58, 0) = ((MR_Box) (STATE_VARIABLE_Attrs_5_112));
          MR_hl_field(0, ResetFCInfo_58, 1) = ((MR_Box) (ResetPredSymName_34));
          MR_hl_field(0, ResetFCInfo_58, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(0, ResetFCInfo_58, 3) = ((MR_Box) (Var_117));
          MR_hl_field(0, ResetFCInfo_58, 4) = ((MR_Box) (STATE_VARIABLE_VarSet_3_96));
          MR_hl_field(0, ResetFCInfo_58, 5) = ((MR_Box) (InstVarSet_39));
          MR_hl_field(0, ResetFCInfo_58, 6) = ((MR_Box) (ResetImpl_57));
          MR_hl_field(0, ResetFCInfo_58, 7) = ((MR_Box) (Context_25));
          MR_hl_field(0, ResetFCInfo_58, 8) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        hlds__make_hlds__add_foreign_proc__add_foreign_proc_8_p_0(ProgressStream_18, ItemMercuryStatus_27, PredStatus_28, ResetFCInfo_58, STATE_VARIABLE_ModuleInfo_1_90, STATE_VARIABLE_ModuleInfo_64, STATE_VARIABLE_Specs_1_91, STATE_VARIABLE_Specs_68);
        *STATE_VARIABLE_QualInfo_66 = STATE_VARIABLE_QualInfo_0_65;
      }
      break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_tabling__create_tabling_statistics_pred_17_p_0(
  MR_Word ProgressStream_18,
  MR_Word PredOrFunc_19,
  MR_Word PredModuleName_20,
  MR_String PredName_21,
  MR_Word UserArity_22,
  MR_Integer ProcId_23,
  MR_Word SingleProc_24,
  MR_Word Context_25,
  MR_Word IsTablingSupported_26,
  MR_Word ItemMercuryStatus_27,
  MR_Word PredStatus_28,
  MR_Word STATE_VARIABLE_ModuleInfo_0_74,
  MR_Word * STATE_VARIABLE_ModuleInfo_75,
  MR_Word STATE_VARIABLE_QualInfo_0_76,
  MR_Word * STATE_VARIABLE_QualInfo_77,
  MR_Word STATE_VARIABLE_Specs_0_78,
  MR_Word * STATE_VARIABLE_Specs_79)
{
  MR_Word Transform_32;
  MR_String StatsPredName_33;
  MR_Word StatsPredSymName_34;
  MR_Word TableBuiltinModule_35;
  MR_Word StatsTypeName_36;
  MR_Word StatsType_37;
  MR_Word TypeAndModeArg1_38;
  MR_Word TypeAndModeArg2_39;
  MR_Word TypeAndModeArg3_40;
  MR_Word ArgTypesAndMaybeModes_41;
  MR_Word TypeVarSet_42;
  MR_Word InstVarSet_43;
  MR_Word PredSymName_46;
  MR_Word PredSpec_47;
  MR_Word Attrs_48;
  MR_Word MaybeAttrs_49;
  MR_Word PredDecl_50;
  MR_Word PredFormArity_52;
  MR_Word PFSymNameArity_53;
  MR_Word Stats_55;
  MR_Word IO0_56;
  MR_Word IO_57;
  MR_Integer Var_81;
  MR_Word Var_85;
  MR_Word Var_86;
  MR_Word Var_87;
  MR_Word Var_88;
  MR_Word Var_89;
  MR_Word Var_90;
  MR_Word Var_91;
  MR_Word Var_92;
  MR_Word Var_96;
  MR_Word STATE_VARIABLE_ModuleInfo_1_106;
  MR_Word STATE_VARIABLE_Specs_1_107;
  MR_Word STATE_VARIABLE_VarSet_1_108;
  MR_Word STATE_VARIABLE_VarSet_2_110;
  MR_Word STATE_VARIABLE_VarSet_3_112;
  MR_Word STATE_VARIABLE_VarSet_4_114;
  MR_Word _MaybePredProcId_51;

  Var_81 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_23);
  {
    Transform_32 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Transform_32, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_19));
    MR_hl_field(2, Transform_32, 1) = ((MR_Box) (UserArity_22));
    MR_hl_field(2, Transform_32, 2) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) (SingleProc_24)));
    MR_hl_field(2, Transform_32, 3) = ((MR_Box) (Var_81));
  }
  hlds__pred_name__make_transformed_pred_name_3_p_0(PredName_21, Transform_32, &StatsPredName_33);
  {
    StatsPredSymName_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, StatsPredSymName_34, 0) = ((MR_Box) (PredModuleName_20));
    MR_hl_field(1, StatsPredSymName_34, 1) = ((MR_Box) (StatsPredName_33));
  }
  TableBuiltinModule_35 = mdbcomp__builtin_modules__mercury_table_statistics_module_0_f_0();
  {
    StatsTypeName_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, StatsTypeName_36, 0) = ((MR_Box) (TableBuiltinModule_35));
    MR_hl_field(1, StatsTypeName_36, 1) = ((MR_Box) ((MR_String) "proc_table_statistics"));
  }
  {
    StatsType_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, StatsType_37, 0) = ((MR_Box) (StatsTypeName_36));
    MR_hl_field(1, StatsType_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, StatsType_37, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_85 = parse_tree__prog_mode__out_mode_0_f_0();
  {
    TypeAndModeArg1_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeAndModeArg1_38, 0) = ((MR_Box) (StatsType_37));
    MR_hl_field(0, TypeAndModeArg1_38, 1) = ((MR_Box) (Var_85));
  }
  Var_86 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
  Var_87 = parse_tree__prog_mode__di_mode_0_f_0();
  {
    TypeAndModeArg2_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeAndModeArg2_39, 0) = ((MR_Box) (Var_86));
    MR_hl_field(0, TypeAndModeArg2_39, 1) = ((MR_Box) (Var_87));
  }
  Var_88 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
  Var_89 = parse_tree__prog_mode__uo_mode_0_f_0();
  {
    TypeAndModeArg3_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeAndModeArg3_40, 0) = ((MR_Box) (Var_88));
    MR_hl_field(0, TypeAndModeArg3_40, 1) = ((MR_Box) (Var_89));
  }
  {
    Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_92, 0) = ((MR_Box) (TypeAndModeArg3_40));
    MR_hl_field(1, Var_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_91, 0) = ((MR_Box) (TypeAndModeArg2_39));
    MR_hl_field(1, Var_91, 1) = ((MR_Box) (Var_92));
  }
  {
    Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_90, 0) = ((MR_Box) (TypeAndModeArg1_38));
    MR_hl_field(1, Var_90, 1) = ((MR_Box) (Var_91));
  }
  {
    ArgTypesAndMaybeModes_41 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, ArgTypesAndMaybeModes_41, 0) = ((MR_Box) (Var_90));
  }
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet_42);
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_43);
  {
    PredSymName_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, PredSymName_46, 0) = ((MR_Box) (PredModuleName_20));
    MR_hl_field(1, PredSymName_46, 1) = ((MR_Box) (PredName_21));
  }
  {
    PredSpec_47 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PredSpec_47, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_19));
    MR_hl_field(0, PredSpec_47, 1) = ((MR_Box) (PredSymName_46));
    MR_hl_field(0, PredSpec_47, 2) = ((MR_Box) (UserArity_22));
  }
  {
    Var_96 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_96, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_96, 1) = ((MR_Box) (PredSpec_47));
    MR_hl_field(3, Var_96, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  Attrs_48 = (MR_Word) (Var_96);
  {
    MaybeAttrs_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MaybeAttrs_49, 0) = ((MR_Box) (Attrs_48));
  }
  {
    PredDecl_50 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PredDecl_50, 0) = ((MR_Box) (StatsPredSymName_34));
    MR_hl_field(0, PredDecl_50, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(0, PredDecl_50, 2) = ((MR_Box) (ArgTypesAndMaybeModes_41));
    MR_hl_field(0, PredDecl_50, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, PredDecl_50, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, PredDecl_50, 5) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_2[3])));
    MR_hl_field(0, PredDecl_50, 6) = ((MR_Box) (MaybeAttrs_49));
    MR_hl_field(0, PredDecl_50, 7) = ((MR_Box) (TypeVarSet_42));
    MR_hl_field(0, PredDecl_50, 8) = ((MR_Box) (InstVarSet_43));
    MR_hl_field(0, PredDecl_50, 9) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, PredDecl_50, 10) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(0, PredDecl_50, 11) = ((MR_Box) (&hlds__make_hlds__add_pragma_tabling_scalar_common_1[79]));
    MR_hl_field(0, PredDecl_50, 12) = ((MR_Box) (Context_25));
    MR_hl_field(0, PredDecl_50, 13) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  hlds__make_hlds__add_pred__module_add_pred_decl_9_p_0(ItemMercuryStatus_27, PredStatus_28, (MR_Integer) 1, PredDecl_50, &_MaybePredProcId_51, STATE_VARIABLE_ModuleInfo_0_74, &STATE_VARIABLE_ModuleInfo_1_106, STATE_VARIABLE_Specs_0_78, &STATE_VARIABLE_Specs_1_107);
  parse_tree__prog_util__user_arity_pred_form_arity_3_p_0(PredOrFunc_19, UserArity_22, &PredFormArity_52);
  {
    PFSymNameArity_53 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PFSymNameArity_53, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_19));
    MR_hl_field(0, PFSymNameArity_53, 1) = ((MR_Box) (PredSymName_46));
    MR_hl_field(0, PFSymNameArity_53, 2) = ((MR_Box) (PredFormArity_52));
  }
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &STATE_VARIABLE_VarSet_1_108);
  mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "Stats", &Stats_55, STATE_VARIABLE_VarSet_1_108, &STATE_VARIABLE_VarSet_2_110);
  mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "IO0", &IO0_56, STATE_VARIABLE_VarSet_2_110, &STATE_VARIABLE_VarSet_3_112);
  mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "IO", &IO_57, STATE_VARIABLE_VarSet_3_112, &STATE_VARIABLE_VarSet_4_114);
  switch (IsTablingSupported_26) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word DummyStatsFuncSymName_65;
        MR_Word DummyStatsFuncTerm_66;
        MR_Word Args_67;
        MR_Word GetStatsExpr_68;
        MR_Word UpdateIOExpr_69;
        MR_Word GetStatsUpdateIOExpr_70;
        MR_Word BodyExpr_71;
        MR_Word StatsClauseInfo_72;
        MR_Word Var_147;
        MR_Word Var_150;
        MR_Word Var_151;
        MR_Word Var_152;
        MR_Word Var_153;
        MR_Word Var_154;
        MR_Word Var_161;
        MR_Word Var_165;

        Var_147 = mdbcomp__builtin_modules__mercury_table_statistics_module_0_f_0();
        {
          DummyStatsFuncSymName_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, DummyStatsFuncSymName_65, 0) = ((MR_Box) (Var_147));
          MR_hl_field(1, DummyStatsFuncSymName_65, 1) = ((MR_Box) ((MR_String) "dummy_proc_table_statistics"));
        }
        mdbcomp__sym_name__sym_name_to_term_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Context_25, DummyStatsFuncSymName_65, (MR_Word) ((MR_Unsigned) 0U), &DummyStatsFuncTerm_66);
        {
          Var_150 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_150, 0) = ((MR_Box) (Stats_55));
          MR_hl_field(1, Var_150, 1) = ((MR_Box) (Context_25));
        }
        {
          Var_152 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_152, 0) = ((MR_Box) (IO0_56));
          MR_hl_field(1, Var_152, 1) = ((MR_Box) (Context_25));
        }
        {
          Var_154 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_154, 0) = ((MR_Box) (IO_57));
          MR_hl_field(1, Var_154, 1) = ((MR_Box) (Context_25));
        }
        {
          Var_153 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_153, 0) = ((MR_Box) (Var_154));
          MR_hl_field(1, Var_153, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_151 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_151, 0) = ((MR_Box) (Var_152));
          MR_hl_field(1, Var_151, 1) = ((MR_Box) (Var_153));
        }
        {
          Args_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Args_67, 0) = ((MR_Box) (Var_150));
          MR_hl_field(1, Args_67, 1) = ((MR_Box) (Var_151));
        }
        {
          GetStatsExpr_68 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, GetStatsExpr_68, 0) = ((MR_Box) (Context_25));
          MR_hl_field(0, GetStatsExpr_68, 1) = ((MR_Box) (Var_150));
          MR_hl_field(0, GetStatsExpr_68, 2) = ((MR_Box) (DummyStatsFuncTerm_66));
          MR_hl_field(0, GetStatsExpr_68, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        {
          UpdateIOExpr_69 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, UpdateIOExpr_69, 0) = ((MR_Box) (Context_25));
          MR_hl_field(0, UpdateIOExpr_69, 1) = ((MR_Box) (Var_152));
          MR_hl_field(0, UpdateIOExpr_69, 2) = ((MR_Box) (Var_154));
          MR_hl_field(0, UpdateIOExpr_69, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        {
          Var_161 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_161, 0) = ((MR_Box) (UpdateIOExpr_69));
          MR_hl_field(1, Var_161, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          GetStatsUpdateIOExpr_70 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, GetStatsUpdateIOExpr_70, 0) = ((MR_Box) (Context_25));
          MR_hl_field(2, GetStatsUpdateIOExpr_70, 1) = ((MR_Box) (GetStatsExpr_68));
          MR_hl_field(2, GetStatsUpdateIOExpr_70, 2) = ((MR_Box) (Var_161));
        }
        {
          BodyExpr_71 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, BodyExpr_71, 0) = ((MR_Box) ((MR_Unsigned) 7U));
          MR_hl_field(3, BodyExpr_71, 1) = ((MR_Box) (Context_25));
          MR_hl_field(3, BodyExpr_71, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(3, BodyExpr_71, 3) = ((MR_Box) (GetStatsUpdateIOExpr_70));
        }
        {
          Var_165 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_165, 0) = ((MR_Box) (BodyExpr_71));
          MR_hl_field(1, Var_165, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          StatsClauseInfo_72 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, StatsClauseInfo_72, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(0, StatsClauseInfo_72, 1) = ((MR_Box) (StatsPredSymName_34));
          MR_hl_field(0, StatsClauseInfo_72, 2) = ((MR_Box) (Args_67));
          MR_hl_field(0, StatsClauseInfo_72, 3) = ((MR_Box) (STATE_VARIABLE_VarSet_4_114));
          MR_hl_field(0, StatsClauseInfo_72, 4) = ((MR_Box) (Var_165));
          MR_hl_field(0, StatsClauseInfo_72, 5) = ((MR_Box) (Context_25));
          MR_hl_field(0, StatsClauseInfo_72, 6) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        hlds__make_hlds__add_clause__module_add_clause_10_p_0(ProgressStream_18, PredStatus_28, (MR_Word) ((MR_Unsigned) 0U), StatsClauseInfo_72, STATE_VARIABLE_ModuleInfo_1_106, STATE_VARIABLE_ModuleInfo_75, STATE_VARIABLE_QualInfo_0_76, STATE_VARIABLE_QualInfo_77, STATE_VARIABLE_Specs_1_107, STATE_VARIABLE_Specs_79);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Arg1_58;
        MR_Word Arg2_59;
        MR_Word Arg3_60;
        MR_String Global_61;
        MR_String StatsCode_62;
        MR_Word StatsImpl_63;
        MR_Word StatsFCInfo_64;
        MR_Word Var_116;
        MR_Word Var_119;
        MR_Word Var_122;
        MR_Word STATE_VARIABLE_Attrs_1_124;
        MR_Word STATE_VARIABLE_Attrs_2_127;
        MR_Word STATE_VARIABLE_Attrs_3_129;
        MR_Word STATE_VARIABLE_Attrs_4_131;
        MR_Word STATE_VARIABLE_Attrs_5_133;
        MR_String Var_136;
        MR_Word Var_138;
        MR_Word Var_140;
        MR_Word Var_141;
        MR_Word Var_142;

        Var_116 = parse_tree__prog_mode__out_mode_0_f_0();
        {
          Arg1_58 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Arg1_58, 0) = ((MR_Box) (Stats_55));
          MR_hl_field(0, Arg1_58, 1) = ((MR_Box) ((MR_String) "Stats"));
          MR_hl_field(0, Arg1_58, 2) = ((MR_Box) (Var_116));
          MR_hl_field(0, Arg1_58, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        }
        Var_119 = parse_tree__prog_mode__di_mode_0_f_0();
        {
          Arg2_59 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Arg2_59, 0) = ((MR_Box) (IO0_56));
          MR_hl_field(0, Arg2_59, 1) = ((MR_Box) ((MR_String) "_IO0"));
          MR_hl_field(0, Arg2_59, 2) = ((MR_Box) (Var_119));
          MR_hl_field(0, Arg2_59, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        }
        Var_122 = parse_tree__prog_mode__uo_mode_0_f_0();
        {
          Arg3_60 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Arg3_60, 0) = ((MR_Box) (IO_57));
          MR_hl_field(0, Arg3_60, 1) = ((MR_Box) ((MR_String) "_IO"));
          MR_hl_field(0, Arg3_60, 2) = ((MR_Box) (Var_122));
          MR_hl_field(0, Arg3_60, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        }
        STATE_VARIABLE_Attrs_1_124 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 0);
        parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_1_124, &STATE_VARIABLE_Attrs_2_127);
        parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_2_127, &STATE_VARIABLE_Attrs_3_129);
        parse_tree__prog_data_foreign__set_purity_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_3_129, &STATE_VARIABLE_Attrs_4_131);
        parse_tree__prog_data_foreign__set_may_duplicate_3_p_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_2[4])), STATE_VARIABLE_Attrs_4_131, &STATE_VARIABLE_Attrs_5_133);
        Global_61 = hlds__make_hlds__add_pragma_tabling__table_info_c_global_var_name_3_f_0(STATE_VARIABLE_ModuleInfo_1_106, PFSymNameArity_53, ProcId_23);
        Var_136 = mercury__string__f_43_43_2_f_0(Global_61, (MR_String) ", &Stats);");
        StatsCode_62 = mercury__string__f_43_43_2_f_0((MR_String) "MR_get_tabling_stats(&", Var_136);
        {
          Var_138 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_138, 0) = ((MR_Box) (Context_25));
        }
        {
          StatsImpl_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, StatsImpl_63, 0) = ((MR_Box) (StatsCode_62));
          MR_hl_field(0, StatsImpl_63, 1) = ((MR_Box) (Var_138));
        }
        {
          Var_142 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_142, 0) = ((MR_Box) (Arg3_60));
          MR_hl_field(1, Var_142, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_141 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_141, 0) = ((MR_Box) (Arg2_59));
          MR_hl_field(1, Var_141, 1) = ((MR_Box) (Var_142));
        }
        {
          Var_140 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_140, 0) = ((MR_Box) (Arg1_58));
          MR_hl_field(1, Var_140, 1) = ((MR_Box) (Var_141));
        }
        {
          StatsFCInfo_64 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, StatsFCInfo_64, 0) = ((MR_Box) (STATE_VARIABLE_Attrs_5_133));
          MR_hl_field(0, StatsFCInfo_64, 1) = ((MR_Box) (StatsPredSymName_34));
          MR_hl_field(0, StatsFCInfo_64, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(0, StatsFCInfo_64, 3) = ((MR_Box) (Var_140));
          MR_hl_field(0, StatsFCInfo_64, 4) = ((MR_Box) (STATE_VARIABLE_VarSet_4_114));
          MR_hl_field(0, StatsFCInfo_64, 5) = ((MR_Box) (InstVarSet_43));
          MR_hl_field(0, StatsFCInfo_64, 6) = ((MR_Box) (StatsImpl_63));
          MR_hl_field(0, StatsFCInfo_64, 7) = ((MR_Box) (Context_25));
          MR_hl_field(0, StatsFCInfo_64, 8) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        hlds__make_hlds__add_foreign_proc__add_foreign_proc_8_p_0(ProgressStream_18, ItemMercuryStatus_27, PredStatus_28, StatsFCInfo_64, STATE_VARIABLE_ModuleInfo_1_106, STATE_VARIABLE_ModuleInfo_75, STATE_VARIABLE_Specs_1_107, STATE_VARIABLE_Specs_79);
        *STATE_VARIABLE_QualInfo_77 = STATE_VARIABLE_QualInfo_0_76;
      }
      break;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_tabling__table_info_c_global_var_name_3_f_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__make_hlds__add_pragma_tabling__IntroducedFrom__pred__table_info_c_global_var_name__753__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_String MR_CALL 
hlds__make_hlds__add_pragma_tabling__table_info_c_global_var_name_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word PFSymNameArity_6,
  MR_Integer ProcId_7)
{
  MR_bool succeeded;
  MR_String VarName_8;
  MR_Word Globals_9;
  MR_Word Target_10;
  MR_Word HighLevelCode_11;
  MR_Word ModuleName_12;
  MR_Word PredOrFunc_13;
  MR_Word PredSymName_14;
  MR_Word PredFormArity_15;
  MR_String PredName_16;
  MR_Word Var_23;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_5, &Globals_9);
  libs__globals__get_target_2_p_0(Globals_9, &Target_10);
  {
    Var_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_23, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_tabling_scalar_common_4[0]));
    MR_hl_field(0, Var_23, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_tabling__table_info_c_global_var_name_3_f_0_1));
    MR_hl_field(0, Var_23, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_23, 3) = ((MR_Box) (Target_10));
    MR_hl_field(0, Var_23, 4) = ((MR_Box) ((MR_Integer) 0));
  }
  mercury__require__expect_3_p_0(Var_23, (MR_String) "function \140hlds.make_hlds.add_pragma_tabling.table_info_c_global_var_name\'/3", (MR_String) "memo table statistics and reset are supported only for C");
  libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 55, &HighLevelCode_11);
  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_5, &ModuleName_12);
  PredOrFunc_13 = ((MR_Unsigned) ((MR_hl_field(0, PFSymNameArity_6, 0))) & (MR_Integer) 1);
  PredSymName_14 = ((MR_Word) ((MR_hl_field(0, PFSymNameArity_6, 1))));
  PredFormArity_15 = ((MR_Word) ((MR_hl_field(0, PFSymNameArity_6, 2))));
  PredName_16 = mdbcomp__sym_name__unqualify_name_1_f_0(PredSymName_14);
  switch (HighLevelCode_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Integer PredFormArityInt_20 = (MR_Integer) (PredFormArity_15);
        MR_Integer ProcIdInt_21;
        MR_Word ProcLabel_22;

        hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_7, &ProcIdInt_21);
        {
          ProcLabel_22 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ProcLabel_22, 0) = ((MR_Box) (ModuleName_12));
          MR_hl_field(0, ProcLabel_22, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_13));
          MR_hl_field(0, ProcLabel_22, 2) = ((MR_Box) (ModuleName_12));
          MR_hl_field(0, ProcLabel_22, 3) = ((MR_Box) (PredName_16));
          MR_hl_field(0, ProcLabel_22, 4) = ((MR_Box) (PredFormArityInt_20));
          MR_hl_field(0, ProcLabel_22, 5) = ((MR_Box) (ProcIdInt_21));
        }
        VarName_8 = ll_backend__rtti_out__tabling_struct_data_addr_string_2_f_0(ProcLabel_22, (MR_Word) ((MR_Unsigned) 0U));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word MLDS_PredLabel_18;
        MR_Word MLDS_ProcLabel_19;

        {
          MLDS_PredLabel_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, MLDS_PredLabel_18, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_13));
          MR_hl_field(0, MLDS_PredLabel_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, MLDS_PredLabel_18, 2) = ((MR_Box) (PredName_16));
          MR_hl_field(0, MLDS_PredLabel_18, 3) = ((MR_Box) (PredFormArity_15));
        }
        {
          MLDS_ProcLabel_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, MLDS_ProcLabel_19, 0) = ((MR_Box) (MLDS_PredLabel_18));
          MR_hl_field(0, MLDS_ProcLabel_19, 1) = ((MR_Box) (ProcId_7));
        }
        VarName_8 = ml_backend__mlds_to_c_name__tabling_struct_id_to_string_2_f_0(MLDS_ProcLabel_19, (MR_Word) ((MR_Unsigned) 0U));
      }
      break;
  }
  return VarName_8;
}

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma_tabling__tabled_eval_method_needs_stratification_1_f_0(
  MR_Word TabledMethod_3)
{
  MR_Word NeedsStratification_4;

  switch (MR_tag((MR_Word) TabledMethod_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      NeedsStratification_4 = (MR_Integer) 0;
      break;
    case (MR_Integer) 3:
      NeedsStratification_4 = (MR_Integer) 1;
      break;
  }
  return NeedsStratification_4;
}

static void MR_CALL 
hlds__make_hlds__add_pragma_tabling__module_add_pragma_tabled_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_ModuleInfo_71;
  MR_Word conv1_STATE_VARIABLE_QualInfo_73;
  MR_Word conv0_STATE_VARIABLE_Specs_75;

  hlds__make_hlds__add_pragma_tabling__module_add_pragma_tabled_for_pred_16_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_String) ((MR_hl_field(0, closure, 7)))), ((MR_Word) ((MR_hl_field(0, closure, 8)))), ((MR_Word) ((MR_hl_field(0, closure, 9)))), ((MR_Word) ((MR_hl_field(0, closure, 10)))), ((MR_Word) ((MR_hl_field(0, closure, 11)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ModuleInfo_71, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_QualInfo_73, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_Specs_75);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ModuleInfo_71));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_QualInfo_73));
  *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_75));
}

void MR_CALL 
hlds__make_hlds__add_pragma_tabling__module_add_pragma_tabled_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word TabledInfo_12,
  MR_Word ItemMercuryStatus_13,
  MR_Word PredStatus_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_56,
  MR_Word * STATE_VARIABLE_ModuleInfo_57,
  MR_Word STATE_VARIABLE_QualInfo_0_58,
  MR_Word * STATE_VARIABLE_QualInfo_59,
  MR_Word STATE_VARIABLE_Specs_0_60,
  MR_Word * STATE_VARIABLE_Specs_61)
{
  MR_Word TabledMethod_18 = ((MR_Word) ((MR_hl_field(0, TabledInfo_12, 0))));
  MR_Word PredOrProcSpec_19 = ((MR_Word) ((MR_hl_field(0, TabledInfo_12, 1))));
  MR_Word MaybeAttributes_20 = ((MR_Word) ((MR_hl_field(0, TabledInfo_12, 2))));
  MR_Word Context_21 = ((MR_Word) ((MR_hl_field(0, TabledInfo_12, 3))));
  MR_Word PFUMM_23 = ((MR_Word) ((MR_hl_field(0, PredOrProcSpec_19, 0))));
  MR_Word PredSymName_24 = ((MR_Word) ((MR_hl_field(0, PredOrProcSpec_19, 1))));
  MR_Word PredModuleName_25;
  MR_String PredName_26;
  MR_Word PredicateTable0_28;
  MR_Word UserArity_33;
  MR_Word PredIds_39;
  MR_Word STATE_VARIABLE_ModuleInfo_1_71;
  MR_Word STATE_VARIABLE_Specs_1_72;
  MR_Word STATE_VARIABLE_Specs_5_166;
  MR_Word Var_167;
  MR_Box conv5_STATE_VARIABLE_ModuleInfo_57;
  MR_Box conv4_STATE_VARIABLE_QualInfo_59;
  MR_Box conv3_STATE_VARIABLE_Specs_61;

  if (((MR_tag((MR_Word) PredSymName_24)) == (MR_Integer) 1))
  {
    PredModuleName_25 = ((MR_Word) ((MR_hl_field(1, PredSymName_24, 0))));
    PredName_26 = ((MR_String) ((MR_hl_field(1, PredSymName_24, 1))));
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_pragma_tabling.module_add_pragma_tabled\'/10", (MR_String) "unqualified PredSymName");
      return;
    }
  hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_56, &PredicateTable0_28);
  switch (MR_tag((MR_Word) PFUMM_23)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ModesOrArity_237 = ((MR_Word) ((MR_hl_field(0, PFUMM_23, 0))));
        MR_Word PredFormArity_240;
        MR_Word MaybePredId_241;

        if (((MR_tag((MR_Word) ModesOrArity_237)) == (MR_Integer) 1))
        {
          UserArity_33 = ((MR_Word) ((MR_hl_field(1, ModesOrArity_237, 0))));
          parse_tree__prog_util__user_arity_pred_form_arity_3_p_0((MR_Integer) 0, UserArity_33, &PredFormArity_240);
        }
        else
        {
          MR_Word Modes_205 = ((MR_Word) ((MR_hl_field(0, ModesOrArity_237, 0))));

          PredFormArity_240 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_205);
          parse_tree__prog_util__user_arity_pred_form_arity_3_p_1((MR_Integer) 0, &UserArity_33, PredFormArity_240);
        }
        hlds__pred_table__predicate_table_search_pf_fqm_n_a_6_p_0(PredicateTable0_28, (MR_Integer) 0, PredModuleName_25, PredName_26, PredFormArity_240, &MaybePredId_241);
        if ((MaybePredId_241 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Origin_209;
          MR_String TabledMethodStr_210;
          MR_Word DescPieces_211;
          MR_Word PredId_212;
          MR_Word Var_213;
          MR_Word Var_214;

          {
            Var_213 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_213, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(0, Var_213, 1) = ((MR_Box) (PredSymName_24));
            MR_hl_field(0, Var_213, 2) = ((MR_Box) (UserArity_33));
          }
          {
            Origin_209 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Origin_209, 0) = ((MR_Box) (Var_213));
          }
          TabledMethodStr_210 = parse_tree__parse_tree_out_misc__tabled_eval_method_to_string_1_f_0(TabledMethod_18);
          {
            Var_214 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_214, 0) = ((MR_Box) ((MR_Unsigned) 36U));
            MR_hl_field(3, Var_214, 1) = ((MR_Box) (TabledMethodStr_210));
          }
          {
            DescPieces_211 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, DescPieces_211, 0) = ((MR_Box) (Var_214));
            MR_hl_field(1, DescPieces_211, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[2])));
          }
          hlds__make_hlds__add_pred__add_implicit_pred_decl_report_error_14_p_0((MR_Integer) 0, PredModuleName_25, PredName_26, PredFormArity_240, PredStatus_14, (MR_Integer) 0, Context_21, Origin_209, DescPieces_211, &PredId_212, STATE_VARIABLE_ModuleInfo_0_56, &STATE_VARIABLE_ModuleInfo_1_71, STATE_VARIABLE_Specs_0_60, &STATE_VARIABLE_Specs_1_72);
          {
            PredIds_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, PredIds_39, 0) = ((MR_Box) (PredId_212));
            MR_hl_field(1, PredIds_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        else
        {
          MR_Word PredId_222 = ((MR_Word) ((MR_hl_field(1, MaybePredId_241, 0))));

          {
            PredIds_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, PredIds_39, 0) = ((MR_Box) (PredId_222));
            MR_hl_field(1, PredIds_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          STATE_VARIABLE_ModuleInfo_1_71 = STATE_VARIABLE_ModuleInfo_0_56;
          STATE_VARIABLE_Specs_1_72 = STATE_VARIABLE_Specs_0_60;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModesOrArity_29 = ((MR_Word) ((MR_hl_field(1, PFUMM_23, 0))));
        MR_Word PredFormArity_32;
        MR_Word MaybePredId_34;

        if (((MR_tag((MR_Word) ModesOrArity_29)) == (MR_Integer) 1))
        {
          UserArity_33 = ((MR_Word) ((MR_hl_field(1, ModesOrArity_29, 0))));
          parse_tree__prog_util__user_arity_pred_form_arity_3_p_0((MR_Integer) 1, UserArity_33, &PredFormArity_32);
        }
        else
        {
          MR_Word Modes_31 = ((MR_Word) ((MR_hl_field(0, ModesOrArity_29, 0))));

          PredFormArity_32 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_31);
          parse_tree__prog_util__user_arity_pred_form_arity_3_p_1((MR_Integer) 1, &UserArity_33, PredFormArity_32);
        }
        hlds__pred_table__predicate_table_search_pf_fqm_n_a_6_p_0(PredicateTable0_28, (MR_Integer) 1, PredModuleName_25, PredName_26, PredFormArity_32, &MaybePredId_34);
        if ((MaybePredId_34 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Origin_35;
          MR_String TabledMethodStr_36;
          MR_Word DescPieces_37;
          MR_Word PredId_38;
          MR_Word Var_64;
          MR_Word Var_65;

          {
            Var_64 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_64, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            MR_hl_field(0, Var_64, 1) = ((MR_Box) (PredSymName_24));
            MR_hl_field(0, Var_64, 2) = ((MR_Box) (UserArity_33));
          }
          {
            Origin_35 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Origin_35, 0) = ((MR_Box) (Var_64));
          }
          TabledMethodStr_36 = parse_tree__parse_tree_out_misc__tabled_eval_method_to_string_1_f_0(TabledMethod_18);
          {
            Var_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_65, 0) = ((MR_Box) ((MR_Unsigned) 36U));
            MR_hl_field(3, Var_65, 1) = ((MR_Box) (TabledMethodStr_36));
          }
          {
            DescPieces_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, DescPieces_37, 0) = ((MR_Box) (Var_65));
            MR_hl_field(1, DescPieces_37, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[2])));
          }
          hlds__make_hlds__add_pred__add_implicit_pred_decl_report_error_14_p_0((MR_Integer) 1, PredModuleName_25, PredName_26, PredFormArity_32, PredStatus_14, (MR_Integer) 0, Context_21, Origin_35, DescPieces_37, &PredId_38, STATE_VARIABLE_ModuleInfo_0_56, &STATE_VARIABLE_ModuleInfo_1_71, STATE_VARIABLE_Specs_0_60, &STATE_VARIABLE_Specs_1_72);
          {
            PredIds_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, PredIds_39, 0) = ((MR_Box) (PredId_38));
            MR_hl_field(1, PredIds_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        else
        {
          MR_Word PredId_171 = ((MR_Word) ((MR_hl_field(1, MaybePredId_34, 0))));

          {
            PredIds_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, PredIds_39, 0) = ((MR_Box) (PredId_171));
            MR_hl_field(1, PredIds_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          STATE_VARIABLE_ModuleInfo_1_71 = STATE_VARIABLE_ModuleInfo_0_56;
          STATE_VARIABLE_Specs_1_72 = STATE_VARIABLE_Specs_0_60;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PredIds0_40;
        MR_Word STATE_VARIABLE_Specs_2_75;
        MR_String TabledMethodStr_182;

        UserArity_33 = ((MR_Word) ((MR_hl_field(2, PFUMM_23, 0))));
        TabledMethodStr_182 = parse_tree__parse_tree_out_misc__tabled_eval_method_to_string_1_f_0(TabledMethod_18);
        hlds__make_hlds_error__maybe_warn_about_pfumm_unknown_7_p_0(STATE_VARIABLE_ModuleInfo_0_56, TabledMethodStr_182, PFUMM_23, PredSymName_24, Context_21, STATE_VARIABLE_Specs_0_60, &STATE_VARIABLE_Specs_2_75);
        hlds__pred_table__predicate_table_lookup_m_n_a_6_p_0(PredicateTable0_28, (MR_Integer) 0, PredModuleName_25, PredName_26, UserArity_33, &PredIds0_40);
        if ((PredIds0_40 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_77;
          MR_Word Var_79;
          MR_Word PredFormArity_172;
          MR_Word Origin_173;
          MR_Word DescPieces_174;
          MR_Word PredId_175;

          {
            Var_77 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_77, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(0, Var_77, 1) = ((MR_Box) (PredSymName_24));
            MR_hl_field(0, Var_77, 2) = ((MR_Box) (UserArity_33));
          }
          {
            Origin_173 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Origin_173, 0) = ((MR_Box) (Var_77));
          }
          {
            Var_79 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_79, 0) = ((MR_Box) ((MR_Unsigned) 36U));
            MR_hl_field(3, Var_79, 1) = ((MR_Box) (TabledMethodStr_182));
          }
          {
            DescPieces_174 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, DescPieces_174, 0) = ((MR_Box) (Var_79));
            MR_hl_field(1, DescPieces_174, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[2])));
          }
          parse_tree__prog_util__user_arity_pred_form_arity_3_p_0((MR_Integer) 0, UserArity_33, &PredFormArity_172);
          hlds__make_hlds__add_pred__add_implicit_pred_decl_report_error_14_p_0((MR_Integer) 0, PredModuleName_25, PredName_26, PredFormArity_172, PredStatus_14, (MR_Integer) 0, Context_21, Origin_173, DescPieces_174, &PredId_175, STATE_VARIABLE_ModuleInfo_0_56, &STATE_VARIABLE_ModuleInfo_1_71, STATE_VARIABLE_Specs_2_75, &STATE_VARIABLE_Specs_1_72);
          {
            PredIds_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, PredIds_39, 0) = ((MR_Box) (PredId_175));
            MR_hl_field(1, PredIds_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        else
        {
          PredIds_39 = PredIds0_40;
          STATE_VARIABLE_ModuleInfo_1_71 = STATE_VARIABLE_ModuleInfo_0_56;
          STATE_VARIABLE_Specs_1_72 = STATE_VARIABLE_Specs_2_75;
        }
      }
      break;
  }
  if ((MaybeAttributes_20 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_Specs_5_166 = STATE_VARIABLE_Specs_1_72;
  else
  {
    MR_Word Attributes_43 = ((MR_Word) ((MR_hl_field(1, MaybeAttributes_20, 0))));
    MR_Word Statistics_44 = ((((MR_Unsigned) ((MR_hl_field(0, Attributes_43, 2))) >> 2)) & (MR_Integer) 1);
    MR_Word AllowReset_45 = ((((MR_Unsigned) ((MR_hl_field(0, Attributes_43, 2))) >> 1)) & (MR_Integer) 1);
    MR_Word Var_257 = ((MR_Word) ((MR_hl_field(1, PredIds_39, 1))));

    if ((Var_257 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Specs_5_166 = STATE_VARIABLE_Specs_1_72;
    else
    {
      MR_Integer UserArityInt_50 = (MR_Integer) (UserArity_33);
      MR_Word SNA_51;
      MR_Word STATE_VARIABLE_Specs_4_130;

      {
        SNA_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, SNA_51, 0) = ((MR_Box) (PredSymName_24));
        MR_hl_field(0, SNA_51, 1) = ((MR_Box) (UserArityInt_50));
      }
      switch (Statistics_44) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_Specs_4_130 = STATE_VARIABLE_Specs_1_72;
          break;
        case (MR_Integer) 1:
          {
            MR_Word StatsPieces_52;
            MR_Word StatsSpec_53;
            MR_Word Var_96;
            MR_Word Var_97;
            MR_Word Var_102;
            MR_Word Var_107;
            MR_Word Var_108;
            MR_Word Var_109;
            MR_Word Var_110;

            Var_97 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[6])));
            {
              Var_110 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_110, 0) = ((MR_Box) ((MR_Unsigned) 14U));
              MR_hl_field(3, Var_110, 1) = ((MR_Box) (SNA_51));
            }
            {
              Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_109, 0) = ((MR_Box) (Var_110));
              MR_hl_field(1, Var_109, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[10])));
            }
            Var_108 = parse_tree__error_spec__color_as_subject_1_f_0(Var_109);
            Var_107 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_108, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[17])));
            Var_102 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[8])), Var_107);
            Var_96 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_97, Var_102);
            StatsPieces_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[4])), Var_96);
            {
              StatsSpec_53 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, StatsSpec_53, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_tabling.module_add_pragma_tabled\'/10"));
              MR_hl_field(0, StatsSpec_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, StatsSpec_53, 2) = ((MR_Box) ((MR_Unsigned) 44U));
              MR_hl_field(0, StatsSpec_53, 3) = ((MR_Box) (Context_21));
              MR_hl_field(0, StatsSpec_53, 4) = ((MR_Box) (StatsPieces_52));
            }
            {
              STATE_VARIABLE_Specs_4_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_Specs_4_130, 0) = ((MR_Box) (StatsSpec_53));
              MR_hl_field(1, STATE_VARIABLE_Specs_4_130, 1) = ((MR_Box) (STATE_VARIABLE_Specs_1_72));
            }
          }
          break;
      }
      switch (AllowReset_45) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word ResetPieces_54;
            MR_Word ResetSpec_55;
            MR_Word Var_135;
            MR_Word Var_136;
            MR_Word Var_141;
            MR_Word Var_146;
            MR_Word Var_147;
            MR_Word Var_148;
            MR_Word Var_149;

            Var_136 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[19])));
            {
              Var_149 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_149, 0) = ((MR_Box) ((MR_Unsigned) 14U));
              MR_hl_field(3, Var_149, 1) = ((MR_Box) (SNA_51));
            }
            {
              Var_148 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_148, 0) = ((MR_Box) (Var_149));
              MR_hl_field(1, Var_148, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[10])));
            }
            Var_147 = parse_tree__error_spec__color_as_subject_1_f_0(Var_148);
            Var_146 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_147, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[21])));
            Var_141 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[8])), Var_146);
            Var_135 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_136, Var_141);
            ResetPieces_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[4])), Var_135);
            {
              ResetSpec_55 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ResetSpec_55, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_tabling.module_add_pragma_tabled\'/10"));
              MR_hl_field(0, ResetSpec_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, ResetSpec_55, 2) = ((MR_Box) ((MR_Unsigned) 44U));
              MR_hl_field(0, ResetSpec_55, 3) = ((MR_Box) (Context_21));
              MR_hl_field(0, ResetSpec_55, 4) = ((MR_Box) (ResetPieces_54));
            }
            {
              STATE_VARIABLE_Specs_5_166 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_Specs_5_166, 0) = ((MR_Box) (ResetSpec_55));
              MR_hl_field(1, STATE_VARIABLE_Specs_5_166, 1) = ((MR_Box) (STATE_VARIABLE_Specs_4_130));
            }
          }
          break;
        case (MR_Integer) 0:
          STATE_VARIABLE_Specs_5_166 = STATE_VARIABLE_Specs_4_130;
          break;
      }
    }
  }
  {
    Var_167 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_167, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_tabling_scalar_common_3[0]));
    MR_hl_field(0, Var_167, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_tabling__module_add_pragma_tabled_10_p_0_1));
    MR_hl_field(0, Var_167, 2) = ((MR_Box) ((MR_Integer) 9));
    MR_hl_field(0, Var_167, 3) = ((MR_Box) (ProgressStream_11));
    MR_hl_field(0, Var_167, 4) = ((MR_Box) (TabledMethod_18));
    MR_hl_field(0, Var_167, 5) = ((MR_Box) (PFUMM_23));
    MR_hl_field(0, Var_167, 6) = ((MR_Box) (PredModuleName_25));
    MR_hl_field(0, Var_167, 7) = ((MR_Box) (PredName_26));
    MR_hl_field(0, Var_167, 8) = ((MR_Box) (MaybeAttributes_20));
    MR_hl_field(0, Var_167, 9) = ((MR_Box) (Context_21));
    MR_hl_field(0, Var_167, 10) = ((MR_Box) (ItemMercuryStatus_13));
    MR_hl_field(0, Var_167, 11) = ((MR_Box) (PredStatus_14));
  }
  mercury__list__foldl3_8_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0), (MR_Word) (&hlds__make_hlds__add_pragma_tabling_scalar_common_1[0]), Var_167, PredIds_39, ((MR_Box) (STATE_VARIABLE_ModuleInfo_1_71)), &conv5_STATE_VARIABLE_ModuleInfo_57, ((MR_Box) (STATE_VARIABLE_QualInfo_0_58)), &conv4_STATE_VARIABLE_QualInfo_59, ((MR_Box) (STATE_VARIABLE_Specs_5_166)), &conv3_STATE_VARIABLE_Specs_61);
  *STATE_VARIABLE_ModuleInfo_57 = ((MR_Word) (conv5_STATE_VARIABLE_ModuleInfo_57));
  *STATE_VARIABLE_QualInfo_59 = ((MR_Word) (conv4_STATE_VARIABLE_QualInfo_59));
  *STATE_VARIABLE_Specs_61 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_61));
}

void mercury__hlds__make_hlds__add_pragma_tabling__init(void)
{
}

void mercury__hlds__make_hlds__add_pragma_tabling__init_type_tables(void)
{
}

void mercury__hlds__make_hlds__add_pragma_tabling__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__make_hlds__add_pragma_tabling__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module hlds.make_hlds.add_pragma_tabling.
