/*
** Automatically generated from `add_clause.m'
** by the Mercury compiler,
** version rotd-2016-02-08
** configured for x86_64-apple-darwin13.4.0.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


/* :- module hlds.make_hlds.add_clause. */
/* :- implementation. */

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
#include "check_hlds.clause_to_proc.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_code_util.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_error_util.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.make_hlds.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
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
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_pred_decl.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_io_inst_mode_name.mih"
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
#include "hlds.make_hlds.add_pred.mih"
#include "hlds.make_hlds.add_special_pred.mih"
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
hlds__make_hlds__add_clause____Unify____mode_annotations_0_0_10001(
  MR_Box hlds__make_hlds__add_clause__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_clause__wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_clause____Compare____mode_annotations_0_0_10001(
  MR_Box * hlds__make_hlds__add_clause__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_clause__wrapper_arg_2,
  MR_Box hlds__make_hlds__add_clause__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__591__1_1_f_0(
  MR_Word hlds__make_hlds__add_clause__LambdaHeadVar__1_103,
  MR_Word * hlds__make_hlds__add_clause__LambdaHeadVar__2_104);

static void MR_CALL 
hlds__make_hlds__add_clause____Compare____mode_annotations_0_0(
  MR_Word * hlds__make_hlds__add_clause__HeadVar__1_1,
  MR_Word hlds__make_hlds__add_clause__HeadVar__2_2,
  MR_Word hlds__make_hlds__add_clause__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_clause____Unify____mode_annotations_0_0(
  MR_Word hlds__make_hlds__add_clause__HeadVar__1_1,
  MR_Word hlds__make_hlds__add_clause__HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__add_clause__add_clause_transform_20_p_0(
  MR_Word hlds__make_hlds__add_clause__Renaming_21,
  MR_Word hlds__make_hlds__add_clause__HeadVars_22,
  MR_Word hlds__make_hlds__add_clause__Args0_23,
  MR_Word hlds__make_hlds__add_clause__ParseTreeBodyGoal_24,
  MR_Word hlds__make_hlds__add_clause__Context_25,
  MR_Word hlds__make_hlds__add_clause__PredOrFunc_26,
  MR_Integer hlds__make_hlds__add_clause__Arity_27,
  MR_Word hlds__make_hlds__add_clause__GoalType_28,
  MR_Word * hlds__make_hlds__add_clause__Goal_29,
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_0_59,
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_60,
  MR_Word * hlds__make_hlds__add_clause__QuantWarnings_31,
  MR_Word * hlds__make_hlds__add_clause__StateVarWarnings_32,
  MR_Word * hlds__make_hlds__add_clause__StateVarErrors_33,
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_61,
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_62,
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_63,
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_64,
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_65,
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_66);

static void MR_CALL 
hlds__make_hlds__add_clause__get_mode_annotations_4_p_0(
  MR_Word hlds__make_hlds__add_clause__HeadVar__1_1,
  MR_Word * hlds__make_hlds__add_clause__HeadVar__2_2,
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_0_3,
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_4);

static MR_Word MR_CALL 
hlds__make_hlds__add_clause__mode_decl_for_pred_info_to_pieces_2_f_0(
  MR_Word hlds__make_hlds__add_clause__PredInfo_4,
  MR_Integer hlds__make_hlds__add_clause__ProcId_5);

static MR_Box MR_CALL 
hlds__make_hlds__add_clause__undeclared_mode_error_8_p_0_1(
  MR_Box hlds__make_hlds__add_clause__closure_arg,
  MR_Box hlds__make_hlds__add_clause__wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_clause__undeclared_mode_error_8_p_0(
  MR_Word hlds__make_hlds__add_clause__ModeList_9,
  MR_Word hlds__make_hlds__add_clause__VarSet_10,
  MR_Word hlds__make_hlds__add_clause__PredId_11,
  MR_Word hlds__make_hlds__add_clause__PredInfo_12,
  MR_Word hlds__make_hlds__add_clause__ModuleInfo_13,
  MR_Word hlds__make_hlds__add_clause__Context_14,
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_31,
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_32);

static void MR_CALL 
hlds__make_hlds__add_clause__select_applicable_modes_15_p_0(
  MR_Word hlds__make_hlds__add_clause__Args0_16,
  MR_Word hlds__make_hlds__add_clause__VarSet_17,
  MR_Word hlds__make_hlds__add_clause__PredStatus_18,
  MR_Word hlds__make_hlds__add_clause__Context_19,
  MR_Word hlds__make_hlds__add_clause__PredId_20,
  MR_Word hlds__make_hlds__add_clause__PredInfo_21,
  MR_Word * hlds__make_hlds__add_clause__Args_22,
  MR_Word * hlds__make_hlds__add_clause__ApplProcIds_23,
  MR_Word * hlds__make_hlds__add_clause__AllProcIds_24,
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_42,
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_43,
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_44,
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_45,
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_46,
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_47);

static void MR_CALL 
hlds__make_hlds__add_clause__module_add_clause_2_19_p_0(
  MR_Word hlds__make_hlds__add_clause__ClauseVarSet_20,
  MR_Word hlds__make_hlds__add_clause__PredOrFunc_21,
  MR_Word hlds__make_hlds__add_clause__PredName_22,
  MR_Word hlds__make_hlds__add_clause__PredId_23,
  MR_Word hlds__make_hlds__add_clause__Args_24,
  MR_Integer hlds__make_hlds__add_clause__Arity_25,
  MR_Integer hlds__make_hlds__add_clause__ArityAdjustment_26,
  MR_Word hlds__make_hlds__add_clause__MaybeBodyGoal_27,
  MR_Word hlds__make_hlds__add_clause__PredStatus_28,
  MR_Word hlds__make_hlds__add_clause__Context_29,
  MR_Word hlds__make_hlds__add_clause__MaybeSeqNum_30,
  MR_Word hlds__make_hlds__add_clause__GoalType_31,
  MR_Word hlds__make_hlds__add_clause__IllegalSVarResult_32,
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_87,
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_88,
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_89,
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_90,
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_91,
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_92);

static MR_bool MR_CALL 
hlds__make_hlds__add_clause__clauses_info_add_clause_24_p_0_1(
  MR_Box hlds__make_hlds__add_clause__closure_arg,
  MR_Box hlds__make_hlds__add_clause__wrapper_arg_1,
  MR_Box * hlds__make_hlds__add_clause__wrapper_arg_2);


static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_1[70][2];

static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_2[4][1];

static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_3[1][5];

static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_4[1][3];

static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_5[1][6];




static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_1[70][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
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
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "have mode annotations."))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[5])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "syntax error: some but not all arguments"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[36])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[38])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[39])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ".)"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[5])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 15)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is:"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[45])))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "are the following:"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[45])))
  },
  /* row 50 */
  {
    ((MR_Box) (&hlds__make_hlds__add_clause_scalar_common_2[3])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "clause"))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: clause for automatically generated"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "field access"))
  },
  /* row 55 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[31])))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_clause_scalar_common_1[55]))),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 15)),
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
    ((MR_Box) ((MR_String) ":- mode"))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[67]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 69 */
  {
    ((MR_Box) ((MR_Integer) 1)),
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
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
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
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_clause__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0
  }
};

static const MR_DuFunctorDesc hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_0 = {
  (MR_String) "empty",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_1 = {
  (MR_String) "none",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_clause__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0
  }
};

static const MR_PseudoTypeInfo hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__field_types_mode_annotations_0_2[1] = {
  (MR_PseudoTypeInfo) &hlds__make_hlds__add_clause__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0
};

static const MR_DuFunctorDesc hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_2 = {
  (MR_String) "modes",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__field_types_mode_annotations_0_2,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_3 = {
  (MR_String) "mixed",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL
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
    mercury__private_builtin__MR_SECTAG_LOCAL,
    hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_stag_ordered_mode_annotations_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
hlds__make_hlds__add_clause____Unify____mode_annotations_0_0_10001(
  MR_Box hlds__make_hlds__add_clause__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_clause__wrapper_arg_2)
{
  {
    MR_bool hlds__make_hlds__add_clause__succeeded;

    {
      hlds__make_hlds__add_clause__succeeded = hlds__make_hlds__add_clause____Unify____mode_annotations_0_0(((MR_Word) hlds__make_hlds__add_clause__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_clause__wrapper_arg_2));
    }
    return hlds__make_hlds__add_clause__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_clause____Compare____mode_annotations_0_0_10001(
  MR_Box * hlds__make_hlds__add_clause__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_clause__wrapper_arg_2,
  MR_Box hlds__make_hlds__add_clause__wrapper_arg_3)
{
  {
    MR_Word hlds__make_hlds__add_clause__conv0_HeadVar__1_1;

    {
      hlds__make_hlds__add_clause____Compare____mode_annotations_0_0(&hlds__make_hlds__add_clause__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__add_clause__wrapper_arg_2), ((MR_Word) hlds__make_hlds__add_clause__wrapper_arg_3));
    }
    *hlds__make_hlds__add_clause__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__add_clause__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__591__1_1_f_0(
  MR_Word hlds__make_hlds__add_clause__LambdaHeadVar__1_103,
  MR_Word * hlds__make_hlds__add_clause__LambdaHeadVar__2_104)
{
  {
    MR_bool hlds__make_hlds__add_clause__succeeded;
    MR_Word hlds__make_hlds__add_clause__ApplProcIds_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__LambdaHeadVar__1_103, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_clause__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__LambdaHeadVar__1_103, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__add_clause__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__LambdaHeadVar__1_103, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_clause__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__LambdaHeadVar__1_103, (MR_Integer) 3)));
    MR_Word hlds__make_hlds__add_clause__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__LambdaHeadVar__1_103, (MR_Integer) 4)));
    MR_Word hlds__make_hlds__add_clause__V_71_71;

    hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__V_105_105)) == (MR_mktag((MR_Integer) 1)));
    if (hlds__make_hlds__add_clause__succeeded)
      {
        hlds__make_hlds__add_clause__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_105_105, (MR_Integer) 0)));
        if ((hlds__make_hlds__add_clause__ApplProcIds_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_clause", (MR_String) "predicate \140hlds.make_hlds.add_clause.clauses_info_add_clause\'/24", (MR_String) "all_modes foreign_proc");
            }
          }
        else
          *hlds__make_hlds__add_clause__LambdaHeadVar__2_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__ApplProcIds_72, (MR_Integer) 0)));
        hlds__make_hlds__add_clause__succeeded = MR_TRUE;
      }
    return hlds__make_hlds__add_clause__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_clause____Compare____mode_annotations_0_0(
  MR_Word * hlds__make_hlds__add_clause__HeadVar__1_1,
  MR_Word hlds__make_hlds__add_clause__HeadVar__2_2,
  MR_Word hlds__make_hlds__add_clause__HeadVar__3_3)
{
  {
    MR_bool hlds__make_hlds__add_clause__succeeded;
    MR_Integer hlds__make_hlds__add_clause__CastX_12 = (MR_Integer) hlds__make_hlds__add_clause__HeadVar__2_2;
    MR_Integer hlds__make_hlds__add_clause__CastY_13 = (MR_Integer) hlds__make_hlds__add_clause__HeadVar__3_3;

    hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__CastX_12 == hlds__make_hlds__add_clause__CastY_13);
    if (hlds__make_hlds__add_clause__succeeded)
      *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) hlds__make_hlds__add_clause__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(hlds__make_hlds__add_clause__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) hlds__make_hlds__add_clause__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(hlds__make_hlds__add_clause__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) hlds__make_hlds__add_clause__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(hlds__make_hlds__add_clause__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 2:
                      *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 2:
              switch (MR_tag((MR_Word) hlds__make_hlds__add_clause__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(hlds__make_hlds__add_clause__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word hlds__make_hlds__add_clause__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) hlds__make_hlds__add_clause__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(hlds__make_hlds__add_clause__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word hlds__make_hlds__add_clause__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__add_clause_scalar_common_1[4], hlds__make_hlds__add_clause__HeadVar__1_1, ((MR_Box) (hlds__make_hlds__add_clause__V_15_15)), ((MR_Box) (hlds__make_hlds__add_clause__V_9_9)));
                  }
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
  MR_Word hlds__make_hlds__add_clause__HeadVar__1_1,
  MR_Word hlds__make_hlds__add_clause__HeadVar__2_2)
{
  {
    MR_bool hlds__make_hlds__add_clause__succeeded;
    MR_Integer hlds__make_hlds__add_clause__CastX_11 = (MR_Integer) hlds__make_hlds__add_clause__HeadVar__1_1;
    MR_Integer hlds__make_hlds__add_clause__CastY_12 = (MR_Integer) hlds__make_hlds__add_clause__HeadVar__2_2;

    hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__CastX_11 == hlds__make_hlds__add_clause__CastY_12);
    if (hlds__make_hlds__add_clause__succeeded)
      hlds__make_hlds__add_clause__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) hlds__make_hlds__add_clause__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(hlds__make_hlds__add_clause__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer hlds__make_hlds__add_clause__CastX_3 = (MR_Integer) hlds__make_hlds__add_clause__HeadVar__1_1;
                MR_Integer hlds__make_hlds__add_clause__CastY_4 = (MR_Integer) hlds__make_hlds__add_clause__HeadVar__2_2;

                hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__CastY_4 == hlds__make_hlds__add_clause__CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer hlds__make_hlds__add_clause__CastX_5 = (MR_Integer) hlds__make_hlds__add_clause__HeadVar__1_1;
                MR_Integer hlds__make_hlds__add_clause__CastY_6 = (MR_Integer) hlds__make_hlds__add_clause__HeadVar__2_2;

                hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__CastY_6 == hlds__make_hlds__add_clause__CastX_5);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer hlds__make_hlds__add_clause__CastX_9 = (MR_Integer) hlds__make_hlds__add_clause__HeadVar__1_1;
                MR_Integer hlds__make_hlds__add_clause__CastY_10 = (MR_Integer) hlds__make_hlds__add_clause__HeadVar__2_2;

                hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__CastY_10 == hlds__make_hlds__add_clause__CastX_9);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word hlds__make_hlds__add_clause__TypeInfo_13_13;
            MR_Word hlds__make_hlds__add_clause__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__add_clause__V_8_8;

            hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__make_hlds__add_clause__succeeded)
              {
                hlds__make_hlds__add_clause__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__HeadVar__2_2, (MR_Integer) 0)));
                hlds__make_hlds__add_clause__TypeInfo_13_13 = (MR_Word) &hlds__make_hlds__add_clause_scalar_common_1[4];
                {
                  hlds__make_hlds__add_clause__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__add_clause__TypeInfo_13_13, ((MR_Box) (hlds__make_hlds__add_clause__V_7_7)), ((MR_Box) (hlds__make_hlds__add_clause__V_8_8)));
                }
              }
          }
          break;
      }
    return hlds__make_hlds__add_clause__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_clause__add_clause_transform_20_p_0(
  MR_Word hlds__make_hlds__add_clause__Renaming_21,
  MR_Word hlds__make_hlds__add_clause__HeadVars_22,
  MR_Word hlds__make_hlds__add_clause__Args0_23,
  MR_Word hlds__make_hlds__add_clause__ParseTreeBodyGoal_24,
  MR_Word hlds__make_hlds__add_clause__Context_25,
  MR_Word hlds__make_hlds__add_clause__PredOrFunc_26,
  MR_Integer hlds__make_hlds__add_clause__Arity_27,
  MR_Word hlds__make_hlds__add_clause__GoalType_28,
  MR_Word * hlds__make_hlds__add_clause__Goal_29,
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_0_59,
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_60,
  MR_Word * hlds__make_hlds__add_clause__QuantWarnings_31,
  MR_Word * hlds__make_hlds__add_clause__StateVarWarnings_32,
  MR_Word * hlds__make_hlds__add_clause__StateVarErrors_33,
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_61,
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_62,
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_63,
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_64,
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_65,
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_66)
{
  {
    MR_bool hlds__make_hlds__add_clause__succeeded;
    MR_Word hlds__make_hlds__add_clause__HeadVarList_40;
    MR_Word hlds__make_hlds__add_clause__Args1_41;
    MR_Word hlds__make_hlds__add_clause__Args_42;
    MR_Word hlds__make_hlds__add_clause__FinalSVarMap_43;
    MR_Word hlds__make_hlds__add_clause__InitialSVarState_44;
    MR_Word hlds__make_hlds__add_clause__HeadGoal_46;
    MR_Word hlds__make_hlds__add_clause__BodyGoal_50;
    MR_Word hlds__make_hlds__add_clause__FinalSVarState_53;
    MR_Word hlds__make_hlds__add_clause__Goal0_54;
    MR_Word hlds__make_hlds__add_clause__VarTypes0_55;
    MR_Word hlds__make_hlds__add_clause__EmptyRttiVarmaps_56;
    MR_Word hlds__make_hlds__add_clause__VarTypes_57;
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_68_68;
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_SVarStore_70_70;
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_71_71;
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_SVarState_72_72;
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_SVarStore_73_73;
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_74_74;
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_75_75;
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_76_76;
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_77_77;
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_SVarStore_84_84;
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_85_85;
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_87_87;
    MR_Word hlds__make_hlds__add_clause__V_126_126;
    MR_Word hlds__make_hlds__add_clause__V_127_127;
    MR_Word hlds__make_hlds__add_clause__V_45_45;
    MR_Word hlds__make_hlds__add_clause__V_58_58;

    {
      hlds__make_hlds__add_clause__HeadVarList_40 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) &hlds__make_hlds__add_clause_scalar_common_1[3], hlds__make_hlds__add_clause__HeadVars_22);
    }
    {
      parse_tree__prog_rename__rename_vars_in_term_list_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__add_clause__Renaming_21, hlds__make_hlds__add_clause__Args0_23, &hlds__make_hlds__add_clause__Args1_41);
    }
    {
      hlds__make_hlds__state_var__svar_prepare_for_clause_head_9_p_0(hlds__make_hlds__add_clause__Args1_41, &hlds__make_hlds__add_clause__Args_42, hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_0_59, &hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_68_68, &hlds__make_hlds__add_clause__FinalSVarMap_43, &hlds__make_hlds__add_clause__InitialSVarState_44, &hlds__make_hlds__add_clause__STATE_VARIABLE_SVarStore_70_70, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_65, &hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_71_71);
    }
    hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__GoalType_28)) == (MR_mktag((MR_Integer) 1)));
    if (hlds__make_hlds__add_clause__succeeded)
      {
        hlds__make_hlds__add_clause__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__GoalType_28, (MR_Integer) 0)));
        {
          hlds__make_hlds__add_clause__HeadGoal_46 = hlds__make_goal__true_goal_0_f_0();
        }
        hlds__make_hlds__add_clause__STATE_VARIABLE_SVarStore_73_73 = hlds__make_hlds__add_clause__STATE_VARIABLE_SVarStore_70_70;
        hlds__make_hlds__add_clause__STATE_VARIABLE_SVarState_72_72 = hlds__make_hlds__add_clause__InitialSVarState_44;
        hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_77_77 = hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_71_71;
        hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_76_76 = hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_63;
        hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_75_75 = hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_61;
        hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_74_74 = hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_68_68;
      }
    else
      {
        MR_Word hlds__make_hlds__add_clause__ArgContext_47;
        MR_Word hlds__make_hlds__add_clause__HeadGoal0_48;
        MR_Word hlds__make_hlds__add_clause__HeadGoal1_49;

        {
          hlds__make_hlds__add_clause__ArgContext_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__ArgContext_47, 0) = ((MR_Box) (hlds__make_hlds__add_clause__PredOrFunc_26));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__ArgContext_47, 1) = ((MR_Box) (hlds__make_hlds__add_clause__Arity_27));
        }
        {
          hlds__make_hlds__add_clause__HeadGoal0_48 = hlds__make_goal__true_goal_0_f_0();
        }
        {
          hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_p_0(hlds__make_hlds__add_clause__HeadVarList_40, hlds__make_hlds__add_clause__Args_42, hlds__make_hlds__add_clause__Context_25, hlds__make_hlds__add_clause__ArgContext_47, hlds__make_hlds__add_clause__HeadGoal0_48, &hlds__make_hlds__add_clause__HeadGoal1_49, hlds__make_hlds__add_clause__InitialSVarState_44, &hlds__make_hlds__add_clause__STATE_VARIABLE_SVarState_72_72, hlds__make_hlds__add_clause__STATE_VARIABLE_SVarStore_70_70, &hlds__make_hlds__add_clause__STATE_VARIABLE_SVarStore_73_73, hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_68_68, &hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_74_74, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_75_75, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_63, &hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_76_76, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_71_71, &hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_77_77);
        }
        {
          hlds__goal_util__attach_features_to_all_goals_4_p_1((MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[69]), (MR_Integer) 1, hlds__make_hlds__add_clause__HeadGoal1_49, &hlds__make_hlds__add_clause__HeadGoal_46);
        }
      }
    {
      hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0((MR_Integer) 0, hlds__make_hlds__add_clause__ParseTreeBodyGoal_24, hlds__make_hlds__add_clause__Renaming_21, &hlds__make_hlds__add_clause__BodyGoal_50, hlds__make_hlds__add_clause__STATE_VARIABLE_SVarState_72_72, &hlds__make_hlds__add_clause__FinalSVarState_53, hlds__make_hlds__add_clause__STATE_VARIABLE_SVarStore_73_73, &hlds__make_hlds__add_clause__STATE_VARIABLE_SVarStore_84_84, hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_74_74, &hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_85_85, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_75_75, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_62, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_76_76, &hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_87_87, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_77_77, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_66);
    }
    {
      hlds__make_hlds__add_clause__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_127_127, 0) = ((MR_Box) (hlds__make_hlds__add_clause__BodyGoal_50));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_127_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_clause__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_126_126, 0) = ((MR_Box) (hlds__make_hlds__add_clause__HeadGoal_46));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_126_126, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_127_127));
    }
    {
      hlds__make_hlds__state_var__svar_finish_clause_body_9_p_0(hlds__make_hlds__add_clause__Context_25, hlds__make_hlds__add_clause__FinalSVarMap_43, hlds__make_hlds__add_clause__V_126_126, &hlds__make_hlds__add_clause__Goal0_54, hlds__make_hlds__add_clause__InitialSVarState_44, hlds__make_hlds__add_clause__FinalSVarState_53, hlds__make_hlds__add_clause__STATE_VARIABLE_SVarStore_84_84, hlds__make_hlds__add_clause__StateVarWarnings_32, hlds__make_hlds__add_clause__StateVarErrors_33);
    }
    {
      hlds__make_hlds__qual_info__qual_info_get_var_types_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_87_87, &hlds__make_hlds__add_clause__VarTypes0_55);
    }
    {
      hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&hlds__make_hlds__add_clause__EmptyRttiVarmaps_56);
    }
    {
      hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 0, hlds__make_hlds__add_clause__HeadVarList_40, hlds__make_hlds__add_clause__QuantWarnings_31, hlds__make_hlds__add_clause__Goal0_54, hlds__make_hlds__add_clause__Goal_29, hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_85_85, hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_60, hlds__make_hlds__add_clause__VarTypes0_55, &hlds__make_hlds__add_clause__VarTypes_57, hlds__make_hlds__add_clause__EmptyRttiVarmaps_56, &hlds__make_hlds__add_clause__V_58_58);
    }
    {
      hlds__make_hlds__qual_info__qual_info_set_var_types_3_p_0(hlds__make_hlds__add_clause__VarTypes_57, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_87_87, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_64);
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_clause__get_mode_annotations_4_p_0(
  MR_Word hlds__make_hlds__add_clause__HeadVar__1_1,
  MR_Word * hlds__make_hlds__add_clause__HeadVar__2_2,
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_0_3,
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_4)
{
  {
    MR_bool hlds__make_hlds__add_clause__succeeded;

    if ((hlds__make_hlds__add_clause__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *hlds__make_hlds__add_clause__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_4 = hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_0_3;
      }
    else
      {
        MR_Word hlds__make_hlds__add_clause__Arg0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__add_clause__Args0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__add_clause__Arg_10;
        MR_Word hlds__make_hlds__add_clause__Args_11;
        MR_Word hlds__make_hlds__add_clause__MaybeAnnotation_13;
        MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_16_16;
        MR_Word hlds__make_hlds__add_clause__Arg1_21;
        MR_Word hlds__make_hlds__add_clause__Mode_24;
        MR_Word hlds__make_hlds__add_clause__TypeCtorInfo_18_32;
        MR_Word hlds__make_hlds__add_clause__TypeCtorInfo_19_33;
        MR_Word hlds__make_hlds__add_clause__ModeTerm_22;
        MR_Word hlds__make_hlds__add_clause__V_25_25;
        MR_String hlds__make_hlds__add_clause__V_26_26;
        MR_Word hlds__make_hlds__add_clause__V_27_27;
        MR_Word hlds__make_hlds__add_clause__V_28_28;
        MR_Word hlds__make_hlds__add_clause__V_29_29;
        MR_Word hlds__make_hlds__add_clause__V_30_30;
        MR_Word hlds__make_hlds__add_clause__V_31_31;
        MR_Word hlds__make_hlds__add_clause__V_23_23;

        hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__Arg0_8)) == (MR_mktag((MR_Integer) 0)));
        if (hlds__make_hlds__add_clause__succeeded)
          {
            hlds__make_hlds__add_clause__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Arg0_8, (MR_Integer) 0)));
            hlds__make_hlds__add_clause__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Arg0_8, (MR_Integer) 1)));
            hlds__make_hlds__add_clause__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Arg0_8, (MR_Integer) 2)));
            hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__V_25_25)) == (MR_mktag((MR_Integer) 0)));
            if (hlds__make_hlds__add_clause__succeeded)
              {
                hlds__make_hlds__add_clause__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__V_25_25, (MR_Integer) 0)));
                hlds__make_hlds__add_clause__succeeded = (strcmp(hlds__make_hlds__add_clause__V_26_26, (MR_String) "::") == 0);
                if (hlds__make_hlds__add_clause__succeeded)
                  {
                    hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__V_27_27)) == (MR_mktag((MR_Integer) 1)));
                    if (hlds__make_hlds__add_clause__succeeded)
                      {
                        hlds__make_hlds__add_clause__Arg1_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_27_27, (MR_Integer) 0)));
                        hlds__make_hlds__add_clause__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_27_27, (MR_Integer) 1)));
                        hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__V_28_28)) == (MR_mktag((MR_Integer) 1)));
                        if (hlds__make_hlds__add_clause__succeeded)
                          {
                            hlds__make_hlds__add_clause__ModeTerm_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_28_28, (MR_Integer) 0)));
                            hlds__make_hlds__add_clause__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_28_28, (MR_Integer) 1)));
                            hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (hlds__make_hlds__add_clause__succeeded)
                              {
                                hlds__make_hlds__add_clause__V_30_30 = (MR_Integer) 0;
                                hlds__make_hlds__add_clause__TypeCtorInfo_18_32 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                                hlds__make_hlds__add_clause__TypeCtorInfo_19_33 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
                                {
                                  hlds__make_hlds__add_clause__V_31_31 = mercury__term__coerce_1_f_0(hlds__make_hlds__add_clause__TypeCtorInfo_18_32, hlds__make_hlds__add_clause__TypeCtorInfo_19_33, hlds__make_hlds__add_clause__ModeTerm_22);
                                }
                                {
                                  hlds__make_hlds__add_clause__succeeded = parse_tree__prog_io_inst_mode_name__convert_mode_3_p_0(hlds__make_hlds__add_clause__V_30_30, hlds__make_hlds__add_clause__V_31_31, &hlds__make_hlds__add_clause__Mode_24);
                                }
                              }
                          }
                      }
                  }
              }
          }
        if (hlds__make_hlds__add_clause__succeeded)
          {
            hlds__make_hlds__add_clause__Arg_10 = hlds__make_hlds__add_clause__Arg1_21;
            {
              hlds__make_hlds__add_clause__MaybeAnnotation_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__MaybeAnnotation_13, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Mode_24));
            }
          }
        else
          {
            hlds__make_hlds__add_clause__Arg_10 = hlds__make_hlds__add_clause__Arg0_8;
            hlds__make_hlds__add_clause__MaybeAnnotation_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
        switch (MR_tag((MR_Word) hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_0_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_0_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                if ((hlds__make_hlds__add_clause__MaybeAnnotation_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                else
                  {
                    MR_Word hlds__make_hlds__add_clause__Mode_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__MaybeAnnotation_13, (MR_Integer) 0)));
                    MR_Word hlds__make_hlds__add_clause__V_35_35;

                    {
                      hlds__make_hlds__add_clause__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_35_35, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Mode_34));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_16_16, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_35_35));
                    }
                  }
                break;
              case (MR_Integer) 1:
                if ((hlds__make_hlds__add_clause__MaybeAnnotation_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                else
                  hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
                break;
              case (MR_Integer) 2:
                hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word hlds__make_hlds__add_clause__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_0_3, (MR_Integer) 0)));

              if ((hlds__make_hlds__add_clause__MaybeAnnotation_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
              else
                {
                  MR_Word hlds__make_hlds__add_clause__Mode_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__MaybeAnnotation_13, (MR_Integer) 0)));
                  MR_Word hlds__make_hlds__add_clause__V_41_41;
                  MR_Word hlds__make_hlds__add_clause__V_42_42;

                  {
                    hlds__make_hlds__add_clause__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_42_42, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Mode_39));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    hlds__make_hlds__add_clause__V_41_41 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__make_hlds__add_clause__V_47_47, hlds__make_hlds__add_clause__V_42_42);
                  }
                  {
                    hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_16_16, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_41_41));
                  }
                }
            }
            break;
        }
        {
          hlds__make_hlds__add_clause__get_mode_annotations_4_p_0(hlds__make_hlds__add_clause__Args0_9, &hlds__make_hlds__add_clause__Args_11, hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_16_16, hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_4);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__make_hlds__add_clause__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Arg_10));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_clause__Args_11));
        }
      }
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_clause__mode_decl_for_pred_info_to_pieces_2_f_0(
  MR_Word hlds__make_hlds__add_clause__PredInfo_4,
  MR_Integer hlds__make_hlds__add_clause__ProcId_5)
{
  {
    MR_bool hlds__make_hlds__add_clause__succeeded;
    MR_Word hlds__make_hlds__add_clause__HeadVar__3_3;
    MR_Word hlds__make_hlds__add_clause__V_8_8;
    MR_Word hlds__make_hlds__add_clause__V_9_9;
    MR_String hlds__make_hlds__add_clause__V_10_10;

    {
      hlds__make_hlds__add_clause__V_10_10 = check_hlds__mode_errors__mode_decl_to_string_2_f_0(hlds__make_hlds__add_clause__ProcId_5, hlds__make_hlds__add_clause__PredInfo_4);
    }
    {
      hlds__make_hlds__add_clause__V_9_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_9_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_9_9, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_10_10));
    }
    {
      hlds__make_hlds__add_clause__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_8_8, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_9_9));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_8_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[68])));
    }
    {
      hlds__make_hlds__add_clause__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__HeadVar__3_3, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[66])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__HeadVar__3_3, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_8_8));
    }
    return hlds__make_hlds__add_clause__HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_clause__undeclared_mode_error_8_p_0_1(
  MR_Box hlds__make_hlds__add_clause__closure_arg,
  MR_Box hlds__make_hlds__add_clause__wrapper_arg_1)
{
  {
    MR_Box hlds__make_hlds__add_clause__wrapper_arg_2;
    MR_Box hlds__make_hlds__add_clause__closure = hlds__make_hlds__add_clause__closure_arg;
    MR_Word hlds__make_hlds__add_clause__conv0_HeadVar__3_3;

    {
      hlds__make_hlds__add_clause__conv0_HeadVar__3_3 = hlds__make_hlds__add_clause__mode_decl_for_pred_info_to_pieces_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__closure, (MR_Integer) 3))), ((MR_Integer) hlds__make_hlds__add_clause__wrapper_arg_1));
    }
    hlds__make_hlds__add_clause__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_clause__conv0_HeadVar__3_3));
    return hlds__make_hlds__add_clause__wrapper_arg_2;
  }
}

static void MR_CALL 
hlds__make_hlds__add_clause__undeclared_mode_error_8_p_0(
  MR_Word hlds__make_hlds__add_clause__ModeList_9,
  MR_Word hlds__make_hlds__add_clause__VarSet_10,
  MR_Word hlds__make_hlds__add_clause__PredId_11,
  MR_Word hlds__make_hlds__add_clause__PredInfo_12,
  MR_Word hlds__make_hlds__add_clause__ModuleInfo_13,
  MR_Word hlds__make_hlds__add_clause__Context_14,
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_31,
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_32)
{
  {
    MR_bool hlds__make_hlds__add_clause__succeeded;
    MR_Word hlds__make_hlds__add_clause__TypeCtorInfo_120_120;
    MR_Word hlds__make_hlds__add_clause__PredIdPieces_16;
    MR_Word hlds__make_hlds__add_clause__StrippedModeList_17;
    MR_Word hlds__make_hlds__add_clause__PredOrFunc_18;
    MR_String hlds__make_hlds__add_clause__Name_19;
    MR_String hlds__make_hlds__add_clause__SubDeclStr_21;
    MR_Word hlds__make_hlds__add_clause__MainPieces_22;
    MR_Word hlds__make_hlds__add_clause__ProcIds_23;
    MR_Word hlds__make_hlds__add_clause__VerbosePieces_24;
    MR_Word hlds__make_hlds__add_clause__Msg_29;
    MR_Word hlds__make_hlds__add_clause__Spec_30;
    MR_Word hlds__make_hlds__add_clause__V_35_35;
    MR_Word hlds__make_hlds__add_clause__V_36_36;
    MR_Word hlds__make_hlds__add_clause__V_41_41;
    MR_Word hlds__make_hlds__add_clause__V_42_42;
    MR_Word hlds__make_hlds__add_clause__V_45_45;
    MR_Word hlds__make_hlds__add_clause__V_47_47;
    MR_Word hlds__make_hlds__add_clause__V_50_50;
    MR_Word hlds__make_hlds__add_clause__V_51_51;
    MR_Word hlds__make_hlds__add_clause__V_107_107;
    MR_Word hlds__make_hlds__add_clause__V_108_108;
    MR_Word hlds__make_hlds__add_clause__V_109_109;
    MR_Word hlds__make_hlds__add_clause__V_110_110;
    MR_Word hlds__make_hlds__add_clause__V_115_115;

    {
      hlds__make_hlds__add_clause__PredIdPieces_16 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(hlds__make_hlds__add_clause__ModuleInfo_13, (MR_Integer) 1, hlds__make_hlds__add_clause__PredId_11);
    }
    {
      parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_p_0(hlds__make_hlds__add_clause__ModeList_9, &hlds__make_hlds__add_clause__StrippedModeList_17);
    }
    {
      hlds__make_hlds__add_clause__PredOrFunc_18 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__make_hlds__add_clause__PredInfo_12);
    }
    {
      hlds__make_hlds__add_clause__Name_19 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__make_hlds__add_clause__PredInfo_12);
    }
    {
      hlds__make_hlds__add_clause__V_35_35 = mercury__varset__coerce_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, hlds__make_hlds__add_clause__VarSet_10);
    }
    {
      hlds__make_hlds__add_clause__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__V_36_36, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Name_19));
    }
    {
      hlds__make_hlds__add_clause__SubDeclStr_21 = parse_tree__parse_tree_out_pred_decl__mercury_mode_subdecl_to_string_6_f_0((MR_Integer) 1, hlds__make_hlds__add_clause__PredOrFunc_18, hlds__make_hlds__add_clause__V_35_35, hlds__make_hlds__add_clause__V_36_36, hlds__make_hlds__add_clause__StrippedModeList_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
    hlds__make_hlds__add_clause__TypeCtorInfo_120_120 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    {
      hlds__make_hlds__add_clause__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_51_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_51_51, 1) = ((MR_Box) (hlds__make_hlds__add_clause__SubDeclStr_21));
    }
    {
      hlds__make_hlds__add_clause__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_50_50, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_51_51));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[19])));
    }
    {
      hlds__make_hlds__add_clause__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_47_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[60])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_47_47, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_50_50));
    }
    {
      hlds__make_hlds__add_clause__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_45_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_45_45, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_47_47));
    }
    {
      hlds__make_hlds__add_clause__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_42_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[59])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_42_42, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_45_45));
    }
    {
      hlds__make_hlds__add_clause__V_41_41 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_clause__TypeCtorInfo_120_120, hlds__make_hlds__add_clause__PredIdPieces_16, hlds__make_hlds__add_clause__V_42_42);
    }
    {
      hlds__make_hlds__add_clause__MainPieces_22 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_clause__TypeCtorInfo_120_120, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[58]), hlds__make_hlds__add_clause__V_41_41);
    }
    {
      hlds__make_hlds__add_clause__ProcIds_23 = hlds__hlds_pred__pred_info_all_procids_1_f_0(hlds__make_hlds__add_clause__PredInfo_12);
    }
    if ((hlds__make_hlds__add_clause__ProcIds_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word hlds__make_hlds__add_clause__V_99_99;
        MR_Word hlds__make_hlds__add_clause__V_100_100;

        {
          hlds__make_hlds__add_clause__V_100_100 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_100_100, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_100_100, 1) = ((MR_Box) (hlds__make_hlds__add_clause__PredOrFunc_18));
        }
        {
          hlds__make_hlds__add_clause__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_99_99, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_100_100));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[43])));
        }
        {
          hlds__make_hlds__add_clause__VerbosePieces_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__VerbosePieces_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[61])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__VerbosePieces_24, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_99_99));
        }
      }
    else
      {
        MR_Integer hlds__make_hlds__add_clause__ProcIdsHead_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__ProcIds_23, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__add_clause__ProcIdsTail_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__ProcIds_23, (MR_Integer) 1)));

        if ((hlds__make_hlds__add_clause__ProcIdsTail_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word hlds__make_hlds__add_clause__V_79_79;
            MR_Word hlds__make_hlds__add_clause__V_82_82;
            MR_Word hlds__make_hlds__add_clause__V_83_83;
            MR_Word hlds__make_hlds__add_clause__V_91_91;
            MR_Word hlds__make_hlds__add_clause__V_92_92;

            {
              hlds__make_hlds__add_clause__V_83_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_83_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_83_83, 1) = ((MR_Box) (hlds__make_hlds__add_clause__PredOrFunc_18));
            }
            {
              hlds__make_hlds__add_clause__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_82_82, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_83_83));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[47])));
            }
            {
              hlds__make_hlds__add_clause__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_79_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[62])));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_79_79, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_82_82));
            }
            {
              hlds__make_hlds__add_clause__V_92_92 = hlds__make_hlds__add_clause__mode_decl_for_pred_info_to_pieces_2_f_0(hlds__make_hlds__add_clause__PredInfo_12, hlds__make_hlds__add_clause__ProcIdsHead_25);
            }
            {
              hlds__make_hlds__add_clause__V_91_91 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_clause__TypeCtorInfo_120_120, hlds__make_hlds__add_clause__V_92_92, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[64]));
            }
            {
              hlds__make_hlds__add_clause__VerbosePieces_24 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_clause__TypeCtorInfo_120_120, hlds__make_hlds__add_clause__V_79_79, hlds__make_hlds__add_clause__V_91_91);
            }
          }
        else
          {
            MR_Word hlds__make_hlds__add_clause__V_58_58;
            MR_Word hlds__make_hlds__add_clause__V_61_61;
            MR_Word hlds__make_hlds__add_clause__V_62_62;
            MR_Word hlds__make_hlds__add_clause__V_70_70;
            MR_Word hlds__make_hlds__add_clause__V_71_71;
            MR_Word hlds__make_hlds__add_clause__V_72_72;
            MR_Word hlds__make_hlds__add_clause__V_73_73;

            {
              hlds__make_hlds__add_clause__V_62_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_62_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_62_62, 1) = ((MR_Box) (hlds__make_hlds__add_clause__PredOrFunc_18));
            }
            {
              hlds__make_hlds__add_clause__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_61_61, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_62_62));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[49])));
            }
            {
              hlds__make_hlds__add_clause__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_58_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[65])));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_58_58, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_61_61));
            }
            {
              hlds__make_hlds__add_clause__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__V_73_73, 0) = ((MR_Box) (&hlds__make_hlds__add_clause_scalar_common_5[0]));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__V_73_73, 1) = ((MR_Box) (hlds__make_hlds__add_clause__undeclared_mode_error_8_p_0_1));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__V_73_73, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__V_73_73, 3) = ((MR_Box) (hlds__make_hlds__add_clause__PredInfo_12));
            }
            {
              hlds__make_hlds__add_clause__V_72_72 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__make_hlds__add_clause_scalar_common_1[2], hlds__make_hlds__add_clause__V_73_73, hlds__make_hlds__add_clause__ProcIds_23);
            }
            {
              hlds__make_hlds__add_clause__V_71_71 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(hlds__make_hlds__add_clause__V_72_72, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
            }
            {
              hlds__make_hlds__add_clause__V_70_70 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_clause__TypeCtorInfo_120_120, hlds__make_hlds__add_clause__V_71_71, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[64]));
            }
            {
              hlds__make_hlds__add_clause__VerbosePieces_24 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_clause__TypeCtorInfo_120_120, hlds__make_hlds__add_clause__V_58_58, hlds__make_hlds__add_clause__V_70_70);
            }
          }
      }
    {
      hlds__make_hlds__add_clause__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__V_108_108, 0) = ((MR_Box) (hlds__make_hlds__add_clause__MainPieces_22));
    }
    {
      hlds__make_hlds__add_clause__V_110_110 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_clause__V_110_110, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_clause__V_110_110, 1) = ((MR_Box) (hlds__make_hlds__add_clause__VerbosePieces_24));
    }
    {
      hlds__make_hlds__add_clause__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_109_109, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_110_110));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_109_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_clause__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_107_107, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_108_108));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_107_107, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_109_109));
    }
    {
      hlds__make_hlds__add_clause__Msg_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Msg_29, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Context_14));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Msg_29, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_107_107));
    }
    {
      hlds__make_hlds__add_clause__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_115_115, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Msg_29));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_115_115, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_clause__Spec_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_30, 2) = ((MR_Box) (hlds__make_hlds__add_clause__V_115_115));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_32 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Spec_30));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_31));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_clause__select_applicable_modes_15_p_0(
  MR_Word hlds__make_hlds__add_clause__Args0_16,
  MR_Word hlds__make_hlds__add_clause__VarSet_17,
  MR_Word hlds__make_hlds__add_clause__PredStatus_18,
  MR_Word hlds__make_hlds__add_clause__Context_19,
  MR_Word hlds__make_hlds__add_clause__PredId_20,
  MR_Word hlds__make_hlds__add_clause__PredInfo_21,
  MR_Word * hlds__make_hlds__add_clause__Args_22,
  MR_Word * hlds__make_hlds__add_clause__ApplProcIds_23,
  MR_Word * hlds__make_hlds__add_clause__AllProcIds_24,
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_42,
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_43,
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_44,
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_45,
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_46,
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_47)
{
  {
    MR_bool hlds__make_hlds__add_clause__succeeded;
    MR_Word hlds__make_hlds__add_clause__ModeAnnotations_28;

    {
      *hlds__make_hlds__add_clause__AllProcIds_24 = hlds__hlds_pred__pred_info_all_procids_1_f_0(hlds__make_hlds__add_clause__PredInfo_21);
    }
    {
      hlds__make_hlds__add_clause__get_mode_annotations_4_p_0(hlds__make_hlds__add_clause__Args0_16, hlds__make_hlds__add_clause__Args_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__add_clause__ModeAnnotations_28);
    }
    switch (MR_tag((MR_Word) hlds__make_hlds__add_clause__ModeAnnotations_28)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(hlds__make_hlds__add_clause__ModeAnnotations_28)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              {
                hlds__make_hlds__add_clause__succeeded = hlds__hlds_pred__pred_info_pragma_goal_type_1_p_0(hlds__make_hlds__add_clause__PredInfo_21);
              }
              if (hlds__make_hlds__add_clause__succeeded)
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *hlds__make_hlds__add_clause__ApplProcIds_23 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (*hlds__make_hlds__add_clause__AllProcIds_24));
                }
              else
                *hlds__make_hlds__add_clause__ApplProcIds_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_45 = hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_44;
              *hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_47 = hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_46;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String hlds__make_hlds__add_clause__PredIdStr_38;
              MR_Word hlds__make_hlds__add_clause__Pieces_39;
              MR_Word hlds__make_hlds__add_clause__Msg_40;
              MR_Word hlds__make_hlds__add_clause__Spec_41;
              MR_Word hlds__make_hlds__add_clause__V_51_51;
              MR_Word hlds__make_hlds__add_clause__V_52_52;
              MR_Word hlds__make_hlds__add_clause__V_67_67;
              MR_Word hlds__make_hlds__add_clause__V_68_68;
              MR_Word hlds__make_hlds__add_clause__V_72_72;

              {
                hlds__make_hlds__add_clause__PredIdStr_38 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_42, hlds__make_hlds__add_clause__PredId_20);
              }
              {
                hlds__make_hlds__add_clause__V_52_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), hlds__make_hlds__add_clause__V_52_52, 0) = ((MR_Box) (hlds__make_hlds__add_clause__PredIdStr_38));
              }
              {
                hlds__make_hlds__add_clause__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_51_51, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_52_52));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[41])));
              }
              {
                hlds__make_hlds__add_clause__Pieces_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__Pieces_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[57])));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__Pieces_39, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_51_51));
              }
              {
                hlds__make_hlds__add_clause__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__V_68_68, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Pieces_39));
              }
              {
                hlds__make_hlds__add_clause__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_67_67, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_68_68));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                hlds__make_hlds__add_clause__Msg_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Msg_40, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Context_19));
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Msg_40, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_67_67));
              }
              {
                hlds__make_hlds__add_clause__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_72_72, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Msg_40));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                hlds__make_hlds__add_clause__Spec_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_41, 2) = ((MR_Box) (hlds__make_hlds__add_clause__V_72_72));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_47 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Spec_41));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_46));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *hlds__make_hlds__add_clause__ApplProcIds_23 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (*hlds__make_hlds__add_clause__AllProcIds_24));
              }
              *hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_45 = hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_44;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__make_hlds__add_clause__ModeList0_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__ModeAnnotations_28, (MR_Integer) 0)));
          MR_Word hlds__make_hlds__add_clause__ModeList_30;
          MR_Word hlds__make_hlds__add_clause__Procs_35;
          MR_Word hlds__make_hlds__add_clause__ExistingProcs_36;
          MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_76_76;
          MR_Word hlds__make_hlds__add_clause__V_75_75 = (MR_Word) hlds__make_hlds__add_clause__PredStatus_18;
          MR_Integer hlds__make_hlds__add_clause__ProcId_37;

          hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__V_75_75 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (hlds__make_hlds__add_clause__succeeded)
            {
              hlds__make_hlds__add_clause__ModeList_30 = hlds__make_hlds__add_clause__ModeList0_29;
              hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_76_76 = hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_46;
              *hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_45 = hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_44;
            }
          else
            {
              MR_Word hlds__make_hlds__add_clause__Exported_31;
              MR_Word hlds__make_hlds__add_clause__InInt_32;
              MR_Word hlds__make_hlds__add_clause__MQInfo0_33;
              MR_Word hlds__make_hlds__add_clause__MQInfo_34;

              {
                hlds__make_hlds__add_clause__Exported_31 = hlds__status__pred_status_is_exported_to_non_submodules_1_f_0(hlds__make_hlds__add_clause__PredStatus_18);
              }
              switch (hlds__make_hlds__add_clause__Exported_31) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  hlds__make_hlds__add_clause__InInt_32 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 1:
                  hlds__make_hlds__add_clause__InInt_32 = (MR_Integer) 1;
                  break;
              }
              {
                hlds__make_hlds__qual_info__qual_info_get_mq_info_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_44, &hlds__make_hlds__add_clause__MQInfo0_33);
              }
              {
                parse_tree__module_qual__qualify_clause_mode_list_8_p_0(hlds__make_hlds__add_clause__InInt_32, hlds__make_hlds__add_clause__Context_19, hlds__make_hlds__add_clause__ModeList0_29, &hlds__make_hlds__add_clause__ModeList_30, hlds__make_hlds__add_clause__MQInfo0_33, &hlds__make_hlds__add_clause__MQInfo_34, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_46, &hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_76_76);
              }
              {
                hlds__make_hlds__qual_info__qual_info_set_mq_info_3_p_0(hlds__make_hlds__add_clause__MQInfo_34, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_44, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_45);
              }
            }
          {
            hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__make_hlds__add_clause__PredInfo_21, &hlds__make_hlds__add_clause__Procs_35);
          }
          {
            mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, hlds__make_hlds__add_clause__Procs_35, &hlds__make_hlds__add_clause__ExistingProcs_36);
          }
          {
            hlds__make_hlds__add_clause__succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(hlds__make_hlds__add_clause__ExistingProcs_36, hlds__make_hlds__add_clause__ModeList_30, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_42, &hlds__make_hlds__add_clause__ProcId_37);
          }
          if (hlds__make_hlds__add_clause__succeeded)
            {
              MR_Word hlds__make_hlds__add_clause__V_78_78;

              {
                hlds__make_hlds__add_clause__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_78_78, 0) = ((MR_Box) (hlds__make_hlds__add_clause__ProcId_37));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *hlds__make_hlds__add_clause__ApplProcIds_23 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_78_78));
              }
              *hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_47 = hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_76_76;
            }
          else
            {
              {
                hlds__make_hlds__add_clause__undeclared_mode_error_8_p_0(hlds__make_hlds__add_clause__ModeList_30, hlds__make_hlds__add_clause__VarSet_17, hlds__make_hlds__add_clause__PredId_20, hlds__make_hlds__add_clause__PredInfo_21, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_42, hlds__make_hlds__add_clause__Context_19, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_76_76, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_47);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *hlds__make_hlds__add_clause__ApplProcIds_23 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (*hlds__make_hlds__add_clause__AllProcIds_24));
              }
            }
        }
        break;
    }
    *hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_43 = hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_42;
  }
}

static void MR_CALL 
hlds__make_hlds__add_clause__module_add_clause_2_19_p_0(
  MR_Word hlds__make_hlds__add_clause__ClauseVarSet_20,
  MR_Word hlds__make_hlds__add_clause__PredOrFunc_21,
  MR_Word hlds__make_hlds__add_clause__PredName_22,
  MR_Word hlds__make_hlds__add_clause__PredId_23,
  MR_Word hlds__make_hlds__add_clause__Args_24,
  MR_Integer hlds__make_hlds__add_clause__Arity_25,
  MR_Integer hlds__make_hlds__add_clause__ArityAdjustment_26,
  MR_Word hlds__make_hlds__add_clause__MaybeBodyGoal_27,
  MR_Word hlds__make_hlds__add_clause__PredStatus_28,
  MR_Word hlds__make_hlds__add_clause__Context_29,
  MR_Word hlds__make_hlds__add_clause__MaybeSeqNum_30,
  MR_Word hlds__make_hlds__add_clause__GoalType_31,
  MR_Word hlds__make_hlds__add_clause__IllegalSVarResult_32,
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_87,
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_88,
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_89,
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_90,
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_91,
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_92)
{
  {
    MR_bool hlds__make_hlds__add_clause__succeeded;
    MR_Word hlds__make_hlds__add_clause__TypeCtorInfo_229_229;
    MR_Word hlds__make_hlds__add_clause__TypeCtorInfo_230_230;
    MR_Word hlds__make_hlds__add_clause__PredMap0_39;
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_PredicateTable_93_93;
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_94_94;
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_117_117;
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_PredSpecs_118_118;
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_PredSpecs_119_119;
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_PredSpecs_163_163;
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_PredSpecs_176_176;
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_177_177;
    MR_Box hlds__make_hlds__add_clause__conv0_STATE_VARIABLE_PredInfo_94_94;
    MR_Word hlds__make_hlds__add_clause__VeryVerbose_42;
    MR_Word hlds__make_hlds__add_clause__Globals_204;
    MR_Word hlds__make_hlds__add_clause__V_112_112;
    MR_Integer hlds__make_hlds__add_clause__FuncArity_51;
    MR_Word hlds__make_hlds__add_clause__V_120_120;
    MR_Integer hlds__make_hlds__add_clause__V_235_235;
    MR_Word hlds__make_hlds__add_clause__V_52_52;
    MR_Word hlds__make_hlds__add_clause__V_53_53;
    MR_Word hlds__make_hlds__add_clause__V_121_121;
    MR_Word hlds__make_hlds__add_clause__V_62_62;

    {
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_87, &hlds__make_hlds__add_clause__STATE_VARIABLE_PredicateTable_93_93);
    }
    {
      hlds__pred_table__predicate_table_get_preds_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_PredicateTable_93_93, &hlds__make_hlds__add_clause__PredMap0_39);
    }
    hlds__make_hlds__add_clause__TypeCtorInfo_229_229 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
    hlds__make_hlds__add_clause__TypeCtorInfo_230_230 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
    {
      mercury__map__lookup_3_p_0(hlds__make_hlds__add_clause__TypeCtorInfo_229_229, hlds__make_hlds__add_clause__TypeCtorInfo_230_230, hlds__make_hlds__add_clause__PredMap0_39, ((MR_Box) (hlds__make_hlds__add_clause__PredId_23)), &hlds__make_hlds__add_clause__conv0_STATE_VARIABLE_PredInfo_94_94);
    }
    hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_94_94 = ((MR_Word) hlds__make_hlds__add_clause__conv0_STATE_VARIABLE_PredInfo_94_94);
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_87, &hlds__make_hlds__add_clause__Globals_204);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_clause__Globals_204, (MR_Integer) 48, &hlds__make_hlds__add_clause__VeryVerbose_42);
    }
    switch (hlds__make_hlds__add_clause__VeryVerbose_42) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__make_hlds__add_clause__MsgClauses_43;
          MR_Integer hlds__make_hlds__add_clause__NumClauses_44;
          MR_Integer hlds__make_hlds__add_clause__PredArity0_45;
          MR_Integer hlds__make_hlds__add_clause__PredArity_46;
          MR_Integer hlds__make_hlds__add_clause__OrigArity_47;
          MR_Word hlds__make_hlds__add_clause__V_97_97;
          MR_Integer hlds__make_hlds__add_clause__V_102_102;
          MR_Word hlds__make_hlds__add_clause__V_108_108;
          MR_String hlds__make_hlds__add_clause__V_239_239;
          MR_Word hlds__make_hlds__add_clause__V_210_210;
          MR_Word hlds__make_hlds__add_clause__V_211_211;
          MR_Word hlds__make_hlds__add_clause__V_212_212;
          MR_Word hlds__make_hlds__add_clause__V_213_213;
          MR_Word hlds__make_hlds__add_clause__V_214_214;
          MR_Word hlds__make_hlds__add_clause__V_215_215;
          MR_Word hlds__make_hlds__add_clause__V_216_216;
          MR_Word hlds__make_hlds__add_clause__V_217_217;
          MR_Word hlds__make_hlds__add_clause__V_218_218;

          {
            hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_94_94, &hlds__make_hlds__add_clause__MsgClauses_43);
          }
          hlds__make_hlds__add_clause__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__MsgClauses_43, (MR_Integer) 0)));
          hlds__make_hlds__add_clause__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__MsgClauses_43, (MR_Integer) 1)));
          hlds__make_hlds__add_clause__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__MsgClauses_43, (MR_Integer) 2)));
          hlds__make_hlds__add_clause__V_213_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__MsgClauses_43, (MR_Integer) 3)));
          hlds__make_hlds__add_clause__V_214_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__MsgClauses_43, (MR_Integer) 4)));
          hlds__make_hlds__add_clause__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__MsgClauses_43, (MR_Integer) 5)));
          hlds__make_hlds__add_clause__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__MsgClauses_43, (MR_Integer) 6)));
          hlds__make_hlds__add_clause__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__MsgClauses_43, (MR_Integer) 7)));
          hlds__make_hlds__add_clause__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__MsgClauses_43, (MR_Integer) 8)));
          hlds__make_hlds__add_clause__V_218_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__MsgClauses_43, (MR_Integer) 9)));
          {
            hlds__make_hlds__add_clause__NumClauses_44 = hlds__hlds_clauses__num_clauses_in_clauses_rep_1_f_0(hlds__make_hlds__add_clause__V_97_97);
          }
          hlds__make_hlds__add_clause__V_102_102 = (hlds__make_hlds__add_clause__NumClauses_44 + (MR_Integer) 1);
          {
            mercury__io__write_string_3_p_0((MR_String) "% Processing clause ");
          }
          {
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &hlds__make_hlds__add_clause_scalar_common_2[2], hlds__make_hlds__add_clause__V_102_102, &hlds__make_hlds__add_clause__V_239_239);
          }
          {
            mercury__io__write_string_3_p_0(hlds__make_hlds__add_clause__V_239_239);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) " for ");
          }
          {
            parse_tree__prog_out__write_pred_or_func_3_p_0(hlds__make_hlds__add_clause__PredOrFunc_21);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) " \140");
          }
          {
            mercury__list__length_2_p_0((MR_Word) &hlds__make_hlds__add_clause_scalar_common_1[0], hlds__make_hlds__add_clause__Args_24, &hlds__make_hlds__add_clause__PredArity0_45);
          }
          hlds__make_hlds__add_clause__PredArity_46 = (hlds__make_hlds__add_clause__PredArity0_45 + hlds__make_hlds__add_clause__ArityAdjustment_26);
          {
            parse_tree__prog_util__adjust_func_arity_3_p_1(hlds__make_hlds__add_clause__PredOrFunc_21, &hlds__make_hlds__add_clause__OrigArity_47, hlds__make_hlds__add_clause__PredArity_46);
          }
          {
            hlds__make_hlds__add_clause__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__V_108_108, 0) = ((MR_Box) (hlds__make_hlds__add_clause__PredName_22));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__V_108_108, 1) = ((MR_Box) (hlds__make_hlds__add_clause__OrigArity_47));
          }
          {
            parse_tree__prog_out__write_sym_name_and_arity_3_p_0(hlds__make_hlds__add_clause__V_108_108);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "\'...\n");
          }
        }
        break;
    }
    hlds__make_hlds__add_clause__V_112_112 = (MR_Word) hlds__make_hlds__add_clause__PredStatus_28;
    hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__V_112_112 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (hlds__make_hlds__add_clause__succeeded)
      {
        MR_Word hlds__make_hlds__add_clause__InitMarkers0_48;
        MR_Word hlds__make_hlds__add_clause__InitMarkers_49;
        MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_114_114;

        {
          hlds__hlds_pred__pred_info_set_status_3_p_0(hlds__make_hlds__add_clause__PredStatus_28, hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_94_94, &hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_114_114);
        }
        {
          hlds__hlds_pred__pred_info_get_markers_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_114_114, &hlds__make_hlds__add_clause__InitMarkers0_48);
        }
        {
          hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 21, hlds__make_hlds__add_clause__InitMarkers0_48, &hlds__make_hlds__add_clause__InitMarkers_49);
        }
        {
          hlds__hlds_pred__pred_info_set_markers_3_p_0(hlds__make_hlds__add_clause__InitMarkers_49, hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_114_114, &hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_117_117);
        }
      }
    else
      hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_117_117 = hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_94_94;
    hlds__make_hlds__add_clause__STATE_VARIABLE_PredSpecs_118_118 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    if ((hlds__make_hlds__add_clause__IllegalSVarResult_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      hlds__make_hlds__add_clause__STATE_VARIABLE_PredSpecs_119_119 = hlds__make_hlds__add_clause__STATE_VARIABLE_PredSpecs_118_118;
    else
      {
        MR_Word hlds__make_hlds__add_clause__StateVar_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__IllegalSVarResult_32, (MR_Integer) 0)));

        {
          hlds__make_hlds__state_var__report_illegal_func_svar_result_5_p_0(hlds__make_hlds__add_clause__Context_29, hlds__make_hlds__add_clause__ClauseVarSet_20, hlds__make_hlds__add_clause__StateVar_50, hlds__make_hlds__add_clause__STATE_VARIABLE_PredSpecs_118_118, &hlds__make_hlds__add_clause__STATE_VARIABLE_PredSpecs_119_119);
        }
      }
    hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__PredOrFunc_21 == (MR_Integer) 1);
    if (hlds__make_hlds__add_clause__succeeded)
      {
        hlds__make_hlds__add_clause__V_120_120 = (MR_Integer) 1;
        {
          parse_tree__prog_util__adjust_func_arity_3_p_1(hlds__make_hlds__add_clause__V_120_120, &hlds__make_hlds__add_clause__FuncArity_51, hlds__make_hlds__add_clause__Arity_25);
        }
        {
          hlds__make_hlds__add_clause__succeeded = hlds__hlds_pred__is_field_access_function_name_5_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_87, hlds__make_hlds__add_clause__PredName_22, &hlds__make_hlds__add_clause__V_235_235, &hlds__make_hlds__add_clause__V_52_52, &hlds__make_hlds__add_clause__V_53_53);
        }
        if (hlds__make_hlds__add_clause__succeeded)
          {
            hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__FuncArity_51 == hlds__make_hlds__add_clause__V_235_235);
            if (hlds__make_hlds__add_clause__succeeded)
              {
                hlds__make_hlds__add_clause__V_121_121 = (MR_Word) hlds__make_hlds__add_clause__PredStatus_28;
                hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__V_121_121 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                hlds__make_hlds__add_clause__succeeded = !(hlds__make_hlds__add_clause__succeeded);
              }
          }
      }
    if (hlds__make_hlds__add_clause__succeeded)
      {
        MR_Word hlds__make_hlds__add_clause__CallId_54;
        MR_Word hlds__make_hlds__add_clause__FieldAccessMainPieces_55;
        MR_Word hlds__make_hlds__add_clause__FieldAccessMsg_57;
        MR_Word hlds__make_hlds__add_clause__FieldAccessSpec_58;
        MR_Word hlds__make_hlds__add_clause__V_124_124;
        MR_Word hlds__make_hlds__add_clause__V_127_127;
        MR_Word hlds__make_hlds__add_clause__V_128_128;
        MR_Word hlds__make_hlds__add_clause__V_153_153;
        MR_Word hlds__make_hlds__add_clause__V_154_154;
        MR_Word hlds__make_hlds__add_clause__V_161_161;

        {
          hlds__make_hlds__add_clause__CallId_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__CallId_54, 0) = ((MR_Box) (hlds__make_hlds__add_clause__PredOrFunc_21));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__CallId_54, 1) = ((MR_Box) (hlds__make_hlds__add_clause__PredName_22));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__CallId_54, 2) = ((MR_Box) (hlds__make_hlds__add_clause__Arity_25));
        }
        {
          hlds__make_hlds__add_clause__V_128_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_128_128, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_128_128, 1) = ((MR_Box) (hlds__make_hlds__add_clause__CallId_54));
        }
        {
          hlds__make_hlds__add_clause__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_127_127, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_128_128));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_127_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[19])));
        }
        {
          hlds__make_hlds__add_clause__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_124_124, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[54])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_124_124, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_127_127));
        }
        {
          hlds__make_hlds__add_clause__FieldAccessMainPieces_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__FieldAccessMainPieces_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[53])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__FieldAccessMainPieces_55, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_124_124));
        }
        {
          hlds__make_hlds__add_clause__V_154_154 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__V_154_154, 0) = ((MR_Box) (hlds__make_hlds__add_clause__FieldAccessMainPieces_55));
        }
        {
          hlds__make_hlds__add_clause__V_153_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_153_153, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_154_154));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_153_153, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[56])));
        }
        {
          hlds__make_hlds__add_clause__FieldAccessMsg_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__FieldAccessMsg_57, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Context_29));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__FieldAccessMsg_57, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_153_153));
        }
        {
          hlds__make_hlds__add_clause__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_161_161, 0) = ((MR_Box) (hlds__make_hlds__add_clause__FieldAccessMsg_57));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_161_161, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_clause__FieldAccessSpec_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__FieldAccessSpec_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__FieldAccessSpec_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__FieldAccessSpec_58, 2) = ((MR_Box) (hlds__make_hlds__add_clause__V_161_161));
        }
        {
          hlds__make_hlds__add_clause__STATE_VARIABLE_PredSpecs_163_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__STATE_VARIABLE_PredSpecs_163_163, 0) = ((MR_Box) (hlds__make_hlds__add_clause__FieldAccessSpec_58));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__STATE_VARIABLE_PredSpecs_163_163, 1) = ((MR_Box) (hlds__make_hlds__add_clause__STATE_VARIABLE_PredSpecs_119_119));
        }
      }
    else
      hlds__make_hlds__add_clause__STATE_VARIABLE_PredSpecs_163_163 = hlds__make_hlds__add_clause__STATE_VARIABLE_PredSpecs_119_119;
    {
      hlds__make_hlds__add_clause__succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_117_117);
    }
    if (hlds__make_hlds__add_clause__succeeded)
      {
        MR_Word hlds__make_hlds__add_clause__AllowDefnOfBuiltin_59;
        MR_Word hlds__make_hlds__add_clause__Globals_205;

        {
          hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_87, &hlds__make_hlds__add_clause__Globals_205);
        }
        {
          libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_clause__Globals_205, (MR_Integer) 273, &hlds__make_hlds__add_clause__AllowDefnOfBuiltin_59);
        }
        switch (hlds__make_hlds__add_clause__AllowDefnOfBuiltin_59) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word hlds__make_hlds__add_clause__BuiltinMsg_60;
              MR_Word hlds__make_hlds__add_clause__BuiltinSpec_61;
              MR_Word hlds__make_hlds__add_clause__V_174_174;

              {
                hlds__make_hlds__add_clause__BuiltinMsg_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__BuiltinMsg_60, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Context_29));
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__BuiltinMsg_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[34])));
              }
              {
                hlds__make_hlds__add_clause__V_174_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_174_174, 0) = ((MR_Box) (hlds__make_hlds__add_clause__BuiltinMsg_60));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_174_174, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                hlds__make_hlds__add_clause__BuiltinSpec_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__BuiltinSpec_61, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__BuiltinSpec_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__BuiltinSpec_61, 2) = ((MR_Box) (hlds__make_hlds__add_clause__V_174_174));
              }
              {
                hlds__make_hlds__add_clause__STATE_VARIABLE_PredSpecs_176_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__STATE_VARIABLE_PredSpecs_176_176, 0) = ((MR_Box) (hlds__make_hlds__add_clause__BuiltinSpec_61));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__STATE_VARIABLE_PredSpecs_176_176, 1) = ((MR_Box) (hlds__make_hlds__add_clause__STATE_VARIABLE_PredSpecs_163_163));
              }
            }
            break;
          case (MR_Integer) 1:
            hlds__make_hlds__add_clause__STATE_VARIABLE_PredSpecs_176_176 = hlds__make_hlds__add_clause__STATE_VARIABLE_PredSpecs_163_163;
            break;
        }
      }
    else
      hlds__make_hlds__add_clause__STATE_VARIABLE_PredSpecs_176_176 = hlds__make_hlds__add_clause__STATE_VARIABLE_PredSpecs_163_163;
    {
      check_hlds__clause_to_proc__maybe_add_default_func_mode_3_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_117_117, &hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_177_177, &hlds__make_hlds__add_clause__V_62_62);
    }
    if ((hlds__make_hlds__add_clause__STATE_VARIABLE_PredSpecs_176_176 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word hlds__make_hlds__add_clause__PredMap_86;
        MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_181_181;
        MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_198_208;
        MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_PredicateTable_199_209;

        if (((MR_tag((MR_Word) hlds__make_hlds__add_clause__MaybeBodyGoal_27)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word hlds__make_hlds__add_clause__BodyGoalSpecs_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__MaybeBodyGoal_27, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__add_clause__Clauses0_66;
            MR_Word hlds__make_hlds__add_clause__Clauses_67;
            MR_Word hlds__make_hlds__add_clause__V_219_219;
            MR_Word hlds__make_hlds__add_clause__V_220_220;
            MR_Word hlds__make_hlds__add_clause__V_221_221;
            MR_Word hlds__make_hlds__add_clause__V_222_222;
            MR_Word hlds__make_hlds__add_clause__V_223_223;
            MR_Word hlds__make_hlds__add_clause__V_224_224;
            MR_Word hlds__make_hlds__add_clause__V_225_225;
            MR_Word hlds__make_hlds__add_clause__V_226_226;
            MR_Word hlds__make_hlds__add_clause__V_227_227;
            MR_Word hlds__make_hlds__add_clause__V_228_228;

            {
              *hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_92 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__make_hlds__add_clause__BodyGoalSpecs_65, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_91);
            }
            {
              hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_177_177, &hlds__make_hlds__add_clause__Clauses0_66);
            }
            hlds__make_hlds__add_clause__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clauses0_66, (MR_Integer) 0)));
            hlds__make_hlds__add_clause__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clauses0_66, (MR_Integer) 1)));
            hlds__make_hlds__add_clause__V_221_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clauses0_66, (MR_Integer) 2)));
            hlds__make_hlds__add_clause__V_222_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clauses0_66, (MR_Integer) 3)));
            hlds__make_hlds__add_clause__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clauses0_66, (MR_Integer) 4)));
            hlds__make_hlds__add_clause__V_224_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clauses0_66, (MR_Integer) 5)));
            hlds__make_hlds__add_clause__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clauses0_66, (MR_Integer) 6)));
            hlds__make_hlds__add_clause__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clauses0_66, (MR_Integer) 7)));
            hlds__make_hlds__add_clause__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clauses0_66, (MR_Integer) 8)));
            hlds__make_hlds__add_clause__V_228_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clauses0_66, (MR_Integer) 9)));
            {
              hlds__make_hlds__add_clause__Clauses_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clauses_67, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_219_219));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clauses_67, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_220_220));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clauses_67, 2) = ((MR_Box) (hlds__make_hlds__add_clause__V_221_221));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clauses_67, 3) = ((MR_Box) (hlds__make_hlds__add_clause__V_222_222));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clauses_67, 4) = ((MR_Box) (hlds__make_hlds__add_clause__V_223_223));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clauses_67, 5) = ((MR_Box) (hlds__make_hlds__add_clause__V_224_224));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clauses_67, 6) = ((MR_Box) (hlds__make_hlds__add_clause__V_225_225));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clauses_67, 7) = ((MR_Box) (hlds__make_hlds__add_clause__V_226_226));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clauses_67, 8) = ((MR_Box) (hlds__make_hlds__add_clause__V_227_227));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clauses_67, 9) = ((MR_Box) ((MR_Integer) 1));
            }
            {
              hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(hlds__make_hlds__add_clause__Clauses_67, hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_177_177, &hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_198_208);
            }
            hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_181_181 = hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_87;
            *hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_90 = hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_89;
          }
        else
          {
            MR_Word hlds__make_hlds__add_clause__BodyGoal_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__MaybeBodyGoal_27, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__add_clause__TVarSet0_69;
            MR_Word hlds__make_hlds__add_clause__ArgTerms_70;
            MR_Word hlds__make_hlds__add_clause__ProcIdsForThisClause_71;
            MR_Word hlds__make_hlds__add_clause__AllProcIds_72;
            MR_Word hlds__make_hlds__add_clause__Goal_73;
            MR_Word hlds__make_hlds__add_clause__VarSet_74;
            MR_Word hlds__make_hlds__add_clause__TVarSet_75;
            MR_Word hlds__make_hlds__add_clause__Warnings_76;
            MR_Word hlds__make_hlds__add_clause__ExistQVars_79;
            MR_Word hlds__make_hlds__add_clause__ArgTypes_80;
            MR_Word hlds__make_hlds__add_clause__ProcIds_81;
            MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_178_178;
            MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_179_179;
            MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_180_180;
            MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_183_183;
            MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_184_184;
            MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_186_186;
            MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_189_189;
            MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_190_190;
            MR_Word hlds__make_hlds__add_clause__Clauses0_206;
            MR_Word hlds__make_hlds__add_clause__Clauses_207;
            MR_Word hlds__make_hlds__add_clause__PromiseType_77;
            MR_Word hlds__make_hlds__add_clause___ArgTVarSet_78;
            MR_Word hlds__make_hlds__add_clause__V_82_82;
            MR_Word hlds__make_hlds__add_clause__V_193_193;

            {
              hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_177_177, &hlds__make_hlds__add_clause__Clauses0_206);
            }
            {
              hlds__hlds_pred__pred_info_get_typevarset_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_177_177, &hlds__make_hlds__add_clause__TVarSet0_69);
            }
            {
              hlds__make_hlds__add_clause__select_applicable_modes_15_p_0(hlds__make_hlds__add_clause__Args_24, hlds__make_hlds__add_clause__ClauseVarSet_20, hlds__make_hlds__add_clause__PredStatus_28, hlds__make_hlds__add_clause__Context_29, hlds__make_hlds__add_clause__PredId_23, hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_177_177, &hlds__make_hlds__add_clause__ArgTerms_70, &hlds__make_hlds__add_clause__ProcIdsForThisClause_71, &hlds__make_hlds__add_clause__AllProcIds_72, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_87, &hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_178_178, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_89, &hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_179_179, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_91, &hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_180_180);
            }
            {
              hlds__make_hlds__add_clause__clauses_info_add_clause_24_p_0(hlds__make_hlds__add_clause__ProcIdsForThisClause_71, hlds__make_hlds__add_clause__AllProcIds_72, hlds__make_hlds__add_clause__ClauseVarSet_20, hlds__make_hlds__add_clause__TVarSet0_69, hlds__make_hlds__add_clause__ArgTerms_70, hlds__make_hlds__add_clause__BodyGoal_68, hlds__make_hlds__add_clause__Context_29, hlds__make_hlds__add_clause__MaybeSeqNum_30, hlds__make_hlds__add_clause__PredStatus_28, hlds__make_hlds__add_clause__PredOrFunc_21, hlds__make_hlds__add_clause__Arity_25, hlds__make_hlds__add_clause__GoalType_31, &hlds__make_hlds__add_clause__Goal_73, &hlds__make_hlds__add_clause__VarSet_74, &hlds__make_hlds__add_clause__TVarSet_75, &hlds__make_hlds__add_clause__Warnings_76, hlds__make_hlds__add_clause__Clauses0_206, &hlds__make_hlds__add_clause__Clauses_207, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_178_178, &hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_181_181, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_179_179, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_90, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_180_180, &hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_183_183);
            }
            {
              hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(hlds__make_hlds__add_clause__Clauses_207, hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_177_177, &hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_184_184);
            }
            hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__GoalType_31)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__make_hlds__add_clause__succeeded)
              {
                hlds__make_hlds__add_clause__PromiseType_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__GoalType_31, (MR_Integer) 0)));
                {
                  hlds__hlds_pred__pred_info_set_goal_type_3_p_0(hlds__make_hlds__add_clause__GoalType_31, hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_184_184, &hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_186_186);
                }
              }
            else
              {
                {
                  hlds__hlds_pred__pred_info_update_goal_type_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_184_184, &hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_186_186);
                }
              }
            {
              hlds__hlds_pred__pred_info_set_typevarset_3_p_0(hlds__make_hlds__add_clause__TVarSet_75, hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_186_186, &hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_189_189);
            }
            {
              hlds__hlds_pred__pred_info_get_arg_types_4_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_189_189, &hlds__make_hlds__add_clause___ArgTVarSet_78, &hlds__make_hlds__add_clause__ExistQVars_79, &hlds__make_hlds__add_clause__ArgTypes_80);
            }
            {
              hlds__hlds_pred__pred_info_set_arg_types_5_p_0(hlds__make_hlds__add_clause__TVarSet_75, hlds__make_hlds__add_clause__ExistQVars_79, hlds__make_hlds__add_clause__ArgTypes_80, hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_189_189, &hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_190_190);
            }
            {
              hlds__make_hlds__add_clause__ProcIds_81 = hlds__hlds_pred__pred_info_all_procids_1_f_0(hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_190_190);
            }
            hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__ProcIds_81 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (hlds__make_hlds__add_clause__succeeded)
              {
                hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__GoalType_31)) == (MR_mktag((MR_Integer) 1)));
                if (hlds__make_hlds__add_clause__succeeded)
                  hlds__make_hlds__add_clause__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__GoalType_31, (MR_Integer) 0)));
                hlds__make_hlds__add_clause__succeeded = !(hlds__make_hlds__add_clause__succeeded);
              }
            if (hlds__make_hlds__add_clause__succeeded)
              {
                MR_Word hlds__make_hlds__add_clause__EndMarkers0_83;
                MR_Word hlds__make_hlds__add_clause__EndMarkers_84;

                {
                  hlds__hlds_pred__pred_info_get_markers_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_190_190, &hlds__make_hlds__add_clause__EndMarkers0_83);
                }
                {
                  hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 3, hlds__make_hlds__add_clause__EndMarkers0_83, &hlds__make_hlds__add_clause__EndMarkers_84);
                }
                {
                  hlds__hlds_pred__pred_info_set_markers_3_p_0(hlds__make_hlds__add_clause__EndMarkers_84, hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_190_190, &hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_198_208);
                }
              }
            else
              hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_198_208 = hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_190_190;
            hlds__make_hlds__add_clause__V_193_193 = (MR_Word) hlds__make_hlds__add_clause__PredStatus_28;
            hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__V_193_193 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (hlds__make_hlds__add_clause__succeeded)
              *hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_92 = hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_183_183;
            else
              {
                MR_Word hlds__make_hlds__add_clause__SimpleCallId_85;
                MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_194_194;

                {
                  hlds__make_hlds__add_clause__SimpleCallId_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__SimpleCallId_85, 0) = ((MR_Box) (hlds__make_hlds__add_clause__PredOrFunc_21));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__SimpleCallId_85, 1) = ((MR_Box) (hlds__make_hlds__add_clause__PredName_22));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__SimpleCallId_85, 2) = ((MR_Box) (hlds__make_hlds__add_clause__Arity_25));
                }
                {
                  hlds__make_hlds__make_hlds_warn__warn_singletons_6_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_181_181, hlds__make_hlds__add_clause__SimpleCallId_85, hlds__make_hlds__add_clause__VarSet_74, hlds__make_hlds__add_clause__Goal_73, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_183_183, &hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_194_194);
                }
                {
                  hlds__make_hlds__make_hlds_warn__add_quant_warnings_5_p_0(hlds__make_hlds__add_clause__SimpleCallId_85, hlds__make_hlds__add_clause__VarSet_74, hlds__make_hlds__add_clause__Warnings_76, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_194_194, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_92);
                }
              }
          }
        {
          mercury__map__det_update_4_p_0(hlds__make_hlds__add_clause__TypeCtorInfo_229_229, hlds__make_hlds__add_clause__TypeCtorInfo_230_230, ((MR_Box) (hlds__make_hlds__add_clause__PredId_23)), ((MR_Box) (hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_198_208)), hlds__make_hlds__add_clause__PredMap0_39, &hlds__make_hlds__add_clause__PredMap_86);
        }
        {
          hlds__pred_table__predicate_table_set_preds_3_p_0(hlds__make_hlds__add_clause__PredMap_86, hlds__make_hlds__add_clause__STATE_VARIABLE_PredicateTable_93_93, &hlds__make_hlds__add_clause__STATE_VARIABLE_PredicateTable_199_209);
        }
        {
          hlds__hlds_module__module_info_set_predicate_table_3_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_PredicateTable_199_209, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_181_181, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_88);
        }
      }
    else
      {
        MR_Word hlds__make_hlds__add_clause__TypeCtorInfo_232_232 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
        MR_Word hlds__make_hlds__add_clause__V_202_202;
        MR_Word hlds__make_hlds__add_clause__V_203_203;

        {
          hlds__make_hlds__add_clause__V_203_203 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0, hlds__make_hlds__add_clause__MaybeBodyGoal_27);
        }
        {
          hlds__make_hlds__add_clause__V_202_202 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_clause__TypeCtorInfo_232_232, hlds__make_hlds__add_clause__V_203_203, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_91);
        }
        {
          *hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_92 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_clause__TypeCtorInfo_232_232, hlds__make_hlds__add_clause__STATE_VARIABLE_PredSpecs_176_176, hlds__make_hlds__add_clause__V_202_202);
        }
        *hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_88 = hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_87;
        *hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_90 = hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_89;
      }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_clause__clauses_info_add_clause_24_p_0_1(
  MR_Box hlds__make_hlds__add_clause__closure_arg,
  MR_Box hlds__make_hlds__add_clause__wrapper_arg_1,
  MR_Box * hlds__make_hlds__add_clause__wrapper_arg_2)
{
  {
    MR_bool hlds__make_hlds__add_clause__succeeded;
    MR_Box hlds__make_hlds__add_clause__closure = hlds__make_hlds__add_clause__closure_arg;
    MR_Word hlds__make_hlds__add_clause__conv0_LambdaHeadVar__2_104;

    {
      hlds__make_hlds__add_clause__succeeded = hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__591__1_1_f_0(((MR_Word) hlds__make_hlds__add_clause__wrapper_arg_1), &hlds__make_hlds__add_clause__conv0_LambdaHeadVar__2_104);
    }
    if (hlds__make_hlds__add_clause__succeeded)
      {
        *hlds__make_hlds__add_clause__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_clause__conv0_LambdaHeadVar__2_104));
        hlds__make_hlds__add_clause__succeeded = MR_TRUE;
      }
    return hlds__make_hlds__add_clause__succeeded;
  }
}

void MR_CALL 
hlds__make_hlds__add_clause__clauses_info_add_clause_24_p_0(
  MR_Word hlds__make_hlds__add_clause__ApplModeIds0_25,
  MR_Word hlds__make_hlds__add_clause__AllModeIds_26,
  MR_Word hlds__make_hlds__add_clause__CVarSet_27,
  MR_Word hlds__make_hlds__add_clause__TVarSet0_28,
  MR_Word hlds__make_hlds__add_clause__Args_29,
  MR_Word hlds__make_hlds__add_clause__BodyGoal_30,
  MR_Word hlds__make_hlds__add_clause__Context_31,
  MR_Word hlds__make_hlds__add_clause__MaybeSeqNum_32,
  MR_Word hlds__make_hlds__add_clause__PredStatus_33,
  MR_Word hlds__make_hlds__add_clause__PredOrFunc_34,
  MR_Integer hlds__make_hlds__add_clause__Arity_35,
  MR_Word hlds__make_hlds__add_clause__GoalType_36,
  MR_Word * hlds__make_hlds__add_clause__Goal_37,
  MR_Word * hlds__make_hlds__add_clause__VarSet_38,
  MR_Word * hlds__make_hlds__add_clause__TVarSet_39,
  MR_Word * hlds__make_hlds__add_clause__QuantWarnings_40,
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_82,
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_83,
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_84,
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_85,
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_86,
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_87,
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_88,
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_89)
{
  {
    MR_bool hlds__make_hlds__add_clause__succeeded;
    MR_Word hlds__make_hlds__add_clause__VarSet0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_82, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_clause__ExplicitVarTypes0_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_82, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_clause__TVarNameMap0_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_82, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__add_clause__InferredVarTypes_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_82, (MR_Integer) 3)));
    MR_Word hlds__make_hlds__add_clause__HeadVars_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_82, (MR_Integer) 4)));
    MR_Word hlds__make_hlds__add_clause__ClausesRep0_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_82, (MR_Integer) 5)));
    MR_Word hlds__make_hlds__add_clause__ItemNumbers0_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_82, (MR_Integer) 6)));
    MR_Word hlds__make_hlds__add_clause__RttiVarMaps_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_82, (MR_Integer) 7)));
    MR_Word hlds__make_hlds__add_clause__HasForeignClauses_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_82, (MR_Integer) 8)));
    MR_Word hlds__make_hlds__add_clause__HadSyntaxError0_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_82, (MR_Integer) 9)));
    MR_Word hlds__make_hlds__add_clause__IsEmpty_55;
    MR_Word hlds__make_hlds__add_clause__TVarNameMap_56;
    MR_Word hlds__make_hlds__add_clause__MaybeOptImported_57;
    MR_Word hlds__make_hlds__add_clause__VarSet1_58;
    MR_Word hlds__make_hlds__add_clause__Renaming_59;
    MR_Word hlds__make_hlds__add_clause__Goal0_60;
    MR_Word hlds__make_hlds__add_clause__StateVarWarnings_61;
    MR_Word hlds__make_hlds__add_clause__StateVarErrors_62;
    MR_Word hlds__make_hlds__add_clause__FoundError_63;
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_91_91;
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_93_93;
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_94_94;
    MR_Word hlds__make_hlds__add_clause__V_90_90;

    {
      hlds__make_hlds__add_clause__IsEmpty_55 = hlds__hlds_clauses__clause_list_is_empty_1_f_0(hlds__make_hlds__add_clause__ClausesRep0_50);
    }
    switch (hlds__make_hlds__add_clause__IsEmpty_55) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        hlds__make_hlds__add_clause__TVarNameMap_56 = hlds__make_hlds__add_clause__TVarNameMap0_47;
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__varset__create_name_var_map_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, hlds__make_hlds__add_clause__TVarSet0_28, &hlds__make_hlds__add_clause__TVarNameMap_56);
          }
        }
        break;
    }
    hlds__make_hlds__add_clause__V_90_90 = (MR_Word) hlds__make_hlds__add_clause__PredStatus_33;
    hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__V_90_90 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (hlds__make_hlds__add_clause__succeeded)
      hlds__make_hlds__add_clause__MaybeOptImported_57 = (MR_Integer) 1;
    else
      hlds__make_hlds__add_clause__MaybeOptImported_57 = (MR_Integer) 0;
    {
      hlds__make_hlds__qual_info__update_qual_info_6_p_0(hlds__make_hlds__add_clause__TVarNameMap_56, hlds__make_hlds__add_clause__TVarSet0_28, hlds__make_hlds__add_clause__ExplicitVarTypes0_46, hlds__make_hlds__add_clause__MaybeOptImported_57, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_86, &hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_91_91);
    }
    {
      mercury__varset__merge_renaming_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__add_clause__VarSet0_45, hlds__make_hlds__add_clause__CVarSet_27, &hlds__make_hlds__add_clause__VarSet1_58, &hlds__make_hlds__add_clause__Renaming_59);
    }
    {
      hlds__make_hlds__add_clause__add_clause_transform_20_p_0(hlds__make_hlds__add_clause__Renaming_59, hlds__make_hlds__add_clause__HeadVars_49, hlds__make_hlds__add_clause__Args_29, hlds__make_hlds__add_clause__BodyGoal_30, hlds__make_hlds__add_clause__Context_31, hlds__make_hlds__add_clause__PredOrFunc_34, hlds__make_hlds__add_clause__Arity_35, hlds__make_hlds__add_clause__GoalType_36, &hlds__make_hlds__add_clause__Goal0_60, hlds__make_hlds__add_clause__VarSet1_58, hlds__make_hlds__add_clause__VarSet_38, hlds__make_hlds__add_clause__QuantWarnings_40, &hlds__make_hlds__add_clause__StateVarWarnings_61, &hlds__make_hlds__add_clause__StateVarErrors_62, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_84, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_85, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_91_91, &hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_93_93, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_88, &hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_94_94);
    }
    {
      hlds__make_hlds__qual_info__qual_info_get_tvarset_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_93_93, hlds__make_hlds__add_clause__TVarSet_39);
    }
    {
      hlds__make_hlds__qual_info__qual_info_get_found_syntax_error_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_93_93, &hlds__make_hlds__add_clause__FoundError_63);
    }
    {
      hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_p_0((MR_Integer) 0, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_93_93, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_87);
    }
    hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__FoundError_63 == (MR_Integer) 1);
    if (!(hlds__make_hlds__add_clause__succeeded))
      {
        MR_Word hlds__make_hlds__add_clause__V_64_64;
        MR_Word hlds__make_hlds__add_clause__V_65_65;

        hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__StateVarErrors_62)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__make_hlds__add_clause__succeeded)
          {
            hlds__make_hlds__add_clause__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__StateVarErrors_62, (MR_Integer) 0)));
            hlds__make_hlds__add_clause__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__StateVarErrors_62, (MR_Integer) 1)));
          }
      }
    if (hlds__make_hlds__add_clause__succeeded)
      {
        MR_Word hlds__make_hlds__add_clause__V_114_114;
        MR_Word hlds__make_hlds__add_clause__V_115_115;
        MR_Word hlds__make_hlds__add_clause__V_116_116;
        MR_Word hlds__make_hlds__add_clause__V_117_117;
        MR_Word hlds__make_hlds__add_clause__V_118_118;
        MR_Word hlds__make_hlds__add_clause__V_119_119;
        MR_Word hlds__make_hlds__add_clause__V_120_120;
        MR_Word hlds__make_hlds__add_clause__V_121_121;
        MR_Word hlds__make_hlds__add_clause__V_122_122;
        MR_Word hlds__make_hlds__add_clause__V_123_123;

        {
          *hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_89 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__make_hlds__add_clause__StateVarErrors_62, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_94_94);
        }
        {
          *hlds__make_hlds__add_clause__Goal_37 = hlds__make_goal__true_goal_0_f_0();
        }
        hlds__make_hlds__add_clause__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_82, (MR_Integer) 0)));
        hlds__make_hlds__add_clause__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_82, (MR_Integer) 1)));
        hlds__make_hlds__add_clause__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_82, (MR_Integer) 2)));
        hlds__make_hlds__add_clause__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_82, (MR_Integer) 3)));
        hlds__make_hlds__add_clause__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_82, (MR_Integer) 4)));
        hlds__make_hlds__add_clause__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_82, (MR_Integer) 5)));
        hlds__make_hlds__add_clause__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_82, (MR_Integer) 6)));
        hlds__make_hlds__add_clause__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_82, (MR_Integer) 7)));
        hlds__make_hlds__add_clause__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_82, (MR_Integer) 8)));
        hlds__make_hlds__add_clause__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_82, (MR_Integer) 9)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
          *hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_83 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_114_114));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_115_115));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__add_clause__V_116_116));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__make_hlds__add_clause__V_117_117));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__make_hlds__add_clause__V_118_118));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__make_hlds__add_clause__V_119_119));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__make_hlds__add_clause__V_120_120));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__make_hlds__add_clause__V_121_121));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__make_hlds__add_clause__V_122_122));
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((MR_Integer) 1));
        }
      }
    else
      {
        MR_Word hlds__make_hlds__add_clause__ClausesRep_75;
        MR_Word hlds__make_hlds__add_clause__ExplicitVarTypes_80;
        MR_Word hlds__make_hlds__add_clause__ItemNumbers_81;

        *hlds__make_hlds__add_clause__Goal_37 = hlds__make_hlds__add_clause__Goal0_60;
        switch (hlds__make_hlds__add_clause__HasForeignClauses_53) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word hlds__make_hlds__add_clause__Clause_113;

              {
                hlds__make_hlds__add_clause__Clause_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clause_113, 0) = ((MR_Box) (hlds__make_hlds__add_clause__ApplModeIds0_25));
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clause_113, 1) = ((MR_Box) (*hlds__make_hlds__add_clause__Goal_37));
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clause_113, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clause_113, 3) = ((MR_Box) (hlds__make_hlds__add_clause__Context_31));
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clause_113, 4) = ((MR_Box) (hlds__make_hlds__add_clause__StateVarWarnings_61));
              }
              {
                hlds__hlds_clauses__add_clause_3_p_0(hlds__make_hlds__add_clause__Clause_113, hlds__make_hlds__add_clause__ClausesRep0_50, &hlds__make_hlds__add_clause__ClausesRep_75);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word hlds__make_hlds__add_clause__TypeCtorInfo_135_135;
              MR_Word hlds__make_hlds__add_clause__Clauses0_66;
              MR_Word hlds__make_hlds__add_clause__ClausesRep1_67;
              MR_Word hlds__make_hlds__add_clause__ForeignModeIds_68;
              MR_Word hlds__make_hlds__add_clause__ModeIds0_73;
              MR_Word hlds__make_hlds__add_clause__ModeIds_74;
              MR_Word hlds__make_hlds__add_clause__V_101_101;

              {
                hlds__hlds_clauses__get_clause_list_3_p_0(&hlds__make_hlds__add_clause__Clauses0_66, hlds__make_hlds__add_clause__ClausesRep0_50, &hlds__make_hlds__add_clause__ClausesRep1_67);
              }
              hlds__make_hlds__add_clause__TypeCtorInfo_135_135 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
              {
                hlds__make_hlds__add_clause__V_101_101 = mercury__list__filter_map_2_f_0((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, (MR_Word) &hlds__make_hlds__add_clause_scalar_common_1[1], (MR_Word) &hlds__make_hlds__add_clause_scalar_common_4[0], hlds__make_hlds__add_clause__Clauses0_66);
              }
              {
                hlds__make_hlds__add_clause__ForeignModeIds_68 = mercury__list__condense_1_f_0(hlds__make_hlds__add_clause__TypeCtorInfo_135_135, hlds__make_hlds__add_clause__V_101_101);
              }
              if ((hlds__make_hlds__add_clause__ApplModeIds0_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                hlds__make_hlds__add_clause__ModeIds0_73 = hlds__make_hlds__add_clause__AllModeIds_26;
              else
                hlds__make_hlds__add_clause__ModeIds0_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__ApplModeIds0_25, (MR_Integer) 0)));
              {
                hlds__make_hlds__add_clause__ModeIds_74 = mercury__list__delete_elems_2_f_0(hlds__make_hlds__add_clause__TypeCtorInfo_135_135, hlds__make_hlds__add_clause__ModeIds0_73, hlds__make_hlds__add_clause__ForeignModeIds_68);
              }
              if ((hlds__make_hlds__add_clause__ModeIds_74 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                hlds__make_hlds__add_clause__ClausesRep_75 = hlds__make_hlds__add_clause__ClausesRep1_67;
              else
                {
                  MR_Word hlds__make_hlds__add_clause__ApplicableModeIds_78;
                  MR_Word hlds__make_hlds__add_clause__Clause_79;

                  {
                    hlds__make_hlds__add_clause__ApplicableModeIds_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__ApplicableModeIds_78, 0) = ((MR_Box) (hlds__make_hlds__add_clause__ModeIds_74));
                  }
                  {
                    hlds__make_hlds__add_clause__Clause_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clause_79, 0) = ((MR_Box) (hlds__make_hlds__add_clause__ApplicableModeIds_78));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clause_79, 1) = ((MR_Box) (*hlds__make_hlds__add_clause__Goal_37));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clause_79, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clause_79, 3) = ((MR_Box) (hlds__make_hlds__add_clause__Context_31));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clause_79, 4) = ((MR_Box) (hlds__make_hlds__add_clause__StateVarWarnings_61));
                  }
                  {
                    hlds__hlds_clauses__add_clause_3_p_0(hlds__make_hlds__add_clause__Clause_79, hlds__make_hlds__add_clause__ClausesRep1_67, &hlds__make_hlds__add_clause__ClausesRep_75);
                  }
                }
            }
            break;
        }
        {
          hlds__make_hlds__qual_info__qual_info_get_var_types_2_p_0(*hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_87, &hlds__make_hlds__add_clause__ExplicitVarTypes_80);
        }
        {
          hlds__hlds_clauses__add_clause_item_number_5_p_0(hlds__make_hlds__add_clause__MaybeSeqNum_32, hlds__make_hlds__add_clause__Context_31, (MR_Integer) 0, hlds__make_hlds__add_clause__ItemNumbers0_51, &hlds__make_hlds__add_clause__ItemNumbers_81);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
          *hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_83 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (*hlds__make_hlds__add_clause__VarSet_38));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__add_clause__ExplicitVarTypes_80));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__add_clause__TVarNameMap_56));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__make_hlds__add_clause__InferredVarTypes_48));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__make_hlds__add_clause__HeadVars_49));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__make_hlds__add_clause__ClausesRep_75));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__make_hlds__add_clause__ItemNumbers_81));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__make_hlds__add_clause__RttiVarMaps_52));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__make_hlds__add_clause__HasForeignClauses_53));
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__make_hlds__add_clause__HadSyntaxError0_54));
        }
        *hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_89 = hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_94_94;
      }
  }
}

void MR_CALL 
hlds__make_hlds__add_clause__module_add_clause_15_p_0(
  MR_Word hlds__make_hlds__add_clause__ClauseVarSet_16,
  MR_Word hlds__make_hlds__add_clause__PredOrFunc_17,
  MR_Word hlds__make_hlds__add_clause__PredName_18,
  MR_Word hlds__make_hlds__add_clause__Args0_19,
  MR_Word hlds__make_hlds__add_clause__MaybeBodyGoal_20,
  MR_Word hlds__make_hlds__add_clause__Status_21,
  MR_Word hlds__make_hlds__add_clause__Context_22,
  MR_Word hlds__make_hlds__add_clause__MaybeSeqNum_23,
  MR_Word hlds__make_hlds__add_clause__GoalType_24,
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_51,
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_52,
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_53,
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_54,
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_55,
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_56)
{
  {
    MR_bool hlds__make_hlds__add_clause__succeeded;
    MR_Word hlds__make_hlds__add_clause__IllegalSVarResult_29;
    MR_Integer hlds__make_hlds__add_clause__ArityAdjustment_30;
    MR_Word hlds__make_hlds__add_clause__Args_32;
    MR_Word hlds__make_hlds__add_clause__ModuleName_33;
    MR_Integer hlds__make_hlds__add_clause__Arity0_34;
    MR_Integer hlds__make_hlds__add_clause__Arity_35;
    MR_Word hlds__make_hlds__add_clause__PredicateTable_37;
    MR_Word hlds__make_hlds__add_clause__PredIds_38;
    MR_Word hlds__make_hlds__add_clause__SVar_28;
    MR_Word hlds__make_hlds__add_clause__V_31_31;
    MR_Word hlds__make_hlds__add_clause__PredIdPrime_39;
    MR_Word hlds__make_hlds__add_clause__V_58_58;

    {
      hlds__make_hlds__add_clause__succeeded = hlds__make_hlds__state_var__illegal_state_var_func_result_3_p_0(hlds__make_hlds__add_clause__PredOrFunc_17, hlds__make_hlds__add_clause__Args0_19, &hlds__make_hlds__add_clause__SVar_28);
    }
    if (hlds__make_hlds__add_clause__succeeded)
      {
        hlds__make_hlds__add_clause__IllegalSVarResult_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__IllegalSVarResult_29, 0) = ((MR_Box) (hlds__make_hlds__add_clause__SVar_28));
      }
    else
      hlds__make_hlds__add_clause__IllegalSVarResult_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__IllegalSVarResult_29)) == (MR_mktag((MR_Integer) 1)));
    if (hlds__make_hlds__add_clause__succeeded)
      {
        hlds__make_hlds__add_clause__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__IllegalSVarResult_29, (MR_Integer) 0)));
        hlds__make_hlds__add_clause__ArityAdjustment_30 = (MR_Integer) -1;
      }
    else
      hlds__make_hlds__add_clause__ArityAdjustment_30 = (MR_Integer) 0;
    {
      hlds__make_hlds__state_var__expand_bang_state_pairs_in_terms_2_p_0(hlds__make_hlds__add_clause__Args0_19, &hlds__make_hlds__add_clause__Args_32);
    }
    {
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_51, &hlds__make_hlds__add_clause__ModuleName_33);
    }
    {
      mercury__list__length_2_p_0((MR_Word) &hlds__make_hlds__add_clause_scalar_common_1[0], hlds__make_hlds__add_clause__Args_32, &hlds__make_hlds__add_clause__Arity0_34);
    }
    hlds__make_hlds__add_clause__Arity_35 = (hlds__make_hlds__add_clause__Arity0_34 + hlds__make_hlds__add_clause__ArityAdjustment_30);
    {
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_51, &hlds__make_hlds__add_clause__PredicateTable_37);
    }
    {
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__make_hlds__add_clause__PredicateTable_37, (MR_Integer) 0, hlds__make_hlds__add_clause__PredOrFunc_17, hlds__make_hlds__add_clause__PredName_18, hlds__make_hlds__add_clause__Arity_35, &hlds__make_hlds__add_clause__PredIds_38);
    }
    hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__PredIds_38)) == (MR_mktag((MR_Integer) 1)));
    if (hlds__make_hlds__add_clause__succeeded)
      {
        hlds__make_hlds__add_clause__PredIdPrime_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__PredIds_38, (MR_Integer) 0)));
        hlds__make_hlds__add_clause__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__PredIds_38, (MR_Integer) 1)));
        hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__V_58_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    if (hlds__make_hlds__add_clause__succeeded)
      {
        MR_Word hlds__make_hlds__add_clause__V_41_41;

        hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__GoalType_24)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__make_hlds__add_clause__succeeded)
          {
            hlds__make_hlds__add_clause__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__GoalType_24, (MR_Integer) 0)));
            {
              MR_String hlds__make_hlds__add_clause__NameString_42;
              MR_String hlds__make_hlds__add_clause__UnexpectedMsg_43;
              MR_String hlds__make_hlds__add_clause__V_121_121;
              MR_Word hlds__make_hlds__add_clause__V_127_127;
              MR_String hlds__make_hlds__add_clause__V_128_128;
              MR_String hlds__make_hlds__add_clause__V_130_130;
              MR_String hlds__make_hlds__add_clause__V_131_131;
              MR_String hlds__make_hlds__add_clause__V_138_138;
              MR_String hlds__make_hlds__add_clause__V_140_140;
              MR_String hlds__make_hlds__add_clause__V_141_141;
              MR_String hlds__make_hlds__add_clause__V_148_148;
              MR_String hlds__make_hlds__add_clause__V_150_150;
              MR_String hlds__make_hlds__add_clause__V_151_151;

              {
                hlds__make_hlds__add_clause__NameString_42 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__make_hlds__add_clause__PredName_18);
              }
              hlds__make_hlds__add_clause__V_127_127 = (MR_Word) &hlds__make_hlds__add_clause_scalar_common_2[2];
              {
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__make_hlds__add_clause__V_127_127, hlds__make_hlds__add_clause__NameString_42, &hlds__make_hlds__add_clause__V_121_121);
              }
              {
                hlds__make_hlds__add_clause__V_128_128 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_clause__V_121_121, (MR_String) ").\n");
              }
              {
                hlds__make_hlds__add_clause__V_130_130 = mercury__string__f_43_43_2_f_0((MR_String) " (", hlds__make_hlds__add_clause__V_128_128);
              }
              {
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__make_hlds__add_clause__V_127_127, (MR_String) "name to an existing predicate", &hlds__make_hlds__add_clause__V_131_131);
              }
              {
                hlds__make_hlds__add_clause__V_138_138 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_clause__V_131_131, hlds__make_hlds__add_clause__V_130_130);
              }
              {
                hlds__make_hlds__add_clause__V_140_140 = mercury__string__f_43_43_2_f_0((MR_String) " ", hlds__make_hlds__add_clause__V_138_138);
              }
              {
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__make_hlds__add_clause__V_127_127, (MR_String) "for a promise with an identical", &hlds__make_hlds__add_clause__V_141_141);
              }
              {
                hlds__make_hlds__add_clause__V_148_148 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_clause__V_141_141, hlds__make_hlds__add_clause__V_140_140);
              }
              {
                hlds__make_hlds__add_clause__V_150_150 = mercury__string__f_43_43_2_f_0((MR_String) " ", hlds__make_hlds__add_clause__V_148_148);
              }
              {
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__make_hlds__add_clause__V_127_127, (MR_String) "Attempted to introduce a predicate", &hlds__make_hlds__add_clause__V_151_151);
              }
              {
                hlds__make_hlds__add_clause__UnexpectedMsg_43 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_clause__V_151_151, hlds__make_hlds__add_clause__V_150_150);
              }
              {
                mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_clause", (MR_String) "predicate \140hlds.make_hlds.add_clause.module_add_clause\'/15", hlds__make_hlds__add_clause__UnexpectedMsg_43);
                return;
              }
            }
          }
        else
          {
          }
        {
          hlds__make_hlds__add_clause__module_add_clause_2_19_p_0(hlds__make_hlds__add_clause__ClauseVarSet_16, hlds__make_hlds__add_clause__PredOrFunc_17, hlds__make_hlds__add_clause__PredName_18, hlds__make_hlds__add_clause__PredIdPrime_39, hlds__make_hlds__add_clause__Args_32, hlds__make_hlds__add_clause__Arity_35, hlds__make_hlds__add_clause__ArityAdjustment_30, hlds__make_hlds__add_clause__MaybeBodyGoal_20, hlds__make_hlds__add_clause__Status_21, hlds__make_hlds__add_clause__Context_22, hlds__make_hlds__add_clause__MaybeSeqNum_23, hlds__make_hlds__add_clause__GoalType_24, hlds__make_hlds__add_clause__IllegalSVarResult_29, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_51, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_52, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_53, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_54, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_55, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_56);
        }
      }
    else
      {
        MR_Word hlds__make_hlds__add_clause__MaybePredId_160;
        MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_105_162;
        MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_106_163;
        MR_String hlds__make_hlds__add_clause__V_74_74;

        {
          hlds__make_hlds__add_clause__V_74_74 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__make_hlds__add_clause__PredName_18);
        }
        hlds__make_hlds__add_clause__succeeded = (strcmp(hlds__make_hlds__add_clause__V_74_74, (MR_String) ",") == 0);
        if (hlds__make_hlds__add_clause__succeeded)
          hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__Arity_35 == (MR_Integer) 2);
        if (hlds__make_hlds__add_clause__succeeded)
          {
            MR_Word hlds__make_hlds__add_clause__Msg_45;
            MR_Word hlds__make_hlds__add_clause__Spec_46;
            MR_Word hlds__make_hlds__add_clause__V_103_103;

            hlds__make_hlds__add_clause__MaybePredId_160 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              hlds__make_hlds__add_clause__Msg_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Msg_45, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Context_22));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Msg_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[50])));
            }
            {
              hlds__make_hlds__add_clause__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_103_103, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Msg_45));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_103_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              hlds__make_hlds__add_clause__Spec_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_46, 2) = ((MR_Box) (hlds__make_hlds__add_clause__V_103_103));
            }
            {
              hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_105_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_105_162, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Spec_46));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_105_162, 1) = ((MR_Box) (hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_55));
            }
            hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_106_163 = hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_51;
          }
        else
          {
            MR_Word hlds__make_hlds__add_clause__NewPredId_49;
            MR_Word hlds__make_hlds__add_clause__V_47_47;

            hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__GoalType_24)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__make_hlds__add_clause__succeeded)
              {
                hlds__make_hlds__add_clause__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__GoalType_24, (MR_Integer) 0)));
                {
                  MR_Word hlds__make_hlds__add_clause__HeadVars_48;

                  {
                    hlds__make_hlds__add_clause__HeadVars_48 = mercury__term__term_list_to_var_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__add_clause__Args_32);
                  }
                  {
                    hlds__make_hlds__add_pred__preds_add_implicit_for_assertion_10_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_51, &hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_106_163, hlds__make_hlds__add_clause__ModuleName_33, hlds__make_hlds__add_clause__PredName_18, hlds__make_hlds__add_clause__Arity_35, hlds__make_hlds__add_clause__PredOrFunc_17, hlds__make_hlds__add_clause__HeadVars_48, hlds__make_hlds__add_clause__Status_21, hlds__make_hlds__add_clause__Context_22, &hlds__make_hlds__add_clause__NewPredId_49);
                  }
                  hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_105_162 = hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_55;
                }
              }
            else
              {
                MR_Word hlds__make_hlds__add_clause__V_109_109;

                {
                  hlds__make_hlds__add_clause__V_109_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_109_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_109_109, 1) = ((MR_Box) (hlds__make_hlds__add_clause__PredName_18));
                }
                {
                  hlds__make_hlds__add_pred__preds_add_implicit_report_error_14_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_51, &hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_106_163, hlds__make_hlds__add_clause__ModuleName_33, hlds__make_hlds__add_clause__PredName_18, hlds__make_hlds__add_clause__Arity_35, hlds__make_hlds__add_clause__PredOrFunc_17, hlds__make_hlds__add_clause__Status_21, (MR_Integer) 0, hlds__make_hlds__add_clause__Context_22, hlds__make_hlds__add_clause__V_109_109, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[52]), &hlds__make_hlds__add_clause__NewPredId_49, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_55, &hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_105_162);
                }
              }
            {
              hlds__make_hlds__add_clause__MaybePredId_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__MaybePredId_160, 0) = ((MR_Box) (hlds__make_hlds__add_clause__NewPredId_49));
            }
          }
        if ((hlds__make_hlds__add_clause__MaybePredId_160 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_52 = hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_106_163;
            *hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_54 = hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_53;
            *hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_56 = hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_105_162;
          }
        else
          {
            MR_Word hlds__make_hlds__add_clause__PredId_158 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__MaybePredId_160, (MR_Integer) 0)));

            {
              hlds__make_hlds__add_clause__module_add_clause_2_19_p_0(hlds__make_hlds__add_clause__ClauseVarSet_16, hlds__make_hlds__add_clause__PredOrFunc_17, hlds__make_hlds__add_clause__PredName_18, hlds__make_hlds__add_clause__PredId_158, hlds__make_hlds__add_clause__Args_32, hlds__make_hlds__add_clause__Arity_35, hlds__make_hlds__add_clause__ArityAdjustment_30, hlds__make_hlds__add_clause__MaybeBodyGoal_20, hlds__make_hlds__add_clause__Status_21, hlds__make_hlds__add_clause__Context_22, hlds__make_hlds__add_clause__MaybeSeqNum_23, hlds__make_hlds__add_clause__GoalType_24, hlds__make_hlds__add_clause__IllegalSVarResult_29, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_106_163, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_52, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_53, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_54, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_105_162, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_56);
            }
          }
      }
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.make_hlds.add_clause. */
