/*
** Automatically generated from `add_clause.m'
** by the Mercury compiler,
** version rotd-2015-09-15
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
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
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
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_pred_decl.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
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




#line 168 "hlds.make_hlds.add_clause.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_clause__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

#line 171 "hlds.make_hlds.add_clause.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_clause__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0;

#line 174 "hlds.make_hlds.add_clause.c"
static const MR_DuFunctorDesc hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_0;

#line 177 "hlds.make_hlds.add_clause.c"
static const MR_DuFunctorDesc hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_1;

#line 180 "hlds.make_hlds.add_clause.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_clause__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0;

#line 183 "hlds.make_hlds.add_clause.c"
static const MR_PseudoTypeInfo hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__field_types_mode_annotations_0_2[1];

#line 186 "hlds.make_hlds.add_clause.c"
static const MR_DuFunctorDesc hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_2;

#line 189 "hlds.make_hlds.add_clause.c"
static const MR_DuFunctorDesc hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_3;

#line 192 "hlds.make_hlds.add_clause.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_stag_ordered_mode_annotations_0_0[3];

#line 195 "hlds.make_hlds.add_clause.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_stag_ordered_mode_annotations_0_1[1];

#line 198 "hlds.make_hlds.add_clause.c"
static const MR_DuPtagLayout hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_ptag_ordered_mode_annotations_0[2];

#line 201 "hlds.make_hlds.add_clause.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_name_ordered_mode_annotations_0[4];

#line 204 "hlds.make_hlds.add_clause.c"
static const MR_Integer hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__functor_number_map_mode_annotations_0[4];

#line 207 "hlds.make_hlds.add_clause.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_clause____Unify____mode_annotations_0_0_10001(
#line 210 "hlds.make_hlds.add_clause.c"
  MR_Box hlds__make_hlds__add_clause__wrapper_arg_1,
#line 212 "hlds.make_hlds.add_clause.c"
  MR_Box hlds__make_hlds__add_clause__wrapper_arg_2);

#line 215 "hlds.make_hlds.add_clause.c"
static void MR_CALL 
hlds__make_hlds__add_clause____Compare____mode_annotations_0_0_10001(
#line 218 "hlds.make_hlds.add_clause.c"
  MR_Box * hlds__make_hlds__add_clause__wrapper_arg_1,
#line 220 "hlds.make_hlds.add_clause.c"
  MR_Box hlds__make_hlds__add_clause__wrapper_arg_2,
#line 222 "hlds.make_hlds.add_clause.c"
  MR_Box hlds__make_hlds__add_clause__wrapper_arg_3);

#line 565 "add_clause.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__565__1_1_f_0(
#line 565 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__HeadVar__1_100,
#line 565 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__HeadVar__2_101);

#line 459 "add_clause.m"
static void MR_CALL 
hlds__make_hlds__add_clause____Compare____mode_annotations_0_0(
#line 459 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__HeadVar__1_1,
#line 459 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__HeadVar__2_2,
#line 459 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__HeadVar__3_3);

#line 459 "add_clause.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_clause____Unify____mode_annotations_0_0(
#line 459 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__HeadVar__1_1,
#line 459 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__HeadVar__2_2);

#line 610 "add_clause.m"
static void MR_CALL 
hlds__make_hlds__add_clause__add_clause_transform_20_p_0(
#line 610 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Renaming_21,
#line 610 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__HeadVars_22,
#line 610 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Args0_23,
#line 610 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__ParseTreeBodyGoal_24,
#line 610 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Context_25,
#line 610 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredOrFunc_26,
#line 610 "add_clause.m"
  MR_Integer hlds__make_hlds__add_clause__Arity_27,
#line 610 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__GoalType_28,
#line 610 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__Goal_29,
#line 610 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_0_59,
#line 610 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_60,
#line 610 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__QuantWarnings_31,
#line 610 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__StateVarWarnings_32,
#line 610 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__StateVarErrors_33,
#line 610 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_61,
#line 610 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_62,
#line 610 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_63,
#line 610 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_64,
#line 610 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_65,
#line 610 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_66);

#line 473 "add_clause.m"
static void MR_CALL 
hlds__make_hlds__add_clause__get_mode_annotations_4_p_0(
#line 473 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__HeadVar__1_1,
#line 473 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__HeadVar__2_2,
#line 473 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_0_3,
#line 473 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_4);

#line 449 "add_clause.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_clause__mode_decl_for_pred_info_to_pieces_2_f_0(
#line 449 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredInfo_4,
#line 449 "add_clause.m"
  MR_Integer hlds__make_hlds__add_clause__ProcId_5);

#line 438 "add_clause.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_clause__undeclared_mode_error_8_p_0_1(
#line 438 "add_clause.m"
  MR_Box hlds__make_hlds__add_clause__closure_arg,
#line 438 "add_clause.m"
  MR_Box hlds__make_hlds__add_clause__wrapper_arg_1);

#line 399 "add_clause.m"
static void MR_CALL 
hlds__make_hlds__add_clause__undeclared_mode_error_8_p_0(
#line 399 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__ModeList_9,
#line 399 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__VarSet_10,
#line 399 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredId_11,
#line 399 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredInfo_12,
#line 399 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__ModuleInfo_13,
#line 399 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Context_14,
#line 399 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_31,
#line 399 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_32);

#line 323 "add_clause.m"
static void MR_CALL 
hlds__make_hlds__add_clause__select_applicable_modes_15_p_0(
#line 323 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Args0_16,
#line 323 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__VarSet_17,
#line 323 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredStatus_18,
#line 323 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Context_19,
#line 323 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredId_20,
#line 323 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredInfo_21,
#line 323 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__Args_22,
#line 323 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__ApplProcIds_23,
#line 323 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__AllProcIds_24,
#line 323 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_42,
#line 323 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_43,
#line 323 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_44,
#line 323 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_45,
#line 323 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_46,
#line 323 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_47);

#line 152 "add_clause.m"
static void MR_CALL 
hlds__make_hlds__add_clause__module_add_clause_2_19_p_0(
#line 152 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__ClauseVarSet_20,
#line 152 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredOrFunc_21,
#line 152 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredName_22,
#line 152 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredId_23,
#line 152 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Args_24,
#line 152 "add_clause.m"
  MR_Integer hlds__make_hlds__add_clause__Arity_25,
#line 152 "add_clause.m"
  MR_Integer hlds__make_hlds__add_clause__ArityAdjustment_26,
#line 152 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Body_27,
#line 152 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredStatus_28,
#line 152 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Context_29,
#line 152 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__MaybeSeqNum_30,
#line 152 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__GoalType_31,
#line 152 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__IllegalSVarResult_32,
#line 152 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_80,
#line 152 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_81,
#line 152 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_82,
#line 152 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_83,
#line 152 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_84,
#line 152 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_85);

#line 565 "add_clause.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_clause__clauses_info_add_clause_24_p_0_1(
#line 565 "add_clause.m"
  MR_Box hlds__make_hlds__add_clause__closure_arg,
#line 565 "add_clause.m"
  MR_Box hlds__make_hlds__add_clause__wrapper_arg_1,
#line 565 "add_clause.m"
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



#line 856 "hlds.make_hlds.add_clause.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_clause__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 864 "hlds.make_hlds.add_clause.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_clause__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0
  }
};

#line 872 "hlds.make_hlds.add_clause.c"
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

#line 887 "hlds.make_hlds.add_clause.c"
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

#line 902 "hlds.make_hlds.add_clause.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_clause__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0
  }
};

#line 910 "hlds.make_hlds.add_clause.c"
static const MR_PseudoTypeInfo hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__field_types_mode_annotations_0_2[1] = {
  (MR_PseudoTypeInfo) &hlds__make_hlds__add_clause__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0
};

#line 915 "hlds.make_hlds.add_clause.c"
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

#line 930 "hlds.make_hlds.add_clause.c"
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

#line 945 "hlds.make_hlds.add_clause.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_stag_ordered_mode_annotations_0_0[3] = {
  &hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_0,
  &hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_1,
  &hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_3
};

#line 952 "hlds.make_hlds.add_clause.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_stag_ordered_mode_annotations_0_1[1] = {
  &hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_2
};

#line 957 "hlds.make_hlds.add_clause.c"
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

#line 971 "hlds.make_hlds.add_clause.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_name_ordered_mode_annotations_0[4] = {
  &hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_0,
  &hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_3,
  &hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_2,
  &hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_1
};

#line 979 "hlds.make_hlds.add_clause.c"
static const MR_Integer hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__functor_number_map_mode_annotations_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 987 "hlds.make_hlds.add_clause.c"
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

#line 1004 "hlds.make_hlds.add_clause.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_clause____Unify____mode_annotations_0_0_10001(
#line 1007 "hlds.make_hlds.add_clause.c"
  MR_Box hlds__make_hlds__add_clause__wrapper_arg_1,
#line 1009 "hlds.make_hlds.add_clause.c"
  MR_Box hlds__make_hlds__add_clause__wrapper_arg_2)
#line 1011 "hlds.make_hlds.add_clause.c"
{
#line 1013 "hlds.make_hlds.add_clause.c"
  {
#line 1015 "hlds.make_hlds.add_clause.c"
    MR_bool hlds__make_hlds__add_clause__succeeded;

#line 1018 "hlds.make_hlds.add_clause.c"
    {
#line 1020 "hlds.make_hlds.add_clause.c"
      hlds__make_hlds__add_clause__succeeded = hlds__make_hlds__add_clause____Unify____mode_annotations_0_0(((MR_Word) hlds__make_hlds__add_clause__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_clause__wrapper_arg_2));
    }
#line 1023 "hlds.make_hlds.add_clause.c"
    return hlds__make_hlds__add_clause__succeeded;
#line 1025 "hlds.make_hlds.add_clause.c"
  }
#line 1027 "hlds.make_hlds.add_clause.c"
}

#line 1030 "hlds.make_hlds.add_clause.c"
static void MR_CALL 
hlds__make_hlds__add_clause____Compare____mode_annotations_0_0_10001(
#line 1033 "hlds.make_hlds.add_clause.c"
  MR_Box * hlds__make_hlds__add_clause__wrapper_arg_1,
#line 1035 "hlds.make_hlds.add_clause.c"
  MR_Box hlds__make_hlds__add_clause__wrapper_arg_2,
#line 1037 "hlds.make_hlds.add_clause.c"
  MR_Box hlds__make_hlds__add_clause__wrapper_arg_3)
#line 1039 "hlds.make_hlds.add_clause.c"
{
#line 1041 "hlds.make_hlds.add_clause.c"
  {
#line 1043 "hlds.make_hlds.add_clause.c"
    MR_Word hlds__make_hlds__add_clause__conv0_HeadVar__1_1;

#line 1046 "hlds.make_hlds.add_clause.c"
    {
#line 1048 "hlds.make_hlds.add_clause.c"
      hlds__make_hlds__add_clause____Compare____mode_annotations_0_0(&hlds__make_hlds__add_clause__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__add_clause__wrapper_arg_2), ((MR_Word) hlds__make_hlds__add_clause__wrapper_arg_3));
    }
#line 1051 "hlds.make_hlds.add_clause.c"
    *hlds__make_hlds__add_clause__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__add_clause__conv0_HeadVar__1_1));
#line 1053 "hlds.make_hlds.add_clause.c"
  }
#line 1055 "hlds.make_hlds.add_clause.c"
}

#line 565 "add_clause.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__565__1_1_f_0(
#line 565 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__HeadVar__1_100,
#line 565 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__HeadVar__2_101)
#line 565 "add_clause.m"
{
#line 565 "add_clause.m"
  {
#line 565 "add_clause.m"
    MR_bool hlds__make_hlds__add_clause__succeeded;
#line 565 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__ApplProcIds_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__HeadVar__1_100, (MR_Integer) 0)));
#line 565 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__HeadVar__1_100, (MR_Integer) 2)));
#line 567 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__HeadVar__1_100, (MR_Integer) 1)));
#line 567 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__HeadVar__1_100, (MR_Integer) 3)));
#line 567 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__HeadVar__1_100, (MR_Integer) 4)));
#line 567 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_70_70;

#line 567 "add_clause.m"
    hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__V_102_102)) == (MR_mktag((MR_Integer) 1)));
#line 567 "add_clause.m"
    if (hlds__make_hlds__add_clause__succeeded)
#line 567 "add_clause.m"
      {
#line 567 "add_clause.m"
        hlds__make_hlds__add_clause__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_102_102, (MR_Integer) 0)));
#line 572 "add_clause.m"
        if ((hlds__make_hlds__add_clause__ApplProcIds_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 570 "add_clause.m"
          {
#line 571 "add_clause.m"
            {
#line 571 "add_clause.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_clause", (MR_String) "predicate \140hlds.make_hlds.add_clause.clauses_info_add_clause\'/24", (MR_String) "all_modes foreign_proc");
            }
#line 570 "add_clause.m"
          }
#line 572 "add_clause.m"
        else
#line 573 "add_clause.m"
          *hlds__make_hlds__add_clause__HeadVar__2_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__ApplProcIds_71, (MR_Integer) 0)));
#line 572 "add_clause.m"
        hlds__make_hlds__add_clause__succeeded = MR_TRUE;
#line 567 "add_clause.m"
      }
#line 565 "add_clause.m"
    return hlds__make_hlds__add_clause__succeeded;
#line 565 "add_clause.m"
  }
#line 565 "add_clause.m"
}

#line 459 "add_clause.m"
static void MR_CALL 
hlds__make_hlds__add_clause____Compare____mode_annotations_0_0(
#line 459 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__HeadVar__1_1,
#line 459 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__HeadVar__2_2,
#line 459 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__HeadVar__3_3)
#line 459 "add_clause.m"
{
#line 459 "add_clause.m"
  {
#line 459 "add_clause.m"
    MR_bool hlds__make_hlds__add_clause__succeeded;
#line 459 "add_clause.m"
    MR_Integer hlds__make_hlds__add_clause__CastX_12 = (MR_Integer) hlds__make_hlds__add_clause__HeadVar__2_2;
#line 459 "add_clause.m"
    MR_Integer hlds__make_hlds__add_clause__CastY_13 = (MR_Integer) hlds__make_hlds__add_clause__HeadVar__3_3;

#line 459 "add_clause.m"
    hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__CastX_12 == hlds__make_hlds__add_clause__CastY_13);
#line 459 "add_clause.m"
    if (hlds__make_hlds__add_clause__succeeded)
#line 1142 "hlds.make_hlds.add_clause.c"
      *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 0;
#line 459 "add_clause.m"
    else
#line 459 "add_clause.m"
#line 459 "add_clause.m"
      switch (MR_tag((MR_Word) hlds__make_hlds__add_clause__HeadVar__2_2)) {
#line 459 "add_clause.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 459 "add_clause.m"
        case (MR_Integer) 0:
#line 459 "add_clause.m"
#line 459 "add_clause.m"
          switch (MR_unmkbody(hlds__make_hlds__add_clause__HeadVar__2_2)) {
#line 459 "add_clause.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 459 "add_clause.m"
            case (MR_Integer) 0:
#line 459 "add_clause.m"
#line 459 "add_clause.m"
              switch (MR_tag((MR_Word) hlds__make_hlds__add_clause__HeadVar__3_3)) {
#line 459 "add_clause.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 459 "add_clause.m"
                case (MR_Integer) 0:
#line 459 "add_clause.m"
#line 459 "add_clause.m"
                  switch (MR_unmkbody(hlds__make_hlds__add_clause__HeadVar__3_3)) {
#line 459 "add_clause.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 459 "add_clause.m"
                    case (MR_Integer) 0:
#line 459 "add_clause.m"
                      *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 0;
#line 459 "add_clause.m"
                      break;
#line 459 "add_clause.m"
                    case (MR_Integer) 1:
#line 459 "add_clause.m"
                      *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 1;
#line 459 "add_clause.m"
                      break;
#line 459 "add_clause.m"
                    case (MR_Integer) 2:
#line 459 "add_clause.m"
                      *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 1;
#line 459 "add_clause.m"
                      break;
#line 459 "add_clause.m"
                  }
#line 459 "add_clause.m"
                  break;
#line 459 "add_clause.m"
                case (MR_Integer) 1:
#line 1196 "hlds.make_hlds.add_clause.c"
                  *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 1;
#line 459 "add_clause.m"
                  break;
#line 459 "add_clause.m"
              }
#line 459 "add_clause.m"
              break;
#line 459 "add_clause.m"
            case (MR_Integer) 1:
#line 459 "add_clause.m"
#line 459 "add_clause.m"
              switch (MR_tag((MR_Word) hlds__make_hlds__add_clause__HeadVar__3_3)) {
#line 459 "add_clause.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 459 "add_clause.m"
                case (MR_Integer) 0:
#line 459 "add_clause.m"
#line 459 "add_clause.m"
                  switch (MR_unmkbody(hlds__make_hlds__add_clause__HeadVar__3_3)) {
#line 459 "add_clause.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 459 "add_clause.m"
                    case (MR_Integer) 0:
#line 459 "add_clause.m"
                      *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 2;
#line 459 "add_clause.m"
                      break;
#line 459 "add_clause.m"
                    case (MR_Integer) 1:
#line 459 "add_clause.m"
                      *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 0;
#line 459 "add_clause.m"
                      break;
#line 459 "add_clause.m"
                    case (MR_Integer) 2:
#line 459 "add_clause.m"
                      *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 1;
#line 459 "add_clause.m"
                      break;
#line 459 "add_clause.m"
                  }
#line 459 "add_clause.m"
                  break;
#line 459 "add_clause.m"
                case (MR_Integer) 1:
#line 1242 "hlds.make_hlds.add_clause.c"
                  *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 1;
#line 459 "add_clause.m"
                  break;
#line 459 "add_clause.m"
              }
#line 459 "add_clause.m"
              break;
#line 459 "add_clause.m"
            case (MR_Integer) 2:
#line 459 "add_clause.m"
#line 459 "add_clause.m"
              switch (MR_tag((MR_Word) hlds__make_hlds__add_clause__HeadVar__3_3)) {
#line 459 "add_clause.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 459 "add_clause.m"
                case (MR_Integer) 0:
#line 459 "add_clause.m"
#line 459 "add_clause.m"
                  switch (MR_unmkbody(hlds__make_hlds__add_clause__HeadVar__3_3)) {
#line 459 "add_clause.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 459 "add_clause.m"
                    case (MR_Integer) 0:
#line 459 "add_clause.m"
                      *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 2;
#line 459 "add_clause.m"
                      break;
#line 459 "add_clause.m"
                    case (MR_Integer) 1:
#line 459 "add_clause.m"
                      *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 2;
#line 459 "add_clause.m"
                      break;
#line 459 "add_clause.m"
                    case (MR_Integer) 2:
#line 459 "add_clause.m"
                      *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 0;
#line 459 "add_clause.m"
                      break;
#line 459 "add_clause.m"
                  }
#line 459 "add_clause.m"
                  break;
#line 459 "add_clause.m"
                case (MR_Integer) 1:
#line 1288 "hlds.make_hlds.add_clause.c"
                  *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 2;
#line 459 "add_clause.m"
                  break;
#line 459 "add_clause.m"
              }
#line 459 "add_clause.m"
              break;
#line 459 "add_clause.m"
          }
#line 459 "add_clause.m"
          break;
#line 459 "add_clause.m"
        case (MR_Integer) 1:
#line 459 "add_clause.m"
          {
#line 459 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__HeadVar__2_2, (MR_Integer) 0)));

#line 459 "add_clause.m"
#line 459 "add_clause.m"
            switch (MR_tag((MR_Word) hlds__make_hlds__add_clause__HeadVar__3_3)) {
#line 459 "add_clause.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 459 "add_clause.m"
              case (MR_Integer) 0:
#line 459 "add_clause.m"
#line 459 "add_clause.m"
                switch (MR_unmkbody(hlds__make_hlds__add_clause__HeadVar__3_3)) {
#line 459 "add_clause.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 459 "add_clause.m"
                  case (MR_Integer) 0:
#line 1321 "hlds.make_hlds.add_clause.c"
                    *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 2;
#line 459 "add_clause.m"
                    break;
#line 459 "add_clause.m"
                  case (MR_Integer) 1:
#line 1327 "hlds.make_hlds.add_clause.c"
                    *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 2;
#line 459 "add_clause.m"
                    break;
#line 459 "add_clause.m"
                  case (MR_Integer) 2:
#line 1333 "hlds.make_hlds.add_clause.c"
                    *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 1;
#line 459 "add_clause.m"
                    break;
#line 459 "add_clause.m"
                }
#line 459 "add_clause.m"
                break;
#line 459 "add_clause.m"
              case (MR_Integer) 1:
#line 459 "add_clause.m"
                {
#line 459 "add_clause.m"
                  MR_Word hlds__make_hlds__add_clause__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__HeadVar__3_3, (MR_Integer) 0)));

#line 459 "add_clause.m"
                  {
#line 459 "add_clause.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__add_clause_scalar_common_1[4], hlds__make_hlds__add_clause__HeadVar__1_1, ((MR_Box) (hlds__make_hlds__add_clause__V_15_15)), ((MR_Box) (hlds__make_hlds__add_clause__V_9_9)));
#line 459 "add_clause.m"
                    return;
                  }
#line 459 "add_clause.m"
                }
#line 459 "add_clause.m"
                break;
#line 459 "add_clause.m"
            }
#line 459 "add_clause.m"
          }
#line 459 "add_clause.m"
          break;
#line 459 "add_clause.m"
      }
#line 459 "add_clause.m"
  }
#line 459 "add_clause.m"
}

#line 459 "add_clause.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_clause____Unify____mode_annotations_0_0(
#line 459 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__HeadVar__1_1,
#line 459 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__HeadVar__2_2)
#line 459 "add_clause.m"
{
#line 459 "add_clause.m"
  {
#line 459 "add_clause.m"
    MR_bool hlds__make_hlds__add_clause__succeeded;
#line 459 "add_clause.m"
    MR_Integer hlds__make_hlds__add_clause__CastX_11 = (MR_Integer) hlds__make_hlds__add_clause__HeadVar__1_1;
#line 459 "add_clause.m"
    MR_Integer hlds__make_hlds__add_clause__CastY_12 = (MR_Integer) hlds__make_hlds__add_clause__HeadVar__2_2;

#line 459 "add_clause.m"
    hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__CastX_11 == hlds__make_hlds__add_clause__CastY_12);
#line 459 "add_clause.m"
    if (hlds__make_hlds__add_clause__succeeded)
#line 459 "add_clause.m"
      hlds__make_hlds__add_clause__succeeded = MR_TRUE;
#line 459 "add_clause.m"
    else
#line 459 "add_clause.m"
#line 459 "add_clause.m"
      switch (MR_tag((MR_Word) hlds__make_hlds__add_clause__HeadVar__1_1)) {
#line 459 "add_clause.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 459 "add_clause.m"
        case (MR_Integer) 0:
#line 459 "add_clause.m"
#line 459 "add_clause.m"
          switch (MR_unmkbody(hlds__make_hlds__add_clause__HeadVar__1_1)) {
#line 459 "add_clause.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 459 "add_clause.m"
            case (MR_Integer) 0:
#line 459 "add_clause.m"
              {
#line 459 "add_clause.m"
                MR_Integer hlds__make_hlds__add_clause__CastX_3 = (MR_Integer) hlds__make_hlds__add_clause__HeadVar__1_1;
#line 459 "add_clause.m"
                MR_Integer hlds__make_hlds__add_clause__CastY_4 = (MR_Integer) hlds__make_hlds__add_clause__HeadVar__2_2;

#line 459 "add_clause.m"
                hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__CastY_4 == hlds__make_hlds__add_clause__CastX_3);
#line 459 "add_clause.m"
              }
#line 459 "add_clause.m"
              break;
#line 459 "add_clause.m"
            case (MR_Integer) 1:
#line 459 "add_clause.m"
              {
#line 459 "add_clause.m"
                MR_Integer hlds__make_hlds__add_clause__CastX_5 = (MR_Integer) hlds__make_hlds__add_clause__HeadVar__1_1;
#line 459 "add_clause.m"
                MR_Integer hlds__make_hlds__add_clause__CastY_6 = (MR_Integer) hlds__make_hlds__add_clause__HeadVar__2_2;

#line 459 "add_clause.m"
                hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__CastY_6 == hlds__make_hlds__add_clause__CastX_5);
#line 459 "add_clause.m"
              }
#line 459 "add_clause.m"
              break;
#line 459 "add_clause.m"
            case (MR_Integer) 2:
#line 459 "add_clause.m"
              {
#line 459 "add_clause.m"
                MR_Integer hlds__make_hlds__add_clause__CastX_9 = (MR_Integer) hlds__make_hlds__add_clause__HeadVar__1_1;
#line 459 "add_clause.m"
                MR_Integer hlds__make_hlds__add_clause__CastY_10 = (MR_Integer) hlds__make_hlds__add_clause__HeadVar__2_2;

#line 459 "add_clause.m"
                hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__CastY_10 == hlds__make_hlds__add_clause__CastX_9);
#line 459 "add_clause.m"
              }
#line 459 "add_clause.m"
              break;
#line 459 "add_clause.m"
          }
#line 459 "add_clause.m"
          break;
#line 459 "add_clause.m"
        case (MR_Integer) 1:
#line 459 "add_clause.m"
          {
#line 459 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__TypeInfo_13_13;
#line 459 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__HeadVar__1_1, (MR_Integer) 0)));
#line 459 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_8_8;

#line 459 "add_clause.m"
            hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 459 "add_clause.m"
            if (hlds__make_hlds__add_clause__succeeded)
#line 459 "add_clause.m"
              {
#line 459 "add_clause.m"
                hlds__make_hlds__add_clause__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__HeadVar__2_2, (MR_Integer) 0)));
#line 1478 "hlds.make_hlds.add_clause.c"
                hlds__make_hlds__add_clause__TypeInfo_13_13 = (MR_Word) &hlds__make_hlds__add_clause_scalar_common_1[4];
#line 1480 "hlds.make_hlds.add_clause.c"
                {
#line 1482 "hlds.make_hlds.add_clause.c"
                  return hlds__make_hlds__add_clause__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__add_clause__TypeInfo_13_13, ((MR_Box) (hlds__make_hlds__add_clause__V_7_7)), ((MR_Box) (hlds__make_hlds__add_clause__V_8_8)));
                }
#line 459 "add_clause.m"
              }
#line 459 "add_clause.m"
          }
#line 459 "add_clause.m"
          break;
#line 459 "add_clause.m"
      }
#line 459 "add_clause.m"
    return hlds__make_hlds__add_clause__succeeded;
#line 459 "add_clause.m"
  }
#line 459 "add_clause.m"
}

#line 610 "add_clause.m"
static void MR_CALL 
hlds__make_hlds__add_clause__add_clause_transform_20_p_0(
#line 610 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Renaming_21,
#line 610 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__HeadVars_22,
#line 610 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Args0_23,
#line 610 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__ParseTreeBodyGoal_24,
#line 610 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Context_25,
#line 610 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredOrFunc_26,
#line 610 "add_clause.m"
  MR_Integer hlds__make_hlds__add_clause__Arity_27,
#line 610 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__GoalType_28,
#line 610 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__Goal_29,
#line 610 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_0_59,
#line 610 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_60,
#line 610 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__QuantWarnings_31,
#line 610 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__StateVarWarnings_32,
#line 610 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__StateVarErrors_33,
#line 610 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_61,
#line 610 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_62,
#line 610 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_63,
#line 610 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_64,
#line 610 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_65,
#line 610 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_66)
#line 610 "add_clause.m"
{
#line 623 "add_clause.m"
  {
#line 623 "add_clause.m"
    MR_bool hlds__make_hlds__add_clause__succeeded;
#line 623 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__HeadVarList_40;
#line 623 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__Args1_41;
#line 623 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__Args_42;
#line 623 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__FinalSVarMap_43;
#line 623 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__InitialSVarState_44;
#line 623 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__HeadGoal_46;
#line 623 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__BodyGoal_50;
#line 623 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__FinalSVarState_53;
#line 623 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__Goal0_54;
#line 623 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__VarTypes0_55;
#line 623 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__EmptyRttiVarmaps_56;
#line 623 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__VarTypes_57;
#line 623 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_68_68;
#line 623 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_SVarStore_70_70;
#line 623 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_71_71;
#line 623 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_SVarState_72_72;
#line 623 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_SVarStore_73_73;
#line 623 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_74_74;
#line 623 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_75_75;
#line 623 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_76_76;
#line 623 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_77_77;
#line 623 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_SVarStore_84_84;
#line 623 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_85_85;
#line 623 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_87_87;
#line 623 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_126_126;
#line 623 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_127_127;
#line 628 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_45_45;
#line 694 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_58_58;

#line 623 "add_clause.m"
    {
#line 623 "add_clause.m"
      hlds__make_hlds__add_clause__HeadVarList_40 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) &hlds__make_hlds__add_clause_scalar_common_1[3], hlds__make_hlds__add_clause__HeadVars_22);
    }
#line 624 "add_clause.m"
    {
#line 624 "add_clause.m"
      parse_tree__prog_rename__rename_vars_in_term_list_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__add_clause__Renaming_21, hlds__make_hlds__add_clause__Args0_23, &hlds__make_hlds__add_clause__Args1_41);
    }
#line 625 "add_clause.m"
    {
#line 625 "add_clause.m"
      hlds__make_hlds__state_var__svar_prepare_for_clause_head_9_p_0(hlds__make_hlds__add_clause__Args1_41, &hlds__make_hlds__add_clause__Args_42, hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_0_59, &hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_68_68, &hlds__make_hlds__add_clause__FinalSVarMap_43, &hlds__make_hlds__add_clause__InitialSVarState_44, &hlds__make_hlds__add_clause__STATE_VARIABLE_SVarStore_70_70, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_65, &hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_71_71);
    }
#line 628 "add_clause.m"
    hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__GoalType_28)) == (MR_mktag((MR_Integer) 1)));
#line 628 "add_clause.m"
    if (hlds__make_hlds__add_clause__succeeded)
#line 628 "add_clause.m"
      {
#line 628 "add_clause.m"
        hlds__make_hlds__add_clause__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__GoalType_28, (MR_Integer) 0)));
#line 629 "add_clause.m"
        {
#line 629 "add_clause.m"
          hlds__make_hlds__add_clause__HeadGoal_46 = hlds__make_goal__true_goal_0_f_0();
        }
#line 629 "add_clause.m"
        hlds__make_hlds__add_clause__STATE_VARIABLE_SVarStore_73_73 = hlds__make_hlds__add_clause__STATE_VARIABLE_SVarStore_70_70;
#line 629 "add_clause.m"
        hlds__make_hlds__add_clause__STATE_VARIABLE_SVarState_72_72 = hlds__make_hlds__add_clause__InitialSVarState_44;
#line 629 "add_clause.m"
        hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_77_77 = hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_71_71;
#line 629 "add_clause.m"
        hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_76_76 = hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_63;
#line 629 "add_clause.m"
        hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_75_75 = hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_61;
#line 629 "add_clause.m"
        hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_74_74 = hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_68_68;
#line 628 "add_clause.m"
      }
#line 628 "add_clause.m"
    else
#line 631 "add_clause.m"
      {
#line 631 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__ArgContext_47;
#line 631 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__HeadGoal0_48;
#line 631 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__HeadGoal1_49;

#line 631 "add_clause.m"
        {
#line 631 "add_clause.m"
          hlds__make_hlds__add_clause__ArgContext_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 631 "add_clause.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__ArgContext_47, 0) = ((MR_Box) (hlds__make_hlds__add_clause__PredOrFunc_26));
#line 631 "add_clause.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__ArgContext_47, 1) = ((MR_Box) (hlds__make_hlds__add_clause__Arity_27));
#line 631 "add_clause.m"
        }
#line 632 "add_clause.m"
        {
#line 632 "add_clause.m"
          hlds__make_hlds__add_clause__HeadGoal0_48 = hlds__make_goal__true_goal_0_f_0();
        }
#line 633 "add_clause.m"
        {
#line 633 "add_clause.m"
          hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_p_0(hlds__make_hlds__add_clause__HeadVarList_40, hlds__make_hlds__add_clause__Args_42, hlds__make_hlds__add_clause__Context_25, hlds__make_hlds__add_clause__ArgContext_47, hlds__make_hlds__add_clause__HeadGoal0_48, &hlds__make_hlds__add_clause__HeadGoal1_49, hlds__make_hlds__add_clause__InitialSVarState_44, &hlds__make_hlds__add_clause__STATE_VARIABLE_SVarState_72_72, hlds__make_hlds__add_clause__STATE_VARIABLE_SVarStore_70_70, &hlds__make_hlds__add_clause__STATE_VARIABLE_SVarStore_73_73, hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_68_68, &hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_74_74, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_75_75, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_63, &hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_76_76, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_71_71, &hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_77_77);
        }
#line 648 "add_clause.m"
        {
#line 648 "add_clause.m"
          hlds__goal_util__attach_features_to_all_goals_4_p_1((MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[69]), (MR_Integer) 1, hlds__make_hlds__add_clause__HeadGoal1_49, &hlds__make_hlds__add_clause__HeadGoal_46);
        }
#line 631 "add_clause.m"
      }
#line 651 "add_clause.m"
    {
#line 651 "add_clause.m"
      hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0((MR_Integer) 0, hlds__make_hlds__add_clause__ParseTreeBodyGoal_24, hlds__make_hlds__add_clause__Renaming_21, &hlds__make_hlds__add_clause__BodyGoal_50, hlds__make_hlds__add_clause__STATE_VARIABLE_SVarState_72_72, &hlds__make_hlds__add_clause__FinalSVarState_53, hlds__make_hlds__add_clause__STATE_VARIABLE_SVarStore_73_73, &hlds__make_hlds__add_clause__STATE_VARIABLE_SVarStore_84_84, hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_74_74, &hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_85_85, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_75_75, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_62, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_76_76, &hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_87_87, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_77_77, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_66);
    }
#line 685 "add_clause.m"
    {
#line 685 "add_clause.m"
      hlds__make_hlds__add_clause__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 685 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_127_127, 0) = ((MR_Box) (hlds__make_hlds__add_clause__BodyGoal_50));
#line 685 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_127_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 685 "add_clause.m"
    }
#line 685 "add_clause.m"
    {
#line 685 "add_clause.m"
      hlds__make_hlds__add_clause__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 685 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_126_126, 0) = ((MR_Box) (hlds__make_hlds__add_clause__HeadGoal_46));
#line 685 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_126_126, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_127_127));
#line 685 "add_clause.m"
    }
#line 684 "add_clause.m"
    {
#line 684 "add_clause.m"
      hlds__make_hlds__state_var__svar_finish_clause_body_9_p_0(hlds__make_hlds__add_clause__Context_25, hlds__make_hlds__add_clause__FinalSVarMap_43, hlds__make_hlds__add_clause__V_126_126, &hlds__make_hlds__add_clause__Goal0_54, hlds__make_hlds__add_clause__InitialSVarState_44, hlds__make_hlds__add_clause__FinalSVarState_53, hlds__make_hlds__add_clause__STATE_VARIABLE_SVarStore_84_84, hlds__make_hlds__add_clause__StateVarWarnings_32, hlds__make_hlds__add_clause__StateVarErrors_33);
    }
#line 688 "add_clause.m"
    {
#line 688 "add_clause.m"
      hlds__make_hlds__qual_info__qual_info_get_var_types_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_87_87, &hlds__make_hlds__add_clause__VarTypes0_55);
    }
#line 691 "add_clause.m"
    {
#line 691 "add_clause.m"
      hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&hlds__make_hlds__add_clause__EmptyRttiVarmaps_56);
    }
#line 694 "add_clause.m"
    {
#line 694 "add_clause.m"
      hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 0, hlds__make_hlds__add_clause__HeadVarList_40, hlds__make_hlds__add_clause__QuantWarnings_31, hlds__make_hlds__add_clause__Goal0_54, hlds__make_hlds__add_clause__Goal_29, hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_85_85, hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_60, hlds__make_hlds__add_clause__VarTypes0_55, &hlds__make_hlds__add_clause__VarTypes_57, hlds__make_hlds__add_clause__EmptyRttiVarmaps_56, &hlds__make_hlds__add_clause__V_58_58);
    }
#line 698 "add_clause.m"
    {
#line 698 "add_clause.m"
      hlds__make_hlds__qual_info__qual_info_set_var_types_3_p_0(hlds__make_hlds__add_clause__VarTypes_57, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_87_87, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_64);
#line 698 "add_clause.m"
      return;
    }
#line 623 "add_clause.m"
  }
#line 610 "add_clause.m"
}

#line 473 "add_clause.m"
static void MR_CALL 
hlds__make_hlds__add_clause__get_mode_annotations_4_p_0(
#line 473 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__HeadVar__1_1,
#line 473 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__HeadVar__2_2,
#line 473 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_0_3,
#line 473 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_4)
#line 473 "add_clause.m"
{
#line 476 "add_clause.m"
  {
#line 476 "add_clause.m"
    MR_bool hlds__make_hlds__add_clause__succeeded;

#line 476 "add_clause.m"
    if ((hlds__make_hlds__add_clause__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 476 "add_clause.m"
      {
#line 476 "add_clause.m"
        *hlds__make_hlds__add_clause__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 476 "add_clause.m"
        *hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_4 = hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_0_3;
#line 476 "add_clause.m"
      }
#line 476 "add_clause.m"
    else
#line 477 "add_clause.m"
      {
#line 477 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__Arg0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__HeadVar__1_1, (MR_Integer) 0)));
#line 477 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__Args0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__HeadVar__1_1, (MR_Integer) 1)));
#line 477 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__Arg_10;
#line 477 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__Args_11;
#line 477 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__MaybeAnnotation_13;
#line 477 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_16_16;
#line 505 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__Arg1_21;
#line 505 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__Mode_24;
#line 500 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__TypeCtorInfo_18_32;
#line 500 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__TypeCtorInfo_19_33;
#line 500 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__ModeTerm_22;
#line 500 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_25_25;
#line 500 "add_clause.m"
        MR_String hlds__make_hlds__add_clause__V_26_26;
#line 500 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_27_27;
#line 500 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_28_28;
#line 500 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_29_29;
#line 500 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_30_30;
#line 500 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_31_31;
#line 500 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_23_23;

#line 500 "add_clause.m"
        hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__Arg0_8)) == (MR_mktag((MR_Integer) 0)));
#line 500 "add_clause.m"
        if (hlds__make_hlds__add_clause__succeeded)
#line 500 "add_clause.m"
          {
#line 500 "add_clause.m"
            hlds__make_hlds__add_clause__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Arg0_8, (MR_Integer) 0)));
#line 500 "add_clause.m"
            hlds__make_hlds__add_clause__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Arg0_8, (MR_Integer) 1)));
#line 500 "add_clause.m"
            hlds__make_hlds__add_clause__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Arg0_8, (MR_Integer) 2)));
#line 500 "add_clause.m"
            hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__V_25_25)) == (MR_mktag((MR_Integer) 0)));
#line 500 "add_clause.m"
            if (hlds__make_hlds__add_clause__succeeded)
#line 500 "add_clause.m"
              {
#line 500 "add_clause.m"
                hlds__make_hlds__add_clause__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__V_25_25, (MR_Integer) 0)));
#line 500 "add_clause.m"
                hlds__make_hlds__add_clause__succeeded = (strcmp(hlds__make_hlds__add_clause__V_26_26, (MR_String) "::") == 0);
#line 500 "add_clause.m"
                if (hlds__make_hlds__add_clause__succeeded)
#line 500 "add_clause.m"
                  {
#line 500 "add_clause.m"
                    hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__V_27_27)) == (MR_mktag((MR_Integer) 1)));
#line 500 "add_clause.m"
                    if (hlds__make_hlds__add_clause__succeeded)
#line 500 "add_clause.m"
                      {
#line 500 "add_clause.m"
                        hlds__make_hlds__add_clause__Arg1_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_27_27, (MR_Integer) 0)));
#line 500 "add_clause.m"
                        hlds__make_hlds__add_clause__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_27_27, (MR_Integer) 1)));
#line 500 "add_clause.m"
                        hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 500 "add_clause.m"
                        if (hlds__make_hlds__add_clause__succeeded)
#line 500 "add_clause.m"
                          {
#line 500 "add_clause.m"
                            hlds__make_hlds__add_clause__ModeTerm_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_28_28, (MR_Integer) 0)));
#line 500 "add_clause.m"
                            hlds__make_hlds__add_clause__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_28_28, (MR_Integer) 1)));
#line 500 "add_clause.m"
                            hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 500 "add_clause.m"
                            if (hlds__make_hlds__add_clause__succeeded)
#line 500 "add_clause.m"
                              {
#line 501 "add_clause.m"
                                hlds__make_hlds__add_clause__V_30_30 = (MR_Integer) 0;
#line 1868 "hlds.make_hlds.add_clause.c"
                                hlds__make_hlds__add_clause__TypeCtorInfo_18_32 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1870 "hlds.make_hlds.add_clause.c"
                                hlds__make_hlds__add_clause__TypeCtorInfo_19_33 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 501 "add_clause.m"
                                {
#line 501 "add_clause.m"
                                  hlds__make_hlds__add_clause__V_31_31 = mercury__term__coerce_1_f_0(hlds__make_hlds__add_clause__TypeCtorInfo_18_32, hlds__make_hlds__add_clause__TypeCtorInfo_19_33, hlds__make_hlds__add_clause__ModeTerm_22);
                                }
#line 501 "add_clause.m"
                                {
#line 501 "add_clause.m"
                                  hlds__make_hlds__add_clause__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(hlds__make_hlds__add_clause__V_30_30, hlds__make_hlds__add_clause__V_31_31, &hlds__make_hlds__add_clause__Mode_24);
                                }
#line 500 "add_clause.m"
                              }
#line 500 "add_clause.m"
                          }
#line 500 "add_clause.m"
                      }
#line 500 "add_clause.m"
                  }
#line 500 "add_clause.m"
              }
#line 500 "add_clause.m"
          }
#line 505 "add_clause.m"
        if (hlds__make_hlds__add_clause__succeeded)
#line 503 "add_clause.m"
          {
#line 503 "add_clause.m"
            hlds__make_hlds__add_clause__Arg_10 = hlds__make_hlds__add_clause__Arg1_21;
#line 504 "add_clause.m"
            {
#line 504 "add_clause.m"
              hlds__make_hlds__add_clause__MaybeAnnotation_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 504 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__MaybeAnnotation_13, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Mode_24));
#line 504 "add_clause.m"
            }
#line 503 "add_clause.m"
          }
#line 505 "add_clause.m"
        else
#line 506 "add_clause.m"
          {
#line 506 "add_clause.m"
            hlds__make_hlds__add_clause__Arg_10 = hlds__make_hlds__add_clause__Arg0_8;
#line 507 "add_clause.m"
            hlds__make_hlds__add_clause__MaybeAnnotation_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 506 "add_clause.m"
          }
#line 485 "add_clause.m"
#line 485 "add_clause.m"
        switch (MR_tag((MR_Word) hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_0_3)) {
#line 485 "add_clause.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 485 "add_clause.m"
          case (MR_Integer) 0:
#line 485 "add_clause.m"
#line 485 "add_clause.m"
            switch (MR_unmkbody(hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_0_3)) {
#line 485 "add_clause.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 485 "add_clause.m"
              case (MR_Integer) 0:
#line 485 "add_clause.m"
                if ((hlds__make_hlds__add_clause__MaybeAnnotation_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 485 "add_clause.m"
                  hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 485 "add_clause.m"
                else
#line 486 "add_clause.m"
                  {
#line 486 "add_clause.m"
                    MR_Word hlds__make_hlds__add_clause__Mode_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__MaybeAnnotation_13, (MR_Integer) 0)));
#line 486 "add_clause.m"
                    MR_Word hlds__make_hlds__add_clause__V_35_35;

#line 486 "add_clause.m"
                    {
#line 486 "add_clause.m"
                      hlds__make_hlds__add_clause__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 486 "add_clause.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_35_35, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Mode_34));
#line 486 "add_clause.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 486 "add_clause.m"
                    }
#line 486 "add_clause.m"
                    {
#line 486 "add_clause.m"
                      hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 486 "add_clause.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_16_16, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_35_35));
#line 486 "add_clause.m"
                    }
#line 486 "add_clause.m"
                  }
#line 485 "add_clause.m"
                break;
#line 485 "add_clause.m"
              case (MR_Integer) 1:
#line 485 "add_clause.m"
                if ((hlds__make_hlds__add_clause__MaybeAnnotation_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 489 "add_clause.m"
                  hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 485 "add_clause.m"
                else
#line 490 "add_clause.m"
                  hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 485 "add_clause.m"
                break;
#line 485 "add_clause.m"
              case (MR_Integer) 2:
#line 491 "add_clause.m"
                hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 485 "add_clause.m"
                break;
#line 485 "add_clause.m"
            }
#line 485 "add_clause.m"
            break;
#line 485 "add_clause.m"
          case (MR_Integer) 1:
#line 485 "add_clause.m"
            {
#line 485 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_0_3, (MR_Integer) 0)));

#line 485 "add_clause.m"
              if ((hlds__make_hlds__add_clause__MaybeAnnotation_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 487 "add_clause.m"
                hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 485 "add_clause.m"
              else
#line 488 "add_clause.m"
                {
#line 488 "add_clause.m"
                  MR_Word hlds__make_hlds__add_clause__Mode_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__MaybeAnnotation_13, (MR_Integer) 0)));
#line 488 "add_clause.m"
                  MR_Word hlds__make_hlds__add_clause__V_41_41;
#line 488 "add_clause.m"
                  MR_Word hlds__make_hlds__add_clause__V_42_42;

#line 488 "add_clause.m"
                  {
#line 488 "add_clause.m"
                    hlds__make_hlds__add_clause__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 488 "add_clause.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_42_42, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Mode_39));
#line 488 "add_clause.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 488 "add_clause.m"
                  }
#line 488 "add_clause.m"
                  {
#line 488 "add_clause.m"
                    hlds__make_hlds__add_clause__V_41_41 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__make_hlds__add_clause__V_47_47, hlds__make_hlds__add_clause__V_42_42);
                  }
#line 488 "add_clause.m"
                  {
#line 488 "add_clause.m"
                    hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 488 "add_clause.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_16_16, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_41_41));
#line 488 "add_clause.m"
                  }
#line 488 "add_clause.m"
                }
#line 485 "add_clause.m"
            }
#line 485 "add_clause.m"
            break;
#line 485 "add_clause.m"
        }
#line 480 "add_clause.m"
        {
#line 480 "add_clause.m"
          hlds__make_hlds__add_clause__get_mode_annotations_4_p_0(hlds__make_hlds__add_clause__Args0_9, &hlds__make_hlds__add_clause__Args_11, hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_16_16, hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_4);
        }
#line 477 "add_clause.m"
        {
#line 477 "add_clause.m"
          MR_Word base;
#line 477 "add_clause.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 477 "add_clause.m"
          *hlds__make_hlds__add_clause__HeadVar__2_2 = base;
#line 477 "add_clause.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Arg_10));
#line 477 "add_clause.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_clause__Args_11));
#line 477 "add_clause.m"
        }
#line 477 "add_clause.m"
      }
#line 476 "add_clause.m"
  }
#line 473 "add_clause.m"
}

#line 449 "add_clause.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_clause__mode_decl_for_pred_info_to_pieces_2_f_0(
#line 449 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredInfo_4,
#line 449 "add_clause.m"
  MR_Integer hlds__make_hlds__add_clause__ProcId_5)
#line 449 "add_clause.m"
{
#line 452 "add_clause.m"
  {
#line 452 "add_clause.m"
    MR_bool hlds__make_hlds__add_clause__succeeded;
#line 452 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__HeadVar__3_3;
#line 452 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_8_8;
#line 452 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_9_9;
#line 452 "add_clause.m"
    MR_String hlds__make_hlds__add_clause__V_10_10;

#line 453 "add_clause.m"
    {
#line 453 "add_clause.m"
      hlds__make_hlds__add_clause__V_10_10 = check_hlds__mode_errors__mode_decl_to_string_2_f_0(hlds__make_hlds__add_clause__ProcId_5, hlds__make_hlds__add_clause__PredInfo_4);
    }
#line 453 "add_clause.m"
    {
#line 453 "add_clause.m"
      hlds__make_hlds__add_clause__V_9_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 453 "add_clause.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_9_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 453 "add_clause.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_9_9, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_10_10));
#line 453 "add_clause.m"
    }
#line 453 "add_clause.m"
    {
#line 453 "add_clause.m"
      hlds__make_hlds__add_clause__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 453 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_8_8, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_9_9));
#line 453 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_8_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[68])));
#line 453 "add_clause.m"
    }
#line 453 "add_clause.m"
    {
#line 453 "add_clause.m"
      hlds__make_hlds__add_clause__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 453 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__HeadVar__3_3, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[66])));
#line 453 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__HeadVar__3_3, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_8_8));
#line 453 "add_clause.m"
    }
#line 452 "add_clause.m"
    return hlds__make_hlds__add_clause__HeadVar__3_3;
#line 452 "add_clause.m"
  }
#line 449 "add_clause.m"
}

#line 438 "add_clause.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_clause__undeclared_mode_error_8_p_0_1(
#line 438 "add_clause.m"
  MR_Box hlds__make_hlds__add_clause__closure_arg,
#line 438 "add_clause.m"
  MR_Box hlds__make_hlds__add_clause__wrapper_arg_1)
#line 438 "add_clause.m"
{
#line 438 "add_clause.m"
  {
#line 438 "add_clause.m"
    MR_Box hlds__make_hlds__add_clause__wrapper_arg_2;
#line 438 "add_clause.m"
    MR_Box hlds__make_hlds__add_clause__closure = hlds__make_hlds__add_clause__closure_arg;
#line 438 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__conv0_HeadVar__3_3;

#line 438 "add_clause.m"
    {
#line 438 "add_clause.m"
      hlds__make_hlds__add_clause__conv0_HeadVar__3_3 = hlds__make_hlds__add_clause__mode_decl_for_pred_info_to_pieces_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__closure, (MR_Integer) 3))), ((MR_Integer) hlds__make_hlds__add_clause__wrapper_arg_1));
    }
#line 438 "add_clause.m"
    hlds__make_hlds__add_clause__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_clause__conv0_HeadVar__3_3));
#line 438 "add_clause.m"
    return hlds__make_hlds__add_clause__wrapper_arg_2;
#line 438 "add_clause.m"
  }
#line 438 "add_clause.m"
}

#line 399 "add_clause.m"
static void MR_CALL 
hlds__make_hlds__add_clause__undeclared_mode_error_8_p_0(
#line 399 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__ModeList_9,
#line 399 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__VarSet_10,
#line 399 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredId_11,
#line 399 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredInfo_12,
#line 399 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__ModuleInfo_13,
#line 399 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Context_14,
#line 399 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_31,
#line 399 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_32)
#line 399 "add_clause.m"
{
#line 404 "add_clause.m"
  {
#line 404 "add_clause.m"
    MR_bool hlds__make_hlds__add_clause__succeeded;
#line 404 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__TypeCtorInfo_120_120;
#line 404 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__PredIdPieces_16;
#line 404 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__StrippedModeList_17;
#line 404 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__PredOrFunc_18;
#line 404 "add_clause.m"
    MR_String hlds__make_hlds__add_clause__Name_19;
#line 404 "add_clause.m"
    MR_String hlds__make_hlds__add_clause__SubDeclStr_21;
#line 404 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__MainPieces_22;
#line 404 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__ProcIds_23;
#line 404 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__VerbosePieces_24;
#line 404 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__Msg_29;
#line 404 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__Spec_30;
#line 404 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_35_35;
#line 404 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_36_36;
#line 404 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_41_41;
#line 404 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_42_42;
#line 404 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_45_45;
#line 404 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_47_47;
#line 404 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_50_50;
#line 404 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_51_51;
#line 404 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_107_107;
#line 404 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_108_108;
#line 404 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_109_109;
#line 404 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_110_110;
#line 404 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_115_115;

#line 405 "add_clause.m"
    {
#line 405 "add_clause.m"
      hlds__make_hlds__add_clause__PredIdPieces_16 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(hlds__make_hlds__add_clause__ModuleInfo_13, (MR_Integer) 1, hlds__make_hlds__add_clause__PredId_11);
    }
#line 407 "add_clause.m"
    {
#line 407 "add_clause.m"
      parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_p_0(hlds__make_hlds__add_clause__ModeList_9, &hlds__make_hlds__add_clause__StrippedModeList_17);
    }
#line 408 "add_clause.m"
    {
#line 408 "add_clause.m"
      hlds__make_hlds__add_clause__PredOrFunc_18 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__make_hlds__add_clause__PredInfo_12);
    }
#line 409 "add_clause.m"
    {
#line 409 "add_clause.m"
      hlds__make_hlds__add_clause__Name_19 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__make_hlds__add_clause__PredInfo_12);
    }
#line 412 "add_clause.m"
    {
#line 412 "add_clause.m"
      hlds__make_hlds__add_clause__V_35_35 = mercury__varset__coerce_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, hlds__make_hlds__add_clause__VarSet_10);
    }
#line 412 "add_clause.m"
    {
#line 412 "add_clause.m"
      hlds__make_hlds__add_clause__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 412 "add_clause.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__V_36_36, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Name_19));
#line 412 "add_clause.m"
    }
#line 411 "add_clause.m"
    {
#line 411 "add_clause.m"
      hlds__make_hlds__add_clause__SubDeclStr_21 = parse_tree__parse_tree_out_pred_decl__mercury_mode_subdecl_to_string_7_f_0((MR_Integer) 1, hlds__make_hlds__add_clause__PredOrFunc_18, hlds__make_hlds__add_clause__V_35_35, hlds__make_hlds__add_clause__V_36_36, hlds__make_hlds__add_clause__StrippedModeList_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_clause__Context_14);
    }
#line 2278 "hlds.make_hlds.add_clause.c"
    hlds__make_hlds__add_clause__TypeCtorInfo_120_120 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 417 "add_clause.m"
    {
#line 417 "add_clause.m"
      hlds__make_hlds__add_clause__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 417 "add_clause.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_51_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 417 "add_clause.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_51_51, 1) = ((MR_Box) (hlds__make_hlds__add_clause__SubDeclStr_21));
#line 417 "add_clause.m"
    }
#line 417 "add_clause.m"
    {
#line 417 "add_clause.m"
      hlds__make_hlds__add_clause__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 417 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_50_50, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_51_51));
#line 417 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[19])));
#line 417 "add_clause.m"
    }
#line 416 "add_clause.m"
    {
#line 416 "add_clause.m"
      hlds__make_hlds__add_clause__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 416 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_47_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[60])));
#line 416 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_47_47, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_50_50));
#line 416 "add_clause.m"
    }
#line 415 "add_clause.m"
    {
#line 415 "add_clause.m"
      hlds__make_hlds__add_clause__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_45_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 415 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_45_45, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_47_47));
#line 415 "add_clause.m"
    }
#line 415 "add_clause.m"
    {
#line 415 "add_clause.m"
      hlds__make_hlds__add_clause__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_42_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[59])));
#line 415 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_42_42, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_45_45));
#line 415 "add_clause.m"
    }
#line 415 "add_clause.m"
    {
#line 415 "add_clause.m"
      hlds__make_hlds__add_clause__V_41_41 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_clause__TypeCtorInfo_120_120, hlds__make_hlds__add_clause__PredIdPieces_16, hlds__make_hlds__add_clause__V_42_42);
    }
#line 415 "add_clause.m"
    {
#line 415 "add_clause.m"
      hlds__make_hlds__add_clause__MainPieces_22 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_clause__TypeCtorInfo_120_120, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[58]), hlds__make_hlds__add_clause__V_41_41);
    }
#line 418 "add_clause.m"
    {
#line 418 "add_clause.m"
      hlds__make_hlds__add_clause__ProcIds_23 = hlds__hlds_pred__pred_info_all_procids_1_f_0(hlds__make_hlds__add_clause__PredInfo_12);
    }
#line 423 "add_clause.m"
    if ((hlds__make_hlds__add_clause__ProcIds_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 420 "add_clause.m"
      {
#line 420 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_99_99;
#line 420 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_100_100;

#line 422 "add_clause.m"
        {
#line 422 "add_clause.m"
          hlds__make_hlds__add_clause__V_100_100 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 422 "add_clause.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_100_100, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 422 "add_clause.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_100_100, 1) = ((MR_Box) (hlds__make_hlds__add_clause__PredOrFunc_18));
#line 422 "add_clause.m"
        }
#line 422 "add_clause.m"
        {
#line 422 "add_clause.m"
          hlds__make_hlds__add_clause__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 422 "add_clause.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_99_99, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_100_100));
#line 422 "add_clause.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[43])));
#line 422 "add_clause.m"
        }
#line 421 "add_clause.m"
        {
#line 421 "add_clause.m"
          hlds__make_hlds__add_clause__VerbosePieces_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 421 "add_clause.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__VerbosePieces_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[61])));
#line 421 "add_clause.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__VerbosePieces_24, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_99_99));
#line 421 "add_clause.m"
        }
#line 420 "add_clause.m"
      }
#line 423 "add_clause.m"
    else
#line 424 "add_clause.m"
      {
#line 424 "add_clause.m"
        MR_Integer hlds__make_hlds__add_clause__ProcIdsHead_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__ProcIds_23, (MR_Integer) 0)));
#line 424 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__ProcIdsTail_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__ProcIds_23, (MR_Integer) 1)));

#line 432 "add_clause.m"
        if ((hlds__make_hlds__add_clause__ProcIdsTail_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 426 "add_clause.m"
          {
#line 426 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_79_79;
#line 426 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_82_82;
#line 426 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_83_83;
#line 426 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_91_91;
#line 426 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_92_92;

#line 428 "add_clause.m"
            {
#line 428 "add_clause.m"
              hlds__make_hlds__add_clause__V_83_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "add_clause.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_83_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 428 "add_clause.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_83_83, 1) = ((MR_Box) (hlds__make_hlds__add_clause__PredOrFunc_18));
#line 428 "add_clause.m"
            }
#line 428 "add_clause.m"
            {
#line 428 "add_clause.m"
              hlds__make_hlds__add_clause__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_82_82, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_83_83));
#line 428 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[47])));
#line 428 "add_clause.m"
            }
#line 427 "add_clause.m"
            {
#line 427 "add_clause.m"
              hlds__make_hlds__add_clause__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 427 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_79_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[62])));
#line 427 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_79_79, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_82_82));
#line 427 "add_clause.m"
            }
#line 430 "add_clause.m"
            {
#line 430 "add_clause.m"
              hlds__make_hlds__add_clause__V_92_92 = hlds__make_hlds__add_clause__mode_decl_for_pred_info_to_pieces_2_f_0(hlds__make_hlds__add_clause__PredInfo_12, hlds__make_hlds__add_clause__ProcIdsHead_25);
            }
#line 430 "add_clause.m"
            {
#line 430 "add_clause.m"
              hlds__make_hlds__add_clause__V_91_91 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_clause__TypeCtorInfo_120_120, hlds__make_hlds__add_clause__V_92_92, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[64]));
            }
#line 429 "add_clause.m"
            {
#line 429 "add_clause.m"
              hlds__make_hlds__add_clause__VerbosePieces_24 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_clause__TypeCtorInfo_120_120, hlds__make_hlds__add_clause__V_79_79, hlds__make_hlds__add_clause__V_91_91);
            }
#line 426 "add_clause.m"
          }
#line 432 "add_clause.m"
        else
#line 433 "add_clause.m"
          {
#line 433 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_58_58;
#line 433 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_61_61;
#line 433 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_62_62;
#line 433 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_70_70;
#line 433 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_71_71;
#line 433 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_72_72;
#line 433 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_73_73;

#line 435 "add_clause.m"
            {
#line 435 "add_clause.m"
              hlds__make_hlds__add_clause__V_62_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 435 "add_clause.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_62_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 435 "add_clause.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_62_62, 1) = ((MR_Box) (hlds__make_hlds__add_clause__PredOrFunc_18));
#line 435 "add_clause.m"
            }
#line 435 "add_clause.m"
            {
#line 435 "add_clause.m"
              hlds__make_hlds__add_clause__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 435 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_61_61, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_62_62));
#line 435 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[49])));
#line 435 "add_clause.m"
            }
#line 434 "add_clause.m"
            {
#line 434 "add_clause.m"
              hlds__make_hlds__add_clause__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 434 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_58_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[65])));
#line 434 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_58_58, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_61_61));
#line 434 "add_clause.m"
            }
#line 438 "add_clause.m"
            {
#line 438 "add_clause.m"
              hlds__make_hlds__add_clause__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 438 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__V_73_73, 0) = ((MR_Box) (&hlds__make_hlds__add_clause_scalar_common_5[0]));
#line 438 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__V_73_73, 1) = ((MR_Box) (hlds__make_hlds__add_clause__undeclared_mode_error_8_p_0_1));
#line 438 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__V_73_73, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 438 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__V_73_73, 3) = ((MR_Box) (hlds__make_hlds__add_clause__PredInfo_12));
#line 438 "add_clause.m"
            }
#line 438 "add_clause.m"
            {
#line 438 "add_clause.m"
              hlds__make_hlds__add_clause__V_72_72 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__make_hlds__add_clause_scalar_common_1[2], hlds__make_hlds__add_clause__V_73_73, hlds__make_hlds__add_clause__ProcIds_23);
            }
#line 437 "add_clause.m"
            {
#line 437 "add_clause.m"
              hlds__make_hlds__add_clause__V_71_71 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(hlds__make_hlds__add_clause__V_72_72, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
            }
#line 440 "add_clause.m"
            {
#line 440 "add_clause.m"
              hlds__make_hlds__add_clause__V_70_70 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_clause__TypeCtorInfo_120_120, hlds__make_hlds__add_clause__V_71_71, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[64]));
            }
#line 436 "add_clause.m"
            {
#line 436 "add_clause.m"
              hlds__make_hlds__add_clause__VerbosePieces_24 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_clause__TypeCtorInfo_120_120, hlds__make_hlds__add_clause__V_58_58, hlds__make_hlds__add_clause__V_70_70);
            }
#line 433 "add_clause.m"
          }
#line 424 "add_clause.m"
      }
#line 445 "add_clause.m"
    {
#line 445 "add_clause.m"
      hlds__make_hlds__add_clause__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 445 "add_clause.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__V_108_108, 0) = ((MR_Box) (hlds__make_hlds__add_clause__MainPieces_22));
#line 445 "add_clause.m"
    }
#line 445 "add_clause.m"
    {
#line 445 "add_clause.m"
      hlds__make_hlds__add_clause__V_110_110 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 445 "add_clause.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_clause__V_110_110, 0) = ((MR_Box) ((MR_Integer) 0));
#line 445 "add_clause.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_clause__V_110_110, 1) = ((MR_Box) (hlds__make_hlds__add_clause__VerbosePieces_24));
#line 445 "add_clause.m"
    }
#line 445 "add_clause.m"
    {
#line 445 "add_clause.m"
      hlds__make_hlds__add_clause__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 445 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_109_109, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_110_110));
#line 445 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_109_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 445 "add_clause.m"
    }
#line 445 "add_clause.m"
    {
#line 445 "add_clause.m"
      hlds__make_hlds__add_clause__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 445 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_107_107, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_108_108));
#line 445 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_107_107, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_109_109));
#line 445 "add_clause.m"
    }
#line 444 "add_clause.m"
    {
#line 444 "add_clause.m"
      hlds__make_hlds__add_clause__Msg_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 444 "add_clause.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Msg_29, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Context_14));
#line 444 "add_clause.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Msg_29, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_107_107));
#line 444 "add_clause.m"
    }
#line 446 "add_clause.m"
    {
#line 446 "add_clause.m"
      hlds__make_hlds__add_clause__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 446 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_115_115, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Msg_29));
#line 446 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_115_115, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 446 "add_clause.m"
    }
#line 446 "add_clause.m"
    {
#line 446 "add_clause.m"
      hlds__make_hlds__add_clause__Spec_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 446 "add_clause.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 446 "add_clause.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 446 "add_clause.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_30, 2) = ((MR_Box) (hlds__make_hlds__add_clause__V_115_115));
#line 446 "add_clause.m"
    }
#line 447 "add_clause.m"
    {
#line 447 "add_clause.m"
      MR_Word base;
#line 447 "add_clause.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 447 "add_clause.m"
      *hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_32 = base;
#line 447 "add_clause.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Spec_30));
#line 447 "add_clause.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_31));
#line 447 "add_clause.m"
    }
#line 404 "add_clause.m"
  }
#line 399 "add_clause.m"
}

#line 323 "add_clause.m"
static void MR_CALL 
hlds__make_hlds__add_clause__select_applicable_modes_15_p_0(
#line 323 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Args0_16,
#line 323 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__VarSet_17,
#line 323 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredStatus_18,
#line 323 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Context_19,
#line 323 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredId_20,
#line 323 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredInfo_21,
#line 323 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__Args_22,
#line 323 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__ApplProcIds_23,
#line 323 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__AllProcIds_24,
#line 323 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_42,
#line 323 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_43,
#line 323 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_44,
#line 323 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_45,
#line 323 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_46,
#line 323 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_47)
#line 323 "add_clause.m"
{
#line 330 "add_clause.m"
  {
#line 330 "add_clause.m"
    MR_bool hlds__make_hlds__add_clause__succeeded;
#line 330 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__ModeAnnotations_28;

#line 331 "add_clause.m"
    {
#line 331 "add_clause.m"
      *hlds__make_hlds__add_clause__AllProcIds_24 = hlds__hlds_pred__pred_info_all_procids_1_f_0(hlds__make_hlds__add_clause__PredInfo_21);
    }
#line 332 "add_clause.m"
    {
#line 332 "add_clause.m"
      hlds__make_hlds__add_clause__get_mode_annotations_4_p_0(hlds__make_hlds__add_clause__Args0_16, hlds__make_hlds__add_clause__Args_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__add_clause__ModeAnnotations_28);
    }
#line 372 "add_clause.m"
#line 372 "add_clause.m"
    switch (MR_tag((MR_Word) hlds__make_hlds__add_clause__ModeAnnotations_28)) {
#line 372 "add_clause.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 372 "add_clause.m"
      case (MR_Integer) 0:
#line 372 "add_clause.m"
#line 372 "add_clause.m"
        switch (MR_unmkbody(hlds__make_hlds__add_clause__ModeAnnotations_28)) {
#line 372 "add_clause.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 372 "add_clause.m"
          case (MR_Integer) 0:
#line 372 "add_clause.m"
          case (MR_Integer) 1:
#line 375 "add_clause.m"
            {
#line 376 "add_clause.m"
              {
#line 376 "add_clause.m"
                hlds__make_hlds__add_clause__succeeded = hlds__hlds_pred__pred_info_pragma_goal_type_1_p_0(hlds__make_hlds__add_clause__PredInfo_21);
              }
#line 381 "add_clause.m"
              if (hlds__make_hlds__add_clause__succeeded)
#line 380 "add_clause.m"
                {
#line 380 "add_clause.m"
                  MR_Word base;
#line 380 "add_clause.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 380 "add_clause.m"
                  *hlds__make_hlds__add_clause__ApplProcIds_23 = base;
#line 380 "add_clause.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (*hlds__make_hlds__add_clause__AllProcIds_24));
#line 380 "add_clause.m"
                }
#line 381 "add_clause.m"
              else
#line 382 "add_clause.m"
                *hlds__make_hlds__add_clause__ApplProcIds_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 375 "add_clause.m"
              *hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_45 = hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_44;
#line 375 "add_clause.m"
              *hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_47 = hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_46;
#line 375 "add_clause.m"
            }
#line 372 "add_clause.m"
            break;
#line 372 "add_clause.m"
          case (MR_Integer) 2:
#line 385 "add_clause.m"
            {
#line 385 "add_clause.m"
              MR_String hlds__make_hlds__add_clause__PredIdStr_38;
#line 385 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__Pieces_39;
#line 385 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__Msg_40;
#line 385 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__Spec_41;
#line 385 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__V_51_51;
#line 385 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__V_52_52;
#line 385 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__V_67_67;
#line 385 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__V_68_68;
#line 385 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__V_72_72;

#line 386 "add_clause.m"
              {
#line 386 "add_clause.m"
                hlds__make_hlds__add_clause__PredIdStr_38 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_42, hlds__make_hlds__add_clause__PredId_20);
              }
#line 387 "add_clause.m"
              {
#line 387 "add_clause.m"
                hlds__make_hlds__add_clause__V_52_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 387 "add_clause.m"
                MR_hl_field(MR_mktag(2), hlds__make_hlds__add_clause__V_52_52, 0) = ((MR_Box) (hlds__make_hlds__add_clause__PredIdStr_38));
#line 387 "add_clause.m"
              }
#line 387 "add_clause.m"
              {
#line 387 "add_clause.m"
                hlds__make_hlds__add_clause__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 387 "add_clause.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_51_51, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_52_52));
#line 387 "add_clause.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[41])));
#line 387 "add_clause.m"
              }
#line 387 "add_clause.m"
              {
#line 387 "add_clause.m"
                hlds__make_hlds__add_clause__Pieces_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 387 "add_clause.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__Pieces_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[57])));
#line 387 "add_clause.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__Pieces_39, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_51_51));
#line 387 "add_clause.m"
              }
#line 390 "add_clause.m"
              {
#line 390 "add_clause.m"
                hlds__make_hlds__add_clause__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 390 "add_clause.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__V_68_68, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Pieces_39));
#line 390 "add_clause.m"
              }
#line 390 "add_clause.m"
              {
#line 390 "add_clause.m"
                hlds__make_hlds__add_clause__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 390 "add_clause.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_67_67, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_68_68));
#line 390 "add_clause.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 390 "add_clause.m"
              }
#line 390 "add_clause.m"
              {
#line 390 "add_clause.m"
                hlds__make_hlds__add_clause__Msg_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 390 "add_clause.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Msg_40, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Context_19));
#line 390 "add_clause.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Msg_40, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_67_67));
#line 390 "add_clause.m"
              }
#line 391 "add_clause.m"
              {
#line 391 "add_clause.m"
                hlds__make_hlds__add_clause__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 391 "add_clause.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_72_72, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Msg_40));
#line 391 "add_clause.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 391 "add_clause.m"
              }
#line 391 "add_clause.m"
              {
#line 391 "add_clause.m"
                hlds__make_hlds__add_clause__Spec_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 391 "add_clause.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 391 "add_clause.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 391 "add_clause.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_41, 2) = ((MR_Box) (hlds__make_hlds__add_clause__V_72_72));
#line 391 "add_clause.m"
              }
#line 392 "add_clause.m"
              {
#line 392 "add_clause.m"
                MR_Word base;
#line 392 "add_clause.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 392 "add_clause.m"
                *hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_47 = base;
#line 392 "add_clause.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Spec_41));
#line 392 "add_clause.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_46));
#line 392 "add_clause.m"
              }
#line 396 "add_clause.m"
              {
#line 396 "add_clause.m"
                MR_Word base;
#line 396 "add_clause.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 396 "add_clause.m"
                *hlds__make_hlds__add_clause__ApplProcIds_23 = base;
#line 396 "add_clause.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (*hlds__make_hlds__add_clause__AllProcIds_24));
#line 396 "add_clause.m"
              }
#line 385 "add_clause.m"
              *hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_45 = hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_44;
#line 385 "add_clause.m"
            }
#line 372 "add_clause.m"
            break;
#line 372 "add_clause.m"
        }
#line 372 "add_clause.m"
        break;
#line 372 "add_clause.m"
      case (MR_Integer) 1:
#line 334 "add_clause.m"
        {
#line 334 "add_clause.m"
          MR_Word hlds__make_hlds__add_clause__ModeList0_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__ModeAnnotations_28, (MR_Integer) 0)));
#line 334 "add_clause.m"
          MR_Word hlds__make_hlds__add_clause__ModeList_30;
#line 334 "add_clause.m"
          MR_Word hlds__make_hlds__add_clause__Procs_35;
#line 334 "add_clause.m"
          MR_Word hlds__make_hlds__add_clause__ExistingProcs_36;
#line 334 "add_clause.m"
          MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_76_76;
#line 340 "add_clause.m"
          MR_Word hlds__make_hlds__add_clause__V_75_75 = (MR_Word) hlds__make_hlds__add_clause__PredStatus_18;
#line 365 "add_clause.m"
          MR_Integer hlds__make_hlds__add_clause__ProcId_37;

#line 340 "add_clause.m"
          hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__V_75_75 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 342 "add_clause.m"
          if (hlds__make_hlds__add_clause__succeeded)
#line 341 "add_clause.m"
            {
#line 341 "add_clause.m"
              hlds__make_hlds__add_clause__ModeList_30 = hlds__make_hlds__add_clause__ModeList0_29;
#line 341 "add_clause.m"
              hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_76_76 = hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_46;
#line 341 "add_clause.m"
              *hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_45 = hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_44;
#line 341 "add_clause.m"
            }
#line 342 "add_clause.m"
          else
#line 343 "add_clause.m"
            {
#line 343 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__Exported_31;
#line 343 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__InInt_32;
#line 343 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__MQInfo0_33;
#line 343 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__MQInfo_34;

#line 343 "add_clause.m"
              {
#line 343 "add_clause.m"
                hlds__make_hlds__add_clause__Exported_31 = hlds__status__pred_status_is_exported_to_non_submodules_1_f_0(hlds__make_hlds__add_clause__PredStatus_18);
              }
#line 347 "add_clause.m"
#line 347 "add_clause.m"
              switch (hlds__make_hlds__add_clause__Exported_31) {
#line 347 "add_clause.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 347 "add_clause.m"
                case (MR_Integer) 0:
#line 349 "add_clause.m"
                  hlds__make_hlds__add_clause__InInt_32 = (MR_Integer) 0;
#line 347 "add_clause.m"
                  break;
#line 347 "add_clause.m"
                case (MR_Integer) 1:
#line 346 "add_clause.m"
                  hlds__make_hlds__add_clause__InInt_32 = (MR_Integer) 1;
#line 347 "add_clause.m"
                  break;
#line 347 "add_clause.m"
              }
#line 351 "add_clause.m"
              {
#line 351 "add_clause.m"
                hlds__make_hlds__qual_info__qual_info_get_mq_info_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_44, &hlds__make_hlds__add_clause__MQInfo0_33);
              }
#line 352 "add_clause.m"
              {
#line 352 "add_clause.m"
                parse_tree__module_qual__qualify_clause_mode_list_8_p_0(hlds__make_hlds__add_clause__InInt_32, hlds__make_hlds__add_clause__Context_19, hlds__make_hlds__add_clause__ModeList0_29, &hlds__make_hlds__add_clause__ModeList_30, hlds__make_hlds__add_clause__MQInfo0_33, &hlds__make_hlds__add_clause__MQInfo_34, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_46, &hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_76_76);
              }
#line 354 "add_clause.m"
              {
#line 354 "add_clause.m"
                hlds__make_hlds__qual_info__qual_info_set_mq_info_3_p_0(hlds__make_hlds__add_clause__MQInfo_34, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_44, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_45);
              }
#line 343 "add_clause.m"
            }
#line 358 "add_clause.m"
          {
#line 358 "add_clause.m"
            hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__make_hlds__add_clause__PredInfo_21, &hlds__make_hlds__add_clause__Procs_35);
          }
#line 359 "add_clause.m"
          {
#line 359 "add_clause.m"
            mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, hlds__make_hlds__add_clause__Procs_35, &hlds__make_hlds__add_clause__ExistingProcs_36);
          }
#line 361 "add_clause.m"
          {
#line 361 "add_clause.m"
            hlds__make_hlds__add_clause__succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(hlds__make_hlds__add_clause__ExistingProcs_36, hlds__make_hlds__add_clause__ModeList_30, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_42, &hlds__make_hlds__add_clause__ProcId_37);
          }
#line 365 "add_clause.m"
          if (hlds__make_hlds__add_clause__succeeded)
#line 364 "add_clause.m"
            {
#line 364 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__V_78_78;

#line 364 "add_clause.m"
              {
#line 364 "add_clause.m"
                hlds__make_hlds__add_clause__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 364 "add_clause.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_78_78, 0) = ((MR_Box) (hlds__make_hlds__add_clause__ProcId_37));
#line 364 "add_clause.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 364 "add_clause.m"
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
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_78_78));
#line 364 "add_clause.m"
              }
#line 364 "add_clause.m"
              *hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_47 = hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_76_76;
#line 364 "add_clause.m"
            }
#line 365 "add_clause.m"
          else
#line 367 "add_clause.m"
            {
#line 366 "add_clause.m"
              {
#line 366 "add_clause.m"
                hlds__make_hlds__add_clause__undeclared_mode_error_8_p_0(hlds__make_hlds__add_clause__ModeList_30, hlds__make_hlds__add_clause__VarSet_17, hlds__make_hlds__add_clause__PredId_20, hlds__make_hlds__add_clause__PredInfo_21, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_42, hlds__make_hlds__add_clause__Context_19, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_76_76, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_47);
              }
#line 370 "add_clause.m"
              {
#line 370 "add_clause.m"
                MR_Word base;
#line 370 "add_clause.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 370 "add_clause.m"
                *hlds__make_hlds__add_clause__ApplProcIds_23 = base;
#line 370 "add_clause.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (*hlds__make_hlds__add_clause__AllProcIds_24));
#line 370 "add_clause.m"
              }
#line 367 "add_clause.m"
            }
#line 334 "add_clause.m"
        }
#line 372 "add_clause.m"
        break;
#line 372 "add_clause.m"
    }
#line 330 "add_clause.m"
    *hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_43 = hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_42;
#line 330 "add_clause.m"
  }
#line 323 "add_clause.m"
}

#line 152 "add_clause.m"
static void MR_CALL 
hlds__make_hlds__add_clause__module_add_clause_2_19_p_0(
#line 152 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__ClauseVarSet_20,
#line 152 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredOrFunc_21,
#line 152 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredName_22,
#line 152 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredId_23,
#line 152 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Args_24,
#line 152 "add_clause.m"
  MR_Integer hlds__make_hlds__add_clause__Arity_25,
#line 152 "add_clause.m"
  MR_Integer hlds__make_hlds__add_clause__ArityAdjustment_26,
#line 152 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Body_27,
#line 152 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredStatus_28,
#line 152 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Context_29,
#line 152 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__MaybeSeqNum_30,
#line 152 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__GoalType_31,
#line 152 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__IllegalSVarResult_32,
#line 152 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_80,
#line 152 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_81,
#line 152 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_82,
#line 152 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_83,
#line 152 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_84,
#line 152 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_85)
#line 152 "add_clause.m"
{
#line 166 "add_clause.m"
  {
#line 166 "add_clause.m"
    MR_bool hlds__make_hlds__add_clause__succeeded;
#line 166 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__TypeCtorInfo_224_224;
#line 166 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__TypeCtorInfo_225_225;
#line 166 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__Preds0_38;
#line 166 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_PredicateTable_86_86;
#line 166 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_87_87;
#line 166 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_110_110;
#line 168 "add_clause.m"
    MR_Box hlds__make_hlds__add_clause__conv0_STATE_VARIABLE_PredInfo_87_87;
#line 170 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__VeryVerbose_41;
#line 170 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__Globals_190;
#line 196 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_105_105;

#line 166 "add_clause.m"
    {
#line 166 "add_clause.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_80, &hlds__make_hlds__add_clause__STATE_VARIABLE_PredicateTable_86_86);
    }
#line 167 "add_clause.m"
    {
#line 167 "add_clause.m"
      hlds__pred_table__predicate_table_get_preds_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_PredicateTable_86_86, &hlds__make_hlds__add_clause__Preds0_38);
    }
#line 3125 "hlds.make_hlds.add_clause.c"
    hlds__make_hlds__add_clause__TypeCtorInfo_224_224 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 3127 "hlds.make_hlds.add_clause.c"
    hlds__make_hlds__add_clause__TypeCtorInfo_225_225 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 168 "add_clause.m"
    {
#line 168 "add_clause.m"
      mercury__map__lookup_3_p_0(hlds__make_hlds__add_clause__TypeCtorInfo_224_224, hlds__make_hlds__add_clause__TypeCtorInfo_225_225, hlds__make_hlds__add_clause__Preds0_38, ((MR_Box) (hlds__make_hlds__add_clause__PredId_23)), &hlds__make_hlds__add_clause__conv0_STATE_VARIABLE_PredInfo_87_87);
    }
#line 168 "add_clause.m"
    hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_87_87 = ((MR_Word) hlds__make_hlds__add_clause__conv0_STATE_VARIABLE_PredInfo_87_87);
#line 172 "add_clause.m"
    {
#line 172 "add_clause.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_80, &hlds__make_hlds__add_clause__Globals_190);
    }
#line 173 "add_clause.m"
    {
#line 173 "add_clause.m"
      libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_clause__Globals_190, (MR_Integer) 46, &hlds__make_hlds__add_clause__VeryVerbose_41);
    }
#line 188 "add_clause.m"
#line 188 "add_clause.m"
    switch (hlds__make_hlds__add_clause__VeryVerbose_41) {
#line 188 "add_clause.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 188 "add_clause.m"
      case (MR_Integer) 0:
#line 189 "add_clause.m"
        {
#line 189 "add_clause.m"
        }
#line 188 "add_clause.m"
        break;
#line 188 "add_clause.m"
      case (MR_Integer) 1:
#line 175 "add_clause.m"
        {
#line 175 "add_clause.m"
          MR_Word hlds__make_hlds__add_clause__MsgClauses_42;
#line 175 "add_clause.m"
          MR_Integer hlds__make_hlds__add_clause__NumClauses_43;
#line 175 "add_clause.m"
          MR_Integer hlds__make_hlds__add_clause__PredArity0_44;
#line 175 "add_clause.m"
          MR_Integer hlds__make_hlds__add_clause__PredArity_45;
#line 175 "add_clause.m"
          MR_Integer hlds__make_hlds__add_clause__OrigArity_46;
#line 175 "add_clause.m"
          MR_Word hlds__make_hlds__add_clause__V_90_90;
#line 175 "add_clause.m"
          MR_Word hlds__make_hlds__add_clause__V_92_92;
#line 175 "add_clause.m"
          MR_Word hlds__make_hlds__add_clause__V_94_94;
#line 175 "add_clause.m"
          MR_Integer hlds__make_hlds__add_clause__V_95_95;
#line 175 "add_clause.m"
          MR_Word hlds__make_hlds__add_clause__V_101_101;
#line 177 "add_clause.m"
          MR_Word hlds__make_hlds__add_clause__V_216_216;
#line 177 "add_clause.m"
          MR_Word hlds__make_hlds__add_clause__V_217_217;
#line 177 "add_clause.m"
          MR_Word hlds__make_hlds__add_clause__V_218_218;
#line 177 "add_clause.m"
          MR_Word hlds__make_hlds__add_clause__V_219_219;
#line 177 "add_clause.m"
          MR_Word hlds__make_hlds__add_clause__V_220_220;
#line 177 "add_clause.m"
          MR_Word hlds__make_hlds__add_clause__V_221_221;
#line 177 "add_clause.m"
          MR_Word hlds__make_hlds__add_clause__V_222_222;
#line 177 "add_clause.m"
          MR_Word hlds__make_hlds__add_clause__V_223_223;

#line 176 "add_clause.m"
          {
#line 176 "add_clause.m"
            hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_87_87, &hlds__make_hlds__add_clause__MsgClauses_42);
          }
#line 177 "add_clause.m"
          hlds__make_hlds__add_clause__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__MsgClauses_42, (MR_Integer) 0)));
#line 177 "add_clause.m"
          hlds__make_hlds__add_clause__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__MsgClauses_42, (MR_Integer) 1)));
#line 177 "add_clause.m"
          hlds__make_hlds__add_clause__V_218_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__MsgClauses_42, (MR_Integer) 2)));
#line 177 "add_clause.m"
          hlds__make_hlds__add_clause__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__MsgClauses_42, (MR_Integer) 3)));
#line 177 "add_clause.m"
          hlds__make_hlds__add_clause__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__MsgClauses_42, (MR_Integer) 4)));
#line 177 "add_clause.m"
          hlds__make_hlds__add_clause__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__MsgClauses_42, (MR_Integer) 5)));
#line 177 "add_clause.m"
          hlds__make_hlds__add_clause__V_221_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__MsgClauses_42, (MR_Integer) 6)));
#line 177 "add_clause.m"
          hlds__make_hlds__add_clause__V_222_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__MsgClauses_42, (MR_Integer) 7)));
#line 177 "add_clause.m"
          hlds__make_hlds__add_clause__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__MsgClauses_42, (MR_Integer) 8)));
#line 177 "add_clause.m"
          {
#line 177 "add_clause.m"
            hlds__make_hlds__add_clause__NumClauses_43 = hlds__hlds_clauses__num_clauses_in_clauses_rep_1_f_0(hlds__make_hlds__add_clause__V_90_90);
          }
#line 180 "add_clause.m"
          hlds__make_hlds__add_clause__V_95_95 = (hlds__make_hlds__add_clause__NumClauses_43 + (MR_Integer) 1);
#line 180 "add_clause.m"
          {
#line 180 "add_clause.m"
            hlds__make_hlds__add_clause__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 180 "add_clause.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_94_94, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_95_95));
#line 180 "add_clause.m"
          }
#line 180 "add_clause.m"
          {
#line 180 "add_clause.m"
            hlds__make_hlds__add_clause__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 180 "add_clause.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_92_92, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_94_94));
#line 180 "add_clause.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 180 "add_clause.m"
          }
#line 179 "add_clause.m"
          {
#line 179 "add_clause.m"
            mercury__io__format_4_p_0((MR_String) "%% Processing clause %d for ", hlds__make_hlds__add_clause__V_92_92);
          }
#line 181 "add_clause.m"
          {
#line 181 "add_clause.m"
            parse_tree__prog_out__write_pred_or_func_3_p_0(hlds__make_hlds__add_clause__PredOrFunc_21);
          }
#line 182 "add_clause.m"
          {
#line 182 "add_clause.m"
            mercury__io__write_string_3_p_0((MR_String) " \140");
          }
#line 183 "add_clause.m"
          {
#line 183 "add_clause.m"
            mercury__list__length_2_p_0((MR_Word) &hlds__make_hlds__add_clause_scalar_common_1[0], hlds__make_hlds__add_clause__Args_24, &hlds__make_hlds__add_clause__PredArity0_44);
          }
#line 184 "add_clause.m"
          hlds__make_hlds__add_clause__PredArity_45 = (hlds__make_hlds__add_clause__PredArity0_44 + hlds__make_hlds__add_clause__ArityAdjustment_26);
#line 185 "add_clause.m"
          {
#line 185 "add_clause.m"
            parse_tree__prog_util__adjust_func_arity_3_p_1(hlds__make_hlds__add_clause__PredOrFunc_21, &hlds__make_hlds__add_clause__OrigArity_46, hlds__make_hlds__add_clause__PredArity_45);
          }
#line 186 "add_clause.m"
          {
#line 186 "add_clause.m"
            hlds__make_hlds__add_clause__V_101_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 186 "add_clause.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__V_101_101, 0) = ((MR_Box) (hlds__make_hlds__add_clause__PredName_22));
#line 186 "add_clause.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__V_101_101, 1) = ((MR_Box) (hlds__make_hlds__add_clause__OrigArity_46));
#line 186 "add_clause.m"
          }
#line 186 "add_clause.m"
          {
#line 186 "add_clause.m"
            parse_tree__prog_out__write_sym_name_and_arity_3_p_0(hlds__make_hlds__add_clause__V_101_101);
          }
#line 187 "add_clause.m"
          {
#line 187 "add_clause.m"
            mercury__io__write_string_3_p_0((MR_String) "\'...\n");
          }
#line 175 "add_clause.m"
        }
#line 188 "add_clause.m"
        break;
#line 188 "add_clause.m"
    }
#line 196 "add_clause.m"
    hlds__make_hlds__add_clause__V_105_105 = (MR_Word) hlds__make_hlds__add_clause__PredStatus_28;
#line 196 "add_clause.m"
    hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__V_105_105 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 202 "add_clause.m"
    if (hlds__make_hlds__add_clause__succeeded)
#line 197 "add_clause.m"
      {
#line 197 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__InitMarkers0_47;
#line 197 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__InitMarkers_48;
#line 197 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_107_107;

#line 197 "add_clause.m"
        {
#line 197 "add_clause.m"
          hlds__hlds_pred__pred_info_set_status_3_p_0(hlds__make_hlds__add_clause__PredStatus_28, hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_87_87, &hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_107_107);
        }
#line 198 "add_clause.m"
        {
#line 198 "add_clause.m"
          hlds__hlds_pred__pred_info_get_markers_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_107_107, &hlds__make_hlds__add_clause__InitMarkers0_47);
        }
#line 199 "add_clause.m"
        {
#line 199 "add_clause.m"
          hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 20, hlds__make_hlds__add_clause__InitMarkers0_47, &hlds__make_hlds__add_clause__InitMarkers_48);
        }
#line 201 "add_clause.m"
        {
#line 201 "add_clause.m"
          hlds__hlds_pred__pred_info_set_markers_3_p_0(hlds__make_hlds__add_clause__InitMarkers_48, hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_107_107, &hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_110_110);
        }
#line 197 "add_clause.m"
      }
#line 202 "add_clause.m"
    else
#line 202 "add_clause.m"
      hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_110_110 = hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_87_87;
#line 209 "add_clause.m"
    if ((hlds__make_hlds__add_clause__IllegalSVarResult_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 241 "add_clause.m"
      {
#line 215 "add_clause.m"
        MR_Integer hlds__make_hlds__add_clause__FuncArity_50;
#line 215 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_111_111;
#line 215 "add_clause.m"
        MR_Integer hlds__make_hlds__add_clause__V_227_227;
#line 217 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_51_51;
#line 217 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_52_52;
#line 222 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_112_112;

#line 215 "add_clause.m"
        hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__PredOrFunc_21 == (MR_Integer) 1);
#line 215 "add_clause.m"
        if (hlds__make_hlds__add_clause__succeeded)
#line 215 "add_clause.m"
          {
#line 216 "add_clause.m"
            hlds__make_hlds__add_clause__V_111_111 = (MR_Integer) 1;
#line 216 "add_clause.m"
            {
#line 216 "add_clause.m"
              parse_tree__prog_util__adjust_func_arity_3_p_1(hlds__make_hlds__add_clause__V_111_111, &hlds__make_hlds__add_clause__FuncArity_50, hlds__make_hlds__add_clause__Arity_25);
            }
#line 217 "add_clause.m"
            {
#line 217 "add_clause.m"
              hlds__make_hlds__add_clause__succeeded = hlds__hlds_pred__is_field_access_function_name_5_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_80, hlds__make_hlds__add_clause__PredName_22, &hlds__make_hlds__add_clause__V_227_227, &hlds__make_hlds__add_clause__V_51_51, &hlds__make_hlds__add_clause__V_52_52);
            }
#line 215 "add_clause.m"
            if (hlds__make_hlds__add_clause__succeeded)
#line 215 "add_clause.m"
              {
#line 217 "add_clause.m"
                hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__FuncArity_50 == hlds__make_hlds__add_clause__V_227_227);
#line 215 "add_clause.m"
                if (hlds__make_hlds__add_clause__succeeded)
#line 215 "add_clause.m"
                  {
#line 222 "add_clause.m"
                    hlds__make_hlds__add_clause__V_112_112 = (MR_Word) hlds__make_hlds__add_clause__PredStatus_28;
#line 222 "add_clause.m"
                    hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__V_112_112 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 222 "add_clause.m"
                    hlds__make_hlds__add_clause__succeeded = !(hlds__make_hlds__add_clause__succeeded);
#line 215 "add_clause.m"
                  }
#line 215 "add_clause.m"
              }
#line 215 "add_clause.m"
          }
#line 241 "add_clause.m"
        if (hlds__make_hlds__add_clause__succeeded)
#line 224 "add_clause.m"
          {
#line 224 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__CallId_53;
#line 224 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__MainPieces_54;
#line 224 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__Msg_56;
#line 224 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__Spec_57;
#line 224 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_115_115;
#line 224 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_118_118;
#line 224 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_119_119;
#line 224 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_144_144;
#line 224 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_145_145;
#line 224 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_152_152;

#line 224 "add_clause.m"
            {
#line 224 "add_clause.m"
              hlds__make_hlds__add_clause__CallId_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 224 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__CallId_53, 0) = ((MR_Box) (hlds__make_hlds__add_clause__PredOrFunc_21));
#line 224 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__CallId_53, 1) = ((MR_Box) (hlds__make_hlds__add_clause__PredName_22));
#line 224 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__CallId_53, 2) = ((MR_Box) (hlds__make_hlds__add_clause__Arity_25));
#line 224 "add_clause.m"
            }
#line 227 "add_clause.m"
            {
#line 227 "add_clause.m"
              hlds__make_hlds__add_clause__V_119_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 227 "add_clause.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_119_119, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 227 "add_clause.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_119_119, 1) = ((MR_Box) (hlds__make_hlds__add_clause__CallId_53));
#line 227 "add_clause.m"
            }
#line 227 "add_clause.m"
            {
#line 227 "add_clause.m"
              hlds__make_hlds__add_clause__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 227 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_118_118, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_119_119));
#line 227 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_118_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[19])));
#line 227 "add_clause.m"
            }
#line 227 "add_clause.m"
            {
#line 227 "add_clause.m"
              hlds__make_hlds__add_clause__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 227 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_115_115, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[54])));
#line 227 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_115_115, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_118_118));
#line 227 "add_clause.m"
            }
#line 226 "add_clause.m"
            {
#line 226 "add_clause.m"
              hlds__make_hlds__add_clause__MainPieces_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 226 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__MainPieces_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[53])));
#line 226 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__MainPieces_54, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_115_115));
#line 226 "add_clause.m"
            }
#line 236 "add_clause.m"
            {
#line 236 "add_clause.m"
              hlds__make_hlds__add_clause__V_145_145 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 236 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__V_145_145, 0) = ((MR_Box) (hlds__make_hlds__add_clause__MainPieces_54));
#line 236 "add_clause.m"
            }
#line 236 "add_clause.m"
            {
#line 236 "add_clause.m"
              hlds__make_hlds__add_clause__V_144_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 236 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_144_144, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_145_145));
#line 236 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_144_144, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[56])));
#line 236 "add_clause.m"
            }
#line 235 "add_clause.m"
            {
#line 235 "add_clause.m"
              hlds__make_hlds__add_clause__Msg_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 235 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Msg_56, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Context_29));
#line 235 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Msg_56, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_144_144));
#line 235 "add_clause.m"
            }
#line 239 "add_clause.m"
            {
#line 239 "add_clause.m"
              hlds__make_hlds__add_clause__V_152_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 239 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_152_152, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Msg_56));
#line 239 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_152_152, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 239 "add_clause.m"
            }
#line 238 "add_clause.m"
            {
#line 238 "add_clause.m"
              hlds__make_hlds__add_clause__Spec_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 238 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 238 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 238 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_57, 2) = ((MR_Box) (hlds__make_hlds__add_clause__V_152_152));
#line 238 "add_clause.m"
            }
#line 240 "add_clause.m"
            {
#line 240 "add_clause.m"
              MR_Word base;
#line 240 "add_clause.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 240 "add_clause.m"
              *hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_85 = base;
#line 240 "add_clause.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Spec_57));
#line 240 "add_clause.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_84));
#line 240 "add_clause.m"
            }
#line 224 "add_clause.m"
            *hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_83 = hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_82;
#line 224 "add_clause.m"
            *hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_81 = hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_80;
#line 224 "add_clause.m"
          }
#line 241 "add_clause.m"
        else
#line 262 "add_clause.m"
          {
#line 242 "add_clause.m"
            {
#line 242 "add_clause.m"
              hlds__make_hlds__add_clause__succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_110_110);
            }
#line 262 "add_clause.m"
            if (hlds__make_hlds__add_clause__succeeded)
#line 251 "add_clause.m"
              {
#line 251 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__AllowDefnOfBuiltin_58;
#line 251 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__Globals_195;

#line 248 "add_clause.m"
                {
#line 248 "add_clause.m"
                  hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_80, &hlds__make_hlds__add_clause__Globals_195);
                }
#line 249 "add_clause.m"
                {
#line 249 "add_clause.m"
                  libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_clause__Globals_195, (MR_Integer) 279, &hlds__make_hlds__add_clause__AllowDefnOfBuiltin_58);
                }
#line 259 "add_clause.m"
#line 259 "add_clause.m"
                switch (hlds__make_hlds__add_clause__AllowDefnOfBuiltin_58) {
#line 259 "add_clause.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 259 "add_clause.m"
                  case (MR_Integer) 0:
#line 253 "add_clause.m"
                    {
#line 253 "add_clause.m"
                      MR_Word hlds__make_hlds__add_clause__V_165_165;
#line 253 "add_clause.m"
                      MR_Word hlds__make_hlds__add_clause__Msg_196;
#line 253 "add_clause.m"
                      MR_Word hlds__make_hlds__add_clause__Spec_197;

#line 254 "add_clause.m"
                      {
#line 254 "add_clause.m"
                        hlds__make_hlds__add_clause__Msg_196 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 254 "add_clause.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Msg_196, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Context_29));
#line 254 "add_clause.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Msg_196, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[34])));
#line 254 "add_clause.m"
                      }
#line 257 "add_clause.m"
                      {
#line 257 "add_clause.m"
                        hlds__make_hlds__add_clause__V_165_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 257 "add_clause.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_165_165, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Msg_196));
#line 257 "add_clause.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_165_165, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 257 "add_clause.m"
                      }
#line 256 "add_clause.m"
                      {
#line 256 "add_clause.m"
                        hlds__make_hlds__add_clause__Spec_197 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 256 "add_clause.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_197, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 256 "add_clause.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_197, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 256 "add_clause.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_197, 2) = ((MR_Box) (hlds__make_hlds__add_clause__V_165_165));
#line 256 "add_clause.m"
                      }
#line 258 "add_clause.m"
                      {
#line 258 "add_clause.m"
                        MR_Word base;
#line 258 "add_clause.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 258 "add_clause.m"
                        *hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_85 = base;
#line 258 "add_clause.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Spec_197));
#line 258 "add_clause.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_84));
#line 258 "add_clause.m"
                      }
#line 253 "add_clause.m"
                    }
#line 259 "add_clause.m"
                    break;
#line 259 "add_clause.m"
                  case (MR_Integer) 1:
#line 260 "add_clause.m"
                    *hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_85 = hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_84;
#line 259 "add_clause.m"
                    break;
#line 259 "add_clause.m"
                }
#line 251 "add_clause.m"
                *hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_83 = hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_82;
#line 251 "add_clause.m"
                *hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_81 = hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_80;
#line 251 "add_clause.m"
              }
#line 262 "add_clause.m"
            else
#line 263 "add_clause.m"
              {
#line 263 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__Clauses0_59;
#line 263 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__TVarSet0_60;
#line 263 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__ArgTerms_62;
#line 263 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__ProcIdsForThisClause_63;
#line 263 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__AllProcIds_64;
#line 263 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__Goal_65;
#line 263 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__VarSet_66;
#line 263 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__TVarSet_67;
#line 263 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__Clauses_68;
#line 263 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__Warnings_69;
#line 263 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__ExistQVars_72;
#line 263 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__ArgTypes_73;
#line 263 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__ProcIds_74;
#line 263 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__Preds_78;
#line 263 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_168_168;
#line 263 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_169_169;
#line 263 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_170_170;
#line 263 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_171_171;
#line 263 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_172_172;
#line 263 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_174_174;
#line 263 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_175_175;
#line 263 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_177_177;
#line 263 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_180_180;
#line 263 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_181_181;
#line 263 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_183_206;
#line 263 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_PredicateTable_184_207;
#line 265 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__V_61_61;
#line 276 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__PromiseType_70;
#line 283 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause___ArgTVarSet_71;
#line 295 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__V_75_75;
#line 306 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__V_186_186;

#line 263 "add_clause.m"
                {
#line 263 "add_clause.m"
                  hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_110_110, &hlds__make_hlds__add_clause__Clauses0_59);
                }
#line 264 "add_clause.m"
                {
#line 264 "add_clause.m"
                  hlds__hlds_pred__pred_info_get_typevarset_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_110_110, &hlds__make_hlds__add_clause__TVarSet0_60);
                }
#line 265 "add_clause.m"
                {
#line 265 "add_clause.m"
                  check_hlds__clause_to_proc__maybe_add_default_func_mode_3_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_110_110, &hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_168_168, &hlds__make_hlds__add_clause__V_61_61);
                }
#line 266 "add_clause.m"
                {
#line 266 "add_clause.m"
                  hlds__make_hlds__add_clause__select_applicable_modes_15_p_0(hlds__make_hlds__add_clause__Args_24, hlds__make_hlds__add_clause__ClauseVarSet_20, hlds__make_hlds__add_clause__PredStatus_28, hlds__make_hlds__add_clause__Context_29, hlds__make_hlds__add_clause__PredId_23, hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_168_168, &hlds__make_hlds__add_clause__ArgTerms_62, &hlds__make_hlds__add_clause__ProcIdsForThisClause_63, &hlds__make_hlds__add_clause__AllProcIds_64, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_80, &hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_169_169, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_82, &hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_170_170, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_84, &hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_171_171);
                }
#line 270 "add_clause.m"
                {
#line 270 "add_clause.m"
                  hlds__make_hlds__add_clause__clauses_info_add_clause_24_p_0(hlds__make_hlds__add_clause__ProcIdsForThisClause_63, hlds__make_hlds__add_clause__AllProcIds_64, hlds__make_hlds__add_clause__ClauseVarSet_20, hlds__make_hlds__add_clause__TVarSet0_60, hlds__make_hlds__add_clause__ArgTerms_62, hlds__make_hlds__add_clause__Body_27, hlds__make_hlds__add_clause__Context_29, hlds__make_hlds__add_clause__MaybeSeqNum_30, hlds__make_hlds__add_clause__PredStatus_28, hlds__make_hlds__add_clause__PredOrFunc_21, hlds__make_hlds__add_clause__Arity_25, hlds__make_hlds__add_clause__GoalType_31, &hlds__make_hlds__add_clause__Goal_65, &hlds__make_hlds__add_clause__VarSet_66, &hlds__make_hlds__add_clause__TVarSet_67, hlds__make_hlds__add_clause__Clauses0_59, &hlds__make_hlds__add_clause__Clauses_68, &hlds__make_hlds__add_clause__Warnings_69, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_169_169, &hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_172_172, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_170_170, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_83, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_171_171, &hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_174_174);
                }
#line 275 "add_clause.m"
                {
#line 275 "add_clause.m"
                  hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(hlds__make_hlds__add_clause__Clauses_68, hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_168_168, &hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_175_175);
                }
#line 276 "add_clause.m"
                hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__GoalType_31)) == (MR_mktag((MR_Integer) 1)));
#line 276 "add_clause.m"
                if (hlds__make_hlds__add_clause__succeeded)
#line 276 "add_clause.m"
                  {
#line 276 "add_clause.m"
                    hlds__make_hlds__add_clause__PromiseType_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__GoalType_31, (MR_Integer) 0)));
#line 277 "add_clause.m"
                    {
#line 277 "add_clause.m"
                      hlds__hlds_pred__pred_info_set_goal_type_3_p_0(hlds__make_hlds__add_clause__GoalType_31, hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_175_175, &hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_177_177);
                    }
#line 276 "add_clause.m"
                  }
#line 276 "add_clause.m"
                else
#line 280 "add_clause.m"
                  {
#line 280 "add_clause.m"
                    {
#line 280 "add_clause.m"
                      hlds__hlds_pred__pred_info_update_goal_type_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_175_175, &hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_177_177);
                    }
#line 280 "add_clause.m"
                  }
#line 282 "add_clause.m"
                {
#line 282 "add_clause.m"
                  hlds__hlds_pred__pred_info_set_typevarset_3_p_0(hlds__make_hlds__add_clause__TVarSet_67, hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_177_177, &hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_180_180);
                }
#line 283 "add_clause.m"
                {
#line 283 "add_clause.m"
                  hlds__hlds_pred__pred_info_get_arg_types_4_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_180_180, &hlds__make_hlds__add_clause___ArgTVarSet_71, &hlds__make_hlds__add_clause__ExistQVars_72, &hlds__make_hlds__add_clause__ArgTypes_73);
                }
#line 285 "add_clause.m"
                {
#line 285 "add_clause.m"
                  hlds__hlds_pred__pred_info_set_arg_types_5_p_0(hlds__make_hlds__add_clause__TVarSet_67, hlds__make_hlds__add_clause__ExistQVars_72, hlds__make_hlds__add_clause__ArgTypes_73, hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_180_180, &hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_181_181);
                }
#line 292 "add_clause.m"
                {
#line 292 "add_clause.m"
                  hlds__make_hlds__add_clause__ProcIds_74 = hlds__hlds_pred__pred_info_all_procids_1_f_0(hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_181_181);
                }
#line 294 "add_clause.m"
                hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__ProcIds_74 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 294 "add_clause.m"
                if (hlds__make_hlds__add_clause__succeeded)
#line 294 "add_clause.m"
                  {
#line 295 "add_clause.m"
                    hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__GoalType_31)) == (MR_mktag((MR_Integer) 1)));
#line 295 "add_clause.m"
                    if (hlds__make_hlds__add_clause__succeeded)
#line 295 "add_clause.m"
                      hlds__make_hlds__add_clause__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__GoalType_31, (MR_Integer) 0)));
#line 295 "add_clause.m"
                    hlds__make_hlds__add_clause__succeeded = !(hlds__make_hlds__add_clause__succeeded);
#line 294 "add_clause.m"
                  }
#line 300 "add_clause.m"
                if (hlds__make_hlds__add_clause__succeeded)
#line 297 "add_clause.m"
                  {
#line 297 "add_clause.m"
                    MR_Word hlds__make_hlds__add_clause__EndMarkers0_76;
#line 297 "add_clause.m"
                    MR_Word hlds__make_hlds__add_clause__EndMarkers_77;

#line 297 "add_clause.m"
                    {
#line 297 "add_clause.m"
                      hlds__hlds_pred__pred_info_get_markers_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_181_181, &hlds__make_hlds__add_clause__EndMarkers0_76);
                    }
#line 298 "add_clause.m"
                    {
#line 298 "add_clause.m"
                      hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 3, hlds__make_hlds__add_clause__EndMarkers0_76, &hlds__make_hlds__add_clause__EndMarkers_77);
                    }
#line 299 "add_clause.m"
                    {
#line 299 "add_clause.m"
                      hlds__hlds_pred__pred_info_set_markers_3_p_0(hlds__make_hlds__add_clause__EndMarkers_77, hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_181_181, &hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_183_206);
                    }
#line 297 "add_clause.m"
                  }
#line 300 "add_clause.m"
                else
#line 300 "add_clause.m"
                  hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_183_206 = hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_181_181;
#line 303 "add_clause.m"
                {
#line 303 "add_clause.m"
                  mercury__map__det_update_4_p_0(hlds__make_hlds__add_clause__TypeCtorInfo_224_224, hlds__make_hlds__add_clause__TypeCtorInfo_225_225, ((MR_Box) (hlds__make_hlds__add_clause__PredId_23)), ((MR_Box) (hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_183_206)), hlds__make_hlds__add_clause__Preds0_38, &hlds__make_hlds__add_clause__Preds_78);
                }
#line 304 "add_clause.m"
                {
#line 304 "add_clause.m"
                  hlds__pred_table__predicate_table_set_preds_3_p_0(hlds__make_hlds__add_clause__Preds_78, hlds__make_hlds__add_clause__STATE_VARIABLE_PredicateTable_86_86, &hlds__make_hlds__add_clause__STATE_VARIABLE_PredicateTable_184_207);
                }
#line 305 "add_clause.m"
                {
#line 305 "add_clause.m"
                  hlds__hlds_module__module_info_set_predicate_table_3_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_PredicateTable_184_207, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_172_172, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_81);
                }
#line 306 "add_clause.m"
                hlds__make_hlds__add_clause__V_186_186 = (MR_Word) hlds__make_hlds__add_clause__PredStatus_28;
#line 306 "add_clause.m"
                hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__V_186_186 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 308 "add_clause.m"
                if (hlds__make_hlds__add_clause__succeeded)
#line 308 "add_clause.m"
                  *hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_85 = hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_174_174;
#line 308 "add_clause.m"
                else
#line 310 "add_clause.m"
                  {
#line 310 "add_clause.m"
                    MR_Word hlds__make_hlds__add_clause__SimpleCallId_79;
#line 310 "add_clause.m"
                    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_187_187;

#line 310 "add_clause.m"
                    {
#line 310 "add_clause.m"
                      hlds__make_hlds__add_clause__SimpleCallId_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 310 "add_clause.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__SimpleCallId_79, 0) = ((MR_Box) (hlds__make_hlds__add_clause__PredOrFunc_21));
#line 310 "add_clause.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__SimpleCallId_79, 1) = ((MR_Box) (hlds__make_hlds__add_clause__PredName_22));
#line 310 "add_clause.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__SimpleCallId_79, 2) = ((MR_Box) (hlds__make_hlds__add_clause__Arity_25));
#line 310 "add_clause.m"
                    }
#line 311 "add_clause.m"
                    {
#line 311 "add_clause.m"
                      hlds__make_hlds__make_hlds_warn__warn_singletons_6_p_0(*hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_81, hlds__make_hlds__add_clause__SimpleCallId_79, hlds__make_hlds__add_clause__VarSet_66, hlds__make_hlds__add_clause__Goal_65, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_174_174, &hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_187_187);
                    }
#line 314 "add_clause.m"
                    {
#line 314 "add_clause.m"
                      hlds__make_hlds__make_hlds_warn__add_quant_warnings_5_p_0(hlds__make_hlds__add_clause__SimpleCallId_79, hlds__make_hlds__add_clause__VarSet_66, hlds__make_hlds__add_clause__Warnings_69, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_187_187, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_85);
#line 314 "add_clause.m"
                      return;
                    }
#line 310 "add_clause.m"
                  }
#line 263 "add_clause.m"
              }
#line 262 "add_clause.m"
          }
#line 241 "add_clause.m"
      }
#line 209 "add_clause.m"
    else
#line 206 "add_clause.m"
      {
#line 206 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__StateVar_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__IllegalSVarResult_32, (MR_Integer) 0)));

#line 207 "add_clause.m"
        {
#line 207 "add_clause.m"
          hlds__make_hlds__state_var__report_illegal_func_svar_result_5_p_0(hlds__make_hlds__add_clause__Context_29, hlds__make_hlds__add_clause__ClauseVarSet_20, hlds__make_hlds__add_clause__StateVar_49, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_84, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_85);
        }
#line 206 "add_clause.m"
        *hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_81 = hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_80;
#line 206 "add_clause.m"
        *hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_83 = hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_82;
#line 206 "add_clause.m"
      }
#line 166 "add_clause.m"
  }
#line 152 "add_clause.m"
}

#line 565 "add_clause.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_clause__clauses_info_add_clause_24_p_0_1(
#line 565 "add_clause.m"
  MR_Box hlds__make_hlds__add_clause__closure_arg,
#line 565 "add_clause.m"
  MR_Box hlds__make_hlds__add_clause__wrapper_arg_1,
#line 565 "add_clause.m"
  MR_Box * hlds__make_hlds__add_clause__wrapper_arg_2)
#line 565 "add_clause.m"
{
#line 565 "add_clause.m"
  {
#line 565 "add_clause.m"
    MR_bool hlds__make_hlds__add_clause__succeeded;
#line 565 "add_clause.m"
    MR_Box hlds__make_hlds__add_clause__closure = hlds__make_hlds__add_clause__closure_arg;
#line 565 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__conv0_HeadVar__2_101;

#line 565 "add_clause.m"
    {
#line 565 "add_clause.m"
      hlds__make_hlds__add_clause__succeeded = hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__565__1_1_f_0(((MR_Word) hlds__make_hlds__add_clause__wrapper_arg_1), &hlds__make_hlds__add_clause__conv0_HeadVar__2_101);
    }
#line 565 "add_clause.m"
    if (hlds__make_hlds__add_clause__succeeded)
#line 565 "add_clause.m"
      {
#line 565 "add_clause.m"
        *hlds__make_hlds__add_clause__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_clause__conv0_HeadVar__2_101));
#line 565 "add_clause.m"
        hlds__make_hlds__add_clause__succeeded = MR_TRUE;
#line 565 "add_clause.m"
      }
#line 565 "add_clause.m"
    return hlds__make_hlds__add_clause__succeeded;
#line 565 "add_clause.m"
  }
#line 565 "add_clause.m"
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
  MR_Word hlds__make_hlds__add_clause__PredStatus_33,
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
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_81,
#line 31 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_82,
#line 31 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__QuantWarnings_41,
#line 31 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_83,
#line 31 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_84,
#line 31 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_85,
#line 31 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_86,
#line 31 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_87,
#line 31 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_88)
#line 31 "add_clause.m"
{
#line 513 "add_clause.m"
  {
#line 513 "add_clause.m"
    MR_bool hlds__make_hlds__add_clause__succeeded;
#line 513 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__VarSet0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_81, (MR_Integer) 0)));
#line 513 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__ExplicitVarTypes0_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_81, (MR_Integer) 1)));
#line 513 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__TVarNameMap0_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_81, (MR_Integer) 2)));
#line 513 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__InferredVarTypes_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_81, (MR_Integer) 3)));
#line 513 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__HeadVars_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_81, (MR_Integer) 4)));
#line 513 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__ClausesRep0_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_81, (MR_Integer) 5)));
#line 513 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__ItemNumbers0_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_81, (MR_Integer) 6)));
#line 513 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__RttiVarMaps_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_81, (MR_Integer) 7)));
#line 513 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__HasForeignClauses_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_81, (MR_Integer) 8)));
#line 513 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__IsEmpty_54;
#line 513 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__TVarNameMap_55;
#line 513 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__MaybeOptImported_56;
#line 513 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__VarSet1_57;
#line 513 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__Renaming_58;
#line 513 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__Goal0_59;
#line 513 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__StateVarWarnings_60;
#line 513 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__StateVarErrors_61;
#line 513 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__FoundError_62;
#line 513 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_90_90;
#line 513 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_92_92;
#line 513 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_93_93;
#line 531 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_89_89;

#line 517 "add_clause.m"
    {
#line 517 "add_clause.m"
      hlds__make_hlds__add_clause__IsEmpty_54 = hlds__hlds_clauses__clause_list_is_empty_1_f_0(hlds__make_hlds__add_clause__ClausesRep0_50);
    }
#line 527 "add_clause.m"
#line 527 "add_clause.m"
    switch (hlds__make_hlds__add_clause__IsEmpty_54) {
#line 527 "add_clause.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 527 "add_clause.m"
      case (MR_Integer) 0:
#line 529 "add_clause.m"
        hlds__make_hlds__add_clause__TVarNameMap_55 = hlds__make_hlds__add_clause__TVarNameMap0_47;
#line 527 "add_clause.m"
        break;
#line 527 "add_clause.m"
      case (MR_Integer) 1:
#line 519 "add_clause.m"
        {
#line 526 "add_clause.m"
          {
#line 526 "add_clause.m"
            mercury__varset__create_name_var_map_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, hlds__make_hlds__add_clause__TVarSet0_28, &hlds__make_hlds__add_clause__TVarNameMap_55);
          }
#line 519 "add_clause.m"
        }
#line 527 "add_clause.m"
        break;
#line 527 "add_clause.m"
    }
#line 531 "add_clause.m"
    hlds__make_hlds__add_clause__V_89_89 = (MR_Word) hlds__make_hlds__add_clause__PredStatus_33;
#line 531 "add_clause.m"
    hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__V_89_89 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 533 "add_clause.m"
    if (hlds__make_hlds__add_clause__succeeded)
#line 532 "add_clause.m"
      hlds__make_hlds__add_clause__MaybeOptImported_56 = (MR_Integer) 1;
#line 533 "add_clause.m"
    else
#line 534 "add_clause.m"
      hlds__make_hlds__add_clause__MaybeOptImported_56 = (MR_Integer) 0;
#line 536 "add_clause.m"
    {
#line 536 "add_clause.m"
      hlds__make_hlds__qual_info__update_qual_info_6_p_0(hlds__make_hlds__add_clause__TVarNameMap_55, hlds__make_hlds__add_clause__TVarSet0_28, hlds__make_hlds__add_clause__ExplicitVarTypes0_46, hlds__make_hlds__add_clause__MaybeOptImported_56, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_85, &hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_90_90);
    }
#line 538 "add_clause.m"
    {
#line 538 "add_clause.m"
      mercury__varset__merge_renaming_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__add_clause__VarSet0_45, hlds__make_hlds__add_clause__CVarSet_27, &hlds__make_hlds__add_clause__VarSet1_57, &hlds__make_hlds__add_clause__Renaming_58);
    }
#line 539 "add_clause.m"
    {
#line 539 "add_clause.m"
      hlds__make_hlds__add_clause__add_clause_transform_20_p_0(hlds__make_hlds__add_clause__Renaming_58, hlds__make_hlds__add_clause__HeadVars_49, hlds__make_hlds__add_clause__Args_29, hlds__make_hlds__add_clause__Body_30, hlds__make_hlds__add_clause__Context_31, hlds__make_hlds__add_clause__PredOrFunc_34, hlds__make_hlds__add_clause__Arity_35, hlds__make_hlds__add_clause__GoalType_36, &hlds__make_hlds__add_clause__Goal0_59, hlds__make_hlds__add_clause__VarSet1_57, hlds__make_hlds__add_clause__VarSet_38, hlds__make_hlds__add_clause__QuantWarnings_41, &hlds__make_hlds__add_clause__StateVarWarnings_60, &hlds__make_hlds__add_clause__StateVarErrors_61, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_83, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_84, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_90_90, &hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_92_92, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_87, &hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_93_93);
    }
#line 543 "add_clause.m"
    {
#line 543 "add_clause.m"
      hlds__make_hlds__qual_info__qual_info_get_tvarset_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_92_92, hlds__make_hlds__add_clause__TVarSet_39);
    }
#line 544 "add_clause.m"
    {
#line 544 "add_clause.m"
      hlds__make_hlds__qual_info__qual_info_get_found_syntax_error_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_92_92, &hlds__make_hlds__add_clause__FoundError_62);
    }
#line 545 "add_clause.m"
    {
#line 545 "add_clause.m"
      hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_p_0((MR_Integer) 0, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_92_92, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_86);
    }
#line 547 "add_clause.m"
    hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__FoundError_62 == (MR_Integer) 1);
#line 548 "add_clause.m"
    if (!(hlds__make_hlds__add_clause__succeeded))
#line 548 "add_clause.m"
      {
#line 548 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_63_63;
#line 548 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_64_64;

#line 548 "add_clause.m"
        hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__StateVarErrors_61)) == (MR_mktag((MR_Integer) 1)));
#line 548 "add_clause.m"
        if (hlds__make_hlds__add_clause__succeeded)
#line 548 "add_clause.m"
          {
#line 548 "add_clause.m"
            hlds__make_hlds__add_clause__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__StateVarErrors_61, (MR_Integer) 0)));
#line 548 "add_clause.m"
            hlds__make_hlds__add_clause__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__StateVarErrors_61, (MR_Integer) 1)));
#line 548 "add_clause.m"
          }
#line 548 "add_clause.m"
      }
#line 557 "add_clause.m"
    if (hlds__make_hlds__add_clause__succeeded)
#line 555 "add_clause.m"
      {
#line 555 "add_clause.m"
        {
#line 555 "add_clause.m"
          *hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_88 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__make_hlds__add_clause__StateVarErrors_61, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_93_93);
        }
#line 556 "add_clause.m"
        {
#line 556 "add_clause.m"
          *hlds__make_hlds__add_clause__Goal_37 = hlds__make_goal__true_goal_0_f_0();
        }
#line 555 "add_clause.m"
        *hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_82 = hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_81;
#line 555 "add_clause.m"
      }
#line 557 "add_clause.m"
    else
#line 558 "add_clause.m"
      {
#line 558 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__ClausesRep_74;
#line 558 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__ExplicitVarTypes_79;
#line 558 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__ItemNumbers_80;

#line 558 "add_clause.m"
        *hlds__make_hlds__add_clause__Goal_37 = hlds__make_hlds__add_clause__Goal0_59;
#line 594 "add_clause.m"
#line 594 "add_clause.m"
        switch (hlds__make_hlds__add_clause__HasForeignClauses_53) {
#line 594 "add_clause.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 594 "add_clause.m"
          case (MR_Integer) 0:
#line 595 "add_clause.m"
            {
#line 595 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__Clause_110;

#line 596 "add_clause.m"
              {
#line 596 "add_clause.m"
                hlds__make_hlds__add_clause__Clause_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 596 "add_clause.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clause_110, 0) = ((MR_Box) (hlds__make_hlds__add_clause__ApplModeIds0_25));
#line 596 "add_clause.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clause_110, 1) = ((MR_Box) (*hlds__make_hlds__add_clause__Goal_37));
#line 596 "add_clause.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clause_110, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 596 "add_clause.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clause_110, 3) = ((MR_Box) (hlds__make_hlds__add_clause__Context_31));
#line 596 "add_clause.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clause_110, 4) = ((MR_Box) (hlds__make_hlds__add_clause__StateVarWarnings_60));
#line 596 "add_clause.m"
              }
#line 598 "add_clause.m"
              {
#line 598 "add_clause.m"
                hlds__hlds_clauses__add_clause_3_p_0(hlds__make_hlds__add_clause__Clause_110, hlds__make_hlds__add_clause__ClausesRep0_50, &hlds__make_hlds__add_clause__ClausesRep_74);
              }
#line 595 "add_clause.m"
            }
#line 594 "add_clause.m"
            break;
#line 594 "add_clause.m"
          case (MR_Integer) 1:
#line 563 "add_clause.m"
            {
#line 563 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__TypeCtorInfo_122_122;
#line 563 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__Clauses0_65;
#line 563 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__ClausesRep1_66;
#line 563 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__ForeignModeIds_67;
#line 563 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__ModeIds0_72;
#line 563 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__ModeIds_73;
#line 563 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__V_98_98;

#line 564 "add_clause.m"
              {
#line 564 "add_clause.m"
                hlds__hlds_clauses__get_clause_list_3_p_0(&hlds__make_hlds__add_clause__Clauses0_65, hlds__make_hlds__add_clause__ClausesRep0_50, &hlds__make_hlds__add_clause__ClausesRep1_66);
              }
#line 4264 "hlds.make_hlds.add_clause.c"
              hlds__make_hlds__add_clause__TypeCtorInfo_122_122 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 565 "add_clause.m"
              {
#line 565 "add_clause.m"
                hlds__make_hlds__add_clause__V_98_98 = mercury__list__filter_map_2_f_0((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, (MR_Word) &hlds__make_hlds__add_clause_scalar_common_1[1], (MR_Word) &hlds__make_hlds__add_clause_scalar_common_4[0], hlds__make_hlds__add_clause__Clauses0_65);
              }
#line 565 "add_clause.m"
              {
#line 565 "add_clause.m"
                hlds__make_hlds__add_clause__ForeignModeIds_67 = mercury__list__condense_1_f_0(hlds__make_hlds__add_clause__TypeCtorInfo_122_122, hlds__make_hlds__add_clause__V_98_98);
              }
#line 580 "add_clause.m"
              if ((hlds__make_hlds__add_clause__ApplModeIds0_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 579 "add_clause.m"
                hlds__make_hlds__add_clause__ModeIds0_72 = hlds__make_hlds__add_clause__AllModeIds_26;
#line 580 "add_clause.m"
              else
#line 581 "add_clause.m"
                hlds__make_hlds__add_clause__ModeIds0_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__ApplModeIds0_25, (MR_Integer) 0)));
#line 583 "add_clause.m"
              {
#line 583 "add_clause.m"
                hlds__make_hlds__add_clause__ModeIds_73 = mercury__list__delete_elems_2_f_0(hlds__make_hlds__add_clause__TypeCtorInfo_122_122, hlds__make_hlds__add_clause__ModeIds0_72, hlds__make_hlds__add_clause__ForeignModeIds_67);
              }
#line 587 "add_clause.m"
              if ((hlds__make_hlds__add_clause__ModeIds_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 586 "add_clause.m"
                hlds__make_hlds__add_clause__ClausesRep_74 = hlds__make_hlds__add_clause__ClausesRep1_66;
#line 587 "add_clause.m"
              else
#line 588 "add_clause.m"
                {
#line 588 "add_clause.m"
                  MR_Word hlds__make_hlds__add_clause__ApplicableModeIds_77;
#line 588 "add_clause.m"
                  MR_Word hlds__make_hlds__add_clause__Clause_78;

#line 589 "add_clause.m"
                  {
#line 589 "add_clause.m"
                    hlds__make_hlds__add_clause__ApplicableModeIds_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 589 "add_clause.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__ApplicableModeIds_77, 0) = ((MR_Box) (hlds__make_hlds__add_clause__ModeIds_73));
#line 589 "add_clause.m"
                  }
#line 590 "add_clause.m"
                  {
#line 590 "add_clause.m"
                    hlds__make_hlds__add_clause__Clause_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 590 "add_clause.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clause_78, 0) = ((MR_Box) (hlds__make_hlds__add_clause__ApplicableModeIds_77));
#line 590 "add_clause.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clause_78, 1) = ((MR_Box) (*hlds__make_hlds__add_clause__Goal_37));
#line 590 "add_clause.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clause_78, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 590 "add_clause.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clause_78, 3) = ((MR_Box) (hlds__make_hlds__add_clause__Context_31));
#line 590 "add_clause.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clause_78, 4) = ((MR_Box) (hlds__make_hlds__add_clause__StateVarWarnings_60));
#line 590 "add_clause.m"
                  }
#line 592 "add_clause.m"
                  {
#line 592 "add_clause.m"
                    hlds__hlds_clauses__add_clause_3_p_0(hlds__make_hlds__add_clause__Clause_78, hlds__make_hlds__add_clause__ClausesRep1_66, &hlds__make_hlds__add_clause__ClausesRep_74);
                  }
#line 588 "add_clause.m"
                }
#line 563 "add_clause.m"
            }
#line 594 "add_clause.m"
            break;
#line 594 "add_clause.m"
        }
#line 600 "add_clause.m"
        {
#line 600 "add_clause.m"
          hlds__make_hlds__qual_info__qual_info_get_var_types_2_p_0(*hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_86, &hlds__make_hlds__add_clause__ExplicitVarTypes_79);
        }
#line 601 "add_clause.m"
        {
#line 601 "add_clause.m"
          hlds__hlds_clauses__add_clause_item_number_5_p_0(hlds__make_hlds__add_clause__MaybeSeqNum_32, hlds__make_hlds__add_clause__Context_31, (MR_Integer) 0, hlds__make_hlds__add_clause__ItemNumbers0_51, &hlds__make_hlds__add_clause__ItemNumbers_80);
        }
#line 603 "add_clause.m"
        {
#line 603 "add_clause.m"
          MR_Word base;
#line 603 "add_clause.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 603 "add_clause.m"
          *hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_82 = base;
#line 603 "add_clause.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (*hlds__make_hlds__add_clause__VarSet_38));
#line 603 "add_clause.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__add_clause__ExplicitVarTypes_79));
#line 603 "add_clause.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__add_clause__TVarNameMap_55));
#line 603 "add_clause.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__make_hlds__add_clause__InferredVarTypes_48));
#line 603 "add_clause.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__make_hlds__add_clause__HeadVars_49));
#line 603 "add_clause.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__make_hlds__add_clause__ClausesRep_74));
#line 603 "add_clause.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__make_hlds__add_clause__ItemNumbers_80));
#line 603 "add_clause.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__make_hlds__add_clause__RttiVarMaps_52));
#line 603 "add_clause.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__make_hlds__add_clause__HasForeignClauses_53));
#line 603 "add_clause.m"
        }
#line 558 "add_clause.m"
        *hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_88 = hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_93_93;
#line 558 "add_clause.m"
      }
#line 513 "add_clause.m"
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
#line 84 "add_clause.m"
  {
#line 84 "add_clause.m"
    MR_bool hlds__make_hlds__add_clause__succeeded;
#line 84 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__IllegalSVarResult_29;
#line 84 "add_clause.m"
    MR_Integer hlds__make_hlds__add_clause__ArityAdjustment_30;
#line 84 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__Args_32;
#line 84 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__ModuleName_33;
#line 84 "add_clause.m"
    MR_Integer hlds__make_hlds__add_clause__Arity0_34;
#line 84 "add_clause.m"
    MR_Integer hlds__make_hlds__add_clause__Arity_35;
#line 84 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__PredicateTable_37;
#line 84 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__PredIds_38;
#line 87 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__SVar_28;
#line 90 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_31_31;
#line 4445 "hlds.make_hlds.add_clause.c"
    MR_Word hlds__make_hlds__add_clause__PredIdPrime_39;
#line 103 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_58_58;

#line 85 "add_clause.m"
    {
#line 85 "add_clause.m"
      hlds__make_hlds__add_clause__succeeded = hlds__make_hlds__state_var__illegal_state_var_func_result_3_p_0(hlds__make_hlds__add_clause__PredOrFunc_17, hlds__make_hlds__add_clause__Args0_19, &hlds__make_hlds__add_clause__SVar_28);
    }
#line 87 "add_clause.m"
    if (hlds__make_hlds__add_clause__succeeded)
#line 86 "add_clause.m"
      {
#line 86 "add_clause.m"
        hlds__make_hlds__add_clause__IllegalSVarResult_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 86 "add_clause.m"
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__IllegalSVarResult_29, 0) = ((MR_Box) (hlds__make_hlds__add_clause__SVar_28));
#line 86 "add_clause.m"
      }
#line 87 "add_clause.m"
    else
#line 88 "add_clause.m"
      hlds__make_hlds__add_clause__IllegalSVarResult_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 90 "add_clause.m"
    hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__IllegalSVarResult_29)) == (MR_mktag((MR_Integer) 1)));
#line 90 "add_clause.m"
    if (hlds__make_hlds__add_clause__succeeded)
#line 90 "add_clause.m"
      {
#line 90 "add_clause.m"
        hlds__make_hlds__add_clause__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__IllegalSVarResult_29, (MR_Integer) 0)));
#line 90 "add_clause.m"
        hlds__make_hlds__add_clause__ArityAdjustment_30 = (MR_Integer) -1;
#line 90 "add_clause.m"
      }
#line 90 "add_clause.m"
    else
#line 90 "add_clause.m"
      hlds__make_hlds__add_clause__ArityAdjustment_30 = (MR_Integer) 0;
#line 91 "add_clause.m"
    {
#line 91 "add_clause.m"
      hlds__make_hlds__state_var__expand_bang_states_2_p_0(hlds__make_hlds__add_clause__Args0_19, &hlds__make_hlds__add_clause__Args_32);
    }
#line 96 "add_clause.m"
    {
#line 96 "add_clause.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_51, &hlds__make_hlds__add_clause__ModuleName_33);
    }
#line 97 "add_clause.m"
    {
#line 97 "add_clause.m"
      mercury__list__length_2_p_0((MR_Word) &hlds__make_hlds__add_clause_scalar_common_1[0], hlds__make_hlds__add_clause__Args_32, &hlds__make_hlds__add_clause__Arity0_34);
    }
#line 98 "add_clause.m"
    hlds__make_hlds__add_clause__Arity_35 = (hlds__make_hlds__add_clause__Arity0_34 + hlds__make_hlds__add_clause__ArityAdjustment_30);
#line 100 "add_clause.m"
    {
#line 100 "add_clause.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_51, &hlds__make_hlds__add_clause__PredicateTable_37);
    }
#line 101 "add_clause.m"
    {
#line 101 "add_clause.m"
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__make_hlds__add_clause__PredicateTable_37, (MR_Integer) 0, hlds__make_hlds__add_clause__PredOrFunc_17, hlds__make_hlds__add_clause__PredName_18, hlds__make_hlds__add_clause__Arity_35, &hlds__make_hlds__add_clause__PredIds_38);
    }
#line 103 "add_clause.m"
    hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__PredIds_38)) == (MR_mktag((MR_Integer) 1)));
#line 103 "add_clause.m"
    if (hlds__make_hlds__add_clause__succeeded)
#line 103 "add_clause.m"
      {
#line 103 "add_clause.m"
        hlds__make_hlds__add_clause__PredIdPrime_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__PredIds_38, (MR_Integer) 0)));
#line 103 "add_clause.m"
        hlds__make_hlds__add_clause__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__PredIds_38, (MR_Integer) 1)));
#line 103 "add_clause.m"
        hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__V_58_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 103 "add_clause.m"
      }
#line 4526 "hlds.make_hlds.add_clause.c"
    if (hlds__make_hlds__add_clause__succeeded)
#line 4528 "hlds.make_hlds.add_clause.c"
      {
#line 105 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_41_41;

#line 105 "add_clause.m"
        hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__GoalType_24)) == (MR_mktag((MR_Integer) 1)));
#line 105 "add_clause.m"
        if (hlds__make_hlds__add_clause__succeeded)
#line 105 "add_clause.m"
          {
#line 105 "add_clause.m"
            hlds__make_hlds__add_clause__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__GoalType_24, (MR_Integer) 0)));
#line 106 "add_clause.m"
            {
#line 106 "add_clause.m"
              MR_String hlds__make_hlds__add_clause__NameString_42;
#line 106 "add_clause.m"
              MR_String hlds__make_hlds__add_clause__UnexpectedMsg_43;
#line 106 "add_clause.m"
              MR_String hlds__make_hlds__add_clause__V_127_127;
#line 106 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__V_133_133;
#line 106 "add_clause.m"
              MR_String hlds__make_hlds__add_clause__V_134_134;
#line 106 "add_clause.m"
              MR_String hlds__make_hlds__add_clause__V_136_136;
#line 106 "add_clause.m"
              MR_String hlds__make_hlds__add_clause__V_137_137;
#line 106 "add_clause.m"
              MR_String hlds__make_hlds__add_clause__V_144_144;
#line 106 "add_clause.m"
              MR_String hlds__make_hlds__add_clause__V_146_146;
#line 106 "add_clause.m"
              MR_String hlds__make_hlds__add_clause__V_147_147;
#line 106 "add_clause.m"
              MR_String hlds__make_hlds__add_clause__V_154_154;
#line 106 "add_clause.m"
              MR_String hlds__make_hlds__add_clause__V_156_156;
#line 106 "add_clause.m"
              MR_String hlds__make_hlds__add_clause__V_157_157;

#line 106 "add_clause.m"
              {
#line 106 "add_clause.m"
                hlds__make_hlds__add_clause__NameString_42 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__make_hlds__add_clause__PredName_18);
              }
#line 4575 "hlds.make_hlds.add_clause.c"
              hlds__make_hlds__add_clause__V_133_133 = (MR_Word) &hlds__make_hlds__add_clause_scalar_common_2[2];
#line 111 "add_clause.m"
              {
#line 111 "add_clause.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__make_hlds__add_clause__V_133_133, hlds__make_hlds__add_clause__NameString_42, &hlds__make_hlds__add_clause__V_127_127);
              }
#line 107 "add_clause.m"
              {
#line 107 "add_clause.m"
                hlds__make_hlds__add_clause__V_134_134 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_clause__V_127_127, (MR_String) ").\n");
              }
#line 107 "add_clause.m"
              {
#line 107 "add_clause.m"
                hlds__make_hlds__add_clause__V_136_136 = mercury__string__f_43_43_2_f_0((MR_String) " (", hlds__make_hlds__add_clause__V_134_134);
              }
#line 110 "add_clause.m"
              {
#line 110 "add_clause.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__make_hlds__add_clause__V_133_133, (MR_String) "name to an existing predicate", &hlds__make_hlds__add_clause__V_137_137);
              }
#line 107 "add_clause.m"
              {
#line 107 "add_clause.m"
                hlds__make_hlds__add_clause__V_144_144 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_clause__V_137_137, hlds__make_hlds__add_clause__V_136_136);
              }
#line 107 "add_clause.m"
              {
#line 107 "add_clause.m"
                hlds__make_hlds__add_clause__V_146_146 = mercury__string__f_43_43_2_f_0((MR_String) " ", hlds__make_hlds__add_clause__V_144_144);
              }
#line 109 "add_clause.m"
              {
#line 109 "add_clause.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__make_hlds__add_clause__V_133_133, (MR_String) "for a promise with an identical", &hlds__make_hlds__add_clause__V_147_147);
              }
#line 107 "add_clause.m"
              {
#line 107 "add_clause.m"
                hlds__make_hlds__add_clause__V_154_154 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_clause__V_147_147, hlds__make_hlds__add_clause__V_146_146);
              }
#line 107 "add_clause.m"
              {
#line 107 "add_clause.m"
                hlds__make_hlds__add_clause__V_156_156 = mercury__string__f_43_43_2_f_0((MR_String) " ", hlds__make_hlds__add_clause__V_154_154);
              }
#line 108 "add_clause.m"
              {
#line 108 "add_clause.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__make_hlds__add_clause__V_133_133, (MR_String) "Attempted to introduce a predicate", &hlds__make_hlds__add_clause__V_157_157);
              }
#line 107 "add_clause.m"
              {
#line 107 "add_clause.m"
                hlds__make_hlds__add_clause__UnexpectedMsg_43 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_clause__V_157_157, hlds__make_hlds__add_clause__V_156_156);
              }
#line 112 "add_clause.m"
              {
#line 112 "add_clause.m"
                mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_clause", (MR_String) "predicate \140hlds.make_hlds.add_clause.module_add_clause\'/15", hlds__make_hlds__add_clause__UnexpectedMsg_43);
#line 112 "add_clause.m"
                return;
              }
#line 106 "add_clause.m"
            }
#line 105 "add_clause.m"
          }
#line 105 "add_clause.m"
        else
#line 114 "add_clause.m"
          {
#line 114 "add_clause.m"
          }
#line 143 "add_clause.m"
        {
#line 143 "add_clause.m"
          hlds__make_hlds__add_clause__module_add_clause_2_19_p_0(hlds__make_hlds__add_clause__ClauseVarSet_16, hlds__make_hlds__add_clause__PredOrFunc_17, hlds__make_hlds__add_clause__PredName_18, hlds__make_hlds__add_clause__PredIdPrime_39, hlds__make_hlds__add_clause__Args_32, hlds__make_hlds__add_clause__Arity_35, hlds__make_hlds__add_clause__ArityAdjustment_30, hlds__make_hlds__add_clause__Body_20, hlds__make_hlds__add_clause__Status_21, hlds__make_hlds__add_clause__Context_22, hlds__make_hlds__add_clause__MaybeSeqNum_23, hlds__make_hlds__add_clause__GoalType_24, hlds__make_hlds__add_clause__IllegalSVarResult_29, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_51, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_52, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_53, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_54, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_55, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_56);
#line 143 "add_clause.m"
          return;
        }
#line 4656 "hlds.make_hlds.add_clause.c"
      }
#line 4658 "hlds.make_hlds.add_clause.c"
    else
#line 4660 "hlds.make_hlds.add_clause.c"
      {
#line 4662 "hlds.make_hlds.add_clause.c"
        MR_Word hlds__make_hlds__add_clause__MaybePredId_122;
#line 4664 "hlds.make_hlds.add_clause.c"
        MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_105_124;
#line 4666 "hlds.make_hlds.add_clause.c"
        MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_106_125;
#line 116 "add_clause.m"
        MR_String hlds__make_hlds__add_clause__V_74_74;

#line 116 "add_clause.m"
        {
#line 116 "add_clause.m"
          hlds__make_hlds__add_clause__V_74_74 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__make_hlds__add_clause__PredName_18);
        }
#line 116 "add_clause.m"
        hlds__make_hlds__add_clause__succeeded = (strcmp(hlds__make_hlds__add_clause__V_74_74, (MR_String) ",") == 0);
#line 116 "add_clause.m"
        if (hlds__make_hlds__add_clause__succeeded)
#line 116 "add_clause.m"
          hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__Arity_35 == (MR_Integer) 2);
#line 126 "add_clause.m"
        if (hlds__make_hlds__add_clause__succeeded)
#line 117 "add_clause.m"
          {
#line 117 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__Msg_45;
#line 117 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__Spec_46;
#line 117 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_103_103;

#line 117 "add_clause.m"
            hlds__make_hlds__add_clause__MaybePredId_122 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 123 "add_clause.m"
            {
#line 123 "add_clause.m"
              hlds__make_hlds__add_clause__Msg_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 123 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Msg_45, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Context_22));
#line 123 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Msg_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[50])));
#line 123 "add_clause.m"
            }
#line 124 "add_clause.m"
            {
#line 124 "add_clause.m"
              hlds__make_hlds__add_clause__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 124 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_103_103, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Msg_45));
#line 124 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_103_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 124 "add_clause.m"
            }
#line 124 "add_clause.m"
            {
#line 124 "add_clause.m"
              hlds__make_hlds__add_clause__Spec_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 124 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 124 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 124 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_46, 2) = ((MR_Box) (hlds__make_hlds__add_clause__V_103_103));
#line 124 "add_clause.m"
            }
#line 125 "add_clause.m"
            {
#line 125 "add_clause.m"
              hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_105_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 125 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_105_124, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Spec_46));
#line 125 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_105_124, 1) = ((MR_Box) (hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_55));
#line 125 "add_clause.m"
            }
#line 117 "add_clause.m"
            hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_106_125 = hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_51;
#line 117 "add_clause.m"
          }
#line 126 "add_clause.m"
        else
#line 138 "add_clause.m"
          {
#line 138 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__NewPredId_49;
#line 128 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_47_47;

#line 128 "add_clause.m"
            hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__GoalType_24)) == (MR_mktag((MR_Integer) 1)));
#line 128 "add_clause.m"
            if (hlds__make_hlds__add_clause__succeeded)
#line 128 "add_clause.m"
              {
#line 128 "add_clause.m"
                hlds__make_hlds__add_clause__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__GoalType_24, (MR_Integer) 0)));
#line 129 "add_clause.m"
                {
#line 129 "add_clause.m"
                  MR_Word hlds__make_hlds__add_clause__HeadVars_48;

#line 129 "add_clause.m"
                  {
#line 129 "add_clause.m"
                    hlds__make_hlds__add_clause__HeadVars_48 = mercury__term__term_list_to_var_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__add_clause__Args_32);
                  }
#line 130 "add_clause.m"
                  {
#line 130 "add_clause.m"
                    hlds__make_hlds__add_pred__preds_add_implicit_for_assertion_10_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_51, &hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_106_125, hlds__make_hlds__add_clause__ModuleName_33, hlds__make_hlds__add_clause__PredName_18, hlds__make_hlds__add_clause__Arity_35, hlds__make_hlds__add_clause__PredOrFunc_17, hlds__make_hlds__add_clause__HeadVars_48, hlds__make_hlds__add_clause__Status_21, hlds__make_hlds__add_clause__Context_22, &hlds__make_hlds__add_clause__NewPredId_49);
                  }
#line 129 "add_clause.m"
                  hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_105_124 = hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_55;
#line 129 "add_clause.m"
                }
#line 128 "add_clause.m"
              }
#line 128 "add_clause.m"
            else
#line 134 "add_clause.m"
              {
#line 134 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__V_109_109;

#line 136 "add_clause.m"
                {
#line 136 "add_clause.m"
                  hlds__make_hlds__add_clause__V_109_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 136 "add_clause.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_109_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 136 "add_clause.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_109_109, 1) = ((MR_Box) (hlds__make_hlds__add_clause__PredName_18));
#line 136 "add_clause.m"
                }
#line 134 "add_clause.m"
                {
#line 134 "add_clause.m"
                  hlds__make_hlds__add_pred__preds_add_implicit_report_error_14_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_51, &hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_106_125, hlds__make_hlds__add_clause__ModuleName_33, hlds__make_hlds__add_clause__PredName_18, hlds__make_hlds__add_clause__Arity_35, hlds__make_hlds__add_clause__PredOrFunc_17, hlds__make_hlds__add_clause__Status_21, (MR_Integer) 0, hlds__make_hlds__add_clause__Context_22, hlds__make_hlds__add_clause__V_109_109, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[52]), &hlds__make_hlds__add_clause__NewPredId_49, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_55, &hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_105_124);
                }
#line 134 "add_clause.m"
              }
#line 139 "add_clause.m"
            {
#line 139 "add_clause.m"
              hlds__make_hlds__add_clause__MaybePredId_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 139 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__MaybePredId_122, 0) = ((MR_Box) (hlds__make_hlds__add_clause__NewPredId_49));
#line 139 "add_clause.m"
            }
#line 138 "add_clause.m"
          }
#line 147 "add_clause.m"
        if ((hlds__make_hlds__add_clause__MaybePredId_122 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 148 "add_clause.m"
          {
#line 148 "add_clause.m"
            *hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_52 = hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_106_125;
#line 148 "add_clause.m"
            *hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_54 = hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_53;
#line 148 "add_clause.m"
            *hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_56 = hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_105_124;
#line 148 "add_clause.m"
          }
#line 147 "add_clause.m"
        else
#line 142 "add_clause.m"
          {
#line 142 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__PredId_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__MaybePredId_122, (MR_Integer) 0)));

#line 143 "add_clause.m"
            {
#line 143 "add_clause.m"
              hlds__make_hlds__add_clause__module_add_clause_2_19_p_0(hlds__make_hlds__add_clause__ClauseVarSet_16, hlds__make_hlds__add_clause__PredOrFunc_17, hlds__make_hlds__add_clause__PredName_18, hlds__make_hlds__add_clause__PredId_120, hlds__make_hlds__add_clause__Args_32, hlds__make_hlds__add_clause__Arity_35, hlds__make_hlds__add_clause__ArityAdjustment_30, hlds__make_hlds__add_clause__Body_20, hlds__make_hlds__add_clause__Status_21, hlds__make_hlds__add_clause__Context_22, hlds__make_hlds__add_clause__MaybeSeqNum_23, hlds__make_hlds__add_clause__GoalType_24, hlds__make_hlds__add_clause__IllegalSVarResult_29, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_106_125, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_52, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_53, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_54, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_105_124, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_56);
#line 143 "add_clause.m"
              return;
            }
#line 142 "add_clause.m"
          }
#line 4841 "hlds.make_hlds.add_clause.c"
      }
#line 84 "add_clause.m"
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
