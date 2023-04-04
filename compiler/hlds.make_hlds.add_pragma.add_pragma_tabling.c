/*
** Automatically generated from `add_pragma_tabling.m'
** by the Mercury compiler,
** version rotd-2023-04-04
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
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
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
#include "parse_tree.error_spec.mih"
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
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_constr_util.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.add_clause.mih"
#include "hlds.make_hlds.add_foreign_proc.mih"
#include "hlds.make_hlds.add_pragma.mih"
#include "hlds.make_hlds.make_hlds_types.mih"
#include "hlds.make_hlds.make_hlds_warn.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "ll_backend.llds_out.llds_out_util.mih"
#include "hlds.make_hlds.add_pragma.add_pragma_type_spec.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_tabling__maybe__pti_maybe_1__plain_parse_tree__prog_data_pragma__type_ctor_info_table_attributes_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_tabling__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__IntroducedFrom__pred__table_info_c_global_var_name__689__1_2_p_0(
  MR_Word Target_10,
  MR_Word HeadVar__2_28);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__module_add_pragma_tabled_for_pred_15_p_0(
  MR_Word TabledMethod0_16,
  MR_Word PFUMM_17,
  MR_Word PredModuleName_18,
  MR_String PredName_19,
  MR_Word MaybeAttributes_20,
  MR_Word Context_21,
  MR_Word ItemMercuryStatus_22,
  MR_Word PredStatus_23,
  MR_Word PredId_24,
  MR_Word STATE_VARIABLE_ModuleInfo_0_66,
  MR_Word * STATE_VARIABLE_ModuleInfo_67,
  MR_Word STATE_VARIABLE_QualInfo_0_68,
  MR_Word * STATE_VARIABLE_QualInfo_69,
  MR_Word STATE_VARIABLE_Specs_0_70,
  MR_Word * STATE_VARIABLE_Specs_71);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__set_eval_method_create_aux_preds_list_19_p_0(
  MR_Word PredOrFunc_1,
  MR_Word PredModuleName_2,
  MR_String PredName_3,
  MR_Word UserArity_4,
  MR_Word HeadVar__5_5,
  MR_Word SingleProc_6,
  MR_Word Context_7,
  MR_Word TabledMethod_8,
  MR_Word MaybeAttributes_9,
  MR_Word ItemMercuryStatus_10,
  MR_Word PredStatus_11,
  MR_Word STATE_VARIABLE_ProcTable_0_12,
  MR_Word * STATE_VARIABLE_ProcTable_13,
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15,
  MR_Word STATE_VARIABLE_QualInfo_0_16,
  MR_Word * STATE_VARIABLE_QualInfo_17,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__set_eval_method_create_aux_preds_20_p_0(
  MR_Word PredOrFunc_21,
  MR_Word PredModuleName_22,
  MR_String PredName_23,
  MR_Word UserArity_24,
  MR_Integer ProcId_25,
  MR_Word ProcInfo0_26,
  MR_Word SingleProc_27,
  MR_Word Context_28,
  MR_Word TabledMethod_29,
  MR_Word MaybeAttributes_30,
  MR_Word ItemMercuryStatus_31,
  MR_Word PredStatus_32,
  MR_Word STATE_VARIABLE_ProcTable_0_61,
  MR_Word * STATE_VARIABLE_ProcTable_62,
  MR_Word STATE_VARIABLE_ModuleInfo_0_63,
  MR_Word * STATE_VARIABLE_ModuleInfo_64,
  MR_Word STATE_VARIABLE_QualInfo_0_65,
  MR_Word * STATE_VARIABLE_QualInfo_66,
  MR_Word STATE_VARIABLE_Specs_0_67,
  MR_Word * STATE_VARIABLE_Specs_68);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__check_pred_args_against_tabling_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Integer ArgNum_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__check_pred_args_against_tabling_methods_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Integer ArgNum_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__create_tabling_reset_pred_18_p_0(
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
  MR_Word STATE_VARIABLE_ProcTable_0_65,
  MR_Word * STATE_VARIABLE_ProcTable_66,
  MR_Word STATE_VARIABLE_ModuleInfo_0_67,
  MR_Word * STATE_VARIABLE_ModuleInfo_68,
  MR_Word STATE_VARIABLE_QualInfo_0_69,
  MR_Word * STATE_VARIABLE_QualInfo_70,
  MR_Word STATE_VARIABLE_Specs_0_71,
  MR_Word * STATE_VARIABLE_Specs_72);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__create_tabling_statistics_pred_18_p_0(
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
  MR_Word STATE_VARIABLE_ProcTable_0_76,
  MR_Word * STATE_VARIABLE_ProcTable_77,
  MR_Word STATE_VARIABLE_ModuleInfo_0_78,
  MR_Word * STATE_VARIABLE_ModuleInfo_79,
  MR_Word STATE_VARIABLE_QualInfo_0_80,
  MR_Word * STATE_VARIABLE_QualInfo_81,
  MR_Word STATE_VARIABLE_Specs_0_82,
  MR_Word * STATE_VARIABLE_Specs_83);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__table_info_c_global_var_name_3_f_0_1(
  MR_Box closure_arg);

static MR_String MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__table_info_c_global_var_name_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word PFSymNameArity_6,
  MR_Integer ProcId_7);

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


static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[70][2];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_2[4][1];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_3[1][18];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_4[1][5];




static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[70][2] = {
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
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[1]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: cannot request statistics"))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "for the ambiguous name"))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "would have an ambiguous name too."))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[5])))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "since the compiler-generated statistics predicate"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[7])))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[9])))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: cannot request allow_reset"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "since the compiler-generated reset predicate"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[7])))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[14])))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Warning: "))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "has a"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "option to suppress this warning."))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[5])))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--no-warn-table-with-inline"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[19])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "You can use the"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[21])))
  },
  /* row  24 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[23])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "since tabled predicates cannot be inlined."))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[24])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "This inline pragma will be ignored"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[26])))
  },
  /* row  29 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[28])))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[29])))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_String) "inline"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[31])))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration but also has a"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[33])))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: "))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration for imported"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[5])))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "with no declared modes."))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[5])))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration for undeclared mode of"))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "which has no declared modes."))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[5])))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[46])))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error in"))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "has duplicate"))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "pragmas specified."))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[5])))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "has both"))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Only one kind of tabling pragma may be applied to it."))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[5])))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[56])))
  },
  /* row  58 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "too many argument tabling methods specified."))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[5])))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "not enough argument tabling methods specified."))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[5])))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "argument tabling method"))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is not compatible with input modes."))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[5])))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is not compatible with output modes."))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[5])))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is neither input or output."))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[5])))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_2[4][1] = {
  /* row   0 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   1 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_3[1][18] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 15)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tabled_eval_method_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pred_func_or_unknown_maybe_modes_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_tabling__maybe__pti_maybe_1__plain_parse_tree__prog_data_pragma__type_ctor_info_table_attributes_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_pred_status_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_tabling__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_tabling__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_4[1][5] = {
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



static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_tabling__maybe__pti_maybe_1__plain_parse_tree__prog_data_pragma__type_ctor_info_table_attributes_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_table_attributes_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_tabling__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0)
  }
};

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__IntroducedFrom__pred__table_info_c_global_var_name__689__1_2_p_0(
  MR_Word Target_10,
  MR_Word HeadVar__2_28)
{
  MR_bool succeeded = (Target_10 == HeadVar__2_28);

  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__module_add_pragma_tabled_for_pred_15_p_0(
  MR_Word TabledMethod0_16,
  MR_Word PFUMM_17,
  MR_Word PredModuleName_18,
  MR_String PredName_19,
  MR_Word MaybeAttributes_20,
  MR_Word Context_21,
  MR_Word ItemMercuryStatus_22,
  MR_Word PredStatus_23,
  MR_Word PredId_24,
  MR_Word STATE_VARIABLE_ModuleInfo_0_66,
  MR_Word * STATE_VARIABLE_ModuleInfo_67,
  MR_Word STATE_VARIABLE_QualInfo_0_68,
  MR_Word * STATE_VARIABLE_QualInfo_69,
  MR_Word STATE_VARIABLE_Specs_0_70,
  MR_Word * STATE_VARIABLE_Specs_71)
{
  MR_bool succeeded;
  MR_Word Globals_28;
  MR_Word TabledMethod_31;
  MR_Word PredInfo0_32;
  MR_Word MaybePredOrFunc_33;
  MR_Word UserArity_34;
  MR_Word MaybeModes_35;
  MR_Word PredOrFunc_36;
  MR_Word PredSymName_37;
  MR_Word PredFormArity_38;
  MR_Word PFSymNameArity_39;
  MR_String TabledMethodStr_40;
  MR_Word VeryVerbose_41;
  MR_Word Markers_45;
  MR_Word STATE_VARIABLE_Specs_130_130;
  MR_Word WarnTableWithInline_46;
  MR_Word Var_86;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_66, &Globals_28);
  succeeded = ((MR_tag((MR_Word) TabledMethod0_16)) == (MR_Integer) 3);
  if (succeeded)
  {
    MR_Word OwnStacks_30;

    libs__globals__lookup_bool_option_3_p_0(Globals_28, (MR_Integer) 269, &OwnStacks_30);
    switch (OwnStacks_30) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        TabledMethod_31 = (MR_Word) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_2[0]));
        break;
      case (MR_Integer) 1:
        TabledMethod_31 = (MR_Word) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_2[1]));
        break;
    }
  }
  else
    TabledMethod_31 = TabledMethod0_16;
  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_66, PredId_24, &PredInfo0_32);
  parse_tree__prog_item__pfumm_to_maybe_pf_arity_maybe_modes_4_p_0(PFUMM_17, &MaybePredOrFunc_33, &UserArity_34, &MaybeModes_35);
  if ((MaybePredOrFunc_33 == (MR_Word) ((MR_Unsigned) 0U)))
    PredOrFunc_36 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo0_32);
  else
    PredOrFunc_36 = ((MR_Word) ((MR_hl_field(1, MaybePredOrFunc_33, (MR_Integer) 0))));
  {
    PredSymName_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, PredSymName_37, 0) = ((MR_Box) (PredModuleName_18));
    MR_hl_field(1, PredSymName_37, 1) = ((MR_Box) (PredName_19));
  }
  parse_tree__prog_util__user_arity_pred_form_arity_3_p_0(PredOrFunc_36, UserArity_34, &PredFormArity_38);
  {
    PFSymNameArity_39 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PFSymNameArity_39, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_36));
    MR_hl_field(0, PFSymNameArity_39, 1) = ((MR_Box) (PredSymName_37));
    MR_hl_field(0, PFSymNameArity_39, 2) = ((MR_Box) (UserArity_34));
  }
  TabledMethodStr_40 = parse_tree__prog_out__tabled_eval_method_to_string_1_f_0(TabledMethod_31);
  libs__globals__lookup_bool_option_3_p_0(Globals_28, (MR_Integer) 73, &VeryVerbose_41);
  switch (VeryVerbose_41) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String IdStr_43;
        MR_Word ProgressStream_44;

        IdStr_43 = parse_tree__prog_out__pf_sym_name_pred_form_arity_to_string_3_f_0(PredOrFunc_36, PredSymName_37, PredFormArity_38);
        hlds__passes_aux__get_progress_output_stream_4_p_0(STATE_VARIABLE_ModuleInfo_0_66, &ProgressStream_44);
        mercury__io__write_string_4_p_0(ProgressStream_44, (MR_String) "% Processing \140:- pragma ");
        mercury__io__write_string_4_p_0(ProgressStream_44, TabledMethodStr_40);
        mercury__io__write_string_4_p_0(ProgressStream_44, (MR_String) "\' for ");
        mercury__io__write_string_4_p_0(ProgressStream_44, IdStr_43);
        mercury__io__write_string_4_p_0(ProgressStream_44, (MR_String) "...\n");
      }
      break;
  }
  hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo0_32, &Markers_45);
  succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_45, (MR_Integer) 6);
  if (succeeded)
  {
    Var_86 = (MR_Integer) 44;
    libs__globals__lookup_bool_option_3_p_0(Globals_28, Var_86, &WarnTableWithInline_46);
    succeeded = (WarnTableWithInline_46 == (MR_Integer) 1);
  }
  if (succeeded)
  {
    MR_Word InlineWarningPieces_47;
    MR_Word InlineWarningSpec_48;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_94;
    MR_Word Var_95;

    {
      Var_90 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_90, 0) = ((MR_Box) ((MR_Unsigned) 15U));
      MR_hl_field(3, Var_90, 1) = ((MR_Box) (PFSymNameArity_39));
    }
    {
      Var_95 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_95, 0) = ((MR_Box) ((MR_Unsigned) 32U));
      MR_hl_field(3, Var_95, 1) = ((MR_Box) (TabledMethodStr_40));
    }
    {
      Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_94, 0) = ((MR_Box) (Var_95));
      MR_hl_field(1, Var_94, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[35])));
    }
    {
      Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_91, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[17])));
      MR_hl_field(1, Var_91, 1) = ((MR_Box) (Var_94));
    }
    {
      Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_89, 0) = ((MR_Box) (Var_90));
      MR_hl_field(1, Var_89, 1) = ((MR_Box) (Var_91));
    }
    {
      InlineWarningPieces_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, InlineWarningPieces_47, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[16])));
      MR_hl_field(1, InlineWarningPieces_47, 1) = ((MR_Box) (Var_89));
    }
    {
      InlineWarningSpec_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, InlineWarningSpec_48, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_pragma_tabling.module_add_pragma_tabled_for_pred\'/15"));
      MR_hl_field(1, InlineWarningSpec_48, 1) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(1, InlineWarningSpec_48, 2) = ((MR_Box) ((MR_Unsigned) 40U));
      MR_hl_field(1, InlineWarningSpec_48, 3) = ((MR_Box) (Context_21));
      MR_hl_field(1, InlineWarningSpec_48, 4) = ((MR_Box) (InlineWarningPieces_47));
    }
    {
      STATE_VARIABLE_Specs_130_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Specs_130_130, 0) = ((MR_Box) (InlineWarningSpec_48));
      MR_hl_field(1, STATE_VARIABLE_Specs_130_130, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_70));
    }
  }
  else
    STATE_VARIABLE_Specs_130_130 = STATE_VARIABLE_Specs_0_70;
  succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo0_32);
  if (succeeded)
  {
    MR_Word Pieces_49;
    MR_Word Spec_50;
    MR_Word Var_133;
    MR_Word Var_134;
    MR_Word Var_135;
    MR_Word Var_138;
    MR_Word Var_139;

    {
      Var_134 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_134, 0) = ((MR_Box) ((MR_Unsigned) 32U));
      MR_hl_field(3, Var_134, 1) = ((MR_Box) (TabledMethodStr_40));
    }
    {
      Var_139 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_139, 0) = ((MR_Box) ((MR_Unsigned) 15U));
      MR_hl_field(3, Var_139, 1) = ((MR_Box) (PFSymNameArity_39));
    }
    {
      Var_138 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_138, 0) = ((MR_Box) (Var_139));
      MR_hl_field(1, Var_138, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[39])));
    }
    {
      Var_135 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_135, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[37])));
      MR_hl_field(1, Var_135, 1) = ((MR_Box) (Var_138));
    }
    {
      Var_133 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_133, 0) = ((MR_Box) (Var_134));
      MR_hl_field(1, Var_133, 1) = ((MR_Box) (Var_135));
    }
    {
      Pieces_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_49, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[36])));
      MR_hl_field(1, Pieces_49, 1) = ((MR_Box) (Var_133));
    }
    {
      Spec_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_50, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_pragma_tabling.module_add_pragma_tabled_for_pred\'/15"));
      MR_hl_field(1, Spec_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_50, 2) = ((MR_Box) ((MR_Unsigned) 40U));
      MR_hl_field(1, Spec_50, 3) = ((MR_Box) (Context_21));
      MR_hl_field(1, Spec_50, 4) = ((MR_Box) (Pieces_49));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_71 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_50));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_130_130));
    }
    *STATE_VARIABLE_QualInfo_69 = STATE_VARIABLE_QualInfo_0_68;
    *STATE_VARIABLE_ModuleInfo_67 = STATE_VARIABLE_ModuleInfo_0_66;
  }
  else
  {
    MR_Word NeedsStrat_51;
    MR_Word ProcTable0_54;
    MR_Word STATE_VARIABLE_ModuleInfo_150_150;

    NeedsStrat_51 = hlds__hlds_pred__tabled_eval_method_needs_stratification_1_f_0(TabledMethod_31);
    switch (NeedsStrat_51) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_ModuleInfo_150_150 = STATE_VARIABLE_ModuleInfo_0_66;
        break;
      case (MR_Integer) 1:
        {
          MR_Word StratPredIds0_52;
          MR_Word StratPredIds_53;

          hlds__hlds_module__module_info_get_must_be_stratified_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_66, &StratPredIds0_52);
          mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_24)), StratPredIds0_52, &StratPredIds_53);
          hlds__hlds_module__module_info_set_must_be_stratified_preds_3_p_0(StratPredIds_53, STATE_VARIABLE_ModuleInfo_0_66, &STATE_VARIABLE_ModuleInfo_150_150);
        }
        break;
    }
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_32, &ProcTable0_54);
    if ((MaybeModes_35 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ExistingProcs_60;

      mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_54, &ExistingProcs_60);
      if ((ExistingProcs_60 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_177;
        MR_Word Var_178;
        MR_Word Var_179;
        MR_Word Var_182;
        MR_Word Var_183;
        MR_Word Pieces_204;
        MR_Word Spec_205;

        {
          Var_178 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_178, 0) = ((MR_Box) ((MR_Unsigned) 32U));
          MR_hl_field(3, Var_178, 1) = ((MR_Box) (TabledMethodStr_40));
        }
        {
          Var_183 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_183, 0) = ((MR_Box) ((MR_Unsigned) 15U));
          MR_hl_field(3, Var_183, 1) = ((MR_Box) (PFSymNameArity_39));
        }
        {
          Var_182 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_182, 0) = ((MR_Box) (Var_183));
          MR_hl_field(1, Var_182, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[42])));
        }
        {
          Var_179 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_179, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[40])));
          MR_hl_field(1, Var_179, 1) = ((MR_Box) (Var_182));
        }
        {
          Var_177 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_177, 0) = ((MR_Box) (Var_178));
          MR_hl_field(1, Var_177, 1) = ((MR_Box) (Var_179));
        }
        {
          Pieces_204 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_204, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[36])));
          MR_hl_field(1, Pieces_204, 1) = ((MR_Box) (Var_177));
        }
        {
          Spec_205 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_205, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_pragma_tabling.module_add_pragma_tabled_for_pred\'/15"));
          MR_hl_field(1, Spec_205, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_205, 2) = ((MR_Box) ((MR_Unsigned) 40U));
          MR_hl_field(1, Spec_205, 3) = ((MR_Box) (Context_21));
          MR_hl_field(1, Spec_205, 4) = ((MR_Box) (Pieces_204));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_71 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_205));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_130_130));
        }
        *STATE_VARIABLE_ModuleInfo_67 = STATE_VARIABLE_ModuleInfo_150_150;
        *STATE_VARIABLE_QualInfo_69 = STATE_VARIABLE_QualInfo_0_68;
      }
      else
      {
        MR_Word Var_61 = ((MR_Word) ((MR_hl_field(1, ExistingProcs_60, (MR_Integer) 0))));
        MR_Word SingleProc_63;
        MR_Word STATE_VARIABLE_ModuleInfo_194_194;
        MR_Word ProcTable_206;
        MR_Word PredInfo_207;
        MR_Integer ProcId_240;
        MR_Word ProcInfo0_241;
        MR_Word ProcIdsInfos_242 = ((MR_Word) ((MR_hl_field(1, ExistingProcs_60, (MR_Integer) 1))));
        MR_Word STATE_VARIABLE_ProcTable_68_258;
        MR_Word STATE_VARIABLE_ModuleInfo_69_259;
        MR_Word STATE_VARIABLE_QualInfo_70_260;
        MR_Word STATE_VARIABLE_Specs_71_261;

        if ((ProcIdsInfos_242 == (MR_Word) ((MR_Unsigned) 0U)))
          SingleProc_63 = (MR_Integer) 1;
        else
          SingleProc_63 = (MR_Integer) 0;
        ProcId_240 = ((MR_Integer) ((MR_hl_field(0, Var_61, (MR_Integer) 0))));
        ProcInfo0_241 = ((MR_Word) ((MR_hl_field(0, Var_61, (MR_Integer) 1))));
        hlds__make_hlds__add_pragma__add_pragma_tabling__set_eval_method_create_aux_preds_20_p_0(PredOrFunc_36, PredModuleName_18, PredName_19, UserArity_34, ProcId_240, ProcInfo0_241, SingleProc_63, Context_21, TabledMethod_31, MaybeAttributes_20, ItemMercuryStatus_22, PredStatus_23, ProcTable0_54, &STATE_VARIABLE_ProcTable_68_258, STATE_VARIABLE_ModuleInfo_150_150, &STATE_VARIABLE_ModuleInfo_69_259, STATE_VARIABLE_QualInfo_0_68, &STATE_VARIABLE_QualInfo_70_260, STATE_VARIABLE_Specs_130_130, &STATE_VARIABLE_Specs_71_261);
        hlds__make_hlds__add_pragma__add_pragma_tabling__set_eval_method_create_aux_preds_list_19_p_0(PredOrFunc_36, PredModuleName_18, PredName_19, UserArity_34, ProcIdsInfos_242, SingleProc_63, Context_21, TabledMethod_31, MaybeAttributes_20, ItemMercuryStatus_22, PredStatus_23, STATE_VARIABLE_ProcTable_68_258, &ProcTable_206, STATE_VARIABLE_ModuleInfo_69_259, &STATE_VARIABLE_ModuleInfo_194_194, STATE_VARIABLE_QualInfo_70_260, STATE_VARIABLE_QualInfo_69, STATE_VARIABLE_Specs_71_261, STATE_VARIABLE_Specs_71);
        hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_206, PredInfo0_32, &PredInfo_207);
        hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_24, PredInfo_207, STATE_VARIABLE_ModuleInfo_194_194, STATE_VARIABLE_ModuleInfo_67);
      }
    }
    else
    {
      MR_Word Modes_55 = ((MR_Word) ((MR_hl_field(1, MaybeModes_35, (MR_Integer) 0))));
      MR_Integer ProcId_56;
      MR_Word ProcInfo0_57;

      succeeded = hlds__hlds_code_util__get_procedure_matching_argmodes_5_p_0(STATE_VARIABLE_ModuleInfo_150_150, ProcTable0_54, Modes_55, &ProcId_56, &ProcInfo0_57);
      if (succeeded)
      {
        MR_Word ProcTable_58;
        MR_Word PredInfo_59;
        MR_Word STATE_VARIABLE_ModuleInfo_152_152;

        hlds__make_hlds__add_pragma__add_pragma_tabling__set_eval_method_create_aux_preds_20_p_0(PredOrFunc_36, PredModuleName_18, PredName_19, UserArity_34, ProcId_56, ProcInfo0_57, (MR_Integer) 1, Context_21, TabledMethod_31, MaybeAttributes_20, ItemMercuryStatus_22, PredStatus_23, ProcTable0_54, &ProcTable_58, STATE_VARIABLE_ModuleInfo_150_150, &STATE_VARIABLE_ModuleInfo_152_152, STATE_VARIABLE_QualInfo_0_68, STATE_VARIABLE_QualInfo_69, STATE_VARIABLE_Specs_130_130, STATE_VARIABLE_Specs_71);
        hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_58, PredInfo0_32, &PredInfo_59);
        hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_24, PredInfo_59, STATE_VARIABLE_ModuleInfo_152_152, STATE_VARIABLE_ModuleInfo_67);
      }
      else
      {
        MR_Word Var_158;
        MR_Word Var_159;
        MR_Word Var_160;
        MR_Word Var_163;
        MR_Word Var_164;
        MR_Word Pieces_198;
        MR_Word Spec_199;

        {
          Var_159 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_159, 0) = ((MR_Box) ((MR_Unsigned) 32U));
          MR_hl_field(3, Var_159, 1) = ((MR_Box) (TabledMethodStr_40));
        }
        {
          Var_164 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_164, 0) = ((MR_Box) ((MR_Unsigned) 15U));
          MR_hl_field(3, Var_164, 1) = ((MR_Box) (PFSymNameArity_39));
        }
        {
          Var_163 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_163, 0) = ((MR_Box) (Var_164));
          MR_hl_field(1, Var_163, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[39])));
        }
        {
          Var_160 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_160, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[44])));
          MR_hl_field(1, Var_160, 1) = ((MR_Box) (Var_163));
        }
        {
          Var_158 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_158, 0) = ((MR_Box) (Var_159));
          MR_hl_field(1, Var_158, 1) = ((MR_Box) (Var_160));
        }
        {
          Pieces_198 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_198, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[43])));
          MR_hl_field(1, Pieces_198, 1) = ((MR_Box) (Var_158));
        }
        {
          Spec_199 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_199, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_pragma_tabling.module_add_pragma_tabled_for_pred\'/15"));
          MR_hl_field(1, Spec_199, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_199, 2) = ((MR_Box) ((MR_Unsigned) 40U));
          MR_hl_field(1, Spec_199, 3) = ((MR_Box) (Context_21));
          MR_hl_field(1, Spec_199, 4) = ((MR_Box) (Pieces_198));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_71 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_199));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_130_130));
        }
        *STATE_VARIABLE_QualInfo_69 = STATE_VARIABLE_QualInfo_0_68;
        *STATE_VARIABLE_ModuleInfo_67 = STATE_VARIABLE_ModuleInfo_150_150;
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__set_eval_method_create_aux_preds_list_19_p_0(
  MR_Word PredOrFunc_1,
  MR_Word PredModuleName_2,
  MR_String PredName_3,
  MR_Word UserArity_4,
  MR_Word HeadVar__5_5,
  MR_Word SingleProc_6,
  MR_Word Context_7,
  MR_Word TabledMethod_8,
  MR_Word MaybeAttributes_9,
  MR_Word ItemMercuryStatus_10,
  MR_Word PredStatus_11,
  MR_Word STATE_VARIABLE_ProcTable_0_12,
  MR_Word * STATE_VARIABLE_ProcTable_13,
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15,
  MR_Word STATE_VARIABLE_QualInfo_0_16,
  MR_Word * STATE_VARIABLE_QualInfo_17,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_0_18;
      *STATE_VARIABLE_QualInfo_17 = STATE_VARIABLE_QualInfo_0_16;
      *STATE_VARIABLE_ModuleInfo_15 = STATE_VARIABLE_ModuleInfo_0_14;
      *STATE_VARIABLE_ProcTable_13 = STATE_VARIABLE_ProcTable_0_12;
    }
    else
    {
      MR_Integer ProcId_46;
      MR_Word ProcInfo0_47;
      MR_Word ProcIdsInfos_48 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Word Var_67 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_ProcTable_68_68;
      MR_Word STATE_VARIABLE_ModuleInfo_69_69;
      MR_Word STATE_VARIABLE_QualInfo_70_70;
      MR_Word STATE_VARIABLE_Specs_71_71;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_ProcTable_0_12;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_14;
      MR_Word next_value_of_STATE_VARIABLE_QualInfo_0_16;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_18;

      ProcId_46 = ((MR_Integer) ((MR_hl_field(0, Var_67, (MR_Integer) 0))));
      ProcInfo0_47 = ((MR_Word) ((MR_hl_field(0, Var_67, (MR_Integer) 1))));
      hlds__make_hlds__add_pragma__add_pragma_tabling__set_eval_method_create_aux_preds_20_p_0(PredOrFunc_1, PredModuleName_2, PredName_3, UserArity_4, ProcId_46, ProcInfo0_47, SingleProc_6, Context_7, TabledMethod_8, MaybeAttributes_9, ItemMercuryStatus_10, PredStatus_11, STATE_VARIABLE_ProcTable_0_12, &STATE_VARIABLE_ProcTable_68_68, STATE_VARIABLE_ModuleInfo_0_14, &STATE_VARIABLE_ModuleInfo_69_69, STATE_VARIABLE_QualInfo_0_16, &STATE_VARIABLE_QualInfo_70_70, STATE_VARIABLE_Specs_0_18, &STATE_VARIABLE_Specs_71_71);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = ProcIdsInfos_48;
      next_value_of_STATE_VARIABLE_ProcTable_0_12 = STATE_VARIABLE_ProcTable_68_68;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_14 = STATE_VARIABLE_ModuleInfo_69_69;
      next_value_of_STATE_VARIABLE_QualInfo_0_16 = STATE_VARIABLE_QualInfo_70_70;
      next_value_of_STATE_VARIABLE_Specs_0_18 = STATE_VARIABLE_Specs_71_71;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_ProcTable_0_12 = next_value_of_STATE_VARIABLE_ProcTable_0_12;
      STATE_VARIABLE_ModuleInfo_0_14 = next_value_of_STATE_VARIABLE_ModuleInfo_0_14;
      STATE_VARIABLE_QualInfo_0_16 = next_value_of_STATE_VARIABLE_QualInfo_0_16;
      STATE_VARIABLE_Specs_0_18 = next_value_of_STATE_VARIABLE_Specs_0_18;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__set_eval_method_create_aux_preds_20_p_0(
  MR_Word PredOrFunc_21,
  MR_Word PredModuleName_22,
  MR_String PredName_23,
  MR_Word UserArity_24,
  MR_Integer ProcId_25,
  MR_Word ProcInfo0_26,
  MR_Word SingleProc_27,
  MR_Word Context_28,
  MR_Word TabledMethod_29,
  MR_Word MaybeAttributes_30,
  MR_Word ItemMercuryStatus_31,
  MR_Word PredStatus_32,
  MR_Word STATE_VARIABLE_ProcTable_0_61,
  MR_Word * STATE_VARIABLE_ProcTable_62,
  MR_Word STATE_VARIABLE_ModuleInfo_0_63,
  MR_Word * STATE_VARIABLE_ModuleInfo_64,
  MR_Word STATE_VARIABLE_QualInfo_0_65,
  MR_Word * STATE_VARIABLE_QualInfo_66,
  MR_Word STATE_VARIABLE_Specs_0_67,
  MR_Word * STATE_VARIABLE_Specs_68)
{
  MR_bool succeeded;
  MR_Word OldEvalMethod_37;
  MR_Word PredSymName_38;
  MR_Word PFSymNameArity_39;

  hlds__hlds_pred__proc_info_get_eval_method_2_p_0(ProcInfo0_26, &OldEvalMethod_37);
  {
    PredSymName_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, PredSymName_38, 0) = ((MR_Box) (PredModuleName_22));
    MR_hl_field(1, PredSymName_38, 1) = ((MR_Box) (PredName_23));
  }
  {
    PFSymNameArity_39 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PFSymNameArity_39, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_21));
    MR_hl_field(0, PFSymNameArity_39, 1) = ((MR_Box) (PredSymName_38));
    MR_hl_field(0, PFSymNameArity_39, 2) = ((MR_Box) (UserArity_24));
  }
  if ((OldEvalMethod_37 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word MaybeDeclaredArgModes_40;

    hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0(ProcInfo0_26, &MaybeDeclaredArgModes_40);
    if ((MaybeDeclaredArgModes_40 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String TabledMethodStr_41;
      MR_Word Pieces_42;
      MR_Word Spec_43;
      MR_Word Var_71;
      MR_Word Var_72;
      MR_Word Var_73;
      MR_Word Var_76;
      MR_Word Var_77;

      TabledMethodStr_41 = parse_tree__prog_out__tabled_eval_method_to_pragma_name_1_f_0(TabledMethod_29);
      {
        Var_72 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_72, 0) = ((MR_Box) ((MR_Unsigned) 32U));
        MR_hl_field(3, Var_72, 1) = ((MR_Box) (TabledMethodStr_41));
      }
      {
        Var_77 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_77, 0) = ((MR_Box) ((MR_Unsigned) 15U));
        MR_hl_field(3, Var_77, 1) = ((MR_Box) (PFSymNameArity_39));
      }
      {
        Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_76, 0) = ((MR_Box) (Var_77));
        MR_hl_field(1, Var_76, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[47])));
      }
      {
        Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_73, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[40])));
        MR_hl_field(1, Var_73, 1) = ((MR_Box) (Var_76));
      }
      {
        Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_71, 0) = ((MR_Box) (Var_72));
        MR_hl_field(1, Var_71, 1) = ((MR_Box) (Var_73));
      }
      {
        Pieces_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_42, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[43])));
        MR_hl_field(1, Pieces_42, 1) = ((MR_Box) (Var_71));
      }
      {
        Spec_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_43, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_pragma_tabling.set_eval_method_create_aux_preds\'/20"));
        MR_hl_field(1, Spec_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_43, 2) = ((MR_Box) ((MR_Unsigned) 40U));
        MR_hl_field(1, Spec_43, 3) = ((MR_Box) (Context_28));
        MR_hl_field(1, Spec_43, 4) = ((MR_Box) (Pieces_42));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_68 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_43));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_67));
      }
      *STATE_VARIABLE_ProcTable_62 = STATE_VARIABLE_ProcTable_0_61;
      *STATE_VARIABLE_ModuleInfo_64 = STATE_VARIABLE_ModuleInfo_0_63;
      *STATE_VARIABLE_QualInfo_66 = STATE_VARIABLE_QualInfo_0_65;
    }
    else
    {
      MR_Word DeclaredArgModes_44 = ((MR_Word) ((MR_hl_field(1, MaybeDeclaredArgModes_40, (MR_Integer) 0))));
      MR_Word Statistics_47;
      MR_Word AllowReset_48;
      MR_Word ArgErrorPieces_51;
      MR_Word EvalMethod_54;
      MR_Word ProcInfo1_55;
      MR_Word ProcInfo_56;
      MR_Word Globals_57;
      MR_Word IsTablingSupported_58;
      MR_Word STATE_VARIABLE_Specs_110_110;
      MR_Word STATE_VARIABLE_ProcTable_111_111;
      MR_Word STATE_VARIABLE_ProcTable_112_112;
      MR_Word STATE_VARIABLE_ModuleInfo_113_113;
      MR_Word STATE_VARIABLE_QualInfo_114_114;
      MR_Word STATE_VARIABLE_Specs_115_115;

      if ((MaybeAttributes_30 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        Statistics_47 = (MR_Integer) 1;
        AllowReset_48 = (MR_Integer) 1;
        hlds__make_hlds__add_pragma__add_pragma_tabling__check_pred_args_against_tabling_4_p_0(STATE_VARIABLE_ModuleInfo_0_63, (MR_Integer) 1, DeclaredArgModes_44, &ArgErrorPieces_51);
      }
      else
      {
        MR_Word Attributes_45 = ((MR_Word) ((MR_hl_field(1, MaybeAttributes_30, (MR_Integer) 0))));
        MR_Word Strictness_191 = ((MR_Word) ((MR_hl_field(0, Attributes_45, (MR_Integer) 0))));

        Statistics_47 = ((((MR_Unsigned) ((MR_hl_field(0, Attributes_45, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
        AllowReset_48 = ((((MR_Unsigned) ((MR_hl_field(0, Attributes_45, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
        switch (MR_tag((MR_Word) Strictness_191)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            hlds__make_hlds__add_pragma__add_pragma_tabling__check_pred_args_against_tabling_4_p_0(STATE_VARIABLE_ModuleInfo_0_63, (MR_Integer) 1, DeclaredArgModes_44, &ArgErrorPieces_51);
            break;
          case (MR_Integer) 1:
            {
              MR_Word MaybeArgMethods_49 = ((MR_Word) ((MR_hl_field(1, Strictness_191, (MR_Integer) 0))));

              hlds__make_hlds__add_pragma__add_pragma_tabling__check_pred_args_against_tabling_methods_5_p_0(STATE_VARIABLE_ModuleInfo_0_63, (MR_Integer) 1, DeclaredArgModes_44, MaybeArgMethods_49, &ArgErrorPieces_51);
            }
            break;
        }
      }
      if ((ArgErrorPieces_51 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_Specs_110_110 = STATE_VARIABLE_Specs_0_67;
      else
      {
        MR_Word Var_95;
        MR_Word Var_96;
        MR_Word Var_97;
        MR_Word Var_100;
        MR_Word Var_101;
        MR_Word Var_102;
        MR_Word Var_105;
        MR_String TabledMethodStr_162;
        MR_Word Pieces_163;
        MR_Word Spec_164;

        TabledMethodStr_162 = parse_tree__prog_out__tabled_eval_method_to_pragma_name_1_f_0(TabledMethod_29);
        {
          Var_96 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_96, 0) = ((MR_Box) ((MR_Unsigned) 32U));
          MR_hl_field(3, Var_96, 1) = ((MR_Box) (TabledMethodStr_162));
        }
        {
          Var_101 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_101, 0) = ((MR_Box) ((MR_Unsigned) 15U));
          MR_hl_field(3, Var_101, 1) = ((MR_Box) (PFSymNameArity_39));
        }
        {
          Var_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_105, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(1, Var_105, 1) = ((MR_Box) (ArgErrorPieces_51));
        }
        {
          Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_102, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[49])));
          MR_hl_field(1, Var_102, 1) = ((MR_Box) (Var_105));
        }
        {
          Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_100, 0) = ((MR_Box) (Var_101));
          MR_hl_field(1, Var_100, 1) = ((MR_Box) (Var_102));
        }
        {
          Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_97, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[40])));
          MR_hl_field(1, Var_97, 1) = ((MR_Box) (Var_100));
        }
        {
          Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_95, 0) = ((MR_Box) (Var_96));
          MR_hl_field(1, Var_95, 1) = ((MR_Box) (Var_97));
        }
        {
          Pieces_163 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_163, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[48])));
          MR_hl_field(1, Pieces_163, 1) = ((MR_Box) (Var_95));
        }
        {
          Spec_164 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_164, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_pragma_tabling.set_eval_method_create_aux_preds\'/20"));
          MR_hl_field(1, Spec_164, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_164, 2) = ((MR_Box) ((MR_Unsigned) 40U));
          MR_hl_field(1, Spec_164, 3) = ((MR_Box) (Context_28));
          MR_hl_field(1, Spec_164, 4) = ((MR_Box) (Pieces_163));
        }
        {
          STATE_VARIABLE_Specs_110_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_Specs_110_110, 0) = ((MR_Box) (Spec_164));
          MR_hl_field(1, STATE_VARIABLE_Specs_110_110, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_67));
        }
      }
      {
        EvalMethod_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, EvalMethod_54, 0) = ((MR_Box) (TabledMethod_29));
      }
      hlds__hlds_pred__proc_info_set_eval_method_3_p_0(EvalMethod_54, ProcInfo0_26, &ProcInfo1_55);
      hlds__hlds_pred__proc_info_set_table_attributes_3_p_0(MaybeAttributes_30, ProcInfo1_55, &ProcInfo_56);
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_25)), ((MR_Box) (ProcInfo_56)), STATE_VARIABLE_ProcTable_0_61, &STATE_VARIABLE_ProcTable_111_111);
      hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_63, &Globals_57);
      libs__globals__current_grade_supports_tabling_3_p_0(Globals_57, TabledMethod_29, &IsTablingSupported_58);
      switch (Statistics_47) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            STATE_VARIABLE_ProcTable_112_112 = STATE_VARIABLE_ProcTable_111_111;
            STATE_VARIABLE_ModuleInfo_113_113 = STATE_VARIABLE_ModuleInfo_0_63;
            STATE_VARIABLE_QualInfo_114_114 = STATE_VARIABLE_QualInfo_0_65;
            STATE_VARIABLE_Specs_115_115 = STATE_VARIABLE_Specs_110_110;
          }
          break;
        case (MR_Integer) 0:
          hlds__make_hlds__add_pragma__add_pragma_tabling__create_tabling_statistics_pred_18_p_0(PredOrFunc_21, PredModuleName_22, PredName_23, UserArity_24, ProcId_25, SingleProc_27, Context_28, IsTablingSupported_58, ItemMercuryStatus_31, PredStatus_32, STATE_VARIABLE_ProcTable_111_111, &STATE_VARIABLE_ProcTable_112_112, STATE_VARIABLE_ModuleInfo_0_63, &STATE_VARIABLE_ModuleInfo_113_113, STATE_VARIABLE_QualInfo_0_65, &STATE_VARIABLE_QualInfo_114_114, STATE_VARIABLE_Specs_110_110, &STATE_VARIABLE_Specs_115_115);
          break;
      }
      switch (AllowReset_48) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          hlds__make_hlds__add_pragma__add_pragma_tabling__create_tabling_reset_pred_18_p_0(PredOrFunc_21, PredModuleName_22, PredName_23, UserArity_24, ProcId_25, SingleProc_27, Context_28, IsTablingSupported_58, ItemMercuryStatus_31, PredStatus_32, STATE_VARIABLE_ProcTable_112_112, STATE_VARIABLE_ProcTable_62, STATE_VARIABLE_ModuleInfo_113_113, STATE_VARIABLE_ModuleInfo_64, STATE_VARIABLE_QualInfo_114_114, STATE_VARIABLE_QualInfo_66, STATE_VARIABLE_Specs_115_115, STATE_VARIABLE_Specs_68);
          break;
        case (MR_Integer) 1:
          {
            *STATE_VARIABLE_ProcTable_62 = STATE_VARIABLE_ProcTable_112_112;
            *STATE_VARIABLE_ModuleInfo_64 = STATE_VARIABLE_ModuleInfo_113_113;
            *STATE_VARIABLE_QualInfo_66 = STATE_VARIABLE_QualInfo_114_114;
            *STATE_VARIABLE_Specs_68 = STATE_VARIABLE_Specs_115_115;
          }
          break;
      }
    }
  }
  else
  {
    MR_Word OldTabledMethod_59 = ((MR_Word) ((MR_hl_field(1, OldEvalMethod_37, (MR_Integer) 0))));
    MR_String TabledMethodStr_171;
    MR_Word Pieces_172;
    MR_Word Spec_173;

    TabledMethodStr_171 = parse_tree__prog_out__tabled_eval_method_to_pragma_name_1_f_0(TabledMethod_29);
    succeeded = parse_tree__prog_data_pragma____Unify____tabled_eval_method_0_0(OldTabledMethod_59, TabledMethod_29);
    if (succeeded)
    {
      MR_Word Var_122;
      MR_Word Var_123;
      MR_Word Var_124;
      MR_Word Var_127;
      MR_Word Var_128;

      {
        Var_123 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_123, 0) = ((MR_Box) ((MR_Unsigned) 15U));
        MR_hl_field(3, Var_123, 1) = ((MR_Box) (PFSymNameArity_39));
      }
      {
        Var_128 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_128, 0) = ((MR_Box) (TabledMethodStr_171));
      }
      {
        Var_127 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_127, 0) = ((MR_Box) (Var_128));
        MR_hl_field(1, Var_127, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[52])));
      }
      {
        Var_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_124, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[50])));
        MR_hl_field(1, Var_124, 1) = ((MR_Box) (Var_127));
      }
      {
        Var_122 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_122, 0) = ((MR_Box) (Var_123));
        MR_hl_field(1, Var_122, 1) = ((MR_Box) (Var_124));
      }
      {
        Pieces_172 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_172, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[43])));
        MR_hl_field(1, Pieces_172, 1) = ((MR_Box) (Var_122));
      }
    }
    else
    {
      MR_String OldTabledMethodStr_60;
      MR_Word Var_137;
      MR_Word Var_138;
      MR_Word Var_139;
      MR_Word Var_142;
      MR_Word Var_143;
      MR_Word Var_144;
      MR_Word Var_147;
      MR_Word Var_148;

      OldTabledMethodStr_60 = parse_tree__prog_out__tabled_eval_method_to_pragma_name_1_f_0(OldTabledMethod_59);
      {
        Var_138 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_138, 0) = ((MR_Box) ((MR_Unsigned) 15U));
        MR_hl_field(3, Var_138, 1) = ((MR_Box) (PFSymNameArity_39));
      }
      {
        Var_143 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_143, 0) = ((MR_Box) (OldTabledMethodStr_60));
      }
      {
        Var_148 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_148, 0) = ((MR_Box) (TabledMethodStr_171));
      }
      {
        Var_147 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_147, 0) = ((MR_Box) (Var_148));
        MR_hl_field(1, Var_147, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[57])));
      }
      {
        Var_144 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_144, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[54])));
        MR_hl_field(1, Var_144, 1) = ((MR_Box) (Var_147));
      }
      {
        Var_142 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_142, 0) = ((MR_Box) (Var_143));
        MR_hl_field(1, Var_142, 1) = ((MR_Box) (Var_144));
      }
      {
        Var_139 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_139, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[53])));
        MR_hl_field(1, Var_139, 1) = ((MR_Box) (Var_142));
      }
      {
        Var_137 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_137, 0) = ((MR_Box) (Var_138));
        MR_hl_field(1, Var_137, 1) = ((MR_Box) (Var_139));
      }
      {
        Pieces_172 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_172, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[43])));
        MR_hl_field(1, Pieces_172, 1) = ((MR_Box) (Var_137));
      }
    }
    {
      Spec_173 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_173, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_pragma_tabling.set_eval_method_create_aux_preds\'/20"));
      MR_hl_field(1, Spec_173, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_173, 2) = ((MR_Box) ((MR_Unsigned) 40U));
      MR_hl_field(1, Spec_173, 3) = ((MR_Box) (Context_28));
      MR_hl_field(1, Spec_173, 4) = ((MR_Box) (Pieces_172));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_68 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_173));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_67));
    }
    *STATE_VARIABLE_ProcTable_62 = STATE_VARIABLE_ProcTable_0_61;
    *STATE_VARIABLE_ModuleInfo_64 = STATE_VARIABLE_ModuleInfo_0_63;
    *STATE_VARIABLE_QualInfo_66 = STATE_VARIABLE_QualInfo_0_65;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__check_pred_args_against_tabling_4_p_0(
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
            MR_hl_field(1, base, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[69])));
          }
        }
      }
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__check_pred_args_against_tabling_methods_5_p_0(
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
        *HeadVar__5_5 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[60]));
    else
    {
      MR_Word Var_89 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Var_90 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__5_5 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[62]));
      else
      {
        MR_Word MaybeArgMethod_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
        MR_Word MaybeArgMethods_33 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));

        succeeded = check_hlds__mode_test__mode_is_fully_input_2_p_0(ModuleInfo_1, Var_90);
        if (succeeded)
          if ((MaybeArgMethod_32 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Var_39;
            MR_String Var_40;
            MR_String Var_42;
            MR_Word Var_43;
            MR_Word Var_46;
            MR_Word Var_49;
            MR_Word Var_50;
            MR_String Var_51;

            Var_42 = mercury__string__int_to_string_1_f_0(ArgNum_2);
            Var_40 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", Var_42);
            {
              Var_39 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_39, 0) = ((MR_Box) (Var_40));
            }
            Var_51 = parse_tree__prog_out__maybe_arg_tabling_method_to_string_1_f_0(MaybeArgMethod_32);
            {
              Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_50, 1) = ((MR_Box) (Var_51));
            }
            {
              Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_49, 0) = ((MR_Box) (Var_50));
              MR_hl_field(1, Var_49, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[65])));
            }
            {
              Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_46, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[63])));
              MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_49));
            }
            {
              Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_43, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[49])));
              MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_46));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__5_5 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_39));
              MR_hl_field(1, base, 1) = ((MR_Box) (Var_43));
            }
          }
          else
          {
            MR_Integer Var_37 = (MR_Integer) ((MR_Unsigned) ArgNum_2 + (MR_Unsigned) 1);
            MR_Integer next_value_of_ArgNum_2 = Var_37;
            MR_Word next_value_of_HeadVar__3_3 = Var_89;
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
          succeeded = check_hlds__mode_test__mode_is_fully_output_2_p_0(ModuleInfo_1, Var_90);
          if (succeeded)
            if ((MaybeArgMethod_32 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Integer Var_77 = (MR_Integer) ((MR_Unsigned) ArgNum_2 + (MR_Unsigned) 1);
              MR_Integer next_value_of_ArgNum_2 = Var_77;
              MR_Word next_value_of_HeadVar__3_3 = Var_89;
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
              MR_Word Var_58;
              MR_String Var_59;
              MR_String Var_61;
              MR_Word Var_62;
              MR_Word Var_65;
              MR_Word Var_68;
              MR_Word Var_69;
              MR_String Var_70;

              Var_61 = mercury__string__int_to_string_1_f_0(ArgNum_2);
              Var_59 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", Var_61);
              {
                Var_58 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Var_58, 0) = ((MR_Box) (Var_59));
              }
              Var_70 = parse_tree__prog_out__maybe_arg_tabling_method_to_string_1_f_0(MaybeArgMethod_32);
              {
                Var_69 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_69, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_69, 1) = ((MR_Box) (Var_70));
              }
              {
                Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_68, 0) = ((MR_Box) (Var_69));
                MR_hl_field(1, Var_68, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[67])));
              }
              {
                Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_65, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[63])));
                MR_hl_field(1, Var_65, 1) = ((MR_Box) (Var_68));
              }
              {
                Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_62, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[49])));
                MR_hl_field(1, Var_62, 1) = ((MR_Box) (Var_65));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__5_5 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_58));
                MR_hl_field(1, base, 1) = ((MR_Box) (Var_62));
              }
            }
          else
          {
            MR_Word Var_79;
            MR_String Var_80;
            MR_String Var_82;

            Var_82 = mercury__string__int_to_string_1_f_0(ArgNum_2);
            Var_80 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", Var_82);
            {
              Var_79 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_79, 0) = ((MR_Box) (Var_80));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__5_5 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_79));
              MR_hl_field(1, base, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[69])));
            }
          }
        }
      }
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__create_tabling_reset_pred_18_p_0(
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
  MR_Word STATE_VARIABLE_ProcTable_0_65,
  MR_Word * STATE_VARIABLE_ProcTable_66,
  MR_Word STATE_VARIABLE_ModuleInfo_0_67,
  MR_Word * STATE_VARIABLE_ModuleInfo_68,
  MR_Word STATE_VARIABLE_QualInfo_0_69,
  MR_Word * STATE_VARIABLE_QualInfo_70,
  MR_Word STATE_VARIABLE_Specs_0_71,
  MR_Word * STATE_VARIABLE_Specs_72)
{
  MR_Word Transform_33;
  MR_String ResetPredName_34;
  MR_Word ResetPredSymName_35;
  MR_Word TypeAndModeArg1_36;
  MR_Word TypeAndModeArg2_37;
  MR_Word ArgTypesAndModes_38;
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
  MR_Integer Var_74;
  MR_Word Var_75;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Word Var_78;
  MR_Word Var_79;
  MR_Word Var_83;
  MR_Word STATE_VARIABLE_ModuleInfo_93_93;
  MR_Word STATE_VARIABLE_Specs_94_94;
  MR_Word STATE_VARIABLE_VarSet_95_95;
  MR_Word STATE_VARIABLE_VarSet_97_97;
  MR_Word STATE_VARIABLE_VarSet_99_99;
  MR_Word _MaybePredProcId_48;

  Var_74 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_23);
  {
    Transform_33 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Transform_33, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_19));
    MR_hl_field(2, Transform_33, 1) = ((MR_Box) (UserArity_22));
    MR_hl_field(2, Transform_33, 2) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) (SingleProc_24)));
    MR_hl_field(2, Transform_33, 3) = ((MR_Box) (Var_74));
  }
  hlds__pred_name__make_transformed_pred_name_3_p_0(PredName_21, Transform_33, &ResetPredName_34);
  {
    ResetPredSymName_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ResetPredSymName_35, 0) = ((MR_Box) (PredModuleName_20));
    MR_hl_field(1, ResetPredSymName_35, 1) = ((MR_Box) (ResetPredName_34));
  }
  Var_75 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
  Var_76 = parse_tree__prog_mode__di_mode_0_f_0();
  {
    TypeAndModeArg1_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TypeAndModeArg1_36, 0) = ((MR_Box) (Var_75));
    MR_hl_field(1, TypeAndModeArg1_36, 1) = ((MR_Box) (Var_76));
  }
  Var_77 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
  Var_78 = parse_tree__prog_mode__uo_mode_0_f_0();
  {
    TypeAndModeArg2_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TypeAndModeArg2_37, 0) = ((MR_Box) (Var_77));
    MR_hl_field(1, TypeAndModeArg2_37, 1) = ((MR_Box) (Var_78));
  }
  {
    Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_79, 0) = ((MR_Box) (TypeAndModeArg2_37));
    MR_hl_field(1, Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    ArgTypesAndModes_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ArgTypesAndModes_38, 0) = ((MR_Box) (TypeAndModeArg1_36));
    MR_hl_field(1, ArgTypesAndModes_38, 1) = ((MR_Box) (Var_79));
  }
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet_39);
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_40);
  {
    PredSymName_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, PredSymName_43, 0) = ((MR_Box) (PredModuleName_20));
    MR_hl_field(1, PredSymName_43, 1) = ((MR_Box) (PredName_21));
  }
  {
    PredSpec_44 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PredSpec_44, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_19));
    MR_hl_field(0, PredSpec_44, 1) = ((MR_Box) (PredSymName_43));
    MR_hl_field(0, PredSpec_44, 2) = ((MR_Box) (UserArity_22));
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
    MR_hl_field(0, PredDecl_47, 2) = ((MR_Box) (ArgTypesAndModes_38));
    MR_hl_field(0, PredDecl_47, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, PredDecl_47, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, PredDecl_47, 5) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_2[2])));
    MR_hl_field(0, PredDecl_47, 6) = ((MR_Box) (MaybeAttrs_46));
    MR_hl_field(0, PredDecl_47, 7) = ((MR_Box) (TypeVarSet_39));
    MR_hl_field(0, PredDecl_47, 8) = ((MR_Box) (InstVarSet_40));
    MR_hl_field(0, PredDecl_47, 9) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, PredDecl_47, 10) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(0, PredDecl_47, 11) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[58]));
    MR_hl_field(0, PredDecl_47, 12) = ((MR_Box) (Context_25));
    MR_hl_field(0, PredDecl_47, 13) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  hlds__add_pred__module_add_pred_decl_9_p_0(ItemMercuryStatus_27, PredStatus_28, (MR_Integer) 1, PredDecl_47, &_MaybePredProcId_48, STATE_VARIABLE_ModuleInfo_0_67, &STATE_VARIABLE_ModuleInfo_93_93, STATE_VARIABLE_Specs_0_71, &STATE_VARIABLE_Specs_94_94);
  parse_tree__prog_util__user_arity_pred_form_arity_3_p_0(PredOrFunc_19, UserArity_22, &PredFormArity_49);
  {
    PFSymNameArity_50 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PFSymNameArity_50, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_19));
    MR_hl_field(0, PFSymNameArity_50, 1) = ((MR_Box) (PredSymName_43));
    MR_hl_field(0, PFSymNameArity_50, 2) = ((MR_Box) (PredFormArity_49));
  }
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &STATE_VARIABLE_VarSet_95_95);
  mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "IO0", &IO0_52, STATE_VARIABLE_VarSet_95_95, &STATE_VARIABLE_VarSet_97_97);
  mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "IO", &IO_53, STATE_VARIABLE_VarSet_97_97, &STATE_VARIABLE_VarSet_99_99);
  switch (IsTablingSupported_26) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Args_61;
        MR_Word BodyExpr_62;
        MR_Word ResetClauseInfo_63;
        MR_Word Var_126;
        MR_Word Var_127;
        MR_Word Var_128;
        MR_Word Var_134;

        {
          Var_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_126, 0) = ((MR_Box) (IO0_52));
          MR_hl_field(1, Var_126, 1) = ((MR_Box) (Context_25));
        }
        {
          Var_128 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_128, 0) = ((MR_Box) (IO_53));
          MR_hl_field(1, Var_128, 1) = ((MR_Box) (Context_25));
        }
        {
          Var_127 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_127, 0) = ((MR_Box) (Var_128));
          MR_hl_field(1, Var_127, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Args_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Args_61, 0) = ((MR_Box) (Var_126));
          MR_hl_field(1, Args_61, 1) = ((MR_Box) (Var_127));
        }
        {
          BodyExpr_62 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, BodyExpr_62, 0) = ((MR_Box) (Context_25));
          MR_hl_field(0, BodyExpr_62, 1) = ((MR_Box) (Var_126));
          MR_hl_field(0, BodyExpr_62, 2) = ((MR_Box) (Var_128));
          MR_hl_field(0, BodyExpr_62, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        {
          Var_134 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_134, 0) = ((MR_Box) (BodyExpr_62));
          MR_hl_field(1, Var_134, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          ResetClauseInfo_63 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ResetClauseInfo_63, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(0, ResetClauseInfo_63, 1) = ((MR_Box) (ResetPredSymName_35));
          MR_hl_field(0, ResetClauseInfo_63, 2) = ((MR_Box) (Args_61));
          MR_hl_field(0, ResetClauseInfo_63, 3) = ((MR_Box) (STATE_VARIABLE_VarSet_99_99));
          MR_hl_field(0, ResetClauseInfo_63, 4) = ((MR_Box) (Var_134));
          MR_hl_field(0, ResetClauseInfo_63, 5) = ((MR_Box) (Context_25));
          MR_hl_field(0, ResetClauseInfo_63, 6) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        hlds__make_hlds__add_clause__module_add_clause_9_p_0(PredStatus_28, (MR_Word) ((MR_Unsigned) 0U), ResetClauseInfo_63, STATE_VARIABLE_ModuleInfo_93_93, STATE_VARIABLE_ModuleInfo_68, STATE_VARIABLE_QualInfo_0_69, STATE_VARIABLE_QualInfo_70, STATE_VARIABLE_Specs_94_94, STATE_VARIABLE_Specs_72);
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
        MR_Word PragmaResetFCInfo_60;
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
        STATE_VARIABLE_Attrs_106_106 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 0);
        parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_106_106, &STATE_VARIABLE_Attrs_109_109);
        parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_109_109, &STATE_VARIABLE_Attrs_111_111);
        parse_tree__prog_data_foreign__set_purity_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_111_111, &STATE_VARIABLE_Attrs_113_113);
        parse_tree__prog_data_foreign__set_may_duplicate_3_p_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_2[3])), STATE_VARIABLE_Attrs_113_113, &STATE_VARIABLE_Attrs_115_115);
        GlobalVarName_56 = hlds__make_hlds__add_pragma__add_pragma_tabling__table_info_c_global_var_name_3_f_0(STATE_VARIABLE_ModuleInfo_93_93, PFSymNameArity_50, ProcId_23);
        ResetCode_57 = mercury__string__f_43_43_2_f_0(GlobalVarName_56, (MR_String) ".MR_pt_tablenode.MR_integer = 0;");
        {
          Var_118 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_118, 0) = ((MR_Box) (Context_25));
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
          ResetFCInfo_59 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ResetFCInfo_59, 0) = ((MR_Box) (STATE_VARIABLE_Attrs_115_115));
          MR_hl_field(0, ResetFCInfo_59, 1) = ((MR_Box) (ResetPredSymName_35));
          MR_hl_field(0, ResetFCInfo_59, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(0, ResetFCInfo_59, 3) = ((MR_Box) (Var_120));
          MR_hl_field(0, ResetFCInfo_59, 4) = ((MR_Box) (STATE_VARIABLE_VarSet_99_99));
          MR_hl_field(0, ResetFCInfo_59, 5) = ((MR_Box) (InstVarSet_40));
          MR_hl_field(0, ResetFCInfo_59, 6) = ((MR_Box) (ResetImpl_58));
        }
        {
          PragmaResetFCInfo_60 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, PragmaResetFCInfo_60, 0) = ((MR_Box) (ResetFCInfo_59));
          MR_hl_field(0, PragmaResetFCInfo_60, 1) = ((MR_Box) (Context_25));
          MR_hl_field(0, PragmaResetFCInfo_60, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_6_p_0(PredStatus_28, PragmaResetFCInfo_60, STATE_VARIABLE_ModuleInfo_93_93, STATE_VARIABLE_ModuleInfo_68, STATE_VARIABLE_Specs_94_94, STATE_VARIABLE_Specs_72);
        *STATE_VARIABLE_QualInfo_70 = STATE_VARIABLE_QualInfo_0_69;
      }
      break;
  }
  *STATE_VARIABLE_ProcTable_66 = STATE_VARIABLE_ProcTable_0_65;
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__create_tabling_statistics_pred_18_p_0(
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
  MR_Word STATE_VARIABLE_ProcTable_0_76,
  MR_Word * STATE_VARIABLE_ProcTable_77,
  MR_Word STATE_VARIABLE_ModuleInfo_0_78,
  MR_Word * STATE_VARIABLE_ModuleInfo_79,
  MR_Word STATE_VARIABLE_QualInfo_0_80,
  MR_Word * STATE_VARIABLE_QualInfo_81,
  MR_Word STATE_VARIABLE_Specs_0_82,
  MR_Word * STATE_VARIABLE_Specs_83)
{
  MR_Word Transform_33;
  MR_String StatsPredName_34;
  MR_Word StatsPredSymName_35;
  MR_Word TableBuiltinModule_36;
  MR_Word StatsTypeName_37;
  MR_Word StatsType_38;
  MR_Word TypeAndModeArg1_39;
  MR_Word TypeAndModeArg2_40;
  MR_Word TypeAndModeArg3_41;
  MR_Word ArgTypesAndModes_42;
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
  MR_Integer Var_85;
  MR_Word Var_89;
  MR_Word Var_90;
  MR_Word Var_91;
  MR_Word Var_92;
  MR_Word Var_93;
  MR_Word Var_94;
  MR_Word Var_95;
  MR_Word Var_99;
  MR_Word STATE_VARIABLE_ModuleInfo_109_109;
  MR_Word STATE_VARIABLE_Specs_110_110;
  MR_Word STATE_VARIABLE_VarSet_111_111;
  MR_Word STATE_VARIABLE_VarSet_113_113;
  MR_Word STATE_VARIABLE_VarSet_115_115;
  MR_Word STATE_VARIABLE_VarSet_117_117;
  MR_Word _MaybePredProcId_52;

  Var_85 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_23);
  {
    Transform_33 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Transform_33, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_19));
    MR_hl_field(2, Transform_33, 1) = ((MR_Box) (UserArity_22));
    MR_hl_field(2, Transform_33, 2) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) (SingleProc_24)));
    MR_hl_field(2, Transform_33, 3) = ((MR_Box) (Var_85));
  }
  hlds__pred_name__make_transformed_pred_name_3_p_0(PredName_21, Transform_33, &StatsPredName_34);
  {
    StatsPredSymName_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, StatsPredSymName_35, 0) = ((MR_Box) (PredModuleName_20));
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
  Var_89 = parse_tree__prog_mode__out_mode_0_f_0();
  {
    TypeAndModeArg1_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TypeAndModeArg1_39, 0) = ((MR_Box) (StatsType_38));
    MR_hl_field(1, TypeAndModeArg1_39, 1) = ((MR_Box) (Var_89));
  }
  Var_90 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
  Var_91 = parse_tree__prog_mode__di_mode_0_f_0();
  {
    TypeAndModeArg2_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TypeAndModeArg2_40, 0) = ((MR_Box) (Var_90));
    MR_hl_field(1, TypeAndModeArg2_40, 1) = ((MR_Box) (Var_91));
  }
  Var_92 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
  Var_93 = parse_tree__prog_mode__uo_mode_0_f_0();
  {
    TypeAndModeArg3_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TypeAndModeArg3_41, 0) = ((MR_Box) (Var_92));
    MR_hl_field(1, TypeAndModeArg3_41, 1) = ((MR_Box) (Var_93));
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
    ArgTypesAndModes_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ArgTypesAndModes_42, 0) = ((MR_Box) (TypeAndModeArg1_39));
    MR_hl_field(1, ArgTypesAndModes_42, 1) = ((MR_Box) (Var_94));
  }
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet_43);
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_44);
  {
    PredSymName_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, PredSymName_47, 0) = ((MR_Box) (PredModuleName_20));
    MR_hl_field(1, PredSymName_47, 1) = ((MR_Box) (PredName_21));
  }
  {
    PredSpec_48 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PredSpec_48, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_19));
    MR_hl_field(0, PredSpec_48, 1) = ((MR_Box) (PredSymName_47));
    MR_hl_field(0, PredSpec_48, 2) = ((MR_Box) (UserArity_22));
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
    MR_hl_field(0, PredDecl_51, 2) = ((MR_Box) (ArgTypesAndModes_42));
    MR_hl_field(0, PredDecl_51, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, PredDecl_51, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, PredDecl_51, 5) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_2[2])));
    MR_hl_field(0, PredDecl_51, 6) = ((MR_Box) (MaybeAttrs_50));
    MR_hl_field(0, PredDecl_51, 7) = ((MR_Box) (TypeVarSet_43));
    MR_hl_field(0, PredDecl_51, 8) = ((MR_Box) (InstVarSet_44));
    MR_hl_field(0, PredDecl_51, 9) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, PredDecl_51, 10) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(0, PredDecl_51, 11) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[58]));
    MR_hl_field(0, PredDecl_51, 12) = ((MR_Box) (Context_25));
    MR_hl_field(0, PredDecl_51, 13) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  hlds__add_pred__module_add_pred_decl_9_p_0(ItemMercuryStatus_27, PredStatus_28, (MR_Integer) 1, PredDecl_51, &_MaybePredProcId_52, STATE_VARIABLE_ModuleInfo_0_78, &STATE_VARIABLE_ModuleInfo_109_109, STATE_VARIABLE_Specs_0_82, &STATE_VARIABLE_Specs_110_110);
  parse_tree__prog_util__user_arity_pred_form_arity_3_p_0(PredOrFunc_19, UserArity_22, &PredFormArity_53);
  {
    PFSymNameArity_54 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PFSymNameArity_54, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_19));
    MR_hl_field(0, PFSymNameArity_54, 1) = ((MR_Box) (PredSymName_47));
    MR_hl_field(0, PFSymNameArity_54, 2) = ((MR_Box) (PredFormArity_53));
  }
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &STATE_VARIABLE_VarSet_111_111);
  mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "Stats", &Stats_56, STATE_VARIABLE_VarSet_111_111, &STATE_VARIABLE_VarSet_113_113);
  mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "IO0", &IO0_57, STATE_VARIABLE_VarSet_113_113, &STATE_VARIABLE_VarSet_115_115);
  mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "IO", &IO_58, STATE_VARIABLE_VarSet_115_115, &STATE_VARIABLE_VarSet_117_117);
  switch (IsTablingSupported_26) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word DummyStatsFuncSymName_67;
        MR_Word DummyStatsFuncTerm_68;
        MR_Word Args_69;
        MR_Word GetStatsExpr_70;
        MR_Word UpdateIOExpr_71;
        MR_Word GetStatsUpdateIOExpr_72;
        MR_Word BodyExpr_73;
        MR_Word StatsClauseInfo_74;
        MR_Word Var_150;
        MR_Word Var_153;
        MR_Word Var_154;
        MR_Word Var_155;
        MR_Word Var_156;
        MR_Word Var_157;
        MR_Word Var_164;
        MR_Word Var_168;

        Var_150 = mdbcomp__builtin_modules__mercury_table_statistics_module_0_f_0();
        {
          DummyStatsFuncSymName_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, DummyStatsFuncSymName_67, 0) = ((MR_Box) (Var_150));
          MR_hl_field(1, DummyStatsFuncSymName_67, 1) = ((MR_Box) ((MR_String) "dummy_proc_table_statistics"));
        }
        mdbcomp__sym_name__sym_name_to_term_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Context_25, DummyStatsFuncSymName_67, (MR_Word) ((MR_Unsigned) 0U), &DummyStatsFuncTerm_68);
        {
          Var_153 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_153, 0) = ((MR_Box) (Stats_56));
          MR_hl_field(1, Var_153, 1) = ((MR_Box) (Context_25));
        }
        {
          Var_155 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_155, 0) = ((MR_Box) (IO0_57));
          MR_hl_field(1, Var_155, 1) = ((MR_Box) (Context_25));
        }
        {
          Var_157 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_157, 0) = ((MR_Box) (IO_58));
          MR_hl_field(1, Var_157, 1) = ((MR_Box) (Context_25));
        }
        {
          Var_156 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_156, 0) = ((MR_Box) (Var_157));
          MR_hl_field(1, Var_156, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_154 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_154, 0) = ((MR_Box) (Var_155));
          MR_hl_field(1, Var_154, 1) = ((MR_Box) (Var_156));
        }
        {
          Args_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Args_69, 0) = ((MR_Box) (Var_153));
          MR_hl_field(1, Args_69, 1) = ((MR_Box) (Var_154));
        }
        {
          GetStatsExpr_70 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, GetStatsExpr_70, 0) = ((MR_Box) (Context_25));
          MR_hl_field(0, GetStatsExpr_70, 1) = ((MR_Box) (Var_153));
          MR_hl_field(0, GetStatsExpr_70, 2) = ((MR_Box) (DummyStatsFuncTerm_68));
          MR_hl_field(0, GetStatsExpr_70, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        {
          UpdateIOExpr_71 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, UpdateIOExpr_71, 0) = ((MR_Box) (Context_25));
          MR_hl_field(0, UpdateIOExpr_71, 1) = ((MR_Box) (Var_155));
          MR_hl_field(0, UpdateIOExpr_71, 2) = ((MR_Box) (Var_157));
          MR_hl_field(0, UpdateIOExpr_71, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        {
          Var_164 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_164, 0) = ((MR_Box) (UpdateIOExpr_71));
          MR_hl_field(1, Var_164, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          GetStatsUpdateIOExpr_72 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, GetStatsUpdateIOExpr_72, 0) = ((MR_Box) (Context_25));
          MR_hl_field(2, GetStatsUpdateIOExpr_72, 1) = ((MR_Box) (GetStatsExpr_70));
          MR_hl_field(2, GetStatsUpdateIOExpr_72, 2) = ((MR_Box) (Var_164));
        }
        {
          BodyExpr_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, BodyExpr_73, 0) = ((MR_Box) ((MR_Unsigned) 7U));
          MR_hl_field(3, BodyExpr_73, 1) = ((MR_Box) (Context_25));
          MR_hl_field(3, BodyExpr_73, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(3, BodyExpr_73, 3) = ((MR_Box) (GetStatsUpdateIOExpr_72));
        }
        {
          Var_168 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_168, 0) = ((MR_Box) (BodyExpr_73));
          MR_hl_field(1, Var_168, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          StatsClauseInfo_74 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, StatsClauseInfo_74, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(0, StatsClauseInfo_74, 1) = ((MR_Box) (StatsPredSymName_35));
          MR_hl_field(0, StatsClauseInfo_74, 2) = ((MR_Box) (Args_69));
          MR_hl_field(0, StatsClauseInfo_74, 3) = ((MR_Box) (STATE_VARIABLE_VarSet_117_117));
          MR_hl_field(0, StatsClauseInfo_74, 4) = ((MR_Box) (Var_168));
          MR_hl_field(0, StatsClauseInfo_74, 5) = ((MR_Box) (Context_25));
          MR_hl_field(0, StatsClauseInfo_74, 6) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        hlds__make_hlds__add_clause__module_add_clause_9_p_0(PredStatus_28, (MR_Word) ((MR_Unsigned) 0U), StatsClauseInfo_74, STATE_VARIABLE_ModuleInfo_109_109, STATE_VARIABLE_ModuleInfo_79, STATE_VARIABLE_QualInfo_0_80, STATE_VARIABLE_QualInfo_81, STATE_VARIABLE_Specs_110_110, STATE_VARIABLE_Specs_83);
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
        MR_Word PragmaStatsFCInfo_66;
        MR_Word Var_119;
        MR_Word Var_122;
        MR_Word Var_125;
        MR_Word STATE_VARIABLE_Attrs_127_127;
        MR_Word STATE_VARIABLE_Attrs_130_130;
        MR_Word STATE_VARIABLE_Attrs_132_132;
        MR_Word STATE_VARIABLE_Attrs_134_134;
        MR_Word STATE_VARIABLE_Attrs_136_136;
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
        STATE_VARIABLE_Attrs_127_127 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 0);
        parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_127_127, &STATE_VARIABLE_Attrs_130_130);
        parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_130_130, &STATE_VARIABLE_Attrs_132_132);
        parse_tree__prog_data_foreign__set_purity_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_132_132, &STATE_VARIABLE_Attrs_134_134);
        parse_tree__prog_data_foreign__set_may_duplicate_3_p_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_2[3])), STATE_VARIABLE_Attrs_134_134, &STATE_VARIABLE_Attrs_136_136);
        Global_62 = hlds__make_hlds__add_pragma__add_pragma_tabling__table_info_c_global_var_name_3_f_0(STATE_VARIABLE_ModuleInfo_109_109, PFSymNameArity_54, ProcId_23);
        Var_139 = mercury__string__f_43_43_2_f_0(Global_62, (MR_String) ", &Stats);");
        StatsCode_63 = mercury__string__f_43_43_2_f_0((MR_String) "MR_get_tabling_stats(&", Var_139);
        {
          Var_141 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_141, 0) = ((MR_Box) (Context_25));
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
          StatsFCInfo_65 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, StatsFCInfo_65, 0) = ((MR_Box) (STATE_VARIABLE_Attrs_136_136));
          MR_hl_field(0, StatsFCInfo_65, 1) = ((MR_Box) (StatsPredSymName_35));
          MR_hl_field(0, StatsFCInfo_65, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(0, StatsFCInfo_65, 3) = ((MR_Box) (Var_143));
          MR_hl_field(0, StatsFCInfo_65, 4) = ((MR_Box) (STATE_VARIABLE_VarSet_117_117));
          MR_hl_field(0, StatsFCInfo_65, 5) = ((MR_Box) (InstVarSet_44));
          MR_hl_field(0, StatsFCInfo_65, 6) = ((MR_Box) (StatsImpl_64));
        }
        {
          PragmaStatsFCInfo_66 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, PragmaStatsFCInfo_66, 0) = ((MR_Box) (StatsFCInfo_65));
          MR_hl_field(0, PragmaStatsFCInfo_66, 1) = ((MR_Box) (Context_25));
          MR_hl_field(0, PragmaStatsFCInfo_66, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_6_p_0(PredStatus_28, PragmaStatsFCInfo_66, STATE_VARIABLE_ModuleInfo_109_109, STATE_VARIABLE_ModuleInfo_79, STATE_VARIABLE_Specs_110_110, STATE_VARIABLE_Specs_83);
        *STATE_VARIABLE_QualInfo_81 = STATE_VARIABLE_QualInfo_0_80;
      }
      break;
  }
  *STATE_VARIABLE_ProcTable_77 = STATE_VARIABLE_ProcTable_0_76;
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__table_info_c_global_var_name_3_f_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__make_hlds__add_pragma__add_pragma_tabling__IntroducedFrom__pred__table_info_c_global_var_name__689__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_String MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__table_info_c_global_var_name_3_f_0(
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
  MR_Word Var_25;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_5, &Globals_9);
  libs__globals__get_target_2_p_0(Globals_9, &Target_10);
  {
    Var_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_25, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_4[0]));
    MR_hl_field(0, Var_25, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__table_info_c_global_var_name_3_f_0_1));
    MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_25, 3) = ((MR_Box) (Target_10));
    MR_hl_field(0, Var_25, 4) = ((MR_Box) ((MR_Integer) 0));
  }
  mercury__require__expect_3_p_0(Var_25, (MR_String) "function \140hlds.make_hlds.add_pragma.add_pragma_tabling.table_info_c_global_var_name\'/3", (MR_String) "memo table statistics and reset are supported only for C");
  libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 308, &HighLevelCode_11);
  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_5, &ModuleName_12);
  PredOrFunc_13 = ((MR_Unsigned) ((MR_hl_field(0, PFSymNameArity_6, (MR_Integer) 0))) & (MR_Integer) 1);
  PredSymName_14 = ((MR_Word) ((MR_hl_field(0, PFSymNameArity_6, (MR_Integer) 1))));
  PredFormArity_15 = ((MR_Word) ((MR_hl_field(0, PFSymNameArity_6, (MR_Integer) 2))));
  PredName_16 = mdbcomp__sym_name__unqualify_name_1_f_0(PredSymName_14);
  switch (HighLevelCode_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Integer PredFormArityInt_22 = (MR_Integer) (PredFormArity_15);
        MR_Integer ProcIdInt_23;
        MR_Word ProcLabel_24;

        hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_7, &ProcIdInt_23);
        {
          ProcLabel_24 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ProcLabel_24, 0) = ((MR_Box) (ModuleName_12));
          MR_hl_field(0, ProcLabel_24, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_13));
          MR_hl_field(0, ProcLabel_24, 2) = ((MR_Box) (ModuleName_12));
          MR_hl_field(0, ProcLabel_24, 3) = ((MR_Box) (PredName_16));
          MR_hl_field(0, ProcLabel_24, 4) = ((MR_Box) (PredFormArityInt_22));
          MR_hl_field(0, ProcLabel_24, 5) = ((MR_Box) (ProcIdInt_23));
        }
        VarName_8 = ll_backend__rtti_out__tabling_struct_data_addr_string_2_f_0(ProcLabel_24, (MR_Word) ((MR_Unsigned) 0U));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word MLDS_PredLabel_20;
        MR_Word MLDS_ProcLabel_21;

        {
          MLDS_PredLabel_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, MLDS_PredLabel_20, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_13));
          MR_hl_field(0, MLDS_PredLabel_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, MLDS_PredLabel_20, 2) = ((MR_Box) (PredName_16));
          MR_hl_field(0, MLDS_PredLabel_20, 3) = ((MR_Box) (PredFormArity_15));
          MR_hl_field(0, MLDS_PredLabel_20, 4) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
        }
        {
          MLDS_ProcLabel_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, MLDS_ProcLabel_21, 0) = ((MR_Box) (MLDS_PredLabel_20));
          MR_hl_field(0, MLDS_ProcLabel_21, 1) = ((MR_Box) (ProcId_7));
        }
        VarName_8 = ml_backend__mlds_to_c_name__mlds_tabling_data_name_2_f_0(MLDS_ProcLabel_21, (MR_Word) ((MR_Unsigned) 0U));
      }
      break;
  }
  return VarName_8;
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
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_ModuleInfo_67;
  MR_Word conv1_STATE_VARIABLE_QualInfo_69;
  MR_Word conv0_STATE_VARIABLE_Specs_71;

  hlds__make_hlds__add_pragma__add_pragma_tabling__module_add_pragma_tabled_for_pred_15_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 9)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 10)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ModuleInfo_67, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_QualInfo_69, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_Specs_71);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ModuleInfo_67));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_QualInfo_69));
  *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_71));
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__module_add_pragma_tabled_10_p_0(
  MR_Word TabledInfo_11,
  MR_Word Context_12,
  MR_Word ItemMercuryStatus_13,
  MR_Word PredStatus_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_54,
  MR_Word * STATE_VARIABLE_ModuleInfo_55,
  MR_Word STATE_VARIABLE_QualInfo_0_56,
  MR_Word * STATE_VARIABLE_QualInfo_57,
  MR_Word STATE_VARIABLE_Specs_0_58,
  MR_Word * STATE_VARIABLE_Specs_59)
{
  MR_Word TabledMethod_18 = ((MR_Word) ((MR_hl_field(0, TabledInfo_11, (MR_Integer) 0))));
  MR_Word PredOrProcSpec_19 = ((MR_Word) ((MR_hl_field(0, TabledInfo_11, (MR_Integer) 1))));
  MR_Word MaybeAttributes_20 = ((MR_Word) ((MR_hl_field(0, TabledInfo_11, (MR_Integer) 2))));
  MR_Word PFUMM_21 = ((MR_Word) ((MR_hl_field(0, PredOrProcSpec_19, (MR_Integer) 0))));
  MR_Word PredSymName_22 = ((MR_Word) ((MR_hl_field(0, PredOrProcSpec_19, (MR_Integer) 1))));
  MR_Word PredModuleName_23;
  MR_String PredName_24;
  MR_Word PredicateTable0_26;
  MR_Integer UserArityInt_32;
  MR_Word PredIds_38;
  MR_Word STATE_VARIABLE_ModuleInfo_70_70;
  MR_Word STATE_VARIABLE_Specs_71_71;
  MR_Word STATE_VARIABLE_Specs_137_137;
  MR_Word Var_138;
  MR_Box conv5_STATE_VARIABLE_ModuleInfo_55;
  MR_Box conv4_STATE_VARIABLE_QualInfo_57;
  MR_Box conv3_STATE_VARIABLE_Specs_59;

  if (((MR_tag((MR_Word) PredSymName_22)) == (MR_Integer) 1))
  {
    PredModuleName_23 = ((MR_Word) ((MR_hl_field(1, PredSymName_22, (MR_Integer) 0))));
    PredName_24 = ((MR_String) ((MR_hl_field(1, PredSymName_22, (MR_Integer) 1))));
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_pragma_tabling.module_add_pragma_tabled\'/10", (MR_String) "unqualified PredSymName");
      return;
    }
  hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_54, &PredicateTable0_26);
  switch (MR_tag((MR_Word) PFUMM_21)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ModesOrArity_209 = ((MR_Word) ((MR_hl_field(0, PFUMM_21, (MR_Integer) 0))));
        MR_Word PredFormArity_212;
        MR_Word UserArity_213;
        MR_Word PredIds0_214;

        if (((MR_tag((MR_Word) ModesOrArity_209)) == (MR_Integer) 1))
        {
          UserArity_213 = ((MR_Word) ((MR_hl_field(1, ModesOrArity_209, (MR_Integer) 0))));
          parse_tree__prog_util__user_arity_pred_form_arity_3_p_0((MR_Integer) 0, UserArity_213, &PredFormArity_212);
        }
        else
        {
          MR_Word Modes_175 = ((MR_Word) ((MR_hl_field(0, ModesOrArity_209, (MR_Integer) 0))));

          PredFormArity_212 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_175);
          parse_tree__prog_util__user_arity_pred_form_arity_3_p_1((MR_Integer) 0, &UserArity_213, PredFormArity_212);
        }
        UserArityInt_32 = (MR_Integer) (UserArity_213);
        hlds__pred_table__predicate_table_lookup_pf_m_n_a_7_p_0(PredicateTable0_26, (MR_Integer) 0, (MR_Integer) 0, PredModuleName_23, PredName_24, PredFormArity_212, &PredIds0_214);
        if ((PredIds0_214 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Origin_179;
          MR_String TabledMethodStr_180;
          MR_Word DescPieces_181;
          MR_Word PredId_182;
          MR_Word Var_183;
          MR_Word Var_184;

          {
            Var_183 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_183, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(0, Var_183, 1) = ((MR_Box) (PredSymName_22));
            MR_hl_field(0, Var_183, 2) = ((MR_Box) (UserArity_213));
          }
          {
            Origin_179 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Origin_179, 0) = ((MR_Box) (Var_183));
          }
          TabledMethodStr_180 = parse_tree__prog_out__tabled_eval_method_to_string_1_f_0(TabledMethod_18);
          {
            Var_184 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_184, 0) = ((MR_Box) ((MR_Unsigned) 32U));
            MR_hl_field(3, Var_184, 1) = ((MR_Box) (TabledMethodStr_180));
          }
          {
            DescPieces_181 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, DescPieces_181, 0) = ((MR_Box) (Var_184));
            MR_hl_field(1, DescPieces_181, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[2])));
          }
          hlds__add_pred__add_implicit_pred_decl_report_error_14_p_0((MR_Integer) 0, PredModuleName_23, PredName_24, PredFormArity_212, PredStatus_14, (MR_Integer) 0, Context_12, Origin_179, DescPieces_181, &PredId_182, STATE_VARIABLE_ModuleInfo_0_54, &STATE_VARIABLE_ModuleInfo_70_70, STATE_VARIABLE_Specs_0_58, &STATE_VARIABLE_Specs_71_71);
          {
            PredIds_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, PredIds_38, 0) = ((MR_Box) (PredId_182));
            MR_hl_field(1, PredIds_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        else
        {
          PredIds_38 = PredIds0_214;
          STATE_VARIABLE_ModuleInfo_70_70 = STATE_VARIABLE_ModuleInfo_0_54;
          STATE_VARIABLE_Specs_71_71 = STATE_VARIABLE_Specs_0_58;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModesOrArity_27 = ((MR_Word) ((MR_hl_field(1, PFUMM_21, (MR_Integer) 0))));
        MR_Word PredFormArity_30;
        MR_Word UserArity_31;
        MR_Word PredIds0_33;

        if (((MR_tag((MR_Word) ModesOrArity_27)) == (MR_Integer) 1))
        {
          UserArity_31 = ((MR_Word) ((MR_hl_field(1, ModesOrArity_27, (MR_Integer) 0))));
          parse_tree__prog_util__user_arity_pred_form_arity_3_p_0((MR_Integer) 1, UserArity_31, &PredFormArity_30);
        }
        else
        {
          MR_Word Modes_29 = ((MR_Word) ((MR_hl_field(0, ModesOrArity_27, (MR_Integer) 0))));

          PredFormArity_30 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_29);
          parse_tree__prog_util__user_arity_pred_form_arity_3_p_1((MR_Integer) 1, &UserArity_31, PredFormArity_30);
        }
        UserArityInt_32 = (MR_Integer) (UserArity_31);
        hlds__pred_table__predicate_table_lookup_pf_m_n_a_7_p_0(PredicateTable0_26, (MR_Integer) 0, (MR_Integer) 1, PredModuleName_23, PredName_24, PredFormArity_30, &PredIds0_33);
        if ((PredIds0_33 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Origin_34;
          MR_String TabledMethodStr_35;
          MR_Word DescPieces_36;
          MR_Word PredId_37;
          MR_Word Var_63;
          MR_Word Var_64;

          {
            Var_63 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_63, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            MR_hl_field(0, Var_63, 1) = ((MR_Box) (PredSymName_22));
            MR_hl_field(0, Var_63, 2) = ((MR_Box) (UserArity_31));
          }
          {
            Origin_34 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Origin_34, 0) = ((MR_Box) (Var_63));
          }
          TabledMethodStr_35 = parse_tree__prog_out__tabled_eval_method_to_string_1_f_0(TabledMethod_18);
          {
            Var_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_64, 0) = ((MR_Box) ((MR_Unsigned) 32U));
            MR_hl_field(3, Var_64, 1) = ((MR_Box) (TabledMethodStr_35));
          }
          {
            DescPieces_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, DescPieces_36, 0) = ((MR_Box) (Var_64));
            MR_hl_field(1, DescPieces_36, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[2])));
          }
          hlds__add_pred__add_implicit_pred_decl_report_error_14_p_0((MR_Integer) 1, PredModuleName_23, PredName_24, PredFormArity_30, PredStatus_14, (MR_Integer) 0, Context_12, Origin_34, DescPieces_36, &PredId_37, STATE_VARIABLE_ModuleInfo_0_54, &STATE_VARIABLE_ModuleInfo_70_70, STATE_VARIABLE_Specs_0_58, &STATE_VARIABLE_Specs_71_71);
          {
            PredIds_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, PredIds_38, 0) = ((MR_Box) (PredId_37));
            MR_hl_field(1, PredIds_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        else
        {
          PredIds_38 = PredIds0_33;
          STATE_VARIABLE_ModuleInfo_70_70 = STATE_VARIABLE_ModuleInfo_0_54;
          STATE_VARIABLE_Specs_71_71 = STATE_VARIABLE_Specs_0_58;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word STATE_VARIABLE_Specs_73_73;
        MR_Word UserArity_151 = ((MR_Word) ((MR_hl_field(2, PFUMM_21, (MR_Integer) 0))));
        MR_Word PredIds0_152;
        MR_String TabledMethodStr_154;

        TabledMethodStr_154 = parse_tree__prog_out__tabled_eval_method_to_string_1_f_0(TabledMethod_18);
        hlds__make_hlds__add_pragma__maybe_warn_about_pfumm_unknown_7_p_0(STATE_VARIABLE_ModuleInfo_0_54, TabledMethodStr_154, PFUMM_21, PredSymName_22, Context_12, STATE_VARIABLE_Specs_0_58, &STATE_VARIABLE_Specs_73_73);
        UserArityInt_32 = (MR_Integer) (UserArity_151);
        hlds__pred_table__predicate_table_lookup_m_n_a_6_p_0(PredicateTable0_26, (MR_Integer) 0, PredModuleName_23, PredName_24, UserArity_151, &PredIds0_152);
        if ((PredIds0_152 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_75;
          MR_Word Var_77;
          MR_Word PredFormArity_142;
          MR_Word Origin_143;
          MR_Word DescPieces_144;
          MR_Word PredId_145;

          {
            Var_75 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_75, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(0, Var_75, 1) = ((MR_Box) (PredSymName_22));
            MR_hl_field(0, Var_75, 2) = ((MR_Box) (UserArity_151));
          }
          {
            Origin_143 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Origin_143, 0) = ((MR_Box) (Var_75));
          }
          {
            Var_77 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_77, 0) = ((MR_Box) ((MR_Unsigned) 32U));
            MR_hl_field(3, Var_77, 1) = ((MR_Box) (TabledMethodStr_154));
          }
          {
            DescPieces_144 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, DescPieces_144, 0) = ((MR_Box) (Var_77));
            MR_hl_field(1, DescPieces_144, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[2])));
          }
          parse_tree__prog_util__user_arity_pred_form_arity_3_p_0((MR_Integer) 0, UserArity_151, &PredFormArity_142);
          hlds__add_pred__add_implicit_pred_decl_report_error_14_p_0((MR_Integer) 0, PredModuleName_23, PredName_24, PredFormArity_142, PredStatus_14, (MR_Integer) 0, Context_12, Origin_143, DescPieces_144, &PredId_145, STATE_VARIABLE_ModuleInfo_0_54, &STATE_VARIABLE_ModuleInfo_70_70, STATE_VARIABLE_Specs_73_73, &STATE_VARIABLE_Specs_71_71);
          {
            PredIds_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, PredIds_38, 0) = ((MR_Box) (PredId_145));
            MR_hl_field(1, PredIds_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        else
        {
          PredIds_38 = PredIds0_152;
          STATE_VARIABLE_ModuleInfo_70_70 = STATE_VARIABLE_ModuleInfo_0_54;
          STATE_VARIABLE_Specs_71_71 = STATE_VARIABLE_Specs_73_73;
        }
      }
      break;
  }
  if ((MaybeAttributes_20 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_Specs_137_137 = STATE_VARIABLE_Specs_71_71;
  else
  {
    MR_Word Attributes_43 = ((MR_Word) ((MR_hl_field(1, MaybeAttributes_20, (MR_Integer) 0))));
    MR_Word Statistics_44 = ((((MR_Unsigned) ((MR_hl_field(0, Attributes_43, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
    MR_Word AllowReset_45 = ((((MR_Unsigned) ((MR_hl_field(0, Attributes_43, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
    MR_Word Var_231 = ((MR_Word) ((MR_hl_field(1, PredIds_38, (MR_Integer) 1))));

    if ((Var_231 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Specs_137_137 = STATE_VARIABLE_Specs_71_71;
    else
    {
      MR_Word STATE_VARIABLE_Specs_113_113;

      switch (Statistics_44) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          STATE_VARIABLE_Specs_113_113 = STATE_VARIABLE_Specs_71_71;
          break;
        case (MR_Integer) 0:
          {
            MR_Word StatsPieces_50;
            MR_Word StatsSpec_51;
            MR_Word Var_92;
            MR_Word Var_95;
            MR_Word Var_96;
            MR_Word Var_97;

            {
              Var_97 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_97, 0) = ((MR_Box) (PredSymName_22));
              MR_hl_field(0, Var_97, 1) = ((MR_Box) (UserArityInt_32));
            }
            {
              Var_96 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_96, 0) = ((MR_Box) ((MR_Unsigned) 11U));
              MR_hl_field(3, Var_96, 1) = ((MR_Box) (Var_97));
            }
            {
              Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_95, 0) = ((MR_Box) (Var_96));
              MR_hl_field(1, Var_95, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[11])));
            }
            {
              Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_92, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[4])));
              MR_hl_field(1, Var_92, 1) = ((MR_Box) (Var_95));
            }
            {
              StatsPieces_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, StatsPieces_50, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[3])));
              MR_hl_field(1, StatsPieces_50, 1) = ((MR_Box) (Var_92));
            }
            {
              StatsSpec_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, StatsSpec_51, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_pragma_tabling.module_add_pragma_tabled\'/10"));
              MR_hl_field(1, StatsSpec_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, StatsSpec_51, 2) = ((MR_Box) ((MR_Unsigned) 40U));
              MR_hl_field(1, StatsSpec_51, 3) = ((MR_Box) (Context_12));
              MR_hl_field(1, StatsSpec_51, 4) = ((MR_Box) (StatsPieces_50));
            }
            {
              STATE_VARIABLE_Specs_113_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_Specs_113_113, 0) = ((MR_Box) (StatsSpec_51));
              MR_hl_field(1, STATE_VARIABLE_Specs_113_113, 1) = ((MR_Box) (STATE_VARIABLE_Specs_71_71));
            }
          }
          break;
      }
      switch (AllowReset_45) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ResetPieces_52;
            MR_Word ResetSpec_53;
            MR_Word Var_116;
            MR_Word Var_119;
            MR_Word Var_120;
            MR_Word Var_121;

            {
              Var_121 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_121, 0) = ((MR_Box) (PredSymName_22));
              MR_hl_field(0, Var_121, 1) = ((MR_Box) (UserArityInt_32));
            }
            {
              Var_120 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_120, 0) = ((MR_Box) ((MR_Unsigned) 11U));
              MR_hl_field(3, Var_120, 1) = ((MR_Box) (Var_121));
            }
            {
              Var_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_119, 0) = ((MR_Box) (Var_120));
              MR_hl_field(1, Var_119, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[15])));
            }
            {
              Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_116, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[4])));
              MR_hl_field(1, Var_116, 1) = ((MR_Box) (Var_119));
            }
            {
              ResetPieces_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, ResetPieces_52, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[12])));
              MR_hl_field(1, ResetPieces_52, 1) = ((MR_Box) (Var_116));
            }
            {
              ResetSpec_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, ResetSpec_53, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_pragma_tabling.module_add_pragma_tabled\'/10"));
              MR_hl_field(1, ResetSpec_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, ResetSpec_53, 2) = ((MR_Box) ((MR_Unsigned) 40U));
              MR_hl_field(1, ResetSpec_53, 3) = ((MR_Box) (Context_12));
              MR_hl_field(1, ResetSpec_53, 4) = ((MR_Box) (ResetPieces_52));
            }
            {
              STATE_VARIABLE_Specs_137_137 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_Specs_137_137, 0) = ((MR_Box) (ResetSpec_53));
              MR_hl_field(1, STATE_VARIABLE_Specs_137_137, 1) = ((MR_Box) (STATE_VARIABLE_Specs_113_113));
            }
          }
          break;
        case (MR_Integer) 1:
          STATE_VARIABLE_Specs_137_137 = STATE_VARIABLE_Specs_113_113;
          break;
      }
    }
  }
  {
    Var_138 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_138, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_3[0]));
    MR_hl_field(0, Var_138, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__module_add_pragma_tabled_10_p_0_1));
    MR_hl_field(0, Var_138, 2) = ((MR_Box) ((MR_Integer) 8));
    MR_hl_field(0, Var_138, 3) = ((MR_Box) (TabledMethod_18));
    MR_hl_field(0, Var_138, 4) = ((MR_Box) (PFUMM_21));
    MR_hl_field(0, Var_138, 5) = ((MR_Box) (PredModuleName_23));
    MR_hl_field(0, Var_138, 6) = ((MR_Box) (PredName_24));
    MR_hl_field(0, Var_138, 7) = ((MR_Box) (MaybeAttributes_20));
    MR_hl_field(0, Var_138, 8) = ((MR_Box) (Context_12));
    MR_hl_field(0, Var_138, 9) = ((MR_Box) (ItemMercuryStatus_13));
    MR_hl_field(0, Var_138, 10) = ((MR_Box) (PredStatus_14));
  }
  mercury__list__foldl3_8_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0), (MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[0]), Var_138, PredIds_38, ((MR_Box) (STATE_VARIABLE_ModuleInfo_70_70)), &conv5_STATE_VARIABLE_ModuleInfo_55, ((MR_Box) (STATE_VARIABLE_QualInfo_0_56)), &conv4_STATE_VARIABLE_QualInfo_57, ((MR_Box) (STATE_VARIABLE_Specs_137_137)), &conv3_STATE_VARIABLE_Specs_59);
  *STATE_VARIABLE_ModuleInfo_55 = ((MR_Word) (conv5_STATE_VARIABLE_ModuleInfo_55));
  *STATE_VARIABLE_QualInfo_57 = ((MR_Word) (conv4_STATE_VARIABLE_QualInfo_57));
  *STATE_VARIABLE_Specs_59 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_59));
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
