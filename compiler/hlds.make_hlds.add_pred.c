/*
** Automatically generated from `add_pred.m'
** by the Mercury compiler,
** version rotd-2013-03-21, configured for x86_64-apple-darwin12.2.1.
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


/* :- module hlds.make_hlds.add_pred. */
/* :- implementation. */

/*
INIT mercury__hlds__make_hlds__add_pred__init
ENDINIT
*/

#include "hlds.make_hlds.add_pred.mih"


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
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_hlds.mih"
#include "hlds.pred_table.mih"
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
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.add_special_pred.mih"
#include "hlds.make_hlds.make_hlds_error.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 142 "hlds.make_hlds.add_pred.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pred__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_marker_0;

#line 597 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__unqualified_pred_error_5_p_0(
#line 597 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredName_6,
#line 597 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__Arity_7,
#line 597 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_8,
#line 597 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_13,
#line 597 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_14);

#line 587 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__unspecified_det_for_exported_6_p_0(
#line 587 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Name_7,
#line 587 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__Arity_8,
#line 587 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_9,
#line 587 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_10,
#line 587 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_15,
#line 587 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_16);

#line 576 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__unspecified_det_for_method_6_p_0(
#line 576 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Name_7,
#line 576 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__Arity_8,
#line 576 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_9,
#line 576 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_10,
#line 576 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_15,
#line 576 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_16);

#line 497 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__preds_add_implicit_11_p_0(
#line 497 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ModuleInfo_12,
#line 497 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ModuleName_13,
#line 497 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredName_14,
#line 497 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__Arity_15,
#line 497 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Status_16,
#line 497 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_17,
#line 497 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Origin_18,
#line 497 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_19,
#line 497 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__PredId_20,
#line 497 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_PredicateTable_0_23,
#line 497 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_PredicateTable_24);

#line 435 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__module_do_add_mode_11_p_0(
#line 435 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__InstVarSet_12,
#line 435 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__Arity_13,
#line 435 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Modes_14,
#line 435 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__MaybeDet_15,
#line 435 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__IsClassMethod_16,
#line 435 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__MContext_17,
#line 435 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_30,
#line 435 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_31,
#line 435 "add_pred.m"
  MR_Integer * hlds__make_hlds__add_pred__ProcId_19,
#line 435 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_32,
#line 435 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_33);

#line 235 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__add_builtin_5_p_0(
#line 235 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredId_6,
#line 235 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Types_7,
#line 235 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__CompilationTarget_8,
#line 235 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_61,
#line 235 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_62);

#line 186 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__add_new_pred_15_p_0_1(
#line 186 "add_pred.m"
  MR_Box hlds__make_hlds__add_pred__closure_arg,
#line 186 "add_pred.m"
  MR_Box hlds__make_hlds__add_pred__wrapper_arg_1,
#line 186 "add_pred.m"
  MR_Box hlds__make_hlds__add_pred__wrapper_arg_2,
#line 186 "add_pred.m"
  MR_Box * hlds__make_hlds__add_pred__wrapper_arg_3);

#line 151 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__add_new_pred_15_p_0(
#line 151 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__TVarSet_16,
#line 151 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ExistQVars_17,
#line 151 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredName_18,
#line 151 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Types_19,
#line 151 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Purity_20,
#line 151 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ClassContext_21,
#line 151 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Markers0_22,
#line 151 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_23,
#line 151 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ItemStatus_24,
#line 151 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__NeedQual_25,
#line 151 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_26,
#line 151 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_60,
#line 151 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_61,
#line 151 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_62,
#line 151 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_63);


static /* final */ const MR_Box hlds__make_hlds__add_pred_scalar_common_1[32][2];

static /* final */ const MR_Box hlds__make_hlds__add_pred_scalar_common_2[1][4];

static /* final */ const MR_Box hlds__make_hlds__add_pred_scalar_common_3[5][1];

static /* final */ const MR_Box hlds__make_hlds__add_pred_scalar_common_4[1][6];

static /* final */ const MR_Box hlds__make_hlds__add_pred_scalar_common_5[4][3];




static /* final */ const MR_Box hlds__make_hlds__add_pred_scalar_common_1[32][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "of local predicates.)"))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "to automatically infer the determinism"))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[3])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Use the \140--infer-det\' option if you want the compiler"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "you specified the \140--no-infer-det\' options."))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "(This is an error because"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "mode declaration"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_5[2])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_5[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_5[2])))
  },
  /* row 18 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pred_scalar_common_1[16])),
    ((MR_Box) (&hlds__make_hlds__add_pred_scalar_common_1[17]))
  },
  /* row 19 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pred_scalar_common_1[18])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 20 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pred_scalar_common_1[16])),
    ((MR_Box) (&hlds__make_hlds__add_pred_scalar_common_1[17]))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: no determinism declaration for local"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pred_scalar_common_3[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: no determinism declaration"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "for type class method"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: no determinism declaration for exported"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Internal error: the unqualified predicate name"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "should have been qualified by prog_io.m."))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pred_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 164)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pred_scalar_common_3[5][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[11])))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pred_scalar_common_4[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_marker_0)),
    ((MR_Box) (&hlds__make_hlds__add_pred__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_marker_0)),
    ((MR_Box) (&hlds__make_hlds__add_pred__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_marker_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pred_scalar_common_5[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pred_scalar_common_4[0])),
    ((MR_Box) (hlds__make_hlds__add_pred__add_new_pred_15_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[15]))),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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



#line 569 "hlds.make_hlds.add_pred.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pred__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_marker_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_marker_0
  }
};

#line 597 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__unqualified_pred_error_5_p_0(
#line 597 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredName_6,
#line 597 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__Arity_7,
#line 597 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_8,
#line 597 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_13,
#line 597 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_14)
#line 597 "add_pred.m"
{
#line 600 "add_pred.m"
  {
#line 600 "add_pred.m"
    MR_bool hlds__make_hlds__add_pred__succeeded;
#line 600 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Pieces_10;
#line 600 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Msg_11;
#line 600 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Spec_12;
#line 600 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_17_17;
#line 600 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_18_18;
#line 600 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_19_19;
#line 600 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_24_24;
#line 600 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_25_25;
#line 600 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_29_29;

#line 602 "add_pred.m"
    {
#line 602 "add_pred.m"
      hlds__make_hlds__add_pred__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 602 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_19_19, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredName_6));
#line 602 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_19_19, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Arity_7));
#line 602 "add_pred.m"
    }
#line 602 "add_pred.m"
    {
#line 602 "add_pred.m"
      hlds__make_hlds__add_pred__V_18_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 602 "add_pred.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_18_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 602 "add_pred.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_18_18, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_19_19));
#line 602 "add_pred.m"
    }
#line 601 "add_pred.m"
    {
#line 601 "add_pred.m"
      hlds__make_hlds__add_pred__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 601 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_17_17, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_18_18));
#line 601 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[31])));
#line 601 "add_pred.m"
    }
#line 601 "add_pred.m"
    {
#line 601 "add_pred.m"
      hlds__make_hlds__add_pred__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 601 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[29])));
#line 601 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Pieces_10, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_17_17));
#line 601 "add_pred.m"
    }
#line 604 "add_pred.m"
    {
#line 604 "add_pred.m"
      hlds__make_hlds__add_pred__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 604 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_25_25, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Pieces_10));
#line 604 "add_pred.m"
    }
#line 604 "add_pred.m"
    {
#line 604 "add_pred.m"
      hlds__make_hlds__add_pred__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 604 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_24_24, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_25_25));
#line 604 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 604 "add_pred.m"
    }
#line 604 "add_pred.m"
    {
#line 604 "add_pred.m"
      hlds__make_hlds__add_pred__Msg_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 604 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_11, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Context_8));
#line 604 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_11, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_24_24));
#line 604 "add_pred.m"
    }
#line 605 "add_pred.m"
    {
#line 605 "add_pred.m"
      hlds__make_hlds__add_pred__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 605 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_29_29, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Msg_11));
#line 605 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 605 "add_pred.m"
    }
#line 605 "add_pred.m"
    {
#line 605 "add_pred.m"
      hlds__make_hlds__add_pred__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 605 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 605 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 605 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_12, 2) = ((MR_Box) (hlds__make_hlds__add_pred__V_29_29));
#line 605 "add_pred.m"
    }
#line 606 "add_pred.m"
    {
#line 606 "add_pred.m"
      MR_Word base;
#line 606 "add_pred.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 606 "add_pred.m"
      *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_14 = base;
#line 606 "add_pred.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Spec_12));
#line 606 "add_pred.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_13));
#line 606 "add_pred.m"
    }
#line 600 "add_pred.m"
  }
#line 597 "add_pred.m"
}

#line 587 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__unspecified_det_for_exported_6_p_0(
#line 587 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Name_7,
#line 587 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__Arity_8,
#line 587 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_9,
#line 587 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_10,
#line 587 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_15,
#line 587 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_16)
#line 587 "add_pred.m"
{
#line 590 "add_pred.m"
  {
#line 590 "add_pred.m"
    MR_bool hlds__make_hlds__add_pred__succeeded;
#line 590 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Pieces_12;
#line 590 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Msg_13;
#line 590 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Spec_14;
#line 590 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_19_19;
#line 590 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_20_20;
#line 590 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_21_21;
#line 590 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_22_22;
#line 590 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_23_23;
#line 590 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_28_28;
#line 590 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_29_29;
#line 590 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_33_33;

#line 592 "add_pred.m"
    {
#line 592 "add_pred.m"
      hlds__make_hlds__add_pred__V_20_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 592 "add_pred.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_20_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 592 "add_pred.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_20_20, 1) = ((MR_Box) (hlds__make_hlds__add_pred__PredOrFunc_9));
#line 592 "add_pred.m"
    }
#line 592 "add_pred.m"
    {
#line 592 "add_pred.m"
      hlds__make_hlds__add_pred__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 592 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_23_23, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Name_7));
#line 592 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_23_23, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Arity_8));
#line 592 "add_pred.m"
    }
#line 592 "add_pred.m"
    {
#line 592 "add_pred.m"
      hlds__make_hlds__add_pred__V_22_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 592 "add_pred.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_22_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 592 "add_pred.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_22_22, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_23_23));
#line 592 "add_pred.m"
    }
#line 592 "add_pred.m"
    {
#line 592 "add_pred.m"
      hlds__make_hlds__add_pred__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 592 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_21_21, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_22_22));
#line 592 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[24])));
#line 592 "add_pred.m"
    }
#line 591 "add_pred.m"
    {
#line 591 "add_pred.m"
      hlds__make_hlds__add_pred__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 591 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_19_19, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_20_20));
#line 591 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_19_19, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_21_21));
#line 591 "add_pred.m"
    }
#line 591 "add_pred.m"
    {
#line 591 "add_pred.m"
      hlds__make_hlds__add_pred__Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 591 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Pieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[28])));
#line 591 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Pieces_12, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_19_19));
#line 591 "add_pred.m"
    }
#line 593 "add_pred.m"
    {
#line 593 "add_pred.m"
      hlds__make_hlds__add_pred__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 593 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_29_29, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Pieces_12));
#line 593 "add_pred.m"
    }
#line 593 "add_pred.m"
    {
#line 593 "add_pred.m"
      hlds__make_hlds__add_pred__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 593 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_28_28, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_29_29));
#line 593 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 593 "add_pred.m"
    }
#line 593 "add_pred.m"
    {
#line 593 "add_pred.m"
      hlds__make_hlds__add_pred__Msg_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 593 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_13, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Context_10));
#line 593 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_13, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_28_28));
#line 593 "add_pred.m"
    }
#line 594 "add_pred.m"
    {
#line 594 "add_pred.m"
      hlds__make_hlds__add_pred__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 594 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_33_33, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Msg_13));
#line 594 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 594 "add_pred.m"
    }
#line 594 "add_pred.m"
    {
#line 594 "add_pred.m"
      hlds__make_hlds__add_pred__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 594 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 594 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 594 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_14, 2) = ((MR_Box) (hlds__make_hlds__add_pred__V_33_33));
#line 594 "add_pred.m"
    }
#line 595 "add_pred.m"
    {
#line 595 "add_pred.m"
      MR_Word base;
#line 595 "add_pred.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 595 "add_pred.m"
      *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_16 = base;
#line 595 "add_pred.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Spec_14));
#line 595 "add_pred.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_15));
#line 595 "add_pred.m"
    }
#line 590 "add_pred.m"
  }
#line 587 "add_pred.m"
}

#line 576 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__unspecified_det_for_method_6_p_0(
#line 576 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Name_7,
#line 576 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__Arity_8,
#line 576 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_9,
#line 576 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_10,
#line 576 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_15,
#line 576 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_16)
#line 576 "add_pred.m"
{
#line 579 "add_pred.m"
  {
#line 579 "add_pred.m"
    MR_bool hlds__make_hlds__add_pred__succeeded;
#line 579 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Pieces_12;
#line 579 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Msg_13;
#line 579 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Spec_14;
#line 579 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_19_19;
#line 579 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_22_22;
#line 579 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_23_23;
#line 579 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_24_24;
#line 579 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_25_25;
#line 579 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_26_26;
#line 579 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_31_31;
#line 579 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_32_32;
#line 579 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_36_36;

#line 581 "add_pred.m"
    {
#line 581 "add_pred.m"
      hlds__make_hlds__add_pred__V_23_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 581 "add_pred.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_23_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 581 "add_pred.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_23_23, 1) = ((MR_Box) (hlds__make_hlds__add_pred__PredOrFunc_9));
#line 581 "add_pred.m"
    }
#line 582 "add_pred.m"
    {
#line 582 "add_pred.m"
      hlds__make_hlds__add_pred__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 582 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_26_26, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Name_7));
#line 582 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_26_26, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Arity_8));
#line 582 "add_pred.m"
    }
#line 582 "add_pred.m"
    {
#line 582 "add_pred.m"
      hlds__make_hlds__add_pred__V_25_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 582 "add_pred.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_25_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 582 "add_pred.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_25_25, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_26_26));
#line 582 "add_pred.m"
    }
#line 581 "add_pred.m"
    {
#line 581 "add_pred.m"
      hlds__make_hlds__add_pred__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 581 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_24_24, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_25_25));
#line 581 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[24])));
#line 581 "add_pred.m"
    }
#line 581 "add_pred.m"
    {
#line 581 "add_pred.m"
      hlds__make_hlds__add_pred__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 581 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_22_22, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_23_23));
#line 581 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_22_22, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_24_24));
#line 581 "add_pred.m"
    }
#line 580 "add_pred.m"
    {
#line 580 "add_pred.m"
      hlds__make_hlds__add_pred__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 580 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_19_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[27])));
#line 580 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_19_19, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_22_22));
#line 580 "add_pred.m"
    }
#line 580 "add_pred.m"
    {
#line 580 "add_pred.m"
      hlds__make_hlds__add_pred__Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 580 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Pieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[26])));
#line 580 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Pieces_12, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_19_19));
#line 580 "add_pred.m"
    }
#line 583 "add_pred.m"
    {
#line 583 "add_pred.m"
      hlds__make_hlds__add_pred__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 583 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_32_32, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Pieces_12));
#line 583 "add_pred.m"
    }
#line 583 "add_pred.m"
    {
#line 583 "add_pred.m"
      hlds__make_hlds__add_pred__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 583 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_31_31, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_32_32));
#line 583 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 583 "add_pred.m"
    }
#line 583 "add_pred.m"
    {
#line 583 "add_pred.m"
      hlds__make_hlds__add_pred__Msg_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 583 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_13, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Context_10));
#line 583 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_13, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_31_31));
#line 583 "add_pred.m"
    }
#line 584 "add_pred.m"
    {
#line 584 "add_pred.m"
      hlds__make_hlds__add_pred__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 584 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_36_36, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Msg_13));
#line 584 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 584 "add_pred.m"
    }
#line 584 "add_pred.m"
    {
#line 584 "add_pred.m"
      hlds__make_hlds__add_pred__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 584 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 584 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 584 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_14, 2) = ((MR_Box) (hlds__make_hlds__add_pred__V_36_36));
#line 584 "add_pred.m"
    }
#line 585 "add_pred.m"
    {
#line 585 "add_pred.m"
      MR_Word base;
#line 585 "add_pred.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 585 "add_pred.m"
      *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_16 = base;
#line 585 "add_pred.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Spec_14));
#line 585 "add_pred.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_15));
#line 585 "add_pred.m"
    }
#line 579 "add_pred.m"
  }
#line 576 "add_pred.m"
}

#line 497 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__preds_add_implicit_11_p_0(
#line 497 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ModuleInfo_12,
#line 497 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ModuleName_13,
#line 497 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredName_14,
#line 497 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__Arity_15,
#line 497 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Status_16,
#line 497 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_17,
#line 497 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Origin_18,
#line 497 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_19,
#line 497 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__PredId_20,
#line 497 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_PredicateTable_0_23,
#line 497 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_PredicateTable_24)
#line 497 "add_pred.m"
{
#line 503 "add_pred.m"
  {
#line 503 "add_pred.m"
    MR_bool hlds__make_hlds__add_pred__succeeded;
#line 503 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_55_69;
#line 503 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_58_72;
#line 503 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__ClausesInfo_22;
#line 503 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_25_25;
#line 503 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TVarSet0_40;
#line 503 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TypeVars_41;
#line 503 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TVarSet_42;
#line 503 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Types_43;
#line 503 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Proofs_44;
#line 503 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__ConstraintMap_45;
#line 503 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Markers0_48;
#line 503 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__VarNameRemap_49;
#line 503 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredInfo0_50;
#line 503 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Markers_51;
#line 503 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredInfo_52;
#line 503 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredIds_53;
#line 503 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_58_58;

#line 504 "add_pred.m"
    {
#line 504 "add_pred.m"
      hlds__make_hlds__add_pred__V_25_25 = hlds__hlds_clauses__init_clause_item_numbers_user_0_f_0();
    }
#line 504 "add_pred.m"
    {
#line 504 "add_pred.m"
      hlds__hlds_clauses__clauses_info_init_4_p_0(hlds__make_hlds__add_pred__PredOrFunc_19, hlds__make_hlds__add_pred__Arity_15, hlds__make_hlds__add_pred__V_25_25, &hlds__make_hlds__add_pred__ClausesInfo_22);
    }
#line 1158 "hlds.make_hlds.add_pred.c"
    hlds__make_hlds__add_pred__TypeCtorInfo_55_69 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 525 "add_pred.m"
    {
#line 525 "add_pred.m"
      mercury__varset__init_1_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_55_69, &hlds__make_hlds__add_pred__TVarSet0_40);
    }
#line 526 "add_pred.m"
    {
#line 526 "add_pred.m"
      parse_tree__prog_util__make_n_fresh_vars_5_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_55_69, (MR_String) "T", hlds__make_hlds__add_pred__Arity_15, &hlds__make_hlds__add_pred__TypeVars_41, hlds__make_hlds__add_pred__TVarSet0_40, &hlds__make_hlds__add_pred__TVarSet_42);
    }
#line 527 "add_pred.m"
    {
#line 527 "add_pred.m"
      hlds__make_hlds__add_pred__V_58_58 = mercury__map__init_0_f_0((MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
    }
#line 527 "add_pred.m"
    {
#line 527 "add_pred.m"
      parse_tree__prog_type__var_list_to_type_list_3_p_0(hlds__make_hlds__add_pred__V_58_58, hlds__make_hlds__add_pred__TypeVars_41, &hlds__make_hlds__add_pred__Types_43);
    }
#line 1180 "hlds.make_hlds.add_pred.c"
    hlds__make_hlds__add_pred__TypeCtorInfo_58_72 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 528 "add_pred.m"
    {
#line 528 "add_pred.m"
      mercury__map__init_1_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_58_72, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, &hlds__make_hlds__add_pred__Proofs_44);
    }
#line 529 "add_pred.m"
    {
#line 529 "add_pred.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, hlds__make_hlds__add_pred__TypeCtorInfo_58_72, &hlds__make_hlds__add_pred__ConstraintMap_45);
    }
#line 536 "add_pred.m"
    {
#line 536 "add_pred.m"
      hlds__hlds_pred__init_markers_1_p_0(&hlds__make_hlds__add_pred__Markers0_48);
    }
#line 537 "add_pred.m"
    {
#line 537 "add_pred.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, &hlds__make_hlds__add_pred__VarNameRemap_49);
    }
#line 538 "add_pred.m"
    {
#line 538 "add_pred.m"
      hlds__hlds_pred__pred_info_init_18_p_0(hlds__make_hlds__add_pred__ModuleName_13, hlds__make_hlds__add_pred__PredName_14, hlds__make_hlds__add_pred__Arity_15, hlds__make_hlds__add_pred__PredOrFunc_19, hlds__make_hlds__add_pred__Context_17, hlds__make_hlds__add_pred__Origin_18, hlds__make_hlds__add_pred__Status_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_pred__Markers0_48, hlds__make_hlds__add_pred__Types_43, hlds__make_hlds__add_pred__TVarSet_42, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[14], hlds__make_hlds__add_pred__Proofs_44, hlds__make_hlds__add_pred__ConstraintMap_45, hlds__make_hlds__add_pred__ClausesInfo_22, hlds__make_hlds__add_pred__VarNameRemap_49, &hlds__make_hlds__add_pred__PredInfo0_50);
    }
#line 542 "add_pred.m"
    {
#line 542 "add_pred.m"
      hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 2, hlds__make_hlds__add_pred__Markers0_48, &hlds__make_hlds__add_pred__Markers_51);
    }
#line 543 "add_pred.m"
    {
#line 543 "add_pred.m"
      hlds__hlds_pred__pred_info_set_markers_3_p_0(hlds__make_hlds__add_pred__Markers_51, hlds__make_hlds__add_pred__PredInfo0_50, &hlds__make_hlds__add_pred__PredInfo_52);
    }
#line 544 "add_pred.m"
    {
#line 544 "add_pred.m"
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredicateTable_0_23, (MR_Integer) 0, hlds__make_hlds__add_pred__PredOrFunc_19, hlds__make_hlds__add_pred__PredName_14, hlds__make_hlds__add_pred__Arity_15, &hlds__make_hlds__add_pred__PredIds_53);
    }
#line 551 "add_pred.m"
    if ((hlds__make_hlds__add_pred__PredIds_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 547 "add_pred.m"
      {
#line 547 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__MQInfo_54;

#line 548 "add_pred.m"
        {
#line 548 "add_pred.m"
          hlds__hlds_module__module_info_get_partial_qualifier_info_2_p_0(hlds__make_hlds__add_pred__ModuleInfo_12, &hlds__make_hlds__add_pred__MQInfo_54);
        }
#line 549 "add_pred.m"
        {
#line 549 "add_pred.m"
          hlds__pred_table__predicate_table_insert_qual_6_p_0(hlds__make_hlds__add_pred__PredInfo_52, (MR_Integer) 1, hlds__make_hlds__add_pred__MQInfo_54, hlds__make_hlds__add_pred__PredId_20, hlds__make_hlds__add_pred__STATE_VARIABLE_PredicateTable_0_23, hlds__make_hlds__add_pred__STATE_VARIABLE_PredicateTable_24);
#line 549 "add_pred.m"
          return;
        }
#line 547 "add_pred.m"
      }
#line 551 "add_pred.m"
    else
#line 552 "add_pred.m"
      {
#line 553 "add_pred.m"
        {
#line 553 "add_pred.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_pred", (MR_String) "predicate \140hlds.make_hlds.add_pred.preds_add_implicit_2\'/12", (MR_String) "search succeeded");
#line 553 "add_pred.m"
          return;
        }
#line 552 "add_pred.m"
      }
#line 503 "add_pred.m"
  }
#line 497 "add_pred.m"
}

#line 435 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__module_do_add_mode_11_p_0(
#line 435 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__InstVarSet_12,
#line 435 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__Arity_13,
#line 435 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Modes_14,
#line 435 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__MaybeDet_15,
#line 435 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__IsClassMethod_16,
#line 435 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__MContext_17,
#line 435 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_30,
#line 435 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_31,
#line 435 "add_pred.m"
  MR_Integer * hlds__make_hlds__add_pred__ProcId_19,
#line 435 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_32,
#line 435 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_33)
#line 435 "add_pred.m"
{
#line 441 "add_pred.m"
  {
#line 441 "add_pred.m"
    MR_bool hlds__make_hlds__add_pred__succeeded;
#line 441 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__DetismDecl_21;
#line 441 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_37_37;

#line 468 "add_pred.m"
    if ((hlds__make_hlds__add_pred__MaybeDet_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 444 "add_pred.m"
      {
#line 444 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__ImportStatus_22;
#line 444 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__PredOrFunc_23;
#line 444 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__PredModule_24;
#line 444 "add_pred.m"
        MR_String hlds__make_hlds__add_pred__PredName_25;
#line 444 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__PredSymName_26;

#line 445 "add_pred.m"
        hlds__make_hlds__add_pred__DetismDecl_21 = (MR_Integer) 2;
#line 446 "add_pred.m"
        {
#line 446 "add_pred.m"
          hlds__hlds_pred__pred_info_get_import_status_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_30, &hlds__make_hlds__add_pred__ImportStatus_22);
        }
#line 447 "add_pred.m"
        {
#line 447 "add_pred.m"
          hlds__make_hlds__add_pred__PredOrFunc_23 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_30);
        }
#line 448 "add_pred.m"
        {
#line 448 "add_pred.m"
          hlds__make_hlds__add_pred__PredModule_24 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_30);
        }
#line 449 "add_pred.m"
        {
#line 449 "add_pred.m"
          hlds__make_hlds__add_pred__PredName_25 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_30);
        }
#line 450 "add_pred.m"
        {
#line 450 "add_pred.m"
          hlds__make_hlds__add_pred__PredSymName_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 450 "add_pred.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__PredSymName_26, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredModule_24));
#line 450 "add_pred.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__PredSymName_26, 1) = ((MR_Box) (hlds__make_hlds__add_pred__PredName_25));
#line 450 "add_pred.m"
        }
#line 455 "add_pred.m"
        if ((hlds__make_hlds__add_pred__IsClassMethod_16 == (MR_Integer) 0))
#line 456 "add_pred.m"
          {
#line 456 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__IsExported_27;

#line 457 "add_pred.m"
            {
#line 457 "add_pred.m"
              hlds__make_hlds__add_pred__IsExported_27 = hlds__hlds_pred__status_is_exported_1_f_0(hlds__make_hlds__add_pred__ImportStatus_22);
            }
#line 462 "add_pred.m"
            if ((hlds__make_hlds__add_pred__IsExported_27 == (MR_Integer) 0))
#line 561 "add_pred.m"
              {
#line 561 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__MainPieces_47;
#line 561 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__InnerComponents_49;
#line 561 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__Msg_50;
#line 561 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__Spec_52;
#line 561 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__V_55_55;
#line 561 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__V_56_56;
#line 561 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__V_57_57;
#line 561 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__V_77_77;
#line 561 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__V_81_81;
#line 561 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__V_82_82;
#line 561 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__V_91_91;

#line 563 "add_pred.m"
                {
#line 563 "add_pred.m"
                  hlds__make_hlds__add_pred__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 563 "add_pred.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_57_57, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredOrFunc_23));
#line 563 "add_pred.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_57_57, 1) = ((MR_Box) (hlds__make_hlds__add_pred__PredSymName_26));
#line 563 "add_pred.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_57_57, 2) = ((MR_Box) (hlds__make_hlds__add_pred__Arity_13));
#line 563 "add_pred.m"
                }
#line 563 "add_pred.m"
                {
#line 563 "add_pred.m"
                  hlds__make_hlds__add_pred__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 563 "add_pred.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 563 "add_pred.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_56_56, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_57_57));
#line 563 "add_pred.m"
                }
#line 562 "add_pred.m"
                {
#line 562 "add_pred.m"
                  hlds__make_hlds__add_pred__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 562 "add_pred.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_55_55, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_56_56));
#line 562 "add_pred.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[24])));
#line 562 "add_pred.m"
                }
#line 562 "add_pred.m"
                {
#line 562 "add_pred.m"
                  hlds__make_hlds__add_pred__MainPieces_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 562 "add_pred.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__MainPieces_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[22])));
#line 562 "add_pred.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__MainPieces_47, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_55_55));
#line 562 "add_pred.m"
                }
#line 569 "add_pred.m"
                {
#line 569 "add_pred.m"
                  hlds__make_hlds__add_pred__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 569 "add_pred.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_77_77, 0) = ((MR_Box) (hlds__make_hlds__add_pred__MainPieces_47));
#line 569 "add_pred.m"
                }
#line 569 "add_pred.m"
                {
#line 569 "add_pred.m"
                  hlds__make_hlds__add_pred__InnerComponents_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 569 "add_pred.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__InnerComponents_49, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_77_77));
#line 569 "add_pred.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__InnerComponents_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[25])));
#line 569 "add_pred.m"
                }
#line 571 "add_pred.m"
                {
#line 571 "add_pred.m"
                  hlds__make_hlds__add_pred__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 571 "add_pred.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_82_82, 0) = ((MR_Box) (((MR_Integer) 164 | (((MR_Integer) 0 << (MR_Integer) 10)))));
#line 571 "add_pred.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_82_82, 1) = ((MR_Box) (hlds__make_hlds__add_pred__InnerComponents_49));
#line 571 "add_pred.m"
                }
#line 570 "add_pred.m"
                {
#line 570 "add_pred.m"
                  hlds__make_hlds__add_pred__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 570 "add_pred.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_81_81, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_82_82));
#line 570 "add_pred.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 570 "add_pred.m"
                }
#line 570 "add_pred.m"
                {
#line 570 "add_pred.m"
                  hlds__make_hlds__add_pred__Msg_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 570 "add_pred.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_50, 0) = ((MR_Box) (hlds__make_hlds__add_pred__MContext_17));
#line 570 "add_pred.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_50, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_81_81));
#line 570 "add_pred.m"
                }
#line 573 "add_pred.m"
                {
#line 573 "add_pred.m"
                  hlds__make_hlds__add_pred__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 573 "add_pred.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_91_91, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Msg_50));
#line 573 "add_pred.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 573 "add_pred.m"
                }
#line 573 "add_pred.m"
                {
#line 573 "add_pred.m"
                  hlds__make_hlds__add_pred__Spec_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 573 "add_pred.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_2[0])));
#line 573 "add_pred.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 573 "add_pred.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_52, 2) = ((MR_Box) (hlds__make_hlds__add_pred__V_91_91));
#line 573 "add_pred.m"
                }
#line 574 "add_pred.m"
                {
#line 574 "add_pred.m"
                  MR_Word base;
#line 574 "add_pred.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 574 "add_pred.m"
                  *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_33 = base;
#line 574 "add_pred.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Spec_52));
#line 574 "add_pred.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_32));
#line 574 "add_pred.m"
                }
#line 561 "add_pred.m"
              }
#line 462 "add_pred.m"
            else
#line 460 "add_pred.m"
              {
#line 460 "add_pred.m"
                hlds__make_hlds__add_pred__unspecified_det_for_exported_6_p_0(hlds__make_hlds__add_pred__PredSymName_26, hlds__make_hlds__add_pred__Arity_13, hlds__make_hlds__add_pred__PredOrFunc_23, hlds__make_hlds__add_pred__MContext_17, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_32, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_33);
              }
#line 456 "add_pred.m"
          }
#line 455 "add_pred.m"
        else
#line 453 "add_pred.m"
          {
#line 453 "add_pred.m"
            hlds__make_hlds__add_pred__unspecified_det_for_method_6_p_0(hlds__make_hlds__add_pred__PredSymName_26, hlds__make_hlds__add_pred__Arity_13, hlds__make_hlds__add_pred__PredOrFunc_23, hlds__make_hlds__add_pred__MContext_17, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_32, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_33);
          }
#line 444 "add_pred.m"
      }
#line 468 "add_pred.m"
    else
#line 469 "add_pred.m"
      {
#line 470 "add_pred.m"
        hlds__make_hlds__add_pred__DetismDecl_21 = (MR_Integer) 0;
#line 470 "add_pred.m"
        *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_33 = hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_32;
#line 469 "add_pred.m"
      }
#line 474 "add_pred.m"
    {
#line 474 "add_pred.m"
      hlds__make_hlds__add_pred__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 474 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_37_37, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Modes_14));
#line 474 "add_pred.m"
    }
#line 474 "add_pred.m"
    {
#line 474 "add_pred.m"
      hlds__make_hlds__add_pred__do_add_new_proc_12_p_0(hlds__make_hlds__add_pred__InstVarSet_12, hlds__make_hlds__add_pred__Arity_13, hlds__make_hlds__add_pred__Modes_14, hlds__make_hlds__add_pred__V_37_37, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_pred__DetismDecl_21, hlds__make_hlds__add_pred__MaybeDet_15, hlds__make_hlds__add_pred__MContext_17, (MR_Integer) 1, hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_30, hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_31, hlds__make_hlds__add_pred__ProcId_19);
#line 474 "add_pred.m"
      return;
    }
#line 441 "add_pred.m"
  }
#line 435 "add_pred.m"
}

#line 235 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__add_builtin_5_p_0(
#line 235 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredId_6,
#line 235 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Types_7,
#line 235 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__CompilationTarget_8,
#line 235 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_61,
#line 235 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_62)
#line 235 "add_pred.m"
{
#line 238 "add_pred.m"
  {
#line 238 "add_pred.m"
    MR_bool hlds__make_hlds__add_pred__succeeded;
#line 238 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_133_133;
#line 238 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TypeInfo_134_134;
#line 238 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Module_10;
#line 238 "add_pred.m"
    MR_String hlds__make_hlds__add_pred__Name_11;
#line 238 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Context_12;
#line 238 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__ClausesInfo0_13;
#line 238 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__VarSet0_14;
#line 238 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__HeadVars_15;
#line 238 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__HeadVarList_16;
#line 238 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__GoalInfo0_17;
#line 238 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__NonLocals_18;
#line 238 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__GoalInfo1_19;
#line 238 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__GoalExpr_20;
#line 238 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__GoalInfo_21;
#line 238 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__ExtraVars_22;
#line 238 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__ExtraTypes_23;
#line 238 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__VarSet_24;
#line 238 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Stub_25;
#line 238 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__VarTypes_52;
#line 238 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TVarNameMap_53;
#line 238 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__RttiVarMaps_54;
#line 238 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Markers_60;
#line 238 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_63_63;
#line 238 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_118_118;
#line 238 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_119_119;
#line 238 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_121_121;
#line 238 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_122_122;
#line 253 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_138_138;

#line 239 "add_pred.m"
    {
#line 239 "add_pred.m"
      hlds__make_hlds__add_pred__Module_10 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_61);
    }
#line 240 "add_pred.m"
    {
#line 240 "add_pred.m"
      hlds__make_hlds__add_pred__Name_11 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_61);
    }
#line 241 "add_pred.m"
    {
#line 241 "add_pred.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_61, &hlds__make_hlds__add_pred__Context_12);
    }
#line 242 "add_pred.m"
    {
#line 242 "add_pred.m"
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_61, &hlds__make_hlds__add_pred__ClausesInfo0_13);
    }
#line 243 "add_pred.m"
    {
#line 243 "add_pred.m"
      hlds__hlds_clauses__clauses_info_get_varset_2_p_0(hlds__make_hlds__add_pred__ClausesInfo0_13, &hlds__make_hlds__add_pred__VarSet0_14);
    }
#line 244 "add_pred.m"
    {
#line 244 "add_pred.m"
      hlds__hlds_clauses__clauses_info_get_headvars_2_p_0(hlds__make_hlds__add_pred__ClausesInfo0_13, &hlds__make_hlds__add_pred__HeadVars_15);
    }
#line 247 "add_pred.m"
    {
#line 247 "add_pred.m"
      hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(hlds__make_hlds__add_pred__ClausesInfo0_13, &hlds__make_hlds__add_pred__HeadVarList_16);
    }
#line 249 "add_pred.m"
    {
#line 249 "add_pred.m"
      hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__add_pred__Context_12, &hlds__make_hlds__add_pred__GoalInfo0_17);
    }
#line 1675 "hlds.make_hlds.add_pred.c"
    hlds__make_hlds__add_pred__TypeCtorInfo_133_133 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1677 "hlds.make_hlds.add_pred.c"
    hlds__make_hlds__add_pred__TypeInfo_134_134 = (MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[0];
#line 250 "add_pred.m"
    {
#line 250 "add_pred.m"
      hlds__make_hlds__add_pred__V_63_63 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0(hlds__make_hlds__add_pred__TypeInfo_134_134, hlds__make_hlds__add_pred__HeadVars_15);
    }
#line 250 "add_pred.m"
    {
#line 250 "add_pred.m"
      hlds__make_hlds__add_pred__NonLocals_18 = parse_tree__set_of_var__list_to_set_1_f_0(hlds__make_hlds__add_pred__TypeCtorInfo_133_133, hlds__make_hlds__add_pred__V_63_63);
    }
#line 251 "add_pred.m"
    {
#line 251 "add_pred.m"
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(hlds__make_hlds__add_pred__NonLocals_18, hlds__make_hlds__add_pred__GoalInfo0_17, &hlds__make_hlds__add_pred__GoalInfo1_19);
    }
#line 253 "add_pred.m"
    {
#line 253 "add_pred.m"
      hlds__make_hlds__add_pred__V_138_138 = mdbcomp__prim_data__mercury_private_builtin_module_0_f_0();
    }
#line 253 "add_pred.m"
    {
#line 253 "add_pred.m"
      hlds__make_hlds__add_pred__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(hlds__make_hlds__add_pred__Module_10, hlds__make_hlds__add_pred__V_138_138);
    }
#line 253 "add_pred.m"
    if (hlds__make_hlds__add_pred__succeeded)
#line 258 "add_pred.m"
      {
#line 258 "add_pred.m"
        if ((strcmp(hlds__make_hlds__add_pred__Name_11, (MR_String) "builtin_compound_eq") == 0))
#line 255 "add_pred.m"
          hlds__make_hlds__add_pred__succeeded = MR_TRUE;
#line 258 "add_pred.m"
        else
#line 258 "add_pred.m"
          if ((strcmp(hlds__make_hlds__add_pred__Name_11, (MR_String) "builtin_compound_lt") == 0))
#line 256 "add_pred.m"
            hlds__make_hlds__add_pred__succeeded = MR_TRUE;
#line 258 "add_pred.m"
          else
#line 258 "add_pred.m"
            if ((((strcmp(hlds__make_hlds__add_pred__Name_11, (MR_String) "store_at_ref") == 0)) || ((strcmp(hlds__make_hlds__add_pred__Name_11, (MR_String) "store_at_ref_impure") == 0))))
#line 264 "add_pred.m"
              if ((hlds__make_hlds__add_pred__CompilationTarget_8 == (MR_Integer) 2))
#line 264 "add_pred.m"
                hlds__make_hlds__add_pred__succeeded = MR_TRUE;
#line 264 "add_pred.m"
              else
#line 264 "add_pred.m"
                if ((hlds__make_hlds__add_pred__CompilationTarget_8 == (MR_Integer) 5))
#line 265 "add_pred.m"
                  hlds__make_hlds__add_pred__succeeded = MR_TRUE;
#line 264 "add_pred.m"
                else
#line 264 "add_pred.m"
                  if ((hlds__make_hlds__add_pred__CompilationTarget_8 == (MR_Integer) 3))
#line 263 "add_pred.m"
                    hlds__make_hlds__add_pred__succeeded = MR_TRUE;
#line 264 "add_pred.m"
                  else
#line 264 "add_pred.m"
                    hlds__make_hlds__add_pred__succeeded = MR_FALSE;
#line 258 "add_pred.m"
            else
#line 258 "add_pred.m"
              hlds__make_hlds__add_pred__succeeded = MR_FALSE;
#line 258 "add_pred.m"
      }
#line 275 "add_pred.m"
    if (hlds__make_hlds__add_pred__succeeded)
#line 269 "add_pred.m"
      {
#line 269 "add_pred.m"
        hlds__make_hlds__add_pred__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_5[1]);
#line 270 "add_pred.m"
        hlds__make_hlds__add_pred__GoalInfo_21 = hlds__make_hlds__add_pred__GoalInfo1_19;
#line 271 "add_pred.m"
        hlds__make_hlds__add_pred__ExtraVars_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 272 "add_pred.m"
        hlds__make_hlds__add_pred__ExtraTypes_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 273 "add_pred.m"
        hlds__make_hlds__add_pred__VarSet_24 = hlds__make_hlds__add_pred__VarSet0_14;
#line 274 "add_pred.m"
        hlds__make_hlds__add_pred__Stub_25 = (MR_Integer) 1;
#line 269 "add_pred.m"
      }
#line 275 "add_pred.m"
    else
#line 313 "add_pred.m"
      {
#line 276 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__V_139_139;

#line 276 "add_pred.m"
        {
#line 276 "add_pred.m"
          hlds__make_hlds__add_pred__V_139_139 = mdbcomp__prim_data__mercury_private_builtin_module_0_f_0();
        }
#line 276 "add_pred.m"
        {
#line 276 "add_pred.m"
          hlds__make_hlds__add_pred__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(hlds__make_hlds__add_pred__Module_10, hlds__make_hlds__add_pred__V_139_139);
        }
#line 276 "add_pred.m"
        if (hlds__make_hlds__add_pred__succeeded)
#line 277 "add_pred.m"
          hlds__make_hlds__add_pred__succeeded = (strcmp(hlds__make_hlds__add_pred__Name_11, (MR_String) "trace_get_io_state") == 0);
#line 313 "add_pred.m"
        if (hlds__make_hlds__add_pred__succeeded)
#line 279 "add_pred.m"
          {
#line 279 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__LHS_30;
#line 279 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__Unification_33;
#line 279 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__AssignExpr_36;
#line 279 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__GoalInfoWithZero_37;
#line 279 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__AssignGoal_38;
#line 279 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__CastExpr_39;
#line 279 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__GoalInfoWithZeroHeadVars_40;
#line 279 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__CastGoal_41;
#line 279 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__ConjExpr_42;
#line 279 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__ConjGoal_43;
#line 279 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_67_67;
#line 279 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_88_88;
#line 279 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_91_91;
#line 279 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_94_94;
#line 279 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_95_95;
#line 279 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_96_96;
#line 279 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_97_97;
#line 279 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_101_101;
#line 279 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_102_102;
#line 279 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_104_104;
#line 279 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_105_105;

#line 279 "add_pred.m"
            {
#line 279 "add_pred.m"
              mercury__varset__new_var_3_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_133_133, &hlds__make_hlds__add_pred__LHS_30, hlds__make_hlds__add_pred__VarSet0_14, &hlds__make_hlds__add_pred__VarSet_24);
            }
#line 280 "add_pred.m"
            {
#line 280 "add_pred.m"
              hlds__make_hlds__add_pred__ExtraVars_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 280 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__ExtraVars_22, 0) = ((MR_Box) (hlds__make_hlds__add_pred__LHS_30));
#line 280 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__ExtraVars_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 280 "add_pred.m"
            }
#line 281 "add_pred.m"
            {
#line 281 "add_pred.m"
              hlds__make_hlds__add_pred__V_67_67 = parse_tree__builtin_lib_types__int_type_0_f_0();
            }
#line 281 "add_pred.m"
            {
#line 281 "add_pred.m"
              hlds__make_hlds__add_pred__ExtraTypes_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 281 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__ExtraTypes_23, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_67_67));
#line 281 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__ExtraTypes_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 281 "add_pred.m"
            }
#line 289 "add_pred.m"
            {
#line 289 "add_pred.m"
              hlds__make_hlds__add_pred__Unification_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 289 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Unification_33, 0) = ((MR_Box) (hlds__make_hlds__add_pred__LHS_30));
#line 289 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Unification_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[15])));
#line 289 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Unification_33, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 289 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Unification_33, 3) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[19])));
#line 289 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Unification_33, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 289 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Unification_33, 5) = ((MR_Box) ((MR_Integer) 1));
#line 289 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Unification_33, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 289 "add_pred.m"
            }
#line 293 "add_pred.m"
            {
#line 293 "add_pred.m"
              hlds__make_hlds__add_pred__AssignExpr_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 293 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__AssignExpr_36, 0) = ((MR_Box) (hlds__make_hlds__add_pred__LHS_30));
#line 293 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__AssignExpr_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_5[3])));
#line 293 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__AssignExpr_36, 2) = ((MR_Box) (&hlds__make_hlds__add_pred_scalar_common_1[20]));
#line 293 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__AssignExpr_36, 3) = ((MR_Box) (hlds__make_hlds__add_pred__Unification_33));
#line 293 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__AssignExpr_36, 4) = ((MR_Box) (&hlds__make_hlds__add_pred_scalar_common_1[21]));
#line 293 "add_pred.m"
            }
#line 294 "add_pred.m"
            {
#line 294 "add_pred.m"
              hlds__make_hlds__add_pred__V_88_88 = parse_tree__set_of_var__make_singleton_1_f_0(hlds__make_hlds__add_pred__TypeCtorInfo_133_133, hlds__make_hlds__add_pred__LHS_30);
            }
#line 294 "add_pred.m"
            {
#line 294 "add_pred.m"
              hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(hlds__make_hlds__add_pred__V_88_88, hlds__make_hlds__add_pred__GoalInfo0_17, &hlds__make_hlds__add_pred__GoalInfoWithZero_37);
            }
#line 296 "add_pred.m"
            {
#line 296 "add_pred.m"
              hlds__make_hlds__add_pred__AssignGoal_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 296 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__AssignGoal_38, 0) = ((MR_Box) (hlds__make_hlds__add_pred__AssignExpr_36));
#line 296 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__AssignGoal_38, 1) = ((MR_Box) (hlds__make_hlds__add_pred__GoalInfoWithZero_37));
#line 296 "add_pred.m"
            }
#line 298 "add_pred.m"
            {
#line 298 "add_pred.m"
              hlds__make_hlds__add_pred__V_91_91 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pred__TypeInfo_134_134, hlds__make_hlds__add_pred__ExtraVars_22, hlds__make_hlds__add_pred__HeadVarList_16);
            }
#line 299 "add_pred.m"
            {
#line 299 "add_pred.m"
              hlds__make_hlds__add_pred__V_95_95 = parse_tree__prog_mode__in_mode_0_f_0();
            }
#line 299 "add_pred.m"
            {
#line 299 "add_pred.m"
              hlds__make_hlds__add_pred__V_97_97 = parse_tree__prog_mode__uo_mode_0_f_0();
            }
#line 299 "add_pred.m"
            {
#line 299 "add_pred.m"
              hlds__make_hlds__add_pred__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 299 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_96_96, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_97_97));
#line 299 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 299 "add_pred.m"
            }
#line 298 "add_pred.m"
            {
#line 298 "add_pred.m"
              hlds__make_hlds__add_pred__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 298 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_94_94, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_95_95));
#line 298 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_94_94, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_96_96));
#line 298 "add_pred.m"
            }
#line 298 "add_pred.m"
            {
#line 298 "add_pred.m"
              hlds__make_hlds__add_pred__CastExpr_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 298 "add_pred.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__CastExpr_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 298 "add_pred.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__CastExpr_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_3[1])));
#line 298 "add_pred.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__CastExpr_39, 2) = ((MR_Box) (hlds__make_hlds__add_pred__V_91_91));
#line 298 "add_pred.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__CastExpr_39, 3) = ((MR_Box) (hlds__make_hlds__add_pred__V_94_94));
#line 298 "add_pred.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__CastExpr_39, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 298 "add_pred.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__CastExpr_39, 5) = ((MR_Box) ((MR_Integer) 0));
#line 298 "add_pred.m"
            }
#line 302 "add_pred.m"
            {
#line 302 "add_pred.m"
              hlds__make_hlds__add_pred__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 302 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_102_102, 0) = ((MR_Box) (hlds__make_hlds__add_pred__LHS_30));
#line 302 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_102_102, 1) = ((MR_Box) (hlds__make_hlds__add_pred__HeadVarList_16));
#line 302 "add_pred.m"
            }
#line 301 "add_pred.m"
            {
#line 301 "add_pred.m"
              hlds__make_hlds__add_pred__V_101_101 = parse_tree__set_of_var__list_to_set_1_f_0(hlds__make_hlds__add_pred__TypeCtorInfo_133_133, hlds__make_hlds__add_pred__V_102_102);
            }
#line 301 "add_pred.m"
            {
#line 301 "add_pred.m"
              hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(hlds__make_hlds__add_pred__V_101_101, hlds__make_hlds__add_pred__GoalInfo0_17, &hlds__make_hlds__add_pred__GoalInfoWithZeroHeadVars_40);
            }
#line 304 "add_pred.m"
            {
#line 304 "add_pred.m"
              hlds__make_hlds__add_pred__CastGoal_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 304 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__CastGoal_41, 0) = ((MR_Box) (hlds__make_hlds__add_pred__CastExpr_39));
#line 304 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__CastGoal_41, 1) = ((MR_Box) (hlds__make_hlds__add_pred__GoalInfoWithZeroHeadVars_40));
#line 304 "add_pred.m"
            }
#line 306 "add_pred.m"
            {
#line 306 "add_pred.m"
              hlds__make_hlds__add_pred__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 306 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_105_105, 0) = ((MR_Box) (hlds__make_hlds__add_pred__CastGoal_41));
#line 306 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_105_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 306 "add_pred.m"
            }
#line 306 "add_pred.m"
            {
#line 306 "add_pred.m"
              hlds__make_hlds__add_pred__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 306 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_104_104, 0) = ((MR_Box) (hlds__make_hlds__add_pred__AssignGoal_38));
#line 306 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_104_104, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_105_105));
#line 306 "add_pred.m"
            }
#line 306 "add_pred.m"
            {
#line 306 "add_pred.m"
              hlds__make_hlds__add_pred__ConjExpr_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 306 "add_pred.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__ConjExpr_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 306 "add_pred.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__ConjExpr_42, 1) = ((MR_Box) ((MR_Integer) 0));
#line 306 "add_pred.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__ConjExpr_42, 2) = ((MR_Box) (hlds__make_hlds__add_pred__V_104_104));
#line 306 "add_pred.m"
            }
#line 307 "add_pred.m"
            {
#line 307 "add_pred.m"
              hlds__make_hlds__add_pred__ConjGoal_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 307 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ConjGoal_43, 0) = ((MR_Box) (hlds__make_hlds__add_pred__ConjExpr_42));
#line 307 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ConjGoal_43, 1) = ((MR_Box) (hlds__make_hlds__add_pred__GoalInfoWithZeroHeadVars_40));
#line 307 "add_pred.m"
            }
#line 310 "add_pred.m"
            {
#line 310 "add_pred.m"
              hlds__make_hlds__add_pred__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 310 "add_pred.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__GoalExpr_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 310 "add_pred.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__GoalExpr_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pred_scalar_common_3[2])));
#line 310 "add_pred.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__GoalExpr_20, 2) = ((MR_Box) (hlds__make_hlds__add_pred__ConjGoal_43));
#line 310 "add_pred.m"
            }
#line 311 "add_pred.m"
            hlds__make_hlds__add_pred__GoalInfo_21 = hlds__make_hlds__add_pred__GoalInfo1_19;
#line 312 "add_pred.m"
            hlds__make_hlds__add_pred__Stub_25 = (MR_Integer) 0;
#line 279 "add_pred.m"
          }
#line 313 "add_pred.m"
        else
#line 326 "add_pred.m"
          {
#line 314 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_140_140;

#line 314 "add_pred.m"
            {
#line 314 "add_pred.m"
              hlds__make_hlds__add_pred__V_140_140 = mdbcomp__prim_data__mercury_private_builtin_module_0_f_0();
            }
#line 314 "add_pred.m"
            {
#line 314 "add_pred.m"
              hlds__make_hlds__add_pred__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(hlds__make_hlds__add_pred__Module_10, hlds__make_hlds__add_pred__V_140_140);
            }
#line 314 "add_pred.m"
            if (hlds__make_hlds__add_pred__succeeded)
#line 315 "add_pred.m"
              hlds__make_hlds__add_pred__succeeded = (strcmp(hlds__make_hlds__add_pred__Name_11, (MR_String) "trace_set_io_state") == 0);
#line 326 "add_pred.m"
            if (hlds__make_hlds__add_pred__succeeded)
#line 317 "add_pred.m"
              {
#line 317 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__ConjGoal_128;

#line 321 "add_pred.m"
                hlds__make_hlds__add_pred__GoalInfo_21 = hlds__make_hlds__add_pred__GoalInfo1_19;
#line 318 "add_pred.m"
                {
#line 318 "add_pred.m"
                  hlds__make_hlds__add_pred__ConjGoal_128 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 318 "add_pred.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ConjGoal_128, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_5[1])));
#line 318 "add_pred.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ConjGoal_128, 1) = ((MR_Box) (hlds__make_hlds__add_pred__GoalInfo_21));
#line 318 "add_pred.m"
                }
#line 320 "add_pred.m"
                {
#line 320 "add_pred.m"
                  hlds__make_hlds__add_pred__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 320 "add_pred.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__GoalExpr_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 320 "add_pred.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__GoalExpr_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pred_scalar_common_3[3])));
#line 320 "add_pred.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__GoalExpr_20, 2) = ((MR_Box) (hlds__make_hlds__add_pred__ConjGoal_128));
#line 320 "add_pred.m"
                }
#line 322 "add_pred.m"
                hlds__make_hlds__add_pred__ExtraVars_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 323 "add_pred.m"
                hlds__make_hlds__add_pred__ExtraTypes_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 324 "add_pred.m"
                hlds__make_hlds__add_pred__VarSet_24 = hlds__make_hlds__add_pred__VarSet0_14;
#line 325 "add_pred.m"
                hlds__make_hlds__add_pred__Stub_25 = (MR_Integer) 0;
#line 317 "add_pred.m"
              }
#line 326 "add_pred.m"
            else
#line 328 "add_pred.m"
              {
#line 328 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__SymName_45;
#line 328 "add_pred.m"
                MR_Integer hlds__make_hlds__add_pred__ModeId_46;
#line 328 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__Purity_48;

#line 328 "add_pred.m"
                {
#line 328 "add_pred.m"
                  hlds__make_hlds__add_pred__SymName_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 328 "add_pred.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__SymName_45, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Module_10));
#line 328 "add_pred.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__SymName_45, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Name_11));
#line 328 "add_pred.m"
                }
#line 330 "add_pred.m"
                {
#line 330 "add_pred.m"
                  hlds__make_hlds__add_pred__ModeId_46 = hlds__hlds_pred__invalid_proc_id_0_f_0();
                }
#line 333 "add_pred.m"
                {
#line 333 "add_pred.m"
                  hlds__make_hlds__add_pred__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 333 "add_pred.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pred__GoalExpr_20, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredId_6));
#line 333 "add_pred.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pred__GoalExpr_20, 1) = ((MR_Box) (hlds__make_hlds__add_pred__ModeId_46));
#line 333 "add_pred.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pred__GoalExpr_20, 2) = ((MR_Box) (hlds__make_hlds__add_pred__HeadVarList_16));
#line 333 "add_pred.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pred__GoalExpr_20, 3) = ((MR_Box) ((MR_Integer) 0));
#line 333 "add_pred.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pred__GoalExpr_20, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 333 "add_pred.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pred__GoalExpr_20, 5) = ((MR_Box) (hlds__make_hlds__add_pred__SymName_45));
#line 333 "add_pred.m"
                }
#line 335 "add_pred.m"
                {
#line 335 "add_pred.m"
                  hlds__hlds_pred__pred_info_get_purity_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_61, &hlds__make_hlds__add_pred__Purity_48);
                }
#line 336 "add_pred.m"
                {
#line 336 "add_pred.m"
                  hlds__hlds_goal__goal_info_set_purity_3_p_0(hlds__make_hlds__add_pred__Purity_48, hlds__make_hlds__add_pred__GoalInfo1_19, &hlds__make_hlds__add_pred__GoalInfo_21);
                }
#line 337 "add_pred.m"
                hlds__make_hlds__add_pred__ExtraVars_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 338 "add_pred.m"
                hlds__make_hlds__add_pred__ExtraTypes_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 339 "add_pred.m"
                hlds__make_hlds__add_pred__VarSet_24 = hlds__make_hlds__add_pred__VarSet0_14;
#line 340 "add_pred.m"
                hlds__make_hlds__add_pred__Stub_25 = (MR_Integer) 0;
#line 328 "add_pred.m"
              }
#line 326 "add_pred.m"
          }
#line 313 "add_pred.m"
      }
#line 356 "add_pred.m"
    {
#line 356 "add_pred.m"
      hlds__make_hlds__add_pred__V_118_118 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pred__TypeInfo_134_134, hlds__make_hlds__add_pred__ExtraVars_22, hlds__make_hlds__add_pred__HeadVarList_16);
    }
#line 356 "add_pred.m"
    {
#line 356 "add_pred.m"
      hlds__make_hlds__add_pred__V_119_119 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__make_hlds__add_pred__ExtraTypes_23, hlds__make_hlds__add_pred__Types_7);
    }
#line 356 "add_pred.m"
    {
#line 356 "add_pred.m"
      parse_tree__prog_data__vartypes_from_corresponding_lists_3_p_0(hlds__make_hlds__add_pred__V_118_118, hlds__make_hlds__add_pred__V_119_119, &hlds__make_hlds__add_pred__VarTypes_52);
    }
#line 358 "add_pred.m"
    {
#line 358 "add_pred.m"
      mercury__map__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[1], &hlds__make_hlds__add_pred__TVarNameMap_53);
    }
#line 359 "add_pred.m"
    {
#line 359 "add_pred.m"
      hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&hlds__make_hlds__add_pred__RttiVarMaps_54);
    }
#line 361 "add_pred.m"
    {
#line 361 "add_pred.m"
      hlds__make_hlds__add_pred__V_121_121 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
    }
#line 2223 "hlds.make_hlds.add_pred.c"
    if ((hlds__make_hlds__add_pred__Stub_25 == (MR_Integer) 0))
#line 2225 "hlds.make_hlds.add_pred.c"
      {
#line 2227 "hlds.make_hlds.add_pred.c"
        MR_Word hlds__make_hlds__add_pred__Goal_49;
#line 2229 "hlds.make_hlds.add_pred.c"
        MR_Word hlds__make_hlds__add_pred__Clause_50;
#line 2231 "hlds.make_hlds.add_pred.c"
        MR_Word hlds__make_hlds__add_pred__ClausesRep_51;
#line 2233 "hlds.make_hlds.add_pred.c"
        MR_Word hlds__make_hlds__add_pred__ClausesInfo_56;
#line 2235 "hlds.make_hlds.add_pred.c"
        MR_Word hlds__make_hlds__add_pred__Markers0_57;
#line 2237 "hlds.make_hlds.add_pred.c"
        MR_Word hlds__make_hlds__add_pred__V_116_116;

#line 346 "add_pred.m"
        {
#line 346 "add_pred.m"
          hlds__make_hlds__add_pred__Goal_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 346 "add_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Goal_49, 0) = ((MR_Box) (hlds__make_hlds__add_pred__GoalExpr_20));
#line 346 "add_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Goal_49, 1) = ((MR_Box) (hlds__make_hlds__add_pred__GoalInfo_21));
#line 346 "add_pred.m"
        }
#line 347 "add_pred.m"
        {
#line 347 "add_pred.m"
          hlds__make_hlds__add_pred__Clause_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 347 "add_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Clause_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 347 "add_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Clause_50, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Goal_49));
#line 347 "add_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Clause_50, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 347 "add_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Clause_50, 3) = ((MR_Box) (hlds__make_hlds__add_pred__Context_12));
#line 347 "add_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Clause_50, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 347 "add_pred.m"
        }
#line 348 "add_pred.m"
        {
#line 348 "add_pred.m"
          hlds__make_hlds__add_pred__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 348 "add_pred.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_116_116, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Clause_50));
#line 348 "add_pred.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 348 "add_pred.m"
        }
#line 348 "add_pred.m"
        {
#line 348 "add_pred.m"
          hlds__hlds_clauses__set_clause_list_2_p_0(hlds__make_hlds__add_pred__V_116_116, &hlds__make_hlds__add_pred__ClausesRep_51);
        }
#line 361 "add_pred.m"
        {
#line 361 "add_pred.m"
          hlds__make_hlds__add_pred__ClausesInfo_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 361 "add_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_56, 0) = ((MR_Box) (hlds__make_hlds__add_pred__VarSet_24));
#line 361 "add_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_56, 1) = ((MR_Box) (hlds__make_hlds__add_pred__VarTypes_52));
#line 361 "add_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_56, 2) = ((MR_Box) (hlds__make_hlds__add_pred__TVarNameMap_53));
#line 361 "add_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_56, 3) = ((MR_Box) (hlds__make_hlds__add_pred__VarTypes_52));
#line 361 "add_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_56, 4) = ((MR_Box) (hlds__make_hlds__add_pred__HeadVars_15));
#line 361 "add_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_56, 5) = ((MR_Box) (hlds__make_hlds__add_pred__ClausesRep_51));
#line 361 "add_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_56, 6) = ((MR_Box) (hlds__make_hlds__add_pred__V_121_121));
#line 361 "add_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_56, 7) = ((MR_Box) (hlds__make_hlds__add_pred__RttiVarMaps_54));
#line 361 "add_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_56, 8) = ((MR_Box) ((MR_Integer) 0));
#line 361 "add_pred.m"
        }
#line 364 "add_pred.m"
        {
#line 364 "add_pred.m"
          hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(hlds__make_hlds__add_pred__ClausesInfo_56, hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_61, &hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_122_122);
        }
#line 371 "add_pred.m"
        {
#line 371 "add_pred.m"
          hlds__hlds_pred__pred_info_get_markers_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_122_122, &hlds__make_hlds__add_pred__Markers0_57);
        }
#line 372 "add_pred.m"
        {
#line 372 "add_pred.m"
          hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 7, hlds__make_hlds__add_pred__Markers0_57, &hlds__make_hlds__add_pred__Markers_60);
        }
#line 2320 "hlds.make_hlds.add_pred.c"
      }
#line 2322 "hlds.make_hlds.add_pred.c"
    else
#line 2324 "hlds.make_hlds.add_pred.c"
      {
#line 2326 "hlds.make_hlds.add_pred.c"
        MR_Word hlds__make_hlds__add_pred__Markers2_59;
#line 2328 "hlds.make_hlds.add_pred.c"
        MR_Word hlds__make_hlds__add_pred__ClausesRep_144;
#line 2330 "hlds.make_hlds.add_pred.c"
        MR_Word hlds__make_hlds__add_pred__ClausesInfo_145;
#line 2332 "hlds.make_hlds.add_pred.c"
        MR_Word hlds__make_hlds__add_pred__Markers0_146;
#line 2334 "hlds.make_hlds.add_pred.c"
        MR_Word hlds__make_hlds__add_pred__Markers1_147;

#line 351 "add_pred.m"
        {
#line 351 "add_pred.m"
          hlds__hlds_clauses__set_clause_list_2_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__add_pred__ClausesRep_144);
        }
#line 361 "add_pred.m"
        {
#line 361 "add_pred.m"
          hlds__make_hlds__add_pred__ClausesInfo_145 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 361 "add_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_145, 0) = ((MR_Box) (hlds__make_hlds__add_pred__VarSet_24));
#line 361 "add_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_145, 1) = ((MR_Box) (hlds__make_hlds__add_pred__VarTypes_52));
#line 361 "add_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_145, 2) = ((MR_Box) (hlds__make_hlds__add_pred__TVarNameMap_53));
#line 361 "add_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_145, 3) = ((MR_Box) (hlds__make_hlds__add_pred__VarTypes_52));
#line 361 "add_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_145, 4) = ((MR_Box) (hlds__make_hlds__add_pred__HeadVars_15));
#line 361 "add_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_145, 5) = ((MR_Box) (hlds__make_hlds__add_pred__ClausesRep_144));
#line 361 "add_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_145, 6) = ((MR_Box) (hlds__make_hlds__add_pred__V_121_121));
#line 361 "add_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_145, 7) = ((MR_Box) (hlds__make_hlds__add_pred__RttiVarMaps_54));
#line 361 "add_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_145, 8) = ((MR_Box) ((MR_Integer) 0));
#line 361 "add_pred.m"
        }
#line 364 "add_pred.m"
        {
#line 364 "add_pred.m"
          hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(hlds__make_hlds__add_pred__ClausesInfo_145, hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_61, &hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_122_122);
        }
#line 371 "add_pred.m"
        {
#line 371 "add_pred.m"
          hlds__hlds_pred__pred_info_get_markers_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_122_122, &hlds__make_hlds__add_pred__Markers0_146);
        }
#line 372 "add_pred.m"
        {
#line 372 "add_pred.m"
          hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 7, hlds__make_hlds__add_pred__Markers0_146, &hlds__make_hlds__add_pred__Markers1_147);
        }
#line 375 "add_pred.m"
        {
#line 375 "add_pred.m"
          hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 0, hlds__make_hlds__add_pred__Markers1_147, &hlds__make_hlds__add_pred__Markers2_59);
        }
#line 376 "add_pred.m"
        {
#line 376 "add_pred.m"
          hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 1, hlds__make_hlds__add_pred__Markers2_59, &hlds__make_hlds__add_pred__Markers_60);
        }
#line 2391 "hlds.make_hlds.add_pred.c"
      }
#line 381 "add_pred.m"
    {
#line 381 "add_pred.m"
      hlds__hlds_pred__pred_info_set_markers_3_p_0(hlds__make_hlds__add_pred__Markers_60, hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_122_122, hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_62);
#line 381 "add_pred.m"
      return;
    }
#line 238 "add_pred.m"
  }
#line 235 "add_pred.m"
}

#line 186 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__add_new_pred_15_p_0_1(
#line 186 "add_pred.m"
  MR_Box hlds__make_hlds__add_pred__closure_arg,
#line 186 "add_pred.m"
  MR_Box hlds__make_hlds__add_pred__wrapper_arg_1,
#line 186 "add_pred.m"
  MR_Box hlds__make_hlds__add_pred__wrapper_arg_2,
#line 186 "add_pred.m"
  MR_Box * hlds__make_hlds__add_pred__wrapper_arg_3)
#line 186 "add_pred.m"
{
#line 186 "add_pred.m"
  {
#line 186 "add_pred.m"
    MR_Box hlds__make_hlds__add_pred__closure = hlds__make_hlds__add_pred__closure_arg;
#line 186 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__conv0_HeadVar__3_3;

#line 186 "add_pred.m"
    {
#line 186 "add_pred.m"
      hlds__hlds_pred__add_marker_3_p_0(((MR_Word) hlds__make_hlds__add_pred__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_pred__wrapper_arg_2), &hlds__make_hlds__add_pred__conv0_HeadVar__3_3);
    }
#line 186 "add_pred.m"
    *hlds__make_hlds__add_pred__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__add_pred__conv0_HeadVar__3_3));
#line 186 "add_pred.m"
  }
#line 186 "add_pred.m"
}

#line 151 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__add_new_pred_15_p_0(
#line 151 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__TVarSet_16,
#line 151 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ExistQVars_17,
#line 151 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredName_18,
#line 151 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Types_19,
#line 151 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Purity_20,
#line 151 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ClassContext_21,
#line 151 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Markers0_22,
#line 151 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_23,
#line 151 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ItemStatus_24,
#line 151 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__NeedQual_25,
#line 151 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_26,
#line 151 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_60,
#line 151 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_61,
#line 151 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_62,
#line 151 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_63)
#line 151 "add_pred.m"
{
#line 160 "add_pred.m"
  {
#line 160 "add_pred.m"
    MR_bool hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__ItemStatus_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 160 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Status_29;
#line 160 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__ModuleName_30;
#line 160 "add_pred.m"
    MR_Integer hlds__make_hlds__add_pred__Arity_31;

#line 166 "add_pred.m"
    if (hlds__make_hlds__add_pred__succeeded)
#line 165 "add_pred.m"
      {
#line 165 "add_pred.m"
        hlds__make_hlds__add_pred__Status_29 = (MR_Word) MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pred_scalar_common_3[0]);
#line 165 "add_pred.m"
      }
#line 166 "add_pred.m"
    else
#line 167 "add_pred.m"
      hlds__make_hlds__add_pred__Status_29 = hlds__make_hlds__add_pred__ItemStatus_24;
#line 169 "add_pred.m"
    {
#line 169 "add_pred.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_60, &hlds__make_hlds__add_pred__ModuleName_30);
    }
#line 170 "add_pred.m"
    {
#line 170 "add_pred.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__make_hlds__add_pred__Types_19, &hlds__make_hlds__add_pred__Arity_31);
    }
#line 177 "add_pred.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_pred__PredName_18)) == (MR_mktag((MR_Integer) 1))))
#line 178 "add_pred.m"
      {
#line 178 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_76_76;
#line 178 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__MNameOfPred_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__PredName_18, (MR_Integer) 0)));
#line 178 "add_pred.m"
        MR_String hlds__make_hlds__add_pred__PName_34 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__PredName_18, (MR_Integer) 1)));
#line 178 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__PredTable0_35;
#line 178 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__ClausesInfo_36;
#line 178 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__Proofs_37;
#line 178 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__ConstraintMap_38;
#line 178 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__PurityMarkers_39;
#line 178 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__MarkersList_40;
#line 178 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__Markers_41;
#line 178 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__VarNameRemap_42;
#line 178 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__PredInfo0_43;
#line 178 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__PredIds_44;
#line 178 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__V_65_65;
#line 178 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__V_67_67;
#line 186 "add_pred.m"
        MR_Box hlds__make_hlds__add_pred__conv1_Markers_41;

#line 179 "add_pred.m"
        {
#line 179 "add_pred.m"
          hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_60, &hlds__make_hlds__add_pred__PredTable0_35);
        }
#line 180 "add_pred.m"
        {
#line 180 "add_pred.m"
          hlds__make_hlds__add_pred__V_65_65 = hlds__hlds_clauses__init_clause_item_numbers_user_0_f_0();
        }
#line 180 "add_pred.m"
        {
#line 180 "add_pred.m"
          hlds__hlds_clauses__clauses_info_init_4_p_0(hlds__make_hlds__add_pred__PredOrFunc_26, hlds__make_hlds__add_pred__Arity_31, hlds__make_hlds__add_pred__V_65_65, &hlds__make_hlds__add_pred__ClausesInfo_36);
        }
#line 2557 "hlds.make_hlds.add_pred.c"
        hlds__make_hlds__add_pred__TypeCtorInfo_76_76 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 182 "add_pred.m"
        {
#line 182 "add_pred.m"
          mercury__map__init_1_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_76_76, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, &hlds__make_hlds__add_pred__Proofs_37);
        }
#line 183 "add_pred.m"
        {
#line 183 "add_pred.m"
          mercury__map__init_1_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, hlds__make_hlds__add_pred__TypeCtorInfo_76_76, &hlds__make_hlds__add_pred__ConstraintMap_38);
        }
#line 184 "add_pred.m"
        {
#line 184 "add_pred.m"
          hlds__hlds_pred__purity_to_markers_2_p_0(hlds__make_hlds__add_pred__Purity_20, &hlds__make_hlds__add_pred__PurityMarkers_39);
        }
#line 185 "add_pred.m"
        {
#line 185 "add_pred.m"
          hlds__hlds_pred__markers_to_marker_list_2_p_0(hlds__make_hlds__add_pred__PurityMarkers_39, &hlds__make_hlds__add_pred__MarkersList_40);
        }
#line 186 "add_pred.m"
        {
#line 186 "add_pred.m"
          mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_marker_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_markers_0, (MR_Word) &hlds__make_hlds__add_pred_scalar_common_5[0], hlds__make_hlds__add_pred__MarkersList_40, ((MR_Box) (hlds__make_hlds__add_pred__Markers0_22)), &hlds__make_hlds__add_pred__conv1_Markers_41);
        }
#line 186 "add_pred.m"
        hlds__make_hlds__add_pred__Markers_41 = ((MR_Word) hlds__make_hlds__add_pred__conv1_Markers_41);
#line 187 "add_pred.m"
        {
#line 187 "add_pred.m"
          mercury__map__init_1_p_0((MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, &hlds__make_hlds__add_pred__VarNameRemap_42);
        }
#line 188 "add_pred.m"
        {
#line 188 "add_pred.m"
          hlds__make_hlds__add_pred__V_67_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 188 "add_pred.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_67_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 188 "add_pred.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_67_67, 1) = ((MR_Box) (hlds__make_hlds__add_pred__PredName_18));
#line 188 "add_pred.m"
        }
#line 188 "add_pred.m"
        {
#line 188 "add_pred.m"
          hlds__hlds_pred__pred_info_init_18_p_0(hlds__make_hlds__add_pred__ModuleName_30, hlds__make_hlds__add_pred__PredName_18, hlds__make_hlds__add_pred__Arity_31, hlds__make_hlds__add_pred__PredOrFunc_26, hlds__make_hlds__add_pred__Context_23, hlds__make_hlds__add_pred__V_67_67, hlds__make_hlds__add_pred__Status_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_pred__Markers_41, hlds__make_hlds__add_pred__Types_19, hlds__make_hlds__add_pred__TVarSet_16, hlds__make_hlds__add_pred__ExistQVars_17, hlds__make_hlds__add_pred__ClassContext_21, hlds__make_hlds__add_pred__Proofs_37, hlds__make_hlds__add_pred__ConstraintMap_38, hlds__make_hlds__add_pred__ClausesInfo_36, hlds__make_hlds__add_pred__VarNameRemap_42, &hlds__make_hlds__add_pred__PredInfo0_43);
        }
#line 192 "add_pred.m"
        {
#line 192 "add_pred.m"
          hlds__pred_table__predicate_table_lookup_pf_m_n_a_7_p_0(hlds__make_hlds__add_pred__PredTable0_35, (MR_Integer) 0, hlds__make_hlds__add_pred__PredOrFunc_26, hlds__make_hlds__add_pred__MNameOfPred_33, hlds__make_hlds__add_pred__PName_34, hlds__make_hlds__add_pred__Arity_31, &hlds__make_hlds__add_pred__PredIds_44);
        }
#line 202 "add_pred.m"
        if ((hlds__make_hlds__add_pred__PredIds_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 203 "add_pred.m"
          {
#line 203 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__PQInfo_51;
#line 203 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__PredId_52;
#line 203 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__PredTable1_53;
#line 203 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__PredTable_59;

#line 204 "add_pred.m"
            {
#line 204 "add_pred.m"
              hlds__hlds_module__module_info_get_partial_qualifier_info_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_60, &hlds__make_hlds__add_pred__PQInfo_51);
            }
#line 205 "add_pred.m"
            {
#line 205 "add_pred.m"
              hlds__pred_table__predicate_table_insert_qual_6_p_0(hlds__make_hlds__add_pred__PredInfo0_43, hlds__make_hlds__add_pred__NeedQual_25, hlds__make_hlds__add_pred__PQInfo_51, &hlds__make_hlds__add_pred__PredId_52, hlds__make_hlds__add_pred__PredTable0_35, &hlds__make_hlds__add_pred__PredTable1_53);
            }
#line 207 "add_pred.m"
            {
#line 207 "add_pred.m"
              hlds__make_hlds__add_pred__succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(hlds__make_hlds__add_pred__PredInfo0_43);
            }
#line 215 "add_pred.m"
            if (hlds__make_hlds__add_pred__succeeded)
#line 208 "add_pred.m"
              {
#line 208 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__Globals_54;
#line 208 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__CompilationTarget_55;
#line 208 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__PredInfo_56;
#line 208 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__Preds1_57;
#line 208 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__Preds_58;

#line 208 "add_pred.m"
                {
#line 208 "add_pred.m"
                  hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_60, &hlds__make_hlds__add_pred__Globals_54);
                }
#line 209 "add_pred.m"
                {
#line 209 "add_pred.m"
                  libs__globals__get_target_2_p_0(hlds__make_hlds__add_pred__Globals_54, &hlds__make_hlds__add_pred__CompilationTarget_55);
                }
#line 210 "add_pred.m"
                {
#line 210 "add_pred.m"
                  hlds__make_hlds__add_pred__add_builtin_5_p_0(hlds__make_hlds__add_pred__PredId_52, hlds__make_hlds__add_pred__Types_19, hlds__make_hlds__add_pred__CompilationTarget_55, hlds__make_hlds__add_pred__PredInfo0_43, &hlds__make_hlds__add_pred__PredInfo_56);
                }
#line 212 "add_pred.m"
                {
#line 212 "add_pred.m"
                  hlds__pred_table__predicate_table_get_preds_2_p_0(hlds__make_hlds__add_pred__PredTable1_53, &hlds__make_hlds__add_pred__Preds1_57);
                }
#line 213 "add_pred.m"
                {
#line 213 "add_pred.m"
                  mercury__map__det_update_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, ((MR_Box) (hlds__make_hlds__add_pred__PredId_52)), ((MR_Box) (hlds__make_hlds__add_pred__PredInfo_56)), hlds__make_hlds__add_pred__Preds1_57, &hlds__make_hlds__add_pred__Preds_58);
                }
#line 214 "add_pred.m"
                {
#line 214 "add_pred.m"
                  hlds__pred_table__predicate_table_set_preds_3_p_0(hlds__make_hlds__add_pred__Preds_58, hlds__make_hlds__add_pred__PredTable1_53, &hlds__make_hlds__add_pred__PredTable_59);
                }
#line 208 "add_pred.m"
              }
#line 215 "add_pred.m"
            else
#line 216 "add_pred.m"
              hlds__make_hlds__add_pred__PredTable_59 = hlds__make_hlds__add_pred__PredTable1_53;
#line 218 "add_pred.m"
            {
#line 218 "add_pred.m"
              hlds__hlds_module__module_info_set_predicate_table_3_p_0(hlds__make_hlds__add_pred__PredTable_59, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_60, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_61);
            }
#line 218 "add_pred.m"
            *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_63 = hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_62;
#line 203 "add_pred.m"
          }
#line 202 "add_pred.m"
        else
#line 195 "add_pred.m"
          {
#line 195 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__OrigPred_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__PredIds_44, (MR_Integer) 0)));
#line 195 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__OrigPredInfo_47;
#line 195 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__OrigContext_48;
#line 195 "add_pred.m"
            MR_String hlds__make_hlds__add_pred__DeclString_49;
#line 195 "add_pred.m"
            MR_Integer hlds__make_hlds__add_pred__OrigArity_50;
#line 195 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__PredIds_44, (MR_Integer) 1)));

#line 196 "add_pred.m"
            {
#line 196 "add_pred.m"
              hlds__hlds_module__module_info_pred_info_3_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_60, hlds__make_hlds__add_pred__OrigPred_45, &hlds__make_hlds__add_pred__OrigPredInfo_47);
            }
#line 197 "add_pred.m"
            {
#line 197 "add_pred.m"
              hlds__hlds_pred__pred_info_get_context_2_p_0(hlds__make_hlds__add_pred__OrigPredInfo_47, &hlds__make_hlds__add_pred__OrigContext_48);
            }
#line 198 "add_pred.m"
            {
#line 198 "add_pred.m"
              hlds__make_hlds__add_pred__DeclString_49 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(hlds__make_hlds__add_pred__PredOrFunc_26);
            }
#line 199 "add_pred.m"
            {
#line 199 "add_pred.m"
              parse_tree__prog_util__adjust_func_arity_3_p_1(hlds__make_hlds__add_pred__PredOrFunc_26, &hlds__make_hlds__add_pred__OrigArity_50, hlds__make_hlds__add_pred__Arity_31);
            }
#line 200 "add_pred.m"
            {
#line 200 "add_pred.m"
              hlds__make_hlds__make_hlds_error__multiple_def_error_9_p_0(hlds__make_hlds__add_pred__ItemStatus_24, hlds__make_hlds__add_pred__PredName_18, hlds__make_hlds__add_pred__OrigArity_50, hlds__make_hlds__add_pred__DeclString_49, hlds__make_hlds__add_pred__Context_23, hlds__make_hlds__add_pred__OrigContext_48, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_62, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_63);
            }
#line 200 "add_pred.m"
            *hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_61 = hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_60;
#line 195 "add_pred.m"
          }
#line 178 "add_pred.m"
      }
#line 177 "add_pred.m"
    else
#line 172 "add_pred.m"
      {
#line 173 "add_pred.m"
        {
#line 173 "add_pred.m"
          hlds__hlds_module__module_info_incr_errors_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_60, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_61);
        }
#line 174 "add_pred.m"
        {
#line 174 "add_pred.m"
          hlds__make_hlds__add_pred__unqualified_pred_error_5_p_0(hlds__make_hlds__add_pred__PredName_18, hlds__make_hlds__add_pred__Arity_31, hlds__make_hlds__add_pred__Context_23, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_62, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_63);
#line 174 "add_pred.m"
          return;
        }
#line 172 "add_pred.m"
      }
#line 160 "add_pred.m"
  }
#line 151 "add_pred.m"
}

#line 66 "add_pred.m"
void MR_CALL 
hlds__make_hlds__add_pred__preds_add_implicit_for_assertion_11_p_0(
#line 66 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__HeadVars_12,
#line 66 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ModuleInfo_13,
#line 66 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ModuleName_14,
#line 66 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredName_15,
#line 66 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__Arity_16,
#line 66 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Status_17,
#line 66 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_18,
#line 66 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_19,
#line 66 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__PredId_20,
#line 66 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_PredicateTable_0_25,
#line 66 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_PredicateTable_26)
#line 66 "add_pred.m"
{
#line 510 "add_pred.m"
  {
#line 510 "add_pred.m"
    MR_bool hlds__make_hlds__add_pred__succeeded;
#line 510 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_55_71;
#line 510 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_58_74;
#line 510 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__ClausesInfo_22;
#line 510 "add_pred.m"
    MR_String hlds__make_hlds__add_pred__FileName_23;
#line 510 "add_pred.m"
    MR_Integer hlds__make_hlds__add_pred__LineNum_24;
#line 510 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_27_27;
#line 510 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TVarSet0_42;
#line 510 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TypeVars_43;
#line 510 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TVarSet_44;
#line 510 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Types_45;
#line 510 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Proofs_46;
#line 510 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__ConstraintMap_47;
#line 510 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Markers0_50;
#line 510 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__VarNameRemap_51;
#line 510 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredInfo0_52;
#line 510 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Markers_53;
#line 510 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredInfo_54;
#line 510 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredIds_55;
#line 510 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_60_60;

#line 511 "add_pred.m"
    {
#line 511 "add_pred.m"
      hlds__hlds_clauses__clauses_info_init_for_assertion_2_p_0(hlds__make_hlds__add_pred__HeadVars_12, &hlds__make_hlds__add_pred__ClausesInfo_22);
    }
#line 512 "add_pred.m"
    {
#line 512 "add_pred.m"
      mercury__term__context_file_2_p_0(hlds__make_hlds__add_pred__Context_18, &hlds__make_hlds__add_pred__FileName_23);
    }
#line 513 "add_pred.m"
    {
#line 513 "add_pred.m"
      mercury__term__context_line_2_p_0(hlds__make_hlds__add_pred__Context_18, &hlds__make_hlds__add_pred__LineNum_24);
    }
#line 514 "add_pred.m"
    {
#line 514 "add_pred.m"
      hlds__make_hlds__add_pred__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 514 "add_pred.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 514 "add_pred.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_27_27, 1) = ((MR_Box) (hlds__make_hlds__add_pred__FileName_23));
#line 514 "add_pred.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_27_27, 2) = ((MR_Box) (hlds__make_hlds__add_pred__LineNum_24));
#line 514 "add_pred.m"
    }
#line 2867 "hlds.make_hlds.add_pred.c"
    hlds__make_hlds__add_pred__TypeCtorInfo_55_71 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 525 "add_pred.m"
    {
#line 525 "add_pred.m"
      mercury__varset__init_1_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_55_71, &hlds__make_hlds__add_pred__TVarSet0_42);
    }
#line 526 "add_pred.m"
    {
#line 526 "add_pred.m"
      parse_tree__prog_util__make_n_fresh_vars_5_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_55_71, (MR_String) "T", hlds__make_hlds__add_pred__Arity_16, &hlds__make_hlds__add_pred__TypeVars_43, hlds__make_hlds__add_pred__TVarSet0_42, &hlds__make_hlds__add_pred__TVarSet_44);
    }
#line 527 "add_pred.m"
    {
#line 527 "add_pred.m"
      hlds__make_hlds__add_pred__V_60_60 = mercury__map__init_0_f_0((MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
    }
#line 527 "add_pred.m"
    {
#line 527 "add_pred.m"
      parse_tree__prog_type__var_list_to_type_list_3_p_0(hlds__make_hlds__add_pred__V_60_60, hlds__make_hlds__add_pred__TypeVars_43, &hlds__make_hlds__add_pred__Types_45);
    }
#line 2889 "hlds.make_hlds.add_pred.c"
    hlds__make_hlds__add_pred__TypeCtorInfo_58_74 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 528 "add_pred.m"
    {
#line 528 "add_pred.m"
      mercury__map__init_1_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_58_74, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, &hlds__make_hlds__add_pred__Proofs_46);
    }
#line 529 "add_pred.m"
    {
#line 529 "add_pred.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, hlds__make_hlds__add_pred__TypeCtorInfo_58_74, &hlds__make_hlds__add_pred__ConstraintMap_47);
    }
#line 536 "add_pred.m"
    {
#line 536 "add_pred.m"
      hlds__hlds_pred__init_markers_1_p_0(&hlds__make_hlds__add_pred__Markers0_50);
    }
#line 537 "add_pred.m"
    {
#line 537 "add_pred.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, &hlds__make_hlds__add_pred__VarNameRemap_51);
    }
#line 538 "add_pred.m"
    {
#line 538 "add_pred.m"
      hlds__hlds_pred__pred_info_init_18_p_0(hlds__make_hlds__add_pred__ModuleName_14, hlds__make_hlds__add_pred__PredName_15, hlds__make_hlds__add_pred__Arity_16, hlds__make_hlds__add_pred__PredOrFunc_19, hlds__make_hlds__add_pred__Context_18, hlds__make_hlds__add_pred__V_27_27, hlds__make_hlds__add_pred__Status_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_pred__Markers0_50, hlds__make_hlds__add_pred__Types_45, hlds__make_hlds__add_pred__TVarSet_44, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[14], hlds__make_hlds__add_pred__Proofs_46, hlds__make_hlds__add_pred__ConstraintMap_47, hlds__make_hlds__add_pred__ClausesInfo_22, hlds__make_hlds__add_pred__VarNameRemap_51, &hlds__make_hlds__add_pred__PredInfo0_52);
    }
#line 542 "add_pred.m"
    {
#line 542 "add_pred.m"
      hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 2, hlds__make_hlds__add_pred__Markers0_50, &hlds__make_hlds__add_pred__Markers_53);
    }
#line 543 "add_pred.m"
    {
#line 543 "add_pred.m"
      hlds__hlds_pred__pred_info_set_markers_3_p_0(hlds__make_hlds__add_pred__Markers_53, hlds__make_hlds__add_pred__PredInfo0_52, &hlds__make_hlds__add_pred__PredInfo_54);
    }
#line 544 "add_pred.m"
    {
#line 544 "add_pred.m"
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredicateTable_0_25, (MR_Integer) 0, hlds__make_hlds__add_pred__PredOrFunc_19, hlds__make_hlds__add_pred__PredName_15, hlds__make_hlds__add_pred__Arity_16, &hlds__make_hlds__add_pred__PredIds_55);
    }
#line 551 "add_pred.m"
    if ((hlds__make_hlds__add_pred__PredIds_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 547 "add_pred.m"
      {
#line 547 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__MQInfo_56;

#line 548 "add_pred.m"
        {
#line 548 "add_pred.m"
          hlds__hlds_module__module_info_get_partial_qualifier_info_2_p_0(hlds__make_hlds__add_pred__ModuleInfo_13, &hlds__make_hlds__add_pred__MQInfo_56);
        }
#line 549 "add_pred.m"
        {
#line 549 "add_pred.m"
          hlds__pred_table__predicate_table_insert_qual_6_p_0(hlds__make_hlds__add_pred__PredInfo_54, (MR_Integer) 1, hlds__make_hlds__add_pred__MQInfo_56, hlds__make_hlds__add_pred__PredId_20, hlds__make_hlds__add_pred__STATE_VARIABLE_PredicateTable_0_25, hlds__make_hlds__add_pred__STATE_VARIABLE_PredicateTable_26);
#line 549 "add_pred.m"
          return;
        }
#line 547 "add_pred.m"
      }
#line 551 "add_pred.m"
    else
#line 552 "add_pred.m"
      {
#line 553 "add_pred.m"
        {
#line 553 "add_pred.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_pred", (MR_String) "predicate \140hlds.make_hlds.add_pred.preds_add_implicit_2\'/12", (MR_String) "search succeeded");
#line 553 "add_pred.m"
          return;
        }
#line 552 "add_pred.m"
      }
#line 510 "add_pred.m"
  }
#line 66 "add_pred.m"
}

#line 60 "add_pred.m"
void MR_CALL 
hlds__make_hlds__add_pred__preds_add_implicit_report_error_14_p_0(
#line 60 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ModuleName_15,
#line 60 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_16,
#line 60 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredName_17,
#line 60 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__Arity_18,
#line 60 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Status_19,
#line 60 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__IsClassMethod_20,
#line 60 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_21,
#line 60 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Origin_22,
#line 60 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__DescPieces_23,
#line 60 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__PredId_24,
#line 60 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_31,
#line 60 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_32,
#line 60 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_33,
#line 60 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_34)
#line 60 "add_pred.m"
{
#line 480 "add_pred.m"
  {
#line 480 "add_pred.m"
    MR_bool hlds__make_hlds__add_pred__succeeded;
#line 480 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Globals_27;
#line 480 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredicateTable0_29;
#line 480 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredicateTable_30;
#line 480 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_35_35;

#line 481 "add_pred.m"
    {
#line 481 "add_pred.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_31, &hlds__make_hlds__add_pred__Globals_27);
    }
#line 482 "add_pred.m"
    {
#line 482 "add_pred.m"
      hlds__make_hlds__make_hlds_error__maybe_undefined_pred_error_10_p_0(hlds__make_hlds__add_pred__Globals_27, hlds__make_hlds__add_pred__PredName_17, hlds__make_hlds__add_pred__Arity_18, hlds__make_hlds__add_pred__PredOrFunc_16, hlds__make_hlds__add_pred__Status_19, hlds__make_hlds__add_pred__IsClassMethod_20, hlds__make_hlds__add_pred__Context_21, hlds__make_hlds__add_pred__DescPieces_23, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_33, &hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_35_35);
    }
#line 489 "add_pred.m"
    if ((hlds__make_hlds__add_pred__PredOrFunc_16 == (MR_Integer) 1))
#line 485 "add_pred.m"
      {
#line 485 "add_pred.m"
        MR_Integer hlds__make_hlds__add_pred__FuncArity_28;

#line 486 "add_pred.m"
        {
#line 486 "add_pred.m"
          parse_tree__prog_util__adjust_func_arity_3_p_1((MR_Integer) 1, &hlds__make_hlds__add_pred__FuncArity_28, hlds__make_hlds__add_pred__Arity_18);
        }
#line 487 "add_pred.m"
        {
#line 487 "add_pred.m"
          hlds__make_hlds__make_hlds_passes__maybe_check_field_access_function_7_p_0(hlds__make_hlds__add_pred__PredName_17, hlds__make_hlds__add_pred__FuncArity_28, hlds__make_hlds__add_pred__Status_19, hlds__make_hlds__add_pred__Context_21, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_31, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_35_35, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_34);
        }
#line 485 "add_pred.m"
      }
#line 489 "add_pred.m"
    else
#line 490 "add_pred.m"
      *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_34 = hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_35_35;
#line 492 "add_pred.m"
    {
#line 492 "add_pred.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_31, &hlds__make_hlds__add_pred__PredicateTable0_29);
    }
#line 493 "add_pred.m"
    {
#line 493 "add_pred.m"
      hlds__make_hlds__add_pred__preds_add_implicit_11_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_31, hlds__make_hlds__add_pred__ModuleName_15, hlds__make_hlds__add_pred__PredName_17, hlds__make_hlds__add_pred__Arity_18, hlds__make_hlds__add_pred__Status_19, hlds__make_hlds__add_pred__Context_21, hlds__make_hlds__add_pred__Origin_22, hlds__make_hlds__add_pred__PredOrFunc_16, hlds__make_hlds__add_pred__PredId_24, hlds__make_hlds__add_pred__PredicateTable0_29, &hlds__make_hlds__add_pred__PredicateTable_30);
    }
#line 495 "add_pred.m"
    {
#line 495 "add_pred.m"
      hlds__hlds_module__module_info_set_predicate_table_3_p_0(hlds__make_hlds__add_pred__PredicateTable_30, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_31, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_32);
#line 495 "add_pred.m"
      return;
    }
#line 480 "add_pred.m"
  }
#line 60 "add_pred.m"
}

#line 49 "add_pred.m"
void MR_CALL 
hlds__make_hlds__add_pred__module_add_mode_13_p_0(
#line 49 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__InstVarSet_14,
#line 49 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredName_15,
#line 49 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Modes_16,
#line 49 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__MaybeDet_17,
#line 49 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Status_18,
#line 49 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__MContext_19,
#line 49 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_20,
#line 49 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__IsClassMethod_21,
#line 49 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__PredProcId_22,
#line 49 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_39,
#line 49 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_40,
#line 49 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_41,
#line 49 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_42)
#line 49 "add_pred.m"
{
#line 402 "add_pred.m"
  {
#line 402 "add_pred.m"
    MR_bool hlds__make_hlds__add_pred__succeeded;
#line 402 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_55_55;
#line 402 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_56_56;
#line 402 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__ModuleName0_25;
#line 402 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__ModuleName_26;
#line 402 "add_pred.m"
    MR_Integer hlds__make_hlds__add_pred__Arity_27;
#line 402 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredicateTable0_28;
#line 402 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredIds_29;
#line 402 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredId_31;
#line 402 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredicateTable1_32;
#line 402 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Preds0_33;
#line 402 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredInfo0_34;
#line 402 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredInfo_35;
#line 402 "add_pred.m"
    MR_Integer hlds__make_hlds__add_pred__ProcId_36;
#line 402 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Preds_37;
#line 402 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredicateTable_38;
#line 402 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_47_47;
#line 402 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_48_48;
#line 419 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredIdPrime_30;
#line 417 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_44_44;
#line 426 "add_pred.m"
    MR_Box hlds__make_hlds__add_pred__conv0_PredInfo0_34;

#line 411 "add_pred.m"
    {
#line 411 "add_pred.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__add_pred__ModuleName0_25);
    }
#line 412 "add_pred.m"
    {
#line 412 "add_pred.m"
      mdbcomp__prim_data__sym_name_get_module_name_default_3_p_0(hlds__make_hlds__add_pred__PredName_15, hlds__make_hlds__add_pred__ModuleName0_25, &hlds__make_hlds__add_pred__ModuleName_26);
    }
#line 413 "add_pred.m"
    {
#line 413 "add_pred.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__make_hlds__add_pred__Modes_16, &hlds__make_hlds__add_pred__Arity_27);
    }
#line 414 "add_pred.m"
    {
#line 414 "add_pred.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__add_pred__PredicateTable0_28);
    }
#line 415 "add_pred.m"
    {
#line 415 "add_pred.m"
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__make_hlds__add_pred__PredicateTable0_28, (MR_Integer) 0, hlds__make_hlds__add_pred__PredOrFunc_20, hlds__make_hlds__add_pred__PredName_15, hlds__make_hlds__add_pred__Arity_27, &hlds__make_hlds__add_pred__PredIds_29);
    }
#line 417 "add_pred.m"
    hlds__make_hlds__add_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pred__PredIds_29)) == (MR_mktag((MR_Integer) 1)));
#line 417 "add_pred.m"
    if (hlds__make_hlds__add_pred__succeeded)
#line 417 "add_pred.m"
      {
#line 417 "add_pred.m"
        hlds__make_hlds__add_pred__PredIdPrime_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__PredIds_29, (MR_Integer) 0)));
#line 417 "add_pred.m"
        hlds__make_hlds__add_pred__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__PredIds_29, (MR_Integer) 1)));
#line 417 "add_pred.m"
        hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__V_44_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 417 "add_pred.m"
      }
#line 419 "add_pred.m"
    if (hlds__make_hlds__add_pred__succeeded)
#line 418 "add_pred.m"
      {
#line 418 "add_pred.m"
        hlds__make_hlds__add_pred__PredId_31 = hlds__make_hlds__add_pred__PredIdPrime_30;
#line 418 "add_pred.m"
        hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_48_48 = hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_41;
#line 418 "add_pred.m"
        hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_47_47 = hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_39;
#line 418 "add_pred.m"
      }
#line 419 "add_pred.m"
    else
#line 420 "add_pred.m"
      {
#line 420 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__V_45_45;

#line 420 "add_pred.m"
        {
#line 420 "add_pred.m"
          hlds__make_hlds__add_pred__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 420 "add_pred.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 420 "add_pred.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_45_45, 1) = ((MR_Box) (hlds__make_hlds__add_pred__PredName_15));
#line 420 "add_pred.m"
        }
#line 420 "add_pred.m"
        {
#line 420 "add_pred.m"
          hlds__make_hlds__add_pred__preds_add_implicit_report_error_14_p_0(hlds__make_hlds__add_pred__ModuleName_26, hlds__make_hlds__add_pred__PredOrFunc_20, hlds__make_hlds__add_pred__PredName_15, hlds__make_hlds__add_pred__Arity_27, hlds__make_hlds__add_pred__Status_18, hlds__make_hlds__add_pred__IsClassMethod_21, hlds__make_hlds__add_pred__MContext_19, hlds__make_hlds__add_pred__V_45_45, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[13]), &hlds__make_hlds__add_pred__PredId_31, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_47_47, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_41, &hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_48_48);
        }
#line 420 "add_pred.m"
      }
#line 424 "add_pred.m"
    {
#line 424 "add_pred.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_47_47, &hlds__make_hlds__add_pred__PredicateTable1_32);
    }
#line 425 "add_pred.m"
    {
#line 425 "add_pred.m"
      hlds__pred_table__predicate_table_get_preds_2_p_0(hlds__make_hlds__add_pred__PredicateTable1_32, &hlds__make_hlds__add_pred__Preds0_33);
    }
#line 3232 "hlds.make_hlds.add_pred.c"
    hlds__make_hlds__add_pred__TypeCtorInfo_55_55 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 3234 "hlds.make_hlds.add_pred.c"
    hlds__make_hlds__add_pred__TypeCtorInfo_56_56 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 426 "add_pred.m"
    {
#line 426 "add_pred.m"
      mercury__map__lookup_3_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_55_55, hlds__make_hlds__add_pred__TypeCtorInfo_56_56, hlds__make_hlds__add_pred__Preds0_33, ((MR_Box) (hlds__make_hlds__add_pred__PredId_31)), &hlds__make_hlds__add_pred__conv0_PredInfo0_34);
    }
#line 426 "add_pred.m"
    hlds__make_hlds__add_pred__PredInfo0_34 = ((MR_Word) hlds__make_hlds__add_pred__conv0_PredInfo0_34);
#line 428 "add_pred.m"
    {
#line 428 "add_pred.m"
      hlds__make_hlds__add_pred__module_do_add_mode_11_p_0(hlds__make_hlds__add_pred__InstVarSet_14, hlds__make_hlds__add_pred__Arity_27, hlds__make_hlds__add_pred__Modes_16, hlds__make_hlds__add_pred__MaybeDet_17, hlds__make_hlds__add_pred__IsClassMethod_21, hlds__make_hlds__add_pred__MContext_19, hlds__make_hlds__add_pred__PredInfo0_34, &hlds__make_hlds__add_pred__PredInfo_35, &hlds__make_hlds__add_pred__ProcId_36, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_48_48, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_42);
    }
#line 430 "add_pred.m"
    {
#line 430 "add_pred.m"
      mercury__map__det_update_4_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_55_55, hlds__make_hlds__add_pred__TypeCtorInfo_56_56, ((MR_Box) (hlds__make_hlds__add_pred__PredId_31)), ((MR_Box) (hlds__make_hlds__add_pred__PredInfo_35)), hlds__make_hlds__add_pred__Preds0_33, &hlds__make_hlds__add_pred__Preds_37);
    }
#line 431 "add_pred.m"
    {
#line 431 "add_pred.m"
      hlds__pred_table__predicate_table_set_preds_3_p_0(hlds__make_hlds__add_pred__Preds_37, hlds__make_hlds__add_pred__PredicateTable1_32, &hlds__make_hlds__add_pred__PredicateTable_38);
    }
#line 432 "add_pred.m"
    {
#line 432 "add_pred.m"
      hlds__hlds_module__module_info_set_predicate_table_3_p_0(hlds__make_hlds__add_pred__PredicateTable_38, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_47_47, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_40);
    }
#line 433 "add_pred.m"
    {
#line 433 "add_pred.m"
      MR_Word base;
#line 433 "add_pred.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 433 "add_pred.m"
      *hlds__make_hlds__add_pred__PredProcId_22 = base;
#line 433 "add_pred.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredId_31));
#line 433 "add_pred.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__add_pred__ProcId_36));
#line 433 "add_pred.m"
    }
#line 402 "add_pred.m"
  }
#line 49 "add_pred.m"
}

#line 42 "add_pred.m"
void MR_CALL 
hlds__make_hlds__add_pred__do_add_new_proc_12_p_0(
#line 42 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__InstVarSet_13,
#line 42 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__Arity_14,
#line 42 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ArgModes_15,
#line 42 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__MaybeDeclaredArgModes_16,
#line 42 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__MaybeArgLives_17,
#line 42 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__DetismDecl_18,
#line 42 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__MaybeDet_19,
#line 42 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_20,
#line 42 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__IsAddressTaken_21,
#line 42 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredInfo0_22,
#line 42 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__PredInfo_23,
#line 42 "add_pred.m"
  MR_Integer * hlds__make_hlds__add_pred__ModeId_24)
#line 42 "add_pred.m"
{
#line 387 "add_pred.m"
  {
#line 387 "add_pred.m"
    MR_bool hlds__make_hlds__add_pred__succeeded;
#line 387 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Procs0_25;
#line 387 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__ArgTypes_26;
#line 387 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__VarNameRemap_27;
#line 387 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__NewProc0_28;
#line 387 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__NewProc_29;
#line 387 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Procs_30;

#line 388 "add_pred.m"
    {
#line 388 "add_pred.m"
      hlds__hlds_pred__pred_info_get_procedures_2_p_0(hlds__make_hlds__add_pred__PredInfo0_22, &hlds__make_hlds__add_pred__Procs0_25);
    }
#line 389 "add_pred.m"
    {
#line 389 "add_pred.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(hlds__make_hlds__add_pred__PredInfo0_22, &hlds__make_hlds__add_pred__ArgTypes_26);
    }
#line 390 "add_pred.m"
    {
#line 390 "add_pred.m"
      hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(hlds__make_hlds__add_pred__PredInfo0_22, &hlds__make_hlds__add_pred__VarNameRemap_27);
    }
#line 391 "add_pred.m"
    {
#line 391 "add_pred.m"
      hlds__hlds_pred__next_mode_id_2_p_0(hlds__make_hlds__add_pred__Procs0_25, hlds__make_hlds__add_pred__ModeId_24);
    }
#line 392 "add_pred.m"
    {
#line 392 "add_pred.m"
      hlds__hlds_pred__proc_info_init_11_p_0(hlds__make_hlds__add_pred__Context_20, hlds__make_hlds__add_pred__Arity_14, hlds__make_hlds__add_pred__ArgTypes_26, hlds__make_hlds__add_pred__MaybeDeclaredArgModes_16, hlds__make_hlds__add_pred__ArgModes_15, hlds__make_hlds__add_pred__MaybeArgLives_17, hlds__make_hlds__add_pred__DetismDecl_18, hlds__make_hlds__add_pred__MaybeDet_19, hlds__make_hlds__add_pred__IsAddressTaken_21, hlds__make_hlds__add_pred__VarNameRemap_27, &hlds__make_hlds__add_pred__NewProc0_28);
    }
#line 395 "add_pred.m"
    {
#line 395 "add_pred.m"
      hlds__hlds_pred__proc_info_set_inst_varset_3_p_0(hlds__make_hlds__add_pred__InstVarSet_13, hlds__make_hlds__add_pred__NewProc0_28, &hlds__make_hlds__add_pred__NewProc_29);
    }
#line 396 "add_pred.m"
    {
#line 396 "add_pred.m"
      mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, ((MR_Box) (*hlds__make_hlds__add_pred__ModeId_24)), ((MR_Box) (hlds__make_hlds__add_pred__NewProc_29)), hlds__make_hlds__add_pred__Procs0_25, &hlds__make_hlds__add_pred__Procs_30);
    }
#line 397 "add_pred.m"
    {
#line 397 "add_pred.m"
      hlds__hlds_pred__pred_info_set_procedures_3_p_0(hlds__make_hlds__add_pred__Procs_30, hlds__make_hlds__add_pred__PredInfo0_22, hlds__make_hlds__add_pred__PredInfo_23);
#line 397 "add_pred.m"
      return;
    }
#line 387 "add_pred.m"
  }
#line 42 "add_pred.m"
}

#line 34 "add_pred.m"
void MR_CALL 
hlds__make_hlds__add_pred__module_add_pred_or_func_17_p_0(
#line 34 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__TypeVarSet_18,
#line 34 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__InstVarSet_19,
#line 34 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ExistQVars_20,
#line 34 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_21,
#line 34 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredName_22,
#line 34 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__TypesAndModes_23,
#line 34 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__MaybeDet_24,
#line 34 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Purity_25,
#line 34 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ClassContext_26,
#line 34 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Markers_27,
#line 34 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_28,
#line 34 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__HeadVar__12_12,
#line 34 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__MaybePredProcId_31,
#line 34 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_48,
#line 34 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_49,
#line 34 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_50,
#line 34 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_51)
#line 34 "add_pred.m"
{
#line 100 "add_pred.m"
  {
#line 100 "add_pred.m"
    MR_bool hlds__make_hlds__add_pred__succeeded;
#line 100 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Status_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__HeadVar__12_12, (MR_Integer) 0)));
#line 100 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__NeedQual_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__HeadVar__12_12, (MR_Integer) 1)));
#line 100 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Types_34;
#line 100 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__MaybeModes0_35;
#line 100 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_52_52;
#line 100 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_53_53;
#line 105 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Modes0_36;

#line 101 "add_pred.m"
    {
#line 101 "add_pred.m"
      parse_tree__prog_util__split_types_and_modes_3_p_0(hlds__make_hlds__add_pred__TypesAndModes_23, &hlds__make_hlds__add_pred__Types_34, &hlds__make_hlds__add_pred__MaybeModes0_35);
    }
#line 102 "add_pred.m"
    {
#line 102 "add_pred.m"
      hlds__make_hlds__add_pred__add_new_pred_15_p_0(hlds__make_hlds__add_pred__TypeVarSet_18, hlds__make_hlds__add_pred__ExistQVars_20, hlds__make_hlds__add_pred__PredName_22, hlds__make_hlds__add_pred__Types_34, hlds__make_hlds__add_pred__Purity_25, hlds__make_hlds__add_pred__ClassContext_26, hlds__make_hlds__add_pred__Markers_27, hlds__make_hlds__add_pred__Context_28, hlds__make_hlds__add_pred__Status_29, hlds__make_hlds__add_pred__NeedQual_30, hlds__make_hlds__add_pred__PredOrFunc_21, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_48, &hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_52_52, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_50, &hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_53_53);
    }
#line 105 "add_pred.m"
    hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__PredOrFunc_21 == (MR_Integer) 0);
#line 105 "add_pred.m"
    if (hlds__make_hlds__add_pred__succeeded)
#line 105 "add_pred.m"
      {
#line 112 "add_pred.m"
        hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__MaybeDet_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 105 "add_pred.m"
        if (hlds__make_hlds__add_pred__succeeded)
#line 105 "add_pred.m"
          {
#line 106 "add_pred.m"
            hlds__make_hlds__add_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pred__MaybeModes0_35)) == (MR_mktag((MR_Integer) 1)));
#line 106 "add_pred.m"
            if (hlds__make_hlds__add_pred__succeeded)
#line 106 "add_pred.m"
              {
#line 106 "add_pred.m"
                hlds__make_hlds__add_pred__Modes0_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__MaybeModes0_35, (MR_Integer) 0)));
#line 111 "add_pred.m"
                hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__Modes0_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 106 "add_pred.m"
              }
#line 105 "add_pred.m"
          }
#line 105 "add_pred.m"
      }
#line 3471 "hlds.make_hlds.add_pred.c"
    if (hlds__make_hlds__add_pred__succeeded)
#line 3473 "hlds.make_hlds.add_pred.c"
      {
#line 144 "add_pred.m"
        *hlds__make_hlds__add_pred__MaybePredProcId_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 144 "add_pred.m"
        *hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_49 = hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_52_52;
#line 144 "add_pred.m"
        *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_51 = hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_53_53;
#line 3481 "hlds.make_hlds.add_pred.c"
      }
#line 3483 "hlds.make_hlds.add_pred.c"
    else
#line 3485 "hlds.make_hlds.add_pred.c"
      {
#line 120 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__V_38_38;

#line 118 "add_pred.m"
        hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__PredOrFunc_21 == (MR_Integer) 1);
#line 118 "add_pred.m"
        if (hlds__make_hlds__add_pred__succeeded)
#line 118 "add_pred.m"
          {
#line 119 "add_pred.m"
            hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__MaybeModes0_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 118 "add_pred.m"
            if (hlds__make_hlds__add_pred__succeeded)
#line 118 "add_pred.m"
              {
#line 120 "add_pred.m"
                hlds__make_hlds__add_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pred__MaybeDet_24)) == (MR_mktag((MR_Integer) 1)));
#line 120 "add_pred.m"
                if (hlds__make_hlds__add_pred__succeeded)
#line 120 "add_pred.m"
                  hlds__make_hlds__add_pred__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__MaybeDet_24, (MR_Integer) 0)));
#line 118 "add_pred.m"
              }
#line 118 "add_pred.m"
          }
#line 3512 "hlds.make_hlds.add_pred.c"
        if (hlds__make_hlds__add_pred__succeeded)
#line 3514 "hlds.make_hlds.add_pred.c"
          {
#line 3516 "hlds.make_hlds.add_pred.c"
            MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_61_61;
#line 3518 "hlds.make_hlds.add_pred.c"
            MR_Integer hlds__make_hlds__add_pred__Arity_39;
#line 3520 "hlds.make_hlds.add_pred.c"
            MR_Integer hlds__make_hlds__add_pred__FuncArity_40;
#line 3522 "hlds.make_hlds.add_pred.c"
            MR_Word hlds__make_hlds__add_pred__InMode_41;
#line 3524 "hlds.make_hlds.add_pred.c"
            MR_Word hlds__make_hlds__add_pred__InModes_42;
#line 3526 "hlds.make_hlds.add_pred.c"
            MR_Word hlds__make_hlds__add_pred__OutMode_43;
#line 3528 "hlds.make_hlds.add_pred.c"
            MR_Word hlds__make_hlds__add_pred__Modes_45;
#line 3530 "hlds.make_hlds.add_pred.c"
            MR_Word hlds__make_hlds__add_pred__IsClassMethod_46;
#line 3532 "hlds.make_hlds.add_pred.c"
            MR_Word hlds__make_hlds__add_pred__PredProcId_47;
#line 3534 "hlds.make_hlds.add_pred.c"
            MR_Word hlds__make_hlds__add_pred__V_55_55;

#line 122 "add_pred.m"
            {
#line 122 "add_pred.m"
              mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__make_hlds__add_pred__Types_34, &hlds__make_hlds__add_pred__Arity_39);
            }
#line 123 "add_pred.m"
            {
#line 123 "add_pred.m"
              parse_tree__prog_util__adjust_func_arity_3_p_1((MR_Integer) 1, &hlds__make_hlds__add_pred__FuncArity_40, hlds__make_hlds__add_pred__Arity_39);
            }
#line 124 "add_pred.m"
            {
#line 124 "add_pred.m"
              parse_tree__prog_mode__in_mode_1_p_0(&hlds__make_hlds__add_pred__InMode_41);
            }
#line 3552 "hlds.make_hlds.add_pred.c"
            hlds__make_hlds__add_pred__TypeCtorInfo_61_61 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 125 "add_pred.m"
            {
#line 125 "add_pred.m"
              mercury__list__duplicate_3_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_61_61, hlds__make_hlds__add_pred__FuncArity_40, ((MR_Box) (hlds__make_hlds__add_pred__InMode_41)), &hlds__make_hlds__add_pred__InModes_42);
            }
#line 126 "add_pred.m"
            {
#line 126 "add_pred.m"
              parse_tree__prog_mode__out_mode_1_p_0(&hlds__make_hlds__add_pred__OutMode_43);
            }
#line 127 "add_pred.m"
            {
#line 127 "add_pred.m"
              hlds__make_hlds__add_pred__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 127 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_55_55, 0) = ((MR_Box) (hlds__make_hlds__add_pred__OutMode_43));
#line 127 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 127 "add_pred.m"
            }
#line 127 "add_pred.m"
            {
#line 127 "add_pred.m"
              mercury__list__append_3_p_1(hlds__make_hlds__add_pred__TypeCtorInfo_61_61, hlds__make_hlds__add_pred__InModes_42, hlds__make_hlds__add_pred__V_55_55, &hlds__make_hlds__add_pred__Modes_45);
            }
#line 134 "add_pred.m"
            {
#line 134 "add_pred.m"
              hlds__make_hlds__add_pred__succeeded = hlds__hlds_pred__check_marker_2_p_0(hlds__make_hlds__add_pred__Markers_27, (MR_Integer) 9);
            }
#line 136 "add_pred.m"
            if (hlds__make_hlds__add_pred__succeeded)
#line 135 "add_pred.m"
              hlds__make_hlds__add_pred__IsClassMethod_46 = (MR_Integer) 1;
#line 136 "add_pred.m"
            else
#line 137 "add_pred.m"
              hlds__make_hlds__add_pred__IsClassMethod_46 = (MR_Integer) 0;
#line 139 "add_pred.m"
            {
#line 139 "add_pred.m"
              hlds__make_hlds__add_pred__module_add_mode_13_p_0(hlds__make_hlds__add_pred__InstVarSet_19, hlds__make_hlds__add_pred__PredName_22, hlds__make_hlds__add_pred__Modes_45, hlds__make_hlds__add_pred__MaybeDet_24, hlds__make_hlds__add_pred__Status_29, hlds__make_hlds__add_pred__Context_28, hlds__make_hlds__add_pred__PredOrFunc_21, hlds__make_hlds__add_pred__IsClassMethod_46, &hlds__make_hlds__add_pred__PredProcId_47, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_52_52, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_49, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_53_53, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_51);
            }
#line 141 "add_pred.m"
            {
#line 141 "add_pred.m"
              MR_Word base;
#line 141 "add_pred.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 141 "add_pred.m"
              *hlds__make_hlds__add_pred__MaybePredProcId_31 = base;
#line 141 "add_pred.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredProcId_47));
#line 141 "add_pred.m"
            }
#line 3609 "hlds.make_hlds.add_pred.c"
          }
#line 3611 "hlds.make_hlds.add_pred.c"
        else
#line 142 "add_pred.m"
          if ((hlds__make_hlds__add_pred__MaybeModes0_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 143 "add_pred.m"
            {
#line 144 "add_pred.m"
              *hlds__make_hlds__add_pred__MaybePredProcId_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 144 "add_pred.m"
              *hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_49 = hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_52_52;
#line 144 "add_pred.m"
              *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_51 = hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_53_53;
#line 143 "add_pred.m"
            }
#line 142 "add_pred.m"
          else
#line 133 "add_pred.m"
            {
#line 133 "add_pred.m"
              MR_Word hlds__make_hlds__add_pred__Modes_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__MaybeModes0_35, (MR_Integer) 0)));
#line 133 "add_pred.m"
              MR_Word hlds__make_hlds__add_pred__IsClassMethod_66;
#line 133 "add_pred.m"
              MR_Word hlds__make_hlds__add_pred__PredProcId_67;

#line 134 "add_pred.m"
              {
#line 134 "add_pred.m"
                hlds__make_hlds__add_pred__succeeded = hlds__hlds_pred__check_marker_2_p_0(hlds__make_hlds__add_pred__Markers_27, (MR_Integer) 9);
              }
#line 136 "add_pred.m"
              if (hlds__make_hlds__add_pred__succeeded)
#line 135 "add_pred.m"
                hlds__make_hlds__add_pred__IsClassMethod_66 = (MR_Integer) 1;
#line 136 "add_pred.m"
              else
#line 137 "add_pred.m"
                hlds__make_hlds__add_pred__IsClassMethod_66 = (MR_Integer) 0;
#line 139 "add_pred.m"
              {
#line 139 "add_pred.m"
                hlds__make_hlds__add_pred__module_add_mode_13_p_0(hlds__make_hlds__add_pred__InstVarSet_19, hlds__make_hlds__add_pred__PredName_22, hlds__make_hlds__add_pred__Modes_65, hlds__make_hlds__add_pred__MaybeDet_24, hlds__make_hlds__add_pred__Status_29, hlds__make_hlds__add_pred__Context_28, hlds__make_hlds__add_pred__PredOrFunc_21, hlds__make_hlds__add_pred__IsClassMethod_66, &hlds__make_hlds__add_pred__PredProcId_67, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_52_52, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_49, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_53_53, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_51);
              }
#line 141 "add_pred.m"
              {
#line 141 "add_pred.m"
                MR_Word base;
#line 141 "add_pred.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 141 "add_pred.m"
                *hlds__make_hlds__add_pred__MaybePredProcId_31 = base;
#line 141 "add_pred.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredProcId_67));
#line 141 "add_pred.m"
              }
#line 133 "add_pred.m"
            }
#line 3668 "hlds.make_hlds.add_pred.c"
      }
#line 100 "add_pred.m"
  }
#line 34 "add_pred.m"
}

void mercury__hlds__make_hlds__add_pred__init(void)
{
}

void mercury__hlds__make_hlds__add_pred__init_type_tables(void)
{
}

void mercury__hlds__make_hlds__add_pred__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.make_hlds.add_pred. */
