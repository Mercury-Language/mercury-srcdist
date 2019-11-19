/*
** Automatically generated from `add_clause.m'
** by the Mercury compiler,
** version rotd-2019-11-19
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
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
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
#include "hlds.pre_quantification.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
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
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_clause__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_clause__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0;

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
hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__675__1_1_f_0(
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
  MR_Word ClauseVarSet_20,
  MR_Word PredOrFunc_21,
  MR_Word PredName_22,
  MR_Word PredId_23,
  MR_Word MaybeAnnotatedArgTerms_24,
  MR_Integer Arity_25,
  MR_Integer ArityAdjustment_26,
  MR_Word MaybeBodyGoal_27,
  MR_Word PredStatus_28,
  MR_Word Context_29,
  MR_Word MaybeSeqNum_30,
  MR_Word GoalType_31,
  MR_Word IllegalSVarResult_32,
  MR_Word STATE_VARIABLE_ModuleInfo_0_82,
  MR_Word * STATE_VARIABLE_ModuleInfo_83,
  MR_Word STATE_VARIABLE_QualInfo_0_84,
  MR_Word * STATE_VARIABLE_QualInfo_85,
  MR_Word STATE_VARIABLE_Specs_0_86,
  MR_Word * STATE_VARIABLE_Specs_87);

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
  MR_Word STATE_VARIABLE_ModuleInfo_0_46,
  MR_Word * STATE_VARIABLE_ModuleInfo_47,
  MR_Word STATE_VARIABLE_QualInfo_0_48,
  MR_Word * STATE_VARIABLE_QualInfo_49,
  MR_Word STATE_VARIABLE_Specs_0_50,
  MR_Word * STATE_VARIABLE_Specs_51);

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

static MR_Box MR_CALL 
hlds__make_hlds__add_clause__undeclared_mode_error_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_clause__undeclared_mode_error_8_p_0(
  MR_Word ModeList_9,
  MR_Word VarSet_10,
  MR_Word PredId_11,
  MR_Word PredInfo_12,
  MR_Word ModuleInfo_13,
  MR_Word Context_14,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32);

static MR_Word MR_CALL 
hlds__make_hlds__add_clause__mode_decl_for_pred_info_to_pieces_2_f_0(
  MR_Word PredInfo_4,
  MR_Integer ProcId_5);

static void MR_CALL 
hlds__make_hlds__add_clause__add_clause_progress_msg_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word PredInfo_10,
  MR_Word PredOrFunc_11,
  MR_Word PredName_12,
  MR_Word MaybeAnnotatedArgTerms_13,
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
  MR_Word GoalType_28,
  MR_Word * Goal_29,
  MR_Word STATE_VARIABLE_VarSet_0_62,
  MR_Word * STATE_VARIABLE_VarSet_63,
  MR_Word * QuantWarnings_31,
  MR_Word * StateVarWarnings_32,
  MR_Word * StateVarErrors_33,
  MR_Word STATE_VARIABLE_ModuleInfo_0_64,
  MR_Word * STATE_VARIABLE_ModuleInfo_65,
  MR_Word STATE_VARIABLE_QualInfo_0_66,
  MR_Word * STATE_VARIABLE_QualInfo_67,
  MR_Word STATE_VARIABLE_Specs_0_68,
  MR_Word * STATE_VARIABLE_Specs_69);

static MR_bool MR_CALL 
hlds__make_hlds__add_clause____Unify____mode_annotations_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_clause____Compare____mode_annotations_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_1[74][2];

static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_2[3][1];

static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_3[1][5];

static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_4[1][3];

static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_5[1][6];




static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_1[74][2] = {
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
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "at the end of the preceding line."))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "inadvertently writing a period instead of a comma"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "This is usually caused by"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[11])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[5])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of the constructor a different name."))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[15]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "to a field update, give the field"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[16])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "function, for example to check the input"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[18])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "To supply your own definition for a field access"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[20])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "are automatically generated by the compiler."))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[22])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Clauses for field access functions"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[24])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: clause for builtin."))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[27]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 29 */
  {
    ((MR_Box) (&hlds__make_hlds__add_clause_scalar_common_2[0])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[5])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "have mode annotations."))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[5])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "syntax error: some but not all arguments"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[33])))
  },
  /* row 36 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[35])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[36])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ".)"))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[5])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[40]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is:"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[41])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "are the following:"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[41])))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "argument:"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[5])))
  },
  /* row 48 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 49 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ":- mode"))
  },
  /* row 50 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[50]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 52 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In clause for"))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[52]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 54 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 55 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: mode annotation specifies undeclared mode"))
  },
  /* row 56 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "(There are no declared modes for this"))
  },
  /* row 57 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The declared mode for this"))
  },
  /* row 58 */
  {
    ((MR_Box) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[58]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 60 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The declared modes for this"))
  },
  /* row 61 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the"))
  },
  /* row 62 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In the head of a clause for"))
  },
  /* row 63 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: clause for automatically generated"))
  },
  /* row 64 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "field access"))
  },
  /* row 65 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[26])))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_clause_scalar_common_1[65]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 67 */
  {
    ((MR_Box) (&hlds__make_hlds__add_clause_scalar_common_2[2])),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 68 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Attempt to define a clause for"))
  },
  /* row 69 */
  {
    ((MR_Box) ((MR_Unsigned) 10U)),
    ((MR_Box) (&hlds__make_hlds__add_clause_scalar_common_1[67]))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[69]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[13])))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[70])))
  },
  /* row 72 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "clause"))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[72]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_2[3][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[28])))
  },
  /* row 1 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) ","))
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
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_stag_ordered_mode_annotations_0_1,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__add_clause____Unify____mode_annotations_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_clause____Compare____mode_annotations_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_clause",
  (MR_String) "mode_annotations",
  {     hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_name_ordered_mode_annotations_0 },
  {     hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_ptag_ordered_mode_annotations_0 },
  (MR_Integer) 4,
  UINT16_C(4),
  hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__functor_number_map_mode_annotations_0
};

static MR_bool MR_CALL 
hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__675__1_1_f_0(
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
hlds__make_hlds__add_clause__module_add_clause_15_p_0(
  MR_Word ClauseVarSet_16,
  MR_Word PredOrFunc_17,
  MR_Word PredName_18,
  MR_Word ArgTerms0_19,
  MR_Word MaybeBodyGoal_20,
  MR_Word Status_21,
  MR_Word Context_22,
  MR_Word MaybeSeqNum_23,
  MR_Word GoalType_24,
  MR_Word STATE_VARIABLE_ModuleInfo_0_52,
  MR_Word * STATE_VARIABLE_ModuleInfo_53,
  MR_Word STATE_VARIABLE_QualInfo_0_54,
  MR_Word * STATE_VARIABLE_QualInfo_55,
  MR_Word STATE_VARIABLE_Specs_0_56,
  MR_Word * STATE_VARIABLE_Specs_57)
{
  {
    MR_bool succeeded;
    MR_Word IllegalSVarResult_30;
    MR_Integer ArityAdjustment_31;
    MR_Word ArgTerms_33;
    MR_Word ModuleName_34;
    MR_Integer Arity0_35;
    MR_Integer Arity_36;
    MR_Word PredicateTable_38;
    MR_Word PredIds_39;
    MR_Word SVar_28;
    MR_Word SVarCtxt_29;
    MR_Word PredIdPrime_40;
    MR_Word Var_60;

    succeeded = hlds__make_hlds__state_var__illegal_state_var_func_result_4_p_0(PredOrFunc_17, ArgTerms0_19, &SVar_28, &SVarCtxt_29);
    if (succeeded)
    {
      MR_Tuple Var_58;

      {
        Var_58 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (SVar_28));
        MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (SVarCtxt_29));
      }
      {
        IllegalSVarResult_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), IllegalSVarResult_30, 0) = ((MR_Box) (Var_58));
      }
    }
    else
      IllegalSVarResult_30 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = (IllegalSVarResult_30 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      ArityAdjustment_31 = (MR_Integer) -1;
    else
      ArityAdjustment_31 = (MR_Integer) 0;
    hlds__make_hlds__state_var__expand_bang_state_pairs_in_terms_2_p_0(ArgTerms0_19, &ArgTerms_33);
    hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_0_52, &ModuleName_34);
    mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__add_clause_scalar_common_1[0]), ArgTerms_33, &Arity0_35);
    Arity_36 = (MR_Integer) ((MR_Unsigned) Arity0_35 + (MR_Unsigned) ArityAdjustment_31);
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_52, &PredicateTable_38);
    hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredicateTable_38, (MR_Integer) 0, PredOrFunc_17, PredName_18, Arity_36, &PredIds_39);
    succeeded = (PredIds_39 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      PredIdPrime_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_39, (MR_Integer) 0))));
      Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_39, (MR_Integer) 1))));
      succeeded = (Var_60 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) GoalType_24)) == (MR_Integer) 1);
      if (succeeded)
      {
        MR_String NameString_43;
        MR_String UnexpectedMsg_44;
        MR_String Var_116;
        MR_String Var_118;
        MR_String Var_119;
        MR_String Var_121;
        MR_String Var_122;
        MR_String Var_124;

        NameString_43 = mdbcomp__sym_name__sym_name_to_string_1_f_0(PredName_18);
        Var_116 = mercury__string__f_43_43_2_f_0(NameString_43, (MR_String) ").\n");
        Var_118 = mercury__string__f_43_43_2_f_0((MR_String) " (", Var_116);
        Var_119 = mercury__string__f_43_43_2_f_0((MR_String) "name to an existing predicate", Var_118);
        Var_121 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_119);
        Var_122 = mercury__string__f_43_43_2_f_0((MR_String) "for a promise with an identical", Var_121);
        Var_124 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_122);
        UnexpectedMsg_44 = mercury__string__f_43_43_2_f_0((MR_String) "Attempted to introduce a predicate", Var_124);
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_clause.module_add_clause\'/15", UnexpectedMsg_44);
          return;
        }
      }
      hlds__make_hlds__add_clause__module_add_clause_2_19_p_0(ClauseVarSet_16, PredOrFunc_17, PredName_18, PredIdPrime_40, ArgTerms_33, Arity_36, ArityAdjustment_31, MaybeBodyGoal_20, Status_21, Context_22, MaybeSeqNum_23, GoalType_24, IllegalSVarResult_30, STATE_VARIABLE_ModuleInfo_0_52, STATE_VARIABLE_ModuleInfo_53, STATE_VARIABLE_QualInfo_0_54, STATE_VARIABLE_QualInfo_55, STATE_VARIABLE_Specs_0_56, STATE_VARIABLE_Specs_57);
    }
    else
    {
      MR_Word MaybePredId_127;
      MR_Word STATE_VARIABLE_Specs_100_129;
      MR_Word STATE_VARIABLE_ModuleInfo_101_130;
      MR_String Var_75;

      Var_75 = mdbcomp__sym_name__unqualify_name_1_f_0(PredName_18);
      succeeded = (strcmp(Var_75, (MR_String) ",") == 0);
      if (succeeded)
        succeeded = (Arity_36 == (MR_Integer) 2);
      if (succeeded)
      {
        MR_Word Spec_47;

        MaybePredId_127 = (MR_Word) ((MR_Unsigned) 0U);
        {
          Spec_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_47, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_47, 1) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(MR_mktag(1), Spec_47, 2) = ((MR_Box) (Context_22));
          MR_hl_field(MR_mktag(1), Spec_47, 3) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[71])));
        }
        {
          STATE_VARIABLE_Specs_100_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_100_129, 0) = ((MR_Box) (Spec_47));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_100_129, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_56));
        }
        STATE_VARIABLE_ModuleInfo_101_130 = STATE_VARIABLE_ModuleInfo_0_52;
      }
      else
      {
        MR_Word NewPredId_50;

        succeeded = ((MR_tag((MR_Word) GoalType_24)) == (MR_Integer) 1);
        if (succeeded)
        {
          MR_Word HeadVars_49;

          HeadVars_49 = mercury__term__term_list_to_var_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgTerms_33);
          hlds__add_pred__preds_add_implicit_for_assertion_10_p_0(STATE_VARIABLE_ModuleInfo_0_52, &STATE_VARIABLE_ModuleInfo_101_130, ModuleName_34, PredName_18, Arity_36, PredOrFunc_17, HeadVars_49, Status_21, Context_22, &NewPredId_50);
          STATE_VARIABLE_Specs_100_129 = STATE_VARIABLE_Specs_0_56;
        }
        else
        {
          MR_Word Var_104;

          {
            Var_104 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_104, 0) = ((MR_Box) ((MR_Unsigned) 7U));
            MR_hl_field(MR_mktag(3), Var_104, 1) = ((MR_Box) (PredName_18));
          }
          hlds__add_pred__preds_add_implicit_report_error_14_p_0(STATE_VARIABLE_ModuleInfo_0_52, &STATE_VARIABLE_ModuleInfo_101_130, ModuleName_34, PredName_18, Arity_36, PredOrFunc_17, Status_21, (MR_Integer) 0, Context_22, Var_104, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[73])), &NewPredId_50, STATE_VARIABLE_Specs_0_56, &STATE_VARIABLE_Specs_100_129);
        }
        {
          MaybePredId_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybePredId_127, 0) = ((MR_Box) (NewPredId_50));
        }
      }
      if ((MaybePredId_127 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *STATE_VARIABLE_ModuleInfo_53 = STATE_VARIABLE_ModuleInfo_101_130;
        *STATE_VARIABLE_QualInfo_55 = STATE_VARIABLE_QualInfo_0_54;
        *STATE_VARIABLE_Specs_57 = STATE_VARIABLE_Specs_100_129;
      }
      else
      {
        MR_Word PredId_125 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredId_127, (MR_Integer) 0))));

        hlds__make_hlds__add_clause__module_add_clause_2_19_p_0(ClauseVarSet_16, PredOrFunc_17, PredName_18, PredId_125, ArgTerms_33, Arity_36, ArityAdjustment_31, MaybeBodyGoal_20, Status_21, Context_22, MaybeSeqNum_23, GoalType_24, IllegalSVarResult_30, STATE_VARIABLE_ModuleInfo_101_130, STATE_VARIABLE_ModuleInfo_53, STATE_VARIABLE_QualInfo_0_54, STATE_VARIABLE_QualInfo_55, STATE_VARIABLE_Specs_100_129, STATE_VARIABLE_Specs_57);
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_clause__module_add_clause_2_19_p_0(
  MR_Word ClauseVarSet_20,
  MR_Word PredOrFunc_21,
  MR_Word PredName_22,
  MR_Word PredId_23,
  MR_Word MaybeAnnotatedArgTerms_24,
  MR_Integer Arity_25,
  MR_Integer ArityAdjustment_26,
  MR_Word MaybeBodyGoal_27,
  MR_Word PredStatus_28,
  MR_Word Context_29,
  MR_Word MaybeSeqNum_30,
  MR_Word GoalType_31,
  MR_Word IllegalSVarResult_32,
  MR_Word STATE_VARIABLE_ModuleInfo_0_82,
  MR_Word * STATE_VARIABLE_ModuleInfo_83,
  MR_Word STATE_VARIABLE_QualInfo_0_84,
  MR_Word * STATE_VARIABLE_QualInfo_85,
  MR_Word STATE_VARIABLE_Specs_0_86,
  MR_Word * STATE_VARIABLE_Specs_87)
{
  {
    MR_bool succeeded;
    MR_Word PredMap0_39;
    MR_Word STATE_VARIABLE_PredicateTable_88_88;
    MR_Word STATE_VARIABLE_PredInfo_89_89;
    MR_Word STATE_VARIABLE_PredInfo_97_97;
    MR_Word STATE_VARIABLE_PredSpecs_100_100;
    MR_Word STATE_VARIABLE_PredSpecs_144_144;
    MR_Word STATE_VARIABLE_PredSpecs_157_157;
    MR_Word STATE_VARIABLE_PredInfo_158_158;
    MR_Box conv0_STATE_VARIABLE_PredInfo_89_89;
    MR_Word Var_92;
    MR_Integer FuncArity_45;
    MR_Word Var_101;
    MR_Integer Var_213;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_102;
    MR_Word Var_57;

    hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_82, &STATE_VARIABLE_PredicateTable_88_88);
    hlds__pred_table__predicate_table_get_preds_2_p_0(STATE_VARIABLE_PredicateTable_88_88, &PredMap0_39);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredMap0_39, ((MR_Box) (PredId_23)), &conv0_STATE_VARIABLE_PredInfo_89_89);
    STATE_VARIABLE_PredInfo_89_89 = ((MR_Word) (conv0_STATE_VARIABLE_PredInfo_89_89));
    hlds__make_hlds__add_clause__add_clause_progress_msg_8_p_0(STATE_VARIABLE_ModuleInfo_0_82, STATE_VARIABLE_PredInfo_89_89, PredOrFunc_21, PredName_22, MaybeAnnotatedArgTerms_24, ArityAdjustment_26);
    Var_92 = (MR_Word) (PredStatus_28);
    succeeded = (Var_92 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      MR_Word InitMarkers0_41;
      MR_Word InitMarkers_42;
      MR_Word STATE_VARIABLE_PredInfo_94_94;

      hlds__hlds_pred__pred_info_set_status_3_p_0(PredStatus_28, STATE_VARIABLE_PredInfo_89_89, &STATE_VARIABLE_PredInfo_94_94);
      hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_94_94, &InitMarkers0_41);
      hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 21, InitMarkers0_41, &InitMarkers_42);
      hlds__hlds_pred__pred_info_set_markers_3_p_0(InitMarkers_42, STATE_VARIABLE_PredInfo_94_94, &STATE_VARIABLE_PredInfo_97_97);
    }
    else
      STATE_VARIABLE_PredInfo_97_97 = STATE_VARIABLE_PredInfo_89_89;
    if ((IllegalSVarResult_32 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_PredSpecs_100_100 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word StateVar_43;
      MR_Word StateVarContext_44;
      MR_Tuple Var_99 = ((MR_Tuple) ((MR_hl_field(MR_mktag(1), IllegalSVarResult_32, (MR_Integer) 0))));

      StateVar_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_99, (MR_Integer) 0))));
      StateVarContext_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_99, (MR_Integer) 1))));
      hlds__make_hlds__state_var__report_illegal_func_svar_result_5_p_0(StateVarContext_44, ClauseVarSet_20, StateVar_43, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_PredSpecs_100_100);
    }
    succeeded = (PredOrFunc_21 == (MR_Integer) 1);
    if (succeeded)
    {
      Var_101 = (MR_Integer) 1;
      parse_tree__prog_util__adjust_func_arity_3_p_1(Var_101, &FuncArity_45, Arity_25);
      succeeded = hlds__hlds_pred__is_field_access_function_name_5_p_0(STATE_VARIABLE_ModuleInfo_0_82, PredName_22, &Var_213, &Var_46, &Var_47);
      if (succeeded)
      {
        succeeded = (FuncArity_45 == Var_213);
        if (succeeded)
        {
          Var_102 = (MR_Word) (PredStatus_28);
          succeeded = (Var_102 != (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
    if (succeeded)
    {
      MR_Word CallId_48;
      MR_Word FieldAccessMainPieces_49;
      MR_Word FieldAccessMsg_51;
      MR_Word FieldAccessSpec_52;
      MR_Word Var_105;
      MR_Word Var_108;
      MR_Word Var_109;
      MR_Word Var_134;
      MR_Word Var_135;
      MR_Word Var_142;

      {
        CallId_48 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), CallId_48, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_21));
        MR_hl_field(MR_mktag(0), CallId_48, 1) = ((MR_Box) (PredName_22));
        MR_hl_field(MR_mktag(0), CallId_48, 2) = ((MR_Box) (Arity_25));
      }
      {
        Var_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_109, 0) = ((MR_Box) ((MR_Unsigned) 17U));
        MR_hl_field(MR_mktag(3), Var_109, 1) = ((MR_Box) (CallId_48));
      }
      {
        Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) (Var_109));
        MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[14])));
      }
      {
        Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[64])));
        MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) (Var_108));
      }
      {
        FieldAccessMainPieces_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FieldAccessMainPieces_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[63])));
        MR_hl_field(MR_mktag(1), FieldAccessMainPieces_49, 1) = ((MR_Box) (Var_105));
      }
      {
        Var_135 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_135, 0) = ((MR_Box) (FieldAccessMainPieces_49));
      }
      {
        Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_134, 0) = ((MR_Box) (Var_135));
        MR_hl_field(MR_mktag(1), Var_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[66])));
      }
      {
        FieldAccessMsg_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FieldAccessMsg_51, 0) = ((MR_Box) (Context_29));
        MR_hl_field(MR_mktag(1), FieldAccessMsg_51, 1) = ((MR_Box) (Var_134));
      }
      {
        Var_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_142, 0) = ((MR_Box) (FieldAccessMsg_51));
        MR_hl_field(MR_mktag(1), Var_142, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        FieldAccessSpec_52 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FieldAccessSpec_52, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), FieldAccessSpec_52, 1) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(0), FieldAccessSpec_52, 2) = ((MR_Box) (Var_142));
      }
      {
        STATE_VARIABLE_PredSpecs_144_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_PredSpecs_144_144, 0) = ((MR_Box) (FieldAccessSpec_52));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_PredSpecs_144_144, 1) = ((MR_Box) (STATE_VARIABLE_PredSpecs_100_100));
      }
    }
    else
      STATE_VARIABLE_PredSpecs_144_144 = STATE_VARIABLE_PredSpecs_100_100;
    succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(STATE_VARIABLE_PredInfo_97_97);
    if (succeeded)
    {
      MR_Word AllowDefnOfBuiltin_54;
      MR_Word Globals_186;

      hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_82, &Globals_186);
      libs__globals__lookup_bool_option_3_p_0(Globals_186, (MR_Integer) 302, &AllowDefnOfBuiltin_54);
      switch (AllowDefnOfBuiltin_54) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word BuiltinMsg_55;
            MR_Word BuiltinSpec_56;
            MR_Word Var_155;

            {
              BuiltinMsg_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), BuiltinMsg_55, 0) = ((MR_Box) (Context_29));
              MR_hl_field(MR_mktag(1), BuiltinMsg_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[29])));
            }
            {
              Var_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_155, 0) = ((MR_Box) (BuiltinMsg_55));
              MR_hl_field(MR_mktag(1), Var_155, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              BuiltinSpec_56 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), BuiltinSpec_56, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), BuiltinSpec_56, 1) = ((MR_Box) ((MR_Unsigned) 16U));
              MR_hl_field(MR_mktag(0), BuiltinSpec_56, 2) = ((MR_Box) (Var_155));
            }
            {
              STATE_VARIABLE_PredSpecs_157_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_PredSpecs_157_157, 0) = ((MR_Box) (BuiltinSpec_56));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_PredSpecs_157_157, 1) = ((MR_Box) (STATE_VARIABLE_PredSpecs_144_144));
            }
          }
          break;
        case (MR_Integer) 1:
          STATE_VARIABLE_PredSpecs_157_157 = STATE_VARIABLE_PredSpecs_144_144;
          break;
      }
    }
    else
      STATE_VARIABLE_PredSpecs_157_157 = STATE_VARIABLE_PredSpecs_144_144;
    hlds__default_func_mode__maybe_add_default_func_mode_3_p_0(STATE_VARIABLE_PredInfo_97_97, &STATE_VARIABLE_PredInfo_158_158, &Var_57);
    if ((STATE_VARIABLE_PredSpecs_157_157 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word PredMap_81;
      MR_Word STATE_VARIABLE_ModuleInfo_162_162;
      MR_Word STATE_VARIABLE_PredInfo_180_180;
      MR_Word STATE_VARIABLE_PredicateTable_181_181;

      if (((MR_tag((MR_Word) MaybeBodyGoal_27)) == (MR_Integer) 0))
      {
        MR_Word BodyGoalSpecs_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeBodyGoal_27, (MR_Integer) 0))));
        MR_Word Clauses0_61;
        MR_Word Clauses_62;
        MR_Word Var_189;
        MR_Word Var_190;
        MR_Word Var_191;
        MR_Word Var_192;
        MR_Word Var_193;
        MR_Word Var_194;
        MR_Word Var_195;
        MR_Word Var_196;
        MR_Word Var_197;

        *STATE_VARIABLE_Specs_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), BodyGoalSpecs_60, STATE_VARIABLE_Specs_0_86);
        hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_158_158, &Clauses0_61);
        Var_189 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clauses0_61, (MR_Integer) 0))));
        Var_190 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clauses0_61, (MR_Integer) 1))));
        Var_191 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clauses0_61, (MR_Integer) 2))));
        Var_192 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clauses0_61, (MR_Integer) 3))));
        Var_193 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clauses0_61, (MR_Integer) 4))));
        Var_194 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clauses0_61, (MR_Integer) 5))));
        Var_195 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clauses0_61, (MR_Integer) 6))));
        Var_196 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clauses0_61, (MR_Integer) 7))));
        Var_197 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Clauses0_61, (MR_Integer) 8))) >> 1)) & (MR_Integer) 1);
        {
          Clauses_62 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Clauses_62, 0) = ((MR_Box) (Var_189));
          MR_hl_field(MR_mktag(0), Clauses_62, 1) = ((MR_Box) (Var_190));
          MR_hl_field(MR_mktag(0), Clauses_62, 2) = ((MR_Box) (Var_191));
          MR_hl_field(MR_mktag(0), Clauses_62, 3) = ((MR_Box) (Var_192));
          MR_hl_field(MR_mktag(0), Clauses_62, 4) = ((MR_Box) (Var_193));
          MR_hl_field(MR_mktag(0), Clauses_62, 5) = ((MR_Box) (Var_194));
          MR_hl_field(MR_mktag(0), Clauses_62, 6) = ((MR_Box) (Var_195));
          MR_hl_field(MR_mktag(0), Clauses_62, 7) = ((MR_Box) (Var_196));
          MR_hl_field(MR_mktag(0), Clauses_62, 8) = (MR_Box) (((((MR_Unsigned) (Var_197) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
        }
        hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(Clauses_62, STATE_VARIABLE_PredInfo_158_158, &STATE_VARIABLE_PredInfo_180_180);
        STATE_VARIABLE_ModuleInfo_162_162 = STATE_VARIABLE_ModuleInfo_0_82;
        *STATE_VARIABLE_QualInfo_85 = STATE_VARIABLE_QualInfo_0_84;
      }
      else
      {
        MR_Word BodyGoal_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeBodyGoal_27, (MR_Integer) 0))));
        MR_Word TVarSet0_64;
        MR_Word ArgTerms_65;
        MR_Word ProcIdsForThisClause_66;
        MR_Word AllProcIds_67;
        MR_Word Goal_68;
        MR_Word VarSet_69;
        MR_Word TVarSet_70;
        MR_Word Warnings_71;
        MR_Word ExistQVars_74;
        MR_Word ArgTypes_75;
        MR_Word ProcIds_76;
        MR_Word STATE_VARIABLE_ModuleInfo_159_159;
        MR_Word STATE_VARIABLE_QualInfo_160_160;
        MR_Word STATE_VARIABLE_Specs_161_161;
        MR_Word STATE_VARIABLE_Specs_164_164;
        MR_Word STATE_VARIABLE_PredInfo_165_165;
        MR_Word STATE_VARIABLE_PredInfo_167_167;
        MR_Word STATE_VARIABLE_PredInfo_170_170;
        MR_Word STATE_VARIABLE_PredInfo_171_171;
        MR_Word Clauses0_187;
        MR_Word Clauses_188;
        MR_Word _ArgTVarSet_73;

        hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_158_158, &Clauses0_187);
        hlds__hlds_pred__pred_info_get_typevarset_2_p_0(STATE_VARIABLE_PredInfo_158_158, &TVarSet0_64);
        hlds__make_hlds__add_clause__select_applicable_modes_15_p_0(MaybeAnnotatedArgTerms_24, ClauseVarSet_20, PredStatus_28, Context_29, PredId_23, STATE_VARIABLE_PredInfo_158_158, &ArgTerms_65, &ProcIdsForThisClause_66, &AllProcIds_67, STATE_VARIABLE_ModuleInfo_0_82, &STATE_VARIABLE_ModuleInfo_159_159, STATE_VARIABLE_QualInfo_0_84, &STATE_VARIABLE_QualInfo_160_160, STATE_VARIABLE_Specs_0_86, &STATE_VARIABLE_Specs_161_161);
        hlds__make_hlds__add_clause__clauses_info_add_clause_24_p_0(ProcIdsForThisClause_66, AllProcIds_67, ClauseVarSet_20, TVarSet0_64, ArgTerms_65, BodyGoal_63, Context_29, MaybeSeqNum_30, PredStatus_28, PredOrFunc_21, Arity_25, GoalType_31, &Goal_68, &VarSet_69, &TVarSet_70, &Warnings_71, Clauses0_187, &Clauses_188, STATE_VARIABLE_ModuleInfo_159_159, &STATE_VARIABLE_ModuleInfo_162_162, STATE_VARIABLE_QualInfo_160_160, STATE_VARIABLE_QualInfo_85, STATE_VARIABLE_Specs_161_161, &STATE_VARIABLE_Specs_164_164);
        hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(Clauses_188, STATE_VARIABLE_PredInfo_158_158, &STATE_VARIABLE_PredInfo_165_165);
        succeeded = ((MR_tag((MR_Word) GoalType_31)) == (MR_Integer) 1);
        if (succeeded)
          hlds__hlds_pred__pred_info_set_goal_type_3_p_0(GoalType_31, STATE_VARIABLE_PredInfo_165_165, &STATE_VARIABLE_PredInfo_167_167);
        else
          hlds__hlds_pred__pred_info_update_goal_type_3_p_0((MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_PredInfo_165_165, &STATE_VARIABLE_PredInfo_167_167);
        hlds__hlds_pred__pred_info_set_typevarset_3_p_0(TVarSet_70, STATE_VARIABLE_PredInfo_167_167, &STATE_VARIABLE_PredInfo_170_170);
        hlds__hlds_pred__pred_info_get_arg_types_4_p_0(STATE_VARIABLE_PredInfo_170_170, &_ArgTVarSet_73, &ExistQVars_74, &ArgTypes_75);
        hlds__hlds_pred__pred_info_set_arg_types_5_p_0(TVarSet_70, ExistQVars_74, ArgTypes_75, STATE_VARIABLE_PredInfo_170_170, &STATE_VARIABLE_PredInfo_171_171);
        ProcIds_76 = hlds__hlds_pred__pred_info_all_procids_1_f_0(STATE_VARIABLE_PredInfo_171_171);
        succeeded = (ProcIds_76 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) GoalType_31)) == (MR_Integer) 1);
          if (succeeded)
          {
          }
          succeeded = !(succeeded);
        }
        if (succeeded)
        {
          MR_Word EndMarkers0_78;
          MR_Word EndMarkers_79;

          hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_171_171, &EndMarkers0_78);
          hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 3, EndMarkers0_78, &EndMarkers_79);
          hlds__hlds_pred__pred_info_set_markers_3_p_0(EndMarkers_79, STATE_VARIABLE_PredInfo_171_171, &STATE_VARIABLE_PredInfo_180_180);
        }
        else
          STATE_VARIABLE_PredInfo_180_180 = STATE_VARIABLE_PredInfo_171_171;
        {
          MR_Word Var_175 = (MR_Word) (PredStatus_28);

          succeeded = (Var_175 == (MR_Word) ((MR_Unsigned) 0U));
        }
        if (!(succeeded))
        {
          MR_Word Var_174 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Clauses_188, (MR_Integer) 8))) & (MR_Integer) 1);

          succeeded = (Var_174 == (MR_Integer) 1);
        }
        if (succeeded)
          *STATE_VARIABLE_Specs_87 = STATE_VARIABLE_Specs_164_164;
        else
        {
          MR_Word SimpleCallId_80;
          MR_Word STATE_VARIABLE_Specs_176_176;

          {
            SimpleCallId_80 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SimpleCallId_80, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_21));
            MR_hl_field(MR_mktag(0), SimpleCallId_80, 1) = ((MR_Box) (PredName_22));
            MR_hl_field(MR_mktag(0), SimpleCallId_80, 2) = ((MR_Box) (Arity_25));
          }
          hlds__make_hlds__make_hlds_warn__warn_singletons_6_p_0(STATE_VARIABLE_ModuleInfo_162_162, SimpleCallId_80, VarSet_69, Goal_68, STATE_VARIABLE_Specs_164_164, &STATE_VARIABLE_Specs_176_176);
          hlds__make_hlds__make_hlds_warn__add_quant_warnings_5_p_0(SimpleCallId_80, VarSet_69, Warnings_71, STATE_VARIABLE_Specs_176_176, STATE_VARIABLE_Specs_87);
        }
      }
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_23)), ((MR_Box) (STATE_VARIABLE_PredInfo_180_180)), PredMap0_39, &PredMap_81);
      hlds__pred_table__predicate_table_set_preds_3_p_0(PredMap_81, STATE_VARIABLE_PredicateTable_88_88, &STATE_VARIABLE_PredicateTable_181_181);
      hlds__hlds_module__module_info_set_predicate_table_3_p_0(STATE_VARIABLE_PredicateTable_181_181, STATE_VARIABLE_ModuleInfo_162_162, STATE_VARIABLE_ModuleInfo_83);
    }
    else
    {
      MR_Word Var_184;
      MR_Word Var_185;

      Var_185 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeBodyGoal_27);
      Var_184 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_185, STATE_VARIABLE_Specs_0_86);
      *STATE_VARIABLE_Specs_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), STATE_VARIABLE_PredSpecs_157_157, Var_184);
      *STATE_VARIABLE_ModuleInfo_83 = STATE_VARIABLE_ModuleInfo_0_82;
      *STATE_VARIABLE_QualInfo_85 = STATE_VARIABLE_QualInfo_0_84;
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
  MR_Word STATE_VARIABLE_ModuleInfo_0_46,
  MR_Word * STATE_VARIABLE_ModuleInfo_47,
  MR_Word STATE_VARIABLE_QualInfo_0_48,
  MR_Word * STATE_VARIABLE_QualInfo_49,
  MR_Word STATE_VARIABLE_Specs_0_50,
  MR_Word * STATE_VARIABLE_Specs_51)
{
  {
    MR_bool succeeded;
    MR_String PredIdStr_28;
    MR_Word ContextPieces_29;
    MR_Word ModeAnnotations_30;
    MR_Word ModeAnnotationSpecs_31;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_55;
    MR_Word Var_56;

    *AllProcIds_24 = hlds__hlds_pred__pred_info_all_procids_1_f_0(PredInfo_21);
    PredIdStr_28 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(STATE_VARIABLE_ModuleInfo_0_46, PredId_20);
    Var_53 = (MR_Word) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[62]));
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_56, 0) = ((MR_Box) (PredIdStr_28));
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[31])));
    }
    {
      Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_55));
    }
    ContextPieces_29 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_52);
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
                succeeded = hlds__hlds_pred__pred_info_pragma_goal_type_1_p_0(PredInfo_21);
                if (succeeded)
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *ApplProcIds_23 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (*AllProcIds_24));
                  }
                else
                  *ApplProcIds_23 = (MR_Word) ((MR_Unsigned) 0U);
                *STATE_VARIABLE_QualInfo_49 = STATE_VARIABLE_QualInfo_0_48;
                *STATE_VARIABLE_Specs_51 = STATE_VARIABLE_Specs_0_50;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Pieces_43;
                MR_Word Msg_44;
                MR_Word Spec_45;
                MR_Word Var_68;
                MR_Word Var_84;
                MR_Word Var_85;
                MR_Word Var_89;

                {
                  Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Var_56));
                  MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[37])));
                }
                {
                  Pieces_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_43, 0) = ((MR_Box) (Var_53));
                  MR_hl_field(MR_mktag(1), Pieces_43, 1) = ((MR_Box) (Var_68));
                }
                {
                  Var_85 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (Pieces_43));
                }
                {
                  Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (Var_85));
                  MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Msg_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Msg_44, 0) = ((MR_Box) (Context_19));
                  MR_hl_field(MR_mktag(1), Msg_44, 1) = ((MR_Box) (Var_84));
                }
                {
                  Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (Msg_44));
                  MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Spec_45 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Spec_45, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), Spec_45, 1) = ((MR_Box) ((MR_Unsigned) 16U));
                  MR_hl_field(MR_mktag(0), Spec_45, 2) = ((MR_Box) (Var_89));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_Specs_51 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_45));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_50));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *ApplProcIds_23 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (*AllProcIds_24));
                }
                *STATE_VARIABLE_QualInfo_49 = STATE_VARIABLE_QualInfo_0_48;
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
            MR_Word STATE_VARIABLE_Specs_93_93;
            MR_Word Var_92 = (MR_Word) (PredStatus_18);
            MR_Integer ProcId_42;

            succeeded = (Var_92 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ModeList_35 = ModeList0_34;
              STATE_VARIABLE_Specs_93_93 = STATE_VARIABLE_Specs_0_50;
              *STATE_VARIABLE_QualInfo_49 = STATE_VARIABLE_QualInfo_0_48;
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
              hlds__make_hlds__qual_info__qual_info_get_mq_info_2_p_0(STATE_VARIABLE_QualInfo_0_48, &MQInfo0_38);
              parse_tree__module_qual__qualify_clause_mode_list_8_p_0(InInt_37, Context_19, ModeList0_34, &ModeList_35, MQInfo0_38, &MQInfo_39, STATE_VARIABLE_Specs_0_50, &STATE_VARIABLE_Specs_93_93);
              hlds__make_hlds__qual_info__qual_info_set_mq_info_3_p_0(MQInfo_39, STATE_VARIABLE_QualInfo_0_48, STATE_VARIABLE_QualInfo_49);
            }
            hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_21, &Procs_40);
            mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs_40, &ExistingProcs_41);
            succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(STATE_VARIABLE_ModuleInfo_0_46, ExistingProcs_41, ModeList_35, &ProcId_42);
            if (succeeded)
            {
              MR_Word Var_95;

              {
                Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (ProcId_42));
                MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *ApplProcIds_23 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_95));
              }
              *STATE_VARIABLE_Specs_51 = STATE_VARIABLE_Specs_93_93;
            }
            else
            {
              hlds__make_hlds__add_clause__undeclared_mode_error_8_p_0(ModeList_35, VarSet_17, PredId_20, PredInfo_21, STATE_VARIABLE_ModuleInfo_0_46, Context_19, STATE_VARIABLE_Specs_93_93, STATE_VARIABLE_Specs_51);
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
      *STATE_VARIABLE_Specs_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ModeAnnotationSpecs_31, STATE_VARIABLE_Specs_0_50);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *ApplProcIds_23 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (*AllProcIds_24));
      }
      *STATE_VARIABLE_QualInfo_49 = STATE_VARIABLE_QualInfo_0_48;
    }
    *STATE_VARIABLE_ModuleInfo_47 = STATE_VARIABLE_ModuleInfo_0_46;
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
      MR_Word Var_69;
      MR_String Var_70;
      MR_Word Var_71;
      MR_Word Var_72;
      MR_Word Var_73;

      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_41, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(MR_mktag(3), Var_41, 1) = ((MR_Box) (ArgNum_4));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[47])));
      }
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[61])));
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
                      MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
                  MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
        ArgTerm_24 = MAArgTerm_21;
        switch (MR_tag((MR_Word) STATE_VARIABLE_Annotations_0_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(STATE_VARIABLE_Annotations_0_6)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                STATE_VARIABLE_Annotations_49_49 = (MR_Word) ((MR_Unsigned) 4U);
                break;
              case (MR_Integer) 1:
                STATE_VARIABLE_Annotations_49_49 = (MR_Word) ((MR_Unsigned) 4U);
                break;
              case (MR_Integer) 2:
                STATE_VARIABLE_Annotations_49_49 = (MR_Word) ((MR_Unsigned) 8U);
                break;
            }
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_Annotations_49_49 = (MR_Word) ((MR_Unsigned) 8U);
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

static MR_Box MR_CALL 
hlds__make_hlds__add_clause__undeclared_mode_error_8_p_0_1(
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
hlds__make_hlds__add_clause__undeclared_mode_error_8_p_0(
  MR_Word ModeList_9,
  MR_Word VarSet_10,
  MR_Word PredId_11,
  MR_Word PredInfo_12,
  MR_Word ModuleInfo_13,
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
    MR_Word Var_115;

    PredIdPieces_16 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_13, (MR_Integer) 1, PredId_11);
    parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_p_0(ModeList_9, &StrippedModeList_17);
    PredOrFunc_18 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_12);
    Name_19 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_12);
    Var_35 = mercury__varset__coerce_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), VarSet_10);
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
      MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[14])));
    }
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[55])));
      MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_50));
    }
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_47));
    }
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[54])));
      MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_45));
    }
    Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PredIdPieces_16, Var_42);
    MainPieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[53])), Var_41);
    ProcIds_23 = hlds__hlds_pred__pred_info_all_procids_1_f_0(PredInfo_12);
    if ((ProcIds_23 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_99;
      MR_Word Var_100;

      {
        Var_100 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_100, 0) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(3), Var_100, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_18));
      }
      {
        Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (Var_100));
        MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[39])));
      }
      {
        VerbosePieces_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), VerbosePieces_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[56])));
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
          MR_hl_field(MR_mktag(3), Var_83, 0) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(MR_mktag(3), Var_83, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_18));
        }
        {
          Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (Var_83));
          MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[43])));
        }
        {
          Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[57])));
          MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (Var_82));
        }
        Var_92 = hlds__make_hlds__add_clause__mode_decl_for_pred_info_to_pieces_2_f_0(PredInfo_12, ProcIdsHead_25);
        Var_91 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_92, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[59])));
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
          MR_hl_field(MR_mktag(3), Var_62, 0) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(MR_mktag(3), Var_62, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_18));
        }
        {
          Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Var_62));
          MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[45])));
        }
        {
          Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[60])));
          MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_61));
        }
        {
          Var_73 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (&hlds__make_hlds__add_clause_scalar_common_5[0]));
          MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) (hlds__make_hlds__add_clause__undeclared_mode_error_8_p_0_1));
          MR_hl_field(MR_mktag(0), Var_73, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_73, 3) = ((MR_Box) (PredInfo_12));
        }
        Var_72 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__make_hlds__add_clause_scalar_common_1[2]), Var_73, ProcIds_23);
        Var_71 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(Var_72, (MR_Word) ((MR_Unsigned) 0U));
        Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_71, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[59])));
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
      Msg_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Msg_29, 0) = ((MR_Box) (Context_14));
      MR_hl_field(MR_mktag(1), Msg_29, 1) = ((MR_Box) (Var_107));
    }
    {
      Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (Msg_29));
      MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_30 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_30, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_30, 1) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(0), Spec_30, 2) = ((MR_Box) (Var_115));
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
      MR_hl_field(MR_mktag(1), Var_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[51])));
    }
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[49])));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (Var_8));
    }
    return HeadVar__3_3;
  }
}

static void MR_CALL 
hlds__make_hlds__add_clause__add_clause_progress_msg_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word PredInfo_10,
  MR_Word PredOrFunc_11,
  MR_Word PredName_12,
  MR_Word MaybeAnnotatedArgTerms_13,
  MR_Integer ArityAdjustment_14)
{
  {
    MR_Word Globals_16;
    MR_Word VeryVerbose_17;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_9, &Globals_16);
    libs__globals__lookup_bool_option_3_p_0(Globals_16, (MR_Integer) 64, &VeryVerbose_17);
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
          MR_Integer PredArity0_20;
          MR_Integer PredArity_21;
          MR_Integer OrigArity_22;
          MR_Word SNA_23;
          MR_Word Var_27;
          MR_Integer Var_32;
          MR_String Var_54;

          hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_10, &MsgClauses_18);
          Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MsgClauses_18, (MR_Integer) 5))));
          NumClauses_19 = hlds__hlds_clauses__num_clauses_in_clauses_rep_1_f_0(Var_27);
          Var_32 = (MR_Integer) ((MR_Unsigned) NumClauses_19 + (MR_Unsigned) 1);
          mercury__io__write_string_3_p_0((MR_String) "% Processing clause ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__make_hlds__add_clause_scalar_common_2[1]), Var_32, &Var_54);
          mercury__io__write_string_3_p_0(Var_54);
          mercury__io__write_string_3_p_0((MR_String) " for ");
          parse_tree__prog_out__write_pred_or_func_3_p_0(PredOrFunc_11);
          mercury__io__write_string_3_p_0((MR_String) " \140");
          mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__add_clause_scalar_common_1[0]), MaybeAnnotatedArgTerms_13, &PredArity0_20);
          PredArity_21 = (MR_Integer) ((MR_Unsigned) PredArity0_20 + (MR_Unsigned) ArityAdjustment_14);
          parse_tree__prog_util__adjust_func_arity_3_p_1(PredOrFunc_11, &OrigArity_22, PredArity_21);
          {
            SNA_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SNA_23, 0) = ((MR_Box) (PredName_12));
            MR_hl_field(MR_mktag(0), SNA_23, 1) = ((MR_Box) (OrigArity_22));
          }
          parse_tree__prog_out__write_sym_name_and_arity_3_p_0(SNA_23);
          mercury__io__write_string_3_p_0((MR_String) "\'...\n");
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

    succeeded = hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__675__1_1_f_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_104);
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
  MR_Word CVarSet_27,
  MR_Word TVarSet0_28,
  MR_Word ArgTerms_29,
  MR_Word BodyGoal_30,
  MR_Word Context_31,
  MR_Word MaybeSeqNum_32,
  MR_Word PredStatus_33,
  MR_Word PredOrFunc_34,
  MR_Integer Arity_35,
  MR_Word GoalType_36,
  MR_Word * Goal_37,
  MR_Word * VarSet_38,
  MR_Word * TVarSet_39,
  MR_Word * QuantWarnings_40,
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
        mercury__varset__create_name_var_map_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet0_28, &TVarNameMap_56);
        break;
    }
    Var_90 = (MR_Word) (PredStatus_33);
    succeeded = (Var_90 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      MaybeOptImported_57 = (MR_Integer) 1;
    else
      MaybeOptImported_57 = (MR_Integer) 0;
    hlds__make_hlds__qual_info__update_qual_info_6_p_0(TVarNameMap_56, TVarSet0_28, ExplicitVarTypes0_47, MaybeOptImported_57, STATE_VARIABLE_QualInfo_0_86, &STATE_VARIABLE_QualInfo_91_91);
    mercury__varset__merge_renaming_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet0_45, CVarSet_27, &VarSet1_58, &Renaming_59);
    hlds__make_hlds__add_clause__add_clause_transform_20_p_0(Renaming_59, HeadVars_49, ArgTerms_29, BodyGoal_30, Context_31, PredOrFunc_34, Arity_35, GoalType_36, &Goal0_60, VarSet1_58, VarSet_38, QuantWarnings_40, &StateVarWarnings_61, &StateVarErrors_62, STATE_VARIABLE_ModuleInfo_0_84, STATE_VARIABLE_ModuleInfo_85, STATE_VARIABLE_QualInfo_91_91, &STATE_VARIABLE_QualInfo_93_93, STATE_VARIABLE_Specs_0_88, &STATE_VARIABLE_Specs_94_94);
    hlds__make_hlds__qual_info__qual_info_get_tvarset_2_p_0(STATE_VARIABLE_QualInfo_93_93, TVarSet_39);
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
      *Goal_37 = hlds__make_goal__true_goal_0_f_0();
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

      *Goal_37 = Goal0_60;
      switch (HasForeignClauses_53) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Clause_116;

            {
              Clause_116 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Clause_116, 0) = ((MR_Box) (ApplModeIds0_25));
              MR_hl_field(MR_mktag(0), Clause_116, 1) = ((MR_Box) (*Goal_37));
              MR_hl_field(MR_mktag(0), Clause_116, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Clause_116, 3) = ((MR_Box) (Context_31));
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
                MR_hl_field(MR_mktag(0), Clause_79, 1) = ((MR_Box) (*Goal_37));
                MR_hl_field(MR_mktag(0), Clause_79, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), Clause_79, 3) = ((MR_Box) (Context_31));
                MR_hl_field(MR_mktag(0), Clause_79, 4) = ((MR_Box) (StateVarWarnings_61));
              }
              hlds__hlds_clauses__add_clause_3_p_0(Clause_79, ClausesRep1_67, &ClausesRep_75);
            }
          }
          break;
      }
      hlds__make_hlds__qual_info__qual_info_get_var_types_2_p_0(*STATE_VARIABLE_QualInfo_87, &ExplicitVarTypes_80);
      hlds__hlds_clauses__add_clause_item_number_5_p_0(MaybeSeqNum_32, Context_31, (MR_Integer) 0, ItemNumbers0_51, &ItemNumbers_81);
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
  MR_Word GoalType_28,
  MR_Word * Goal_29,
  MR_Word STATE_VARIABLE_VarSet_0_62,
  MR_Word * STATE_VARIABLE_VarSet_63,
  MR_Word * QuantWarnings_31,
  MR_Word * StateVarWarnings_32,
  MR_Word * StateVarErrors_33,
  MR_Word STATE_VARIABLE_ModuleInfo_0_64,
  MR_Word * STATE_VARIABLE_ModuleInfo_65,
  MR_Word STATE_VARIABLE_QualInfo_0_66,
  MR_Word * STATE_VARIABLE_QualInfo_67,
  MR_Word STATE_VARIABLE_Specs_0_68,
  MR_Word * STATE_VARIABLE_Specs_69)
{
  {
    MR_bool succeeded;
    MR_Word HeadVarList_40;
    MR_Word ArgTerms1_41;
    MR_Word ArgTerms_42;
    MR_Word FinalSVarMap_43;
    MR_Word InitialSVarState_44;
    MR_Word HeadGoal_46;
    MR_Word BodyGoal_51;
    MR_Word FinalSVarState_54;
    MR_Word Goal0_55;
    MR_Word FoundTraceGoal_56;
    MR_Word Goal1_57;
    MR_Word VarTypes0_58;
    MR_Word EmptyRttiVarmaps_59;
    MR_Word VarTypes_60;
    MR_Word STATE_VARIABLE_VarSet_71_71;
    MR_Word STATE_VARIABLE_SVarStore_73_73;
    MR_Word STATE_VARIABLE_Specs_74_74;
    MR_Word STATE_VARIABLE_SVarState_75_75;
    MR_Word STATE_VARIABLE_SVarStore_76_76;
    MR_Word STATE_VARIABLE_VarSet_77_77;
    MR_Word STATE_VARIABLE_ModuleInfo_78_78;
    MR_Word STATE_VARIABLE_QualInfo_79_79;
    MR_Word STATE_VARIABLE_Specs_80_80;
    MR_Word STATE_VARIABLE_SVarStore_87_87;
    MR_Word STATE_VARIABLE_VarSet_88_88;
    MR_Word STATE_VARIABLE_QualInfo_90_90;
    MR_Word Var_61;

    HeadVarList_40 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) (&hlds__make_hlds__add_clause_scalar_common_1[3]), HeadVars_22);
    parse_tree__prog_rename__rename_vars_in_term_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_21, ArgTerms0_23, &ArgTerms1_41);
    hlds__make_hlds__state_var__svar_prepare_for_clause_head_9_p_0(ArgTerms1_41, &ArgTerms_42, STATE_VARIABLE_VarSet_0_62, &STATE_VARIABLE_VarSet_71_71, &FinalSVarMap_43, &InitialSVarState_44, &STATE_VARIABLE_SVarStore_73_73, STATE_VARIABLE_Specs_0_68, &STATE_VARIABLE_Specs_74_74);
    succeeded = ((MR_tag((MR_Word) GoalType_28)) == (MR_Integer) 1);
    if (succeeded)
    {
      HeadGoal_46 = hlds__make_goal__true_goal_0_f_0();
      STATE_VARIABLE_SVarStore_76_76 = STATE_VARIABLE_SVarStore_73_73;
      STATE_VARIABLE_SVarState_75_75 = InitialSVarState_44;
      STATE_VARIABLE_Specs_80_80 = STATE_VARIABLE_Specs_74_74;
      STATE_VARIABLE_QualInfo_79_79 = STATE_VARIABLE_QualInfo_0_66;
      STATE_VARIABLE_ModuleInfo_78_78 = STATE_VARIABLE_ModuleInfo_0_64;
      STATE_VARIABLE_VarSet_77_77 = STATE_VARIABLE_VarSet_71_71;
    }
    else
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
      hlds__make_hlds__superhomogeneous__insert_arg_unifications_17_p_0(HeadVarsArgTerms_49, Context_25, ArgContext_47, HeadGoal0_48, &HeadGoal1_50, InitialSVarState_44, &STATE_VARIABLE_SVarState_75_75, STATE_VARIABLE_SVarStore_73_73, &STATE_VARIABLE_SVarStore_76_76, STATE_VARIABLE_VarSet_71_71, &STATE_VARIABLE_VarSet_77_77, STATE_VARIABLE_ModuleInfo_0_64, &STATE_VARIABLE_ModuleInfo_78_78, STATE_VARIABLE_QualInfo_0_66, &STATE_VARIABLE_QualInfo_79_79, STATE_VARIABLE_Specs_74_74, &STATE_VARIABLE_Specs_80_80);
      hlds__goal_util__attach_features_to_all_goals_4_p_1((MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[48])), (MR_Integer) 1, HeadGoal1_50, &HeadGoal_46);
    }
    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0((MR_Integer) 0, ParseTreeBodyGoal_24, Renaming_21, &BodyGoal_51, STATE_VARIABLE_SVarState_75_75, &FinalSVarState_54, STATE_VARIABLE_SVarStore_76_76, &STATE_VARIABLE_SVarStore_87_87, STATE_VARIABLE_VarSet_77_77, &STATE_VARIABLE_VarSet_88_88, STATE_VARIABLE_ModuleInfo_78_78, STATE_VARIABLE_ModuleInfo_65, STATE_VARIABLE_QualInfo_79_79, &STATE_VARIABLE_QualInfo_90_90, STATE_VARIABLE_Specs_80_80, STATE_VARIABLE_Specs_69);
    hlds__make_hlds__state_var__svar_finish_clause_body_10_p_0(Context_25, FinalSVarMap_43, HeadGoal_46, BodyGoal_51, &Goal0_55, InitialSVarState_44, FinalSVarState_54, STATE_VARIABLE_SVarStore_87_87, StateVarWarnings_32, StateVarErrors_33);
    hlds__make_hlds__qual_info__qual_info_get_found_trace_goal_2_p_0(STATE_VARIABLE_QualInfo_90_90, &FoundTraceGoal_56);
    switch (FoundTraceGoal_56) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Goal1_57 = Goal0_55;
        break;
      case (MR_Integer) 1:
        hlds__pre_quantification__separate_trace_goal_only_locals_2_p_0(Goal0_55, &Goal1_57);
        break;
    }
    hlds__make_hlds__qual_info__qual_info_get_var_types_2_p_0(STATE_VARIABLE_QualInfo_90_90, &VarTypes0_58);
    hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&EmptyRttiVarmaps_59);
    hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 0, HeadVarList_40, QuantWarnings_31, Goal1_57, Goal_29, STATE_VARIABLE_VarSet_88_88, STATE_VARIABLE_VarSet_63, VarTypes0_58, &VarTypes_60, EmptyRttiVarmaps_59, &Var_61);
    hlds__make_hlds__qual_info__qual_info_set_var_types_3_p_0(VarTypes_60, STATE_VARIABLE_QualInfo_90_90, STATE_VARIABLE_QualInfo_67);
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
