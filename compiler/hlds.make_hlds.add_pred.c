/*
** Automatically generated from `add_pred.m'
** by the Mercury compiler,
** version DEV
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
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
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




#line 149 "hlds.make_hlds.add_pred.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pred__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_marker_0;

#line 584 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__preds_do_add_implicit_12_p_0(
#line 584 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ModuleInfo_13,
#line 584 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ModuleName_14,
#line 584 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredName_15,
#line 584 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__Arity_16,
#line 584 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_17,
#line 584 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Status_18,
#line 584 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_19,
#line 584 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Origin_20,
#line 584 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ClausesInfo_21,
#line 584 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__PredId_22,
#line 584 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_PredicateTable_0_41,
#line 584 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_PredicateTable_42);

#line 539 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__unqualified_pred_error_5_p_0(
#line 539 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredName_6,
#line 539 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__Arity_7,
#line 539 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_8,
#line 539 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_13,
#line 539 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_14);

#line 529 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__unspecified_det_for_exported_6_p_0(
#line 529 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Name_7,
#line 529 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__Arity_8,
#line 529 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_9,
#line 529 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_10,
#line 529 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_15,
#line 529 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_16);

#line 498 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__unspecified_det_for_local_6_p_0(
#line 498 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Name_7,
#line 498 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__Arity_8,
#line 498 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_9,
#line 498 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_10,
#line 498 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_18,
#line 498 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_19);

#line 451 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__module_do_add_mode_11_p_0(
#line 451 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__InstVarSet_12,
#line 451 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__Arity_13,
#line 451 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Modes_14,
#line 451 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__MaybeDet_15,
#line 451 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__IsClassMethod_16,
#line 451 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__MContext_17,
#line 451 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_31,
#line 451 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_32,
#line 451 "add_pred.m"
  MR_Integer * hlds__make_hlds__add_pred__ProcId_19,
#line 451 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_33,
#line 451 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_34);

#line 240 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__add_builtin_5_p_0(
#line 240 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredId_6,
#line 240 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Types_7,
#line 240 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__CompilationTarget_8,
#line 240 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_61,
#line 240 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_62);

#line 191 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__add_new_pred_16_p_0_1(
#line 191 "add_pred.m"
  MR_Box hlds__make_hlds__add_pred__closure_arg,
#line 191 "add_pred.m"
  MR_Box hlds__make_hlds__add_pred__wrapper_arg_1,
#line 191 "add_pred.m"
  MR_Box hlds__make_hlds__add_pred__wrapper_arg_2,
#line 191 "add_pred.m"
  MR_Box * hlds__make_hlds__add_pred__wrapper_arg_3);

#line 152 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__add_new_pred_16_p_0(
#line 152 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Origin_17,
#line 152 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__TVarSet_18,
#line 152 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ExistQVars_19,
#line 152 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredName_20,
#line 152 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Types_21,
#line 152 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Purity_22,
#line 152 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Constraints_23,
#line 152 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Markers0_24,
#line 152 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_25,
#line 152 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ItemStatus_26,
#line 152 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__NeedQual_27,
#line 152 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_28,
#line 152 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_62,
#line 152 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_63,
#line 152 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_64,
#line 152 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_65);


static /* final */ const MR_Box hlds__make_hlds__add_pred_scalar_common_1[54][2];

static /* final */ const MR_Box hlds__make_hlds__add_pred_scalar_common_2[1][4];

static /* final */ const MR_Box hlds__make_hlds__add_pred_scalar_common_3[4][1];

static /* final */ const MR_Box hlds__make_hlds__add_pred_scalar_common_4[1][6];

static /* final */ const MR_Box hlds__make_hlds__add_pred_scalar_common_5[4][3];


#line 263 "add_pred.m"
/* sealed */ struct hlds__make_hlds__add_pred__vector_common_type_6_0_s {
#line 263 "add_pred.m"
  const MR_String hlds__make_hlds__add_pred__vector_common_type_6_0__vct_6_f_0;
#line 263 "add_pred.m"
  const MR_Integer hlds__make_hlds__add_pred__vector_common_type_6_0__vct_6_f_1;
#line 263 "add_pred.m"
};

static /* final */ const struct hlds__make_hlds__add_pred__vector_common_type_6_0_s hlds__make_hlds__add_pred_vector_common_6[4];



static /* final */ const MR_Box hlds__make_hlds__add_pred_scalar_common_1[54][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_marker_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "mode"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of local predicates.)"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "to automatically infer the determinism"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "option if you want the compiler"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[11])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--infer-det"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[13])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Use the"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[15])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "option."))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[17])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--no-infer-det"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[19])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "you specified the"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[21])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "(This is an error because"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[23])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "must also be exported."))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[26])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: a field access function for an exported field"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[28])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[30])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[31])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In declaration of"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_5[2])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_5[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_5[2])))
  },
  /* row 39 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pred_scalar_common_1[37])),
    ((MR_Box) (&hlds__make_hlds__add_pred_scalar_common_1[38]))
  },
  /* row 40 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pred_scalar_common_1[39])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 41 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pred_scalar_common_1[37])),
    ((MR_Box) (&hlds__make_hlds__add_pred_scalar_common_1[38]))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: no determinism declaration"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for type class method"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: no determinism declaration for local"))
  },
  /* row 48 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[25])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pred_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: no determinism declaration for exported"))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Internal error: the unqualified predicate name"))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should have been qualified by prog_io.m."))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pred_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 171)),
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
    ((MR_Box) (hlds__make_hlds__add_pred__add_new_pred_16_p_0_1)),
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
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[36]))),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};


static /* final */ const struct hlds__make_hlds__add_pred__vector_common_type_6_0_s hlds__make_hlds__add_pred_vector_common_6[4] = {
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 714 "hlds.make_hlds.add_pred.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pred__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_marker_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_marker_0
  }
};

#line 584 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__preds_do_add_implicit_12_p_0(
#line 584 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ModuleInfo_13,
#line 584 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ModuleName_14,
#line 584 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredName_15,
#line 584 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__Arity_16,
#line 584 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_17,
#line 584 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Status_18,
#line 584 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_19,
#line 584 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Origin_20,
#line 584 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ClausesInfo_21,
#line 584 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__PredId_22,
#line 584 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_PredicateTable_0_41,
#line 584 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_PredicateTable_42)
#line 584 "add_pred.m"
{
#line 590 "add_pred.m"
  {
#line 590 "add_pred.m"
    MR_bool hlds__make_hlds__add_pred__succeeded;
#line 590 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_55_55 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 590 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_58_58;
#line 590 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TVarSet0_24;
#line 590 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TypeVars_25;
#line 590 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TVarSet_26;
#line 590 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Types_27;
#line 590 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Proofs_28;
#line 590 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__ConstraintMap_29;
#line 590 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Markers0_32;
#line 590 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__VarNameRemap_33;
#line 590 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredInfo0_34;
#line 590 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Markers_35;
#line 590 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredInfo_36;
#line 590 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredIds_37;
#line 590 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_44_44;

#line 591 "add_pred.m"
    {
#line 591 "add_pred.m"
      mercury__varset__init_1_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_55_55, &hlds__make_hlds__add_pred__TVarSet0_24);
    }
#line 592 "add_pred.m"
    {
#line 592 "add_pred.m"
      parse_tree__prog_util__make_n_fresh_vars_5_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_55_55, (MR_String) "T", hlds__make_hlds__add_pred__Arity_16, &hlds__make_hlds__add_pred__TypeVars_25, hlds__make_hlds__add_pred__TVarSet0_24, &hlds__make_hlds__add_pred__TVarSet_26);
    }
#line 593 "add_pred.m"
    {
#line 593 "add_pred.m"
      hlds__make_hlds__add_pred__V_44_44 = mercury__map__init_0_f_0((MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[2], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
    }
#line 593 "add_pred.m"
    {
#line 593 "add_pred.m"
      parse_tree__prog_type__var_list_to_type_list_3_p_0(hlds__make_hlds__add_pred__V_44_44, hlds__make_hlds__add_pred__TypeVars_25, &hlds__make_hlds__add_pred__Types_27);
    }
#line 806 "hlds.make_hlds.add_pred.c"
    hlds__make_hlds__add_pred__TypeCtorInfo_58_58 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 594 "add_pred.m"
    {
#line 594 "add_pred.m"
      mercury__map__init_1_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_58_58, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, &hlds__make_hlds__add_pred__Proofs_28);
    }
#line 595 "add_pred.m"
    {
#line 595 "add_pred.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, hlds__make_hlds__add_pred__TypeCtorInfo_58_58, &hlds__make_hlds__add_pred__ConstraintMap_29);
    }
#line 602 "add_pred.m"
    {
#line 602 "add_pred.m"
      hlds__hlds_pred__init_markers_1_p_0(&hlds__make_hlds__add_pred__Markers0_32);
    }
#line 603 "add_pred.m"
    {
#line 603 "add_pred.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[1], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, &hlds__make_hlds__add_pred__VarNameRemap_33);
    }
#line 604 "add_pred.m"
    {
#line 604 "add_pred.m"
      hlds__hlds_pred__pred_info_init_18_p_0(hlds__make_hlds__add_pred__ModuleName_14, hlds__make_hlds__add_pred__PredName_15, hlds__make_hlds__add_pred__Arity_16, hlds__make_hlds__add_pred__PredOrFunc_17, hlds__make_hlds__add_pred__Context_19, hlds__make_hlds__add_pred__Origin_20, hlds__make_hlds__add_pred__Status_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_pred__Markers0_32, hlds__make_hlds__add_pred__Types_27, hlds__make_hlds__add_pred__TVarSet_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[34], hlds__make_hlds__add_pred__Proofs_28, hlds__make_hlds__add_pred__ConstraintMap_29, hlds__make_hlds__add_pred__ClausesInfo_21, hlds__make_hlds__add_pred__VarNameRemap_33, &hlds__make_hlds__add_pred__PredInfo0_34);
    }
#line 608 "add_pred.m"
    {
#line 608 "add_pred.m"
      hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 2, hlds__make_hlds__add_pred__Markers0_32, &hlds__make_hlds__add_pred__Markers_35);
    }
#line 609 "add_pred.m"
    {
#line 609 "add_pred.m"
      hlds__hlds_pred__pred_info_set_markers_3_p_0(hlds__make_hlds__add_pred__Markers_35, hlds__make_hlds__add_pred__PredInfo0_34, &hlds__make_hlds__add_pred__PredInfo_36);
    }
#line 610 "add_pred.m"
    {
#line 610 "add_pred.m"
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredicateTable_0_41, (MR_Integer) 0, hlds__make_hlds__add_pred__PredOrFunc_17, hlds__make_hlds__add_pred__PredName_15, hlds__make_hlds__add_pred__Arity_16, &hlds__make_hlds__add_pred__PredIds_37);
    }
#line 617 "add_pred.m"
    if ((hlds__make_hlds__add_pred__PredIds_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 613 "add_pred.m"
      {
#line 613 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__MQInfo_38;

#line 614 "add_pred.m"
        {
#line 614 "add_pred.m"
          hlds__hlds_module__module_info_get_partial_qualifier_info_2_p_0(hlds__make_hlds__add_pred__ModuleInfo_13, &hlds__make_hlds__add_pred__MQInfo_38);
        }
#line 615 "add_pred.m"
        {
#line 615 "add_pred.m"
          hlds__pred_table__predicate_table_insert_qual_6_p_0(hlds__make_hlds__add_pred__PredInfo_36, (MR_Integer) 1, hlds__make_hlds__add_pred__MQInfo_38, hlds__make_hlds__add_pred__PredId_22, hlds__make_hlds__add_pred__STATE_VARIABLE_PredicateTable_0_41, hlds__make_hlds__add_pred__STATE_VARIABLE_PredicateTable_42);
#line 615 "add_pred.m"
          return;
        }
#line 613 "add_pred.m"
      }
#line 617 "add_pred.m"
    else
#line 618 "add_pred.m"
      {
#line 619 "add_pred.m"
        {
#line 619 "add_pred.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_pred", (MR_String) "predicate \140hlds.make_hlds.add_pred.preds_do_add_implicit\'/12", (MR_String) "search succeeded");
#line 619 "add_pred.m"
          return;
        }
#line 618 "add_pred.m"
      }
#line 590 "add_pred.m"
  }
#line 584 "add_pred.m"
}

#line 539 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__unqualified_pred_error_5_p_0(
#line 539 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredName_6,
#line 539 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__Arity_7,
#line 539 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_8,
#line 539 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_13,
#line 539 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_14)
#line 539 "add_pred.m"
{
#line 542 "add_pred.m"
  {
#line 542 "add_pred.m"
    MR_bool hlds__make_hlds__add_pred__succeeded;
#line 542 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Pieces_10;
#line 542 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Msg_11;
#line 542 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Spec_12;
#line 542 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_17_17;
#line 542 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_18_18;
#line 542 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_19_19;
#line 542 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_24_24;
#line 542 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_25_25;
#line 542 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_29_29;

#line 544 "add_pred.m"
    {
#line 544 "add_pred.m"
      hlds__make_hlds__add_pred__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 544 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_19_19, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredName_6));
#line 544 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_19_19, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Arity_7));
#line 544 "add_pred.m"
    }
#line 544 "add_pred.m"
    {
#line 544 "add_pred.m"
      hlds__make_hlds__add_pred__V_18_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 544 "add_pred.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_18_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 544 "add_pred.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_18_18, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_19_19));
#line 544 "add_pred.m"
    }
#line 544 "add_pred.m"
    {
#line 544 "add_pred.m"
      hlds__make_hlds__add_pred__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 544 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_17_17, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_18_18));
#line 544 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[53])));
#line 544 "add_pred.m"
    }
#line 543 "add_pred.m"
    {
#line 543 "add_pred.m"
      hlds__make_hlds__add_pred__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 543 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[51])));
#line 543 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Pieces_10, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_17_17));
#line 543 "add_pred.m"
    }
#line 546 "add_pred.m"
    {
#line 546 "add_pred.m"
      hlds__make_hlds__add_pred__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 546 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_25_25, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Pieces_10));
#line 546 "add_pred.m"
    }
#line 546 "add_pred.m"
    {
#line 546 "add_pred.m"
      hlds__make_hlds__add_pred__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 546 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_24_24, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_25_25));
#line 546 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 546 "add_pred.m"
    }
#line 546 "add_pred.m"
    {
#line 546 "add_pred.m"
      hlds__make_hlds__add_pred__Msg_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 546 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_11, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Context_8));
#line 546 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_11, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_24_24));
#line 546 "add_pred.m"
    }
#line 547 "add_pred.m"
    {
#line 547 "add_pred.m"
      hlds__make_hlds__add_pred__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 547 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_29_29, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Msg_11));
#line 547 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 547 "add_pred.m"
    }
#line 547 "add_pred.m"
    {
#line 547 "add_pred.m"
      hlds__make_hlds__add_pred__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 547 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 547 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 547 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_12, 2) = ((MR_Box) (hlds__make_hlds__add_pred__V_29_29));
#line 547 "add_pred.m"
    }
#line 548 "add_pred.m"
    {
#line 548 "add_pred.m"
      MR_Word base;
#line 548 "add_pred.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 548 "add_pred.m"
      *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_14 = base;
#line 548 "add_pred.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Spec_12));
#line 548 "add_pred.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_13));
#line 548 "add_pred.m"
    }
#line 542 "add_pred.m"
  }
#line 539 "add_pred.m"
}

#line 529 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__unspecified_det_for_exported_6_p_0(
#line 529 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Name_7,
#line 529 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__Arity_8,
#line 529 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_9,
#line 529 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_10,
#line 529 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_15,
#line 529 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_16)
#line 529 "add_pred.m"
{
#line 532 "add_pred.m"
  {
#line 532 "add_pred.m"
    MR_bool hlds__make_hlds__add_pred__succeeded;
#line 532 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Pieces_12;
#line 532 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Msg_13;
#line 532 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Spec_14;
#line 532 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_19_19;
#line 532 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_20_20;
#line 532 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_21_21;
#line 532 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_22_22;
#line 532 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_23_23;
#line 532 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_28_28;
#line 532 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_29_29;
#line 532 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_33_33;

#line 534 "add_pred.m"
    {
#line 534 "add_pred.m"
      hlds__make_hlds__add_pred__V_20_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 534 "add_pred.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_20_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 534 "add_pred.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_20_20, 1) = ((MR_Box) (hlds__make_hlds__add_pred__PredOrFunc_9));
#line 534 "add_pred.m"
    }
#line 534 "add_pred.m"
    {
#line 534 "add_pred.m"
      hlds__make_hlds__add_pred__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 534 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_23_23, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Name_7));
#line 534 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_23_23, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Arity_8));
#line 534 "add_pred.m"
    }
#line 534 "add_pred.m"
    {
#line 534 "add_pred.m"
      hlds__make_hlds__add_pred__V_22_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 534 "add_pred.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_22_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 534 "add_pred.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_22_22, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_23_23));
#line 534 "add_pred.m"
    }
#line 534 "add_pred.m"
    {
#line 534 "add_pred.m"
      hlds__make_hlds__add_pred__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 534 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_21_21, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_22_22));
#line 534 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[46])));
#line 534 "add_pred.m"
    }
#line 534 "add_pred.m"
    {
#line 534 "add_pred.m"
      hlds__make_hlds__add_pred__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 534 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_19_19, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_20_20));
#line 534 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_19_19, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_21_21));
#line 534 "add_pred.m"
    }
#line 533 "add_pred.m"
    {
#line 533 "add_pred.m"
      hlds__make_hlds__add_pred__Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 533 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Pieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[50])));
#line 533 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Pieces_12, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_19_19));
#line 533 "add_pred.m"
    }
#line 535 "add_pred.m"
    {
#line 535 "add_pred.m"
      hlds__make_hlds__add_pred__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 535 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_29_29, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Pieces_12));
#line 535 "add_pred.m"
    }
#line 535 "add_pred.m"
    {
#line 535 "add_pred.m"
      hlds__make_hlds__add_pred__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 535 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_28_28, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_29_29));
#line 535 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 535 "add_pred.m"
    }
#line 535 "add_pred.m"
    {
#line 535 "add_pred.m"
      hlds__make_hlds__add_pred__Msg_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 535 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_13, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Context_10));
#line 535 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_13, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_28_28));
#line 535 "add_pred.m"
    }
#line 536 "add_pred.m"
    {
#line 536 "add_pred.m"
      hlds__make_hlds__add_pred__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 536 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_33_33, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Msg_13));
#line 536 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 536 "add_pred.m"
    }
#line 536 "add_pred.m"
    {
#line 536 "add_pred.m"
      hlds__make_hlds__add_pred__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 536 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 536 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 536 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_14, 2) = ((MR_Box) (hlds__make_hlds__add_pred__V_33_33));
#line 536 "add_pred.m"
    }
#line 537 "add_pred.m"
    {
#line 537 "add_pred.m"
      MR_Word base;
#line 537 "add_pred.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 537 "add_pred.m"
      *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_16 = base;
#line 537 "add_pred.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Spec_14));
#line 537 "add_pred.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_15));
#line 537 "add_pred.m"
    }
#line 532 "add_pred.m"
  }
#line 529 "add_pred.m"
}

#line 498 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__unspecified_det_for_local_6_p_0(
#line 498 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Name_7,
#line 498 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__Arity_8,
#line 498 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_9,
#line 498 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_10,
#line 498 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_18,
#line 498 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_19)
#line 498 "add_pred.m"
{
#line 501 "add_pred.m"
  {
#line 501 "add_pred.m"
    MR_bool hlds__make_hlds__add_pred__succeeded;
#line 501 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__MainPieces_12;
#line 501 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__InnerComponents_14;
#line 501 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Msg_15;
#line 501 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Spec_17;
#line 501 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_22_22;
#line 501 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_23_23;
#line 501 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_24_24;
#line 501 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_56_56;
#line 501 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_61_61;
#line 501 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_62_62;
#line 501 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_71_71;

#line 503 "add_pred.m"
    {
#line 503 "add_pred.m"
      hlds__make_hlds__add_pred__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 503 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_24_24, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredOrFunc_9));
#line 503 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_24_24, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Name_7));
#line 503 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_24_24, 2) = ((MR_Box) (hlds__make_hlds__add_pred__Arity_8));
#line 503 "add_pred.m"
    }
#line 503 "add_pred.m"
    {
#line 503 "add_pred.m"
      hlds__make_hlds__add_pred__V_23_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 503 "add_pred.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_23_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 503 "add_pred.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_23_23, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_24_24));
#line 503 "add_pred.m"
    }
#line 503 "add_pred.m"
    {
#line 503 "add_pred.m"
      hlds__make_hlds__add_pred__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 503 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_22_22, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_23_23));
#line 503 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[46])));
#line 503 "add_pred.m"
    }
#line 502 "add_pred.m"
    {
#line 502 "add_pred.m"
      hlds__make_hlds__add_pred__MainPieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 502 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__MainPieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[47])));
#line 502 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__MainPieces_12, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_22_22));
#line 502 "add_pred.m"
    }
#line 510 "add_pred.m"
    {
#line 510 "add_pred.m"
      hlds__make_hlds__add_pred__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 510 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_56_56, 0) = ((MR_Box) (hlds__make_hlds__add_pred__MainPieces_12));
#line 510 "add_pred.m"
    }
#line 510 "add_pred.m"
    {
#line 510 "add_pred.m"
      hlds__make_hlds__add_pred__InnerComponents_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 510 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__InnerComponents_14, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_56_56));
#line 510 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__InnerComponents_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[49])));
#line 510 "add_pred.m"
    }
#line 513 "add_pred.m"
    {
#line 513 "add_pred.m"
      hlds__make_hlds__add_pred__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 513 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_62_62, 0) = ((MR_Box) (((MR_Integer) 171 | (((MR_Integer) 0 << (MR_Integer) 10)))));
#line 513 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_62_62, 1) = ((MR_Box) (hlds__make_hlds__add_pred__InnerComponents_14));
#line 513 "add_pred.m"
    }
#line 513 "add_pred.m"
    {
#line 513 "add_pred.m"
      hlds__make_hlds__add_pred__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 513 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_61_61, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_62_62));
#line 513 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 513 "add_pred.m"
    }
#line 512 "add_pred.m"
    {
#line 512 "add_pred.m"
      hlds__make_hlds__add_pred__Msg_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 512 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_15, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Context_10));
#line 512 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_15, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_61_61));
#line 512 "add_pred.m"
    }
#line 515 "add_pred.m"
    {
#line 515 "add_pred.m"
      hlds__make_hlds__add_pred__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 515 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_71_71, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Msg_15));
#line 515 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 515 "add_pred.m"
    }
#line 515 "add_pred.m"
    {
#line 515 "add_pred.m"
      hlds__make_hlds__add_pred__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 515 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_2[0])));
#line 515 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 515 "add_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_17, 2) = ((MR_Box) (hlds__make_hlds__add_pred__V_71_71));
#line 515 "add_pred.m"
    }
#line 516 "add_pred.m"
    {
#line 516 "add_pred.m"
      MR_Word base;
#line 516 "add_pred.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 516 "add_pred.m"
      *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_19 = base;
#line 516 "add_pred.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Spec_17));
#line 516 "add_pred.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_18));
#line 516 "add_pred.m"
    }
#line 501 "add_pred.m"
  }
#line 498 "add_pred.m"
}

#line 451 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__module_do_add_mode_11_p_0(
#line 451 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__InstVarSet_12,
#line 451 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__Arity_13,
#line 451 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Modes_14,
#line 451 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__MaybeDet_15,
#line 451 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__IsClassMethod_16,
#line 451 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__MContext_17,
#line 451 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_31,
#line 451 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_32,
#line 451 "add_pred.m"
  MR_Integer * hlds__make_hlds__add_pred__ProcId_19,
#line 451 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_33,
#line 451 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_34)
#line 451 "add_pred.m"
{
#line 457 "add_pred.m"
  {
#line 457 "add_pred.m"
    MR_bool hlds__make_hlds__add_pred__succeeded;
#line 457 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__DetismDecl_21;
#line 457 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_38_38;

#line 484 "add_pred.m"
    if ((hlds__make_hlds__add_pred__MaybeDet_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 460 "add_pred.m"
      {
#line 460 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__ImportStatus_22;
#line 460 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__PredOrFunc_23;
#line 460 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__PredModule_24;
#line 460 "add_pred.m"
        MR_String hlds__make_hlds__add_pred__PredName_25;
#line 460 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__PredSymName_26;

#line 461 "add_pred.m"
        hlds__make_hlds__add_pred__DetismDecl_21 = (MR_Integer) 2;
#line 462 "add_pred.m"
        {
#line 462 "add_pred.m"
          hlds__hlds_pred__pred_info_get_import_status_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_31, &hlds__make_hlds__add_pred__ImportStatus_22);
        }
#line 463 "add_pred.m"
        {
#line 463 "add_pred.m"
          hlds__make_hlds__add_pred__PredOrFunc_23 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_31);
        }
#line 464 "add_pred.m"
        {
#line 464 "add_pred.m"
          hlds__make_hlds__add_pred__PredModule_24 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_31);
        }
#line 465 "add_pred.m"
        {
#line 465 "add_pred.m"
          hlds__make_hlds__add_pred__PredName_25 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_31);
        }
#line 466 "add_pred.m"
        {
#line 466 "add_pred.m"
          hlds__make_hlds__add_pred__PredSymName_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 466 "add_pred.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__PredSymName_26, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredModule_24));
#line 466 "add_pred.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__PredSymName_26, 1) = ((MR_Box) (hlds__make_hlds__add_pred__PredName_25));
#line 466 "add_pred.m"
        }
#line 471 "add_pred.m"
#line 471 "add_pred.m"
        switch (hlds__make_hlds__add_pred__IsClassMethod_16) {
#line 471 "add_pred.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 471 "add_pred.m"
          case (MR_Integer) 1:
#line 521 "add_pred.m"
            {
#line 521 "add_pred.m"
              MR_Word hlds__make_hlds__add_pred__Pieces_48;
#line 521 "add_pred.m"
              MR_Word hlds__make_hlds__add_pred__Msg_49;
#line 521 "add_pred.m"
              MR_Word hlds__make_hlds__add_pred__Spec_50;
#line 521 "add_pred.m"
              MR_Word hlds__make_hlds__add_pred__V_53_53;
#line 521 "add_pred.m"
              MR_Word hlds__make_hlds__add_pred__V_56_56;
#line 521 "add_pred.m"
              MR_Word hlds__make_hlds__add_pred__V_57_57;
#line 521 "add_pred.m"
              MR_Word hlds__make_hlds__add_pred__V_58_58;
#line 521 "add_pred.m"
              MR_Word hlds__make_hlds__add_pred__V_59_59;
#line 521 "add_pred.m"
              MR_Word hlds__make_hlds__add_pred__V_60_60;
#line 521 "add_pred.m"
              MR_Word hlds__make_hlds__add_pred__V_65_65;
#line 521 "add_pred.m"
              MR_Word hlds__make_hlds__add_pred__V_66_66;
#line 521 "add_pred.m"
              MR_Word hlds__make_hlds__add_pred__V_70_70;

#line 523 "add_pred.m"
              {
#line 523 "add_pred.m"
                hlds__make_hlds__add_pred__V_57_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 523 "add_pred.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_57_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 523 "add_pred.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_57_57, 1) = ((MR_Box) (hlds__make_hlds__add_pred__PredOrFunc_23));
#line 523 "add_pred.m"
              }
#line 524 "add_pred.m"
              {
#line 524 "add_pred.m"
                hlds__make_hlds__add_pred__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 524 "add_pred.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_60_60, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredSymName_26));
#line 524 "add_pred.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_60_60, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Arity_13));
#line 524 "add_pred.m"
              }
#line 524 "add_pred.m"
              {
#line 524 "add_pred.m"
                hlds__make_hlds__add_pred__V_59_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 524 "add_pred.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_59_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 524 "add_pred.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_59_59, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_60_60));
#line 524 "add_pred.m"
              }
#line 524 "add_pred.m"
              {
#line 524 "add_pred.m"
                hlds__make_hlds__add_pred__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 524 "add_pred.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_58_58, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_59_59));
#line 524 "add_pred.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[46])));
#line 524 "add_pred.m"
              }
#line 523 "add_pred.m"
              {
#line 523 "add_pred.m"
                hlds__make_hlds__add_pred__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 523 "add_pred.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_56_56, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_57_57));
#line 523 "add_pred.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_56_56, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_58_58));
#line 523 "add_pred.m"
              }
#line 523 "add_pred.m"
              {
#line 523 "add_pred.m"
                hlds__make_hlds__add_pred__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 523 "add_pred.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_53_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[44])));
#line 523 "add_pred.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_53_53, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_56_56));
#line 523 "add_pred.m"
              }
#line 522 "add_pred.m"
              {
#line 522 "add_pred.m"
                hlds__make_hlds__add_pred__Pieces_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 522 "add_pred.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Pieces_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[43])));
#line 522 "add_pred.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Pieces_48, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_53_53));
#line 522 "add_pred.m"
              }
#line 525 "add_pred.m"
              {
#line 525 "add_pred.m"
                hlds__make_hlds__add_pred__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 525 "add_pred.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_66_66, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Pieces_48));
#line 525 "add_pred.m"
              }
#line 525 "add_pred.m"
              {
#line 525 "add_pred.m"
                hlds__make_hlds__add_pred__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 525 "add_pred.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_65_65, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_66_66));
#line 525 "add_pred.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 525 "add_pred.m"
              }
#line 525 "add_pred.m"
              {
#line 525 "add_pred.m"
                hlds__make_hlds__add_pred__Msg_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 525 "add_pred.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_49, 0) = ((MR_Box) (hlds__make_hlds__add_pred__MContext_17));
#line 525 "add_pred.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_49, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_65_65));
#line 525 "add_pred.m"
              }
#line 526 "add_pred.m"
              {
#line 526 "add_pred.m"
                hlds__make_hlds__add_pred__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 526 "add_pred.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_70_70, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Msg_49));
#line 526 "add_pred.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 526 "add_pred.m"
              }
#line 526 "add_pred.m"
              {
#line 526 "add_pred.m"
                hlds__make_hlds__add_pred__Spec_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 526 "add_pred.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 526 "add_pred.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 526 "add_pred.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_50, 2) = ((MR_Box) (hlds__make_hlds__add_pred__V_70_70));
#line 526 "add_pred.m"
              }
#line 527 "add_pred.m"
              {
#line 527 "add_pred.m"
                MR_Word base;
#line 527 "add_pred.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 527 "add_pred.m"
                *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_34 = base;
#line 527 "add_pred.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Spec_50));
#line 527 "add_pred.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_33));
#line 527 "add_pred.m"
              }
#line 521 "add_pred.m"
            }
#line 471 "add_pred.m"
            break;
#line 471 "add_pred.m"
          case (MR_Integer) 0:
#line 472 "add_pred.m"
            {
#line 472 "add_pred.m"
              MR_Word hlds__make_hlds__add_pred__IsExported_27;

#line 473 "add_pred.m"
              {
#line 473 "add_pred.m"
                hlds__make_hlds__add_pred__IsExported_27 = parse_tree__status__status_is_exported_1_f_0(hlds__make_hlds__add_pred__ImportStatus_22);
              }
#line 478 "add_pred.m"
#line 478 "add_pred.m"
              switch (hlds__make_hlds__add_pred__IsExported_27) {
#line 478 "add_pred.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 478 "add_pred.m"
                case (MR_Integer) 0:
#line 480 "add_pred.m"
                  {
#line 480 "add_pred.m"
                    hlds__make_hlds__add_pred__unspecified_det_for_local_6_p_0(hlds__make_hlds__add_pred__PredSymName_26, hlds__make_hlds__add_pred__Arity_13, hlds__make_hlds__add_pred__PredOrFunc_23, hlds__make_hlds__add_pred__MContext_17, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_33, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_34);
                  }
#line 478 "add_pred.m"
                  break;
#line 478 "add_pred.m"
                case (MR_Integer) 1:
#line 476 "add_pred.m"
                  {
#line 476 "add_pred.m"
                    hlds__make_hlds__add_pred__unspecified_det_for_exported_6_p_0(hlds__make_hlds__add_pred__PredSymName_26, hlds__make_hlds__add_pred__Arity_13, hlds__make_hlds__add_pred__PredOrFunc_23, hlds__make_hlds__add_pred__MContext_17, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_33, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_34);
                  }
#line 478 "add_pred.m"
                  break;
#line 478 "add_pred.m"
              }
#line 472 "add_pred.m"
            }
#line 471 "add_pred.m"
            break;
#line 471 "add_pred.m"
        }
#line 460 "add_pred.m"
      }
#line 484 "add_pred.m"
    else
#line 485 "add_pred.m"
      {
#line 486 "add_pred.m"
        hlds__make_hlds__add_pred__DetismDecl_21 = (MR_Integer) 0;
#line 485 "add_pred.m"
        *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_34 = hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_33;
#line 485 "add_pred.m"
      }
#line 492 "add_pred.m"
    {
#line 492 "add_pred.m"
      hlds__make_hlds__add_pred__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 492 "add_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_38_38, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Modes_14));
#line 492 "add_pred.m"
    }
#line 492 "add_pred.m"
    {
#line 492 "add_pred.m"
      hlds__make_hlds__add_pred__do_add_new_proc_13_p_0(hlds__make_hlds__add_pred__InstVarSet_12, hlds__make_hlds__add_pred__Arity_13, hlds__make_hlds__add_pred__Modes_14, hlds__make_hlds__add_pred__V_38_38, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_pred__DetismDecl_21, hlds__make_hlds__add_pred__MaybeDet_15, hlds__make_hlds__add_pred__MContext_17, (MR_Integer) 1, (MR_Integer) 1, hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_31, hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_32, hlds__make_hlds__add_pred__ProcId_19);
#line 492 "add_pred.m"
      return;
    }
#line 457 "add_pred.m"
  }
#line 451 "add_pred.m"
}

#line 240 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__add_builtin_5_p_0(
#line 240 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredId_6,
#line 240 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Types_7,
#line 240 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__CompilationTarget_8,
#line 240 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_61,
#line 240 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_62)
#line 240 "add_pred.m"
{
#line 243 "add_pred.m"
  {
#line 243 "add_pred.m"
    MR_bool hlds__make_hlds__add_pred__succeeded;
#line 243 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_133_133;
#line 243 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TypeInfo_134_134;
#line 243 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_135_135;
#line 243 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_136_136;
#line 243 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TypeInfo_137_137;
#line 243 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Module_10;
#line 243 "add_pred.m"
    MR_String hlds__make_hlds__add_pred__Name_11;
#line 243 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Context_12;
#line 243 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__ClausesInfo0_13;
#line 243 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__VarSet0_14;
#line 243 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__HeadVars_15;
#line 243 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__HeadVarList_16;
#line 243 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__GoalInfo0_17;
#line 243 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__NonLocals_18;
#line 243 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__GoalInfo1_19;
#line 243 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__GoalExpr_20;
#line 243 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__GoalInfo_21;
#line 243 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__ExtraVars_22;
#line 243 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__ExtraTypes_23;
#line 243 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__VarSet_24;
#line 243 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Stub_25;
#line 243 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__VarTypes_52;
#line 243 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TVarNameMap_53;
#line 243 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__RttiVarMaps_54;
#line 243 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__HasForeignClauses_55;
#line 243 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Markers_60;
#line 243 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_63_63;
#line 243 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_118_118;
#line 243 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_119_119;
#line 243 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_121_121;
#line 243 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_122_122;
#line 243 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_123_123;
#line 258 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_138_138;
#line 263 "add_pred.m"
    MR_Integer hlds__make_hlds__add_pred__lo_0;
#line 263 "add_pred.m"
    MR_Integer hlds__make_hlds__add_pred__hi_1;
#line 263 "add_pred.m"
    MR_Integer hlds__make_hlds__add_pred__mid_2;
#line 263 "add_pred.m"
    MR_Integer hlds__make_hlds__add_pred__result_3;

#line 244 "add_pred.m"
    {
#line 244 "add_pred.m"
      hlds__make_hlds__add_pred__Module_10 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_61);
    }
#line 245 "add_pred.m"
    {
#line 245 "add_pred.m"
      hlds__make_hlds__add_pred__Name_11 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_61);
    }
#line 246 "add_pred.m"
    {
#line 246 "add_pred.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_61, &hlds__make_hlds__add_pred__Context_12);
    }
#line 247 "add_pred.m"
    {
#line 247 "add_pred.m"
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_61, &hlds__make_hlds__add_pred__ClausesInfo0_13);
    }
#line 248 "add_pred.m"
    {
#line 248 "add_pred.m"
      hlds__hlds_clauses__clauses_info_get_varset_2_p_0(hlds__make_hlds__add_pred__ClausesInfo0_13, &hlds__make_hlds__add_pred__VarSet0_14);
    }
#line 249 "add_pred.m"
    {
#line 249 "add_pred.m"
      hlds__hlds_clauses__clauses_info_get_headvars_2_p_0(hlds__make_hlds__add_pred__ClausesInfo0_13, &hlds__make_hlds__add_pred__HeadVars_15);
    }
#line 252 "add_pred.m"
    {
#line 252 "add_pred.m"
      hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(hlds__make_hlds__add_pred__ClausesInfo0_13, &hlds__make_hlds__add_pred__HeadVarList_16);
    }
#line 254 "add_pred.m"
    {
#line 254 "add_pred.m"
      hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__add_pred__Context_12, &hlds__make_hlds__add_pred__GoalInfo0_17);
    }
#line 1846 "hlds.make_hlds.add_pred.c"
    hlds__make_hlds__add_pred__TypeCtorInfo_133_133 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1848 "hlds.make_hlds.add_pred.c"
    hlds__make_hlds__add_pred__TypeInfo_134_134 = (MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[1];
#line 255 "add_pred.m"
    {
#line 255 "add_pred.m"
      hlds__make_hlds__add_pred__V_63_63 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0(hlds__make_hlds__add_pred__TypeInfo_134_134, hlds__make_hlds__add_pred__HeadVars_15);
    }
#line 255 "add_pred.m"
    {
#line 255 "add_pred.m"
      hlds__make_hlds__add_pred__NonLocals_18 = parse_tree__set_of_var__list_to_set_1_f_0(hlds__make_hlds__add_pred__TypeCtorInfo_133_133, hlds__make_hlds__add_pred__V_63_63);
    }
#line 256 "add_pred.m"
    {
#line 256 "add_pred.m"
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(hlds__make_hlds__add_pred__NonLocals_18, hlds__make_hlds__add_pred__GoalInfo0_17, &hlds__make_hlds__add_pred__GoalInfo1_19);
    }
#line 258 "add_pred.m"
    {
#line 258 "add_pred.m"
      hlds__make_hlds__add_pred__V_138_138 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
#line 258 "add_pred.m"
    {
#line 258 "add_pred.m"
      hlds__make_hlds__add_pred__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__make_hlds__add_pred__Module_10, hlds__make_hlds__add_pred__V_138_138);
    }
#line 258 "add_pred.m"
    if (hlds__make_hlds__add_pred__succeeded)
#line 258 "add_pred.m"
      {
#line 263 "add_pred.m"
        /* binary string jump switch */
#line 263 "add_pred.m"
        hlds__make_hlds__add_pred__lo_0 = (MR_Integer) 0;
#line 263 "add_pred.m"
        hlds__make_hlds__add_pred__hi_1 = (MR_Integer) 3;
#line 263 "add_pred.m"
        do
#line 263 "add_pred.m"
          {
#line 263 "add_pred.m"
            hlds__make_hlds__add_pred__mid_2 = (((hlds__make_hlds__add_pred__lo_0 + hlds__make_hlds__add_pred__hi_1)) / (MR_Integer) 2);
#line 263 "add_pred.m"
            hlds__make_hlds__add_pred__result_3 = MR_strcmp(hlds__make_hlds__add_pred__Name_11, ((&hlds__make_hlds__add_pred_vector_common_6[0 + hlds__make_hlds__add_pred__mid_2]))->hlds__make_hlds__add_pred__vector_common_type_6_0__vct_6_f_0);
#line 263 "add_pred.m"
            if ((hlds__make_hlds__add_pred__result_3 == (MR_Integer) 0))
#line 263 "add_pred.m"
              {
#line 263 "add_pred.m"
#line 263 "add_pred.m"
                switch (((&hlds__make_hlds__add_pred_vector_common_6[0 + hlds__make_hlds__add_pred__mid_2]))->hlds__make_hlds__add_pred__vector_common_type_6_0__vct_6_f_1) {
#line 263 "add_pred.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 263 "add_pred.m"
                  case (MR_Integer) 0:
#line 260 "add_pred.m"
                    {
#line 260 "add_pred.m"
                      /* case "builtin_compound_eq" */
#line 260 "add_pred.m"
                      hlds__make_hlds__add_pred__succeeded = MR_TRUE;
#line 260 "add_pred.m"
                    }
#line 263 "add_pred.m"
                    break;
#line 263 "add_pred.m"
                  case (MR_Integer) 1:
#line 261 "add_pred.m"
                    {
#line 261 "add_pred.m"
                      /* case "builtin_compound_lt" */
#line 261 "add_pred.m"
                      hlds__make_hlds__add_pred__succeeded = MR_TRUE;
#line 261 "add_pred.m"
                    }
#line 263 "add_pred.m"
                    break;
#line 263 "add_pred.m"
                  case (MR_Integer) 2:
#line 269 "add_pred.m"
                    {
#line 269 "add_pred.m"
                      /* case "store_at_ref", "store_at_ref_impure" */
#line 269 "add_pred.m"
#line 269 "add_pred.m"
                      switch (hlds__make_hlds__add_pred__CompilationTarget_8) {
#line 269 "add_pred.m"
                        default:
#line 269 "add_pred.m"
                          hlds__make_hlds__add_pred__succeeded = MR_FALSE;
#line 269 "add_pred.m"
                          break;
#line 269 "add_pred.m"
                        case (MR_Integer) 2:
#line 269 "add_pred.m"
                          hlds__make_hlds__add_pred__succeeded = MR_TRUE;
#line 269 "add_pred.m"
                          break;
#line 269 "add_pred.m"
                        case (MR_Integer) 4:
#line 270 "add_pred.m"
                          hlds__make_hlds__add_pred__succeeded = MR_TRUE;
#line 269 "add_pred.m"
                          break;
#line 269 "add_pred.m"
                        case (MR_Integer) 3:
#line 268 "add_pred.m"
                          hlds__make_hlds__add_pred__succeeded = MR_TRUE;
#line 269 "add_pred.m"
                          break;
#line 269 "add_pred.m"
                      }
#line 269 "add_pred.m"
                    }
#line 263 "add_pred.m"
                    break;
#line 263 "add_pred.m"
                }
#line 263 "add_pred.m"
                /* jump out of search loop */
#line 263 "add_pred.m"
                goto label_0;
#line 263 "add_pred.m"
              }
#line 263 "add_pred.m"
            else
#line 263 "add_pred.m"
            if ((hlds__make_hlds__add_pred__result_3 < (MR_Integer) 0))
#line 263 "add_pred.m"
              hlds__make_hlds__add_pred__hi_1 = (hlds__make_hlds__add_pred__mid_2 - (MR_Integer) 1);
#line 263 "add_pred.m"
            else
#line 263 "add_pred.m"
              hlds__make_hlds__add_pred__lo_0 = (hlds__make_hlds__add_pred__mid_2 + (MR_Integer) 1);
#line 263 "add_pred.m"
          }
#line 263 "add_pred.m"
        while ((hlds__make_hlds__add_pred__lo_0 <= hlds__make_hlds__add_pred__hi_1));
#line 263 "add_pred.m"
        hlds__make_hlds__add_pred__succeeded = MR_FALSE;
#line 263 "add_pred.m"
      label_0:;
#line 258 "add_pred.m"
      }
#line 280 "add_pred.m"
    if (hlds__make_hlds__add_pred__succeeded)
#line 274 "add_pred.m"
      {
#line 274 "add_pred.m"
        hlds__make_hlds__add_pred__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_5[1]);
#line 275 "add_pred.m"
        hlds__make_hlds__add_pred__GoalInfo_21 = hlds__make_hlds__add_pred__GoalInfo1_19;
#line 276 "add_pred.m"
        hlds__make_hlds__add_pred__ExtraVars_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 277 "add_pred.m"
        hlds__make_hlds__add_pred__ExtraTypes_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 278 "add_pred.m"
        hlds__make_hlds__add_pred__VarSet_24 = hlds__make_hlds__add_pred__VarSet0_14;
#line 279 "add_pred.m"
        hlds__make_hlds__add_pred__Stub_25 = (MR_Integer) 1;
#line 274 "add_pred.m"
      }
#line 280 "add_pred.m"
    else
#line 323 "add_pred.m"
      {
#line 282 "add_pred.m"
        {
#line 282 "add_pred.m"
          MR_Word hlds__make_hlds__add_pred__V_139_139;

#line 282 "add_pred.m"
          {
#line 282 "add_pred.m"
            hlds__make_hlds__add_pred__V_139_139 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          }
#line 282 "add_pred.m"
          {
#line 282 "add_pred.m"
            hlds__make_hlds__add_pred__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__make_hlds__add_pred__Module_10, hlds__make_hlds__add_pred__V_139_139);
          }
#line 282 "add_pred.m"
          if (hlds__make_hlds__add_pred__succeeded)
#line 283 "add_pred.m"
            hlds__make_hlds__add_pred__succeeded = (strcmp(hlds__make_hlds__add_pred__Name_11, (MR_String) "trace_get_io_state") == 0);
#line 282 "add_pred.m"
        }
#line 284 "add_pred.m"
        if (!(hlds__make_hlds__add_pred__succeeded))
#line 285 "add_pred.m"
          {
#line 285 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_140_140;

#line 285 "add_pred.m"
            {
#line 285 "add_pred.m"
              hlds__make_hlds__add_pred__V_140_140 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
            }
#line 285 "add_pred.m"
            {
#line 285 "add_pred.m"
              hlds__make_hlds__add_pred__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__make_hlds__add_pred__Module_10, hlds__make_hlds__add_pred__V_140_140);
            }
#line 285 "add_pred.m"
            if (hlds__make_hlds__add_pred__succeeded)
#line 286 "add_pred.m"
              hlds__make_hlds__add_pred__succeeded = (strcmp(hlds__make_hlds__add_pred__Name_11, (MR_String) "unsafe_get_io_state") == 0);
#line 285 "add_pred.m"
          }
#line 323 "add_pred.m"
        if (hlds__make_hlds__add_pred__succeeded)
#line 289 "add_pred.m"
          {
#line 289 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__LHS_30;
#line 289 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__Unification_33;
#line 289 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__AssignExpr_36;
#line 289 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__GoalInfoWithZero_37;
#line 289 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__AssignGoal_38;
#line 289 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__CastExpr_39;
#line 289 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__GoalInfoWithZeroHeadVars_40;
#line 289 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__CastGoal_41;
#line 289 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__ConjExpr_42;
#line 289 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__ConjGoal_43;
#line 289 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_67_67;
#line 289 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_88_88;
#line 289 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_91_91;
#line 289 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_94_94;
#line 289 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_95_95;
#line 289 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_96_96;
#line 289 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_97_97;
#line 289 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_101_101;
#line 289 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_102_102;
#line 289 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_104_104;
#line 289 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_105_105;

#line 289 "add_pred.m"
            {
#line 289 "add_pred.m"
              mercury__varset__new_var_3_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_133_133, &hlds__make_hlds__add_pred__LHS_30, hlds__make_hlds__add_pred__VarSet0_14, &hlds__make_hlds__add_pred__VarSet_24);
            }
#line 290 "add_pred.m"
            {
#line 290 "add_pred.m"
              hlds__make_hlds__add_pred__ExtraVars_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 290 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__ExtraVars_22, 0) = ((MR_Box) (hlds__make_hlds__add_pred__LHS_30));
#line 290 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__ExtraVars_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 290 "add_pred.m"
            }
#line 291 "add_pred.m"
            {
#line 291 "add_pred.m"
              hlds__make_hlds__add_pred__V_67_67 = parse_tree__builtin_lib_types__int_type_0_f_0();
            }
#line 291 "add_pred.m"
            {
#line 291 "add_pred.m"
              hlds__make_hlds__add_pred__ExtraTypes_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 291 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__ExtraTypes_23, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_67_67));
#line 291 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__ExtraTypes_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 291 "add_pred.m"
            }
#line 299 "add_pred.m"
            {
#line 299 "add_pred.m"
              hlds__make_hlds__add_pred__Unification_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 299 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Unification_33, 0) = ((MR_Box) (hlds__make_hlds__add_pred__LHS_30));
#line 299 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Unification_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[36])));
#line 299 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Unification_33, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 299 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Unification_33, 3) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[40])));
#line 299 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Unification_33, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 299 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Unification_33, 5) = ((MR_Box) ((MR_Integer) 1));
#line 299 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Unification_33, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 299 "add_pred.m"
            }
#line 303 "add_pred.m"
            {
#line 303 "add_pred.m"
              hlds__make_hlds__add_pred__AssignExpr_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 303 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__AssignExpr_36, 0) = ((MR_Box) (hlds__make_hlds__add_pred__LHS_30));
#line 303 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__AssignExpr_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_5[3])));
#line 303 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__AssignExpr_36, 2) = ((MR_Box) (&hlds__make_hlds__add_pred_scalar_common_1[41]));
#line 303 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__AssignExpr_36, 3) = ((MR_Box) (hlds__make_hlds__add_pred__Unification_33));
#line 303 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__AssignExpr_36, 4) = ((MR_Box) (&hlds__make_hlds__add_pred_scalar_common_1[42]));
#line 303 "add_pred.m"
            }
#line 304 "add_pred.m"
            {
#line 304 "add_pred.m"
              hlds__make_hlds__add_pred__V_88_88 = parse_tree__set_of_var__make_singleton_1_f_0(hlds__make_hlds__add_pred__TypeCtorInfo_133_133, hlds__make_hlds__add_pred__LHS_30);
            }
#line 304 "add_pred.m"
            {
#line 304 "add_pred.m"
              hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(hlds__make_hlds__add_pred__V_88_88, hlds__make_hlds__add_pred__GoalInfo0_17, &hlds__make_hlds__add_pred__GoalInfoWithZero_37);
            }
#line 306 "add_pred.m"
            {
#line 306 "add_pred.m"
              hlds__make_hlds__add_pred__AssignGoal_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 306 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__AssignGoal_38, 0) = ((MR_Box) (hlds__make_hlds__add_pred__AssignExpr_36));
#line 306 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__AssignGoal_38, 1) = ((MR_Box) (hlds__make_hlds__add_pred__GoalInfoWithZero_37));
#line 306 "add_pred.m"
            }
#line 309 "add_pred.m"
            {
#line 309 "add_pred.m"
              hlds__make_hlds__add_pred__V_91_91 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pred__TypeInfo_134_134, hlds__make_hlds__add_pred__ExtraVars_22, hlds__make_hlds__add_pred__HeadVarList_16);
            }
#line 309 "add_pred.m"
            {
#line 309 "add_pred.m"
              hlds__make_hlds__add_pred__V_95_95 = parse_tree__prog_mode__in_mode_0_f_0();
            }
#line 309 "add_pred.m"
            {
#line 309 "add_pred.m"
              hlds__make_hlds__add_pred__V_97_97 = parse_tree__prog_mode__uo_mode_0_f_0();
            }
#line 309 "add_pred.m"
            {
#line 309 "add_pred.m"
              hlds__make_hlds__add_pred__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 309 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_96_96, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_97_97));
#line 309 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 309 "add_pred.m"
            }
#line 309 "add_pred.m"
            {
#line 309 "add_pred.m"
              hlds__make_hlds__add_pred__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 309 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_94_94, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_95_95));
#line 309 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_94_94, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_96_96));
#line 309 "add_pred.m"
            }
#line 308 "add_pred.m"
            {
#line 308 "add_pred.m"
              hlds__make_hlds__add_pred__CastExpr_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 308 "add_pred.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__CastExpr_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 308 "add_pred.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__CastExpr_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_3[1])));
#line 308 "add_pred.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__CastExpr_39, 2) = ((MR_Box) (hlds__make_hlds__add_pred__V_91_91));
#line 308 "add_pred.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__CastExpr_39, 3) = ((MR_Box) (hlds__make_hlds__add_pred__V_94_94));
#line 308 "add_pred.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__CastExpr_39, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 308 "add_pred.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__CastExpr_39, 5) = ((MR_Box) ((MR_Integer) 0));
#line 308 "add_pred.m"
            }
#line 312 "add_pred.m"
            {
#line 312 "add_pred.m"
              hlds__make_hlds__add_pred__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 312 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_102_102, 0) = ((MR_Box) (hlds__make_hlds__add_pred__LHS_30));
#line 312 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_102_102, 1) = ((MR_Box) (hlds__make_hlds__add_pred__HeadVarList_16));
#line 312 "add_pred.m"
            }
#line 312 "add_pred.m"
            {
#line 312 "add_pred.m"
              hlds__make_hlds__add_pred__V_101_101 = parse_tree__set_of_var__list_to_set_1_f_0(hlds__make_hlds__add_pred__TypeCtorInfo_133_133, hlds__make_hlds__add_pred__V_102_102);
            }
#line 311 "add_pred.m"
            {
#line 311 "add_pred.m"
              hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(hlds__make_hlds__add_pred__V_101_101, hlds__make_hlds__add_pred__GoalInfo0_17, &hlds__make_hlds__add_pred__GoalInfoWithZeroHeadVars_40);
            }
#line 314 "add_pred.m"
            {
#line 314 "add_pred.m"
              hlds__make_hlds__add_pred__CastGoal_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 314 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__CastGoal_41, 0) = ((MR_Box) (hlds__make_hlds__add_pred__CastExpr_39));
#line 314 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__CastGoal_41, 1) = ((MR_Box) (hlds__make_hlds__add_pred__GoalInfoWithZeroHeadVars_40));
#line 314 "add_pred.m"
            }
#line 316 "add_pred.m"
            {
#line 316 "add_pred.m"
              hlds__make_hlds__add_pred__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 316 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_105_105, 0) = ((MR_Box) (hlds__make_hlds__add_pred__CastGoal_41));
#line 316 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_105_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 316 "add_pred.m"
            }
#line 316 "add_pred.m"
            {
#line 316 "add_pred.m"
              hlds__make_hlds__add_pred__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 316 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_104_104, 0) = ((MR_Box) (hlds__make_hlds__add_pred__AssignGoal_38));
#line 316 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_104_104, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_105_105));
#line 316 "add_pred.m"
            }
#line 316 "add_pred.m"
            {
#line 316 "add_pred.m"
              hlds__make_hlds__add_pred__ConjExpr_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 316 "add_pred.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__ConjExpr_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 316 "add_pred.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__ConjExpr_42, 1) = ((MR_Box) ((MR_Integer) 0));
#line 316 "add_pred.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__ConjExpr_42, 2) = ((MR_Box) (hlds__make_hlds__add_pred__V_104_104));
#line 316 "add_pred.m"
            }
#line 317 "add_pred.m"
            {
#line 317 "add_pred.m"
              hlds__make_hlds__add_pred__ConjGoal_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 317 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ConjGoal_43, 0) = ((MR_Box) (hlds__make_hlds__add_pred__ConjExpr_42));
#line 317 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ConjGoal_43, 1) = ((MR_Box) (hlds__make_hlds__add_pred__GoalInfoWithZeroHeadVars_40));
#line 317 "add_pred.m"
            }
#line 320 "add_pred.m"
            {
#line 320 "add_pred.m"
              hlds__make_hlds__add_pred__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 320 "add_pred.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__GoalExpr_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 320 "add_pred.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__GoalExpr_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pred_scalar_common_3[2])));
#line 320 "add_pred.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__GoalExpr_20, 2) = ((MR_Box) (hlds__make_hlds__add_pred__ConjGoal_43));
#line 320 "add_pred.m"
            }
#line 321 "add_pred.m"
            hlds__make_hlds__add_pred__GoalInfo_21 = hlds__make_hlds__add_pred__GoalInfo1_19;
#line 322 "add_pred.m"
            hlds__make_hlds__add_pred__Stub_25 = (MR_Integer) 0;
#line 289 "add_pred.m"
          }
#line 323 "add_pred.m"
        else
#line 341 "add_pred.m"
          {
#line 325 "add_pred.m"
            {
#line 325 "add_pred.m"
              MR_Word hlds__make_hlds__add_pred__V_141_141;

#line 325 "add_pred.m"
              {
#line 325 "add_pred.m"
                hlds__make_hlds__add_pred__V_141_141 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
              }
#line 325 "add_pred.m"
              {
#line 325 "add_pred.m"
                hlds__make_hlds__add_pred__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__make_hlds__add_pred__Module_10, hlds__make_hlds__add_pred__V_141_141);
              }
#line 325 "add_pred.m"
              if (hlds__make_hlds__add_pred__succeeded)
#line 326 "add_pred.m"
                hlds__make_hlds__add_pred__succeeded = (strcmp(hlds__make_hlds__add_pred__Name_11, (MR_String) "trace_set_io_state") == 0);
#line 325 "add_pred.m"
            }
#line 327 "add_pred.m"
            if (!(hlds__make_hlds__add_pred__succeeded))
#line 328 "add_pred.m"
              {
#line 328 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__V_142_142;

#line 328 "add_pred.m"
                {
#line 328 "add_pred.m"
                  hlds__make_hlds__add_pred__V_142_142 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
                }
#line 328 "add_pred.m"
                {
#line 328 "add_pred.m"
                  hlds__make_hlds__add_pred__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__make_hlds__add_pred__Module_10, hlds__make_hlds__add_pred__V_142_142);
                }
#line 328 "add_pred.m"
                if (hlds__make_hlds__add_pred__succeeded)
#line 329 "add_pred.m"
                  hlds__make_hlds__add_pred__succeeded = (strcmp(hlds__make_hlds__add_pred__Name_11, (MR_String) "unsafe_set_io_state") == 0);
#line 328 "add_pred.m"
              }
#line 341 "add_pred.m"
            if (hlds__make_hlds__add_pred__succeeded)
#line 332 "add_pred.m"
              {
#line 332 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__ConjGoal_128;

#line 336 "add_pred.m"
                hlds__make_hlds__add_pred__GoalInfo_21 = hlds__make_hlds__add_pred__GoalInfo1_19;
#line 333 "add_pred.m"
                {
#line 333 "add_pred.m"
                  hlds__make_hlds__add_pred__ConjGoal_128 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 333 "add_pred.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ConjGoal_128, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_5[1])));
#line 333 "add_pred.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ConjGoal_128, 1) = ((MR_Box) (hlds__make_hlds__add_pred__GoalInfo_21));
#line 333 "add_pred.m"
                }
#line 335 "add_pred.m"
                {
#line 335 "add_pred.m"
                  hlds__make_hlds__add_pred__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 335 "add_pred.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__GoalExpr_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 335 "add_pred.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__GoalExpr_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pred_scalar_common_3[3])));
#line 335 "add_pred.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__GoalExpr_20, 2) = ((MR_Box) (hlds__make_hlds__add_pred__ConjGoal_128));
#line 335 "add_pred.m"
                }
#line 337 "add_pred.m"
                hlds__make_hlds__add_pred__ExtraVars_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 338 "add_pred.m"
                hlds__make_hlds__add_pred__ExtraTypes_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 339 "add_pred.m"
                hlds__make_hlds__add_pred__VarSet_24 = hlds__make_hlds__add_pred__VarSet0_14;
#line 340 "add_pred.m"
                hlds__make_hlds__add_pred__Stub_25 = (MR_Integer) 0;
#line 332 "add_pred.m"
              }
#line 341 "add_pred.m"
            else
#line 343 "add_pred.m"
              {
#line 343 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__SymName_45;
#line 343 "add_pred.m"
                MR_Integer hlds__make_hlds__add_pred__ModeId_46;
#line 343 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__Purity_48;

#line 343 "add_pred.m"
                {
#line 343 "add_pred.m"
                  hlds__make_hlds__add_pred__SymName_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 343 "add_pred.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__SymName_45, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Module_10));
#line 343 "add_pred.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__SymName_45, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Name_11));
#line 343 "add_pred.m"
                }
#line 345 "add_pred.m"
                {
#line 345 "add_pred.m"
                  hlds__make_hlds__add_pred__ModeId_46 = hlds__hlds_pred__invalid_proc_id_0_f_0();
                }
#line 348 "add_pred.m"
                {
#line 348 "add_pred.m"
                  hlds__make_hlds__add_pred__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 348 "add_pred.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pred__GoalExpr_20, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredId_6));
#line 348 "add_pred.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pred__GoalExpr_20, 1) = ((MR_Box) (hlds__make_hlds__add_pred__ModeId_46));
#line 348 "add_pred.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pred__GoalExpr_20, 2) = ((MR_Box) (hlds__make_hlds__add_pred__HeadVarList_16));
#line 348 "add_pred.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pred__GoalExpr_20, 3) = ((MR_Box) ((MR_Integer) 0));
#line 348 "add_pred.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pred__GoalExpr_20, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 348 "add_pred.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pred__GoalExpr_20, 5) = ((MR_Box) (hlds__make_hlds__add_pred__SymName_45));
#line 348 "add_pred.m"
                }
#line 350 "add_pred.m"
                {
#line 350 "add_pred.m"
                  hlds__hlds_pred__pred_info_get_purity_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_61, &hlds__make_hlds__add_pred__Purity_48);
                }
#line 351 "add_pred.m"
                {
#line 351 "add_pred.m"
                  hlds__hlds_goal__goal_info_set_purity_3_p_0(hlds__make_hlds__add_pred__Purity_48, hlds__make_hlds__add_pred__GoalInfo1_19, &hlds__make_hlds__add_pred__GoalInfo_21);
                }
#line 352 "add_pred.m"
                hlds__make_hlds__add_pred__ExtraVars_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 353 "add_pred.m"
                hlds__make_hlds__add_pred__ExtraTypes_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 354 "add_pred.m"
                hlds__make_hlds__add_pred__VarSet_24 = hlds__make_hlds__add_pred__VarSet0_14;
#line 355 "add_pred.m"
                hlds__make_hlds__add_pred__Stub_25 = (MR_Integer) 0;
#line 343 "add_pred.m"
              }
#line 341 "add_pred.m"
          }
#line 323 "add_pred.m"
      }
#line 371 "add_pred.m"
    {
#line 371 "add_pred.m"
      hlds__make_hlds__add_pred__V_118_118 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pred__TypeInfo_134_134, hlds__make_hlds__add_pred__ExtraVars_22, hlds__make_hlds__add_pred__HeadVarList_16);
    }
#line 2497 "hlds.make_hlds.add_pred.c"
    hlds__make_hlds__add_pred__TypeCtorInfo_135_135 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 372 "add_pred.m"
    {
#line 372 "add_pred.m"
      hlds__make_hlds__add_pred__V_119_119 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pred__TypeCtorInfo_135_135, hlds__make_hlds__add_pred__ExtraTypes_23, hlds__make_hlds__add_pred__Types_7);
    }
#line 371 "add_pred.m"
    {
#line 371 "add_pred.m"
      parse_tree__prog_data__vartypes_from_corresponding_lists_3_p_0(hlds__make_hlds__add_pred__V_118_118, hlds__make_hlds__add_pred__V_119_119, &hlds__make_hlds__add_pred__VarTypes_52);
    }
#line 2509 "hlds.make_hlds.add_pred.c"
    hlds__make_hlds__add_pred__TypeCtorInfo_136_136 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2511 "hlds.make_hlds.add_pred.c"
    hlds__make_hlds__add_pred__TypeInfo_137_137 = (MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[2];
#line 373 "add_pred.m"
    {
#line 373 "add_pred.m"
      mercury__map__init_1_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_136_136, hlds__make_hlds__add_pred__TypeInfo_137_137, &hlds__make_hlds__add_pred__TVarNameMap_53);
    }
#line 374 "add_pred.m"
    {
#line 374 "add_pred.m"
      hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&hlds__make_hlds__add_pred__RttiVarMaps_54);
    }
#line 375 "add_pred.m"
    hlds__make_hlds__add_pred__HasForeignClauses_55 = (MR_Integer) 0;
#line 377 "add_pred.m"
    {
#line 377 "add_pred.m"
      hlds__make_hlds__add_pred__V_121_121 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
    }
#line 387 "add_pred.m"
    hlds__make_hlds__add_pred__V_123_123 = (MR_Integer) 7;
#line 2532 "hlds.make_hlds.add_pred.c"
#line 2533 "hlds.make_hlds.add_pred.c"
    switch (hlds__make_hlds__add_pred__Stub_25) {
#line 2535 "hlds.make_hlds.add_pred.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2537 "hlds.make_hlds.add_pred.c"
      case (MR_Integer) 0:
#line 2539 "hlds.make_hlds.add_pred.c"
        {
#line 2541 "hlds.make_hlds.add_pred.c"
          MR_Word hlds__make_hlds__add_pred__Goal_49;
#line 2543 "hlds.make_hlds.add_pred.c"
          MR_Word hlds__make_hlds__add_pred__Clause_50;
#line 2545 "hlds.make_hlds.add_pred.c"
          MR_Word hlds__make_hlds__add_pred__ClausesRep_51;
#line 2547 "hlds.make_hlds.add_pred.c"
          MR_Word hlds__make_hlds__add_pred__ClausesInfo_56;
#line 2549 "hlds.make_hlds.add_pred.c"
          MR_Word hlds__make_hlds__add_pred__Markers0_57;
#line 2551 "hlds.make_hlds.add_pred.c"
          MR_Word hlds__make_hlds__add_pred__V_116_116;

#line 361 "add_pred.m"
          {
#line 361 "add_pred.m"
            hlds__make_hlds__add_pred__Goal_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 361 "add_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Goal_49, 0) = ((MR_Box) (hlds__make_hlds__add_pred__GoalExpr_20));
#line 361 "add_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Goal_49, 1) = ((MR_Box) (hlds__make_hlds__add_pred__GoalInfo_21));
#line 361 "add_pred.m"
          }
#line 362 "add_pred.m"
          {
#line 362 "add_pred.m"
            hlds__make_hlds__add_pred__Clause_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 362 "add_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Clause_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 362 "add_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Clause_50, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Goal_49));
#line 362 "add_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Clause_50, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 362 "add_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Clause_50, 3) = ((MR_Box) (hlds__make_hlds__add_pred__Context_12));
#line 362 "add_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Clause_50, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 362 "add_pred.m"
          }
#line 363 "add_pred.m"
          {
#line 363 "add_pred.m"
            hlds__make_hlds__add_pred__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 363 "add_pred.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_116_116, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Clause_50));
#line 363 "add_pred.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 363 "add_pred.m"
          }
#line 363 "add_pred.m"
          {
#line 363 "add_pred.m"
            hlds__hlds_clauses__set_clause_list_2_p_0(hlds__make_hlds__add_pred__V_116_116, &hlds__make_hlds__add_pred__ClausesRep_51);
          }
#line 376 "add_pred.m"
          {
#line 376 "add_pred.m"
            hlds__make_hlds__add_pred__ClausesInfo_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 376 "add_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_56, 0) = ((MR_Box) (hlds__make_hlds__add_pred__VarSet_24));
#line 376 "add_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_56, 1) = ((MR_Box) (hlds__make_hlds__add_pred__VarTypes_52));
#line 376 "add_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_56, 2) = ((MR_Box) (hlds__make_hlds__add_pred__TVarNameMap_53));
#line 376 "add_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_56, 3) = ((MR_Box) (hlds__make_hlds__add_pred__VarTypes_52));
#line 376 "add_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_56, 4) = ((MR_Box) (hlds__make_hlds__add_pred__HeadVars_15));
#line 376 "add_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_56, 5) = ((MR_Box) (hlds__make_hlds__add_pred__ClausesRep_51));
#line 376 "add_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_56, 6) = ((MR_Box) (hlds__make_hlds__add_pred__V_121_121));
#line 376 "add_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_56, 7) = ((MR_Box) (hlds__make_hlds__add_pred__RttiVarMaps_54));
#line 376 "add_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_56, 8) = ((MR_Box) (hlds__make_hlds__add_pred__HasForeignClauses_55));
#line 376 "add_pred.m"
          }
#line 379 "add_pred.m"
          {
#line 379 "add_pred.m"
            hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(hlds__make_hlds__add_pred__ClausesInfo_56, hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_61, &hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_122_122);
          }
#line 386 "add_pred.m"
          {
#line 386 "add_pred.m"
            hlds__hlds_pred__pred_info_get_markers_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_122_122, &hlds__make_hlds__add_pred__Markers0_57);
          }
#line 387 "add_pred.m"
          {
#line 387 "add_pred.m"
            hlds__hlds_pred__add_marker_3_p_0(hlds__make_hlds__add_pred__V_123_123, hlds__make_hlds__add_pred__Markers0_57, &hlds__make_hlds__add_pred__Markers_60);
          }
#line 2634 "hlds.make_hlds.add_pred.c"
        }
#line 2636 "hlds.make_hlds.add_pred.c"
        break;
#line 2638 "hlds.make_hlds.add_pred.c"
      case (MR_Integer) 1:
#line 2640 "hlds.make_hlds.add_pred.c"
        {
#line 2642 "hlds.make_hlds.add_pred.c"
          MR_Word hlds__make_hlds__add_pred__Markers2_59;
#line 2644 "hlds.make_hlds.add_pred.c"
          MR_Word hlds__make_hlds__add_pred__ClausesRep_148;
#line 2646 "hlds.make_hlds.add_pred.c"
          MR_Word hlds__make_hlds__add_pred__ClausesInfo_149;
#line 2648 "hlds.make_hlds.add_pred.c"
          MR_Word hlds__make_hlds__add_pred__Markers0_150;
#line 2650 "hlds.make_hlds.add_pred.c"
          MR_Word hlds__make_hlds__add_pred__Markers1_151;

#line 366 "add_pred.m"
          {
#line 366 "add_pred.m"
            hlds__hlds_clauses__set_clause_list_2_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__add_pred__ClausesRep_148);
          }
#line 376 "add_pred.m"
          {
#line 376 "add_pred.m"
            hlds__make_hlds__add_pred__ClausesInfo_149 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 376 "add_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_149, 0) = ((MR_Box) (hlds__make_hlds__add_pred__VarSet_24));
#line 376 "add_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_149, 1) = ((MR_Box) (hlds__make_hlds__add_pred__VarTypes_52));
#line 376 "add_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_149, 2) = ((MR_Box) (hlds__make_hlds__add_pred__TVarNameMap_53));
#line 376 "add_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_149, 3) = ((MR_Box) (hlds__make_hlds__add_pred__VarTypes_52));
#line 376 "add_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_149, 4) = ((MR_Box) (hlds__make_hlds__add_pred__HeadVars_15));
#line 376 "add_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_149, 5) = ((MR_Box) (hlds__make_hlds__add_pred__ClausesRep_148));
#line 376 "add_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_149, 6) = ((MR_Box) (hlds__make_hlds__add_pred__V_121_121));
#line 376 "add_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_149, 7) = ((MR_Box) (hlds__make_hlds__add_pred__RttiVarMaps_54));
#line 376 "add_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_149, 8) = ((MR_Box) (hlds__make_hlds__add_pred__HasForeignClauses_55));
#line 376 "add_pred.m"
          }
#line 379 "add_pred.m"
          {
#line 379 "add_pred.m"
            hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(hlds__make_hlds__add_pred__ClausesInfo_149, hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_61, &hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_122_122);
          }
#line 386 "add_pred.m"
          {
#line 386 "add_pred.m"
            hlds__hlds_pred__pred_info_get_markers_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_122_122, &hlds__make_hlds__add_pred__Markers0_150);
          }
#line 387 "add_pred.m"
          {
#line 387 "add_pred.m"
            hlds__hlds_pred__add_marker_3_p_0(hlds__make_hlds__add_pred__V_123_123, hlds__make_hlds__add_pred__Markers0_150, &hlds__make_hlds__add_pred__Markers1_151);
          }
#line 390 "add_pred.m"
          {
#line 390 "add_pred.m"
            hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 0, hlds__make_hlds__add_pred__Markers1_151, &hlds__make_hlds__add_pred__Markers2_59);
          }
#line 391 "add_pred.m"
          {
#line 391 "add_pred.m"
            hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 1, hlds__make_hlds__add_pred__Markers2_59, &hlds__make_hlds__add_pred__Markers_60);
          }
#line 2707 "hlds.make_hlds.add_pred.c"
        }
#line 2709 "hlds.make_hlds.add_pred.c"
        break;
#line 2711 "hlds.make_hlds.add_pred.c"
    }
#line 396 "add_pred.m"
    {
#line 396 "add_pred.m"
      hlds__hlds_pred__pred_info_set_markers_3_p_0(hlds__make_hlds__add_pred__Markers_60, hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_122_122, hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_62);
#line 396 "add_pred.m"
      return;
    }
#line 243 "add_pred.m"
  }
#line 240 "add_pred.m"
}

#line 191 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__add_new_pred_16_p_0_1(
#line 191 "add_pred.m"
  MR_Box hlds__make_hlds__add_pred__closure_arg,
#line 191 "add_pred.m"
  MR_Box hlds__make_hlds__add_pred__wrapper_arg_1,
#line 191 "add_pred.m"
  MR_Box hlds__make_hlds__add_pred__wrapper_arg_2,
#line 191 "add_pred.m"
  MR_Box * hlds__make_hlds__add_pred__wrapper_arg_3)
#line 191 "add_pred.m"
{
#line 191 "add_pred.m"
  {
#line 191 "add_pred.m"
    MR_Box hlds__make_hlds__add_pred__closure = hlds__make_hlds__add_pred__closure_arg;
#line 191 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__conv0_HeadVar__3_3;

#line 191 "add_pred.m"
    {
#line 191 "add_pred.m"
      hlds__hlds_pred__add_marker_3_p_0(((MR_Word) hlds__make_hlds__add_pred__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_pred__wrapper_arg_2), &hlds__make_hlds__add_pred__conv0_HeadVar__3_3);
    }
#line 191 "add_pred.m"
    *hlds__make_hlds__add_pred__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__add_pred__conv0_HeadVar__3_3));
#line 191 "add_pred.m"
  }
#line 191 "add_pred.m"
}

#line 152 "add_pred.m"
static void MR_CALL 
hlds__make_hlds__add_pred__add_new_pred_16_p_0(
#line 152 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Origin_17,
#line 152 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__TVarSet_18,
#line 152 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ExistQVars_19,
#line 152 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredName_20,
#line 152 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Types_21,
#line 152 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Purity_22,
#line 152 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Constraints_23,
#line 152 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Markers0_24,
#line 152 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_25,
#line 152 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ItemStatus_26,
#line 152 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__NeedQual_27,
#line 152 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_28,
#line 152 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_62,
#line 152 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_63,
#line 152 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_64,
#line 152 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_65)
#line 152 "add_pred.m"
{
#line 161 "add_pred.m"
  {
#line 161 "add_pred.m"
    MR_bool hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__ItemStatus_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 161 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Status_31;
#line 161 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__ModuleName_32;
#line 161 "add_pred.m"
    MR_Integer hlds__make_hlds__add_pred__Arity_33;

#line 171 "add_pred.m"
    if (hlds__make_hlds__add_pred__succeeded)
#line 170 "add_pred.m"
      {
#line 170 "add_pred.m"
        hlds__make_hlds__add_pred__Status_31 = (MR_Word) MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pred_scalar_common_3[0]);
#line 170 "add_pred.m"
      }
#line 171 "add_pred.m"
    else
#line 172 "add_pred.m"
      hlds__make_hlds__add_pred__Status_31 = hlds__make_hlds__add_pred__ItemStatus_26;
#line 174 "add_pred.m"
    {
#line 174 "add_pred.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_62, &hlds__make_hlds__add_pred__ModuleName_32);
    }
#line 175 "add_pred.m"
    {
#line 175 "add_pred.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__make_hlds__add_pred__Types_21, &hlds__make_hlds__add_pred__Arity_33);
    }
#line 182 "add_pred.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_pred__PredName_20)) == (MR_mktag((MR_Integer) 1))))
#line 183 "add_pred.m"
      {
#line 183 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_77_77;
#line 183 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__MNameOfPred_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__PredName_20, (MR_Integer) 0)));
#line 183 "add_pred.m"
        MR_String hlds__make_hlds__add_pred__PName_36 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__PredName_20, (MR_Integer) 1)));
#line 183 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__PredTable0_37;
#line 183 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__ClausesInfo_38;
#line 183 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__Proofs_39;
#line 183 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__ConstraintMap_40;
#line 183 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__PurityMarkers_41;
#line 183 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__MarkersList_42;
#line 183 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__Markers_43;
#line 183 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__VarNameRemap_44;
#line 183 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__PredInfo0_45;
#line 183 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__PredIds_46;
#line 183 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__V_67_67;
#line 191 "add_pred.m"
        MR_Box hlds__make_hlds__add_pred__conv1_Markers_43;

#line 184 "add_pred.m"
        {
#line 184 "add_pred.m"
          hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_62, &hlds__make_hlds__add_pred__PredTable0_37);
        }
#line 185 "add_pred.m"
        {
#line 185 "add_pred.m"
          hlds__make_hlds__add_pred__V_67_67 = hlds__hlds_clauses__init_clause_item_numbers_user_0_f_0();
        }
#line 185 "add_pred.m"
        {
#line 185 "add_pred.m"
          hlds__hlds_clauses__clauses_info_init_4_p_0(hlds__make_hlds__add_pred__PredOrFunc_28, hlds__make_hlds__add_pred__Arity_33, hlds__make_hlds__add_pred__V_67_67, &hlds__make_hlds__add_pred__ClausesInfo_38);
        }
#line 2877 "hlds.make_hlds.add_pred.c"
        hlds__make_hlds__add_pred__TypeCtorInfo_77_77 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 187 "add_pred.m"
        {
#line 187 "add_pred.m"
          mercury__map__init_1_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_77_77, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, &hlds__make_hlds__add_pred__Proofs_39);
        }
#line 188 "add_pred.m"
        {
#line 188 "add_pred.m"
          mercury__map__init_1_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, hlds__make_hlds__add_pred__TypeCtorInfo_77_77, &hlds__make_hlds__add_pred__ConstraintMap_40);
        }
#line 189 "add_pred.m"
        {
#line 189 "add_pred.m"
          hlds__hlds_pred__purity_to_markers_2_p_0(hlds__make_hlds__add_pred__Purity_22, &hlds__make_hlds__add_pred__PurityMarkers_41);
        }
#line 190 "add_pred.m"
        {
#line 190 "add_pred.m"
          hlds__hlds_pred__markers_to_marker_list_2_p_0(hlds__make_hlds__add_pred__PurityMarkers_41, &hlds__make_hlds__add_pred__MarkersList_42);
        }
#line 191 "add_pred.m"
        {
#line 191 "add_pred.m"
          mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_marker_0, (MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[0], (MR_Word) &hlds__make_hlds__add_pred_scalar_common_5[0], hlds__make_hlds__add_pred__MarkersList_42, ((MR_Box) (hlds__make_hlds__add_pred__Markers0_24)), &hlds__make_hlds__add_pred__conv1_Markers_43);
        }
#line 191 "add_pred.m"
        hlds__make_hlds__add_pred__Markers_43 = ((MR_Word) hlds__make_hlds__add_pred__conv1_Markers_43);
#line 192 "add_pred.m"
        {
#line 192 "add_pred.m"
          mercury__map__init_1_p_0((MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[1], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, &hlds__make_hlds__add_pred__VarNameRemap_44);
        }
#line 193 "add_pred.m"
        {
#line 193 "add_pred.m"
          hlds__hlds_pred__pred_info_init_18_p_0(hlds__make_hlds__add_pred__ModuleName_32, hlds__make_hlds__add_pred__PredName_20, hlds__make_hlds__add_pred__Arity_33, hlds__make_hlds__add_pred__PredOrFunc_28, hlds__make_hlds__add_pred__Context_25, hlds__make_hlds__add_pred__Origin_17, hlds__make_hlds__add_pred__Status_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_pred__Markers_43, hlds__make_hlds__add_pred__Types_21, hlds__make_hlds__add_pred__TVarSet_18, hlds__make_hlds__add_pred__ExistQVars_19, hlds__make_hlds__add_pred__Constraints_23, hlds__make_hlds__add_pred__Proofs_39, hlds__make_hlds__add_pred__ConstraintMap_40, hlds__make_hlds__add_pred__ClausesInfo_38, hlds__make_hlds__add_pred__VarNameRemap_44, &hlds__make_hlds__add_pred__PredInfo0_45);
        }
#line 197 "add_pred.m"
        {
#line 197 "add_pred.m"
          hlds__pred_table__predicate_table_lookup_pf_m_n_a_7_p_0(hlds__make_hlds__add_pred__PredTable0_37, (MR_Integer) 0, hlds__make_hlds__add_pred__PredOrFunc_28, hlds__make_hlds__add_pred__MNameOfPred_35, hlds__make_hlds__add_pred__PName_36, hlds__make_hlds__add_pred__Arity_33, &hlds__make_hlds__add_pred__PredIds_46);
        }
#line 207 "add_pred.m"
        if ((hlds__make_hlds__add_pred__PredIds_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 208 "add_pred.m"
          {
#line 208 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__PQInfo_53;
#line 208 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__PredId_54;
#line 208 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__PredTable1_55;
#line 208 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__PredTable_61;

#line 209 "add_pred.m"
            {
#line 209 "add_pred.m"
              hlds__hlds_module__module_info_get_partial_qualifier_info_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_62, &hlds__make_hlds__add_pred__PQInfo_53);
            }
#line 210 "add_pred.m"
            {
#line 210 "add_pred.m"
              hlds__pred_table__predicate_table_insert_qual_6_p_0(hlds__make_hlds__add_pred__PredInfo0_45, hlds__make_hlds__add_pred__NeedQual_27, hlds__make_hlds__add_pred__PQInfo_53, &hlds__make_hlds__add_pred__PredId_54, hlds__make_hlds__add_pred__PredTable0_37, &hlds__make_hlds__add_pred__PredTable1_55);
            }
#line 212 "add_pred.m"
            {
#line 212 "add_pred.m"
              hlds__make_hlds__add_pred__succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(hlds__make_hlds__add_pred__PredInfo0_45);
            }
#line 220 "add_pred.m"
            if (hlds__make_hlds__add_pred__succeeded)
#line 213 "add_pred.m"
              {
#line 213 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__Globals_56;
#line 213 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__CompilationTarget_57;
#line 213 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__PredInfo_58;
#line 213 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__Preds1_59;
#line 213 "add_pred.m"
                MR_Word hlds__make_hlds__add_pred__Preds_60;

#line 213 "add_pred.m"
                {
#line 213 "add_pred.m"
                  hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_62, &hlds__make_hlds__add_pred__Globals_56);
                }
#line 214 "add_pred.m"
                {
#line 214 "add_pred.m"
                  libs__globals__get_target_2_p_0(hlds__make_hlds__add_pred__Globals_56, &hlds__make_hlds__add_pred__CompilationTarget_57);
                }
#line 215 "add_pred.m"
                {
#line 215 "add_pred.m"
                  hlds__make_hlds__add_pred__add_builtin_5_p_0(hlds__make_hlds__add_pred__PredId_54, hlds__make_hlds__add_pred__Types_21, hlds__make_hlds__add_pred__CompilationTarget_57, hlds__make_hlds__add_pred__PredInfo0_45, &hlds__make_hlds__add_pred__PredInfo_58);
                }
#line 217 "add_pred.m"
                {
#line 217 "add_pred.m"
                  hlds__pred_table__predicate_table_get_preds_2_p_0(hlds__make_hlds__add_pred__PredTable1_55, &hlds__make_hlds__add_pred__Preds1_59);
                }
#line 218 "add_pred.m"
                {
#line 218 "add_pred.m"
                  mercury__map__det_update_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, ((MR_Box) (hlds__make_hlds__add_pred__PredId_54)), ((MR_Box) (hlds__make_hlds__add_pred__PredInfo_58)), hlds__make_hlds__add_pred__Preds1_59, &hlds__make_hlds__add_pred__Preds_60);
                }
#line 219 "add_pred.m"
                {
#line 219 "add_pred.m"
                  hlds__pred_table__predicate_table_set_preds_3_p_0(hlds__make_hlds__add_pred__Preds_60, hlds__make_hlds__add_pred__PredTable1_55, &hlds__make_hlds__add_pred__PredTable_61);
                }
#line 213 "add_pred.m"
              }
#line 220 "add_pred.m"
            else
#line 221 "add_pred.m"
              hlds__make_hlds__add_pred__PredTable_61 = hlds__make_hlds__add_pred__PredTable1_55;
#line 223 "add_pred.m"
            {
#line 223 "add_pred.m"
              hlds__hlds_module__module_info_set_predicate_table_3_p_0(hlds__make_hlds__add_pred__PredTable_61, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_62, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_63);
            }
#line 208 "add_pred.m"
            *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_65 = hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_64;
#line 208 "add_pred.m"
          }
#line 207 "add_pred.m"
        else
#line 200 "add_pred.m"
          {
#line 200 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__OrigPred_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__PredIds_46, (MR_Integer) 0)));
#line 200 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__OrigPredInfo_49;
#line 200 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__OrigContext_50;
#line 200 "add_pred.m"
            MR_String hlds__make_hlds__add_pred__DeclString_51;
#line 200 "add_pred.m"
            MR_Integer hlds__make_hlds__add_pred__OrigArity_52;
#line 200 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__PredIds_46, (MR_Integer) 1)));

#line 201 "add_pred.m"
            {
#line 201 "add_pred.m"
              hlds__hlds_module__module_info_pred_info_3_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_62, hlds__make_hlds__add_pred__OrigPred_47, &hlds__make_hlds__add_pred__OrigPredInfo_49);
            }
#line 202 "add_pred.m"
            {
#line 202 "add_pred.m"
              hlds__hlds_pred__pred_info_get_context_2_p_0(hlds__make_hlds__add_pred__OrigPredInfo_49, &hlds__make_hlds__add_pred__OrigContext_50);
            }
#line 203 "add_pred.m"
            {
#line 203 "add_pred.m"
              hlds__make_hlds__add_pred__DeclString_51 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(hlds__make_hlds__add_pred__PredOrFunc_28);
            }
#line 204 "add_pred.m"
            {
#line 204 "add_pred.m"
              parse_tree__prog_util__adjust_func_arity_3_p_1(hlds__make_hlds__add_pred__PredOrFunc_28, &hlds__make_hlds__add_pred__OrigArity_52, hlds__make_hlds__add_pred__Arity_33);
            }
#line 205 "add_pred.m"
            {
#line 205 "add_pred.m"
              hlds__make_hlds__make_hlds_error__multiple_def_error_9_p_0(hlds__make_hlds__add_pred__ItemStatus_26, hlds__make_hlds__add_pred__PredName_20, hlds__make_hlds__add_pred__OrigArity_52, hlds__make_hlds__add_pred__DeclString_51, hlds__make_hlds__add_pred__Context_25, hlds__make_hlds__add_pred__OrigContext_50, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_64, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_65);
            }
#line 200 "add_pred.m"
            *hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_63 = hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_62;
#line 200 "add_pred.m"
          }
#line 183 "add_pred.m"
      }
#line 182 "add_pred.m"
    else
#line 177 "add_pred.m"
      {
#line 178 "add_pred.m"
        {
#line 178 "add_pred.m"
          hlds__hlds_module__module_info_incr_errors_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_62, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_63);
        }
#line 179 "add_pred.m"
        {
#line 179 "add_pred.m"
          hlds__make_hlds__add_pred__unqualified_pred_error_5_p_0(hlds__make_hlds__add_pred__PredName_20, hlds__make_hlds__add_pred__Arity_33, hlds__make_hlds__add_pred__Context_25, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_64, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_65);
#line 179 "add_pred.m"
          return;
        }
#line 177 "add_pred.m"
      }
#line 161 "add_pred.m"
  }
#line 152 "add_pred.m"
}

#line 69 "add_pred.m"
void MR_CALL 
hlds__make_hlds__add_pred__maybe_check_field_access_function_7_p_0(
#line 69 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ModuleInfo_8,
#line 69 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__FuncName_9,
#line 69 "add_pred.m"
  MR_Integer hlds__make_hlds__add_pred__FuncArity_10,
#line 69 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Status_11,
#line 69 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_12,
#line 69 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_16,
#line 69 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_17)
#line 69 "add_pred.m"
{
#line 632 "add_pred.m"
  {
#line 632 "add_pred.m"
    MR_bool hlds__make_hlds__add_pred__succeeded;
#line 632 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__FieldName_15;
#line 627 "add_pred.m"
    MR_Integer hlds__make_hlds__add_pred__V_19_19;
#line 627 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__AccessType_14;

#line 627 "add_pred.m"
    {
#line 627 "add_pred.m"
      hlds__make_hlds__add_pred__succeeded = hlds__hlds_pred__is_field_access_function_name_5_p_0(hlds__make_hlds__add_pred__ModuleInfo_8, hlds__make_hlds__add_pred__FuncName_9, &hlds__make_hlds__add_pred__V_19_19, &hlds__make_hlds__add_pred__AccessType_14, &hlds__make_hlds__add_pred__FieldName_15);
    }
#line 627 "add_pred.m"
    if (hlds__make_hlds__add_pred__succeeded)
#line 627 "add_pred.m"
      hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__FuncArity_10 == hlds__make_hlds__add_pred__V_19_19);
#line 632 "add_pred.m"
    if (hlds__make_hlds__add_pred__succeeded)
#line 641 "add_pred.m"
      {
#line 641 "add_pred.m"
        MR_Integer hlds__make_hlds__add_pred__PredArity_30;
#line 641 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__FuncCallId_31;
#line 641 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__CtorFieldTable_32;
#line 650 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__TypeInfo_37_47;
#line 650 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__FieldDefn_33;
#line 650 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__DefnStatus_35;
#line 650 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__V_41_41;
#line 650 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__V_46_46;
#line 650 "add_pred.m"
        MR_Box hlds__make_hlds__add_pred__conv0_V_41_41;
#line 651 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__V_34_34;
#line 651 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__V_36_36;
#line 651 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__V_37_37;
#line 651 "add_pred.m"
        MR_Integer hlds__make_hlds__add_pred__V_38_38;

#line 642 "add_pred.m"
        {
#line 642 "add_pred.m"
          parse_tree__prog_util__adjust_func_arity_3_p_0((MR_Integer) 1, hlds__make_hlds__add_pred__FuncArity_10, &hlds__make_hlds__add_pred__PredArity_30);
        }
#line 643 "add_pred.m"
        {
#line 643 "add_pred.m"
          hlds__make_hlds__add_pred__FuncCallId_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 643 "add_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__FuncCallId_31, 0) = ((MR_Box) ((MR_Integer) 1));
#line 643 "add_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__FuncCallId_31, 1) = ((MR_Box) (hlds__make_hlds__add_pred__FuncName_9));
#line 643 "add_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__FuncCallId_31, 2) = ((MR_Box) (hlds__make_hlds__add_pred__PredArity_30));
#line 643 "add_pred.m"
        }
#line 646 "add_pred.m"
        {
#line 646 "add_pred.m"
          hlds__hlds_module__module_info_get_ctor_field_table_2_p_0(hlds__make_hlds__add_pred__ModuleInfo_8, &hlds__make_hlds__add_pred__CtorFieldTable_32);
        }
#line 650 "add_pred.m"
        {
#line 650 "add_pred.m"
          hlds__make_hlds__add_pred__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[3], hlds__make_hlds__add_pred__CtorFieldTable_32, ((MR_Box) (hlds__make_hlds__add_pred__FieldName_15)), &hlds__make_hlds__add_pred__conv0_V_41_41);
        }
#line 650 "add_pred.m"
        if (hlds__make_hlds__add_pred__succeeded)
#line 650 "add_pred.m"
          {
#line 650 "add_pred.m"
            hlds__make_hlds__add_pred__V_41_41 = ((MR_Word) hlds__make_hlds__add_pred__conv0_V_41_41);
#line 650 "add_pred.m"
            hlds__make_hlds__add_pred__succeeded = MR_TRUE;
#line 650 "add_pred.m"
          }
#line 650 "add_pred.m"
        if (hlds__make_hlds__add_pred__succeeded)
#line 650 "add_pred.m"
          {
#line 650 "add_pred.m"
            hlds__make_hlds__add_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pred__V_41_41)) == (MR_mktag((MR_Integer) 1)));
#line 650 "add_pred.m"
            if (hlds__make_hlds__add_pred__succeeded)
#line 650 "add_pred.m"
              {
#line 650 "add_pred.m"
                hlds__make_hlds__add_pred__FieldDefn_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_41_41, (MR_Integer) 0)));
#line 650 "add_pred.m"
                hlds__make_hlds__add_pred__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_41_41, (MR_Integer) 1)));
#line 3201 "hlds.make_hlds.add_pred.c"
                hlds__make_hlds__add_pred__TypeInfo_37_47 = (MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[3];
#line 650 "add_pred.m"
                {
#line 650 "add_pred.m"
                  hlds__make_hlds__add_pred__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__add_pred__TypeInfo_37_47, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (hlds__make_hlds__add_pred__V_46_46)));
                }
#line 650 "add_pred.m"
                if (hlds__make_hlds__add_pred__succeeded)
#line 650 "add_pred.m"
                  {
#line 653 "add_pred.m"
                    hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__Status_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 653 "add_pred.m"
                    hlds__make_hlds__add_pred__succeeded = !(hlds__make_hlds__add_pred__succeeded);
#line 650 "add_pred.m"
                    if (hlds__make_hlds__add_pred__succeeded)
#line 650 "add_pred.m"
                      {
#line 651 "add_pred.m"
                        hlds__make_hlds__add_pred__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__FieldDefn_33, (MR_Integer) 0)));
#line 651 "add_pred.m"
                        hlds__make_hlds__add_pred__DefnStatus_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__FieldDefn_33, (MR_Integer) 1)));
#line 651 "add_pred.m"
                        hlds__make_hlds__add_pred__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__FieldDefn_33, (MR_Integer) 2)));
#line 651 "add_pred.m"
                        hlds__make_hlds__add_pred__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__FieldDefn_33, (MR_Integer) 3)));
#line 651 "add_pred.m"
                        hlds__make_hlds__add_pred__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__FieldDefn_33, (MR_Integer) 4)));
#line 652 "add_pred.m"
                        hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__DefnStatus_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 650 "add_pred.m"
                      }
#line 650 "add_pred.m"
                  }
#line 650 "add_pred.m"
              }
#line 650 "add_pred.m"
          }
#line 656 "add_pred.m"
        if (hlds__make_hlds__add_pred__succeeded)
#line 663 "add_pred.m"
          {
#line 663 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__Pieces_53;
#line 663 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__Msg_54;
#line 663 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__Spec_55;
#line 663 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_58_58;
#line 663 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_59_59;
#line 663 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_74_74;
#line 663 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_75_75;
#line 663 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__V_79_79;

#line 664 "add_pred.m"
            {
#line 664 "add_pred.m"
              hlds__make_hlds__add_pred__V_59_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 664 "add_pred.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_59_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 664 "add_pred.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_59_59, 1) = ((MR_Box) (hlds__make_hlds__add_pred__FuncCallId_31));
#line 664 "add_pred.m"
            }
#line 664 "add_pred.m"
            {
#line 664 "add_pred.m"
              hlds__make_hlds__add_pred__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 664 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_58_58, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_59_59));
#line 664 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[33])));
#line 664 "add_pred.m"
            }
#line 664 "add_pred.m"
            {
#line 664 "add_pred.m"
              hlds__make_hlds__add_pred__Pieces_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 664 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Pieces_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[35])));
#line 664 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Pieces_53, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_58_58));
#line 664 "add_pred.m"
            }
#line 667 "add_pred.m"
            {
#line 667 "add_pred.m"
              hlds__make_hlds__add_pred__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 667 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_75_75, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Pieces_53));
#line 667 "add_pred.m"
            }
#line 667 "add_pred.m"
            {
#line 667 "add_pred.m"
              hlds__make_hlds__add_pred__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 667 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_74_74, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_75_75));
#line 667 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 667 "add_pred.m"
            }
#line 667 "add_pred.m"
            {
#line 667 "add_pred.m"
              hlds__make_hlds__add_pred__Msg_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 667 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_54, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Context_12));
#line 667 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_54, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_74_74));
#line 667 "add_pred.m"
            }
#line 668 "add_pred.m"
            {
#line 668 "add_pred.m"
              hlds__make_hlds__add_pred__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 668 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_79_79, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Msg_54));
#line 668 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 668 "add_pred.m"
            }
#line 668 "add_pred.m"
            {
#line 668 "add_pred.m"
              hlds__make_hlds__add_pred__Spec_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 668 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 668 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 668 "add_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_55, 2) = ((MR_Box) (hlds__make_hlds__add_pred__V_79_79));
#line 668 "add_pred.m"
            }
#line 669 "add_pred.m"
            {
#line 669 "add_pred.m"
              MR_Word base;
#line 669 "add_pred.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 669 "add_pred.m"
              *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_17 = base;
#line 669 "add_pred.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Spec_55));
#line 669 "add_pred.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_16));
#line 669 "add_pred.m"
            }
#line 663 "add_pred.m"
          }
#line 656 "add_pred.m"
        else
#line 656 "add_pred.m"
          *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_17 = hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_16;
#line 641 "add_pred.m"
      }
#line 632 "add_pred.m"
    else
#line 632 "add_pred.m"
      *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_17 = hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_16;
#line 632 "add_pred.m"
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
#line 574 "add_pred.m"
  {
#line 574 "add_pred.m"
    MR_bool hlds__make_hlds__add_pred__succeeded;
#line 574 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_55_71;
#line 574 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_58_74;
#line 574 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__ClausesInfo_20;
#line 574 "add_pred.m"
    MR_String hlds__make_hlds__add_pred__FileName_21;
#line 574 "add_pred.m"
    MR_Integer hlds__make_hlds__add_pred__LineNum_22;
#line 574 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredicateTable0_23;
#line 574 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredicateTable_24;
#line 574 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_27_27;
#line 574 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TVarSet0_42;
#line 574 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TypeVars_43;
#line 574 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TVarSet_44;
#line 574 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Types_45;
#line 574 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Proofs_46;
#line 574 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__ConstraintMap_47;
#line 574 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Markers0_50;
#line 574 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__VarNameRemap_51;
#line 574 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredInfo0_52;
#line 574 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Markers_53;
#line 574 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredInfo_54;
#line 574 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredIds_55;
#line 574 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_60_60;

#line 575 "add_pred.m"
    {
#line 575 "add_pred.m"
      hlds__hlds_clauses__clauses_info_init_for_assertion_2_p_0(hlds__make_hlds__add_pred__HeadVars_16, &hlds__make_hlds__add_pred__ClausesInfo_20);
    }
#line 576 "add_pred.m"
    {
#line 576 "add_pred.m"
      mercury__term__context_file_2_p_0(hlds__make_hlds__add_pred__Context_18, &hlds__make_hlds__add_pred__FileName_21);
    }
#line 577 "add_pred.m"
    {
#line 577 "add_pred.m"
      mercury__term__context_line_2_p_0(hlds__make_hlds__add_pred__Context_18, &hlds__make_hlds__add_pred__LineNum_22);
    }
#line 578 "add_pred.m"
    {
#line 578 "add_pred.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_25, &hlds__make_hlds__add_pred__PredicateTable0_23);
    }
#line 580 "add_pred.m"
    {
#line 580 "add_pred.m"
      hlds__make_hlds__add_pred__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 580 "add_pred.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 580 "add_pred.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_27_27, 1) = ((MR_Box) (hlds__make_hlds__add_pred__FileName_21));
#line 580 "add_pred.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_27_27, 2) = ((MR_Box) (hlds__make_hlds__add_pred__LineNum_22));
#line 580 "add_pred.m"
    }
#line 3476 "hlds.make_hlds.add_pred.c"
    hlds__make_hlds__add_pred__TypeCtorInfo_55_71 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 591 "add_pred.m"
    {
#line 591 "add_pred.m"
      mercury__varset__init_1_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_55_71, &hlds__make_hlds__add_pred__TVarSet0_42);
    }
#line 592 "add_pred.m"
    {
#line 592 "add_pred.m"
      parse_tree__prog_util__make_n_fresh_vars_5_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_55_71, (MR_String) "T", hlds__make_hlds__add_pred__Arity_14, &hlds__make_hlds__add_pred__TypeVars_43, hlds__make_hlds__add_pred__TVarSet0_42, &hlds__make_hlds__add_pred__TVarSet_44);
    }
#line 593 "add_pred.m"
    {
#line 593 "add_pred.m"
      hlds__make_hlds__add_pred__V_60_60 = mercury__map__init_0_f_0((MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[2], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
    }
#line 593 "add_pred.m"
    {
#line 593 "add_pred.m"
      parse_tree__prog_type__var_list_to_type_list_3_p_0(hlds__make_hlds__add_pred__V_60_60, hlds__make_hlds__add_pred__TypeVars_43, &hlds__make_hlds__add_pred__Types_45);
    }
#line 3498 "hlds.make_hlds.add_pred.c"
    hlds__make_hlds__add_pred__TypeCtorInfo_58_74 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 594 "add_pred.m"
    {
#line 594 "add_pred.m"
      mercury__map__init_1_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_58_74, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, &hlds__make_hlds__add_pred__Proofs_46);
    }
#line 595 "add_pred.m"
    {
#line 595 "add_pred.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, hlds__make_hlds__add_pred__TypeCtorInfo_58_74, &hlds__make_hlds__add_pred__ConstraintMap_47);
    }
#line 602 "add_pred.m"
    {
#line 602 "add_pred.m"
      hlds__hlds_pred__init_markers_1_p_0(&hlds__make_hlds__add_pred__Markers0_50);
    }
#line 603 "add_pred.m"
    {
#line 603 "add_pred.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[1], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, &hlds__make_hlds__add_pred__VarNameRemap_51);
    }
#line 604 "add_pred.m"
    {
#line 604 "add_pred.m"
      hlds__hlds_pred__pred_info_init_18_p_0(hlds__make_hlds__add_pred__ModuleName_12, hlds__make_hlds__add_pred__PredName_13, hlds__make_hlds__add_pred__Arity_14, hlds__make_hlds__add_pred__PredOrFunc_15, hlds__make_hlds__add_pred__Context_18, hlds__make_hlds__add_pred__V_27_27, hlds__make_hlds__add_pred__Status_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_pred__Markers0_50, hlds__make_hlds__add_pred__Types_45, hlds__make_hlds__add_pred__TVarSet_44, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[34], hlds__make_hlds__add_pred__Proofs_46, hlds__make_hlds__add_pred__ConstraintMap_47, hlds__make_hlds__add_pred__ClausesInfo_20, hlds__make_hlds__add_pred__VarNameRemap_51, &hlds__make_hlds__add_pred__PredInfo0_52);
    }
#line 608 "add_pred.m"
    {
#line 608 "add_pred.m"
      hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 2, hlds__make_hlds__add_pred__Markers0_50, &hlds__make_hlds__add_pred__Markers_53);
    }
#line 609 "add_pred.m"
    {
#line 609 "add_pred.m"
      hlds__hlds_pred__pred_info_set_markers_3_p_0(hlds__make_hlds__add_pred__Markers_53, hlds__make_hlds__add_pred__PredInfo0_52, &hlds__make_hlds__add_pred__PredInfo_54);
    }
#line 610 "add_pred.m"
    {
#line 610 "add_pred.m"
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__make_hlds__add_pred__PredicateTable0_23, (MR_Integer) 0, hlds__make_hlds__add_pred__PredOrFunc_15, hlds__make_hlds__add_pred__PredName_13, hlds__make_hlds__add_pred__Arity_14, &hlds__make_hlds__add_pred__PredIds_55);
    }
#line 617 "add_pred.m"
    if ((hlds__make_hlds__add_pred__PredIds_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 613 "add_pred.m"
      {
#line 613 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__MQInfo_56;

#line 614 "add_pred.m"
        {
#line 614 "add_pred.m"
          hlds__hlds_module__module_info_get_partial_qualifier_info_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_25, &hlds__make_hlds__add_pred__MQInfo_56);
        }
#line 615 "add_pred.m"
        {
#line 615 "add_pred.m"
          hlds__pred_table__predicate_table_insert_qual_6_p_0(hlds__make_hlds__add_pred__PredInfo_54, (MR_Integer) 1, hlds__make_hlds__add_pred__MQInfo_56, hlds__make_hlds__add_pred__PredId_19, hlds__make_hlds__add_pred__PredicateTable0_23, &hlds__make_hlds__add_pred__PredicateTable_24);
        }
#line 613 "add_pred.m"
      }
#line 617 "add_pred.m"
    else
#line 618 "add_pred.m"
      {
#line 619 "add_pred.m"
        {
#line 619 "add_pred.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_pred", (MR_String) "predicate \140hlds.make_hlds.add_pred.preds_do_add_implicit\'/12", (MR_String) "search succeeded");
#line 619 "add_pred.m"
          return;
        }
#line 618 "add_pred.m"
      }
#line 582 "add_pred.m"
    {
#line 582 "add_pred.m"
      hlds__hlds_module__module_info_set_predicate_table_3_p_0(hlds__make_hlds__add_pred__PredicateTable_24, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_25, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_26);
#line 582 "add_pred.m"
      return;
    }
#line 574 "add_pred.m"
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
#line 554 "add_pred.m"
  {
#line 554 "add_pred.m"
    MR_bool hlds__make_hlds__add_pred__succeeded;
#line 554 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredicateTable0_27;
#line 554 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__ClausesInfo_29;
#line 554 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredicateTable_30;
#line 554 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_35_35;
#line 554 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_38_38;

#line 555 "add_pred.m"
    {
#line 555 "add_pred.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_31, &hlds__make_hlds__add_pred__PredicateTable0_27);
    }
#line 556 "add_pred.m"
    {
#line 556 "add_pred.m"
      hlds__make_hlds__make_hlds_error__maybe_undefined_pred_error_10_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_31, hlds__make_hlds__add_pred__PredName_17, hlds__make_hlds__add_pred__Arity_18, hlds__make_hlds__add_pred__PredOrFunc_19, hlds__make_hlds__add_pred__Status_20, hlds__make_hlds__add_pred__IsClassMethod_21, hlds__make_hlds__add_pred__Context_22, hlds__make_hlds__add_pred__DescPieces_24, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_33, &hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_35_35);
    }
#line 563 "add_pred.m"
#line 563 "add_pred.m"
    switch (hlds__make_hlds__add_pred__PredOrFunc_19) {
#line 563 "add_pred.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 563 "add_pred.m"
      case (MR_Integer) 1:
#line 559 "add_pred.m"
        {
#line 559 "add_pred.m"
          MR_Integer hlds__make_hlds__add_pred__FuncArity_28;

#line 560 "add_pred.m"
          {
#line 560 "add_pred.m"
            parse_tree__prog_util__adjust_func_arity_3_p_1((MR_Integer) 1, &hlds__make_hlds__add_pred__FuncArity_28, hlds__make_hlds__add_pred__Arity_18);
          }
#line 561 "add_pred.m"
          {
#line 561 "add_pred.m"
            hlds__make_hlds__add_pred__maybe_check_field_access_function_7_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_31, hlds__make_hlds__add_pred__PredName_17, hlds__make_hlds__add_pred__FuncArity_28, hlds__make_hlds__add_pred__Status_20, hlds__make_hlds__add_pred__Context_22, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_35_35, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_34);
          }
#line 559 "add_pred.m"
        }
#line 563 "add_pred.m"
        break;
#line 563 "add_pred.m"
      case (MR_Integer) 0:
#line 564 "add_pred.m"
        *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_34 = hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_35_35;
#line 563 "add_pred.m"
        break;
#line 563 "add_pred.m"
    }
#line 566 "add_pred.m"
    {
#line 566 "add_pred.m"
      hlds__make_hlds__add_pred__V_38_38 = hlds__hlds_clauses__init_clause_item_numbers_user_0_f_0();
    }
#line 566 "add_pred.m"
    {
#line 566 "add_pred.m"
      hlds__hlds_clauses__clauses_info_init_4_p_0(hlds__make_hlds__add_pred__PredOrFunc_19, hlds__make_hlds__add_pred__Arity_18, hlds__make_hlds__add_pred__V_38_38, &hlds__make_hlds__add_pred__ClausesInfo_29);
    }
#line 568 "add_pred.m"
    {
#line 568 "add_pred.m"
      hlds__make_hlds__add_pred__preds_do_add_implicit_12_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_31, hlds__make_hlds__add_pred__ModuleName_16, hlds__make_hlds__add_pred__PredName_17, hlds__make_hlds__add_pred__Arity_18, hlds__make_hlds__add_pred__PredOrFunc_19, hlds__make_hlds__add_pred__Status_20, hlds__make_hlds__add_pred__Context_22, hlds__make_hlds__add_pred__Origin_23, hlds__make_hlds__add_pred__ClausesInfo_29, hlds__make_hlds__add_pred__PredId_25, hlds__make_hlds__add_pred__PredicateTable0_27, &hlds__make_hlds__add_pred__PredicateTable_30);
    }
#line 571 "add_pred.m"
    {
#line 571 "add_pred.m"
      hlds__hlds_module__module_info_set_predicate_table_3_p_0(hlds__make_hlds__add_pred__PredicateTable_30, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_31, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_32);
#line 571 "add_pred.m"
      return;
    }
#line 554 "add_pred.m"
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
#line 417 "add_pred.m"
  {
#line 417 "add_pred.m"
    MR_bool hlds__make_hlds__add_pred__succeeded;
#line 417 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_58_58;
#line 417 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_59_59;
#line 417 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__ModuleName0_25;
#line 417 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__ModuleName_26;
#line 417 "add_pred.m"
    MR_Integer hlds__make_hlds__add_pred__Arity_27;
#line 417 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredicateTable0_28;
#line 417 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredIds_29;
#line 417 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredId_31;
#line 417 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredicateTable1_32;
#line 417 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Preds0_33;
#line 417 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredInfo0_34;
#line 417 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredInfo_35;
#line 417 "add_pred.m"
    MR_Integer hlds__make_hlds__add_pred__ProcId_36;
#line 417 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Preds_37;
#line 417 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredicateTable_38;
#line 417 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_45_45;
#line 417 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_48_48;
#line 434 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__PredIdPrime_30;
#line 432 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__V_44_44;
#line 442 "add_pred.m"
    MR_Box hlds__make_hlds__add_pred__conv0_PredInfo0_34;

#line 426 "add_pred.m"
    {
#line 426 "add_pred.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__add_pred__ModuleName0_25);
    }
#line 427 "add_pred.m"
    {
#line 427 "add_pred.m"
      mdbcomp__sym_name__sym_name_get_module_name_default_3_p_0(hlds__make_hlds__add_pred__PredName_15, hlds__make_hlds__add_pred__ModuleName0_25, &hlds__make_hlds__add_pred__ModuleName_26);
    }
#line 428 "add_pred.m"
    {
#line 428 "add_pred.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__make_hlds__add_pred__Modes_16, &hlds__make_hlds__add_pred__Arity_27);
    }
#line 429 "add_pred.m"
    {
#line 429 "add_pred.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__add_pred__PredicateTable0_28);
    }
#line 430 "add_pred.m"
    {
#line 430 "add_pred.m"
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__make_hlds__add_pred__PredicateTable0_28, (MR_Integer) 0, hlds__make_hlds__add_pred__PredOrFunc_20, hlds__make_hlds__add_pred__PredName_15, hlds__make_hlds__add_pred__Arity_27, &hlds__make_hlds__add_pred__PredIds_29);
    }
#line 432 "add_pred.m"
    hlds__make_hlds__add_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pred__PredIds_29)) == (MR_mktag((MR_Integer) 1)));
#line 432 "add_pred.m"
    if (hlds__make_hlds__add_pred__succeeded)
#line 432 "add_pred.m"
      {
#line 432 "add_pred.m"
        hlds__make_hlds__add_pred__PredIdPrime_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__PredIds_29, (MR_Integer) 0)));
#line 432 "add_pred.m"
        hlds__make_hlds__add_pred__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__PredIds_29, (MR_Integer) 1)));
#line 432 "add_pred.m"
        hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__V_44_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 432 "add_pred.m"
      }
#line 434 "add_pred.m"
    if (hlds__make_hlds__add_pred__succeeded)
#line 433 "add_pred.m"
      {
#line 433 "add_pred.m"
        hlds__make_hlds__add_pred__PredId_31 = hlds__make_hlds__add_pred__PredIdPrime_30;
#line 433 "add_pred.m"
        hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_48_48 = hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_41;
#line 433 "add_pred.m"
        hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_45_45 = hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_39;
#line 433 "add_pred.m"
      }
#line 434 "add_pred.m"
    else
#line 435 "add_pred.m"
      {
#line 435 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__V_46_46;

#line 437 "add_pred.m"
        {
#line 437 "add_pred.m"
          hlds__make_hlds__add_pred__V_46_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 437 "add_pred.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_46_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 437 "add_pred.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_46_46, 1) = ((MR_Box) (hlds__make_hlds__add_pred__PredName_15));
#line 437 "add_pred.m"
        }
#line 435 "add_pred.m"
        {
#line 435 "add_pred.m"
          hlds__make_hlds__add_pred__preds_add_implicit_report_error_14_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_45_45, hlds__make_hlds__add_pred__ModuleName_26, hlds__make_hlds__add_pred__PredName_15, hlds__make_hlds__add_pred__Arity_27, hlds__make_hlds__add_pred__PredOrFunc_20, hlds__make_hlds__add_pred__Status_18, hlds__make_hlds__add_pred__IsClassMethod_21, hlds__make_hlds__add_pred__MContext_19, hlds__make_hlds__add_pred__V_46_46, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[7]), &hlds__make_hlds__add_pred__PredId_31, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_41, &hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_48_48);
        }
#line 435 "add_pred.m"
      }
#line 440 "add_pred.m"
    {
#line 440 "add_pred.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_45_45, &hlds__make_hlds__add_pred__PredicateTable1_32);
    }
#line 441 "add_pred.m"
    {
#line 441 "add_pred.m"
      hlds__pred_table__predicate_table_get_preds_2_p_0(hlds__make_hlds__add_pred__PredicateTable1_32, &hlds__make_hlds__add_pred__Preds0_33);
    }
#line 3864 "hlds.make_hlds.add_pred.c"
    hlds__make_hlds__add_pred__TypeCtorInfo_58_58 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 3866 "hlds.make_hlds.add_pred.c"
    hlds__make_hlds__add_pred__TypeCtorInfo_59_59 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 442 "add_pred.m"
    {
#line 442 "add_pred.m"
      mercury__map__lookup_3_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_58_58, hlds__make_hlds__add_pred__TypeCtorInfo_59_59, hlds__make_hlds__add_pred__Preds0_33, ((MR_Box) (hlds__make_hlds__add_pred__PredId_31)), &hlds__make_hlds__add_pred__conv0_PredInfo0_34);
    }
#line 442 "add_pred.m"
    hlds__make_hlds__add_pred__PredInfo0_34 = ((MR_Word) hlds__make_hlds__add_pred__conv0_PredInfo0_34);
#line 444 "add_pred.m"
    {
#line 444 "add_pred.m"
      hlds__make_hlds__add_pred__module_do_add_mode_11_p_0(hlds__make_hlds__add_pred__InstVarSet_14, hlds__make_hlds__add_pred__Arity_27, hlds__make_hlds__add_pred__Modes_16, hlds__make_hlds__add_pred__MaybeDet_17, hlds__make_hlds__add_pred__IsClassMethod_21, hlds__make_hlds__add_pred__MContext_19, hlds__make_hlds__add_pred__PredInfo0_34, &hlds__make_hlds__add_pred__PredInfo_35, &hlds__make_hlds__add_pred__ProcId_36, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_48_48, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_42);
    }
#line 446 "add_pred.m"
    {
#line 446 "add_pred.m"
      mercury__map__det_update_4_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_58_58, hlds__make_hlds__add_pred__TypeCtorInfo_59_59, ((MR_Box) (hlds__make_hlds__add_pred__PredId_31)), ((MR_Box) (hlds__make_hlds__add_pred__PredInfo_35)), hlds__make_hlds__add_pred__Preds0_33, &hlds__make_hlds__add_pred__Preds_37);
    }
#line 447 "add_pred.m"
    {
#line 447 "add_pred.m"
      hlds__pred_table__predicate_table_set_preds_3_p_0(hlds__make_hlds__add_pred__Preds_37, hlds__make_hlds__add_pred__PredicateTable1_32, &hlds__make_hlds__add_pred__PredicateTable_38);
    }
#line 448 "add_pred.m"
    {
#line 448 "add_pred.m"
      hlds__hlds_module__module_info_set_predicate_table_3_p_0(hlds__make_hlds__add_pred__PredicateTable_38, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_45_45, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_40);
    }
#line 449 "add_pred.m"
    {
#line 449 "add_pred.m"
      MR_Word base;
#line 449 "add_pred.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 449 "add_pred.m"
      *hlds__make_hlds__add_pred__PredProcId_22 = base;
#line 449 "add_pred.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredId_31));
#line 449 "add_pred.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__add_pred__ProcId_36));
#line 449 "add_pred.m"
    }
#line 417 "add_pred.m"
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
#line 402 "add_pred.m"
  {
#line 402 "add_pred.m"
    MR_bool hlds__make_hlds__add_pred__succeeded;
#line 402 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Procs0_27;
#line 402 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__ArgTypes_28;
#line 402 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__VarNameRemap_29;
#line 402 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__NewProc0_30;
#line 402 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__NewProc_31;
#line 402 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Procs_32;

#line 403 "add_pred.m"
    {
#line 403 "add_pred.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__make_hlds__add_pred__PredInfo0_24, &hlds__make_hlds__add_pred__Procs0_27);
    }
#line 404 "add_pred.m"
    {
#line 404 "add_pred.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(hlds__make_hlds__add_pred__PredInfo0_24, &hlds__make_hlds__add_pred__ArgTypes_28);
    }
#line 405 "add_pred.m"
    {
#line 405 "add_pred.m"
      hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(hlds__make_hlds__add_pred__PredInfo0_24, &hlds__make_hlds__add_pred__VarNameRemap_29);
    }
#line 406 "add_pred.m"
    {
#line 406 "add_pred.m"
      hlds__hlds_pred__next_mode_id_2_p_0(hlds__make_hlds__add_pred__Procs0_27, hlds__make_hlds__add_pred__ModeId_26);
    }
#line 407 "add_pred.m"
    {
#line 407 "add_pred.m"
      hlds__hlds_pred__proc_info_init_12_p_0(hlds__make_hlds__add_pred__Context_21, hlds__make_hlds__add_pred__Arity_15, hlds__make_hlds__add_pred__ArgTypes_28, hlds__make_hlds__add_pred__MaybeDeclaredArgModes_17, hlds__make_hlds__add_pred__ArgModes_16, hlds__make_hlds__add_pred__MaybeArgLives_18, hlds__make_hlds__add_pred__DetismDecl_19, hlds__make_hlds__add_pred__MaybeDet_20, hlds__make_hlds__add_pred__IsAddressTaken_22, hlds__make_hlds__add_pred__HasParallelConj_23, hlds__make_hlds__add_pred__VarNameRemap_29, &hlds__make_hlds__add_pred__NewProc0_30);
    }
#line 410 "add_pred.m"
    {
#line 410 "add_pred.m"
      hlds__hlds_pred__proc_info_set_inst_varset_3_p_0(hlds__make_hlds__add_pred__InstVarSet_14, hlds__make_hlds__add_pred__NewProc0_30, &hlds__make_hlds__add_pred__NewProc_31);
    }
#line 411 "add_pred.m"
    {
#line 411 "add_pred.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, *hlds__make_hlds__add_pred__ModeId_26, ((MR_Box) (hlds__make_hlds__add_pred__NewProc_31)), hlds__make_hlds__add_pred__Procs0_27, &hlds__make_hlds__add_pred__Procs_32);
    }
#line 412 "add_pred.m"
    {
#line 412 "add_pred.m"
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(hlds__make_hlds__add_pred__Procs_32, hlds__make_hlds__add_pred__PredInfo0_24, hlds__make_hlds__add_pred__PredInfo_25);
#line 412 "add_pred.m"
      return;
    }
#line 402 "add_pred.m"
  }
#line 40 "add_pred.m"
}

#line 32 "add_pred.m"
void MR_CALL 
hlds__make_hlds__add_pred__module_add_pred_or_func_18_p_0(
#line 32 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Origin_19,
#line 32 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__TypeVarSet_20,
#line 32 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__InstVarSet_21,
#line 32 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__ExistQVars_22,
#line 32 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_23,
#line 32 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__PredName_24,
#line 32 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__TypesAndModes_25,
#line 32 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__MaybeDet_26,
#line 32 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Purity_27,
#line 32 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Constraints_28,
#line 32 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Markers_29,
#line 32 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__Context_30,
#line 32 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__HeadVar__13_13,
#line 32 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__MaybePredProcId_33,
#line 32 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_50,
#line 32 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_51,
#line 32 "add_pred.m"
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_52,
#line 32 "add_pred.m"
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_53)
#line 32 "add_pred.m"
{
#line 104 "add_pred.m"
  {
#line 104 "add_pred.m"
    MR_bool hlds__make_hlds__add_pred__succeeded;
#line 104 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Status_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__HeadVar__13_13, (MR_Integer) 0)));
#line 104 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__NeedQual_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__HeadVar__13_13, (MR_Integer) 1)));
#line 104 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Types_36;
#line 104 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__MaybeModes0_37;
#line 104 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_54_54;
#line 104 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_55_55;
#line 110 "add_pred.m"
    MR_Word hlds__make_hlds__add_pred__Modes0_38;

#line 105 "add_pred.m"
    {
#line 105 "add_pred.m"
      parse_tree__prog_util__split_types_and_modes_3_p_0(hlds__make_hlds__add_pred__TypesAndModes_25, &hlds__make_hlds__add_pred__Types_36, &hlds__make_hlds__add_pred__MaybeModes0_37);
    }
#line 106 "add_pred.m"
    {
#line 106 "add_pred.m"
      hlds__make_hlds__add_pred__add_new_pred_16_p_0(hlds__make_hlds__add_pred__Origin_19, hlds__make_hlds__add_pred__TypeVarSet_20, hlds__make_hlds__add_pred__ExistQVars_22, hlds__make_hlds__add_pred__PredName_24, hlds__make_hlds__add_pred__Types_36, hlds__make_hlds__add_pred__Purity_27, hlds__make_hlds__add_pred__Constraints_28, hlds__make_hlds__add_pred__Markers_29, hlds__make_hlds__add_pred__Context_30, hlds__make_hlds__add_pred__Status_31, hlds__make_hlds__add_pred__NeedQual_32, hlds__make_hlds__add_pred__PredOrFunc_23, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_50, &hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_54_54, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_52, &hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_55_55);
    }
#line 110 "add_pred.m"
    hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__PredOrFunc_23 == (MR_Integer) 0);
#line 110 "add_pred.m"
    if (hlds__make_hlds__add_pred__succeeded)
#line 110 "add_pred.m"
      {
#line 117 "add_pred.m"
        hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__MaybeDet_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 110 "add_pred.m"
        if (hlds__make_hlds__add_pred__succeeded)
#line 110 "add_pred.m"
          {
#line 111 "add_pred.m"
            hlds__make_hlds__add_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pred__MaybeModes0_37)) == (MR_mktag((MR_Integer) 1)));
#line 111 "add_pred.m"
            if (hlds__make_hlds__add_pred__succeeded)
#line 111 "add_pred.m"
              {
#line 111 "add_pred.m"
                hlds__make_hlds__add_pred__Modes0_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__MaybeModes0_37, (MR_Integer) 0)));
#line 116 "add_pred.m"
                hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__Modes0_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 111 "add_pred.m"
              }
#line 110 "add_pred.m"
          }
#line 110 "add_pred.m"
      }
#line 4107 "hlds.make_hlds.add_pred.c"
    if (hlds__make_hlds__add_pred__succeeded)
#line 4109 "hlds.make_hlds.add_pred.c"
      {
#line 149 "add_pred.m"
        *hlds__make_hlds__add_pred__MaybePredProcId_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 148 "add_pred.m"
        *hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_51 = hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_54_54;
#line 148 "add_pred.m"
        *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_53 = hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_55_55;
#line 4117 "hlds.make_hlds.add_pred.c"
      }
#line 4119 "hlds.make_hlds.add_pred.c"
    else
#line 4121 "hlds.make_hlds.add_pred.c"
      {
#line 125 "add_pred.m"
        MR_Word hlds__make_hlds__add_pred__V_40_40;

#line 123 "add_pred.m"
        hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__PredOrFunc_23 == (MR_Integer) 1);
#line 123 "add_pred.m"
        if (hlds__make_hlds__add_pred__succeeded)
#line 123 "add_pred.m"
          {
#line 124 "add_pred.m"
            hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__MaybeModes0_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 123 "add_pred.m"
            if (hlds__make_hlds__add_pred__succeeded)
#line 123 "add_pred.m"
              {
#line 125 "add_pred.m"
                hlds__make_hlds__add_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pred__MaybeDet_26)) == (MR_mktag((MR_Integer) 1)));
#line 125 "add_pred.m"
                if (hlds__make_hlds__add_pred__succeeded)
#line 125 "add_pred.m"
                  hlds__make_hlds__add_pred__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__MaybeDet_26, (MR_Integer) 0)));
#line 123 "add_pred.m"
              }
#line 123 "add_pred.m"
          }
#line 4148 "hlds.make_hlds.add_pred.c"
        if (hlds__make_hlds__add_pred__succeeded)
#line 4150 "hlds.make_hlds.add_pred.c"
          {
#line 4152 "hlds.make_hlds.add_pred.c"
            MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_63_63;
#line 4154 "hlds.make_hlds.add_pred.c"
            MR_Integer hlds__make_hlds__add_pred__Arity_41;
#line 4156 "hlds.make_hlds.add_pred.c"
            MR_Integer hlds__make_hlds__add_pred__FuncArity_42;
#line 4158 "hlds.make_hlds.add_pred.c"
            MR_Word hlds__make_hlds__add_pred__InMode_43;
#line 4160 "hlds.make_hlds.add_pred.c"
            MR_Word hlds__make_hlds__add_pred__InModes_44;
#line 4162 "hlds.make_hlds.add_pred.c"
            MR_Word hlds__make_hlds__add_pred__OutMode_45;
#line 4164 "hlds.make_hlds.add_pred.c"
            MR_Word hlds__make_hlds__add_pred__Modes_47;
#line 4166 "hlds.make_hlds.add_pred.c"
            MR_Word hlds__make_hlds__add_pred__IsClassMethod_48;
#line 4168 "hlds.make_hlds.add_pred.c"
            MR_Word hlds__make_hlds__add_pred__PredProcId_49;
#line 4170 "hlds.make_hlds.add_pred.c"
            MR_Word hlds__make_hlds__add_pred__V_57_57;

#line 127 "add_pred.m"
            {
#line 127 "add_pred.m"
              mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__make_hlds__add_pred__Types_36, &hlds__make_hlds__add_pred__Arity_41);
            }
#line 128 "add_pred.m"
            {
#line 128 "add_pred.m"
              parse_tree__prog_util__adjust_func_arity_3_p_1((MR_Integer) 1, &hlds__make_hlds__add_pred__FuncArity_42, hlds__make_hlds__add_pred__Arity_41);
            }
#line 129 "add_pred.m"
            {
#line 129 "add_pred.m"
              parse_tree__prog_mode__in_mode_1_p_0(&hlds__make_hlds__add_pred__InMode_43);
            }
#line 4188 "hlds.make_hlds.add_pred.c"
            hlds__make_hlds__add_pred__TypeCtorInfo_63_63 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 130 "add_pred.m"
            {
#line 130 "add_pred.m"
              mercury__list__duplicate_3_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_63_63, hlds__make_hlds__add_pred__FuncArity_42, ((MR_Box) (hlds__make_hlds__add_pred__InMode_43)), &hlds__make_hlds__add_pred__InModes_44);
            }
#line 131 "add_pred.m"
            {
#line 131 "add_pred.m"
              parse_tree__prog_mode__out_mode_1_p_0(&hlds__make_hlds__add_pred__OutMode_45);
            }
#line 132 "add_pred.m"
            {
#line 132 "add_pred.m"
              hlds__make_hlds__add_pred__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 132 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_57_57, 0) = ((MR_Box) (hlds__make_hlds__add_pred__OutMode_45));
#line 132 "add_pred.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 132 "add_pred.m"
            }
#line 132 "add_pred.m"
            {
#line 132 "add_pred.m"
              mercury__list__append_3_p_1(hlds__make_hlds__add_pred__TypeCtorInfo_63_63, hlds__make_hlds__add_pred__InModes_44, hlds__make_hlds__add_pred__V_57_57, &hlds__make_hlds__add_pred__Modes_47);
            }
#line 139 "add_pred.m"
            {
#line 139 "add_pred.m"
              hlds__make_hlds__add_pred__succeeded = hlds__hlds_pred__check_marker_2_p_0(hlds__make_hlds__add_pred__Markers_29, (MR_Integer) 9);
            }
#line 141 "add_pred.m"
            if (hlds__make_hlds__add_pred__succeeded)
#line 140 "add_pred.m"
              hlds__make_hlds__add_pred__IsClassMethod_48 = (MR_Integer) 1;
#line 141 "add_pred.m"
            else
#line 142 "add_pred.m"
              hlds__make_hlds__add_pred__IsClassMethod_48 = (MR_Integer) 0;
#line 144 "add_pred.m"
            {
#line 144 "add_pred.m"
              hlds__make_hlds__add_pred__module_add_mode_13_p_0(hlds__make_hlds__add_pred__InstVarSet_21, hlds__make_hlds__add_pred__PredName_24, hlds__make_hlds__add_pred__Modes_47, hlds__make_hlds__add_pred__MaybeDet_26, hlds__make_hlds__add_pred__Status_31, hlds__make_hlds__add_pred__Context_30, hlds__make_hlds__add_pred__PredOrFunc_23, hlds__make_hlds__add_pred__IsClassMethod_48, &hlds__make_hlds__add_pred__PredProcId_49, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_54_54, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_51, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_55_55, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_53);
            }
#line 146 "add_pred.m"
            {
#line 146 "add_pred.m"
              MR_Word base;
#line 146 "add_pred.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 146 "add_pred.m"
              *hlds__make_hlds__add_pred__MaybePredProcId_33 = base;
#line 146 "add_pred.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredProcId_49));
#line 146 "add_pred.m"
            }
#line 4245 "hlds.make_hlds.add_pred.c"
          }
#line 4247 "hlds.make_hlds.add_pred.c"
        else
#line 147 "add_pred.m"
        if ((hlds__make_hlds__add_pred__MaybeModes0_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 148 "add_pred.m"
          {
#line 149 "add_pred.m"
            *hlds__make_hlds__add_pred__MaybePredProcId_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 148 "add_pred.m"
            *hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_51 = hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_54_54;
#line 148 "add_pred.m"
            *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_53 = hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_55_55;
#line 148 "add_pred.m"
          }
#line 147 "add_pred.m"
        else
#line 138 "add_pred.m"
          {
#line 138 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__Modes_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__MaybeModes0_37, (MR_Integer) 0)));
#line 138 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__IsClassMethod_68;
#line 138 "add_pred.m"
            MR_Word hlds__make_hlds__add_pred__PredProcId_69;

#line 139 "add_pred.m"
            {
#line 139 "add_pred.m"
              hlds__make_hlds__add_pred__succeeded = hlds__hlds_pred__check_marker_2_p_0(hlds__make_hlds__add_pred__Markers_29, (MR_Integer) 9);
            }
#line 141 "add_pred.m"
            if (hlds__make_hlds__add_pred__succeeded)
#line 140 "add_pred.m"
              hlds__make_hlds__add_pred__IsClassMethod_68 = (MR_Integer) 1;
#line 141 "add_pred.m"
            else
#line 142 "add_pred.m"
              hlds__make_hlds__add_pred__IsClassMethod_68 = (MR_Integer) 0;
#line 144 "add_pred.m"
            {
#line 144 "add_pred.m"
              hlds__make_hlds__add_pred__module_add_mode_13_p_0(hlds__make_hlds__add_pred__InstVarSet_21, hlds__make_hlds__add_pred__PredName_24, hlds__make_hlds__add_pred__Modes_67, hlds__make_hlds__add_pred__MaybeDet_26, hlds__make_hlds__add_pred__Status_31, hlds__make_hlds__add_pred__Context_30, hlds__make_hlds__add_pred__PredOrFunc_23, hlds__make_hlds__add_pred__IsClassMethod_68, &hlds__make_hlds__add_pred__PredProcId_69, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_54_54, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_51, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_55_55, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_53);
            }
#line 146 "add_pred.m"
            {
#line 146 "add_pred.m"
              MR_Word base;
#line 146 "add_pred.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 146 "add_pred.m"
              *hlds__make_hlds__add_pred__MaybePredProcId_33 = base;
#line 146 "add_pred.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredProcId_69));
#line 146 "add_pred.m"
            }
#line 138 "add_pred.m"
          }
#line 4304 "hlds.make_hlds.add_pred.c"
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
