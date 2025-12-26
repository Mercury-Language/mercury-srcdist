/*
** Automatically generated from `add_clause.m'
** by the Mercury compiler,
** version rotd-2025-12-26
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


// :- module hlds.make_hlds.add_clause.
// :- implementation.

/*
INIT mercury__hlds__make_hlds__add_clause__init
ENDINIT
*/

#include "hlds.make_hlds.add_clause.mih"


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
#include "counter.mih"
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
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.default_func_mode.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_transform.mih"
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
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.make_hlds.mih"
#include "hlds.make_hlds_error.mih"
#include "hlds.pre_quantification.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
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
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_inst_mode_name.mih"
#include "parse_tree.parse_tree_out_clause.mih"
#include "parse_tree.parse_tree_out_info.mih"
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
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "hlds.make_hlds.add_pred.mih"
#include "hlds.make_hlds.goal_expr_to_goal.mih"
#include "hlds.make_hlds.make_hlds_warn.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "hlds.make_hlds.state_var.mih"
#include "hlds.make_hlds.superhomogeneous.mih"
#include "hlds.make_hlds.superhomogeneous_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.id_set.mih"
#include "parse_tree.module_qual.mq_info.mih"
#include "parse_tree.module_qual.qual_errors.mih"
#include "parse_tree.module_qual.qualify_items.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_clause__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

static const MR_DuFunctorDesc hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_clause_type_0_0;

static const MR_PseudoTypeInfo hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__field_types_clause_type_0_1[1];

static const MR_DuArgLocn hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__field_locns_clause_type_0_1[1];

static const MR_DuFunctorDesc hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_clause_type_0_1;

static const MR_DuFunctorDescPtr hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_stag_ordered_clause_type_0_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_stag_ordered_clause_type_0_1[1];

static const MR_DuPtagLayout hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_ptag_ordered_clause_type_0[2];

static const MR_DuFunctorDescPtr hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_name_ordered_clause_type_0[2];

static const MR_Integer hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__functor_number_map_clause_type_0[2];

static const MR_EnumFunctorDesc hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__enum_functor_desc_maybe_should_warn_0_0;

static const MR_EnumFunctorDesc hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__enum_functor_desc_maybe_should_warn_0_1;

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__enum_ordinal_ordered_maybe_should_warn_0[2];

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__enum_name_ordered_maybe_should_warn_0[2];

static const MR_Integer hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__functor_number_map_maybe_should_warn_0[2];

static MR_Word MR_CALL 
hlds__make_hlds__add_clause__IntroducedFrom__func__select_applicable_modes__505__1_1_f_0(
  MR_Integer LambdaHeadVar__1_124);

static MR_bool MR_CALL 
hlds__make_hlds__add_clause__IntroducedFrom__func__add_clause_to_clauses_info__697__1_1_f_0(
  MR_Word LambdaHeadVar__1_115,
  MR_Word * LambdaHeadVar__2_116);

static void MR_CALL 
hlds__make_hlds__add_clause____Compare____maybe_should_warn_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_clause____Unify____maybe_should_warn_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__add_clause__add_clause_to_hlds_19_p_0(
  MR_Word ProgressStream_20,
  MR_Word PredStatus_21,
  MR_Word ClauseType_22,
  MR_Word PredId_23,
  MR_Word PredOrFunc_24,
  MR_Word PredSymName_25,
  MR_Word MaybeAnnotatedArgTerms_26,
  MR_Word PredFormArity_27,
  MR_Word ClauseVarSet_28,
  MR_Word MaybeBodyGoal_29,
  MR_Word Context_30,
  MR_Word SeqNum_31,
  MR_Word IllegalSVarResult_32,
  MR_Word STATE_VARIABLE_ModuleInfo_0_66,
  MR_Word * STATE_VARIABLE_ModuleInfo_67,
  MR_Word STATE_VARIABLE_QualInfo_0_68,
  MR_Word * STATE_VARIABLE_QualInfo_69,
  MR_Word STATE_VARIABLE_Specs_0_70,
  MR_Word * STATE_VARIABLE_Specs_71);

static MR_Box MR_CALL 
hlds__make_hlds__add_clause__select_applicable_modes_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_clause__select_applicable_modes_14_p_0(
  MR_Word ModuleInfo_15,
  MR_Word MaybeAnnotatedArgTerms_16,
  MR_Word VarSet_17,
  MR_Word PredStatus_18,
  MR_Word Context_19,
  MR_Word PredId_20,
  MR_Word PredInfo_21,
  MR_Word * ArgTerms_22,
  MR_Word * ApplProcIds_23,
  MR_Word * AllProcIds_24,
  MR_Word STATE_VARIABLE_QualInfo_0_60,
  MR_Word * STATE_VARIABLE_QualInfo_61,
  MR_Word STATE_VARIABLE_Specs_0_62,
  MR_Word * STATE_VARIABLE_Specs_63);

static void MR_CALL 
hlds__make_hlds__add_clause__get_mode_annotations_8_p_0(
  MR_Word VarSet_1,
  MR_Word ContextPieces_2,
  MR_Integer ArgNum_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8);

static void MR_CALL 
hlds__make_hlds__add_clause__maybe_add_error_for_builtin_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredInfo_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16);

static void MR_CALL 
hlds__make_hlds__add_clause__maybe_add_error_for_field_access_function_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word PredStatus_10,
  MR_Word PredOrFunc_11,
  MR_Word PredSymName_12,
  MR_Word PredFormArity_13,
  MR_Word Context_14,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26);

static void MR_CALL 
hlds__make_hlds__add_clause__add_clause_progress_msg_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word ModuleInfo_10,
  MR_Word PredInfo_11,
  MR_Word PredOrFunc_12,
  MR_Word PredName_13,
  MR_Word PredFormArity_14);

static MR_bool MR_CALL 
hlds__make_hlds__add_clause__add_clause_to_clauses_info_21_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_clause__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_108_97_117_115_101_95_116_114_97_110_115_102_111_114_109_95_95_91_52_93_95_48_21_p_0(
  MR_Word KeepQuantVars_22,
  MR_Word Renaming_23,
  MR_Word PredOrFunc_24,
  MR_Word HeadVars_26,
  MR_Word ArgTerms0_27,
  MR_Word Context_28,
  MR_Word ClauseType_29,
  MR_Word ParseTreeBodyGoal_30,
  MR_Word * Goal_31,
  MR_Word STATE_VARIABLE_VarSet_0_75,
  MR_Word * STATE_VARIABLE_VarSet_76,
  MR_Word * QuantWarnings_33,
  MR_Word * StateVarWarningSpecs_34,
  MR_Word * UnusedSVarArgMap_35,
  MR_Word STATE_VARIABLE_ModuleInfo_0_77,
  MR_Word * STATE_VARIABLE_ModuleInfo_78,
  MR_Word STATE_VARIABLE_QualInfo_0_79,
  MR_Word * STATE_VARIABLE_QualInfo_80,
  MR_Word STATE_VARIABLE_Specs_0_81,
  MR_Word * STATE_VARIABLE_Specs_82);

static void MR_CALL 
hlds__make_hlds__add_clause__should_we_do_singleton_and_quant_warnings_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredStatus_6,
  MR_Word ClausesInfo_7,
  MR_Word * ShouldWarn_8);

static MR_bool MR_CALL 
hlds__make_hlds__add_clause____Unify____clause_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_clause____Compare____clause_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_clause____Unify____maybe_should_warn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_clause____Compare____maybe_should_warn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_1[69][2];

static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_2[5][1];

static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_3[2][5];

static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_4[2][3];




static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_1[69][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&hlds__make_hlds__add_clause_scalar_common_2[0])),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: attempt to define a clause for"))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[4]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 15U)),
    ((MR_Box) (&hlds__make_hlds__add_clause_scalar_common_1[3]))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[7]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[8])))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "This is usually caused by"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[10]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[11])))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "a period instead of a comma"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[13]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "inadvertently writing"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[14])))
  },
  /* row  17 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "at the end of the preceding line."))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[17])))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "clause"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[20]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[22]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "field access function"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[24]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "clause for automatically generated"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[25])))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of the constructor a different name."))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[17])))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "to a field update, give the field"))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[29])))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "function, for example to check the input"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[31])))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "To supply your own definition for a field access"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[33])))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "are automatically generated by the compiler."))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[35])))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Clauses for field access functions"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[37])))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: clause for a builtin"))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[40]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In the head of a clause for"))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[17])))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning: the"))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[45]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "so there is"))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[47]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "has only one mode,"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[48])))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "a clause for it to that mode."))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[51]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "no need to restrict"))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[52])))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "syntax error:"))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[55]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  57 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[56])))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[57])))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "have mode annotations."))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[59]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "some but not all arguments"))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[60])))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in the"))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "argument:"))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[17])))
  },
  /* row  66 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  67 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[39])))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_mkword(2, &hlds__make_hlds__add_clause_scalar_common_1[67]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_2[5][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) ",")) },
  /* row   1 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   2 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   3 */
  { (MR_Box) ((MR_Unsigned) 222U) },
  /* row   4 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
};

static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_3[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&hlds__make_hlds__add_clause__list__pti_list_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_4[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&hlds__make_hlds__add_clause_scalar_common_3[0])),
    ((MR_Box) (hlds__make_hlds__add_clause__add_clause_to_clauses_info_21_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&hlds__make_hlds__add_clause_scalar_common_3[1])),
    ((MR_Box) (hlds__make_hlds__add_clause__select_applicable_modes_14_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_clause__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_DuFunctorDesc hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_clause_type_0_0 = {
  (MR_String) "clause_not_for_promise",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__field_types_clause_type_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_promise_type_0) };

static const MR_DuArgLocn hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__field_locns_clause_type_0_1[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_clause_type_0_1 = {
  (MR_String) "clause_for_promise",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__field_types_clause_type_0_1,
  NULL,
  hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__field_locns_clause_type_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_stag_ordered_clause_type_0_0[1] = { &hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_clause_type_0_0 };

static const MR_DuFunctorDescPtr hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_stag_ordered_clause_type_0_1[1] = { &hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_clause_type_0_1 };

static const MR_DuPtagLayout hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_ptag_ordered_clause_type_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_stag_ordered_clause_type_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_stag_ordered_clause_type_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_name_ordered_clause_type_0[2] = {
  &hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_clause_type_0_1,
  &hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_clause_type_0_0
};

static const MR_Integer hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__functor_number_map_clause_type_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__type_ctor_info_clause_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__add_clause____Unify____clause_type_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_clause____Compare____clause_type_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_clause",
  (MR_String) "clause_type",
  { hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_name_ordered_clause_type_0 },
  { hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_ptag_ordered_clause_type_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__functor_number_map_clause_type_0,

};

static const MR_EnumFunctorDesc hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__enum_functor_desc_maybe_should_warn_0_0 = {
  (MR_String) "should_not_warn",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__enum_functor_desc_maybe_should_warn_0_1 = {
  (MR_String) "should_warn",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__enum_ordinal_ordered_maybe_should_warn_0[2] = {
  &hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__enum_functor_desc_maybe_should_warn_0_0,
  &hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__enum_functor_desc_maybe_should_warn_0_1
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__enum_name_ordered_maybe_should_warn_0[2] = {
  &hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__enum_functor_desc_maybe_should_warn_0_0,
  &hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__enum_functor_desc_maybe_should_warn_0_1
};

static const MR_Integer hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__functor_number_map_maybe_should_warn_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__type_ctor_info_maybe_should_warn_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__add_clause____Unify____maybe_should_warn_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_clause____Compare____maybe_should_warn_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_clause",
  (MR_String) "maybe_should_warn",
  { hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__enum_name_ordered_maybe_should_warn_0 },
  { hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__enum_ordinal_ordered_maybe_should_warn_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__functor_number_map_maybe_should_warn_0,

};

static MR_Word MR_CALL 
hlds__make_hlds__add_clause__IntroducedFrom__func__select_applicable_modes__505__1_1_f_0(
  MR_Integer LambdaHeadVar__1_124)
{
  MR_Word LambdaHeadVar__2_125;

  {
    LambdaHeadVar__2_125 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, LambdaHeadVar__2_125, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, LambdaHeadVar__2_125, 1) = ((MR_Box) (LambdaHeadVar__1_124));
  }
  return LambdaHeadVar__2_125;
}

static MR_bool MR_CALL 
hlds__make_hlds__add_clause__IntroducedFrom__func__add_clause_to_clauses_info__697__1_1_f_0(
  MR_Word LambdaHeadVar__1_115,
  MR_Word * LambdaHeadVar__2_116)
{
  MR_bool succeeded;
  MR_Word ApplProcIds_81 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_115, 0))));
  MR_Word Var_117 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_115, 2))));

  succeeded = (Var_117 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    switch (MR_tag((MR_Word) ApplProcIds_81)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ApplProcIds_81)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_clause.add_clause_to_clauses_info\'/21", (MR_String) "all_modes foreign_proc");
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_clause.add_clause_to_clauses_info\'/21", (MR_String) "unify modes for foreign_proc");
            break;
        }
        break;
      case (MR_Integer) 1:
        *LambdaHeadVar__2_116 = ((MR_Word) ((MR_hl_field(1, ApplProcIds_81, 0))));
        break;
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_clause____Compare____maybe_should_warn_0_0(
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
hlds__make_hlds__add_clause____Unify____maybe_should_warn_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__make_hlds__add_clause____Compare____clause_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 3);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 0))) & (MR_Integer) 3);
    MR_Integer Var_9 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_10 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_9 < Var_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Var_9 > Var_10);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

MR_bool MR_CALL 
hlds__make_hlds__add_clause____Unify____clause_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_6 == CastX_5);
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 0))) & (MR_Integer) 3);
    MR_Word ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 3);
      succeeded = (ArgX1_3 == ArgY1_4);
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__make_hlds__add_clause__module_add_clause_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word PredStatus_12,
  MR_Word ClauseType_13,
  MR_Word ClauseInfo_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_46,
  MR_Word * STATE_VARIABLE_ModuleInfo_47,
  MR_Word STATE_VARIABLE_QualInfo_0_48,
  MR_Word * STATE_VARIABLE_QualInfo_49,
  MR_Word STATE_VARIABLE_Specs_0_50,
  MR_Word * STATE_VARIABLE_Specs_51)
{
  MR_bool succeeded;
  MR_Word PredOrFunc_18 = ((MR_Unsigned) ((MR_hl_field(0, ClauseInfo_14, 0))) & (MR_Integer) 1);
  MR_Word PredSymName_19 = ((MR_Word) ((MR_hl_field(0, ClauseInfo_14, 1))));
  MR_Word ArgTerms0_20 = ((MR_Word) ((MR_hl_field(0, ClauseInfo_14, 2))));
  MR_Word ClauseVarSet_21 = ((MR_Word) ((MR_hl_field(0, ClauseInfo_14, 3))));
  MR_Word MaybeBodyGoal_22 = ((MR_Word) ((MR_hl_field(0, ClauseInfo_14, 4))));
  MR_Word Context_23 = ((MR_Word) ((MR_hl_field(0, ClauseInfo_14, 5))));
  MR_Word SeqNum_24 = ((MR_Word) ((MR_hl_field(0, ClauseInfo_14, 6))));
  MR_Word PredModuleName_25;
  MR_String PredName_26;
  MR_Word IllegalSVarResult_30;
  MR_Word ArgTerms_31;
  MR_Integer Arity0_32;
  MR_Integer Arity_34;
  MR_Word PredFormArity_35;
  MR_Word PredicateTable_37;
  MR_Word PredIds_38;
  MR_Word SVar_28;
  MR_Word SVarCtxt_29;
  MR_Word PredId_39;
  MR_Word Var_57;

  if (((MR_tag((MR_Word) PredSymName_19)) == (MR_Integer) 1))
  {
    PredModuleName_25 = ((MR_Word) ((MR_hl_field(1, PredSymName_19, 0))));
    PredName_26 = ((MR_String) ((MR_hl_field(1, PredSymName_19, 1))));
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_clause.module_add_clause\'/10", (MR_String) "PredSymName is unqualified");
      return;
    }
  hlds__make_hlds__state_var__expand_bang_state_pairs_in_terms_2_p_0(ArgTerms0_20, &ArgTerms_31);
  mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__add_clause_scalar_common_1[0]), ArgTerms_31, &Arity0_32);
  succeeded = hlds__make_hlds__state_var__illegal_state_var_func_result_4_p_0(PredOrFunc_18, ArgTerms0_20, &SVar_28, &SVarCtxt_29);
  if (succeeded)
  {
    MR_Tuple Var_54;

    {
      Var_54 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_54, 0) = ((MR_Box) (SVar_28));
      MR_hl_field(0, Var_54, 1) = ((MR_Box) (SVarCtxt_29));
    }
    {
      IllegalSVarResult_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, IllegalSVarResult_30, 0) = ((MR_Box) (Var_54));
    }
    Arity_34 = (MR_Integer) ((MR_Unsigned) Arity0_32 - (MR_Unsigned) 1);
  }
  else
  {
    IllegalSVarResult_30 = (MR_Word) ((MR_Unsigned) 0U);
    Arity_34 = Arity0_32;
  }
  PredFormArity_35 = (MR_Word) (Arity_34);
  hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_46, &PredicateTable_37);
  hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredicateTable_37, (MR_Integer) 0, PredOrFunc_18, PredSymName_19, PredFormArity_35, &PredIds_38);
  succeeded = (PredIds_38 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    PredId_39 = ((MR_Word) ((MR_hl_field(1, PredIds_38, 0))));
    Var_57 = ((MR_Word) ((MR_hl_field(1, PredIds_38, 1))));
    succeeded = (Var_57 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
    hlds__make_hlds__add_clause__add_clause_to_hlds_19_p_0(ProgressStream_11, PredStatus_12, ClauseType_13, PredId_39, PredOrFunc_18, PredSymName_19, ArgTerms_31, PredFormArity_35, ClauseVarSet_21, MaybeBodyGoal_22, Context_23, SeqNum_24, IllegalSVarResult_30, STATE_VARIABLE_ModuleInfo_0_46, STATE_VARIABLE_ModuleInfo_47, STATE_VARIABLE_QualInfo_0_48, STATE_VARIABLE_QualInfo_49, STATE_VARIABLE_Specs_0_50, STATE_VARIABLE_Specs_51);
  else
  {
    succeeded = (strcmp(PredName_26, (MR_String) ",") == 0);
    if (succeeded)
      succeeded = (Arity_34 == (MR_Integer) 2);
    if (succeeded)
    {
      MR_Word Pieces_41;
      MR_Word Spec_42;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_76;
      MR_Word Var_83;
      MR_Word Var_84;

      Var_69 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[9])));
      Var_84 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[16])));
      Var_83 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_84, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[19])));
      Var_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[12])), Var_83);
      Var_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_69, Var_76);
      Pieces_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[5])), Var_68);
      {
        Spec_42 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_42, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_clause.module_add_clause\'/10"));
        MR_hl_field(0, Spec_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_42, 2) = ((MR_Box) ((MR_Unsigned) 44U));
        MR_hl_field(0, Spec_42, 3) = ((MR_Box) (Context_23));
        MR_hl_field(0, Spec_42, 4) = ((MR_Box) (Pieces_41));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_51 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_42));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_50));
      }
      *STATE_VARIABLE_QualInfo_49 = STATE_VARIABLE_QualInfo_0_48;
      *STATE_VARIABLE_ModuleInfo_47 = STATE_VARIABLE_ModuleInfo_0_46;
    }
    else
    {
      MR_Word STATE_VARIABLE_ModuleInfo_2_107;
      MR_Word STATE_VARIABLE_Specs_3_108;
      MR_Word PredId_115;

      if ((ClauseType_13 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word UserArity_44;
        MR_Word Origin_45;
        MR_Word Var_104;

        parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_18, &UserArity_44, PredFormArity_35);
        {
          Var_104 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_104, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_18));
          MR_hl_field(0, Var_104, 1) = ((MR_Box) (PredSymName_19));
          MR_hl_field(0, Var_104, 2) = ((MR_Box) (UserArity_44));
        }
        {
          Origin_45 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Origin_45, 0) = ((MR_Box) (Var_104));
        }
        hlds__make_hlds__add_pred__add_implicit_pred_decl_report_error_14_p_0(PredOrFunc_18, PredModuleName_25, PredName_26, PredFormArity_35, PredStatus_12, (MR_Integer) 0, Context_23, Origin_45, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[21])), &PredId_115, STATE_VARIABLE_ModuleInfo_0_46, &STATE_VARIABLE_ModuleInfo_2_107, STATE_VARIABLE_Specs_0_50, &STATE_VARIABLE_Specs_3_108);
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_clause.module_add_clause\'/10", (MR_String) "clause for undeclared promise");
          return;
        }
      hlds__make_hlds__add_clause__add_clause_to_hlds_19_p_0(ProgressStream_11, PredStatus_12, ClauseType_13, PredId_115, PredOrFunc_18, PredSymName_19, ArgTerms_31, PredFormArity_35, ClauseVarSet_21, MaybeBodyGoal_22, Context_23, SeqNum_24, IllegalSVarResult_30, STATE_VARIABLE_ModuleInfo_2_107, STATE_VARIABLE_ModuleInfo_47, STATE_VARIABLE_QualInfo_0_48, STATE_VARIABLE_QualInfo_49, STATE_VARIABLE_Specs_3_108, STATE_VARIABLE_Specs_51);
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_clause__add_clause_to_hlds_19_p_0(
  MR_Word ProgressStream_20,
  MR_Word PredStatus_21,
  MR_Word ClauseType_22,
  MR_Word PredId_23,
  MR_Word PredOrFunc_24,
  MR_Word PredSymName_25,
  MR_Word MaybeAnnotatedArgTerms_26,
  MR_Word PredFormArity_27,
  MR_Word ClauseVarSet_28,
  MR_Word MaybeBodyGoal_29,
  MR_Word Context_30,
  MR_Word SeqNum_31,
  MR_Word IllegalSVarResult_32,
  MR_Word STATE_VARIABLE_ModuleInfo_0_66,
  MR_Word * STATE_VARIABLE_ModuleInfo_67,
  MR_Word STATE_VARIABLE_QualInfo_0_68,
  MR_Word * STATE_VARIABLE_QualInfo_69,
  MR_Word STATE_VARIABLE_Specs_0_70,
  MR_Word * STATE_VARIABLE_Specs_71)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_PredInfo_1_72;
  MR_Word STATE_VARIABLE_PredInfo_3_80;
  MR_Word STATE_VARIABLE_PredSpecs_2_83;
  MR_Word STATE_VARIABLE_PredSpecs_3_84;
  MR_Word STATE_VARIABLE_PredSpecs_4_85;
  MR_Word STATE_VARIABLE_PredInfo_4_86;
  MR_Word Var_75;
  MR_Word Var_44;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_66, PredId_23, &STATE_VARIABLE_PredInfo_1_72);
  hlds__make_hlds__add_clause__add_clause_progress_msg_8_p_0(ProgressStream_20, STATE_VARIABLE_ModuleInfo_0_66, STATE_VARIABLE_PredInfo_1_72, PredOrFunc_24, PredSymName_25, PredFormArity_27);
  Var_75 = (MR_Word) (PredStatus_21);
  succeeded = (Var_75 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    MR_Word Markers0_39;
    MR_Word Markers_40;
    MR_Word STATE_VARIABLE_PredInfo_2_77;

    hlds__hlds_pred__pred_info_set_status_3_p_0((MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), STATE_VARIABLE_PredInfo_1_72, &STATE_VARIABLE_PredInfo_2_77);
    hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_2_77, &Markers0_39);
    hlds__hlds_markers__add_marker_3_p_0((MR_Integer) 23, Markers0_39, &Markers_40);
    hlds__hlds_pred__pred_info_set_markers_3_p_0(Markers_40, STATE_VARIABLE_PredInfo_2_77, &STATE_VARIABLE_PredInfo_3_80);
  }
  else
    STATE_VARIABLE_PredInfo_3_80 = STATE_VARIABLE_PredInfo_1_72;
  if ((IllegalSVarResult_32 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_PredSpecs_2_83 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word StateVar_41;
    MR_Word StateVarContext_42;
    MR_Word ResultSpec_43;
    MR_Tuple Var_82 = ((MR_Tuple) ((MR_hl_field(1, IllegalSVarResult_32, 0))));

    StateVar_41 = ((MR_Word) ((MR_hl_field(0, Var_82, 0))));
    StateVarContext_42 = ((MR_Word) ((MR_hl_field(0, Var_82, 1))));
    ResultSpec_43 = hlds__make_hlds__state_var__report_illegal_func_svar_result_raw_3_f_0(StateVarContext_42, ClauseVarSet_28, StateVar_41);
    {
      STATE_VARIABLE_PredSpecs_2_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_PredSpecs_2_83, 0) = ((MR_Box) (ResultSpec_43));
      MR_hl_field(1, STATE_VARIABLE_PredSpecs_2_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  hlds__make_hlds__add_clause__maybe_add_error_for_field_access_function_8_p_0(STATE_VARIABLE_ModuleInfo_0_66, PredStatus_21, PredOrFunc_24, PredSymName_25, PredFormArity_27, Context_30, STATE_VARIABLE_PredSpecs_2_83, &STATE_VARIABLE_PredSpecs_3_84);
  hlds__make_hlds__add_clause__maybe_add_error_for_builtin_5_p_0(STATE_VARIABLE_ModuleInfo_0_66, STATE_VARIABLE_PredInfo_3_80, Context_30, STATE_VARIABLE_PredSpecs_3_84, &STATE_VARIABLE_PredSpecs_4_85);
  hlds__default_func_mode__maybe_add_default_func_mode_4_p_0(STATE_VARIABLE_ModuleInfo_0_66, STATE_VARIABLE_PredInfo_3_80, &STATE_VARIABLE_PredInfo_4_86, &Var_44);
  if ((STATE_VARIABLE_PredSpecs_4_85 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word STATE_VARIABLE_PredInfo_5_92;
    MR_Word STATE_VARIABLE_ModuleInfo_1_96;

    if (((MR_tag((MR_Word) MaybeBodyGoal_29)) == (MR_Integer) 0))
    {
      MR_Word BodyGoalSpecs_47 = ((MR_Word) ((MR_hl_field(0, MaybeBodyGoal_29, 0))));
      MR_Word Clauses0_48;
      MR_Word Clauses_49;
      MR_Word Var_105;
      MR_Word Var_106;
      MR_Word Var_107;
      MR_Word Var_108;
      MR_Word Var_109;
      MR_Word Var_110;
      MR_Word Var_111;
      MR_Word Var_112;
      MR_Word Var_113;

      *STATE_VARIABLE_Specs_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), BodyGoalSpecs_47, STATE_VARIABLE_Specs_0_70);
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_4_86, &Clauses0_48);
      Var_105 = ((MR_Word) ((MR_hl_field(0, Clauses0_48, 0))));
      Var_106 = ((MR_Word) ((MR_hl_field(0, Clauses0_48, 1))));
      Var_107 = ((MR_Word) ((MR_hl_field(0, Clauses0_48, 2))));
      Var_108 = ((MR_Word) ((MR_hl_field(0, Clauses0_48, 3))));
      Var_109 = ((MR_Word) ((MR_hl_field(0, Clauses0_48, 4))));
      Var_110 = ((MR_Word) ((MR_hl_field(0, Clauses0_48, 5))));
      Var_111 = ((MR_Word) ((MR_hl_field(0, Clauses0_48, 6))));
      Var_112 = ((MR_Word) ((MR_hl_field(0, Clauses0_48, 7))));
      Var_113 = ((((MR_Unsigned) ((MR_hl_field(0, Clauses0_48, 8))) >> 1)) & (MR_Integer) 1);
      {
        Clauses_49 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Clauses_49, 0) = ((MR_Box) (Var_105));
        MR_hl_field(0, Clauses_49, 1) = ((MR_Box) (Var_106));
        MR_hl_field(0, Clauses_49, 2) = ((MR_Box) (Var_107));
        MR_hl_field(0, Clauses_49, 3) = ((MR_Box) (Var_108));
        MR_hl_field(0, Clauses_49, 4) = ((MR_Box) (Var_109));
        MR_hl_field(0, Clauses_49, 5) = ((MR_Box) (Var_110));
        MR_hl_field(0, Clauses_49, 6) = ((MR_Box) (Var_111));
        MR_hl_field(0, Clauses_49, 7) = ((MR_Box) (Var_112));
        MR_hl_field(0, Clauses_49, 8) = (MR_Box) (((((MR_Unsigned) (Var_113) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
      }
      hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(Clauses_49, STATE_VARIABLE_PredInfo_4_86, &STATE_VARIABLE_PredInfo_5_92);
      STATE_VARIABLE_ModuleInfo_1_96 = STATE_VARIABLE_ModuleInfo_0_66;
      *STATE_VARIABLE_QualInfo_69 = STATE_VARIABLE_QualInfo_0_68;
    }
    else
    {
      MR_Word BodyGoal_50 = ((MR_Word) ((MR_hl_field(1, MaybeBodyGoal_29, 0))));
      MR_Word BodyGoalWarningSpecs_51 = ((MR_Word) ((MR_hl_field(1, MaybeBodyGoal_29, 1))));
      MR_Word ClausesInfo0_52;
      MR_Word TVarSet0_53;
      MR_Word ArgTerms_54;
      MR_Word ProcIdsForThisClause_55;
      MR_Word AllProcIds_56;
      MR_Word TVarSet_57;
      MR_Word ClausesInfo_58;
      MR_Word ExistQVars_61;
      MR_Word ArgTypes_62;
      MR_Word ProcIds_63;
      MR_Word STATE_VARIABLE_Specs_3_93;
      MR_Word STATE_VARIABLE_QualInfo_1_94;
      MR_Word STATE_VARIABLE_Specs_4_95;
      MR_Word STATE_VARIABLE_PredInfo_6_99;
      MR_Word STATE_VARIABLE_PredInfo_7_101;
      MR_Word STATE_VARIABLE_PredInfo_8_102;
      MR_Word STATE_VARIABLE_PredInfo_9_103;
      MR_Word _ArgTVarSet_60;

      STATE_VARIABLE_Specs_3_93 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), BodyGoalWarningSpecs_51, STATE_VARIABLE_Specs_0_70);
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_4_86, &ClausesInfo0_52);
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(STATE_VARIABLE_PredInfo_4_86, &TVarSet0_53);
      hlds__make_hlds__add_clause__select_applicable_modes_14_p_0(STATE_VARIABLE_ModuleInfo_0_66, MaybeAnnotatedArgTerms_26, ClauseVarSet_28, PredStatus_21, Context_30, PredId_23, STATE_VARIABLE_PredInfo_4_86, &ArgTerms_54, &ProcIdsForThisClause_55, &AllProcIds_56, STATE_VARIABLE_QualInfo_0_68, &STATE_VARIABLE_QualInfo_1_94, STATE_VARIABLE_Specs_3_93, &STATE_VARIABLE_Specs_4_95);
      hlds__make_hlds__add_clause__add_clause_to_clauses_info_21_p_0(ProcIdsForThisClause_55, AllProcIds_56, PredStatus_21, ClauseType_22, PredOrFunc_24, PredSymName_25, ArgTerms_54, Context_30, SeqNum_31, BodyGoal_50, ClauseVarSet_28, TVarSet0_53, &TVarSet_57, ClausesInfo0_52, &ClausesInfo_58, STATE_VARIABLE_ModuleInfo_0_66, &STATE_VARIABLE_ModuleInfo_1_96, STATE_VARIABLE_QualInfo_1_94, STATE_VARIABLE_QualInfo_69, STATE_VARIABLE_Specs_4_95, STATE_VARIABLE_Specs_71);
      hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo_58, STATE_VARIABLE_PredInfo_4_86, &STATE_VARIABLE_PredInfo_6_99);
      if ((ClauseType_22 == (MR_Word) ((MR_Unsigned) 0U)))
        hlds__hlds_pred__pred_info_update_goal_type_3_p_0((MR_Integer) 1, STATE_VARIABLE_PredInfo_6_99, &STATE_VARIABLE_PredInfo_7_101);
      else
        STATE_VARIABLE_PredInfo_7_101 = STATE_VARIABLE_PredInfo_6_99;
      hlds__hlds_pred__pred_info_set_typevarset_3_p_0(TVarSet_57, STATE_VARIABLE_PredInfo_7_101, &STATE_VARIABLE_PredInfo_8_102);
      hlds__hlds_pred__pred_info_get_arg_types_4_p_0(STATE_VARIABLE_PredInfo_8_102, &_ArgTVarSet_60, &ExistQVars_61, &ArgTypes_62);
      hlds__hlds_pred__pred_info_set_arg_types_5_p_0(TVarSet_57, ExistQVars_61, ArgTypes_62, STATE_VARIABLE_PredInfo_8_102, &STATE_VARIABLE_PredInfo_9_103);
      ProcIds_63 = hlds__hlds_pred__pred_info_all_procids_1_f_0(STATE_VARIABLE_PredInfo_9_103);
      succeeded = (ProcIds_63 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = (ClauseType_22 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        MR_Word EndMarkers0_64;
        MR_Word EndMarkers_65;

        hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_9_103, &EndMarkers0_64);
        hlds__hlds_markers__add_marker_3_p_0((MR_Integer) 3, EndMarkers0_64, &EndMarkers_65);
        hlds__hlds_pred__pred_info_set_markers_3_p_0(EndMarkers_65, STATE_VARIABLE_PredInfo_9_103, &STATE_VARIABLE_PredInfo_5_92);
      }
      else
        STATE_VARIABLE_PredInfo_5_92 = STATE_VARIABLE_PredInfo_9_103;
    }
    hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_23, STATE_VARIABLE_PredInfo_5_92, STATE_VARIABLE_ModuleInfo_1_96, STATE_VARIABLE_ModuleInfo_67);
  }
  else
  {
    MR_Word Var_88;
    MR_Word Var_89;

    Var_89 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeBodyGoal_29);
    Var_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_89, STATE_VARIABLE_Specs_0_70);
    *STATE_VARIABLE_Specs_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), STATE_VARIABLE_PredSpecs_4_85, Var_88);
    *STATE_VARIABLE_ModuleInfo_67 = STATE_VARIABLE_ModuleInfo_0_66;
    *STATE_VARIABLE_QualInfo_69 = STATE_VARIABLE_QualInfo_0_68;
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_clause__select_applicable_modes_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_125;

  conv0_LambdaHeadVar__2_125 = hlds__make_hlds__add_clause__IntroducedFrom__func__select_applicable_modes__505__1_1_f_0(((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_125));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__make_hlds__add_clause__select_applicable_modes_14_p_0(
  MR_Word ModuleInfo_15,
  MR_Word MaybeAnnotatedArgTerms_16,
  MR_Word VarSet_17,
  MR_Word PredStatus_18,
  MR_Word Context_19,
  MR_Word PredId_20,
  MR_Word PredInfo_21,
  MR_Word * ArgTerms_22,
  MR_Word * ApplProcIds_23,
  MR_Word * AllProcIds_24,
  MR_Word STATE_VARIABLE_QualInfo_0_60,
  MR_Word * STATE_VARIABLE_QualInfo_61,
  MR_Word STATE_VARIABLE_Specs_0_62,
  MR_Word * STATE_VARIABLE_Specs_63)
{
  MR_bool succeeded;
  MR_String PredIdStr_27;
  MR_Word ContextPieces_28;
  MR_Word ArgModes0_29;
  MR_Word ArgsWithoutModes_30;
  MR_Word ModeAnnotationSpecs_31;
  MR_Word Var_64;
  MR_Word Var_67;
  MR_Word Var_68;

  *AllProcIds_24 = hlds__hlds_pred__pred_info_all_procids_1_f_0(PredInfo_21);
  PredIdStr_27 = hlds__hlds_out__hlds_out_util__pred_id_to_user_string_2_f_0(ModuleInfo_15, PredId_20);
  {
    Var_68 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_68, 0) = ((MR_Box) (PredIdStr_27));
  }
  {
    Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_67, 0) = ((MR_Box) (Var_68));
    MR_hl_field(1, Var_67, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[44])));
  }
  {
    Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_64, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[42])));
    MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_67));
  }
  ContextPieces_28 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_64);
  hlds__make_hlds__add_clause__get_mode_annotations_8_p_0(VarSet_17, ContextPieces_28, (MR_Integer) 1, MaybeAnnotatedArgTerms_16, ArgTerms_22, &ArgModes0_29, &ArgsWithoutModes_30, &ModeAnnotationSpecs_31);
  if ((ModeAnnotationSpecs_31 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((ArgModes0_29 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = hlds__hlds_pred__pred_info_defn_has_foreign_proc_1_p_0(PredInfo_21);
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *ApplProcIds_23 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (*AllProcIds_24));
        }
      else
        *ApplProcIds_23 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_QualInfo_61 = STATE_VARIABLE_QualInfo_0_60;
      *STATE_VARIABLE_Specs_63 = STATE_VARIABLE_Specs_0_62;
    }
    else
    if ((ArgsWithoutModes_30 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ArgModes_36;
      MR_Word Procs_41;
      MR_Word ExistingProcs_42;
      MR_Word STATE_VARIABLE_Specs_2_78;
      MR_Word Var_77 = (MR_Word) (PredStatus_18);
      MR_Integer ProcId_43;

      succeeded = (Var_77 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgModes_36 = ArgModes0_29;
        STATE_VARIABLE_Specs_2_78 = STATE_VARIABLE_Specs_0_62;
        *STATE_VARIABLE_QualInfo_61 = STATE_VARIABLE_QualInfo_0_60;
      }
      else
      {
        MR_Word Exported_37;
        MR_Word InInt_38;
        MR_Word MQInfo0_39;
        MR_Word MQInfo_40;

        Exported_37 = hlds__status__pred_status_is_exported_to_non_submodules_1_f_0(PredStatus_18);
        switch (Exported_37) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            InInt_38 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            InInt_38 = (MR_Integer) 1;
            break;
        }
        hlds__make_hlds__qual_info__qual_info_get_mq_info_2_p_0(STATE_VARIABLE_QualInfo_0_60, &MQInfo0_39);
        parse_tree__module_qual__qualify_items__qualify_clause_mode_list_8_p_0(InInt_38, Context_19, ArgModes0_29, &ArgModes_36, MQInfo0_39, &MQInfo_40, STATE_VARIABLE_Specs_0_62, &STATE_VARIABLE_Specs_2_78);
        hlds__make_hlds__qual_info__qual_info_set_mq_info_3_p_0(MQInfo_40, STATE_VARIABLE_QualInfo_0_60, STATE_VARIABLE_QualInfo_61);
      }
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_21, &Procs_41);
      mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs_41, &ExistingProcs_42);
      succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(ModuleInfo_15, ExistingProcs_42, ArgModes_36, &ProcId_43);
      if (succeeded)
      {
        MR_Word Var_80;

        {
          Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_80, 0) = ((MR_Box) (ProcId_43));
          MR_hl_field(1, Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *ApplProcIds_23 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_80));
        }
        if ((ExistingProcs_42 == (MR_Word) ((MR_Unsigned) 0U)))
          *STATE_VARIABLE_Specs_63 = STATE_VARIABLE_Specs_2_78;
        else
        {
          MR_Word Var_182 = ((MR_Word) ((MR_hl_field(1, ExistingProcs_42, 1))));

          if ((Var_182 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Globals_45;
            MR_Word Warn_46;

            hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_15, &Globals_45);
            libs__globals__lookup_bool_option_3_p_0(Globals_45, (MR_Integer) 221, &Warn_46);
            switch (Warn_46) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *STATE_VARIABLE_Specs_63 = STATE_VARIABLE_Specs_2_78;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word PredDescPieces_47;
                  MR_Word Pieces_48;
                  MR_Word Spec_50;
                  MR_Word Var_92;
                  MR_Word Var_93;
                  MR_Word Var_101;
                  MR_Word Var_102;

                  PredDescPieces_47 = hlds__hlds_error_util__describe_one_pred_info_name_4_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_2[2])), (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), PredInfo_21);
                  Var_102 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[54])));
                  Var_101 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_102, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[17])));
                  Var_93 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[50])), Var_101);
                  Var_92 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredDescPieces_47, Var_93);
                  Pieces_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[46])), Var_92);
                  {
                    Spec_50 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Spec_50, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_clause.select_applicable_modes\'/14"));
                    MR_hl_field(0, Spec_50, 1) = ((MR_Box) (MR_mkword(2, &hlds__make_hlds__add_clause_scalar_common_2[3])));
                    MR_hl_field(0, Spec_50, 2) = ((MR_Box) ((MR_Unsigned) 44U));
                    MR_hl_field(0, Spec_50, 3) = ((MR_Box) (Context_19));
                    MR_hl_field(0, Spec_50, 4) = ((MR_Box) (Pieces_48));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *STATE_VARIABLE_Specs_63 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_50));
                    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_2_78));
                  }
                }
                break;
            }
          }
          else
            *STATE_VARIABLE_Specs_63 = STATE_VARIABLE_Specs_2_78;
        }
      }
      else
      {
        hlds__make_hlds_error__report_undeclared_mode_error_9_p_0(ModuleInfo_15, PredId_20, PredInfo_21, VarSet_17, ArgModes_36, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[21])), Context_19, STATE_VARIABLE_Specs_2_78, STATE_VARIABLE_Specs_63);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *ApplProcIds_23 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (*AllProcIds_24));
        }
      }
    }
    else
    {
      MR_Word ArgsWithoutModePieces_58;
      MR_Word Var_126;
      MR_Word Var_129;
      MR_Word Var_140;
      MR_Word Var_141;
      MR_Word Var_149;
      MR_Word Var_150;
      MR_Word Var_151;
      MR_String Var_152;
      MR_Word Var_156;
      MR_Word Var_157;
      MR_Word Pieces_172;
      MR_Word Spec_173;
      MR_Box conv1_Var_152;

      ArgsWithoutModePieces_58 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (&hlds__make_hlds__add_clause_scalar_common_4[1]), ArgsWithoutModes_30);
      {
        Var_129 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_129, 0) = ((MR_Box) (Var_68));
        MR_hl_field(1, Var_129, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[58])));
      }
      {
        Var_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_126, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[42])));
        MR_hl_field(1, Var_126, 1) = ((MR_Box) (Var_129));
      }
      Var_141 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[62])));
      conv1_Var_152 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgsWithoutModes_30, ((MR_Box) ((MR_String) "The argument without a mode is the")), ((MR_Box) ((MR_String) "The arguments without modes are the")));
      Var_152 = ((MR_String) (conv1_Var_152));
      {
        Var_151 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_151, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_151, 1) = ((MR_Box) (Var_152));
      }
      {
        Var_150 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_150, 0) = ((MR_Box) (Var_151));
        MR_hl_field(1, Var_150, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_157 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 2, (MR_String) "and", (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[8])), ArgsWithoutModePieces_58);
      Var_156 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_157, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[17])));
      Var_149 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_150, Var_156);
      Var_140 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_141, Var_149);
      Pieces_172 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_126, Var_140);
      {
        Spec_173 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_173, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_clause.select_applicable_modes\'/14"));
        MR_hl_field(0, Spec_173, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_173, 2) = ((MR_Box) ((MR_Unsigned) 44U));
        MR_hl_field(0, Spec_173, 3) = ((MR_Box) (Context_19));
        MR_hl_field(0, Spec_173, 4) = ((MR_Box) (Pieces_172));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_63 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_173));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_62));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *ApplProcIds_23 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (*AllProcIds_24));
      }
      *STATE_VARIABLE_QualInfo_61 = STATE_VARIABLE_QualInfo_0_60;
    }
  else
  {
    *STATE_VARIABLE_Specs_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ModeAnnotationSpecs_31, STATE_VARIABLE_Specs_0_62);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *ApplProcIds_23 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (*AllProcIds_24));
    }
    *STATE_VARIABLE_QualInfo_61 = STATE_VARIABLE_QualInfo_0_60;
  }
}

static void MR_CALL 
hlds__make_hlds__add_clause__get_mode_annotations_8_p_0(
  MR_Word VarSet_1,
  MR_Word ContextPieces_2,
  MR_Integer ArgNum_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8)
{
  MR_bool succeeded;

  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word MAArgTerm_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
    MR_Word MAArgTerms_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
    MR_Word ArgTerm_17;
    MR_Word ArgTerms_18;
    MR_Word TailArgModes_22;
    MR_Word TailArgsWithoutModes_23;
    MR_Word TailSpecs_24;
    MR_Integer Var_29 = (MR_Integer) ((MR_Unsigned) ArgNum_3 + (MR_Unsigned) 1);
    MR_Word ArgTermPrime_32;
    MR_Word ModeTerm_33;
    MR_Word Var_41;
    MR_String Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;

    hlds__make_hlds__add_clause__get_mode_annotations_8_p_0(VarSet_1, ContextPieces_2, Var_29, MAArgTerms_16, &ArgTerms_18, &TailArgModes_22, &TailArgsWithoutModes_23, &TailSpecs_24);
    succeeded = ((MR_tag((MR_Word) MAArgTerm_15)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_41 = ((MR_Word) ((MR_hl_field(0, MAArgTerm_15, 0))));
      Var_43 = ((MR_Word) ((MR_hl_field(0, MAArgTerm_15, 1))));
      succeeded = ((MR_tag((MR_Word) Var_41)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_42 = ((MR_String) ((MR_hl_field(0, Var_41, 0))));
        succeeded = (strcmp(Var_42, (MR_String) "::") == 0);
        if (succeeded)
        {
          succeeded = (Var_43 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ArgTermPrime_32 = ((MR_Word) ((MR_hl_field(1, Var_43, 0))));
            Var_44 = ((MR_Word) ((MR_hl_field(1, Var_43, 1))));
            succeeded = (Var_44 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ModeTerm_33 = ((MR_Word) ((MR_hl_field(1, Var_44, 0))));
              Var_45 = ((MR_Word) ((MR_hl_field(1, Var_44, 1))));
              succeeded = (Var_45 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word ArgContextPieces_35;
      MR_Word GenVarSet_36;
      MR_Word GenModeTerm_37;
      MR_Word MaybeMode_38;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_50;
      MR_Word Var_51;

      ArgTerm_17 = ArgTermPrime_32;
      {
        Var_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_51, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(3, Var_51, 1) = ((MR_Box) (ArgNum_3));
      }
      {
        Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_50, 0) = ((MR_Box) (Var_51));
        MR_hl_field(1, Var_50, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[65])));
      }
      {
        Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_47, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[63])));
        MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_50));
      }
      Var_46 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_47);
      ArgContextPieces_35 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_2, Var_46);
      mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_1, &GenVarSet_36);
      mercury__term__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModeTerm_33, &GenModeTerm_37);
      parse_tree__parse_inst_mode_name__parse_mode_5_p_0((MR_Word) ((MR_Unsigned) 0U), GenVarSet_36, ArgContextPieces_35, GenModeTerm_37, &MaybeMode_38);
      if (((MR_tag((MR_Word) MaybeMode_38)) == (MR_Integer) 0))
      {
        MR_Word MaybeMaybeMode_25 = (MR_Word) (MaybeMode_38);
        MR_Word MaybeModeSpecs_28 = ((MR_Word) ((MR_hl_field(0, MaybeMaybeMode_25, 0))));

        *HeadVar__6_6 = TailArgModes_22;
        *HeadVar__7_7 = TailArgsWithoutModes_23;
        *HeadVar__8_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), MaybeModeSpecs_28, TailSpecs_24);
      }
      else
      {
        MR_Word Mode_39 = ((MR_Word) ((MR_hl_field(1, MaybeMode_38, 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__6_6 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Mode_39));
          MR_hl_field(1, base, 1) = ((MR_Box) (TailArgModes_22));
        }
        *HeadVar__7_7 = TailArgsWithoutModes_23;
        *HeadVar__8_8 = TailSpecs_24;
      }
    }
    else
    {
      MR_Word MaybeMode_62;

      ArgTerm_17 = MAArgTerm_15;
      MaybeMode_62 = ((MR_Word) ((MR_hl_field(1, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_2[4])), 0))));
      if ((MaybeMode_62 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *HeadVar__6_6 = TailArgModes_22;
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__7_7 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (ArgNum_3));
          MR_hl_field(1, base, 1) = ((MR_Box) (TailArgsWithoutModes_23));
        }
        *HeadVar__8_8 = TailSpecs_24;
      }
      else
      {
        MR_Word ArgMode_59 = ((MR_Word) ((MR_hl_field(1, MaybeMode_62, 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__6_6 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (ArgMode_59));
          MR_hl_field(1, base, 1) = ((MR_Box) (TailArgModes_22));
        }
        *HeadVar__7_7 = TailArgsWithoutModes_23;
        *HeadVar__8_8 = TailSpecs_24;
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ArgTerm_17));
      MR_hl_field(1, base, 1) = ((MR_Box) (ArgTerms_18));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_clause__maybe_add_error_for_builtin_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredInfo_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(PredInfo_7);
  if (succeeded)
  {
    MR_Word AllowDefnOfBuiltin_11;
    MR_Word Globals_37;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_6, &Globals_37);
    libs__globals__lookup_bool_option_3_p_0(Globals_37, (MR_Integer) 762, &AllowDefnOfBuiltin_11);
    switch (AllowDefnOfBuiltin_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word PredOrFunc_12;
          MR_Word Pieces_13;
          MR_Word Spec_14;
          MR_Word Var_22;
          MR_Word Var_23;
          MR_Word Var_24;
          MR_Word Var_25;

          hlds__hlds_pred__pred_info_get_is_pred_or_func_2_p_0(PredInfo_7, &PredOrFunc_12);
          {
            Var_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_25, 0) = ((MR_Box) ((MR_Unsigned) 31U));
            MR_hl_field(3, Var_25, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_12));
          }
          {
            Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_24, 0) = ((MR_Box) (Var_25));
            MR_hl_field(1, Var_24, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[8])));
          }
          Var_23 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_24);
          Var_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_23, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[17])));
          Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[41])), Var_22);
          {
            Spec_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_14, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_clause.maybe_add_error_for_builtin\'/5"));
            MR_hl_field(0, Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 44U));
            MR_hl_field(0, Spec_14, 3) = ((MR_Box) (Context_8));
            MR_hl_field(0, Spec_14, 4) = ((MR_Box) (Pieces_13));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_16 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Spec_14));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_15));
          }
        }
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_Specs_16 = STATE_VARIABLE_Specs_0_15;
        break;
    }
  }
  else
    *STATE_VARIABLE_Specs_16 = STATE_VARIABLE_Specs_0_15;
}

static void MR_CALL 
hlds__make_hlds__add_clause__maybe_add_error_for_field_access_function_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word PredStatus_10,
  MR_Word PredOrFunc_11,
  MR_Word PredSymName_12,
  MR_Word PredFormArity_13,
  MR_Word Context_14,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26)
{
  MR_bool succeeded = (PredOrFunc_11 == (MR_Integer) 1);
  MR_Integer UserArityInt_16;
  MR_Word Var_27;
  MR_Integer Var_85;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_28;

  if (succeeded)
  {
    parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_11, &Var_27, PredFormArity_13);
    UserArityInt_16 = (MR_Integer) (Var_27);
    succeeded = hlds__hlds_pred__is_field_access_function_name_6_p_0(ModuleInfo_9, PredSymName_12, &Var_85, &Var_17, &Var_18, &Var_19);
    if (succeeded)
    {
      succeeded = (UserArityInt_16 == Var_85);
      if (succeeded)
      {
        Var_28 = (MR_Word) (PredStatus_10);
        succeeded = (Var_28 != (MR_Word) ((MR_Unsigned) 0U));
      }
    }
  }
  if (succeeded)
  {
    MR_Word SNA_20;
    MR_Word FieldAccessMainPieces_21;
    MR_Word FieldAccessMsg_23;
    MR_Word FieldAccessSpec_24;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_82;

    {
      SNA_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SNA_20, 0) = ((MR_Box) (PredSymName_12));
      MR_hl_field(0, SNA_20, 1) = ((MR_Box) (UserArityInt_16));
    }
    Var_34 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[27])));
    {
      Var_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_45, 0) = ((MR_Box) ((MR_Unsigned) 15U));
      MR_hl_field(3, Var_45, 1) = ((MR_Box) (SNA_20));
    }
    {
      Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_44, 0) = ((MR_Box) (Var_45));
      MR_hl_field(1, Var_44, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[8])));
    }
    Var_43 = parse_tree__error_spec__color_as_subject_1_f_0(Var_44);
    Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_43, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[17])));
    Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_34, Var_42);
    FieldAccessMainPieces_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[23])), Var_33);
    {
      Var_74 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_74, 0) = ((MR_Box) (FieldAccessMainPieces_21));
    }
    {
      Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_73, 0) = ((MR_Box) (Var_74));
      MR_hl_field(1, Var_73, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[68])));
    }
    {
      FieldAccessMsg_23 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, FieldAccessMsg_23, 0) = ((MR_Box) (Context_14));
      MR_hl_field(2, FieldAccessMsg_23, 1) = ((MR_Box) (Var_73));
    }
    {
      Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_82, 0) = ((MR_Box) (FieldAccessMsg_23));
      MR_hl_field(1, Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      FieldAccessSpec_24 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, FieldAccessSpec_24, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_clause.maybe_add_error_for_field_access_function\'/8"));
      MR_hl_field(2, FieldAccessSpec_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(2, FieldAccessSpec_24, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(2, FieldAccessSpec_24, 3) = ((MR_Box) (Var_82));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_26 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (FieldAccessSpec_24));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_25));
    }
  }
  else
    *STATE_VARIABLE_Specs_26 = STATE_VARIABLE_Specs_0_25;
}

static void MR_CALL 
hlds__make_hlds__add_clause__add_clause_progress_msg_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word ModuleInfo_10,
  MR_Word PredInfo_11,
  MR_Word PredOrFunc_12,
  MR_Word PredName_13,
  MR_Word PredFormArity_14)
{
  MR_Word Globals_16;
  MR_Word VeryVerbose_17;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_10, &Globals_16);
  libs__globals__lookup_bool_option_3_p_0(Globals_16, (MR_Integer) 132, &VeryVerbose_17);
  switch (VeryVerbose_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word MsgClauses_18;
        MR_Integer NumClauses_19;
        MR_String PredOrFuncStr_20;
        MR_Integer Arity_21;
        MR_Word SNA_22;
        MR_String SNAStr_23;
        MR_Word Var_27;
        MR_Word Var_28;
        MR_Integer Var_33;
        MR_String Var_52;

        hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_11, &MsgClauses_18);
        Var_27 = ((MR_Word) ((MR_hl_field(0, MsgClauses_18, 6))));
        NumClauses_19 = hlds__hlds_clauses__num_clauses_in_clauses_rep_1_f_0(Var_27);
        PredOrFuncStr_20 = mdbcomp__prim_data__pred_or_func_to_full_str_1_f_0(PredOrFunc_12);
        parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_12, &Var_28, PredFormArity_14);
        Arity_21 = (MR_Integer) (Var_28);
        {
          SNA_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, SNA_22, 0) = ((MR_Box) (PredName_13));
          MR_hl_field(0, SNA_22, 1) = ((MR_Box) (Arity_21));
        }
        SNAStr_23 = parse_tree__parse_tree_out_sym_name__unescaped_sym_name_arity_to_string_1_f_0(SNA_22);
        Var_33 = (MR_Integer) ((MR_Unsigned) NumClauses_19 + (MR_Unsigned) 1);
        mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "% Processing clause ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__make_hlds__add_clause_scalar_common_2[1]), Var_33, &Var_52);
        mercury__io__write_string_4_p_0(ProgressStream_9, Var_52);
        mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) " for ");
        mercury__io__write_string_4_p_0(ProgressStream_9, PredOrFuncStr_20);
        mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) " \140");
        mercury__io__write_string_4_p_0(ProgressStream_9, SNAStr_23);
        mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "\'...\n");
      }
      break;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_clause__add_clause_to_clauses_info_21_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_116;

  succeeded = hlds__make_hlds__add_clause__IntroducedFrom__func__add_clause_to_clauses_info__697__1_1_f_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_116);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_116));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
hlds__make_hlds__add_clause__add_clause_to_clauses_info_21_p_0(
  MR_Word ApplModeIds0_22,
  MR_Word AllModeIds_23,
  MR_Word PredStatus_24,
  MR_Word ClauseType_25,
  MR_Word PredOrFunc_26,
  MR_Word PredSymName_27,
  MR_Word ArgTerms_28,
  MR_Word Context_29,
  MR_Word SeqNum_30,
  MR_Word BodyGoal_31,
  MR_Word ClauseVarSet_32,
  MR_Word TVarSet0_33,
  MR_Word * TVarSet_34,
  MR_Word STATE_VARIABLE_ClausesInfo_0_91,
  MR_Word * STATE_VARIABLE_ClausesInfo_92,
  MR_Word STATE_VARIABLE_ModuleInfo_0_93,
  MR_Word * STATE_VARIABLE_ModuleInfo_94,
  MR_Word STATE_VARIABLE_QualInfo_0_95,
  MR_Word * STATE_VARIABLE_QualInfo_96,
  MR_Word STATE_VARIABLE_Specs_0_97,
  MR_Word * STATE_VARIABLE_Specs_98)
{
  MR_bool succeeded;
  MR_Word VarSet0_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_91, 0))));
  MR_Word ExplicitVarTypes0_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_91, 1))));
  MR_Word VarTable0_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_91, 2))));
  MR_Word RttiVarMaps0_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_91, 3))));
  MR_Word TVarNameMap0_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_91, 4))));
  MR_Word ArgVector_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_91, 5))));
  MR_Word ClausesRep0_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_91, 6))));
  MR_Word ItemNumbers0_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_91, 7))));
  MR_Word HasForeignClauses0_47 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_91, 8))) >> 1)) & (MR_Integer) 1);
  MR_Word HeadVars_49;
  MR_Word IsEmpty_50;
  MR_Word TVarNameMap_51;
  MR_Word MaybeOptImported_52;
  MR_Word VarSet1_53;
  MR_Word Renaming_54;
  MR_Word ShouldWarn_55;
  MR_Word KeepQuantVars_56;
  MR_Word Goal0_57;
  MR_Word VarSet2_58;
  MR_Word QuantWarnings_59;
  MR_Word StateVarWarnings_60;
  MR_Word UnusedSVarArgMap_61;
  MR_Word FoundSyntaxError_62;
  MR_Word STATE_VARIABLE_QualInfo_1_100;
  MR_Word STATE_VARIABLE_QualInfo_2_102;
  MR_Word STATE_VARIABLE_QualInfo_3_104;
  MR_Word STATE_VARIABLE_Specs_1_105;
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_91, 8)));
  MR_Word Var_99;

  HeadVars_49 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) (&hlds__make_hlds__add_clause_scalar_common_1[1]), ArgVector_44);
  IsEmpty_50 = hlds__hlds_clauses__clause_list_is_empty_1_f_0(ClausesRep0_45);
  switch (IsEmpty_50) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      TVarNameMap_51 = TVarNameMap0_43;
      break;
    case (MR_Integer) 1:
      mercury__varset__create_name_var_map_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet0_33, &TVarNameMap_51);
      break;
  }
  Var_99 = (MR_Word) (PredStatus_24);
  succeeded = (Var_99 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    MaybeOptImported_52 = (MR_Integer) 1;
  else
    MaybeOptImported_52 = (MR_Integer) 0;
  hlds__make_hlds__qual_info__update_qual_info_6_p_0(TVarNameMap_51, TVarSet0_33, ExplicitVarTypes0_40, MaybeOptImported_52, STATE_VARIABLE_QualInfo_0_95, &STATE_VARIABLE_QualInfo_1_100);
  mercury__varset__merge_renaming_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet0_39, ClauseVarSet_32, &VarSet1_53, &Renaming_54);
  hlds__make_hlds__add_clause__should_we_do_singleton_and_quant_warnings_4_p_0(STATE_VARIABLE_ModuleInfo_0_93, PredStatus_24, STATE_VARIABLE_ClausesInfo_0_91, &ShouldWarn_55);
  switch (ShouldWarn_55) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      KeepQuantVars_56 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      KeepQuantVars_56 = (MR_Integer) 1;
      break;
  }
  hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_p_0((MR_Integer) 0, STATE_VARIABLE_QualInfo_1_100, &STATE_VARIABLE_QualInfo_2_102);
  hlds__make_hlds__add_clause__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_108_97_117_115_101_95_116_114_97_110_115_102_111_114_109_95_95_91_52_93_95_48_21_p_0(KeepQuantVars_56, Renaming_54, PredOrFunc_26, HeadVars_49, ArgTerms_28, Context_29, ClauseType_25, BodyGoal_31, &Goal0_57, VarSet1_53, &VarSet2_58, &QuantWarnings_59, &StateVarWarnings_60, &UnusedSVarArgMap_61, STATE_VARIABLE_ModuleInfo_0_93, STATE_VARIABLE_ModuleInfo_94, STATE_VARIABLE_QualInfo_2_102, &STATE_VARIABLE_QualInfo_3_104, STATE_VARIABLE_Specs_0_97, &STATE_VARIABLE_Specs_1_105);
  hlds__make_hlds__qual_info__qual_info_get_tvarset_2_p_0(STATE_VARIABLE_QualInfo_3_104, TVarSet_34);
  hlds__make_hlds__qual_info__qual_info_get_found_syntax_error_2_p_0(STATE_VARIABLE_QualInfo_3_104, &FoundSyntaxError_62);
  switch (FoundSyntaxError_62) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word VarSet_63;
        MR_Word Goal_64;
        MR_Word MaybeFact_74;
        MR_Word ClausesRep_84;
        MR_Word ExplicitVarTypes_89;
        MR_Word ItemNumbers_90;

        switch (ShouldWarn_55) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              VarSet_63 = VarSet2_58;
              Goal_64 = Goal0_57;
              *STATE_VARIABLE_QualInfo_96 = STATE_VARIABLE_QualInfo_3_104;
              *STATE_VARIABLE_Specs_98 = STATE_VARIABLE_Specs_1_105;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word PredFormArity_65;
              MR_Word WarnPFSymNameArity_66;
              MR_Word SeenQuant_67;
              MR_Word STATE_VARIABLE_Specs_2_108;

              PredFormArity_65 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&hlds__make_hlds__add_clause_scalar_common_1[1]), HeadVars_49);
              {
                WarnPFSymNameArity_66 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, WarnPFSymNameArity_66, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_26));
                MR_hl_field(0, WarnPFSymNameArity_66, 1) = ((MR_Box) (PredSymName_27));
                MR_hl_field(0, WarnPFSymNameArity_66, 2) = ((MR_Box) (PredFormArity_65));
              }
              hlds__make_hlds__make_hlds_warn__warn_singletons_in_clause_body_7_p_0(*STATE_VARIABLE_ModuleInfo_94, WarnPFSymNameArity_66, VarSet2_58, Goal0_57, &SeenQuant_67, STATE_VARIABLE_Specs_1_105, &STATE_VARIABLE_Specs_2_108);
              switch (SeenQuant_67) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    VarSet_63 = VarSet2_58;
                    Goal_64 = Goal0_57;
                    *STATE_VARIABLE_QualInfo_96 = STATE_VARIABLE_QualInfo_3_104;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word QuantVarTypes0_68;
                    MR_Word EmptyRttiVarmaps_69;
                    MR_Word QuantVarTypes_71;
                    MR_Word _QuantWarnings_70;
                    MR_Word Var_72;

                    hlds__make_hlds__qual_info__qual_info_get_explicit_var_types_2_p_0(STATE_VARIABLE_QualInfo_3_104, &QuantVarTypes0_68);
                    hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&EmptyRttiVarmaps_69);
                    hlds__quantification__implicitly_quantify_clause_body_general_vs_12_p_0((MR_Integer) 0, (MR_Integer) 0, HeadVars_49, &_QuantWarnings_70, Goal0_57, &Goal_64, VarSet2_58, &VarSet_63, QuantVarTypes0_68, &QuantVarTypes_71, EmptyRttiVarmaps_69, &Var_72);
                    hlds__make_hlds__qual_info__qual_info_set_explicit_var_types_3_p_0(QuantVarTypes_71, STATE_VARIABLE_QualInfo_3_104, STATE_VARIABLE_QualInfo_96);
                  }
                  break;
              }
              hlds__make_hlds__make_hlds_warn__add_quant_warnings_6_p_0(*STATE_VARIABLE_ModuleInfo_94, WarnPFSymNameArity_66, VarSet_63, QuantWarnings_59, STATE_VARIABLE_Specs_2_108, STATE_VARIABLE_Specs_98);
            }
            break;
        }
        succeeded = ((((MR_tag((MR_Word) BodyGoal_31)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, BodyGoal_31, 0)))) == (MR_Integer) 0)));
        if (succeeded)
          MaybeFact_74 = (MR_Integer) 1;
        else
          MaybeFact_74 = (MR_Integer) 0;
        switch (HasForeignClauses0_47) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Clause_129;

              {
                Clause_129 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Clause_129, 0) = ((MR_Box) (ApplModeIds0_22));
                MR_hl_field(0, Clause_129, 1) = ((MR_Box) (Goal_64));
                MR_hl_field(0, Clause_129, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, Clause_129, 3) = ((MR_Box) (Context_29));
                MR_hl_field(0, Clause_129, 4) = ((MR_Box) (StateVarWarnings_60));
                MR_hl_field(0, Clause_129, 5) = ((MR_Box) (UnusedSVarArgMap_61));
                MR_hl_field(0, Clause_129, 6) = (MR_Box) ((MR_Unsigned) (MaybeFact_74));
              }
              hlds__hlds_clauses__add_clause_3_p_0(Clause_129, ClausesRep0_45, &ClausesRep_84);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Clauses0_75;
              MR_Word ClausesRep1_76;
              MR_Word ForeignModeIds_77;
              MR_Word ModeIds0_82;
              MR_Word ModeIds_83;
              MR_Word Var_113;

              hlds__hlds_clauses__get_clause_list_3_p_0(&Clauses0_75, ClausesRep0_45, &ClausesRep1_76);
              Var_113 = mercury__list__filter_map_2_f_0((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), (MR_Word) (&hlds__make_hlds__add_clause_scalar_common_1[2]), (MR_Word) (&hlds__make_hlds__add_clause_scalar_common_4[0]), Clauses0_75);
              ForeignModeIds_77 = mercury__list__condense_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), Var_113);
              switch (MR_tag((MR_Word) ApplModeIds0_22)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(ApplModeIds0_22)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      ModeIds0_82 = AllModeIds_23;
                      break;
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_clause.add_clause_to_clauses_info\'/21", (MR_String) "unify modes for user defined predicate");
                        return;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  ModeIds0_82 = ((MR_Word) ((MR_hl_field(1, ApplModeIds0_22, 0))));
                  break;
              }
              ModeIds_83 = mercury__list__delete_elems_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), ModeIds0_82, ForeignModeIds_77);
              if ((ModeIds_83 == (MR_Word) ((MR_Unsigned) 0U)))
                ClausesRep_84 = ClausesRep1_76;
              else
              {
                MR_Word ApplicableModeIds_87;
                MR_Word Clause_88;

                {
                  ApplicableModeIds_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, ApplicableModeIds_87, 0) = ((MR_Box) (ModeIds_83));
                }
                {
                  Clause_88 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Clause_88, 0) = ((MR_Box) (ApplicableModeIds_87));
                  MR_hl_field(0, Clause_88, 1) = ((MR_Box) (Goal_64));
                  MR_hl_field(0, Clause_88, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(0, Clause_88, 3) = ((MR_Box) (Context_29));
                  MR_hl_field(0, Clause_88, 4) = ((MR_Box) (StateVarWarnings_60));
                  MR_hl_field(0, Clause_88, 5) = ((MR_Box) (UnusedSVarArgMap_61));
                  MR_hl_field(0, Clause_88, 6) = (MR_Box) ((MR_Unsigned) (MaybeFact_74));
                }
                hlds__hlds_clauses__add_clause_3_p_0(Clause_88, ClausesRep1_76, &ClausesRep_84);
              }
            }
            break;
        }
        hlds__make_hlds__qual_info__qual_info_get_explicit_var_types_2_p_0(*STATE_VARIABLE_QualInfo_96, &ExplicitVarTypes_89);
        hlds__hlds_clauses__add_clause_item_number_5_p_0(SeqNum_30, Context_29, (MR_Integer) 0, ItemNumbers0_46, &ItemNumbers_90);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_ClausesInfo_92 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (VarSet_63));
          MR_hl_field(0, base, 1) = ((MR_Box) (ExplicitVarTypes_89));
          MR_hl_field(0, base, 2) = ((MR_Box) (VarTable0_41));
          MR_hl_field(0, base, 3) = ((MR_Box) (RttiVarMaps0_42));
          MR_hl_field(0, base, 4) = ((MR_Box) (TVarNameMap_51));
          MR_hl_field(0, base, 5) = ((MR_Box) (ArgVector_44));
          MR_hl_field(0, base, 6) = ((MR_Box) (ClausesRep_84));
          MR_hl_field(0, base, 7) = ((MR_Box) (ItemNumbers_90));
          MR_hl_field(0, base, 8) = (MR_Box) (packed_word_0);
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_130 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_91, 0))));
        MR_Word Var_131 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_91, 1))));
        MR_Word Var_132 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_91, 2))));
        MR_Word Var_133 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_91, 3))));
        MR_Word Var_134 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_91, 4))));
        MR_Word Var_135 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_91, 5))));
        MR_Word Var_136 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_91, 6))));
        MR_Word Var_137 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_91, 7))));
        MR_Word Var_138 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_91, 8))) >> 1)) & (MR_Integer) 1);

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_ClausesInfo_92 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_130));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_131));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_132));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_133));
          MR_hl_field(0, base, 4) = ((MR_Box) (Var_134));
          MR_hl_field(0, base, 5) = ((MR_Box) (Var_135));
          MR_hl_field(0, base, 6) = ((MR_Box) (Var_136));
          MR_hl_field(0, base, 7) = ((MR_Box) (Var_137));
          MR_hl_field(0, base, 8) = (MR_Box) (((((MR_Unsigned) (Var_138) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
        }
        *STATE_VARIABLE_QualInfo_96 = STATE_VARIABLE_QualInfo_3_104;
        *STATE_VARIABLE_Specs_98 = STATE_VARIABLE_Specs_1_105;
      }
      break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_clause__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_108_97_117_115_101_95_116_114_97_110_115_102_111_114_109_95_95_91_52_93_95_48_21_p_0(
  MR_Word KeepQuantVars_22,
  MR_Word Renaming_23,
  MR_Word PredOrFunc_24,
  MR_Word HeadVars_26,
  MR_Word ArgTerms0_27,
  MR_Word Context_28,
  MR_Word ClauseType_29,
  MR_Word ParseTreeBodyGoal_30,
  MR_Word * Goal_31,
  MR_Word STATE_VARIABLE_VarSet_0_75,
  MR_Word * STATE_VARIABLE_VarSet_76,
  MR_Word * QuantWarnings_33,
  MR_Word * StateVarWarningSpecs_34,
  MR_Word * UnusedSVarArgMap_35,
  MR_Word STATE_VARIABLE_ModuleInfo_0_77,
  MR_Word * STATE_VARIABLE_ModuleInfo_78,
  MR_Word STATE_VARIABLE_QualInfo_0_79,
  MR_Word * STATE_VARIABLE_QualInfo_80,
  MR_Word STATE_VARIABLE_Specs_0_81,
  MR_Word * STATE_VARIABLE_Specs_82)
{
  MR_Word ArgTerms1_41;
  MR_Word ArgTerms_42;
  MR_Word FinalSVarMap_43;
  MR_Word NewSVars_44;
  MR_Word InitialSVarState_45;
  MR_Word HeadUnificationsGoal_47;
  MR_Word BodyGoal_53;
  MR_Word FinalSVarState_54;
  MR_Word Goal0_55;
  MR_Word UnravelSpecs_58;
  MR_Word FoundTraceGoal_69;
  MR_Word Goal1_70;
  MR_Word VarTypes0_71;
  MR_Word EmptyRttiVarmaps_72;
  MR_Word VarTypes_73;
  MR_Word STATE_VARIABLE_UrInfo_1_85;
  MR_Word STATE_VARIABLE_SVarState_2_86;
  MR_Word STATE_VARIABLE_UrInfo_2_87;
  MR_Word STATE_VARIABLE_UrInfo_3_94;
  MR_Word STATE_VARIABLE_UrInfo_4_95;
  MR_Word STATE_VARIABLE_QualInfo_1_97;
  MR_Word STATE_VARIABLE_VarSet_1_98;
  MR_Word Var_74;

  parse_tree__prog_rename__rename_vars_in_term_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_23, ArgTerms0_27, &ArgTerms1_41);
  hlds__make_hlds__state_var__svar_prepare_for_clause_head_9_p_0(STATE_VARIABLE_ModuleInfo_0_77, STATE_VARIABLE_QualInfo_0_79, STATE_VARIABLE_VarSet_0_75, ArgTerms1_41, &ArgTerms_42, &FinalSVarMap_43, &NewSVars_44, &InitialSVarState_45, &STATE_VARIABLE_UrInfo_1_85);
  if ((ClauseType_29 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word PredFormArity_48;
    MR_Word ArgContext_49;
    MR_Word HeadUnificationsGoal0_50;
    MR_Word HeadVarsArgTerms_51;
    MR_Word HeadUnificationsGoal1_52;

    PredFormArity_48 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&hlds__make_hlds__add_clause_scalar_common_1[0]), ArgTerms0_27);
    {
      ArgContext_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ArgContext_49, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_24));
      MR_hl_field(0, ArgContext_49, 1) = ((MR_Box) (PredFormArity_48));
    }
    HeadUnificationsGoal0_50 = hlds__make_goal__true_goal_0_f_0();
    hlds__make_hlds__superhomogeneous_util__pair_vars_with_terms_3_p_0(HeadVars_26, ArgTerms_42, &HeadVarsArgTerms_51);
    hlds__make_hlds__superhomogeneous__insert_arg_unifications_9_p_0(HeadVarsArgTerms_51, Context_28, ArgContext_49, HeadUnificationsGoal0_50, &HeadUnificationsGoal1_52, InitialSVarState_45, &STATE_VARIABLE_SVarState_2_86, STATE_VARIABLE_UrInfo_1_85, &STATE_VARIABLE_UrInfo_2_87);
    hlds__goal_transform__attach_features_to_all_goals_4_p_1((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[66])), (MR_Integer) 1, HeadUnificationsGoal1_52, &HeadUnificationsGoal_47);
  }
  else
  {
    HeadUnificationsGoal_47 = hlds__make_goal__true_goal_0_f_0();
    STATE_VARIABLE_SVarState_2_86 = InitialSVarState_45;
    STATE_VARIABLE_UrInfo_2_87 = STATE_VARIABLE_UrInfo_1_85;
  }
  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_8_p_0((MR_Integer) 0, Renaming_23, ParseTreeBodyGoal_30, &BodyGoal_53, STATE_VARIABLE_SVarState_2_86, &FinalSVarState_54, STATE_VARIABLE_UrInfo_2_87, &STATE_VARIABLE_UrInfo_3_94);
  hlds__make_hlds__state_var__svar_finish_clause_body_12_p_0(Context_28, NewSVars_44, FinalSVarMap_43, InitialSVarState_45, FinalSVarState_54, HeadUnificationsGoal_47, BodyGoal_53, &Goal0_55, StateVarWarningSpecs_34, UnusedSVarArgMap_35, STATE_VARIABLE_UrInfo_3_94, &STATE_VARIABLE_UrInfo_4_95);
  *STATE_VARIABLE_ModuleInfo_78 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_4_95, 0))));
  STATE_VARIABLE_QualInfo_1_97 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_4_95, 2))));
  STATE_VARIABLE_VarSet_1_98 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_4_95, 3))));
  UnravelSpecs_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_4_95, 5))));
  *STATE_VARIABLE_Specs_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), UnravelSpecs_58, STATE_VARIABLE_Specs_0_81);
  hlds__make_hlds__qual_info__qual_info_get_found_trace_goal_2_p_0(STATE_VARIABLE_QualInfo_1_97, &FoundTraceGoal_69);
  switch (FoundTraceGoal_69) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Goal1_70 = Goal0_55;
      break;
    case (MR_Integer) 1:
      hlds__pre_quantification__separate_trace_goal_only_locals_2_p_0(Goal0_55, &Goal1_70);
      break;
  }
  hlds__make_hlds__qual_info__qual_info_get_explicit_var_types_2_p_0(STATE_VARIABLE_QualInfo_1_97, &VarTypes0_71);
  hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&EmptyRttiVarmaps_72);
  hlds__quantification__implicitly_quantify_clause_body_general_vs_12_p_0((MR_Integer) 0, KeepQuantVars_22, HeadVars_26, QuantWarnings_33, Goal1_70, Goal_31, STATE_VARIABLE_VarSet_1_98, STATE_VARIABLE_VarSet_76, VarTypes0_71, &VarTypes_73, EmptyRttiVarmaps_72, &Var_74);
  hlds__make_hlds__qual_info__qual_info_set_explicit_var_types_3_p_0(VarTypes_73, STATE_VARIABLE_QualInfo_1_97, STATE_VARIABLE_QualInfo_80);
}

static void MR_CALL 
hlds__make_hlds__add_clause__should_we_do_singleton_and_quant_warnings_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredStatus_6,
  MR_Word ClausesInfo_7,
  MR_Word * ShouldWarn_8)
{
  MR_bool succeeded;
  MR_Word Globals_9;
  MR_Word WarnSingleton_10;
  MR_Word WarnRepeatedSingleton_11;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_5, &Globals_9);
  libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 186, &WarnSingleton_10);
  libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 187, &WarnRepeatedSingleton_11);
  succeeded = (WarnSingleton_10 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (WarnRepeatedSingleton_11 == (MR_Integer) 0);
  if (!(succeeded))
  {
    {
      MR_Word Var_14 = (MR_Word) (PredStatus_6);

      succeeded = (Var_14 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (!(succeeded))
    {
      MR_Word Var_15 = ((MR_Unsigned) ((MR_hl_field(0, ClausesInfo_7, 8))) & (MR_Integer) 1);

      succeeded = (Var_15 == (MR_Integer) 1);
    }
  }
  if (succeeded)
    *ShouldWarn_8 = (MR_Integer) 0;
  else
    *ShouldWarn_8 = (MR_Integer) 1;
}

static MR_bool MR_CALL 
hlds__make_hlds__add_clause____Unify____clause_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__add_clause____Unify____clause_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_clause____Compare____clause_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__add_clause____Compare____clause_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__add_clause____Unify____maybe_should_warn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__add_clause____Unify____maybe_should_warn_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_clause____Compare____maybe_should_warn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__add_clause____Compare____maybe_should_warn_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__make_hlds__add_clause__init(void)
{
}

void mercury__hlds__make_hlds__add_clause__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__type_ctor_info_clause_type_0);
  MR_register_type_ctor_info(&hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__type_ctor_info_maybe_should_warn_0);
}

void mercury__hlds__make_hlds__add_clause__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__make_hlds__add_clause__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module hlds.make_hlds.add_clause.
