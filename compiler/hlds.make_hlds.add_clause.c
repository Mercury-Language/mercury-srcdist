/*
** Automatically generated from `add_clause.m'
** by the Mercury compiler,
** version 22.01-beta-2022-01-27
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
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
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
#include "hlds.passes_aux.mih"
#include "hlds.pre_quantification.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_inst_mode_name.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_pred_decl.mih"
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
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.goal_expr_to_goal.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.make_hlds_warn.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "hlds.make_hlds.state_var.mih"
#include "hlds.make_hlds.superhomogeneous.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_clause__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_clause__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0;

static const MR_DuFunctorDesc hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_clause_type_0_0;

static const MR_PseudoTypeInfo hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__field_types_clause_type_0_1[1];

static const MR_DuArgLocn hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__field_locns_clause_type_0_1[1];

static const MR_DuFunctorDesc hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_clause_type_0_1;

static const MR_DuFunctorDescPtr hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_stag_ordered_clause_type_0_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_stag_ordered_clause_type_0_1[1];

static const MR_DuPtagLayout hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_ptag_ordered_clause_type_0[2];

static const MR_DuFunctorDescPtr hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_name_ordered_clause_type_0[2];

static const MR_Integer hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__functor_number_map_clause_type_0[2];

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
hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__721__1_1_f_0(
  MR_Word LambdaHeadVar__1_103,
  MR_Word * LambdaHeadVar__2_104);

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
hlds__make_hlds__add_clause__module_add_clause_2_19_p_0(
  MR_Word PredStatus_20,
  MR_Word ClauseType_21,
  MR_Word PredId_22,
  MR_Word PredOrFunc_23,
  MR_Word PredSymName_24,
  MR_Word MaybeAnnotatedArgTerms_25,
  MR_Integer Arity_26,
  MR_Integer ArityAdjustment_27,
  MR_Word ClauseVarSet_28,
  MR_Word MaybeBodyGoal_29,
  MR_Word Context_30,
  MR_Word SeqNum_31,
  MR_Word IllegalSVarResult_32,
  MR_Word STATE_VARIABLE_ModuleInfo_0_69,
  MR_Word * STATE_VARIABLE_ModuleInfo_70,
  MR_Word STATE_VARIABLE_QualInfo_0_71,
  MR_Word * STATE_VARIABLE_QualInfo_72,
  MR_Word STATE_VARIABLE_Specs_0_73,
  MR_Word * STATE_VARIABLE_Specs_74);

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
  MR_Word STATE_VARIABLE_ModuleInfo_0_45,
  MR_Word * STATE_VARIABLE_ModuleInfo_46,
  MR_Word STATE_VARIABLE_QualInfo_0_47,
  MR_Word * STATE_VARIABLE_QualInfo_48,
  MR_Word STATE_VARIABLE_Specs_0_49,
  MR_Word * STATE_VARIABLE_Specs_50);

static MR_Box MR_CALL 
hlds__make_hlds__add_clause__add_undeclared_mode_error_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_clause__add_undeclared_mode_error_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word PredInfo_10,
  MR_Word PredId_11,
  MR_Word VarSet_12,
  MR_Word ModeList_13,
  MR_Word Context_14,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32);

static MR_Word MR_CALL 
hlds__make_hlds__add_clause__mode_decl_for_pred_info_to_pieces_2_f_0(
  MR_Word PredInfo_4,
  MR_Integer ProcId_5);

static void MR_CALL 
hlds__make_hlds__add_clause__get_mode_annotations_9_p_0(
  MR_Word VarSet_1,
  MR_Word ContextPieces_2,
  MR_Word HeadVar__3_3,
  MR_Integer ArgNum_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Annotations_0_6,
  MR_Word * STATE_VARIABLE_Annotations_7,
  MR_Word STATE_VARIABLE_Specs_0_8,
  MR_Word * STATE_VARIABLE_Specs_9);

static void MR_CALL 
hlds__make_hlds__add_clause__maybe_add_singleton_and_quant_warnings_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word PredStatus_13,
  MR_Word Clauses_14,
  MR_Word PredOrFunc_15,
  MR_Word PredSymName_16,
  MR_Integer Arity_17,
  MR_Word VarSet_18,
  MR_Word Goal_19,
  MR_Word Warnings_20,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24);

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
  MR_Integer Arity_13,
  MR_Word Context_14,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25);

static void MR_CALL 
hlds__make_hlds__add_clause__add_clause_progress_msg_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word PredInfo_10,
  MR_Word PredOrFunc_11,
  MR_Word PredName_12,
  MR_Word ArgTerms_13,
  MR_Integer ArityAdjustment_14);

static MR_bool MR_CALL 
hlds__make_hlds__add_clause__clauses_info_add_clause_24_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_clause__add_clause_transform_20_p_0(
  MR_Word Renaming_21,
  MR_Word HeadVars_22,
  MR_Word ArgTerms0_23,
  MR_Word ParseTreeBodyGoal_24,
  MR_Word Context_25,
  MR_Word PredOrFunc_26,
  MR_Integer Arity_27,
  MR_Word ClauseType_28,
  MR_Word * Goal_29,
  MR_Word STATE_VARIABLE_VarSet_0_65,
  MR_Word * STATE_VARIABLE_VarSet_66,
  MR_Word * QuantWarnings_31,
  MR_Word * StateVarWarnings_32,
  MR_Word * StateVarErrors_33,
  MR_Word STATE_VARIABLE_ModuleInfo_0_67,
  MR_Word * STATE_VARIABLE_ModuleInfo_68,
  MR_Word STATE_VARIABLE_QualInfo_0_69,
  MR_Word * STATE_VARIABLE_QualInfo_70,
  MR_Word STATE_VARIABLE_Specs_0_71,
  MR_Word * STATE_VARIABLE_Specs_72);

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
hlds__make_hlds__add_clause____Unify____mode_annotations_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_clause____Compare____mode_annotations_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_1[71][2];

static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_2[3][1];

static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_3[1][5];

static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_4[1][3];

static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_5[1][6];




static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_1[71][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&hlds__make_hlds__add_clause_scalar_common_2[0])),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Attempt to define a clause for"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 11U)),
    ((MR_Box) (&hlds__make_hlds__add_clause_scalar_common_1[5]))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "at the end of the preceding line."))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "inadvertently writing a period instead of a comma"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "This is usually caused by"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "clause"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[17]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[16])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[19])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: clause for"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "automatically generated field access"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[8])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of the constructor a different name."))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[8])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "to a field update, give the field"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[25])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "function, for example to check the input"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[27])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "To supply your own definition for a field access"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[29])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "are automatically generated by the compiler."))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[31])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Clauses for field access functions"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[33])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: clause for builtin."))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[36]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In the head of a clause for"))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[8])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "have mode annotations."))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[8])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "syntax error: some but not all arguments"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[42])))
  },
  /* row 45 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[44])))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[45])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "argument:"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[8])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In clause for"))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[50]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: mode annotation specifies undeclared mode"))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "(There are no declared modes for this"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ".)"))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[8])))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The declared mode for this"))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 30U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[57]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is:"))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[58])))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 30U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[61]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The declared modes for this"))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "are the following:"))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[58])))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ":- mode"))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[15]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 68 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 69 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[35])))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_clause_scalar_common_1[69]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_2[3][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) ","))
  },
  /* row 1 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_3[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&hlds__make_hlds__add_clause__list__pti_list_1__plain_builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_4[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&hlds__make_hlds__add_clause_scalar_common_3[0])),
    ((MR_Box) (hlds__make_hlds__add_clause__clauses_info_add_clause_24_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_5[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__make_hlds__add_clause__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_clause__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_clause__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0)
  }
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

static const MR_PseudoTypeInfo hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__field_types_clause_type_0_1[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_promise_type_0)
};

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

static const MR_DuFunctorDescPtr hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_stag_ordered_clause_type_0_0[1] = {
  &hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_clause_type_0_0
};

static const MR_DuFunctorDescPtr hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_stag_ordered_clause_type_0_1[1] = {
  &hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_clause_type_0_1
};

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
  {     hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_name_ordered_clause_type_0 },
  {     hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_ptag_ordered_clause_type_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__functor_number_map_clause_type_0,

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
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)
  }
};

static const MR_PseudoTypeInfo hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__field_types_mode_annotations_0_2[1] = {
  (MR_PseudoTypeInfo) (&hlds__make_hlds__add_clause__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0)
};

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

static const MR_DuFunctorDescPtr hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_stag_ordered_mode_annotations_0_1[1] = {
  &hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_2
};

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
  {     hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_name_ordered_mode_annotations_0 },
  {     hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_ptag_ordered_mode_annotations_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__functor_number_map_mode_annotations_0,

};

static MR_bool MR_CALL 
hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__721__1_1_f_0(
  MR_Word LambdaHeadVar__1_103,
  MR_Word * LambdaHeadVar__2_104)
{
  {
    MR_bool succeeded;
    MR_Word ApplProcIds_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_103, (MR_Integer) 0))));
    MR_Word Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_103, (MR_Integer) 2))));

    succeeded = (Var_105 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      switch (MR_tag((MR_Word) ApplProcIds_72)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(ApplProcIds_72)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_clause.clauses_info_add_clause\'/24", (MR_String) "all_modes foreign_proc");
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_clause.clauses_info_add_clause\'/24", (MR_String) "unify modes for foreign_proc");
              break;
          }
          break;
        case (MR_Integer) 1:
          *LambdaHeadVar__2_104 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ApplProcIds_72, (MR_Integer) 0))));
          break;
      }
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_clause____Compare____mode_annotations_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
            MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Word ArgY1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__add_clause_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (Var_15)), ((MR_Box) (ArgY1_9)));
                }
                break;
            }
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_clause____Unify____mode_annotations_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
            MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              TypeInfo_13_13 = (MR_Word) (&hlds__make_hlds__add_clause_scalar_common_1[4]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
hlds__make_hlds__add_clause____Compare____clause_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
      MR_Word Var_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 3);
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
}

MR_bool MR_CALL 
hlds__make_hlds__add_clause____Unify____clause_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
      MR_Word ArgX1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);
      MR_Word ArgY1_6;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
        succeeded = (ArgX1_5 == ArgY1_6);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__make_hlds__add_clause__module_add_clause_9_p_0(
  MR_Word PredStatus_10,
  MR_Word ClauseType_11,
  MR_Word ClauseInfo_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_47,
  MR_Word * STATE_VARIABLE_ModuleInfo_48,
  MR_Word STATE_VARIABLE_QualInfo_0_49,
  MR_Word * STATE_VARIABLE_QualInfo_50,
  MR_Word STATE_VARIABLE_Specs_0_51,
  MR_Word * STATE_VARIABLE_Specs_52)
{
  {
    MR_bool succeeded;
    MR_Word PredOrFunc_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ClauseInfo_12, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word PredName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseInfo_12, (MR_Integer) 1))));
    MR_Word ArgTerms0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseInfo_12, (MR_Integer) 2))));
    MR_Word ClauseVarSet_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseInfo_12, (MR_Integer) 3))));
    MR_Word MaybeBodyGoal_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseInfo_12, (MR_Integer) 4))));
    MR_Word Context_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseInfo_12, (MR_Integer) 5))));
    MR_Word SeqNum_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseInfo_12, (MR_Integer) 6))));
    MR_Word IllegalSVarResult_25;
    MR_Integer ArityAdjustment_26;
    MR_Word ArgTerms_28;
    MR_Word ModuleName_29;
    MR_Integer Arity0_30;
    MR_Integer Arity_31;
    MR_Word PredicateTable_33;
    MR_Word PredIds_34;
    MR_Word SVar_23;
    MR_Word SVarCtxt_24;
    MR_Word PredIdPrime_35;
    MR_Word Var_55;

    succeeded = hlds__make_hlds__state_var__illegal_state_var_func_result_4_p_0(PredOrFunc_16, ArgTerms0_18, &SVar_23, &SVarCtxt_24);
    if (succeeded)
    {
      MR_Tuple Var_53;

      {
        Var_53 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (SVar_23));
        MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (SVarCtxt_24));
      }
      {
        IllegalSVarResult_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), IllegalSVarResult_25, 0) = ((MR_Box) (Var_53));
      }
    }
    else
      IllegalSVarResult_25 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = (IllegalSVarResult_25 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      ArityAdjustment_26 = (MR_Integer) -1;
    else
      ArityAdjustment_26 = (MR_Integer) 0;
    hlds__make_hlds__state_var__expand_bang_state_pairs_in_terms_2_p_0(ArgTerms0_18, &ArgTerms_28);
    hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_0_47, &ModuleName_29);
    mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__add_clause_scalar_common_1[0]), ArgTerms_28, &Arity0_30);
    Arity_31 = (MR_Integer) ((MR_Unsigned) Arity0_30 + (MR_Unsigned) ArityAdjustment_26);
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_47, &PredicateTable_33);
    hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredicateTable_33, (MR_Integer) 0, PredOrFunc_16, PredName_17, Arity_31, &PredIds_34);
    succeeded = (PredIds_34 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      PredIdPrime_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_34, (MR_Integer) 0))));
      Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_34, (MR_Integer) 1))));
      succeeded = (Var_55 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      if (!((ClauseType_11 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_String NameString_38;
        MR_String UnexpectedMsg_39;
        MR_String Var_112;
        MR_String Var_114;
        MR_String Var_115;
        MR_String Var_117;
        MR_String Var_118;
        MR_String Var_120;

        NameString_38 = mdbcomp__sym_name__sym_name_to_string_1_f_0(PredName_17);
        Var_112 = mercury__string__f_43_43_2_f_0(NameString_38, (MR_String) ").\n");
        Var_114 = mercury__string__f_43_43_2_f_0((MR_String) " (", Var_112);
        Var_115 = mercury__string__f_43_43_2_f_0((MR_String) "to the name to an existing predicate", Var_114);
        Var_117 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_115);
        Var_118 = mercury__string__f_43_43_2_f_0((MR_String) "for a promise with a name that is identical", Var_117);
        Var_120 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_118);
        UnexpectedMsg_39 = mercury__string__f_43_43_2_f_0((MR_String) "Attempted to introduce a predicate", Var_120);
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_clause.module_add_clause\'/9", UnexpectedMsg_39);
          return;
        }
      }
      hlds__make_hlds__add_clause__module_add_clause_2_19_p_0(PredStatus_10, ClauseType_11, PredIdPrime_35, PredOrFunc_16, PredName_17, ArgTerms_28, Arity_31, ArityAdjustment_26, ClauseVarSet_19, MaybeBodyGoal_20, Context_21, SeqNum_22, IllegalSVarResult_25, STATE_VARIABLE_ModuleInfo_0_47, STATE_VARIABLE_ModuleInfo_48, STATE_VARIABLE_QualInfo_0_49, STATE_VARIABLE_QualInfo_50, STATE_VARIABLE_Specs_0_51, STATE_VARIABLE_Specs_52);
    }
    else
    {
      MR_Word MaybePredId_123;
      MR_Word STATE_VARIABLE_Specs_96_125;
      MR_Word STATE_VARIABLE_ModuleInfo_105_126;
      MR_String Var_70;

      Var_70 = mdbcomp__sym_name__unqualify_name_1_f_0(PredName_17);
      succeeded = (strcmp(Var_70, (MR_String) ",") == 0);
      if (succeeded)
        succeeded = (Arity_31 == (MR_Integer) 2);
      if (succeeded)
      {
        MR_Word Spec_42;

        MaybePredId_123 = (MR_Word) ((MR_Unsigned) 0U);
        {
          Spec_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_42, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_clause.module_add_clause\'/9"));
          MR_hl_field(MR_mktag(1), Spec_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_42, 2) = ((MR_Box) ((MR_Unsigned) 40U));
          MR_hl_field(MR_mktag(1), Spec_42, 3) = ((MR_Box) (Context_21));
          MR_hl_field(MR_mktag(1), Spec_42, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[20])));
        }
        {
          STATE_VARIABLE_Specs_96_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_96_125, 0) = ((MR_Box) (Spec_42));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_96_125, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_51));
        }
        STATE_VARIABLE_ModuleInfo_105_126 = STATE_VARIABLE_ModuleInfo_0_47;
      }
      else
      {
        MR_Word NewPredId_45;

        if ((ClauseType_11 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_98;

          {
            Var_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_98, 0) = ((MR_Box) ((MR_Unsigned) 8U));
            MR_hl_field(MR_mktag(3), Var_98, 1) = ((MR_Box) (PredName_17));
          }
          hlds__add_pred__preds_add_implicit_report_error_14_p_0(ModuleName_29, PredOrFunc_16, PredName_17, Arity_31, PredStatus_10, (MR_Integer) 0, Context_21, Var_98, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[18])), &NewPredId_45, STATE_VARIABLE_ModuleInfo_0_47, &STATE_VARIABLE_ModuleInfo_105_126, STATE_VARIABLE_Specs_0_51, &STATE_VARIABLE_Specs_96_125);
        }
        else
        {
          MR_Word PromiseType_43 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ClauseType_11, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word HeadVars_44;

          HeadVars_44 = mercury__term__term_list_to_var_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgTerms_28);
          hlds__add_pred__preds_add_implicit_for_assertion_11_p_0(ModuleName_29, PredOrFunc_16, PredName_17, Arity_31, HeadVars_44, PredStatus_10, PromiseType_43, Context_21, &NewPredId_45, STATE_VARIABLE_ModuleInfo_0_47, &STATE_VARIABLE_ModuleInfo_105_126);
          STATE_VARIABLE_Specs_96_125 = STATE_VARIABLE_Specs_0_51;
        }
        {
          MaybePredId_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybePredId_123, 0) = ((MR_Box) (NewPredId_45));
        }
      }
      if ((MaybePredId_123 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *STATE_VARIABLE_ModuleInfo_48 = STATE_VARIABLE_ModuleInfo_105_126;
        *STATE_VARIABLE_QualInfo_50 = STATE_VARIABLE_QualInfo_0_49;
        *STATE_VARIABLE_Specs_52 = STATE_VARIABLE_Specs_96_125;
      }
      else
      {
        MR_Word PredId_121 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredId_123, (MR_Integer) 0))));

        hlds__make_hlds__add_clause__module_add_clause_2_19_p_0(PredStatus_10, ClauseType_11, PredId_121, PredOrFunc_16, PredName_17, ArgTerms_28, Arity_31, ArityAdjustment_26, ClauseVarSet_19, MaybeBodyGoal_20, Context_21, SeqNum_22, IllegalSVarResult_25, STATE_VARIABLE_ModuleInfo_105_126, STATE_VARIABLE_ModuleInfo_48, STATE_VARIABLE_QualInfo_0_49, STATE_VARIABLE_QualInfo_50, STATE_VARIABLE_Specs_96_125, STATE_VARIABLE_Specs_52);
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_clause__module_add_clause_2_19_p_0(
  MR_Word PredStatus_20,
  MR_Word ClauseType_21,
  MR_Word PredId_22,
  MR_Word PredOrFunc_23,
  MR_Word PredSymName_24,
  MR_Word MaybeAnnotatedArgTerms_25,
  MR_Integer Arity_26,
  MR_Integer ArityAdjustment_27,
  MR_Word ClauseVarSet_28,
  MR_Word MaybeBodyGoal_29,
  MR_Word Context_30,
  MR_Word SeqNum_31,
  MR_Word IllegalSVarResult_32,
  MR_Word STATE_VARIABLE_ModuleInfo_0_69,
  MR_Word * STATE_VARIABLE_ModuleInfo_70,
  MR_Word STATE_VARIABLE_QualInfo_0_71,
  MR_Word * STATE_VARIABLE_QualInfo_72,
  MR_Word STATE_VARIABLE_Specs_0_73,
  MR_Word * STATE_VARIABLE_Specs_74)
{
  {
    MR_bool succeeded;
    MR_Word PredMap0_39;
    MR_Word STATE_VARIABLE_PredicateTable_75_75;
    MR_Word STATE_VARIABLE_PredInfo_76_76;
    MR_Word STATE_VARIABLE_PredInfo_84_84;
    MR_Word STATE_VARIABLE_PredSpecs_87_87;
    MR_Word STATE_VARIABLE_PredSpecs_88_88;
    MR_Word STATE_VARIABLE_PredSpecs_89_89;
    MR_Word STATE_VARIABLE_PredInfo_90_90;
    MR_Box conv0_STATE_VARIABLE_PredInfo_76_76;
    MR_Word Var_79;
    MR_Word Var_45;

    hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_69, &STATE_VARIABLE_PredicateTable_75_75);
    hlds__pred_table__predicate_table_get_preds_2_p_0(STATE_VARIABLE_PredicateTable_75_75, &PredMap0_39);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredMap0_39, ((MR_Box) (PredId_22)), &conv0_STATE_VARIABLE_PredInfo_76_76);
    STATE_VARIABLE_PredInfo_76_76 = ((MR_Word) (conv0_STATE_VARIABLE_PredInfo_76_76));
    hlds__make_hlds__add_clause__add_clause_progress_msg_8_p_0(STATE_VARIABLE_ModuleInfo_0_69, STATE_VARIABLE_PredInfo_76_76, PredOrFunc_23, PredSymName_24, MaybeAnnotatedArgTerms_25, ArityAdjustment_27);
    Var_79 = (MR_Word) (PredStatus_20);
    succeeded = (Var_79 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      MR_Word Markers0_41;
      MR_Word Markers_42;
      MR_Word STATE_VARIABLE_PredInfo_81_81;

      hlds__hlds_pred__pred_info_set_status_3_p_0((MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), STATE_VARIABLE_PredInfo_76_76, &STATE_VARIABLE_PredInfo_81_81);
      hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_81_81, &Markers0_41);
      hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 21, Markers0_41, &Markers_42);
      hlds__hlds_pred__pred_info_set_markers_3_p_0(Markers_42, STATE_VARIABLE_PredInfo_81_81, &STATE_VARIABLE_PredInfo_84_84);
    }
    else
      STATE_VARIABLE_PredInfo_84_84 = STATE_VARIABLE_PredInfo_76_76;
    if ((IllegalSVarResult_32 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_PredSpecs_87_87 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word StateVar_43;
      MR_Word StateVarContext_44;
      MR_Tuple Var_86 = ((MR_Tuple) ((MR_hl_field(MR_mktag(1), IllegalSVarResult_32, (MR_Integer) 0))));

      StateVar_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_86, (MR_Integer) 0))));
      StateVarContext_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_86, (MR_Integer) 1))));
      hlds__make_hlds__state_var__report_illegal_func_svar_result_5_p_0(StateVarContext_44, ClauseVarSet_28, StateVar_43, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_PredSpecs_87_87);
    }
    hlds__make_hlds__add_clause__maybe_add_error_for_field_access_function_8_p_0(STATE_VARIABLE_ModuleInfo_0_69, PredStatus_20, PredOrFunc_23, PredSymName_24, Arity_26, Context_30, STATE_VARIABLE_PredSpecs_87_87, &STATE_VARIABLE_PredSpecs_88_88);
    hlds__make_hlds__add_clause__maybe_add_error_for_builtin_5_p_0(STATE_VARIABLE_ModuleInfo_0_69, STATE_VARIABLE_PredInfo_84_84, Context_30, STATE_VARIABLE_PredSpecs_88_88, &STATE_VARIABLE_PredSpecs_89_89);
    hlds__default_func_mode__maybe_add_default_func_mode_3_p_0(STATE_VARIABLE_PredInfo_84_84, &STATE_VARIABLE_PredInfo_90_90, &Var_45);
    if ((STATE_VARIABLE_PredSpecs_89_89 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word PredMap_68;
      MR_Word STATE_VARIABLE_ModuleInfo_95_95;
      MR_Word STATE_VARIABLE_PredInfo_108_108;
      MR_Word STATE_VARIABLE_PredicateTable_109_109;

      if (((MR_tag((MR_Word) MaybeBodyGoal_29)) == (MR_Integer) 0))
      {
        MR_Word BodyGoalSpecs_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeBodyGoal_29, (MR_Integer) 0))));
        MR_Word Clauses0_49;
        MR_Word Clauses_50;
        MR_Word Var_116;
        MR_Word Var_117;
        MR_Word Var_118;
        MR_Word Var_119;
        MR_Word Var_120;
        MR_Word Var_121;
        MR_Word Var_122;
        MR_Word Var_123;
        MR_Word Var_124;

        *STATE_VARIABLE_Specs_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), BodyGoalSpecs_48, STATE_VARIABLE_Specs_0_73);
        hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_90_90, &Clauses0_49);
        Var_116 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clauses0_49, (MR_Integer) 0))));
        Var_117 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clauses0_49, (MR_Integer) 1))));
        Var_118 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clauses0_49, (MR_Integer) 2))));
        Var_119 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clauses0_49, (MR_Integer) 3))));
        Var_120 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clauses0_49, (MR_Integer) 4))));
        Var_121 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clauses0_49, (MR_Integer) 5))));
        Var_122 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clauses0_49, (MR_Integer) 6))));
        Var_123 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clauses0_49, (MR_Integer) 7))));
        Var_124 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Clauses0_49, (MR_Integer) 8))) >> 1)) & (MR_Integer) 1);
        {
          Clauses_50 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Clauses_50, 0) = ((MR_Box) (Var_116));
          MR_hl_field(MR_mktag(0), Clauses_50, 1) = ((MR_Box) (Var_117));
          MR_hl_field(MR_mktag(0), Clauses_50, 2) = ((MR_Box) (Var_118));
          MR_hl_field(MR_mktag(0), Clauses_50, 3) = ((MR_Box) (Var_119));
          MR_hl_field(MR_mktag(0), Clauses_50, 4) = ((MR_Box) (Var_120));
          MR_hl_field(MR_mktag(0), Clauses_50, 5) = ((MR_Box) (Var_121));
          MR_hl_field(MR_mktag(0), Clauses_50, 6) = ((MR_Box) (Var_122));
          MR_hl_field(MR_mktag(0), Clauses_50, 7) = ((MR_Box) (Var_123));
          MR_hl_field(MR_mktag(0), Clauses_50, 8) = (MR_Box) (((((MR_Unsigned) (Var_124) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
        }
        hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(Clauses_50, STATE_VARIABLE_PredInfo_90_90, &STATE_VARIABLE_PredInfo_108_108);
        STATE_VARIABLE_ModuleInfo_95_95 = STATE_VARIABLE_ModuleInfo_0_69;
        *STATE_VARIABLE_QualInfo_72 = STATE_VARIABLE_QualInfo_0_71;
      }
      else
      {
        MR_Word BodyGoal_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeBodyGoal_29, (MR_Integer) 0))));
        MR_Word BodyGoalWarningSpecs_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeBodyGoal_29, (MR_Integer) 1))));
        MR_Word TVarSet0_53;
        MR_Word ArgTerms_54;
        MR_Word ProcIdsForThisClause_55;
        MR_Word AllProcIds_56;
        MR_Word Warnings_57;
        MR_Word Goal_58;
        MR_Word VarSet_59;
        MR_Word TVarSet_60;
        MR_Word ExistQVars_63;
        MR_Word ArgTypes_64;
        MR_Word ProcIds_65;
        MR_Word STATE_VARIABLE_Specs_91_91;
        MR_Word STATE_VARIABLE_ModuleInfo_92_92;
        MR_Word STATE_VARIABLE_QualInfo_93_93;
        MR_Word STATE_VARIABLE_Specs_94_94;
        MR_Word STATE_VARIABLE_Specs_97_97;
        MR_Word STATE_VARIABLE_PredInfo_98_98;
        MR_Word STATE_VARIABLE_PredInfo_100_100;
        MR_Word STATE_VARIABLE_PredInfo_101_101;
        MR_Word STATE_VARIABLE_PredInfo_102_102;
        MR_Word Clauses0_114;
        MR_Word Clauses_115;
        MR_Word _ArgTVarSet_62;

        STATE_VARIABLE_Specs_91_91 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), BodyGoalWarningSpecs_52, STATE_VARIABLE_Specs_0_73);
        hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_90_90, &Clauses0_114);
        hlds__hlds_pred__pred_info_get_typevarset_2_p_0(STATE_VARIABLE_PredInfo_90_90, &TVarSet0_53);
        hlds__make_hlds__add_clause__select_applicable_modes_15_p_0(MaybeAnnotatedArgTerms_25, ClauseVarSet_28, PredStatus_20, Context_30, PredId_22, STATE_VARIABLE_PredInfo_90_90, &ArgTerms_54, &ProcIdsForThisClause_55, &AllProcIds_56, STATE_VARIABLE_ModuleInfo_0_69, &STATE_VARIABLE_ModuleInfo_92_92, STATE_VARIABLE_QualInfo_0_71, &STATE_VARIABLE_QualInfo_93_93, STATE_VARIABLE_Specs_91_91, &STATE_VARIABLE_Specs_94_94);
        hlds__make_hlds__add_clause__clauses_info_add_clause_24_p_0(ProcIdsForThisClause_55, AllProcIds_56, PredStatus_20, ClauseType_21, PredOrFunc_23, Arity_26, ArgTerms_54, Context_30, SeqNum_31, &Warnings_57, BodyGoal_51, &Goal_58, ClauseVarSet_28, &VarSet_59, TVarSet0_53, &TVarSet_60, Clauses0_114, &Clauses_115, STATE_VARIABLE_ModuleInfo_92_92, &STATE_VARIABLE_ModuleInfo_95_95, STATE_VARIABLE_QualInfo_93_93, STATE_VARIABLE_QualInfo_72, STATE_VARIABLE_Specs_94_94, &STATE_VARIABLE_Specs_97_97);
        hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(Clauses_115, STATE_VARIABLE_PredInfo_90_90, &STATE_VARIABLE_PredInfo_98_98);
        if ((ClauseType_21 == (MR_Word) ((MR_Unsigned) 0U)))
          hlds__hlds_pred__pred_info_update_goal_type_3_p_0((MR_Integer) 1, STATE_VARIABLE_PredInfo_98_98, &STATE_VARIABLE_PredInfo_100_100);
        else
          STATE_VARIABLE_PredInfo_100_100 = STATE_VARIABLE_PredInfo_98_98;
        hlds__hlds_pred__pred_info_set_typevarset_3_p_0(TVarSet_60, STATE_VARIABLE_PredInfo_100_100, &STATE_VARIABLE_PredInfo_101_101);
        hlds__hlds_pred__pred_info_get_arg_types_4_p_0(STATE_VARIABLE_PredInfo_101_101, &_ArgTVarSet_62, &ExistQVars_63, &ArgTypes_64);
        hlds__hlds_pred__pred_info_set_arg_types_5_p_0(TVarSet_60, ExistQVars_63, ArgTypes_64, STATE_VARIABLE_PredInfo_101_101, &STATE_VARIABLE_PredInfo_102_102);
        ProcIds_65 = hlds__hlds_pred__pred_info_all_procids_1_f_0(STATE_VARIABLE_PredInfo_102_102);
        succeeded = (ProcIds_65 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = (ClauseType_21 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          MR_Word EndMarkers0_66;
          MR_Word EndMarkers_67;

          hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_102_102, &EndMarkers0_66);
          hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 3, EndMarkers0_66, &EndMarkers_67);
          hlds__hlds_pred__pred_info_set_markers_3_p_0(EndMarkers_67, STATE_VARIABLE_PredInfo_102_102, &STATE_VARIABLE_PredInfo_108_108);
        }
        else
          STATE_VARIABLE_PredInfo_108_108 = STATE_VARIABLE_PredInfo_102_102;
        hlds__make_hlds__add_clause__maybe_add_singleton_and_quant_warnings_11_p_0(STATE_VARIABLE_ModuleInfo_95_95, PredStatus_20, Clauses_115, PredOrFunc_23, PredSymName_24, Arity_26, VarSet_59, Goal_58, Warnings_57, STATE_VARIABLE_Specs_97_97, STATE_VARIABLE_Specs_74);
      }
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_22)), ((MR_Box) (STATE_VARIABLE_PredInfo_108_108)), PredMap0_39, &PredMap_68);
      hlds__pred_table__predicate_table_set_preds_3_p_0(PredMap_68, STATE_VARIABLE_PredicateTable_75_75, &STATE_VARIABLE_PredicateTable_109_109);
      hlds__hlds_module__module_info_set_predicate_table_3_p_0(STATE_VARIABLE_PredicateTable_109_109, STATE_VARIABLE_ModuleInfo_95_95, STATE_VARIABLE_ModuleInfo_70);
    }
    else
    {
      MR_Word Var_112;
      MR_Word Var_113;

      Var_113 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeBodyGoal_29);
      Var_112 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_113, STATE_VARIABLE_Specs_0_73);
      *STATE_VARIABLE_Specs_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), STATE_VARIABLE_PredSpecs_89_89, Var_112);
      *STATE_VARIABLE_ModuleInfo_70 = STATE_VARIABLE_ModuleInfo_0_69;
      *STATE_VARIABLE_QualInfo_72 = STATE_VARIABLE_QualInfo_0_71;
    }
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
  MR_Word STATE_VARIABLE_ModuleInfo_0_45,
  MR_Word * STATE_VARIABLE_ModuleInfo_46,
  MR_Word STATE_VARIABLE_QualInfo_0_47,
  MR_Word * STATE_VARIABLE_QualInfo_48,
  MR_Word STATE_VARIABLE_Specs_0_49,
  MR_Word * STATE_VARIABLE_Specs_50)
{
  {
    MR_bool succeeded;
    MR_String PredIdStr_28;
    MR_Word ContextPieces_29;
    MR_Word ModeAnnotations_30;
    MR_Word ModeAnnotationSpecs_31;
    MR_Word Var_51;
    MR_Word Var_54;
    MR_Word Var_55;

    *AllProcIds_24 = hlds__hlds_pred__pred_info_all_procids_1_f_0(PredInfo_21);
    PredIdStr_28 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(STATE_VARIABLE_ModuleInfo_0_45, PredId_20);
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_55, 0) = ((MR_Box) (PredIdStr_28));
    }
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[40])));
    }
    {
      Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[38])));
      MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_54));
    }
    ContextPieces_29 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_51);
    hlds__make_hlds__add_clause__get_mode_annotations_9_p_0(VarSet_17, ContextPieces_29, MaybeAnnotatedArgTerms_16, (MR_Integer) 1, ArgTerms_22, (MR_Word) ((MR_Unsigned) 0U), &ModeAnnotations_30, (MR_Word) ((MR_Unsigned) 0U), &ModeAnnotationSpecs_31);
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
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *ApplProcIds_23 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (*AllProcIds_24));
                  }
                else
                  *ApplProcIds_23 = (MR_Word) ((MR_Unsigned) 0U);
                *STATE_VARIABLE_QualInfo_48 = STATE_VARIABLE_QualInfo_0_47;
                *STATE_VARIABLE_Specs_50 = STATE_VARIABLE_Specs_0_49;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Pieces_43;
                MR_Word Spec_44;
                MR_Word Var_67;

                {
                  Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_55));
                  MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[46])));
                }
                {
                  Pieces_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[38])));
                  MR_hl_field(MR_mktag(1), Pieces_43, 1) = ((MR_Box) (Var_67));
                }
                {
                  Spec_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_44, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_clause.select_applicable_modes\'/15"));
                  MR_hl_field(MR_mktag(1), Spec_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_44, 2) = ((MR_Box) ((MR_Unsigned) 40U));
                  MR_hl_field(MR_mktag(1), Spec_44, 3) = ((MR_Box) (Context_19));
                  MR_hl_field(MR_mktag(1), Spec_44, 4) = ((MR_Box) (Pieces_43));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_Specs_50 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_44));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_49));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *ApplProcIds_23 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (*AllProcIds_24));
                }
                *STATE_VARIABLE_QualInfo_48 = STATE_VARIABLE_QualInfo_0_47;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ModeList0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModeAnnotations_30, (MR_Integer) 0))));
            MR_Word ModeList_35;
            MR_Word Procs_40;
            MR_Word ExistingProcs_41;
            MR_Word STATE_VARIABLE_Specs_88_88;
            MR_Word Var_87 = (MR_Word) (PredStatus_18);
            MR_Integer ProcId_42;

            succeeded = (Var_87 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ModeList_35 = ModeList0_34;
              STATE_VARIABLE_Specs_88_88 = STATE_VARIABLE_Specs_0_49;
              *STATE_VARIABLE_QualInfo_48 = STATE_VARIABLE_QualInfo_0_47;
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
              hlds__make_hlds__qual_info__qual_info_get_mq_info_2_p_0(STATE_VARIABLE_QualInfo_0_47, &MQInfo0_38);
              parse_tree__module_qual__qualify_clause_mode_list_8_p_0(InInt_37, Context_19, ModeList0_34, &ModeList_35, MQInfo0_38, &MQInfo_39, STATE_VARIABLE_Specs_0_49, &STATE_VARIABLE_Specs_88_88);
              hlds__make_hlds__qual_info__qual_info_set_mq_info_3_p_0(MQInfo_39, STATE_VARIABLE_QualInfo_0_47, STATE_VARIABLE_QualInfo_48);
            }
            hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_21, &Procs_40);
            mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs_40, &ExistingProcs_41);
            succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(STATE_VARIABLE_ModuleInfo_0_45, ExistingProcs_41, ModeList_35, &ProcId_42);
            if (succeeded)
            {
              MR_Word Var_90;

              {
                Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (ProcId_42));
                MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *ApplProcIds_23 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_90));
              }
              *STATE_VARIABLE_Specs_50 = STATE_VARIABLE_Specs_88_88;
            }
            else
            {
              hlds__make_hlds__add_clause__add_undeclared_mode_error_8_p_0(STATE_VARIABLE_ModuleInfo_0_45, PredInfo_21, PredId_20, VarSet_17, ModeList_35, Context_19, STATE_VARIABLE_Specs_88_88, STATE_VARIABLE_Specs_50);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *ApplProcIds_23 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (*AllProcIds_24));
              }
            }
          }
          break;
      }
    else
    {
      *STATE_VARIABLE_Specs_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ModeAnnotationSpecs_31, STATE_VARIABLE_Specs_0_49);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *ApplProcIds_23 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (*AllProcIds_24));
      }
      *STATE_VARIABLE_QualInfo_48 = STATE_VARIABLE_QualInfo_0_47;
    }
    *STATE_VARIABLE_ModuleInfo_46 = STATE_VARIABLE_ModuleInfo_0_45;
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_clause__add_undeclared_mode_error_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = hlds__make_hlds__add_clause__mode_decl_for_pred_info_to_pieces_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
hlds__make_hlds__add_clause__add_undeclared_mode_error_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word PredInfo_10,
  MR_Word PredId_11,
  MR_Word VarSet_12,
  MR_Word ModeList_13,
  MR_Word Context_14,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32)
{
  {
    MR_Word PredIdPieces_16;
    MR_Word StrippedModeList_17;
    MR_Word PredOrFunc_18;
    MR_String Name_19;
    MR_String SubDeclStr_21;
    MR_Word MainPieces_22;
    MR_Word ProcIds_23;
    MR_Word VerbosePieces_24;
    MR_Word Msg_29;
    MR_Word Spec_30;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_45;
    MR_Word Var_47;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_107;
    MR_Word Var_108;
    MR_Word Var_109;
    MR_Word Var_110;
    MR_Word Var_116;

    PredIdPieces_16 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_9, (MR_Integer) 1, PredId_11);
    parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_p_0(ModeList_13, &StrippedModeList_17);
    PredOrFunc_18 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_10);
    Name_19 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_10);
    Var_35 = mercury__varset__coerce_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), VarSet_12);
    {
      Var_36 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (Name_19));
    }
    SubDeclStr_21 = parse_tree__parse_tree_out_pred_decl__mercury_mode_subdecl_to_string_6_f_0((MR_Integer) 1, PredOrFunc_18, Var_35, Var_36, StrippedModeList_17, (MR_Word) ((MR_Unsigned) 0U));
    {
      Var_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_51, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_51, 1) = ((MR_Box) (SubDeclStr_21));
    }
    {
      Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[23])));
    }
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[52])));
      MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_50));
    }
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_47));
    }
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[39])));
      MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_45));
    }
    Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PredIdPieces_16, Var_42);
    MainPieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[51])), Var_41);
    ProcIds_23 = hlds__hlds_pred__pred_info_all_procids_1_f_0(PredInfo_10);
    if ((ProcIds_23 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_99;
      MR_Word Var_100;

      {
        Var_100 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_100, 0) = ((MR_Box) ((MR_Unsigned) 27U));
        MR_hl_field(MR_mktag(3), Var_100, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_18));
      }
      {
        Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (Var_100));
        MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[55])));
      }
      {
        VerbosePieces_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), VerbosePieces_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[53])));
        MR_hl_field(MR_mktag(1), VerbosePieces_24, 1) = ((MR_Box) (Var_99));
      }
    }
    else
    {
      MR_Integer ProcIdsHead_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ProcIds_23, (MR_Integer) 0))));
      MR_Word ProcIdsTail_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ProcIds_23, (MR_Integer) 1))));

      if ((ProcIdsTail_26 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_79;
        MR_Word Var_82;
        MR_Word Var_83;
        MR_Word Var_91;
        MR_Word Var_92;

        {
          Var_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_83, 0) = ((MR_Box) ((MR_Unsigned) 27U));
          MR_hl_field(MR_mktag(3), Var_83, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_18));
        }
        {
          Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (Var_83));
          MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[60])));
        }
        {
          Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[56])));
          MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (Var_82));
        }
        Var_92 = hlds__make_hlds__add_clause__mode_decl_for_pred_info_to_pieces_2_f_0(PredInfo_10, ProcIdsHead_25);
        Var_91 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_92, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[62])));
        VerbosePieces_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_79, Var_91);
      }
      else
      {
        MR_Word Var_58;
        MR_Word Var_61;
        MR_Word Var_62;
        MR_Word Var_70;
        MR_Word Var_71;
        MR_Word Var_72;
        MR_Word Var_73;

        {
          Var_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_62, 0) = ((MR_Box) ((MR_Unsigned) 27U));
          MR_hl_field(MR_mktag(3), Var_62, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_18));
        }
        {
          Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Var_62));
          MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[65])));
        }
        {
          Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[63])));
          MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_61));
        }
        {
          Var_73 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (&hlds__make_hlds__add_clause_scalar_common_5[0]));
          MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) (hlds__make_hlds__add_clause__add_undeclared_mode_error_8_p_0_1));
          MR_hl_field(MR_mktag(0), Var_73, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_73, 3) = ((MR_Box) (PredInfo_10));
        }
        Var_72 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__make_hlds__add_clause_scalar_common_1[2]), Var_73, ProcIds_23);
        Var_71 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(Var_72, (MR_Word) ((MR_Unsigned) 0U));
        Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_71, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[62])));
        VerbosePieces_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_58, Var_70);
      }
    }
    {
      Var_108 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_108, 0) = ((MR_Box) (MainPieces_22));
    }
    {
      Var_110 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_110, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(2), Var_110, 1) = ((MR_Box) (VerbosePieces_24));
    }
    {
      Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (Var_110));
      MR_hl_field(MR_mktag(1), Var_109, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (Var_108));
      MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) (Var_109));
    }
    {
      Msg_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Msg_29, 0) = ((MR_Box) (Context_14));
      MR_hl_field(MR_mktag(2), Msg_29, 1) = ((MR_Box) (Var_107));
    }
    {
      Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (Msg_29));
      MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_30, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_clause.add_undeclared_mode_error\'/8"));
      MR_hl_field(MR_mktag(0), Spec_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_30, 2) = ((MR_Box) ((MR_Unsigned) 40U));
      MR_hl_field(MR_mktag(0), Spec_30, 3) = ((MR_Box) (Var_116));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_32 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_30));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_31));
    }
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_clause__mode_decl_for_pred_info_to_pieces_2_f_0(
  MR_Word PredInfo_4,
  MR_Integer ProcId_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_String Var_10;

    Var_10 = check_hlds__mode_errors__mode_decl_to_string_3_f_0((MR_Integer) 1, ProcId_5, PredInfo_4);
    {
      Var_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_9, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_9, 1) = ((MR_Box) (Var_10));
    }
    {
      Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_8, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(1), Var_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[67])));
    }
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[66])));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (Var_8));
    }
    return HeadVar__3_3;
  }
}

static void MR_CALL 
hlds__make_hlds__add_clause__get_mode_annotations_9_p_0(
  MR_Word VarSet_1,
  MR_Word ContextPieces_2,
  MR_Word HeadVar__3_3,
  MR_Integer ArgNum_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Annotations_0_6,
  MR_Word * STATE_VARIABLE_Annotations_7,
  MR_Word STATE_VARIABLE_Specs_0_8,
  MR_Word * STATE_VARIABLE_Specs_9)
{
  {
    MR_bool succeeded;

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_9 = STATE_VARIABLE_Specs_0_8;
      *STATE_VARIABLE_Annotations_7 = STATE_VARIABLE_Annotations_0_6;
    }
    else
    {
      MR_Word MAArgTerm_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word MAArgTerms_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgTerm_24;
      MR_Word ArgTerms_25;
      MR_Word ArgContextPieces_28;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Word STATE_VARIABLE_Specs_48_48;
      MR_Word STATE_VARIABLE_Annotations_49_49;
      MR_Integer Var_50;
      MR_Word ArgTermPrime_61;
      MR_Word ModeTerm_62;
      MR_Word Var_73;
      MR_Word Var_69;
      MR_String Var_70;
      MR_Word Var_71;
      MR_Word Var_72;

      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_41, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(MR_mktag(3), Var_41, 1) = ((MR_Box) (ArgNum_4));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[49])));
      }
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[47])));
        MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_40));
      }
      Var_36 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_37);
      ArgContextPieces_28 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_2, Var_36);
      succeeded = ((MR_tag((MR_Word) MAArgTerm_21)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MAArgTerm_21, (MR_Integer) 0))));
        Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MAArgTerm_21, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_69)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_70 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_69, (MR_Integer) 0))));
          succeeded = (strcmp(Var_70, (MR_String) "::") == 0);
          if (succeeded)
          {
            succeeded = (Var_71 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ArgTermPrime_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_71, (MR_Integer) 0))));
              Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_71, (MR_Integer) 1))));
              succeeded = (Var_72 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                ModeTerm_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_72, (MR_Integer) 0))));
                Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_72, (MR_Integer) 1))));
                succeeded = (Var_73 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word GenVarSet_64;
        MR_Word GenModeTerm_65;
        MR_Word MaybeMode_66;

        ArgTerm_24 = ArgTermPrime_61;
        mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_1, &GenVarSet_64);
        mercury__term__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModeTerm_62, &GenModeTerm_65);
        parse_tree__parse_inst_mode_name__parse_mode_5_p_0((MR_Word) ((MR_Unsigned) 0U), GenVarSet_64, ArgContextPieces_28, GenModeTerm_65, &MaybeMode_66);
        if (((MR_tag((MR_Word) MaybeMode_66)) == (MR_Integer) 0))
        {
          MR_Word MaybeMaybeMode_29 = (MR_Word) (MaybeMode_66);
          MR_Word MaybeModeSpecs_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeMaybeMode_29, (MR_Integer) 0))));

          STATE_VARIABLE_Specs_48_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), STATE_VARIABLE_Specs_0_8, MaybeModeSpecs_31);
          STATE_VARIABLE_Annotations_49_49 = STATE_VARIABLE_Annotations_0_6;
        }
        else
        {
          MR_Word Mode_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMode_66, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) STATE_VARIABLE_Annotations_0_6)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(STATE_VARIABLE_Annotations_0_6)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Var_80;

                    {
                      Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (Mode_67));
                      MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (Var_73));
                    }
                    {
                      STATE_VARIABLE_Annotations_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Annotations_49_49, 0) = ((MR_Box) (Var_80));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  STATE_VARIABLE_Annotations_49_49 = (MR_Word) ((MR_Unsigned) 8U);
                  break;
                case (MR_Integer) 2:
                  STATE_VARIABLE_Annotations_49_49 = (MR_Word) ((MR_Unsigned) 8U);
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_86;
                MR_Word Var_87;
                MR_Word Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_Annotations_0_6, (MR_Integer) 0))));

                {
                  Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (Mode_67));
                  MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) (Var_73));
                }
                Var_86 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_92, Var_87);
                {
                  STATE_VARIABLE_Annotations_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Annotations_49_49, 0) = ((MR_Box) (Var_86));
                }
              }
              break;
          }
          STATE_VARIABLE_Specs_48_48 = STATE_VARIABLE_Specs_0_8;
        }
      }
      else
      {
        MR_Word MaybeMode_125;

        ArgTerm_24 = MAArgTerm_21;
        MaybeMode_125 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_2[2])), (MR_Integer) 0))));
        switch (MR_tag((MR_Word) STATE_VARIABLE_Annotations_0_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(STATE_VARIABLE_Annotations_0_6)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                if ((MaybeMode_125 == (MR_Word) ((MR_Unsigned) 0U)))
                  STATE_VARIABLE_Annotations_49_49 = (MR_Word) ((MR_Unsigned) 4U);
                else
                {
                  MR_Word Mode_93 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMode_125, (MR_Integer) 0))));
                  MR_Word Var_94;

                  {
                    Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (Mode_93));
                    MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    STATE_VARIABLE_Annotations_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_Annotations_49_49, 0) = ((MR_Box) (Var_94));
                  }
                }
                break;
              case (MR_Integer) 1:
                if ((MaybeMode_125 == (MR_Word) ((MR_Unsigned) 0U)))
                  STATE_VARIABLE_Annotations_49_49 = (MR_Word) ((MR_Unsigned) 4U);
                else
                  STATE_VARIABLE_Annotations_49_49 = (MR_Word) ((MR_Unsigned) 8U);
                break;
              case (MR_Integer) 2:
                STATE_VARIABLE_Annotations_49_49 = (MR_Word) ((MR_Unsigned) 8U);
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_Annotations_0_6, (MR_Integer) 0))));

              if ((MaybeMode_125 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_Annotations_49_49 = (MR_Word) ((MR_Unsigned) 8U);
              else
              {
                MR_Word Mode_99 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMode_125, (MR_Integer) 0))));
                MR_Word Var_100;
                MR_Word Var_101;

                {
                  Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (Mode_99));
                  MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                Var_100 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_114, Var_101);
                {
                  STATE_VARIABLE_Annotations_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Annotations_49_49, 0) = ((MR_Box) (Var_100));
                }
              }
            }
            break;
        }
        STATE_VARIABLE_Specs_48_48 = STATE_VARIABLE_Specs_0_8;
      }
      Var_50 = (MR_Integer) ((MR_Unsigned) ArgNum_4 + (MR_Unsigned) 1);
      hlds__make_hlds__add_clause__get_mode_annotations_9_p_0(VarSet_1, ContextPieces_2, MAArgTerms_22, Var_50, &ArgTerms_25, STATE_VARIABLE_Annotations_49_49, STATE_VARIABLE_Annotations_7, STATE_VARIABLE_Specs_48_48, STATE_VARIABLE_Specs_9);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__5_5 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgTerm_24));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ArgTerms_25));
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_clause__maybe_add_singleton_and_quant_warnings_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word PredStatus_13,
  MR_Word Clauses_14,
  MR_Word PredOrFunc_15,
  MR_Word PredSymName_16,
  MR_Integer Arity_17,
  MR_Word VarSet_18,
  MR_Word Goal_19,
  MR_Word Warnings_20,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24)
{
  {
    MR_bool succeeded;

    {
      MR_Word Var_26 = (MR_Word) (PredStatus_13);

      succeeded = (Var_26 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (!(succeeded))
    {
      MR_Word Var_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Clauses_14, (MR_Integer) 8))) & (MR_Integer) 1);

      succeeded = (Var_25 == (MR_Integer) 1);
    }
    if (succeeded)
      *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
    else
    {
      MR_Word WarnPFSymNameArity_22;
      MR_Word STATE_VARIABLE_Specs_27_27;

      {
        WarnPFSymNameArity_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), WarnPFSymNameArity_22, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_15));
        MR_hl_field(MR_mktag(0), WarnPFSymNameArity_22, 1) = ((MR_Box) (PredSymName_16));
        MR_hl_field(MR_mktag(0), WarnPFSymNameArity_22, 2) = ((MR_Box) (Arity_17));
      }
      hlds__make_hlds__make_hlds_warn__warn_singletons_6_p_0(ModuleInfo_12, WarnPFSymNameArity_22, VarSet_18, Goal_19, STATE_VARIABLE_Specs_0_23, &STATE_VARIABLE_Specs_27_27);
      hlds__make_hlds__make_hlds_warn__add_quant_warnings_5_p_0(WarnPFSymNameArity_22, VarSet_18, Warnings_20, STATE_VARIABLE_Specs_27_27, STATE_VARIABLE_Specs_24);
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
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(PredInfo_7);
    if (succeeded)
    {
      MR_Word AllowDefnOfBuiltin_11;
      MR_Word Globals_24;

      hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_6, &Globals_24);
      libs__globals__lookup_bool_option_3_p_0(Globals_24, (MR_Integer) 317, &AllowDefnOfBuiltin_11);
      switch (AllowDefnOfBuiltin_11) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word BuiltinSpec_12;

            {
              BuiltinSpec_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), BuiltinSpec_12, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_clause.maybe_add_error_for_builtin\'/5"));
              MR_hl_field(MR_mktag(1), BuiltinSpec_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), BuiltinSpec_12, 2) = ((MR_Box) ((MR_Unsigned) 40U));
              MR_hl_field(MR_mktag(1), BuiltinSpec_12, 3) = ((MR_Box) (Context_8));
              MR_hl_field(MR_mktag(1), BuiltinSpec_12, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[37])));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_14 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (BuiltinSpec_12));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_13));
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
}

static void MR_CALL 
hlds__make_hlds__add_clause__maybe_add_error_for_field_access_function_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word PredStatus_10,
  MR_Word PredOrFunc_11,
  MR_Word PredSymName_12,
  MR_Integer Arity_13,
  MR_Word Context_14,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25)
{
  {
    MR_bool succeeded = (PredOrFunc_11 == (MR_Integer) 1);
    MR_Integer FuncArity_16;
    MR_Word Var_26;
    MR_Integer Var_73;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_27;

    if (succeeded)
    {
      Var_26 = (MR_Integer) 1;
      parse_tree__prog_util__adjust_func_arity_3_p_1(Var_26, &FuncArity_16, Arity_13);
      succeeded = hlds__hlds_pred__is_field_access_function_name_5_p_0(ModuleInfo_9, PredSymName_12, &Var_73, &Var_17, &Var_18);
      if (succeeded)
      {
        succeeded = (FuncArity_16 == Var_73);
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
        MR_hl_field(MR_mktag(0), FieldPFSymNameArity_19, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_11));
        MR_hl_field(MR_mktag(0), FieldPFSymNameArity_19, 1) = ((MR_Box) (PredSymName_12));
        MR_hl_field(MR_mktag(0), FieldPFSymNameArity_19, 2) = ((MR_Box) (Arity_13));
      }
      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_34, 0) = ((MR_Box) ((MR_Unsigned) 13U));
        MR_hl_field(MR_mktag(3), Var_34, 1) = ((MR_Box) (FieldPFSymNameArity_19));
      }
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[23])));
      }
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[22])));
        MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_33));
      }
      {
        FieldAccessMainPieces_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FieldAccessMainPieces_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[21])));
        MR_hl_field(MR_mktag(1), FieldAccessMainPieces_20, 1) = ((MR_Box) (Var_30));
      }
      {
        Var_62 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (FieldAccessMainPieces_20));
      }
      {
        Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Var_62));
        MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[70])));
      }
      {
        FieldAccessMsg_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), FieldAccessMsg_22, 0) = ((MR_Box) (Context_14));
        MR_hl_field(MR_mktag(2), FieldAccessMsg_22, 1) = ((MR_Box) (Var_61));
      }
      {
        Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (FieldAccessMsg_22));
        MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        FieldAccessSpec_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FieldAccessSpec_23, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_clause.maybe_add_error_for_field_access_function\'/8"));
        MR_hl_field(MR_mktag(0), FieldAccessSpec_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), FieldAccessSpec_23, 2) = ((MR_Box) ((MR_Unsigned) 40U));
        MR_hl_field(MR_mktag(0), FieldAccessSpec_23, 3) = ((MR_Box) (Var_70));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_25 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FieldAccessSpec_23));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_24));
      }
    }
    else
      *STATE_VARIABLE_Specs_25 = STATE_VARIABLE_Specs_0_24;
  }
}

static void MR_CALL 
hlds__make_hlds__add_clause__add_clause_progress_msg_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word PredInfo_10,
  MR_Word PredOrFunc_11,
  MR_Word PredName_12,
  MR_Word ArgTerms_13,
  MR_Integer ArityAdjustment_14)
{
  {
    MR_Word Globals_16;
    MR_Word VeryVerbose_17;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_9, &Globals_16);
    libs__globals__lookup_bool_option_3_p_0(Globals_16, (MR_Integer) 71, &VeryVerbose_17);
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
          MR_Integer PredArity0_21;
          MR_Integer PredArity_22;
          MR_Integer OrigArity_23;
          MR_String SNAStr_24;
          MR_Word ProgressStream_25;
          MR_Word Var_29;
          MR_Word Var_30;
          MR_Integer Var_36;
          MR_String Var_56;

          hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_10, &MsgClauses_18);
          Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MsgClauses_18, (MR_Integer) 5))));
          NumClauses_19 = hlds__hlds_clauses__num_clauses_in_clauses_rep_1_f_0(Var_29);
          PredOrFuncStr_20 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(PredOrFunc_11);
          mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__add_clause_scalar_common_1[0]), ArgTerms_13, &PredArity0_21);
          PredArity_22 = (MR_Integer) ((MR_Unsigned) PredArity0_21 + (MR_Unsigned) ArityAdjustment_14);
          parse_tree__prog_util__adjust_func_arity_3_p_1(PredOrFunc_11, &OrigArity_23, PredArity_22);
          {
            Var_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (PredName_12));
            MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (OrigArity_23));
          }
          SNAStr_24 = parse_tree__prog_out__sym_name_arity_to_string_1_f_0(Var_30);
          hlds__passes_aux__get_progress_output_stream_4_p_0(ModuleInfo_9, &ProgressStream_25);
          Var_36 = (MR_Integer) ((MR_Unsigned) NumClauses_19 + (MR_Unsigned) 1);
          mercury__io__write_string_4_p_0(ProgressStream_25, (MR_String) "% Processing clause ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__make_hlds__add_clause_scalar_common_2[1]), Var_36, &Var_56);
          mercury__io__write_string_4_p_0(ProgressStream_25, Var_56);
          mercury__io__write_string_4_p_0(ProgressStream_25, (MR_String) " for ");
          mercury__io__write_string_4_p_0(ProgressStream_25, PredOrFuncStr_20);
          mercury__io__write_string_4_p_0(ProgressStream_25, (MR_String) " \140");
          mercury__io__write_string_4_p_0(ProgressStream_25, SNAStr_24);
          mercury__io__write_string_4_p_0(ProgressStream_25, (MR_String) "\'...\n");
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_clause__clauses_info_add_clause_24_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_104;

    succeeded = hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__721__1_1_f_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_104);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_104));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__make_hlds__add_clause__clauses_info_add_clause_24_p_0(
  MR_Word ApplModeIds0_25,
  MR_Word AllModeIds_26,
  MR_Word PredStatus_27,
  MR_Word ClauseType_28,
  MR_Word PredOrFunc_29,
  MR_Integer Arity_30,
  MR_Word ArgTerms_31,
  MR_Word Context_32,
  MR_Word SeqNum_33,
  MR_Word * QuantWarnings_34,
  MR_Word BodyGoal_35,
  MR_Word * Goal_36,
  MR_Word CVarSet_37,
  MR_Word * VarSet_38,
  MR_Word TVarSet0_39,
  MR_Word * TVarSet_40,
  MR_Word STATE_VARIABLE_ClausesInfo_0_82,
  MR_Word * STATE_VARIABLE_ClausesInfo_83,
  MR_Word STATE_VARIABLE_ModuleInfo_0_84,
  MR_Word * STATE_VARIABLE_ModuleInfo_85,
  MR_Word STATE_VARIABLE_QualInfo_0_86,
  MR_Word * STATE_VARIABLE_QualInfo_87,
  MR_Word STATE_VARIABLE_Specs_0_88,
  MR_Word * STATE_VARIABLE_Specs_89)
{
  {
    MR_bool succeeded;
    MR_Word VarSet0_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_82, (MR_Integer) 0))));
    MR_Word TVarNameMap0_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_82, (MR_Integer) 1))));
    MR_Word ExplicitVarTypes0_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_82, (MR_Integer) 2))));
    MR_Word InferredVarTypes_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_82, (MR_Integer) 3))));
    MR_Word HeadVars_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_82, (MR_Integer) 4))));
    MR_Word ClausesRep0_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_82, (MR_Integer) 5))));
    MR_Word ItemNumbers0_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_82, (MR_Integer) 6))));
    MR_Word RttiVarMaps_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_82, (MR_Integer) 7))));
    MR_Word HasForeignClauses_53 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_82, (MR_Integer) 8))) >> 1)) & (MR_Integer) 1);
    MR_Word IsEmpty_55;
    MR_Word TVarNameMap_56;
    MR_Word MaybeOptImported_57;
    MR_Word VarSet1_58;
    MR_Word Renaming_59;
    MR_Word Goal0_60;
    MR_Word StateVarWarnings_61;
    MR_Word StateVarErrors_62;
    MR_Word FoundError_63;
    MR_Word STATE_VARIABLE_QualInfo_91_91;
    MR_Word STATE_VARIABLE_QualInfo_93_93;
    MR_Word STATE_VARIABLE_Specs_94_94;
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_82, (MR_Integer) 8)));
    MR_Word Var_90;

    IsEmpty_55 = hlds__hlds_clauses__clause_list_is_empty_1_f_0(ClausesRep0_50);
    switch (IsEmpty_55) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        TVarNameMap_56 = TVarNameMap0_46;
        break;
      case (MR_Integer) 1:
        mercury__varset__create_name_var_map_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet0_39, &TVarNameMap_56);
        break;
    }
    Var_90 = (MR_Word) (PredStatus_27);
    succeeded = (Var_90 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      MaybeOptImported_57 = (MR_Integer) 1;
    else
      MaybeOptImported_57 = (MR_Integer) 0;
    hlds__make_hlds__qual_info__update_qual_info_6_p_0(TVarNameMap_56, TVarSet0_39, ExplicitVarTypes0_47, MaybeOptImported_57, STATE_VARIABLE_QualInfo_0_86, &STATE_VARIABLE_QualInfo_91_91);
    mercury__varset__merge_renaming_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet0_45, CVarSet_37, &VarSet1_58, &Renaming_59);
    hlds__make_hlds__add_clause__add_clause_transform_20_p_0(Renaming_59, HeadVars_49, ArgTerms_31, BodyGoal_35, Context_32, PredOrFunc_29, Arity_30, ClauseType_28, &Goal0_60, VarSet1_58, VarSet_38, QuantWarnings_34, &StateVarWarnings_61, &StateVarErrors_62, STATE_VARIABLE_ModuleInfo_0_84, STATE_VARIABLE_ModuleInfo_85, STATE_VARIABLE_QualInfo_91_91, &STATE_VARIABLE_QualInfo_93_93, STATE_VARIABLE_Specs_0_88, &STATE_VARIABLE_Specs_94_94);
    hlds__make_hlds__qual_info__qual_info_get_tvarset_2_p_0(STATE_VARIABLE_QualInfo_93_93, TVarSet_40);
    hlds__make_hlds__qual_info__qual_info_get_found_syntax_error_2_p_0(STATE_VARIABLE_QualInfo_93_93, &FoundError_63);
    hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_p_0((MR_Integer) 0, STATE_VARIABLE_QualInfo_93_93, STATE_VARIABLE_QualInfo_87);
    succeeded = (FoundError_63 == (MR_Integer) 1);
    if (!(succeeded))
    {
      succeeded = (StateVarErrors_62 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
    }
    if (succeeded)
    {
      MR_Word Var_117;
      MR_Word Var_118;
      MR_Word Var_119;
      MR_Word Var_120;
      MR_Word Var_121;
      MR_Word Var_122;
      MR_Word Var_123;
      MR_Word Var_124;
      MR_Word Var_125;

      *STATE_VARIABLE_Specs_89 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), StateVarErrors_62, STATE_VARIABLE_Specs_94_94);
      *Goal_36 = hlds__make_goal__true_goal_0_f_0();
      Var_117 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_82, (MR_Integer) 0))));
      Var_118 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_82, (MR_Integer) 1))));
      Var_119 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_82, (MR_Integer) 2))));
      Var_120 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_82, (MR_Integer) 3))));
      Var_121 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_82, (MR_Integer) 4))));
      Var_122 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_82, (MR_Integer) 5))));
      Var_123 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_82, (MR_Integer) 6))));
      Var_124 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_82, (MR_Integer) 7))));
      Var_125 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_82, (MR_Integer) 8))) >> 1)) & (MR_Integer) 1);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_ClausesInfo_83 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_117));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_118));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_119));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_120));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_121));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_122));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_123));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_124));
        MR_hl_field(MR_mktag(0), base, 8) = (MR_Box) (((((MR_Unsigned) (Var_125) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
      }
    }
    else
    {
      MR_Word ClausesRep_75;
      MR_Word ExplicitVarTypes_80;
      MR_Word ItemNumbers_81;

      *Goal_36 = Goal0_60;
      switch (HasForeignClauses_53) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Clause_116;

            {
              Clause_116 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Clause_116, 0) = ((MR_Box) (ApplModeIds0_25));
              MR_hl_field(MR_mktag(0), Clause_116, 1) = ((MR_Box) (*Goal_36));
              MR_hl_field(MR_mktag(0), Clause_116, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Clause_116, 3) = ((MR_Box) (Context_32));
              MR_hl_field(MR_mktag(0), Clause_116, 4) = ((MR_Box) (StateVarWarnings_61));
            }
            hlds__hlds_clauses__add_clause_3_p_0(Clause_116, ClausesRep0_50, &ClausesRep_75);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Clauses0_66;
            MR_Word ClausesRep1_67;
            MR_Word ForeignModeIds_68;
            MR_Word ModeIds0_73;
            MR_Word ModeIds_74;
            MR_Word Var_101;

            hlds__hlds_clauses__get_clause_list_3_p_0(&Clauses0_66, ClausesRep0_50, &ClausesRep1_67);
            Var_101 = mercury__list__filter_map_2_f_0((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), (MR_Word) (&hlds__make_hlds__add_clause_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__add_clause_scalar_common_4[0]), Clauses0_66);
            ForeignModeIds_68 = mercury__list__condense_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), Var_101);
            switch (MR_tag((MR_Word) ApplModeIds0_25)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(ApplModeIds0_25)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    ModeIds0_73 = AllModeIds_26;
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_clause.clauses_info_add_clause\'/24", (MR_String) "unify modes for user defined predicate");
                      return;
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                ModeIds0_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ApplModeIds0_25, (MR_Integer) 0))));
                break;
            }
            ModeIds_74 = mercury__list__delete_elems_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), ModeIds0_73, ForeignModeIds_68);
            if ((ModeIds_74 == (MR_Word) ((MR_Unsigned) 0U)))
              ClausesRep_75 = ClausesRep1_67;
            else
            {
              MR_Word ApplicableModeIds_78;
              MR_Word Clause_79;

              {
                ApplicableModeIds_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ApplicableModeIds_78, 0) = ((MR_Box) (ModeIds_74));
              }
              {
                Clause_79 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Clause_79, 0) = ((MR_Box) (ApplicableModeIds_78));
                MR_hl_field(MR_mktag(0), Clause_79, 1) = ((MR_Box) (*Goal_36));
                MR_hl_field(MR_mktag(0), Clause_79, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), Clause_79, 3) = ((MR_Box) (Context_32));
                MR_hl_field(MR_mktag(0), Clause_79, 4) = ((MR_Box) (StateVarWarnings_61));
              }
              hlds__hlds_clauses__add_clause_3_p_0(Clause_79, ClausesRep1_67, &ClausesRep_75);
            }
          }
          break;
      }
      hlds__make_hlds__qual_info__qual_info_get_var_types_2_p_0(*STATE_VARIABLE_QualInfo_87, &ExplicitVarTypes_80);
      hlds__hlds_clauses__add_clause_item_number_5_p_0(SeqNum_33, Context_32, (MR_Integer) 0, ItemNumbers0_51, &ItemNumbers_81);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_ClausesInfo_83 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (*VarSet_38));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TVarNameMap_56));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ExplicitVarTypes_80));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (InferredVarTypes_48));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (HeadVars_49));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ClausesRep_75));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ItemNumbers_81));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (RttiVarMaps_52));
        MR_hl_field(MR_mktag(0), base, 8) = (MR_Box) (packed_word_0);
      }
      *STATE_VARIABLE_Specs_89 = STATE_VARIABLE_Specs_94_94;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_clause__add_clause_transform_20_p_0(
  MR_Word Renaming_21,
  MR_Word HeadVars_22,
  MR_Word ArgTerms0_23,
  MR_Word ParseTreeBodyGoal_24,
  MR_Word Context_25,
  MR_Word PredOrFunc_26,
  MR_Integer Arity_27,
  MR_Word ClauseType_28,
  MR_Word * Goal_29,
  MR_Word STATE_VARIABLE_VarSet_0_65,
  MR_Word * STATE_VARIABLE_VarSet_66,
  MR_Word * QuantWarnings_31,
  MR_Word * StateVarWarnings_32,
  MR_Word * StateVarErrors_33,
  MR_Word STATE_VARIABLE_ModuleInfo_0_67,
  MR_Word * STATE_VARIABLE_ModuleInfo_68,
  MR_Word STATE_VARIABLE_QualInfo_0_69,
  MR_Word * STATE_VARIABLE_QualInfo_70,
  MR_Word STATE_VARIABLE_Specs_0_71,
  MR_Word * STATE_VARIABLE_Specs_72)
{
  {
    MR_Word HeadVarList_40;
    MR_Word ArgTerms1_41;
    MR_Word ArgTerms_42;
    MR_Word FinalSVarMap_43;
    MR_Word InitialSVarState_44;
    MR_Word HeadGoal_46;
    MR_Word BodyGoal_51;
    MR_Word Globals_52;
    MR_Word ModuleName_53;
    MR_Word FinalSVarState_57;
    MR_Word Goal0_58;
    MR_Word FoundTraceGoal_59;
    MR_Word Goal1_60;
    MR_Word VarTypes0_61;
    MR_Word EmptyRttiVarmaps_62;
    MR_Word VarTypes_63;
    MR_Word STATE_VARIABLE_VarSet_74_74;
    MR_Word STATE_VARIABLE_SVarStore_76_76;
    MR_Word STATE_VARIABLE_Specs_77_77;
    MR_Word STATE_VARIABLE_SVarState_78_78;
    MR_Word STATE_VARIABLE_SVarStore_79_79;
    MR_Word STATE_VARIABLE_VarSet_80_80;
    MR_Word STATE_VARIABLE_ModuleInfo_81_81;
    MR_Word STATE_VARIABLE_QualInfo_82_82;
    MR_Word STATE_VARIABLE_Specs_83_83;
    MR_Word STATE_VARIABLE_SVarStore_90_90;
    MR_Word STATE_VARIABLE_VarSet_91_91;
    MR_Word STATE_VARIABLE_QualInfo_93_93;
    MR_Word Var_64;

    HeadVarList_40 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) (&hlds__make_hlds__add_clause_scalar_common_1[3]), HeadVars_22);
    parse_tree__prog_rename__rename_vars_in_term_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_21, ArgTerms0_23, &ArgTerms1_41);
    hlds__make_hlds__state_var__svar_prepare_for_clause_head_9_p_0(ArgTerms1_41, &ArgTerms_42, STATE_VARIABLE_VarSet_0_65, &STATE_VARIABLE_VarSet_74_74, &FinalSVarMap_43, &InitialSVarState_44, &STATE_VARIABLE_SVarStore_76_76, STATE_VARIABLE_Specs_0_71, &STATE_VARIABLE_Specs_77_77);
    if ((ClauseType_28 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ArgContext_47;
      MR_Word HeadGoal0_48;
      MR_Word HeadVarsArgTerms_49;
      MR_Word HeadGoal1_50;

      {
        ArgContext_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ArgContext_47, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_26));
        MR_hl_field(MR_mktag(0), ArgContext_47, 1) = ((MR_Box) (Arity_27));
      }
      HeadGoal0_48 = hlds__make_goal__true_goal_0_f_0();
      hlds__make_hlds__superhomogeneous__pair_vars_with_terms_3_p_0(HeadVarList_40, ArgTerms_42, &HeadVarsArgTerms_49);
      hlds__make_hlds__superhomogeneous__insert_arg_unifications_17_p_0(HeadVarsArgTerms_49, Context_25, ArgContext_47, HeadGoal0_48, &HeadGoal1_50, InitialSVarState_44, &STATE_VARIABLE_SVarState_78_78, STATE_VARIABLE_SVarStore_76_76, &STATE_VARIABLE_SVarStore_79_79, STATE_VARIABLE_VarSet_74_74, &STATE_VARIABLE_VarSet_80_80, STATE_VARIABLE_ModuleInfo_0_67, &STATE_VARIABLE_ModuleInfo_81_81, STATE_VARIABLE_QualInfo_0_69, &STATE_VARIABLE_QualInfo_82_82, STATE_VARIABLE_Specs_77_77, &STATE_VARIABLE_Specs_83_83);
      hlds__goal_util__attach_features_to_all_goals_4_p_1((MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[68])), (MR_Integer) 1, HeadGoal1_50, &HeadGoal_46);
    }
    else
    {
      HeadGoal_46 = hlds__make_goal__true_goal_0_f_0();
      STATE_VARIABLE_VarSet_80_80 = STATE_VARIABLE_VarSet_74_74;
      STATE_VARIABLE_ModuleInfo_81_81 = STATE_VARIABLE_ModuleInfo_0_67;
      STATE_VARIABLE_QualInfo_82_82 = STATE_VARIABLE_QualInfo_0_69;
      STATE_VARIABLE_Specs_83_83 = STATE_VARIABLE_Specs_77_77;
      STATE_VARIABLE_SVarState_78_78 = InitialSVarState_44;
      STATE_VARIABLE_SVarStore_79_79 = STATE_VARIABLE_SVarStore_76_76;
    }
    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0((MR_Integer) 0, ParseTreeBodyGoal_24, Renaming_21, &BodyGoal_51, STATE_VARIABLE_SVarState_78_78, &FinalSVarState_57, STATE_VARIABLE_SVarStore_79_79, &STATE_VARIABLE_SVarStore_90_90, STATE_VARIABLE_VarSet_80_80, &STATE_VARIABLE_VarSet_91_91, STATE_VARIABLE_ModuleInfo_81_81, STATE_VARIABLE_ModuleInfo_68, STATE_VARIABLE_QualInfo_82_82, &STATE_VARIABLE_QualInfo_93_93, STATE_VARIABLE_Specs_83_83, STATE_VARIABLE_Specs_72);
    hlds__hlds_module__module_info_get_globals_2_p_0(*STATE_VARIABLE_ModuleInfo_68, &Globals_52);
    hlds__hlds_module__module_info_get_name_2_p_0(*STATE_VARIABLE_ModuleInfo_68, &ModuleName_53);
    hlds__make_hlds__state_var__svar_finish_clause_body_12_p_0(Globals_52, ModuleName_53, Context_25, FinalSVarMap_43, HeadGoal_46, BodyGoal_51, &Goal0_58, InitialSVarState_44, FinalSVarState_57, STATE_VARIABLE_SVarStore_90_90, StateVarWarnings_32, StateVarErrors_33);
    hlds__make_hlds__qual_info__qual_info_get_found_trace_goal_2_p_0(STATE_VARIABLE_QualInfo_93_93, &FoundTraceGoal_59);
    switch (FoundTraceGoal_59) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Goal1_60 = Goal0_58;
        break;
      case (MR_Integer) 1:
        hlds__pre_quantification__separate_trace_goal_only_locals_2_p_0(Goal0_58, &Goal1_60);
        break;
    }
    hlds__make_hlds__qual_info__qual_info_get_var_types_2_p_0(STATE_VARIABLE_QualInfo_93_93, &VarTypes0_61);
    hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&EmptyRttiVarmaps_62);
    hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 0, HeadVarList_40, QuantWarnings_31, Goal1_60, Goal_29, STATE_VARIABLE_VarSet_91_91, STATE_VARIABLE_VarSet_66, VarTypes0_61, &VarTypes_63, EmptyRttiVarmaps_62, &Var_64);
    hlds__make_hlds__qual_info__qual_info_set_var_types_3_p_0(VarTypes_63, STATE_VARIABLE_QualInfo_93_93, STATE_VARIABLE_QualInfo_70);
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_clause____Unify____clause_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__make_hlds__add_clause____Unify____clause_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_clause____Compare____clause_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__make_hlds__add_clause____Compare____clause_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_clause____Unify____mode_annotations_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__make_hlds__add_clause____Unify____mode_annotations_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_clause____Compare____mode_annotations_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__make_hlds__add_clause____Compare____mode_annotations_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
