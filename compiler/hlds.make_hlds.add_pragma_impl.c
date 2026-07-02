/*
** Automatically generated from `add_pragma_impl.m'
** by the Mercury compiler,
** version rotd-2026-07-02
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
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_hlds.mih"
#include "hlds.make_hlds_error.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
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
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_impl__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_impl_pragma_tabled_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_impl__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_impl__maybe__pti_maybe_1__plain_mdbcomp__prim_data__type_ctor_info_pred_or_func_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma_impl__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_impl__maybe__pti_maybe_1__plain_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma_impl__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

static void MR_CALL 
hlds__make_hlds__add_pragma_impl__add_impl_marker_6_p_0(
  MR_Word ItemMercuryStatus_7,
  MR_Word ImplMarker_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * STATE_VARIABLE_ModuleInfo_16,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18);

static void MR_CALL 
hlds__make_hlds__add_pragma_impl__add_impl_pragma_tabled_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word ItemMercuryStatus_11,
  MR_Word Tabled_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_27,
  MR_Word * STATE_VARIABLE_ModuleInfo_28,
  MR_Word STATE_VARIABLE_QualInfo_0_29,
  MR_Word * STATE_VARIABLE_QualInfo_30,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32);

static void MR_CALL 
hlds__make_hlds__add_pragma_impl__check_required_feature_5_p_0(
  MR_Word Globals_6,
  MR_Word Context_7,
  MR_Word Feature_8,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24);

static void MR_CALL 
hlds__make_hlds__add_pragma_impl__mark_pred_as_external_6_p_0(
  MR_Word Context_7,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_23,
  MR_Word * STATE_VARIABLE_ModuleInfo_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26);

static void MR_CALL 
hlds__make_hlds__add_pragma_impl__add_impl_pragma_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__add_pragma_impl__add_impl_pragma_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__make_hlds__add_pragma_impl__add_impl_pragma_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word ItemMercuryStatus_11,
  MR_Word Pragma_12,
  MR_Word STATE_VARIABLE_PragmaTabledCord_0_36,
  MR_Word * STATE_VARIABLE_PragmaTabledCord_37,
  MR_Word STATE_VARIABLE_ModuleInfo_0_38,
  MR_Word * STATE_VARIABLE_ModuleInfo_39,
  MR_Word STATE_VARIABLE_Specs_0_40,
  MR_Word * STATE_VARIABLE_Specs_41);

static void MR_CALL 
hlds__make_hlds__add_pragma_impl__add_pragma_require_tail_rec_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__make_hlds__add_pragma_impl__add_pragma_require_tail_rec_5_p_0(
  MR_Word Pragma_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_37,
  MR_Word * STATE_VARIABLE_ModuleInfo_38,
  MR_Word STATE_VARIABLE_Specs_0_39,
  MR_Word * STATE_VARIABLE_Specs_40);

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
  MR_Word STATE_VARIABLE_Specs_0_36,
  MR_Word * STATE_VARIABLE_Specs_37);

static void MR_CALL 
hlds__make_hlds__add_pragma_impl__add_pragma_fact_table_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word ItemMercuryStatus_10,
  MR_Word PredStatus_11,
  MR_Word FTInfo_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_42,
  MR_Word * STATE_VARIABLE_ModuleInfo_43,
  MR_Word STATE_VARIABLE_Specs_0_44,
  MR_Word * STATE_VARIABLE_Specs_45);

static void MR_CALL 
hlds__make_hlds__add_pragma_impl__add_fact_table_procs_14_p_0(
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
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14);

static void MR_CALL 
hlds__make_hlds__add_pragma_impl__add_impl_markers_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__make_hlds__add_pragma_impl__add_impl_pragmas_tabled_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
hlds__make_hlds__add_pragma_impl__add_impl_pragmas_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);


static /* final */ const MR_Box hlds__make_hlds__add_pragma_impl_scalar_common_1[106][2];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_impl_scalar_common_2[1][3];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_impl_scalar_common_3[1][1];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_impl_scalar_common_4[2][12];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_impl_scalar_common_5[2][9];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_impl_scalar_common_6[1][13];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_impl_scalar_common_7[1][8];




static /* final */ const MR_Box hlds__make_hlds__add_pragma_impl_scalar_common_1[106][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_impl_pragma_tabled_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_impl_pragma_tabled_info_0))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[3]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declarations"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[5]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_String) "foreign_export"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[6])))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "are"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[9]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "not allowed"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[11]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "more than once, such as"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[13]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for procedures that can succeed"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[14])))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[17]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  19 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[20]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[21])))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "pragma"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[23]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_String) "external_func"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[24])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_String) "external_pred"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[24])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "has clauses, so"))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[30]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "it cannot be marked as external."))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[32]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_String) "require_tail_recursion"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[21])))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[36]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "undeclared mode of"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "one of mode of"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[39]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "pragmas"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[41]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[42])))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "conflicting"))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[43])))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The earlier pragma is here."))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[19])))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: this module must be compiled"))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[48]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "supports concurrent execution."))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[50]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in a grade that"))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[51])))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "uses conservative garbage collection."))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[54]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[55])))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "uses double precision floats."))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[57]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[58])))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[19])))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "spf"))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[60])))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "do not contain the grade modifier"))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[62])))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Grades that use double precision floats"))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[65]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[64])))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "supports memoisation."))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[67]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[68])))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "supports executing conjuntions in parallel."))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[70]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[71])))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "uses single precision floats."))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[73]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[74])))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "contain the grade modifier"))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[62])))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Grades that use single precision floats"))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[78]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[77])))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "sequential semantics."))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[80]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "using the strict"))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[82]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[81])))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "supports trailing."))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[84]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[85])))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "tr"))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[87]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[60])))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the grade modifier"))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[89]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[88])))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Grades that support trailing contain"))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[91]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[90])))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "requires type_ctor_layout structures."))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[93]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Don\'t use --no-type-layout to disable them."))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[95]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[19])))
  },
  /* row  97 */
  {
    ((MR_Box) ((MR_Integer) 24)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  98 */
  {
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[97])))
  },
  /* row  99 */
  {
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 100 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[66])))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[100]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 102 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[79])))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[102]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 104 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[92])))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[104]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_impl_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_impl_scalar_common_3[1][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 0U) },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_impl_scalar_common_4[2][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_pragma_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_impl__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_impl_pragma_tabled_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_impl__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_impl_pragma_tabled_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_impl__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_impl__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_impl_pragma_tabled_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_impl__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_impl__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_impl_scalar_common_5[2][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_marker_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_impl__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_impl__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_impl__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_impl__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
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
    ((MR_Box) (&hlds__make_hlds__add_pragma_impl__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_impl__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_impl__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_impl_scalar_common_7[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_required_feature_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_impl__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_impl__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_impl__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_impl_pragma_tabled_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_impl_pragma_tabled_info_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_impl__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
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

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma_impl__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)
  }
};

static void MR_CALL 
hlds__make_hlds__add_pragma_impl__add_impl_marker_6_p_0(
  MR_Word ItemMercuryStatus_7,
  MR_Word ImplMarker_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * STATE_VARIABLE_ModuleInfo_16,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18)
{
  MR_Word MarkerKind_11 = ((MR_Unsigned) ((MR_hl_field(0, ImplMarker_8, 0))) & (MR_Integer) 15);
  MR_Word PFUNameArity_12 = ((MR_Word) ((MR_hl_field(0, ImplMarker_8, 1))));
  MR_Word Context_13 = ((MR_Word) ((MR_hl_field(0, ImplMarker_8, 2))));

  switch (MarkerKind_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      hlds__make_hlds__add_pragma_util__add_pred_marker_11_p_0(PFUNameArity_12, (MR_String) "consider_used", (MR_Integer) 1, ItemMercuryStatus_7, Context_13, (MR_Integer) 10, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_0_15, STATE_VARIABLE_ModuleInfo_16, STATE_VARIABLE_Specs_0_17, STATE_VARIABLE_Specs_18);
      break;
    case (MR_Integer) 0:
      hlds__make_hlds__add_pragma_util__add_pred_marker_11_p_0(PFUNameArity_12, (MR_String) "inline", (MR_Integer) 1, ItemMercuryStatus_7, Context_13, (MR_Integer) 6, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[98])), STATE_VARIABLE_ModuleInfo_0_15, STATE_VARIABLE_ModuleInfo_16, STATE_VARIABLE_Specs_0_17, STATE_VARIABLE_Specs_18);
      break;
    case (MR_Integer) 3:
      {
        MR_Word STATE_VARIABLE_ModuleInfo_4_47;
        MR_Word STATE_VARIABLE_Specs_4_48;

        hlds__make_hlds__add_pragma_util__add_pred_marker_11_p_0(PFUNameArity_12, (MR_String) "mode_check_clauses", (MR_Integer) 1, ItemMercuryStatus_7, Context_13, (MR_Integer) 24, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_0_15, &STATE_VARIABLE_ModuleInfo_4_47, STATE_VARIABLE_Specs_0_17, &STATE_VARIABLE_Specs_4_48);
        hlds__make_hlds__add_pragma_util__add_pred_marker_11_p_0(PFUNameArity_12, (MR_String) "mode_check_clauses", (MR_Integer) 1, ItemMercuryStatus_7, Context_13, (MR_Integer) 9, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[99])), STATE_VARIABLE_ModuleInfo_4_47, STATE_VARIABLE_ModuleInfo_16, STATE_VARIABLE_Specs_4_48, STATE_VARIABLE_Specs_18);
      }
      break;
    case (MR_Integer) 4:
      hlds__make_hlds__add_pragma_util__add_pred_marker_11_p_0(PFUNameArity_12, (MR_String) "no_determinism_warning", (MR_Integer) 1, ItemMercuryStatus_7, Context_13, (MR_Integer) 5, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_0_15, STATE_VARIABLE_ModuleInfo_16, STATE_VARIABLE_Specs_0_17, STATE_VARIABLE_Specs_18);
      break;
    case (MR_Integer) 1:
      hlds__make_hlds__add_pragma_util__add_pred_marker_11_p_0(PFUNameArity_12, (MR_String) "no_inline", (MR_Integer) 1, ItemMercuryStatus_7, Context_13, (MR_Integer) 8, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[99])), STATE_VARIABLE_ModuleInfo_0_15, STATE_VARIABLE_ModuleInfo_16, STATE_VARIABLE_Specs_0_17, STATE_VARIABLE_Specs_18);
      break;
    case (MR_Integer) 7:
      hlds__make_hlds__add_pragma_util__add_pred_marker_11_p_0(PFUNameArity_12, (MR_String) "promise_equivalent_clauses", (MR_Integer) 1, ItemMercuryStatus_7, Context_13, (MR_Integer) 19, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_0_15, STATE_VARIABLE_ModuleInfo_16, STATE_VARIABLE_Specs_0_17, STATE_VARIABLE_Specs_18);
      break;
    case (MR_Integer) 5:
      hlds__make_hlds__add_pragma_util__add_pred_marker_11_p_0(PFUNameArity_12, (MR_String) "promise_pure", (MR_Integer) 1, ItemMercuryStatus_7, Context_13, (MR_Integer) 17, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_0_15, STATE_VARIABLE_ModuleInfo_16, STATE_VARIABLE_Specs_0_17, STATE_VARIABLE_Specs_18);
      break;
    case (MR_Integer) 6:
      hlds__make_hlds__add_pragma_util__add_pred_marker_11_p_0(PFUNameArity_12, (MR_String) "promise_semipure", (MR_Integer) 1, ItemMercuryStatus_7, Context_13, (MR_Integer) 18, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_0_15, STATE_VARIABLE_ModuleInfo_16, STATE_VARIABLE_Specs_0_17, STATE_VARIABLE_Specs_18);
      break;
    case (MR_Integer) 8:
      hlds__make_hlds__add_pragma_util__add_pred_marker_11_p_0(PFUNameArity_12, (MR_String) "require_switch_arms_in_type_order", (MR_Integer) 1, ItemMercuryStatus_7, Context_13, (MR_Integer) 11, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_0_15, STATE_VARIABLE_ModuleInfo_16, STATE_VARIABLE_Specs_0_17, STATE_VARIABLE_Specs_18);
      break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_impl__add_impl_pragma_tabled_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word ItemMercuryStatus_11,
  MR_Word Tabled_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_27,
  MR_Word * STATE_VARIABLE_ModuleInfo_28,
  MR_Word STATE_VARIABLE_QualInfo_0_29,
  MR_Word * STATE_VARIABLE_QualInfo_30,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32)
{
  MR_Word Globals_16;
  MR_Word TypeLayout_17;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_27, &Globals_16);
  libs__globals__lookup_bool_option_3_p_0(Globals_16, (MR_Integer) 749, &TypeLayout_17);
  switch (TypeLayout_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word TabledMethod_19 = ((MR_Word) ((MR_hl_field(0, Tabled_12, 0))));
        MR_Word Context_22 = ((MR_Word) ((MR_hl_field(0, Tabled_12, 3))));
        MR_String PragmaName_24;
        MR_Word Pieces_25;
        MR_Word Spec_26;
        MR_Word Var_41;
        MR_Word Var_42;
        MR_Word Var_43;
        MR_Word Var_44;
        MR_Word Var_49;
        MR_Word Var_50;

        PragmaName_24 = parse_tree__parse_tree_out_misc__tabled_eval_method_to_pragma_name_1_f_0(TabledMethod_19);
        {
          Var_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_44, 0) = ((MR_Box) ((MR_Unsigned) 36U));
          MR_hl_field(3, Var_44, 1) = ((MR_Box) (PragmaName_24));
        }
        {
          Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_43, 0) = ((MR_Box) (Var_44));
          MR_hl_field(1, Var_43, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[21])));
        }
        Var_42 = parse_tree__error_spec__color_as_subject_1_f_0(Var_43);
        Var_50 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[94])));
        Var_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_50, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[96])));
        Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_42, Var_49);
        Pieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[4])), Var_41);
        {
          Spec_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_26, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_impl.add_impl_pragma_tabled\'/9"));
          MR_hl_field(0, Spec_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_26, 2) = ((MR_Box) ((MR_Unsigned) 44U));
          MR_hl_field(0, Spec_26, 3) = ((MR_Box) (Context_22));
          MR_hl_field(0, Spec_26, 4) = ((MR_Box) (Pieces_25));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_32 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_26));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_31));
        }
        *STATE_VARIABLE_ModuleInfo_28 = STATE_VARIABLE_ModuleInfo_0_27;
        *STATE_VARIABLE_QualInfo_30 = STATE_VARIABLE_QualInfo_0_29;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word PredStatus_18;

        hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_11, &PredStatus_18);
        hlds__make_hlds__add_pragma_tabling__module_add_pragma_tabled_10_p_0(ProgressStream_10, Tabled_12, ItemMercuryStatus_11, PredStatus_18, STATE_VARIABLE_ModuleInfo_0_27, STATE_VARIABLE_ModuleInfo_28, STATE_VARIABLE_QualInfo_0_29, STATE_VARIABLE_QualInfo_30, STATE_VARIABLE_Specs_0_31, STATE_VARIABLE_Specs_32);
      }
      break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_impl__check_required_feature_5_p_0(
  MR_Word Globals_6,
  MR_Word Context_7,
  MR_Word Feature_8,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24)
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

              Var_30 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[53])));
              Var_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_30, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[19])));
              Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[49])), Var_29);
              {
                Spec_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Spec_12, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_impl.check_required_feature\'/5"));
                MR_hl_field(0, Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, Spec_12, 2) = ((MR_Box) ((MR_Unsigned) 44U));
                MR_hl_field(0, Spec_12, 3) = ((MR_Box) (Context_7));
                MR_hl_field(0, Spec_12, 4) = ((MR_Box) (Pieces_11));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Specs_24 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Spec_12));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_23));
              }
            }
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
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

              Var_244 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[56])));
              Var_243 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_244, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[19])));
              Pieces_308 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[49])), Var_243);
              {
                Spec_309 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Spec_309, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_impl.check_required_feature\'/5"));
                MR_hl_field(0, Spec_309, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, Spec_309, 2) = ((MR_Box) ((MR_Unsigned) 44U));
                MR_hl_field(0, Spec_309, 3) = ((MR_Box) (Context_7));
                MR_hl_field(0, Spec_309, 4) = ((MR_Box) (Pieces_308));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Specs_24 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Spec_309));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_23));
              }
            }
            break;
          case (MR_Integer) 0:
            *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
            break;
          case (MR_Integer) 2:
            *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
            break;
          case (MR_Integer) 3:
            *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
            break;
          case (MR_Integer) 4:
            *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
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
            *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
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

              Var_94 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[59])));
              Var_93 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_94, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[19])));
              Pieces_265 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[49])), Var_93);
              {
                Var_120 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_120, 0) = ((MR_Box) (Pieces_265));
              }
              {
                Var_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_119, 0) = ((MR_Box) (Var_120));
                MR_hl_field(1, Var_119, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[101])));
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
                MR_hl_field(2, Spec_266, 2) = ((MR_Box) ((MR_Unsigned) 44U));
                MR_hl_field(2, Spec_266, 3) = ((MR_Box) (Var_128));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Specs_24 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Spec_266));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_23));
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

              Var_138 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[69])));
              Var_137 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_138, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[19])));
              Pieces_278 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[49])), Var_137);
              {
                Spec_279 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Spec_279, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_impl.check_required_feature\'/5"));
                MR_hl_field(0, Spec_279, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, Spec_279, 2) = ((MR_Box) ((MR_Unsigned) 44U));
                MR_hl_field(0, Spec_279, 3) = ((MR_Box) (Context_7));
                MR_hl_field(0, Spec_279, 4) = ((MR_Box) (Pieces_278));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Specs_24 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Spec_279));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_23));
              }
            }
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
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

              Var_158 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[72])));
              Var_157 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_158, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[19])));
              Pieces_284 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[49])), Var_157);
              {
                Spec_285 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Spec_285, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_impl.check_required_feature\'/5"));
                MR_hl_field(0, Spec_285, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, Spec_285, 2) = ((MR_Box) ((MR_Unsigned) 44U));
                MR_hl_field(0, Spec_285, 3) = ((MR_Box) (Context_7));
                MR_hl_field(0, Spec_285, 4) = ((MR_Box) (Pieces_284));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Specs_24 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Spec_285));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_23));
              }
            }
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
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

              Var_51 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[75])));
              Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_51, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[19])));
              Pieces_259 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[49])), Var_50);
              {
                Var_77 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_77, 0) = ((MR_Box) (Pieces_259));
              }
              {
                Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_76, 0) = ((MR_Box) (Var_77));
                MR_hl_field(1, Var_76, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[103])));
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
                MR_hl_field(2, Spec_260, 2) = ((MR_Box) ((MR_Unsigned) 44U));
                MR_hl_field(2, Spec_260, 3) = ((MR_Box) (Var_85));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Specs_24 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Spec_260));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_23));
              }
            }
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
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
          *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
        else
        {
          MR_Word Var_223;
          MR_Word Var_224;
          MR_Word Pieces_302;
          MR_Word Spec_303;

          Var_224 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[83])));
          Var_223 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_224, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[19])));
          Pieces_302 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[49])), Var_223);
          {
            Spec_303 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_303, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_impl.check_required_feature\'/5"));
            MR_hl_field(0, Spec_303, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_303, 2) = ((MR_Box) ((MR_Unsigned) 44U));
            MR_hl_field(0, Spec_303, 3) = ((MR_Box) (Context_7));
            MR_hl_field(0, Spec_303, 4) = ((MR_Box) (Pieces_302));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_24 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Spec_303));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_23));
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

              Var_179 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[86])));
              Var_178 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_179, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[19])));
              Pieces_290 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[49])), Var_178);
              {
                Var_205 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_205, 0) = ((MR_Box) (Pieces_290));
              }
              {
                Var_204 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_204, 0) = ((MR_Box) (Var_205));
                MR_hl_field(1, Var_204, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[105])));
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
                MR_hl_field(2, Spec_291, 2) = ((MR_Box) ((MR_Unsigned) 44U));
                MR_hl_field(2, Spec_291, 3) = ((MR_Box) (Var_213));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Specs_24 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Spec_291));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_23));
              }
            }
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
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
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26)
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
          MR_hl_field(1, Var_29, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[29])));
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
        Var_46 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[33])));
        Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_46, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[19])));
        Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[31])), Var_45);
        Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_36, Var_40);
        Pieces_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_29, Var_35);
        {
          Spec_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_22, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_impl.mark_pred_as_external\'/6"));
          MR_hl_field(0, Spec_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_22, 2) = ((MR_Box) ((MR_Unsigned) 44U));
          MR_hl_field(0, Spec_22, 3) = ((MR_Box) (Context_7));
          MR_hl_field(0, Spec_22, 4) = ((MR_Box) (Pieces_21));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_26 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_22));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_25));
        }
        *STATE_VARIABLE_ModuleInfo_24 = STATE_VARIABLE_ModuleInfo_0_23;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word PredInfo_16;

        hlds__hlds_pred__pred_info_mark_as_external_2_p_0(PredInfo0_11, &PredInfo_16);
        hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_8, PredInfo_16, STATE_VARIABLE_ModuleInfo_0_23, STATE_VARIABLE_ModuleInfo_24);
        *STATE_VARIABLE_Specs_26 = STATE_VARIABLE_Specs_0_25;
      }
      break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_impl__add_impl_pragma_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_Specs_24;

  hlds__make_hlds__add_pragma_impl__check_required_feature_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_Specs_24);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_Specs_24));
}

static void MR_CALL 
hlds__make_hlds__add_pragma_impl__add_impl_pragma_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_ModuleInfo_24;
  MR_Word conv0_STATE_VARIABLE_Specs_26;

  hlds__make_hlds__add_pragma_impl__mark_pred_as_external_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ModuleInfo_24, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_26);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ModuleInfo_24));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_26));
}

static void MR_CALL 
hlds__make_hlds__add_pragma_impl__add_impl_pragma_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word ItemMercuryStatus_11,
  MR_Word Pragma_12,
  MR_Word STATE_VARIABLE_PragmaTabledCord_0_36,
  MR_Word * STATE_VARIABLE_PragmaTabledCord_37,
  MR_Word STATE_VARIABLE_ModuleInfo_0_38,
  MR_Word * STATE_VARIABLE_ModuleInfo_39,
  MR_Word STATE_VARIABLE_Specs_0_40,
  MR_Word * STATE_VARIABLE_Specs_41)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Pragma_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word FDInfo_16 = (MR_Word) ((MR_Word) (Pragma_12));
        MR_Word CHeader_19 = ((MR_Word) ((MR_hl_field(0, FDInfo_16, 1))));
        MR_Word Context_20 = ((MR_Word) ((MR_hl_field(0, FDInfo_16, 2))));
        MR_Word ForeignDeclCode_22;
        MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(0, FDInfo_16, 0)));

        {
          ForeignDeclCode_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ForeignDeclCode_22, 0) = (MR_Box) (packed_word_2);
          MR_hl_field(0, ForeignDeclCode_22, 1) = ((MR_Box) (CHeader_19));
          MR_hl_field(0, ForeignDeclCode_22, 2) = ((MR_Box) (Context_20));
        }
        hlds__hlds_module__module_add_foreign_decl_code_user_3_p_0(ForeignDeclCode_22, STATE_VARIABLE_ModuleInfo_0_38, STATE_VARIABLE_ModuleInfo_39);
        *STATE_VARIABLE_PragmaTabledCord_37 = STATE_VARIABLE_PragmaTabledCord_0_36;
        *STATE_VARIABLE_Specs_41 = STATE_VARIABLE_Specs_0_40;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word FCInfo_23 = (MR_Word) (MR_body((MR_Word) (Pragma_12), (MR_Integer) 1));
        MR_Word BodyCode_24 = ((MR_Word) ((MR_hl_field(0, FCInfo_23, 1))));
        MR_Word ForeignBodyCode_26;
        MR_Word Lang_55 = ((MR_Unsigned) ((MR_hl_field(0, FCInfo_23, 0))) & (MR_Integer) 3);
        MR_Word Context_56 = ((MR_Word) ((MR_hl_field(0, FCInfo_23, 2))));

        hlds__make_hlds__make_hlds_warn__warn_suspicious_foreign_code_5_p_0(Lang_55, BodyCode_24, Context_56, STATE_VARIABLE_Specs_0_40, STATE_VARIABLE_Specs_41);
        {
          ForeignBodyCode_26 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ForeignBodyCode_26, 0) = (MR_Box) ((MR_Unsigned) (Lang_55));
          MR_hl_field(0, ForeignBodyCode_26, 1) = ((MR_Box) (BodyCode_24));
          MR_hl_field(0, ForeignBodyCode_26, 2) = ((MR_Box) (Context_56));
        }
        hlds__hlds_module__module_add_foreign_body_code_3_p_0(ForeignBodyCode_26, STATE_VARIABLE_ModuleInfo_0_38, STATE_VARIABLE_ModuleInfo_39);
        *STATE_VARIABLE_PragmaTabledCord_37 = STATE_VARIABLE_PragmaTabledCord_0_36;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word FEInfo_27 = (MR_Word) (MR_body((MR_Word) (Pragma_12), (MR_Integer) 2));

        hlds__make_hlds__add_pragma_impl__add_pragma_foreign_proc_export_5_p_0(FEInfo_27, STATE_VARIABLE_ModuleInfo_0_38, STATE_VARIABLE_ModuleInfo_39, STATE_VARIABLE_Specs_0_40, STATE_VARIABLE_Specs_41);
        *STATE_VARIABLE_PragmaTabledCord_37 = STATE_VARIABLE_PragmaTabledCord_0_36;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Pragma_12, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ExternalInfo_28 = ((MR_Word) ((MR_hl_field(3, Pragma_12, 1))));
            MR_Word PFNameArity_59 = ((MR_Word) ((MR_hl_field(0, ExternalInfo_28, 0))));
            MR_Word MaybeBackend_60 = ((MR_Word) ((MR_hl_field(0, ExternalInfo_28, 1))));
            MR_Word Context_61 = ((MR_Word) ((MR_hl_field(0, ExternalInfo_28, 2))));
            MR_Word Globals_63;
            MR_Word CurrentBackend_64;

            hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_38, &Globals_63);
            CurrentBackend_64 = libs__globals__lookup_current_backend_1_f_0(Globals_63);
            if ((MaybeBackend_60 == (MR_Word) ((MR_Unsigned) 0U)))
              succeeded = MR_TRUE;
            else
            {
              MR_Word Backend_65 = ((MR_Word) ((MR_hl_field(1, MaybeBackend_60, 0))));

              succeeded = (Backend_65 == CurrentBackend_64);
            }
            if (succeeded)
            {
              MR_Word PredicateTable0_66;
              MR_Word PredOrFunc_67;
              MR_Word SymName_68;
              MR_Word UserArity_69;
              MR_Word PredIds_70;
              MR_Word AllArityPredIds_71;
              MR_Word DeclPieces_72;

              hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_38, &PredicateTable0_66);
              PredOrFunc_67 = ((MR_Unsigned) ((MR_hl_field(0, PFNameArity_59, 0))) & (MR_Integer) 1);
              SymName_68 = ((MR_Word) ((MR_hl_field(0, PFNameArity_59, 1))));
              UserArity_69 = ((MR_Word) ((MR_hl_field(0, PFNameArity_59, 2))));
              switch (PredOrFunc_67) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    hlds__pred_table__predicate_table_lookup_func_sym_arity_5_p_0(PredicateTable0_66, (MR_Integer) 0, SymName_68, UserArity_69, &PredIds_70);
                    hlds__pred_table__predicate_table_lookup_func_sym_4_p_0(PredicateTable0_66, (MR_Integer) 0, SymName_68, &AllArityPredIds_71);
                    DeclPieces_72 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[26]));
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    hlds__pred_table__predicate_table_lookup_pred_sym_arity_5_p_0(PredicateTable0_66, (MR_Integer) 0, SymName_68, UserArity_69, &PredIds_70);
                    hlds__pred_table__predicate_table_lookup_pred_sym_4_p_0(PredicateTable0_66, (MR_Integer) 0, SymName_68, &AllArityPredIds_71);
                    DeclPieces_72 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[28]));
                  }
                  break;
              }
              if ((PredIds_70 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word PredIdTable0_73;
                MR_Word OtherUserArities_74;
                MR_Word Var_80;

                hlds__hlds_module__module_info_get_pred_id_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_38, &PredIdTable0_73);
                hlds__hlds_error_util__find_user_arities_other_than_4_p_0(PredIdTable0_73, AllArityPredIds_71, UserArity_69, &OtherUserArities_74);
                {
                  Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_80, 0) = ((MR_Box) (PredOrFunc_67));
                }
                hlds__make_hlds_error__report_undefined_pred_or_func_error_8_p_0(Var_80, SymName_68, UserArity_69, OtherUserArities_74, Context_61, DeclPieces_72, STATE_VARIABLE_Specs_0_40, STATE_VARIABLE_Specs_41);
                *STATE_VARIABLE_ModuleInfo_39 = STATE_VARIABLE_ModuleInfo_0_38;
              }
              else
              {
                MR_Word Var_79;
                MR_Box conv3_STATE_VARIABLE_ModuleInfo_39;
                MR_Box conv2_STATE_VARIABLE_Specs_41;

                {
                  Var_79 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_79, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_impl_scalar_common_5[1]));
                  MR_hl_field(0, Var_79, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_impl__add_impl_pragma_9_p_0_1));
                  MR_hl_field(0, Var_79, 2) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(0, Var_79, 3) = ((MR_Box) (Context_61));
                }
                mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__add_pragma_impl_scalar_common_1[1]), Var_79, PredIds_70, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_38)), &conv3_STATE_VARIABLE_ModuleInfo_39, ((MR_Box) (STATE_VARIABLE_Specs_0_40)), &conv2_STATE_VARIABLE_Specs_41);
                *STATE_VARIABLE_ModuleInfo_39 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_39));
                *STATE_VARIABLE_Specs_41 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_41));
              }
            }
            else
            {
              *STATE_VARIABLE_Specs_41 = STATE_VARIABLE_Specs_0_40;
              *STATE_VARIABLE_ModuleInfo_39 = STATE_VARIABLE_ModuleInfo_0_38;
            }
            *STATE_VARIABLE_PragmaTabledCord_37 = STATE_VARIABLE_PragmaTabledCord_0_36;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word FTInfo_29 = ((MR_Word) ((MR_hl_field(3, Pragma_12, 1))));
            MR_Word PredStatus_30;

            hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_11, &PredStatus_30);
            hlds__make_hlds__add_pragma_impl__add_pragma_fact_table_8_p_0(ProgressStream_10, ItemMercuryStatus_11, PredStatus_30, FTInfo_29, STATE_VARIABLE_ModuleInfo_0_38, STATE_VARIABLE_ModuleInfo_39, STATE_VARIABLE_Specs_0_40, STATE_VARIABLE_Specs_41);
            *STATE_VARIABLE_PragmaTabledCord_37 = STATE_VARIABLE_PragmaTabledCord_0_36;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TabledInfo_31 = ((MR_Word) ((MR_hl_field(3, Pragma_12, 1))));

            mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_impl_pragma_tabled_info_0), ((MR_Box) (TabledInfo_31)), STATE_VARIABLE_PragmaTabledCord_0_36, STATE_VARIABLE_PragmaTabledCord_37);
            *STATE_VARIABLE_ModuleInfo_39 = STATE_VARIABLE_ModuleInfo_0_38;
            *STATE_VARIABLE_Specs_41 = STATE_VARIABLE_Specs_0_40;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word TailrecWarningPragma_32 = ((MR_Word) ((MR_hl_field(3, Pragma_12, 1))));

            hlds__make_hlds__add_pragma_impl__add_pragma_require_tail_rec_5_p_0(TailrecWarningPragma_32, STATE_VARIABLE_ModuleInfo_0_38, STATE_VARIABLE_ModuleInfo_39, STATE_VARIABLE_Specs_0_40, STATE_VARIABLE_Specs_41);
            *STATE_VARIABLE_PragmaTabledCord_37 = STATE_VARIABLE_PragmaTabledCord_0_36;
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word RFSInfo_33 = ((MR_Word) ((MR_hl_field(3, Pragma_12, 1))));
            MR_Word FeatureSet_34 = ((MR_Word) ((MR_hl_field(0, RFSInfo_33, 0))));
            MR_Word Context_57 = ((MR_Word) ((MR_hl_field(0, RFSInfo_33, 1))));

            if (((MR_tag((MR_Word) ItemMercuryStatus_11)) == (MR_Integer) 1))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_pragma_impl.check_required_feature_set\'/6", (MR_String) "imported require_feature_set pragma");
                return;
              }
            else
            {
              MR_Word Globals_84;
              MR_Word Var_87;
              MR_Box conv5_STATE_VARIABLE_Specs_41;

              hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_38, &Globals_84);
              {
                Var_87 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_87, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_impl_scalar_common_7[0]));
                MR_hl_field(0, Var_87, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_impl__add_impl_pragma_9_p_0_2));
                MR_hl_field(0, Var_87, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_87, 3) = ((MR_Box) (Globals_84));
                MR_hl_field(0, Var_87, 4) = ((MR_Box) (Context_57));
              }
              mercury__set__fold_4_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_required_feature_0), (MR_Word) (&hlds__make_hlds__add_pragma_impl_scalar_common_1[1]), Var_87, FeatureSet_34, ((MR_Box) (STATE_VARIABLE_Specs_0_40)), &conv5_STATE_VARIABLE_Specs_41);
              *STATE_VARIABLE_Specs_41 = ((MR_Word) (conv5_STATE_VARIABLE_Specs_41));
            }
            *STATE_VARIABLE_PragmaTabledCord_37 = STATE_VARIABLE_PragmaTabledCord_0_36;
            *STATE_VARIABLE_ModuleInfo_39 = STATE_VARIABLE_ModuleInfo_0_38;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_impl__add_pragma_require_tail_rec_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_PredInfo_35;
  MR_Word conv0_STATE_VARIABLE_Specs_37;

  hlds__make_hlds__add_pragma_impl__add_pragma_require_tail_rec_proc_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_PredInfo_35, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_37);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_PredInfo_35));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_37));
}

static void MR_CALL 
hlds__make_hlds__add_pragma_impl__add_pragma_require_tail_rec_5_p_0(
  MR_Word Pragma_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_37,
  MR_Word * STATE_VARIABLE_ModuleInfo_38,
  MR_Word STATE_VARIABLE_Specs_0_39,
  MR_Word * STATE_VARIABLE_Specs_40)
{
  MR_bool succeeded;
  MR_Word PredSpec_9 = ((MR_Word) ((MR_hl_field(0, Pragma_6, 0))));
  MR_Word RequireTailrec_10 = ((MR_Word) ((MR_hl_field(0, Pragma_6, 1))));
  MR_Word Context_11 = ((MR_Word) ((MR_hl_field(0, Pragma_6, 2))));
  MR_Word PFUMM_13 = ((MR_Word) ((MR_hl_field(0, PredSpec_9, 0))));
  MR_Word PredSymName_14 = ((MR_Word) ((MR_hl_field(0, PredSpec_9, 1))));
  MR_Word MaybePredOrFunc_15;
  MR_Word UserArity_16;
  MR_Word MaybeModes_17;
  MR_Integer UserArityInt_18;
  MR_Word PFU_19;
  MR_Word MatchingPredIdResult_20;

  parse_tree__prog_item__pfumm_to_maybe_pf_arity_maybe_modes_4_p_0(PFUMM_13, &MaybePredOrFunc_15, &UserArity_16, &MaybeModes_17);
  UserArityInt_18 = (MR_Integer) (UserArity_16);
  PFU_19 = parse_tree__prog_item__maybe_pred_or_func_to_pfu_1_f_0(MaybePredOrFunc_15);
  hlds__make_hlds__add_pragma_util__get_matching_pred_ids_9_p_0(STATE_VARIABLE_ModuleInfo_0_37, (MR_String) "require_tail_recursion", (MR_Integer) 1, (MR_Integer) 1, Context_11, PFU_19, PredSymName_14, UserArity_16, &MatchingPredIdResult_20);
  if (((MR_tag((MR_Word) MatchingPredIdResult_20)) == (MR_Integer) 1))
  {
    MR_Word ErrorSpecs_36 = ((MR_Word) ((MR_hl_field(1, MatchingPredIdResult_20, 0))));

    *STATE_VARIABLE_Specs_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ErrorSpecs_36, STATE_VARIABLE_Specs_0_39);
    *STATE_VARIABLE_ModuleInfo_38 = STATE_VARIABLE_ModuleInfo_0_37;
  }
  else
  {
    MR_Word PredId_21 = ((MR_Word) ((MR_hl_field(0, MatchingPredIdResult_20, 0))));
    MR_Word SNA_24;
    MR_Word PredInfo0_25;
    MR_Word Procs0_26;
    MR_Word Procs_27;
    MR_Word PredInfo_31;

    {
      SNA_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SNA_24, 0) = ((MR_Box) (PredSymName_14));
      MR_hl_field(0, SNA_24, 1) = ((MR_Box) (UserArityInt_18));
    }
    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_37, PredId_21, &PredInfo0_25);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_25, &Procs0_26);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs0_26, &Procs_27);
    if ((MaybeModes_17 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_82;
      MR_Box conv3_PredInfo_31;
      MR_Box conv2_STATE_VARIABLE_Specs_40;

      {
        Var_82 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_82, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_impl_scalar_common_6[0]));
        MR_hl_field(0, Var_82, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_impl__add_pragma_require_tail_rec_5_p_0_1));
        MR_hl_field(0, Var_82, 2) = ((MR_Box) ((MR_Integer) 5));
        MR_hl_field(0, Var_82, 3) = ((MR_Box) (RequireTailrec_10));
        MR_hl_field(0, Var_82, 4) = ((MR_Box) (Context_11));
        MR_hl_field(0, Var_82, 5) = ((MR_Box) (MaybePredOrFunc_15));
        MR_hl_field(0, Var_82, 6) = ((MR_Box) (MaybeModes_17));
        MR_hl_field(0, Var_82, 7) = ((MR_Box) (SNA_24));
      }
      mercury__list__foldl2_6_p_0((MR_Word) (&hlds__make_hlds__add_pragma_impl_scalar_common_2[0]), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), (MR_Word) (&hlds__make_hlds__add_pragma_impl_scalar_common_1[1]), Var_82, Procs_27, ((MR_Box) (PredInfo0_25)), &conv3_PredInfo_31, ((MR_Box) (STATE_VARIABLE_Specs_0_39)), &conv2_STATE_VARIABLE_Specs_40);
      PredInfo_31 = ((MR_Word) (conv3_PredInfo_31));
      *STATE_VARIABLE_Specs_40 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_40));
    }
    else
    {
      MR_Word Modes_28 = ((MR_Word) ((MR_hl_field(1, MaybeModes_17, 0))));
      MR_Integer ProcId_29;

      succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(STATE_VARIABLE_ModuleInfo_0_37, Procs_27, Modes_28, &ProcId_29);
      if (succeeded)
      {
        MR_Word Proc_30;
        MR_Word Var_44;
        MR_Box conv4_Proc_30;

        mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs0_26, ((MR_Box) (ProcId_29)), &conv4_Proc_30);
        Proc_30 = ((MR_Word) (conv4_Proc_30));
        {
          Var_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_44, 0) = ((MR_Box) (ProcId_29));
          MR_hl_field(0, Var_44, 1) = ((MR_Box) (Proc_30));
        }
        hlds__make_hlds__add_pragma_impl__add_pragma_require_tail_rec_proc_10_p_0(RequireTailrec_10, Context_11, MaybePredOrFunc_15, MaybeModes_17, SNA_24, Var_44, PredInfo0_25, &PredInfo_31, STATE_VARIABLE_Specs_0_39, STATE_VARIABLE_Specs_40);
      }
      else
      {
        MR_Word PredOrFunc_32;
        MR_Word PFNameArity_33;
        MR_Word Pieces_34;
        MR_Word Spec_35;
        MR_Word Var_50;
        MR_Word Var_51;
        MR_Word Var_59;
        MR_Word Var_64;
        MR_Word Var_65;
        MR_Word Var_66;
        MR_Word Var_69;
        MR_Word Var_70;

        PredInfo_31 = PredInfo0_25;
        PredOrFunc_32 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_31);
        {
          PFNameArity_33 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, PFNameArity_33, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_32));
          MR_hl_field(0, PFNameArity_33, 1) = ((MR_Box) (PredSymName_14));
          MR_hl_field(0, PFNameArity_33, 2) = ((MR_Box) (UserArity_16));
        }
        Var_51 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[35])));
        {
          Var_70 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_70, 0) = ((MR_Box) ((MR_Unsigned) 19U));
          MR_hl_field(3, Var_70, 1) = ((MR_Box) (PFNameArity_33));
        }
        {
          Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_69, 0) = ((MR_Box) (Var_70));
          MR_hl_field(1, Var_69, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[18])));
        }
        {
          Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_66, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_impl_scalar_common_1[38])));
          MR_hl_field(1, Var_66, 1) = ((MR_Box) (Var_69));
        }
        Var_65 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_66);
        Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_65, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[19])));
        Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[37])), Var_64);
        Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_51, Var_59);
        Pieces_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[4])), Var_50);
        {
          Spec_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_35, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_impl.add_pragma_require_tail_rec\'/5"));
          MR_hl_field(0, Spec_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_35, 2) = ((MR_Box) ((MR_Unsigned) 44U));
          MR_hl_field(0, Spec_35, 3) = ((MR_Box) (Context_11));
          MR_hl_field(0, Spec_35, 4) = ((MR_Box) (Pieces_34));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_40 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_35));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_39));
        }
      }
    }
    hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_21, PredInfo_31, STATE_VARIABLE_ModuleInfo_0_37, STATE_VARIABLE_ModuleInfo_38);
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
  MR_Word STATE_VARIABLE_Specs_0_36,
  MR_Word * STATE_VARIABLE_Specs_37)
{
  MR_Integer ProcId_16 = ((MR_Integer) ((MR_hl_field(0, HeadVar__6_6, 0))));
  MR_Word ProcInfo0_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_6, 1))));
  MR_Word MaybeRequireTailrecOrig_20;

  hlds__hlds_pred__proc_info_get_maybe_require_tailrec_info_2_p_0(ProcInfo0_17, &MaybeRequireTailrecOrig_20);
  if ((MaybeRequireTailrecOrig_20 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word ProcInfo_33;

    hlds__hlds_pred__proc_info_set_require_tailrec_info_3_p_0(RequireTailrec_11, ProcInfo0_17, &ProcInfo_33);
    hlds__hlds_pred__pred_info_set_proc_info_4_p_0(ProcId_16, ProcInfo_33, STATE_VARIABLE_PredInfo_0_34, STATE_VARIABLE_PredInfo_35);
    *STATE_VARIABLE_Specs_37 = STATE_VARIABLE_Specs_0_36;
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
      OneModeOfPieces_24 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[40]));
    Var_48 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[45])));
    {
      Var_69 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_69, 0) = ((MR_Box) ((MR_Unsigned) 14U));
      MR_hl_field(3, Var_69, 1) = ((MR_Box) (SNA_15));
    }
    {
      Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_68, 0) = ((MR_Box) (Var_69));
      MR_hl_field(1, Var_68, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[18])));
    }
    Var_67 = parse_tree__error_spec__color_as_subject_1_f_0(Var_68);
    Var_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_67, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[19])));
    Var_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PorFPieces_22, Var_66);
    Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), OneModeOfPieces_24, Var_65);
    Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[37])), Var_64);
    Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_48, Var_59);
    MainPieces_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[4])), Var_47);
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
      MR_hl_field(0, Var_88, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[47])));
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
      MR_hl_field(2, Spec_32, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(2, Spec_32, 3) = ((MR_Box) (Var_85));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_37 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_32));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_36));
    }
    *STATE_VARIABLE_PredInfo_35 = STATE_VARIABLE_PredInfo_0_34;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_impl__add_pragma_fact_table_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word ItemMercuryStatus_10,
  MR_Word PredStatus_11,
  MR_Word FTInfo_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_42,
  MR_Word * STATE_VARIABLE_ModuleInfo_43,
  MR_Word STATE_VARIABLE_Specs_0_44,
  MR_Word * STATE_VARIABLE_Specs_45)
{
  MR_Word PredSpec_15 = ((MR_Word) ((MR_hl_field(0, FTInfo_12, 0))));
  MR_String FileName_16 = ((MR_String) ((MR_hl_field(0, FTInfo_12, 1))));
  MR_Word Context_17 = ((MR_Word) ((MR_hl_field(0, FTInfo_12, 2))));
  MR_Word PFU_19 = ((MR_Unsigned) ((MR_hl_field(0, PredSpec_15, 0))) & (MR_Integer) 3);
  MR_Word PredSymName_20 = ((MR_Word) ((MR_hl_field(0, PredSpec_15, 1))));
  MR_Word UserArity_21 = ((MR_Word) ((MR_hl_field(0, PredSpec_15, 2))));
  MR_Word MatchingPredIdResult_22;

  hlds__make_hlds__add_pragma_util__get_matching_pred_ids_9_p_0(STATE_VARIABLE_ModuleInfo_0_42, (MR_String) "fact_table", (MR_Integer) 1, (MR_Integer) 0, Context_17, PFU_19, PredSymName_20, UserArity_21, &MatchingPredIdResult_22);
  if (((MR_tag((MR_Word) MatchingPredIdResult_22)) == (MR_Integer) 1))
  {
    MR_Word ErrorSpecs_41 = ((MR_Word) ((MR_hl_field(1, MatchingPredIdResult_22, 0))));

    *STATE_VARIABLE_Specs_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ErrorSpecs_41, STATE_VARIABLE_Specs_0_44);
    *STATE_VARIABLE_ModuleInfo_43 = STATE_VARIABLE_ModuleInfo_0_42;
  }
  else
  {
    MR_Word PredId_23 = ((MR_Word) ((MR_hl_field(0, MatchingPredIdResult_22, 0))));
    MR_Word PredInfo0_26;
    MR_Word CheckResult_27;

    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_42, PredId_23, &PredInfo0_26);
    ll_backend__fact_table_gen__fact_table_check_args_5_p_0(STATE_VARIABLE_ModuleInfo_0_42, Context_17, PredId_23, PredInfo0_26, &CheckResult_27);
    if (((MR_tag((MR_Word) CheckResult_27)) == (MR_Integer) 1))
    {
      MR_Word CheckSpecs_28 = ((MR_Word) ((MR_hl_field(1, CheckResult_27, 0))));
      MR_Word PredMarkers0_29;
      MR_Word PredMarkers_30;
      MR_Word PredInfo_31;

      *STATE_VARIABLE_Specs_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), CheckSpecs_28, STATE_VARIABLE_Specs_0_44);
      hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo0_26, &PredMarkers0_29);
      hlds__hlds_markers__add_marker_3_p_0((MR_Integer) 30, PredMarkers0_29, &PredMarkers_30);
      hlds__hlds_pred__pred_info_set_markers_3_p_0(PredMarkers_30, PredInfo0_26, &PredInfo_31);
      hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_23, PredInfo_31, STATE_VARIABLE_ModuleInfo_0_42, STATE_VARIABLE_ModuleInfo_43);
    }
    else
    {
      MR_Word GenInfo_32 = ((MR_Word) ((MR_hl_field(0, CheckResult_27, 0))));
      MR_String C_HeaderCode_34;
      MR_Integer PrimaryProcId_35;
      MR_Word PredInfo1_36;
      MR_Word ProcTable_37;
      MR_Word ProcIds_38;
      MR_Word PredOrFunc_39;
      MR_Word ForeignDeclCode_40;
      MR_Word STATE_VARIABLE_Specs_2_53;
      MR_Word STATE_VARIABLE_ModuleInfo_2_56;
      MR_Word Var_59;
      MR_Word STATE_VARIABLE_ModuleInfo_3_60;
      MR_Word STATE_VARIABLE_ModuleInfo_4_61;
      MR_Word PredInfo_65;

      ll_backend__fact_table_gen__fact_table_compile_facts_13_p_0(ProgressStream_9, STATE_VARIABLE_ModuleInfo_0_42, FileName_16, Context_17, GenInfo_32, &C_HeaderCode_34, &PrimaryProcId_35, PredInfo0_26, &PredInfo1_36, STATE_VARIABLE_Specs_0_44, &STATE_VARIABLE_Specs_2_53);
      hlds__make_hlds__add_pragma_util__add_marker_pred_info_3_p_0((MR_Integer) 8, PredInfo1_36, &PredInfo_65);
      hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_23, PredInfo_65, STATE_VARIABLE_ModuleInfo_0_42, &STATE_VARIABLE_ModuleInfo_2_56);
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_65, &ProcTable_37);
      ProcIds_38 = hlds__hlds_pred__pred_info_all_proc_ids_1_f_0(PredInfo_65);
      PredOrFunc_39 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_65);
      {
        Var_59 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_59, 0) = ((MR_Box) (C_HeaderCode_34));
      }
      {
        ForeignDeclCode_40 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ForeignDeclCode_40, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
        MR_hl_field(0, ForeignDeclCode_40, 1) = ((MR_Box) (Var_59));
        MR_hl_field(0, ForeignDeclCode_40, 2) = ((MR_Box) (Context_17));
      }
      hlds__hlds_module__module_add_foreign_decl_code_aux_3_p_0(ForeignDeclCode_40, STATE_VARIABLE_ModuleInfo_2_56, &STATE_VARIABLE_ModuleInfo_3_60);
      hlds__hlds_module__module_add_fact_table_file_3_p_0(FileName_16, STATE_VARIABLE_ModuleInfo_3_60, &STATE_VARIABLE_ModuleInfo_4_61);
      hlds__make_hlds__add_pragma_impl__add_fact_table_procs_14_p_0(ProgressStream_9, PredOrFunc_39, PredSymName_20, ItemMercuryStatus_10, PredStatus_11, ProcTable_37, PrimaryProcId_35, Context_17, GenInfo_32, ProcIds_38, STATE_VARIABLE_ModuleInfo_4_61, STATE_VARIABLE_ModuleInfo_43, STATE_VARIABLE_Specs_2_53, STATE_VARIABLE_Specs_45);
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_impl__add_fact_table_procs_14_p_0(
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
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__10_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_14 = STATE_VARIABLE_Specs_0_13;
      *STATE_VARIABLE_ModuleInfo_12 = STATE_VARIABLE_ModuleInfo_0_11;
    }
    else
    {
      MR_Integer ProcId_39 = ((MR_Integer) ((MR_hl_field(1, HeadVar__10_10, 0))));
      MR_Word ProcIds_40 = ((MR_Word) ((MR_hl_field(1, HeadVar__10_10, 1))));
      MR_Word STATE_VARIABLE_ModuleInfo_1_47;
      MR_Word STATE_VARIABLE_Specs_1_48;
      MR_Word ProcInfo_49;
      MR_Word InstVarSet_50;
      MR_Word ProgVarSet_51;
      MR_Word PragmaVars_52;
      MR_String C_ProcCode_53;
      MR_String C_ExtraCode_54;
      MR_Word Attrs0_55;
      MR_Word Attrs1_56;
      MR_Word Attrs2_57;
      MR_Word Attrs3_58;
      MR_Word Attrs_59;
      MR_Word FCInfo_60;
      MR_Word Var_67;
      MR_Word STATE_VARIABLE_ModuleInfo_1_70;
      MR_Box conv0_ProcInfo_49;
      MR_Word next_value_of_HeadVar__10_10;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_11;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_13;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_6, ((MR_Box) (ProcId_39)), &conv0_ProcInfo_49);
      ProcInfo_49 = ((MR_Word) (conv0_ProcInfo_49));
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ProcInfo_49, &InstVarSet_50);
      ll_backend__fact_table_gen__fact_table_generate_c_code_for_proc_10_p_0(STATE_VARIABLE_ModuleInfo_0_11, SymName_3, ProcId_39, PrimaryProcId_7, ProcInfo_49, GenInfo_9, &ProgVarSet_51, &PragmaVars_52, &C_ProcCode_53, &C_ExtraCode_54);
      Attrs0_55 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 0);
      parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 1, Attrs0_55, &Attrs1_56);
      parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, Attrs1_56, &Attrs2_57);
      parse_tree__prog_data_foreign__set_purity_3_p_0((MR_Integer) 0, Attrs2_57, &Attrs3_58);
      parse_tree__prog_data_foreign__set_refers_to_llds_stack_3_p_0((MR_Integer) 1, Attrs3_58, &Attrs_59);
      {
        Var_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_67, 0) = ((MR_Box) (C_ProcCode_53));
        MR_hl_field(0, Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        FCInfo_60 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, FCInfo_60, 0) = ((MR_Box) (Attrs_59));
        MR_hl_field(0, FCInfo_60, 1) = ((MR_Box) (SymName_3));
        MR_hl_field(0, FCInfo_60, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_2));
        MR_hl_field(0, FCInfo_60, 3) = ((MR_Box) (PragmaVars_52));
        MR_hl_field(0, FCInfo_60, 4) = ((MR_Box) (ProgVarSet_51));
        MR_hl_field(0, FCInfo_60, 5) = ((MR_Box) (InstVarSet_50));
        MR_hl_field(0, FCInfo_60, 6) = ((MR_Box) (Var_67));
        MR_hl_field(0, FCInfo_60, 7) = ((MR_Box) (Context_8));
        MR_hl_field(0, FCInfo_60, 8) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      hlds__make_hlds__add_foreign_proc__add_foreign_proc_8_p_0(ProgressStream_1, ItemMercuryStatus_4, PredStatus_5, FCInfo_60, STATE_VARIABLE_ModuleInfo_0_11, &STATE_VARIABLE_ModuleInfo_1_70, STATE_VARIABLE_Specs_0_13, &STATE_VARIABLE_Specs_1_48);
      succeeded = (strcmp(C_ExtraCode_54, (MR_String) "") == 0);
      if (succeeded)
        STATE_VARIABLE_ModuleInfo_1_47 = STATE_VARIABLE_ModuleInfo_1_70;
      else
      {
        MR_Word ForeignBodyCode_61;
        MR_Word Var_72;

        {
          Var_72 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_72, 0) = ((MR_Box) (C_ExtraCode_54));
        }
        {
          ForeignBodyCode_61 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ForeignBodyCode_61, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(0, ForeignBodyCode_61, 1) = ((MR_Box) (Var_72));
          MR_hl_field(0, ForeignBodyCode_61, 2) = ((MR_Box) (Context_8));
        }
        hlds__hlds_module__module_add_foreign_body_code_3_p_0(ForeignBodyCode_61, STATE_VARIABLE_ModuleInfo_1_70, &STATE_VARIABLE_ModuleInfo_1_47);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__10_10 = ProcIds_40;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_11 = STATE_VARIABLE_ModuleInfo_1_47;
      next_value_of_STATE_VARIABLE_Specs_0_13 = STATE_VARIABLE_Specs_1_48;
      HeadVar__10_10 = next_value_of_HeadVar__10_10;
      STATE_VARIABLE_ModuleInfo_0_11 = next_value_of_STATE_VARIABLE_ModuleInfo_0_11;
      STATE_VARIABLE_Specs_0_13 = next_value_of_STATE_VARIABLE_Specs_0_13;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_impl__add_impl_markers_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_ModuleInfo_16;
  MR_Word conv0_STATE_VARIABLE_Specs_18;

  hlds__make_hlds__add_pragma_impl__add_impl_marker_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ModuleInfo_16, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_18);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ModuleInfo_16));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_18));
}

void MR_CALL 
hlds__make_hlds__add_pragma_impl__add_impl_markers_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * STATE_VARIABLE_ModuleInfo_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_5 = STATE_VARIABLE_Specs_0_4;
      *STATE_VARIABLE_ModuleInfo_3 = STATE_VARIABLE_ModuleInfo_0_2;
    }
    else
    {
      MR_Word ImsList_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word ImsLists_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word ItemMercuryStatus_16 = ((MR_Word) ((MR_hl_field(0, ImsList_12, 0))));
      MR_Word Items_17 = ((MR_Word) ((MR_hl_field(0, ImsList_12, 1))));
      MR_Word Var_22;
      MR_Word STATE_VARIABLE_ModuleInfo_1_23;
      MR_Word STATE_VARIABLE_Specs_1_24;
      MR_Box conv3_STATE_VARIABLE_ModuleInfo_1_23;
      MR_Box conv2_STATE_VARIABLE_Specs_1_24;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_4;

      {
        Var_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_22, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_impl_scalar_common_5[0]));
        MR_hl_field(0, Var_22, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_impl__add_impl_markers_5_p_0_1));
        MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_22, 3) = ((MR_Box) (ItemMercuryStatus_16));
      }
      mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_marker_info_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__add_pragma_impl_scalar_common_1[1]), Var_22, Items_17, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_2)), &conv3_STATE_VARIABLE_ModuleInfo_1_23, ((MR_Box) (STATE_VARIABLE_Specs_0_4)), &conv2_STATE_VARIABLE_Specs_1_24);
      STATE_VARIABLE_ModuleInfo_1_23 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_1_23));
      STATE_VARIABLE_Specs_1_24 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_1_24));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ImsLists_13;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_2 = STATE_VARIABLE_ModuleInfo_1_23;
      next_value_of_STATE_VARIABLE_Specs_0_4 = STATE_VARIABLE_Specs_1_24;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ModuleInfo_0_2 = next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      STATE_VARIABLE_Specs_0_4 = next_value_of_STATE_VARIABLE_Specs_0_4;
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma_impl__add_pragma_foreign_proc_export_5_p_0(
  MR_Word FPEInfo_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_42,
  MR_Word * STATE_VARIABLE_ModuleInfo_43,
  MR_Word STATE_VARIABLE_Specs_0_44,
  MR_Word * STATE_VARIABLE_Specs_45)
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
  hlds__make_hlds__add_pragma_util__look_up_pragma_pf_sym_arity_9_p_0(STATE_VARIABLE_ModuleInfo_0_42, (MR_Integer) 1, (MR_Integer) 1, Context_14, (MR_String) "foreign_export", PredOrFunc_16, SymName_17, UserArity_20, &MaybePredId_21);
  if (((MR_tag((MR_Word) MaybePredId_21)) == (MR_Integer) 0))
  {
    MR_Word Specs_8 = ((MR_Word) ((MR_hl_field(0, MaybePredId_21, 0))));

    if ((Origin_9 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Specs_8, STATE_VARIABLE_Specs_0_44);
    else
      *STATE_VARIABLE_Specs_45 = STATE_VARIABLE_Specs_0_44;
    *STATE_VARIABLE_ModuleInfo_43 = STATE_VARIABLE_ModuleInfo_0_42;
  }
  else
  {
    MR_Word PredId_22 = ((MR_Word) ((MR_hl_field(1, MaybePredId_21, 0))));
    MR_Word PredInfo_23;
    MR_Word Procs_24;
    MR_Word ExistingProcs_25;
    MR_Integer ProcId_26;

    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_42, PredId_22, &PredInfo_23);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_23, &Procs_24);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs_24, &ExistingProcs_25);
    succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(STATE_VARIABLE_ModuleInfo_0_42, ExistingProcs_25, ArgModes_18, &ProcId_26);
    if (succeeded)
    {
      MR_Word ProcInfo0_27;
      MR_Word MaybeDetism_28;
      MR_Box conv0_ProcInfo0_27;
      MR_Word Detism_29;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs_24, ((MR_Box) (ProcId_26)), &conv0_ProcInfo0_27);
      ProcInfo0_27 = ((MR_Word) (conv0_ProcInfo0_27));
      hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo0_27, &MaybeDetism_28);
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
        MR_Word Var_54;
        MR_Word Var_55;
        MR_Word Var_63;
        MR_Word Var_68;
        MR_Word Var_69;
        MR_Word Var_74;
        MR_Word Var_82;
        MR_Word Var_83;
        MR_Word Var_84;
        MR_Word Var_85;

        mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), VarSet_13, &InstVarSet_30);
        ModeSubDeclStr_31 = parse_tree__parse_tree_out_pred_decl__mercury_mode_subdecl_to_string_6_f_0((MR_Integer) 1, PredOrFunc_16, InstVarSet_30, SymName_17, ArgModes_18, MaybeDetism_28);
        Var_55 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[8])));
        Var_69 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[12])));
        {
          Var_85 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_85, 0) = ((MR_Box) ((MR_Unsigned) 10U));
          MR_hl_field(3, Var_85, 1) = ((MR_Box) (ModeSubDeclStr_31));
        }
        {
          Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_84, 0) = ((MR_Box) (Var_85));
          MR_hl_field(1, Var_84, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[18])));
        }
        Var_83 = parse_tree__error_spec__color_as_subject_1_f_0(Var_84);
        Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_83, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[19])));
        Var_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[16])), Var_82);
        Var_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_69, Var_74);
        Var_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[10])), Var_68);
        Var_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_55, Var_63);
        Pieces_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[4])), Var_54);
        {
          Spec_33 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_33, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_impl.add_pragma_foreign_proc_export\'/5"));
          MR_hl_field(0, Spec_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_33, 2) = ((MR_Box) ((MR_Unsigned) 44U));
          MR_hl_field(0, Spec_33, 3) = ((MR_Box) (Context_14));
          MR_hl_field(0, Spec_33, 4) = ((MR_Box) (Pieces_32));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_45 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_33));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_44));
        }
        *STATE_VARIABLE_ModuleInfo_43 = STATE_VARIABLE_ModuleInfo_0_42;
      }
      else
      {
        MR_Word Globals_34;
        MR_Word ForeignLangs_35;
        MR_Word ProcInfo_39;
        MR_Word STATE_VARIABLE_ModuleInfo_1_97;

        hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_42, &Globals_34);
        libs__globals__get_backend_foreign_languages_2_p_0(Globals_34, &ForeignLangs_35);
        succeeded = mercury__list__member_2_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_10)), ForeignLangs_35);
        if (succeeded)
        {
          MR_Word PragmaExportedProcs0_36;
          MR_Word NewExportedProc_37;
          MR_Word PragmaExportedProcs_38;

          hlds__hlds_module__module_info_get_pragma_exported_procs_2_p_0(STATE_VARIABLE_ModuleInfo_0_42, &PragmaExportedProcs0_36);
          {
            NewExportedProc_37 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, NewExportedProc_37, 0) = (MR_Box) ((MR_Unsigned) (Lang_10));
            MR_hl_field(0, NewExportedProc_37, 1) = ((MR_Box) (PredId_22));
            MR_hl_field(0, NewExportedProc_37, 2) = ((MR_Box) (ProcId_26));
            MR_hl_field(0, NewExportedProc_37, 3) = ((MR_Box) (ExportedName_12));
            MR_hl_field(0, NewExportedProc_37, 4) = ((MR_Box) (Context_14));
          }
          PragmaExportedProcs_38 = mercury__cord__snoc_2_f_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0), PragmaExportedProcs0_36, ((MR_Box) (NewExportedProc_37)));
          hlds__hlds_module__module_info_set_pragma_exported_procs_3_p_0(PragmaExportedProcs_38, STATE_VARIABLE_ModuleInfo_0_42, &STATE_VARIABLE_ModuleInfo_1_97);
        }
        else
          STATE_VARIABLE_ModuleInfo_1_97 = STATE_VARIABLE_ModuleInfo_0_42;
        hlds__hlds_pred__proc_info_set_has_any_foreign_exports_3_p_0((MR_Integer) 1, ProcInfo0_27, &ProcInfo_39);
        hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(PredId_22, ProcId_26, PredInfo_23, ProcInfo_39, STATE_VARIABLE_ModuleInfo_1_97, STATE_VARIABLE_ModuleInfo_43);
        *STATE_VARIABLE_Specs_45 = STATE_VARIABLE_Specs_0_44;
      }
    }
    else
    {
      if ((Origin_9 == (MR_Word) ((MR_Unsigned) 0U)))
        hlds__make_hlds_error__report_undeclared_mode_error_9_p_0(STATE_VARIABLE_ModuleInfo_0_42, PredId_22, PredInfo_23, VarSet_13, ArgModes_18, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_impl_scalar_common_1[22])), Context_14, STATE_VARIABLE_Specs_0_44, STATE_VARIABLE_Specs_45);
      else
        *STATE_VARIABLE_Specs_45 = STATE_VARIABLE_Specs_0_44;
      *STATE_VARIABLE_ModuleInfo_43 = STATE_VARIABLE_ModuleInfo_0_42;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_impl__add_impl_pragmas_tabled_8_p_0_1(
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
  MR_Word conv2_STATE_VARIABLE_ModuleInfo_28;
  MR_Word conv1_STATE_VARIABLE_QualInfo_30;
  MR_Word conv0_STATE_VARIABLE_Specs_32;

  hlds__make_hlds__add_pragma_impl__add_impl_pragma_tabled_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ModuleInfo_28, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_QualInfo_30, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_Specs_32);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ModuleInfo_28));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_QualInfo_30));
  *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_32));
}

void MR_CALL 
hlds__make_hlds__add_pragma_impl__add_impl_pragmas_tabled_8_p_0(
  MR_Word ProgressStream_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4,
  MR_Word STATE_VARIABLE_QualInfo_0_5,
  MR_Word * STATE_VARIABLE_QualInfo_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
      *STATE_VARIABLE_QualInfo_6 = STATE_VARIABLE_QualInfo_0_5;
      *STATE_VARIABLE_ModuleInfo_4 = STATE_VARIABLE_ModuleInfo_0_3;
    }
    else
    {
      MR_Word ImsList_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word ImsLists_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word ItemMercuryStatus_25 = ((MR_Word) ((MR_hl_field(0, ImsList_20, 0))));
      MR_Word Items_26 = ((MR_Word) ((MR_hl_field(0, ImsList_20, 1))));
      MR_Word Var_33;
      MR_Word STATE_VARIABLE_ModuleInfo_1_34;
      MR_Word STATE_VARIABLE_QualInfo_1_35;
      MR_Word STATE_VARIABLE_Specs_1_36;
      MR_Box conv5_STATE_VARIABLE_ModuleInfo_1_34;
      MR_Box conv4_STATE_VARIABLE_QualInfo_1_35;
      MR_Box conv3_STATE_VARIABLE_Specs_1_36;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_3;
      MR_Word next_value_of_STATE_VARIABLE_QualInfo_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      {
        Var_33 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_33, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_impl_scalar_common_4[1]));
        MR_hl_field(0, Var_33, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_impl__add_impl_pragmas_tabled_8_p_0_1));
        MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_33, 3) = ((MR_Box) (ProgressStream_1));
        MR_hl_field(0, Var_33, 4) = ((MR_Box) (ItemMercuryStatus_25));
      }
      mercury__list__foldl3_8_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_impl_pragma_tabled_info_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0), (MR_Word) (&hlds__make_hlds__add_pragma_impl_scalar_common_1[1]), Var_33, Items_26, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_3)), &conv5_STATE_VARIABLE_ModuleInfo_1_34, ((MR_Box) (STATE_VARIABLE_QualInfo_0_5)), &conv4_STATE_VARIABLE_QualInfo_1_35, ((MR_Box) (STATE_VARIABLE_Specs_0_7)), &conv3_STATE_VARIABLE_Specs_1_36);
      STATE_VARIABLE_ModuleInfo_1_34 = ((MR_Word) (conv5_STATE_VARIABLE_ModuleInfo_1_34));
      STATE_VARIABLE_QualInfo_1_35 = ((MR_Word) (conv4_STATE_VARIABLE_QualInfo_1_35));
      STATE_VARIABLE_Specs_1_36 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_1_36));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ImsLists_21;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_3 = STATE_VARIABLE_ModuleInfo_1_34;
      next_value_of_STATE_VARIABLE_QualInfo_0_5 = STATE_VARIABLE_QualInfo_1_35;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_1_36;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_ModuleInfo_0_3 = next_value_of_STATE_VARIABLE_ModuleInfo_0_3;
      STATE_VARIABLE_QualInfo_0_5 = next_value_of_STATE_VARIABLE_QualInfo_0_5;
      STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_impl__add_impl_pragmas_8_p_0_1(
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
  MR_Word conv2_STATE_VARIABLE_PragmaTabledCord_37;
  MR_Word conv1_STATE_VARIABLE_ModuleInfo_39;
  MR_Word conv0_STATE_VARIABLE_Specs_41;

  hlds__make_hlds__add_pragma_impl__add_impl_pragma_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_PragmaTabledCord_37, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_ModuleInfo_39, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_Specs_41);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_PragmaTabledCord_37));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_ModuleInfo_39));
  *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_41));
}

void MR_CALL 
hlds__make_hlds__add_pragma_impl__add_impl_pragmas_8_p_0(
  MR_Word ProgressStream_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_PragmaTabledListCord_0_3,
  MR_Word * STATE_VARIABLE_PragmaTabledListCord_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_5,
  MR_Word * STATE_VARIABLE_ModuleInfo_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
      *STATE_VARIABLE_ModuleInfo_6 = STATE_VARIABLE_ModuleInfo_0_5;
      *STATE_VARIABLE_PragmaTabledListCord_4 = STATE_VARIABLE_PragmaTabledListCord_0_3;
    }
    else
    {
      MR_Word ImsList_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word ImsLists_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word ItemMercuryStatus_25 = ((MR_Word) ((MR_hl_field(0, ImsList_20, 0))));
      MR_Word Items_26 = ((MR_Word) ((MR_hl_field(0, ImsList_20, 1))));
      MR_Word PragmaTabledCord_27;
      MR_Word PragmaTabledList_28;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word STATE_VARIABLE_ModuleInfo_1_40;
      MR_Word STATE_VARIABLE_Specs_1_41;
      MR_Word STATE_VARIABLE_PragmaTabledListCord_1_42;
      MR_Box conv5_PragmaTabledCord_27;
      MR_Box conv4_STATE_VARIABLE_ModuleInfo_1_40;
      MR_Box conv3_STATE_VARIABLE_Specs_1_41;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_PragmaTabledListCord_0_3;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      {
        Var_38 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_38, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_impl_scalar_common_4[0]));
        MR_hl_field(0, Var_38, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_impl__add_impl_pragmas_8_p_0_1));
        MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_38, 3) = ((MR_Box) (ProgressStream_1));
        MR_hl_field(0, Var_38, 4) = ((MR_Box) (ItemMercuryStatus_25));
      }
      Var_39 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_impl_pragma_tabled_info_0));
      mercury__list__foldl3_8_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_pragma_info_0), (MR_Word) (&hlds__make_hlds__add_pragma_impl_scalar_common_1[0]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__add_pragma_impl_scalar_common_1[1]), Var_38, Items_26, ((MR_Box) (Var_39)), &conv5_PragmaTabledCord_27, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_5)), &conv4_STATE_VARIABLE_ModuleInfo_1_40, ((MR_Box) (STATE_VARIABLE_Specs_0_7)), &conv3_STATE_VARIABLE_Specs_1_41);
      PragmaTabledCord_27 = ((MR_Word) (conv5_PragmaTabledCord_27));
      STATE_VARIABLE_ModuleInfo_1_40 = ((MR_Word) (conv4_STATE_VARIABLE_ModuleInfo_1_40));
      STATE_VARIABLE_Specs_1_41 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_1_41));
      PragmaTabledList_28 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_impl_pragma_tabled_info_0), PragmaTabledCord_27);
      if ((PragmaTabledList_28 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_PragmaTabledListCord_1_42 = STATE_VARIABLE_PragmaTabledListCord_0_3;
      else
      {
        MR_Word SubList_31;

        {
          SubList_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, SubList_31, 0) = ((MR_Box) (ItemMercuryStatus_25));
          MR_hl_field(0, SubList_31, 1) = ((MR_Box) (PragmaTabledList_28));
        }
        mercury__cord__snoc_3_p_0((MR_Word) (&hlds__make_hlds__add_pragma_impl_scalar_common_1[2]), ((MR_Box) (SubList_31)), STATE_VARIABLE_PragmaTabledListCord_0_3, &STATE_VARIABLE_PragmaTabledListCord_1_42);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ImsLists_21;
      next_value_of_STATE_VARIABLE_PragmaTabledListCord_0_3 = STATE_VARIABLE_PragmaTabledListCord_1_42;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_5 = STATE_VARIABLE_ModuleInfo_1_40;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_1_41;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_PragmaTabledListCord_0_3 = next_value_of_STATE_VARIABLE_PragmaTabledListCord_0_3;
      STATE_VARIABLE_ModuleInfo_0_5 = next_value_of_STATE_VARIABLE_ModuleInfo_0_5;
      STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
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
