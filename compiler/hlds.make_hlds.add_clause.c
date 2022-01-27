/*
** Automatically generated from `add_clause.m'
** by the Mercury compiler,
** version rotd-2015-05-05
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
#include "array.mih"
#include "assoc_list.mih"
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
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
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
#include "transform_hlds.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.add_pred.mih"
#include "hlds.make_hlds.add_special_pred.mih"
#include "hlds.make_hlds.field_access.mih"
#include "hlds.make_hlds.goal_expr_to_goal.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.make_hlds_warn.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "hlds.make_hlds.state_var.mih"
#include "hlds.make_hlds.superhomogeneous.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 163 "hlds.make_hlds.add_clause.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_clause__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

#line 166 "hlds.make_hlds.add_clause.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_clause__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0;

#line 169 "hlds.make_hlds.add_clause.c"
static const MR_DuFunctorDesc hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_0;

#line 172 "hlds.make_hlds.add_clause.c"
static const MR_DuFunctorDesc hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_1;

#line 175 "hlds.make_hlds.add_clause.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_clause__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0;

#line 178 "hlds.make_hlds.add_clause.c"
static const MR_PseudoTypeInfo hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__field_types_mode_annotations_0_2[1];

#line 181 "hlds.make_hlds.add_clause.c"
static const MR_DuFunctorDesc hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_2;

#line 184 "hlds.make_hlds.add_clause.c"
static const MR_DuFunctorDesc hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_3;

#line 187 "hlds.make_hlds.add_clause.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_stag_ordered_mode_annotations_0_0[3];

#line 190 "hlds.make_hlds.add_clause.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_stag_ordered_mode_annotations_0_1[1];

#line 193 "hlds.make_hlds.add_clause.c"
static const MR_DuPtagLayout hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_ptag_ordered_mode_annotations_0[2];

#line 196 "hlds.make_hlds.add_clause.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_name_ordered_mode_annotations_0[4];

#line 199 "hlds.make_hlds.add_clause.c"
static const MR_Integer hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__functor_number_map_mode_annotations_0[4];

#line 202 "hlds.make_hlds.add_clause.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_clause____Unify____mode_annotations_0_0_10001(
#line 205 "hlds.make_hlds.add_clause.c"
  MR_Box hlds__make_hlds__add_clause__wrapper_arg_1,
#line 207 "hlds.make_hlds.add_clause.c"
  MR_Box hlds__make_hlds__add_clause__wrapper_arg_2);

#line 210 "hlds.make_hlds.add_clause.c"
static void MR_CALL 
hlds__make_hlds__add_clause____Compare____mode_annotations_0_0_10001(
#line 213 "hlds.make_hlds.add_clause.c"
  MR_Box * hlds__make_hlds__add_clause__wrapper_arg_1,
#line 215 "hlds.make_hlds.add_clause.c"
  MR_Box hlds__make_hlds__add_clause__wrapper_arg_2,
#line 217 "hlds.make_hlds.add_clause.c"
  MR_Box hlds__make_hlds__add_clause__wrapper_arg_3);

#line 554 "add_clause.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__554__1_1_f_0(
#line 554 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__HeadVar__1_97,
#line 554 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__HeadVar__2_98);

#line 453 "add_clause.m"
static void MR_CALL 
hlds__make_hlds__add_clause____Compare____mode_annotations_0_0(
#line 453 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__HeadVar__1_1,
#line 453 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__HeadVar__2_2,
#line 453 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__HeadVar__3_3);

#line 453 "add_clause.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_clause____Unify____mode_annotations_0_0(
#line 453 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__HeadVar__1_1,
#line 453 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__HeadVar__2_2);

#line 599 "add_clause.m"
static void MR_CALL 
hlds__make_hlds__add_clause__add_clause_transform_20_p_0(
#line 599 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Renaming_21,
#line 599 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__HeadVars_22,
#line 599 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Args0_23,
#line 599 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__ParseBody_24,
#line 599 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Context_25,
#line 599 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredOrFunc_26,
#line 599 "add_clause.m"
  MR_Integer hlds__make_hlds__add_clause__Arity_27,
#line 599 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__GoalType_28,
#line 599 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__Goal_29,
#line 599 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_0_59,
#line 599 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_60,
#line 599 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__QuantWarnings_31,
#line 599 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__StateVarWarnings_32,
#line 599 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__StateVarErrors_33,
#line 599 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_61,
#line 599 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_62,
#line 599 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_63,
#line 599 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_64,
#line 599 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_65,
#line 599 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_66);

#line 467 "add_clause.m"
static void MR_CALL 
hlds__make_hlds__add_clause__get_mode_annotations_4_p_0(
#line 467 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__HeadVar__1_1,
#line 467 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__HeadVar__2_2,
#line 467 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_0_3,
#line 467 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_4);

#line 443 "add_clause.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_clause__mode_decl_for_pred_info_to_pieces_2_f_0(
#line 443 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredInfo_4,
#line 443 "add_clause.m"
  MR_Integer hlds__make_hlds__add_clause__ProcId_5);

#line 432 "add_clause.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_clause__undeclared_mode_error_8_p_0_1(
#line 432 "add_clause.m"
  MR_Box hlds__make_hlds__add_clause__closure_arg,
#line 432 "add_clause.m"
  MR_Box hlds__make_hlds__add_clause__wrapper_arg_1);

#line 393 "add_clause.m"
static void MR_CALL 
hlds__make_hlds__add_clause__undeclared_mode_error_8_p_0(
#line 393 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__ModeList_9,
#line 393 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__VarSet_10,
#line 393 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredId_11,
#line 393 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredInfo_12,
#line 393 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__ModuleInfo_13,
#line 393 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Context_14,
#line 393 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_31,
#line 393 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_32);

#line 325 "add_clause.m"
static void MR_CALL 
hlds__make_hlds__add_clause__select_applicable_modes_15_p_0(
#line 325 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Args0_16,
#line 325 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__VarSet_17,
#line 325 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Status_18,
#line 325 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Context_19,
#line 325 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredId_20,
#line 325 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredInfo_21,
#line 325 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__Args_22,
#line 325 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__ApplProcIds_23,
#line 325 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__AllProcIds_24,
#line 325 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_40,
#line 325 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_41,
#line 325 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_42,
#line 325 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_43,
#line 325 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_44,
#line 325 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_45);

#line 156 "add_clause.m"
static void MR_CALL 
hlds__make_hlds__add_clause__module_add_clause_2_19_p_0(
#line 156 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__ClauseVarSet_20,
#line 156 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredOrFunc_21,
#line 156 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredName_22,
#line 156 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredId_23,
#line 156 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Args_24,
#line 156 "add_clause.m"
  MR_Integer hlds__make_hlds__add_clause__Arity_25,
#line 156 "add_clause.m"
  MR_Integer hlds__make_hlds__add_clause__ArityAdjustment_26,
#line 156 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Body_27,
#line 156 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Status_28,
#line 156 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Context_29,
#line 156 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__MaybeSeqNum_30,
#line 156 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__GoalType_31,
#line 156 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__IllegalSVarResult_32,
#line 156 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_80,
#line 156 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_81,
#line 156 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_82,
#line 156 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_83,
#line 156 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_84,
#line 156 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_85);

#line 554 "add_clause.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_clause__clauses_info_add_clause_24_p_0_1(
#line 554 "add_clause.m"
  MR_Box hlds__make_hlds__add_clause__closure_arg,
#line 554 "add_clause.m"
  MR_Box hlds__make_hlds__add_clause__wrapper_arg_1,
#line 554 "add_clause.m"
  MR_Box * hlds__make_hlds__add_clause__wrapper_arg_2);


static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_1[69][2];

static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_2[5][1];

static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_3[1][5];

static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_4[1][3];

static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_5[1][6];




static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_1[69][2] = {
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
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "at the end of the preceding line."))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "inadvertently writing a period instead of a comma"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "This is usually caused by"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__make_hlds__add_clause_scalar_common_1[14]))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[13])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "of the constructor a different name."))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "to a field update, give the field"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[21])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "function, for example to check the input"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[23])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "To supply your own definition for a field access"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[25])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "are automatically generated by the compiler."))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[27])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Clauses for field access functions"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[29])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
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
    ((MR_Box) ((MR_String) "have mode annotations."))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[5])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[39])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ".)"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[5])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "is:"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[45])))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "clause"))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: clause for automatically generated"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "field access"))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_clause_scalar_common_2[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In clause for"))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "error: mode annotation specifies undeclared mode"))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "(There are no declared modes for this"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "The declared mode for this"))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "The declared modes for this"))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":- mode"))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 68 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_2[5][1] = {
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
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[31])))
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "time.mh"
#include "time.mh"
#include "bitmap.mh"
#include "bitmap.mh"



#line 858 "hlds.make_hlds.add_clause.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_clause__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 866 "hlds.make_hlds.add_clause.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_clause__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0
  }
};

#line 874 "hlds.make_hlds.add_clause.c"
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

#line 889 "hlds.make_hlds.add_clause.c"
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

#line 904 "hlds.make_hlds.add_clause.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_clause__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0
  }
};

#line 912 "hlds.make_hlds.add_clause.c"
static const MR_PseudoTypeInfo hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__field_types_mode_annotations_0_2[1] = {
  (MR_PseudoTypeInfo) &hlds__make_hlds__add_clause__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0
};

#line 917 "hlds.make_hlds.add_clause.c"
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

#line 932 "hlds.make_hlds.add_clause.c"
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

#line 947 "hlds.make_hlds.add_clause.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_stag_ordered_mode_annotations_0_0[3] = {
  &hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_0,
  &hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_1,
  &hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_3
};

#line 954 "hlds.make_hlds.add_clause.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_stag_ordered_mode_annotations_0_1[1] = {
  &hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_2
};

#line 959 "hlds.make_hlds.add_clause.c"
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

#line 973 "hlds.make_hlds.add_clause.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_name_ordered_mode_annotations_0[4] = {
  &hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_0,
  &hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_3,
  &hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_2,
  &hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_1
};

#line 981 "hlds.make_hlds.add_clause.c"
static const MR_Integer hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__functor_number_map_mode_annotations_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 989 "hlds.make_hlds.add_clause.c"
const MR_TypeCtorInfo_Struct hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__type_ctor_info_mode_annotations_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__add_clause____Unify____mode_annotations_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_clause____Compare____mode_annotations_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_clause",
  (MR_String) "mode_annotations",
  {
    hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_name_ordered_mode_annotations_0
  },
  {
    hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_ptag_ordered_mode_annotations_0
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__functor_number_map_mode_annotations_0
};

#line 1010 "hlds.make_hlds.add_clause.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_clause____Unify____mode_annotations_0_0_10001(
#line 1013 "hlds.make_hlds.add_clause.c"
  MR_Box hlds__make_hlds__add_clause__wrapper_arg_1,
#line 1015 "hlds.make_hlds.add_clause.c"
  MR_Box hlds__make_hlds__add_clause__wrapper_arg_2)
#line 1017 "hlds.make_hlds.add_clause.c"
{
#line 1019 "hlds.make_hlds.add_clause.c"
  {
#line 1021 "hlds.make_hlds.add_clause.c"
    MR_bool hlds__make_hlds__add_clause__succeeded;

#line 1024 "hlds.make_hlds.add_clause.c"
    {
#line 1026 "hlds.make_hlds.add_clause.c"
      hlds__make_hlds__add_clause__succeeded = hlds__make_hlds__add_clause____Unify____mode_annotations_0_0(((MR_Word) hlds__make_hlds__add_clause__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_clause__wrapper_arg_2));
    }
#line 1029 "hlds.make_hlds.add_clause.c"
    return hlds__make_hlds__add_clause__succeeded;
#line 1031 "hlds.make_hlds.add_clause.c"
  }
#line 1033 "hlds.make_hlds.add_clause.c"
}

#line 1036 "hlds.make_hlds.add_clause.c"
static void MR_CALL 
hlds__make_hlds__add_clause____Compare____mode_annotations_0_0_10001(
#line 1039 "hlds.make_hlds.add_clause.c"
  MR_Box * hlds__make_hlds__add_clause__wrapper_arg_1,
#line 1041 "hlds.make_hlds.add_clause.c"
  MR_Box hlds__make_hlds__add_clause__wrapper_arg_2,
#line 1043 "hlds.make_hlds.add_clause.c"
  MR_Box hlds__make_hlds__add_clause__wrapper_arg_3)
#line 1045 "hlds.make_hlds.add_clause.c"
{
#line 1047 "hlds.make_hlds.add_clause.c"
  {
#line 1049 "hlds.make_hlds.add_clause.c"
    MR_Word hlds__make_hlds__add_clause__conv0_HeadVar__1_1;

#line 1052 "hlds.make_hlds.add_clause.c"
    {
#line 1054 "hlds.make_hlds.add_clause.c"
      hlds__make_hlds__add_clause____Compare____mode_annotations_0_0(&hlds__make_hlds__add_clause__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__add_clause__wrapper_arg_2), ((MR_Word) hlds__make_hlds__add_clause__wrapper_arg_3));
    }
#line 1057 "hlds.make_hlds.add_clause.c"
    *hlds__make_hlds__add_clause__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__add_clause__conv0_HeadVar__1_1));
#line 1059 "hlds.make_hlds.add_clause.c"
  }
#line 1061 "hlds.make_hlds.add_clause.c"
}

#line 554 "add_clause.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__554__1_1_f_0(
#line 554 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__HeadVar__1_97,
#line 554 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__HeadVar__2_98)
#line 554 "add_clause.m"
{
#line 554 "add_clause.m"
  {
#line 554 "add_clause.m"
    MR_bool hlds__make_hlds__add_clause__succeeded;
#line 554 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__ApplProcIds_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__HeadVar__1_97, (MR_Integer) 0)));
#line 554 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__HeadVar__1_97, (MR_Integer) 2)));
#line 556 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__HeadVar__1_97, (MR_Integer) 1)));
#line 556 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__HeadVar__1_97, (MR_Integer) 3)));
#line 556 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__HeadVar__1_97, (MR_Integer) 4)));
#line 556 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_68_68;

#line 556 "add_clause.m"
    hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__V_99_99)) == (MR_mktag((MR_Integer) 1)));
#line 556 "add_clause.m"
    if (hlds__make_hlds__add_clause__succeeded)
#line 556 "add_clause.m"
      {
#line 556 "add_clause.m"
        hlds__make_hlds__add_clause__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_99_99, (MR_Integer) 0)));
#line 561 "add_clause.m"
        if ((hlds__make_hlds__add_clause__ApplProcIds_69 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 559 "add_clause.m"
          {
#line 560 "add_clause.m"
            {
#line 560 "add_clause.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_clause", (MR_String) "predicate \140hlds.make_hlds.add_clause.clauses_info_add_clause\'/24", (MR_String) "all_modes foreign_proc");
            }
#line 559 "add_clause.m"
          }
#line 561 "add_clause.m"
        else
#line 562 "add_clause.m"
          *hlds__make_hlds__add_clause__HeadVar__2_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__ApplProcIds_69, (MR_Integer) 0)));
#line 561 "add_clause.m"
        hlds__make_hlds__add_clause__succeeded = MR_TRUE;
#line 556 "add_clause.m"
      }
#line 554 "add_clause.m"
    return hlds__make_hlds__add_clause__succeeded;
#line 554 "add_clause.m"
  }
#line 554 "add_clause.m"
}

#line 453 "add_clause.m"
static void MR_CALL 
hlds__make_hlds__add_clause____Compare____mode_annotations_0_0(
#line 453 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__HeadVar__1_1,
#line 453 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__HeadVar__2_2,
#line 453 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__HeadVar__3_3)
#line 453 "add_clause.m"
{
#line 453 "add_clause.m"
  {
#line 453 "add_clause.m"
    MR_bool hlds__make_hlds__add_clause__succeeded;
#line 453 "add_clause.m"
    MR_Integer hlds__make_hlds__add_clause__CastX_12 = (MR_Integer) hlds__make_hlds__add_clause__HeadVar__2_2;
#line 453 "add_clause.m"
    MR_Integer hlds__make_hlds__add_clause__CastY_13 = (MR_Integer) hlds__make_hlds__add_clause__HeadVar__3_3;

#line 453 "add_clause.m"
    hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__CastX_12 == hlds__make_hlds__add_clause__CastY_13);
#line 453 "add_clause.m"
    if (hlds__make_hlds__add_clause__succeeded)
#line 1148 "hlds.make_hlds.add_clause.c"
      *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 0;
#line 453 "add_clause.m"
    else
#line 453 "add_clause.m"
      if ((hlds__make_hlds__add_clause__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 453 "add_clause.m"
        if ((hlds__make_hlds__add_clause__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 453 "add_clause.m"
          *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 0;
#line 453 "add_clause.m"
        else
#line 453 "add_clause.m"
          if ((hlds__make_hlds__add_clause__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 453 "add_clause.m"
            *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 1;
#line 453 "add_clause.m"
          else
#line 453 "add_clause.m"
            if ((hlds__make_hlds__add_clause__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 453 "add_clause.m"
              *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 1;
#line 453 "add_clause.m"
            else
#line 1172 "hlds.make_hlds.add_clause.c"
              *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 1;
#line 453 "add_clause.m"
      else
#line 453 "add_clause.m"
        if ((hlds__make_hlds__add_clause__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 453 "add_clause.m"
          if ((hlds__make_hlds__add_clause__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 453 "add_clause.m"
            *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 2;
#line 453 "add_clause.m"
          else
#line 453 "add_clause.m"
            if ((hlds__make_hlds__add_clause__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 453 "add_clause.m"
              *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 0;
#line 453 "add_clause.m"
            else
#line 453 "add_clause.m"
              if ((hlds__make_hlds__add_clause__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 453 "add_clause.m"
                *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 2;
#line 453 "add_clause.m"
              else
#line 1196 "hlds.make_hlds.add_clause.c"
                *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 2;
#line 453 "add_clause.m"
        else
#line 453 "add_clause.m"
          if ((hlds__make_hlds__add_clause__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 453 "add_clause.m"
            if ((hlds__make_hlds__add_clause__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 453 "add_clause.m"
              *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 2;
#line 453 "add_clause.m"
            else
#line 453 "add_clause.m"
              if ((hlds__make_hlds__add_clause__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 453 "add_clause.m"
                *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 1;
#line 453 "add_clause.m"
              else
#line 453 "add_clause.m"
                if ((hlds__make_hlds__add_clause__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 453 "add_clause.m"
                  *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 0;
#line 453 "add_clause.m"
                else
#line 1220 "hlds.make_hlds.add_clause.c"
                  *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 1;
#line 453 "add_clause.m"
          else
#line 453 "add_clause.m"
            {
#line 453 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__HeadVar__2_2, (MR_Integer) 0)));

#line 453 "add_clause.m"
              if ((hlds__make_hlds__add_clause__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1231 "hlds.make_hlds.add_clause.c"
                *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 2;
#line 453 "add_clause.m"
              else
#line 453 "add_clause.m"
                if ((hlds__make_hlds__add_clause__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1237 "hlds.make_hlds.add_clause.c"
                  *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 1;
#line 453 "add_clause.m"
                else
#line 453 "add_clause.m"
                  if ((hlds__make_hlds__add_clause__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1243 "hlds.make_hlds.add_clause.c"
                    *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 2;
#line 453 "add_clause.m"
                  else
#line 453 "add_clause.m"
                    {
#line 453 "add_clause.m"
                      MR_Word hlds__make_hlds__add_clause__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__HeadVar__3_3, (MR_Integer) 0)));

#line 453 "add_clause.m"
                      {
#line 453 "add_clause.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__add_clause_scalar_common_1[4], hlds__make_hlds__add_clause__HeadVar__1_1, ((MR_Box) (hlds__make_hlds__add_clause__V_15_15)), ((MR_Box) (hlds__make_hlds__add_clause__V_9_9)));
#line 453 "add_clause.m"
                        return;
                      }
#line 453 "add_clause.m"
                    }
#line 453 "add_clause.m"
            }
#line 453 "add_clause.m"
  }
#line 453 "add_clause.m"
}

#line 453 "add_clause.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_clause____Unify____mode_annotations_0_0(
#line 453 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__HeadVar__1_1,
#line 453 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__HeadVar__2_2)
#line 453 "add_clause.m"
{
#line 453 "add_clause.m"
  {
#line 453 "add_clause.m"
    MR_bool hlds__make_hlds__add_clause__succeeded;
#line 453 "add_clause.m"
    MR_Integer hlds__make_hlds__add_clause__CastX_11 = (MR_Integer) hlds__make_hlds__add_clause__HeadVar__1_1;
#line 453 "add_clause.m"
    MR_Integer hlds__make_hlds__add_clause__CastY_12 = (MR_Integer) hlds__make_hlds__add_clause__HeadVar__2_2;

#line 453 "add_clause.m"
    hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__CastX_11 == hlds__make_hlds__add_clause__CastY_12);
#line 453 "add_clause.m"
    if (hlds__make_hlds__add_clause__succeeded)
#line 453 "add_clause.m"
      hlds__make_hlds__add_clause__succeeded = MR_TRUE;
#line 453 "add_clause.m"
    else
#line 453 "add_clause.m"
      if ((hlds__make_hlds__add_clause__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 453 "add_clause.m"
        {
#line 453 "add_clause.m"
          MR_Integer hlds__make_hlds__add_clause__CastX_3 = (MR_Integer) hlds__make_hlds__add_clause__HeadVar__1_1;
#line 453 "add_clause.m"
          MR_Integer hlds__make_hlds__add_clause__CastY_4 = (MR_Integer) hlds__make_hlds__add_clause__HeadVar__2_2;

#line 453 "add_clause.m"
          hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__CastY_4 == hlds__make_hlds__add_clause__CastX_3);
#line 453 "add_clause.m"
        }
#line 453 "add_clause.m"
      else
#line 453 "add_clause.m"
        if ((hlds__make_hlds__add_clause__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 453 "add_clause.m"
          {
#line 453 "add_clause.m"
            MR_Integer hlds__make_hlds__add_clause__CastX_9 = (MR_Integer) hlds__make_hlds__add_clause__HeadVar__1_1;
#line 453 "add_clause.m"
            MR_Integer hlds__make_hlds__add_clause__CastY_10 = (MR_Integer) hlds__make_hlds__add_clause__HeadVar__2_2;

#line 453 "add_clause.m"
            hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__CastY_10 == hlds__make_hlds__add_clause__CastX_9);
#line 453 "add_clause.m"
          }
#line 453 "add_clause.m"
        else
#line 453 "add_clause.m"
          if ((hlds__make_hlds__add_clause__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 453 "add_clause.m"
            {
#line 453 "add_clause.m"
              MR_Integer hlds__make_hlds__add_clause__CastX_5 = (MR_Integer) hlds__make_hlds__add_clause__HeadVar__1_1;
#line 453 "add_clause.m"
              MR_Integer hlds__make_hlds__add_clause__CastY_6 = (MR_Integer) hlds__make_hlds__add_clause__HeadVar__2_2;

#line 453 "add_clause.m"
              hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__CastY_6 == hlds__make_hlds__add_clause__CastX_5);
#line 453 "add_clause.m"
            }
#line 453 "add_clause.m"
          else
#line 453 "add_clause.m"
            {
#line 453 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__TypeInfo_13_13;
#line 453 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__HeadVar__1_1, (MR_Integer) 0)));
#line 453 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__V_8_8;

#line 453 "add_clause.m"
              hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 453 "add_clause.m"
              if (hlds__make_hlds__add_clause__succeeded)
#line 453 "add_clause.m"
                {
#line 453 "add_clause.m"
                  hlds__make_hlds__add_clause__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__HeadVar__2_2, (MR_Integer) 0)));
#line 1356 "hlds.make_hlds.add_clause.c"
                  hlds__make_hlds__add_clause__TypeInfo_13_13 = (MR_Word) &hlds__make_hlds__add_clause_scalar_common_1[4];
#line 1358 "hlds.make_hlds.add_clause.c"
                  {
#line 1360 "hlds.make_hlds.add_clause.c"
                    return hlds__make_hlds__add_clause__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__add_clause__TypeInfo_13_13, ((MR_Box) (hlds__make_hlds__add_clause__V_7_7)), ((MR_Box) (hlds__make_hlds__add_clause__V_8_8)));
                  }
#line 453 "add_clause.m"
                }
#line 453 "add_clause.m"
            }
#line 453 "add_clause.m"
    return hlds__make_hlds__add_clause__succeeded;
#line 453 "add_clause.m"
  }
#line 453 "add_clause.m"
}

#line 599 "add_clause.m"
static void MR_CALL 
hlds__make_hlds__add_clause__add_clause_transform_20_p_0(
#line 599 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Renaming_21,
#line 599 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__HeadVars_22,
#line 599 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Args0_23,
#line 599 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__ParseBody_24,
#line 599 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Context_25,
#line 599 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredOrFunc_26,
#line 599 "add_clause.m"
  MR_Integer hlds__make_hlds__add_clause__Arity_27,
#line 599 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__GoalType_28,
#line 599 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__Goal_29,
#line 599 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_0_59,
#line 599 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_60,
#line 599 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__QuantWarnings_31,
#line 599 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__StateVarWarnings_32,
#line 599 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__StateVarErrors_33,
#line 599 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_61,
#line 599 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_62,
#line 599 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_63,
#line 599 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_64,
#line 599 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_65,
#line 599 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_66)
#line 599 "add_clause.m"
{
#line 611 "add_clause.m"
  {
#line 611 "add_clause.m"
    MR_bool hlds__make_hlds__add_clause__succeeded;
#line 611 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__HeadVarList_40;
#line 611 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__Args1_41;
#line 611 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__Args_42;
#line 611 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__FinalSVarMap_43;
#line 611 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__InitialSVarState_44;
#line 611 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__HeadGoal_46;
#line 611 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__BodyGoal_50;
#line 611 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__FinalSVarState_53;
#line 611 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__Goal0_54;
#line 611 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__VarTypes0_55;
#line 611 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__EmptyRttiVarmaps_56;
#line 611 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__VarTypes_57;
#line 611 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_68_68;
#line 611 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_SVarStore_70_70;
#line 611 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_71_71;
#line 611 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_SVarState_72_72;
#line 611 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_SVarStore_73_73;
#line 611 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_74_74;
#line 611 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_75_75;
#line 611 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_76_76;
#line 611 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_77_77;
#line 611 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_SVarStore_84_84;
#line 611 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_85_85;
#line 611 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_87_87;
#line 611 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_126_126;
#line 611 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_127_127;
#line 616 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_45_45;
#line 682 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_58_58;

#line 611 "add_clause.m"
    {
#line 611 "add_clause.m"
      hlds__make_hlds__add_clause__HeadVarList_40 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) &hlds__make_hlds__add_clause_scalar_common_1[3], hlds__make_hlds__add_clause__HeadVars_22);
    }
#line 612 "add_clause.m"
    {
#line 612 "add_clause.m"
      parse_tree__prog_data__rename_vars_in_term_list_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__add_clause__Renaming_21, hlds__make_hlds__add_clause__Args0_23, &hlds__make_hlds__add_clause__Args1_41);
    }
#line 613 "add_clause.m"
    {
#line 613 "add_clause.m"
      hlds__make_hlds__state_var__svar_prepare_for_clause_head_9_p_0(hlds__make_hlds__add_clause__Args1_41, &hlds__make_hlds__add_clause__Args_42, hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_0_59, &hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_68_68, &hlds__make_hlds__add_clause__FinalSVarMap_43, &hlds__make_hlds__add_clause__InitialSVarState_44, &hlds__make_hlds__add_clause__STATE_VARIABLE_SVarStore_70_70, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_65, &hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_71_71);
    }
#line 616 "add_clause.m"
    hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__GoalType_28)) == (MR_mktag((MR_Integer) 1)));
#line 616 "add_clause.m"
    if (hlds__make_hlds__add_clause__succeeded)
#line 616 "add_clause.m"
      {
#line 616 "add_clause.m"
        hlds__make_hlds__add_clause__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__GoalType_28, (MR_Integer) 0)));
#line 617 "add_clause.m"
        {
#line 617 "add_clause.m"
          hlds__make_hlds__add_clause__HeadGoal_46 = hlds__make_goal__true_goal_0_f_0();
        }
#line 617 "add_clause.m"
        hlds__make_hlds__add_clause__STATE_VARIABLE_SVarStore_73_73 = hlds__make_hlds__add_clause__STATE_VARIABLE_SVarStore_70_70;
#line 617 "add_clause.m"
        hlds__make_hlds__add_clause__STATE_VARIABLE_SVarState_72_72 = hlds__make_hlds__add_clause__InitialSVarState_44;
#line 617 "add_clause.m"
        hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_77_77 = hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_71_71;
#line 617 "add_clause.m"
        hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_76_76 = hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_63;
#line 617 "add_clause.m"
        hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_75_75 = hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_61;
#line 617 "add_clause.m"
        hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_74_74 = hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_68_68;
#line 616 "add_clause.m"
      }
#line 616 "add_clause.m"
    else
#line 619 "add_clause.m"
      {
#line 619 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__ArgContext_47;
#line 619 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__HeadGoal0_48;
#line 619 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__HeadGoal1_49;

#line 619 "add_clause.m"
        {
#line 619 "add_clause.m"
          hlds__make_hlds__add_clause__ArgContext_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 619 "add_clause.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__ArgContext_47, 0) = ((MR_Box) (hlds__make_hlds__add_clause__PredOrFunc_26));
#line 619 "add_clause.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__ArgContext_47, 1) = ((MR_Box) (hlds__make_hlds__add_clause__Arity_27));
#line 619 "add_clause.m"
        }
#line 620 "add_clause.m"
        {
#line 620 "add_clause.m"
          hlds__make_hlds__add_clause__HeadGoal0_48 = hlds__make_goal__true_goal_0_f_0();
        }
#line 621 "add_clause.m"
        {
#line 621 "add_clause.m"
          hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_p_0(hlds__make_hlds__add_clause__HeadVarList_40, hlds__make_hlds__add_clause__Args_42, hlds__make_hlds__add_clause__Context_25, hlds__make_hlds__add_clause__ArgContext_47, hlds__make_hlds__add_clause__HeadGoal0_48, &hlds__make_hlds__add_clause__HeadGoal1_49, hlds__make_hlds__add_clause__InitialSVarState_44, &hlds__make_hlds__add_clause__STATE_VARIABLE_SVarState_72_72, hlds__make_hlds__add_clause__STATE_VARIABLE_SVarStore_70_70, &hlds__make_hlds__add_clause__STATE_VARIABLE_SVarStore_73_73, hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_68_68, &hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_74_74, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_75_75, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_63, &hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_76_76, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_71_71, &hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_77_77);
        }
#line 636 "add_clause.m"
        {
#line 636 "add_clause.m"
          hlds__goal_util__attach_features_to_all_goals_4_p_1((MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[68]), (MR_Integer) 1, hlds__make_hlds__add_clause__HeadGoal1_49, &hlds__make_hlds__add_clause__HeadGoal_46);
        }
#line 619 "add_clause.m"
      }
#line 639 "add_clause.m"
    {
#line 639 "add_clause.m"
      hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0((MR_Integer) 0, hlds__make_hlds__add_clause__ParseBody_24, hlds__make_hlds__add_clause__Renaming_21, &hlds__make_hlds__add_clause__BodyGoal_50, hlds__make_hlds__add_clause__STATE_VARIABLE_SVarState_72_72, &hlds__make_hlds__add_clause__FinalSVarState_53, hlds__make_hlds__add_clause__STATE_VARIABLE_SVarStore_73_73, &hlds__make_hlds__add_clause__STATE_VARIABLE_SVarStore_84_84, hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_74_74, &hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_85_85, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_75_75, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_62, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_76_76, &hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_87_87, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_77_77, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_66);
    }
#line 673 "add_clause.m"
    {
#line 673 "add_clause.m"
      hlds__make_hlds__add_clause__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 673 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_127_127, 0) = ((MR_Box) (hlds__make_hlds__add_clause__BodyGoal_50));
#line 673 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_127_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 673 "add_clause.m"
    }
#line 673 "add_clause.m"
    {
#line 673 "add_clause.m"
      hlds__make_hlds__add_clause__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 673 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_126_126, 0) = ((MR_Box) (hlds__make_hlds__add_clause__HeadGoal_46));
#line 673 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_126_126, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_127_127));
#line 673 "add_clause.m"
    }
#line 672 "add_clause.m"
    {
#line 672 "add_clause.m"
      hlds__make_hlds__state_var__svar_finish_clause_body_9_p_0(hlds__make_hlds__add_clause__Context_25, hlds__make_hlds__add_clause__FinalSVarMap_43, hlds__make_hlds__add_clause__V_126_126, &hlds__make_hlds__add_clause__Goal0_54, hlds__make_hlds__add_clause__InitialSVarState_44, hlds__make_hlds__add_clause__FinalSVarState_53, hlds__make_hlds__add_clause__STATE_VARIABLE_SVarStore_84_84, hlds__make_hlds__add_clause__StateVarWarnings_32, hlds__make_hlds__add_clause__StateVarErrors_33);
    }
#line 676 "add_clause.m"
    {
#line 676 "add_clause.m"
      hlds__make_hlds__qual_info__qual_info_get_var_types_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_87_87, &hlds__make_hlds__add_clause__VarTypes0_55);
    }
#line 679 "add_clause.m"
    {
#line 679 "add_clause.m"
      hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&hlds__make_hlds__add_clause__EmptyRttiVarmaps_56);
    }
#line 682 "add_clause.m"
    {
#line 682 "add_clause.m"
      hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 0, hlds__make_hlds__add_clause__HeadVarList_40, hlds__make_hlds__add_clause__QuantWarnings_31, hlds__make_hlds__add_clause__Goal0_54, hlds__make_hlds__add_clause__Goal_29, hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_85_85, hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_60, hlds__make_hlds__add_clause__VarTypes0_55, &hlds__make_hlds__add_clause__VarTypes_57, hlds__make_hlds__add_clause__EmptyRttiVarmaps_56, &hlds__make_hlds__add_clause__V_58_58);
    }
#line 686 "add_clause.m"
    {
#line 686 "add_clause.m"
      hlds__make_hlds__qual_info__qual_info_set_var_types_3_p_0(hlds__make_hlds__add_clause__VarTypes_57, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_87_87, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_64);
#line 686 "add_clause.m"
      return;
    }
#line 611 "add_clause.m"
  }
#line 599 "add_clause.m"
}

#line 467 "add_clause.m"
static void MR_CALL 
hlds__make_hlds__add_clause__get_mode_annotations_4_p_0(
#line 467 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__HeadVar__1_1,
#line 467 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__HeadVar__2_2,
#line 467 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_0_3,
#line 467 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_4)
#line 467 "add_clause.m"
{
#line 470 "add_clause.m"
  {
#line 470 "add_clause.m"
    MR_bool hlds__make_hlds__add_clause__succeeded;

#line 470 "add_clause.m"
    if ((hlds__make_hlds__add_clause__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 470 "add_clause.m"
      {
#line 470 "add_clause.m"
        *hlds__make_hlds__add_clause__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 470 "add_clause.m"
        *hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_4 = hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_0_3;
#line 470 "add_clause.m"
      }
#line 470 "add_clause.m"
    else
#line 471 "add_clause.m"
      {
#line 471 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__Arg0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__HeadVar__1_1, (MR_Integer) 0)));
#line 471 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__Args0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__HeadVar__1_1, (MR_Integer) 1)));
#line 471 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__Arg_10;
#line 471 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__Args_11;
#line 471 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__MaybeAnnotation_13;
#line 471 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_16_16;
#line 499 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__Arg1_21;
#line 499 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__Mode_24;
#line 494 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__TypeCtorInfo_18_32;
#line 494 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__TypeCtorInfo_19_33;
#line 494 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__ModeTerm_22;
#line 494 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_25_25;
#line 494 "add_clause.m"
        MR_String hlds__make_hlds__add_clause__V_26_26;
#line 494 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_27_27;
#line 494 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_28_28;
#line 494 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_29_29;
#line 494 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_30_30;
#line 494 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_31_31;
#line 494 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_23_23;

#line 494 "add_clause.m"
        hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__Arg0_8)) == (MR_mktag((MR_Integer) 0)));
#line 494 "add_clause.m"
        if (hlds__make_hlds__add_clause__succeeded)
#line 494 "add_clause.m"
          {
#line 494 "add_clause.m"
            hlds__make_hlds__add_clause__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Arg0_8, (MR_Integer) 0)));
#line 494 "add_clause.m"
            hlds__make_hlds__add_clause__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Arg0_8, (MR_Integer) 1)));
#line 494 "add_clause.m"
            hlds__make_hlds__add_clause__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Arg0_8, (MR_Integer) 2)));
#line 494 "add_clause.m"
            hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__V_25_25)) == (MR_mktag((MR_Integer) 0)));
#line 494 "add_clause.m"
            if (hlds__make_hlds__add_clause__succeeded)
#line 494 "add_clause.m"
              {
#line 494 "add_clause.m"
                hlds__make_hlds__add_clause__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__V_25_25, (MR_Integer) 0)));
#line 494 "add_clause.m"
                hlds__make_hlds__add_clause__succeeded = (strcmp(hlds__make_hlds__add_clause__V_26_26, (MR_String) "::") == 0);
#line 494 "add_clause.m"
                if (hlds__make_hlds__add_clause__succeeded)
#line 494 "add_clause.m"
                  {
#line 494 "add_clause.m"
                    hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__V_27_27)) == (MR_mktag((MR_Integer) 1)));
#line 494 "add_clause.m"
                    if (hlds__make_hlds__add_clause__succeeded)
#line 494 "add_clause.m"
                      {
#line 494 "add_clause.m"
                        hlds__make_hlds__add_clause__Arg1_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_27_27, (MR_Integer) 0)));
#line 494 "add_clause.m"
                        hlds__make_hlds__add_clause__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_27_27, (MR_Integer) 1)));
#line 494 "add_clause.m"
                        hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 494 "add_clause.m"
                        if (hlds__make_hlds__add_clause__succeeded)
#line 494 "add_clause.m"
                          {
#line 494 "add_clause.m"
                            hlds__make_hlds__add_clause__ModeTerm_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_28_28, (MR_Integer) 0)));
#line 494 "add_clause.m"
                            hlds__make_hlds__add_clause__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_28_28, (MR_Integer) 1)));
#line 494 "add_clause.m"
                            hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 494 "add_clause.m"
                            if (hlds__make_hlds__add_clause__succeeded)
#line 494 "add_clause.m"
                              {
#line 495 "add_clause.m"
                                hlds__make_hlds__add_clause__V_30_30 = (MR_Integer) 0;
#line 1742 "hlds.make_hlds.add_clause.c"
                                hlds__make_hlds__add_clause__TypeCtorInfo_18_32 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1744 "hlds.make_hlds.add_clause.c"
                                hlds__make_hlds__add_clause__TypeCtorInfo_19_33 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 495 "add_clause.m"
                                {
#line 495 "add_clause.m"
                                  hlds__make_hlds__add_clause__V_31_31 = mercury__term__coerce_1_f_0(hlds__make_hlds__add_clause__TypeCtorInfo_18_32, hlds__make_hlds__add_clause__TypeCtorInfo_19_33, hlds__make_hlds__add_clause__ModeTerm_22);
                                }
#line 495 "add_clause.m"
                                {
#line 495 "add_clause.m"
                                  hlds__make_hlds__add_clause__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(hlds__make_hlds__add_clause__V_30_30, hlds__make_hlds__add_clause__V_31_31, &hlds__make_hlds__add_clause__Mode_24);
                                }
#line 494 "add_clause.m"
                              }
#line 494 "add_clause.m"
                          }
#line 494 "add_clause.m"
                      }
#line 494 "add_clause.m"
                  }
#line 494 "add_clause.m"
              }
#line 494 "add_clause.m"
          }
#line 499 "add_clause.m"
        if (hlds__make_hlds__add_clause__succeeded)
#line 497 "add_clause.m"
          {
#line 497 "add_clause.m"
            hlds__make_hlds__add_clause__Arg_10 = hlds__make_hlds__add_clause__Arg1_21;
#line 498 "add_clause.m"
            {
#line 498 "add_clause.m"
              hlds__make_hlds__add_clause__MaybeAnnotation_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 498 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__MaybeAnnotation_13, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Mode_24));
#line 498 "add_clause.m"
            }
#line 497 "add_clause.m"
          }
#line 499 "add_clause.m"
        else
#line 500 "add_clause.m"
          {
#line 500 "add_clause.m"
            hlds__make_hlds__add_clause__Arg_10 = hlds__make_hlds__add_clause__Arg0_8;
#line 501 "add_clause.m"
            hlds__make_hlds__add_clause__MaybeAnnotation_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 500 "add_clause.m"
          }
#line 479 "add_clause.m"
        if ((hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 479 "add_clause.m"
          if ((hlds__make_hlds__add_clause__MaybeAnnotation_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 479 "add_clause.m"
            hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 479 "add_clause.m"
          else
#line 480 "add_clause.m"
            {
#line 480 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__Mode_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__MaybeAnnotation_13, (MR_Integer) 0)));
#line 480 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__V_35_35;

#line 480 "add_clause.m"
              {
#line 480 "add_clause.m"
                hlds__make_hlds__add_clause__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 480 "add_clause.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_35_35, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Mode_34));
#line 480 "add_clause.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 480 "add_clause.m"
              }
#line 480 "add_clause.m"
              {
#line 480 "add_clause.m"
                hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 480 "add_clause.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_16_16, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_35_35));
#line 480 "add_clause.m"
              }
#line 480 "add_clause.m"
            }
#line 479 "add_clause.m"
        else
#line 479 "add_clause.m"
          if ((hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 485 "add_clause.m"
            hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 479 "add_clause.m"
          else
#line 479 "add_clause.m"
            if ((hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 479 "add_clause.m"
              if ((hlds__make_hlds__add_clause__MaybeAnnotation_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 483 "add_clause.m"
                hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 479 "add_clause.m"
              else
#line 484 "add_clause.m"
                hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 479 "add_clause.m"
            else
#line 479 "add_clause.m"
              {
#line 479 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_0_3, (MR_Integer) 0)));

#line 479 "add_clause.m"
                if ((hlds__make_hlds__add_clause__MaybeAnnotation_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 481 "add_clause.m"
                  hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 479 "add_clause.m"
                else
#line 482 "add_clause.m"
                  {
#line 482 "add_clause.m"
                    MR_Word hlds__make_hlds__add_clause__Mode_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__MaybeAnnotation_13, (MR_Integer) 0)));
#line 482 "add_clause.m"
                    MR_Word hlds__make_hlds__add_clause__V_41_41;
#line 482 "add_clause.m"
                    MR_Word hlds__make_hlds__add_clause__V_42_42;

#line 482 "add_clause.m"
                    {
#line 482 "add_clause.m"
                      hlds__make_hlds__add_clause__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 482 "add_clause.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_42_42, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Mode_39));
#line 482 "add_clause.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 482 "add_clause.m"
                    }
#line 482 "add_clause.m"
                    {
#line 482 "add_clause.m"
                      hlds__make_hlds__add_clause__V_41_41 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__make_hlds__add_clause__V_47_47, hlds__make_hlds__add_clause__V_42_42);
                    }
#line 482 "add_clause.m"
                    {
#line 482 "add_clause.m"
                      hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 482 "add_clause.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_16_16, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_41_41));
#line 482 "add_clause.m"
                    }
#line 482 "add_clause.m"
                  }
#line 479 "add_clause.m"
              }
#line 474 "add_clause.m"
        {
#line 474 "add_clause.m"
          hlds__make_hlds__add_clause__get_mode_annotations_4_p_0(hlds__make_hlds__add_clause__Args0_9, &hlds__make_hlds__add_clause__Args_11, hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_16_16, hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_4);
        }
#line 471 "add_clause.m"
        {
#line 471 "add_clause.m"
          MR_Word base;
#line 471 "add_clause.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 471 "add_clause.m"
          *hlds__make_hlds__add_clause__HeadVar__2_2 = base;
#line 471 "add_clause.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Arg_10));
#line 471 "add_clause.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_clause__Args_11));
#line 471 "add_clause.m"
        }
#line 471 "add_clause.m"
      }
#line 470 "add_clause.m"
  }
#line 467 "add_clause.m"
}

#line 443 "add_clause.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_clause__mode_decl_for_pred_info_to_pieces_2_f_0(
#line 443 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredInfo_4,
#line 443 "add_clause.m"
  MR_Integer hlds__make_hlds__add_clause__ProcId_5)
#line 443 "add_clause.m"
{
#line 446 "add_clause.m"
  {
#line 446 "add_clause.m"
    MR_bool hlds__make_hlds__add_clause__succeeded;
#line 446 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__HeadVar__3_3;
#line 446 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_8_8;
#line 446 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_9_9;
#line 446 "add_clause.m"
    MR_String hlds__make_hlds__add_clause__V_10_10;

#line 447 "add_clause.m"
    {
#line 447 "add_clause.m"
      hlds__make_hlds__add_clause__V_10_10 = check_hlds__mode_errors__mode_decl_to_string_2_f_0(hlds__make_hlds__add_clause__ProcId_5, hlds__make_hlds__add_clause__PredInfo_4);
    }
#line 447 "add_clause.m"
    {
#line 447 "add_clause.m"
      hlds__make_hlds__add_clause__V_9_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 447 "add_clause.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_9_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 447 "add_clause.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_9_9, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_10_10));
#line 447 "add_clause.m"
    }
#line 447 "add_clause.m"
    {
#line 447 "add_clause.m"
      hlds__make_hlds__add_clause__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 447 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_8_8, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_9_9));
#line 447 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_8_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[67])));
#line 447 "add_clause.m"
    }
#line 447 "add_clause.m"
    {
#line 447 "add_clause.m"
      hlds__make_hlds__add_clause__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 447 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__HeadVar__3_3, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[65])));
#line 447 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__HeadVar__3_3, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_8_8));
#line 447 "add_clause.m"
    }
#line 446 "add_clause.m"
    return hlds__make_hlds__add_clause__HeadVar__3_3;
#line 446 "add_clause.m"
  }
#line 443 "add_clause.m"
}

#line 432 "add_clause.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_clause__undeclared_mode_error_8_p_0_1(
#line 432 "add_clause.m"
  MR_Box hlds__make_hlds__add_clause__closure_arg,
#line 432 "add_clause.m"
  MR_Box hlds__make_hlds__add_clause__wrapper_arg_1)
#line 432 "add_clause.m"
{
#line 432 "add_clause.m"
  {
#line 432 "add_clause.m"
    MR_Box hlds__make_hlds__add_clause__wrapper_arg_2;
#line 432 "add_clause.m"
    MR_Box hlds__make_hlds__add_clause__closure = hlds__make_hlds__add_clause__closure_arg;
#line 432 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__conv0_HeadVar__3_3;

#line 432 "add_clause.m"
    {
#line 432 "add_clause.m"
      hlds__make_hlds__add_clause__conv0_HeadVar__3_3 = hlds__make_hlds__add_clause__mode_decl_for_pred_info_to_pieces_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__closure, (MR_Integer) 3))), ((MR_Integer) hlds__make_hlds__add_clause__wrapper_arg_1));
    }
#line 432 "add_clause.m"
    hlds__make_hlds__add_clause__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_clause__conv0_HeadVar__3_3));
#line 432 "add_clause.m"
    return hlds__make_hlds__add_clause__wrapper_arg_2;
#line 432 "add_clause.m"
  }
#line 432 "add_clause.m"
}

#line 393 "add_clause.m"
static void MR_CALL 
hlds__make_hlds__add_clause__undeclared_mode_error_8_p_0(
#line 393 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__ModeList_9,
#line 393 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__VarSet_10,
#line 393 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredId_11,
#line 393 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredInfo_12,
#line 393 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__ModuleInfo_13,
#line 393 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Context_14,
#line 393 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_31,
#line 393 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_32)
#line 393 "add_clause.m"
{
#line 398 "add_clause.m"
  {
#line 398 "add_clause.m"
    MR_bool hlds__make_hlds__add_clause__succeeded;
#line 398 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__TypeCtorInfo_118_118;
#line 398 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__PredIdPieces_16;
#line 398 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__StrippedModeList_17;
#line 398 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__PredOrFunc_18;
#line 398 "add_clause.m"
    MR_String hlds__make_hlds__add_clause__Name_19;
#line 398 "add_clause.m"
    MR_String hlds__make_hlds__add_clause__SubDeclStr_21;
#line 398 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__MainPieces_22;
#line 398 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__ProcIds_23;
#line 398 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__VerbosePieces_24;
#line 398 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__Msg_29;
#line 398 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__Spec_30;
#line 398 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_34_34;
#line 398 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_35_35;
#line 398 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_40_40;
#line 398 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_41_41;
#line 398 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_44_44;
#line 398 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_46_46;
#line 398 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_49_49;
#line 398 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_50_50;
#line 398 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_106_106;
#line 398 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_107_107;
#line 398 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_108_108;
#line 398 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_109_109;
#line 398 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_113_113;

#line 399 "add_clause.m"
    {
#line 399 "add_clause.m"
      hlds__make_hlds__add_clause__PredIdPieces_16 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(hlds__make_hlds__add_clause__ModuleInfo_13, (MR_Integer) 1, hlds__make_hlds__add_clause__PredId_11);
    }
#line 401 "add_clause.m"
    {
#line 401 "add_clause.m"
      parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_p_0(hlds__make_hlds__add_clause__ModeList_9, &hlds__make_hlds__add_clause__StrippedModeList_17);
    }
#line 402 "add_clause.m"
    {
#line 402 "add_clause.m"
      hlds__make_hlds__add_clause__PredOrFunc_18 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__make_hlds__add_clause__PredInfo_12);
    }
#line 403 "add_clause.m"
    {
#line 403 "add_clause.m"
      hlds__make_hlds__add_clause__Name_19 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__make_hlds__add_clause__PredInfo_12);
    }
#line 406 "add_clause.m"
    {
#line 406 "add_clause.m"
      hlds__make_hlds__add_clause__V_34_34 = mercury__varset__coerce_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, hlds__make_hlds__add_clause__VarSet_10);
    }
#line 406 "add_clause.m"
    {
#line 406 "add_clause.m"
      hlds__make_hlds__add_clause__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 406 "add_clause.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__V_35_35, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Name_19));
#line 406 "add_clause.m"
    }
#line 405 "add_clause.m"
    {
#line 405 "add_clause.m"
      hlds__make_hlds__add_clause__SubDeclStr_21 = parse_tree__mercury_to_mercury__mercury_mode_subdecl_to_string_6_f_0(hlds__make_hlds__add_clause__PredOrFunc_18, hlds__make_hlds__add_clause__V_34_34, hlds__make_hlds__add_clause__V_35_35, hlds__make_hlds__add_clause__StrippedModeList_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_clause__Context_14);
    }
#line 2130 "hlds.make_hlds.add_clause.c"
    hlds__make_hlds__add_clause__TypeCtorInfo_118_118 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 411 "add_clause.m"
    {
#line 411 "add_clause.m"
      hlds__make_hlds__add_clause__V_50_50 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 411 "add_clause.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_clause__V_50_50, 0) = ((MR_Box) (hlds__make_hlds__add_clause__SubDeclStr_21));
#line 411 "add_clause.m"
    }
#line 411 "add_clause.m"
    {
#line 411 "add_clause.m"
      hlds__make_hlds__add_clause__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 411 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_49_49, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_50_50));
#line 411 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[19])));
#line 411 "add_clause.m"
    }
#line 410 "add_clause.m"
    {
#line 410 "add_clause.m"
      hlds__make_hlds__add_clause__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 410 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_46_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[59])));
#line 410 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_46_46, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_49_49));
#line 410 "add_clause.m"
    }
#line 409 "add_clause.m"
    {
#line 409 "add_clause.m"
      hlds__make_hlds__add_clause__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 409 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_44_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 409 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_44_44, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_46_46));
#line 409 "add_clause.m"
    }
#line 409 "add_clause.m"
    {
#line 409 "add_clause.m"
      hlds__make_hlds__add_clause__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 409 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_41_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[58])));
#line 409 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_41_41, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_44_44));
#line 409 "add_clause.m"
    }
#line 409 "add_clause.m"
    {
#line 409 "add_clause.m"
      hlds__make_hlds__add_clause__V_40_40 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_clause__TypeCtorInfo_118_118, hlds__make_hlds__add_clause__PredIdPieces_16, hlds__make_hlds__add_clause__V_41_41);
    }
#line 409 "add_clause.m"
    {
#line 409 "add_clause.m"
      hlds__make_hlds__add_clause__MainPieces_22 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_clause__TypeCtorInfo_118_118, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[57]), hlds__make_hlds__add_clause__V_40_40);
    }
#line 412 "add_clause.m"
    {
#line 412 "add_clause.m"
      hlds__make_hlds__add_clause__ProcIds_23 = hlds__hlds_pred__pred_info_all_procids_1_f_0(hlds__make_hlds__add_clause__PredInfo_12);
    }
#line 417 "add_clause.m"
    if ((hlds__make_hlds__add_clause__ProcIds_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 414 "add_clause.m"
      {
#line 414 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_98_98;
#line 414 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_99_99;

#line 416 "add_clause.m"
        {
#line 416 "add_clause.m"
          hlds__make_hlds__add_clause__V_99_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 416 "add_clause.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_99_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 416 "add_clause.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_99_99, 1) = ((MR_Box) (hlds__make_hlds__add_clause__PredOrFunc_18));
#line 416 "add_clause.m"
        }
#line 416 "add_clause.m"
        {
#line 416 "add_clause.m"
          hlds__make_hlds__add_clause__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 416 "add_clause.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_98_98, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_99_99));
#line 416 "add_clause.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_98_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[43])));
#line 416 "add_clause.m"
        }
#line 415 "add_clause.m"
        {
#line 415 "add_clause.m"
          hlds__make_hlds__add_clause__VerbosePieces_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "add_clause.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__VerbosePieces_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[60])));
#line 415 "add_clause.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__VerbosePieces_24, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_98_98));
#line 415 "add_clause.m"
        }
#line 414 "add_clause.m"
      }
#line 417 "add_clause.m"
    else
#line 418 "add_clause.m"
      {
#line 418 "add_clause.m"
        MR_Integer hlds__make_hlds__add_clause__ProcIdsHead_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__ProcIds_23, (MR_Integer) 0)));
#line 418 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__ProcIdsTail_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__ProcIds_23, (MR_Integer) 1)));

#line 426 "add_clause.m"
        if ((hlds__make_hlds__add_clause__ProcIdsTail_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 420 "add_clause.m"
          {
#line 420 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_78_78;
#line 420 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_81_81;
#line 420 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_82_82;
#line 420 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_90_90;
#line 420 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_91_91;

#line 422 "add_clause.m"
            {
#line 422 "add_clause.m"
              hlds__make_hlds__add_clause__V_82_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 422 "add_clause.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_82_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 422 "add_clause.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_82_82, 1) = ((MR_Box) (hlds__make_hlds__add_clause__PredOrFunc_18));
#line 422 "add_clause.m"
            }
#line 422 "add_clause.m"
            {
#line 422 "add_clause.m"
              hlds__make_hlds__add_clause__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 422 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_81_81, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_82_82));
#line 422 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[47])));
#line 422 "add_clause.m"
            }
#line 421 "add_clause.m"
            {
#line 421 "add_clause.m"
              hlds__make_hlds__add_clause__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 421 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_78_78, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[61])));
#line 421 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_78_78, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_81_81));
#line 421 "add_clause.m"
            }
#line 424 "add_clause.m"
            {
#line 424 "add_clause.m"
              hlds__make_hlds__add_clause__V_91_91 = hlds__make_hlds__add_clause__mode_decl_for_pred_info_to_pieces_2_f_0(hlds__make_hlds__add_clause__PredInfo_12, hlds__make_hlds__add_clause__ProcIdsHead_25);
            }
#line 424 "add_clause.m"
            {
#line 424 "add_clause.m"
              hlds__make_hlds__add_clause__V_90_90 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_clause__TypeCtorInfo_118_118, hlds__make_hlds__add_clause__V_91_91, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[63]));
            }
#line 423 "add_clause.m"
            {
#line 423 "add_clause.m"
              hlds__make_hlds__add_clause__VerbosePieces_24 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_clause__TypeCtorInfo_118_118, hlds__make_hlds__add_clause__V_78_78, hlds__make_hlds__add_clause__V_90_90);
            }
#line 420 "add_clause.m"
          }
#line 426 "add_clause.m"
        else
#line 427 "add_clause.m"
          {
#line 427 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_57_57;
#line 427 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_60_60;
#line 427 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_61_61;
#line 427 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_69_69;
#line 427 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_70_70;
#line 427 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_71_71;
#line 427 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_72_72;

#line 429 "add_clause.m"
            {
#line 429 "add_clause.m"
              hlds__make_hlds__add_clause__V_61_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 429 "add_clause.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_61_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 429 "add_clause.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_61_61, 1) = ((MR_Box) (hlds__make_hlds__add_clause__PredOrFunc_18));
#line 429 "add_clause.m"
            }
#line 429 "add_clause.m"
            {
#line 429 "add_clause.m"
              hlds__make_hlds__add_clause__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 429 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_60_60, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_61_61));
#line 429 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[49])));
#line 429 "add_clause.m"
            }
#line 428 "add_clause.m"
            {
#line 428 "add_clause.m"
              hlds__make_hlds__add_clause__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_57_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[64])));
#line 428 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_57_57, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_60_60));
#line 428 "add_clause.m"
            }
#line 432 "add_clause.m"
            {
#line 432 "add_clause.m"
              hlds__make_hlds__add_clause__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 432 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__V_72_72, 0) = ((MR_Box) (&hlds__make_hlds__add_clause_scalar_common_5[0]));
#line 432 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__V_72_72, 1) = ((MR_Box) (hlds__make_hlds__add_clause__undeclared_mode_error_8_p_0_1));
#line 432 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__V_72_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 432 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__V_72_72, 3) = ((MR_Box) (hlds__make_hlds__add_clause__PredInfo_12));
#line 432 "add_clause.m"
            }
#line 432 "add_clause.m"
            {
#line 432 "add_clause.m"
              hlds__make_hlds__add_clause__V_71_71 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__make_hlds__add_clause_scalar_common_1[2], hlds__make_hlds__add_clause__V_72_72, hlds__make_hlds__add_clause__ProcIds_23);
            }
#line 431 "add_clause.m"
            {
#line 431 "add_clause.m"
              hlds__make_hlds__add_clause__V_70_70 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(hlds__make_hlds__add_clause__V_71_71, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
            }
#line 434 "add_clause.m"
            {
#line 434 "add_clause.m"
              hlds__make_hlds__add_clause__V_69_69 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_clause__TypeCtorInfo_118_118, hlds__make_hlds__add_clause__V_70_70, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[63]));
            }
#line 430 "add_clause.m"
            {
#line 430 "add_clause.m"
              hlds__make_hlds__add_clause__VerbosePieces_24 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_clause__TypeCtorInfo_118_118, hlds__make_hlds__add_clause__V_57_57, hlds__make_hlds__add_clause__V_69_69);
            }
#line 427 "add_clause.m"
          }
#line 418 "add_clause.m"
      }
#line 439 "add_clause.m"
    {
#line 439 "add_clause.m"
      hlds__make_hlds__add_clause__V_107_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 439 "add_clause.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__V_107_107, 0) = ((MR_Box) (hlds__make_hlds__add_clause__MainPieces_22));
#line 439 "add_clause.m"
    }
#line 439 "add_clause.m"
    {
#line 439 "add_clause.m"
      hlds__make_hlds__add_clause__V_109_109 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 439 "add_clause.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_clause__V_109_109, 0) = ((MR_Box) (hlds__make_hlds__add_clause__VerbosePieces_24));
#line 439 "add_clause.m"
    }
#line 439 "add_clause.m"
    {
#line 439 "add_clause.m"
      hlds__make_hlds__add_clause__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 439 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_108_108, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_109_109));
#line 439 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 439 "add_clause.m"
    }
#line 439 "add_clause.m"
    {
#line 439 "add_clause.m"
      hlds__make_hlds__add_clause__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 439 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_106_106, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_107_107));
#line 439 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_106_106, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_108_108));
#line 439 "add_clause.m"
    }
#line 438 "add_clause.m"
    {
#line 438 "add_clause.m"
      hlds__make_hlds__add_clause__Msg_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 438 "add_clause.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Msg_29, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Context_14));
#line 438 "add_clause.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Msg_29, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_106_106));
#line 438 "add_clause.m"
    }
#line 440 "add_clause.m"
    {
#line 440 "add_clause.m"
      hlds__make_hlds__add_clause__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 440 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_113_113, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Msg_29));
#line 440 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_113_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 440 "add_clause.m"
    }
#line 440 "add_clause.m"
    {
#line 440 "add_clause.m"
      hlds__make_hlds__add_clause__Spec_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 440 "add_clause.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 440 "add_clause.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 440 "add_clause.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_30, 2) = ((MR_Box) (hlds__make_hlds__add_clause__V_113_113));
#line 440 "add_clause.m"
    }
#line 441 "add_clause.m"
    {
#line 441 "add_clause.m"
      MR_Word base;
#line 441 "add_clause.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 441 "add_clause.m"
      *hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_32 = base;
#line 441 "add_clause.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Spec_30));
#line 441 "add_clause.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_31));
#line 441 "add_clause.m"
    }
#line 398 "add_clause.m"
  }
#line 393 "add_clause.m"
}

#line 325 "add_clause.m"
static void MR_CALL 
hlds__make_hlds__add_clause__select_applicable_modes_15_p_0(
#line 325 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Args0_16,
#line 325 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__VarSet_17,
#line 325 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Status_18,
#line 325 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Context_19,
#line 325 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredId_20,
#line 325 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredInfo_21,
#line 325 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__Args_22,
#line 325 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__ApplProcIds_23,
#line 325 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__AllProcIds_24,
#line 325 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_40,
#line 325 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_41,
#line 325 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_42,
#line 325 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_43,
#line 325 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_44,
#line 325 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_45)
#line 325 "add_clause.m"
{
#line 332 "add_clause.m"
  {
#line 332 "add_clause.m"
    MR_bool hlds__make_hlds__add_clause__succeeded;
#line 332 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__ModeAnnotations_28;

#line 333 "add_clause.m"
    {
#line 333 "add_clause.m"
      *hlds__make_hlds__add_clause__AllProcIds_24 = hlds__hlds_pred__pred_info_all_procids_1_f_0(hlds__make_hlds__add_clause__PredInfo_21);
    }
#line 334 "add_clause.m"
    {
#line 334 "add_clause.m"
      hlds__make_hlds__add_clause__get_mode_annotations_4_p_0(hlds__make_hlds__add_clause__Args0_16, hlds__make_hlds__add_clause__Args_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__add_clause__ModeAnnotations_28);
    }
#line 366 "add_clause.m"
    if ((hlds__make_hlds__add_clause__ModeAnnotations_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 379 "add_clause.m"
      {
#line 379 "add_clause.m"
        MR_String hlds__make_hlds__add_clause__PredIdStr_36;
#line 379 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__Pieces_37;
#line 379 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__Msg_38;
#line 379 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__Spec_39;
#line 379 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_49_49;
#line 379 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_50_50;
#line 379 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_65_65;
#line 379 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_66_66;
#line 379 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_70_70;

#line 380 "add_clause.m"
        {
#line 380 "add_clause.m"
          hlds__make_hlds__add_clause__PredIdStr_36 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_40, hlds__make_hlds__add_clause__PredId_20);
        }
#line 381 "add_clause.m"
        {
#line 381 "add_clause.m"
          hlds__make_hlds__add_clause__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 381 "add_clause.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_50_50, 0) = ((MR_Box) (hlds__make_hlds__add_clause__PredIdStr_36));
#line 381 "add_clause.m"
        }
#line 381 "add_clause.m"
        {
#line 381 "add_clause.m"
          hlds__make_hlds__add_clause__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 381 "add_clause.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_49_49, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_50_50));
#line 381 "add_clause.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[41])));
#line 381 "add_clause.m"
        }
#line 381 "add_clause.m"
        {
#line 381 "add_clause.m"
          hlds__make_hlds__add_clause__Pieces_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 381 "add_clause.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__Pieces_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[56])));
#line 381 "add_clause.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__Pieces_37, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_49_49));
#line 381 "add_clause.m"
        }
#line 384 "add_clause.m"
        {
#line 384 "add_clause.m"
          hlds__make_hlds__add_clause__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 384 "add_clause.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__V_66_66, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Pieces_37));
#line 384 "add_clause.m"
        }
#line 384 "add_clause.m"
        {
#line 384 "add_clause.m"
          hlds__make_hlds__add_clause__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 384 "add_clause.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_65_65, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_66_66));
#line 384 "add_clause.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 384 "add_clause.m"
        }
#line 384 "add_clause.m"
        {
#line 384 "add_clause.m"
          hlds__make_hlds__add_clause__Msg_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 384 "add_clause.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Msg_38, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Context_19));
#line 384 "add_clause.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Msg_38, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_65_65));
#line 384 "add_clause.m"
        }
#line 385 "add_clause.m"
        {
#line 385 "add_clause.m"
          hlds__make_hlds__add_clause__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 385 "add_clause.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_70_70, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Msg_38));
#line 385 "add_clause.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 385 "add_clause.m"
        }
#line 385 "add_clause.m"
        {
#line 385 "add_clause.m"
          hlds__make_hlds__add_clause__Spec_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 385 "add_clause.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 385 "add_clause.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 385 "add_clause.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_39, 2) = ((MR_Box) (hlds__make_hlds__add_clause__V_70_70));
#line 385 "add_clause.m"
        }
#line 386 "add_clause.m"
        {
#line 386 "add_clause.m"
          MR_Word base;
#line 386 "add_clause.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 386 "add_clause.m"
          *hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_45 = base;
#line 386 "add_clause.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Spec_39));
#line 386 "add_clause.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_44));
#line 386 "add_clause.m"
        }
#line 390 "add_clause.m"
        {
#line 390 "add_clause.m"
          MR_Word base;
#line 390 "add_clause.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 390 "add_clause.m"
          *hlds__make_hlds__add_clause__ApplProcIds_23 = base;
#line 390 "add_clause.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (*hlds__make_hlds__add_clause__AllProcIds_24));
#line 390 "add_clause.m"
        }
#line 390 "add_clause.m"
        *hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_43 = hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_42;
#line 379 "add_clause.m"
      }
#line 366 "add_clause.m"
    else
#line 366 "add_clause.m"
      if ((((hlds__make_hlds__add_clause__ModeAnnotations_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))) || ((hlds__make_hlds__add_clause__ModeAnnotations_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))))
#line 369 "add_clause.m"
        {
#line 370 "add_clause.m"
          {
#line 370 "add_clause.m"
            hlds__make_hlds__add_clause__succeeded = hlds__hlds_pred__pred_info_pragma_goal_type_1_p_0(hlds__make_hlds__add_clause__PredInfo_21);
          }
#line 375 "add_clause.m"
          if (hlds__make_hlds__add_clause__succeeded)
#line 374 "add_clause.m"
            {
#line 374 "add_clause.m"
              MR_Word base;
#line 374 "add_clause.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 374 "add_clause.m"
              *hlds__make_hlds__add_clause__ApplProcIds_23 = base;
#line 374 "add_clause.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (*hlds__make_hlds__add_clause__AllProcIds_24));
#line 374 "add_clause.m"
            }
#line 375 "add_clause.m"
          else
#line 376 "add_clause.m"
            *hlds__make_hlds__add_clause__ApplProcIds_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 376 "add_clause.m"
          *hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_43 = hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_42;
#line 376 "add_clause.m"
          *hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_45 = hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_44;
#line 369 "add_clause.m"
        }
#line 366 "add_clause.m"
      else
#line 336 "add_clause.m"
        {
#line 336 "add_clause.m"
          MR_Word hlds__make_hlds__add_clause__ModeList0_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__ModeAnnotations_28, (MR_Integer) 0)));
#line 336 "add_clause.m"
          MR_Word hlds__make_hlds__add_clause__ModeList_30;
#line 336 "add_clause.m"
          MR_Word hlds__make_hlds__add_clause__Procs_33;
#line 336 "add_clause.m"
          MR_Word hlds__make_hlds__add_clause__ExistingProcs_34;
#line 336 "add_clause.m"
          MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_73_73;
#line 359 "add_clause.m"
          MR_Integer hlds__make_hlds__add_clause__ProcId_35;

#line 342 "add_clause.m"
          hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__Status_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 344 "add_clause.m"
          if (hlds__make_hlds__add_clause__succeeded)
#line 343 "add_clause.m"
            {
#line 343 "add_clause.m"
              hlds__make_hlds__add_clause__ModeList_30 = hlds__make_hlds__add_clause__ModeList0_29;
#line 343 "add_clause.m"
              hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_73_73 = hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_44;
#line 343 "add_clause.m"
              *hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_43 = hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_42;
#line 343 "add_clause.m"
            }
#line 344 "add_clause.m"
          else
#line 345 "add_clause.m"
            {
#line 345 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__MQInfo0_31;
#line 345 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__MQInfo_32;

#line 345 "add_clause.m"
              {
#line 345 "add_clause.m"
                hlds__make_hlds__qual_info__qual_info_get_mq_info_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_42, &hlds__make_hlds__add_clause__MQInfo0_31);
              }
#line 346 "add_clause.m"
              {
#line 346 "add_clause.m"
                parse_tree__module_qual__qualify_clause_mode_list_7_p_0(hlds__make_hlds__add_clause__ModeList0_29, &hlds__make_hlds__add_clause__ModeList_30, hlds__make_hlds__add_clause__Context_19, hlds__make_hlds__add_clause__MQInfo0_31, &hlds__make_hlds__add_clause__MQInfo_32, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_44, &hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_73_73);
              }
#line 348 "add_clause.m"
              {
#line 348 "add_clause.m"
                hlds__make_hlds__qual_info__qual_info_set_mq_info_3_p_0(hlds__make_hlds__add_clause__MQInfo_32, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_42, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_43);
              }
#line 345 "add_clause.m"
            }
#line 352 "add_clause.m"
          {
#line 352 "add_clause.m"
            hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__make_hlds__add_clause__PredInfo_21, &hlds__make_hlds__add_clause__Procs_33);
          }
#line 353 "add_clause.m"
          {
#line 353 "add_clause.m"
            mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, hlds__make_hlds__add_clause__Procs_33, &hlds__make_hlds__add_clause__ExistingProcs_34);
          }
#line 355 "add_clause.m"
          {
#line 355 "add_clause.m"
            hlds__make_hlds__add_clause__succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(hlds__make_hlds__add_clause__ExistingProcs_34, hlds__make_hlds__add_clause__ModeList_30, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_40, &hlds__make_hlds__add_clause__ProcId_35);
          }
#line 359 "add_clause.m"
          if (hlds__make_hlds__add_clause__succeeded)
#line 358 "add_clause.m"
            {
#line 358 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__V_75_75;

#line 358 "add_clause.m"
              {
#line 358 "add_clause.m"
                hlds__make_hlds__add_clause__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 358 "add_clause.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_75_75, 0) = ((MR_Box) (hlds__make_hlds__add_clause__ProcId_35));
#line 358 "add_clause.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 358 "add_clause.m"
              }
#line 358 "add_clause.m"
              {
#line 358 "add_clause.m"
                MR_Word base;
#line 358 "add_clause.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 358 "add_clause.m"
                *hlds__make_hlds__add_clause__ApplProcIds_23 = base;
#line 358 "add_clause.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_75_75));
#line 358 "add_clause.m"
              }
#line 358 "add_clause.m"
              *hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_45 = hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_73_73;
#line 358 "add_clause.m"
            }
#line 359 "add_clause.m"
          else
#line 361 "add_clause.m"
            {
#line 360 "add_clause.m"
              {
#line 360 "add_clause.m"
                hlds__make_hlds__add_clause__undeclared_mode_error_8_p_0(hlds__make_hlds__add_clause__ModeList_30, hlds__make_hlds__add_clause__VarSet_17, hlds__make_hlds__add_clause__PredId_20, hlds__make_hlds__add_clause__PredInfo_21, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_40, hlds__make_hlds__add_clause__Context_19, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_73_73, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_45);
              }
#line 364 "add_clause.m"
              {
#line 364 "add_clause.m"
                MR_Word base;
#line 364 "add_clause.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 364 "add_clause.m"
                *hlds__make_hlds__add_clause__ApplProcIds_23 = base;
#line 364 "add_clause.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (*hlds__make_hlds__add_clause__AllProcIds_24));
#line 364 "add_clause.m"
              }
#line 361 "add_clause.m"
            }
#line 336 "add_clause.m"
        }
#line 390 "add_clause.m"
    *hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_41 = hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_40;
#line 332 "add_clause.m"
  }
#line 325 "add_clause.m"
}

#line 156 "add_clause.m"
static void MR_CALL 
hlds__make_hlds__add_clause__module_add_clause_2_19_p_0(
#line 156 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__ClauseVarSet_20,
#line 156 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredOrFunc_21,
#line 156 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredName_22,
#line 156 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredId_23,
#line 156 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Args_24,
#line 156 "add_clause.m"
  MR_Integer hlds__make_hlds__add_clause__Arity_25,
#line 156 "add_clause.m"
  MR_Integer hlds__make_hlds__add_clause__ArityAdjustment_26,
#line 156 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Body_27,
#line 156 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Status_28,
#line 156 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Context_29,
#line 156 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__MaybeSeqNum_30,
#line 156 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__GoalType_31,
#line 156 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__IllegalSVarResult_32,
#line 156 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_80,
#line 156 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_81,
#line 156 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_82,
#line 156 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_83,
#line 156 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_84,
#line 156 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_85)
#line 156 "add_clause.m"
{
#line 170 "add_clause.m"
  {
#line 170 "add_clause.m"
    MR_bool hlds__make_hlds__add_clause__succeeded;
#line 170 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__TypeCtorInfo_219_219;
#line 170 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__TypeCtorInfo_220_220;
#line 170 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__Preds0_38;
#line 170 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_PredicateTable_86_86;
#line 170 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_87_87;
#line 170 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_108_108;
#line 172 "add_clause.m"
    MR_Box hlds__make_hlds__add_clause__conv0_STATE_VARIABLE_PredInfo_87_87;
#line 174 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__VeryVerbose_41;
#line 174 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__Globals_185;

#line 170 "add_clause.m"
    {
#line 170 "add_clause.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_80, &hlds__make_hlds__add_clause__STATE_VARIABLE_PredicateTable_86_86);
    }
#line 171 "add_clause.m"
    {
#line 171 "add_clause.m"
      hlds__pred_table__predicate_table_get_preds_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_PredicateTable_86_86, &hlds__make_hlds__add_clause__Preds0_38);
    }
#line 2917 "hlds.make_hlds.add_clause.c"
    hlds__make_hlds__add_clause__TypeCtorInfo_219_219 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 2919 "hlds.make_hlds.add_clause.c"
    hlds__make_hlds__add_clause__TypeCtorInfo_220_220 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 172 "add_clause.m"
    {
#line 172 "add_clause.m"
      mercury__map__lookup_3_p_0(hlds__make_hlds__add_clause__TypeCtorInfo_219_219, hlds__make_hlds__add_clause__TypeCtorInfo_220_220, hlds__make_hlds__add_clause__Preds0_38, ((MR_Box) (hlds__make_hlds__add_clause__PredId_23)), &hlds__make_hlds__add_clause__conv0_STATE_VARIABLE_PredInfo_87_87);
    }
#line 172 "add_clause.m"
    hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_87_87 = ((MR_Word) hlds__make_hlds__add_clause__conv0_STATE_VARIABLE_PredInfo_87_87);
#line 176 "add_clause.m"
    {
#line 176 "add_clause.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_80, &hlds__make_hlds__add_clause__Globals_185);
    }
#line 177 "add_clause.m"
    {
#line 177 "add_clause.m"
      libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_clause__Globals_185, (MR_Integer) 46, &hlds__make_hlds__add_clause__VeryVerbose_41);
    }
#line 192 "add_clause.m"
    if ((hlds__make_hlds__add_clause__VeryVerbose_41 == (MR_Integer) 0))
#line 193 "add_clause.m"
      {
#line 193 "add_clause.m"
      }
#line 192 "add_clause.m"
    else
#line 179 "add_clause.m"
      {
#line 179 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__MsgClauses_42;
#line 179 "add_clause.m"
        MR_Integer hlds__make_hlds__add_clause__NumClauses_43;
#line 179 "add_clause.m"
        MR_Integer hlds__make_hlds__add_clause__PredArity0_44;
#line 179 "add_clause.m"
        MR_Integer hlds__make_hlds__add_clause__PredArity_45;
#line 179 "add_clause.m"
        MR_Integer hlds__make_hlds__add_clause__OrigArity_46;
#line 179 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_90_90;
#line 179 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_92_92;
#line 179 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_94_94;
#line 179 "add_clause.m"
        MR_Integer hlds__make_hlds__add_clause__V_95_95;
#line 179 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_101_101;
#line 181 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_211_211;
#line 181 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_212_212;
#line 181 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_213_213;
#line 181 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_214_214;
#line 181 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_215_215;
#line 181 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_216_216;
#line 181 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_217_217;
#line 181 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_218_218;

#line 180 "add_clause.m"
        {
#line 180 "add_clause.m"
          hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_87_87, &hlds__make_hlds__add_clause__MsgClauses_42);
        }
#line 181 "add_clause.m"
        hlds__make_hlds__add_clause__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__MsgClauses_42, (MR_Integer) 0)));
#line 181 "add_clause.m"
        hlds__make_hlds__add_clause__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__MsgClauses_42, (MR_Integer) 1)));
#line 181 "add_clause.m"
        hlds__make_hlds__add_clause__V_213_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__MsgClauses_42, (MR_Integer) 2)));
#line 181 "add_clause.m"
        hlds__make_hlds__add_clause__V_214_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__MsgClauses_42, (MR_Integer) 3)));
#line 181 "add_clause.m"
        hlds__make_hlds__add_clause__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__MsgClauses_42, (MR_Integer) 4)));
#line 181 "add_clause.m"
        hlds__make_hlds__add_clause__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__MsgClauses_42, (MR_Integer) 5)));
#line 181 "add_clause.m"
        hlds__make_hlds__add_clause__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__MsgClauses_42, (MR_Integer) 6)));
#line 181 "add_clause.m"
        hlds__make_hlds__add_clause__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__MsgClauses_42, (MR_Integer) 7)));
#line 181 "add_clause.m"
        hlds__make_hlds__add_clause__V_218_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__MsgClauses_42, (MR_Integer) 8)));
#line 181 "add_clause.m"
        {
#line 181 "add_clause.m"
          hlds__make_hlds__add_clause__NumClauses_43 = hlds__hlds_clauses__num_clauses_in_clauses_rep_1_f_0(hlds__make_hlds__add_clause__V_90_90);
        }
#line 184 "add_clause.m"
        hlds__make_hlds__add_clause__V_95_95 = (hlds__make_hlds__add_clause__NumClauses_43 + (MR_Integer) 1);
#line 184 "add_clause.m"
        {
#line 184 "add_clause.m"
          hlds__make_hlds__add_clause__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 184 "add_clause.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_94_94, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_95_95));
#line 184 "add_clause.m"
        }
#line 184 "add_clause.m"
        {
#line 184 "add_clause.m"
          hlds__make_hlds__add_clause__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 184 "add_clause.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_92_92, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_94_94));
#line 184 "add_clause.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 184 "add_clause.m"
        }
#line 183 "add_clause.m"
        {
#line 183 "add_clause.m"
          mercury__io__format_4_p_0((MR_String) "%% Processing clause %d for ", hlds__make_hlds__add_clause__V_92_92);
        }
#line 185 "add_clause.m"
        {
#line 185 "add_clause.m"
          parse_tree__prog_out__write_pred_or_func_3_p_0(hlds__make_hlds__add_clause__PredOrFunc_21);
        }
#line 186 "add_clause.m"
        {
#line 186 "add_clause.m"
          mercury__io__write_string_3_p_0((MR_String) " \140");
        }
#line 187 "add_clause.m"
        {
#line 187 "add_clause.m"
          mercury__list__length_2_p_0((MR_Word) &hlds__make_hlds__add_clause_scalar_common_1[0], hlds__make_hlds__add_clause__Args_24, &hlds__make_hlds__add_clause__PredArity0_44);
        }
#line 188 "add_clause.m"
        hlds__make_hlds__add_clause__PredArity_45 = (hlds__make_hlds__add_clause__PredArity0_44 + hlds__make_hlds__add_clause__ArityAdjustment_26);
#line 189 "add_clause.m"
        {
#line 189 "add_clause.m"
          parse_tree__prog_util__adjust_func_arity_3_p_1(hlds__make_hlds__add_clause__PredOrFunc_21, &hlds__make_hlds__add_clause__OrigArity_46, hlds__make_hlds__add_clause__PredArity_45);
        }
#line 190 "add_clause.m"
        {
#line 190 "add_clause.m"
          hlds__make_hlds__add_clause__V_101_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 190 "add_clause.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__V_101_101, 0) = ((MR_Box) (hlds__make_hlds__add_clause__PredName_22));
#line 190 "add_clause.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__V_101_101, 1) = ((MR_Box) (hlds__make_hlds__add_clause__OrigArity_46));
#line 190 "add_clause.m"
        }
#line 190 "add_clause.m"
        {
#line 190 "add_clause.m"
          parse_tree__prog_out__write_sym_name_and_arity_3_p_0(hlds__make_hlds__add_clause__V_101_101);
        }
#line 191 "add_clause.m"
        {
#line 191 "add_clause.m"
          mercury__io__write_string_3_p_0((MR_String) "\'...\n");
        }
#line 179 "add_clause.m"
      }
#line 200 "add_clause.m"
    hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__Status_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 206 "add_clause.m"
    if (hlds__make_hlds__add_clause__succeeded)
#line 201 "add_clause.m"
      {
#line 201 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__InitMarkers0_47;
#line 201 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__InitMarkers_48;
#line 201 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_106_106;

#line 201 "add_clause.m"
        {
#line 201 "add_clause.m"
          hlds__hlds_pred__pred_info_set_import_status_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_87_87, &hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_106_106);
        }
#line 202 "add_clause.m"
        {
#line 202 "add_clause.m"
          hlds__hlds_pred__pred_info_get_markers_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_106_106, &hlds__make_hlds__add_clause__InitMarkers0_47);
        }
#line 203 "add_clause.m"
        {
#line 203 "add_clause.m"
          hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 20, hlds__make_hlds__add_clause__InitMarkers0_47, &hlds__make_hlds__add_clause__InitMarkers_48);
        }
#line 205 "add_clause.m"
        {
#line 205 "add_clause.m"
          hlds__hlds_pred__pred_info_set_markers_3_p_0(hlds__make_hlds__add_clause__InitMarkers_48, hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_106_106, &hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_108_108);
        }
#line 201 "add_clause.m"
      }
#line 206 "add_clause.m"
    else
#line 205 "add_clause.m"
      hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_108_108 = hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_87_87;
#line 213 "add_clause.m"
    if ((hlds__make_hlds__add_clause__IllegalSVarResult_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 244 "add_clause.m"
      {
#line 219 "add_clause.m"
        MR_Integer hlds__make_hlds__add_clause__FuncArity_50;
#line 219 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_109_109;
#line 219 "add_clause.m"
        MR_Integer hlds__make_hlds__add_clause__V_222_222;
#line 221 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_51_51;
#line 221 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_52_52;

#line 219 "add_clause.m"
        hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__PredOrFunc_21 == (MR_Integer) 1);
#line 219 "add_clause.m"
        if (hlds__make_hlds__add_clause__succeeded)
#line 219 "add_clause.m"
          {
#line 220 "add_clause.m"
            hlds__make_hlds__add_clause__V_109_109 = (MR_Integer) 1;
#line 220 "add_clause.m"
            {
#line 220 "add_clause.m"
              parse_tree__prog_util__adjust_func_arity_3_p_1(hlds__make_hlds__add_clause__V_109_109, &hlds__make_hlds__add_clause__FuncArity_50, hlds__make_hlds__add_clause__Arity_25);
            }
#line 221 "add_clause.m"
            {
#line 221 "add_clause.m"
              hlds__make_hlds__add_clause__succeeded = hlds__hlds_pred__is_field_access_function_name_5_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_80, hlds__make_hlds__add_clause__PredName_22, &hlds__make_hlds__add_clause__V_222_222, &hlds__make_hlds__add_clause__V_51_51, &hlds__make_hlds__add_clause__V_52_52);
            }
#line 219 "add_clause.m"
            if (hlds__make_hlds__add_clause__succeeded)
#line 219 "add_clause.m"
              {
#line 221 "add_clause.m"
                hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__FuncArity_50 == hlds__make_hlds__add_clause__V_222_222);
#line 219 "add_clause.m"
                if (hlds__make_hlds__add_clause__succeeded)
#line 219 "add_clause.m"
                  {
#line 226 "add_clause.m"
                    hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__Status_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 226 "add_clause.m"
                    hlds__make_hlds__add_clause__succeeded = !(hlds__make_hlds__add_clause__succeeded);
#line 219 "add_clause.m"
                  }
#line 219 "add_clause.m"
              }
#line 219 "add_clause.m"
          }
#line 244 "add_clause.m"
        if (hlds__make_hlds__add_clause__succeeded)
#line 228 "add_clause.m"
          {
#line 228 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__CallId_53;
#line 228 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__MainPieces_54;
#line 228 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__Msg_56;
#line 228 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__Spec_57;
#line 228 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_112_112;
#line 228 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_115_115;
#line 228 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_116_116;
#line 228 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_141_141;
#line 228 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_142_142;
#line 228 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_148_148;

#line 228 "add_clause.m"
            {
#line 228 "add_clause.m"
              hlds__make_hlds__add_clause__CallId_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 228 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__CallId_53, 0) = ((MR_Box) (hlds__make_hlds__add_clause__PredOrFunc_21));
#line 228 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__CallId_53, 1) = ((MR_Box) (hlds__make_hlds__add_clause__PredName_22));
#line 228 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__CallId_53, 2) = ((MR_Box) (hlds__make_hlds__add_clause__Arity_25));
#line 228 "add_clause.m"
            }
#line 231 "add_clause.m"
            {
#line 231 "add_clause.m"
              hlds__make_hlds__add_clause__V_116_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 231 "add_clause.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_116_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 231 "add_clause.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_116_116, 1) = ((MR_Box) (hlds__make_hlds__add_clause__CallId_53));
#line 231 "add_clause.m"
            }
#line 231 "add_clause.m"
            {
#line 231 "add_clause.m"
              hlds__make_hlds__add_clause__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 231 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_115_115, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_116_116));
#line 231 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_115_115, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[19])));
#line 231 "add_clause.m"
            }
#line 231 "add_clause.m"
            {
#line 231 "add_clause.m"
              hlds__make_hlds__add_clause__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 231 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_112_112, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[54])));
#line 231 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_112_112, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_115_115));
#line 231 "add_clause.m"
            }
#line 230 "add_clause.m"
            {
#line 230 "add_clause.m"
              hlds__make_hlds__add_clause__MainPieces_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 230 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__MainPieces_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[53])));
#line 230 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__MainPieces_54, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_112_112));
#line 230 "add_clause.m"
            }
#line 240 "add_clause.m"
            {
#line 240 "add_clause.m"
              hlds__make_hlds__add_clause__V_142_142 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 240 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__V_142_142, 0) = ((MR_Box) (hlds__make_hlds__add_clause__MainPieces_54));
#line 240 "add_clause.m"
            }
#line 240 "add_clause.m"
            {
#line 240 "add_clause.m"
              hlds__make_hlds__add_clause__V_141_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 240 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_141_141, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_142_142));
#line 240 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_141_141, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[55])));
#line 240 "add_clause.m"
            }
#line 239 "add_clause.m"
            {
#line 239 "add_clause.m"
              hlds__make_hlds__add_clause__Msg_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 239 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Msg_56, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Context_29));
#line 239 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Msg_56, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_141_141));
#line 239 "add_clause.m"
            }
#line 242 "add_clause.m"
            {
#line 242 "add_clause.m"
              hlds__make_hlds__add_clause__V_148_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 242 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_148_148, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Msg_56));
#line 242 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_148_148, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 242 "add_clause.m"
            }
#line 241 "add_clause.m"
            {
#line 241 "add_clause.m"
              hlds__make_hlds__add_clause__Spec_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 241 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 241 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 241 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_57, 2) = ((MR_Box) (hlds__make_hlds__add_clause__V_148_148));
#line 241 "add_clause.m"
            }
#line 243 "add_clause.m"
            {
#line 243 "add_clause.m"
              MR_Word base;
#line 243 "add_clause.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 243 "add_clause.m"
              *hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_85 = base;
#line 243 "add_clause.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Spec_57));
#line 243 "add_clause.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_84));
#line 243 "add_clause.m"
            }
#line 243 "add_clause.m"
            *hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_83 = hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_82;
#line 243 "add_clause.m"
            *hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_81 = hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_80;
#line 228 "add_clause.m"
          }
#line 244 "add_clause.m"
        else
#line 265 "add_clause.m"
          {
#line 245 "add_clause.m"
            {
#line 245 "add_clause.m"
              hlds__make_hlds__add_clause__succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_108_108);
            }
#line 265 "add_clause.m"
            if (hlds__make_hlds__add_clause__succeeded)
#line 254 "add_clause.m"
              {
#line 254 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__AllowDefnOfBuiltin_58;
#line 254 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__Globals_190;

#line 251 "add_clause.m"
                {
#line 251 "add_clause.m"
                  hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_80, &hlds__make_hlds__add_clause__Globals_190);
                }
#line 252 "add_clause.m"
                {
#line 252 "add_clause.m"
                  libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_clause__Globals_190, (MR_Integer) 276, &hlds__make_hlds__add_clause__AllowDefnOfBuiltin_58);
                }
#line 262 "add_clause.m"
                if ((hlds__make_hlds__add_clause__AllowDefnOfBuiltin_58 == (MR_Integer) 0))
#line 256 "add_clause.m"
                  {
#line 256 "add_clause.m"
                    MR_Word hlds__make_hlds__add_clause__V_161_161;
#line 256 "add_clause.m"
                    MR_Word hlds__make_hlds__add_clause__Msg_191;
#line 256 "add_clause.m"
                    MR_Word hlds__make_hlds__add_clause__Spec_192;

#line 257 "add_clause.m"
                    {
#line 257 "add_clause.m"
                      hlds__make_hlds__add_clause__Msg_191 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 257 "add_clause.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Msg_191, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Context_29));
#line 257 "add_clause.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Msg_191, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[34])));
#line 257 "add_clause.m"
                    }
#line 260 "add_clause.m"
                    {
#line 260 "add_clause.m"
                      hlds__make_hlds__add_clause__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 260 "add_clause.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_161_161, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Msg_191));
#line 260 "add_clause.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_161_161, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 260 "add_clause.m"
                    }
#line 259 "add_clause.m"
                    {
#line 259 "add_clause.m"
                      hlds__make_hlds__add_clause__Spec_192 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 259 "add_clause.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_192, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 259 "add_clause.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_192, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 259 "add_clause.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_192, 2) = ((MR_Box) (hlds__make_hlds__add_clause__V_161_161));
#line 259 "add_clause.m"
                    }
#line 261 "add_clause.m"
                    {
#line 261 "add_clause.m"
                      MR_Word base;
#line 261 "add_clause.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 261 "add_clause.m"
                      *hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_85 = base;
#line 261 "add_clause.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Spec_192));
#line 261 "add_clause.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_84));
#line 261 "add_clause.m"
                    }
#line 256 "add_clause.m"
                  }
#line 262 "add_clause.m"
                else
#line 263 "add_clause.m"
                  *hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_85 = hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_84;
#line 263 "add_clause.m"
                *hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_83 = hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_82;
#line 263 "add_clause.m"
                *hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_81 = hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_80;
#line 254 "add_clause.m"
              }
#line 265 "add_clause.m"
            else
#line 266 "add_clause.m"
              {
#line 266 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__Clauses0_59;
#line 266 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__TVarSet0_60;
#line 266 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__ArgTerms_62;
#line 266 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__ProcIdsForThisClause_63;
#line 266 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__AllProcIds_64;
#line 266 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__Goal_65;
#line 266 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__VarSet_66;
#line 266 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__TVarSet_67;
#line 266 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__Clauses_68;
#line 266 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__Warnings_69;
#line 266 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__ExistQVars_72;
#line 266 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__ArgTypes_73;
#line 266 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__ProcIds_74;
#line 266 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__Preds_78;
#line 266 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_164_164;
#line 266 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_165_165;
#line 266 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_166_166;
#line 266 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_167_167;
#line 266 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_168_168;
#line 266 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_170_170;
#line 266 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_171_171;
#line 266 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_173_173;
#line 266 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_176_176;
#line 266 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_177_177;
#line 266 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_179_201;
#line 266 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_PredicateTable_180_202;
#line 268 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__V_61_61;
#line 278 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__PromiseType_70;
#line 285 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause___ArgTVarSet_71;
#line 297 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__V_75_75;

#line 266 "add_clause.m"
                {
#line 266 "add_clause.m"
                  hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_108_108, &hlds__make_hlds__add_clause__Clauses0_59);
                }
#line 267 "add_clause.m"
                {
#line 267 "add_clause.m"
                  hlds__hlds_pred__pred_info_get_typevarset_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_108_108, &hlds__make_hlds__add_clause__TVarSet0_60);
                }
#line 268 "add_clause.m"
                {
#line 268 "add_clause.m"
                  check_hlds__clause_to_proc__maybe_add_default_func_mode_3_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_108_108, &hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_164_164, &hlds__make_hlds__add_clause__V_61_61);
                }
#line 269 "add_clause.m"
                {
#line 269 "add_clause.m"
                  hlds__make_hlds__add_clause__select_applicable_modes_15_p_0(hlds__make_hlds__add_clause__Args_24, hlds__make_hlds__add_clause__ClauseVarSet_20, hlds__make_hlds__add_clause__Status_28, hlds__make_hlds__add_clause__Context_29, hlds__make_hlds__add_clause__PredId_23, hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_164_164, &hlds__make_hlds__add_clause__ArgTerms_62, &hlds__make_hlds__add_clause__ProcIdsForThisClause_63, &hlds__make_hlds__add_clause__AllProcIds_64, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_80, &hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_165_165, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_82, &hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_166_166, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_84, &hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_167_167);
                }
#line 272 "add_clause.m"
                {
#line 272 "add_clause.m"
                  hlds__make_hlds__add_clause__clauses_info_add_clause_24_p_0(hlds__make_hlds__add_clause__ProcIdsForThisClause_63, hlds__make_hlds__add_clause__AllProcIds_64, hlds__make_hlds__add_clause__ClauseVarSet_20, hlds__make_hlds__add_clause__TVarSet0_60, hlds__make_hlds__add_clause__ArgTerms_62, hlds__make_hlds__add_clause__Body_27, hlds__make_hlds__add_clause__Context_29, hlds__make_hlds__add_clause__MaybeSeqNum_30, hlds__make_hlds__add_clause__Status_28, hlds__make_hlds__add_clause__PredOrFunc_21, hlds__make_hlds__add_clause__Arity_25, hlds__make_hlds__add_clause__GoalType_31, &hlds__make_hlds__add_clause__Goal_65, &hlds__make_hlds__add_clause__VarSet_66, &hlds__make_hlds__add_clause__TVarSet_67, hlds__make_hlds__add_clause__Clauses0_59, &hlds__make_hlds__add_clause__Clauses_68, &hlds__make_hlds__add_clause__Warnings_69, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_165_165, &hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_168_168, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_166_166, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_83, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_167_167, &hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_170_170);
                }
#line 277 "add_clause.m"
                {
#line 277 "add_clause.m"
                  hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(hlds__make_hlds__add_clause__Clauses_68, hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_164_164, &hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_171_171);
                }
#line 278 "add_clause.m"
                hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__GoalType_31)) == (MR_mktag((MR_Integer) 1)));
#line 278 "add_clause.m"
                if (hlds__make_hlds__add_clause__succeeded)
#line 278 "add_clause.m"
                  {
#line 278 "add_clause.m"
                    hlds__make_hlds__add_clause__PromiseType_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__GoalType_31, (MR_Integer) 0)));
#line 279 "add_clause.m"
                    {
#line 279 "add_clause.m"
                      hlds__hlds_pred__pred_info_set_goal_type_3_p_0(hlds__make_hlds__add_clause__GoalType_31, hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_171_171, &hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_173_173);
                    }
#line 278 "add_clause.m"
                  }
#line 278 "add_clause.m"
                else
#line 282 "add_clause.m"
                  {
#line 282 "add_clause.m"
                    {
#line 282 "add_clause.m"
                      hlds__hlds_pred__pred_info_update_goal_type_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_171_171, &hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_173_173);
                    }
#line 282 "add_clause.m"
                  }
#line 284 "add_clause.m"
                {
#line 284 "add_clause.m"
                  hlds__hlds_pred__pred_info_set_typevarset_3_p_0(hlds__make_hlds__add_clause__TVarSet_67, hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_173_173, &hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_176_176);
                }
#line 285 "add_clause.m"
                {
#line 285 "add_clause.m"
                  hlds__hlds_pred__pred_info_get_arg_types_4_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_176_176, &hlds__make_hlds__add_clause___ArgTVarSet_71, &hlds__make_hlds__add_clause__ExistQVars_72, &hlds__make_hlds__add_clause__ArgTypes_73);
                }
#line 287 "add_clause.m"
                {
#line 287 "add_clause.m"
                  hlds__hlds_pred__pred_info_set_arg_types_5_p_0(hlds__make_hlds__add_clause__TVarSet_67, hlds__make_hlds__add_clause__ExistQVars_72, hlds__make_hlds__add_clause__ArgTypes_73, hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_176_176, &hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_177_177);
                }
#line 294 "add_clause.m"
                {
#line 294 "add_clause.m"
                  hlds__make_hlds__add_clause__ProcIds_74 = hlds__hlds_pred__pred_info_all_procids_1_f_0(hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_177_177);
                }
#line 296 "add_clause.m"
                hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__ProcIds_74 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 296 "add_clause.m"
                if (hlds__make_hlds__add_clause__succeeded)
#line 296 "add_clause.m"
                  {
#line 297 "add_clause.m"
                    hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__GoalType_31)) == (MR_mktag((MR_Integer) 1)));
#line 297 "add_clause.m"
                    if (hlds__make_hlds__add_clause__succeeded)
#line 297 "add_clause.m"
                      hlds__make_hlds__add_clause__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__GoalType_31, (MR_Integer) 0)));
#line 297 "add_clause.m"
                    hlds__make_hlds__add_clause__succeeded = !(hlds__make_hlds__add_clause__succeeded);
#line 296 "add_clause.m"
                  }
#line 302 "add_clause.m"
                if (hlds__make_hlds__add_clause__succeeded)
#line 299 "add_clause.m"
                  {
#line 299 "add_clause.m"
                    MR_Word hlds__make_hlds__add_clause__EndMarkers0_76;
#line 299 "add_clause.m"
                    MR_Word hlds__make_hlds__add_clause__EndMarkers_77;

#line 299 "add_clause.m"
                    {
#line 299 "add_clause.m"
                      hlds__hlds_pred__pred_info_get_markers_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_177_177, &hlds__make_hlds__add_clause__EndMarkers0_76);
                    }
#line 300 "add_clause.m"
                    {
#line 300 "add_clause.m"
                      hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 3, hlds__make_hlds__add_clause__EndMarkers0_76, &hlds__make_hlds__add_clause__EndMarkers_77);
                    }
#line 301 "add_clause.m"
                    {
#line 301 "add_clause.m"
                      hlds__hlds_pred__pred_info_set_markers_3_p_0(hlds__make_hlds__add_clause__EndMarkers_77, hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_177_177, &hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_179_201);
                    }
#line 299 "add_clause.m"
                  }
#line 302 "add_clause.m"
                else
#line 301 "add_clause.m"
                  hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_179_201 = hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_177_177;
#line 305 "add_clause.m"
                {
#line 305 "add_clause.m"
                  mercury__map__det_update_4_p_0(hlds__make_hlds__add_clause__TypeCtorInfo_219_219, hlds__make_hlds__add_clause__TypeCtorInfo_220_220, ((MR_Box) (hlds__make_hlds__add_clause__PredId_23)), ((MR_Box) (hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_179_201)), hlds__make_hlds__add_clause__Preds0_38, &hlds__make_hlds__add_clause__Preds_78);
                }
#line 306 "add_clause.m"
                {
#line 306 "add_clause.m"
                  hlds__pred_table__predicate_table_set_preds_3_p_0(hlds__make_hlds__add_clause__Preds_78, hlds__make_hlds__add_clause__STATE_VARIABLE_PredicateTable_86_86, &hlds__make_hlds__add_clause__STATE_VARIABLE_PredicateTable_180_202);
                }
#line 307 "add_clause.m"
                {
#line 307 "add_clause.m"
                  hlds__hlds_module__module_info_set_predicate_table_3_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_PredicateTable_180_202, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_168_168, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_81);
                }
#line 308 "add_clause.m"
                hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__Status_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 310 "add_clause.m"
                if (hlds__make_hlds__add_clause__succeeded)
#line 308 "add_clause.m"
                  *hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_85 = hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_170_170;
#line 310 "add_clause.m"
                else
#line 312 "add_clause.m"
                  {
#line 312 "add_clause.m"
                    MR_Word hlds__make_hlds__add_clause__SimpleCallId_79;
#line 312 "add_clause.m"
                    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_182_182;

#line 312 "add_clause.m"
                    {
#line 312 "add_clause.m"
                      hlds__make_hlds__add_clause__SimpleCallId_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 312 "add_clause.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__SimpleCallId_79, 0) = ((MR_Box) (hlds__make_hlds__add_clause__PredOrFunc_21));
#line 312 "add_clause.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__SimpleCallId_79, 1) = ((MR_Box) (hlds__make_hlds__add_clause__PredName_22));
#line 312 "add_clause.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__SimpleCallId_79, 2) = ((MR_Box) (hlds__make_hlds__add_clause__Arity_25));
#line 312 "add_clause.m"
                    }
#line 313 "add_clause.m"
                    {
#line 313 "add_clause.m"
                      hlds__make_hlds__make_hlds_warn__warn_singletons_6_p_0(*hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_81, hlds__make_hlds__add_clause__SimpleCallId_79, hlds__make_hlds__add_clause__VarSet_66, hlds__make_hlds__add_clause__Goal_65, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_170_170, &hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_182_182);
                    }
#line 316 "add_clause.m"
                    {
#line 316 "add_clause.m"
                      hlds__make_hlds__make_hlds_warn__add_quant_warnings_5_p_0(hlds__make_hlds__add_clause__SimpleCallId_79, hlds__make_hlds__add_clause__VarSet_66, hlds__make_hlds__add_clause__Warnings_69, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_182_182, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_85);
#line 316 "add_clause.m"
                      return;
                    }
#line 312 "add_clause.m"
                  }
#line 266 "add_clause.m"
              }
#line 265 "add_clause.m"
          }
#line 244 "add_clause.m"
      }
#line 213 "add_clause.m"
    else
#line 210 "add_clause.m"
      {
#line 210 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__StateVar_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__IllegalSVarResult_32, (MR_Integer) 0)));

#line 211 "add_clause.m"
        {
#line 211 "add_clause.m"
          hlds__make_hlds__state_var__report_illegal_func_svar_result_5_p_0(hlds__make_hlds__add_clause__Context_29, hlds__make_hlds__add_clause__ClauseVarSet_20, hlds__make_hlds__add_clause__StateVar_49, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_84, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_85);
        }
#line 211 "add_clause.m"
        *hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_81 = hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_80;
#line 211 "add_clause.m"
        *hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_83 = hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_82;
#line 210 "add_clause.m"
      }
#line 170 "add_clause.m"
  }
#line 156 "add_clause.m"
}

#line 554 "add_clause.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_clause__clauses_info_add_clause_24_p_0_1(
#line 554 "add_clause.m"
  MR_Box hlds__make_hlds__add_clause__closure_arg,
#line 554 "add_clause.m"
  MR_Box hlds__make_hlds__add_clause__wrapper_arg_1,
#line 554 "add_clause.m"
  MR_Box * hlds__make_hlds__add_clause__wrapper_arg_2)
#line 554 "add_clause.m"
{
#line 554 "add_clause.m"
  {
#line 554 "add_clause.m"
    MR_bool hlds__make_hlds__add_clause__succeeded;
#line 554 "add_clause.m"
    MR_Box hlds__make_hlds__add_clause__closure = hlds__make_hlds__add_clause__closure_arg;
#line 554 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__conv0_HeadVar__2_98;

#line 554 "add_clause.m"
    {
#line 554 "add_clause.m"
      hlds__make_hlds__add_clause__succeeded = hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__554__1_1_f_0(((MR_Word) hlds__make_hlds__add_clause__wrapper_arg_1), &hlds__make_hlds__add_clause__conv0_HeadVar__2_98);
    }
#line 554 "add_clause.m"
    if (hlds__make_hlds__add_clause__succeeded)
#line 554 "add_clause.m"
      {
#line 554 "add_clause.m"
        *hlds__make_hlds__add_clause__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_clause__conv0_HeadVar__2_98));
#line 554 "add_clause.m"
        hlds__make_hlds__add_clause__succeeded = MR_TRUE;
#line 554 "add_clause.m"
      }
#line 554 "add_clause.m"
    return hlds__make_hlds__add_clause__succeeded;
#line 554 "add_clause.m"
  }
#line 554 "add_clause.m"
}

#line 31 "add_clause.m"
void MR_CALL 
hlds__make_hlds__add_clause__clauses_info_add_clause_24_p_0(
#line 31 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__ApplModeIds0_25,
#line 31 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__AllModeIds_26,
#line 31 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__CVarSet_27,
#line 31 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__TVarSet0_28,
#line 31 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Args_29,
#line 31 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Body_30,
#line 31 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Context_31,
#line 31 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__MaybeSeqNum_32,
#line 31 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Status_33,
#line 31 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredOrFunc_34,
#line 31 "add_clause.m"
  MR_Integer hlds__make_hlds__add_clause__Arity_35,
#line 31 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__GoalType_36,
#line 31 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__Goal_37,
#line 31 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__VarSet_38,
#line 31 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__TVarSet_39,
#line 31 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_79,
#line 31 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_80,
#line 31 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__QuantWarnings_41,
#line 31 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_81,
#line 31 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_82,
#line 31 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_83,
#line 31 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_84,
#line 31 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_85,
#line 31 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_86)
#line 31 "add_clause.m"
{
#line 507 "add_clause.m"
  {
#line 507 "add_clause.m"
    MR_bool hlds__make_hlds__add_clause__succeeded;
#line 507 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__VarSet0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_79, (MR_Integer) 0)));
#line 507 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__ExplicitVarTypes0_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_79, (MR_Integer) 1)));
#line 507 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__TVarNameMap0_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_79, (MR_Integer) 2)));
#line 507 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__InferredVarTypes_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_79, (MR_Integer) 3)));
#line 507 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__HeadVars_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_79, (MR_Integer) 4)));
#line 507 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__ClausesRep0_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_79, (MR_Integer) 5)));
#line 507 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__ItemNumbers0_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_79, (MR_Integer) 6)));
#line 507 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__RttiVarMaps_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_79, (MR_Integer) 7)));
#line 507 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__HasForeignClauses_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_79, (MR_Integer) 8)));
#line 507 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__IsEmpty_54;
#line 507 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__TVarNameMap_55;
#line 507 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__VarSet1_56;
#line 507 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__Renaming_57;
#line 507 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__Goal0_58;
#line 507 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__StateVarWarnings_59;
#line 507 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__StateVarErrors_60;
#line 507 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__FoundError_61;
#line 507 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_87_87;
#line 507 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_89_89;
#line 507 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_90_90;

#line 511 "add_clause.m"
    {
#line 511 "add_clause.m"
      hlds__make_hlds__add_clause__IsEmpty_54 = hlds__hlds_clauses__clause_list_is_empty_1_f_0(hlds__make_hlds__add_clause__ClausesRep0_50);
    }
#line 521 "add_clause.m"
    if ((hlds__make_hlds__add_clause__IsEmpty_54 == (MR_Integer) 0))
#line 523 "add_clause.m"
      hlds__make_hlds__add_clause__TVarNameMap_55 = hlds__make_hlds__add_clause__TVarNameMap0_47;
#line 521 "add_clause.m"
    else
#line 513 "add_clause.m"
      {
#line 520 "add_clause.m"
        {
#line 520 "add_clause.m"
          mercury__varset__create_name_var_map_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, hlds__make_hlds__add_clause__TVarSet0_28, &hlds__make_hlds__add_clause__TVarNameMap_55);
        }
#line 513 "add_clause.m"
      }
#line 525 "add_clause.m"
    {
#line 525 "add_clause.m"
      hlds__make_hlds__qual_info__update_qual_info_6_p_0(hlds__make_hlds__add_clause__TVarNameMap_55, hlds__make_hlds__add_clause__TVarSet0_28, hlds__make_hlds__add_clause__ExplicitVarTypes0_46, hlds__make_hlds__add_clause__Status_33, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_83, &hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_87_87);
    }
#line 527 "add_clause.m"
    {
#line 527 "add_clause.m"
      mercury__varset__merge_renaming_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__add_clause__VarSet0_45, hlds__make_hlds__add_clause__CVarSet_27, &hlds__make_hlds__add_clause__VarSet1_56, &hlds__make_hlds__add_clause__Renaming_57);
    }
#line 528 "add_clause.m"
    {
#line 528 "add_clause.m"
      hlds__make_hlds__add_clause__add_clause_transform_20_p_0(hlds__make_hlds__add_clause__Renaming_57, hlds__make_hlds__add_clause__HeadVars_49, hlds__make_hlds__add_clause__Args_29, hlds__make_hlds__add_clause__Body_30, hlds__make_hlds__add_clause__Context_31, hlds__make_hlds__add_clause__PredOrFunc_34, hlds__make_hlds__add_clause__Arity_35, hlds__make_hlds__add_clause__GoalType_36, &hlds__make_hlds__add_clause__Goal0_58, hlds__make_hlds__add_clause__VarSet1_56, hlds__make_hlds__add_clause__VarSet_38, hlds__make_hlds__add_clause__QuantWarnings_41, &hlds__make_hlds__add_clause__StateVarWarnings_59, &hlds__make_hlds__add_clause__StateVarErrors_60, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_81, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_82, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_87_87, &hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_89_89, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_85, &hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_90_90);
    }
#line 532 "add_clause.m"
    {
#line 532 "add_clause.m"
      hlds__make_hlds__qual_info__qual_info_get_tvarset_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_89_89, hlds__make_hlds__add_clause__TVarSet_39);
    }
#line 533 "add_clause.m"
    {
#line 533 "add_clause.m"
      hlds__make_hlds__qual_info__qual_info_get_found_syntax_error_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_89_89, &hlds__make_hlds__add_clause__FoundError_61);
    }
#line 534 "add_clause.m"
    {
#line 534 "add_clause.m"
      hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_p_0((MR_Integer) 0, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_89_89, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_84);
    }
#line 536 "add_clause.m"
    hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__FoundError_61 == (MR_Integer) 1);
#line 537 "add_clause.m"
    if (!(hlds__make_hlds__add_clause__succeeded))
#line 537 "add_clause.m"
      {
#line 537 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_62_62;
#line 537 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_63_63;

#line 537 "add_clause.m"
        hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__StateVarErrors_60)) == (MR_mktag((MR_Integer) 1)));
#line 537 "add_clause.m"
        if (hlds__make_hlds__add_clause__succeeded)
#line 537 "add_clause.m"
          {
#line 537 "add_clause.m"
            hlds__make_hlds__add_clause__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__StateVarErrors_60, (MR_Integer) 0)));
#line 537 "add_clause.m"
            hlds__make_hlds__add_clause__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__StateVarErrors_60, (MR_Integer) 1)));
#line 537 "add_clause.m"
          }
#line 537 "add_clause.m"
      }
#line 546 "add_clause.m"
    if (hlds__make_hlds__add_clause__succeeded)
#line 544 "add_clause.m"
      {
#line 544 "add_clause.m"
        {
#line 544 "add_clause.m"
          *hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_86 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__make_hlds__add_clause__StateVarErrors_60, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_90_90);
        }
#line 545 "add_clause.m"
        {
#line 545 "add_clause.m"
          *hlds__make_hlds__add_clause__Goal_37 = hlds__make_goal__true_goal_0_f_0();
        }
#line 545 "add_clause.m"
        *hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_80 = hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_79;
#line 544 "add_clause.m"
      }
#line 546 "add_clause.m"
    else
#line 547 "add_clause.m"
      {
#line 547 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__ClausesRep_72;
#line 547 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__ExplicitVarTypes_77;
#line 547 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__ItemNumbers_78;

#line 547 "add_clause.m"
        *hlds__make_hlds__add_clause__Goal_37 = hlds__make_hlds__add_clause__Goal0_58;
#line 583 "add_clause.m"
        if ((hlds__make_hlds__add_clause__HasForeignClauses_53 == (MR_Integer) 0))
#line 584 "add_clause.m"
          {
#line 584 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__Clause_107;

#line 585 "add_clause.m"
            {
#line 585 "add_clause.m"
              hlds__make_hlds__add_clause__Clause_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 585 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clause_107, 0) = ((MR_Box) (hlds__make_hlds__add_clause__ApplModeIds0_25));
#line 585 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clause_107, 1) = ((MR_Box) (*hlds__make_hlds__add_clause__Goal_37));
#line 585 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clause_107, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 585 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clause_107, 3) = ((MR_Box) (hlds__make_hlds__add_clause__Context_31));
#line 585 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clause_107, 4) = ((MR_Box) (hlds__make_hlds__add_clause__StateVarWarnings_59));
#line 585 "add_clause.m"
            }
#line 587 "add_clause.m"
            {
#line 587 "add_clause.m"
              hlds__hlds_clauses__add_clause_3_p_0(hlds__make_hlds__add_clause__Clause_107, hlds__make_hlds__add_clause__ClausesRep0_50, &hlds__make_hlds__add_clause__ClausesRep_72);
            }
#line 584 "add_clause.m"
          }
#line 583 "add_clause.m"
        else
#line 552 "add_clause.m"
          {
#line 552 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__TypeCtorInfo_119_119;
#line 552 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__AnyOrderClauseList_64;
#line 552 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__ForeignModeIds_65;
#line 552 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__ModeIds0_70;
#line 552 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__ModeIds_71;
#line 552 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_95_95;

#line 553 "add_clause.m"
            {
#line 553 "add_clause.m"
              hlds__hlds_clauses__get_clause_list_any_order_2_p_0(hlds__make_hlds__add_clause__ClausesRep0_50, &hlds__make_hlds__add_clause__AnyOrderClauseList_64);
            }
#line 3988 "hlds.make_hlds.add_clause.c"
            hlds__make_hlds__add_clause__TypeCtorInfo_119_119 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 554 "add_clause.m"
            {
#line 554 "add_clause.m"
              hlds__make_hlds__add_clause__V_95_95 = mercury__list__filter_map_2_f_0((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, (MR_Word) &hlds__make_hlds__add_clause_scalar_common_1[1], (MR_Word) &hlds__make_hlds__add_clause_scalar_common_4[0], hlds__make_hlds__add_clause__AnyOrderClauseList_64);
            }
#line 554 "add_clause.m"
            {
#line 554 "add_clause.m"
              hlds__make_hlds__add_clause__ForeignModeIds_65 = mercury__list__condense_1_f_0(hlds__make_hlds__add_clause__TypeCtorInfo_119_119, hlds__make_hlds__add_clause__V_95_95);
            }
#line 569 "add_clause.m"
            if ((hlds__make_hlds__add_clause__ApplModeIds0_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 568 "add_clause.m"
              hlds__make_hlds__add_clause__ModeIds0_70 = hlds__make_hlds__add_clause__AllModeIds_26;
#line 569 "add_clause.m"
            else
#line 570 "add_clause.m"
              hlds__make_hlds__add_clause__ModeIds0_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__ApplModeIds0_25, (MR_Integer) 0)));
#line 572 "add_clause.m"
            {
#line 572 "add_clause.m"
              hlds__make_hlds__add_clause__ModeIds_71 = mercury__list__delete_elems_2_f_0(hlds__make_hlds__add_clause__TypeCtorInfo_119_119, hlds__make_hlds__add_clause__ModeIds0_70, hlds__make_hlds__add_clause__ForeignModeIds_65);
            }
#line 576 "add_clause.m"
            if ((hlds__make_hlds__add_clause__ModeIds_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 575 "add_clause.m"
              hlds__make_hlds__add_clause__ClausesRep_72 = hlds__make_hlds__add_clause__ClausesRep0_50;
#line 576 "add_clause.m"
            else
#line 577 "add_clause.m"
              {
#line 577 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__ApplicableModeIds_75;
#line 577 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__Clause_76;

#line 578 "add_clause.m"
                {
#line 578 "add_clause.m"
                  hlds__make_hlds__add_clause__ApplicableModeIds_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 578 "add_clause.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__ApplicableModeIds_75, 0) = ((MR_Box) (hlds__make_hlds__add_clause__ModeIds_71));
#line 578 "add_clause.m"
                }
#line 579 "add_clause.m"
                {
#line 579 "add_clause.m"
                  hlds__make_hlds__add_clause__Clause_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 579 "add_clause.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clause_76, 0) = ((MR_Box) (hlds__make_hlds__add_clause__ApplicableModeIds_75));
#line 579 "add_clause.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clause_76, 1) = ((MR_Box) (*hlds__make_hlds__add_clause__Goal_37));
#line 579 "add_clause.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clause_76, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 579 "add_clause.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clause_76, 3) = ((MR_Box) (hlds__make_hlds__add_clause__Context_31));
#line 579 "add_clause.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clause_76, 4) = ((MR_Box) (hlds__make_hlds__add_clause__StateVarWarnings_59));
#line 579 "add_clause.m"
                }
#line 581 "add_clause.m"
                {
#line 581 "add_clause.m"
                  hlds__hlds_clauses__add_clause_3_p_0(hlds__make_hlds__add_clause__Clause_76, hlds__make_hlds__add_clause__ClausesRep0_50, &hlds__make_hlds__add_clause__ClausesRep_72);
                }
#line 577 "add_clause.m"
              }
#line 552 "add_clause.m"
          }
#line 589 "add_clause.m"
        {
#line 589 "add_clause.m"
          hlds__make_hlds__qual_info__qual_info_get_var_types_2_p_0(*hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_84, &hlds__make_hlds__add_clause__ExplicitVarTypes_77);
        }
#line 590 "add_clause.m"
        {
#line 590 "add_clause.m"
          hlds__hlds_clauses__add_clause_item_number_5_p_0(hlds__make_hlds__add_clause__MaybeSeqNum_32, hlds__make_hlds__add_clause__Context_31, (MR_Integer) 0, hlds__make_hlds__add_clause__ItemNumbers0_51, &hlds__make_hlds__add_clause__ItemNumbers_78);
        }
#line 592 "add_clause.m"
        {
#line 592 "add_clause.m"
          MR_Word base;
#line 592 "add_clause.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 592 "add_clause.m"
          *hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_80 = base;
#line 592 "add_clause.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (*hlds__make_hlds__add_clause__VarSet_38));
#line 592 "add_clause.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__add_clause__ExplicitVarTypes_77));
#line 592 "add_clause.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__add_clause__TVarNameMap_55));
#line 592 "add_clause.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__make_hlds__add_clause__InferredVarTypes_48));
#line 592 "add_clause.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__make_hlds__add_clause__HeadVars_49));
#line 592 "add_clause.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__make_hlds__add_clause__ClausesRep_72));
#line 592 "add_clause.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__make_hlds__add_clause__ItemNumbers_78));
#line 592 "add_clause.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__make_hlds__add_clause__RttiVarMaps_52));
#line 592 "add_clause.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__make_hlds__add_clause__HasForeignClauses_53));
#line 592 "add_clause.m"
        }
#line 592 "add_clause.m"
        *hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_86 = hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_90_90;
#line 547 "add_clause.m"
      }
#line 507 "add_clause.m"
  }
#line 31 "add_clause.m"
}

#line 25 "add_clause.m"
void MR_CALL 
hlds__make_hlds__add_clause__module_add_clause_15_p_0(
#line 25 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__ClauseVarSet_16,
#line 25 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredOrFunc_17,
#line 25 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredName_18,
#line 25 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Args0_19,
#line 25 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Body_20,
#line 25 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Status_21,
#line 25 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Context_22,
#line 25 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__MaybeSeqNum_23,
#line 25 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__GoalType_24,
#line 25 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_51,
#line 25 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_52,
#line 25 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_53,
#line 25 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_54,
#line 25 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_55,
#line 25 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_56)
#line 25 "add_clause.m"
{
#line 88 "add_clause.m"
  {
#line 88 "add_clause.m"
    MR_bool hlds__make_hlds__add_clause__succeeded;
#line 88 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__IllegalSVarResult_29;
#line 88 "add_clause.m"
    MR_Integer hlds__make_hlds__add_clause__ArityAdjustment_30;
#line 88 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__Args_32;
#line 88 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__ModuleName_33;
#line 88 "add_clause.m"
    MR_Integer hlds__make_hlds__add_clause__Arity0_34;
#line 88 "add_clause.m"
    MR_Integer hlds__make_hlds__add_clause__Arity_35;
#line 88 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__PredicateTable_37;
#line 88 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__PredIds_38;
#line 91 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__SVar_28;
#line 94 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_31_31;
#line 4165 "hlds.make_hlds.add_clause.c"
    MR_Word hlds__make_hlds__add_clause__PredIdPrime_39;
#line 107 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_58_58;

#line 89 "add_clause.m"
    {
#line 89 "add_clause.m"
      hlds__make_hlds__add_clause__succeeded = hlds__make_hlds__state_var__illegal_state_var_func_result_3_p_0(hlds__make_hlds__add_clause__PredOrFunc_17, hlds__make_hlds__add_clause__Args0_19, &hlds__make_hlds__add_clause__SVar_28);
    }
#line 91 "add_clause.m"
    if (hlds__make_hlds__add_clause__succeeded)
#line 90 "add_clause.m"
      {
#line 90 "add_clause.m"
        hlds__make_hlds__add_clause__IllegalSVarResult_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 90 "add_clause.m"
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__IllegalSVarResult_29, 0) = ((MR_Box) (hlds__make_hlds__add_clause__SVar_28));
#line 90 "add_clause.m"
      }
#line 91 "add_clause.m"
    else
#line 92 "add_clause.m"
      hlds__make_hlds__add_clause__IllegalSVarResult_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 94 "add_clause.m"
    hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__IllegalSVarResult_29)) == (MR_mktag((MR_Integer) 1)));
#line 94 "add_clause.m"
    if (hlds__make_hlds__add_clause__succeeded)
#line 94 "add_clause.m"
      {
#line 94 "add_clause.m"
        hlds__make_hlds__add_clause__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__IllegalSVarResult_29, (MR_Integer) 0)));
#line 94 "add_clause.m"
        hlds__make_hlds__add_clause__ArityAdjustment_30 = (MR_Integer) -1;
#line 94 "add_clause.m"
      }
#line 94 "add_clause.m"
    else
#line 94 "add_clause.m"
      hlds__make_hlds__add_clause__ArityAdjustment_30 = (MR_Integer) 0;
#line 95 "add_clause.m"
    {
#line 95 "add_clause.m"
      hlds__make_hlds__state_var__expand_bang_states_2_p_0(hlds__make_hlds__add_clause__Args0_19, &hlds__make_hlds__add_clause__Args_32);
    }
#line 100 "add_clause.m"
    {
#line 100 "add_clause.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_51, &hlds__make_hlds__add_clause__ModuleName_33);
    }
#line 101 "add_clause.m"
    {
#line 101 "add_clause.m"
      mercury__list__length_2_p_0((MR_Word) &hlds__make_hlds__add_clause_scalar_common_1[0], hlds__make_hlds__add_clause__Args_32, &hlds__make_hlds__add_clause__Arity0_34);
    }
#line 102 "add_clause.m"
    hlds__make_hlds__add_clause__Arity_35 = (hlds__make_hlds__add_clause__Arity0_34 + hlds__make_hlds__add_clause__ArityAdjustment_30);
#line 104 "add_clause.m"
    {
#line 104 "add_clause.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_51, &hlds__make_hlds__add_clause__PredicateTable_37);
    }
#line 105 "add_clause.m"
    {
#line 105 "add_clause.m"
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__make_hlds__add_clause__PredicateTable_37, (MR_Integer) 0, hlds__make_hlds__add_clause__PredOrFunc_17, hlds__make_hlds__add_clause__PredName_18, hlds__make_hlds__add_clause__Arity_35, &hlds__make_hlds__add_clause__PredIds_38);
    }
#line 107 "add_clause.m"
    hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__PredIds_38)) == (MR_mktag((MR_Integer) 1)));
#line 107 "add_clause.m"
    if (hlds__make_hlds__add_clause__succeeded)
#line 107 "add_clause.m"
      {
#line 107 "add_clause.m"
        hlds__make_hlds__add_clause__PredIdPrime_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__PredIds_38, (MR_Integer) 0)));
#line 107 "add_clause.m"
        hlds__make_hlds__add_clause__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__PredIds_38, (MR_Integer) 1)));
#line 107 "add_clause.m"
        hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__V_58_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 107 "add_clause.m"
      }
#line 4246 "hlds.make_hlds.add_clause.c"
    if (hlds__make_hlds__add_clause__succeeded)
#line 4248 "hlds.make_hlds.add_clause.c"
      {
#line 109 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_41_41;

#line 109 "add_clause.m"
        hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__GoalType_24)) == (MR_mktag((MR_Integer) 1)));
#line 109 "add_clause.m"
        if (hlds__make_hlds__add_clause__succeeded)
#line 109 "add_clause.m"
          {
#line 109 "add_clause.m"
            hlds__make_hlds__add_clause__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__GoalType_24, (MR_Integer) 0)));
#line 110 "add_clause.m"
            {
#line 110 "add_clause.m"
              MR_String hlds__make_hlds__add_clause__NameString_42;
#line 110 "add_clause.m"
              MR_String hlds__make_hlds__add_clause__UnexpectedMsg_43;
#line 110 "add_clause.m"
              MR_String hlds__make_hlds__add_clause__V_127_127;
#line 110 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__V_133_133;
#line 110 "add_clause.m"
              MR_String hlds__make_hlds__add_clause__V_134_134;
#line 110 "add_clause.m"
              MR_String hlds__make_hlds__add_clause__V_136_136;
#line 110 "add_clause.m"
              MR_String hlds__make_hlds__add_clause__V_137_137;
#line 110 "add_clause.m"
              MR_String hlds__make_hlds__add_clause__V_144_144;
#line 110 "add_clause.m"
              MR_String hlds__make_hlds__add_clause__V_146_146;
#line 110 "add_clause.m"
              MR_String hlds__make_hlds__add_clause__V_147_147;
#line 110 "add_clause.m"
              MR_String hlds__make_hlds__add_clause__V_154_154;
#line 110 "add_clause.m"
              MR_String hlds__make_hlds__add_clause__V_156_156;
#line 110 "add_clause.m"
              MR_String hlds__make_hlds__add_clause__V_157_157;

#line 110 "add_clause.m"
              {
#line 110 "add_clause.m"
                hlds__make_hlds__add_clause__NameString_42 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__make_hlds__add_clause__PredName_18);
              }
#line 4295 "hlds.make_hlds.add_clause.c"
              hlds__make_hlds__add_clause__V_133_133 = (MR_Word) &hlds__make_hlds__add_clause_scalar_common_2[2];
#line 115 "add_clause.m"
              {
#line 115 "add_clause.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__make_hlds__add_clause__V_133_133, hlds__make_hlds__add_clause__NameString_42, &hlds__make_hlds__add_clause__V_127_127);
              }
#line 111 "add_clause.m"
              {
#line 111 "add_clause.m"
                hlds__make_hlds__add_clause__V_134_134 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_clause__V_127_127, (MR_String) ").\n");
              }
#line 111 "add_clause.m"
              {
#line 111 "add_clause.m"
                hlds__make_hlds__add_clause__V_136_136 = mercury__string__f_43_43_2_f_0((MR_String) " (", hlds__make_hlds__add_clause__V_134_134);
              }
#line 114 "add_clause.m"
              {
#line 114 "add_clause.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__make_hlds__add_clause__V_133_133, (MR_String) "name to an existing predicate", &hlds__make_hlds__add_clause__V_137_137);
              }
#line 111 "add_clause.m"
              {
#line 111 "add_clause.m"
                hlds__make_hlds__add_clause__V_144_144 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_clause__V_137_137, hlds__make_hlds__add_clause__V_136_136);
              }
#line 111 "add_clause.m"
              {
#line 111 "add_clause.m"
                hlds__make_hlds__add_clause__V_146_146 = mercury__string__f_43_43_2_f_0((MR_String) " ", hlds__make_hlds__add_clause__V_144_144);
              }
#line 113 "add_clause.m"
              {
#line 113 "add_clause.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__make_hlds__add_clause__V_133_133, (MR_String) "for a promise with an identical", &hlds__make_hlds__add_clause__V_147_147);
              }
#line 111 "add_clause.m"
              {
#line 111 "add_clause.m"
                hlds__make_hlds__add_clause__V_154_154 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_clause__V_147_147, hlds__make_hlds__add_clause__V_146_146);
              }
#line 111 "add_clause.m"
              {
#line 111 "add_clause.m"
                hlds__make_hlds__add_clause__V_156_156 = mercury__string__f_43_43_2_f_0((MR_String) " ", hlds__make_hlds__add_clause__V_154_154);
              }
#line 112 "add_clause.m"
              {
#line 112 "add_clause.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__make_hlds__add_clause__V_133_133, (MR_String) "Attempted to introduce a predicate", &hlds__make_hlds__add_clause__V_157_157);
              }
#line 111 "add_clause.m"
              {
#line 111 "add_clause.m"
                hlds__make_hlds__add_clause__UnexpectedMsg_43 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_clause__V_157_157, hlds__make_hlds__add_clause__V_156_156);
              }
#line 116 "add_clause.m"
              {
#line 116 "add_clause.m"
                mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_clause", (MR_String) "predicate \140hlds.make_hlds.add_clause.module_add_clause\'/15", hlds__make_hlds__add_clause__UnexpectedMsg_43);
#line 116 "add_clause.m"
                return;
              }
#line 110 "add_clause.m"
            }
#line 109 "add_clause.m"
          }
#line 109 "add_clause.m"
        else
#line 118 "add_clause.m"
          {
#line 118 "add_clause.m"
          }
#line 147 "add_clause.m"
        {
#line 147 "add_clause.m"
          hlds__make_hlds__add_clause__module_add_clause_2_19_p_0(hlds__make_hlds__add_clause__ClauseVarSet_16, hlds__make_hlds__add_clause__PredOrFunc_17, hlds__make_hlds__add_clause__PredName_18, hlds__make_hlds__add_clause__PredIdPrime_39, hlds__make_hlds__add_clause__Args_32, hlds__make_hlds__add_clause__Arity_35, hlds__make_hlds__add_clause__ArityAdjustment_30, hlds__make_hlds__add_clause__Body_20, hlds__make_hlds__add_clause__Status_21, hlds__make_hlds__add_clause__Context_22, hlds__make_hlds__add_clause__MaybeSeqNum_23, hlds__make_hlds__add_clause__GoalType_24, hlds__make_hlds__add_clause__IllegalSVarResult_29, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_51, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_52, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_53, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_54, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_55, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_56);
#line 147 "add_clause.m"
          return;
        }
#line 4376 "hlds.make_hlds.add_clause.c"
      }
#line 4378 "hlds.make_hlds.add_clause.c"
    else
#line 4380 "hlds.make_hlds.add_clause.c"
      {
#line 4382 "hlds.make_hlds.add_clause.c"
        MR_Word hlds__make_hlds__add_clause__MaybePredId_122;
#line 4384 "hlds.make_hlds.add_clause.c"
        MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_105_124;
#line 4386 "hlds.make_hlds.add_clause.c"
        MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_106_125;
#line 120 "add_clause.m"
        MR_String hlds__make_hlds__add_clause__V_74_74;

#line 120 "add_clause.m"
        {
#line 120 "add_clause.m"
          hlds__make_hlds__add_clause__V_74_74 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__make_hlds__add_clause__PredName_18);
        }
#line 120 "add_clause.m"
        hlds__make_hlds__add_clause__succeeded = (strcmp(hlds__make_hlds__add_clause__V_74_74, (MR_String) ",") == 0);
#line 120 "add_clause.m"
        if (hlds__make_hlds__add_clause__succeeded)
#line 120 "add_clause.m"
          hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__Arity_35 == (MR_Integer) 2);
#line 130 "add_clause.m"
        if (hlds__make_hlds__add_clause__succeeded)
#line 121 "add_clause.m"
          {
#line 121 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__Msg_45;
#line 121 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__Spec_46;
#line 121 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_103_103;

#line 121 "add_clause.m"
            hlds__make_hlds__add_clause__MaybePredId_122 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 127 "add_clause.m"
            {
#line 127 "add_clause.m"
              hlds__make_hlds__add_clause__Msg_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 127 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Msg_45, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Context_22));
#line 127 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Msg_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[50])));
#line 127 "add_clause.m"
            }
#line 128 "add_clause.m"
            {
#line 128 "add_clause.m"
              hlds__make_hlds__add_clause__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 128 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_103_103, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Msg_45));
#line 128 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_103_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 128 "add_clause.m"
            }
#line 128 "add_clause.m"
            {
#line 128 "add_clause.m"
              hlds__make_hlds__add_clause__Spec_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 128 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 128 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 128 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_46, 2) = ((MR_Box) (hlds__make_hlds__add_clause__V_103_103));
#line 128 "add_clause.m"
            }
#line 129 "add_clause.m"
            {
#line 129 "add_clause.m"
              hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_105_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 129 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_105_124, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Spec_46));
#line 129 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_105_124, 1) = ((MR_Box) (hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_55));
#line 129 "add_clause.m"
            }
#line 129 "add_clause.m"
            hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_106_125 = hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_51;
#line 121 "add_clause.m"
          }
#line 130 "add_clause.m"
        else
#line 142 "add_clause.m"
          {
#line 142 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__NewPredId_49;
#line 132 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_47_47;

#line 132 "add_clause.m"
            hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__GoalType_24)) == (MR_mktag((MR_Integer) 1)));
#line 132 "add_clause.m"
            if (hlds__make_hlds__add_clause__succeeded)
#line 132 "add_clause.m"
              {
#line 132 "add_clause.m"
                hlds__make_hlds__add_clause__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__GoalType_24, (MR_Integer) 0)));
#line 133 "add_clause.m"
                {
#line 133 "add_clause.m"
                  MR_Word hlds__make_hlds__add_clause__HeadVars_48;

#line 133 "add_clause.m"
                  {
#line 133 "add_clause.m"
                    hlds__make_hlds__add_clause__HeadVars_48 = mercury__term__term_list_to_var_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__add_clause__Args_32);
                  }
#line 134 "add_clause.m"
                  {
#line 134 "add_clause.m"
                    hlds__make_hlds__add_pred__preds_add_implicit_for_assertion_10_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_51, &hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_106_125, hlds__make_hlds__add_clause__ModuleName_33, hlds__make_hlds__add_clause__PredName_18, hlds__make_hlds__add_clause__Arity_35, hlds__make_hlds__add_clause__PredOrFunc_17, hlds__make_hlds__add_clause__HeadVars_48, hlds__make_hlds__add_clause__Status_21, hlds__make_hlds__add_clause__Context_22, &hlds__make_hlds__add_clause__NewPredId_49);
                  }
#line 134 "add_clause.m"
                  hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_105_124 = hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_55;
#line 133 "add_clause.m"
                }
#line 132 "add_clause.m"
              }
#line 132 "add_clause.m"
            else
#line 138 "add_clause.m"
              {
#line 138 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__V_109_109;

#line 140 "add_clause.m"
                {
#line 140 "add_clause.m"
                  hlds__make_hlds__add_clause__V_109_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 140 "add_clause.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_109_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 140 "add_clause.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_109_109, 1) = ((MR_Box) (hlds__make_hlds__add_clause__PredName_18));
#line 140 "add_clause.m"
                }
#line 138 "add_clause.m"
                {
#line 138 "add_clause.m"
                  hlds__make_hlds__add_pred__preds_add_implicit_report_error_14_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_51, &hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_106_125, hlds__make_hlds__add_clause__ModuleName_33, hlds__make_hlds__add_clause__PredName_18, hlds__make_hlds__add_clause__Arity_35, hlds__make_hlds__add_clause__PredOrFunc_17, hlds__make_hlds__add_clause__Status_21, (MR_Integer) 0, hlds__make_hlds__add_clause__Context_22, hlds__make_hlds__add_clause__V_109_109, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[52]), &hlds__make_hlds__add_clause__NewPredId_49, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_55, &hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_105_124);
                }
#line 138 "add_clause.m"
              }
#line 143 "add_clause.m"
            {
#line 143 "add_clause.m"
              hlds__make_hlds__add_clause__MaybePredId_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 143 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__MaybePredId_122, 0) = ((MR_Box) (hlds__make_hlds__add_clause__NewPredId_49));
#line 143 "add_clause.m"
            }
#line 142 "add_clause.m"
          }
#line 151 "add_clause.m"
        if ((hlds__make_hlds__add_clause__MaybePredId_122 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 152 "add_clause.m"
          {
#line 152 "add_clause.m"
            *hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_52 = hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_106_125;
#line 152 "add_clause.m"
            *hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_54 = hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_53;
#line 152 "add_clause.m"
            *hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_56 = hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_105_124;
#line 152 "add_clause.m"
          }
#line 151 "add_clause.m"
        else
#line 146 "add_clause.m"
          {
#line 146 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__PredId_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__MaybePredId_122, (MR_Integer) 0)));

#line 147 "add_clause.m"
            {
#line 147 "add_clause.m"
              hlds__make_hlds__add_clause__module_add_clause_2_19_p_0(hlds__make_hlds__add_clause__ClauseVarSet_16, hlds__make_hlds__add_clause__PredOrFunc_17, hlds__make_hlds__add_clause__PredName_18, hlds__make_hlds__add_clause__PredId_120, hlds__make_hlds__add_clause__Args_32, hlds__make_hlds__add_clause__Arity_35, hlds__make_hlds__add_clause__ArityAdjustment_30, hlds__make_hlds__add_clause__Body_20, hlds__make_hlds__add_clause__Status_21, hlds__make_hlds__add_clause__Context_22, hlds__make_hlds__add_clause__MaybeSeqNum_23, hlds__make_hlds__add_clause__GoalType_24, hlds__make_hlds__add_clause__IllegalSVarResult_29, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_106_125, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_52, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_53, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_54, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_105_124, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_56);
#line 147 "add_clause.m"
              return;
            }
#line 146 "add_clause.m"
          }
#line 4561 "hlds.make_hlds.add_clause.c"
      }
#line 88 "add_clause.m"
  }
#line 25 "add_clause.m"
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
