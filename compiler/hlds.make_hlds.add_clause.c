/*
** Automatically generated from `add_clause.m'
** by the Mercury compiler,
** version rotd-2022-04-13
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
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
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
hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__651__1_1_f_0(
  MR_Word LambdaHeadVar__1_101,
  MR_Word * LambdaHeadVar__2_102);

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
hlds__make_hlds__add_clause__module_add_clause_2_18_p_0(
  MR_Word PredStatus_19,
  MR_Word ClauseType_20,
  MR_Word PredId_21,
  MR_Word PredOrFunc_22,
  MR_Word PredSymName_23,
  MR_Word MaybeAnnotatedArgTerms_24,
  MR_Word PredFormArity_25,
  MR_Word ClauseVarSet_26,
  MR_Word MaybeBodyGoal_27,
  MR_Word Context_28,
  MR_Word SeqNum_29,
  MR_Word IllegalSVarResult_30,
  MR_Word STATE_VARIABLE_ModuleInfo_0_64,
  MR_Word * STATE_VARIABLE_ModuleInfo_65,
  MR_Word STATE_VARIABLE_QualInfo_0_66,
  MR_Word * STATE_VARIABLE_QualInfo_67,
  MR_Word STATE_VARIABLE_Specs_0_68,
  MR_Word * STATE_VARIABLE_Specs_69);

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
  MR_Word PredOrFunc_13,
  MR_Word PredSymName_14,
  MR_Word PredFormArity_15,
  MR_Word PredStatus_16,
  MR_Word Clauses_17,
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
  MR_Word PredFormArity_13,
  MR_Word Context_14,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25);

static void MR_CALL 
hlds__make_hlds__add_clause__add_clause_progress_msg_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word PredInfo_9,
  MR_Word PredOrFunc_10,
  MR_Word PredName_11,
  MR_Word PredFormArity_12);

static MR_bool MR_CALL 
hlds__make_hlds__add_clause__clauses_info_add_clause_23_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_clause__add_clause_transform_19_p_0(
  MR_Word Renaming_20,
  MR_Word HeadVars_21,
  MR_Word ArgTerms0_22,
  MR_Word ParseTreeBodyGoal_23,
  MR_Word Context_24,
  MR_Word PredOrFunc_25,
  MR_Word ClauseType_26,
  MR_Word * Goal_27,
  MR_Word STATE_VARIABLE_VarSet_0_64,
  MR_Word * STATE_VARIABLE_VarSet_65,
  MR_Word * QuantWarnings_29,
  MR_Word * StateVarWarnings_30,
  MR_Word * StateVarErrors_31,
  MR_Word STATE_VARIABLE_ModuleInfo_0_66,
  MR_Word * STATE_VARIABLE_ModuleInfo_67,
  MR_Word STATE_VARIABLE_QualInfo_0_68,
  MR_Word * STATE_VARIABLE_QualInfo_69,
  MR_Word STATE_VARIABLE_Specs_0_70,
  MR_Word * STATE_VARIABLE_Specs_71);

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


static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_1[52][2];

static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_2[3][1];

static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_3[1][5];

static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_4[1][3];




static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_1[52][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Attempt to define a clause for"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 11U)),
    ((MR_Box) (&hlds__make_hlds__add_clause_scalar_common_1[4]))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "at the end of the preceding line."))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[7])))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "inadvertently writing a period instead of a comma"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[9])))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "This is usually caused by"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[11])))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[13])))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "clause"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[16]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[15])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[18])))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: clause for"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "automatically generated field access"))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[7])))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of the constructor a different name."))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[7])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "to a field update, give the field"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[24])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "function, for example to check the input"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[26])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "To supply your own definition for a field access"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[28])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "are automatically generated by the compiler."))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[30])))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Clauses for field access functions"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[32])))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: clause for builtin."))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[35]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In the head of a clause for"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[7])))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "have mode annotations."))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[7])))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "syntax error: some but not all arguments"))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[41])))
  },
  /* row  44 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[43])))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[44])))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the"))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "argument:"))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[7])))
  },
  /* row  49 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  50 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[34])))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_clause_scalar_common_1[50]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_2[3][1] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_String) ","))
  },
  /* row   1 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
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
    ((MR_Box) (hlds__make_hlds__add_clause__clauses_info_add_clause_23_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
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
  { hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_name_ordered_clause_type_0 },
  { hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_ptag_ordered_clause_type_0 },
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
  { hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_name_ordered_mode_annotations_0 },
  { hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_ptag_ordered_mode_annotations_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__functor_number_map_mode_annotations_0,

};

static MR_bool MR_CALL 
hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__651__1_1_f_0(
  MR_Word LambdaHeadVar__1_101,
  MR_Word * LambdaHeadVar__2_102)
{
  MR_bool succeeded;
  MR_Word ApplProcIds_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_101, (MR_Integer) 0))));
  MR_Word Var_103 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_101, (MR_Integer) 2))));

  succeeded = (Var_103 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    switch (MR_tag((MR_Word) ApplProcIds_70)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ApplProcIds_70)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_clause.clauses_info_add_clause\'/23", (MR_String) "all_modes foreign_proc");
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_clause.clauses_info_add_clause\'/23", (MR_String) "unify modes for foreign_proc");
            break;
        }
        break;
      case (MR_Integer) 1:
        *LambdaHeadVar__2_102 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ApplProcIds_70, (MR_Integer) 0))));
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
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
            TypeInfo_13_13 = (MR_Word) (&hlds__make_hlds__add_clause_scalar_common_1[3]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
          }
        }
        break;
    }
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

void MR_CALL 
hlds__make_hlds__add_clause__module_add_clause_9_p_0(
  MR_Word PredStatus_10,
  MR_Word ClauseType_11,
  MR_Word ClauseInfo_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_43,
  MR_Word * STATE_VARIABLE_ModuleInfo_44,
  MR_Word STATE_VARIABLE_QualInfo_0_45,
  MR_Word * STATE_VARIABLE_QualInfo_46,
  MR_Word STATE_VARIABLE_Specs_0_47,
  MR_Word * STATE_VARIABLE_Specs_48)
{
  MR_bool succeeded;
  MR_Word PredOrFunc_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ClauseInfo_12, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word PredSymName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseInfo_12, (MR_Integer) 1))));
  MR_Word ArgTerms0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseInfo_12, (MR_Integer) 2))));
  MR_Word ClauseVarSet_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseInfo_12, (MR_Integer) 3))));
  MR_Word MaybeBodyGoal_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseInfo_12, (MR_Integer) 4))));
  MR_Word Context_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseInfo_12, (MR_Integer) 5))));
  MR_Word SeqNum_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseInfo_12, (MR_Integer) 6))));
  MR_Word PredModuleName_23;
  MR_String PredName_24;
  MR_Word IllegalSVarResult_28;
  MR_Integer ArityAdjustment_29;
  MR_Word ArgTerms_31;
  MR_Integer Arity0_32;
  MR_Integer Arity_33;
  MR_Word PredFormArity_34;
  MR_Word PredicateTable_36;
  MR_Word PredIds_37;
  MR_Word SVar_26;
  MR_Word SVarCtxt_27;
  MR_Word PredId_38;
  MR_Word Var_53;

  if (((MR_tag((MR_Word) PredSymName_17)) == (MR_Integer) 1))
  {
    PredModuleName_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredSymName_17, (MR_Integer) 0))));
    PredName_24 = ((MR_String) ((MR_hl_field(MR_mktag(1), PredSymName_17, (MR_Integer) 1))));
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_clause.module_add_clause\'/9", (MR_String) "PredSymName is unqualified");
      return;
    }
  succeeded = hlds__make_hlds__state_var__illegal_state_var_func_result_4_p_0(PredOrFunc_16, ArgTerms0_18, &SVar_26, &SVarCtxt_27);
  if (succeeded)
  {
    MR_Tuple Var_51;

    {
      Var_51 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (SVar_26));
      MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (SVarCtxt_27));
    }
    {
      IllegalSVarResult_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), IllegalSVarResult_28, 0) = ((MR_Box) (Var_51));
    }
  }
  else
    IllegalSVarResult_28 = (MR_Word) ((MR_Unsigned) 0U);
  succeeded = (IllegalSVarResult_28 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    ArityAdjustment_29 = (MR_Integer) -1;
  else
    ArityAdjustment_29 = (MR_Integer) 0;
  hlds__make_hlds__state_var__expand_bang_state_pairs_in_terms_2_p_0(ArgTerms0_18, &ArgTerms_31);
  mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__add_clause_scalar_common_1[0]), ArgTerms_31, &Arity0_32);
  Arity_33 = (MR_Integer) ((MR_Unsigned) Arity0_32 + (MR_Unsigned) ArityAdjustment_29);
  PredFormArity_34 = (MR_Word) (Arity_33);
  hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_43, &PredicateTable_36);
  hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredicateTable_36, (MR_Integer) 0, PredOrFunc_16, PredSymName_17, PredFormArity_34, &PredIds_37);
  succeeded = (PredIds_37 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    PredId_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_37, (MR_Integer) 0))));
    Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_37, (MR_Integer) 1))));
    succeeded = (Var_53 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
    hlds__make_hlds__add_clause__module_add_clause_2_18_p_0(PredStatus_10, ClauseType_11, PredId_38, PredOrFunc_16, PredSymName_17, ArgTerms_31, PredFormArity_34, ClauseVarSet_19, MaybeBodyGoal_20, Context_21, SeqNum_22, IllegalSVarResult_28, STATE_VARIABLE_ModuleInfo_0_43, STATE_VARIABLE_ModuleInfo_44, STATE_VARIABLE_QualInfo_0_45, STATE_VARIABLE_QualInfo_46, STATE_VARIABLE_Specs_0_47, STATE_VARIABLE_Specs_48);
  else
  {
    succeeded = (strcmp(PredName_24, (MR_String) ",") == 0);
    if (succeeded)
      succeeded = (Arity_33 == (MR_Integer) 2);
    if (succeeded)
    {
      MR_Word Spec_41;

      {
        Spec_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_41, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_clause.module_add_clause\'/9"));
        MR_hl_field(MR_mktag(1), Spec_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_41, 2) = ((MR_Box) ((MR_Unsigned) 40U));
        MR_hl_field(MR_mktag(1), Spec_41, 3) = ((MR_Box) (Context_21));
        MR_hl_field(MR_mktag(1), Spec_41, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[19])));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_48 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_41));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_47));
      }
      *STATE_VARIABLE_QualInfo_46 = STATE_VARIABLE_QualInfo_0_45;
      *STATE_VARIABLE_ModuleInfo_44 = STATE_VARIABLE_ModuleInfo_0_43;
    }
    else
    {
      MR_Word STATE_VARIABLE_ModuleInfo_86_86;
      MR_Word STATE_VARIABLE_Specs_87_87;
      MR_Word PredId_96;

      if ((ClauseType_11 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_84;

        {
          Var_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_84, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(MR_mktag(3), Var_84, 1) = ((MR_Box) (PredSymName_17));
        }
        hlds__add_pred__add_implicit_pred_decl_report_error_14_p_0(PredOrFunc_16, PredModuleName_23, PredName_24, PredFormArity_34, PredStatus_10, (MR_Integer) 0, Context_21, Var_84, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[17])), &PredId_96, STATE_VARIABLE_ModuleInfo_0_43, &STATE_VARIABLE_ModuleInfo_86_86, STATE_VARIABLE_Specs_0_47, &STATE_VARIABLE_Specs_87_87);
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_clause.module_add_clause\'/9", (MR_String) "clause for undeclared promise");
          return;
        }
      hlds__make_hlds__add_clause__module_add_clause_2_18_p_0(PredStatus_10, ClauseType_11, PredId_96, PredOrFunc_16, PredSymName_17, ArgTerms_31, PredFormArity_34, ClauseVarSet_19, MaybeBodyGoal_20, Context_21, SeqNum_22, IllegalSVarResult_28, STATE_VARIABLE_ModuleInfo_86_86, STATE_VARIABLE_ModuleInfo_44, STATE_VARIABLE_QualInfo_0_45, STATE_VARIABLE_QualInfo_46, STATE_VARIABLE_Specs_87_87, STATE_VARIABLE_Specs_48);
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_clause__module_add_clause_2_18_p_0(
  MR_Word PredStatus_19,
  MR_Word ClauseType_20,
  MR_Word PredId_21,
  MR_Word PredOrFunc_22,
  MR_Word PredSymName_23,
  MR_Word MaybeAnnotatedArgTerms_24,
  MR_Word PredFormArity_25,
  MR_Word ClauseVarSet_26,
  MR_Word MaybeBodyGoal_27,
  MR_Word Context_28,
  MR_Word SeqNum_29,
  MR_Word IllegalSVarResult_30,
  MR_Word STATE_VARIABLE_ModuleInfo_0_64,
  MR_Word * STATE_VARIABLE_ModuleInfo_65,
  MR_Word STATE_VARIABLE_QualInfo_0_66,
  MR_Word * STATE_VARIABLE_QualInfo_67,
  MR_Word STATE_VARIABLE_Specs_0_68,
  MR_Word * STATE_VARIABLE_Specs_69)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_PredInfo_70_70;
  MR_Word STATE_VARIABLE_PredInfo_78_78;
  MR_Word STATE_VARIABLE_PredSpecs_81_81;
  MR_Word STATE_VARIABLE_PredSpecs_82_82;
  MR_Word STATE_VARIABLE_PredSpecs_83_83;
  MR_Word STATE_VARIABLE_PredInfo_84_84;
  MR_Word Var_73;
  MR_Word Var_41;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_64, PredId_21, &STATE_VARIABLE_PredInfo_70_70);
  hlds__make_hlds__add_clause__add_clause_progress_msg_7_p_0(STATE_VARIABLE_ModuleInfo_0_64, STATE_VARIABLE_PredInfo_70_70, PredOrFunc_22, PredSymName_23, PredFormArity_25);
  Var_73 = (MR_Word) (PredStatus_19);
  succeeded = (Var_73 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    MR_Word Markers0_37;
    MR_Word Markers_38;
    MR_Word STATE_VARIABLE_PredInfo_75_75;

    hlds__hlds_pred__pred_info_set_status_3_p_0((MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), STATE_VARIABLE_PredInfo_70_70, &STATE_VARIABLE_PredInfo_75_75);
    hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_75_75, &Markers0_37);
    hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 21, Markers0_37, &Markers_38);
    hlds__hlds_pred__pred_info_set_markers_3_p_0(Markers_38, STATE_VARIABLE_PredInfo_75_75, &STATE_VARIABLE_PredInfo_78_78);
  }
  else
    STATE_VARIABLE_PredInfo_78_78 = STATE_VARIABLE_PredInfo_70_70;
  if ((IllegalSVarResult_30 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_PredSpecs_81_81 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word StateVar_39;
    MR_Word StateVarContext_40;
    MR_Tuple Var_80 = ((MR_Tuple) ((MR_hl_field(MR_mktag(1), IllegalSVarResult_30, (MR_Integer) 0))));

    StateVar_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_80, (MR_Integer) 0))));
    StateVarContext_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_80, (MR_Integer) 1))));
    hlds__make_hlds__state_var__report_illegal_func_svar_result_5_p_0(StateVarContext_40, ClauseVarSet_26, StateVar_39, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_PredSpecs_81_81);
  }
  hlds__make_hlds__add_clause__maybe_add_error_for_field_access_function_8_p_0(STATE_VARIABLE_ModuleInfo_0_64, PredStatus_19, PredOrFunc_22, PredSymName_23, PredFormArity_25, Context_28, STATE_VARIABLE_PredSpecs_81_81, &STATE_VARIABLE_PredSpecs_82_82);
  hlds__make_hlds__add_clause__maybe_add_error_for_builtin_5_p_0(STATE_VARIABLE_ModuleInfo_0_64, STATE_VARIABLE_PredInfo_78_78, Context_28, STATE_VARIABLE_PredSpecs_82_82, &STATE_VARIABLE_PredSpecs_83_83);
  hlds__default_func_mode__maybe_add_default_func_mode_3_p_0(STATE_VARIABLE_PredInfo_78_78, &STATE_VARIABLE_PredInfo_84_84, &Var_41);
  if ((STATE_VARIABLE_PredSpecs_83_83 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word STATE_VARIABLE_ModuleInfo_89_89;
    MR_Word STATE_VARIABLE_PredInfo_102_102;

    if (((MR_tag((MR_Word) MaybeBodyGoal_27)) == (MR_Integer) 0))
    {
      MR_Word BodyGoalSpecs_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeBodyGoal_27, (MR_Integer) 0))));
      MR_Word Clauses0_45;
      MR_Word Clauses_46;
      MR_Word Var_109;
      MR_Word Var_110;
      MR_Word Var_111;
      MR_Word Var_112;
      MR_Word Var_113;
      MR_Word Var_114;
      MR_Word Var_115;
      MR_Word Var_116;
      MR_Word Var_117;

      *STATE_VARIABLE_Specs_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), BodyGoalSpecs_44, STATE_VARIABLE_Specs_0_68);
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_84_84, &Clauses0_45);
      Var_109 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clauses0_45, (MR_Integer) 0))));
      Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clauses0_45, (MR_Integer) 1))));
      Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clauses0_45, (MR_Integer) 2))));
      Var_112 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clauses0_45, (MR_Integer) 3))));
      Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clauses0_45, (MR_Integer) 4))));
      Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clauses0_45, (MR_Integer) 5))));
      Var_115 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clauses0_45, (MR_Integer) 6))));
      Var_116 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clauses0_45, (MR_Integer) 7))));
      Var_117 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Clauses0_45, (MR_Integer) 8))) >> 1)) & (MR_Integer) 1);
      {
        Clauses_46 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Clauses_46, 0) = ((MR_Box) (Var_109));
        MR_hl_field(MR_mktag(0), Clauses_46, 1) = ((MR_Box) (Var_110));
        MR_hl_field(MR_mktag(0), Clauses_46, 2) = ((MR_Box) (Var_111));
        MR_hl_field(MR_mktag(0), Clauses_46, 3) = ((MR_Box) (Var_112));
        MR_hl_field(MR_mktag(0), Clauses_46, 4) = ((MR_Box) (Var_113));
        MR_hl_field(MR_mktag(0), Clauses_46, 5) = ((MR_Box) (Var_114));
        MR_hl_field(MR_mktag(0), Clauses_46, 6) = ((MR_Box) (Var_115));
        MR_hl_field(MR_mktag(0), Clauses_46, 7) = ((MR_Box) (Var_116));
        MR_hl_field(MR_mktag(0), Clauses_46, 8) = (MR_Box) (((((MR_Unsigned) (Var_117) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
      }
      hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(Clauses_46, STATE_VARIABLE_PredInfo_84_84, &STATE_VARIABLE_PredInfo_102_102);
      STATE_VARIABLE_ModuleInfo_89_89 = STATE_VARIABLE_ModuleInfo_0_64;
      *STATE_VARIABLE_QualInfo_67 = STATE_VARIABLE_QualInfo_0_66;
    }
    else
    {
      MR_Word BodyGoal_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeBodyGoal_27, (MR_Integer) 0))));
      MR_Word BodyGoalWarningSpecs_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeBodyGoal_27, (MR_Integer) 1))));
      MR_Word TVarSet0_49;
      MR_Word ArgTerms_50;
      MR_Word ProcIdsForThisClause_51;
      MR_Word AllProcIds_52;
      MR_Word Warnings_53;
      MR_Word Goal_54;
      MR_Word VarSet_55;
      MR_Word TVarSet_56;
      MR_Word ExistQVars_59;
      MR_Word ArgTypes_60;
      MR_Word ProcIds_61;
      MR_Word STATE_VARIABLE_Specs_85_85;
      MR_Word STATE_VARIABLE_ModuleInfo_86_86;
      MR_Word STATE_VARIABLE_QualInfo_87_87;
      MR_Word STATE_VARIABLE_Specs_88_88;
      MR_Word STATE_VARIABLE_Specs_91_91;
      MR_Word STATE_VARIABLE_PredInfo_92_92;
      MR_Word STATE_VARIABLE_PredInfo_94_94;
      MR_Word STATE_VARIABLE_PredInfo_95_95;
      MR_Word STATE_VARIABLE_PredInfo_96_96;
      MR_Word Clauses0_107;
      MR_Word Clauses_108;
      MR_Word _ArgTVarSet_58;

      STATE_VARIABLE_Specs_85_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), BodyGoalWarningSpecs_48, STATE_VARIABLE_Specs_0_68);
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_84_84, &Clauses0_107);
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(STATE_VARIABLE_PredInfo_84_84, &TVarSet0_49);
      hlds__make_hlds__add_clause__select_applicable_modes_15_p_0(MaybeAnnotatedArgTerms_24, ClauseVarSet_26, PredStatus_19, Context_28, PredId_21, STATE_VARIABLE_PredInfo_84_84, &ArgTerms_50, &ProcIdsForThisClause_51, &AllProcIds_52, STATE_VARIABLE_ModuleInfo_0_64, &STATE_VARIABLE_ModuleInfo_86_86, STATE_VARIABLE_QualInfo_0_66, &STATE_VARIABLE_QualInfo_87_87, STATE_VARIABLE_Specs_85_85, &STATE_VARIABLE_Specs_88_88);
      hlds__make_hlds__add_clause__clauses_info_add_clause_23_p_0(ProcIdsForThisClause_51, AllProcIds_52, PredStatus_19, ClauseType_20, PredOrFunc_22, ArgTerms_50, Context_28, SeqNum_29, &Warnings_53, BodyGoal_47, &Goal_54, ClauseVarSet_26, &VarSet_55, TVarSet0_49, &TVarSet_56, Clauses0_107, &Clauses_108, STATE_VARIABLE_ModuleInfo_86_86, &STATE_VARIABLE_ModuleInfo_89_89, STATE_VARIABLE_QualInfo_87_87, STATE_VARIABLE_QualInfo_67, STATE_VARIABLE_Specs_88_88, &STATE_VARIABLE_Specs_91_91);
      hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(Clauses_108, STATE_VARIABLE_PredInfo_84_84, &STATE_VARIABLE_PredInfo_92_92);
      if ((ClauseType_20 == (MR_Word) ((MR_Unsigned) 0U)))
        hlds__hlds_pred__pred_info_update_goal_type_3_p_0((MR_Integer) 1, STATE_VARIABLE_PredInfo_92_92, &STATE_VARIABLE_PredInfo_94_94);
      else
        STATE_VARIABLE_PredInfo_94_94 = STATE_VARIABLE_PredInfo_92_92;
      hlds__hlds_pred__pred_info_set_typevarset_3_p_0(TVarSet_56, STATE_VARIABLE_PredInfo_94_94, &STATE_VARIABLE_PredInfo_95_95);
      hlds__hlds_pred__pred_info_get_arg_types_4_p_0(STATE_VARIABLE_PredInfo_95_95, &_ArgTVarSet_58, &ExistQVars_59, &ArgTypes_60);
      hlds__hlds_pred__pred_info_set_arg_types_5_p_0(TVarSet_56, ExistQVars_59, ArgTypes_60, STATE_VARIABLE_PredInfo_95_95, &STATE_VARIABLE_PredInfo_96_96);
      ProcIds_61 = hlds__hlds_pred__pred_info_all_procids_1_f_0(STATE_VARIABLE_PredInfo_96_96);
      succeeded = (ProcIds_61 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = (ClauseType_20 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        MR_Word EndMarkers0_62;
        MR_Word EndMarkers_63;

        hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_96_96, &EndMarkers0_62);
        hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 3, EndMarkers0_62, &EndMarkers_63);
        hlds__hlds_pred__pred_info_set_markers_3_p_0(EndMarkers_63, STATE_VARIABLE_PredInfo_96_96, &STATE_VARIABLE_PredInfo_102_102);
      }
      else
        STATE_VARIABLE_PredInfo_102_102 = STATE_VARIABLE_PredInfo_96_96;
      hlds__make_hlds__add_clause__maybe_add_singleton_and_quant_warnings_11_p_0(STATE_VARIABLE_ModuleInfo_89_89, PredOrFunc_22, PredSymName_23, PredFormArity_25, PredStatus_19, Clauses_108, VarSet_55, Goal_54, Warnings_53, STATE_VARIABLE_Specs_91_91, STATE_VARIABLE_Specs_69);
    }
    hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_21, STATE_VARIABLE_PredInfo_102_102, STATE_VARIABLE_ModuleInfo_89_89, STATE_VARIABLE_ModuleInfo_65);
  }
  else
  {
    MR_Word Var_105;
    MR_Word Var_106;

    Var_106 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeBodyGoal_27);
    Var_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_106, STATE_VARIABLE_Specs_0_68);
    *STATE_VARIABLE_Specs_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), STATE_VARIABLE_PredSpecs_83_83, Var_105);
    *STATE_VARIABLE_ModuleInfo_65 = STATE_VARIABLE_ModuleInfo_0_64;
    *STATE_VARIABLE_QualInfo_67 = STATE_VARIABLE_QualInfo_0_66;
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
    MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[39])));
  }
  {
    Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[37])));
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
                MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[45])));
              }
              {
                Pieces_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[37])));
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
          MR_Word ArgModes0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModeAnnotations_30, (MR_Integer) 0))));
          MR_Word ArgModes_35;
          MR_Word Procs_40;
          MR_Word ExistingProcs_41;
          MR_Word STATE_VARIABLE_Specs_88_88;
          MR_Word Var_87 = (MR_Word) (PredStatus_18);
          MR_Integer ProcId_42;

          succeeded = (Var_87 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ArgModes_35 = ArgModes0_34;
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
            parse_tree__module_qual__qualify_clause_mode_list_8_p_0(InInt_37, Context_19, ArgModes0_34, &ArgModes_35, MQInfo0_38, &MQInfo_39, STATE_VARIABLE_Specs_0_49, &STATE_VARIABLE_Specs_88_88);
            hlds__make_hlds__qual_info__qual_info_set_mq_info_3_p_0(MQInfo_39, STATE_VARIABLE_QualInfo_0_47, STATE_VARIABLE_QualInfo_48);
          }
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_21, &Procs_40);
          mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs_40, &ExistingProcs_41);
          succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(STATE_VARIABLE_ModuleInfo_0_45, ExistingProcs_41, ArgModes_35, &ProcId_42);
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
            hlds__make_hlds_error__report_undeclared_mode_error_9_p_0(STATE_VARIABLE_ModuleInfo_0_45, PredId_20, PredInfo_21, VarSet_17, ArgModes_35, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[17])), Context_19, STATE_VARIABLE_Specs_88_88, STATE_VARIABLE_Specs_50);
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
      MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[48])));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[46])));
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

static void MR_CALL 
hlds__make_hlds__add_clause__maybe_add_singleton_and_quant_warnings_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word PredOrFunc_13,
  MR_Word PredSymName_14,
  MR_Word PredFormArity_15,
  MR_Word PredStatus_16,
  MR_Word Clauses_17,
  MR_Word VarSet_18,
  MR_Word Goal_19,
  MR_Word Warnings_20,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24)
{
  MR_bool succeeded;

  {
    MR_Word Var_26 = (MR_Word) (PredStatus_16);

    succeeded = (Var_26 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (!(succeeded))
  {
    MR_Word Var_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Clauses_17, (MR_Integer) 8))) & (MR_Integer) 1);

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
      MR_hl_field(MR_mktag(0), WarnPFSymNameArity_22, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_13));
      MR_hl_field(MR_mktag(0), WarnPFSymNameArity_22, 1) = ((MR_Box) (PredSymName_14));
      MR_hl_field(MR_mktag(0), WarnPFSymNameArity_22, 2) = ((MR_Box) (PredFormArity_15));
    }
    hlds__make_hlds__make_hlds_warn__warn_singletons_6_p_0(ModuleInfo_12, WarnPFSymNameArity_22, VarSet_18, Goal_19, STATE_VARIABLE_Specs_0_23, &STATE_VARIABLE_Specs_27_27);
    hlds__make_hlds__make_hlds_warn__add_quant_warnings_5_p_0(WarnPFSymNameArity_22, VarSet_18, Warnings_20, STATE_VARIABLE_Specs_27_27, STATE_VARIABLE_Specs_24);
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
    libs__globals__lookup_bool_option_3_p_0(Globals_24, (MR_Integer) 316, &AllowDefnOfBuiltin_11);
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
            MR_hl_field(MR_mktag(1), BuiltinSpec_12, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[36])));
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
  MR_Integer Var_73;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_27;

  if (succeeded)
  {
    parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_11, &Var_26, PredFormArity_13);
    UserArityInt_16 = (MR_Integer) (Var_26);
    succeeded = hlds__hlds_pred__is_field_access_function_name_5_p_0(ModuleInfo_9, PredSymName_12, &Var_73, &Var_17, &Var_18);
    if (succeeded)
    {
      succeeded = (UserArityInt_16 == Var_73);
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
      MR_hl_field(MR_mktag(0), FieldPFSymNameArity_19, 2) = ((MR_Box) (PredFormArity_13));
    }
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_34, 0) = ((MR_Box) ((MR_Unsigned) 13U));
      MR_hl_field(MR_mktag(3), Var_34, 1) = ((MR_Box) (FieldPFSymNameArity_19));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[22])));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[21])));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_33));
    }
    {
      FieldAccessMainPieces_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), FieldAccessMainPieces_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[20])));
      MR_hl_field(MR_mktag(1), FieldAccessMainPieces_20, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_62 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (FieldAccessMainPieces_20));
    }
    {
      Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Var_62));
      MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[51])));
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

static void MR_CALL 
hlds__make_hlds__add_clause__add_clause_progress_msg_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word PredInfo_9,
  MR_Word PredOrFunc_10,
  MR_Word PredName_11,
  MR_Word PredFormArity_12)
{
  MR_Word Globals_14;
  MR_Word VeryVerbose_15;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_8, &Globals_14);
  libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 71, &VeryVerbose_15);
  switch (VeryVerbose_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word MsgClauses_16;
        MR_Integer NumClauses_17;
        MR_String PredOrFuncStr_18;
        MR_Integer Arity_19;
        MR_String SNAStr_20;
        MR_Word ProgressStream_21;
        MR_Word Var_25;
        MR_Word Var_26;
        MR_Word Var_27;
        MR_Integer Var_33;
        MR_String Var_52;

        hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_9, &MsgClauses_16);
        Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MsgClauses_16, (MR_Integer) 5))));
        NumClauses_17 = hlds__hlds_clauses__num_clauses_in_clauses_rep_1_f_0(Var_25);
        PredOrFuncStr_18 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(PredOrFunc_10);
        parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_10, &Var_26, PredFormArity_12);
        Arity_19 = (MR_Integer) (Var_26);
        {
          Var_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (PredName_11));
          MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (Arity_19));
        }
        SNAStr_20 = parse_tree__prog_out__sym_name_arity_to_string_1_f_0(Var_27);
        hlds__passes_aux__get_progress_output_stream_4_p_0(ModuleInfo_8, &ProgressStream_21);
        Var_33 = (MR_Integer) ((MR_Unsigned) NumClauses_17 + (MR_Unsigned) 1);
        mercury__io__write_string_4_p_0(ProgressStream_21, (MR_String) "% Processing clause ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__make_hlds__add_clause_scalar_common_2[1]), Var_33, &Var_52);
        mercury__io__write_string_4_p_0(ProgressStream_21, Var_52);
        mercury__io__write_string_4_p_0(ProgressStream_21, (MR_String) " for ");
        mercury__io__write_string_4_p_0(ProgressStream_21, PredOrFuncStr_18);
        mercury__io__write_string_4_p_0(ProgressStream_21, (MR_String) " \140");
        mercury__io__write_string_4_p_0(ProgressStream_21, SNAStr_20);
        mercury__io__write_string_4_p_0(ProgressStream_21, (MR_String) "\'...\n");
      }
      break;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_clause__clauses_info_add_clause_23_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_102;

  succeeded = hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__651__1_1_f_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_102);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_102));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
hlds__make_hlds__add_clause__clauses_info_add_clause_23_p_0(
  MR_Word ApplModeIds0_24,
  MR_Word AllModeIds_25,
  MR_Word PredStatus_26,
  MR_Word ClauseType_27,
  MR_Word PredOrFunc_28,
  MR_Word ArgTerms_29,
  MR_Word Context_30,
  MR_Word SeqNum_31,
  MR_Word * QuantWarnings_32,
  MR_Word BodyGoal_33,
  MR_Word * Goal_34,
  MR_Word CVarSet_35,
  MR_Word * VarSet_36,
  MR_Word TVarSet0_37,
  MR_Word * TVarSet_38,
  MR_Word STATE_VARIABLE_ClausesInfo_0_80,
  MR_Word * STATE_VARIABLE_ClausesInfo_81,
  MR_Word STATE_VARIABLE_ModuleInfo_0_82,
  MR_Word * STATE_VARIABLE_ModuleInfo_83,
  MR_Word STATE_VARIABLE_QualInfo_0_84,
  MR_Word * STATE_VARIABLE_QualInfo_85,
  MR_Word STATE_VARIABLE_Specs_0_86,
  MR_Word * STATE_VARIABLE_Specs_87)
{
  MR_bool succeeded;
  MR_Word VarSet0_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_80, (MR_Integer) 0))));
  MR_Word TVarNameMap0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_80, (MR_Integer) 1))));
  MR_Word ExplicitVarTypes0_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_80, (MR_Integer) 2))));
  MR_Word InferredVarTypes_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_80, (MR_Integer) 3))));
  MR_Word HeadVars_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_80, (MR_Integer) 4))));
  MR_Word ClausesRep0_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_80, (MR_Integer) 5))));
  MR_Word ItemNumbers0_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_80, (MR_Integer) 6))));
  MR_Word RttiVarMaps_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_80, (MR_Integer) 7))));
  MR_Word HasForeignClauses_51 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_80, (MR_Integer) 8))) >> 1)) & (MR_Integer) 1);
  MR_Word IsEmpty_53;
  MR_Word TVarNameMap_54;
  MR_Word MaybeOptImported_55;
  MR_Word VarSet1_56;
  MR_Word Renaming_57;
  MR_Word Goal0_58;
  MR_Word StateVarWarnings_59;
  MR_Word StateVarErrors_60;
  MR_Word FoundError_61;
  MR_Word STATE_VARIABLE_QualInfo_89_89;
  MR_Word STATE_VARIABLE_QualInfo_91_91;
  MR_Word STATE_VARIABLE_Specs_92_92;
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_80, (MR_Integer) 8)));
  MR_Word Var_88;

  IsEmpty_53 = hlds__hlds_clauses__clause_list_is_empty_1_f_0(ClausesRep0_48);
  switch (IsEmpty_53) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      TVarNameMap_54 = TVarNameMap0_44;
      break;
    case (MR_Integer) 1:
      mercury__varset__create_name_var_map_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet0_37, &TVarNameMap_54);
      break;
  }
  Var_88 = (MR_Word) (PredStatus_26);
  succeeded = (Var_88 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    MaybeOptImported_55 = (MR_Integer) 1;
  else
    MaybeOptImported_55 = (MR_Integer) 0;
  hlds__make_hlds__qual_info__update_qual_info_6_p_0(TVarNameMap_54, TVarSet0_37, ExplicitVarTypes0_45, MaybeOptImported_55, STATE_VARIABLE_QualInfo_0_84, &STATE_VARIABLE_QualInfo_89_89);
  mercury__varset__merge_renaming_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet0_43, CVarSet_35, &VarSet1_56, &Renaming_57);
  hlds__make_hlds__add_clause__add_clause_transform_19_p_0(Renaming_57, HeadVars_47, ArgTerms_29, BodyGoal_33, Context_30, PredOrFunc_28, ClauseType_27, &Goal0_58, VarSet1_56, VarSet_36, QuantWarnings_32, &StateVarWarnings_59, &StateVarErrors_60, STATE_VARIABLE_ModuleInfo_0_82, STATE_VARIABLE_ModuleInfo_83, STATE_VARIABLE_QualInfo_89_89, &STATE_VARIABLE_QualInfo_91_91, STATE_VARIABLE_Specs_0_86, &STATE_VARIABLE_Specs_92_92);
  hlds__make_hlds__qual_info__qual_info_get_tvarset_2_p_0(STATE_VARIABLE_QualInfo_91_91, TVarSet_38);
  hlds__make_hlds__qual_info__qual_info_get_found_syntax_error_2_p_0(STATE_VARIABLE_QualInfo_91_91, &FoundError_61);
  hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_p_0((MR_Integer) 0, STATE_VARIABLE_QualInfo_91_91, STATE_VARIABLE_QualInfo_85);
  succeeded = (FoundError_61 == (MR_Integer) 1);
  if (!(succeeded))
  {
    succeeded = (StateVarErrors_60 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
    }
  }
  if (succeeded)
  {
    MR_Word Var_115;
    MR_Word Var_116;
    MR_Word Var_117;
    MR_Word Var_118;
    MR_Word Var_119;
    MR_Word Var_120;
    MR_Word Var_121;
    MR_Word Var_122;
    MR_Word Var_123;

    *STATE_VARIABLE_Specs_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), StateVarErrors_60, STATE_VARIABLE_Specs_92_92);
    *Goal_34 = hlds__make_goal__true_goal_0_f_0();
    Var_115 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_80, (MR_Integer) 0))));
    Var_116 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_80, (MR_Integer) 1))));
    Var_117 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_80, (MR_Integer) 2))));
    Var_118 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_80, (MR_Integer) 3))));
    Var_119 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_80, (MR_Integer) 4))));
    Var_120 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_80, (MR_Integer) 5))));
    Var_121 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_80, (MR_Integer) 6))));
    Var_122 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_80, (MR_Integer) 7))));
    Var_123 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_80, (MR_Integer) 8))) >> 1)) & (MR_Integer) 1);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ClausesInfo_81 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_115));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_116));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_117));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_118));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_119));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_120));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_121));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_122));
      MR_hl_field(MR_mktag(0), base, 8) = (MR_Box) (((((MR_Unsigned) (Var_123) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
    }
  }
  else
  {
    MR_Word ClausesRep_73;
    MR_Word ExplicitVarTypes_78;
    MR_Word ItemNumbers_79;

    *Goal_34 = Goal0_58;
    switch (HasForeignClauses_51) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Clause_114;

          {
            Clause_114 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Clause_114, 0) = ((MR_Box) (ApplModeIds0_24));
            MR_hl_field(MR_mktag(0), Clause_114, 1) = ((MR_Box) (*Goal_34));
            MR_hl_field(MR_mktag(0), Clause_114, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Clause_114, 3) = ((MR_Box) (Context_30));
            MR_hl_field(MR_mktag(0), Clause_114, 4) = ((MR_Box) (StateVarWarnings_59));
          }
          hlds__hlds_clauses__add_clause_3_p_0(Clause_114, ClausesRep0_48, &ClausesRep_73);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Clauses0_64;
          MR_Word ClausesRep1_65;
          MR_Word ForeignModeIds_66;
          MR_Word ModeIds0_71;
          MR_Word ModeIds_72;
          MR_Word Var_99;

          hlds__hlds_clauses__get_clause_list_3_p_0(&Clauses0_64, ClausesRep0_48, &ClausesRep1_65);
          Var_99 = mercury__list__filter_map_2_f_0((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), (MR_Word) (&hlds__make_hlds__add_clause_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__add_clause_scalar_common_4[0]), Clauses0_64);
          ForeignModeIds_66 = mercury__list__condense_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), Var_99);
          switch (MR_tag((MR_Word) ApplModeIds0_24)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(ApplModeIds0_24)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ModeIds0_71 = AllModeIds_25;
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_clause.clauses_info_add_clause\'/23", (MR_String) "unify modes for user defined predicate");
                    return;
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              ModeIds0_71 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ApplModeIds0_24, (MR_Integer) 0))));
              break;
          }
          ModeIds_72 = mercury__list__delete_elems_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), ModeIds0_71, ForeignModeIds_66);
          if ((ModeIds_72 == (MR_Word) ((MR_Unsigned) 0U)))
            ClausesRep_73 = ClausesRep1_65;
          else
          {
            MR_Word ApplicableModeIds_76;
            MR_Word Clause_77;

            {
              ApplicableModeIds_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ApplicableModeIds_76, 0) = ((MR_Box) (ModeIds_72));
            }
            {
              Clause_77 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Clause_77, 0) = ((MR_Box) (ApplicableModeIds_76));
              MR_hl_field(MR_mktag(0), Clause_77, 1) = ((MR_Box) (*Goal_34));
              MR_hl_field(MR_mktag(0), Clause_77, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Clause_77, 3) = ((MR_Box) (Context_30));
              MR_hl_field(MR_mktag(0), Clause_77, 4) = ((MR_Box) (StateVarWarnings_59));
            }
            hlds__hlds_clauses__add_clause_3_p_0(Clause_77, ClausesRep1_65, &ClausesRep_73);
          }
        }
        break;
    }
    hlds__make_hlds__qual_info__qual_info_get_var_types_2_p_0(*STATE_VARIABLE_QualInfo_85, &ExplicitVarTypes_78);
    hlds__hlds_clauses__add_clause_item_number_5_p_0(SeqNum_31, Context_30, (MR_Integer) 0, ItemNumbers0_49, &ItemNumbers_79);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ClausesInfo_81 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (*VarSet_36));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TVarNameMap_54));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ExplicitVarTypes_78));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (InferredVarTypes_46));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (HeadVars_47));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ClausesRep_73));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ItemNumbers_79));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (RttiVarMaps_50));
      MR_hl_field(MR_mktag(0), base, 8) = (MR_Box) (packed_word_0);
    }
    *STATE_VARIABLE_Specs_87 = STATE_VARIABLE_Specs_92_92;
  }
}

static void MR_CALL 
hlds__make_hlds__add_clause__add_clause_transform_19_p_0(
  MR_Word Renaming_20,
  MR_Word HeadVars_21,
  MR_Word ArgTerms0_22,
  MR_Word ParseTreeBodyGoal_23,
  MR_Word Context_24,
  MR_Word PredOrFunc_25,
  MR_Word ClauseType_26,
  MR_Word * Goal_27,
  MR_Word STATE_VARIABLE_VarSet_0_64,
  MR_Word * STATE_VARIABLE_VarSet_65,
  MR_Word * QuantWarnings_29,
  MR_Word * StateVarWarnings_30,
  MR_Word * StateVarErrors_31,
  MR_Word STATE_VARIABLE_ModuleInfo_0_66,
  MR_Word * STATE_VARIABLE_ModuleInfo_67,
  MR_Word STATE_VARIABLE_QualInfo_0_68,
  MR_Word * STATE_VARIABLE_QualInfo_69,
  MR_Word STATE_VARIABLE_Specs_0_70,
  MR_Word * STATE_VARIABLE_Specs_71)
{
  MR_Word HeadVarList_38;
  MR_Word ArgTerms1_39;
  MR_Word ArgTerms_40;
  MR_Word FinalSVarMap_41;
  MR_Word InitialSVarState_42;
  MR_Word HeadGoal_44;
  MR_Word BodyGoal_50;
  MR_Word Globals_51;
  MR_Word ModuleName_52;
  MR_Word FinalSVarState_56;
  MR_Word Goal0_57;
  MR_Word FoundTraceGoal_58;
  MR_Word Goal1_59;
  MR_Word VarTypes0_60;
  MR_Word EmptyRttiVarmaps_61;
  MR_Word VarTypes_62;
  MR_Word STATE_VARIABLE_VarSet_73_73;
  MR_Word STATE_VARIABLE_SVarStore_75_75;
  MR_Word STATE_VARIABLE_Specs_76_76;
  MR_Word STATE_VARIABLE_SVarState_77_77;
  MR_Word STATE_VARIABLE_SVarStore_78_78;
  MR_Word STATE_VARIABLE_VarSet_79_79;
  MR_Word STATE_VARIABLE_ModuleInfo_80_80;
  MR_Word STATE_VARIABLE_QualInfo_81_81;
  MR_Word STATE_VARIABLE_Specs_82_82;
  MR_Word STATE_VARIABLE_SVarStore_89_89;
  MR_Word STATE_VARIABLE_VarSet_90_90;
  MR_Word STATE_VARIABLE_QualInfo_92_92;
  MR_Word Var_63;

  HeadVarList_38 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) (&hlds__make_hlds__add_clause_scalar_common_1[2]), HeadVars_21);
  parse_tree__prog_rename__rename_vars_in_term_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_20, ArgTerms0_22, &ArgTerms1_39);
  hlds__make_hlds__state_var__svar_prepare_for_clause_head_9_p_0(ArgTerms1_39, &ArgTerms_40, STATE_VARIABLE_VarSet_0_64, &STATE_VARIABLE_VarSet_73_73, &FinalSVarMap_41, &InitialSVarState_42, &STATE_VARIABLE_SVarStore_75_75, STATE_VARIABLE_Specs_0_70, &STATE_VARIABLE_Specs_76_76);
  if ((ClauseType_26 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word PredFormArity_45;
    MR_Word ArgContext_46;
    MR_Word HeadGoal0_47;
    MR_Word HeadVarsArgTerms_48;
    MR_Word HeadGoal1_49;

    PredFormArity_45 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&hlds__make_hlds__add_clause_scalar_common_1[0]), ArgTerms0_22);
    {
      ArgContext_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ArgContext_46, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_25));
      MR_hl_field(MR_mktag(0), ArgContext_46, 1) = ((MR_Box) (PredFormArity_45));
    }
    HeadGoal0_47 = hlds__make_goal__true_goal_0_f_0();
    hlds__make_hlds__superhomogeneous__pair_vars_with_terms_3_p_0(HeadVarList_38, ArgTerms_40, &HeadVarsArgTerms_48);
    hlds__make_hlds__superhomogeneous__insert_arg_unifications_17_p_0(HeadVarsArgTerms_48, Context_24, ArgContext_46, HeadGoal0_47, &HeadGoal1_49, InitialSVarState_42, &STATE_VARIABLE_SVarState_77_77, STATE_VARIABLE_SVarStore_75_75, &STATE_VARIABLE_SVarStore_78_78, STATE_VARIABLE_VarSet_73_73, &STATE_VARIABLE_VarSet_79_79, STATE_VARIABLE_ModuleInfo_0_66, &STATE_VARIABLE_ModuleInfo_80_80, STATE_VARIABLE_QualInfo_0_68, &STATE_VARIABLE_QualInfo_81_81, STATE_VARIABLE_Specs_76_76, &STATE_VARIABLE_Specs_82_82);
    hlds__goal_util__attach_features_to_all_goals_4_p_1((MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[49])), (MR_Integer) 1, HeadGoal1_49, &HeadGoal_44);
  }
  else
  {
    HeadGoal_44 = hlds__make_goal__true_goal_0_f_0();
    STATE_VARIABLE_VarSet_79_79 = STATE_VARIABLE_VarSet_73_73;
    STATE_VARIABLE_ModuleInfo_80_80 = STATE_VARIABLE_ModuleInfo_0_66;
    STATE_VARIABLE_QualInfo_81_81 = STATE_VARIABLE_QualInfo_0_68;
    STATE_VARIABLE_Specs_82_82 = STATE_VARIABLE_Specs_76_76;
    STATE_VARIABLE_SVarState_77_77 = InitialSVarState_42;
    STATE_VARIABLE_SVarStore_78_78 = STATE_VARIABLE_SVarStore_75_75;
  }
  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0((MR_Integer) 0, ParseTreeBodyGoal_23, Renaming_20, &BodyGoal_50, STATE_VARIABLE_SVarState_77_77, &FinalSVarState_56, STATE_VARIABLE_SVarStore_78_78, &STATE_VARIABLE_SVarStore_89_89, STATE_VARIABLE_VarSet_79_79, &STATE_VARIABLE_VarSet_90_90, STATE_VARIABLE_ModuleInfo_80_80, STATE_VARIABLE_ModuleInfo_67, STATE_VARIABLE_QualInfo_81_81, &STATE_VARIABLE_QualInfo_92_92, STATE_VARIABLE_Specs_82_82, STATE_VARIABLE_Specs_71);
  hlds__hlds_module__module_info_get_globals_2_p_0(*STATE_VARIABLE_ModuleInfo_67, &Globals_51);
  hlds__hlds_module__module_info_get_name_2_p_0(*STATE_VARIABLE_ModuleInfo_67, &ModuleName_52);
  hlds__make_hlds__state_var__svar_finish_clause_body_12_p_0(Globals_51, ModuleName_52, Context_24, FinalSVarMap_41, HeadGoal_44, BodyGoal_50, &Goal0_57, InitialSVarState_42, FinalSVarState_56, STATE_VARIABLE_SVarStore_89_89, StateVarWarnings_30, StateVarErrors_31);
  hlds__make_hlds__qual_info__qual_info_get_found_trace_goal_2_p_0(STATE_VARIABLE_QualInfo_92_92, &FoundTraceGoal_58);
  switch (FoundTraceGoal_58) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Goal1_59 = Goal0_57;
      break;
    case (MR_Integer) 1:
      hlds__pre_quantification__separate_trace_goal_only_locals_2_p_0(Goal0_57, &Goal1_59);
      break;
  }
  hlds__make_hlds__qual_info__qual_info_get_var_types_2_p_0(STATE_VARIABLE_QualInfo_92_92, &VarTypes0_60);
  hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&EmptyRttiVarmaps_61);
  hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 0, HeadVarList_38, QuantWarnings_29, Goal1_59, Goal_27, STATE_VARIABLE_VarSet_90_90, STATE_VARIABLE_VarSet_65, VarTypes0_60, &VarTypes_62, EmptyRttiVarmaps_61, &Var_63);
  hlds__make_hlds__qual_info__qual_info_set_var_types_3_p_0(VarTypes_62, STATE_VARIABLE_QualInfo_92_92, STATE_VARIABLE_QualInfo_69);
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
