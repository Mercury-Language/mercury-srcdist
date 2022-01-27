/*
** Automatically generated from `add_clause.m'
** by the Mercury compiler,
** version rotd-2015-07-01
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
#include "integer.mih"
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

#line 555 "add_clause.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__555__1_1_f_0(
#line 555 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__HeadVar__1_97,
#line 555 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__HeadVar__2_98);

#line 454 "add_clause.m"
static void MR_CALL 
hlds__make_hlds__add_clause____Compare____mode_annotations_0_0(
#line 454 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__HeadVar__1_1,
#line 454 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__HeadVar__2_2,
#line 454 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__HeadVar__3_3);

#line 454 "add_clause.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_clause____Unify____mode_annotations_0_0(
#line 454 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__HeadVar__1_1,
#line 454 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__HeadVar__2_2);

#line 600 "add_clause.m"
static void MR_CALL 
hlds__make_hlds__add_clause__add_clause_transform_20_p_0(
#line 600 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Renaming_21,
#line 600 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__HeadVars_22,
#line 600 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Args0_23,
#line 600 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__ParseTreeBodyGoal_24,
#line 600 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Context_25,
#line 600 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredOrFunc_26,
#line 600 "add_clause.m"
  MR_Integer hlds__make_hlds__add_clause__Arity_27,
#line 600 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__GoalType_28,
#line 600 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__Goal_29,
#line 600 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_0_59,
#line 600 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_60,
#line 600 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__QuantWarnings_31,
#line 600 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__StateVarWarnings_32,
#line 600 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__StateVarErrors_33,
#line 600 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_61,
#line 600 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_62,
#line 600 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_63,
#line 600 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_64,
#line 600 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_65,
#line 600 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_66);

#line 468 "add_clause.m"
static void MR_CALL 
hlds__make_hlds__add_clause__get_mode_annotations_4_p_0(
#line 468 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__HeadVar__1_1,
#line 468 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__HeadVar__2_2,
#line 468 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_0_3,
#line 468 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_4);

#line 444 "add_clause.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_clause__mode_decl_for_pred_info_to_pieces_2_f_0(
#line 444 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredInfo_4,
#line 444 "add_clause.m"
  MR_Integer hlds__make_hlds__add_clause__ProcId_5);

#line 433 "add_clause.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_clause__undeclared_mode_error_8_p_0_1(
#line 433 "add_clause.m"
  MR_Box hlds__make_hlds__add_clause__closure_arg,
#line 433 "add_clause.m"
  MR_Box hlds__make_hlds__add_clause__wrapper_arg_1);

#line 394 "add_clause.m"
static void MR_CALL 
hlds__make_hlds__add_clause__undeclared_mode_error_8_p_0(
#line 394 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__ModeList_9,
#line 394 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__VarSet_10,
#line 394 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredId_11,
#line 394 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredInfo_12,
#line 394 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__ModuleInfo_13,
#line 394 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Context_14,
#line 394 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_31,
#line 394 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_32);

#line 326 "add_clause.m"
static void MR_CALL 
hlds__make_hlds__add_clause__select_applicable_modes_15_p_0(
#line 326 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Args0_16,
#line 326 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__VarSet_17,
#line 326 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Status_18,
#line 326 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Context_19,
#line 326 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredId_20,
#line 326 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredInfo_21,
#line 326 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__Args_22,
#line 326 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__ApplProcIds_23,
#line 326 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__AllProcIds_24,
#line 326 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_40,
#line 326 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_41,
#line 326 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_42,
#line 326 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_43,
#line 326 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_44,
#line 326 "add_clause.m"
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

#line 555 "add_clause.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_clause__clauses_info_add_clause_24_p_0_1(
#line 555 "add_clause.m"
  MR_Box hlds__make_hlds__add_clause__closure_arg,
#line 555 "add_clause.m"
  MR_Box hlds__make_hlds__add_clause__wrapper_arg_1,
#line 555 "add_clause.m"
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
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In clause for"))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "error: mode annotation specifies undeclared mode"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "(There are no declared modes for this"))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "The declared mode for this"))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "The declared modes for this"))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":- mode"))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
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



#line 859 "hlds.make_hlds.add_clause.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_clause__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 867 "hlds.make_hlds.add_clause.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_clause__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0
  }
};

#line 875 "hlds.make_hlds.add_clause.c"
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

#line 890 "hlds.make_hlds.add_clause.c"
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

#line 905 "hlds.make_hlds.add_clause.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_clause__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0
  }
};

#line 913 "hlds.make_hlds.add_clause.c"
static const MR_PseudoTypeInfo hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__field_types_mode_annotations_0_2[1] = {
  (MR_PseudoTypeInfo) &hlds__make_hlds__add_clause__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0
};

#line 918 "hlds.make_hlds.add_clause.c"
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

#line 933 "hlds.make_hlds.add_clause.c"
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

#line 948 "hlds.make_hlds.add_clause.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_stag_ordered_mode_annotations_0_0[3] = {
  &hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_0,
  &hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_1,
  &hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_3
};

#line 955 "hlds.make_hlds.add_clause.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_stag_ordered_mode_annotations_0_1[1] = {
  &hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_2
};

#line 960 "hlds.make_hlds.add_clause.c"
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

#line 974 "hlds.make_hlds.add_clause.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_name_ordered_mode_annotations_0[4] = {
  &hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_0,
  &hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_3,
  &hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_2,
  &hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_1
};

#line 982 "hlds.make_hlds.add_clause.c"
static const MR_Integer hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__functor_number_map_mode_annotations_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 990 "hlds.make_hlds.add_clause.c"
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

#line 1007 "hlds.make_hlds.add_clause.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_clause____Unify____mode_annotations_0_0_10001(
#line 1010 "hlds.make_hlds.add_clause.c"
  MR_Box hlds__make_hlds__add_clause__wrapper_arg_1,
#line 1012 "hlds.make_hlds.add_clause.c"
  MR_Box hlds__make_hlds__add_clause__wrapper_arg_2)
#line 1014 "hlds.make_hlds.add_clause.c"
{
#line 1016 "hlds.make_hlds.add_clause.c"
  {
#line 1018 "hlds.make_hlds.add_clause.c"
    MR_bool hlds__make_hlds__add_clause__succeeded;

#line 1021 "hlds.make_hlds.add_clause.c"
    {
#line 1023 "hlds.make_hlds.add_clause.c"
      hlds__make_hlds__add_clause__succeeded = hlds__make_hlds__add_clause____Unify____mode_annotations_0_0(((MR_Word) hlds__make_hlds__add_clause__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_clause__wrapper_arg_2));
    }
#line 1026 "hlds.make_hlds.add_clause.c"
    return hlds__make_hlds__add_clause__succeeded;
#line 1028 "hlds.make_hlds.add_clause.c"
  }
#line 1030 "hlds.make_hlds.add_clause.c"
}

#line 1033 "hlds.make_hlds.add_clause.c"
static void MR_CALL 
hlds__make_hlds__add_clause____Compare____mode_annotations_0_0_10001(
#line 1036 "hlds.make_hlds.add_clause.c"
  MR_Box * hlds__make_hlds__add_clause__wrapper_arg_1,
#line 1038 "hlds.make_hlds.add_clause.c"
  MR_Box hlds__make_hlds__add_clause__wrapper_arg_2,
#line 1040 "hlds.make_hlds.add_clause.c"
  MR_Box hlds__make_hlds__add_clause__wrapper_arg_3)
#line 1042 "hlds.make_hlds.add_clause.c"
{
#line 1044 "hlds.make_hlds.add_clause.c"
  {
#line 1046 "hlds.make_hlds.add_clause.c"
    MR_Word hlds__make_hlds__add_clause__conv0_HeadVar__1_1;

#line 1049 "hlds.make_hlds.add_clause.c"
    {
#line 1051 "hlds.make_hlds.add_clause.c"
      hlds__make_hlds__add_clause____Compare____mode_annotations_0_0(&hlds__make_hlds__add_clause__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__add_clause__wrapper_arg_2), ((MR_Word) hlds__make_hlds__add_clause__wrapper_arg_3));
    }
#line 1054 "hlds.make_hlds.add_clause.c"
    *hlds__make_hlds__add_clause__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__add_clause__conv0_HeadVar__1_1));
#line 1056 "hlds.make_hlds.add_clause.c"
  }
#line 1058 "hlds.make_hlds.add_clause.c"
}

#line 555 "add_clause.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__555__1_1_f_0(
#line 555 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__HeadVar__1_97,
#line 555 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__HeadVar__2_98)
#line 555 "add_clause.m"
{
#line 555 "add_clause.m"
  {
#line 555 "add_clause.m"
    MR_bool hlds__make_hlds__add_clause__succeeded;
#line 555 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__ApplProcIds_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__HeadVar__1_97, (MR_Integer) 0)));
#line 555 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__HeadVar__1_97, (MR_Integer) 2)));
#line 557 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__HeadVar__1_97, (MR_Integer) 1)));
#line 557 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__HeadVar__1_97, (MR_Integer) 3)));
#line 557 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__HeadVar__1_97, (MR_Integer) 4)));
#line 557 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_68_68;

#line 557 "add_clause.m"
    hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__V_99_99)) == (MR_mktag((MR_Integer) 1)));
#line 557 "add_clause.m"
    if (hlds__make_hlds__add_clause__succeeded)
#line 557 "add_clause.m"
      {
#line 557 "add_clause.m"
        hlds__make_hlds__add_clause__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_99_99, (MR_Integer) 0)));
#line 562 "add_clause.m"
        if ((hlds__make_hlds__add_clause__ApplProcIds_69 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 560 "add_clause.m"
          {
#line 561 "add_clause.m"
            {
#line 561 "add_clause.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_clause", (MR_String) "predicate \140hlds.make_hlds.add_clause.clauses_info_add_clause\'/24", (MR_String) "all_modes foreign_proc");
            }
#line 560 "add_clause.m"
          }
#line 562 "add_clause.m"
        else
#line 563 "add_clause.m"
          *hlds__make_hlds__add_clause__HeadVar__2_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__ApplProcIds_69, (MR_Integer) 0)));
#line 562 "add_clause.m"
        hlds__make_hlds__add_clause__succeeded = MR_TRUE;
#line 557 "add_clause.m"
      }
#line 555 "add_clause.m"
    return hlds__make_hlds__add_clause__succeeded;
#line 555 "add_clause.m"
  }
#line 555 "add_clause.m"
}

#line 454 "add_clause.m"
static void MR_CALL 
hlds__make_hlds__add_clause____Compare____mode_annotations_0_0(
#line 454 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__HeadVar__1_1,
#line 454 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__HeadVar__2_2,
#line 454 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__HeadVar__3_3)
#line 454 "add_clause.m"
{
#line 454 "add_clause.m"
  {
#line 454 "add_clause.m"
    MR_bool hlds__make_hlds__add_clause__succeeded;
#line 454 "add_clause.m"
    MR_Integer hlds__make_hlds__add_clause__CastX_12 = (MR_Integer) hlds__make_hlds__add_clause__HeadVar__2_2;
#line 454 "add_clause.m"
    MR_Integer hlds__make_hlds__add_clause__CastY_13 = (MR_Integer) hlds__make_hlds__add_clause__HeadVar__3_3;

#line 454 "add_clause.m"
    hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__CastX_12 == hlds__make_hlds__add_clause__CastY_13);
#line 454 "add_clause.m"
    if (hlds__make_hlds__add_clause__succeeded)
#line 1145 "hlds.make_hlds.add_clause.c"
      *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 0;
#line 454 "add_clause.m"
    else
#line 454 "add_clause.m"
#line 454 "add_clause.m"
      switch (MR_tag((MR_Word) hlds__make_hlds__add_clause__HeadVar__2_2)) {
#line 454 "add_clause.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 454 "add_clause.m"
        case (MR_Integer) 0:
#line 454 "add_clause.m"
#line 454 "add_clause.m"
          switch (MR_unmkbody(hlds__make_hlds__add_clause__HeadVar__2_2)) {
#line 454 "add_clause.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 454 "add_clause.m"
            case (MR_Integer) 0:
#line 454 "add_clause.m"
#line 454 "add_clause.m"
              switch (MR_tag((MR_Word) hlds__make_hlds__add_clause__HeadVar__3_3)) {
#line 454 "add_clause.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 454 "add_clause.m"
                case (MR_Integer) 0:
#line 454 "add_clause.m"
#line 454 "add_clause.m"
                  switch (MR_unmkbody(hlds__make_hlds__add_clause__HeadVar__3_3)) {
#line 454 "add_clause.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 454 "add_clause.m"
                    case (MR_Integer) 0:
#line 454 "add_clause.m"
                      *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 0;
#line 454 "add_clause.m"
                      break;
#line 454 "add_clause.m"
                    case (MR_Integer) 1:
#line 454 "add_clause.m"
                      *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 1;
#line 454 "add_clause.m"
                      break;
#line 454 "add_clause.m"
                    case (MR_Integer) 2:
#line 454 "add_clause.m"
                      *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 1;
#line 454 "add_clause.m"
                      break;
#line 454 "add_clause.m"
                  }
#line 454 "add_clause.m"
                  break;
#line 454 "add_clause.m"
                case (MR_Integer) 1:
#line 1199 "hlds.make_hlds.add_clause.c"
                  *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 1;
#line 454 "add_clause.m"
                  break;
#line 454 "add_clause.m"
              }
#line 454 "add_clause.m"
              break;
#line 454 "add_clause.m"
            case (MR_Integer) 1:
#line 454 "add_clause.m"
#line 454 "add_clause.m"
              switch (MR_tag((MR_Word) hlds__make_hlds__add_clause__HeadVar__3_3)) {
#line 454 "add_clause.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 454 "add_clause.m"
                case (MR_Integer) 0:
#line 454 "add_clause.m"
#line 454 "add_clause.m"
                  switch (MR_unmkbody(hlds__make_hlds__add_clause__HeadVar__3_3)) {
#line 454 "add_clause.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 454 "add_clause.m"
                    case (MR_Integer) 0:
#line 454 "add_clause.m"
                      *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 2;
#line 454 "add_clause.m"
                      break;
#line 454 "add_clause.m"
                    case (MR_Integer) 1:
#line 454 "add_clause.m"
                      *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 0;
#line 454 "add_clause.m"
                      break;
#line 454 "add_clause.m"
                    case (MR_Integer) 2:
#line 454 "add_clause.m"
                      *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 1;
#line 454 "add_clause.m"
                      break;
#line 454 "add_clause.m"
                  }
#line 454 "add_clause.m"
                  break;
#line 454 "add_clause.m"
                case (MR_Integer) 1:
#line 1245 "hlds.make_hlds.add_clause.c"
                  *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 1;
#line 454 "add_clause.m"
                  break;
#line 454 "add_clause.m"
              }
#line 454 "add_clause.m"
              break;
#line 454 "add_clause.m"
            case (MR_Integer) 2:
#line 454 "add_clause.m"
#line 454 "add_clause.m"
              switch (MR_tag((MR_Word) hlds__make_hlds__add_clause__HeadVar__3_3)) {
#line 454 "add_clause.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 454 "add_clause.m"
                case (MR_Integer) 0:
#line 454 "add_clause.m"
#line 454 "add_clause.m"
                  switch (MR_unmkbody(hlds__make_hlds__add_clause__HeadVar__3_3)) {
#line 454 "add_clause.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 454 "add_clause.m"
                    case (MR_Integer) 0:
#line 454 "add_clause.m"
                      *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 2;
#line 454 "add_clause.m"
                      break;
#line 454 "add_clause.m"
                    case (MR_Integer) 1:
#line 454 "add_clause.m"
                      *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 2;
#line 454 "add_clause.m"
                      break;
#line 454 "add_clause.m"
                    case (MR_Integer) 2:
#line 454 "add_clause.m"
                      *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 0;
#line 454 "add_clause.m"
                      break;
#line 454 "add_clause.m"
                  }
#line 454 "add_clause.m"
                  break;
#line 454 "add_clause.m"
                case (MR_Integer) 1:
#line 1291 "hlds.make_hlds.add_clause.c"
                  *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 2;
#line 454 "add_clause.m"
                  break;
#line 454 "add_clause.m"
              }
#line 454 "add_clause.m"
              break;
#line 454 "add_clause.m"
          }
#line 454 "add_clause.m"
          break;
#line 454 "add_clause.m"
        case (MR_Integer) 1:
#line 454 "add_clause.m"
          {
#line 454 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__HeadVar__2_2, (MR_Integer) 0)));

#line 454 "add_clause.m"
#line 454 "add_clause.m"
            switch (MR_tag((MR_Word) hlds__make_hlds__add_clause__HeadVar__3_3)) {
#line 454 "add_clause.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 454 "add_clause.m"
              case (MR_Integer) 0:
#line 454 "add_clause.m"
#line 454 "add_clause.m"
                switch (MR_unmkbody(hlds__make_hlds__add_clause__HeadVar__3_3)) {
#line 454 "add_clause.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 454 "add_clause.m"
                  case (MR_Integer) 0:
#line 1324 "hlds.make_hlds.add_clause.c"
                    *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 2;
#line 454 "add_clause.m"
                    break;
#line 454 "add_clause.m"
                  case (MR_Integer) 1:
#line 1330 "hlds.make_hlds.add_clause.c"
                    *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 2;
#line 454 "add_clause.m"
                    break;
#line 454 "add_clause.m"
                  case (MR_Integer) 2:
#line 1336 "hlds.make_hlds.add_clause.c"
                    *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 1;
#line 454 "add_clause.m"
                    break;
#line 454 "add_clause.m"
                }
#line 454 "add_clause.m"
                break;
#line 454 "add_clause.m"
              case (MR_Integer) 1:
#line 454 "add_clause.m"
                {
#line 454 "add_clause.m"
                  MR_Word hlds__make_hlds__add_clause__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__HeadVar__3_3, (MR_Integer) 0)));

#line 454 "add_clause.m"
                  {
#line 454 "add_clause.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__add_clause_scalar_common_1[4], hlds__make_hlds__add_clause__HeadVar__1_1, ((MR_Box) (hlds__make_hlds__add_clause__V_15_15)), ((MR_Box) (hlds__make_hlds__add_clause__V_9_9)));
#line 454 "add_clause.m"
                    return;
                  }
#line 454 "add_clause.m"
                }
#line 454 "add_clause.m"
                break;
#line 454 "add_clause.m"
            }
#line 454 "add_clause.m"
          }
#line 454 "add_clause.m"
          break;
#line 454 "add_clause.m"
      }
#line 454 "add_clause.m"
  }
#line 454 "add_clause.m"
}

#line 454 "add_clause.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_clause____Unify____mode_annotations_0_0(
#line 454 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__HeadVar__1_1,
#line 454 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__HeadVar__2_2)
#line 454 "add_clause.m"
{
#line 454 "add_clause.m"
  {
#line 454 "add_clause.m"
    MR_bool hlds__make_hlds__add_clause__succeeded;
#line 454 "add_clause.m"
    MR_Integer hlds__make_hlds__add_clause__CastX_11 = (MR_Integer) hlds__make_hlds__add_clause__HeadVar__1_1;
#line 454 "add_clause.m"
    MR_Integer hlds__make_hlds__add_clause__CastY_12 = (MR_Integer) hlds__make_hlds__add_clause__HeadVar__2_2;

#line 454 "add_clause.m"
    hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__CastX_11 == hlds__make_hlds__add_clause__CastY_12);
#line 454 "add_clause.m"
    if (hlds__make_hlds__add_clause__succeeded)
#line 454 "add_clause.m"
      hlds__make_hlds__add_clause__succeeded = MR_TRUE;
#line 454 "add_clause.m"
    else
#line 454 "add_clause.m"
#line 454 "add_clause.m"
      switch (MR_tag((MR_Word) hlds__make_hlds__add_clause__HeadVar__1_1)) {
#line 454 "add_clause.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 454 "add_clause.m"
        case (MR_Integer) 0:
#line 454 "add_clause.m"
#line 454 "add_clause.m"
          switch (MR_unmkbody(hlds__make_hlds__add_clause__HeadVar__1_1)) {
#line 454 "add_clause.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 454 "add_clause.m"
            case (MR_Integer) 0:
#line 454 "add_clause.m"
              {
#line 454 "add_clause.m"
                MR_Integer hlds__make_hlds__add_clause__CastX_3 = (MR_Integer) hlds__make_hlds__add_clause__HeadVar__1_1;
#line 454 "add_clause.m"
                MR_Integer hlds__make_hlds__add_clause__CastY_4 = (MR_Integer) hlds__make_hlds__add_clause__HeadVar__2_2;

#line 454 "add_clause.m"
                hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__CastY_4 == hlds__make_hlds__add_clause__CastX_3);
#line 454 "add_clause.m"
              }
#line 454 "add_clause.m"
              break;
#line 454 "add_clause.m"
            case (MR_Integer) 1:
#line 454 "add_clause.m"
              {
#line 454 "add_clause.m"
                MR_Integer hlds__make_hlds__add_clause__CastX_5 = (MR_Integer) hlds__make_hlds__add_clause__HeadVar__1_1;
#line 454 "add_clause.m"
                MR_Integer hlds__make_hlds__add_clause__CastY_6 = (MR_Integer) hlds__make_hlds__add_clause__HeadVar__2_2;

#line 454 "add_clause.m"
                hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__CastY_6 == hlds__make_hlds__add_clause__CastX_5);
#line 454 "add_clause.m"
              }
#line 454 "add_clause.m"
              break;
#line 454 "add_clause.m"
            case (MR_Integer) 2:
#line 454 "add_clause.m"
              {
#line 454 "add_clause.m"
                MR_Integer hlds__make_hlds__add_clause__CastX_9 = (MR_Integer) hlds__make_hlds__add_clause__HeadVar__1_1;
#line 454 "add_clause.m"
                MR_Integer hlds__make_hlds__add_clause__CastY_10 = (MR_Integer) hlds__make_hlds__add_clause__HeadVar__2_2;

#line 454 "add_clause.m"
                hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__CastY_10 == hlds__make_hlds__add_clause__CastX_9);
#line 454 "add_clause.m"
              }
#line 454 "add_clause.m"
              break;
#line 454 "add_clause.m"
          }
#line 454 "add_clause.m"
          break;
#line 454 "add_clause.m"
        case (MR_Integer) 1:
#line 454 "add_clause.m"
          {
#line 454 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__TypeInfo_13_13;
#line 454 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__HeadVar__1_1, (MR_Integer) 0)));
#line 454 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_8_8;

#line 454 "add_clause.m"
            hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 454 "add_clause.m"
            if (hlds__make_hlds__add_clause__succeeded)
#line 454 "add_clause.m"
              {
#line 454 "add_clause.m"
                hlds__make_hlds__add_clause__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__HeadVar__2_2, (MR_Integer) 0)));
#line 1481 "hlds.make_hlds.add_clause.c"
                hlds__make_hlds__add_clause__TypeInfo_13_13 = (MR_Word) &hlds__make_hlds__add_clause_scalar_common_1[4];
#line 1483 "hlds.make_hlds.add_clause.c"
                {
#line 1485 "hlds.make_hlds.add_clause.c"
                  return hlds__make_hlds__add_clause__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__add_clause__TypeInfo_13_13, ((MR_Box) (hlds__make_hlds__add_clause__V_7_7)), ((MR_Box) (hlds__make_hlds__add_clause__V_8_8)));
                }
#line 454 "add_clause.m"
              }
#line 454 "add_clause.m"
          }
#line 454 "add_clause.m"
          break;
#line 454 "add_clause.m"
      }
#line 454 "add_clause.m"
    return hlds__make_hlds__add_clause__succeeded;
#line 454 "add_clause.m"
  }
#line 454 "add_clause.m"
}

#line 600 "add_clause.m"
static void MR_CALL 
hlds__make_hlds__add_clause__add_clause_transform_20_p_0(
#line 600 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Renaming_21,
#line 600 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__HeadVars_22,
#line 600 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Args0_23,
#line 600 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__ParseTreeBodyGoal_24,
#line 600 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Context_25,
#line 600 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredOrFunc_26,
#line 600 "add_clause.m"
  MR_Integer hlds__make_hlds__add_clause__Arity_27,
#line 600 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__GoalType_28,
#line 600 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__Goal_29,
#line 600 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_0_59,
#line 600 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_60,
#line 600 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__QuantWarnings_31,
#line 600 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__StateVarWarnings_32,
#line 600 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__StateVarErrors_33,
#line 600 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_61,
#line 600 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_62,
#line 600 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_63,
#line 600 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_64,
#line 600 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_65,
#line 600 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_66)
#line 600 "add_clause.m"
{
#line 613 "add_clause.m"
  {
#line 613 "add_clause.m"
    MR_bool hlds__make_hlds__add_clause__succeeded;
#line 613 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__HeadVarList_40;
#line 613 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__Args1_41;
#line 613 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__Args_42;
#line 613 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__FinalSVarMap_43;
#line 613 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__InitialSVarState_44;
#line 613 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__HeadGoal_46;
#line 613 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__BodyGoal_50;
#line 613 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__FinalSVarState_53;
#line 613 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__Goal0_54;
#line 613 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__VarTypes0_55;
#line 613 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__EmptyRttiVarmaps_56;
#line 613 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__VarTypes_57;
#line 613 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_68_68;
#line 613 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_SVarStore_70_70;
#line 613 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_71_71;
#line 613 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_SVarState_72_72;
#line 613 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_SVarStore_73_73;
#line 613 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_74_74;
#line 613 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_75_75;
#line 613 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_76_76;
#line 613 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_77_77;
#line 613 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_SVarStore_84_84;
#line 613 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_85_85;
#line 613 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_87_87;
#line 613 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_126_126;
#line 613 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_127_127;
#line 618 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_45_45;
#line 684 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_58_58;

#line 613 "add_clause.m"
    {
#line 613 "add_clause.m"
      hlds__make_hlds__add_clause__HeadVarList_40 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) &hlds__make_hlds__add_clause_scalar_common_1[3], hlds__make_hlds__add_clause__HeadVars_22);
    }
#line 614 "add_clause.m"
    {
#line 614 "add_clause.m"
      parse_tree__prog_data__rename_vars_in_term_list_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__add_clause__Renaming_21, hlds__make_hlds__add_clause__Args0_23, &hlds__make_hlds__add_clause__Args1_41);
    }
#line 615 "add_clause.m"
    {
#line 615 "add_clause.m"
      hlds__make_hlds__state_var__svar_prepare_for_clause_head_9_p_0(hlds__make_hlds__add_clause__Args1_41, &hlds__make_hlds__add_clause__Args_42, hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_0_59, &hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_68_68, &hlds__make_hlds__add_clause__FinalSVarMap_43, &hlds__make_hlds__add_clause__InitialSVarState_44, &hlds__make_hlds__add_clause__STATE_VARIABLE_SVarStore_70_70, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_65, &hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_71_71);
    }
#line 618 "add_clause.m"
    hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__GoalType_28)) == (MR_mktag((MR_Integer) 1)));
#line 618 "add_clause.m"
    if (hlds__make_hlds__add_clause__succeeded)
#line 618 "add_clause.m"
      {
#line 618 "add_clause.m"
        hlds__make_hlds__add_clause__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__GoalType_28, (MR_Integer) 0)));
#line 619 "add_clause.m"
        {
#line 619 "add_clause.m"
          hlds__make_hlds__add_clause__HeadGoal_46 = hlds__make_goal__true_goal_0_f_0();
        }
#line 619 "add_clause.m"
        hlds__make_hlds__add_clause__STATE_VARIABLE_SVarStore_73_73 = hlds__make_hlds__add_clause__STATE_VARIABLE_SVarStore_70_70;
#line 619 "add_clause.m"
        hlds__make_hlds__add_clause__STATE_VARIABLE_SVarState_72_72 = hlds__make_hlds__add_clause__InitialSVarState_44;
#line 619 "add_clause.m"
        hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_77_77 = hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_71_71;
#line 619 "add_clause.m"
        hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_76_76 = hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_63;
#line 619 "add_clause.m"
        hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_75_75 = hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_61;
#line 619 "add_clause.m"
        hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_74_74 = hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_68_68;
#line 618 "add_clause.m"
      }
#line 618 "add_clause.m"
    else
#line 621 "add_clause.m"
      {
#line 621 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__ArgContext_47;
#line 621 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__HeadGoal0_48;
#line 621 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__HeadGoal1_49;

#line 621 "add_clause.m"
        {
#line 621 "add_clause.m"
          hlds__make_hlds__add_clause__ArgContext_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 621 "add_clause.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__ArgContext_47, 0) = ((MR_Box) (hlds__make_hlds__add_clause__PredOrFunc_26));
#line 621 "add_clause.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__ArgContext_47, 1) = ((MR_Box) (hlds__make_hlds__add_clause__Arity_27));
#line 621 "add_clause.m"
        }
#line 622 "add_clause.m"
        {
#line 622 "add_clause.m"
          hlds__make_hlds__add_clause__HeadGoal0_48 = hlds__make_goal__true_goal_0_f_0();
        }
#line 623 "add_clause.m"
        {
#line 623 "add_clause.m"
          hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_p_0(hlds__make_hlds__add_clause__HeadVarList_40, hlds__make_hlds__add_clause__Args_42, hlds__make_hlds__add_clause__Context_25, hlds__make_hlds__add_clause__ArgContext_47, hlds__make_hlds__add_clause__HeadGoal0_48, &hlds__make_hlds__add_clause__HeadGoal1_49, hlds__make_hlds__add_clause__InitialSVarState_44, &hlds__make_hlds__add_clause__STATE_VARIABLE_SVarState_72_72, hlds__make_hlds__add_clause__STATE_VARIABLE_SVarStore_70_70, &hlds__make_hlds__add_clause__STATE_VARIABLE_SVarStore_73_73, hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_68_68, &hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_74_74, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_75_75, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_63, &hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_76_76, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_71_71, &hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_77_77);
        }
#line 638 "add_clause.m"
        {
#line 638 "add_clause.m"
          hlds__goal_util__attach_features_to_all_goals_4_p_1((MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[69]), (MR_Integer) 1, hlds__make_hlds__add_clause__HeadGoal1_49, &hlds__make_hlds__add_clause__HeadGoal_46);
        }
#line 621 "add_clause.m"
      }
#line 641 "add_clause.m"
    {
#line 641 "add_clause.m"
      hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0((MR_Integer) 0, hlds__make_hlds__add_clause__ParseTreeBodyGoal_24, hlds__make_hlds__add_clause__Renaming_21, &hlds__make_hlds__add_clause__BodyGoal_50, hlds__make_hlds__add_clause__STATE_VARIABLE_SVarState_72_72, &hlds__make_hlds__add_clause__FinalSVarState_53, hlds__make_hlds__add_clause__STATE_VARIABLE_SVarStore_73_73, &hlds__make_hlds__add_clause__STATE_VARIABLE_SVarStore_84_84, hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_74_74, &hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_85_85, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_75_75, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_62, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_76_76, &hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_87_87, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_77_77, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_66);
    }
#line 675 "add_clause.m"
    {
#line 675 "add_clause.m"
      hlds__make_hlds__add_clause__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 675 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_127_127, 0) = ((MR_Box) (hlds__make_hlds__add_clause__BodyGoal_50));
#line 675 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_127_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 675 "add_clause.m"
    }
#line 675 "add_clause.m"
    {
#line 675 "add_clause.m"
      hlds__make_hlds__add_clause__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 675 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_126_126, 0) = ((MR_Box) (hlds__make_hlds__add_clause__HeadGoal_46));
#line 675 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_126_126, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_127_127));
#line 675 "add_clause.m"
    }
#line 674 "add_clause.m"
    {
#line 674 "add_clause.m"
      hlds__make_hlds__state_var__svar_finish_clause_body_9_p_0(hlds__make_hlds__add_clause__Context_25, hlds__make_hlds__add_clause__FinalSVarMap_43, hlds__make_hlds__add_clause__V_126_126, &hlds__make_hlds__add_clause__Goal0_54, hlds__make_hlds__add_clause__InitialSVarState_44, hlds__make_hlds__add_clause__FinalSVarState_53, hlds__make_hlds__add_clause__STATE_VARIABLE_SVarStore_84_84, hlds__make_hlds__add_clause__StateVarWarnings_32, hlds__make_hlds__add_clause__StateVarErrors_33);
    }
#line 678 "add_clause.m"
    {
#line 678 "add_clause.m"
      hlds__make_hlds__qual_info__qual_info_get_var_types_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_87_87, &hlds__make_hlds__add_clause__VarTypes0_55);
    }
#line 681 "add_clause.m"
    {
#line 681 "add_clause.m"
      hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&hlds__make_hlds__add_clause__EmptyRttiVarmaps_56);
    }
#line 684 "add_clause.m"
    {
#line 684 "add_clause.m"
      hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 0, hlds__make_hlds__add_clause__HeadVarList_40, hlds__make_hlds__add_clause__QuantWarnings_31, hlds__make_hlds__add_clause__Goal0_54, hlds__make_hlds__add_clause__Goal_29, hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_85_85, hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_60, hlds__make_hlds__add_clause__VarTypes0_55, &hlds__make_hlds__add_clause__VarTypes_57, hlds__make_hlds__add_clause__EmptyRttiVarmaps_56, &hlds__make_hlds__add_clause__V_58_58);
    }
#line 688 "add_clause.m"
    {
#line 688 "add_clause.m"
      hlds__make_hlds__qual_info__qual_info_set_var_types_3_p_0(hlds__make_hlds__add_clause__VarTypes_57, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_87_87, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_64);
#line 688 "add_clause.m"
      return;
    }
#line 613 "add_clause.m"
  }
#line 600 "add_clause.m"
}

#line 468 "add_clause.m"
static void MR_CALL 
hlds__make_hlds__add_clause__get_mode_annotations_4_p_0(
#line 468 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__HeadVar__1_1,
#line 468 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__HeadVar__2_2,
#line 468 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_0_3,
#line 468 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_4)
#line 468 "add_clause.m"
{
#line 471 "add_clause.m"
  {
#line 471 "add_clause.m"
    MR_bool hlds__make_hlds__add_clause__succeeded;

#line 471 "add_clause.m"
    if ((hlds__make_hlds__add_clause__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 471 "add_clause.m"
      {
#line 471 "add_clause.m"
        *hlds__make_hlds__add_clause__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 471 "add_clause.m"
        *hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_4 = hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_0_3;
#line 471 "add_clause.m"
      }
#line 471 "add_clause.m"
    else
#line 472 "add_clause.m"
      {
#line 472 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__Arg0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__HeadVar__1_1, (MR_Integer) 0)));
#line 472 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__Args0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__HeadVar__1_1, (MR_Integer) 1)));
#line 472 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__Arg_10;
#line 472 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__Args_11;
#line 472 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__MaybeAnnotation_13;
#line 472 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_16_16;
#line 500 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__Arg1_21;
#line 500 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__Mode_24;
#line 495 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__TypeCtorInfo_18_32;
#line 495 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__TypeCtorInfo_19_33;
#line 495 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__ModeTerm_22;
#line 495 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_25_25;
#line 495 "add_clause.m"
        MR_String hlds__make_hlds__add_clause__V_26_26;
#line 495 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_27_27;
#line 495 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_28_28;
#line 495 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_29_29;
#line 495 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_30_30;
#line 495 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_31_31;
#line 495 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_23_23;

#line 495 "add_clause.m"
        hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__Arg0_8)) == (MR_mktag((MR_Integer) 0)));
#line 495 "add_clause.m"
        if (hlds__make_hlds__add_clause__succeeded)
#line 495 "add_clause.m"
          {
#line 495 "add_clause.m"
            hlds__make_hlds__add_clause__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Arg0_8, (MR_Integer) 0)));
#line 495 "add_clause.m"
            hlds__make_hlds__add_clause__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Arg0_8, (MR_Integer) 1)));
#line 495 "add_clause.m"
            hlds__make_hlds__add_clause__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Arg0_8, (MR_Integer) 2)));
#line 495 "add_clause.m"
            hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__V_25_25)) == (MR_mktag((MR_Integer) 0)));
#line 495 "add_clause.m"
            if (hlds__make_hlds__add_clause__succeeded)
#line 495 "add_clause.m"
              {
#line 495 "add_clause.m"
                hlds__make_hlds__add_clause__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__V_25_25, (MR_Integer) 0)));
#line 495 "add_clause.m"
                hlds__make_hlds__add_clause__succeeded = (strcmp(hlds__make_hlds__add_clause__V_26_26, (MR_String) "::") == 0);
#line 495 "add_clause.m"
                if (hlds__make_hlds__add_clause__succeeded)
#line 495 "add_clause.m"
                  {
#line 495 "add_clause.m"
                    hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__V_27_27)) == (MR_mktag((MR_Integer) 1)));
#line 495 "add_clause.m"
                    if (hlds__make_hlds__add_clause__succeeded)
#line 495 "add_clause.m"
                      {
#line 495 "add_clause.m"
                        hlds__make_hlds__add_clause__Arg1_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_27_27, (MR_Integer) 0)));
#line 495 "add_clause.m"
                        hlds__make_hlds__add_clause__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_27_27, (MR_Integer) 1)));
#line 495 "add_clause.m"
                        hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 495 "add_clause.m"
                        if (hlds__make_hlds__add_clause__succeeded)
#line 495 "add_clause.m"
                          {
#line 495 "add_clause.m"
                            hlds__make_hlds__add_clause__ModeTerm_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_28_28, (MR_Integer) 0)));
#line 495 "add_clause.m"
                            hlds__make_hlds__add_clause__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_28_28, (MR_Integer) 1)));
#line 495 "add_clause.m"
                            hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 495 "add_clause.m"
                            if (hlds__make_hlds__add_clause__succeeded)
#line 495 "add_clause.m"
                              {
#line 496 "add_clause.m"
                                hlds__make_hlds__add_clause__V_30_30 = (MR_Integer) 0;
#line 1871 "hlds.make_hlds.add_clause.c"
                                hlds__make_hlds__add_clause__TypeCtorInfo_18_32 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1873 "hlds.make_hlds.add_clause.c"
                                hlds__make_hlds__add_clause__TypeCtorInfo_19_33 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 496 "add_clause.m"
                                {
#line 496 "add_clause.m"
                                  hlds__make_hlds__add_clause__V_31_31 = mercury__term__coerce_1_f_0(hlds__make_hlds__add_clause__TypeCtorInfo_18_32, hlds__make_hlds__add_clause__TypeCtorInfo_19_33, hlds__make_hlds__add_clause__ModeTerm_22);
                                }
#line 496 "add_clause.m"
                                {
#line 496 "add_clause.m"
                                  hlds__make_hlds__add_clause__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(hlds__make_hlds__add_clause__V_30_30, hlds__make_hlds__add_clause__V_31_31, &hlds__make_hlds__add_clause__Mode_24);
                                }
#line 495 "add_clause.m"
                              }
#line 495 "add_clause.m"
                          }
#line 495 "add_clause.m"
                      }
#line 495 "add_clause.m"
                  }
#line 495 "add_clause.m"
              }
#line 495 "add_clause.m"
          }
#line 500 "add_clause.m"
        if (hlds__make_hlds__add_clause__succeeded)
#line 498 "add_clause.m"
          {
#line 498 "add_clause.m"
            hlds__make_hlds__add_clause__Arg_10 = hlds__make_hlds__add_clause__Arg1_21;
#line 499 "add_clause.m"
            {
#line 499 "add_clause.m"
              hlds__make_hlds__add_clause__MaybeAnnotation_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 499 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__MaybeAnnotation_13, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Mode_24));
#line 499 "add_clause.m"
            }
#line 498 "add_clause.m"
          }
#line 500 "add_clause.m"
        else
#line 501 "add_clause.m"
          {
#line 501 "add_clause.m"
            hlds__make_hlds__add_clause__Arg_10 = hlds__make_hlds__add_clause__Arg0_8;
#line 502 "add_clause.m"
            hlds__make_hlds__add_clause__MaybeAnnotation_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 501 "add_clause.m"
          }
#line 480 "add_clause.m"
#line 480 "add_clause.m"
        switch (MR_tag((MR_Word) hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_0_3)) {
#line 480 "add_clause.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 480 "add_clause.m"
          case (MR_Integer) 0:
#line 480 "add_clause.m"
#line 480 "add_clause.m"
            switch (MR_unmkbody(hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_0_3)) {
#line 480 "add_clause.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 480 "add_clause.m"
              case (MR_Integer) 0:
#line 480 "add_clause.m"
                if ((hlds__make_hlds__add_clause__MaybeAnnotation_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 480 "add_clause.m"
                  hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 480 "add_clause.m"
                else
#line 481 "add_clause.m"
                  {
#line 481 "add_clause.m"
                    MR_Word hlds__make_hlds__add_clause__Mode_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__MaybeAnnotation_13, (MR_Integer) 0)));
#line 481 "add_clause.m"
                    MR_Word hlds__make_hlds__add_clause__V_35_35;

#line 481 "add_clause.m"
                    {
#line 481 "add_clause.m"
                      hlds__make_hlds__add_clause__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 481 "add_clause.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_35_35, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Mode_34));
#line 481 "add_clause.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 481 "add_clause.m"
                    }
#line 481 "add_clause.m"
                    {
#line 481 "add_clause.m"
                      hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 481 "add_clause.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_16_16, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_35_35));
#line 481 "add_clause.m"
                    }
#line 481 "add_clause.m"
                  }
#line 480 "add_clause.m"
                break;
#line 480 "add_clause.m"
              case (MR_Integer) 1:
#line 480 "add_clause.m"
                if ((hlds__make_hlds__add_clause__MaybeAnnotation_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 484 "add_clause.m"
                  hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 480 "add_clause.m"
                else
#line 485 "add_clause.m"
                  hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 480 "add_clause.m"
                break;
#line 480 "add_clause.m"
              case (MR_Integer) 2:
#line 486 "add_clause.m"
                hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 480 "add_clause.m"
                break;
#line 480 "add_clause.m"
            }
#line 480 "add_clause.m"
            break;
#line 480 "add_clause.m"
          case (MR_Integer) 1:
#line 480 "add_clause.m"
            {
#line 480 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_0_3, (MR_Integer) 0)));

#line 480 "add_clause.m"
              if ((hlds__make_hlds__add_clause__MaybeAnnotation_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 482 "add_clause.m"
                hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 480 "add_clause.m"
              else
#line 483 "add_clause.m"
                {
#line 483 "add_clause.m"
                  MR_Word hlds__make_hlds__add_clause__Mode_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__MaybeAnnotation_13, (MR_Integer) 0)));
#line 483 "add_clause.m"
                  MR_Word hlds__make_hlds__add_clause__V_41_41;
#line 483 "add_clause.m"
                  MR_Word hlds__make_hlds__add_clause__V_42_42;

#line 483 "add_clause.m"
                  {
#line 483 "add_clause.m"
                    hlds__make_hlds__add_clause__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 483 "add_clause.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_42_42, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Mode_39));
#line 483 "add_clause.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 483 "add_clause.m"
                  }
#line 483 "add_clause.m"
                  {
#line 483 "add_clause.m"
                    hlds__make_hlds__add_clause__V_41_41 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__make_hlds__add_clause__V_47_47, hlds__make_hlds__add_clause__V_42_42);
                  }
#line 483 "add_clause.m"
                  {
#line 483 "add_clause.m"
                    hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 483 "add_clause.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_16_16, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_41_41));
#line 483 "add_clause.m"
                  }
#line 483 "add_clause.m"
                }
#line 480 "add_clause.m"
            }
#line 480 "add_clause.m"
            break;
#line 480 "add_clause.m"
        }
#line 475 "add_clause.m"
        {
#line 475 "add_clause.m"
          hlds__make_hlds__add_clause__get_mode_annotations_4_p_0(hlds__make_hlds__add_clause__Args0_9, &hlds__make_hlds__add_clause__Args_11, hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_16_16, hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_4);
        }
#line 472 "add_clause.m"
        {
#line 472 "add_clause.m"
          MR_Word base;
#line 472 "add_clause.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 472 "add_clause.m"
          *hlds__make_hlds__add_clause__HeadVar__2_2 = base;
#line 472 "add_clause.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Arg_10));
#line 472 "add_clause.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_clause__Args_11));
#line 472 "add_clause.m"
        }
#line 472 "add_clause.m"
      }
#line 471 "add_clause.m"
  }
#line 468 "add_clause.m"
}

#line 444 "add_clause.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_clause__mode_decl_for_pred_info_to_pieces_2_f_0(
#line 444 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredInfo_4,
#line 444 "add_clause.m"
  MR_Integer hlds__make_hlds__add_clause__ProcId_5)
#line 444 "add_clause.m"
{
#line 447 "add_clause.m"
  {
#line 447 "add_clause.m"
    MR_bool hlds__make_hlds__add_clause__succeeded;
#line 447 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__HeadVar__3_3;
#line 447 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_8_8;
#line 447 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_9_9;
#line 447 "add_clause.m"
    MR_String hlds__make_hlds__add_clause__V_10_10;

#line 448 "add_clause.m"
    {
#line 448 "add_clause.m"
      hlds__make_hlds__add_clause__V_10_10 = check_hlds__mode_errors__mode_decl_to_string_2_f_0(hlds__make_hlds__add_clause__ProcId_5, hlds__make_hlds__add_clause__PredInfo_4);
    }
#line 448 "add_clause.m"
    {
#line 448 "add_clause.m"
      hlds__make_hlds__add_clause__V_9_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 448 "add_clause.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_9_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 448 "add_clause.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_9_9, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_10_10));
#line 448 "add_clause.m"
    }
#line 448 "add_clause.m"
    {
#line 448 "add_clause.m"
      hlds__make_hlds__add_clause__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 448 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_8_8, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_9_9));
#line 448 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_8_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[68])));
#line 448 "add_clause.m"
    }
#line 448 "add_clause.m"
    {
#line 448 "add_clause.m"
      hlds__make_hlds__add_clause__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 448 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__HeadVar__3_3, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[66])));
#line 448 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__HeadVar__3_3, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_8_8));
#line 448 "add_clause.m"
    }
#line 447 "add_clause.m"
    return hlds__make_hlds__add_clause__HeadVar__3_3;
#line 447 "add_clause.m"
  }
#line 444 "add_clause.m"
}

#line 433 "add_clause.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_clause__undeclared_mode_error_8_p_0_1(
#line 433 "add_clause.m"
  MR_Box hlds__make_hlds__add_clause__closure_arg,
#line 433 "add_clause.m"
  MR_Box hlds__make_hlds__add_clause__wrapper_arg_1)
#line 433 "add_clause.m"
{
#line 433 "add_clause.m"
  {
#line 433 "add_clause.m"
    MR_Box hlds__make_hlds__add_clause__wrapper_arg_2;
#line 433 "add_clause.m"
    MR_Box hlds__make_hlds__add_clause__closure = hlds__make_hlds__add_clause__closure_arg;
#line 433 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__conv0_HeadVar__3_3;

#line 433 "add_clause.m"
    {
#line 433 "add_clause.m"
      hlds__make_hlds__add_clause__conv0_HeadVar__3_3 = hlds__make_hlds__add_clause__mode_decl_for_pred_info_to_pieces_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__closure, (MR_Integer) 3))), ((MR_Integer) hlds__make_hlds__add_clause__wrapper_arg_1));
    }
#line 433 "add_clause.m"
    hlds__make_hlds__add_clause__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_clause__conv0_HeadVar__3_3));
#line 433 "add_clause.m"
    return hlds__make_hlds__add_clause__wrapper_arg_2;
#line 433 "add_clause.m"
  }
#line 433 "add_clause.m"
}

#line 394 "add_clause.m"
static void MR_CALL 
hlds__make_hlds__add_clause__undeclared_mode_error_8_p_0(
#line 394 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__ModeList_9,
#line 394 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__VarSet_10,
#line 394 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredId_11,
#line 394 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredInfo_12,
#line 394 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__ModuleInfo_13,
#line 394 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Context_14,
#line 394 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_31,
#line 394 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_32)
#line 394 "add_clause.m"
{
#line 399 "add_clause.m"
  {
#line 399 "add_clause.m"
    MR_bool hlds__make_hlds__add_clause__succeeded;
#line 399 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__TypeCtorInfo_120_120;
#line 399 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__PredIdPieces_16;
#line 399 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__StrippedModeList_17;
#line 399 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__PredOrFunc_18;
#line 399 "add_clause.m"
    MR_String hlds__make_hlds__add_clause__Name_19;
#line 399 "add_clause.m"
    MR_String hlds__make_hlds__add_clause__SubDeclStr_21;
#line 399 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__MainPieces_22;
#line 399 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__ProcIds_23;
#line 399 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__VerbosePieces_24;
#line 399 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__Msg_29;
#line 399 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__Spec_30;
#line 399 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_35_35;
#line 399 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_36_36;
#line 399 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_41_41;
#line 399 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_42_42;
#line 399 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_45_45;
#line 399 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_47_47;
#line 399 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_50_50;
#line 399 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_51_51;
#line 399 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_107_107;
#line 399 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_108_108;
#line 399 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_109_109;
#line 399 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_110_110;
#line 399 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_115_115;

#line 400 "add_clause.m"
    {
#line 400 "add_clause.m"
      hlds__make_hlds__add_clause__PredIdPieces_16 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(hlds__make_hlds__add_clause__ModuleInfo_13, (MR_Integer) 1, hlds__make_hlds__add_clause__PredId_11);
    }
#line 402 "add_clause.m"
    {
#line 402 "add_clause.m"
      parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_p_0(hlds__make_hlds__add_clause__ModeList_9, &hlds__make_hlds__add_clause__StrippedModeList_17);
    }
#line 403 "add_clause.m"
    {
#line 403 "add_clause.m"
      hlds__make_hlds__add_clause__PredOrFunc_18 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__make_hlds__add_clause__PredInfo_12);
    }
#line 404 "add_clause.m"
    {
#line 404 "add_clause.m"
      hlds__make_hlds__add_clause__Name_19 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__make_hlds__add_clause__PredInfo_12);
    }
#line 407 "add_clause.m"
    {
#line 407 "add_clause.m"
      hlds__make_hlds__add_clause__V_35_35 = mercury__varset__coerce_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, hlds__make_hlds__add_clause__VarSet_10);
    }
#line 407 "add_clause.m"
    {
#line 407 "add_clause.m"
      hlds__make_hlds__add_clause__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 407 "add_clause.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__V_36_36, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Name_19));
#line 407 "add_clause.m"
    }
#line 406 "add_clause.m"
    {
#line 406 "add_clause.m"
      hlds__make_hlds__add_clause__SubDeclStr_21 = parse_tree__mercury_to_mercury__mercury_mode_subdecl_to_string_7_f_0((MR_Integer) 1, hlds__make_hlds__add_clause__PredOrFunc_18, hlds__make_hlds__add_clause__V_35_35, hlds__make_hlds__add_clause__V_36_36, hlds__make_hlds__add_clause__StrippedModeList_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_clause__Context_14);
    }
#line 2281 "hlds.make_hlds.add_clause.c"
    hlds__make_hlds__add_clause__TypeCtorInfo_120_120 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 412 "add_clause.m"
    {
#line 412 "add_clause.m"
      hlds__make_hlds__add_clause__V_51_51 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 412 "add_clause.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_clause__V_51_51, 0) = ((MR_Box) (hlds__make_hlds__add_clause__SubDeclStr_21));
#line 412 "add_clause.m"
    }
#line 412 "add_clause.m"
    {
#line 412 "add_clause.m"
      hlds__make_hlds__add_clause__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 412 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_50_50, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_51_51));
#line 412 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[19])));
#line 412 "add_clause.m"
    }
#line 411 "add_clause.m"
    {
#line 411 "add_clause.m"
      hlds__make_hlds__add_clause__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 411 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_47_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[60])));
#line 411 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_47_47, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_50_50));
#line 411 "add_clause.m"
    }
#line 410 "add_clause.m"
    {
#line 410 "add_clause.m"
      hlds__make_hlds__add_clause__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 410 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_45_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 410 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_45_45, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_47_47));
#line 410 "add_clause.m"
    }
#line 410 "add_clause.m"
    {
#line 410 "add_clause.m"
      hlds__make_hlds__add_clause__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 410 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_42_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[59])));
#line 410 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_42_42, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_45_45));
#line 410 "add_clause.m"
    }
#line 410 "add_clause.m"
    {
#line 410 "add_clause.m"
      hlds__make_hlds__add_clause__V_41_41 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_clause__TypeCtorInfo_120_120, hlds__make_hlds__add_clause__PredIdPieces_16, hlds__make_hlds__add_clause__V_42_42);
    }
#line 410 "add_clause.m"
    {
#line 410 "add_clause.m"
      hlds__make_hlds__add_clause__MainPieces_22 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_clause__TypeCtorInfo_120_120, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[58]), hlds__make_hlds__add_clause__V_41_41);
    }
#line 413 "add_clause.m"
    {
#line 413 "add_clause.m"
      hlds__make_hlds__add_clause__ProcIds_23 = hlds__hlds_pred__pred_info_all_procids_1_f_0(hlds__make_hlds__add_clause__PredInfo_12);
    }
#line 418 "add_clause.m"
    if ((hlds__make_hlds__add_clause__ProcIds_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 415 "add_clause.m"
      {
#line 415 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_99_99;
#line 415 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_100_100;

#line 417 "add_clause.m"
        {
#line 417 "add_clause.m"
          hlds__make_hlds__add_clause__V_100_100 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 417 "add_clause.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_100_100, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 417 "add_clause.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_100_100, 1) = ((MR_Box) (hlds__make_hlds__add_clause__PredOrFunc_18));
#line 417 "add_clause.m"
        }
#line 417 "add_clause.m"
        {
#line 417 "add_clause.m"
          hlds__make_hlds__add_clause__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 417 "add_clause.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_99_99, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_100_100));
#line 417 "add_clause.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[43])));
#line 417 "add_clause.m"
        }
#line 416 "add_clause.m"
        {
#line 416 "add_clause.m"
          hlds__make_hlds__add_clause__VerbosePieces_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 416 "add_clause.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__VerbosePieces_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[61])));
#line 416 "add_clause.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__VerbosePieces_24, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_99_99));
#line 416 "add_clause.m"
        }
#line 415 "add_clause.m"
      }
#line 418 "add_clause.m"
    else
#line 419 "add_clause.m"
      {
#line 419 "add_clause.m"
        MR_Integer hlds__make_hlds__add_clause__ProcIdsHead_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__ProcIds_23, (MR_Integer) 0)));
#line 419 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__ProcIdsTail_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__ProcIds_23, (MR_Integer) 1)));

#line 427 "add_clause.m"
        if ((hlds__make_hlds__add_clause__ProcIdsTail_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 421 "add_clause.m"
          {
#line 421 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_79_79;
#line 421 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_82_82;
#line 421 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_83_83;
#line 421 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_91_91;
#line 421 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_92_92;

#line 423 "add_clause.m"
            {
#line 423 "add_clause.m"
              hlds__make_hlds__add_clause__V_83_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 423 "add_clause.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_83_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 423 "add_clause.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_83_83, 1) = ((MR_Box) (hlds__make_hlds__add_clause__PredOrFunc_18));
#line 423 "add_clause.m"
            }
#line 423 "add_clause.m"
            {
#line 423 "add_clause.m"
              hlds__make_hlds__add_clause__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 423 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_82_82, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_83_83));
#line 423 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[47])));
#line 423 "add_clause.m"
            }
#line 422 "add_clause.m"
            {
#line 422 "add_clause.m"
              hlds__make_hlds__add_clause__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 422 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_79_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[62])));
#line 422 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_79_79, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_82_82));
#line 422 "add_clause.m"
            }
#line 425 "add_clause.m"
            {
#line 425 "add_clause.m"
              hlds__make_hlds__add_clause__V_92_92 = hlds__make_hlds__add_clause__mode_decl_for_pred_info_to_pieces_2_f_0(hlds__make_hlds__add_clause__PredInfo_12, hlds__make_hlds__add_clause__ProcIdsHead_25);
            }
#line 425 "add_clause.m"
            {
#line 425 "add_clause.m"
              hlds__make_hlds__add_clause__V_91_91 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_clause__TypeCtorInfo_120_120, hlds__make_hlds__add_clause__V_92_92, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[64]));
            }
#line 424 "add_clause.m"
            {
#line 424 "add_clause.m"
              hlds__make_hlds__add_clause__VerbosePieces_24 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_clause__TypeCtorInfo_120_120, hlds__make_hlds__add_clause__V_79_79, hlds__make_hlds__add_clause__V_91_91);
            }
#line 421 "add_clause.m"
          }
#line 427 "add_clause.m"
        else
#line 428 "add_clause.m"
          {
#line 428 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_58_58;
#line 428 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_61_61;
#line 428 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_62_62;
#line 428 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_70_70;
#line 428 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_71_71;
#line 428 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_72_72;
#line 428 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_73_73;

#line 430 "add_clause.m"
            {
#line 430 "add_clause.m"
              hlds__make_hlds__add_clause__V_62_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 430 "add_clause.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_62_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 430 "add_clause.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_62_62, 1) = ((MR_Box) (hlds__make_hlds__add_clause__PredOrFunc_18));
#line 430 "add_clause.m"
            }
#line 430 "add_clause.m"
            {
#line 430 "add_clause.m"
              hlds__make_hlds__add_clause__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 430 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_61_61, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_62_62));
#line 430 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[49])));
#line 430 "add_clause.m"
            }
#line 429 "add_clause.m"
            {
#line 429 "add_clause.m"
              hlds__make_hlds__add_clause__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 429 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_58_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[65])));
#line 429 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_58_58, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_61_61));
#line 429 "add_clause.m"
            }
#line 433 "add_clause.m"
            {
#line 433 "add_clause.m"
              hlds__make_hlds__add_clause__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 433 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__V_73_73, 0) = ((MR_Box) (&hlds__make_hlds__add_clause_scalar_common_5[0]));
#line 433 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__V_73_73, 1) = ((MR_Box) (hlds__make_hlds__add_clause__undeclared_mode_error_8_p_0_1));
#line 433 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__V_73_73, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 433 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__V_73_73, 3) = ((MR_Box) (hlds__make_hlds__add_clause__PredInfo_12));
#line 433 "add_clause.m"
            }
#line 433 "add_clause.m"
            {
#line 433 "add_clause.m"
              hlds__make_hlds__add_clause__V_72_72 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__make_hlds__add_clause_scalar_common_1[2], hlds__make_hlds__add_clause__V_73_73, hlds__make_hlds__add_clause__ProcIds_23);
            }
#line 432 "add_clause.m"
            {
#line 432 "add_clause.m"
              hlds__make_hlds__add_clause__V_71_71 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(hlds__make_hlds__add_clause__V_72_72, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
            }
#line 435 "add_clause.m"
            {
#line 435 "add_clause.m"
              hlds__make_hlds__add_clause__V_70_70 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_clause__TypeCtorInfo_120_120, hlds__make_hlds__add_clause__V_71_71, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[64]));
            }
#line 431 "add_clause.m"
            {
#line 431 "add_clause.m"
              hlds__make_hlds__add_clause__VerbosePieces_24 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_clause__TypeCtorInfo_120_120, hlds__make_hlds__add_clause__V_58_58, hlds__make_hlds__add_clause__V_70_70);
            }
#line 428 "add_clause.m"
          }
#line 419 "add_clause.m"
      }
#line 440 "add_clause.m"
    {
#line 440 "add_clause.m"
      hlds__make_hlds__add_clause__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 440 "add_clause.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__V_108_108, 0) = ((MR_Box) (hlds__make_hlds__add_clause__MainPieces_22));
#line 440 "add_clause.m"
    }
#line 440 "add_clause.m"
    {
#line 440 "add_clause.m"
      hlds__make_hlds__add_clause__V_110_110 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 440 "add_clause.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_clause__V_110_110, 0) = ((MR_Box) ((MR_Integer) 0));
#line 440 "add_clause.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_clause__V_110_110, 1) = ((MR_Box) (hlds__make_hlds__add_clause__VerbosePieces_24));
#line 440 "add_clause.m"
    }
#line 440 "add_clause.m"
    {
#line 440 "add_clause.m"
      hlds__make_hlds__add_clause__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 440 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_109_109, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_110_110));
#line 440 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_109_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 440 "add_clause.m"
    }
#line 440 "add_clause.m"
    {
#line 440 "add_clause.m"
      hlds__make_hlds__add_clause__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 440 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_107_107, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_108_108));
#line 440 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_107_107, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_109_109));
#line 440 "add_clause.m"
    }
#line 439 "add_clause.m"
    {
#line 439 "add_clause.m"
      hlds__make_hlds__add_clause__Msg_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 439 "add_clause.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Msg_29, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Context_14));
#line 439 "add_clause.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Msg_29, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_107_107));
#line 439 "add_clause.m"
    }
#line 441 "add_clause.m"
    {
#line 441 "add_clause.m"
      hlds__make_hlds__add_clause__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 441 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_115_115, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Msg_29));
#line 441 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_115_115, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 441 "add_clause.m"
    }
#line 441 "add_clause.m"
    {
#line 441 "add_clause.m"
      hlds__make_hlds__add_clause__Spec_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 441 "add_clause.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 441 "add_clause.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 441 "add_clause.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_30, 2) = ((MR_Box) (hlds__make_hlds__add_clause__V_115_115));
#line 441 "add_clause.m"
    }
#line 442 "add_clause.m"
    {
#line 442 "add_clause.m"
      MR_Word base;
#line 442 "add_clause.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 442 "add_clause.m"
      *hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_32 = base;
#line 442 "add_clause.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Spec_30));
#line 442 "add_clause.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_31));
#line 442 "add_clause.m"
    }
#line 399 "add_clause.m"
  }
#line 394 "add_clause.m"
}

#line 326 "add_clause.m"
static void MR_CALL 
hlds__make_hlds__add_clause__select_applicable_modes_15_p_0(
#line 326 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Args0_16,
#line 326 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__VarSet_17,
#line 326 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Status_18,
#line 326 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Context_19,
#line 326 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredId_20,
#line 326 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredInfo_21,
#line 326 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__Args_22,
#line 326 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__ApplProcIds_23,
#line 326 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__AllProcIds_24,
#line 326 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_40,
#line 326 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_41,
#line 326 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_42,
#line 326 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_43,
#line 326 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_44,
#line 326 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_45)
#line 326 "add_clause.m"
{
#line 333 "add_clause.m"
  {
#line 333 "add_clause.m"
    MR_bool hlds__make_hlds__add_clause__succeeded;
#line 333 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__ModeAnnotations_28;

#line 334 "add_clause.m"
    {
#line 334 "add_clause.m"
      *hlds__make_hlds__add_clause__AllProcIds_24 = hlds__hlds_pred__pred_info_all_procids_1_f_0(hlds__make_hlds__add_clause__PredInfo_21);
    }
#line 335 "add_clause.m"
    {
#line 335 "add_clause.m"
      hlds__make_hlds__add_clause__get_mode_annotations_4_p_0(hlds__make_hlds__add_clause__Args0_16, hlds__make_hlds__add_clause__Args_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__add_clause__ModeAnnotations_28);
    }
#line 367 "add_clause.m"
#line 367 "add_clause.m"
    switch (MR_tag((MR_Word) hlds__make_hlds__add_clause__ModeAnnotations_28)) {
#line 367 "add_clause.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 367 "add_clause.m"
      case (MR_Integer) 0:
#line 367 "add_clause.m"
#line 367 "add_clause.m"
        switch (MR_unmkbody(hlds__make_hlds__add_clause__ModeAnnotations_28)) {
#line 367 "add_clause.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 367 "add_clause.m"
          case (MR_Integer) 0:
#line 367 "add_clause.m"
          case (MR_Integer) 1:
#line 370 "add_clause.m"
            {
#line 371 "add_clause.m"
              {
#line 371 "add_clause.m"
                hlds__make_hlds__add_clause__succeeded = hlds__hlds_pred__pred_info_pragma_goal_type_1_p_0(hlds__make_hlds__add_clause__PredInfo_21);
              }
#line 376 "add_clause.m"
              if (hlds__make_hlds__add_clause__succeeded)
#line 375 "add_clause.m"
                {
#line 375 "add_clause.m"
                  MR_Word base;
#line 375 "add_clause.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 375 "add_clause.m"
                  *hlds__make_hlds__add_clause__ApplProcIds_23 = base;
#line 375 "add_clause.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (*hlds__make_hlds__add_clause__AllProcIds_24));
#line 375 "add_clause.m"
                }
#line 376 "add_clause.m"
              else
#line 377 "add_clause.m"
                *hlds__make_hlds__add_clause__ApplProcIds_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 370 "add_clause.m"
              *hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_43 = hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_42;
#line 370 "add_clause.m"
              *hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_45 = hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_44;
#line 370 "add_clause.m"
            }
#line 367 "add_clause.m"
            break;
#line 367 "add_clause.m"
          case (MR_Integer) 2:
#line 380 "add_clause.m"
            {
#line 380 "add_clause.m"
              MR_String hlds__make_hlds__add_clause__PredIdStr_36;
#line 380 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__Pieces_37;
#line 380 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__Msg_38;
#line 380 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__Spec_39;
#line 380 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__V_49_49;
#line 380 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__V_50_50;
#line 380 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__V_65_65;
#line 380 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__V_66_66;
#line 380 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__V_70_70;

#line 381 "add_clause.m"
              {
#line 381 "add_clause.m"
                hlds__make_hlds__add_clause__PredIdStr_36 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_40, hlds__make_hlds__add_clause__PredId_20);
              }
#line 382 "add_clause.m"
              {
#line 382 "add_clause.m"
                hlds__make_hlds__add_clause__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 382 "add_clause.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_50_50, 0) = ((MR_Box) (hlds__make_hlds__add_clause__PredIdStr_36));
#line 382 "add_clause.m"
              }
#line 382 "add_clause.m"
              {
#line 382 "add_clause.m"
                hlds__make_hlds__add_clause__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 382 "add_clause.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_49_49, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_50_50));
#line 382 "add_clause.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[41])));
#line 382 "add_clause.m"
              }
#line 382 "add_clause.m"
              {
#line 382 "add_clause.m"
                hlds__make_hlds__add_clause__Pieces_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 382 "add_clause.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__Pieces_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[57])));
#line 382 "add_clause.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__Pieces_37, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_49_49));
#line 382 "add_clause.m"
              }
#line 385 "add_clause.m"
              {
#line 385 "add_clause.m"
                hlds__make_hlds__add_clause__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 385 "add_clause.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__V_66_66, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Pieces_37));
#line 385 "add_clause.m"
              }
#line 385 "add_clause.m"
              {
#line 385 "add_clause.m"
                hlds__make_hlds__add_clause__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 385 "add_clause.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_65_65, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_66_66));
#line 385 "add_clause.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 385 "add_clause.m"
              }
#line 385 "add_clause.m"
              {
#line 385 "add_clause.m"
                hlds__make_hlds__add_clause__Msg_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 385 "add_clause.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Msg_38, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Context_19));
#line 385 "add_clause.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Msg_38, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_65_65));
#line 385 "add_clause.m"
              }
#line 386 "add_clause.m"
              {
#line 386 "add_clause.m"
                hlds__make_hlds__add_clause__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 386 "add_clause.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_70_70, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Msg_38));
#line 386 "add_clause.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 386 "add_clause.m"
              }
#line 386 "add_clause.m"
              {
#line 386 "add_clause.m"
                hlds__make_hlds__add_clause__Spec_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 386 "add_clause.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 386 "add_clause.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 386 "add_clause.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_39, 2) = ((MR_Box) (hlds__make_hlds__add_clause__V_70_70));
#line 386 "add_clause.m"
              }
#line 387 "add_clause.m"
              {
#line 387 "add_clause.m"
                MR_Word base;
#line 387 "add_clause.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 387 "add_clause.m"
                *hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_45 = base;
#line 387 "add_clause.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Spec_39));
#line 387 "add_clause.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_44));
#line 387 "add_clause.m"
              }
#line 391 "add_clause.m"
              {
#line 391 "add_clause.m"
                MR_Word base;
#line 391 "add_clause.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 391 "add_clause.m"
                *hlds__make_hlds__add_clause__ApplProcIds_23 = base;
#line 391 "add_clause.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (*hlds__make_hlds__add_clause__AllProcIds_24));
#line 391 "add_clause.m"
              }
#line 380 "add_clause.m"
              *hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_43 = hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_42;
#line 380 "add_clause.m"
            }
#line 367 "add_clause.m"
            break;
#line 367 "add_clause.m"
        }
#line 367 "add_clause.m"
        break;
#line 367 "add_clause.m"
      case (MR_Integer) 1:
#line 337 "add_clause.m"
        {
#line 337 "add_clause.m"
          MR_Word hlds__make_hlds__add_clause__ModeList0_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__ModeAnnotations_28, (MR_Integer) 0)));
#line 337 "add_clause.m"
          MR_Word hlds__make_hlds__add_clause__ModeList_30;
#line 337 "add_clause.m"
          MR_Word hlds__make_hlds__add_clause__Procs_33;
#line 337 "add_clause.m"
          MR_Word hlds__make_hlds__add_clause__ExistingProcs_34;
#line 337 "add_clause.m"
          MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_73_73;
#line 360 "add_clause.m"
          MR_Integer hlds__make_hlds__add_clause__ProcId_35;

#line 343 "add_clause.m"
          hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__Status_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 345 "add_clause.m"
          if (hlds__make_hlds__add_clause__succeeded)
#line 344 "add_clause.m"
            {
#line 344 "add_clause.m"
              hlds__make_hlds__add_clause__ModeList_30 = hlds__make_hlds__add_clause__ModeList0_29;
#line 344 "add_clause.m"
              hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_73_73 = hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_44;
#line 344 "add_clause.m"
              *hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_43 = hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_42;
#line 344 "add_clause.m"
            }
#line 345 "add_clause.m"
          else
#line 346 "add_clause.m"
            {
#line 346 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__MQInfo0_31;
#line 346 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__MQInfo_32;

#line 346 "add_clause.m"
              {
#line 346 "add_clause.m"
                hlds__make_hlds__qual_info__qual_info_get_mq_info_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_42, &hlds__make_hlds__add_clause__MQInfo0_31);
              }
#line 347 "add_clause.m"
              {
#line 347 "add_clause.m"
                parse_tree__module_qual__qualify_clause_mode_list_7_p_0(hlds__make_hlds__add_clause__ModeList0_29, &hlds__make_hlds__add_clause__ModeList_30, hlds__make_hlds__add_clause__Context_19, hlds__make_hlds__add_clause__MQInfo0_31, &hlds__make_hlds__add_clause__MQInfo_32, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_44, &hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_73_73);
              }
#line 349 "add_clause.m"
              {
#line 349 "add_clause.m"
                hlds__make_hlds__qual_info__qual_info_set_mq_info_3_p_0(hlds__make_hlds__add_clause__MQInfo_32, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_42, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_43);
              }
#line 346 "add_clause.m"
            }
#line 353 "add_clause.m"
          {
#line 353 "add_clause.m"
            hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__make_hlds__add_clause__PredInfo_21, &hlds__make_hlds__add_clause__Procs_33);
          }
#line 354 "add_clause.m"
          {
#line 354 "add_clause.m"
            mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, hlds__make_hlds__add_clause__Procs_33, &hlds__make_hlds__add_clause__ExistingProcs_34);
          }
#line 356 "add_clause.m"
          {
#line 356 "add_clause.m"
            hlds__make_hlds__add_clause__succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(hlds__make_hlds__add_clause__ExistingProcs_34, hlds__make_hlds__add_clause__ModeList_30, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_40, &hlds__make_hlds__add_clause__ProcId_35);
          }
#line 360 "add_clause.m"
          if (hlds__make_hlds__add_clause__succeeded)
#line 359 "add_clause.m"
            {
#line 359 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__V_75_75;

#line 359 "add_clause.m"
              {
#line 359 "add_clause.m"
                hlds__make_hlds__add_clause__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 359 "add_clause.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_75_75, 0) = ((MR_Box) (hlds__make_hlds__add_clause__ProcId_35));
#line 359 "add_clause.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 359 "add_clause.m"
              }
#line 359 "add_clause.m"
              {
#line 359 "add_clause.m"
                MR_Word base;
#line 359 "add_clause.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 359 "add_clause.m"
                *hlds__make_hlds__add_clause__ApplProcIds_23 = base;
#line 359 "add_clause.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_75_75));
#line 359 "add_clause.m"
              }
#line 359 "add_clause.m"
              *hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_45 = hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_73_73;
#line 359 "add_clause.m"
            }
#line 360 "add_clause.m"
          else
#line 362 "add_clause.m"
            {
#line 361 "add_clause.m"
              {
#line 361 "add_clause.m"
                hlds__make_hlds__add_clause__undeclared_mode_error_8_p_0(hlds__make_hlds__add_clause__ModeList_30, hlds__make_hlds__add_clause__VarSet_17, hlds__make_hlds__add_clause__PredId_20, hlds__make_hlds__add_clause__PredInfo_21, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_40, hlds__make_hlds__add_clause__Context_19, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_73_73, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_45);
              }
#line 365 "add_clause.m"
              {
#line 365 "add_clause.m"
                MR_Word base;
#line 365 "add_clause.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 365 "add_clause.m"
                *hlds__make_hlds__add_clause__ApplProcIds_23 = base;
#line 365 "add_clause.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (*hlds__make_hlds__add_clause__AllProcIds_24));
#line 365 "add_clause.m"
              }
#line 362 "add_clause.m"
            }
#line 337 "add_clause.m"
        }
#line 367 "add_clause.m"
        break;
#line 367 "add_clause.m"
    }
#line 333 "add_clause.m"
    *hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_41 = hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_40;
#line 333 "add_clause.m"
  }
#line 326 "add_clause.m"
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
    MR_Word hlds__make_hlds__add_clause__TypeCtorInfo_220_220;
#line 170 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__TypeCtorInfo_221_221;
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
    MR_Word hlds__make_hlds__add_clause__Globals_186;

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
#line 3094 "hlds.make_hlds.add_clause.c"
    hlds__make_hlds__add_clause__TypeCtorInfo_220_220 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 3096 "hlds.make_hlds.add_clause.c"
    hlds__make_hlds__add_clause__TypeCtorInfo_221_221 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 172 "add_clause.m"
    {
#line 172 "add_clause.m"
      mercury__map__lookup_3_p_0(hlds__make_hlds__add_clause__TypeCtorInfo_220_220, hlds__make_hlds__add_clause__TypeCtorInfo_221_221, hlds__make_hlds__add_clause__Preds0_38, ((MR_Box) (hlds__make_hlds__add_clause__PredId_23)), &hlds__make_hlds__add_clause__conv0_STATE_VARIABLE_PredInfo_87_87);
    }
#line 172 "add_clause.m"
    hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_87_87 = ((MR_Word) hlds__make_hlds__add_clause__conv0_STATE_VARIABLE_PredInfo_87_87);
#line 176 "add_clause.m"
    {
#line 176 "add_clause.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_80, &hlds__make_hlds__add_clause__Globals_186);
    }
#line 177 "add_clause.m"
    {
#line 177 "add_clause.m"
      libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_clause__Globals_186, (MR_Integer) 46, &hlds__make_hlds__add_clause__VeryVerbose_41);
    }
#line 192 "add_clause.m"
#line 192 "add_clause.m"
    switch (hlds__make_hlds__add_clause__VeryVerbose_41) {
#line 192 "add_clause.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 192 "add_clause.m"
      case (MR_Integer) 0:
#line 193 "add_clause.m"
        {
#line 193 "add_clause.m"
        }
#line 192 "add_clause.m"
        break;
#line 192 "add_clause.m"
      case (MR_Integer) 1:
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
#line 181 "add_clause.m"
          MR_Word hlds__make_hlds__add_clause__V_219_219;

#line 180 "add_clause.m"
          {
#line 180 "add_clause.m"
            hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_87_87, &hlds__make_hlds__add_clause__MsgClauses_42);
          }
#line 181 "add_clause.m"
          hlds__make_hlds__add_clause__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__MsgClauses_42, (MR_Integer) 0)));
#line 181 "add_clause.m"
          hlds__make_hlds__add_clause__V_213_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__MsgClauses_42, (MR_Integer) 1)));
#line 181 "add_clause.m"
          hlds__make_hlds__add_clause__V_214_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__MsgClauses_42, (MR_Integer) 2)));
#line 181 "add_clause.m"
          hlds__make_hlds__add_clause__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__MsgClauses_42, (MR_Integer) 3)));
#line 181 "add_clause.m"
          hlds__make_hlds__add_clause__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__MsgClauses_42, (MR_Integer) 4)));
#line 181 "add_clause.m"
          hlds__make_hlds__add_clause__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__MsgClauses_42, (MR_Integer) 5)));
#line 181 "add_clause.m"
          hlds__make_hlds__add_clause__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__MsgClauses_42, (MR_Integer) 6)));
#line 181 "add_clause.m"
          hlds__make_hlds__add_clause__V_218_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__MsgClauses_42, (MR_Integer) 7)));
#line 181 "add_clause.m"
          hlds__make_hlds__add_clause__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__MsgClauses_42, (MR_Integer) 8)));
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
#line 192 "add_clause.m"
        break;
#line 192 "add_clause.m"
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
#line 206 "add_clause.m"
      hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_108_108 = hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_87_87;
#line 213 "add_clause.m"
    if ((hlds__make_hlds__add_clause__IllegalSVarResult_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 245 "add_clause.m"
      {
#line 219 "add_clause.m"
        MR_Integer hlds__make_hlds__add_clause__FuncArity_50;
#line 219 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_109_109;
#line 219 "add_clause.m"
        MR_Integer hlds__make_hlds__add_clause__V_223_223;
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
              hlds__make_hlds__add_clause__succeeded = hlds__hlds_pred__is_field_access_function_name_5_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_80, hlds__make_hlds__add_clause__PredName_22, &hlds__make_hlds__add_clause__V_223_223, &hlds__make_hlds__add_clause__V_51_51, &hlds__make_hlds__add_clause__V_52_52);
            }
#line 219 "add_clause.m"
            if (hlds__make_hlds__add_clause__succeeded)
#line 219 "add_clause.m"
              {
#line 221 "add_clause.m"
                hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__FuncArity_50 == hlds__make_hlds__add_clause__V_223_223);
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
#line 245 "add_clause.m"
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
            MR_Word hlds__make_hlds__add_clause__V_149_149;

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
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_116_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
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
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_141_141, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[56])));
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
#line 243 "add_clause.m"
            {
#line 243 "add_clause.m"
              hlds__make_hlds__add_clause__V_149_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 243 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_149_149, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Msg_56));
#line 243 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_149_149, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 243 "add_clause.m"
            }
#line 242 "add_clause.m"
            {
#line 242 "add_clause.m"
              hlds__make_hlds__add_clause__Spec_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 242 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 242 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 242 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_57, 2) = ((MR_Box) (hlds__make_hlds__add_clause__V_149_149));
#line 242 "add_clause.m"
            }
#line 244 "add_clause.m"
            {
#line 244 "add_clause.m"
              MR_Word base;
#line 244 "add_clause.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 244 "add_clause.m"
              *hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_85 = base;
#line 244 "add_clause.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Spec_57));
#line 244 "add_clause.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_84));
#line 244 "add_clause.m"
            }
#line 228 "add_clause.m"
            *hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_83 = hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_82;
#line 228 "add_clause.m"
            *hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_81 = hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_80;
#line 228 "add_clause.m"
          }
#line 245 "add_clause.m"
        else
#line 266 "add_clause.m"
          {
#line 246 "add_clause.m"
            {
#line 246 "add_clause.m"
              hlds__make_hlds__add_clause__succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_108_108);
            }
#line 266 "add_clause.m"
            if (hlds__make_hlds__add_clause__succeeded)
#line 255 "add_clause.m"
              {
#line 255 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__AllowDefnOfBuiltin_58;
#line 255 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__Globals_191;

#line 252 "add_clause.m"
                {
#line 252 "add_clause.m"
                  hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_80, &hlds__make_hlds__add_clause__Globals_191);
                }
#line 253 "add_clause.m"
                {
#line 253 "add_clause.m"
                  libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_clause__Globals_191, (MR_Integer) 278, &hlds__make_hlds__add_clause__AllowDefnOfBuiltin_58);
                }
#line 263 "add_clause.m"
#line 263 "add_clause.m"
                switch (hlds__make_hlds__add_clause__AllowDefnOfBuiltin_58) {
#line 263 "add_clause.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 263 "add_clause.m"
                  case (MR_Integer) 0:
#line 257 "add_clause.m"
                    {
#line 257 "add_clause.m"
                      MR_Word hlds__make_hlds__add_clause__V_162_162;
#line 257 "add_clause.m"
                      MR_Word hlds__make_hlds__add_clause__Msg_192;
#line 257 "add_clause.m"
                      MR_Word hlds__make_hlds__add_clause__Spec_193;

#line 258 "add_clause.m"
                      {
#line 258 "add_clause.m"
                        hlds__make_hlds__add_clause__Msg_192 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 258 "add_clause.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Msg_192, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Context_29));
#line 258 "add_clause.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Msg_192, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[34])));
#line 258 "add_clause.m"
                      }
#line 261 "add_clause.m"
                      {
#line 261 "add_clause.m"
                        hlds__make_hlds__add_clause__V_162_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 261 "add_clause.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_162_162, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Msg_192));
#line 261 "add_clause.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_162_162, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 261 "add_clause.m"
                      }
#line 260 "add_clause.m"
                      {
#line 260 "add_clause.m"
                        hlds__make_hlds__add_clause__Spec_193 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 260 "add_clause.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_193, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 260 "add_clause.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_193, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 260 "add_clause.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_193, 2) = ((MR_Box) (hlds__make_hlds__add_clause__V_162_162));
#line 260 "add_clause.m"
                      }
#line 262 "add_clause.m"
                      {
#line 262 "add_clause.m"
                        MR_Word base;
#line 262 "add_clause.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 262 "add_clause.m"
                        *hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_85 = base;
#line 262 "add_clause.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Spec_193));
#line 262 "add_clause.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_84));
#line 262 "add_clause.m"
                      }
#line 257 "add_clause.m"
                    }
#line 263 "add_clause.m"
                    break;
#line 263 "add_clause.m"
                  case (MR_Integer) 1:
#line 264 "add_clause.m"
                    *hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_85 = hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_84;
#line 263 "add_clause.m"
                    break;
#line 263 "add_clause.m"
                }
#line 255 "add_clause.m"
                *hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_83 = hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_82;
#line 255 "add_clause.m"
                *hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_81 = hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_80;
#line 255 "add_clause.m"
              }
#line 266 "add_clause.m"
            else
#line 267 "add_clause.m"
              {
#line 267 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__Clauses0_59;
#line 267 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__TVarSet0_60;
#line 267 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__ArgTerms_62;
#line 267 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__ProcIdsForThisClause_63;
#line 267 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__AllProcIds_64;
#line 267 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__Goal_65;
#line 267 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__VarSet_66;
#line 267 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__TVarSet_67;
#line 267 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__Clauses_68;
#line 267 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__Warnings_69;
#line 267 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__ExistQVars_72;
#line 267 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__ArgTypes_73;
#line 267 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__ProcIds_74;
#line 267 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__Preds_78;
#line 267 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_165_165;
#line 267 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_166_166;
#line 267 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_167_167;
#line 267 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_168_168;
#line 267 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_169_169;
#line 267 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_171_171;
#line 267 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_172_172;
#line 267 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_174_174;
#line 267 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_177_177;
#line 267 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_178_178;
#line 267 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_180_202;
#line 267 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_PredicateTable_181_203;
#line 269 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__V_61_61;
#line 279 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__PromiseType_70;
#line 286 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause___ArgTVarSet_71;
#line 298 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__V_75_75;

#line 267 "add_clause.m"
                {
#line 267 "add_clause.m"
                  hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_108_108, &hlds__make_hlds__add_clause__Clauses0_59);
                }
#line 268 "add_clause.m"
                {
#line 268 "add_clause.m"
                  hlds__hlds_pred__pred_info_get_typevarset_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_108_108, &hlds__make_hlds__add_clause__TVarSet0_60);
                }
#line 269 "add_clause.m"
                {
#line 269 "add_clause.m"
                  check_hlds__clause_to_proc__maybe_add_default_func_mode_3_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_108_108, &hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_165_165, &hlds__make_hlds__add_clause__V_61_61);
                }
#line 270 "add_clause.m"
                {
#line 270 "add_clause.m"
                  hlds__make_hlds__add_clause__select_applicable_modes_15_p_0(hlds__make_hlds__add_clause__Args_24, hlds__make_hlds__add_clause__ClauseVarSet_20, hlds__make_hlds__add_clause__Status_28, hlds__make_hlds__add_clause__Context_29, hlds__make_hlds__add_clause__PredId_23, hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_165_165, &hlds__make_hlds__add_clause__ArgTerms_62, &hlds__make_hlds__add_clause__ProcIdsForThisClause_63, &hlds__make_hlds__add_clause__AllProcIds_64, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_80, &hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_166_166, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_82, &hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_167_167, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_84, &hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_168_168);
                }
#line 273 "add_clause.m"
                {
#line 273 "add_clause.m"
                  hlds__make_hlds__add_clause__clauses_info_add_clause_24_p_0(hlds__make_hlds__add_clause__ProcIdsForThisClause_63, hlds__make_hlds__add_clause__AllProcIds_64, hlds__make_hlds__add_clause__ClauseVarSet_20, hlds__make_hlds__add_clause__TVarSet0_60, hlds__make_hlds__add_clause__ArgTerms_62, hlds__make_hlds__add_clause__Body_27, hlds__make_hlds__add_clause__Context_29, hlds__make_hlds__add_clause__MaybeSeqNum_30, hlds__make_hlds__add_clause__Status_28, hlds__make_hlds__add_clause__PredOrFunc_21, hlds__make_hlds__add_clause__Arity_25, hlds__make_hlds__add_clause__GoalType_31, &hlds__make_hlds__add_clause__Goal_65, &hlds__make_hlds__add_clause__VarSet_66, &hlds__make_hlds__add_clause__TVarSet_67, hlds__make_hlds__add_clause__Clauses0_59, &hlds__make_hlds__add_clause__Clauses_68, &hlds__make_hlds__add_clause__Warnings_69, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_166_166, &hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_169_169, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_167_167, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_83, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_168_168, &hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_171_171);
                }
#line 278 "add_clause.m"
                {
#line 278 "add_clause.m"
                  hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(hlds__make_hlds__add_clause__Clauses_68, hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_165_165, &hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_172_172);
                }
#line 279 "add_clause.m"
                hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__GoalType_31)) == (MR_mktag((MR_Integer) 1)));
#line 279 "add_clause.m"
                if (hlds__make_hlds__add_clause__succeeded)
#line 279 "add_clause.m"
                  {
#line 279 "add_clause.m"
                    hlds__make_hlds__add_clause__PromiseType_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__GoalType_31, (MR_Integer) 0)));
#line 280 "add_clause.m"
                    {
#line 280 "add_clause.m"
                      hlds__hlds_pred__pred_info_set_goal_type_3_p_0(hlds__make_hlds__add_clause__GoalType_31, hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_172_172, &hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_174_174);
                    }
#line 279 "add_clause.m"
                  }
#line 279 "add_clause.m"
                else
#line 283 "add_clause.m"
                  {
#line 283 "add_clause.m"
                    {
#line 283 "add_clause.m"
                      hlds__hlds_pred__pred_info_update_goal_type_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_172_172, &hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_174_174);
                    }
#line 283 "add_clause.m"
                  }
#line 285 "add_clause.m"
                {
#line 285 "add_clause.m"
                  hlds__hlds_pred__pred_info_set_typevarset_3_p_0(hlds__make_hlds__add_clause__TVarSet_67, hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_174_174, &hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_177_177);
                }
#line 286 "add_clause.m"
                {
#line 286 "add_clause.m"
                  hlds__hlds_pred__pred_info_get_arg_types_4_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_177_177, &hlds__make_hlds__add_clause___ArgTVarSet_71, &hlds__make_hlds__add_clause__ExistQVars_72, &hlds__make_hlds__add_clause__ArgTypes_73);
                }
#line 288 "add_clause.m"
                {
#line 288 "add_clause.m"
                  hlds__hlds_pred__pred_info_set_arg_types_5_p_0(hlds__make_hlds__add_clause__TVarSet_67, hlds__make_hlds__add_clause__ExistQVars_72, hlds__make_hlds__add_clause__ArgTypes_73, hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_177_177, &hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_178_178);
                }
#line 295 "add_clause.m"
                {
#line 295 "add_clause.m"
                  hlds__make_hlds__add_clause__ProcIds_74 = hlds__hlds_pred__pred_info_all_procids_1_f_0(hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_178_178);
                }
#line 297 "add_clause.m"
                hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__ProcIds_74 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 297 "add_clause.m"
                if (hlds__make_hlds__add_clause__succeeded)
#line 297 "add_clause.m"
                  {
#line 298 "add_clause.m"
                    hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__GoalType_31)) == (MR_mktag((MR_Integer) 1)));
#line 298 "add_clause.m"
                    if (hlds__make_hlds__add_clause__succeeded)
#line 298 "add_clause.m"
                      hlds__make_hlds__add_clause__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__GoalType_31, (MR_Integer) 0)));
#line 298 "add_clause.m"
                    hlds__make_hlds__add_clause__succeeded = !(hlds__make_hlds__add_clause__succeeded);
#line 297 "add_clause.m"
                  }
#line 303 "add_clause.m"
                if (hlds__make_hlds__add_clause__succeeded)
#line 300 "add_clause.m"
                  {
#line 300 "add_clause.m"
                    MR_Word hlds__make_hlds__add_clause__EndMarkers0_76;
#line 300 "add_clause.m"
                    MR_Word hlds__make_hlds__add_clause__EndMarkers_77;

#line 300 "add_clause.m"
                    {
#line 300 "add_clause.m"
                      hlds__hlds_pred__pred_info_get_markers_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_178_178, &hlds__make_hlds__add_clause__EndMarkers0_76);
                    }
#line 301 "add_clause.m"
                    {
#line 301 "add_clause.m"
                      hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 3, hlds__make_hlds__add_clause__EndMarkers0_76, &hlds__make_hlds__add_clause__EndMarkers_77);
                    }
#line 302 "add_clause.m"
                    {
#line 302 "add_clause.m"
                      hlds__hlds_pred__pred_info_set_markers_3_p_0(hlds__make_hlds__add_clause__EndMarkers_77, hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_178_178, &hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_180_202);
                    }
#line 300 "add_clause.m"
                  }
#line 303 "add_clause.m"
                else
#line 303 "add_clause.m"
                  hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_180_202 = hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_178_178;
#line 306 "add_clause.m"
                {
#line 306 "add_clause.m"
                  mercury__map__det_update_4_p_0(hlds__make_hlds__add_clause__TypeCtorInfo_220_220, hlds__make_hlds__add_clause__TypeCtorInfo_221_221, ((MR_Box) (hlds__make_hlds__add_clause__PredId_23)), ((MR_Box) (hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_180_202)), hlds__make_hlds__add_clause__Preds0_38, &hlds__make_hlds__add_clause__Preds_78);
                }
#line 307 "add_clause.m"
                {
#line 307 "add_clause.m"
                  hlds__pred_table__predicate_table_set_preds_3_p_0(hlds__make_hlds__add_clause__Preds_78, hlds__make_hlds__add_clause__STATE_VARIABLE_PredicateTable_86_86, &hlds__make_hlds__add_clause__STATE_VARIABLE_PredicateTable_181_203);
                }
#line 308 "add_clause.m"
                {
#line 308 "add_clause.m"
                  hlds__hlds_module__module_info_set_predicate_table_3_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_PredicateTable_181_203, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_169_169, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_81);
                }
#line 309 "add_clause.m"
                hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__Status_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 311 "add_clause.m"
                if (hlds__make_hlds__add_clause__succeeded)
#line 311 "add_clause.m"
                  *hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_85 = hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_171_171;
#line 311 "add_clause.m"
                else
#line 313 "add_clause.m"
                  {
#line 313 "add_clause.m"
                    MR_Word hlds__make_hlds__add_clause__SimpleCallId_79;
#line 313 "add_clause.m"
                    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_183_183;

#line 313 "add_clause.m"
                    {
#line 313 "add_clause.m"
                      hlds__make_hlds__add_clause__SimpleCallId_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 313 "add_clause.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__SimpleCallId_79, 0) = ((MR_Box) (hlds__make_hlds__add_clause__PredOrFunc_21));
#line 313 "add_clause.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__SimpleCallId_79, 1) = ((MR_Box) (hlds__make_hlds__add_clause__PredName_22));
#line 313 "add_clause.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__SimpleCallId_79, 2) = ((MR_Box) (hlds__make_hlds__add_clause__Arity_25));
#line 313 "add_clause.m"
                    }
#line 314 "add_clause.m"
                    {
#line 314 "add_clause.m"
                      hlds__make_hlds__make_hlds_warn__warn_singletons_6_p_0(*hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_81, hlds__make_hlds__add_clause__SimpleCallId_79, hlds__make_hlds__add_clause__VarSet_66, hlds__make_hlds__add_clause__Goal_65, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_171_171, &hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_183_183);
                    }
#line 317 "add_clause.m"
                    {
#line 317 "add_clause.m"
                      hlds__make_hlds__make_hlds_warn__add_quant_warnings_5_p_0(hlds__make_hlds__add_clause__SimpleCallId_79, hlds__make_hlds__add_clause__VarSet_66, hlds__make_hlds__add_clause__Warnings_69, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_183_183, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_85);
#line 317 "add_clause.m"
                      return;
                    }
#line 313 "add_clause.m"
                  }
#line 267 "add_clause.m"
              }
#line 266 "add_clause.m"
          }
#line 245 "add_clause.m"
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
#line 210 "add_clause.m"
        *hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_81 = hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_80;
#line 210 "add_clause.m"
        *hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_83 = hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_82;
#line 210 "add_clause.m"
      }
#line 170 "add_clause.m"
  }
#line 156 "add_clause.m"
}

#line 555 "add_clause.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_clause__clauses_info_add_clause_24_p_0_1(
#line 555 "add_clause.m"
  MR_Box hlds__make_hlds__add_clause__closure_arg,
#line 555 "add_clause.m"
  MR_Box hlds__make_hlds__add_clause__wrapper_arg_1,
#line 555 "add_clause.m"
  MR_Box * hlds__make_hlds__add_clause__wrapper_arg_2)
#line 555 "add_clause.m"
{
#line 555 "add_clause.m"
  {
#line 555 "add_clause.m"
    MR_bool hlds__make_hlds__add_clause__succeeded;
#line 555 "add_clause.m"
    MR_Box hlds__make_hlds__add_clause__closure = hlds__make_hlds__add_clause__closure_arg;
#line 555 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__conv0_HeadVar__2_98;

#line 555 "add_clause.m"
    {
#line 555 "add_clause.m"
      hlds__make_hlds__add_clause__succeeded = hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__555__1_1_f_0(((MR_Word) hlds__make_hlds__add_clause__wrapper_arg_1), &hlds__make_hlds__add_clause__conv0_HeadVar__2_98);
    }
#line 555 "add_clause.m"
    if (hlds__make_hlds__add_clause__succeeded)
#line 555 "add_clause.m"
      {
#line 555 "add_clause.m"
        *hlds__make_hlds__add_clause__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_clause__conv0_HeadVar__2_98));
#line 555 "add_clause.m"
        hlds__make_hlds__add_clause__succeeded = MR_TRUE;
#line 555 "add_clause.m"
      }
#line 555 "add_clause.m"
    return hlds__make_hlds__add_clause__succeeded;
#line 555 "add_clause.m"
  }
#line 555 "add_clause.m"
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
#line 508 "add_clause.m"
  {
#line 508 "add_clause.m"
    MR_bool hlds__make_hlds__add_clause__succeeded;
#line 508 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__VarSet0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_79, (MR_Integer) 0)));
#line 508 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__ExplicitVarTypes0_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_79, (MR_Integer) 1)));
#line 508 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__TVarNameMap0_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_79, (MR_Integer) 2)));
#line 508 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__InferredVarTypes_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_79, (MR_Integer) 3)));
#line 508 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__HeadVars_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_79, (MR_Integer) 4)));
#line 508 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__ClausesRep0_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_79, (MR_Integer) 5)));
#line 508 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__ItemNumbers0_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_79, (MR_Integer) 6)));
#line 508 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__RttiVarMaps_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_79, (MR_Integer) 7)));
#line 508 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__HasForeignClauses_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_79, (MR_Integer) 8)));
#line 508 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__IsEmpty_54;
#line 508 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__TVarNameMap_55;
#line 508 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__VarSet1_56;
#line 508 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__Renaming_57;
#line 508 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__Goal0_58;
#line 508 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__StateVarWarnings_59;
#line 508 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__StateVarErrors_60;
#line 508 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__FoundError_61;
#line 508 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_87_87;
#line 508 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_89_89;
#line 508 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_90_90;

#line 512 "add_clause.m"
    {
#line 512 "add_clause.m"
      hlds__make_hlds__add_clause__IsEmpty_54 = hlds__hlds_clauses__clause_list_is_empty_1_f_0(hlds__make_hlds__add_clause__ClausesRep0_50);
    }
#line 522 "add_clause.m"
#line 522 "add_clause.m"
    switch (hlds__make_hlds__add_clause__IsEmpty_54) {
#line 522 "add_clause.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 522 "add_clause.m"
      case (MR_Integer) 0:
#line 524 "add_clause.m"
        hlds__make_hlds__add_clause__TVarNameMap_55 = hlds__make_hlds__add_clause__TVarNameMap0_47;
#line 522 "add_clause.m"
        break;
#line 522 "add_clause.m"
      case (MR_Integer) 1:
#line 514 "add_clause.m"
        {
#line 521 "add_clause.m"
          {
#line 521 "add_clause.m"
            mercury__varset__create_name_var_map_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, hlds__make_hlds__add_clause__TVarSet0_28, &hlds__make_hlds__add_clause__TVarNameMap_55);
          }
#line 514 "add_clause.m"
        }
#line 522 "add_clause.m"
        break;
#line 522 "add_clause.m"
    }
#line 526 "add_clause.m"
    {
#line 526 "add_clause.m"
      hlds__make_hlds__qual_info__update_qual_info_6_p_0(hlds__make_hlds__add_clause__TVarNameMap_55, hlds__make_hlds__add_clause__TVarSet0_28, hlds__make_hlds__add_clause__ExplicitVarTypes0_46, hlds__make_hlds__add_clause__Status_33, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_83, &hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_87_87);
    }
#line 528 "add_clause.m"
    {
#line 528 "add_clause.m"
      mercury__varset__merge_renaming_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__add_clause__VarSet0_45, hlds__make_hlds__add_clause__CVarSet_27, &hlds__make_hlds__add_clause__VarSet1_56, &hlds__make_hlds__add_clause__Renaming_57);
    }
#line 529 "add_clause.m"
    {
#line 529 "add_clause.m"
      hlds__make_hlds__add_clause__add_clause_transform_20_p_0(hlds__make_hlds__add_clause__Renaming_57, hlds__make_hlds__add_clause__HeadVars_49, hlds__make_hlds__add_clause__Args_29, hlds__make_hlds__add_clause__Body_30, hlds__make_hlds__add_clause__Context_31, hlds__make_hlds__add_clause__PredOrFunc_34, hlds__make_hlds__add_clause__Arity_35, hlds__make_hlds__add_clause__GoalType_36, &hlds__make_hlds__add_clause__Goal0_58, hlds__make_hlds__add_clause__VarSet1_56, hlds__make_hlds__add_clause__VarSet_38, hlds__make_hlds__add_clause__QuantWarnings_41, &hlds__make_hlds__add_clause__StateVarWarnings_59, &hlds__make_hlds__add_clause__StateVarErrors_60, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_81, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_82, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_87_87, &hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_89_89, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_85, &hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_90_90);
    }
#line 533 "add_clause.m"
    {
#line 533 "add_clause.m"
      hlds__make_hlds__qual_info__qual_info_get_tvarset_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_89_89, hlds__make_hlds__add_clause__TVarSet_39);
    }
#line 534 "add_clause.m"
    {
#line 534 "add_clause.m"
      hlds__make_hlds__qual_info__qual_info_get_found_syntax_error_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_89_89, &hlds__make_hlds__add_clause__FoundError_61);
    }
#line 535 "add_clause.m"
    {
#line 535 "add_clause.m"
      hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_p_0((MR_Integer) 0, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_89_89, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_84);
    }
#line 537 "add_clause.m"
    hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__FoundError_61 == (MR_Integer) 1);
#line 538 "add_clause.m"
    if (!(hlds__make_hlds__add_clause__succeeded))
#line 538 "add_clause.m"
      {
#line 538 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_62_62;
#line 538 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_63_63;

#line 538 "add_clause.m"
        hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__StateVarErrors_60)) == (MR_mktag((MR_Integer) 1)));
#line 538 "add_clause.m"
        if (hlds__make_hlds__add_clause__succeeded)
#line 538 "add_clause.m"
          {
#line 538 "add_clause.m"
            hlds__make_hlds__add_clause__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__StateVarErrors_60, (MR_Integer) 0)));
#line 538 "add_clause.m"
            hlds__make_hlds__add_clause__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__StateVarErrors_60, (MR_Integer) 1)));
#line 538 "add_clause.m"
          }
#line 538 "add_clause.m"
      }
#line 547 "add_clause.m"
    if (hlds__make_hlds__add_clause__succeeded)
#line 545 "add_clause.m"
      {
#line 545 "add_clause.m"
        {
#line 545 "add_clause.m"
          *hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_86 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__make_hlds__add_clause__StateVarErrors_60, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_90_90);
        }
#line 546 "add_clause.m"
        {
#line 546 "add_clause.m"
          *hlds__make_hlds__add_clause__Goal_37 = hlds__make_goal__true_goal_0_f_0();
        }
#line 545 "add_clause.m"
        *hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_80 = hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_79;
#line 545 "add_clause.m"
      }
#line 547 "add_clause.m"
    else
#line 548 "add_clause.m"
      {
#line 548 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__ClausesRep_72;
#line 548 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__ExplicitVarTypes_77;
#line 548 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__ItemNumbers_78;

#line 548 "add_clause.m"
        *hlds__make_hlds__add_clause__Goal_37 = hlds__make_hlds__add_clause__Goal0_58;
#line 584 "add_clause.m"
#line 584 "add_clause.m"
        switch (hlds__make_hlds__add_clause__HasForeignClauses_53) {
#line 584 "add_clause.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 584 "add_clause.m"
          case (MR_Integer) 0:
#line 585 "add_clause.m"
            {
#line 585 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__Clause_107;

#line 586 "add_clause.m"
              {
#line 586 "add_clause.m"
                hlds__make_hlds__add_clause__Clause_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 586 "add_clause.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clause_107, 0) = ((MR_Box) (hlds__make_hlds__add_clause__ApplModeIds0_25));
#line 586 "add_clause.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clause_107, 1) = ((MR_Box) (*hlds__make_hlds__add_clause__Goal_37));
#line 586 "add_clause.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clause_107, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 586 "add_clause.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clause_107, 3) = ((MR_Box) (hlds__make_hlds__add_clause__Context_31));
#line 586 "add_clause.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clause_107, 4) = ((MR_Box) (hlds__make_hlds__add_clause__StateVarWarnings_59));
#line 586 "add_clause.m"
              }
#line 588 "add_clause.m"
              {
#line 588 "add_clause.m"
                hlds__hlds_clauses__add_clause_3_p_0(hlds__make_hlds__add_clause__Clause_107, hlds__make_hlds__add_clause__ClausesRep0_50, &hlds__make_hlds__add_clause__ClausesRep_72);
              }
#line 585 "add_clause.m"
            }
#line 584 "add_clause.m"
            break;
#line 584 "add_clause.m"
          case (MR_Integer) 1:
#line 553 "add_clause.m"
            {
#line 553 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__TypeCtorInfo_119_119;
#line 553 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__AnyOrderClauseList_64;
#line 553 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__ForeignModeIds_65;
#line 553 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__ModeIds0_70;
#line 553 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__ModeIds_71;
#line 553 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__V_95_95;

#line 554 "add_clause.m"
              {
#line 554 "add_clause.m"
                hlds__hlds_clauses__get_clause_list_any_order_2_p_0(hlds__make_hlds__add_clause__ClausesRep0_50, &hlds__make_hlds__add_clause__AnyOrderClauseList_64);
              }
#line 4205 "hlds.make_hlds.add_clause.c"
              hlds__make_hlds__add_clause__TypeCtorInfo_119_119 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 555 "add_clause.m"
              {
#line 555 "add_clause.m"
                hlds__make_hlds__add_clause__V_95_95 = mercury__list__filter_map_2_f_0((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, (MR_Word) &hlds__make_hlds__add_clause_scalar_common_1[1], (MR_Word) &hlds__make_hlds__add_clause_scalar_common_4[0], hlds__make_hlds__add_clause__AnyOrderClauseList_64);
              }
#line 555 "add_clause.m"
              {
#line 555 "add_clause.m"
                hlds__make_hlds__add_clause__ForeignModeIds_65 = mercury__list__condense_1_f_0(hlds__make_hlds__add_clause__TypeCtorInfo_119_119, hlds__make_hlds__add_clause__V_95_95);
              }
#line 570 "add_clause.m"
              if ((hlds__make_hlds__add_clause__ApplModeIds0_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 569 "add_clause.m"
                hlds__make_hlds__add_clause__ModeIds0_70 = hlds__make_hlds__add_clause__AllModeIds_26;
#line 570 "add_clause.m"
              else
#line 571 "add_clause.m"
                hlds__make_hlds__add_clause__ModeIds0_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__ApplModeIds0_25, (MR_Integer) 0)));
#line 573 "add_clause.m"
              {
#line 573 "add_clause.m"
                hlds__make_hlds__add_clause__ModeIds_71 = mercury__list__delete_elems_2_f_0(hlds__make_hlds__add_clause__TypeCtorInfo_119_119, hlds__make_hlds__add_clause__ModeIds0_70, hlds__make_hlds__add_clause__ForeignModeIds_65);
              }
#line 577 "add_clause.m"
              if ((hlds__make_hlds__add_clause__ModeIds_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 576 "add_clause.m"
                hlds__make_hlds__add_clause__ClausesRep_72 = hlds__make_hlds__add_clause__ClausesRep0_50;
#line 577 "add_clause.m"
              else
#line 578 "add_clause.m"
                {
#line 578 "add_clause.m"
                  MR_Word hlds__make_hlds__add_clause__ApplicableModeIds_75;
#line 578 "add_clause.m"
                  MR_Word hlds__make_hlds__add_clause__Clause_76;

#line 579 "add_clause.m"
                  {
#line 579 "add_clause.m"
                    hlds__make_hlds__add_clause__ApplicableModeIds_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 579 "add_clause.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__ApplicableModeIds_75, 0) = ((MR_Box) (hlds__make_hlds__add_clause__ModeIds_71));
#line 579 "add_clause.m"
                  }
#line 580 "add_clause.m"
                  {
#line 580 "add_clause.m"
                    hlds__make_hlds__add_clause__Clause_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 580 "add_clause.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clause_76, 0) = ((MR_Box) (hlds__make_hlds__add_clause__ApplicableModeIds_75));
#line 580 "add_clause.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clause_76, 1) = ((MR_Box) (*hlds__make_hlds__add_clause__Goal_37));
#line 580 "add_clause.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clause_76, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 580 "add_clause.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clause_76, 3) = ((MR_Box) (hlds__make_hlds__add_clause__Context_31));
#line 580 "add_clause.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clause_76, 4) = ((MR_Box) (hlds__make_hlds__add_clause__StateVarWarnings_59));
#line 580 "add_clause.m"
                  }
#line 582 "add_clause.m"
                  {
#line 582 "add_clause.m"
                    hlds__hlds_clauses__add_clause_3_p_0(hlds__make_hlds__add_clause__Clause_76, hlds__make_hlds__add_clause__ClausesRep0_50, &hlds__make_hlds__add_clause__ClausesRep_72);
                  }
#line 578 "add_clause.m"
                }
#line 553 "add_clause.m"
            }
#line 584 "add_clause.m"
            break;
#line 584 "add_clause.m"
        }
#line 590 "add_clause.m"
        {
#line 590 "add_clause.m"
          hlds__make_hlds__qual_info__qual_info_get_var_types_2_p_0(*hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_84, &hlds__make_hlds__add_clause__ExplicitVarTypes_77);
        }
#line 591 "add_clause.m"
        {
#line 591 "add_clause.m"
          hlds__hlds_clauses__add_clause_item_number_5_p_0(hlds__make_hlds__add_clause__MaybeSeqNum_32, hlds__make_hlds__add_clause__Context_31, (MR_Integer) 0, hlds__make_hlds__add_clause__ItemNumbers0_51, &hlds__make_hlds__add_clause__ItemNumbers_78);
        }
#line 593 "add_clause.m"
        {
#line 593 "add_clause.m"
          MR_Word base;
#line 593 "add_clause.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 593 "add_clause.m"
          *hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_80 = base;
#line 593 "add_clause.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (*hlds__make_hlds__add_clause__VarSet_38));
#line 593 "add_clause.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__add_clause__ExplicitVarTypes_77));
#line 593 "add_clause.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__add_clause__TVarNameMap_55));
#line 593 "add_clause.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__make_hlds__add_clause__InferredVarTypes_48));
#line 593 "add_clause.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__make_hlds__add_clause__HeadVars_49));
#line 593 "add_clause.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__make_hlds__add_clause__ClausesRep_72));
#line 593 "add_clause.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__make_hlds__add_clause__ItemNumbers_78));
#line 593 "add_clause.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__make_hlds__add_clause__RttiVarMaps_52));
#line 593 "add_clause.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__make_hlds__add_clause__HasForeignClauses_53));
#line 593 "add_clause.m"
        }
#line 548 "add_clause.m"
        *hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_86 = hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_90_90;
#line 548 "add_clause.m"
      }
#line 508 "add_clause.m"
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
#line 4386 "hlds.make_hlds.add_clause.c"
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
#line 4467 "hlds.make_hlds.add_clause.c"
    if (hlds__make_hlds__add_clause__succeeded)
#line 4469 "hlds.make_hlds.add_clause.c"
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
#line 4516 "hlds.make_hlds.add_clause.c"
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
#line 4597 "hlds.make_hlds.add_clause.c"
      }
#line 4599 "hlds.make_hlds.add_clause.c"
    else
#line 4601 "hlds.make_hlds.add_clause.c"
      {
#line 4603 "hlds.make_hlds.add_clause.c"
        MR_Word hlds__make_hlds__add_clause__MaybePredId_122;
#line 4605 "hlds.make_hlds.add_clause.c"
        MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_105_124;
#line 4607 "hlds.make_hlds.add_clause.c"
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
#line 121 "add_clause.m"
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
#line 133 "add_clause.m"
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
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_109_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
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
#line 4782 "hlds.make_hlds.add_clause.c"
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
