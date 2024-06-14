/*
** Automatically generated from `add_pragma_tabling.m'
** by the Mercury compiler,
** version rotd-2024-06-14
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
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
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
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
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
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_tabling__maybe__pti_maybe_1__plain_parse_tree__prog_data_pragma__type_ctor_info_table_attributes_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_tabling__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_tabling__IntroducedFrom__pred__table_info_c_global_var_name__751__1_2_p_0(
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
  MR_Word STATE_VARIABLE_ModuleInfo_0_69,
  MR_Word * STATE_VARIABLE_ModuleInfo_70,
  MR_Word STATE_VARIABLE_QualInfo_0_71,
  MR_Word * STATE_VARIABLE_QualInfo_72,
  MR_Word STATE_VARIABLE_Specs_0_73,
  MR_Word * STATE_VARIABLE_Specs_74);

static void MR_CALL 
hlds__make_hlds__add_pragma_tabling__set_eval_method_create_aux_preds_list_20_p_0(
  MR_Word ProgressStream_1,
  MR_Word PredOrFunc_2,
  MR_Word PredModuleName_3,
  MR_String PredName_4,
  MR_Word UserArity_5,
  MR_Word HeadVar__6_6,
  MR_Word SingleProc_7,
  MR_Word Context_8,
  MR_Word TabledMethod_9,
  MR_Word MaybeAttributes_10,
  MR_Word ItemMercuryStatus_11,
  MR_Word PredStatus_12,
  MR_Word STATE_VARIABLE_ProcTable_0_13,
  MR_Word * STATE_VARIABLE_ProcTable_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * STATE_VARIABLE_ModuleInfo_16,
  MR_Word STATE_VARIABLE_QualInfo_0_17,
  MR_Word * STATE_VARIABLE_QualInfo_18,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20);

static void MR_CALL 
hlds__make_hlds__add_pragma_tabling__set_eval_method_create_aux_preds_21_p_0(
  MR_Word ProgressStream_22,
  MR_Word PredOrFunc_23,
  MR_Word PredModuleName_24,
  MR_String PredName_25,
  MR_Word UserArity_26,
  MR_Integer ProcId_27,
  MR_Word ProcInfo0_28,
  MR_Word SingleProc_29,
  MR_Word Context_30,
  MR_Word TabledMethod_31,
  MR_Word MaybeAttributes_32,
  MR_Word ItemMercuryStatus_33,
  MR_Word PredStatus_34,
  MR_Word STATE_VARIABLE_ProcTable_0_65,
  MR_Word * STATE_VARIABLE_ProcTable_66,
  MR_Word STATE_VARIABLE_ModuleInfo_0_67,
  MR_Word * STATE_VARIABLE_ModuleInfo_68,
  MR_Word STATE_VARIABLE_QualInfo_0_69,
  MR_Word * STATE_VARIABLE_QualInfo_70,
  MR_Word STATE_VARIABLE_Specs_0_71,
  MR_Word * STATE_VARIABLE_Specs_72);

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
  MR_Word STATE_VARIABLE_ProcTable_0_66,
  MR_Word * STATE_VARIABLE_ProcTable_67,
  MR_Word STATE_VARIABLE_ModuleInfo_0_68,
  MR_Word * STATE_VARIABLE_ModuleInfo_69,
  MR_Word STATE_VARIABLE_QualInfo_0_70,
  MR_Word * STATE_VARIABLE_QualInfo_71,
  MR_Word STATE_VARIABLE_Specs_0_72,
  MR_Word * STATE_VARIABLE_Specs_73);

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
  MR_Word STATE_VARIABLE_ProcTable_0_77,
  MR_Word * STATE_VARIABLE_ProcTable_78,
  MR_Word STATE_VARIABLE_ModuleInfo_0_79,
  MR_Word * STATE_VARIABLE_ModuleInfo_80,
  MR_Word STATE_VARIABLE_QualInfo_0_81,
  MR_Word * STATE_VARIABLE_QualInfo_82,
  MR_Word STATE_VARIABLE_Specs_0_83,
  MR_Word * STATE_VARIABLE_Specs_84);

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

static /* final */ const MR_Box hlds__make_hlds__add_pragma_tabling_scalar_common_2[4][1];

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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[1]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[3]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "cannot request statistics"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[5]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "for the ambiguous name"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[7]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[9]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "would have an ambiguous name too."))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[11])))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "statistics predicate"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[13])))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "since the compiler-generated"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[15])))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "cannot request allow_reset"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[18]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "since the compiler-generated reset predicate"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[13])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Warning:"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[22]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "has both a"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[24]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and a"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[26]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[28]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "inline"))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[29])))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The inline pragma"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[32]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  34 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[33])))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "will be ignored,"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[35]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "You can use the"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[40])))
  },
  /* row  43 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[42])))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "because tabled predicates cannot be inlined."))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[43])))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: a"))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "may not specify"))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[47]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "that it is for an imported"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "such as"))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[50]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[52]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "for the"))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "which has"))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[55]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "no declared modes."))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[57]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[59]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "undeclared mode"))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[61]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "of"))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error in"))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "has"))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[66]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "duplicate"))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "pragmas"))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[69]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "specified."))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[11])))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "tabling pragmas specified,"))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[73]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "two conflicting"))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[75]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[74])))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "too many argument tabling methods specified."))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[11])))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "not enough argument tabling methods specified."))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[82]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[11])))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in"))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[88]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "input modes."))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[90]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "not compatible with"))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[92]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[91])))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is neither input or output."))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[97]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[11])))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_tabling_scalar_common_2[4][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   2 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   3 */
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
hlds__make_hlds__add_pragma_tabling__IntroducedFrom__pred__table_info_c_global_var_name__751__1_2_p_0(
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
  MR_Word STATE_VARIABLE_ModuleInfo_0_69,
  MR_Word * STATE_VARIABLE_ModuleInfo_70,
  MR_Word STATE_VARIABLE_QualInfo_0_71,
  MR_Word * STATE_VARIABLE_QualInfo_72,
  MR_Word STATE_VARIABLE_Specs_0_73,
  MR_Word * STATE_VARIABLE_Specs_74)
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
  MR_Word STATE_VARIABLE_Specs_158_158;
  MR_Word WarnTableWithInline_47;
  MR_Word Var_88;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_69, &Globals_30);
  succeeded = ((MR_tag((MR_Word) TabledMethod0_18)) == (MR_Integer) 3);
  if (succeeded)
  {
    MR_Word OwnStacks_32;

    libs__globals__lookup_bool_option_3_p_0(Globals_30, (MR_Integer) 289, &OwnStacks_32);
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
  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_69, PredId_26, &PredInfo0_34);
  parse_tree__prog_item__pfumm_to_maybe_pf_arity_maybe_modes_4_p_0(PFUMM_19, &MaybePredOrFunc_35, &UserArity_36, &MaybeModes_37);
  if ((MaybePredOrFunc_35 == (MR_Word) ((MR_Unsigned) 0U)))
    PredOrFunc_38 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo0_34);
  else
    PredOrFunc_38 = ((MR_Word) ((MR_hl_field(1, MaybePredOrFunc_35, (MR_Integer) 0))));
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
  libs__globals__lookup_bool_option_3_p_0(Globals_30, (MR_Integer) 75, &VeryVerbose_43);
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
  succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_46, (MR_Integer) 6);
  if (succeeded)
  {
    Var_88 = (MR_Integer) 44;
    libs__globals__lookup_bool_option_3_p_0(Globals_30, Var_88, &WarnTableWithInline_47);
    succeeded = (WarnTableWithInline_47 == (MR_Integer) 1);
  }
  if (succeeded)
  {
    MR_Word InlineWarningPieces_48;
    MR_Word InlineWarningSpec_49;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_98;
    MR_Word Var_103;
    MR_Word Var_104;
    MR_Word Var_105;
    MR_Word Var_106;
    MR_Word Var_111;
    MR_Word Var_116;
    MR_Word Var_117;
    MR_Word Var_125;
    MR_Word Var_132;
    MR_Word Var_133;

    {
      Var_96 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_96, 0) = ((MR_Box) ((MR_Unsigned) 15U));
      MR_hl_field(3, Var_96, 1) = ((MR_Box) (PFSymNameArity_41));
    }
    {
      Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_95, 0) = ((MR_Box) (Var_96));
      MR_hl_field(1, Var_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_94 = parse_tree__error_spec__color_as_subject_1_f_0(Var_95);
    {
      Var_106 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_106, 0) = ((MR_Box) ((MR_Unsigned) 33U));
      MR_hl_field(3, Var_106, 1) = ((MR_Box) (TabledMethodStr_42));
    }
    {
      Var_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_105, 0) = ((MR_Box) (Var_106));
      MR_hl_field(1, Var_105, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[2])));
    }
    Var_104 = parse_tree__error_spec__color_as_inconsistent_1_f_0(Var_105);
    Var_117 = parse_tree__error_spec__color_as_inconsistent_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[31])));
    Var_133 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[36])));
    Var_132 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_133, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[45])));
    Var_125 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[34])), Var_132);
    Var_116 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_117, Var_125);
    Var_111 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[27])), Var_116);
    Var_103 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_104, Var_111);
    Var_98 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[25])), Var_103);
    Var_93 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_94, Var_98);
    InlineWarningPieces_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[23])), Var_93);
    {
      InlineWarningSpec_49 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, InlineWarningSpec_49, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_tabling.module_add_pragma_tabled_for_pred\'/16"));
      MR_hl_field(0, InlineWarningSpec_49, 1) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(0, InlineWarningSpec_49, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(0, InlineWarningSpec_49, 3) = ((MR_Box) (Context_23));
      MR_hl_field(0, InlineWarningSpec_49, 4) = ((MR_Box) (InlineWarningPieces_48));
    }
    {
      STATE_VARIABLE_Specs_158_158 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Specs_158_158, 0) = ((MR_Box) (InlineWarningSpec_49));
      MR_hl_field(1, STATE_VARIABLE_Specs_158_158, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_73));
    }
  }
  else
    STATE_VARIABLE_Specs_158_158 = STATE_VARIABLE_Specs_0_73;
  succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo0_34);
  if (succeeded)
  {
    MR_Integer UserArityInt_50 = (MR_Integer) (UserArity_36);
    MR_Word SNA_51;
    MR_Word Pieces_52;
    MR_Word Spec_53;
    MR_Word Var_159;
    MR_Word Var_162;
    MR_Word Var_163;
    MR_Word Var_168;
    MR_Word Var_169;
    MR_Word Var_174;
    MR_Word Var_175;
    MR_Word Var_178;
    MR_Word Var_179;
    MR_Word Var_184;
    MR_Word Var_185;
    MR_Word Var_186;
    MR_Word Var_187;

    {
      SNA_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SNA_51, 0) = ((MR_Box) (PredSymName_39));
      MR_hl_field(0, SNA_51, 1) = ((MR_Box) (UserArityInt_50));
    }
    {
      Var_163 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_163, 0) = ((MR_Box) ((MR_Unsigned) 33U));
      MR_hl_field(3, Var_163, 1) = ((MR_Box) (TabledMethodStr_42));
    }
    {
      Var_162 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_162, 0) = ((MR_Box) (Var_163));
      MR_hl_field(1, Var_162, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[2])));
    }
    {
      Var_159 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_159, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[46])));
      MR_hl_field(1, Var_159, 1) = ((MR_Box) (Var_162));
    }
    Var_169 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[48])));
    {
      Var_179 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_179, 0) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(3, Var_179, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_38));
    }
    {
      Var_178 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_178, 0) = ((MR_Box) (Var_179));
      MR_hl_field(1, Var_178, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[51])));
    }
    {
      Var_175 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_175, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[49])));
      MR_hl_field(1, Var_175, 1) = ((MR_Box) (Var_178));
    }
    {
      Var_187 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_187, 0) = ((MR_Box) ((MR_Unsigned) 11U));
      MR_hl_field(3, Var_187, 1) = ((MR_Box) (SNA_51));
    }
    {
      Var_186 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_186, 0) = ((MR_Box) (Var_187));
      MR_hl_field(1, Var_186, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[53])));
    }
    Var_185 = parse_tree__error_spec__color_as_subject_1_f_0(Var_186);
    Var_184 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_185, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[11])));
    Var_174 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_175, Var_184);
    Var_168 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_169, Var_174);
    Pieces_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_159, Var_168);
    {
      Spec_53 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_53, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_tabling.module_add_pragma_tabled_for_pred\'/16"));
      MR_hl_field(0, Spec_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_53, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(0, Spec_53, 3) = ((MR_Box) (Context_23));
      MR_hl_field(0, Spec_53, 4) = ((MR_Box) (Pieces_52));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_74 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_53));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_158_158));
    }
    *STATE_VARIABLE_QualInfo_72 = STATE_VARIABLE_QualInfo_0_71;
    *STATE_VARIABLE_ModuleInfo_70 = STATE_VARIABLE_ModuleInfo_0_69;
  }
  else
  {
    MR_Word NeedsStrat_54;
    MR_Word ProcTable0_57;
    MR_Word STATE_VARIABLE_ModuleInfo_199_199;

    NeedsStrat_54 = hlds__make_hlds__add_pragma_tabling__tabled_eval_method_needs_stratification_1_f_0(TabledMethod_33);
    switch (NeedsStrat_54) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_ModuleInfo_199_199 = STATE_VARIABLE_ModuleInfo_0_69;
        break;
      case (MR_Integer) 1:
        {
          MR_Word StratPredIds0_55;
          MR_Word StratPredIds_56;

          hlds__hlds_module__module_info_get_must_be_stratified_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_69, &StratPredIds0_55);
          mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_26)), StratPredIds0_55, &StratPredIds_56);
          hlds__hlds_module__module_info_set_must_be_stratified_preds_3_p_0(StratPredIds_56, STATE_VARIABLE_ModuleInfo_0_69, &STATE_VARIABLE_ModuleInfo_199_199);
        }
        break;
    }
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_34, &ProcTable0_57);
    if ((MaybeModes_37 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ExistingProcs_63;

      mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_57, &ExistingProcs_63);
      if ((ExistingProcs_63 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_242;
        MR_Word Var_245;
        MR_Word Var_246;
        MR_Word Var_247;
        MR_Word Var_250;
        MR_Word Var_253;
        MR_Word Var_254;
        MR_Word Var_256;
        MR_Word Var_257;
        MR_Word Var_258;
        MR_Word Var_259;
        MR_Word Var_264;
        MR_Word Var_269;
        MR_Word Var_270;
        MR_Integer UserArityInt_298 = (MR_Integer) (UserArity_36);
        MR_Word SNA_299;
        MR_Word Pieces_300;
        MR_Word Spec_301;

        {
          SNA_299 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, SNA_299, 0) = ((MR_Box) (PredSymName_39));
          MR_hl_field(0, SNA_299, 1) = ((MR_Box) (UserArityInt_298));
        }
        {
          Var_246 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_246, 0) = ((MR_Box) ((MR_Unsigned) 33U));
          MR_hl_field(3, Var_246, 1) = ((MR_Box) (TabledMethodStr_42));
        }
        {
          Var_254 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_254, 0) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(3, Var_254, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_38));
        }
        {
          Var_253 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_253, 0) = ((MR_Box) (Var_254));
          MR_hl_field(1, Var_253, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_250 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_250, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[54])));
          MR_hl_field(1, Var_250, 1) = ((MR_Box) (Var_253));
        }
        {
          Var_247 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_247, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[1])));
          MR_hl_field(1, Var_247, 1) = ((MR_Box) (Var_250));
        }
        {
          Var_245 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_245, 0) = ((MR_Box) (Var_246));
          MR_hl_field(1, Var_245, 1) = ((MR_Box) (Var_247));
        }
        {
          Var_242 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_242, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[3])));
          MR_hl_field(1, Var_242, 1) = ((MR_Box) (Var_245));
        }
        {
          Var_259 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_259, 0) = ((MR_Box) ((MR_Unsigned) 11U));
          MR_hl_field(3, Var_259, 1) = ((MR_Box) (SNA_299));
        }
        {
          Var_258 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_258, 0) = ((MR_Box) (Var_259));
          MR_hl_field(1, Var_258, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[10])));
        }
        Var_257 = parse_tree__error_spec__color_as_subject_1_f_0(Var_258);
        Var_270 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[58])));
        Var_269 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_270, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[11])));
        Var_264 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[56])), Var_269);
        Var_256 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_257, Var_264);
        Pieces_300 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_242, Var_256);
        {
          Spec_301 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_301, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_tabling.module_add_pragma_tabled_for_pred\'/16"));
          MR_hl_field(0, Spec_301, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_301, 2) = ((MR_Box) ((MR_Unsigned) 44U));
          MR_hl_field(0, Spec_301, 3) = ((MR_Box) (Context_23));
          MR_hl_field(0, Spec_301, 4) = ((MR_Box) (Pieces_300));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_74 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_301));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_158_158));
        }
        *STATE_VARIABLE_ModuleInfo_70 = STATE_VARIABLE_ModuleInfo_199_199;
        *STATE_VARIABLE_QualInfo_72 = STATE_VARIABLE_QualInfo_0_71;
      }
      else
      {
        MR_Word ExistingProcsTail_65 = ((MR_Word) ((MR_hl_field(1, ExistingProcs_63, (MR_Integer) 1))));
        MR_Word SingleProc_66;
        MR_Word STATE_VARIABLE_ModuleInfo_282_282;
        MR_Word ProcTable_302;
        MR_Word PredInfo_303;

        if ((ExistingProcsTail_65 == (MR_Word) ((MR_Unsigned) 0U)))
          SingleProc_66 = (MR_Integer) 1;
        else
          SingleProc_66 = (MR_Integer) 0;
        hlds__make_hlds__add_pragma_tabling__set_eval_method_create_aux_preds_list_20_p_0(ProgressStream_17, PredOrFunc_38, PredModuleName_20, PredName_21, UserArity_36, ExistingProcs_63, SingleProc_66, Context_23, TabledMethod_33, MaybeAttributes_22, ItemMercuryStatus_24, PredStatus_25, ProcTable0_57, &ProcTable_302, STATE_VARIABLE_ModuleInfo_199_199, &STATE_VARIABLE_ModuleInfo_282_282, STATE_VARIABLE_QualInfo_0_71, STATE_VARIABLE_QualInfo_72, STATE_VARIABLE_Specs_158_158, STATE_VARIABLE_Specs_74);
        hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_302, PredInfo0_34, &PredInfo_303);
        hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_26, PredInfo_303, STATE_VARIABLE_ModuleInfo_282_282, STATE_VARIABLE_ModuleInfo_70);
      }
    }
    else
    {
      MR_Word Modes_58 = ((MR_Word) ((MR_hl_field(1, MaybeModes_37, (MR_Integer) 0))));
      MR_Integer ProcId_59;
      MR_Word ProcInfo0_60;

      succeeded = hlds__hlds_code_util__get_procedure_matching_argmodes_5_p_0(STATE_VARIABLE_ModuleInfo_199_199, ProcTable0_57, Modes_58, &ProcId_59, &ProcInfo0_60);
      if (succeeded)
      {
        MR_Word ProcTable_61;
        MR_Word PredInfo_62;
        MR_Word STATE_VARIABLE_ModuleInfo_201_201;

        hlds__make_hlds__add_pragma_tabling__set_eval_method_create_aux_preds_21_p_0(ProgressStream_17, PredOrFunc_38, PredModuleName_20, PredName_21, UserArity_36, ProcId_59, ProcInfo0_60, (MR_Integer) 1, Context_23, TabledMethod_33, MaybeAttributes_22, ItemMercuryStatus_24, PredStatus_25, ProcTable0_57, &ProcTable_61, STATE_VARIABLE_ModuleInfo_199_199, &STATE_VARIABLE_ModuleInfo_201_201, STATE_VARIABLE_QualInfo_0_71, STATE_VARIABLE_QualInfo_72, STATE_VARIABLE_Specs_158_158, STATE_VARIABLE_Specs_74);
        hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_61, PredInfo0_34, &PredInfo_62);
        hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_26, PredInfo_62, STATE_VARIABLE_ModuleInfo_201_201, STATE_VARIABLE_ModuleInfo_70);
      }
      else
      {
        MR_Word Var_205;
        MR_Word Var_208;
        MR_Word Var_209;
        MR_Word Var_214;
        MR_Word Var_215;
        MR_Word Var_220;
        MR_Word Var_221;
        MR_Word Var_224;
        MR_Word Var_225;
        MR_Word Var_227;
        MR_Word Var_228;
        MR_Word Var_229;
        MR_Word Var_230;
        MR_Integer UserArityInt_286 = (MR_Integer) (UserArity_36);
        MR_Word SNA_287;
        MR_Word Pieces_288;
        MR_Word Spec_289;

        {
          SNA_287 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, SNA_287, 0) = ((MR_Box) (PredSymName_39));
          MR_hl_field(0, SNA_287, 1) = ((MR_Box) (UserArityInt_286));
        }
        {
          Var_209 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_209, 0) = ((MR_Box) ((MR_Unsigned) 33U));
          MR_hl_field(3, Var_209, 1) = ((MR_Box) (TabledMethodStr_42));
        }
        {
          Var_208 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_208, 0) = ((MR_Box) (Var_209));
          MR_hl_field(1, Var_208, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[60])));
        }
        {
          Var_205 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_205, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[3])));
          MR_hl_field(1, Var_205, 1) = ((MR_Box) (Var_208));
        }
        Var_215 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[62])));
        {
          Var_225 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_225, 0) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(3, Var_225, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_38));
        }
        {
          Var_224 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_224, 0) = ((MR_Box) (Var_225));
          MR_hl_field(1, Var_224, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_221 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_221, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[63])));
          MR_hl_field(1, Var_221, 1) = ((MR_Box) (Var_224));
        }
        {
          Var_230 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_230, 0) = ((MR_Box) ((MR_Unsigned) 11U));
          MR_hl_field(3, Var_230, 1) = ((MR_Box) (SNA_287));
        }
        {
          Var_229 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_229, 0) = ((MR_Box) (Var_230));
          MR_hl_field(1, Var_229, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[53])));
        }
        Var_228 = parse_tree__error_spec__color_as_subject_1_f_0(Var_229);
        Var_227 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_228, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[11])));
        Var_220 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_221, Var_227);
        Var_214 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_215, Var_220);
        Pieces_288 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_205, Var_214);
        {
          Spec_289 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_289, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_tabling.module_add_pragma_tabled_for_pred\'/16"));
          MR_hl_field(0, Spec_289, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_289, 2) = ((MR_Box) ((MR_Unsigned) 44U));
          MR_hl_field(0, Spec_289, 3) = ((MR_Box) (Context_23));
          MR_hl_field(0, Spec_289, 4) = ((MR_Box) (Pieces_288));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_74 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_289));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_158_158));
        }
        *STATE_VARIABLE_QualInfo_72 = STATE_VARIABLE_QualInfo_0_71;
        *STATE_VARIABLE_ModuleInfo_70 = STATE_VARIABLE_ModuleInfo_199_199;
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_tabling__set_eval_method_create_aux_preds_list_20_p_0(
  MR_Word ProgressStream_1,
  MR_Word PredOrFunc_2,
  MR_Word PredModuleName_3,
  MR_String PredName_4,
  MR_Word UserArity_5,
  MR_Word HeadVar__6_6,
  MR_Word SingleProc_7,
  MR_Word Context_8,
  MR_Word TabledMethod_9,
  MR_Word MaybeAttributes_10,
  MR_Word ItemMercuryStatus_11,
  MR_Word PredStatus_12,
  MR_Word STATE_VARIABLE_ProcTable_0_13,
  MR_Word * STATE_VARIABLE_ProcTable_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * STATE_VARIABLE_ModuleInfo_16,
  MR_Word STATE_VARIABLE_QualInfo_0_17,
  MR_Word * STATE_VARIABLE_QualInfo_18,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_0_19;
      *STATE_VARIABLE_QualInfo_18 = STATE_VARIABLE_QualInfo_0_17;
      *STATE_VARIABLE_ModuleInfo_16 = STATE_VARIABLE_ModuleInfo_0_15;
      *STATE_VARIABLE_ProcTable_14 = STATE_VARIABLE_ProcTable_0_13;
    }
    else
    {
      MR_Integer ProcId_49;
      MR_Word ProcInfo0_50;
      MR_Word ProcIdsInfos_51 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 1))));
      MR_Word Var_70 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_ProcTable_71_71;
      MR_Word STATE_VARIABLE_ModuleInfo_72_72;
      MR_Word STATE_VARIABLE_QualInfo_73_73;
      MR_Word STATE_VARIABLE_Specs_74_74;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_ProcTable_0_13;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_15;
      MR_Word next_value_of_STATE_VARIABLE_QualInfo_0_17;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_19;

      ProcId_49 = ((MR_Integer) ((MR_hl_field(0, Var_70, (MR_Integer) 0))));
      ProcInfo0_50 = ((MR_Word) ((MR_hl_field(0, Var_70, (MR_Integer) 1))));
      hlds__make_hlds__add_pragma_tabling__set_eval_method_create_aux_preds_21_p_0(ProgressStream_1, PredOrFunc_2, PredModuleName_3, PredName_4, UserArity_5, ProcId_49, ProcInfo0_50, SingleProc_7, Context_8, TabledMethod_9, MaybeAttributes_10, ItemMercuryStatus_11, PredStatus_12, STATE_VARIABLE_ProcTable_0_13, &STATE_VARIABLE_ProcTable_71_71, STATE_VARIABLE_ModuleInfo_0_15, &STATE_VARIABLE_ModuleInfo_72_72, STATE_VARIABLE_QualInfo_0_17, &STATE_VARIABLE_QualInfo_73_73, STATE_VARIABLE_Specs_0_19, &STATE_VARIABLE_Specs_74_74);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__6_6 = ProcIdsInfos_51;
      next_value_of_STATE_VARIABLE_ProcTable_0_13 = STATE_VARIABLE_ProcTable_71_71;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_15 = STATE_VARIABLE_ModuleInfo_72_72;
      next_value_of_STATE_VARIABLE_QualInfo_0_17 = STATE_VARIABLE_QualInfo_73_73;
      next_value_of_STATE_VARIABLE_Specs_0_19 = STATE_VARIABLE_Specs_74_74;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      STATE_VARIABLE_ProcTable_0_13 = next_value_of_STATE_VARIABLE_ProcTable_0_13;
      STATE_VARIABLE_ModuleInfo_0_15 = next_value_of_STATE_VARIABLE_ModuleInfo_0_15;
      STATE_VARIABLE_QualInfo_0_17 = next_value_of_STATE_VARIABLE_QualInfo_0_17;
      STATE_VARIABLE_Specs_0_19 = next_value_of_STATE_VARIABLE_Specs_0_19;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_tabling__set_eval_method_create_aux_preds_21_p_0(
  MR_Word ProgressStream_22,
  MR_Word PredOrFunc_23,
  MR_Word PredModuleName_24,
  MR_String PredName_25,
  MR_Word UserArity_26,
  MR_Integer ProcId_27,
  MR_Word ProcInfo0_28,
  MR_Word SingleProc_29,
  MR_Word Context_30,
  MR_Word TabledMethod_31,
  MR_Word MaybeAttributes_32,
  MR_Word ItemMercuryStatus_33,
  MR_Word PredStatus_34,
  MR_Word STATE_VARIABLE_ProcTable_0_65,
  MR_Word * STATE_VARIABLE_ProcTable_66,
  MR_Word STATE_VARIABLE_ModuleInfo_0_67,
  MR_Word * STATE_VARIABLE_ModuleInfo_68,
  MR_Word STATE_VARIABLE_QualInfo_0_69,
  MR_Word * STATE_VARIABLE_QualInfo_70,
  MR_Word STATE_VARIABLE_Specs_0_71,
  MR_Word * STATE_VARIABLE_Specs_72)
{
  MR_bool succeeded;
  MR_Word OldEvalMethod_39;
  MR_Word PredSymName_40;
  MR_Word PFSymNameArity_41;

  hlds__hlds_pred__proc_info_get_eval_method_2_p_0(ProcInfo0_28, &OldEvalMethod_39);
  {
    PredSymName_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, PredSymName_40, 0) = ((MR_Box) (PredModuleName_24));
    MR_hl_field(1, PredSymName_40, 1) = ((MR_Box) (PredName_25));
  }
  {
    PFSymNameArity_41 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PFSymNameArity_41, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_23));
    MR_hl_field(0, PFSymNameArity_41, 1) = ((MR_Box) (PredSymName_40));
    MR_hl_field(0, PFSymNameArity_41, 2) = ((MR_Box) (UserArity_26));
  }
  if ((OldEvalMethod_39 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word MaybeDeclaredArgModes_42;

    hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0(ProcInfo0_28, &MaybeDeclaredArgModes_42);
    if ((MaybeDeclaredArgModes_42 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String TabledMethodStr_43;
      MR_Integer UserArityInt_44;
      MR_Word SNA_45;
      MR_Word Pieces_46;
      MR_Word Spec_47;
      MR_Word Var_73;
      MR_Word Var_76;
      MR_Word Var_77;
      MR_Word Var_78;
      MR_Word Var_81;
      MR_Word Var_82;
      MR_Word Var_84;
      MR_Word Var_85;
      MR_Word Var_86;
      MR_Word Var_87;
      MR_Word Var_92;
      MR_Word Var_97;
      MR_Word Var_98;

      TabledMethodStr_43 = parse_tree__parse_tree_out_misc__tabled_eval_method_to_pragma_name_1_f_0(TabledMethod_31);
      UserArityInt_44 = (MR_Integer) (UserArity_26);
      {
        SNA_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, SNA_45, 0) = ((MR_Box) (PredSymName_40));
        MR_hl_field(0, SNA_45, 1) = ((MR_Box) (UserArityInt_44));
      }
      {
        Var_77 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_77, 0) = ((MR_Box) ((MR_Unsigned) 33U));
        MR_hl_field(3, Var_77, 1) = ((MR_Box) (TabledMethodStr_43));
      }
      {
        Var_82 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_82, 0) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(3, Var_82, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_23));
      }
      {
        Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_81, 0) = ((MR_Box) (Var_82));
        MR_hl_field(1, Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_78, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[59])));
        MR_hl_field(1, Var_78, 1) = ((MR_Box) (Var_81));
      }
      {
        Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_76, 0) = ((MR_Box) (Var_77));
        MR_hl_field(1, Var_76, 1) = ((MR_Box) (Var_78));
      }
      {
        Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_73, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[3])));
        MR_hl_field(1, Var_73, 1) = ((MR_Box) (Var_76));
      }
      {
        Var_87 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_87, 0) = ((MR_Box) ((MR_Unsigned) 11U));
        MR_hl_field(3, Var_87, 1) = ((MR_Box) (SNA_45));
      }
      {
        Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_86, 0) = ((MR_Box) (Var_87));
        MR_hl_field(1, Var_86, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[10])));
      }
      Var_85 = parse_tree__error_spec__color_as_subject_1_f_0(Var_86);
      Var_98 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[58])));
      Var_97 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_98, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[11])));
      Var_92 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[56])), Var_97);
      Var_84 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_85, Var_92);
      Pieces_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_73, Var_84);
      {
        Spec_47 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_47, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_tabling.set_eval_method_create_aux_preds\'/21"));
        MR_hl_field(0, Spec_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_47, 2) = ((MR_Box) ((MR_Unsigned) 44U));
        MR_hl_field(0, Spec_47, 3) = ((MR_Box) (Context_30));
        MR_hl_field(0, Spec_47, 4) = ((MR_Box) (Pieces_46));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_72 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_47));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_71));
      }
      *STATE_VARIABLE_ProcTable_66 = STATE_VARIABLE_ProcTable_0_65;
      *STATE_VARIABLE_ModuleInfo_68 = STATE_VARIABLE_ModuleInfo_0_67;
      *STATE_VARIABLE_QualInfo_70 = STATE_VARIABLE_QualInfo_0_69;
    }
    else
    {
      MR_Word DeclaredArgModes_48 = ((MR_Word) ((MR_hl_field(1, MaybeDeclaredArgModes_42, (MR_Integer) 0))));
      MR_Word Statistics_51;
      MR_Word AllowReset_52;
      MR_Word ArgErrorPieces_55;
      MR_Word EvalMethod_58;
      MR_Word ProcInfo1_59;
      MR_Word ProcInfo_60;
      MR_Word Globals_61;
      MR_Word IsTablingSupported_62;
      MR_Word STATE_VARIABLE_Specs_129_129;
      MR_Word STATE_VARIABLE_ProcTable_130_130;
      MR_Word STATE_VARIABLE_ProcTable_131_131;
      MR_Word STATE_VARIABLE_ModuleInfo_132_132;
      MR_Word STATE_VARIABLE_QualInfo_133_133;
      MR_Word STATE_VARIABLE_Specs_134_134;

      if ((MaybeAttributes_32 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        Statistics_51 = (MR_Integer) 1;
        AllowReset_52 = (MR_Integer) 1;
        hlds__make_hlds__add_pragma_tabling__check_pred_args_against_tabling_4_p_0(STATE_VARIABLE_ModuleInfo_0_67, (MR_Integer) 1, DeclaredArgModes_48, &ArgErrorPieces_55);
      }
      else
      {
        MR_Word Attributes_49 = ((MR_Word) ((MR_hl_field(1, MaybeAttributes_32, (MR_Integer) 0))));
        MR_Word Strictness_246 = ((MR_Word) ((MR_hl_field(0, Attributes_49, (MR_Integer) 0))));

        Statistics_51 = ((((MR_Unsigned) ((MR_hl_field(0, Attributes_49, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
        AllowReset_52 = ((((MR_Unsigned) ((MR_hl_field(0, Attributes_49, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
        switch (MR_tag((MR_Word) Strictness_246)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            hlds__make_hlds__add_pragma_tabling__check_pred_args_against_tabling_4_p_0(STATE_VARIABLE_ModuleInfo_0_67, (MR_Integer) 1, DeclaredArgModes_48, &ArgErrorPieces_55);
            break;
          case (MR_Integer) 1:
            {
              MR_Word MaybeArgMethods_53 = ((MR_Word) ((MR_hl_field(1, Strictness_246, (MR_Integer) 0))));

              hlds__make_hlds__add_pragma_tabling__check_pred_args_against_tabling_methods_5_p_0(STATE_VARIABLE_ModuleInfo_0_67, (MR_Integer) 1, DeclaredArgModes_48, MaybeArgMethods_53, &ArgErrorPieces_55);
            }
            break;
        }
      }
      if ((ArgErrorPieces_55 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_Specs_129_129 = STATE_VARIABLE_Specs_0_71;
      else
      {
        MR_Word Var_114;
        MR_Word Var_115;
        MR_Word Var_116;
        MR_Word Var_119;
        MR_Word Var_120;
        MR_Word Var_121;
        MR_Word Var_124;
        MR_String TabledMethodStr_212;
        MR_Word Pieces_213;
        MR_Word Spec_214;

        TabledMethodStr_212 = parse_tree__parse_tree_out_misc__tabled_eval_method_to_pragma_name_1_f_0(TabledMethod_31);
        {
          Var_115 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_115, 0) = ((MR_Box) ((MR_Unsigned) 33U));
          MR_hl_field(3, Var_115, 1) = ((MR_Box) (TabledMethodStr_212));
        }
        {
          Var_120 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_120, 0) = ((MR_Box) ((MR_Unsigned) 15U));
          MR_hl_field(3, Var_120, 1) = ((MR_Box) (PFSymNameArity_41));
        }
        {
          Var_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_124, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(1, Var_124, 1) = ((MR_Box) (ArgErrorPieces_55));
        }
        {
          Var_121 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_121, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[65])));
          MR_hl_field(1, Var_121, 1) = ((MR_Box) (Var_124));
        }
        {
          Var_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_119, 0) = ((MR_Box) (Var_120));
          MR_hl_field(1, Var_119, 1) = ((MR_Box) (Var_121));
        }
        {
          Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_116, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[59])));
          MR_hl_field(1, Var_116, 1) = ((MR_Box) (Var_119));
        }
        {
          Var_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_114, 0) = ((MR_Box) (Var_115));
          MR_hl_field(1, Var_114, 1) = ((MR_Box) (Var_116));
        }
        {
          Pieces_213 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_213, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[64])));
          MR_hl_field(1, Pieces_213, 1) = ((MR_Box) (Var_114));
        }
        {
          Spec_214 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_214, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_tabling.set_eval_method_create_aux_preds\'/21"));
          MR_hl_field(0, Spec_214, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_214, 2) = ((MR_Box) ((MR_Unsigned) 44U));
          MR_hl_field(0, Spec_214, 3) = ((MR_Box) (Context_30));
          MR_hl_field(0, Spec_214, 4) = ((MR_Box) (Pieces_213));
        }
        {
          STATE_VARIABLE_Specs_129_129 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_Specs_129_129, 0) = ((MR_Box) (Spec_214));
          MR_hl_field(1, STATE_VARIABLE_Specs_129_129, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_71));
        }
      }
      {
        EvalMethod_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, EvalMethod_58, 0) = ((MR_Box) (TabledMethod_31));
      }
      hlds__hlds_pred__proc_info_set_eval_method_3_p_0(EvalMethod_58, ProcInfo0_28, &ProcInfo1_59);
      hlds__hlds_pred__proc_info_set_table_attributes_3_p_0(MaybeAttributes_32, ProcInfo1_59, &ProcInfo_60);
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_27)), ((MR_Box) (ProcInfo_60)), STATE_VARIABLE_ProcTable_0_65, &STATE_VARIABLE_ProcTable_130_130);
      hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_67, &Globals_61);
      libs__globals__current_grade_supports_tabling_3_p_0(Globals_61, TabledMethod_31, &IsTablingSupported_62);
      switch (Statistics_51) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            STATE_VARIABLE_ProcTable_131_131 = STATE_VARIABLE_ProcTable_130_130;
            STATE_VARIABLE_ModuleInfo_132_132 = STATE_VARIABLE_ModuleInfo_0_67;
            STATE_VARIABLE_QualInfo_133_133 = STATE_VARIABLE_QualInfo_0_69;
            STATE_VARIABLE_Specs_134_134 = STATE_VARIABLE_Specs_129_129;
          }
          break;
        case (MR_Integer) 0:
          hlds__make_hlds__add_pragma_tabling__create_tabling_statistics_pred_19_p_0(ProgressStream_22, PredOrFunc_23, PredModuleName_24, PredName_25, UserArity_26, ProcId_27, SingleProc_29, Context_30, IsTablingSupported_62, ItemMercuryStatus_33, PredStatus_34, STATE_VARIABLE_ProcTable_130_130, &STATE_VARIABLE_ProcTable_131_131, STATE_VARIABLE_ModuleInfo_0_67, &STATE_VARIABLE_ModuleInfo_132_132, STATE_VARIABLE_QualInfo_0_69, &STATE_VARIABLE_QualInfo_133_133, STATE_VARIABLE_Specs_129_129, &STATE_VARIABLE_Specs_134_134);
          break;
      }
      switch (AllowReset_52) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          hlds__make_hlds__add_pragma_tabling__create_tabling_reset_pred_19_p_0(ProgressStream_22, PredOrFunc_23, PredModuleName_24, PredName_25, UserArity_26, ProcId_27, SingleProc_29, Context_30, IsTablingSupported_62, ItemMercuryStatus_33, PredStatus_34, STATE_VARIABLE_ProcTable_131_131, STATE_VARIABLE_ProcTable_66, STATE_VARIABLE_ModuleInfo_132_132, STATE_VARIABLE_ModuleInfo_68, STATE_VARIABLE_QualInfo_133_133, STATE_VARIABLE_QualInfo_70, STATE_VARIABLE_Specs_134_134, STATE_VARIABLE_Specs_72);
          break;
        case (MR_Integer) 1:
          {
            *STATE_VARIABLE_ProcTable_66 = STATE_VARIABLE_ProcTable_131_131;
            *STATE_VARIABLE_ModuleInfo_68 = STATE_VARIABLE_ModuleInfo_132_132;
            *STATE_VARIABLE_QualInfo_70 = STATE_VARIABLE_QualInfo_133_133;
            *STATE_VARIABLE_Specs_72 = STATE_VARIABLE_Specs_134_134;
          }
          break;
      }
    }
  }
  else
  {
    MR_Word OldTabledMethod_63 = ((MR_Word) ((MR_hl_field(1, OldEvalMethod_39, (MR_Integer) 0))));
    MR_String TabledMethodStr_221;
    MR_Integer UserArityInt_222;
    MR_Word SNA_223;
    MR_Word Pieces_224;
    MR_Word Spec_225;

    TabledMethodStr_221 = parse_tree__parse_tree_out_misc__tabled_eval_method_to_pragma_name_1_f_0(TabledMethod_31);
    UserArityInt_222 = (MR_Integer) (UserArity_26);
    {
      SNA_223 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SNA_223, 0) = ((MR_Box) (PredSymName_40));
      MR_hl_field(0, SNA_223, 1) = ((MR_Box) (UserArityInt_222));
    }
    succeeded = parse_tree__prog_data_pragma____Unify____tabled_eval_method_0_0(OldTabledMethod_63, TabledMethod_31);
    if (succeeded)
    {
      MR_Word Var_139;
      MR_Word Var_142;
      MR_Word Var_143;
      MR_Word Var_144;
      MR_Word Var_145;
      MR_Word Var_150;
      MR_Word Var_151;
      MR_Word Var_152;
      MR_Word Var_155;
      MR_Word Var_156;

      {
        Var_143 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_143, 0) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(3, Var_143, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_23));
      }
      {
        Var_145 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_145, 0) = ((MR_Box) ((MR_Unsigned) 11U));
        MR_hl_field(3, Var_145, 1) = ((MR_Box) (SNA_223));
      }
      {
        Var_144 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_144, 0) = ((MR_Box) (Var_145));
        MR_hl_field(1, Var_144, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[67])));
      }
      {
        Var_142 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_142, 0) = ((MR_Box) (Var_143));
        MR_hl_field(1, Var_142, 1) = ((MR_Box) (Var_144));
      }
      {
        Var_139 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_139, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[3])));
        MR_hl_field(1, Var_139, 1) = ((MR_Box) (Var_142));
      }
      {
        Var_156 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_156, 0) = ((MR_Box) (TabledMethodStr_221));
      }
      {
        Var_155 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_155, 0) = ((MR_Box) (Var_156));
        MR_hl_field(1, Var_155, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[70])));
      }
      {
        Var_152 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_152, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[68])));
        MR_hl_field(1, Var_152, 1) = ((MR_Box) (Var_155));
      }
      Var_151 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_152);
      Var_150 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_151, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[72])));
      Pieces_224 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_139, Var_150);
    }
    else
    {
      MR_String OldTabledMethodStr_64;
      MR_Word Var_167;
      MR_Word Var_170;
      MR_Word Var_171;
      MR_Word Var_172;
      MR_Word Var_173;
      MR_Word Var_178;
      MR_Word Var_179;
      MR_Word Var_187;
      MR_Word Var_188;
      MR_Word Var_189;
      MR_Word Var_190;
      MR_Word Var_192;
      MR_Word Var_197;
      MR_Word Var_198;
      MR_Word Var_199;
      MR_Word Var_200;

      OldTabledMethodStr_64 = parse_tree__parse_tree_out_misc__tabled_eval_method_to_pragma_name_1_f_0(OldTabledMethod_63);
      {
        Var_171 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_171, 0) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(3, Var_171, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_23));
      }
      {
        Var_173 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_173, 0) = ((MR_Box) ((MR_Unsigned) 11U));
        MR_hl_field(3, Var_173, 1) = ((MR_Box) (SNA_223));
      }
      {
        Var_172 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_172, 0) = ((MR_Box) (Var_173));
        MR_hl_field(1, Var_172, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[67])));
      }
      {
        Var_170 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_170, 0) = ((MR_Box) (Var_171));
        MR_hl_field(1, Var_170, 1) = ((MR_Box) (Var_172));
      }
      {
        Var_167 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_167, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[3])));
        MR_hl_field(1, Var_167, 1) = ((MR_Box) (Var_170));
      }
      Var_179 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[76])));
      {
        Var_190 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_190, 0) = ((MR_Box) (OldTabledMethodStr_64));
      }
      {
        Var_189 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_189, 0) = ((MR_Box) (Var_190));
        MR_hl_field(1, Var_189, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_188 = parse_tree__error_spec__color_as_inconsistent_1_f_0(Var_189);
      {
        Var_200 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_200, 0) = ((MR_Box) (TabledMethodStr_221));
      }
      {
        Var_199 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_199, 0) = ((MR_Box) (Var_200));
        MR_hl_field(1, Var_199, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[53])));
      }
      Var_198 = parse_tree__error_spec__color_as_inconsistent_1_f_0(Var_199);
      Var_197 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_198, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[11])));
      Var_192 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[78])), Var_197);
      Var_187 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_188, Var_192);
      Var_178 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_179, Var_187);
      Pieces_224 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_167, Var_178);
    }
    {
      Spec_225 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_225, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_tabling.set_eval_method_create_aux_preds\'/21"));
      MR_hl_field(0, Spec_225, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_225, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(0, Spec_225, 3) = ((MR_Box) (Context_30));
      MR_hl_field(0, Spec_225, 4) = ((MR_Box) (Pieces_224));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_72 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_225));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_71));
    }
    *STATE_VARIABLE_ProcTable_66 = STATE_VARIABLE_ProcTable_0_65;
    *STATE_VARIABLE_ModuleInfo_68 = STATE_VARIABLE_ModuleInfo_0_67;
    *STATE_VARIABLE_QualInfo_70 = STATE_VARIABLE_QualInfo_0_69;
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
      MR_Word Mode_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Modes_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));

      succeeded = check_hlds__mode_test__mode_is_fully_input_2_p_0(ModuleInfo_1, Mode_9);
      if (succeeded)
      {
        MR_Integer Var_12 = (MR_Integer) ((MR_Unsigned) ArgNum_2 + (MR_Unsigned) 1);
        MR_Integer next_value_of_ArgNum_2 = Var_12;
        MR_Word next_value_of_HeadVar__3_3 = Modes_10;

        // direct tailcall eliminated
        ;
        ArgNum_2 = next_value_of_ArgNum_2;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        continue;
      }
      else
      {
        succeeded = check_hlds__mode_test__mode_is_fully_output_2_p_0(ModuleInfo_1, Mode_9);
        if (succeeded)
        {
          MR_Integer Var_14 = (MR_Integer) ((MR_Unsigned) ArgNum_2 + (MR_Unsigned) 1);
          MR_Integer next_value_of_ArgNum_2 = Var_14;
          MR_Word next_value_of_HeadVar__3_3 = Modes_10;

          // direct tailcall eliminated
          ;
          ArgNum_2 = next_value_of_ArgNum_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
        else
        {
          MR_Word Var_16;
          MR_String Var_17;
          MR_String Var_19;

          Var_19 = mercury__string__int_to_string_1_f_0(ArgNum_2);
          Var_17 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", Var_19);
          {
            Var_16 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_16, 0) = ((MR_Box) (Var_17));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__4_4 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_16));
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
      MR_Word Var_129 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Var_130 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__5_5 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[83]));
      else
      {
        MR_Word MaybeArgMethod_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
        MR_Word MaybeArgMethods_33 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));

        succeeded = check_hlds__mode_test__mode_is_fully_input_2_p_0(ModuleInfo_1, Var_130);
        if (succeeded)
          if ((MaybeArgMethod_32 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_String MethodStr_36;
            MR_Word Var_40;
            MR_Word Var_43;
            MR_Word Var_44;
            MR_String Var_45;
            MR_String Var_47;
            MR_Word Var_55;
            MR_Word Var_56;
            MR_Word Var_57;
            MR_Word Var_58;
            MR_Word Var_60;
            MR_Word Var_65;
            MR_Word Var_66;

            MethodStr_36 = parse_tree__parse_tree_out_misc__maybe_arg_tabling_method_to_string_1_f_0(MaybeArgMethod_32);
            Var_47 = mercury__string__int_to_string_1_f_0(ArgNum_2);
            Var_45 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", Var_47);
            {
              Var_44 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_44, 0) = ((MR_Box) (Var_45));
            }
            {
              Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_43, 0) = ((MR_Box) (Var_44));
              MR_hl_field(1, Var_43, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[87])));
            }
            {
              Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_40, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[84])));
              MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_43));
            }
            {
              Var_58 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_58, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_58, 1) = ((MR_Box) (MethodStr_36));
            }
            {
              Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_57, 0) = ((MR_Box) (Var_58));
              MR_hl_field(1, Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_56 = parse_tree__error_spec__color_as_subject_1_f_0(Var_57);
            Var_66 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[93])));
            Var_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_66, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[11])));
            Var_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[89])), Var_65);
            Var_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_56, Var_60);
            *HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_40, Var_55);
          }
          else
          {
            MR_Integer Var_38 = (MR_Integer) ((MR_Unsigned) ArgNum_2 + (MR_Unsigned) 1);
            MR_Integer next_value_of_ArgNum_2 = Var_38;
            MR_Word next_value_of_HeadVar__3_3 = Var_129;
            MR_Word next_value_of_HeadVar__4_4 = MaybeArgMethods_33;

            // direct tailcall eliminated
            ;
            ArgNum_2 = next_value_of_ArgNum_2;
            HeadVar__3_3 = next_value_of_HeadVar__3_3;
            HeadVar__4_4 = next_value_of_HeadVar__4_4;
            continue;
          }
        else
        {
          succeeded = check_hlds__mode_test__mode_is_fully_output_2_p_0(ModuleInfo_1, Var_130);
          if (succeeded)
            if ((MaybeArgMethod_32 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Integer Var_114 = (MR_Integer) ((MR_Unsigned) ArgNum_2 + (MR_Unsigned) 1);
              MR_Integer next_value_of_ArgNum_2 = Var_114;
              MR_Word next_value_of_HeadVar__3_3 = Var_129;
              MR_Word next_value_of_HeadVar__4_4 = MaybeArgMethods_33;

              // direct tailcall eliminated
              ;
              ArgNum_2 = next_value_of_ArgNum_2;
              HeadVar__3_3 = next_value_of_HeadVar__3_3;
              HeadVar__4_4 = next_value_of_HeadVar__4_4;
              continue;
            }
            else
            {
              MR_Word Var_77;
              MR_Word Var_80;
              MR_Word Var_81;
              MR_String Var_82;
              MR_String Var_84;
              MR_Word Var_92;
              MR_Word Var_93;
              MR_Word Var_94;
              MR_Word Var_95;
              MR_Word Var_97;
              MR_Word Var_102;
              MR_Word Var_103;
              MR_String MethodStr_126;

              MethodStr_126 = parse_tree__parse_tree_out_misc__maybe_arg_tabling_method_to_string_1_f_0(MaybeArgMethod_32);
              Var_84 = mercury__string__int_to_string_1_f_0(ArgNum_2);
              Var_82 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", Var_84);
              {
                Var_81 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Var_81, 0) = ((MR_Box) (Var_82));
              }
              {
                Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_80, 0) = ((MR_Box) (Var_81));
                MR_hl_field(1, Var_80, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[87])));
              }
              {
                Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_77, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[84])));
                MR_hl_field(1, Var_77, 1) = ((MR_Box) (Var_80));
              }
              {
                Var_95 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_95, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_95, 1) = ((MR_Box) (MethodStr_126));
              }
              {
                Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_94, 0) = ((MR_Box) (Var_95));
                MR_hl_field(1, Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              Var_93 = parse_tree__error_spec__color_as_subject_1_f_0(Var_94);
              Var_103 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[96])));
              Var_102 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_103, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[11])));
              Var_97 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[89])), Var_102);
              Var_92 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_93, Var_97);
              *HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_77, Var_92);
            }
          else
          {
            MR_Word Var_116;
            MR_String Var_117;
            MR_String Var_119;

            Var_119 = mercury__string__int_to_string_1_f_0(ArgNum_2);
            Var_117 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", Var_119);
            {
              Var_116 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_116, 0) = ((MR_Box) (Var_117));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__5_5 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_116));
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
  MR_Word STATE_VARIABLE_ProcTable_0_66,
  MR_Word * STATE_VARIABLE_ProcTable_67,
  MR_Word STATE_VARIABLE_ModuleInfo_0_68,
  MR_Word * STATE_VARIABLE_ModuleInfo_69,
  MR_Word STATE_VARIABLE_QualInfo_0_70,
  MR_Word * STATE_VARIABLE_QualInfo_71,
  MR_Word STATE_VARIABLE_Specs_0_72,
  MR_Word * STATE_VARIABLE_Specs_73)
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
  MR_Word STATE_VARIABLE_ModuleInfo_95_95;
  MR_Word STATE_VARIABLE_Specs_96_96;
  MR_Word STATE_VARIABLE_VarSet_97_97;
  MR_Word STATE_VARIABLE_VarSet_99_99;
  MR_Word STATE_VARIABLE_VarSet_101_101;
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
    MR_hl_field(0, PredDecl_49, 5) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_2[2])));
    MR_hl_field(0, PredDecl_49, 6) = ((MR_Box) (MaybeAttrs_48));
    MR_hl_field(0, PredDecl_49, 7) = ((MR_Box) (TypeVarSet_41));
    MR_hl_field(0, PredDecl_49, 8) = ((MR_Box) (InstVarSet_42));
    MR_hl_field(0, PredDecl_49, 9) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, PredDecl_49, 10) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(0, PredDecl_49, 11) = ((MR_Box) (&hlds__make_hlds__add_pragma_tabling_scalar_common_1[79]));
    MR_hl_field(0, PredDecl_49, 12) = ((MR_Box) (Context_27));
    MR_hl_field(0, PredDecl_49, 13) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  hlds__make_hlds__add_pred__module_add_pred_decl_9_p_0(ItemMercuryStatus_29, PredStatus_30, (MR_Integer) 1, PredDecl_49, &_MaybePredProcId_50, STATE_VARIABLE_ModuleInfo_0_68, &STATE_VARIABLE_ModuleInfo_95_95, STATE_VARIABLE_Specs_0_72, &STATE_VARIABLE_Specs_96_96);
  parse_tree__prog_util__user_arity_pred_form_arity_3_p_0(PredOrFunc_21, UserArity_24, &PredFormArity_51);
  {
    PFSymNameArity_52 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PFSymNameArity_52, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_21));
    MR_hl_field(0, PFSymNameArity_52, 1) = ((MR_Box) (PredSymName_45));
    MR_hl_field(0, PFSymNameArity_52, 2) = ((MR_Box) (PredFormArity_51));
  }
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &STATE_VARIABLE_VarSet_97_97);
  mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "IO0", &IO0_54, STATE_VARIABLE_VarSet_97_97, &STATE_VARIABLE_VarSet_99_99);
  mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "IO", &IO_55, STATE_VARIABLE_VarSet_99_99, &STATE_VARIABLE_VarSet_101_101);
  switch (IsTablingSupported_28) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Args_62;
        MR_Word BodyExpr_63;
        MR_Word ResetClauseInfo_64;
        MR_Word Var_128;
        MR_Word Var_129;
        MR_Word Var_130;
        MR_Word Var_136;

        {
          Var_128 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_128, 0) = ((MR_Box) (IO0_54));
          MR_hl_field(1, Var_128, 1) = ((MR_Box) (Context_27));
        }
        {
          Var_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_130, 0) = ((MR_Box) (IO_55));
          MR_hl_field(1, Var_130, 1) = ((MR_Box) (Context_27));
        }
        {
          Var_129 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_129, 0) = ((MR_Box) (Var_130));
          MR_hl_field(1, Var_129, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Args_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Args_62, 0) = ((MR_Box) (Var_128));
          MR_hl_field(1, Args_62, 1) = ((MR_Box) (Var_129));
        }
        {
          BodyExpr_63 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, BodyExpr_63, 0) = ((MR_Box) (Context_27));
          MR_hl_field(0, BodyExpr_63, 1) = ((MR_Box) (Var_128));
          MR_hl_field(0, BodyExpr_63, 2) = ((MR_Box) (Var_130));
          MR_hl_field(0, BodyExpr_63, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        {
          Var_136 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_136, 0) = ((MR_Box) (BodyExpr_63));
          MR_hl_field(1, Var_136, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          ResetClauseInfo_64 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ResetClauseInfo_64, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(0, ResetClauseInfo_64, 1) = ((MR_Box) (ResetPredSymName_37));
          MR_hl_field(0, ResetClauseInfo_64, 2) = ((MR_Box) (Args_62));
          MR_hl_field(0, ResetClauseInfo_64, 3) = ((MR_Box) (STATE_VARIABLE_VarSet_101_101));
          MR_hl_field(0, ResetClauseInfo_64, 4) = ((MR_Box) (Var_136));
          MR_hl_field(0, ResetClauseInfo_64, 5) = ((MR_Box) (Context_27));
          MR_hl_field(0, ResetClauseInfo_64, 6) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        hlds__make_hlds__add_clause__module_add_clause_10_p_0(ProgressStream_20, PredStatus_30, (MR_Word) ((MR_Unsigned) 0U), ResetClauseInfo_64, STATE_VARIABLE_ModuleInfo_95_95, STATE_VARIABLE_ModuleInfo_69, STATE_VARIABLE_QualInfo_0_70, STATE_VARIABLE_QualInfo_71, STATE_VARIABLE_Specs_96_96, STATE_VARIABLE_Specs_73);
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
        MR_Word STATE_VARIABLE_Attrs_108_108;
        MR_Word STATE_VARIABLE_Attrs_111_111;
        MR_Word STATE_VARIABLE_Attrs_113_113;
        MR_Word STATE_VARIABLE_Attrs_115_115;
        MR_Word STATE_VARIABLE_Attrs_117_117;
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
        STATE_VARIABLE_Attrs_108_108 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 0);
        parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_108_108, &STATE_VARIABLE_Attrs_111_111);
        parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_111_111, &STATE_VARIABLE_Attrs_113_113);
        parse_tree__prog_data_foreign__set_purity_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_113_113, &STATE_VARIABLE_Attrs_115_115);
        parse_tree__prog_data_foreign__set_may_duplicate_3_p_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_2[3])), STATE_VARIABLE_Attrs_115_115, &STATE_VARIABLE_Attrs_117_117);
        GlobalVarName_58 = hlds__make_hlds__add_pragma_tabling__table_info_c_global_var_name_3_f_0(STATE_VARIABLE_ModuleInfo_95_95, PFSymNameArity_52, ProcId_25);
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
          MR_hl_field(0, ResetFCInfo_61, 0) = ((MR_Box) (STATE_VARIABLE_Attrs_117_117));
          MR_hl_field(0, ResetFCInfo_61, 1) = ((MR_Box) (ResetPredSymName_37));
          MR_hl_field(0, ResetFCInfo_61, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(0, ResetFCInfo_61, 3) = ((MR_Box) (Var_122));
          MR_hl_field(0, ResetFCInfo_61, 4) = ((MR_Box) (STATE_VARIABLE_VarSet_101_101));
          MR_hl_field(0, ResetFCInfo_61, 5) = ((MR_Box) (InstVarSet_42));
          MR_hl_field(0, ResetFCInfo_61, 6) = ((MR_Box) (ResetImpl_60));
          MR_hl_field(0, ResetFCInfo_61, 7) = ((MR_Box) (Context_27));
          MR_hl_field(0, ResetFCInfo_61, 8) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        hlds__make_hlds__add_foreign_proc__add_foreign_proc_8_p_0(ProgressStream_20, ItemMercuryStatus_29, PredStatus_30, ResetFCInfo_61, STATE_VARIABLE_ModuleInfo_95_95, STATE_VARIABLE_ModuleInfo_69, STATE_VARIABLE_Specs_96_96, STATE_VARIABLE_Specs_73);
        *STATE_VARIABLE_QualInfo_71 = STATE_VARIABLE_QualInfo_0_70;
      }
      break;
  }
  *STATE_VARIABLE_ProcTable_67 = STATE_VARIABLE_ProcTable_0_66;
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
  MR_Word STATE_VARIABLE_ProcTable_0_77,
  MR_Word * STATE_VARIABLE_ProcTable_78,
  MR_Word STATE_VARIABLE_ModuleInfo_0_79,
  MR_Word * STATE_VARIABLE_ModuleInfo_80,
  MR_Word STATE_VARIABLE_QualInfo_0_81,
  MR_Word * STATE_VARIABLE_QualInfo_82,
  MR_Word STATE_VARIABLE_Specs_0_83,
  MR_Word * STATE_VARIABLE_Specs_84)
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
  MR_Word STATE_VARIABLE_ModuleInfo_111_111;
  MR_Word STATE_VARIABLE_Specs_112_112;
  MR_Word STATE_VARIABLE_VarSet_113_113;
  MR_Word STATE_VARIABLE_VarSet_115_115;
  MR_Word STATE_VARIABLE_VarSet_117_117;
  MR_Word STATE_VARIABLE_VarSet_119_119;
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
    MR_hl_field(0, PredDecl_53, 5) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_2[2])));
    MR_hl_field(0, PredDecl_53, 6) = ((MR_Box) (MaybeAttrs_52));
    MR_hl_field(0, PredDecl_53, 7) = ((MR_Box) (TypeVarSet_45));
    MR_hl_field(0, PredDecl_53, 8) = ((MR_Box) (InstVarSet_46));
    MR_hl_field(0, PredDecl_53, 9) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, PredDecl_53, 10) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(0, PredDecl_53, 11) = ((MR_Box) (&hlds__make_hlds__add_pragma_tabling_scalar_common_1[79]));
    MR_hl_field(0, PredDecl_53, 12) = ((MR_Box) (Context_27));
    MR_hl_field(0, PredDecl_53, 13) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  hlds__make_hlds__add_pred__module_add_pred_decl_9_p_0(ItemMercuryStatus_29, PredStatus_30, (MR_Integer) 1, PredDecl_53, &_MaybePredProcId_54, STATE_VARIABLE_ModuleInfo_0_79, &STATE_VARIABLE_ModuleInfo_111_111, STATE_VARIABLE_Specs_0_83, &STATE_VARIABLE_Specs_112_112);
  parse_tree__prog_util__user_arity_pred_form_arity_3_p_0(PredOrFunc_21, UserArity_24, &PredFormArity_55);
  {
    PFSymNameArity_56 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PFSymNameArity_56, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_21));
    MR_hl_field(0, PFSymNameArity_56, 1) = ((MR_Box) (PredSymName_49));
    MR_hl_field(0, PFSymNameArity_56, 2) = ((MR_Box) (PredFormArity_55));
  }
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &STATE_VARIABLE_VarSet_113_113);
  mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "Stats", &Stats_58, STATE_VARIABLE_VarSet_113_113, &STATE_VARIABLE_VarSet_115_115);
  mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "IO0", &IO0_59, STATE_VARIABLE_VarSet_115_115, &STATE_VARIABLE_VarSet_117_117);
  mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "IO", &IO_60, STATE_VARIABLE_VarSet_117_117, &STATE_VARIABLE_VarSet_119_119);
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
        MR_Word Var_152;
        MR_Word Var_155;
        MR_Word Var_156;
        MR_Word Var_157;
        MR_Word Var_158;
        MR_Word Var_159;
        MR_Word Var_166;
        MR_Word Var_170;

        Var_152 = mdbcomp__builtin_modules__mercury_table_statistics_module_0_f_0();
        {
          DummyStatsFuncSymName_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, DummyStatsFuncSymName_68, 0) = ((MR_Box) (Var_152));
          MR_hl_field(1, DummyStatsFuncSymName_68, 1) = ((MR_Box) ((MR_String) "dummy_proc_table_statistics"));
        }
        mdbcomp__sym_name__sym_name_to_term_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Context_27, DummyStatsFuncSymName_68, (MR_Word) ((MR_Unsigned) 0U), &DummyStatsFuncTerm_69);
        {
          Var_155 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_155, 0) = ((MR_Box) (Stats_58));
          MR_hl_field(1, Var_155, 1) = ((MR_Box) (Context_27));
        }
        {
          Var_157 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_157, 0) = ((MR_Box) (IO0_59));
          MR_hl_field(1, Var_157, 1) = ((MR_Box) (Context_27));
        }
        {
          Var_159 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_159, 0) = ((MR_Box) (IO_60));
          MR_hl_field(1, Var_159, 1) = ((MR_Box) (Context_27));
        }
        {
          Var_158 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_158, 0) = ((MR_Box) (Var_159));
          MR_hl_field(1, Var_158, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_156 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_156, 0) = ((MR_Box) (Var_157));
          MR_hl_field(1, Var_156, 1) = ((MR_Box) (Var_158));
        }
        {
          Args_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Args_70, 0) = ((MR_Box) (Var_155));
          MR_hl_field(1, Args_70, 1) = ((MR_Box) (Var_156));
        }
        {
          GetStatsExpr_71 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, GetStatsExpr_71, 0) = ((MR_Box) (Context_27));
          MR_hl_field(0, GetStatsExpr_71, 1) = ((MR_Box) (Var_155));
          MR_hl_field(0, GetStatsExpr_71, 2) = ((MR_Box) (DummyStatsFuncTerm_69));
          MR_hl_field(0, GetStatsExpr_71, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        {
          UpdateIOExpr_72 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, UpdateIOExpr_72, 0) = ((MR_Box) (Context_27));
          MR_hl_field(0, UpdateIOExpr_72, 1) = ((MR_Box) (Var_157));
          MR_hl_field(0, UpdateIOExpr_72, 2) = ((MR_Box) (Var_159));
          MR_hl_field(0, UpdateIOExpr_72, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        {
          Var_166 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_166, 0) = ((MR_Box) (UpdateIOExpr_72));
          MR_hl_field(1, Var_166, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          GetStatsUpdateIOExpr_73 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, GetStatsUpdateIOExpr_73, 0) = ((MR_Box) (Context_27));
          MR_hl_field(2, GetStatsUpdateIOExpr_73, 1) = ((MR_Box) (GetStatsExpr_71));
          MR_hl_field(2, GetStatsUpdateIOExpr_73, 2) = ((MR_Box) (Var_166));
        }
        {
          BodyExpr_74 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, BodyExpr_74, 0) = ((MR_Box) ((MR_Unsigned) 7U));
          MR_hl_field(3, BodyExpr_74, 1) = ((MR_Box) (Context_27));
          MR_hl_field(3, BodyExpr_74, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(3, BodyExpr_74, 3) = ((MR_Box) (GetStatsUpdateIOExpr_73));
        }
        {
          Var_170 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_170, 0) = ((MR_Box) (BodyExpr_74));
          MR_hl_field(1, Var_170, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          StatsClauseInfo_75 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, StatsClauseInfo_75, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(0, StatsClauseInfo_75, 1) = ((MR_Box) (StatsPredSymName_37));
          MR_hl_field(0, StatsClauseInfo_75, 2) = ((MR_Box) (Args_70));
          MR_hl_field(0, StatsClauseInfo_75, 3) = ((MR_Box) (STATE_VARIABLE_VarSet_119_119));
          MR_hl_field(0, StatsClauseInfo_75, 4) = ((MR_Box) (Var_170));
          MR_hl_field(0, StatsClauseInfo_75, 5) = ((MR_Box) (Context_27));
          MR_hl_field(0, StatsClauseInfo_75, 6) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        hlds__make_hlds__add_clause__module_add_clause_10_p_0(ProgressStream_20, PredStatus_30, (MR_Word) ((MR_Unsigned) 0U), StatsClauseInfo_75, STATE_VARIABLE_ModuleInfo_111_111, STATE_VARIABLE_ModuleInfo_80, STATE_VARIABLE_QualInfo_0_81, STATE_VARIABLE_QualInfo_82, STATE_VARIABLE_Specs_112_112, STATE_VARIABLE_Specs_84);
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
        MR_Word STATE_VARIABLE_Attrs_129_129;
        MR_Word STATE_VARIABLE_Attrs_132_132;
        MR_Word STATE_VARIABLE_Attrs_134_134;
        MR_Word STATE_VARIABLE_Attrs_136_136;
        MR_Word STATE_VARIABLE_Attrs_138_138;
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
        STATE_VARIABLE_Attrs_129_129 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 0);
        parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_129_129, &STATE_VARIABLE_Attrs_132_132);
        parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_132_132, &STATE_VARIABLE_Attrs_134_134);
        parse_tree__prog_data_foreign__set_purity_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_134_134, &STATE_VARIABLE_Attrs_136_136);
        parse_tree__prog_data_foreign__set_may_duplicate_3_p_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_2[3])), STATE_VARIABLE_Attrs_136_136, &STATE_VARIABLE_Attrs_138_138);
        Global_64 = hlds__make_hlds__add_pragma_tabling__table_info_c_global_var_name_3_f_0(STATE_VARIABLE_ModuleInfo_111_111, PFSymNameArity_56, ProcId_25);
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
          MR_hl_field(0, StatsFCInfo_67, 0) = ((MR_Box) (STATE_VARIABLE_Attrs_138_138));
          MR_hl_field(0, StatsFCInfo_67, 1) = ((MR_Box) (StatsPredSymName_37));
          MR_hl_field(0, StatsFCInfo_67, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(0, StatsFCInfo_67, 3) = ((MR_Box) (Var_145));
          MR_hl_field(0, StatsFCInfo_67, 4) = ((MR_Box) (STATE_VARIABLE_VarSet_119_119));
          MR_hl_field(0, StatsFCInfo_67, 5) = ((MR_Box) (InstVarSet_46));
          MR_hl_field(0, StatsFCInfo_67, 6) = ((MR_Box) (StatsImpl_66));
          MR_hl_field(0, StatsFCInfo_67, 7) = ((MR_Box) (Context_27));
          MR_hl_field(0, StatsFCInfo_67, 8) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        hlds__make_hlds__add_foreign_proc__add_foreign_proc_8_p_0(ProgressStream_20, ItemMercuryStatus_29, PredStatus_30, StatsFCInfo_67, STATE_VARIABLE_ModuleInfo_111_111, STATE_VARIABLE_ModuleInfo_80, STATE_VARIABLE_Specs_112_112, STATE_VARIABLE_Specs_84);
        *STATE_VARIABLE_QualInfo_82 = STATE_VARIABLE_QualInfo_0_81;
      }
      break;
  }
  *STATE_VARIABLE_ProcTable_78 = STATE_VARIABLE_ProcTable_0_77;
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_tabling__table_info_c_global_var_name_3_f_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__make_hlds__add_pragma_tabling__IntroducedFrom__pred__table_info_c_global_var_name__751__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
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
  libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 328, &HighLevelCode_11);
  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_5, &ModuleName_12);
  PredOrFunc_13 = ((MR_Unsigned) ((MR_hl_field(0, PFSymNameArity_6, (MR_Integer) 0))) & (MR_Integer) 1);
  PredSymName_14 = ((MR_Word) ((MR_hl_field(0, PFSymNameArity_6, (MR_Integer) 1))));
  PredFormArity_15 = ((MR_Word) ((MR_hl_field(0, PFSymNameArity_6, (MR_Integer) 2))));
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
  MR_Word conv2_STATE_VARIABLE_ModuleInfo_70;
  MR_Word conv1_STATE_VARIABLE_QualInfo_72;
  MR_Word conv0_STATE_VARIABLE_Specs_74;

  hlds__make_hlds__add_pragma_tabling__module_add_pragma_tabled_for_pred_16_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 9)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 10)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 11)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ModuleInfo_70, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_QualInfo_72, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_Specs_74);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ModuleInfo_70));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_QualInfo_72));
  *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_74));
}

void MR_CALL 
hlds__make_hlds__add_pragma_tabling__module_add_pragma_tabled_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word TabledInfo_12,
  MR_Word ItemMercuryStatus_13,
  MR_Word PredStatus_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_57,
  MR_Word * STATE_VARIABLE_ModuleInfo_58,
  MR_Word STATE_VARIABLE_QualInfo_0_59,
  MR_Word * STATE_VARIABLE_QualInfo_60,
  MR_Word STATE_VARIABLE_Specs_0_61,
  MR_Word * STATE_VARIABLE_Specs_62)
{
  MR_Word TabledMethod_18 = ((MR_Word) ((MR_hl_field(0, TabledInfo_12, (MR_Integer) 0))));
  MR_Word PredOrProcSpec_19 = ((MR_Word) ((MR_hl_field(0, TabledInfo_12, (MR_Integer) 1))));
  MR_Word MaybeAttributes_20 = ((MR_Word) ((MR_hl_field(0, TabledInfo_12, (MR_Integer) 2))));
  MR_Word Context_21 = ((MR_Word) ((MR_hl_field(0, TabledInfo_12, (MR_Integer) 3))));
  MR_Word PFUMM_23 = ((MR_Word) ((MR_hl_field(0, PredOrProcSpec_19, (MR_Integer) 0))));
  MR_Word PredSymName_24 = ((MR_Word) ((MR_hl_field(0, PredOrProcSpec_19, (MR_Integer) 1))));
  MR_Word PredModuleName_25;
  MR_String PredName_26;
  MR_Word PredicateTable0_28;
  MR_Integer UserArityInt_34;
  MR_Word PredIds_40;
  MR_Word STATE_VARIABLE_ModuleInfo_73_73;
  MR_Word STATE_VARIABLE_Specs_74_74;
  MR_Word STATE_VARIABLE_Specs_167_167;
  MR_Word Var_168;
  MR_Box conv5_STATE_VARIABLE_ModuleInfo_58;
  MR_Box conv4_STATE_VARIABLE_QualInfo_60;
  MR_Box conv3_STATE_VARIABLE_Specs_62;

  if (((MR_tag((MR_Word) PredSymName_24)) == (MR_Integer) 1))
  {
    PredModuleName_25 = ((MR_Word) ((MR_hl_field(1, PredSymName_24, (MR_Integer) 0))));
    PredName_26 = ((MR_String) ((MR_hl_field(1, PredSymName_24, (MR_Integer) 1))));
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_pragma_tabling.module_add_pragma_tabled\'/10", (MR_String) "unqualified PredSymName");
      return;
    }
  hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_57, &PredicateTable0_28);
  switch (MR_tag((MR_Word) PFUMM_23)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ModesOrArity_241 = ((MR_Word) ((MR_hl_field(0, PFUMM_23, (MR_Integer) 0))));
        MR_Word PredFormArity_244;
        MR_Word UserArity_245;
        MR_Word PredIds0_246;

        if (((MR_tag((MR_Word) ModesOrArity_241)) == (MR_Integer) 1))
        {
          UserArity_245 = ((MR_Word) ((MR_hl_field(1, ModesOrArity_241, (MR_Integer) 0))));
          parse_tree__prog_util__user_arity_pred_form_arity_3_p_0((MR_Integer) 0, UserArity_245, &PredFormArity_244);
        }
        else
        {
          MR_Word Modes_207 = ((MR_Word) ((MR_hl_field(0, ModesOrArity_241, (MR_Integer) 0))));

          PredFormArity_244 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_207);
          parse_tree__prog_util__user_arity_pred_form_arity_3_p_1((MR_Integer) 0, &UserArity_245, PredFormArity_244);
        }
        UserArityInt_34 = (MR_Integer) (UserArity_245);
        hlds__pred_table__predicate_table_lookup_pf_m_n_a_7_p_0(PredicateTable0_28, (MR_Integer) 0, (MR_Integer) 0, PredModuleName_25, PredName_26, PredFormArity_244, &PredIds0_246);
        if ((PredIds0_246 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Origin_211;
          MR_String TabledMethodStr_212;
          MR_Word DescPieces_213;
          MR_Word PredId_214;
          MR_Word Var_215;
          MR_Word Var_216;

          {
            Var_215 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_215, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(0, Var_215, 1) = ((MR_Box) (PredSymName_24));
            MR_hl_field(0, Var_215, 2) = ((MR_Box) (UserArity_245));
          }
          {
            Origin_211 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Origin_211, 0) = ((MR_Box) (Var_215));
          }
          TabledMethodStr_212 = parse_tree__parse_tree_out_misc__tabled_eval_method_to_string_1_f_0(TabledMethod_18);
          {
            Var_216 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_216, 0) = ((MR_Box) ((MR_Unsigned) 33U));
            MR_hl_field(3, Var_216, 1) = ((MR_Box) (TabledMethodStr_212));
          }
          {
            DescPieces_213 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, DescPieces_213, 0) = ((MR_Box) (Var_216));
            MR_hl_field(1, DescPieces_213, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[2])));
          }
          hlds__make_hlds__add_pred__add_implicit_pred_decl_report_error_14_p_0((MR_Integer) 0, PredModuleName_25, PredName_26, PredFormArity_244, PredStatus_14, (MR_Integer) 0, Context_21, Origin_211, DescPieces_213, &PredId_214, STATE_VARIABLE_ModuleInfo_0_57, &STATE_VARIABLE_ModuleInfo_73_73, STATE_VARIABLE_Specs_0_61, &STATE_VARIABLE_Specs_74_74);
          {
            PredIds_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, PredIds_40, 0) = ((MR_Box) (PredId_214));
            MR_hl_field(1, PredIds_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        else
        {
          PredIds_40 = PredIds0_246;
          STATE_VARIABLE_ModuleInfo_73_73 = STATE_VARIABLE_ModuleInfo_0_57;
          STATE_VARIABLE_Specs_74_74 = STATE_VARIABLE_Specs_0_61;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModesOrArity_29 = ((MR_Word) ((MR_hl_field(1, PFUMM_23, (MR_Integer) 0))));
        MR_Word PredFormArity_32;
        MR_Word UserArity_33;
        MR_Word PredIds0_35;

        if (((MR_tag((MR_Word) ModesOrArity_29)) == (MR_Integer) 1))
        {
          UserArity_33 = ((MR_Word) ((MR_hl_field(1, ModesOrArity_29, (MR_Integer) 0))));
          parse_tree__prog_util__user_arity_pred_form_arity_3_p_0((MR_Integer) 1, UserArity_33, &PredFormArity_32);
        }
        else
        {
          MR_Word Modes_31 = ((MR_Word) ((MR_hl_field(0, ModesOrArity_29, (MR_Integer) 0))));

          PredFormArity_32 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_31);
          parse_tree__prog_util__user_arity_pred_form_arity_3_p_1((MR_Integer) 1, &UserArity_33, PredFormArity_32);
        }
        UserArityInt_34 = (MR_Integer) (UserArity_33);
        hlds__pred_table__predicate_table_lookup_pf_m_n_a_7_p_0(PredicateTable0_28, (MR_Integer) 0, (MR_Integer) 1, PredModuleName_25, PredName_26, PredFormArity_32, &PredIds0_35);
        if ((PredIds0_35 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Origin_36;
          MR_String TabledMethodStr_37;
          MR_Word DescPieces_38;
          MR_Word PredId_39;
          MR_Word Var_66;
          MR_Word Var_67;

          {
            Var_66 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_66, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            MR_hl_field(0, Var_66, 1) = ((MR_Box) (PredSymName_24));
            MR_hl_field(0, Var_66, 2) = ((MR_Box) (UserArity_33));
          }
          {
            Origin_36 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Origin_36, 0) = ((MR_Box) (Var_66));
          }
          TabledMethodStr_37 = parse_tree__parse_tree_out_misc__tabled_eval_method_to_string_1_f_0(TabledMethod_18);
          {
            Var_67 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_67, 0) = ((MR_Box) ((MR_Unsigned) 33U));
            MR_hl_field(3, Var_67, 1) = ((MR_Box) (TabledMethodStr_37));
          }
          {
            DescPieces_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, DescPieces_38, 0) = ((MR_Box) (Var_67));
            MR_hl_field(1, DescPieces_38, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[2])));
          }
          hlds__make_hlds__add_pred__add_implicit_pred_decl_report_error_14_p_0((MR_Integer) 1, PredModuleName_25, PredName_26, PredFormArity_32, PredStatus_14, (MR_Integer) 0, Context_21, Origin_36, DescPieces_38, &PredId_39, STATE_VARIABLE_ModuleInfo_0_57, &STATE_VARIABLE_ModuleInfo_73_73, STATE_VARIABLE_Specs_0_61, &STATE_VARIABLE_Specs_74_74);
          {
            PredIds_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, PredIds_40, 0) = ((MR_Box) (PredId_39));
            MR_hl_field(1, PredIds_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        else
        {
          PredIds_40 = PredIds0_35;
          STATE_VARIABLE_ModuleInfo_73_73 = STATE_VARIABLE_ModuleInfo_0_57;
          STATE_VARIABLE_Specs_74_74 = STATE_VARIABLE_Specs_0_61;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word STATE_VARIABLE_Specs_76_76;
        MR_Word UserArity_181 = ((MR_Word) ((MR_hl_field(2, PFUMM_23, (MR_Integer) 0))));
        MR_Word PredIds0_182;
        MR_String TabledMethodStr_184;

        TabledMethodStr_184 = parse_tree__parse_tree_out_misc__tabled_eval_method_to_string_1_f_0(TabledMethod_18);
        hlds__make_hlds_error__maybe_warn_about_pfumm_unknown_7_p_0(STATE_VARIABLE_ModuleInfo_0_57, TabledMethodStr_184, PFUMM_23, PredSymName_24, Context_21, STATE_VARIABLE_Specs_0_61, &STATE_VARIABLE_Specs_76_76);
        UserArityInt_34 = (MR_Integer) (UserArity_181);
        hlds__pred_table__predicate_table_lookup_m_n_a_6_p_0(PredicateTable0_28, (MR_Integer) 0, PredModuleName_25, PredName_26, UserArity_181, &PredIds0_182);
        if ((PredIds0_182 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_78;
          MR_Word Var_80;
          MR_Word PredFormArity_172;
          MR_Word Origin_173;
          MR_Word DescPieces_174;
          MR_Word PredId_175;

          {
            Var_78 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_78, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(0, Var_78, 1) = ((MR_Box) (PredSymName_24));
            MR_hl_field(0, Var_78, 2) = ((MR_Box) (UserArity_181));
          }
          {
            Origin_173 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Origin_173, 0) = ((MR_Box) (Var_78));
          }
          {
            Var_80 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_80, 0) = ((MR_Box) ((MR_Unsigned) 33U));
            MR_hl_field(3, Var_80, 1) = ((MR_Box) (TabledMethodStr_184));
          }
          {
            DescPieces_174 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, DescPieces_174, 0) = ((MR_Box) (Var_80));
            MR_hl_field(1, DescPieces_174, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[2])));
          }
          parse_tree__prog_util__user_arity_pred_form_arity_3_p_0((MR_Integer) 0, UserArity_181, &PredFormArity_172);
          hlds__make_hlds__add_pred__add_implicit_pred_decl_report_error_14_p_0((MR_Integer) 0, PredModuleName_25, PredName_26, PredFormArity_172, PredStatus_14, (MR_Integer) 0, Context_21, Origin_173, DescPieces_174, &PredId_175, STATE_VARIABLE_ModuleInfo_0_57, &STATE_VARIABLE_ModuleInfo_73_73, STATE_VARIABLE_Specs_76_76, &STATE_VARIABLE_Specs_74_74);
          {
            PredIds_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, PredIds_40, 0) = ((MR_Box) (PredId_175));
            MR_hl_field(1, PredIds_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        else
        {
          PredIds_40 = PredIds0_182;
          STATE_VARIABLE_ModuleInfo_73_73 = STATE_VARIABLE_ModuleInfo_0_57;
          STATE_VARIABLE_Specs_74_74 = STATE_VARIABLE_Specs_76_76;
        }
      }
      break;
  }
  if ((MaybeAttributes_20 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_Specs_167_167 = STATE_VARIABLE_Specs_74_74;
  else
  {
    MR_Word Attributes_45 = ((MR_Word) ((MR_hl_field(1, MaybeAttributes_20, (MR_Integer) 0))));
    MR_Word Statistics_46 = ((((MR_Unsigned) ((MR_hl_field(0, Attributes_45, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
    MR_Word AllowReset_47 = ((((MR_Unsigned) ((MR_hl_field(0, Attributes_45, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
    MR_Word Var_263 = ((MR_Word) ((MR_hl_field(1, PredIds_40, (MR_Integer) 1))));

    if ((Var_263 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Specs_167_167 = STATE_VARIABLE_Specs_74_74;
    else
    {
      MR_Word SNA_52;
      MR_Word STATE_VARIABLE_Specs_131_131;

      {
        SNA_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, SNA_52, 0) = ((MR_Box) (PredSymName_24));
        MR_hl_field(0, SNA_52, 1) = ((MR_Box) (UserArityInt_34));
      }
      switch (Statistics_46) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          STATE_VARIABLE_Specs_131_131 = STATE_VARIABLE_Specs_74_74;
          break;
        case (MR_Integer) 0:
          {
            MR_Word StatsPieces_53;
            MR_Word StatsSpec_54;
            MR_Word Var_97;
            MR_Word Var_98;
            MR_Word Var_103;
            MR_Word Var_108;
            MR_Word Var_109;
            MR_Word Var_110;
            MR_Word Var_111;

            Var_98 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[6])));
            {
              Var_111 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_111, 0) = ((MR_Box) ((MR_Unsigned) 11U));
              MR_hl_field(3, Var_111, 1) = ((MR_Box) (SNA_52));
            }
            {
              Var_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_110, 0) = ((MR_Box) (Var_111));
              MR_hl_field(1, Var_110, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[10])));
            }
            Var_109 = parse_tree__error_spec__color_as_subject_1_f_0(Var_110);
            Var_108 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_109, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[17])));
            Var_103 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[8])), Var_108);
            Var_97 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_98, Var_103);
            StatsPieces_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[4])), Var_97);
            {
              StatsSpec_54 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, StatsSpec_54, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_tabling.module_add_pragma_tabled\'/10"));
              MR_hl_field(0, StatsSpec_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, StatsSpec_54, 2) = ((MR_Box) ((MR_Unsigned) 44U));
              MR_hl_field(0, StatsSpec_54, 3) = ((MR_Box) (Context_21));
              MR_hl_field(0, StatsSpec_54, 4) = ((MR_Box) (StatsPieces_53));
            }
            {
              STATE_VARIABLE_Specs_131_131 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_Specs_131_131, 0) = ((MR_Box) (StatsSpec_54));
              MR_hl_field(1, STATE_VARIABLE_Specs_131_131, 1) = ((MR_Box) (STATE_VARIABLE_Specs_74_74));
            }
          }
          break;
      }
      switch (AllowReset_47) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ResetPieces_55;
            MR_Word ResetSpec_56;
            MR_Word Var_136;
            MR_Word Var_137;
            MR_Word Var_142;
            MR_Word Var_147;
            MR_Word Var_148;
            MR_Word Var_149;
            MR_Word Var_150;

            Var_137 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[19])));
            {
              Var_150 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_150, 0) = ((MR_Box) ((MR_Unsigned) 11U));
              MR_hl_field(3, Var_150, 1) = ((MR_Box) (SNA_52));
            }
            {
              Var_149 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_149, 0) = ((MR_Box) (Var_150));
              MR_hl_field(1, Var_149, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[10])));
            }
            Var_148 = parse_tree__error_spec__color_as_subject_1_f_0(Var_149);
            Var_147 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_148, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[21])));
            Var_142 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[8])), Var_147);
            Var_136 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_137, Var_142);
            ResetPieces_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_tabling_scalar_common_1[4])), Var_136);
            {
              ResetSpec_56 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ResetSpec_56, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_tabling.module_add_pragma_tabled\'/10"));
              MR_hl_field(0, ResetSpec_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, ResetSpec_56, 2) = ((MR_Box) ((MR_Unsigned) 44U));
              MR_hl_field(0, ResetSpec_56, 3) = ((MR_Box) (Context_21));
              MR_hl_field(0, ResetSpec_56, 4) = ((MR_Box) (ResetPieces_55));
            }
            {
              STATE_VARIABLE_Specs_167_167 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_Specs_167_167, 0) = ((MR_Box) (ResetSpec_56));
              MR_hl_field(1, STATE_VARIABLE_Specs_167_167, 1) = ((MR_Box) (STATE_VARIABLE_Specs_131_131));
            }
          }
          break;
        case (MR_Integer) 1:
          STATE_VARIABLE_Specs_167_167 = STATE_VARIABLE_Specs_131_131;
          break;
      }
    }
  }
  {
    Var_168 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_168, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_tabling_scalar_common_3[0]));
    MR_hl_field(0, Var_168, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_tabling__module_add_pragma_tabled_10_p_0_1));
    MR_hl_field(0, Var_168, 2) = ((MR_Box) ((MR_Integer) 9));
    MR_hl_field(0, Var_168, 3) = ((MR_Box) (ProgressStream_11));
    MR_hl_field(0, Var_168, 4) = ((MR_Box) (TabledMethod_18));
    MR_hl_field(0, Var_168, 5) = ((MR_Box) (PFUMM_23));
    MR_hl_field(0, Var_168, 6) = ((MR_Box) (PredModuleName_25));
    MR_hl_field(0, Var_168, 7) = ((MR_Box) (PredName_26));
    MR_hl_field(0, Var_168, 8) = ((MR_Box) (MaybeAttributes_20));
    MR_hl_field(0, Var_168, 9) = ((MR_Box) (Context_21));
    MR_hl_field(0, Var_168, 10) = ((MR_Box) (ItemMercuryStatus_13));
    MR_hl_field(0, Var_168, 11) = ((MR_Box) (PredStatus_14));
  }
  mercury__list__foldl3_8_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0), (MR_Word) (&hlds__make_hlds__add_pragma_tabling_scalar_common_1[0]), Var_168, PredIds_40, ((MR_Box) (STATE_VARIABLE_ModuleInfo_73_73)), &conv5_STATE_VARIABLE_ModuleInfo_58, ((MR_Box) (STATE_VARIABLE_QualInfo_0_59)), &conv4_STATE_VARIABLE_QualInfo_60, ((MR_Box) (STATE_VARIABLE_Specs_167_167)), &conv3_STATE_VARIABLE_Specs_62);
  *STATE_VARIABLE_ModuleInfo_58 = ((MR_Word) (conv5_STATE_VARIABLE_ModuleInfo_58));
  *STATE_VARIABLE_QualInfo_60 = ((MR_Word) (conv4_STATE_VARIABLE_QualInfo_60));
  *STATE_VARIABLE_Specs_62 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_62));
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
