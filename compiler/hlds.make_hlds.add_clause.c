/*
** Automatically generated from `add_clause.m'
** by the Mercury compiler,
** version rotd-2018-05-24
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
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.add_pred.mih"
#include "hlds.const_struct.mih"
#include "hlds.default_func_mode.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_code_util.mih"
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
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
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
#include "random.mih"
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
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
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
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
#include "mdbcomp.feedback.automatic_parallelism.mih"
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
hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__667__1_1_f_0(
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
  MR_Word STATE_VARIABLE_ModuleInfo_0_88,
  MR_Word * STATE_VARIABLE_ModuleInfo_89,
  MR_Word STATE_VARIABLE_QualInfo_0_90,
  MR_Word * STATE_VARIABLE_QualInfo_91,
  MR_Word STATE_VARIABLE_Specs_0_92,
  MR_Word * STATE_VARIABLE_Specs_93);

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
  MR_Word STATE_VARIABLE_VarSet_0_61,
  MR_Word * STATE_VARIABLE_VarSet_62,
  MR_Word * QuantWarnings_31,
  MR_Word * StateVarWarnings_32,
  MR_Word * StateVarErrors_33,
  MR_Word STATE_VARIABLE_ModuleInfo_0_63,
  MR_Word * STATE_VARIABLE_ModuleInfo_64,
  MR_Word STATE_VARIABLE_QualInfo_0_65,
  MR_Word * STATE_VARIABLE_QualInfo_66,
  MR_Word STATE_VARIABLE_Specs_0_67,
  MR_Word * STATE_VARIABLE_Specs_68);

static MR_bool MR_CALL 
hlds__make_hlds__add_clause____Unify____mode_annotations_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_clause____Compare____mode_annotations_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_1[75][2];

static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_2[4][1];

static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_3[1][5];

static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_4[1][3];

static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_5[1][6];




static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_1[75][2] = {
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "at the end of the preceding line."))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "inadvertently writing a period instead of a comma"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "This is usually caused by"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[11])))
  },
  /* row 14 */
  {
    ((MR_Box) (&hlds__make_hlds__add_clause_scalar_common_2[0])),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) (&hlds__make_hlds__add_clause_scalar_common_1[14]))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[13])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Attempt to define a clause for"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[16])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[5])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of the constructor a different name."))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "to a field update, give the field"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[21])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "function, for example to check the input"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[23])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "To supply your own definition for a field access"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[25])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "are automatically generated by the compiler."))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[27])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Clauses for field access functions"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[29])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: clause for builtin."))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 34 */
  {
    ((MR_Box) (&hlds__make_hlds__add_clause_scalar_common_2[1])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[5])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "have mode annotations."))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[5])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "syntax error: some but not all arguments"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[38])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[40])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[41])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ".)"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[5])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 18)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is:"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[46])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "are the following:"))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[46])))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "argument:"))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[5])))
  },
  /* row 53 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) ":- mode"))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In clause for"))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: mode annotation specifies undeclared mode"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "(There are no declared modes for this"))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The declared mode for this"))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 18)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The declared modes for this"))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in the"))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In the head of a clause for"))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: clause for automatically generated"))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "field access"))
  },
  /* row 70 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[31])))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_clause_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 72 */
  {
    ((MR_Box) (&hlds__make_hlds__add_clause_scalar_common_2[3])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "clause"))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[73]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_2[4][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) ","))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[33])))
  },
  /* row 2 */
  {
    (MR_Box) (((MR_Unsigned) (((MR_Box) ((MR_Integer) 0))) | (((((MR_Unsigned) (((MR_Box) ((MR_Integer) 0))) << (MR_Integer) 1)) | (((((MR_Unsigned) (((MR_Box) ((MR_Integer) 0))) << (MR_Integer) 2)) | (((((MR_Unsigned) (((MR_Box) ((MR_Integer) 0))) << (MR_Integer) 3)) | (((MR_Unsigned) (((MR_Box) ((MR_Integer) 0))) << (MR_Integer) 4))))))))))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[18])))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_3[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&hlds__make_hlds__add_clause__list__pti_list_1__plain_builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_4[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&hlds__make_hlds__add_clause_scalar_common_3[0])),
    ((MR_Box) (hlds__make_hlds__add_clause__clauses_info_add_clause_24_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_5[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__make_hlds__add_clause__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



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
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_1 = {
  (MR_String) "ma_none",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__field_types_mode_annotations_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_3 = {
  (MR_String) "ma_mixed",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
    (MR_Integer) 3,
    MR_SECTAG_LOCAL,
    hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_stag_ordered_mode_annotations_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_stag_ordered_mode_annotations_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__add_clause____Unify____mode_annotations_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_clause____Compare____mode_annotations_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_clause",
  (MR_String) "mode_annotations",
  {     hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_name_ordered_mode_annotations_0 },
  {     hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_ptag_ordered_mode_annotations_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__functor_number_map_mode_annotations_0
};

static MR_bool MR_CALL 
hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__667__1_1_f_0(
  MR_Word LambdaHeadVar__1_103,
  MR_Word * LambdaHeadVar__2_104)
{
  {
    MR_bool succeeded;
    MR_Word ApplProcIds_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_103, (MR_Integer) 0))));
    MR_Word Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_103, (MR_Integer) 2))));
    MR_Word Var_125 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_103, (MR_Integer) 1))));
    MR_Word Var_126 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_103, (MR_Integer) 3))));
    MR_Word Var_127 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_103, (MR_Integer) 4))));
    MR_Word Var_71;

    succeeded = ((MR_tag((MR_Word) Var_105)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_105, (MR_Integer) 0))));
      if ((ApplProcIds_72 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_clause", (MR_String) "predicate \140hlds.make_hlds.add_clause.clauses_info_add_clause\'/24", (MR_String) "all_modes foreign_proc");
      }
      else
        *LambdaHeadVar__2_104 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ApplProcIds_72, (MR_Integer) 0))));
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

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
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
    MR_Tuple Var_32;
    MR_Word PredIdPrime_40;
    MR_Word Var_60;

    succeeded = hlds__make_hlds__state_var__illegal_state_var_func_result_4_p_0(PredOrFunc_17, ArgTerms0_19, &SVar_28, &SVarCtxt_29);
    if (succeeded)
    {
      MR_Tuple Var_58;

      {
        Var_58 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (SVar_28));
        MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (SVarCtxt_29));
      }
      {
        IllegalSVarResult_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), IllegalSVarResult_30, 0) = ((MR_Box) (Var_58));
      }
    }
    else
      IllegalSVarResult_30 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    succeeded = ((MR_tag((MR_Word) IllegalSVarResult_30)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_32 = ((MR_Tuple) ((MR_hl_field(MR_mktag(1), IllegalSVarResult_30, (MR_Integer) 0))));
      ArityAdjustment_31 = (MR_Integer) -1;
    }
    else
      ArityAdjustment_31 = (MR_Integer) 0;
    hlds__make_hlds__state_var__expand_bang_state_pairs_in_terms_2_p_0(ArgTerms0_19, &ArgTerms_33);
    hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_0_52, &ModuleName_34);
    mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__add_clause_scalar_common_1[0]), ArgTerms_33, &Arity0_35);
    Arity_36 = (MR_Integer) ((MR_Unsigned) Arity0_35 + (MR_Unsigned) ArityAdjustment_31);
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_52, &PredicateTable_38);
    hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredicateTable_38, (MR_Integer) 0, PredOrFunc_17, PredName_18, Arity_36, &PredIds_39);
    succeeded = ((MR_tag((MR_Word) PredIds_39)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      PredIdPrime_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_39, (MR_Integer) 0))));
      Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_39, (MR_Integer) 1))));
      succeeded = (Var_60 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word Var_42;

      succeeded = ((MR_tag((MR_Word) GoalType_24)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalType_24, (MR_Integer) 0))));
        {
          MR_String NameString_43;
          MR_String UnexpectedMsg_44;
          MR_String Var_123;
          MR_String Var_125;
          MR_String Var_126;
          MR_String Var_128;
          MR_String Var_129;
          MR_String Var_131;

          NameString_43 = mdbcomp__sym_name__sym_name_to_string_1_f_0(PredName_18);
          Var_123 = mercury__string__f_43_43_2_f_0(NameString_43, (MR_String) ").\n");
          Var_125 = mercury__string__f_43_43_2_f_0((MR_String) " (", Var_123);
          Var_126 = mercury__string__f_43_43_2_f_0((MR_String) "name to an existing predicate", Var_125);
          Var_128 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_126);
          Var_129 = mercury__string__f_43_43_2_f_0((MR_String) "for a promise with an identical", Var_128);
          Var_131 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_129);
          UnexpectedMsg_44 = mercury__string__f_43_43_2_f_0((MR_String) "Attempted to introduce a predicate", Var_131);
          {
            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_clause", (MR_String) "predicate \140hlds.make_hlds.add_clause.module_add_clause\'/15", UnexpectedMsg_44);
            return;
          }
        }
      }
      else
      {
      }
      hlds__make_hlds__add_clause__module_add_clause_2_19_p_0(ClauseVarSet_16, PredOrFunc_17, PredName_18, PredIdPrime_40, ArgTerms_33, Arity_36, ArityAdjustment_31, MaybeBodyGoal_20, Status_21, Context_22, MaybeSeqNum_23, GoalType_24, IllegalSVarResult_30, STATE_VARIABLE_ModuleInfo_0_52, STATE_VARIABLE_ModuleInfo_53, STATE_VARIABLE_QualInfo_0_54, STATE_VARIABLE_QualInfo_55, STATE_VARIABLE_Specs_0_56, STATE_VARIABLE_Specs_57);
    }
    else
    {
      MR_Word MaybePredId_134;
      MR_Word STATE_VARIABLE_Specs_107_136;
      MR_Word STATE_VARIABLE_ModuleInfo_108_137;
      MR_String Var_76;

      Var_76 = mdbcomp__sym_name__unqualify_name_1_f_0(PredName_18);
      succeeded = (strcmp(Var_76, (MR_String) ",") == 0);
      if (succeeded)
        succeeded = (Arity_36 == (MR_Integer) 2);
      if (succeeded)
      {
        MR_Word Msg_46;
        MR_Word Spec_47;
        MR_Word Var_105;

        MaybePredId_134 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        {
          Msg_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Msg_46, 0) = ((MR_Box) (Context_22));
          MR_hl_field(MR_mktag(0), Msg_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[72])));
        }
        {
          Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (Msg_46));
          MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Spec_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), Spec_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
          MR_hl_field(MR_mktag(0), Spec_47, 2) = ((MR_Box) (Var_105));
        }
        {
          STATE_VARIABLE_Specs_107_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_107_136, 0) = ((MR_Box) (Spec_47));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_107_136, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_56));
        }
        STATE_VARIABLE_ModuleInfo_108_137 = STATE_VARIABLE_ModuleInfo_0_52;
      }
      else
      {
        MR_Word NewPredId_50;
        MR_Word Var_48;

        succeeded = ((MR_tag((MR_Word) GoalType_24)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalType_24, (MR_Integer) 0))));
          {
            MR_Word HeadVars_49;

            HeadVars_49 = mercury__term__term_list_to_var_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgTerms_33);
            hlds__add_pred__preds_add_implicit_for_assertion_10_p_0(STATE_VARIABLE_ModuleInfo_0_52, &STATE_VARIABLE_ModuleInfo_108_137, ModuleName_34, PredName_18, Arity_36, PredOrFunc_17, HeadVars_49, Status_21, Context_22, &NewPredId_50);
            STATE_VARIABLE_Specs_107_136 = STATE_VARIABLE_Specs_0_56;
          }
        }
        else
        {
          MR_Word Var_111;

          {
            Var_111 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_111, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(3), Var_111, 1) = ((MR_Box) (PredName_18));
          }
          hlds__add_pred__preds_add_implicit_report_error_14_p_0(STATE_VARIABLE_ModuleInfo_0_52, &STATE_VARIABLE_ModuleInfo_108_137, ModuleName_34, PredName_18, Arity_36, PredOrFunc_17, Status_21, (MR_Integer) 0, Context_22, Var_111, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[74])), &NewPredId_50, STATE_VARIABLE_Specs_0_56, &STATE_VARIABLE_Specs_107_136);
        }
        {
          MaybePredId_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybePredId_134, 0) = ((MR_Box) (NewPredId_50));
        }
      }
      if ((MaybePredId_134 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *STATE_VARIABLE_ModuleInfo_53 = STATE_VARIABLE_ModuleInfo_108_137;
        *STATE_VARIABLE_QualInfo_55 = STATE_VARIABLE_QualInfo_0_54;
        *STATE_VARIABLE_Specs_57 = STATE_VARIABLE_Specs_107_136;
      }
      else
      {
        MR_Word PredId_132 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredId_134, (MR_Integer) 0))));

        hlds__make_hlds__add_clause__module_add_clause_2_19_p_0(ClauseVarSet_16, PredOrFunc_17, PredName_18, PredId_132, ArgTerms_33, Arity_36, ArityAdjustment_31, MaybeBodyGoal_20, Status_21, Context_22, MaybeSeqNum_23, GoalType_24, IllegalSVarResult_30, STATE_VARIABLE_ModuleInfo_108_137, STATE_VARIABLE_ModuleInfo_53, STATE_VARIABLE_QualInfo_0_54, STATE_VARIABLE_QualInfo_55, STATE_VARIABLE_Specs_107_136, STATE_VARIABLE_Specs_57);
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
  MR_Word STATE_VARIABLE_ModuleInfo_0_88,
  MR_Word * STATE_VARIABLE_ModuleInfo_89,
  MR_Word STATE_VARIABLE_QualInfo_0_90,
  MR_Word * STATE_VARIABLE_QualInfo_91,
  MR_Word STATE_VARIABLE_Specs_0_92,
  MR_Word * STATE_VARIABLE_Specs_93)
{
  {
    MR_bool succeeded;
    MR_Word PredMap0_39;
    MR_Word STATE_VARIABLE_PredicateTable_94_94;
    MR_Word STATE_VARIABLE_PredInfo_95_95;
    MR_Word STATE_VARIABLE_PredInfo_118_118;
    MR_Word STATE_VARIABLE_PredSpecs_119_119;
    MR_Word STATE_VARIABLE_PredSpecs_121_121;
    MR_Word STATE_VARIABLE_PredSpecs_165_165;
    MR_Word STATE_VARIABLE_PredSpecs_178_178;
    MR_Word STATE_VARIABLE_PredInfo_179_179;
    MR_Box conv0_STATE_VARIABLE_PredInfo_95_95;
    MR_Word VeryVerbose_42;
    MR_Word Globals_207;
    MR_Word Var_113;
    MR_Integer FuncArity_52;
    MR_Word Var_122;
    MR_Integer Var_245;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_123;
    MR_Word Var_63;

    hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_88, &STATE_VARIABLE_PredicateTable_94_94);
    hlds__pred_table__predicate_table_get_preds_2_p_0(STATE_VARIABLE_PredicateTable_94_94, &PredMap0_39);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredMap0_39, ((MR_Box) (PredId_23)), &conv0_STATE_VARIABLE_PredInfo_95_95);
    STATE_VARIABLE_PredInfo_95_95 = ((MR_Word) (conv0_STATE_VARIABLE_PredInfo_95_95));
    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_88, &Globals_207);
    libs__globals__lookup_bool_option_3_p_0(Globals_207, (MR_Integer) 60, &VeryVerbose_42);
    switch (VeryVerbose_42) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word MsgClauses_43;
          MR_Integer NumClauses_44;
          MR_Integer PredArity0_45;
          MR_Integer PredArity_46;
          MR_Integer OrigArity_47;
          MR_Word Var_98;
          MR_Integer Var_103;
          MR_Word Var_109;
          MR_String Var_249;
          MR_Word Var_211;
          MR_Word Var_212;
          MR_Word Var_213;
          MR_Word Var_214;
          MR_Word Var_215;
          MR_Word Var_216;
          MR_Word Var_217;
          MR_Word Var_218;
          MR_Word Var_219;

          hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_95_95, &MsgClauses_43);
          Var_211 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MsgClauses_43, (MR_Integer) 0))));
          Var_212 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MsgClauses_43, (MR_Integer) 1))));
          Var_213 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MsgClauses_43, (MR_Integer) 2))));
          Var_214 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MsgClauses_43, (MR_Integer) 3))));
          Var_215 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MsgClauses_43, (MR_Integer) 4))));
          Var_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MsgClauses_43, (MR_Integer) 5))));
          Var_216 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MsgClauses_43, (MR_Integer) 6))));
          Var_217 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MsgClauses_43, (MR_Integer) 7))));
          Var_218 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MsgClauses_43, (MR_Integer) 8))));
          Var_219 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MsgClauses_43, (MR_Integer) 9))));
          NumClauses_44 = hlds__hlds_clauses__num_clauses_in_clauses_rep_1_f_0(Var_98);
          Var_103 = (MR_Integer) ((MR_Unsigned) NumClauses_44 + (MR_Unsigned) (MR_Integer) 1);
          mercury__io__write_string_3_p_0((MR_String) "% Processing clause ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__make_hlds__add_clause_scalar_common_2[2]), Var_103, &Var_249);
          mercury__io__write_string_3_p_0(Var_249);
          mercury__io__write_string_3_p_0((MR_String) " for ");
          parse_tree__prog_out__write_pred_or_func_3_p_0(PredOrFunc_21);
          mercury__io__write_string_3_p_0((MR_String) " \140");
          mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__add_clause_scalar_common_1[0]), MaybeAnnotatedArgTerms_24, &PredArity0_45);
          PredArity_46 = (MR_Integer) ((MR_Unsigned) PredArity0_45 + (MR_Unsigned) ArityAdjustment_26);
          parse_tree__prog_util__adjust_func_arity_3_p_1(PredOrFunc_21, &OrigArity_47, PredArity_46);
          {
            Var_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_109, 0) = ((MR_Box) (PredName_22));
            MR_hl_field(MR_mktag(0), Var_109, 1) = ((MR_Box) (OrigArity_47));
          }
          parse_tree__prog_out__write_sym_name_and_arity_3_p_0(Var_109);
          mercury__io__write_string_3_p_0((MR_String) "\'...\n");
        }
        break;
    }
    Var_113 = (MR_Word) (PredStatus_28);
    succeeded = (Var_113 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (succeeded)
    {
      MR_Word InitMarkers0_48;
      MR_Word InitMarkers_49;
      MR_Word STATE_VARIABLE_PredInfo_115_115;

      hlds__hlds_pred__pred_info_set_status_3_p_0(PredStatus_28, STATE_VARIABLE_PredInfo_95_95, &STATE_VARIABLE_PredInfo_115_115);
      hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_115_115, &InitMarkers0_48);
      hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 22, InitMarkers0_48, &InitMarkers_49);
      hlds__hlds_pred__pred_info_set_markers_3_p_0(InitMarkers_49, STATE_VARIABLE_PredInfo_115_115, &STATE_VARIABLE_PredInfo_118_118);
    }
    else
      STATE_VARIABLE_PredInfo_118_118 = STATE_VARIABLE_PredInfo_95_95;
    STATE_VARIABLE_PredSpecs_119_119 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    if ((IllegalSVarResult_32 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      STATE_VARIABLE_PredSpecs_121_121 = STATE_VARIABLE_PredSpecs_119_119;
    else
    {
      MR_Word StateVar_50;
      MR_Word StateVarContext_51;
      MR_Tuple Var_120 = ((MR_Tuple) ((MR_hl_field(MR_mktag(1), IllegalSVarResult_32, (MR_Integer) 0))));

      StateVar_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_120, (MR_Integer) 0))));
      StateVarContext_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_120, (MR_Integer) 1))));
      hlds__make_hlds__state_var__report_illegal_func_svar_result_5_p_0(StateVarContext_51, ClauseVarSet_20, StateVar_50, STATE_VARIABLE_PredSpecs_119_119, &STATE_VARIABLE_PredSpecs_121_121);
    }
    succeeded = (PredOrFunc_21 == (MR_Integer) 1);
    if (succeeded)
    {
      Var_122 = (MR_Integer) 1;
      parse_tree__prog_util__adjust_func_arity_3_p_1(Var_122, &FuncArity_52, Arity_25);
      succeeded = hlds__hlds_pred__is_field_access_function_name_5_p_0(STATE_VARIABLE_ModuleInfo_0_88, PredName_22, &Var_245, &Var_53, &Var_54);
      if (succeeded)
      {
        succeeded = (FuncArity_52 == Var_245);
        if (succeeded)
        {
          Var_123 = (MR_Word) (PredStatus_28);
          succeeded = (Var_123 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          succeeded = !(succeeded);
        }
      }
    }
    if (succeeded)
    {
      MR_Word CallId_55;
      MR_Word FieldAccessMainPieces_56;
      MR_Word FieldAccessMsg_58;
      MR_Word FieldAccessSpec_59;
      MR_Word Var_126;
      MR_Word Var_129;
      MR_Word Var_130;
      MR_Word Var_155;
      MR_Word Var_156;
      MR_Word Var_163;

      {
        CallId_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), CallId_55, 0) = ((MR_Box) (PredOrFunc_21));
        MR_hl_field(MR_mktag(0), CallId_55, 1) = ((MR_Box) (PredName_22));
        MR_hl_field(MR_mktag(0), CallId_55, 2) = ((MR_Box) (Arity_25));
      }
      {
        Var_130 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_130, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
        MR_hl_field(MR_mktag(3), Var_130, 1) = ((MR_Box) (CallId_55));
      }
      {
        Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) (Var_130));
        MR_hl_field(MR_mktag(1), Var_129, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[19])));
      }
      {
        Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_126, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[69])));
        MR_hl_field(MR_mktag(1), Var_126, 1) = ((MR_Box) (Var_129));
      }
      {
        FieldAccessMainPieces_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FieldAccessMainPieces_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[68])));
        MR_hl_field(MR_mktag(1), FieldAccessMainPieces_56, 1) = ((MR_Box) (Var_126));
      }
      {
        Var_156 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_156, 0) = ((MR_Box) (FieldAccessMainPieces_56));
      }
      {
        Var_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_155, 0) = ((MR_Box) (Var_156));
        MR_hl_field(MR_mktag(1), Var_155, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[71])));
      }
      {
        FieldAccessMsg_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FieldAccessMsg_58, 0) = ((MR_Box) (Context_29));
        MR_hl_field(MR_mktag(0), FieldAccessMsg_58, 1) = ((MR_Box) (Var_155));
      }
      {
        Var_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_163, 0) = ((MR_Box) (FieldAccessMsg_58));
        MR_hl_field(MR_mktag(1), Var_163, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        FieldAccessSpec_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FieldAccessSpec_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), FieldAccessSpec_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
        MR_hl_field(MR_mktag(0), FieldAccessSpec_59, 2) = ((MR_Box) (Var_163));
      }
      {
        STATE_VARIABLE_PredSpecs_165_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_PredSpecs_165_165, 0) = ((MR_Box) (FieldAccessSpec_59));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_PredSpecs_165_165, 1) = ((MR_Box) (STATE_VARIABLE_PredSpecs_121_121));
      }
    }
    else
      STATE_VARIABLE_PredSpecs_165_165 = STATE_VARIABLE_PredSpecs_121_121;
    succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(STATE_VARIABLE_PredInfo_118_118);
    if (succeeded)
    {
      MR_Word AllowDefnOfBuiltin_60;
      MR_Word Globals_208;

      hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_88, &Globals_208);
      libs__globals__lookup_bool_option_3_p_0(Globals_208, (MR_Integer) 288, &AllowDefnOfBuiltin_60);
      switch (AllowDefnOfBuiltin_60) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word BuiltinMsg_61;
            MR_Word BuiltinSpec_62;
            MR_Word Var_176;

            {
              BuiltinMsg_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), BuiltinMsg_61, 0) = ((MR_Box) (Context_29));
              MR_hl_field(MR_mktag(0), BuiltinMsg_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[34])));
            }
            {
              Var_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_176, 0) = ((MR_Box) (BuiltinMsg_61));
              MR_hl_field(MR_mktag(1), Var_176, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              BuiltinSpec_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), BuiltinSpec_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), BuiltinSpec_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
              MR_hl_field(MR_mktag(0), BuiltinSpec_62, 2) = ((MR_Box) (Var_176));
            }
            {
              STATE_VARIABLE_PredSpecs_178_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_PredSpecs_178_178, 0) = ((MR_Box) (BuiltinSpec_62));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_PredSpecs_178_178, 1) = ((MR_Box) (STATE_VARIABLE_PredSpecs_165_165));
            }
          }
          break;
        case (MR_Integer) 1:
          STATE_VARIABLE_PredSpecs_178_178 = STATE_VARIABLE_PredSpecs_165_165;
          break;
      }
    }
    else
      STATE_VARIABLE_PredSpecs_178_178 = STATE_VARIABLE_PredSpecs_165_165;
    hlds__default_func_mode__maybe_add_default_func_mode_3_p_0(STATE_VARIABLE_PredInfo_118_118, &STATE_VARIABLE_PredInfo_179_179, &Var_63);
    if ((STATE_VARIABLE_PredSpecs_178_178 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word PredMap_87;
      MR_Word STATE_VARIABLE_ModuleInfo_183_183;
      MR_Word STATE_VARIABLE_PredInfo_201_201;
      MR_Word STATE_VARIABLE_PredicateTable_202_202;

      if (((MR_tag((MR_Word) MaybeBodyGoal_27)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word BodyGoalSpecs_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeBodyGoal_27, (MR_Integer) 0))));
        MR_Word Clauses0_67;
        MR_Word Clauses_68;
        MR_Word Var_220;
        MR_Word Var_221;
        MR_Word Var_222;
        MR_Word Var_223;
        MR_Word Var_224;
        MR_Word Var_225;
        MR_Word Var_226;
        MR_Word Var_227;
        MR_Word Var_228;
        MR_Word Var_229;

        *STATE_VARIABLE_Specs_93 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), BodyGoalSpecs_66, STATE_VARIABLE_Specs_0_92);
        hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_179_179, &Clauses0_67);
        Var_220 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clauses0_67, (MR_Integer) 0))));
        Var_221 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clauses0_67, (MR_Integer) 1))));
        Var_222 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clauses0_67, (MR_Integer) 2))));
        Var_223 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clauses0_67, (MR_Integer) 3))));
        Var_224 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clauses0_67, (MR_Integer) 4))));
        Var_225 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clauses0_67, (MR_Integer) 5))));
        Var_226 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clauses0_67, (MR_Integer) 6))));
        Var_227 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clauses0_67, (MR_Integer) 7))));
        Var_228 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clauses0_67, (MR_Integer) 8))));
        Var_229 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clauses0_67, (MR_Integer) 9))));
        {
          Clauses_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Clauses_68, 0) = ((MR_Box) (Var_220));
          MR_hl_field(MR_mktag(0), Clauses_68, 1) = ((MR_Box) (Var_221));
          MR_hl_field(MR_mktag(0), Clauses_68, 2) = ((MR_Box) (Var_222));
          MR_hl_field(MR_mktag(0), Clauses_68, 3) = ((MR_Box) (Var_223));
          MR_hl_field(MR_mktag(0), Clauses_68, 4) = ((MR_Box) (Var_224));
          MR_hl_field(MR_mktag(0), Clauses_68, 5) = ((MR_Box) (Var_225));
          MR_hl_field(MR_mktag(0), Clauses_68, 6) = ((MR_Box) (Var_226));
          MR_hl_field(MR_mktag(0), Clauses_68, 7) = ((MR_Box) (Var_227));
          MR_hl_field(MR_mktag(0), Clauses_68, 8) = ((MR_Box) (Var_228));
          MR_hl_field(MR_mktag(0), Clauses_68, 9) = ((MR_Box) ((MR_Integer) 1));
        }
        hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(Clauses_68, STATE_VARIABLE_PredInfo_179_179, &STATE_VARIABLE_PredInfo_201_201);
        STATE_VARIABLE_ModuleInfo_183_183 = STATE_VARIABLE_ModuleInfo_0_88;
        *STATE_VARIABLE_QualInfo_91 = STATE_VARIABLE_QualInfo_0_90;
      }
      else
      {
        MR_Word BodyGoal_69 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeBodyGoal_27, (MR_Integer) 0))));
        MR_Word TVarSet0_70;
        MR_Word ArgTerms_71;
        MR_Word ProcIdsForThisClause_72;
        MR_Word AllProcIds_73;
        MR_Word Goal_74;
        MR_Word VarSet_75;
        MR_Word TVarSet_76;
        MR_Word Warnings_77;
        MR_Word ExistQVars_80;
        MR_Word ArgTypes_81;
        MR_Word ProcIds_82;
        MR_Word STATE_VARIABLE_ModuleInfo_180_180;
        MR_Word STATE_VARIABLE_QualInfo_181_181;
        MR_Word STATE_VARIABLE_Specs_182_182;
        MR_Word STATE_VARIABLE_Specs_185_185;
        MR_Word STATE_VARIABLE_PredInfo_186_186;
        MR_Word STATE_VARIABLE_PredInfo_188_188;
        MR_Word STATE_VARIABLE_PredInfo_191_191;
        MR_Word STATE_VARIABLE_PredInfo_192_192;
        MR_Word Clauses0_209;
        MR_Word Clauses_210;
        MR_Word PromiseType_78;
        MR_Word _ArgTVarSet_79;
        MR_Word Var_83;

        hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_179_179, &Clauses0_209);
        hlds__hlds_pred__pred_info_get_typevarset_2_p_0(STATE_VARIABLE_PredInfo_179_179, &TVarSet0_70);
        hlds__make_hlds__add_clause__select_applicable_modes_15_p_0(MaybeAnnotatedArgTerms_24, ClauseVarSet_20, PredStatus_28, Context_29, PredId_23, STATE_VARIABLE_PredInfo_179_179, &ArgTerms_71, &ProcIdsForThisClause_72, &AllProcIds_73, STATE_VARIABLE_ModuleInfo_0_88, &STATE_VARIABLE_ModuleInfo_180_180, STATE_VARIABLE_QualInfo_0_90, &STATE_VARIABLE_QualInfo_181_181, STATE_VARIABLE_Specs_0_92, &STATE_VARIABLE_Specs_182_182);
        hlds__make_hlds__add_clause__clauses_info_add_clause_24_p_0(ProcIdsForThisClause_72, AllProcIds_73, ClauseVarSet_20, TVarSet0_70, ArgTerms_71, BodyGoal_69, Context_29, MaybeSeqNum_30, PredStatus_28, PredOrFunc_21, Arity_25, GoalType_31, &Goal_74, &VarSet_75, &TVarSet_76, &Warnings_77, Clauses0_209, &Clauses_210, STATE_VARIABLE_ModuleInfo_180_180, &STATE_VARIABLE_ModuleInfo_183_183, STATE_VARIABLE_QualInfo_181_181, STATE_VARIABLE_QualInfo_91, STATE_VARIABLE_Specs_182_182, &STATE_VARIABLE_Specs_185_185);
        hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(Clauses_210, STATE_VARIABLE_PredInfo_179_179, &STATE_VARIABLE_PredInfo_186_186);
        succeeded = ((MR_tag((MR_Word) GoalType_31)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          PromiseType_78 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalType_31, (MR_Integer) 0))));
          hlds__hlds_pred__pred_info_set_goal_type_3_p_0(GoalType_31, STATE_VARIABLE_PredInfo_186_186, &STATE_VARIABLE_PredInfo_188_188);
        }
        else
        {
          hlds__hlds_pred__pred_info_update_goal_type_3_p_0((MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))), STATE_VARIABLE_PredInfo_186_186, &STATE_VARIABLE_PredInfo_188_188);
        }
        hlds__hlds_pred__pred_info_set_typevarset_3_p_0(TVarSet_76, STATE_VARIABLE_PredInfo_188_188, &STATE_VARIABLE_PredInfo_191_191);
        hlds__hlds_pred__pred_info_get_arg_types_4_p_0(STATE_VARIABLE_PredInfo_191_191, &_ArgTVarSet_79, &ExistQVars_80, &ArgTypes_81);
        hlds__hlds_pred__pred_info_set_arg_types_5_p_0(TVarSet_76, ExistQVars_80, ArgTypes_81, STATE_VARIABLE_PredInfo_191_191, &STATE_VARIABLE_PredInfo_192_192);
        ProcIds_82 = hlds__hlds_pred__pred_info_all_procids_1_f_0(STATE_VARIABLE_PredInfo_192_192);
        succeeded = (ProcIds_82 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) GoalType_31)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
            Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalType_31, (MR_Integer) 0))));
          succeeded = !(succeeded);
        }
        if (succeeded)
        {
          MR_Word EndMarkers0_84;
          MR_Word EndMarkers_85;

          hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_192_192, &EndMarkers0_84);
          hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 3, EndMarkers0_84, &EndMarkers_85);
          hlds__hlds_pred__pred_info_set_markers_3_p_0(EndMarkers_85, STATE_VARIABLE_PredInfo_192_192, &STATE_VARIABLE_PredInfo_201_201);
        }
        else
          STATE_VARIABLE_PredInfo_201_201 = STATE_VARIABLE_PredInfo_192_192;
        {
          MR_Word Var_196 = (MR_Word) (PredStatus_28);

          succeeded = (Var_196 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        if (!(succeeded))
        {
          MR_Word Var_195 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clauses_210, (MR_Integer) 9))));
          MR_Word Var_230 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clauses_210, (MR_Integer) 0))));
          MR_Word Var_231 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clauses_210, (MR_Integer) 1))));
          MR_Word Var_232 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clauses_210, (MR_Integer) 2))));
          MR_Word Var_233 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clauses_210, (MR_Integer) 3))));
          MR_Word Var_234 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clauses_210, (MR_Integer) 4))));
          MR_Word Var_235 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clauses_210, (MR_Integer) 5))));
          MR_Word Var_236 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clauses_210, (MR_Integer) 6))));
          MR_Word Var_237 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clauses_210, (MR_Integer) 7))));
          MR_Word Var_238 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clauses_210, (MR_Integer) 8))));

          succeeded = (Var_195 == (MR_Integer) 1);
        }
        if (succeeded)
          *STATE_VARIABLE_Specs_93 = STATE_VARIABLE_Specs_185_185;
        else
        {
          MR_Word SimpleCallId_86;
          MR_Word STATE_VARIABLE_Specs_197_197;

          {
            SimpleCallId_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SimpleCallId_86, 0) = ((MR_Box) (PredOrFunc_21));
            MR_hl_field(MR_mktag(0), SimpleCallId_86, 1) = ((MR_Box) (PredName_22));
            MR_hl_field(MR_mktag(0), SimpleCallId_86, 2) = ((MR_Box) (Arity_25));
          }
          hlds__make_hlds__make_hlds_warn__warn_singletons_6_p_0(STATE_VARIABLE_ModuleInfo_183_183, SimpleCallId_86, VarSet_75, Goal_74, STATE_VARIABLE_Specs_185_185, &STATE_VARIABLE_Specs_197_197);
          hlds__make_hlds__make_hlds_warn__add_quant_warnings_5_p_0(SimpleCallId_86, VarSet_75, Warnings_77, STATE_VARIABLE_Specs_197_197, STATE_VARIABLE_Specs_93);
        }
      }
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_23)), ((MR_Box) (STATE_VARIABLE_PredInfo_201_201)), PredMap0_39, &PredMap_87);
      hlds__pred_table__predicate_table_set_preds_3_p_0(PredMap_87, STATE_VARIABLE_PredicateTable_94_94, &STATE_VARIABLE_PredicateTable_202_202);
      hlds__hlds_module__module_info_set_predicate_table_3_p_0(STATE_VARIABLE_PredicateTable_202_202, STATE_VARIABLE_ModuleInfo_183_183, STATE_VARIABLE_ModuleInfo_89);
    }
    else
    {
      MR_Word Var_205;
      MR_Word Var_206;

      Var_206 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeBodyGoal_27);
      Var_205 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_206, STATE_VARIABLE_Specs_0_92);
      *STATE_VARIABLE_Specs_93 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), STATE_VARIABLE_PredSpecs_178_178, Var_205);
      *STATE_VARIABLE_ModuleInfo_89 = STATE_VARIABLE_ModuleInfo_0_88;
      *STATE_VARIABLE_QualInfo_91 = STATE_VARIABLE_QualInfo_0_90;
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
    Var_53 = (MR_Word) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[67]));
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_56, 0) = ((MR_Box) (PredIdStr_28));
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[36])));
    }
    {
      Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_55));
    }
    ContextPieces_29 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_52);
    hlds__make_hlds__add_clause__get_mode_annotations_9_p_0(VarSet_17, ContextPieces_29, MaybeAnnotatedArgTerms_16, (MR_Integer) 1, ArgTerms_22, (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))), &ModeAnnotations_30, (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))), &ModeAnnotationSpecs_31);
    if ((ModeAnnotationSpecs_31 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *ApplProcIds_23 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (*AllProcIds_24));
                  }
                else
                  *ApplProcIds_23 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
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
                  Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Var_56));
                  MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[42])));
                }
                {
                  Pieces_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_43, 0) = ((MR_Box) (Var_53));
                  MR_hl_field(MR_mktag(1), Pieces_43, 1) = ((MR_Box) (Var_68));
                }
                {
                  Var_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (Pieces_43));
                }
                {
                  Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (Var_85));
                  MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  Msg_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Msg_44, 0) = ((MR_Box) (Context_19));
                  MR_hl_field(MR_mktag(0), Msg_44, 1) = ((MR_Box) (Var_84));
                }
                {
                  Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (Msg_44));
                  MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  Spec_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Spec_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), Spec_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                  MR_hl_field(MR_mktag(0), Spec_45, 2) = ((MR_Box) (Var_89));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_Specs_51 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_45));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_50));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
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

            succeeded = (Var_92 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
            succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(ExistingProcs_41, ModeList_35, STATE_VARIABLE_ModuleInfo_0_46, &ProcId_42);
            if (succeeded)
            {
              MR_Word Var_95;

              {
                Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (ProcId_42));
                MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
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
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
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
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
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

    if ((HeadVar__3_3 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__5_5 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
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
      MR_Word Var_63;

      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), Var_41, 1) = ((MR_Box) (ArgNum_4));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[52])));
      }
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[66])));
        MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_40));
      }
      Var_36 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_37);
      ArgContextPieces_28 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_2, Var_36);
      succeeded = ((MR_tag((MR_Word) MAArgTerm_21)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MAArgTerm_21, (MR_Integer) 0))));
        Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MAArgTerm_21, (MR_Integer) 1))));
        Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MAArgTerm_21, (MR_Integer) 2))));
        succeeded = ((MR_tag((MR_Word) Var_69)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
        {
          Var_70 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_69, (MR_Integer) 0))));
          succeeded = (strcmp(Var_70, (MR_String) "::") == 0);
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Var_71)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              ArgTermPrime_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_71, (MR_Integer) 0))));
              Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_71, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) Var_72)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                ModeTerm_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_72, (MR_Integer) 0))));
                Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_72, (MR_Integer) 1))));
                succeeded = (Var_73 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
        parse_tree__parse_inst_mode_name__parse_mode_5_p_0((MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))), GenVarSet_64, ArgContextPieces_28, GenModeTerm_65, &MaybeMode_66);
        if (((MR_tag((MR_Word) MaybeMode_66)) == (MR_mktag((MR_Integer) 0))))
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
                      Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (Mode_67));
                      MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      STATE_VARIABLE_Annotations_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Annotations_49_49, 0) = ((MR_Box) (Var_80));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  STATE_VARIABLE_Annotations_49_49 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)));
                  break;
                case (MR_Integer) 2:
                  STATE_VARIABLE_Annotations_49_49 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)));
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_86;
                MR_Word Var_87;
                MR_Word Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_Annotations_0_6, (MR_Integer) 0))));

                {
                  Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (Mode_67));
                  MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                Var_86 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_92, Var_87);
                {
                  STATE_VARIABLE_Annotations_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
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
                STATE_VARIABLE_Annotations_49_49 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)));
                break;
              case (MR_Integer) 1:
                STATE_VARIABLE_Annotations_49_49 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)));
                break;
              case (MR_Integer) 2:
                STATE_VARIABLE_Annotations_49_49 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)));
                break;
            }
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_Annotations_49_49 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)));
            break;
        }
        STATE_VARIABLE_Specs_48_48 = STATE_VARIABLE_Specs_0_8;
      }
      Var_50 = (MR_Integer) ((MR_Unsigned) ArgNum_4 + (MR_Unsigned) (MR_Integer) 1);
      hlds__make_hlds__add_clause__get_mode_annotations_9_p_0(VarSet_1, ContextPieces_2, MAArgTerms_22, Var_50, &ArgTerms_25, STATE_VARIABLE_Annotations_49_49, STATE_VARIABLE_Annotations_7, STATE_VARIABLE_Specs_48_48, STATE_VARIABLE_Specs_9);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
      Var_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (Name_19));
    }
    SubDeclStr_21 = parse_tree__parse_tree_out_pred_decl__mercury_mode_subdecl_to_string_6_f_0((MR_Integer) 1, PredOrFunc_18, Var_35, Var_36, StrippedModeList_17, (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    {
      Var_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_51, 1) = ((MR_Box) (SubDeclStr_21));
    }
    {
      Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[19])));
    }
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[60])));
      MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_50));
    }
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_47));
    }
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[59])));
      MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_45));
    }
    Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PredIdPieces_16, Var_42);
    MainPieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[58])), Var_41);
    ProcIds_23 = hlds__hlds_pred__pred_info_all_procids_1_f_0(PredInfo_12);
    if ((ProcIds_23 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word Var_99;
      MR_Word Var_100;

      {
        Var_100 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_100, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
        MR_hl_field(MR_mktag(3), Var_100, 1) = ((MR_Box) (PredOrFunc_18));
      }
      {
        Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (Var_100));
        MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[44])));
      }
      {
        VerbosePieces_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), VerbosePieces_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[61])));
        MR_hl_field(MR_mktag(1), VerbosePieces_24, 1) = ((MR_Box) (Var_99));
      }
    }
    else
    {
      MR_Integer ProcIdsHead_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ProcIds_23, (MR_Integer) 0))));
      MR_Word ProcIdsTail_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ProcIds_23, (MR_Integer) 1))));

      if ((ProcIdsTail_26 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word Var_79;
        MR_Word Var_82;
        MR_Word Var_83;
        MR_Word Var_91;
        MR_Word Var_92;

        {
          Var_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
          MR_hl_field(MR_mktag(3), Var_83, 1) = ((MR_Box) (PredOrFunc_18));
        }
        {
          Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (Var_83));
          MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[48])));
        }
        {
          Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[62])));
          MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (Var_82));
        }
        Var_92 = hlds__make_hlds__add_clause__mode_decl_for_pred_info_to_pieces_2_f_0(PredInfo_12, ProcIdsHead_25);
        Var_91 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_92, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[64])));
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
          Var_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
          MR_hl_field(MR_mktag(3), Var_62, 1) = ((MR_Box) (PredOrFunc_18));
        }
        {
          Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Var_62));
          MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[50])));
        }
        {
          Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[65])));
          MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_61));
        }
        {
          Var_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (&hlds__make_hlds__add_clause_scalar_common_5[0]));
          MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) (hlds__make_hlds__add_clause__undeclared_mode_error_8_p_0_1));
          MR_hl_field(MR_mktag(0), Var_73, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_73, 3) = ((MR_Box) (PredInfo_12));
        }
        Var_72 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__make_hlds__add_clause_scalar_common_1[2]), Var_73, ProcIds_23);
        Var_71 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(Var_72, (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_71, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[64])));
        VerbosePieces_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_58, Var_70);
      }
    }
    {
      Var_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_108, 0) = ((MR_Box) (MainPieces_22));
    }
    {
      Var_110 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_110, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(2), Var_110, 1) = ((MR_Box) (VerbosePieces_24));
    }
    {
      Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (Var_110));
      MR_hl_field(MR_mktag(1), Var_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (Var_108));
      MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) (Var_109));
    }
    {
      Msg_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_29, 0) = ((MR_Box) (Context_14));
      MR_hl_field(MR_mktag(0), Msg_29, 1) = ((MR_Box) (Var_107));
    }
    {
      Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (Msg_29));
      MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Spec_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Spec_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), Spec_30, 2) = ((MR_Box) (Var_115));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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

    Var_10 = check_hlds__mode_errors__mode_decl_to_string_2_f_0(ProcId_5, PredInfo_4);
    {
      Var_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), Var_9, 1) = ((MR_Box) (Var_10));
    }
    {
      Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_8, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(1), Var_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[56])));
    }
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[54])));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (Var_8));
    }
    return HeadVar__3_3;
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

    succeeded = hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__667__1_1_f_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_104);
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
    MR_Word HasForeignClauses_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_82, (MR_Integer) 8))));
    MR_Word HadSyntaxError0_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_82, (MR_Integer) 9))));
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
    MR_Word Var_90;

    IsEmpty_55 = hlds__hlds_clauses__clause_list_is_empty_1_f_0(ClausesRep0_50);
    switch (IsEmpty_55) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        TVarNameMap_56 = TVarNameMap0_46;
        break;
      case (MR_Integer) 1:
        {
          mercury__varset__create_name_var_map_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet0_28, &TVarNameMap_56);
        }
        break;
    }
    Var_90 = (MR_Word) (PredStatus_33);
    succeeded = (Var_90 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
      MR_Word Var_64;
      MR_Word Var_65;

      succeeded = ((MR_tag((MR_Word) StateVarErrors_62)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), StateVarErrors_62, (MR_Integer) 0))));
        Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), StateVarErrors_62, (MR_Integer) 1))));
      }
    }
    if (succeeded)
    {
      MR_Word Var_114;
      MR_Word Var_115;
      MR_Word Var_116;
      MR_Word Var_117;
      MR_Word Var_118;
      MR_Word Var_119;
      MR_Word Var_120;
      MR_Word Var_121;
      MR_Word Var_122;
      MR_Word Var_123;

      *STATE_VARIABLE_Specs_89 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), StateVarErrors_62, STATE_VARIABLE_Specs_94_94);
      *Goal_37 = hlds__make_goal__true_goal_0_f_0();
      Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_82, (MR_Integer) 0))));
      Var_115 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_82, (MR_Integer) 1))));
      Var_116 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_82, (MR_Integer) 2))));
      Var_117 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_82, (MR_Integer) 3))));
      Var_118 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_82, (MR_Integer) 4))));
      Var_119 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_82, (MR_Integer) 5))));
      Var_120 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_82, (MR_Integer) 6))));
      Var_121 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_82, (MR_Integer) 7))));
      Var_122 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_82, (MR_Integer) 8))));
      Var_123 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_82, (MR_Integer) 9))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_ClausesInfo_83 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_114));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_115));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_116));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_117));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_118));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_119));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_120));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_121));
        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_122));
        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((MR_Integer) 1));
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
            MR_Word Clause_113;

            {
              Clause_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Clause_113, 0) = ((MR_Box) (ApplModeIds0_25));
              MR_hl_field(MR_mktag(0), Clause_113, 1) = ((MR_Box) (*Goal_37));
              MR_hl_field(MR_mktag(0), Clause_113, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), Clause_113, 3) = ((MR_Box) (Context_31));
              MR_hl_field(MR_mktag(0), Clause_113, 4) = ((MR_Box) (StateVarWarnings_61));
            }
            hlds__hlds_clauses__add_clause_3_p_0(Clause_113, ClausesRep0_50, &ClausesRep_75);
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
            if ((ApplModeIds0_25 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              ModeIds0_73 = AllModeIds_26;
            else
              ModeIds0_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ApplModeIds0_25, (MR_Integer) 0))));
            ModeIds_74 = mercury__list__delete_elems_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), ModeIds0_73, ForeignModeIds_68);
            if ((ModeIds_74 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              ClausesRep_75 = ClausesRep1_67;
            else
            {
              MR_Word ApplicableModeIds_78;
              MR_Word Clause_79;

              {
                ApplicableModeIds_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ApplicableModeIds_78, 0) = ((MR_Box) (ModeIds_74));
              }
              {
                Clause_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Clause_79, 0) = ((MR_Box) (ApplicableModeIds_78));
                MR_hl_field(MR_mktag(0), Clause_79, 1) = ((MR_Box) (*Goal_37));
                MR_hl_field(MR_mktag(0), Clause_79, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_ClausesInfo_83 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (*VarSet_38));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TVarNameMap_56));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ExplicitVarTypes_80));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (InferredVarTypes_48));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (HeadVars_49));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ClausesRep_75));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ItemNumbers_81));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (RttiVarMaps_52));
        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (HasForeignClauses_53));
        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (HadSyntaxError0_54));
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
  MR_Word STATE_VARIABLE_VarSet_0_61,
  MR_Word * STATE_VARIABLE_VarSet_62,
  MR_Word * QuantWarnings_31,
  MR_Word * StateVarWarnings_32,
  MR_Word * StateVarErrors_33,
  MR_Word STATE_VARIABLE_ModuleInfo_0_63,
  MR_Word * STATE_VARIABLE_ModuleInfo_64,
  MR_Word STATE_VARIABLE_QualInfo_0_65,
  MR_Word * STATE_VARIABLE_QualInfo_66,
  MR_Word STATE_VARIABLE_Specs_0_67,
  MR_Word * STATE_VARIABLE_Specs_68)
{
  {
    MR_bool succeeded;
    MR_Word HeadVarList_40;
    MR_Word ArgTerms1_41;
    MR_Word ArgTerms_42;
    MR_Word FinalSVarMap_43;
    MR_Word InitialSVarState_44;
    MR_Word HeadGoal_46;
    MR_Word BodyGoal_50;
    MR_Word FinalSVarState_53;
    MR_Word Goal0_54;
    MR_Word FoundTraceGoal_55;
    MR_Word Goal1_56;
    MR_Word VarTypes0_57;
    MR_Word EmptyRttiVarmaps_58;
    MR_Word VarTypes_59;
    MR_Word STATE_VARIABLE_VarSet_70_70;
    MR_Word STATE_VARIABLE_SVarStore_72_72;
    MR_Word STATE_VARIABLE_Specs_73_73;
    MR_Word STATE_VARIABLE_SVarState_74_74;
    MR_Word STATE_VARIABLE_SVarStore_75_75;
    MR_Word STATE_VARIABLE_VarSet_76_76;
    MR_Word STATE_VARIABLE_ModuleInfo_77_77;
    MR_Word STATE_VARIABLE_QualInfo_78_78;
    MR_Word STATE_VARIABLE_Specs_79_79;
    MR_Word STATE_VARIABLE_SVarStore_86_86;
    MR_Word STATE_VARIABLE_VarSet_87_87;
    MR_Word STATE_VARIABLE_QualInfo_89_89;
    MR_Word Var_45;
    MR_Word Var_60;

    HeadVarList_40 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) (&hlds__make_hlds__add_clause_scalar_common_1[3]), HeadVars_22);
    parse_tree__prog_rename__rename_vars_in_term_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_21, ArgTerms0_23, &ArgTerms1_41);
    hlds__make_hlds__state_var__svar_prepare_for_clause_head_9_p_0(ArgTerms1_41, &ArgTerms_42, STATE_VARIABLE_VarSet_0_61, &STATE_VARIABLE_VarSet_70_70, &FinalSVarMap_43, &InitialSVarState_44, &STATE_VARIABLE_SVarStore_72_72, STATE_VARIABLE_Specs_0_67, &STATE_VARIABLE_Specs_73_73);
    succeeded = ((MR_tag((MR_Word) GoalType_28)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalType_28, (MR_Integer) 0))));
      HeadGoal_46 = hlds__make_goal__true_goal_0_f_0();
      STATE_VARIABLE_SVarStore_75_75 = STATE_VARIABLE_SVarStore_72_72;
      STATE_VARIABLE_SVarState_74_74 = InitialSVarState_44;
      STATE_VARIABLE_Specs_79_79 = STATE_VARIABLE_Specs_73_73;
      STATE_VARIABLE_QualInfo_78_78 = STATE_VARIABLE_QualInfo_0_65;
      STATE_VARIABLE_ModuleInfo_77_77 = STATE_VARIABLE_ModuleInfo_0_63;
      STATE_VARIABLE_VarSet_76_76 = STATE_VARIABLE_VarSet_70_70;
    }
    else
    {
      MR_Word ArgContext_47;
      MR_Word HeadGoal0_48;
      MR_Word HeadGoal1_49;

      {
        ArgContext_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ArgContext_47, 0) = ((MR_Box) (PredOrFunc_26));
        MR_hl_field(MR_mktag(0), ArgContext_47, 1) = ((MR_Box) (Arity_27));
      }
      HeadGoal0_48 = hlds__make_goal__true_goal_0_f_0();
      hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_p_0(HeadVarList_40, ArgTerms_42, Context_25, ArgContext_47, HeadGoal0_48, &HeadGoal1_49, InitialSVarState_44, &STATE_VARIABLE_SVarState_74_74, STATE_VARIABLE_SVarStore_72_72, &STATE_VARIABLE_SVarStore_75_75, STATE_VARIABLE_VarSet_70_70, &STATE_VARIABLE_VarSet_76_76, STATE_VARIABLE_ModuleInfo_0_63, &STATE_VARIABLE_ModuleInfo_77_77, STATE_VARIABLE_QualInfo_0_65, &STATE_VARIABLE_QualInfo_78_78, STATE_VARIABLE_Specs_73_73, &STATE_VARIABLE_Specs_79_79);
      hlds__goal_util__attach_features_to_all_goals_4_p_1((MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[53])), (MR_Integer) 1, HeadGoal1_49, &HeadGoal_46);
    }
    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0((MR_Integer) 0, ParseTreeBodyGoal_24, Renaming_21, &BodyGoal_50, STATE_VARIABLE_SVarState_74_74, &FinalSVarState_53, STATE_VARIABLE_SVarStore_75_75, &STATE_VARIABLE_SVarStore_86_86, STATE_VARIABLE_VarSet_76_76, &STATE_VARIABLE_VarSet_87_87, STATE_VARIABLE_ModuleInfo_77_77, STATE_VARIABLE_ModuleInfo_64, STATE_VARIABLE_QualInfo_78_78, &STATE_VARIABLE_QualInfo_89_89, STATE_VARIABLE_Specs_79_79, STATE_VARIABLE_Specs_68);
    hlds__make_hlds__state_var__svar_finish_clause_body_10_p_0(Context_25, FinalSVarMap_43, HeadGoal_46, BodyGoal_50, &Goal0_54, InitialSVarState_44, FinalSVarState_53, STATE_VARIABLE_SVarStore_86_86, StateVarWarnings_32, StateVarErrors_33);
    hlds__make_hlds__qual_info__qual_info_get_found_trace_goal_2_p_0(STATE_VARIABLE_QualInfo_89_89, &FoundTraceGoal_55);
    switch (FoundTraceGoal_55) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Goal1_56 = Goal0_54;
        break;
      case (MR_Integer) 1:
        hlds__pre_quantification__separate_trace_goal_only_locals_2_p_0(Goal0_54, &Goal1_56);
        break;
    }
    hlds__make_hlds__qual_info__qual_info_get_var_types_2_p_0(STATE_VARIABLE_QualInfo_89_89, &VarTypes0_57);
    hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&EmptyRttiVarmaps_58);
    hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 0, HeadVarList_40, QuantWarnings_31, Goal1_56, Goal_29, STATE_VARIABLE_VarSet_87_87, STATE_VARIABLE_VarSet_62, VarTypes0_57, &VarTypes_59, EmptyRttiVarmaps_58, &Var_60);
    hlds__make_hlds__qual_info__qual_info_set_var_types_3_p_0(VarTypes_59, STATE_VARIABLE_QualInfo_89_89, STATE_VARIABLE_QualInfo_66);
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
