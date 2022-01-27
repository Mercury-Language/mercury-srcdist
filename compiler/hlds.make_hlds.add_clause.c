/*
** Automatically generated from `add_clause.m'
** by the Mercury compiler,
** version rotd-14.01.1-2014-05-28, configured for x86_64-apple-darwin13.1.0.
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




#line 156 "hlds.make_hlds.add_clause.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_clause__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

#line 159 "hlds.make_hlds.add_clause.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_clause__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0;

#line 162 "hlds.make_hlds.add_clause.c"
static const MR_DuFunctorDesc hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_0;

#line 165 "hlds.make_hlds.add_clause.c"
static const MR_DuFunctorDesc hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_1;

#line 168 "hlds.make_hlds.add_clause.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_clause__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0;

#line 171 "hlds.make_hlds.add_clause.c"
static const MR_PseudoTypeInfo hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__field_types_mode_annotations_0_2[1];

#line 174 "hlds.make_hlds.add_clause.c"
static const MR_DuFunctorDesc hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_2;

#line 177 "hlds.make_hlds.add_clause.c"
static const MR_DuFunctorDesc hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_3;

#line 180 "hlds.make_hlds.add_clause.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_stag_ordered_mode_annotations_0_0[3];

#line 183 "hlds.make_hlds.add_clause.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_stag_ordered_mode_annotations_0_1[1];

#line 186 "hlds.make_hlds.add_clause.c"
static const MR_DuPtagLayout hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_ptag_ordered_mode_annotations_0[2];

#line 189 "hlds.make_hlds.add_clause.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_name_ordered_mode_annotations_0[4];

#line 192 "hlds.make_hlds.add_clause.c"
static const MR_Integer hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__functor_number_map_mode_annotations_0[4];

#line 195 "hlds.make_hlds.add_clause.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_clause____Unify____mode_annotations_0_0_10001(
#line 198 "hlds.make_hlds.add_clause.c"
  MR_Box hlds__make_hlds__add_clause__wrapper_arg_1,
#line 200 "hlds.make_hlds.add_clause.c"
  MR_Box hlds__make_hlds__add_clause__wrapper_arg_2);

#line 203 "hlds.make_hlds.add_clause.c"
static void MR_CALL 
hlds__make_hlds__add_clause____Compare____mode_annotations_0_0_10001(
#line 206 "hlds.make_hlds.add_clause.c"
  MR_Box * hlds__make_hlds__add_clause__wrapper_arg_1,
#line 208 "hlds.make_hlds.add_clause.c"
  MR_Box hlds__make_hlds__add_clause__wrapper_arg_2,
#line 210 "hlds.make_hlds.add_clause.c"
  MR_Box hlds__make_hlds__add_clause__wrapper_arg_3);

#line 521 "add_clause.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__521__1_1_f_0(
#line 521 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__HeadVar__1_97,
#line 521 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__HeadVar__2_98);

#line 420 "add_clause.m"
static void MR_CALL 
hlds__make_hlds__add_clause____Compare____mode_annotations_0_0(
#line 420 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__HeadVar__1_1,
#line 420 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__HeadVar__2_2,
#line 420 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__HeadVar__3_3);

#line 420 "add_clause.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_clause____Unify____mode_annotations_0_0(
#line 420 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__HeadVar__1_1,
#line 420 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__HeadVar__2_2);

#line 566 "add_clause.m"
static void MR_CALL 
hlds__make_hlds__add_clause__add_clause_transform_20_p_0(
#line 566 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Renaming_21,
#line 566 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__HeadVars_22,
#line 566 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Args0_23,
#line 566 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__ParseBody_24,
#line 566 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Context_25,
#line 566 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredOrFunc_26,
#line 566 "add_clause.m"
  MR_Integer hlds__make_hlds__add_clause__Arity_27,
#line 566 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__GoalType_28,
#line 566 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__Goal_29,
#line 566 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_0_59,
#line 566 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_60,
#line 566 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__QuantWarnings_31,
#line 566 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__StateVarWarnings_32,
#line 566 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__StateVarErrors_33,
#line 566 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_61,
#line 566 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_62,
#line 566 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_63,
#line 566 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_64,
#line 566 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_65,
#line 566 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_66);

#line 434 "add_clause.m"
static void MR_CALL 
hlds__make_hlds__add_clause__get_mode_annotations_4_p_0(
#line 434 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__HeadVar__1_1,
#line 434 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__HeadVar__2_2,
#line 434 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_0_3,
#line 434 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_4);

#line 410 "add_clause.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_clause__mode_decl_for_pred_info_to_pieces_2_f_0(
#line 410 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredInfo_4,
#line 410 "add_clause.m"
  MR_Integer hlds__make_hlds__add_clause__ProcId_5);

#line 399 "add_clause.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_clause__undeclared_mode_error_8_p_0_1(
#line 399 "add_clause.m"
  MR_Box hlds__make_hlds__add_clause__closure_arg,
#line 399 "add_clause.m"
  MR_Box hlds__make_hlds__add_clause__wrapper_arg_1);

#line 360 "add_clause.m"
static void MR_CALL 
hlds__make_hlds__add_clause__undeclared_mode_error_8_p_0(
#line 360 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__ModeList_9,
#line 360 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__VarSet_10,
#line 360 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredId_11,
#line 360 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredInfo_12,
#line 360 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__ModuleInfo_13,
#line 360 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Context_14,
#line 360 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_31,
#line 360 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_32);

#line 292 "add_clause.m"
static void MR_CALL 
hlds__make_hlds__add_clause__select_applicable_modes_15_p_0(
#line 292 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Args0_16,
#line 292 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__VarSet_17,
#line 292 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Status_18,
#line 292 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Context_19,
#line 292 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredId_20,
#line 292 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredInfo_21,
#line 292 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__Args_22,
#line 292 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__ApplProcIds_23,
#line 292 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__AllProcIds_24,
#line 292 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_40,
#line 292 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_41,
#line 292 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_42,
#line 292 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_43,
#line 292 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_44,
#line 292 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_45);

#line 521 "add_clause.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_clause__clauses_info_add_clause_24_p_0_1(
#line 521 "add_clause.m"
  MR_Box hlds__make_hlds__add_clause__closure_arg,
#line 521 "add_clause.m"
  MR_Box hlds__make_hlds__add_clause__wrapper_arg_1,
#line 521 "add_clause.m"
  MR_Box * hlds__make_hlds__add_clause__wrapper_arg_2);


static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_1[56][2];

static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_2[2][1];

static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_3[1][5];

static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_4[1][3];

static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_5[1][6];




static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_1[56][2] = {
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
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "of the constructor a different name."))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "to a field update, give the field"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "function, for example to check the input"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[11])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "To supply your own definition for a field access"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[13])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "are automatically generated by the compiler."))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[15])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Clauses for field access functions"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[17])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: clause for builtin."))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 22 */
  {
    ((MR_Box) (&hlds__make_hlds__add_clause_scalar_common_2[0])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "have mode annotations."))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[5])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "syntax error: some but not all arguments"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[24])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[26])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[27])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ".)"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[5])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "is:"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[33])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "are the following:"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[33])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "clause"))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: clause for automatically generated"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "field access"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_clause_scalar_common_2[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In clause for"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "error: mode annotation specifies undeclared mode"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "(There are no declared modes for this"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "The declared mode for this"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "The declared modes for this"))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":- mode"))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 55 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_clause_scalar_common_2[2][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[21])))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[19])))
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
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 732 "hlds.make_hlds.add_clause.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_clause__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 740 "hlds.make_hlds.add_clause.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_clause__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0
  }
};

#line 748 "hlds.make_hlds.add_clause.c"
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

#line 763 "hlds.make_hlds.add_clause.c"
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

#line 778 "hlds.make_hlds.add_clause.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_clause__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0
  }
};

#line 786 "hlds.make_hlds.add_clause.c"
static const MR_PseudoTypeInfo hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__field_types_mode_annotations_0_2[1] = {
  (MR_PseudoTypeInfo) &hlds__make_hlds__add_clause__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0
};

#line 791 "hlds.make_hlds.add_clause.c"
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

#line 806 "hlds.make_hlds.add_clause.c"
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

#line 821 "hlds.make_hlds.add_clause.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_stag_ordered_mode_annotations_0_0[3] = {
  &hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_0,
  &hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_1,
  &hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_3
};

#line 828 "hlds.make_hlds.add_clause.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_stag_ordered_mode_annotations_0_1[1] = {
  &hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_2
};

#line 833 "hlds.make_hlds.add_clause.c"
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

#line 847 "hlds.make_hlds.add_clause.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_name_ordered_mode_annotations_0[4] = {
  &hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_0,
  &hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_3,
  &hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_2,
  &hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__du_functor_desc_mode_annotations_0_1
};

#line 855 "hlds.make_hlds.add_clause.c"
static const MR_Integer hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__functor_number_map_mode_annotations_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 863 "hlds.make_hlds.add_clause.c"
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

#line 884 "hlds.make_hlds.add_clause.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_clause____Unify____mode_annotations_0_0_10001(
#line 887 "hlds.make_hlds.add_clause.c"
  MR_Box hlds__make_hlds__add_clause__wrapper_arg_1,
#line 889 "hlds.make_hlds.add_clause.c"
  MR_Box hlds__make_hlds__add_clause__wrapper_arg_2)
#line 891 "hlds.make_hlds.add_clause.c"
{
#line 893 "hlds.make_hlds.add_clause.c"
  {
#line 895 "hlds.make_hlds.add_clause.c"
    MR_bool hlds__make_hlds__add_clause__succeeded;

#line 898 "hlds.make_hlds.add_clause.c"
    {
#line 900 "hlds.make_hlds.add_clause.c"
      hlds__make_hlds__add_clause__succeeded = hlds__make_hlds__add_clause____Unify____mode_annotations_0_0(((MR_Word) hlds__make_hlds__add_clause__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_clause__wrapper_arg_2));
    }
#line 903 "hlds.make_hlds.add_clause.c"
    return hlds__make_hlds__add_clause__succeeded;
#line 905 "hlds.make_hlds.add_clause.c"
  }
#line 907 "hlds.make_hlds.add_clause.c"
}

#line 910 "hlds.make_hlds.add_clause.c"
static void MR_CALL 
hlds__make_hlds__add_clause____Compare____mode_annotations_0_0_10001(
#line 913 "hlds.make_hlds.add_clause.c"
  MR_Box * hlds__make_hlds__add_clause__wrapper_arg_1,
#line 915 "hlds.make_hlds.add_clause.c"
  MR_Box hlds__make_hlds__add_clause__wrapper_arg_2,
#line 917 "hlds.make_hlds.add_clause.c"
  MR_Box hlds__make_hlds__add_clause__wrapper_arg_3)
#line 919 "hlds.make_hlds.add_clause.c"
{
#line 921 "hlds.make_hlds.add_clause.c"
  {
#line 923 "hlds.make_hlds.add_clause.c"
    MR_Word hlds__make_hlds__add_clause__conv0_HeadVar__1_1;

#line 926 "hlds.make_hlds.add_clause.c"
    {
#line 928 "hlds.make_hlds.add_clause.c"
      hlds__make_hlds__add_clause____Compare____mode_annotations_0_0(&hlds__make_hlds__add_clause__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__add_clause__wrapper_arg_2), ((MR_Word) hlds__make_hlds__add_clause__wrapper_arg_3));
    }
#line 931 "hlds.make_hlds.add_clause.c"
    *hlds__make_hlds__add_clause__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__add_clause__conv0_HeadVar__1_1));
#line 933 "hlds.make_hlds.add_clause.c"
  }
#line 935 "hlds.make_hlds.add_clause.c"
}

#line 521 "add_clause.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__521__1_1_f_0(
#line 521 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__HeadVar__1_97,
#line 521 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__HeadVar__2_98)
#line 521 "add_clause.m"
{
#line 521 "add_clause.m"
  {
#line 521 "add_clause.m"
    MR_bool hlds__make_hlds__add_clause__succeeded;
#line 521 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__ApplProcIds_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__HeadVar__1_97, (MR_Integer) 0)));
#line 521 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__HeadVar__1_97, (MR_Integer) 2)));
#line 523 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__HeadVar__1_97, (MR_Integer) 1)));
#line 523 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__HeadVar__1_97, (MR_Integer) 3)));
#line 523 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__HeadVar__1_97, (MR_Integer) 4)));
#line 523 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_68_68;

#line 523 "add_clause.m"
    hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__V_99_99)) == (MR_mktag((MR_Integer) 1)));
#line 523 "add_clause.m"
    if (hlds__make_hlds__add_clause__succeeded)
#line 523 "add_clause.m"
      {
#line 523 "add_clause.m"
        hlds__make_hlds__add_clause__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_99_99, (MR_Integer) 0)));
#line 528 "add_clause.m"
        if ((hlds__make_hlds__add_clause__ApplProcIds_69 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 526 "add_clause.m"
          {
#line 527 "add_clause.m"
            {
#line 527 "add_clause.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_clause", (MR_String) "predicate \140hlds.make_hlds.add_clause.clauses_info_add_clause\'/24", (MR_String) "all_modes foreign_proc");
            }
#line 526 "add_clause.m"
          }
#line 528 "add_clause.m"
        else
#line 529 "add_clause.m"
          *hlds__make_hlds__add_clause__HeadVar__2_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__ApplProcIds_69, (MR_Integer) 0)));
#line 528 "add_clause.m"
        hlds__make_hlds__add_clause__succeeded = MR_TRUE;
#line 523 "add_clause.m"
      }
#line 521 "add_clause.m"
    return hlds__make_hlds__add_clause__succeeded;
#line 521 "add_clause.m"
  }
#line 521 "add_clause.m"
}

#line 420 "add_clause.m"
static void MR_CALL 
hlds__make_hlds__add_clause____Compare____mode_annotations_0_0(
#line 420 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__HeadVar__1_1,
#line 420 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__HeadVar__2_2,
#line 420 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__HeadVar__3_3)
#line 420 "add_clause.m"
{
#line 420 "add_clause.m"
  {
#line 420 "add_clause.m"
    MR_bool hlds__make_hlds__add_clause__succeeded;
#line 420 "add_clause.m"
    MR_Integer hlds__make_hlds__add_clause__CastX_12 = (MR_Integer) hlds__make_hlds__add_clause__HeadVar__2_2;
#line 420 "add_clause.m"
    MR_Integer hlds__make_hlds__add_clause__CastY_13 = (MR_Integer) hlds__make_hlds__add_clause__HeadVar__3_3;

#line 420 "add_clause.m"
    hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__CastX_12 == hlds__make_hlds__add_clause__CastY_13);
#line 420 "add_clause.m"
    if (hlds__make_hlds__add_clause__succeeded)
#line 1022 "hlds.make_hlds.add_clause.c"
      *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 0;
#line 420 "add_clause.m"
    else
#line 420 "add_clause.m"
      if ((hlds__make_hlds__add_clause__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 420 "add_clause.m"
        if ((hlds__make_hlds__add_clause__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 420 "add_clause.m"
          *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 0;
#line 420 "add_clause.m"
        else
#line 420 "add_clause.m"
          if ((hlds__make_hlds__add_clause__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 420 "add_clause.m"
            *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 1;
#line 420 "add_clause.m"
          else
#line 420 "add_clause.m"
            if ((hlds__make_hlds__add_clause__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 420 "add_clause.m"
              *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 1;
#line 420 "add_clause.m"
            else
#line 1046 "hlds.make_hlds.add_clause.c"
              *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 1;
#line 420 "add_clause.m"
      else
#line 420 "add_clause.m"
        if ((hlds__make_hlds__add_clause__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 420 "add_clause.m"
          if ((hlds__make_hlds__add_clause__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 420 "add_clause.m"
            *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 2;
#line 420 "add_clause.m"
          else
#line 420 "add_clause.m"
            if ((hlds__make_hlds__add_clause__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 420 "add_clause.m"
              *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 0;
#line 420 "add_clause.m"
            else
#line 420 "add_clause.m"
              if ((hlds__make_hlds__add_clause__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 420 "add_clause.m"
                *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 2;
#line 420 "add_clause.m"
              else
#line 1070 "hlds.make_hlds.add_clause.c"
                *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 2;
#line 420 "add_clause.m"
        else
#line 420 "add_clause.m"
          if ((hlds__make_hlds__add_clause__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 420 "add_clause.m"
            if ((hlds__make_hlds__add_clause__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 420 "add_clause.m"
              *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 2;
#line 420 "add_clause.m"
            else
#line 420 "add_clause.m"
              if ((hlds__make_hlds__add_clause__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 420 "add_clause.m"
                *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 1;
#line 420 "add_clause.m"
              else
#line 420 "add_clause.m"
                if ((hlds__make_hlds__add_clause__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 420 "add_clause.m"
                  *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 0;
#line 420 "add_clause.m"
                else
#line 1094 "hlds.make_hlds.add_clause.c"
                  *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 1;
#line 420 "add_clause.m"
          else
#line 420 "add_clause.m"
            {
#line 420 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__HeadVar__2_2, (MR_Integer) 0)));

#line 420 "add_clause.m"
              if ((hlds__make_hlds__add_clause__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1105 "hlds.make_hlds.add_clause.c"
                *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 2;
#line 420 "add_clause.m"
              else
#line 420 "add_clause.m"
                if ((hlds__make_hlds__add_clause__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1111 "hlds.make_hlds.add_clause.c"
                  *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 1;
#line 420 "add_clause.m"
                else
#line 420 "add_clause.m"
                  if ((hlds__make_hlds__add_clause__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1117 "hlds.make_hlds.add_clause.c"
                    *hlds__make_hlds__add_clause__HeadVar__1_1 = (MR_Integer) 2;
#line 420 "add_clause.m"
                  else
#line 420 "add_clause.m"
                    {
#line 420 "add_clause.m"
                      MR_Word hlds__make_hlds__add_clause__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__HeadVar__3_3, (MR_Integer) 0)));

#line 420 "add_clause.m"
                      {
#line 420 "add_clause.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__add_clause_scalar_common_1[4], hlds__make_hlds__add_clause__HeadVar__1_1, ((MR_Box) (hlds__make_hlds__add_clause__V_15_15)), ((MR_Box) (hlds__make_hlds__add_clause__V_9_9)));
#line 420 "add_clause.m"
                        return;
                      }
#line 420 "add_clause.m"
                    }
#line 420 "add_clause.m"
            }
#line 420 "add_clause.m"
  }
#line 420 "add_clause.m"
}

#line 420 "add_clause.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_clause____Unify____mode_annotations_0_0(
#line 420 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__HeadVar__1_1,
#line 420 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__HeadVar__2_2)
#line 420 "add_clause.m"
{
#line 420 "add_clause.m"
  {
#line 420 "add_clause.m"
    MR_bool hlds__make_hlds__add_clause__succeeded;
#line 420 "add_clause.m"
    MR_Integer hlds__make_hlds__add_clause__CastX_11 = (MR_Integer) hlds__make_hlds__add_clause__HeadVar__1_1;
#line 420 "add_clause.m"
    MR_Integer hlds__make_hlds__add_clause__CastY_12 = (MR_Integer) hlds__make_hlds__add_clause__HeadVar__2_2;

#line 420 "add_clause.m"
    hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__CastX_11 == hlds__make_hlds__add_clause__CastY_12);
#line 420 "add_clause.m"
    if (hlds__make_hlds__add_clause__succeeded)
#line 420 "add_clause.m"
      hlds__make_hlds__add_clause__succeeded = MR_TRUE;
#line 420 "add_clause.m"
    else
#line 420 "add_clause.m"
      if ((hlds__make_hlds__add_clause__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 420 "add_clause.m"
        {
#line 420 "add_clause.m"
          MR_Integer hlds__make_hlds__add_clause__CastX_3 = (MR_Integer) hlds__make_hlds__add_clause__HeadVar__1_1;
#line 420 "add_clause.m"
          MR_Integer hlds__make_hlds__add_clause__CastY_4 = (MR_Integer) hlds__make_hlds__add_clause__HeadVar__2_2;

#line 420 "add_clause.m"
          hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__CastY_4 == hlds__make_hlds__add_clause__CastX_3);
#line 420 "add_clause.m"
        }
#line 420 "add_clause.m"
      else
#line 420 "add_clause.m"
        if ((hlds__make_hlds__add_clause__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 420 "add_clause.m"
          {
#line 420 "add_clause.m"
            MR_Integer hlds__make_hlds__add_clause__CastX_9 = (MR_Integer) hlds__make_hlds__add_clause__HeadVar__1_1;
#line 420 "add_clause.m"
            MR_Integer hlds__make_hlds__add_clause__CastY_10 = (MR_Integer) hlds__make_hlds__add_clause__HeadVar__2_2;

#line 420 "add_clause.m"
            hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__CastY_10 == hlds__make_hlds__add_clause__CastX_9);
#line 420 "add_clause.m"
          }
#line 420 "add_clause.m"
        else
#line 420 "add_clause.m"
          if ((hlds__make_hlds__add_clause__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 420 "add_clause.m"
            {
#line 420 "add_clause.m"
              MR_Integer hlds__make_hlds__add_clause__CastX_5 = (MR_Integer) hlds__make_hlds__add_clause__HeadVar__1_1;
#line 420 "add_clause.m"
              MR_Integer hlds__make_hlds__add_clause__CastY_6 = (MR_Integer) hlds__make_hlds__add_clause__HeadVar__2_2;

#line 420 "add_clause.m"
              hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__CastY_6 == hlds__make_hlds__add_clause__CastX_5);
#line 420 "add_clause.m"
            }
#line 420 "add_clause.m"
          else
#line 420 "add_clause.m"
            {
#line 420 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__TypeInfo_13_13;
#line 420 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__HeadVar__1_1, (MR_Integer) 0)));
#line 420 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__V_8_8;

#line 420 "add_clause.m"
              hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 420 "add_clause.m"
              if (hlds__make_hlds__add_clause__succeeded)
#line 420 "add_clause.m"
                {
#line 420 "add_clause.m"
                  hlds__make_hlds__add_clause__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__HeadVar__2_2, (MR_Integer) 0)));
#line 1230 "hlds.make_hlds.add_clause.c"
                  hlds__make_hlds__add_clause__TypeInfo_13_13 = (MR_Word) &hlds__make_hlds__add_clause_scalar_common_1[4];
#line 1232 "hlds.make_hlds.add_clause.c"
                  {
#line 1234 "hlds.make_hlds.add_clause.c"
                    return hlds__make_hlds__add_clause__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__add_clause__TypeInfo_13_13, ((MR_Box) (hlds__make_hlds__add_clause__V_7_7)), ((MR_Box) (hlds__make_hlds__add_clause__V_8_8)));
                  }
#line 420 "add_clause.m"
                }
#line 420 "add_clause.m"
            }
#line 420 "add_clause.m"
    return hlds__make_hlds__add_clause__succeeded;
#line 420 "add_clause.m"
  }
#line 420 "add_clause.m"
}

#line 566 "add_clause.m"
static void MR_CALL 
hlds__make_hlds__add_clause__add_clause_transform_20_p_0(
#line 566 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Renaming_21,
#line 566 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__HeadVars_22,
#line 566 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Args0_23,
#line 566 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__ParseBody_24,
#line 566 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Context_25,
#line 566 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredOrFunc_26,
#line 566 "add_clause.m"
  MR_Integer hlds__make_hlds__add_clause__Arity_27,
#line 566 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__GoalType_28,
#line 566 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__Goal_29,
#line 566 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_0_59,
#line 566 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_60,
#line 566 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__QuantWarnings_31,
#line 566 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__StateVarWarnings_32,
#line 566 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__StateVarErrors_33,
#line 566 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_61,
#line 566 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_62,
#line 566 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_63,
#line 566 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_64,
#line 566 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_65,
#line 566 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_66)
#line 566 "add_clause.m"
{
#line 578 "add_clause.m"
  {
#line 578 "add_clause.m"
    MR_bool hlds__make_hlds__add_clause__succeeded;
#line 578 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__HeadVarList_40;
#line 578 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__Args1_41;
#line 578 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__Args_42;
#line 578 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__FinalSVarMap_43;
#line 578 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__InitialSVarState_44;
#line 578 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__HeadGoal_46;
#line 578 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__BodyGoal_50;
#line 578 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__FinalSVarState_53;
#line 578 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__Goal0_54;
#line 578 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__VarTypes0_55;
#line 578 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__EmptyRttiVarmaps_56;
#line 578 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__VarTypes_57;
#line 578 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_68_68;
#line 578 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_SVarStore_70_70;
#line 578 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_71_71;
#line 578 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_SVarState_72_72;
#line 578 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_SVarStore_73_73;
#line 578 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_74_74;
#line 578 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_75_75;
#line 578 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_76_76;
#line 578 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_77_77;
#line 578 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_SVarStore_84_84;
#line 578 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_85_85;
#line 578 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_87_87;
#line 578 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_126_126;
#line 578 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_127_127;
#line 583 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_45_45;
#line 649 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_58_58;

#line 578 "add_clause.m"
    {
#line 578 "add_clause.m"
      hlds__make_hlds__add_clause__HeadVarList_40 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) &hlds__make_hlds__add_clause_scalar_common_1[3], hlds__make_hlds__add_clause__HeadVars_22);
    }
#line 579 "add_clause.m"
    {
#line 579 "add_clause.m"
      parse_tree__prog_data__rename_vars_in_term_list_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__add_clause__Renaming_21, hlds__make_hlds__add_clause__Args0_23, &hlds__make_hlds__add_clause__Args1_41);
    }
#line 580 "add_clause.m"
    {
#line 580 "add_clause.m"
      hlds__make_hlds__state_var__svar_prepare_for_clause_head_9_p_0(hlds__make_hlds__add_clause__Args1_41, &hlds__make_hlds__add_clause__Args_42, hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_0_59, &hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_68_68, &hlds__make_hlds__add_clause__FinalSVarMap_43, &hlds__make_hlds__add_clause__InitialSVarState_44, &hlds__make_hlds__add_clause__STATE_VARIABLE_SVarStore_70_70, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_65, &hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_71_71);
    }
#line 583 "add_clause.m"
    hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__GoalType_28)) == (MR_mktag((MR_Integer) 1)));
#line 583 "add_clause.m"
    if (hlds__make_hlds__add_clause__succeeded)
#line 583 "add_clause.m"
      {
#line 583 "add_clause.m"
        hlds__make_hlds__add_clause__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__GoalType_28, (MR_Integer) 0)));
#line 584 "add_clause.m"
        {
#line 584 "add_clause.m"
          hlds__make_hlds__add_clause__HeadGoal_46 = hlds__hlds_goal__true_goal_0_f_0();
        }
#line 584 "add_clause.m"
        hlds__make_hlds__add_clause__STATE_VARIABLE_SVarStore_73_73 = hlds__make_hlds__add_clause__STATE_VARIABLE_SVarStore_70_70;
#line 584 "add_clause.m"
        hlds__make_hlds__add_clause__STATE_VARIABLE_SVarState_72_72 = hlds__make_hlds__add_clause__InitialSVarState_44;
#line 584 "add_clause.m"
        hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_77_77 = hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_71_71;
#line 584 "add_clause.m"
        hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_76_76 = hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_63;
#line 584 "add_clause.m"
        hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_75_75 = hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_61;
#line 584 "add_clause.m"
        hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_74_74 = hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_68_68;
#line 583 "add_clause.m"
      }
#line 583 "add_clause.m"
    else
#line 586 "add_clause.m"
      {
#line 586 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__ArgContext_47;
#line 586 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__HeadGoal0_48;
#line 586 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__HeadGoal1_49;

#line 586 "add_clause.m"
        {
#line 586 "add_clause.m"
          hlds__make_hlds__add_clause__ArgContext_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 586 "add_clause.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__ArgContext_47, 0) = ((MR_Box) (hlds__make_hlds__add_clause__PredOrFunc_26));
#line 586 "add_clause.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__ArgContext_47, 1) = ((MR_Box) (hlds__make_hlds__add_clause__Arity_27));
#line 586 "add_clause.m"
        }
#line 587 "add_clause.m"
        {
#line 587 "add_clause.m"
          hlds__make_hlds__add_clause__HeadGoal0_48 = hlds__hlds_goal__true_goal_0_f_0();
        }
#line 588 "add_clause.m"
        {
#line 588 "add_clause.m"
          hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_p_0(hlds__make_hlds__add_clause__HeadVarList_40, hlds__make_hlds__add_clause__Args_42, hlds__make_hlds__add_clause__Context_25, hlds__make_hlds__add_clause__ArgContext_47, hlds__make_hlds__add_clause__HeadGoal0_48, &hlds__make_hlds__add_clause__HeadGoal1_49, hlds__make_hlds__add_clause__InitialSVarState_44, &hlds__make_hlds__add_clause__STATE_VARIABLE_SVarState_72_72, hlds__make_hlds__add_clause__STATE_VARIABLE_SVarStore_70_70, &hlds__make_hlds__add_clause__STATE_VARIABLE_SVarStore_73_73, hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_68_68, &hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_74_74, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_75_75, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_63, &hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_76_76, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_71_71, &hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_77_77);
        }
#line 603 "add_clause.m"
        {
#line 603 "add_clause.m"
          hlds__goal_util__attach_features_to_all_goals_4_p_1((MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[55]), (MR_Integer) 1, hlds__make_hlds__add_clause__HeadGoal1_49, &hlds__make_hlds__add_clause__HeadGoal_46);
        }
#line 586 "add_clause.m"
      }
#line 606 "add_clause.m"
    {
#line 606 "add_clause.m"
      hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0((MR_Integer) 0, hlds__make_hlds__add_clause__ParseBody_24, hlds__make_hlds__add_clause__Renaming_21, &hlds__make_hlds__add_clause__BodyGoal_50, hlds__make_hlds__add_clause__STATE_VARIABLE_SVarState_72_72, &hlds__make_hlds__add_clause__FinalSVarState_53, hlds__make_hlds__add_clause__STATE_VARIABLE_SVarStore_73_73, &hlds__make_hlds__add_clause__STATE_VARIABLE_SVarStore_84_84, hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_74_74, &hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_85_85, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_75_75, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_62, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_76_76, &hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_87_87, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_77_77, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_66);
    }
#line 640 "add_clause.m"
    {
#line 640 "add_clause.m"
      hlds__make_hlds__add_clause__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 640 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_127_127, 0) = ((MR_Box) (hlds__make_hlds__add_clause__BodyGoal_50));
#line 640 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_127_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 640 "add_clause.m"
    }
#line 639 "add_clause.m"
    {
#line 639 "add_clause.m"
      hlds__make_hlds__add_clause__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 639 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_126_126, 0) = ((MR_Box) (hlds__make_hlds__add_clause__HeadGoal_46));
#line 639 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_126_126, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_127_127));
#line 639 "add_clause.m"
    }
#line 639 "add_clause.m"
    {
#line 639 "add_clause.m"
      hlds__make_hlds__state_var__svar_finish_clause_body_9_p_0(hlds__make_hlds__add_clause__Context_25, hlds__make_hlds__add_clause__FinalSVarMap_43, hlds__make_hlds__add_clause__V_126_126, &hlds__make_hlds__add_clause__Goal0_54, hlds__make_hlds__add_clause__InitialSVarState_44, hlds__make_hlds__add_clause__FinalSVarState_53, hlds__make_hlds__add_clause__STATE_VARIABLE_SVarStore_84_84, hlds__make_hlds__add_clause__StateVarWarnings_32, hlds__make_hlds__add_clause__StateVarErrors_33);
    }
#line 643 "add_clause.m"
    {
#line 643 "add_clause.m"
      hlds__make_hlds__qual_info__qual_info_get_var_types_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_87_87, &hlds__make_hlds__add_clause__VarTypes0_55);
    }
#line 646 "add_clause.m"
    {
#line 646 "add_clause.m"
      hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&hlds__make_hlds__add_clause__EmptyRttiVarmaps_56);
    }
#line 649 "add_clause.m"
    {
#line 649 "add_clause.m"
      hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 0, hlds__make_hlds__add_clause__HeadVarList_40, hlds__make_hlds__add_clause__QuantWarnings_31, hlds__make_hlds__add_clause__Goal0_54, hlds__make_hlds__add_clause__Goal_29, hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_85_85, hlds__make_hlds__add_clause__STATE_VARIABLE_VarSet_60, hlds__make_hlds__add_clause__VarTypes0_55, &hlds__make_hlds__add_clause__VarTypes_57, hlds__make_hlds__add_clause__EmptyRttiVarmaps_56, &hlds__make_hlds__add_clause__V_58_58);
    }
#line 653 "add_clause.m"
    {
#line 653 "add_clause.m"
      hlds__make_hlds__qual_info__qual_info_set_var_types_3_p_0(hlds__make_hlds__add_clause__VarTypes_57, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_87_87, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_64);
#line 653 "add_clause.m"
      return;
    }
#line 578 "add_clause.m"
  }
#line 566 "add_clause.m"
}

#line 434 "add_clause.m"
static void MR_CALL 
hlds__make_hlds__add_clause__get_mode_annotations_4_p_0(
#line 434 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__HeadVar__1_1,
#line 434 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__HeadVar__2_2,
#line 434 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_0_3,
#line 434 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_4)
#line 434 "add_clause.m"
{
#line 437 "add_clause.m"
  {
#line 437 "add_clause.m"
    MR_bool hlds__make_hlds__add_clause__succeeded;

#line 437 "add_clause.m"
    if ((hlds__make_hlds__add_clause__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 437 "add_clause.m"
      {
#line 437 "add_clause.m"
        *hlds__make_hlds__add_clause__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 437 "add_clause.m"
        *hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_4 = hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_0_3;
#line 437 "add_clause.m"
      }
#line 437 "add_clause.m"
    else
#line 438 "add_clause.m"
      {
#line 438 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__Arg0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__HeadVar__1_1, (MR_Integer) 0)));
#line 438 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__Args0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__HeadVar__1_1, (MR_Integer) 1)));
#line 438 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__Arg_10;
#line 438 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__Args_11;
#line 438 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__MaybeAnnotation_13;
#line 438 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_16_16;
#line 466 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__Arg1_21;
#line 466 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__Mode_24;
#line 461 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__TypeCtorInfo_18_32;
#line 461 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__TypeCtorInfo_19_33;
#line 461 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__ModeTerm_22;
#line 461 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_25_25;
#line 461 "add_clause.m"
        MR_String hlds__make_hlds__add_clause__V_26_26;
#line 461 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_27_27;
#line 461 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_28_28;
#line 461 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_29_29;
#line 461 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_30_30;
#line 461 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_31_31;
#line 461 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_23_23;

#line 461 "add_clause.m"
        hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__Arg0_8)) == (MR_mktag((MR_Integer) 0)));
#line 461 "add_clause.m"
        if (hlds__make_hlds__add_clause__succeeded)
#line 461 "add_clause.m"
          {
#line 461 "add_clause.m"
            hlds__make_hlds__add_clause__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Arg0_8, (MR_Integer) 0)));
#line 461 "add_clause.m"
            hlds__make_hlds__add_clause__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Arg0_8, (MR_Integer) 1)));
#line 461 "add_clause.m"
            hlds__make_hlds__add_clause__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Arg0_8, (MR_Integer) 2)));
#line 461 "add_clause.m"
            hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__V_25_25)) == (MR_mktag((MR_Integer) 0)));
#line 461 "add_clause.m"
            if (hlds__make_hlds__add_clause__succeeded)
#line 461 "add_clause.m"
              {
#line 461 "add_clause.m"
                hlds__make_hlds__add_clause__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__V_25_25, (MR_Integer) 0)));
#line 461 "add_clause.m"
                hlds__make_hlds__add_clause__succeeded = (strcmp(hlds__make_hlds__add_clause__V_26_26, (MR_String) "::") == 0);
#line 461 "add_clause.m"
                if (hlds__make_hlds__add_clause__succeeded)
#line 461 "add_clause.m"
                  {
#line 461 "add_clause.m"
                    hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__V_27_27)) == (MR_mktag((MR_Integer) 1)));
#line 461 "add_clause.m"
                    if (hlds__make_hlds__add_clause__succeeded)
#line 461 "add_clause.m"
                      {
#line 461 "add_clause.m"
                        hlds__make_hlds__add_clause__Arg1_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_27_27, (MR_Integer) 0)));
#line 461 "add_clause.m"
                        hlds__make_hlds__add_clause__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_27_27, (MR_Integer) 1)));
#line 461 "add_clause.m"
                        hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 461 "add_clause.m"
                        if (hlds__make_hlds__add_clause__succeeded)
#line 461 "add_clause.m"
                          {
#line 461 "add_clause.m"
                            hlds__make_hlds__add_clause__ModeTerm_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_28_28, (MR_Integer) 0)));
#line 461 "add_clause.m"
                            hlds__make_hlds__add_clause__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_28_28, (MR_Integer) 1)));
#line 461 "add_clause.m"
                            hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 461 "add_clause.m"
                            if (hlds__make_hlds__add_clause__succeeded)
#line 461 "add_clause.m"
                              {
#line 462 "add_clause.m"
                                hlds__make_hlds__add_clause__V_30_30 = (MR_Integer) 0;
#line 1616 "hlds.make_hlds.add_clause.c"
                                hlds__make_hlds__add_clause__TypeCtorInfo_18_32 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1618 "hlds.make_hlds.add_clause.c"
                                hlds__make_hlds__add_clause__TypeCtorInfo_19_33 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 462 "add_clause.m"
                                {
#line 462 "add_clause.m"
                                  hlds__make_hlds__add_clause__V_31_31 = mercury__term__coerce_1_f_0(hlds__make_hlds__add_clause__TypeCtorInfo_18_32, hlds__make_hlds__add_clause__TypeCtorInfo_19_33, hlds__make_hlds__add_clause__ModeTerm_22);
                                }
#line 462 "add_clause.m"
                                {
#line 462 "add_clause.m"
                                  hlds__make_hlds__add_clause__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(hlds__make_hlds__add_clause__V_30_30, hlds__make_hlds__add_clause__V_31_31, &hlds__make_hlds__add_clause__Mode_24);
                                }
#line 461 "add_clause.m"
                              }
#line 461 "add_clause.m"
                          }
#line 461 "add_clause.m"
                      }
#line 461 "add_clause.m"
                  }
#line 461 "add_clause.m"
              }
#line 461 "add_clause.m"
          }
#line 466 "add_clause.m"
        if (hlds__make_hlds__add_clause__succeeded)
#line 464 "add_clause.m"
          {
#line 464 "add_clause.m"
            hlds__make_hlds__add_clause__Arg_10 = hlds__make_hlds__add_clause__Arg1_21;
#line 465 "add_clause.m"
            {
#line 465 "add_clause.m"
              hlds__make_hlds__add_clause__MaybeAnnotation_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 465 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__MaybeAnnotation_13, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Mode_24));
#line 465 "add_clause.m"
            }
#line 464 "add_clause.m"
          }
#line 466 "add_clause.m"
        else
#line 467 "add_clause.m"
          {
#line 467 "add_clause.m"
            hlds__make_hlds__add_clause__Arg_10 = hlds__make_hlds__add_clause__Arg0_8;
#line 468 "add_clause.m"
            hlds__make_hlds__add_clause__MaybeAnnotation_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 467 "add_clause.m"
          }
#line 446 "add_clause.m"
        if ((hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 446 "add_clause.m"
          if ((hlds__make_hlds__add_clause__MaybeAnnotation_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 446 "add_clause.m"
            hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 446 "add_clause.m"
          else
#line 447 "add_clause.m"
            {
#line 447 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__Mode_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__MaybeAnnotation_13, (MR_Integer) 0)));
#line 447 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__V_35_35;

#line 447 "add_clause.m"
              {
#line 447 "add_clause.m"
                hlds__make_hlds__add_clause__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 447 "add_clause.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_35_35, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Mode_34));
#line 447 "add_clause.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 447 "add_clause.m"
              }
#line 447 "add_clause.m"
              {
#line 447 "add_clause.m"
                hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 447 "add_clause.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_16_16, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_35_35));
#line 447 "add_clause.m"
              }
#line 447 "add_clause.m"
            }
#line 446 "add_clause.m"
        else
#line 446 "add_clause.m"
          if ((hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 452 "add_clause.m"
            hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 446 "add_clause.m"
          else
#line 446 "add_clause.m"
            if ((hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 446 "add_clause.m"
              if ((hlds__make_hlds__add_clause__MaybeAnnotation_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 450 "add_clause.m"
                hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 446 "add_clause.m"
              else
#line 451 "add_clause.m"
                hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 446 "add_clause.m"
            else
#line 446 "add_clause.m"
              {
#line 446 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_0_3, (MR_Integer) 0)));

#line 446 "add_clause.m"
                if ((hlds__make_hlds__add_clause__MaybeAnnotation_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 448 "add_clause.m"
                  hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 446 "add_clause.m"
                else
#line 449 "add_clause.m"
                  {
#line 449 "add_clause.m"
                    MR_Word hlds__make_hlds__add_clause__Mode_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__MaybeAnnotation_13, (MR_Integer) 0)));
#line 449 "add_clause.m"
                    MR_Word hlds__make_hlds__add_clause__V_41_41;
#line 449 "add_clause.m"
                    MR_Word hlds__make_hlds__add_clause__V_42_42;

#line 449 "add_clause.m"
                    {
#line 449 "add_clause.m"
                      hlds__make_hlds__add_clause__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 449 "add_clause.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_42_42, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Mode_39));
#line 449 "add_clause.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 449 "add_clause.m"
                    }
#line 449 "add_clause.m"
                    {
#line 449 "add_clause.m"
                      hlds__make_hlds__add_clause__V_41_41 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__make_hlds__add_clause__V_47_47, hlds__make_hlds__add_clause__V_42_42);
                    }
#line 449 "add_clause.m"
                    {
#line 449 "add_clause.m"
                      hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 449 "add_clause.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_16_16, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_41_41));
#line 449 "add_clause.m"
                    }
#line 449 "add_clause.m"
                  }
#line 446 "add_clause.m"
              }
#line 441 "add_clause.m"
        {
#line 441 "add_clause.m"
          hlds__make_hlds__add_clause__get_mode_annotations_4_p_0(hlds__make_hlds__add_clause__Args0_9, &hlds__make_hlds__add_clause__Args_11, hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_16_16, hlds__make_hlds__add_clause__STATE_VARIABLE_Annotations_4);
        }
#line 438 "add_clause.m"
        {
#line 438 "add_clause.m"
          MR_Word base;
#line 438 "add_clause.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 438 "add_clause.m"
          *hlds__make_hlds__add_clause__HeadVar__2_2 = base;
#line 438 "add_clause.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Arg_10));
#line 438 "add_clause.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_clause__Args_11));
#line 438 "add_clause.m"
        }
#line 438 "add_clause.m"
      }
#line 437 "add_clause.m"
  }
#line 434 "add_clause.m"
}

#line 410 "add_clause.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_clause__mode_decl_for_pred_info_to_pieces_2_f_0(
#line 410 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredInfo_4,
#line 410 "add_clause.m"
  MR_Integer hlds__make_hlds__add_clause__ProcId_5)
#line 410 "add_clause.m"
{
#line 413 "add_clause.m"
  {
#line 413 "add_clause.m"
    MR_bool hlds__make_hlds__add_clause__succeeded;
#line 413 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__HeadVar__3_3;
#line 413 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_8_8;
#line 413 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_9_9;
#line 413 "add_clause.m"
    MR_String hlds__make_hlds__add_clause__V_10_10;

#line 414 "add_clause.m"
    {
#line 414 "add_clause.m"
      hlds__make_hlds__add_clause__V_10_10 = check_hlds__mode_errors__mode_decl_to_string_2_f_0(hlds__make_hlds__add_clause__ProcId_5, hlds__make_hlds__add_clause__PredInfo_4);
    }
#line 414 "add_clause.m"
    {
#line 414 "add_clause.m"
      hlds__make_hlds__add_clause__V_9_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 414 "add_clause.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_9_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 414 "add_clause.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_9_9, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_10_10));
#line 414 "add_clause.m"
    }
#line 414 "add_clause.m"
    {
#line 414 "add_clause.m"
      hlds__make_hlds__add_clause__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 414 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_8_8, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_9_9));
#line 414 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_8_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[54])));
#line 414 "add_clause.m"
    }
#line 413 "add_clause.m"
    {
#line 413 "add_clause.m"
      hlds__make_hlds__add_clause__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 413 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__HeadVar__3_3, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[52])));
#line 413 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__HeadVar__3_3, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_8_8));
#line 413 "add_clause.m"
    }
#line 413 "add_clause.m"
    return hlds__make_hlds__add_clause__HeadVar__3_3;
#line 413 "add_clause.m"
  }
#line 410 "add_clause.m"
}

#line 399 "add_clause.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_clause__undeclared_mode_error_8_p_0_1(
#line 399 "add_clause.m"
  MR_Box hlds__make_hlds__add_clause__closure_arg,
#line 399 "add_clause.m"
  MR_Box hlds__make_hlds__add_clause__wrapper_arg_1)
#line 399 "add_clause.m"
{
#line 399 "add_clause.m"
  {
#line 399 "add_clause.m"
    MR_Box hlds__make_hlds__add_clause__wrapper_arg_2;
#line 399 "add_clause.m"
    MR_Box hlds__make_hlds__add_clause__closure = hlds__make_hlds__add_clause__closure_arg;
#line 399 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__conv0_HeadVar__3_3;

#line 399 "add_clause.m"
    {
#line 399 "add_clause.m"
      hlds__make_hlds__add_clause__conv0_HeadVar__3_3 = hlds__make_hlds__add_clause__mode_decl_for_pred_info_to_pieces_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__closure, (MR_Integer) 3))), ((MR_Integer) hlds__make_hlds__add_clause__wrapper_arg_1));
    }
#line 399 "add_clause.m"
    hlds__make_hlds__add_clause__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_clause__conv0_HeadVar__3_3));
#line 399 "add_clause.m"
    return hlds__make_hlds__add_clause__wrapper_arg_2;
#line 399 "add_clause.m"
  }
#line 399 "add_clause.m"
}

#line 360 "add_clause.m"
static void MR_CALL 
hlds__make_hlds__add_clause__undeclared_mode_error_8_p_0(
#line 360 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__ModeList_9,
#line 360 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__VarSet_10,
#line 360 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredId_11,
#line 360 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredInfo_12,
#line 360 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__ModuleInfo_13,
#line 360 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Context_14,
#line 360 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_31,
#line 360 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_32)
#line 360 "add_clause.m"
{
#line 365 "add_clause.m"
  {
#line 365 "add_clause.m"
    MR_bool hlds__make_hlds__add_clause__succeeded;
#line 365 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__TypeCtorInfo_118_118;
#line 365 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__PredIdPieces_16;
#line 365 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__StrippedModeList_17;
#line 365 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__PredOrFunc_18;
#line 365 "add_clause.m"
    MR_String hlds__make_hlds__add_clause__Name_19;
#line 365 "add_clause.m"
    MR_String hlds__make_hlds__add_clause__SubDeclStr_21;
#line 365 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__MainPieces_22;
#line 365 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__ProcIds_23;
#line 365 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__VerbosePieces_24;
#line 365 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__Msg_29;
#line 365 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__Spec_30;
#line 365 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_34_34;
#line 365 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_35_35;
#line 365 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_40_40;
#line 365 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_41_41;
#line 365 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_44_44;
#line 365 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_46_46;
#line 365 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_49_49;
#line 365 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_50_50;
#line 365 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_106_106;
#line 365 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_107_107;
#line 365 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_108_108;
#line 365 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_109_109;
#line 365 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_113_113;

#line 366 "add_clause.m"
    {
#line 366 "add_clause.m"
      hlds__make_hlds__add_clause__PredIdPieces_16 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(hlds__make_hlds__add_clause__ModuleInfo_13, (MR_Integer) 1, hlds__make_hlds__add_clause__PredId_11);
    }
#line 368 "add_clause.m"
    {
#line 368 "add_clause.m"
      parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_p_0(hlds__make_hlds__add_clause__ModeList_9, &hlds__make_hlds__add_clause__StrippedModeList_17);
    }
#line 369 "add_clause.m"
    {
#line 369 "add_clause.m"
      hlds__make_hlds__add_clause__PredOrFunc_18 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__make_hlds__add_clause__PredInfo_12);
    }
#line 370 "add_clause.m"
    {
#line 370 "add_clause.m"
      hlds__make_hlds__add_clause__Name_19 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__make_hlds__add_clause__PredInfo_12);
    }
#line 372 "add_clause.m"
    {
#line 372 "add_clause.m"
      hlds__make_hlds__add_clause__V_34_34 = mercury__varset__coerce_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, hlds__make_hlds__add_clause__VarSet_10);
    }
#line 372 "add_clause.m"
    {
#line 372 "add_clause.m"
      hlds__make_hlds__add_clause__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 372 "add_clause.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__V_35_35, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Name_19));
#line 372 "add_clause.m"
    }
#line 372 "add_clause.m"
    {
#line 372 "add_clause.m"
      hlds__make_hlds__add_clause__SubDeclStr_21 = parse_tree__mercury_to_mercury__mercury_mode_subdecl_to_string_6_f_0(hlds__make_hlds__add_clause__PredOrFunc_18, hlds__make_hlds__add_clause__V_34_34, hlds__make_hlds__add_clause__V_35_35, hlds__make_hlds__add_clause__StrippedModeList_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_clause__Context_14);
    }
#line 2004 "hlds.make_hlds.add_clause.c"
    hlds__make_hlds__add_clause__TypeCtorInfo_118_118 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 378 "add_clause.m"
    {
#line 378 "add_clause.m"
      hlds__make_hlds__add_clause__V_50_50 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 378 "add_clause.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_clause__V_50_50, 0) = ((MR_Box) (hlds__make_hlds__add_clause__SubDeclStr_21));
#line 378 "add_clause.m"
    }
#line 377 "add_clause.m"
    {
#line 377 "add_clause.m"
      hlds__make_hlds__add_clause__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 377 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_49_49, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_50_50));
#line 377 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[7])));
#line 377 "add_clause.m"
    }
#line 376 "add_clause.m"
    {
#line 376 "add_clause.m"
      hlds__make_hlds__add_clause__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 376 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_46_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[46])));
#line 376 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_46_46, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_49_49));
#line 376 "add_clause.m"
    }
#line 376 "add_clause.m"
    {
#line 376 "add_clause.m"
      hlds__make_hlds__add_clause__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 376 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_44_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 376 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_44_44, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_46_46));
#line 376 "add_clause.m"
    }
#line 376 "add_clause.m"
    {
#line 376 "add_clause.m"
      hlds__make_hlds__add_clause__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 376 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_41_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[45])));
#line 376 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_41_41, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_44_44));
#line 376 "add_clause.m"
    }
#line 376 "add_clause.m"
    {
#line 376 "add_clause.m"
      hlds__make_hlds__add_clause__V_40_40 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_clause__TypeCtorInfo_118_118, hlds__make_hlds__add_clause__PredIdPieces_16, hlds__make_hlds__add_clause__V_41_41);
    }
#line 376 "add_clause.m"
    {
#line 376 "add_clause.m"
      hlds__make_hlds__add_clause__MainPieces_22 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_clause__TypeCtorInfo_118_118, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[44]), hlds__make_hlds__add_clause__V_40_40);
    }
#line 379 "add_clause.m"
    {
#line 379 "add_clause.m"
      hlds__make_hlds__add_clause__ProcIds_23 = hlds__hlds_pred__pred_info_all_procids_1_f_0(hlds__make_hlds__add_clause__PredInfo_12);
    }
#line 384 "add_clause.m"
    if ((hlds__make_hlds__add_clause__ProcIds_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 381 "add_clause.m"
      {
#line 381 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_98_98;
#line 381 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_99_99;

#line 383 "add_clause.m"
        {
#line 383 "add_clause.m"
          hlds__make_hlds__add_clause__V_99_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 383 "add_clause.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_99_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 383 "add_clause.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_99_99, 1) = ((MR_Box) (hlds__make_hlds__add_clause__PredOrFunc_18));
#line 383 "add_clause.m"
        }
#line 382 "add_clause.m"
        {
#line 382 "add_clause.m"
          hlds__make_hlds__add_clause__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 382 "add_clause.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_98_98, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_99_99));
#line 382 "add_clause.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_98_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[31])));
#line 382 "add_clause.m"
        }
#line 382 "add_clause.m"
        {
#line 382 "add_clause.m"
          hlds__make_hlds__add_clause__VerbosePieces_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 382 "add_clause.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__VerbosePieces_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[47])));
#line 382 "add_clause.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__VerbosePieces_24, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_98_98));
#line 382 "add_clause.m"
        }
#line 381 "add_clause.m"
      }
#line 384 "add_clause.m"
    else
#line 385 "add_clause.m"
      {
#line 385 "add_clause.m"
        MR_Integer hlds__make_hlds__add_clause__ProcIdsHead_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__ProcIds_23, (MR_Integer) 0)));
#line 385 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__ProcIdsTail_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__ProcIds_23, (MR_Integer) 1)));

#line 393 "add_clause.m"
        if ((hlds__make_hlds__add_clause__ProcIdsTail_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 387 "add_clause.m"
          {
#line 387 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_78_78;
#line 387 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_81_81;
#line 387 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_82_82;
#line 387 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_90_90;
#line 387 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_91_91;

#line 389 "add_clause.m"
            {
#line 389 "add_clause.m"
              hlds__make_hlds__add_clause__V_82_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 389 "add_clause.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_82_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 389 "add_clause.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_82_82, 1) = ((MR_Box) (hlds__make_hlds__add_clause__PredOrFunc_18));
#line 389 "add_clause.m"
            }
#line 388 "add_clause.m"
            {
#line 388 "add_clause.m"
              hlds__make_hlds__add_clause__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 388 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_81_81, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_82_82));
#line 388 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[35])));
#line 388 "add_clause.m"
            }
#line 390 "add_clause.m"
            {
#line 390 "add_clause.m"
              hlds__make_hlds__add_clause__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 390 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_78_78, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[48])));
#line 390 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_78_78, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_81_81));
#line 390 "add_clause.m"
            }
#line 391 "add_clause.m"
            {
#line 391 "add_clause.m"
              hlds__make_hlds__add_clause__V_91_91 = hlds__make_hlds__add_clause__mode_decl_for_pred_info_to_pieces_2_f_0(hlds__make_hlds__add_clause__PredInfo_12, hlds__make_hlds__add_clause__ProcIdsHead_25);
            }
#line 390 "add_clause.m"
            {
#line 390 "add_clause.m"
              hlds__make_hlds__add_clause__V_90_90 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_clause__TypeCtorInfo_118_118, hlds__make_hlds__add_clause__V_91_91, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[50]));
            }
#line 388 "add_clause.m"
            {
#line 388 "add_clause.m"
              hlds__make_hlds__add_clause__VerbosePieces_24 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_clause__TypeCtorInfo_118_118, hlds__make_hlds__add_clause__V_78_78, hlds__make_hlds__add_clause__V_90_90);
            }
#line 387 "add_clause.m"
          }
#line 393 "add_clause.m"
        else
#line 394 "add_clause.m"
          {
#line 394 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_57_57;
#line 394 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_60_60;
#line 394 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_61_61;
#line 394 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_69_69;
#line 394 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_70_70;
#line 394 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_71_71;
#line 394 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_72_72;

#line 396 "add_clause.m"
            {
#line 396 "add_clause.m"
              hlds__make_hlds__add_clause__V_61_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 396 "add_clause.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_61_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 396 "add_clause.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_61_61, 1) = ((MR_Box) (hlds__make_hlds__add_clause__PredOrFunc_18));
#line 396 "add_clause.m"
            }
#line 395 "add_clause.m"
            {
#line 395 "add_clause.m"
              hlds__make_hlds__add_clause__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 395 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_60_60, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_61_61));
#line 395 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[37])));
#line 395 "add_clause.m"
            }
#line 397 "add_clause.m"
            {
#line 397 "add_clause.m"
              hlds__make_hlds__add_clause__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 397 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_57_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[51])));
#line 397 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_57_57, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_60_60));
#line 397 "add_clause.m"
            }
#line 399 "add_clause.m"
            {
#line 399 "add_clause.m"
              hlds__make_hlds__add_clause__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 399 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__V_72_72, 0) = ((MR_Box) (&hlds__make_hlds__add_clause_scalar_common_5[0]));
#line 399 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__V_72_72, 1) = ((MR_Box) (hlds__make_hlds__add_clause__undeclared_mode_error_8_p_0_1));
#line 399 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__V_72_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 399 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__V_72_72, 3) = ((MR_Box) (hlds__make_hlds__add_clause__PredInfo_12));
#line 399 "add_clause.m"
            }
#line 398 "add_clause.m"
            {
#line 398 "add_clause.m"
              hlds__make_hlds__add_clause__V_71_71 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__make_hlds__add_clause_scalar_common_1[2], hlds__make_hlds__add_clause__V_72_72, hlds__make_hlds__add_clause__ProcIds_23);
            }
#line 401 "add_clause.m"
            {
#line 401 "add_clause.m"
              hlds__make_hlds__add_clause__V_70_70 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(hlds__make_hlds__add_clause__V_71_71, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
            }
#line 397 "add_clause.m"
            {
#line 397 "add_clause.m"
              hlds__make_hlds__add_clause__V_69_69 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_clause__TypeCtorInfo_118_118, hlds__make_hlds__add_clause__V_70_70, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[50]));
            }
#line 395 "add_clause.m"
            {
#line 395 "add_clause.m"
              hlds__make_hlds__add_clause__VerbosePieces_24 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_clause__TypeCtorInfo_118_118, hlds__make_hlds__add_clause__V_57_57, hlds__make_hlds__add_clause__V_69_69);
            }
#line 394 "add_clause.m"
          }
#line 385 "add_clause.m"
      }
#line 406 "add_clause.m"
    {
#line 406 "add_clause.m"
      hlds__make_hlds__add_clause__V_107_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 406 "add_clause.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__V_107_107, 0) = ((MR_Box) (hlds__make_hlds__add_clause__MainPieces_22));
#line 406 "add_clause.m"
    }
#line 406 "add_clause.m"
    {
#line 406 "add_clause.m"
      hlds__make_hlds__add_clause__V_109_109 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 406 "add_clause.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_clause__V_109_109, 0) = ((MR_Box) (hlds__make_hlds__add_clause__VerbosePieces_24));
#line 406 "add_clause.m"
    }
#line 406 "add_clause.m"
    {
#line 406 "add_clause.m"
      hlds__make_hlds__add_clause__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 406 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_108_108, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_109_109));
#line 406 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 406 "add_clause.m"
    }
#line 405 "add_clause.m"
    {
#line 405 "add_clause.m"
      hlds__make_hlds__add_clause__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 405 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_106_106, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_107_107));
#line 405 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_106_106, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_108_108));
#line 405 "add_clause.m"
    }
#line 405 "add_clause.m"
    {
#line 405 "add_clause.m"
      hlds__make_hlds__add_clause__Msg_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 405 "add_clause.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Msg_29, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Context_14));
#line 405 "add_clause.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Msg_29, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_106_106));
#line 405 "add_clause.m"
    }
#line 407 "add_clause.m"
    {
#line 407 "add_clause.m"
      hlds__make_hlds__add_clause__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 407 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_113_113, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Msg_29));
#line 407 "add_clause.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_113_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 407 "add_clause.m"
    }
#line 407 "add_clause.m"
    {
#line 407 "add_clause.m"
      hlds__make_hlds__add_clause__Spec_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 407 "add_clause.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 407 "add_clause.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 407 "add_clause.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_30, 2) = ((MR_Box) (hlds__make_hlds__add_clause__V_113_113));
#line 407 "add_clause.m"
    }
#line 408 "add_clause.m"
    {
#line 408 "add_clause.m"
      MR_Word base;
#line 408 "add_clause.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 408 "add_clause.m"
      *hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_32 = base;
#line 408 "add_clause.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Spec_30));
#line 408 "add_clause.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_31));
#line 408 "add_clause.m"
    }
#line 365 "add_clause.m"
  }
#line 360 "add_clause.m"
}

#line 292 "add_clause.m"
static void MR_CALL 
hlds__make_hlds__add_clause__select_applicable_modes_15_p_0(
#line 292 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Args0_16,
#line 292 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__VarSet_17,
#line 292 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Status_18,
#line 292 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__Context_19,
#line 292 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredId_20,
#line 292 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__PredInfo_21,
#line 292 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__Args_22,
#line 292 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__ApplProcIds_23,
#line 292 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__AllProcIds_24,
#line 292 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_40,
#line 292 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_41,
#line 292 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_42,
#line 292 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_43,
#line 292 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_44,
#line 292 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_45)
#line 292 "add_clause.m"
{
#line 299 "add_clause.m"
  {
#line 299 "add_clause.m"
    MR_bool hlds__make_hlds__add_clause__succeeded;
#line 299 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__ModeAnnotations_28;

#line 300 "add_clause.m"
    {
#line 300 "add_clause.m"
      *hlds__make_hlds__add_clause__AllProcIds_24 = hlds__hlds_pred__pred_info_all_procids_1_f_0(hlds__make_hlds__add_clause__PredInfo_21);
    }
#line 301 "add_clause.m"
    {
#line 301 "add_clause.m"
      hlds__make_hlds__add_clause__get_mode_annotations_4_p_0(hlds__make_hlds__add_clause__Args0_16, hlds__make_hlds__add_clause__Args_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__add_clause__ModeAnnotations_28);
    }
#line 333 "add_clause.m"
    if ((hlds__make_hlds__add_clause__ModeAnnotations_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 346 "add_clause.m"
      {
#line 346 "add_clause.m"
        MR_String hlds__make_hlds__add_clause__PredIdStr_36;
#line 346 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__Pieces_37;
#line 346 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__Msg_38;
#line 346 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__Spec_39;
#line 346 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_49_49;
#line 346 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_50_50;
#line 346 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_65_65;
#line 346 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_66_66;
#line 346 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_70_70;

#line 347 "add_clause.m"
        {
#line 347 "add_clause.m"
          hlds__make_hlds__add_clause__PredIdStr_36 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_40, hlds__make_hlds__add_clause__PredId_20);
        }
#line 348 "add_clause.m"
        {
#line 348 "add_clause.m"
          hlds__make_hlds__add_clause__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 348 "add_clause.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_50_50, 0) = ((MR_Box) (hlds__make_hlds__add_clause__PredIdStr_36));
#line 348 "add_clause.m"
        }
#line 348 "add_clause.m"
        {
#line 348 "add_clause.m"
          hlds__make_hlds__add_clause__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 348 "add_clause.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_49_49, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_50_50));
#line 348 "add_clause.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[29])));
#line 348 "add_clause.m"
        }
#line 348 "add_clause.m"
        {
#line 348 "add_clause.m"
          hlds__make_hlds__add_clause__Pieces_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 348 "add_clause.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__Pieces_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[43])));
#line 348 "add_clause.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__Pieces_37, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_49_49));
#line 348 "add_clause.m"
        }
#line 351 "add_clause.m"
        {
#line 351 "add_clause.m"
          hlds__make_hlds__add_clause__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 351 "add_clause.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__V_66_66, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Pieces_37));
#line 351 "add_clause.m"
        }
#line 351 "add_clause.m"
        {
#line 351 "add_clause.m"
          hlds__make_hlds__add_clause__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 351 "add_clause.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_65_65, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_66_66));
#line 351 "add_clause.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 351 "add_clause.m"
        }
#line 351 "add_clause.m"
        {
#line 351 "add_clause.m"
          hlds__make_hlds__add_clause__Msg_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 351 "add_clause.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Msg_38, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Context_19));
#line 351 "add_clause.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Msg_38, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_65_65));
#line 351 "add_clause.m"
        }
#line 352 "add_clause.m"
        {
#line 352 "add_clause.m"
          hlds__make_hlds__add_clause__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 352 "add_clause.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_70_70, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Msg_38));
#line 352 "add_clause.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 352 "add_clause.m"
        }
#line 352 "add_clause.m"
        {
#line 352 "add_clause.m"
          hlds__make_hlds__add_clause__Spec_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 352 "add_clause.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 352 "add_clause.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 352 "add_clause.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_39, 2) = ((MR_Box) (hlds__make_hlds__add_clause__V_70_70));
#line 352 "add_clause.m"
        }
#line 353 "add_clause.m"
        {
#line 353 "add_clause.m"
          MR_Word base;
#line 353 "add_clause.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 353 "add_clause.m"
          *hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_45 = base;
#line 353 "add_clause.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Spec_39));
#line 353 "add_clause.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_44));
#line 353 "add_clause.m"
        }
#line 357 "add_clause.m"
        {
#line 357 "add_clause.m"
          MR_Word base;
#line 357 "add_clause.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 357 "add_clause.m"
          *hlds__make_hlds__add_clause__ApplProcIds_23 = base;
#line 357 "add_clause.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (*hlds__make_hlds__add_clause__AllProcIds_24));
#line 357 "add_clause.m"
        }
#line 357 "add_clause.m"
        *hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_43 = hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_42;
#line 346 "add_clause.m"
      }
#line 333 "add_clause.m"
    else
#line 333 "add_clause.m"
      if ((((hlds__make_hlds__add_clause__ModeAnnotations_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))) || ((hlds__make_hlds__add_clause__ModeAnnotations_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))))
#line 336 "add_clause.m"
        {
#line 337 "add_clause.m"
          {
#line 337 "add_clause.m"
            hlds__make_hlds__add_clause__succeeded = hlds__hlds_pred__pred_info_pragma_goal_type_1_p_0(hlds__make_hlds__add_clause__PredInfo_21);
          }
#line 342 "add_clause.m"
          if (hlds__make_hlds__add_clause__succeeded)
#line 341 "add_clause.m"
            {
#line 341 "add_clause.m"
              MR_Word base;
#line 341 "add_clause.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 341 "add_clause.m"
              *hlds__make_hlds__add_clause__ApplProcIds_23 = base;
#line 341 "add_clause.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (*hlds__make_hlds__add_clause__AllProcIds_24));
#line 341 "add_clause.m"
            }
#line 342 "add_clause.m"
          else
#line 343 "add_clause.m"
            *hlds__make_hlds__add_clause__ApplProcIds_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 343 "add_clause.m"
          *hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_43 = hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_42;
#line 343 "add_clause.m"
          *hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_45 = hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_44;
#line 336 "add_clause.m"
        }
#line 333 "add_clause.m"
      else
#line 303 "add_clause.m"
        {
#line 303 "add_clause.m"
          MR_Word hlds__make_hlds__add_clause__ModeList0_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__ModeAnnotations_28, (MR_Integer) 0)));
#line 303 "add_clause.m"
          MR_Word hlds__make_hlds__add_clause__ModeList_30;
#line 303 "add_clause.m"
          MR_Word hlds__make_hlds__add_clause__Procs_33;
#line 303 "add_clause.m"
          MR_Word hlds__make_hlds__add_clause__ExistingProcs_34;
#line 303 "add_clause.m"
          MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_73_73;
#line 326 "add_clause.m"
          MR_Integer hlds__make_hlds__add_clause__ProcId_35;

#line 309 "add_clause.m"
          hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__Status_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 311 "add_clause.m"
          if (hlds__make_hlds__add_clause__succeeded)
#line 310 "add_clause.m"
            {
#line 310 "add_clause.m"
              hlds__make_hlds__add_clause__ModeList_30 = hlds__make_hlds__add_clause__ModeList0_29;
#line 310 "add_clause.m"
              hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_73_73 = hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_44;
#line 310 "add_clause.m"
              *hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_43 = hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_42;
#line 310 "add_clause.m"
            }
#line 311 "add_clause.m"
          else
#line 312 "add_clause.m"
            {
#line 312 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__MQInfo0_31;
#line 312 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__MQInfo_32;

#line 312 "add_clause.m"
              {
#line 312 "add_clause.m"
                hlds__make_hlds__qual_info__qual_info_get_mq_info_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_42, &hlds__make_hlds__add_clause__MQInfo0_31);
              }
#line 313 "add_clause.m"
              {
#line 313 "add_clause.m"
                parse_tree__module_qual__qualify_clause_mode_list_7_p_0(hlds__make_hlds__add_clause__ModeList0_29, &hlds__make_hlds__add_clause__ModeList_30, hlds__make_hlds__add_clause__Context_19, hlds__make_hlds__add_clause__MQInfo0_31, &hlds__make_hlds__add_clause__MQInfo_32, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_44, &hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_73_73);
              }
#line 315 "add_clause.m"
              {
#line 315 "add_clause.m"
                hlds__make_hlds__qual_info__qual_info_set_mq_info_3_p_0(hlds__make_hlds__add_clause__MQInfo_32, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_42, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_43);
              }
#line 312 "add_clause.m"
            }
#line 319 "add_clause.m"
          {
#line 319 "add_clause.m"
            hlds__hlds_pred__pred_info_get_procedures_2_p_0(hlds__make_hlds__add_clause__PredInfo_21, &hlds__make_hlds__add_clause__Procs_33);
          }
#line 320 "add_clause.m"
          {
#line 320 "add_clause.m"
            mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, hlds__make_hlds__add_clause__Procs_33, &hlds__make_hlds__add_clause__ExistingProcs_34);
          }
#line 322 "add_clause.m"
          {
#line 322 "add_clause.m"
            hlds__make_hlds__add_clause__succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(hlds__make_hlds__add_clause__ExistingProcs_34, hlds__make_hlds__add_clause__ModeList_30, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_40, &hlds__make_hlds__add_clause__ProcId_35);
          }
#line 326 "add_clause.m"
          if (hlds__make_hlds__add_clause__succeeded)
#line 325 "add_clause.m"
            {
#line 325 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__V_75_75;

#line 325 "add_clause.m"
              {
#line 325 "add_clause.m"
                hlds__make_hlds__add_clause__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 325 "add_clause.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_75_75, 0) = ((MR_Box) (hlds__make_hlds__add_clause__ProcId_35));
#line 325 "add_clause.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 325 "add_clause.m"
              }
#line 325 "add_clause.m"
              {
#line 325 "add_clause.m"
                MR_Word base;
#line 325 "add_clause.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 325 "add_clause.m"
                *hlds__make_hlds__add_clause__ApplProcIds_23 = base;
#line 325 "add_clause.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_75_75));
#line 325 "add_clause.m"
              }
#line 325 "add_clause.m"
              *hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_45 = hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_73_73;
#line 325 "add_clause.m"
            }
#line 326 "add_clause.m"
          else
#line 328 "add_clause.m"
            {
#line 327 "add_clause.m"
              {
#line 327 "add_clause.m"
                hlds__make_hlds__add_clause__undeclared_mode_error_8_p_0(hlds__make_hlds__add_clause__ModeList_30, hlds__make_hlds__add_clause__VarSet_17, hlds__make_hlds__add_clause__PredId_20, hlds__make_hlds__add_clause__PredInfo_21, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_40, hlds__make_hlds__add_clause__Context_19, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_73_73, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_45);
              }
#line 331 "add_clause.m"
              {
#line 331 "add_clause.m"
                MR_Word base;
#line 331 "add_clause.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 331 "add_clause.m"
                *hlds__make_hlds__add_clause__ApplProcIds_23 = base;
#line 331 "add_clause.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (*hlds__make_hlds__add_clause__AllProcIds_24));
#line 331 "add_clause.m"
              }
#line 328 "add_clause.m"
            }
#line 303 "add_clause.m"
        }
#line 357 "add_clause.m"
    *hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_41 = hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_40;
#line 299 "add_clause.m"
  }
#line 292 "add_clause.m"
}

#line 521 "add_clause.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_clause__clauses_info_add_clause_24_p_0_1(
#line 521 "add_clause.m"
  MR_Box hlds__make_hlds__add_clause__closure_arg,
#line 521 "add_clause.m"
  MR_Box hlds__make_hlds__add_clause__wrapper_arg_1,
#line 521 "add_clause.m"
  MR_Box * hlds__make_hlds__add_clause__wrapper_arg_2)
#line 521 "add_clause.m"
{
#line 521 "add_clause.m"
  {
#line 521 "add_clause.m"
    MR_bool hlds__make_hlds__add_clause__succeeded;
#line 521 "add_clause.m"
    MR_Box hlds__make_hlds__add_clause__closure = hlds__make_hlds__add_clause__closure_arg;
#line 521 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__conv0_HeadVar__2_98;

#line 521 "add_clause.m"
    {
#line 521 "add_clause.m"
      hlds__make_hlds__add_clause__succeeded = hlds__make_hlds__add_clause__IntroducedFrom__func__clauses_info_add_clause__521__1_1_f_0(((MR_Word) hlds__make_hlds__add_clause__wrapper_arg_1), &hlds__make_hlds__add_clause__conv0_HeadVar__2_98);
    }
#line 521 "add_clause.m"
    if (hlds__make_hlds__add_clause__succeeded)
#line 521 "add_clause.m"
      {
#line 521 "add_clause.m"
        *hlds__make_hlds__add_clause__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_clause__conv0_HeadVar__2_98));
#line 521 "add_clause.m"
        hlds__make_hlds__add_clause__succeeded = MR_TRUE;
#line 521 "add_clause.m"
      }
#line 521 "add_clause.m"
    return hlds__make_hlds__add_clause__succeeded;
#line 521 "add_clause.m"
  }
#line 521 "add_clause.m"
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
#line 474 "add_clause.m"
  {
#line 474 "add_clause.m"
    MR_bool hlds__make_hlds__add_clause__succeeded;
#line 474 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__VarSet0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_79, (MR_Integer) 0)));
#line 474 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__ExplicitVarTypes0_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_79, (MR_Integer) 1)));
#line 474 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__TVarNameMap0_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_79, (MR_Integer) 2)));
#line 474 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__InferredVarTypes_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_79, (MR_Integer) 3)));
#line 474 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__HeadVars_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_79, (MR_Integer) 4)));
#line 474 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__ClausesRep0_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_79, (MR_Integer) 5)));
#line 474 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__ItemNumbers0_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_79, (MR_Integer) 6)));
#line 474 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__RttiVarMaps_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_79, (MR_Integer) 7)));
#line 474 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__HasForeignClauses_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_79, (MR_Integer) 8)));
#line 474 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__IsEmpty_54;
#line 474 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__TVarNameMap_55;
#line 474 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__VarSet1_56;
#line 474 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__Renaming_57;
#line 474 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__Goal0_58;
#line 474 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__StateVarWarnings_59;
#line 474 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__StateVarErrors_60;
#line 474 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__FoundError_61;
#line 474 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_87_87;
#line 474 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_89_89;
#line 474 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_90_90;

#line 478 "add_clause.m"
    {
#line 478 "add_clause.m"
      hlds__make_hlds__add_clause__IsEmpty_54 = hlds__hlds_clauses__clause_list_is_empty_1_f_0(hlds__make_hlds__add_clause__ClausesRep0_50);
    }
#line 488 "add_clause.m"
    if ((hlds__make_hlds__add_clause__IsEmpty_54 == (MR_Integer) 0))
#line 490 "add_clause.m"
      hlds__make_hlds__add_clause__TVarNameMap_55 = hlds__make_hlds__add_clause__TVarNameMap0_47;
#line 488 "add_clause.m"
    else
#line 480 "add_clause.m"
      {
#line 487 "add_clause.m"
        {
#line 487 "add_clause.m"
          mercury__varset__create_name_var_map_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, hlds__make_hlds__add_clause__TVarSet0_28, &hlds__make_hlds__add_clause__TVarNameMap_55);
        }
#line 480 "add_clause.m"
      }
#line 492 "add_clause.m"
    {
#line 492 "add_clause.m"
      hlds__make_hlds__qual_info__update_qual_info_6_p_0(hlds__make_hlds__add_clause__TVarNameMap_55, hlds__make_hlds__add_clause__TVarSet0_28, hlds__make_hlds__add_clause__ExplicitVarTypes0_46, hlds__make_hlds__add_clause__Status_33, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_83, &hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_87_87);
    }
#line 494 "add_clause.m"
    {
#line 494 "add_clause.m"
      mercury__varset__merge_renaming_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__add_clause__VarSet0_45, hlds__make_hlds__add_clause__CVarSet_27, &hlds__make_hlds__add_clause__VarSet1_56, &hlds__make_hlds__add_clause__Renaming_57);
    }
#line 495 "add_clause.m"
    {
#line 495 "add_clause.m"
      hlds__make_hlds__add_clause__add_clause_transform_20_p_0(hlds__make_hlds__add_clause__Renaming_57, hlds__make_hlds__add_clause__HeadVars_49, hlds__make_hlds__add_clause__Args_29, hlds__make_hlds__add_clause__Body_30, hlds__make_hlds__add_clause__Context_31, hlds__make_hlds__add_clause__PredOrFunc_34, hlds__make_hlds__add_clause__Arity_35, hlds__make_hlds__add_clause__GoalType_36, &hlds__make_hlds__add_clause__Goal0_58, hlds__make_hlds__add_clause__VarSet1_56, hlds__make_hlds__add_clause__VarSet_38, hlds__make_hlds__add_clause__QuantWarnings_41, &hlds__make_hlds__add_clause__StateVarWarnings_59, &hlds__make_hlds__add_clause__StateVarErrors_60, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_81, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_82, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_87_87, &hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_89_89, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_85, &hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_90_90);
    }
#line 499 "add_clause.m"
    {
#line 499 "add_clause.m"
      hlds__make_hlds__qual_info__qual_info_get_tvarset_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_89_89, hlds__make_hlds__add_clause__TVarSet_39);
    }
#line 500 "add_clause.m"
    {
#line 500 "add_clause.m"
      hlds__make_hlds__qual_info__qual_info_get_found_syntax_error_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_89_89, &hlds__make_hlds__add_clause__FoundError_61);
    }
#line 501 "add_clause.m"
    {
#line 501 "add_clause.m"
      hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_p_0((MR_Integer) 0, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_89_89, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_84);
    }
#line 503 "add_clause.m"
    hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__FoundError_61 == (MR_Integer) 1);
#line 504 "add_clause.m"
    if (!(hlds__make_hlds__add_clause__succeeded))
#line 504 "add_clause.m"
      {
#line 504 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_62_62;
#line 504 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_63_63;

#line 504 "add_clause.m"
        hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__StateVarErrors_60)) == (MR_mktag((MR_Integer) 1)));
#line 504 "add_clause.m"
        if (hlds__make_hlds__add_clause__succeeded)
#line 504 "add_clause.m"
          {
#line 504 "add_clause.m"
            hlds__make_hlds__add_clause__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__StateVarErrors_60, (MR_Integer) 0)));
#line 504 "add_clause.m"
            hlds__make_hlds__add_clause__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__StateVarErrors_60, (MR_Integer) 1)));
#line 504 "add_clause.m"
          }
#line 504 "add_clause.m"
      }
#line 513 "add_clause.m"
    if (hlds__make_hlds__add_clause__succeeded)
#line 511 "add_clause.m"
      {
#line 511 "add_clause.m"
        {
#line 511 "add_clause.m"
          *hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_86 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__make_hlds__add_clause__StateVarErrors_60, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_90_90);
        }
#line 512 "add_clause.m"
        {
#line 512 "add_clause.m"
          *hlds__make_hlds__add_clause__Goal_37 = hlds__hlds_goal__true_goal_0_f_0();
        }
#line 512 "add_clause.m"
        *hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_80 = hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_0_79;
#line 511 "add_clause.m"
      }
#line 513 "add_clause.m"
    else
#line 514 "add_clause.m"
      {
#line 514 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__ClausesRep_72;
#line 514 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__ExplicitVarTypes_77;
#line 514 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__ItemNumbers_78;

#line 514 "add_clause.m"
        *hlds__make_hlds__add_clause__Goal_37 = hlds__make_hlds__add_clause__Goal0_58;
#line 550 "add_clause.m"
        if ((hlds__make_hlds__add_clause__HasForeignClauses_53 == (MR_Integer) 0))
#line 551 "add_clause.m"
          {
#line 551 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__Clause_107;

#line 552 "add_clause.m"
            {
#line 552 "add_clause.m"
              hlds__make_hlds__add_clause__Clause_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 552 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clause_107, 0) = ((MR_Box) (hlds__make_hlds__add_clause__ApplModeIds0_25));
#line 552 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clause_107, 1) = ((MR_Box) (*hlds__make_hlds__add_clause__Goal_37));
#line 552 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clause_107, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 552 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clause_107, 3) = ((MR_Box) (hlds__make_hlds__add_clause__Context_31));
#line 552 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clause_107, 4) = ((MR_Box) (hlds__make_hlds__add_clause__StateVarWarnings_59));
#line 552 "add_clause.m"
            }
#line 554 "add_clause.m"
            {
#line 554 "add_clause.m"
              hlds__hlds_clauses__add_clause_3_p_0(hlds__make_hlds__add_clause__Clause_107, hlds__make_hlds__add_clause__ClausesRep0_50, &hlds__make_hlds__add_clause__ClausesRep_72);
            }
#line 551 "add_clause.m"
          }
#line 550 "add_clause.m"
        else
#line 519 "add_clause.m"
          {
#line 519 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__TypeCtorInfo_119_119;
#line 519 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__AnyOrderClauseList_64;
#line 519 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__ForeignModeIds_65;
#line 519 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__ModeIds0_70;
#line 519 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__ModeIds_71;
#line 519 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_95_95;

#line 520 "add_clause.m"
            {
#line 520 "add_clause.m"
              hlds__hlds_clauses__get_clause_list_any_order_2_p_0(hlds__make_hlds__add_clause__ClausesRep0_50, &hlds__make_hlds__add_clause__AnyOrderClauseList_64);
            }
#line 3013 "hlds.make_hlds.add_clause.c"
            hlds__make_hlds__add_clause__TypeCtorInfo_119_119 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 521 "add_clause.m"
            {
#line 521 "add_clause.m"
              hlds__make_hlds__add_clause__V_95_95 = mercury__list__filter_map_2_f_0((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, (MR_Word) &hlds__make_hlds__add_clause_scalar_common_1[1], (MR_Word) &hlds__make_hlds__add_clause_scalar_common_4[0], hlds__make_hlds__add_clause__AnyOrderClauseList_64);
            }
#line 521 "add_clause.m"
            {
#line 521 "add_clause.m"
              hlds__make_hlds__add_clause__ForeignModeIds_65 = mercury__list__condense_1_f_0(hlds__make_hlds__add_clause__TypeCtorInfo_119_119, hlds__make_hlds__add_clause__V_95_95);
            }
#line 536 "add_clause.m"
            if ((hlds__make_hlds__add_clause__ApplModeIds0_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 535 "add_clause.m"
              hlds__make_hlds__add_clause__ModeIds0_70 = hlds__make_hlds__add_clause__AllModeIds_26;
#line 536 "add_clause.m"
            else
#line 537 "add_clause.m"
              hlds__make_hlds__add_clause__ModeIds0_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__ApplModeIds0_25, (MR_Integer) 0)));
#line 539 "add_clause.m"
            {
#line 539 "add_clause.m"
              hlds__make_hlds__add_clause__ModeIds_71 = mercury__list__delete_elems_2_f_0(hlds__make_hlds__add_clause__TypeCtorInfo_119_119, hlds__make_hlds__add_clause__ModeIds0_70, hlds__make_hlds__add_clause__ForeignModeIds_65);
            }
#line 543 "add_clause.m"
            if ((hlds__make_hlds__add_clause__ModeIds_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 542 "add_clause.m"
              hlds__make_hlds__add_clause__ClausesRep_72 = hlds__make_hlds__add_clause__ClausesRep0_50;
#line 543 "add_clause.m"
            else
#line 544 "add_clause.m"
              {
#line 544 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__ApplicableModeIds_75;
#line 544 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__Clause_76;

#line 545 "add_clause.m"
                {
#line 545 "add_clause.m"
                  hlds__make_hlds__add_clause__ApplicableModeIds_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 545 "add_clause.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__ApplicableModeIds_75, 0) = ((MR_Box) (hlds__make_hlds__add_clause__ModeIds_71));
#line 545 "add_clause.m"
                }
#line 546 "add_clause.m"
                {
#line 546 "add_clause.m"
                  hlds__make_hlds__add_clause__Clause_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 546 "add_clause.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clause_76, 0) = ((MR_Box) (hlds__make_hlds__add_clause__ApplicableModeIds_75));
#line 546 "add_clause.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clause_76, 1) = ((MR_Box) (*hlds__make_hlds__add_clause__Goal_37));
#line 546 "add_clause.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clause_76, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 546 "add_clause.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clause_76, 3) = ((MR_Box) (hlds__make_hlds__add_clause__Context_31));
#line 546 "add_clause.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Clause_76, 4) = ((MR_Box) (hlds__make_hlds__add_clause__StateVarWarnings_59));
#line 546 "add_clause.m"
                }
#line 548 "add_clause.m"
                {
#line 548 "add_clause.m"
                  hlds__hlds_clauses__add_clause_3_p_0(hlds__make_hlds__add_clause__Clause_76, hlds__make_hlds__add_clause__ClausesRep0_50, &hlds__make_hlds__add_clause__ClausesRep_72);
                }
#line 544 "add_clause.m"
              }
#line 519 "add_clause.m"
          }
#line 556 "add_clause.m"
        {
#line 556 "add_clause.m"
          hlds__make_hlds__qual_info__qual_info_get_var_types_2_p_0(*hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_84, &hlds__make_hlds__add_clause__ExplicitVarTypes_77);
        }
#line 557 "add_clause.m"
        {
#line 557 "add_clause.m"
          hlds__hlds_clauses__add_clause_item_number_5_p_0(hlds__make_hlds__add_clause__MaybeSeqNum_32, hlds__make_hlds__add_clause__Context_31, (MR_Integer) 0, hlds__make_hlds__add_clause__ItemNumbers0_51, &hlds__make_hlds__add_clause__ItemNumbers_78);
        }
#line 559 "add_clause.m"
        {
#line 559 "add_clause.m"
          MR_Word base;
#line 559 "add_clause.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 559 "add_clause.m"
          *hlds__make_hlds__add_clause__STATE_VARIABLE_ClausesInfo_80 = base;
#line 559 "add_clause.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (*hlds__make_hlds__add_clause__VarSet_38));
#line 559 "add_clause.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__add_clause__ExplicitVarTypes_77));
#line 559 "add_clause.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__add_clause__TVarNameMap_55));
#line 559 "add_clause.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__make_hlds__add_clause__InferredVarTypes_48));
#line 559 "add_clause.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__make_hlds__add_clause__HeadVars_49));
#line 559 "add_clause.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__make_hlds__add_clause__ClausesRep_72));
#line 559 "add_clause.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__make_hlds__add_clause__ItemNumbers_78));
#line 559 "add_clause.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__make_hlds__add_clause__RttiVarMaps_52));
#line 559 "add_clause.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__make_hlds__add_clause__HasForeignClauses_53));
#line 559 "add_clause.m"
        }
#line 559 "add_clause.m"
        *hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_86 = hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_90_90;
#line 514 "add_clause.m"
      }
#line 474 "add_clause.m"
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
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_88,
#line 25 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_89,
#line 25 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_90,
#line 25 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_91,
#line 25 "add_clause.m"
  MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_92,
#line 25 "add_clause.m"
  MR_Word * hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_93)
#line 25 "add_clause.m"
{
#line 87 "add_clause.m"
  {
#line 87 "add_clause.m"
    MR_bool hlds__make_hlds__add_clause__succeeded;
#line 87 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__TypeInfo_259_259;
#line 87 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__TypeCtorInfo_261_261;
#line 87 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__TypeCtorInfo_262_262;
#line 87 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__IllegalSVarResult_29;
#line 87 "add_clause.m"
    MR_Integer hlds__make_hlds__add_clause__ArityAdjustment_30;
#line 87 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__Args_32;
#line 87 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__ModuleName_33;
#line 87 "add_clause.m"
    MR_Integer hlds__make_hlds__add_clause__Arity0_34;
#line 87 "add_clause.m"
    MR_Integer hlds__make_hlds__add_clause__Arity_35;
#line 87 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__PredIds_38;
#line 87 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__PredId_40;
#line 87 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__Preds0_46;
#line 87 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_PredicateTable_94_94;
#line 87 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_113_113;
#line 87 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_118_118;
#line 87 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_PredicateTable_122_122;
#line 87 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_123_123;
#line 87 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_144_144;
#line 90 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__SVar_28;
#line 93 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_31_31;
#line 119 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__PredIdPrime_39;
#line 106 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__V_96_96;
#line 139 "add_clause.m"
    MR_Box hlds__make_hlds__add_clause__conv0_STATE_VARIABLE_PredInfo_123_123;
#line 141 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__VeryVerbose_49;
#line 141 "add_clause.m"
    MR_Word hlds__make_hlds__add_clause__Globals_225;

#line 88 "add_clause.m"
    {
#line 88 "add_clause.m"
      hlds__make_hlds__add_clause__succeeded = hlds__make_hlds__state_var__illegal_state_var_func_result_3_p_0(hlds__make_hlds__add_clause__PredOrFunc_17, hlds__make_hlds__add_clause__Args0_19, &hlds__make_hlds__add_clause__SVar_28);
    }
#line 90 "add_clause.m"
    if (hlds__make_hlds__add_clause__succeeded)
#line 89 "add_clause.m"
      {
#line 89 "add_clause.m"
        hlds__make_hlds__add_clause__IllegalSVarResult_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 89 "add_clause.m"
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__IllegalSVarResult_29, 0) = ((MR_Box) (hlds__make_hlds__add_clause__SVar_28));
#line 89 "add_clause.m"
      }
#line 90 "add_clause.m"
    else
#line 91 "add_clause.m"
      hlds__make_hlds__add_clause__IllegalSVarResult_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 93 "add_clause.m"
    hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__IllegalSVarResult_29)) == (MR_mktag((MR_Integer) 1)));
#line 93 "add_clause.m"
    if (hlds__make_hlds__add_clause__succeeded)
#line 93 "add_clause.m"
      {
#line 93 "add_clause.m"
        hlds__make_hlds__add_clause__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__IllegalSVarResult_29, (MR_Integer) 0)));
#line 93 "add_clause.m"
        hlds__make_hlds__add_clause__ArityAdjustment_30 = (MR_Integer) -1;
#line 93 "add_clause.m"
      }
#line 93 "add_clause.m"
    else
#line 93 "add_clause.m"
      hlds__make_hlds__add_clause__ArityAdjustment_30 = (MR_Integer) 0;
#line 94 "add_clause.m"
    {
#line 94 "add_clause.m"
      hlds__make_hlds__state_var__expand_bang_states_2_p_0(hlds__make_hlds__add_clause__Args0_19, &hlds__make_hlds__add_clause__Args_32);
    }
#line 99 "add_clause.m"
    {
#line 99 "add_clause.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_88, &hlds__make_hlds__add_clause__ModuleName_33);
    }
#line 3266 "hlds.make_hlds.add_clause.c"
    hlds__make_hlds__add_clause__TypeInfo_259_259 = (MR_Word) &hlds__make_hlds__add_clause_scalar_common_1[0];
#line 100 "add_clause.m"
    {
#line 100 "add_clause.m"
      mercury__list__length_2_p_0(hlds__make_hlds__add_clause__TypeInfo_259_259, hlds__make_hlds__add_clause__Args_32, &hlds__make_hlds__add_clause__Arity0_34);
    }
#line 101 "add_clause.m"
    hlds__make_hlds__add_clause__Arity_35 = (hlds__make_hlds__add_clause__Arity0_34 + hlds__make_hlds__add_clause__ArityAdjustment_30);
#line 103 "add_clause.m"
    {
#line 103 "add_clause.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_88, &hlds__make_hlds__add_clause__STATE_VARIABLE_PredicateTable_94_94);
    }
#line 104 "add_clause.m"
    {
#line 104 "add_clause.m"
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_PredicateTable_94_94, (MR_Integer) 0, hlds__make_hlds__add_clause__PredOrFunc_17, hlds__make_hlds__add_clause__PredName_18, hlds__make_hlds__add_clause__Arity_35, &hlds__make_hlds__add_clause__PredIds_38);
    }
#line 106 "add_clause.m"
    hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__PredIds_38)) == (MR_mktag((MR_Integer) 1)));
#line 106 "add_clause.m"
    if (hlds__make_hlds__add_clause__succeeded)
#line 106 "add_clause.m"
      {
#line 106 "add_clause.m"
        hlds__make_hlds__add_clause__PredIdPrime_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__PredIds_38, (MR_Integer) 0)));
#line 106 "add_clause.m"
        hlds__make_hlds__add_clause__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__PredIds_38, (MR_Integer) 1)));
#line 106 "add_clause.m"
        hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__V_96_96 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 106 "add_clause.m"
      }
#line 119 "add_clause.m"
    if (hlds__make_hlds__add_clause__succeeded)
#line 107 "add_clause.m"
      {
#line 108 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_41_41;

#line 107 "add_clause.m"
        hlds__make_hlds__add_clause__PredId_40 = hlds__make_hlds__add_clause__PredIdPrime_39;
#line 108 "add_clause.m"
        hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__GoalType_24)) == (MR_mktag((MR_Integer) 1)));
#line 108 "add_clause.m"
        if (hlds__make_hlds__add_clause__succeeded)
#line 108 "add_clause.m"
          {
#line 108 "add_clause.m"
            hlds__make_hlds__add_clause__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__GoalType_24, (MR_Integer) 0)));
#line 109 "add_clause.m"
            {
#line 109 "add_clause.m"
              MR_String hlds__make_hlds__add_clause__NameString_42;
#line 109 "add_clause.m"
              MR_String hlds__make_hlds__add_clause__UnexpectedMsg_43;
#line 109 "add_clause.m"
              MR_String hlds__make_hlds__add_clause__V_265_265;
#line 109 "add_clause.m"
              MR_String hlds__make_hlds__add_clause__V_267_267;
#line 109 "add_clause.m"
              MR_String hlds__make_hlds__add_clause__V_268_268;
#line 109 "add_clause.m"
              MR_String hlds__make_hlds__add_clause__V_270_270;
#line 109 "add_clause.m"
              MR_String hlds__make_hlds__add_clause__V_271_271;
#line 109 "add_clause.m"
              MR_String hlds__make_hlds__add_clause__V_273_273;

#line 109 "add_clause.m"
              {
#line 109 "add_clause.m"
                hlds__make_hlds__add_clause__NameString_42 = mdbcomp__prim_data__sym_name_to_string_1_f_0(hlds__make_hlds__add_clause__PredName_18);
              }
#line 3340 "hlds.make_hlds.add_clause.c"
              {
#line 3342 "hlds.make_hlds.add_clause.c"
                hlds__make_hlds__add_clause__V_265_265 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_clause__NameString_42, (MR_String) ").\n");
              }
#line 3345 "hlds.make_hlds.add_clause.c"
              {
#line 3347 "hlds.make_hlds.add_clause.c"
                hlds__make_hlds__add_clause__V_267_267 = mercury__string__f_43_43_2_f_0((MR_String) " (", hlds__make_hlds__add_clause__V_265_265);
              }
#line 3350 "hlds.make_hlds.add_clause.c"
              {
#line 3352 "hlds.make_hlds.add_clause.c"
                hlds__make_hlds__add_clause__V_268_268 = mercury__string__f_43_43_2_f_0((MR_String) "name to an existing predicate", hlds__make_hlds__add_clause__V_267_267);
              }
#line 3355 "hlds.make_hlds.add_clause.c"
              {
#line 3357 "hlds.make_hlds.add_clause.c"
                hlds__make_hlds__add_clause__V_270_270 = mercury__string__f_43_43_2_f_0((MR_String) " ", hlds__make_hlds__add_clause__V_268_268);
              }
#line 3360 "hlds.make_hlds.add_clause.c"
              {
#line 3362 "hlds.make_hlds.add_clause.c"
                hlds__make_hlds__add_clause__V_271_271 = mercury__string__f_43_43_2_f_0((MR_String) "for a promise with an identical", hlds__make_hlds__add_clause__V_270_270);
              }
#line 3365 "hlds.make_hlds.add_clause.c"
              {
#line 3367 "hlds.make_hlds.add_clause.c"
                hlds__make_hlds__add_clause__V_273_273 = mercury__string__f_43_43_2_f_0((MR_String) " ", hlds__make_hlds__add_clause__V_271_271);
              }
#line 3370 "hlds.make_hlds.add_clause.c"
              {
#line 3372 "hlds.make_hlds.add_clause.c"
                hlds__make_hlds__add_clause__UnexpectedMsg_43 = mercury__string__f_43_43_2_f_0((MR_String) "Attempted to introduce a predicate", hlds__make_hlds__add_clause__V_273_273);
              }
#line 115 "add_clause.m"
              {
#line 115 "add_clause.m"
                mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_clause", (MR_String) "predicate \140hlds.make_hlds.add_clause.module_add_clause\'/15", hlds__make_hlds__add_clause__UnexpectedMsg_43);
#line 115 "add_clause.m"
                return;
              }
#line 109 "add_clause.m"
            }
#line 108 "add_clause.m"
          }
#line 108 "add_clause.m"
        else
#line 117 "add_clause.m"
          {
#line 117 "add_clause.m"
          }
#line 117 "add_clause.m"
        hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_118_118 = hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_92;
#line 117 "add_clause.m"
        hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_113_113 = hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_88;
#line 107 "add_clause.m"
      }
#line 119 "add_clause.m"
    else
#line 127 "add_clause.m"
      {
#line 121 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_44_44;

#line 121 "add_clause.m"
        hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__GoalType_24)) == (MR_mktag((MR_Integer) 1)));
#line 121 "add_clause.m"
        if (hlds__make_hlds__add_clause__succeeded)
#line 121 "add_clause.m"
          {
#line 121 "add_clause.m"
            hlds__make_hlds__add_clause__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__GoalType_24, (MR_Integer) 0)));
#line 122 "add_clause.m"
            {
#line 122 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__HeadVars_45;
#line 122 "add_clause.m"
              MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_PredicateTable_112_221;

#line 122 "add_clause.m"
              {
#line 122 "add_clause.m"
                hlds__make_hlds__add_clause__HeadVars_45 = mercury__term__term_list_to_var_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__add_clause__Args_32);
              }
#line 123 "add_clause.m"
              {
#line 123 "add_clause.m"
                hlds__make_hlds__add_pred__preds_add_implicit_for_assertion_11_p_0(hlds__make_hlds__add_clause__HeadVars_45, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_88, hlds__make_hlds__add_clause__ModuleName_33, hlds__make_hlds__add_clause__PredName_18, hlds__make_hlds__add_clause__Arity_35, hlds__make_hlds__add_clause__Status_21, hlds__make_hlds__add_clause__Context_22, hlds__make_hlds__add_clause__PredOrFunc_17, &hlds__make_hlds__add_clause__PredId_40, hlds__make_hlds__add_clause__STATE_VARIABLE_PredicateTable_94_94, &hlds__make_hlds__add_clause__STATE_VARIABLE_PredicateTable_112_221);
              }
#line 126 "add_clause.m"
              {
#line 126 "add_clause.m"
                hlds__hlds_module__module_info_set_predicate_table_3_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_PredicateTable_112_221, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_88, &hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_113_113);
              }
#line 126 "add_clause.m"
              hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_118_118 = hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_92;
#line 122 "add_clause.m"
            }
#line 121 "add_clause.m"
          }
#line 121 "add_clause.m"
        else
#line 128 "add_clause.m"
          {
#line 128 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_115_115;

#line 128 "add_clause.m"
            {
#line 128 "add_clause.m"
              hlds__make_hlds__add_clause__V_115_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 128 "add_clause.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_115_115, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 128 "add_clause.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_115_115, 1) = ((MR_Box) (hlds__make_hlds__add_clause__PredName_18));
#line 128 "add_clause.m"
            }
#line 128 "add_clause.m"
            {
#line 128 "add_clause.m"
              hlds__make_hlds__add_pred__preds_add_implicit_report_error_14_p_0(hlds__make_hlds__add_clause__ModuleName_33, hlds__make_hlds__add_clause__PredOrFunc_17, hlds__make_hlds__add_clause__PredName_18, hlds__make_hlds__add_clause__Arity_35, hlds__make_hlds__add_clause__Status_21, (MR_Integer) 0, hlds__make_hlds__add_clause__Context_22, hlds__make_hlds__add_clause__V_115_115, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[39]), &hlds__make_hlds__add_clause__PredId_40, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_0_88, &hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_113_113, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_0_92, &hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_118_118);
            }
#line 128 "add_clause.m"
          }
#line 127 "add_clause.m"
      }
#line 137 "add_clause.m"
    {
#line 137 "add_clause.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_113_113, &hlds__make_hlds__add_clause__STATE_VARIABLE_PredicateTable_122_122);
    }
#line 138 "add_clause.m"
    {
#line 138 "add_clause.m"
      hlds__pred_table__predicate_table_get_preds_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_PredicateTable_122_122, &hlds__make_hlds__add_clause__Preds0_46);
    }
#line 3477 "hlds.make_hlds.add_clause.c"
    hlds__make_hlds__add_clause__TypeCtorInfo_261_261 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 3479 "hlds.make_hlds.add_clause.c"
    hlds__make_hlds__add_clause__TypeCtorInfo_262_262 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 139 "add_clause.m"
    {
#line 139 "add_clause.m"
      mercury__map__lookup_3_p_0(hlds__make_hlds__add_clause__TypeCtorInfo_261_261, hlds__make_hlds__add_clause__TypeCtorInfo_262_262, hlds__make_hlds__add_clause__Preds0_46, ((MR_Box) (hlds__make_hlds__add_clause__PredId_40)), &hlds__make_hlds__add_clause__conv0_STATE_VARIABLE_PredInfo_123_123);
    }
#line 139 "add_clause.m"
    hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_123_123 = ((MR_Word) hlds__make_hlds__add_clause__conv0_STATE_VARIABLE_PredInfo_123_123);
#line 143 "add_clause.m"
    {
#line 143 "add_clause.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_113_113, &hlds__make_hlds__add_clause__Globals_225);
    }
#line 144 "add_clause.m"
    {
#line 144 "add_clause.m"
      libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_clause__Globals_225, (MR_Integer) 45, &hlds__make_hlds__add_clause__VeryVerbose_49);
    }
#line 159 "add_clause.m"
    if ((hlds__make_hlds__add_clause__VeryVerbose_49 == (MR_Integer) 0))
#line 160 "add_clause.m"
      {
#line 160 "add_clause.m"
      }
#line 159 "add_clause.m"
    else
#line 146 "add_clause.m"
      {
#line 146 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__MsgClauses_50;
#line 146 "add_clause.m"
        MR_Integer hlds__make_hlds__add_clause__NumClauses_51;
#line 146 "add_clause.m"
        MR_Integer hlds__make_hlds__add_clause__PredArity0_52;
#line 146 "add_clause.m"
        MR_Integer hlds__make_hlds__add_clause__PredArity_53;
#line 146 "add_clause.m"
        MR_Integer hlds__make_hlds__add_clause__OrigArity_54;
#line 146 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_126_126;
#line 146 "add_clause.m"
        MR_Integer hlds__make_hlds__add_clause__V_131_131;
#line 146 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_137_137;
#line 146 "add_clause.m"
        MR_String hlds__make_hlds__add_clause__V_275_275;
#line 146 "add_clause.m"
        MR_String hlds__make_hlds__add_clause__V_276_276;
#line 146 "add_clause.m"
        MR_String hlds__make_hlds__add_clause__V_278_278;
#line 148 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_251_251;
#line 148 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_252_252;
#line 148 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_253_253;
#line 148 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_254_254;
#line 148 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_255_255;
#line 148 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_256_256;
#line 148 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_257_257;
#line 148 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_258_258;

#line 147 "add_clause.m"
        {
#line 147 "add_clause.m"
          hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_123_123, &hlds__make_hlds__add_clause__MsgClauses_50);
        }
#line 148 "add_clause.m"
        hlds__make_hlds__add_clause__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__MsgClauses_50, (MR_Integer) 0)));
#line 148 "add_clause.m"
        hlds__make_hlds__add_clause__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__MsgClauses_50, (MR_Integer) 1)));
#line 148 "add_clause.m"
        hlds__make_hlds__add_clause__V_253_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__MsgClauses_50, (MR_Integer) 2)));
#line 148 "add_clause.m"
        hlds__make_hlds__add_clause__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__MsgClauses_50, (MR_Integer) 3)));
#line 148 "add_clause.m"
        hlds__make_hlds__add_clause__V_255_255 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__MsgClauses_50, (MR_Integer) 4)));
#line 148 "add_clause.m"
        hlds__make_hlds__add_clause__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__MsgClauses_50, (MR_Integer) 5)));
#line 148 "add_clause.m"
        hlds__make_hlds__add_clause__V_256_256 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__MsgClauses_50, (MR_Integer) 6)));
#line 148 "add_clause.m"
        hlds__make_hlds__add_clause__V_257_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__MsgClauses_50, (MR_Integer) 7)));
#line 148 "add_clause.m"
        hlds__make_hlds__add_clause__V_258_258 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__MsgClauses_50, (MR_Integer) 8)));
#line 148 "add_clause.m"
        {
#line 148 "add_clause.m"
          hlds__make_hlds__add_clause__NumClauses_51 = hlds__hlds_clauses__num_clauses_in_clauses_rep_1_f_0(hlds__make_hlds__add_clause__V_126_126);
        }
#line 151 "add_clause.m"
        hlds__make_hlds__add_clause__V_131_131 = (hlds__make_hlds__add_clause__NumClauses_51 + (MR_Integer) 1);
#line 3577 "hlds.make_hlds.add_clause.c"
        {
#line 3579 "hlds.make_hlds.add_clause.c"
          hlds__make_hlds__add_clause__V_275_275 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_clause__V_131_131);
        }
#line 3582 "hlds.make_hlds.add_clause.c"
        {
#line 3584 "hlds.make_hlds.add_clause.c"
          hlds__make_hlds__add_clause__V_276_276 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_clause__V_275_275, (MR_String) " for ");
        }
#line 3587 "hlds.make_hlds.add_clause.c"
        {
#line 3589 "hlds.make_hlds.add_clause.c"
          hlds__make_hlds__add_clause__V_278_278 = mercury__string__f_43_43_2_f_0((MR_String) "% Processing clause ", hlds__make_hlds__add_clause__V_276_276);
        }
#line 3592 "hlds.make_hlds.add_clause.c"
        {
#line 3594 "hlds.make_hlds.add_clause.c"
          mercury__io__write_string_3_p_0(hlds__make_hlds__add_clause__V_278_278);
        }
#line 152 "add_clause.m"
        {
#line 152 "add_clause.m"
          parse_tree__prog_out__write_pred_or_func_3_p_0(hlds__make_hlds__add_clause__PredOrFunc_17);
        }
#line 153 "add_clause.m"
        {
#line 153 "add_clause.m"
          mercury__io__write_string_3_p_0((MR_String) " \140");
        }
#line 154 "add_clause.m"
        {
#line 154 "add_clause.m"
          mercury__list__length_2_p_0(hlds__make_hlds__add_clause__TypeInfo_259_259, hlds__make_hlds__add_clause__Args_32, &hlds__make_hlds__add_clause__PredArity0_52);
        }
#line 155 "add_clause.m"
        hlds__make_hlds__add_clause__PredArity_53 = (hlds__make_hlds__add_clause__PredArity0_52 + hlds__make_hlds__add_clause__ArityAdjustment_30);
#line 156 "add_clause.m"
        {
#line 156 "add_clause.m"
          parse_tree__prog_util__adjust_func_arity_3_p_1(hlds__make_hlds__add_clause__PredOrFunc_17, &hlds__make_hlds__add_clause__OrigArity_54, hlds__make_hlds__add_clause__PredArity_53);
        }
#line 157 "add_clause.m"
        {
#line 157 "add_clause.m"
          hlds__make_hlds__add_clause__V_137_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 157 "add_clause.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__V_137_137, 0) = ((MR_Box) (hlds__make_hlds__add_clause__PredName_18));
#line 157 "add_clause.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__V_137_137, 1) = ((MR_Box) (hlds__make_hlds__add_clause__OrigArity_54));
#line 157 "add_clause.m"
        }
#line 157 "add_clause.m"
        {
#line 157 "add_clause.m"
          parse_tree__prog_out__write_sym_name_and_arity_3_p_0(hlds__make_hlds__add_clause__V_137_137);
        }
#line 158 "add_clause.m"
        {
#line 158 "add_clause.m"
          mercury__io__write_string_3_p_0((MR_String) "\'...\n");
        }
#line 146 "add_clause.m"
      }
#line 167 "add_clause.m"
    hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__Status_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 173 "add_clause.m"
    if (hlds__make_hlds__add_clause__succeeded)
#line 168 "add_clause.m"
      {
#line 168 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__InitMarkers0_55;
#line 168 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__InitMarkers_56;
#line 168 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_142_142;

#line 168 "add_clause.m"
        {
#line 168 "add_clause.m"
          hlds__hlds_pred__pred_info_set_import_status_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_123_123, &hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_142_142);
        }
#line 169 "add_clause.m"
        {
#line 169 "add_clause.m"
          hlds__hlds_pred__pred_info_get_markers_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_142_142, &hlds__make_hlds__add_clause__InitMarkers0_55);
        }
#line 170 "add_clause.m"
        {
#line 170 "add_clause.m"
          hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 20, hlds__make_hlds__add_clause__InitMarkers0_55, &hlds__make_hlds__add_clause__InitMarkers_56);
        }
#line 172 "add_clause.m"
        {
#line 172 "add_clause.m"
          hlds__hlds_pred__pred_info_set_markers_3_p_0(hlds__make_hlds__add_clause__InitMarkers_56, hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_142_142, &hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_144_144);
        }
#line 168 "add_clause.m"
      }
#line 173 "add_clause.m"
    else
#line 172 "add_clause.m"
      hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_144_144 = hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_123_123;
#line 180 "add_clause.m"
    if ((hlds__make_hlds__add_clause__IllegalSVarResult_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 211 "add_clause.m"
      {
#line 186 "add_clause.m"
        MR_Integer hlds__make_hlds__add_clause__FuncArity_58;
#line 186 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_145_145;
#line 186 "add_clause.m"
        MR_Integer hlds__make_hlds__add_clause__V_263_263;
#line 188 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_59_59;
#line 188 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__V_60_60;

#line 186 "add_clause.m"
        hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__PredOrFunc_17 == (MR_Integer) 1);
#line 186 "add_clause.m"
        if (hlds__make_hlds__add_clause__succeeded)
#line 186 "add_clause.m"
          {
#line 187 "add_clause.m"
            hlds__make_hlds__add_clause__V_145_145 = (MR_Integer) 1;
#line 187 "add_clause.m"
            {
#line 187 "add_clause.m"
              parse_tree__prog_util__adjust_func_arity_3_p_1(hlds__make_hlds__add_clause__V_145_145, &hlds__make_hlds__add_clause__FuncArity_58, hlds__make_hlds__add_clause__Arity_35);
            }
#line 188 "add_clause.m"
            {
#line 188 "add_clause.m"
              hlds__make_hlds__add_clause__succeeded = hlds__hlds_pred__is_field_access_function_name_5_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_113_113, hlds__make_hlds__add_clause__PredName_18, &hlds__make_hlds__add_clause__V_263_263, &hlds__make_hlds__add_clause__V_59_59, &hlds__make_hlds__add_clause__V_60_60);
            }
#line 186 "add_clause.m"
            if (hlds__make_hlds__add_clause__succeeded)
#line 186 "add_clause.m"
              {
#line 188 "add_clause.m"
                hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__FuncArity_58 == hlds__make_hlds__add_clause__V_263_263);
#line 186 "add_clause.m"
                if (hlds__make_hlds__add_clause__succeeded)
#line 186 "add_clause.m"
                  {
#line 193 "add_clause.m"
                    hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__Status_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 193 "add_clause.m"
                    hlds__make_hlds__add_clause__succeeded = !(hlds__make_hlds__add_clause__succeeded);
#line 186 "add_clause.m"
                  }
#line 186 "add_clause.m"
              }
#line 186 "add_clause.m"
          }
#line 211 "add_clause.m"
        if (hlds__make_hlds__add_clause__succeeded)
#line 195 "add_clause.m"
          {
#line 195 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__CallId_61;
#line 195 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__MainPieces_62;
#line 195 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__Msg_64;
#line 195 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__Spec_65;
#line 195 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_148_148;
#line 195 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_151_151;
#line 195 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_152_152;
#line 195 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_177_177;
#line 195 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_178_178;
#line 195 "add_clause.m"
            MR_Word hlds__make_hlds__add_clause__V_184_184;

#line 195 "add_clause.m"
            {
#line 195 "add_clause.m"
              hlds__make_hlds__add_clause__CallId_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 195 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__CallId_61, 0) = ((MR_Box) (hlds__make_hlds__add_clause__PredOrFunc_17));
#line 195 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__CallId_61, 1) = ((MR_Box) (hlds__make_hlds__add_clause__PredName_18));
#line 195 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__CallId_61, 2) = ((MR_Box) (hlds__make_hlds__add_clause__Arity_35));
#line 195 "add_clause.m"
            }
#line 198 "add_clause.m"
            {
#line 198 "add_clause.m"
              hlds__make_hlds__add_clause__V_152_152 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 198 "add_clause.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_152_152, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 198 "add_clause.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_clause__V_152_152, 1) = ((MR_Box) (hlds__make_hlds__add_clause__CallId_61));
#line 198 "add_clause.m"
            }
#line 198 "add_clause.m"
            {
#line 198 "add_clause.m"
              hlds__make_hlds__add_clause__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 198 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_151_151, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_152_152));
#line 198 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_151_151, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[7])));
#line 198 "add_clause.m"
            }
#line 197 "add_clause.m"
            {
#line 197 "add_clause.m"
              hlds__make_hlds__add_clause__V_148_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 197 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_148_148, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[41])));
#line 197 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_148_148, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_151_151));
#line 197 "add_clause.m"
            }
#line 196 "add_clause.m"
            {
#line 196 "add_clause.m"
              hlds__make_hlds__add_clause__MainPieces_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 196 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__MainPieces_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_clause_scalar_common_1[40])));
#line 196 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__MainPieces_62, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_148_148));
#line 196 "add_clause.m"
            }
#line 207 "add_clause.m"
            {
#line 207 "add_clause.m"
              hlds__make_hlds__add_clause__V_178_178 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 207 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__V_178_178, 0) = ((MR_Box) (hlds__make_hlds__add_clause__MainPieces_62));
#line 207 "add_clause.m"
            }
#line 206 "add_clause.m"
            {
#line 206 "add_clause.m"
              hlds__make_hlds__add_clause__V_177_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 206 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_177_177, 0) = ((MR_Box) (hlds__make_hlds__add_clause__V_178_178));
#line 206 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_177_177, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[42])));
#line 206 "add_clause.m"
            }
#line 206 "add_clause.m"
            {
#line 206 "add_clause.m"
              hlds__make_hlds__add_clause__Msg_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 206 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Msg_64, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Context_22));
#line 206 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Msg_64, 1) = ((MR_Box) (hlds__make_hlds__add_clause__V_177_177));
#line 206 "add_clause.m"
            }
#line 208 "add_clause.m"
            {
#line 208 "add_clause.m"
              hlds__make_hlds__add_clause__V_184_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 208 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_184_184, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Msg_64));
#line 208 "add_clause.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_184_184, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 208 "add_clause.m"
            }
#line 208 "add_clause.m"
            {
#line 208 "add_clause.m"
              hlds__make_hlds__add_clause__Spec_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 208 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 208 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 208 "add_clause.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_65, 2) = ((MR_Box) (hlds__make_hlds__add_clause__V_184_184));
#line 208 "add_clause.m"
            }
#line 210 "add_clause.m"
            {
#line 210 "add_clause.m"
              MR_Word base;
#line 210 "add_clause.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 210 "add_clause.m"
              *hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_93 = base;
#line 210 "add_clause.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Spec_65));
#line 210 "add_clause.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_118_118));
#line 210 "add_clause.m"
            }
#line 210 "add_clause.m"
            *hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_91 = hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_90;
#line 210 "add_clause.m"
            *hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_89 = hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_113_113;
#line 195 "add_clause.m"
          }
#line 211 "add_clause.m"
        else
#line 232 "add_clause.m"
          {
#line 212 "add_clause.m"
            {
#line 212 "add_clause.m"
              hlds__make_hlds__add_clause__succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_144_144);
            }
#line 232 "add_clause.m"
            if (hlds__make_hlds__add_clause__succeeded)
#line 221 "add_clause.m"
              {
#line 221 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__AllowDefnOfBuiltin_66;
#line 221 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__Globals_230;

#line 218 "add_clause.m"
                {
#line 218 "add_clause.m"
                  hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_113_113, &hlds__make_hlds__add_clause__Globals_230);
                }
#line 219 "add_clause.m"
                {
#line 219 "add_clause.m"
                  libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_clause__Globals_230, (MR_Integer) 274, &hlds__make_hlds__add_clause__AllowDefnOfBuiltin_66);
                }
#line 229 "add_clause.m"
                if ((hlds__make_hlds__add_clause__AllowDefnOfBuiltin_66 == (MR_Integer) 0))
#line 223 "add_clause.m"
                  {
#line 223 "add_clause.m"
                    MR_Word hlds__make_hlds__add_clause__V_197_197;
#line 223 "add_clause.m"
                    MR_Word hlds__make_hlds__add_clause__Msg_231;
#line 223 "add_clause.m"
                    MR_Word hlds__make_hlds__add_clause__Spec_232;

#line 224 "add_clause.m"
                    {
#line 224 "add_clause.m"
                      hlds__make_hlds__add_clause__Msg_231 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 224 "add_clause.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Msg_231, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Context_22));
#line 224 "add_clause.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Msg_231, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_clause_scalar_common_1[22])));
#line 224 "add_clause.m"
                    }
#line 226 "add_clause.m"
                    {
#line 226 "add_clause.m"
                      hlds__make_hlds__add_clause__V_197_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 226 "add_clause.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_197_197, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Msg_231));
#line 226 "add_clause.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__V_197_197, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 226 "add_clause.m"
                    }
#line 226 "add_clause.m"
                    {
#line 226 "add_clause.m"
                      hlds__make_hlds__add_clause__Spec_232 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 226 "add_clause.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_232, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 226 "add_clause.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_232, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 226 "add_clause.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__Spec_232, 2) = ((MR_Box) (hlds__make_hlds__add_clause__V_197_197));
#line 226 "add_clause.m"
                    }
#line 228 "add_clause.m"
                    {
#line 228 "add_clause.m"
                      MR_Word base;
#line 228 "add_clause.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 228 "add_clause.m"
                      *hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_93 = base;
#line 228 "add_clause.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_clause__Spec_232));
#line 228 "add_clause.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_118_118));
#line 228 "add_clause.m"
                    }
#line 223 "add_clause.m"
                  }
#line 229 "add_clause.m"
                else
#line 230 "add_clause.m"
                  *hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_93 = hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_118_118;
#line 230 "add_clause.m"
                *hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_91 = hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_90;
#line 230 "add_clause.m"
                *hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_89 = hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_113_113;
#line 221 "add_clause.m"
              }
#line 232 "add_clause.m"
            else
#line 233 "add_clause.m"
              {
#line 233 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__Clauses0_67;
#line 233 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__TVarSet0_68;
#line 233 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__ArgTerms_70;
#line 233 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__ProcIdsForThisClause_71;
#line 233 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__AllProcIds_72;
#line 233 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__Goal_73;
#line 233 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__VarSet_74;
#line 233 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__TVarSet_75;
#line 233 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__Clauses_76;
#line 233 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__Warnings_77;
#line 233 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__ExistQVars_80;
#line 233 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__ArgTypes_81;
#line 233 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__ProcIds_82;
#line 233 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__Preds_86;
#line 233 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_200_200;
#line 233 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_201_201;
#line 233 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_202_202;
#line 233 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_203_203;
#line 233 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_204_204;
#line 233 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_206_206;
#line 233 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_207_207;
#line 233 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_209_209;
#line 233 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_212_212;
#line 233 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_213_213;
#line 233 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_215_241;
#line 233 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_PredicateTable_216_242;
#line 235 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__V_69_69;
#line 245 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__PromiseType_78;
#line 252 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause___ArgTVarSet_79;
#line 264 "add_clause.m"
                MR_Word hlds__make_hlds__add_clause__V_83_83;

#line 233 "add_clause.m"
                {
#line 233 "add_clause.m"
                  hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_144_144, &hlds__make_hlds__add_clause__Clauses0_67);
                }
#line 234 "add_clause.m"
                {
#line 234 "add_clause.m"
                  hlds__hlds_pred__pred_info_get_typevarset_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_144_144, &hlds__make_hlds__add_clause__TVarSet0_68);
                }
#line 235 "add_clause.m"
                {
#line 235 "add_clause.m"
                  check_hlds__clause_to_proc__maybe_add_default_func_mode_3_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_144_144, &hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_200_200, &hlds__make_hlds__add_clause__V_69_69);
                }
#line 236 "add_clause.m"
                {
#line 236 "add_clause.m"
                  hlds__make_hlds__add_clause__select_applicable_modes_15_p_0(hlds__make_hlds__add_clause__Args_32, hlds__make_hlds__add_clause__ClauseVarSet_16, hlds__make_hlds__add_clause__Status_21, hlds__make_hlds__add_clause__Context_22, hlds__make_hlds__add_clause__PredId_40, hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_200_200, &hlds__make_hlds__add_clause__ArgTerms_70, &hlds__make_hlds__add_clause__ProcIdsForThisClause_71, &hlds__make_hlds__add_clause__AllProcIds_72, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_113_113, &hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_201_201, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_90, &hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_202_202, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_118_118, &hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_203_203);
                }
#line 239 "add_clause.m"
                {
#line 239 "add_clause.m"
                  hlds__make_hlds__add_clause__clauses_info_add_clause_24_p_0(hlds__make_hlds__add_clause__ProcIdsForThisClause_71, hlds__make_hlds__add_clause__AllProcIds_72, hlds__make_hlds__add_clause__ClauseVarSet_16, hlds__make_hlds__add_clause__TVarSet0_68, hlds__make_hlds__add_clause__ArgTerms_70, hlds__make_hlds__add_clause__Body_20, hlds__make_hlds__add_clause__Context_22, hlds__make_hlds__add_clause__MaybeSeqNum_23, hlds__make_hlds__add_clause__Status_21, hlds__make_hlds__add_clause__PredOrFunc_17, hlds__make_hlds__add_clause__Arity_35, hlds__make_hlds__add_clause__GoalType_24, &hlds__make_hlds__add_clause__Goal_73, &hlds__make_hlds__add_clause__VarSet_74, &hlds__make_hlds__add_clause__TVarSet_75, hlds__make_hlds__add_clause__Clauses0_67, &hlds__make_hlds__add_clause__Clauses_76, &hlds__make_hlds__add_clause__Warnings_77, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_201_201, &hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_204_204, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_202_202, hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_91, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_203_203, &hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_206_206);
                }
#line 244 "add_clause.m"
                {
#line 244 "add_clause.m"
                  hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(hlds__make_hlds__add_clause__Clauses_76, hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_200_200, &hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_207_207);
                }
#line 245 "add_clause.m"
                hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__GoalType_24)) == (MR_mktag((MR_Integer) 1)));
#line 245 "add_clause.m"
                if (hlds__make_hlds__add_clause__succeeded)
#line 245 "add_clause.m"
                  {
#line 245 "add_clause.m"
                    hlds__make_hlds__add_clause__PromiseType_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__GoalType_24, (MR_Integer) 0)));
#line 246 "add_clause.m"
                    {
#line 246 "add_clause.m"
                      hlds__hlds_pred__pred_info_set_goal_type_3_p_0(hlds__make_hlds__add_clause__GoalType_24, hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_207_207, &hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_209_209);
                    }
#line 245 "add_clause.m"
                  }
#line 245 "add_clause.m"
                else
#line 249 "add_clause.m"
                  {
#line 249 "add_clause.m"
                    {
#line 249 "add_clause.m"
                      hlds__hlds_pred__pred_info_update_goal_type_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_207_207, &hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_209_209);
                    }
#line 249 "add_clause.m"
                  }
#line 251 "add_clause.m"
                {
#line 251 "add_clause.m"
                  hlds__hlds_pred__pred_info_set_typevarset_3_p_0(hlds__make_hlds__add_clause__TVarSet_75, hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_209_209, &hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_212_212);
                }
#line 252 "add_clause.m"
                {
#line 252 "add_clause.m"
                  hlds__hlds_pred__pred_info_get_arg_types_4_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_212_212, &hlds__make_hlds__add_clause___ArgTVarSet_79, &hlds__make_hlds__add_clause__ExistQVars_80, &hlds__make_hlds__add_clause__ArgTypes_81);
                }
#line 254 "add_clause.m"
                {
#line 254 "add_clause.m"
                  hlds__hlds_pred__pred_info_set_arg_types_5_p_0(hlds__make_hlds__add_clause__TVarSet_75, hlds__make_hlds__add_clause__ExistQVars_80, hlds__make_hlds__add_clause__ArgTypes_81, hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_212_212, &hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_213_213);
                }
#line 261 "add_clause.m"
                {
#line 261 "add_clause.m"
                  hlds__make_hlds__add_clause__ProcIds_82 = hlds__hlds_pred__pred_info_all_procids_1_f_0(hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_213_213);
                }
#line 263 "add_clause.m"
                hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__ProcIds_82 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 263 "add_clause.m"
                if (hlds__make_hlds__add_clause__succeeded)
#line 263 "add_clause.m"
                  {
#line 264 "add_clause.m"
                    hlds__make_hlds__add_clause__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_clause__GoalType_24)) == (MR_mktag((MR_Integer) 1)));
#line 264 "add_clause.m"
                    if (hlds__make_hlds__add_clause__succeeded)
#line 264 "add_clause.m"
                      hlds__make_hlds__add_clause__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__GoalType_24, (MR_Integer) 0)));
#line 264 "add_clause.m"
                    hlds__make_hlds__add_clause__succeeded = !(hlds__make_hlds__add_clause__succeeded);
#line 263 "add_clause.m"
                  }
#line 269 "add_clause.m"
                if (hlds__make_hlds__add_clause__succeeded)
#line 266 "add_clause.m"
                  {
#line 266 "add_clause.m"
                    MR_Word hlds__make_hlds__add_clause__EndMarkers0_84;
#line 266 "add_clause.m"
                    MR_Word hlds__make_hlds__add_clause__EndMarkers_85;

#line 266 "add_clause.m"
                    {
#line 266 "add_clause.m"
                      hlds__hlds_pred__pred_info_get_markers_2_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_213_213, &hlds__make_hlds__add_clause__EndMarkers0_84);
                    }
#line 267 "add_clause.m"
                    {
#line 267 "add_clause.m"
                      hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 3, hlds__make_hlds__add_clause__EndMarkers0_84, &hlds__make_hlds__add_clause__EndMarkers_85);
                    }
#line 268 "add_clause.m"
                    {
#line 268 "add_clause.m"
                      hlds__hlds_pred__pred_info_set_markers_3_p_0(hlds__make_hlds__add_clause__EndMarkers_85, hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_213_213, &hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_215_241);
                    }
#line 266 "add_clause.m"
                  }
#line 269 "add_clause.m"
                else
#line 268 "add_clause.m"
                  hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_215_241 = hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_213_213;
#line 272 "add_clause.m"
                {
#line 272 "add_clause.m"
                  mercury__map__det_update_4_p_0(hlds__make_hlds__add_clause__TypeCtorInfo_261_261, hlds__make_hlds__add_clause__TypeCtorInfo_262_262, ((MR_Box) (hlds__make_hlds__add_clause__PredId_40)), ((MR_Box) (hlds__make_hlds__add_clause__STATE_VARIABLE_PredInfo_215_241)), hlds__make_hlds__add_clause__Preds0_46, &hlds__make_hlds__add_clause__Preds_86);
                }
#line 273 "add_clause.m"
                {
#line 273 "add_clause.m"
                  hlds__pred_table__predicate_table_set_preds_3_p_0(hlds__make_hlds__add_clause__Preds_86, hlds__make_hlds__add_clause__STATE_VARIABLE_PredicateTable_122_122, &hlds__make_hlds__add_clause__STATE_VARIABLE_PredicateTable_216_242);
                }
#line 274 "add_clause.m"
                {
#line 274 "add_clause.m"
                  hlds__hlds_module__module_info_set_predicate_table_3_p_0(hlds__make_hlds__add_clause__STATE_VARIABLE_PredicateTable_216_242, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_204_204, hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_89);
                }
#line 275 "add_clause.m"
                hlds__make_hlds__add_clause__succeeded = (hlds__make_hlds__add_clause__Status_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 277 "add_clause.m"
                if (hlds__make_hlds__add_clause__succeeded)
#line 275 "add_clause.m"
                  *hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_93 = hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_206_206;
#line 277 "add_clause.m"
                else
#line 279 "add_clause.m"
                  {
#line 279 "add_clause.m"
                    MR_Word hlds__make_hlds__add_clause__SimpleCallId_87;
#line 279 "add_clause.m"
                    MR_Word hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_218_218;

#line 279 "add_clause.m"
                    {
#line 279 "add_clause.m"
                      hlds__make_hlds__add_clause__SimpleCallId_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 279 "add_clause.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__SimpleCallId_87, 0) = ((MR_Box) (hlds__make_hlds__add_clause__PredOrFunc_17));
#line 279 "add_clause.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__SimpleCallId_87, 1) = ((MR_Box) (hlds__make_hlds__add_clause__PredName_18));
#line 279 "add_clause.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_clause__SimpleCallId_87, 2) = ((MR_Box) (hlds__make_hlds__add_clause__Arity_35));
#line 279 "add_clause.m"
                    }
#line 280 "add_clause.m"
                    {
#line 280 "add_clause.m"
                      hlds__make_hlds__make_hlds_warn__warn_singletons_6_p_0(*hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_89, hlds__make_hlds__add_clause__SimpleCallId_87, hlds__make_hlds__add_clause__VarSet_74, hlds__make_hlds__add_clause__Goal_73, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_206_206, &hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_218_218);
                    }
#line 283 "add_clause.m"
                    {
#line 283 "add_clause.m"
                      hlds__make_hlds__make_hlds_warn__warn_overlap_5_p_0(hlds__make_hlds__add_clause__Warnings_77, hlds__make_hlds__add_clause__VarSet_74, hlds__make_hlds__add_clause__SimpleCallId_87, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_218_218, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_93);
#line 283 "add_clause.m"
                      return;
                    }
#line 279 "add_clause.m"
                  }
#line 233 "add_clause.m"
              }
#line 232 "add_clause.m"
          }
#line 211 "add_clause.m"
      }
#line 180 "add_clause.m"
    else
#line 177 "add_clause.m"
      {
#line 177 "add_clause.m"
        MR_Word hlds__make_hlds__add_clause__StateVar_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_clause__IllegalSVarResult_29, (MR_Integer) 0)));

#line 178 "add_clause.m"
        {
#line 178 "add_clause.m"
          hlds__make_hlds__state_var__report_illegal_func_svar_result_5_p_0(hlds__make_hlds__add_clause__Context_22, hlds__make_hlds__add_clause__ClauseVarSet_16, hlds__make_hlds__add_clause__StateVar_57, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_118_118, hlds__make_hlds__add_clause__STATE_VARIABLE_Specs_93);
        }
#line 178 "add_clause.m"
        *hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_89 = hlds__make_hlds__add_clause__STATE_VARIABLE_ModuleInfo_113_113;
#line 178 "add_clause.m"
        *hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_91 = hlds__make_hlds__add_clause__STATE_VARIABLE_QualInfo_0_90;
#line 177 "add_clause.m"
      }
#line 87 "add_clause.m"
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
