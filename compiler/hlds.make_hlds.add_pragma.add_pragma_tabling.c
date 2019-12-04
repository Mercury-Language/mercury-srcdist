/*
** Automatically generated from `add_pragma_tabling.m'
** by the Mercury compiler,
** version rotd-2019-12-04
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
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.add_pred.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
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
#include "ll_backend.llds_out.mih"
#include "ll_backend.rtti_out.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
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
#include "hlds.make_hlds.make_hlds_warn.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "ll_backend.llds_out.llds_out_util.mih"
#include "hlds.make_hlds.add_pragma.add_pragma_type_spec.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_tabling__maybe__pti_maybe_1__plain_mdbcomp__prim_data__type_ctor_info_pred_or_func_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_tabling__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_tabling__maybe__pti_maybe_1__plain_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_tabling__maybe__pti_maybe_1__plain_parse_tree__prog_data_pragma__type_ctor_info_table_attributes_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_tabling__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__IntroducedFrom__pred__table_info_c_global_var_name__643__1_2_p_0(
  MR_Word Target_10,
  MR_Word HeadVar__2_27);

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
  MR_Word STATE_VARIABLE_ModuleInfo_0_63,
  MR_Word * STATE_VARIABLE_ModuleInfo_64,
  MR_Word STATE_VARIABLE_QualInfo_0_65,
  MR_Word * STATE_VARIABLE_QualInfo_66,
  MR_Word STATE_VARIABLE_Specs_0_67,
  MR_Word * STATE_VARIABLE_Specs_68);

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
  MR_Word STATE_VARIABLE_ProcTable_0_47,
  MR_Word * STATE_VARIABLE_ProcTable_48,
  MR_Word STATE_VARIABLE_ModuleInfo_0_49,
  MR_Word * STATE_VARIABLE_ModuleInfo_50,
  MR_Word STATE_VARIABLE_QualInfo_0_51,
  MR_Word * STATE_VARIABLE_QualInfo_52,
  MR_Word STATE_VARIABLE_Specs_0_53,
  MR_Word * STATE_VARIABLE_Specs_54);

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
  MR_Word STATE_VARIABLE_ProcTable_0_48,
  MR_Word * STATE_VARIABLE_ProcTable_49,
  MR_Word STATE_VARIABLE_ModuleInfo_0_50,
  MR_Word * STATE_VARIABLE_ModuleInfo_51,
  MR_Word STATE_VARIABLE_QualInfo_0_52,
  MR_Word * STATE_VARIABLE_QualInfo_53,
  MR_Word STATE_VARIABLE_Specs_0_54,
  MR_Word * STATE_VARIABLE_Specs_55);

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
  MR_Word STATE_VARIABLE_ProcTable_0_59,
  MR_Word * STATE_VARIABLE_ProcTable_60,
  MR_Word STATE_VARIABLE_ModuleInfo_0_61,
  MR_Word * STATE_VARIABLE_ModuleInfo_62,
  MR_Word STATE_VARIABLE_QualInfo_0_63,
  MR_Word * STATE_VARIABLE_QualInfo_64,
  MR_Word STATE_VARIABLE_Specs_0_65,
  MR_Word * STATE_VARIABLE_Specs_66);

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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "would have an ambiguous name too."))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[1])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "since the compiler-generated statistics predicate"))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[3])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "option to suppress this warning."))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[1])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--no-warn-table-with-inline"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "since tabled predicates cannot be inlined."))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[17])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[22])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 19U)),
    ((MR_Box) ((MR_String) "inline"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[24])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration but also has a"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[26])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[1])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "with no declared modes."))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[1])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "pragmas specified."))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[1])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
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
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[41]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 43 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: cannot request statistics"))
  },
  /* row 44 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for the ambiguous name"))
  },
  /* row 45 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
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
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 50 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row 51 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error in"))
  },
  /* row 52 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 53 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has duplicate"))
  },
  /* row 54 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has both"))
  },
  /* row 55 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 56 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: "))
  },
  /* row 57 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has a"))
  },
  /* row 58 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: "))
  },
  /* row 59 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration for imported"))
  },
  /* row 60 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration for undeclared mode of"))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_2[1][18] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 15)),
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
    ((MR_Box) ((MR_Integer) 2)),
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
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 6 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



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
hlds__make_hlds__add_pragma__add_pragma_tabling__IntroducedFrom__pred__table_info_c_global_var_name__643__1_2_p_0(
  MR_Word Target_10,
  MR_Word HeadVar__2_27)
{
  {
    MR_bool succeeded = (Target_10 == HeadVar__2_27);

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
  MR_Word STATE_VARIABLE_ModuleInfo_0_63,
  MR_Word * STATE_VARIABLE_ModuleInfo_64,
  MR_Word STATE_VARIABLE_QualInfo_0_65,
  MR_Word * STATE_VARIABLE_QualInfo_66,
  MR_Word STATE_VARIABLE_Specs_0_67,
  MR_Word * STATE_VARIABLE_Specs_68)
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
    MR_Word STATE_VARIABLE_Specs_127_127;
    MR_Box conv0_PredInfo0_34;
    MR_Word WarnTableWithInline_43;
    MR_Word Var_84;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_63, &Globals_28);
    succeeded = ((MR_tag((MR_Word) EvalMethod0_16)) == (MR_Integer) 2);
    if (succeeded)
    {
      MR_Word OwnStacks_30;

      libs__globals__lookup_bool_option_3_p_0(Globals_28, (MR_Integer) 245, &OwnStacks_30);
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
    else
      EvalMethod_31 = EvalMethod0_16;
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_63, &PredicateTable_32);
    hlds__pred_table__predicate_table_get_preds_2_p_0(PredicateTable_32, &Preds_33);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), Preds_33, ((MR_Box) (PredId_24)), &conv0_PredInfo0_34);
    PredInfo0_34 = ((MR_Word) (conv0_PredInfo0_34));
    if ((MaybePredOrFunc_19 == (MR_Word) ((MR_Unsigned) 0U)))
      PredOrFunc_36 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo0_34);
    else
      PredOrFunc_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredOrFunc_19, (MR_Integer) 0))));
    parse_tree__prog_util__adjust_func_arity_3_p_0(PredOrFunc_36, Arity0_18, &Arity_37);
    EvalMethodStr_38 = parse_tree__prog_out__eval_method_to_string_1_f_0(EvalMethod_31);
    libs__globals__lookup_bool_option_3_p_0(Globals_28, (MR_Integer) 64, &VeryVerbose_39);
    switch (VeryVerbose_39) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_79;

          mercury__io__write_string_3_p_0((MR_String) "% Processing \140:- pragma ");
          mercury__io__write_string_3_p_0(EvalMethodStr_38);
          mercury__io__write_string_3_p_0((MR_String) "\' for ");
          {
            Var_79 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (PredName_17));
            MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) (Arity_37));
          }
          parse_tree__prog_out__write_simple_call_id_4_p_0(PredOrFunc_36, Var_79);
          mercury__io__write_string_3_p_0((MR_String) "...\n");
        }
        break;
    }
    hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo0_34, &Markers_41);
    {
      SimpleCallId_42 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SimpleCallId_42, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_36));
      MR_hl_field(MR_mktag(0), SimpleCallId_42, 1) = ((MR_Box) (PredName_17));
      MR_hl_field(MR_mktag(0), SimpleCallId_42, 2) = ((MR_Box) (Arity_37));
    }
    succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_41, (MR_Integer) 6);
    if (succeeded)
    {
      Var_84 = (MR_Integer) 42;
      libs__globals__lookup_bool_option_3_p_0(Globals_28, Var_84, &WarnTableWithInline_43);
      succeeded = (WarnTableWithInline_43 == (MR_Integer) 1);
    }
    if (succeeded)
    {
      MR_Word InlineWarningPieces_44;
      MR_Word InlineWarningSpec_45;
      MR_Word Var_87;
      MR_Word Var_88;
      MR_Word Var_89;
      MR_Word Var_92;
      MR_Word Var_93;

      {
        Var_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_88, 0) = ((MR_Box) ((MR_Unsigned) 17U));
        MR_hl_field(MR_mktag(3), Var_88, 1) = ((MR_Box) (SimpleCallId_42));
      }
      {
        Var_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_93, 0) = ((MR_Box) ((MR_Unsigned) 19U));
        MR_hl_field(MR_mktag(3), Var_93, 1) = ((MR_Box) (EvalMethodStr_38));
      }
      {
        Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (Var_93));
        MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[28])));
      }
      {
        Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[57])));
        MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (Var_92));
      }
      {
        Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (Var_88));
        MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) (Var_89));
      }
      {
        InlineWarningPieces_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), InlineWarningPieces_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[56])));
        MR_hl_field(MR_mktag(1), InlineWarningPieces_44, 1) = ((MR_Box) (Var_87));
      }
      {
        InlineWarningSpec_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), InlineWarningSpec_45, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(1), InlineWarningSpec_45, 1) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(1), InlineWarningSpec_45, 2) = ((MR_Box) (Context_22));
        MR_hl_field(MR_mktag(1), InlineWarningSpec_45, 3) = ((MR_Box) (InlineWarningPieces_44));
      }
      {
        STATE_VARIABLE_Specs_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_127_127, 0) = ((MR_Box) (InlineWarningSpec_45));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_127_127, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_67));
      }
    }
    else
      STATE_VARIABLE_Specs_127_127 = STATE_VARIABLE_Specs_0_67;
    succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo0_34);
    if (succeeded)
    {
      MR_Word Pieces_46;
      MR_Word Spec_47;
      MR_Word Var_130;
      MR_Word Var_131;
      MR_Word Var_132;
      MR_Word Var_135;
      MR_Word Var_136;

      {
        Var_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_131, 0) = ((MR_Box) ((MR_Unsigned) 19U));
        MR_hl_field(MR_mktag(3), Var_131, 1) = ((MR_Box) (EvalMethodStr_38));
      }
      {
        Var_136 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_136, 0) = ((MR_Box) ((MR_Unsigned) 17U));
        MR_hl_field(MR_mktag(3), Var_136, 1) = ((MR_Box) (SimpleCallId_42));
      }
      {
        Var_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_135, 0) = ((MR_Box) (Var_136));
        MR_hl_field(MR_mktag(1), Var_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[30])));
      }
      {
        Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_132, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[59])));
        MR_hl_field(MR_mktag(1), Var_132, 1) = ((MR_Box) (Var_135));
      }
      {
        Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_130, 0) = ((MR_Box) (Var_131));
        MR_hl_field(MR_mktag(1), Var_130, 1) = ((MR_Box) (Var_132));
      }
      {
        Pieces_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[58])));
        MR_hl_field(MR_mktag(1), Pieces_46, 1) = ((MR_Box) (Var_130));
      }
      {
        Spec_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_47, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_47, 1) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(1), Spec_47, 2) = ((MR_Box) (Context_22));
        MR_hl_field(MR_mktag(1), Spec_47, 3) = ((MR_Box) (Pieces_46));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_68 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_47));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_127_127));
      }
      *STATE_VARIABLE_QualInfo_66 = STATE_VARIABLE_QualInfo_0_65;
      *STATE_VARIABLE_ModuleInfo_64 = STATE_VARIABLE_ModuleInfo_0_63;
    }
    else
    {
      MR_Word NeedsStrat_48;
      MR_Word ProcTable0_51;
      MR_Word ExistingProcs_52;
      MR_Word STATE_VARIABLE_ModuleInfo_146_146;

      NeedsStrat_48 = hlds__hlds_pred__eval_method_needs_stratification_1_f_0(EvalMethod_31);
      switch (NeedsStrat_48) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_ModuleInfo_146_146 = STATE_VARIABLE_ModuleInfo_0_63;
          break;
        case (MR_Integer) 1:
          {
            MR_Word StratPredIds0_49;
            MR_Word StratPredIds_50;

            hlds__hlds_module__module_info_get_must_be_stratified_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_63, &StratPredIds0_49);
            mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_24)), StratPredIds0_49, &StratPredIds_50);
            hlds__hlds_module__module_info_set_must_be_stratified_preds_3_p_0(StratPredIds_50, STATE_VARIABLE_ModuleInfo_0_63, &STATE_VARIABLE_ModuleInfo_146_146);
          }
          break;
      }
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_34, &ProcTable0_51);
      mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_51, &ExistingProcs_52);
      if ((MaybeModes_20 == (MR_Word) ((MR_Unsigned) 0U)))
        if ((ExistingProcs_52 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_153;
          MR_Word Var_154;
          MR_Word Var_155;
          MR_Word Var_158;
          MR_Word Var_159;
          MR_Word Pieces_198;
          MR_Word Spec_199;

          {
            Var_154 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_154, 0) = ((MR_Box) ((MR_Unsigned) 19U));
            MR_hl_field(MR_mktag(3), Var_154, 1) = ((MR_Box) (EvalMethodStr_38));
          }
          {
            Var_159 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_159, 0) = ((MR_Box) ((MR_Unsigned) 17U));
            MR_hl_field(MR_mktag(3), Var_159, 1) = ((MR_Box) (SimpleCallId_42));
          }
          {
            Var_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_158, 0) = ((MR_Box) (Var_159));
            MR_hl_field(MR_mktag(1), Var_158, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[32])));
          }
          {
            Var_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_155, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[50])));
            MR_hl_field(MR_mktag(1), Var_155, 1) = ((MR_Box) (Var_158));
          }
          {
            Var_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_153, 0) = ((MR_Box) (Var_154));
            MR_hl_field(MR_mktag(1), Var_153, 1) = ((MR_Box) (Var_155));
          }
          {
            Pieces_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_198, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[58])));
            MR_hl_field(MR_mktag(1), Pieces_198, 1) = ((MR_Box) (Var_153));
          }
          {
            Spec_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_199, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_199, 1) = ((MR_Box) ((MR_Unsigned) 16U));
            MR_hl_field(MR_mktag(1), Spec_199, 2) = ((MR_Box) (Context_22));
            MR_hl_field(MR_mktag(1), Spec_199, 3) = ((MR_Box) (Pieces_198));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_68 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_199));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_127_127));
          }
          *STATE_VARIABLE_ModuleInfo_64 = STATE_VARIABLE_ModuleInfo_146_146;
          *STATE_VARIABLE_QualInfo_66 = STATE_VARIABLE_QualInfo_0_65;
        }
        else
        {
          MR_Word ExistingProcsTail_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ExistingProcs_52, (MR_Integer) 1))));
          MR_Word SingleProc_60;
          MR_Word STATE_VARIABLE_ModuleInfo_147_147;
          MR_Word ProcTable_200;
          MR_Word PredInfo_201;

          if ((ExistingProcsTail_59 == (MR_Word) ((MR_Unsigned) 0U)))
            SingleProc_60 = (MR_Integer) 1;
          else
            SingleProc_60 = (MR_Integer) 0;
          hlds__make_hlds__add_pragma__add_pragma_tabling__set_eval_method_create_aux_preds_list_15_p_0(ExistingProcs_52, Context_22, SimpleCallId_42, SingleProc_60, EvalMethod_31, MaybeAttributes_21, PredStatus_23, ProcTable0_51, &ProcTable_200, STATE_VARIABLE_ModuleInfo_146_146, &STATE_VARIABLE_ModuleInfo_147_147, STATE_VARIABLE_QualInfo_0_65, STATE_VARIABLE_QualInfo_66, STATE_VARIABLE_Specs_127_127, STATE_VARIABLE_Specs_68);
          hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_200, PredInfo0_34, &PredInfo_201);
          hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_24, PredInfo_201, STATE_VARIABLE_ModuleInfo_147_147, STATE_VARIABLE_ModuleInfo_64);
        }
      else
      {
        MR_Word Modes_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModes_20, (MR_Integer) 0))));
        MR_Integer ProcId_54;

        succeeded = hlds__hlds_code_util__get_procedure_matching_argmodes_4_p_0(ExistingProcs_52, Modes_53, STATE_VARIABLE_ModuleInfo_146_146, &ProcId_54);
        if (succeeded)
        {
          MR_Word ProcInfo0_55;
          MR_Word ProcTable_56;
          MR_Word PredInfo_57;
          MR_Word STATE_VARIABLE_ModuleInfo_170_170;
          MR_Box conv1_ProcInfo0_55;

          mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_51, ((MR_Box) (ProcId_54)), &conv1_ProcInfo0_55);
          ProcInfo0_55 = ((MR_Word) (conv1_ProcInfo0_55));
          hlds__make_hlds__add_pragma__add_pragma_tabling__set_eval_method_create_aux_preds_16_p_0(ProcId_54, ProcInfo0_55, Context_22, SimpleCallId_42, (MR_Integer) 1, EvalMethod_31, MaybeAttributes_21, PredStatus_23, ProcTable0_51, &ProcTable_56, STATE_VARIABLE_ModuleInfo_146_146, &STATE_VARIABLE_ModuleInfo_170_170, STATE_VARIABLE_QualInfo_0_65, STATE_VARIABLE_QualInfo_66, STATE_VARIABLE_Specs_127_127, STATE_VARIABLE_Specs_68);
          hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_56, PredInfo0_34, &PredInfo_57);
          hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_24, PredInfo_57, STATE_VARIABLE_ModuleInfo_170_170, STATE_VARIABLE_ModuleInfo_64);
        }
        else
        {
          MR_Word Var_176;
          MR_Word Var_177;
          MR_Word Var_178;
          MR_Word Var_181;
          MR_Word Var_182;
          MR_Word Pieces_192;
          MR_Word Spec_193;

          {
            Var_177 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_177, 0) = ((MR_Box) ((MR_Unsigned) 19U));
            MR_hl_field(MR_mktag(3), Var_177, 1) = ((MR_Box) (EvalMethodStr_38));
          }
          {
            Var_182 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_182, 0) = ((MR_Box) ((MR_Unsigned) 17U));
            MR_hl_field(MR_mktag(3), Var_182, 1) = ((MR_Box) (SimpleCallId_42));
          }
          {
            Var_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_181, 0) = ((MR_Box) (Var_182));
            MR_hl_field(MR_mktag(1), Var_181, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[30])));
          }
          {
            Var_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_178, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[60])));
            MR_hl_field(MR_mktag(1), Var_178, 1) = ((MR_Box) (Var_181));
          }
          {
            Var_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_176, 0) = ((MR_Box) (Var_177));
            MR_hl_field(MR_mktag(1), Var_176, 1) = ((MR_Box) (Var_178));
          }
          {
            Pieces_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_192, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[49])));
            MR_hl_field(MR_mktag(1), Pieces_192, 1) = ((MR_Box) (Var_176));
          }
          {
            Spec_193 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_193, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_193, 1) = ((MR_Box) ((MR_Unsigned) 16U));
            MR_hl_field(MR_mktag(1), Spec_193, 2) = ((MR_Box) (Context_22));
            MR_hl_field(MR_mktag(1), Spec_193, 3) = ((MR_Box) (Pieces_192));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_68 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_193));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_127_127));
          }
          *STATE_VARIABLE_QualInfo_66 = STATE_VARIABLE_QualInfo_0_65;
          *STATE_VARIABLE_ModuleInfo_64 = STATE_VARIABLE_ModuleInfo_146_146;
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
  MR_Word STATE_VARIABLE_ProcTable_0_47,
  MR_Word * STATE_VARIABLE_ProcTable_48,
  MR_Word STATE_VARIABLE_ModuleInfo_0_49,
  MR_Word * STATE_VARIABLE_ModuleInfo_50,
  MR_Word STATE_VARIABLE_QualInfo_0_51,
  MR_Word * STATE_VARIABLE_QualInfo_52,
  MR_Word STATE_VARIABLE_Specs_0_53,
  MR_Word * STATE_VARIABLE_Specs_54)
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
        MR_Word Spec_33;
        MR_Word Var_93;
        MR_Word Var_94;
        MR_Word Var_95;
        MR_Word Var_98;
        MR_Word Var_99;

        EvalMethodStr_31 = parse_tree__prog_out__eval_method_to_string_1_f_0(EvalMethod_22);
        {
          Var_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_94, 0) = ((MR_Box) ((MR_Unsigned) 19U));
          MR_hl_field(MR_mktag(3), Var_94, 1) = ((MR_Box) (EvalMethodStr_31));
        }
        {
          Var_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_99, 0) = ((MR_Box) ((MR_Unsigned) 17U));
          MR_hl_field(MR_mktag(3), Var_99, 1) = ((MR_Box) (SimpleCallId_20));
        }
        {
          Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (Var_99));
          MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[35])));
        }
        {
          Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[50])));
          MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) (Var_98));
        }
        {
          Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (Var_94));
          MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (Var_95));
        }
        {
          Pieces_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[49])));
          MR_hl_field(MR_mktag(1), Pieces_32, 1) = ((MR_Box) (Var_93));
        }
        {
          Spec_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_33, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_33, 1) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(MR_mktag(1), Spec_33, 2) = ((MR_Box) (Context_19));
          MR_hl_field(MR_mktag(1), Spec_33, 3) = ((MR_Box) (Pieces_32));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_54 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_33));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_53));
        }
        *STATE_VARIABLE_ProcTable_48 = STATE_VARIABLE_ProcTable_0_47;
        *STATE_VARIABLE_ModuleInfo_50 = STATE_VARIABLE_ModuleInfo_0_49;
        *STATE_VARIABLE_QualInfo_52 = STATE_VARIABLE_QualInfo_0_51;
      }
      else
      {
        MR_Word DeclaredArgModes_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDeclaredArgModes_30, (MR_Integer) 0))));
        MR_Word Statistics_37;
        MR_Word AllowReset_38;
        MR_Word MaybeError_41;
        MR_Word ProcInfo1_44;
        MR_Word ProcInfo_45;
        MR_Word STATE_VARIABLE_Specs_81_81;
        MR_Word STATE_VARIABLE_ProcTable_82_82;
        MR_Word STATE_VARIABLE_ProcTable_83_83;
        MR_Word STATE_VARIABLE_ModuleInfo_84_84;
        MR_Word STATE_VARIABLE_QualInfo_85_85;
        MR_Word STATE_VARIABLE_Specs_86_86;

        if ((MaybeAttributes_23 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          Statistics_37 = (MR_Integer) 1;
          AllowReset_38 = (MR_Integer) 1;
          hlds__make_hlds__add_pragma__add_pragma_tabling__check_pred_args_against_tabling_4_p_0(DeclaredArgModes_34, STATE_VARIABLE_ModuleInfo_0_49, (MR_Integer) 1, &MaybeError_41);
        }
        else
        {
          MR_Word Attributes_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAttributes_23, (MR_Integer) 0))));
          MR_Word Strictness_179 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Attributes_35, (MR_Integer) 0))));

          Statistics_37 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Attributes_35, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
          AllowReset_38 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Attributes_35, (MR_Integer) 2))) & (MR_Integer) 1);
          switch (MR_tag((MR_Word) Strictness_179)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              hlds__make_hlds__add_pragma__add_pragma_tabling__check_pred_args_against_tabling_4_p_0(DeclaredArgModes_34, STATE_VARIABLE_ModuleInfo_0_49, (MR_Integer) 1, &MaybeError_41);
              break;
            case (MR_Integer) 1:
              {
                MR_Word MaybeArgMethods_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Strictness_179, (MR_Integer) 0))));

                hlds__make_hlds__add_pragma__add_pragma_tabling__check_pred_args_against_tabling_methods_5_p_0(DeclaredArgModes_34, MaybeArgMethods_39, STATE_VARIABLE_ModuleInfo_0_49, (MR_Integer) 1, &MaybeError_41);
              }
              break;
          }
        }
        if ((MaybeError_41 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_Specs_81_81 = STATE_VARIABLE_Specs_0_53;
        else
        {
          MR_String ArgMsg_42;
          MR_String ErrorMsg_43;
          MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeError_41, (MR_Integer) 0))));
          MR_Word Var_60;
          MR_Word Var_61;
          MR_Word Var_62;
          MR_Word Var_65;
          MR_Word Var_66;
          MR_Word Var_67;
          MR_Word Var_70;
          MR_Word Var_72;
          MR_Word Var_73;
          MR_Word Var_74;
          MR_Word Var_75;
          MR_String EvalMethodStr_153;
          MR_Word Pieces_154;
          MR_Word Spec_155;

          ArgMsg_42 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_57, (MR_Integer) 0))));
          ErrorMsg_43 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_57, (MR_Integer) 1))));
          EvalMethodStr_153 = parse_tree__prog_out__eval_method_to_string_1_f_0(EvalMethod_22);
          {
            Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_61, 0) = ((MR_Box) ((MR_Unsigned) 19U));
            MR_hl_field(MR_mktag(3), Var_61, 1) = ((MR_Box) (EvalMethodStr_153));
          }
          {
            Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_66, 0) = ((MR_Box) ((MR_Unsigned) 17U));
            MR_hl_field(MR_mktag(3), Var_66, 1) = ((MR_Box) (SimpleCallId_20));
          }
          {
            Var_73 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_73, 0) = ((MR_Box) (ArgMsg_42));
          }
          {
            Var_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_75, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_75, 1) = ((MR_Box) (ErrorMsg_43));
          }
          {
            Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Var_75));
            MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[1])));
          }
          {
            Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Var_73));
            MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_74));
          }
          {
            Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (Var_72));
          }
          {
            Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[52])));
            MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (Var_70));
          }
          {
            Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
            MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_67));
          }
          {
            Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[50])));
            MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_65));
          }
          {
            Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Var_61));
            MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_62));
          }
          {
            Pieces_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_154, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[51])));
            MR_hl_field(MR_mktag(1), Pieces_154, 1) = ((MR_Box) (Var_60));
          }
          {
            Spec_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_155, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_155, 1) = ((MR_Box) ((MR_Unsigned) 16U));
            MR_hl_field(MR_mktag(1), Spec_155, 2) = ((MR_Box) (Context_19));
            MR_hl_field(MR_mktag(1), Spec_155, 3) = ((MR_Box) (Pieces_154));
          }
          {
            STATE_VARIABLE_Specs_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_81_81, 0) = ((MR_Box) (Spec_155));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_81_81, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_53));
          }
        }
        hlds__hlds_pred__proc_info_set_eval_method_3_p_0(EvalMethod_22, ProcInfo0_18, &ProcInfo1_44);
        hlds__hlds_pred__proc_info_set_table_attributes_3_p_0(MaybeAttributes_23, ProcInfo1_44, &ProcInfo_45);
        mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_17)), ((MR_Box) (ProcInfo_45)), STATE_VARIABLE_ProcTable_0_47, &STATE_VARIABLE_ProcTable_82_82);
        switch (Statistics_37) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              STATE_VARIABLE_ProcTable_83_83 = STATE_VARIABLE_ProcTable_82_82;
              STATE_VARIABLE_ModuleInfo_84_84 = STATE_VARIABLE_ModuleInfo_0_49;
              STATE_VARIABLE_QualInfo_85_85 = STATE_VARIABLE_QualInfo_0_51;
              STATE_VARIABLE_Specs_86_86 = STATE_VARIABLE_Specs_81_81;
            }
            break;
          case (MR_Integer) 0:
            hlds__make_hlds__add_pragma__add_pragma_tabling__create_tabling_statistics_pred_13_p_0(ProcId_17, Context_19, SimpleCallId_20, SingleProc_21, PredStatus_24, STATE_VARIABLE_ProcTable_82_82, &STATE_VARIABLE_ProcTable_83_83, STATE_VARIABLE_ModuleInfo_0_49, &STATE_VARIABLE_ModuleInfo_84_84, STATE_VARIABLE_QualInfo_0_51, &STATE_VARIABLE_QualInfo_85_85, STATE_VARIABLE_Specs_81_81, &STATE_VARIABLE_Specs_86_86);
            break;
        }
        switch (AllowReset_38) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            hlds__make_hlds__add_pragma__add_pragma_tabling__create_tabling_reset_pred_13_p_0(ProcId_17, Context_19, SimpleCallId_20, SingleProc_21, PredStatus_24, STATE_VARIABLE_ProcTable_83_83, STATE_VARIABLE_ProcTable_48, STATE_VARIABLE_ModuleInfo_84_84, STATE_VARIABLE_ModuleInfo_50, STATE_VARIABLE_QualInfo_85_85, STATE_VARIABLE_QualInfo_52, STATE_VARIABLE_Specs_86_86, STATE_VARIABLE_Specs_54);
            break;
          case (MR_Integer) 1:
            {
              *STATE_VARIABLE_ProcTable_48 = STATE_VARIABLE_ProcTable_83_83;
              *STATE_VARIABLE_ModuleInfo_50 = STATE_VARIABLE_ModuleInfo_84_84;
              *STATE_VARIABLE_QualInfo_52 = STATE_VARIABLE_QualInfo_85_85;
              *STATE_VARIABLE_Specs_54 = STATE_VARIABLE_Specs_86_86;
            }
            break;
        }
      }
    }
    else
    {
      MR_String EvalMethodStr_162;
      MR_Word Pieces_163;
      MR_Word Spec_164;

      EvalMethodStr_162 = parse_tree__prog_out__eval_method_to_string_1_f_0(EvalMethod_22);
      succeeded = parse_tree__prog_data_pragma____Unify____eval_method_0_0(OldEvalMethod_29, EvalMethod_22);
      if (succeeded)
      {
        MR_Word Var_114;
        MR_Word Var_115;
        MR_Word Var_116;
        MR_Word Var_119;
        MR_Word Var_120;

        {
          Var_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_115, 0) = ((MR_Box) ((MR_Unsigned) 17U));
          MR_hl_field(MR_mktag(3), Var_115, 1) = ((MR_Box) (SimpleCallId_20));
        }
        {
          Var_120 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_120, 0) = ((MR_Box) (EvalMethodStr_162));
        }
        {
          Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_119, 0) = ((MR_Box) (Var_120));
          MR_hl_field(MR_mktag(1), Var_119, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[37])));
        }
        {
          Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[53])));
          MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) (Var_119));
        }
        {
          Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (Var_115));
          MR_hl_field(MR_mktag(1), Var_114, 1) = ((MR_Box) (Var_116));
        }
        {
          Pieces_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_163, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[49])));
          MR_hl_field(MR_mktag(1), Pieces_163, 1) = ((MR_Box) (Var_114));
        }
      }
      else
      {
        MR_String OldEvalMethodStr_46;
        MR_Word Var_129;
        MR_Word Var_130;
        MR_Word Var_131;
        MR_Word Var_134;
        MR_Word Var_135;
        MR_Word Var_136;
        MR_Word Var_139;
        MR_Word Var_140;

        OldEvalMethodStr_46 = parse_tree__prog_out__eval_method_to_string_1_f_0(OldEvalMethod_29);
        {
          Var_130 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_130, 0) = ((MR_Box) ((MR_Unsigned) 17U));
          MR_hl_field(MR_mktag(3), Var_130, 1) = ((MR_Box) (SimpleCallId_20));
        }
        {
          Var_135 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_135, 0) = ((MR_Box) (OldEvalMethodStr_46));
        }
        {
          Var_140 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_140, 0) = ((MR_Box) (EvalMethodStr_162));
        }
        {
          Var_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_139, 0) = ((MR_Box) (Var_140));
          MR_hl_field(MR_mktag(1), Var_139, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[40])));
        }
        {
          Var_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_136, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[55])));
          MR_hl_field(MR_mktag(1), Var_136, 1) = ((MR_Box) (Var_139));
        }
        {
          Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_134, 0) = ((MR_Box) (Var_135));
          MR_hl_field(MR_mktag(1), Var_134, 1) = ((MR_Box) (Var_136));
        }
        {
          Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_131, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[54])));
          MR_hl_field(MR_mktag(1), Var_131, 1) = ((MR_Box) (Var_134));
        }
        {
          Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) (Var_130));
          MR_hl_field(MR_mktag(1), Var_129, 1) = ((MR_Box) (Var_131));
        }
        {
          Pieces_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_163, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[49])));
          MR_hl_field(MR_mktag(1), Pieces_163, 1) = ((MR_Box) (Var_129));
        }
      }
      {
        Spec_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_164, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_164, 1) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(1), Spec_164, 2) = ((MR_Box) (Context_19));
        MR_hl_field(MR_mktag(1), Spec_164, 3) = ((MR_Box) (Pieces_163));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_54 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_164));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_53));
      }
      *STATE_VARIABLE_QualInfo_52 = STATE_VARIABLE_QualInfo_0_51;
      *STATE_VARIABLE_ModuleInfo_50 = STATE_VARIABLE_ModuleInfo_0_49;
      *STATE_VARIABLE_ProcTable_48 = STATE_VARIABLE_ProcTable_0_47;
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
        MR_Integer Var_12 = (MR_Integer) ((MR_Unsigned) ArgNum_3 + (MR_Unsigned) 1);
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
          MR_Integer Var_14 = (MR_Integer) ((MR_Unsigned) ArgNum_3 + (MR_Unsigned) 1);
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
            Var_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (Var_17));
            MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) ((MR_String) "is neither input or output."));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
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
              Var_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (Var_34));
              MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (Var_39));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__5_5 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_33));
            }
          }
          else
          {
            MR_Integer Var_44 = (MR_Integer) ((MR_Unsigned) ArgNum_4 + (MR_Unsigned) 1);
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
              MR_Integer Var_46 = (MR_Integer) ((MR_Unsigned) ArgNum_4 + (MR_Unsigned) 1);
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
                Var_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (Var_49));
                MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (Var_54));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
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
              Var_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (Var_60));
              MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) ((MR_String) "is neither input or output."));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
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
    MR_Word ResetPredSymName_23;
    MR_Word TypeAndModeArg1_24;
    MR_Word TypeAndModeArg2_25;
    MR_Word ArgTypesAndModes_26;
    MR_Word TypeVarSet_27;
    MR_Word InstVarSet_28;
    MR_Word Attrs_31;
    MR_Word MaybeAttrs_32;
    MR_Word PredDecl_33;
    MR_Word IO0_36;
    MR_Word IO_37;
    MR_Word Globals_38;
    MR_Word IsTablingSupported_39;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_64;
    MR_Word STATE_VARIABLE_ModuleInfo_74_74;
    MR_Word STATE_VARIABLE_Specs_75_75;
    MR_Word STATE_VARIABLE_VarSet_76_76;
    MR_Word STATE_VARIABLE_VarSet_78_78;
    MR_Word STATE_VARIABLE_VarSet_80_80;
    MR_Word _MaybePredProcId_34;

    ResetPredSymName_23 = hlds__make_hlds__add_pragma__add_pragma_tabling__tabling_reset_pred_name_3_f_0(SimpleCallId_16, ProcId_14, SingleProc_17);
    Var_56 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
    Var_57 = parse_tree__prog_mode__di_mode_0_f_0();
    {
      TypeAndModeArg1_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeAndModeArg1_24, 0) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(1), TypeAndModeArg1_24, 1) = ((MR_Box) (Var_57));
    }
    Var_58 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
    Var_59 = parse_tree__prog_mode__uo_mode_0_f_0();
    {
      TypeAndModeArg2_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeAndModeArg2_25, 0) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(1), TypeAndModeArg2_25, 1) = ((MR_Box) (Var_59));
    }
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (TypeAndModeArg2_25));
      MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      ArgTypesAndModes_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ArgTypesAndModes_26, 0) = ((MR_Box) (TypeAndModeArg1_24));
      MR_hl_field(MR_mktag(1), ArgTypesAndModes_26, 1) = ((MR_Box) (Var_60));
    }
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet_27);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_28);
    {
      Var_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_64, 0) = ((MR_Box) (SimpleCallId_16));
      MR_hl_field(MR_mktag(3), Var_64, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    }
    Attrs_31 = (MR_Word) (Var_64);
    {
      MaybeAttrs_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeAttrs_32, 0) = ((MR_Box) (Attrs_31));
    }
    {
      PredDecl_33 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredDecl_33, 0) = ((MR_Box) (ResetPredSymName_23));
      MR_hl_field(MR_mktag(0), PredDecl_33, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), PredDecl_33, 2) = ((MR_Box) (ArgTypesAndModes_26));
      MR_hl_field(MR_mktag(0), PredDecl_33, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), PredDecl_33, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), PredDecl_33, 5) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_4[0])));
      MR_hl_field(MR_mktag(0), PredDecl_33, 6) = ((MR_Box) (MaybeAttrs_32));
      MR_hl_field(MR_mktag(0), PredDecl_33, 7) = ((MR_Box) (TypeVarSet_27));
      MR_hl_field(MR_mktag(0), PredDecl_33, 8) = ((MR_Box) (InstVarSet_28));
      MR_hl_field(MR_mktag(0), PredDecl_33, 9) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), PredDecl_33, 10) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), PredDecl_33, 11) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[46]));
      MR_hl_field(MR_mktag(0), PredDecl_33, 12) = ((MR_Box) (Context_15));
      MR_hl_field(MR_mktag(0), PredDecl_33, 13) = ((MR_Box) ((MR_Integer) -1));
    }
    hlds__add_pred__module_add_pred_decl_8_p_0(PredStatus_18, (MR_Integer) 1, PredDecl_33, &_MaybePredProcId_34, STATE_VARIABLE_ModuleInfo_0_50, &STATE_VARIABLE_ModuleInfo_74_74, STATE_VARIABLE_Specs_0_54, &STATE_VARIABLE_Specs_75_75);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &STATE_VARIABLE_VarSet_76_76);
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "IO0", &IO0_36, STATE_VARIABLE_VarSet_76_76, &STATE_VARIABLE_VarSet_78_78);
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "IO", &IO_37, STATE_VARIABLE_VarSet_78_78, &STATE_VARIABLE_VarSet_80_80);
    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_74_74, &Globals_38);
    libs__globals__current_grade_supports_tabling_2_p_0(Globals_38, &IsTablingSupported_39);
    switch (IsTablingSupported_39) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Args_46;
          MR_Word BodyExpr_47;
          MR_Word Var_81;
          MR_Word Var_82;
          MR_Word Var_83;
          MR_Word Var_89;

          {
            Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (IO0_36));
            MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (Context_15));
          }
          {
            Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (IO_37));
            MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (Context_15));
          }
          {
            Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (Var_83));
            MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Args_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Args_46, 0) = ((MR_Box) (Var_81));
            MR_hl_field(MR_mktag(1), Args_46, 1) = ((MR_Box) (Var_82));
          }
          {
            BodyExpr_47 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), BodyExpr_47, 0) = ((MR_Box) (Context_15));
            MR_hl_field(MR_mktag(0), BodyExpr_47, 1) = ((MR_Box) (Var_81));
            MR_hl_field(MR_mktag(0), BodyExpr_47, 2) = ((MR_Box) (Var_83));
            MR_hl_field(MR_mktag(0), BodyExpr_47, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          }
          {
            Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (BodyExpr_47));
          }
          hlds__make_hlds__add_clause__module_add_clause_15_p_0(STATE_VARIABLE_VarSet_80_80, (MR_Integer) 0, ResetPredSymName_23, Args_46, Var_89, PredStatus_18, Context_15, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 12U), STATE_VARIABLE_ModuleInfo_74_74, STATE_VARIABLE_ModuleInfo_51, STATE_VARIABLE_QualInfo_0_52, STATE_VARIABLE_QualInfo_53, STATE_VARIABLE_Specs_75_75, STATE_VARIABLE_Specs_55);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Arg1_40;
          MR_Word Arg2_41;
          MR_String GlobalVarName_42;
          MR_String ResetCode_43;
          MR_Word ResetImpl_44;
          MR_Word ResetPragmaFCInfo_45;
          MR_Word Var_96;
          MR_Word Var_99;
          MR_Word STATE_VARIABLE_Attrs_101_101;
          MR_Word STATE_VARIABLE_Attrs_104_104;
          MR_Word STATE_VARIABLE_Attrs_106_106;
          MR_Word STATE_VARIABLE_Attrs_108_108;
          MR_Word STATE_VARIABLE_Attrs_110_110;
          MR_Word Var_113;
          MR_Word Var_115;
          MR_Word Var_116;

          Var_96 = parse_tree__prog_mode__di_mode_0_f_0();
          {
            Arg1_40 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Arg1_40, 0) = ((MR_Box) (IO0_36));
            MR_hl_field(MR_mktag(0), Arg1_40, 1) = ((MR_Box) ((MR_String) "_IO0"));
            MR_hl_field(MR_mktag(0), Arg1_40, 2) = ((MR_Box) (Var_96));
            MR_hl_field(MR_mktag(0), Arg1_40, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          }
          Var_99 = parse_tree__prog_mode__uo_mode_0_f_0();
          {
            Arg2_41 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Arg2_41, 0) = ((MR_Box) (IO_37));
            MR_hl_field(MR_mktag(0), Arg2_41, 1) = ((MR_Box) ((MR_String) "_IO"));
            MR_hl_field(MR_mktag(0), Arg2_41, 2) = ((MR_Box) (Var_99));
            MR_hl_field(MR_mktag(0), Arg2_41, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          }
          STATE_VARIABLE_Attrs_101_101 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 0);
          parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_101_101, &STATE_VARIABLE_Attrs_104_104);
          parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_104_104, &STATE_VARIABLE_Attrs_106_106);
          parse_tree__prog_data_foreign__set_purity_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_106_106, &STATE_VARIABLE_Attrs_108_108);
          parse_tree__prog_data_foreign__set_may_duplicate_3_p_0((MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_4[1])), STATE_VARIABLE_Attrs_108_108, &STATE_VARIABLE_Attrs_110_110);
          GlobalVarName_42 = hlds__make_hlds__add_pragma__add_pragma_tabling__table_info_c_global_var_name_3_f_0(STATE_VARIABLE_ModuleInfo_74_74, SimpleCallId_16, ProcId_14);
          ResetCode_43 = mercury__string__f_43_43_2_f_0(GlobalVarName_42, (MR_String) ".MR_pt_tablenode.MR_integer = 0;");
          {
            Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_113, 0) = ((MR_Box) (Context_15));
          }
          {
            ResetImpl_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ResetImpl_44, 0) = ((MR_Box) (ResetCode_43));
            MR_hl_field(MR_mktag(0), ResetImpl_44, 1) = ((MR_Box) (Var_113));
          }
          {
            Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (Arg2_41));
            MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (Arg1_40));
            MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) (Var_116));
          }
          {
            ResetPragmaFCInfo_45 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ResetPragmaFCInfo_45, 0) = ((MR_Box) (STATE_VARIABLE_Attrs_110_110));
            MR_hl_field(MR_mktag(0), ResetPragmaFCInfo_45, 1) = ((MR_Box) (ResetPredSymName_23));
            MR_hl_field(MR_mktag(0), ResetPragmaFCInfo_45, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), ResetPragmaFCInfo_45, 3) = ((MR_Box) (Var_115));
            MR_hl_field(MR_mktag(0), ResetPragmaFCInfo_45, 4) = ((MR_Box) (STATE_VARIABLE_VarSet_80_80));
            MR_hl_field(MR_mktag(0), ResetPragmaFCInfo_45, 5) = ((MR_Box) (InstVarSet_28));
            MR_hl_field(MR_mktag(0), ResetPragmaFCInfo_45, 6) = ((MR_Box) (ResetImpl_44));
          }
          hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(ResetPragmaFCInfo_45, PredStatus_18, Context_15, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_4[2])), STATE_VARIABLE_ModuleInfo_74_74, STATE_VARIABLE_ModuleInfo_51, STATE_VARIABLE_Specs_75_75, STATE_VARIABLE_Specs_55);
          *STATE_VARIABLE_QualInfo_53 = STATE_VARIABLE_QualInfo_0_52;
        }
        break;
    }
    *STATE_VARIABLE_ProcTable_49 = STATE_VARIABLE_ProcTable_0_48;
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
    MR_Word PorF_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SimpleCallId_5, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word SymName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SimpleCallId_5, (MR_Integer) 1))));
    MR_Integer Arity0_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SimpleCallId_5, (MR_Integer) 2))));
    MR_Integer Arity_17;
    MR_String Var_28;
    MR_String Var_30;

    switch (PorF_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        Arity_17 = (MR_Integer) ((MR_Unsigned) Arity0_16 - (MR_Unsigned) 1);
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
        HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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
        HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
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
  MR_Word STATE_VARIABLE_ProcTable_0_59,
  MR_Word * STATE_VARIABLE_ProcTable_60,
  MR_Word STATE_VARIABLE_ModuleInfo_0_61,
  MR_Word * STATE_VARIABLE_ModuleInfo_62,
  MR_Word STATE_VARIABLE_QualInfo_0_63,
  MR_Word * STATE_VARIABLE_QualInfo_64,
  MR_Word STATE_VARIABLE_Specs_0_65,
  MR_Word * STATE_VARIABLE_Specs_66)
{
  {
    MR_Word TableBuiltinModule_23;
    MR_Word StatsPredSymName_24;
    MR_Word StatsTypeName_25;
    MR_Word StatsType_26;
    MR_Word TypeAndModeArg1_27;
    MR_Word TypeAndModeArg2_28;
    MR_Word TypeAndModeArg3_29;
    MR_Word ArgTypesAndModes_30;
    MR_Word TypeVarSet_31;
    MR_Word InstVarSet_32;
    MR_Word Attrs_35;
    MR_Word MaybeAttrs_36;
    MR_Word PredDecl_37;
    MR_Word Stats_40;
    MR_Word IO0_41;
    MR_Word IO_42;
    MR_Word Globals_43;
    MR_Word IsTablingSupported_44;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_80;
    MR_Word STATE_VARIABLE_ModuleInfo_90_90;
    MR_Word STATE_VARIABLE_Specs_91_91;
    MR_Word STATE_VARIABLE_VarSet_92_92;
    MR_Word STATE_VARIABLE_VarSet_94_94;
    MR_Word STATE_VARIABLE_VarSet_96_96;
    MR_Word STATE_VARIABLE_VarSet_98_98;
    MR_Word _MaybePredProcId_38;

    TableBuiltinModule_23 = mdbcomp__builtin_modules__mercury_table_statistics_module_0_f_0();
    StatsPredSymName_24 = hlds__make_hlds__add_pragma__add_pragma_tabling__tabling_stats_pred_name_3_f_0(SimpleCallId_16, ProcId_14, SingleProc_17);
    {
      StatsTypeName_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), StatsTypeName_25, 0) = ((MR_Box) (TableBuiltinModule_23));
      MR_hl_field(MR_mktag(1), StatsTypeName_25, 1) = ((MR_Box) ((MR_String) "proc_table_statistics"));
    }
    {
      StatsType_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), StatsType_26, 0) = ((MR_Box) (StatsTypeName_25));
      MR_hl_field(MR_mktag(1), StatsType_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), StatsType_26, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_70 = parse_tree__prog_mode__out_mode_0_f_0();
    {
      TypeAndModeArg1_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeAndModeArg1_27, 0) = ((MR_Box) (StatsType_26));
      MR_hl_field(MR_mktag(1), TypeAndModeArg1_27, 1) = ((MR_Box) (Var_70));
    }
    Var_71 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
    Var_72 = parse_tree__prog_mode__di_mode_0_f_0();
    {
      TypeAndModeArg2_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeAndModeArg2_28, 0) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(1), TypeAndModeArg2_28, 1) = ((MR_Box) (Var_72));
    }
    Var_73 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
    Var_74 = parse_tree__prog_mode__uo_mode_0_f_0();
    {
      TypeAndModeArg3_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeAndModeArg3_29, 0) = ((MR_Box) (Var_73));
      MR_hl_field(MR_mktag(1), TypeAndModeArg3_29, 1) = ((MR_Box) (Var_74));
    }
    {
      Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (TypeAndModeArg3_29));
      MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (TypeAndModeArg2_28));
      MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (Var_76));
    }
    {
      ArgTypesAndModes_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ArgTypesAndModes_30, 0) = ((MR_Box) (TypeAndModeArg1_27));
      MR_hl_field(MR_mktag(1), ArgTypesAndModes_30, 1) = ((MR_Box) (Var_75));
    }
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet_31);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_32);
    {
      Var_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_80, 0) = ((MR_Box) (SimpleCallId_16));
      MR_hl_field(MR_mktag(3), Var_80, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    Attrs_35 = (MR_Word) (Var_80);
    {
      MaybeAttrs_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeAttrs_36, 0) = ((MR_Box) (Attrs_35));
    }
    {
      PredDecl_37 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredDecl_37, 0) = ((MR_Box) (StatsPredSymName_24));
      MR_hl_field(MR_mktag(0), PredDecl_37, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), PredDecl_37, 2) = ((MR_Box) (ArgTypesAndModes_30));
      MR_hl_field(MR_mktag(0), PredDecl_37, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), PredDecl_37, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), PredDecl_37, 5) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_4[0])));
      MR_hl_field(MR_mktag(0), PredDecl_37, 6) = ((MR_Box) (MaybeAttrs_36));
      MR_hl_field(MR_mktag(0), PredDecl_37, 7) = ((MR_Box) (TypeVarSet_31));
      MR_hl_field(MR_mktag(0), PredDecl_37, 8) = ((MR_Box) (InstVarSet_32));
      MR_hl_field(MR_mktag(0), PredDecl_37, 9) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), PredDecl_37, 10) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), PredDecl_37, 11) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[46]));
      MR_hl_field(MR_mktag(0), PredDecl_37, 12) = ((MR_Box) (Context_15));
      MR_hl_field(MR_mktag(0), PredDecl_37, 13) = ((MR_Box) ((MR_Integer) -1));
    }
    hlds__add_pred__module_add_pred_decl_8_p_0(PredStatus_18, (MR_Integer) 1, PredDecl_37, &_MaybePredProcId_38, STATE_VARIABLE_ModuleInfo_0_61, &STATE_VARIABLE_ModuleInfo_90_90, STATE_VARIABLE_Specs_0_65, &STATE_VARIABLE_Specs_91_91);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &STATE_VARIABLE_VarSet_92_92);
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "Stats", &Stats_40, STATE_VARIABLE_VarSet_92_92, &STATE_VARIABLE_VarSet_94_94);
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "IO0", &IO0_41, STATE_VARIABLE_VarSet_94_94, &STATE_VARIABLE_VarSet_96_96);
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "IO", &IO_42, STATE_VARIABLE_VarSet_96_96, &STATE_VARIABLE_VarSet_98_98);
    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_90_90, &Globals_43);
    libs__globals__current_grade_supports_tabling_2_p_0(Globals_43, &IsTablingSupported_44);
    switch (IsTablingSupported_44) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word DummyStatsFuncSymName_52;
          MR_Word DummyStatsFuncTerm_53;
          MR_Word Args_54;
          MR_Word GetStatsExpr_55;
          MR_Word UpdateIOExpr_56;
          MR_Word GetStatsUpdateIOExpr_57;
          MR_Word BodyExpr_58;
          MR_Word Var_99;
          MR_Word Var_102;
          MR_Word Var_103;
          MR_Word Var_104;
          MR_Word Var_105;
          MR_Word Var_106;
          MR_Word Var_115;

          Var_99 = mdbcomp__builtin_modules__mercury_table_statistics_module_0_f_0();
          {
            DummyStatsFuncSymName_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), DummyStatsFuncSymName_52, 0) = ((MR_Box) (Var_99));
            MR_hl_field(MR_mktag(1), DummyStatsFuncSymName_52, 1) = ((MR_Box) ((MR_String) "dummy_proc_table_statistics"));
          }
          mdbcomp__sym_name__sym_name_to_term_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Context_15, DummyStatsFuncSymName_52, (MR_Word) ((MR_Unsigned) 0U), &DummyStatsFuncTerm_53);
          {
            Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (Stats_40));
            MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) (Context_15));
          }
          {
            Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (IO0_41));
            MR_hl_field(MR_mktag(1), Var_104, 1) = ((MR_Box) (Context_15));
          }
          {
            Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) (IO_42));
            MR_hl_field(MR_mktag(1), Var_106, 1) = ((MR_Box) (Context_15));
          }
          {
            Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (Var_106));
            MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (Var_104));
            MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) (Var_105));
          }
          {
            Args_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Args_54, 0) = ((MR_Box) (Var_102));
            MR_hl_field(MR_mktag(1), Args_54, 1) = ((MR_Box) (Var_103));
          }
          {
            GetStatsExpr_55 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), GetStatsExpr_55, 0) = ((MR_Box) (Context_15));
            MR_hl_field(MR_mktag(0), GetStatsExpr_55, 1) = ((MR_Box) (Var_102));
            MR_hl_field(MR_mktag(0), GetStatsExpr_55, 2) = ((MR_Box) (DummyStatsFuncTerm_53));
            MR_hl_field(MR_mktag(0), GetStatsExpr_55, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          }
          {
            UpdateIOExpr_56 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), UpdateIOExpr_56, 0) = ((MR_Box) (Context_15));
            MR_hl_field(MR_mktag(0), UpdateIOExpr_56, 1) = ((MR_Box) (Var_104));
            MR_hl_field(MR_mktag(0), UpdateIOExpr_56, 2) = ((MR_Box) (Var_106));
            MR_hl_field(MR_mktag(0), UpdateIOExpr_56, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          }
          {
            GetStatsUpdateIOExpr_57 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), GetStatsUpdateIOExpr_57, 0) = ((MR_Box) (Context_15));
            MR_hl_field(MR_mktag(2), GetStatsUpdateIOExpr_57, 1) = ((MR_Box) (GetStatsExpr_55));
            MR_hl_field(MR_mktag(2), GetStatsUpdateIOExpr_57, 2) = ((MR_Box) (UpdateIOExpr_56));
          }
          {
            BodyExpr_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), BodyExpr_58, 0) = ((MR_Box) ((MR_Unsigned) 7U));
            MR_hl_field(MR_mktag(3), BodyExpr_58, 1) = ((MR_Box) (Context_15));
            MR_hl_field(MR_mktag(3), BodyExpr_58, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), BodyExpr_58, 3) = ((MR_Box) (GetStatsUpdateIOExpr_57));
          }
          {
            Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (BodyExpr_58));
          }
          hlds__make_hlds__add_clause__module_add_clause_15_p_0(STATE_VARIABLE_VarSet_98_98, (MR_Integer) 0, StatsPredSymName_24, Args_54, Var_115, PredStatus_18, Context_15, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 12U), STATE_VARIABLE_ModuleInfo_90_90, STATE_VARIABLE_ModuleInfo_62, STATE_VARIABLE_QualInfo_0_63, STATE_VARIABLE_QualInfo_64, STATE_VARIABLE_Specs_91_91, STATE_VARIABLE_Specs_66);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Arg1_45;
          MR_Word Arg2_46;
          MR_Word Arg3_47;
          MR_String Global_48;
          MR_String StatsCode_49;
          MR_Word StatsImpl_50;
          MR_Word StatsPragmaFCInfo_51;
          MR_Word Var_122;
          MR_Word Var_125;
          MR_Word Var_128;
          MR_Word STATE_VARIABLE_Attrs_130_130;
          MR_Word STATE_VARIABLE_Attrs_133_133;
          MR_Word STATE_VARIABLE_Attrs_135_135;
          MR_Word STATE_VARIABLE_Attrs_137_137;
          MR_Word STATE_VARIABLE_Attrs_139_139;
          MR_String Var_142;
          MR_Word Var_144;
          MR_Word Var_146;
          MR_Word Var_147;
          MR_Word Var_148;

          Var_122 = parse_tree__prog_mode__out_mode_0_f_0();
          {
            Arg1_45 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Arg1_45, 0) = ((MR_Box) (Stats_40));
            MR_hl_field(MR_mktag(0), Arg1_45, 1) = ((MR_Box) ((MR_String) "Stats"));
            MR_hl_field(MR_mktag(0), Arg1_45, 2) = ((MR_Box) (Var_122));
            MR_hl_field(MR_mktag(0), Arg1_45, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          }
          Var_125 = parse_tree__prog_mode__di_mode_0_f_0();
          {
            Arg2_46 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Arg2_46, 0) = ((MR_Box) (IO0_41));
            MR_hl_field(MR_mktag(0), Arg2_46, 1) = ((MR_Box) ((MR_String) "_IO0"));
            MR_hl_field(MR_mktag(0), Arg2_46, 2) = ((MR_Box) (Var_125));
            MR_hl_field(MR_mktag(0), Arg2_46, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          }
          Var_128 = parse_tree__prog_mode__uo_mode_0_f_0();
          {
            Arg3_47 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Arg3_47, 0) = ((MR_Box) (IO_42));
            MR_hl_field(MR_mktag(0), Arg3_47, 1) = ((MR_Box) ((MR_String) "_IO"));
            MR_hl_field(MR_mktag(0), Arg3_47, 2) = ((MR_Box) (Var_128));
            MR_hl_field(MR_mktag(0), Arg3_47, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          }
          STATE_VARIABLE_Attrs_130_130 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 0);
          parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_130_130, &STATE_VARIABLE_Attrs_133_133);
          parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_133_133, &STATE_VARIABLE_Attrs_135_135);
          parse_tree__prog_data_foreign__set_purity_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_135_135, &STATE_VARIABLE_Attrs_137_137);
          parse_tree__prog_data_foreign__set_may_duplicate_3_p_0((MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_4[1])), STATE_VARIABLE_Attrs_137_137, &STATE_VARIABLE_Attrs_139_139);
          Global_48 = hlds__make_hlds__add_pragma__add_pragma_tabling__table_info_c_global_var_name_3_f_0(STATE_VARIABLE_ModuleInfo_90_90, SimpleCallId_16, ProcId_14);
          Var_142 = mercury__string__f_43_43_2_f_0(Global_48, (MR_String) ", &Stats);");
          StatsCode_49 = mercury__string__f_43_43_2_f_0((MR_String) "MR_get_tabling_stats(&", Var_142);
          {
            Var_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_144, 0) = ((MR_Box) (Context_15));
          }
          {
            StatsImpl_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), StatsImpl_50, 0) = ((MR_Box) (StatsCode_49));
            MR_hl_field(MR_mktag(0), StatsImpl_50, 1) = ((MR_Box) (Var_144));
          }
          {
            Var_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_148, 0) = ((MR_Box) (Arg3_47));
            MR_hl_field(MR_mktag(1), Var_148, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_147, 0) = ((MR_Box) (Arg2_46));
            MR_hl_field(MR_mktag(1), Var_147, 1) = ((MR_Box) (Var_148));
          }
          {
            Var_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_146, 0) = ((MR_Box) (Arg1_45));
            MR_hl_field(MR_mktag(1), Var_146, 1) = ((MR_Box) (Var_147));
          }
          {
            StatsPragmaFCInfo_51 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), StatsPragmaFCInfo_51, 0) = ((MR_Box) (STATE_VARIABLE_Attrs_139_139));
            MR_hl_field(MR_mktag(0), StatsPragmaFCInfo_51, 1) = ((MR_Box) (StatsPredSymName_24));
            MR_hl_field(MR_mktag(0), StatsPragmaFCInfo_51, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), StatsPragmaFCInfo_51, 3) = ((MR_Box) (Var_146));
            MR_hl_field(MR_mktag(0), StatsPragmaFCInfo_51, 4) = ((MR_Box) (STATE_VARIABLE_VarSet_98_98));
            MR_hl_field(MR_mktag(0), StatsPragmaFCInfo_51, 5) = ((MR_Box) (InstVarSet_32));
            MR_hl_field(MR_mktag(0), StatsPragmaFCInfo_51, 6) = ((MR_Box) (StatsImpl_50));
          }
          hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(StatsPragmaFCInfo_51, PredStatus_18, Context_15, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_4[2])), STATE_VARIABLE_ModuleInfo_90_90, STATE_VARIABLE_ModuleInfo_62, STATE_VARIABLE_Specs_91_91, STATE_VARIABLE_Specs_66);
          *STATE_VARIABLE_QualInfo_64 = STATE_VARIABLE_QualInfo_0_63;
        }
        break;
    }
    *STATE_VARIABLE_ProcTable_60 = STATE_VARIABLE_ProcTable_0_59;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__table_info_c_global_var_name_3_f_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__make_hlds__add_pragma__add_pragma_tabling__IntroducedFrom__pred__table_info_c_global_var_name__643__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
      Var_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__table_info_c_global_var_name_3_f_0_1));
      MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (Target_10));
      MR_hl_field(MR_mktag(0), Var_24, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__require__expect_3_p_0(Var_24, (MR_String) "function \140hlds.make_hlds.add_pragma.add_pragma_tabling.table_info_c_global_var_name\'/3", (MR_String) "memo table statistics and reset are supported only for C");
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 284, &HighLevelCode_11);
    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_5, &ModuleName_12);
    PredOrFunc_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SimpleCallId_6, (MR_Integer) 0))) & (MR_Integer) 1);
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
            ProcLabel_23 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ProcLabel_23, 0) = ((MR_Box) (ModuleName_12));
            MR_hl_field(MR_mktag(0), ProcLabel_23, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_13));
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
            MLDS_PredLabel_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), MLDS_PredLabel_20, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_13));
            MR_hl_field(MR_mktag(0), MLDS_PredLabel_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), MLDS_PredLabel_20, 2) = ((MR_Box) (PredName_16));
            MR_hl_field(MR_mktag(0), MLDS_PredLabel_20, 3) = ((MR_Box) (Arity_15));
            MR_hl_field(MR_mktag(0), MLDS_PredLabel_20, 4) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
          }
          {
            MLDS_ProcLabel_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
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
    MR_Word PorF_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SimpleCallId_5, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word SymName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SimpleCallId_5, (MR_Integer) 1))));
    MR_Integer Arity0_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SimpleCallId_5, (MR_Integer) 2))));
    MR_Integer Arity_17;
    MR_String Var_28;
    MR_String Var_30;

    switch (PorF_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        Arity_17 = (MR_Integer) ((MR_Unsigned) Arity0_16 - (MR_Unsigned) 1);
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
        HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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
        HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
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
    MR_Word conv2_STATE_VARIABLE_ModuleInfo_64;
    MR_Word conv1_STATE_VARIABLE_QualInfo_66;
    MR_Word conv0_STATE_VARIABLE_Specs_68;

    hlds__make_hlds__add_pragma__add_pragma_tabling__module_add_pragma_tabled_for_pred_15_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 9)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 10)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ModuleInfo_64, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_QualInfo_66, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_Specs_68);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ModuleInfo_64));
    *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_QualInfo_66));
    *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_68));
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__module_add_pragma_tabled_9_p_0(
  MR_Word TabledInfo_10,
  MR_Word Context_11,
  MR_Word Status_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_47,
  MR_Word * STATE_VARIABLE_ModuleInfo_48,
  MR_Word STATE_VARIABLE_QualInfo_0_49,
  MR_Word * STATE_VARIABLE_QualInfo_50,
  MR_Word STATE_VARIABLE_Specs_0_51,
  MR_Word * STATE_VARIABLE_Specs_52)
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
    MR_Word STATE_VARIABLE_ModuleInfo_71_71;
    MR_Word STATE_VARIABLE_Specs_74_74;
    MR_Word STATE_VARIABLE_Specs_122_122;
    MR_Word Var_124;
    MR_Box conv5_STATE_VARIABLE_ModuleInfo_48;
    MR_Box conv4_STATE_VARIABLE_QualInfo_50;
    MR_Box conv3_STATE_VARIABLE_Specs_52;

    hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_47, &PredicateTable0_23);
    EvalMethodStr_24 = parse_tree__prog_out__eval_method_to_string_1_f_0(EvalMethod_16);
    if ((MaybePredOrFunc_22 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word PredIds0_134;

      hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(PredicateTable0_23, (MR_Integer) 0, PredName_20, Arity_21, &PredIds0_134);
      if ((PredIds0_134 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_54;
        MR_Word Var_62;
        MR_Word ModuleName_128;
        MR_Word DescPieces_129;
        MR_Word PredId_130;

        hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_0_47, &ModuleName_128);
        {
          Var_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_54, 0) = ((MR_Box) ((MR_Unsigned) 19U));
          MR_hl_field(MR_mktag(3), Var_54, 1) = ((MR_Box) (EvalMethodStr_24));
        }
        {
          DescPieces_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), DescPieces_129, 0) = ((MR_Box) (Var_54));
          MR_hl_field(MR_mktag(1), DescPieces_129, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[42])));
        }
        {
          Var_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_62, 0) = ((MR_Box) ((MR_Unsigned) 7U));
          MR_hl_field(MR_mktag(3), Var_62, 1) = ((MR_Box) (PredName_20));
        }
        hlds__add_pred__preds_add_implicit_report_error_14_p_0(STATE_VARIABLE_ModuleInfo_0_47, &STATE_VARIABLE_ModuleInfo_71_71, ModuleName_128, PredName_20, Arity_21, (MR_Integer) 0, Status_12, (MR_Integer) 0, Context_11, Var_62, DescPieces_129, &PredId_130, STATE_VARIABLE_Specs_0_51, &STATE_VARIABLE_Specs_74_74);
        {
          PredIds_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), PredIds_31, 0) = ((MR_Box) (PredId_130));
          MR_hl_field(MR_mktag(1), PredIds_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
      {
        PredIds_31 = PredIds0_134;
        STATE_VARIABLE_ModuleInfo_71_71 = STATE_VARIABLE_ModuleInfo_0_47;
        STATE_VARIABLE_Specs_74_74 = STATE_VARIABLE_Specs_0_51;
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
        MR_Word Var_66;
        MR_Word Var_73;

        hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_0_47, &ModuleName_28);
        {
          Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_66, 0) = ((MR_Box) ((MR_Unsigned) 19U));
          MR_hl_field(MR_mktag(3), Var_66, 1) = ((MR_Box) (EvalMethodStr_24));
        }
        {
          DescPieces_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), DescPieces_29, 0) = ((MR_Box) (Var_66));
          MR_hl_field(MR_mktag(1), DescPieces_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[42])));
        }
        {
          Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_73, 0) = ((MR_Box) ((MR_Unsigned) 7U));
          MR_hl_field(MR_mktag(3), Var_73, 1) = ((MR_Box) (PredName_20));
        }
        hlds__add_pred__preds_add_implicit_report_error_14_p_0(STATE_VARIABLE_ModuleInfo_0_47, &STATE_VARIABLE_ModuleInfo_71_71, ModuleName_28, PredName_20, Arity_21, PredOrFunc_26, Status_12, (MR_Integer) 0, Context_11, Var_73, DescPieces_29, &PredId_30, STATE_VARIABLE_Specs_0_51, &STATE_VARIABLE_Specs_74_74);
        {
          PredIds_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), PredIds_31, 0) = ((MR_Box) (PredId_30));
          MR_hl_field(MR_mktag(1), PredIds_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
      {
        PredIds_31 = PredIds0_27;
        STATE_VARIABLE_ModuleInfo_71_71 = STATE_VARIABLE_ModuleInfo_0_47;
        STATE_VARIABLE_Specs_74_74 = STATE_VARIABLE_Specs_0_51;
      }
    }
    if ((MaybeAttributes_19 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Specs_122_122 = STATE_VARIABLE_Specs_74_74;
    else
    {
      MR_Word Attributes_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAttributes_19, (MR_Integer) 0))));
      MR_Word Statistics_37 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Attributes_36, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
      MR_Word AllowReset_38 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Attributes_36, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word Var_155 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_31, (MR_Integer) 1))));

      if ((Var_155 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_Specs_122_122 = STATE_VARIABLE_Specs_74_74;
      else
      {
        MR_Word STATE_VARIABLE_Specs_99_99;

        switch (Statistics_37) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            STATE_VARIABLE_Specs_99_99 = STATE_VARIABLE_Specs_74_74;
            break;
          case (MR_Integer) 0:
            {
              MR_Word StatsPieces_43;
              MR_Word StatsSpec_44;
              MR_Word Var_79;
              MR_Word Var_82;
              MR_Word Var_83;
              MR_Word Var_84;

              {
                Var_84 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_84, 0) = ((MR_Box) (PredName_20));
                MR_hl_field(MR_mktag(0), Var_84, 1) = ((MR_Box) (Arity_21));
              }
              {
                Var_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_83, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                MR_hl_field(MR_mktag(3), Var_83, 1) = ((MR_Box) (Var_84));
              }
              {
                Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (Var_83));
                MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[7])));
              }
              {
                Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[44])));
                MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (Var_82));
              }
              {
                StatsPieces_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), StatsPieces_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[43])));
                MR_hl_field(MR_mktag(1), StatsPieces_43, 1) = ((MR_Box) (Var_79));
              }
              {
                StatsSpec_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), StatsSpec_44, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), StatsSpec_44, 1) = ((MR_Box) ((MR_Unsigned) 16U));
                MR_hl_field(MR_mktag(1), StatsSpec_44, 2) = ((MR_Box) (Context_11));
                MR_hl_field(MR_mktag(1), StatsSpec_44, 3) = ((MR_Box) (StatsPieces_43));
              }
              {
                STATE_VARIABLE_Specs_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_99_99, 0) = ((MR_Box) (StatsSpec_44));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_99_99, 1) = ((MR_Box) (STATE_VARIABLE_Specs_74_74));
              }
            }
            break;
        }
        switch (AllowReset_38) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ResetPieces_45;
              MR_Word ResetSpec_46;
              MR_Word Var_102;
              MR_Word Var_105;
              MR_Word Var_106;
              MR_Word Var_107;

              {
                Var_107 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_107, 0) = ((MR_Box) (PredName_20));
                MR_hl_field(MR_mktag(0), Var_107, 1) = ((MR_Box) (Arity_21));
              }
              {
                Var_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_106, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                MR_hl_field(MR_mktag(3), Var_106, 1) = ((MR_Box) (Var_107));
              }
              {
                Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (Var_106));
                MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[10])));
              }
              {
                Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[44])));
                MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) (Var_105));
              }
              {
                ResetPieces_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ResetPieces_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[45])));
                MR_hl_field(MR_mktag(1), ResetPieces_45, 1) = ((MR_Box) (Var_102));
              }
              {
                ResetSpec_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ResetSpec_46, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), ResetSpec_46, 1) = ((MR_Box) ((MR_Unsigned) 16U));
                MR_hl_field(MR_mktag(1), ResetSpec_46, 2) = ((MR_Box) (Context_11));
                MR_hl_field(MR_mktag(1), ResetSpec_46, 3) = ((MR_Box) (ResetPieces_45));
              }
              {
                STATE_VARIABLE_Specs_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_122_122, 0) = ((MR_Box) (ResetSpec_46));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_122_122, 1) = ((MR_Box) (STATE_VARIABLE_Specs_99_99));
              }
            }
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_Specs_122_122 = STATE_VARIABLE_Specs_99_99;
            break;
        }
      }
    }
    {
      Var_124 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_124, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), Var_124, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__module_add_pragma_tabled_9_p_0_1));
      MR_hl_field(MR_mktag(0), Var_124, 2) = ((MR_Box) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(0), Var_124, 3) = ((MR_Box) (EvalMethod_16));
      MR_hl_field(MR_mktag(0), Var_124, 4) = ((MR_Box) (PredName_20));
      MR_hl_field(MR_mktag(0), Var_124, 5) = ((MR_Box) (Arity_21));
      MR_hl_field(MR_mktag(0), Var_124, 6) = ((MR_Box) (MaybePredOrFunc_22));
      MR_hl_field(MR_mktag(0), Var_124, 7) = ((MR_Box) (MaybeModes_18));
      MR_hl_field(MR_mktag(0), Var_124, 8) = ((MR_Box) (MaybeAttributes_19));
      MR_hl_field(MR_mktag(0), Var_124, 9) = ((MR_Box) (Context_11));
      MR_hl_field(MR_mktag(0), Var_124, 10) = ((MR_Box) (Status_12));
    }
    mercury__list__foldl3_8_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0), (MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[0]), Var_124, PredIds_31, ((MR_Box) (STATE_VARIABLE_ModuleInfo_71_71)), &conv5_STATE_VARIABLE_ModuleInfo_48, ((MR_Box) (STATE_VARIABLE_QualInfo_0_49)), &conv4_STATE_VARIABLE_QualInfo_50, ((MR_Box) (STATE_VARIABLE_Specs_122_122)), &conv3_STATE_VARIABLE_Specs_52);
    *STATE_VARIABLE_ModuleInfo_48 = ((MR_Word) (conv5_STATE_VARIABLE_ModuleInfo_48));
    *STATE_VARIABLE_QualInfo_50 = ((MR_Word) (conv4_STATE_VARIABLE_QualInfo_50));
    *STATE_VARIABLE_Specs_52 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_52));
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
