/*
** Automatically generated from `add_pragma_tabling.m'
** by the Mercury compiler,
** version rotd-2016-02-26
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


/* :- module hlds.make_hlds.add_pragma.add_pragma_tabling. */
/* :- implementation. */

/*
INIT mercury__hlds__make_hlds__add_pragma__add_pragma_tabling__init
ENDINIT
*/

#include "hlds.make_hlds.add_pragma.add_pragma_tabling.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.foreign.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_code_util.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_hlds.mih"
#include "hlds.make_tags.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
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
#include "ll_backend.fact_table.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.llds_out.mih"
#include "ll_backend.rtti_out.mih"
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
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
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
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.mlds.mih"
#include "ml_backend.mlds_to_c.mih"
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
#include "transform_hlds.term_constr_util.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.add_clause.mih"
#include "hlds.make_hlds.add_foreign_proc.mih"
#include "hlds.make_hlds.add_pragma.mih"
#include "hlds.make_hlds.add_pred.mih"
#include "hlds.make_hlds.add_special_pred.mih"
#include "hlds.make_hlds.make_hlds_error.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "ll_backend.llds_out.llds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "hlds.make_hlds.add_pragma.add_foreign_enum.mih"
#include "hlds.make_hlds.add_pragma.add_pragma_type_spec.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_tabling__maybe__pti_maybe_1__plain_mdbcomp__prim_data__type_ctor_info_pred_or_func_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_tabling__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_tabling__maybe__pti_maybe_1__plain_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_tabling__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_table_attributes_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_tabling__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__IntroducedFrom__pred__table_info_c_global_var_name__637__1_2_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Target_10,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__2_28);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__check_pred_args_against_tabling_4_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleInfo_2,
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum_3,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__4_4);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__check_pred_args_against_tabling_methods_5_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__2_2,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleInfo_3,
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum_4,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__5_5);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__table_info_c_global_var_name_3_f_0_1(
  MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling__closure_arg);

static MR_String MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__table_info_c_global_var_name_3_f_0(
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleInfo_5,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_6,
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_7);

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__tabling_reset_pred_name_3_f_0(
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_5,
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_6,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_7);

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__tabling_stats_pred_name_3_f_0(
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_5,
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_6,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_7);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__create_tabling_reset_pred_13_p_0(
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_14,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Context_15,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_16,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_17,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredStatus_18,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_0_48,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_49,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_50,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_51,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0_52,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_53,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_54,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_55);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__create_tabling_statistics_pred_13_p_0(
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_14,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Context_15,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_16,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_17,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredStatus_18,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_0_59,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_60,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_61,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_62,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0_63,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_64,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_65,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_66);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__set_eval_method_create_aux_preds_16_p_0(
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_17,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ProcInfo0_18,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Context_19,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_20,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_21,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_22,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeAttributes_23,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredStatus_24,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_0_48,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_49,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_50,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_51,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0_52,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_53,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_54,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_55);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__set_eval_method_create_aux_preds_list_15_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Context_2,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_3,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_4,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_5,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeAttributes_6,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredStatus_7,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_0_8,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_9,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_10,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_11,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0_12,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_13,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_14,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_15);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__module_add_pragma_tabled_for_pred_15_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod0_16,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredName_17,
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__Arity0_18,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MaybePredOrFunc_19,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeModes_20,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeAttributes_21,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Context_22,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredStatus_23,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredId_24,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_65,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_66,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0_67,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_68,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_69,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_70);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__module_add_pragma_tabled_9_p_0_1(
  MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling__wrapper_arg_2,
  MR_Box * hlds__make_hlds__add_pragma__add_pragma_tabling__wrapper_arg_3,
  MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling__wrapper_arg_4,
  MR_Box * hlds__make_hlds__add_pragma__add_pragma_tabling__wrapper_arg_5,
  MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling__wrapper_arg_6,
  MR_Box * hlds__make_hlds__add_pragma__add_pragma_tabling__wrapper_arg_7);


static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[61][2];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_2[1][18];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_3[7][1];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_4[1][5];




static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[61][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "would have an ambiguous name too."))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[1])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "since the compiler-generated statistics predicate"))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[3])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "since the compiler-generated reset predicate"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[3])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[9])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "option to suppress this warning."))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[1])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--no-warn-table-with-inline"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "You can use the"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[16])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "since tabled predicates cannot be inlined."))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[17])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "This inline pragma will be ignored"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[19])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[21])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[22])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
    ((MR_Box) ((MR_String) "inline"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[24])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration but also has a"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[26])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[1])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "with no declared modes."))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[1])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "which has no declared modes."))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[1])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[34])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "pragmas specified."))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[1])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Only one kind of tabling pragma may be applied to it."))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[1])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[39])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: cannot request statistics"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for the ambiguous name"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: cannot request allow_reset"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: "))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "has a"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: "))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration for imported"))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration for undeclared mode of"))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error in"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "has duplicate"))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "has both"))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 59 */
  {
    ((MR_Box) ((MR_String) "too many argument tabling methods specified.")),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 60 */
  {
    ((MR_Box) ((MR_String) "not enough argument tabling methods specified.")),
    ((MR_Box) ((MR_String) ""))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_2[1][18] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 15)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_eval_method_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_tabling__maybe__pti_maybe_1__plain_mdbcomp__prim_data__type_ctor_info_pred_or_func_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_tabling__maybe__pti_maybe_1__plain_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_tabling__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_table_attributes_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_pred_status_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_tabling__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_tabling__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_3[7][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row 5 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[59]))
  },
  /* row 6 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[60]))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_4[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_compilation_target_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_compilation_target_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_tabling__maybe__pti_maybe_1__plain_mdbcomp__prim_data__type_ctor_info_pred_or_func_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_tabling__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_tabling__maybe__pti_maybe_1__plain_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__add_pragma__add_pragma_tabling__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_tabling__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_table_attributes_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_table_attributes_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_tabling__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__IntroducedFrom__pred__table_info_c_global_var_name__637__1_2_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Target_10,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__2_28)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded = (hlds__make_hlds__add_pragma__add_pragma_tabling__Target_10 == hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__2_28);

    return hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__check_pred_args_against_tabling_4_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleInfo_2,
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum_3,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded;

        if ((hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Mode_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Modes_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1, (MR_Integer) 1)));

            {
              hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded = check_hlds__mode_util__mode_is_fully_input_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleInfo_2, hlds__make_hlds__add_pragma__add_pragma_tabling__Mode_7);
            }
            if (hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded)
              {
                MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__V_12_12 = (hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum_3 + (MR_Integer) 1);

                /* direct tailcall eliminated */
                {
                  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1__tmp_copy_1 = hlds__make_hlds__add_pragma__add_pragma_tabling__Modes_8;
                  MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum__tmp_copy_3 = hlds__make_hlds__add_pragma__add_pragma_tabling__V_12_12;

                  hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum_3 = hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum__tmp_copy_3;
                  hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1 = hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
            else
              {
                {
                  hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded = check_hlds__mode_util__mode_is_fully_output_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleInfo_2, hlds__make_hlds__add_pragma__add_pragma_tabling__Mode_7);
                }
                if (hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded)
                  {
                    MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__V_14_14 = (hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum_3 + (MR_Integer) 1);

                    /* direct tailcall eliminated */
                    {
                      MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1__tmp_copy_1 = hlds__make_hlds__add_pragma__add_pragma_tabling__Modes_8;
                      MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum__tmp_copy_3 = hlds__make_hlds__add_pragma__add_pragma_tabling__V_14_14;

                      hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum_3 = hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum__tmp_copy_3;
                      hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1 = hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1__tmp_copy_1;
                    }
                    continue;
                  }
                else
                  {
                    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_16_16;
                    MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_17_17;
                    MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_19_19;

                    {
                      hlds__make_hlds__add_pragma__add_pragma_tabling__V_19_19 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum_3);
                    }
                    {
                      hlds__make_hlds__add_pragma__add_pragma_tabling__V_17_17 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", hlds__make_hlds__add_pragma__add_pragma_tabling__V_19_19);
                    }
                    {
                      hlds__make_hlds__add_pragma__add_pragma_tabling__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_16_16, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_17_17));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_16_16, 1) = ((MR_Box) ((MR_String) "is neither input or output."));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__4_4 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_16_16));
                    }
                  }
              }
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__check_pred_args_against_tabling_methods_5_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__2_2,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleInfo_3,
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum_4,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__5_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded;

        if ((hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          else
            {
              *hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_3[5]);
            }
        else
          {
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1, (MR_Integer) 0)));

            if ((hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                *hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_3[6]);
              }
            else
              {
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeArgMethod_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__2_2, (MR_Integer) 0)));
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeArgMethods_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__2_2, (MR_Integer) 1)));

                {
                  hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded = check_hlds__mode_util__mode_is_fully_input_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleInfo_3, hlds__make_hlds__add_pragma__add_pragma_tabling__V_67_67);
                }
                if (hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded)
                  if ((hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeArgMethod_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_33_33;
                      MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_34_34;
                      MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_36_36;
                      MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_37_37;
                      MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_39_39;
                      MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_41_41;
                      MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_42_42;

                      {
                        hlds__make_hlds__add_pragma__add_pragma_tabling__V_37_37 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum_4);
                      }
                      {
                        hlds__make_hlds__add_pragma__add_pragma_tabling__V_36_36 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__V_37_37, (MR_String) ":");
                      }
                      {
                        hlds__make_hlds__add_pragma__add_pragma_tabling__V_34_34 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", hlds__make_hlds__add_pragma__add_pragma_tabling__V_36_36);
                      }
                      {
                        hlds__make_hlds__add_pragma__add_pragma_tabling__V_42_42 = parse_tree__prog_out__maybe_arg_tabling_method_to_string_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeArgMethod_26);
                      }
                      {
                        hlds__make_hlds__add_pragma__add_pragma_tabling__V_41_41 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__V_42_42, (MR_String) "\' is not compatible with input modes.");
                      }
                      {
                        hlds__make_hlds__add_pragma__add_pragma_tabling__V_39_39 = mercury__string__f_43_43_2_f_0((MR_String) "argument tabling method \140", hlds__make_hlds__add_pragma__add_pragma_tabling__V_41_41);
                      }
                      {
                        hlds__make_hlds__add_pragma__add_pragma_tabling__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_33_33, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_34_34));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_33_33, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_39_39));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        *hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__5_5 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_33_33));
                      }
                    }
                  else
                    {
                      MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__V_44_44 = (hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum_4 + (MR_Integer) 1);

                      /* direct tailcall eliminated */
                      {
                        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1__tmp_copy_1 = hlds__make_hlds__add_pragma__add_pragma_tabling__V_66_66;
                        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__2__tmp_copy_2 = hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeArgMethods_27;
                        MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum__tmp_copy_4 = hlds__make_hlds__add_pragma__add_pragma_tabling__V_44_44;

                        hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum_4 = hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum__tmp_copy_4;
                        hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__2_2 = hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__2__tmp_copy_2;
                        hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1 = hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1__tmp_copy_1;
                      }
                      continue;
                    }
                else
                  {
                    {
                      hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded = check_hlds__mode_util__mode_is_fully_output_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleInfo_3, hlds__make_hlds__add_pragma__add_pragma_tabling__V_67_67);
                    }
                    if (hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded)
                      if ((hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeArgMethod_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        {
                          MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__V_46_46 = (hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum_4 + (MR_Integer) 1);

                          /* direct tailcall eliminated */
                          {
                            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1__tmp_copy_1 = hlds__make_hlds__add_pragma__add_pragma_tabling__V_66_66;
                            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__2__tmp_copy_2 = hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeArgMethods_27;
                            MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum__tmp_copy_4 = hlds__make_hlds__add_pragma__add_pragma_tabling__V_46_46;

                            hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum_4 = hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum__tmp_copy_4;
                            hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__2_2 = hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__2__tmp_copy_2;
                            hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1 = hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1__tmp_copy_1;
                          }
                          continue;
                        }
                      else
                        {
                          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_48_48;
                          MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_49_49;
                          MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_51_51;
                          MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_52_52;
                          MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_54_54;
                          MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_56_56;
                          MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_57_57;

                          {
                            hlds__make_hlds__add_pragma__add_pragma_tabling__V_52_52 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum_4);
                          }
                          {
                            hlds__make_hlds__add_pragma__add_pragma_tabling__V_51_51 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__V_52_52, (MR_String) ":");
                          }
                          {
                            hlds__make_hlds__add_pragma__add_pragma_tabling__V_49_49 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", hlds__make_hlds__add_pragma__add_pragma_tabling__V_51_51);
                          }
                          {
                            hlds__make_hlds__add_pragma__add_pragma_tabling__V_57_57 = parse_tree__prog_out__maybe_arg_tabling_method_to_string_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeArgMethod_26);
                          }
                          {
                            hlds__make_hlds__add_pragma__add_pragma_tabling__V_56_56 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__V_57_57, (MR_String) "\' is not compatible with output modes.");
                          }
                          {
                            hlds__make_hlds__add_pragma__add_pragma_tabling__V_54_54 = mercury__string__f_43_43_2_f_0((MR_String) "argument tabling method \140", hlds__make_hlds__add_pragma__add_pragma_tabling__V_56_56);
                          }
                          {
                            hlds__make_hlds__add_pragma__add_pragma_tabling__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_48_48, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_49_49));
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_48_48, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_54_54));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            *hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__5_5 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_48_48));
                          }
                        }
                    else
                      {
                        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_59_59;
                        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_60_60;
                        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_62_62;
                        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_63_63;

                        {
                          hlds__make_hlds__add_pragma__add_pragma_tabling__V_63_63 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum_4);
                        }
                        {
                          hlds__make_hlds__add_pragma__add_pragma_tabling__V_62_62 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__V_63_63, (MR_String) ":");
                        }
                        {
                          hlds__make_hlds__add_pragma__add_pragma_tabling__V_60_60 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", hlds__make_hlds__add_pragma__add_pragma_tabling__V_62_62);
                        }
                        {
                          hlds__make_hlds__add_pragma__add_pragma_tabling__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_59_59, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_60_60));
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_59_59, 1) = ((MR_Box) ((MR_String) "is neither input or output."));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          *hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__5_5 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_59_59));
                        }
                      }
                  }
              }
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__table_info_c_global_var_name_3_f_0_1(
  MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling__closure_arg)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded;
    MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling__closure = hlds__make_hlds__add_pragma__add_pragma_tabling__closure_arg;

    {
      hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded = hlds__make_hlds__add_pragma__add_pragma_tabling__IntroducedFrom__pred__table_info_c_global_var_name__637__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__closure, (MR_Integer) 4))));
    }
    return hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded;
  }
}

static MR_String MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__table_info_c_global_var_name_3_f_0(
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleInfo_5,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_6,
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_7)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded;
    MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__VarName_8;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Globals_9;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Target_10;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HighLevelCode_11;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleName_12;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredOrFunc_13;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredSymName_14;
    MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_15;
    MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__PredName_16;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_24_24;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleInfo_5, &hlds__make_hlds__add_pragma__add_pragma_tabling__Globals_9);
    }
    {
      libs__globals__get_target_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__Globals_9, &hlds__make_hlds__add_pragma__add_pragma_tabling__Target_10);
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_24_24, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_24_24, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__table_info_c_global_var_name_3_f_0_1));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_24_24, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Target_10));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_24_24, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      mercury__require__expect_4_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__V_24_24, (MR_String) "hlds.make_hlds.add_pragma.add_pragma_tabling", (MR_String) "function \140hlds.make_hlds.add_pragma.add_pragma_tabling.table_info_c_global_var_name\'/3", (MR_String) "memo table statistics and reset are supported only for C");
    }
    {
      libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__Globals_9, (MR_Integer) 254, &hlds__make_hlds__add_pragma__add_pragma_tabling__HighLevelCode_11);
    }
    {
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleInfo_5, &hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleName_12);
    }
    hlds__make_hlds__add_pragma__add_pragma_tabling__PredOrFunc_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_6, (MR_Integer) 0)));
    hlds__make_hlds__add_pragma__add_pragma_tabling__PredSymName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_6, (MR_Integer) 1)));
    hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_6, (MR_Integer) 2)));
    {
      hlds__make_hlds__add_pragma__add_pragma_tabling__PredName_16 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__PredSymName_14);
    }
    switch (hlds__make_hlds__add_pragma__add_pragma_tabling__HighLevelCode_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ProcIdInt_22;
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ProcLabel_23;

          {
            hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_7, &hlds__make_hlds__add_pragma__add_pragma_tabling__ProcIdInt_22);
          }
          {
            hlds__make_hlds__add_pragma__add_pragma_tabling__ProcLabel_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ProcLabel_23, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleName_12));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ProcLabel_23, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__PredOrFunc_13));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ProcLabel_23, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleName_12));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ProcLabel_23, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__PredName_16));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ProcLabel_23, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_15));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ProcLabel_23, 5) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__ProcIdInt_22));
          }
          {
            hlds__make_hlds__add_pragma__add_pragma_tabling__VarName_8 = ll_backend__rtti_out__tabling_struct_data_addr_string_2_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ProcLabel_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MLDS_PredLabel_20;
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MLDS_ProcLabel_21;
          MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_31_31;
          MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_32_32;
          MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_34_34;

          {
            hlds__make_hlds__add_pragma__add_pragma_tabling__MLDS_PredLabel_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__MLDS_PredLabel_20, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__PredOrFunc_13));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__MLDS_PredLabel_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__MLDS_PredLabel_20, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__PredName_16));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__MLDS_PredLabel_20, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_15));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__MLDS_PredLabel_20, 4) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__MLDS_PredLabel_20, 5) = ((MR_Box) ((MR_Integer) 0));
          }
          {
            hlds__make_hlds__add_pragma__add_pragma_tabling__MLDS_ProcLabel_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__MLDS_ProcLabel_21, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__MLDS_PredLabel_20));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__MLDS_ProcLabel_21, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_7));
          }
          {
            hlds__make_hlds__add_pragma__add_pragma_tabling__V_31_31 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleName_12);
          }
          {
            hlds__make_hlds__add_pragma__add_pragma_tabling__V_34_34 = ml_backend__mlds_to_c__mlds_tabling_data_name_2_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__MLDS_ProcLabel_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
          {
            hlds__make_hlds__add_pragma__add_pragma_tabling__V_32_32 = mercury__string__f_43_43_2_f_0((MR_String) "__", hlds__make_hlds__add_pragma__add_pragma_tabling__V_34_34);
          }
          {
            hlds__make_hlds__add_pragma__add_pragma_tabling__VarName_8 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__V_31_31, hlds__make_hlds__add_pragma__add_pragma_tabling__V_32_32);
          }
        }
        break;
    }
    return hlds__make_hlds__add_pragma__add_pragma_tabling__VarName_8;
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__tabling_reset_pred_name_3_f_0(
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_5,
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_6,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_7)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__4_4;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PorF_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_5, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SymName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_5, (MR_Integer) 1)));
    MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__Arity0_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_5, (MR_Integer) 2)));
    MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_17;
    MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_28_28;
    MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_30_30;

    switch (hlds__make_hlds__add_pragma__add_pragma_tabling__PorF_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_17 = (hlds__make_hlds__add_pragma__add_pragma_tabling__Arity0_16 - (MR_Integer) 1);
        }
        break;
      case (MR_Integer) 0:
        hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_17 = hlds__make_hlds__add_pragma__add_pragma_tabling__Arity0_16;
        break;
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_30_30 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_17);
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_28_28 = mercury__string__f_43_43_2_f_0((MR_String) "_", hlds__make_hlds__add_pragma__add_pragma_tabling__V_30_30);
    }
    if (((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_pragma_tabling__SymName_15)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__Name_19 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__SymName_15, (MR_Integer) 1)));
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__NewName0_21;
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__NewName_22;
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleNameAgain_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__SymName_15, (MR_Integer) 0)));
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_25_25;
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_27_27;

        {
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_27_27 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__Name_19, hlds__make_hlds__add_pragma__add_pragma_tabling__V_28_28);
        }
        {
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_25_25 = mercury__string__f_43_43_2_f_0((MR_String) "_", hlds__make_hlds__add_pragma__add_pragma_tabling__V_27_27);
        }
        {
          hlds__make_hlds__add_pragma__add_pragma_tabling__NewName0_21 = mercury__string__f_43_43_2_f_0((MR_String) "table_reset_for", hlds__make_hlds__add_pragma__add_pragma_tabling__V_25_25);
        }
        switch (hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_7) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_31_31;
              MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_33_33;
              MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__V_34_34;

              {
                hlds__make_hlds__add_pragma__add_pragma_tabling__V_34_34 = hlds__hlds_pred__proc_id_to_int_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_6);
              }
              {
                hlds__make_hlds__add_pragma__add_pragma_tabling__V_33_33 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__V_34_34);
              }
              {
                hlds__make_hlds__add_pragma__add_pragma_tabling__V_31_31 = mercury__string__f_43_43_2_f_0((MR_String) "_", hlds__make_hlds__add_pragma__add_pragma_tabling__V_33_33);
              }
              {
                hlds__make_hlds__add_pragma__add_pragma_tabling__NewName_22 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__NewName0_21, hlds__make_hlds__add_pragma__add_pragma_tabling__V_31_31);
              }
            }
            break;
          case (MR_Integer) 1:
            hlds__make_hlds__add_pragma__add_pragma_tabling__NewName_22 = hlds__make_hlds__add_pragma__add_pragma_tabling__NewName0_21;
            break;
        }
        {
          hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__4_4, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleNameAgain_23));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__4_4, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__NewName_22));
        }
      }
    else
      {
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__Name_44 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__SymName_15, (MR_Integer) 0)));
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__NewName0_46;
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__NewName_47;
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_48_48;
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_49_49;

        {
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_49_49 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__Name_44, hlds__make_hlds__add_pragma__add_pragma_tabling__V_28_28);
        }
        {
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_48_48 = mercury__string__f_43_43_2_f_0((MR_String) "_", hlds__make_hlds__add_pragma__add_pragma_tabling__V_49_49);
        }
        {
          hlds__make_hlds__add_pragma__add_pragma_tabling__NewName0_46 = mercury__string__f_43_43_2_f_0((MR_String) "table_reset_for", hlds__make_hlds__add_pragma__add_pragma_tabling__V_48_48);
        }
        switch (hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_7) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_36_36;
              MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_38_38;
              MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__V_39_39;

              {
                hlds__make_hlds__add_pragma__add_pragma_tabling__V_39_39 = hlds__hlds_pred__proc_id_to_int_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_6);
              }
              {
                hlds__make_hlds__add_pragma__add_pragma_tabling__V_38_38 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__V_39_39);
              }
              {
                hlds__make_hlds__add_pragma__add_pragma_tabling__V_36_36 = mercury__string__f_43_43_2_f_0((MR_String) "_", hlds__make_hlds__add_pragma__add_pragma_tabling__V_38_38);
              }
              {
                hlds__make_hlds__add_pragma__add_pragma_tabling__NewName_47 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__NewName0_46, hlds__make_hlds__add_pragma__add_pragma_tabling__V_36_36);
              }
            }
            break;
          case (MR_Integer) 1:
            hlds__make_hlds__add_pragma__add_pragma_tabling__NewName_47 = hlds__make_hlds__add_pragma__add_pragma_tabling__NewName0_46;
            break;
        }
        {
          hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__4_4, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__NewName_47));
        }
      }
    return hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__4_4;
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__tabling_stats_pred_name_3_f_0(
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_5,
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_6,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_7)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__4_4;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PorF_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_5, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SymName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_5, (MR_Integer) 1)));
    MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__Arity0_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_5, (MR_Integer) 2)));
    MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_17;
    MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_28_28;
    MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_30_30;

    switch (hlds__make_hlds__add_pragma__add_pragma_tabling__PorF_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_17 = (hlds__make_hlds__add_pragma__add_pragma_tabling__Arity0_16 - (MR_Integer) 1);
        }
        break;
      case (MR_Integer) 0:
        hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_17 = hlds__make_hlds__add_pragma__add_pragma_tabling__Arity0_16;
        break;
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_30_30 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_17);
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_28_28 = mercury__string__f_43_43_2_f_0((MR_String) "_", hlds__make_hlds__add_pragma__add_pragma_tabling__V_30_30);
    }
    if (((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_pragma_tabling__SymName_15)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__Name_19 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__SymName_15, (MR_Integer) 1)));
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__NewName0_21;
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__NewName_22;
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleNameAgain_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__SymName_15, (MR_Integer) 0)));
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_25_25;
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_27_27;

        {
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_27_27 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__Name_19, hlds__make_hlds__add_pragma__add_pragma_tabling__V_28_28);
        }
        {
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_25_25 = mercury__string__f_43_43_2_f_0((MR_String) "_", hlds__make_hlds__add_pragma__add_pragma_tabling__V_27_27);
        }
        {
          hlds__make_hlds__add_pragma__add_pragma_tabling__NewName0_21 = mercury__string__f_43_43_2_f_0((MR_String) "table_statistics_for", hlds__make_hlds__add_pragma__add_pragma_tabling__V_25_25);
        }
        switch (hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_7) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_31_31;
              MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_33_33;
              MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__V_34_34;

              {
                hlds__make_hlds__add_pragma__add_pragma_tabling__V_34_34 = hlds__hlds_pred__proc_id_to_int_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_6);
              }
              {
                hlds__make_hlds__add_pragma__add_pragma_tabling__V_33_33 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__V_34_34);
              }
              {
                hlds__make_hlds__add_pragma__add_pragma_tabling__V_31_31 = mercury__string__f_43_43_2_f_0((MR_String) "_", hlds__make_hlds__add_pragma__add_pragma_tabling__V_33_33);
              }
              {
                hlds__make_hlds__add_pragma__add_pragma_tabling__NewName_22 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__NewName0_21, hlds__make_hlds__add_pragma__add_pragma_tabling__V_31_31);
              }
            }
            break;
          case (MR_Integer) 1:
            hlds__make_hlds__add_pragma__add_pragma_tabling__NewName_22 = hlds__make_hlds__add_pragma__add_pragma_tabling__NewName0_21;
            break;
        }
        {
          hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__4_4, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleNameAgain_23));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__4_4, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__NewName_22));
        }
      }
    else
      {
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__Name_44 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__SymName_15, (MR_Integer) 0)));
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__NewName0_46;
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__NewName_47;
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_48_48;
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_49_49;

        {
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_49_49 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__Name_44, hlds__make_hlds__add_pragma__add_pragma_tabling__V_28_28);
        }
        {
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_48_48 = mercury__string__f_43_43_2_f_0((MR_String) "_", hlds__make_hlds__add_pragma__add_pragma_tabling__V_49_49);
        }
        {
          hlds__make_hlds__add_pragma__add_pragma_tabling__NewName0_46 = mercury__string__f_43_43_2_f_0((MR_String) "table_statistics_for", hlds__make_hlds__add_pragma__add_pragma_tabling__V_48_48);
        }
        switch (hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_7) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_36_36;
              MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_38_38;
              MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__V_39_39;

              {
                hlds__make_hlds__add_pragma__add_pragma_tabling__V_39_39 = hlds__hlds_pred__proc_id_to_int_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_6);
              }
              {
                hlds__make_hlds__add_pragma__add_pragma_tabling__V_38_38 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__V_39_39);
              }
              {
                hlds__make_hlds__add_pragma__add_pragma_tabling__V_36_36 = mercury__string__f_43_43_2_f_0((MR_String) "_", hlds__make_hlds__add_pragma__add_pragma_tabling__V_38_38);
              }
              {
                hlds__make_hlds__add_pragma__add_pragma_tabling__NewName_47 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__NewName0_46, hlds__make_hlds__add_pragma__add_pragma_tabling__V_36_36);
              }
            }
            break;
          case (MR_Integer) 1:
            hlds__make_hlds__add_pragma__add_pragma_tabling__NewName_47 = hlds__make_hlds__add_pragma__add_pragma_tabling__NewName0_46;
            break;
        }
        {
          hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__4_4, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__NewName_47));
        }
      }
    return hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__4_4;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__create_tabling_reset_pred_13_p_0(
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_14,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Context_15,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_16,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_17,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredStatus_18,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_0_48,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_49,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_50,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_51,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0_52,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_53,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_54,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_55)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_121_121;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg1_23;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg2_24;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArgs_25;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Origin_26;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__TypeVarSet_27;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__InstVarSet_28;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ResetPredSymName_30;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Markers_32;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__IO0_36;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__IO_37;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Globals_38;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__IsTablingSupported_39;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_56_56;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_57_57;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_58_58;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_59_59;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_60_60;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_70_70;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_71_71;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_73_73;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_75_75;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_77_77;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_33_33;

    {
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_56_56 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_57_57 = parse_tree__prog_mode__di_mode_0_f_0();
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg1_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg1_23, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_56_56));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg1_23, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_57_57));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_58_58 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_59_59 = parse_tree__prog_mode__uo_mode_0_f_0();
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg2_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg2_24, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_58_58));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg2_24, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_59_59));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_60_60, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg2_24));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArgs_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArgs_25, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg1_23));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArgs_25, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_60_60));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_tabling__Origin_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__Origin_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__Origin_26, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_16));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__Origin_26, 2) = ((MR_Box) ((MR_Integer) 1));
    }
    {
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &hlds__make_hlds__add_pragma__add_pragma_tabling__TypeVarSet_27);
    }
    {
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &hlds__make_hlds__add_pragma__add_pragma_tabling__InstVarSet_28);
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_tabling__ResetPredSymName_30 = hlds__make_hlds__add_pragma__add_pragma_tabling__tabling_reset_pred_name_3_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_16, hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_14, hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_17);
    }
    {
      hlds__hlds_pred__init_markers_1_p_0(&hlds__make_hlds__add_pragma__add_pragma_tabling__Markers_32);
    }
    {
      hlds__make_hlds__add_pred__module_add_pred_or_func_20_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__Origin_26, hlds__make_hlds__add_pragma__add_pragma_tabling__TypeVarSet_27, hlds__make_hlds__add_pragma__add_pragma_tabling__InstVarSet_28, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, hlds__make_hlds__add_pragma__add_pragma_tabling__ResetPredSymName_30, hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArgs_25, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_3[2]), (MR_Integer) 0, (MR_Word) &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[58], hlds__make_hlds__add_pragma__add_pragma_tabling__Markers_32, hlds__make_hlds__add_pragma__add_pragma_tabling__Context_15, hlds__make_hlds__add_pragma__add_pragma_tabling__PredStatus_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 1, &hlds__make_hlds__add_pragma__add_pragma_tabling__V_33_33, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_50, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_70_70, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_54, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_71_71);
    }
    hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_121_121 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      mercury__varset__init_1_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_121_121, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_73_73);
    }
    {
      mercury__varset__new_named_var_4_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_121_121, (MR_String) "IO0", &hlds__make_hlds__add_pragma__add_pragma_tabling__IO0_36, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_73_73, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_75_75);
    }
    {
      mercury__varset__new_named_var_4_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_121_121, (MR_String) "IO", &hlds__make_hlds__add_pragma__add_pragma_tabling__IO_37, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_75_75, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_77_77);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_70_70, &hlds__make_hlds__add_pragma__add_pragma_tabling__Globals_38);
    }
    {
      libs__globals__current_grade_supports_tabling_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__Globals_38, &hlds__make_hlds__add_pragma__add_pragma_tabling__IsTablingSupported_39);
    }
    switch (hlds__make_hlds__add_pragma__add_pragma_tabling__IsTablingSupported_39) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Args_46;
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__BodyExpr_47;
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_78_78;
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_79_79;
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_80_80;
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_86_86;

          {
            hlds__make_hlds__add_pragma__add_pragma_tabling__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_78_78, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__IO0_36));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_78_78, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Context_15));
          }
          {
            hlds__make_hlds__add_pragma__add_pragma_tabling__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_80_80, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__IO_37));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_80_80, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Context_15));
          }
          {
            hlds__make_hlds__add_pragma__add_pragma_tabling__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_79_79, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_80_80));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            hlds__make_hlds__add_pragma__add_pragma_tabling__Args_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__Args_46, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_78_78));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__Args_46, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_79_79));
          }
          {
            hlds__make_hlds__add_pragma__add_pragma_tabling__BodyExpr_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__BodyExpr_47, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Context_15));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__BodyExpr_47, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_78_78));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__BodyExpr_47, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_80_80));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__BodyExpr_47, 3) = ((MR_Box) ((MR_Integer) 0));
          }
          {
            hlds__make_hlds__add_pragma__add_pragma_tabling__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_86_86, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__BodyExpr_47));
          }
          {
            hlds__make_hlds__add_clause__module_add_clause_15_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_77_77, (MR_Integer) 0, hlds__make_hlds__add_pragma__add_pragma_tabling__ResetPredSymName_30, hlds__make_hlds__add_pragma__add_pragma_tabling__Args_46, hlds__make_hlds__add_pragma__add_pragma_tabling__V_86_86, hlds__make_hlds__add_pragma__add_pragma_tabling__PredStatus_18, hlds__make_hlds__add_pragma__add_pragma_tabling__Context_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_70_70, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_51, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0_52, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_53, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_71_71, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_55);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Arg1_40;
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Arg2_41;
          MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__GlobalVarName_42;
          MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__ResetCode_43;
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ResetImpl_44;
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ResetPragmaFCInfo_45;
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_93_93;
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_96_96;
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_98_98;
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_101_101;
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_103_103;
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_105_105;
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_107_107;
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_110_110;
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_112_112;
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_113_113;

          {
            hlds__make_hlds__add_pragma__add_pragma_tabling__V_93_93 = parse_tree__prog_mode__di_mode_0_f_0();
          }
          {
            hlds__make_hlds__add_pragma__add_pragma_tabling__Arg1_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg1_40, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__IO0_36));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg1_40, 1) = ((MR_Box) ((MR_String) "_IO0"));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg1_40, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_93_93));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg1_40, 3) = ((MR_Box) ((MR_Integer) 1));
          }
          {
            hlds__make_hlds__add_pragma__add_pragma_tabling__V_96_96 = parse_tree__prog_mode__uo_mode_0_f_0();
          }
          {
            hlds__make_hlds__add_pragma__add_pragma_tabling__Arg2_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg2_41, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__IO_37));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg2_41, 1) = ((MR_Box) ((MR_String) "_IO"));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg2_41, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_96_96));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg2_41, 3) = ((MR_Box) ((MR_Integer) 1));
          }
          {
            hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_98_98 = parse_tree__prog_data__default_attributes_1_f_0((MR_Integer) 0);
          }
          {
            parse_tree__prog_data__set_may_call_mercury_3_p_0((MR_Integer) 1, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_98_98, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_101_101);
          }
          {
            parse_tree__prog_data__set_thread_safe_3_p_0((MR_Integer) 1, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_101_101, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_103_103);
          }
          {
            parse_tree__prog_data__set_purity_3_p_0((MR_Integer) 0, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_103_103, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_105_105);
          }
          {
            parse_tree__prog_data__set_may_duplicate_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_3[3]), hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_105_105, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_107_107);
          }
          {
            hlds__make_hlds__add_pragma__add_pragma_tabling__GlobalVarName_42 = hlds__make_hlds__add_pragma__add_pragma_tabling__table_info_c_global_var_name_3_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_70_70, hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_16, hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_14);
          }
          {
            hlds__make_hlds__add_pragma__add_pragma_tabling__ResetCode_43 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__GlobalVarName_42, (MR_String) ".MR_pt_tablenode.MR_integer = 0;");
          }
          {
            hlds__make_hlds__add_pragma__add_pragma_tabling__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_110_110, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Context_15));
          }
          {
            hlds__make_hlds__add_pragma__add_pragma_tabling__ResetImpl_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ResetImpl_44, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__ResetCode_43));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ResetImpl_44, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_110_110));
          }
          {
            hlds__make_hlds__add_pragma__add_pragma_tabling__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_113_113, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Arg2_41));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_113_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            hlds__make_hlds__add_pragma__add_pragma_tabling__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_112_112, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Arg1_40));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_112_112, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_113_113));
          }
          {
            hlds__make_hlds__add_pragma__add_pragma_tabling__ResetPragmaFCInfo_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ResetPragmaFCInfo_45, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_107_107));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ResetPragmaFCInfo_45, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__ResetPredSymName_30));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ResetPragmaFCInfo_45, 2) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ResetPragmaFCInfo_45, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_112_112));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ResetPragmaFCInfo_45, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_77_77));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ResetPragmaFCInfo_45, 5) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__InstVarSet_28));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ResetPragmaFCInfo_45, 6) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__ResetImpl_44));
          }
          {
            hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ResetPragmaFCInfo_45, hlds__make_hlds__add_pragma__add_pragma_tabling__PredStatus_18, hlds__make_hlds__add_pragma__add_pragma_tabling__Context_15, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_3[4]), hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_70_70, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_51, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_71_71, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_55);
          }
          *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_53 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0_52;
        }
        break;
    }
    *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_49 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_0_48;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__create_tabling_statistics_pred_13_p_0(
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_14,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Context_15,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_16,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_17,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredStatus_18,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_0_59,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_60,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_61,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_62,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0_63,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_64,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_65,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_66)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_153_153;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__TableBuiltinModule_23;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__StatsTypeName_24;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__StatsType_25;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg1_26;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg2_27;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg3_28;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArgs_29;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Origin_30;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__TypeVarSet_31;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__InstVarSet_32;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__StatsPredSymName_34;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Markers_36;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Stats_40;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__IO0_41;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__IO_42;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Globals_43;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__IsTablingSupported_44;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_70_70;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_71_71;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_72_72;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_73_73;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_74_74;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_75_75;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_76_76;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_86_86;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_87_87;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_89_89;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_91_91;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_93_93;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_95_95;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_37_37;

    {
      hlds__make_hlds__add_pragma__add_pragma_tabling__TableBuiltinModule_23 = mdbcomp__builtin_modules__mercury_table_statistics_module_0_f_0();
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_tabling__StatsTypeName_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsTypeName_24, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__TableBuiltinModule_23));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsTypeName_24, 1) = ((MR_Box) ((MR_String) "proc_table_statistics"));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_tabling__StatsType_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsType_25, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__StatsTypeName_24));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsType_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsType_25, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_70_70 = parse_tree__prog_mode__out_mode_0_f_0();
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg1_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg1_26, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__StatsType_25));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg1_26, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_70_70));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_71_71 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_72_72 = parse_tree__prog_mode__di_mode_0_f_0();
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg2_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg2_27, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_71_71));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg2_27, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_72_72));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_73_73 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_74_74 = parse_tree__prog_mode__uo_mode_0_f_0();
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg3_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg3_28, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_73_73));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg3_28, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_74_74));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_76_76, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg3_28));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_75_75, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg2_27));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_75_75, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_76_76));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArgs_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArgs_29, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg1_26));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArgs_29, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_75_75));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_tabling__Origin_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__Origin_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__Origin_30, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_16));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__Origin_30, 2) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &hlds__make_hlds__add_pragma__add_pragma_tabling__TypeVarSet_31);
    }
    {
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &hlds__make_hlds__add_pragma__add_pragma_tabling__InstVarSet_32);
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_tabling__StatsPredSymName_34 = hlds__make_hlds__add_pragma__add_pragma_tabling__tabling_stats_pred_name_3_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_16, hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_14, hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_17);
    }
    {
      hlds__hlds_pred__init_markers_1_p_0(&hlds__make_hlds__add_pragma__add_pragma_tabling__Markers_36);
    }
    {
      hlds__make_hlds__add_pred__module_add_pred_or_func_20_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__Origin_30, hlds__make_hlds__add_pragma__add_pragma_tabling__TypeVarSet_31, hlds__make_hlds__add_pragma__add_pragma_tabling__InstVarSet_32, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, hlds__make_hlds__add_pragma__add_pragma_tabling__StatsPredSymName_34, hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArgs_29, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_3[2]), (MR_Integer) 0, (MR_Word) &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[58], hlds__make_hlds__add_pragma__add_pragma_tabling__Markers_36, hlds__make_hlds__add_pragma__add_pragma_tabling__Context_15, hlds__make_hlds__add_pragma__add_pragma_tabling__PredStatus_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 1, &hlds__make_hlds__add_pragma__add_pragma_tabling__V_37_37, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_86_86, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_65, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_87_87);
    }
    hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_153_153 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      mercury__varset__init_1_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_153_153, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_89_89);
    }
    {
      mercury__varset__new_named_var_4_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_153_153, (MR_String) "Stats", &hlds__make_hlds__add_pragma__add_pragma_tabling__Stats_40, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_89_89, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_91_91);
    }
    {
      mercury__varset__new_named_var_4_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_153_153, (MR_String) "IO0", &hlds__make_hlds__add_pragma__add_pragma_tabling__IO0_41, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_91_91, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_93_93);
    }
    {
      mercury__varset__new_named_var_4_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_153_153, (MR_String) "IO", &hlds__make_hlds__add_pragma__add_pragma_tabling__IO_42, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_93_93, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_95_95);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_86_86, &hlds__make_hlds__add_pragma__add_pragma_tabling__Globals_43);
    }
    {
      libs__globals__current_grade_supports_tabling_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__Globals_43, &hlds__make_hlds__add_pragma__add_pragma_tabling__IsTablingSupported_44);
    }
    switch (hlds__make_hlds__add_pragma__add_pragma_tabling__IsTablingSupported_44) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__DummyStatsFuncSymName_52;
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__DummyStatsFuncTerm_53;
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Args_54;
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__GetStatsExpr_55;
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__UpdateIOExpr_56;
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__GetStatsUpdateIOExpr_57;
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__BodyExpr_58;
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_96_96;
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_99_99;
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_100_100;
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_101_101;
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_102_102;
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_103_103;
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_112_112;

          {
            hlds__make_hlds__add_pragma__add_pragma_tabling__V_96_96 = mdbcomp__builtin_modules__mercury_table_statistics_module_0_f_0();
          }
          {
            hlds__make_hlds__add_pragma__add_pragma_tabling__DummyStatsFuncSymName_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__DummyStatsFuncSymName_52, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_96_96));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__DummyStatsFuncSymName_52, 1) = ((MR_Box) ((MR_String) "dummy_proc_table_statistics"));
          }
          {
            mdbcomp__sym_name__sym_name_to_term_4_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_153_153, hlds__make_hlds__add_pragma__add_pragma_tabling__Context_15, hlds__make_hlds__add_pragma__add_pragma_tabling__DummyStatsFuncSymName_52, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__add_pragma__add_pragma_tabling__DummyStatsFuncTerm_53);
          }
          {
            hlds__make_hlds__add_pragma__add_pragma_tabling__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_99_99, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Stats_40));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_99_99, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Context_15));
          }
          {
            hlds__make_hlds__add_pragma__add_pragma_tabling__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_101_101, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__IO0_41));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_101_101, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Context_15));
          }
          {
            hlds__make_hlds__add_pragma__add_pragma_tabling__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_103_103, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__IO_42));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_103_103, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Context_15));
          }
          {
            hlds__make_hlds__add_pragma__add_pragma_tabling__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_102_102, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_103_103));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_102_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            hlds__make_hlds__add_pragma__add_pragma_tabling__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_100_100, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_101_101));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_100_100, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_102_102));
          }
          {
            hlds__make_hlds__add_pragma__add_pragma_tabling__Args_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__Args_54, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_99_99));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__Args_54, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_100_100));
          }
          {
            hlds__make_hlds__add_pragma__add_pragma_tabling__GetStatsExpr_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__GetStatsExpr_55, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Context_15));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__GetStatsExpr_55, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_99_99));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__GetStatsExpr_55, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__DummyStatsFuncTerm_53));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__GetStatsExpr_55, 3) = ((MR_Box) ((MR_Integer) 0));
          }
          {
            hlds__make_hlds__add_pragma__add_pragma_tabling__UpdateIOExpr_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__UpdateIOExpr_56, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Context_15));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__UpdateIOExpr_56, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_101_101));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__UpdateIOExpr_56, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_103_103));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__UpdateIOExpr_56, 3) = ((MR_Box) ((MR_Integer) 0));
          }
          {
            hlds__make_hlds__add_pragma__add_pragma_tabling__GetStatsUpdateIOExpr_57 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pragma__add_pragma_tabling__GetStatsUpdateIOExpr_57, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Context_15));
            MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pragma__add_pragma_tabling__GetStatsUpdateIOExpr_57, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__GetStatsExpr_55));
            MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pragma__add_pragma_tabling__GetStatsUpdateIOExpr_57, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__UpdateIOExpr_56));
          }
          {
            hlds__make_hlds__add_pragma__add_pragma_tabling__BodyExpr_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__BodyExpr_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__BodyExpr_58, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Context_15));
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__BodyExpr_58, 2) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__BodyExpr_58, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__GetStatsUpdateIOExpr_57));
          }
          {
            hlds__make_hlds__add_pragma__add_pragma_tabling__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_112_112, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__BodyExpr_58));
          }
          {
            hlds__make_hlds__add_clause__module_add_clause_15_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_95_95, (MR_Integer) 0, hlds__make_hlds__add_pragma__add_pragma_tabling__StatsPredSymName_34, hlds__make_hlds__add_pragma__add_pragma_tabling__Args_54, hlds__make_hlds__add_pragma__add_pragma_tabling__V_112_112, hlds__make_hlds__add_pragma__add_pragma_tabling__PredStatus_18, hlds__make_hlds__add_pragma__add_pragma_tabling__Context_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_86_86, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_62, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0_63, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_64, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_87_87, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_66);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Arg1_45;
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Arg2_46;
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Arg3_47;
          MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__Global_48;
          MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__StatsCode_49;
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__StatsImpl_50;
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__StatsPragmaFCInfo_51;
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_119_119;
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_122_122;
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_125_125;
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_127_127;
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_130_130;
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_132_132;
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_134_134;
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_136_136;
          MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_139_139;
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_141_141;
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_143_143;
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_144_144;
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_145_145;

          {
            hlds__make_hlds__add_pragma__add_pragma_tabling__V_119_119 = parse_tree__prog_mode__out_mode_0_f_0();
          }
          {
            hlds__make_hlds__add_pragma__add_pragma_tabling__Arg1_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg1_45, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Stats_40));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg1_45, 1) = ((MR_Box) ((MR_String) "Stats"));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg1_45, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_119_119));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg1_45, 3) = ((MR_Box) ((MR_Integer) 1));
          }
          {
            hlds__make_hlds__add_pragma__add_pragma_tabling__V_122_122 = parse_tree__prog_mode__di_mode_0_f_0();
          }
          {
            hlds__make_hlds__add_pragma__add_pragma_tabling__Arg2_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg2_46, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__IO0_41));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg2_46, 1) = ((MR_Box) ((MR_String) "_IO0"));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg2_46, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_122_122));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg2_46, 3) = ((MR_Box) ((MR_Integer) 1));
          }
          {
            hlds__make_hlds__add_pragma__add_pragma_tabling__V_125_125 = parse_tree__prog_mode__uo_mode_0_f_0();
          }
          {
            hlds__make_hlds__add_pragma__add_pragma_tabling__Arg3_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg3_47, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__IO_42));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg3_47, 1) = ((MR_Box) ((MR_String) "_IO"));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg3_47, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_125_125));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg3_47, 3) = ((MR_Box) ((MR_Integer) 1));
          }
          {
            hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_127_127 = parse_tree__prog_data__default_attributes_1_f_0((MR_Integer) 0);
          }
          {
            parse_tree__prog_data__set_may_call_mercury_3_p_0((MR_Integer) 0, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_127_127, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_130_130);
          }
          {
            parse_tree__prog_data__set_thread_safe_3_p_0((MR_Integer) 1, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_130_130, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_132_132);
          }
          {
            parse_tree__prog_data__set_purity_3_p_0((MR_Integer) 0, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_132_132, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_134_134);
          }
          {
            parse_tree__prog_data__set_may_duplicate_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_3[3]), hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_134_134, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_136_136);
          }
          {
            hlds__make_hlds__add_pragma__add_pragma_tabling__Global_48 = hlds__make_hlds__add_pragma__add_pragma_tabling__table_info_c_global_var_name_3_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_86_86, hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_16, hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_14);
          }
          {
            hlds__make_hlds__add_pragma__add_pragma_tabling__V_139_139 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__Global_48, (MR_String) ", &Stats);");
          }
          {
            hlds__make_hlds__add_pragma__add_pragma_tabling__StatsCode_49 = mercury__string__f_43_43_2_f_0((MR_String) "MR_get_tabling_stats(&", hlds__make_hlds__add_pragma__add_pragma_tabling__V_139_139);
          }
          {
            hlds__make_hlds__add_pragma__add_pragma_tabling__V_141_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_141_141, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Context_15));
          }
          {
            hlds__make_hlds__add_pragma__add_pragma_tabling__StatsImpl_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsImpl_50, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__StatsCode_49));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsImpl_50, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_141_141));
          }
          {
            hlds__make_hlds__add_pragma__add_pragma_tabling__V_145_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_145_145, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Arg3_47));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_145_145, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            hlds__make_hlds__add_pragma__add_pragma_tabling__V_144_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_144_144, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Arg2_46));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_144_144, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_145_145));
          }
          {
            hlds__make_hlds__add_pragma__add_pragma_tabling__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_143_143, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Arg1_45));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_143_143, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_144_144));
          }
          {
            hlds__make_hlds__add_pragma__add_pragma_tabling__StatsPragmaFCInfo_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsPragmaFCInfo_51, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_136_136));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsPragmaFCInfo_51, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__StatsPredSymName_34));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsPragmaFCInfo_51, 2) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsPragmaFCInfo_51, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_143_143));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsPragmaFCInfo_51, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_95_95));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsPragmaFCInfo_51, 5) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__InstVarSet_32));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsPragmaFCInfo_51, 6) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__StatsImpl_50));
          }
          {
            hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__StatsPragmaFCInfo_51, hlds__make_hlds__add_pragma__add_pragma_tabling__PredStatus_18, hlds__make_hlds__add_pragma__add_pragma_tabling__Context_15, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_3[4]), hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_86_86, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_62, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_87_87, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_66);
          }
          *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_64 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0_63;
        }
        break;
    }
    *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_60 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_0_59;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__set_eval_method_create_aux_preds_16_p_0(
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_17,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ProcInfo0_18,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Context_19,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_20,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_21,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_22,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeAttributes_23,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredStatus_24,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_0_48,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_49,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_50,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_51,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0_52,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_53,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_54,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_55)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__OldEvalMethod_29;

    {
      hlds__hlds_pred__proc_info_get_eval_method_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ProcInfo0_18, &hlds__make_hlds__add_pragma__add_pragma_tabling__OldEvalMethod_29);
    }
    hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded = (hlds__make_hlds__add_pragma__add_pragma_tabling__OldEvalMethod_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded)
      {
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeDeclaredArgModes_30;

        {
          hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ProcInfo0_18, &hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeDeclaredArgModes_30);
        }
        if ((hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeDeclaredArgModes_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_31;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_32;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_33;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_34;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_99_99;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_100_100;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_101_101;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_104_104;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_105_105;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_115_115;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_116_116;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_120_120;

            {
              hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_31 = parse_tree__prog_out__eval_method_to_string_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_22);
            }
            {
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_100_100 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_100_100, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_100_100, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_31));
            }
            {
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_105_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_105_105, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_105_105, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_20));
            }
            {
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_104_104, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_105_105));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_104_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[35])));
            }
            {
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_101_101, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[50])));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_101_101, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_104_104));
            }
            {
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_99_99, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_100_100));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_99_99, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_101_101));
            }
            {
              hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[51])));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_32, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_99_99));
            }
            {
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_116_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_116_116, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_32));
            }
            {
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_115_115, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_116_116));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_115_115, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_33, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Context_19));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_33, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_115_115));
            }
            {
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_120_120, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_33));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_120_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_34, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_120_120));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_55 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_34));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_54));
            }
            *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_49 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_0_48;
            *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_51 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_50;
            *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_53 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0_52;
          }
        else
          {
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__DeclaredArgModes_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeDeclaredArgModes_30, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Statistics_38;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__AllowReset_39;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeError_42;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ProcInfo1_45;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ProcInfo_46;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_87_87;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_88_88;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_89_89;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_90_90;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_91_91;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_92_92;

            if ((hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeAttributes_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                hlds__make_hlds__add_pragma__add_pragma_tabling__Statistics_38 = (MR_Integer) 1;
                hlds__make_hlds__add_pragma__add_pragma_tabling__AllowReset_39 = (MR_Integer) 1;
                {
                  hlds__make_hlds__add_pragma__add_pragma_tabling__check_pred_args_against_tabling_4_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__DeclaredArgModes_35, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_50, (MR_Integer) 1, &hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeError_42);
                }
              }
            else
              {
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Attributes_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeAttributes_23, (MR_Integer) 0)));
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Strictness_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Attributes_36, (MR_Integer) 0)));
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Attributes_36, (MR_Integer) 1)));

                hlds__make_hlds__add_pragma__add_pragma_tabling__Statistics_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Attributes_36, (MR_Integer) 2)));
                hlds__make_hlds__add_pragma__add_pragma_tabling__AllowReset_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Attributes_36, (MR_Integer) 3)));
                switch (MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_pragma_tabling__Strictness_199)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      {
                        hlds__make_hlds__add_pragma__add_pragma_tabling__check_pred_args_against_tabling_4_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__DeclaredArgModes_35, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_50, (MR_Integer) 1, &hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeError_42);
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeArgMethods_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__Strictness_199, (MR_Integer) 0)));
                      MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling___HiddenArgMethod_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__Strictness_199, (MR_Integer) 1)));

                      {
                        hlds__make_hlds__add_pragma__add_pragma_tabling__check_pred_args_against_tabling_methods_5_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__DeclaredArgModes_35, hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeArgMethods_40, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_50, (MR_Integer) 1, &hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeError_42);
                      }
                    }
                    break;
                }
              }
            if ((hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeError_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_87_87 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_54;
            else
              {
                MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__ArgMsg_43;
                MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__ErrorMsg_44;
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeError_42, (MR_Integer) 0)));
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_61_61;
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_62_62;
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_63_63;
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_66_66;
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_67_67;
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_68_68;
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_71_71;
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_73_73;
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_74_74;
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_75_75;
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_76_76;
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_80_80;
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_81_81;
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_85_85;
                MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_169;
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_170;
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_171;
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_172;

                hlds__make_hlds__add_pragma__add_pragma_tabling__ArgMsg_43 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_58_58, (MR_Integer) 0)));
                hlds__make_hlds__add_pragma__add_pragma_tabling__ErrorMsg_44 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_58_58, (MR_Integer) 1)));
                {
                  hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_169 = parse_tree__prog_out__eval_method_to_string_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_22);
                }
                {
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_62_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_62_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_62_62, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_169));
                }
                {
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_67_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_67_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_67_67, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_20));
                }
                {
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_74_74 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pragma__add_pragma_tabling__V_74_74, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__ArgMsg_43));
                }
                {
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_76_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_76_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_76_76, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__ErrorMsg_44));
                }
                {
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_75_75, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_76_76));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[1])));
                }
                {
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_73_73, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_74_74));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_73_73, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_75_75));
                }
                {
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_71_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_71_71, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_73_73));
                }
                {
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_68_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[54])));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_68_68, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_71_71));
                }
                {
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_66_66, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_67_67));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_66_66, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_68_68));
                }
                {
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_63_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[50])));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_63_63, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_66_66));
                }
                {
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_61_61, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_62_62));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_61_61, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_63_63));
                }
                {
                  hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_170, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[53])));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_170, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_61_61));
                }
                {
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_81_81, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_170));
                }
                {
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_80_80, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_81_81));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_171 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_171, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Context_19));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_171, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_80_80));
                }
                {
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_85_85, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_171));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_172 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_172, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_172, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_172, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_85_85));
                }
                {
                  hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_87_87, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_172));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_87_87, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_54));
                }
              }
            {
              hlds__hlds_pred__proc_info_set_eval_method_3_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_22, hlds__make_hlds__add_pragma__add_pragma_tabling__ProcInfo0_18, &hlds__make_hlds__add_pragma__add_pragma_tabling__ProcInfo1_45);
            }
            {
              hlds__hlds_pred__proc_info_set_table_attributes_3_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeAttributes_23, hlds__make_hlds__add_pragma__add_pragma_tabling__ProcInfo1_45, &hlds__make_hlds__add_pragma__add_pragma_tabling__ProcInfo_46);
            }
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_17, ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__ProcInfo_46)), hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_0_48, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_88_88);
            }
            switch (hlds__make_hlds__add_pragma__add_pragma_tabling__Statistics_38) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_89_89 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_88_88;
                  hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_90_90 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_50;
                  hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_91_91 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0_52;
                  hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_92_92 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_87_87;
                }
                break;
              case (MR_Integer) 0:
                {
                  hlds__make_hlds__add_pragma__add_pragma_tabling__create_tabling_statistics_pred_13_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_17, hlds__make_hlds__add_pragma__add_pragma_tabling__Context_19, hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_20, hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_21, hlds__make_hlds__add_pragma__add_pragma_tabling__PredStatus_24, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_88_88, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_89_89, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_50, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_90_90, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0_52, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_91_91, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_87_87, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_92_92);
                }
                break;
            }
            switch (hlds__make_hlds__add_pragma__add_pragma_tabling__AllowReset_39) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  hlds__make_hlds__add_pragma__add_pragma_tabling__create_tabling_reset_pred_13_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_17, hlds__make_hlds__add_pragma__add_pragma_tabling__Context_19, hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_20, hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_21, hlds__make_hlds__add_pragma__add_pragma_tabling__PredStatus_24, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_89_89, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_49, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_90_90, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_51, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_91_91, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_53, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_92_92, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_55);
                }
                break;
              case (MR_Integer) 1:
                {
                  *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_49 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_89_89;
                  *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_51 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_90_90;
                  *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_53 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_91_91;
                  *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_55 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_92_92;
                }
                break;
            }
          }
      }
    else
      {
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_161_161;
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_162_162;
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_166_166;
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_181;
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_182;
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_183;
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_184;

        {
          hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_181 = parse_tree__prog_out__eval_method_to_string_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_22);
        }
        {
          hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded = parse_tree__prog_data____Unify____eval_method_0_0(hlds__make_hlds__add_pragma__add_pragma_tabling__OldEvalMethod_29, hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_22);
        }
        if (hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded)
          {
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_125_125;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_126_126;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_127_127;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_130_130;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_131_131;

            {
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_126_126 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_126_126, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_126_126, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_20));
            }
            {
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_131_131 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pragma__add_pragma_tabling__V_131_131, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_181));
            }
            {
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_130_130, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_131_131));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_130_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[37])));
            }
            {
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_127_127, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[55])));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_127_127, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_130_130));
            }
            {
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_125_125, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_126_126));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_125_125, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_127_127));
            }
            {
              hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_182, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[51])));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_182, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_125_125));
            }
          }
        else
          {
            MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__OldEvalMethodStr_47;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_140_140;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_141_141;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_142_142;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_145_145;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_146_146;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_147_147;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_150_150;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_151_151;

            {
              hlds__make_hlds__add_pragma__add_pragma_tabling__OldEvalMethodStr_47 = parse_tree__prog_out__eval_method_to_string_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__OldEvalMethod_29);
            }
            {
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_141_141 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_141_141, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_141_141, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_20));
            }
            {
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_146_146 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pragma__add_pragma_tabling__V_146_146, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__OldEvalMethodStr_47));
            }
            {
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_151_151 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pragma__add_pragma_tabling__V_151_151, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_181));
            }
            {
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_150_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_150_150, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_151_151));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_150_150, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[40])));
            }
            {
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_147_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_147_147, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[57])));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_147_147, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_150_150));
            }
            {
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_145_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_145_145, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_146_146));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_145_145, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_147_147));
            }
            {
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_142_142, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[56])));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_142_142, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_145_145));
            }
            {
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_140_140, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_141_141));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_140_140, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_142_142));
            }
            {
              hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_182, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[51])));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_182, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_140_140));
            }
          }
        {
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_162_162 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_162_162, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_182));
        }
        {
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_161_161, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_162_162));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_161_161, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_183 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_183, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Context_19));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_183, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_161_161));
        }
        {
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_166_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_166_166, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_183));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_166_166, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_184 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_184, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_184, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_184, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_166_166));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_55 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_184));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_54));
        }
        *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_53 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0_52;
        *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_51 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_50;
        *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_49 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_0_48;
      }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__set_eval_method_create_aux_preds_list_15_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Context_2,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_3,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_4,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_5,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeAttributes_6,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredStatus_7,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_0_8,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_9,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_10,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_11,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0_12,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_13,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_14,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_15)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded;

        if ((hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_15 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_14;
            *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_13 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0_12;
            *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_11 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_10;
            *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_9 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_0_8;
          }
        else
          {
            MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_34;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ProcInfo0_35;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Rest_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_56_56;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_57_57;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_58_58;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_59_59;

            hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_55_55, (MR_Integer) 0)));
            hlds__make_hlds__add_pragma__add_pragma_tabling__ProcInfo0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_55_55, (MR_Integer) 1)));
            {
              hlds__make_hlds__add_pragma__add_pragma_tabling__set_eval_method_create_aux_preds_16_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_34, hlds__make_hlds__add_pragma__add_pragma_tabling__ProcInfo0_35, hlds__make_hlds__add_pragma__add_pragma_tabling__Context_2, hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_3, hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_4, hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_5, hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeAttributes_6, hlds__make_hlds__add_pragma__add_pragma_tabling__PredStatus_7, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_0_8, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_56_56, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_10, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_57_57, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0_12, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_58_58, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_14, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_59_59);
            }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1__tmp_copy_1 = hlds__make_hlds__add_pragma__add_pragma_tabling__Rest_36;
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_0__tmp_copy_8 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_56_56;
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0__tmp_copy_10 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_57_57;
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0__tmp_copy_12 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_58_58;
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0__tmp_copy_14 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_59_59;

              hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_14 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0__tmp_copy_14;
              hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0_12 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0__tmp_copy_12;
              hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_10 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0__tmp_copy_10;
              hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_0_8 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_0__tmp_copy_8;
              hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1 = hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__module_add_pragma_tabled_for_pred_15_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod0_16,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredName_17,
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__Arity0_18,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MaybePredOrFunc_19,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeModes_20,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeAttributes_21,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Context_22,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredStatus_23,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredId_24,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_65,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_66,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0_67,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_68,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_69,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_70)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_244_244;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Globals_28;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_31;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredicateTable_32;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Preds_33;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredInfo0_34;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredOrFunc_36;
    MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_37;
    MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_38;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__VeryVerbose_39;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Markers_41;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_42;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_134_134;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_29_29;
    MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling__conv0_PredInfo0_34;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__WarnTableWithInline_43;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_86_86;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_65, &hlds__make_hlds__add_pragma__add_pragma_tabling__Globals_28);
    }
    hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod0_16)) == (MR_mktag((MR_Integer) 2)));
    if (hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded)
      {
        hlds__make_hlds__add_pragma__add_pragma_tabling__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod0_16, (MR_Integer) 0)));
        {
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__OwnStacks_30;

          {
            libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__Globals_28, (MR_Integer) 221, &hlds__make_hlds__add_pragma__add_pragma_tabling__OwnStacks_30);
          }
          switch (hlds__make_hlds__add_pragma__add_pragma_tabling__OwnStacks_30) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_31 = (MR_Word) MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_3[0]);
              }
              break;
            case (MR_Integer) 1:
              {
                hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_31 = (MR_Word) MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_3[1]);
              }
              break;
          }
        }
      }
    else
      hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_31 = hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod0_16;
    {
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_65, &hlds__make_hlds__add_pragma__add_pragma_tabling__PredicateTable_32);
    }
    {
      hlds__pred_table__predicate_table_get_preds_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__PredicateTable_32, &hlds__make_hlds__add_pragma__add_pragma_tabling__Preds_33);
    }
    hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_244_244 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
    {
      mercury__map__lookup_3_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_244_244, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, hlds__make_hlds__add_pragma__add_pragma_tabling__Preds_33, ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__PredId_24)), &hlds__make_hlds__add_pragma__add_pragma_tabling__conv0_PredInfo0_34);
    }
    hlds__make_hlds__add_pragma__add_pragma_tabling__PredInfo0_34 = ((MR_Word) hlds__make_hlds__add_pragma__add_pragma_tabling__conv0_PredInfo0_34);
    if ((hlds__make_hlds__add_pragma__add_pragma_tabling__MaybePredOrFunc_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        hlds__make_hlds__add_pragma__add_pragma_tabling__PredOrFunc_36 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__PredInfo0_34);
      }
    else
      hlds__make_hlds__add_pragma__add_pragma_tabling__PredOrFunc_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__MaybePredOrFunc_19, (MR_Integer) 0)));
    {
      parse_tree__prog_util__adjust_func_arity_3_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__PredOrFunc_36, hlds__make_hlds__add_pragma__add_pragma_tabling__Arity0_18, &hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_37);
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_38 = parse_tree__prog_out__eval_method_to_string_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_31);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__Globals_28, (MR_Integer) 48, &hlds__make_hlds__add_pragma__add_pragma_tabling__VeryVerbose_39);
    }
    switch (hlds__make_hlds__add_pragma__add_pragma_tabling__VeryVerbose_39) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_81_81;

          {
            mercury__io__write_string_3_p_0((MR_String) "% Processing \140:- pragma ");
          }
          {
            mercury__io__write_string_3_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_38);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "\' for ");
          }
          {
            hlds__make_hlds__add_pragma__add_pragma_tabling__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_81_81, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__PredName_17));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_81_81, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_37));
          }
          {
            parse_tree__prog_out__write_simple_call_id_4_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__PredOrFunc_36, hlds__make_hlds__add_pragma__add_pragma_tabling__V_81_81);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "...\n");
          }
        }
        break;
    }
    {
      hlds__hlds_pred__pred_info_get_markers_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__PredInfo0_34, &hlds__make_hlds__add_pragma__add_pragma_tabling__Markers_41);
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_42, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__PredOrFunc_36));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_42, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__PredName_17));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_42, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_37));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded = hlds__hlds_pred__check_marker_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__Markers_41, (MR_Integer) 6);
    }
    if (hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded)
      {
        hlds__make_hlds__add_pragma__add_pragma_tabling__V_86_86 = (MR_Integer) 32;
        {
          libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__Globals_28, hlds__make_hlds__add_pragma__add_pragma_tabling__V_86_86, &hlds__make_hlds__add_pragma__add_pragma_tabling__WarnTableWithInline_43);
        }
        hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded = (hlds__make_hlds__add_pragma__add_pragma_tabling__WarnTableWithInline_43 == (MR_Integer) 1);
      }
    if (hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded)
      {
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__InlineWarningPieces_44;
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__InlineWarningMsg_45;
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__InlineWarningSpec_46;
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_89_89;
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_90_90;
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_91_91;
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_94_94;
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_95_95;
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_127_127;
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_128_128;
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_132_132;

        {
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_90_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_90_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_90_90, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_42));
        }
        {
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_95_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_95_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_95_95, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_38));
        }
        {
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_94_94, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_95_95));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_94_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[28])));
        }
        {
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_91_91, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[47])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_91_91, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_94_94));
        }
        {
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_89_89, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_90_90));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_89_89, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_91_91));
        }
        {
          hlds__make_hlds__add_pragma__add_pragma_tabling__InlineWarningPieces_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__InlineWarningPieces_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[46])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__InlineWarningPieces_44, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_89_89));
        }
        {
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_128_128 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_128_128, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__InlineWarningPieces_44));
        }
        {
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_127_127, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_128_128));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_127_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_pragma__add_pragma_tabling__InlineWarningMsg_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__InlineWarningMsg_45, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Context_22));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__InlineWarningMsg_45, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_127_127));
        }
        {
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_132_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_132_132, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__InlineWarningMsg_45));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_132_132, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_pragma__add_pragma_tabling__InlineWarningSpec_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__InlineWarningSpec_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__InlineWarningSpec_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__InlineWarningSpec_46, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_132_132));
        }
        {
          hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_134_134, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__InlineWarningSpec_46));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_134_134, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_69));
        }
      }
    else
      hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_134_134 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_69;
    {
      hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__PredInfo0_34);
    }
    if (hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded)
      {
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_47;
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_48;
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_49;
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_137_137;
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_138_138;
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_139_139;
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_142_142;
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_143_143;
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_150_150;
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_151_151;
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_155_155;

        {
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_138_138 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_138_138, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_138_138, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_38));
        }
        {
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_143_143 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_143_143, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_143_143, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_42));
        }
        {
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_142_142, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_143_143));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_142_142, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[30])));
        }
        {
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_139_139, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[49])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_139_139, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_142_142));
        }
        {
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_137_137, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_138_138));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_137_137, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_139_139));
        }
        {
          hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[48])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_47, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_137_137));
        }
        {
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_151_151 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_151_151, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_47));
        }
        {
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_150_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_150_150, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_151_151));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_150_150, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_48, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Context_22));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_48, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_150_150));
        }
        {
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_155_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_155_155, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_48));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_155_155, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_49, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_155_155));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_70 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_49));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_134_134));
        }
        *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_68 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0_67;
        *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_66 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_65;
      }
    else
      {
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_247_247;
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__NeedsStrat_50;
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ProcTable0_53;
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ExistingProcs_54;
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_158_158;

        {
          hlds__make_hlds__add_pragma__add_pragma_tabling__NeedsStrat_50 = hlds__hlds_pred__eval_method_needs_stratification_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_31);
        }
        switch (hlds__make_hlds__add_pragma__add_pragma_tabling__NeedsStrat_50) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_158_158 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_65;
            break;
          case (MR_Integer) 1:
            {
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__StratPredIds0_51;
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__StratPredIds_52;

              {
                hlds__hlds_module__module_info_get_must_be_stratified_preds_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_65, &hlds__make_hlds__add_pragma__add_pragma_tabling__StratPredIds0_51);
              }
              {
                mercury__set__insert_3_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_244_244, ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__PredId_24)), hlds__make_hlds__add_pragma__add_pragma_tabling__StratPredIds0_51, &hlds__make_hlds__add_pragma__add_pragma_tabling__StratPredIds_52);
              }
              {
                hlds__hlds_module__module_info_set_must_be_stratified_preds_3_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__StratPredIds_52, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_65, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_158_158);
              }
            }
            break;
        }
        {
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__PredInfo0_34, &hlds__make_hlds__add_pragma__add_pragma_tabling__ProcTable0_53);
        }
        hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_247_247 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
        {
          mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_247_247, hlds__make_hlds__add_pragma__add_pragma_tabling__ProcTable0_53, &hlds__make_hlds__add_pragma__add_pragma_tabling__ExistingProcs_54);
        }
        if ((hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeModes_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((hlds__make_hlds__add_pragma__add_pragma_tabling__ExistingProcs_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_165_165;
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_166_166;
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_167_167;
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_170_170;
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_171_171;
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_178_178;
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_179_179;
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_183_183;
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_223;
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_224;
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_225;

              {
                hlds__make_hlds__add_pragma__add_pragma_tabling__V_166_166 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_166_166, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_166_166, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_38));
              }
              {
                hlds__make_hlds__add_pragma__add_pragma_tabling__V_171_171 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_171_171, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_171_171, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_42));
              }
              {
                hlds__make_hlds__add_pragma__add_pragma_tabling__V_170_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_170_170, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_171_171));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_170_170, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[32])));
              }
              {
                hlds__make_hlds__add_pragma__add_pragma_tabling__V_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_167_167, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[50])));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_167_167, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_170_170));
              }
              {
                hlds__make_hlds__add_pragma__add_pragma_tabling__V_165_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_165_165, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_166_166));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_165_165, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_167_167));
              }
              {
                hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_223 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_223, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[48])));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_223, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_165_165));
              }
              {
                hlds__make_hlds__add_pragma__add_pragma_tabling__V_179_179 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_179_179, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_223));
              }
              {
                hlds__make_hlds__add_pragma__add_pragma_tabling__V_178_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_178_178, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_179_179));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_178_178, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_224 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_224, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Context_22));
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_224, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_178_178));
              }
              {
                hlds__make_hlds__add_pragma__add_pragma_tabling__V_183_183 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_183_183, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_224));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_183_183, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_225 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_225, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_225, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_225, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_183_183));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_70 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_225));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_134_134));
              }
              *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_66 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_158_158;
              *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_68 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0_67;
            }
          else
            {
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ExistingProcsTail_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__ExistingProcs_54, (MR_Integer) 1)));
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_62;
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_159_159;
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ProcTable_226;
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredInfo_227;
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__ExistingProcs_54, (MR_Integer) 0)));

              if ((hlds__make_hlds__add_pragma__add_pragma_tabling__ExistingProcsTail_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_62 = (MR_Integer) 1;
              else
                hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_62 = (MR_Integer) 0;
              {
                hlds__make_hlds__add_pragma__add_pragma_tabling__set_eval_method_create_aux_preds_list_15_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ExistingProcs_54, hlds__make_hlds__add_pragma__add_pragma_tabling__Context_22, hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_42, hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_62, hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_31, hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeAttributes_21, hlds__make_hlds__add_pragma__add_pragma_tabling__PredStatus_23, hlds__make_hlds__add_pragma__add_pragma_tabling__ProcTable0_53, &hlds__make_hlds__add_pragma__add_pragma_tabling__ProcTable_226, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_158_158, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_159_159, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0_67, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_68, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_134_134, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_70);
              }
              {
                hlds__hlds_pred__pred_info_set_proc_table_3_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ProcTable_226, hlds__make_hlds__add_pragma__add_pragma_tabling__PredInfo0_34, &hlds__make_hlds__add_pragma__add_pragma_tabling__PredInfo_227);
              }
              {
                hlds__hlds_module__module_info_set_pred_info_4_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__PredId_24, hlds__make_hlds__add_pragma__add_pragma_tabling__PredInfo_227, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_159_159, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_66);
              }
            }
        else
          {
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Modes_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeModes_20, (MR_Integer) 0)));
            MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_56;

            {
              hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded = hlds__hlds_code_util__get_procedure_matching_argmodes_4_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ExistingProcs_54, hlds__make_hlds__add_pragma__add_pragma_tabling__Modes_55, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_158_158, &hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_56);
            }
            if (hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded)
              {
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ProcInfo0_57;
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ProcTable_58;
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredInfo_59;
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_187_187;
                MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling__conv1_ProcInfo0_57;

                {
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_247_247, hlds__make_hlds__add_pragma__add_pragma_tabling__ProcTable0_53, hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_56, &hlds__make_hlds__add_pragma__add_pragma_tabling__conv1_ProcInfo0_57);
                }
                hlds__make_hlds__add_pragma__add_pragma_tabling__ProcInfo0_57 = ((MR_Word) hlds__make_hlds__add_pragma__add_pragma_tabling__conv1_ProcInfo0_57);
                {
                  hlds__make_hlds__add_pragma__add_pragma_tabling__set_eval_method_create_aux_preds_16_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_56, hlds__make_hlds__add_pragma__add_pragma_tabling__ProcInfo0_57, hlds__make_hlds__add_pragma__add_pragma_tabling__Context_22, hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_42, (MR_Integer) 1, hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_31, hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeAttributes_21, hlds__make_hlds__add_pragma__add_pragma_tabling__PredStatus_23, hlds__make_hlds__add_pragma__add_pragma_tabling__ProcTable0_53, &hlds__make_hlds__add_pragma__add_pragma_tabling__ProcTable_58, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_158_158, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_187_187, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0_67, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_68, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_134_134, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_70);
                }
                {
                  hlds__hlds_pred__pred_info_set_proc_table_3_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ProcTable_58, hlds__make_hlds__add_pragma__add_pragma_tabling__PredInfo0_34, &hlds__make_hlds__add_pragma__add_pragma_tabling__PredInfo_59);
                }
                {
                  hlds__hlds_module__module_info_set_pred_info_4_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__PredId_24, hlds__make_hlds__add_pragma__add_pragma_tabling__PredInfo_59, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_187_187, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_66);
                }
              }
            else
              {
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_193_193;
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_194_194;
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_195_195;
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_198_198;
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_199_199;
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_206_206;
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_207_207;
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_211_211;
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_214;
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_215;
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_216;

                {
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_194_194 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_194_194, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_194_194, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_38));
                }
                {
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_199_199 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_199_199, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_199_199, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_42));
                }
                {
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_198_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_198_198, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_199_199));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_198_198, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[30])));
                }
                {
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_195_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_195_195, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[52])));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_195_195, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_198_198));
                }
                {
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_193_193 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_193_193, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_194_194));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_193_193, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_195_195));
                }
                {
                  hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_214 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_214, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[51])));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_214, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_193_193));
                }
                {
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_207_207 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_207_207, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_214));
                }
                {
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_206_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_206_206, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_207_207));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_206_206, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_215 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_215, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Context_22));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_215, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_206_206));
                }
                {
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_211_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_211_211, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_215));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_211_211, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_216 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_216, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_216, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_216, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_211_211));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_70 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_216));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_134_134));
                }
                *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_68 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0_67;
                *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_66 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_158_158;
              }
          }
      }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__module_add_pragma_tabled_9_p_0_1(
  MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling__wrapper_arg_2,
  MR_Box * hlds__make_hlds__add_pragma__add_pragma_tabling__wrapper_arg_3,
  MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling__wrapper_arg_4,
  MR_Box * hlds__make_hlds__add_pragma__add_pragma_tabling__wrapper_arg_5,
  MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling__wrapper_arg_6,
  MR_Box * hlds__make_hlds__add_pragma__add_pragma_tabling__wrapper_arg_7)
{
  {
    MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling__closure = hlds__make_hlds__add_pragma__add_pragma_tabling__closure_arg;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__conv2_STATE_VARIABLE_ModuleInfo_66;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__conv1_STATE_VARIABLE_QualInfo_68;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__conv0_STATE_VARIABLE_Specs_70;

    {
      hlds__make_hlds__add_pragma__add_pragma_tabling__module_add_pragma_tabled_for_pred_15_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__closure, (MR_Integer) 9))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__closure, (MR_Integer) 10))), ((MR_Word) hlds__make_hlds__add_pragma__add_pragma_tabling__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_pragma__add_pragma_tabling__wrapper_arg_2), &hlds__make_hlds__add_pragma__add_pragma_tabling__conv2_STATE_VARIABLE_ModuleInfo_66, ((MR_Word) hlds__make_hlds__add_pragma__add_pragma_tabling__wrapper_arg_4), &hlds__make_hlds__add_pragma__add_pragma_tabling__conv1_STATE_VARIABLE_QualInfo_68, ((MR_Word) hlds__make_hlds__add_pragma__add_pragma_tabling__wrapper_arg_6), &hlds__make_hlds__add_pragma__add_pragma_tabling__conv0_STATE_VARIABLE_Specs_70);
    }
    *hlds__make_hlds__add_pragma__add_pragma_tabling__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__conv2_STATE_VARIABLE_ModuleInfo_66));
    *hlds__make_hlds__add_pragma__add_pragma_tabling__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__conv1_STATE_VARIABLE_QualInfo_68));
    *hlds__make_hlds__add_pragma__add_pragma_tabling__wrapper_arg_7 = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__conv0_STATE_VARIABLE_Specs_70));
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__module_add_pragma_tabled_9_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__TabledInfo_10,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Context_11,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Status_12,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_49,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_50,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0_51,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_52,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_53,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_54)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__TabledInfo_10, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredNameArityMPF_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__TabledInfo_10, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeModes_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__TabledInfo_10, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeAttributes_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__TabledInfo_10, (MR_Integer) 3)));
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__PredNameArityMPF_17, (MR_Integer) 0)));
    MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__PredNameArityMPF_17, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MaybePredOrFunc_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__PredNameArityMPF_17, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredicateTable0_23;
    MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_24;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds_31;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_73_73;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_76_76;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_134_134;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_136_136;
    MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling__conv5_STATE_VARIABLE_ModuleInfo_50;
    MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling__conv4_STATE_VARIABLE_QualInfo_52;
    MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling__conv3_STATE_VARIABLE_Specs_54;

    {
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_49, &hlds__make_hlds__add_pragma__add_pragma_tabling__PredicateTable0_23);
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_24 = parse_tree__prog_out__eval_method_to_string_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_16);
    }
    if ((hlds__make_hlds__add_pragma__add_pragma_tabling__MaybePredOrFunc_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds0_146;

        {
          hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__PredicateTable0_23, (MR_Integer) 0, hlds__make_hlds__add_pragma__add_pragma_tabling__PredName_20, hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_21, &hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds0_146);
        }
        if ((hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds0_146 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_56_56;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_64_64;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleName_140;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__DescPieces_141;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredId_142;

            {
              hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_49, &hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleName_140);
            }
            {
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_56_56, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_24));
            }
            {
              hlds__make_hlds__add_pragma__add_pragma_tabling__DescPieces_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__DescPieces_141, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_56_56));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__DescPieces_141, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[42])));
            }
            {
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_64_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_64_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_64_64, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__PredName_20));
            }
            {
              hlds__make_hlds__add_pred__preds_add_implicit_report_error_14_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_49, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_73_73, hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleName_140, hlds__make_hlds__add_pragma__add_pragma_tabling__PredName_20, hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_21, (MR_Integer) 0, hlds__make_hlds__add_pragma__add_pragma_tabling__Status_12, (MR_Integer) 0, hlds__make_hlds__add_pragma__add_pragma_tabling__Context_11, hlds__make_hlds__add_pragma__add_pragma_tabling__V_64_64, hlds__make_hlds__add_pragma__add_pragma_tabling__DescPieces_141, &hlds__make_hlds__add_pragma__add_pragma_tabling__PredId_142, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_53, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_76_76);
            }
            {
              hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds_31, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__PredId_142));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
        else
          {
            hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds_31 = hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds0_146;
            hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_73_73 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_49;
            hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_76_76 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_53;
          }
      }
    else
      {
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredOrFunc_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__MaybePredOrFunc_22, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds0_27;

        {
          hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__PredicateTable0_23, (MR_Integer) 0, hlds__make_hlds__add_pragma__add_pragma_tabling__PredOrFunc_26, hlds__make_hlds__add_pragma__add_pragma_tabling__PredName_20, hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_21, &hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds0_27);
        }
        if ((hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds0_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleName_28;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__DescPieces_29;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredId_30;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_68_68;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_75_75;

            {
              hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_49, &hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleName_28);
            }
            {
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_68_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_68_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_68_68, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_24));
            }
            {
              hlds__make_hlds__add_pragma__add_pragma_tabling__DescPieces_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__DescPieces_29, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_68_68));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__DescPieces_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[42])));
            }
            {
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_75_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_75_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_75_75, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__PredName_20));
            }
            {
              hlds__make_hlds__add_pred__preds_add_implicit_report_error_14_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_49, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_73_73, hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleName_28, hlds__make_hlds__add_pragma__add_pragma_tabling__PredName_20, hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_21, hlds__make_hlds__add_pragma__add_pragma_tabling__PredOrFunc_26, hlds__make_hlds__add_pragma__add_pragma_tabling__Status_12, (MR_Integer) 0, hlds__make_hlds__add_pragma__add_pragma_tabling__Context_11, hlds__make_hlds__add_pragma__add_pragma_tabling__V_75_75, hlds__make_hlds__add_pragma__add_pragma_tabling__DescPieces_29, &hlds__make_hlds__add_pragma__add_pragma_tabling__PredId_30, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_53, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_76_76);
            }
            {
              hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds_31, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__PredId_30));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
        else
          {
            hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds_31 = hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds0_27;
            hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_73_73 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_49;
            hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_76_76 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_53;
          }
      }
    if ((hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeAttributes_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_134_134 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_76_76;
    else
      {
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Attributes_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeAttributes_19, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Statistics_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Attributes_36, (MR_Integer) 2)));
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__AllowReset_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Attributes_36, (MR_Integer) 3)));
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds_31, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Attributes_36, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Attributes_36, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds_31, (MR_Integer) 0)));

        if ((hlds__make_hlds__add_pragma__add_pragma_tabling__V_167_167 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_134_134 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_76_76;
        else
          {
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_106_106;

            switch (hlds__make_hlds__add_pragma__add_pragma_tabling__Statistics_37) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_106_106 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_76_76;
                break;
              case (MR_Integer) 0:
                {
                  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__StatsPieces_43;
                  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__StatsMsg_44;
                  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__StatsSpec_45;
                  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_81_81;
                  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_84_84;
                  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_85_85;
                  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_86_86;
                  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_99_99;
                  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_100_100;
                  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_104_104;

                  {
                    hlds__make_hlds__add_pragma__add_pragma_tabling__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_86_86, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__PredName_20));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_86_86, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_21));
                  }
                  {
                    hlds__make_hlds__add_pragma__add_pragma_tabling__V_85_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_85_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_85_85, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_86_86));
                  }
                  {
                    hlds__make_hlds__add_pragma__add_pragma_tabling__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_84_84, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_85_85));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[7])));
                  }
                  {
                    hlds__make_hlds__add_pragma__add_pragma_tabling__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_81_81, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[44])));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_81_81, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_84_84));
                  }
                  {
                    hlds__make_hlds__add_pragma__add_pragma_tabling__StatsPieces_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsPieces_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[43])));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsPieces_43, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_81_81));
                  }
                  {
                    hlds__make_hlds__add_pragma__add_pragma_tabling__V_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_100_100, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__StatsPieces_43));
                  }
                  {
                    hlds__make_hlds__add_pragma__add_pragma_tabling__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_99_99, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_100_100));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    hlds__make_hlds__add_pragma__add_pragma_tabling__StatsMsg_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsMsg_44, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Context_11));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsMsg_44, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_99_99));
                  }
                  {
                    hlds__make_hlds__add_pragma__add_pragma_tabling__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_104_104, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__StatsMsg_44));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_104_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    hlds__make_hlds__add_pragma__add_pragma_tabling__StatsSpec_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsSpec_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsSpec_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsSpec_45, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_104_104));
                  }
                  {
                    hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_106_106, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__StatsSpec_45));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_106_106, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_76_76));
                  }
                }
                break;
            }
            switch (hlds__make_hlds__add_pragma__add_pragma_tabling__AllowReset_38) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ResetPieces_46;
                  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ResetMsg_47;
                  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ResetSpec_48;
                  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_109_109;
                  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_112_112;
                  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_113_113;
                  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_114_114;
                  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_127_127;
                  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_128_128;
                  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_132_132;

                  {
                    hlds__make_hlds__add_pragma__add_pragma_tabling__V_114_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_114_114, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__PredName_20));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_114_114, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_21));
                  }
                  {
                    hlds__make_hlds__add_pragma__add_pragma_tabling__V_113_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_113_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_113_113, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_114_114));
                  }
                  {
                    hlds__make_hlds__add_pragma__add_pragma_tabling__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_112_112, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_113_113));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_112_112, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[10])));
                  }
                  {
                    hlds__make_hlds__add_pragma__add_pragma_tabling__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_109_109, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[44])));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_109_109, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_112_112));
                  }
                  {
                    hlds__make_hlds__add_pragma__add_pragma_tabling__ResetPieces_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__ResetPieces_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[45])));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__ResetPieces_46, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_109_109));
                  }
                  {
                    hlds__make_hlds__add_pragma__add_pragma_tabling__V_128_128 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_128_128, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__ResetPieces_46));
                  }
                  {
                    hlds__make_hlds__add_pragma__add_pragma_tabling__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_127_127, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_128_128));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_127_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    hlds__make_hlds__add_pragma__add_pragma_tabling__ResetMsg_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ResetMsg_47, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Context_11));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ResetMsg_47, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_127_127));
                  }
                  {
                    hlds__make_hlds__add_pragma__add_pragma_tabling__V_132_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_132_132, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__ResetMsg_47));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_132_132, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    hlds__make_hlds__add_pragma__add_pragma_tabling__ResetSpec_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ResetSpec_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ResetSpec_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ResetSpec_48, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_132_132));
                  }
                  {
                    hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_134_134, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__ResetSpec_48));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_134_134, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_106_106));
                  }
                }
                break;
              case (MR_Integer) 1:
                hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_134_134 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_106_106;
                break;
            }
          }
      }
    {
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_136_136 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_136_136, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_136_136, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__module_add_pragma_tabled_9_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_136_136, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_136_136, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_16));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_136_136, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__PredName_20));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_136_136, 5) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_21));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_136_136, 6) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__MaybePredOrFunc_22));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_136_136, 7) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeModes_18));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_136_136, 8) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeAttributes_19));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_136_136, 9) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Context_11));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_136_136, 10) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Status_12));
    }
    {
      mercury__list__foldl3_8_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0, (MR_Word) &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[0], hlds__make_hlds__add_pragma__add_pragma_tabling__V_136_136, hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds_31, ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_73_73)), &hlds__make_hlds__add_pragma__add_pragma_tabling__conv5_STATE_VARIABLE_ModuleInfo_50, ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0_51)), &hlds__make_hlds__add_pragma__add_pragma_tabling__conv4_STATE_VARIABLE_QualInfo_52, ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_134_134)), &hlds__make_hlds__add_pragma__add_pragma_tabling__conv3_STATE_VARIABLE_Specs_54);
    }
    *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_50 = ((MR_Word) hlds__make_hlds__add_pragma__add_pragma_tabling__conv5_STATE_VARIABLE_ModuleInfo_50);
    *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_52 = ((MR_Word) hlds__make_hlds__add_pragma__add_pragma_tabling__conv4_STATE_VARIABLE_QualInfo_52);
    *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_54 = ((MR_Word) hlds__make_hlds__add_pragma__add_pragma_tabling__conv3_STATE_VARIABLE_Specs_54);
  }
}

void mercury__hlds__make_hlds__add_pragma__add_pragma_tabling__init(void)
{
}

void mercury__hlds__make_hlds__add_pragma__add_pragma_tabling__init_type_tables(void)
{
}

void mercury__hlds__make_hlds__add_pragma__add_pragma_tabling__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.make_hlds.add_pragma.add_pragma_tabling. */
