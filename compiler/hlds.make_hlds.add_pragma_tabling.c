/*
** Automatically generated from `add_pragma_tabling.m'
** by the Mercury compiler,
** version rotd-2026-09-03
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
#include "termination.mih"
#include "time.mih"
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
#include "hlds.hlds_error_util.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_proc.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_hlds.mih"
#include "hlds.make_hlds_error.mih"
#include "hlds.mode_test.mih"
#include "hlds.pred_info_types.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_proc_id.mih"
#include "hlds.pred_table.mih"
#include "hlds.proc_info_types.mih"
#include "hlds.proc_table_struct.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.maybe_util.mih"
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
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_out_sym_name.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_rare.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_item_inst_mode.mih"
#include "parse_tree.prog_item_pragma.mih"
#include "parse_tree.prog_item_pred_proc_id.mih"
#include "parse_tree.prog_item_type.mih"
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
#include "termination.term_constr.mih"
#include "termination.term_osi.mih"
#include "hlds.make_hlds.add_clause.mih"
#include "hlds.make_hlds.add_foreign_proc.mih"
#include "hlds.make_hlds.add_pred.mih"
#include "hlds.make_hlds.make_hlds_types.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "ll_backend.llds_out.llds_out_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"
#include "termination.term_constr.term_constr_errors.mih"
#include "termination.term_constr.term_constr_main_types.mih"
#include "termination.term_osi.term_osi_errors.mih"
#include "termination.term_osi.term_osi_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_tabling__maybe__pti_maybe_1__plain_parse_tree__prog_data_pragma__type_ctor_info_table_attributes_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_tabling__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_tabling__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_warn_spec_0;

static const MR_EnumFunctorDesc hlds__make_hlds__add_pragma_tabling__hlds__make_hlds__add_pragma_tabling__enum_functor_desc_general_cannot_table_reason_0_0;

static const MR_EnumFunctorDesc hlds__make_hlds__add_pragma_tabling__hlds__make_hlds__add_pragma_tabling__enum_functor_desc_general_cannot_table_reason_0_1;

static const MR_EnumFunctorDesc hlds__make_hlds__add_pragma_tabling__hlds__make_hlds__add_pragma_tabling__enum_functor_desc_general_cannot_table_reason_0_2;

static const MR_EnumFunctorDesc hlds__make_hlds__add_pragma_tabling__hlds__make_hlds__add_pragma_tabling__enum_functor_desc_general_cannot_table_reason_0_3;

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_pragma_tabling__hlds__make_hlds__add_pragma_tabling__enum_ordinal_ordered_general_cannot_table_reason_0[4];

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_pragma_tabling__hlds__make_hlds__add_pragma_tabling__enum_name_ordered_general_cannot_table_reason_0[4];

static const MR_Integer hlds__make_hlds__add_pragma_tabling__hlds__make_hlds__add_pragma_tabling__functor_number_map_general_cannot_table_reason_0[4];

static const MR_EnumFunctorDesc hlds__make_hlds__add_pragma_tabling__hlds__make_hlds__add_pragma_tabling__enum_functor_desc_mm_cannot_table_reason_0_0;

static const MR_EnumFunctorDesc hlds__make_hlds__add_pragma_tabling__hlds__make_hlds__add_pragma_tabling__enum_functor_desc_mm_cannot_table_reason_0_1;

static const MR_EnumFunctorDesc hlds__make_hlds__add_pragma_tabling__hlds__make_hlds__add_pragma_tabling__enum_functor_desc_mm_cannot_table_reason_0_2;

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_pragma_tabling__hlds__make_hlds__add_pragma_tabling__enum_ordinal_ordered_mm_cannot_table_reason_0[3];

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_pragma_tabling__hlds__make_hlds__add_pragma_tabling__enum_name_ordered_mm_cannot_table_reason_0[3];

static const MR_Integer hlds__make_hlds__add_pragma_tabling__hlds__make_hlds__add_pragma_tabling__functor_number_map_mm_cannot_table_reason_0[3];

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_tabling__IntroducedFrom__pred__table_info_c_global_var_name__1019__1_2_p_0(
  MR_Word Target_10,
  MR_Word HeadVar__2_26);

static void MR_CALL 
hlds__make_hlds__add_pragma_tabling____Compare____mm_cannot_table_reason_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_tabling____Unify____mm_cannot_table_reason_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__add_pragma_tabling____Compare____general_cannot_table_reason_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_tabling____Unify____general_cannot_table_reason_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__add_pragma_tabling__module_add_pragma_tabled_for_pred_16_p_0(
  MR_Word ProgressStream_17,
  MR_Word TabledMethod0_18,
  MR_Word PFUMM_19,
  MR_Word MaybeAttributes_20,
  MR_Word PragmaContext_21,
  MR_Word ItemMercuryStatus_22,
  MR_Word PredStatus_23,
  MR_Word PredId_24,
  MR_Word STATE_VARIABLE_ModuleInfo_0_66,
  MR_Word * STATE_VARIABLE_ModuleInfo_67,
  MR_Word STATE_VARIABLE_QualInfo_0_68,
  MR_Word * STATE_VARIABLE_QualInfo_69,
  MR_Word STATE_VARIABLE_ErrSpecs_0_70,
  MR_Word * STATE_VARIABLE_ErrSpecs_71,
  MR_Word STATE_VARIABLE_WarnSpecs_0_72,
  MR_Word * STATE_VARIABLE_WarnSpecs_73);

static void MR_CALL 
hlds__make_hlds__add_pragma_tabling__select_tabled_proc_set_eval_method_20_p_0(
  MR_Word ProgressStream_21,
  MR_Word PredId_22,
  MR_Word PredInfo0_23,
  MR_Word MaybeModes_24,
  MR_Word TabledMethod_25,
  MR_String TabledMethodStr_26,
  MR_Word MaybeAttributes_27,
  MR_Word PragmaContext_28,
  MR_Word ItemMercuryStatus_29,
  MR_Word PredStatus_30,
  MR_Word STATE_VARIABLE_ProcTable_0_51,
  MR_Word * STATE_VARIABLE_ProcTable_52,
  MR_Word STATE_VARIABLE_ModuleInfo_0_53,
  MR_Word * STATE_VARIABLE_ModuleInfo_54,
  MR_Word STATE_VARIABLE_QualInfo_0_55,
  MR_Word * STATE_VARIABLE_QualInfo_56,
  MR_Word STATE_VARIABLE_ErrSpecs_0_57,
  MR_Word * STATE_VARIABLE_ErrSpecs_58,
  MR_Word STATE_VARIABLE_WarnSpecs_0_59,
  MR_Word * STATE_VARIABLE_WarnSpecs_60);

static void MR_CALL 
hlds__make_hlds__add_pragma_tabling__set_eval_method_create_aux_pred_for_procs_19_p_0(
  MR_Word ProgressStream_1,
  MR_Word PredInfo_2,
  MR_Word TabledMethod_3,
  MR_Word MaybeAttributes_4,
  MR_Word PragmaContext_5,
  MR_Word ItemMercuryStatus_6,
  MR_Word PredStatus_7,
  MR_Word SingleProc_8,
  MR_Word HeadVar__9_9,
  MR_Word STATE_VARIABLE_ProcTable_0_10,
  MR_Word * STATE_VARIABLE_ProcTable_11,
  MR_Word STATE_VARIABLE_ModuleInfo_0_12,
  MR_Word * STATE_VARIABLE_ModuleInfo_13,
  MR_Word STATE_VARIABLE_QualInfo_0_14,
  MR_Word * STATE_VARIABLE_QualInfo_15,
  MR_Word STATE_VARIABLE_ErrSpecs_0_16,
  MR_Word * STATE_VARIABLE_ErrSpecs_17,
  MR_Word STATE_VARIABLE_WarnSpecs_0_18,
  MR_Word * STATE_VARIABLE_WarnSpecs_19);

static void MR_CALL 
hlds__make_hlds__add_pragma_tabling__set_eval_method_create_aux_preds_for_proc_20_p_0(
  MR_Word ProgressStream_21,
  MR_Word PredInfo0_22,
  MR_Word TabledMethod_23,
  MR_Word MaybeAttributes_24,
  MR_Word PragmaContext_25,
  MR_Word ItemMercuryStatus_26,
  MR_Word PredStatus_27,
  MR_Word SingleProc_28,
  MR_Integer ProcId_29,
  MR_Word ProcInfo0_30,
  MR_Word STATE_VARIABLE_ProcTable_0_66,
  MR_Word * STATE_VARIABLE_ProcTable_67,
  MR_Word STATE_VARIABLE_ModuleInfo_0_68,
  MR_Word * STATE_VARIABLE_ModuleInfo_69,
  MR_Word STATE_VARIABLE_QualInfo_0_70,
  MR_Word * STATE_VARIABLE_QualInfo_71,
  MR_Word STATE_VARIABLE_ErrSpecs_0_72,
  MR_Word * STATE_VARIABLE_ErrSpecs_73,
  MR_Word STATE_VARIABLE_WarnSpecs_0_74,
  MR_Word * STATE_VARIABLE_WarnSpecs_75);

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
hlds__make_hlds__add_pragma_tabling__create_tabling_reset_pred_16_p_0(
  MR_Word ProgressStream_17,
  MR_Word PredInfo0_18,
  MR_Integer ProcId_19,
  MR_Word SingleProc_20,
  MR_Word PragmaContext_21,
  MR_Word IsTablingSupported_22,
  MR_Word ItemMercuryStatus_23,
  MR_Word PredStatus_24,
  MR_Word STATE_VARIABLE_ModuleInfo_0_64,
  MR_Word * STATE_VARIABLE_ModuleInfo_65,
  MR_Word STATE_VARIABLE_QualInfo_0_66,
  MR_Word * STATE_VARIABLE_QualInfo_67,
  MR_Word STATE_VARIABLE_ErrSpecs_0_68,
  MR_Word * STATE_VARIABLE_ErrSpecs_69,
  MR_Word STATE_VARIABLE_WarnSpecs_0_70,
  MR_Word * STATE_VARIABLE_WarnSpecs_71);

static void MR_CALL 
hlds__make_hlds__add_pragma_tabling__create_tabling_statistics_pred_16_p_0(
  MR_Word ProgressStream_17,
  MR_Word PredInfo0_18,
  MR_Integer ProcId_19,
  MR_Word SingleProc_20,
  MR_Word PragmaContext_21,
  MR_Word IsTablingSupported_22,
  MR_Word ItemMercuryStatus_23,
  MR_Word PredStatus_24,
  MR_Word STATE_VARIABLE_ModuleInfo_0_75,
  MR_Word * STATE_VARIABLE_ModuleInfo_76,
  MR_Word STATE_VARIABLE_QualInfo_0_77,
  MR_Word * STATE_VARIABLE_QualInfo_78,
  MR_Word STATE_VARIABLE_ErrSpecs_0_79,
  MR_Word * STATE_VARIABLE_ErrSpecs_80,
  MR_Word STATE_VARIABLE_WarnSpecs_0_81,
  MR_Word * STATE_VARIABLE_WarnSpecs_82);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_tabling__table_info_c_global_var_name_3_f_0_1(
  MR_Box closure_arg);

static MR_String MR_CALL 
hlds__make_hlds__add_pragma_tabling__table_info_c_global_var_name_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word PFSymNameArity_6,
  MR_Integer ProcId_7);

static void MR_CALL 
hlds__make_hlds__add_pragma_tabling__record_any_need_for_stratification_4_p_0(
  MR_Word PredId_5,
  MR_Word TabledMethod_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15);

static void MR_CALL 
hlds__make_hlds__add_pragma_tabling__find_grade_problems_for_tabling_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredId_8,
  MR_Word PragmaContext_9,
  MR_Word TabledMethod_10,
  MR_Word * STATE_VARIABLE_ErrSpecs_28,
  MR_Word * STATE_VARIABLE_WarnSpecs_29);

static void MR_CALL 
hlds__make_hlds__add_pragma_tabling__general_cannot_table_reason_spec_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word PredId_11,
  MR_Word PragmaContext_12,
  MR_Word TabledMethod_13,
  MR_Word Reason_14,
  MR_Word STATE_VARIABLE_ErrSpecs_0_26,
  MR_Word * STATE_VARIABLE_ErrSpecs_27,
  MR_Word STATE_VARIABLE_WarnSpecs_0_28,
  MR_Word * STATE_VARIABLE_WarnSpecs_29);

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

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_tabling____Unify____general_cannot_table_reason_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pragma_tabling____Compare____general_cannot_table_reason_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_tabling____Unify____mm_cannot_table_reason_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pragma_tabling____Compare____mm_cannot_table_reason_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__make_hlds__add_pragma_tabling_scalar_common_1[130][2];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_tabling_scalar_common_2[6][1];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_tabling_scalar_common_3[1][19];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_tabling_scalar_common_5[1][5];


struct hlds__make_hlds__add_pragma_tabling__vector_common_type_4_0_s {
  const MR_Word hlds__make_hlds__add_pragma_tabling__vector_common_type_4_0__vct_4_f_0;
};

static /* final */ const struct hlds__make_hlds__add_pragma_tabling__vector_common_type_4_0_s hlds__make_hlds__add_pragma_tabling_vector_common_4[4];



static /* final */ const MR_Box hlds__make_hlds__add_pragma_tabling_scalar_common_1[130][2] = {
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
    ((MR_Box) ((MR_String) "but tabling is"))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[55]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "(to make the mdb command \140retry\' safe across I/O),"))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[56])))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "all predicates that perform I/O"))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[58])))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning: debugging implicitly tables"))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[60])))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Ignoring the"))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[64]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "because tabling is"))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[66]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[67])))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: minimal model tabling is"))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[69]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "not compatible with --gc accurate."))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[12])))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "not compatible with --gc hgc."))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[73]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[12])))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "implemented only on the C backend."))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[75]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[12])))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "not compatible with parallel execution."))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[77]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[12])))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: minimal model tabling is not compatible with"))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[79]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "generating high level code."))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[81]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "profiling."))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[83]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "trailing."))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[85]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for the"))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "which has"))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[88]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "no declared modes."))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[90]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "undeclared mode"))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[92]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of"))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error in"))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "has"))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[97]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  99 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "duplicate"))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "pragmas"))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[100]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "specified."))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[102]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[12])))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "tabling pragmas specified,"))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[104]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "two conflicting"))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[106]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[105])))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[108]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 110 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "too many argument tabling methods specified."))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[111]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[12])))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "not enough argument tabling methods specified."))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[113]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[12])))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in"))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "argument tabling method"))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[116]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[96]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[117])))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[119]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "input modes."))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[121]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "not compatible with"))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[123]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[122])))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "output modes."))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[125]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[123]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[126])))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is neither input or output."))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[128]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[12])))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_tabling_scalar_common_2[6][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 184U) },
  /* row   3 */
  { (MR_Box) ((MR_Unsigned) 177U) },
  /* row   4 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   5 */
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
    ((MR_Box) (&parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__type_ctor_info_pred_func_or_unknown_maybe_modes_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_tabling__maybe__pti_maybe_1__plain_parse_tree__prog_data_pragma__type_ctor_info_table_attributes_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_pred_status_0)),
    ((MR_Box) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_id_0)),
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

static /* final */ const MR_Box hlds__make_hlds__add_pragma_tabling_scalar_common_5[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_compilation_target_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_compilation_target_0))
  },
};


static /* final */ const struct hlds__make_hlds__add_pragma_tabling__vector_common_type_4_0_s hlds__make_hlds__add_pragma_tabling_vector_common_4[4] = {
  /* row   0 */   { (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[76])) },
  /* row   1 */   { (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[72])) },
  /* row   2 */   { (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[74])) },
  /* row   3 */   { (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[78])) },
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

static const MR_EnumFunctorDesc hlds__make_hlds__add_pragma_tabling__hlds__make_hlds__add_pragma_tabling__enum_functor_desc_general_cannot_table_reason_0_0 = {
  (MR_String) "gen_reason_non_c_backend",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__make_hlds__add_pragma_tabling__hlds__make_hlds__add_pragma_tabling__enum_functor_desc_general_cannot_table_reason_0_1 = {
  (MR_String) "gen_reason_gc_accurate",
  INT32_C(1)
};

static const MR_EnumFunctorDesc hlds__make_hlds__add_pragma_tabling__hlds__make_hlds__add_pragma_tabling__enum_functor_desc_general_cannot_table_reason_0_2 = {
  (MR_String) "gen_reason_gc_hgc",
  INT32_C(2)
};

static const MR_EnumFunctorDesc hlds__make_hlds__add_pragma_tabling__hlds__make_hlds__add_pragma_tabling__enum_functor_desc_general_cannot_table_reason_0_3 = {
  (MR_String) "gen_reason_parallel",
  INT32_C(3)
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_pragma_tabling__hlds__make_hlds__add_pragma_tabling__enum_ordinal_ordered_general_cannot_table_reason_0[4] = {
  &hlds__make_hlds__add_pragma_tabling__hlds__make_hlds__add_pragma_tabling__enum_functor_desc_general_cannot_table_reason_0_0,
  &hlds__make_hlds__add_pragma_tabling__hlds__make_hlds__add_pragma_tabling__enum_functor_desc_general_cannot_table_reason_0_1,
  &hlds__make_hlds__add_pragma_tabling__hlds__make_hlds__add_pragma_tabling__enum_functor_desc_general_cannot_table_reason_0_2,
  &hlds__make_hlds__add_pragma_tabling__hlds__make_hlds__add_pragma_tabling__enum_functor_desc_general_cannot_table_reason_0_3
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_pragma_tabling__hlds__make_hlds__add_pragma_tabling__enum_name_ordered_general_cannot_table_reason_0[4] = {
  &hlds__make_hlds__add_pragma_tabling__hlds__make_hlds__add_pragma_tabling__enum_functor_desc_general_cannot_table_reason_0_1,
  &hlds__make_hlds__add_pragma_tabling__hlds__make_hlds__add_pragma_tabling__enum_functor_desc_general_cannot_table_reason_0_2,
  &hlds__make_hlds__add_pragma_tabling__hlds__make_hlds__add_pragma_tabling__enum_functor_desc_general_cannot_table_reason_0_0,
  &hlds__make_hlds__add_pragma_tabling__hlds__make_hlds__add_pragma_tabling__enum_functor_desc_general_cannot_table_reason_0_3
};

static const MR_Integer hlds__make_hlds__add_pragma_tabling__hlds__make_hlds__add_pragma_tabling__functor_number_map_general_cannot_table_reason_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__add_pragma_tabling__hlds__make_hlds__add_pragma_tabling__type_ctor_info_general_cannot_table_reason_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__add_pragma_tabling____Unify____general_cannot_table_reason_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_pragma_tabling____Compare____general_cannot_table_reason_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_pragma_tabling",
  (MR_String) "general_cannot_table_reason",
  { hlds__make_hlds__add_pragma_tabling__hlds__make_hlds__add_pragma_tabling__enum_name_ordered_general_cannot_table_reason_0 },
  { hlds__make_hlds__add_pragma_tabling__hlds__make_hlds__add_pragma_tabling__enum_ordinal_ordered_general_cannot_table_reason_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  hlds__make_hlds__add_pragma_tabling__hlds__make_hlds__add_pragma_tabling__functor_number_map_general_cannot_table_reason_0,

};

static const MR_EnumFunctorDesc hlds__make_hlds__add_pragma_tabling__hlds__make_hlds__add_pragma_tabling__enum_functor_desc_mm_cannot_table_reason_0_0 = {
  (MR_String) "mm_reason_hlc",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__make_hlds__add_pragma_tabling__hlds__make_hlds__add_pragma_tabling__enum_functor_desc_mm_cannot_table_reason_0_1 = {
  (MR_String) "mm_reason_trailing",
  INT32_C(1)
};

static const MR_EnumFunctorDesc hlds__make_hlds__add_pragma_tabling__hlds__make_hlds__add_pragma_tabling__enum_functor_desc_mm_cannot_table_reason_0_2 = {
  (MR_String) "mm_reason_profiling",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_pragma_tabling__hlds__make_hlds__add_pragma_tabling__enum_ordinal_ordered_mm_cannot_table_reason_0[3] = {
  &hlds__make_hlds__add_pragma_tabling__hlds__make_hlds__add_pragma_tabling__enum_functor_desc_mm_cannot_table_reason_0_0,
  &hlds__make_hlds__add_pragma_tabling__hlds__make_hlds__add_pragma_tabling__enum_functor_desc_mm_cannot_table_reason_0_1,
  &hlds__make_hlds__add_pragma_tabling__hlds__make_hlds__add_pragma_tabling__enum_functor_desc_mm_cannot_table_reason_0_2
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_pragma_tabling__hlds__make_hlds__add_pragma_tabling__enum_name_ordered_mm_cannot_table_reason_0[3] = {
  &hlds__make_hlds__add_pragma_tabling__hlds__make_hlds__add_pragma_tabling__enum_functor_desc_mm_cannot_table_reason_0_0,
  &hlds__make_hlds__add_pragma_tabling__hlds__make_hlds__add_pragma_tabling__enum_functor_desc_mm_cannot_table_reason_0_2,
  &hlds__make_hlds__add_pragma_tabling__hlds__make_hlds__add_pragma_tabling__enum_functor_desc_mm_cannot_table_reason_0_1
};

static const MR_Integer hlds__make_hlds__add_pragma_tabling__hlds__make_hlds__add_pragma_tabling__functor_number_map_mm_cannot_table_reason_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__add_pragma_tabling__hlds__make_hlds__add_pragma_tabling__type_ctor_info_mm_cannot_table_reason_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__add_pragma_tabling____Unify____mm_cannot_table_reason_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_pragma_tabling____Compare____mm_cannot_table_reason_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_pragma_tabling",
  (MR_String) "mm_cannot_table_reason",
  { hlds__make_hlds__add_pragma_tabling__hlds__make_hlds__add_pragma_tabling__enum_name_ordered_mm_cannot_table_reason_0 },
  { hlds__make_hlds__add_pragma_tabling__hlds__make_hlds__add_pragma_tabling__enum_ordinal_ordered_mm_cannot_table_reason_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  hlds__make_hlds__add_pragma_tabling__hlds__make_hlds__add_pragma_tabling__functor_number_map_mm_cannot_table_reason_0,

};

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_tabling__IntroducedFrom__pred__table_info_c_global_var_name__1019__1_2_p_0(
  MR_Word Target_10,
  MR_Word HeadVar__2_26)
{
  MR_bool succeeded = (Target_10 == HeadVar__2_26);

  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_pragma_tabling____Compare____mm_cannot_table_reason_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_tabling____Unify____mm_cannot_table_reason_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_pragma_tabling____Compare____general_cannot_table_reason_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_tabling____Unify____general_cannot_table_reason_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_pragma_tabling__module_add_pragma_tabled_for_pred_16_p_0(
  MR_Word ProgressStream_17,
  MR_Word TabledMethod0_18,
  MR_Word PFUMM_19,
  MR_Word MaybeAttributes_20,
  MR_Word PragmaContext_21,
  MR_Word ItemMercuryStatus_22,
  MR_Word PredStatus_23,
  MR_Word PredId_24,
  MR_Word STATE_VARIABLE_ModuleInfo_0_66,
  MR_Word * STATE_VARIABLE_ModuleInfo_67,
  MR_Word STATE_VARIABLE_QualInfo_0_68,
  MR_Word * STATE_VARIABLE_QualInfo_69,
  MR_Word STATE_VARIABLE_ErrSpecs_0_70,
  MR_Word * STATE_VARIABLE_ErrSpecs_71,
  MR_Word STATE_VARIABLE_WarnSpecs_0_72,
  MR_Word * STATE_VARIABLE_WarnSpecs_73)
{
  MR_bool succeeded;
  MR_Word Globals_29;
  MR_Word TabledMethod_32;
  MR_Word PredInfo0_36;
  MR_Word MaybePredOrFunc_37;
  MR_Word UserArity_38;
  MR_Word MaybeModes_39;
  MR_Word PredOrFunc_40;
  MR_Word PredSymName_41;
  MR_Word PredFormArity_42;
  MR_Word PFSymNameArity_43;
  MR_String TabledMethodStr_44;
  MR_Word VeryVerbose_45;
  MR_Word Markers_48;
  MR_Word GradeErrSpecs_58;
  MR_Word GradeWarnSpecs_59;
  MR_Word STATE_VARIABLE_WarnSpecs_1_157;
  MR_Word WarnTableWithInline_49;
  MR_Word Var_87;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_66, &Globals_29);
  switch (MR_tag((MR_Word) TabledMethod0_18)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      TabledMethod_32 = TabledMethod0_18;
      break;
    case (MR_Integer) 3:
      {
        MR_Word OwnStacks_31;

        libs__globals__lookup_bool_option_3_p_0(Globals_29, (MR_Integer) 95, &OwnStacks_31);
        switch (OwnStacks_31) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            TabledMethod_32 = (MR_Word) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_2[0]));
            break;
          case (MR_Integer) 1:
            TabledMethod_32 = (MR_Word) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_2[1]));
            break;
        }
      }
      break;
  }
  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_66, PredId_24, &PredInfo0_36);
  parse_tree__prog_item_pred_proc_id__pfumm_to_maybe_pf_arity_maybe_modes_4_p_0(PFUMM_19, &MaybePredOrFunc_37, &UserArity_38, &MaybeModes_39);
  if ((MaybePredOrFunc_37 == (MR_Word) ((MR_Unsigned) 0U)))
    PredOrFunc_40 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo0_36);
  else
    PredOrFunc_40 = ((MR_Word) ((MR_hl_field(1, MaybePredOrFunc_37, 0))));
  hlds__hlds_pred__pred_info_get_sym_name_2_p_0(PredInfo0_36, &PredSymName_41);
  parse_tree__prog_util__user_arity_pred_form_arity_3_p_0(PredOrFunc_40, UserArity_38, &PredFormArity_42);
  {
    PFSymNameArity_43 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PFSymNameArity_43, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_40));
    MR_hl_field(0, PFSymNameArity_43, 1) = ((MR_Box) (PredSymName_41));
    MR_hl_field(0, PFSymNameArity_43, 2) = ((MR_Box) (UserArity_38));
  }
  TabledMethodStr_44 = parse_tree__parse_tree_out_misc__tabled_eval_method_to_string_1_f_0(TabledMethod_32);
  libs__globals__lookup_bool_option_3_p_0(Globals_29, (MR_Integer) 132, &VeryVerbose_45);
  switch (VeryVerbose_45) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String IdStr_47;

        IdStr_47 = parse_tree__parse_tree_out_sym_name__pf_sym_name_pred_form_arity_to_string_3_f_0(PredOrFunc_40, PredSymName_41, PredFormArity_42);
        mercury__io__write_string_4_p_0(ProgressStream_17, (MR_String) "% Processing \140:- pragma ");
        mercury__io__write_string_4_p_0(ProgressStream_17, TabledMethodStr_44);
        mercury__io__write_string_4_p_0(ProgressStream_17, (MR_String) "\' for ");
        mercury__io__write_string_4_p_0(ProgressStream_17, IdStr_47);
        mercury__io__write_string_4_p_0(ProgressStream_17, (MR_String) "...\n");
      }
      break;
  }
  hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo0_36, &Markers_48);
  succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_48, (MR_Integer) 6);
  if (succeeded)
  {
    Var_87 = (MR_Integer) 184;
    libs__globals__lookup_bool_option_3_p_0(Globals_29, Var_87, &WarnTableWithInline_49);
    succeeded = (WarnTableWithInline_49 == (MR_Integer) 1);
  }
  if (succeeded)
  {
    MR_Word InlineWarningPieces_50;
    MR_Word InlineWarningSpec_52;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_97;
    MR_Word Var_102;
    MR_Word Var_103;
    MR_Word Var_104;
    MR_Word Var_105;
    MR_Word Var_110;
    MR_Word Var_115;
    MR_Word Var_116;
    MR_Word Var_124;
    MR_Word Var_131;
    MR_Word Var_132;

    {
      Var_95 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_95, 0) = ((MR_Box) ((MR_Unsigned) 18U));
      MR_hl_field(3, Var_95, 1) = ((MR_Box) (PFSymNameArity_43));
    }
    {
      Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_94, 0) = ((MR_Box) (Var_95));
      MR_hl_field(1, Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_93 = parse_tree__error_spec__color_as_subject_1_f_0(Var_94);
    {
      Var_105 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_105, 0) = ((MR_Box) ((MR_Unsigned) 36U));
      MR_hl_field(3, Var_105, 1) = ((MR_Box) (TabledMethodStr_44));
    }
    {
      Var_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_104, 0) = ((MR_Box) (Var_105));
      MR_hl_field(1, Var_104, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[3])));
    }
    Var_103 = parse_tree__error_spec__color_as_inconsistent_1_f_0(Var_104);
    Var_116 = parse_tree__error_spec__color_as_inconsistent_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[32])));
    Var_132 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[37])));
    Var_131 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_132, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[46])));
    Var_124 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[35])), Var_131);
    Var_115 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_116, Var_124);
    Var_110 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[28])), Var_115);
    Var_102 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_103, Var_110);
    Var_97 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[26])), Var_102);
    Var_92 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_93, Var_97);
    InlineWarningPieces_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[24])), Var_92);
    {
      InlineWarningSpec_52 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, InlineWarningSpec_52, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_tabling.module_add_pragma_tabled_for_pred\'/16"));
      MR_hl_field(0, InlineWarningSpec_52, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_2[2])));
      MR_hl_field(0, InlineWarningSpec_52, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(0, InlineWarningSpec_52, 3) = ((MR_Box) (PragmaContext_21));
      MR_hl_field(0, InlineWarningSpec_52, 4) = ((MR_Box) (InlineWarningPieces_50));
    }
    {
      STATE_VARIABLE_WarnSpecs_1_157 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_WarnSpecs_1_157, 0) = ((MR_Box) (InlineWarningSpec_52));
      MR_hl_field(1, STATE_VARIABLE_WarnSpecs_1_157, 1) = ((MR_Box) (STATE_VARIABLE_WarnSpecs_0_72));
    }
  }
  else
    STATE_VARIABLE_WarnSpecs_1_157 = STATE_VARIABLE_WarnSpecs_0_72;
  hlds__make_hlds__add_pragma_tabling__find_grade_problems_for_tabling_6_p_0(STATE_VARIABLE_ModuleInfo_0_66, PredId_24, PragmaContext_21, TabledMethod_32, &GradeErrSpecs_58, &GradeWarnSpecs_59);
  succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo0_36);
  if (succeeded)
  {
    MR_Integer UserArityInt_53 = (MR_Integer) (UserArity_38);
    MR_Word SNA_54;
    MR_Word Pieces_55;
    MR_Word ImportSpec_56;
    MR_Word ImportErrSpecs_57;
    MR_Word Var_158;
    MR_Word Var_161;
    MR_Word Var_162;
    MR_Word Var_167;
    MR_Word Var_168;
    MR_Word Var_173;
    MR_Word Var_174;
    MR_Word Var_177;
    MR_Word Var_178;
    MR_Word Var_183;
    MR_Word Var_184;
    MR_Word Var_185;
    MR_Word Var_186;
    MR_Word STATE_VARIABLE_ErrSpecs_1_198;

    {
      SNA_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SNA_54, 0) = ((MR_Box) (PredSymName_41));
      MR_hl_field(0, SNA_54, 1) = ((MR_Box) (UserArityInt_53));
    }
    {
      Var_162 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_162, 0) = ((MR_Box) ((MR_Unsigned) 36U));
      MR_hl_field(3, Var_162, 1) = ((MR_Box) (TabledMethodStr_44));
    }
    {
      Var_161 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_161, 0) = ((MR_Box) (Var_162));
      MR_hl_field(1, Var_161, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[3])));
    }
    {
      Var_158 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_158, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[47])));
      MR_hl_field(1, Var_158, 1) = ((MR_Box) (Var_161));
    }
    Var_168 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[49])));
    {
      Var_178 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_178, 0) = ((MR_Box) ((MR_Unsigned) 31U));
      MR_hl_field(3, Var_178, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_40));
    }
    {
      Var_177 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_177, 0) = ((MR_Box) (Var_178));
      MR_hl_field(1, Var_177, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[52])));
    }
    {
      Var_174 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_174, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[50])));
      MR_hl_field(1, Var_174, 1) = ((MR_Box) (Var_177));
    }
    {
      Var_186 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_186, 0) = ((MR_Box) ((MR_Unsigned) 14U));
      MR_hl_field(3, Var_186, 1) = ((MR_Box) (SNA_54));
    }
    {
      Var_185 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_185, 0) = ((MR_Box) (Var_186));
      MR_hl_field(1, Var_185, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[54])));
    }
    Var_184 = parse_tree__error_spec__color_as_subject_1_f_0(Var_185);
    Var_183 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_184, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[12])));
    Var_173 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_174, Var_183);
    Var_167 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_168, Var_173);
    Pieces_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_158, Var_167);
    {
      ImportSpec_56 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ImportSpec_56, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_tabling.module_add_pragma_tabled_for_pred\'/16"));
      MR_hl_field(0, ImportSpec_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, ImportSpec_56, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(0, ImportSpec_56, 3) = ((MR_Box) (PragmaContext_21));
      MR_hl_field(0, ImportSpec_56, 4) = ((MR_Box) (Pieces_55));
    }
    {
      ImportErrSpecs_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ImportErrSpecs_57, 0) = ((MR_Box) (ImportSpec_56));
      MR_hl_field(1, ImportErrSpecs_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    STATE_VARIABLE_ErrSpecs_1_198 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ImportErrSpecs_57, STATE_VARIABLE_ErrSpecs_0_70);
    succeeded = (GradeErrSpecs_58 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      succeeded = (GradeWarnSpecs_59 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      *STATE_VARIABLE_WarnSpecs_73 = STATE_VARIABLE_WarnSpecs_1_157;
      *STATE_VARIABLE_ErrSpecs_71 = STATE_VARIABLE_ErrSpecs_1_198;
    }
    else
    {
      MR_Word Var_200;

      *STATE_VARIABLE_ErrSpecs_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), GradeErrSpecs_58, STATE_VARIABLE_ErrSpecs_1_198);
      succeeded = ((MR_tag((MR_Word) TabledMethod_32)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_200 = ((MR_Unsigned) ((MR_hl_field(1, TabledMethod_32, 0))) & (MR_Integer) 1);
        succeeded = (Var_200 == (MR_Integer) 1);
      }
      if (succeeded)
        *STATE_VARIABLE_WarnSpecs_73 = STATE_VARIABLE_WarnSpecs_1_157;
      else
        *STATE_VARIABLE_WarnSpecs_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), GradeWarnSpecs_59, STATE_VARIABLE_WarnSpecs_1_157);
    }
    *STATE_VARIABLE_ModuleInfo_67 = STATE_VARIABLE_ModuleInfo_0_66;
    *STATE_VARIABLE_QualInfo_69 = STATE_VARIABLE_QualInfo_0_68;
  }
  else
  {
    MR_Word ProcTable0_61;
    MR_Word ProcTable_62;
    MR_Word STATE_VARIABLE_ModuleInfo_1_202;
    MR_Word MaybeSetTabledEval_229;
    MR_Word STATE_VARIABLE_ErrSpecs_2_231;
    MR_Word STATE_VARIABLE_WarnSpecs_2_233;

    succeeded = (GradeErrSpecs_58 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      succeeded = (GradeWarnSpecs_59 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      MaybeSetTabledEval_229 = (MR_Integer) 1;
      STATE_VARIABLE_WarnSpecs_2_233 = STATE_VARIABLE_WarnSpecs_1_157;
      STATE_VARIABLE_ErrSpecs_2_231 = STATE_VARIABLE_ErrSpecs_0_70;
    }
    else
    {
      MR_Word Var_218;

      STATE_VARIABLE_ErrSpecs_2_231 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), GradeErrSpecs_58, STATE_VARIABLE_ErrSpecs_0_70);
      succeeded = ((MR_tag((MR_Word) TabledMethod_32)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_218 = ((MR_Unsigned) ((MR_hl_field(1, TabledMethod_32, 0))) & (MR_Integer) 1);
        succeeded = (Var_218 == (MR_Integer) 1);
      }
      if (succeeded)
        STATE_VARIABLE_WarnSpecs_2_233 = STATE_VARIABLE_WarnSpecs_1_157;
      else
        STATE_VARIABLE_WarnSpecs_2_233 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), GradeWarnSpecs_59, STATE_VARIABLE_WarnSpecs_1_157);
      MaybeSetTabledEval_229 = (MR_Integer) 0;
    }
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_36, &ProcTable0_61);
    hlds__make_hlds__add_pragma_tabling__select_tabled_proc_set_eval_method_20_p_0(ProgressStream_17, PredId_24, PredInfo0_36, MaybeModes_39, TabledMethod_32, TabledMethodStr_44, MaybeAttributes_20, PragmaContext_21, ItemMercuryStatus_22, PredStatus_23, ProcTable0_61, &ProcTable_62, STATE_VARIABLE_ModuleInfo_0_66, &STATE_VARIABLE_ModuleInfo_1_202, STATE_VARIABLE_QualInfo_0_68, STATE_VARIABLE_QualInfo_69, STATE_VARIABLE_ErrSpecs_2_231, STATE_VARIABLE_ErrSpecs_71, STATE_VARIABLE_WarnSpecs_2_233, STATE_VARIABLE_WarnSpecs_73);
    switch (MaybeSetTabledEval_229) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_ModuleInfo_67 = STATE_VARIABLE_ModuleInfo_1_202;
        break;
      case (MR_Integer) 1:
        {
          MR_Word PredInfo_63;

          hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_62, PredInfo0_36, &PredInfo_63);
          hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_24, PredInfo_63, STATE_VARIABLE_ModuleInfo_1_202, STATE_VARIABLE_ModuleInfo_67);
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_tabling__select_tabled_proc_set_eval_method_20_p_0(
  MR_Word ProgressStream_21,
  MR_Word PredId_22,
  MR_Word PredInfo0_23,
  MR_Word MaybeModes_24,
  MR_Word TabledMethod_25,
  MR_String TabledMethodStr_26,
  MR_Word MaybeAttributes_27,
  MR_Word PragmaContext_28,
  MR_Word ItemMercuryStatus_29,
  MR_Word PredStatus_30,
  MR_Word STATE_VARIABLE_ProcTable_0_51,
  MR_Word * STATE_VARIABLE_ProcTable_52,
  MR_Word STATE_VARIABLE_ModuleInfo_0_53,
  MR_Word * STATE_VARIABLE_ModuleInfo_54,
  MR_Word STATE_VARIABLE_QualInfo_0_55,
  MR_Word * STATE_VARIABLE_QualInfo_56,
  MR_Word STATE_VARIABLE_ErrSpecs_0_57,
  MR_Word * STATE_VARIABLE_ErrSpecs_58,
  MR_Word STATE_VARIABLE_WarnSpecs_0_59,
  MR_Word * STATE_VARIABLE_WarnSpecs_60)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_ModuleInfo_1_61;

  hlds__make_hlds__add_pragma_tabling__record_any_need_for_stratification_4_p_0(PredId_22, TabledMethod_25, STATE_VARIABLE_ModuleInfo_0_53, &STATE_VARIABLE_ModuleInfo_1_61);
  if ((MaybeModes_24 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word ExistingProcs_45;

    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_proc__hlds__hlds_proc__type_ctor_info_proc_info_0), STATE_VARIABLE_ProcTable_0_51, &ExistingProcs_45);
    if ((ExistingProcs_45 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_106;
      MR_Word Var_107;
      MR_Word Var_110;
      MR_Word Var_111;
      MR_Word Var_112;
      MR_Word Var_115;
      MR_Word Var_118;
      MR_Word Var_119;
      MR_Word Var_121;
      MR_Word Var_122;
      MR_Word Var_123;
      MR_Word Var_124;
      MR_Word Var_129;
      MR_Word Var_134;
      MR_Word Var_135;
      MR_Word PredOrFunc_152;
      MR_Word PredSymName_153;
      MR_Integer UserArityInt_154;
      MR_Word SNA_155;
      MR_Word Pieces_156;
      MR_Word Spec_157;

      PredOrFunc_152 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo0_23);
      hlds__hlds_pred__pred_info_get_sym_name_2_p_0(PredInfo0_23, &PredSymName_153);
      Var_106 = hlds__hlds_pred__pred_info_user_arity_1_f_0(PredInfo0_23);
      UserArityInt_154 = (MR_Integer) (Var_106);
      {
        SNA_155 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, SNA_155, 0) = ((MR_Box) (PredSymName_153));
        MR_hl_field(0, SNA_155, 1) = ((MR_Box) (UserArityInt_154));
      }
      {
        Var_111 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_111, 0) = ((MR_Box) ((MR_Unsigned) 36U));
        MR_hl_field(3, Var_111, 1) = ((MR_Box) (TabledMethodStr_26));
      }
      {
        Var_119 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_119, 0) = ((MR_Box) ((MR_Unsigned) 31U));
        MR_hl_field(3, Var_119, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_152));
      }
      {
        Var_118 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_118, 0) = ((MR_Box) (Var_119));
        MR_hl_field(1, Var_118, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_115 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_115, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[87])));
        MR_hl_field(1, Var_115, 1) = ((MR_Box) (Var_118));
      }
      {
        Var_112 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_112, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[2])));
        MR_hl_field(1, Var_112, 1) = ((MR_Box) (Var_115));
      }
      {
        Var_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_110, 0) = ((MR_Box) (Var_111));
        MR_hl_field(1, Var_110, 1) = ((MR_Box) (Var_112));
      }
      {
        Var_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_107, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[4])));
        MR_hl_field(1, Var_107, 1) = ((MR_Box) (Var_110));
      }
      {
        Var_124 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_124, 0) = ((MR_Box) ((MR_Unsigned) 14U));
        MR_hl_field(3, Var_124, 1) = ((MR_Box) (SNA_155));
      }
      {
        Var_123 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_123, 0) = ((MR_Box) (Var_124));
        MR_hl_field(1, Var_123, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[11])));
      }
      Var_122 = parse_tree__error_spec__color_as_subject_1_f_0(Var_123);
      Var_135 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[91])));
      Var_134 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_135, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[12])));
      Var_129 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[89])), Var_134);
      Var_121 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_122, Var_129);
      Pieces_156 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_107, Var_121);
      {
        Spec_157 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_157, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_tabling.select_tabled_proc_set_eval_method\'/20"));
        MR_hl_field(0, Spec_157, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_157, 2) = ((MR_Box) ((MR_Unsigned) 48U));
        MR_hl_field(0, Spec_157, 3) = ((MR_Box) (PragmaContext_28));
        MR_hl_field(0, Spec_157, 4) = ((MR_Box) (Pieces_156));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_ErrSpecs_58 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_157));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_57));
      }
      *STATE_VARIABLE_ProcTable_52 = STATE_VARIABLE_ProcTable_0_51;
      *STATE_VARIABLE_ModuleInfo_54 = STATE_VARIABLE_ModuleInfo_1_61;
      *STATE_VARIABLE_QualInfo_56 = STATE_VARIABLE_QualInfo_0_55;
      *STATE_VARIABLE_WarnSpecs_60 = STATE_VARIABLE_WarnSpecs_0_59;
    }
    else
    {
      MR_Word Var_46 = ((MR_Word) ((MR_hl_field(1, ExistingProcs_45, 0))));
      MR_Word SingleProc_48;
      MR_Integer ProcId_188;
      MR_Word ProcInfo0_189;
      MR_Word ProcIdsInfos_190 = ((MR_Word) ((MR_hl_field(1, ExistingProcs_45, 1))));
      MR_Word STATE_VARIABLE_ProcTable_1_202;
      MR_Word STATE_VARIABLE_ModuleInfo_1_203;
      MR_Word STATE_VARIABLE_QualInfo_1_204;
      MR_Word STATE_VARIABLE_ErrSpecs_1_205;
      MR_Word STATE_VARIABLE_WarnSpecs_1_206;

      if ((ProcIdsInfos_190 == (MR_Word) ((MR_Unsigned) 0U)))
        SingleProc_48 = (MR_Integer) 1;
      else
        SingleProc_48 = (MR_Integer) 0;
      ProcId_188 = ((MR_Integer) ((MR_hl_field(0, Var_46, 0))));
      ProcInfo0_189 = ((MR_Word) ((MR_hl_field(0, Var_46, 1))));
      hlds__make_hlds__add_pragma_tabling__set_eval_method_create_aux_preds_for_proc_20_p_0(ProgressStream_21, PredInfo0_23, TabledMethod_25, MaybeAttributes_27, PragmaContext_28, ItemMercuryStatus_29, PredStatus_30, SingleProc_48, ProcId_188, ProcInfo0_189, STATE_VARIABLE_ProcTable_0_51, &STATE_VARIABLE_ProcTable_1_202, STATE_VARIABLE_ModuleInfo_1_61, &STATE_VARIABLE_ModuleInfo_1_203, STATE_VARIABLE_QualInfo_0_55, &STATE_VARIABLE_QualInfo_1_204, STATE_VARIABLE_ErrSpecs_0_57, &STATE_VARIABLE_ErrSpecs_1_205, STATE_VARIABLE_WarnSpecs_0_59, &STATE_VARIABLE_WarnSpecs_1_206);
      hlds__make_hlds__add_pragma_tabling__set_eval_method_create_aux_pred_for_procs_19_p_0(ProgressStream_21, PredInfo0_23, TabledMethod_25, MaybeAttributes_27, PragmaContext_28, ItemMercuryStatus_29, PredStatus_30, SingleProc_48, ProcIdsInfos_190, STATE_VARIABLE_ProcTable_1_202, STATE_VARIABLE_ProcTable_52, STATE_VARIABLE_ModuleInfo_1_203, STATE_VARIABLE_ModuleInfo_54, STATE_VARIABLE_QualInfo_1_204, STATE_VARIABLE_QualInfo_56, STATE_VARIABLE_ErrSpecs_1_205, STATE_VARIABLE_ErrSpecs_58, STATE_VARIABLE_WarnSpecs_1_206, STATE_VARIABLE_WarnSpecs_60);
    }
  }
  else
  {
    MR_Word Modes_36 = ((MR_Word) ((MR_hl_field(1, MaybeModes_24, 0))));
    MR_Integer ProcId_37;
    MR_Word ProcInfo0_38;

    succeeded = hlds__hlds_code_util__get_procedure_matching_argmodes_5_p_0(STATE_VARIABLE_ModuleInfo_1_61, STATE_VARIABLE_ProcTable_0_51, Modes_36, &ProcId_37, &ProcInfo0_38);
    if (succeeded)
      hlds__make_hlds__add_pragma_tabling__set_eval_method_create_aux_preds_for_proc_20_p_0(ProgressStream_21, PredInfo0_23, TabledMethod_25, MaybeAttributes_27, PragmaContext_28, ItemMercuryStatus_29, PredStatus_30, (MR_Integer) 1, ProcId_37, ProcInfo0_38, STATE_VARIABLE_ProcTable_0_51, STATE_VARIABLE_ProcTable_52, STATE_VARIABLE_ModuleInfo_1_61, STATE_VARIABLE_ModuleInfo_54, STATE_VARIABLE_QualInfo_0_55, STATE_VARIABLE_QualInfo_56, STATE_VARIABLE_ErrSpecs_0_57, STATE_VARIABLE_ErrSpecs_58, STATE_VARIABLE_WarnSpecs_0_59, STATE_VARIABLE_WarnSpecs_60);
    else
    {
      MR_Word PredOrFunc_39;
      MR_Word PredSymName_40;
      MR_Integer UserArityInt_41;
      MR_Word SNA_42;
      MR_Word Pieces_43;
      MR_Word Spec_44;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_72;
      MR_Word Var_73;
      MR_Word Var_78;
      MR_Word Var_79;
      MR_Word Var_84;
      MR_Word Var_85;
      MR_Word Var_88;
      MR_Word Var_89;
      MR_Word Var_91;
      MR_Word Var_92;
      MR_Word Var_93;
      MR_Word Var_94;

      PredOrFunc_39 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo0_23);
      hlds__hlds_pred__pred_info_get_sym_name_2_p_0(PredInfo0_23, &PredSymName_40);
      Var_68 = hlds__hlds_pred__pred_info_user_arity_1_f_0(PredInfo0_23);
      UserArityInt_41 = (MR_Integer) (Var_68);
      {
        SNA_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, SNA_42, 0) = ((MR_Box) (PredSymName_40));
        MR_hl_field(0, SNA_42, 1) = ((MR_Box) (UserArityInt_41));
      }
      {
        Var_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_73, 0) = ((MR_Box) ((MR_Unsigned) 36U));
        MR_hl_field(3, Var_73, 1) = ((MR_Box) (TabledMethodStr_26));
      }
      {
        Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_72, 0) = ((MR_Box) (Var_73));
        MR_hl_field(1, Var_72, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[65])));
      }
      {
        Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_69, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[4])));
        MR_hl_field(1, Var_69, 1) = ((MR_Box) (Var_72));
      }
      Var_79 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[93])));
      {
        Var_89 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_89, 0) = ((MR_Box) ((MR_Unsigned) 31U));
        MR_hl_field(3, Var_89, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_39));
      }
      {
        Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_88, 0) = ((MR_Box) (Var_89));
        MR_hl_field(1, Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_85, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[94])));
        MR_hl_field(1, Var_85, 1) = ((MR_Box) (Var_88));
      }
      {
        Var_94 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_94, 0) = ((MR_Box) ((MR_Unsigned) 14U));
        MR_hl_field(3, Var_94, 1) = ((MR_Box) (SNA_42));
      }
      {
        Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_93, 0) = ((MR_Box) (Var_94));
        MR_hl_field(1, Var_93, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[54])));
      }
      Var_92 = parse_tree__error_spec__color_as_subject_1_f_0(Var_93);
      Var_91 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_92, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[12])));
      Var_84 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_85, Var_91);
      Var_78 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_79, Var_84);
      Pieces_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_69, Var_78);
      {
        Spec_44 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_44, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_tabling.select_tabled_proc_set_eval_method\'/20"));
        MR_hl_field(0, Spec_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_44, 2) = ((MR_Box) ((MR_Unsigned) 48U));
        MR_hl_field(0, Spec_44, 3) = ((MR_Box) (PragmaContext_28));
        MR_hl_field(0, Spec_44, 4) = ((MR_Box) (Pieces_43));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_ErrSpecs_58 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_44));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_57));
      }
      *STATE_VARIABLE_WarnSpecs_60 = STATE_VARIABLE_WarnSpecs_0_59;
      *STATE_VARIABLE_QualInfo_56 = STATE_VARIABLE_QualInfo_0_55;
      *STATE_VARIABLE_ModuleInfo_54 = STATE_VARIABLE_ModuleInfo_1_61;
      *STATE_VARIABLE_ProcTable_52 = STATE_VARIABLE_ProcTable_0_51;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_tabling__set_eval_method_create_aux_pred_for_procs_19_p_0(
  MR_Word ProgressStream_1,
  MR_Word PredInfo_2,
  MR_Word TabledMethod_3,
  MR_Word MaybeAttributes_4,
  MR_Word PragmaContext_5,
  MR_Word ItemMercuryStatus_6,
  MR_Word PredStatus_7,
  MR_Word SingleProc_8,
  MR_Word HeadVar__9_9,
  MR_Word STATE_VARIABLE_ProcTable_0_10,
  MR_Word * STATE_VARIABLE_ProcTable_11,
  MR_Word STATE_VARIABLE_ModuleInfo_0_12,
  MR_Word * STATE_VARIABLE_ModuleInfo_13,
  MR_Word STATE_VARIABLE_QualInfo_0_14,
  MR_Word * STATE_VARIABLE_QualInfo_15,
  MR_Word STATE_VARIABLE_ErrSpecs_0_16,
  MR_Word * STATE_VARIABLE_ErrSpecs_17,
  MR_Word STATE_VARIABLE_WarnSpecs_0_18,
  MR_Word * STATE_VARIABLE_WarnSpecs_19)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__9_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_WarnSpecs_19 = STATE_VARIABLE_WarnSpecs_0_18;
      *STATE_VARIABLE_ErrSpecs_17 = STATE_VARIABLE_ErrSpecs_0_16;
      *STATE_VARIABLE_QualInfo_15 = STATE_VARIABLE_QualInfo_0_14;
      *STATE_VARIABLE_ModuleInfo_13 = STATE_VARIABLE_ModuleInfo_0_12;
      *STATE_VARIABLE_ProcTable_11 = STATE_VARIABLE_ProcTable_0_10;
    }
    else
    {
      MR_Integer ProcId_51;
      MR_Word ProcInfo0_52;
      MR_Word ProcIdsInfos_53 = ((MR_Word) ((MR_hl_field(1, HeadVar__9_9, 1))));
      MR_Word Var_69 = ((MR_Word) ((MR_hl_field(1, HeadVar__9_9, 0))));
      MR_Word STATE_VARIABLE_ProcTable_1_70;
      MR_Word STATE_VARIABLE_ModuleInfo_1_71;
      MR_Word STATE_VARIABLE_QualInfo_1_72;
      MR_Word STATE_VARIABLE_ErrSpecs_1_73;
      MR_Word STATE_VARIABLE_WarnSpecs_1_74;
      MR_Word next_value_of_HeadVar__9_9;
      MR_Word next_value_of_STATE_VARIABLE_ProcTable_0_10;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_12;
      MR_Word next_value_of_STATE_VARIABLE_QualInfo_0_14;
      MR_Word next_value_of_STATE_VARIABLE_ErrSpecs_0_16;
      MR_Word next_value_of_STATE_VARIABLE_WarnSpecs_0_18;

      ProcId_51 = ((MR_Integer) ((MR_hl_field(0, Var_69, 0))));
      ProcInfo0_52 = ((MR_Word) ((MR_hl_field(0, Var_69, 1))));
      hlds__make_hlds__add_pragma_tabling__set_eval_method_create_aux_preds_for_proc_20_p_0(ProgressStream_1, PredInfo_2, TabledMethod_3, MaybeAttributes_4, PragmaContext_5, ItemMercuryStatus_6, PredStatus_7, SingleProc_8, ProcId_51, ProcInfo0_52, STATE_VARIABLE_ProcTable_0_10, &STATE_VARIABLE_ProcTable_1_70, STATE_VARIABLE_ModuleInfo_0_12, &STATE_VARIABLE_ModuleInfo_1_71, STATE_VARIABLE_QualInfo_0_14, &STATE_VARIABLE_QualInfo_1_72, STATE_VARIABLE_ErrSpecs_0_16, &STATE_VARIABLE_ErrSpecs_1_73, STATE_VARIABLE_WarnSpecs_0_18, &STATE_VARIABLE_WarnSpecs_1_74);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__9_9 = ProcIdsInfos_53;
      next_value_of_STATE_VARIABLE_ProcTable_0_10 = STATE_VARIABLE_ProcTable_1_70;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_12 = STATE_VARIABLE_ModuleInfo_1_71;
      next_value_of_STATE_VARIABLE_QualInfo_0_14 = STATE_VARIABLE_QualInfo_1_72;
      next_value_of_STATE_VARIABLE_ErrSpecs_0_16 = STATE_VARIABLE_ErrSpecs_1_73;
      next_value_of_STATE_VARIABLE_WarnSpecs_0_18 = STATE_VARIABLE_WarnSpecs_1_74;
      HeadVar__9_9 = next_value_of_HeadVar__9_9;
      STATE_VARIABLE_ProcTable_0_10 = next_value_of_STATE_VARIABLE_ProcTable_0_10;
      STATE_VARIABLE_ModuleInfo_0_12 = next_value_of_STATE_VARIABLE_ModuleInfo_0_12;
      STATE_VARIABLE_QualInfo_0_14 = next_value_of_STATE_VARIABLE_QualInfo_0_14;
      STATE_VARIABLE_ErrSpecs_0_16 = next_value_of_STATE_VARIABLE_ErrSpecs_0_16;
      STATE_VARIABLE_WarnSpecs_0_18 = next_value_of_STATE_VARIABLE_WarnSpecs_0_18;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_tabling__set_eval_method_create_aux_preds_for_proc_20_p_0(
  MR_Word ProgressStream_21,
  MR_Word PredInfo0_22,
  MR_Word TabledMethod_23,
  MR_Word MaybeAttributes_24,
  MR_Word PragmaContext_25,
  MR_Word ItemMercuryStatus_26,
  MR_Word PredStatus_27,
  MR_Word SingleProc_28,
  MR_Integer ProcId_29,
  MR_Word ProcInfo0_30,
  MR_Word STATE_VARIABLE_ProcTable_0_66,
  MR_Word * STATE_VARIABLE_ProcTable_67,
  MR_Word STATE_VARIABLE_ModuleInfo_0_68,
  MR_Word * STATE_VARIABLE_ModuleInfo_69,
  MR_Word STATE_VARIABLE_QualInfo_0_70,
  MR_Word * STATE_VARIABLE_QualInfo_71,
  MR_Word STATE_VARIABLE_ErrSpecs_0_72,
  MR_Word * STATE_VARIABLE_ErrSpecs_73,
  MR_Word STATE_VARIABLE_WarnSpecs_0_74,
  MR_Word * STATE_VARIABLE_WarnSpecs_75)
{
  MR_bool succeeded;
  MR_Word OldEvalMethod_36;
  MR_Word PFSymNameArity_37;
  MR_Word PredOrFunc_38;
  MR_Word PredSymName_39;
  MR_Word UserArity_40;

  hlds__hlds_proc__proc_info_get_eval_method_2_p_0(ProcInfo0_30, &OldEvalMethod_36);
  hlds__hlds_pred__pred_info_get_pf_sym_name_user_arity_2_p_0(PredInfo0_22, &PFSymNameArity_37);
  PredOrFunc_38 = ((MR_Unsigned) ((MR_hl_field(0, PFSymNameArity_37, 0))) & (MR_Integer) 1);
  PredSymName_39 = ((MR_Word) ((MR_hl_field(0, PFSymNameArity_37, 1))));
  UserArity_40 = ((MR_Word) ((MR_hl_field(0, PFSymNameArity_37, 2))));
  if ((OldEvalMethod_36 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word MaybeDeclaredArgModes_41;

    hlds__hlds_proc__proc_info_get_maybe_declared_argmodes_2_p_0(ProcInfo0_30, &MaybeDeclaredArgModes_41);
    if ((MaybeDeclaredArgModes_41 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String TabledMethodStr_42;
      MR_Integer UserArityInt_43;
      MR_Word SNA_44;
      MR_Word Pieces_45;
      MR_Word Spec_46;
      MR_Word Var_76;
      MR_Word Var_79;
      MR_Word Var_80;
      MR_Word Var_81;
      MR_Word Var_84;
      MR_Word Var_85;
      MR_Word Var_87;
      MR_Word Var_88;
      MR_Word Var_89;
      MR_Word Var_90;
      MR_Word Var_95;
      MR_Word Var_100;
      MR_Word Var_101;

      TabledMethodStr_42 = parse_tree__parse_tree_out_misc__tabled_eval_method_to_pragma_name_1_f_0(TabledMethod_23);
      UserArityInt_43 = (MR_Integer) (UserArity_40);
      {
        SNA_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, SNA_44, 0) = ((MR_Box) (PredSymName_39));
        MR_hl_field(0, SNA_44, 1) = ((MR_Box) (UserArityInt_43));
      }
      {
        Var_80 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_80, 0) = ((MR_Box) ((MR_Unsigned) 36U));
        MR_hl_field(3, Var_80, 1) = ((MR_Box) (TabledMethodStr_42));
      }
      {
        Var_85 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_85, 0) = ((MR_Box) ((MR_Unsigned) 31U));
        MR_hl_field(3, Var_85, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_38));
      }
      {
        Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_84, 0) = ((MR_Box) (Var_85));
        MR_hl_field(1, Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_81, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[64])));
        MR_hl_field(1, Var_81, 1) = ((MR_Box) (Var_84));
      }
      {
        Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_79, 0) = ((MR_Box) (Var_80));
        MR_hl_field(1, Var_79, 1) = ((MR_Box) (Var_81));
      }
      {
        Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_76, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[4])));
        MR_hl_field(1, Var_76, 1) = ((MR_Box) (Var_79));
      }
      {
        Var_90 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_90, 0) = ((MR_Box) ((MR_Unsigned) 14U));
        MR_hl_field(3, Var_90, 1) = ((MR_Box) (SNA_44));
      }
      {
        Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_89, 0) = ((MR_Box) (Var_90));
        MR_hl_field(1, Var_89, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[11])));
      }
      Var_88 = parse_tree__error_spec__color_as_subject_1_f_0(Var_89);
      Var_101 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[91])));
      Var_100 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_101, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[12])));
      Var_95 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[89])), Var_100);
      Var_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_88, Var_95);
      Pieces_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_76, Var_87);
      {
        Spec_46 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_46, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_tabling.set_eval_method_create_aux_preds_for_proc\'/20"));
        MR_hl_field(0, Spec_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_46, 2) = ((MR_Box) ((MR_Unsigned) 48U));
        MR_hl_field(0, Spec_46, 3) = ((MR_Box) (PragmaContext_25));
        MR_hl_field(0, Spec_46, 4) = ((MR_Box) (Pieces_45));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_ErrSpecs_73 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_46));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_72));
      }
      *STATE_VARIABLE_ProcTable_67 = STATE_VARIABLE_ProcTable_0_66;
      *STATE_VARIABLE_ModuleInfo_69 = STATE_VARIABLE_ModuleInfo_0_68;
      *STATE_VARIABLE_QualInfo_71 = STATE_VARIABLE_QualInfo_0_70;
      *STATE_VARIABLE_WarnSpecs_75 = STATE_VARIABLE_WarnSpecs_0_74;
    }
    else
    {
      MR_Word DeclaredArgModes_47 = ((MR_Word) ((MR_hl_field(1, MaybeDeclaredArgModes_41, 0))));
      MR_Word ArgTypes_48;
      MR_Word DeclaredArgTypesModes_49;
      MR_Word Statistics_52;
      MR_Word AllowReset_53;
      MR_Word ArgErrorPieces_56;
      MR_Word EvalMethod_59;
      MR_Word ProcInfo1_60;
      MR_Word ProcInfo_61;
      MR_Word Globals_62;
      MR_Word IsTablingSupported_63;
      MR_Word STATE_VARIABLE_ErrSpecs_2_132;
      MR_Word STATE_VARIABLE_ModuleInfo_1_134;
      MR_Word STATE_VARIABLE_QualInfo_1_135;
      MR_Word STATE_VARIABLE_ErrSpecs_3_136;
      MR_Word STATE_VARIABLE_WarnSpecs_1_137;

      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo0_22, &ArgTypes_48);
      mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgTypes_48, DeclaredArgModes_47, &DeclaredArgTypesModes_49);
      if ((MaybeAttributes_24 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        Statistics_52 = (MR_Integer) 0;
        AllowReset_53 = (MR_Integer) 0;
        hlds__make_hlds__add_pragma_tabling__check_pred_args_against_tabling_4_p_0(STATE_VARIABLE_ModuleInfo_0_68, (MR_Integer) 1, DeclaredArgTypesModes_49, &ArgErrorPieces_56);
      }
      else
      {
        MR_Word Attributes_50 = ((MR_Word) ((MR_hl_field(1, MaybeAttributes_24, 0))));
        MR_Word Strictness_251 = ((MR_Word) ((MR_hl_field(0, Attributes_50, 0))));

        Statistics_52 = ((((MR_Unsigned) ((MR_hl_field(0, Attributes_50, 2))) >> 2)) & (MR_Integer) 1);
        AllowReset_53 = ((((MR_Unsigned) ((MR_hl_field(0, Attributes_50, 2))) >> 1)) & (MR_Integer) 1);
        switch (MR_tag((MR_Word) Strictness_251)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            hlds__make_hlds__add_pragma_tabling__check_pred_args_against_tabling_4_p_0(STATE_VARIABLE_ModuleInfo_0_68, (MR_Integer) 1, DeclaredArgTypesModes_49, &ArgErrorPieces_56);
            break;
          case (MR_Integer) 1:
            {
              MR_Word MaybeArgMethods_54 = ((MR_Word) ((MR_hl_field(1, Strictness_251, 0))));

              hlds__make_hlds__add_pragma_tabling__check_pred_args_against_tabling_methods_5_p_0(STATE_VARIABLE_ModuleInfo_0_68, (MR_Integer) 1, DeclaredArgTypesModes_49, MaybeArgMethods_54, &ArgErrorPieces_56);
            }
            break;
        }
      }
      if ((ArgErrorPieces_56 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_ErrSpecs_2_132 = STATE_VARIABLE_ErrSpecs_0_72;
      else
      {
        MR_Word Var_117;
        MR_Word Var_118;
        MR_Word Var_119;
        MR_Word Var_122;
        MR_Word Var_123;
        MR_Word Var_124;
        MR_Word Var_127;
        MR_String TabledMethodStr_215;
        MR_Word Pieces_216;
        MR_Word Spec_217;

        TabledMethodStr_215 = parse_tree__parse_tree_out_misc__tabled_eval_method_to_pragma_name_1_f_0(TabledMethod_23);
        {
          Var_118 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_118, 0) = ((MR_Box) ((MR_Unsigned) 36U));
          MR_hl_field(3, Var_118, 1) = ((MR_Box) (TabledMethodStr_215));
        }
        {
          Var_123 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_123, 0) = ((MR_Box) ((MR_Unsigned) 18U));
          MR_hl_field(3, Var_123, 1) = ((MR_Box) (PFSymNameArity_37));
        }
        {
          Var_127 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_127, 0) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(1, Var_127, 1) = ((MR_Box) (ArgErrorPieces_56));
        }
        {
          Var_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_124, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[96])));
          MR_hl_field(1, Var_124, 1) = ((MR_Box) (Var_127));
        }
        {
          Var_122 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_122, 0) = ((MR_Box) (Var_123));
          MR_hl_field(1, Var_122, 1) = ((MR_Box) (Var_124));
        }
        {
          Var_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_119, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[64])));
          MR_hl_field(1, Var_119, 1) = ((MR_Box) (Var_122));
        }
        {
          Var_117 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_117, 0) = ((MR_Box) (Var_118));
          MR_hl_field(1, Var_117, 1) = ((MR_Box) (Var_119));
        }
        {
          Pieces_216 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_216, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[95])));
          MR_hl_field(1, Pieces_216, 1) = ((MR_Box) (Var_117));
        }
        {
          Spec_217 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_217, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_tabling.set_eval_method_create_aux_preds_for_proc\'/20"));
          MR_hl_field(0, Spec_217, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_217, 2) = ((MR_Box) ((MR_Unsigned) 48U));
          MR_hl_field(0, Spec_217, 3) = ((MR_Box) (PragmaContext_25));
          MR_hl_field(0, Spec_217, 4) = ((MR_Box) (Pieces_216));
        }
        {
          STATE_VARIABLE_ErrSpecs_2_132 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_ErrSpecs_2_132, 0) = ((MR_Box) (Spec_217));
          MR_hl_field(1, STATE_VARIABLE_ErrSpecs_2_132, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_72));
        }
      }
      {
        EvalMethod_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, EvalMethod_59, 0) = ((MR_Box) (TabledMethod_23));
      }
      hlds__hlds_proc__proc_info_set_eval_method_3_p_0(EvalMethod_59, ProcInfo0_30, &ProcInfo1_60);
      hlds__hlds_proc__proc_info_set_table_attributes_3_p_0(MaybeAttributes_24, ProcInfo1_60, &ProcInfo_61);
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_proc__hlds__hlds_proc__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_29)), ((MR_Box) (ProcInfo_61)), STATE_VARIABLE_ProcTable_0_66, STATE_VARIABLE_ProcTable_67);
      hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_68, &Globals_62);
      libs__globals__current_grade_supports_tabling_3_p_0(Globals_62, TabledMethod_23, &IsTablingSupported_63);
      switch (Statistics_52) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            STATE_VARIABLE_ModuleInfo_1_134 = STATE_VARIABLE_ModuleInfo_0_68;
            STATE_VARIABLE_QualInfo_1_135 = STATE_VARIABLE_QualInfo_0_70;
            STATE_VARIABLE_ErrSpecs_3_136 = STATE_VARIABLE_ErrSpecs_2_132;
            STATE_VARIABLE_WarnSpecs_1_137 = STATE_VARIABLE_WarnSpecs_0_74;
          }
          break;
        case (MR_Integer) 1:
          hlds__make_hlds__add_pragma_tabling__create_tabling_statistics_pred_16_p_0(ProgressStream_21, PredInfo0_22, ProcId_29, SingleProc_28, PragmaContext_25, IsTablingSupported_63, ItemMercuryStatus_26, PredStatus_27, STATE_VARIABLE_ModuleInfo_0_68, &STATE_VARIABLE_ModuleInfo_1_134, STATE_VARIABLE_QualInfo_0_70, &STATE_VARIABLE_QualInfo_1_135, STATE_VARIABLE_ErrSpecs_2_132, &STATE_VARIABLE_ErrSpecs_3_136, STATE_VARIABLE_WarnSpecs_0_74, &STATE_VARIABLE_WarnSpecs_1_137);
          break;
      }
      switch (AllowReset_53) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          hlds__make_hlds__add_pragma_tabling__create_tabling_reset_pred_16_p_0(ProgressStream_21, PredInfo0_22, ProcId_29, SingleProc_28, PragmaContext_25, IsTablingSupported_63, ItemMercuryStatus_26, PredStatus_27, STATE_VARIABLE_ModuleInfo_1_134, STATE_VARIABLE_ModuleInfo_69, STATE_VARIABLE_QualInfo_1_135, STATE_VARIABLE_QualInfo_71, STATE_VARIABLE_ErrSpecs_3_136, STATE_VARIABLE_ErrSpecs_73, STATE_VARIABLE_WarnSpecs_1_137, STATE_VARIABLE_WarnSpecs_75);
          break;
        case (MR_Integer) 0:
          {
            *STATE_VARIABLE_ModuleInfo_69 = STATE_VARIABLE_ModuleInfo_1_134;
            *STATE_VARIABLE_QualInfo_71 = STATE_VARIABLE_QualInfo_1_135;
            *STATE_VARIABLE_ErrSpecs_73 = STATE_VARIABLE_ErrSpecs_3_136;
            *STATE_VARIABLE_WarnSpecs_75 = STATE_VARIABLE_WarnSpecs_1_137;
          }
          break;
      }
    }
  }
  else
  {
    MR_Word OldTabledMethod_64 = ((MR_Word) ((MR_hl_field(1, OldEvalMethod_36, 0))));
    MR_String TabledMethodStr_224;
    MR_Integer UserArityInt_225;
    MR_Word SNA_226;
    MR_Word Pieces_227;
    MR_Word Spec_228;

    TabledMethodStr_224 = parse_tree__parse_tree_out_misc__tabled_eval_method_to_pragma_name_1_f_0(TabledMethod_23);
    UserArityInt_225 = (MR_Integer) (UserArity_40);
    {
      SNA_226 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SNA_226, 0) = ((MR_Box) (PredSymName_39));
      MR_hl_field(0, SNA_226, 1) = ((MR_Box) (UserArityInt_225));
    }
    succeeded = parse_tree__prog_data_pragma____Unify____tabled_eval_method_0_0(OldTabledMethod_64, TabledMethod_23);
    if (succeeded)
    {
      MR_Word Var_142;
      MR_Word Var_145;
      MR_Word Var_146;
      MR_Word Var_147;
      MR_Word Var_148;
      MR_Word Var_153;
      MR_Word Var_154;
      MR_Word Var_155;
      MR_Word Var_158;
      MR_Word Var_159;

      {
        Var_146 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_146, 0) = ((MR_Box) ((MR_Unsigned) 31U));
        MR_hl_field(3, Var_146, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_38));
      }
      {
        Var_148 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_148, 0) = ((MR_Box) ((MR_Unsigned) 14U));
        MR_hl_field(3, Var_148, 1) = ((MR_Box) (SNA_226));
      }
      {
        Var_147 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_147, 0) = ((MR_Box) (Var_148));
        MR_hl_field(1, Var_147, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[98])));
      }
      {
        Var_145 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_145, 0) = ((MR_Box) (Var_146));
        MR_hl_field(1, Var_145, 1) = ((MR_Box) (Var_147));
      }
      {
        Var_142 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_142, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[4])));
        MR_hl_field(1, Var_142, 1) = ((MR_Box) (Var_145));
      }
      {
        Var_159 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_159, 0) = ((MR_Box) (TabledMethodStr_224));
      }
      {
        Var_158 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_158, 0) = ((MR_Box) (Var_159));
        MR_hl_field(1, Var_158, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[101])));
      }
      {
        Var_155 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_155, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[99])));
        MR_hl_field(1, Var_155, 1) = ((MR_Box) (Var_158));
      }
      Var_154 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_155);
      Var_153 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_154, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[103])));
      Pieces_227 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_142, Var_153);
    }
    else
    {
      MR_String OldTabledMethodStr_65;
      MR_Word Var_170;
      MR_Word Var_173;
      MR_Word Var_174;
      MR_Word Var_175;
      MR_Word Var_176;
      MR_Word Var_181;
      MR_Word Var_182;
      MR_Word Var_190;
      MR_Word Var_191;
      MR_Word Var_192;
      MR_Word Var_193;
      MR_Word Var_195;
      MR_Word Var_200;
      MR_Word Var_201;
      MR_Word Var_202;
      MR_Word Var_203;

      OldTabledMethodStr_65 = parse_tree__parse_tree_out_misc__tabled_eval_method_to_pragma_name_1_f_0(OldTabledMethod_64);
      {
        Var_174 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_174, 0) = ((MR_Box) ((MR_Unsigned) 31U));
        MR_hl_field(3, Var_174, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_38));
      }
      {
        Var_176 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_176, 0) = ((MR_Box) ((MR_Unsigned) 14U));
        MR_hl_field(3, Var_176, 1) = ((MR_Box) (SNA_226));
      }
      {
        Var_175 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_175, 0) = ((MR_Box) (Var_176));
        MR_hl_field(1, Var_175, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[98])));
      }
      {
        Var_173 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_173, 0) = ((MR_Box) (Var_174));
        MR_hl_field(1, Var_173, 1) = ((MR_Box) (Var_175));
      }
      {
        Var_170 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_170, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[4])));
        MR_hl_field(1, Var_170, 1) = ((MR_Box) (Var_173));
      }
      Var_182 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[107])));
      {
        Var_193 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_193, 0) = ((MR_Box) (OldTabledMethodStr_65));
      }
      {
        Var_192 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_192, 0) = ((MR_Box) (Var_193));
        MR_hl_field(1, Var_192, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_191 = parse_tree__error_spec__color_as_inconsistent_1_f_0(Var_192);
      {
        Var_203 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_203, 0) = ((MR_Box) (TabledMethodStr_224));
      }
      {
        Var_202 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_202, 0) = ((MR_Box) (Var_203));
        MR_hl_field(1, Var_202, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[54])));
      }
      Var_201 = parse_tree__error_spec__color_as_inconsistent_1_f_0(Var_202);
      Var_200 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_201, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[12])));
      Var_195 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[109])), Var_200);
      Var_190 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_191, Var_195);
      Var_181 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_182, Var_190);
      Pieces_227 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_170, Var_181);
    }
    {
      Spec_228 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_228, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_tabling.set_eval_method_create_aux_preds_for_proc\'/20"));
      MR_hl_field(0, Spec_228, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_228, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(0, Spec_228, 3) = ((MR_Box) (PragmaContext_25));
      MR_hl_field(0, Spec_228, 4) = ((MR_Box) (Pieces_227));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_ErrSpecs_73 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_228));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_72));
    }
    *STATE_VARIABLE_ProcTable_67 = STATE_VARIABLE_ProcTable_0_66;
    *STATE_VARIABLE_ModuleInfo_69 = STATE_VARIABLE_ModuleInfo_0_68;
    *STATE_VARIABLE_QualInfo_71 = STATE_VARIABLE_QualInfo_0_70;
    *STATE_VARIABLE_WarnSpecs_75 = STATE_VARIABLE_WarnSpecs_0_74;
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
            MR_hl_field(1, base, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[129])));
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
        *HeadVar__5_5 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[112]));
    else
    {
      MR_Word Var_131 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word Var_132 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

      if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__5_5 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[114]));
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
              MR_hl_field(1, Var_45, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[118])));
            }
            {
              Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_42, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[115])));
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
            Var_68 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[124])));
            Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_68, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[12])));
            Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[120])), Var_67);
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
                MR_hl_field(1, Var_82, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[118])));
              }
              {
                Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_79, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[115])));
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
              Var_105 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[127])));
              Var_104 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_105, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[12])));
              Var_99 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[120])), Var_104);
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
              MR_hl_field(1, base, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[129])));
            }
          }
        }
      }
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_tabling__create_tabling_reset_pred_16_p_0(
  MR_Word ProgressStream_17,
  MR_Word PredInfo0_18,
  MR_Integer ProcId_19,
  MR_Word SingleProc_20,
  MR_Word PragmaContext_21,
  MR_Word IsTablingSupported_22,
  MR_Word ItemMercuryStatus_23,
  MR_Word PredStatus_24,
  MR_Word STATE_VARIABLE_ModuleInfo_0_64,
  MR_Word * STATE_VARIABLE_ModuleInfo_65,
  MR_Word STATE_VARIABLE_QualInfo_0_66,
  MR_Word * STATE_VARIABLE_QualInfo_67,
  MR_Word STATE_VARIABLE_ErrSpecs_0_68,
  MR_Word * STATE_VARIABLE_ErrSpecs_69,
  MR_Word STATE_VARIABLE_WarnSpecs_0_70,
  MR_Word * STATE_VARIABLE_WarnSpecs_71)
{
  MR_Word PredOrFunc_29;
  MR_Word UserArity_30;
  MR_String PredName_31;
  MR_Word PredModuleName_32;
  MR_Word Transform_33;
  MR_String ResetPredName_34;
  MR_Word ResetPredSymName_35;
  MR_Word TypeAndModeArg1_36;
  MR_Word TypeAndModeArg2_37;
  MR_Word ArgTypesAndMaybeModes_38;
  MR_Word TypeVarSet_39;
  MR_Word InstVarSet_40;
  MR_Word PredSymName_43;
  MR_Word PredSpec_44;
  MR_Word Attrs_45;
  MR_Word MaybeAttrs_46;
  MR_Word PredDecl_47;
  MR_Word PredFormArity_49;
  MR_Word PFSymNameArity_50;
  MR_Word IO0_52;
  MR_Word IO_53;
  MR_Integer Var_73;
  MR_Word Var_74;
  MR_Word Var_75;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Word Var_78;
  MR_Word Var_79;
  MR_Word Var_83;
  MR_Word STATE_VARIABLE_ModuleInfo_1_93;
  MR_Word STATE_VARIABLE_ErrSpecs_1_94;
  MR_Word STATE_VARIABLE_VarSet_1_95;
  MR_Word STATE_VARIABLE_VarSet_2_97;
  MR_Word STATE_VARIABLE_VarSet_3_99;
  MR_Word _MaybePredProcId_48;

  PredOrFunc_29 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo0_18);
  UserArity_30 = hlds__hlds_pred__pred_info_user_arity_1_f_0(PredInfo0_18);
  hlds__hlds_pred__pred_info_get_name_2_p_0(PredInfo0_18, &PredName_31);
  hlds__hlds_pred__pred_info_get_module_name_2_p_0(PredInfo0_18, &PredModuleName_32);
  Var_73 = hlds__pred_proc_id__proc_id_to_int_1_f_0(ProcId_19);
  {
    Transform_33 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Transform_33, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_29));
    MR_hl_field(2, Transform_33, 1) = ((MR_Box) (UserArity_30));
    MR_hl_field(2, Transform_33, 2) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) (SingleProc_20)));
    MR_hl_field(2, Transform_33, 3) = ((MR_Box) (Var_73));
  }
  hlds__pred_name__make_transformed_pred_name_3_p_0(PredName_31, Transform_33, &ResetPredName_34);
  {
    ResetPredSymName_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ResetPredSymName_35, 0) = ((MR_Box) (PredModuleName_32));
    MR_hl_field(1, ResetPredSymName_35, 1) = ((MR_Box) (ResetPredName_34));
  }
  Var_74 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
  Var_75 = parse_tree__prog_mode__di_mode_0_f_0();
  {
    TypeAndModeArg1_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeAndModeArg1_36, 0) = ((MR_Box) (Var_74));
    MR_hl_field(0, TypeAndModeArg1_36, 1) = ((MR_Box) (Var_75));
  }
  Var_76 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
  Var_77 = parse_tree__prog_mode__uo_mode_0_f_0();
  {
    TypeAndModeArg2_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeAndModeArg2_37, 0) = ((MR_Box) (Var_76));
    MR_hl_field(0, TypeAndModeArg2_37, 1) = ((MR_Box) (Var_77));
  }
  {
    Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_79, 0) = ((MR_Box) (TypeAndModeArg2_37));
    MR_hl_field(1, Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_78, 0) = ((MR_Box) (TypeAndModeArg1_36));
    MR_hl_field(1, Var_78, 1) = ((MR_Box) (Var_79));
  }
  {
    ArgTypesAndMaybeModes_38 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, ArgTypesAndMaybeModes_38, 0) = ((MR_Box) (Var_78));
  }
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet_39);
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_40);
  {
    PredSymName_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, PredSymName_43, 0) = ((MR_Box) (PredModuleName_32));
    MR_hl_field(1, PredSymName_43, 1) = ((MR_Box) (PredName_31));
  }
  {
    PredSpec_44 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PredSpec_44, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_29));
    MR_hl_field(0, PredSpec_44, 1) = ((MR_Box) (PredSymName_43));
    MR_hl_field(0, PredSpec_44, 2) = ((MR_Box) (UserArity_30));
  }
  {
    Var_83 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_83, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_83, 1) = ((MR_Box) (PredSpec_44));
    MR_hl_field(3, Var_83, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  Attrs_45 = (MR_Word) (Var_83);
  {
    MaybeAttrs_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MaybeAttrs_46, 0) = ((MR_Box) (Attrs_45));
  }
  {
    PredDecl_47 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PredDecl_47, 0) = ((MR_Box) (ResetPredSymName_35));
    MR_hl_field(0, PredDecl_47, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(0, PredDecl_47, 2) = ((MR_Box) (ArgTypesAndMaybeModes_38));
    MR_hl_field(0, PredDecl_47, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, PredDecl_47, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, PredDecl_47, 5) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_2[4])));
    MR_hl_field(0, PredDecl_47, 6) = ((MR_Box) (MaybeAttrs_46));
    MR_hl_field(0, PredDecl_47, 7) = ((MR_Box) (TypeVarSet_39));
    MR_hl_field(0, PredDecl_47, 8) = ((MR_Box) (InstVarSet_40));
    MR_hl_field(0, PredDecl_47, 9) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, PredDecl_47, 10) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(0, PredDecl_47, 11) = ((MR_Box) (&hlds__make_hlds__add_pragma_tabling_scalar_common_1[110]));
    MR_hl_field(0, PredDecl_47, 12) = ((MR_Box) (PragmaContext_21));
    MR_hl_field(0, PredDecl_47, 13) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  hlds__make_hlds__add_pred__module_add_pred_decl_9_p_0(ItemMercuryStatus_23, PredStatus_24, (MR_Integer) 1, PredDecl_47, &_MaybePredProcId_48, STATE_VARIABLE_ModuleInfo_0_64, &STATE_VARIABLE_ModuleInfo_1_93, STATE_VARIABLE_ErrSpecs_0_68, &STATE_VARIABLE_ErrSpecs_1_94);
  parse_tree__prog_util__user_arity_pred_form_arity_3_p_0(PredOrFunc_29, UserArity_30, &PredFormArity_49);
  {
    PFSymNameArity_50 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PFSymNameArity_50, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_29));
    MR_hl_field(0, PFSymNameArity_50, 1) = ((MR_Box) (PredSymName_43));
    MR_hl_field(0, PFSymNameArity_50, 2) = ((MR_Box) (PredFormArity_49));
  }
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &STATE_VARIABLE_VarSet_1_95);
  mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "IO0", &IO0_52, STATE_VARIABLE_VarSet_1_95, &STATE_VARIABLE_VarSet_2_97);
  mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "IO", &IO_53, STATE_VARIABLE_VarSet_2_97, &STATE_VARIABLE_VarSet_3_99);
  switch (IsTablingSupported_22) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Args_60;
        MR_Word BodyExpr_61;
        MR_Word ResetClauseInfo_62;
        MR_Word Var_127;
        MR_Word Var_128;
        MR_Word Var_129;
        MR_Word Var_135;

        {
          Var_127 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_127, 0) = ((MR_Box) (IO0_52));
          MR_hl_field(1, Var_127, 1) = ((MR_Box) (PragmaContext_21));
        }
        {
          Var_129 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_129, 0) = ((MR_Box) (IO_53));
          MR_hl_field(1, Var_129, 1) = ((MR_Box) (PragmaContext_21));
        }
        {
          Var_128 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_128, 0) = ((MR_Box) (Var_129));
          MR_hl_field(1, Var_128, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Args_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Args_60, 0) = ((MR_Box) (Var_127));
          MR_hl_field(1, Args_60, 1) = ((MR_Box) (Var_128));
        }
        {
          BodyExpr_61 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, BodyExpr_61, 0) = ((MR_Box) (PragmaContext_21));
          MR_hl_field(0, BodyExpr_61, 1) = ((MR_Box) (Var_127));
          MR_hl_field(0, BodyExpr_61, 2) = ((MR_Box) (Var_129));
          MR_hl_field(0, BodyExpr_61, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        {
          Var_135 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_135, 0) = ((MR_Box) (BodyExpr_61));
          MR_hl_field(1, Var_135, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          ResetClauseInfo_62 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ResetClauseInfo_62, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(0, ResetClauseInfo_62, 1) = ((MR_Box) (ResetPredSymName_35));
          MR_hl_field(0, ResetClauseInfo_62, 2) = ((MR_Box) (Args_60));
          MR_hl_field(0, ResetClauseInfo_62, 3) = ((MR_Box) (STATE_VARIABLE_VarSet_3_99));
          MR_hl_field(0, ResetClauseInfo_62, 4) = ((MR_Box) (Var_135));
          MR_hl_field(0, ResetClauseInfo_62, 5) = ((MR_Box) (PragmaContext_21));
          MR_hl_field(0, ResetClauseInfo_62, 6) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        hlds__make_hlds__add_clause__module_add_clause_12_p_0(ProgressStream_17, PredStatus_24, (MR_Word) ((MR_Unsigned) 0U), ResetClauseInfo_62, STATE_VARIABLE_ModuleInfo_1_93, STATE_VARIABLE_ModuleInfo_65, STATE_VARIABLE_QualInfo_0_66, STATE_VARIABLE_QualInfo_67, STATE_VARIABLE_ErrSpecs_1_94, STATE_VARIABLE_ErrSpecs_69, STATE_VARIABLE_WarnSpecs_0_70, STATE_VARIABLE_WarnSpecs_71);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Arg1_54;
        MR_Word Arg2_55;
        MR_String GlobalVarName_56;
        MR_String ResetCode_57;
        MR_Word ResetImpl_58;
        MR_Word ResetFCInfo_59;
        MR_Word Var_101;
        MR_Word Var_104;
        MR_Word STATE_VARIABLE_Attrs_1_106;
        MR_Word STATE_VARIABLE_Attrs_2_109;
        MR_Word STATE_VARIABLE_Attrs_3_111;
        MR_Word STATE_VARIABLE_Attrs_4_113;
        MR_Word STATE_VARIABLE_Attrs_5_115;
        MR_Word Var_118;
        MR_Word Var_120;
        MR_Word Var_121;

        Var_101 = parse_tree__prog_mode__di_mode_0_f_0();
        {
          Arg1_54 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Arg1_54, 0) = ((MR_Box) (IO0_52));
          MR_hl_field(0, Arg1_54, 1) = ((MR_Box) ((MR_String) "_IO0"));
          MR_hl_field(0, Arg1_54, 2) = ((MR_Box) (Var_101));
          MR_hl_field(0, Arg1_54, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        }
        Var_104 = parse_tree__prog_mode__uo_mode_0_f_0();
        {
          Arg2_55 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Arg2_55, 0) = ((MR_Box) (IO_53));
          MR_hl_field(0, Arg2_55, 1) = ((MR_Box) ((MR_String) "_IO"));
          MR_hl_field(0, Arg2_55, 2) = ((MR_Box) (Var_104));
          MR_hl_field(0, Arg2_55, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        }
        STATE_VARIABLE_Attrs_1_106 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 0);
        parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_1_106, &STATE_VARIABLE_Attrs_2_109);
        parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_2_109, &STATE_VARIABLE_Attrs_3_111);
        parse_tree__prog_data_foreign__set_purity_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_3_111, &STATE_VARIABLE_Attrs_4_113);
        parse_tree__prog_data_foreign__set_may_duplicate_3_p_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_2[5])), STATE_VARIABLE_Attrs_4_113, &STATE_VARIABLE_Attrs_5_115);
        GlobalVarName_56 = hlds__make_hlds__add_pragma_tabling__table_info_c_global_var_name_3_f_0(STATE_VARIABLE_ModuleInfo_1_93, PFSymNameArity_50, ProcId_19);
        ResetCode_57 = mercury__string__f_43_43_2_f_0(GlobalVarName_56, (MR_String) ".MR_pt_tablenode.MR_integer = 0;");
        {
          Var_118 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_118, 0) = ((MR_Box) (PragmaContext_21));
        }
        {
          ResetImpl_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ResetImpl_58, 0) = ((MR_Box) (ResetCode_57));
          MR_hl_field(0, ResetImpl_58, 1) = ((MR_Box) (Var_118));
        }
        {
          Var_121 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_121, 0) = ((MR_Box) (Arg2_55));
          MR_hl_field(1, Var_121, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_120 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_120, 0) = ((MR_Box) (Arg1_54));
          MR_hl_field(1, Var_120, 1) = ((MR_Box) (Var_121));
        }
        {
          ResetFCInfo_59 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ResetFCInfo_59, 0) = ((MR_Box) (STATE_VARIABLE_Attrs_5_115));
          MR_hl_field(0, ResetFCInfo_59, 1) = ((MR_Box) (ResetPredSymName_35));
          MR_hl_field(0, ResetFCInfo_59, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(0, ResetFCInfo_59, 3) = ((MR_Box) (Var_120));
          MR_hl_field(0, ResetFCInfo_59, 4) = ((MR_Box) (STATE_VARIABLE_VarSet_3_99));
          MR_hl_field(0, ResetFCInfo_59, 5) = ((MR_Box) (InstVarSet_40));
          MR_hl_field(0, ResetFCInfo_59, 6) = ((MR_Box) (ResetImpl_58));
          MR_hl_field(0, ResetFCInfo_59, 7) = ((MR_Box) (PragmaContext_21));
          MR_hl_field(0, ResetFCInfo_59, 8) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        hlds__make_hlds__add_foreign_proc__add_foreign_proc_10_p_0(ProgressStream_17, ItemMercuryStatus_23, PredStatus_24, ResetFCInfo_59, STATE_VARIABLE_ModuleInfo_1_93, STATE_VARIABLE_ModuleInfo_65, STATE_VARIABLE_ErrSpecs_1_94, STATE_VARIABLE_ErrSpecs_69, STATE_VARIABLE_WarnSpecs_0_70, STATE_VARIABLE_WarnSpecs_71);
        *STATE_VARIABLE_QualInfo_67 = STATE_VARIABLE_QualInfo_0_66;
      }
      break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_tabling__create_tabling_statistics_pred_16_p_0(
  MR_Word ProgressStream_17,
  MR_Word PredInfo0_18,
  MR_Integer ProcId_19,
  MR_Word SingleProc_20,
  MR_Word PragmaContext_21,
  MR_Word IsTablingSupported_22,
  MR_Word ItemMercuryStatus_23,
  MR_Word PredStatus_24,
  MR_Word STATE_VARIABLE_ModuleInfo_0_75,
  MR_Word * STATE_VARIABLE_ModuleInfo_76,
  MR_Word STATE_VARIABLE_QualInfo_0_77,
  MR_Word * STATE_VARIABLE_QualInfo_78,
  MR_Word STATE_VARIABLE_ErrSpecs_0_79,
  MR_Word * STATE_VARIABLE_ErrSpecs_80,
  MR_Word STATE_VARIABLE_WarnSpecs_0_81,
  MR_Word * STATE_VARIABLE_WarnSpecs_82)
{
  MR_Word PredOrFunc_29;
  MR_Word UserArity_30;
  MR_String PredName_31;
  MR_Word PredModuleName_32;
  MR_Word Transform_33;
  MR_String StatsPredName_34;
  MR_Word StatsPredSymName_35;
  MR_Word TableBuiltinModule_36;
  MR_Word StatsTypeName_37;
  MR_Word StatsType_38;
  MR_Word TypeAndModeArg1_39;
  MR_Word TypeAndModeArg2_40;
  MR_Word TypeAndModeArg3_41;
  MR_Word ArgTypesAndMaybeModes_42;
  MR_Word TypeVarSet_43;
  MR_Word InstVarSet_44;
  MR_Word PredSymName_47;
  MR_Word PredSpec_48;
  MR_Word Attrs_49;
  MR_Word MaybeAttrs_50;
  MR_Word PredDecl_51;
  MR_Word PredFormArity_53;
  MR_Word PFSymNameArity_54;
  MR_Word Stats_56;
  MR_Word IO0_57;
  MR_Word IO_58;
  MR_Integer Var_84;
  MR_Word Var_88;
  MR_Word Var_89;
  MR_Word Var_90;
  MR_Word Var_91;
  MR_Word Var_92;
  MR_Word Var_93;
  MR_Word Var_94;
  MR_Word Var_95;
  MR_Word Var_99;
  MR_Word STATE_VARIABLE_ModuleInfo_1_109;
  MR_Word STATE_VARIABLE_ErrSpecs_1_110;
  MR_Word STATE_VARIABLE_VarSet_1_111;
  MR_Word STATE_VARIABLE_VarSet_2_113;
  MR_Word STATE_VARIABLE_VarSet_3_115;
  MR_Word STATE_VARIABLE_VarSet_4_117;
  MR_Word _MaybePredProcId_52;

  PredOrFunc_29 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo0_18);
  UserArity_30 = hlds__hlds_pred__pred_info_user_arity_1_f_0(PredInfo0_18);
  hlds__hlds_pred__pred_info_get_name_2_p_0(PredInfo0_18, &PredName_31);
  hlds__hlds_pred__pred_info_get_module_name_2_p_0(PredInfo0_18, &PredModuleName_32);
  Var_84 = hlds__pred_proc_id__proc_id_to_int_1_f_0(ProcId_19);
  {
    Transform_33 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Transform_33, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_29));
    MR_hl_field(2, Transform_33, 1) = ((MR_Box) (UserArity_30));
    MR_hl_field(2, Transform_33, 2) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) (SingleProc_20)));
    MR_hl_field(2, Transform_33, 3) = ((MR_Box) (Var_84));
  }
  hlds__pred_name__make_transformed_pred_name_3_p_0(PredName_31, Transform_33, &StatsPredName_34);
  {
    StatsPredSymName_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, StatsPredSymName_35, 0) = ((MR_Box) (PredModuleName_32));
    MR_hl_field(1, StatsPredSymName_35, 1) = ((MR_Box) (StatsPredName_34));
  }
  TableBuiltinModule_36 = mdbcomp__builtin_modules__mercury_table_statistics_module_0_f_0();
  {
    StatsTypeName_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, StatsTypeName_37, 0) = ((MR_Box) (TableBuiltinModule_36));
    MR_hl_field(1, StatsTypeName_37, 1) = ((MR_Box) ((MR_String) "proc_table_statistics"));
  }
  {
    StatsType_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, StatsType_38, 0) = ((MR_Box) (StatsTypeName_37));
    MR_hl_field(1, StatsType_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, StatsType_38, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_88 = parse_tree__prog_mode__out_mode_0_f_0();
  {
    TypeAndModeArg1_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeAndModeArg1_39, 0) = ((MR_Box) (StatsType_38));
    MR_hl_field(0, TypeAndModeArg1_39, 1) = ((MR_Box) (Var_88));
  }
  Var_89 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
  Var_90 = parse_tree__prog_mode__di_mode_0_f_0();
  {
    TypeAndModeArg2_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeAndModeArg2_40, 0) = ((MR_Box) (Var_89));
    MR_hl_field(0, TypeAndModeArg2_40, 1) = ((MR_Box) (Var_90));
  }
  Var_91 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
  Var_92 = parse_tree__prog_mode__uo_mode_0_f_0();
  {
    TypeAndModeArg3_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeAndModeArg3_41, 0) = ((MR_Box) (Var_91));
    MR_hl_field(0, TypeAndModeArg3_41, 1) = ((MR_Box) (Var_92));
  }
  {
    Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_95, 0) = ((MR_Box) (TypeAndModeArg3_41));
    MR_hl_field(1, Var_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_94, 0) = ((MR_Box) (TypeAndModeArg2_40));
    MR_hl_field(1, Var_94, 1) = ((MR_Box) (Var_95));
  }
  {
    Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_93, 0) = ((MR_Box) (TypeAndModeArg1_39));
    MR_hl_field(1, Var_93, 1) = ((MR_Box) (Var_94));
  }
  {
    ArgTypesAndMaybeModes_42 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, ArgTypesAndMaybeModes_42, 0) = ((MR_Box) (Var_93));
  }
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet_43);
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_44);
  {
    PredSymName_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, PredSymName_47, 0) = ((MR_Box) (PredModuleName_32));
    MR_hl_field(1, PredSymName_47, 1) = ((MR_Box) (PredName_31));
  }
  {
    PredSpec_48 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PredSpec_48, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_29));
    MR_hl_field(0, PredSpec_48, 1) = ((MR_Box) (PredSymName_47));
    MR_hl_field(0, PredSpec_48, 2) = ((MR_Box) (UserArity_30));
  }
  {
    Var_99 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_99, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_99, 1) = ((MR_Box) (PredSpec_48));
    MR_hl_field(3, Var_99, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  Attrs_49 = (MR_Word) (Var_99);
  {
    MaybeAttrs_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MaybeAttrs_50, 0) = ((MR_Box) (Attrs_49));
  }
  {
    PredDecl_51 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PredDecl_51, 0) = ((MR_Box) (StatsPredSymName_35));
    MR_hl_field(0, PredDecl_51, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(0, PredDecl_51, 2) = ((MR_Box) (ArgTypesAndMaybeModes_42));
    MR_hl_field(0, PredDecl_51, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, PredDecl_51, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, PredDecl_51, 5) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_2[4])));
    MR_hl_field(0, PredDecl_51, 6) = ((MR_Box) (MaybeAttrs_50));
    MR_hl_field(0, PredDecl_51, 7) = ((MR_Box) (TypeVarSet_43));
    MR_hl_field(0, PredDecl_51, 8) = ((MR_Box) (InstVarSet_44));
    MR_hl_field(0, PredDecl_51, 9) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, PredDecl_51, 10) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(0, PredDecl_51, 11) = ((MR_Box) (&hlds__make_hlds__add_pragma_tabling_scalar_common_1[110]));
    MR_hl_field(0, PredDecl_51, 12) = ((MR_Box) (PragmaContext_21));
    MR_hl_field(0, PredDecl_51, 13) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  hlds__make_hlds__add_pred__module_add_pred_decl_9_p_0(ItemMercuryStatus_23, PredStatus_24, (MR_Integer) 1, PredDecl_51, &_MaybePredProcId_52, STATE_VARIABLE_ModuleInfo_0_75, &STATE_VARIABLE_ModuleInfo_1_109, STATE_VARIABLE_ErrSpecs_0_79, &STATE_VARIABLE_ErrSpecs_1_110);
  parse_tree__prog_util__user_arity_pred_form_arity_3_p_0(PredOrFunc_29, UserArity_30, &PredFormArity_53);
  {
    PFSymNameArity_54 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PFSymNameArity_54, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_29));
    MR_hl_field(0, PFSymNameArity_54, 1) = ((MR_Box) (PredSymName_47));
    MR_hl_field(0, PFSymNameArity_54, 2) = ((MR_Box) (PredFormArity_53));
  }
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &STATE_VARIABLE_VarSet_1_111);
  mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "Stats", &Stats_56, STATE_VARIABLE_VarSet_1_111, &STATE_VARIABLE_VarSet_2_113);
  mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "IO0", &IO0_57, STATE_VARIABLE_VarSet_2_113, &STATE_VARIABLE_VarSet_3_115);
  mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "IO", &IO_58, STATE_VARIABLE_VarSet_3_115, &STATE_VARIABLE_VarSet_4_117);
  switch (IsTablingSupported_22) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word DummyStatsFuncSymName_66;
        MR_Word DummyStatsFuncTerm_67;
        MR_Word Args_68;
        MR_Word GetStatsExpr_69;
        MR_Word UpdateIOExpr_70;
        MR_Word GetStatsUpdateIOExpr_71;
        MR_Word BodyExpr_72;
        MR_Word StatsClauseInfo_73;
        MR_Word Var_151;
        MR_Word Var_154;
        MR_Word Var_155;
        MR_Word Var_156;
        MR_Word Var_157;
        MR_Word Var_158;
        MR_Word Var_165;
        MR_Word Var_169;

        Var_151 = mdbcomp__builtin_modules__mercury_table_statistics_module_0_f_0();
        {
          DummyStatsFuncSymName_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, DummyStatsFuncSymName_66, 0) = ((MR_Box) (Var_151));
          MR_hl_field(1, DummyStatsFuncSymName_66, 1) = ((MR_Box) ((MR_String) "dummy_proc_table_statistics"));
        }
        mdbcomp__sym_name__sym_name_to_term_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PragmaContext_21, DummyStatsFuncSymName_66, (MR_Word) ((MR_Unsigned) 0U), &DummyStatsFuncTerm_67);
        {
          Var_154 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_154, 0) = ((MR_Box) (Stats_56));
          MR_hl_field(1, Var_154, 1) = ((MR_Box) (PragmaContext_21));
        }
        {
          Var_156 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_156, 0) = ((MR_Box) (IO0_57));
          MR_hl_field(1, Var_156, 1) = ((MR_Box) (PragmaContext_21));
        }
        {
          Var_158 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_158, 0) = ((MR_Box) (IO_58));
          MR_hl_field(1, Var_158, 1) = ((MR_Box) (PragmaContext_21));
        }
        {
          Var_157 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_157, 0) = ((MR_Box) (Var_158));
          MR_hl_field(1, Var_157, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_155 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_155, 0) = ((MR_Box) (Var_156));
          MR_hl_field(1, Var_155, 1) = ((MR_Box) (Var_157));
        }
        {
          Args_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Args_68, 0) = ((MR_Box) (Var_154));
          MR_hl_field(1, Args_68, 1) = ((MR_Box) (Var_155));
        }
        {
          GetStatsExpr_69 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, GetStatsExpr_69, 0) = ((MR_Box) (PragmaContext_21));
          MR_hl_field(0, GetStatsExpr_69, 1) = ((MR_Box) (Var_154));
          MR_hl_field(0, GetStatsExpr_69, 2) = ((MR_Box) (DummyStatsFuncTerm_67));
          MR_hl_field(0, GetStatsExpr_69, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        {
          UpdateIOExpr_70 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, UpdateIOExpr_70, 0) = ((MR_Box) (PragmaContext_21));
          MR_hl_field(0, UpdateIOExpr_70, 1) = ((MR_Box) (Var_156));
          MR_hl_field(0, UpdateIOExpr_70, 2) = ((MR_Box) (Var_158));
          MR_hl_field(0, UpdateIOExpr_70, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        {
          Var_165 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_165, 0) = ((MR_Box) (UpdateIOExpr_70));
          MR_hl_field(1, Var_165, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          GetStatsUpdateIOExpr_71 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, GetStatsUpdateIOExpr_71, 0) = ((MR_Box) (PragmaContext_21));
          MR_hl_field(2, GetStatsUpdateIOExpr_71, 1) = ((MR_Box) (GetStatsExpr_69));
          MR_hl_field(2, GetStatsUpdateIOExpr_71, 2) = ((MR_Box) (Var_165));
        }
        {
          BodyExpr_72 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, BodyExpr_72, 0) = ((MR_Box) ((MR_Unsigned) 7U));
          MR_hl_field(3, BodyExpr_72, 1) = ((MR_Box) (PragmaContext_21));
          MR_hl_field(3, BodyExpr_72, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(3, BodyExpr_72, 3) = ((MR_Box) (GetStatsUpdateIOExpr_71));
        }
        {
          Var_169 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_169, 0) = ((MR_Box) (BodyExpr_72));
          MR_hl_field(1, Var_169, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          StatsClauseInfo_73 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, StatsClauseInfo_73, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(0, StatsClauseInfo_73, 1) = ((MR_Box) (StatsPredSymName_35));
          MR_hl_field(0, StatsClauseInfo_73, 2) = ((MR_Box) (Args_68));
          MR_hl_field(0, StatsClauseInfo_73, 3) = ((MR_Box) (STATE_VARIABLE_VarSet_4_117));
          MR_hl_field(0, StatsClauseInfo_73, 4) = ((MR_Box) (Var_169));
          MR_hl_field(0, StatsClauseInfo_73, 5) = ((MR_Box) (PragmaContext_21));
          MR_hl_field(0, StatsClauseInfo_73, 6) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        hlds__make_hlds__add_clause__module_add_clause_12_p_0(ProgressStream_17, PredStatus_24, (MR_Word) ((MR_Unsigned) 0U), StatsClauseInfo_73, STATE_VARIABLE_ModuleInfo_1_109, STATE_VARIABLE_ModuleInfo_76, STATE_VARIABLE_QualInfo_0_77, STATE_VARIABLE_QualInfo_78, STATE_VARIABLE_ErrSpecs_1_110, STATE_VARIABLE_ErrSpecs_80, STATE_VARIABLE_WarnSpecs_0_81, STATE_VARIABLE_WarnSpecs_82);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Arg1_59;
        MR_Word Arg2_60;
        MR_Word Arg3_61;
        MR_String Global_62;
        MR_String StatsCode_63;
        MR_Word StatsImpl_64;
        MR_Word StatsFCInfo_65;
        MR_Word Var_119;
        MR_Word Var_122;
        MR_Word Var_125;
        MR_Word STATE_VARIABLE_Attrs_1_127;
        MR_Word STATE_VARIABLE_Attrs_2_130;
        MR_Word STATE_VARIABLE_Attrs_3_132;
        MR_Word STATE_VARIABLE_Attrs_4_134;
        MR_Word STATE_VARIABLE_Attrs_5_136;
        MR_String Var_139;
        MR_Word Var_141;
        MR_Word Var_143;
        MR_Word Var_144;
        MR_Word Var_145;

        Var_119 = parse_tree__prog_mode__out_mode_0_f_0();
        {
          Arg1_59 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Arg1_59, 0) = ((MR_Box) (Stats_56));
          MR_hl_field(0, Arg1_59, 1) = ((MR_Box) ((MR_String) "Stats"));
          MR_hl_field(0, Arg1_59, 2) = ((MR_Box) (Var_119));
          MR_hl_field(0, Arg1_59, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        }
        Var_122 = parse_tree__prog_mode__di_mode_0_f_0();
        {
          Arg2_60 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Arg2_60, 0) = ((MR_Box) (IO0_57));
          MR_hl_field(0, Arg2_60, 1) = ((MR_Box) ((MR_String) "_IO0"));
          MR_hl_field(0, Arg2_60, 2) = ((MR_Box) (Var_122));
          MR_hl_field(0, Arg2_60, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        }
        Var_125 = parse_tree__prog_mode__uo_mode_0_f_0();
        {
          Arg3_61 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Arg3_61, 0) = ((MR_Box) (IO_58));
          MR_hl_field(0, Arg3_61, 1) = ((MR_Box) ((MR_String) "_IO"));
          MR_hl_field(0, Arg3_61, 2) = ((MR_Box) (Var_125));
          MR_hl_field(0, Arg3_61, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        }
        STATE_VARIABLE_Attrs_1_127 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 0);
        parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_1_127, &STATE_VARIABLE_Attrs_2_130);
        parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_2_130, &STATE_VARIABLE_Attrs_3_132);
        parse_tree__prog_data_foreign__set_purity_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_3_132, &STATE_VARIABLE_Attrs_4_134);
        parse_tree__prog_data_foreign__set_may_duplicate_3_p_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_2[5])), STATE_VARIABLE_Attrs_4_134, &STATE_VARIABLE_Attrs_5_136);
        Global_62 = hlds__make_hlds__add_pragma_tabling__table_info_c_global_var_name_3_f_0(STATE_VARIABLE_ModuleInfo_1_109, PFSymNameArity_54, ProcId_19);
        Var_139 = mercury__string__f_43_43_2_f_0(Global_62, (MR_String) ", &Stats);");
        StatsCode_63 = mercury__string__f_43_43_2_f_0((MR_String) "MR_get_tabling_stats(&", Var_139);
        {
          Var_141 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_141, 0) = ((MR_Box) (PragmaContext_21));
        }
        {
          StatsImpl_64 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, StatsImpl_64, 0) = ((MR_Box) (StatsCode_63));
          MR_hl_field(0, StatsImpl_64, 1) = ((MR_Box) (Var_141));
        }
        {
          Var_145 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_145, 0) = ((MR_Box) (Arg3_61));
          MR_hl_field(1, Var_145, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_144 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_144, 0) = ((MR_Box) (Arg2_60));
          MR_hl_field(1, Var_144, 1) = ((MR_Box) (Var_145));
        }
        {
          Var_143 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_143, 0) = ((MR_Box) (Arg1_59));
          MR_hl_field(1, Var_143, 1) = ((MR_Box) (Var_144));
        }
        {
          StatsFCInfo_65 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, StatsFCInfo_65, 0) = ((MR_Box) (STATE_VARIABLE_Attrs_5_136));
          MR_hl_field(0, StatsFCInfo_65, 1) = ((MR_Box) (StatsPredSymName_35));
          MR_hl_field(0, StatsFCInfo_65, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(0, StatsFCInfo_65, 3) = ((MR_Box) (Var_143));
          MR_hl_field(0, StatsFCInfo_65, 4) = ((MR_Box) (STATE_VARIABLE_VarSet_4_117));
          MR_hl_field(0, StatsFCInfo_65, 5) = ((MR_Box) (InstVarSet_44));
          MR_hl_field(0, StatsFCInfo_65, 6) = ((MR_Box) (StatsImpl_64));
          MR_hl_field(0, StatsFCInfo_65, 7) = ((MR_Box) (PragmaContext_21));
          MR_hl_field(0, StatsFCInfo_65, 8) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        hlds__make_hlds__add_foreign_proc__add_foreign_proc_10_p_0(ProgressStream_17, ItemMercuryStatus_23, PredStatus_24, StatsFCInfo_65, STATE_VARIABLE_ModuleInfo_1_109, STATE_VARIABLE_ModuleInfo_76, STATE_VARIABLE_ErrSpecs_1_110, STATE_VARIABLE_ErrSpecs_80, STATE_VARIABLE_WarnSpecs_0_81, STATE_VARIABLE_WarnSpecs_82);
        *STATE_VARIABLE_QualInfo_78 = STATE_VARIABLE_QualInfo_0_77;
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

  succeeded = hlds__make_hlds__add_pragma_tabling__IntroducedFrom__pred__table_info_c_global_var_name__1019__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
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
    MR_hl_field(0, Var_23, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_tabling_scalar_common_5[0]));
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

        hlds__pred_proc_id__proc_id_to_int_2_p_0(ProcId_7, &ProcIdInt_21);
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

static void MR_CALL 
hlds__make_hlds__add_pragma_tabling__record_any_need_for_stratification_4_p_0(
  MR_Word PredId_5,
  MR_Word TabledMethod_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15)
{
  switch (MR_tag((MR_Word) TabledMethod_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_ModuleInfo_15 = STATE_VARIABLE_ModuleInfo_0_14;
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_ModuleInfo_15 = STATE_VARIABLE_ModuleInfo_0_14;
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_ModuleInfo_15 = STATE_VARIABLE_ModuleInfo_0_14;
      break;
    case (MR_Integer) 3:
      {
        MR_Word StratPredIds0_12;
        MR_Word StratPredIds_13;

        hlds__hlds_module__module_info_get_must_be_stratified_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_14, &StratPredIds0_12);
        mercury__set__insert_3_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_id_0), ((MR_Box) (PredId_5)), StratPredIds0_12, &StratPredIds_13);
        hlds__hlds_module__module_info_set_must_be_stratified_preds_3_p_0(StratPredIds_13, STATE_VARIABLE_ModuleInfo_0_14, STATE_VARIABLE_ModuleInfo_15);
      }
      break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_tabling__find_grade_problems_for_tabling_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredId_8,
  MR_Word PragmaContext_9,
  MR_Word TabledMethod_10,
  MR_Word * STATE_VARIABLE_ErrSpecs_28,
  MR_Word * STATE_VARIABLE_WarnSpecs_29)
{
  MR_bool succeeded;
  MR_Word Globals_13;
  MR_Word Target_14;
  MR_Word GC_15;
  MR_Word Parallel_16;
  MR_Word STATE_VARIABLE_ErrSpecs_2_33;
  MR_Word STATE_VARIABLE_WarnSpecs_2_34;
  MR_Word STATE_VARIABLE_ErrSpecs_3_36;
  MR_Word STATE_VARIABLE_WarnSpecs_3_37;
  MR_Word STATE_VARIABLE_ErrSpecs_5_43;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_7, &Globals_13);
  libs__globals__get_target_2_p_0(Globals_13, &Target_14);
  switch (Target_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        STATE_VARIABLE_ErrSpecs_2_33 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_WarnSpecs_2_34 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      hlds__make_hlds__add_pragma_tabling__general_cannot_table_reason_spec_9_p_0(ModuleInfo_7, PredId_8, PragmaContext_9, TabledMethod_10, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_ErrSpecs_2_33, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_WarnSpecs_2_34);
      break;
  }
  libs__globals__get_gc_method_2_p_0(Globals_13, &GC_15);
  switch (GC_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 5:
      hlds__make_hlds__add_pragma_tabling__general_cannot_table_reason_spec_9_p_0(ModuleInfo_7, PredId_8, PragmaContext_9, TabledMethod_10, (MR_Integer) 1, STATE_VARIABLE_ErrSpecs_2_33, &STATE_VARIABLE_ErrSpecs_3_36, STATE_VARIABLE_WarnSpecs_2_34, &STATE_VARIABLE_WarnSpecs_3_37);
      break;
    case (MR_Integer) 0:
      {
        STATE_VARIABLE_ErrSpecs_3_36 = STATE_VARIABLE_ErrSpecs_2_33;
        STATE_VARIABLE_WarnSpecs_3_37 = STATE_VARIABLE_WarnSpecs_2_34;
      }
      break;
    case (MR_Integer) 2:
      {
        STATE_VARIABLE_ErrSpecs_3_36 = STATE_VARIABLE_ErrSpecs_2_33;
        STATE_VARIABLE_WarnSpecs_3_37 = STATE_VARIABLE_WarnSpecs_2_34;
      }
      break;
    case (MR_Integer) 3:
      {
        STATE_VARIABLE_ErrSpecs_3_36 = STATE_VARIABLE_ErrSpecs_2_33;
        STATE_VARIABLE_WarnSpecs_3_37 = STATE_VARIABLE_WarnSpecs_2_34;
      }
      break;
    case (MR_Integer) 4:
      hlds__make_hlds__add_pragma_tabling__general_cannot_table_reason_spec_9_p_0(ModuleInfo_7, PredId_8, PragmaContext_9, TabledMethod_10, (MR_Integer) 2, STATE_VARIABLE_ErrSpecs_2_33, &STATE_VARIABLE_ErrSpecs_3_36, STATE_VARIABLE_WarnSpecs_2_34, &STATE_VARIABLE_WarnSpecs_3_37);
      break;
    case (MR_Integer) 1:
      {
        STATE_VARIABLE_ErrSpecs_3_36 = STATE_VARIABLE_ErrSpecs_2_33;
        STATE_VARIABLE_WarnSpecs_3_37 = STATE_VARIABLE_WarnSpecs_2_34;
      }
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 92, &Parallel_16);
  switch (Parallel_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        STATE_VARIABLE_ErrSpecs_5_43 = STATE_VARIABLE_ErrSpecs_3_36;
        *STATE_VARIABLE_WarnSpecs_29 = STATE_VARIABLE_WarnSpecs_3_37;
      }
      break;
    case (MR_Integer) 1:
      hlds__make_hlds__add_pragma_tabling__general_cannot_table_reason_spec_9_p_0(ModuleInfo_7, PredId_8, PragmaContext_9, TabledMethod_10, (MR_Integer) 3, STATE_VARIABLE_ErrSpecs_3_36, &STATE_VARIABLE_ErrSpecs_5_43, STATE_VARIABLE_WarnSpecs_3_37, STATE_VARIABLE_WarnSpecs_29);
      break;
  }
  switch (MR_tag((MR_Word) TabledMethod_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_ErrSpecs_28 = STATE_VARIABLE_ErrSpecs_5_43;
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_ErrSpecs_28 = STATE_VARIABLE_ErrSpecs_5_43;
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_ErrSpecs_28 = STATE_VARIABLE_ErrSpecs_5_43;
      break;
    case (MR_Integer) 3:
      {
        MR_Word HighLevelCode_18;
        MR_Word UseTrail_20;
        MR_Word ProfileCalls_22;
        MR_Word ProfileDeep_23;
        MR_Word STATE_VARIABLE_ErrSpecs_6_47;
        MR_Word STATE_VARIABLE_ErrSpecs_7_50;

        libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 55, &HighLevelCode_18);
        switch (HighLevelCode_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_ErrSpecs_6_47 = STATE_VARIABLE_ErrSpecs_5_43;
            break;
          case (MR_Integer) 1:
            {
              MR_Word HLCSpec_19;
              MR_Word Pieces_54;

              Pieces_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[80])), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[82])));
              {
                HLCSpec_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, HLCSpec_19, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_tabling.mm_cannot_table_reason_spec\'/3"));
                MR_hl_field(0, HLCSpec_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, HLCSpec_19, 2) = ((MR_Box) ((MR_Unsigned) 116U));
                MR_hl_field(0, HLCSpec_19, 3) = ((MR_Box) (PragmaContext_9));
                MR_hl_field(0, HLCSpec_19, 4) = ((MR_Box) (Pieces_54));
              }
              {
                STATE_VARIABLE_ErrSpecs_6_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_ErrSpecs_6_47, 0) = ((MR_Box) (HLCSpec_19));
                MR_hl_field(1, STATE_VARIABLE_ErrSpecs_6_47, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_5_43));
              }
            }
            break;
        }
        libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 90, &UseTrail_20);
        switch (UseTrail_20) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_ErrSpecs_7_50 = STATE_VARIABLE_ErrSpecs_6_47;
            break;
          case (MR_Integer) 1:
            {
              MR_Word TrailSpec_21;
              MR_Word Pieces_73;

              Pieces_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[80])), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[86])));
              {
                TrailSpec_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, TrailSpec_21, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_tabling.mm_cannot_table_reason_spec\'/3"));
                MR_hl_field(0, TrailSpec_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, TrailSpec_21, 2) = ((MR_Box) ((MR_Unsigned) 116U));
                MR_hl_field(0, TrailSpec_21, 3) = ((MR_Box) (PragmaContext_9));
                MR_hl_field(0, TrailSpec_21, 4) = ((MR_Box) (Pieces_73));
              }
              {
                STATE_VARIABLE_ErrSpecs_7_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_ErrSpecs_7_50, 0) = ((MR_Box) (TrailSpec_21));
                MR_hl_field(1, STATE_VARIABLE_ErrSpecs_7_50, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_6_47));
              }
            }
            break;
        }
        libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 63, &ProfileCalls_22);
        libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 67, &ProfileDeep_23);
        succeeded = (ProfileCalls_22 == (MR_Integer) 1);
        if (!(succeeded))
          succeeded = (ProfileDeep_23 == (MR_Integer) 1);
        if (succeeded)
        {
          MR_Word ProfSpec_24;
          MR_Word Pieces_92;

          Pieces_92 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[80])), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[84])));
          {
            ProfSpec_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ProfSpec_24, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_tabling.mm_cannot_table_reason_spec\'/3"));
            MR_hl_field(0, ProfSpec_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, ProfSpec_24, 2) = ((MR_Box) ((MR_Unsigned) 116U));
            MR_hl_field(0, ProfSpec_24, 3) = ((MR_Box) (PragmaContext_9));
            MR_hl_field(0, ProfSpec_24, 4) = ((MR_Box) (Pieces_92));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_ErrSpecs_28 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (ProfSpec_24));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_7_50));
          }
        }
        else
          *STATE_VARIABLE_ErrSpecs_28 = STATE_VARIABLE_ErrSpecs_7_50;
      }
      break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_tabling__general_cannot_table_reason_spec_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word PredId_11,
  MR_Word PragmaContext_12,
  MR_Word TabledMethod_13,
  MR_Word Reason_14,
  MR_Word STATE_VARIABLE_ErrSpecs_0_26,
  MR_Word * STATE_VARIABLE_ErrSpecs_27,
  MR_Word STATE_VARIABLE_WarnSpecs_0_28,
  MR_Word * STATE_VARIABLE_WarnSpecs_29)
{
  MR_Word ReasonDesc_17;
  MR_Word Var_30 = ((&hlds__make_hlds__add_pragma_tabling_vector_common_4[0 + Reason_14]))->hlds__make_hlds__add_pragma_tabling__vector_common_type_4_0__vct_4_f_0;

  ReasonDesc_17 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_30);
  switch (MR_tag((MR_Word) TabledMethod_13)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      {
        MR_String TabledMethodStr_19;
        MR_Word PredPieces_20;
        MR_Word Pieces_21;
        MR_Word Spec_22;
        MR_Word Var_31;
        MR_Word Var_34;
        MR_Word Var_35;
        MR_Word Var_40;
        MR_Word Var_41;
        MR_Word Var_49;

        TabledMethodStr_19 = parse_tree__parse_tree_out_misc__tabled_eval_method_to_string_1_f_0(TabledMethod_13);
        PredPieces_20 = hlds__hlds_error_util__describe_unqual_pred_name_2_f_0(ModuleInfo_10, PredId_11);
        {
          Var_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_35, 0) = ((MR_Box) ((MR_Unsigned) 36U));
          MR_hl_field(3, Var_35, 1) = ((MR_Box) (TabledMethodStr_19));
        }
        {
          Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_34, 0) = ((MR_Box) (Var_35));
          MR_hl_field(1, Var_34, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[65])));
        }
        {
          Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_31, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[63])));
          MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_34));
        }
        Var_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ReasonDesc_17, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[12])));
        Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[68])), Var_49);
        Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredPieces_20, Var_41);
        Pieces_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_31, Var_40);
        {
          Spec_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_22, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_tabling.general_cannot_table_reason_spec\'/9"));
          MR_hl_field(0, Spec_22, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_2[3])));
          MR_hl_field(0, Spec_22, 2) = ((MR_Box) ((MR_Unsigned) 116U));
          MR_hl_field(0, Spec_22, 3) = ((MR_Box) (PragmaContext_12));
          MR_hl_field(0, Spec_22, 4) = ((MR_Box) (Pieces_21));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_WarnSpecs_29 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_22));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_WarnSpecs_0_28));
        }
        *STATE_VARIABLE_ErrSpecs_27 = STATE_VARIABLE_ErrSpecs_0_26;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_71;
        MR_Word Pieces_92;
        MR_Word Spec_93;

        Var_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ReasonDesc_17, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[12])));
        Pieces_92 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[62])), Var_71);
        {
          Spec_93 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_93, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_tabling.general_cannot_table_reason_spec\'/9"));
          MR_hl_field(0, Spec_93, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_2[3])));
          MR_hl_field(0, Spec_93, 2) = ((MR_Box) ((MR_Unsigned) 116U));
          MR_hl_field(0, Spec_93, 3) = ((MR_Box) (PragmaContext_12));
          MR_hl_field(0, Spec_93, 4) = ((MR_Box) (Pieces_92));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_WarnSpecs_29 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_93));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_WarnSpecs_0_28));
        }
        *STATE_VARIABLE_ErrSpecs_27 = STATE_VARIABLE_ErrSpecs_0_26;
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word Var_84;
        MR_Word Pieces_94;
        MR_Word Spec_95;

        Var_84 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ReasonDesc_17, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[12])));
        Pieces_94 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[70])), Var_84);
        {
          Spec_95 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_95, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_tabling.general_cannot_table_reason_spec\'/9"));
          MR_hl_field(0, Spec_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_95, 2) = ((MR_Box) ((MR_Unsigned) 116U));
          MR_hl_field(0, Spec_95, 3) = ((MR_Box) (PragmaContext_12));
          MR_hl_field(0, Spec_95, 4) = ((MR_Box) (Pieces_94));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_ErrSpecs_27 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_95));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_26));
        }
        *STATE_VARIABLE_WarnSpecs_29 = STATE_VARIABLE_WarnSpecs_0_28;
      }
      break;
  }
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
  MR_Word conv3_STATE_VARIABLE_ModuleInfo_67;
  MR_Word conv2_STATE_VARIABLE_QualInfo_69;
  MR_Word conv1_STATE_VARIABLE_ErrSpecs_71;
  MR_Word conv0_STATE_VARIABLE_WarnSpecs_73;

  hlds__make_hlds__add_pragma_tabling__module_add_pragma_tabled_for_pred_16_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) ((MR_hl_field(0, closure, 8)))), ((MR_Word) ((MR_hl_field(0, closure, 9)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_ModuleInfo_67, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_QualInfo_69, ((MR_Word) (wrapper_arg_6)), &conv1_STATE_VARIABLE_ErrSpecs_71, ((MR_Word) (wrapper_arg_8)), &conv0_STATE_VARIABLE_WarnSpecs_73);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_ModuleInfo_67));
  *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_QualInfo_69));
  *wrapper_arg_7 = ((MR_Box) (conv1_STATE_VARIABLE_ErrSpecs_71));
  *wrapper_arg_9 = ((MR_Box) (conv0_STATE_VARIABLE_WarnSpecs_73));
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
  MR_Word PragmaContext_24 = ((MR_Word) ((MR_hl_field(0, TabledInfo_14, 3))));
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
        hlds__pred_table__predicate_table_search_pf_fqm_n_pfa_6_p_0(PredicateTable0_31, (MR_Integer) 0, PredModuleName_28, PredName_29, PredFormArity_247, &MaybePredId_248);
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
          hlds__make_hlds__add_pred__add_implicit_pred_decl_report_error_14_p_0((MR_Integer) 0, PredModuleName_28, PredName_29, PredFormArity_247, PredStatus_16, (MR_Integer) 0, PragmaContext_24, Origin_222, DescPieces_224, &PredId_225, STATE_VARIABLE_ModuleInfo_0_60, &STATE_VARIABLE_ModuleInfo_1_77, STATE_VARIABLE_ErrSpecs_0_64, &STATE_VARIABLE_ErrSpecs_1_78);
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
        hlds__pred_table__predicate_table_search_pf_fqm_n_pfa_6_p_0(PredicateTable0_31, (MR_Integer) 1, PredModuleName_28, PredName_29, PredFormArity_35, &MaybePredId_37);
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
          hlds__make_hlds__add_pred__add_implicit_pred_decl_report_error_14_p_0((MR_Integer) 1, PredModuleName_28, PredName_29, PredFormArity_35, PredStatus_16, (MR_Integer) 0, PragmaContext_24, Origin_38, DescPieces_40, &PredId_41, STATE_VARIABLE_ModuleInfo_0_60, &STATE_VARIABLE_ModuleInfo_1_77, STATE_VARIABLE_ErrSpecs_0_64, &STATE_VARIABLE_ErrSpecs_1_78);
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
        hlds__make_hlds_error__maybe_warn_about_pfumm_unknown_6_p_0(STATE_VARIABLE_ModuleInfo_0_60, TabledMethodStr_189, PFUMM_26, PredSymName_27, PragmaContext_24, &PFUMMSpecs_43);
        STATE_VARIABLE_WarnSpecs_1_81 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), PFUMMSpecs_43, STATE_VARIABLE_WarnSpecs_0_66);
        hlds__pred_table__predicate_table_lookup_m_n_ua_6_p_0(PredicateTable0_31, (MR_Integer) 0, PredModuleName_28, PredName_29, UserArity_36, &PredIds0_44);
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
          hlds__make_hlds__add_pred__add_implicit_pred_decl_report_error_14_p_0((MR_Integer) 0, PredModuleName_28, PredName_29, PredFormArity_179, PredStatus_16, (MR_Integer) 0, PragmaContext_24, Origin_180, DescPieces_181, &PredId_182, STATE_VARIABLE_ModuleInfo_0_60, &STATE_VARIABLE_ModuleInfo_1_77, STATE_VARIABLE_ErrSpecs_0_64, &STATE_VARIABLE_ErrSpecs_1_78);
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
              MR_hl_field(0, StatsSpec_57, 3) = ((MR_Box) (PragmaContext_24));
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
              MR_hl_field(0, ResetSpec_59, 3) = ((MR_Box) (PragmaContext_24));
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
    Var_173 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_173, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_tabling_scalar_common_3[0]));
    MR_hl_field(0, Var_173, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_tabling__module_add_pragma_tabled_12_p_0_1));
    MR_hl_field(0, Var_173, 2) = ((MR_Box) ((MR_Integer) 7));
    MR_hl_field(0, Var_173, 3) = ((MR_Box) (ProgressStream_13));
    MR_hl_field(0, Var_173, 4) = ((MR_Box) (TabledMethod_21));
    MR_hl_field(0, Var_173, 5) = ((MR_Box) (PFUMM_26));
    MR_hl_field(0, Var_173, 6) = ((MR_Box) (MaybeAttributes_23));
    MR_hl_field(0, Var_173, 7) = ((MR_Box) (PragmaContext_24));
    MR_hl_field(0, Var_173, 8) = ((MR_Box) (ItemMercuryStatus_15));
    MR_hl_field(0, Var_173, 9) = ((MR_Box) (PredStatus_16));
  }
  mercury__list__foldl4_10_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0), (MR_Word) (&hlds__make_hlds__add_pragma_tabling_scalar_common_1[0]), (MR_Word) (&hlds__make_hlds__add_pragma_tabling_scalar_common_1[1]), Var_173, PredIds_42, ((MR_Box) (STATE_VARIABLE_ModuleInfo_1_77)), &conv7_STATE_VARIABLE_ModuleInfo_61, ((MR_Box) (STATE_VARIABLE_QualInfo_0_62)), &conv6_STATE_VARIABLE_QualInfo_63, ((MR_Box) (STATE_VARIABLE_ErrSpecs_4_172)), &conv5_STATE_VARIABLE_ErrSpecs_65, ((MR_Box) (STATE_VARIABLE_WarnSpecs_1_81)), &conv4_STATE_VARIABLE_WarnSpecs_67);
  *STATE_VARIABLE_ModuleInfo_61 = ((MR_Word) (conv7_STATE_VARIABLE_ModuleInfo_61));
  *STATE_VARIABLE_QualInfo_63 = ((MR_Word) (conv6_STATE_VARIABLE_QualInfo_63));
  *STATE_VARIABLE_ErrSpecs_65 = ((MR_Word) (conv5_STATE_VARIABLE_ErrSpecs_65));
  *STATE_VARIABLE_WarnSpecs_67 = ((MR_Word) (conv4_STATE_VARIABLE_WarnSpecs_67));
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_tabling____Unify____general_cannot_table_reason_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__add_pragma_tabling____Unify____general_cannot_table_reason_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_pragma_tabling____Compare____general_cannot_table_reason_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__add_pragma_tabling____Compare____general_cannot_table_reason_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_tabling____Unify____mm_cannot_table_reason_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__add_pragma_tabling____Unify____mm_cannot_table_reason_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_pragma_tabling____Compare____mm_cannot_table_reason_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__add_pragma_tabling____Compare____mm_cannot_table_reason_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__make_hlds__add_pragma_tabling__init(void)
{
}

void mercury__hlds__make_hlds__add_pragma_tabling__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&hlds__make_hlds__add_pragma_tabling__hlds__make_hlds__add_pragma_tabling__type_ctor_info_general_cannot_table_reason_0);
  MR_register_type_ctor_info(&hlds__make_hlds__add_pragma_tabling__hlds__make_hlds__add_pragma_tabling__type_ctor_info_mm_cannot_table_reason_0);
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
