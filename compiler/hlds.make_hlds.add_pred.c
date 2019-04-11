/*
** Automatically generated from `add_pred.m'
** by the Mercury compiler,
** version rotd-2017-06-02
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
#include "hlds.hlds_dependency_graph.mih"
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
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
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
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
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




static void MR_CALL 
hlds__make_hlds__add_pred__maybe_check_field_access_function_7_p_0(
  MR_Word hlds__make_hlds__add_pred__ModuleInfo_8,
  MR_Word hlds__make_hlds__add_pred__FuncName_9,
  MR_Integer hlds__make_hlds__add_pred__FuncArity_10,
  MR_Word hlds__make_hlds__add_pred__FuncStatus_11,
  MR_Word hlds__make_hlds__add_pred__Context_12,
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_16,
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_17);

static void MR_CALL 
hlds__make_hlds__add_pred__preds_do_add_implicit_12_p_0(
  MR_Word hlds__make_hlds__add_pred__ModuleInfo_13,
  MR_Word hlds__make_hlds__add_pred__ModuleName_14,
  MR_Word hlds__make_hlds__add_pred__PredName_15,
  MR_Integer hlds__make_hlds__add_pred__Arity_16,
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_17,
  MR_Word hlds__make_hlds__add_pred__PredStatus_18,
  MR_Word hlds__make_hlds__add_pred__Context_19,
  MR_Word hlds__make_hlds__add_pred__Origin_20,
  MR_Word hlds__make_hlds__add_pred__ClausesInfo_21,
  MR_Word * hlds__make_hlds__add_pred__PredId_22,
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_PredicateTable_0_42,
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_PredicateTable_43);

static void MR_CALL 
hlds__make_hlds__add_pred__unqualified_pred_error_5_p_0(
  MR_Word hlds__make_hlds__add_pred__PredName_6,
  MR_Integer hlds__make_hlds__add_pred__Arity_7,
  MR_Word hlds__make_hlds__add_pred__Context_8,
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_13,
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_14);

static void MR_CALL 
hlds__make_hlds__add_pred__unspecified_det_for_exported_6_p_0(
  MR_Word hlds__make_hlds__add_pred__Name_7,
  MR_Integer hlds__make_hlds__add_pred__Arity_8,
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_9,
  MR_Word hlds__make_hlds__add_pred__Context_10,
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_15,
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_16);

static void MR_CALL 
hlds__make_hlds__add_pred__unspecified_det_for_method_6_p_0(
  MR_Word hlds__make_hlds__add_pred__Name_7,
  MR_Integer hlds__make_hlds__add_pred__Arity_8,
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_9,
  MR_Word hlds__make_hlds__add_pred__Context_10,
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_15,
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_16);

static void MR_CALL 
hlds__make_hlds__add_pred__unspecified_det_for_local_6_p_0(
  MR_Word hlds__make_hlds__add_pred__Name_7,
  MR_Integer hlds__make_hlds__add_pred__Arity_8,
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_9,
  MR_Word hlds__make_hlds__add_pred__Context_10,
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_18,
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_19);

static MR_String MR_CALL 
hlds__make_hlds__add_pred__decl_section_to_string_1_f_0(
  MR_Word hlds__make_hlds__add_pred__HeadVar__1_1);

static void MR_CALL 
hlds__make_hlds__add_pred__module_do_add_mode_13_p_0(
  MR_Word hlds__make_hlds__add_pred__Context_14,
  MR_Integer hlds__make_hlds__add_pred__ItemNumber_15,
  MR_Word hlds__make_hlds__add_pred__MaybeItemMercuryStatus_16,
  MR_Integer hlds__make_hlds__add_pred__Arity_17,
  MR_Word hlds__make_hlds__add_pred__InstVarSet_18,
  MR_Word hlds__make_hlds__add_pred__Modes_19,
  MR_Word hlds__make_hlds__add_pred__MaybeDet_20,
  MR_Word hlds__make_hlds__add_pred__IsClassMethod_21,
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_51,
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_52,
  MR_Integer * hlds__make_hlds__add_pred__ProcId_23,
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_53,
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_54);

static void MR_CALL 
hlds__make_hlds__add_pred__add_builtin_5_p_0(
  MR_Word hlds__make_hlds__add_pred__PredId_6,
  MR_Word hlds__make_hlds__add_pred__Types_7,
  MR_Word hlds__make_hlds__add_pred__CompilationTarget_8,
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_60,
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_61);

static MR_Word MR_CALL 
hlds__make_hlds__add_pred__item_decl_section_1_f_0(
  MR_Word hlds__make_hlds__add_pred__ItemExport_3);

static void MR_CALL 
hlds__make_hlds__add_pred__add_new_pred_19_p_0(
  MR_Word hlds__make_hlds__add_pred__Origin_20,
  MR_Word hlds__make_hlds__add_pred__Context_21,
  MR_Integer hlds__make_hlds__add_pred__ItemNumber_22,
  MR_Word hlds__make_hlds__add_pred__MaybeItemMercuryStatus_23,
  MR_Word hlds__make_hlds__add_pred__PredStatus0_24,
  MR_Word hlds__make_hlds__add_pred__NeedQual_25,
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_26,
  MR_Word hlds__make_hlds__add_pred__PredName_27,
  MR_Word hlds__make_hlds__add_pred__TVarSet_28,
  MR_Word hlds__make_hlds__add_pred__ExistQVars_29,
  MR_Word hlds__make_hlds__add_pred__Types_30,
  MR_Word hlds__make_hlds__add_pred__Constraints_31,
  MR_Word hlds__make_hlds__add_pred__MaybeModes_32,
  MR_Word hlds__make_hlds__add_pred__Purity_33,
  MR_Word hlds__make_hlds__add_pred__Markers0_34,
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_73,
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_74,
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_75,
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_76);


static /* final */ const MR_Box hlds__make_hlds__add_pred_scalar_common_1[70][2];

static /* final */ const MR_Box hlds__make_hlds__add_pred_scalar_common_2[1][4];

static /* final */ const MR_Box hlds__make_hlds__add_pred_scalar_common_3[2][1];

static /* final */ const MR_Box hlds__make_hlds__add_pred_scalar_common_5[2][3];


/* sealed */ struct hlds__make_hlds__add_pred__vector_common_type_4_0_s {
  const MR_String hlds__make_hlds__add_pred__vector_common_type_4_0__vct_4_f_0;
  const MR_Integer hlds__make_hlds__add_pred__vector_common_type_4_0__vct_4_f_1;
};

static /* final */ const struct hlds__make_hlds__add_pred__vector_common_type_4_0_s hlds__make_hlds__add_pred_vector_common_4[4];



static /* final */ const MR_Box hlds__make_hlds__add_pred_scalar_common_1[70][2] = {
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the modes of its arguments."))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[3])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declares a determinism without declaring"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 15)),
    ((MR_Box) ((MR_String) "mode"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[3])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "so it may not have a separate mode declaration."))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[3])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "combined with a mode declaration,"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[15])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[17])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of local predicates.)"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[3])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "to automatically infer the determinism"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[20])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "option if you want the compiler"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[22])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--infer-det"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[24])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Use the"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[26])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "option."))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[28])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--no-infer-det"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[30])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "you specified the"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[32])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "(This is an error because"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[34])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should have been qualified by the parser."))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[3])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "must also be exported."))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[3])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: a field access function for an exported field"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[40])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[42])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[43])))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: predicate"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: mode declaration in the"))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "section"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "whose"))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in the"))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "has its"))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: no determinism declaration for local"))
  },
  /* row 63 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[36])))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pred_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: no determinism declaration"))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for type class method"))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: no determinism declaration for exported"))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Internal error: the unqualified predicate name"))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In declaration of"))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pred_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 181)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pred_scalar_common_3[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pred_scalar_common_5[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[48]))),
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



static void MR_CALL 
hlds__make_hlds__add_pred__maybe_check_field_access_function_7_p_0(
  MR_Word hlds__make_hlds__add_pred__ModuleInfo_8,
  MR_Word hlds__make_hlds__add_pred__FuncName_9,
  MR_Integer hlds__make_hlds__add_pred__FuncArity_10,
  MR_Word hlds__make_hlds__add_pred__FuncStatus_11,
  MR_Word hlds__make_hlds__add_pred__Context_12,
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_16,
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_17)
{
  {
    MR_bool hlds__make_hlds__add_pred__succeeded;
    MR_Word hlds__make_hlds__add_pred__FieldName_15;
    MR_Integer hlds__make_hlds__add_pred__Var_19;
    MR_Word hlds__make_hlds__add_pred__AccessType_14;

    {
      hlds__make_hlds__add_pred__succeeded = hlds__hlds_pred__is_field_access_function_name_5_p_0(hlds__make_hlds__add_pred__ModuleInfo_8, hlds__make_hlds__add_pred__FuncName_9, &hlds__make_hlds__add_pred__Var_19, &hlds__make_hlds__add_pred__AccessType_14, &hlds__make_hlds__add_pred__FieldName_15);
    }
    if (hlds__make_hlds__add_pred__succeeded)
      hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__FuncArity_10 == hlds__make_hlds__add_pred__Var_19);
    if (hlds__make_hlds__add_pred__succeeded)
      {
        MR_Integer hlds__make_hlds__add_pred__PredArity_30;
        MR_Word hlds__make_hlds__add_pred__FuncCallId_31;
        MR_Word hlds__make_hlds__add_pred__CtorFieldTable_32;
        MR_Word hlds__make_hlds__add_pred__TypeInfo_39_49;
        MR_Word hlds__make_hlds__add_pred__FieldDefn_33;
        MR_Word hlds__make_hlds__add_pred__DefnStatus_35;
        MR_Word hlds__make_hlds__add_pred__Var_41;
        MR_Word hlds__make_hlds__add_pred__Var_43;
        MR_Word hlds__make_hlds__add_pred__Var_48;
        MR_Box hlds__make_hlds__add_pred__conv0_Var_41;
        MR_Word hlds__make_hlds__add_pred__Var_44;
        MR_Word hlds__make_hlds__add_pred__Var_34;
        MR_Word hlds__make_hlds__add_pred__Var_36;
        MR_Word hlds__make_hlds__add_pred__Var_37;
        MR_Integer hlds__make_hlds__add_pred__Var_38;

        {
          parse_tree__prog_util__adjust_func_arity_3_p_0((MR_Integer) 1, hlds__make_hlds__add_pred__FuncArity_10, &hlds__make_hlds__add_pred__PredArity_30);
        }
        {
          hlds__make_hlds__add_pred__FuncCallId_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__FuncCallId_31, 0) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__FuncCallId_31, 1) = ((MR_Box) (hlds__make_hlds__add_pred__FuncName_9));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__FuncCallId_31, 2) = ((MR_Box) (hlds__make_hlds__add_pred__PredArity_30));
        }
        {
          hlds__hlds_module__module_info_get_ctor_field_table_2_p_0(hlds__make_hlds__add_pred__ModuleInfo_8, &hlds__make_hlds__add_pred__CtorFieldTable_32);
        }
        {
          hlds__make_hlds__add_pred__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[2], hlds__make_hlds__add_pred__CtorFieldTable_32, ((MR_Box) (hlds__make_hlds__add_pred__FieldName_15)), &hlds__make_hlds__add_pred__conv0_Var_41);
        }
        if (hlds__make_hlds__add_pred__succeeded)
          {
            hlds__make_hlds__add_pred__Var_41 = ((MR_Word) hlds__make_hlds__add_pred__conv0_Var_41);
            hlds__make_hlds__add_pred__succeeded = MR_TRUE;
          }
        if (hlds__make_hlds__add_pred__succeeded)
          {
            hlds__make_hlds__add_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pred__Var_41)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__make_hlds__add_pred__succeeded)
              {
                hlds__make_hlds__add_pred__FieldDefn_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_41, (MR_Integer) 0)));
                hlds__make_hlds__add_pred__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_41, (MR_Integer) 1)));
                hlds__make_hlds__add_pred__TypeInfo_39_49 = (MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[2];
                {
                  hlds__make_hlds__add_pred__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__add_pred__TypeInfo_39_49, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (hlds__make_hlds__add_pred__Var_48)));
                }
                if (hlds__make_hlds__add_pred__succeeded)
                  {
                    hlds__make_hlds__add_pred__Var_44 = (MR_Word) hlds__make_hlds__add_pred__FuncStatus_11;
                    hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__Var_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                    hlds__make_hlds__add_pred__succeeded = !(hlds__make_hlds__add_pred__succeeded);
                    if (hlds__make_hlds__add_pred__succeeded)
                      {
                        hlds__make_hlds__add_pred__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__FieldDefn_33, (MR_Integer) 0)));
                        hlds__make_hlds__add_pred__DefnStatus_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__FieldDefn_33, (MR_Integer) 1)));
                        hlds__make_hlds__add_pred__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__FieldDefn_33, (MR_Integer) 2)));
                        hlds__make_hlds__add_pred__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__FieldDefn_33, (MR_Integer) 3)));
                        hlds__make_hlds__add_pred__Var_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__FieldDefn_33, (MR_Integer) 4)));
                        hlds__make_hlds__add_pred__Var_43 = (MR_Word) hlds__make_hlds__add_pred__DefnStatus_35;
                        hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__Var_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                      }
                  }
              }
          }
        if (hlds__make_hlds__add_pred__succeeded)
          {
            MR_Word hlds__make_hlds__add_pred__Pieces_55;
            MR_Word hlds__make_hlds__add_pred__Msg_56;
            MR_Word hlds__make_hlds__add_pred__Spec_57;
            MR_Word hlds__make_hlds__add_pred__Var_60;
            MR_Word hlds__make_hlds__add_pred__Var_61;
            MR_Word hlds__make_hlds__add_pred__Var_76;
            MR_Word hlds__make_hlds__add_pred__Var_77;
            MR_Word hlds__make_hlds__add_pred__Var_81;

            {
              hlds__make_hlds__add_pred__Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__Var_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__Var_61, 1) = ((MR_Box) (hlds__make_hlds__add_pred__FuncCallId_31));
            }
            {
              hlds__make_hlds__add_pred__Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_60, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Var_61));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[45])));
            }
            {
              hlds__make_hlds__add_pred__Pieces_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Pieces_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[69])));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Pieces_55, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Var_60));
            }
            {
              hlds__make_hlds__add_pred__Var_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Var_77, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Pieces_55));
            }
            {
              hlds__make_hlds__add_pred__Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_76, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Var_77));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              hlds__make_hlds__add_pred__Msg_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_56, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Context_12));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_56, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Var_76));
            }
            {
              hlds__make_hlds__add_pred__Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_81, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Msg_56));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              hlds__make_hlds__add_pred__Spec_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_57, 2) = ((MR_Box) (hlds__make_hlds__add_pred__Var_81));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_17 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Spec_57));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_16));
            }
          }
        else
          *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_17 = hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_16;
      }
    else
      *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_17 = hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_16;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pred__preds_do_add_implicit_12_p_0(
  MR_Word hlds__make_hlds__add_pred__ModuleInfo_13,
  MR_Word hlds__make_hlds__add_pred__ModuleName_14,
  MR_Word hlds__make_hlds__add_pred__PredName_15,
  MR_Integer hlds__make_hlds__add_pred__Arity_16,
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_17,
  MR_Word hlds__make_hlds__add_pred__PredStatus_18,
  MR_Word hlds__make_hlds__add_pred__Context_19,
  MR_Word hlds__make_hlds__add_pred__Origin_20,
  MR_Word hlds__make_hlds__add_pred__ClausesInfo_21,
  MR_Word * hlds__make_hlds__add_pred__PredId_22,
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_PredicateTable_0_42,
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_PredicateTable_43)
{
  {
    MR_bool hlds__make_hlds__add_pred__succeeded;
    MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_56_56;
    MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_59_59;
    MR_Word hlds__make_hlds__add_pred__Markers0_25;
    MR_Word hlds__make_hlds__add_pred__TVarSet0_26;
    MR_Word hlds__make_hlds__add_pred__TypeVars_27;
    MR_Word hlds__make_hlds__add_pred__TVarSet_28;
    MR_Word hlds__make_hlds__add_pred__Types_29;
    MR_Word hlds__make_hlds__add_pred__Proofs_32;
    MR_Word hlds__make_hlds__add_pred__ConstraintMap_33;
    MR_Word hlds__make_hlds__add_pred__VarNameRemap_34;
    MR_Word hlds__make_hlds__add_pred__PredInfo0_35;
    MR_Word hlds__make_hlds__add_pred__Markers_36;
    MR_Word hlds__make_hlds__add_pred__PredInfo_37;
    MR_Word hlds__make_hlds__add_pred__PredIds_38;
    MR_Word hlds__make_hlds__add_pred__Var_45;

    {
      hlds__hlds_pred__init_markers_1_p_0(&hlds__make_hlds__add_pred__Markers0_25);
    }
    hlds__make_hlds__add_pred__TypeCtorInfo_56_56 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
    {
      mercury__varset__init_1_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_56_56, &hlds__make_hlds__add_pred__TVarSet0_26);
    }
    {
      parse_tree__prog_util__make_n_fresh_vars_5_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_56_56, (MR_String) "T", hlds__make_hlds__add_pred__Arity_16, &hlds__make_hlds__add_pred__TypeVars_27, hlds__make_hlds__add_pred__TVarSet0_26, &hlds__make_hlds__add_pred__TVarSet_28);
    }
    {
      hlds__make_hlds__add_pred__Var_45 = mercury__map__init_0_f_0((MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
    }
    {
      parse_tree__prog_type__var_list_to_type_list_3_p_0(hlds__make_hlds__add_pred__Var_45, hlds__make_hlds__add_pred__TypeVars_27, &hlds__make_hlds__add_pred__Types_29);
    }
    hlds__make_hlds__add_pred__TypeCtorInfo_59_59 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
    {
      mercury__map__init_1_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_59_59, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, &hlds__make_hlds__add_pred__Proofs_32);
    }
    {
      mercury__map__init_1_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, hlds__make_hlds__add_pred__TypeCtorInfo_59_59, &hlds__make_hlds__add_pred__ConstraintMap_33);
    }
    {
      mercury__map__init_1_p_0((MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, &hlds__make_hlds__add_pred__VarNameRemap_34);
    }
    {
      hlds__hlds_pred__pred_info_init_19_p_0(hlds__make_hlds__add_pred__ModuleName_14, hlds__make_hlds__add_pred__PredName_15, hlds__make_hlds__add_pred__Arity_16, hlds__make_hlds__add_pred__PredOrFunc_17, hlds__make_hlds__add_pred__Context_19, hlds__make_hlds__add_pred__Origin_20, hlds__make_hlds__add_pred__PredStatus_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_pred__Markers0_25, hlds__make_hlds__add_pred__Types_29, hlds__make_hlds__add_pred__TVarSet_28, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[47], hlds__make_hlds__add_pred__Proofs_32, hlds__make_hlds__add_pred__ConstraintMap_33, hlds__make_hlds__add_pred__ClausesInfo_21, hlds__make_hlds__add_pred__VarNameRemap_34, &hlds__make_hlds__add_pred__PredInfo0_35);
    }
    {
      hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 2, hlds__make_hlds__add_pred__Markers0_25, &hlds__make_hlds__add_pred__Markers_36);
    }
    {
      hlds__hlds_pred__pred_info_set_markers_3_p_0(hlds__make_hlds__add_pred__Markers_36, hlds__make_hlds__add_pred__PredInfo0_35, &hlds__make_hlds__add_pred__PredInfo_37);
    }
    {
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredicateTable_0_42, (MR_Integer) 0, hlds__make_hlds__add_pred__PredOrFunc_17, hlds__make_hlds__add_pred__PredName_15, hlds__make_hlds__add_pred__Arity_16, &hlds__make_hlds__add_pred__PredIds_38);
    }
    if ((hlds__make_hlds__add_pred__PredIds_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word hlds__make_hlds__add_pred__MQInfo_39;

        {
          hlds__hlds_module__module_info_get_partial_qualifier_info_2_p_0(hlds__make_hlds__add_pred__ModuleInfo_13, &hlds__make_hlds__add_pred__MQInfo_39);
        }
        {
          hlds__pred_table__predicate_table_insert_qual_6_p_0(hlds__make_hlds__add_pred__PredInfo_37, (MR_Integer) 1, hlds__make_hlds__add_pred__MQInfo_39, hlds__make_hlds__add_pred__PredId_22, hlds__make_hlds__add_pred__STATE_VARIABLE_PredicateTable_0_42, hlds__make_hlds__add_pred__STATE_VARIABLE_PredicateTable_43);
        }
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_pred", (MR_String) "predicate \140hlds.make_hlds.add_pred.preds_do_add_implicit\'/12", (MR_String) "search succeeded");
          return;
        }
      }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pred__unqualified_pred_error_5_p_0(
  MR_Word hlds__make_hlds__add_pred__PredName_6,
  MR_Integer hlds__make_hlds__add_pred__Arity_7,
  MR_Word hlds__make_hlds__add_pred__Context_8,
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_13,
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_14)
{
  {
    MR_bool hlds__make_hlds__add_pred__succeeded;
    MR_Word hlds__make_hlds__add_pred__Pieces_10;
    MR_Word hlds__make_hlds__add_pred__Msg_11;
    MR_Word hlds__make_hlds__add_pred__Spec_12;
    MR_Word hlds__make_hlds__add_pred__Var_17;
    MR_Word hlds__make_hlds__add_pred__Var_18;
    MR_Word hlds__make_hlds__add_pred__Var_19;
    MR_Word hlds__make_hlds__add_pred__Var_26;
    MR_Word hlds__make_hlds__add_pred__Var_27;
    MR_Word hlds__make_hlds__add_pred__Var_31;

    {
      hlds__make_hlds__add_pred__Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Var_19, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredName_6));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Var_19, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Arity_7));
    }
    {
      hlds__make_hlds__add_pred__Var_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__Var_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__Var_18, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Var_19));
    }
    {
      hlds__make_hlds__add_pred__Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_17, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Var_18));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[38])));
    }
    {
      hlds__make_hlds__add_pred__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[68])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Pieces_10, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Var_17));
    }
    {
      hlds__make_hlds__add_pred__Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Var_27, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Pieces_10));
    }
    {
      hlds__make_hlds__add_pred__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_26, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Var_27));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_pred__Msg_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_11, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Context_8));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_11, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Var_26));
    }
    {
      hlds__make_hlds__add_pred__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_31, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Msg_11));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_pred__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_12, 2) = ((MR_Box) (hlds__make_hlds__add_pred__Var_31));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_14 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Spec_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_13));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pred__unspecified_det_for_exported_6_p_0(
  MR_Word hlds__make_hlds__add_pred__Name_7,
  MR_Integer hlds__make_hlds__add_pred__Arity_8,
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_9,
  MR_Word hlds__make_hlds__add_pred__Context_10,
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_15,
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_16)
{
  {
    MR_bool hlds__make_hlds__add_pred__succeeded;
    MR_Word hlds__make_hlds__add_pred__Pieces_12;
    MR_Word hlds__make_hlds__add_pred__Msg_13;
    MR_Word hlds__make_hlds__add_pred__Spec_14;
    MR_Word hlds__make_hlds__add_pred__Var_19;
    MR_Word hlds__make_hlds__add_pred__Var_20;
    MR_Word hlds__make_hlds__add_pred__Var_21;
    MR_Word hlds__make_hlds__add_pred__Var_22;
    MR_Word hlds__make_hlds__add_pred__Var_23;
    MR_Word hlds__make_hlds__add_pred__Var_30;
    MR_Word hlds__make_hlds__add_pred__Var_31;
    MR_Word hlds__make_hlds__add_pred__Var_35;

    {
      hlds__make_hlds__add_pred__Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__Var_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__Var_20, 1) = ((MR_Box) (hlds__make_hlds__add_pred__PredOrFunc_9));
    }
    {
      hlds__make_hlds__add_pred__Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Var_23, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Name_7));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Var_23, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Arity_8));
    }
    {
      hlds__make_hlds__add_pred__Var_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__Var_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__Var_22, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Var_23));
    }
    {
      hlds__make_hlds__add_pred__Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_21, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Var_22));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[13])));
    }
    {
      hlds__make_hlds__add_pred__Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_19, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Var_20));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_19, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Var_21));
    }
    {
      hlds__make_hlds__add_pred__Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Pieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[67])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Pieces_12, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Var_19));
    }
    {
      hlds__make_hlds__add_pred__Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Var_31, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Pieces_12));
    }
    {
      hlds__make_hlds__add_pred__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_30, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Var_31));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_pred__Msg_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_13, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Context_10));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_13, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Var_30));
    }
    {
      hlds__make_hlds__add_pred__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_35, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Msg_13));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_pred__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_14, 2) = ((MR_Box) (hlds__make_hlds__add_pred__Var_35));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Spec_14));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_15));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pred__unspecified_det_for_method_6_p_0(
  MR_Word hlds__make_hlds__add_pred__Name_7,
  MR_Integer hlds__make_hlds__add_pred__Arity_8,
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_9,
  MR_Word hlds__make_hlds__add_pred__Context_10,
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_15,
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_16)
{
  {
    MR_bool hlds__make_hlds__add_pred__succeeded;
    MR_Word hlds__make_hlds__add_pred__Pieces_12;
    MR_Word hlds__make_hlds__add_pred__Msg_13;
    MR_Word hlds__make_hlds__add_pred__Spec_14;
    MR_Word hlds__make_hlds__add_pred__Var_19;
    MR_Word hlds__make_hlds__add_pred__Var_22;
    MR_Word hlds__make_hlds__add_pred__Var_23;
    MR_Word hlds__make_hlds__add_pred__Var_24;
    MR_Word hlds__make_hlds__add_pred__Var_25;
    MR_Word hlds__make_hlds__add_pred__Var_26;
    MR_Word hlds__make_hlds__add_pred__Var_33;
    MR_Word hlds__make_hlds__add_pred__Var_34;
    MR_Word hlds__make_hlds__add_pred__Var_38;

    {
      hlds__make_hlds__add_pred__Var_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__Var_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__Var_23, 1) = ((MR_Box) (hlds__make_hlds__add_pred__PredOrFunc_9));
    }
    {
      hlds__make_hlds__add_pred__Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Var_26, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Name_7));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Var_26, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Arity_8));
    }
    {
      hlds__make_hlds__add_pred__Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__Var_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__Var_25, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Var_26));
    }
    {
      hlds__make_hlds__add_pred__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_24, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Var_25));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[13])));
    }
    {
      hlds__make_hlds__add_pred__Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_22, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Var_23));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_22, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Var_24));
    }
    {
      hlds__make_hlds__add_pred__Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[66])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_19, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Var_22));
    }
    {
      hlds__make_hlds__add_pred__Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Pieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[65])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Pieces_12, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Var_19));
    }
    {
      hlds__make_hlds__add_pred__Var_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Var_34, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Pieces_12));
    }
    {
      hlds__make_hlds__add_pred__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_33, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Var_34));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_pred__Msg_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_13, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Context_10));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_13, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Var_33));
    }
    {
      hlds__make_hlds__add_pred__Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_38, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Msg_13));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_pred__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_14, 2) = ((MR_Box) (hlds__make_hlds__add_pred__Var_38));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Spec_14));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_15));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pred__unspecified_det_for_local_6_p_0(
  MR_Word hlds__make_hlds__add_pred__Name_7,
  MR_Integer hlds__make_hlds__add_pred__Arity_8,
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_9,
  MR_Word hlds__make_hlds__add_pred__Context_10,
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_18,
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_19)
{
  {
    MR_bool hlds__make_hlds__add_pred__succeeded;
    MR_Word hlds__make_hlds__add_pred__MainPieces_12;
    MR_Word hlds__make_hlds__add_pred__InnerComponents_14;
    MR_Word hlds__make_hlds__add_pred__Msg_15;
    MR_Word hlds__make_hlds__add_pred__Spec_17;
    MR_Word hlds__make_hlds__add_pred__Var_22;
    MR_Word hlds__make_hlds__add_pred__Var_23;
    MR_Word hlds__make_hlds__add_pred__Var_24;
    MR_Word hlds__make_hlds__add_pred__Var_60;
    MR_Word hlds__make_hlds__add_pred__Var_65;
    MR_Word hlds__make_hlds__add_pred__Var_66;
    MR_Word hlds__make_hlds__add_pred__Var_75;

    {
      hlds__make_hlds__add_pred__Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Var_24, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredOrFunc_9));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Var_24, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Name_7));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Var_24, 2) = ((MR_Box) (hlds__make_hlds__add_pred__Arity_8));
    }
    {
      hlds__make_hlds__add_pred__Var_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__Var_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__Var_23, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Var_24));
    }
    {
      hlds__make_hlds__add_pred__Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_22, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Var_23));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[13])));
    }
    {
      hlds__make_hlds__add_pred__MainPieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__MainPieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[62])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__MainPieces_12, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Var_22));
    }
    {
      hlds__make_hlds__add_pred__Var_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Var_60, 0) = ((MR_Box) (hlds__make_hlds__add_pred__MainPieces_12));
    }
    {
      hlds__make_hlds__add_pred__InnerComponents_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__InnerComponents_14, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Var_60));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__InnerComponents_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[64])));
    }
    {
      hlds__make_hlds__add_pred__Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_66, 0) = ((MR_Box) (((MR_Integer) 181 | (((MR_Integer) 0 << (MR_Integer) 10)))));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_66, 1) = ((MR_Box) (hlds__make_hlds__add_pred__InnerComponents_14));
    }
    {
      hlds__make_hlds__add_pred__Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_65, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Var_66));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_pred__Msg_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_15, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Context_10));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_15, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Var_65));
    }
    {
      hlds__make_hlds__add_pred__Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_75, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Msg_15));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_pred__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_2[0])));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_17, 2) = ((MR_Box) (hlds__make_hlds__add_pred__Var_75));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_19 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Spec_17));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_18));
    }
  }
}

static MR_String MR_CALL 
hlds__make_hlds__add_pred__decl_section_to_string_1_f_0(
  MR_Word hlds__make_hlds__add_pred__HeadVar__1_1)
{
  {
    MR_bool hlds__make_hlds__add_pred__succeeded;
    MR_String hlds__make_hlds__add_pred__HeadVar__2_2;

    switch (hlds__make_hlds__add_pred__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        hlds__make_hlds__add_pred__HeadVar__2_2 = (MR_String) "implementation";
        break;
      case (MR_Integer) 0:
        hlds__make_hlds__add_pred__HeadVar__2_2 = (MR_String) "interface";
        break;
    }
    return hlds__make_hlds__add_pred__HeadVar__2_2;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pred__module_do_add_mode_13_p_0(
  MR_Word hlds__make_hlds__add_pred__Context_14,
  MR_Integer hlds__make_hlds__add_pred__ItemNumber_15,
  MR_Word hlds__make_hlds__add_pred__MaybeItemMercuryStatus_16,
  MR_Integer hlds__make_hlds__add_pred__Arity_17,
  MR_Word hlds__make_hlds__add_pred__InstVarSet_18,
  MR_Word hlds__make_hlds__add_pred__Modes_19,
  MR_Word hlds__make_hlds__add_pred__MaybeDet_20,
  MR_Word hlds__make_hlds__add_pred__IsClassMethod_21,
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_51,
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_52,
  MR_Integer * hlds__make_hlds__add_pred__ProcId_23,
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_53,
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_54)
{
  {
    MR_bool hlds__make_hlds__add_pred__succeeded;
    MR_String hlds__make_hlds__add_pred__PredName_25;
    MR_Word hlds__make_hlds__add_pred__PredOrFunc_26;
    MR_Word hlds__make_hlds__add_pred__DetismDecl_27;
    MR_Word hlds__make_hlds__add_pred__MaybeCurUserDecl_33;
    MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_57_57;
    MR_Word hlds__make_hlds__add_pred__Var_140;

    {
      hlds__make_hlds__add_pred__PredName_25 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_51);
    }
    {
      hlds__make_hlds__add_pred__PredOrFunc_26 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_51);
    }
    if ((hlds__make_hlds__add_pred__MaybeDet_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word hlds__make_hlds__add_pred__PredStatus_28;
        MR_Word hlds__make_hlds__add_pred__PredModule_29;
        MR_Word hlds__make_hlds__add_pred__PredSymName_30;

        hlds__make_hlds__add_pred__DetismDecl_27 = (MR_Integer) 2;
        {
          hlds__hlds_pred__pred_info_get_status_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_51, &hlds__make_hlds__add_pred__PredStatus_28);
        }
        {
          hlds__make_hlds__add_pred__PredModule_29 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_51);
        }
        {
          hlds__make_hlds__add_pred__PredSymName_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__PredSymName_30, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredModule_29));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__PredSymName_30, 1) = ((MR_Box) (hlds__make_hlds__add_pred__PredName_25));
        }
        switch (hlds__make_hlds__add_pred__IsClassMethod_21) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              hlds__make_hlds__add_pred__unspecified_det_for_method_6_p_0(hlds__make_hlds__add_pred__PredSymName_30, hlds__make_hlds__add_pred__Arity_17, hlds__make_hlds__add_pred__PredOrFunc_26, hlds__make_hlds__add_pred__Context_14, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_53, &hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_57_57);
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word hlds__make_hlds__add_pred__IsExported_31;

              {
                hlds__make_hlds__add_pred__IsExported_31 = hlds__status__pred_status_is_exported_1_f_0(hlds__make_hlds__add_pred__PredStatus_28);
              }
              switch (hlds__make_hlds__add_pred__IsExported_31) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    hlds__make_hlds__add_pred__unspecified_det_for_local_6_p_0(hlds__make_hlds__add_pred__PredSymName_30, hlds__make_hlds__add_pred__Arity_17, hlds__make_hlds__add_pred__PredOrFunc_26, hlds__make_hlds__add_pred__Context_14, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_53, &hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_57_57);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    hlds__make_hlds__add_pred__unspecified_det_for_exported_6_p_0(hlds__make_hlds__add_pred__PredSymName_30, hlds__make_hlds__add_pred__Arity_17, hlds__make_hlds__add_pred__PredOrFunc_26, hlds__make_hlds__add_pred__Context_14, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_53, &hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_57_57);
                  }
                  break;
              }
            }
            break;
        }
      }
    else
      {
        hlds__make_hlds__add_pred__DetismDecl_27 = (MR_Integer) 0;
        hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_57_57 = hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_53;
      }
    {
      hlds__hlds_pred__pred_info_get_cur_user_decl_info_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_51, &hlds__make_hlds__add_pred__MaybeCurUserDecl_33);
    }
    if ((hlds__make_hlds__add_pred__MaybeCurUserDecl_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_54 = hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_57_57;
    else
      {
        MR_Word hlds__make_hlds__add_pred__CurUserDecl_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__MaybeCurUserDecl_33, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__add_pred__PredDeclSection_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__CurUserDecl_34, (MR_Integer) 0)))) & (MR_Integer) 1);
        MR_Word hlds__make_hlds__add_pred__PredIsPredMode_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__CurUserDecl_34, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Integer hlds__make_hlds__add_pred___PredDeclItemNumber_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__CurUserDecl_34, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__add_pred__ItemExport_39;
        MR_Word hlds__make_hlds__add_pred__ItemMercuryStatus_38;

        hlds__make_hlds__add_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pred__MaybeItemMercuryStatus_16)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__make_hlds__add_pred__succeeded)
          {
            hlds__make_hlds__add_pred__ItemMercuryStatus_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__MaybeItemMercuryStatus_16, (MR_Integer) 0)));
            hlds__make_hlds__add_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pred__ItemMercuryStatus_38)) == (MR_mktag((MR_Integer) 0)));
            if (hlds__make_hlds__add_pred__succeeded)
              hlds__make_hlds__add_pred__ItemExport_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ItemMercuryStatus_38, (MR_Integer) 0)));
          }
        if (hlds__make_hlds__add_pred__succeeded)
          {
            MR_Word hlds__make_hlds__add_pred__ModeDeclSection_40;
            MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_106_106;

            {
              hlds__make_hlds__add_pred__ModeDeclSection_40 = hlds__make_hlds__add_pred__item_decl_section_1_f_0(hlds__make_hlds__add_pred__ItemExport_39);
            }
            hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__PredDeclSection_35 == hlds__make_hlds__add_pred__ModeDeclSection_40);
            if (hlds__make_hlds__add_pred__succeeded)
              hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_106_106 = hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_57_57;
            else
              {
                MR_String hlds__make_hlds__add_pred__ModeSectionStr_41;
                MR_String hlds__make_hlds__add_pred__PredSectionStr_42;
                MR_Word hlds__make_hlds__add_pred__SectionPieces_43;
                MR_Word hlds__make_hlds__add_pred__SectionMsg_44;
                MR_Word hlds__make_hlds__add_pred__SectionSpec_45;
                MR_Word hlds__make_hlds__add_pred__Var_60;
                MR_Word hlds__make_hlds__add_pred__Var_61;
                MR_Word hlds__make_hlds__add_pred__Var_62;
                MR_Word hlds__make_hlds__add_pred__Var_65;
                MR_Word hlds__make_hlds__add_pred__Var_68;
                MR_Word hlds__make_hlds__add_pred__Var_69;
                MR_Word hlds__make_hlds__add_pred__Var_70;
                MR_Word hlds__make_hlds__add_pred__Var_71;
                MR_Word hlds__make_hlds__add_pred__Var_72;
                MR_Word hlds__make_hlds__add_pred__Var_73;
                MR_Word hlds__make_hlds__add_pred__Var_74;
                MR_Word hlds__make_hlds__add_pred__Var_77;
                MR_Word hlds__make_hlds__add_pred__Var_80;
                MR_Word hlds__make_hlds__add_pred__Var_82;
                MR_Word hlds__make_hlds__add_pred__Var_85;
                MR_Word hlds__make_hlds__add_pred__Var_88;
                MR_Word hlds__make_hlds__add_pred__Var_91;
                MR_Word hlds__make_hlds__add_pred__Var_92;
                MR_Word hlds__make_hlds__add_pred__Var_99;
                MR_Word hlds__make_hlds__add_pred__Var_100;
                MR_Word hlds__make_hlds__add_pred__Var_104;

                {
                  hlds__make_hlds__add_pred__ModeSectionStr_41 = hlds__make_hlds__add_pred__decl_section_to_string_1_f_0(hlds__make_hlds__add_pred__ModeDeclSection_40);
                }
                {
                  hlds__make_hlds__add_pred__PredSectionStr_42 = hlds__make_hlds__add_pred__decl_section_to_string_1_f_0(hlds__make_hlds__add_pred__PredDeclSection_35);
                }
                {
                  hlds__make_hlds__add_pred__Var_61 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pred__Var_61, 0) = ((MR_Box) (hlds__make_hlds__add_pred__ModeSectionStr_41));
                }
                {
                  hlds__make_hlds__add_pred__Var_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__Var_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__Var_69, 1) = ((MR_Box) (hlds__make_hlds__add_pred__PredOrFunc_26));
                }
                {
                  hlds__make_hlds__add_pred__Var_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Var_73, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredName_25));
                }
                {
                  hlds__make_hlds__add_pred__Var_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Var_72, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Var_73));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Var_72, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Arity_17));
                }
                {
                  hlds__make_hlds__add_pred__Var_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__Var_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__Var_71, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Var_72));
                }
                {
                  hlds__make_hlds__add_pred__Var_92 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pred__Var_92, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredSectionStr_42));
                }
                {
                  hlds__make_hlds__add_pred__Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_91, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Var_92));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[13])));
                }
                {
                  hlds__make_hlds__add_pred__Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_88, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[59])));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_88, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Var_91));
                }
                {
                  hlds__make_hlds__add_pred__Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_85, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[58])));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_85, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Var_88));
                }
                {
                  hlds__make_hlds__add_pred__Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_82, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[57])));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_82, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Var_85));
                }
                {
                  hlds__make_hlds__add_pred__Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_80, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Var_69));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_80, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Var_82));
                }
                {
                  hlds__make_hlds__add_pred__Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[56])));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_77, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Var_80));
                }
                {
                  hlds__make_hlds__add_pred__Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[55])));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_74, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Var_77));
                }
                {
                  hlds__make_hlds__add_pred__Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_70, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Var_71));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_70, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Var_74));
                }
                {
                  hlds__make_hlds__add_pred__Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_68, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Var_69));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_68, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Var_70));
                }
                {
                  hlds__make_hlds__add_pred__Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[54])));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_65, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Var_68));
                }
                {
                  hlds__make_hlds__add_pred__Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[53])));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_62, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Var_65));
                }
                {
                  hlds__make_hlds__add_pred__Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_60, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Var_61));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_60, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Var_62));
                }
                {
                  hlds__make_hlds__add_pred__SectionPieces_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__SectionPieces_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[52])));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__SectionPieces_43, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Var_60));
                }
                {
                  hlds__make_hlds__add_pred__Var_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Var_100, 0) = ((MR_Box) (hlds__make_hlds__add_pred__SectionPieces_43));
                }
                {
                  hlds__make_hlds__add_pred__Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_99, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Var_100));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  hlds__make_hlds__add_pred__SectionMsg_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__SectionMsg_44, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Context_14));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__SectionMsg_44, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Var_99));
                }
                {
                  hlds__make_hlds__add_pred__Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_104, 0) = ((MR_Box) (hlds__make_hlds__add_pred__SectionMsg_44));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  hlds__make_hlds__add_pred__SectionSpec_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__SectionSpec_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__SectionSpec_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__SectionSpec_45, 2) = ((MR_Box) (hlds__make_hlds__add_pred__Var_104));
                }
                {
                  hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_106_106, 0) = ((MR_Box) (hlds__make_hlds__add_pred__SectionSpec_45));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_106_106, 1) = ((MR_Box) (hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_57_57));
                }
              }
            switch (hlds__make_hlds__add_pred__PredIsPredMode_36) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_54 = hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_106_106;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word hlds__make_hlds__add_pred__PredModePieces_46;
                  MR_Word hlds__make_hlds__add_pred__PredModeMsg_47;
                  MR_Word hlds__make_hlds__add_pred__PredModeSpec_48;
                  MR_Word hlds__make_hlds__add_pred__Var_109;
                  MR_Word hlds__make_hlds__add_pred__Var_110;
                  MR_Word hlds__make_hlds__add_pred__Var_111;
                  MR_Word hlds__make_hlds__add_pred__Var_112;
                  MR_Word hlds__make_hlds__add_pred__Var_113;
                  MR_Word hlds__make_hlds__add_pred__Var_114;
                  MR_Word hlds__make_hlds__add_pred__Var_115;
                  MR_Word hlds__make_hlds__add_pred__Var_118;
                  MR_Word hlds__make_hlds__add_pred__Var_132;
                  MR_Word hlds__make_hlds__add_pred__Var_133;
                  MR_Word hlds__make_hlds__add_pred__Var_137;

                  {
                    hlds__make_hlds__add_pred__Var_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__Var_110, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__Var_110, 1) = ((MR_Box) (hlds__make_hlds__add_pred__PredOrFunc_26));
                  }
                  {
                    hlds__make_hlds__add_pred__Var_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Var_114, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredName_25));
                  }
                  {
                    hlds__make_hlds__add_pred__Var_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Var_113, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Var_114));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Var_113, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Arity_17));
                  }
                  {
                    hlds__make_hlds__add_pred__Var_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__Var_112, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__Var_112, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Var_113));
                  }
                  {
                    hlds__make_hlds__add_pred__Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_118, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Var_110));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[18])));
                  }
                  {
                    hlds__make_hlds__add_pred__Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_115, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[61])));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_115, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Var_118));
                  }
                  {
                    hlds__make_hlds__add_pred__Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_111, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Var_112));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_111, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Var_115));
                  }
                  {
                    hlds__make_hlds__add_pred__Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_109, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Var_110));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_109, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Var_111));
                  }
                  {
                    hlds__make_hlds__add_pred__PredModePieces_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__PredModePieces_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[60])));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__PredModePieces_46, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Var_109));
                  }
                  {
                    hlds__make_hlds__add_pred__Var_133 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Var_133, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredModePieces_46));
                  }
                  {
                    hlds__make_hlds__add_pred__Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_132, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Var_133));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_132, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    hlds__make_hlds__add_pred__PredModeMsg_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__PredModeMsg_47, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Context_14));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__PredModeMsg_47, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Var_132));
                  }
                  {
                    hlds__make_hlds__add_pred__Var_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_137, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredModeMsg_47));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_137, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    hlds__make_hlds__add_pred__PredModeSpec_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__PredModeSpec_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__PredModeSpec_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__PredModeSpec_48, 2) = ((MR_Box) (hlds__make_hlds__add_pred__Var_137));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_54 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredModeSpec_48));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_106_106));
                  }
                }
                break;
            }
          }
        else
          *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_54 = hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_57_57;
      }
    {
      hlds__make_hlds__add_pred__Var_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_140, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Modes_19));
    }
    {
      hlds__make_hlds__add_pred__do_add_new_proc_14_p_0(hlds__make_hlds__add_pred__Context_14, hlds__make_hlds__add_pred__ItemNumber_15, hlds__make_hlds__add_pred__Arity_17, hlds__make_hlds__add_pred__InstVarSet_18, hlds__make_hlds__add_pred__Modes_19, hlds__make_hlds__add_pred__Var_140, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_pred__DetismDecl_27, hlds__make_hlds__add_pred__MaybeDet_20, (MR_Integer) 1, (MR_Integer) 1, hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_51, hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_52, hlds__make_hlds__add_pred__ProcId_23);
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pred__add_builtin_5_p_0(
  MR_Word hlds__make_hlds__add_pred__PredId_6,
  MR_Word hlds__make_hlds__add_pred__Types_7,
  MR_Word hlds__make_hlds__add_pred__CompilationTarget_8,
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_60,
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_61)
{
  {
    MR_bool hlds__make_hlds__add_pred__succeeded;
    MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_130_130;
    MR_Word hlds__make_hlds__add_pred__TypeInfo_131_131;
    MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_132_132;
    MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_133_133;
    MR_Word hlds__make_hlds__add_pred__TypeInfo_134_134;
    MR_Word hlds__make_hlds__add_pred__Module_10;
    MR_String hlds__make_hlds__add_pred__Name_11;
    MR_Word hlds__make_hlds__add_pred__Context_12;
    MR_Word hlds__make_hlds__add_pred__ClausesInfo0_13;
    MR_Word hlds__make_hlds__add_pred__VarSet0_14;
    MR_Word hlds__make_hlds__add_pred__HeadVars_15;
    MR_Word hlds__make_hlds__add_pred__HeadVarList_16;
    MR_Word hlds__make_hlds__add_pred__GoalInfo0_17;
    MR_Word hlds__make_hlds__add_pred__NonLocals_18;
    MR_Word hlds__make_hlds__add_pred__GoalInfo1_19;
    MR_Word hlds__make_hlds__add_pred__GoalExpr_21;
    MR_Word hlds__make_hlds__add_pred__GoalInfo_22;
    MR_Word hlds__make_hlds__add_pred__ExtraVars_23;
    MR_Word hlds__make_hlds__add_pred__ExtraTypes_24;
    MR_Word hlds__make_hlds__add_pred__VarSet_25;
    MR_Word hlds__make_hlds__add_pred__Stub_26;
    MR_Word hlds__make_hlds__add_pred__VarTypes_50;
    MR_Word hlds__make_hlds__add_pred__TVarNameMap_51;
    MR_Word hlds__make_hlds__add_pred__RttiVarMaps_52;
    MR_Word hlds__make_hlds__add_pred__HasForeignClauses_53;
    MR_Word hlds__make_hlds__add_pred__HadSyntaxError_54;
    MR_Word hlds__make_hlds__add_pred__Markers_59;
    MR_Word hlds__make_hlds__add_pred__Var_62;
    MR_Word hlds__make_hlds__add_pred__Var_115;
    MR_Word hlds__make_hlds__add_pred__Var_116;
    MR_Word hlds__make_hlds__add_pred__Var_118;
    MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_119_119;
    MR_Word hlds__make_hlds__add_pred__Var_120;
    MR_Word hlds__make_hlds__add_pred__Var_135;
    MR_Integer hlds__make_hlds__add_pred__lo_0;
    MR_Integer hlds__make_hlds__add_pred__hi_1;
    MR_Integer hlds__make_hlds__add_pred__mid_2;
    MR_Integer hlds__make_hlds__add_pred__result_3;

    {
      hlds__make_hlds__add_pred__Module_10 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_60);
    }
    {
      hlds__make_hlds__add_pred__Name_11 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_60);
    }
    {
      hlds__hlds_pred__pred_info_get_context_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_60, &hlds__make_hlds__add_pred__Context_12);
    }
    {
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_60, &hlds__make_hlds__add_pred__ClausesInfo0_13);
    }
    {
      hlds__hlds_clauses__clauses_info_get_varset_2_p_0(hlds__make_hlds__add_pred__ClausesInfo0_13, &hlds__make_hlds__add_pred__VarSet0_14);
    }
    {
      hlds__hlds_clauses__clauses_info_get_headvars_2_p_0(hlds__make_hlds__add_pred__ClausesInfo0_13, &hlds__make_hlds__add_pred__HeadVars_15);
    }
    {
      hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(hlds__make_hlds__add_pred__ClausesInfo0_13, &hlds__make_hlds__add_pred__HeadVarList_16);
    }
    {
      hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__add_pred__Context_12, &hlds__make_hlds__add_pred__GoalInfo0_17);
    }
    hlds__make_hlds__add_pred__TypeCtorInfo_130_130 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    hlds__make_hlds__add_pred__TypeInfo_131_131 = (MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[0];
    {
      hlds__make_hlds__add_pred__Var_62 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0(hlds__make_hlds__add_pred__TypeInfo_131_131, hlds__make_hlds__add_pred__HeadVars_15);
    }
    {
      hlds__make_hlds__add_pred__NonLocals_18 = parse_tree__set_of_var__list_to_set_1_f_0(hlds__make_hlds__add_pred__TypeCtorInfo_130_130, hlds__make_hlds__add_pred__Var_62);
    }
    {
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(hlds__make_hlds__add_pred__NonLocals_18, hlds__make_hlds__add_pred__GoalInfo0_17, &hlds__make_hlds__add_pred__GoalInfo1_19);
    }
    {
      hlds__make_hlds__add_pred__Var_135 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
    {
      hlds__make_hlds__add_pred__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__make_hlds__add_pred__Module_10, hlds__make_hlds__add_pred__Var_135);
    }
    if (hlds__make_hlds__add_pred__succeeded)
      {
        /* binary string jump switch */
        hlds__make_hlds__add_pred__lo_0 = (MR_Integer) 0;
        hlds__make_hlds__add_pred__hi_1 = (MR_Integer) 3;
        do
          {
            hlds__make_hlds__add_pred__mid_2 = (((hlds__make_hlds__add_pred__lo_0 + hlds__make_hlds__add_pred__hi_1)) / (MR_Integer) 2);
            hlds__make_hlds__add_pred__result_3 = MR_strcmp(hlds__make_hlds__add_pred__Name_11, ((&hlds__make_hlds__add_pred_vector_common_4[0 + hlds__make_hlds__add_pred__mid_2]))->hlds__make_hlds__add_pred__vector_common_type_4_0__vct_4_f_0);
            if ((hlds__make_hlds__add_pred__result_3 == (MR_Integer) 0))
              {
                switch (((&hlds__make_hlds__add_pred_vector_common_4[0 + hlds__make_hlds__add_pred__mid_2]))->hlds__make_hlds__add_pred__vector_common_type_4_0__vct_4_f_1) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      /* case "builtin_compound_eq" */
                      hlds__make_hlds__add_pred__succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      /* case "builtin_compound_lt" */
                      hlds__make_hlds__add_pred__succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      /* case "store_at_ref", "store_at_ref_impure" */
                      switch (hlds__make_hlds__add_pred__CompilationTarget_8) {
                        default:
                          hlds__make_hlds__add_pred__succeeded = MR_FALSE;
                          break;
                        case (MR_Integer) 1:
                        case (MR_Integer) 3:
                        case (MR_Integer) 2:
                          hlds__make_hlds__add_pred__succeeded = MR_TRUE;
                          break;
                      }
                    }
                    break;
                }
                /* jump out of search loop */
                goto label_0;
              }
            else
            if ((hlds__make_hlds__add_pred__result_3 < (MR_Integer) 0))
              hlds__make_hlds__add_pred__hi_1 = (hlds__make_hlds__add_pred__mid_2 - (MR_Integer) 1);
            else
              hlds__make_hlds__add_pred__lo_0 = (hlds__make_hlds__add_pred__mid_2 + (MR_Integer) 1);
          }
        while ((hlds__make_hlds__add_pred__lo_0 <= hlds__make_hlds__add_pred__hi_1));
        hlds__make_hlds__add_pred__succeeded = MR_FALSE;
      label_0:;
      }
    if (hlds__make_hlds__add_pred__succeeded)
      {
        hlds__make_hlds__add_pred__GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_5[0]);
        hlds__make_hlds__add_pred__GoalInfo_22 = hlds__make_hlds__add_pred__GoalInfo1_19;
        hlds__make_hlds__add_pred__ExtraVars_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        hlds__make_hlds__add_pred__ExtraTypes_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        hlds__make_hlds__add_pred__VarSet_25 = hlds__make_hlds__add_pred__VarSet0_14;
        hlds__make_hlds__add_pred__Stub_26 = (MR_Integer) 1;
      }
    else
      {
        {
          MR_Word hlds__make_hlds__add_pred__Var_136;

          {
            hlds__make_hlds__add_pred__Var_136 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          }
          {
            hlds__make_hlds__add_pred__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__make_hlds__add_pred__Module_10, hlds__make_hlds__add_pred__Var_136);
          }
          if (hlds__make_hlds__add_pred__succeeded)
            hlds__make_hlds__add_pred__succeeded = (strcmp(hlds__make_hlds__add_pred__Name_11, (MR_String) "trace_get_io_state") == 0);
        }
        if (!(hlds__make_hlds__add_pred__succeeded))
          {
            MR_Word hlds__make_hlds__add_pred__Var_137;

            {
              hlds__make_hlds__add_pred__Var_137 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
            }
            {
              hlds__make_hlds__add_pred__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__make_hlds__add_pred__Module_10, hlds__make_hlds__add_pred__Var_137);
            }
            if (hlds__make_hlds__add_pred__succeeded)
              hlds__make_hlds__add_pred__succeeded = (strcmp(hlds__make_hlds__add_pred__Name_11, (MR_String) "unsafe_get_io_state") == 0);
          }
        if (hlds__make_hlds__add_pred__succeeded)
          {
            MR_Word hlds__make_hlds__add_pred__LHS_29;
            MR_Word hlds__make_hlds__add_pred__UnifyMode_31;
            MR_Word hlds__make_hlds__add_pred__Unification_32;
            MR_Word hlds__make_hlds__add_pred__AssignExpr_34;
            MR_Word hlds__make_hlds__add_pred__GoalInfoWithZero_35;
            MR_Word hlds__make_hlds__add_pred__AssignGoal_36;
            MR_Word hlds__make_hlds__add_pred__CastExpr_37;
            MR_Word hlds__make_hlds__add_pred__GoalInfoWithZeroHeadVars_38;
            MR_Word hlds__make_hlds__add_pred__CastGoal_39;
            MR_Word hlds__make_hlds__add_pred__ConjExpr_40;
            MR_Word hlds__make_hlds__add_pred__ConjGoal_41;
            MR_Word hlds__make_hlds__add_pred__Var_66;
            MR_Word hlds__make_hlds__add_pred__Var_71;
            MR_Word hlds__make_hlds__add_pred__Var_73;
            MR_Word hlds__make_hlds__add_pred__Var_74;
            MR_Word hlds__make_hlds__add_pred__Var_75;
            MR_Word hlds__make_hlds__add_pred__Var_76;
            MR_Word hlds__make_hlds__add_pred__Var_78;
            MR_Word hlds__make_hlds__add_pred__Var_85;
            MR_Word hlds__make_hlds__add_pred__Var_88;
            MR_Word hlds__make_hlds__add_pred__Var_91;
            MR_Word hlds__make_hlds__add_pred__Var_92;
            MR_Word hlds__make_hlds__add_pred__Var_93;
            MR_Word hlds__make_hlds__add_pred__Var_94;
            MR_Word hlds__make_hlds__add_pred__Var_98;
            MR_Word hlds__make_hlds__add_pred__Var_99;
            MR_Word hlds__make_hlds__add_pred__Var_101;
            MR_Word hlds__make_hlds__add_pred__Var_102;

            {
              mercury__varset__new_var_3_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_130_130, &hlds__make_hlds__add_pred__LHS_29, hlds__make_hlds__add_pred__VarSet0_14, &hlds__make_hlds__add_pred__VarSet_25);
            }
            {
              hlds__make_hlds__add_pred__ExtraVars_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__ExtraVars_23, 0) = ((MR_Box) (hlds__make_hlds__add_pred__LHS_29));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__ExtraVars_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              hlds__make_hlds__add_pred__Var_66 = parse_tree__builtin_lib_types__int_type_0_f_0();
            }
            {
              hlds__make_hlds__add_pred__ExtraTypes_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__ExtraTypes_24, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Var_66));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__ExtraTypes_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              hlds__make_hlds__add_pred__Var_73 = parse_tree__prog_mode__ground_inst_0_f_0();
            }
            {
              hlds__make_hlds__add_pred__Var_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Var_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Var_71, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Var_73));
            }
            {
              hlds__make_hlds__add_pred__Var_75 = parse_tree__prog_mode__ground_inst_0_f_0();
            }
            {
              hlds__make_hlds__add_pred__Var_76 = parse_tree__prog_mode__ground_inst_0_f_0();
            }
            {
              hlds__make_hlds__add_pred__Var_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Var_74, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Var_75));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Var_74, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Var_76));
            }
            {
              hlds__make_hlds__add_pred__UnifyMode_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__UnifyMode_31, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Var_71));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__UnifyMode_31, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Var_74));
            }
            {
              hlds__make_hlds__add_pred__Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_78, 0) = ((MR_Box) (hlds__make_hlds__add_pred__UnifyMode_31));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              hlds__make_hlds__add_pred__Unification_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Unification_32, 0) = ((MR_Box) (hlds__make_hlds__add_pred__LHS_29));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Unification_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[48])));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Unification_32, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Unification_32, 3) = ((MR_Box) (hlds__make_hlds__add_pred__Var_78));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Unification_32, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Unification_32, 5) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Unification_32, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              hlds__make_hlds__add_pred__AssignExpr_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__AssignExpr_34, 0) = ((MR_Box) (hlds__make_hlds__add_pred__LHS_29));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__AssignExpr_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_5[1])));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__AssignExpr_34, 2) = ((MR_Box) (hlds__make_hlds__add_pred__UnifyMode_31));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__AssignExpr_34, 3) = ((MR_Box) (hlds__make_hlds__add_pred__Unification_32));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__AssignExpr_34, 4) = ((MR_Box) (&hlds__make_hlds__add_pred_scalar_common_1[49]));
            }
            {
              hlds__make_hlds__add_pred__Var_85 = parse_tree__set_of_var__make_singleton_1_f_0(hlds__make_hlds__add_pred__TypeCtorInfo_130_130, hlds__make_hlds__add_pred__LHS_29);
            }
            {
              hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(hlds__make_hlds__add_pred__Var_85, hlds__make_hlds__add_pred__GoalInfo0_17, &hlds__make_hlds__add_pred__GoalInfoWithZero_35);
            }
            {
              hlds__make_hlds__add_pred__AssignGoal_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__AssignGoal_36, 0) = ((MR_Box) (hlds__make_hlds__add_pred__AssignExpr_34));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__AssignGoal_36, 1) = ((MR_Box) (hlds__make_hlds__add_pred__GoalInfoWithZero_35));
            }
            {
              hlds__make_hlds__add_pred__Var_88 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pred__TypeInfo_131_131, hlds__make_hlds__add_pred__ExtraVars_23, hlds__make_hlds__add_pred__HeadVarList_16);
            }
            {
              hlds__make_hlds__add_pred__Var_92 = parse_tree__prog_mode__in_mode_0_f_0();
            }
            {
              hlds__make_hlds__add_pred__Var_94 = parse_tree__prog_mode__uo_mode_0_f_0();
            }
            {
              hlds__make_hlds__add_pred__Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_93, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Var_94));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              hlds__make_hlds__add_pred__Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_91, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Var_92));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_91, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Var_93));
            }
            {
              hlds__make_hlds__add_pred__CastExpr_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__CastExpr_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__CastExpr_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_3[1])));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__CastExpr_37, 2) = ((MR_Box) (hlds__make_hlds__add_pred__Var_88));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__CastExpr_37, 3) = ((MR_Box) (hlds__make_hlds__add_pred__Var_91));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__CastExpr_37, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__CastExpr_37, 5) = ((MR_Box) ((MR_Integer) 0));
            }
            {
              hlds__make_hlds__add_pred__Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_99, 0) = ((MR_Box) (hlds__make_hlds__add_pred__LHS_29));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_99, 1) = ((MR_Box) (hlds__make_hlds__add_pred__HeadVarList_16));
            }
            {
              hlds__make_hlds__add_pred__Var_98 = parse_tree__set_of_var__list_to_set_1_f_0(hlds__make_hlds__add_pred__TypeCtorInfo_130_130, hlds__make_hlds__add_pred__Var_99);
            }
            {
              hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(hlds__make_hlds__add_pred__Var_98, hlds__make_hlds__add_pred__GoalInfo0_17, &hlds__make_hlds__add_pred__GoalInfoWithZeroHeadVars_38);
            }
            {
              hlds__make_hlds__add_pred__CastGoal_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__CastGoal_39, 0) = ((MR_Box) (hlds__make_hlds__add_pred__CastExpr_37));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__CastGoal_39, 1) = ((MR_Box) (hlds__make_hlds__add_pred__GoalInfoWithZeroHeadVars_38));
            }
            {
              hlds__make_hlds__add_pred__Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_102, 0) = ((MR_Box) (hlds__make_hlds__add_pred__CastGoal_39));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              hlds__make_hlds__add_pred__Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_101, 0) = ((MR_Box) (hlds__make_hlds__add_pred__AssignGoal_36));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_101, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Var_102));
            }
            {
              hlds__make_hlds__add_pred__ConjExpr_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__ConjExpr_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__ConjExpr_40, 1) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__ConjExpr_40, 2) = ((MR_Box) (hlds__make_hlds__add_pred__Var_101));
            }
            {
              hlds__make_hlds__add_pred__ConjGoal_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ConjGoal_41, 0) = ((MR_Box) (hlds__make_hlds__add_pred__ConjExpr_40));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ConjGoal_41, 1) = ((MR_Box) (hlds__make_hlds__add_pred__GoalInfoWithZeroHeadVars_38));
            }
            {
              hlds__make_hlds__add_pred__GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__GoalExpr_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__GoalExpr_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[50])));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__GoalExpr_21, 2) = ((MR_Box) (hlds__make_hlds__add_pred__ConjGoal_41));
            }
            hlds__make_hlds__add_pred__GoalInfo_22 = hlds__make_hlds__add_pred__GoalInfo1_19;
            hlds__make_hlds__add_pred__Stub_26 = (MR_Integer) 0;
          }
        else
          {
            {
              MR_Word hlds__make_hlds__add_pred__Var_138;

              {
                hlds__make_hlds__add_pred__Var_138 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
              }
              {
                hlds__make_hlds__add_pred__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__make_hlds__add_pred__Module_10, hlds__make_hlds__add_pred__Var_138);
              }
              if (hlds__make_hlds__add_pred__succeeded)
                hlds__make_hlds__add_pred__succeeded = (strcmp(hlds__make_hlds__add_pred__Name_11, (MR_String) "trace_set_io_state") == 0);
            }
            if (!(hlds__make_hlds__add_pred__succeeded))
              {
                MR_Word hlds__make_hlds__add_pred__Var_139;

                {
                  hlds__make_hlds__add_pred__Var_139 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
                }
                {
                  hlds__make_hlds__add_pred__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__make_hlds__add_pred__Module_10, hlds__make_hlds__add_pred__Var_139);
                }
                if (hlds__make_hlds__add_pred__succeeded)
                  hlds__make_hlds__add_pred__succeeded = (strcmp(hlds__make_hlds__add_pred__Name_11, (MR_String) "unsafe_set_io_state") == 0);
              }
            if (hlds__make_hlds__add_pred__succeeded)
              {
                MR_Word hlds__make_hlds__add_pred__ConjGoal_125;

                hlds__make_hlds__add_pred__GoalInfo_22 = hlds__make_hlds__add_pred__GoalInfo1_19;
                {
                  hlds__make_hlds__add_pred__ConjGoal_125 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ConjGoal_125, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_5[0])));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ConjGoal_125, 1) = ((MR_Box) (hlds__make_hlds__add_pred__GoalInfo_22));
                }
                {
                  hlds__make_hlds__add_pred__GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__GoalExpr_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__GoalExpr_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[51])));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__GoalExpr_21, 2) = ((MR_Box) (hlds__make_hlds__add_pred__ConjGoal_125));
                }
                hlds__make_hlds__add_pred__ExtraVars_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                hlds__make_hlds__add_pred__ExtraTypes_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                hlds__make_hlds__add_pred__VarSet_25 = hlds__make_hlds__add_pred__VarSet0_14;
                hlds__make_hlds__add_pred__Stub_26 = (MR_Integer) 0;
              }
            else
              {
                MR_Word hlds__make_hlds__add_pred__SymName_43;
                MR_Integer hlds__make_hlds__add_pred__ModeId_44;
                MR_Word hlds__make_hlds__add_pred__Purity_46;

                {
                  hlds__make_hlds__add_pred__SymName_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__SymName_43, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Module_10));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__SymName_43, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Name_11));
                }
                {
                  hlds__make_hlds__add_pred__ModeId_44 = hlds__hlds_pred__invalid_proc_id_0_f_0();
                }
                {
                  hlds__make_hlds__add_pred__GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pred__GoalExpr_21, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredId_6));
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pred__GoalExpr_21, 1) = ((MR_Box) (hlds__make_hlds__add_pred__ModeId_44));
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pred__GoalExpr_21, 2) = ((MR_Box) (hlds__make_hlds__add_pred__HeadVarList_16));
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pred__GoalExpr_21, 3) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pred__GoalExpr_21, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pred__GoalExpr_21, 5) = ((MR_Box) (hlds__make_hlds__add_pred__SymName_43));
                }
                {
                  hlds__hlds_pred__pred_info_get_purity_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_60, &hlds__make_hlds__add_pred__Purity_46);
                }
                {
                  hlds__hlds_goal__goal_info_set_purity_3_p_0(hlds__make_hlds__add_pred__Purity_46, hlds__make_hlds__add_pred__GoalInfo1_19, &hlds__make_hlds__add_pred__GoalInfo_22);
                }
                hlds__make_hlds__add_pred__ExtraVars_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                hlds__make_hlds__add_pred__ExtraTypes_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                hlds__make_hlds__add_pred__VarSet_25 = hlds__make_hlds__add_pred__VarSet0_14;
                hlds__make_hlds__add_pred__Stub_26 = (MR_Integer) 0;
              }
          }
      }
    {
      hlds__make_hlds__add_pred__Var_115 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pred__TypeInfo_131_131, hlds__make_hlds__add_pred__ExtraVars_23, hlds__make_hlds__add_pred__HeadVarList_16);
    }
    hlds__make_hlds__add_pred__TypeCtorInfo_132_132 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
    {
      hlds__make_hlds__add_pred__Var_116 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pred__TypeCtorInfo_132_132, hlds__make_hlds__add_pred__ExtraTypes_24, hlds__make_hlds__add_pred__Types_7);
    }
    {
      hlds__vartypes__vartypes_from_corresponding_lists_3_p_0(hlds__make_hlds__add_pred__Var_115, hlds__make_hlds__add_pred__Var_116, &hlds__make_hlds__add_pred__VarTypes_50);
    }
    hlds__make_hlds__add_pred__TypeCtorInfo_133_133 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    hlds__make_hlds__add_pred__TypeInfo_134_134 = (MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[1];
    {
      mercury__map__init_1_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_133_133, hlds__make_hlds__add_pred__TypeInfo_134_134, &hlds__make_hlds__add_pred__TVarNameMap_51);
    }
    {
      hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&hlds__make_hlds__add_pred__RttiVarMaps_52);
    }
    hlds__make_hlds__add_pred__HasForeignClauses_53 = (MR_Integer) 0;
    hlds__make_hlds__add_pred__HadSyntaxError_54 = (MR_Integer) 0;
    {
      hlds__make_hlds__add_pred__Var_118 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
    }
    hlds__make_hlds__add_pred__Var_120 = (MR_Integer) 7;
    switch (hlds__make_hlds__add_pred__Stub_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word hlds__make_hlds__add_pred__Goal_47;
          MR_Word hlds__make_hlds__add_pred__Clause_48;
          MR_Word hlds__make_hlds__add_pred__ClausesRep_49;
          MR_Word hlds__make_hlds__add_pred__ClausesInfo_55;
          MR_Word hlds__make_hlds__add_pred__Markers0_56;
          MR_Word hlds__make_hlds__add_pred__Var_113;

          {
            hlds__make_hlds__add_pred__Goal_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Goal_47, 0) = ((MR_Box) (hlds__make_hlds__add_pred__GoalExpr_21));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Goal_47, 1) = ((MR_Box) (hlds__make_hlds__add_pred__GoalInfo_22));
          }
          {
            hlds__make_hlds__add_pred__Clause_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Clause_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Clause_48, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Goal_47));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Clause_48, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Clause_48, 3) = ((MR_Box) (hlds__make_hlds__add_pred__Context_12));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Clause_48, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            hlds__make_hlds__add_pred__Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_113, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Clause_48));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            hlds__hlds_clauses__set_clause_list_2_p_0(hlds__make_hlds__add_pred__Var_113, &hlds__make_hlds__add_pred__ClausesRep_49);
          }
          {
            hlds__make_hlds__add_pred__ClausesInfo_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_55, 0) = ((MR_Box) (hlds__make_hlds__add_pred__VarSet_25));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_55, 1) = ((MR_Box) (hlds__make_hlds__add_pred__TVarNameMap_51));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_55, 2) = ((MR_Box) (hlds__make_hlds__add_pred__VarTypes_50));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_55, 3) = ((MR_Box) (hlds__make_hlds__add_pred__VarTypes_50));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_55, 4) = ((MR_Box) (hlds__make_hlds__add_pred__HeadVars_15));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_55, 5) = ((MR_Box) (hlds__make_hlds__add_pred__ClausesRep_49));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_55, 6) = ((MR_Box) (hlds__make_hlds__add_pred__Var_118));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_55, 7) = ((MR_Box) (hlds__make_hlds__add_pred__RttiVarMaps_52));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_55, 8) = ((MR_Box) (hlds__make_hlds__add_pred__HasForeignClauses_53));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_55, 9) = ((MR_Box) (hlds__make_hlds__add_pred__HadSyntaxError_54));
          }
          {
            hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(hlds__make_hlds__add_pred__ClausesInfo_55, hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_60, &hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_119_119);
          }
          {
            hlds__hlds_pred__pred_info_get_markers_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_119_119, &hlds__make_hlds__add_pred__Markers0_56);
          }
          {
            hlds__hlds_pred__add_marker_3_p_0(hlds__make_hlds__add_pred__Var_120, hlds__make_hlds__add_pred__Markers0_56, &hlds__make_hlds__add_pred__Markers_59);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__make_hlds__add_pred__Markers2_58;
          MR_Word hlds__make_hlds__add_pred__ClausesRep_145;
          MR_Word hlds__make_hlds__add_pred__ClausesInfo_146;
          MR_Word hlds__make_hlds__add_pred__Markers0_147;
          MR_Word hlds__make_hlds__add_pred__Markers1_148;

          {
            hlds__hlds_clauses__set_clause_list_2_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__add_pred__ClausesRep_145);
          }
          {
            hlds__make_hlds__add_pred__ClausesInfo_146 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_146, 0) = ((MR_Box) (hlds__make_hlds__add_pred__VarSet_25));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_146, 1) = ((MR_Box) (hlds__make_hlds__add_pred__TVarNameMap_51));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_146, 2) = ((MR_Box) (hlds__make_hlds__add_pred__VarTypes_50));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_146, 3) = ((MR_Box) (hlds__make_hlds__add_pred__VarTypes_50));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_146, 4) = ((MR_Box) (hlds__make_hlds__add_pred__HeadVars_15));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_146, 5) = ((MR_Box) (hlds__make_hlds__add_pred__ClausesRep_145));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_146, 6) = ((MR_Box) (hlds__make_hlds__add_pred__Var_118));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_146, 7) = ((MR_Box) (hlds__make_hlds__add_pred__RttiVarMaps_52));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_146, 8) = ((MR_Box) (hlds__make_hlds__add_pred__HasForeignClauses_53));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_146, 9) = ((MR_Box) (hlds__make_hlds__add_pred__HadSyntaxError_54));
          }
          {
            hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(hlds__make_hlds__add_pred__ClausesInfo_146, hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_60, &hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_119_119);
          }
          {
            hlds__hlds_pred__pred_info_get_markers_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_119_119, &hlds__make_hlds__add_pred__Markers0_147);
          }
          {
            hlds__hlds_pred__add_marker_3_p_0(hlds__make_hlds__add_pred__Var_120, hlds__make_hlds__add_pred__Markers0_147, &hlds__make_hlds__add_pred__Markers1_148);
          }
          {
            hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 0, hlds__make_hlds__add_pred__Markers1_148, &hlds__make_hlds__add_pred__Markers2_58);
          }
          {
            hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 1, hlds__make_hlds__add_pred__Markers2_58, &hlds__make_hlds__add_pred__Markers_59);
          }
        }
        break;
    }
    {
      hlds__hlds_pred__pred_info_set_markers_3_p_0(hlds__make_hlds__add_pred__Markers_59, hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_119_119, hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_61);
    }
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_pred__item_decl_section_1_f_0(
  MR_Word hlds__make_hlds__add_pred__ItemExport_3)
{
  {
    MR_bool hlds__make_hlds__add_pred__succeeded;
    MR_Word hlds__make_hlds__add_pred__DeclSection_4;

    switch (hlds__make_hlds__add_pred__ItemExport_3) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        hlds__make_hlds__add_pred__DeclSection_4 = (MR_Integer) 0;
        break;
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        hlds__make_hlds__add_pred__DeclSection_4 = (MR_Integer) 1;
        break;
    }
    return hlds__make_hlds__add_pred__DeclSection_4;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pred__add_new_pred_19_p_0(
  MR_Word hlds__make_hlds__add_pred__Origin_20,
  MR_Word hlds__make_hlds__add_pred__Context_21,
  MR_Integer hlds__make_hlds__add_pred__ItemNumber_22,
  MR_Word hlds__make_hlds__add_pred__MaybeItemMercuryStatus_23,
  MR_Word hlds__make_hlds__add_pred__PredStatus0_24,
  MR_Word hlds__make_hlds__add_pred__NeedQual_25,
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_26,
  MR_Word hlds__make_hlds__add_pred__PredName_27,
  MR_Word hlds__make_hlds__add_pred__TVarSet_28,
  MR_Word hlds__make_hlds__add_pred__ExistQVars_29,
  MR_Word hlds__make_hlds__add_pred__Types_30,
  MR_Word hlds__make_hlds__add_pred__Constraints_31,
  MR_Word hlds__make_hlds__add_pred__MaybeModes_32,
  MR_Word hlds__make_hlds__add_pred__Purity_33,
  MR_Word hlds__make_hlds__add_pred__Markers0_34,
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_73,
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_74,
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_75,
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_76)
{
  {
    MR_bool hlds__make_hlds__add_pred__succeeded;
    MR_Word hlds__make_hlds__add_pred__PredStatus_37;
    MR_Word hlds__make_hlds__add_pred__ModuleName_38;
    MR_Integer hlds__make_hlds__add_pred__Arity_39;
    MR_Word hlds__make_hlds__add_pred__Var_77 = (MR_Word) hlds__make_hlds__add_pred__PredStatus0_24;

    hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__Var_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (hlds__make_hlds__add_pred__succeeded)
      {
        hlds__make_hlds__add_pred__PredStatus_37 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pred_scalar_common_3[0])));
      }
    else
      hlds__make_hlds__add_pred__PredStatus_37 = hlds__make_hlds__add_pred__PredStatus0_24;
    {
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_73, &hlds__make_hlds__add_pred__ModuleName_38);
    }
    {
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__make_hlds__add_pred__Types_30, &hlds__make_hlds__add_pred__Arity_39);
    }
    if (((MR_tag((MR_Word) hlds__make_hlds__add_pred__PredName_27)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_92_92;
        MR_Word hlds__make_hlds__add_pred__MNameOfPred_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__PredName_27, (MR_Integer) 0)));
        MR_String hlds__make_hlds__add_pred__PName_42 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__PredName_27, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__add_pred__CurUserDecl_48;
        MR_Word hlds__make_hlds__add_pred__PredTable0_49;
        MR_Word hlds__make_hlds__add_pred__ClausesInfo_50;
        MR_Word hlds__make_hlds__add_pred__Proofs_51;
        MR_Word hlds__make_hlds__add_pred__ConstraintMap_52;
        MR_Word hlds__make_hlds__add_pred__PurityMarkers_53;
        MR_Word hlds__make_hlds__add_pred__Markers_54;
        MR_Word hlds__make_hlds__add_pred__VarNameRemap_55;
        MR_Word hlds__make_hlds__add_pred__PredInfo0_56;
        MR_Word hlds__make_hlds__add_pred__PredIds_57;
        MR_Word hlds__make_hlds__add_pred__Var_81;
        MR_Word hlds__make_hlds__add_pred__ItemExport_44;
        MR_Word hlds__make_hlds__add_pred__ItemMercuryStatus_43;

        hlds__make_hlds__add_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pred__MaybeItemMercuryStatus_23)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__make_hlds__add_pred__succeeded)
          {
            hlds__make_hlds__add_pred__ItemMercuryStatus_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__MaybeItemMercuryStatus_23, (MR_Integer) 0)));
            hlds__make_hlds__add_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pred__ItemMercuryStatus_43)) == (MR_mktag((MR_Integer) 0)));
            if (hlds__make_hlds__add_pred__succeeded)
              hlds__make_hlds__add_pred__ItemExport_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ItemMercuryStatus_43, (MR_Integer) 0)));
          }
        if (hlds__make_hlds__add_pred__succeeded)
          {
            MR_Word hlds__make_hlds__add_pred__DeclSection_45;
            MR_Word hlds__make_hlds__add_pred__PredmodeDecl_46;
            MR_Word hlds__make_hlds__add_pred__Var_80;

            {
              hlds__make_hlds__add_pred__DeclSection_45 = hlds__make_hlds__add_pred__item_decl_section_1_f_0(hlds__make_hlds__add_pred__ItemExport_44);
            }
            if ((hlds__make_hlds__add_pred__MaybeModes_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              hlds__make_hlds__add_pred__PredmodeDecl_46 = (MR_Integer) 0;
            else
              hlds__make_hlds__add_pred__PredmodeDecl_46 = (MR_Integer) 1;
            {
              hlds__make_hlds__add_pred__Var_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Var_80, 0) = ((MR_Box) ((hlds__make_hlds__add_pred__DeclSection_45 | ((hlds__make_hlds__add_pred__PredmodeDecl_46 << (MR_Integer) 1)))));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Var_80, 1) = ((MR_Box) (hlds__make_hlds__add_pred__ItemNumber_22));
            }
            {
              hlds__make_hlds__add_pred__CurUserDecl_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__CurUserDecl_48, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Var_80));
            }
          }
        else
          hlds__make_hlds__add_pred__CurUserDecl_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_73, &hlds__make_hlds__add_pred__PredTable0_49);
        }
        {
          hlds__make_hlds__add_pred__Var_81 = hlds__hlds_clauses__init_clause_item_numbers_user_0_f_0();
        }
        {
          hlds__hlds_clauses__clauses_info_init_4_p_0(hlds__make_hlds__add_pred__PredOrFunc_26, hlds__make_hlds__add_pred__Arity_39, hlds__make_hlds__add_pred__Var_81, &hlds__make_hlds__add_pred__ClausesInfo_50);
        }
        hlds__make_hlds__add_pred__TypeCtorInfo_92_92 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
        {
          mercury__map__init_1_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_92_92, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, &hlds__make_hlds__add_pred__Proofs_51);
        }
        {
          mercury__map__init_1_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, hlds__make_hlds__add_pred__TypeCtorInfo_92_92, &hlds__make_hlds__add_pred__ConstraintMap_52);
        }
        {
          hlds__hlds_pred__purity_to_markers_2_p_0(hlds__make_hlds__add_pred__Purity_33, &hlds__make_hlds__add_pred__PurityMarkers_53);
        }
        {
          hlds__hlds_pred__add_markers_3_p_0(hlds__make_hlds__add_pred__PurityMarkers_53, hlds__make_hlds__add_pred__Markers0_34, &hlds__make_hlds__add_pred__Markers_54);
        }
        {
          mercury__map__init_1_p_0((MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, &hlds__make_hlds__add_pred__VarNameRemap_55);
        }
        {
          hlds__hlds_pred__pred_info_init_19_p_0(hlds__make_hlds__add_pred__ModuleName_38, hlds__make_hlds__add_pred__PredName_27, hlds__make_hlds__add_pred__Arity_39, hlds__make_hlds__add_pred__PredOrFunc_26, hlds__make_hlds__add_pred__Context_21, hlds__make_hlds__add_pred__Origin_20, hlds__make_hlds__add_pred__PredStatus_37, hlds__make_hlds__add_pred__CurUserDecl_48, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_pred__Markers_54, hlds__make_hlds__add_pred__Types_30, hlds__make_hlds__add_pred__TVarSet_28, hlds__make_hlds__add_pred__ExistQVars_29, hlds__make_hlds__add_pred__Constraints_31, hlds__make_hlds__add_pred__Proofs_51, hlds__make_hlds__add_pred__ConstraintMap_52, hlds__make_hlds__add_pred__ClausesInfo_50, hlds__make_hlds__add_pred__VarNameRemap_55, &hlds__make_hlds__add_pred__PredInfo0_56);
        }
        {
          hlds__pred_table__predicate_table_lookup_pf_m_n_a_7_p_0(hlds__make_hlds__add_pred__PredTable0_49, (MR_Integer) 0, hlds__make_hlds__add_pred__PredOrFunc_26, hlds__make_hlds__add_pred__MNameOfPred_41, hlds__make_hlds__add_pred__PName_42, hlds__make_hlds__add_pred__Arity_39, &hlds__make_hlds__add_pred__PredIds_57);
        }
        if ((hlds__make_hlds__add_pred__PredIds_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word hlds__make_hlds__add_pred__PQInfo_64;
            MR_Word hlds__make_hlds__add_pred__PredId_65;
            MR_Word hlds__make_hlds__add_pred__PredTable1_66;
            MR_Word hlds__make_hlds__add_pred__PredTable_72;

            {
              hlds__hlds_module__module_info_get_partial_qualifier_info_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_73, &hlds__make_hlds__add_pred__PQInfo_64);
            }
            {
              hlds__pred_table__predicate_table_insert_qual_6_p_0(hlds__make_hlds__add_pred__PredInfo0_56, hlds__make_hlds__add_pred__NeedQual_25, hlds__make_hlds__add_pred__PQInfo_64, &hlds__make_hlds__add_pred__PredId_65, hlds__make_hlds__add_pred__PredTable0_49, &hlds__make_hlds__add_pred__PredTable1_66);
            }
            {
              hlds__make_hlds__add_pred__succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(hlds__make_hlds__add_pred__PredInfo0_56);
            }
            if (hlds__make_hlds__add_pred__succeeded)
              {
                MR_Word hlds__make_hlds__add_pred__Globals_67;
                MR_Word hlds__make_hlds__add_pred__CompilationTarget_68;
                MR_Word hlds__make_hlds__add_pred__PredInfo_69;
                MR_Word hlds__make_hlds__add_pred__Preds1_70;
                MR_Word hlds__make_hlds__add_pred__Preds_71;

                {
                  hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_73, &hlds__make_hlds__add_pred__Globals_67);
                }
                {
                  libs__globals__get_target_2_p_0(hlds__make_hlds__add_pred__Globals_67, &hlds__make_hlds__add_pred__CompilationTarget_68);
                }
                {
                  hlds__make_hlds__add_pred__add_builtin_5_p_0(hlds__make_hlds__add_pred__PredId_65, hlds__make_hlds__add_pred__Types_30, hlds__make_hlds__add_pred__CompilationTarget_68, hlds__make_hlds__add_pred__PredInfo0_56, &hlds__make_hlds__add_pred__PredInfo_69);
                }
                {
                  hlds__pred_table__predicate_table_get_preds_2_p_0(hlds__make_hlds__add_pred__PredTable1_66, &hlds__make_hlds__add_pred__Preds1_70);
                }
                {
                  mercury__map__det_update_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, ((MR_Box) (hlds__make_hlds__add_pred__PredId_65)), ((MR_Box) (hlds__make_hlds__add_pred__PredInfo_69)), hlds__make_hlds__add_pred__Preds1_70, &hlds__make_hlds__add_pred__Preds_71);
                }
                {
                  hlds__pred_table__predicate_table_set_preds_3_p_0(hlds__make_hlds__add_pred__Preds_71, hlds__make_hlds__add_pred__PredTable1_66, &hlds__make_hlds__add_pred__PredTable_72);
                }
              }
            else
              hlds__make_hlds__add_pred__PredTable_72 = hlds__make_hlds__add_pred__PredTable1_66;
            {
              hlds__hlds_module__module_info_set_predicate_table_3_p_0(hlds__make_hlds__add_pred__PredTable_72, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_73, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_74);
            }
            *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_76 = hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_75;
          }
        else
          {
            MR_Word hlds__make_hlds__add_pred__OrigPred_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__PredIds_57, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__add_pred__OrigPredInfo_60;
            MR_Word hlds__make_hlds__add_pred__OrigContext_61;
            MR_String hlds__make_hlds__add_pred__DeclString_62;
            MR_Integer hlds__make_hlds__add_pred__OrigArity_63;
            MR_Word hlds__make_hlds__add_pred__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__PredIds_57, (MR_Integer) 1)));
            MR_Word hlds__make_hlds__add_pred__Var_85;

            {
              hlds__hlds_module__module_info_pred_info_3_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_73, hlds__make_hlds__add_pred__OrigPred_58, &hlds__make_hlds__add_pred__OrigPredInfo_60);
            }
            {
              hlds__hlds_pred__pred_info_get_context_2_p_0(hlds__make_hlds__add_pred__OrigPredInfo_60, &hlds__make_hlds__add_pred__OrigContext_61);
            }
            {
              hlds__make_hlds__add_pred__DeclString_62 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(hlds__make_hlds__add_pred__PredOrFunc_26);
            }
            {
              parse_tree__prog_util__adjust_func_arity_3_p_1(hlds__make_hlds__add_pred__PredOrFunc_26, &hlds__make_hlds__add_pred__OrigArity_63, hlds__make_hlds__add_pred__Arity_39);
            }
            hlds__make_hlds__add_pred__Var_85 = (MR_Word) hlds__make_hlds__add_pred__PredStatus0_24;
            hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__Var_85 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (hlds__make_hlds__add_pred__succeeded)
              *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_76 = hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_75;
            else
              {
                {
                  hlds__make_hlds__make_hlds_error__multiple_def_error_9_p_0((MR_Integer) 0, hlds__make_hlds__add_pred__PredName_27, hlds__make_hlds__add_pred__OrigArity_63, hlds__make_hlds__add_pred__DeclString_62, hlds__make_hlds__add_pred__Context_21, hlds__make_hlds__add_pred__OrigContext_61, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_75, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_76);
                }
              }
            *hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_74 = hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_73;
          }
      }
    else
      {
        {
          hlds__hlds_module__module_info_incr_errors_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_73, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_74);
        }
        {
          hlds__make_hlds__add_pred__unqualified_pred_error_5_p_0(hlds__make_hlds__add_pred__PredName_27, hlds__make_hlds__add_pred__Arity_39, hlds__make_hlds__add_pred__Context_21, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_75, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_76);
        }
      }
  }
}

void MR_CALL 
hlds__make_hlds__add_pred__check_pred_if_field_access_function_4_p_0(
  MR_Word hlds__make_hlds__add_pred__ModuleInfo_5,
  MR_Word hlds__make_hlds__add_pred__SectionItem_6,
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_29,
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_30)
{
  {
    MR_bool hlds__make_hlds__add_pred__succeeded;
    MR_Word hlds__make_hlds__add_pred__SectionInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__SectionItem_6, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_pred__ItemPredDecl_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__SectionItem_6, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_pred__ItemMercuryStatus_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__SectionInfo_8, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_pred__SymName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ItemPredDecl_9, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_pred__PredOrFunc_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ItemPredDecl_9, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_pred__TypesAndModes_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ItemPredDecl_9, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__add_pred__Context_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ItemPredDecl_9, (MR_Integer) 12)));
    MR_Word hlds__make_hlds__add_pred___NeedQual_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__SectionInfo_8, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_pred__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ItemPredDecl_9, (MR_Integer) 3)));
    MR_Word hlds__make_hlds__add_pred__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ItemPredDecl_9, (MR_Integer) 4)));
    MR_Word hlds__make_hlds__add_pred__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ItemPredDecl_9, (MR_Integer) 5)));
    MR_Word hlds__make_hlds__add_pred__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ItemPredDecl_9, (MR_Integer) 6)));
    MR_Word hlds__make_hlds__add_pred__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ItemPredDecl_9, (MR_Integer) 7)));
    MR_Word hlds__make_hlds__add_pred__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ItemPredDecl_9, (MR_Integer) 8)));
    MR_Word hlds__make_hlds__add_pred__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ItemPredDecl_9, (MR_Integer) 9)));
    MR_Word hlds__make_hlds__add_pred__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ItemPredDecl_9, (MR_Integer) 10)));
    MR_Word hlds__make_hlds__add_pred__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ItemPredDecl_9, (MR_Integer) 11)));
    MR_Integer hlds__make_hlds__add_pred___SeqNum_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ItemPredDecl_9, (MR_Integer) 13)));

    switch (hlds__make_hlds__add_pred__PredOrFunc_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Integer hlds__make_hlds__add_pred__PredArity_26;
          MR_Integer hlds__make_hlds__add_pred__FuncArity_27;
          MR_Word hlds__make_hlds__add_pred__PredStatus_28;

          {
            mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, hlds__make_hlds__add_pred__TypesAndModes_14, &hlds__make_hlds__add_pred__PredArity_26);
          }
          {
            parse_tree__prog_util__adjust_func_arity_3_p_1((MR_Integer) 1, &hlds__make_hlds__add_pred__FuncArity_27, hlds__make_hlds__add_pred__PredArity_26);
          }
          {
            hlds__status__item_mercury_status_to_pred_status_2_p_0(hlds__make_hlds__add_pred__ItemMercuryStatus_10, &hlds__make_hlds__add_pred__PredStatus_28);
          }
          {
            hlds__make_hlds__add_pred__maybe_check_field_access_function_7_p_0(hlds__make_hlds__add_pred__ModuleInfo_5, hlds__make_hlds__add_pred__SymName_12, hlds__make_hlds__add_pred__FuncArity_27, hlds__make_hlds__add_pred__PredStatus_28, hlds__make_hlds__add_pred__Context_24, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_29, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_30);
          }
        }
        break;
      case (MR_Integer) 0:
        *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_30 = hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_29;
        break;
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pred__preds_add_implicit_for_assertion_10_p_0(
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_25,
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_26,
  MR_Word hlds__make_hlds__add_pred__ModuleName_12,
  MR_Word hlds__make_hlds__add_pred__PredName_13,
  MR_Integer hlds__make_hlds__add_pred__Arity_14,
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_15,
  MR_Word hlds__make_hlds__add_pred__HeadVars_16,
  MR_Word hlds__make_hlds__add_pred__Status_17,
  MR_Word hlds__make_hlds__add_pred__Context_18,
  MR_Word * hlds__make_hlds__add_pred__PredId_19)
{
  {
    MR_bool hlds__make_hlds__add_pred__succeeded;
    MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_56_72;
    MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_59_75;
    MR_Word hlds__make_hlds__add_pred__ClausesInfo_20;
    MR_String hlds__make_hlds__add_pred__FileName_21;
    MR_Integer hlds__make_hlds__add_pred__LineNum_22;
    MR_Word hlds__make_hlds__add_pred__PredicateTable0_23;
    MR_Word hlds__make_hlds__add_pred__PredicateTable_24;
    MR_Word hlds__make_hlds__add_pred__Var_27;
    MR_Word hlds__make_hlds__add_pred__Markers0_43;
    MR_Word hlds__make_hlds__add_pred__TVarSet0_44;
    MR_Word hlds__make_hlds__add_pred__TypeVars_45;
    MR_Word hlds__make_hlds__add_pred__TVarSet_46;
    MR_Word hlds__make_hlds__add_pred__Types_47;
    MR_Word hlds__make_hlds__add_pred__Proofs_50;
    MR_Word hlds__make_hlds__add_pred__ConstraintMap_51;
    MR_Word hlds__make_hlds__add_pred__VarNameRemap_52;
    MR_Word hlds__make_hlds__add_pred__PredInfo0_53;
    MR_Word hlds__make_hlds__add_pred__Markers_54;
    MR_Word hlds__make_hlds__add_pred__PredInfo_55;
    MR_Word hlds__make_hlds__add_pred__PredIds_56;
    MR_Word hlds__make_hlds__add_pred__Var_61;

    {
      hlds__hlds_clauses__clauses_info_init_for_assertion_2_p_0(hlds__make_hlds__add_pred__HeadVars_16, &hlds__make_hlds__add_pred__ClausesInfo_20);
    }
    {
      mercury__term__context_file_2_p_0(hlds__make_hlds__add_pred__Context_18, &hlds__make_hlds__add_pred__FileName_21);
    }
    {
      mercury__term__context_line_2_p_0(hlds__make_hlds__add_pred__Context_18, &hlds__make_hlds__add_pred__LineNum_22);
    }
    {
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_25, &hlds__make_hlds__add_pred__PredicateTable0_23);
    }
    {
      hlds__make_hlds__add_pred__Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__Var_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__Var_27, 1) = ((MR_Box) (hlds__make_hlds__add_pred__FileName_21));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__Var_27, 2) = ((MR_Box) (hlds__make_hlds__add_pred__LineNum_22));
    }
    {
      hlds__hlds_pred__init_markers_1_p_0(&hlds__make_hlds__add_pred__Markers0_43);
    }
    hlds__make_hlds__add_pred__TypeCtorInfo_56_72 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
    {
      mercury__varset__init_1_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_56_72, &hlds__make_hlds__add_pred__TVarSet0_44);
    }
    {
      parse_tree__prog_util__make_n_fresh_vars_5_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_56_72, (MR_String) "T", hlds__make_hlds__add_pred__Arity_14, &hlds__make_hlds__add_pred__TypeVars_45, hlds__make_hlds__add_pred__TVarSet0_44, &hlds__make_hlds__add_pred__TVarSet_46);
    }
    {
      hlds__make_hlds__add_pred__Var_61 = mercury__map__init_0_f_0((MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
    }
    {
      parse_tree__prog_type__var_list_to_type_list_3_p_0(hlds__make_hlds__add_pred__Var_61, hlds__make_hlds__add_pred__TypeVars_45, &hlds__make_hlds__add_pred__Types_47);
    }
    hlds__make_hlds__add_pred__TypeCtorInfo_59_75 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
    {
      mercury__map__init_1_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_59_75, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, &hlds__make_hlds__add_pred__Proofs_50);
    }
    {
      mercury__map__init_1_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, hlds__make_hlds__add_pred__TypeCtorInfo_59_75, &hlds__make_hlds__add_pred__ConstraintMap_51);
    }
    {
      mercury__map__init_1_p_0((MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, &hlds__make_hlds__add_pred__VarNameRemap_52);
    }
    {
      hlds__hlds_pred__pred_info_init_19_p_0(hlds__make_hlds__add_pred__ModuleName_12, hlds__make_hlds__add_pred__PredName_13, hlds__make_hlds__add_pred__Arity_14, hlds__make_hlds__add_pred__PredOrFunc_15, hlds__make_hlds__add_pred__Context_18, hlds__make_hlds__add_pred__Var_27, hlds__make_hlds__add_pred__Status_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_pred__Markers0_43, hlds__make_hlds__add_pred__Types_47, hlds__make_hlds__add_pred__TVarSet_46, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[47], hlds__make_hlds__add_pred__Proofs_50, hlds__make_hlds__add_pred__ConstraintMap_51, hlds__make_hlds__add_pred__ClausesInfo_20, hlds__make_hlds__add_pred__VarNameRemap_52, &hlds__make_hlds__add_pred__PredInfo0_53);
    }
    {
      hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 2, hlds__make_hlds__add_pred__Markers0_43, &hlds__make_hlds__add_pred__Markers_54);
    }
    {
      hlds__hlds_pred__pred_info_set_markers_3_p_0(hlds__make_hlds__add_pred__Markers_54, hlds__make_hlds__add_pred__PredInfo0_53, &hlds__make_hlds__add_pred__PredInfo_55);
    }
    {
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__make_hlds__add_pred__PredicateTable0_23, (MR_Integer) 0, hlds__make_hlds__add_pred__PredOrFunc_15, hlds__make_hlds__add_pred__PredName_13, hlds__make_hlds__add_pred__Arity_14, &hlds__make_hlds__add_pred__PredIds_56);
    }
    if ((hlds__make_hlds__add_pred__PredIds_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word hlds__make_hlds__add_pred__MQInfo_57;

        {
          hlds__hlds_module__module_info_get_partial_qualifier_info_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_25, &hlds__make_hlds__add_pred__MQInfo_57);
        }
        {
          hlds__pred_table__predicate_table_insert_qual_6_p_0(hlds__make_hlds__add_pred__PredInfo_55, (MR_Integer) 1, hlds__make_hlds__add_pred__MQInfo_57, hlds__make_hlds__add_pred__PredId_19, hlds__make_hlds__add_pred__PredicateTable0_23, &hlds__make_hlds__add_pred__PredicateTable_24);
        }
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_pred", (MR_String) "predicate \140hlds.make_hlds.add_pred.preds_do_add_implicit\'/12", (MR_String) "search succeeded");
          return;
        }
      }
    {
      hlds__hlds_module__module_info_set_predicate_table_3_p_0(hlds__make_hlds__add_pred__PredicateTable_24, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_25, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_26);
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pred__preds_add_implicit_report_error_14_p_0(
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_32,
  MR_Word hlds__make_hlds__add_pred__ModuleName_16,
  MR_Word hlds__make_hlds__add_pred__PredName_17,
  MR_Integer hlds__make_hlds__add_pred__Arity_18,
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_19,
  MR_Word hlds__make_hlds__add_pred__Status_20,
  MR_Word hlds__make_hlds__add_pred__IsClassMethod_21,
  MR_Word hlds__make_hlds__add_pred__Context_22,
  MR_Word hlds__make_hlds__add_pred__Origin_23,
  MR_Word hlds__make_hlds__add_pred__DescPieces_24,
  MR_Word * hlds__make_hlds__add_pred__PredId_25,
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_33,
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_34)
{
  {
    MR_bool hlds__make_hlds__add_pred__succeeded;
    MR_Word hlds__make_hlds__add_pred__PredicateTable0_27;
    MR_Word hlds__make_hlds__add_pred__ClausesInfo_29;
    MR_Word hlds__make_hlds__add_pred__PredicateTable_30;
    MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_35_35;
    MR_Word hlds__make_hlds__add_pred__Var_38;

    {
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_31, &hlds__make_hlds__add_pred__PredicateTable0_27);
    }
    {
      hlds__make_hlds__make_hlds_error__maybe_undefined_pred_error_10_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_31, hlds__make_hlds__add_pred__PredName_17, hlds__make_hlds__add_pred__Arity_18, hlds__make_hlds__add_pred__PredOrFunc_19, hlds__make_hlds__add_pred__Status_20, hlds__make_hlds__add_pred__IsClassMethod_21, hlds__make_hlds__add_pred__Context_22, hlds__make_hlds__add_pred__DescPieces_24, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_33, &hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_35_35);
    }
    switch (hlds__make_hlds__add_pred__PredOrFunc_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Integer hlds__make_hlds__add_pred__FuncArity_28;

          {
            parse_tree__prog_util__adjust_func_arity_3_p_1((MR_Integer) 1, &hlds__make_hlds__add_pred__FuncArity_28, hlds__make_hlds__add_pred__Arity_18);
          }
          {
            hlds__make_hlds__add_pred__maybe_check_field_access_function_7_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_31, hlds__make_hlds__add_pred__PredName_17, hlds__make_hlds__add_pred__FuncArity_28, hlds__make_hlds__add_pred__Status_20, hlds__make_hlds__add_pred__Context_22, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_35_35, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_34);
          }
        }
        break;
      case (MR_Integer) 0:
        *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_34 = hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_35_35;
        break;
    }
    {
      hlds__make_hlds__add_pred__Var_38 = hlds__hlds_clauses__init_clause_item_numbers_user_0_f_0();
    }
    {
      hlds__hlds_clauses__clauses_info_init_4_p_0(hlds__make_hlds__add_pred__PredOrFunc_19, hlds__make_hlds__add_pred__Arity_18, hlds__make_hlds__add_pred__Var_38, &hlds__make_hlds__add_pred__ClausesInfo_29);
    }
    {
      hlds__make_hlds__add_pred__preds_do_add_implicit_12_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_31, hlds__make_hlds__add_pred__ModuleName_16, hlds__make_hlds__add_pred__PredName_17, hlds__make_hlds__add_pred__Arity_18, hlds__make_hlds__add_pred__PredOrFunc_19, hlds__make_hlds__add_pred__Status_20, hlds__make_hlds__add_pred__Context_22, hlds__make_hlds__add_pred__Origin_23, hlds__make_hlds__add_pred__ClausesInfo_29, hlds__make_hlds__add_pred__PredId_25, hlds__make_hlds__add_pred__PredicateTable0_27, &hlds__make_hlds__add_pred__PredicateTable_30);
    }
    {
      hlds__hlds_module__module_info_set_predicate_table_3_p_0(hlds__make_hlds__add_pred__PredicateTable_30, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_31, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_32);
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pred__module_add_mode_15_p_0(
  MR_Word hlds__make_hlds__add_pred__Context_16,
  MR_Integer hlds__make_hlds__add_pred__ItemNumber_17,
  MR_Word hlds__make_hlds__add_pred__MaybeItemMercuryStatus_18,
  MR_Word hlds__make_hlds__add_pred__PredStatus_19,
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_20,
  MR_Word hlds__make_hlds__add_pred__PredName_21,
  MR_Word hlds__make_hlds__add_pred__InstVarSet_22,
  MR_Word hlds__make_hlds__add_pred__Modes_23,
  MR_Word hlds__make_hlds__add_pred__MaybeDet_24,
  MR_Word hlds__make_hlds__add_pred__IsClassMethod_25,
  MR_Word * hlds__make_hlds__add_pred__PredProcId_26,
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_43,
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_44,
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_45,
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_46)
{
  {
    MR_bool hlds__make_hlds__add_pred__succeeded;
    MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_62_62;
    MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_63_63;
    MR_Word hlds__make_hlds__add_pred__ModuleName0_29;
    MR_Word hlds__make_hlds__add_pred__ModuleName_30;
    MR_Integer hlds__make_hlds__add_pred__Arity_31;
    MR_Word hlds__make_hlds__add_pred__PredicateTable0_32;
    MR_Word hlds__make_hlds__add_pred__PredIds_33;
    MR_Word hlds__make_hlds__add_pred__PredId_35;
    MR_Word hlds__make_hlds__add_pred__PredicateTable1_36;
    MR_Word hlds__make_hlds__add_pred__Preds0_37;
    MR_Word hlds__make_hlds__add_pred__PredInfo0_38;
    MR_Word hlds__make_hlds__add_pred__PredInfo_39;
    MR_Integer hlds__make_hlds__add_pred__ProcId_40;
    MR_Word hlds__make_hlds__add_pred__Preds_41;
    MR_Word hlds__make_hlds__add_pred__PredicateTable_42;
    MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_49_49;
    MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_52_52;
    MR_Word hlds__make_hlds__add_pred__PredIdPrime_34;
    MR_Word hlds__make_hlds__add_pred__Var_48;
    MR_Box hlds__make_hlds__add_pred__conv0_PredInfo0_38;

    {
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_43, &hlds__make_hlds__add_pred__ModuleName0_29);
    }
    {
      mdbcomp__sym_name__sym_name_get_module_name_default_3_p_0(hlds__make_hlds__add_pred__PredName_21, hlds__make_hlds__add_pred__ModuleName0_29, &hlds__make_hlds__add_pred__ModuleName_30);
    }
    {
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__make_hlds__add_pred__Modes_23, &hlds__make_hlds__add_pred__Arity_31);
    }
    {
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_43, &hlds__make_hlds__add_pred__PredicateTable0_32);
    }
    {
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__make_hlds__add_pred__PredicateTable0_32, (MR_Integer) 0, hlds__make_hlds__add_pred__PredOrFunc_20, hlds__make_hlds__add_pred__PredName_21, hlds__make_hlds__add_pred__Arity_31, &hlds__make_hlds__add_pred__PredIds_33);
    }
    hlds__make_hlds__add_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pred__PredIds_33)) == (MR_mktag((MR_Integer) 1)));
    if (hlds__make_hlds__add_pred__succeeded)
      {
        hlds__make_hlds__add_pred__PredIdPrime_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__PredIds_33, (MR_Integer) 0)));
        hlds__make_hlds__add_pred__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__PredIds_33, (MR_Integer) 1)));
        hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__Var_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    if (hlds__make_hlds__add_pred__succeeded)
      {
        hlds__make_hlds__add_pred__PredId_35 = hlds__make_hlds__add_pred__PredIdPrime_34;
        hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_52_52 = hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_45;
        hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_49_49 = hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_43;
      }
    else
      {
        MR_Word hlds__make_hlds__add_pred__Var_50;

        {
          hlds__make_hlds__add_pred__Var_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__Var_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__Var_50, 1) = ((MR_Box) (hlds__make_hlds__add_pred__PredName_21));
        }
        {
          hlds__make_hlds__add_pred__preds_add_implicit_report_error_14_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_43, &hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_49_49, hlds__make_hlds__add_pred__ModuleName_30, hlds__make_hlds__add_pred__PredName_21, hlds__make_hlds__add_pred__Arity_31, hlds__make_hlds__add_pred__PredOrFunc_20, hlds__make_hlds__add_pred__PredStatus_19, hlds__make_hlds__add_pred__IsClassMethod_25, hlds__make_hlds__add_pred__Context_16, hlds__make_hlds__add_pred__Var_50, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[11]), &hlds__make_hlds__add_pred__PredId_35, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_45, &hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_52_52);
        }
      }
    {
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_49_49, &hlds__make_hlds__add_pred__PredicateTable1_36);
    }
    {
      hlds__pred_table__predicate_table_get_preds_2_p_0(hlds__make_hlds__add_pred__PredicateTable1_36, &hlds__make_hlds__add_pred__Preds0_37);
    }
    hlds__make_hlds__add_pred__TypeCtorInfo_62_62 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
    hlds__make_hlds__add_pred__TypeCtorInfo_63_63 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
    {
      mercury__map__lookup_3_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_62_62, hlds__make_hlds__add_pred__TypeCtorInfo_63_63, hlds__make_hlds__add_pred__Preds0_37, ((MR_Box) (hlds__make_hlds__add_pred__PredId_35)), &hlds__make_hlds__add_pred__conv0_PredInfo0_38);
    }
    hlds__make_hlds__add_pred__PredInfo0_38 = ((MR_Word) hlds__make_hlds__add_pred__conv0_PredInfo0_38);
    {
      hlds__make_hlds__add_pred__module_do_add_mode_13_p_0(hlds__make_hlds__add_pred__Context_16, hlds__make_hlds__add_pred__ItemNumber_17, hlds__make_hlds__add_pred__MaybeItemMercuryStatus_18, hlds__make_hlds__add_pred__Arity_31, hlds__make_hlds__add_pred__InstVarSet_22, hlds__make_hlds__add_pred__Modes_23, hlds__make_hlds__add_pred__MaybeDet_24, hlds__make_hlds__add_pred__IsClassMethod_25, hlds__make_hlds__add_pred__PredInfo0_38, &hlds__make_hlds__add_pred__PredInfo_39, &hlds__make_hlds__add_pred__ProcId_40, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_52_52, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_46);
    }
    {
      mercury__map__det_update_4_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_62_62, hlds__make_hlds__add_pred__TypeCtorInfo_63_63, ((MR_Box) (hlds__make_hlds__add_pred__PredId_35)), ((MR_Box) (hlds__make_hlds__add_pred__PredInfo_39)), hlds__make_hlds__add_pred__Preds0_37, &hlds__make_hlds__add_pred__Preds_41);
    }
    {
      hlds__pred_table__predicate_table_set_preds_3_p_0(hlds__make_hlds__add_pred__Preds_41, hlds__make_hlds__add_pred__PredicateTable1_36, &hlds__make_hlds__add_pred__PredicateTable_42);
    }
    {
      hlds__hlds_module__module_info_set_predicate_table_3_p_0(hlds__make_hlds__add_pred__PredicateTable_42, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_49_49, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_44);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *hlds__make_hlds__add_pred__PredProcId_26 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredId_35));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__add_pred__ProcId_40));
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pred__do_add_new_proc_14_p_0(
  MR_Word hlds__make_hlds__add_pred__Context_15,
  MR_Integer hlds__make_hlds__add_pred__ItemNumber_16,
  MR_Integer hlds__make_hlds__add_pred__Arity_17,
  MR_Word hlds__make_hlds__add_pred__InstVarSet_18,
  MR_Word hlds__make_hlds__add_pred__ArgModes_19,
  MR_Word hlds__make_hlds__add_pred__MaybeDeclaredArgModes_20,
  MR_Word hlds__make_hlds__add_pred__MaybeArgLives_21,
  MR_Word hlds__make_hlds__add_pred__DetismDecl_22,
  MR_Word hlds__make_hlds__add_pred__MaybeDet_23,
  MR_Word hlds__make_hlds__add_pred__IsAddressTaken_24,
  MR_Word hlds__make_hlds__add_pred__HasParallelConj_25,
  MR_Word hlds__make_hlds__add_pred__PredInfo0_26,
  MR_Word * hlds__make_hlds__add_pred__PredInfo_27,
  MR_Integer * hlds__make_hlds__add_pred__ModeId_28)
{
  {
    MR_bool hlds__make_hlds__add_pred__succeeded;
    MR_Word hlds__make_hlds__add_pred__Procs0_29;
    MR_Word hlds__make_hlds__add_pred__ArgTypes_30;
    MR_Word hlds__make_hlds__add_pred__VarNameRemap_31;
    MR_Word hlds__make_hlds__add_pred__NewProc0_32;
    MR_Word hlds__make_hlds__add_pred__NewProc_33;
    MR_Word hlds__make_hlds__add_pred__Procs_34;

    {
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__make_hlds__add_pred__PredInfo0_26, &hlds__make_hlds__add_pred__Procs0_29);
    }
    {
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(hlds__make_hlds__add_pred__PredInfo0_26, &hlds__make_hlds__add_pred__ArgTypes_30);
    }
    {
      hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(hlds__make_hlds__add_pred__PredInfo0_26, &hlds__make_hlds__add_pred__VarNameRemap_31);
    }
    {
      hlds__hlds_pred__next_mode_id_2_p_0(hlds__make_hlds__add_pred__Procs0_29, hlds__make_hlds__add_pred__ModeId_28);
    }
    {
      hlds__hlds_pred__proc_info_init_13_p_0(hlds__make_hlds__add_pred__Context_15, hlds__make_hlds__add_pred__ItemNumber_16, hlds__make_hlds__add_pred__Arity_17, hlds__make_hlds__add_pred__ArgTypes_30, hlds__make_hlds__add_pred__MaybeDeclaredArgModes_20, hlds__make_hlds__add_pred__ArgModes_19, hlds__make_hlds__add_pred__MaybeArgLives_21, hlds__make_hlds__add_pred__DetismDecl_22, hlds__make_hlds__add_pred__MaybeDet_23, hlds__make_hlds__add_pred__IsAddressTaken_24, hlds__make_hlds__add_pred__HasParallelConj_25, hlds__make_hlds__add_pred__VarNameRemap_31, &hlds__make_hlds__add_pred__NewProc0_32);
    }
    {
      hlds__hlds_pred__proc_info_set_inst_varset_3_p_0(hlds__make_hlds__add_pred__InstVarSet_18, hlds__make_hlds__add_pred__NewProc0_32, &hlds__make_hlds__add_pred__NewProc_33);
    }
    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, *hlds__make_hlds__add_pred__ModeId_28, ((MR_Box) (hlds__make_hlds__add_pred__NewProc_33)), hlds__make_hlds__add_pred__Procs0_29, &hlds__make_hlds__add_pred__Procs_34);
    }
    {
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(hlds__make_hlds__add_pred__Procs_34, hlds__make_hlds__add_pred__PredInfo0_26, hlds__make_hlds__add_pred__PredInfo_27);
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pred__module_add_pred_or_func_21_p_0(
  MR_Word hlds__make_hlds__add_pred__Origin_22,
  MR_Word hlds__make_hlds__add_pred__Context_23,
  MR_Integer hlds__make_hlds__add_pred__ItemNumber_24,
  MR_Word hlds__make_hlds__add_pred__MaybeItemMercuryStatus_25,
  MR_Word hlds__make_hlds__add_pred__PredStatus_26,
  MR_Word hlds__make_hlds__add_pred__NeedQual_27,
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_28,
  MR_Word hlds__make_hlds__add_pred__PredName_29,
  MR_Word hlds__make_hlds__add_pred__TypeVarSet_30,
  MR_Word hlds__make_hlds__add_pred__InstVarSet_31,
  MR_Word hlds__make_hlds__add_pred__ExistQVars_32,
  MR_Word hlds__make_hlds__add_pred__TypesAndModes_33,
  MR_Word hlds__make_hlds__add_pred__Constraints_34,
  MR_Word hlds__make_hlds__add_pred__MaybeDet_35,
  MR_Word hlds__make_hlds__add_pred__Purity_36,
  MR_Word hlds__make_hlds__add_pred__Markers_37,
  MR_Word * hlds__make_hlds__add_pred__MaybePredProcId_38,
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_62,
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_63,
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_64,
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_65)
{
  {
    MR_bool hlds__make_hlds__add_pred__succeeded;
    MR_Word hlds__make_hlds__add_pred__Types_41;
    MR_Word hlds__make_hlds__add_pred__MaybeModes0_42;
    MR_Integer hlds__make_hlds__add_pred__Arity_43;
    MR_Word hlds__make_hlds__add_pred__Modes0_44;

    {
      parse_tree__prog_util__split_types_and_modes_3_p_0(hlds__make_hlds__add_pred__TypesAndModes_33, &hlds__make_hlds__add_pred__Types_41, &hlds__make_hlds__add_pred__MaybeModes0_42);
    }
    {
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__make_hlds__add_pred__Types_41, &hlds__make_hlds__add_pred__Arity_43);
    }
    hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__PredOrFunc_28 == (MR_Integer) 0);
    if (hlds__make_hlds__add_pred__succeeded)
      {
        hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__MaybeDet_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (hlds__make_hlds__add_pred__succeeded)
          {
            hlds__make_hlds__add_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pred__MaybeModes0_42)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__make_hlds__add_pred__succeeded)
              {
                hlds__make_hlds__add_pred__Modes0_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__MaybeModes0_42, (MR_Integer) 0)));
                hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__Modes0_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
          }
      }
    if (hlds__make_hlds__add_pred__succeeded)
      {
        {
          hlds__make_hlds__add_pred__add_new_pred_19_p_0(hlds__make_hlds__add_pred__Origin_22, hlds__make_hlds__add_pred__Context_23, hlds__make_hlds__add_pred__ItemNumber_24, hlds__make_hlds__add_pred__MaybeItemMercuryStatus_25, hlds__make_hlds__add_pred__PredStatus_26, hlds__make_hlds__add_pred__NeedQual_27, hlds__make_hlds__add_pred__PredOrFunc_28, hlds__make_hlds__add_pred__PredName_29, hlds__make_hlds__add_pred__TypeVarSet_30, hlds__make_hlds__add_pred__ExistQVars_32, hlds__make_hlds__add_pred__Types_41, hlds__make_hlds__add_pred__Constraints_34, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_pred__Purity_36, hlds__make_hlds__add_pred__Markers_37, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_62, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_63, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_64, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_65);
        }
        *hlds__make_hlds__add_pred__MaybePredProcId_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Word hlds__make_hlds__add_pred__Var_46;

        hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__PredOrFunc_28 == (MR_Integer) 1);
        if (hlds__make_hlds__add_pred__succeeded)
          {
            hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__MaybeModes0_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (hlds__make_hlds__add_pred__succeeded)
              {
                hlds__make_hlds__add_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pred__MaybeDet_35)) == (MR_mktag((MR_Integer) 1)));
                if (hlds__make_hlds__add_pred__succeeded)
                  hlds__make_hlds__add_pred__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__MaybeDet_35, (MR_Integer) 0)));
              }
          }
        if (hlds__make_hlds__add_pred__succeeded)
          {
            MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_100_100;
            MR_Integer hlds__make_hlds__add_pred__FuncArity_47;
            MR_Word hlds__make_hlds__add_pred__InMode_48;
            MR_Word hlds__make_hlds__add_pred__InModes_49;
            MR_Word hlds__make_hlds__add_pred__OutMode_50;
            MR_Word hlds__make_hlds__add_pred__Modes_52;
            MR_Word hlds__make_hlds__add_pred__IsClassMethod_53;
            MR_Word hlds__make_hlds__add_pred__PredProcId_55;
            MR_Word hlds__make_hlds__add_pred__Var_67;
            MR_Word hlds__make_hlds__add_pred__MaybeModes_204;
            MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_69_211;
            MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_70_212;

            {
              parse_tree__prog_util__adjust_func_arity_3_p_1((MR_Integer) 1, &hlds__make_hlds__add_pred__FuncArity_47, hlds__make_hlds__add_pred__Arity_43);
            }
            {
              parse_tree__prog_mode__in_mode_1_p_0(&hlds__make_hlds__add_pred__InMode_48);
            }
            hlds__make_hlds__add_pred__TypeCtorInfo_100_100 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
            {
              mercury__list__duplicate_3_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_100_100, hlds__make_hlds__add_pred__FuncArity_47, ((MR_Box) (hlds__make_hlds__add_pred__InMode_48)), &hlds__make_hlds__add_pred__InModes_49);
            }
            {
              parse_tree__prog_mode__out_mode_1_p_0(&hlds__make_hlds__add_pred__OutMode_50);
            }
            {
              hlds__make_hlds__add_pred__Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_67, 0) = ((MR_Box) (hlds__make_hlds__add_pred__OutMode_50));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              mercury__list__append_3_p_1(hlds__make_hlds__add_pred__TypeCtorInfo_100_100, hlds__make_hlds__add_pred__InModes_49, hlds__make_hlds__add_pred__Var_67, &hlds__make_hlds__add_pred__Modes_52);
            }
            {
              hlds__make_hlds__add_pred__MaybeModes_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__MaybeModes_204, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Modes_52));
            }
            {
              hlds__make_hlds__add_pred__add_new_pred_19_p_0(hlds__make_hlds__add_pred__Origin_22, hlds__make_hlds__add_pred__Context_23, hlds__make_hlds__add_pred__ItemNumber_24, hlds__make_hlds__add_pred__MaybeItemMercuryStatus_25, hlds__make_hlds__add_pred__PredStatus_26, hlds__make_hlds__add_pred__NeedQual_27, hlds__make_hlds__add_pred__PredOrFunc_28, hlds__make_hlds__add_pred__PredName_29, hlds__make_hlds__add_pred__TypeVarSet_30, hlds__make_hlds__add_pred__ExistQVars_32, hlds__make_hlds__add_pred__Types_41, hlds__make_hlds__add_pred__Constraints_34, hlds__make_hlds__add_pred__MaybeModes_204, hlds__make_hlds__add_pred__Purity_36, hlds__make_hlds__add_pred__Markers_37, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_62, &hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_69_211, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_64, &hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_70_212);
            }
            {
              hlds__make_hlds__add_pred__succeeded = hlds__hlds_pred__check_marker_2_p_0(hlds__make_hlds__add_pred__Markers_37, (MR_Integer) 10);
            }
            if (hlds__make_hlds__add_pred__succeeded)
              hlds__make_hlds__add_pred__IsClassMethod_53 = (MR_Integer) 1;
            else
              hlds__make_hlds__add_pred__IsClassMethod_53 = (MR_Integer) 0;
            {
              hlds__make_hlds__add_pred__module_add_mode_15_p_0(hlds__make_hlds__add_pred__Context_23, hlds__make_hlds__add_pred__ItemNumber_24, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_pred__PredStatus_26, hlds__make_hlds__add_pred__PredOrFunc_28, hlds__make_hlds__add_pred__PredName_29, hlds__make_hlds__add_pred__InstVarSet_31, hlds__make_hlds__add_pred__Modes_52, hlds__make_hlds__add_pred__MaybeDet_35, hlds__make_hlds__add_pred__IsClassMethod_53, &hlds__make_hlds__add_pred__PredProcId_55, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_69_211, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_63, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_70_212, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_65);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *hlds__make_hlds__add_pred__MaybePredProcId_38 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredProcId_55));
            }
          }
        else
          {
            MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_69_248;
            MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_70_249;

            {
              hlds__make_hlds__add_pred__add_new_pred_19_p_0(hlds__make_hlds__add_pred__Origin_22, hlds__make_hlds__add_pred__Context_23, hlds__make_hlds__add_pred__ItemNumber_24, hlds__make_hlds__add_pred__MaybeItemMercuryStatus_25, hlds__make_hlds__add_pred__PredStatus_26, hlds__make_hlds__add_pred__NeedQual_27, hlds__make_hlds__add_pred__PredOrFunc_28, hlds__make_hlds__add_pred__PredName_29, hlds__make_hlds__add_pred__TypeVarSet_30, hlds__make_hlds__add_pred__ExistQVars_32, hlds__make_hlds__add_pred__Types_41, hlds__make_hlds__add_pred__Constraints_34, hlds__make_hlds__add_pred__MaybeModes0_42, hlds__make_hlds__add_pred__Purity_36, hlds__make_hlds__add_pred__Markers_37, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_62, &hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_69_248, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_64, &hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_70_249);
            }
            if ((hlds__make_hlds__add_pred__MaybeModes0_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word hlds__make_hlds__add_pred__Var_117;
                MR_Word hlds__make_hlds__add_pred__Var_103;
                MR_Word hlds__make_hlds__add_pred__Var_104;
                MR_Word hlds__make_hlds__add_pred__Var_105;
                MR_Word hlds__make_hlds__add_pred__Var_106;
                MR_String hlds__make_hlds__add_pred__Var_107;
                MR_Word hlds__make_hlds__add_pred__Var_108;

                *hlds__make_hlds__add_pred__MaybePredProcId_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                hlds__make_hlds__add_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pred__MaybeDet_35)) == (MR_mktag((MR_Integer) 1)));
                if (hlds__make_hlds__add_pred__succeeded)
                  {
                    hlds__make_hlds__add_pred__Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__MaybeDet_35, (MR_Integer) 0)));
                    hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__PredOrFunc_28 == (MR_Integer) 0);
                    if (hlds__make_hlds__add_pred__succeeded)
                      {
                        hlds__make_hlds__add_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pred__Types_41)) == (MR_mktag((MR_Integer) 1)));
                        if (hlds__make_hlds__add_pred__succeeded)
                          {
                            hlds__make_hlds__add_pred__Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Types_41, (MR_Integer) 0)));
                            hlds__make_hlds__add_pred__Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Types_41, (MR_Integer) 1)));
                            hlds__make_hlds__add_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pred__PredName_29)) == (MR_mktag((MR_Integer) 1)));
                            if (hlds__make_hlds__add_pred__succeeded)
                              {
                                hlds__make_hlds__add_pred__Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__PredName_29, (MR_Integer) 0)));
                                hlds__make_hlds__add_pred__Var_107 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__PredName_29, (MR_Integer) 1)));
                                {
                                  hlds__make_hlds__add_pred__Var_108 = mdbcomp__builtin_modules__mercury_int_module_0_f_0();
                                }
                                {
                                  hlds__make_hlds__add_pred__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__make_hlds__add_pred__Var_106, hlds__make_hlds__add_pred__Var_108);
                                }
                                if (hlds__make_hlds__add_pred__succeeded)
                                  hlds__make_hlds__add_pred__succeeded = (strcmp(hlds__make_hlds__add_pred__Var_107, (MR_String) "is") == 0);
                              }
                            hlds__make_hlds__add_pred__succeeded = !(hlds__make_hlds__add_pred__succeeded);
                            if (hlds__make_hlds__add_pred__succeeded)
                              {
                                {
                                  hlds__make_hlds__add_pred__Var_117 = hlds__status__pred_status_defined_in_this_module_1_f_0(hlds__make_hlds__add_pred__PredStatus_26);
                                }
                                hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__Var_117 == (MR_Integer) 1);
                              }
                          }
                      }
                  }
                if (hlds__make_hlds__add_pred__succeeded)
                  {
                    MR_Word hlds__make_hlds__add_pred__DetPieces_119;
                    MR_Word hlds__make_hlds__add_pred__DetMsg_120;
                    MR_Word hlds__make_hlds__add_pred__DetSpec_121;
                    MR_Word hlds__make_hlds__add_pred__Var_124;
                    MR_Word hlds__make_hlds__add_pred__Var_125;
                    MR_Word hlds__make_hlds__add_pred__Var_126;
                    MR_Word hlds__make_hlds__add_pred__Var_128;
                    MR_Word hlds__make_hlds__add_pred__Var_129;
                    MR_Word hlds__make_hlds__add_pred__Var_133;

                    {
                      hlds__make_hlds__add_pred__Var_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Var_126, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredName_29));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Var_126, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Arity_43));
                    }
                    {
                      hlds__make_hlds__add_pred__Var_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__Var_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__Var_125, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Var_126));
                    }
                    {
                      hlds__make_hlds__add_pred__Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_124, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Var_125));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[7])));
                    }
                    {
                      hlds__make_hlds__add_pred__DetPieces_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__DetPieces_119, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[46])));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__DetPieces_119, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Var_124));
                    }
                    {
                      hlds__make_hlds__add_pred__Var_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Var_129, 0) = ((MR_Box) (hlds__make_hlds__add_pred__DetPieces_119));
                    }
                    {
                      hlds__make_hlds__add_pred__Var_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_128, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Var_129));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_128, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      hlds__make_hlds__add_pred__DetMsg_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__DetMsg_120, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Context_23));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__DetMsg_120, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Var_128));
                    }
                    {
                      hlds__make_hlds__add_pred__Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_133, 0) = ((MR_Box) (hlds__make_hlds__add_pred__DetMsg_120));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Var_133, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      hlds__make_hlds__add_pred__DetSpec_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__DetSpec_121, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__DetSpec_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__DetSpec_121, 2) = ((MR_Box) (hlds__make_hlds__add_pred__Var_133));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_65 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pred__DetSpec_121));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_70_249));
                    }
                  }
                else
                  *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_65 = hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_70_249;
                *hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_63 = hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_69_248;
              }
            else
              {
                MR_Word hlds__make_hlds__add_pred__Modes_232 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__MaybeModes0_42, (MR_Integer) 0)));
                MR_Word hlds__make_hlds__add_pred__IsClassMethod_233;
                MR_Word hlds__make_hlds__add_pred__PredProcId_235;

                {
                  hlds__make_hlds__add_pred__succeeded = hlds__hlds_pred__check_marker_2_p_0(hlds__make_hlds__add_pred__Markers_37, (MR_Integer) 10);
                }
                if (hlds__make_hlds__add_pred__succeeded)
                  hlds__make_hlds__add_pred__IsClassMethod_233 = (MR_Integer) 1;
                else
                  hlds__make_hlds__add_pred__IsClassMethod_233 = (MR_Integer) 0;
                {
                  hlds__make_hlds__add_pred__module_add_mode_15_p_0(hlds__make_hlds__add_pred__Context_23, hlds__make_hlds__add_pred__ItemNumber_24, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_pred__PredStatus_26, hlds__make_hlds__add_pred__PredOrFunc_28, hlds__make_hlds__add_pred__PredName_29, hlds__make_hlds__add_pred__InstVarSet_31, hlds__make_hlds__add_pred__Modes_232, hlds__make_hlds__add_pred__MaybeDet_35, hlds__make_hlds__add_pred__IsClassMethod_233, &hlds__make_hlds__add_pred__PredProcId_235, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_69_248, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_63, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_70_249, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_65);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *hlds__make_hlds__add_pred__MaybePredProcId_38 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredProcId_235));
                }
              }
          }
      }
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__make_hlds__add_pred__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module hlds.make_hlds.add_pred. */
