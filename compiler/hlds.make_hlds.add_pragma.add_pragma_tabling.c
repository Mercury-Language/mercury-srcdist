/*
** Automatically generated from `add_pragma_tabling.m'
** by the Mercury compiler,
** version rotd-2018-07-17
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


// :- module hlds.make_hlds.add_pragma.add_pragma_tabling.
// :- implementation.

/*
INIT mercury__hlds__make_hlds__add_pragma__add_pragma_tabling__init
ENDINIT
*/

#include "hlds.make_hlds.add_pragma.add_pragma_tabling.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.foreign.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.add_pred.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_code_util.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_error_util.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_hlds.mih"
#include "hlds.make_hlds_error.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.fact_table.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.llds_out.mih"
#include "ll_backend.rtti_out.mih"
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
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
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
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.mlds.mih"
#include "ml_backend.mlds_to_c_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_constr_util.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_pred.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.add_clause.mih"
#include "hlds.make_hlds.add_foreign_proc.mih"
#include "hlds.make_hlds.add_pragma.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "ll_backend.llds_out.llds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "hlds.make_hlds.add_pragma.add_pragma_type_spec.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_tabling__maybe__pti_maybe_1__plain_mdbcomp__prim_data__type_ctor_info_pred_or_func_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_tabling__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_tabling__maybe__pti_maybe_1__plain_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_tabling__maybe__pti_maybe_1__plain_parse_tree__prog_data_pragma__type_ctor_info_table_attributes_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_tabling__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__IntroducedFrom__pred__table_info_c_global_var_name__648__1_2_p_0(
  MR_Word Target_10,
  MR_Word HeadVar__2_28);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__module_add_pragma_tabled_for_pred_15_p_0(
  MR_Word EvalMethod0_16,
  MR_Word PredName_17,
  MR_Integer Arity0_18,
  MR_Word MaybePredOrFunc_19,
  MR_Word MaybeModes_20,
  MR_Word MaybeAttributes_21,
  MR_Word Context_22,
  MR_Word PredStatus_23,
  MR_Word PredId_24,
  MR_Word STATE_VARIABLE_ModuleInfo_0_65,
  MR_Word * STATE_VARIABLE_ModuleInfo_66,
  MR_Word STATE_VARIABLE_QualInfo_0_67,
  MR_Word * STATE_VARIABLE_QualInfo_68,
  MR_Word STATE_VARIABLE_Specs_0_69,
  MR_Word * STATE_VARIABLE_Specs_70);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__set_eval_method_create_aux_preds_list_15_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Context_2,
  MR_Word SimpleCallId_3,
  MR_Word SingleProc_4,
  MR_Word EvalMethod_5,
  MR_Word MaybeAttributes_6,
  MR_Word PredStatus_7,
  MR_Word STATE_VARIABLE_ProcTable_0_8,
  MR_Word * STATE_VARIABLE_ProcTable_9,
  MR_Word STATE_VARIABLE_ModuleInfo_0_10,
  MR_Word * STATE_VARIABLE_ModuleInfo_11,
  MR_Word STATE_VARIABLE_QualInfo_0_12,
  MR_Word * STATE_VARIABLE_QualInfo_13,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__set_eval_method_create_aux_preds_16_p_0(
  MR_Integer ProcId_17,
  MR_Word ProcInfo0_18,
  MR_Word Context_19,
  MR_Word SimpleCallId_20,
  MR_Word SingleProc_21,
  MR_Word EvalMethod_22,
  MR_Word MaybeAttributes_23,
  MR_Word PredStatus_24,
  MR_Word STATE_VARIABLE_ProcTable_0_48,
  MR_Word * STATE_VARIABLE_ProcTable_49,
  MR_Word STATE_VARIABLE_ModuleInfo_0_50,
  MR_Word * STATE_VARIABLE_ModuleInfo_51,
  MR_Word STATE_VARIABLE_QualInfo_0_52,
  MR_Word * STATE_VARIABLE_QualInfo_53,
  MR_Word STATE_VARIABLE_Specs_0_54,
  MR_Word * STATE_VARIABLE_Specs_55);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__check_pred_args_against_tabling_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2,
  MR_Integer ArgNum_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__check_pred_args_against_tabling_methods_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word ModuleInfo_3,
  MR_Integer ArgNum_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__create_tabling_reset_pred_13_p_0(
  MR_Integer ProcId_14,
  MR_Word Context_15,
  MR_Word SimpleCallId_16,
  MR_Word SingleProc_17,
  MR_Word PredStatus_18,
  MR_Word STATE_VARIABLE_ProcTable_0_50,
  MR_Word * STATE_VARIABLE_ProcTable_51,
  MR_Word STATE_VARIABLE_ModuleInfo_0_52,
  MR_Word * STATE_VARIABLE_ModuleInfo_53,
  MR_Word STATE_VARIABLE_QualInfo_0_54,
  MR_Word * STATE_VARIABLE_QualInfo_55,
  MR_Word STATE_VARIABLE_Specs_0_56,
  MR_Word * STATE_VARIABLE_Specs_57);

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__tabling_reset_pred_name_3_f_0(
  MR_Word SimpleCallId_5,
  MR_Integer ProcId_6,
  MR_Word SingleProc_7);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__create_tabling_statistics_pred_13_p_0(
  MR_Integer ProcId_14,
  MR_Word Context_15,
  MR_Word SimpleCallId_16,
  MR_Word SingleProc_17,
  MR_Word PredStatus_18,
  MR_Word STATE_VARIABLE_ProcTable_0_61,
  MR_Word * STATE_VARIABLE_ProcTable_62,
  MR_Word STATE_VARIABLE_ModuleInfo_0_63,
  MR_Word * STATE_VARIABLE_ModuleInfo_64,
  MR_Word STATE_VARIABLE_QualInfo_0_65,
  MR_Word * STATE_VARIABLE_QualInfo_66,
  MR_Word STATE_VARIABLE_Specs_0_67,
  MR_Word * STATE_VARIABLE_Specs_68);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__table_info_c_global_var_name_3_f_0_1(
  MR_Box closure_arg);

static MR_String MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__table_info_c_global_var_name_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word SimpleCallId_6,
  MR_Integer ProcId_7);

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__tabling_stats_pred_name_3_f_0(
  MR_Word SimpleCallId_5,
  MR_Integer ProcId_6,
  MR_Word SingleProc_7);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__module_add_pragma_tabled_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);


static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[61][2];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_2[1][18];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_3[1][5];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_4[7][1];




static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[61][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "would have an ambiguous name too."))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[1])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "since the compiler-generated statistics predicate"))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[3])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "since the compiler-generated reset predicate"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[3])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[9])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "option to suppress this warning."))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[1])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--no-warn-table-with-inline"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "You can use the"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[16])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "since tabled predicates cannot be inlined."))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[17])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "This inline pragma will be ignored"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[19])))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[21])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[22])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 17)),
    ((MR_Box) ((MR_String) "inline"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[24])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration but also has a"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[26])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[1])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "with no declared modes."))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[1])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "which has no declared modes."))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[1])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[34])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "pragmas specified."))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[1])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Only one kind of tabling pragma may be applied to it."))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[1])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[39])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[41]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: cannot request statistics"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for the ambiguous name"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: cannot request allow_reset"))
  },
  /* row 46 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 47 */
  {
    ((MR_Box) ((MR_String) "too many argument tabling methods specified.")),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 48 */
  {
    ((MR_Box) ((MR_String) "not enough argument tabling methods specified.")),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error in"))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "has duplicate"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "has both"))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: "))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "has a"))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: "))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration for imported"))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration for undeclared mode of"))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_2[1][18] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 15)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_eval_method_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_tabling__maybe__pti_maybe_1__plain_mdbcomp__prim_data__type_ctor_info_pred_or_func_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_tabling__maybe__pti_maybe_1__plain_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_tabling__maybe__pti_maybe_1__plain_parse_tree__prog_data_pragma__type_ctor_info_table_attributes_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_pred_status_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_tabling__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_tabling__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_3[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_compilation_target_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_compilation_target_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_4[7][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row 3 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[47]))
  },
  /* row 4 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[48]))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_tabling__maybe__pti_maybe_1__plain_mdbcomp__prim_data__type_ctor_info_pred_or_func_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_tabling__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_tabling__maybe__pti_maybe_1__plain_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&hlds__make_hlds__add_pragma__add_pragma_tabling__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_tabling__maybe__pti_maybe_1__plain_parse_tree__prog_data_pragma__type_ctor_info_table_attributes_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_table_attributes_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_tabling__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__IntroducedFrom__pred__table_info_c_global_var_name__648__1_2_p_0(
  MR_Word Target_10,
  MR_Word HeadVar__2_28)
{
  {
    MR_bool succeeded = (Target_10 == HeadVar__2_28);

    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__module_add_pragma_tabled_for_pred_15_p_0(
  MR_Word EvalMethod0_16,
  MR_Word PredName_17,
  MR_Integer Arity0_18,
  MR_Word MaybePredOrFunc_19,
  MR_Word MaybeModes_20,
  MR_Word MaybeAttributes_21,
  MR_Word Context_22,
  MR_Word PredStatus_23,
  MR_Word PredId_24,
  MR_Word STATE_VARIABLE_ModuleInfo_0_65,
  MR_Word * STATE_VARIABLE_ModuleInfo_66,
  MR_Word STATE_VARIABLE_QualInfo_0_67,
  MR_Word * STATE_VARIABLE_QualInfo_68,
  MR_Word STATE_VARIABLE_Specs_0_69,
  MR_Word * STATE_VARIABLE_Specs_70)
{
  {
    MR_bool succeeded;
    MR_Word Globals_28;
    MR_Word EvalMethod_31;
    MR_Word PredicateTable_32;
    MR_Word Preds_33;
    MR_Word PredInfo0_34;
    MR_Word PredOrFunc_36;
    MR_Integer Arity_37;
    MR_String EvalMethodStr_38;
    MR_Word VeryVerbose_39;
    MR_Word Markers_41;
    MR_Word SimpleCallId_42;
    MR_Word STATE_VARIABLE_Specs_134_134;
    MR_Box conv0_PredInfo0_34;
    MR_Word WarnTableWithInline_43;
    MR_Word Var_86;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_65, &Globals_28);
    succeeded = ((MR_tag((MR_Word) EvalMethod0_16)) == (MR_Integer) 2);
    if (succeeded)
    {
      {
        MR_Word OwnStacks_30;

        libs__globals__lookup_bool_option_3_p_0(Globals_28, (MR_Integer) 238, &OwnStacks_30);
        switch (OwnStacks_30) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            EvalMethod_31 = (MR_Word) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_4[5]));
            break;
          case (MR_Integer) 1:
            EvalMethod_31 = (MR_Word) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_4[6]));
            break;
        }
      }
    }
    else
      EvalMethod_31 = EvalMethod0_16;
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_65, &PredicateTable_32);
    hlds__pred_table__predicate_table_get_preds_2_p_0(PredicateTable_32, &Preds_33);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), Preds_33, ((MR_Box) (PredId_24)), &conv0_PredInfo0_34);
    PredInfo0_34 = ((MR_Word) (conv0_PredInfo0_34));
    if ((MaybePredOrFunc_19 == (MR_Word) ((MR_Unsigned) 0U)))
      PredOrFunc_36 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo0_34);
    else
      PredOrFunc_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredOrFunc_19, (MR_Integer) 0))));
    parse_tree__prog_util__adjust_func_arity_3_p_0(PredOrFunc_36, Arity0_18, &Arity_37);
    EvalMethodStr_38 = parse_tree__prog_out__eval_method_to_string_1_f_0(EvalMethod_31);
    libs__globals__lookup_bool_option_3_p_0(Globals_28, (MR_Integer) 60, &VeryVerbose_39);
    switch (VeryVerbose_39) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_81;

          mercury__io__write_string_3_p_0((MR_String) "% Processing \140:- pragma ");
          mercury__io__write_string_3_p_0(EvalMethodStr_38);
          mercury__io__write_string_3_p_0((MR_String) "\' for ");
          {
            Var_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (PredName_17));
            MR_hl_field(MR_mktag(0), Var_81, 1) = ((MR_Box) (Arity_37));
          }
          parse_tree__prog_out__write_simple_call_id_4_p_0(PredOrFunc_36, Var_81);
          mercury__io__write_string_3_p_0((MR_String) "...\n");
        }
        break;
    }
    hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo0_34, &Markers_41);
    {
      SimpleCallId_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SimpleCallId_42, 0) = ((MR_Box) (PredOrFunc_36));
      MR_hl_field(MR_mktag(0), SimpleCallId_42, 1) = ((MR_Box) (PredName_17));
      MR_hl_field(MR_mktag(0), SimpleCallId_42, 2) = ((MR_Box) (Arity_37));
    }
    succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_41, (MR_Integer) 7);
    if (succeeded)
    {
      Var_86 = (MR_Integer) 40;
      libs__globals__lookup_bool_option_3_p_0(Globals_28, Var_86, &WarnTableWithInline_43);
      succeeded = (WarnTableWithInline_43 == (MR_Integer) 1);
    }
    if (succeeded)
    {
      MR_Word InlineWarningPieces_44;
      MR_Word InlineWarningMsg_45;
      MR_Word InlineWarningSpec_46;
      MR_Word Var_89;
      MR_Word Var_90;
      MR_Word Var_91;
      MR_Word Var_94;
      MR_Word Var_95;
      MR_Word Var_127;
      MR_Word Var_128;
      MR_Word Var_132;

      {
        Var_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
        MR_hl_field(MR_mktag(3), Var_90, 1) = ((MR_Box) (SimpleCallId_42));
      }
      {
        Var_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
        MR_hl_field(MR_mktag(3), Var_95, 1) = ((MR_Box) (EvalMethodStr_38));
      }
      {
        Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (Var_95));
        MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[28])));
      }
      {
        Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[57])));
        MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) (Var_94));
      }
      {
        Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (Var_90));
        MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (Var_91));
      }
      {
        InlineWarningPieces_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), InlineWarningPieces_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[56])));
        MR_hl_field(MR_mktag(1), InlineWarningPieces_44, 1) = ((MR_Box) (Var_89));
      }
      {
        Var_128 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_128, 0) = ((MR_Box) (InlineWarningPieces_44));
      }
      {
        Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_127, 0) = ((MR_Box) (Var_128));
        MR_hl_field(MR_mktag(1), Var_127, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        InlineWarningMsg_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), InlineWarningMsg_45, 0) = ((MR_Box) (Context_22));
        MR_hl_field(MR_mktag(0), InlineWarningMsg_45, 1) = ((MR_Box) (Var_127));
      }
      {
        Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_132, 0) = ((MR_Box) (InlineWarningMsg_45));
        MR_hl_field(MR_mktag(1), Var_132, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        InlineWarningSpec_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), InlineWarningSpec_46, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(0), InlineWarningSpec_46, 1) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(0), InlineWarningSpec_46, 2) = ((MR_Box) (Var_132));
      }
      {
        STATE_VARIABLE_Specs_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_134_134, 0) = ((MR_Box) (InlineWarningSpec_46));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_134_134, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_69));
      }
    }
    else
      STATE_VARIABLE_Specs_134_134 = STATE_VARIABLE_Specs_0_69;
    succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo0_34);
    if (succeeded)
    {
      MR_Word Pieces_47;
      MR_Word Msg_48;
      MR_Word Spec_49;
      MR_Word Var_137;
      MR_Word Var_138;
      MR_Word Var_139;
      MR_Word Var_142;
      MR_Word Var_143;
      MR_Word Var_150;
      MR_Word Var_151;
      MR_Word Var_155;

      {
        Var_138 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_138, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
        MR_hl_field(MR_mktag(3), Var_138, 1) = ((MR_Box) (EvalMethodStr_38));
      }
      {
        Var_143 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_143, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
        MR_hl_field(MR_mktag(3), Var_143, 1) = ((MR_Box) (SimpleCallId_42));
      }
      {
        Var_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_142, 0) = ((MR_Box) (Var_143));
        MR_hl_field(MR_mktag(1), Var_142, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[30])));
      }
      {
        Var_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_139, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[59])));
        MR_hl_field(MR_mktag(1), Var_139, 1) = ((MR_Box) (Var_142));
      }
      {
        Var_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_137, 0) = ((MR_Box) (Var_138));
        MR_hl_field(MR_mktag(1), Var_137, 1) = ((MR_Box) (Var_139));
      }
      {
        Pieces_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[58])));
        MR_hl_field(MR_mktag(1), Pieces_47, 1) = ((MR_Box) (Var_137));
      }
      {
        Var_151 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_151, 0) = ((MR_Box) (Pieces_47));
      }
      {
        Var_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_150, 0) = ((MR_Box) (Var_151));
        MR_hl_field(MR_mktag(1), Var_150, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Msg_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Msg_48, 0) = ((MR_Box) (Context_22));
        MR_hl_field(MR_mktag(0), Msg_48, 1) = ((MR_Box) (Var_150));
      }
      {
        Var_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_155, 0) = ((MR_Box) (Msg_48));
        MR_hl_field(MR_mktag(1), Var_155, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_49, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_49, 1) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(0), Spec_49, 2) = ((MR_Box) (Var_155));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_70 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_49));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_134_134));
      }
      *STATE_VARIABLE_QualInfo_68 = STATE_VARIABLE_QualInfo_0_67;
      *STATE_VARIABLE_ModuleInfo_66 = STATE_VARIABLE_ModuleInfo_0_65;
    }
    else
    {
      MR_Word NeedsStrat_50;
      MR_Word ProcTable0_53;
      MR_Word ExistingProcs_54;
      MR_Word STATE_VARIABLE_ModuleInfo_158_158;

      NeedsStrat_50 = hlds__hlds_pred__eval_method_needs_stratification_1_f_0(EvalMethod_31);
      switch (NeedsStrat_50) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_ModuleInfo_158_158 = STATE_VARIABLE_ModuleInfo_0_65;
          break;
        case (MR_Integer) 1:
          {
            MR_Word StratPredIds0_51;
            MR_Word StratPredIds_52;

            hlds__hlds_module__module_info_get_must_be_stratified_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_65, &StratPredIds0_51);
            mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_24)), StratPredIds0_51, &StratPredIds_52);
            hlds__hlds_module__module_info_set_must_be_stratified_preds_3_p_0(StratPredIds_52, STATE_VARIABLE_ModuleInfo_0_65, &STATE_VARIABLE_ModuleInfo_158_158);
          }
          break;
      }
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_34, &ProcTable0_53);
      mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_53, &ExistingProcs_54);
      if ((MaybeModes_20 == (MR_Word) ((MR_Unsigned) 0U)))
        if ((ExistingProcs_54 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_165;
          MR_Word Var_166;
          MR_Word Var_167;
          MR_Word Var_170;
          MR_Word Var_171;
          MR_Word Var_178;
          MR_Word Var_179;
          MR_Word Var_183;
          MR_Word Pieces_223;
          MR_Word Msg_224;
          MR_Word Spec_225;

          {
            Var_166 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_166, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
            MR_hl_field(MR_mktag(3), Var_166, 1) = ((MR_Box) (EvalMethodStr_38));
          }
          {
            Var_171 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_171, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
            MR_hl_field(MR_mktag(3), Var_171, 1) = ((MR_Box) (SimpleCallId_42));
          }
          {
            Var_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_170, 0) = ((MR_Box) (Var_171));
            MR_hl_field(MR_mktag(1), Var_170, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[32])));
          }
          {
            Var_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_167, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[50])));
            MR_hl_field(MR_mktag(1), Var_167, 1) = ((MR_Box) (Var_170));
          }
          {
            Var_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_165, 0) = ((MR_Box) (Var_166));
            MR_hl_field(MR_mktag(1), Var_165, 1) = ((MR_Box) (Var_167));
          }
          {
            Pieces_223 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_223, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[58])));
            MR_hl_field(MR_mktag(1), Pieces_223, 1) = ((MR_Box) (Var_165));
          }
          {
            Var_179 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_179, 0) = ((MR_Box) (Pieces_223));
          }
          {
            Var_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_178, 0) = ((MR_Box) (Var_179));
            MR_hl_field(MR_mktag(1), Var_178, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Msg_224 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Msg_224, 0) = ((MR_Box) (Context_22));
            MR_hl_field(MR_mktag(0), Msg_224, 1) = ((MR_Box) (Var_178));
          }
          {
            Var_183 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_183, 0) = ((MR_Box) (Msg_224));
            MR_hl_field(MR_mktag(1), Var_183, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_225 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_225, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_225, 1) = ((MR_Box) ((MR_Unsigned) 16U));
            MR_hl_field(MR_mktag(0), Spec_225, 2) = ((MR_Box) (Var_183));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_70 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_225));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_134_134));
          }
          *STATE_VARIABLE_ModuleInfo_66 = STATE_VARIABLE_ModuleInfo_158_158;
          *STATE_VARIABLE_QualInfo_68 = STATE_VARIABLE_QualInfo_0_67;
        }
        else
        {
          MR_Word ExistingProcsTail_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ExistingProcs_54, (MR_Integer) 1))));
          MR_Word SingleProc_62;
          MR_Word STATE_VARIABLE_ModuleInfo_159_159;
          MR_Word ProcTable_226;
          MR_Word PredInfo_227;

          if ((ExistingProcsTail_61 == (MR_Word) ((MR_Unsigned) 0U)))
            SingleProc_62 = (MR_Integer) 1;
          else
            SingleProc_62 = (MR_Integer) 0;
          hlds__make_hlds__add_pragma__add_pragma_tabling__set_eval_method_create_aux_preds_list_15_p_0(ExistingProcs_54, Context_22, SimpleCallId_42, SingleProc_62, EvalMethod_31, MaybeAttributes_21, PredStatus_23, ProcTable0_53, &ProcTable_226, STATE_VARIABLE_ModuleInfo_158_158, &STATE_VARIABLE_ModuleInfo_159_159, STATE_VARIABLE_QualInfo_0_67, STATE_VARIABLE_QualInfo_68, STATE_VARIABLE_Specs_134_134, STATE_VARIABLE_Specs_70);
          hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_226, PredInfo0_34, &PredInfo_227);
          hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_24, PredInfo_227, STATE_VARIABLE_ModuleInfo_159_159, STATE_VARIABLE_ModuleInfo_66);
        }
      else
      {
        MR_Word Modes_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModes_20, (MR_Integer) 0))));
        MR_Integer ProcId_56;

        succeeded = hlds__hlds_code_util__get_procedure_matching_argmodes_4_p_0(ExistingProcs_54, Modes_55, STATE_VARIABLE_ModuleInfo_158_158, &ProcId_56);
        if (succeeded)
        {
          MR_Word ProcInfo0_57;
          MR_Word ProcTable_58;
          MR_Word PredInfo_59;
          MR_Word STATE_VARIABLE_ModuleInfo_187_187;
          MR_Box conv1_ProcInfo0_57;

          mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_53, ((MR_Box) (ProcId_56)), &conv1_ProcInfo0_57);
          ProcInfo0_57 = ((MR_Word) (conv1_ProcInfo0_57));
          hlds__make_hlds__add_pragma__add_pragma_tabling__set_eval_method_create_aux_preds_16_p_0(ProcId_56, ProcInfo0_57, Context_22, SimpleCallId_42, (MR_Integer) 1, EvalMethod_31, MaybeAttributes_21, PredStatus_23, ProcTable0_53, &ProcTable_58, STATE_VARIABLE_ModuleInfo_158_158, &STATE_VARIABLE_ModuleInfo_187_187, STATE_VARIABLE_QualInfo_0_67, STATE_VARIABLE_QualInfo_68, STATE_VARIABLE_Specs_134_134, STATE_VARIABLE_Specs_70);
          hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_58, PredInfo0_34, &PredInfo_59);
          hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_24, PredInfo_59, STATE_VARIABLE_ModuleInfo_187_187, STATE_VARIABLE_ModuleInfo_66);
        }
        else
        {
          MR_Word Var_193;
          MR_Word Var_194;
          MR_Word Var_195;
          MR_Word Var_198;
          MR_Word Var_199;
          MR_Word Var_206;
          MR_Word Var_207;
          MR_Word Var_211;
          MR_Word Pieces_214;
          MR_Word Msg_215;
          MR_Word Spec_216;

          {
            Var_194 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_194, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
            MR_hl_field(MR_mktag(3), Var_194, 1) = ((MR_Box) (EvalMethodStr_38));
          }
          {
            Var_199 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_199, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
            MR_hl_field(MR_mktag(3), Var_199, 1) = ((MR_Box) (SimpleCallId_42));
          }
          {
            Var_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_198, 0) = ((MR_Box) (Var_199));
            MR_hl_field(MR_mktag(1), Var_198, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[30])));
          }
          {
            Var_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_195, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[60])));
            MR_hl_field(MR_mktag(1), Var_195, 1) = ((MR_Box) (Var_198));
          }
          {
            Var_193 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_193, 0) = ((MR_Box) (Var_194));
            MR_hl_field(MR_mktag(1), Var_193, 1) = ((MR_Box) (Var_195));
          }
          {
            Pieces_214 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_214, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[49])));
            MR_hl_field(MR_mktag(1), Pieces_214, 1) = ((MR_Box) (Var_193));
          }
          {
            Var_207 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_207, 0) = ((MR_Box) (Pieces_214));
          }
          {
            Var_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_206, 0) = ((MR_Box) (Var_207));
            MR_hl_field(MR_mktag(1), Var_206, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Msg_215 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Msg_215, 0) = ((MR_Box) (Context_22));
            MR_hl_field(MR_mktag(0), Msg_215, 1) = ((MR_Box) (Var_206));
          }
          {
            Var_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_211, 0) = ((MR_Box) (Msg_215));
            MR_hl_field(MR_mktag(1), Var_211, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_216 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_216, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_216, 1) = ((MR_Box) ((MR_Unsigned) 16U));
            MR_hl_field(MR_mktag(0), Spec_216, 2) = ((MR_Box) (Var_211));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_70 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_216));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_134_134));
          }
          *STATE_VARIABLE_QualInfo_68 = STATE_VARIABLE_QualInfo_0_67;
          *STATE_VARIABLE_ModuleInfo_66 = STATE_VARIABLE_ModuleInfo_158_158;
        }
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__set_eval_method_create_aux_preds_list_15_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Context_2,
  MR_Word SimpleCallId_3,
  MR_Word SingleProc_4,
  MR_Word EvalMethod_5,
  MR_Word MaybeAttributes_6,
  MR_Word PredStatus_7,
  MR_Word STATE_VARIABLE_ProcTable_0_8,
  MR_Word * STATE_VARIABLE_ProcTable_9,
  MR_Word STATE_VARIABLE_ModuleInfo_0_10,
  MR_Word * STATE_VARIABLE_ModuleInfo_11,
  MR_Word STATE_VARIABLE_QualInfo_0_12,
  MR_Word * STATE_VARIABLE_QualInfo_13,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_15 = STATE_VARIABLE_Specs_0_14;
      *STATE_VARIABLE_QualInfo_13 = STATE_VARIABLE_QualInfo_0_12;
      *STATE_VARIABLE_ModuleInfo_11 = STATE_VARIABLE_ModuleInfo_0_10;
      *STATE_VARIABLE_ProcTable_9 = STATE_VARIABLE_ProcTable_0_8;
    }
    else
    {
      MR_Integer ProcId_34;
      MR_Word ProcInfo0_35;
      MR_Word Rest_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_ProcTable_56_56;
      MR_Word STATE_VARIABLE_ModuleInfo_57_57;
      MR_Word STATE_VARIABLE_QualInfo_58_58;
      MR_Word STATE_VARIABLE_Specs_59_59;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ProcTable_0_8;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_10;
      MR_Word next_value_of_STATE_VARIABLE_QualInfo_0_12;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_14;

      ProcId_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_55, (MR_Integer) 0))));
      ProcInfo0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_55, (MR_Integer) 1))));
      hlds__make_hlds__add_pragma__add_pragma_tabling__set_eval_method_create_aux_preds_16_p_0(ProcId_34, ProcInfo0_35, Context_2, SimpleCallId_3, SingleProc_4, EvalMethod_5, MaybeAttributes_6, PredStatus_7, STATE_VARIABLE_ProcTable_0_8, &STATE_VARIABLE_ProcTable_56_56, STATE_VARIABLE_ModuleInfo_0_10, &STATE_VARIABLE_ModuleInfo_57_57, STATE_VARIABLE_QualInfo_0_12, &STATE_VARIABLE_QualInfo_58_58, STATE_VARIABLE_Specs_0_14, &STATE_VARIABLE_Specs_59_59);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Rest_36;
      next_value_of_STATE_VARIABLE_ProcTable_0_8 = STATE_VARIABLE_ProcTable_56_56;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_10 = STATE_VARIABLE_ModuleInfo_57_57;
      next_value_of_STATE_VARIABLE_QualInfo_0_12 = STATE_VARIABLE_QualInfo_58_58;
      next_value_of_STATE_VARIABLE_Specs_0_14 = STATE_VARIABLE_Specs_59_59;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ProcTable_0_8 = next_value_of_STATE_VARIABLE_ProcTable_0_8;
      STATE_VARIABLE_ModuleInfo_0_10 = next_value_of_STATE_VARIABLE_ModuleInfo_0_10;
      STATE_VARIABLE_QualInfo_0_12 = next_value_of_STATE_VARIABLE_QualInfo_0_12;
      STATE_VARIABLE_Specs_0_14 = next_value_of_STATE_VARIABLE_Specs_0_14;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__set_eval_method_create_aux_preds_16_p_0(
  MR_Integer ProcId_17,
  MR_Word ProcInfo0_18,
  MR_Word Context_19,
  MR_Word SimpleCallId_20,
  MR_Word SingleProc_21,
  MR_Word EvalMethod_22,
  MR_Word MaybeAttributes_23,
  MR_Word PredStatus_24,
  MR_Word STATE_VARIABLE_ProcTable_0_48,
  MR_Word * STATE_VARIABLE_ProcTable_49,
  MR_Word STATE_VARIABLE_ModuleInfo_0_50,
  MR_Word * STATE_VARIABLE_ModuleInfo_51,
  MR_Word STATE_VARIABLE_QualInfo_0_52,
  MR_Word * STATE_VARIABLE_QualInfo_53,
  MR_Word STATE_VARIABLE_Specs_0_54,
  MR_Word * STATE_VARIABLE_Specs_55)
{
  {
    MR_bool succeeded;
    MR_Word OldEvalMethod_29;

    hlds__hlds_pred__proc_info_get_eval_method_2_p_0(ProcInfo0_18, &OldEvalMethod_29);
    succeeded = (OldEvalMethod_29 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      MR_Word MaybeDeclaredArgModes_30;

      hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0(ProcInfo0_18, &MaybeDeclaredArgModes_30);
      if ((MaybeDeclaredArgModes_30 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_String EvalMethodStr_31;
        MR_Word Pieces_32;
        MR_Word Msg_33;
        MR_Word Spec_34;
        MR_Word Var_99;
        MR_Word Var_100;
        MR_Word Var_101;
        MR_Word Var_104;
        MR_Word Var_105;
        MR_Word Var_115;
        MR_Word Var_116;
        MR_Word Var_120;

        EvalMethodStr_31 = parse_tree__prog_out__eval_method_to_string_1_f_0(EvalMethod_22);
        {
          Var_100 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_100, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
          MR_hl_field(MR_mktag(3), Var_100, 1) = ((MR_Box) (EvalMethodStr_31));
        }
        {
          Var_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_105, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
          MR_hl_field(MR_mktag(3), Var_105, 1) = ((MR_Box) (SimpleCallId_20));
        }
        {
          Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (Var_105));
          MR_hl_field(MR_mktag(1), Var_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[35])));
        }
        {
          Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[50])));
          MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) (Var_104));
        }
        {
          Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (Var_100));
          MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) (Var_101));
        }
        {
          Pieces_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[49])));
          MR_hl_field(MR_mktag(1), Pieces_32, 1) = ((MR_Box) (Var_99));
        }
        {
          Var_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_116, 0) = ((MR_Box) (Pieces_32));
        }
        {
          Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (Var_116));
          MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Msg_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Msg_33, 0) = ((MR_Box) (Context_19));
          MR_hl_field(MR_mktag(0), Msg_33, 1) = ((MR_Box) (Var_115));
        }
        {
          Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_120, 0) = ((MR_Box) (Msg_33));
          MR_hl_field(MR_mktag(1), Var_120, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_34, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_34, 1) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(MR_mktag(0), Spec_34, 2) = ((MR_Box) (Var_120));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_55 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_34));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_54));
        }
        *STATE_VARIABLE_ProcTable_49 = STATE_VARIABLE_ProcTable_0_48;
        *STATE_VARIABLE_ModuleInfo_51 = STATE_VARIABLE_ModuleInfo_0_50;
        *STATE_VARIABLE_QualInfo_53 = STATE_VARIABLE_QualInfo_0_52;
      }
      else
      {
        MR_Word DeclaredArgModes_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDeclaredArgModes_30, (MR_Integer) 0))));
        MR_Word Statistics_38;
        MR_Word AllowReset_39;
        MR_Word MaybeError_42;
        MR_Word ProcInfo1_45;
        MR_Word ProcInfo_46;
        MR_Word STATE_VARIABLE_Specs_87_87;
        MR_Word STATE_VARIABLE_ProcTable_88_88;
        MR_Word STATE_VARIABLE_ProcTable_89_89;
        MR_Word STATE_VARIABLE_ModuleInfo_90_90;
        MR_Word STATE_VARIABLE_QualInfo_91_91;
        MR_Word STATE_VARIABLE_Specs_92_92;

        if ((MaybeAttributes_23 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          Statistics_38 = (MR_Integer) 1;
          AllowReset_39 = (MR_Integer) 1;
          hlds__make_hlds__add_pragma__add_pragma_tabling__check_pred_args_against_tabling_4_p_0(DeclaredArgModes_35, STATE_VARIABLE_ModuleInfo_0_50, (MR_Integer) 1, &MaybeError_42);
        }
        else
        {
          MR_Word Attributes_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAttributes_23, (MR_Integer) 0))));
          MR_Word Strictness_199 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Attributes_36, (MR_Integer) 0))));

          Statistics_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Attributes_36, (MR_Integer) 2))));
          AllowReset_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Attributes_36, (MR_Integer) 3))));
          switch (MR_tag((MR_Word) Strictness_199)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                hlds__make_hlds__add_pragma__add_pragma_tabling__check_pred_args_against_tabling_4_p_0(DeclaredArgModes_35, STATE_VARIABLE_ModuleInfo_0_50, (MR_Integer) 1, &MaybeError_42);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word MaybeArgMethods_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Strictness_199, (MR_Integer) 0))));

                hlds__make_hlds__add_pragma__add_pragma_tabling__check_pred_args_against_tabling_methods_5_p_0(DeclaredArgModes_35, MaybeArgMethods_40, STATE_VARIABLE_ModuleInfo_0_50, (MR_Integer) 1, &MaybeError_42);
              }
              break;
          }
        }
        if ((MaybeError_42 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_Specs_87_87 = STATE_VARIABLE_Specs_0_54;
        else
        {
          MR_String ArgMsg_43;
          MR_String ErrorMsg_44;
          MR_Word Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeError_42, (MR_Integer) 0))));
          MR_Word Var_61;
          MR_Word Var_62;
          MR_Word Var_63;
          MR_Word Var_66;
          MR_Word Var_67;
          MR_Word Var_68;
          MR_Word Var_71;
          MR_Word Var_73;
          MR_Word Var_74;
          MR_Word Var_75;
          MR_Word Var_76;
          MR_Word Var_80;
          MR_Word Var_81;
          MR_Word Var_85;
          MR_String EvalMethodStr_169;
          MR_Word Pieces_170;
          MR_Word Msg_171;
          MR_Word Spec_172;

          ArgMsg_43 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_58, (MR_Integer) 0))));
          ErrorMsg_44 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_58, (MR_Integer) 1))));
          EvalMethodStr_169 = parse_tree__prog_out__eval_method_to_string_1_f_0(EvalMethod_22);
          {
            Var_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
            MR_hl_field(MR_mktag(3), Var_62, 1) = ((MR_Box) (EvalMethodStr_169));
          }
          {
            Var_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
            MR_hl_field(MR_mktag(3), Var_67, 1) = ((MR_Box) (SimpleCallId_20));
          }
          {
            Var_74 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_74, 0) = ((MR_Box) (ArgMsg_43));
          }
          {
            Var_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), Var_76, 1) = ((MR_Box) (ErrorMsg_44));
          }
          {
            Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (Var_76));
            MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[1])));
          }
          {
            Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Var_74));
            MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (Var_75));
          }
          {
            Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_73));
          }
          {
            Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[52])));
            MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_71));
          }
          {
            Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Var_67));
            MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_68));
          }
          {
            Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[50])));
            MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_66));
          }
          {
            Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Var_62));
            MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_63));
          }
          {
            Pieces_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_170, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[51])));
            MR_hl_field(MR_mktag(1), Pieces_170, 1) = ((MR_Box) (Var_61));
          }
          {
            Var_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (Pieces_170));
          }
          {
            Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (Var_81));
            MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Msg_171 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Msg_171, 0) = ((MR_Box) (Context_19));
            MR_hl_field(MR_mktag(0), Msg_171, 1) = ((MR_Box) (Var_80));
          }
          {
            Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (Msg_171));
            MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_172 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_172, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_172, 1) = ((MR_Box) ((MR_Unsigned) 16U));
            MR_hl_field(MR_mktag(0), Spec_172, 2) = ((MR_Box) (Var_85));
          }
          {
            STATE_VARIABLE_Specs_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_87_87, 0) = ((MR_Box) (Spec_172));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_87_87, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_54));
          }
        }
        hlds__hlds_pred__proc_info_set_eval_method_3_p_0(EvalMethod_22, ProcInfo0_18, &ProcInfo1_45);
        hlds__hlds_pred__proc_info_set_table_attributes_3_p_0(MaybeAttributes_23, ProcInfo1_45, &ProcInfo_46);
        mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_17)), ((MR_Box) (ProcInfo_46)), STATE_VARIABLE_ProcTable_0_48, &STATE_VARIABLE_ProcTable_88_88);
        switch (Statistics_38) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              STATE_VARIABLE_ProcTable_89_89 = STATE_VARIABLE_ProcTable_88_88;
              STATE_VARIABLE_ModuleInfo_90_90 = STATE_VARIABLE_ModuleInfo_0_50;
              STATE_VARIABLE_QualInfo_91_91 = STATE_VARIABLE_QualInfo_0_52;
              STATE_VARIABLE_Specs_92_92 = STATE_VARIABLE_Specs_87_87;
            }
            break;
          case (MR_Integer) 0:
            hlds__make_hlds__add_pragma__add_pragma_tabling__create_tabling_statistics_pred_13_p_0(ProcId_17, Context_19, SimpleCallId_20, SingleProc_21, PredStatus_24, STATE_VARIABLE_ProcTable_88_88, &STATE_VARIABLE_ProcTable_89_89, STATE_VARIABLE_ModuleInfo_0_50, &STATE_VARIABLE_ModuleInfo_90_90, STATE_VARIABLE_QualInfo_0_52, &STATE_VARIABLE_QualInfo_91_91, STATE_VARIABLE_Specs_87_87, &STATE_VARIABLE_Specs_92_92);
            break;
        }
        switch (AllowReset_39) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            hlds__make_hlds__add_pragma__add_pragma_tabling__create_tabling_reset_pred_13_p_0(ProcId_17, Context_19, SimpleCallId_20, SingleProc_21, PredStatus_24, STATE_VARIABLE_ProcTable_89_89, STATE_VARIABLE_ProcTable_49, STATE_VARIABLE_ModuleInfo_90_90, STATE_VARIABLE_ModuleInfo_51, STATE_VARIABLE_QualInfo_91_91, STATE_VARIABLE_QualInfo_53, STATE_VARIABLE_Specs_92_92, STATE_VARIABLE_Specs_55);
            break;
          case (MR_Integer) 1:
            {
              *STATE_VARIABLE_ProcTable_49 = STATE_VARIABLE_ProcTable_89_89;
              *STATE_VARIABLE_ModuleInfo_51 = STATE_VARIABLE_ModuleInfo_90_90;
              *STATE_VARIABLE_QualInfo_53 = STATE_VARIABLE_QualInfo_91_91;
              *STATE_VARIABLE_Specs_55 = STATE_VARIABLE_Specs_92_92;
            }
            break;
        }
      }
    }
    else
    {
      MR_Word Var_161;
      MR_Word Var_162;
      MR_Word Var_166;
      MR_String EvalMethodStr_181;
      MR_Word Pieces_182;
      MR_Word Msg_183;
      MR_Word Spec_184;

      EvalMethodStr_181 = parse_tree__prog_out__eval_method_to_string_1_f_0(EvalMethod_22);
      succeeded = parse_tree__prog_data_pragma____Unify____eval_method_0_0(OldEvalMethod_29, EvalMethod_22);
      if (succeeded)
      {
        MR_Word Var_125;
        MR_Word Var_126;
        MR_Word Var_127;
        MR_Word Var_130;
        MR_Word Var_131;

        {
          Var_126 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_126, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
          MR_hl_field(MR_mktag(3), Var_126, 1) = ((MR_Box) (SimpleCallId_20));
        }
        {
          Var_131 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_131, 0) = ((MR_Box) (EvalMethodStr_181));
        }
        {
          Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_130, 0) = ((MR_Box) (Var_131));
          MR_hl_field(MR_mktag(1), Var_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[37])));
        }
        {
          Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_127, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[53])));
          MR_hl_field(MR_mktag(1), Var_127, 1) = ((MR_Box) (Var_130));
        }
        {
          Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (Var_126));
          MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) (Var_127));
        }
        {
          Pieces_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_182, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[49])));
          MR_hl_field(MR_mktag(1), Pieces_182, 1) = ((MR_Box) (Var_125));
        }
      }
      else
      {
        MR_String OldEvalMethodStr_47;
        MR_Word Var_140;
        MR_Word Var_141;
        MR_Word Var_142;
        MR_Word Var_145;
        MR_Word Var_146;
        MR_Word Var_147;
        MR_Word Var_150;
        MR_Word Var_151;

        OldEvalMethodStr_47 = parse_tree__prog_out__eval_method_to_string_1_f_0(OldEvalMethod_29);
        {
          Var_141 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_141, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
          MR_hl_field(MR_mktag(3), Var_141, 1) = ((MR_Box) (SimpleCallId_20));
        }
        {
          Var_146 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_146, 0) = ((MR_Box) (OldEvalMethodStr_47));
        }
        {
          Var_151 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_151, 0) = ((MR_Box) (EvalMethodStr_181));
        }
        {
          Var_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_150, 0) = ((MR_Box) (Var_151));
          MR_hl_field(MR_mktag(1), Var_150, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[40])));
        }
        {
          Var_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_147, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[55])));
          MR_hl_field(MR_mktag(1), Var_147, 1) = ((MR_Box) (Var_150));
        }
        {
          Var_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_145, 0) = ((MR_Box) (Var_146));
          MR_hl_field(MR_mktag(1), Var_145, 1) = ((MR_Box) (Var_147));
        }
        {
          Var_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_142, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[54])));
          MR_hl_field(MR_mktag(1), Var_142, 1) = ((MR_Box) (Var_145));
        }
        {
          Var_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_140, 0) = ((MR_Box) (Var_141));
          MR_hl_field(MR_mktag(1), Var_140, 1) = ((MR_Box) (Var_142));
        }
        {
          Pieces_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_182, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[49])));
          MR_hl_field(MR_mktag(1), Pieces_182, 1) = ((MR_Box) (Var_140));
        }
      }
      {
        Var_162 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_162, 0) = ((MR_Box) (Pieces_182));
      }
      {
        Var_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_161, 0) = ((MR_Box) (Var_162));
        MR_hl_field(MR_mktag(1), Var_161, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Msg_183 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Msg_183, 0) = ((MR_Box) (Context_19));
        MR_hl_field(MR_mktag(0), Msg_183, 1) = ((MR_Box) (Var_161));
      }
      {
        Var_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_166, 0) = ((MR_Box) (Msg_183));
        MR_hl_field(MR_mktag(1), Var_166, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_184 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_184, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_184, 1) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(0), Spec_184, 2) = ((MR_Box) (Var_166));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_55 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_184));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_54));
      }
      *STATE_VARIABLE_QualInfo_53 = STATE_VARIABLE_QualInfo_0_52;
      *STATE_VARIABLE_ModuleInfo_51 = STATE_VARIABLE_ModuleInfo_0_50;
      *STATE_VARIABLE_ProcTable_49 = STATE_VARIABLE_ProcTable_0_48;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__check_pred_args_against_tabling_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2,
  MR_Integer ArgNum_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Mode_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Modes_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));

      succeeded = check_hlds__mode_util__mode_is_fully_input_2_p_0(ModuleInfo_2, Mode_7);
      if (succeeded)
      {
        MR_Integer Var_12 = (MR_Integer) ((MR_Unsigned) ArgNum_3 + (MR_Unsigned) (MR_Integer) 1);
        MR_Word next_value_of_HeadVar__1_1 = Modes_8;
        MR_Integer next_value_of_ArgNum_3 = Var_12;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        ArgNum_3 = next_value_of_ArgNum_3;
        continue;
      }
      else
      {
        succeeded = check_hlds__mode_util__mode_is_fully_output_2_p_0(ModuleInfo_2, Mode_7);
        if (succeeded)
        {
          MR_Integer Var_14 = (MR_Integer) ((MR_Unsigned) ArgNum_3 + (MR_Unsigned) (MR_Integer) 1);
          MR_Word next_value_of_HeadVar__1_1 = Modes_8;
          MR_Integer next_value_of_ArgNum_3 = Var_14;

          // direct tailcall eliminated
          ;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          ArgNum_3 = next_value_of_ArgNum_3;
          continue;
        }
        else
        {
          MR_Word Var_16;
          MR_String Var_17;
          MR_String Var_19;

          Var_19 = mercury__string__int_to_string_1_f_0(ArgNum_3);
          Var_17 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", Var_19);
          {
            Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (Var_17));
            MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) ((MR_String) "is neither input or output."));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__4_4 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_16));
          }
        }
      }
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__check_pred_args_against_tabling_methods_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word ModuleInfo_3,
  MR_Integer ArgNum_4,
  MR_Word * HeadVar__5_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      else
        *HeadVar__5_5 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_4[3]));
    else
    {
      MR_Word Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__5_5 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_4[4]));
      else
      {
        MR_Word MaybeArgMethod_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word MaybeArgMethods_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));

        succeeded = check_hlds__mode_util__mode_is_fully_input_2_p_0(ModuleInfo_3, Var_67);
        if (succeeded)
          if ((MaybeArgMethod_26 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Var_33;
            MR_String Var_34;
            MR_String Var_36;
            MR_String Var_37;
            MR_String Var_39;
            MR_String Var_41;
            MR_String Var_42;

            Var_37 = mercury__string__int_to_string_1_f_0(ArgNum_4);
            Var_36 = mercury__string__f_43_43_2_f_0(Var_37, (MR_String) ":");
            Var_34 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", Var_36);
            Var_42 = parse_tree__prog_out__maybe_arg_tabling_method_to_string_1_f_0(MaybeArgMethod_26);
            Var_41 = mercury__string__f_43_43_2_f_0(Var_42, (MR_String) "\' is not compatible with input modes.");
            Var_39 = mercury__string__f_43_43_2_f_0((MR_String) "argument tabling method \140", Var_41);
            {
              Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (Var_34));
              MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (Var_39));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__5_5 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_33));
            }
          }
          else
          {
            MR_Integer Var_44 = (MR_Integer) ((MR_Unsigned) ArgNum_4 + (MR_Unsigned) (MR_Integer) 1);
            MR_Word next_value_of_HeadVar__1_1 = Var_66;
            MR_Word next_value_of_HeadVar__2_2 = MaybeArgMethods_27;
            MR_Integer next_value_of_ArgNum_4 = Var_44;

            // direct tailcall eliminated
            ;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            ArgNum_4 = next_value_of_ArgNum_4;
            continue;
          }
        else
        {
          succeeded = check_hlds__mode_util__mode_is_fully_output_2_p_0(ModuleInfo_3, Var_67);
          if (succeeded)
            if ((MaybeArgMethod_26 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Integer Var_46 = (MR_Integer) ((MR_Unsigned) ArgNum_4 + (MR_Unsigned) (MR_Integer) 1);
              MR_Word next_value_of_HeadVar__1_1 = Var_66;
              MR_Word next_value_of_HeadVar__2_2 = MaybeArgMethods_27;
              MR_Integer next_value_of_ArgNum_4 = Var_46;

              // direct tailcall eliminated
              ;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              ArgNum_4 = next_value_of_ArgNum_4;
              continue;
            }
            else
            {
              MR_Word Var_48;
              MR_String Var_49;
              MR_String Var_51;
              MR_String Var_52;
              MR_String Var_54;
              MR_String Var_56;
              MR_String Var_57;

              Var_52 = mercury__string__int_to_string_1_f_0(ArgNum_4);
              Var_51 = mercury__string__f_43_43_2_f_0(Var_52, (MR_String) ":");
              Var_49 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", Var_51);
              Var_57 = parse_tree__prog_out__maybe_arg_tabling_method_to_string_1_f_0(MaybeArgMethod_26);
              Var_56 = mercury__string__f_43_43_2_f_0(Var_57, (MR_String) "\' is not compatible with output modes.");
              Var_54 = mercury__string__f_43_43_2_f_0((MR_String) "argument tabling method \140", Var_56);
              {
                Var_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (Var_49));
                MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (Var_54));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__5_5 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_48));
              }
            }
          else
          {
            MR_Word Var_59;
            MR_String Var_60;
            MR_String Var_62;
            MR_String Var_63;

            Var_63 = mercury__string__int_to_string_1_f_0(ArgNum_4);
            Var_62 = mercury__string__f_43_43_2_f_0(Var_63, (MR_String) ":");
            Var_60 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", Var_62);
            {
              Var_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (Var_60));
              MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) ((MR_String) "is neither input or output."));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__5_5 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_59));
            }
          }
        }
      }
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__create_tabling_reset_pred_13_p_0(
  MR_Integer ProcId_14,
  MR_Word Context_15,
  MR_Word SimpleCallId_16,
  MR_Word SingleProc_17,
  MR_Word PredStatus_18,
  MR_Word STATE_VARIABLE_ProcTable_0_50,
  MR_Word * STATE_VARIABLE_ProcTable_51,
  MR_Word STATE_VARIABLE_ModuleInfo_0_52,
  MR_Word * STATE_VARIABLE_ModuleInfo_53,
  MR_Word STATE_VARIABLE_QualInfo_0_54,
  MR_Word * STATE_VARIABLE_QualInfo_55,
  MR_Word STATE_VARIABLE_Specs_0_56,
  MR_Word * STATE_VARIABLE_Specs_57)
{
  {
    MR_Word TypeAndModeArg1_23;
    MR_Word TypeAndModeArg2_24;
    MR_Word TypeAndModeArgs_25;
    MR_Word Origin_26;
    MR_Word TypeVarSet_29;
    MR_Word InstVarSet_30;
    MR_Word ResetPredSymName_32;
    MR_Word Markers_34;
    MR_Word IO0_38;
    MR_Word IO_39;
    MR_Word Globals_40;
    MR_Word IsTablingSupported_41;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word STATE_VARIABLE_ModuleInfo_71_71;
    MR_Word STATE_VARIABLE_Specs_72_72;
    MR_Word STATE_VARIABLE_VarSet_74_74;
    MR_Word STATE_VARIABLE_VarSet_76_76;
    MR_Word STATE_VARIABLE_VarSet_78_78;
    MR_Word Var_35;

    Var_58 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
    Var_59 = parse_tree__prog_mode__di_mode_0_f_0();
    {
      TypeAndModeArg1_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeAndModeArg1_23, 0) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(1), TypeAndModeArg1_23, 1) = ((MR_Box) (Var_59));
    }
    Var_60 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
    Var_61 = parse_tree__prog_mode__uo_mode_0_f_0();
    {
      TypeAndModeArg2_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeAndModeArg2_24, 0) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(1), TypeAndModeArg2_24, 1) = ((MR_Box) (Var_61));
    }
    {
      Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (TypeAndModeArg2_24));
      MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      TypeAndModeArgs_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeAndModeArgs_25, 0) = ((MR_Box) (TypeAndModeArg1_23));
      MR_hl_field(MR_mktag(1), TypeAndModeArgs_25, 1) = ((MR_Box) (Var_62));
    }
    {
      Origin_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Origin_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), Origin_26, 1) = ((MR_Box) (SimpleCallId_16));
      MR_hl_field(MR_mktag(3), Origin_26, 2) = ((MR_Box) ((MR_Integer) 1));
    }
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet_29);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_30);
    ResetPredSymName_32 = hlds__make_hlds__add_pragma__add_pragma_tabling__tabling_reset_pred_name_3_f_0(SimpleCallId_16, ProcId_14, SingleProc_17);
    hlds__hlds_pred__init_markers_1_p_0(&Markers_34);
    hlds__add_pred__module_add_pred_or_func_21_p_0(Origin_26, Context_15, (MR_Integer) -1, (MR_Word) ((MR_Unsigned) 0U), PredStatus_18, (MR_Integer) 1, (MR_Integer) 0, ResetPredSymName_32, TypeVarSet_29, InstVarSet_30, (MR_Word) ((MR_Unsigned) 0U), TypeAndModeArgs_25, (MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[46]), (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_4[0])), (MR_Integer) 0, Markers_34, &Var_35, STATE_VARIABLE_ModuleInfo_0_52, &STATE_VARIABLE_ModuleInfo_71_71, STATE_VARIABLE_Specs_0_56, &STATE_VARIABLE_Specs_72_72);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &STATE_VARIABLE_VarSet_74_74);
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "IO0", &IO0_38, STATE_VARIABLE_VarSet_74_74, &STATE_VARIABLE_VarSet_76_76);
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "IO", &IO_39, STATE_VARIABLE_VarSet_76_76, &STATE_VARIABLE_VarSet_78_78);
    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_71_71, &Globals_40);
    libs__globals__current_grade_supports_tabling_2_p_0(Globals_40, &IsTablingSupported_41);
    switch (IsTablingSupported_41) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Args_48;
          MR_Word BodyExpr_49;
          MR_Word Var_79;
          MR_Word Var_80;
          MR_Word Var_81;
          MR_Word Var_87;

          {
            Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (IO0_38));
            MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (Context_15));
          }
          {
            Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (IO_39));
            MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (Context_15));
          }
          {
            Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (Var_81));
            MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Args_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Args_48, 0) = ((MR_Box) (Var_79));
            MR_hl_field(MR_mktag(1), Args_48, 1) = ((MR_Box) (Var_80));
          }
          {
            BodyExpr_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), BodyExpr_49, 0) = ((MR_Box) (Context_15));
            MR_hl_field(MR_mktag(0), BodyExpr_49, 1) = ((MR_Box) (Var_79));
            MR_hl_field(MR_mktag(0), BodyExpr_49, 2) = ((MR_Box) (Var_81));
            MR_hl_field(MR_mktag(0), BodyExpr_49, 3) = ((MR_Box) ((MR_Integer) 0));
          }
          {
            Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (BodyExpr_49));
          }
          hlds__make_hlds__add_clause__module_add_clause_15_p_0(STATE_VARIABLE_VarSet_78_78, (MR_Integer) 0, ResetPredSymName_32, Args_48, Var_87, PredStatus_18, Context_15, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 12U), STATE_VARIABLE_ModuleInfo_71_71, STATE_VARIABLE_ModuleInfo_53, STATE_VARIABLE_QualInfo_0_54, STATE_VARIABLE_QualInfo_55, STATE_VARIABLE_Specs_72_72, STATE_VARIABLE_Specs_57);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Arg1_42;
          MR_Word Arg2_43;
          MR_String GlobalVarName_44;
          MR_String ResetCode_45;
          MR_Word ResetImpl_46;
          MR_Word ResetPragmaFCInfo_47;
          MR_Word Var_94;
          MR_Word Var_97;
          MR_Word STATE_VARIABLE_Attrs_99_99;
          MR_Word STATE_VARIABLE_Attrs_102_102;
          MR_Word STATE_VARIABLE_Attrs_104_104;
          MR_Word STATE_VARIABLE_Attrs_106_106;
          MR_Word STATE_VARIABLE_Attrs_108_108;
          MR_Word Var_111;
          MR_Word Var_113;
          MR_Word Var_114;

          Var_94 = parse_tree__prog_mode__di_mode_0_f_0();
          {
            Arg1_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Arg1_42, 0) = ((MR_Box) (IO0_38));
            MR_hl_field(MR_mktag(0), Arg1_42, 1) = ((MR_Box) ((MR_String) "_IO0"));
            MR_hl_field(MR_mktag(0), Arg1_42, 2) = ((MR_Box) (Var_94));
            MR_hl_field(MR_mktag(0), Arg1_42, 3) = ((MR_Box) ((MR_Integer) 1));
          }
          Var_97 = parse_tree__prog_mode__uo_mode_0_f_0();
          {
            Arg2_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Arg2_43, 0) = ((MR_Box) (IO_39));
            MR_hl_field(MR_mktag(0), Arg2_43, 1) = ((MR_Box) ((MR_String) "_IO"));
            MR_hl_field(MR_mktag(0), Arg2_43, 2) = ((MR_Box) (Var_97));
            MR_hl_field(MR_mktag(0), Arg2_43, 3) = ((MR_Box) ((MR_Integer) 1));
          }
          STATE_VARIABLE_Attrs_99_99 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 0);
          parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_99_99, &STATE_VARIABLE_Attrs_102_102);
          parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_102_102, &STATE_VARIABLE_Attrs_104_104);
          parse_tree__prog_data_foreign__set_purity_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_104_104, &STATE_VARIABLE_Attrs_106_106);
          parse_tree__prog_data_foreign__set_may_duplicate_3_p_0((MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_4[1])), STATE_VARIABLE_Attrs_106_106, &STATE_VARIABLE_Attrs_108_108);
          GlobalVarName_44 = hlds__make_hlds__add_pragma__add_pragma_tabling__table_info_c_global_var_name_3_f_0(STATE_VARIABLE_ModuleInfo_71_71, SimpleCallId_16, ProcId_14);
          ResetCode_45 = mercury__string__f_43_43_2_f_0(GlobalVarName_44, (MR_String) ".MR_pt_tablenode.MR_integer = 0;");
          {
            Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (Context_15));
          }
          {
            ResetImpl_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ResetImpl_46, 0) = ((MR_Box) (ResetCode_45));
            MR_hl_field(MR_mktag(0), ResetImpl_46, 1) = ((MR_Box) (Var_111));
          }
          {
            Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (Arg2_43));
            MR_hl_field(MR_mktag(1), Var_114, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_113, 0) = ((MR_Box) (Arg1_42));
            MR_hl_field(MR_mktag(1), Var_113, 1) = ((MR_Box) (Var_114));
          }
          {
            ResetPragmaFCInfo_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ResetPragmaFCInfo_47, 0) = ((MR_Box) (STATE_VARIABLE_Attrs_108_108));
            MR_hl_field(MR_mktag(0), ResetPragmaFCInfo_47, 1) = ((MR_Box) (ResetPredSymName_32));
            MR_hl_field(MR_mktag(0), ResetPragmaFCInfo_47, 2) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), ResetPragmaFCInfo_47, 3) = ((MR_Box) (Var_113));
            MR_hl_field(MR_mktag(0), ResetPragmaFCInfo_47, 4) = ((MR_Box) (STATE_VARIABLE_VarSet_78_78));
            MR_hl_field(MR_mktag(0), ResetPragmaFCInfo_47, 5) = ((MR_Box) (InstVarSet_30));
            MR_hl_field(MR_mktag(0), ResetPragmaFCInfo_47, 6) = ((MR_Box) (ResetImpl_46));
          }
          hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(ResetPragmaFCInfo_47, PredStatus_18, Context_15, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_4[2])), STATE_VARIABLE_ModuleInfo_71_71, STATE_VARIABLE_ModuleInfo_53, STATE_VARIABLE_Specs_72_72, STATE_VARIABLE_Specs_57);
          *STATE_VARIABLE_QualInfo_55 = STATE_VARIABLE_QualInfo_0_54;
        }
        break;
    }
    *STATE_VARIABLE_ProcTable_51 = STATE_VARIABLE_ProcTable_0_50;
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__tabling_reset_pred_name_3_f_0(
  MR_Word SimpleCallId_5,
  MR_Integer ProcId_6,
  MR_Word SingleProc_7)
{
  {
    MR_Word HeadVar__4_4;
    MR_Word PorF_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SimpleCallId_5, (MR_Integer) 0))));
    MR_Word SymName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SimpleCallId_5, (MR_Integer) 1))));
    MR_Integer Arity0_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SimpleCallId_5, (MR_Integer) 2))));
    MR_Integer Arity_17;
    MR_String Var_28;
    MR_String Var_30;

    switch (PorF_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          Arity_17 = (MR_Integer) ((MR_Unsigned) Arity0_16 - (MR_Unsigned) (MR_Integer) 1);
        }
        break;
      case (MR_Integer) 0:
        Arity_17 = Arity0_16;
        break;
    }
    Var_30 = mercury__string__int_to_string_1_f_0(Arity_17);
    Var_28 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_30);
    if (((MR_tag((MR_Word) SymName_15)) == (MR_Integer) 1))
    {
      MR_String Name_19 = ((MR_String) ((MR_hl_field(MR_mktag(1), SymName_15, (MR_Integer) 1))));
      MR_String NewName0_21;
      MR_String NewName_22;
      MR_Word ModuleNameAgain_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_15, (MR_Integer) 0))));
      MR_String Var_25;
      MR_String Var_27;

      Var_27 = mercury__string__f_43_43_2_f_0(Name_19, Var_28);
      Var_25 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_27);
      NewName0_21 = mercury__string__f_43_43_2_f_0((MR_String) "table_reset_for", Var_25);
      switch (SingleProc_7) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Var_31;
            MR_String Var_33;
            MR_Integer Var_34;

            Var_34 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_6);
            Var_33 = mercury__string__int_to_string_1_f_0(Var_34);
            Var_31 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_33);
            NewName_22 = mercury__string__f_43_43_2_f_0(NewName0_21, Var_31);
          }
          break;
        case (MR_Integer) 1:
          NewName_22 = NewName0_21;
          break;
      }
      {
        HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__4_4, 0) = ((MR_Box) (ModuleNameAgain_23));
        MR_hl_field(MR_mktag(1), HeadVar__4_4, 1) = ((MR_Box) (NewName_22));
      }
    }
    else
    {
      MR_String Name_44 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName_15, (MR_Integer) 0))));
      MR_String NewName0_46;
      MR_String NewName_47;
      MR_String Var_48;
      MR_String Var_49;

      Var_49 = mercury__string__f_43_43_2_f_0(Name_44, Var_28);
      Var_48 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_49);
      NewName0_46 = mercury__string__f_43_43_2_f_0((MR_String) "table_reset_for", Var_48);
      switch (SingleProc_7) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Var_36;
            MR_String Var_38;
            MR_Integer Var_39;

            Var_39 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_6);
            Var_38 = mercury__string__int_to_string_1_f_0(Var_39);
            Var_36 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_38);
            NewName_47 = mercury__string__f_43_43_2_f_0(NewName0_46, Var_36);
          }
          break;
        case (MR_Integer) 1:
          NewName_47 = NewName0_46;
          break;
      }
      {
        HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), HeadVar__4_4, 0) = ((MR_Box) (NewName_47));
      }
    }
    return HeadVar__4_4;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__create_tabling_statistics_pred_13_p_0(
  MR_Integer ProcId_14,
  MR_Word Context_15,
  MR_Word SimpleCallId_16,
  MR_Word SingleProc_17,
  MR_Word PredStatus_18,
  MR_Word STATE_VARIABLE_ProcTable_0_61,
  MR_Word * STATE_VARIABLE_ProcTable_62,
  MR_Word STATE_VARIABLE_ModuleInfo_0_63,
  MR_Word * STATE_VARIABLE_ModuleInfo_64,
  MR_Word STATE_VARIABLE_QualInfo_0_65,
  MR_Word * STATE_VARIABLE_QualInfo_66,
  MR_Word STATE_VARIABLE_Specs_0_67,
  MR_Word * STATE_VARIABLE_Specs_68)
{
  {
    MR_Word TableBuiltinModule_23;
    MR_Word StatsTypeName_24;
    MR_Word StatsType_25;
    MR_Word TypeAndModeArg1_26;
    MR_Word TypeAndModeArg2_27;
    MR_Word TypeAndModeArg3_28;
    MR_Word TypeAndModeArgs_29;
    MR_Word Origin_30;
    MR_Word TypeVarSet_33;
    MR_Word InstVarSet_34;
    MR_Word StatsPredSymName_36;
    MR_Word Markers_38;
    MR_Word Stats_42;
    MR_Word IO0_43;
    MR_Word IO_44;
    MR_Word Globals_45;
    MR_Word IsTablingSupported_46;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word STATE_VARIABLE_ModuleInfo_87_87;
    MR_Word STATE_VARIABLE_Specs_88_88;
    MR_Word STATE_VARIABLE_VarSet_90_90;
    MR_Word STATE_VARIABLE_VarSet_92_92;
    MR_Word STATE_VARIABLE_VarSet_94_94;
    MR_Word STATE_VARIABLE_VarSet_96_96;
    MR_Word Var_39;

    TableBuiltinModule_23 = mdbcomp__builtin_modules__mercury_table_statistics_module_0_f_0();
    {
      StatsTypeName_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), StatsTypeName_24, 0) = ((MR_Box) (TableBuiltinModule_23));
      MR_hl_field(MR_mktag(1), StatsTypeName_24, 1) = ((MR_Box) ((MR_String) "proc_table_statistics"));
    }
    {
      StatsType_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), StatsType_25, 0) = ((MR_Box) (StatsTypeName_24));
      MR_hl_field(MR_mktag(1), StatsType_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), StatsType_25, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_72 = parse_tree__prog_mode__out_mode_0_f_0();
    {
      TypeAndModeArg1_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeAndModeArg1_26, 0) = ((MR_Box) (StatsType_25));
      MR_hl_field(MR_mktag(1), TypeAndModeArg1_26, 1) = ((MR_Box) (Var_72));
    }
    Var_73 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
    Var_74 = parse_tree__prog_mode__di_mode_0_f_0();
    {
      TypeAndModeArg2_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeAndModeArg2_27, 0) = ((MR_Box) (Var_73));
      MR_hl_field(MR_mktag(1), TypeAndModeArg2_27, 1) = ((MR_Box) (Var_74));
    }
    Var_75 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
    Var_76 = parse_tree__prog_mode__uo_mode_0_f_0();
    {
      TypeAndModeArg3_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeAndModeArg3_28, 0) = ((MR_Box) (Var_75));
      MR_hl_field(MR_mktag(1), TypeAndModeArg3_28, 1) = ((MR_Box) (Var_76));
    }
    {
      Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (TypeAndModeArg3_28));
      MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (TypeAndModeArg2_27));
      MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_78));
    }
    {
      TypeAndModeArgs_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeAndModeArgs_29, 0) = ((MR_Box) (TypeAndModeArg1_26));
      MR_hl_field(MR_mktag(1), TypeAndModeArgs_29, 1) = ((MR_Box) (Var_77));
    }
    {
      Origin_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Origin_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), Origin_30, 1) = ((MR_Box) (SimpleCallId_16));
      MR_hl_field(MR_mktag(3), Origin_30, 2) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet_33);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_34);
    StatsPredSymName_36 = hlds__make_hlds__add_pragma__add_pragma_tabling__tabling_stats_pred_name_3_f_0(SimpleCallId_16, ProcId_14, SingleProc_17);
    hlds__hlds_pred__init_markers_1_p_0(&Markers_38);
    hlds__add_pred__module_add_pred_or_func_21_p_0(Origin_30, Context_15, (MR_Integer) -1, (MR_Word) ((MR_Unsigned) 0U), PredStatus_18, (MR_Integer) 1, (MR_Integer) 0, StatsPredSymName_36, TypeVarSet_33, InstVarSet_34, (MR_Word) ((MR_Unsigned) 0U), TypeAndModeArgs_29, (MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[46]), (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_4[0])), (MR_Integer) 0, Markers_38, &Var_39, STATE_VARIABLE_ModuleInfo_0_63, &STATE_VARIABLE_ModuleInfo_87_87, STATE_VARIABLE_Specs_0_67, &STATE_VARIABLE_Specs_88_88);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &STATE_VARIABLE_VarSet_90_90);
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "Stats", &Stats_42, STATE_VARIABLE_VarSet_90_90, &STATE_VARIABLE_VarSet_92_92);
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "IO0", &IO0_43, STATE_VARIABLE_VarSet_92_92, &STATE_VARIABLE_VarSet_94_94);
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "IO", &IO_44, STATE_VARIABLE_VarSet_94_94, &STATE_VARIABLE_VarSet_96_96);
    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_87_87, &Globals_45);
    libs__globals__current_grade_supports_tabling_2_p_0(Globals_45, &IsTablingSupported_46);
    switch (IsTablingSupported_46) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word DummyStatsFuncSymName_54;
          MR_Word DummyStatsFuncTerm_55;
          MR_Word Args_56;
          MR_Word GetStatsExpr_57;
          MR_Word UpdateIOExpr_58;
          MR_Word GetStatsUpdateIOExpr_59;
          MR_Word BodyExpr_60;
          MR_Word Var_97;
          MR_Word Var_100;
          MR_Word Var_101;
          MR_Word Var_102;
          MR_Word Var_103;
          MR_Word Var_104;
          MR_Word Var_113;

          Var_97 = mdbcomp__builtin_modules__mercury_table_statistics_module_0_f_0();
          {
            DummyStatsFuncSymName_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), DummyStatsFuncSymName_54, 0) = ((MR_Box) (Var_97));
            MR_hl_field(MR_mktag(1), DummyStatsFuncSymName_54, 1) = ((MR_Box) ((MR_String) "dummy_proc_table_statistics"));
          }
          mdbcomp__sym_name__sym_name_to_term_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Context_15, DummyStatsFuncSymName_54, (MR_Word) ((MR_Unsigned) 0U), &DummyStatsFuncTerm_55);
          {
            Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (Stats_42));
            MR_hl_field(MR_mktag(1), Var_100, 1) = ((MR_Box) (Context_15));
          }
          {
            Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (IO0_43));
            MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) (Context_15));
          }
          {
            Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (IO_44));
            MR_hl_field(MR_mktag(1), Var_104, 1) = ((MR_Box) (Context_15));
          }
          {
            Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (Var_104));
            MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (Var_102));
            MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) (Var_103));
          }
          {
            Args_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Args_56, 0) = ((MR_Box) (Var_100));
            MR_hl_field(MR_mktag(1), Args_56, 1) = ((MR_Box) (Var_101));
          }
          {
            GetStatsExpr_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), GetStatsExpr_57, 0) = ((MR_Box) (Context_15));
            MR_hl_field(MR_mktag(0), GetStatsExpr_57, 1) = ((MR_Box) (Var_100));
            MR_hl_field(MR_mktag(0), GetStatsExpr_57, 2) = ((MR_Box) (DummyStatsFuncTerm_55));
            MR_hl_field(MR_mktag(0), GetStatsExpr_57, 3) = ((MR_Box) ((MR_Integer) 0));
          }
          {
            UpdateIOExpr_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), UpdateIOExpr_58, 0) = ((MR_Box) (Context_15));
            MR_hl_field(MR_mktag(0), UpdateIOExpr_58, 1) = ((MR_Box) (Var_102));
            MR_hl_field(MR_mktag(0), UpdateIOExpr_58, 2) = ((MR_Box) (Var_104));
            MR_hl_field(MR_mktag(0), UpdateIOExpr_58, 3) = ((MR_Box) ((MR_Integer) 0));
          }
          {
            GetStatsUpdateIOExpr_59 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), GetStatsUpdateIOExpr_59, 0) = ((MR_Box) (Context_15));
            MR_hl_field(MR_mktag(2), GetStatsUpdateIOExpr_59, 1) = ((MR_Box) (GetStatsExpr_57));
            MR_hl_field(MR_mktag(2), GetStatsUpdateIOExpr_59, 2) = ((MR_Box) (UpdateIOExpr_58));
          }
          {
            BodyExpr_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), BodyExpr_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
            MR_hl_field(MR_mktag(3), BodyExpr_60, 1) = ((MR_Box) (Context_15));
            MR_hl_field(MR_mktag(3), BodyExpr_60, 2) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), BodyExpr_60, 3) = ((MR_Box) (GetStatsUpdateIOExpr_59));
          }
          {
            Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_113, 0) = ((MR_Box) (BodyExpr_60));
          }
          hlds__make_hlds__add_clause__module_add_clause_15_p_0(STATE_VARIABLE_VarSet_96_96, (MR_Integer) 0, StatsPredSymName_36, Args_56, Var_113, PredStatus_18, Context_15, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 12U), STATE_VARIABLE_ModuleInfo_87_87, STATE_VARIABLE_ModuleInfo_64, STATE_VARIABLE_QualInfo_0_65, STATE_VARIABLE_QualInfo_66, STATE_VARIABLE_Specs_88_88, STATE_VARIABLE_Specs_68);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Arg1_47;
          MR_Word Arg2_48;
          MR_Word Arg3_49;
          MR_String Global_50;
          MR_String StatsCode_51;
          MR_Word StatsImpl_52;
          MR_Word StatsPragmaFCInfo_53;
          MR_Word Var_120;
          MR_Word Var_123;
          MR_Word Var_126;
          MR_Word STATE_VARIABLE_Attrs_128_128;
          MR_Word STATE_VARIABLE_Attrs_131_131;
          MR_Word STATE_VARIABLE_Attrs_133_133;
          MR_Word STATE_VARIABLE_Attrs_135_135;
          MR_Word STATE_VARIABLE_Attrs_137_137;
          MR_String Var_140;
          MR_Word Var_142;
          MR_Word Var_144;
          MR_Word Var_145;
          MR_Word Var_146;

          Var_120 = parse_tree__prog_mode__out_mode_0_f_0();
          {
            Arg1_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Arg1_47, 0) = ((MR_Box) (Stats_42));
            MR_hl_field(MR_mktag(0), Arg1_47, 1) = ((MR_Box) ((MR_String) "Stats"));
            MR_hl_field(MR_mktag(0), Arg1_47, 2) = ((MR_Box) (Var_120));
            MR_hl_field(MR_mktag(0), Arg1_47, 3) = ((MR_Box) ((MR_Integer) 1));
          }
          Var_123 = parse_tree__prog_mode__di_mode_0_f_0();
          {
            Arg2_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Arg2_48, 0) = ((MR_Box) (IO0_43));
            MR_hl_field(MR_mktag(0), Arg2_48, 1) = ((MR_Box) ((MR_String) "_IO0"));
            MR_hl_field(MR_mktag(0), Arg2_48, 2) = ((MR_Box) (Var_123));
            MR_hl_field(MR_mktag(0), Arg2_48, 3) = ((MR_Box) ((MR_Integer) 1));
          }
          Var_126 = parse_tree__prog_mode__uo_mode_0_f_0();
          {
            Arg3_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Arg3_49, 0) = ((MR_Box) (IO_44));
            MR_hl_field(MR_mktag(0), Arg3_49, 1) = ((MR_Box) ((MR_String) "_IO"));
            MR_hl_field(MR_mktag(0), Arg3_49, 2) = ((MR_Box) (Var_126));
            MR_hl_field(MR_mktag(0), Arg3_49, 3) = ((MR_Box) ((MR_Integer) 1));
          }
          STATE_VARIABLE_Attrs_128_128 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 0);
          parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_128_128, &STATE_VARIABLE_Attrs_131_131);
          parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_131_131, &STATE_VARIABLE_Attrs_133_133);
          parse_tree__prog_data_foreign__set_purity_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_133_133, &STATE_VARIABLE_Attrs_135_135);
          parse_tree__prog_data_foreign__set_may_duplicate_3_p_0((MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_4[1])), STATE_VARIABLE_Attrs_135_135, &STATE_VARIABLE_Attrs_137_137);
          Global_50 = hlds__make_hlds__add_pragma__add_pragma_tabling__table_info_c_global_var_name_3_f_0(STATE_VARIABLE_ModuleInfo_87_87, SimpleCallId_16, ProcId_14);
          Var_140 = mercury__string__f_43_43_2_f_0(Global_50, (MR_String) ", &Stats);");
          StatsCode_51 = mercury__string__f_43_43_2_f_0((MR_String) "MR_get_tabling_stats(&", Var_140);
          {
            Var_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_142, 0) = ((MR_Box) (Context_15));
          }
          {
            StatsImpl_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), StatsImpl_52, 0) = ((MR_Box) (StatsCode_51));
            MR_hl_field(MR_mktag(0), StatsImpl_52, 1) = ((MR_Box) (Var_142));
          }
          {
            Var_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_146, 0) = ((MR_Box) (Arg3_49));
            MR_hl_field(MR_mktag(1), Var_146, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_145, 0) = ((MR_Box) (Arg2_48));
            MR_hl_field(MR_mktag(1), Var_145, 1) = ((MR_Box) (Var_146));
          }
          {
            Var_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_144, 0) = ((MR_Box) (Arg1_47));
            MR_hl_field(MR_mktag(1), Var_144, 1) = ((MR_Box) (Var_145));
          }
          {
            StatsPragmaFCInfo_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), StatsPragmaFCInfo_53, 0) = ((MR_Box) (STATE_VARIABLE_Attrs_137_137));
            MR_hl_field(MR_mktag(0), StatsPragmaFCInfo_53, 1) = ((MR_Box) (StatsPredSymName_36));
            MR_hl_field(MR_mktag(0), StatsPragmaFCInfo_53, 2) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), StatsPragmaFCInfo_53, 3) = ((MR_Box) (Var_144));
            MR_hl_field(MR_mktag(0), StatsPragmaFCInfo_53, 4) = ((MR_Box) (STATE_VARIABLE_VarSet_96_96));
            MR_hl_field(MR_mktag(0), StatsPragmaFCInfo_53, 5) = ((MR_Box) (InstVarSet_34));
            MR_hl_field(MR_mktag(0), StatsPragmaFCInfo_53, 6) = ((MR_Box) (StatsImpl_52));
          }
          hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(StatsPragmaFCInfo_53, PredStatus_18, Context_15, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_4[2])), STATE_VARIABLE_ModuleInfo_87_87, STATE_VARIABLE_ModuleInfo_64, STATE_VARIABLE_Specs_88_88, STATE_VARIABLE_Specs_68);
          *STATE_VARIABLE_QualInfo_66 = STATE_VARIABLE_QualInfo_0_65;
        }
        break;
    }
    *STATE_VARIABLE_ProcTable_62 = STATE_VARIABLE_ProcTable_0_61;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__table_info_c_global_var_name_3_f_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__make_hlds__add_pragma__add_pragma_tabling__IntroducedFrom__pred__table_info_c_global_var_name__648__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_String MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__table_info_c_global_var_name_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word SimpleCallId_6,
  MR_Integer ProcId_7)
{
  {
    MR_bool succeeded;
    MR_String VarName_8;
    MR_Word Globals_9;
    MR_Word Target_10;
    MR_Word HighLevelCode_11;
    MR_Word ModuleName_12;
    MR_Word PredOrFunc_13;
    MR_Word PredSymName_14;
    MR_Integer Arity_15;
    MR_String PredName_16;
    MR_Word Var_24;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_5, &Globals_9);
    libs__globals__get_target_2_p_0(Globals_9, &Target_10);
    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__table_info_c_global_var_name_3_f_0_1));
      MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (Target_10));
      MR_hl_field(MR_mktag(0), Var_24, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__require__expect_4_p_0(Var_24, (MR_String) "hlds.make_hlds.add_pragma.add_pragma_tabling", (MR_String) "function \140hlds.make_hlds.add_pragma.add_pragma_tabling.table_info_c_global_var_name\'/3", (MR_String) "memo table statistics and reset are supported only for C");
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 273, &HighLevelCode_11);
    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_5, &ModuleName_12);
    PredOrFunc_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SimpleCallId_6, (MR_Integer) 0))));
    PredSymName_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SimpleCallId_6, (MR_Integer) 1))));
    Arity_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SimpleCallId_6, (MR_Integer) 2))));
    PredName_16 = mdbcomp__sym_name__unqualify_name_1_f_0(PredSymName_14);
    switch (HighLevelCode_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer ProcIdInt_22;
          MR_Word ProcLabel_23;

          hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_7, &ProcIdInt_22);
          {
            ProcLabel_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ProcLabel_23, 0) = ((MR_Box) (ModuleName_12));
            MR_hl_field(MR_mktag(0), ProcLabel_23, 1) = ((MR_Box) (PredOrFunc_13));
            MR_hl_field(MR_mktag(0), ProcLabel_23, 2) = ((MR_Box) (ModuleName_12));
            MR_hl_field(MR_mktag(0), ProcLabel_23, 3) = ((MR_Box) (PredName_16));
            MR_hl_field(MR_mktag(0), ProcLabel_23, 4) = ((MR_Box) (Arity_15));
            MR_hl_field(MR_mktag(0), ProcLabel_23, 5) = ((MR_Box) (ProcIdInt_22));
          }
          VarName_8 = ll_backend__rtti_out__tabling_struct_data_addr_string_2_f_0(ProcLabel_23, (MR_Word) ((MR_Unsigned) 0U));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word MLDS_PredLabel_20;
          MR_Word MLDS_ProcLabel_21;

          {
            MLDS_PredLabel_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), MLDS_PredLabel_20, 0) = ((MR_Box) (PredOrFunc_13));
            MR_hl_field(MR_mktag(0), MLDS_PredLabel_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), MLDS_PredLabel_20, 2) = ((MR_Box) (PredName_16));
            MR_hl_field(MR_mktag(0), MLDS_PredLabel_20, 3) = ((MR_Box) (Arity_15));
            MR_hl_field(MR_mktag(0), MLDS_PredLabel_20, 4) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), MLDS_PredLabel_20, 5) = ((MR_Box) ((MR_Integer) 0));
          }
          {
            MLDS_ProcLabel_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), MLDS_ProcLabel_21, 0) = ((MR_Box) (MLDS_PredLabel_20));
            MR_hl_field(MR_mktag(0), MLDS_ProcLabel_21, 1) = ((MR_Box) (ProcId_7));
          }
          VarName_8 = ml_backend__mlds_to_c_name__mlds_tabling_data_name_2_f_0(MLDS_ProcLabel_21, (MR_Word) ((MR_Unsigned) 0U));
        }
        break;
    }
    return VarName_8;
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__tabling_stats_pred_name_3_f_0(
  MR_Word SimpleCallId_5,
  MR_Integer ProcId_6,
  MR_Word SingleProc_7)
{
  {
    MR_Word HeadVar__4_4;
    MR_Word PorF_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SimpleCallId_5, (MR_Integer) 0))));
    MR_Word SymName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SimpleCallId_5, (MR_Integer) 1))));
    MR_Integer Arity0_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SimpleCallId_5, (MR_Integer) 2))));
    MR_Integer Arity_17;
    MR_String Var_28;
    MR_String Var_30;

    switch (PorF_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          Arity_17 = (MR_Integer) ((MR_Unsigned) Arity0_16 - (MR_Unsigned) (MR_Integer) 1);
        }
        break;
      case (MR_Integer) 0:
        Arity_17 = Arity0_16;
        break;
    }
    Var_30 = mercury__string__int_to_string_1_f_0(Arity_17);
    Var_28 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_30);
    if (((MR_tag((MR_Word) SymName_15)) == (MR_Integer) 1))
    {
      MR_String Name_19 = ((MR_String) ((MR_hl_field(MR_mktag(1), SymName_15, (MR_Integer) 1))));
      MR_String NewName0_21;
      MR_String NewName_22;
      MR_Word ModuleNameAgain_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_15, (MR_Integer) 0))));
      MR_String Var_25;
      MR_String Var_27;

      Var_27 = mercury__string__f_43_43_2_f_0(Name_19, Var_28);
      Var_25 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_27);
      NewName0_21 = mercury__string__f_43_43_2_f_0((MR_String) "table_statistics_for", Var_25);
      switch (SingleProc_7) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Var_31;
            MR_String Var_33;
            MR_Integer Var_34;

            Var_34 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_6);
            Var_33 = mercury__string__int_to_string_1_f_0(Var_34);
            Var_31 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_33);
            NewName_22 = mercury__string__f_43_43_2_f_0(NewName0_21, Var_31);
          }
          break;
        case (MR_Integer) 1:
          NewName_22 = NewName0_21;
          break;
      }
      {
        HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__4_4, 0) = ((MR_Box) (ModuleNameAgain_23));
        MR_hl_field(MR_mktag(1), HeadVar__4_4, 1) = ((MR_Box) (NewName_22));
      }
    }
    else
    {
      MR_String Name_44 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName_15, (MR_Integer) 0))));
      MR_String NewName0_46;
      MR_String NewName_47;
      MR_String Var_48;
      MR_String Var_49;

      Var_49 = mercury__string__f_43_43_2_f_0(Name_44, Var_28);
      Var_48 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_49);
      NewName0_46 = mercury__string__f_43_43_2_f_0((MR_String) "table_statistics_for", Var_48);
      switch (SingleProc_7) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Var_36;
            MR_String Var_38;
            MR_Integer Var_39;

            Var_39 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_6);
            Var_38 = mercury__string__int_to_string_1_f_0(Var_39);
            Var_36 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_38);
            NewName_47 = mercury__string__f_43_43_2_f_0(NewName0_46, Var_36);
          }
          break;
        case (MR_Integer) 1:
          NewName_47 = NewName0_46;
          break;
      }
      {
        HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), HeadVar__4_4, 0) = ((MR_Box) (NewName_47));
      }
    }
    return HeadVar__4_4;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__module_add_pragma_tabled_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_ModuleInfo_66;
    MR_Word conv1_STATE_VARIABLE_QualInfo_68;
    MR_Word conv0_STATE_VARIABLE_Specs_70;

    hlds__make_hlds__add_pragma__add_pragma_tabling__module_add_pragma_tabled_for_pred_15_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 9)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 10)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ModuleInfo_66, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_QualInfo_68, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_Specs_70);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ModuleInfo_66));
    *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_QualInfo_68));
    *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_70));
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__module_add_pragma_tabled_9_p_0(
  MR_Word TabledInfo_10,
  MR_Word Context_11,
  MR_Word Status_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_49,
  MR_Word * STATE_VARIABLE_ModuleInfo_50,
  MR_Word STATE_VARIABLE_QualInfo_0_51,
  MR_Word * STATE_VARIABLE_QualInfo_52,
  MR_Word STATE_VARIABLE_Specs_0_53,
  MR_Word * STATE_VARIABLE_Specs_54)
{
  {
    MR_Word EvalMethod_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TabledInfo_10, (MR_Integer) 0))));
    MR_Word PredNameArityMPF_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TabledInfo_10, (MR_Integer) 1))));
    MR_Word MaybeModes_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TabledInfo_10, (MR_Integer) 2))));
    MR_Word MaybeAttributes_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TabledInfo_10, (MR_Integer) 3))));
    MR_Word PredName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArityMPF_17, (MR_Integer) 0))));
    MR_Integer Arity_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArityMPF_17, (MR_Integer) 1))));
    MR_Word MaybePredOrFunc_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArityMPF_17, (MR_Integer) 2))));
    MR_Word PredicateTable0_23;
    MR_String EvalMethodStr_24;
    MR_Word PredIds_31;
    MR_Word STATE_VARIABLE_ModuleInfo_73_73;
    MR_Word STATE_VARIABLE_Specs_76_76;
    MR_Word STATE_VARIABLE_Specs_134_134;
    MR_Word Var_136;
    MR_Box conv5_STATE_VARIABLE_ModuleInfo_50;
    MR_Box conv4_STATE_VARIABLE_QualInfo_52;
    MR_Box conv3_STATE_VARIABLE_Specs_54;

    hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_49, &PredicateTable0_23);
    EvalMethodStr_24 = parse_tree__prog_out__eval_method_to_string_1_f_0(EvalMethod_16);
    if ((MaybePredOrFunc_22 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word PredIds0_146;

      hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(PredicateTable0_23, (MR_Integer) 0, PredName_20, Arity_21, &PredIds0_146);
      if ((PredIds0_146 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_56;
        MR_Word Var_64;
        MR_Word ModuleName_140;
        MR_Word DescPieces_141;
        MR_Word PredId_142;

        hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_0_49, &ModuleName_140);
        {
          Var_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
          MR_hl_field(MR_mktag(3), Var_56, 1) = ((MR_Box) (EvalMethodStr_24));
        }
        {
          DescPieces_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), DescPieces_141, 0) = ((MR_Box) (Var_56));
          MR_hl_field(MR_mktag(1), DescPieces_141, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[42])));
        }
        {
          Var_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
          MR_hl_field(MR_mktag(3), Var_64, 1) = ((MR_Box) (PredName_20));
        }
        hlds__add_pred__preds_add_implicit_report_error_14_p_0(STATE_VARIABLE_ModuleInfo_0_49, &STATE_VARIABLE_ModuleInfo_73_73, ModuleName_140, PredName_20, Arity_21, (MR_Integer) 0, Status_12, (MR_Integer) 0, Context_11, Var_64, DescPieces_141, &PredId_142, STATE_VARIABLE_Specs_0_53, &STATE_VARIABLE_Specs_76_76);
        {
          PredIds_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), PredIds_31, 0) = ((MR_Box) (PredId_142));
          MR_hl_field(MR_mktag(1), PredIds_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
      {
        PredIds_31 = PredIds0_146;
        STATE_VARIABLE_ModuleInfo_73_73 = STATE_VARIABLE_ModuleInfo_0_49;
        STATE_VARIABLE_Specs_76_76 = STATE_VARIABLE_Specs_0_53;
      }
    }
    else
    {
      MR_Word PredOrFunc_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredOrFunc_22, (MR_Integer) 0))));
      MR_Word PredIds0_27;

      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredicateTable0_23, (MR_Integer) 0, PredOrFunc_26, PredName_20, Arity_21, &PredIds0_27);
      if ((PredIds0_27 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word ModuleName_28;
        MR_Word DescPieces_29;
        MR_Word PredId_30;
        MR_Word Var_68;
        MR_Word Var_75;

        hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_0_49, &ModuleName_28);
        {
          Var_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
          MR_hl_field(MR_mktag(3), Var_68, 1) = ((MR_Box) (EvalMethodStr_24));
        }
        {
          DescPieces_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), DescPieces_29, 0) = ((MR_Box) (Var_68));
          MR_hl_field(MR_mktag(1), DescPieces_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[42])));
        }
        {
          Var_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
          MR_hl_field(MR_mktag(3), Var_75, 1) = ((MR_Box) (PredName_20));
        }
        hlds__add_pred__preds_add_implicit_report_error_14_p_0(STATE_VARIABLE_ModuleInfo_0_49, &STATE_VARIABLE_ModuleInfo_73_73, ModuleName_28, PredName_20, Arity_21, PredOrFunc_26, Status_12, (MR_Integer) 0, Context_11, Var_75, DescPieces_29, &PredId_30, STATE_VARIABLE_Specs_0_53, &STATE_VARIABLE_Specs_76_76);
        {
          PredIds_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), PredIds_31, 0) = ((MR_Box) (PredId_30));
          MR_hl_field(MR_mktag(1), PredIds_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
      {
        PredIds_31 = PredIds0_27;
        STATE_VARIABLE_ModuleInfo_73_73 = STATE_VARIABLE_ModuleInfo_0_49;
        STATE_VARIABLE_Specs_76_76 = STATE_VARIABLE_Specs_0_53;
      }
    }
    if ((MaybeAttributes_19 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Specs_134_134 = STATE_VARIABLE_Specs_76_76;
    else
    {
      MR_Word Attributes_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAttributes_19, (MR_Integer) 0))));
      MR_Word Statistics_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Attributes_36, (MR_Integer) 2))));
      MR_Word AllowReset_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Attributes_36, (MR_Integer) 3))));
      MR_Word Var_167 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_31, (MR_Integer) 1))));

      if ((Var_167 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_Specs_134_134 = STATE_VARIABLE_Specs_76_76;
      else
      {
        MR_Word STATE_VARIABLE_Specs_106_106;

        switch (Statistics_37) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            STATE_VARIABLE_Specs_106_106 = STATE_VARIABLE_Specs_76_76;
            break;
          case (MR_Integer) 0:
            {
              MR_Word StatsPieces_43;
              MR_Word StatsMsg_44;
              MR_Word StatsSpec_45;
              MR_Word Var_81;
              MR_Word Var_84;
              MR_Word Var_85;
              MR_Word Var_86;
              MR_Word Var_99;
              MR_Word Var_100;
              MR_Word Var_104;

              {
                Var_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_86, 0) = ((MR_Box) (PredName_20));
                MR_hl_field(MR_mktag(0), Var_86, 1) = ((MR_Box) (Arity_21));
              }
              {
                Var_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), Var_85, 1) = ((MR_Box) (Var_86));
              }
              {
                Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (Var_85));
                MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[7])));
              }
              {
                Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[44])));
                MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (Var_84));
              }
              {
                StatsPieces_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), StatsPieces_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[43])));
                MR_hl_field(MR_mktag(1), StatsPieces_43, 1) = ((MR_Box) (Var_81));
              }
              {
                Var_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_100, 0) = ((MR_Box) (StatsPieces_43));
              }
              {
                Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (Var_100));
                MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                StatsMsg_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), StatsMsg_44, 0) = ((MR_Box) (Context_11));
                MR_hl_field(MR_mktag(0), StatsMsg_44, 1) = ((MR_Box) (Var_99));
              }
              {
                Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (StatsMsg_44));
                MR_hl_field(MR_mktag(1), Var_104, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                StatsSpec_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), StatsSpec_45, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), StatsSpec_45, 1) = ((MR_Box) ((MR_Unsigned) 16U));
                MR_hl_field(MR_mktag(0), StatsSpec_45, 2) = ((MR_Box) (Var_104));
              }
              {
                STATE_VARIABLE_Specs_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_106_106, 0) = ((MR_Box) (StatsSpec_45));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_106_106, 1) = ((MR_Box) (STATE_VARIABLE_Specs_76_76));
              }
            }
            break;
        }
        switch (AllowReset_38) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ResetPieces_46;
              MR_Word ResetMsg_47;
              MR_Word ResetSpec_48;
              MR_Word Var_109;
              MR_Word Var_112;
              MR_Word Var_113;
              MR_Word Var_114;
              MR_Word Var_127;
              MR_Word Var_128;
              MR_Word Var_132;

              {
                Var_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_114, 0) = ((MR_Box) (PredName_20));
                MR_hl_field(MR_mktag(0), Var_114, 1) = ((MR_Box) (Arity_21));
              }
              {
                Var_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), Var_113, 1) = ((MR_Box) (Var_114));
              }
              {
                Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_112, 0) = ((MR_Box) (Var_113));
                MR_hl_field(MR_mktag(1), Var_112, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[10])));
              }
              {
                Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[44])));
                MR_hl_field(MR_mktag(1), Var_109, 1) = ((MR_Box) (Var_112));
              }
              {
                ResetPieces_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ResetPieces_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[45])));
                MR_hl_field(MR_mktag(1), ResetPieces_46, 1) = ((MR_Box) (Var_109));
              }
              {
                Var_128 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_128, 0) = ((MR_Box) (ResetPieces_46));
              }
              {
                Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_127, 0) = ((MR_Box) (Var_128));
                MR_hl_field(MR_mktag(1), Var_127, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                ResetMsg_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ResetMsg_47, 0) = ((MR_Box) (Context_11));
                MR_hl_field(MR_mktag(0), ResetMsg_47, 1) = ((MR_Box) (Var_127));
              }
              {
                Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_132, 0) = ((MR_Box) (ResetMsg_47));
                MR_hl_field(MR_mktag(1), Var_132, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                ResetSpec_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ResetSpec_48, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), ResetSpec_48, 1) = ((MR_Box) ((MR_Unsigned) 16U));
                MR_hl_field(MR_mktag(0), ResetSpec_48, 2) = ((MR_Box) (Var_132));
              }
              {
                STATE_VARIABLE_Specs_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_134_134, 0) = ((MR_Box) (ResetSpec_48));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_134_134, 1) = ((MR_Box) (STATE_VARIABLE_Specs_106_106));
              }
            }
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_Specs_134_134 = STATE_VARIABLE_Specs_106_106;
            break;
        }
      }
    }
    {
      Var_136 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_136, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), Var_136, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__module_add_pragma_tabled_9_p_0_1));
      MR_hl_field(MR_mktag(0), Var_136, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(0), Var_136, 3) = ((MR_Box) (EvalMethod_16));
      MR_hl_field(MR_mktag(0), Var_136, 4) = ((MR_Box) (PredName_20));
      MR_hl_field(MR_mktag(0), Var_136, 5) = ((MR_Box) (Arity_21));
      MR_hl_field(MR_mktag(0), Var_136, 6) = ((MR_Box) (MaybePredOrFunc_22));
      MR_hl_field(MR_mktag(0), Var_136, 7) = ((MR_Box) (MaybeModes_18));
      MR_hl_field(MR_mktag(0), Var_136, 8) = ((MR_Box) (MaybeAttributes_19));
      MR_hl_field(MR_mktag(0), Var_136, 9) = ((MR_Box) (Context_11));
      MR_hl_field(MR_mktag(0), Var_136, 10) = ((MR_Box) (Status_12));
    }
    mercury__list__foldl3_8_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0), (MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[0]), Var_136, PredIds_31, ((MR_Box) (STATE_VARIABLE_ModuleInfo_73_73)), &conv5_STATE_VARIABLE_ModuleInfo_50, ((MR_Box) (STATE_VARIABLE_QualInfo_0_51)), &conv4_STATE_VARIABLE_QualInfo_52, ((MR_Box) (STATE_VARIABLE_Specs_134_134)), &conv3_STATE_VARIABLE_Specs_54);
    *STATE_VARIABLE_ModuleInfo_50 = ((MR_Word) (conv5_STATE_VARIABLE_ModuleInfo_50));
    *STATE_VARIABLE_QualInfo_52 = ((MR_Word) (conv4_STATE_VARIABLE_QualInfo_52));
    *STATE_VARIABLE_Specs_54 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_54));
  }
}

void mercury__hlds__make_hlds__add_pragma__add_pragma_tabling__init(void)
{
}

void mercury__hlds__make_hlds__add_pragma__add_pragma_tabling__init_type_tables(void)
{
}

void mercury__hlds__make_hlds__add_pragma__add_pragma_tabling__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__make_hlds__add_pragma__add_pragma_tabling__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.make_hlds.add_pragma.add_pragma_tabling.
