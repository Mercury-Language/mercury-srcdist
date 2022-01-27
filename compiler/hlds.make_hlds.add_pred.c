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
#include "libs.compiler_util.mih"
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
hlds__make_hlds__add_pred__module_do_add_mode_12_p_0(
  MR_Word hlds__make_hlds__add_pred__InstVarSet_13,
  MR_Integer hlds__make_hlds__add_pred__Arity_14,
  MR_Word hlds__make_hlds__add_pred__Modes_15,
  MR_Word hlds__make_hlds__add_pred__MaybeDet_16,
  MR_Word hlds__make_hlds__add_pred__IsClassMethod_17,
  MR_Word hlds__make_hlds__add_pred__MaybeItemMercuryStatus_18,
  MR_Word hlds__make_hlds__add_pred__Context_19,
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_48,
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_49,
  MR_Integer * hlds__make_hlds__add_pred__ProcId_21,
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_50,
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_51);

static void MR_CALL 
hlds__make_hlds__add_pred__add_builtin_5_p_0(
  MR_Word hlds__make_hlds__add_pred__PredId_6,
  MR_Word hlds__make_hlds__add_pred__Types_7,
  MR_Word hlds__make_hlds__add_pred__CompilationTarget_8,
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_59,
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_60);

static MR_Word MR_CALL 
hlds__make_hlds__add_pred__item_decl_section_1_f_0(
  MR_Word hlds__make_hlds__add_pred__ItemExport_3);

static void MR_CALL 
hlds__make_hlds__add_pred__add_new_pred_18_p_0(
  MR_Word hlds__make_hlds__add_pred__Origin_19,
  MR_Word hlds__make_hlds__add_pred__TVarSet_20,
  MR_Word hlds__make_hlds__add_pred__ExistQVars_21,
  MR_Word hlds__make_hlds__add_pred__PredName_22,
  MR_Word hlds__make_hlds__add_pred__Types_23,
  MR_Word hlds__make_hlds__add_pred__Purity_24,
  MR_Word hlds__make_hlds__add_pred__Constraints_25,
  MR_Word hlds__make_hlds__add_pred__Markers0_26,
  MR_Word hlds__make_hlds__add_pred__Context_27,
  MR_Word hlds__make_hlds__add_pred__PredStatus0_28,
  MR_Word hlds__make_hlds__add_pred__MaybeItemMercuryStatus_29,
  MR_Word hlds__make_hlds__add_pred__MaybeModes_30,
  MR_Word hlds__make_hlds__add_pred__NeedQual_31,
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_32,
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_71,
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_72,
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_73,
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_74);


static /* final */ const MR_Box hlds__make_hlds__add_pred_scalar_common_1[68][2];

static /* final */ const MR_Box hlds__make_hlds__add_pred_scalar_common_2[1][4];

static /* final */ const MR_Box hlds__make_hlds__add_pred_scalar_common_3[4][1];

static /* final */ const MR_Box hlds__make_hlds__add_pred_scalar_common_5[2][3];


/* sealed */ struct hlds__make_hlds__add_pred__vector_common_type_4_0_s {
  const MR_String hlds__make_hlds__add_pred__vector_common_type_4_0__vct_4_f_0;
  const MR_Integer hlds__make_hlds__add_pred__vector_common_type_4_0__vct_4_f_1;
};

static /* final */ const struct hlds__make_hlds__add_pred__vector_common_type_4_0_s hlds__make_hlds__add_pred_vector_common_4[4];



static /* final */ const MR_Box hlds__make_hlds__add_pred_scalar_common_1[68][2] = {
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
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: mode declaration in the"))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "section"))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "whose"))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in the"))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "has its"))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: no determinism declaration for local"))
  },
  /* row 61 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[36])))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pred_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: no determinism declaration"))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for type class method"))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: no determinism declaration for exported"))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Internal error: the unqualified predicate name"))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In declaration of"))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pred_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 172)),
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
    MR_Integer hlds__make_hlds__add_pred__V_19_19;
    MR_Word hlds__make_hlds__add_pred__AccessType_14;

    {
      hlds__make_hlds__add_pred__succeeded = hlds__hlds_pred__is_field_access_function_name_5_p_0(hlds__make_hlds__add_pred__ModuleInfo_8, hlds__make_hlds__add_pred__FuncName_9, &hlds__make_hlds__add_pred__V_19_19, &hlds__make_hlds__add_pred__AccessType_14, &hlds__make_hlds__add_pred__FieldName_15);
    }
    if (hlds__make_hlds__add_pred__succeeded)
      hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__FuncArity_10 == hlds__make_hlds__add_pred__V_19_19);
    if (hlds__make_hlds__add_pred__succeeded)
      {
        MR_Integer hlds__make_hlds__add_pred__PredArity_30;
        MR_Word hlds__make_hlds__add_pred__FuncCallId_31;
        MR_Word hlds__make_hlds__add_pred__CtorFieldTable_32;
        MR_Word hlds__make_hlds__add_pred__TypeInfo_39_49;
        MR_Word hlds__make_hlds__add_pred__FieldDefn_33;
        MR_Word hlds__make_hlds__add_pred__DefnStatus_35;
        MR_Word hlds__make_hlds__add_pred__V_41_41;
        MR_Word hlds__make_hlds__add_pred__V_43_43;
        MR_Word hlds__make_hlds__add_pred__V_48_48;
        MR_Box hlds__make_hlds__add_pred__conv0_V_41_41;
        MR_Word hlds__make_hlds__add_pred__V_44_44;
        MR_Word hlds__make_hlds__add_pred__V_34_34;
        MR_Word hlds__make_hlds__add_pred__V_36_36;
        MR_Word hlds__make_hlds__add_pred__V_37_37;
        MR_Integer hlds__make_hlds__add_pred__V_38_38;

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
          hlds__make_hlds__add_pred__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[2], hlds__make_hlds__add_pred__CtorFieldTable_32, ((MR_Box) (hlds__make_hlds__add_pred__FieldName_15)), &hlds__make_hlds__add_pred__conv0_V_41_41);
        }
        if (hlds__make_hlds__add_pred__succeeded)
          {
            hlds__make_hlds__add_pred__V_41_41 = ((MR_Word) hlds__make_hlds__add_pred__conv0_V_41_41);
            hlds__make_hlds__add_pred__succeeded = MR_TRUE;
          }
        if (hlds__make_hlds__add_pred__succeeded)
          {
            hlds__make_hlds__add_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pred__V_41_41)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__make_hlds__add_pred__succeeded)
              {
                hlds__make_hlds__add_pred__FieldDefn_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_41_41, (MR_Integer) 0)));
                hlds__make_hlds__add_pred__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_41_41, (MR_Integer) 1)));
                hlds__make_hlds__add_pred__TypeInfo_39_49 = (MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[2];
                {
                  hlds__make_hlds__add_pred__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__add_pred__TypeInfo_39_49, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (hlds__make_hlds__add_pred__V_48_48)));
                }
                if (hlds__make_hlds__add_pred__succeeded)
                  {
                    hlds__make_hlds__add_pred__V_44_44 = (MR_Word) hlds__make_hlds__add_pred__FuncStatus_11;
                    hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__V_44_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                    hlds__make_hlds__add_pred__succeeded = !(hlds__make_hlds__add_pred__succeeded);
                    if (hlds__make_hlds__add_pred__succeeded)
                      {
                        hlds__make_hlds__add_pred__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__FieldDefn_33, (MR_Integer) 0)));
                        hlds__make_hlds__add_pred__DefnStatus_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__FieldDefn_33, (MR_Integer) 1)));
                        hlds__make_hlds__add_pred__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__FieldDefn_33, (MR_Integer) 2)));
                        hlds__make_hlds__add_pred__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__FieldDefn_33, (MR_Integer) 3)));
                        hlds__make_hlds__add_pred__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__FieldDefn_33, (MR_Integer) 4)));
                        hlds__make_hlds__add_pred__V_43_43 = (MR_Word) hlds__make_hlds__add_pred__DefnStatus_35;
                        hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__V_43_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                      }
                  }
              }
          }
        if (hlds__make_hlds__add_pred__succeeded)
          {
            MR_Word hlds__make_hlds__add_pred__Pieces_55;
            MR_Word hlds__make_hlds__add_pred__Msg_56;
            MR_Word hlds__make_hlds__add_pred__Spec_57;
            MR_Word hlds__make_hlds__add_pred__V_60_60;
            MR_Word hlds__make_hlds__add_pred__V_61_61;
            MR_Word hlds__make_hlds__add_pred__V_76_76;
            MR_Word hlds__make_hlds__add_pred__V_77_77;
            MR_Word hlds__make_hlds__add_pred__V_81_81;

            {
              hlds__make_hlds__add_pred__V_61_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_61_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_61_61, 1) = ((MR_Box) (hlds__make_hlds__add_pred__FuncCallId_31));
            }
            {
              hlds__make_hlds__add_pred__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_60_60, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_61_61));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[45])));
            }
            {
              hlds__make_hlds__add_pred__Pieces_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Pieces_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[67])));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Pieces_55, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_60_60));
            }
            {
              hlds__make_hlds__add_pred__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_77_77, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Pieces_55));
            }
            {
              hlds__make_hlds__add_pred__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_76_76, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_77_77));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              hlds__make_hlds__add_pred__Msg_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_56, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Context_12));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_56, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_76_76));
            }
            {
              hlds__make_hlds__add_pred__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_81_81, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Msg_56));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              hlds__make_hlds__add_pred__Spec_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_57, 2) = ((MR_Box) (hlds__make_hlds__add_pred__V_81_81));
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
    MR_Word hlds__make_hlds__add_pred__V_45_45;

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
      hlds__make_hlds__add_pred__V_45_45 = mercury__map__init_0_f_0((MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
    }
    {
      parse_tree__prog_type__var_list_to_type_list_3_p_0(hlds__make_hlds__add_pred__V_45_45, hlds__make_hlds__add_pred__TypeVars_27, &hlds__make_hlds__add_pred__Types_29);
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
    MR_Word hlds__make_hlds__add_pred__V_17_17;
    MR_Word hlds__make_hlds__add_pred__V_18_18;
    MR_Word hlds__make_hlds__add_pred__V_19_19;
    MR_Word hlds__make_hlds__add_pred__V_26_26;
    MR_Word hlds__make_hlds__add_pred__V_27_27;
    MR_Word hlds__make_hlds__add_pred__V_31_31;

    {
      hlds__make_hlds__add_pred__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_19_19, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredName_6));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_19_19, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Arity_7));
    }
    {
      hlds__make_hlds__add_pred__V_18_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_18_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_18_18, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_19_19));
    }
    {
      hlds__make_hlds__add_pred__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_17_17, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_18_18));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[38])));
    }
    {
      hlds__make_hlds__add_pred__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[66])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Pieces_10, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_17_17));
    }
    {
      hlds__make_hlds__add_pred__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_27_27, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Pieces_10));
    }
    {
      hlds__make_hlds__add_pred__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_26_26, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_27_27));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_pred__Msg_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_11, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Context_8));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_11, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_26_26));
    }
    {
      hlds__make_hlds__add_pred__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_31_31, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Msg_11));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_pred__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_12, 2) = ((MR_Box) (hlds__make_hlds__add_pred__V_31_31));
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
    MR_Word hlds__make_hlds__add_pred__V_19_19;
    MR_Word hlds__make_hlds__add_pred__V_20_20;
    MR_Word hlds__make_hlds__add_pred__V_21_21;
    MR_Word hlds__make_hlds__add_pred__V_22_22;
    MR_Word hlds__make_hlds__add_pred__V_23_23;
    MR_Word hlds__make_hlds__add_pred__V_30_30;
    MR_Word hlds__make_hlds__add_pred__V_31_31;
    MR_Word hlds__make_hlds__add_pred__V_35_35;

    {
      hlds__make_hlds__add_pred__V_20_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_20_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_20_20, 1) = ((MR_Box) (hlds__make_hlds__add_pred__PredOrFunc_9));
    }
    {
      hlds__make_hlds__add_pred__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_23_23, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Name_7));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_23_23, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Arity_8));
    }
    {
      hlds__make_hlds__add_pred__V_22_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_22_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_22_22, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_23_23));
    }
    {
      hlds__make_hlds__add_pred__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_21_21, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_22_22));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[13])));
    }
    {
      hlds__make_hlds__add_pred__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_19_19, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_20_20));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_19_19, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_21_21));
    }
    {
      hlds__make_hlds__add_pred__Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Pieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[65])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Pieces_12, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_19_19));
    }
    {
      hlds__make_hlds__add_pred__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_31_31, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Pieces_12));
    }
    {
      hlds__make_hlds__add_pred__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_30_30, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_31_31));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_pred__Msg_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_13, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Context_10));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_13, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_30_30));
    }
    {
      hlds__make_hlds__add_pred__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_35_35, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Msg_13));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_pred__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_14, 2) = ((MR_Box) (hlds__make_hlds__add_pred__V_35_35));
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
    MR_Word hlds__make_hlds__add_pred__V_19_19;
    MR_Word hlds__make_hlds__add_pred__V_22_22;
    MR_Word hlds__make_hlds__add_pred__V_23_23;
    MR_Word hlds__make_hlds__add_pred__V_24_24;
    MR_Word hlds__make_hlds__add_pred__V_25_25;
    MR_Word hlds__make_hlds__add_pred__V_26_26;
    MR_Word hlds__make_hlds__add_pred__V_33_33;
    MR_Word hlds__make_hlds__add_pred__V_34_34;
    MR_Word hlds__make_hlds__add_pred__V_38_38;

    {
      hlds__make_hlds__add_pred__V_23_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_23_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_23_23, 1) = ((MR_Box) (hlds__make_hlds__add_pred__PredOrFunc_9));
    }
    {
      hlds__make_hlds__add_pred__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_26_26, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Name_7));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_26_26, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Arity_8));
    }
    {
      hlds__make_hlds__add_pred__V_25_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_25_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_25_25, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_26_26));
    }
    {
      hlds__make_hlds__add_pred__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_24_24, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_25_25));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[13])));
    }
    {
      hlds__make_hlds__add_pred__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_22_22, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_23_23));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_22_22, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_24_24));
    }
    {
      hlds__make_hlds__add_pred__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_19_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[64])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_19_19, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_22_22));
    }
    {
      hlds__make_hlds__add_pred__Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Pieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[63])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Pieces_12, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_19_19));
    }
    {
      hlds__make_hlds__add_pred__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_34_34, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Pieces_12));
    }
    {
      hlds__make_hlds__add_pred__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_33_33, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_34_34));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_pred__Msg_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_13, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Context_10));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_13, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_33_33));
    }
    {
      hlds__make_hlds__add_pred__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_38_38, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Msg_13));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_pred__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_14, 2) = ((MR_Box) (hlds__make_hlds__add_pred__V_38_38));
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
    MR_Word hlds__make_hlds__add_pred__V_22_22;
    MR_Word hlds__make_hlds__add_pred__V_23_23;
    MR_Word hlds__make_hlds__add_pred__V_24_24;
    MR_Word hlds__make_hlds__add_pred__V_60_60;
    MR_Word hlds__make_hlds__add_pred__V_65_65;
    MR_Word hlds__make_hlds__add_pred__V_66_66;
    MR_Word hlds__make_hlds__add_pred__V_75_75;

    {
      hlds__make_hlds__add_pred__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_24_24, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredOrFunc_9));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_24_24, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Name_7));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_24_24, 2) = ((MR_Box) (hlds__make_hlds__add_pred__Arity_8));
    }
    {
      hlds__make_hlds__add_pred__V_23_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_23_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_23_23, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_24_24));
    }
    {
      hlds__make_hlds__add_pred__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_22_22, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_23_23));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[13])));
    }
    {
      hlds__make_hlds__add_pred__MainPieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__MainPieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[60])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__MainPieces_12, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_22_22));
    }
    {
      hlds__make_hlds__add_pred__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_60_60, 0) = ((MR_Box) (hlds__make_hlds__add_pred__MainPieces_12));
    }
    {
      hlds__make_hlds__add_pred__InnerComponents_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__InnerComponents_14, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_60_60));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__InnerComponents_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[62])));
    }
    {
      hlds__make_hlds__add_pred__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_66_66, 0) = ((MR_Box) (((MR_Integer) 172 | (((MR_Integer) 0 << (MR_Integer) 10)))));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_66_66, 1) = ((MR_Box) (hlds__make_hlds__add_pred__InnerComponents_14));
    }
    {
      hlds__make_hlds__add_pred__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_65_65, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_66_66));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_pred__Msg_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_15, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Context_10));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Msg_15, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_65_65));
    }
    {
      hlds__make_hlds__add_pred__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_75_75, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Msg_15));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_pred__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_2[0])));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Spec_17, 2) = ((MR_Box) (hlds__make_hlds__add_pred__V_75_75));
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
hlds__make_hlds__add_pred__module_do_add_mode_12_p_0(
  MR_Word hlds__make_hlds__add_pred__InstVarSet_13,
  MR_Integer hlds__make_hlds__add_pred__Arity_14,
  MR_Word hlds__make_hlds__add_pred__Modes_15,
  MR_Word hlds__make_hlds__add_pred__MaybeDet_16,
  MR_Word hlds__make_hlds__add_pred__IsClassMethod_17,
  MR_Word hlds__make_hlds__add_pred__MaybeItemMercuryStatus_18,
  MR_Word hlds__make_hlds__add_pred__Context_19,
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_48,
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_49,
  MR_Integer * hlds__make_hlds__add_pred__ProcId_21,
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_50,
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_51)
{
  {
    MR_bool hlds__make_hlds__add_pred__succeeded;
    MR_String hlds__make_hlds__add_pred__PredName_23;
    MR_Word hlds__make_hlds__add_pred__PredOrFunc_24;
    MR_Word hlds__make_hlds__add_pred__DetismDecl_25;
    MR_Word hlds__make_hlds__add_pred__MaybeCurUserDecl_31;
    MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_54_54;
    MR_Word hlds__make_hlds__add_pred__V_137_137;

    {
      hlds__make_hlds__add_pred__PredName_23 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_48);
    }
    {
      hlds__make_hlds__add_pred__PredOrFunc_24 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_48);
    }
    if ((hlds__make_hlds__add_pred__MaybeDet_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word hlds__make_hlds__add_pred__PredStatus_26;
        MR_Word hlds__make_hlds__add_pred__PredModule_27;
        MR_Word hlds__make_hlds__add_pred__PredSymName_28;

        hlds__make_hlds__add_pred__DetismDecl_25 = (MR_Integer) 2;
        {
          hlds__hlds_pred__pred_info_get_status_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_48, &hlds__make_hlds__add_pred__PredStatus_26);
        }
        {
          hlds__make_hlds__add_pred__PredModule_27 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_48);
        }
        {
          hlds__make_hlds__add_pred__PredSymName_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__PredSymName_28, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredModule_27));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__PredSymName_28, 1) = ((MR_Box) (hlds__make_hlds__add_pred__PredName_23));
        }
        switch (hlds__make_hlds__add_pred__IsClassMethod_17) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              hlds__make_hlds__add_pred__unspecified_det_for_method_6_p_0(hlds__make_hlds__add_pred__PredSymName_28, hlds__make_hlds__add_pred__Arity_14, hlds__make_hlds__add_pred__PredOrFunc_24, hlds__make_hlds__add_pred__Context_19, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_50, &hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_54_54);
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word hlds__make_hlds__add_pred__IsExported_29;

              {
                hlds__make_hlds__add_pred__IsExported_29 = hlds__status__pred_status_is_exported_1_f_0(hlds__make_hlds__add_pred__PredStatus_26);
              }
              switch (hlds__make_hlds__add_pred__IsExported_29) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    hlds__make_hlds__add_pred__unspecified_det_for_local_6_p_0(hlds__make_hlds__add_pred__PredSymName_28, hlds__make_hlds__add_pred__Arity_14, hlds__make_hlds__add_pred__PredOrFunc_24, hlds__make_hlds__add_pred__Context_19, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_50, &hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_54_54);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    hlds__make_hlds__add_pred__unspecified_det_for_exported_6_p_0(hlds__make_hlds__add_pred__PredSymName_28, hlds__make_hlds__add_pred__Arity_14, hlds__make_hlds__add_pred__PredOrFunc_24, hlds__make_hlds__add_pred__Context_19, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_50, &hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_54_54);
                  }
                  break;
              }
            }
            break;
        }
      }
    else
      {
        hlds__make_hlds__add_pred__DetismDecl_25 = (MR_Integer) 0;
        hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_54_54 = hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_50;
      }
    {
      hlds__hlds_pred__pred_info_get_cur_user_decl_info_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_48, &hlds__make_hlds__add_pred__MaybeCurUserDecl_31);
    }
    if ((hlds__make_hlds__add_pred__MaybeCurUserDecl_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_51 = hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_54_54;
    else
      {
        MR_Word hlds__make_hlds__add_pred__CurUserDecl_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__MaybeCurUserDecl_31, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__add_pred__PredDeclSection_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__CurUserDecl_32, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__add_pred__PredIsPredMode_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__CurUserDecl_32, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__add_pred__ItemExport_36;
        MR_Word hlds__make_hlds__add_pred__ItemMercuryStatus_35;

        hlds__make_hlds__add_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pred__MaybeItemMercuryStatus_18)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__make_hlds__add_pred__succeeded)
          {
            hlds__make_hlds__add_pred__ItemMercuryStatus_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__MaybeItemMercuryStatus_18, (MR_Integer) 0)));
            hlds__make_hlds__add_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pred__ItemMercuryStatus_35)) == (MR_mktag((MR_Integer) 0)));
            if (hlds__make_hlds__add_pred__succeeded)
              hlds__make_hlds__add_pred__ItemExport_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ItemMercuryStatus_35, (MR_Integer) 0)));
          }
        if (hlds__make_hlds__add_pred__succeeded)
          {
            MR_Word hlds__make_hlds__add_pred__ModeDeclSection_37;
            MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_103_103;

            {
              hlds__make_hlds__add_pred__ModeDeclSection_37 = hlds__make_hlds__add_pred__item_decl_section_1_f_0(hlds__make_hlds__add_pred__ItemExport_36);
            }
            hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__PredDeclSection_33 == hlds__make_hlds__add_pred__ModeDeclSection_37);
            if (hlds__make_hlds__add_pred__succeeded)
              hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_103_103 = hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_54_54;
            else
              {
                MR_String hlds__make_hlds__add_pred__ModeSectionStr_38;
                MR_String hlds__make_hlds__add_pred__PredSectionStr_39;
                MR_Word hlds__make_hlds__add_pred__SectionPieces_40;
                MR_Word hlds__make_hlds__add_pred__SectionMsg_41;
                MR_Word hlds__make_hlds__add_pred__SectionSpec_42;
                MR_Word hlds__make_hlds__add_pred__V_57_57;
                MR_Word hlds__make_hlds__add_pred__V_58_58;
                MR_Word hlds__make_hlds__add_pred__V_59_59;
                MR_Word hlds__make_hlds__add_pred__V_62_62;
                MR_Word hlds__make_hlds__add_pred__V_65_65;
                MR_Word hlds__make_hlds__add_pred__V_66_66;
                MR_Word hlds__make_hlds__add_pred__V_67_67;
                MR_Word hlds__make_hlds__add_pred__V_68_68;
                MR_Word hlds__make_hlds__add_pred__V_69_69;
                MR_Word hlds__make_hlds__add_pred__V_70_70;
                MR_Word hlds__make_hlds__add_pred__V_71_71;
                MR_Word hlds__make_hlds__add_pred__V_74_74;
                MR_Word hlds__make_hlds__add_pred__V_77_77;
                MR_Word hlds__make_hlds__add_pred__V_79_79;
                MR_Word hlds__make_hlds__add_pred__V_82_82;
                MR_Word hlds__make_hlds__add_pred__V_85_85;
                MR_Word hlds__make_hlds__add_pred__V_88_88;
                MR_Word hlds__make_hlds__add_pred__V_89_89;
                MR_Word hlds__make_hlds__add_pred__V_96_96;
                MR_Word hlds__make_hlds__add_pred__V_97_97;
                MR_Word hlds__make_hlds__add_pred__V_101_101;

                {
                  hlds__make_hlds__add_pred__ModeSectionStr_38 = hlds__make_hlds__add_pred__decl_section_to_string_1_f_0(hlds__make_hlds__add_pred__ModeDeclSection_37);
                }
                {
                  hlds__make_hlds__add_pred__PredSectionStr_39 = hlds__make_hlds__add_pred__decl_section_to_string_1_f_0(hlds__make_hlds__add_pred__PredDeclSection_33);
                }
                {
                  hlds__make_hlds__add_pred__V_58_58 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pred__V_58_58, 0) = ((MR_Box) (hlds__make_hlds__add_pred__ModeSectionStr_38));
                }
                {
                  hlds__make_hlds__add_pred__V_66_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_66_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_66_66, 1) = ((MR_Box) (hlds__make_hlds__add_pred__PredOrFunc_24));
                }
                {
                  hlds__make_hlds__add_pred__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_70_70, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredName_23));
                }
                {
                  hlds__make_hlds__add_pred__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_69_69, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_70_70));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_69_69, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Arity_14));
                }
                {
                  hlds__make_hlds__add_pred__V_68_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_68_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_68_68, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_69_69));
                }
                {
                  hlds__make_hlds__add_pred__V_89_89 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pred__V_89_89, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredSectionStr_39));
                }
                {
                  hlds__make_hlds__add_pred__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_88_88, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_89_89));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_88_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[13])));
                }
                {
                  hlds__make_hlds__add_pred__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_85_85, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[57])));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_85_85, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_88_88));
                }
                {
                  hlds__make_hlds__add_pred__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_82_82, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[56])));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_82_82, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_85_85));
                }
                {
                  hlds__make_hlds__add_pred__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_79_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[55])));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_79_79, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_82_82));
                }
                {
                  hlds__make_hlds__add_pred__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_77_77, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_66_66));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_77_77, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_79_79));
                }
                {
                  hlds__make_hlds__add_pred__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_74_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[54])));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_74_74, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_77_77));
                }
                {
                  hlds__make_hlds__add_pred__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_71_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[53])));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_71_71, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_74_74));
                }
                {
                  hlds__make_hlds__add_pred__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_67_67, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_68_68));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_67_67, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_71_71));
                }
                {
                  hlds__make_hlds__add_pred__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_65_65, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_66_66));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_65_65, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_67_67));
                }
                {
                  hlds__make_hlds__add_pred__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_62_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[52])));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_62_62, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_65_65));
                }
                {
                  hlds__make_hlds__add_pred__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_59_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[51])));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_59_59, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_62_62));
                }
                {
                  hlds__make_hlds__add_pred__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_57_57, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_58_58));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_57_57, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_59_59));
                }
                {
                  hlds__make_hlds__add_pred__SectionPieces_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__SectionPieces_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[50])));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__SectionPieces_40, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_57_57));
                }
                {
                  hlds__make_hlds__add_pred__V_97_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_97_97, 0) = ((MR_Box) (hlds__make_hlds__add_pred__SectionPieces_40));
                }
                {
                  hlds__make_hlds__add_pred__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_96_96, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_97_97));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  hlds__make_hlds__add_pred__SectionMsg_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__SectionMsg_41, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Context_19));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__SectionMsg_41, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_96_96));
                }
                {
                  hlds__make_hlds__add_pred__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_101_101, 0) = ((MR_Box) (hlds__make_hlds__add_pred__SectionMsg_41));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  hlds__make_hlds__add_pred__SectionSpec_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__SectionSpec_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__SectionSpec_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__SectionSpec_42, 2) = ((MR_Box) (hlds__make_hlds__add_pred__V_101_101));
                }
                {
                  hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_103_103, 0) = ((MR_Box) (hlds__make_hlds__add_pred__SectionSpec_42));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_103_103, 1) = ((MR_Box) (hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_54_54));
                }
              }
            switch (hlds__make_hlds__add_pred__PredIsPredMode_34) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_51 = hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_103_103;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word hlds__make_hlds__add_pred__PredModePieces_43;
                  MR_Word hlds__make_hlds__add_pred__PredModeMsg_44;
                  MR_Word hlds__make_hlds__add_pred__PredModeSpec_45;
                  MR_Word hlds__make_hlds__add_pred__V_106_106;
                  MR_Word hlds__make_hlds__add_pred__V_107_107;
                  MR_Word hlds__make_hlds__add_pred__V_108_108;
                  MR_Word hlds__make_hlds__add_pred__V_109_109;
                  MR_Word hlds__make_hlds__add_pred__V_110_110;
                  MR_Word hlds__make_hlds__add_pred__V_111_111;
                  MR_Word hlds__make_hlds__add_pred__V_112_112;
                  MR_Word hlds__make_hlds__add_pred__V_115_115;
                  MR_Word hlds__make_hlds__add_pred__V_129_129;
                  MR_Word hlds__make_hlds__add_pred__V_130_130;
                  MR_Word hlds__make_hlds__add_pred__V_134_134;

                  {
                    hlds__make_hlds__add_pred__V_107_107 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_107_107, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_107_107, 1) = ((MR_Box) (hlds__make_hlds__add_pred__PredOrFunc_24));
                  }
                  {
                    hlds__make_hlds__add_pred__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_111_111, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredName_23));
                  }
                  {
                    hlds__make_hlds__add_pred__V_110_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_110_110, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_111_111));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_110_110, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Arity_14));
                  }
                  {
                    hlds__make_hlds__add_pred__V_109_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_109_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_109_109, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_110_110));
                  }
                  {
                    hlds__make_hlds__add_pred__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_115_115, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_107_107));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_115_115, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[18])));
                  }
                  {
                    hlds__make_hlds__add_pred__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_112_112, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[59])));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_112_112, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_115_115));
                  }
                  {
                    hlds__make_hlds__add_pred__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_108_108, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_109_109));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_108_108, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_112_112));
                  }
                  {
                    hlds__make_hlds__add_pred__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_106_106, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_107_107));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_106_106, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_108_108));
                  }
                  {
                    hlds__make_hlds__add_pred__PredModePieces_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__PredModePieces_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[58])));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__PredModePieces_43, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_106_106));
                  }
                  {
                    hlds__make_hlds__add_pred__V_130_130 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_130_130, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredModePieces_43));
                  }
                  {
                    hlds__make_hlds__add_pred__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_129_129, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_130_130));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_129_129, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    hlds__make_hlds__add_pred__PredModeMsg_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__PredModeMsg_44, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Context_19));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__PredModeMsg_44, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_129_129));
                  }
                  {
                    hlds__make_hlds__add_pred__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_134_134, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredModeMsg_44));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_134_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    hlds__make_hlds__add_pred__PredModeSpec_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__PredModeSpec_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__PredModeSpec_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__PredModeSpec_45, 2) = ((MR_Box) (hlds__make_hlds__add_pred__V_134_134));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_51 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredModeSpec_45));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_103_103));
                  }
                }
                break;
            }
          }
        else
          *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_51 = hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_54_54;
      }
    {
      hlds__make_hlds__add_pred__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_137_137, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Modes_15));
    }
    {
      hlds__make_hlds__add_pred__do_add_new_proc_13_p_0(hlds__make_hlds__add_pred__InstVarSet_13, hlds__make_hlds__add_pred__Arity_14, hlds__make_hlds__add_pred__Modes_15, hlds__make_hlds__add_pred__V_137_137, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_pred__DetismDecl_25, hlds__make_hlds__add_pred__MaybeDet_16, hlds__make_hlds__add_pred__Context_19, (MR_Integer) 1, (MR_Integer) 1, hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_48, hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_49, hlds__make_hlds__add_pred__ProcId_21);
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pred__add_builtin_5_p_0(
  MR_Word hlds__make_hlds__add_pred__PredId_6,
  MR_Word hlds__make_hlds__add_pred__Types_7,
  MR_Word hlds__make_hlds__add_pred__CompilationTarget_8,
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_59,
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_60)
{
  {
    MR_bool hlds__make_hlds__add_pred__succeeded;
    MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_129_129;
    MR_Word hlds__make_hlds__add_pred__TypeInfo_130_130;
    MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_131_131;
    MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_132_132;
    MR_Word hlds__make_hlds__add_pred__TypeInfo_133_133;
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
    MR_Word hlds__make_hlds__add_pred__GoalExpr_20;
    MR_Word hlds__make_hlds__add_pred__GoalInfo_21;
    MR_Word hlds__make_hlds__add_pred__ExtraVars_22;
    MR_Word hlds__make_hlds__add_pred__ExtraTypes_23;
    MR_Word hlds__make_hlds__add_pred__VarSet_24;
    MR_Word hlds__make_hlds__add_pred__Stub_25;
    MR_Word hlds__make_hlds__add_pred__VarTypes_49;
    MR_Word hlds__make_hlds__add_pred__TVarNameMap_50;
    MR_Word hlds__make_hlds__add_pred__RttiVarMaps_51;
    MR_Word hlds__make_hlds__add_pred__HasForeignClauses_52;
    MR_Word hlds__make_hlds__add_pred__HadSyntaxError_53;
    MR_Word hlds__make_hlds__add_pred__Markers_58;
    MR_Word hlds__make_hlds__add_pred__V_61_61;
    MR_Word hlds__make_hlds__add_pred__V_114_114;
    MR_Word hlds__make_hlds__add_pred__V_115_115;
    MR_Word hlds__make_hlds__add_pred__V_117_117;
    MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_118_118;
    MR_Word hlds__make_hlds__add_pred__V_119_119;
    MR_Word hlds__make_hlds__add_pred__V_134_134;
    MR_Integer hlds__make_hlds__add_pred__lo_0;
    MR_Integer hlds__make_hlds__add_pred__hi_1;
    MR_Integer hlds__make_hlds__add_pred__mid_2;
    MR_Integer hlds__make_hlds__add_pred__result_3;

    {
      hlds__make_hlds__add_pred__Module_10 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_59);
    }
    {
      hlds__make_hlds__add_pred__Name_11 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_59);
    }
    {
      hlds__hlds_pred__pred_info_get_context_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_59, &hlds__make_hlds__add_pred__Context_12);
    }
    {
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_59, &hlds__make_hlds__add_pred__ClausesInfo0_13);
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
    hlds__make_hlds__add_pred__TypeCtorInfo_129_129 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    hlds__make_hlds__add_pred__TypeInfo_130_130 = (MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[0];
    {
      hlds__make_hlds__add_pred__V_61_61 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0(hlds__make_hlds__add_pred__TypeInfo_130_130, hlds__make_hlds__add_pred__HeadVars_15);
    }
    {
      hlds__make_hlds__add_pred__NonLocals_18 = parse_tree__set_of_var__list_to_set_1_f_0(hlds__make_hlds__add_pred__TypeCtorInfo_129_129, hlds__make_hlds__add_pred__V_61_61);
    }
    {
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(hlds__make_hlds__add_pred__NonLocals_18, hlds__make_hlds__add_pred__GoalInfo0_17, &hlds__make_hlds__add_pred__GoalInfo1_19);
    }
    {
      hlds__make_hlds__add_pred__V_134_134 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
    {
      hlds__make_hlds__add_pred__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__make_hlds__add_pred__Module_10, hlds__make_hlds__add_pred__V_134_134);
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
                          hlds__make_hlds__add_pred__succeeded = MR_TRUE;
                          break;
                        case (MR_Integer) 3:
                          hlds__make_hlds__add_pred__succeeded = MR_TRUE;
                          break;
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
        hlds__make_hlds__add_pred__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_5[0]);
        hlds__make_hlds__add_pred__GoalInfo_21 = hlds__make_hlds__add_pred__GoalInfo1_19;
        hlds__make_hlds__add_pred__ExtraVars_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        hlds__make_hlds__add_pred__ExtraTypes_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        hlds__make_hlds__add_pred__VarSet_24 = hlds__make_hlds__add_pred__VarSet0_14;
        hlds__make_hlds__add_pred__Stub_25 = (MR_Integer) 1;
      }
    else
      {
        {
          MR_Word hlds__make_hlds__add_pred__V_135_135;

          {
            hlds__make_hlds__add_pred__V_135_135 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          }
          {
            hlds__make_hlds__add_pred__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__make_hlds__add_pred__Module_10, hlds__make_hlds__add_pred__V_135_135);
          }
          if (hlds__make_hlds__add_pred__succeeded)
            hlds__make_hlds__add_pred__succeeded = (strcmp(hlds__make_hlds__add_pred__Name_11, (MR_String) "trace_get_io_state") == 0);
        }
        if (!(hlds__make_hlds__add_pred__succeeded))
          {
            MR_Word hlds__make_hlds__add_pred__V_136_136;

            {
              hlds__make_hlds__add_pred__V_136_136 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
            }
            {
              hlds__make_hlds__add_pred__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__make_hlds__add_pred__Module_10, hlds__make_hlds__add_pred__V_136_136);
            }
            if (hlds__make_hlds__add_pred__succeeded)
              hlds__make_hlds__add_pred__succeeded = (strcmp(hlds__make_hlds__add_pred__Name_11, (MR_String) "unsafe_get_io_state") == 0);
          }
        if (hlds__make_hlds__add_pred__succeeded)
          {
            MR_Word hlds__make_hlds__add_pred__LHS_28;
            MR_Word hlds__make_hlds__add_pred__UnifyMode_30;
            MR_Word hlds__make_hlds__add_pred__Unification_31;
            MR_Word hlds__make_hlds__add_pred__AssignExpr_33;
            MR_Word hlds__make_hlds__add_pred__GoalInfoWithZero_34;
            MR_Word hlds__make_hlds__add_pred__AssignGoal_35;
            MR_Word hlds__make_hlds__add_pred__CastExpr_36;
            MR_Word hlds__make_hlds__add_pred__GoalInfoWithZeroHeadVars_37;
            MR_Word hlds__make_hlds__add_pred__CastGoal_38;
            MR_Word hlds__make_hlds__add_pred__ConjExpr_39;
            MR_Word hlds__make_hlds__add_pred__ConjGoal_40;
            MR_Word hlds__make_hlds__add_pred__V_65_65;
            MR_Word hlds__make_hlds__add_pred__V_70_70;
            MR_Word hlds__make_hlds__add_pred__V_72_72;
            MR_Word hlds__make_hlds__add_pred__V_73_73;
            MR_Word hlds__make_hlds__add_pred__V_74_74;
            MR_Word hlds__make_hlds__add_pred__V_75_75;
            MR_Word hlds__make_hlds__add_pred__V_77_77;
            MR_Word hlds__make_hlds__add_pred__V_84_84;
            MR_Word hlds__make_hlds__add_pred__V_87_87;
            MR_Word hlds__make_hlds__add_pred__V_90_90;
            MR_Word hlds__make_hlds__add_pred__V_91_91;
            MR_Word hlds__make_hlds__add_pred__V_92_92;
            MR_Word hlds__make_hlds__add_pred__V_93_93;
            MR_Word hlds__make_hlds__add_pred__V_97_97;
            MR_Word hlds__make_hlds__add_pred__V_98_98;
            MR_Word hlds__make_hlds__add_pred__V_100_100;
            MR_Word hlds__make_hlds__add_pred__V_101_101;

            {
              mercury__varset__new_var_3_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_129_129, &hlds__make_hlds__add_pred__LHS_28, hlds__make_hlds__add_pred__VarSet0_14, &hlds__make_hlds__add_pred__VarSet_24);
            }
            {
              hlds__make_hlds__add_pred__ExtraVars_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__ExtraVars_22, 0) = ((MR_Box) (hlds__make_hlds__add_pred__LHS_28));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__ExtraVars_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              hlds__make_hlds__add_pred__V_65_65 = parse_tree__builtin_lib_types__int_type_0_f_0();
            }
            {
              hlds__make_hlds__add_pred__ExtraTypes_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__ExtraTypes_23, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_65_65));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__ExtraTypes_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              hlds__make_hlds__add_pred__V_72_72 = parse_tree__prog_mode__ground_inst_0_f_0();
            }
            {
              hlds__make_hlds__add_pred__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_70_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_70_70, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_72_72));
            }
            {
              hlds__make_hlds__add_pred__V_74_74 = parse_tree__prog_mode__ground_inst_0_f_0();
            }
            {
              hlds__make_hlds__add_pred__V_75_75 = parse_tree__prog_mode__ground_inst_0_f_0();
            }
            {
              hlds__make_hlds__add_pred__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_73_73, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_74_74));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_73_73, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_75_75));
            }
            {
              hlds__make_hlds__add_pred__UnifyMode_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__UnifyMode_30, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_70_70));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__UnifyMode_30, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_73_73));
            }
            {
              hlds__make_hlds__add_pred__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_77_77, 0) = ((MR_Box) (hlds__make_hlds__add_pred__UnifyMode_30));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              hlds__make_hlds__add_pred__Unification_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Unification_31, 0) = ((MR_Box) (hlds__make_hlds__add_pred__LHS_28));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Unification_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[48])));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Unification_31, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Unification_31, 3) = ((MR_Box) (hlds__make_hlds__add_pred__V_77_77));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Unification_31, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Unification_31, 5) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Unification_31, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              hlds__make_hlds__add_pred__AssignExpr_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__AssignExpr_33, 0) = ((MR_Box) (hlds__make_hlds__add_pred__LHS_28));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__AssignExpr_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_5[1])));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__AssignExpr_33, 2) = ((MR_Box) (hlds__make_hlds__add_pred__UnifyMode_30));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__AssignExpr_33, 3) = ((MR_Box) (hlds__make_hlds__add_pred__Unification_31));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__AssignExpr_33, 4) = ((MR_Box) (&hlds__make_hlds__add_pred_scalar_common_1[49]));
            }
            {
              hlds__make_hlds__add_pred__V_84_84 = parse_tree__set_of_var__make_singleton_1_f_0(hlds__make_hlds__add_pred__TypeCtorInfo_129_129, hlds__make_hlds__add_pred__LHS_28);
            }
            {
              hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(hlds__make_hlds__add_pred__V_84_84, hlds__make_hlds__add_pred__GoalInfo0_17, &hlds__make_hlds__add_pred__GoalInfoWithZero_34);
            }
            {
              hlds__make_hlds__add_pred__AssignGoal_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__AssignGoal_35, 0) = ((MR_Box) (hlds__make_hlds__add_pred__AssignExpr_33));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__AssignGoal_35, 1) = ((MR_Box) (hlds__make_hlds__add_pred__GoalInfoWithZero_34));
            }
            {
              hlds__make_hlds__add_pred__V_87_87 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pred__TypeInfo_130_130, hlds__make_hlds__add_pred__ExtraVars_22, hlds__make_hlds__add_pred__HeadVarList_16);
            }
            {
              hlds__make_hlds__add_pred__V_91_91 = parse_tree__prog_mode__in_mode_0_f_0();
            }
            {
              hlds__make_hlds__add_pred__V_93_93 = parse_tree__prog_mode__uo_mode_0_f_0();
            }
            {
              hlds__make_hlds__add_pred__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_92_92, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_93_93));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              hlds__make_hlds__add_pred__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_90_90, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_91_91));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_90_90, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_92_92));
            }
            {
              hlds__make_hlds__add_pred__CastExpr_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__CastExpr_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__CastExpr_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_3[1])));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__CastExpr_36, 2) = ((MR_Box) (hlds__make_hlds__add_pred__V_87_87));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__CastExpr_36, 3) = ((MR_Box) (hlds__make_hlds__add_pred__V_90_90));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__CastExpr_36, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__CastExpr_36, 5) = ((MR_Box) ((MR_Integer) 0));
            }
            {
              hlds__make_hlds__add_pred__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_98_98, 0) = ((MR_Box) (hlds__make_hlds__add_pred__LHS_28));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_98_98, 1) = ((MR_Box) (hlds__make_hlds__add_pred__HeadVarList_16));
            }
            {
              hlds__make_hlds__add_pred__V_97_97 = parse_tree__set_of_var__list_to_set_1_f_0(hlds__make_hlds__add_pred__TypeCtorInfo_129_129, hlds__make_hlds__add_pred__V_98_98);
            }
            {
              hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(hlds__make_hlds__add_pred__V_97_97, hlds__make_hlds__add_pred__GoalInfo0_17, &hlds__make_hlds__add_pred__GoalInfoWithZeroHeadVars_37);
            }
            {
              hlds__make_hlds__add_pred__CastGoal_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__CastGoal_38, 0) = ((MR_Box) (hlds__make_hlds__add_pred__CastExpr_36));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__CastGoal_38, 1) = ((MR_Box) (hlds__make_hlds__add_pred__GoalInfoWithZeroHeadVars_37));
            }
            {
              hlds__make_hlds__add_pred__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_101_101, 0) = ((MR_Box) (hlds__make_hlds__add_pred__CastGoal_38));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              hlds__make_hlds__add_pred__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_100_100, 0) = ((MR_Box) (hlds__make_hlds__add_pred__AssignGoal_35));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_100_100, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_101_101));
            }
            {
              hlds__make_hlds__add_pred__ConjExpr_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__ConjExpr_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__ConjExpr_39, 1) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__ConjExpr_39, 2) = ((MR_Box) (hlds__make_hlds__add_pred__V_100_100));
            }
            {
              hlds__make_hlds__add_pred__ConjGoal_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ConjGoal_40, 0) = ((MR_Box) (hlds__make_hlds__add_pred__ConjExpr_39));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ConjGoal_40, 1) = ((MR_Box) (hlds__make_hlds__add_pred__GoalInfoWithZeroHeadVars_37));
            }
            {
              hlds__make_hlds__add_pred__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__GoalExpr_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__GoalExpr_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pred_scalar_common_3[2])));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__GoalExpr_20, 2) = ((MR_Box) (hlds__make_hlds__add_pred__ConjGoal_40));
            }
            hlds__make_hlds__add_pred__GoalInfo_21 = hlds__make_hlds__add_pred__GoalInfo1_19;
            hlds__make_hlds__add_pred__Stub_25 = (MR_Integer) 0;
          }
        else
          {
            {
              MR_Word hlds__make_hlds__add_pred__V_137_137;

              {
                hlds__make_hlds__add_pred__V_137_137 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
              }
              {
                hlds__make_hlds__add_pred__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__make_hlds__add_pred__Module_10, hlds__make_hlds__add_pred__V_137_137);
              }
              if (hlds__make_hlds__add_pred__succeeded)
                hlds__make_hlds__add_pred__succeeded = (strcmp(hlds__make_hlds__add_pred__Name_11, (MR_String) "trace_set_io_state") == 0);
            }
            if (!(hlds__make_hlds__add_pred__succeeded))
              {
                MR_Word hlds__make_hlds__add_pred__V_138_138;

                {
                  hlds__make_hlds__add_pred__V_138_138 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
                }
                {
                  hlds__make_hlds__add_pred__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__make_hlds__add_pred__Module_10, hlds__make_hlds__add_pred__V_138_138);
                }
                if (hlds__make_hlds__add_pred__succeeded)
                  hlds__make_hlds__add_pred__succeeded = (strcmp(hlds__make_hlds__add_pred__Name_11, (MR_String) "unsafe_set_io_state") == 0);
              }
            if (hlds__make_hlds__add_pred__succeeded)
              {
                MR_Word hlds__make_hlds__add_pred__ConjGoal_124;

                hlds__make_hlds__add_pred__GoalInfo_21 = hlds__make_hlds__add_pred__GoalInfo1_19;
                {
                  hlds__make_hlds__add_pred__ConjGoal_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ConjGoal_124, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_5[0])));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ConjGoal_124, 1) = ((MR_Box) (hlds__make_hlds__add_pred__GoalInfo_21));
                }
                {
                  hlds__make_hlds__add_pred__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__GoalExpr_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__GoalExpr_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pred_scalar_common_3[3])));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__GoalExpr_20, 2) = ((MR_Box) (hlds__make_hlds__add_pred__ConjGoal_124));
                }
                hlds__make_hlds__add_pred__ExtraVars_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                hlds__make_hlds__add_pred__ExtraTypes_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                hlds__make_hlds__add_pred__VarSet_24 = hlds__make_hlds__add_pred__VarSet0_14;
                hlds__make_hlds__add_pred__Stub_25 = (MR_Integer) 0;
              }
            else
              {
                MR_Word hlds__make_hlds__add_pred__SymName_42;
                MR_Integer hlds__make_hlds__add_pred__ModeId_43;
                MR_Word hlds__make_hlds__add_pred__Purity_45;

                {
                  hlds__make_hlds__add_pred__SymName_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__SymName_42, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Module_10));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__SymName_42, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Name_11));
                }
                {
                  hlds__make_hlds__add_pred__ModeId_43 = hlds__hlds_pred__invalid_proc_id_0_f_0();
                }
                {
                  hlds__make_hlds__add_pred__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pred__GoalExpr_20, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredId_6));
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pred__GoalExpr_20, 1) = ((MR_Box) (hlds__make_hlds__add_pred__ModeId_43));
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pred__GoalExpr_20, 2) = ((MR_Box) (hlds__make_hlds__add_pred__HeadVarList_16));
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pred__GoalExpr_20, 3) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pred__GoalExpr_20, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pred__GoalExpr_20, 5) = ((MR_Box) (hlds__make_hlds__add_pred__SymName_42));
                }
                {
                  hlds__hlds_pred__pred_info_get_purity_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_59, &hlds__make_hlds__add_pred__Purity_45);
                }
                {
                  hlds__hlds_goal__goal_info_set_purity_3_p_0(hlds__make_hlds__add_pred__Purity_45, hlds__make_hlds__add_pred__GoalInfo1_19, &hlds__make_hlds__add_pred__GoalInfo_21);
                }
                hlds__make_hlds__add_pred__ExtraVars_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                hlds__make_hlds__add_pred__ExtraTypes_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                hlds__make_hlds__add_pred__VarSet_24 = hlds__make_hlds__add_pred__VarSet0_14;
                hlds__make_hlds__add_pred__Stub_25 = (MR_Integer) 0;
              }
          }
      }
    {
      hlds__make_hlds__add_pred__V_114_114 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pred__TypeInfo_130_130, hlds__make_hlds__add_pred__ExtraVars_22, hlds__make_hlds__add_pred__HeadVarList_16);
    }
    hlds__make_hlds__add_pred__TypeCtorInfo_131_131 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
    {
      hlds__make_hlds__add_pred__V_115_115 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pred__TypeCtorInfo_131_131, hlds__make_hlds__add_pred__ExtraTypes_23, hlds__make_hlds__add_pred__Types_7);
    }
    {
      hlds__vartypes__vartypes_from_corresponding_lists_3_p_0(hlds__make_hlds__add_pred__V_114_114, hlds__make_hlds__add_pred__V_115_115, &hlds__make_hlds__add_pred__VarTypes_49);
    }
    hlds__make_hlds__add_pred__TypeCtorInfo_132_132 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    hlds__make_hlds__add_pred__TypeInfo_133_133 = (MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[1];
    {
      mercury__map__init_1_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_132_132, hlds__make_hlds__add_pred__TypeInfo_133_133, &hlds__make_hlds__add_pred__TVarNameMap_50);
    }
    {
      hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&hlds__make_hlds__add_pred__RttiVarMaps_51);
    }
    hlds__make_hlds__add_pred__HasForeignClauses_52 = (MR_Integer) 0;
    hlds__make_hlds__add_pred__HadSyntaxError_53 = (MR_Integer) 0;
    {
      hlds__make_hlds__add_pred__V_117_117 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
    }
    hlds__make_hlds__add_pred__V_119_119 = (MR_Integer) 7;
    switch (hlds__make_hlds__add_pred__Stub_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word hlds__make_hlds__add_pred__Goal_46;
          MR_Word hlds__make_hlds__add_pred__Clause_47;
          MR_Word hlds__make_hlds__add_pred__ClausesRep_48;
          MR_Word hlds__make_hlds__add_pred__ClausesInfo_54;
          MR_Word hlds__make_hlds__add_pred__Markers0_55;
          MR_Word hlds__make_hlds__add_pred__V_112_112;

          {
            hlds__make_hlds__add_pred__Goal_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Goal_46, 0) = ((MR_Box) (hlds__make_hlds__add_pred__GoalExpr_20));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Goal_46, 1) = ((MR_Box) (hlds__make_hlds__add_pred__GoalInfo_21));
          }
          {
            hlds__make_hlds__add_pred__Clause_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Clause_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Clause_47, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Goal_46));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Clause_47, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Clause_47, 3) = ((MR_Box) (hlds__make_hlds__add_pred__Context_12));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__Clause_47, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            hlds__make_hlds__add_pred__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_112_112, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Clause_47));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_112_112, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            hlds__hlds_clauses__set_clause_list_2_p_0(hlds__make_hlds__add_pred__V_112_112, &hlds__make_hlds__add_pred__ClausesRep_48);
          }
          {
            hlds__make_hlds__add_pred__ClausesInfo_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_54, 0) = ((MR_Box) (hlds__make_hlds__add_pred__VarSet_24));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_54, 1) = ((MR_Box) (hlds__make_hlds__add_pred__TVarNameMap_50));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_54, 2) = ((MR_Box) (hlds__make_hlds__add_pred__VarTypes_49));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_54, 3) = ((MR_Box) (hlds__make_hlds__add_pred__VarTypes_49));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_54, 4) = ((MR_Box) (hlds__make_hlds__add_pred__HeadVars_15));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_54, 5) = ((MR_Box) (hlds__make_hlds__add_pred__ClausesRep_48));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_54, 6) = ((MR_Box) (hlds__make_hlds__add_pred__V_117_117));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_54, 7) = ((MR_Box) (hlds__make_hlds__add_pred__RttiVarMaps_51));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_54, 8) = ((MR_Box) (hlds__make_hlds__add_pred__HasForeignClauses_52));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_54, 9) = ((MR_Box) (hlds__make_hlds__add_pred__HadSyntaxError_53));
          }
          {
            hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(hlds__make_hlds__add_pred__ClausesInfo_54, hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_59, &hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_118_118);
          }
          {
            hlds__hlds_pred__pred_info_get_markers_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_118_118, &hlds__make_hlds__add_pred__Markers0_55);
          }
          {
            hlds__hlds_pred__add_marker_3_p_0(hlds__make_hlds__add_pred__V_119_119, hlds__make_hlds__add_pred__Markers0_55, &hlds__make_hlds__add_pred__Markers_58);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__make_hlds__add_pred__Markers2_57;
          MR_Word hlds__make_hlds__add_pred__ClausesRep_144;
          MR_Word hlds__make_hlds__add_pred__ClausesInfo_145;
          MR_Word hlds__make_hlds__add_pred__Markers0_146;
          MR_Word hlds__make_hlds__add_pred__Markers1_147;

          {
            hlds__hlds_clauses__set_clause_list_2_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__add_pred__ClausesRep_144);
          }
          {
            hlds__make_hlds__add_pred__ClausesInfo_145 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_145, 0) = ((MR_Box) (hlds__make_hlds__add_pred__VarSet_24));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_145, 1) = ((MR_Box) (hlds__make_hlds__add_pred__TVarNameMap_50));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_145, 2) = ((MR_Box) (hlds__make_hlds__add_pred__VarTypes_49));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_145, 3) = ((MR_Box) (hlds__make_hlds__add_pred__VarTypes_49));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_145, 4) = ((MR_Box) (hlds__make_hlds__add_pred__HeadVars_15));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_145, 5) = ((MR_Box) (hlds__make_hlds__add_pred__ClausesRep_144));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_145, 6) = ((MR_Box) (hlds__make_hlds__add_pred__V_117_117));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_145, 7) = ((MR_Box) (hlds__make_hlds__add_pred__RttiVarMaps_51));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_145, 8) = ((MR_Box) (hlds__make_hlds__add_pred__HasForeignClauses_52));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ClausesInfo_145, 9) = ((MR_Box) (hlds__make_hlds__add_pred__HadSyntaxError_53));
          }
          {
            hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(hlds__make_hlds__add_pred__ClausesInfo_145, hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_0_59, &hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_118_118);
          }
          {
            hlds__hlds_pred__pred_info_get_markers_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_118_118, &hlds__make_hlds__add_pred__Markers0_146);
          }
          {
            hlds__hlds_pred__add_marker_3_p_0(hlds__make_hlds__add_pred__V_119_119, hlds__make_hlds__add_pred__Markers0_146, &hlds__make_hlds__add_pred__Markers1_147);
          }
          {
            hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 0, hlds__make_hlds__add_pred__Markers1_147, &hlds__make_hlds__add_pred__Markers2_57);
          }
          {
            hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 1, hlds__make_hlds__add_pred__Markers2_57, &hlds__make_hlds__add_pred__Markers_58);
          }
        }
        break;
    }
    {
      hlds__hlds_pred__pred_info_set_markers_3_p_0(hlds__make_hlds__add_pred__Markers_58, hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_118_118, hlds__make_hlds__add_pred__STATE_VARIABLE_PredInfo_60);
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
hlds__make_hlds__add_pred__add_new_pred_18_p_0(
  MR_Word hlds__make_hlds__add_pred__Origin_19,
  MR_Word hlds__make_hlds__add_pred__TVarSet_20,
  MR_Word hlds__make_hlds__add_pred__ExistQVars_21,
  MR_Word hlds__make_hlds__add_pred__PredName_22,
  MR_Word hlds__make_hlds__add_pred__Types_23,
  MR_Word hlds__make_hlds__add_pred__Purity_24,
  MR_Word hlds__make_hlds__add_pred__Constraints_25,
  MR_Word hlds__make_hlds__add_pred__Markers0_26,
  MR_Word hlds__make_hlds__add_pred__Context_27,
  MR_Word hlds__make_hlds__add_pred__PredStatus0_28,
  MR_Word hlds__make_hlds__add_pred__MaybeItemMercuryStatus_29,
  MR_Word hlds__make_hlds__add_pred__MaybeModes_30,
  MR_Word hlds__make_hlds__add_pred__NeedQual_31,
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_32,
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_71,
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_72,
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_73,
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_74)
{
  {
    MR_bool hlds__make_hlds__add_pred__succeeded;
    MR_Word hlds__make_hlds__add_pred__PredStatus_35;
    MR_Word hlds__make_hlds__add_pred__ModuleName_36;
    MR_Integer hlds__make_hlds__add_pred__Arity_37;
    MR_Word hlds__make_hlds__add_pred__V_75_75 = (MR_Word) hlds__make_hlds__add_pred__PredStatus0_28;

    hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__V_75_75 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (hlds__make_hlds__add_pred__succeeded)
      {
        hlds__make_hlds__add_pred__PredStatus_35 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pred_scalar_common_3[0])));
      }
    else
      hlds__make_hlds__add_pred__PredStatus_35 = hlds__make_hlds__add_pred__PredStatus0_28;
    {
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_71, &hlds__make_hlds__add_pred__ModuleName_36);
    }
    {
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__make_hlds__add_pred__Types_23, &hlds__make_hlds__add_pred__Arity_37);
    }
    if (((MR_tag((MR_Word) hlds__make_hlds__add_pred__PredName_22)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_90_90;
        MR_Word hlds__make_hlds__add_pred__MNameOfPred_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__PredName_22, (MR_Integer) 0)));
        MR_String hlds__make_hlds__add_pred__PName_40 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__PredName_22, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__add_pred__CurUserDecl_46;
        MR_Word hlds__make_hlds__add_pred__PredTable0_47;
        MR_Word hlds__make_hlds__add_pred__ClausesInfo_48;
        MR_Word hlds__make_hlds__add_pred__Proofs_49;
        MR_Word hlds__make_hlds__add_pred__ConstraintMap_50;
        MR_Word hlds__make_hlds__add_pred__PurityMarkers_51;
        MR_Word hlds__make_hlds__add_pred__Markers_52;
        MR_Word hlds__make_hlds__add_pred__VarNameRemap_53;
        MR_Word hlds__make_hlds__add_pred__PredInfo0_54;
        MR_Word hlds__make_hlds__add_pred__PredIds_55;
        MR_Word hlds__make_hlds__add_pred__V_79_79;
        MR_Word hlds__make_hlds__add_pred__ItemExport_42;
        MR_Word hlds__make_hlds__add_pred__ItemMercuryStatus_41;

        hlds__make_hlds__add_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pred__MaybeItemMercuryStatus_29)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__make_hlds__add_pred__succeeded)
          {
            hlds__make_hlds__add_pred__ItemMercuryStatus_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__MaybeItemMercuryStatus_29, (MR_Integer) 0)));
            hlds__make_hlds__add_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pred__ItemMercuryStatus_41)) == (MR_mktag((MR_Integer) 0)));
            if (hlds__make_hlds__add_pred__succeeded)
              hlds__make_hlds__add_pred__ItemExport_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ItemMercuryStatus_41, (MR_Integer) 0)));
          }
        if (hlds__make_hlds__add_pred__succeeded)
          {
            MR_Word hlds__make_hlds__add_pred__DeclSection_43;
            MR_Word hlds__make_hlds__add_pred__PredmodeDecl_44;
            MR_Word hlds__make_hlds__add_pred__V_78_78;

            switch (hlds__make_hlds__add_pred__ItemExport_42) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 2:
                hlds__make_hlds__add_pred__DeclSection_43 = (MR_Integer) 0;
                break;
              case (MR_Integer) 0:
              case (MR_Integer) 1:
                hlds__make_hlds__add_pred__DeclSection_43 = (MR_Integer) 1;
                break;
            }
            if ((hlds__make_hlds__add_pred__MaybeModes_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              hlds__make_hlds__add_pred__PredmodeDecl_44 = (MR_Integer) 0;
            else
              hlds__make_hlds__add_pred__PredmodeDecl_44 = (MR_Integer) 1;
            {
              hlds__make_hlds__add_pred__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_78_78, 0) = ((MR_Box) (hlds__make_hlds__add_pred__DeclSection_43));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_78_78, 1) = ((MR_Box) (hlds__make_hlds__add_pred__PredmodeDecl_44));
            }
            {
              hlds__make_hlds__add_pred__CurUserDecl_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__CurUserDecl_46, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_78_78));
            }
          }
        else
          hlds__make_hlds__add_pred__CurUserDecl_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_71, &hlds__make_hlds__add_pred__PredTable0_47);
        }
        {
          hlds__make_hlds__add_pred__V_79_79 = hlds__hlds_clauses__init_clause_item_numbers_user_0_f_0();
        }
        {
          hlds__hlds_clauses__clauses_info_init_4_p_0(hlds__make_hlds__add_pred__PredOrFunc_32, hlds__make_hlds__add_pred__Arity_37, hlds__make_hlds__add_pred__V_79_79, &hlds__make_hlds__add_pred__ClausesInfo_48);
        }
        hlds__make_hlds__add_pred__TypeCtorInfo_90_90 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
        {
          mercury__map__init_1_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_90_90, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, &hlds__make_hlds__add_pred__Proofs_49);
        }
        {
          mercury__map__init_1_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, hlds__make_hlds__add_pred__TypeCtorInfo_90_90, &hlds__make_hlds__add_pred__ConstraintMap_50);
        }
        {
          hlds__hlds_pred__purity_to_markers_2_p_0(hlds__make_hlds__add_pred__Purity_24, &hlds__make_hlds__add_pred__PurityMarkers_51);
        }
        {
          hlds__hlds_pred__add_markers_3_p_0(hlds__make_hlds__add_pred__PurityMarkers_51, hlds__make_hlds__add_pred__Markers0_26, &hlds__make_hlds__add_pred__Markers_52);
        }
        {
          mercury__map__init_1_p_0((MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, &hlds__make_hlds__add_pred__VarNameRemap_53);
        }
        {
          hlds__hlds_pred__pred_info_init_19_p_0(hlds__make_hlds__add_pred__ModuleName_36, hlds__make_hlds__add_pred__PredName_22, hlds__make_hlds__add_pred__Arity_37, hlds__make_hlds__add_pred__PredOrFunc_32, hlds__make_hlds__add_pred__Context_27, hlds__make_hlds__add_pred__Origin_19, hlds__make_hlds__add_pred__PredStatus_35, hlds__make_hlds__add_pred__CurUserDecl_46, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_pred__Markers_52, hlds__make_hlds__add_pred__Types_23, hlds__make_hlds__add_pred__TVarSet_20, hlds__make_hlds__add_pred__ExistQVars_21, hlds__make_hlds__add_pred__Constraints_25, hlds__make_hlds__add_pred__Proofs_49, hlds__make_hlds__add_pred__ConstraintMap_50, hlds__make_hlds__add_pred__ClausesInfo_48, hlds__make_hlds__add_pred__VarNameRemap_53, &hlds__make_hlds__add_pred__PredInfo0_54);
        }
        {
          hlds__pred_table__predicate_table_lookup_pf_m_n_a_7_p_0(hlds__make_hlds__add_pred__PredTable0_47, (MR_Integer) 0, hlds__make_hlds__add_pred__PredOrFunc_32, hlds__make_hlds__add_pred__MNameOfPred_39, hlds__make_hlds__add_pred__PName_40, hlds__make_hlds__add_pred__Arity_37, &hlds__make_hlds__add_pred__PredIds_55);
        }
        if ((hlds__make_hlds__add_pred__PredIds_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word hlds__make_hlds__add_pred__PQInfo_62;
            MR_Word hlds__make_hlds__add_pred__PredId_63;
            MR_Word hlds__make_hlds__add_pred__PredTable1_64;
            MR_Word hlds__make_hlds__add_pred__PredTable_70;

            {
              hlds__hlds_module__module_info_get_partial_qualifier_info_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_71, &hlds__make_hlds__add_pred__PQInfo_62);
            }
            {
              hlds__pred_table__predicate_table_insert_qual_6_p_0(hlds__make_hlds__add_pred__PredInfo0_54, hlds__make_hlds__add_pred__NeedQual_31, hlds__make_hlds__add_pred__PQInfo_62, &hlds__make_hlds__add_pred__PredId_63, hlds__make_hlds__add_pred__PredTable0_47, &hlds__make_hlds__add_pred__PredTable1_64);
            }
            {
              hlds__make_hlds__add_pred__succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(hlds__make_hlds__add_pred__PredInfo0_54);
            }
            if (hlds__make_hlds__add_pred__succeeded)
              {
                MR_Word hlds__make_hlds__add_pred__Globals_65;
                MR_Word hlds__make_hlds__add_pred__CompilationTarget_66;
                MR_Word hlds__make_hlds__add_pred__PredInfo_67;
                MR_Word hlds__make_hlds__add_pred__Preds1_68;
                MR_Word hlds__make_hlds__add_pred__Preds_69;

                {
                  hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_71, &hlds__make_hlds__add_pred__Globals_65);
                }
                {
                  libs__globals__get_target_2_p_0(hlds__make_hlds__add_pred__Globals_65, &hlds__make_hlds__add_pred__CompilationTarget_66);
                }
                {
                  hlds__make_hlds__add_pred__add_builtin_5_p_0(hlds__make_hlds__add_pred__PredId_63, hlds__make_hlds__add_pred__Types_23, hlds__make_hlds__add_pred__CompilationTarget_66, hlds__make_hlds__add_pred__PredInfo0_54, &hlds__make_hlds__add_pred__PredInfo_67);
                }
                {
                  hlds__pred_table__predicate_table_get_preds_2_p_0(hlds__make_hlds__add_pred__PredTable1_64, &hlds__make_hlds__add_pred__Preds1_68);
                }
                {
                  mercury__map__det_update_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, ((MR_Box) (hlds__make_hlds__add_pred__PredId_63)), ((MR_Box) (hlds__make_hlds__add_pred__PredInfo_67)), hlds__make_hlds__add_pred__Preds1_68, &hlds__make_hlds__add_pred__Preds_69);
                }
                {
                  hlds__pred_table__predicate_table_set_preds_3_p_0(hlds__make_hlds__add_pred__Preds_69, hlds__make_hlds__add_pred__PredTable1_64, &hlds__make_hlds__add_pred__PredTable_70);
                }
              }
            else
              hlds__make_hlds__add_pred__PredTable_70 = hlds__make_hlds__add_pred__PredTable1_64;
            {
              hlds__hlds_module__module_info_set_predicate_table_3_p_0(hlds__make_hlds__add_pred__PredTable_70, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_71, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_72);
            }
            *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_74 = hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_73;
          }
        else
          {
            MR_Word hlds__make_hlds__add_pred__OrigPred_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__PredIds_55, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__add_pred__OrigPredInfo_58;
            MR_Word hlds__make_hlds__add_pred__OrigContext_59;
            MR_String hlds__make_hlds__add_pred__DeclString_60;
            MR_Integer hlds__make_hlds__add_pred__OrigArity_61;
            MR_Word hlds__make_hlds__add_pred__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__PredIds_55, (MR_Integer) 1)));
            MR_Word hlds__make_hlds__add_pred__V_83_83;

            {
              hlds__hlds_module__module_info_pred_info_3_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_71, hlds__make_hlds__add_pred__OrigPred_56, &hlds__make_hlds__add_pred__OrigPredInfo_58);
            }
            {
              hlds__hlds_pred__pred_info_get_context_2_p_0(hlds__make_hlds__add_pred__OrigPredInfo_58, &hlds__make_hlds__add_pred__OrigContext_59);
            }
            {
              hlds__make_hlds__add_pred__DeclString_60 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(hlds__make_hlds__add_pred__PredOrFunc_32);
            }
            {
              parse_tree__prog_util__adjust_func_arity_3_p_1(hlds__make_hlds__add_pred__PredOrFunc_32, &hlds__make_hlds__add_pred__OrigArity_61, hlds__make_hlds__add_pred__Arity_37);
            }
            hlds__make_hlds__add_pred__V_83_83 = (MR_Word) hlds__make_hlds__add_pred__PredStatus0_28;
            hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__V_83_83 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (hlds__make_hlds__add_pred__succeeded)
              *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_74 = hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_73;
            else
              {
                {
                  hlds__make_hlds__make_hlds_error__multiple_def_error_9_p_0((MR_Integer) 0, hlds__make_hlds__add_pred__PredName_22, hlds__make_hlds__add_pred__OrigArity_61, hlds__make_hlds__add_pred__DeclString_60, hlds__make_hlds__add_pred__Context_27, hlds__make_hlds__add_pred__OrigContext_59, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_73, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_74);
                }
              }
            *hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_72 = hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_71;
          }
      }
    else
      {
        {
          hlds__hlds_module__module_info_incr_errors_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_71, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_72);
        }
        {
          hlds__make_hlds__add_pred__unqualified_pred_error_5_p_0(hlds__make_hlds__add_pred__PredName_22, hlds__make_hlds__add_pred__Arity_37, hlds__make_hlds__add_pred__Context_27, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_73, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_74);
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
    MR_Word hlds__make_hlds__add_pred__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ItemPredDecl_9, (MR_Integer) 3)));
    MR_Word hlds__make_hlds__add_pred__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ItemPredDecl_9, (MR_Integer) 4)));
    MR_Word hlds__make_hlds__add_pred__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ItemPredDecl_9, (MR_Integer) 5)));
    MR_Word hlds__make_hlds__add_pred__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ItemPredDecl_9, (MR_Integer) 6)));
    MR_Word hlds__make_hlds__add_pred__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ItemPredDecl_9, (MR_Integer) 7)));
    MR_Word hlds__make_hlds__add_pred__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ItemPredDecl_9, (MR_Integer) 8)));
    MR_Word hlds__make_hlds__add_pred__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ItemPredDecl_9, (MR_Integer) 9)));
    MR_Word hlds__make_hlds__add_pred__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ItemPredDecl_9, (MR_Integer) 10)));
    MR_Word hlds__make_hlds__add_pred__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__ItemPredDecl_9, (MR_Integer) 11)));
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
    MR_Word hlds__make_hlds__add_pred__V_27_27;
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
    MR_Word hlds__make_hlds__add_pred__V_61_61;

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
      hlds__make_hlds__add_pred__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_27_27, 1) = ((MR_Box) (hlds__make_hlds__add_pred__FileName_21));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_27_27, 2) = ((MR_Box) (hlds__make_hlds__add_pred__LineNum_22));
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
      hlds__make_hlds__add_pred__V_61_61 = mercury__map__init_0_f_0((MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
    }
    {
      parse_tree__prog_type__var_list_to_type_list_3_p_0(hlds__make_hlds__add_pred__V_61_61, hlds__make_hlds__add_pred__TypeVars_45, &hlds__make_hlds__add_pred__Types_47);
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
      hlds__hlds_pred__pred_info_init_19_p_0(hlds__make_hlds__add_pred__ModuleName_12, hlds__make_hlds__add_pred__PredName_13, hlds__make_hlds__add_pred__Arity_14, hlds__make_hlds__add_pred__PredOrFunc_15, hlds__make_hlds__add_pred__Context_18, hlds__make_hlds__add_pred__V_27_27, hlds__make_hlds__add_pred__Status_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_pred__Markers0_43, hlds__make_hlds__add_pred__Types_47, hlds__make_hlds__add_pred__TVarSet_46, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) &hlds__make_hlds__add_pred_scalar_common_1[47], hlds__make_hlds__add_pred__Proofs_50, hlds__make_hlds__add_pred__ConstraintMap_51, hlds__make_hlds__add_pred__ClausesInfo_20, hlds__make_hlds__add_pred__VarNameRemap_52, &hlds__make_hlds__add_pred__PredInfo0_53);
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
    MR_Word hlds__make_hlds__add_pred__V_38_38;

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
      hlds__make_hlds__add_pred__V_38_38 = hlds__hlds_clauses__init_clause_item_numbers_user_0_f_0();
    }
    {
      hlds__hlds_clauses__clauses_info_init_4_p_0(hlds__make_hlds__add_pred__PredOrFunc_19, hlds__make_hlds__add_pred__Arity_18, hlds__make_hlds__add_pred__V_38_38, &hlds__make_hlds__add_pred__ClausesInfo_29);
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
hlds__make_hlds__add_pred__module_add_mode_14_p_0(
  MR_Word hlds__make_hlds__add_pred__InstVarSet_15,
  MR_Word hlds__make_hlds__add_pred__PredName_16,
  MR_Word hlds__make_hlds__add_pred__Modes_17,
  MR_Word hlds__make_hlds__add_pred__MaybeDet_18,
  MR_Word hlds__make_hlds__add_pred__PredStatus_19,
  MR_Word hlds__make_hlds__add_pred__MaybeItemMercuryStatus_20,
  MR_Word hlds__make_hlds__add_pred__Context_21,
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_22,
  MR_Word hlds__make_hlds__add_pred__IsClassMethod_23,
  MR_Word * hlds__make_hlds__add_pred__PredProcId_24,
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_41,
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_42,
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_43,
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_44)
{
  {
    MR_bool hlds__make_hlds__add_pred__succeeded;
    MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_60_60;
    MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_61_61;
    MR_Word hlds__make_hlds__add_pred__ModuleName0_27;
    MR_Word hlds__make_hlds__add_pred__ModuleName_28;
    MR_Integer hlds__make_hlds__add_pred__Arity_29;
    MR_Word hlds__make_hlds__add_pred__PredicateTable0_30;
    MR_Word hlds__make_hlds__add_pred__PredIds_31;
    MR_Word hlds__make_hlds__add_pred__PredId_33;
    MR_Word hlds__make_hlds__add_pred__PredicateTable1_34;
    MR_Word hlds__make_hlds__add_pred__Preds0_35;
    MR_Word hlds__make_hlds__add_pred__PredInfo0_36;
    MR_Word hlds__make_hlds__add_pred__PredInfo_37;
    MR_Integer hlds__make_hlds__add_pred__ProcId_38;
    MR_Word hlds__make_hlds__add_pred__Preds_39;
    MR_Word hlds__make_hlds__add_pred__PredicateTable_40;
    MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_47_47;
    MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_50_50;
    MR_Word hlds__make_hlds__add_pred__PredIdPrime_32;
    MR_Word hlds__make_hlds__add_pred__V_46_46;
    MR_Box hlds__make_hlds__add_pred__conv0_PredInfo0_36;

    {
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_41, &hlds__make_hlds__add_pred__ModuleName0_27);
    }
    {
      mdbcomp__sym_name__sym_name_get_module_name_default_3_p_0(hlds__make_hlds__add_pred__PredName_16, hlds__make_hlds__add_pred__ModuleName0_27, &hlds__make_hlds__add_pred__ModuleName_28);
    }
    {
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__make_hlds__add_pred__Modes_17, &hlds__make_hlds__add_pred__Arity_29);
    }
    {
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_41, &hlds__make_hlds__add_pred__PredicateTable0_30);
    }
    {
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__make_hlds__add_pred__PredicateTable0_30, (MR_Integer) 0, hlds__make_hlds__add_pred__PredOrFunc_22, hlds__make_hlds__add_pred__PredName_16, hlds__make_hlds__add_pred__Arity_29, &hlds__make_hlds__add_pred__PredIds_31);
    }
    hlds__make_hlds__add_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pred__PredIds_31)) == (MR_mktag((MR_Integer) 1)));
    if (hlds__make_hlds__add_pred__succeeded)
      {
        hlds__make_hlds__add_pred__PredIdPrime_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__PredIds_31, (MR_Integer) 0)));
        hlds__make_hlds__add_pred__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__PredIds_31, (MR_Integer) 1)));
        hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__V_46_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    if (hlds__make_hlds__add_pred__succeeded)
      {
        hlds__make_hlds__add_pred__PredId_33 = hlds__make_hlds__add_pred__PredIdPrime_32;
        hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_50_50 = hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_43;
        hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_47_47 = hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_41;
      }
    else
      {
        MR_Word hlds__make_hlds__add_pred__V_48_48;

        {
          hlds__make_hlds__add_pred__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_48_48, 1) = ((MR_Box) (hlds__make_hlds__add_pred__PredName_16));
        }
        {
          hlds__make_hlds__add_pred__preds_add_implicit_report_error_14_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_41, &hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_47_47, hlds__make_hlds__add_pred__ModuleName_28, hlds__make_hlds__add_pred__PredName_16, hlds__make_hlds__add_pred__Arity_29, hlds__make_hlds__add_pred__PredOrFunc_22, hlds__make_hlds__add_pred__PredStatus_19, hlds__make_hlds__add_pred__IsClassMethod_23, hlds__make_hlds__add_pred__Context_21, hlds__make_hlds__add_pred__V_48_48, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[11]), &hlds__make_hlds__add_pred__PredId_33, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_43, &hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_50_50);
        }
      }
    {
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_47_47, &hlds__make_hlds__add_pred__PredicateTable1_34);
    }
    {
      hlds__pred_table__predicate_table_get_preds_2_p_0(hlds__make_hlds__add_pred__PredicateTable1_34, &hlds__make_hlds__add_pred__Preds0_35);
    }
    hlds__make_hlds__add_pred__TypeCtorInfo_60_60 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
    hlds__make_hlds__add_pred__TypeCtorInfo_61_61 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
    {
      mercury__map__lookup_3_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_60_60, hlds__make_hlds__add_pred__TypeCtorInfo_61_61, hlds__make_hlds__add_pred__Preds0_35, ((MR_Box) (hlds__make_hlds__add_pred__PredId_33)), &hlds__make_hlds__add_pred__conv0_PredInfo0_36);
    }
    hlds__make_hlds__add_pred__PredInfo0_36 = ((MR_Word) hlds__make_hlds__add_pred__conv0_PredInfo0_36);
    {
      hlds__make_hlds__add_pred__module_do_add_mode_12_p_0(hlds__make_hlds__add_pred__InstVarSet_15, hlds__make_hlds__add_pred__Arity_29, hlds__make_hlds__add_pred__Modes_17, hlds__make_hlds__add_pred__MaybeDet_18, hlds__make_hlds__add_pred__IsClassMethod_23, hlds__make_hlds__add_pred__MaybeItemMercuryStatus_20, hlds__make_hlds__add_pred__Context_21, hlds__make_hlds__add_pred__PredInfo0_36, &hlds__make_hlds__add_pred__PredInfo_37, &hlds__make_hlds__add_pred__ProcId_38, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_50_50, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_44);
    }
    {
      mercury__map__det_update_4_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_60_60, hlds__make_hlds__add_pred__TypeCtorInfo_61_61, ((MR_Box) (hlds__make_hlds__add_pred__PredId_33)), ((MR_Box) (hlds__make_hlds__add_pred__PredInfo_37)), hlds__make_hlds__add_pred__Preds0_35, &hlds__make_hlds__add_pred__Preds_39);
    }
    {
      hlds__pred_table__predicate_table_set_preds_3_p_0(hlds__make_hlds__add_pred__Preds_39, hlds__make_hlds__add_pred__PredicateTable1_34, &hlds__make_hlds__add_pred__PredicateTable_40);
    }
    {
      hlds__hlds_module__module_info_set_predicate_table_3_p_0(hlds__make_hlds__add_pred__PredicateTable_40, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_47_47, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_42);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *hlds__make_hlds__add_pred__PredProcId_24 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredId_33));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__add_pred__ProcId_38));
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pred__do_add_new_proc_13_p_0(
  MR_Word hlds__make_hlds__add_pred__InstVarSet_14,
  MR_Integer hlds__make_hlds__add_pred__Arity_15,
  MR_Word hlds__make_hlds__add_pred__ArgModes_16,
  MR_Word hlds__make_hlds__add_pred__MaybeDeclaredArgModes_17,
  MR_Word hlds__make_hlds__add_pred__MaybeArgLives_18,
  MR_Word hlds__make_hlds__add_pred__DetismDecl_19,
  MR_Word hlds__make_hlds__add_pred__MaybeDet_20,
  MR_Word hlds__make_hlds__add_pred__Context_21,
  MR_Word hlds__make_hlds__add_pred__IsAddressTaken_22,
  MR_Word hlds__make_hlds__add_pred__HasParallelConj_23,
  MR_Word hlds__make_hlds__add_pred__PredInfo0_24,
  MR_Word * hlds__make_hlds__add_pred__PredInfo_25,
  MR_Integer * hlds__make_hlds__add_pred__ModeId_26)
{
  {
    MR_bool hlds__make_hlds__add_pred__succeeded;
    MR_Word hlds__make_hlds__add_pred__Procs0_27;
    MR_Word hlds__make_hlds__add_pred__ArgTypes_28;
    MR_Word hlds__make_hlds__add_pred__VarNameRemap_29;
    MR_Word hlds__make_hlds__add_pred__NewProc0_30;
    MR_Word hlds__make_hlds__add_pred__NewProc_31;
    MR_Word hlds__make_hlds__add_pred__Procs_32;

    {
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__make_hlds__add_pred__PredInfo0_24, &hlds__make_hlds__add_pred__Procs0_27);
    }
    {
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(hlds__make_hlds__add_pred__PredInfo0_24, &hlds__make_hlds__add_pred__ArgTypes_28);
    }
    {
      hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(hlds__make_hlds__add_pred__PredInfo0_24, &hlds__make_hlds__add_pred__VarNameRemap_29);
    }
    {
      hlds__hlds_pred__next_mode_id_2_p_0(hlds__make_hlds__add_pred__Procs0_27, hlds__make_hlds__add_pred__ModeId_26);
    }
    {
      hlds__hlds_pred__proc_info_init_12_p_0(hlds__make_hlds__add_pred__Context_21, hlds__make_hlds__add_pred__Arity_15, hlds__make_hlds__add_pred__ArgTypes_28, hlds__make_hlds__add_pred__MaybeDeclaredArgModes_17, hlds__make_hlds__add_pred__ArgModes_16, hlds__make_hlds__add_pred__MaybeArgLives_18, hlds__make_hlds__add_pred__DetismDecl_19, hlds__make_hlds__add_pred__MaybeDet_20, hlds__make_hlds__add_pred__IsAddressTaken_22, hlds__make_hlds__add_pred__HasParallelConj_23, hlds__make_hlds__add_pred__VarNameRemap_29, &hlds__make_hlds__add_pred__NewProc0_30);
    }
    {
      hlds__hlds_pred__proc_info_set_inst_varset_3_p_0(hlds__make_hlds__add_pred__InstVarSet_14, hlds__make_hlds__add_pred__NewProc0_30, &hlds__make_hlds__add_pred__NewProc_31);
    }
    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, *hlds__make_hlds__add_pred__ModeId_26, ((MR_Box) (hlds__make_hlds__add_pred__NewProc_31)), hlds__make_hlds__add_pred__Procs0_27, &hlds__make_hlds__add_pred__Procs_32);
    }
    {
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(hlds__make_hlds__add_pred__Procs_32, hlds__make_hlds__add_pred__PredInfo0_24, hlds__make_hlds__add_pred__PredInfo_25);
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pred__module_add_pred_or_func_20_p_0(
  MR_Word hlds__make_hlds__add_pred__Origin_21,
  MR_Word hlds__make_hlds__add_pred__TypeVarSet_22,
  MR_Word hlds__make_hlds__add_pred__InstVarSet_23,
  MR_Word hlds__make_hlds__add_pred__ExistQVars_24,
  MR_Word hlds__make_hlds__add_pred__PredOrFunc_25,
  MR_Word hlds__make_hlds__add_pred__PredName_26,
  MR_Word hlds__make_hlds__add_pred__TypesAndModes_27,
  MR_Word hlds__make_hlds__add_pred__MaybeDet_28,
  MR_Word hlds__make_hlds__add_pred__Purity_29,
  MR_Word hlds__make_hlds__add_pred__Constraints_30,
  MR_Word hlds__make_hlds__add_pred__Markers_31,
  MR_Word hlds__make_hlds__add_pred__Context_32,
  MR_Word hlds__make_hlds__add_pred__PredStatus_33,
  MR_Word hlds__make_hlds__add_pred__MaybeItemMercuryStatus_34,
  MR_Word hlds__make_hlds__add_pred__NeedQual_35,
  MR_Word * hlds__make_hlds__add_pred__MaybePredProcId_36,
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_60,
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_61,
  MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_62,
  MR_Word * hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_63)
{
  {
    MR_bool hlds__make_hlds__add_pred__succeeded;
    MR_Word hlds__make_hlds__add_pred__Types_39;
    MR_Word hlds__make_hlds__add_pred__MaybeModes0_40;
    MR_Integer hlds__make_hlds__add_pred__Arity_41;
    MR_Word hlds__make_hlds__add_pred__Modes0_42;

    {
      parse_tree__prog_util__split_types_and_modes_3_p_0(hlds__make_hlds__add_pred__TypesAndModes_27, &hlds__make_hlds__add_pred__Types_39, &hlds__make_hlds__add_pred__MaybeModes0_40);
    }
    {
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__make_hlds__add_pred__Types_39, &hlds__make_hlds__add_pred__Arity_41);
    }
    hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__PredOrFunc_25 == (MR_Integer) 0);
    if (hlds__make_hlds__add_pred__succeeded)
      {
        hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__MaybeDet_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (hlds__make_hlds__add_pred__succeeded)
          {
            hlds__make_hlds__add_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pred__MaybeModes0_40)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__make_hlds__add_pred__succeeded)
              {
                hlds__make_hlds__add_pred__Modes0_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__MaybeModes0_40, (MR_Integer) 0)));
                hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__Modes0_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
          }
      }
    if (hlds__make_hlds__add_pred__succeeded)
      {
        {
          hlds__make_hlds__add_pred__add_new_pred_18_p_0(hlds__make_hlds__add_pred__Origin_21, hlds__make_hlds__add_pred__TypeVarSet_22, hlds__make_hlds__add_pred__ExistQVars_24, hlds__make_hlds__add_pred__PredName_26, hlds__make_hlds__add_pred__Types_39, hlds__make_hlds__add_pred__Purity_29, hlds__make_hlds__add_pred__Constraints_30, hlds__make_hlds__add_pred__Markers_31, hlds__make_hlds__add_pred__Context_32, hlds__make_hlds__add_pred__PredStatus_33, hlds__make_hlds__add_pred__MaybeItemMercuryStatus_34, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_pred__NeedQual_35, hlds__make_hlds__add_pred__PredOrFunc_25, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_60, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_61, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_62, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_63);
        }
        *hlds__make_hlds__add_pred__MaybePredProcId_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Word hlds__make_hlds__add_pred__V_44_44;

        hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__PredOrFunc_25 == (MR_Integer) 1);
        if (hlds__make_hlds__add_pred__succeeded)
          {
            hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__MaybeModes0_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (hlds__make_hlds__add_pred__succeeded)
              {
                hlds__make_hlds__add_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pred__MaybeDet_28)) == (MR_mktag((MR_Integer) 1)));
                if (hlds__make_hlds__add_pred__succeeded)
                  hlds__make_hlds__add_pred__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__MaybeDet_28, (MR_Integer) 0)));
              }
          }
        if (hlds__make_hlds__add_pred__succeeded)
          {
            MR_Word hlds__make_hlds__add_pred__TypeCtorInfo_100_100;
            MR_Integer hlds__make_hlds__add_pred__FuncArity_45;
            MR_Word hlds__make_hlds__add_pred__InMode_46;
            MR_Word hlds__make_hlds__add_pred__InModes_47;
            MR_Word hlds__make_hlds__add_pred__OutMode_48;
            MR_Word hlds__make_hlds__add_pred__Modes_50;
            MR_Word hlds__make_hlds__add_pred__IsClassMethod_51;
            MR_Word hlds__make_hlds__add_pred__PredProcId_52;
            MR_Word hlds__make_hlds__add_pred__V_65_65;
            MR_Word hlds__make_hlds__add_pred__MaybeModes_212;
            MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_67_220;
            MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_68_221;

            {
              parse_tree__prog_util__adjust_func_arity_3_p_1((MR_Integer) 1, &hlds__make_hlds__add_pred__FuncArity_45, hlds__make_hlds__add_pred__Arity_41);
            }
            {
              parse_tree__prog_mode__in_mode_1_p_0(&hlds__make_hlds__add_pred__InMode_46);
            }
            hlds__make_hlds__add_pred__TypeCtorInfo_100_100 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
            {
              mercury__list__duplicate_3_p_0(hlds__make_hlds__add_pred__TypeCtorInfo_100_100, hlds__make_hlds__add_pred__FuncArity_45, ((MR_Box) (hlds__make_hlds__add_pred__InMode_46)), &hlds__make_hlds__add_pred__InModes_47);
            }
            {
              parse_tree__prog_mode__out_mode_1_p_0(&hlds__make_hlds__add_pred__OutMode_48);
            }
            {
              hlds__make_hlds__add_pred__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_65_65, 0) = ((MR_Box) (hlds__make_hlds__add_pred__OutMode_48));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              mercury__list__append_3_p_1(hlds__make_hlds__add_pred__TypeCtorInfo_100_100, hlds__make_hlds__add_pred__InModes_47, hlds__make_hlds__add_pred__V_65_65, &hlds__make_hlds__add_pred__Modes_50);
            }
            {
              hlds__make_hlds__add_pred__MaybeModes_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__MaybeModes_212, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Modes_50));
            }
            {
              hlds__make_hlds__add_pred__add_new_pred_18_p_0(hlds__make_hlds__add_pred__Origin_21, hlds__make_hlds__add_pred__TypeVarSet_22, hlds__make_hlds__add_pred__ExistQVars_24, hlds__make_hlds__add_pred__PredName_26, hlds__make_hlds__add_pred__Types_39, hlds__make_hlds__add_pred__Purity_29, hlds__make_hlds__add_pred__Constraints_30, hlds__make_hlds__add_pred__Markers_31, hlds__make_hlds__add_pred__Context_32, hlds__make_hlds__add_pred__PredStatus_33, hlds__make_hlds__add_pred__MaybeItemMercuryStatus_34, hlds__make_hlds__add_pred__MaybeModes_212, hlds__make_hlds__add_pred__NeedQual_35, hlds__make_hlds__add_pred__PredOrFunc_25, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_60, &hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_67_220, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_62, &hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_68_221);
            }
            {
              hlds__make_hlds__add_pred__succeeded = hlds__hlds_pred__check_marker_2_p_0(hlds__make_hlds__add_pred__Markers_31, (MR_Integer) 10);
            }
            if (hlds__make_hlds__add_pred__succeeded)
              hlds__make_hlds__add_pred__IsClassMethod_51 = (MR_Integer) 1;
            else
              hlds__make_hlds__add_pred__IsClassMethod_51 = (MR_Integer) 0;
            {
              hlds__make_hlds__add_pred__module_add_mode_14_p_0(hlds__make_hlds__add_pred__InstVarSet_23, hlds__make_hlds__add_pred__PredName_26, hlds__make_hlds__add_pred__Modes_50, hlds__make_hlds__add_pred__MaybeDet_28, hlds__make_hlds__add_pred__PredStatus_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_pred__Context_32, hlds__make_hlds__add_pred__PredOrFunc_25, hlds__make_hlds__add_pred__IsClassMethod_51, &hlds__make_hlds__add_pred__PredProcId_52, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_67_220, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_61, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_68_221, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_63);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *hlds__make_hlds__add_pred__MaybePredProcId_36 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredProcId_52));
            }
          }
        else
          {
            MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_67_258;
            MR_Word hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_68_259;

            {
              hlds__make_hlds__add_pred__add_new_pred_18_p_0(hlds__make_hlds__add_pred__Origin_21, hlds__make_hlds__add_pred__TypeVarSet_22, hlds__make_hlds__add_pred__ExistQVars_24, hlds__make_hlds__add_pred__PredName_26, hlds__make_hlds__add_pred__Types_39, hlds__make_hlds__add_pred__Purity_29, hlds__make_hlds__add_pred__Constraints_30, hlds__make_hlds__add_pred__Markers_31, hlds__make_hlds__add_pred__Context_32, hlds__make_hlds__add_pred__PredStatus_33, hlds__make_hlds__add_pred__MaybeItemMercuryStatus_34, hlds__make_hlds__add_pred__MaybeModes0_40, hlds__make_hlds__add_pred__NeedQual_35, hlds__make_hlds__add_pred__PredOrFunc_25, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_0_60, &hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_67_258, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_0_62, &hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_68_259);
            }
            if ((hlds__make_hlds__add_pred__MaybeModes0_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word hlds__make_hlds__add_pred__V_117_117;
                MR_Word hlds__make_hlds__add_pred__V_103_103;
                MR_Word hlds__make_hlds__add_pred__V_104_104;
                MR_Word hlds__make_hlds__add_pred__V_105_105;
                MR_Word hlds__make_hlds__add_pred__V_106_106;
                MR_String hlds__make_hlds__add_pred__V_107_107;
                MR_Word hlds__make_hlds__add_pred__V_108_108;

                *hlds__make_hlds__add_pred__MaybePredProcId_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                hlds__make_hlds__add_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pred__MaybeDet_28)) == (MR_mktag((MR_Integer) 1)));
                if (hlds__make_hlds__add_pred__succeeded)
                  {
                    hlds__make_hlds__add_pred__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__MaybeDet_28, (MR_Integer) 0)));
                    hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__PredOrFunc_25 == (MR_Integer) 0);
                    if (hlds__make_hlds__add_pred__succeeded)
                      {
                        hlds__make_hlds__add_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pred__Types_39)) == (MR_mktag((MR_Integer) 1)));
                        if (hlds__make_hlds__add_pred__succeeded)
                          {
                            hlds__make_hlds__add_pred__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Types_39, (MR_Integer) 0)));
                            hlds__make_hlds__add_pred__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__Types_39, (MR_Integer) 1)));
                            hlds__make_hlds__add_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pred__PredName_26)) == (MR_mktag((MR_Integer) 1)));
                            if (hlds__make_hlds__add_pred__succeeded)
                              {
                                hlds__make_hlds__add_pred__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__PredName_26, (MR_Integer) 0)));
                                hlds__make_hlds__add_pred__V_107_107 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__PredName_26, (MR_Integer) 1)));
                                {
                                  hlds__make_hlds__add_pred__V_108_108 = mdbcomp__builtin_modules__mercury_int_module_0_f_0();
                                }
                                {
                                  hlds__make_hlds__add_pred__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__make_hlds__add_pred__V_106_106, hlds__make_hlds__add_pred__V_108_108);
                                }
                                if (hlds__make_hlds__add_pred__succeeded)
                                  hlds__make_hlds__add_pred__succeeded = (strcmp(hlds__make_hlds__add_pred__V_107_107, (MR_String) "is") == 0);
                              }
                            hlds__make_hlds__add_pred__succeeded = !(hlds__make_hlds__add_pred__succeeded);
                            if (hlds__make_hlds__add_pred__succeeded)
                              {
                                {
                                  hlds__make_hlds__add_pred__V_117_117 = hlds__status__pred_status_defined_in_this_module_1_f_0(hlds__make_hlds__add_pred__PredStatus_33);
                                }
                                hlds__make_hlds__add_pred__succeeded = (hlds__make_hlds__add_pred__V_117_117 == (MR_Integer) 1);
                              }
                          }
                      }
                  }
                if (hlds__make_hlds__add_pred__succeeded)
                  {
                    MR_Word hlds__make_hlds__add_pred__UnqualPredName_119;
                    MR_Word hlds__make_hlds__add_pred__DetPieces_120;
                    MR_Word hlds__make_hlds__add_pred__DetMsg_121;
                    MR_Word hlds__make_hlds__add_pred__DetSpec_122;
                    MR_String hlds__make_hlds__add_pred__V_123_123;
                    MR_Word hlds__make_hlds__add_pred__V_126_126;
                    MR_Word hlds__make_hlds__add_pred__V_127_127;
                    MR_Word hlds__make_hlds__add_pred__V_128_128;
                    MR_Word hlds__make_hlds__add_pred__V_130_130;
                    MR_Word hlds__make_hlds__add_pred__V_131_131;
                    MR_Word hlds__make_hlds__add_pred__V_135_135;

                    {
                      hlds__make_hlds__add_pred__V_123_123 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__make_hlds__add_pred__PredName_26);
                    }
                    {
                      hlds__make_hlds__add_pred__UnqualPredName_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__UnqualPredName_119, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_123_123));
                    }
                    {
                      hlds__make_hlds__add_pred__V_128_128 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_128_128, 0) = ((MR_Box) (hlds__make_hlds__add_pred__UnqualPredName_119));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_128_128, 1) = ((MR_Box) (hlds__make_hlds__add_pred__Arity_41));
                    }
                    {
                      hlds__make_hlds__add_pred__V_127_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_127_127, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pred__V_127_127, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_128_128));
                    }
                    {
                      hlds__make_hlds__add_pred__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_126_126, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_127_127));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_126_126, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pred_scalar_common_1[7])));
                    }
                    {
                      hlds__make_hlds__add_pred__DetPieces_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__DetPieces_120, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pred_scalar_common_1[46])));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__DetPieces_120, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_126_126));
                    }
                    {
                      hlds__make_hlds__add_pred__V_131_131 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__V_131_131, 0) = ((MR_Box) (hlds__make_hlds__add_pred__DetPieces_120));
                    }
                    {
                      hlds__make_hlds__add_pred__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_130_130, 0) = ((MR_Box) (hlds__make_hlds__add_pred__V_131_131));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_130_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      hlds__make_hlds__add_pred__DetMsg_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__DetMsg_121, 0) = ((MR_Box) (hlds__make_hlds__add_pred__Context_32));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__DetMsg_121, 1) = ((MR_Box) (hlds__make_hlds__add_pred__V_130_130));
                    }
                    {
                      hlds__make_hlds__add_pred__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_135_135, 0) = ((MR_Box) (hlds__make_hlds__add_pred__DetMsg_121));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__V_135_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      hlds__make_hlds__add_pred__DetSpec_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__DetSpec_122, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__DetSpec_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pred__DetSpec_122, 2) = ((MR_Box) (hlds__make_hlds__add_pred__V_135_135));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_63 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pred__DetSpec_122));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_68_259));
                    }
                  }
                else
                  *hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_63 = hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_68_259;
                *hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_61 = hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_67_258;
              }
            else
              {
                MR_Word hlds__make_hlds__add_pred__Modes_242 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pred__MaybeModes0_40, (MR_Integer) 0)));
                MR_Word hlds__make_hlds__add_pred__IsClassMethod_243;
                MR_Word hlds__make_hlds__add_pred__PredProcId_244;

                {
                  hlds__make_hlds__add_pred__succeeded = hlds__hlds_pred__check_marker_2_p_0(hlds__make_hlds__add_pred__Markers_31, (MR_Integer) 10);
                }
                if (hlds__make_hlds__add_pred__succeeded)
                  hlds__make_hlds__add_pred__IsClassMethod_243 = (MR_Integer) 1;
                else
                  hlds__make_hlds__add_pred__IsClassMethod_243 = (MR_Integer) 0;
                {
                  hlds__make_hlds__add_pred__module_add_mode_14_p_0(hlds__make_hlds__add_pred__InstVarSet_23, hlds__make_hlds__add_pred__PredName_26, hlds__make_hlds__add_pred__Modes_242, hlds__make_hlds__add_pred__MaybeDet_28, hlds__make_hlds__add_pred__PredStatus_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_pred__Context_32, hlds__make_hlds__add_pred__PredOrFunc_25, hlds__make_hlds__add_pred__IsClassMethod_243, &hlds__make_hlds__add_pred__PredProcId_244, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_67_258, hlds__make_hlds__add_pred__STATE_VARIABLE_ModuleInfo_61, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_68_259, hlds__make_hlds__add_pred__STATE_VARIABLE_Specs_63);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *hlds__make_hlds__add_pred__MaybePredProcId_36 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pred__PredProcId_244));
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
