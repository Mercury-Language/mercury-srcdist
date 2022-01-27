/*
** Automatically generated from `add_pred.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
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
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.add_special_pred.mih"
#include "hlds.make_hlds.make_hlds_error.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 645 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__maybe_check_field_access_function_7_p_0(
#line 645 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ModuleInfo_8,
#line 645 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__FuncName_9,
#line 645 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__FuncArity_10,
#line 645 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__FuncStatus_11,
#line 645 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_12,
#line 645 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_16,
#line 645 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_17);

#line 589 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__preds_do_add_implicit_12_p_0(
#line 589 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ModuleInfo_13,
#line 589 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ModuleName_14,
#line 589 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredName_15,
#line 589 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__Arity_16,
#line 589 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_17,
#line 589 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredStatus_18,
#line 589 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_19,
#line 589 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Origin_20,
#line 589 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ClausesInfo_21,
#line 589 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__PredId_22,
#line 589 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_PredicateTable_0_41,
#line 589 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_PredicateTable_42);

#line 544 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__unqualified_pred_error_5_p_0(
#line 544 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredName_6,
#line 544 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__Arity_7,
#line 544 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_8,
#line 544 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_13,
#line 544 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_14);

#line 534 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__unspecified_det_for_exported_6_p_0(
#line 534 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Name_7,
#line 534 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__Arity_8,
#line 534 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_9,
#line 534 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_10,
#line 534 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_15,
#line 534 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_16);

#line 503 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__unspecified_det_for_local_6_p_0(
#line 503 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Name_7,
#line 503 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__Arity_8,
#line 503 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_9,
#line 503 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_10,
#line 503 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_18,
#line 503 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_19);

#line 456 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__module_do_add_mode_11_p_0(
#line 456 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__InstVarSet_12,
#line 456 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__Arity_13,
#line 456 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Modes_14,
#line 456 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__MaybeDet_15,
#line 456 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__IsClassMethod_16,
#line 456 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__MContext_17,
#line 456 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_31,
#line 456 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_32,
#line 456 "add_pred.m"
  MR_Integer * hlds__make_hlds__add_pred__ProcId_19,
#line 456 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_33,
#line 456 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_34);

#line 244 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__add_builtin_5_p_0(
#line 244 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredId_6,
#line 244 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Types_7,
#line 244 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__CompilationTarget_8,
#line 244 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_62,
#line 244 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_63);

#line 153 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__add_new_pred_16_p_0(
#line 153 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Origin_17,
#line 153 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__TVarSet_18,
#line 153 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ExistQVars_19,
#line 153 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredName_20,
#line 153 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Types_21,
#line 153 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Purity_22,
#line 153 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Constraints_23,
#line 153 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Markers0_24,
#line 153 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_25,
#line 153 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredStatus0_26,
#line 153 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__NeedQual_27,
#line 153 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_28,
#line 153 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_61,
#line 153 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_62,
#line 153 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_63,
#line 153 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_64);


static /* final */ const MR_Box hlds__make_hlds__add_pred_scalar_common_1[53][2];

static /* final */ const MR_Box hlds__make_hlds__add_pred_scalar_common_2[1][4];

static /* final */ const MR_Box hlds__make_hlds__add_pred_scalar_common_3[4][1];

static /* final */ const MR_Box hlds__make_hlds__add_pred_scalar_common_5[3][3];


#line 267 "add_pred.m"
/* sealed */ struct hlds__make_hlds__add_pred__vector_common_type_4_0_s {
#line 267 "add_pred.m"
  const MR_String hlds__make_hlds__add_pred__vector_common_type_4_0__vct_4_f_0;
#line 267 "add_pred.m"
  const MR_Integer hlds__make_hlds__add_pred__vector_common_type_4_0__vct_4_f_1;
#line 267 "add_pred.m"
};

static /* final */ const struct hlds__make_hlds__add_pred__vector_common_type_4_0_s hlds__make_hlds__add_pred_vector_common_4[4];



static /* final */ const MR_Box hlds__make_hlds__add_pred_scalar_common_1[53][2] = {
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
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "mode"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[4])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of local predicates.)"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "to automatically infer the determinism"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "option if you want the compiler"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--infer-det"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Use the"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "option."))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[16])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--no-infer-det"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[18])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "you specified the"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[20])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "(This is an error because"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[22])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "must also be exported."))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[25])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: a field access function for an exported field"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[27])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[29])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[30])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_5[1])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_5[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_5[1])))
  },
  /* row 37 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pred_scalar_common_1[35])),
    ((MR_Box) (&hlds__make_hlds__add_pred_scalar_common_1[36]))
  },
  /* row 38 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pred_scalar_common_1[37])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 39 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pred_scalar_common_1[35])),
    ((MR_Box) (&hlds__make_hlds__add_pred_scalar_common_1[36]))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: no determinism declaration"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for type class method"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: no determinism declaration for local"))
  },
  /* row 46 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[24])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pred_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: no determinism declaration for exported"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Internal error: the unqualified predicate name"))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should have been qualified by prog_io.m."))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In declaration of"))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pred_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 170)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pred_scalar_common_3[4][1] = {
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
};

static /* final */ const MR_Box hlds__make_hlds__add_pred_scalar_common_5[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[34]))),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};


static /* final */ const struct hlds__make_hlds__add_pred__vector_common_type_4_0_s hlds__make_hlds__add_pred_vector_common_4[4] = {
  /* row 0 */
  {
    (MR_String) "builtin_compound_eq",
    (MR_Integer) 0
  },
  /* row 1 */
  {
    (MR_String) "builtin_compound_lt",
    (MR_Integer) 1
  },
  /* row 2 */
  {
    (MR_String) "store_at_ref",
    (MR_Integer) 2
  },
  /* row 3 */
  {
    (MR_String) "store_at_ref_impure",
    (MR_Integer) 2
  },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 645 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__maybe_check_field_access_function_7_p_0(
#line 645 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ModuleInfo_8,
#line 645 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__FuncName_9,
#line 645 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__FuncArity_10,
#line 645 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__FuncStatus_11,
#line 645 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_12,
#line 645 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_16,
#line 645 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_17)
#line 645 "add_pred.m"
{
#line 651 "add_pred.m"
  {
#line 651 "add_pred.m"
    MR_bool hlds__make_hlds__add_pred__succeeded;
#line 651 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__FieldName_15;
#line 652 "add_pred.m"
    MR_Integer hlds__make_hlds__add_pred__V_19_19;
#line 652 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__AccessType_14;

#line 652 "add_pred.m"
    {
#line 652 "add_pred.m"
      hlds__make_hlds__add_pred__succeeded = hlds__hlds_pred__is_field_access_function_name_5_p_0(hlds__make_hlds__add_pred__ModuleInfo_8, hlds__make_hlds__add_pred__FuncName_9, &hlds__make_hlds__add_pred__V_19_19, &hlds__make_hlds__add_pred__AccessType_14, &hlds__make_hlds__add_pred__FieldName_15);
    }
#line 652 "add_pred.m"
    if (hlds__make_hlds__add_pred__succeeded)
#line 652 "add_pred.m"
      hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__FuncArity_10 == hlds__make_hlds__add_pred__V_19_19);
#line 651 "add_pred.m"
    if (hlds__make_hlds__add_pred__succeeded)
#line 666 "add_pred.m"
      {
#line 666 "add_pred.m"
        MR_Integer hlds__make_hlds__add_pred__PredArity_30;
#line 666 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__FuncCallId_31;
#line 666 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__CtorFieldTable_32;
#line 677 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__TypeInfo_39_49;
#line 677 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__FieldDefn_33;
#line 677 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__DefnStatus_35;
#line 677 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__V_41_41;
#line 677 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__V_43_43;
#line 677 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__V_48_48;
#line 677 "add_pred.m"
        MR_Box hlds__make_hlds__add_pred__conv0_V_41_41;
#line 680 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__V_44_44;
#line 678 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__V_34_34;
#line 678 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__V_36_36;
#line 678 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__V_37_37;
#line 678 "add_pred.m"
        MR_Integer hlds__make_hlds__add_pred__V_38_38;

#line 669 "add_pred.m"
        {
#line 669 "add_pred.m"
          parse_tree__prog_util__adjust_func_arity_3_p_0((MR_Integer) 1, hlds__make_hlds__add_pred__FuncArity_10, &hlds__make_hlds__add_pred__PredArity_30);
        }
#line 670 "add_pred.m"
        {
#line 670 "add_pred.m"
          hlds__make_hlds__add_pred__FuncCallId_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 670 "add_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__FuncCallId_31, 0) = ((MR_Box) ((MR_Integer) 1));
#line 670 "add_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__FuncCallId_31, 1) = ((MR_Box) (hlds__make_hlds__add_pred__FuncName_9));
#line 670 "add_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__FuncCallId_31, 2) = ((MR_Box) (hlds__make_hlds__add_pred__PredArity_30));
#line 670 "add_pred.m"
        }
#line 673 "add_pred.m"
        {
#line 673 "add_pred.m"
          hlds__hlds_module__module_info_get_ctor_field_table_2_p_0(hlds__make_hlds__add_pred__ModuleInfo_8, &hlds__make_hlds__add_pred__CtorFieldTable_32);
        }
#line 677 "add_pred.m"
        {
#line 677 "add_pred.m"
          hlds__make_hlds__add_pred__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[2], hlds__make_hlds__add_pred__CtorFieldTable_32, ((MR_Box) (hlds__make_hlds__add_pred__FieldName_15)), &hlds__make_hlds__add_pred__conv0_V_41_41);
        }
#line 677 "add_pred.m"
        if (hlds__make_hlds__add_pred__succeeded)
#line 677 "add_pred.m"
          {
#line 677 "add_pred.m"
            hlds__make_hlds__add_pred__V_41_41 = ((MR_Word) hlds__make_hlds__add_pred__conv0_V_41_41);
#line 677 "add_pred.m"
            hlds__make_hlds__add_pred__succeeded = MR_TRUE;
#line 677 "add_pred.m"
          }
#line 677 "add_pred.m"
        if (hlds__make_hlds__add_pred__succeeded)
#line 677 "add_pred.m"
          {
#line 677 "add_pred.m"
            hlds__make_hlds__add_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pred__V_41_41)) == (MR_mktag((MR_Integer) 1)));
#line 677 "add_pred.m"
            if (hlds__make_hlds__add_pred__succeeded)
#line 677 "add_pred.m"
              {
#line 677 "add_pred.m"
                hlds__make_hlds__add_pred__FieldDefn_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_41_41, (MR_Integer) 0)));
#line 677 "add_pred.m"
                hlds__make_hlds__add_pred__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_41_41, (MR_Integer) 1)));
#line 819 "hlds.make_hlds.add_pred.c"
                hlds__make_hlds__add_pred__TypeInfo_39_49 = (MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[2];
#line 677 "add_pred.m"
                {
#line 677 "add_pred.m"
                  hlds__make_hlds__add_pred__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__add_pred__TypeInfo_39_49, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (hlds__make_hlds__add_pred__V_48_48)));
                }
#line 677 "add_pred.m"
                if (hlds__make_hlds__add_pred__succeeded)
#line 677 "add_pred.m"
                  {
#line 680 "add_pred.m"
                    hlds__make_hlds__add_pred__V_44_44 = (MR_Word) hlds__make_hlds__add_pred__FuncStatus_11;
#line 680 "add_pred.m"
                    hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__V_44_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 680 "add_pred.m"
                    hlds__make_hlds__add_pred__succeeded = !(hlds__make_hlds__add_pred__succeeded);
#line 677 "add_pred.m"
                    if (hlds__make_hlds__add_pred__succeeded)
#line 677 "add_pred.m"
                      {
#line 678 "add_pred.m"
                        hlds__make_hlds__add_pred__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__FieldDefn_33, (MR_Integer) 0)));
#line 678 "add_pred.m"
                        hlds__make_hlds__add_pred__DefnStatus_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__FieldDefn_33, (MR_Integer) 1)));
#line 678 "add_pred.m"
                        hlds__make_hlds__add_pred__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__FieldDefn_33, (MR_Integer) 2)));
#line 678 "add_pred.m"
                        hlds__make_hlds__add_pred__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__FieldDefn_33, (MR_Integer) 3)));
#line 678 "add_pred.m"
                        hlds__make_hlds__add_pred__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__FieldDefn_33, (MR_Integer) 4)));
#line 679 "add_pred.m"
                        hlds__make_hlds__add_pred__V_43_43 = (MR_Word) hlds__make_hlds__add_pred__DefnStatus_35;
#line 679 "add_pred.m"
                        hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__V_43_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 677 "add_pred.m"
                      }
#line 677 "add_pred.m"
                  }
#line 677 "add_pred.m"
              }
#line 677 "add_pred.m"
          }
#line 674 "add_pred.m"
        if (hlds__make_hlds__add_pred__succeeded)
#line 690 "add_pred.m"
          {
#line 690 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__Pieces_55;
#line 690 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__Msg_56;
#line 690 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__Spec_57;
#line 690 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_60_60;
#line 690 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_61_61;
#line 690 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_76_76;
#line 690 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_77_77;
#line 690 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_81_81;

#line 691 "add_pred.m"
            {
#line 691 "add_pred.m"
              hlds__make_hlds__add_pred__V_61_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 691 "add_pred.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_61_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 691 "add_pred.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_61_61, 1) = ((MR_Box) (hlds__make_hlds__add_pred__FuncCallId_31));
#line 691 "add_pred.m"
            }
#line 691 "add_pred.m"
            {
#line 691 "add_pred.m"
              hlds__make_hlds__add_pred__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 691 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_60_60, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_61_61));
#line 691 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[32])));
#line 691 "add_pred.m"
            }
#line 691 "add_pred.m"
            {
#line 691 "add_pred.m"
              hlds__make_hlds__add_pred__Pieces_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 691 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Pieces_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[52])));
#line 691 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Pieces_55, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_60_60));
#line 691 "add_pred.m"
            }
#line 694 "add_pred.m"
            {
#line 694 "add_pred.m"
              hlds__make_hlds__add_pred__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 694 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_77_77, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Pieces_55));
#line 694 "add_pred.m"
            }
#line 694 "add_pred.m"
            {
#line 694 "add_pred.m"
              hlds__make_hlds__add_pred__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 694 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_76_76, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_77_77));
#line 694 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 694 "add_pred.m"
            }
#line 694 "add_pred.m"
            {
#line 694 "add_pred.m"
              hlds__make_hlds__add_pred__Msg_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 694 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_56, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Context_12));
#line 694 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_56, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_76_76));
#line 694 "add_pred.m"
            }
#line 695 "add_pred.m"
            {
#line 695 "add_pred.m"
              hlds__make_hlds__add_pred__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 695 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_81_81, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Msg_56));
#line 695 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 695 "add_pred.m"
            }
#line 695 "add_pred.m"
            {
#line 695 "add_pred.m"
              hlds__make_hlds__add_pred__Spec_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 695 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 695 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 695 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_57, 2) = ((MR_Box) (hlds__make_hlds__add_pred__V_81_81));
#line 695 "add_pred.m"
            }
#line 696 "add_pred.m"
            {
#line 696 "add_pred.m"
              MR_Word base;
#line 696 "add_pred.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 696 "add_pred.m"
              *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_17 = base;
#line 696 "add_pred.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Spec_57));
#line 696 "add_pred.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_16));
#line 696 "add_pred.m"
            }
#line 690 "add_pred.m"
          }
#line 674 "add_pred.m"
        else
#line 674 "add_pred.m"
          *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_17 = hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_16;
#line 666 "add_pred.m"
      }
#line 651 "add_pred.m"
    else
#line 651 "add_pred.m"
      *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_17 = hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_16;
#line 651 "add_pred.m"
  }
#line 645 "add_pred.m"
}

#line 589 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__preds_do_add_implicit_12_p_0(
#line 589 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ModuleInfo_13,
#line 589 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ModuleName_14,
#line 589 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredName_15,
#line 589 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__Arity_16,
#line 589 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_17,
#line 589 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredStatus_18,
#line 589 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_19,
#line 589 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Origin_20,
#line 589 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ClausesInfo_21,
#line 589 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__PredId_22,
#line 589 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_PredicateTable_0_41,
#line 589 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_PredicateTable_42)
#line 589 "add_pred.m"
{
#line 595 "add_pred.m"
  {
#line 595 "add_pred.m"
    MR_bool hlds__make_hlds__add_pred__succeeded;
#line 595 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_55_55 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 595 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_58_58;
#line 595 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TVarSet0_24;
#line 595 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TypeVars_25;
#line 595 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TVarSet_26;
#line 595 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Types_27;
#line 595 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Proofs_28;
#line 595 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__ConstraintMap_29;
#line 595 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Markers0_32;
#line 595 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__VarNameRemap_33;
#line 595 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredInfo0_34;
#line 595 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Markers_35;
#line 595 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredInfo_36;
#line 595 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredIds_37;
#line 595 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_44_44;

#line 596 "add_pred.m"
    {
#line 596 "add_pred.m"
      mercury__varset__init_1_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_55_55, &hlds__make_hlds__add_pred__TVarSet0_24);
    }
#line 597 "add_pred.m"
    {
#line 597 "add_pred.m"
      parse_tree__prog_util__make_n_fresh_vars_5_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_55_55, (MR_String) "T", hlds__make_hlds__add_pred__Arity_16, &hlds__make_hlds__add_pred__TypeVars_25, hlds__make_hlds__add_pred__TVarSet0_24, &hlds__make_hlds__add_pred__TVarSet_26);
    }
#line 598 "add_pred.m"
    {
#line 598 "add_pred.m"
      hlds__make_hlds__add_pred__V_44_44 = mercury__map__init_0_f_0((MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
    }
#line 598 "add_pred.m"
    {
#line 598 "add_pred.m"
      parse_tree__prog_type__var_list_to_type_list_3_p_0(hlds__make_hlds__add_pred__V_44_44, hlds__make_hlds__add_pred__TypeVars_25, &hlds__make_hlds__add_pred__Types_27);
    }
#line 1078 "hlds.make_hlds.add_pred.c"
    hlds__make_hlds__add_pred__TypeCtorInfo_58_58 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 599 "add_pred.m"
    {
#line 599 "add_pred.m"
      mercury__map__init_1_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_58_58, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, &hlds__make_hlds__add_pred__Proofs_28);
    }
#line 600 "add_pred.m"
    {
#line 600 "add_pred.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, hlds__make_hlds__add_pred__TypeCtorInfo_58_58, &hlds__make_hlds__add_pred__ConstraintMap_29);
    }
#line 607 "add_pred.m"
    {
#line 607 "add_pred.m"
      hlds__hlds_pred__init_markers_1_p_0(&hlds__make_hlds__add_pred__Markers0_32);
    }
#line 608 "add_pred.m"
    {
#line 608 "add_pred.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, &hlds__make_hlds__add_pred__VarNameRemap_33);
    }
#line 609 "add_pred.m"
    {
#line 609 "add_pred.m"
      hlds__hlds_pred__pred_info_init_18_p_0(hlds__make_hlds__add_pred__ModuleName_14, hlds__make_hlds__add_pred__PredName_15, hlds__make_hlds__add_pred__Arity_16, hlds__make_hlds__add_pred__PredOrFunc_17, hlds__make_hlds__add_pred__Context_19, hlds__make_hlds__add_pred__Origin_20, hlds__make_hlds__add_pred__PredStatus_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_pred__Markers0_32, hlds__make_hlds__add_pred__Types_27, hlds__make_hlds__add_pred__TVarSet_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[33], hlds__make_hlds__add_pred__Proofs_28, hlds__make_hlds__add_pred__ConstraintMap_29, hlds__make_hlds__add_pred__ClausesInfo_21, hlds__make_hlds__add_pred__VarNameRemap_33, &hlds__make_hlds__add_pred__PredInfo0_34);
    }
#line 613 "add_pred.m"
    {
#line 613 "add_pred.m"
      hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 2, hlds__make_hlds__add_pred__Markers0_32, &hlds__make_hlds__add_pred__Markers_35);
    }
#line 614 "add_pred.m"
    {
#line 614 "add_pred.m"
      hlds__hlds_pred__pred_info_set_markers_3_p_0(hlds__make_hlds__add_pred__Markers_35, hlds__make_hlds__add_pred__PredInfo0_34, &hlds__make_hlds__add_pred__PredInfo_36);
    }
#line 615 "add_pred.m"
    {
#line 615 "add_pred.m"
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredicateTable_0_41, (MR_Integer) 0, hlds__make_hlds__add_pred__PredOrFunc_17, hlds__make_hlds__add_pred__PredName_15, hlds__make_hlds__add_pred__Arity_16, &hlds__make_hlds__add_pred__PredIds_37);
    }
#line 622 "add_pred.m"
    if ((hlds__make_hlds__add_pred__PredIds_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 618 "add_pred.m"
      {
#line 618 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__MQInfo_38;

#line 619 "add_pred.m"
        {
#line 619 "add_pred.m"
          hlds__hlds_module__module_info_get_partial_qualifier_info_2_p_0(hlds__make_hlds__add_pred__ModuleInfo_13, &hlds__make_hlds__add_pred__MQInfo_38);
        }
#line 620 "add_pred.m"
        {
#line 620 "add_pred.m"
          hlds__pred_table__predicate_table_insert_qual_6_p_0(hlds__make_hlds__add_pred__PredInfo_36, (MR_Integer) 1, hlds__make_hlds__add_pred__MQInfo_38, hlds__make_hlds__add_pred__PredId_22, hlds__make_hlds__add_pred__STATE_VARIABLE_PredicateTable_0_41, hlds__make_hlds__add_pred__STATE_VARIABLE_PredicateTable_42);
        }
#line 618 "add_pred.m"
      }
#line 622 "add_pred.m"
    else
#line 623 "add_pred.m"
      {
#line 624 "add_pred.m"
        {
#line 624 "add_pred.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_pred", (MR_String) "predicate \140hlds.make_hlds.add_pred.preds_do_add_implicit\'/12", (MR_String) "search succeeded");
#line 624 "add_pred.m"
          return;
        }
#line 623 "add_pred.m"
      }
#line 595 "add_pred.m"
  }
#line 589 "add_pred.m"
}

#line 544 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__unqualified_pred_error_5_p_0(
#line 544 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredName_6,
#line 544 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__Arity_7,
#line 544 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_8,
#line 544 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_13,
#line 544 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_14)
#line 544 "add_pred.m"
{
#line 547 "add_pred.m"
  {
#line 547 "add_pred.m"
    MR_bool hlds__make_hlds__add_pred__succeeded;
#line 547 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Pieces_10;
#line 547 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Msg_11;
#line 547 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Spec_12;
#line 547 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_17_17;
#line 547 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_18_18;
#line 547 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_19_19;
#line 547 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_24_24;
#line 547 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_25_25;
#line 547 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_29_29;

#line 549 "add_pred.m"
    {
#line 549 "add_pred.m"
      hlds__make_hlds__add_pred__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 549 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_19_19, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredName_6));
#line 549 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_19_19, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Arity_7));
#line 549 "add_pred.m"
    }
#line 549 "add_pred.m"
    {
#line 549 "add_pred.m"
      hlds__make_hlds__add_pred__V_18_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 549 "add_pred.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_18_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 549 "add_pred.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_18_18, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_19_19));
#line 549 "add_pred.m"
    }
#line 549 "add_pred.m"
    {
#line 549 "add_pred.m"
      hlds__make_hlds__add_pred__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 549 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_17_17, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_18_18));
#line 549 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[51])));
#line 549 "add_pred.m"
    }
#line 548 "add_pred.m"
    {
#line 548 "add_pred.m"
      hlds__make_hlds__add_pred__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 548 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[49])));
#line 548 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Pieces_10, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_17_17));
#line 548 "add_pred.m"
    }
#line 551 "add_pred.m"
    {
#line 551 "add_pred.m"
      hlds__make_hlds__add_pred__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 551 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_25_25, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Pieces_10));
#line 551 "add_pred.m"
    }
#line 551 "add_pred.m"
    {
#line 551 "add_pred.m"
      hlds__make_hlds__add_pred__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 551 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_24_24, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_25_25));
#line 551 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 551 "add_pred.m"
    }
#line 551 "add_pred.m"
    {
#line 551 "add_pred.m"
      hlds__make_hlds__add_pred__Msg_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 551 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_11, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Context_8));
#line 551 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_11, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_24_24));
#line 551 "add_pred.m"
    }
#line 552 "add_pred.m"
    {
#line 552 "add_pred.m"
      hlds__make_hlds__add_pred__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 552 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_29_29, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Msg_11));
#line 552 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 552 "add_pred.m"
    }
#line 552 "add_pred.m"
    {
#line 552 "add_pred.m"
      hlds__make_hlds__add_pred__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 552 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 552 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 552 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_12, 2) = ((MR_Box) (hlds__make_hlds__add_pred__V_29_29));
#line 552 "add_pred.m"
    }
#line 553 "add_pred.m"
    {
#line 553 "add_pred.m"
      MR_Word base;
#line 553 "add_pred.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 553 "add_pred.m"
      *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_14 = base;
#line 553 "add_pred.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Spec_12));
#line 553 "add_pred.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_13));
#line 553 "add_pred.m"
    }
#line 547 "add_pred.m"
  }
#line 544 "add_pred.m"
}

#line 534 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__unspecified_det_for_exported_6_p_0(
#line 534 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Name_7,
#line 534 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__Arity_8,
#line 534 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_9,
#line 534 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_10,
#line 534 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_15,
#line 534 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_16)
#line 534 "add_pred.m"
{
#line 537 "add_pred.m"
  {
#line 537 "add_pred.m"
    MR_bool hlds__make_hlds__add_pred__succeeded;
#line 537 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Pieces_12;
#line 537 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Msg_13;
#line 537 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Spec_14;
#line 537 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_19_19;
#line 537 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_20_20;
#line 537 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_21_21;
#line 537 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_22_22;
#line 537 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_23_23;
#line 537 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_28_28;
#line 537 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_29_29;
#line 537 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_33_33;

#line 539 "add_pred.m"
    {
#line 539 "add_pred.m"
      hlds__make_hlds__add_pred__V_20_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 539 "add_pred.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_20_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 539 "add_pred.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_20_20, 1) = ((MR_Box) (hlds__make_hlds__add_pred__PredOrFunc_9));
#line 539 "add_pred.m"
    }
#line 539 "add_pred.m"
    {
#line 539 "add_pred.m"
      hlds__make_hlds__add_pred__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 539 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_23_23, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Name_7));
#line 539 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_23_23, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Arity_8));
#line 539 "add_pred.m"
    }
#line 539 "add_pred.m"
    {
#line 539 "add_pred.m"
      hlds__make_hlds__add_pred__V_22_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 539 "add_pred.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_22_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 539 "add_pred.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_22_22, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_23_23));
#line 539 "add_pred.m"
    }
#line 539 "add_pred.m"
    {
#line 539 "add_pred.m"
      hlds__make_hlds__add_pred__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 539 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_21_21, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_22_22));
#line 539 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[44])));
#line 539 "add_pred.m"
    }
#line 539 "add_pred.m"
    {
#line 539 "add_pred.m"
      hlds__make_hlds__add_pred__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 539 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_19_19, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_20_20));
#line 539 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_19_19, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_21_21));
#line 539 "add_pred.m"
    }
#line 538 "add_pred.m"
    {
#line 538 "add_pred.m"
      hlds__make_hlds__add_pred__Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 538 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Pieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[48])));
#line 538 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Pieces_12, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_19_19));
#line 538 "add_pred.m"
    }
#line 540 "add_pred.m"
    {
#line 540 "add_pred.m"
      hlds__make_hlds__add_pred__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 540 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_29_29, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Pieces_12));
#line 540 "add_pred.m"
    }
#line 540 "add_pred.m"
    {
#line 540 "add_pred.m"
      hlds__make_hlds__add_pred__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 540 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_28_28, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_29_29));
#line 540 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 540 "add_pred.m"
    }
#line 540 "add_pred.m"
    {
#line 540 "add_pred.m"
      hlds__make_hlds__add_pred__Msg_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 540 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_13, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Context_10));
#line 540 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_13, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_28_28));
#line 540 "add_pred.m"
    }
#line 541 "add_pred.m"
    {
#line 541 "add_pred.m"
      hlds__make_hlds__add_pred__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 541 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_33_33, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Msg_13));
#line 541 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 541 "add_pred.m"
    }
#line 541 "add_pred.m"
    {
#line 541 "add_pred.m"
      hlds__make_hlds__add_pred__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 541 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 541 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 541 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_14, 2) = ((MR_Box) (hlds__make_hlds__add_pred__V_33_33));
#line 541 "add_pred.m"
    }
#line 542 "add_pred.m"
    {
#line 542 "add_pred.m"
      MR_Word base;
#line 542 "add_pred.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 542 "add_pred.m"
      *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_16 = base;
#line 542 "add_pred.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Spec_14));
#line 542 "add_pred.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_15));
#line 542 "add_pred.m"
    }
#line 537 "add_pred.m"
  }
#line 534 "add_pred.m"
}

#line 503 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__unspecified_det_for_local_6_p_0(
#line 503 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Name_7,
#line 503 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__Arity_8,
#line 503 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_9,
#line 503 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_10,
#line 503 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_18,
#line 503 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_19)
#line 503 "add_pred.m"
{
#line 506 "add_pred.m"
  {
#line 506 "add_pred.m"
    MR_bool hlds__make_hlds__add_pred__succeeded;
#line 506 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__MainPieces_12;
#line 506 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__InnerComponents_14;
#line 506 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Msg_15;
#line 506 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Spec_17;
#line 506 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_22_22;
#line 506 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_23_23;
#line 506 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_24_24;
#line 506 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_56_56;
#line 506 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_61_61;
#line 506 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_62_62;
#line 506 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_71_71;

#line 508 "add_pred.m"
    {
#line 508 "add_pred.m"
      hlds__make_hlds__add_pred__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 508 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_24_24, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredOrFunc_9));
#line 508 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_24_24, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Name_7));
#line 508 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_24_24, 2) = ((MR_Box) (hlds__make_hlds__add_pred__Arity_8));
#line 508 "add_pred.m"
    }
#line 508 "add_pred.m"
    {
#line 508 "add_pred.m"
      hlds__make_hlds__add_pred__V_23_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 508 "add_pred.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_23_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 508 "add_pred.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_23_23, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_24_24));
#line 508 "add_pred.m"
    }
#line 508 "add_pred.m"
    {
#line 508 "add_pred.m"
      hlds__make_hlds__add_pred__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 508 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_22_22, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_23_23));
#line 508 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[44])));
#line 508 "add_pred.m"
    }
#line 507 "add_pred.m"
    {
#line 507 "add_pred.m"
      hlds__make_hlds__add_pred__MainPieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 507 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__MainPieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[45])));
#line 507 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__MainPieces_12, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_22_22));
#line 507 "add_pred.m"
    }
#line 515 "add_pred.m"
    {
#line 515 "add_pred.m"
      hlds__make_hlds__add_pred__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 515 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_56_56, 0) = ((MR_Box) (hlds__make_hlds__add_pred__MainPieces_12));
#line 515 "add_pred.m"
    }
#line 515 "add_pred.m"
    {
#line 515 "add_pred.m"
      hlds__make_hlds__add_pred__InnerComponents_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 515 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__InnerComponents_14, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_56_56));
#line 515 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__InnerComponents_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[47])));
#line 515 "add_pred.m"
    }
#line 518 "add_pred.m"
    {
#line 518 "add_pred.m"
      hlds__make_hlds__add_pred__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 518 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_62_62, 0) = ((MR_Box) (((MR_Integer) 170 | (((MR_Integer) 0 << (MR_Integer) 10)))));
#line 518 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_62_62, 1) = ((MR_Box) (hlds__make_hlds__add_pred__InnerComponents_14));
#line 518 "add_pred.m"
    }
#line 518 "add_pred.m"
    {
#line 518 "add_pred.m"
      hlds__make_hlds__add_pred__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 518 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_61_61, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_62_62));
#line 518 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 518 "add_pred.m"
    }
#line 517 "add_pred.m"
    {
#line 517 "add_pred.m"
      hlds__make_hlds__add_pred__Msg_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 517 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_15, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Context_10));
#line 517 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_15, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_61_61));
#line 517 "add_pred.m"
    }
#line 520 "add_pred.m"
    {
#line 520 "add_pred.m"
      hlds__make_hlds__add_pred__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 520 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_71_71, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Msg_15));
#line 520 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 520 "add_pred.m"
    }
#line 520 "add_pred.m"
    {
#line 520 "add_pred.m"
      hlds__make_hlds__add_pred__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 520 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_2[0])));
#line 520 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 520 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_17, 2) = ((MR_Box) (hlds__make_hlds__add_pred__V_71_71));
#line 520 "add_pred.m"
    }
#line 521 "add_pred.m"
    {
#line 521 "add_pred.m"
      MR_Word base;
#line 521 "add_pred.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 521 "add_pred.m"
      *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_19 = base;
#line 521 "add_pred.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Spec_17));
#line 521 "add_pred.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_18));
#line 521 "add_pred.m"
    }
#line 506 "add_pred.m"
  }
#line 503 "add_pred.m"
}

#line 456 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__module_do_add_mode_11_p_0(
#line 456 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__InstVarSet_12,
#line 456 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__Arity_13,
#line 456 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Modes_14,
#line 456 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__MaybeDet_15,
#line 456 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__IsClassMethod_16,
#line 456 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__MContext_17,
#line 456 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_31,
#line 456 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_32,
#line 456 "add_pred.m"
  MR_Integer * hlds__make_hlds__add_pred__ProcId_19,
#line 456 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_33,
#line 456 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_34)
#line 456 "add_pred.m"
{
#line 462 "add_pred.m"
  {
#line 462 "add_pred.m"
    MR_bool hlds__make_hlds__add_pred__succeeded;
#line 462 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__DetismDecl_21;
#line 462 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_38_38;

#line 489 "add_pred.m"
    if ((hlds__make_hlds__add_pred__MaybeDet_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 465 "add_pred.m"
      {
#line 465 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__PredStatus_22;
#line 465 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__PredOrFunc_23;
#line 465 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__PredModule_24;
#line 465 "add_pred.m"
        MR_String hlds__make_hlds__add_pred__PredName_25;
#line 465 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__PredSymName_26;

#line 466 "add_pred.m"
        hlds__make_hlds__add_pred__DetismDecl_21 = (MR_Integer) 2;
#line 467 "add_pred.m"
        {
#line 467 "add_pred.m"
          hlds__hlds_pred__pred_info_get_status_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_31, &hlds__make_hlds__add_pred__PredStatus_22);
        }
#line 468 "add_pred.m"
        {
#line 468 "add_pred.m"
          hlds__make_hlds__add_pred__PredOrFunc_23 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_31);
        }
#line 469 "add_pred.m"
        {
#line 469 "add_pred.m"
          hlds__make_hlds__add_pred__PredModule_24 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_31);
        }
#line 470 "add_pred.m"
        {
#line 470 "add_pred.m"
          hlds__make_hlds__add_pred__PredName_25 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_31);
        }
#line 471 "add_pred.m"
        {
#line 471 "add_pred.m"
          hlds__make_hlds__add_pred__PredSymName_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 471 "add_pred.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__PredSymName_26, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredModule_24));
#line 471 "add_pred.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__PredSymName_26, 1) = ((MR_Box) (hlds__make_hlds__add_pred__PredName_25));
#line 471 "add_pred.m"
        }
#line 476 "add_pred.m"
#line 476 "add_pred.m"
        switch (hlds__make_hlds__add_pred__IsClassMethod_16) {
#line 476 "add_pred.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 476 "add_pred.m"
          case (MR_Integer) 1:
#line 526 "add_pred.m"
            {
#line 526 "add_pred.m"
              MR_Word hlds__make_hlds__add_pred__Pieces_48;
#line 526 "add_pred.m"
              MR_Word hlds__make_hlds__add_pred__Msg_49;
#line 526 "add_pred.m"
              MR_Word hlds__make_hlds__add_pred__Spec_50;
#line 526 "add_pred.m"
              MR_Word hlds__make_hlds__add_pred__V_53_53;
#line 526 "add_pred.m"
              MR_Word hlds__make_hlds__add_pred__V_56_56;
#line 526 "add_pred.m"
              MR_Word hlds__make_hlds__add_pred__V_57_57;
#line 526 "add_pred.m"
              MR_Word hlds__make_hlds__add_pred__V_58_58;
#line 526 "add_pred.m"
              MR_Word hlds__make_hlds__add_pred__V_59_59;
#line 526 "add_pred.m"
              MR_Word hlds__make_hlds__add_pred__V_60_60;
#line 526 "add_pred.m"
              MR_Word hlds__make_hlds__add_pred__V_65_65;
#line 526 "add_pred.m"
              MR_Word hlds__make_hlds__add_pred__V_66_66;
#line 526 "add_pred.m"
              MR_Word hlds__make_hlds__add_pred__V_70_70;

#line 528 "add_pred.m"
              {
#line 528 "add_pred.m"
                hlds__make_hlds__add_pred__V_57_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 528 "add_pred.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_57_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 528 "add_pred.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_57_57, 1) = ((MR_Box) (hlds__make_hlds__add_pred__PredOrFunc_23));
#line 528 "add_pred.m"
              }
#line 529 "add_pred.m"
              {
#line 529 "add_pred.m"
                hlds__make_hlds__add_pred__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 529 "add_pred.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_60_60, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredSymName_26));
#line 529 "add_pred.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_60_60, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Arity_13));
#line 529 "add_pred.m"
              }
#line 529 "add_pred.m"
              {
#line 529 "add_pred.m"
                hlds__make_hlds__add_pred__V_59_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 529 "add_pred.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_59_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 529 "add_pred.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_59_59, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_60_60));
#line 529 "add_pred.m"
              }
#line 529 "add_pred.m"
              {
#line 529 "add_pred.m"
                hlds__make_hlds__add_pred__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 529 "add_pred.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_58_58, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_59_59));
#line 529 "add_pred.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[44])));
#line 529 "add_pred.m"
              }
#line 528 "add_pred.m"
              {
#line 528 "add_pred.m"
                hlds__make_hlds__add_pred__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 528 "add_pred.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_56_56, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_57_57));
#line 528 "add_pred.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_56_56, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_58_58));
#line 528 "add_pred.m"
              }
#line 528 "add_pred.m"
              {
#line 528 "add_pred.m"
                hlds__make_hlds__add_pred__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 528 "add_pred.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_53_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[42])));
#line 528 "add_pred.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_53_53, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_56_56));
#line 528 "add_pred.m"
              }
#line 527 "add_pred.m"
              {
#line 527 "add_pred.m"
                hlds__make_hlds__add_pred__Pieces_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 527 "add_pred.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Pieces_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[41])));
#line 527 "add_pred.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Pieces_48, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_53_53));
#line 527 "add_pred.m"
              }
#line 530 "add_pred.m"
              {
#line 530 "add_pred.m"
                hlds__make_hlds__add_pred__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 530 "add_pred.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_66_66, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Pieces_48));
#line 530 "add_pred.m"
              }
#line 530 "add_pred.m"
              {
#line 530 "add_pred.m"
                hlds__make_hlds__add_pred__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 530 "add_pred.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_65_65, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_66_66));
#line 530 "add_pred.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 530 "add_pred.m"
              }
#line 530 "add_pred.m"
              {
#line 530 "add_pred.m"
                hlds__make_hlds__add_pred__Msg_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 530 "add_pred.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_49, 0) = ((MR_Box) (hlds__make_hlds__add_pred__MContext_17));
#line 530 "add_pred.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_49, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_65_65));
#line 530 "add_pred.m"
              }
#line 531 "add_pred.m"
              {
#line 531 "add_pred.m"
                hlds__make_hlds__add_pred__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 531 "add_pred.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_70_70, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Msg_49));
#line 531 "add_pred.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 531 "add_pred.m"
              }
#line 531 "add_pred.m"
              {
#line 531 "add_pred.m"
                hlds__make_hlds__add_pred__Spec_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 531 "add_pred.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 531 "add_pred.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 531 "add_pred.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_50, 2) = ((MR_Box) (hlds__make_hlds__add_pred__V_70_70));
#line 531 "add_pred.m"
              }
#line 532 "add_pred.m"
              {
#line 532 "add_pred.m"
                MR_Word base;
#line 532 "add_pred.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 532 "add_pred.m"
                *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_34 = base;
#line 532 "add_pred.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Spec_50));
#line 532 "add_pred.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_33));
#line 532 "add_pred.m"
              }
#line 526 "add_pred.m"
            }
#line 476 "add_pred.m"
            break;
#line 476 "add_pred.m"
          case (MR_Integer) 0:
#line 477 "add_pred.m"
            {
#line 477 "add_pred.m"
              MR_Word hlds__make_hlds__add_pred__IsExported_27;

#line 478 "add_pred.m"
              {
#line 478 "add_pred.m"
                hlds__make_hlds__add_pred__IsExported_27 = hlds__status__pred_status_is_exported_1_f_0(hlds__make_hlds__add_pred__PredStatus_22);
              }
#line 483 "add_pred.m"
#line 483 "add_pred.m"
              switch (hlds__make_hlds__add_pred__IsExported_27) {
#line 483 "add_pred.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 483 "add_pred.m"
                case (MR_Integer) 0:
#line 485 "add_pred.m"
                  {
#line 485 "add_pred.m"
                    hlds__make_hlds__add_pred__unspecified_det_for_local_6_p_0(hlds__make_hlds__add_pred__PredSymName_26, hlds__make_hlds__add_pred__Arity_13, hlds__make_hlds__add_pred__PredOrFunc_23, hlds__make_hlds__add_pred__MContext_17, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_33, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_34);
                  }
#line 483 "add_pred.m"
                  break;
#line 483 "add_pred.m"
                case (MR_Integer) 1:
#line 481 "add_pred.m"
                  {
#line 481 "add_pred.m"
                    hlds__make_hlds__add_pred__unspecified_det_for_exported_6_p_0(hlds__make_hlds__add_pred__PredSymName_26, hlds__make_hlds__add_pred__Arity_13, hlds__make_hlds__add_pred__PredOrFunc_23, hlds__make_hlds__add_pred__MContext_17, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_33, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_34);
                  }
#line 483 "add_pred.m"
                  break;
#line 483 "add_pred.m"
              }
#line 477 "add_pred.m"
            }
#line 476 "add_pred.m"
            break;
#line 476 "add_pred.m"
        }
#line 465 "add_pred.m"
      }
#line 489 "add_pred.m"
    else
#line 490 "add_pred.m"
      {
#line 491 "add_pred.m"
        hlds__make_hlds__add_pred__DetismDecl_21 = (MR_Integer) 0;
#line 490 "add_pred.m"
        *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_34 = hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_33;
#line 490 "add_pred.m"
      }
#line 497 "add_pred.m"
    {
#line 497 "add_pred.m"
      hlds__make_hlds__add_pred__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 497 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_38_38, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Modes_14));
#line 497 "add_pred.m"
    }
#line 497 "add_pred.m"
    {
#line 497 "add_pred.m"
      hlds__make_hlds__add_pred__do_add_new_proc_13_p_0(hlds__make_hlds__add_pred__InstVarSet_12, hlds__make_hlds__add_pred__Arity_13, hlds__make_hlds__add_pred__Modes_14, hlds__make_hlds__add_pred__V_38_38, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_pred__DetismDecl_21, hlds__make_hlds__add_pred__MaybeDet_15, hlds__make_hlds__add_pred__MContext_17, (MR_Integer) 1, (MR_Integer) 1, hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_31, hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_32, hlds__make_hlds__add_pred__ProcId_19);
    }
#line 462 "add_pred.m"
  }
#line 456 "add_pred.m"
}

#line 244 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__add_builtin_5_p_0(
#line 244 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredId_6,
#line 244 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Types_7,
#line 244 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__CompilationTarget_8,
#line 244 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_62,
#line 244 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_63)
#line 244 "add_pred.m"
{
#line 247 "add_pred.m"
  {
#line 247 "add_pred.m"
    MR_bool hlds__make_hlds__add_pred__succeeded;
#line 247 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_134_134;
#line 247 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TypeInfo_135_135;
#line 247 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_136_136;
#line 247 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_137_137;
#line 247 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TypeInfo_138_138;
#line 247 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Module_10;
#line 247 "add_pred.m"
    MR_String hlds__make_hlds__add_pred__Name_11;
#line 247 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Context_12;
#line 247 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__ClausesInfo0_13;
#line 247 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__VarSet0_14;
#line 247 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__HeadVars_15;
#line 247 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__HeadVarList_16;
#line 247 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__GoalInfo0_17;
#line 247 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__NonLocals_18;
#line 247 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__GoalInfo1_19;
#line 247 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__GoalExpr_20;
#line 247 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__GoalInfo_21;
#line 247 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__ExtraVars_22;
#line 247 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__ExtraTypes_23;
#line 247 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__VarSet_24;
#line 247 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Stub_25;
#line 247 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__VarTypes_52;
#line 247 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TVarNameMap_53;
#line 247 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__RttiVarMaps_54;
#line 247 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__HasForeignClauses_55;
#line 247 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__HadSyntaxError_56;
#line 247 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Markers_61;
#line 247 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_64_64;
#line 247 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_119_119;
#line 247 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_120_120;
#line 247 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_122_122;
#line 247 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_123_123;
#line 247 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_124_124;
#line 262 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_139_139;
#line 267 "add_pred.m"
    MR_Integer hlds__make_hlds__add_pred__lo_0;
#line 267 "add_pred.m"
    MR_Integer hlds__make_hlds__add_pred__hi_1;
#line 267 "add_pred.m"
    MR_Integer hlds__make_hlds__add_pred__mid_2;
#line 267 "add_pred.m"
    MR_Integer hlds__make_hlds__add_pred__result_3;

#line 248 "add_pred.m"
    {
#line 248 "add_pred.m"
      hlds__make_hlds__add_pred__Module_10 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_62);
    }
#line 249 "add_pred.m"
    {
#line 249 "add_pred.m"
      hlds__make_hlds__add_pred__Name_11 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_62);
    }
#line 250 "add_pred.m"
    {
#line 250 "add_pred.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_62, &hlds__make_hlds__add_pred__Context_12);
    }
#line 251 "add_pred.m"
    {
#line 251 "add_pred.m"
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_62, &hlds__make_hlds__add_pred__ClausesInfo0_13);
    }
#line 252 "add_pred.m"
    {
#line 252 "add_pred.m"
      hlds__hlds_clauses__clauses_info_get_varset_2_p_0(hlds__make_hlds__add_pred__ClausesInfo0_13, &hlds__make_hlds__add_pred__VarSet0_14);
    }
#line 253 "add_pred.m"
    {
#line 253 "add_pred.m"
      hlds__hlds_clauses__clauses_info_get_headvars_2_p_0(hlds__make_hlds__add_pred__ClausesInfo0_13, &hlds__make_hlds__add_pred__HeadVars_15);
    }
#line 256 "add_pred.m"
    {
#line 256 "add_pred.m"
      hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(hlds__make_hlds__add_pred__ClausesInfo0_13, &hlds__make_hlds__add_pred__HeadVarList_16);
    }
#line 258 "add_pred.m"
    {
#line 258 "add_pred.m"
      hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__add_pred__Context_12, &hlds__make_hlds__add_pred__GoalInfo0_17);
    }
#line 2116 "hlds.make_hlds.add_pred.c"
    hlds__make_hlds__add_pred__TypeCtorInfo_134_134 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 2118 "hlds.make_hlds.add_pred.c"
    hlds__make_hlds__add_pred__TypeInfo_135_135 = (MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[0];
#line 259 "add_pred.m"
    {
#line 259 "add_pred.m"
      hlds__make_hlds__add_pred__V_64_64 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0(hlds__make_hlds__add_pred__TypeInfo_135_135, hlds__make_hlds__add_pred__HeadVars_15);
    }
#line 259 "add_pred.m"
    {
#line 259 "add_pred.m"
      hlds__make_hlds__add_pred__NonLocals_18 = parse_tree__set_of_var__list_to_set_1_f_0(hlds__make_hlds__add_pred__TypeCtorInfo_134_134, hlds__make_hlds__add_pred__V_64_64);
    }
#line 260 "add_pred.m"
    {
#line 260 "add_pred.m"
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(hlds__make_hlds__add_pred__NonLocals_18, hlds__make_hlds__add_pred__GoalInfo0_17, &hlds__make_hlds__add_pred__GoalInfo1_19);
    }
#line 262 "add_pred.m"
    {
#line 262 "add_pred.m"
      hlds__make_hlds__add_pred__V_139_139 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
#line 262 "add_pred.m"
    {
#line 262 "add_pred.m"
      hlds__make_hlds__add_pred__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__make_hlds__add_pred__Module_10, hlds__make_hlds__add_pred__V_139_139);
    }
#line 262 "add_pred.m"
    if (hlds__make_hlds__add_pred__succeeded)
#line 262 "add_pred.m"
      {
#line 267 "add_pred.m"
        /* binary string jump switch */
#line 267 "add_pred.m"
        hlds__make_hlds__add_pred__lo_0 = (MR_Integer) 0;
#line 267 "add_pred.m"
        hlds__make_hlds__add_pred__hi_1 = (MR_Integer) 3;
#line 267 "add_pred.m"
        do
#line 267 "add_pred.m"
          {
#line 267 "add_pred.m"
            hlds__make_hlds__add_pred__mid_2 = (((hlds__make_hlds__add_pred__lo_0 + hlds__make_hlds__add_pred__hi_1)) / (MR_Integer) 2);
#line 267 "add_pred.m"
            hlds__make_hlds__add_pred__result_3 = MR_strcmp(hlds__make_hlds__add_pred__Name_11, ((&hlds__make_hlds__add_pred_vector_common_4[0 + hlds__make_hlds__add_pred__mid_2]))->hlds__make_hlds__add_pred__vector_common_type_4_0__vct_4_f_0);
#line 267 "add_pred.m"
            if ((hlds__make_hlds__add_pred__result_3 == (MR_Integer) 0))
#line 267 "add_pred.m"
              {
#line 267 "add_pred.m"
#line 267 "add_pred.m"
                switch (((&hlds__make_hlds__add_pred_vector_common_4[0 + hlds__make_hlds__add_pred__mid_2]))->hlds__make_hlds__add_pred__vector_common_type_4_0__vct_4_f_1) {
#line 267 "add_pred.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 267 "add_pred.m"
                  case (MR_Integer) 0:
#line 264 "add_pred.m"
                    {
#line 264 "add_pred.m"
                      /* case "builtin_compound_eq" */
#line 264 "add_pred.m"
                      hlds__make_hlds__add_pred__succeeded = MR_TRUE;
#line 264 "add_pred.m"
                    }
#line 267 "add_pred.m"
                    break;
#line 267 "add_pred.m"
                  case (MR_Integer) 1:
#line 265 "add_pred.m"
                    {
#line 265 "add_pred.m"
                      /* case "builtin_compound_lt" */
#line 265 "add_pred.m"
                      hlds__make_hlds__add_pred__succeeded = MR_TRUE;
#line 265 "add_pred.m"
                    }
#line 267 "add_pred.m"
                    break;
#line 267 "add_pred.m"
                  case (MR_Integer) 2:
#line 273 "add_pred.m"
                    {
#line 273 "add_pred.m"
                      /* case "store_at_ref", "store_at_ref_impure" */
#line 273 "add_pred.m"
#line 273 "add_pred.m"
                      switch (hlds__make_hlds__add_pred__CompilationTarget_8) {
#line 273 "add_pred.m"
                        default:
#line 273 "add_pred.m"
                          hlds__make_hlds__add_pred__succeeded = MR_FALSE;
#line 273 "add_pred.m"
                          break;
#line 273 "add_pred.m"
                        case (MR_Integer) 1:
#line 273 "add_pred.m"
                          hlds__make_hlds__add_pred__succeeded = MR_TRUE;
#line 273 "add_pred.m"
                          break;
#line 273 "add_pred.m"
                        case (MR_Integer) 3:
#line 274 "add_pred.m"
                          hlds__make_hlds__add_pred__succeeded = MR_TRUE;
#line 273 "add_pred.m"
                          break;
#line 273 "add_pred.m"
                        case (MR_Integer) 2:
#line 272 "add_pred.m"
                          hlds__make_hlds__add_pred__succeeded = MR_TRUE;
#line 273 "add_pred.m"
                          break;
#line 273 "add_pred.m"
                      }
#line 273 "add_pred.m"
                    }
#line 267 "add_pred.m"
                    break;
#line 267 "add_pred.m"
                }
#line 267 "add_pred.m"
                /* jump out of search loop */
#line 267 "add_pred.m"
                goto label_0;
#line 267 "add_pred.m"
              }
#line 267 "add_pred.m"
            else
#line 267 "add_pred.m"
            if ((hlds__make_hlds__add_pred__result_3 < (MR_Integer) 0))
#line 267 "add_pred.m"
              hlds__make_hlds__add_pred__hi_1 = (hlds__make_hlds__add_pred__mid_2 - (MR_Integer) 1);
#line 267 "add_pred.m"
            else
#line 267 "add_pred.m"
              hlds__make_hlds__add_pred__lo_0 = (hlds__make_hlds__add_pred__mid_2 + (MR_Integer) 1);
#line 267 "add_pred.m"
          }
#line 267 "add_pred.m"
        while ((hlds__make_hlds__add_pred__lo_0 <= hlds__make_hlds__add_pred__hi_1));
#line 267 "add_pred.m"
        hlds__make_hlds__add_pred__succeeded = MR_FALSE;
#line 267 "add_pred.m"
      label_0:;
#line 262 "add_pred.m"
      }
#line 261 "add_pred.m"
    if (hlds__make_hlds__add_pred__succeeded)
#line 278 "add_pred.m"
      {
#line 278 "add_pred.m"
        hlds__make_hlds__add_pred__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_5[0]);
#line 279 "add_pred.m"
        hlds__make_hlds__add_pred__GoalInfo_21 = hlds__make_hlds__add_pred__GoalInfo1_19;
#line 280 "add_pred.m"
        hlds__make_hlds__add_pred__ExtraVars_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 281 "add_pred.m"
        hlds__make_hlds__add_pred__ExtraTypes_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 282 "add_pred.m"
        hlds__make_hlds__add_pred__VarSet_24 = hlds__make_hlds__add_pred__VarSet0_14;
#line 283 "add_pred.m"
        hlds__make_hlds__add_pred__Stub_25 = (MR_Integer) 1;
#line 278 "add_pred.m"
      }
#line 261 "add_pred.m"
    else
#line 284 "add_pred.m"
      {
#line 286 "add_pred.m"
        {
#line 286 "add_pred.m"
          MR_Word hlds__make_hlds__add_pred__V_140_140;

#line 286 "add_pred.m"
          {
#line 286 "add_pred.m"
            hlds__make_hlds__add_pred__V_140_140 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          }
#line 286 "add_pred.m"
          {
#line 286 "add_pred.m"
            hlds__make_hlds__add_pred__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__make_hlds__add_pred__Module_10, hlds__make_hlds__add_pred__V_140_140);
          }
#line 286 "add_pred.m"
          if (hlds__make_hlds__add_pred__succeeded)
#line 287 "add_pred.m"
            hlds__make_hlds__add_pred__succeeded = (strcmp(hlds__make_hlds__add_pred__Name_11, (MR_String) "trace_get_io_state") == 0);
#line 286 "add_pred.m"
        }
#line 288 "add_pred.m"
        if (!(hlds__make_hlds__add_pred__succeeded))
#line 289 "add_pred.m"
          {
#line 289 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_141_141;

#line 289 "add_pred.m"
            {
#line 289 "add_pred.m"
              hlds__make_hlds__add_pred__V_141_141 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
            }
#line 289 "add_pred.m"
            {
#line 289 "add_pred.m"
              hlds__make_hlds__add_pred__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__make_hlds__add_pred__Module_10, hlds__make_hlds__add_pred__V_141_141);
            }
#line 289 "add_pred.m"
            if (hlds__make_hlds__add_pred__succeeded)
#line 290 "add_pred.m"
              hlds__make_hlds__add_pred__succeeded = (strcmp(hlds__make_hlds__add_pred__Name_11, (MR_String) "unsafe_get_io_state") == 0);
#line 289 "add_pred.m"
          }
#line 284 "add_pred.m"
        if (hlds__make_hlds__add_pred__succeeded)
#line 293 "add_pred.m"
          {
#line 293 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__LHS_30;
#line 293 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__Unification_33;
#line 293 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__AssignExpr_36;
#line 293 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__GoalInfoWithZero_37;
#line 293 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__AssignGoal_38;
#line 293 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__CastExpr_39;
#line 293 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__GoalInfoWithZeroHeadVars_40;
#line 293 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__CastGoal_41;
#line 293 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__ConjExpr_42;
#line 293 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__ConjGoal_43;
#line 293 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_68_68;
#line 293 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_89_89;
#line 293 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_92_92;
#line 293 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_95_95;
#line 293 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_96_96;
#line 293 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_97_97;
#line 293 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_98_98;
#line 293 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_102_102;
#line 293 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_103_103;
#line 293 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_105_105;
#line 293 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_106_106;

#line 293 "add_pred.m"
            {
#line 293 "add_pred.m"
              mercury__varset__new_var_3_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_134_134, &hlds__make_hlds__add_pred__LHS_30, hlds__make_hlds__add_pred__VarSet0_14, &hlds__make_hlds__add_pred__VarSet_24);
            }
#line 294 "add_pred.m"
            {
#line 294 "add_pred.m"
              hlds__make_hlds__add_pred__ExtraVars_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 294 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__ExtraVars_22, 0) = ((MR_Box) (hlds__make_hlds__add_pred__LHS_30));
#line 294 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__ExtraVars_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 294 "add_pred.m"
            }
#line 295 "add_pred.m"
            {
#line 295 "add_pred.m"
              hlds__make_hlds__add_pred__V_68_68 = parse_tree__builtin_lib_types__int_type_0_f_0();
            }
#line 295 "add_pred.m"
            {
#line 295 "add_pred.m"
              hlds__make_hlds__add_pred__ExtraTypes_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 295 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__ExtraTypes_23, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_68_68));
#line 295 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__ExtraTypes_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 295 "add_pred.m"
            }
#line 303 "add_pred.m"
            {
#line 303 "add_pred.m"
              hlds__make_hlds__add_pred__Unification_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 303 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Unification_33, 0) = ((MR_Box) (hlds__make_hlds__add_pred__LHS_30));
#line 303 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Unification_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[34])));
#line 303 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Unification_33, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 303 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Unification_33, 3) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[38])));
#line 303 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Unification_33, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 303 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Unification_33, 5) = ((MR_Box) ((MR_Integer) 1));
#line 303 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Unification_33, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 303 "add_pred.m"
            }
#line 307 "add_pred.m"
            {
#line 307 "add_pred.m"
              hlds__make_hlds__add_pred__AssignExpr_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 307 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__AssignExpr_36, 0) = ((MR_Box) (hlds__make_hlds__add_pred__LHS_30));
#line 307 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__AssignExpr_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_5[2])));
#line 307 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__AssignExpr_36, 2) = ((MR_Box) (&hlds__make_hlds__add_pred_scalar_common_1[39]));
#line 307 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__AssignExpr_36, 3) = ((MR_Box) (hlds__make_hlds__add_pred__Unification_33));
#line 307 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__AssignExpr_36, 4) = ((MR_Box) (&hlds__make_hlds__add_pred_scalar_common_1[40]));
#line 307 "add_pred.m"
            }
#line 308 "add_pred.m"
            {
#line 308 "add_pred.m"
              hlds__make_hlds__add_pred__V_89_89 = parse_tree__set_of_var__make_singleton_1_f_0(hlds__make_hlds__add_pred__TypeCtorInfo_134_134, hlds__make_hlds__add_pred__LHS_30);
            }
#line 308 "add_pred.m"
            {
#line 308 "add_pred.m"
              hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(hlds__make_hlds__add_pred__V_89_89, hlds__make_hlds__add_pred__GoalInfo0_17, &hlds__make_hlds__add_pred__GoalInfoWithZero_37);
            }
#line 310 "add_pred.m"
            {
#line 310 "add_pred.m"
              hlds__make_hlds__add_pred__AssignGoal_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 310 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__AssignGoal_38, 0) = ((MR_Box) (hlds__make_hlds__add_pred__AssignExpr_36));
#line 310 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__AssignGoal_38, 1) = ((MR_Box) (hlds__make_hlds__add_pred__GoalInfoWithZero_37));
#line 310 "add_pred.m"
            }
#line 313 "add_pred.m"
            {
#line 313 "add_pred.m"
              hlds__make_hlds__add_pred__V_92_92 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pred__TypeInfo_135_135, hlds__make_hlds__add_pred__ExtraVars_22, hlds__make_hlds__add_pred__HeadVarList_16);
            }
#line 313 "add_pred.m"
            {
#line 313 "add_pred.m"
              hlds__make_hlds__add_pred__V_96_96 = parse_tree__prog_mode__in_mode_0_f_0();
            }
#line 313 "add_pred.m"
            {
#line 313 "add_pred.m"
              hlds__make_hlds__add_pred__V_98_98 = parse_tree__prog_mode__uo_mode_0_f_0();
            }
#line 313 "add_pred.m"
            {
#line 313 "add_pred.m"
              hlds__make_hlds__add_pred__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_97_97, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_98_98));
#line 313 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_97_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 313 "add_pred.m"
            }
#line 313 "add_pred.m"
            {
#line 313 "add_pred.m"
              hlds__make_hlds__add_pred__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_95_95, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_96_96));
#line 313 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_95_95, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_97_97));
#line 313 "add_pred.m"
            }
#line 312 "add_pred.m"
            {
#line 312 "add_pred.m"
              hlds__make_hlds__add_pred__CastExpr_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 312 "add_pred.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__CastExpr_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 312 "add_pred.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__CastExpr_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_3[1])));
#line 312 "add_pred.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__CastExpr_39, 2) = ((MR_Box) (hlds__make_hlds__add_pred__V_92_92));
#line 312 "add_pred.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__CastExpr_39, 3) = ((MR_Box) (hlds__make_hlds__add_pred__V_95_95));
#line 312 "add_pred.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__CastExpr_39, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 312 "add_pred.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__CastExpr_39, 5) = ((MR_Box) ((MR_Integer) 0));
#line 312 "add_pred.m"
            }
#line 316 "add_pred.m"
            {
#line 316 "add_pred.m"
              hlds__make_hlds__add_pred__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 316 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_103_103, 0) = ((MR_Box) (hlds__make_hlds__add_pred__LHS_30));
#line 316 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_103_103, 1) = ((MR_Box) (hlds__make_hlds__add_pred__HeadVarList_16));
#line 316 "add_pred.m"
            }
#line 316 "add_pred.m"
            {
#line 316 "add_pred.m"
              hlds__make_hlds__add_pred__V_102_102 = parse_tree__set_of_var__list_to_set_1_f_0(hlds__make_hlds__add_pred__TypeCtorInfo_134_134, hlds__make_hlds__add_pred__V_103_103);
            }
#line 315 "add_pred.m"
            {
#line 315 "add_pred.m"
              hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(hlds__make_hlds__add_pred__V_102_102, hlds__make_hlds__add_pred__GoalInfo0_17, &hlds__make_hlds__add_pred__GoalInfoWithZeroHeadVars_40);
            }
#line 318 "add_pred.m"
            {
#line 318 "add_pred.m"
              hlds__make_hlds__add_pred__CastGoal_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 318 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__CastGoal_41, 0) = ((MR_Box) (hlds__make_hlds__add_pred__CastExpr_39));
#line 318 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__CastGoal_41, 1) = ((MR_Box) (hlds__make_hlds__add_pred__GoalInfoWithZeroHeadVars_40));
#line 318 "add_pred.m"
            }
#line 320 "add_pred.m"
            {
#line 320 "add_pred.m"
              hlds__make_hlds__add_pred__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 320 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_106_106, 0) = ((MR_Box) (hlds__make_hlds__add_pred__CastGoal_41));
#line 320 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_106_106, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 320 "add_pred.m"
            }
#line 320 "add_pred.m"
            {
#line 320 "add_pred.m"
              hlds__make_hlds__add_pred__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 320 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_105_105, 0) = ((MR_Box) (hlds__make_hlds__add_pred__AssignGoal_38));
#line 320 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_105_105, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_106_106));
#line 320 "add_pred.m"
            }
#line 320 "add_pred.m"
            {
#line 320 "add_pred.m"
              hlds__make_hlds__add_pred__ConjExpr_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 320 "add_pred.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__ConjExpr_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 320 "add_pred.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__ConjExpr_42, 1) = ((MR_Box) ((MR_Integer) 0));
#line 320 "add_pred.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__ConjExpr_42, 2) = ((MR_Box) (hlds__make_hlds__add_pred__V_105_105));
#line 320 "add_pred.m"
            }
#line 321 "add_pred.m"
            {
#line 321 "add_pred.m"
              hlds__make_hlds__add_pred__ConjGoal_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 321 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ConjGoal_43, 0) = ((MR_Box) (hlds__make_hlds__add_pred__ConjExpr_42));
#line 321 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ConjGoal_43, 1) = ((MR_Box) (hlds__make_hlds__add_pred__GoalInfoWithZeroHeadVars_40));
#line 321 "add_pred.m"
            }
#line 324 "add_pred.m"
            {
#line 324 "add_pred.m"
              hlds__make_hlds__add_pred__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 324 "add_pred.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__GoalExpr_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 324 "add_pred.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__GoalExpr_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pred_scalar_common_3[2])));
#line 324 "add_pred.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__GoalExpr_20, 2) = ((MR_Box) (hlds__make_hlds__add_pred__ConjGoal_43));
#line 324 "add_pred.m"
            }
#line 325 "add_pred.m"
            hlds__make_hlds__add_pred__GoalInfo_21 = hlds__make_hlds__add_pred__GoalInfo1_19;
#line 326 "add_pred.m"
            hlds__make_hlds__add_pred__Stub_25 = (MR_Integer) 0;
#line 293 "add_pred.m"
          }
#line 284 "add_pred.m"
        else
#line 327 "add_pred.m"
          {
#line 329 "add_pred.m"
            {
#line 329 "add_pred.m"
              MR_Word hlds__make_hlds__add_pred__V_142_142;

#line 329 "add_pred.m"
              {
#line 329 "add_pred.m"
                hlds__make_hlds__add_pred__V_142_142 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
              }
#line 329 "add_pred.m"
              {
#line 329 "add_pred.m"
                hlds__make_hlds__add_pred__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__make_hlds__add_pred__Module_10, hlds__make_hlds__add_pred__V_142_142);
              }
#line 329 "add_pred.m"
              if (hlds__make_hlds__add_pred__succeeded)
#line 330 "add_pred.m"
                hlds__make_hlds__add_pred__succeeded = (strcmp(hlds__make_hlds__add_pred__Name_11, (MR_String) "trace_set_io_state") == 0);
#line 329 "add_pred.m"
            }
#line 331 "add_pred.m"
            if (!(hlds__make_hlds__add_pred__succeeded))
#line 332 "add_pred.m"
              {
#line 332 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__V_143_143;

#line 332 "add_pred.m"
                {
#line 332 "add_pred.m"
                  hlds__make_hlds__add_pred__V_143_143 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
                }
#line 332 "add_pred.m"
                {
#line 332 "add_pred.m"
                  hlds__make_hlds__add_pred__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__make_hlds__add_pred__Module_10, hlds__make_hlds__add_pred__V_143_143);
                }
#line 332 "add_pred.m"
                if (hlds__make_hlds__add_pred__succeeded)
#line 333 "add_pred.m"
                  hlds__make_hlds__add_pred__succeeded = (strcmp(hlds__make_hlds__add_pred__Name_11, (MR_String) "unsafe_set_io_state") == 0);
#line 332 "add_pred.m"
              }
#line 327 "add_pred.m"
            if (hlds__make_hlds__add_pred__succeeded)
#line 336 "add_pred.m"
              {
#line 336 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__ConjGoal_129;

#line 340 "add_pred.m"
                hlds__make_hlds__add_pred__GoalInfo_21 = hlds__make_hlds__add_pred__GoalInfo1_19;
#line 337 "add_pred.m"
                {
#line 337 "add_pred.m"
                  hlds__make_hlds__add_pred__ConjGoal_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 337 "add_pred.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ConjGoal_129, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_5[0])));
#line 337 "add_pred.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ConjGoal_129, 1) = ((MR_Box) (hlds__make_hlds__add_pred__GoalInfo_21));
#line 337 "add_pred.m"
                }
#line 339 "add_pred.m"
                {
#line 339 "add_pred.m"
                  hlds__make_hlds__add_pred__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 339 "add_pred.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__GoalExpr_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 339 "add_pred.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__GoalExpr_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pred_scalar_common_3[3])));
#line 339 "add_pred.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__GoalExpr_20, 2) = ((MR_Box) (hlds__make_hlds__add_pred__ConjGoal_129));
#line 339 "add_pred.m"
                }
#line 341 "add_pred.m"
                hlds__make_hlds__add_pred__ExtraVars_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 342 "add_pred.m"
                hlds__make_hlds__add_pred__ExtraTypes_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 343 "add_pred.m"
                hlds__make_hlds__add_pred__VarSet_24 = hlds__make_hlds__add_pred__VarSet0_14;
#line 344 "add_pred.m"
                hlds__make_hlds__add_pred__Stub_25 = (MR_Integer) 0;
#line 336 "add_pred.m"
              }
#line 327 "add_pred.m"
            else
#line 347 "add_pred.m"
              {
#line 347 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__SymName_45;
#line 347 "add_pred.m"
                MR_Integer hlds__make_hlds__add_pred__ModeId_46;
#line 347 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__Purity_48;

#line 347 "add_pred.m"
                {
#line 347 "add_pred.m"
                  hlds__make_hlds__add_pred__SymName_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 347 "add_pred.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__SymName_45, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Module_10));
#line 347 "add_pred.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__SymName_45, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Name_11));
#line 347 "add_pred.m"
                }
#line 349 "add_pred.m"
                {
#line 349 "add_pred.m"
                  hlds__make_hlds__add_pred__ModeId_46 = hlds__hlds_pred__invalid_proc_id_0_f_0();
                }
#line 352 "add_pred.m"
                {
#line 352 "add_pred.m"
                  hlds__make_hlds__add_pred__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 352 "add_pred.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pred__GoalExpr_20, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredId_6));
#line 352 "add_pred.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pred__GoalExpr_20, 1) = ((MR_Box) (hlds__make_hlds__add_pred__ModeId_46));
#line 352 "add_pred.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pred__GoalExpr_20, 2) = ((MR_Box) (hlds__make_hlds__add_pred__HeadVarList_16));
#line 352 "add_pred.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pred__GoalExpr_20, 3) = ((MR_Box) ((MR_Integer) 0));
#line 352 "add_pred.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pred__GoalExpr_20, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 352 "add_pred.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pred__GoalExpr_20, 5) = ((MR_Box) (hlds__make_hlds__add_pred__SymName_45));
#line 352 "add_pred.m"
                }
#line 354 "add_pred.m"
                {
#line 354 "add_pred.m"
                  hlds__hlds_pred__pred_info_get_purity_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_62, &hlds__make_hlds__add_pred__Purity_48);
                }
#line 355 "add_pred.m"
                {
#line 355 "add_pred.m"
                  hlds__hlds_goal__goal_info_set_purity_3_p_0(hlds__make_hlds__add_pred__Purity_48, hlds__make_hlds__add_pred__GoalInfo1_19, &hlds__make_hlds__add_pred__GoalInfo_21);
                }
#line 356 "add_pred.m"
                hlds__make_hlds__add_pred__ExtraVars_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 357 "add_pred.m"
                hlds__make_hlds__add_pred__ExtraTypes_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 358 "add_pred.m"
                hlds__make_hlds__add_pred__VarSet_24 = hlds__make_hlds__add_pred__VarSet0_14;
#line 359 "add_pred.m"
                hlds__make_hlds__add_pred__Stub_25 = (MR_Integer) 0;
#line 347 "add_pred.m"
              }
#line 327 "add_pred.m"
          }
#line 284 "add_pred.m"
      }
#line 375 "add_pred.m"
    {
#line 375 "add_pred.m"
      hlds__make_hlds__add_pred__V_119_119 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pred__TypeInfo_135_135, hlds__make_hlds__add_pred__ExtraVars_22, hlds__make_hlds__add_pred__HeadVarList_16);
    }
#line 2767 "hlds.make_hlds.add_pred.c"
    hlds__make_hlds__add_pred__TypeCtorInfo_136_136 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 376 "add_pred.m"
    {
#line 376 "add_pred.m"
      hlds__make_hlds__add_pred__V_120_120 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pred__TypeCtorInfo_136_136, hlds__make_hlds__add_pred__ExtraTypes_23, hlds__make_hlds__add_pred__Types_7);
    }
#line 375 "add_pred.m"
    {
#line 375 "add_pred.m"
      hlds__vartypes__vartypes_from_corresponding_lists_3_p_0(hlds__make_hlds__add_pred__V_119_119, hlds__make_hlds__add_pred__V_120_120, &hlds__make_hlds__add_pred__VarTypes_52);
    }
#line 2779 "hlds.make_hlds.add_pred.c"
    hlds__make_hlds__add_pred__TypeCtorInfo_137_137 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2781 "hlds.make_hlds.add_pred.c"
    hlds__make_hlds__add_pred__TypeInfo_138_138 = (MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[1];
#line 377 "add_pred.m"
    {
#line 377 "add_pred.m"
      mercury__map__init_1_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_137_137, hlds__make_hlds__add_pred__TypeInfo_138_138, &hlds__make_hlds__add_pred__TVarNameMap_53);
    }
#line 378 "add_pred.m"
    {
#line 378 "add_pred.m"
      hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&hlds__make_hlds__add_pred__RttiVarMaps_54);
    }
#line 379 "add_pred.m"
    hlds__make_hlds__add_pred__HasForeignClauses_55 = (MR_Integer) 0;
#line 380 "add_pred.m"
    hlds__make_hlds__add_pred__HadSyntaxError_56 = (MR_Integer) 0;
#line 382 "add_pred.m"
    {
#line 382 "add_pred.m"
      hlds__make_hlds__add_pred__V_122_122 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
    }
#line 392 "add_pred.m"
    hlds__make_hlds__add_pred__V_124_124 = (MR_Integer) 7;
#line 2804 "hlds.make_hlds.add_pred.c"
#line 2805 "hlds.make_hlds.add_pred.c"
    switch (hlds__make_hlds__add_pred__Stub_25) {
#line 2807 "hlds.make_hlds.add_pred.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2809 "hlds.make_hlds.add_pred.c"
      case (MR_Integer) 0:
#line 2811 "hlds.make_hlds.add_pred.c"
        {
#line 2813 "hlds.make_hlds.add_pred.c"
          MR_Word hlds__make_hlds__add_pred__Goal_49;
#line 2815 "hlds.make_hlds.add_pred.c"
          MR_Word hlds__make_hlds__add_pred__Clause_50;
#line 2817 "hlds.make_hlds.add_pred.c"
          MR_Word hlds__make_hlds__add_pred__ClausesRep_51;
#line 2819 "hlds.make_hlds.add_pred.c"
          MR_Word hlds__make_hlds__add_pred__ClausesInfo_57;
#line 2821 "hlds.make_hlds.add_pred.c"
          MR_Word hlds__make_hlds__add_pred__Markers0_58;
#line 2823 "hlds.make_hlds.add_pred.c"
          MR_Word hlds__make_hlds__add_pred__V_117_117;

#line 365 "add_pred.m"
          {
#line 365 "add_pred.m"
            hlds__make_hlds__add_pred__Goal_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 365 "add_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Goal_49, 0) = ((MR_Box) (hlds__make_hlds__add_pred__GoalExpr_20));
#line 365 "add_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Goal_49, 1) = ((MR_Box) (hlds__make_hlds__add_pred__GoalInfo_21));
#line 365 "add_pred.m"
          }
#line 366 "add_pred.m"
          {
#line 366 "add_pred.m"
            hlds__make_hlds__add_pred__Clause_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 366 "add_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Clause_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 366 "add_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Clause_50, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Goal_49));
#line 366 "add_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Clause_50, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 366 "add_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Clause_50, 3) = ((MR_Box) (hlds__make_hlds__add_pred__Context_12));
#line 366 "add_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Clause_50, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 366 "add_pred.m"
          }
#line 367 "add_pred.m"
          {
#line 367 "add_pred.m"
            hlds__make_hlds__add_pred__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 367 "add_pred.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_117_117, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Clause_50));
#line 367 "add_pred.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_117_117, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 367 "add_pred.m"
          }
#line 367 "add_pred.m"
          {
#line 367 "add_pred.m"
            hlds__hlds_clauses__set_clause_list_2_p_0(hlds__make_hlds__add_pred__V_117_117, &hlds__make_hlds__add_pred__ClausesRep_51);
          }
#line 381 "add_pred.m"
          {
#line 381 "add_pred.m"
            hlds__make_hlds__add_pred__ClausesInfo_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 381 "add_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_57, 0) = ((MR_Box) (hlds__make_hlds__add_pred__VarSet_24));
#line 381 "add_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_57, 1) = ((MR_Box) (hlds__make_hlds__add_pred__VarTypes_52));
#line 381 "add_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_57, 2) = ((MR_Box) (hlds__make_hlds__add_pred__TVarNameMap_53));
#line 381 "add_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_57, 3) = ((MR_Box) (hlds__make_hlds__add_pred__VarTypes_52));
#line 381 "add_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_57, 4) = ((MR_Box) (hlds__make_hlds__add_pred__HeadVars_15));
#line 381 "add_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_57, 5) = ((MR_Box) (hlds__make_hlds__add_pred__ClausesRep_51));
#line 381 "add_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_57, 6) = ((MR_Box) (hlds__make_hlds__add_pred__V_122_122));
#line 381 "add_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_57, 7) = ((MR_Box) (hlds__make_hlds__add_pred__RttiVarMaps_54));
#line 381 "add_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_57, 8) = ((MR_Box) (hlds__make_hlds__add_pred__HasForeignClauses_55));
#line 381 "add_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_57, 9) = ((MR_Box) (hlds__make_hlds__add_pred__HadSyntaxError_56));
#line 381 "add_pred.m"
          }
#line 384 "add_pred.m"
          {
#line 384 "add_pred.m"
            hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(hlds__make_hlds__add_pred__ClausesInfo_57, hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_62, &hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_123_123);
          }
#line 391 "add_pred.m"
          {
#line 391 "add_pred.m"
            hlds__hlds_pred__pred_info_get_markers_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_123_123, &hlds__make_hlds__add_pred__Markers0_58);
          }
#line 392 "add_pred.m"
          {
#line 392 "add_pred.m"
            hlds__hlds_pred__add_marker_3_p_0(hlds__make_hlds__add_pred__V_124_124, hlds__make_hlds__add_pred__Markers0_58, &hlds__make_hlds__add_pred__Markers_61);
          }
#line 2908 "hlds.make_hlds.add_pred.c"
        }
#line 2910 "hlds.make_hlds.add_pred.c"
        break;
#line 2912 "hlds.make_hlds.add_pred.c"
      case (MR_Integer) 1:
#line 2914 "hlds.make_hlds.add_pred.c"
        {
#line 2916 "hlds.make_hlds.add_pred.c"
          MR_Word hlds__make_hlds__add_pred__Markers2_60;
#line 2918 "hlds.make_hlds.add_pred.c"
          MR_Word hlds__make_hlds__add_pred__ClausesRep_149;
#line 2920 "hlds.make_hlds.add_pred.c"
          MR_Word hlds__make_hlds__add_pred__ClausesInfo_150;
#line 2922 "hlds.make_hlds.add_pred.c"
          MR_Word hlds__make_hlds__add_pred__Markers0_151;
#line 2924 "hlds.make_hlds.add_pred.c"
          MR_Word hlds__make_hlds__add_pred__Markers1_152;

#line 370 "add_pred.m"
          {
#line 370 "add_pred.m"
            hlds__hlds_clauses__set_clause_list_2_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__add_pred__ClausesRep_149);
          }
#line 381 "add_pred.m"
          {
#line 381 "add_pred.m"
            hlds__make_hlds__add_pred__ClausesInfo_150 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 381 "add_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_150, 0) = ((MR_Box) (hlds__make_hlds__add_pred__VarSet_24));
#line 381 "add_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_150, 1) = ((MR_Box) (hlds__make_hlds__add_pred__VarTypes_52));
#line 381 "add_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_150, 2) = ((MR_Box) (hlds__make_hlds__add_pred__TVarNameMap_53));
#line 381 "add_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_150, 3) = ((MR_Box) (hlds__make_hlds__add_pred__VarTypes_52));
#line 381 "add_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_150, 4) = ((MR_Box) (hlds__make_hlds__add_pred__HeadVars_15));
#line 381 "add_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_150, 5) = ((MR_Box) (hlds__make_hlds__add_pred__ClausesRep_149));
#line 381 "add_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_150, 6) = ((MR_Box) (hlds__make_hlds__add_pred__V_122_122));
#line 381 "add_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_150, 7) = ((MR_Box) (hlds__make_hlds__add_pred__RttiVarMaps_54));
#line 381 "add_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_150, 8) = ((MR_Box) (hlds__make_hlds__add_pred__HasForeignClauses_55));
#line 381 "add_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_150, 9) = ((MR_Box) (hlds__make_hlds__add_pred__HadSyntaxError_56));
#line 381 "add_pred.m"
          }
#line 384 "add_pred.m"
          {
#line 384 "add_pred.m"
            hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(hlds__make_hlds__add_pred__ClausesInfo_150, hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_62, &hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_123_123);
          }
#line 391 "add_pred.m"
          {
#line 391 "add_pred.m"
            hlds__hlds_pred__pred_info_get_markers_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_123_123, &hlds__make_hlds__add_pred__Markers0_151);
          }
#line 392 "add_pred.m"
          {
#line 392 "add_pred.m"
            hlds__hlds_pred__add_marker_3_p_0(hlds__make_hlds__add_pred__V_124_124, hlds__make_hlds__add_pred__Markers0_151, &hlds__make_hlds__add_pred__Markers1_152);
          }
#line 395 "add_pred.m"
          {
#line 395 "add_pred.m"
            hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 0, hlds__make_hlds__add_pred__Markers1_152, &hlds__make_hlds__add_pred__Markers2_60);
          }
#line 396 "add_pred.m"
          {
#line 396 "add_pred.m"
            hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 1, hlds__make_hlds__add_pred__Markers2_60, &hlds__make_hlds__add_pred__Markers_61);
          }
#line 2983 "hlds.make_hlds.add_pred.c"
        }
#line 2985 "hlds.make_hlds.add_pred.c"
        break;
#line 2987 "hlds.make_hlds.add_pred.c"
    }
#line 401 "add_pred.m"
    {
#line 401 "add_pred.m"
      hlds__hlds_pred__pred_info_set_markers_3_p_0(hlds__make_hlds__add_pred__Markers_61, hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_123_123, hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_63);
    }
#line 247 "add_pred.m"
  }
#line 244 "add_pred.m"
}

#line 153 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__add_new_pred_16_p_0(
#line 153 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Origin_17,
#line 153 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__TVarSet_18,
#line 153 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ExistQVars_19,
#line 153 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredName_20,
#line 153 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Types_21,
#line 153 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Purity_22,
#line 153 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Constraints_23,
#line 153 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Markers0_24,
#line 153 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_25,
#line 153 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredStatus0_26,
#line 153 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__NeedQual_27,
#line 153 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_28,
#line 153 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_61,
#line 153 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_62,
#line 153 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_63,
#line 153 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_64)
#line 153 "add_pred.m"
{
#line 162 "add_pred.m"
  {
#line 162 "add_pred.m"
    MR_bool hlds__make_hlds__add_pred__succeeded;
#line 162 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredStatus_31;
#line 162 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__ModuleName_32;
#line 162 "add_pred.m"
    MR_Integer hlds__make_hlds__add_pred__Arity_33;
#line 170 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_65_65 = (MR_Word) hlds__make_hlds__add_pred__PredStatus0_26;

#line 170 "add_pred.m"
    hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__V_65_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 170 "add_pred.m"
    if (hlds__make_hlds__add_pred__succeeded)
#line 171 "add_pred.m"
      {
#line 171 "add_pred.m"
        hlds__make_hlds__add_pred__PredStatus_31 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pred_scalar_common_3[0])));
#line 171 "add_pred.m"
      }
#line 170 "add_pred.m"
    else
#line 173 "add_pred.m"
      hlds__make_hlds__add_pred__PredStatus_31 = hlds__make_hlds__add_pred__PredStatus0_26;
#line 175 "add_pred.m"
    {
#line 175 "add_pred.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__add_pred__ModuleName_32);
    }
#line 176 "add_pred.m"
    {
#line 176 "add_pred.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__make_hlds__add_pred__Types_21, &hlds__make_hlds__add_pred__Arity_33);
    }
#line 183 "add_pred.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_pred__PredName_20)) == (MR_mktag((MR_Integer) 1))))
#line 184 "add_pred.m"
      {
#line 184 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_79_79;
#line 184 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__MNameOfPred_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__PredName_20, (MR_Integer) 0)));
#line 184 "add_pred.m"
        MR_String hlds__make_hlds__add_pred__PName_36 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__PredName_20, (MR_Integer) 1)));
#line 184 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__PredTable0_37;
#line 184 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__ClausesInfo_38;
#line 184 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__Proofs_39;
#line 184 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__ConstraintMap_40;
#line 184 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__PurityMarkers_41;
#line 184 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__Markers_42;
#line 184 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__VarNameRemap_43;
#line 184 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__PredInfo0_44;
#line 184 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__PredIds_45;
#line 184 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__V_68_68;

#line 185 "add_pred.m"
        {
#line 185 "add_pred.m"
          hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__add_pred__PredTable0_37);
        }
#line 186 "add_pred.m"
        {
#line 186 "add_pred.m"
          hlds__make_hlds__add_pred__V_68_68 = hlds__hlds_clauses__init_clause_item_numbers_user_0_f_0();
        }
#line 186 "add_pred.m"
        {
#line 186 "add_pred.m"
          hlds__hlds_clauses__clauses_info_init_4_p_0(hlds__make_hlds__add_pred__PredOrFunc_28, hlds__make_hlds__add_pred__Arity_33, hlds__make_hlds__add_pred__V_68_68, &hlds__make_hlds__add_pred__ClausesInfo_38);
        }
#line 3119 "hlds.make_hlds.add_pred.c"
        hlds__make_hlds__add_pred__TypeCtorInfo_79_79 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 188 "add_pred.m"
        {
#line 188 "add_pred.m"
          mercury__map__init_1_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_79_79, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, &hlds__make_hlds__add_pred__Proofs_39);
        }
#line 189 "add_pred.m"
        {
#line 189 "add_pred.m"
          mercury__map__init_1_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, hlds__make_hlds__add_pred__TypeCtorInfo_79_79, &hlds__make_hlds__add_pred__ConstraintMap_40);
        }
#line 190 "add_pred.m"
        {
#line 190 "add_pred.m"
          hlds__hlds_pred__purity_to_markers_2_p_0(hlds__make_hlds__add_pred__Purity_22, &hlds__make_hlds__add_pred__PurityMarkers_41);
        }
#line 191 "add_pred.m"
        {
#line 191 "add_pred.m"
          hlds__hlds_pred__add_markers_3_p_0(hlds__make_hlds__add_pred__PurityMarkers_41, hlds__make_hlds__add_pred__Markers0_24, &hlds__make_hlds__add_pred__Markers_42);
        }
#line 192 "add_pred.m"
        {
#line 192 "add_pred.m"
          mercury__map__init_1_p_0((MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, &hlds__make_hlds__add_pred__VarNameRemap_43);
        }
#line 193 "add_pred.m"
        {
#line 193 "add_pred.m"
          hlds__hlds_pred__pred_info_init_18_p_0(hlds__make_hlds__add_pred__ModuleName_32, hlds__make_hlds__add_pred__PredName_20, hlds__make_hlds__add_pred__Arity_33, hlds__make_hlds__add_pred__PredOrFunc_28, hlds__make_hlds__add_pred__Context_25, hlds__make_hlds__add_pred__Origin_17, hlds__make_hlds__add_pred__PredStatus_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_pred__Markers_42, hlds__make_hlds__add_pred__Types_21, hlds__make_hlds__add_pred__TVarSet_18, hlds__make_hlds__add_pred__ExistQVars_19, hlds__make_hlds__add_pred__Constraints_23, hlds__make_hlds__add_pred__Proofs_39, hlds__make_hlds__add_pred__ConstraintMap_40, hlds__make_hlds__add_pred__ClausesInfo_38, hlds__make_hlds__add_pred__VarNameRemap_43, &hlds__make_hlds__add_pred__PredInfo0_44);
        }
#line 197 "add_pred.m"
        {
#line 197 "add_pred.m"
          hlds__pred_table__predicate_table_lookup_pf_m_n_a_7_p_0(hlds__make_hlds__add_pred__PredTable0_37, (MR_Integer) 0, hlds__make_hlds__add_pred__PredOrFunc_28, hlds__make_hlds__add_pred__MNameOfPred_35, hlds__make_hlds__add_pred__PName_36, hlds__make_hlds__add_pred__Arity_33, &hlds__make_hlds__add_pred__PredIds_45);
        }
#line 211 "add_pred.m"
        if ((hlds__make_hlds__add_pred__PredIds_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 212 "add_pred.m"
          {
#line 212 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__PQInfo_52;
#line 212 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__PredId_53;
#line 212 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__PredTable1_54;
#line 212 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__PredTable_60;

#line 213 "add_pred.m"
            {
#line 213 "add_pred.m"
              hlds__hlds_module__module_info_get_partial_qualifier_info_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__add_pred__PQInfo_52);
            }
#line 214 "add_pred.m"
            {
#line 214 "add_pred.m"
              hlds__pred_table__predicate_table_insert_qual_6_p_0(hlds__make_hlds__add_pred__PredInfo0_44, hlds__make_hlds__add_pred__NeedQual_27, hlds__make_hlds__add_pred__PQInfo_52, &hlds__make_hlds__add_pred__PredId_53, hlds__make_hlds__add_pred__PredTable0_37, &hlds__make_hlds__add_pred__PredTable1_54);
            }
#line 216 "add_pred.m"
            {
#line 216 "add_pred.m"
              hlds__make_hlds__add_pred__succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(hlds__make_hlds__add_pred__PredInfo0_44);
            }
#line 216 "add_pred.m"
            if (hlds__make_hlds__add_pred__succeeded)
#line 217 "add_pred.m"
              {
#line 217 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__Globals_55;
#line 217 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__CompilationTarget_56;
#line 217 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__PredInfo_57;
#line 217 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__Preds1_58;
#line 217 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__Preds_59;

#line 217 "add_pred.m"
                {
#line 217 "add_pred.m"
                  hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__add_pred__Globals_55);
                }
#line 218 "add_pred.m"
                {
#line 218 "add_pred.m"
                  libs__globals__get_target_2_p_0(hlds__make_hlds__add_pred__Globals_55, &hlds__make_hlds__add_pred__CompilationTarget_56);
                }
#line 219 "add_pred.m"
                {
#line 219 "add_pred.m"
                  hlds__make_hlds__add_pred__add_builtin_5_p_0(hlds__make_hlds__add_pred__PredId_53, hlds__make_hlds__add_pred__Types_21, hlds__make_hlds__add_pred__CompilationTarget_56, hlds__make_hlds__add_pred__PredInfo0_44, &hlds__make_hlds__add_pred__PredInfo_57);
                }
#line 221 "add_pred.m"
                {
#line 221 "add_pred.m"
                  hlds__pred_table__predicate_table_get_preds_2_p_0(hlds__make_hlds__add_pred__PredTable1_54, &hlds__make_hlds__add_pred__Preds1_58);
                }
#line 222 "add_pred.m"
                {
#line 222 "add_pred.m"
                  mercury__map__det_update_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, ((MR_Box) (hlds__make_hlds__add_pred__PredId_53)), ((MR_Box) (hlds__make_hlds__add_pred__PredInfo_57)), hlds__make_hlds__add_pred__Preds1_58, &hlds__make_hlds__add_pred__Preds_59);
                }
#line 223 "add_pred.m"
                {
#line 223 "add_pred.m"
                  hlds__pred_table__predicate_table_set_preds_3_p_0(hlds__make_hlds__add_pred__Preds_59, hlds__make_hlds__add_pred__PredTable1_54, &hlds__make_hlds__add_pred__PredTable_60);
                }
#line 217 "add_pred.m"
              }
#line 216 "add_pred.m"
            else
#line 225 "add_pred.m"
              hlds__make_hlds__add_pred__PredTable_60 = hlds__make_hlds__add_pred__PredTable1_54;
#line 227 "add_pred.m"
            {
#line 227 "add_pred.m"
              hlds__hlds_module__module_info_set_predicate_table_3_p_0(hlds__make_hlds__add_pred__PredTable_60, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_61, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_62);
            }
#line 212 "add_pred.m"
            *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_64 = hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_63;
#line 212 "add_pred.m"
          }
#line 211 "add_pred.m"
        else
#line 200 "add_pred.m"
          {
#line 200 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__OrigPred_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__PredIds_45, (MR_Integer) 0)));
#line 200 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__OrigPredInfo_48;
#line 200 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__OrigContext_49;
#line 200 "add_pred.m"
            MR_String hlds__make_hlds__add_pred__DeclString_50;
#line 200 "add_pred.m"
            MR_Integer hlds__make_hlds__add_pred__OrigArity_51;
#line 200 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__PredIds_45, (MR_Integer) 1)));
#line 205 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_72_72;

#line 201 "add_pred.m"
            {
#line 201 "add_pred.m"
              hlds__hlds_module__module_info_pred_info_3_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_61, hlds__make_hlds__add_pred__OrigPred_46, &hlds__make_hlds__add_pred__OrigPredInfo_48);
            }
#line 202 "add_pred.m"
            {
#line 202 "add_pred.m"
              hlds__hlds_pred__pred_info_get_context_2_p_0(hlds__make_hlds__add_pred__OrigPredInfo_48, &hlds__make_hlds__add_pred__OrigContext_49);
            }
#line 203 "add_pred.m"
            {
#line 203 "add_pred.m"
              hlds__make_hlds__add_pred__DeclString_50 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(hlds__make_hlds__add_pred__PredOrFunc_28);
            }
#line 204 "add_pred.m"
            {
#line 204 "add_pred.m"
              parse_tree__prog_util__adjust_func_arity_3_p_1(hlds__make_hlds__add_pred__PredOrFunc_28, &hlds__make_hlds__add_pred__OrigArity_51, hlds__make_hlds__add_pred__Arity_33);
            }
#line 205 "add_pred.m"
            hlds__make_hlds__add_pred__V_72_72 = (MR_Word) hlds__make_hlds__add_pred__PredStatus0_26;
#line 205 "add_pred.m"
            hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__V_72_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 205 "add_pred.m"
            if (hlds__make_hlds__add_pred__succeeded)
#line 205 "add_pred.m"
              *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_64 = hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_63;
#line 205 "add_pred.m"
            else
#line 208 "add_pred.m"
              {
#line 208 "add_pred.m"
                {
#line 208 "add_pred.m"
                  hlds__make_hlds__make_hlds_error__multiple_def_error_9_p_0((MR_Integer) 0, hlds__make_hlds__add_pred__PredName_20, hlds__make_hlds__add_pred__OrigArity_51, hlds__make_hlds__add_pred__DeclString_50, hlds__make_hlds__add_pred__Context_25, hlds__make_hlds__add_pred__OrigContext_49, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_63, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_64);
                }
#line 208 "add_pred.m"
              }
#line 200 "add_pred.m"
            *hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_62 = hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_61;
#line 200 "add_pred.m"
          }
#line 184 "add_pred.m"
      }
#line 183 "add_pred.m"
    else
#line 178 "add_pred.m"
      {
#line 179 "add_pred.m"
        {
#line 179 "add_pred.m"
          hlds__hlds_module__module_info_incr_errors_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_61, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_62);
        }
#line 180 "add_pred.m"
        {
#line 180 "add_pred.m"
          hlds__make_hlds__add_pred__unqualified_pred_error_5_p_0(hlds__make_hlds__add_pred__PredName_20, hlds__make_hlds__add_pred__Arity_33, hlds__make_hlds__add_pred__Context_25, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_63, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_64);
        }
#line 178 "add_pred.m"
      }
#line 162 "add_pred.m"
  }
#line 153 "add_pred.m"
}

#line 69 "add_pred.m"
void MR_CALL 
hlds__make_hlds__add_pred__check_pred_if_field_access_function_4_p_0(
#line 69 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ModuleInfo_5,
#line 69 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__SectionItem_6,
#line 69 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_29,
#line 69 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_30)
#line 69 "add_pred.m"
{
#line 629 "add_pred.m"
  {
#line 629 "add_pred.m"
    MR_bool hlds__make_hlds__add_pred__succeeded;
#line 629 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__SectionInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__SectionItem_6, (MR_Integer) 0)));
#line 629 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__ItemPredDecl_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__SectionItem_6, (MR_Integer) 1)));
#line 629 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__ItemMercuryStatus_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__SectionInfo_8, (MR_Integer) 0)));
#line 629 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__SymName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ItemPredDecl_9, (MR_Integer) 0)));
#line 629 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredOrFunc_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ItemPredDecl_9, (MR_Integer) 1)));
#line 629 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TypesAndModes_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ItemPredDecl_9, (MR_Integer) 2)));
#line 629 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Context_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ItemPredDecl_9, (MR_Integer) 12)));
#line 631 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred___NeedQual_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__SectionInfo_8, (MR_Integer) 1)));
#line 632 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ItemPredDecl_9, (MR_Integer) 3)));
#line 632 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ItemPredDecl_9, (MR_Integer) 4)));
#line 632 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ItemPredDecl_9, (MR_Integer) 5)));
#line 632 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ItemPredDecl_9, (MR_Integer) 6)));
#line 632 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ItemPredDecl_9, (MR_Integer) 7)));
#line 632 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ItemPredDecl_9, (MR_Integer) 8)));
#line 632 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ItemPredDecl_9, (MR_Integer) 9)));
#line 632 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ItemPredDecl_9, (MR_Integer) 10)));
#line 632 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ItemPredDecl_9, (MR_Integer) 11)));
#line 632 "add_pred.m"
    MR_Integer hlds__make_hlds__add_pred___SeqNum_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ItemPredDecl_9, (MR_Integer) 13)));

#line 636 "add_pred.m"
#line 636 "add_pred.m"
    switch (hlds__make_hlds__add_pred__PredOrFunc_13) {
#line 636 "add_pred.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 636 "add_pred.m"
      case (MR_Integer) 1:
#line 637 "add_pred.m"
        {
#line 637 "add_pred.m"
          MR_Integer hlds__make_hlds__add_pred__PredArity_26;
#line 637 "add_pred.m"
          MR_Integer hlds__make_hlds__add_pred__FuncArity_27;
#line 637 "add_pred.m"
          MR_Word hlds__make_hlds__add_pred__PredStatus_28;

#line 638 "add_pred.m"
          {
#line 638 "add_pred.m"
            mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, hlds__make_hlds__add_pred__TypesAndModes_14, &hlds__make_hlds__add_pred__PredArity_26);
          }
#line 639 "add_pred.m"
          {
#line 639 "add_pred.m"
            parse_tree__prog_util__adjust_func_arity_3_p_1((MR_Integer) 1, &hlds__make_hlds__add_pred__FuncArity_27, hlds__make_hlds__add_pred__PredArity_26);
          }
#line 640 "add_pred.m"
          {
#line 640 "add_pred.m"
            hlds__status__item_mercury_status_to_pred_status_2_p_0(hlds__make_hlds__add_pred__ItemMercuryStatus_10, &hlds__make_hlds__add_pred__PredStatus_28);
          }
#line 641 "add_pred.m"
          {
#line 641 "add_pred.m"
            hlds__make_hlds__add_pred__maybe_check_field_access_function_7_p_0(hlds__make_hlds__add_pred__ModuleInfo_5, hlds__make_hlds__add_pred__SymName_12, hlds__make_hlds__add_pred__FuncArity_27, hlds__make_hlds__add_pred__PredStatus_28, hlds__make_hlds__add_pred__Context_24, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_29, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_30);
          }
#line 637 "add_pred.m"
        }
#line 636 "add_pred.m"
        break;
#line 636 "add_pred.m"
      case (MR_Integer) 0:
#line 635 "add_pred.m"
        *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_30 = hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_29;
#line 636 "add_pred.m"
        break;
#line 636 "add_pred.m"
    }
#line 629 "add_pred.m"
  }
#line 69 "add_pred.m"
}

#line 65 "add_pred.m"
void MR_CALL 
hlds__make_hlds__add_pred__preds_add_implicit_for_assertion_10_p_0(
#line 65 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_25,
#line 65 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_26,
#line 65 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ModuleName_12,
#line 65 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredName_13,
#line 65 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__Arity_14,
#line 65 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_15,
#line 65 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__HeadVars_16,
#line 65 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Status_17,
#line 65 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_18,
#line 65 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__PredId_19)
#line 65 "add_pred.m"
{
#line 579 "add_pred.m"
  {
#line 579 "add_pred.m"
    MR_bool hlds__make_hlds__add_pred__succeeded;
#line 579 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_55_71;
#line 579 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_58_74;
#line 579 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__ClausesInfo_20;
#line 579 "add_pred.m"
    MR_String hlds__make_hlds__add_pred__FileName_21;
#line 579 "add_pred.m"
    MR_Integer hlds__make_hlds__add_pred__LineNum_22;
#line 579 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredicateTable0_23;
#line 579 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredicateTable_24;
#line 579 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_27_27;
#line 579 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TVarSet0_42;
#line 579 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TypeVars_43;
#line 579 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TVarSet_44;
#line 579 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Types_45;
#line 579 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Proofs_46;
#line 579 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__ConstraintMap_47;
#line 579 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Markers0_50;
#line 579 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__VarNameRemap_51;
#line 579 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredInfo0_52;
#line 579 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Markers_53;
#line 579 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredInfo_54;
#line 579 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredIds_55;
#line 579 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_60_60;

#line 580 "add_pred.m"
    {
#line 580 "add_pred.m"
      hlds__hlds_clauses__clauses_info_init_for_assertion_2_p_0(hlds__make_hlds__add_pred__HeadVars_16, &hlds__make_hlds__add_pred__ClausesInfo_20);
    }
#line 581 "add_pred.m"
    {
#line 581 "add_pred.m"
      mercury__term__context_file_2_p_0(hlds__make_hlds__add_pred__Context_18, &hlds__make_hlds__add_pred__FileName_21);
    }
#line 582 "add_pred.m"
    {
#line 582 "add_pred.m"
      mercury__term__context_line_2_p_0(hlds__make_hlds__add_pred__Context_18, &hlds__make_hlds__add_pred__LineNum_22);
    }
#line 583 "add_pred.m"
    {
#line 583 "add_pred.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_25, &hlds__make_hlds__add_pred__PredicateTable0_23);
    }
#line 585 "add_pred.m"
    {
#line 585 "add_pred.m"
      hlds__make_hlds__add_pred__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 585 "add_pred.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 585 "add_pred.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_27_27, 1) = ((MR_Box) (hlds__make_hlds__add_pred__FileName_21));
#line 585 "add_pred.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_27_27, 2) = ((MR_Box) (hlds__make_hlds__add_pred__LineNum_22));
#line 585 "add_pred.m"
    }
#line 3540 "hlds.make_hlds.add_pred.c"
    hlds__make_hlds__add_pred__TypeCtorInfo_55_71 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 596 "add_pred.m"
    {
#line 596 "add_pred.m"
      mercury__varset__init_1_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_55_71, &hlds__make_hlds__add_pred__TVarSet0_42);
    }
#line 597 "add_pred.m"
    {
#line 597 "add_pred.m"
      parse_tree__prog_util__make_n_fresh_vars_5_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_55_71, (MR_String) "T", hlds__make_hlds__add_pred__Arity_14, &hlds__make_hlds__add_pred__TypeVars_43, hlds__make_hlds__add_pred__TVarSet0_42, &hlds__make_hlds__add_pred__TVarSet_44);
    }
#line 598 "add_pred.m"
    {
#line 598 "add_pred.m"
      hlds__make_hlds__add_pred__V_60_60 = mercury__map__init_0_f_0((MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
    }
#line 598 "add_pred.m"
    {
#line 598 "add_pred.m"
      parse_tree__prog_type__var_list_to_type_list_3_p_0(hlds__make_hlds__add_pred__V_60_60, hlds__make_hlds__add_pred__TypeVars_43, &hlds__make_hlds__add_pred__Types_45);
    }
#line 3562 "hlds.make_hlds.add_pred.c"
    hlds__make_hlds__add_pred__TypeCtorInfo_58_74 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 599 "add_pred.m"
    {
#line 599 "add_pred.m"
      mercury__map__init_1_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_58_74, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, &hlds__make_hlds__add_pred__Proofs_46);
    }
#line 600 "add_pred.m"
    {
#line 600 "add_pred.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, hlds__make_hlds__add_pred__TypeCtorInfo_58_74, &hlds__make_hlds__add_pred__ConstraintMap_47);
    }
#line 607 "add_pred.m"
    {
#line 607 "add_pred.m"
      hlds__hlds_pred__init_markers_1_p_0(&hlds__make_hlds__add_pred__Markers0_50);
    }
#line 608 "add_pred.m"
    {
#line 608 "add_pred.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, &hlds__make_hlds__add_pred__VarNameRemap_51);
    }
#line 609 "add_pred.m"
    {
#line 609 "add_pred.m"
      hlds__hlds_pred__pred_info_init_18_p_0(hlds__make_hlds__add_pred__ModuleName_12, hlds__make_hlds__add_pred__PredName_13, hlds__make_hlds__add_pred__Arity_14, hlds__make_hlds__add_pred__PredOrFunc_15, hlds__make_hlds__add_pred__Context_18, hlds__make_hlds__add_pred__V_27_27, hlds__make_hlds__add_pred__Status_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_pred__Markers0_50, hlds__make_hlds__add_pred__Types_45, hlds__make_hlds__add_pred__TVarSet_44, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[33], hlds__make_hlds__add_pred__Proofs_46, hlds__make_hlds__add_pred__ConstraintMap_47, hlds__make_hlds__add_pred__ClausesInfo_20, hlds__make_hlds__add_pred__VarNameRemap_51, &hlds__make_hlds__add_pred__PredInfo0_52);
    }
#line 613 "add_pred.m"
    {
#line 613 "add_pred.m"
      hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 2, hlds__make_hlds__add_pred__Markers0_50, &hlds__make_hlds__add_pred__Markers_53);
    }
#line 614 "add_pred.m"
    {
#line 614 "add_pred.m"
      hlds__hlds_pred__pred_info_set_markers_3_p_0(hlds__make_hlds__add_pred__Markers_53, hlds__make_hlds__add_pred__PredInfo0_52, &hlds__make_hlds__add_pred__PredInfo_54);
    }
#line 615 "add_pred.m"
    {
#line 615 "add_pred.m"
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__make_hlds__add_pred__PredicateTable0_23, (MR_Integer) 0, hlds__make_hlds__add_pred__PredOrFunc_15, hlds__make_hlds__add_pred__PredName_13, hlds__make_hlds__add_pred__Arity_14, &hlds__make_hlds__add_pred__PredIds_55);
    }
#line 622 "add_pred.m"
    if ((hlds__make_hlds__add_pred__PredIds_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 618 "add_pred.m"
      {
#line 618 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__MQInfo_56;

#line 619 "add_pred.m"
        {
#line 619 "add_pred.m"
          hlds__hlds_module__module_info_get_partial_qualifier_info_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_25, &hlds__make_hlds__add_pred__MQInfo_56);
        }
#line 620 "add_pred.m"
        {
#line 620 "add_pred.m"
          hlds__pred_table__predicate_table_insert_qual_6_p_0(hlds__make_hlds__add_pred__PredInfo_54, (MR_Integer) 1, hlds__make_hlds__add_pred__MQInfo_56, hlds__make_hlds__add_pred__PredId_19, hlds__make_hlds__add_pred__PredicateTable0_23, &hlds__make_hlds__add_pred__PredicateTable_24);
        }
#line 618 "add_pred.m"
      }
#line 622 "add_pred.m"
    else
#line 623 "add_pred.m"
      {
#line 624 "add_pred.m"
        {
#line 624 "add_pred.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_pred", (MR_String) "predicate \140hlds.make_hlds.add_pred.preds_do_add_implicit\'/12", (MR_String) "search succeeded");
#line 624 "add_pred.m"
          return;
        }
#line 623 "add_pred.m"
      }
#line 587 "add_pred.m"
    {
#line 587 "add_pred.m"
      hlds__hlds_module__module_info_set_predicate_table_3_p_0(hlds__make_hlds__add_pred__PredicateTable_24, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_25, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_26);
    }
#line 579 "add_pred.m"
  }
#line 65 "add_pred.m"
}

#line 59 "add_pred.m"
void MR_CALL 
hlds__make_hlds__add_pred__preds_add_implicit_report_error_14_p_0(
#line 59 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_31,
#line 59 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_32,
#line 59 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ModuleName_16,
#line 59 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredName_17,
#line 59 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__Arity_18,
#line 59 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_19,
#line 59 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Status_20,
#line 59 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__IsClassMethod_21,
#line 59 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_22,
#line 59 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Origin_23,
#line 59 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__DescPieces_24,
#line 59 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__PredId_25,
#line 59 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_33,
#line 59 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_34)
#line 59 "add_pred.m"
{
#line 559 "add_pred.m"
  {
#line 559 "add_pred.m"
    MR_bool hlds__make_hlds__add_pred__succeeded;
#line 559 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredicateTable0_27;
#line 559 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__ClausesInfo_29;
#line 559 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredicateTable_30;
#line 559 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_35_35;
#line 559 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_38_38;

#line 560 "add_pred.m"
    {
#line 560 "add_pred.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_31, &hlds__make_hlds__add_pred__PredicateTable0_27);
    }
#line 561 "add_pred.m"
    {
#line 561 "add_pred.m"
      hlds__make_hlds__make_hlds_error__maybe_undefined_pred_error_10_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_31, hlds__make_hlds__add_pred__PredName_17, hlds__make_hlds__add_pred__Arity_18, hlds__make_hlds__add_pred__PredOrFunc_19, hlds__make_hlds__add_pred__Status_20, hlds__make_hlds__add_pred__IsClassMethod_21, hlds__make_hlds__add_pred__Context_22, hlds__make_hlds__add_pred__DescPieces_24, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_33, &hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_35_35);
    }
#line 568 "add_pred.m"
#line 568 "add_pred.m"
    switch (hlds__make_hlds__add_pred__PredOrFunc_19) {
#line 568 "add_pred.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 568 "add_pred.m"
      case (MR_Integer) 1:
#line 564 "add_pred.m"
        {
#line 564 "add_pred.m"
          MR_Integer hlds__make_hlds__add_pred__FuncArity_28;

#line 565 "add_pred.m"
          {
#line 565 "add_pred.m"
            parse_tree__prog_util__adjust_func_arity_3_p_1((MR_Integer) 1, &hlds__make_hlds__add_pred__FuncArity_28, hlds__make_hlds__add_pred__Arity_18);
          }
#line 566 "add_pred.m"
          {
#line 566 "add_pred.m"
            hlds__make_hlds__add_pred__maybe_check_field_access_function_7_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_31, hlds__make_hlds__add_pred__PredName_17, hlds__make_hlds__add_pred__FuncArity_28, hlds__make_hlds__add_pred__Status_20, hlds__make_hlds__add_pred__Context_22, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_35_35, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_34);
          }
#line 564 "add_pred.m"
        }
#line 568 "add_pred.m"
        break;
#line 568 "add_pred.m"
      case (MR_Integer) 0:
#line 569 "add_pred.m"
        *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_34 = hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_35_35;
#line 568 "add_pred.m"
        break;
#line 568 "add_pred.m"
    }
#line 571 "add_pred.m"
    {
#line 571 "add_pred.m"
      hlds__make_hlds__add_pred__V_38_38 = hlds__hlds_clauses__init_clause_item_numbers_user_0_f_0();
    }
#line 571 "add_pred.m"
    {
#line 571 "add_pred.m"
      hlds__hlds_clauses__clauses_info_init_4_p_0(hlds__make_hlds__add_pred__PredOrFunc_19, hlds__make_hlds__add_pred__Arity_18, hlds__make_hlds__add_pred__V_38_38, &hlds__make_hlds__add_pred__ClausesInfo_29);
    }
#line 573 "add_pred.m"
    {
#line 573 "add_pred.m"
      hlds__make_hlds__add_pred__preds_do_add_implicit_12_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_31, hlds__make_hlds__add_pred__ModuleName_16, hlds__make_hlds__add_pred__PredName_17, hlds__make_hlds__add_pred__Arity_18, hlds__make_hlds__add_pred__PredOrFunc_19, hlds__make_hlds__add_pred__Status_20, hlds__make_hlds__add_pred__Context_22, hlds__make_hlds__add_pred__Origin_23, hlds__make_hlds__add_pred__ClausesInfo_29, hlds__make_hlds__add_pred__PredId_25, hlds__make_hlds__add_pred__PredicateTable0_27, &hlds__make_hlds__add_pred__PredicateTable_30);
    }
#line 576 "add_pred.m"
    {
#line 576 "add_pred.m"
      hlds__hlds_module__module_info_set_predicate_table_3_p_0(hlds__make_hlds__add_pred__PredicateTable_30, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_31, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_32);
    }
#line 559 "add_pred.m"
  }
#line 59 "add_pred.m"
}

#line 48 "add_pred.m"
void MR_CALL 
hlds__make_hlds__add_pred__module_add_mode_13_p_0(
#line 48 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__InstVarSet_14,
#line 48 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredName_15,
#line 48 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Modes_16,
#line 48 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__MaybeDet_17,
#line 48 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Status_18,
#line 48 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__MContext_19,
#line 48 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_20,
#line 48 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__IsClassMethod_21,
#line 48 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__PredProcId_22,
#line 48 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_39,
#line 48 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_40,
#line 48 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_41,
#line 48 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_42)
#line 48 "add_pred.m"
{
#line 422 "add_pred.m"
  {
#line 422 "add_pred.m"
    MR_bool hlds__make_hlds__add_pred__succeeded;
#line 422 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_58_58;
#line 422 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_59_59;
#line 422 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__ModuleName0_25;
#line 422 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__ModuleName_26;
#line 422 "add_pred.m"
    MR_Integer hlds__make_hlds__add_pred__Arity_27;
#line 422 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredicateTable0_28;
#line 422 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredIds_29;
#line 422 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredId_31;
#line 422 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredicateTable1_32;
#line 422 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Preds0_33;
#line 422 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredInfo0_34;
#line 422 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredInfo_35;
#line 422 "add_pred.m"
    MR_Integer hlds__make_hlds__add_pred__ProcId_36;
#line 422 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Preds_37;
#line 422 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredicateTable_38;
#line 422 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_45_45;
#line 422 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_48_48;
#line 437 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredIdPrime_30;
#line 437 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_44_44;
#line 447 "add_pred.m"
    MR_Box hlds__make_hlds__add_pred__conv0_PredInfo0_34;

#line 431 "add_pred.m"
    {
#line 431 "add_pred.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__add_pred__ModuleName0_25);
    }
#line 432 "add_pred.m"
    {
#line 432 "add_pred.m"
      mdbcomp__sym_name__sym_name_get_module_name_default_3_p_0(hlds__make_hlds__add_pred__PredName_15, hlds__make_hlds__add_pred__ModuleName0_25, &hlds__make_hlds__add_pred__ModuleName_26);
    }
#line 433 "add_pred.m"
    {
#line 433 "add_pred.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__make_hlds__add_pred__Modes_16, &hlds__make_hlds__add_pred__Arity_27);
    }
#line 434 "add_pred.m"
    {
#line 434 "add_pred.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__add_pred__PredicateTable0_28);
    }
#line 435 "add_pred.m"
    {
#line 435 "add_pred.m"
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__make_hlds__add_pred__PredicateTable0_28, (MR_Integer) 0, hlds__make_hlds__add_pred__PredOrFunc_20, hlds__make_hlds__add_pred__PredName_15, hlds__make_hlds__add_pred__Arity_27, &hlds__make_hlds__add_pred__PredIds_29);
    }
#line 437 "add_pred.m"
    hlds__make_hlds__add_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pred__PredIds_29)) == (MR_mktag((MR_Integer) 1)));
#line 437 "add_pred.m"
    if (hlds__make_hlds__add_pred__succeeded)
#line 437 "add_pred.m"
      {
#line 437 "add_pred.m"
        hlds__make_hlds__add_pred__PredIdPrime_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__PredIds_29, (MR_Integer) 0)));
#line 437 "add_pred.m"
        hlds__make_hlds__add_pred__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__PredIds_29, (MR_Integer) 1)));
#line 437 "add_pred.m"
        hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__V_44_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 437 "add_pred.m"
      }
#line 437 "add_pred.m"
    if (hlds__make_hlds__add_pred__succeeded)
#line 438 "add_pred.m"
      {
#line 438 "add_pred.m"
        hlds__make_hlds__add_pred__PredId_31 = hlds__make_hlds__add_pred__PredIdPrime_30;
#line 438 "add_pred.m"
        hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_48_48 = hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_41;
#line 438 "add_pred.m"
        hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_45_45 = hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_39;
#line 438 "add_pred.m"
      }
#line 437 "add_pred.m"
    else
#line 440 "add_pred.m"
      {
#line 440 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__V_46_46;

#line 442 "add_pred.m"
        {
#line 442 "add_pred.m"
          hlds__make_hlds__add_pred__V_46_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 442 "add_pred.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_46_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 442 "add_pred.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_46_46, 1) = ((MR_Box) (hlds__make_hlds__add_pred__PredName_15));
#line 442 "add_pred.m"
        }
#line 440 "add_pred.m"
        {
#line 440 "add_pred.m"
          hlds__make_hlds__add_pred__preds_add_implicit_report_error_14_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_45_45, hlds__make_hlds__add_pred__ModuleName_26, hlds__make_hlds__add_pred__PredName_15, hlds__make_hlds__add_pred__Arity_27, hlds__make_hlds__add_pred__PredOrFunc_20, hlds__make_hlds__add_pred__Status_18, hlds__make_hlds__add_pred__IsClassMethod_21, hlds__make_hlds__add_pred__MContext_19, hlds__make_hlds__add_pred__V_46_46, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[6]), &hlds__make_hlds__add_pred__PredId_31, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_41, &hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_48_48);
        }
#line 440 "add_pred.m"
      }
#line 445 "add_pred.m"
    {
#line 445 "add_pred.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_45_45, &hlds__make_hlds__add_pred__PredicateTable1_32);
    }
#line 446 "add_pred.m"
    {
#line 446 "add_pred.m"
      hlds__pred_table__predicate_table_get_preds_2_p_0(hlds__make_hlds__add_pred__PredicateTable1_32, &hlds__make_hlds__add_pred__Preds0_33);
    }
#line 3924 "hlds.make_hlds.add_pred.c"
    hlds__make_hlds__add_pred__TypeCtorInfo_58_58 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 3926 "hlds.make_hlds.add_pred.c"
    hlds__make_hlds__add_pred__TypeCtorInfo_59_59 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 447 "add_pred.m"
    {
#line 447 "add_pred.m"
      mercury__map__lookup_3_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_58_58, hlds__make_hlds__add_pred__TypeCtorInfo_59_59, hlds__make_hlds__add_pred__Preds0_33, ((MR_Box) (hlds__make_hlds__add_pred__PredId_31)), &hlds__make_hlds__add_pred__conv0_PredInfo0_34);
    }
#line 447 "add_pred.m"
    hlds__make_hlds__add_pred__PredInfo0_34 = ((MR_Word) hlds__make_hlds__add_pred__conv0_PredInfo0_34);
#line 449 "add_pred.m"
    {
#line 449 "add_pred.m"
      hlds__make_hlds__add_pred__module_do_add_mode_11_p_0(hlds__make_hlds__add_pred__InstVarSet_14, hlds__make_hlds__add_pred__Arity_27, hlds__make_hlds__add_pred__Modes_16, hlds__make_hlds__add_pred__MaybeDet_17, hlds__make_hlds__add_pred__IsClassMethod_21, hlds__make_hlds__add_pred__MContext_19, hlds__make_hlds__add_pred__PredInfo0_34, &hlds__make_hlds__add_pred__PredInfo_35, &hlds__make_hlds__add_pred__ProcId_36, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_48_48, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_42);
    }
#line 451 "add_pred.m"
    {
#line 451 "add_pred.m"
      mercury__map__det_update_4_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_58_58, hlds__make_hlds__add_pred__TypeCtorInfo_59_59, ((MR_Box) (hlds__make_hlds__add_pred__PredId_31)), ((MR_Box) (hlds__make_hlds__add_pred__PredInfo_35)), hlds__make_hlds__add_pred__Preds0_33, &hlds__make_hlds__add_pred__Preds_37);
    }
#line 452 "add_pred.m"
    {
#line 452 "add_pred.m"
      hlds__pred_table__predicate_table_set_preds_3_p_0(hlds__make_hlds__add_pred__Preds_37, hlds__make_hlds__add_pred__PredicateTable1_32, &hlds__make_hlds__add_pred__PredicateTable_38);
    }
#line 453 "add_pred.m"
    {
#line 453 "add_pred.m"
      hlds__hlds_module__module_info_set_predicate_table_3_p_0(hlds__make_hlds__add_pred__PredicateTable_38, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_45_45, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_40);
    }
#line 454 "add_pred.m"
    {
#line 454 "add_pred.m"
      MR_Word base;
#line 454 "add_pred.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 454 "add_pred.m"
      *hlds__make_hlds__add_pred__PredProcId_22 = base;
#line 454 "add_pred.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredId_31));
#line 454 "add_pred.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__add_pred__ProcId_36));
#line 454 "add_pred.m"
    }
#line 422 "add_pred.m"
  }
#line 48 "add_pred.m"
}

#line 40 "add_pred.m"
void MR_CALL 
hlds__make_hlds__add_pred__do_add_new_proc_13_p_0(
#line 40 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__InstVarSet_14,
#line 40 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__Arity_15,
#line 40 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ArgModes_16,
#line 40 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__MaybeDeclaredArgModes_17,
#line 40 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__MaybeArgLives_18,
#line 40 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__DetismDecl_19,
#line 40 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__MaybeDet_20,
#line 40 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_21,
#line 40 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__IsAddressTaken_22,
#line 40 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__HasParallelConj_23,
#line 40 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredInfo0_24,
#line 40 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__PredInfo_25,
#line 40 "add_pred.m"
  MR_Integer * hlds__make_hlds__add_pred__ModeId_26)
#line 40 "add_pred.m"
{
#line 407 "add_pred.m"
  {
#line 407 "add_pred.m"
    MR_bool hlds__make_hlds__add_pred__succeeded;
#line 407 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Procs0_27;
#line 407 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__ArgTypes_28;
#line 407 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__VarNameRemap_29;
#line 407 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__NewProc0_30;
#line 407 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__NewProc_31;
#line 407 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Procs_32;

#line 408 "add_pred.m"
    {
#line 408 "add_pred.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__make_hlds__add_pred__PredInfo0_24, &hlds__make_hlds__add_pred__Procs0_27);
    }
#line 409 "add_pred.m"
    {
#line 409 "add_pred.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(hlds__make_hlds__add_pred__PredInfo0_24, &hlds__make_hlds__add_pred__ArgTypes_28);
    }
#line 410 "add_pred.m"
    {
#line 410 "add_pred.m"
      hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(hlds__make_hlds__add_pred__PredInfo0_24, &hlds__make_hlds__add_pred__VarNameRemap_29);
    }
#line 411 "add_pred.m"
    {
#line 411 "add_pred.m"
      hlds__hlds_pred__next_mode_id_2_p_0(hlds__make_hlds__add_pred__Procs0_27, hlds__make_hlds__add_pred__ModeId_26);
    }
#line 412 "add_pred.m"
    {
#line 412 "add_pred.m"
      hlds__hlds_pred__proc_info_init_12_p_0(hlds__make_hlds__add_pred__Context_21, hlds__make_hlds__add_pred__Arity_15, hlds__make_hlds__add_pred__ArgTypes_28, hlds__make_hlds__add_pred__MaybeDeclaredArgModes_17, hlds__make_hlds__add_pred__ArgModes_16, hlds__make_hlds__add_pred__MaybeArgLives_18, hlds__make_hlds__add_pred__DetismDecl_19, hlds__make_hlds__add_pred__MaybeDet_20, hlds__make_hlds__add_pred__IsAddressTaken_22, hlds__make_hlds__add_pred__HasParallelConj_23, hlds__make_hlds__add_pred__VarNameRemap_29, &hlds__make_hlds__add_pred__NewProc0_30);
    }
#line 415 "add_pred.m"
    {
#line 415 "add_pred.m"
      hlds__hlds_pred__proc_info_set_inst_varset_3_p_0(hlds__make_hlds__add_pred__InstVarSet_14, hlds__make_hlds__add_pred__NewProc0_30, &hlds__make_hlds__add_pred__NewProc_31);
    }
#line 416 "add_pred.m"
    {
#line 416 "add_pred.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, *hlds__make_hlds__add_pred__ModeId_26, ((MR_Box) (hlds__make_hlds__add_pred__NewProc_31)), hlds__make_hlds__add_pred__Procs0_27, &hlds__make_hlds__add_pred__Procs_32);
    }
#line 417 "add_pred.m"
    {
#line 417 "add_pred.m"
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(hlds__make_hlds__add_pred__Procs_32, hlds__make_hlds__add_pred__PredInfo0_24, hlds__make_hlds__add_pred__PredInfo_25);
    }
#line 407 "add_pred.m"
  }
#line 40 "add_pred.m"
}

#line 32 "add_pred.m"
void MR_CALL 
hlds__make_hlds__add_pred__module_add_pred_or_func_19_p_0(
#line 32 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Origin_20,
#line 32 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__TypeVarSet_21,
#line 32 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__InstVarSet_22,
#line 32 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ExistQVars_23,
#line 32 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_24,
#line 32 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredName_25,
#line 32 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__TypesAndModes_26,
#line 32 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__MaybeDet_27,
#line 32 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Purity_28,
#line 32 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Constraints_29,
#line 32 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Markers_30,
#line 32 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_31,
#line 32 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredStatus_32,
#line 32 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__NeedQual_33,
#line 32 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__MaybePredProcId_34,
#line 32 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_51,
#line 32 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_52,
#line 32 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_53,
#line 32 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_54)
#line 32 "add_pred.m"
{
#line 104 "add_pred.m"
  {
#line 104 "add_pred.m"
    MR_bool hlds__make_hlds__add_pred__succeeded;
#line 104 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Types_37;
#line 104 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__MaybeModes0_38;
#line 104 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_55_55;
#line 104 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_56_56;
#line 110 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Modes0_39;

#line 105 "add_pred.m"
    {
#line 105 "add_pred.m"
      parse_tree__prog_util__split_types_and_modes_3_p_0(hlds__make_hlds__add_pred__TypesAndModes_26, &hlds__make_hlds__add_pred__Types_37, &hlds__make_hlds__add_pred__MaybeModes0_38);
    }
#line 106 "add_pred.m"
    {
#line 106 "add_pred.m"
      hlds__make_hlds__add_pred__add_new_pred_16_p_0(hlds__make_hlds__add_pred__Origin_20, hlds__make_hlds__add_pred__TypeVarSet_21, hlds__make_hlds__add_pred__ExistQVars_23, hlds__make_hlds__add_pred__PredName_25, hlds__make_hlds__add_pred__Types_37, hlds__make_hlds__add_pred__Purity_28, hlds__make_hlds__add_pred__Constraints_29, hlds__make_hlds__add_pred__Markers_30, hlds__make_hlds__add_pred__Context_31, hlds__make_hlds__add_pred__PredStatus_32, hlds__make_hlds__add_pred__NeedQual_33, hlds__make_hlds__add_pred__PredOrFunc_24, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_51, &hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_55_55, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_53, &hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_56_56);
    }
#line 110 "add_pred.m"
    hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__PredOrFunc_24 == (MR_Integer) 0);
#line 110 "add_pred.m"
    if (hlds__make_hlds__add_pred__succeeded)
#line 110 "add_pred.m"
      {
#line 117 "add_pred.m"
        hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__MaybeDet_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 110 "add_pred.m"
        if (hlds__make_hlds__add_pred__succeeded)
#line 110 "add_pred.m"
          {
#line 111 "add_pred.m"
            hlds__make_hlds__add_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pred__MaybeModes0_38)) == (MR_mktag((MR_Integer) 1)));
#line 111 "add_pred.m"
            if (hlds__make_hlds__add_pred__succeeded)
#line 111 "add_pred.m"
              {
#line 111 "add_pred.m"
                hlds__make_hlds__add_pred__Modes0_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__MaybeModes0_38, (MR_Integer) 0)));
#line 116 "add_pred.m"
                hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__Modes0_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 111 "add_pred.m"
              }
#line 110 "add_pred.m"
          }
#line 110 "add_pred.m"
      }
#line 4163 "hlds.make_hlds.add_pred.c"
    if (hlds__make_hlds__add_pred__succeeded)
#line 4165 "hlds.make_hlds.add_pred.c"
      {
#line 150 "add_pred.m"
        *hlds__make_hlds__add_pred__MaybePredProcId_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 149 "add_pred.m"
        *hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_52 = hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_55_55;
#line 149 "add_pred.m"
        *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_54 = hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_56_56;
#line 4173 "hlds.make_hlds.add_pred.c"
      }
#line 4175 "hlds.make_hlds.add_pred.c"
    else
#line 4177 "hlds.make_hlds.add_pred.c"
      {
#line 125 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__V_41_41;

#line 123 "add_pred.m"
        hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__PredOrFunc_24 == (MR_Integer) 1);
#line 123 "add_pred.m"
        if (hlds__make_hlds__add_pred__succeeded)
#line 123 "add_pred.m"
          {
#line 124 "add_pred.m"
            hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__MaybeModes0_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 123 "add_pred.m"
            if (hlds__make_hlds__add_pred__succeeded)
#line 123 "add_pred.m"
              {
#line 125 "add_pred.m"
                hlds__make_hlds__add_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pred__MaybeDet_27)) == (MR_mktag((MR_Integer) 1)));
#line 125 "add_pred.m"
                if (hlds__make_hlds__add_pred__succeeded)
#line 125 "add_pred.m"
                  hlds__make_hlds__add_pred__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__MaybeDet_27, (MR_Integer) 0)));
#line 123 "add_pred.m"
              }
#line 123 "add_pred.m"
          }
#line 4204 "hlds.make_hlds.add_pred.c"
        if (hlds__make_hlds__add_pred__succeeded)
#line 4206 "hlds.make_hlds.add_pred.c"
          {
#line 4208 "hlds.make_hlds.add_pred.c"
            MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_64_64;
#line 4210 "hlds.make_hlds.add_pred.c"
            MR_Integer hlds__make_hlds__add_pred__Arity_42;
#line 4212 "hlds.make_hlds.add_pred.c"
            MR_Integer hlds__make_hlds__add_pred__FuncArity_43;
#line 4214 "hlds.make_hlds.add_pred.c"
            MR_Word hlds__make_hlds__add_pred__InMode_44;
#line 4216 "hlds.make_hlds.add_pred.c"
            MR_Word hlds__make_hlds__add_pred__InModes_45;
#line 4218 "hlds.make_hlds.add_pred.c"
            MR_Word hlds__make_hlds__add_pred__OutMode_46;
#line 4220 "hlds.make_hlds.add_pred.c"
            MR_Word hlds__make_hlds__add_pred__Modes_48;
#line 4222 "hlds.make_hlds.add_pred.c"
            MR_Word hlds__make_hlds__add_pred__IsClassMethod_49;
#line 4224 "hlds.make_hlds.add_pred.c"
            MR_Word hlds__make_hlds__add_pred__PredProcId_50;
#line 4226 "hlds.make_hlds.add_pred.c"
            MR_Word hlds__make_hlds__add_pred__V_58_58;

#line 127 "add_pred.m"
            {
#line 127 "add_pred.m"
              mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__make_hlds__add_pred__Types_37, &hlds__make_hlds__add_pred__Arity_42);
            }
#line 128 "add_pred.m"
            {
#line 128 "add_pred.m"
              parse_tree__prog_util__adjust_func_arity_3_p_1((MR_Integer) 1, &hlds__make_hlds__add_pred__FuncArity_43, hlds__make_hlds__add_pred__Arity_42);
            }
#line 129 "add_pred.m"
            {
#line 129 "add_pred.m"
              parse_tree__prog_mode__in_mode_1_p_0(&hlds__make_hlds__add_pred__InMode_44);
            }
#line 4244 "hlds.make_hlds.add_pred.c"
            hlds__make_hlds__add_pred__TypeCtorInfo_64_64 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 130 "add_pred.m"
            {
#line 130 "add_pred.m"
              mercury__list__duplicate_3_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_64_64, hlds__make_hlds__add_pred__FuncArity_43, ((MR_Box) (hlds__make_hlds__add_pred__InMode_44)), &hlds__make_hlds__add_pred__InModes_45);
            }
#line 131 "add_pred.m"
            {
#line 131 "add_pred.m"
              parse_tree__prog_mode__out_mode_1_p_0(&hlds__make_hlds__add_pred__OutMode_46);
            }
#line 132 "add_pred.m"
            {
#line 132 "add_pred.m"
              hlds__make_hlds__add_pred__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 132 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_58_58, 0) = ((MR_Box) (hlds__make_hlds__add_pred__OutMode_46));
#line 132 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 132 "add_pred.m"
            }
#line 132 "add_pred.m"
            {
#line 132 "add_pred.m"
              mercury__list__append_3_p_1(hlds__make_hlds__add_pred__TypeCtorInfo_64_64, hlds__make_hlds__add_pred__InModes_45, hlds__make_hlds__add_pred__V_58_58, &hlds__make_hlds__add_pred__Modes_48);
            }
#line 139 "add_pred.m"
            {
#line 139 "add_pred.m"
              hlds__make_hlds__add_pred__succeeded = hlds__hlds_pred__check_marker_2_p_0(hlds__make_hlds__add_pred__Markers_30, (MR_Integer) 9);
            }
#line 139 "add_pred.m"
            if (hlds__make_hlds__add_pred__succeeded)
#line 140 "add_pred.m"
              hlds__make_hlds__add_pred__IsClassMethod_49 = (MR_Integer) 1;
#line 139 "add_pred.m"
            else
#line 142 "add_pred.m"
              hlds__make_hlds__add_pred__IsClassMethod_49 = (MR_Integer) 0;
#line 144 "add_pred.m"
            {
#line 144 "add_pred.m"
              hlds__make_hlds__add_pred__module_add_mode_13_p_0(hlds__make_hlds__add_pred__InstVarSet_22, hlds__make_hlds__add_pred__PredName_25, hlds__make_hlds__add_pred__Modes_48, hlds__make_hlds__add_pred__MaybeDet_27, hlds__make_hlds__add_pred__PredStatus_32, hlds__make_hlds__add_pred__Context_31, hlds__make_hlds__add_pred__PredOrFunc_24, hlds__make_hlds__add_pred__IsClassMethod_49, &hlds__make_hlds__add_pred__PredProcId_50, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_55_55, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_52, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_56_56, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_54);
            }
#line 147 "add_pred.m"
            {
#line 147 "add_pred.m"
              MR_Word base;
#line 147 "add_pred.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 147 "add_pred.m"
              *hlds__make_hlds__add_pred__MaybePredProcId_34 = base;
#line 147 "add_pred.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredProcId_50));
#line 147 "add_pred.m"
            }
#line 4301 "hlds.make_hlds.add_pred.c"
          }
#line 4303 "hlds.make_hlds.add_pred.c"
        else
#line 148 "add_pred.m"
        if ((hlds__make_hlds__add_pred__MaybeModes0_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 149 "add_pred.m"
          {
#line 150 "add_pred.m"
            *hlds__make_hlds__add_pred__MaybePredProcId_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 149 "add_pred.m"
            *hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_52 = hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_55_55;
#line 149 "add_pred.m"
            *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_54 = hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_56_56;
#line 149 "add_pred.m"
          }
#line 148 "add_pred.m"
        else
#line 138 "add_pred.m"
          {
#line 138 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__Modes_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__MaybeModes0_38, (MR_Integer) 0)));
#line 138 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__IsClassMethod_69;
#line 138 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__PredProcId_70;

#line 139 "add_pred.m"
            {
#line 139 "add_pred.m"
              hlds__make_hlds__add_pred__succeeded = hlds__hlds_pred__check_marker_2_p_0(hlds__make_hlds__add_pred__Markers_30, (MR_Integer) 9);
            }
#line 139 "add_pred.m"
            if (hlds__make_hlds__add_pred__succeeded)
#line 140 "add_pred.m"
              hlds__make_hlds__add_pred__IsClassMethod_69 = (MR_Integer) 1;
#line 139 "add_pred.m"
            else
#line 142 "add_pred.m"
              hlds__make_hlds__add_pred__IsClassMethod_69 = (MR_Integer) 0;
#line 144 "add_pred.m"
            {
#line 144 "add_pred.m"
              hlds__make_hlds__add_pred__module_add_mode_13_p_0(hlds__make_hlds__add_pred__InstVarSet_22, hlds__make_hlds__add_pred__PredName_25, hlds__make_hlds__add_pred__Modes_68, hlds__make_hlds__add_pred__MaybeDet_27, hlds__make_hlds__add_pred__PredStatus_32, hlds__make_hlds__add_pred__Context_31, hlds__make_hlds__add_pred__PredOrFunc_24, hlds__make_hlds__add_pred__IsClassMethod_69, &hlds__make_hlds__add_pred__PredProcId_70, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_55_55, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_52, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_56_56, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_54);
            }
#line 147 "add_pred.m"
            {
#line 147 "add_pred.m"
              MR_Word base;
#line 147 "add_pred.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 147 "add_pred.m"
              *hlds__make_hlds__add_pred__MaybePredProcId_34 = base;
#line 147 "add_pred.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredProcId_70));
#line 147 "add_pred.m"
            }
#line 138 "add_pred.m"
          }
#line 4360 "hlds.make_hlds.add_pred.c"
      }
#line 104 "add_pred.m"
  }
#line 32 "add_pred.m"
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
