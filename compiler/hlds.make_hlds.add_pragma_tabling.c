/*
** Automatically generated from `add_pragma_tabling.m'
** by the Mercury compiler,
** version rotd-2026-07-22
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
#include "hlds.mode_test.mih"
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
#include "parse_tree.build_eqv_maps.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
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

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_tabling__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_tabling__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_warn_spec_0;

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_tabling__IntroducedFrom__pred__table_info_c_global_var_name__762__1_2_p_0(
  MR_Word Target_10,
  MR_Word HeadVar__2_26);

static void MR_CALL 
hlds__make_hlds__add_pragma_tabling__module_add_pragma_tabled_for_pred_18_p_0(
  MR_Word ProgressStream_19,
  MR_Word TabledMethod0_20,
  MR_Word PFUMM_21,
  MR_Word PredModuleName_22,
  MR_String PredName_23,
  MR_Word MaybeAttributes_24,
  MR_Word Context_25,
  MR_Word ItemMercuryStatus_26,
  MR_Word PredStatus_27,
  MR_Word PredId_28,
  MR_Word STATE_VARIABLE_ModuleInfo_0_73,
  MR_Word * STATE_VARIABLE_ModuleInfo_74,
  MR_Word STATE_VARIABLE_QualInfo_0_75,
  MR_Word * STATE_VARIABLE_QualInfo_76,
  MR_Word STATE_VARIABLE_ErrSpecs_0_77,
  MR_Word * STATE_VARIABLE_ErrSpecs_78,
  MR_Word STATE_VARIABLE_WarnSpecs_0_79,
  MR_Word * STATE_VARIABLE_WarnSpecs_80);

static void MR_CALL 
hlds__make_hlds__add_pragma_tabling__set_eval_method_create_aux_preds_list_23_p_0(
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
  MR_Word STATE_VARIABLE_ErrSpecs_0_20,
  MR_Word * STATE_VARIABLE_ErrSpecs_21,
  MR_Word STATE_VARIABLE_WarnSpecs_0_22,
  MR_Word * STATE_VARIABLE_WarnSpecs_23);

static void MR_CALL 
hlds__make_hlds__add_pragma_tabling__set_eval_method_create_aux_preds_24_p_0(
  MR_Word ProgressStream_25,
  MR_Word PredInfo_26,
  MR_Word PredOrFunc_27,
  MR_Word PredModuleName_28,
  MR_String PredName_29,
  MR_Word UserArity_30,
  MR_Integer ProcId_31,
  MR_Word ProcInfo0_32,
  MR_Word SingleProc_33,
  MR_Word Context_34,
  MR_Word TabledMethod_35,
  MR_Word MaybeAttributes_36,
  MR_Word ItemMercuryStatus_37,
  MR_Word PredStatus_38,
  MR_Word STATE_VARIABLE_ProcTable_0_72,
  MR_Word * STATE_VARIABLE_ProcTable_73,
  MR_Word STATE_VARIABLE_ModuleInfo_0_74,
  MR_Word * STATE_VARIABLE_ModuleInfo_75,
  MR_Word STATE_VARIABLE_QualInfo_0_76,
  MR_Word * STATE_VARIABLE_QualInfo_77,
  MR_Word STATE_VARIABLE_ErrSpecs_0_78,
  MR_Word * STATE_VARIABLE_ErrSpecs_79,
  MR_Word STATE_VARIABLE_WarnSpecs_0_80,
  MR_Word * STATE_VARIABLE_WarnSpecs_81);

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
hlds__make_hlds__add_pragma_tabling__create_tabling_reset_pred_19_p_0(
  MR_Word ProgressStream_20,
  MR_Word PredOrFunc_21,
  MR_Word PredModuleName_22,
  MR_String PredName_23,
  MR_Word UserArity_24,
  MR_Integer ProcId_25,
  MR_Word SingleProc_26,
  MR_Word Context_27,
  MR_Word IsTablingSupported_28,
  MR_Word ItemMercuryStatus_29,
  MR_Word PredStatus_30,
  MR_Word STATE_VARIABLE_ModuleInfo_0_66,
  MR_Word * STATE_VARIABLE_ModuleInfo_67,
  MR_Word STATE_VARIABLE_QualInfo_0_68,
  MR_Word * STATE_VARIABLE_QualInfo_69,
  MR_Word STATE_VARIABLE_ErrSpecs_0_70,
  MR_Word * STATE_VARIABLE_ErrSpecs_71,
  MR_Word STATE_VARIABLE_WarnSpecs_0_72,
  MR_Word * STATE_VARIABLE_WarnSpecs_73);

static void MR_CALL 
hlds__make_hlds__add_pragma_tabling__create_tabling_statistics_pred_19_p_0(
  MR_Word ProgressStream_20,
  MR_Word PredOrFunc_21,
  MR_Word PredModuleName_22,
  MR_String PredName_23,
  MR_Word UserArity_24,
  MR_Integer ProcId_25,
  MR_Word SingleProc_26,
  MR_Word Context_27,
  MR_Word IsTablingSupported_28,
  MR_Word ItemMercuryStatus_29,
  MR_Word PredStatus_30,
  MR_Word STATE_VARIABLE_ModuleInfo_0_77,
  MR_Word * STATE_VARIABLE_ModuleInfo_78,
  MR_Word STATE_VARIABLE_QualInfo_0_79,
  MR_Word * STATE_VARIABLE_QualInfo_80,
  MR_Word STATE_VARIABLE_ErrSpecs_0_81,
  MR_Word * STATE_VARIABLE_ErrSpecs_82,
  MR_Word STATE_VARIABLE_WarnSpecs_0_83,
  MR_Word * STATE_VARIABLE_WarnSpecs_84);

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
hlds__make_hlds__add_pragma_tabling__module_add_pragma_tabled_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9);


static /* final */ const MR_Box hlds__make_hlds__add_pragma_tabling_scalar_common_1[100][2];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_tabling_scalar_common_2[5][1];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_tabling_scalar_common_3[1][21];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_tabling_scalar_common_4[1][5];




static /* final */ const MR_Box hlds__make_hlds__add_pragma_tabling_scalar_common_1[100][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[2]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[4]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "cannot request statistics"))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[6]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for the ambiguous name"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[8]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[10]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "would have an ambiguous name too."))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[12])))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "statistics predicate"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[14])))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "since the compiler-generated"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[16])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "cannot request allow_reset"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[19]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "since the compiler-generated reset predicate"))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[14])))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning:"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[23]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "has both a"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[25]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "and a"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[27]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[29]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_String) "inline"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[30])))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The inline pragma"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[33]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  35 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[34])))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "will be ignored,"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[36]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "option to suppress this warning."))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[12])))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--no-warn-table-with-inline"))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[39])))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "You can use the"))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[41])))
  },
  /* row  44 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[43])))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "because tabled predicates cannot be inlined."))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[44])))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: a"))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "may not specify"))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[48]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "that it is for an imported"))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "such as"))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[51]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[53]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for the"))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "which has"))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[56]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "no declared modes."))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[58]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[60]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "undeclared mode"))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[62]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of"))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error in"))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "has"))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[67]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "duplicate"))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "pragmas"))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[70]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "specified."))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[12])))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "tabling pragmas specified,"))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[74]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "two conflicting"))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[75])))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[78]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  80 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "too many argument tabling methods specified."))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[81]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[12])))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "not enough argument tabling methods specified."))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[83]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[12])))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in"))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "argument tabling method"))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[86]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[87])))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[89]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "input modes."))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[91]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "not compatible with"))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[93]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[92])))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "output modes."))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[95]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[93]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[96])))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is neither input or output."))
  },
  /* row  99 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[98]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[12])))
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

static /* final */ const MR_Box hlds__make_hlds__add_pragma_tabling_scalar_common_3[1][21] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 18)),
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
    ((MR_Box) (&hlds__make_hlds__add_pragma_tabling__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_tabling__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_tabling__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_warn_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_tabling__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_warn_spec_0))
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

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_tabling__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_tabling__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_warn_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0) }
};

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_tabling__IntroducedFrom__pred__table_info_c_global_var_name__762__1_2_p_0(
  MR_Word Target_10,
  MR_Word HeadVar__2_26)
{
  MR_bool succeeded = (Target_10 == HeadVar__2_26);

  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_pragma_tabling__module_add_pragma_tabled_for_pred_18_p_0(
  MR_Word ProgressStream_19,
  MR_Word TabledMethod0_20,
  MR_Word PFUMM_21,
  MR_Word PredModuleName_22,
  MR_String PredName_23,
  MR_Word MaybeAttributes_24,
  MR_Word Context_25,
  MR_Word ItemMercuryStatus_26,
  MR_Word PredStatus_27,
  MR_Word PredId_28,
  MR_Word STATE_VARIABLE_ModuleInfo_0_73,
  MR_Word * STATE_VARIABLE_ModuleInfo_74,
  MR_Word STATE_VARIABLE_QualInfo_0_75,
  MR_Word * STATE_VARIABLE_QualInfo_76,
  MR_Word STATE_VARIABLE_ErrSpecs_0_77,
  MR_Word * STATE_VARIABLE_ErrSpecs_78,
  MR_Word STATE_VARIABLE_WarnSpecs_0_79,
  MR_Word * STATE_VARIABLE_WarnSpecs_80)
{
  MR_bool succeeded;
  MR_Word Globals_33;
  MR_Word TabledMethod_36;
  MR_Word PredInfo0_37;
  MR_Word MaybePredOrFunc_38;
  MR_Word UserArity_39;
  MR_Word MaybeModes_40;
  MR_Word PredOrFunc_41;
  MR_Word PredSymName_42;
  MR_Word PredFormArity_43;
  MR_Word PFSymNameArity_44;
  MR_String TabledMethodStr_45;
  MR_Word VeryVerbose_46;
  MR_Word Markers_49;
  MR_Word STATE_VARIABLE_WarnSpecs_1_164;
  MR_Word WarnTableWithInline_50;
  MR_Word Var_94;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_73, &Globals_33);
  succeeded = ((MR_tag((MR_Word) TabledMethod0_20)) == (MR_Integer) 3);
  if (succeeded)
  {
    MR_Word OwnStacks_35;

    libs__globals__lookup_bool_option_3_p_0(Globals_33, (MR_Integer) 95, &OwnStacks_35);
    switch (OwnStacks_35) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        TabledMethod_36 = (MR_Word) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_2[0]));
        break;
      case (MR_Integer) 1:
        TabledMethod_36 = (MR_Word) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_2[1]));
        break;
    }
  }
  else
    TabledMethod_36 = TabledMethod0_20;
  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_73, PredId_28, &PredInfo0_37);
  parse_tree__prog_item__pfumm_to_maybe_pf_arity_maybe_modes_4_p_0(PFUMM_21, &MaybePredOrFunc_38, &UserArity_39, &MaybeModes_40);
  if ((MaybePredOrFunc_38 == (MR_Word) ((MR_Unsigned) 0U)))
    PredOrFunc_41 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo0_37);
  else
    PredOrFunc_41 = ((MR_Word) ((MR_hl_field(1, MaybePredOrFunc_38, 0))));
  {
    PredSymName_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, PredSymName_42, 0) = ((MR_Box) (PredModuleName_22));
    MR_hl_field(1, PredSymName_42, 1) = ((MR_Box) (PredName_23));
  }
  parse_tree__prog_util__user_arity_pred_form_arity_3_p_0(PredOrFunc_41, UserArity_39, &PredFormArity_43);
  {
    PFSymNameArity_44 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PFSymNameArity_44, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_41));
    MR_hl_field(0, PFSymNameArity_44, 1) = ((MR_Box) (PredSymName_42));
    MR_hl_field(0, PFSymNameArity_44, 2) = ((MR_Box) (UserArity_39));
  }
  TabledMethodStr_45 = parse_tree__parse_tree_out_misc__tabled_eval_method_to_string_1_f_0(TabledMethod_36);
  libs__globals__lookup_bool_option_3_p_0(Globals_33, (MR_Integer) 132, &VeryVerbose_46);
  switch (VeryVerbose_46) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String IdStr_48;

        IdStr_48 = parse_tree__parse_tree_out_sym_name__pf_sym_name_pred_form_arity_to_string_3_f_0(PredOrFunc_41, PredSymName_42, PredFormArity_43);
        mercury__io__write_string_4_p_0(ProgressStream_19, (MR_String) "% Processing \140:- pragma ");
        mercury__io__write_string_4_p_0(ProgressStream_19, TabledMethodStr_45);
        mercury__io__write_string_4_p_0(ProgressStream_19, (MR_String) "\' for ");
        mercury__io__write_string_4_p_0(ProgressStream_19, IdStr_48);
        mercury__io__write_string_4_p_0(ProgressStream_19, (MR_String) "...\n");
      }
      break;
  }
  hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo0_37, &Markers_49);
  succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_49, (MR_Integer) 6);
  if (succeeded)
  {
    Var_94 = (MR_Integer) 183;
    libs__globals__lookup_bool_option_3_p_0(Globals_33, Var_94, &WarnTableWithInline_50);
    succeeded = (WarnTableWithInline_50 == (MR_Integer) 1);
  }
  if (succeeded)
  {
    MR_Word InlineWarningPieces_51;
    MR_Word InlineWarningSpec_53;
    MR_Word Var_99;
    MR_Word Var_100;
    MR_Word Var_101;
    MR_Word Var_102;
    MR_Word Var_104;
    MR_Word Var_109;
    MR_Word Var_110;
    MR_Word Var_111;
    MR_Word Var_112;
    MR_Word Var_117;
    MR_Word Var_122;
    MR_Word Var_123;
    MR_Word Var_131;
    MR_Word Var_138;
    MR_Word Var_139;

    {
      Var_102 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_102, 0) = ((MR_Box) ((MR_Unsigned) 18U));
      MR_hl_field(3, Var_102, 1) = ((MR_Box) (PFSymNameArity_44));
    }
    {
      Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_101, 0) = ((MR_Box) (Var_102));
      MR_hl_field(1, Var_101, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_100 = parse_tree__error_spec__color_as_subject_1_f_0(Var_101);
    {
      Var_112 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_112, 0) = ((MR_Box) ((MR_Unsigned) 36U));
      MR_hl_field(3, Var_112, 1) = ((MR_Box) (TabledMethodStr_45));
    }
    {
      Var_111 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_111, 0) = ((MR_Box) (Var_112));
      MR_hl_field(1, Var_111, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[3])));
    }
    Var_110 = parse_tree__error_spec__color_as_inconsistent_1_f_0(Var_111);
    Var_123 = parse_tree__error_spec__color_as_inconsistent_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[32])));
    Var_139 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[37])));
    Var_138 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_139, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[46])));
    Var_131 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[35])), Var_138);
    Var_122 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_123, Var_131);
    Var_117 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[28])), Var_122);
    Var_109 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_110, Var_117);
    Var_104 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[26])), Var_109);
    Var_99 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_100, Var_104);
    InlineWarningPieces_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[24])), Var_99);
    {
      InlineWarningSpec_53 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, InlineWarningSpec_53, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_tabling.module_add_pragma_tabled_for_pred\'/18"));
      MR_hl_field(0, InlineWarningSpec_53, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_2[2])));
      MR_hl_field(0, InlineWarningSpec_53, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(0, InlineWarningSpec_53, 3) = ((MR_Box) (Context_25));
      MR_hl_field(0, InlineWarningSpec_53, 4) = ((MR_Box) (InlineWarningPieces_51));
    }
    {
      STATE_VARIABLE_WarnSpecs_1_164 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_WarnSpecs_1_164, 0) = ((MR_Box) (InlineWarningSpec_53));
      MR_hl_field(1, STATE_VARIABLE_WarnSpecs_1_164, 1) = ((MR_Box) (STATE_VARIABLE_WarnSpecs_0_79));
    }
  }
  else
    STATE_VARIABLE_WarnSpecs_1_164 = STATE_VARIABLE_WarnSpecs_0_79;
  succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo0_37);
  if (succeeded)
  {
    MR_Integer UserArityInt_54 = (MR_Integer) (UserArity_39);
    MR_Word SNA_55;
    MR_Word Pieces_56;
    MR_Word Spec_57;
    MR_Word Var_165;
    MR_Word Var_168;
    MR_Word Var_169;
    MR_Word Var_174;
    MR_Word Var_175;
    MR_Word Var_180;
    MR_Word Var_181;
    MR_Word Var_184;
    MR_Word Var_185;
    MR_Word Var_190;
    MR_Word Var_191;
    MR_Word Var_192;
    MR_Word Var_193;

    {
      SNA_55 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SNA_55, 0) = ((MR_Box) (PredSymName_42));
      MR_hl_field(0, SNA_55, 1) = ((MR_Box) (UserArityInt_54));
    }
    {
      Var_169 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_169, 0) = ((MR_Box) ((MR_Unsigned) 36U));
      MR_hl_field(3, Var_169, 1) = ((MR_Box) (TabledMethodStr_45));
    }
    {
      Var_168 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_168, 0) = ((MR_Box) (Var_169));
      MR_hl_field(1, Var_168, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[3])));
    }
    {
      Var_165 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_165, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[47])));
      MR_hl_field(1, Var_165, 1) = ((MR_Box) (Var_168));
    }
    Var_175 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[49])));
    {
      Var_185 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_185, 0) = ((MR_Box) ((MR_Unsigned) 31U));
      MR_hl_field(3, Var_185, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_41));
    }
    {
      Var_184 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_184, 0) = ((MR_Box) (Var_185));
      MR_hl_field(1, Var_184, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[52])));
    }
    {
      Var_181 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_181, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[50])));
      MR_hl_field(1, Var_181, 1) = ((MR_Box) (Var_184));
    }
    {
      Var_193 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_193, 0) = ((MR_Box) ((MR_Unsigned) 14U));
      MR_hl_field(3, Var_193, 1) = ((MR_Box) (SNA_55));
    }
    {
      Var_192 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_192, 0) = ((MR_Box) (Var_193));
      MR_hl_field(1, Var_192, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[54])));
    }
    Var_191 = parse_tree__error_spec__color_as_subject_1_f_0(Var_192);
    Var_190 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_191, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[12])));
    Var_180 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_181, Var_190);
    Var_174 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_175, Var_180);
    Pieces_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_165, Var_174);
    {
      Spec_57 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_57, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_tabling.module_add_pragma_tabled_for_pred\'/18"));
      MR_hl_field(0, Spec_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_57, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(0, Spec_57, 3) = ((MR_Box) (Context_25));
      MR_hl_field(0, Spec_57, 4) = ((MR_Box) (Pieces_56));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_ErrSpecs_78 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_57));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_77));
    }
    *STATE_VARIABLE_WarnSpecs_80 = STATE_VARIABLE_WarnSpecs_1_164;
    *STATE_VARIABLE_QualInfo_76 = STATE_VARIABLE_QualInfo_0_75;
    *STATE_VARIABLE_ModuleInfo_74 = STATE_VARIABLE_ModuleInfo_0_73;
  }
  else
  {
    MR_Word NeedsStrat_58;
    MR_Word ProcTable0_61;
    MR_Word STATE_VARIABLE_ModuleInfo_1_205;

    NeedsStrat_58 = hlds__make_hlds__add_pragma_tabling__tabled_eval_method_needs_stratification_1_f_0(TabledMethod_36);
    switch (NeedsStrat_58) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_ModuleInfo_1_205 = STATE_VARIABLE_ModuleInfo_0_73;
        break;
      case (MR_Integer) 1:
        {
          MR_Word StratPredIds0_59;
          MR_Word StratPredIds_60;

          hlds__hlds_module__module_info_get_must_be_stratified_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_73, &StratPredIds0_59);
          mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_28)), StratPredIds0_59, &StratPredIds_60);
          hlds__hlds_module__module_info_set_must_be_stratified_preds_3_p_0(StratPredIds_60, STATE_VARIABLE_ModuleInfo_0_73, &STATE_VARIABLE_ModuleInfo_1_205);
        }
        break;
    }
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_37, &ProcTable0_61);
    if ((MaybeModes_40 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ExistingProcs_67;

      mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_61, &ExistingProcs_67);
      if ((ExistingProcs_67 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_249;
        MR_Word Var_252;
        MR_Word Var_253;
        MR_Word Var_254;
        MR_Word Var_257;
        MR_Word Var_260;
        MR_Word Var_261;
        MR_Word Var_263;
        MR_Word Var_264;
        MR_Word Var_265;
        MR_Word Var_266;
        MR_Word Var_271;
        MR_Word Var_276;
        MR_Word Var_277;
        MR_Integer UserArityInt_306 = (MR_Integer) (UserArity_39);
        MR_Word SNA_307;
        MR_Word Pieces_308;
        MR_Word Spec_309;

        {
          SNA_307 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, SNA_307, 0) = ((MR_Box) (PredSymName_42));
          MR_hl_field(0, SNA_307, 1) = ((MR_Box) (UserArityInt_306));
        }
        {
          Var_253 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_253, 0) = ((MR_Box) ((MR_Unsigned) 36U));
          MR_hl_field(3, Var_253, 1) = ((MR_Box) (TabledMethodStr_45));
        }
        {
          Var_261 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_261, 0) = ((MR_Box) ((MR_Unsigned) 31U));
          MR_hl_field(3, Var_261, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_41));
        }
        {
          Var_260 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_260, 0) = ((MR_Box) (Var_261));
          MR_hl_field(1, Var_260, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_257 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_257, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[55])));
          MR_hl_field(1, Var_257, 1) = ((MR_Box) (Var_260));
        }
        {
          Var_254 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_254, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[2])));
          MR_hl_field(1, Var_254, 1) = ((MR_Box) (Var_257));
        }
        {
          Var_252 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_252, 0) = ((MR_Box) (Var_253));
          MR_hl_field(1, Var_252, 1) = ((MR_Box) (Var_254));
        }
        {
          Var_249 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_249, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[4])));
          MR_hl_field(1, Var_249, 1) = ((MR_Box) (Var_252));
        }
        {
          Var_266 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_266, 0) = ((MR_Box) ((MR_Unsigned) 14U));
          MR_hl_field(3, Var_266, 1) = ((MR_Box) (SNA_307));
        }
        {
          Var_265 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_265, 0) = ((MR_Box) (Var_266));
          MR_hl_field(1, Var_265, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[11])));
        }
        Var_264 = parse_tree__error_spec__color_as_subject_1_f_0(Var_265);
        Var_277 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[59])));
        Var_276 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_277, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[12])));
        Var_271 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[57])), Var_276);
        Var_263 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_264, Var_271);
        Pieces_308 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_249, Var_263);
        {
          Spec_309 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_309, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_tabling.module_add_pragma_tabled_for_pred\'/18"));
          MR_hl_field(0, Spec_309, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_309, 2) = ((MR_Box) ((MR_Unsigned) 48U));
          MR_hl_field(0, Spec_309, 3) = ((MR_Box) (Context_25));
          MR_hl_field(0, Spec_309, 4) = ((MR_Box) (Pieces_308));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_ErrSpecs_78 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_309));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_77));
        }
        *STATE_VARIABLE_ModuleInfo_74 = STATE_VARIABLE_ModuleInfo_1_205;
        *STATE_VARIABLE_QualInfo_76 = STATE_VARIABLE_QualInfo_0_75;
        *STATE_VARIABLE_WarnSpecs_80 = STATE_VARIABLE_WarnSpecs_1_164;
      }
      else
      {
        MR_Word ExistingProcsTail_69 = ((MR_Word) ((MR_hl_field(1, ExistingProcs_67, 1))));
        MR_Word SingleProc_70;
        MR_Word STATE_VARIABLE_ModuleInfo_4_289;
        MR_Word ProcTable_310;
        MR_Word PredInfo_311;

        if ((ExistingProcsTail_69 == (MR_Word) ((MR_Unsigned) 0U)))
          SingleProc_70 = (MR_Integer) 1;
        else
          SingleProc_70 = (MR_Integer) 0;
        hlds__make_hlds__add_pragma_tabling__set_eval_method_create_aux_preds_list_23_p_0(ProgressStream_19, PredInfo0_37, PredOrFunc_41, PredModuleName_22, PredName_23, UserArity_39, ExistingProcs_67, SingleProc_70, Context_25, TabledMethod_36, MaybeAttributes_24, ItemMercuryStatus_26, PredStatus_27, ProcTable0_61, &ProcTable_310, STATE_VARIABLE_ModuleInfo_1_205, &STATE_VARIABLE_ModuleInfo_4_289, STATE_VARIABLE_QualInfo_0_75, STATE_VARIABLE_QualInfo_76, STATE_VARIABLE_ErrSpecs_0_77, STATE_VARIABLE_ErrSpecs_78, STATE_VARIABLE_WarnSpecs_1_164, STATE_VARIABLE_WarnSpecs_80);
        hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_310, PredInfo0_37, &PredInfo_311);
        hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_28, PredInfo_311, STATE_VARIABLE_ModuleInfo_4_289, STATE_VARIABLE_ModuleInfo_74);
      }
    }
    else
    {
      MR_Word Modes_62 = ((MR_Word) ((MR_hl_field(1, MaybeModes_40, 0))));
      MR_Integer ProcId_63;
      MR_Word ProcInfo0_64;

      succeeded = hlds__hlds_code_util__get_procedure_matching_argmodes_5_p_0(STATE_VARIABLE_ModuleInfo_1_205, ProcTable0_61, Modes_62, &ProcId_63, &ProcInfo0_64);
      if (succeeded)
      {
        MR_Word ProcTable_65;
        MR_Word PredInfo_66;
        MR_Word STATE_VARIABLE_ModuleInfo_2_207;

        hlds__make_hlds__add_pragma_tabling__set_eval_method_create_aux_preds_24_p_0(ProgressStream_19, PredInfo0_37, PredOrFunc_41, PredModuleName_22, PredName_23, UserArity_39, ProcId_63, ProcInfo0_64, (MR_Integer) 1, Context_25, TabledMethod_36, MaybeAttributes_24, ItemMercuryStatus_26, PredStatus_27, ProcTable0_61, &ProcTable_65, STATE_VARIABLE_ModuleInfo_1_205, &STATE_VARIABLE_ModuleInfo_2_207, STATE_VARIABLE_QualInfo_0_75, STATE_VARIABLE_QualInfo_76, STATE_VARIABLE_ErrSpecs_0_77, STATE_VARIABLE_ErrSpecs_78, STATE_VARIABLE_WarnSpecs_1_164, STATE_VARIABLE_WarnSpecs_80);
        hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_65, PredInfo0_37, &PredInfo_66);
        hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_28, PredInfo_66, STATE_VARIABLE_ModuleInfo_2_207, STATE_VARIABLE_ModuleInfo_74);
      }
      else
      {
        MR_Word Var_212;
        MR_Word Var_215;
        MR_Word Var_216;
        MR_Word Var_221;
        MR_Word Var_222;
        MR_Word Var_227;
        MR_Word Var_228;
        MR_Word Var_231;
        MR_Word Var_232;
        MR_Word Var_234;
        MR_Word Var_235;
        MR_Word Var_236;
        MR_Word Var_237;
        MR_Integer UserArityInt_294 = (MR_Integer) (UserArity_39);
        MR_Word SNA_295;
        MR_Word Pieces_296;
        MR_Word Spec_297;

        {
          SNA_295 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, SNA_295, 0) = ((MR_Box) (PredSymName_42));
          MR_hl_field(0, SNA_295, 1) = ((MR_Box) (UserArityInt_294));
        }
        {
          Var_216 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_216, 0) = ((MR_Box) ((MR_Unsigned) 36U));
          MR_hl_field(3, Var_216, 1) = ((MR_Box) (TabledMethodStr_45));
        }
        {
          Var_215 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_215, 0) = ((MR_Box) (Var_216));
          MR_hl_field(1, Var_215, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[61])));
        }
        {
          Var_212 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_212, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[4])));
          MR_hl_field(1, Var_212, 1) = ((MR_Box) (Var_215));
        }
        Var_222 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[63])));
        {
          Var_232 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_232, 0) = ((MR_Box) ((MR_Unsigned) 31U));
          MR_hl_field(3, Var_232, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_41));
        }
        {
          Var_231 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_231, 0) = ((MR_Box) (Var_232));
          MR_hl_field(1, Var_231, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_228 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_228, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[64])));
          MR_hl_field(1, Var_228, 1) = ((MR_Box) (Var_231));
        }
        {
          Var_237 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_237, 0) = ((MR_Box) ((MR_Unsigned) 14U));
          MR_hl_field(3, Var_237, 1) = ((MR_Box) (SNA_295));
        }
        {
          Var_236 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_236, 0) = ((MR_Box) (Var_237));
          MR_hl_field(1, Var_236, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[54])));
        }
        Var_235 = parse_tree__error_spec__color_as_subject_1_f_0(Var_236);
        Var_234 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_235, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[12])));
        Var_227 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_228, Var_234);
        Var_221 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_222, Var_227);
        Pieces_296 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_212, Var_221);
        {
          Spec_297 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_297, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_tabling.module_add_pragma_tabled_for_pred\'/18"));
          MR_hl_field(0, Spec_297, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_297, 2) = ((MR_Box) ((MR_Unsigned) 48U));
          MR_hl_field(0, Spec_297, 3) = ((MR_Box) (Context_25));
          MR_hl_field(0, Spec_297, 4) = ((MR_Box) (Pieces_296));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_ErrSpecs_78 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_297));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_77));
        }
        *STATE_VARIABLE_WarnSpecs_80 = STATE_VARIABLE_WarnSpecs_1_164;
        *STATE_VARIABLE_QualInfo_76 = STATE_VARIABLE_QualInfo_0_75;
        *STATE_VARIABLE_ModuleInfo_74 = STATE_VARIABLE_ModuleInfo_1_205;
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_tabling__set_eval_method_create_aux_preds_list_23_p_0(
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
  MR_Word STATE_VARIABLE_ErrSpecs_0_20,
  MR_Word * STATE_VARIABLE_ErrSpecs_21,
  MR_Word STATE_VARIABLE_WarnSpecs_0_22,
  MR_Word * STATE_VARIABLE_WarnSpecs_23)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__7_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_WarnSpecs_23 = STATE_VARIABLE_WarnSpecs_0_22;
      *STATE_VARIABLE_ErrSpecs_21 = STATE_VARIABLE_ErrSpecs_0_20;
      *STATE_VARIABLE_QualInfo_19 = STATE_VARIABLE_QualInfo_0_18;
      *STATE_VARIABLE_ModuleInfo_17 = STATE_VARIABLE_ModuleInfo_0_16;
      *STATE_VARIABLE_ProcTable_15 = STATE_VARIABLE_ProcTable_0_14;
    }
    else
    {
      MR_Integer ProcId_57;
      MR_Word ProcInfo0_58;
      MR_Word ProcIdsInfos_59 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, 1))));
      MR_Word Var_81 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, 0))));
      MR_Word STATE_VARIABLE_ProcTable_1_82;
      MR_Word STATE_VARIABLE_ModuleInfo_1_83;
      MR_Word STATE_VARIABLE_QualInfo_1_84;
      MR_Word STATE_VARIABLE_ErrSpecs_1_85;
      MR_Word STATE_VARIABLE_WarnSpecs_1_86;
      MR_Word next_value_of_HeadVar__7_7;
      MR_Word next_value_of_STATE_VARIABLE_ProcTable_0_14;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_16;
      MR_Word next_value_of_STATE_VARIABLE_QualInfo_0_18;
      MR_Word next_value_of_STATE_VARIABLE_ErrSpecs_0_20;
      MR_Word next_value_of_STATE_VARIABLE_WarnSpecs_0_22;

      ProcId_57 = ((MR_Integer) ((MR_hl_field(0, Var_81, 0))));
      ProcInfo0_58 = ((MR_Word) ((MR_hl_field(0, Var_81, 1))));
      hlds__make_hlds__add_pragma_tabling__set_eval_method_create_aux_preds_24_p_0(ProgressStream_1, PredInfo_2, PredOrFunc_3, PredModuleName_4, PredName_5, UserArity_6, ProcId_57, ProcInfo0_58, SingleProc_8, Context_9, TabledMethod_10, MaybeAttributes_11, ItemMercuryStatus_12, PredStatus_13, STATE_VARIABLE_ProcTable_0_14, &STATE_VARIABLE_ProcTable_1_82, STATE_VARIABLE_ModuleInfo_0_16, &STATE_VARIABLE_ModuleInfo_1_83, STATE_VARIABLE_QualInfo_0_18, &STATE_VARIABLE_QualInfo_1_84, STATE_VARIABLE_ErrSpecs_0_20, &STATE_VARIABLE_ErrSpecs_1_85, STATE_VARIABLE_WarnSpecs_0_22, &STATE_VARIABLE_WarnSpecs_1_86);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__7_7 = ProcIdsInfos_59;
      next_value_of_STATE_VARIABLE_ProcTable_0_14 = STATE_VARIABLE_ProcTable_1_82;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_16 = STATE_VARIABLE_ModuleInfo_1_83;
      next_value_of_STATE_VARIABLE_QualInfo_0_18 = STATE_VARIABLE_QualInfo_1_84;
      next_value_of_STATE_VARIABLE_ErrSpecs_0_20 = STATE_VARIABLE_ErrSpecs_1_85;
      next_value_of_STATE_VARIABLE_WarnSpecs_0_22 = STATE_VARIABLE_WarnSpecs_1_86;
      HeadVar__7_7 = next_value_of_HeadVar__7_7;
      STATE_VARIABLE_ProcTable_0_14 = next_value_of_STATE_VARIABLE_ProcTable_0_14;
      STATE_VARIABLE_ModuleInfo_0_16 = next_value_of_STATE_VARIABLE_ModuleInfo_0_16;
      STATE_VARIABLE_QualInfo_0_18 = next_value_of_STATE_VARIABLE_QualInfo_0_18;
      STATE_VARIABLE_ErrSpecs_0_20 = next_value_of_STATE_VARIABLE_ErrSpecs_0_20;
      STATE_VARIABLE_WarnSpecs_0_22 = next_value_of_STATE_VARIABLE_WarnSpecs_0_22;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_tabling__set_eval_method_create_aux_preds_24_p_0(
  MR_Word ProgressStream_25,
  MR_Word PredInfo_26,
  MR_Word PredOrFunc_27,
  MR_Word PredModuleName_28,
  MR_String PredName_29,
  MR_Word UserArity_30,
  MR_Integer ProcId_31,
  MR_Word ProcInfo0_32,
  MR_Word SingleProc_33,
  MR_Word Context_34,
  MR_Word TabledMethod_35,
  MR_Word MaybeAttributes_36,
  MR_Word ItemMercuryStatus_37,
  MR_Word PredStatus_38,
  MR_Word STATE_VARIABLE_ProcTable_0_72,
  MR_Word * STATE_VARIABLE_ProcTable_73,
  MR_Word STATE_VARIABLE_ModuleInfo_0_74,
  MR_Word * STATE_VARIABLE_ModuleInfo_75,
  MR_Word STATE_VARIABLE_QualInfo_0_76,
  MR_Word * STATE_VARIABLE_QualInfo_77,
  MR_Word STATE_VARIABLE_ErrSpecs_0_78,
  MR_Word * STATE_VARIABLE_ErrSpecs_79,
  MR_Word STATE_VARIABLE_WarnSpecs_0_80,
  MR_Word * STATE_VARIABLE_WarnSpecs_81)
{
  MR_bool succeeded;
  MR_Word OldEvalMethod_44;
  MR_Word PredSymName_45;
  MR_Word PFSymNameArity_46;

  hlds__hlds_pred__proc_info_get_eval_method_2_p_0(ProcInfo0_32, &OldEvalMethod_44);
  {
    PredSymName_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, PredSymName_45, 0) = ((MR_Box) (PredModuleName_28));
    MR_hl_field(1, PredSymName_45, 1) = ((MR_Box) (PredName_29));
  }
  {
    PFSymNameArity_46 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PFSymNameArity_46, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_27));
    MR_hl_field(0, PFSymNameArity_46, 1) = ((MR_Box) (PredSymName_45));
    MR_hl_field(0, PFSymNameArity_46, 2) = ((MR_Box) (UserArity_30));
  }
  if ((OldEvalMethod_44 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word MaybeDeclaredArgModes_47;

    hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0(ProcInfo0_32, &MaybeDeclaredArgModes_47);
    if ((MaybeDeclaredArgModes_47 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String TabledMethodStr_48;
      MR_Integer UserArityInt_49;
      MR_Word SNA_50;
      MR_Word Pieces_51;
      MR_Word Spec_52;
      MR_Word Var_82;
      MR_Word Var_85;
      MR_Word Var_86;
      MR_Word Var_87;
      MR_Word Var_90;
      MR_Word Var_91;
      MR_Word Var_93;
      MR_Word Var_94;
      MR_Word Var_95;
      MR_Word Var_96;
      MR_Word Var_101;
      MR_Word Var_106;
      MR_Word Var_107;

      TabledMethodStr_48 = parse_tree__parse_tree_out_misc__tabled_eval_method_to_pragma_name_1_f_0(TabledMethod_35);
      UserArityInt_49 = (MR_Integer) (UserArity_30);
      {
        SNA_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, SNA_50, 0) = ((MR_Box) (PredSymName_45));
        MR_hl_field(0, SNA_50, 1) = ((MR_Box) (UserArityInt_49));
      }
      {
        Var_86 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_86, 0) = ((MR_Box) ((MR_Unsigned) 36U));
        MR_hl_field(3, Var_86, 1) = ((MR_Box) (TabledMethodStr_48));
      }
      {
        Var_91 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_91, 0) = ((MR_Box) ((MR_Unsigned) 31U));
        MR_hl_field(3, Var_91, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_27));
      }
      {
        Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_90, 0) = ((MR_Box) (Var_91));
        MR_hl_field(1, Var_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_87, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[60])));
        MR_hl_field(1, Var_87, 1) = ((MR_Box) (Var_90));
      }
      {
        Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_85, 0) = ((MR_Box) (Var_86));
        MR_hl_field(1, Var_85, 1) = ((MR_Box) (Var_87));
      }
      {
        Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_82, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[4])));
        MR_hl_field(1, Var_82, 1) = ((MR_Box) (Var_85));
      }
      {
        Var_96 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_96, 0) = ((MR_Box) ((MR_Unsigned) 14U));
        MR_hl_field(3, Var_96, 1) = ((MR_Box) (SNA_50));
      }
      {
        Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_95, 0) = ((MR_Box) (Var_96));
        MR_hl_field(1, Var_95, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[11])));
      }
      Var_94 = parse_tree__error_spec__color_as_subject_1_f_0(Var_95);
      Var_107 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[59])));
      Var_106 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_107, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[12])));
      Var_101 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[57])), Var_106);
      Var_93 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_94, Var_101);
      Pieces_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_82, Var_93);
      {
        Spec_52 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_52, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_tabling.set_eval_method_create_aux_preds\'/24"));
        MR_hl_field(0, Spec_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_52, 2) = ((MR_Box) ((MR_Unsigned) 48U));
        MR_hl_field(0, Spec_52, 3) = ((MR_Box) (Context_34));
        MR_hl_field(0, Spec_52, 4) = ((MR_Box) (Pieces_51));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_ErrSpecs_79 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_52));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_78));
      }
      *STATE_VARIABLE_ProcTable_73 = STATE_VARIABLE_ProcTable_0_72;
      *STATE_VARIABLE_ModuleInfo_75 = STATE_VARIABLE_ModuleInfo_0_74;
      *STATE_VARIABLE_QualInfo_77 = STATE_VARIABLE_QualInfo_0_76;
      *STATE_VARIABLE_WarnSpecs_81 = STATE_VARIABLE_WarnSpecs_0_80;
    }
    else
    {
      MR_Word DeclaredArgModes_53 = ((MR_Word) ((MR_hl_field(1, MaybeDeclaredArgModes_47, 0))));
      MR_Word ArgTypes_54;
      MR_Word DeclaredArgTypesModes_55;
      MR_Word Statistics_58;
      MR_Word AllowReset_59;
      MR_Word ArgErrorPieces_62;
      MR_Word EvalMethod_65;
      MR_Word ProcInfo1_66;
      MR_Word ProcInfo_67;
      MR_Word Globals_68;
      MR_Word IsTablingSupported_69;
      MR_Word STATE_VARIABLE_ErrSpecs_2_138;
      MR_Word STATE_VARIABLE_ModuleInfo_1_140;
      MR_Word STATE_VARIABLE_QualInfo_1_141;
      MR_Word STATE_VARIABLE_ErrSpecs_3_142;
      MR_Word STATE_VARIABLE_WarnSpecs_1_143;

      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_26, &ArgTypes_54);
      mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgTypes_54, DeclaredArgModes_53, &DeclaredArgTypesModes_55);
      if ((MaybeAttributes_36 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        Statistics_58 = (MR_Integer) 0;
        AllowReset_59 = (MR_Integer) 0;
        hlds__make_hlds__add_pragma_tabling__check_pred_args_against_tabling_4_p_0(STATE_VARIABLE_ModuleInfo_0_74, (MR_Integer) 1, DeclaredArgTypesModes_55, &ArgErrorPieces_62);
      }
      else
      {
        MR_Word Attributes_56 = ((MR_Word) ((MR_hl_field(1, MaybeAttributes_36, 0))));
        MR_Word Strictness_257 = ((MR_Word) ((MR_hl_field(0, Attributes_56, 0))));

        Statistics_58 = ((((MR_Unsigned) ((MR_hl_field(0, Attributes_56, 2))) >> 2)) & (MR_Integer) 1);
        AllowReset_59 = ((((MR_Unsigned) ((MR_hl_field(0, Attributes_56, 2))) >> 1)) & (MR_Integer) 1);
        switch (MR_tag((MR_Word) Strictness_257)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            hlds__make_hlds__add_pragma_tabling__check_pred_args_against_tabling_4_p_0(STATE_VARIABLE_ModuleInfo_0_74, (MR_Integer) 1, DeclaredArgTypesModes_55, &ArgErrorPieces_62);
            break;
          case (MR_Integer) 1:
            {
              MR_Word MaybeArgMethods_60 = ((MR_Word) ((MR_hl_field(1, Strictness_257, 0))));

              hlds__make_hlds__add_pragma_tabling__check_pred_args_against_tabling_methods_5_p_0(STATE_VARIABLE_ModuleInfo_0_74, (MR_Integer) 1, DeclaredArgTypesModes_55, MaybeArgMethods_60, &ArgErrorPieces_62);
            }
            break;
        }
      }
      if ((ArgErrorPieces_62 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_ErrSpecs_2_138 = STATE_VARIABLE_ErrSpecs_0_78;
      else
      {
        MR_Word Var_123;
        MR_Word Var_124;
        MR_Word Var_125;
        MR_Word Var_128;
        MR_Word Var_129;
        MR_Word Var_130;
        MR_Word Var_133;
        MR_String TabledMethodStr_221;
        MR_Word Pieces_222;
        MR_Word Spec_223;

        TabledMethodStr_221 = parse_tree__parse_tree_out_misc__tabled_eval_method_to_pragma_name_1_f_0(TabledMethod_35);
        {
          Var_124 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_124, 0) = ((MR_Box) ((MR_Unsigned) 36U));
          MR_hl_field(3, Var_124, 1) = ((MR_Box) (TabledMethodStr_221));
        }
        {
          Var_129 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_129, 0) = ((MR_Box) ((MR_Unsigned) 18U));
          MR_hl_field(3, Var_129, 1) = ((MR_Box) (PFSymNameArity_46));
        }
        {
          Var_133 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_133, 0) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(1, Var_133, 1) = ((MR_Box) (ArgErrorPieces_62));
        }
        {
          Var_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_130, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[66])));
          MR_hl_field(1, Var_130, 1) = ((MR_Box) (Var_133));
        }
        {
          Var_128 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_128, 0) = ((MR_Box) (Var_129));
          MR_hl_field(1, Var_128, 1) = ((MR_Box) (Var_130));
        }
        {
          Var_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_125, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[60])));
          MR_hl_field(1, Var_125, 1) = ((MR_Box) (Var_128));
        }
        {
          Var_123 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_123, 0) = ((MR_Box) (Var_124));
          MR_hl_field(1, Var_123, 1) = ((MR_Box) (Var_125));
        }
        {
          Pieces_222 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_222, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[65])));
          MR_hl_field(1, Pieces_222, 1) = ((MR_Box) (Var_123));
        }
        {
          Spec_223 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_223, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_tabling.set_eval_method_create_aux_preds\'/24"));
          MR_hl_field(0, Spec_223, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_223, 2) = ((MR_Box) ((MR_Unsigned) 48U));
          MR_hl_field(0, Spec_223, 3) = ((MR_Box) (Context_34));
          MR_hl_field(0, Spec_223, 4) = ((MR_Box) (Pieces_222));
        }
        {
          STATE_VARIABLE_ErrSpecs_2_138 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_ErrSpecs_2_138, 0) = ((MR_Box) (Spec_223));
          MR_hl_field(1, STATE_VARIABLE_ErrSpecs_2_138, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_78));
        }
      }
      {
        EvalMethod_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, EvalMethod_65, 0) = ((MR_Box) (TabledMethod_35));
      }
      hlds__hlds_pred__proc_info_set_eval_method_3_p_0(EvalMethod_65, ProcInfo0_32, &ProcInfo1_66);
      hlds__hlds_pred__proc_info_set_table_attributes_3_p_0(MaybeAttributes_36, ProcInfo1_66, &ProcInfo_67);
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_31)), ((MR_Box) (ProcInfo_67)), STATE_VARIABLE_ProcTable_0_72, STATE_VARIABLE_ProcTable_73);
      hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_74, &Globals_68);
      libs__globals__current_grade_supports_tabling_3_p_0(Globals_68, TabledMethod_35, &IsTablingSupported_69);
      switch (Statistics_58) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            STATE_VARIABLE_ModuleInfo_1_140 = STATE_VARIABLE_ModuleInfo_0_74;
            STATE_VARIABLE_QualInfo_1_141 = STATE_VARIABLE_QualInfo_0_76;
            STATE_VARIABLE_ErrSpecs_3_142 = STATE_VARIABLE_ErrSpecs_2_138;
            STATE_VARIABLE_WarnSpecs_1_143 = STATE_VARIABLE_WarnSpecs_0_80;
          }
          break;
        case (MR_Integer) 1:
          hlds__make_hlds__add_pragma_tabling__create_tabling_statistics_pred_19_p_0(ProgressStream_25, PredOrFunc_27, PredModuleName_28, PredName_29, UserArity_30, ProcId_31, SingleProc_33, Context_34, IsTablingSupported_69, ItemMercuryStatus_37, PredStatus_38, STATE_VARIABLE_ModuleInfo_0_74, &STATE_VARIABLE_ModuleInfo_1_140, STATE_VARIABLE_QualInfo_0_76, &STATE_VARIABLE_QualInfo_1_141, STATE_VARIABLE_ErrSpecs_2_138, &STATE_VARIABLE_ErrSpecs_3_142, STATE_VARIABLE_WarnSpecs_0_80, &STATE_VARIABLE_WarnSpecs_1_143);
          break;
      }
      switch (AllowReset_59) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          hlds__make_hlds__add_pragma_tabling__create_tabling_reset_pred_19_p_0(ProgressStream_25, PredOrFunc_27, PredModuleName_28, PredName_29, UserArity_30, ProcId_31, SingleProc_33, Context_34, IsTablingSupported_69, ItemMercuryStatus_37, PredStatus_38, STATE_VARIABLE_ModuleInfo_1_140, STATE_VARIABLE_ModuleInfo_75, STATE_VARIABLE_QualInfo_1_141, STATE_VARIABLE_QualInfo_77, STATE_VARIABLE_ErrSpecs_3_142, STATE_VARIABLE_ErrSpecs_79, STATE_VARIABLE_WarnSpecs_1_143, STATE_VARIABLE_WarnSpecs_81);
          break;
        case (MR_Integer) 0:
          {
            *STATE_VARIABLE_ModuleInfo_75 = STATE_VARIABLE_ModuleInfo_1_140;
            *STATE_VARIABLE_QualInfo_77 = STATE_VARIABLE_QualInfo_1_141;
            *STATE_VARIABLE_ErrSpecs_79 = STATE_VARIABLE_ErrSpecs_3_142;
            *STATE_VARIABLE_WarnSpecs_81 = STATE_VARIABLE_WarnSpecs_1_143;
          }
          break;
      }
    }
  }
  else
  {
    MR_Word OldTabledMethod_70 = ((MR_Word) ((MR_hl_field(1, OldEvalMethod_44, 0))));
    MR_String TabledMethodStr_230;
    MR_Integer UserArityInt_231;
    MR_Word SNA_232;
    MR_Word Pieces_233;
    MR_Word Spec_234;

    TabledMethodStr_230 = parse_tree__parse_tree_out_misc__tabled_eval_method_to_pragma_name_1_f_0(TabledMethod_35);
    UserArityInt_231 = (MR_Integer) (UserArity_30);
    {
      SNA_232 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SNA_232, 0) = ((MR_Box) (PredSymName_45));
      MR_hl_field(0, SNA_232, 1) = ((MR_Box) (UserArityInt_231));
    }
    succeeded = parse_tree__prog_data_pragma____Unify____tabled_eval_method_0_0(OldTabledMethod_70, TabledMethod_35);
    if (succeeded)
    {
      MR_Word Var_148;
      MR_Word Var_151;
      MR_Word Var_152;
      MR_Word Var_153;
      MR_Word Var_154;
      MR_Word Var_159;
      MR_Word Var_160;
      MR_Word Var_161;
      MR_Word Var_164;
      MR_Word Var_165;

      {
        Var_152 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_152, 0) = ((MR_Box) ((MR_Unsigned) 31U));
        MR_hl_field(3, Var_152, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_27));
      }
      {
        Var_154 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_154, 0) = ((MR_Box) ((MR_Unsigned) 14U));
        MR_hl_field(3, Var_154, 1) = ((MR_Box) (SNA_232));
      }
      {
        Var_153 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_153, 0) = ((MR_Box) (Var_154));
        MR_hl_field(1, Var_153, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[68])));
      }
      {
        Var_151 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_151, 0) = ((MR_Box) (Var_152));
        MR_hl_field(1, Var_151, 1) = ((MR_Box) (Var_153));
      }
      {
        Var_148 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_148, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[4])));
        MR_hl_field(1, Var_148, 1) = ((MR_Box) (Var_151));
      }
      {
        Var_165 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_165, 0) = ((MR_Box) (TabledMethodStr_230));
      }
      {
        Var_164 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_164, 0) = ((MR_Box) (Var_165));
        MR_hl_field(1, Var_164, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[71])));
      }
      {
        Var_161 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_161, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[69])));
        MR_hl_field(1, Var_161, 1) = ((MR_Box) (Var_164));
      }
      Var_160 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_161);
      Var_159 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_160, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[73])));
      Pieces_233 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_148, Var_159);
    }
    else
    {
      MR_String OldTabledMethodStr_71;
      MR_Word Var_176;
      MR_Word Var_179;
      MR_Word Var_180;
      MR_Word Var_181;
      MR_Word Var_182;
      MR_Word Var_187;
      MR_Word Var_188;
      MR_Word Var_196;
      MR_Word Var_197;
      MR_Word Var_198;
      MR_Word Var_199;
      MR_Word Var_201;
      MR_Word Var_206;
      MR_Word Var_207;
      MR_Word Var_208;
      MR_Word Var_209;

      OldTabledMethodStr_71 = parse_tree__parse_tree_out_misc__tabled_eval_method_to_pragma_name_1_f_0(OldTabledMethod_70);
      {
        Var_180 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_180, 0) = ((MR_Box) ((MR_Unsigned) 31U));
        MR_hl_field(3, Var_180, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_27));
      }
      {
        Var_182 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_182, 0) = ((MR_Box) ((MR_Unsigned) 14U));
        MR_hl_field(3, Var_182, 1) = ((MR_Box) (SNA_232));
      }
      {
        Var_181 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_181, 0) = ((MR_Box) (Var_182));
        MR_hl_field(1, Var_181, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[68])));
      }
      {
        Var_179 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_179, 0) = ((MR_Box) (Var_180));
        MR_hl_field(1, Var_179, 1) = ((MR_Box) (Var_181));
      }
      {
        Var_176 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_176, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[4])));
        MR_hl_field(1, Var_176, 1) = ((MR_Box) (Var_179));
      }
      Var_188 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[77])));
      {
        Var_199 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_199, 0) = ((MR_Box) (OldTabledMethodStr_71));
      }
      {
        Var_198 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_198, 0) = ((MR_Box) (Var_199));
        MR_hl_field(1, Var_198, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_197 = parse_tree__error_spec__color_as_inconsistent_1_f_0(Var_198);
      {
        Var_209 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_209, 0) = ((MR_Box) (TabledMethodStr_230));
      }
      {
        Var_208 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_208, 0) = ((MR_Box) (Var_209));
        MR_hl_field(1, Var_208, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[54])));
      }
      Var_207 = parse_tree__error_spec__color_as_inconsistent_1_f_0(Var_208);
      Var_206 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_207, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[12])));
      Var_201 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[79])), Var_206);
      Var_196 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_197, Var_201);
      Var_187 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_188, Var_196);
      Pieces_233 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_176, Var_187);
    }
    {
      Spec_234 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_234, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_tabling.set_eval_method_create_aux_preds\'/24"));
      MR_hl_field(0, Spec_234, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_234, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(0, Spec_234, 3) = ((MR_Box) (Context_34));
      MR_hl_field(0, Spec_234, 4) = ((MR_Box) (Pieces_233));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_ErrSpecs_79 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_234));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_78));
    }
    *STATE_VARIABLE_ProcTable_73 = STATE_VARIABLE_ProcTable_0_72;
    *STATE_VARIABLE_ModuleInfo_75 = STATE_VARIABLE_ModuleInfo_0_74;
    *STATE_VARIABLE_QualInfo_77 = STATE_VARIABLE_QualInfo_0_76;
    *STATE_VARIABLE_WarnSpecs_81 = STATE_VARIABLE_WarnSpecs_0_80;
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
      succeeded = hlds__mode_test__mode_is_fully_input_3_p_0(ModuleInfo_1, Type_9, Mode_10);
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
        succeeded = hlds__mode_test__mode_is_fully_output_3_p_0(ModuleInfo_1, Type_9, Mode_10);
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
            MR_hl_field(1, base, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[99])));
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
        *HeadVar__5_5 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[82]));
    else
    {
      MR_Word Var_131 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word Var_132 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

      if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__5_5 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[84]));
      else
      {
        MR_Word Type_30 = ((MR_Word) ((MR_hl_field(0, Var_132, 0))));
        MR_Word Mode_31 = ((MR_Word) ((MR_hl_field(0, Var_132, 1))));
        MR_Word MaybeArgMethod_33 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
        MR_Word MaybeArgMethods_34 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));

        succeeded = hlds__mode_test__mode_is_fully_input_3_p_0(ModuleInfo_1, Type_30, Mode_31);
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
              MR_hl_field(1, Var_45, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[88])));
            }
            {
              Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_42, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[85])));
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
            Var_68 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[94])));
            Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_68, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[12])));
            Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[90])), Var_67);
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
          succeeded = hlds__mode_test__mode_is_fully_output_3_p_0(ModuleInfo_1, Type_30, Mode_31);
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
                MR_hl_field(1, Var_82, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[88])));
              }
              {
                Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_79, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[85])));
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
              Var_105 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[97])));
              Var_104 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_105, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[12])));
              Var_99 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[90])), Var_104);
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
              MR_hl_field(1, base, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[99])));
            }
          }
        }
      }
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_tabling__create_tabling_reset_pred_19_p_0(
  MR_Word ProgressStream_20,
  MR_Word PredOrFunc_21,
  MR_Word PredModuleName_22,
  MR_String PredName_23,
  MR_Word UserArity_24,
  MR_Integer ProcId_25,
  MR_Word SingleProc_26,
  MR_Word Context_27,
  MR_Word IsTablingSupported_28,
  MR_Word ItemMercuryStatus_29,
  MR_Word PredStatus_30,
  MR_Word STATE_VARIABLE_ModuleInfo_0_66,
  MR_Word * STATE_VARIABLE_ModuleInfo_67,
  MR_Word STATE_VARIABLE_QualInfo_0_68,
  MR_Word * STATE_VARIABLE_QualInfo_69,
  MR_Word STATE_VARIABLE_ErrSpecs_0_70,
  MR_Word * STATE_VARIABLE_ErrSpecs_71,
  MR_Word STATE_VARIABLE_WarnSpecs_0_72,
  MR_Word * STATE_VARIABLE_WarnSpecs_73)
{
  MR_Word Transform_35;
  MR_String ResetPredName_36;
  MR_Word ResetPredSymName_37;
  MR_Word TypeAndModeArg1_38;
  MR_Word TypeAndModeArg2_39;
  MR_Word ArgTypesAndMaybeModes_40;
  MR_Word TypeVarSet_41;
  MR_Word InstVarSet_42;
  MR_Word PredSymName_45;
  MR_Word PredSpec_46;
  MR_Word Attrs_47;
  MR_Word MaybeAttrs_48;
  MR_Word PredDecl_49;
  MR_Word PredFormArity_51;
  MR_Word PFSymNameArity_52;
  MR_Word IO0_54;
  MR_Word IO_55;
  MR_Integer Var_75;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Word Var_78;
  MR_Word Var_79;
  MR_Word Var_80;
  MR_Word Var_81;
  MR_Word Var_85;
  MR_Word STATE_VARIABLE_ModuleInfo_1_95;
  MR_Word STATE_VARIABLE_ErrSpecs_1_96;
  MR_Word STATE_VARIABLE_VarSet_1_97;
  MR_Word STATE_VARIABLE_VarSet_2_99;
  MR_Word STATE_VARIABLE_VarSet_3_101;
  MR_Word _MaybePredProcId_50;

  Var_75 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_25);
  {
    Transform_35 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Transform_35, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_21));
    MR_hl_field(2, Transform_35, 1) = ((MR_Box) (UserArity_24));
    MR_hl_field(2, Transform_35, 2) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) (SingleProc_26)));
    MR_hl_field(2, Transform_35, 3) = ((MR_Box) (Var_75));
  }
  hlds__pred_name__make_transformed_pred_name_3_p_0(PredName_23, Transform_35, &ResetPredName_36);
  {
    ResetPredSymName_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ResetPredSymName_37, 0) = ((MR_Box) (PredModuleName_22));
    MR_hl_field(1, ResetPredSymName_37, 1) = ((MR_Box) (ResetPredName_36));
  }
  Var_76 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
  Var_77 = parse_tree__prog_mode__di_mode_0_f_0();
  {
    TypeAndModeArg1_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeAndModeArg1_38, 0) = ((MR_Box) (Var_76));
    MR_hl_field(0, TypeAndModeArg1_38, 1) = ((MR_Box) (Var_77));
  }
  Var_78 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
  Var_79 = parse_tree__prog_mode__uo_mode_0_f_0();
  {
    TypeAndModeArg2_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeAndModeArg2_39, 0) = ((MR_Box) (Var_78));
    MR_hl_field(0, TypeAndModeArg2_39, 1) = ((MR_Box) (Var_79));
  }
  {
    Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_81, 0) = ((MR_Box) (TypeAndModeArg2_39));
    MR_hl_field(1, Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_80, 0) = ((MR_Box) (TypeAndModeArg1_38));
    MR_hl_field(1, Var_80, 1) = ((MR_Box) (Var_81));
  }
  {
    ArgTypesAndMaybeModes_40 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, ArgTypesAndMaybeModes_40, 0) = ((MR_Box) (Var_80));
  }
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet_41);
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_42);
  {
    PredSymName_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, PredSymName_45, 0) = ((MR_Box) (PredModuleName_22));
    MR_hl_field(1, PredSymName_45, 1) = ((MR_Box) (PredName_23));
  }
  {
    PredSpec_46 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PredSpec_46, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_21));
    MR_hl_field(0, PredSpec_46, 1) = ((MR_Box) (PredSymName_45));
    MR_hl_field(0, PredSpec_46, 2) = ((MR_Box) (UserArity_24));
  }
  {
    Var_85 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_85, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_85, 1) = ((MR_Box) (PredSpec_46));
    MR_hl_field(3, Var_85, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  Attrs_47 = (MR_Word) (Var_85);
  {
    MaybeAttrs_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MaybeAttrs_48, 0) = ((MR_Box) (Attrs_47));
  }
  {
    PredDecl_49 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PredDecl_49, 0) = ((MR_Box) (ResetPredSymName_37));
    MR_hl_field(0, PredDecl_49, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(0, PredDecl_49, 2) = ((MR_Box) (ArgTypesAndMaybeModes_40));
    MR_hl_field(0, PredDecl_49, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, PredDecl_49, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, PredDecl_49, 5) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_2[3])));
    MR_hl_field(0, PredDecl_49, 6) = ((MR_Box) (MaybeAttrs_48));
    MR_hl_field(0, PredDecl_49, 7) = ((MR_Box) (TypeVarSet_41));
    MR_hl_field(0, PredDecl_49, 8) = ((MR_Box) (InstVarSet_42));
    MR_hl_field(0, PredDecl_49, 9) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, PredDecl_49, 10) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(0, PredDecl_49, 11) = ((MR_Box) (&hlds__make_hlds__add_pragma_tabling_scalar_common_1[80]));
    MR_hl_field(0, PredDecl_49, 12) = ((MR_Box) (Context_27));
    MR_hl_field(0, PredDecl_49, 13) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  hlds__make_hlds__add_pred__module_add_pred_decl_9_p_0(ItemMercuryStatus_29, PredStatus_30, (MR_Integer) 1, PredDecl_49, &_MaybePredProcId_50, STATE_VARIABLE_ModuleInfo_0_66, &STATE_VARIABLE_ModuleInfo_1_95, STATE_VARIABLE_ErrSpecs_0_70, &STATE_VARIABLE_ErrSpecs_1_96);
  parse_tree__prog_util__user_arity_pred_form_arity_3_p_0(PredOrFunc_21, UserArity_24, &PredFormArity_51);
  {
    PFSymNameArity_52 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PFSymNameArity_52, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_21));
    MR_hl_field(0, PFSymNameArity_52, 1) = ((MR_Box) (PredSymName_45));
    MR_hl_field(0, PFSymNameArity_52, 2) = ((MR_Box) (PredFormArity_51));
  }
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &STATE_VARIABLE_VarSet_1_97);
  mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "IO0", &IO0_54, STATE_VARIABLE_VarSet_1_97, &STATE_VARIABLE_VarSet_2_99);
  mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "IO", &IO_55, STATE_VARIABLE_VarSet_2_99, &STATE_VARIABLE_VarSet_3_101);
  switch (IsTablingSupported_28) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Args_62;
        MR_Word BodyExpr_63;
        MR_Word ResetClauseInfo_64;
        MR_Word Var_129;
        MR_Word Var_130;
        MR_Word Var_131;
        MR_Word Var_137;

        {
          Var_129 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_129, 0) = ((MR_Box) (IO0_54));
          MR_hl_field(1, Var_129, 1) = ((MR_Box) (Context_27));
        }
        {
          Var_131 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_131, 0) = ((MR_Box) (IO_55));
          MR_hl_field(1, Var_131, 1) = ((MR_Box) (Context_27));
        }
        {
          Var_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_130, 0) = ((MR_Box) (Var_131));
          MR_hl_field(1, Var_130, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Args_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Args_62, 0) = ((MR_Box) (Var_129));
          MR_hl_field(1, Args_62, 1) = ((MR_Box) (Var_130));
        }
        {
          BodyExpr_63 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, BodyExpr_63, 0) = ((MR_Box) (Context_27));
          MR_hl_field(0, BodyExpr_63, 1) = ((MR_Box) (Var_129));
          MR_hl_field(0, BodyExpr_63, 2) = ((MR_Box) (Var_131));
          MR_hl_field(0, BodyExpr_63, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        {
          Var_137 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_137, 0) = ((MR_Box) (BodyExpr_63));
          MR_hl_field(1, Var_137, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          ResetClauseInfo_64 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ResetClauseInfo_64, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(0, ResetClauseInfo_64, 1) = ((MR_Box) (ResetPredSymName_37));
          MR_hl_field(0, ResetClauseInfo_64, 2) = ((MR_Box) (Args_62));
          MR_hl_field(0, ResetClauseInfo_64, 3) = ((MR_Box) (STATE_VARIABLE_VarSet_3_101));
          MR_hl_field(0, ResetClauseInfo_64, 4) = ((MR_Box) (Var_137));
          MR_hl_field(0, ResetClauseInfo_64, 5) = ((MR_Box) (Context_27));
          MR_hl_field(0, ResetClauseInfo_64, 6) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        hlds__make_hlds__add_clause__module_add_clause_12_p_0(ProgressStream_20, PredStatus_30, (MR_Word) ((MR_Unsigned) 0U), ResetClauseInfo_64, STATE_VARIABLE_ModuleInfo_1_95, STATE_VARIABLE_ModuleInfo_67, STATE_VARIABLE_QualInfo_0_68, STATE_VARIABLE_QualInfo_69, STATE_VARIABLE_ErrSpecs_1_96, STATE_VARIABLE_ErrSpecs_71, STATE_VARIABLE_WarnSpecs_0_72, STATE_VARIABLE_WarnSpecs_73);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Arg1_56;
        MR_Word Arg2_57;
        MR_String GlobalVarName_58;
        MR_String ResetCode_59;
        MR_Word ResetImpl_60;
        MR_Word ResetFCInfo_61;
        MR_Word Var_103;
        MR_Word Var_106;
        MR_Word STATE_VARIABLE_Attrs_1_108;
        MR_Word STATE_VARIABLE_Attrs_2_111;
        MR_Word STATE_VARIABLE_Attrs_3_113;
        MR_Word STATE_VARIABLE_Attrs_4_115;
        MR_Word STATE_VARIABLE_Attrs_5_117;
        MR_Word Var_120;
        MR_Word Var_122;
        MR_Word Var_123;

        Var_103 = parse_tree__prog_mode__di_mode_0_f_0();
        {
          Arg1_56 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Arg1_56, 0) = ((MR_Box) (IO0_54));
          MR_hl_field(0, Arg1_56, 1) = ((MR_Box) ((MR_String) "_IO0"));
          MR_hl_field(0, Arg1_56, 2) = ((MR_Box) (Var_103));
          MR_hl_field(0, Arg1_56, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        }
        Var_106 = parse_tree__prog_mode__uo_mode_0_f_0();
        {
          Arg2_57 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Arg2_57, 0) = ((MR_Box) (IO_55));
          MR_hl_field(0, Arg2_57, 1) = ((MR_Box) ((MR_String) "_IO"));
          MR_hl_field(0, Arg2_57, 2) = ((MR_Box) (Var_106));
          MR_hl_field(0, Arg2_57, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        }
        STATE_VARIABLE_Attrs_1_108 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 0);
        parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_1_108, &STATE_VARIABLE_Attrs_2_111);
        parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_2_111, &STATE_VARIABLE_Attrs_3_113);
        parse_tree__prog_data_foreign__set_purity_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_3_113, &STATE_VARIABLE_Attrs_4_115);
        parse_tree__prog_data_foreign__set_may_duplicate_3_p_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_2[4])), STATE_VARIABLE_Attrs_4_115, &STATE_VARIABLE_Attrs_5_117);
        GlobalVarName_58 = hlds__make_hlds__add_pragma_tabling__table_info_c_global_var_name_3_f_0(STATE_VARIABLE_ModuleInfo_1_95, PFSymNameArity_52, ProcId_25);
        ResetCode_59 = mercury__string__f_43_43_2_f_0(GlobalVarName_58, (MR_String) ".MR_pt_tablenode.MR_integer = 0;");
        {
          Var_120 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_120, 0) = ((MR_Box) (Context_27));
        }
        {
          ResetImpl_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ResetImpl_60, 0) = ((MR_Box) (ResetCode_59));
          MR_hl_field(0, ResetImpl_60, 1) = ((MR_Box) (Var_120));
        }
        {
          Var_123 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_123, 0) = ((MR_Box) (Arg2_57));
          MR_hl_field(1, Var_123, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_122 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_122, 0) = ((MR_Box) (Arg1_56));
          MR_hl_field(1, Var_122, 1) = ((MR_Box) (Var_123));
        }
        {
          ResetFCInfo_61 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ResetFCInfo_61, 0) = ((MR_Box) (STATE_VARIABLE_Attrs_5_117));
          MR_hl_field(0, ResetFCInfo_61, 1) = ((MR_Box) (ResetPredSymName_37));
          MR_hl_field(0, ResetFCInfo_61, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(0, ResetFCInfo_61, 3) = ((MR_Box) (Var_122));
          MR_hl_field(0, ResetFCInfo_61, 4) = ((MR_Box) (STATE_VARIABLE_VarSet_3_101));
          MR_hl_field(0, ResetFCInfo_61, 5) = ((MR_Box) (InstVarSet_42));
          MR_hl_field(0, ResetFCInfo_61, 6) = ((MR_Box) (ResetImpl_60));
          MR_hl_field(0, ResetFCInfo_61, 7) = ((MR_Box) (Context_27));
          MR_hl_field(0, ResetFCInfo_61, 8) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        hlds__make_hlds__add_foreign_proc__add_foreign_proc_10_p_0(ProgressStream_20, ItemMercuryStatus_29, PredStatus_30, ResetFCInfo_61, STATE_VARIABLE_ModuleInfo_1_95, STATE_VARIABLE_ModuleInfo_67, STATE_VARIABLE_ErrSpecs_1_96, STATE_VARIABLE_ErrSpecs_71, STATE_VARIABLE_WarnSpecs_0_72, STATE_VARIABLE_WarnSpecs_73);
        *STATE_VARIABLE_QualInfo_69 = STATE_VARIABLE_QualInfo_0_68;
      }
      break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_tabling__create_tabling_statistics_pred_19_p_0(
  MR_Word ProgressStream_20,
  MR_Word PredOrFunc_21,
  MR_Word PredModuleName_22,
  MR_String PredName_23,
  MR_Word UserArity_24,
  MR_Integer ProcId_25,
  MR_Word SingleProc_26,
  MR_Word Context_27,
  MR_Word IsTablingSupported_28,
  MR_Word ItemMercuryStatus_29,
  MR_Word PredStatus_30,
  MR_Word STATE_VARIABLE_ModuleInfo_0_77,
  MR_Word * STATE_VARIABLE_ModuleInfo_78,
  MR_Word STATE_VARIABLE_QualInfo_0_79,
  MR_Word * STATE_VARIABLE_QualInfo_80,
  MR_Word STATE_VARIABLE_ErrSpecs_0_81,
  MR_Word * STATE_VARIABLE_ErrSpecs_82,
  MR_Word STATE_VARIABLE_WarnSpecs_0_83,
  MR_Word * STATE_VARIABLE_WarnSpecs_84)
{
  MR_Word Transform_35;
  MR_String StatsPredName_36;
  MR_Word StatsPredSymName_37;
  MR_Word TableBuiltinModule_38;
  MR_Word StatsTypeName_39;
  MR_Word StatsType_40;
  MR_Word TypeAndModeArg1_41;
  MR_Word TypeAndModeArg2_42;
  MR_Word TypeAndModeArg3_43;
  MR_Word ArgTypesAndMaybeModes_44;
  MR_Word TypeVarSet_45;
  MR_Word InstVarSet_46;
  MR_Word PredSymName_49;
  MR_Word PredSpec_50;
  MR_Word Attrs_51;
  MR_Word MaybeAttrs_52;
  MR_Word PredDecl_53;
  MR_Word PredFormArity_55;
  MR_Word PFSymNameArity_56;
  MR_Word Stats_58;
  MR_Word IO0_59;
  MR_Word IO_60;
  MR_Integer Var_86;
  MR_Word Var_90;
  MR_Word Var_91;
  MR_Word Var_92;
  MR_Word Var_93;
  MR_Word Var_94;
  MR_Word Var_95;
  MR_Word Var_96;
  MR_Word Var_97;
  MR_Word Var_101;
  MR_Word STATE_VARIABLE_ModuleInfo_1_111;
  MR_Word STATE_VARIABLE_ErrSpecs_1_112;
  MR_Word STATE_VARIABLE_VarSet_1_113;
  MR_Word STATE_VARIABLE_VarSet_2_115;
  MR_Word STATE_VARIABLE_VarSet_3_117;
  MR_Word STATE_VARIABLE_VarSet_4_119;
  MR_Word _MaybePredProcId_54;

  Var_86 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_25);
  {
    Transform_35 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Transform_35, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_21));
    MR_hl_field(2, Transform_35, 1) = ((MR_Box) (UserArity_24));
    MR_hl_field(2, Transform_35, 2) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) (SingleProc_26)));
    MR_hl_field(2, Transform_35, 3) = ((MR_Box) (Var_86));
  }
  hlds__pred_name__make_transformed_pred_name_3_p_0(PredName_23, Transform_35, &StatsPredName_36);
  {
    StatsPredSymName_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, StatsPredSymName_37, 0) = ((MR_Box) (PredModuleName_22));
    MR_hl_field(1, StatsPredSymName_37, 1) = ((MR_Box) (StatsPredName_36));
  }
  TableBuiltinModule_38 = mdbcomp__builtin_modules__mercury_table_statistics_module_0_f_0();
  {
    StatsTypeName_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, StatsTypeName_39, 0) = ((MR_Box) (TableBuiltinModule_38));
    MR_hl_field(1, StatsTypeName_39, 1) = ((MR_Box) ((MR_String) "proc_table_statistics"));
  }
  {
    StatsType_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, StatsType_40, 0) = ((MR_Box) (StatsTypeName_39));
    MR_hl_field(1, StatsType_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, StatsType_40, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_90 = parse_tree__prog_mode__out_mode_0_f_0();
  {
    TypeAndModeArg1_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeAndModeArg1_41, 0) = ((MR_Box) (StatsType_40));
    MR_hl_field(0, TypeAndModeArg1_41, 1) = ((MR_Box) (Var_90));
  }
  Var_91 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
  Var_92 = parse_tree__prog_mode__di_mode_0_f_0();
  {
    TypeAndModeArg2_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeAndModeArg2_42, 0) = ((MR_Box) (Var_91));
    MR_hl_field(0, TypeAndModeArg2_42, 1) = ((MR_Box) (Var_92));
  }
  Var_93 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
  Var_94 = parse_tree__prog_mode__uo_mode_0_f_0();
  {
    TypeAndModeArg3_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeAndModeArg3_43, 0) = ((MR_Box) (Var_93));
    MR_hl_field(0, TypeAndModeArg3_43, 1) = ((MR_Box) (Var_94));
  }
  {
    Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_97, 0) = ((MR_Box) (TypeAndModeArg3_43));
    MR_hl_field(1, Var_97, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_96, 0) = ((MR_Box) (TypeAndModeArg2_42));
    MR_hl_field(1, Var_96, 1) = ((MR_Box) (Var_97));
  }
  {
    Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_95, 0) = ((MR_Box) (TypeAndModeArg1_41));
    MR_hl_field(1, Var_95, 1) = ((MR_Box) (Var_96));
  }
  {
    ArgTypesAndMaybeModes_44 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, ArgTypesAndMaybeModes_44, 0) = ((MR_Box) (Var_95));
  }
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet_45);
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_46);
  {
    PredSymName_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, PredSymName_49, 0) = ((MR_Box) (PredModuleName_22));
    MR_hl_field(1, PredSymName_49, 1) = ((MR_Box) (PredName_23));
  }
  {
    PredSpec_50 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PredSpec_50, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_21));
    MR_hl_field(0, PredSpec_50, 1) = ((MR_Box) (PredSymName_49));
    MR_hl_field(0, PredSpec_50, 2) = ((MR_Box) (UserArity_24));
  }
  {
    Var_101 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_101, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_101, 1) = ((MR_Box) (PredSpec_50));
    MR_hl_field(3, Var_101, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  Attrs_51 = (MR_Word) (Var_101);
  {
    MaybeAttrs_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MaybeAttrs_52, 0) = ((MR_Box) (Attrs_51));
  }
  {
    PredDecl_53 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PredDecl_53, 0) = ((MR_Box) (StatsPredSymName_37));
    MR_hl_field(0, PredDecl_53, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(0, PredDecl_53, 2) = ((MR_Box) (ArgTypesAndMaybeModes_44));
    MR_hl_field(0, PredDecl_53, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, PredDecl_53, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, PredDecl_53, 5) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_2[3])));
    MR_hl_field(0, PredDecl_53, 6) = ((MR_Box) (MaybeAttrs_52));
    MR_hl_field(0, PredDecl_53, 7) = ((MR_Box) (TypeVarSet_45));
    MR_hl_field(0, PredDecl_53, 8) = ((MR_Box) (InstVarSet_46));
    MR_hl_field(0, PredDecl_53, 9) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, PredDecl_53, 10) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(0, PredDecl_53, 11) = ((MR_Box) (&hlds__make_hlds__add_pragma_tabling_scalar_common_1[80]));
    MR_hl_field(0, PredDecl_53, 12) = ((MR_Box) (Context_27));
    MR_hl_field(0, PredDecl_53, 13) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  hlds__make_hlds__add_pred__module_add_pred_decl_9_p_0(ItemMercuryStatus_29, PredStatus_30, (MR_Integer) 1, PredDecl_53, &_MaybePredProcId_54, STATE_VARIABLE_ModuleInfo_0_77, &STATE_VARIABLE_ModuleInfo_1_111, STATE_VARIABLE_ErrSpecs_0_81, &STATE_VARIABLE_ErrSpecs_1_112);
  parse_tree__prog_util__user_arity_pred_form_arity_3_p_0(PredOrFunc_21, UserArity_24, &PredFormArity_55);
  {
    PFSymNameArity_56 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PFSymNameArity_56, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_21));
    MR_hl_field(0, PFSymNameArity_56, 1) = ((MR_Box) (PredSymName_49));
    MR_hl_field(0, PFSymNameArity_56, 2) = ((MR_Box) (PredFormArity_55));
  }
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &STATE_VARIABLE_VarSet_1_113);
  mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "Stats", &Stats_58, STATE_VARIABLE_VarSet_1_113, &STATE_VARIABLE_VarSet_2_115);
  mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "IO0", &IO0_59, STATE_VARIABLE_VarSet_2_115, &STATE_VARIABLE_VarSet_3_117);
  mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "IO", &IO_60, STATE_VARIABLE_VarSet_3_117, &STATE_VARIABLE_VarSet_4_119);
  switch (IsTablingSupported_28) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word DummyStatsFuncSymName_68;
        MR_Word DummyStatsFuncTerm_69;
        MR_Word Args_70;
        MR_Word GetStatsExpr_71;
        MR_Word UpdateIOExpr_72;
        MR_Word GetStatsUpdateIOExpr_73;
        MR_Word BodyExpr_74;
        MR_Word StatsClauseInfo_75;
        MR_Word Var_153;
        MR_Word Var_156;
        MR_Word Var_157;
        MR_Word Var_158;
        MR_Word Var_159;
        MR_Word Var_160;
        MR_Word Var_167;
        MR_Word Var_171;

        Var_153 = mdbcomp__builtin_modules__mercury_table_statistics_module_0_f_0();
        {
          DummyStatsFuncSymName_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, DummyStatsFuncSymName_68, 0) = ((MR_Box) (Var_153));
          MR_hl_field(1, DummyStatsFuncSymName_68, 1) = ((MR_Box) ((MR_String) "dummy_proc_table_statistics"));
        }
        mdbcomp__sym_name__sym_name_to_term_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Context_27, DummyStatsFuncSymName_68, (MR_Word) ((MR_Unsigned) 0U), &DummyStatsFuncTerm_69);
        {
          Var_156 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_156, 0) = ((MR_Box) (Stats_58));
          MR_hl_field(1, Var_156, 1) = ((MR_Box) (Context_27));
        }
        {
          Var_158 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_158, 0) = ((MR_Box) (IO0_59));
          MR_hl_field(1, Var_158, 1) = ((MR_Box) (Context_27));
        }
        {
          Var_160 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_160, 0) = ((MR_Box) (IO_60));
          MR_hl_field(1, Var_160, 1) = ((MR_Box) (Context_27));
        }
        {
          Var_159 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_159, 0) = ((MR_Box) (Var_160));
          MR_hl_field(1, Var_159, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_157 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_157, 0) = ((MR_Box) (Var_158));
          MR_hl_field(1, Var_157, 1) = ((MR_Box) (Var_159));
        }
        {
          Args_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Args_70, 0) = ((MR_Box) (Var_156));
          MR_hl_field(1, Args_70, 1) = ((MR_Box) (Var_157));
        }
        {
          GetStatsExpr_71 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, GetStatsExpr_71, 0) = ((MR_Box) (Context_27));
          MR_hl_field(0, GetStatsExpr_71, 1) = ((MR_Box) (Var_156));
          MR_hl_field(0, GetStatsExpr_71, 2) = ((MR_Box) (DummyStatsFuncTerm_69));
          MR_hl_field(0, GetStatsExpr_71, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        {
          UpdateIOExpr_72 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, UpdateIOExpr_72, 0) = ((MR_Box) (Context_27));
          MR_hl_field(0, UpdateIOExpr_72, 1) = ((MR_Box) (Var_158));
          MR_hl_field(0, UpdateIOExpr_72, 2) = ((MR_Box) (Var_160));
          MR_hl_field(0, UpdateIOExpr_72, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        {
          Var_167 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_167, 0) = ((MR_Box) (UpdateIOExpr_72));
          MR_hl_field(1, Var_167, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          GetStatsUpdateIOExpr_73 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, GetStatsUpdateIOExpr_73, 0) = ((MR_Box) (Context_27));
          MR_hl_field(2, GetStatsUpdateIOExpr_73, 1) = ((MR_Box) (GetStatsExpr_71));
          MR_hl_field(2, GetStatsUpdateIOExpr_73, 2) = ((MR_Box) (Var_167));
        }
        {
          BodyExpr_74 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, BodyExpr_74, 0) = ((MR_Box) ((MR_Unsigned) 7U));
          MR_hl_field(3, BodyExpr_74, 1) = ((MR_Box) (Context_27));
          MR_hl_field(3, BodyExpr_74, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(3, BodyExpr_74, 3) = ((MR_Box) (GetStatsUpdateIOExpr_73));
        }
        {
          Var_171 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_171, 0) = ((MR_Box) (BodyExpr_74));
          MR_hl_field(1, Var_171, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          StatsClauseInfo_75 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, StatsClauseInfo_75, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(0, StatsClauseInfo_75, 1) = ((MR_Box) (StatsPredSymName_37));
          MR_hl_field(0, StatsClauseInfo_75, 2) = ((MR_Box) (Args_70));
          MR_hl_field(0, StatsClauseInfo_75, 3) = ((MR_Box) (STATE_VARIABLE_VarSet_4_119));
          MR_hl_field(0, StatsClauseInfo_75, 4) = ((MR_Box) (Var_171));
          MR_hl_field(0, StatsClauseInfo_75, 5) = ((MR_Box) (Context_27));
          MR_hl_field(0, StatsClauseInfo_75, 6) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        hlds__make_hlds__add_clause__module_add_clause_12_p_0(ProgressStream_20, PredStatus_30, (MR_Word) ((MR_Unsigned) 0U), StatsClauseInfo_75, STATE_VARIABLE_ModuleInfo_1_111, STATE_VARIABLE_ModuleInfo_78, STATE_VARIABLE_QualInfo_0_79, STATE_VARIABLE_QualInfo_80, STATE_VARIABLE_ErrSpecs_1_112, STATE_VARIABLE_ErrSpecs_82, STATE_VARIABLE_WarnSpecs_0_83, STATE_VARIABLE_WarnSpecs_84);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Arg1_61;
        MR_Word Arg2_62;
        MR_Word Arg3_63;
        MR_String Global_64;
        MR_String StatsCode_65;
        MR_Word StatsImpl_66;
        MR_Word StatsFCInfo_67;
        MR_Word Var_121;
        MR_Word Var_124;
        MR_Word Var_127;
        MR_Word STATE_VARIABLE_Attrs_1_129;
        MR_Word STATE_VARIABLE_Attrs_2_132;
        MR_Word STATE_VARIABLE_Attrs_3_134;
        MR_Word STATE_VARIABLE_Attrs_4_136;
        MR_Word STATE_VARIABLE_Attrs_5_138;
        MR_String Var_141;
        MR_Word Var_143;
        MR_Word Var_145;
        MR_Word Var_146;
        MR_Word Var_147;

        Var_121 = parse_tree__prog_mode__out_mode_0_f_0();
        {
          Arg1_61 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Arg1_61, 0) = ((MR_Box) (Stats_58));
          MR_hl_field(0, Arg1_61, 1) = ((MR_Box) ((MR_String) "Stats"));
          MR_hl_field(0, Arg1_61, 2) = ((MR_Box) (Var_121));
          MR_hl_field(0, Arg1_61, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        }
        Var_124 = parse_tree__prog_mode__di_mode_0_f_0();
        {
          Arg2_62 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Arg2_62, 0) = ((MR_Box) (IO0_59));
          MR_hl_field(0, Arg2_62, 1) = ((MR_Box) ((MR_String) "_IO0"));
          MR_hl_field(0, Arg2_62, 2) = ((MR_Box) (Var_124));
          MR_hl_field(0, Arg2_62, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        }
        Var_127 = parse_tree__prog_mode__uo_mode_0_f_0();
        {
          Arg3_63 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Arg3_63, 0) = ((MR_Box) (IO_60));
          MR_hl_field(0, Arg3_63, 1) = ((MR_Box) ((MR_String) "_IO"));
          MR_hl_field(0, Arg3_63, 2) = ((MR_Box) (Var_127));
          MR_hl_field(0, Arg3_63, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        }
        STATE_VARIABLE_Attrs_1_129 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 0);
        parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_1_129, &STATE_VARIABLE_Attrs_2_132);
        parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_2_132, &STATE_VARIABLE_Attrs_3_134);
        parse_tree__prog_data_foreign__set_purity_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_3_134, &STATE_VARIABLE_Attrs_4_136);
        parse_tree__prog_data_foreign__set_may_duplicate_3_p_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_2[4])), STATE_VARIABLE_Attrs_4_136, &STATE_VARIABLE_Attrs_5_138);
        Global_64 = hlds__make_hlds__add_pragma_tabling__table_info_c_global_var_name_3_f_0(STATE_VARIABLE_ModuleInfo_1_111, PFSymNameArity_56, ProcId_25);
        Var_141 = mercury__string__f_43_43_2_f_0(Global_64, (MR_String) ", &Stats);");
        StatsCode_65 = mercury__string__f_43_43_2_f_0((MR_String) "MR_get_tabling_stats(&", Var_141);
        {
          Var_143 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_143, 0) = ((MR_Box) (Context_27));
        }
        {
          StatsImpl_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, StatsImpl_66, 0) = ((MR_Box) (StatsCode_65));
          MR_hl_field(0, StatsImpl_66, 1) = ((MR_Box) (Var_143));
        }
        {
          Var_147 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_147, 0) = ((MR_Box) (Arg3_63));
          MR_hl_field(1, Var_147, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_146 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_146, 0) = ((MR_Box) (Arg2_62));
          MR_hl_field(1, Var_146, 1) = ((MR_Box) (Var_147));
        }
        {
          Var_145 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_145, 0) = ((MR_Box) (Arg1_61));
          MR_hl_field(1, Var_145, 1) = ((MR_Box) (Var_146));
        }
        {
          StatsFCInfo_67 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, StatsFCInfo_67, 0) = ((MR_Box) (STATE_VARIABLE_Attrs_5_138));
          MR_hl_field(0, StatsFCInfo_67, 1) = ((MR_Box) (StatsPredSymName_37));
          MR_hl_field(0, StatsFCInfo_67, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(0, StatsFCInfo_67, 3) = ((MR_Box) (Var_145));
          MR_hl_field(0, StatsFCInfo_67, 4) = ((MR_Box) (STATE_VARIABLE_VarSet_4_119));
          MR_hl_field(0, StatsFCInfo_67, 5) = ((MR_Box) (InstVarSet_46));
          MR_hl_field(0, StatsFCInfo_67, 6) = ((MR_Box) (StatsImpl_66));
          MR_hl_field(0, StatsFCInfo_67, 7) = ((MR_Box) (Context_27));
          MR_hl_field(0, StatsFCInfo_67, 8) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        hlds__make_hlds__add_foreign_proc__add_foreign_proc_10_p_0(ProgressStream_20, ItemMercuryStatus_29, PredStatus_30, StatsFCInfo_67, STATE_VARIABLE_ModuleInfo_1_111, STATE_VARIABLE_ModuleInfo_78, STATE_VARIABLE_ErrSpecs_1_112, STATE_VARIABLE_ErrSpecs_82, STATE_VARIABLE_WarnSpecs_0_83, STATE_VARIABLE_WarnSpecs_84);
        *STATE_VARIABLE_QualInfo_80 = STATE_VARIABLE_QualInfo_0_79;
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

  succeeded = hlds__make_hlds__add_pragma_tabling__IntroducedFrom__pred__table_info_c_global_var_name__762__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
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
hlds__make_hlds__add_pragma_tabling__module_add_pragma_tabled_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_ModuleInfo_74;
  MR_Word conv2_STATE_VARIABLE_QualInfo_76;
  MR_Word conv1_STATE_VARIABLE_ErrSpecs_78;
  MR_Word conv0_STATE_VARIABLE_WarnSpecs_80;

  hlds__make_hlds__add_pragma_tabling__module_add_pragma_tabled_for_pred_18_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_String) ((MR_hl_field(0, closure, 7)))), ((MR_Word) ((MR_hl_field(0, closure, 8)))), ((MR_Word) ((MR_hl_field(0, closure, 9)))), ((MR_Word) ((MR_hl_field(0, closure, 10)))), ((MR_Word) ((MR_hl_field(0, closure, 11)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_ModuleInfo_74, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_QualInfo_76, ((MR_Word) (wrapper_arg_6)), &conv1_STATE_VARIABLE_ErrSpecs_78, ((MR_Word) (wrapper_arg_8)), &conv0_STATE_VARIABLE_WarnSpecs_80);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_ModuleInfo_74));
  *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_QualInfo_76));
  *wrapper_arg_7 = ((MR_Box) (conv1_STATE_VARIABLE_ErrSpecs_78));
  *wrapper_arg_9 = ((MR_Box) (conv0_STATE_VARIABLE_WarnSpecs_80));
}

void MR_CALL 
hlds__make_hlds__add_pragma_tabling__module_add_pragma_tabled_12_p_0(
  MR_Word ProgressStream_13,
  MR_Word TabledInfo_14,
  MR_Word ItemMercuryStatus_15,
  MR_Word PredStatus_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_60,
  MR_Word * STATE_VARIABLE_ModuleInfo_61,
  MR_Word STATE_VARIABLE_QualInfo_0_62,
  MR_Word * STATE_VARIABLE_QualInfo_63,
  MR_Word STATE_VARIABLE_ErrSpecs_0_64,
  MR_Word * STATE_VARIABLE_ErrSpecs_65,
  MR_Word STATE_VARIABLE_WarnSpecs_0_66,
  MR_Word * STATE_VARIABLE_WarnSpecs_67)
{
  MR_Word TabledMethod_21 = ((MR_Word) ((MR_hl_field(0, TabledInfo_14, 0))));
  MR_Word PredOrProcSpec_22 = ((MR_Word) ((MR_hl_field(0, TabledInfo_14, 1))));
  MR_Word MaybeAttributes_23 = ((MR_Word) ((MR_hl_field(0, TabledInfo_14, 2))));
  MR_Word Context_24 = ((MR_Word) ((MR_hl_field(0, TabledInfo_14, 3))));
  MR_Word PFUMM_26 = ((MR_Word) ((MR_hl_field(0, PredOrProcSpec_22, 0))));
  MR_Word PredSymName_27 = ((MR_Word) ((MR_hl_field(0, PredOrProcSpec_22, 1))));
  MR_Word PredModuleName_28;
  MR_String PredName_29;
  MR_Word PredicateTable0_31;
  MR_Word UserArity_36;
  MR_Word PredIds_42;
  MR_Word STATE_VARIABLE_ModuleInfo_1_77;
  MR_Word STATE_VARIABLE_ErrSpecs_1_78;
  MR_Word STATE_VARIABLE_WarnSpecs_1_81;
  MR_Word STATE_VARIABLE_ErrSpecs_4_172;
  MR_Word Var_173;
  MR_Box conv7_STATE_VARIABLE_ModuleInfo_61;
  MR_Box conv6_STATE_VARIABLE_QualInfo_63;
  MR_Box conv5_STATE_VARIABLE_ErrSpecs_65;
  MR_Box conv4_STATE_VARIABLE_WarnSpecs_67;

  if (((MR_tag((MR_Word) PredSymName_27)) == (MR_Integer) 1))
  {
    PredModuleName_28 = ((MR_Word) ((MR_hl_field(1, PredSymName_27, 0))));
    PredName_29 = ((MR_String) ((MR_hl_field(1, PredSymName_27, 1))));
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_pragma_tabling.module_add_pragma_tabled\'/12", (MR_String) "unqualified PredSymName");
      return;
    }
  hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_60, &PredicateTable0_31);
  switch (MR_tag((MR_Word) PFUMM_26)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ModesOrArity_244 = ((MR_Word) ((MR_hl_field(0, PFUMM_26, 0))));
        MR_Word PredFormArity_247;
        MR_Word MaybePredId_248;

        if (((MR_tag((MR_Word) ModesOrArity_244)) == (MR_Integer) 1))
        {
          UserArity_36 = ((MR_Word) ((MR_hl_field(1, ModesOrArity_244, 0))));
          parse_tree__prog_util__user_arity_pred_form_arity_3_p_0((MR_Integer) 0, UserArity_36, &PredFormArity_247);
        }
        else
        {
          MR_Word Modes_218 = ((MR_Word) ((MR_hl_field(0, ModesOrArity_244, 0))));

          PredFormArity_247 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_218);
          parse_tree__prog_util__user_arity_pred_form_arity_3_p_1((MR_Integer) 0, &UserArity_36, PredFormArity_247);
        }
        hlds__pred_table__predicate_table_search_pf_fqm_n_a_6_p_0(PredicateTable0_31, (MR_Integer) 0, PredModuleName_28, PredName_29, PredFormArity_247, &MaybePredId_248);
        if ((MaybePredId_248 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Origin_222;
          MR_String TabledMethodStr_223;
          MR_Word DescPieces_224;
          MR_Word PredId_225;
          MR_Word Var_226;
          MR_Word Var_227;

          {
            Var_226 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_226, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(0, Var_226, 1) = ((MR_Box) (PredSymName_27));
            MR_hl_field(0, Var_226, 2) = ((MR_Box) (UserArity_36));
          }
          {
            Origin_222 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Origin_222, 0) = ((MR_Box) (Var_226));
          }
          TabledMethodStr_223 = parse_tree__parse_tree_out_misc__tabled_eval_method_to_string_1_f_0(TabledMethod_21);
          {
            Var_227 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_227, 0) = ((MR_Box) ((MR_Unsigned) 36U));
            MR_hl_field(3, Var_227, 1) = ((MR_Box) (TabledMethodStr_223));
          }
          {
            DescPieces_224 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, DescPieces_224, 0) = ((MR_Box) (Var_227));
            MR_hl_field(1, DescPieces_224, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[3])));
          }
          hlds__make_hlds__add_pred__add_implicit_pred_decl_report_error_14_p_0((MR_Integer) 0, PredModuleName_28, PredName_29, PredFormArity_247, PredStatus_16, (MR_Integer) 0, Context_24, Origin_222, DescPieces_224, &PredId_225, STATE_VARIABLE_ModuleInfo_0_60, &STATE_VARIABLE_ModuleInfo_1_77, STATE_VARIABLE_ErrSpecs_0_64, &STATE_VARIABLE_ErrSpecs_1_78);
          {
            PredIds_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, PredIds_42, 0) = ((MR_Box) (PredId_225));
            MR_hl_field(1, PredIds_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        else
        {
          MR_Word PredId_232 = ((MR_Word) ((MR_hl_field(1, MaybePredId_248, 0))));

          {
            PredIds_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, PredIds_42, 0) = ((MR_Box) (PredId_232));
            MR_hl_field(1, PredIds_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          STATE_VARIABLE_ModuleInfo_1_77 = STATE_VARIABLE_ModuleInfo_0_60;
          STATE_VARIABLE_ErrSpecs_1_78 = STATE_VARIABLE_ErrSpecs_0_64;
        }
        STATE_VARIABLE_WarnSpecs_1_81 = STATE_VARIABLE_WarnSpecs_0_66;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModesOrArity_32 = ((MR_Word) ((MR_hl_field(1, PFUMM_26, 0))));
        MR_Word PredFormArity_35;
        MR_Word MaybePredId_37;

        if (((MR_tag((MR_Word) ModesOrArity_32)) == (MR_Integer) 1))
        {
          UserArity_36 = ((MR_Word) ((MR_hl_field(1, ModesOrArity_32, 0))));
          parse_tree__prog_util__user_arity_pred_form_arity_3_p_0((MR_Integer) 1, UserArity_36, &PredFormArity_35);
        }
        else
        {
          MR_Word Modes_34 = ((MR_Word) ((MR_hl_field(0, ModesOrArity_32, 0))));

          PredFormArity_35 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_34);
          parse_tree__prog_util__user_arity_pred_form_arity_3_p_1((MR_Integer) 1, &UserArity_36, PredFormArity_35);
        }
        hlds__pred_table__predicate_table_search_pf_fqm_n_a_6_p_0(PredicateTable0_31, (MR_Integer) 1, PredModuleName_28, PredName_29, PredFormArity_35, &MaybePredId_37);
        if ((MaybePredId_37 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Origin_38;
          MR_String TabledMethodStr_39;
          MR_Word DescPieces_40;
          MR_Word PredId_41;
          MR_Word Var_70;
          MR_Word Var_71;

          {
            Var_70 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_70, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            MR_hl_field(0, Var_70, 1) = ((MR_Box) (PredSymName_27));
            MR_hl_field(0, Var_70, 2) = ((MR_Box) (UserArity_36));
          }
          {
            Origin_38 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Origin_38, 0) = ((MR_Box) (Var_70));
          }
          TabledMethodStr_39 = parse_tree__parse_tree_out_misc__tabled_eval_method_to_string_1_f_0(TabledMethod_21);
          {
            Var_71 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_71, 0) = ((MR_Box) ((MR_Unsigned) 36U));
            MR_hl_field(3, Var_71, 1) = ((MR_Box) (TabledMethodStr_39));
          }
          {
            DescPieces_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, DescPieces_40, 0) = ((MR_Box) (Var_71));
            MR_hl_field(1, DescPieces_40, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[3])));
          }
          hlds__make_hlds__add_pred__add_implicit_pred_decl_report_error_14_p_0((MR_Integer) 1, PredModuleName_28, PredName_29, PredFormArity_35, PredStatus_16, (MR_Integer) 0, Context_24, Origin_38, DescPieces_40, &PredId_41, STATE_VARIABLE_ModuleInfo_0_60, &STATE_VARIABLE_ModuleInfo_1_77, STATE_VARIABLE_ErrSpecs_0_64, &STATE_VARIABLE_ErrSpecs_1_78);
          {
            PredIds_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, PredIds_42, 0) = ((MR_Box) (PredId_41));
            MR_hl_field(1, PredIds_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        else
        {
          MR_Word PredId_178 = ((MR_Word) ((MR_hl_field(1, MaybePredId_37, 0))));

          {
            PredIds_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, PredIds_42, 0) = ((MR_Box) (PredId_178));
            MR_hl_field(1, PredIds_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          STATE_VARIABLE_ModuleInfo_1_77 = STATE_VARIABLE_ModuleInfo_0_60;
          STATE_VARIABLE_ErrSpecs_1_78 = STATE_VARIABLE_ErrSpecs_0_64;
        }
        STATE_VARIABLE_WarnSpecs_1_81 = STATE_VARIABLE_WarnSpecs_0_66;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PFUMMSpecs_43;
        MR_Word PredIds0_44;
        MR_String TabledMethodStr_189;

        UserArity_36 = ((MR_Word) ((MR_hl_field(2, PFUMM_26, 0))));
        TabledMethodStr_189 = parse_tree__parse_tree_out_misc__tabled_eval_method_to_string_1_f_0(TabledMethod_21);
        hlds__make_hlds_error__maybe_warn_about_pfumm_unknown_6_p_0(STATE_VARIABLE_ModuleInfo_0_60, TabledMethodStr_189, PFUMM_26, PredSymName_27, Context_24, &PFUMMSpecs_43);
        STATE_VARIABLE_WarnSpecs_1_81 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), PFUMMSpecs_43, STATE_VARIABLE_WarnSpecs_0_66);
        hlds__pred_table__predicate_table_lookup_m_n_a_6_p_0(PredicateTable0_31, (MR_Integer) 0, PredModuleName_28, PredName_29, UserArity_36, &PredIds0_44);
        if ((PredIds0_44 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_83;
          MR_Word Var_85;
          MR_Word PredFormArity_179;
          MR_Word Origin_180;
          MR_Word DescPieces_181;
          MR_Word PredId_182;

          {
            Var_83 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_83, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(0, Var_83, 1) = ((MR_Box) (PredSymName_27));
            MR_hl_field(0, Var_83, 2) = ((MR_Box) (UserArity_36));
          }
          {
            Origin_180 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Origin_180, 0) = ((MR_Box) (Var_83));
          }
          {
            Var_85 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_85, 0) = ((MR_Box) ((MR_Unsigned) 36U));
            MR_hl_field(3, Var_85, 1) = ((MR_Box) (TabledMethodStr_189));
          }
          {
            DescPieces_181 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, DescPieces_181, 0) = ((MR_Box) (Var_85));
            MR_hl_field(1, DescPieces_181, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[3])));
          }
          parse_tree__prog_util__user_arity_pred_form_arity_3_p_0((MR_Integer) 0, UserArity_36, &PredFormArity_179);
          hlds__make_hlds__add_pred__add_implicit_pred_decl_report_error_14_p_0((MR_Integer) 0, PredModuleName_28, PredName_29, PredFormArity_179, PredStatus_16, (MR_Integer) 0, Context_24, Origin_180, DescPieces_181, &PredId_182, STATE_VARIABLE_ModuleInfo_0_60, &STATE_VARIABLE_ModuleInfo_1_77, STATE_VARIABLE_ErrSpecs_0_64, &STATE_VARIABLE_ErrSpecs_1_78);
          {
            PredIds_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, PredIds_42, 0) = ((MR_Box) (PredId_182));
            MR_hl_field(1, PredIds_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        else
        {
          PredIds_42 = PredIds0_44;
          STATE_VARIABLE_ModuleInfo_1_77 = STATE_VARIABLE_ModuleInfo_0_60;
          STATE_VARIABLE_ErrSpecs_1_78 = STATE_VARIABLE_ErrSpecs_0_64;
        }
      }
      break;
  }
  if ((MaybeAttributes_23 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_ErrSpecs_4_172 = STATE_VARIABLE_ErrSpecs_1_78;
  else
  {
    MR_Word Attributes_47 = ((MR_Word) ((MR_hl_field(1, MaybeAttributes_23, 0))));
    MR_Word Statistics_48 = ((((MR_Unsigned) ((MR_hl_field(0, Attributes_47, 2))) >> 2)) & (MR_Integer) 1);
    MR_Word AllowReset_49 = ((((MR_Unsigned) ((MR_hl_field(0, Attributes_47, 2))) >> 1)) & (MR_Integer) 1);
    MR_Word Var_216 = ((MR_Word) ((MR_hl_field(1, PredIds_42, 1))));

    if ((Var_216 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_ErrSpecs_4_172 = STATE_VARIABLE_ErrSpecs_1_78;
    else
    {
      MR_Integer UserArityInt_54 = (MR_Integer) (UserArity_36);
      MR_Word SNA_55;
      MR_Word STATE_VARIABLE_ErrSpecs_3_136;

      {
        SNA_55 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, SNA_55, 0) = ((MR_Box) (PredSymName_27));
        MR_hl_field(0, SNA_55, 1) = ((MR_Box) (UserArityInt_54));
      }
      switch (Statistics_48) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_ErrSpecs_3_136 = STATE_VARIABLE_ErrSpecs_1_78;
          break;
        case (MR_Integer) 1:
          {
            MR_Word StatsPieces_56;
            MR_Word StatsSpec_57;
            MR_Word Var_102;
            MR_Word Var_103;
            MR_Word Var_108;
            MR_Word Var_113;
            MR_Word Var_114;
            MR_Word Var_115;
            MR_Word Var_116;

            Var_103 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[7])));
            {
              Var_116 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_116, 0) = ((MR_Box) ((MR_Unsigned) 14U));
              MR_hl_field(3, Var_116, 1) = ((MR_Box) (SNA_55));
            }
            {
              Var_115 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_115, 0) = ((MR_Box) (Var_116));
              MR_hl_field(1, Var_115, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[11])));
            }
            Var_114 = parse_tree__error_spec__color_as_subject_1_f_0(Var_115);
            Var_113 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_114, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[18])));
            Var_108 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[9])), Var_113);
            Var_102 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_103, Var_108);
            StatsPieces_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[5])), Var_102);
            {
              StatsSpec_57 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, StatsSpec_57, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_tabling.module_add_pragma_tabled\'/12"));
              MR_hl_field(0, StatsSpec_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, StatsSpec_57, 2) = ((MR_Box) ((MR_Unsigned) 48U));
              MR_hl_field(0, StatsSpec_57, 3) = ((MR_Box) (Context_24));
              MR_hl_field(0, StatsSpec_57, 4) = ((MR_Box) (StatsPieces_56));
            }
            {
              STATE_VARIABLE_ErrSpecs_3_136 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_ErrSpecs_3_136, 0) = ((MR_Box) (StatsSpec_57));
              MR_hl_field(1, STATE_VARIABLE_ErrSpecs_3_136, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_1_78));
            }
          }
          break;
      }
      switch (AllowReset_49) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word ResetPieces_58;
            MR_Word ResetSpec_59;
            MR_Word Var_141;
            MR_Word Var_142;
            MR_Word Var_147;
            MR_Word Var_152;
            MR_Word Var_153;
            MR_Word Var_154;
            MR_Word Var_155;

            Var_142 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[20])));
            {
              Var_155 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_155, 0) = ((MR_Box) ((MR_Unsigned) 14U));
              MR_hl_field(3, Var_155, 1) = ((MR_Box) (SNA_55));
            }
            {
              Var_154 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_154, 0) = ((MR_Box) (Var_155));
              MR_hl_field(1, Var_154, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[11])));
            }
            Var_153 = parse_tree__error_spec__color_as_subject_1_f_0(Var_154);
            Var_152 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_153, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[22])));
            Var_147 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[9])), Var_152);
            Var_141 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_142, Var_147);
            ResetPieces_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[5])), Var_141);
            {
              ResetSpec_59 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ResetSpec_59, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_tabling.module_add_pragma_tabled\'/12"));
              MR_hl_field(0, ResetSpec_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, ResetSpec_59, 2) = ((MR_Box) ((MR_Unsigned) 48U));
              MR_hl_field(0, ResetSpec_59, 3) = ((MR_Box) (Context_24));
              MR_hl_field(0, ResetSpec_59, 4) = ((MR_Box) (ResetPieces_58));
            }
            {
              STATE_VARIABLE_ErrSpecs_4_172 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_ErrSpecs_4_172, 0) = ((MR_Box) (ResetSpec_59));
              MR_hl_field(1, STATE_VARIABLE_ErrSpecs_4_172, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_3_136));
            }
          }
          break;
        case (MR_Integer) 0:
          STATE_VARIABLE_ErrSpecs_4_172 = STATE_VARIABLE_ErrSpecs_3_136;
          break;
      }
    }
  }
  {
    Var_173 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_173, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_tabling_scalar_common_3[0]));
    MR_hl_field(0, Var_173, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_tabling__module_add_pragma_tabled_12_p_0_1));
    MR_hl_field(0, Var_173, 2) = ((MR_Box) ((MR_Integer) 9));
    MR_hl_field(0, Var_173, 3) = ((MR_Box) (ProgressStream_13));
    MR_hl_field(0, Var_173, 4) = ((MR_Box) (TabledMethod_21));
    MR_hl_field(0, Var_173, 5) = ((MR_Box) (PFUMM_26));
    MR_hl_field(0, Var_173, 6) = ((MR_Box) (PredModuleName_28));
    MR_hl_field(0, Var_173, 7) = ((MR_Box) (PredName_29));
    MR_hl_field(0, Var_173, 8) = ((MR_Box) (MaybeAttributes_23));
    MR_hl_field(0, Var_173, 9) = ((MR_Box) (Context_24));
    MR_hl_field(0, Var_173, 10) = ((MR_Box) (ItemMercuryStatus_15));
    MR_hl_field(0, Var_173, 11) = ((MR_Box) (PredStatus_16));
  }
  mercury__list__foldl4_10_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0), (MR_Word) (&hlds__make_hlds__add_pragma_tabling_scalar_common_1[0]), (MR_Word) (&hlds__make_hlds__add_pragma_tabling_scalar_common_1[1]), Var_173, PredIds_42, ((MR_Box) (STATE_VARIABLE_ModuleInfo_1_77)), &conv7_STATE_VARIABLE_ModuleInfo_61, ((MR_Box) (STATE_VARIABLE_QualInfo_0_62)), &conv6_STATE_VARIABLE_QualInfo_63, ((MR_Box) (STATE_VARIABLE_ErrSpecs_4_172)), &conv5_STATE_VARIABLE_ErrSpecs_65, ((MR_Box) (STATE_VARIABLE_WarnSpecs_1_81)), &conv4_STATE_VARIABLE_WarnSpecs_67);
  *STATE_VARIABLE_ModuleInfo_61 = ((MR_Word) (conv7_STATE_VARIABLE_ModuleInfo_61));
  *STATE_VARIABLE_QualInfo_63 = ((MR_Word) (conv6_STATE_VARIABLE_QualInfo_63));
  *STATE_VARIABLE_ErrSpecs_65 = ((MR_Word) (conv5_STATE_VARIABLE_ErrSpecs_65));
  *STATE_VARIABLE_WarnSpecs_67 = ((MR_Word) (conv4_STATE_VARIABLE_WarnSpecs_67));
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
