/*
** Automatically generated from `add_clause.m'
** by the Mercury compiler,
** version rotd-2024-02-02
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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.add_pred.mih"
#include "hlds.const_struct.mih"
#include "hlds.default_func_mode.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
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
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
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
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_inst_mode_name.mih"
#include "parse_tree.parse_tree_out_clause.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_out_sym_name.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "hlds.make_hlds.goal_expr_to_goal.mih"
#include "hlds.make_hlds.make_hlds_types.mih"
#include "hlds.make_hlds.make_hlds_warn.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "hlds.make_hlds.state_var.mih"
#include "hlds.make_hlds.superhomogeneous.mih"




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

static const MR_EnumFunctorDesc hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__enum_functor_desc_maybe_can_warn_0_0;

static const MR_EnumFunctorDesc hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__enum_functor_desc_maybe_can_warn_0_1;

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__enum_ordinal_ordered_maybe_can_warn_0[2];

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__enum_name_ordered_maybe_can_warn_0[2];

static const MR_Integer hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__functor_number_map_maybe_can_warn_0[2];

static const MR_DuFunctorDesc hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_0;

static const MR_DuFunctorDesc hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_1;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_clause__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0;

static const MR_PseudoTypeInfo hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__field_types_mode_annotations_0_2[1];

static const MR_DuFunctorDesc hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_2;

static const MR_DuFunctorDesc hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_3;

static const MR_DuFunctorDescPtr hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_stag_ordered_mode_annotations_0_0[3];

static const MR_DuFunctorDescPtr hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_stag_ordered_mode_annotations_0_1[1];

static const MR_DuPtagLayout hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_ptag_ordered_mode_annotations_0[2];

static const MR_DuFunctorDescPtr hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_name_ordered_mode_annotations_0[4];

static const MR_Integer hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__functor_number_map_mode_annotations_0[4];

static MR_bool MR_CALL 
hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__686__1_1_f_0(
  MR_Word LambdaHeadVar__1_116,
  MR_Word * LambdaHeadVar__2_117);

static void MR_CALL 
hlds__make_hlds__add_clause____Compare____mode_annotations_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_clause____Unify____mode_annotations_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__add_clause____Compare____maybe_can_warn_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_clause____Unify____maybe_can_warn_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__add_clause__module_add_clause_2_19_p_0(
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
  MR_Word STATE_VARIABLE_ModuleInfo_0_65,
  MR_Word * STATE_VARIABLE_ModuleInfo_66,
  MR_Word STATE_VARIABLE_QualInfo_0_67,
  MR_Word * STATE_VARIABLE_QualInfo_68,
  MR_Word STATE_VARIABLE_Specs_0_69,
  MR_Word * STATE_VARIABLE_Specs_70);

static void MR_CALL 
hlds__make_hlds__add_clause__select_applicable_modes_15_p_0(
  MR_Word MaybeAnnotatedArgTerms_16,
  MR_Word VarSet_17,
  MR_Word PredStatus_18,
  MR_Word Context_19,
  MR_Word PredId_20,
  MR_Word PredInfo_21,
  MR_Word * ArgTerms_22,
  MR_Word * ApplProcIds_23,
  MR_Word * AllProcIds_24,
  MR_Word STATE_VARIABLE_ModuleInfo_0_52,
  MR_Word * STATE_VARIABLE_ModuleInfo_53,
  MR_Word STATE_VARIABLE_QualInfo_0_54,
  MR_Word * STATE_VARIABLE_QualInfo_55,
  MR_Word STATE_VARIABLE_Specs_0_56,
  MR_Word * STATE_VARIABLE_Specs_57);

static void MR_CALL 
hlds__make_hlds__add_clause__get_mode_annotations_9_p_0(
  MR_Word VarSet_1,
  MR_Word ContextPieces_2,
  MR_Integer ArgNum_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Annotations_0_6,
  MR_Word * STATE_VARIABLE_Annotations_7,
  MR_Word STATE_VARIABLE_Specs_0_8,
  MR_Word * STATE_VARIABLE_Specs_9);

static void MR_CALL 
hlds__make_hlds__add_clause__maybe_add_error_for_builtin_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredInfo_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14);

static void MR_CALL 
hlds__make_hlds__add_clause__maybe_add_error_for_field_access_function_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word PredStatus_10,
  MR_Word PredOrFunc_11,
  MR_Word PredSymName_12,
  MR_Word PredFormArity_13,
  MR_Word Context_14,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25);

static void MR_CALL 
hlds__make_hlds__add_clause__add_clause_progress_msg_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word ModuleInfo_10,
  MR_Word PredInfo_11,
  MR_Word PredOrFunc_12,
  MR_Word PredName_13,
  MR_Word PredFormArity_14);

static MR_bool MR_CALL 
hlds__make_hlds__add_clause__clauses_info_add_clause_21_p_0_1(
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
  MR_Word STATE_VARIABLE_VarSet_0_72,
  MR_Word * STATE_VARIABLE_VarSet_73,
  MR_Word * QuantWarnings_33,
  MR_Word * StateVarWarnings_34,
  MR_Word * StateVarErrors_35,
  MR_Word STATE_VARIABLE_ModuleInfo_0_74,
  MR_Word * STATE_VARIABLE_ModuleInfo_75,
  MR_Word STATE_VARIABLE_QualInfo_0_76,
  MR_Word * STATE_VARIABLE_QualInfo_77,
  MR_Word STATE_VARIABLE_Specs_0_78,
  MR_Word * STATE_VARIABLE_Specs_79);

static void MR_CALL 
hlds__make_hlds__add_clause__can_we_do_singleton_and_quant_warnings_3_p_0(
  MR_Word PredStatus_4,
  MR_Word ClausesInfo_5,
  MR_Word * CanWarn_6);

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
hlds__make_hlds__add_clause____Unify____maybe_can_warn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_clause____Compare____maybe_can_warn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_clause____Unify____mode_annotations_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_clause____Compare____mode_annotations_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_1[60][2];

static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_2[3][1];

static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_3[1][5];

static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_4[1][3];




static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_1[60][2] = {
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
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&hlds__make_hlds__add_clause_scalar_common_2[0])),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Attempt to define a clause for"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 12U)),
    ((MR_Box) (&hlds__make_hlds__add_clause_scalar_common_1[4]))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "at the end of the preceding line."))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[7])))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "inadvertently writing a period instead of a comma"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[9])))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "This is usually caused by"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[11])))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[13])))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "clause"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[16]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[15])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[18])))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: clause for"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "automatically generated field access"))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[7])))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "of the constructor a different name."))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[7])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "to a field update, give the field"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[24])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "function, for example to check the input"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[26])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "To supply your own definition for a field access"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[28])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "are automatically generated by the compiler."))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[30])))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Clauses for field access functions"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[32])))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: clause for builtin."))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[35]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In the head of a clause for"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[7])))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "have mode annotations."))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[7])))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "syntax error: some but not all arguments"))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[41])))
  },
  /* row  44 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[43])))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[44])))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Warning: the"))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[46]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "a clause for it to that mode."))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[7])))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "so there is no need to restrict"))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[49])))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "has only one mode,"))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[51])))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in the"))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "argument:"))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[7])))
  },
  /* row  57 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  58 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[34])))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_mkword(2, &hlds__make_hlds__add_clause_scalar_common_1[58]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_2[3][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) ",")) },
  /* row   1 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   2 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
};

static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_3[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&hlds__make_hlds__add_clause__list__pti_list_1__plain_builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_4[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&hlds__make_hlds__add_clause_scalar_common_3[0])),
    ((MR_Box) (hlds__make_hlds__add_clause__clauses_info_add_clause_21_p_0_1)),
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

static const MR_EnumFunctorDesc hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__enum_functor_desc_maybe_can_warn_0_0 = {
  (MR_String) "cannot_warn",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__enum_functor_desc_maybe_can_warn_0_1 = {
  (MR_String) "can_warn",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__enum_ordinal_ordered_maybe_can_warn_0[2] = {
  &hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__enum_functor_desc_maybe_can_warn_0_0,
  &hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__enum_functor_desc_maybe_can_warn_0_1
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__enum_name_ordered_maybe_can_warn_0[2] = {
  &hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__enum_functor_desc_maybe_can_warn_0_1,
  &hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__enum_functor_desc_maybe_can_warn_0_0
};

static const MR_Integer hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__functor_number_map_maybe_can_warn_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__type_ctor_info_maybe_can_warn_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__add_clause____Unify____maybe_can_warn_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_clause____Compare____maybe_can_warn_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_clause",
  (MR_String) "maybe_can_warn",
  { hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__enum_name_ordered_maybe_can_warn_0 },
  { hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__enum_ordinal_ordered_maybe_can_warn_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__functor_number_map_maybe_can_warn_0,

};

static const MR_DuFunctorDesc hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_0 = {
  (MR_String) "ma_empty",
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

static const MR_DuFunctorDesc hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_1 = {
  (MR_String) "ma_none",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_clause__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0) }
};

static const MR_PseudoTypeInfo hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__field_types_mode_annotations_0_2[1] = { (MR_PseudoTypeInfo) (&hlds__make_hlds__add_clause__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0) };

static const MR_DuFunctorDesc hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_2 = {
  (MR_String) "ma_modes",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(2),
  hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__field_types_mode_annotations_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_3 = {
  (MR_String) "ma_mixed",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_stag_ordered_mode_annotations_0_0[3] = {
  &hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_0,
  &hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_1,
  &hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_3
};

static const MR_DuFunctorDescPtr hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_stag_ordered_mode_annotations_0_1[1] = { &hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_2 };

static const MR_DuPtagLayout hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_ptag_ordered_mode_annotations_0[2] = {
  {
    UINT32_C(3),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_stag_ordered_mode_annotations_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_stag_ordered_mode_annotations_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_name_ordered_mode_annotations_0[4] = {
  &hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_0,
  &hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_3,
  &hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_2,
  &hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_1
};

static const MR_Integer hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__functor_number_map_mode_annotations_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__type_ctor_info_mode_annotations_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__add_clause____Unify____mode_annotations_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_clause____Compare____mode_annotations_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_clause",
  (MR_String) "mode_annotations",
  { hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_name_ordered_mode_annotations_0 },
  { hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_ptag_ordered_mode_annotations_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__functor_number_map_mode_annotations_0,

};

static MR_bool MR_CALL 
hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__686__1_1_f_0(
  MR_Word LambdaHeadVar__1_116,
  MR_Word * LambdaHeadVar__2_117)
{
  MR_bool succeeded;
  MR_Word ApplProcIds_81 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_116, (MR_Integer) 0))));
  MR_Word Var_118 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_116, (MR_Integer) 2))));

  succeeded = (Var_118 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    switch (MR_tag((MR_Word) ApplProcIds_81)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ApplProcIds_81)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_clause.clauses_info_add_clause\'/21", (MR_String) "all_modes foreign_proc");
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_clause.clauses_info_add_clause\'/21", (MR_String) "unify modes for foreign_proc");
            break;
        }
        break;
      case (MR_Integer) 1:
        *LambdaHeadVar__2_117 = ((MR_Word) ((MR_hl_field(1, ApplProcIds_81, (MR_Integer) 0))));
        break;
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_clause____Compare____mode_annotations_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 2:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

                mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__add_clause_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Var_15)), ((MR_Box) (ArgY1_9)));
              }
              break;
          }
        }
        break;
    }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_clause____Unify____mode_annotations_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_4 == CastX_3);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_6 == CastX_5);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_10 == CastX_9);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_13_13;
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            TypeInfo_13_13 = (MR_Word) (&hlds__make_hlds__add_clause_scalar_common_1[3]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
          }
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_clause____Compare____maybe_can_warn_0_0(
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
hlds__make_hlds__add_clause____Unify____maybe_can_warn_0_0(
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
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word Var_11 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgY1_7 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 3);
      MR_Integer Var_12 = (MR_Integer) (Var_11);
      MR_Integer Var_13 = (MR_Integer) (ArgY1_7);

      succeeded = (Var_12 < Var_13);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_12 > Var_13);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
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
    MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_4 == CastX_3);
  }
  else
  {
    MR_Word ArgX1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word ArgY1_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
      succeeded = (ArgX1_5 == ArgY1_6);
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
  MR_Word PredOrFunc_18 = ((MR_Unsigned) ((MR_hl_field(0, ClauseInfo_14, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word PredSymName_19 = ((MR_Word) ((MR_hl_field(0, ClauseInfo_14, (MR_Integer) 1))));
  MR_Word ArgTerms0_20 = ((MR_Word) ((MR_hl_field(0, ClauseInfo_14, (MR_Integer) 2))));
  MR_Word ClauseVarSet_21 = ((MR_Word) ((MR_hl_field(0, ClauseInfo_14, (MR_Integer) 3))));
  MR_Word MaybeBodyGoal_22 = ((MR_Word) ((MR_hl_field(0, ClauseInfo_14, (MR_Integer) 4))));
  MR_Word Context_23 = ((MR_Word) ((MR_hl_field(0, ClauseInfo_14, (MR_Integer) 5))));
  MR_Word SeqNum_24 = ((MR_Word) ((MR_hl_field(0, ClauseInfo_14, (MR_Integer) 6))));
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
    PredModuleName_25 = ((MR_Word) ((MR_hl_field(1, PredSymName_19, (MR_Integer) 0))));
    PredName_26 = ((MR_String) ((MR_hl_field(1, PredSymName_19, (MR_Integer) 1))));
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
    PredId_39 = ((MR_Word) ((MR_hl_field(1, PredIds_38, (MR_Integer) 0))));
    Var_57 = ((MR_Word) ((MR_hl_field(1, PredIds_38, (MR_Integer) 1))));
    succeeded = (Var_57 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
    hlds__make_hlds__add_clause__module_add_clause_2_19_p_0(ProgressStream_11, PredStatus_12, ClauseType_13, PredId_39, PredOrFunc_18, PredSymName_19, ArgTerms_31, PredFormArity_35, ClauseVarSet_21, MaybeBodyGoal_22, Context_23, SeqNum_24, IllegalSVarResult_30, STATE_VARIABLE_ModuleInfo_0_46, STATE_VARIABLE_ModuleInfo_47, STATE_VARIABLE_QualInfo_0_48, STATE_VARIABLE_QualInfo_49, STATE_VARIABLE_Specs_0_50, STATE_VARIABLE_Specs_51);
  else
  {
    succeeded = (strcmp(PredName_26, (MR_String) ",") == 0);
    if (succeeded)
      succeeded = (Arity_34 == (MR_Integer) 2);
    if (succeeded)
    {
      MR_Word Spec_42;

      {
        Spec_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_42, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_clause.module_add_clause\'/10"));
        MR_hl_field(1, Spec_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_42, 2) = ((MR_Box) ((MR_Unsigned) 44U));
        MR_hl_field(1, Spec_42, 3) = ((MR_Box) (Context_23));
        MR_hl_field(1, Spec_42, 4) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[19])));
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
      MR_Word STATE_VARIABLE_ModuleInfo_92_92;
      MR_Word STATE_VARIABLE_Specs_93_93;
      MR_Word PredId_100;

      if ((ClauseType_13 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word UserArity_44;
        MR_Word Origin_45;
        MR_Word Var_89;

        parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_18, &UserArity_44, PredFormArity_35);
        {
          Var_89 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_89, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_18));
          MR_hl_field(0, Var_89, 1) = ((MR_Box) (PredSymName_19));
          MR_hl_field(0, Var_89, 2) = ((MR_Box) (UserArity_44));
        }
        {
          Origin_45 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Origin_45, 0) = ((MR_Box) (Var_89));
        }
        hlds__add_pred__add_implicit_pred_decl_report_error_14_p_0(PredOrFunc_18, PredModuleName_25, PredName_26, PredFormArity_35, PredStatus_12, (MR_Integer) 0, Context_23, Origin_45, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[17])), &PredId_100, STATE_VARIABLE_ModuleInfo_0_46, &STATE_VARIABLE_ModuleInfo_92_92, STATE_VARIABLE_Specs_0_50, &STATE_VARIABLE_Specs_93_93);
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_clause.module_add_clause\'/10", (MR_String) "clause for undeclared promise");
          return;
        }
      hlds__make_hlds__add_clause__module_add_clause_2_19_p_0(ProgressStream_11, PredStatus_12, ClauseType_13, PredId_100, PredOrFunc_18, PredSymName_19, ArgTerms_31, PredFormArity_35, ClauseVarSet_21, MaybeBodyGoal_22, Context_23, SeqNum_24, IllegalSVarResult_30, STATE_VARIABLE_ModuleInfo_92_92, STATE_VARIABLE_ModuleInfo_47, STATE_VARIABLE_QualInfo_0_48, STATE_VARIABLE_QualInfo_49, STATE_VARIABLE_Specs_93_93, STATE_VARIABLE_Specs_51);
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_clause__module_add_clause_2_19_p_0(
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
  MR_Word STATE_VARIABLE_ModuleInfo_0_65,
  MR_Word * STATE_VARIABLE_ModuleInfo_66,
  MR_Word STATE_VARIABLE_QualInfo_0_67,
  MR_Word * STATE_VARIABLE_QualInfo_68,
  MR_Word STATE_VARIABLE_Specs_0_69,
  MR_Word * STATE_VARIABLE_Specs_70)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_PredInfo_71_71;
  MR_Word STATE_VARIABLE_PredInfo_79_79;
  MR_Word STATE_VARIABLE_PredSpecs_82_82;
  MR_Word STATE_VARIABLE_PredSpecs_83_83;
  MR_Word STATE_VARIABLE_PredSpecs_84_84;
  MR_Word STATE_VARIABLE_PredInfo_85_85;
  MR_Word Var_74;
  MR_Word Var_43;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_65, PredId_23, &STATE_VARIABLE_PredInfo_71_71);
  hlds__make_hlds__add_clause__add_clause_progress_msg_8_p_0(ProgressStream_20, STATE_VARIABLE_ModuleInfo_0_65, STATE_VARIABLE_PredInfo_71_71, PredOrFunc_24, PredSymName_25, PredFormArity_27);
  Var_74 = (MR_Word) (PredStatus_21);
  succeeded = (Var_74 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    MR_Word Markers0_39;
    MR_Word Markers_40;
    MR_Word STATE_VARIABLE_PredInfo_76_76;

    hlds__hlds_pred__pred_info_set_status_3_p_0((MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), STATE_VARIABLE_PredInfo_71_71, &STATE_VARIABLE_PredInfo_76_76);
    hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_76_76, &Markers0_39);
    hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 22, Markers0_39, &Markers_40);
    hlds__hlds_pred__pred_info_set_markers_3_p_0(Markers_40, STATE_VARIABLE_PredInfo_76_76, &STATE_VARIABLE_PredInfo_79_79);
  }
  else
    STATE_VARIABLE_PredInfo_79_79 = STATE_VARIABLE_PredInfo_71_71;
  if ((IllegalSVarResult_32 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_PredSpecs_82_82 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word StateVar_41;
    MR_Word StateVarContext_42;
    MR_Tuple Var_81 = ((MR_Tuple) ((MR_hl_field(1, IllegalSVarResult_32, (MR_Integer) 0))));

    StateVar_41 = ((MR_Word) ((MR_hl_field(0, Var_81, (MR_Integer) 0))));
    StateVarContext_42 = ((MR_Word) ((MR_hl_field(0, Var_81, (MR_Integer) 1))));
    hlds__make_hlds__state_var__report_illegal_func_svar_result_5_p_0(StateVarContext_42, ClauseVarSet_28, StateVar_41, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_PredSpecs_82_82);
  }
  hlds__make_hlds__add_clause__maybe_add_error_for_field_access_function_8_p_0(STATE_VARIABLE_ModuleInfo_0_65, PredStatus_21, PredOrFunc_24, PredSymName_25, PredFormArity_27, Context_30, STATE_VARIABLE_PredSpecs_82_82, &STATE_VARIABLE_PredSpecs_83_83);
  hlds__make_hlds__add_clause__maybe_add_error_for_builtin_5_p_0(STATE_VARIABLE_ModuleInfo_0_65, STATE_VARIABLE_PredInfo_79_79, Context_30, STATE_VARIABLE_PredSpecs_83_83, &STATE_VARIABLE_PredSpecs_84_84);
  hlds__default_func_mode__maybe_add_default_func_mode_4_p_0(STATE_VARIABLE_ModuleInfo_0_65, STATE_VARIABLE_PredInfo_79_79, &STATE_VARIABLE_PredInfo_85_85, &Var_43);
  if ((STATE_VARIABLE_PredSpecs_84_84 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word STATE_VARIABLE_PredInfo_91_91;
    MR_Word STATE_VARIABLE_ModuleInfo_96_96;

    if (((MR_tag((MR_Word) MaybeBodyGoal_29)) == (MR_Integer) 0))
    {
      MR_Word BodyGoalSpecs_46 = ((MR_Word) ((MR_hl_field(0, MaybeBodyGoal_29, (MR_Integer) 0))));
      MR_Word Clauses0_47;
      MR_Word Clauses_48;
      MR_Word Var_105;
      MR_Word Var_106;
      MR_Word Var_107;
      MR_Word Var_108;
      MR_Word Var_109;
      MR_Word Var_110;
      MR_Word Var_111;
      MR_Word Var_112;
      MR_Word Var_113;

      *STATE_VARIABLE_Specs_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), BodyGoalSpecs_46, STATE_VARIABLE_Specs_0_69);
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_85_85, &Clauses0_47);
      Var_105 = ((MR_Word) ((MR_hl_field(0, Clauses0_47, (MR_Integer) 0))));
      Var_106 = ((MR_Word) ((MR_hl_field(0, Clauses0_47, (MR_Integer) 1))));
      Var_107 = ((MR_Word) ((MR_hl_field(0, Clauses0_47, (MR_Integer) 2))));
      Var_108 = ((MR_Word) ((MR_hl_field(0, Clauses0_47, (MR_Integer) 3))));
      Var_109 = ((MR_Word) ((MR_hl_field(0, Clauses0_47, (MR_Integer) 4))));
      Var_110 = ((MR_Word) ((MR_hl_field(0, Clauses0_47, (MR_Integer) 5))));
      Var_111 = ((MR_Word) ((MR_hl_field(0, Clauses0_47, (MR_Integer) 6))));
      Var_112 = ((MR_Word) ((MR_hl_field(0, Clauses0_47, (MR_Integer) 7))));
      Var_113 = ((((MR_Unsigned) ((MR_hl_field(0, Clauses0_47, (MR_Integer) 8))) >> 1)) & (MR_Integer) 1);
      {
        Clauses_48 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Clauses_48, 0) = ((MR_Box) (Var_105));
        MR_hl_field(0, Clauses_48, 1) = ((MR_Box) (Var_106));
        MR_hl_field(0, Clauses_48, 2) = ((MR_Box) (Var_107));
        MR_hl_field(0, Clauses_48, 3) = ((MR_Box) (Var_108));
        MR_hl_field(0, Clauses_48, 4) = ((MR_Box) (Var_109));
        MR_hl_field(0, Clauses_48, 5) = ((MR_Box) (Var_110));
        MR_hl_field(0, Clauses_48, 6) = ((MR_Box) (Var_111));
        MR_hl_field(0, Clauses_48, 7) = ((MR_Box) (Var_112));
        MR_hl_field(0, Clauses_48, 8) = (MR_Box) (((((MR_Unsigned) (Var_113) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
      }
      hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(Clauses_48, STATE_VARIABLE_PredInfo_85_85, &STATE_VARIABLE_PredInfo_91_91);
      STATE_VARIABLE_ModuleInfo_96_96 = STATE_VARIABLE_ModuleInfo_0_65;
      *STATE_VARIABLE_QualInfo_68 = STATE_VARIABLE_QualInfo_0_67;
    }
    else
    {
      MR_Word BodyGoal_49 = ((MR_Word) ((MR_hl_field(1, MaybeBodyGoal_29, (MR_Integer) 0))));
      MR_Word BodyGoalWarningSpecs_50 = ((MR_Word) ((MR_hl_field(1, MaybeBodyGoal_29, (MR_Integer) 1))));
      MR_Word ClausesInfo0_51;
      MR_Word TVarSet0_52;
      MR_Word ArgTerms_53;
      MR_Word ProcIdsForThisClause_54;
      MR_Word AllProcIds_55;
      MR_Word TVarSet_56;
      MR_Word ClausesInfo_57;
      MR_Word ExistQVars_60;
      MR_Word ArgTypes_61;
      MR_Word ProcIds_62;
      MR_Word STATE_VARIABLE_Specs_92_92;
      MR_Word STATE_VARIABLE_ModuleInfo_93_93;
      MR_Word STATE_VARIABLE_QualInfo_94_94;
      MR_Word STATE_VARIABLE_Specs_95_95;
      MR_Word STATE_VARIABLE_PredInfo_99_99;
      MR_Word STATE_VARIABLE_PredInfo_101_101;
      MR_Word STATE_VARIABLE_PredInfo_102_102;
      MR_Word STATE_VARIABLE_PredInfo_103_103;
      MR_Word _ArgTVarSet_59;

      STATE_VARIABLE_Specs_92_92 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), BodyGoalWarningSpecs_50, STATE_VARIABLE_Specs_0_69);
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_85_85, &ClausesInfo0_51);
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(STATE_VARIABLE_PredInfo_85_85, &TVarSet0_52);
      hlds__make_hlds__add_clause__select_applicable_modes_15_p_0(MaybeAnnotatedArgTerms_26, ClauseVarSet_28, PredStatus_21, Context_30, PredId_23, STATE_VARIABLE_PredInfo_85_85, &ArgTerms_53, &ProcIdsForThisClause_54, &AllProcIds_55, STATE_VARIABLE_ModuleInfo_0_65, &STATE_VARIABLE_ModuleInfo_93_93, STATE_VARIABLE_QualInfo_0_67, &STATE_VARIABLE_QualInfo_94_94, STATE_VARIABLE_Specs_92_92, &STATE_VARIABLE_Specs_95_95);
      hlds__make_hlds__add_clause__clauses_info_add_clause_21_p_0(ProcIdsForThisClause_54, AllProcIds_55, PredStatus_21, ClauseType_22, PredOrFunc_24, PredSymName_25, ArgTerms_53, Context_30, SeqNum_31, BodyGoal_49, ClauseVarSet_28, TVarSet0_52, &TVarSet_56, ClausesInfo0_51, &ClausesInfo_57, STATE_VARIABLE_ModuleInfo_93_93, &STATE_VARIABLE_ModuleInfo_96_96, STATE_VARIABLE_QualInfo_94_94, STATE_VARIABLE_QualInfo_68, STATE_VARIABLE_Specs_95_95, STATE_VARIABLE_Specs_70);
      hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo_57, STATE_VARIABLE_PredInfo_85_85, &STATE_VARIABLE_PredInfo_99_99);
      if ((ClauseType_22 == (MR_Word) ((MR_Unsigned) 0U)))
        hlds__hlds_pred__pred_info_update_goal_type_3_p_0((MR_Integer) 1, STATE_VARIABLE_PredInfo_99_99, &STATE_VARIABLE_PredInfo_101_101);
      else
        STATE_VARIABLE_PredInfo_101_101 = STATE_VARIABLE_PredInfo_99_99;
      hlds__hlds_pred__pred_info_set_typevarset_3_p_0(TVarSet_56, STATE_VARIABLE_PredInfo_101_101, &STATE_VARIABLE_PredInfo_102_102);
      hlds__hlds_pred__pred_info_get_arg_types_4_p_0(STATE_VARIABLE_PredInfo_102_102, &_ArgTVarSet_59, &ExistQVars_60, &ArgTypes_61);
      hlds__hlds_pred__pred_info_set_arg_types_5_p_0(TVarSet_56, ExistQVars_60, ArgTypes_61, STATE_VARIABLE_PredInfo_102_102, &STATE_VARIABLE_PredInfo_103_103);
      ProcIds_62 = hlds__hlds_pred__pred_info_all_procids_1_f_0(STATE_VARIABLE_PredInfo_103_103);
      succeeded = (ProcIds_62 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = (ClauseType_22 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        MR_Word EndMarkers0_63;
        MR_Word EndMarkers_64;

        hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_103_103, &EndMarkers0_63);
        hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 3, EndMarkers0_63, &EndMarkers_64);
        hlds__hlds_pred__pred_info_set_markers_3_p_0(EndMarkers_64, STATE_VARIABLE_PredInfo_103_103, &STATE_VARIABLE_PredInfo_91_91);
      }
      else
        STATE_VARIABLE_PredInfo_91_91 = STATE_VARIABLE_PredInfo_103_103;
    }
    hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_23, STATE_VARIABLE_PredInfo_91_91, STATE_VARIABLE_ModuleInfo_96_96, STATE_VARIABLE_ModuleInfo_66);
  }
  else
  {
    MR_Word Var_87;
    MR_Word Var_88;

    Var_88 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeBodyGoal_29);
    Var_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_88, STATE_VARIABLE_Specs_0_69);
    *STATE_VARIABLE_Specs_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), STATE_VARIABLE_PredSpecs_84_84, Var_87);
    *STATE_VARIABLE_ModuleInfo_66 = STATE_VARIABLE_ModuleInfo_0_65;
    *STATE_VARIABLE_QualInfo_68 = STATE_VARIABLE_QualInfo_0_67;
  }
}

static void MR_CALL 
hlds__make_hlds__add_clause__select_applicable_modes_15_p_0(
  MR_Word MaybeAnnotatedArgTerms_16,
  MR_Word VarSet_17,
  MR_Word PredStatus_18,
  MR_Word Context_19,
  MR_Word PredId_20,
  MR_Word PredInfo_21,
  MR_Word * ArgTerms_22,
  MR_Word * ApplProcIds_23,
  MR_Word * AllProcIds_24,
  MR_Word STATE_VARIABLE_ModuleInfo_0_52,
  MR_Word * STATE_VARIABLE_ModuleInfo_53,
  MR_Word STATE_VARIABLE_QualInfo_0_54,
  MR_Word * STATE_VARIABLE_QualInfo_55,
  MR_Word STATE_VARIABLE_Specs_0_56,
  MR_Word * STATE_VARIABLE_Specs_57)
{
  MR_bool succeeded;
  MR_String PredIdStr_28;
  MR_Word ContextPieces_29;
  MR_Word ModeAnnotations_30;
  MR_Word ModeAnnotationSpecs_31;
  MR_Word Var_58;
  MR_Word Var_61;
  MR_Word Var_62;

  *AllProcIds_24 = hlds__hlds_pred__pred_info_all_procids_1_f_0(PredInfo_21);
  PredIdStr_28 = hlds__hlds_out__hlds_out_util__pred_id_to_user_string_2_f_0(STATE_VARIABLE_ModuleInfo_0_52, PredId_20);
  {
    Var_62 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_62, 0) = ((MR_Box) (PredIdStr_28));
  }
  {
    Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_61, 0) = ((MR_Box) (Var_62));
    MR_hl_field(1, Var_61, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[39])));
  }
  {
    Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_58, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[37])));
    MR_hl_field(1, Var_58, 1) = ((MR_Box) (Var_61));
  }
  ContextPieces_29 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_58);
  hlds__make_hlds__add_clause__get_mode_annotations_9_p_0(VarSet_17, ContextPieces_29, (MR_Integer) 1, MaybeAnnotatedArgTerms_16, ArgTerms_22, (MR_Word) ((MR_Unsigned) 0U), &ModeAnnotations_30, (MR_Word) ((MR_Unsigned) 0U), &ModeAnnotationSpecs_31);
  if ((ModeAnnotationSpecs_31 == (MR_Word) ((MR_Unsigned) 0U)))
    switch (MR_tag((MR_Word) ModeAnnotations_30)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ModeAnnotations_30)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
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
              *STATE_VARIABLE_QualInfo_55 = STATE_VARIABLE_QualInfo_0_54;
              *STATE_VARIABLE_Specs_57 = STATE_VARIABLE_Specs_0_56;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_110;
              MR_Word Pieces_130;
              MR_Word Spec_131;

              {
                Var_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_110, 0) = ((MR_Box) (Var_62));
                MR_hl_field(1, Var_110, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[45])));
              }
              {
                Pieces_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_130, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[37])));
                MR_hl_field(1, Pieces_130, 1) = ((MR_Box) (Var_110));
              }
              {
                Spec_131 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Spec_131, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_clause.select_applicable_modes\'/15"));
                MR_hl_field(1, Spec_131, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(1, Spec_131, 2) = ((MR_Box) ((MR_Unsigned) 44U));
                MR_hl_field(1, Spec_131, 3) = ((MR_Box) (Context_19));
                MR_hl_field(1, Spec_131, 4) = ((MR_Box) (Pieces_130));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Specs_57 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Spec_131));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_56));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *ApplProcIds_23 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (*AllProcIds_24));
              }
              *STATE_VARIABLE_QualInfo_55 = STATE_VARIABLE_QualInfo_0_54;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgModes0_34 = ((MR_Word) ((MR_hl_field(1, ModeAnnotations_30, (MR_Integer) 0))));
          MR_Word ArgModes_35;
          MR_Word Procs_40;
          MR_Word ExistingProcs_41;
          MR_Word STATE_VARIABLE_Specs_74_74;
          MR_Word Var_73 = (MR_Word) (PredStatus_18);
          MR_Integer ProcId_42;

          succeeded = (Var_73 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ArgModes_35 = ArgModes0_34;
            STATE_VARIABLE_Specs_74_74 = STATE_VARIABLE_Specs_0_56;
            *STATE_VARIABLE_QualInfo_55 = STATE_VARIABLE_QualInfo_0_54;
          }
          else
          {
            MR_Word Exported_36;
            MR_Word InInt_37;
            MR_Word MQInfo0_38;
            MR_Word MQInfo_39;

            Exported_36 = hlds__status__pred_status_is_exported_to_non_submodules_1_f_0(PredStatus_18);
            switch (Exported_36) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                InInt_37 = (MR_Integer) 0;
                break;
              case (MR_Integer) 1:
                InInt_37 = (MR_Integer) 1;
                break;
            }
            hlds__make_hlds__qual_info__qual_info_get_mq_info_2_p_0(STATE_VARIABLE_QualInfo_0_54, &MQInfo0_38);
            parse_tree__module_qual__qualify_clause_mode_list_8_p_0(InInt_37, Context_19, ArgModes0_34, &ArgModes_35, MQInfo0_38, &MQInfo_39, STATE_VARIABLE_Specs_0_56, &STATE_VARIABLE_Specs_74_74);
            hlds__make_hlds__qual_info__qual_info_set_mq_info_3_p_0(MQInfo_39, STATE_VARIABLE_QualInfo_0_54, STATE_VARIABLE_QualInfo_55);
          }
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_21, &Procs_40);
          mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs_40, &ExistingProcs_41);
          succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(STATE_VARIABLE_ModuleInfo_0_52, ExistingProcs_41, ArgModes_35, &ProcId_42);
          if (succeeded)
          {
            MR_Word Var_76;

            {
              Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_76, 0) = ((MR_Box) (ProcId_42));
              MR_hl_field(1, Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *ApplProcIds_23 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_76));
            }
            if ((ExistingProcs_41 == (MR_Word) ((MR_Unsigned) 0U)))
              *STATE_VARIABLE_Specs_57 = STATE_VARIABLE_Specs_74_74;
            else
            {
              MR_Word Var_136 = ((MR_Word) ((MR_hl_field(1, ExistingProcs_41, (MR_Integer) 1))));

              if ((Var_136 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Globals_44;
                MR_Word Warn_45;

                hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_52, &Globals_44);
                libs__globals__lookup_bool_option_3_p_0(Globals_44, (MR_Integer) 61, &Warn_45);
                switch (Warn_45) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *STATE_VARIABLE_Specs_57 = STATE_VARIABLE_Specs_74_74;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word PredDescPieces_46;
                      MR_Word Pieces_47;
                      MR_Word Spec_48;
                      MR_Word Var_85;

                      PredDescPieces_46 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 1, PredInfo_21);
                      Var_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredDescPieces_46, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[53])));
                      Pieces_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[47])), Var_85);
                      {
                        Spec_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Spec_48, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_clause.select_applicable_modes\'/15"));
                        MR_hl_field(1, Spec_48, 1) = ((MR_Box) ((MR_Unsigned) 4U));
                        MR_hl_field(1, Spec_48, 2) = ((MR_Box) ((MR_Unsigned) 44U));
                        MR_hl_field(1, Spec_48, 3) = ((MR_Box) (Context_19));
                        MR_hl_field(1, Spec_48, 4) = ((MR_Box) (Pieces_47));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *STATE_VARIABLE_Specs_57 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_48));
                        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_74_74));
                      }
                    }
                    break;
                }
              }
              else
                *STATE_VARIABLE_Specs_57 = STATE_VARIABLE_Specs_74_74;
            }
          }
          else
          {
            hlds__make_hlds_error__report_undeclared_mode_error_9_p_0(STATE_VARIABLE_ModuleInfo_0_52, PredId_20, PredInfo_21, VarSet_17, ArgModes_35, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[17])), Context_19, STATE_VARIABLE_Specs_74_74, STATE_VARIABLE_Specs_57);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *ApplProcIds_23 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (*AllProcIds_24));
            }
          }
        }
        break;
    }
  else
  {
    *STATE_VARIABLE_Specs_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ModeAnnotationSpecs_31, STATE_VARIABLE_Specs_0_56);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *ApplProcIds_23 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (*AllProcIds_24));
    }
    *STATE_VARIABLE_QualInfo_55 = STATE_VARIABLE_QualInfo_0_54;
  }
  *STATE_VARIABLE_ModuleInfo_53 = STATE_VARIABLE_ModuleInfo_0_52;
}

static void MR_CALL 
hlds__make_hlds__add_clause__get_mode_annotations_9_p_0(
  MR_Word VarSet_1,
  MR_Word ContextPieces_2,
  MR_Integer ArgNum_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Annotations_0_6,
  MR_Word * STATE_VARIABLE_Annotations_7,
  MR_Word STATE_VARIABLE_Specs_0_8,
  MR_Word * STATE_VARIABLE_Specs_9)
{
  MR_bool succeeded;

  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_9 = STATE_VARIABLE_Specs_0_8;
    *STATE_VARIABLE_Annotations_7 = STATE_VARIABLE_Annotations_0_6;
  }
  else
  {
    MR_Word MAArgTerm_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    MR_Word MAArgTerms_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word ArgTerm_24;
    MR_Word ArgTerms_25;
    MR_Word STATE_VARIABLE_Annotations_35_35;
    MR_Word STATE_VARIABLE_Specs_36_36;
    MR_Integer Var_37;
    MR_Word ArgTermPrime_42;
    MR_Word ModeTerm_43;
    MR_Word Var_55;
    MR_Word Var_51;
    MR_String Var_52;
    MR_Word Var_53;
    MR_Word Var_54;

    succeeded = ((MR_tag((MR_Word) MAArgTerm_22)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_51 = ((MR_Word) ((MR_hl_field(0, MAArgTerm_22, (MR_Integer) 0))));
      Var_53 = ((MR_Word) ((MR_hl_field(0, MAArgTerm_22, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_51)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_52 = ((MR_String) ((MR_hl_field(0, Var_51, (MR_Integer) 0))));
        succeeded = (strcmp(Var_52, (MR_String) "::") == 0);
        if (succeeded)
        {
          succeeded = (Var_53 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ArgTermPrime_42 = ((MR_Word) ((MR_hl_field(1, Var_53, (MR_Integer) 0))));
            Var_54 = ((MR_Word) ((MR_hl_field(1, Var_53, (MR_Integer) 1))));
            succeeded = (Var_54 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ModeTerm_43 = ((MR_Word) ((MR_hl_field(1, Var_54, (MR_Integer) 0))));
              Var_55 = ((MR_Word) ((MR_hl_field(1, Var_54, (MR_Integer) 1))));
              succeeded = (Var_55 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word ArgContextPieces_45;
      MR_Word GenVarSet_46;
      MR_Word GenModeTerm_47;
      MR_Word MaybeMode_48;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_60;
      MR_Word Var_61;

      ArgTerm_24 = ArgTermPrime_42;
      {
        Var_61 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_61, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(3, Var_61, 1) = ((MR_Box) (ArgNum_3));
      }
      {
        Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_60, 0) = ((MR_Box) (Var_61));
        MR_hl_field(1, Var_60, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[56])));
      }
      {
        Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_57, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[54])));
        MR_hl_field(1, Var_57, 1) = ((MR_Box) (Var_60));
      }
      Var_56 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_57);
      ArgContextPieces_45 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_2, Var_56);
      mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_1, &GenVarSet_46);
      mercury__term__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModeTerm_43, &GenModeTerm_47);
      parse_tree__parse_inst_mode_name__parse_mode_5_p_0((MR_Word) ((MR_Unsigned) 0U), GenVarSet_46, ArgContextPieces_45, GenModeTerm_47, &MaybeMode_48);
      if (((MR_tag((MR_Word) MaybeMode_48)) == (MR_Integer) 0))
      {
        MR_Word MaybeMaybeMode_28 = (MR_Word) (MaybeMode_48);
        MR_Word MaybeModeSpecs_30 = ((MR_Word) ((MR_hl_field(0, MaybeMaybeMode_28, (MR_Integer) 0))));

        STATE_VARIABLE_Specs_36_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), STATE_VARIABLE_Specs_0_8, MaybeModeSpecs_30);
        STATE_VARIABLE_Annotations_35_35 = STATE_VARIABLE_Annotations_0_6;
      }
      else
      {
        MR_Word Mode_49 = ((MR_Word) ((MR_hl_field(1, MaybeMode_48, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) STATE_VARIABLE_Annotations_0_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(STATE_VARIABLE_Annotations_0_6)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var_70;

                  {
                    Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_70, 0) = ((MR_Box) (Mode_49));
                    MR_hl_field(1, Var_70, 1) = ((MR_Box) (Var_55));
                  }
                  {
                    STATE_VARIABLE_Annotations_35_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_Annotations_35_35, 0) = ((MR_Box) (Var_70));
                  }
                }
                break;
              case (MR_Integer) 1:
                STATE_VARIABLE_Annotations_35_35 = (MR_Word) ((MR_Unsigned) 8U);
                break;
              case (MR_Integer) 2:
                STATE_VARIABLE_Annotations_35_35 = (MR_Word) ((MR_Unsigned) 8U);
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_75;
              MR_Word Var_76;
              MR_Word Var_81 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Annotations_0_6, (MR_Integer) 0))));

              {
                Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_76, 0) = ((MR_Box) (Mode_49));
                MR_hl_field(1, Var_76, 1) = ((MR_Box) (Var_55));
              }
              Var_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_81, Var_76);
              {
                STATE_VARIABLE_Annotations_35_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_Annotations_35_35, 0) = ((MR_Box) (Var_75));
              }
            }
            break;
        }
        STATE_VARIABLE_Specs_36_36 = STATE_VARIABLE_Specs_0_8;
      }
    }
    else
    {
      MR_Word MaybeMode_114;

      ArgTerm_24 = MAArgTerm_22;
      MaybeMode_114 = ((MR_Word) ((MR_hl_field(1, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_2[2])), (MR_Integer) 0))));
      switch (MR_tag((MR_Word) STATE_VARIABLE_Annotations_0_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(STATE_VARIABLE_Annotations_0_6)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              if ((MaybeMode_114 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_Annotations_35_35 = (MR_Word) ((MR_Unsigned) 4U);
              else
              {
                MR_Word Mode_82 = ((MR_Word) ((MR_hl_field(1, MaybeMode_114, (MR_Integer) 0))));
                MR_Word Var_83;

                {
                  Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_83, 0) = ((MR_Box) (Mode_82));
                  MR_hl_field(1, Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  STATE_VARIABLE_Annotations_35_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_Annotations_35_35, 0) = ((MR_Box) (Var_83));
                }
              }
              break;
            case (MR_Integer) 1:
              if ((MaybeMode_114 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_Annotations_35_35 = (MR_Word) ((MR_Unsigned) 4U);
              else
                STATE_VARIABLE_Annotations_35_35 = (MR_Word) ((MR_Unsigned) 8U);
              break;
            case (MR_Integer) 2:
              STATE_VARIABLE_Annotations_35_35 = (MR_Word) ((MR_Unsigned) 8U);
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_103 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Annotations_0_6, (MR_Integer) 0))));

            if ((MaybeMode_114 == (MR_Word) ((MR_Unsigned) 0U)))
              STATE_VARIABLE_Annotations_35_35 = (MR_Word) ((MR_Unsigned) 8U);
            else
            {
              MR_Word Mode_88 = ((MR_Word) ((MR_hl_field(1, MaybeMode_114, (MR_Integer) 0))));
              MR_Word Var_89;
              MR_Word Var_90;

              {
                Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_90, 0) = ((MR_Box) (Mode_88));
                MR_hl_field(1, Var_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              Var_89 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_103, Var_90);
              {
                STATE_VARIABLE_Annotations_35_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_Annotations_35_35, 0) = ((MR_Box) (Var_89));
              }
            }
          }
          break;
      }
      STATE_VARIABLE_Specs_36_36 = STATE_VARIABLE_Specs_0_8;
    }
    Var_37 = (MR_Integer) ((MR_Unsigned) ArgNum_3 + (MR_Unsigned) 1);
    hlds__make_hlds__add_clause__get_mode_annotations_9_p_0(VarSet_1, ContextPieces_2, Var_37, MAArgTerms_23, &ArgTerms_25, STATE_VARIABLE_Annotations_35_35, STATE_VARIABLE_Annotations_7, STATE_VARIABLE_Specs_36_36, STATE_VARIABLE_Specs_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ArgTerm_24));
      MR_hl_field(1, base, 1) = ((MR_Box) (ArgTerms_25));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_clause__maybe_add_error_for_builtin_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredInfo_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(PredInfo_7);
  if (succeeded)
  {
    MR_Word AllowDefnOfBuiltin_11;
    MR_Word Globals_24;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_6, &Globals_24);
    libs__globals__lookup_bool_option_3_p_0(Globals_24, (MR_Integer) 327, &AllowDefnOfBuiltin_11);
    switch (AllowDefnOfBuiltin_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word BuiltinSpec_12;

          {
            BuiltinSpec_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, BuiltinSpec_12, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_clause.maybe_add_error_for_builtin\'/5"));
            MR_hl_field(1, BuiltinSpec_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, BuiltinSpec_12, 2) = ((MR_Box) ((MR_Unsigned) 44U));
            MR_hl_field(1, BuiltinSpec_12, 3) = ((MR_Box) (Context_8));
            MR_hl_field(1, BuiltinSpec_12, 4) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[36])));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_14 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (BuiltinSpec_12));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_13));
          }
        }
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_Specs_14 = STATE_VARIABLE_Specs_0_13;
        break;
    }
  }
  else
    *STATE_VARIABLE_Specs_14 = STATE_VARIABLE_Specs_0_13;
}

static void MR_CALL 
hlds__make_hlds__add_clause__maybe_add_error_for_field_access_function_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word PredStatus_10,
  MR_Word PredOrFunc_11,
  MR_Word PredSymName_12,
  MR_Word PredFormArity_13,
  MR_Word Context_14,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25)
{
  MR_bool succeeded = (PredOrFunc_11 == (MR_Integer) 1);
  MR_Integer UserArityInt_16;
  MR_Word Var_26;
  MR_Integer Var_72;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_27;

  if (succeeded)
  {
    parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_11, &Var_26, PredFormArity_13);
    UserArityInt_16 = (MR_Integer) (Var_26);
    succeeded = hlds__hlds_pred__is_field_access_function_name_5_p_0(ModuleInfo_9, PredSymName_12, &Var_72, &Var_17, &Var_18);
    if (succeeded)
    {
      succeeded = (UserArityInt_16 == Var_72);
      if (succeeded)
      {
        Var_27 = (MR_Word) (PredStatus_10);
        succeeded = (Var_27 != (MR_Word) ((MR_Unsigned) 0U));
      }
    }
  }
  if (succeeded)
  {
    MR_Word FieldPFSymNameArity_19;
    MR_Word FieldAccessMainPieces_20;
    MR_Word FieldAccessMsg_22;
    MR_Word FieldAccessSpec_23;
    MR_Word Var_30;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_70;

    {
      FieldPFSymNameArity_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, FieldPFSymNameArity_19, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_11));
      MR_hl_field(0, FieldPFSymNameArity_19, 1) = ((MR_Box) (PredSymName_12));
      MR_hl_field(0, FieldPFSymNameArity_19, 2) = ((MR_Box) (PredFormArity_13));
    }
    {
      Var_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_34, 0) = ((MR_Box) ((MR_Unsigned) 14U));
      MR_hl_field(3, Var_34, 1) = ((MR_Box) (FieldPFSymNameArity_19));
    }
    {
      Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_33, 0) = ((MR_Box) (Var_34));
      MR_hl_field(1, Var_33, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[22])));
    }
    {
      Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_30, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[21])));
      MR_hl_field(1, Var_30, 1) = ((MR_Box) (Var_33));
    }
    {
      FieldAccessMainPieces_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FieldAccessMainPieces_20, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_clause_scalar_common_1[20])));
      MR_hl_field(1, FieldAccessMainPieces_20, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_62 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_62, 0) = ((MR_Box) (FieldAccessMainPieces_20));
    }
    {
      Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_61, 0) = ((MR_Box) (Var_62));
      MR_hl_field(1, Var_61, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[59])));
    }
    {
      FieldAccessMsg_22 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, FieldAccessMsg_22, 0) = ((MR_Box) (Context_14));
      MR_hl_field(2, FieldAccessMsg_22, 1) = ((MR_Box) (Var_61));
    }
    {
      Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_70, 0) = ((MR_Box) (FieldAccessMsg_22));
      MR_hl_field(1, Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      FieldAccessSpec_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, FieldAccessSpec_23, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_clause.maybe_add_error_for_field_access_function\'/8"));
      MR_hl_field(0, FieldAccessSpec_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, FieldAccessSpec_23, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(0, FieldAccessSpec_23, 3) = ((MR_Box) (Var_70));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_25 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (FieldAccessSpec_23));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_24));
    }
  }
  else
    *STATE_VARIABLE_Specs_25 = STATE_VARIABLE_Specs_0_24;
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
  libs__globals__lookup_bool_option_3_p_0(Globals_16, (MR_Integer) 73, &VeryVerbose_17);
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
        Var_27 = ((MR_Word) ((MR_hl_field(0, MsgClauses_18, (MR_Integer) 6))));
        NumClauses_19 = hlds__hlds_clauses__num_clauses_in_clauses_rep_1_f_0(Var_27);
        PredOrFuncStr_20 = parse_tree__parse_tree_out_misc__pred_or_func_to_full_str_1_f_0(PredOrFunc_12);
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
hlds__make_hlds__add_clause__clauses_info_add_clause_21_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_117;

  succeeded = hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__686__1_1_f_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_117);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_117));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
hlds__make_hlds__add_clause__clauses_info_add_clause_21_p_0(
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
  MR_Word VarSet0_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_91, (MR_Integer) 0))));
  MR_Word ExplicitVarTypes0_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_91, (MR_Integer) 1))));
  MR_Word VarTable0_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_91, (MR_Integer) 2))));
  MR_Word RttiVarMaps0_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_91, (MR_Integer) 3))));
  MR_Word TVarNameMap0_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_91, (MR_Integer) 4))));
  MR_Word ArgVector_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_91, (MR_Integer) 5))));
  MR_Word ClausesRep0_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_91, (MR_Integer) 6))));
  MR_Word ItemNumbers0_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_91, (MR_Integer) 7))));
  MR_Word HasForeignClauses0_47 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_91, (MR_Integer) 8))) >> 1)) & (MR_Integer) 1);
  MR_Word HeadVars_49;
  MR_Word IsEmpty_50;
  MR_Word TVarNameMap_51;
  MR_Word MaybeOptImported_52;
  MR_Word VarSet1_53;
  MR_Word Renaming_54;
  MR_Word CanWarn_55;
  MR_Word KeepQuantVars_56;
  MR_Word Goal0_57;
  MR_Word VarSet2_58;
  MR_Word QuantWarnings_59;
  MR_Word StateVarWarnings_60;
  MR_Word StateVarErrors_61;
  MR_Word FoundError_62;
  MR_Word STATE_VARIABLE_QualInfo_100_100;
  MR_Word STATE_VARIABLE_QualInfo_102_102;
  MR_Word STATE_VARIABLE_Specs_103_103;
  MR_Word STATE_VARIABLE_QualInfo_105_105;
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_91, (MR_Integer) 8)));
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
  hlds__make_hlds__qual_info__update_qual_info_6_p_0(TVarNameMap_51, TVarSet0_33, ExplicitVarTypes0_40, MaybeOptImported_52, STATE_VARIABLE_QualInfo_0_95, &STATE_VARIABLE_QualInfo_100_100);
  mercury__varset__merge_renaming_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet0_39, ClauseVarSet_32, &VarSet1_53, &Renaming_54);
  hlds__make_hlds__add_clause__can_we_do_singleton_and_quant_warnings_3_p_0(PredStatus_24, STATE_VARIABLE_ClausesInfo_0_91, &CanWarn_55);
  switch (CanWarn_55) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      KeepQuantVars_56 = (MR_Integer) 1;
      break;
    case (MR_Integer) 0:
      KeepQuantVars_56 = (MR_Integer) 0;
      break;
  }
  hlds__make_hlds__add_clause__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_108_97_117_115_101_95_116_114_97_110_115_102_111_114_109_95_95_91_52_93_95_48_21_p_0(KeepQuantVars_56, Renaming_54, PredOrFunc_26, HeadVars_49, ArgTerms_28, Context_29, ClauseType_25, BodyGoal_31, &Goal0_57, VarSet1_53, &VarSet2_58, &QuantWarnings_59, &StateVarWarnings_60, &StateVarErrors_61, STATE_VARIABLE_ModuleInfo_0_93, STATE_VARIABLE_ModuleInfo_94, STATE_VARIABLE_QualInfo_100_100, &STATE_VARIABLE_QualInfo_102_102, STATE_VARIABLE_Specs_0_97, &STATE_VARIABLE_Specs_103_103);
  hlds__make_hlds__qual_info__qual_info_get_tvarset_2_p_0(STATE_VARIABLE_QualInfo_102_102, TVarSet_34);
  hlds__make_hlds__qual_info__qual_info_get_found_syntax_error_2_p_0(STATE_VARIABLE_QualInfo_102_102, &FoundError_62);
  hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_p_0((MR_Integer) 0, STATE_VARIABLE_QualInfo_102_102, &STATE_VARIABLE_QualInfo_105_105);
  succeeded = (FoundError_62 == (MR_Integer) 1);
  if (!(succeeded))
  {
    succeeded = (StateVarErrors_61 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
    }
  }
  if (succeeded)
  {
    MR_Word Var_131;
    MR_Word Var_132;
    MR_Word Var_133;
    MR_Word Var_134;
    MR_Word Var_135;
    MR_Word Var_136;
    MR_Word Var_137;
    MR_Word Var_138;
    MR_Word Var_139;

    *STATE_VARIABLE_Specs_98 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), StateVarErrors_61, STATE_VARIABLE_Specs_103_103);
    Var_131 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_91, (MR_Integer) 0))));
    Var_132 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_91, (MR_Integer) 1))));
    Var_133 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_91, (MR_Integer) 2))));
    Var_134 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_91, (MR_Integer) 3))));
    Var_135 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_91, (MR_Integer) 4))));
    Var_136 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_91, (MR_Integer) 5))));
    Var_137 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_91, (MR_Integer) 6))));
    Var_138 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_91, (MR_Integer) 7))));
    Var_139 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_91, (MR_Integer) 8))) >> 1)) & (MR_Integer) 1);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ClausesInfo_92 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_131));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_132));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_133));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_134));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_135));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_136));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_137));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_138));
      MR_hl_field(0, base, 8) = (MR_Box) (((((MR_Unsigned) (Var_139) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
    }
    *STATE_VARIABLE_QualInfo_96 = STATE_VARIABLE_QualInfo_105_105;
  }
  else
  {
    MR_Word VarSet_65;
    MR_Word Goal_66;
    MR_Word ClausesRep_84;
    MR_Word ExplicitVarTypes_89;
    MR_Word ItemNumbers_90;

    switch (CanWarn_55) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word PredFormArity_67;
          MR_Word WarnPFSymNameArity_68;
          MR_Word SeenQuant_69;
          MR_Word STATE_VARIABLE_Specs_109_109;

          PredFormArity_67 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&hlds__make_hlds__add_clause_scalar_common_1[1]), HeadVars_49);
          {
            WarnPFSymNameArity_68 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, WarnPFSymNameArity_68, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_26));
            MR_hl_field(0, WarnPFSymNameArity_68, 1) = ((MR_Box) (PredSymName_27));
            MR_hl_field(0, WarnPFSymNameArity_68, 2) = ((MR_Box) (PredFormArity_67));
          }
          hlds__make_hlds__make_hlds_warn__warn_singletons_7_p_0(*STATE_VARIABLE_ModuleInfo_94, WarnPFSymNameArity_68, VarSet2_58, Goal0_57, &SeenQuant_69, STATE_VARIABLE_Specs_103_103, &STATE_VARIABLE_Specs_109_109);
          switch (SeenQuant_69) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                VarSet_65 = VarSet2_58;
                Goal_66 = Goal0_57;
                *STATE_VARIABLE_QualInfo_96 = STATE_VARIABLE_QualInfo_105_105;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word QuantVarTypes0_70;
                MR_Word EmptyRttiVarmaps_71;
                MR_Word QuantVarTypes_73;
                MR_Word _QuantWarnings_72;
                MR_Word Var_74;

                hlds__make_hlds__qual_info__qual_info_get_explicit_var_types_2_p_0(STATE_VARIABLE_QualInfo_105_105, &QuantVarTypes0_70);
                hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&EmptyRttiVarmaps_71);
                hlds__quantification__implicitly_quantify_clause_body_general_vs_12_p_0((MR_Integer) 0, (MR_Integer) 0, HeadVars_49, &_QuantWarnings_72, Goal0_57, &Goal_66, VarSet2_58, &VarSet_65, QuantVarTypes0_70, &QuantVarTypes_73, EmptyRttiVarmaps_71, &Var_74);
                hlds__make_hlds__qual_info__qual_info_set_explicit_var_types_3_p_0(QuantVarTypes_73, STATE_VARIABLE_QualInfo_105_105, STATE_VARIABLE_QualInfo_96);
              }
              break;
          }
          hlds__make_hlds__make_hlds_warn__add_quant_warnings_5_p_0(WarnPFSymNameArity_68, VarSet_65, QuantWarnings_59, STATE_VARIABLE_Specs_109_109, STATE_VARIABLE_Specs_98);
        }
        break;
      case (MR_Integer) 0:
        {
          VarSet_65 = VarSet2_58;
          Goal_66 = Goal0_57;
          *STATE_VARIABLE_QualInfo_96 = STATE_VARIABLE_QualInfo_105_105;
          *STATE_VARIABLE_Specs_98 = STATE_VARIABLE_Specs_103_103;
        }
        break;
    }
    switch (HasForeignClauses0_47) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Clause_130;

          {
            Clause_130 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Clause_130, 0) = ((MR_Box) (ApplModeIds0_22));
            MR_hl_field(0, Clause_130, 1) = ((MR_Box) (Goal_66));
            MR_hl_field(0, Clause_130, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Clause_130, 3) = ((MR_Box) (Context_29));
            MR_hl_field(0, Clause_130, 4) = ((MR_Box) (StateVarWarnings_60));
          }
          hlds__hlds_clauses__add_clause_3_p_0(Clause_130, ClausesRep0_45, &ClausesRep_84);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Clauses0_75;
          MR_Word ClausesRep1_76;
          MR_Word ForeignModeIds_77;
          MR_Word ModeIds0_82;
          MR_Word ModeIds_83;
          MR_Word Var_114;

          hlds__hlds_clauses__get_clause_list_3_p_0(&Clauses0_75, ClausesRep0_45, &ClausesRep1_76);
          Var_114 = mercury__list__filter_map_2_f_0((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), (MR_Word) (&hlds__make_hlds__add_clause_scalar_common_1[2]), (MR_Word) (&hlds__make_hlds__add_clause_scalar_common_4[0]), Clauses0_75);
          ForeignModeIds_77 = mercury__list__condense_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), Var_114);
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
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_clause.clauses_info_add_clause\'/21", (MR_String) "unify modes for user defined predicate");
                    return;
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              ModeIds0_82 = ((MR_Word) ((MR_hl_field(1, ApplModeIds0_22, (MR_Integer) 0))));
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
              Clause_88 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Clause_88, 0) = ((MR_Box) (ApplicableModeIds_87));
              MR_hl_field(0, Clause_88, 1) = ((MR_Box) (Goal_66));
              MR_hl_field(0, Clause_88, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Clause_88, 3) = ((MR_Box) (Context_29));
              MR_hl_field(0, Clause_88, 4) = ((MR_Box) (StateVarWarnings_60));
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
      MR_hl_field(0, base, 0) = ((MR_Box) (VarSet_65));
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
  MR_Word STATE_VARIABLE_VarSet_0_72,
  MR_Word * STATE_VARIABLE_VarSet_73,
  MR_Word * QuantWarnings_33,
  MR_Word * StateVarWarnings_34,
  MR_Word * StateVarErrors_35,
  MR_Word STATE_VARIABLE_ModuleInfo_0_74,
  MR_Word * STATE_VARIABLE_ModuleInfo_75,
  MR_Word STATE_VARIABLE_QualInfo_0_76,
  MR_Word * STATE_VARIABLE_QualInfo_77,
  MR_Word STATE_VARIABLE_Specs_0_78,
  MR_Word * STATE_VARIABLE_Specs_79)
{
  MR_Word ArgTerms1_42;
  MR_Word ArgTerms_43;
  MR_Word FinalSVarMap_44;
  MR_Word InitialSVarState_45;
  MR_Word HeadGoal_47;
  MR_Word BodyGoal_53;
  MR_Word FinalSVarState_54;
  MR_Word Globals_55;
  MR_Word ModuleName_56;
  MR_Word Goal0_57;
  MR_Word FoundTraceGoal_66;
  MR_Word Goal1_67;
  MR_Word VarTypes0_68;
  MR_Word EmptyRttiVarmaps_69;
  MR_Word VarTypes_70;
  MR_Word STATE_VARIABLE_VarSet_81_81;
  MR_Word STATE_VARIABLE_SVarStore_83_83;
  MR_Word STATE_VARIABLE_Specs_84_84;
  MR_Word STATE_VARIABLE_SVarState_85_85;
  MR_Word STATE_VARIABLE_SVarStore_86_86;
  MR_Word STATE_VARIABLE_VarSet_87_87;
  MR_Word STATE_VARIABLE_ModuleInfo_88_88;
  MR_Word STATE_VARIABLE_QualInfo_89_89;
  MR_Word STATE_VARIABLE_Specs_90_90;
  MR_Word STATE_VARIABLE_SVarStore_97_97;
  MR_Word STATE_VARIABLE_VarSet_98_98;
  MR_Word STATE_VARIABLE_QualInfo_100_100;
  MR_Word Var_71;

  parse_tree__prog_rename__rename_vars_in_term_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_23, ArgTerms0_27, &ArgTerms1_42);
  hlds__make_hlds__state_var__svar_prepare_for_clause_head_9_p_0(ArgTerms1_42, &ArgTerms_43, STATE_VARIABLE_VarSet_0_72, &STATE_VARIABLE_VarSet_81_81, &FinalSVarMap_44, &InitialSVarState_45, &STATE_VARIABLE_SVarStore_83_83, STATE_VARIABLE_Specs_0_78, &STATE_VARIABLE_Specs_84_84);
  if ((ClauseType_29 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word PredFormArity_48;
    MR_Word ArgContext_49;
    MR_Word HeadGoal0_50;
    MR_Word HeadVarsArgTerms_51;
    MR_Word HeadGoal1_52;

    PredFormArity_48 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&hlds__make_hlds__add_clause_scalar_common_1[0]), ArgTerms0_27);
    {
      ArgContext_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ArgContext_49, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_24));
      MR_hl_field(0, ArgContext_49, 1) = ((MR_Box) (PredFormArity_48));
    }
    HeadGoal0_50 = hlds__make_goal__true_goal_0_f_0();
    hlds__make_hlds__superhomogeneous__pair_vars_with_terms_3_p_0(HeadVars_26, ArgTerms_43, &HeadVarsArgTerms_51);
    hlds__make_hlds__superhomogeneous__insert_arg_unifications_17_p_0(HeadVarsArgTerms_51, Context_28, ArgContext_49, HeadGoal0_50, &HeadGoal1_52, InitialSVarState_45, &STATE_VARIABLE_SVarState_85_85, STATE_VARIABLE_SVarStore_83_83, &STATE_VARIABLE_SVarStore_86_86, STATE_VARIABLE_VarSet_81_81, &STATE_VARIABLE_VarSet_87_87, STATE_VARIABLE_ModuleInfo_0_74, &STATE_VARIABLE_ModuleInfo_88_88, STATE_VARIABLE_QualInfo_0_76, &STATE_VARIABLE_QualInfo_89_89, STATE_VARIABLE_Specs_84_84, &STATE_VARIABLE_Specs_90_90);
    hlds__goal_util__attach_features_to_all_goals_4_p_1((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_clause_scalar_common_1[57])), (MR_Integer) 1, HeadGoal1_52, &HeadGoal_47);
  }
  else
  {
    HeadGoal_47 = hlds__make_goal__true_goal_0_f_0();
    STATE_VARIABLE_VarSet_87_87 = STATE_VARIABLE_VarSet_81_81;
    STATE_VARIABLE_ModuleInfo_88_88 = STATE_VARIABLE_ModuleInfo_0_74;
    STATE_VARIABLE_QualInfo_89_89 = STATE_VARIABLE_QualInfo_0_76;
    STATE_VARIABLE_Specs_90_90 = STATE_VARIABLE_Specs_84_84;
    STATE_VARIABLE_SVarState_85_85 = InitialSVarState_45;
    STATE_VARIABLE_SVarStore_86_86 = STATE_VARIABLE_SVarStore_83_83;
  }
  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0((MR_Integer) 0, ParseTreeBodyGoal_30, Renaming_23, &BodyGoal_53, STATE_VARIABLE_SVarState_85_85, &FinalSVarState_54, STATE_VARIABLE_SVarStore_86_86, &STATE_VARIABLE_SVarStore_97_97, STATE_VARIABLE_VarSet_87_87, &STATE_VARIABLE_VarSet_98_98, STATE_VARIABLE_ModuleInfo_88_88, STATE_VARIABLE_ModuleInfo_75, STATE_VARIABLE_QualInfo_89_89, &STATE_VARIABLE_QualInfo_100_100, STATE_VARIABLE_Specs_90_90, STATE_VARIABLE_Specs_79);
  hlds__hlds_module__module_info_get_globals_2_p_0(*STATE_VARIABLE_ModuleInfo_75, &Globals_55);
  hlds__hlds_module__module_info_get_name_2_p_0(*STATE_VARIABLE_ModuleInfo_75, &ModuleName_56);
  hlds__make_hlds__state_var__svar_finish_clause_body_12_p_0(Globals_55, ModuleName_56, Context_28, FinalSVarMap_44, HeadGoal_47, BodyGoal_53, &Goal0_57, InitialSVarState_45, FinalSVarState_54, STATE_VARIABLE_SVarStore_97_97, StateVarWarnings_34, StateVarErrors_35);
  hlds__make_hlds__qual_info__qual_info_get_found_trace_goal_2_p_0(STATE_VARIABLE_QualInfo_100_100, &FoundTraceGoal_66);
  switch (FoundTraceGoal_66) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Goal1_67 = Goal0_57;
      break;
    case (MR_Integer) 1:
      hlds__pre_quantification__separate_trace_goal_only_locals_2_p_0(Goal0_57, &Goal1_67);
      break;
  }
  hlds__make_hlds__qual_info__qual_info_get_explicit_var_types_2_p_0(STATE_VARIABLE_QualInfo_100_100, &VarTypes0_68);
  hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&EmptyRttiVarmaps_69);
  hlds__quantification__implicitly_quantify_clause_body_general_vs_12_p_0((MR_Integer) 0, KeepQuantVars_22, HeadVars_26, QuantWarnings_33, Goal1_67, Goal_31, STATE_VARIABLE_VarSet_98_98, STATE_VARIABLE_VarSet_73, VarTypes0_68, &VarTypes_70, EmptyRttiVarmaps_69, &Var_71);
  hlds__make_hlds__qual_info__qual_info_set_explicit_var_types_3_p_0(VarTypes_70, STATE_VARIABLE_QualInfo_100_100, STATE_VARIABLE_QualInfo_77);
}

static void MR_CALL 
hlds__make_hlds__add_clause__can_we_do_singleton_and_quant_warnings_3_p_0(
  MR_Word PredStatus_4,
  MR_Word ClausesInfo_5,
  MR_Word * CanWarn_6)
{
  MR_bool succeeded;

  {
    MR_Word Var_7 = (MR_Word) (PredStatus_4);

    succeeded = (Var_7 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (!(succeeded))
  {
    MR_Word Var_8 = ((MR_Unsigned) ((MR_hl_field(0, ClausesInfo_5, (MR_Integer) 8))) & (MR_Integer) 1);

    succeeded = (Var_8 == (MR_Integer) 1);
  }
  if (succeeded)
    *CanWarn_6 = (MR_Integer) 0;
  else
    *CanWarn_6 = (MR_Integer) 1;
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
hlds__make_hlds__add_clause____Unify____maybe_can_warn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__add_clause____Unify____maybe_can_warn_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_clause____Compare____maybe_can_warn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__add_clause____Compare____maybe_can_warn_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__add_clause____Unify____mode_annotations_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__add_clause____Unify____mode_annotations_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_clause____Compare____mode_annotations_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__add_clause____Compare____mode_annotations_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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
	MR_register_type_ctor_info(&hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__type_ctor_info_maybe_can_warn_0);
	MR_register_type_ctor_info(&hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__type_ctor_info_mode_annotations_0);
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
