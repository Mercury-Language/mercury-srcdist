/*
** Automatically generated from `add_pragma_impl.m'
** by the Mercury compiler,
** version rotd-2026-08-27
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


// :- module hlds.make_hlds.add_pragma_impl.
// :- implementation.

/*
INIT mercury__hlds__make_hlds__add_pragma_impl__init
ENDINIT
*/

#include "hlds.make_hlds.add_pragma_impl.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "ll_backend.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.proc_requests.mih"
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
#include "hlds.pred_info_types.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_proc_id.mih"
#include "hlds.pred_table.mih"
#include "hlds.proc_info_types.mih"
#include "hlds.proc_table_struct.mih"
#include "hlds.quantification.mih"
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
#include "ll_backend.fact_table_check.mih"
#include "ll_backend.fact_table_compile.mih"
#include "ll_backend.fact_table_gen.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.build_eqv_maps.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_out_pred_decl.mih"
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
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.item_types.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.add_foreign_proc.mih"
#include "hlds.make_hlds.add_pragma_tabling.mih"
#include "hlds.make_hlds.add_pragma_util.mih"
#include "hlds.make_hlds.make_hlds_types.mih"
#include "hlds.make_hlds.make_hlds_warn.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_impl__cord__pti_cord_1__plain_parse_tree__prog_item_pragma__type_ctor_info_impl_pragma_tabled_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_impl__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_impl__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_warn_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_impl__maybe__pti_maybe_1__plain_mdbcomp__prim_data__type_ctor_info_pred_or_func_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma_impl__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_impl__maybe__pti_maybe_1__plain_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma_impl__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_proc__type_ctor_info_proc_info_0;

static void MR_CALL 
hlds__make_hlds__add_pragma_impl__add_impl_marker_8_p_0(
  MR_Word ItemMercuryStatus_9,
  MR_Word ImplMarker_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_18,
  MR_Word * STATE_VARIABLE_ModuleInfo_19,
  MR_Word STATE_VARIABLE_ErrSpecs_0_20,
  MR_Word * STATE_VARIABLE_ErrSpecs_21,
  MR_Word STATE_VARIABLE_WarnSpecs_0_22,
  MR_Word * STATE_VARIABLE_WarnSpecs_23);

static void MR_CALL 
hlds__make_hlds__add_pragma_impl__add_impl_pragma_tabled_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word ItemMercuryStatus_13,
  MR_Word Tabled_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_30,
  MR_Word * STATE_VARIABLE_ModuleInfo_31,
  MR_Word STATE_VARIABLE_QualInfo_0_32,
  MR_Word * STATE_VARIABLE_QualInfo_33,
  MR_Word STATE_VARIABLE_ErrSpecs_0_34,
  MR_Word * STATE_VARIABLE_ErrSpecs_35,
  MR_Word STATE_VARIABLE_WarnSpecs_0_36,
  MR_Word * STATE_VARIABLE_WarnSpecs_37);

static void MR_CALL 
hlds__make_hlds__add_pragma_impl__check_required_feature_5_p_0(
  MR_Word Globals_6,
  MR_Word Context_7,
  MR_Word Feature_8,
  MR_Word STATE_VARIABLE_ErrSpecs_0_23,
  MR_Word * STATE_VARIABLE_ErrSpecs_24);

static void MR_CALL 
hlds__make_hlds__add_pragma_impl__mark_pred_as_external_6_p_0(
  MR_Word Context_7,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_23,
  MR_Word * STATE_VARIABLE_ModuleInfo_24,
  MR_Word STATE_VARIABLE_ErrSpecs_0_25,
  MR_Word * STATE_VARIABLE_ErrSpecs_26);

static void MR_CALL 
hlds__make_hlds__add_pragma_impl__add_impl_pragma_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__add_pragma_impl__add_impl_pragma_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__make_hlds__add_pragma_impl__add_impl_pragma_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word ItemMercuryStatus_13,
  MR_Word Pragma_14,
  MR_Word STATE_VARIABLE_PragmaTabledCord_0_39,
  MR_Word * STATE_VARIABLE_PragmaTabledCord_40,
  MR_Word STATE_VARIABLE_ModuleInfo_0_41,
  MR_Word * STATE_VARIABLE_ModuleInfo_42,
  MR_Word STATE_VARIABLE_ErrSpecs_0_43,
  MR_Word * STATE_VARIABLE_ErrSpecs_44,
  MR_Word STATE_VARIABLE_WarnSpecs_0_45,
  MR_Word * STATE_VARIABLE_WarnSpecs_46);

static void MR_CALL 
hlds__make_hlds__add_pragma_impl__add_pragma_require_tail_rec_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__make_hlds__add_pragma_impl__add_pragma_require_tail_rec_7_p_0(
  MR_Word Pragma_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_41,
  MR_Word * STATE_VARIABLE_ModuleInfo_42,
  MR_Word STATE_VARIABLE_ErrSpecs_0_43,
  MR_Word * STATE_VARIABLE_ErrSpecs_44,
  MR_Word STATE_VARIABLE_WarnSpecs_0_45,
  MR_Word * STATE_VARIABLE_WarnSpecs_46);

static void MR_CALL 
hlds__make_hlds__add_pragma_impl__add_pragma_require_tail_rec_proc_10_p_0(
  MR_Word RequireTailrec_11,
  MR_Word Context_12,
  MR_Word MaybePredOrFunc_13,
  MR_Word MaybeModes_14,
  MR_Word SNA_15,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_PredInfo_0_34,
  MR_Word * STATE_VARIABLE_PredInfo_35,
  MR_Word STATE_VARIABLE_ErrSpecs_0_36,
  MR_Word * STATE_VARIABLE_ErrSpecs_37);

static void MR_CALL 
hlds__make_hlds__add_pragma_impl__add_pragma_fact_table_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word ItemMercuryStatus_12,
  MR_Word PredStatus_13,
  MR_Word FTInfo_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_46,
  MR_Word * STATE_VARIABLE_ModuleInfo_47,
  MR_Word STATE_VARIABLE_ErrSpecs_0_48,
  MR_Word * STATE_VARIABLE_ErrSpecs_49,
  MR_Word STATE_VARIABLE_WarnSpecs_0_50,
  MR_Word * STATE_VARIABLE_WarnSpecs_51);

static void MR_CALL 
hlds__make_hlds__add_pragma_impl__add_fact_table_procs_16_p_0(
  MR_Word ProgressStream_1,
  MR_Word PredOrFunc_2,
  MR_Word SymName_3,
  MR_Word ItemMercuryStatus_4,
  MR_Word PredStatus_5,
  MR_Word ProcTable_6,
  MR_Integer PrimaryProcId_7,
  MR_Word Context_8,
  MR_Word GenInfo_9,
  MR_Word HeadVar__10_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12,
  MR_Word STATE_VARIABLE_ErrSpecs_0_13,
  MR_Word * STATE_VARIABLE_ErrSpecs_14,
  MR_Word STATE_VARIABLE_WarnSpecs_0_15,
  MR_Word * STATE_VARIABLE_WarnSpecs_16);

static void MR_CALL 
hlds__make_hlds__add_pragma_impl__add_impl_markers_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
hlds__make_hlds__add_pragma_impl__add_impl_pragmas_tabled_10_p_0_1(
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

static void MR_CALL 
hlds__make_hlds__add_pragma_impl__add_impl_pragmas_10_p_0_1(
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


static /* final */ const MR_Box hlds__make_hlds__add_pragma_impl_scalar_common_1[107][2];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_impl_scalar_common_2[1][3];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_impl_scalar_common_3[1][1];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_impl_scalar_common_4[2][14];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_impl_scalar_common_5[1][11];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_impl_scalar_common_6[1][13];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_impl_scalar_common_7[1][9];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_impl_scalar_common_8[1][8];




static /* final */ const MR_Box hlds__make_hlds__add_pragma_impl_scalar_common_1[107][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_impl_pragma_tabled_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1)),
    ((MR_Box) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_impl_pragma_tabled_info_0))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[4]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declarations"))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[6]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_String) "foreign_export"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[7])))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "are"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[10]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "not allowed"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[12]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "more than once, such as"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[14]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for procedures that can succeed"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[15])))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[18]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[21]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[22])))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "pragma"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[24]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_String) "external_func"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[25])))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_String) "external_pred"))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[25])))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The"))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "has clauses, so"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[31]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "it cannot be marked as external."))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[33]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_String) "require_tail_recursion"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[22])))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[37]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "undeclared mode of"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "one of mode of"))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[40]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "pragmas"))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[42]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[43])))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "conflicting"))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[44])))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The earlier pragma is here."))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[20])))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: this module must be compiled"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[49]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "supports concurrent execution."))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[51]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in a grade that"))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[52])))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "uses conservative garbage collection."))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[55]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[56])))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "uses double precision floats."))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[58]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[59])))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[20])))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "spf"))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[61])))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "do not contain the grade modifier"))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[63])))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Grades that use double precision floats"))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[65])))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "supports memoisation."))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[68]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[69])))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "supports executing conjuntions in parallel."))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[71]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[72])))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "uses single precision floats."))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[74]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[75])))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "contain the grade modifier"))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[77]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[63])))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Grades that use single precision floats"))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[79]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[78])))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "sequential semantics."))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[81]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "using the strict"))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[83]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[82])))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "supports trailing."))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[85]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[86])))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "tr"))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[88]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[61])))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the grade modifier"))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[90]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[89])))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Grades that support trailing contain"))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[92]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[91])))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "requires type_ctor_layout structures."))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[94]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Don\'t use --no-type-layout to disable them."))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[96]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[20])))
  },
  /* row  98 */
  {
    ((MR_Box) ((MR_Integer) 24)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  99 */
  {
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[98])))
  },
  /* row 100 */
  {
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 101 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[67])))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[101]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 103 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[80])))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[103]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 105 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[93])))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[105]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_impl_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0)),
    ((MR_Box) (&hlds__hlds_proc__hlds__hlds_proc__type_ctor_info_proc_info_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_impl_scalar_common_3[1][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 0U) },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_impl_scalar_common_4[2][14] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0)),
    ((MR_Box) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_item_impl_pragma_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_impl__cord__pti_cord_1__plain_parse_tree__prog_item_pragma__type_ctor_info_impl_pragma_tabled_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_impl__cord__pti_cord_1__plain_parse_tree__prog_item_pragma__type_ctor_info_impl_pragma_tabled_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_impl__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_impl__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_impl__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_warn_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_impl__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_warn_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0)),
    ((MR_Box) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_impl_pragma_tabled_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_impl__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_impl__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_impl__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_warn_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_impl__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_warn_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_impl_scalar_common_5[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0)),
    ((MR_Box) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_item_impl_marker_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_impl__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_impl__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_impl__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_warn_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_impl__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_warn_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_impl_scalar_common_6[1][13] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_require_tail_recursion_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_impl__maybe__pti_maybe_1__plain_mdbcomp__prim_data__type_ctor_info_pred_or_func_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_impl__maybe__pti_maybe_1__plain_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_impl__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_proc__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_impl__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_impl__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_impl_scalar_common_7[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_impl__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_impl__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_impl_scalar_common_8[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_required_feature_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_impl__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_impl__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_impl__cord__pti_cord_1__plain_parse_tree__prog_item_pragma__type_ctor_info_impl_pragma_tabled_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_impl_pragma_tabled_info_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_impl__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_impl__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_warn_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_impl__maybe__pti_maybe_1__plain_mdbcomp__prim_data__type_ctor_info_pred_or_func_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma_impl__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_impl__maybe__pti_maybe_1__plain_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&hlds__make_hlds__add_pragma_impl__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma_impl__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_proc__type_ctor_info_proc_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_proc__hlds__hlds_proc__type_ctor_info_proc_info_0)
  }
};

static void MR_CALL 
hlds__make_hlds__add_pragma_impl__add_impl_marker_8_p_0(
  MR_Word ItemMercuryStatus_9,
  MR_Word ImplMarker_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_18,
  MR_Word * STATE_VARIABLE_ModuleInfo_19,
  MR_Word STATE_VARIABLE_ErrSpecs_0_20,
  MR_Word * STATE_VARIABLE_ErrSpecs_21,
  MR_Word STATE_VARIABLE_WarnSpecs_0_22,
  MR_Word * STATE_VARIABLE_WarnSpecs_23)
{
  MR_Word MarkerKind_14 = ((MR_Unsigned) ((MR_hl_field(0, ImplMarker_10, 0))) & (MR_Integer) 15);
  MR_Word PFUNameArity_15 = ((MR_Word) ((MR_hl_field(0, ImplMarker_10, 1))));
  MR_Word Context_16 = ((MR_Word) ((MR_hl_field(0, ImplMarker_10, 2))));

  switch (MarkerKind_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      hlds__make_hlds__add_pragma_util__add_pred_marker_13_p_0(PFUNameArity_15, (MR_String) "consider_used", (MR_Integer) 1, ItemMercuryStatus_9, Context_16, (MR_Integer) 10, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_0_18, STATE_VARIABLE_ModuleInfo_19, STATE_VARIABLE_ErrSpecs_0_20, STATE_VARIABLE_ErrSpecs_21, STATE_VARIABLE_WarnSpecs_0_22, STATE_VARIABLE_WarnSpecs_23);
      break;
    case (MR_Integer) 0:
      hlds__make_hlds__add_pragma_util__add_pred_marker_13_p_0(PFUNameArity_15, (MR_String) "inline", (MR_Integer) 1, ItemMercuryStatus_9, Context_16, (MR_Integer) 6, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[99])), STATE_VARIABLE_ModuleInfo_0_18, STATE_VARIABLE_ModuleInfo_19, STATE_VARIABLE_ErrSpecs_0_20, STATE_VARIABLE_ErrSpecs_21, STATE_VARIABLE_WarnSpecs_0_22, STATE_VARIABLE_WarnSpecs_23);
      break;
    case (MR_Integer) 3:
      {
        MR_Word STATE_VARIABLE_ModuleInfo_4_55;
        MR_Word STATE_VARIABLE_ErrSpecs_4_56;
        MR_Word STATE_VARIABLE_WarnSpecs_4_57;

        hlds__make_hlds__add_pragma_util__add_pred_marker_13_p_0(PFUNameArity_15, (MR_String) "mode_check_clauses", (MR_Integer) 1, ItemMercuryStatus_9, Context_16, (MR_Integer) 24, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_0_18, &STATE_VARIABLE_ModuleInfo_4_55, STATE_VARIABLE_ErrSpecs_0_20, &STATE_VARIABLE_ErrSpecs_4_56, STATE_VARIABLE_WarnSpecs_0_22, &STATE_VARIABLE_WarnSpecs_4_57);
        hlds__make_hlds__add_pragma_util__add_pred_marker_13_p_0(PFUNameArity_15, (MR_String) "mode_check_clauses", (MR_Integer) 1, ItemMercuryStatus_9, Context_16, (MR_Integer) 9, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[100])), STATE_VARIABLE_ModuleInfo_4_55, STATE_VARIABLE_ModuleInfo_19, STATE_VARIABLE_ErrSpecs_4_56, STATE_VARIABLE_ErrSpecs_21, STATE_VARIABLE_WarnSpecs_4_57, STATE_VARIABLE_WarnSpecs_23);
      }
      break;
    case (MR_Integer) 4:
      hlds__make_hlds__add_pragma_util__add_pred_marker_13_p_0(PFUNameArity_15, (MR_String) "no_determinism_warning", (MR_Integer) 1, ItemMercuryStatus_9, Context_16, (MR_Integer) 5, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_0_18, STATE_VARIABLE_ModuleInfo_19, STATE_VARIABLE_ErrSpecs_0_20, STATE_VARIABLE_ErrSpecs_21, STATE_VARIABLE_WarnSpecs_0_22, STATE_VARIABLE_WarnSpecs_23);
      break;
    case (MR_Integer) 1:
      hlds__make_hlds__add_pragma_util__add_pred_marker_13_p_0(PFUNameArity_15, (MR_String) "no_inline", (MR_Integer) 1, ItemMercuryStatus_9, Context_16, (MR_Integer) 8, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[100])), STATE_VARIABLE_ModuleInfo_0_18, STATE_VARIABLE_ModuleInfo_19, STATE_VARIABLE_ErrSpecs_0_20, STATE_VARIABLE_ErrSpecs_21, STATE_VARIABLE_WarnSpecs_0_22, STATE_VARIABLE_WarnSpecs_23);
      break;
    case (MR_Integer) 7:
      hlds__make_hlds__add_pragma_util__add_pred_marker_13_p_0(PFUNameArity_15, (MR_String) "promise_equivalent_clauses", (MR_Integer) 1, ItemMercuryStatus_9, Context_16, (MR_Integer) 19, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_0_18, STATE_VARIABLE_ModuleInfo_19, STATE_VARIABLE_ErrSpecs_0_20, STATE_VARIABLE_ErrSpecs_21, STATE_VARIABLE_WarnSpecs_0_22, STATE_VARIABLE_WarnSpecs_23);
      break;
    case (MR_Integer) 5:
      hlds__make_hlds__add_pragma_util__add_pred_marker_13_p_0(PFUNameArity_15, (MR_String) "promise_pure", (MR_Integer) 1, ItemMercuryStatus_9, Context_16, (MR_Integer) 17, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_0_18, STATE_VARIABLE_ModuleInfo_19, STATE_VARIABLE_ErrSpecs_0_20, STATE_VARIABLE_ErrSpecs_21, STATE_VARIABLE_WarnSpecs_0_22, STATE_VARIABLE_WarnSpecs_23);
      break;
    case (MR_Integer) 6:
      hlds__make_hlds__add_pragma_util__add_pred_marker_13_p_0(PFUNameArity_15, (MR_String) "promise_semipure", (MR_Integer) 1, ItemMercuryStatus_9, Context_16, (MR_Integer) 18, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_0_18, STATE_VARIABLE_ModuleInfo_19, STATE_VARIABLE_ErrSpecs_0_20, STATE_VARIABLE_ErrSpecs_21, STATE_VARIABLE_WarnSpecs_0_22, STATE_VARIABLE_WarnSpecs_23);
      break;
    case (MR_Integer) 8:
      hlds__make_hlds__add_pragma_util__add_pred_marker_13_p_0(PFUNameArity_15, (MR_String) "require_switch_arms_in_type_order", (MR_Integer) 1, ItemMercuryStatus_9, Context_16, (MR_Integer) 11, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_0_18, STATE_VARIABLE_ModuleInfo_19, STATE_VARIABLE_ErrSpecs_0_20, STATE_VARIABLE_ErrSpecs_21, STATE_VARIABLE_WarnSpecs_0_22, STATE_VARIABLE_WarnSpecs_23);
      break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_impl__add_impl_pragma_tabled_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word ItemMercuryStatus_13,
  MR_Word Tabled_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_30,
  MR_Word * STATE_VARIABLE_ModuleInfo_31,
  MR_Word STATE_VARIABLE_QualInfo_0_32,
  MR_Word * STATE_VARIABLE_QualInfo_33,
  MR_Word STATE_VARIABLE_ErrSpecs_0_34,
  MR_Word * STATE_VARIABLE_ErrSpecs_35,
  MR_Word STATE_VARIABLE_WarnSpecs_0_36,
  MR_Word * STATE_VARIABLE_WarnSpecs_37)
{
  MR_Word Globals_19;
  MR_Word TypeLayout_20;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_30, &Globals_19);
  libs__globals__lookup_bool_option_3_p_0(Globals_19, (MR_Integer) 753, &TypeLayout_20);
  switch (TypeLayout_20) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word TabledMethod_22 = ((MR_Word) ((MR_hl_field(0, Tabled_14, 0))));
        MR_Word Context_25 = ((MR_Word) ((MR_hl_field(0, Tabled_14, 3))));
        MR_String PragmaName_27;
        MR_Word Pieces_28;
        MR_Word Spec_29;
        MR_Word Var_47;
        MR_Word Var_48;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Word Var_55;
        MR_Word Var_56;

        PragmaName_27 = parse_tree__parse_tree_out_misc__tabled_eval_method_to_pragma_name_1_f_0(TabledMethod_22);
        {
          Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 36U));
          MR_hl_field(3, Var_50, 1) = ((MR_Box) (PragmaName_27));
        }
        {
          Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_49, 0) = ((MR_Box) (Var_50));
          MR_hl_field(1, Var_49, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[22])));
        }
        Var_48 = parse_tree__error_spec__color_as_subject_1_f_0(Var_49);
        Var_56 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[95])));
        Var_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_56, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[97])));
        Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_48, Var_55);
        Pieces_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[5])), Var_47);
        {
          Spec_29 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_29, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_impl.add_impl_pragma_tabled\'/11"));
          MR_hl_field(0, Spec_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_29, 2) = ((MR_Box) ((MR_Unsigned) 48U));
          MR_hl_field(0, Spec_29, 3) = ((MR_Box) (Context_25));
          MR_hl_field(0, Spec_29, 4) = ((MR_Box) (Pieces_28));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_ErrSpecs_35 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_29));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_34));
        }
        *STATE_VARIABLE_ModuleInfo_31 = STATE_VARIABLE_ModuleInfo_0_30;
        *STATE_VARIABLE_QualInfo_33 = STATE_VARIABLE_QualInfo_0_32;
        *STATE_VARIABLE_WarnSpecs_37 = STATE_VARIABLE_WarnSpecs_0_36;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word PredStatus_21;

        hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_13, &PredStatus_21);
        hlds__make_hlds__add_pragma_tabling__module_add_pragma_tabled_12_p_0(ProgressStream_12, Tabled_14, ItemMercuryStatus_13, PredStatus_21, STATE_VARIABLE_ModuleInfo_0_30, STATE_VARIABLE_ModuleInfo_31, STATE_VARIABLE_QualInfo_0_32, STATE_VARIABLE_QualInfo_33, STATE_VARIABLE_ErrSpecs_0_34, STATE_VARIABLE_ErrSpecs_35, STATE_VARIABLE_WarnSpecs_0_36, STATE_VARIABLE_WarnSpecs_37);
      }
      break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_impl__check_required_feature_5_p_0(
  MR_Word Globals_6,
  MR_Word Context_7,
  MR_Word Feature_8,
  MR_Word STATE_VARIABLE_ErrSpecs_0_23,
  MR_Word * STATE_VARIABLE_ErrSpecs_24)
{
  MR_bool succeeded;

  switch (Feature_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word IsConcurrencySupported_10;

        libs__globals__current_grade_supports_concurrency_2_p_0(Globals_6, &IsConcurrencySupported_10);
        switch (IsConcurrencySupported_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Pieces_11;
              MR_Word Spec_12;
              MR_Word Var_29;
              MR_Word Var_30;

              Var_30 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[54])));
              Var_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_30, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[20])));
              Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[50])), Var_29);
              {
                Spec_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Spec_12, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_impl.check_required_feature\'/5"));
                MR_hl_field(0, Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, Spec_12, 2) = ((MR_Box) ((MR_Unsigned) 48U));
                MR_hl_field(0, Spec_12, 3) = ((MR_Box) (Context_7));
                MR_hl_field(0, Spec_12, 4) = ((MR_Box) (Pieces_11));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_ErrSpecs_24 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Spec_12));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_23));
              }
            }
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_ErrSpecs_24 = STATE_VARIABLE_ErrSpecs_0_23;
            break;
        }
      }
      break;
    case (MR_Integer) 7:
      {
        MR_Word GC_Method_22;

        libs__globals__get_gc_method_2_p_0(Globals_6, &GC_Method_22);
        switch (GC_Method_22) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 5:
          case (MR_Integer) 1:
            {
              MR_Word Var_243;
              MR_Word Var_244;
              MR_Word Pieces_308;
              MR_Word Spec_309;

              Var_244 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[57])));
              Var_243 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_244, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[20])));
              Pieces_308 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[50])), Var_243);
              {
                Spec_309 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Spec_309, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_impl.check_required_feature\'/5"));
                MR_hl_field(0, Spec_309, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, Spec_309, 2) = ((MR_Box) ((MR_Unsigned) 48U));
                MR_hl_field(0, Spec_309, 3) = ((MR_Box) (Context_7));
                MR_hl_field(0, Spec_309, 4) = ((MR_Box) (Pieces_308));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_ErrSpecs_24 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Spec_309));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_23));
              }
            }
            break;
          case (MR_Integer) 0:
            *STATE_VARIABLE_ErrSpecs_24 = STATE_VARIABLE_ErrSpecs_0_23;
            break;
          case (MR_Integer) 2:
            *STATE_VARIABLE_ErrSpecs_24 = STATE_VARIABLE_ErrSpecs_0_23;
            break;
          case (MR_Integer) 3:
            *STATE_VARIABLE_ErrSpecs_24 = STATE_VARIABLE_ErrSpecs_0_23;
            break;
          case (MR_Integer) 4:
            *STATE_VARIABLE_ErrSpecs_24 = STATE_VARIABLE_ErrSpecs_0_23;
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word SinglePrecFloat_275;

        libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 91, &SinglePrecFloat_275);
        switch (SinglePrecFloat_275) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_ErrSpecs_24 = STATE_VARIABLE_ErrSpecs_0_23;
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_93;
              MR_Word Var_94;
              MR_Word Var_119;
              MR_Word Var_120;
              MR_Word Var_128;
              MR_Word Pieces_265;
              MR_Word Spec_266;
              MR_Word Msg_268;

              Var_94 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[60])));
              Var_93 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_94, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[20])));
              Pieces_265 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[50])), Var_93);
              {
                Var_120 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_120, 0) = ((MR_Box) (Pieces_265));
              }
              {
                Var_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_119, 0) = ((MR_Box) (Var_120));
                MR_hl_field(1, Var_119, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[102])));
              }
              {
                Msg_268 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Msg_268, 0) = ((MR_Box) (Context_7));
                MR_hl_field(2, Msg_268, 1) = ((MR_Box) (Var_119));
              }
              {
                Var_128 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_128, 0) = ((MR_Box) (Msg_268));
                MR_hl_field(1, Var_128, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Spec_266 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Spec_266, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_impl.check_required_feature\'/5"));
                MR_hl_field(2, Spec_266, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(2, Spec_266, 2) = ((MR_Box) ((MR_Unsigned) 48U));
                MR_hl_field(2, Spec_266, 3) = ((MR_Box) (Var_128));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_ErrSpecs_24 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Spec_266));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_23));
              }
            }
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word IsTablingSupported_16;

        libs__globals__current_grade_supports_tabling_3_p_0(Globals_6, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_3[0])), &IsTablingSupported_16);
        switch (IsTablingSupported_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_137;
              MR_Word Var_138;
              MR_Word Pieces_278;
              MR_Word Spec_279;

              Var_138 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[70])));
              Var_137 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_138, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[20])));
              Pieces_278 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[50])), Var_137);
              {
                Spec_279 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Spec_279, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_impl.check_required_feature\'/5"));
                MR_hl_field(0, Spec_279, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, Spec_279, 2) = ((MR_Box) ((MR_Unsigned) 48U));
                MR_hl_field(0, Spec_279, 3) = ((MR_Box) (Context_7));
                MR_hl_field(0, Spec_279, 4) = ((MR_Box) (Pieces_278));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_ErrSpecs_24 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Spec_279));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_23));
              }
            }
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_ErrSpecs_24 = STATE_VARIABLE_ErrSpecs_0_23;
            break;
        }
      }
      break;
    case (MR_Integer) 4:
      {
        MR_Word IsParConjSupported_17;

        libs__globals__current_grade_supports_par_conj_2_p_0(Globals_6, &IsParConjSupported_17);
        switch (IsParConjSupported_17) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_157;
              MR_Word Var_158;
              MR_Word Pieces_284;
              MR_Word Spec_285;

              Var_158 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[73])));
              Var_157 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_158, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[20])));
              Pieces_284 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[50])), Var_157);
              {
                Spec_285 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Spec_285, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_impl.check_required_feature\'/5"));
                MR_hl_field(0, Spec_285, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, Spec_285, 2) = ((MR_Box) ((MR_Unsigned) 48U));
                MR_hl_field(0, Spec_285, 3) = ((MR_Box) (Context_7));
                MR_hl_field(0, Spec_285, 4) = ((MR_Box) (Pieces_284));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_ErrSpecs_24 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Spec_285));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_23));
              }
            }
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_ErrSpecs_24 = STATE_VARIABLE_ErrSpecs_0_23;
            break;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word SinglePrecFloat_13;

        libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 91, &SinglePrecFloat_13);
        switch (SinglePrecFloat_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Msg_15;
              MR_Word Var_50;
              MR_Word Var_51;
              MR_Word Var_76;
              MR_Word Var_77;
              MR_Word Var_85;
              MR_Word Pieces_259;
              MR_Word Spec_260;

              Var_51 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[76])));
              Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_51, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[20])));
              Pieces_259 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[50])), Var_50);
              {
                Var_77 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_77, 0) = ((MR_Box) (Pieces_259));
              }
              {
                Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_76, 0) = ((MR_Box) (Var_77));
                MR_hl_field(1, Var_76, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[104])));
              }
              {
                Msg_15 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Msg_15, 0) = ((MR_Box) (Context_7));
                MR_hl_field(2, Msg_15, 1) = ((MR_Box) (Var_76));
              }
              {
                Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_85, 0) = ((MR_Box) (Msg_15));
                MR_hl_field(1, Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Spec_260 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Spec_260, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_impl.check_required_feature\'/5"));
                MR_hl_field(2, Spec_260, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(2, Spec_260, 2) = ((MR_Box) ((MR_Unsigned) 48U));
                MR_hl_field(2, Spec_260, 3) = ((MR_Box) (Var_85));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_ErrSpecs_24 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Spec_260));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_23));
              }
            }
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_ErrSpecs_24 = STATE_VARIABLE_ErrSpecs_0_23;
            break;
        }
      }
      break;
    case (MR_Integer) 6:
      {
        MR_Word ReorderConj_19;
        MR_Word ReorderDisj_20;
        MR_Word FullyStrict_21;

        libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 128, &ReorderConj_19);
        libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 129, &ReorderDisj_20);
        libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 130, &FullyStrict_21);
        succeeded = (ReorderConj_19 == (MR_Integer) 0);
        if (succeeded)
        {
          succeeded = (ReorderDisj_20 == (MR_Integer) 0);
          if (succeeded)
            succeeded = (FullyStrict_21 == (MR_Integer) 1);
        }
        if (succeeded)
          *STATE_VARIABLE_ErrSpecs_24 = STATE_VARIABLE_ErrSpecs_0_23;
        else
        {
          MR_Word Var_223;
          MR_Word Var_224;
          MR_Word Pieces_302;
          MR_Word Spec_303;

          Var_224 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[84])));
          Var_223 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_224, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[20])));
          Pieces_302 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[50])), Var_223);
          {
            Spec_303 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_303, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_impl.check_required_feature\'/5"));
            MR_hl_field(0, Spec_303, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_303, 2) = ((MR_Box) ((MR_Unsigned) 48U));
            MR_hl_field(0, Spec_303, 3) = ((MR_Box) (Context_7));
            MR_hl_field(0, Spec_303, 4) = ((MR_Box) (Pieces_302));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_ErrSpecs_24 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Spec_303));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_23));
          }
        }
      }
      break;
    case (MR_Integer) 5:
      {
        MR_Word UseTrail_18;

        libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 90, &UseTrail_18);
        switch (UseTrail_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_178;
              MR_Word Var_179;
              MR_Word Var_204;
              MR_Word Var_205;
              MR_Word Var_213;
              MR_Word Pieces_290;
              MR_Word Spec_291;
              MR_Word Msg_293;

              Var_179 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[87])));
              Var_178 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_179, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[20])));
              Pieces_290 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[50])), Var_178);
              {
                Var_205 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_205, 0) = ((MR_Box) (Pieces_290));
              }
              {
                Var_204 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_204, 0) = ((MR_Box) (Var_205));
                MR_hl_field(1, Var_204, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[106])));
              }
              {
                Msg_293 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Msg_293, 0) = ((MR_Box) (Context_7));
                MR_hl_field(2, Msg_293, 1) = ((MR_Box) (Var_204));
              }
              {
                Var_213 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_213, 0) = ((MR_Box) (Msg_293));
                MR_hl_field(1, Var_213, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Spec_291 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Spec_291, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_impl.check_required_feature\'/5"));
                MR_hl_field(2, Spec_291, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(2, Spec_291, 2) = ((MR_Box) ((MR_Unsigned) 48U));
                MR_hl_field(2, Spec_291, 3) = ((MR_Box) (Var_213));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_ErrSpecs_24 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Spec_291));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_23));
              }
            }
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_ErrSpecs_24 = STATE_VARIABLE_ErrSpecs_0_23;
            break;
        }
      }
      break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_impl__mark_pred_as_external_6_p_0(
  MR_Word Context_7,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_23,
  MR_Word * STATE_VARIABLE_ModuleInfo_24,
  MR_Word STATE_VARIABLE_ErrSpecs_0_25,
  MR_Word * STATE_VARIABLE_ErrSpecs_26)
{
  MR_Word PredInfo0_11;
  MR_Word ClausesInfo0_12;
  MR_Word ClausesRep0_13;
  MR_Word IsEmpty_15;
  MR_Word _ItemNumbers_14;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_23, PredId_8, &PredInfo0_11);
  hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo0_11, &ClausesInfo0_12);
  hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(ClausesInfo0_12, &ClausesRep0_13, &_ItemNumbers_14);
  IsEmpty_15 = hlds__hlds_clauses__clause_list_is_empty_1_f_0(ClausesRep0_13);
  switch (IsEmpty_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word PredOrFunc_17;
        MR_String PredName_18;
        MR_Integer UserArityInt_19;
        MR_Word NameArity_20;
        MR_Word Pieces_21;
        MR_Word Spec_22;
        MR_Word Var_28;
        MR_Word Var_29;
        MR_Word Var_32;
        MR_Word Var_33;
        MR_Word Var_35;
        MR_Word Var_36;
        MR_Word Var_37;
        MR_Word Var_38;
        MR_Word Var_40;
        MR_Word Var_45;
        MR_Word Var_46;

        PredOrFunc_17 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo0_11);
        hlds__hlds_pred__pred_info_get_name_2_p_0(PredInfo0_11, &PredName_18);
        Var_28 = hlds__hlds_pred__pred_info_user_arity_1_f_0(PredInfo0_11);
        UserArityInt_19 = (MR_Integer) (Var_28);
        {
          NameArity_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, NameArity_20, 0) = ((MR_Box) (PredName_18));
          MR_hl_field(0, NameArity_20, 1) = ((MR_Box) (UserArityInt_19));
        }
        {
          Var_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_33, 0) = ((MR_Box) ((MR_Unsigned) 31U));
          MR_hl_field(3, Var_33, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_17));
        }
        {
          Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_32, 0) = ((MR_Box) (Var_33));
          MR_hl_field(1, Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_29, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[30])));
          MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_32));
        }
        {
          Var_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_38, 0) = ((MR_Box) ((MR_Unsigned) 13U));
          MR_hl_field(3, Var_38, 1) = ((MR_Box) (NameArity_20));
        }
        {
          Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_37, 0) = ((MR_Box) (Var_38));
          MR_hl_field(1, Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_36 = parse_tree__error_spec__color_as_subject_1_f_0(Var_37);
        Var_46 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[34])));
        Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_46, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[20])));
        Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[32])), Var_45);
        Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_36, Var_40);
        Pieces_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_29, Var_35);
        {
          Spec_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_22, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_impl.mark_pred_as_external\'/6"));
          MR_hl_field(0, Spec_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_22, 2) = ((MR_Box) ((MR_Unsigned) 48U));
          MR_hl_field(0, Spec_22, 3) = ((MR_Box) (Context_7));
          MR_hl_field(0, Spec_22, 4) = ((MR_Box) (Pieces_21));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_ErrSpecs_26 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_22));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_25));
        }
        *STATE_VARIABLE_ModuleInfo_24 = STATE_VARIABLE_ModuleInfo_0_23;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word PredInfo_16;

        hlds__hlds_pred__pred_info_mark_as_external_2_p_0(PredInfo0_11, &PredInfo_16);
        hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_8, PredInfo_16, STATE_VARIABLE_ModuleInfo_0_23, STATE_VARIABLE_ModuleInfo_24);
        *STATE_VARIABLE_ErrSpecs_26 = STATE_VARIABLE_ErrSpecs_0_25;
      }
      break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_impl__add_impl_pragma_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_ErrSpecs_24;

  hlds__make_hlds__add_pragma_impl__check_required_feature_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_ErrSpecs_24);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_ErrSpecs_24));
}

static void MR_CALL 
hlds__make_hlds__add_pragma_impl__add_impl_pragma_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_ModuleInfo_24;
  MR_Word conv0_STATE_VARIABLE_ErrSpecs_26;

  hlds__make_hlds__add_pragma_impl__mark_pred_as_external_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ModuleInfo_24, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_ErrSpecs_26);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ModuleInfo_24));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_ErrSpecs_26));
}

static void MR_CALL 
hlds__make_hlds__add_pragma_impl__add_impl_pragma_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word ItemMercuryStatus_13,
  MR_Word Pragma_14,
  MR_Word STATE_VARIABLE_PragmaTabledCord_0_39,
  MR_Word * STATE_VARIABLE_PragmaTabledCord_40,
  MR_Word STATE_VARIABLE_ModuleInfo_0_41,
  MR_Word * STATE_VARIABLE_ModuleInfo_42,
  MR_Word STATE_VARIABLE_ErrSpecs_0_43,
  MR_Word * STATE_VARIABLE_ErrSpecs_44,
  MR_Word STATE_VARIABLE_WarnSpecs_0_45,
  MR_Word * STATE_VARIABLE_WarnSpecs_46)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Pragma_14)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word FDInfo_19 = (MR_Word) ((MR_Word) (Pragma_14));
        MR_Word CHeader_22 = ((MR_Word) ((MR_hl_field(0, FDInfo_19, 1))));
        MR_Word Context_23 = ((MR_Word) ((MR_hl_field(0, FDInfo_19, 2))));
        MR_Word ForeignDeclCode_25;
        MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(0, FDInfo_19, 0)));

        {
          ForeignDeclCode_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ForeignDeclCode_25, 0) = (MR_Box) (packed_word_2);
          MR_hl_field(0, ForeignDeclCode_25, 1) = ((MR_Box) (CHeader_22));
          MR_hl_field(0, ForeignDeclCode_25, 2) = ((MR_Box) (Context_23));
        }
        hlds__hlds_module__module_add_foreign_decl_code_user_3_p_0(ForeignDeclCode_25, STATE_VARIABLE_ModuleInfo_0_41, STATE_VARIABLE_ModuleInfo_42);
        *STATE_VARIABLE_PragmaTabledCord_40 = STATE_VARIABLE_PragmaTabledCord_0_39;
        *STATE_VARIABLE_ErrSpecs_44 = STATE_VARIABLE_ErrSpecs_0_43;
        *STATE_VARIABLE_WarnSpecs_46 = STATE_VARIABLE_WarnSpecs_0_45;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word FCInfo_26 = (MR_Word) (MR_body((MR_Word) (Pragma_14), (MR_Integer) 1));
        MR_Word BodyCode_27 = ((MR_Word) ((MR_hl_field(0, FCInfo_26, 1))));
        MR_Word ForeignBodyCode_29;
        MR_Word Lang_62 = ((MR_Unsigned) ((MR_hl_field(0, FCInfo_26, 0))) & (MR_Integer) 3);
        MR_Word Context_63 = ((MR_Word) ((MR_hl_field(0, FCInfo_26, 2))));

        hlds__make_hlds__make_hlds_warn__warn_suspicious_foreign_code_5_p_0(Lang_62, BodyCode_27, Context_63, STATE_VARIABLE_WarnSpecs_0_45, STATE_VARIABLE_WarnSpecs_46);
        {
          ForeignBodyCode_29 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ForeignBodyCode_29, 0) = (MR_Box) ((MR_Unsigned) (Lang_62));
          MR_hl_field(0, ForeignBodyCode_29, 1) = ((MR_Box) (BodyCode_27));
          MR_hl_field(0, ForeignBodyCode_29, 2) = ((MR_Box) (Context_63));
        }
        hlds__hlds_module__module_add_foreign_body_code_3_p_0(ForeignBodyCode_29, STATE_VARIABLE_ModuleInfo_0_41, STATE_VARIABLE_ModuleInfo_42);
        *STATE_VARIABLE_PragmaTabledCord_40 = STATE_VARIABLE_PragmaTabledCord_0_39;
        *STATE_VARIABLE_ErrSpecs_44 = STATE_VARIABLE_ErrSpecs_0_43;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word FEInfo_30 = (MR_Word) (MR_body((MR_Word) (Pragma_14), (MR_Integer) 2));

        hlds__make_hlds__add_pragma_impl__add_pragma_foreign_proc_export_5_p_0(FEInfo_30, STATE_VARIABLE_ModuleInfo_0_41, STATE_VARIABLE_ModuleInfo_42, STATE_VARIABLE_ErrSpecs_0_43, STATE_VARIABLE_ErrSpecs_44);
        *STATE_VARIABLE_PragmaTabledCord_40 = STATE_VARIABLE_PragmaTabledCord_0_39;
        *STATE_VARIABLE_WarnSpecs_46 = STATE_VARIABLE_WarnSpecs_0_45;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Pragma_14, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ExternalInfo_31 = ((MR_Word) ((MR_hl_field(3, Pragma_14, 1))));
            MR_Word PFNameArity_66 = ((MR_Word) ((MR_hl_field(0, ExternalInfo_31, 0))));
            MR_Word MaybeBackend_67 = ((MR_Word) ((MR_hl_field(0, ExternalInfo_31, 1))));
            MR_Word Context_68 = ((MR_Word) ((MR_hl_field(0, ExternalInfo_31, 2))));
            MR_Word Globals_70;
            MR_Word CurrentBackend_71;

            hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_41, &Globals_70);
            CurrentBackend_71 = libs__globals__lookup_current_backend_1_f_0(Globals_70);
            if ((MaybeBackend_67 == (MR_Word) ((MR_Unsigned) 0U)))
              succeeded = MR_TRUE;
            else
            {
              MR_Word Backend_72 = ((MR_Word) ((MR_hl_field(1, MaybeBackend_67, 0))));

              succeeded = (Backend_72 == CurrentBackend_71);
            }
            if (succeeded)
            {
              MR_Word PredicateTable0_73;
              MR_Word PredOrFunc_74;
              MR_Word SymName_75;
              MR_Word UserArity_76;
              MR_Word PredIds_77;
              MR_Word AllArityPredIds_78;
              MR_Word DeclPieces_79;

              hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_41, &PredicateTable0_73);
              PredOrFunc_74 = ((MR_Unsigned) ((MR_hl_field(0, PFNameArity_66, 0))) & (MR_Integer) 1);
              SymName_75 = ((MR_Word) ((MR_hl_field(0, PFNameArity_66, 1))));
              UserArity_76 = ((MR_Word) ((MR_hl_field(0, PFNameArity_66, 2))));
              switch (PredOrFunc_74) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    hlds__pred_table__predicate_table_lookup_func_sym_name_arity_5_p_0(PredicateTable0_73, (MR_Integer) 0, SymName_75, UserArity_76, &PredIds_77);
                    hlds__pred_table__predicate_table_lookup_func_sym_name_4_p_0(PredicateTable0_73, (MR_Integer) 0, SymName_75, &AllArityPredIds_78);
                    DeclPieces_79 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[27]));
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    hlds__pred_table__predicate_table_lookup_pred_sym_name_arity_5_p_0(PredicateTable0_73, (MR_Integer) 0, SymName_75, UserArity_76, &PredIds_77);
                    hlds__pred_table__predicate_table_lookup_pred_sym_name_4_p_0(PredicateTable0_73, (MR_Integer) 0, SymName_75, &AllArityPredIds_78);
                    DeclPieces_79 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[29]));
                  }
                  break;
              }
              if ((PredIds_77 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word PredIdTable0_80;
                MR_Word OtherUserArities_81;
                MR_Word UndefErrSpec_82;
                MR_Word Var_88;

                hlds__hlds_module__module_info_get_pred_id_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_41, &PredIdTable0_80);
                hlds__hlds_error_util__find_user_arities_other_than_4_p_0(PredIdTable0_80, AllArityPredIds_78, UserArity_76, &OtherUserArities_81);
                {
                  Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_88, 0) = ((MR_Box) (PredOrFunc_74));
                }
                hlds__make_hlds_error__report_undefined_pred_or_func_error_7_p_0(Var_88, SymName_75, UserArity_76, OtherUserArities_81, Context_68, DeclPieces_79, &UndefErrSpec_82);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_ErrSpecs_44 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (UndefErrSpec_82));
                  MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_43));
                }
                *STATE_VARIABLE_ModuleInfo_42 = STATE_VARIABLE_ModuleInfo_0_41;
              }
              else
              {
                MR_Word Var_87;
                MR_Box conv3_STATE_VARIABLE_ModuleInfo_42;
                MR_Box conv2_STATE_VARIABLE_ErrSpecs_44;

                {
                  Var_87 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_87, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_impl_scalar_common_7[0]));
                  MR_hl_field(0, Var_87, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_impl__add_impl_pragma_11_p_0_1));
                  MR_hl_field(0, Var_87, 2) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(0, Var_87, 3) = ((MR_Box) (Context_68));
                }
                mercury__list__foldl2_6_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__add_pragma_impl_scalar_common_1[1]), Var_87, PredIds_77, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_41)), &conv3_STATE_VARIABLE_ModuleInfo_42, ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_43)), &conv2_STATE_VARIABLE_ErrSpecs_44);
                *STATE_VARIABLE_ModuleInfo_42 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_42));
                *STATE_VARIABLE_ErrSpecs_44 = ((MR_Word) (conv2_STATE_VARIABLE_ErrSpecs_44));
              }
            }
            else
            {
              *STATE_VARIABLE_ErrSpecs_44 = STATE_VARIABLE_ErrSpecs_0_43;
              *STATE_VARIABLE_ModuleInfo_42 = STATE_VARIABLE_ModuleInfo_0_41;
            }
            *STATE_VARIABLE_PragmaTabledCord_40 = STATE_VARIABLE_PragmaTabledCord_0_39;
            *STATE_VARIABLE_WarnSpecs_46 = STATE_VARIABLE_WarnSpecs_0_45;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word FTInfo_32 = ((MR_Word) ((MR_hl_field(3, Pragma_14, 1))));
            MR_Word PredStatus_33;

            hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_13, &PredStatus_33);
            hlds__make_hlds__add_pragma_impl__add_pragma_fact_table_10_p_0(ProgressStream_12, ItemMercuryStatus_13, PredStatus_33, FTInfo_32, STATE_VARIABLE_ModuleInfo_0_41, STATE_VARIABLE_ModuleInfo_42, STATE_VARIABLE_ErrSpecs_0_43, STATE_VARIABLE_ErrSpecs_44, STATE_VARIABLE_WarnSpecs_0_45, STATE_VARIABLE_WarnSpecs_46);
            *STATE_VARIABLE_PragmaTabledCord_40 = STATE_VARIABLE_PragmaTabledCord_0_39;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TabledInfo_34 = ((MR_Word) ((MR_hl_field(3, Pragma_14, 1))));

            mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_impl_pragma_tabled_info_0), ((MR_Box) (TabledInfo_34)), STATE_VARIABLE_PragmaTabledCord_0_39, STATE_VARIABLE_PragmaTabledCord_40);
            *STATE_VARIABLE_ModuleInfo_42 = STATE_VARIABLE_ModuleInfo_0_41;
            *STATE_VARIABLE_ErrSpecs_44 = STATE_VARIABLE_ErrSpecs_0_43;
            *STATE_VARIABLE_WarnSpecs_46 = STATE_VARIABLE_WarnSpecs_0_45;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word TailrecWarningPragma_35 = ((MR_Word) ((MR_hl_field(3, Pragma_14, 1))));

            hlds__make_hlds__add_pragma_impl__add_pragma_require_tail_rec_7_p_0(TailrecWarningPragma_35, STATE_VARIABLE_ModuleInfo_0_41, STATE_VARIABLE_ModuleInfo_42, STATE_VARIABLE_ErrSpecs_0_43, STATE_VARIABLE_ErrSpecs_44, STATE_VARIABLE_WarnSpecs_0_45, STATE_VARIABLE_WarnSpecs_46);
            *STATE_VARIABLE_PragmaTabledCord_40 = STATE_VARIABLE_PragmaTabledCord_0_39;
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word RFSInfo_36 = ((MR_Word) ((MR_hl_field(3, Pragma_14, 1))));
            MR_Word FeatureSet_37 = ((MR_Word) ((MR_hl_field(0, RFSInfo_36, 0))));
            MR_Word Context_64 = ((MR_Word) ((MR_hl_field(0, RFSInfo_36, 1))));

            if (((MR_tag((MR_Word) ItemMercuryStatus_13)) == (MR_Integer) 1))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_pragma_impl.check_required_feature_set\'/6", (MR_String) "imported require_feature_set pragma");
                return;
              }
            else
            {
              MR_Word Globals_92;
              MR_Word Var_95;
              MR_Box conv5_STATE_VARIABLE_ErrSpecs_44;

              hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_41, &Globals_92);
              {
                Var_95 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_95, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_impl_scalar_common_8[0]));
                MR_hl_field(0, Var_95, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_impl__add_impl_pragma_11_p_0_2));
                MR_hl_field(0, Var_95, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_95, 3) = ((MR_Box) (Globals_92));
                MR_hl_field(0, Var_95, 4) = ((MR_Box) (Context_64));
              }
              mercury__set__fold_4_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_required_feature_0), (MR_Word) (&hlds__make_hlds__add_pragma_impl_scalar_common_1[1]), Var_95, FeatureSet_37, ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_43)), &conv5_STATE_VARIABLE_ErrSpecs_44);
              *STATE_VARIABLE_ErrSpecs_44 = ((MR_Word) (conv5_STATE_VARIABLE_ErrSpecs_44));
            }
            *STATE_VARIABLE_PragmaTabledCord_40 = STATE_VARIABLE_PragmaTabledCord_0_39;
            *STATE_VARIABLE_ModuleInfo_42 = STATE_VARIABLE_ModuleInfo_0_41;
            *STATE_VARIABLE_WarnSpecs_46 = STATE_VARIABLE_WarnSpecs_0_45;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_impl__add_pragma_require_tail_rec_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_PredInfo_35;
  MR_Word conv0_STATE_VARIABLE_ErrSpecs_37;

  hlds__make_hlds__add_pragma_impl__add_pragma_require_tail_rec_proc_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_PredInfo_35, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_ErrSpecs_37);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_PredInfo_35));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_ErrSpecs_37));
}

static void MR_CALL 
hlds__make_hlds__add_pragma_impl__add_pragma_require_tail_rec_7_p_0(
  MR_Word Pragma_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_41,
  MR_Word * STATE_VARIABLE_ModuleInfo_42,
  MR_Word STATE_VARIABLE_ErrSpecs_0_43,
  MR_Word * STATE_VARIABLE_ErrSpecs_44,
  MR_Word STATE_VARIABLE_WarnSpecs_0_45,
  MR_Word * STATE_VARIABLE_WarnSpecs_46)
{
  MR_bool succeeded;
  MR_Word PredSpec_12 = ((MR_Word) ((MR_hl_field(0, Pragma_8, 0))));
  MR_Word RequireTailrec_13 = ((MR_Word) ((MR_hl_field(0, Pragma_8, 1))));
  MR_Word Context_14 = ((MR_Word) ((MR_hl_field(0, Pragma_8, 2))));
  MR_Word PFUMM_16 = ((MR_Word) ((MR_hl_field(0, PredSpec_12, 0))));
  MR_Word PredSymName_17 = ((MR_Word) ((MR_hl_field(0, PredSpec_12, 1))));
  MR_Word MaybePredOrFunc_18;
  MR_Word UserArity_19;
  MR_Word MaybeModes_20;
  MR_Integer UserArityInt_21;
  MR_Word PFU_22;
  MR_Word MatchingPredIdResult_23;

  parse_tree__prog_item_pred_proc_id__pfumm_to_maybe_pf_arity_maybe_modes_4_p_0(PFUMM_16, &MaybePredOrFunc_18, &UserArity_19, &MaybeModes_20);
  UserArityInt_21 = (MR_Integer) (UserArity_19);
  PFU_22 = parse_tree__prog_item_pred_proc_id__maybe_pred_or_func_to_pfu_1_f_0(MaybePredOrFunc_18);
  hlds__make_hlds__add_pragma_util__get_matching_pred_ids_9_p_0(STATE_VARIABLE_ModuleInfo_0_41, (MR_String) "require_tail_recursion", (MR_Integer) 1, (MR_Integer) 1, Context_14, PFU_22, PredSymName_17, UserArity_19, &MatchingPredIdResult_23);
  if (((MR_tag((MR_Word) MatchingPredIdResult_23)) == (MR_Integer) 1))
  {
    MR_Word IdErrSpecs_39 = ((MR_Word) ((MR_hl_field(1, MatchingPredIdResult_23, 0))));
    MR_Word IdWarnSpecs_40 = ((MR_Word) ((MR_hl_field(1, MatchingPredIdResult_23, 1))));
    MR_Word Var_92;

    Var_92 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), IdErrSpecs_39);
    *STATE_VARIABLE_ErrSpecs_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_92, STATE_VARIABLE_ErrSpecs_0_43);
    *STATE_VARIABLE_WarnSpecs_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), IdWarnSpecs_40, STATE_VARIABLE_WarnSpecs_0_45);
    *STATE_VARIABLE_ModuleInfo_42 = STATE_VARIABLE_ModuleInfo_0_41;
  }
  else
  {
    MR_Word PredId_24 = ((MR_Word) ((MR_hl_field(0, MatchingPredIdResult_23, 0))));
    MR_Word SNA_27;
    MR_Word PredInfo0_28;
    MR_Word Procs0_29;
    MR_Word Procs_30;
    MR_Word PredInfo_34;

    {
      SNA_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SNA_27, 0) = ((MR_Box) (PredSymName_17));
      MR_hl_field(0, SNA_27, 1) = ((MR_Box) (UserArityInt_21));
    }
    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_41, PredId_24, &PredInfo0_28);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_28, &Procs0_29);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_proc__hlds__hlds_proc__type_ctor_info_proc_info_0), Procs0_29, &Procs_30);
    if ((MaybeModes_20 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_88;
      MR_Box conv3_PredInfo_34;
      MR_Box conv2_STATE_VARIABLE_ErrSpecs_44;

      {
        Var_88 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_88, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_impl_scalar_common_6[0]));
        MR_hl_field(0, Var_88, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_impl__add_pragma_require_tail_rec_7_p_0_1));
        MR_hl_field(0, Var_88, 2) = ((MR_Box) ((MR_Integer) 5));
        MR_hl_field(0, Var_88, 3) = ((MR_Box) (RequireTailrec_13));
        MR_hl_field(0, Var_88, 4) = ((MR_Box) (Context_14));
        MR_hl_field(0, Var_88, 5) = ((MR_Box) (MaybePredOrFunc_18));
        MR_hl_field(0, Var_88, 6) = ((MR_Box) (MaybeModes_20));
        MR_hl_field(0, Var_88, 7) = ((MR_Box) (SNA_27));
      }
      mercury__list__foldl2_6_p_0((MR_Word) (&hlds__make_hlds__add_pragma_impl_scalar_common_2[0]), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), (MR_Word) (&hlds__make_hlds__add_pragma_impl_scalar_common_1[1]), Var_88, Procs_30, ((MR_Box) (PredInfo0_28)), &conv3_PredInfo_34, ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_43)), &conv2_STATE_VARIABLE_ErrSpecs_44);
      PredInfo_34 = ((MR_Word) (conv3_PredInfo_34));
      *STATE_VARIABLE_ErrSpecs_44 = ((MR_Word) (conv2_STATE_VARIABLE_ErrSpecs_44));
    }
    else
    {
      MR_Word Modes_31 = ((MR_Word) ((MR_hl_field(1, MaybeModes_20, 0))));
      MR_Integer ProcId_32;

      succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(STATE_VARIABLE_ModuleInfo_0_41, Procs_30, Modes_31, &ProcId_32);
      if (succeeded)
      {
        MR_Word Proc_33;
        MR_Word Var_50;
        MR_Box conv4_Proc_33;

        mercury__map__lookup_3_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_proc__hlds__hlds_proc__type_ctor_info_proc_info_0), Procs0_29, ((MR_Box) (ProcId_32)), &conv4_Proc_33);
        Proc_33 = ((MR_Word) (conv4_Proc_33));
        {
          Var_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_50, 0) = ((MR_Box) (ProcId_32));
          MR_hl_field(0, Var_50, 1) = ((MR_Box) (Proc_33));
        }
        hlds__make_hlds__add_pragma_impl__add_pragma_require_tail_rec_proc_10_p_0(RequireTailrec_13, Context_14, MaybePredOrFunc_18, MaybeModes_20, SNA_27, Var_50, PredInfo0_28, &PredInfo_34, STATE_VARIABLE_ErrSpecs_0_43, STATE_VARIABLE_ErrSpecs_44);
      }
      else
      {
        MR_Word PredOrFunc_35;
        MR_Word PFNameArity_36;
        MR_Word Pieces_37;
        MR_Word Spec_38;
        MR_Word Var_56;
        MR_Word Var_57;
        MR_Word Var_65;
        MR_Word Var_70;
        MR_Word Var_71;
        MR_Word Var_72;
        MR_Word Var_75;
        MR_Word Var_76;

        PredInfo_34 = PredInfo0_28;
        PredOrFunc_35 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_34);
        {
          PFNameArity_36 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, PFNameArity_36, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_35));
          MR_hl_field(0, PFNameArity_36, 1) = ((MR_Box) (PredSymName_17));
          MR_hl_field(0, PFNameArity_36, 2) = ((MR_Box) (UserArity_19));
        }
        Var_57 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[36])));
        {
          Var_76 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_76, 0) = ((MR_Box) ((MR_Unsigned) 19U));
          MR_hl_field(3, Var_76, 1) = ((MR_Box) (PFNameArity_36));
        }
        {
          Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_75, 0) = ((MR_Box) (Var_76));
          MR_hl_field(1, Var_75, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[19])));
        }
        {
          Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_72, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[39])));
          MR_hl_field(1, Var_72, 1) = ((MR_Box) (Var_75));
        }
        Var_71 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_72);
        Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_71, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[20])));
        Var_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[38])), Var_70);
        Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_57, Var_65);
        Pieces_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[5])), Var_56);
        {
          Spec_38 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_38, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_impl.add_pragma_require_tail_rec\'/7"));
          MR_hl_field(0, Spec_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_38, 2) = ((MR_Box) ((MR_Unsigned) 48U));
          MR_hl_field(0, Spec_38, 3) = ((MR_Box) (Context_14));
          MR_hl_field(0, Spec_38, 4) = ((MR_Box) (Pieces_37));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_ErrSpecs_44 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_38));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_43));
        }
      }
    }
    hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_24, PredInfo_34, STATE_VARIABLE_ModuleInfo_0_41, STATE_VARIABLE_ModuleInfo_42);
    *STATE_VARIABLE_WarnSpecs_46 = STATE_VARIABLE_WarnSpecs_0_45;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_impl__add_pragma_require_tail_rec_proc_10_p_0(
  MR_Word RequireTailrec_11,
  MR_Word Context_12,
  MR_Word MaybePredOrFunc_13,
  MR_Word MaybeModes_14,
  MR_Word SNA_15,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_PredInfo_0_34,
  MR_Word * STATE_VARIABLE_PredInfo_35,
  MR_Word STATE_VARIABLE_ErrSpecs_0_36,
  MR_Word * STATE_VARIABLE_ErrSpecs_37)
{
  MR_Integer ProcId_16 = ((MR_Integer) ((MR_hl_field(0, HeadVar__6_6, 0))));
  MR_Word ProcInfo0_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_6, 1))));
  MR_Word MaybeRequireTailrecOrig_20;

  hlds__hlds_proc__proc_info_get_maybe_require_tailrec_info_2_p_0(ProcInfo0_17, &MaybeRequireTailrecOrig_20);
  if ((MaybeRequireTailrecOrig_20 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word ProcInfo_33;

    hlds__hlds_proc__proc_info_set_require_tailrec_info_3_p_0(RequireTailrec_11, ProcInfo0_17, &ProcInfo_33);
    hlds__hlds_pred__pred_info_set_proc_info_4_p_0(ProcId_16, ProcInfo_33, STATE_VARIABLE_PredInfo_0_34, STATE_VARIABLE_PredInfo_35);
    *STATE_VARIABLE_ErrSpecs_37 = STATE_VARIABLE_ErrSpecs_0_36;
  }
  else
  {
    MR_Word RequireTailrecOrig_21 = ((MR_Word) ((MR_hl_field(1, MaybeRequireTailrecOrig_20, 0))));
    MR_Word PorFPieces_22;
    MR_Word OneModeOfPieces_24;
    MR_Word MainPieces_26;
    MR_Word ContextOrig_28;
    MR_Word Spec_32;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_59;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_85;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_88;

    if ((MaybePredOrFunc_13 == (MR_Word) ((MR_Unsigned) 0U)))
      PorFPieces_22 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word PredOrFunc_23 = ((MR_Word) ((MR_hl_field(1, MaybePredOrFunc_13, 0))));
      MR_Word Var_38;

      {
        Var_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_38, 0) = ((MR_Box) ((MR_Unsigned) 31U));
        MR_hl_field(3, Var_38, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_23));
      }
      {
        PorFPieces_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, PorFPieces_22, 0) = ((MR_Box) (Var_38));
        MR_hl_field(1, PorFPieces_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    if ((MaybeModes_14 == (MR_Word) ((MR_Unsigned) 0U)))
      OneModeOfPieces_24 = (MR_Word) ((MR_Unsigned) 0U);
    else
      OneModeOfPieces_24 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[41]));
    Var_48 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[46])));
    {
      Var_69 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_69, 0) = ((MR_Box) ((MR_Unsigned) 14U));
      MR_hl_field(3, Var_69, 1) = ((MR_Box) (SNA_15));
    }
    {
      Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_68, 0) = ((MR_Box) (Var_69));
      MR_hl_field(1, Var_68, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[19])));
    }
    Var_67 = parse_tree__error_spec__color_as_subject_1_f_0(Var_68);
    Var_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_67, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[20])));
    Var_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PorFPieces_22, Var_66);
    Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), OneModeOfPieces_24, Var_65);
    Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[38])), Var_64);
    Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_48, Var_59);
    MainPieces_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[5])), Var_47);
    if (((MR_tag((MR_Word) RequireTailrecOrig_21)) == (MR_Integer) 0))
      ContextOrig_28 = ((MR_Word) ((MR_hl_field(0, RequireTailrecOrig_21, 0))));
    else
      ContextOrig_28 = ((MR_Word) ((MR_hl_field(1, RequireTailrecOrig_21, 1))));
    {
      Var_86 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_86, 0) = ((MR_Box) (Context_12));
      MR_hl_field(0, Var_86, 1) = ((MR_Box) (MainPieces_26));
    }
    {
      Var_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_88, 0) = ((MR_Box) (ContextOrig_28));
      MR_hl_field(0, Var_88, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[48])));
    }
    {
      Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_87, 0) = ((MR_Box) (Var_88));
      MR_hl_field(1, Var_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_85, 0) = ((MR_Box) (Var_86));
      MR_hl_field(1, Var_85, 1) = ((MR_Box) (Var_87));
    }
    {
      Spec_32 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Spec_32, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_impl.add_pragma_require_tail_rec_proc\'/10"));
      MR_hl_field(2, Spec_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(2, Spec_32, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(2, Spec_32, 3) = ((MR_Box) (Var_85));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_ErrSpecs_37 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_32));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_36));
    }
    *STATE_VARIABLE_PredInfo_35 = STATE_VARIABLE_PredInfo_0_34;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_impl__add_pragma_fact_table_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word ItemMercuryStatus_12,
  MR_Word PredStatus_13,
  MR_Word FTInfo_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_46,
  MR_Word * STATE_VARIABLE_ModuleInfo_47,
  MR_Word STATE_VARIABLE_ErrSpecs_0_48,
  MR_Word * STATE_VARIABLE_ErrSpecs_49,
  MR_Word STATE_VARIABLE_WarnSpecs_0_50,
  MR_Word * STATE_VARIABLE_WarnSpecs_51)
{
  MR_Word PredSpec_18 = ((MR_Word) ((MR_hl_field(0, FTInfo_14, 0))));
  MR_String FileName_19 = ((MR_String) ((MR_hl_field(0, FTInfo_14, 1))));
  MR_Word Context_20 = ((MR_Word) ((MR_hl_field(0, FTInfo_14, 2))));
  MR_Word PFU_22 = ((MR_Unsigned) ((MR_hl_field(0, PredSpec_18, 0))) & (MR_Integer) 3);
  MR_Word PredSymName_23 = ((MR_Word) ((MR_hl_field(0, PredSpec_18, 1))));
  MR_Word UserArity_24 = ((MR_Word) ((MR_hl_field(0, PredSpec_18, 2))));
  MR_Word MatchingPredIdResult_25;

  hlds__make_hlds__add_pragma_util__get_matching_pred_ids_9_p_0(STATE_VARIABLE_ModuleInfo_0_46, (MR_String) "fact_table", (MR_Integer) 1, (MR_Integer) 0, Context_20, PFU_22, PredSymName_23, UserArity_24, &MatchingPredIdResult_25);
  if (((MR_tag((MR_Word) MatchingPredIdResult_25)) == (MR_Integer) 1))
  {
    MR_Word IdErrSpecs_44 = ((MR_Word) ((MR_hl_field(1, MatchingPredIdResult_25, 0))));
    MR_Word IdWarnSpecs_45 = ((MR_Word) ((MR_hl_field(1, MatchingPredIdResult_25, 1))));
    MR_Word Var_72;

    Var_72 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), IdErrSpecs_44);
    *STATE_VARIABLE_ErrSpecs_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_72, STATE_VARIABLE_ErrSpecs_0_48);
    *STATE_VARIABLE_WarnSpecs_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), IdWarnSpecs_45, STATE_VARIABLE_WarnSpecs_0_50);
    *STATE_VARIABLE_ModuleInfo_47 = STATE_VARIABLE_ModuleInfo_0_46;
  }
  else
  {
    MR_Word PredId_26 = ((MR_Word) ((MR_hl_field(0, MatchingPredIdResult_25, 0))));
    MR_Word PredInfo0_29;
    MR_Word CheckResult_30;

    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_46, PredId_26, &PredInfo0_29);
    ll_backend__fact_table_check__fact_table_check_args_5_p_0(STATE_VARIABLE_ModuleInfo_0_46, Context_20, PredId_26, PredInfo0_29, &CheckResult_30);
    if (((MR_tag((MR_Word) CheckResult_30)) == (MR_Integer) 1))
    {
      MR_Word CheckSpecs_31 = ((MR_Word) ((MR_hl_field(1, CheckResult_30, 0))));
      MR_Word PredMarkers0_32;
      MR_Word PredMarkers_33;
      MR_Word PredInfo_34;

      *STATE_VARIABLE_ErrSpecs_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), CheckSpecs_31, STATE_VARIABLE_ErrSpecs_0_48);
      hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo0_29, &PredMarkers0_32);
      hlds__hlds_markers__add_marker_3_p_0((MR_Integer) 31, PredMarkers0_32, &PredMarkers_33);
      hlds__hlds_pred__pred_info_set_markers_3_p_0(PredMarkers_33, PredInfo0_29, &PredInfo_34);
      hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_26, PredInfo_34, STATE_VARIABLE_ModuleInfo_0_46, STATE_VARIABLE_ModuleInfo_47);
      *STATE_VARIABLE_WarnSpecs_51 = STATE_VARIABLE_WarnSpecs_0_50;
    }
    else
    {
      MR_Word GenInfo_35 = (MR_Word) ((MR_Word) (CheckResult_30));
      MR_String C_HeaderCode_37;
      MR_Integer PrimaryProcId_38;
      MR_Word PredInfo1_39;
      MR_Word ProcTable_40;
      MR_Word ProcIds_41;
      MR_Word PredOrFunc_42;
      MR_Word ForeignDeclCode_43;
      MR_Word STATE_VARIABLE_ErrSpecs_2_59;
      MR_Word STATE_VARIABLE_ModuleInfo_2_62;
      MR_Word Var_65;
      MR_Word STATE_VARIABLE_ModuleInfo_3_66;
      MR_Word STATE_VARIABLE_ModuleInfo_4_67;
      MR_Word PredInfo_74;

      ll_backend__fact_table_compile__fact_table_compile_facts_13_p_0(ProgressStream_11, STATE_VARIABLE_ModuleInfo_0_46, FileName_19, Context_20, GenInfo_35, &C_HeaderCode_37, &PrimaryProcId_38, PredInfo0_29, &PredInfo1_39, STATE_VARIABLE_ErrSpecs_0_48, &STATE_VARIABLE_ErrSpecs_2_59);
      hlds__make_hlds__add_pragma_util__add_marker_pred_info_3_p_0((MR_Integer) 8, PredInfo1_39, &PredInfo_74);
      hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_26, PredInfo_74, STATE_VARIABLE_ModuleInfo_0_46, &STATE_VARIABLE_ModuleInfo_2_62);
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_74, &ProcTable_40);
      ProcIds_41 = hlds__hlds_pred__pred_info_all_proc_ids_1_f_0(PredInfo_74);
      PredOrFunc_42 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_74);
      {
        Var_65 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_65, 0) = ((MR_Box) (C_HeaderCode_37));
      }
      {
        ForeignDeclCode_43 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ForeignDeclCode_43, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
        MR_hl_field(0, ForeignDeclCode_43, 1) = ((MR_Box) (Var_65));
        MR_hl_field(0, ForeignDeclCode_43, 2) = ((MR_Box) (Context_20));
      }
      hlds__hlds_module__module_add_foreign_decl_code_aux_3_p_0(ForeignDeclCode_43, STATE_VARIABLE_ModuleInfo_2_62, &STATE_VARIABLE_ModuleInfo_3_66);
      hlds__hlds_module__module_add_fact_table_file_3_p_0(FileName_19, STATE_VARIABLE_ModuleInfo_3_66, &STATE_VARIABLE_ModuleInfo_4_67);
      hlds__make_hlds__add_pragma_impl__add_fact_table_procs_16_p_0(ProgressStream_11, PredOrFunc_42, PredSymName_23, ItemMercuryStatus_12, PredStatus_13, ProcTable_40, PrimaryProcId_38, Context_20, GenInfo_35, ProcIds_41, STATE_VARIABLE_ModuleInfo_4_67, STATE_VARIABLE_ModuleInfo_47, STATE_VARIABLE_ErrSpecs_2_59, STATE_VARIABLE_ErrSpecs_49, STATE_VARIABLE_WarnSpecs_0_50, STATE_VARIABLE_WarnSpecs_51);
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_impl__add_fact_table_procs_16_p_0(
  MR_Word ProgressStream_1,
  MR_Word PredOrFunc_2,
  MR_Word SymName_3,
  MR_Word ItemMercuryStatus_4,
  MR_Word PredStatus_5,
  MR_Word ProcTable_6,
  MR_Integer PrimaryProcId_7,
  MR_Word Context_8,
  MR_Word GenInfo_9,
  MR_Word HeadVar__10_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12,
  MR_Word STATE_VARIABLE_ErrSpecs_0_13,
  MR_Word * STATE_VARIABLE_ErrSpecs_14,
  MR_Word STATE_VARIABLE_WarnSpecs_0_15,
  MR_Word * STATE_VARIABLE_WarnSpecs_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__10_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_WarnSpecs_16 = STATE_VARIABLE_WarnSpecs_0_15;
      *STATE_VARIABLE_ErrSpecs_14 = STATE_VARIABLE_ErrSpecs_0_13;
      *STATE_VARIABLE_ModuleInfo_12 = STATE_VARIABLE_ModuleInfo_0_11;
    }
    else
    {
      MR_Integer ProcId_44 = ((MR_Integer) ((MR_hl_field(1, HeadVar__10_10, 0))));
      MR_Word ProcIds_45 = ((MR_Word) ((MR_hl_field(1, HeadVar__10_10, 1))));
      MR_Word STATE_VARIABLE_ModuleInfo_1_55;
      MR_Word STATE_VARIABLE_ErrSpecs_1_56;
      MR_Word STATE_VARIABLE_WarnSpecs_1_57;
      MR_Word ProcInfo_58;
      MR_Word InstVarSet_59;
      MR_Word ProgVarSet_60;
      MR_Word PragmaVars_61;
      MR_String C_ProcCode_62;
      MR_String C_ExtraCode_63;
      MR_Word Attrs0_64;
      MR_Word Attrs1_65;
      MR_Word Attrs2_66;
      MR_Word Attrs3_67;
      MR_Word Attrs_68;
      MR_Word FCInfo_69;
      MR_Word Var_76;
      MR_Word STATE_VARIABLE_ModuleInfo_1_79;
      MR_Box conv0_ProcInfo_58;
      MR_Word next_value_of_HeadVar__10_10;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_11;
      MR_Word next_value_of_STATE_VARIABLE_ErrSpecs_0_13;
      MR_Word next_value_of_STATE_VARIABLE_WarnSpecs_0_15;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_proc__hlds__hlds_proc__type_ctor_info_proc_info_0), ProcTable_6, ((MR_Box) (ProcId_44)), &conv0_ProcInfo_58);
      ProcInfo_58 = ((MR_Word) (conv0_ProcInfo_58));
      hlds__hlds_proc__proc_info_get_inst_varset_2_p_0(ProcInfo_58, &InstVarSet_59);
      ll_backend__fact_table_gen__fact_table_generate_c_code_for_proc_10_p_0(STATE_VARIABLE_ModuleInfo_0_11, SymName_3, ProcId_44, PrimaryProcId_7, ProcInfo_58, GenInfo_9, &ProgVarSet_60, &PragmaVars_61, &C_ProcCode_62, &C_ExtraCode_63);
      Attrs0_64 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 0);
      parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 1, Attrs0_64, &Attrs1_65);
      parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, Attrs1_65, &Attrs2_66);
      parse_tree__prog_data_foreign__set_purity_3_p_0((MR_Integer) 0, Attrs2_66, &Attrs3_67);
      parse_tree__prog_data_foreign__set_refers_to_llds_stack_3_p_0((MR_Integer) 1, Attrs3_67, &Attrs_68);
      {
        Var_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_76, 0) = ((MR_Box) (C_ProcCode_62));
        MR_hl_field(0, Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        FCInfo_69 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, FCInfo_69, 0) = ((MR_Box) (Attrs_68));
        MR_hl_field(0, FCInfo_69, 1) = ((MR_Box) (SymName_3));
        MR_hl_field(0, FCInfo_69, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_2));
        MR_hl_field(0, FCInfo_69, 3) = ((MR_Box) (PragmaVars_61));
        MR_hl_field(0, FCInfo_69, 4) = ((MR_Box) (ProgVarSet_60));
        MR_hl_field(0, FCInfo_69, 5) = ((MR_Box) (InstVarSet_59));
        MR_hl_field(0, FCInfo_69, 6) = ((MR_Box) (Var_76));
        MR_hl_field(0, FCInfo_69, 7) = ((MR_Box) (Context_8));
        MR_hl_field(0, FCInfo_69, 8) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      hlds__make_hlds__add_foreign_proc__add_foreign_proc_10_p_0(ProgressStream_1, ItemMercuryStatus_4, PredStatus_5, FCInfo_69, STATE_VARIABLE_ModuleInfo_0_11, &STATE_VARIABLE_ModuleInfo_1_79, STATE_VARIABLE_ErrSpecs_0_13, &STATE_VARIABLE_ErrSpecs_1_56, STATE_VARIABLE_WarnSpecs_0_15, &STATE_VARIABLE_WarnSpecs_1_57);
      succeeded = (strcmp(C_ExtraCode_63, (MR_String) "") == 0);
      if (succeeded)
        STATE_VARIABLE_ModuleInfo_1_55 = STATE_VARIABLE_ModuleInfo_1_79;
      else
      {
        MR_Word ForeignBodyCode_70;
        MR_Word Var_81;

        {
          Var_81 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_81, 0) = ((MR_Box) (C_ExtraCode_63));
        }
        {
          ForeignBodyCode_70 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ForeignBodyCode_70, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(0, ForeignBodyCode_70, 1) = ((MR_Box) (Var_81));
          MR_hl_field(0, ForeignBodyCode_70, 2) = ((MR_Box) (Context_8));
        }
        hlds__hlds_module__module_add_foreign_body_code_3_p_0(ForeignBodyCode_70, STATE_VARIABLE_ModuleInfo_1_79, &STATE_VARIABLE_ModuleInfo_1_55);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__10_10 = ProcIds_45;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_11 = STATE_VARIABLE_ModuleInfo_1_55;
      next_value_of_STATE_VARIABLE_ErrSpecs_0_13 = STATE_VARIABLE_ErrSpecs_1_56;
      next_value_of_STATE_VARIABLE_WarnSpecs_0_15 = STATE_VARIABLE_WarnSpecs_1_57;
      HeadVar__10_10 = next_value_of_HeadVar__10_10;
      STATE_VARIABLE_ModuleInfo_0_11 = next_value_of_STATE_VARIABLE_ModuleInfo_0_11;
      STATE_VARIABLE_ErrSpecs_0_13 = next_value_of_STATE_VARIABLE_ErrSpecs_0_13;
      STATE_VARIABLE_WarnSpecs_0_15 = next_value_of_STATE_VARIABLE_WarnSpecs_0_15;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_impl__add_impl_markers_7_p_0_1(
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
  MR_Word conv2_STATE_VARIABLE_ModuleInfo_19;
  MR_Word conv1_STATE_VARIABLE_ErrSpecs_21;
  MR_Word conv0_STATE_VARIABLE_WarnSpecs_23;

  hlds__make_hlds__add_pragma_impl__add_impl_marker_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ModuleInfo_19, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_ErrSpecs_21, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_WarnSpecs_23);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ModuleInfo_19));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_ErrSpecs_21));
  *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_WarnSpecs_23));
}

void MR_CALL 
hlds__make_hlds__add_pragma_impl__add_impl_markers_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * STATE_VARIABLE_ModuleInfo_3,
  MR_Word STATE_VARIABLE_ErrSpecs_0_4,
  MR_Word * STATE_VARIABLE_ErrSpecs_5,
  MR_Word STATE_VARIABLE_WarnSpecs_0_6,
  MR_Word * STATE_VARIABLE_WarnSpecs_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_WarnSpecs_7 = STATE_VARIABLE_WarnSpecs_0_6;
      *STATE_VARIABLE_ErrSpecs_5 = STATE_VARIABLE_ErrSpecs_0_4;
      *STATE_VARIABLE_ModuleInfo_3 = STATE_VARIABLE_ModuleInfo_0_2;
    }
    else
    {
      MR_Word ImsList_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word ImsLists_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word ItemMercuryStatus_22 = ((MR_Word) ((MR_hl_field(0, ImsList_17, 0))));
      MR_Word Items_23 = ((MR_Word) ((MR_hl_field(0, ImsList_17, 1))));
      MR_Word Var_30;
      MR_Word STATE_VARIABLE_ModuleInfo_1_31;
      MR_Word STATE_VARIABLE_ErrSpecs_1_32;
      MR_Word STATE_VARIABLE_WarnSpecs_1_33;
      MR_Box conv5_STATE_VARIABLE_ModuleInfo_1_31;
      MR_Box conv4_STATE_VARIABLE_ErrSpecs_1_32;
      MR_Box conv3_STATE_VARIABLE_WarnSpecs_1_33;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ErrSpecs_0_4;
      MR_Word next_value_of_STATE_VARIABLE_WarnSpecs_0_6;

      {
        Var_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_30, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_impl_scalar_common_5[0]));
        MR_hl_field(0, Var_30, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_impl__add_impl_markers_7_p_0_1));
        MR_hl_field(0, Var_30, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_30, 3) = ((MR_Box) (ItemMercuryStatus_22));
      }
      mercury__list__foldl3_8_p_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_item_impl_marker_info_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__add_pragma_impl_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__add_pragma_impl_scalar_common_1[2]), Var_30, Items_23, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_2)), &conv5_STATE_VARIABLE_ModuleInfo_1_31, ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_4)), &conv4_STATE_VARIABLE_ErrSpecs_1_32, ((MR_Box) (STATE_VARIABLE_WarnSpecs_0_6)), &conv3_STATE_VARIABLE_WarnSpecs_1_33);
      STATE_VARIABLE_ModuleInfo_1_31 = ((MR_Word) (conv5_STATE_VARIABLE_ModuleInfo_1_31));
      STATE_VARIABLE_ErrSpecs_1_32 = ((MR_Word) (conv4_STATE_VARIABLE_ErrSpecs_1_32));
      STATE_VARIABLE_WarnSpecs_1_33 = ((MR_Word) (conv3_STATE_VARIABLE_WarnSpecs_1_33));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ImsLists_18;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_2 = STATE_VARIABLE_ModuleInfo_1_31;
      next_value_of_STATE_VARIABLE_ErrSpecs_0_4 = STATE_VARIABLE_ErrSpecs_1_32;
      next_value_of_STATE_VARIABLE_WarnSpecs_0_6 = STATE_VARIABLE_WarnSpecs_1_33;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ModuleInfo_0_2 = next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      STATE_VARIABLE_ErrSpecs_0_4 = next_value_of_STATE_VARIABLE_ErrSpecs_0_4;
      STATE_VARIABLE_WarnSpecs_0_6 = next_value_of_STATE_VARIABLE_WarnSpecs_0_6;
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma_impl__add_pragma_foreign_proc_export_5_p_0(
  MR_Word FPEInfo_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_43,
  MR_Word * STATE_VARIABLE_ModuleInfo_44,
  MR_Word STATE_VARIABLE_ErrSpecs_0_45,
  MR_Word * STATE_VARIABLE_ErrSpecs_46)
{
  MR_bool succeeded;
  MR_Word Origin_9 = ((MR_Word) ((MR_hl_field(0, FPEInfo_6, 0))));
  MR_Word Lang_10 = ((MR_Unsigned) ((MR_hl_field(0, FPEInfo_6, 1))) & (MR_Integer) 3);
  MR_Word PredNameModesPF_11 = ((MR_Word) ((MR_hl_field(0, FPEInfo_6, 2))));
  MR_String ExportedName_12 = ((MR_String) ((MR_hl_field(0, FPEInfo_6, 3))));
  MR_Word VarSet_13 = ((MR_Word) ((MR_hl_field(0, FPEInfo_6, 4))));
  MR_Word Context_14 = ((MR_Word) ((MR_hl_field(0, FPEInfo_6, 5))));
  MR_Word PredOrFunc_16 = ((MR_Unsigned) ((MR_hl_field(0, PredNameModesPF_11, 0))) & (MR_Integer) 1);
  MR_Word SymName_17 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_11, 1))));
  MR_Word ArgModes_18 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_11, 2))));
  MR_Word PredFormArity_19;
  MR_Word UserArity_20;
  MR_Word MaybePredId_21;

  PredFormArity_19 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgModes_18);
  parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_16, &UserArity_20, PredFormArity_19);
  hlds__make_hlds__add_pragma_util__look_up_pragma_pf_sym_arity_9_p_0(STATE_VARIABLE_ModuleInfo_0_43, (MR_Integer) 1, (MR_Integer) 1, Context_14, (MR_String) "foreign_export", PredOrFunc_16, SymName_17, UserArity_20, &MaybePredId_21);
  if (((MR_tag((MR_Word) MaybePredId_21)) == (MR_Integer) 0))
  {
    MR_Word Specs_42 = ((MR_Word) ((MR_hl_field(0, MaybePredId_21, 0))));

    if ((Origin_9 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ErrSpecs_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Specs_42, STATE_VARIABLE_ErrSpecs_0_45);
    else
      *STATE_VARIABLE_ErrSpecs_46 = STATE_VARIABLE_ErrSpecs_0_45;
    *STATE_VARIABLE_ModuleInfo_44 = STATE_VARIABLE_ModuleInfo_0_43;
  }
  else
  {
    MR_Word PredId_22 = ((MR_Word) ((MR_hl_field(1, MaybePredId_21, 0))));
    MR_Word PredInfo_23;
    MR_Word ProcTable_24;
    MR_Word ExistingProcs_25;
    MR_Integer ProcId_26;

    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_43, PredId_22, &PredInfo_23);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_23, &ProcTable_24);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_proc__hlds__hlds_proc__type_ctor_info_proc_info_0), ProcTable_24, &ExistingProcs_25);
    succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(STATE_VARIABLE_ModuleInfo_0_43, ExistingProcs_25, ArgModes_18, &ProcId_26);
    if (succeeded)
    {
      MR_Word ProcInfo0_27;
      MR_Word MaybeDetism_28;
      MR_Box conv0_ProcInfo0_27;
      MR_Word Detism_29;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_proc__hlds__hlds_proc__type_ctor_info_proc_info_0), ProcTable_24, ((MR_Box) (ProcId_26)), &conv0_ProcInfo0_27);
      ProcInfo0_27 = ((MR_Word) (conv0_ProcInfo0_27));
      hlds__hlds_proc__proc_info_get_declared_determinism_2_p_0(ProcInfo0_27, &MaybeDetism_28);
      succeeded = (MaybeDetism_28 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Detism_29 = ((MR_Word) ((MR_hl_field(1, MaybeDetism_28, 0))));
        switch (Detism_29) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 2:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 3:
            succeeded = MR_TRUE;
            break;
        }
      }
      if (succeeded)
      {
        MR_Word InstVarSet_30;
        MR_String ModeSubDeclStr_31;
        MR_Word Pieces_32;
        MR_Word Spec_33;
        MR_Word Var_55;
        MR_Word Var_56;
        MR_Word Var_64;
        MR_Word Var_69;
        MR_Word Var_70;
        MR_Word Var_75;
        MR_Word Var_83;
        MR_Word Var_84;
        MR_Word Var_85;
        MR_Word Var_86;

        mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), VarSet_13, &InstVarSet_30);
        ModeSubDeclStr_31 = parse_tree__parse_tree_out_pred_decl__mercury_mode_subdecl_to_string_6_f_0((MR_Integer) 1, PredOrFunc_16, InstVarSet_30, SymName_17, ArgModes_18, MaybeDetism_28);
        Var_56 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[9])));
        Var_70 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[13])));
        {
          Var_86 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_86, 0) = ((MR_Box) ((MR_Unsigned) 10U));
          MR_hl_field(3, Var_86, 1) = ((MR_Box) (ModeSubDeclStr_31));
        }
        {
          Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_85, 0) = ((MR_Box) (Var_86));
          MR_hl_field(1, Var_85, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[19])));
        }
        Var_84 = parse_tree__error_spec__color_as_subject_1_f_0(Var_85);
        Var_83 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_84, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[20])));
        Var_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[17])), Var_83);
        Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_70, Var_75);
        Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[11])), Var_69);
        Var_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_56, Var_64);
        Pieces_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[5])), Var_55);
        {
          Spec_33 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_33, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_impl.add_pragma_foreign_proc_export\'/5"));
          MR_hl_field(0, Spec_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_33, 2) = ((MR_Box) ((MR_Unsigned) 48U));
          MR_hl_field(0, Spec_33, 3) = ((MR_Box) (Context_14));
          MR_hl_field(0, Spec_33, 4) = ((MR_Box) (Pieces_32));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_ErrSpecs_46 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_33));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_45));
        }
        *STATE_VARIABLE_ModuleInfo_44 = STATE_VARIABLE_ModuleInfo_0_43;
      }
      else
      {
        MR_Word Globals_34;
        MR_Word ForeignLangs_35;
        MR_Word ProcInfo_39;
        MR_Word STATE_VARIABLE_ModuleInfo_1_98;

        hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_43, &Globals_34);
        libs__globals__get_backend_foreign_languages_2_p_0(Globals_34, &ForeignLangs_35);
        succeeded = mercury__list__member_2_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_10)), ForeignLangs_35);
        if (succeeded)
        {
          MR_Word PragmaExportedProcs0_36;
          MR_Word NewExportedProc_37;
          MR_Word PragmaExportedProcs_38;

          hlds__hlds_module__module_info_get_pragma_exported_procs_2_p_0(STATE_VARIABLE_ModuleInfo_0_43, &PragmaExportedProcs0_36);
          {
            NewExportedProc_37 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, NewExportedProc_37, 0) = (MR_Box) ((MR_Unsigned) (Lang_10));
            MR_hl_field(0, NewExportedProc_37, 1) = ((MR_Box) (PredId_22));
            MR_hl_field(0, NewExportedProc_37, 2) = ((MR_Box) (ProcId_26));
            MR_hl_field(0, NewExportedProc_37, 3) = ((MR_Box) (ExportedName_12));
            MR_hl_field(0, NewExportedProc_37, 4) = ((MR_Box) (Context_14));
          }
          PragmaExportedProcs_38 = mercury__cord__snoc_2_f_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0), PragmaExportedProcs0_36, ((MR_Box) (NewExportedProc_37)));
          hlds__hlds_module__module_info_set_pragma_exported_procs_3_p_0(PragmaExportedProcs_38, STATE_VARIABLE_ModuleInfo_0_43, &STATE_VARIABLE_ModuleInfo_1_98);
        }
        else
          STATE_VARIABLE_ModuleInfo_1_98 = STATE_VARIABLE_ModuleInfo_0_43;
        hlds__hlds_proc__proc_info_set_has_any_foreign_exports_3_p_0((MR_Integer) 1, ProcInfo0_27, &ProcInfo_39);
        hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(PredId_22, ProcId_26, PredInfo_23, ProcInfo_39, STATE_VARIABLE_ModuleInfo_1_98, STATE_VARIABLE_ModuleInfo_44);
        *STATE_VARIABLE_ErrSpecs_46 = STATE_VARIABLE_ErrSpecs_0_45;
      }
    }
    else
    {
      if ((Origin_9 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Spec_109;

        hlds__make_hlds_error__report_undeclared_mode_error_8_p_0(STATE_VARIABLE_ModuleInfo_0_43, PredId_22, PredInfo_23, VarSet_13, ArgModes_18, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[23])), Context_14, &Spec_109);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_ErrSpecs_46 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_109));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_45));
        }
      }
      else
        *STATE_VARIABLE_ErrSpecs_46 = STATE_VARIABLE_ErrSpecs_0_45;
      *STATE_VARIABLE_ModuleInfo_44 = STATE_VARIABLE_ModuleInfo_0_43;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_impl__add_impl_pragmas_tabled_10_p_0_1(
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
  MR_Word conv3_STATE_VARIABLE_ModuleInfo_31;
  MR_Word conv2_STATE_VARIABLE_QualInfo_33;
  MR_Word conv1_STATE_VARIABLE_ErrSpecs_35;
  MR_Word conv0_STATE_VARIABLE_WarnSpecs_37;

  hlds__make_hlds__add_pragma_impl__add_impl_pragma_tabled_11_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_ModuleInfo_31, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_QualInfo_33, ((MR_Word) (wrapper_arg_6)), &conv1_STATE_VARIABLE_ErrSpecs_35, ((MR_Word) (wrapper_arg_8)), &conv0_STATE_VARIABLE_WarnSpecs_37);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_ModuleInfo_31));
  *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_QualInfo_33));
  *wrapper_arg_7 = ((MR_Box) (conv1_STATE_VARIABLE_ErrSpecs_35));
  *wrapper_arg_9 = ((MR_Box) (conv0_STATE_VARIABLE_WarnSpecs_37));
}

void MR_CALL 
hlds__make_hlds__add_pragma_impl__add_impl_pragmas_tabled_10_p_0(
  MR_Word ProgressStream_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4,
  MR_Word STATE_VARIABLE_QualInfo_0_5,
  MR_Word * STATE_VARIABLE_QualInfo_6,
  MR_Word STATE_VARIABLE_ErrSpecs_0_7,
  MR_Word * STATE_VARIABLE_ErrSpecs_8,
  MR_Word STATE_VARIABLE_WarnSpecs_0_9,
  MR_Word * STATE_VARIABLE_WarnSpecs_10)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_WarnSpecs_10 = STATE_VARIABLE_WarnSpecs_0_9;
      *STATE_VARIABLE_ErrSpecs_8 = STATE_VARIABLE_ErrSpecs_0_7;
      *STATE_VARIABLE_QualInfo_6 = STATE_VARIABLE_QualInfo_0_5;
      *STATE_VARIABLE_ModuleInfo_4 = STATE_VARIABLE_ModuleInfo_0_3;
    }
    else
    {
      MR_Word ImsList_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word ImsLists_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word ItemMercuryStatus_31 = ((MR_Word) ((MR_hl_field(0, ImsList_25, 0))));
      MR_Word Items_32 = ((MR_Word) ((MR_hl_field(0, ImsList_25, 1))));
      MR_Word Var_41;
      MR_Word STATE_VARIABLE_ModuleInfo_1_42;
      MR_Word STATE_VARIABLE_QualInfo_1_43;
      MR_Word STATE_VARIABLE_ErrSpecs_1_44;
      MR_Word STATE_VARIABLE_WarnSpecs_1_45;
      MR_Box conv7_STATE_VARIABLE_ModuleInfo_1_42;
      MR_Box conv6_STATE_VARIABLE_QualInfo_1_43;
      MR_Box conv5_STATE_VARIABLE_ErrSpecs_1_44;
      MR_Box conv4_STATE_VARIABLE_WarnSpecs_1_45;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_3;
      MR_Word next_value_of_STATE_VARIABLE_QualInfo_0_5;
      MR_Word next_value_of_STATE_VARIABLE_ErrSpecs_0_7;
      MR_Word next_value_of_STATE_VARIABLE_WarnSpecs_0_9;

      {
        Var_41 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_41, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_impl_scalar_common_4[1]));
        MR_hl_field(0, Var_41, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_impl__add_impl_pragmas_tabled_10_p_0_1));
        MR_hl_field(0, Var_41, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_41, 3) = ((MR_Box) (ProgressStream_1));
        MR_hl_field(0, Var_41, 4) = ((MR_Box) (ItemMercuryStatus_31));
      }
      mercury__list__foldl4_10_p_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_impl_pragma_tabled_info_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0), (MR_Word) (&hlds__make_hlds__add_pragma_impl_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__add_pragma_impl_scalar_common_1[2]), Var_41, Items_32, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_3)), &conv7_STATE_VARIABLE_ModuleInfo_1_42, ((MR_Box) (STATE_VARIABLE_QualInfo_0_5)), &conv6_STATE_VARIABLE_QualInfo_1_43, ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_7)), &conv5_STATE_VARIABLE_ErrSpecs_1_44, ((MR_Box) (STATE_VARIABLE_WarnSpecs_0_9)), &conv4_STATE_VARIABLE_WarnSpecs_1_45);
      STATE_VARIABLE_ModuleInfo_1_42 = ((MR_Word) (conv7_STATE_VARIABLE_ModuleInfo_1_42));
      STATE_VARIABLE_QualInfo_1_43 = ((MR_Word) (conv6_STATE_VARIABLE_QualInfo_1_43));
      STATE_VARIABLE_ErrSpecs_1_44 = ((MR_Word) (conv5_STATE_VARIABLE_ErrSpecs_1_44));
      STATE_VARIABLE_WarnSpecs_1_45 = ((MR_Word) (conv4_STATE_VARIABLE_WarnSpecs_1_45));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ImsLists_26;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_3 = STATE_VARIABLE_ModuleInfo_1_42;
      next_value_of_STATE_VARIABLE_QualInfo_0_5 = STATE_VARIABLE_QualInfo_1_43;
      next_value_of_STATE_VARIABLE_ErrSpecs_0_7 = STATE_VARIABLE_ErrSpecs_1_44;
      next_value_of_STATE_VARIABLE_WarnSpecs_0_9 = STATE_VARIABLE_WarnSpecs_1_45;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_ModuleInfo_0_3 = next_value_of_STATE_VARIABLE_ModuleInfo_0_3;
      STATE_VARIABLE_QualInfo_0_5 = next_value_of_STATE_VARIABLE_QualInfo_0_5;
      STATE_VARIABLE_ErrSpecs_0_7 = next_value_of_STATE_VARIABLE_ErrSpecs_0_7;
      STATE_VARIABLE_WarnSpecs_0_9 = next_value_of_STATE_VARIABLE_WarnSpecs_0_9;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_impl__add_impl_pragmas_10_p_0_1(
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
  MR_Word conv3_STATE_VARIABLE_PragmaTabledCord_40;
  MR_Word conv2_STATE_VARIABLE_ModuleInfo_42;
  MR_Word conv1_STATE_VARIABLE_ErrSpecs_44;
  MR_Word conv0_STATE_VARIABLE_WarnSpecs_46;

  hlds__make_hlds__add_pragma_impl__add_impl_pragma_11_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_PragmaTabledCord_40, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_ModuleInfo_42, ((MR_Word) (wrapper_arg_6)), &conv1_STATE_VARIABLE_ErrSpecs_44, ((MR_Word) (wrapper_arg_8)), &conv0_STATE_VARIABLE_WarnSpecs_46);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_PragmaTabledCord_40));
  *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_ModuleInfo_42));
  *wrapper_arg_7 = ((MR_Box) (conv1_STATE_VARIABLE_ErrSpecs_44));
  *wrapper_arg_9 = ((MR_Box) (conv0_STATE_VARIABLE_WarnSpecs_46));
}

void MR_CALL 
hlds__make_hlds__add_pragma_impl__add_impl_pragmas_10_p_0(
  MR_Word ProgressStream_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_PragmaTabledListCord_0_3,
  MR_Word * STATE_VARIABLE_PragmaTabledListCord_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_5,
  MR_Word * STATE_VARIABLE_ModuleInfo_6,
  MR_Word STATE_VARIABLE_ErrSpecs_0_7,
  MR_Word * STATE_VARIABLE_ErrSpecs_8,
  MR_Word STATE_VARIABLE_WarnSpecs_0_9,
  MR_Word * STATE_VARIABLE_WarnSpecs_10)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_WarnSpecs_10 = STATE_VARIABLE_WarnSpecs_0_9;
      *STATE_VARIABLE_ErrSpecs_8 = STATE_VARIABLE_ErrSpecs_0_7;
      *STATE_VARIABLE_ModuleInfo_6 = STATE_VARIABLE_ModuleInfo_0_5;
      *STATE_VARIABLE_PragmaTabledListCord_4 = STATE_VARIABLE_PragmaTabledListCord_0_3;
    }
    else
    {
      MR_Word ImsList_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word ImsLists_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word ItemMercuryStatus_31 = ((MR_Word) ((MR_hl_field(0, ImsList_25, 0))));
      MR_Word Items_32 = ((MR_Word) ((MR_hl_field(0, ImsList_25, 1))));
      MR_Word PragmaTabledCord_33;
      MR_Word PragmaTabledList_34;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word STATE_VARIABLE_ModuleInfo_1_48;
      MR_Word STATE_VARIABLE_ErrSpecs_1_49;
      MR_Word STATE_VARIABLE_WarnSpecs_1_50;
      MR_Word STATE_VARIABLE_PragmaTabledListCord_1_51;
      MR_Box conv7_PragmaTabledCord_33;
      MR_Box conv6_STATE_VARIABLE_ModuleInfo_1_48;
      MR_Box conv5_STATE_VARIABLE_ErrSpecs_1_49;
      MR_Box conv4_STATE_VARIABLE_WarnSpecs_1_50;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_PragmaTabledListCord_0_3;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_5;
      MR_Word next_value_of_STATE_VARIABLE_ErrSpecs_0_7;
      MR_Word next_value_of_STATE_VARIABLE_WarnSpecs_0_9;

      {
        Var_46 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_46, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_impl_scalar_common_4[0]));
        MR_hl_field(0, Var_46, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_impl__add_impl_pragmas_10_p_0_1));
        MR_hl_field(0, Var_46, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_46, 3) = ((MR_Box) (ProgressStream_1));
        MR_hl_field(0, Var_46, 4) = ((MR_Box) (ItemMercuryStatus_31));
      }
      Var_47 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_impl_pragma_tabled_info_0));
      mercury__list__foldl4_10_p_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_item_impl_pragma_info_0), (MR_Word) (&hlds__make_hlds__add_pragma_impl_scalar_common_1[0]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__add_pragma_impl_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__add_pragma_impl_scalar_common_1[2]), Var_46, Items_32, ((MR_Box) (Var_47)), &conv7_PragmaTabledCord_33, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_5)), &conv6_STATE_VARIABLE_ModuleInfo_1_48, ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_7)), &conv5_STATE_VARIABLE_ErrSpecs_1_49, ((MR_Box) (STATE_VARIABLE_WarnSpecs_0_9)), &conv4_STATE_VARIABLE_WarnSpecs_1_50);
      PragmaTabledCord_33 = ((MR_Word) (conv7_PragmaTabledCord_33));
      STATE_VARIABLE_ModuleInfo_1_48 = ((MR_Word) (conv6_STATE_VARIABLE_ModuleInfo_1_48));
      STATE_VARIABLE_ErrSpecs_1_49 = ((MR_Word) (conv5_STATE_VARIABLE_ErrSpecs_1_49));
      STATE_VARIABLE_WarnSpecs_1_50 = ((MR_Word) (conv4_STATE_VARIABLE_WarnSpecs_1_50));
      PragmaTabledList_34 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_impl_pragma_tabled_info_0), PragmaTabledCord_33);
      if ((PragmaTabledList_34 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_PragmaTabledListCord_1_51 = STATE_VARIABLE_PragmaTabledListCord_0_3;
      else
      {
        MR_Word SubList_37;

        {
          SubList_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, SubList_37, 0) = ((MR_Box) (ItemMercuryStatus_31));
          MR_hl_field(0, SubList_37, 1) = ((MR_Box) (PragmaTabledList_34));
        }
        mercury__cord__snoc_3_p_0((MR_Word) (&hlds__make_hlds__add_pragma_impl_scalar_common_1[3]), ((MR_Box) (SubList_37)), STATE_VARIABLE_PragmaTabledListCord_0_3, &STATE_VARIABLE_PragmaTabledListCord_1_51);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ImsLists_26;
      next_value_of_STATE_VARIABLE_PragmaTabledListCord_0_3 = STATE_VARIABLE_PragmaTabledListCord_1_51;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_5 = STATE_VARIABLE_ModuleInfo_1_48;
      next_value_of_STATE_VARIABLE_ErrSpecs_0_7 = STATE_VARIABLE_ErrSpecs_1_49;
      next_value_of_STATE_VARIABLE_WarnSpecs_0_9 = STATE_VARIABLE_WarnSpecs_1_50;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_PragmaTabledListCord_0_3 = next_value_of_STATE_VARIABLE_PragmaTabledListCord_0_3;
      STATE_VARIABLE_ModuleInfo_0_5 = next_value_of_STATE_VARIABLE_ModuleInfo_0_5;
      STATE_VARIABLE_ErrSpecs_0_7 = next_value_of_STATE_VARIABLE_ErrSpecs_0_7;
      STATE_VARIABLE_WarnSpecs_0_9 = next_value_of_STATE_VARIABLE_WarnSpecs_0_9;
      continue;
    }
    break;
  }
}

void mercury__hlds__make_hlds__add_pragma_impl__init(void)
{
}

void mercury__hlds__make_hlds__add_pragma_impl__init_type_tables(void)
{
}

void mercury__hlds__make_hlds__add_pragma_impl__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__make_hlds__add_pragma_impl__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module hlds.make_hlds.add_pragma_impl.
