/*
** Automatically generated from `add_pred.m'
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
#include "cord.mih"
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
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
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




#line 147 "hlds.make_hlds.add_pred.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pred__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_marker_0;

#line 605 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__unqualified_pred_error_5_p_0(
#line 605 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredName_6,
#line 605 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__Arity_7,
#line 605 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_8,
#line 605 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_13,
#line 605 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_14);

#line 584 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__unspecified_det_for_method_6_p_0(
#line 584 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Name_7,
#line 584 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__Arity_8,
#line 584 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_9,
#line 584 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_10,
#line 584 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_15,
#line 584 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_16);

#line 565 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__unspecified_det_for_local_6_p_0(
#line 565 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Name_7,
#line 565 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__Arity_8,
#line 565 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_9,
#line 565 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_10,
#line 565 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_18,
#line 565 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_19);

#line 525 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__preds_do_add_implicit_12_p_0(
#line 525 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ModuleInfo_13,
#line 525 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ModuleName_14,
#line 525 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredName_15,
#line 525 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__Arity_16,
#line 525 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_17,
#line 525 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Status_18,
#line 525 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_19,
#line 525 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Origin_20,
#line 525 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ClausesInfo_21,
#line 525 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__PredId_22,
#line 525 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_PredicateTable_0_41,
#line 525 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_PredicateTable_42);

#line 447 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__module_do_add_mode_11_p_0(
#line 447 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__InstVarSet_12,
#line 447 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__Arity_13,
#line 447 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Modes_14,
#line 447 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__MaybeDet_15,
#line 447 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__IsClassMethod_16,
#line 447 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__MContext_17,
#line 447 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_31,
#line 447 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_32,
#line 447 "add_pred.m"
  MR_Integer * hlds__make_hlds__add_pred__ProcId_19,
#line 447 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_33,
#line 447 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_34);

#line 236 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__add_builtin_5_p_0(
#line 236 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredId_6,
#line 236 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Types_7,
#line 236 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__CompilationTarget_8,
#line 236 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_61,
#line 236 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_62);

#line 187 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__add_new_pred_15_p_0_1(
#line 187 "add_pred.m"
  MR_Box hlds__make_hlds__add_pred__closure_arg,
#line 187 "add_pred.m"
  MR_Box hlds__make_hlds__add_pred__wrapper_arg_1,
#line 187 "add_pred.m"
  MR_Box hlds__make_hlds__add_pred__wrapper_arg_2,
#line 187 "add_pred.m"
  MR_Box * hlds__make_hlds__add_pred__wrapper_arg_3);

#line 148 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__add_new_pred_15_p_0(
#line 148 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__TVarSet_16,
#line 148 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ExistQVars_17,
#line 148 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredName_18,
#line 148 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Types_19,
#line 148 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Purity_20,
#line 148 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ClassContext_21,
#line 148 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Markers0_22,
#line 148 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_23,
#line 148 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ItemStatus_24,
#line 148 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__NeedQual_25,
#line 148 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_26,
#line 148 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_60,
#line 148 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_61,
#line 148 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_62,
#line 148 "add_pred.m"
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
    ((MR_Box) ((MR_Integer) 168)),
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



#line 624 "hlds.make_hlds.add_pred.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pred__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_marker_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_marker_0
  }
};

#line 605 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__unqualified_pred_error_5_p_0(
#line 605 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredName_6,
#line 605 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__Arity_7,
#line 605 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_8,
#line 605 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_13,
#line 605 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_14)
#line 605 "add_pred.m"
{
#line 608 "add_pred.m"
  {
#line 608 "add_pred.m"
    MR_bool hlds__make_hlds__add_pred__succeeded;
#line 608 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Pieces_10;
#line 608 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Msg_11;
#line 608 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Spec_12;
#line 608 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_17_17;
#line 608 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_18_18;
#line 608 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_19_19;
#line 608 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_24_24;
#line 608 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_25_25;
#line 608 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_29_29;

#line 610 "add_pred.m"
    {
#line 610 "add_pred.m"
      hlds__make_hlds__add_pred__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 610 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_19_19, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredName_6));
#line 610 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_19_19, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Arity_7));
#line 610 "add_pred.m"
    }
#line 610 "add_pred.m"
    {
#line 610 "add_pred.m"
      hlds__make_hlds__add_pred__V_18_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 610 "add_pred.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_18_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 610 "add_pred.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_18_18, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_19_19));
#line 610 "add_pred.m"
    }
#line 610 "add_pred.m"
    {
#line 610 "add_pred.m"
      hlds__make_hlds__add_pred__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 610 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_17_17, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_18_18));
#line 610 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[39])));
#line 610 "add_pred.m"
    }
#line 609 "add_pred.m"
    {
#line 609 "add_pred.m"
      hlds__make_hlds__add_pred__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 609 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[37])));
#line 609 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Pieces_10, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_17_17));
#line 609 "add_pred.m"
    }
#line 612 "add_pred.m"
    {
#line 612 "add_pred.m"
      hlds__make_hlds__add_pred__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 612 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_25_25, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Pieces_10));
#line 612 "add_pred.m"
    }
#line 612 "add_pred.m"
    {
#line 612 "add_pred.m"
      hlds__make_hlds__add_pred__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 612 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_24_24, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_25_25));
#line 612 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 612 "add_pred.m"
    }
#line 612 "add_pred.m"
    {
#line 612 "add_pred.m"
      hlds__make_hlds__add_pred__Msg_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 612 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_11, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Context_8));
#line 612 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_11, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_24_24));
#line 612 "add_pred.m"
    }
#line 613 "add_pred.m"
    {
#line 613 "add_pred.m"
      hlds__make_hlds__add_pred__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 613 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_29_29, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Msg_11));
#line 613 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 613 "add_pred.m"
    }
#line 613 "add_pred.m"
    {
#line 613 "add_pred.m"
      hlds__make_hlds__add_pred__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 613 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 613 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 613 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_12, 2) = ((MR_Box) (hlds__make_hlds__add_pred__V_29_29));
#line 613 "add_pred.m"
    }
#line 614 "add_pred.m"
    {
#line 614 "add_pred.m"
      MR_Word base;
#line 614 "add_pred.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 614 "add_pred.m"
      *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_14 = base;
#line 614 "add_pred.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Spec_12));
#line 614 "add_pred.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_13));
#line 614 "add_pred.m"
    }
#line 608 "add_pred.m"
  }
#line 605 "add_pred.m"
}

#line 584 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__unspecified_det_for_method_6_p_0(
#line 584 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Name_7,
#line 584 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__Arity_8,
#line 584 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_9,
#line 584 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_10,
#line 584 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_15,
#line 584 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_16)
#line 584 "add_pred.m"
{
#line 587 "add_pred.m"
  {
#line 587 "add_pred.m"
    MR_bool hlds__make_hlds__add_pred__succeeded;
#line 587 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Pieces_12;
#line 587 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Msg_13;
#line 587 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Spec_14;
#line 587 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_19_19;
#line 587 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_22_22;
#line 587 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_23_23;
#line 587 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_24_24;
#line 587 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_25_25;
#line 587 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_26_26;
#line 587 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_31_31;
#line 587 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_32_32;
#line 587 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_36_36;

#line 589 "add_pred.m"
    {
#line 589 "add_pred.m"
      hlds__make_hlds__add_pred__V_23_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 589 "add_pred.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_23_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 589 "add_pred.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_23_23, 1) = ((MR_Box) (hlds__make_hlds__add_pred__PredOrFunc_9));
#line 589 "add_pred.m"
    }
#line 590 "add_pred.m"
    {
#line 590 "add_pred.m"
      hlds__make_hlds__add_pred__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 590 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_26_26, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Name_7));
#line 590 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_26_26, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Arity_8));
#line 590 "add_pred.m"
    }
#line 590 "add_pred.m"
    {
#line 590 "add_pred.m"
      hlds__make_hlds__add_pred__V_25_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 590 "add_pred.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_25_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 590 "add_pred.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_25_25, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_26_26));
#line 590 "add_pred.m"
    }
#line 590 "add_pred.m"
    {
#line 590 "add_pred.m"
      hlds__make_hlds__add_pred__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 590 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_24_24, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_25_25));
#line 590 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[32])));
#line 590 "add_pred.m"
    }
#line 589 "add_pred.m"
    {
#line 589 "add_pred.m"
      hlds__make_hlds__add_pred__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 589 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_22_22, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_23_23));
#line 589 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_22_22, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_24_24));
#line 589 "add_pred.m"
    }
#line 589 "add_pred.m"
    {
#line 589 "add_pred.m"
      hlds__make_hlds__add_pred__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 589 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_19_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[36])));
#line 589 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_19_19, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_22_22));
#line 589 "add_pred.m"
    }
#line 588 "add_pred.m"
    {
#line 588 "add_pred.m"
      hlds__make_hlds__add_pred__Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 588 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Pieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[35])));
#line 588 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Pieces_12, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_19_19));
#line 588 "add_pred.m"
    }
#line 591 "add_pred.m"
    {
#line 591 "add_pred.m"
      hlds__make_hlds__add_pred__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 591 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_32_32, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Pieces_12));
#line 591 "add_pred.m"
    }
#line 591 "add_pred.m"
    {
#line 591 "add_pred.m"
      hlds__make_hlds__add_pred__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 591 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_31_31, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_32_32));
#line 591 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 591 "add_pred.m"
    }
#line 591 "add_pred.m"
    {
#line 591 "add_pred.m"
      hlds__make_hlds__add_pred__Msg_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 591 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_13, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Context_10));
#line 591 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_13, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_31_31));
#line 591 "add_pred.m"
    }
#line 592 "add_pred.m"
    {
#line 592 "add_pred.m"
      hlds__make_hlds__add_pred__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 592 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_36_36, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Msg_13));
#line 592 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 592 "add_pred.m"
    }
#line 592 "add_pred.m"
    {
#line 592 "add_pred.m"
      hlds__make_hlds__add_pred__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 592 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 592 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 592 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_14, 2) = ((MR_Box) (hlds__make_hlds__add_pred__V_36_36));
#line 592 "add_pred.m"
    }
#line 593 "add_pred.m"
    {
#line 593 "add_pred.m"
      MR_Word base;
#line 593 "add_pred.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 593 "add_pred.m"
      *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_16 = base;
#line 593 "add_pred.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Spec_14));
#line 593 "add_pred.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_15));
#line 593 "add_pred.m"
    }
#line 587 "add_pred.m"
  }
#line 584 "add_pred.m"
}

#line 565 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__unspecified_det_for_local_6_p_0(
#line 565 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Name_7,
#line 565 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__Arity_8,
#line 565 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_9,
#line 565 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_10,
#line 565 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_18,
#line 565 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_19)
#line 565 "add_pred.m"
{
#line 568 "add_pred.m"
  {
#line 568 "add_pred.m"
    MR_bool hlds__make_hlds__add_pred__succeeded;
#line 568 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__MainPieces_12;
#line 568 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__InnerComponents_14;
#line 568 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Msg_15;
#line 568 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Spec_17;
#line 568 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_22_22;
#line 568 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_23_23;
#line 568 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_24_24;
#line 568 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_56_56;
#line 568 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_60_60;
#line 568 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_61_61;
#line 568 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_70_70;

#line 570 "add_pred.m"
    {
#line 570 "add_pred.m"
      hlds__make_hlds__add_pred__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 570 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_24_24, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredOrFunc_9));
#line 570 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_24_24, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Name_7));
#line 570 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_24_24, 2) = ((MR_Box) (hlds__make_hlds__add_pred__Arity_8));
#line 570 "add_pred.m"
    }
#line 570 "add_pred.m"
    {
#line 570 "add_pred.m"
      hlds__make_hlds__add_pred__V_23_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 570 "add_pred.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_23_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 570 "add_pred.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_23_23, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_24_24));
#line 570 "add_pred.m"
    }
#line 570 "add_pred.m"
    {
#line 570 "add_pred.m"
      hlds__make_hlds__add_pred__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 570 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_22_22, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_23_23));
#line 570 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[32])));
#line 570 "add_pred.m"
    }
#line 569 "add_pred.m"
    {
#line 569 "add_pred.m"
      hlds__make_hlds__add_pred__MainPieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 569 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__MainPieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[33])));
#line 569 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__MainPieces_12, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_22_22));
#line 569 "add_pred.m"
    }
#line 577 "add_pred.m"
    {
#line 577 "add_pred.m"
      hlds__make_hlds__add_pred__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 577 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_56_56, 0) = ((MR_Box) (hlds__make_hlds__add_pred__MainPieces_12));
#line 577 "add_pred.m"
    }
#line 577 "add_pred.m"
    {
#line 577 "add_pred.m"
      hlds__make_hlds__add_pred__InnerComponents_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 577 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__InnerComponents_14, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_56_56));
#line 577 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__InnerComponents_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[34])));
#line 577 "add_pred.m"
    }
#line 579 "add_pred.m"
    {
#line 579 "add_pred.m"
      hlds__make_hlds__add_pred__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 579 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_61_61, 0) = ((MR_Box) (((MR_Integer) 168 | (((MR_Integer) 0 << (MR_Integer) 10)))));
#line 579 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_61_61, 1) = ((MR_Box) (hlds__make_hlds__add_pred__InnerComponents_14));
#line 579 "add_pred.m"
    }
#line 579 "add_pred.m"
    {
#line 579 "add_pred.m"
      hlds__make_hlds__add_pred__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 579 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_60_60, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_61_61));
#line 579 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 579 "add_pred.m"
    }
#line 578 "add_pred.m"
    {
#line 578 "add_pred.m"
      hlds__make_hlds__add_pred__Msg_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 578 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_15, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Context_10));
#line 578 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_15, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_60_60));
#line 578 "add_pred.m"
    }
#line 581 "add_pred.m"
    {
#line 581 "add_pred.m"
      hlds__make_hlds__add_pred__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 581 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_70_70, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Msg_15));
#line 581 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 581 "add_pred.m"
    }
#line 581 "add_pred.m"
    {
#line 581 "add_pred.m"
      hlds__make_hlds__add_pred__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 581 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_3[0])));
#line 581 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 581 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_17, 2) = ((MR_Box) (hlds__make_hlds__add_pred__V_70_70));
#line 581 "add_pred.m"
    }
#line 582 "add_pred.m"
    {
#line 582 "add_pred.m"
      MR_Word base;
#line 582 "add_pred.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 582 "add_pred.m"
      *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_19 = base;
#line 582 "add_pred.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Spec_17));
#line 582 "add_pred.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_18));
#line 582 "add_pred.m"
    }
#line 568 "add_pred.m"
  }
#line 565 "add_pred.m"
}

#line 525 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__preds_do_add_implicit_12_p_0(
#line 525 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ModuleInfo_13,
#line 525 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ModuleName_14,
#line 525 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredName_15,
#line 525 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__Arity_16,
#line 525 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_17,
#line 525 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Status_18,
#line 525 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_19,
#line 525 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Origin_20,
#line 525 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ClausesInfo_21,
#line 525 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__PredId_22,
#line 525 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_PredicateTable_0_41,
#line 525 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_PredicateTable_42)
#line 525 "add_pred.m"
{
#line 531 "add_pred.m"
  {
#line 531 "add_pred.m"
    MR_bool hlds__make_hlds__add_pred__succeeded;
#line 531 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_55_55 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 531 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_58_58;
#line 531 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TVarSet0_24;
#line 531 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TypeVars_25;
#line 531 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TVarSet_26;
#line 531 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Types_27;
#line 531 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Proofs_28;
#line 531 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__ConstraintMap_29;
#line 531 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Markers0_32;
#line 531 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__VarNameRemap_33;
#line 531 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredInfo0_34;
#line 531 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Markers_35;
#line 531 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredInfo_36;
#line 531 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredIds_37;
#line 531 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_44_44;

#line 532 "add_pred.m"
    {
#line 532 "add_pred.m"
      mercury__varset__init_1_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_55_55, &hlds__make_hlds__add_pred__TVarSet0_24);
    }
#line 533 "add_pred.m"
    {
#line 533 "add_pred.m"
      parse_tree__prog_util__make_n_fresh_vars_5_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_55_55, (MR_String) "T", hlds__make_hlds__add_pred__Arity_16, &hlds__make_hlds__add_pred__TypeVars_25, hlds__make_hlds__add_pred__TVarSet0_24, &hlds__make_hlds__add_pred__TVarSet_26);
    }
#line 534 "add_pred.m"
    {
#line 534 "add_pred.m"
      hlds__make_hlds__add_pred__V_44_44 = mercury__map__init_0_f_0((MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
    }
#line 534 "add_pred.m"
    {
#line 534 "add_pred.m"
      parse_tree__prog_type__var_list_to_type_list_3_p_0(hlds__make_hlds__add_pred__V_44_44, hlds__make_hlds__add_pred__TypeVars_25, &hlds__make_hlds__add_pred__Types_27);
    }
#line 1223 "hlds.make_hlds.add_pred.c"
    hlds__make_hlds__add_pred__TypeCtorInfo_58_58 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 535 "add_pred.m"
    {
#line 535 "add_pred.m"
      mercury__map__init_1_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_58_58, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, &hlds__make_hlds__add_pred__Proofs_28);
    }
#line 536 "add_pred.m"
    {
#line 536 "add_pred.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, hlds__make_hlds__add_pred__TypeCtorInfo_58_58, &hlds__make_hlds__add_pred__ConstraintMap_29);
    }
#line 543 "add_pred.m"
    {
#line 543 "add_pred.m"
      hlds__hlds_pred__init_markers_1_p_0(&hlds__make_hlds__add_pred__Markers0_32);
    }
#line 544 "add_pred.m"
    {
#line 544 "add_pred.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, &hlds__make_hlds__add_pred__VarNameRemap_33);
    }
#line 545 "add_pred.m"
    {
#line 545 "add_pred.m"
      hlds__hlds_pred__pred_info_init_18_p_0(hlds__make_hlds__add_pred__ModuleName_14, hlds__make_hlds__add_pred__PredName_15, hlds__make_hlds__add_pred__Arity_16, hlds__make_hlds__add_pred__PredOrFunc_17, hlds__make_hlds__add_pred__Context_19, hlds__make_hlds__add_pred__Origin_20, hlds__make_hlds__add_pred__Status_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_pred__Markers0_32, hlds__make_hlds__add_pred__Types_27, hlds__make_hlds__add_pred__TVarSet_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[22], hlds__make_hlds__add_pred__Proofs_28, hlds__make_hlds__add_pred__ConstraintMap_29, hlds__make_hlds__add_pred__ClausesInfo_21, hlds__make_hlds__add_pred__VarNameRemap_33, &hlds__make_hlds__add_pred__PredInfo0_34);
    }
#line 549 "add_pred.m"
    {
#line 549 "add_pred.m"
      hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 2, hlds__make_hlds__add_pred__Markers0_32, &hlds__make_hlds__add_pred__Markers_35);
    }
#line 550 "add_pred.m"
    {
#line 550 "add_pred.m"
      hlds__hlds_pred__pred_info_set_markers_3_p_0(hlds__make_hlds__add_pred__Markers_35, hlds__make_hlds__add_pred__PredInfo0_34, &hlds__make_hlds__add_pred__PredInfo_36);
    }
#line 551 "add_pred.m"
    {
#line 551 "add_pred.m"
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredicateTable_0_41, (MR_Integer) 0, hlds__make_hlds__add_pred__PredOrFunc_17, hlds__make_hlds__add_pred__PredName_15, hlds__make_hlds__add_pred__Arity_16, &hlds__make_hlds__add_pred__PredIds_37);
    }
#line 558 "add_pred.m"
    if ((hlds__make_hlds__add_pred__PredIds_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 554 "add_pred.m"
      {
#line 554 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__MQInfo_38;

#line 555 "add_pred.m"
        {
#line 555 "add_pred.m"
          hlds__hlds_module__module_info_get_partial_qualifier_info_2_p_0(hlds__make_hlds__add_pred__ModuleInfo_13, &hlds__make_hlds__add_pred__MQInfo_38);
        }
#line 556 "add_pred.m"
        {
#line 556 "add_pred.m"
          hlds__pred_table__predicate_table_insert_qual_6_p_0(hlds__make_hlds__add_pred__PredInfo_36, (MR_Integer) 1, hlds__make_hlds__add_pred__MQInfo_38, hlds__make_hlds__add_pred__PredId_22, hlds__make_hlds__add_pred__STATE_VARIABLE_PredicateTable_0_41, hlds__make_hlds__add_pred__STATE_VARIABLE_PredicateTable_42);
#line 556 "add_pred.m"
          return;
        }
#line 554 "add_pred.m"
      }
#line 558 "add_pred.m"
    else
#line 559 "add_pred.m"
      {
#line 560 "add_pred.m"
        {
#line 560 "add_pred.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_pred", (MR_String) "predicate \140hlds.make_hlds.add_pred.preds_do_add_implicit\'/12", (MR_String) "search succeeded");
#line 560 "add_pred.m"
          return;
        }
#line 559 "add_pred.m"
      }
#line 531 "add_pred.m"
  }
#line 525 "add_pred.m"
}

#line 447 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__module_do_add_mode_11_p_0(
#line 447 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__InstVarSet_12,
#line 447 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__Arity_13,
#line 447 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Modes_14,
#line 447 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__MaybeDet_15,
#line 447 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__IsClassMethod_16,
#line 447 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__MContext_17,
#line 447 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_31,
#line 447 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_32,
#line 447 "add_pred.m"
  MR_Integer * hlds__make_hlds__add_pred__ProcId_19,
#line 447 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_33,
#line 447 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_34)
#line 447 "add_pred.m"
{
#line 453 "add_pred.m"
  {
#line 453 "add_pred.m"
    MR_bool hlds__make_hlds__add_pred__succeeded;
#line 453 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__DetismDecl_21;
#line 453 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_38_38;

#line 480 "add_pred.m"
    if ((hlds__make_hlds__add_pred__MaybeDet_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 456 "add_pred.m"
      {
#line 456 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__ImportStatus_22;
#line 456 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__PredOrFunc_23;
#line 456 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__PredModule_24;
#line 456 "add_pred.m"
        MR_String hlds__make_hlds__add_pred__PredName_25;
#line 456 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__PredSymName_26;

#line 457 "add_pred.m"
        hlds__make_hlds__add_pred__DetismDecl_21 = (MR_Integer) 2;
#line 458 "add_pred.m"
        {
#line 458 "add_pred.m"
          hlds__hlds_pred__pred_info_get_import_status_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_31, &hlds__make_hlds__add_pred__ImportStatus_22);
        }
#line 459 "add_pred.m"
        {
#line 459 "add_pred.m"
          hlds__make_hlds__add_pred__PredOrFunc_23 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_31);
        }
#line 460 "add_pred.m"
        {
#line 460 "add_pred.m"
          hlds__make_hlds__add_pred__PredModule_24 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_31);
        }
#line 461 "add_pred.m"
        {
#line 461 "add_pred.m"
          hlds__make_hlds__add_pred__PredName_25 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_31);
        }
#line 462 "add_pred.m"
        {
#line 462 "add_pred.m"
          hlds__make_hlds__add_pred__PredSymName_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "add_pred.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__PredSymName_26, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredModule_24));
#line 462 "add_pred.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__PredSymName_26, 1) = ((MR_Box) (hlds__make_hlds__add_pred__PredName_25));
#line 462 "add_pred.m"
        }
#line 467 "add_pred.m"
        if ((hlds__make_hlds__add_pred__IsClassMethod_16 == (MR_Integer) 0))
#line 468 "add_pred.m"
          {
#line 468 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__IsExported_27;

#line 469 "add_pred.m"
            {
#line 469 "add_pred.m"
              hlds__make_hlds__add_pred__IsExported_27 = hlds__hlds_pred__status_is_exported_1_f_0(hlds__make_hlds__add_pred__ImportStatus_22);
            }
#line 474 "add_pred.m"
            if ((hlds__make_hlds__add_pred__IsExported_27 == (MR_Integer) 0))
#line 476 "add_pred.m"
              {
#line 476 "add_pred.m"
                hlds__make_hlds__add_pred__unspecified_det_for_local_6_p_0(hlds__make_hlds__add_pred__PredSymName_26, hlds__make_hlds__add_pred__Arity_13, hlds__make_hlds__add_pred__PredOrFunc_23, hlds__make_hlds__add_pred__MContext_17, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_33, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_34);
              }
#line 474 "add_pred.m"
            else
#line 598 "add_pred.m"
              {
#line 598 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__Pieces_48;
#line 598 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__Msg_49;
#line 598 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__Spec_50;
#line 598 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__V_53_53;
#line 598 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__V_54_54;
#line 598 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__V_55_55;
#line 598 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__V_56_56;
#line 598 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__V_57_57;
#line 598 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__V_62_62;
#line 598 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__V_63_63;
#line 598 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__V_67_67;

#line 600 "add_pred.m"
                {
#line 600 "add_pred.m"
                  hlds__make_hlds__add_pred__V_54_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 600 "add_pred.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_54_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 600 "add_pred.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_54_54, 1) = ((MR_Box) (hlds__make_hlds__add_pred__PredOrFunc_23));
#line 600 "add_pred.m"
                }
#line 600 "add_pred.m"
                {
#line 600 "add_pred.m"
                  hlds__make_hlds__add_pred__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 600 "add_pred.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_57_57, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredSymName_26));
#line 600 "add_pred.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_57_57, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Arity_13));
#line 600 "add_pred.m"
                }
#line 600 "add_pred.m"
                {
#line 600 "add_pred.m"
                  hlds__make_hlds__add_pred__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 600 "add_pred.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 600 "add_pred.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_56_56, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_57_57));
#line 600 "add_pred.m"
                }
#line 600 "add_pred.m"
                {
#line 600 "add_pred.m"
                  hlds__make_hlds__add_pred__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 600 "add_pred.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_55_55, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_56_56));
#line 600 "add_pred.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[32])));
#line 600 "add_pred.m"
                }
#line 600 "add_pred.m"
                {
#line 600 "add_pred.m"
                  hlds__make_hlds__add_pred__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 600 "add_pred.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_53_53, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_54_54));
#line 600 "add_pred.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_53_53, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_55_55));
#line 600 "add_pred.m"
                }
#line 599 "add_pred.m"
                {
#line 599 "add_pred.m"
                  hlds__make_hlds__add_pred__Pieces_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 599 "add_pred.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Pieces_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[30])));
#line 599 "add_pred.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Pieces_48, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_53_53));
#line 599 "add_pred.m"
                }
#line 601 "add_pred.m"
                {
#line 601 "add_pred.m"
                  hlds__make_hlds__add_pred__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 601 "add_pred.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_63_63, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Pieces_48));
#line 601 "add_pred.m"
                }
#line 601 "add_pred.m"
                {
#line 601 "add_pred.m"
                  hlds__make_hlds__add_pred__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 601 "add_pred.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_62_62, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_63_63));
#line 601 "add_pred.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 601 "add_pred.m"
                }
#line 601 "add_pred.m"
                {
#line 601 "add_pred.m"
                  hlds__make_hlds__add_pred__Msg_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 601 "add_pred.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_49, 0) = ((MR_Box) (hlds__make_hlds__add_pred__MContext_17));
#line 601 "add_pred.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_49, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_62_62));
#line 601 "add_pred.m"
                }
#line 602 "add_pred.m"
                {
#line 602 "add_pred.m"
                  hlds__make_hlds__add_pred__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 602 "add_pred.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_67_67, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Msg_49));
#line 602 "add_pred.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 602 "add_pred.m"
                }
#line 602 "add_pred.m"
                {
#line 602 "add_pred.m"
                  hlds__make_hlds__add_pred__Spec_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 602 "add_pred.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 602 "add_pred.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 602 "add_pred.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_50, 2) = ((MR_Box) (hlds__make_hlds__add_pred__V_67_67));
#line 602 "add_pred.m"
                }
#line 603 "add_pred.m"
                {
#line 603 "add_pred.m"
                  MR_Word base;
#line 603 "add_pred.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 603 "add_pred.m"
                  *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_34 = base;
#line 603 "add_pred.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Spec_50));
#line 603 "add_pred.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_33));
#line 603 "add_pred.m"
                }
#line 598 "add_pred.m"
              }
#line 468 "add_pred.m"
          }
#line 467 "add_pred.m"
        else
#line 465 "add_pred.m"
          {
#line 465 "add_pred.m"
            hlds__make_hlds__add_pred__unspecified_det_for_method_6_p_0(hlds__make_hlds__add_pred__PredSymName_26, hlds__make_hlds__add_pred__Arity_13, hlds__make_hlds__add_pred__PredOrFunc_23, hlds__make_hlds__add_pred__MContext_17, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_33, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_34);
          }
#line 456 "add_pred.m"
      }
#line 480 "add_pred.m"
    else
#line 481 "add_pred.m"
      {
#line 482 "add_pred.m"
        hlds__make_hlds__add_pred__DetismDecl_21 = (MR_Integer) 0;
#line 482 "add_pred.m"
        *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_34 = hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_33;
#line 481 "add_pred.m"
      }
#line 488 "add_pred.m"
    {
#line 488 "add_pred.m"
      hlds__make_hlds__add_pred__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 488 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_38_38, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Modes_14));
#line 488 "add_pred.m"
    }
#line 488 "add_pred.m"
    {
#line 488 "add_pred.m"
      hlds__make_hlds__add_pred__do_add_new_proc_13_p_0(hlds__make_hlds__add_pred__InstVarSet_12, hlds__make_hlds__add_pred__Arity_13, hlds__make_hlds__add_pred__Modes_14, hlds__make_hlds__add_pred__V_38_38, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_pred__DetismDecl_21, hlds__make_hlds__add_pred__MaybeDet_15, hlds__make_hlds__add_pred__MContext_17, (MR_Integer) 1, (MR_Integer) 1, hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_31, hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_32, hlds__make_hlds__add_pred__ProcId_19);
#line 488 "add_pred.m"
      return;
    }
#line 453 "add_pred.m"
  }
#line 447 "add_pred.m"
}

#line 236 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__add_builtin_5_p_0(
#line 236 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredId_6,
#line 236 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Types_7,
#line 236 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__CompilationTarget_8,
#line 236 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_61,
#line 236 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_62)
#line 236 "add_pred.m"
{
#line 239 "add_pred.m"
  {
#line 239 "add_pred.m"
    MR_bool hlds__make_hlds__add_pred__succeeded;
#line 239 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_133_133;
#line 239 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TypeInfo_134_134;
#line 239 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Module_10;
#line 239 "add_pred.m"
    MR_String hlds__make_hlds__add_pred__Name_11;
#line 239 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Context_12;
#line 239 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__ClausesInfo0_13;
#line 239 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__VarSet0_14;
#line 239 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__HeadVars_15;
#line 239 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__HeadVarList_16;
#line 239 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__GoalInfo0_17;
#line 239 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__NonLocals_18;
#line 239 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__GoalInfo1_19;
#line 239 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__GoalExpr_20;
#line 239 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__GoalInfo_21;
#line 239 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__ExtraVars_22;
#line 239 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__ExtraTypes_23;
#line 239 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__VarSet_24;
#line 239 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Stub_25;
#line 239 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__VarTypes_52;
#line 239 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TVarNameMap_53;
#line 239 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__RttiVarMaps_54;
#line 239 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Markers_60;
#line 239 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_63_63;
#line 239 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_118_118;
#line 239 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_119_119;
#line 239 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_121_121;
#line 239 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_122_122;
#line 254 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_138_138;

#line 240 "add_pred.m"
    {
#line 240 "add_pred.m"
      hlds__make_hlds__add_pred__Module_10 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_61);
    }
#line 241 "add_pred.m"
    {
#line 241 "add_pred.m"
      hlds__make_hlds__add_pred__Name_11 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_61);
    }
#line 242 "add_pred.m"
    {
#line 242 "add_pred.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_61, &hlds__make_hlds__add_pred__Context_12);
    }
#line 243 "add_pred.m"
    {
#line 243 "add_pred.m"
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_61, &hlds__make_hlds__add_pred__ClausesInfo0_13);
    }
#line 244 "add_pred.m"
    {
#line 244 "add_pred.m"
      hlds__hlds_clauses__clauses_info_get_varset_2_p_0(hlds__make_hlds__add_pred__ClausesInfo0_13, &hlds__make_hlds__add_pred__VarSet0_14);
    }
#line 245 "add_pred.m"
    {
#line 245 "add_pred.m"
      hlds__hlds_clauses__clauses_info_get_headvars_2_p_0(hlds__make_hlds__add_pred__ClausesInfo0_13, &hlds__make_hlds__add_pred__HeadVars_15);
    }
#line 248 "add_pred.m"
    {
#line 248 "add_pred.m"
      hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(hlds__make_hlds__add_pred__ClausesInfo0_13, &hlds__make_hlds__add_pred__HeadVarList_16);
    }
#line 250 "add_pred.m"
    {
#line 250 "add_pred.m"
      hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__add_pred__Context_12, &hlds__make_hlds__add_pred__GoalInfo0_17);
    }
#line 1716 "hlds.make_hlds.add_pred.c"
    hlds__make_hlds__add_pred__TypeCtorInfo_133_133 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1718 "hlds.make_hlds.add_pred.c"
    hlds__make_hlds__add_pred__TypeInfo_134_134 = (MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[0];
#line 251 "add_pred.m"
    {
#line 251 "add_pred.m"
      hlds__make_hlds__add_pred__V_63_63 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0(hlds__make_hlds__add_pred__TypeInfo_134_134, hlds__make_hlds__add_pred__HeadVars_15);
    }
#line 251 "add_pred.m"
    {
#line 251 "add_pred.m"
      hlds__make_hlds__add_pred__NonLocals_18 = parse_tree__set_of_var__list_to_set_1_f_0(hlds__make_hlds__add_pred__TypeCtorInfo_133_133, hlds__make_hlds__add_pred__V_63_63);
    }
#line 252 "add_pred.m"
    {
#line 252 "add_pred.m"
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(hlds__make_hlds__add_pred__NonLocals_18, hlds__make_hlds__add_pred__GoalInfo0_17, &hlds__make_hlds__add_pred__GoalInfo1_19);
    }
#line 254 "add_pred.m"
    {
#line 254 "add_pred.m"
      hlds__make_hlds__add_pred__V_138_138 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
#line 254 "add_pred.m"
    {
#line 254 "add_pred.m"
      hlds__make_hlds__add_pred__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__make_hlds__add_pred__Module_10, hlds__make_hlds__add_pred__V_138_138);
    }
#line 254 "add_pred.m"
    if (hlds__make_hlds__add_pred__succeeded)
#line 259 "add_pred.m"
      {
#line 259 "add_pred.m"
        if ((strcmp(hlds__make_hlds__add_pred__Name_11, (MR_String) "builtin_compound_eq") == 0))
#line 256 "add_pred.m"
          hlds__make_hlds__add_pred__succeeded = MR_TRUE;
#line 259 "add_pred.m"
        else
#line 259 "add_pred.m"
          if ((strcmp(hlds__make_hlds__add_pred__Name_11, (MR_String) "builtin_compound_lt") == 0))
#line 257 "add_pred.m"
            hlds__make_hlds__add_pred__succeeded = MR_TRUE;
#line 259 "add_pred.m"
          else
#line 259 "add_pred.m"
            if ((((strcmp(hlds__make_hlds__add_pred__Name_11, (MR_String) "store_at_ref") == 0)) || ((strcmp(hlds__make_hlds__add_pred__Name_11, (MR_String) "store_at_ref_impure") == 0))))
#line 265 "add_pred.m"
              if ((hlds__make_hlds__add_pred__CompilationTarget_8 == (MR_Integer) 2))
#line 265 "add_pred.m"
                hlds__make_hlds__add_pred__succeeded = MR_TRUE;
#line 265 "add_pred.m"
              else
#line 265 "add_pred.m"
                if ((hlds__make_hlds__add_pred__CompilationTarget_8 == (MR_Integer) 4))
#line 266 "add_pred.m"
                  hlds__make_hlds__add_pred__succeeded = MR_TRUE;
#line 265 "add_pred.m"
                else
#line 265 "add_pred.m"
                  if ((hlds__make_hlds__add_pred__CompilationTarget_8 == (MR_Integer) 3))
#line 264 "add_pred.m"
                    hlds__make_hlds__add_pred__succeeded = MR_TRUE;
#line 265 "add_pred.m"
                  else
#line 265 "add_pred.m"
                    hlds__make_hlds__add_pred__succeeded = MR_FALSE;
#line 259 "add_pred.m"
            else
#line 259 "add_pred.m"
              hlds__make_hlds__add_pred__succeeded = MR_FALSE;
#line 259 "add_pred.m"
      }
#line 276 "add_pred.m"
    if (hlds__make_hlds__add_pred__succeeded)
#line 270 "add_pred.m"
      {
#line 270 "add_pred.m"
        hlds__make_hlds__add_pred__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_5[1]);
#line 271 "add_pred.m"
        hlds__make_hlds__add_pred__GoalInfo_21 = hlds__make_hlds__add_pred__GoalInfo1_19;
#line 272 "add_pred.m"
        hlds__make_hlds__add_pred__ExtraVars_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 273 "add_pred.m"
        hlds__make_hlds__add_pred__ExtraTypes_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 274 "add_pred.m"
        hlds__make_hlds__add_pred__VarSet_24 = hlds__make_hlds__add_pred__VarSet0_14;
#line 275 "add_pred.m"
        hlds__make_hlds__add_pred__Stub_25 = (MR_Integer) 1;
#line 270 "add_pred.m"
      }
#line 276 "add_pred.m"
    else
#line 319 "add_pred.m"
      {
#line 278 "add_pred.m"
        {
#line 278 "add_pred.m"
          MR_Word hlds__make_hlds__add_pred__V_139_139;

#line 278 "add_pred.m"
          {
#line 278 "add_pred.m"
            hlds__make_hlds__add_pred__V_139_139 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          }
#line 278 "add_pred.m"
          {
#line 278 "add_pred.m"
            hlds__make_hlds__add_pred__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__make_hlds__add_pred__Module_10, hlds__make_hlds__add_pred__V_139_139);
          }
#line 278 "add_pred.m"
          if (hlds__make_hlds__add_pred__succeeded)
#line 279 "add_pred.m"
            hlds__make_hlds__add_pred__succeeded = (strcmp(hlds__make_hlds__add_pred__Name_11, (MR_String) "trace_get_io_state") == 0);
#line 278 "add_pred.m"
        }
#line 280 "add_pred.m"
        if (!(hlds__make_hlds__add_pred__succeeded))
#line 281 "add_pred.m"
          {
#line 281 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_140_140;

#line 281 "add_pred.m"
            {
#line 281 "add_pred.m"
              hlds__make_hlds__add_pred__V_140_140 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
            }
#line 281 "add_pred.m"
            {
#line 281 "add_pred.m"
              hlds__make_hlds__add_pred__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__make_hlds__add_pred__Module_10, hlds__make_hlds__add_pred__V_140_140);
            }
#line 281 "add_pred.m"
            if (hlds__make_hlds__add_pred__succeeded)
#line 282 "add_pred.m"
              hlds__make_hlds__add_pred__succeeded = (strcmp(hlds__make_hlds__add_pred__Name_11, (MR_String) "unsafe_get_io_state") == 0);
#line 281 "add_pred.m"
          }
#line 319 "add_pred.m"
        if (hlds__make_hlds__add_pred__succeeded)
#line 285 "add_pred.m"
          {
#line 285 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__LHS_30;
#line 285 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__Unification_33;
#line 285 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__AssignExpr_36;
#line 285 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__GoalInfoWithZero_37;
#line 285 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__AssignGoal_38;
#line 285 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__CastExpr_39;
#line 285 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__GoalInfoWithZeroHeadVars_40;
#line 285 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__CastGoal_41;
#line 285 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__ConjExpr_42;
#line 285 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__ConjGoal_43;
#line 285 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_67_67;
#line 285 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_88_88;
#line 285 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_91_91;
#line 285 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_94_94;
#line 285 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_95_95;
#line 285 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_96_96;
#line 285 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_97_97;
#line 285 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_101_101;
#line 285 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_102_102;
#line 285 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_104_104;
#line 285 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_105_105;

#line 285 "add_pred.m"
            {
#line 285 "add_pred.m"
              mercury__varset__new_var_3_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_133_133, &hlds__make_hlds__add_pred__LHS_30, hlds__make_hlds__add_pred__VarSet0_14, &hlds__make_hlds__add_pred__VarSet_24);
            }
#line 286 "add_pred.m"
            {
#line 286 "add_pred.m"
              hlds__make_hlds__add_pred__ExtraVars_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 286 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__ExtraVars_22, 0) = ((MR_Box) (hlds__make_hlds__add_pred__LHS_30));
#line 286 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__ExtraVars_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 286 "add_pred.m"
            }
#line 287 "add_pred.m"
            {
#line 287 "add_pred.m"
              hlds__make_hlds__add_pred__V_67_67 = parse_tree__builtin_lib_types__int_type_0_f_0();
            }
#line 287 "add_pred.m"
            {
#line 287 "add_pred.m"
              hlds__make_hlds__add_pred__ExtraTypes_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 287 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__ExtraTypes_23, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_67_67));
#line 287 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__ExtraTypes_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 287 "add_pred.m"
            }
#line 295 "add_pred.m"
            {
#line 295 "add_pred.m"
              hlds__make_hlds__add_pred__Unification_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 295 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Unification_33, 0) = ((MR_Box) (hlds__make_hlds__add_pred__LHS_30));
#line 295 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Unification_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[23])));
#line 295 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Unification_33, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 295 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Unification_33, 3) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[27])));
#line 295 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Unification_33, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 295 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Unification_33, 5) = ((MR_Box) ((MR_Integer) 1));
#line 295 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Unification_33, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 295 "add_pred.m"
            }
#line 299 "add_pred.m"
            {
#line 299 "add_pred.m"
              hlds__make_hlds__add_pred__AssignExpr_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 299 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__AssignExpr_36, 0) = ((MR_Box) (hlds__make_hlds__add_pred__LHS_30));
#line 299 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__AssignExpr_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_5[3])));
#line 299 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__AssignExpr_36, 2) = ((MR_Box) (&hlds__make_hlds__add_pred_scalar_common_1[28]));
#line 299 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__AssignExpr_36, 3) = ((MR_Box) (hlds__make_hlds__add_pred__Unification_33));
#line 299 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__AssignExpr_36, 4) = ((MR_Box) (&hlds__make_hlds__add_pred_scalar_common_1[29]));
#line 299 "add_pred.m"
            }
#line 300 "add_pred.m"
            {
#line 300 "add_pred.m"
              hlds__make_hlds__add_pred__V_88_88 = parse_tree__set_of_var__make_singleton_1_f_0(hlds__make_hlds__add_pred__TypeCtorInfo_133_133, hlds__make_hlds__add_pred__LHS_30);
            }
#line 300 "add_pred.m"
            {
#line 300 "add_pred.m"
              hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(hlds__make_hlds__add_pred__V_88_88, hlds__make_hlds__add_pred__GoalInfo0_17, &hlds__make_hlds__add_pred__GoalInfoWithZero_37);
            }
#line 302 "add_pred.m"
            {
#line 302 "add_pred.m"
              hlds__make_hlds__add_pred__AssignGoal_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 302 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__AssignGoal_38, 0) = ((MR_Box) (hlds__make_hlds__add_pred__AssignExpr_36));
#line 302 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__AssignGoal_38, 1) = ((MR_Box) (hlds__make_hlds__add_pred__GoalInfoWithZero_37));
#line 302 "add_pred.m"
            }
#line 305 "add_pred.m"
            {
#line 305 "add_pred.m"
              hlds__make_hlds__add_pred__V_91_91 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pred__TypeInfo_134_134, hlds__make_hlds__add_pred__ExtraVars_22, hlds__make_hlds__add_pred__HeadVarList_16);
            }
#line 305 "add_pred.m"
            {
#line 305 "add_pred.m"
              hlds__make_hlds__add_pred__V_95_95 = parse_tree__prog_mode__in_mode_0_f_0();
            }
#line 305 "add_pred.m"
            {
#line 305 "add_pred.m"
              hlds__make_hlds__add_pred__V_97_97 = parse_tree__prog_mode__uo_mode_0_f_0();
            }
#line 305 "add_pred.m"
            {
#line 305 "add_pred.m"
              hlds__make_hlds__add_pred__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 305 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_96_96, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_97_97));
#line 305 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 305 "add_pred.m"
            }
#line 305 "add_pred.m"
            {
#line 305 "add_pred.m"
              hlds__make_hlds__add_pred__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 305 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_94_94, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_95_95));
#line 305 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_94_94, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_96_96));
#line 305 "add_pred.m"
            }
#line 304 "add_pred.m"
            {
#line 304 "add_pred.m"
              hlds__make_hlds__add_pred__CastExpr_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 304 "add_pred.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__CastExpr_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 304 "add_pred.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__CastExpr_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_2[3])));
#line 304 "add_pred.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__CastExpr_39, 2) = ((MR_Box) (hlds__make_hlds__add_pred__V_91_91));
#line 304 "add_pred.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__CastExpr_39, 3) = ((MR_Box) (hlds__make_hlds__add_pred__V_94_94));
#line 304 "add_pred.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__CastExpr_39, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 304 "add_pred.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__CastExpr_39, 5) = ((MR_Box) ((MR_Integer) 0));
#line 304 "add_pred.m"
            }
#line 308 "add_pred.m"
            {
#line 308 "add_pred.m"
              hlds__make_hlds__add_pred__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 308 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_102_102, 0) = ((MR_Box) (hlds__make_hlds__add_pred__LHS_30));
#line 308 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_102_102, 1) = ((MR_Box) (hlds__make_hlds__add_pred__HeadVarList_16));
#line 308 "add_pred.m"
            }
#line 308 "add_pred.m"
            {
#line 308 "add_pred.m"
              hlds__make_hlds__add_pred__V_101_101 = parse_tree__set_of_var__list_to_set_1_f_0(hlds__make_hlds__add_pred__TypeCtorInfo_133_133, hlds__make_hlds__add_pred__V_102_102);
            }
#line 307 "add_pred.m"
            {
#line 307 "add_pred.m"
              hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(hlds__make_hlds__add_pred__V_101_101, hlds__make_hlds__add_pred__GoalInfo0_17, &hlds__make_hlds__add_pred__GoalInfoWithZeroHeadVars_40);
            }
#line 310 "add_pred.m"
            {
#line 310 "add_pred.m"
              hlds__make_hlds__add_pred__CastGoal_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 310 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__CastGoal_41, 0) = ((MR_Box) (hlds__make_hlds__add_pred__CastExpr_39));
#line 310 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__CastGoal_41, 1) = ((MR_Box) (hlds__make_hlds__add_pred__GoalInfoWithZeroHeadVars_40));
#line 310 "add_pred.m"
            }
#line 312 "add_pred.m"
            {
#line 312 "add_pred.m"
              hlds__make_hlds__add_pred__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 312 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_105_105, 0) = ((MR_Box) (hlds__make_hlds__add_pred__CastGoal_41));
#line 312 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_105_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 312 "add_pred.m"
            }
#line 312 "add_pred.m"
            {
#line 312 "add_pred.m"
              hlds__make_hlds__add_pred__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 312 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_104_104, 0) = ((MR_Box) (hlds__make_hlds__add_pred__AssignGoal_38));
#line 312 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_104_104, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_105_105));
#line 312 "add_pred.m"
            }
#line 312 "add_pred.m"
            {
#line 312 "add_pred.m"
              hlds__make_hlds__add_pred__ConjExpr_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 312 "add_pred.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__ConjExpr_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 312 "add_pred.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__ConjExpr_42, 1) = ((MR_Box) ((MR_Integer) 0));
#line 312 "add_pred.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__ConjExpr_42, 2) = ((MR_Box) (hlds__make_hlds__add_pred__V_104_104));
#line 312 "add_pred.m"
            }
#line 313 "add_pred.m"
            {
#line 313 "add_pred.m"
              hlds__make_hlds__add_pred__ConjGoal_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 313 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ConjGoal_43, 0) = ((MR_Box) (hlds__make_hlds__add_pred__ConjExpr_42));
#line 313 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ConjGoal_43, 1) = ((MR_Box) (hlds__make_hlds__add_pred__GoalInfoWithZeroHeadVars_40));
#line 313 "add_pred.m"
            }
#line 316 "add_pred.m"
            {
#line 316 "add_pred.m"
              hlds__make_hlds__add_pred__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 316 "add_pred.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__GoalExpr_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 316 "add_pred.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__GoalExpr_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pred_scalar_common_2[4])));
#line 316 "add_pred.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__GoalExpr_20, 2) = ((MR_Box) (hlds__make_hlds__add_pred__ConjGoal_43));
#line 316 "add_pred.m"
            }
#line 317 "add_pred.m"
            hlds__make_hlds__add_pred__GoalInfo_21 = hlds__make_hlds__add_pred__GoalInfo1_19;
#line 318 "add_pred.m"
            hlds__make_hlds__add_pred__Stub_25 = (MR_Integer) 0;
#line 285 "add_pred.m"
          }
#line 319 "add_pred.m"
        else
#line 337 "add_pred.m"
          {
#line 321 "add_pred.m"
            {
#line 321 "add_pred.m"
              MR_Word hlds__make_hlds__add_pred__V_141_141;

#line 321 "add_pred.m"
              {
#line 321 "add_pred.m"
                hlds__make_hlds__add_pred__V_141_141 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
              }
#line 321 "add_pred.m"
              {
#line 321 "add_pred.m"
                hlds__make_hlds__add_pred__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__make_hlds__add_pred__Module_10, hlds__make_hlds__add_pred__V_141_141);
              }
#line 321 "add_pred.m"
              if (hlds__make_hlds__add_pred__succeeded)
#line 322 "add_pred.m"
                hlds__make_hlds__add_pred__succeeded = (strcmp(hlds__make_hlds__add_pred__Name_11, (MR_String) "trace_set_io_state") == 0);
#line 321 "add_pred.m"
            }
#line 323 "add_pred.m"
            if (!(hlds__make_hlds__add_pred__succeeded))
#line 324 "add_pred.m"
              {
#line 324 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__V_142_142;

#line 324 "add_pred.m"
                {
#line 324 "add_pred.m"
                  hlds__make_hlds__add_pred__V_142_142 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
                }
#line 324 "add_pred.m"
                {
#line 324 "add_pred.m"
                  hlds__make_hlds__add_pred__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__make_hlds__add_pred__Module_10, hlds__make_hlds__add_pred__V_142_142);
                }
#line 324 "add_pred.m"
                if (hlds__make_hlds__add_pred__succeeded)
#line 325 "add_pred.m"
                  hlds__make_hlds__add_pred__succeeded = (strcmp(hlds__make_hlds__add_pred__Name_11, (MR_String) "unsafe_set_io_state") == 0);
#line 324 "add_pred.m"
              }
#line 337 "add_pred.m"
            if (hlds__make_hlds__add_pred__succeeded)
#line 328 "add_pred.m"
              {
#line 328 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__ConjGoal_128;

#line 332 "add_pred.m"
                hlds__make_hlds__add_pred__GoalInfo_21 = hlds__make_hlds__add_pred__GoalInfo1_19;
#line 329 "add_pred.m"
                {
#line 329 "add_pred.m"
                  hlds__make_hlds__add_pred__ConjGoal_128 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 329 "add_pred.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ConjGoal_128, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_5[1])));
#line 329 "add_pred.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ConjGoal_128, 1) = ((MR_Box) (hlds__make_hlds__add_pred__GoalInfo_21));
#line 329 "add_pred.m"
                }
#line 331 "add_pred.m"
                {
#line 331 "add_pred.m"
                  hlds__make_hlds__add_pred__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 331 "add_pred.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__GoalExpr_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 331 "add_pred.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__GoalExpr_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pred_scalar_common_2[5])));
#line 331 "add_pred.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__GoalExpr_20, 2) = ((MR_Box) (hlds__make_hlds__add_pred__ConjGoal_128));
#line 331 "add_pred.m"
                }
#line 333 "add_pred.m"
                hlds__make_hlds__add_pred__ExtraVars_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 334 "add_pred.m"
                hlds__make_hlds__add_pred__ExtraTypes_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 335 "add_pred.m"
                hlds__make_hlds__add_pred__VarSet_24 = hlds__make_hlds__add_pred__VarSet0_14;
#line 336 "add_pred.m"
                hlds__make_hlds__add_pred__Stub_25 = (MR_Integer) 0;
#line 328 "add_pred.m"
              }
#line 337 "add_pred.m"
            else
#line 339 "add_pred.m"
              {
#line 339 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__SymName_45;
#line 339 "add_pred.m"
                MR_Integer hlds__make_hlds__add_pred__ModeId_46;
#line 339 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__Purity_48;

#line 339 "add_pred.m"
                {
#line 339 "add_pred.m"
                  hlds__make_hlds__add_pred__SymName_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 339 "add_pred.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__SymName_45, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Module_10));
#line 339 "add_pred.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__SymName_45, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Name_11));
#line 339 "add_pred.m"
                }
#line 341 "add_pred.m"
                {
#line 341 "add_pred.m"
                  hlds__make_hlds__add_pred__ModeId_46 = hlds__hlds_pred__invalid_proc_id_0_f_0();
                }
#line 344 "add_pred.m"
                {
#line 344 "add_pred.m"
                  hlds__make_hlds__add_pred__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 344 "add_pred.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pred__GoalExpr_20, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredId_6));
#line 344 "add_pred.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pred__GoalExpr_20, 1) = ((MR_Box) (hlds__make_hlds__add_pred__ModeId_46));
#line 344 "add_pred.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pred__GoalExpr_20, 2) = ((MR_Box) (hlds__make_hlds__add_pred__HeadVarList_16));
#line 344 "add_pred.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pred__GoalExpr_20, 3) = ((MR_Box) ((MR_Integer) 0));
#line 344 "add_pred.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pred__GoalExpr_20, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 344 "add_pred.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pred__GoalExpr_20, 5) = ((MR_Box) (hlds__make_hlds__add_pred__SymName_45));
#line 344 "add_pred.m"
                }
#line 346 "add_pred.m"
                {
#line 346 "add_pred.m"
                  hlds__hlds_pred__pred_info_get_purity_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_61, &hlds__make_hlds__add_pred__Purity_48);
                }
#line 347 "add_pred.m"
                {
#line 347 "add_pred.m"
                  hlds__hlds_goal__goal_info_set_purity_3_p_0(hlds__make_hlds__add_pred__Purity_48, hlds__make_hlds__add_pred__GoalInfo1_19, &hlds__make_hlds__add_pred__GoalInfo_21);
                }
#line 348 "add_pred.m"
                hlds__make_hlds__add_pred__ExtraVars_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 349 "add_pred.m"
                hlds__make_hlds__add_pred__ExtraTypes_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 350 "add_pred.m"
                hlds__make_hlds__add_pred__VarSet_24 = hlds__make_hlds__add_pred__VarSet0_14;
#line 351 "add_pred.m"
                hlds__make_hlds__add_pred__Stub_25 = (MR_Integer) 0;
#line 339 "add_pred.m"
              }
#line 337 "add_pred.m"
          }
#line 319 "add_pred.m"
      }
#line 367 "add_pred.m"
    {
#line 367 "add_pred.m"
      hlds__make_hlds__add_pred__V_118_118 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pred__TypeInfo_134_134, hlds__make_hlds__add_pred__ExtraVars_22, hlds__make_hlds__add_pred__HeadVarList_16);
    }
#line 368 "add_pred.m"
    {
#line 368 "add_pred.m"
      hlds__make_hlds__add_pred__V_119_119 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__make_hlds__add_pred__ExtraTypes_23, hlds__make_hlds__add_pred__Types_7);
    }
#line 367 "add_pred.m"
    {
#line 367 "add_pred.m"
      parse_tree__prog_data__vartypes_from_corresponding_lists_3_p_0(hlds__make_hlds__add_pred__V_118_118, hlds__make_hlds__add_pred__V_119_119, &hlds__make_hlds__add_pred__VarTypes_52);
    }
#line 369 "add_pred.m"
    {
#line 369 "add_pred.m"
      mercury__map__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[1], &hlds__make_hlds__add_pred__TVarNameMap_53);
    }
#line 370 "add_pred.m"
    {
#line 370 "add_pred.m"
      hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&hlds__make_hlds__add_pred__RttiVarMaps_54);
    }
#line 373 "add_pred.m"
    {
#line 373 "add_pred.m"
      hlds__make_hlds__add_pred__V_121_121 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
    }
#line 2318 "hlds.make_hlds.add_pred.c"
    if ((hlds__make_hlds__add_pred__Stub_25 == (MR_Integer) 0))
#line 2320 "hlds.make_hlds.add_pred.c"
      {
#line 2322 "hlds.make_hlds.add_pred.c"
        MR_Word hlds__make_hlds__add_pred__Goal_49;
#line 2324 "hlds.make_hlds.add_pred.c"
        MR_Word hlds__make_hlds__add_pred__Clause_50;
#line 2326 "hlds.make_hlds.add_pred.c"
        MR_Word hlds__make_hlds__add_pred__ClausesRep_51;
#line 2328 "hlds.make_hlds.add_pred.c"
        MR_Word hlds__make_hlds__add_pred__ClausesInfo_56;
#line 2330 "hlds.make_hlds.add_pred.c"
        MR_Word hlds__make_hlds__add_pred__Markers0_57;
#line 2332 "hlds.make_hlds.add_pred.c"
        MR_Word hlds__make_hlds__add_pred__V_116_116;

#line 357 "add_pred.m"
        {
#line 357 "add_pred.m"
          hlds__make_hlds__add_pred__Goal_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 357 "add_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Goal_49, 0) = ((MR_Box) (hlds__make_hlds__add_pred__GoalExpr_20));
#line 357 "add_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Goal_49, 1) = ((MR_Box) (hlds__make_hlds__add_pred__GoalInfo_21));
#line 357 "add_pred.m"
        }
#line 358 "add_pred.m"
        {
#line 358 "add_pred.m"
          hlds__make_hlds__add_pred__Clause_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 358 "add_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Clause_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 358 "add_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Clause_50, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Goal_49));
#line 358 "add_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Clause_50, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 358 "add_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Clause_50, 3) = ((MR_Box) (hlds__make_hlds__add_pred__Context_12));
#line 358 "add_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Clause_50, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 358 "add_pred.m"
        }
#line 359 "add_pred.m"
        {
#line 359 "add_pred.m"
          hlds__make_hlds__add_pred__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 359 "add_pred.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_116_116, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Clause_50));
#line 359 "add_pred.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 359 "add_pred.m"
        }
#line 359 "add_pred.m"
        {
#line 359 "add_pred.m"
          hlds__hlds_clauses__set_clause_list_2_p_0(hlds__make_hlds__add_pred__V_116_116, &hlds__make_hlds__add_pred__ClausesRep_51);
        }
#line 372 "add_pred.m"
        {
#line 372 "add_pred.m"
          hlds__make_hlds__add_pred__ClausesInfo_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 372 "add_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_56, 0) = ((MR_Box) (hlds__make_hlds__add_pred__VarSet_24));
#line 372 "add_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_56, 1) = ((MR_Box) (hlds__make_hlds__add_pred__VarTypes_52));
#line 372 "add_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_56, 2) = ((MR_Box) (hlds__make_hlds__add_pred__TVarNameMap_53));
#line 372 "add_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_56, 3) = ((MR_Box) (hlds__make_hlds__add_pred__VarTypes_52));
#line 372 "add_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_56, 4) = ((MR_Box) (hlds__make_hlds__add_pred__HeadVars_15));
#line 372 "add_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_56, 5) = ((MR_Box) (hlds__make_hlds__add_pred__ClausesRep_51));
#line 372 "add_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_56, 6) = ((MR_Box) (hlds__make_hlds__add_pred__V_121_121));
#line 372 "add_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_56, 7) = ((MR_Box) (hlds__make_hlds__add_pred__RttiVarMaps_54));
#line 372 "add_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_56, 8) = ((MR_Box) ((MR_Integer) 0));
#line 372 "add_pred.m"
        }
#line 375 "add_pred.m"
        {
#line 375 "add_pred.m"
          hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(hlds__make_hlds__add_pred__ClausesInfo_56, hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_61, &hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_122_122);
        }
#line 382 "add_pred.m"
        {
#line 382 "add_pred.m"
          hlds__hlds_pred__pred_info_get_markers_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_122_122, &hlds__make_hlds__add_pred__Markers0_57);
        }
#line 383 "add_pred.m"
        {
#line 383 "add_pred.m"
          hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 7, hlds__make_hlds__add_pred__Markers0_57, &hlds__make_hlds__add_pred__Markers_60);
        }
#line 2415 "hlds.make_hlds.add_pred.c"
      }
#line 2417 "hlds.make_hlds.add_pred.c"
    else
#line 2419 "hlds.make_hlds.add_pred.c"
      {
#line 2421 "hlds.make_hlds.add_pred.c"
        MR_Word hlds__make_hlds__add_pred__Markers2_59;
#line 2423 "hlds.make_hlds.add_pred.c"
        MR_Word hlds__make_hlds__add_pred__ClausesRep_148;
#line 2425 "hlds.make_hlds.add_pred.c"
        MR_Word hlds__make_hlds__add_pred__ClausesInfo_149;
#line 2427 "hlds.make_hlds.add_pred.c"
        MR_Word hlds__make_hlds__add_pred__Markers0_150;
#line 2429 "hlds.make_hlds.add_pred.c"
        MR_Word hlds__make_hlds__add_pred__Markers1_151;

#line 362 "add_pred.m"
        {
#line 362 "add_pred.m"
          hlds__hlds_clauses__set_clause_list_2_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__add_pred__ClausesRep_148);
        }
#line 372 "add_pred.m"
        {
#line 372 "add_pred.m"
          hlds__make_hlds__add_pred__ClausesInfo_149 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 372 "add_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_149, 0) = ((MR_Box) (hlds__make_hlds__add_pred__VarSet_24));
#line 372 "add_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_149, 1) = ((MR_Box) (hlds__make_hlds__add_pred__VarTypes_52));
#line 372 "add_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_149, 2) = ((MR_Box) (hlds__make_hlds__add_pred__TVarNameMap_53));
#line 372 "add_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_149, 3) = ((MR_Box) (hlds__make_hlds__add_pred__VarTypes_52));
#line 372 "add_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_149, 4) = ((MR_Box) (hlds__make_hlds__add_pred__HeadVars_15));
#line 372 "add_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_149, 5) = ((MR_Box) (hlds__make_hlds__add_pred__ClausesRep_148));
#line 372 "add_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_149, 6) = ((MR_Box) (hlds__make_hlds__add_pred__V_121_121));
#line 372 "add_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_149, 7) = ((MR_Box) (hlds__make_hlds__add_pred__RttiVarMaps_54));
#line 372 "add_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_149, 8) = ((MR_Box) ((MR_Integer) 0));
#line 372 "add_pred.m"
        }
#line 375 "add_pred.m"
        {
#line 375 "add_pred.m"
          hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(hlds__make_hlds__add_pred__ClausesInfo_149, hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_61, &hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_122_122);
        }
#line 382 "add_pred.m"
        {
#line 382 "add_pred.m"
          hlds__hlds_pred__pred_info_get_markers_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_122_122, &hlds__make_hlds__add_pred__Markers0_150);
        }
#line 383 "add_pred.m"
        {
#line 383 "add_pred.m"
          hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 7, hlds__make_hlds__add_pred__Markers0_150, &hlds__make_hlds__add_pred__Markers1_151);
        }
#line 386 "add_pred.m"
        {
#line 386 "add_pred.m"
          hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 0, hlds__make_hlds__add_pred__Markers1_151, &hlds__make_hlds__add_pred__Markers2_59);
        }
#line 387 "add_pred.m"
        {
#line 387 "add_pred.m"
          hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 1, hlds__make_hlds__add_pred__Markers2_59, &hlds__make_hlds__add_pred__Markers_60);
        }
#line 2486 "hlds.make_hlds.add_pred.c"
      }
#line 392 "add_pred.m"
    {
#line 392 "add_pred.m"
      hlds__hlds_pred__pred_info_set_markers_3_p_0(hlds__make_hlds__add_pred__Markers_60, hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_122_122, hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_62);
#line 392 "add_pred.m"
      return;
    }
#line 239 "add_pred.m"
  }
#line 236 "add_pred.m"
}

#line 187 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__add_new_pred_15_p_0_1(
#line 187 "add_pred.m"
  MR_Box hlds__make_hlds__add_pred__closure_arg,
#line 187 "add_pred.m"
  MR_Box hlds__make_hlds__add_pred__wrapper_arg_1,
#line 187 "add_pred.m"
  MR_Box hlds__make_hlds__add_pred__wrapper_arg_2,
#line 187 "add_pred.m"
  MR_Box * hlds__make_hlds__add_pred__wrapper_arg_3)
#line 187 "add_pred.m"
{
#line 187 "add_pred.m"
  {
#line 187 "add_pred.m"
    MR_Box hlds__make_hlds__add_pred__closure = hlds__make_hlds__add_pred__closure_arg;
#line 187 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__conv0_HeadVar__3_3;

#line 187 "add_pred.m"
    {
#line 187 "add_pred.m"
      hlds__hlds_pred__add_marker_3_p_0(((MR_Word) hlds__make_hlds__add_pred__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_pred__wrapper_arg_2), &hlds__make_hlds__add_pred__conv0_HeadVar__3_3);
    }
#line 187 "add_pred.m"
    *hlds__make_hlds__add_pred__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__add_pred__conv0_HeadVar__3_3));
#line 187 "add_pred.m"
  }
#line 187 "add_pred.m"
}

#line 148 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__add_new_pred_15_p_0(
#line 148 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__TVarSet_16,
#line 148 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ExistQVars_17,
#line 148 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredName_18,
#line 148 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Types_19,
#line 148 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Purity_20,
#line 148 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ClassContext_21,
#line 148 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Markers0_22,
#line 148 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_23,
#line 148 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ItemStatus_24,
#line 148 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__NeedQual_25,
#line 148 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_26,
#line 148 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_60,
#line 148 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_61,
#line 148 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_62,
#line 148 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_63)
#line 148 "add_pred.m"
{
#line 157 "add_pred.m"
  {
#line 157 "add_pred.m"
    MR_bool hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__ItemStatus_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 157 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Status_29;
#line 157 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__ModuleName_30;
#line 157 "add_pred.m"
    MR_Integer hlds__make_hlds__add_pred__Arity_31;

#line 167 "add_pred.m"
    if (hlds__make_hlds__add_pred__succeeded)
#line 166 "add_pred.m"
      {
#line 166 "add_pred.m"
        hlds__make_hlds__add_pred__Status_29 = (MR_Word) MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pred_scalar_common_2[2]);
#line 166 "add_pred.m"
      }
#line 167 "add_pred.m"
    else
#line 168 "add_pred.m"
      hlds__make_hlds__add_pred__Status_29 = hlds__make_hlds__add_pred__ItemStatus_24;
#line 170 "add_pred.m"
    {
#line 170 "add_pred.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_60, &hlds__make_hlds__add_pred__ModuleName_30);
    }
#line 171 "add_pred.m"
    {
#line 171 "add_pred.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__make_hlds__add_pred__Types_19, &hlds__make_hlds__add_pred__Arity_31);
    }
#line 178 "add_pred.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_pred__PredName_18)) == (MR_mktag((MR_Integer) 1))))
#line 179 "add_pred.m"
      {
#line 179 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_76_76;
#line 179 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__MNameOfPred_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__PredName_18, (MR_Integer) 0)));
#line 179 "add_pred.m"
        MR_String hlds__make_hlds__add_pred__PName_34 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__PredName_18, (MR_Integer) 1)));
#line 179 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__PredTable0_35;
#line 179 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__ClausesInfo_36;
#line 179 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__Proofs_37;
#line 179 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__ConstraintMap_38;
#line 179 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__PurityMarkers_39;
#line 179 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__MarkersList_40;
#line 179 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__Markers_41;
#line 179 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__VarNameRemap_42;
#line 179 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__PredInfo0_43;
#line 179 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__PredIds_44;
#line 179 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__V_65_65;
#line 179 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__V_67_67;
#line 187 "add_pred.m"
        MR_Box hlds__make_hlds__add_pred__conv1_Markers_41;

#line 180 "add_pred.m"
        {
#line 180 "add_pred.m"
          hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_60, &hlds__make_hlds__add_pred__PredTable0_35);
        }
#line 181 "add_pred.m"
        {
#line 181 "add_pred.m"
          hlds__make_hlds__add_pred__V_65_65 = hlds__hlds_clauses__init_clause_item_numbers_user_0_f_0();
        }
#line 181 "add_pred.m"
        {
#line 181 "add_pred.m"
          hlds__hlds_clauses__clauses_info_init_4_p_0(hlds__make_hlds__add_pred__PredOrFunc_26, hlds__make_hlds__add_pred__Arity_31, hlds__make_hlds__add_pred__V_65_65, &hlds__make_hlds__add_pred__ClausesInfo_36);
        }
#line 2652 "hlds.make_hlds.add_pred.c"
        hlds__make_hlds__add_pred__TypeCtorInfo_76_76 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 183 "add_pred.m"
        {
#line 183 "add_pred.m"
          mercury__map__init_1_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_76_76, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, &hlds__make_hlds__add_pred__Proofs_37);
        }
#line 184 "add_pred.m"
        {
#line 184 "add_pred.m"
          mercury__map__init_1_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, hlds__make_hlds__add_pred__TypeCtorInfo_76_76, &hlds__make_hlds__add_pred__ConstraintMap_38);
        }
#line 185 "add_pred.m"
        {
#line 185 "add_pred.m"
          hlds__hlds_pred__purity_to_markers_2_p_0(hlds__make_hlds__add_pred__Purity_20, &hlds__make_hlds__add_pred__PurityMarkers_39);
        }
#line 186 "add_pred.m"
        {
#line 186 "add_pred.m"
          hlds__hlds_pred__markers_to_marker_list_2_p_0(hlds__make_hlds__add_pred__PurityMarkers_39, &hlds__make_hlds__add_pred__MarkersList_40);
        }
#line 187 "add_pred.m"
        {
#line 187 "add_pred.m"
          mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_marker_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_markers_0, (MR_Word) &hlds__make_hlds__add_pred_scalar_common_5[0], hlds__make_hlds__add_pred__MarkersList_40, ((MR_Box) (hlds__make_hlds__add_pred__Markers0_22)), &hlds__make_hlds__add_pred__conv1_Markers_41);
        }
#line 187 "add_pred.m"
        hlds__make_hlds__add_pred__Markers_41 = ((MR_Word) hlds__make_hlds__add_pred__conv1_Markers_41);
#line 188 "add_pred.m"
        {
#line 188 "add_pred.m"
          mercury__map__init_1_p_0((MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, &hlds__make_hlds__add_pred__VarNameRemap_42);
        }
#line 190 "add_pred.m"
        {
#line 190 "add_pred.m"
          hlds__make_hlds__add_pred__V_67_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 190 "add_pred.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_67_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 190 "add_pred.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_67_67, 1) = ((MR_Box) (hlds__make_hlds__add_pred__PredName_18));
#line 190 "add_pred.m"
        }
#line 189 "add_pred.m"
        {
#line 189 "add_pred.m"
          hlds__hlds_pred__pred_info_init_18_p_0(hlds__make_hlds__add_pred__ModuleName_30, hlds__make_hlds__add_pred__PredName_18, hlds__make_hlds__add_pred__Arity_31, hlds__make_hlds__add_pred__PredOrFunc_26, hlds__make_hlds__add_pred__Context_23, hlds__make_hlds__add_pred__V_67_67, hlds__make_hlds__add_pred__Status_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_pred__Markers_41, hlds__make_hlds__add_pred__Types_19, hlds__make_hlds__add_pred__TVarSet_16, hlds__make_hlds__add_pred__ExistQVars_17, hlds__make_hlds__add_pred__ClassContext_21, hlds__make_hlds__add_pred__Proofs_37, hlds__make_hlds__add_pred__ConstraintMap_38, hlds__make_hlds__add_pred__ClausesInfo_36, hlds__make_hlds__add_pred__VarNameRemap_42, &hlds__make_hlds__add_pred__PredInfo0_43);
        }
#line 193 "add_pred.m"
        {
#line 193 "add_pred.m"
          hlds__pred_table__predicate_table_lookup_pf_m_n_a_7_p_0(hlds__make_hlds__add_pred__PredTable0_35, (MR_Integer) 0, hlds__make_hlds__add_pred__PredOrFunc_26, hlds__make_hlds__add_pred__MNameOfPred_33, hlds__make_hlds__add_pred__PName_34, hlds__make_hlds__add_pred__Arity_31, &hlds__make_hlds__add_pred__PredIds_44);
        }
#line 203 "add_pred.m"
        if ((hlds__make_hlds__add_pred__PredIds_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 204 "add_pred.m"
          {
#line 204 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__PQInfo_51;
#line 204 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__PredId_52;
#line 204 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__PredTable1_53;
#line 204 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__PredTable_59;

#line 205 "add_pred.m"
            {
#line 205 "add_pred.m"
              hlds__hlds_module__module_info_get_partial_qualifier_info_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_60, &hlds__make_hlds__add_pred__PQInfo_51);
            }
#line 206 "add_pred.m"
            {
#line 206 "add_pred.m"
              hlds__pred_table__predicate_table_insert_qual_6_p_0(hlds__make_hlds__add_pred__PredInfo0_43, hlds__make_hlds__add_pred__NeedQual_25, hlds__make_hlds__add_pred__PQInfo_51, &hlds__make_hlds__add_pred__PredId_52, hlds__make_hlds__add_pred__PredTable0_35, &hlds__make_hlds__add_pred__PredTable1_53);
            }
#line 208 "add_pred.m"
            {
#line 208 "add_pred.m"
              hlds__make_hlds__add_pred__succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(hlds__make_hlds__add_pred__PredInfo0_43);
            }
#line 216 "add_pred.m"
            if (hlds__make_hlds__add_pred__succeeded)
#line 209 "add_pred.m"
              {
#line 209 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__Globals_54;
#line 209 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__CompilationTarget_55;
#line 209 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__PredInfo_56;
#line 209 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__Preds1_57;
#line 209 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__Preds_58;

#line 209 "add_pred.m"
                {
#line 209 "add_pred.m"
                  hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_60, &hlds__make_hlds__add_pred__Globals_54);
                }
#line 210 "add_pred.m"
                {
#line 210 "add_pred.m"
                  libs__globals__get_target_2_p_0(hlds__make_hlds__add_pred__Globals_54, &hlds__make_hlds__add_pred__CompilationTarget_55);
                }
#line 211 "add_pred.m"
                {
#line 211 "add_pred.m"
                  hlds__make_hlds__add_pred__add_builtin_5_p_0(hlds__make_hlds__add_pred__PredId_52, hlds__make_hlds__add_pred__Types_19, hlds__make_hlds__add_pred__CompilationTarget_55, hlds__make_hlds__add_pred__PredInfo0_43, &hlds__make_hlds__add_pred__PredInfo_56);
                }
#line 213 "add_pred.m"
                {
#line 213 "add_pred.m"
                  hlds__pred_table__predicate_table_get_preds_2_p_0(hlds__make_hlds__add_pred__PredTable1_53, &hlds__make_hlds__add_pred__Preds1_57);
                }
#line 214 "add_pred.m"
                {
#line 214 "add_pred.m"
                  mercury__map__det_update_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, ((MR_Box) (hlds__make_hlds__add_pred__PredId_52)), ((MR_Box) (hlds__make_hlds__add_pred__PredInfo_56)), hlds__make_hlds__add_pred__Preds1_57, &hlds__make_hlds__add_pred__Preds_58);
                }
#line 215 "add_pred.m"
                {
#line 215 "add_pred.m"
                  hlds__pred_table__predicate_table_set_preds_3_p_0(hlds__make_hlds__add_pred__Preds_58, hlds__make_hlds__add_pred__PredTable1_53, &hlds__make_hlds__add_pred__PredTable_59);
                }
#line 209 "add_pred.m"
              }
#line 216 "add_pred.m"
            else
#line 217 "add_pred.m"
              hlds__make_hlds__add_pred__PredTable_59 = hlds__make_hlds__add_pred__PredTable1_53;
#line 219 "add_pred.m"
            {
#line 219 "add_pred.m"
              hlds__hlds_module__module_info_set_predicate_table_3_p_0(hlds__make_hlds__add_pred__PredTable_59, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_60, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_61);
            }
#line 219 "add_pred.m"
            *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_63 = hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_62;
#line 204 "add_pred.m"
          }
#line 203 "add_pred.m"
        else
#line 196 "add_pred.m"
          {
#line 196 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__OrigPred_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__PredIds_44, (MR_Integer) 0)));
#line 196 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__OrigPredInfo_47;
#line 196 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__OrigContext_48;
#line 196 "add_pred.m"
            MR_String hlds__make_hlds__add_pred__DeclString_49;
#line 196 "add_pred.m"
            MR_Integer hlds__make_hlds__add_pred__OrigArity_50;
#line 196 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__PredIds_44, (MR_Integer) 1)));

#line 197 "add_pred.m"
            {
#line 197 "add_pred.m"
              hlds__hlds_module__module_info_pred_info_3_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_60, hlds__make_hlds__add_pred__OrigPred_45, &hlds__make_hlds__add_pred__OrigPredInfo_47);
            }
#line 198 "add_pred.m"
            {
#line 198 "add_pred.m"
              hlds__hlds_pred__pred_info_get_context_2_p_0(hlds__make_hlds__add_pred__OrigPredInfo_47, &hlds__make_hlds__add_pred__OrigContext_48);
            }
#line 199 "add_pred.m"
            {
#line 199 "add_pred.m"
              hlds__make_hlds__add_pred__DeclString_49 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(hlds__make_hlds__add_pred__PredOrFunc_26);
            }
#line 200 "add_pred.m"
            {
#line 200 "add_pred.m"
              parse_tree__prog_util__adjust_func_arity_3_p_1(hlds__make_hlds__add_pred__PredOrFunc_26, &hlds__make_hlds__add_pred__OrigArity_50, hlds__make_hlds__add_pred__Arity_31);
            }
#line 201 "add_pred.m"
            {
#line 201 "add_pred.m"
              hlds__make_hlds__make_hlds_error__multiple_def_error_9_p_0(hlds__make_hlds__add_pred__ItemStatus_24, hlds__make_hlds__add_pred__PredName_18, hlds__make_hlds__add_pred__OrigArity_50, hlds__make_hlds__add_pred__DeclString_49, hlds__make_hlds__add_pred__Context_23, hlds__make_hlds__add_pred__OrigContext_48, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_62, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_63);
            }
#line 201 "add_pred.m"
            *hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_61 = hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_60;
#line 196 "add_pred.m"
          }
#line 179 "add_pred.m"
      }
#line 178 "add_pred.m"
    else
#line 173 "add_pred.m"
      {
#line 174 "add_pred.m"
        {
#line 174 "add_pred.m"
          hlds__hlds_module__module_info_incr_errors_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_60, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_61);
        }
#line 175 "add_pred.m"
        {
#line 175 "add_pred.m"
          hlds__make_hlds__add_pred__unqualified_pred_error_5_p_0(hlds__make_hlds__add_pred__PredName_18, hlds__make_hlds__add_pred__Arity_31, hlds__make_hlds__add_pred__Context_23, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_62, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_63);
#line 175 "add_pred.m"
          return;
        }
#line 173 "add_pred.m"
      }
#line 157 "add_pred.m"
  }
#line 148 "add_pred.m"
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
#line 515 "add_pred.m"
  {
#line 515 "add_pred.m"
    MR_bool hlds__make_hlds__add_pred__succeeded;
#line 515 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_55_71;
#line 515 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_58_74;
#line 515 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__ClausesInfo_20;
#line 515 "add_pred.m"
    MR_String hlds__make_hlds__add_pred__FileName_21;
#line 515 "add_pred.m"
    MR_Integer hlds__make_hlds__add_pred__LineNum_22;
#line 515 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredicateTable0_23;
#line 515 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredicateTable_24;
#line 515 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_27_27;
#line 515 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TVarSet0_42;
#line 515 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TypeVars_43;
#line 515 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TVarSet_44;
#line 515 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Types_45;
#line 515 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Proofs_46;
#line 515 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__ConstraintMap_47;
#line 515 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Markers0_50;
#line 515 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__VarNameRemap_51;
#line 515 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredInfo0_52;
#line 515 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Markers_53;
#line 515 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredInfo_54;
#line 515 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredIds_55;
#line 515 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_60_60;

#line 516 "add_pred.m"
    {
#line 516 "add_pred.m"
      hlds__hlds_clauses__clauses_info_init_for_assertion_2_p_0(hlds__make_hlds__add_pred__HeadVars_16, &hlds__make_hlds__add_pred__ClausesInfo_20);
    }
#line 517 "add_pred.m"
    {
#line 517 "add_pred.m"
      mercury__term__context_file_2_p_0(hlds__make_hlds__add_pred__Context_18, &hlds__make_hlds__add_pred__FileName_21);
    }
#line 518 "add_pred.m"
    {
#line 518 "add_pred.m"
      mercury__term__context_line_2_p_0(hlds__make_hlds__add_pred__Context_18, &hlds__make_hlds__add_pred__LineNum_22);
    }
#line 519 "add_pred.m"
    {
#line 519 "add_pred.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_25, &hlds__make_hlds__add_pred__PredicateTable0_23);
    }
#line 521 "add_pred.m"
    {
#line 521 "add_pred.m"
      hlds__make_hlds__add_pred__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 521 "add_pred.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 521 "add_pred.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_27_27, 1) = ((MR_Box) (hlds__make_hlds__add_pred__FileName_21));
#line 521 "add_pred.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_27_27, 2) = ((MR_Box) (hlds__make_hlds__add_pred__LineNum_22));
#line 521 "add_pred.m"
    }
#line 2969 "hlds.make_hlds.add_pred.c"
    hlds__make_hlds__add_pred__TypeCtorInfo_55_71 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 532 "add_pred.m"
    {
#line 532 "add_pred.m"
      mercury__varset__init_1_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_55_71, &hlds__make_hlds__add_pred__TVarSet0_42);
    }
#line 533 "add_pred.m"
    {
#line 533 "add_pred.m"
      parse_tree__prog_util__make_n_fresh_vars_5_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_55_71, (MR_String) "T", hlds__make_hlds__add_pred__Arity_14, &hlds__make_hlds__add_pred__TypeVars_43, hlds__make_hlds__add_pred__TVarSet0_42, &hlds__make_hlds__add_pred__TVarSet_44);
    }
#line 534 "add_pred.m"
    {
#line 534 "add_pred.m"
      hlds__make_hlds__add_pred__V_60_60 = mercury__map__init_0_f_0((MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
    }
#line 534 "add_pred.m"
    {
#line 534 "add_pred.m"
      parse_tree__prog_type__var_list_to_type_list_3_p_0(hlds__make_hlds__add_pred__V_60_60, hlds__make_hlds__add_pred__TypeVars_43, &hlds__make_hlds__add_pred__Types_45);
    }
#line 2991 "hlds.make_hlds.add_pred.c"
    hlds__make_hlds__add_pred__TypeCtorInfo_58_74 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 535 "add_pred.m"
    {
#line 535 "add_pred.m"
      mercury__map__init_1_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_58_74, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, &hlds__make_hlds__add_pred__Proofs_46);
    }
#line 536 "add_pred.m"
    {
#line 536 "add_pred.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, hlds__make_hlds__add_pred__TypeCtorInfo_58_74, &hlds__make_hlds__add_pred__ConstraintMap_47);
    }
#line 543 "add_pred.m"
    {
#line 543 "add_pred.m"
      hlds__hlds_pred__init_markers_1_p_0(&hlds__make_hlds__add_pred__Markers0_50);
    }
#line 544 "add_pred.m"
    {
#line 544 "add_pred.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, &hlds__make_hlds__add_pred__VarNameRemap_51);
    }
#line 545 "add_pred.m"
    {
#line 545 "add_pred.m"
      hlds__hlds_pred__pred_info_init_18_p_0(hlds__make_hlds__add_pred__ModuleName_12, hlds__make_hlds__add_pred__PredName_13, hlds__make_hlds__add_pred__Arity_14, hlds__make_hlds__add_pred__PredOrFunc_15, hlds__make_hlds__add_pred__Context_18, hlds__make_hlds__add_pred__V_27_27, hlds__make_hlds__add_pred__Status_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_pred__Markers0_50, hlds__make_hlds__add_pred__Types_45, hlds__make_hlds__add_pred__TVarSet_44, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[22], hlds__make_hlds__add_pred__Proofs_46, hlds__make_hlds__add_pred__ConstraintMap_47, hlds__make_hlds__add_pred__ClausesInfo_20, hlds__make_hlds__add_pred__VarNameRemap_51, &hlds__make_hlds__add_pred__PredInfo0_52);
    }
#line 549 "add_pred.m"
    {
#line 549 "add_pred.m"
      hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 2, hlds__make_hlds__add_pred__Markers0_50, &hlds__make_hlds__add_pred__Markers_53);
    }
#line 550 "add_pred.m"
    {
#line 550 "add_pred.m"
      hlds__hlds_pred__pred_info_set_markers_3_p_0(hlds__make_hlds__add_pred__Markers_53, hlds__make_hlds__add_pred__PredInfo0_52, &hlds__make_hlds__add_pred__PredInfo_54);
    }
#line 551 "add_pred.m"
    {
#line 551 "add_pred.m"
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__make_hlds__add_pred__PredicateTable0_23, (MR_Integer) 0, hlds__make_hlds__add_pred__PredOrFunc_15, hlds__make_hlds__add_pred__PredName_13, hlds__make_hlds__add_pred__Arity_14, &hlds__make_hlds__add_pred__PredIds_55);
    }
#line 558 "add_pred.m"
    if ((hlds__make_hlds__add_pred__PredIds_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 554 "add_pred.m"
      {
#line 554 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__MQInfo_56;

#line 555 "add_pred.m"
        {
#line 555 "add_pred.m"
          hlds__hlds_module__module_info_get_partial_qualifier_info_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_25, &hlds__make_hlds__add_pred__MQInfo_56);
        }
#line 556 "add_pred.m"
        {
#line 556 "add_pred.m"
          hlds__pred_table__predicate_table_insert_qual_6_p_0(hlds__make_hlds__add_pred__PredInfo_54, (MR_Integer) 1, hlds__make_hlds__add_pred__MQInfo_56, hlds__make_hlds__add_pred__PredId_19, hlds__make_hlds__add_pred__PredicateTable0_23, &hlds__make_hlds__add_pred__PredicateTable_24);
        }
#line 554 "add_pred.m"
      }
#line 558 "add_pred.m"
    else
#line 559 "add_pred.m"
      {
#line 560 "add_pred.m"
        {
#line 560 "add_pred.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_pred", (MR_String) "predicate \140hlds.make_hlds.add_pred.preds_do_add_implicit\'/12", (MR_String) "search succeeded");
#line 560 "add_pred.m"
          return;
        }
#line 559 "add_pred.m"
      }
#line 523 "add_pred.m"
    {
#line 523 "add_pred.m"
      hlds__hlds_module__module_info_set_predicate_table_3_p_0(hlds__make_hlds__add_pred__PredicateTable_24, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_25, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_26);
#line 523 "add_pred.m"
      return;
    }
#line 515 "add_pred.m"
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
#line 494 "add_pred.m"
  {
#line 494 "add_pred.m"
    MR_bool hlds__make_hlds__add_pred__succeeded;
#line 494 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredicateTable0_27;
#line 494 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Globals_28;
#line 494 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__ClausesInfo_30;
#line 494 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredicateTable_31;
#line 494 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_36_36;
#line 494 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_39_39;

#line 495 "add_pred.m"
    {
#line 495 "add_pred.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_32, &hlds__make_hlds__add_pred__PredicateTable0_27);
    }
#line 496 "add_pred.m"
    {
#line 496 "add_pred.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_32, &hlds__make_hlds__add_pred__Globals_28);
    }
#line 497 "add_pred.m"
    {
#line 497 "add_pred.m"
      hlds__make_hlds__make_hlds_error__maybe_undefined_pred_error_10_p_0(hlds__make_hlds__add_pred__Globals_28, hlds__make_hlds__add_pred__PredName_17, hlds__make_hlds__add_pred__Arity_18, hlds__make_hlds__add_pred__PredOrFunc_19, hlds__make_hlds__add_pred__Status_20, hlds__make_hlds__add_pred__IsClassMethod_21, hlds__make_hlds__add_pred__Context_22, hlds__make_hlds__add_pred__DescPieces_24, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_34, &hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_36_36);
    }
#line 504 "add_pred.m"
    if ((hlds__make_hlds__add_pred__PredOrFunc_19 == (MR_Integer) 1))
#line 500 "add_pred.m"
      {
#line 500 "add_pred.m"
        MR_Integer hlds__make_hlds__add_pred__FuncArity_29;

#line 501 "add_pred.m"
        {
#line 501 "add_pred.m"
          parse_tree__prog_util__adjust_func_arity_3_p_1((MR_Integer) 1, &hlds__make_hlds__add_pred__FuncArity_29, hlds__make_hlds__add_pred__Arity_18);
        }
#line 502 "add_pred.m"
        {
#line 502 "add_pred.m"
          hlds__make_hlds__make_hlds_passes__maybe_check_field_access_function_7_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_32, hlds__make_hlds__add_pred__PredName_17, hlds__make_hlds__add_pred__FuncArity_29, hlds__make_hlds__add_pred__Status_20, hlds__make_hlds__add_pred__Context_22, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_36_36, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_35);
        }
#line 500 "add_pred.m"
      }
#line 504 "add_pred.m"
    else
#line 505 "add_pred.m"
      *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_35 = hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_36_36;
#line 507 "add_pred.m"
    {
#line 507 "add_pred.m"
      hlds__make_hlds__add_pred__V_39_39 = hlds__hlds_clauses__init_clause_item_numbers_user_0_f_0();
    }
#line 507 "add_pred.m"
    {
#line 507 "add_pred.m"
      hlds__hlds_clauses__clauses_info_init_4_p_0(hlds__make_hlds__add_pred__PredOrFunc_19, hlds__make_hlds__add_pred__Arity_18, hlds__make_hlds__add_pred__V_39_39, &hlds__make_hlds__add_pred__ClausesInfo_30);
    }
#line 509 "add_pred.m"
    {
#line 509 "add_pred.m"
      hlds__make_hlds__add_pred__preds_do_add_implicit_12_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_32, hlds__make_hlds__add_pred__ModuleName_16, hlds__make_hlds__add_pred__PredName_17, hlds__make_hlds__add_pred__Arity_18, hlds__make_hlds__add_pred__PredOrFunc_19, hlds__make_hlds__add_pred__Status_20, hlds__make_hlds__add_pred__Context_22, hlds__make_hlds__add_pred__Origin_23, hlds__make_hlds__add_pred__ClausesInfo_30, hlds__make_hlds__add_pred__PredId_25, hlds__make_hlds__add_pred__PredicateTable0_27, &hlds__make_hlds__add_pred__PredicateTable_31);
    }
#line 512 "add_pred.m"
    {
#line 512 "add_pred.m"
      hlds__hlds_module__module_info_set_predicate_table_3_p_0(hlds__make_hlds__add_pred__PredicateTable_31, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_32, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_33);
#line 512 "add_pred.m"
      return;
    }
#line 494 "add_pred.m"
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
#line 413 "add_pred.m"
  {
#line 413 "add_pred.m"
    MR_bool hlds__make_hlds__add_pred__succeeded;
#line 413 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_58_58;
#line 413 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_59_59;
#line 413 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__ModuleName0_25;
#line 413 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__ModuleName_26;
#line 413 "add_pred.m"
    MR_Integer hlds__make_hlds__add_pred__Arity_27;
#line 413 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredicateTable0_28;
#line 413 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredIds_29;
#line 413 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredId_31;
#line 413 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredicateTable1_32;
#line 413 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Preds0_33;
#line 413 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredInfo0_34;
#line 413 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredInfo_35;
#line 413 "add_pred.m"
    MR_Integer hlds__make_hlds__add_pred__ProcId_36;
#line 413 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Preds_37;
#line 413 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredicateTable_38;
#line 413 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_45_45;
#line 413 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_48_48;
#line 430 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredIdPrime_30;
#line 428 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_44_44;
#line 438 "add_pred.m"
    MR_Box hlds__make_hlds__add_pred__conv0_PredInfo0_34;

#line 422 "add_pred.m"
    {
#line 422 "add_pred.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__add_pred__ModuleName0_25);
    }
#line 423 "add_pred.m"
    {
#line 423 "add_pred.m"
      mdbcomp__sym_name__sym_name_get_module_name_default_3_p_0(hlds__make_hlds__add_pred__PredName_15, hlds__make_hlds__add_pred__ModuleName0_25, &hlds__make_hlds__add_pred__ModuleName_26);
    }
#line 424 "add_pred.m"
    {
#line 424 "add_pred.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__make_hlds__add_pred__Modes_16, &hlds__make_hlds__add_pred__Arity_27);
    }
#line 425 "add_pred.m"
    {
#line 425 "add_pred.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__add_pred__PredicateTable0_28);
    }
#line 426 "add_pred.m"
    {
#line 426 "add_pred.m"
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__make_hlds__add_pred__PredicateTable0_28, (MR_Integer) 0, hlds__make_hlds__add_pred__PredOrFunc_20, hlds__make_hlds__add_pred__PredName_15, hlds__make_hlds__add_pred__Arity_27, &hlds__make_hlds__add_pred__PredIds_29);
    }
#line 428 "add_pred.m"
    hlds__make_hlds__add_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pred__PredIds_29)) == (MR_mktag((MR_Integer) 1)));
#line 428 "add_pred.m"
    if (hlds__make_hlds__add_pred__succeeded)
#line 428 "add_pred.m"
      {
#line 428 "add_pred.m"
        hlds__make_hlds__add_pred__PredIdPrime_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__PredIds_29, (MR_Integer) 0)));
#line 428 "add_pred.m"
        hlds__make_hlds__add_pred__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__PredIds_29, (MR_Integer) 1)));
#line 428 "add_pred.m"
        hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__V_44_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 428 "add_pred.m"
      }
#line 430 "add_pred.m"
    if (hlds__make_hlds__add_pred__succeeded)
#line 429 "add_pred.m"
      {
#line 429 "add_pred.m"
        hlds__make_hlds__add_pred__PredId_31 = hlds__make_hlds__add_pred__PredIdPrime_30;
#line 429 "add_pred.m"
        hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_48_48 = hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_41;
#line 429 "add_pred.m"
        hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_45_45 = hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_39;
#line 429 "add_pred.m"
      }
#line 430 "add_pred.m"
    else
#line 431 "add_pred.m"
      {
#line 431 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__V_46_46;

#line 433 "add_pred.m"
        {
#line 433 "add_pred.m"
          hlds__make_hlds__add_pred__V_46_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 433 "add_pred.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_46_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 433 "add_pred.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_46_46, 1) = ((MR_Box) (hlds__make_hlds__add_pred__PredName_15));
#line 433 "add_pred.m"
        }
#line 431 "add_pred.m"
        {
#line 431 "add_pred.m"
          hlds__make_hlds__add_pred__preds_add_implicit_report_error_14_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_45_45, hlds__make_hlds__add_pred__ModuleName_26, hlds__make_hlds__add_pred__PredName_15, hlds__make_hlds__add_pred__Arity_27, hlds__make_hlds__add_pred__PredOrFunc_20, hlds__make_hlds__add_pred__Status_18, hlds__make_hlds__add_pred__IsClassMethod_21, hlds__make_hlds__add_pred__MContext_19, hlds__make_hlds__add_pred__V_46_46, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[5]), &hlds__make_hlds__add_pred__PredId_31, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_41, &hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_48_48);
        }
#line 431 "add_pred.m"
      }
#line 436 "add_pred.m"
    {
#line 436 "add_pred.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_45_45, &hlds__make_hlds__add_pred__PredicateTable1_32);
    }
#line 437 "add_pred.m"
    {
#line 437 "add_pred.m"
      hlds__pred_table__predicate_table_get_preds_2_p_0(hlds__make_hlds__add_pred__PredicateTable1_32, &hlds__make_hlds__add_pred__Preds0_33);
    }
#line 3353 "hlds.make_hlds.add_pred.c"
    hlds__make_hlds__add_pred__TypeCtorInfo_58_58 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 3355 "hlds.make_hlds.add_pred.c"
    hlds__make_hlds__add_pred__TypeCtorInfo_59_59 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 438 "add_pred.m"
    {
#line 438 "add_pred.m"
      mercury__map__lookup_3_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_58_58, hlds__make_hlds__add_pred__TypeCtorInfo_59_59, hlds__make_hlds__add_pred__Preds0_33, ((MR_Box) (hlds__make_hlds__add_pred__PredId_31)), &hlds__make_hlds__add_pred__conv0_PredInfo0_34);
    }
#line 438 "add_pred.m"
    hlds__make_hlds__add_pred__PredInfo0_34 = ((MR_Word) hlds__make_hlds__add_pred__conv0_PredInfo0_34);
#line 440 "add_pred.m"
    {
#line 440 "add_pred.m"
      hlds__make_hlds__add_pred__module_do_add_mode_11_p_0(hlds__make_hlds__add_pred__InstVarSet_14, hlds__make_hlds__add_pred__Arity_27, hlds__make_hlds__add_pred__Modes_16, hlds__make_hlds__add_pred__MaybeDet_17, hlds__make_hlds__add_pred__IsClassMethod_21, hlds__make_hlds__add_pred__MContext_19, hlds__make_hlds__add_pred__PredInfo0_34, &hlds__make_hlds__add_pred__PredInfo_35, &hlds__make_hlds__add_pred__ProcId_36, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_48_48, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_42);
    }
#line 442 "add_pred.m"
    {
#line 442 "add_pred.m"
      mercury__map__det_update_4_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_58_58, hlds__make_hlds__add_pred__TypeCtorInfo_59_59, ((MR_Box) (hlds__make_hlds__add_pred__PredId_31)), ((MR_Box) (hlds__make_hlds__add_pred__PredInfo_35)), hlds__make_hlds__add_pred__Preds0_33, &hlds__make_hlds__add_pred__Preds_37);
    }
#line 443 "add_pred.m"
    {
#line 443 "add_pred.m"
      hlds__pred_table__predicate_table_set_preds_3_p_0(hlds__make_hlds__add_pred__Preds_37, hlds__make_hlds__add_pred__PredicateTable1_32, &hlds__make_hlds__add_pred__PredicateTable_38);
    }
#line 444 "add_pred.m"
    {
#line 444 "add_pred.m"
      hlds__hlds_module__module_info_set_predicate_table_3_p_0(hlds__make_hlds__add_pred__PredicateTable_38, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_45_45, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_40);
    }
#line 445 "add_pred.m"
    {
#line 445 "add_pred.m"
      MR_Word base;
#line 445 "add_pred.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 445 "add_pred.m"
      *hlds__make_hlds__add_pred__PredProcId_22 = base;
#line 445 "add_pred.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredId_31));
#line 445 "add_pred.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__add_pred__ProcId_36));
#line 445 "add_pred.m"
    }
#line 413 "add_pred.m"
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
#line 398 "add_pred.m"
  {
#line 398 "add_pred.m"
    MR_bool hlds__make_hlds__add_pred__succeeded;
#line 398 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Procs0_27;
#line 398 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__ArgTypes_28;
#line 398 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__VarNameRemap_29;
#line 398 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__NewProc0_30;
#line 398 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__NewProc_31;
#line 398 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Procs_32;

#line 399 "add_pred.m"
    {
#line 399 "add_pred.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__make_hlds__add_pred__PredInfo0_24, &hlds__make_hlds__add_pred__Procs0_27);
    }
#line 400 "add_pred.m"
    {
#line 400 "add_pred.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(hlds__make_hlds__add_pred__PredInfo0_24, &hlds__make_hlds__add_pred__ArgTypes_28);
    }
#line 401 "add_pred.m"
    {
#line 401 "add_pred.m"
      hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(hlds__make_hlds__add_pred__PredInfo0_24, &hlds__make_hlds__add_pred__VarNameRemap_29);
    }
#line 402 "add_pred.m"
    {
#line 402 "add_pred.m"
      hlds__hlds_pred__next_mode_id_2_p_0(hlds__make_hlds__add_pred__Procs0_27, hlds__make_hlds__add_pred__ModeId_26);
    }
#line 403 "add_pred.m"
    {
#line 403 "add_pred.m"
      hlds__hlds_pred__proc_info_init_12_p_0(hlds__make_hlds__add_pred__Context_21, hlds__make_hlds__add_pred__Arity_15, hlds__make_hlds__add_pred__ArgTypes_28, hlds__make_hlds__add_pred__MaybeDeclaredArgModes_17, hlds__make_hlds__add_pred__ArgModes_16, hlds__make_hlds__add_pred__MaybeArgLives_18, hlds__make_hlds__add_pred__DetismDecl_19, hlds__make_hlds__add_pred__MaybeDet_20, hlds__make_hlds__add_pred__IsAddressTaken_22, hlds__make_hlds__add_pred__HasParallelConj_23, hlds__make_hlds__add_pred__VarNameRemap_29, &hlds__make_hlds__add_pred__NewProc0_30);
    }
#line 406 "add_pred.m"
    {
#line 406 "add_pred.m"
      hlds__hlds_pred__proc_info_set_inst_varset_3_p_0(hlds__make_hlds__add_pred__InstVarSet_14, hlds__make_hlds__add_pred__NewProc0_30, &hlds__make_hlds__add_pred__NewProc_31);
    }
#line 407 "add_pred.m"
    {
#line 407 "add_pred.m"
      mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, ((MR_Box) (*hlds__make_hlds__add_pred__ModeId_26)), ((MR_Box) (hlds__make_hlds__add_pred__NewProc_31)), hlds__make_hlds__add_pred__Procs0_27, &hlds__make_hlds__add_pred__Procs_32);
    }
#line 408 "add_pred.m"
    {
#line 408 "add_pred.m"
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(hlds__make_hlds__add_pred__Procs_32, hlds__make_hlds__add_pred__PredInfo0_24, hlds__make_hlds__add_pred__PredInfo_25);
#line 408 "add_pred.m"
      return;
    }
#line 398 "add_pred.m"
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
#line 101 "add_pred.m"
  {
#line 101 "add_pred.m"
    MR_bool hlds__make_hlds__add_pred__succeeded;
#line 101 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Status_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__HeadVar__12_12, (MR_Integer) 0)));
#line 101 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__NeedQual_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__HeadVar__12_12, (MR_Integer) 1)));
#line 101 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Types_34;
#line 101 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__MaybeModes0_35;
#line 101 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_52_52;
#line 101 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_53_53;
#line 106 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Modes0_36;

#line 102 "add_pred.m"
    {
#line 102 "add_pred.m"
      parse_tree__prog_util__split_types_and_modes_3_p_0(hlds__make_hlds__add_pred__TypesAndModes_23, &hlds__make_hlds__add_pred__Types_34, &hlds__make_hlds__add_pred__MaybeModes0_35);
    }
#line 103 "add_pred.m"
    {
#line 103 "add_pred.m"
      hlds__make_hlds__add_pred__add_new_pred_15_p_0(hlds__make_hlds__add_pred__TypeVarSet_18, hlds__make_hlds__add_pred__ExistQVars_20, hlds__make_hlds__add_pred__PredName_22, hlds__make_hlds__add_pred__Types_34, hlds__make_hlds__add_pred__Purity_25, hlds__make_hlds__add_pred__ClassContext_26, hlds__make_hlds__add_pred__Markers_27, hlds__make_hlds__add_pred__Context_28, hlds__make_hlds__add_pred__Status_29, hlds__make_hlds__add_pred__NeedQual_30, hlds__make_hlds__add_pred__PredOrFunc_21, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_48, &hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_52_52, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_50, &hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_53_53);
    }
#line 106 "add_pred.m"
    hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__PredOrFunc_21 == (MR_Integer) 0);
#line 106 "add_pred.m"
    if (hlds__make_hlds__add_pred__succeeded)
#line 106 "add_pred.m"
      {
#line 113 "add_pred.m"
        hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__MaybeDet_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 106 "add_pred.m"
        if (hlds__make_hlds__add_pred__succeeded)
#line 106 "add_pred.m"
          {
#line 107 "add_pred.m"
            hlds__make_hlds__add_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pred__MaybeModes0_35)) == (MR_mktag((MR_Integer) 1)));
#line 107 "add_pred.m"
            if (hlds__make_hlds__add_pred__succeeded)
#line 107 "add_pred.m"
              {
#line 107 "add_pred.m"
                hlds__make_hlds__add_pred__Modes0_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__MaybeModes0_35, (MR_Integer) 0)));
#line 112 "add_pred.m"
                hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__Modes0_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 107 "add_pred.m"
              }
#line 106 "add_pred.m"
          }
#line 106 "add_pred.m"
      }
#line 3594 "hlds.make_hlds.add_pred.c"
    if (hlds__make_hlds__add_pred__succeeded)
#line 3596 "hlds.make_hlds.add_pred.c"
      {
#line 145 "add_pred.m"
        *hlds__make_hlds__add_pred__MaybePredProcId_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 145 "add_pred.m"
        *hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_49 = hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_52_52;
#line 145 "add_pred.m"
        *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_51 = hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_53_53;
#line 3604 "hlds.make_hlds.add_pred.c"
      }
#line 3606 "hlds.make_hlds.add_pred.c"
    else
#line 3608 "hlds.make_hlds.add_pred.c"
      {
#line 121 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__V_38_38;

#line 119 "add_pred.m"
        hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__PredOrFunc_21 == (MR_Integer) 1);
#line 119 "add_pred.m"
        if (hlds__make_hlds__add_pred__succeeded)
#line 119 "add_pred.m"
          {
#line 120 "add_pred.m"
            hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__MaybeModes0_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 119 "add_pred.m"
            if (hlds__make_hlds__add_pred__succeeded)
#line 119 "add_pred.m"
              {
#line 121 "add_pred.m"
                hlds__make_hlds__add_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pred__MaybeDet_24)) == (MR_mktag((MR_Integer) 1)));
#line 121 "add_pred.m"
                if (hlds__make_hlds__add_pred__succeeded)
#line 121 "add_pred.m"
                  hlds__make_hlds__add_pred__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__MaybeDet_24, (MR_Integer) 0)));
#line 119 "add_pred.m"
              }
#line 119 "add_pred.m"
          }
#line 3635 "hlds.make_hlds.add_pred.c"
        if (hlds__make_hlds__add_pred__succeeded)
#line 3637 "hlds.make_hlds.add_pred.c"
          {
#line 3639 "hlds.make_hlds.add_pred.c"
            MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_61_61;
#line 3641 "hlds.make_hlds.add_pred.c"
            MR_Integer hlds__make_hlds__add_pred__Arity_39;
#line 3643 "hlds.make_hlds.add_pred.c"
            MR_Integer hlds__make_hlds__add_pred__FuncArity_40;
#line 3645 "hlds.make_hlds.add_pred.c"
            MR_Word hlds__make_hlds__add_pred__InMode_41;
#line 3647 "hlds.make_hlds.add_pred.c"
            MR_Word hlds__make_hlds__add_pred__InModes_42;
#line 3649 "hlds.make_hlds.add_pred.c"
            MR_Word hlds__make_hlds__add_pred__OutMode_43;
#line 3651 "hlds.make_hlds.add_pred.c"
            MR_Word hlds__make_hlds__add_pred__Modes_45;
#line 3653 "hlds.make_hlds.add_pred.c"
            MR_Word hlds__make_hlds__add_pred__IsClassMethod_46;
#line 3655 "hlds.make_hlds.add_pred.c"
            MR_Word hlds__make_hlds__add_pred__PredProcId_47;
#line 3657 "hlds.make_hlds.add_pred.c"
            MR_Word hlds__make_hlds__add_pred__V_55_55;

#line 123 "add_pred.m"
            {
#line 123 "add_pred.m"
              mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__make_hlds__add_pred__Types_34, &hlds__make_hlds__add_pred__Arity_39);
            }
#line 124 "add_pred.m"
            {
#line 124 "add_pred.m"
              parse_tree__prog_util__adjust_func_arity_3_p_1((MR_Integer) 1, &hlds__make_hlds__add_pred__FuncArity_40, hlds__make_hlds__add_pred__Arity_39);
            }
#line 125 "add_pred.m"
            {
#line 125 "add_pred.m"
              parse_tree__prog_mode__in_mode_1_p_0(&hlds__make_hlds__add_pred__InMode_41);
            }
#line 3675 "hlds.make_hlds.add_pred.c"
            hlds__make_hlds__add_pred__TypeCtorInfo_61_61 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 126 "add_pred.m"
            {
#line 126 "add_pred.m"
              mercury__list__duplicate_3_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_61_61, hlds__make_hlds__add_pred__FuncArity_40, ((MR_Box) (hlds__make_hlds__add_pred__InMode_41)), &hlds__make_hlds__add_pred__InModes_42);
            }
#line 127 "add_pred.m"
            {
#line 127 "add_pred.m"
              parse_tree__prog_mode__out_mode_1_p_0(&hlds__make_hlds__add_pred__OutMode_43);
            }
#line 128 "add_pred.m"
            {
#line 128 "add_pred.m"
              hlds__make_hlds__add_pred__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 128 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_55_55, 0) = ((MR_Box) (hlds__make_hlds__add_pred__OutMode_43));
#line 128 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 128 "add_pred.m"
            }
#line 128 "add_pred.m"
            {
#line 128 "add_pred.m"
              mercury__list__append_3_p_1(hlds__make_hlds__add_pred__TypeCtorInfo_61_61, hlds__make_hlds__add_pred__InModes_42, hlds__make_hlds__add_pred__V_55_55, &hlds__make_hlds__add_pred__Modes_45);
            }
#line 135 "add_pred.m"
            {
#line 135 "add_pred.m"
              hlds__make_hlds__add_pred__succeeded = hlds__hlds_pred__check_marker_2_p_0(hlds__make_hlds__add_pred__Markers_27, (MR_Integer) 9);
            }
#line 137 "add_pred.m"
            if (hlds__make_hlds__add_pred__succeeded)
#line 136 "add_pred.m"
              hlds__make_hlds__add_pred__IsClassMethod_46 = (MR_Integer) 1;
#line 137 "add_pred.m"
            else
#line 138 "add_pred.m"
              hlds__make_hlds__add_pred__IsClassMethod_46 = (MR_Integer) 0;
#line 140 "add_pred.m"
            {
#line 140 "add_pred.m"
              hlds__make_hlds__add_pred__module_add_mode_13_p_0(hlds__make_hlds__add_pred__InstVarSet_19, hlds__make_hlds__add_pred__PredName_22, hlds__make_hlds__add_pred__Modes_45, hlds__make_hlds__add_pred__MaybeDet_24, hlds__make_hlds__add_pred__Status_29, hlds__make_hlds__add_pred__Context_28, hlds__make_hlds__add_pred__PredOrFunc_21, hlds__make_hlds__add_pred__IsClassMethod_46, &hlds__make_hlds__add_pred__PredProcId_47, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_52_52, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_49, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_53_53, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_51);
            }
#line 142 "add_pred.m"
            {
#line 142 "add_pred.m"
              MR_Word base;
#line 142 "add_pred.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 142 "add_pred.m"
              *hlds__make_hlds__add_pred__MaybePredProcId_31 = base;
#line 142 "add_pred.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredProcId_47));
#line 142 "add_pred.m"
            }
#line 3732 "hlds.make_hlds.add_pred.c"
          }
#line 3734 "hlds.make_hlds.add_pred.c"
        else
#line 143 "add_pred.m"
          if ((hlds__make_hlds__add_pred__MaybeModes0_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 144 "add_pred.m"
            {
#line 145 "add_pred.m"
              *hlds__make_hlds__add_pred__MaybePredProcId_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 145 "add_pred.m"
              *hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_49 = hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_52_52;
#line 145 "add_pred.m"
              *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_51 = hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_53_53;
#line 144 "add_pred.m"
            }
#line 143 "add_pred.m"
          else
#line 134 "add_pred.m"
            {
#line 134 "add_pred.m"
              MR_Word hlds__make_hlds__add_pred__Modes_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__MaybeModes0_35, (MR_Integer) 0)));
#line 134 "add_pred.m"
              MR_Word hlds__make_hlds__add_pred__IsClassMethod_66;
#line 134 "add_pred.m"
              MR_Word hlds__make_hlds__add_pred__PredProcId_67;

#line 135 "add_pred.m"
              {
#line 135 "add_pred.m"
                hlds__make_hlds__add_pred__succeeded = hlds__hlds_pred__check_marker_2_p_0(hlds__make_hlds__add_pred__Markers_27, (MR_Integer) 9);
              }
#line 137 "add_pred.m"
              if (hlds__make_hlds__add_pred__succeeded)
#line 136 "add_pred.m"
                hlds__make_hlds__add_pred__IsClassMethod_66 = (MR_Integer) 1;
#line 137 "add_pred.m"
              else
#line 138 "add_pred.m"
                hlds__make_hlds__add_pred__IsClassMethod_66 = (MR_Integer) 0;
#line 140 "add_pred.m"
              {
#line 140 "add_pred.m"
                hlds__make_hlds__add_pred__module_add_mode_13_p_0(hlds__make_hlds__add_pred__InstVarSet_19, hlds__make_hlds__add_pred__PredName_22, hlds__make_hlds__add_pred__Modes_65, hlds__make_hlds__add_pred__MaybeDet_24, hlds__make_hlds__add_pred__Status_29, hlds__make_hlds__add_pred__Context_28, hlds__make_hlds__add_pred__PredOrFunc_21, hlds__make_hlds__add_pred__IsClassMethod_66, &hlds__make_hlds__add_pred__PredProcId_67, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_52_52, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_49, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_53_53, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_51);
              }
#line 142 "add_pred.m"
              {
#line 142 "add_pred.m"
                MR_Word base;
#line 142 "add_pred.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 142 "add_pred.m"
                *hlds__make_hlds__add_pred__MaybePredProcId_31 = base;
#line 142 "add_pred.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredProcId_67));
#line 142 "add_pred.m"
              }
#line 134 "add_pred.m"
            }
#line 3791 "hlds.make_hlds.add_pred.c"
      }
#line 101 "add_pred.m"
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
