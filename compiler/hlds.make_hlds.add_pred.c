/*
** Automatically generated from `add_pred.m'
** by the Mercury compiler,
** version rotd-2014-09-01
** configured for x86_64-apple-darwin13.3.0.
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




#line 143 "hlds.make_hlds.add_pred.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pred__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_marker_0;

#line 594 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__unqualified_pred_error_5_p_0(
#line 594 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredName_6,
#line 594 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__Arity_7,
#line 594 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_8,
#line 594 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_13,
#line 594 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_14);

#line 573 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__unspecified_det_for_method_6_p_0(
#line 573 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Name_7,
#line 573 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__Arity_8,
#line 573 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_9,
#line 573 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_10,
#line 573 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_15,
#line 573 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_16);

#line 554 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__unspecified_det_for_local_6_p_0(
#line 554 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Name_7,
#line 554 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__Arity_8,
#line 554 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_9,
#line 554 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_10,
#line 554 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_18,
#line 554 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_19);

#line 514 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__preds_do_add_implicit_12_p_0(
#line 514 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ModuleInfo_13,
#line 514 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ModuleName_14,
#line 514 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredName_15,
#line 514 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__Arity_16,
#line 514 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_17,
#line 514 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Status_18,
#line 514 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_19,
#line 514 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Origin_20,
#line 514 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ClausesInfo_21,
#line 514 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__PredId_22,
#line 514 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_PredicateTable_0_41,
#line 514 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_PredicateTable_42);

#line 436 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__module_do_add_mode_11_p_0(
#line 436 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__InstVarSet_12,
#line 436 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__Arity_13,
#line 436 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Modes_14,
#line 436 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__MaybeDet_15,
#line 436 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__IsClassMethod_16,
#line 436 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__MContext_17,
#line 436 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_31,
#line 436 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_32,
#line 436 "add_pred.m"
  MR_Integer * hlds__make_hlds__add_pred__ProcId_19,
#line 436 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_33,
#line 436 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_34);

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


static /* final */ const MR_Box hlds__make_hlds__add_pred_scalar_common_1[40][2];

static /* final */ const MR_Box hlds__make_hlds__add_pred_scalar_common_2[7][1];

static /* final */ const MR_Box hlds__make_hlds__add_pred_scalar_common_3[1][4];

static /* final */ const MR_Box hlds__make_hlds__add_pred_scalar_common_4[1][6];

static /* final */ const MR_Box hlds__make_hlds__add_pred_scalar_common_5[4][3];




static /* final */ const MR_Box hlds__make_hlds__add_pred_scalar_common_1[40][2] = {
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
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) ((MR_String) "mode"))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[3])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "of local predicates.)"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "to automatically infer the determinism"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "option if you want the compiler"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pred_scalar_common_2[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[11])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Use the"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "option."))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pred_scalar_common_2[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[16])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "you specified the"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[17])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "(This is an error because"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[19])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_5[2])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_5[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_5[2])))
  },
  /* row 26 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pred_scalar_common_1[24])),
    ((MR_Box) (&hlds__make_hlds__add_pred_scalar_common_1[25]))
  },
  /* row 27 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pred_scalar_common_1[26])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 28 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pred_scalar_common_1[24])),
    ((MR_Box) (&hlds__make_hlds__add_pred_scalar_common_1[25]))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: no determinism declaration for exported"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: no determinism declaration for local"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pred_scalar_common_2[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: no determinism declaration"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "for type class method"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Internal error: the unqualified predicate name"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "should have been qualified by prog_io.m."))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pred_scalar_common_2[7][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "--infer-det"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "--no-infer-det"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[21])))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pred_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 164)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[23]))),
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



#line 620 "hlds.make_hlds.add_pred.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pred__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_marker_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_marker_0
  }
};

#line 594 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__unqualified_pred_error_5_p_0(
#line 594 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredName_6,
#line 594 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__Arity_7,
#line 594 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_8,
#line 594 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_13,
#line 594 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_14)
#line 594 "add_pred.m"
{
#line 597 "add_pred.m"
  {
#line 597 "add_pred.m"
    MR_bool hlds__make_hlds__add_pred__succeeded;
#line 597 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Pieces_10;
#line 597 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Msg_11;
#line 597 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Spec_12;
#line 597 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_17_17;
#line 597 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_18_18;
#line 597 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_19_19;
#line 597 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_24_24;
#line 597 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_25_25;
#line 597 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_29_29;

#line 599 "add_pred.m"
    {
#line 599 "add_pred.m"
      hlds__make_hlds__add_pred__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 599 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_19_19, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredName_6));
#line 599 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_19_19, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Arity_7));
#line 599 "add_pred.m"
    }
#line 599 "add_pred.m"
    {
#line 599 "add_pred.m"
      hlds__make_hlds__add_pred__V_18_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 599 "add_pred.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_18_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 599 "add_pred.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_18_18, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_19_19));
#line 599 "add_pred.m"
    }
#line 599 "add_pred.m"
    {
#line 599 "add_pred.m"
      hlds__make_hlds__add_pred__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 599 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_17_17, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_18_18));
#line 599 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[39])));
#line 599 "add_pred.m"
    }
#line 598 "add_pred.m"
    {
#line 598 "add_pred.m"
      hlds__make_hlds__add_pred__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 598 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[37])));
#line 598 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Pieces_10, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_17_17));
#line 598 "add_pred.m"
    }
#line 601 "add_pred.m"
    {
#line 601 "add_pred.m"
      hlds__make_hlds__add_pred__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 601 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_25_25, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Pieces_10));
#line 601 "add_pred.m"
    }
#line 601 "add_pred.m"
    {
#line 601 "add_pred.m"
      hlds__make_hlds__add_pred__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 601 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_24_24, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_25_25));
#line 601 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 601 "add_pred.m"
    }
#line 601 "add_pred.m"
    {
#line 601 "add_pred.m"
      hlds__make_hlds__add_pred__Msg_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 601 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_11, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Context_8));
#line 601 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_11, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_24_24));
#line 601 "add_pred.m"
    }
#line 602 "add_pred.m"
    {
#line 602 "add_pred.m"
      hlds__make_hlds__add_pred__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 602 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_29_29, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Msg_11));
#line 602 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 602 "add_pred.m"
    }
#line 602 "add_pred.m"
    {
#line 602 "add_pred.m"
      hlds__make_hlds__add_pred__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 602 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 602 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 602 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_12, 2) = ((MR_Box) (hlds__make_hlds__add_pred__V_29_29));
#line 602 "add_pred.m"
    }
#line 603 "add_pred.m"
    {
#line 603 "add_pred.m"
      MR_Word base;
#line 603 "add_pred.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 603 "add_pred.m"
      *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_14 = base;
#line 603 "add_pred.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Spec_12));
#line 603 "add_pred.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_13));
#line 603 "add_pred.m"
    }
#line 597 "add_pred.m"
  }
#line 594 "add_pred.m"
}

#line 573 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__unspecified_det_for_method_6_p_0(
#line 573 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Name_7,
#line 573 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__Arity_8,
#line 573 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_9,
#line 573 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_10,
#line 573 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_15,
#line 573 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_16)
#line 573 "add_pred.m"
{
#line 576 "add_pred.m"
  {
#line 576 "add_pred.m"
    MR_bool hlds__make_hlds__add_pred__succeeded;
#line 576 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Pieces_12;
#line 576 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Msg_13;
#line 576 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Spec_14;
#line 576 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_19_19;
#line 576 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_22_22;
#line 576 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_23_23;
#line 576 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_24_24;
#line 576 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_25_25;
#line 576 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_26_26;
#line 576 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_31_31;
#line 576 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_32_32;
#line 576 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_36_36;

#line 578 "add_pred.m"
    {
#line 578 "add_pred.m"
      hlds__make_hlds__add_pred__V_23_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 578 "add_pred.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_23_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 578 "add_pred.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_23_23, 1) = ((MR_Box) (hlds__make_hlds__add_pred__PredOrFunc_9));
#line 578 "add_pred.m"
    }
#line 579 "add_pred.m"
    {
#line 579 "add_pred.m"
      hlds__make_hlds__add_pred__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 579 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_26_26, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Name_7));
#line 579 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_26_26, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Arity_8));
#line 579 "add_pred.m"
    }
#line 579 "add_pred.m"
    {
#line 579 "add_pred.m"
      hlds__make_hlds__add_pred__V_25_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 579 "add_pred.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_25_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 579 "add_pred.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_25_25, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_26_26));
#line 579 "add_pred.m"
    }
#line 579 "add_pred.m"
    {
#line 579 "add_pred.m"
      hlds__make_hlds__add_pred__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 579 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_24_24, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_25_25));
#line 579 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[32])));
#line 579 "add_pred.m"
    }
#line 578 "add_pred.m"
    {
#line 578 "add_pred.m"
      hlds__make_hlds__add_pred__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 578 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_22_22, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_23_23));
#line 578 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_22_22, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_24_24));
#line 578 "add_pred.m"
    }
#line 578 "add_pred.m"
    {
#line 578 "add_pred.m"
      hlds__make_hlds__add_pred__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 578 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_19_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[36])));
#line 578 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_19_19, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_22_22));
#line 578 "add_pred.m"
    }
#line 577 "add_pred.m"
    {
#line 577 "add_pred.m"
      hlds__make_hlds__add_pred__Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 577 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Pieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[35])));
#line 577 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Pieces_12, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_19_19));
#line 577 "add_pred.m"
    }
#line 580 "add_pred.m"
    {
#line 580 "add_pred.m"
      hlds__make_hlds__add_pred__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 580 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_32_32, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Pieces_12));
#line 580 "add_pred.m"
    }
#line 580 "add_pred.m"
    {
#line 580 "add_pred.m"
      hlds__make_hlds__add_pred__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 580 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_31_31, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_32_32));
#line 580 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 580 "add_pred.m"
    }
#line 580 "add_pred.m"
    {
#line 580 "add_pred.m"
      hlds__make_hlds__add_pred__Msg_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 580 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_13, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Context_10));
#line 580 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_13, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_31_31));
#line 580 "add_pred.m"
    }
#line 581 "add_pred.m"
    {
#line 581 "add_pred.m"
      hlds__make_hlds__add_pred__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 581 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_36_36, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Msg_13));
#line 581 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 581 "add_pred.m"
    }
#line 581 "add_pred.m"
    {
#line 581 "add_pred.m"
      hlds__make_hlds__add_pred__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 581 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 581 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 581 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_14, 2) = ((MR_Box) (hlds__make_hlds__add_pred__V_36_36));
#line 581 "add_pred.m"
    }
#line 582 "add_pred.m"
    {
#line 582 "add_pred.m"
      MR_Word base;
#line 582 "add_pred.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 582 "add_pred.m"
      *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_16 = base;
#line 582 "add_pred.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Spec_14));
#line 582 "add_pred.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_15));
#line 582 "add_pred.m"
    }
#line 576 "add_pred.m"
  }
#line 573 "add_pred.m"
}

#line 554 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__unspecified_det_for_local_6_p_0(
#line 554 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Name_7,
#line 554 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__Arity_8,
#line 554 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_9,
#line 554 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_10,
#line 554 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_18,
#line 554 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_19)
#line 554 "add_pred.m"
{
#line 557 "add_pred.m"
  {
#line 557 "add_pred.m"
    MR_bool hlds__make_hlds__add_pred__succeeded;
#line 557 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__MainPieces_12;
#line 557 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__InnerComponents_14;
#line 557 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Msg_15;
#line 557 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Spec_17;
#line 557 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_22_22;
#line 557 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_23_23;
#line 557 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_24_24;
#line 557 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_56_56;
#line 557 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_60_60;
#line 557 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_61_61;
#line 557 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_70_70;

#line 559 "add_pred.m"
    {
#line 559 "add_pred.m"
      hlds__make_hlds__add_pred__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 559 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_24_24, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredOrFunc_9));
#line 559 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_24_24, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Name_7));
#line 559 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_24_24, 2) = ((MR_Box) (hlds__make_hlds__add_pred__Arity_8));
#line 559 "add_pred.m"
    }
#line 559 "add_pred.m"
    {
#line 559 "add_pred.m"
      hlds__make_hlds__add_pred__V_23_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 559 "add_pred.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_23_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 559 "add_pred.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_23_23, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_24_24));
#line 559 "add_pred.m"
    }
#line 559 "add_pred.m"
    {
#line 559 "add_pred.m"
      hlds__make_hlds__add_pred__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 559 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_22_22, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_23_23));
#line 559 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[32])));
#line 559 "add_pred.m"
    }
#line 558 "add_pred.m"
    {
#line 558 "add_pred.m"
      hlds__make_hlds__add_pred__MainPieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 558 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__MainPieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[33])));
#line 558 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__MainPieces_12, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_22_22));
#line 558 "add_pred.m"
    }
#line 566 "add_pred.m"
    {
#line 566 "add_pred.m"
      hlds__make_hlds__add_pred__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 566 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_56_56, 0) = ((MR_Box) (hlds__make_hlds__add_pred__MainPieces_12));
#line 566 "add_pred.m"
    }
#line 566 "add_pred.m"
    {
#line 566 "add_pred.m"
      hlds__make_hlds__add_pred__InnerComponents_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 566 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__InnerComponents_14, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_56_56));
#line 566 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__InnerComponents_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[34])));
#line 566 "add_pred.m"
    }
#line 568 "add_pred.m"
    {
#line 568 "add_pred.m"
      hlds__make_hlds__add_pred__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 568 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_61_61, 0) = ((MR_Box) (((MR_Integer) 164 | (((MR_Integer) 0 << (MR_Integer) 10)))));
#line 568 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_61_61, 1) = ((MR_Box) (hlds__make_hlds__add_pred__InnerComponents_14));
#line 568 "add_pred.m"
    }
#line 568 "add_pred.m"
    {
#line 568 "add_pred.m"
      hlds__make_hlds__add_pred__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 568 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_60_60, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_61_61));
#line 568 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 568 "add_pred.m"
    }
#line 567 "add_pred.m"
    {
#line 567 "add_pred.m"
      hlds__make_hlds__add_pred__Msg_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 567 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_15, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Context_10));
#line 567 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_15, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_60_60));
#line 567 "add_pred.m"
    }
#line 570 "add_pred.m"
    {
#line 570 "add_pred.m"
      hlds__make_hlds__add_pred__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 570 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_70_70, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Msg_15));
#line 570 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 570 "add_pred.m"
    }
#line 570 "add_pred.m"
    {
#line 570 "add_pred.m"
      hlds__make_hlds__add_pred__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 570 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_3[0])));
#line 570 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 570 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_17, 2) = ((MR_Box) (hlds__make_hlds__add_pred__V_70_70));
#line 570 "add_pred.m"
    }
#line 571 "add_pred.m"
    {
#line 571 "add_pred.m"
      MR_Word base;
#line 571 "add_pred.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 571 "add_pred.m"
      *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_19 = base;
#line 571 "add_pred.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Spec_17));
#line 571 "add_pred.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_18));
#line 571 "add_pred.m"
    }
#line 557 "add_pred.m"
  }
#line 554 "add_pred.m"
}

#line 514 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__preds_do_add_implicit_12_p_0(
#line 514 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ModuleInfo_13,
#line 514 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ModuleName_14,
#line 514 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredName_15,
#line 514 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__Arity_16,
#line 514 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_17,
#line 514 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Status_18,
#line 514 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_19,
#line 514 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Origin_20,
#line 514 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ClausesInfo_21,
#line 514 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__PredId_22,
#line 514 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_PredicateTable_0_41,
#line 514 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_PredicateTable_42)
#line 514 "add_pred.m"
{
#line 520 "add_pred.m"
  {
#line 520 "add_pred.m"
    MR_bool hlds__make_hlds__add_pred__succeeded;
#line 520 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_55_55 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 520 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_58_58;
#line 520 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TVarSet0_24;
#line 520 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TypeVars_25;
#line 520 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TVarSet_26;
#line 520 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Types_27;
#line 520 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Proofs_28;
#line 520 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__ConstraintMap_29;
#line 520 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Markers0_32;
#line 520 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__VarNameRemap_33;
#line 520 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredInfo0_34;
#line 520 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Markers_35;
#line 520 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredInfo_36;
#line 520 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredIds_37;
#line 520 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_44_44;

#line 521 "add_pred.m"
    {
#line 521 "add_pred.m"
      mercury__varset__init_1_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_55_55, &hlds__make_hlds__add_pred__TVarSet0_24);
    }
#line 522 "add_pred.m"
    {
#line 522 "add_pred.m"
      parse_tree__prog_util__make_n_fresh_vars_5_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_55_55, (MR_String) "T", hlds__make_hlds__add_pred__Arity_16, &hlds__make_hlds__add_pred__TypeVars_25, hlds__make_hlds__add_pred__TVarSet0_24, &hlds__make_hlds__add_pred__TVarSet_26);
    }
#line 523 "add_pred.m"
    {
#line 523 "add_pred.m"
      hlds__make_hlds__add_pred__V_44_44 = mercury__map__init_0_f_0((MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
    }
#line 523 "add_pred.m"
    {
#line 523 "add_pred.m"
      parse_tree__prog_type__var_list_to_type_list_3_p_0(hlds__make_hlds__add_pred__V_44_44, hlds__make_hlds__add_pred__TypeVars_25, &hlds__make_hlds__add_pred__Types_27);
    }
#line 1219 "hlds.make_hlds.add_pred.c"
    hlds__make_hlds__add_pred__TypeCtorInfo_58_58 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 524 "add_pred.m"
    {
#line 524 "add_pred.m"
      mercury__map__init_1_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_58_58, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, &hlds__make_hlds__add_pred__Proofs_28);
    }
#line 525 "add_pred.m"
    {
#line 525 "add_pred.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, hlds__make_hlds__add_pred__TypeCtorInfo_58_58, &hlds__make_hlds__add_pred__ConstraintMap_29);
    }
#line 532 "add_pred.m"
    {
#line 532 "add_pred.m"
      hlds__hlds_pred__init_markers_1_p_0(&hlds__make_hlds__add_pred__Markers0_32);
    }
#line 533 "add_pred.m"
    {
#line 533 "add_pred.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, &hlds__make_hlds__add_pred__VarNameRemap_33);
    }
#line 534 "add_pred.m"
    {
#line 534 "add_pred.m"
      hlds__hlds_pred__pred_info_init_18_p_0(hlds__make_hlds__add_pred__ModuleName_14, hlds__make_hlds__add_pred__PredName_15, hlds__make_hlds__add_pred__Arity_16, hlds__make_hlds__add_pred__PredOrFunc_17, hlds__make_hlds__add_pred__Context_19, hlds__make_hlds__add_pred__Origin_20, hlds__make_hlds__add_pred__Status_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_pred__Markers0_32, hlds__make_hlds__add_pred__Types_27, hlds__make_hlds__add_pred__TVarSet_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[22], hlds__make_hlds__add_pred__Proofs_28, hlds__make_hlds__add_pred__ConstraintMap_29, hlds__make_hlds__add_pred__ClausesInfo_21, hlds__make_hlds__add_pred__VarNameRemap_33, &hlds__make_hlds__add_pred__PredInfo0_34);
    }
#line 538 "add_pred.m"
    {
#line 538 "add_pred.m"
      hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 2, hlds__make_hlds__add_pred__Markers0_32, &hlds__make_hlds__add_pred__Markers_35);
    }
#line 539 "add_pred.m"
    {
#line 539 "add_pred.m"
      hlds__hlds_pred__pred_info_set_markers_3_p_0(hlds__make_hlds__add_pred__Markers_35, hlds__make_hlds__add_pred__PredInfo0_34, &hlds__make_hlds__add_pred__PredInfo_36);
    }
#line 540 "add_pred.m"
    {
#line 540 "add_pred.m"
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredicateTable_0_41, (MR_Integer) 0, hlds__make_hlds__add_pred__PredOrFunc_17, hlds__make_hlds__add_pred__PredName_15, hlds__make_hlds__add_pred__Arity_16, &hlds__make_hlds__add_pred__PredIds_37);
    }
#line 547 "add_pred.m"
    if ((hlds__make_hlds__add_pred__PredIds_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 543 "add_pred.m"
      {
#line 543 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__MQInfo_38;

#line 544 "add_pred.m"
        {
#line 544 "add_pred.m"
          hlds__hlds_module__module_info_get_partial_qualifier_info_2_p_0(hlds__make_hlds__add_pred__ModuleInfo_13, &hlds__make_hlds__add_pred__MQInfo_38);
        }
#line 545 "add_pred.m"
        {
#line 545 "add_pred.m"
          hlds__pred_table__predicate_table_insert_qual_6_p_0(hlds__make_hlds__add_pred__PredInfo_36, (MR_Integer) 1, hlds__make_hlds__add_pred__MQInfo_38, hlds__make_hlds__add_pred__PredId_22, hlds__make_hlds__add_pred__STATE_VARIABLE_PredicateTable_0_41, hlds__make_hlds__add_pred__STATE_VARIABLE_PredicateTable_42);
#line 545 "add_pred.m"
          return;
        }
#line 543 "add_pred.m"
      }
#line 547 "add_pred.m"
    else
#line 548 "add_pred.m"
      {
#line 549 "add_pred.m"
        {
#line 549 "add_pred.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_pred", (MR_String) "predicate \140hlds.make_hlds.add_pred.preds_do_add_implicit\'/12", (MR_String) "search succeeded");
#line 549 "add_pred.m"
          return;
        }
#line 548 "add_pred.m"
      }
#line 520 "add_pred.m"
  }
#line 514 "add_pred.m"
}

#line 436 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__module_do_add_mode_11_p_0(
#line 436 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__InstVarSet_12,
#line 436 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__Arity_13,
#line 436 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Modes_14,
#line 436 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__MaybeDet_15,
#line 436 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__IsClassMethod_16,
#line 436 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__MContext_17,
#line 436 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_31,
#line 436 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_32,
#line 436 "add_pred.m"
  MR_Integer * hlds__make_hlds__add_pred__ProcId_19,
#line 436 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_33,
#line 436 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_34)
#line 436 "add_pred.m"
{
#line 442 "add_pred.m"
  {
#line 442 "add_pred.m"
    MR_bool hlds__make_hlds__add_pred__succeeded;
#line 442 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__DetismDecl_21;
#line 442 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_38_38;

#line 469 "add_pred.m"
    if ((hlds__make_hlds__add_pred__MaybeDet_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 445 "add_pred.m"
      {
#line 445 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__ImportStatus_22;
#line 445 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__PredOrFunc_23;
#line 445 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__PredModule_24;
#line 445 "add_pred.m"
        MR_String hlds__make_hlds__add_pred__PredName_25;
#line 445 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__PredSymName_26;

#line 446 "add_pred.m"
        hlds__make_hlds__add_pred__DetismDecl_21 = (MR_Integer) 2;
#line 447 "add_pred.m"
        {
#line 447 "add_pred.m"
          hlds__hlds_pred__pred_info_get_import_status_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_31, &hlds__make_hlds__add_pred__ImportStatus_22);
        }
#line 448 "add_pred.m"
        {
#line 448 "add_pred.m"
          hlds__make_hlds__add_pred__PredOrFunc_23 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_31);
        }
#line 449 "add_pred.m"
        {
#line 449 "add_pred.m"
          hlds__make_hlds__add_pred__PredModule_24 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_31);
        }
#line 450 "add_pred.m"
        {
#line 450 "add_pred.m"
          hlds__make_hlds__add_pred__PredName_25 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_31);
        }
#line 451 "add_pred.m"
        {
#line 451 "add_pred.m"
          hlds__make_hlds__add_pred__PredSymName_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 451 "add_pred.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__PredSymName_26, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredModule_24));
#line 451 "add_pred.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__PredSymName_26, 1) = ((MR_Box) (hlds__make_hlds__add_pred__PredName_25));
#line 451 "add_pred.m"
        }
#line 456 "add_pred.m"
        if ((hlds__make_hlds__add_pred__IsClassMethod_16 == (MR_Integer) 0))
#line 457 "add_pred.m"
          {
#line 457 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__IsExported_27;

#line 458 "add_pred.m"
            {
#line 458 "add_pred.m"
              hlds__make_hlds__add_pred__IsExported_27 = hlds__hlds_pred__status_is_exported_1_f_0(hlds__make_hlds__add_pred__ImportStatus_22);
            }
#line 463 "add_pred.m"
            if ((hlds__make_hlds__add_pred__IsExported_27 == (MR_Integer) 0))
#line 465 "add_pred.m"
              {
#line 465 "add_pred.m"
                hlds__make_hlds__add_pred__unspecified_det_for_local_6_p_0(hlds__make_hlds__add_pred__PredSymName_26, hlds__make_hlds__add_pred__Arity_13, hlds__make_hlds__add_pred__PredOrFunc_23, hlds__make_hlds__add_pred__MContext_17, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_33, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_34);
              }
#line 463 "add_pred.m"
            else
#line 587 "add_pred.m"
              {
#line 587 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__Pieces_48;
#line 587 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__Msg_49;
#line 587 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__Spec_50;
#line 587 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__V_53_53;
#line 587 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__V_54_54;
#line 587 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__V_55_55;
#line 587 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__V_56_56;
#line 587 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__V_57_57;
#line 587 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__V_62_62;
#line 587 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__V_63_63;
#line 587 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__V_67_67;

#line 589 "add_pred.m"
                {
#line 589 "add_pred.m"
                  hlds__make_hlds__add_pred__V_54_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 589 "add_pred.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_54_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 589 "add_pred.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_54_54, 1) = ((MR_Box) (hlds__make_hlds__add_pred__PredOrFunc_23));
#line 589 "add_pred.m"
                }
#line 589 "add_pred.m"
                {
#line 589 "add_pred.m"
                  hlds__make_hlds__add_pred__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 589 "add_pred.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_57_57, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredSymName_26));
#line 589 "add_pred.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_57_57, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Arity_13));
#line 589 "add_pred.m"
                }
#line 589 "add_pred.m"
                {
#line 589 "add_pred.m"
                  hlds__make_hlds__add_pred__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 589 "add_pred.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 589 "add_pred.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_56_56, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_57_57));
#line 589 "add_pred.m"
                }
#line 589 "add_pred.m"
                {
#line 589 "add_pred.m"
                  hlds__make_hlds__add_pred__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 589 "add_pred.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_55_55, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_56_56));
#line 589 "add_pred.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[32])));
#line 589 "add_pred.m"
                }
#line 589 "add_pred.m"
                {
#line 589 "add_pred.m"
                  hlds__make_hlds__add_pred__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 589 "add_pred.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_53_53, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_54_54));
#line 589 "add_pred.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_53_53, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_55_55));
#line 589 "add_pred.m"
                }
#line 588 "add_pred.m"
                {
#line 588 "add_pred.m"
                  hlds__make_hlds__add_pred__Pieces_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 588 "add_pred.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Pieces_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[30])));
#line 588 "add_pred.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Pieces_48, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_53_53));
#line 588 "add_pred.m"
                }
#line 590 "add_pred.m"
                {
#line 590 "add_pred.m"
                  hlds__make_hlds__add_pred__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 590 "add_pred.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_63_63, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Pieces_48));
#line 590 "add_pred.m"
                }
#line 590 "add_pred.m"
                {
#line 590 "add_pred.m"
                  hlds__make_hlds__add_pred__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 590 "add_pred.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_62_62, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_63_63));
#line 590 "add_pred.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 590 "add_pred.m"
                }
#line 590 "add_pred.m"
                {
#line 590 "add_pred.m"
                  hlds__make_hlds__add_pred__Msg_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 590 "add_pred.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_49, 0) = ((MR_Box) (hlds__make_hlds__add_pred__MContext_17));
#line 590 "add_pred.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_49, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_62_62));
#line 590 "add_pred.m"
                }
#line 591 "add_pred.m"
                {
#line 591 "add_pred.m"
                  hlds__make_hlds__add_pred__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 591 "add_pred.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_67_67, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Msg_49));
#line 591 "add_pred.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 591 "add_pred.m"
                }
#line 591 "add_pred.m"
                {
#line 591 "add_pred.m"
                  hlds__make_hlds__add_pred__Spec_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 591 "add_pred.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 591 "add_pred.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 591 "add_pred.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_50, 2) = ((MR_Box) (hlds__make_hlds__add_pred__V_67_67));
#line 591 "add_pred.m"
                }
#line 592 "add_pred.m"
                {
#line 592 "add_pred.m"
                  MR_Word base;
#line 592 "add_pred.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 592 "add_pred.m"
                  *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_34 = base;
#line 592 "add_pred.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Spec_50));
#line 592 "add_pred.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_33));
#line 592 "add_pred.m"
                }
#line 587 "add_pred.m"
              }
#line 457 "add_pred.m"
          }
#line 456 "add_pred.m"
        else
#line 454 "add_pred.m"
          {
#line 454 "add_pred.m"
            hlds__make_hlds__add_pred__unspecified_det_for_method_6_p_0(hlds__make_hlds__add_pred__PredSymName_26, hlds__make_hlds__add_pred__Arity_13, hlds__make_hlds__add_pred__PredOrFunc_23, hlds__make_hlds__add_pred__MContext_17, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_33, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_34);
          }
#line 445 "add_pred.m"
      }
#line 469 "add_pred.m"
    else
#line 470 "add_pred.m"
      {
#line 471 "add_pred.m"
        hlds__make_hlds__add_pred__DetismDecl_21 = (MR_Integer) 0;
#line 471 "add_pred.m"
        *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_34 = hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_33;
#line 470 "add_pred.m"
      }
#line 477 "add_pred.m"
    {
#line 477 "add_pred.m"
      hlds__make_hlds__add_pred__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 477 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_38_38, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Modes_14));
#line 477 "add_pred.m"
    }
#line 477 "add_pred.m"
    {
#line 477 "add_pred.m"
      hlds__make_hlds__add_pred__do_add_new_proc_13_p_0(hlds__make_hlds__add_pred__InstVarSet_12, hlds__make_hlds__add_pred__Arity_13, hlds__make_hlds__add_pred__Modes_14, hlds__make_hlds__add_pred__V_38_38, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_pred__DetismDecl_21, hlds__make_hlds__add_pred__MaybeDet_15, hlds__make_hlds__add_pred__MContext_17, (MR_Integer) 1, (MR_Integer) 1, hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_31, hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_32, hlds__make_hlds__add_pred__ProcId_19);
#line 477 "add_pred.m"
      return;
    }
#line 442 "add_pred.m"
  }
#line 436 "add_pred.m"
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
#line 1712 "hlds.make_hlds.add_pred.c"
    hlds__make_hlds__add_pred__TypeCtorInfo_133_133 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1714 "hlds.make_hlds.add_pred.c"
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
                if ((hlds__make_hlds__add_pred__CompilationTarget_8 == (MR_Integer) 4))
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
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Unification_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[23])));
#line 289 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Unification_33, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 289 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Unification_33, 3) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[27])));
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
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__AssignExpr_36, 2) = ((MR_Box) (&hlds__make_hlds__add_pred_scalar_common_1[28]));
#line 293 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__AssignExpr_36, 3) = ((MR_Box) (hlds__make_hlds__add_pred__Unification_33));
#line 293 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__AssignExpr_36, 4) = ((MR_Box) (&hlds__make_hlds__add_pred_scalar_common_1[29]));
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
#line 299 "add_pred.m"
            {
#line 299 "add_pred.m"
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
#line 299 "add_pred.m"
            {
#line 299 "add_pred.m"
              hlds__make_hlds__add_pred__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 299 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_94_94, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_95_95));
#line 299 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_94_94, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_96_96));
#line 299 "add_pred.m"
            }
#line 298 "add_pred.m"
            {
#line 298 "add_pred.m"
              hlds__make_hlds__add_pred__CastExpr_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 298 "add_pred.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__CastExpr_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 298 "add_pred.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__CastExpr_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_2[3])));
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
#line 302 "add_pred.m"
            {
#line 302 "add_pred.m"
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
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__GoalExpr_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pred_scalar_common_2[4])));
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
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__GoalExpr_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pred_scalar_common_2[5])));
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
#line 357 "add_pred.m"
    {
#line 357 "add_pred.m"
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
#line 362 "add_pred.m"
    {
#line 362 "add_pred.m"
      hlds__make_hlds__add_pred__V_121_121 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
    }
#line 2260 "hlds.make_hlds.add_pred.c"
    if ((hlds__make_hlds__add_pred__Stub_25 == (MR_Integer) 0))
#line 2262 "hlds.make_hlds.add_pred.c"
      {
#line 2264 "hlds.make_hlds.add_pred.c"
        MR_Word hlds__make_hlds__add_pred__Goal_49;
#line 2266 "hlds.make_hlds.add_pred.c"
        MR_Word hlds__make_hlds__add_pred__Clause_50;
#line 2268 "hlds.make_hlds.add_pred.c"
        MR_Word hlds__make_hlds__add_pred__ClausesRep_51;
#line 2270 "hlds.make_hlds.add_pred.c"
        MR_Word hlds__make_hlds__add_pred__ClausesInfo_56;
#line 2272 "hlds.make_hlds.add_pred.c"
        MR_Word hlds__make_hlds__add_pred__Markers0_57;
#line 2274 "hlds.make_hlds.add_pred.c"
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
#line 2357 "hlds.make_hlds.add_pred.c"
      }
#line 2359 "hlds.make_hlds.add_pred.c"
    else
#line 2361 "hlds.make_hlds.add_pred.c"
      {
#line 2363 "hlds.make_hlds.add_pred.c"
        MR_Word hlds__make_hlds__add_pred__Markers2_59;
#line 2365 "hlds.make_hlds.add_pred.c"
        MR_Word hlds__make_hlds__add_pred__ClausesRep_144;
#line 2367 "hlds.make_hlds.add_pred.c"
        MR_Word hlds__make_hlds__add_pred__ClausesInfo_145;
#line 2369 "hlds.make_hlds.add_pred.c"
        MR_Word hlds__make_hlds__add_pred__Markers0_146;
#line 2371 "hlds.make_hlds.add_pred.c"
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
#line 2428 "hlds.make_hlds.add_pred.c"
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
        hlds__make_hlds__add_pred__Status_29 = (MR_Word) MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pred_scalar_common_2[2]);
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
#line 2594 "hlds.make_hlds.add_pred.c"
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
#line 189 "add_pred.m"
        {
#line 189 "add_pred.m"
          hlds__make_hlds__add_pred__V_67_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 189 "add_pred.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_67_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 189 "add_pred.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_67_67, 1) = ((MR_Box) (hlds__make_hlds__add_pred__PredName_18));
#line 189 "add_pred.m"
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
hlds__make_hlds__add_pred__preds_add_implicit_for_assertion_10_p_0(
#line 66 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_25,
#line 66 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_26,
#line 66 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ModuleName_12,
#line 66 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredName_13,
#line 66 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__Arity_14,
#line 66 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_15,
#line 66 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__HeadVars_16,
#line 66 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Status_17,
#line 66 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_18,
#line 66 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__PredId_19)
#line 66 "add_pred.m"
{
#line 504 "add_pred.m"
  {
#line 504 "add_pred.m"
    MR_bool hlds__make_hlds__add_pred__succeeded;
#line 504 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_55_71;
#line 504 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_58_74;
#line 504 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__ClausesInfo_20;
#line 504 "add_pred.m"
    MR_String hlds__make_hlds__add_pred__FileName_21;
#line 504 "add_pred.m"
    MR_Integer hlds__make_hlds__add_pred__LineNum_22;
#line 504 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredicateTable0_23;
#line 504 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredicateTable_24;
#line 504 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_27_27;
#line 504 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TVarSet0_42;
#line 504 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TypeVars_43;
#line 504 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TVarSet_44;
#line 504 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Types_45;
#line 504 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Proofs_46;
#line 504 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__ConstraintMap_47;
#line 504 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Markers0_50;
#line 504 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__VarNameRemap_51;
#line 504 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredInfo0_52;
#line 504 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Markers_53;
#line 504 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredInfo_54;
#line 504 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredIds_55;
#line 504 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_60_60;

#line 505 "add_pred.m"
    {
#line 505 "add_pred.m"
      hlds__hlds_clauses__clauses_info_init_for_assertion_2_p_0(hlds__make_hlds__add_pred__HeadVars_16, &hlds__make_hlds__add_pred__ClausesInfo_20);
    }
#line 506 "add_pred.m"
    {
#line 506 "add_pred.m"
      mercury__term__context_file_2_p_0(hlds__make_hlds__add_pred__Context_18, &hlds__make_hlds__add_pred__FileName_21);
    }
#line 507 "add_pred.m"
    {
#line 507 "add_pred.m"
      mercury__term__context_line_2_p_0(hlds__make_hlds__add_pred__Context_18, &hlds__make_hlds__add_pred__LineNum_22);
    }
#line 508 "add_pred.m"
    {
#line 508 "add_pred.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_25, &hlds__make_hlds__add_pred__PredicateTable0_23);
    }
#line 510 "add_pred.m"
    {
#line 510 "add_pred.m"
      hlds__make_hlds__add_pred__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 510 "add_pred.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 510 "add_pred.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_27_27, 1) = ((MR_Box) (hlds__make_hlds__add_pred__FileName_21));
#line 510 "add_pred.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_27_27, 2) = ((MR_Box) (hlds__make_hlds__add_pred__LineNum_22));
#line 510 "add_pred.m"
    }
#line 2911 "hlds.make_hlds.add_pred.c"
    hlds__make_hlds__add_pred__TypeCtorInfo_55_71 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 521 "add_pred.m"
    {
#line 521 "add_pred.m"
      mercury__varset__init_1_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_55_71, &hlds__make_hlds__add_pred__TVarSet0_42);
    }
#line 522 "add_pred.m"
    {
#line 522 "add_pred.m"
      parse_tree__prog_util__make_n_fresh_vars_5_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_55_71, (MR_String) "T", hlds__make_hlds__add_pred__Arity_14, &hlds__make_hlds__add_pred__TypeVars_43, hlds__make_hlds__add_pred__TVarSet0_42, &hlds__make_hlds__add_pred__TVarSet_44);
    }
#line 523 "add_pred.m"
    {
#line 523 "add_pred.m"
      hlds__make_hlds__add_pred__V_60_60 = mercury__map__init_0_f_0((MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
    }
#line 523 "add_pred.m"
    {
#line 523 "add_pred.m"
      parse_tree__prog_type__var_list_to_type_list_3_p_0(hlds__make_hlds__add_pred__V_60_60, hlds__make_hlds__add_pred__TypeVars_43, &hlds__make_hlds__add_pred__Types_45);
    }
#line 2933 "hlds.make_hlds.add_pred.c"
    hlds__make_hlds__add_pred__TypeCtorInfo_58_74 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 524 "add_pred.m"
    {
#line 524 "add_pred.m"
      mercury__map__init_1_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_58_74, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, &hlds__make_hlds__add_pred__Proofs_46);
    }
#line 525 "add_pred.m"
    {
#line 525 "add_pred.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, hlds__make_hlds__add_pred__TypeCtorInfo_58_74, &hlds__make_hlds__add_pred__ConstraintMap_47);
    }
#line 532 "add_pred.m"
    {
#line 532 "add_pred.m"
      hlds__hlds_pred__init_markers_1_p_0(&hlds__make_hlds__add_pred__Markers0_50);
    }
#line 533 "add_pred.m"
    {
#line 533 "add_pred.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, &hlds__make_hlds__add_pred__VarNameRemap_51);
    }
#line 534 "add_pred.m"
    {
#line 534 "add_pred.m"
      hlds__hlds_pred__pred_info_init_18_p_0(hlds__make_hlds__add_pred__ModuleName_12, hlds__make_hlds__add_pred__PredName_13, hlds__make_hlds__add_pred__Arity_14, hlds__make_hlds__add_pred__PredOrFunc_15, hlds__make_hlds__add_pred__Context_18, hlds__make_hlds__add_pred__V_27_27, hlds__make_hlds__add_pred__Status_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_pred__Markers0_50, hlds__make_hlds__add_pred__Types_45, hlds__make_hlds__add_pred__TVarSet_44, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[22], hlds__make_hlds__add_pred__Proofs_46, hlds__make_hlds__add_pred__ConstraintMap_47, hlds__make_hlds__add_pred__ClausesInfo_20, hlds__make_hlds__add_pred__VarNameRemap_51, &hlds__make_hlds__add_pred__PredInfo0_52);
    }
#line 538 "add_pred.m"
    {
#line 538 "add_pred.m"
      hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 2, hlds__make_hlds__add_pred__Markers0_50, &hlds__make_hlds__add_pred__Markers_53);
    }
#line 539 "add_pred.m"
    {
#line 539 "add_pred.m"
      hlds__hlds_pred__pred_info_set_markers_3_p_0(hlds__make_hlds__add_pred__Markers_53, hlds__make_hlds__add_pred__PredInfo0_52, &hlds__make_hlds__add_pred__PredInfo_54);
    }
#line 540 "add_pred.m"
    {
#line 540 "add_pred.m"
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__make_hlds__add_pred__PredicateTable0_23, (MR_Integer) 0, hlds__make_hlds__add_pred__PredOrFunc_15, hlds__make_hlds__add_pred__PredName_13, hlds__make_hlds__add_pred__Arity_14, &hlds__make_hlds__add_pred__PredIds_55);
    }
#line 547 "add_pred.m"
    if ((hlds__make_hlds__add_pred__PredIds_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 543 "add_pred.m"
      {
#line 543 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__MQInfo_56;

#line 544 "add_pred.m"
        {
#line 544 "add_pred.m"
          hlds__hlds_module__module_info_get_partial_qualifier_info_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_25, &hlds__make_hlds__add_pred__MQInfo_56);
        }
#line 545 "add_pred.m"
        {
#line 545 "add_pred.m"
          hlds__pred_table__predicate_table_insert_qual_6_p_0(hlds__make_hlds__add_pred__PredInfo_54, (MR_Integer) 1, hlds__make_hlds__add_pred__MQInfo_56, hlds__make_hlds__add_pred__PredId_19, hlds__make_hlds__add_pred__PredicateTable0_23, &hlds__make_hlds__add_pred__PredicateTable_24);
        }
#line 543 "add_pred.m"
      }
#line 547 "add_pred.m"
    else
#line 548 "add_pred.m"
      {
#line 549 "add_pred.m"
        {
#line 549 "add_pred.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_pred", (MR_String) "predicate \140hlds.make_hlds.add_pred.preds_do_add_implicit\'/12", (MR_String) "search succeeded");
#line 549 "add_pred.m"
          return;
        }
#line 548 "add_pred.m"
      }
#line 512 "add_pred.m"
    {
#line 512 "add_pred.m"
      hlds__hlds_module__module_info_set_predicate_table_3_p_0(hlds__make_hlds__add_pred__PredicateTable_24, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_25, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_26);
#line 512 "add_pred.m"
      return;
    }
#line 504 "add_pred.m"
  }
#line 66 "add_pred.m"
}

#line 60 "add_pred.m"
void MR_CALL 
hlds__make_hlds__add_pred__preds_add_implicit_report_error_14_p_0(
#line 60 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_32,
#line 60 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_33,
#line 60 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ModuleName_16,
#line 60 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredName_17,
#line 60 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__Arity_18,
#line 60 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_19,
#line 60 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Status_20,
#line 60 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__IsClassMethod_21,
#line 60 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_22,
#line 60 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Origin_23,
#line 60 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__DescPieces_24,
#line 60 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__PredId_25,
#line 60 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_34,
#line 60 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_35)
#line 60 "add_pred.m"
{
#line 483 "add_pred.m"
  {
#line 483 "add_pred.m"
    MR_bool hlds__make_hlds__add_pred__succeeded;
#line 483 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredicateTable0_27;
#line 483 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Globals_28;
#line 483 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__ClausesInfo_30;
#line 483 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredicateTable_31;
#line 483 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_36_36;
#line 483 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_39_39;

#line 484 "add_pred.m"
    {
#line 484 "add_pred.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_32, &hlds__make_hlds__add_pred__PredicateTable0_27);
    }
#line 485 "add_pred.m"
    {
#line 485 "add_pred.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_32, &hlds__make_hlds__add_pred__Globals_28);
    }
#line 486 "add_pred.m"
    {
#line 486 "add_pred.m"
      hlds__make_hlds__make_hlds_error__maybe_undefined_pred_error_10_p_0(hlds__make_hlds__add_pred__Globals_28, hlds__make_hlds__add_pred__PredName_17, hlds__make_hlds__add_pred__Arity_18, hlds__make_hlds__add_pred__PredOrFunc_19, hlds__make_hlds__add_pred__Status_20, hlds__make_hlds__add_pred__IsClassMethod_21, hlds__make_hlds__add_pred__Context_22, hlds__make_hlds__add_pred__DescPieces_24, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_34, &hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_36_36);
    }
#line 493 "add_pred.m"
    if ((hlds__make_hlds__add_pred__PredOrFunc_19 == (MR_Integer) 1))
#line 489 "add_pred.m"
      {
#line 489 "add_pred.m"
        MR_Integer hlds__make_hlds__add_pred__FuncArity_29;

#line 490 "add_pred.m"
        {
#line 490 "add_pred.m"
          parse_tree__prog_util__adjust_func_arity_3_p_1((MR_Integer) 1, &hlds__make_hlds__add_pred__FuncArity_29, hlds__make_hlds__add_pred__Arity_18);
        }
#line 491 "add_pred.m"
        {
#line 491 "add_pred.m"
          hlds__make_hlds__make_hlds_passes__maybe_check_field_access_function_7_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_32, hlds__make_hlds__add_pred__PredName_17, hlds__make_hlds__add_pred__FuncArity_29, hlds__make_hlds__add_pred__Status_20, hlds__make_hlds__add_pred__Context_22, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_36_36, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_35);
        }
#line 489 "add_pred.m"
      }
#line 493 "add_pred.m"
    else
#line 494 "add_pred.m"
      *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_35 = hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_36_36;
#line 496 "add_pred.m"
    {
#line 496 "add_pred.m"
      hlds__make_hlds__add_pred__V_39_39 = hlds__hlds_clauses__init_clause_item_numbers_user_0_f_0();
    }
#line 496 "add_pred.m"
    {
#line 496 "add_pred.m"
      hlds__hlds_clauses__clauses_info_init_4_p_0(hlds__make_hlds__add_pred__PredOrFunc_19, hlds__make_hlds__add_pred__Arity_18, hlds__make_hlds__add_pred__V_39_39, &hlds__make_hlds__add_pred__ClausesInfo_30);
    }
#line 498 "add_pred.m"
    {
#line 498 "add_pred.m"
      hlds__make_hlds__add_pred__preds_do_add_implicit_12_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_32, hlds__make_hlds__add_pred__ModuleName_16, hlds__make_hlds__add_pred__PredName_17, hlds__make_hlds__add_pred__Arity_18, hlds__make_hlds__add_pred__PredOrFunc_19, hlds__make_hlds__add_pred__Status_20, hlds__make_hlds__add_pred__Context_22, hlds__make_hlds__add_pred__Origin_23, hlds__make_hlds__add_pred__ClausesInfo_30, hlds__make_hlds__add_pred__PredId_25, hlds__make_hlds__add_pred__PredicateTable0_27, &hlds__make_hlds__add_pred__PredicateTable_31);
    }
#line 501 "add_pred.m"
    {
#line 501 "add_pred.m"
      hlds__hlds_module__module_info_set_predicate_table_3_p_0(hlds__make_hlds__add_pred__PredicateTable_31, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_32, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_33);
#line 501 "add_pred.m"
      return;
    }
#line 483 "add_pred.m"
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
    MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_58_58;
#line 402 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_59_59;
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
    MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_45_45;
#line 402 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_48_48;
#line 419 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredIdPrime_30;
#line 417 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_44_44;
#line 427 "add_pred.m"
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
        hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_45_45 = hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_39;
#line 418 "add_pred.m"
      }
#line 419 "add_pred.m"
    else
#line 420 "add_pred.m"
      {
#line 420 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__V_46_46;

#line 422 "add_pred.m"
        {
#line 422 "add_pred.m"
          hlds__make_hlds__add_pred__V_46_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 422 "add_pred.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_46_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 422 "add_pred.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_46_46, 1) = ((MR_Box) (hlds__make_hlds__add_pred__PredName_15));
#line 422 "add_pred.m"
        }
#line 420 "add_pred.m"
        {
#line 420 "add_pred.m"
          hlds__make_hlds__add_pred__preds_add_implicit_report_error_14_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_45_45, hlds__make_hlds__add_pred__ModuleName_26, hlds__make_hlds__add_pred__PredName_15, hlds__make_hlds__add_pred__Arity_27, hlds__make_hlds__add_pred__PredOrFunc_20, hlds__make_hlds__add_pred__Status_18, hlds__make_hlds__add_pred__IsClassMethod_21, hlds__make_hlds__add_pred__MContext_19, hlds__make_hlds__add_pred__V_46_46, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[5]), &hlds__make_hlds__add_pred__PredId_31, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_41, &hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_48_48);
        }
#line 420 "add_pred.m"
      }
#line 425 "add_pred.m"
    {
#line 425 "add_pred.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_45_45, &hlds__make_hlds__add_pred__PredicateTable1_32);
    }
#line 426 "add_pred.m"
    {
#line 426 "add_pred.m"
      hlds__pred_table__predicate_table_get_preds_2_p_0(hlds__make_hlds__add_pred__PredicateTable1_32, &hlds__make_hlds__add_pred__Preds0_33);
    }
#line 3295 "hlds.make_hlds.add_pred.c"
    hlds__make_hlds__add_pred__TypeCtorInfo_58_58 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 3297 "hlds.make_hlds.add_pred.c"
    hlds__make_hlds__add_pred__TypeCtorInfo_59_59 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 427 "add_pred.m"
    {
#line 427 "add_pred.m"
      mercury__map__lookup_3_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_58_58, hlds__make_hlds__add_pred__TypeCtorInfo_59_59, hlds__make_hlds__add_pred__Preds0_33, ((MR_Box) (hlds__make_hlds__add_pred__PredId_31)), &hlds__make_hlds__add_pred__conv0_PredInfo0_34);
    }
#line 427 "add_pred.m"
    hlds__make_hlds__add_pred__PredInfo0_34 = ((MR_Word) hlds__make_hlds__add_pred__conv0_PredInfo0_34);
#line 429 "add_pred.m"
    {
#line 429 "add_pred.m"
      hlds__make_hlds__add_pred__module_do_add_mode_11_p_0(hlds__make_hlds__add_pred__InstVarSet_14, hlds__make_hlds__add_pred__Arity_27, hlds__make_hlds__add_pred__Modes_16, hlds__make_hlds__add_pred__MaybeDet_17, hlds__make_hlds__add_pred__IsClassMethod_21, hlds__make_hlds__add_pred__MContext_19, hlds__make_hlds__add_pred__PredInfo0_34, &hlds__make_hlds__add_pred__PredInfo_35, &hlds__make_hlds__add_pred__ProcId_36, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_48_48, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_42);
    }
#line 431 "add_pred.m"
    {
#line 431 "add_pred.m"
      mercury__map__det_update_4_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_58_58, hlds__make_hlds__add_pred__TypeCtorInfo_59_59, ((MR_Box) (hlds__make_hlds__add_pred__PredId_31)), ((MR_Box) (hlds__make_hlds__add_pred__PredInfo_35)), hlds__make_hlds__add_pred__Preds0_33, &hlds__make_hlds__add_pred__Preds_37);
    }
#line 432 "add_pred.m"
    {
#line 432 "add_pred.m"
      hlds__pred_table__predicate_table_set_preds_3_p_0(hlds__make_hlds__add_pred__Preds_37, hlds__make_hlds__add_pred__PredicateTable1_32, &hlds__make_hlds__add_pred__PredicateTable_38);
    }
#line 433 "add_pred.m"
    {
#line 433 "add_pred.m"
      hlds__hlds_module__module_info_set_predicate_table_3_p_0(hlds__make_hlds__add_pred__PredicateTable_38, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_45_45, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_40);
    }
#line 434 "add_pred.m"
    {
#line 434 "add_pred.m"
      MR_Word base;
#line 434 "add_pred.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 434 "add_pred.m"
      *hlds__make_hlds__add_pred__PredProcId_22 = base;
#line 434 "add_pred.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredId_31));
#line 434 "add_pred.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__add_pred__ProcId_36));
#line 434 "add_pred.m"
    }
#line 402 "add_pred.m"
  }
#line 49 "add_pred.m"
}

#line 41 "add_pred.m"
void MR_CALL 
hlds__make_hlds__add_pred__do_add_new_proc_13_p_0(
#line 41 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__InstVarSet_14,
#line 41 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__Arity_15,
#line 41 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ArgModes_16,
#line 41 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__MaybeDeclaredArgModes_17,
#line 41 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__MaybeArgLives_18,
#line 41 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__DetismDecl_19,
#line 41 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__MaybeDet_20,
#line 41 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_21,
#line 41 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__IsAddressTaken_22,
#line 41 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__HasParallelConj_23,
#line 41 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredInfo0_24,
#line 41 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__PredInfo_25,
#line 41 "add_pred.m"
  MR_Integer * hlds__make_hlds__add_pred__ModeId_26)
#line 41 "add_pred.m"
{
#line 387 "add_pred.m"
  {
#line 387 "add_pred.m"
    MR_bool hlds__make_hlds__add_pred__succeeded;
#line 387 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Procs0_27;
#line 387 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__ArgTypes_28;
#line 387 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__VarNameRemap_29;
#line 387 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__NewProc0_30;
#line 387 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__NewProc_31;
#line 387 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Procs_32;

#line 388 "add_pred.m"
    {
#line 388 "add_pred.m"
      hlds__hlds_pred__pred_info_get_procedures_2_p_0(hlds__make_hlds__add_pred__PredInfo0_24, &hlds__make_hlds__add_pred__Procs0_27);
    }
#line 389 "add_pred.m"
    {
#line 389 "add_pred.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(hlds__make_hlds__add_pred__PredInfo0_24, &hlds__make_hlds__add_pred__ArgTypes_28);
    }
#line 390 "add_pred.m"
    {
#line 390 "add_pred.m"
      hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(hlds__make_hlds__add_pred__PredInfo0_24, &hlds__make_hlds__add_pred__VarNameRemap_29);
    }
#line 391 "add_pred.m"
    {
#line 391 "add_pred.m"
      hlds__hlds_pred__next_mode_id_2_p_0(hlds__make_hlds__add_pred__Procs0_27, hlds__make_hlds__add_pred__ModeId_26);
    }
#line 392 "add_pred.m"
    {
#line 392 "add_pred.m"
      hlds__hlds_pred__proc_info_init_12_p_0(hlds__make_hlds__add_pred__Context_21, hlds__make_hlds__add_pred__Arity_15, hlds__make_hlds__add_pred__ArgTypes_28, hlds__make_hlds__add_pred__MaybeDeclaredArgModes_17, hlds__make_hlds__add_pred__ArgModes_16, hlds__make_hlds__add_pred__MaybeArgLives_18, hlds__make_hlds__add_pred__DetismDecl_19, hlds__make_hlds__add_pred__MaybeDet_20, hlds__make_hlds__add_pred__IsAddressTaken_22, hlds__make_hlds__add_pred__HasParallelConj_23, hlds__make_hlds__add_pred__VarNameRemap_29, &hlds__make_hlds__add_pred__NewProc0_30);
    }
#line 395 "add_pred.m"
    {
#line 395 "add_pred.m"
      hlds__hlds_pred__proc_info_set_inst_varset_3_p_0(hlds__make_hlds__add_pred__InstVarSet_14, hlds__make_hlds__add_pred__NewProc0_30, &hlds__make_hlds__add_pred__NewProc_31);
    }
#line 396 "add_pred.m"
    {
#line 396 "add_pred.m"
      mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, ((MR_Box) (*hlds__make_hlds__add_pred__ModeId_26)), ((MR_Box) (hlds__make_hlds__add_pred__NewProc_31)), hlds__make_hlds__add_pred__Procs0_27, &hlds__make_hlds__add_pred__Procs_32);
    }
#line 397 "add_pred.m"
    {
#line 397 "add_pred.m"
      hlds__hlds_pred__pred_info_set_procedures_3_p_0(hlds__make_hlds__add_pred__Procs_32, hlds__make_hlds__add_pred__PredInfo0_24, hlds__make_hlds__add_pred__PredInfo_25);
#line 397 "add_pred.m"
      return;
    }
#line 387 "add_pred.m"
  }
#line 41 "add_pred.m"
}

#line 33 "add_pred.m"
void MR_CALL 
hlds__make_hlds__add_pred__module_add_pred_or_func_17_p_0(
#line 33 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__TypeVarSet_18,
#line 33 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__InstVarSet_19,
#line 33 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ExistQVars_20,
#line 33 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_21,
#line 33 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredName_22,
#line 33 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__TypesAndModes_23,
#line 33 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__MaybeDet_24,
#line 33 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Purity_25,
#line 33 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ClassContext_26,
#line 33 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Markers_27,
#line 33 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_28,
#line 33 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__HeadVar__12_12,
#line 33 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__MaybePredProcId_31,
#line 33 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_48,
#line 33 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_49,
#line 33 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_50,
#line 33 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_51)
#line 33 "add_pred.m"
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
#line 3536 "hlds.make_hlds.add_pred.c"
    if (hlds__make_hlds__add_pred__succeeded)
#line 3538 "hlds.make_hlds.add_pred.c"
      {
#line 144 "add_pred.m"
        *hlds__make_hlds__add_pred__MaybePredProcId_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 144 "add_pred.m"
        *hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_49 = hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_52_52;
#line 144 "add_pred.m"
        *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_51 = hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_53_53;
#line 3546 "hlds.make_hlds.add_pred.c"
      }
#line 3548 "hlds.make_hlds.add_pred.c"
    else
#line 3550 "hlds.make_hlds.add_pred.c"
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
#line 3577 "hlds.make_hlds.add_pred.c"
        if (hlds__make_hlds__add_pred__succeeded)
#line 3579 "hlds.make_hlds.add_pred.c"
          {
#line 3581 "hlds.make_hlds.add_pred.c"
            MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_61_61;
#line 3583 "hlds.make_hlds.add_pred.c"
            MR_Integer hlds__make_hlds__add_pred__Arity_39;
#line 3585 "hlds.make_hlds.add_pred.c"
            MR_Integer hlds__make_hlds__add_pred__FuncArity_40;
#line 3587 "hlds.make_hlds.add_pred.c"
            MR_Word hlds__make_hlds__add_pred__InMode_41;
#line 3589 "hlds.make_hlds.add_pred.c"
            MR_Word hlds__make_hlds__add_pred__InModes_42;
#line 3591 "hlds.make_hlds.add_pred.c"
            MR_Word hlds__make_hlds__add_pred__OutMode_43;
#line 3593 "hlds.make_hlds.add_pred.c"
            MR_Word hlds__make_hlds__add_pred__Modes_45;
#line 3595 "hlds.make_hlds.add_pred.c"
            MR_Word hlds__make_hlds__add_pred__IsClassMethod_46;
#line 3597 "hlds.make_hlds.add_pred.c"
            MR_Word hlds__make_hlds__add_pred__PredProcId_47;
#line 3599 "hlds.make_hlds.add_pred.c"
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
#line 3617 "hlds.make_hlds.add_pred.c"
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
#line 3674 "hlds.make_hlds.add_pred.c"
          }
#line 3676 "hlds.make_hlds.add_pred.c"
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
#line 3733 "hlds.make_hlds.add_pred.c"
      }
#line 100 "add_pred.m"
  }
#line 33 "add_pred.m"
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
