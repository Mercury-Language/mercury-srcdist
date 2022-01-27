/*
** Automatically generated from `add_pragma_tabling.m'
** by the Mercury compiler,
** version rotd-2022-01-09
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
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
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
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_test.mih"
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
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_hlds.mih"
#include "hlds.make_hlds_error.mih"
#include "hlds.passes_aux.mih"
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
#include "libs.optimization_options.mih"
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
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.mlds.mih"
#include "ml_backend.mlds_to_c_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
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
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_constr_util.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.add_clause.mih"
#include "hlds.make_hlds.add_foreign_proc.mih"
#include "hlds.make_hlds.add_pragma.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.make_hlds_warn.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "ll_backend.llds_out.llds_out_util.mih"
#include "hlds.make_hlds.add_pragma.add_pragma_type_spec.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_tabling__maybe__pti_maybe_1__plain_parse_tree__prog_data_pragma__type_ctor_info_table_attributes_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_tabling__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__IntroducedFrom__pred__table_info_c_global_var_name__712__1_2_p_0(
  MR_Word Target_10,
  MR_Word HeadVar__2_27);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__module_add_pragma_tabled_for_pred_14_p_0(
  MR_Word TabledMethod0_15,
  MR_Word PFUMM_16,
  MR_Word PredName_17,
  MR_Word MaybeAttributes_18,
  MR_Word Context_19,
  MR_Word ItemMercuryStatus_20,
  MR_Word PredStatus_21,
  MR_Word PredId_22,
  MR_Word STATE_VARIABLE_ModuleInfo_0_65,
  MR_Word * STATE_VARIABLE_ModuleInfo_66,
  MR_Word STATE_VARIABLE_QualInfo_0_67,
  MR_Word * STATE_VARIABLE_QualInfo_68,
  MR_Word STATE_VARIABLE_Specs_0_69,
  MR_Word * STATE_VARIABLE_Specs_70);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__set_eval_method_create_aux_preds_list_16_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Context_2,
  MR_Word PFSymNameArity_3,
  MR_Word SingleProc_4,
  MR_Word TabledMethod_5,
  MR_Word MaybeAttributes_6,
  MR_Word ItemMercuryStatus_7,
  MR_Word PredStatus_8,
  MR_Word STATE_VARIABLE_ProcTable_0_9,
  MR_Word * STATE_VARIABLE_ProcTable_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12,
  MR_Word STATE_VARIABLE_QualInfo_0_13,
  MR_Word * STATE_VARIABLE_QualInfo_14,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__set_eval_method_create_aux_preds_17_p_0(
  MR_Integer ProcId_18,
  MR_Word ProcInfo0_19,
  MR_Word Context_20,
  MR_Word PFSymNameArity_21,
  MR_Word SingleProc_22,
  MR_Word TabledMethod_23,
  MR_Word MaybeAttributes_24,
  MR_Word ItemMercuryStatus_25,
  MR_Word PredStatus_26,
  MR_Word STATE_VARIABLE_ProcTable_0_53,
  MR_Word * STATE_VARIABLE_ProcTable_54,
  MR_Word STATE_VARIABLE_ModuleInfo_0_55,
  MR_Word * STATE_VARIABLE_ModuleInfo_56,
  MR_Word STATE_VARIABLE_QualInfo_0_57,
  MR_Word * STATE_VARIABLE_QualInfo_58,
  MR_Word STATE_VARIABLE_Specs_0_59,
  MR_Word * STATE_VARIABLE_Specs_60);

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
hlds__make_hlds__add_pragma__add_pragma_tabling__create_tabling_reset_pred_15_p_0(
  MR_Integer ProcId_16,
  MR_Word Context_17,
  MR_Word PFSymNameArity_18,
  MR_Word SingleProc_19,
  MR_Word IsTablingSupported_20,
  MR_Word ItemMercuryStatus_21,
  MR_Word PredStatus_22,
  MR_Word STATE_VARIABLE_ProcTable_0_53,
  MR_Word * STATE_VARIABLE_ProcTable_54,
  MR_Word STATE_VARIABLE_ModuleInfo_0_55,
  MR_Word * STATE_VARIABLE_ModuleInfo_56,
  MR_Word STATE_VARIABLE_QualInfo_0_57,
  MR_Word * STATE_VARIABLE_QualInfo_58,
  MR_Word STATE_VARIABLE_Specs_0_59,
  MR_Word * STATE_VARIABLE_Specs_60);

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__tabling_reset_pred_name_3_f_0(
  MR_Word PFSymNameArity_5,
  MR_Integer ProcId_6,
  MR_Word SingleProc_7);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__create_tabling_statistics_pred_15_p_0(
  MR_Integer ProcId_16,
  MR_Word Context_17,
  MR_Word PFSymNameArity_18,
  MR_Word SingleProc_19,
  MR_Word IsTablingSupported_20,
  MR_Word ItemMercuryStatus_21,
  MR_Word PredStatus_22,
  MR_Word STATE_VARIABLE_ProcTable_0_64,
  MR_Word * STATE_VARIABLE_ProcTable_65,
  MR_Word STATE_VARIABLE_ModuleInfo_0_66,
  MR_Word * STATE_VARIABLE_ModuleInfo_67,
  MR_Word STATE_VARIABLE_QualInfo_0_68,
  MR_Word * STATE_VARIABLE_QualInfo_69,
  MR_Word STATE_VARIABLE_Specs_0_70,
  MR_Word * STATE_VARIABLE_Specs_71);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__table_info_c_global_var_name_3_f_0_1(
  MR_Box closure_arg);

static MR_String MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__table_info_c_global_var_name_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word PFSymNameArity_6,
  MR_Integer ProcId_7);

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__tabling_stats_pred_name_3_f_0(
  MR_Word PFSymNameArity_5,
  MR_Integer ProcId_6,
  MR_Word SingleProc_7);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__module_add_pragma_tabled_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);


static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[61][2];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_2[6][1];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_3[1][17];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_4[1][5];




static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[61][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[1]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: cannot request statistics"))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for the ambiguous name"))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "would have an ambiguous name too."))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "since the compiler-generated statistics predicate"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: cannot request allow_reset"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "since the compiler-generated reset predicate"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[7])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[14])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: "))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has a"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "option to suppress this warning."))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[5])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--no-warn-table-with-inline"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[19])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "You can use the"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[21])))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[23])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "since tabled predicates cannot be inlined."))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[24])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "This inline pragma will be ignored"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[26])))
  },
  /* row 29 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[28])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[29])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "inline"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[31])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration but also has a"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[33])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: "))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration for imported"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[5])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "with no declared modes."))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[5])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration for undeclared mode of"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which has no declared modes."))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[5])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[46])))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error in"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has duplicate"))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "pragmas specified."))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[5])))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has both"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Only one kind of tabling pragma may be applied to it."))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[5])))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[56])))
  },
  /* row 58 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 59 */
  {
    ((MR_Box) ((MR_String) "too many argument tabling methods specified.")),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 60 */
  {
    ((MR_Box) ((MR_String) "not enough argument tabling methods specified.")),
    ((MR_Box) ((MR_String) ""))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_2[6][1] = {
  /* row 0 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 1 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 4 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[59]))
  },
  /* row 5 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[60]))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_3[1][17] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 14)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tabled_eval_method_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pred_func_or_unknown_maybe_modes_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_tabling__maybe__pti_maybe_1__plain_parse_tree__prog_data_pragma__type_ctor_info_table_attributes_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0)),
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

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_4[1][5] = {
  /* row 0 */
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
hlds__make_hlds__add_pragma__add_pragma_tabling__IntroducedFrom__pred__table_info_c_global_var_name__712__1_2_p_0(
  MR_Word Target_10,
  MR_Word HeadVar__2_27)
{
  {
    MR_bool succeeded = (Target_10 == HeadVar__2_27);

    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__module_add_pragma_tabled_for_pred_14_p_0(
  MR_Word TabledMethod0_15,
  MR_Word PFUMM_16,
  MR_Word PredName_17,
  MR_Word MaybeAttributes_18,
  MR_Word Context_19,
  MR_Word ItemMercuryStatus_20,
  MR_Word PredStatus_21,
  MR_Word PredId_22,
  MR_Word STATE_VARIABLE_ModuleInfo_0_65,
  MR_Word * STATE_VARIABLE_ModuleInfo_66,
  MR_Word STATE_VARIABLE_QualInfo_0_67,
  MR_Word * STATE_VARIABLE_QualInfo_68,
  MR_Word STATE_VARIABLE_Specs_0_69,
  MR_Word * STATE_VARIABLE_Specs_70)
{
  {
    MR_bool succeeded;
    MR_Word Globals_26;
    MR_Word TabledMethod_29;
    MR_Word PredicateTable_30;
    MR_Word Preds_31;
    MR_Word PredInfo0_32;
    MR_Word MaybePredOrFunc_33;
    MR_Word UserArity_34;
    MR_Word MaybeModes_35;
    MR_Word PredOrFunc_36;
    MR_Integer PredFormArityInt_37;
    MR_Word PFSymNameArity_38;
    MR_String TabledMethodStr_39;
    MR_Word VeryVerbose_40;
    MR_Word Markers_44;
    MR_Word Var_74;
    MR_Word STATE_VARIABLE_Specs_130_130;
    MR_Box conv0_PredInfo0_32;
    MR_Word WarnTableWithInline_45;
    MR_Word Var_86;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_65, &Globals_26);
    succeeded = ((MR_tag((MR_Word) TabledMethod0_15)) == (MR_Integer) 3);
    if (succeeded)
    {
      MR_Word OwnStacks_28;

      libs__globals__lookup_bool_option_3_p_0(Globals_26, (MR_Integer) 264, &OwnStacks_28);
      switch (OwnStacks_28) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          TabledMethod_29 = (MR_Word) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_2[0]));
          break;
        case (MR_Integer) 1:
          TabledMethod_29 = (MR_Word) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_2[1]));
          break;
      }
    }
    else
      TabledMethod_29 = TabledMethod0_15;
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_65, &PredicateTable_30);
    hlds__pred_table__predicate_table_get_preds_2_p_0(PredicateTable_30, &Preds_31);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), Preds_31, ((MR_Box) (PredId_22)), &conv0_PredInfo0_32);
    PredInfo0_32 = ((MR_Word) (conv0_PredInfo0_32));
    parse_tree__prog_item__pfumm_to_maybe_pf_arity_maybe_modes_4_p_0(PFUMM_16, &MaybePredOrFunc_33, &UserArity_34, &MaybeModes_35);
    if ((MaybePredOrFunc_33 == (MR_Word) ((MR_Unsigned) 0U)))
      PredOrFunc_36 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo0_32);
    else
      PredOrFunc_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredOrFunc_33, (MR_Integer) 0))));
    parse_tree__prog_util__user_arity_pred_form_arity_3_p_0(PredOrFunc_36, UserArity_34, &Var_74);
    PredFormArityInt_37 = (MR_Integer) (Var_74);
    {
      PFSymNameArity_38 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PFSymNameArity_38, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_36));
      MR_hl_field(MR_mktag(0), PFSymNameArity_38, 1) = ((MR_Box) (PredName_17));
      MR_hl_field(MR_mktag(0), PFSymNameArity_38, 2) = ((MR_Box) (PredFormArityInt_37));
    }
    TabledMethodStr_39 = parse_tree__prog_out__tabled_eval_method_to_string_1_f_0(TabledMethod_29);
    libs__globals__lookup_bool_option_3_p_0(Globals_26, (MR_Integer) 71, &VeryVerbose_40);
    switch (VeryVerbose_40) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String IdStr_42;
          MR_Word ProgressStream_43;

          IdStr_42 = parse_tree__prog_out__pf_sym_name_orig_arity_to_string_3_f_0(PredOrFunc_36, PredName_17, PredFormArityInt_37);
          hlds__passes_aux__get_progress_output_stream_4_p_0(STATE_VARIABLE_ModuleInfo_0_65, &ProgressStream_43);
          mercury__io__write_string_4_p_0(ProgressStream_43, (MR_String) "% Processing \140:- pragma ");
          mercury__io__write_string_4_p_0(ProgressStream_43, TabledMethodStr_39);
          mercury__io__write_string_4_p_0(ProgressStream_43, (MR_String) "\' for ");
          mercury__io__write_string_4_p_0(ProgressStream_43, IdStr_42);
          mercury__io__write_string_4_p_0(ProgressStream_43, (MR_String) "...\n");
        }
        break;
    }
    hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo0_32, &Markers_44);
    succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_44, (MR_Integer) 6);
    if (succeeded)
    {
      Var_86 = (MR_Integer) 44;
      libs__globals__lookup_bool_option_3_p_0(Globals_26, Var_86, &WarnTableWithInline_45);
      succeeded = (WarnTableWithInline_45 == (MR_Integer) 1);
    }
    if (succeeded)
    {
      MR_Word InlineWarningPieces_46;
      MR_Word InlineWarningSpec_47;
      MR_Word Var_89;
      MR_Word Var_90;
      MR_Word Var_91;
      MR_Word Var_94;
      MR_Word Var_95;

      {
        Var_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_90, 0) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(3), Var_90, 1) = ((MR_Box) (PFSymNameArity_38));
      }
      {
        Var_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_95, 0) = ((MR_Box) ((MR_Unsigned) 29U));
        MR_hl_field(MR_mktag(3), Var_95, 1) = ((MR_Box) (TabledMethodStr_39));
      }
      {
        Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (Var_95));
        MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[35])));
      }
      {
        Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[17])));
        MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) (Var_94));
      }
      {
        Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (Var_90));
        MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (Var_91));
      }
      {
        InlineWarningPieces_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), InlineWarningPieces_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[16])));
        MR_hl_field(MR_mktag(1), InlineWarningPieces_46, 1) = ((MR_Box) (Var_89));
      }
      {
        InlineWarningSpec_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), InlineWarningSpec_47, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_pragma_tabling.module_add_pragma_tabled_for_pred\'/14"));
        MR_hl_field(MR_mktag(1), InlineWarningSpec_47, 1) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(1), InlineWarningSpec_47, 2) = ((MR_Box) ((MR_Unsigned) 36U));
        MR_hl_field(MR_mktag(1), InlineWarningSpec_47, 3) = ((MR_Box) (Context_19));
        MR_hl_field(MR_mktag(1), InlineWarningSpec_47, 4) = ((MR_Box) (InlineWarningPieces_46));
      }
      {
        STATE_VARIABLE_Specs_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_130_130, 0) = ((MR_Box) (InlineWarningSpec_47));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_130_130, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_69));
      }
    }
    else
      STATE_VARIABLE_Specs_130_130 = STATE_VARIABLE_Specs_0_69;
    succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo0_32);
    if (succeeded)
    {
      MR_Word Pieces_48;
      MR_Word Spec_49;
      MR_Word Var_133;
      MR_Word Var_134;
      MR_Word Var_135;
      MR_Word Var_138;
      MR_Word Var_139;

      {
        Var_134 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_134, 0) = ((MR_Box) ((MR_Unsigned) 29U));
        MR_hl_field(MR_mktag(3), Var_134, 1) = ((MR_Box) (TabledMethodStr_39));
      }
      {
        Var_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_139, 0) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(3), Var_139, 1) = ((MR_Box) (PFSymNameArity_38));
      }
      {
        Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_138, 0) = ((MR_Box) (Var_139));
        MR_hl_field(MR_mktag(1), Var_138, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[39])));
      }
      {
        Var_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_135, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[37])));
        MR_hl_field(MR_mktag(1), Var_135, 1) = ((MR_Box) (Var_138));
      }
      {
        Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_133, 0) = ((MR_Box) (Var_134));
        MR_hl_field(MR_mktag(1), Var_133, 1) = ((MR_Box) (Var_135));
      }
      {
        Pieces_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[36])));
        MR_hl_field(MR_mktag(1), Pieces_48, 1) = ((MR_Box) (Var_133));
      }
      {
        Spec_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_49, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_pragma_tabling.module_add_pragma_tabled_for_pred\'/14"));
        MR_hl_field(MR_mktag(1), Spec_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_49, 2) = ((MR_Box) ((MR_Unsigned) 36U));
        MR_hl_field(MR_mktag(1), Spec_49, 3) = ((MR_Box) (Context_19));
        MR_hl_field(MR_mktag(1), Spec_49, 4) = ((MR_Box) (Pieces_48));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_70 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_49));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_130_130));
      }
      *STATE_VARIABLE_QualInfo_68 = STATE_VARIABLE_QualInfo_0_67;
      *STATE_VARIABLE_ModuleInfo_66 = STATE_VARIABLE_ModuleInfo_0_65;
    }
    else
    {
      MR_Word NeedsStrat_50;
      MR_Word ProcTable0_53;
      MR_Word ExistingProcs_54;
      MR_Word STATE_VARIABLE_ModuleInfo_150_150;

      NeedsStrat_50 = hlds__hlds_pred__tabled_eval_method_needs_stratification_1_f_0(TabledMethod_29);
      switch (NeedsStrat_50) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_ModuleInfo_150_150 = STATE_VARIABLE_ModuleInfo_0_65;
          break;
        case (MR_Integer) 1:
          {
            MR_Word StratPredIds0_51;
            MR_Word StratPredIds_52;

            hlds__hlds_module__module_info_get_must_be_stratified_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_65, &StratPredIds0_51);
            mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_22)), StratPredIds0_51, &StratPredIds_52);
            hlds__hlds_module__module_info_set_must_be_stratified_preds_3_p_0(StratPredIds_52, STATE_VARIABLE_ModuleInfo_0_65, &STATE_VARIABLE_ModuleInfo_150_150);
          }
          break;
      }
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_32, &ProcTable0_53);
      mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_53, &ExistingProcs_54);
      if ((MaybeModes_35 == (MR_Word) ((MR_Unsigned) 0U)))
        if ((ExistingProcs_54 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_157;
          MR_Word Var_158;
          MR_Word Var_159;
          MR_Word Var_162;
          MR_Word Var_163;
          MR_Word Pieces_204;
          MR_Word Spec_205;

          {
            Var_158 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_158, 0) = ((MR_Box) ((MR_Unsigned) 29U));
            MR_hl_field(MR_mktag(3), Var_158, 1) = ((MR_Box) (TabledMethodStr_39));
          }
          {
            Var_163 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_163, 0) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(3), Var_163, 1) = ((MR_Box) (PFSymNameArity_38));
          }
          {
            Var_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_162, 0) = ((MR_Box) (Var_163));
            MR_hl_field(MR_mktag(1), Var_162, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[42])));
          }
          {
            Var_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_159, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[40])));
            MR_hl_field(MR_mktag(1), Var_159, 1) = ((MR_Box) (Var_162));
          }
          {
            Var_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_157, 0) = ((MR_Box) (Var_158));
            MR_hl_field(MR_mktag(1), Var_157, 1) = ((MR_Box) (Var_159));
          }
          {
            Pieces_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_204, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[36])));
            MR_hl_field(MR_mktag(1), Pieces_204, 1) = ((MR_Box) (Var_157));
          }
          {
            Spec_205 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_205, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_pragma_tabling.module_add_pragma_tabled_for_pred\'/14"));
            MR_hl_field(MR_mktag(1), Spec_205, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_205, 2) = ((MR_Box) ((MR_Unsigned) 36U));
            MR_hl_field(MR_mktag(1), Spec_205, 3) = ((MR_Box) (Context_19));
            MR_hl_field(MR_mktag(1), Spec_205, 4) = ((MR_Box) (Pieces_204));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_70 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_205));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_130_130));
          }
          *STATE_VARIABLE_ModuleInfo_66 = STATE_VARIABLE_ModuleInfo_150_150;
          *STATE_VARIABLE_QualInfo_68 = STATE_VARIABLE_QualInfo_0_67;
        }
        else
        {
          MR_Word ExistingProcsTail_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ExistingProcs_54, (MR_Integer) 1))));
          MR_Word SingleProc_62;
          MR_Word STATE_VARIABLE_ModuleInfo_151_151;
          MR_Word ProcTable_206;
          MR_Word PredInfo_207;

          if ((ExistingProcsTail_61 == (MR_Word) ((MR_Unsigned) 0U)))
            SingleProc_62 = (MR_Integer) 1;
          else
            SingleProc_62 = (MR_Integer) 0;
          hlds__make_hlds__add_pragma__add_pragma_tabling__set_eval_method_create_aux_preds_list_16_p_0(ExistingProcs_54, Context_19, PFSymNameArity_38, SingleProc_62, TabledMethod_29, MaybeAttributes_18, ItemMercuryStatus_20, PredStatus_21, ProcTable0_53, &ProcTable_206, STATE_VARIABLE_ModuleInfo_150_150, &STATE_VARIABLE_ModuleInfo_151_151, STATE_VARIABLE_QualInfo_0_67, STATE_VARIABLE_QualInfo_68, STATE_VARIABLE_Specs_130_130, STATE_VARIABLE_Specs_70);
          hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_206, PredInfo0_32, &PredInfo_207);
          hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_22, PredInfo_207, STATE_VARIABLE_ModuleInfo_151_151, STATE_VARIABLE_ModuleInfo_66);
        }
      else
      {
        MR_Word Modes_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModes_35, (MR_Integer) 0))));
        MR_Integer ProcId_56;

        succeeded = hlds__hlds_code_util__get_procedure_matching_argmodes_4_p_0(ExistingProcs_54, Modes_55, STATE_VARIABLE_ModuleInfo_150_150, &ProcId_56);
        if (succeeded)
        {
          MR_Word ProcInfo0_57;
          MR_Word ProcTable_58;
          MR_Word PredInfo_59;
          MR_Word STATE_VARIABLE_ModuleInfo_175_175;
          MR_Box conv1_ProcInfo0_57;

          mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_53, ((MR_Box) (ProcId_56)), &conv1_ProcInfo0_57);
          ProcInfo0_57 = ((MR_Word) (conv1_ProcInfo0_57));
          hlds__make_hlds__add_pragma__add_pragma_tabling__set_eval_method_create_aux_preds_17_p_0(ProcId_56, ProcInfo0_57, Context_19, PFSymNameArity_38, (MR_Integer) 1, TabledMethod_29, MaybeAttributes_18, ItemMercuryStatus_20, PredStatus_21, ProcTable0_53, &ProcTable_58, STATE_VARIABLE_ModuleInfo_150_150, &STATE_VARIABLE_ModuleInfo_175_175, STATE_VARIABLE_QualInfo_0_67, STATE_VARIABLE_QualInfo_68, STATE_VARIABLE_Specs_130_130, STATE_VARIABLE_Specs_70);
          hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_58, PredInfo0_32, &PredInfo_59);
          hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_22, PredInfo_59, STATE_VARIABLE_ModuleInfo_175_175, STATE_VARIABLE_ModuleInfo_66);
        }
        else
        {
          MR_Word Var_181;
          MR_Word Var_182;
          MR_Word Var_183;
          MR_Word Var_186;
          MR_Word Var_187;
          MR_Word Pieces_198;
          MR_Word Spec_199;

          {
            Var_182 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_182, 0) = ((MR_Box) ((MR_Unsigned) 29U));
            MR_hl_field(MR_mktag(3), Var_182, 1) = ((MR_Box) (TabledMethodStr_39));
          }
          {
            Var_187 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_187, 0) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(3), Var_187, 1) = ((MR_Box) (PFSymNameArity_38));
          }
          {
            Var_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_186, 0) = ((MR_Box) (Var_187));
            MR_hl_field(MR_mktag(1), Var_186, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[39])));
          }
          {
            Var_183 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_183, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[44])));
            MR_hl_field(MR_mktag(1), Var_183, 1) = ((MR_Box) (Var_186));
          }
          {
            Var_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_181, 0) = ((MR_Box) (Var_182));
            MR_hl_field(MR_mktag(1), Var_181, 1) = ((MR_Box) (Var_183));
          }
          {
            Pieces_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_198, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[43])));
            MR_hl_field(MR_mktag(1), Pieces_198, 1) = ((MR_Box) (Var_181));
          }
          {
            Spec_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_199, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_pragma_tabling.module_add_pragma_tabled_for_pred\'/14"));
            MR_hl_field(MR_mktag(1), Spec_199, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_199, 2) = ((MR_Box) ((MR_Unsigned) 36U));
            MR_hl_field(MR_mktag(1), Spec_199, 3) = ((MR_Box) (Context_19));
            MR_hl_field(MR_mktag(1), Spec_199, 4) = ((MR_Box) (Pieces_198));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_70 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_199));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_130_130));
          }
          *STATE_VARIABLE_QualInfo_68 = STATE_VARIABLE_QualInfo_0_67;
          *STATE_VARIABLE_ModuleInfo_66 = STATE_VARIABLE_ModuleInfo_150_150;
        }
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__set_eval_method_create_aux_preds_list_16_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Context_2,
  MR_Word PFSymNameArity_3,
  MR_Word SingleProc_4,
  MR_Word TabledMethod_5,
  MR_Word MaybeAttributes_6,
  MR_Word ItemMercuryStatus_7,
  MR_Word PredStatus_8,
  MR_Word STATE_VARIABLE_ProcTable_0_9,
  MR_Word * STATE_VARIABLE_ProcTable_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12,
  MR_Word STATE_VARIABLE_QualInfo_0_13,
  MR_Word * STATE_VARIABLE_QualInfo_14,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_16 = STATE_VARIABLE_Specs_0_15;
      *STATE_VARIABLE_QualInfo_14 = STATE_VARIABLE_QualInfo_0_13;
      *STATE_VARIABLE_ModuleInfo_12 = STATE_VARIABLE_ModuleInfo_0_11;
      *STATE_VARIABLE_ProcTable_10 = STATE_VARIABLE_ProcTable_0_9;
    }
    else
    {
      MR_Integer ProcId_36;
      MR_Word ProcInfo0_37;
      MR_Word Rest_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_ProcTable_59_59;
      MR_Word STATE_VARIABLE_ModuleInfo_60_60;
      MR_Word STATE_VARIABLE_QualInfo_61_61;
      MR_Word STATE_VARIABLE_Specs_62_62;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ProcTable_0_9;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_11;
      MR_Word next_value_of_STATE_VARIABLE_QualInfo_0_13;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_15;

      ProcId_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_58, (MR_Integer) 0))));
      ProcInfo0_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_58, (MR_Integer) 1))));
      hlds__make_hlds__add_pragma__add_pragma_tabling__set_eval_method_create_aux_preds_17_p_0(ProcId_36, ProcInfo0_37, Context_2, PFSymNameArity_3, SingleProc_4, TabledMethod_5, MaybeAttributes_6, ItemMercuryStatus_7, PredStatus_8, STATE_VARIABLE_ProcTable_0_9, &STATE_VARIABLE_ProcTable_59_59, STATE_VARIABLE_ModuleInfo_0_11, &STATE_VARIABLE_ModuleInfo_60_60, STATE_VARIABLE_QualInfo_0_13, &STATE_VARIABLE_QualInfo_61_61, STATE_VARIABLE_Specs_0_15, &STATE_VARIABLE_Specs_62_62);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Rest_38;
      next_value_of_STATE_VARIABLE_ProcTable_0_9 = STATE_VARIABLE_ProcTable_59_59;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_11 = STATE_VARIABLE_ModuleInfo_60_60;
      next_value_of_STATE_VARIABLE_QualInfo_0_13 = STATE_VARIABLE_QualInfo_61_61;
      next_value_of_STATE_VARIABLE_Specs_0_15 = STATE_VARIABLE_Specs_62_62;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ProcTable_0_9 = next_value_of_STATE_VARIABLE_ProcTable_0_9;
      STATE_VARIABLE_ModuleInfo_0_11 = next_value_of_STATE_VARIABLE_ModuleInfo_0_11;
      STATE_VARIABLE_QualInfo_0_13 = next_value_of_STATE_VARIABLE_QualInfo_0_13;
      STATE_VARIABLE_Specs_0_15 = next_value_of_STATE_VARIABLE_Specs_0_15;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__set_eval_method_create_aux_preds_17_p_0(
  MR_Integer ProcId_18,
  MR_Word ProcInfo0_19,
  MR_Word Context_20,
  MR_Word PFSymNameArity_21,
  MR_Word SingleProc_22,
  MR_Word TabledMethod_23,
  MR_Word MaybeAttributes_24,
  MR_Word ItemMercuryStatus_25,
  MR_Word PredStatus_26,
  MR_Word STATE_VARIABLE_ProcTable_0_53,
  MR_Word * STATE_VARIABLE_ProcTable_54,
  MR_Word STATE_VARIABLE_ModuleInfo_0_55,
  MR_Word * STATE_VARIABLE_ModuleInfo_56,
  MR_Word STATE_VARIABLE_QualInfo_0_57,
  MR_Word * STATE_VARIABLE_QualInfo_58,
  MR_Word STATE_VARIABLE_Specs_0_59,
  MR_Word * STATE_VARIABLE_Specs_60)
{
  {
    MR_bool succeeded;
    MR_Word OldEvalMethod_31;

    hlds__hlds_pred__proc_info_get_eval_method_2_p_0(ProcInfo0_19, &OldEvalMethod_31);
    if ((OldEvalMethod_31 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word MaybeDeclaredArgModes_32;

      hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0(ProcInfo0_19, &MaybeDeclaredArgModes_32);
      if ((MaybeDeclaredArgModes_32 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_String TabledMethodStr_33;
        MR_Word Pieces_34;
        MR_Word Spec_35;
        MR_Word Var_142;
        MR_Word Var_143;
        MR_Word Var_144;
        MR_Word Var_147;
        MR_Word Var_148;

        TabledMethodStr_33 = parse_tree__prog_out__tabled_eval_method_to_pragma_name_1_f_0(TabledMethod_23);
        {
          Var_143 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_143, 0) = ((MR_Box) ((MR_Unsigned) 29U));
          MR_hl_field(MR_mktag(3), Var_143, 1) = ((MR_Box) (TabledMethodStr_33));
        }
        {
          Var_148 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_148, 0) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(3), Var_148, 1) = ((MR_Box) (PFSymNameArity_21));
        }
        {
          Var_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_147, 0) = ((MR_Box) (Var_148));
          MR_hl_field(MR_mktag(1), Var_147, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[47])));
        }
        {
          Var_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_144, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[40])));
          MR_hl_field(MR_mktag(1), Var_144, 1) = ((MR_Box) (Var_147));
        }
        {
          Var_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_142, 0) = ((MR_Box) (Var_143));
          MR_hl_field(MR_mktag(1), Var_142, 1) = ((MR_Box) (Var_144));
        }
        {
          Pieces_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[43])));
          MR_hl_field(MR_mktag(1), Pieces_34, 1) = ((MR_Box) (Var_142));
        }
        {
          Spec_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_35, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_pragma_tabling.set_eval_method_create_aux_preds\'/17"));
          MR_hl_field(MR_mktag(1), Spec_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_35, 2) = ((MR_Box) ((MR_Unsigned) 36U));
          MR_hl_field(MR_mktag(1), Spec_35, 3) = ((MR_Box) (Context_20));
          MR_hl_field(MR_mktag(1), Spec_35, 4) = ((MR_Box) (Pieces_34));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_60 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_35));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_59));
        }
        *STATE_VARIABLE_ProcTable_54 = STATE_VARIABLE_ProcTable_0_53;
        *STATE_VARIABLE_ModuleInfo_56 = STATE_VARIABLE_ModuleInfo_0_55;
        *STATE_VARIABLE_QualInfo_58 = STATE_VARIABLE_QualInfo_0_57;
      }
      else
      {
        MR_Word DeclaredArgModes_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDeclaredArgModes_32, (MR_Integer) 0))));
        MR_Word Statistics_39;
        MR_Word AllowReset_40;
        MR_Word MaybeError_43;
        MR_Word EvalMethod_46;
        MR_Word ProcInfo1_47;
        MR_Word ProcInfo_48;
        MR_Word Globals_49;
        MR_Word IsTablingSupported_50;
        MR_Word STATE_VARIABLE_Specs_130_130;
        MR_Word STATE_VARIABLE_ProcTable_131_131;
        MR_Word STATE_VARIABLE_ProcTable_132_132;
        MR_Word STATE_VARIABLE_ModuleInfo_133_133;
        MR_Word STATE_VARIABLE_QualInfo_134_134;
        MR_Word STATE_VARIABLE_Specs_135_135;

        if ((MaybeAttributes_24 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          Statistics_39 = (MR_Integer) 1;
          AllowReset_40 = (MR_Integer) 1;
          hlds__make_hlds__add_pragma__add_pragma_tabling__check_pred_args_against_tabling_4_p_0(DeclaredArgModes_36, STATE_VARIABLE_ModuleInfo_0_55, (MR_Integer) 1, &MaybeError_43);
        }
        else
        {
          MR_Word Attributes_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAttributes_24, (MR_Integer) 0))));
          MR_Word Strictness_191 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Attributes_37, (MR_Integer) 0))));

          Statistics_39 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Attributes_37, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
          AllowReset_40 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Attributes_37, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
          switch (MR_tag((MR_Word) Strictness_191)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              hlds__make_hlds__add_pragma__add_pragma_tabling__check_pred_args_against_tabling_4_p_0(DeclaredArgModes_36, STATE_VARIABLE_ModuleInfo_0_55, (MR_Integer) 1, &MaybeError_43);
              break;
            case (MR_Integer) 1:
              {
                MR_Word MaybeArgMethods_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Strictness_191, (MR_Integer) 0))));

                hlds__make_hlds__add_pragma__add_pragma_tabling__check_pred_args_against_tabling_methods_5_p_0(DeclaredArgModes_36, MaybeArgMethods_41, STATE_VARIABLE_ModuleInfo_0_55, (MR_Integer) 1, &MaybeError_43);
              }
              break;
          }
        }
        if ((MaybeError_43 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_Specs_130_130 = STATE_VARIABLE_Specs_0_59;
        else
        {
          MR_String ArgMsg_44;
          MR_String ErrorMsg_45;
          MR_Word Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeError_43, (MR_Integer) 0))));
          MR_Word Var_108;
          MR_Word Var_109;
          MR_Word Var_110;
          MR_Word Var_113;
          MR_Word Var_114;
          MR_Word Var_115;
          MR_Word Var_118;
          MR_Word Var_120;
          MR_Word Var_121;
          MR_Word Var_122;
          MR_Word Var_123;
          MR_String TabledMethodStr_162;
          MR_Word Pieces_163;
          MR_Word Spec_164;

          ArgMsg_44 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_105, (MR_Integer) 0))));
          ErrorMsg_45 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_105, (MR_Integer) 1))));
          TabledMethodStr_162 = parse_tree__prog_out__tabled_eval_method_to_pragma_name_1_f_0(TabledMethod_23);
          {
            Var_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_109, 0) = ((MR_Box) ((MR_Unsigned) 29U));
            MR_hl_field(MR_mktag(3), Var_109, 1) = ((MR_Box) (TabledMethodStr_162));
          }
          {
            Var_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_114, 0) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(3), Var_114, 1) = ((MR_Box) (PFSymNameArity_21));
          }
          {
            Var_121 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_121, 0) = ((MR_Box) (ArgMsg_44));
          }
          {
            Var_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_123, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_123, 1) = ((MR_Box) (ErrorMsg_45));
          }
          {
            Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (Var_123));
            MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[5])));
          }
          {
            Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_120, 0) = ((MR_Box) (Var_121));
            MR_hl_field(MR_mktag(1), Var_120, 1) = ((MR_Box) (Var_122));
          }
          {
            Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_118, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(1), Var_118, 1) = ((MR_Box) (Var_120));
          }
          {
            Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[49])));
            MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) (Var_118));
          }
          {
            Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_113, 0) = ((MR_Box) (Var_114));
            MR_hl_field(MR_mktag(1), Var_113, 1) = ((MR_Box) (Var_115));
          }
          {
            Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[40])));
            MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) (Var_113));
          }
          {
            Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) (Var_109));
            MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) (Var_110));
          }
          {
            Pieces_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_163, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[48])));
            MR_hl_field(MR_mktag(1), Pieces_163, 1) = ((MR_Box) (Var_108));
          }
          {
            Spec_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_164, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_pragma_tabling.set_eval_method_create_aux_preds\'/17"));
            MR_hl_field(MR_mktag(1), Spec_164, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_164, 2) = ((MR_Box) ((MR_Unsigned) 36U));
            MR_hl_field(MR_mktag(1), Spec_164, 3) = ((MR_Box) (Context_20));
            MR_hl_field(MR_mktag(1), Spec_164, 4) = ((MR_Box) (Pieces_163));
          }
          {
            STATE_VARIABLE_Specs_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_130_130, 0) = ((MR_Box) (Spec_164));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_130_130, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_59));
          }
        }
        {
          EvalMethod_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), EvalMethod_46, 0) = ((MR_Box) (TabledMethod_23));
        }
        hlds__hlds_pred__proc_info_set_eval_method_3_p_0(EvalMethod_46, ProcInfo0_19, &ProcInfo1_47);
        hlds__hlds_pred__proc_info_set_table_attributes_3_p_0(MaybeAttributes_24, ProcInfo1_47, &ProcInfo_48);
        mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_18)), ((MR_Box) (ProcInfo_48)), STATE_VARIABLE_ProcTable_0_53, &STATE_VARIABLE_ProcTable_131_131);
        hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_55, &Globals_49);
        libs__globals__current_grade_supports_tabling_3_p_0(Globals_49, TabledMethod_23, &IsTablingSupported_50);
        switch (Statistics_39) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              STATE_VARIABLE_ProcTable_132_132 = STATE_VARIABLE_ProcTable_131_131;
              STATE_VARIABLE_ModuleInfo_133_133 = STATE_VARIABLE_ModuleInfo_0_55;
              STATE_VARIABLE_QualInfo_134_134 = STATE_VARIABLE_QualInfo_0_57;
              STATE_VARIABLE_Specs_135_135 = STATE_VARIABLE_Specs_130_130;
            }
            break;
          case (MR_Integer) 0:
            hlds__make_hlds__add_pragma__add_pragma_tabling__create_tabling_statistics_pred_15_p_0(ProcId_18, Context_20, PFSymNameArity_21, SingleProc_22, IsTablingSupported_50, ItemMercuryStatus_25, PredStatus_26, STATE_VARIABLE_ProcTable_131_131, &STATE_VARIABLE_ProcTable_132_132, STATE_VARIABLE_ModuleInfo_0_55, &STATE_VARIABLE_ModuleInfo_133_133, STATE_VARIABLE_QualInfo_0_57, &STATE_VARIABLE_QualInfo_134_134, STATE_VARIABLE_Specs_130_130, &STATE_VARIABLE_Specs_135_135);
            break;
        }
        switch (AllowReset_40) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            hlds__make_hlds__add_pragma__add_pragma_tabling__create_tabling_reset_pred_15_p_0(ProcId_18, Context_20, PFSymNameArity_21, SingleProc_22, IsTablingSupported_50, ItemMercuryStatus_25, PredStatus_26, STATE_VARIABLE_ProcTable_132_132, STATE_VARIABLE_ProcTable_54, STATE_VARIABLE_ModuleInfo_133_133, STATE_VARIABLE_ModuleInfo_56, STATE_VARIABLE_QualInfo_134_134, STATE_VARIABLE_QualInfo_58, STATE_VARIABLE_Specs_135_135, STATE_VARIABLE_Specs_60);
            break;
          case (MR_Integer) 1:
            {
              *STATE_VARIABLE_ProcTable_54 = STATE_VARIABLE_ProcTable_132_132;
              *STATE_VARIABLE_ModuleInfo_56 = STATE_VARIABLE_ModuleInfo_133_133;
              *STATE_VARIABLE_QualInfo_58 = STATE_VARIABLE_QualInfo_134_134;
              *STATE_VARIABLE_Specs_60 = STATE_VARIABLE_Specs_135_135;
            }
            break;
        }
      }
    }
    else
    {
      MR_Word OldTabledMethod_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldEvalMethod_31, (MR_Integer) 0))));
      MR_String TabledMethodStr_171;
      MR_Word Pieces_172;
      MR_Word Spec_173;

      TabledMethodStr_171 = parse_tree__prog_out__tabled_eval_method_to_pragma_name_1_f_0(TabledMethod_23);
      succeeded = parse_tree__prog_data_pragma____Unify____tabled_eval_method_0_0(OldTabledMethod_51, TabledMethod_23);
      if (succeeded)
      {
        MR_Word Var_63;
        MR_Word Var_64;
        MR_Word Var_65;
        MR_Word Var_68;
        MR_Word Var_69;

        {
          Var_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_64, 0) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(3), Var_64, 1) = ((MR_Box) (PFSymNameArity_21));
        }
        {
          Var_69 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_69, 0) = ((MR_Box) (TabledMethodStr_171));
        }
        {
          Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Var_69));
          MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[52])));
        }
        {
          Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[50])));
          MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_68));
        }
        {
          Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Var_64));
          MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_65));
        }
        {
          Pieces_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_172, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[43])));
          MR_hl_field(MR_mktag(1), Pieces_172, 1) = ((MR_Box) (Var_63));
        }
      }
      else
      {
        MR_String OldTabledMethodStr_52;
        MR_Word Var_78;
        MR_Word Var_79;
        MR_Word Var_80;
        MR_Word Var_83;
        MR_Word Var_84;
        MR_Word Var_85;
        MR_Word Var_88;
        MR_Word Var_89;

        OldTabledMethodStr_52 = parse_tree__prog_out__tabled_eval_method_to_pragma_name_1_f_0(OldTabledMethod_51);
        {
          Var_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_79, 0) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(3), Var_79, 1) = ((MR_Box) (PFSymNameArity_21));
        }
        {
          Var_84 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_84, 0) = ((MR_Box) (OldTabledMethodStr_52));
        }
        {
          Var_89 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_89, 0) = ((MR_Box) (TabledMethodStr_171));
        }
        {
          Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (Var_89));
          MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[57])));
        }
        {
          Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[54])));
          MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (Var_88));
        }
        {
          Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (Var_84));
          MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (Var_85));
        }
        {
          Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[53])));
          MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (Var_83));
        }
        {
          Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Var_79));
          MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (Var_80));
        }
        {
          Pieces_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_172, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[43])));
          MR_hl_field(MR_mktag(1), Pieces_172, 1) = ((MR_Box) (Var_78));
        }
      }
      {
        Spec_173 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_173, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_pragma_tabling.set_eval_method_create_aux_preds\'/17"));
        MR_hl_field(MR_mktag(1), Spec_173, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_173, 2) = ((MR_Box) ((MR_Unsigned) 36U));
        MR_hl_field(MR_mktag(1), Spec_173, 3) = ((MR_Box) (Context_20));
        MR_hl_field(MR_mktag(1), Spec_173, 4) = ((MR_Box) (Pieces_172));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_60 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_173));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_59));
      }
      *STATE_VARIABLE_ProcTable_54 = STATE_VARIABLE_ProcTable_0_53;
      *STATE_VARIABLE_ModuleInfo_56 = STATE_VARIABLE_ModuleInfo_0_55;
      *STATE_VARIABLE_QualInfo_58 = STATE_VARIABLE_QualInfo_0_57;
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

      succeeded = check_hlds__mode_test__mode_is_fully_input_2_p_0(ModuleInfo_2, Mode_7);
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
        succeeded = check_hlds__mode_test__mode_is_fully_output_2_p_0(ModuleInfo_2, Mode_7);
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
        *HeadVar__5_5 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_2[4]));
    else
    {
      MR_Word Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__5_5 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_2[5]));
      else
      {
        MR_Word MaybeArgMethod_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word MaybeArgMethods_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));

        succeeded = check_hlds__mode_test__mode_is_fully_input_2_p_0(ModuleInfo_3, Var_67);
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
          succeeded = check_hlds__mode_test__mode_is_fully_output_2_p_0(ModuleInfo_3, Var_67);
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
hlds__make_hlds__add_pragma__add_pragma_tabling__create_tabling_reset_pred_15_p_0(
  MR_Integer ProcId_16,
  MR_Word Context_17,
  MR_Word PFSymNameArity_18,
  MR_Word SingleProc_19,
  MR_Word IsTablingSupported_20,
  MR_Word ItemMercuryStatus_21,
  MR_Word PredStatus_22,
  MR_Word STATE_VARIABLE_ProcTable_0_53,
  MR_Word * STATE_VARIABLE_ProcTable_54,
  MR_Word STATE_VARIABLE_ModuleInfo_0_55,
  MR_Word * STATE_VARIABLE_ModuleInfo_56,
  MR_Word STATE_VARIABLE_QualInfo_0_57,
  MR_Word * STATE_VARIABLE_QualInfo_58,
  MR_Word STATE_VARIABLE_Specs_0_59,
  MR_Word * STATE_VARIABLE_Specs_60)
{
  {
    MR_Word ResetPredSymName_27;
    MR_Word TypeAndModeArg1_28;
    MR_Word TypeAndModeArg2_29;
    MR_Word ArgTypesAndModes_30;
    MR_Word TypeVarSet_31;
    MR_Word InstVarSet_32;
    MR_Word Attrs_35;
    MR_Word MaybeAttrs_36;
    MR_Word PredDecl_37;
    MR_Word IO0_40;
    MR_Word IO_41;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_69;
    MR_Word STATE_VARIABLE_ModuleInfo_79_79;
    MR_Word STATE_VARIABLE_Specs_80_80;
    MR_Word STATE_VARIABLE_VarSet_81_81;
    MR_Word STATE_VARIABLE_VarSet_83_83;
    MR_Word STATE_VARIABLE_VarSet_85_85;
    MR_Word _MaybePredProcId_38;

    ResetPredSymName_27 = hlds__make_hlds__add_pragma__add_pragma_tabling__tabling_reset_pred_name_3_f_0(PFSymNameArity_18, ProcId_16, SingleProc_19);
    Var_61 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
    Var_62 = parse_tree__prog_mode__di_mode_0_f_0();
    {
      TypeAndModeArg1_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeAndModeArg1_28, 0) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(1), TypeAndModeArg1_28, 1) = ((MR_Box) (Var_62));
    }
    Var_63 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
    Var_64 = parse_tree__prog_mode__uo_mode_0_f_0();
    {
      TypeAndModeArg2_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeAndModeArg2_29, 0) = ((MR_Box) (Var_63));
      MR_hl_field(MR_mktag(1), TypeAndModeArg2_29, 1) = ((MR_Box) (Var_64));
    }
    {
      Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (TypeAndModeArg2_29));
      MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      ArgTypesAndModes_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ArgTypesAndModes_30, 0) = ((MR_Box) (TypeAndModeArg1_28));
      MR_hl_field(MR_mktag(1), ArgTypesAndModes_30, 1) = ((MR_Box) (Var_65));
    }
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet_31);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_32);
    {
      Var_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_69, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_69, 1) = ((MR_Box) (PFSymNameArity_18));
      MR_hl_field(MR_mktag(3), Var_69, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    }
    Attrs_35 = (MR_Word) (Var_69);
    {
      MaybeAttrs_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeAttrs_36, 0) = ((MR_Box) (Attrs_35));
    }
    {
      PredDecl_37 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredDecl_37, 0) = ((MR_Box) (ResetPredSymName_27));
      MR_hl_field(MR_mktag(0), PredDecl_37, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), PredDecl_37, 2) = ((MR_Box) (ArgTypesAndModes_30));
      MR_hl_field(MR_mktag(0), PredDecl_37, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), PredDecl_37, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), PredDecl_37, 5) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_2[2])));
      MR_hl_field(MR_mktag(0), PredDecl_37, 6) = ((MR_Box) (MaybeAttrs_36));
      MR_hl_field(MR_mktag(0), PredDecl_37, 7) = ((MR_Box) (TypeVarSet_31));
      MR_hl_field(MR_mktag(0), PredDecl_37, 8) = ((MR_Box) (InstVarSet_32));
      MR_hl_field(MR_mktag(0), PredDecl_37, 9) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), PredDecl_37, 10) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), PredDecl_37, 11) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[58]));
      MR_hl_field(MR_mktag(0), PredDecl_37, 12) = ((MR_Box) (Context_17));
      MR_hl_field(MR_mktag(0), PredDecl_37, 13) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    hlds__add_pred__module_add_pred_decl_9_p_0(ItemMercuryStatus_21, PredStatus_22, (MR_Integer) 1, PredDecl_37, &_MaybePredProcId_38, STATE_VARIABLE_ModuleInfo_0_55, &STATE_VARIABLE_ModuleInfo_79_79, STATE_VARIABLE_Specs_0_59, &STATE_VARIABLE_Specs_80_80);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &STATE_VARIABLE_VarSet_81_81);
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "IO0", &IO0_40, STATE_VARIABLE_VarSet_81_81, &STATE_VARIABLE_VarSet_83_83);
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "IO", &IO_41, STATE_VARIABLE_VarSet_83_83, &STATE_VARIABLE_VarSet_85_85);
    switch (IsTablingSupported_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Args_49;
          MR_Word BodyExpr_50;
          MR_Word ResetClauseInfo_51;
          MR_Word Var_86;
          MR_Word Var_87;
          MR_Word Var_88;
          MR_Word Var_94;

          {
            Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (IO0_40));
            MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (Context_17));
          }
          {
            Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (IO_41));
            MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (Context_17));
          }
          {
            Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (Var_88));
            MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Args_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Args_49, 0) = ((MR_Box) (Var_86));
            MR_hl_field(MR_mktag(1), Args_49, 1) = ((MR_Box) (Var_87));
          }
          {
            BodyExpr_50 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), BodyExpr_50, 0) = ((MR_Box) (Context_17));
            MR_hl_field(MR_mktag(0), BodyExpr_50, 1) = ((MR_Box) (Var_86));
            MR_hl_field(MR_mktag(0), BodyExpr_50, 2) = ((MR_Box) (Var_88));
            MR_hl_field(MR_mktag(0), BodyExpr_50, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          }
          {
            Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (BodyExpr_50));
            MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            ResetClauseInfo_51 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ResetClauseInfo_51, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), ResetClauseInfo_51, 1) = ((MR_Box) (ResetPredSymName_27));
            MR_hl_field(MR_mktag(0), ResetClauseInfo_51, 2) = ((MR_Box) (Args_49));
            MR_hl_field(MR_mktag(0), ResetClauseInfo_51, 3) = ((MR_Box) (STATE_VARIABLE_VarSet_85_85));
            MR_hl_field(MR_mktag(0), ResetClauseInfo_51, 4) = ((MR_Box) (Var_94));
            MR_hl_field(MR_mktag(0), ResetClauseInfo_51, 5) = ((MR_Box) (Context_17));
            MR_hl_field(MR_mktag(0), ResetClauseInfo_51, 6) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          hlds__make_hlds__add_clause__module_add_clause_9_p_0(PredStatus_22, (MR_Word) ((MR_Unsigned) 0U), ResetClauseInfo_51, STATE_VARIABLE_ModuleInfo_79_79, STATE_VARIABLE_ModuleInfo_56, STATE_VARIABLE_QualInfo_0_57, STATE_VARIABLE_QualInfo_58, STATE_VARIABLE_Specs_80_80, STATE_VARIABLE_Specs_60);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Arg1_42;
          MR_Word Arg2_43;
          MR_String GlobalVarName_44;
          MR_String ResetCode_45;
          MR_Word ResetImpl_46;
          MR_Word ResetFCInfo_47;
          MR_Word PragmaResetFCInfo_48;
          MR_Word Var_101;
          MR_Word Var_104;
          MR_Word STATE_VARIABLE_Attrs_106_106;
          MR_Word STATE_VARIABLE_Attrs_109_109;
          MR_Word STATE_VARIABLE_Attrs_111_111;
          MR_Word STATE_VARIABLE_Attrs_113_113;
          MR_Word STATE_VARIABLE_Attrs_115_115;
          MR_Word Var_118;
          MR_Word Var_120;
          MR_Word Var_121;

          Var_101 = parse_tree__prog_mode__di_mode_0_f_0();
          {
            Arg1_42 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Arg1_42, 0) = ((MR_Box) (IO0_40));
            MR_hl_field(MR_mktag(0), Arg1_42, 1) = ((MR_Box) ((MR_String) "_IO0"));
            MR_hl_field(MR_mktag(0), Arg1_42, 2) = ((MR_Box) (Var_101));
            MR_hl_field(MR_mktag(0), Arg1_42, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          }
          Var_104 = parse_tree__prog_mode__uo_mode_0_f_0();
          {
            Arg2_43 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Arg2_43, 0) = ((MR_Box) (IO_41));
            MR_hl_field(MR_mktag(0), Arg2_43, 1) = ((MR_Box) ((MR_String) "_IO"));
            MR_hl_field(MR_mktag(0), Arg2_43, 2) = ((MR_Box) (Var_104));
            MR_hl_field(MR_mktag(0), Arg2_43, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          }
          STATE_VARIABLE_Attrs_106_106 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 0);
          parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_106_106, &STATE_VARIABLE_Attrs_109_109);
          parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_109_109, &STATE_VARIABLE_Attrs_111_111);
          parse_tree__prog_data_foreign__set_purity_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_111_111, &STATE_VARIABLE_Attrs_113_113);
          parse_tree__prog_data_foreign__set_may_duplicate_3_p_0((MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_2[3])), STATE_VARIABLE_Attrs_113_113, &STATE_VARIABLE_Attrs_115_115);
          GlobalVarName_44 = hlds__make_hlds__add_pragma__add_pragma_tabling__table_info_c_global_var_name_3_f_0(STATE_VARIABLE_ModuleInfo_79_79, PFSymNameArity_18, ProcId_16);
          ResetCode_45 = mercury__string__f_43_43_2_f_0(GlobalVarName_44, (MR_String) ".MR_pt_tablenode.MR_integer = 0;");
          {
            Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_118, 0) = ((MR_Box) (Context_17));
          }
          {
            ResetImpl_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ResetImpl_46, 0) = ((MR_Box) (ResetCode_45));
            MR_hl_field(MR_mktag(0), ResetImpl_46, 1) = ((MR_Box) (Var_118));
          }
          {
            Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (Arg2_43));
            MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_120, 0) = ((MR_Box) (Arg1_42));
            MR_hl_field(MR_mktag(1), Var_120, 1) = ((MR_Box) (Var_121));
          }
          {
            ResetFCInfo_47 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ResetFCInfo_47, 0) = ((MR_Box) (STATE_VARIABLE_Attrs_115_115));
            MR_hl_field(MR_mktag(0), ResetFCInfo_47, 1) = ((MR_Box) (ResetPredSymName_27));
            MR_hl_field(MR_mktag(0), ResetFCInfo_47, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), ResetFCInfo_47, 3) = ((MR_Box) (Var_120));
            MR_hl_field(MR_mktag(0), ResetFCInfo_47, 4) = ((MR_Box) (STATE_VARIABLE_VarSet_85_85));
            MR_hl_field(MR_mktag(0), ResetFCInfo_47, 5) = ((MR_Box) (InstVarSet_32));
            MR_hl_field(MR_mktag(0), ResetFCInfo_47, 6) = ((MR_Box) (ResetImpl_46));
          }
          {
            PragmaResetFCInfo_48 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), PragmaResetFCInfo_48, 0) = ((MR_Box) (ResetFCInfo_47));
            MR_hl_field(MR_mktag(0), PragmaResetFCInfo_48, 1) = ((MR_Box) (Context_17));
            MR_hl_field(MR_mktag(0), PragmaResetFCInfo_48, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_6_p_0(PredStatus_22, PragmaResetFCInfo_48, STATE_VARIABLE_ModuleInfo_79_79, STATE_VARIABLE_ModuleInfo_56, STATE_VARIABLE_Specs_80_80, STATE_VARIABLE_Specs_60);
          *STATE_VARIABLE_QualInfo_58 = STATE_VARIABLE_QualInfo_0_57;
        }
        break;
    }
    *STATE_VARIABLE_ProcTable_54 = STATE_VARIABLE_ProcTable_0_53;
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__tabling_reset_pred_name_3_f_0(
  MR_Word PFSymNameArity_5,
  MR_Integer ProcId_6,
  MR_Word SingleProc_7)
{
  {
    MR_Word HeadVar__4_4;
    MR_Word PorF_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PFSymNameArity_5, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word SymName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PFSymNameArity_5, (MR_Integer) 1))));
    MR_Integer Arity0_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PFSymNameArity_5, (MR_Integer) 2))));
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
hlds__make_hlds__add_pragma__add_pragma_tabling__create_tabling_statistics_pred_15_p_0(
  MR_Integer ProcId_16,
  MR_Word Context_17,
  MR_Word PFSymNameArity_18,
  MR_Word SingleProc_19,
  MR_Word IsTablingSupported_20,
  MR_Word ItemMercuryStatus_21,
  MR_Word PredStatus_22,
  MR_Word STATE_VARIABLE_ProcTable_0_64,
  MR_Word * STATE_VARIABLE_ProcTable_65,
  MR_Word STATE_VARIABLE_ModuleInfo_0_66,
  MR_Word * STATE_VARIABLE_ModuleInfo_67,
  MR_Word STATE_VARIABLE_QualInfo_0_68,
  MR_Word * STATE_VARIABLE_QualInfo_69,
  MR_Word STATE_VARIABLE_Specs_0_70,
  MR_Word * STATE_VARIABLE_Specs_71)
{
  {
    MR_Word TableBuiltinModule_27;
    MR_Word StatsPredSymName_28;
    MR_Word StatsTypeName_29;
    MR_Word StatsType_30;
    MR_Word TypeAndModeArg1_31;
    MR_Word TypeAndModeArg2_32;
    MR_Word TypeAndModeArg3_33;
    MR_Word ArgTypesAndModes_34;
    MR_Word TypeVarSet_35;
    MR_Word InstVarSet_36;
    MR_Word Attrs_39;
    MR_Word MaybeAttrs_40;
    MR_Word PredDecl_41;
    MR_Word Stats_44;
    MR_Word IO0_45;
    MR_Word IO_46;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_85;
    MR_Word STATE_VARIABLE_ModuleInfo_95_95;
    MR_Word STATE_VARIABLE_Specs_96_96;
    MR_Word STATE_VARIABLE_VarSet_97_97;
    MR_Word STATE_VARIABLE_VarSet_99_99;
    MR_Word STATE_VARIABLE_VarSet_101_101;
    MR_Word STATE_VARIABLE_VarSet_103_103;
    MR_Word _MaybePredProcId_42;

    TableBuiltinModule_27 = mdbcomp__builtin_modules__mercury_table_statistics_module_0_f_0();
    StatsPredSymName_28 = hlds__make_hlds__add_pragma__add_pragma_tabling__tabling_stats_pred_name_3_f_0(PFSymNameArity_18, ProcId_16, SingleProc_19);
    {
      StatsTypeName_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), StatsTypeName_29, 0) = ((MR_Box) (TableBuiltinModule_27));
      MR_hl_field(MR_mktag(1), StatsTypeName_29, 1) = ((MR_Box) ((MR_String) "proc_table_statistics"));
    }
    {
      StatsType_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), StatsType_30, 0) = ((MR_Box) (StatsTypeName_29));
      MR_hl_field(MR_mktag(1), StatsType_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), StatsType_30, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_75 = parse_tree__prog_mode__out_mode_0_f_0();
    {
      TypeAndModeArg1_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeAndModeArg1_31, 0) = ((MR_Box) (StatsType_30));
      MR_hl_field(MR_mktag(1), TypeAndModeArg1_31, 1) = ((MR_Box) (Var_75));
    }
    Var_76 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
    Var_77 = parse_tree__prog_mode__di_mode_0_f_0();
    {
      TypeAndModeArg2_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeAndModeArg2_32, 0) = ((MR_Box) (Var_76));
      MR_hl_field(MR_mktag(1), TypeAndModeArg2_32, 1) = ((MR_Box) (Var_77));
    }
    Var_78 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
    Var_79 = parse_tree__prog_mode__uo_mode_0_f_0();
    {
      TypeAndModeArg3_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeAndModeArg3_33, 0) = ((MR_Box) (Var_78));
      MR_hl_field(MR_mktag(1), TypeAndModeArg3_33, 1) = ((MR_Box) (Var_79));
    }
    {
      Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (TypeAndModeArg3_33));
      MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (TypeAndModeArg2_32));
      MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (Var_81));
    }
    {
      ArgTypesAndModes_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ArgTypesAndModes_34, 0) = ((MR_Box) (TypeAndModeArg1_31));
      MR_hl_field(MR_mktag(1), ArgTypesAndModes_34, 1) = ((MR_Box) (Var_80));
    }
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet_35);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_36);
    {
      Var_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_85, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_85, 1) = ((MR_Box) (PFSymNameArity_18));
      MR_hl_field(MR_mktag(3), Var_85, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    Attrs_39 = (MR_Word) (Var_85);
    {
      MaybeAttrs_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeAttrs_40, 0) = ((MR_Box) (Attrs_39));
    }
    {
      PredDecl_41 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredDecl_41, 0) = ((MR_Box) (StatsPredSymName_28));
      MR_hl_field(MR_mktag(0), PredDecl_41, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), PredDecl_41, 2) = ((MR_Box) (ArgTypesAndModes_34));
      MR_hl_field(MR_mktag(0), PredDecl_41, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), PredDecl_41, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), PredDecl_41, 5) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_2[2])));
      MR_hl_field(MR_mktag(0), PredDecl_41, 6) = ((MR_Box) (MaybeAttrs_40));
      MR_hl_field(MR_mktag(0), PredDecl_41, 7) = ((MR_Box) (TypeVarSet_35));
      MR_hl_field(MR_mktag(0), PredDecl_41, 8) = ((MR_Box) (InstVarSet_36));
      MR_hl_field(MR_mktag(0), PredDecl_41, 9) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), PredDecl_41, 10) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), PredDecl_41, 11) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[58]));
      MR_hl_field(MR_mktag(0), PredDecl_41, 12) = ((MR_Box) (Context_17));
      MR_hl_field(MR_mktag(0), PredDecl_41, 13) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    hlds__add_pred__module_add_pred_decl_9_p_0(ItemMercuryStatus_21, PredStatus_22, (MR_Integer) 1, PredDecl_41, &_MaybePredProcId_42, STATE_VARIABLE_ModuleInfo_0_66, &STATE_VARIABLE_ModuleInfo_95_95, STATE_VARIABLE_Specs_0_70, &STATE_VARIABLE_Specs_96_96);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &STATE_VARIABLE_VarSet_97_97);
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "Stats", &Stats_44, STATE_VARIABLE_VarSet_97_97, &STATE_VARIABLE_VarSet_99_99);
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "IO0", &IO0_45, STATE_VARIABLE_VarSet_99_99, &STATE_VARIABLE_VarSet_101_101);
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "IO", &IO_46, STATE_VARIABLE_VarSet_101_101, &STATE_VARIABLE_VarSet_103_103);
    switch (IsTablingSupported_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word DummyStatsFuncSymName_55;
          MR_Word DummyStatsFuncTerm_56;
          MR_Word Args_57;
          MR_Word GetStatsExpr_58;
          MR_Word UpdateIOExpr_59;
          MR_Word GetStatsUpdateIOExpr_60;
          MR_Word BodyExpr_61;
          MR_Word StatsClauseInfo_62;
          MR_Word Var_104;
          MR_Word Var_107;
          MR_Word Var_108;
          MR_Word Var_109;
          MR_Word Var_110;
          MR_Word Var_111;
          MR_Word Var_120;

          Var_104 = mdbcomp__builtin_modules__mercury_table_statistics_module_0_f_0();
          {
            DummyStatsFuncSymName_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), DummyStatsFuncSymName_55, 0) = ((MR_Box) (Var_104));
            MR_hl_field(MR_mktag(1), DummyStatsFuncSymName_55, 1) = ((MR_Box) ((MR_String) "dummy_proc_table_statistics"));
          }
          mdbcomp__sym_name__sym_name_to_term_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Context_17, DummyStatsFuncSymName_55, (MR_Word) ((MR_Unsigned) 0U), &DummyStatsFuncTerm_56);
          {
            Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (Stats_44));
            MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) (Context_17));
          }
          {
            Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (IO0_45));
            MR_hl_field(MR_mktag(1), Var_109, 1) = ((MR_Box) (Context_17));
          }
          {
            Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (IO_46));
            MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) (Context_17));
          }
          {
            Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) (Var_111));
            MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) (Var_109));
            MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) (Var_110));
          }
          {
            Args_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Args_57, 0) = ((MR_Box) (Var_107));
            MR_hl_field(MR_mktag(1), Args_57, 1) = ((MR_Box) (Var_108));
          }
          {
            GetStatsExpr_58 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), GetStatsExpr_58, 0) = ((MR_Box) (Context_17));
            MR_hl_field(MR_mktag(0), GetStatsExpr_58, 1) = ((MR_Box) (Var_107));
            MR_hl_field(MR_mktag(0), GetStatsExpr_58, 2) = ((MR_Box) (DummyStatsFuncTerm_56));
            MR_hl_field(MR_mktag(0), GetStatsExpr_58, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          }
          {
            UpdateIOExpr_59 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), UpdateIOExpr_59, 0) = ((MR_Box) (Context_17));
            MR_hl_field(MR_mktag(0), UpdateIOExpr_59, 1) = ((MR_Box) (Var_109));
            MR_hl_field(MR_mktag(0), UpdateIOExpr_59, 2) = ((MR_Box) (Var_111));
            MR_hl_field(MR_mktag(0), UpdateIOExpr_59, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          }
          {
            GetStatsUpdateIOExpr_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), GetStatsUpdateIOExpr_60, 0) = ((MR_Box) (Context_17));
            MR_hl_field(MR_mktag(2), GetStatsUpdateIOExpr_60, 1) = ((MR_Box) (GetStatsExpr_58));
            MR_hl_field(MR_mktag(2), GetStatsUpdateIOExpr_60, 2) = ((MR_Box) (UpdateIOExpr_59));
          }
          {
            BodyExpr_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), BodyExpr_61, 0) = ((MR_Box) ((MR_Unsigned) 7U));
            MR_hl_field(MR_mktag(3), BodyExpr_61, 1) = ((MR_Box) (Context_17));
            MR_hl_field(MR_mktag(3), BodyExpr_61, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), BodyExpr_61, 3) = ((MR_Box) (GetStatsUpdateIOExpr_60));
          }
          {
            Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_120, 0) = ((MR_Box) (BodyExpr_61));
            MR_hl_field(MR_mktag(1), Var_120, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            StatsClauseInfo_62 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), StatsClauseInfo_62, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), StatsClauseInfo_62, 1) = ((MR_Box) (StatsPredSymName_28));
            MR_hl_field(MR_mktag(0), StatsClauseInfo_62, 2) = ((MR_Box) (Args_57));
            MR_hl_field(MR_mktag(0), StatsClauseInfo_62, 3) = ((MR_Box) (STATE_VARIABLE_VarSet_103_103));
            MR_hl_field(MR_mktag(0), StatsClauseInfo_62, 4) = ((MR_Box) (Var_120));
            MR_hl_field(MR_mktag(0), StatsClauseInfo_62, 5) = ((MR_Box) (Context_17));
            MR_hl_field(MR_mktag(0), StatsClauseInfo_62, 6) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          hlds__make_hlds__add_clause__module_add_clause_9_p_0(PredStatus_22, (MR_Word) ((MR_Unsigned) 0U), StatsClauseInfo_62, STATE_VARIABLE_ModuleInfo_95_95, STATE_VARIABLE_ModuleInfo_67, STATE_VARIABLE_QualInfo_0_68, STATE_VARIABLE_QualInfo_69, STATE_VARIABLE_Specs_96_96, STATE_VARIABLE_Specs_71);
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
          MR_Word StatsFCInfo_53;
          MR_Word PragmaStatsFCInfo_54;
          MR_Word Var_127;
          MR_Word Var_130;
          MR_Word Var_133;
          MR_Word STATE_VARIABLE_Attrs_135_135;
          MR_Word STATE_VARIABLE_Attrs_138_138;
          MR_Word STATE_VARIABLE_Attrs_140_140;
          MR_Word STATE_VARIABLE_Attrs_142_142;
          MR_Word STATE_VARIABLE_Attrs_144_144;
          MR_String Var_147;
          MR_Word Var_149;
          MR_Word Var_151;
          MR_Word Var_152;
          MR_Word Var_153;

          Var_127 = parse_tree__prog_mode__out_mode_0_f_0();
          {
            Arg1_47 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Arg1_47, 0) = ((MR_Box) (Stats_44));
            MR_hl_field(MR_mktag(0), Arg1_47, 1) = ((MR_Box) ((MR_String) "Stats"));
            MR_hl_field(MR_mktag(0), Arg1_47, 2) = ((MR_Box) (Var_127));
            MR_hl_field(MR_mktag(0), Arg1_47, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          }
          Var_130 = parse_tree__prog_mode__di_mode_0_f_0();
          {
            Arg2_48 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Arg2_48, 0) = ((MR_Box) (IO0_45));
            MR_hl_field(MR_mktag(0), Arg2_48, 1) = ((MR_Box) ((MR_String) "_IO0"));
            MR_hl_field(MR_mktag(0), Arg2_48, 2) = ((MR_Box) (Var_130));
            MR_hl_field(MR_mktag(0), Arg2_48, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          }
          Var_133 = parse_tree__prog_mode__uo_mode_0_f_0();
          {
            Arg3_49 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Arg3_49, 0) = ((MR_Box) (IO_46));
            MR_hl_field(MR_mktag(0), Arg3_49, 1) = ((MR_Box) ((MR_String) "_IO"));
            MR_hl_field(MR_mktag(0), Arg3_49, 2) = ((MR_Box) (Var_133));
            MR_hl_field(MR_mktag(0), Arg3_49, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          }
          STATE_VARIABLE_Attrs_135_135 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 0);
          parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_135_135, &STATE_VARIABLE_Attrs_138_138);
          parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_138_138, &STATE_VARIABLE_Attrs_140_140);
          parse_tree__prog_data_foreign__set_purity_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_140_140, &STATE_VARIABLE_Attrs_142_142);
          parse_tree__prog_data_foreign__set_may_duplicate_3_p_0((MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_2[3])), STATE_VARIABLE_Attrs_142_142, &STATE_VARIABLE_Attrs_144_144);
          Global_50 = hlds__make_hlds__add_pragma__add_pragma_tabling__table_info_c_global_var_name_3_f_0(STATE_VARIABLE_ModuleInfo_95_95, PFSymNameArity_18, ProcId_16);
          Var_147 = mercury__string__f_43_43_2_f_0(Global_50, (MR_String) ", &Stats);");
          StatsCode_51 = mercury__string__f_43_43_2_f_0((MR_String) "MR_get_tabling_stats(&", Var_147);
          {
            Var_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_149, 0) = ((MR_Box) (Context_17));
          }
          {
            StatsImpl_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), StatsImpl_52, 0) = ((MR_Box) (StatsCode_51));
            MR_hl_field(MR_mktag(0), StatsImpl_52, 1) = ((MR_Box) (Var_149));
          }
          {
            Var_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_153, 0) = ((MR_Box) (Arg3_49));
            MR_hl_field(MR_mktag(1), Var_153, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_152, 0) = ((MR_Box) (Arg2_48));
            MR_hl_field(MR_mktag(1), Var_152, 1) = ((MR_Box) (Var_153));
          }
          {
            Var_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_151, 0) = ((MR_Box) (Arg1_47));
            MR_hl_field(MR_mktag(1), Var_151, 1) = ((MR_Box) (Var_152));
          }
          {
            StatsFCInfo_53 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), StatsFCInfo_53, 0) = ((MR_Box) (STATE_VARIABLE_Attrs_144_144));
            MR_hl_field(MR_mktag(0), StatsFCInfo_53, 1) = ((MR_Box) (StatsPredSymName_28));
            MR_hl_field(MR_mktag(0), StatsFCInfo_53, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), StatsFCInfo_53, 3) = ((MR_Box) (Var_151));
            MR_hl_field(MR_mktag(0), StatsFCInfo_53, 4) = ((MR_Box) (STATE_VARIABLE_VarSet_103_103));
            MR_hl_field(MR_mktag(0), StatsFCInfo_53, 5) = ((MR_Box) (InstVarSet_36));
            MR_hl_field(MR_mktag(0), StatsFCInfo_53, 6) = ((MR_Box) (StatsImpl_52));
          }
          {
            PragmaStatsFCInfo_54 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), PragmaStatsFCInfo_54, 0) = ((MR_Box) (StatsFCInfo_53));
            MR_hl_field(MR_mktag(0), PragmaStatsFCInfo_54, 1) = ((MR_Box) (Context_17));
            MR_hl_field(MR_mktag(0), PragmaStatsFCInfo_54, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_6_p_0(PredStatus_22, PragmaStatsFCInfo_54, STATE_VARIABLE_ModuleInfo_95_95, STATE_VARIABLE_ModuleInfo_67, STATE_VARIABLE_Specs_96_96, STATE_VARIABLE_Specs_71);
          *STATE_VARIABLE_QualInfo_69 = STATE_VARIABLE_QualInfo_0_68;
        }
        break;
    }
    *STATE_VARIABLE_ProcTable_65 = STATE_VARIABLE_ProcTable_0_64;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__table_info_c_global_var_name_3_f_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__make_hlds__add_pragma__add_pragma_tabling__IntroducedFrom__pred__table_info_c_global_var_name__712__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_String MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__table_info_c_global_var_name_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word PFSymNameArity_6,
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
      MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__table_info_c_global_var_name_3_f_0_1));
      MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (Target_10));
      MR_hl_field(MR_mktag(0), Var_24, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__require__expect_3_p_0(Var_24, (MR_String) "function \140hlds.make_hlds.add_pragma.add_pragma_tabling.table_info_c_global_var_name\'/3", (MR_String) "memo table statistics and reset are supported only for C");
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 303, &HighLevelCode_11);
    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_5, &ModuleName_12);
    PredOrFunc_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PFSymNameArity_6, (MR_Integer) 0))) & (MR_Integer) 1);
    PredSymName_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PFSymNameArity_6, (MR_Integer) 1))));
    Arity_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PFSymNameArity_6, (MR_Integer) 2))));
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
  MR_Word PFSymNameArity_5,
  MR_Integer ProcId_6,
  MR_Word SingleProc_7)
{
  {
    MR_Word HeadVar__4_4;
    MR_Word PorF_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PFSymNameArity_5, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word SymName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PFSymNameArity_5, (MR_Integer) 1))));
    MR_Integer Arity0_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PFSymNameArity_5, (MR_Integer) 2))));
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
hlds__make_hlds__add_pragma__add_pragma_tabling__module_add_pragma_tabled_10_p_0_1(
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

    hlds__make_hlds__add_pragma__add_pragma_tabling__module_add_pragma_tabled_for_pred_14_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 9)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ModuleInfo_66, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_QualInfo_68, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_Specs_70);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ModuleInfo_66));
    *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_QualInfo_68));
    *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_70));
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__module_add_pragma_tabled_10_p_0(
  MR_Word TabledInfo_11,
  MR_Word Context_12,
  MR_Word ItemMercuryStatus_13,
  MR_Word PredStatus_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_51,
  MR_Word * STATE_VARIABLE_ModuleInfo_52,
  MR_Word STATE_VARIABLE_QualInfo_0_53,
  MR_Word * STATE_VARIABLE_QualInfo_54,
  MR_Word STATE_VARIABLE_Specs_0_55,
  MR_Word * STATE_VARIABLE_Specs_56)
{
  {
    MR_Word TabledMethod_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TabledInfo_11, (MR_Integer) 0))));
    MR_Word PredOrProcSpec_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TabledInfo_11, (MR_Integer) 1))));
    MR_Word MaybeAttributes_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TabledInfo_11, (MR_Integer) 2))));
    MR_Word PFUMM_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrProcSpec_19, (MR_Integer) 0))));
    MR_Word PredName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrProcSpec_19, (MR_Integer) 1))));
    MR_Word PredicateTable0_23;
    MR_Integer UserArityInt_29;
    MR_Word PredIds_35;
    MR_Word STATE_VARIABLE_ModuleInfo_82_82;
    MR_Word STATE_VARIABLE_Specs_83_83;
    MR_Word STATE_VARIABLE_Specs_133_133;
    MR_Word Var_135;
    MR_Box conv5_STATE_VARIABLE_ModuleInfo_52;
    MR_Box conv4_STATE_VARIABLE_QualInfo_54;
    MR_Box conv3_STATE_VARIABLE_Specs_56;

    hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_51, &PredicateTable0_23);
    switch (MR_tag((MR_Word) PFUMM_21)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ModesOrArity_212 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PFUMM_21, (MR_Integer) 0))));
          MR_Integer PredFormArityInt_215;
          MR_Word UserArity_216;
          MR_Word PredIds0_217;

          if (((MR_tag((MR_Word) ModesOrArity_212)) == (MR_Integer) 1))
          {
            MR_Word Var_174;

            UserArity_216 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModesOrArity_212, (MR_Integer) 0))));
            parse_tree__prog_util__user_arity_pred_form_arity_3_p_0((MR_Integer) 0, UserArity_216, &Var_174);
            PredFormArityInt_215 = (MR_Integer) (Var_174);
          }
          else
          {
            MR_Word Modes_175 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModesOrArity_212, (MR_Integer) 0))));
            MR_Word Var_176;

            mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_175, &PredFormArityInt_215);
            Var_176 = (MR_Word) (PredFormArityInt_215);
            parse_tree__prog_util__user_arity_pred_form_arity_3_p_1((MR_Integer) 0, &UserArity_216, Var_176);
          }
          UserArityInt_29 = (MR_Integer) (UserArity_216);
          hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredicateTable0_23, (MR_Integer) 0, (MR_Integer) 0, PredName_22, PredFormArityInt_215, &PredIds0_217);
          if ((PredIds0_217 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_String TabledMethodStr_182;
            MR_Word ModuleName_183;
            MR_Word DescPieces_184;
            MR_Word PredId_185;
            MR_Word Var_186;
            MR_Word Var_192;

            TabledMethodStr_182 = parse_tree__prog_out__tabled_eval_method_to_string_1_f_0(TabledMethod_18);
            hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_0_51, &ModuleName_183);
            {
              Var_186 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_186, 0) = ((MR_Box) ((MR_Unsigned) 29U));
              MR_hl_field(MR_mktag(3), Var_186, 1) = ((MR_Box) (TabledMethodStr_182));
            }
            {
              DescPieces_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), DescPieces_184, 0) = ((MR_Box) (Var_186));
              MR_hl_field(MR_mktag(1), DescPieces_184, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[2])));
            }
            {
              Var_192 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_192, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(MR_mktag(3), Var_192, 1) = ((MR_Box) (PredName_22));
            }
            hlds__add_pred__preds_add_implicit_report_error_14_p_0(ModuleName_183, (MR_Integer) 0, PredName_22, PredFormArityInt_215, PredStatus_14, (MR_Integer) 0, Context_12, Var_192, DescPieces_184, &PredId_185, STATE_VARIABLE_ModuleInfo_0_51, &STATE_VARIABLE_ModuleInfo_82_82, STATE_VARIABLE_Specs_0_55, &STATE_VARIABLE_Specs_83_83);
            {
              PredIds_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), PredIds_35, 0) = ((MR_Box) (PredId_185));
              MR_hl_field(MR_mktag(1), PredIds_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          else
          {
            PredIds_35 = PredIds0_217;
            STATE_VARIABLE_ModuleInfo_82_82 = STATE_VARIABLE_ModuleInfo_0_51;
            STATE_VARIABLE_Specs_83_83 = STATE_VARIABLE_Specs_0_55;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ModesOrArity_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PFUMM_21, (MR_Integer) 0))));
          MR_Integer PredFormArityInt_27;
          MR_Word UserArity_28;
          MR_Word PredIds0_30;

          if (((MR_tag((MR_Word) ModesOrArity_24)) == (MR_Integer) 1))
          {
            MR_Word Var_72;

            UserArity_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModesOrArity_24, (MR_Integer) 0))));
            parse_tree__prog_util__user_arity_pred_form_arity_3_p_0((MR_Integer) 1, UserArity_28, &Var_72);
            PredFormArityInt_27 = (MR_Integer) (Var_72);
          }
          else
          {
            MR_Word Modes_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModesOrArity_24, (MR_Integer) 0))));
            MR_Word Var_73;

            mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_26, &PredFormArityInt_27);
            Var_73 = (MR_Word) (PredFormArityInt_27);
            parse_tree__prog_util__user_arity_pred_form_arity_3_p_1((MR_Integer) 1, &UserArity_28, Var_73);
          }
          UserArityInt_29 = (MR_Integer) (UserArity_28);
          hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredicateTable0_23, (MR_Integer) 0, (MR_Integer) 1, PredName_22, PredFormArityInt_27, &PredIds0_30);
          if ((PredIds0_30 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_String TabledMethodStr_31;
            MR_Word ModuleName_32;
            MR_Word DescPieces_33;
            MR_Word PredId_34;
            MR_Word Var_75;
            MR_Word Var_81;

            TabledMethodStr_31 = parse_tree__prog_out__tabled_eval_method_to_string_1_f_0(TabledMethod_18);
            hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_0_51, &ModuleName_32);
            {
              Var_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_75, 0) = ((MR_Box) ((MR_Unsigned) 29U));
              MR_hl_field(MR_mktag(3), Var_75, 1) = ((MR_Box) (TabledMethodStr_31));
            }
            {
              DescPieces_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), DescPieces_33, 0) = ((MR_Box) (Var_75));
              MR_hl_field(MR_mktag(1), DescPieces_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[2])));
            }
            {
              Var_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_81, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(MR_mktag(3), Var_81, 1) = ((MR_Box) (PredName_22));
            }
            hlds__add_pred__preds_add_implicit_report_error_14_p_0(ModuleName_32, (MR_Integer) 1, PredName_22, PredFormArityInt_27, PredStatus_14, (MR_Integer) 0, Context_12, Var_81, DescPieces_33, &PredId_34, STATE_VARIABLE_ModuleInfo_0_51, &STATE_VARIABLE_ModuleInfo_82_82, STATE_VARIABLE_Specs_0_55, &STATE_VARIABLE_Specs_83_83);
            {
              PredIds_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), PredIds_35, 0) = ((MR_Box) (PredId_34));
              MR_hl_field(MR_mktag(1), PredIds_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          else
          {
            PredIds_35 = PredIds0_30;
            STATE_VARIABLE_ModuleInfo_82_82 = STATE_VARIABLE_ModuleInfo_0_51;
            STATE_VARIABLE_Specs_83_83 = STATE_VARIABLE_Specs_0_55;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word STATE_VARIABLE_Specs_57_57;
          MR_Word UserArity_148 = ((MR_Word) ((MR_hl_field(MR_mktag(2), PFUMM_21, (MR_Integer) 0))));
          MR_Word PredIds0_149;
          MR_String TabledMethodStr_150;

          TabledMethodStr_150 = parse_tree__prog_out__tabled_eval_method_to_string_1_f_0(TabledMethod_18);
          hlds__make_hlds__add_pragma__maybe_warn_about_pfumm_unknown_7_p_0(STATE_VARIABLE_ModuleInfo_0_51, TabledMethodStr_150, PFUMM_21, PredName_22, Context_12, STATE_VARIABLE_Specs_0_55, &STATE_VARIABLE_Specs_57_57);
          UserArityInt_29 = (MR_Integer) (UserArity_148);
          hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(PredicateTable0_23, (MR_Integer) 0, PredName_22, UserArityInt_29, &PredIds0_149);
          if ((PredIds0_149 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Var_59;
            MR_Word Var_65;
            MR_Word Var_68;
            MR_Integer PredFormArityInt_139;
            MR_Word ModuleName_140;
            MR_Word DescPieces_141;
            MR_Word PredId_142;

            hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_0_51, &ModuleName_140);
            {
              Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) ((MR_Unsigned) 29U));
              MR_hl_field(MR_mktag(3), Var_59, 1) = ((MR_Box) (TabledMethodStr_150));
            }
            {
              DescPieces_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), DescPieces_141, 0) = ((MR_Box) (Var_59));
              MR_hl_field(MR_mktag(1), DescPieces_141, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[2])));
            }
            parse_tree__prog_util__user_arity_pred_form_arity_3_p_0((MR_Integer) 0, UserArity_148, &Var_65);
            PredFormArityInt_139 = (MR_Integer) (Var_65);
            {
              Var_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_68, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(MR_mktag(3), Var_68, 1) = ((MR_Box) (PredName_22));
            }
            hlds__add_pred__preds_add_implicit_report_error_14_p_0(ModuleName_140, (MR_Integer) 0, PredName_22, PredFormArityInt_139, PredStatus_14, (MR_Integer) 0, Context_12, Var_68, DescPieces_141, &PredId_142, STATE_VARIABLE_ModuleInfo_0_51, &STATE_VARIABLE_ModuleInfo_82_82, STATE_VARIABLE_Specs_57_57, &STATE_VARIABLE_Specs_83_83);
            {
              PredIds_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), PredIds_35, 0) = ((MR_Box) (PredId_142));
              MR_hl_field(MR_mktag(1), PredIds_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          else
          {
            PredIds_35 = PredIds0_149;
            STATE_VARIABLE_ModuleInfo_82_82 = STATE_VARIABLE_ModuleInfo_0_51;
            STATE_VARIABLE_Specs_83_83 = STATE_VARIABLE_Specs_57_57;
          }
        }
        break;
    }
    if ((MaybeAttributes_20 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Specs_133_133 = STATE_VARIABLE_Specs_83_83;
    else
    {
      MR_Word Attributes_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAttributes_20, (MR_Integer) 0))));
      MR_Word Statistics_41 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Attributes_40, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
      MR_Word AllowReset_42 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Attributes_40, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
      MR_Word Var_236 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_35, (MR_Integer) 1))));

      if ((Var_236 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_Specs_133_133 = STATE_VARIABLE_Specs_83_83;
      else
      {
        MR_Word STATE_VARIABLE_Specs_109_109;

        switch (Statistics_41) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            STATE_VARIABLE_Specs_109_109 = STATE_VARIABLE_Specs_83_83;
            break;
          case (MR_Integer) 0:
            {
              MR_Word StatsPieces_47;
              MR_Word StatsSpec_48;
              MR_Word Var_88;
              MR_Word Var_91;
              MR_Word Var_92;
              MR_Word Var_93;

              {
                Var_93 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_93, 0) = ((MR_Box) (PredName_22));
                MR_hl_field(MR_mktag(0), Var_93, 1) = ((MR_Box) (UserArityInt_29));
              }
              {
                Var_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_92, 0) = ((MR_Box) ((MR_Unsigned) 10U));
                MR_hl_field(MR_mktag(3), Var_92, 1) = ((MR_Box) (Var_93));
              }
              {
                Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (Var_92));
                MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[11])));
              }
              {
                Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[4])));
                MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (Var_91));
              }
              {
                StatsPieces_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), StatsPieces_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[3])));
                MR_hl_field(MR_mktag(1), StatsPieces_47, 1) = ((MR_Box) (Var_88));
              }
              {
                StatsSpec_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), StatsSpec_48, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_pragma_tabling.module_add_pragma_tabled\'/10"));
                MR_hl_field(MR_mktag(1), StatsSpec_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), StatsSpec_48, 2) = ((MR_Box) ((MR_Unsigned) 36U));
                MR_hl_field(MR_mktag(1), StatsSpec_48, 3) = ((MR_Box) (Context_12));
                MR_hl_field(MR_mktag(1), StatsSpec_48, 4) = ((MR_Box) (StatsPieces_47));
              }
              {
                STATE_VARIABLE_Specs_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_109_109, 0) = ((MR_Box) (StatsSpec_48));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_109_109, 1) = ((MR_Box) (STATE_VARIABLE_Specs_83_83));
              }
            }
            break;
        }
        switch (AllowReset_42) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ResetPieces_49;
              MR_Word ResetSpec_50;
              MR_Word Var_112;
              MR_Word Var_115;
              MR_Word Var_116;
              MR_Word Var_117;

              {
                Var_117 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_117, 0) = ((MR_Box) (PredName_22));
                MR_hl_field(MR_mktag(0), Var_117, 1) = ((MR_Box) (UserArityInt_29));
              }
              {
                Var_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_116, 0) = ((MR_Box) ((MR_Unsigned) 10U));
                MR_hl_field(MR_mktag(3), Var_116, 1) = ((MR_Box) (Var_117));
              }
              {
                Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (Var_116));
                MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[15])));
              }
              {
                Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_112, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[4])));
                MR_hl_field(MR_mktag(1), Var_112, 1) = ((MR_Box) (Var_115));
              }
              {
                ResetPieces_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ResetPieces_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[12])));
                MR_hl_field(MR_mktag(1), ResetPieces_49, 1) = ((MR_Box) (Var_112));
              }
              {
                ResetSpec_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ResetSpec_50, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_pragma_tabling.module_add_pragma_tabled\'/10"));
                MR_hl_field(MR_mktag(1), ResetSpec_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), ResetSpec_50, 2) = ((MR_Box) ((MR_Unsigned) 36U));
                MR_hl_field(MR_mktag(1), ResetSpec_50, 3) = ((MR_Box) (Context_12));
                MR_hl_field(MR_mktag(1), ResetSpec_50, 4) = ((MR_Box) (ResetPieces_49));
              }
              {
                STATE_VARIABLE_Specs_133_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_133_133, 0) = ((MR_Box) (ResetSpec_50));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_133_133, 1) = ((MR_Box) (STATE_VARIABLE_Specs_109_109));
              }
            }
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_Specs_133_133 = STATE_VARIABLE_Specs_109_109;
            break;
        }
      }
    }
    {
      Var_135 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_135, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_135, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__module_add_pragma_tabled_10_p_0_1));
      MR_hl_field(MR_mktag(0), Var_135, 2) = ((MR_Box) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(0), Var_135, 3) = ((MR_Box) (TabledMethod_18));
      MR_hl_field(MR_mktag(0), Var_135, 4) = ((MR_Box) (PFUMM_21));
      MR_hl_field(MR_mktag(0), Var_135, 5) = ((MR_Box) (PredName_22));
      MR_hl_field(MR_mktag(0), Var_135, 6) = ((MR_Box) (MaybeAttributes_20));
      MR_hl_field(MR_mktag(0), Var_135, 7) = ((MR_Box) (Context_12));
      MR_hl_field(MR_mktag(0), Var_135, 8) = ((MR_Box) (ItemMercuryStatus_13));
      MR_hl_field(MR_mktag(0), Var_135, 9) = ((MR_Box) (PredStatus_14));
    }
    mercury__list__foldl3_8_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0), (MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[0]), Var_135, PredIds_35, ((MR_Box) (STATE_VARIABLE_ModuleInfo_82_82)), &conv5_STATE_VARIABLE_ModuleInfo_52, ((MR_Box) (STATE_VARIABLE_QualInfo_0_53)), &conv4_STATE_VARIABLE_QualInfo_54, ((MR_Box) (STATE_VARIABLE_Specs_133_133)), &conv3_STATE_VARIABLE_Specs_56);
    *STATE_VARIABLE_ModuleInfo_52 = ((MR_Word) (conv5_STATE_VARIABLE_ModuleInfo_52));
    *STATE_VARIABLE_QualInfo_54 = ((MR_Word) (conv4_STATE_VARIABLE_QualInfo_54));
    *STATE_VARIABLE_Specs_56 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_56));
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
