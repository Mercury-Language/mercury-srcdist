/*
** Automatically generated from `add_pragma_tabling.m'
** by the Mercury compiler,
** version rotd-2015-01-28
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
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
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
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.mlds.mih"
#include "ml_backend.mlds_to_c.mih"
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
#include "transform_hlds.term_constr_util.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.add_foreign_proc.mih"
#include "hlds.make_hlds.add_pragma.mih"
#include "hlds.make_hlds.add_pred.mih"
#include "hlds.make_hlds.add_special_pred.mih"
#include "hlds.make_hlds.make_hlds_error.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.make_hlds_warn.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "ll_backend.llds_out.llds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "hlds.make_hlds.add_pragma.add_foreign_enum.mih"
#include "hlds.make_hlds.add_pragma.add_pragma_type_spec.mih"




#line 177 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_tabling__maybe__pti_maybe_1__plain_mdbcomp__prim_data__type_ctor_info_pred_or_func_0;

#line 180 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_tabling__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0;

#line 183 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_tabling__maybe__pti_maybe_1__plain_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0;

#line 186 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_tabling__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_table_attributes_0;

#line 189 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_tabling__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 613 "add_pragma_tabling.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__IntroducedFrom__pred__table_info_c_global_var_name__613__1_2_p_0(
#line 613 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Target_10,
#line 613 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__2_28);

#line 688 "add_pragma_tabling.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__check_pred_args_against_tabling_4_p_0(
#line 688 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1,
#line 688 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleInfo_2,
#line 688 "add_pragma_tabling.m"
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum_3,
#line 688 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__4_4);

#line 646 "add_pragma_tabling.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__check_pred_args_against_tabling_methods_5_p_0(
#line 646 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1,
#line 646 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__2_2,
#line 646 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleInfo_3,
#line 646 "add_pragma_tabling.m"
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum_4,
#line 646 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__5_5);

#line 613 "add_pragma_tabling.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__table_info_c_global_var_name_3_f_0_1(
#line 613 "add_pragma_tabling.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling__closure_arg);

#line 607 "add_pragma_tabling.m"
static MR_String MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__table_info_c_global_var_name_3_f_0(
#line 607 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleInfo_5,
#line 607 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_6,
#line 607 "add_pragma_tabling.m"
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_7);

#line 568 "add_pragma_tabling.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__tabling_reset_pred_name_3_f_0(
#line 568 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_5,
#line 568 "add_pragma_tabling.m"
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_6,
#line 568 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_7);

#line 562 "add_pragma_tabling.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__tabling_stats_pred_name_3_f_0(
#line 562 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_5,
#line 562 "add_pragma_tabling.m"
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_6,
#line 562 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_7);

#line 490 "add_pragma_tabling.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__create_tabling_reset_pred_11_p_0(
#line 490 "add_pragma_tabling.m"
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_12,
#line 490 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Context_13,
#line 490 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_14,
#line 490 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_15,
#line 490 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Status_16,
#line 490 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_0_46,
#line 490 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_47,
#line 490 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_48,
#line 490 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_49,
#line 490 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_50,
#line 490 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_51);

#line 434 "add_pragma_tabling.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__create_tabling_statistics_pred_11_p_0(
#line 434 "add_pragma_tabling.m"
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_12,
#line 434 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Context_13,
#line 434 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_14,
#line 434 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_15,
#line 434 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Status_16,
#line 434 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_0_48,
#line 434 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_49,
#line 434 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_50,
#line 434 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_51,
#line 434 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_52,
#line 434 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_53);

#line 318 "add_pragma_tabling.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__set_eval_method_create_aux_preds_14_p_0(
#line 318 "add_pragma_tabling.m"
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_15,
#line 318 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ProcInfo0_16,
#line 318 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Context_17,
#line 318 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_18,
#line 318 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_19,
#line 318 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_20,
#line 318 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeAttributes_21,
#line 318 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Status_22,
#line 318 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_0_47,
#line 318 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_48,
#line 318 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_49,
#line 318 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_50,
#line 318 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_51,
#line 318 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_52);

#line 299 "add_pragma_tabling.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__set_eval_method_create_aux_preds_list_13_p_0(
#line 299 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1,
#line 299 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Context_2,
#line 299 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_3,
#line 299 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_4,
#line 299 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_5,
#line 299 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeAttributes_6,
#line 299 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Status_7,
#line 299 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_0_8,
#line 299 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_9,
#line 299 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_10,
#line 299 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_11,
#line 299 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_12,
#line 299 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_13);

#line 148 "add_pragma_tabling.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__module_add_pragma_tabled_for_pred_13_p_0(
#line 148 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod0_14,
#line 148 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredName_15,
#line 148 "add_pragma_tabling.m"
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__Arity0_16,
#line 148 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MaybePredOrFunc_17,
#line 148 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeModes_18,
#line 148 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeAttributes_19,
#line 148 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Context_20,
#line 148 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Status_21,
#line 148 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredId_22,
#line 148 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_62,
#line 148 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_63,
#line 148 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_64,
#line 148 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_65);

#line 144 "add_pragma_tabling.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__module_add_pragma_tabled_7_p_0_1(
#line 144 "add_pragma_tabling.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling__closure_arg,
#line 144 "add_pragma_tabling.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling__wrapper_arg_1,
#line 144 "add_pragma_tabling.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling__wrapper_arg_2,
#line 144 "add_pragma_tabling.m"
  MR_Box * hlds__make_hlds__add_pragma__add_pragma_tabling__wrapper_arg_3,
#line 144 "add_pragma_tabling.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling__wrapper_arg_4,
#line 144 "add_pragma_tabling.m"
  MR_Box * hlds__make_hlds__add_pragma__add_pragma_tabling__wrapper_arg_5);


static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[60][2];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_2[8][1];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_3[1][16];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_4[1][5];




static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[60][2] = {
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
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "would have an ambiguous name too."))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[1])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "since the compiler-generated statistics predicate"))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[3])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "option to suppress this warning."))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[1])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_2[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[12])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "You can use the"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[13])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[15])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "since tabled predicates cannot be inlined."))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[16])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "This inline pragma will be ignored"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[18])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[20])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[21])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 12)),
    ((MR_Box) ((MR_String) "inline"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[23])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration but also has a"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[25])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[1])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "with no declared modes."))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[1])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "pragmas specified."))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[1])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Only one kind of tabling pragma may be applied to it."))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[1])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[35])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "which has no declared modes."))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[1])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[38])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: cannot request statistics"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "for the ambiguous name"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: cannot request allow_reset"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Warning: "))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "has a"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: "))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration for imported"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration for undeclared mode of"))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "has duplicate"))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "has both"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error in"))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 58 */
  {
    ((MR_Box) ((MR_String) "too many argument tabling methods specified.")),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 59 */
  {
    ((MR_Box) ((MR_String) "not enough argument tabling methods specified.")),
    ((MR_Box) ((MR_String) ""))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_2[8][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "--no-warn-table-with-inline"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row 6 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[58]))
  },
  /* row 7 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[59]))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_3[1][16] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_eval_method_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_tabling__maybe__pti_maybe_1__plain_mdbcomp__prim_data__type_ctor_info_pred_or_func_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_tabling__maybe__pti_maybe_1__plain_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_tabling__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_table_attributes_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_import_status_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_tabling__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_tabling__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 822 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_tabling__maybe__pti_maybe_1__plain_mdbcomp__prim_data__type_ctor_info_pred_or_func_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0
  }
};

#line 830 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_tabling__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0
  }
};

#line 838 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_tabling__maybe__pti_maybe_1__plain_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__add_pragma__add_pragma_tabling__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0
  }
};

#line 846 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_tabling__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_table_attributes_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_table_attributes_0
  }
};

#line 854 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_tabling__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 613 "add_pragma_tabling.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__IntroducedFrom__pred__table_info_c_global_var_name__613__1_2_p_0(
#line 613 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Target_10,
#line 613 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__2_28)
#line 613 "add_pragma_tabling.m"
{
#line 613 "add_pragma_tabling.m"
  {
#line 613 "add_pragma_tabling.m"
    MR_bool hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded = (hlds__make_hlds__add_pragma__add_pragma_tabling__Target_10 == hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__2_28);

#line 613 "add_pragma_tabling.m"
    return hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded;
#line 613 "add_pragma_tabling.m"
  }
#line 613 "add_pragma_tabling.m"
}

#line 688 "add_pragma_tabling.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__check_pred_args_against_tabling_4_p_0(
#line 688 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1,
#line 688 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleInfo_2,
#line 688 "add_pragma_tabling.m"
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum_3,
#line 688 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__4_4)
#line 688 "add_pragma_tabling.m"
{
#line 691 "add_pragma_tabling.m"
  while (MR_TRUE)
#line 691 "add_pragma_tabling.m"
    {
#line 691 "add_pragma_tabling.m"
      /* tailcall optimized into a loop */
#line 691 "add_pragma_tabling.m"
      {
#line 691 "add_pragma_tabling.m"
        MR_bool hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded;

#line 691 "add_pragma_tabling.m"
        if ((hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 691 "add_pragma_tabling.m"
          *hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 691 "add_pragma_tabling.m"
        else
#line 693 "add_pragma_tabling.m"
          {
#line 693 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Mode_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1, (MR_Integer) 0)));
#line 693 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Modes_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1, (MR_Integer) 1)));

#line 694 "add_pragma_tabling.m"
            {
#line 694 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded = check_hlds__mode_util__mode_is_fully_input_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleInfo_2, hlds__make_hlds__add_pragma__add_pragma_tabling__Mode_7);
            }
#line 697 "add_pragma_tabling.m"
            if (hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded)
#line 695 "add_pragma_tabling.m"
              {
#line 695 "add_pragma_tabling.m"
                MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__V_12_12 = (hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum_3 + (MR_Integer) 1);

#line 695 "add_pragma_tabling.m"
                /* direct tailcall eliminated */
#line 695 "add_pragma_tabling.m"
                {
#line 695 "add_pragma_tabling.m"
                  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1__tmp_copy_1 = hlds__make_hlds__add_pragma__add_pragma_tabling__Modes_8;
#line 695 "add_pragma_tabling.m"
                  MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum__tmp_copy_3 = hlds__make_hlds__add_pragma__add_pragma_tabling__V_12_12;

#line 695 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum_3 = hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum__tmp_copy_3;
#line 695 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1 = hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1__tmp_copy_1;
#line 695 "add_pragma_tabling.m"
                }
#line 695 "add_pragma_tabling.m"
                continue;
#line 695 "add_pragma_tabling.m"
              }
#line 697 "add_pragma_tabling.m"
            else
#line 700 "add_pragma_tabling.m"
              {
#line 697 "add_pragma_tabling.m"
                {
#line 697 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded = check_hlds__mode_util__mode_is_fully_output_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleInfo_2, hlds__make_hlds__add_pragma__add_pragma_tabling__Mode_7);
                }
#line 700 "add_pragma_tabling.m"
                if (hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded)
#line 698 "add_pragma_tabling.m"
                  {
#line 698 "add_pragma_tabling.m"
                    MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__V_14_14 = (hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum_3 + (MR_Integer) 1);

#line 698 "add_pragma_tabling.m"
                    /* direct tailcall eliminated */
#line 698 "add_pragma_tabling.m"
                    {
#line 698 "add_pragma_tabling.m"
                      MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1__tmp_copy_1 = hlds__make_hlds__add_pragma__add_pragma_tabling__Modes_8;
#line 698 "add_pragma_tabling.m"
                      MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum__tmp_copy_3 = hlds__make_hlds__add_pragma__add_pragma_tabling__V_14_14;

#line 698 "add_pragma_tabling.m"
                      hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum_3 = hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum__tmp_copy_3;
#line 698 "add_pragma_tabling.m"
                      hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1 = hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1__tmp_copy_1;
#line 698 "add_pragma_tabling.m"
                    }
#line 698 "add_pragma_tabling.m"
                    continue;
#line 698 "add_pragma_tabling.m"
                  }
#line 700 "add_pragma_tabling.m"
                else
#line 701 "add_pragma_tabling.m"
                  {
#line 701 "add_pragma_tabling.m"
                    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_16_16;
#line 701 "add_pragma_tabling.m"
                    MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_17_17;
#line 701 "add_pragma_tabling.m"
                    MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_19_19;

#line 701 "add_pragma_tabling.m"
                    {
#line 701 "add_pragma_tabling.m"
                      hlds__make_hlds__add_pragma__add_pragma_tabling__V_19_19 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum_3);
                    }
#line 701 "add_pragma_tabling.m"
                    {
#line 701 "add_pragma_tabling.m"
                      hlds__make_hlds__add_pragma__add_pragma_tabling__V_17_17 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", hlds__make_hlds__add_pragma__add_pragma_tabling__V_19_19);
                    }
#line 701 "add_pragma_tabling.m"
                    {
#line 701 "add_pragma_tabling.m"
                      hlds__make_hlds__add_pragma__add_pragma_tabling__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 701 "add_pragma_tabling.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_16_16, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_17_17));
#line 701 "add_pragma_tabling.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_16_16, 1) = ((MR_Box) ((MR_String) "is neither input or output."));
#line 701 "add_pragma_tabling.m"
                    }
#line 701 "add_pragma_tabling.m"
                    {
#line 701 "add_pragma_tabling.m"
                      MR_Word base;
#line 701 "add_pragma_tabling.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 701 "add_pragma_tabling.m"
                      *hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__4_4 = base;
#line 701 "add_pragma_tabling.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_16_16));
#line 701 "add_pragma_tabling.m"
                    }
#line 701 "add_pragma_tabling.m"
                  }
#line 700 "add_pragma_tabling.m"
              }
#line 693 "add_pragma_tabling.m"
          }
#line 691 "add_pragma_tabling.m"
      }
#line 691 "add_pragma_tabling.m"
      break;
#line 691 "add_pragma_tabling.m"
    }
#line 688 "add_pragma_tabling.m"
}

#line 646 "add_pragma_tabling.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__check_pred_args_against_tabling_methods_5_p_0(
#line 646 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1,
#line 646 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__2_2,
#line 646 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleInfo_3,
#line 646 "add_pragma_tabling.m"
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum_4,
#line 646 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__5_5)
#line 646 "add_pragma_tabling.m"
{
#line 650 "add_pragma_tabling.m"
  while (MR_TRUE)
#line 650 "add_pragma_tabling.m"
    {
#line 650 "add_pragma_tabling.m"
      /* tailcall optimized into a loop */
#line 650 "add_pragma_tabling.m"
      {
#line 650 "add_pragma_tabling.m"
        MR_bool hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded;

#line 650 "add_pragma_tabling.m"
        if ((hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 650 "add_pragma_tabling.m"
          if ((hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 650 "add_pragma_tabling.m"
            *hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 650 "add_pragma_tabling.m"
          else
#line 651 "add_pragma_tabling.m"
            {
#line 652 "add_pragma_tabling.m"
              *hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_2[6]);
#line 651 "add_pragma_tabling.m"
            }
#line 650 "add_pragma_tabling.m"
        else
#line 650 "add_pragma_tabling.m"
          {
#line 650 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1, (MR_Integer) 1)));
#line 650 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1, (MR_Integer) 0)));

#line 650 "add_pragma_tabling.m"
            if ((hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 653 "add_pragma_tabling.m"
              {
#line 654 "add_pragma_tabling.m"
                *hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_2[7]);
#line 653 "add_pragma_tabling.m"
              }
#line 650 "add_pragma_tabling.m"
            else
#line 656 "add_pragma_tabling.m"
              {
#line 656 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeArgMethod_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__2_2, (MR_Integer) 0)));
#line 656 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeArgMethods_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__2_2, (MR_Integer) 1)));

#line 659 "add_pragma_tabling.m"
                {
#line 659 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded = check_hlds__mode_util__mode_is_fully_input_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleInfo_3, hlds__make_hlds__add_pragma__add_pragma_tabling__V_67_67);
                }
#line 671 "add_pragma_tabling.m"
                if (hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded)
#line 664 "add_pragma_tabling.m"
                  if ((hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeArgMethod_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 665 "add_pragma_tabling.m"
                    {
#line 665 "add_pragma_tabling.m"
                      MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_33_33;
#line 665 "add_pragma_tabling.m"
                      MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_34_34;
#line 665 "add_pragma_tabling.m"
                      MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_36_36;
#line 665 "add_pragma_tabling.m"
                      MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_37_37;
#line 665 "add_pragma_tabling.m"
                      MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_39_39;
#line 665 "add_pragma_tabling.m"
                      MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_41_41;
#line 665 "add_pragma_tabling.m"
                      MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_42_42;

#line 666 "add_pragma_tabling.m"
                      {
#line 666 "add_pragma_tabling.m"
                        hlds__make_hlds__add_pragma__add_pragma_tabling__V_37_37 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum_4);
                      }
#line 666 "add_pragma_tabling.m"
                      {
#line 666 "add_pragma_tabling.m"
                        hlds__make_hlds__add_pragma__add_pragma_tabling__V_36_36 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__V_37_37, (MR_String) ":");
                      }
#line 666 "add_pragma_tabling.m"
                      {
#line 666 "add_pragma_tabling.m"
                        hlds__make_hlds__add_pragma__add_pragma_tabling__V_34_34 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", hlds__make_hlds__add_pragma__add_pragma_tabling__V_36_36);
                      }
#line 668 "add_pragma_tabling.m"
                      {
#line 668 "add_pragma_tabling.m"
                        hlds__make_hlds__add_pragma__add_pragma_tabling__V_42_42 = parse_tree__prog_out__maybe_arg_tabling_method_to_string_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeArgMethod_26);
                      }
#line 668 "add_pragma_tabling.m"
                      {
#line 668 "add_pragma_tabling.m"
                        hlds__make_hlds__add_pragma__add_pragma_tabling__V_41_41 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__V_42_42, (MR_String) "\' is not compatible with input modes.");
                      }
#line 667 "add_pragma_tabling.m"
                      {
#line 667 "add_pragma_tabling.m"
                        hlds__make_hlds__add_pragma__add_pragma_tabling__V_39_39 = mercury__string__f_43_43_2_f_0((MR_String) "argument tabling method \140", hlds__make_hlds__add_pragma__add_pragma_tabling__V_41_41);
                      }
#line 666 "add_pragma_tabling.m"
                      {
#line 666 "add_pragma_tabling.m"
                        hlds__make_hlds__add_pragma__add_pragma_tabling__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 666 "add_pragma_tabling.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_33_33, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_34_34));
#line 666 "add_pragma_tabling.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_33_33, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_39_39));
#line 666 "add_pragma_tabling.m"
                      }
#line 666 "add_pragma_tabling.m"
                      {
#line 666 "add_pragma_tabling.m"
                        MR_Word base;
#line 666 "add_pragma_tabling.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 666 "add_pragma_tabling.m"
                        *hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__5_5 = base;
#line 666 "add_pragma_tabling.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_33_33));
#line 666 "add_pragma_tabling.m"
                      }
#line 665 "add_pragma_tabling.m"
                    }
#line 664 "add_pragma_tabling.m"
                  else
#line 661 "add_pragma_tabling.m"
                    {
#line 661 "add_pragma_tabling.m"
                      MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__V_44_44 = (hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum_4 + (MR_Integer) 1);

#line 662 "add_pragma_tabling.m"
                      /* direct tailcall eliminated */
#line 662 "add_pragma_tabling.m"
                      {
#line 662 "add_pragma_tabling.m"
                        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1__tmp_copy_1 = hlds__make_hlds__add_pragma__add_pragma_tabling__V_66_66;
#line 662 "add_pragma_tabling.m"
                        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__2__tmp_copy_2 = hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeArgMethods_27;
#line 662 "add_pragma_tabling.m"
                        MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum__tmp_copy_4 = hlds__make_hlds__add_pragma__add_pragma_tabling__V_44_44;

#line 662 "add_pragma_tabling.m"
                        hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum_4 = hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum__tmp_copy_4;
#line 662 "add_pragma_tabling.m"
                        hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__2_2 = hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__2__tmp_copy_2;
#line 662 "add_pragma_tabling.m"
                        hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1 = hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1__tmp_copy_1;
#line 662 "add_pragma_tabling.m"
                      }
#line 662 "add_pragma_tabling.m"
                      continue;
#line 661 "add_pragma_tabling.m"
                    }
#line 671 "add_pragma_tabling.m"
                else
#line 683 "add_pragma_tabling.m"
                  {
#line 671 "add_pragma_tabling.m"
                    {
#line 671 "add_pragma_tabling.m"
                      hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded = check_hlds__mode_util__mode_is_fully_output_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleInfo_3, hlds__make_hlds__add_pragma__add_pragma_tabling__V_67_67);
                    }
#line 683 "add_pragma_tabling.m"
                    if (hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded)
#line 678 "add_pragma_tabling.m"
                      if ((hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeArgMethod_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 679 "add_pragma_tabling.m"
                        {
#line 679 "add_pragma_tabling.m"
                          MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__V_46_46 = (hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum_4 + (MR_Integer) 1);

#line 680 "add_pragma_tabling.m"
                          /* direct tailcall eliminated */
#line 680 "add_pragma_tabling.m"
                          {
#line 680 "add_pragma_tabling.m"
                            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1__tmp_copy_1 = hlds__make_hlds__add_pragma__add_pragma_tabling__V_66_66;
#line 680 "add_pragma_tabling.m"
                            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__2__tmp_copy_2 = hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeArgMethods_27;
#line 680 "add_pragma_tabling.m"
                            MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum__tmp_copy_4 = hlds__make_hlds__add_pragma__add_pragma_tabling__V_46_46;

#line 680 "add_pragma_tabling.m"
                            hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum_4 = hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum__tmp_copy_4;
#line 680 "add_pragma_tabling.m"
                            hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__2_2 = hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__2__tmp_copy_2;
#line 680 "add_pragma_tabling.m"
                            hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1 = hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1__tmp_copy_1;
#line 680 "add_pragma_tabling.m"
                          }
#line 680 "add_pragma_tabling.m"
                          continue;
#line 679 "add_pragma_tabling.m"
                        }
#line 678 "add_pragma_tabling.m"
                      else
#line 673 "add_pragma_tabling.m"
                        {
#line 673 "add_pragma_tabling.m"
                          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_48_48;
#line 673 "add_pragma_tabling.m"
                          MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_49_49;
#line 673 "add_pragma_tabling.m"
                          MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_51_51;
#line 673 "add_pragma_tabling.m"
                          MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_52_52;
#line 673 "add_pragma_tabling.m"
                          MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_54_54;
#line 673 "add_pragma_tabling.m"
                          MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_56_56;
#line 673 "add_pragma_tabling.m"
                          MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_57_57;

#line 674 "add_pragma_tabling.m"
                          {
#line 674 "add_pragma_tabling.m"
                            hlds__make_hlds__add_pragma__add_pragma_tabling__V_52_52 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum_4);
                          }
#line 674 "add_pragma_tabling.m"
                          {
#line 674 "add_pragma_tabling.m"
                            hlds__make_hlds__add_pragma__add_pragma_tabling__V_51_51 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__V_52_52, (MR_String) ":");
                          }
#line 674 "add_pragma_tabling.m"
                          {
#line 674 "add_pragma_tabling.m"
                            hlds__make_hlds__add_pragma__add_pragma_tabling__V_49_49 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", hlds__make_hlds__add_pragma__add_pragma_tabling__V_51_51);
                          }
#line 676 "add_pragma_tabling.m"
                          {
#line 676 "add_pragma_tabling.m"
                            hlds__make_hlds__add_pragma__add_pragma_tabling__V_57_57 = parse_tree__prog_out__maybe_arg_tabling_method_to_string_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeArgMethod_26);
                          }
#line 676 "add_pragma_tabling.m"
                          {
#line 676 "add_pragma_tabling.m"
                            hlds__make_hlds__add_pragma__add_pragma_tabling__V_56_56 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__V_57_57, (MR_String) "\' is not compatible with output modes.");
                          }
#line 675 "add_pragma_tabling.m"
                          {
#line 675 "add_pragma_tabling.m"
                            hlds__make_hlds__add_pragma__add_pragma_tabling__V_54_54 = mercury__string__f_43_43_2_f_0((MR_String) "argument tabling method \140", hlds__make_hlds__add_pragma__add_pragma_tabling__V_56_56);
                          }
#line 674 "add_pragma_tabling.m"
                          {
#line 674 "add_pragma_tabling.m"
                            hlds__make_hlds__add_pragma__add_pragma_tabling__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 674 "add_pragma_tabling.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_48_48, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_49_49));
#line 674 "add_pragma_tabling.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_48_48, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_54_54));
#line 674 "add_pragma_tabling.m"
                          }
#line 674 "add_pragma_tabling.m"
                          {
#line 674 "add_pragma_tabling.m"
                            MR_Word base;
#line 674 "add_pragma_tabling.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 674 "add_pragma_tabling.m"
                            *hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__5_5 = base;
#line 674 "add_pragma_tabling.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_48_48));
#line 674 "add_pragma_tabling.m"
                          }
#line 673 "add_pragma_tabling.m"
                        }
#line 683 "add_pragma_tabling.m"
                    else
#line 684 "add_pragma_tabling.m"
                      {
#line 684 "add_pragma_tabling.m"
                        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_59_59;
#line 684 "add_pragma_tabling.m"
                        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_60_60;
#line 684 "add_pragma_tabling.m"
                        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_62_62;
#line 684 "add_pragma_tabling.m"
                        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_63_63;

#line 684 "add_pragma_tabling.m"
                        {
#line 684 "add_pragma_tabling.m"
                          hlds__make_hlds__add_pragma__add_pragma_tabling__V_63_63 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum_4);
                        }
#line 684 "add_pragma_tabling.m"
                        {
#line 684 "add_pragma_tabling.m"
                          hlds__make_hlds__add_pragma__add_pragma_tabling__V_62_62 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__V_63_63, (MR_String) ":");
                        }
#line 684 "add_pragma_tabling.m"
                        {
#line 684 "add_pragma_tabling.m"
                          hlds__make_hlds__add_pragma__add_pragma_tabling__V_60_60 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", hlds__make_hlds__add_pragma__add_pragma_tabling__V_62_62);
                        }
#line 684 "add_pragma_tabling.m"
                        {
#line 684 "add_pragma_tabling.m"
                          hlds__make_hlds__add_pragma__add_pragma_tabling__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 684 "add_pragma_tabling.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_59_59, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_60_60));
#line 684 "add_pragma_tabling.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_59_59, 1) = ((MR_Box) ((MR_String) "is neither input or output."));
#line 684 "add_pragma_tabling.m"
                        }
#line 684 "add_pragma_tabling.m"
                        {
#line 684 "add_pragma_tabling.m"
                          MR_Word base;
#line 684 "add_pragma_tabling.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 684 "add_pragma_tabling.m"
                          *hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__5_5 = base;
#line 684 "add_pragma_tabling.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_59_59));
#line 684 "add_pragma_tabling.m"
                        }
#line 684 "add_pragma_tabling.m"
                      }
#line 683 "add_pragma_tabling.m"
                  }
#line 656 "add_pragma_tabling.m"
              }
#line 650 "add_pragma_tabling.m"
          }
#line 650 "add_pragma_tabling.m"
      }
#line 650 "add_pragma_tabling.m"
      break;
#line 650 "add_pragma_tabling.m"
    }
#line 646 "add_pragma_tabling.m"
}

#line 613 "add_pragma_tabling.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__table_info_c_global_var_name_3_f_0_1(
#line 613 "add_pragma_tabling.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling__closure_arg)
#line 613 "add_pragma_tabling.m"
{
#line 613 "add_pragma_tabling.m"
  {
#line 613 "add_pragma_tabling.m"
    MR_bool hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded;
#line 613 "add_pragma_tabling.m"
    MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling__closure = hlds__make_hlds__add_pragma__add_pragma_tabling__closure_arg;

#line 613 "add_pragma_tabling.m"
    {
#line 613 "add_pragma_tabling.m"
      return hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded = hlds__make_hlds__add_pragma__add_pragma_tabling__IntroducedFrom__pred__table_info_c_global_var_name__613__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__closure, (MR_Integer) 4))));
    }
#line 613 "add_pragma_tabling.m"
    return hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded;
#line 613 "add_pragma_tabling.m"
  }
#line 613 "add_pragma_tabling.m"
}

#line 607 "add_pragma_tabling.m"
static MR_String MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__table_info_c_global_var_name_3_f_0(
#line 607 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleInfo_5,
#line 607 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_6,
#line 607 "add_pragma_tabling.m"
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_7)
#line 607 "add_pragma_tabling.m"
{
#line 610 "add_pragma_tabling.m"
  {
#line 610 "add_pragma_tabling.m"
    MR_bool hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded;
#line 610 "add_pragma_tabling.m"
    MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__VarName_8;
#line 610 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Globals_9;
#line 610 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Target_10;
#line 610 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HighLevelCode_11;
#line 610 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleName_12;
#line 610 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredOrFunc_13;
#line 610 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredSymName_14;
#line 610 "add_pragma_tabling.m"
    MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_15;
#line 610 "add_pragma_tabling.m"
    MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__PredName_16;
#line 610 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_24_24;

#line 611 "add_pragma_tabling.m"
    {
#line 611 "add_pragma_tabling.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleInfo_5, &hlds__make_hlds__add_pragma__add_pragma_tabling__Globals_9);
    }
#line 612 "add_pragma_tabling.m"
    {
#line 612 "add_pragma_tabling.m"
      libs__globals__get_target_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__Globals_9, &hlds__make_hlds__add_pragma__add_pragma_tabling__Target_10);
    }
#line 613 "add_pragma_tabling.m"
    {
#line 613 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 613 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_24_24, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_4[0]));
#line 613 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_24_24, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__table_info_c_global_var_name_3_f_0_1));
#line 613 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 613 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_24_24, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Target_10));
#line 613 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_24_24, 4) = ((MR_Box) ((MR_Integer) 0));
#line 613 "add_pragma_tabling.m"
    }
#line 613 "add_pragma_tabling.m"
    {
#line 613 "add_pragma_tabling.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__V_24_24, (MR_String) "hlds.make_hlds.add_pragma.add_pragma_tabling", (MR_String) "function \140hlds.make_hlds.add_pragma.add_pragma_tabling.table_info_c_global_var_name\'/3", (MR_String) "memo table statistics and reset are supported only for C");
    }
#line 615 "add_pragma_tabling.m"
    {
#line 615 "add_pragma_tabling.m"
      libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__Globals_9, (MR_Integer) 252, &hlds__make_hlds__add_pragma__add_pragma_tabling__HighLevelCode_11);
    }
#line 616 "add_pragma_tabling.m"
    {
#line 616 "add_pragma_tabling.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleInfo_5, &hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleName_12);
    }
#line 617 "add_pragma_tabling.m"
    hlds__make_hlds__add_pragma__add_pragma_tabling__PredOrFunc_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_6, (MR_Integer) 0)));
#line 617 "add_pragma_tabling.m"
    hlds__make_hlds__add_pragma__add_pragma_tabling__PredSymName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_6, (MR_Integer) 1)));
#line 617 "add_pragma_tabling.m"
    hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_6, (MR_Integer) 2)));
#line 618 "add_pragma_tabling.m"
    {
#line 618 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__PredName_16 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__PredSymName_14);
    }
#line 633 "add_pragma_tabling.m"
    if ((hlds__make_hlds__add_pragma__add_pragma_tabling__HighLevelCode_11 == (MR_Integer) 0))
#line 634 "add_pragma_tabling.m"
      {
#line 634 "add_pragma_tabling.m"
        MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ProcIdInt_22;
#line 634 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ProcLabel_23;

#line 635 "add_pragma_tabling.m"
        {
#line 635 "add_pragma_tabling.m"
          hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_7, &hlds__make_hlds__add_pragma__add_pragma_tabling__ProcIdInt_22);
        }
#line 636 "add_pragma_tabling.m"
        {
#line 636 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__ProcLabel_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 636 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ProcLabel_23, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleName_12));
#line 636 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ProcLabel_23, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__PredOrFunc_13));
#line 636 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ProcLabel_23, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleName_12));
#line 636 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ProcLabel_23, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__PredName_16));
#line 636 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ProcLabel_23, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_15));
#line 636 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ProcLabel_23, 5) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__ProcIdInt_22));
#line 636 "add_pragma_tabling.m"
        }
#line 644 "add_pragma_tabling.m"
        {
#line 644 "add_pragma_tabling.m"
          return hlds__make_hlds__add_pragma__add_pragma_tabling__VarName_8 = ll_backend__rtti_out__tabling_struct_data_addr_string_2_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ProcLabel_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
#line 634 "add_pragma_tabling.m"
      }
#line 633 "add_pragma_tabling.m"
    else
#line 620 "add_pragma_tabling.m"
      {
#line 620 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MLDS_PredLabel_20;
#line 620 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MLDS_ProcLabel_21;
#line 620 "add_pragma_tabling.m"
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_31_31;
#line 620 "add_pragma_tabling.m"
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_32_32;
#line 620 "add_pragma_tabling.m"
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_34_34;

#line 628 "add_pragma_tabling.m"
        {
#line 628 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__MLDS_PredLabel_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 628 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__MLDS_PredLabel_20, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__PredOrFunc_13));
#line 628 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__MLDS_PredLabel_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 628 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__MLDS_PredLabel_20, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__PredName_16));
#line 628 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__MLDS_PredLabel_20, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_15));
#line 628 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__MLDS_PredLabel_20, 4) = ((MR_Box) ((MR_Integer) 0));
#line 628 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__MLDS_PredLabel_20, 5) = ((MR_Box) ((MR_Integer) 0));
#line 628 "add_pragma_tabling.m"
        }
#line 630 "add_pragma_tabling.m"
        {
#line 630 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__MLDS_ProcLabel_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 630 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__MLDS_ProcLabel_21, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__MLDS_PredLabel_20));
#line 630 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__MLDS_ProcLabel_21, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_7));
#line 630 "add_pragma_tabling.m"
        }
#line 631 "add_pragma_tabling.m"
        {
#line 631 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_31_31 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleName_12);
        }
#line 632 "add_pragma_tabling.m"
        {
#line 632 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_34_34 = ml_backend__mlds_to_c__mlds_tabling_data_name_2_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__MLDS_ProcLabel_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
#line 631 "add_pragma_tabling.m"
        {
#line 631 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_32_32 = mercury__string__f_43_43_2_f_0((MR_String) "__", hlds__make_hlds__add_pragma__add_pragma_tabling__V_34_34);
        }
#line 631 "add_pragma_tabling.m"
        {
#line 631 "add_pragma_tabling.m"
          return hlds__make_hlds__add_pragma__add_pragma_tabling__VarName_8 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__V_31_31, hlds__make_hlds__add_pragma__add_pragma_tabling__V_32_32);
        }
#line 620 "add_pragma_tabling.m"
      }
#line 610 "add_pragma_tabling.m"
    return hlds__make_hlds__add_pragma__add_pragma_tabling__VarName_8;
#line 610 "add_pragma_tabling.m"
  }
#line 607 "add_pragma_tabling.m"
}

#line 568 "add_pragma_tabling.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__tabling_reset_pred_name_3_f_0(
#line 568 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_5,
#line 568 "add_pragma_tabling.m"
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_6,
#line 568 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_7)
#line 568 "add_pragma_tabling.m"
{
#line 570 "add_pragma_tabling.m"
  {
#line 570 "add_pragma_tabling.m"
    MR_bool hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded;
#line 570 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__4_4;
#line 570 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PorF_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_5, (MR_Integer) 0)));
#line 570 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SymName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_5, (MR_Integer) 1)));
#line 570 "add_pragma_tabling.m"
    MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__Arity0_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_5, (MR_Integer) 2)));
#line 570 "add_pragma_tabling.m"
    MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_17;
#line 570 "add_pragma_tabling.m"
    MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_28_28;
#line 570 "add_pragma_tabling.m"
    MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_30_30;

#line 580 "add_pragma_tabling.m"
    if ((hlds__make_hlds__add_pragma__add_pragma_tabling__PorF_14 == (MR_Integer) 1))
#line 581 "add_pragma_tabling.m"
      {
#line 582 "add_pragma_tabling.m"
        hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_17 = (hlds__make_hlds__add_pragma__add_pragma_tabling__Arity0_16 - (MR_Integer) 1);
#line 581 "add_pragma_tabling.m"
      }
#line 580 "add_pragma_tabling.m"
    else
#line 579 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_17 = hlds__make_hlds__add_pragma__add_pragma_tabling__Arity0_16;
#line 591 "add_pragma_tabling.m"
    {
#line 591 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_30_30 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_17);
    }
#line 591 "add_pragma_tabling.m"
    {
#line 591 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_28_28 = mercury__string__f_43_43_2_f_0((MR_String) "_", hlds__make_hlds__add_pragma__add_pragma_tabling__V_30_30);
    }
#line 1678 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_pragma_tabling__SymName_15)) == (MR_mktag((MR_Integer) 1))))
#line 1680 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
      {
#line 1682 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__Name_19 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__SymName_15, (MR_Integer) 1)));
#line 1684 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__NewName0_21;
#line 1686 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__NewName_22;
#line 1688 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleNameAgain_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__SymName_15, (MR_Integer) 0)));
#line 1690 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_25_25;
#line 1692 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_27_27;

#line 591 "add_pragma_tabling.m"
        {
#line 591 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_27_27 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__Name_19, hlds__make_hlds__add_pragma__add_pragma_tabling__V_28_28);
        }
#line 591 "add_pragma_tabling.m"
        {
#line 591 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_25_25 = mercury__string__f_43_43_2_f_0((MR_String) "_", hlds__make_hlds__add_pragma__add_pragma_tabling__V_27_27);
        }
#line 591 "add_pragma_tabling.m"
        {
#line 591 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__NewName0_21 = mercury__string__f_43_43_2_f_0((MR_String) "table_reset_for", hlds__make_hlds__add_pragma__add_pragma_tabling__V_25_25);
        }
#line 595 "add_pragma_tabling.m"
        if ((hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_7 == (MR_Integer) 0))
#line 596 "add_pragma_tabling.m"
          {
#line 596 "add_pragma_tabling.m"
            MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_31_31;
#line 596 "add_pragma_tabling.m"
            MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_33_33;
#line 596 "add_pragma_tabling.m"
            MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__V_34_34;

#line 597 "add_pragma_tabling.m"
            {
#line 597 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_34_34 = hlds__hlds_pred__proc_id_to_int_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_6);
            }
#line 597 "add_pragma_tabling.m"
            {
#line 597 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_33_33 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__V_34_34);
            }
#line 597 "add_pragma_tabling.m"
            {
#line 597 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_31_31 = mercury__string__f_43_43_2_f_0((MR_String) "_", hlds__make_hlds__add_pragma__add_pragma_tabling__V_33_33);
            }
#line 597 "add_pragma_tabling.m"
            {
#line 597 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__NewName_22 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__NewName0_21, hlds__make_hlds__add_pragma__add_pragma_tabling__V_31_31);
            }
#line 596 "add_pragma_tabling.m"
          }
#line 595 "add_pragma_tabling.m"
        else
#line 594 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__NewName_22 = hlds__make_hlds__add_pragma__add_pragma_tabling__NewName0_21;
#line 601 "add_pragma_tabling.m"
        {
#line 601 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 601 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__4_4, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleNameAgain_23));
#line 601 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__4_4, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__NewName_22));
#line 601 "add_pragma_tabling.m"
        }
#line 1757 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
      }
#line 1759 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
    else
#line 1761 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
      {
#line 1763 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__Name_44 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__SymName_15, (MR_Integer) 0)));
#line 1765 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__NewName0_46;
#line 1767 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__NewName_47;
#line 1769 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_48_48;
#line 1771 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_49_49;

#line 591 "add_pragma_tabling.m"
        {
#line 591 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_49_49 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__Name_44, hlds__make_hlds__add_pragma__add_pragma_tabling__V_28_28);
        }
#line 591 "add_pragma_tabling.m"
        {
#line 591 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_48_48 = mercury__string__f_43_43_2_f_0((MR_String) "_", hlds__make_hlds__add_pragma__add_pragma_tabling__V_49_49);
        }
#line 591 "add_pragma_tabling.m"
        {
#line 591 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__NewName0_46 = mercury__string__f_43_43_2_f_0((MR_String) "table_reset_for", hlds__make_hlds__add_pragma__add_pragma_tabling__V_48_48);
        }
#line 595 "add_pragma_tabling.m"
        if ((hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_7 == (MR_Integer) 0))
#line 596 "add_pragma_tabling.m"
          {
#line 596 "add_pragma_tabling.m"
            MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_36_36;
#line 596 "add_pragma_tabling.m"
            MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_38_38;
#line 596 "add_pragma_tabling.m"
            MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__V_39_39;

#line 597 "add_pragma_tabling.m"
            {
#line 597 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_39_39 = hlds__hlds_pred__proc_id_to_int_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_6);
            }
#line 597 "add_pragma_tabling.m"
            {
#line 597 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_38_38 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__V_39_39);
            }
#line 597 "add_pragma_tabling.m"
            {
#line 597 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_36_36 = mercury__string__f_43_43_2_f_0((MR_String) "_", hlds__make_hlds__add_pragma__add_pragma_tabling__V_38_38);
            }
#line 597 "add_pragma_tabling.m"
            {
#line 597 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__NewName_47 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__NewName0_46, hlds__make_hlds__add_pragma__add_pragma_tabling__V_36_36);
            }
#line 596 "add_pragma_tabling.m"
          }
#line 595 "add_pragma_tabling.m"
        else
#line 594 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__NewName_47 = hlds__make_hlds__add_pragma__add_pragma_tabling__NewName0_46;
#line 604 "add_pragma_tabling.m"
        {
#line 604 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 604 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__4_4, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__NewName_47));
#line 604 "add_pragma_tabling.m"
        }
#line 1834 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
      }
#line 570 "add_pragma_tabling.m"
    return hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__4_4;
#line 570 "add_pragma_tabling.m"
  }
#line 568 "add_pragma_tabling.m"
}

#line 562 "add_pragma_tabling.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__tabling_stats_pred_name_3_f_0(
#line 562 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_5,
#line 562 "add_pragma_tabling.m"
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_6,
#line 562 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_7)
#line 562 "add_pragma_tabling.m"
{
#line 564 "add_pragma_tabling.m"
  {
#line 564 "add_pragma_tabling.m"
    MR_bool hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded;
#line 564 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__4_4;
#line 564 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PorF_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_5, (MR_Integer) 0)));
#line 564 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SymName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_5, (MR_Integer) 1)));
#line 564 "add_pragma_tabling.m"
    MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__Arity0_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_5, (MR_Integer) 2)));
#line 564 "add_pragma_tabling.m"
    MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_17;
#line 564 "add_pragma_tabling.m"
    MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_28_28;
#line 564 "add_pragma_tabling.m"
    MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_30_30;

#line 580 "add_pragma_tabling.m"
    if ((hlds__make_hlds__add_pragma__add_pragma_tabling__PorF_14 == (MR_Integer) 1))
#line 581 "add_pragma_tabling.m"
      {
#line 582 "add_pragma_tabling.m"
        hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_17 = (hlds__make_hlds__add_pragma__add_pragma_tabling__Arity0_16 - (MR_Integer) 1);
#line 581 "add_pragma_tabling.m"
      }
#line 580 "add_pragma_tabling.m"
    else
#line 579 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_17 = hlds__make_hlds__add_pragma__add_pragma_tabling__Arity0_16;
#line 591 "add_pragma_tabling.m"
    {
#line 591 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_30_30 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_17);
    }
#line 591 "add_pragma_tabling.m"
    {
#line 591 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_28_28 = mercury__string__f_43_43_2_f_0((MR_String) "_", hlds__make_hlds__add_pragma__add_pragma_tabling__V_30_30);
    }
#line 1895 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_pragma_tabling__SymName_15)) == (MR_mktag((MR_Integer) 1))))
#line 1897 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
      {
#line 1899 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__Name_19 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__SymName_15, (MR_Integer) 1)));
#line 1901 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__NewName0_21;
#line 1903 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__NewName_22;
#line 1905 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleNameAgain_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__SymName_15, (MR_Integer) 0)));
#line 1907 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_25_25;
#line 1909 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_27_27;

#line 591 "add_pragma_tabling.m"
        {
#line 591 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_27_27 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__Name_19, hlds__make_hlds__add_pragma__add_pragma_tabling__V_28_28);
        }
#line 591 "add_pragma_tabling.m"
        {
#line 591 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_25_25 = mercury__string__f_43_43_2_f_0((MR_String) "_", hlds__make_hlds__add_pragma__add_pragma_tabling__V_27_27);
        }
#line 591 "add_pragma_tabling.m"
        {
#line 591 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__NewName0_21 = mercury__string__f_43_43_2_f_0((MR_String) "table_statistics_for", hlds__make_hlds__add_pragma__add_pragma_tabling__V_25_25);
        }
#line 595 "add_pragma_tabling.m"
        if ((hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_7 == (MR_Integer) 0))
#line 596 "add_pragma_tabling.m"
          {
#line 596 "add_pragma_tabling.m"
            MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_31_31;
#line 596 "add_pragma_tabling.m"
            MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_33_33;
#line 596 "add_pragma_tabling.m"
            MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__V_34_34;

#line 597 "add_pragma_tabling.m"
            {
#line 597 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_34_34 = hlds__hlds_pred__proc_id_to_int_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_6);
            }
#line 597 "add_pragma_tabling.m"
            {
#line 597 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_33_33 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__V_34_34);
            }
#line 597 "add_pragma_tabling.m"
            {
#line 597 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_31_31 = mercury__string__f_43_43_2_f_0((MR_String) "_", hlds__make_hlds__add_pragma__add_pragma_tabling__V_33_33);
            }
#line 597 "add_pragma_tabling.m"
            {
#line 597 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__NewName_22 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__NewName0_21, hlds__make_hlds__add_pragma__add_pragma_tabling__V_31_31);
            }
#line 596 "add_pragma_tabling.m"
          }
#line 595 "add_pragma_tabling.m"
        else
#line 594 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__NewName_22 = hlds__make_hlds__add_pragma__add_pragma_tabling__NewName0_21;
#line 601 "add_pragma_tabling.m"
        {
#line 601 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 601 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__4_4, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleNameAgain_23));
#line 601 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__4_4, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__NewName_22));
#line 601 "add_pragma_tabling.m"
        }
#line 1974 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
      }
#line 1976 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
    else
#line 1978 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
      {
#line 1980 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__Name_44 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__SymName_15, (MR_Integer) 0)));
#line 1982 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__NewName0_46;
#line 1984 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__NewName_47;
#line 1986 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_48_48;
#line 1988 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_49_49;

#line 591 "add_pragma_tabling.m"
        {
#line 591 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_49_49 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__Name_44, hlds__make_hlds__add_pragma__add_pragma_tabling__V_28_28);
        }
#line 591 "add_pragma_tabling.m"
        {
#line 591 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_48_48 = mercury__string__f_43_43_2_f_0((MR_String) "_", hlds__make_hlds__add_pragma__add_pragma_tabling__V_49_49);
        }
#line 591 "add_pragma_tabling.m"
        {
#line 591 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__NewName0_46 = mercury__string__f_43_43_2_f_0((MR_String) "table_statistics_for", hlds__make_hlds__add_pragma__add_pragma_tabling__V_48_48);
        }
#line 595 "add_pragma_tabling.m"
        if ((hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_7 == (MR_Integer) 0))
#line 596 "add_pragma_tabling.m"
          {
#line 596 "add_pragma_tabling.m"
            MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_36_36;
#line 596 "add_pragma_tabling.m"
            MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_38_38;
#line 596 "add_pragma_tabling.m"
            MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__V_39_39;

#line 597 "add_pragma_tabling.m"
            {
#line 597 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_39_39 = hlds__hlds_pred__proc_id_to_int_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_6);
            }
#line 597 "add_pragma_tabling.m"
            {
#line 597 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_38_38 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__V_39_39);
            }
#line 597 "add_pragma_tabling.m"
            {
#line 597 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_36_36 = mercury__string__f_43_43_2_f_0((MR_String) "_", hlds__make_hlds__add_pragma__add_pragma_tabling__V_38_38);
            }
#line 597 "add_pragma_tabling.m"
            {
#line 597 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__NewName_47 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__NewName0_46, hlds__make_hlds__add_pragma__add_pragma_tabling__V_36_36);
            }
#line 596 "add_pragma_tabling.m"
          }
#line 595 "add_pragma_tabling.m"
        else
#line 594 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__NewName_47 = hlds__make_hlds__add_pragma__add_pragma_tabling__NewName0_46;
#line 604 "add_pragma_tabling.m"
        {
#line 604 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 604 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__4_4, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__NewName_47));
#line 604 "add_pragma_tabling.m"
        }
#line 2051 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
      }
#line 564 "add_pragma_tabling.m"
    return hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__4_4;
#line 564 "add_pragma_tabling.m"
  }
#line 562 "add_pragma_tabling.m"
}

#line 490 "add_pragma_tabling.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__create_tabling_reset_pred_11_p_0(
#line 490 "add_pragma_tabling.m"
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_12,
#line 490 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Context_13,
#line 490 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_14,
#line 490 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_15,
#line 490 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Status_16,
#line 490 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_0_46,
#line 490 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_47,
#line 490 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_48,
#line 490 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_49,
#line 490 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_50,
#line 490 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_51)
#line 490 "add_pragma_tabling.m"
{
#line 496 "add_pragma_tabling.m"
  {
#line 496 "add_pragma_tabling.m"
    MR_bool hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded;
#line 496 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_101_101;
#line 496 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg1_20;
#line 496 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg2_21;
#line 496 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArgs_22;
#line 496 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Origin_23;
#line 496 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__TypeVarSet_24;
#line 496 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__InstVarSet_25;
#line 496 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ResetPredSymName_27;
#line 496 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Markers_29;
#line 496 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ItemStatus0_30;
#line 496 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Globals_34;
#line 496 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__TargetLang_35;
#line 496 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ForeignLang_36;
#line 496 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__IO0_37;
#line 496 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__IO_38;
#line 496 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Arg1_39;
#line 496 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Arg2_40;
#line 496 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__IsTablingSupported_41;
#line 496 "add_pragma_tabling.m"
    MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__ResetCode_43;
#line 496 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ResetImpl_44;
#line 496 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ResetPragmaFCInfo_45;
#line 496 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_52_52;
#line 496 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_53_53;
#line 496 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_54_54;
#line 496 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_55_55;
#line 496 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_56_56;
#line 496 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_65_65;
#line 496 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_66_66;
#line 496 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_68_68;
#line 496 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_70_70;
#line 496 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_72_72;
#line 496 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_74_74;
#line 496 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_76_76;
#line 496 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_78_78;
#line 496 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_80_80;
#line 496 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_82_82;
#line 496 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_84_84;
#line 496 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_87_87;
#line 496 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_90_90;
#line 496 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_92_92;
#line 496 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_93_93;
#line 510 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_31_31;

#line 497 "add_pragma_tabling.m"
    {
#line 497 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_52_52 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
    }
#line 497 "add_pragma_tabling.m"
    {
#line 497 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_53_53 = parse_tree__prog_mode__di_mode_0_f_0();
    }
#line 497 "add_pragma_tabling.m"
    {
#line 497 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg1_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 497 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg1_20, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_52_52));
#line 497 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg1_20, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_53_53));
#line 497 "add_pragma_tabling.m"
    }
#line 498 "add_pragma_tabling.m"
    {
#line 498 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_54_54 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
    }
#line 498 "add_pragma_tabling.m"
    {
#line 498 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_55_55 = parse_tree__prog_mode__uo_mode_0_f_0();
    }
#line 498 "add_pragma_tabling.m"
    {
#line 498 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg2_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 498 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg2_21, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_54_54));
#line 498 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg2_21, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_55_55));
#line 498 "add_pragma_tabling.m"
    }
#line 499 "add_pragma_tabling.m"
    {
#line 499 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 499 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_56_56, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg2_21));
#line 499 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 499 "add_pragma_tabling.m"
    }
#line 499 "add_pragma_tabling.m"
    {
#line 499 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArgs_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 499 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArgs_22, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg1_20));
#line 499 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArgs_22, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_56_56));
#line 499 "add_pragma_tabling.m"
    }
#line 501 "add_pragma_tabling.m"
    {
#line 501 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__Origin_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 501 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__Origin_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 501 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__Origin_23, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_14));
#line 501 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__Origin_23, 2) = ((MR_Box) ((MR_Integer) 1));
#line 501 "add_pragma_tabling.m"
    }
#line 502 "add_pragma_tabling.m"
    {
#line 502 "add_pragma_tabling.m"
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &hlds__make_hlds__add_pragma__add_pragma_tabling__TypeVarSet_24);
    }
#line 503 "add_pragma_tabling.m"
    {
#line 503 "add_pragma_tabling.m"
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &hlds__make_hlds__add_pragma__add_pragma_tabling__InstVarSet_25);
    }
#line 505 "add_pragma_tabling.m"
    {
#line 505 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__ResetPredSymName_27 = hlds__make_hlds__add_pragma__add_pragma_tabling__tabling_reset_pred_name_3_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_14, hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_12, hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_15);
    }
#line 508 "add_pragma_tabling.m"
    {
#line 508 "add_pragma_tabling.m"
      hlds__hlds_pred__init_markers_1_p_0(&hlds__make_hlds__add_pragma__add_pragma_tabling__Markers_29);
    }
#line 509 "add_pragma_tabling.m"
    {
#line 509 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__ItemStatus0_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 509 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ItemStatus0_30, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Status_16));
#line 509 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ItemStatus0_30, 1) = ((MR_Box) ((MR_Integer) 1));
#line 509 "add_pragma_tabling.m"
    }
#line 510 "add_pragma_tabling.m"
    {
#line 510 "add_pragma_tabling.m"
      hlds__make_hlds__add_pred__module_add_pred_or_func_18_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__Origin_23, hlds__make_hlds__add_pragma__add_pragma_tabling__TypeVarSet_24, hlds__make_hlds__add_pragma__add_pragma_tabling__InstVarSet_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, hlds__make_hlds__add_pragma__add_pragma_tabling__ResetPredSymName_27, hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArgs_22, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_2[3]), (MR_Integer) 0, (MR_Word) &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[57], hlds__make_hlds__add_pragma__add_pragma_tabling__Markers_29, hlds__make_hlds__add_pragma__add_pragma_tabling__Context_13, hlds__make_hlds__add_pragma__add_pragma_tabling__ItemStatus0_30, &hlds__make_hlds__add_pragma__add_pragma_tabling__V_31_31, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_48, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_65_65, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_50, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_66_66);
    }
#line 516 "add_pragma_tabling.m"
    {
#line 516 "add_pragma_tabling.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_65_65, &hlds__make_hlds__add_pragma__add_pragma_tabling__Globals_34);
    }
#line 517 "add_pragma_tabling.m"
    {
#line 517 "add_pragma_tabling.m"
      libs__globals__get_target_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__Globals_34, &hlds__make_hlds__add_pragma__add_pragma_tabling__TargetLang_35);
    }
#line 521 "add_pragma_tabling.m"
    if ((hlds__make_hlds__add_pragma__add_pragma_tabling__TargetLang_35 == (MR_Integer) 0))
#line 520 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__ForeignLang_36 = (MR_Integer) 0;
#line 521 "add_pragma_tabling.m"
    else
#line 521 "add_pragma_tabling.m"
      if ((hlds__make_hlds__add_pragma__add_pragma_tabling__TargetLang_35 == (MR_Integer) 2))
#line 526 "add_pragma_tabling.m"
        hlds__make_hlds__add_pragma__add_pragma_tabling__ForeignLang_36 = (MR_Integer) 1;
#line 521 "add_pragma_tabling.m"
      else
#line 521 "add_pragma_tabling.m"
        if ((hlds__make_hlds__add_pragma__add_pragma_tabling__TargetLang_35 == (MR_Integer) 4))
#line 532 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__ForeignLang_36 = (MR_Integer) 4;
#line 521 "add_pragma_tabling.m"
        else
#line 521 "add_pragma_tabling.m"
          if ((hlds__make_hlds__add_pragma__add_pragma_tabling__TargetLang_35 == (MR_Integer) 1))
#line 523 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__ForeignLang_36 = (MR_Integer) 1;
#line 521 "add_pragma_tabling.m"
          else
#line 529 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__ForeignLang_36 = (MR_Integer) 2;
#line 534 "add_pragma_tabling.m"
    {
#line 534 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_68_68 = parse_tree__prog_data__default_attributes_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ForeignLang_36);
    }
#line 535 "add_pragma_tabling.m"
    {
#line 535 "add_pragma_tabling.m"
      parse_tree__prog_data__set_may_call_mercury_3_p_0((MR_Integer) 1, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_68_68, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_70_70);
    }
#line 536 "add_pragma_tabling.m"
    {
#line 536 "add_pragma_tabling.m"
      parse_tree__prog_data__set_thread_safe_3_p_0((MR_Integer) 1, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_70_70, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_72_72);
    }
#line 537 "add_pragma_tabling.m"
    {
#line 537 "add_pragma_tabling.m"
      parse_tree__prog_data__set_purity_3_p_0((MR_Integer) 0, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_72_72, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_74_74);
    }
#line 538 "add_pragma_tabling.m"
    {
#line 538 "add_pragma_tabling.m"
      parse_tree__prog_data__set_may_duplicate_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_2[4]), hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_74_74, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_76_76);
    }
#line 2344 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
    hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_101_101 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 539 "add_pragma_tabling.m"
    {
#line 539 "add_pragma_tabling.m"
      mercury__varset__init_1_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_101_101, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_78_78);
    }
#line 540 "add_pragma_tabling.m"
    {
#line 540 "add_pragma_tabling.m"
      mercury__varset__new_named_var_4_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_101_101, (MR_String) "IO0", &hlds__make_hlds__add_pragma__add_pragma_tabling__IO0_37, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_78_78, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_80_80);
    }
#line 541 "add_pragma_tabling.m"
    {
#line 541 "add_pragma_tabling.m"
      mercury__varset__new_named_var_4_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_101_101, (MR_String) "IO", &hlds__make_hlds__add_pragma__add_pragma_tabling__IO_38, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_80_80, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_82_82);
    }
#line 542 "add_pragma_tabling.m"
    {
#line 542 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_84_84 = parse_tree__prog_mode__di_mode_0_f_0();
    }
#line 542 "add_pragma_tabling.m"
    {
#line 542 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__Arg1_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 542 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg1_39, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__IO0_37));
#line 542 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg1_39, 1) = ((MR_Box) ((MR_String) "_IO0"));
#line 542 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg1_39, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_84_84));
#line 542 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg1_39, 3) = ((MR_Box) ((MR_Integer) 1));
#line 542 "add_pragma_tabling.m"
    }
#line 543 "add_pragma_tabling.m"
    {
#line 543 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_87_87 = parse_tree__prog_mode__uo_mode_0_f_0();
    }
#line 543 "add_pragma_tabling.m"
    {
#line 543 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__Arg2_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 543 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg2_40, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__IO_38));
#line 543 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg2_40, 1) = ((MR_Box) ((MR_String) "_IO"));
#line 543 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg2_40, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_87_87));
#line 543 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg2_40, 3) = ((MR_Box) ((MR_Integer) 1));
#line 543 "add_pragma_tabling.m"
    }
#line 545 "add_pragma_tabling.m"
    {
#line 545 "add_pragma_tabling.m"
      libs__globals__current_grade_supports_tabling_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__Globals_34, &hlds__make_hlds__add_pragma__add_pragma_tabling__IsTablingSupported_41);
    }
#line 551 "add_pragma_tabling.m"
    if ((hlds__make_hlds__add_pragma__add_pragma_tabling__IsTablingSupported_41 == (MR_Integer) 0))
#line 553 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__ResetCode_43 = (MR_String) "";
#line 551 "add_pragma_tabling.m"
    else
#line 547 "add_pragma_tabling.m"
      {
#line 547 "add_pragma_tabling.m"
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__Global_42;

#line 548 "add_pragma_tabling.m"
        {
#line 548 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__Global_42 = hlds__make_hlds__add_pragma__add_pragma_tabling__table_info_c_global_var_name_3_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_65_65, hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_14, hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_12);
        }
#line 550 "add_pragma_tabling.m"
        {
#line 550 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__ResetCode_43 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__Global_42, (MR_String) ".MR_pt_tablenode.MR_integer = 0;");
        }
#line 547 "add_pragma_tabling.m"
      }
#line 555 "add_pragma_tabling.m"
    {
#line 555 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 555 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_90_90, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Context_13));
#line 555 "add_pragma_tabling.m"
    }
#line 555 "add_pragma_tabling.m"
    {
#line 555 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__ResetImpl_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 555 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ResetImpl_44, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__ResetCode_43));
#line 555 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ResetImpl_44, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_90_90));
#line 555 "add_pragma_tabling.m"
    }
#line 557 "add_pragma_tabling.m"
    {
#line 557 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 557 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_93_93, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Arg2_40));
#line 557 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 557 "add_pragma_tabling.m"
    }
#line 557 "add_pragma_tabling.m"
    {
#line 557 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 557 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_92_92, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Arg1_39));
#line 557 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_92_92, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_93_93));
#line 557 "add_pragma_tabling.m"
    }
#line 556 "add_pragma_tabling.m"
    {
#line 556 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__ResetPragmaFCInfo_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 556 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ResetPragmaFCInfo_45, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_76_76));
#line 556 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ResetPragmaFCInfo_45, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__ResetPredSymName_27));
#line 556 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ResetPragmaFCInfo_45, 2) = ((MR_Box) ((MR_Integer) 0));
#line 556 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ResetPragmaFCInfo_45, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_92_92));
#line 556 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ResetPragmaFCInfo_45, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_82_82));
#line 556 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ResetPragmaFCInfo_45, 5) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__InstVarSet_25));
#line 556 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ResetPragmaFCInfo_45, 6) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__ResetImpl_44));
#line 556 "add_pragma_tabling.m"
    }
#line 559 "add_pragma_tabling.m"
    {
#line 559 "add_pragma_tabling.m"
      hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ResetPragmaFCInfo_45, hlds__make_hlds__add_pragma__add_pragma_tabling__Status_16, hlds__make_hlds__add_pragma__add_pragma_tabling__Context_13, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_2[5]), hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_65_65, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_49, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_66_66, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_51);
    }
#line 496 "add_pragma_tabling.m"
    *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_47 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_0_46;
#line 496 "add_pragma_tabling.m"
  }
#line 490 "add_pragma_tabling.m"
}

#line 434 "add_pragma_tabling.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__create_tabling_statistics_pred_11_p_0(
#line 434 "add_pragma_tabling.m"
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_12,
#line 434 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Context_13,
#line 434 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_14,
#line 434 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_15,
#line 434 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Status_16,
#line 434 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_0_48,
#line 434 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_49,
#line 434 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_50,
#line 434 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_51,
#line 434 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_52,
#line 434 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_53)
#line 434 "add_pragma_tabling.m"
{
#line 440 "add_pragma_tabling.m"
  {
#line 440 "add_pragma_tabling.m"
    MR_bool hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded;
#line 440 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_117_117;
#line 440 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__TableBuiltinModule_20;
#line 440 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__StatsTypeName_21;
#line 440 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__StatsType_22;
#line 440 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg1_23;
#line 440 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg2_24;
#line 440 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg3_25;
#line 440 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArgs_26;
#line 440 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Origin_27;
#line 440 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__TypeVarSet_28;
#line 440 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__InstVarSet_29;
#line 440 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__StatsPredSymName_31;
#line 440 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Markers_33;
#line 440 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ItemStatus0_34;
#line 440 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Stats_38;
#line 440 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__IO0_39;
#line 440 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__IO_40;
#line 440 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Arg1_41;
#line 440 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Arg2_42;
#line 440 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Arg3_43;
#line 440 "add_pragma_tabling.m"
    MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__Global_44;
#line 440 "add_pragma_tabling.m"
    MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__StatsCode_45;
#line 440 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__StatsImpl_46;
#line 440 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__StatsPragmaFCInfo_47;
#line 440 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_57_57;
#line 440 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_58_58;
#line 440 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_59_59;
#line 440 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_60_60;
#line 440 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_61_61;
#line 440 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_62_62;
#line 440 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_63_63;
#line 440 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_72_72;
#line 440 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_73_73;
#line 440 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_75_75;
#line 440 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_78_78;
#line 440 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_80_80;
#line 440 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_82_82;
#line 440 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_84_84;
#line 440 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_86_86;
#line 440 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_88_88;
#line 440 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_90_90;
#line 440 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_92_92;
#line 440 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_94_94;
#line 440 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_97_97;
#line 440 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_100_100;
#line 440 "add_pragma_tabling.m"
    MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_103_103;
#line 440 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_105_105;
#line 440 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_107_107;
#line 440 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_108_108;
#line 440 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_109_109;
#line 458 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_35_35;

#line 441 "add_pragma_tabling.m"
    {
#line 441 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__TableBuiltinModule_20 = mdbcomp__builtin_modules__mercury_table_statistics_module_0_f_0();
    }
#line 442 "add_pragma_tabling.m"
    {
#line 442 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__StatsTypeName_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 442 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsTypeName_21, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__TableBuiltinModule_20));
#line 442 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsTypeName_21, 1) = ((MR_Box) ((MR_String) "proc_table_statistics"));
#line 442 "add_pragma_tabling.m"
    }
#line 443 "add_pragma_tabling.m"
    {
#line 443 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__StatsType_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 443 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsType_22, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__StatsTypeName_21));
#line 443 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsType_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 443 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsType_22, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 443 "add_pragma_tabling.m"
    }
#line 444 "add_pragma_tabling.m"
    {
#line 444 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_57_57 = parse_tree__prog_mode__out_mode_0_f_0();
    }
#line 444 "add_pragma_tabling.m"
    {
#line 444 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg1_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 444 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg1_23, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__StatsType_22));
#line 444 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg1_23, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_57_57));
#line 444 "add_pragma_tabling.m"
    }
#line 445 "add_pragma_tabling.m"
    {
#line 445 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_58_58 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
    }
#line 445 "add_pragma_tabling.m"
    {
#line 445 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_59_59 = parse_tree__prog_mode__di_mode_0_f_0();
    }
#line 445 "add_pragma_tabling.m"
    {
#line 445 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg2_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 445 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg2_24, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_58_58));
#line 445 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg2_24, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_59_59));
#line 445 "add_pragma_tabling.m"
    }
#line 446 "add_pragma_tabling.m"
    {
#line 446 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_60_60 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
    }
#line 446 "add_pragma_tabling.m"
    {
#line 446 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_61_61 = parse_tree__prog_mode__uo_mode_0_f_0();
    }
#line 446 "add_pragma_tabling.m"
    {
#line 446 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg3_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 446 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg3_25, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_60_60));
#line 446 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg3_25, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_61_61));
#line 446 "add_pragma_tabling.m"
    }
#line 447 "add_pragma_tabling.m"
    {
#line 447 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 447 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_63_63, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg3_25));
#line 447 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 447 "add_pragma_tabling.m"
    }
#line 447 "add_pragma_tabling.m"
    {
#line 447 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 447 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_62_62, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg2_24));
#line 447 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_62_62, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_63_63));
#line 447 "add_pragma_tabling.m"
    }
#line 447 "add_pragma_tabling.m"
    {
#line 447 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArgs_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 447 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArgs_26, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg1_23));
#line 447 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArgs_26, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_62_62));
#line 447 "add_pragma_tabling.m"
    }
#line 449 "add_pragma_tabling.m"
    {
#line 449 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__Origin_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 449 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__Origin_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 449 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__Origin_27, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_14));
#line 449 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__Origin_27, 2) = ((MR_Box) ((MR_Integer) 0));
#line 449 "add_pragma_tabling.m"
    }
#line 450 "add_pragma_tabling.m"
    {
#line 450 "add_pragma_tabling.m"
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &hlds__make_hlds__add_pragma__add_pragma_tabling__TypeVarSet_28);
    }
#line 451 "add_pragma_tabling.m"
    {
#line 451 "add_pragma_tabling.m"
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &hlds__make_hlds__add_pragma__add_pragma_tabling__InstVarSet_29);
    }
#line 453 "add_pragma_tabling.m"
    {
#line 453 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__StatsPredSymName_31 = hlds__make_hlds__add_pragma__add_pragma_tabling__tabling_stats_pred_name_3_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_14, hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_12, hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_15);
    }
#line 456 "add_pragma_tabling.m"
    {
#line 456 "add_pragma_tabling.m"
      hlds__hlds_pred__init_markers_1_p_0(&hlds__make_hlds__add_pragma__add_pragma_tabling__Markers_33);
    }
#line 457 "add_pragma_tabling.m"
    {
#line 457 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__ItemStatus0_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 457 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ItemStatus0_34, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Status_16));
#line 457 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ItemStatus0_34, 1) = ((MR_Box) ((MR_Integer) 1));
#line 457 "add_pragma_tabling.m"
    }
#line 458 "add_pragma_tabling.m"
    {
#line 458 "add_pragma_tabling.m"
      hlds__make_hlds__add_pred__module_add_pred_or_func_18_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__Origin_27, hlds__make_hlds__add_pragma__add_pragma_tabling__TypeVarSet_28, hlds__make_hlds__add_pragma__add_pragma_tabling__InstVarSet_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, hlds__make_hlds__add_pragma__add_pragma_tabling__StatsPredSymName_31, hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArgs_26, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_2[3]), (MR_Integer) 0, (MR_Word) &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[57], hlds__make_hlds__add_pragma__add_pragma_tabling__Markers_33, hlds__make_hlds__add_pragma__add_pragma_tabling__Context_13, hlds__make_hlds__add_pragma__add_pragma_tabling__ItemStatus0_34, &hlds__make_hlds__add_pragma__add_pragma_tabling__V_35_35, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_50, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_72_72, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_52, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_73_73);
    }
#line 464 "add_pragma_tabling.m"
    {
#line 464 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_75_75 = parse_tree__prog_data__default_attributes_1_f_0((MR_Integer) 0);
    }
#line 468 "add_pragma_tabling.m"
    {
#line 468 "add_pragma_tabling.m"
      parse_tree__prog_data__set_may_call_mercury_3_p_0((MR_Integer) 0, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_75_75, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_78_78);
    }
#line 469 "add_pragma_tabling.m"
    {
#line 469 "add_pragma_tabling.m"
      parse_tree__prog_data__set_thread_safe_3_p_0((MR_Integer) 1, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_78_78, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_80_80);
    }
#line 470 "add_pragma_tabling.m"
    {
#line 470 "add_pragma_tabling.m"
      parse_tree__prog_data__set_purity_3_p_0((MR_Integer) 0, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_80_80, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_82_82);
    }
#line 471 "add_pragma_tabling.m"
    {
#line 471 "add_pragma_tabling.m"
      parse_tree__prog_data__set_may_duplicate_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_2[4]), hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_82_82, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_84_84);
    }
#line 2815 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
    hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_117_117 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 472 "add_pragma_tabling.m"
    {
#line 472 "add_pragma_tabling.m"
      mercury__varset__init_1_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_117_117, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_86_86);
    }
#line 473 "add_pragma_tabling.m"
    {
#line 473 "add_pragma_tabling.m"
      mercury__varset__new_named_var_4_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_117_117, (MR_String) "Stats", &hlds__make_hlds__add_pragma__add_pragma_tabling__Stats_38, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_86_86, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_88_88);
    }
#line 474 "add_pragma_tabling.m"
    {
#line 474 "add_pragma_tabling.m"
      mercury__varset__new_named_var_4_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_117_117, (MR_String) "IO0", &hlds__make_hlds__add_pragma__add_pragma_tabling__IO0_39, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_88_88, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_90_90);
    }
#line 475 "add_pragma_tabling.m"
    {
#line 475 "add_pragma_tabling.m"
      mercury__varset__new_named_var_4_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_117_117, (MR_String) "IO", &hlds__make_hlds__add_pragma__add_pragma_tabling__IO_40, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_90_90, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_92_92);
    }
#line 476 "add_pragma_tabling.m"
    {
#line 476 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_94_94 = parse_tree__prog_mode__out_mode_0_f_0();
    }
#line 476 "add_pragma_tabling.m"
    {
#line 476 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__Arg1_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 476 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg1_41, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Stats_38));
#line 476 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg1_41, 1) = ((MR_Box) ((MR_String) "Stats"));
#line 476 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg1_41, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_94_94));
#line 476 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg1_41, 3) = ((MR_Box) ((MR_Integer) 1));
#line 476 "add_pragma_tabling.m"
    }
#line 477 "add_pragma_tabling.m"
    {
#line 477 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_97_97 = parse_tree__prog_mode__di_mode_0_f_0();
    }
#line 477 "add_pragma_tabling.m"
    {
#line 477 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__Arg2_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 477 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg2_42, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__IO0_39));
#line 477 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg2_42, 1) = ((MR_Box) ((MR_String) "_IO0"));
#line 477 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg2_42, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_97_97));
#line 477 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg2_42, 3) = ((MR_Box) ((MR_Integer) 1));
#line 477 "add_pragma_tabling.m"
    }
#line 478 "add_pragma_tabling.m"
    {
#line 478 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_100_100 = parse_tree__prog_mode__uo_mode_0_f_0();
    }
#line 478 "add_pragma_tabling.m"
    {
#line 478 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__Arg3_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 478 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg3_43, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__IO_40));
#line 478 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg3_43, 1) = ((MR_Box) ((MR_String) "_IO"));
#line 478 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg3_43, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_100_100));
#line 478 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg3_43, 3) = ((MR_Box) ((MR_Integer) 1));
#line 478 "add_pragma_tabling.m"
    }
#line 480 "add_pragma_tabling.m"
    {
#line 480 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__Global_44 = hlds__make_hlds__add_pragma__add_pragma_tabling__table_info_c_global_var_name_3_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_72_72, hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_14, hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_12);
    }
#line 482 "add_pragma_tabling.m"
    {
#line 482 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_103_103 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__Global_44, (MR_String) ", &Stats);");
    }
#line 482 "add_pragma_tabling.m"
    {
#line 482 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__StatsCode_45 = mercury__string__f_43_43_2_f_0((MR_String) "MR_get_tabling_stats(&", hlds__make_hlds__add_pragma__add_pragma_tabling__V_103_103);
    }
#line 483 "add_pragma_tabling.m"
    {
#line 483 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 483 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_105_105, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Context_13));
#line 483 "add_pragma_tabling.m"
    }
#line 483 "add_pragma_tabling.m"
    {
#line 483 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__StatsImpl_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 483 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsImpl_46, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__StatsCode_45));
#line 483 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsImpl_46, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_105_105));
#line 483 "add_pragma_tabling.m"
    }
#line 485 "add_pragma_tabling.m"
    {
#line 485 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 485 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_109_109, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Arg3_43));
#line 485 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_109_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 485 "add_pragma_tabling.m"
    }
#line 485 "add_pragma_tabling.m"
    {
#line 485 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 485 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_108_108, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Arg2_42));
#line 485 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_108_108, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_109_109));
#line 485 "add_pragma_tabling.m"
    }
#line 485 "add_pragma_tabling.m"
    {
#line 485 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 485 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_107_107, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Arg1_41));
#line 485 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_107_107, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_108_108));
#line 485 "add_pragma_tabling.m"
    }
#line 484 "add_pragma_tabling.m"
    {
#line 484 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__StatsPragmaFCInfo_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 484 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsPragmaFCInfo_47, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_84_84));
#line 484 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsPragmaFCInfo_47, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__StatsPredSymName_31));
#line 484 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsPragmaFCInfo_47, 2) = ((MR_Box) ((MR_Integer) 0));
#line 484 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsPragmaFCInfo_47, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_107_107));
#line 484 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsPragmaFCInfo_47, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_92_92));
#line 484 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsPragmaFCInfo_47, 5) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__InstVarSet_29));
#line 484 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsPragmaFCInfo_47, 6) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__StatsImpl_46));
#line 484 "add_pragma_tabling.m"
    }
#line 487 "add_pragma_tabling.m"
    {
#line 487 "add_pragma_tabling.m"
      hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__StatsPragmaFCInfo_47, hlds__make_hlds__add_pragma__add_pragma_tabling__Status_16, hlds__make_hlds__add_pragma__add_pragma_tabling__Context_13, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_2[5]), hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_72_72, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_51, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_73_73, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_53);
    }
#line 440 "add_pragma_tabling.m"
    *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_49 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_0_48;
#line 440 "add_pragma_tabling.m"
  }
#line 434 "add_pragma_tabling.m"
}

#line 318 "add_pragma_tabling.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__set_eval_method_create_aux_preds_14_p_0(
#line 318 "add_pragma_tabling.m"
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_15,
#line 318 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ProcInfo0_16,
#line 318 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Context_17,
#line 318 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_18,
#line 318 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_19,
#line 318 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_20,
#line 318 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeAttributes_21,
#line 318 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Status_22,
#line 318 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_0_47,
#line 318 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_48,
#line 318 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_49,
#line 318 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_50,
#line 318 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_51,
#line 318 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_52)
#line 318 "add_pragma_tabling.m"
{
#line 326 "add_pragma_tabling.m"
  {
#line 326 "add_pragma_tabling.m"
    MR_bool hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded;
#line 326 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__OldEvalMethod_26;

#line 327 "add_pragma_tabling.m"
    {
#line 327 "add_pragma_tabling.m"
      hlds__hlds_pred__proc_info_get_eval_method_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ProcInfo0_16, &hlds__make_hlds__add_pragma__add_pragma_tabling__OldEvalMethod_26);
    }
#line 330 "add_pragma_tabling.m"
    hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded = (hlds__make_hlds__add_pragma__add_pragma_tabling__OldEvalMethod_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 330 "add_pragma_tabling.m"
    hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded = !(hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded);
#line 349 "add_pragma_tabling.m"
    if (hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded)
#line 333 "add_pragma_tabling.m"
      {
#line 333 "add_pragma_tabling.m"
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_27;
#line 333 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_28;
#line 333 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_30;
#line 333 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_31;
#line 333 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_91_91;
#line 333 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_92_92;
#line 333 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_96_96;

#line 333 "add_pragma_tabling.m"
        {
#line 333 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_27 = parse_tree__prog_out__eval_method_to_string_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_20);
        }
#line 334 "add_pragma_tabling.m"
        {
#line 334 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded = parse_tree__prog_data____Unify____eval_method_0_0(hlds__make_hlds__add_pragma__add_pragma_tabling__OldEvalMethod_26, hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_20);
        }
#line 338 "add_pragma_tabling.m"
        if (hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded)
#line 335 "add_pragma_tabling.m"
          {
#line 335 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_55_55;
#line 335 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_56_56;
#line 335 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_57_57;
#line 335 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_60_60;
#line 335 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_61_61;

#line 335 "add_pragma_tabling.m"
            {
#line 335 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 335 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 335 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_56_56, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_18));
#line 335 "add_pragma_tabling.m"
            }
#line 336 "add_pragma_tabling.m"
            {
#line 336 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 336 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_61_61, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_27));
#line 336 "add_pragma_tabling.m"
            }
#line 336 "add_pragma_tabling.m"
            {
#line 336 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 336 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_60_60, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_61_61));
#line 336 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[33])));
#line 336 "add_pragma_tabling.m"
            }
#line 336 "add_pragma_tabling.m"
            {
#line 336 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 336 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_57_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[52])));
#line 336 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_57_57, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_60_60));
#line 336 "add_pragma_tabling.m"
            }
#line 335 "add_pragma_tabling.m"
            {
#line 335 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 335 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_55_55, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_56_56));
#line 335 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_55_55, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_57_57));
#line 335 "add_pragma_tabling.m"
            }
#line 335 "add_pragma_tabling.m"
            {
#line 335 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 335 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[50])));
#line 335 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_28, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_55_55));
#line 335 "add_pragma_tabling.m"
            }
#line 335 "add_pragma_tabling.m"
          }
#line 338 "add_pragma_tabling.m"
        else
#line 339 "add_pragma_tabling.m"
          {
#line 339 "add_pragma_tabling.m"
            MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__OldEvalMethodStr_29;
#line 339 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_70_70;
#line 339 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_71_71;
#line 339 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_72_72;
#line 339 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_75_75;
#line 339 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_76_76;
#line 339 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_77_77;
#line 339 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_80_80;
#line 339 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_81_81;

#line 339 "add_pragma_tabling.m"
            {
#line 339 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__OldEvalMethodStr_29 = parse_tree__prog_out__eval_method_to_string_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__OldEvalMethod_26);
            }
#line 340 "add_pragma_tabling.m"
            {
#line 340 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_71_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 340 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_71_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 340 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_71_71, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_18));
#line 340 "add_pragma_tabling.m"
            }
#line 341 "add_pragma_tabling.m"
            {
#line 341 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 341 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_76_76, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__OldEvalMethodStr_29));
#line 341 "add_pragma_tabling.m"
            }
#line 342 "add_pragma_tabling.m"
            {
#line 342 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 342 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_81_81, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_27));
#line 342 "add_pragma_tabling.m"
            }
#line 342 "add_pragma_tabling.m"
            {
#line 342 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 342 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_80_80, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_81_81));
#line 342 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[36])));
#line 342 "add_pragma_tabling.m"
            }
#line 341 "add_pragma_tabling.m"
            {
#line 341 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 341 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_77_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[54])));
#line 341 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_77_77, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_80_80));
#line 341 "add_pragma_tabling.m"
            }
#line 341 "add_pragma_tabling.m"
            {
#line 341 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 341 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_75_75, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_76_76));
#line 341 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_75_75, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_77_77));
#line 341 "add_pragma_tabling.m"
            }
#line 341 "add_pragma_tabling.m"
            {
#line 341 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 341 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_72_72, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[53])));
#line 341 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_72_72, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_75_75));
#line 341 "add_pragma_tabling.m"
            }
#line 340 "add_pragma_tabling.m"
            {
#line 340 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 340 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_70_70, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_71_71));
#line 340 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_70_70, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_72_72));
#line 340 "add_pragma_tabling.m"
            }
#line 340 "add_pragma_tabling.m"
            {
#line 340 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 340 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[50])));
#line 340 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_28, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_70_70));
#line 340 "add_pragma_tabling.m"
            }
#line 339 "add_pragma_tabling.m"
          }
#line 346 "add_pragma_tabling.m"
        {
#line 346 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 346 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_92_92, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_28));
#line 346 "add_pragma_tabling.m"
        }
#line 346 "add_pragma_tabling.m"
        {
#line 346 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 346 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_91_91, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_92_92));
#line 346 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 346 "add_pragma_tabling.m"
        }
#line 346 "add_pragma_tabling.m"
        {
#line 346 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 346 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_30, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Context_17));
#line 346 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_30, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_91_91));
#line 346 "add_pragma_tabling.m"
        }
#line 347 "add_pragma_tabling.m"
        {
#line 347 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 347 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_96_96, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_30));
#line 347 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 347 "add_pragma_tabling.m"
        }
#line 347 "add_pragma_tabling.m"
        {
#line 347 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 347 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 347 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 347 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_31, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_96_96));
#line 347 "add_pragma_tabling.m"
        }
#line 348 "add_pragma_tabling.m"
        {
#line 348 "add_pragma_tabling.m"
          MR_Word base;
#line 348 "add_pragma_tabling.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 348 "add_pragma_tabling.m"
          *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_52 = base;
#line 348 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_31));
#line 348 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_51));
#line 348 "add_pragma_tabling.m"
        }
#line 333 "add_pragma_tabling.m"
        *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_50 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_49;
#line 333 "add_pragma_tabling.m"
        *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_48 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_0_47;
#line 333 "add_pragma_tabling.m"
      }
#line 349 "add_pragma_tabling.m"
    else
#line 351 "add_pragma_tabling.m"
      {
#line 351 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeDeclaredArgModes_32;

#line 350 "add_pragma_tabling.m"
        {
#line 350 "add_pragma_tabling.m"
          hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ProcInfo0_16, &hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeDeclaredArgModes_32);
        }
#line 361 "add_pragma_tabling.m"
        if ((hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeDeclaredArgModes_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 353 "add_pragma_tabling.m"
          {
#line 353 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_141_141;
#line 353 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_142_142;
#line 353 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_143_143;
#line 353 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_146_146;
#line 353 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_147_147;
#line 353 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_157_157;
#line 353 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_158_158;
#line 353 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_162_162;
#line 353 "add_pragma_tabling.m"
            MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_165;
#line 353 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_166;
#line 353 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_167;
#line 353 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_168;

#line 354 "add_pragma_tabling.m"
            {
#line 354 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_165 = parse_tree__prog_out__eval_method_to_string_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_20);
            }
#line 355 "add_pragma_tabling.m"
            {
#line 355 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_142_142 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 355 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_142_142, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 355 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_142_142, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_165));
#line 355 "add_pragma_tabling.m"
            }
#line 356 "add_pragma_tabling.m"
            {
#line 356 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_147_147 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 356 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_147_147, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 356 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_147_147, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_18));
#line 356 "add_pragma_tabling.m"
            }
#line 356 "add_pragma_tabling.m"
            {
#line 356 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 356 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_146_146, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_147_147));
#line 356 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_146_146, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[39])));
#line 356 "add_pragma_tabling.m"
            }
#line 356 "add_pragma_tabling.m"
            {
#line 356 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 356 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_143_143, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[49])));
#line 356 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_143_143, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_146_146));
#line 356 "add_pragma_tabling.m"
            }
#line 355 "add_pragma_tabling.m"
            {
#line 355 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_141_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 355 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_141_141, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_142_142));
#line 355 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_141_141, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_143_143));
#line 355 "add_pragma_tabling.m"
            }
#line 355 "add_pragma_tabling.m"
            {
#line 355 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 355 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_166, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[50])));
#line 355 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_166, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_141_141));
#line 355 "add_pragma_tabling.m"
            }
#line 358 "add_pragma_tabling.m"
            {
#line 358 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_158_158 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 358 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_158_158, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_166));
#line 358 "add_pragma_tabling.m"
            }
#line 358 "add_pragma_tabling.m"
            {
#line 358 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_157_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 358 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_157_157, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_158_158));
#line 358 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_157_157, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 358 "add_pragma_tabling.m"
            }
#line 358 "add_pragma_tabling.m"
            {
#line 358 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_167 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 358 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_167, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Context_17));
#line 358 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_167, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_157_157));
#line 358 "add_pragma_tabling.m"
            }
#line 359 "add_pragma_tabling.m"
            {
#line 359 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_162_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 359 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_162_162, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_167));
#line 359 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_162_162, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 359 "add_pragma_tabling.m"
            }
#line 359 "add_pragma_tabling.m"
            {
#line 359 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_168 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 359 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_168, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 359 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_168, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 359 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_168, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_162_162));
#line 359 "add_pragma_tabling.m"
            }
#line 360 "add_pragma_tabling.m"
            {
#line 360 "add_pragma_tabling.m"
              MR_Word base;
#line 360 "add_pragma_tabling.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 360 "add_pragma_tabling.m"
              *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_52 = base;
#line 360 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_168));
#line 360 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_51));
#line 360 "add_pragma_tabling.m"
            }
#line 353 "add_pragma_tabling.m"
            *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_48 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_0_47;
#line 353 "add_pragma_tabling.m"
            *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_50 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_49;
#line 353 "add_pragma_tabling.m"
          }
#line 361 "add_pragma_tabling.m"
        else
#line 362 "add_pragma_tabling.m"
          {
#line 362 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__DeclaredArgModes_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeDeclaredArgModes_32, (MR_Integer) 0)));
#line 362 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Statistics_36;
#line 362 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__AllowReset_37;
#line 362 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeError_40;
#line 362 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ProcInfo1_43;
#line 362 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ProcInfo_44;
#line 362 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Globals_45;
#line 362 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ForeignLanguages_46;
#line 362 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_130_130;
#line 362 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_131_131;
#line 362 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_133_133;
#line 362 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_134_134;
#line 362 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_135_135;

#line 3535 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
            if ((hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeAttributes_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3537 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
              {
#line 371 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__Statistics_36 = (MR_Integer) 1;
#line 372 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__AllowReset_37 = (MR_Integer) 1;
#line 382 "add_pragma_tabling.m"
                {
#line 382 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__check_pred_args_against_tabling_4_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__DeclaredArgModes_33, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_49, (MR_Integer) 1, &hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeError_40);
                }
#line 3548 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
              }
#line 3550 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
            else
#line 3552 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
              {
#line 3554 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Attributes_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeAttributes_21, (MR_Integer) 0)));
#line 3556 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Strictness_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Attributes_34, (MR_Integer) 0)));
#line 365 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Attributes_34, (MR_Integer) 1)));

#line 365 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__Statistics_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Attributes_34, (MR_Integer) 2)));
#line 365 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__AllowReset_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Attributes_34, (MR_Integer) 3)));
#line 378 "add_pragma_tabling.m"
                if ((((hlds__make_hlds__add_pragma__add_pragma_tabling__Strictness_204 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))) || ((hlds__make_hlds__add_pragma__add_pragma_tabling__Strictness_204 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))))
#line 381 "add_pragma_tabling.m"
                  {
#line 382 "add_pragma_tabling.m"
                    {
#line 382 "add_pragma_tabling.m"
                      hlds__make_hlds__add_pragma__add_pragma_tabling__check_pred_args_against_tabling_4_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__DeclaredArgModes_33, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_49, (MR_Integer) 1, &hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeError_40);
                    }
#line 381 "add_pragma_tabling.m"
                  }
#line 378 "add_pragma_tabling.m"
                else
#line 375 "add_pragma_tabling.m"
                  {
#line 375 "add_pragma_tabling.m"
                    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeArgMethods_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__Strictness_204, (MR_Integer) 0)));
#line 375 "add_pragma_tabling.m"
                    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling___HiddenArgMethod_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__Strictness_204, (MR_Integer) 1)));

#line 376 "add_pragma_tabling.m"
                    {
#line 376 "add_pragma_tabling.m"
                      hlds__make_hlds__add_pragma__add_pragma_tabling__check_pred_args_against_tabling_methods_5_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__DeclaredArgModes_33, hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeArgMethods_38, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_49, (MR_Integer) 1, &hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeError_40);
                    }
#line 375 "add_pragma_tabling.m"
                  }
#line 3592 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
              }
#line 396 "add_pragma_tabling.m"
            if ((hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeError_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 397 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_130_130 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_51;
#line 396 "add_pragma_tabling.m"
            else
#line 386 "add_pragma_tabling.m"
              {
#line 386 "add_pragma_tabling.m"
                MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__ArgMsg_41;
#line 386 "add_pragma_tabling.m"
                MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__ErrorMsg_42;
#line 386 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeError_40, (MR_Integer) 0)));
#line 386 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_104_104;
#line 386 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_105_105;
#line 386 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_106_106;
#line 386 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_109_109;
#line 386 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_110_110;
#line 386 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_111_111;
#line 386 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_114_114;
#line 386 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_116_116;
#line 386 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_117_117;
#line 386 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_118_118;
#line 386 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_119_119;
#line 386 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_123_123;
#line 386 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_124_124;
#line 386 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_128_128;
#line 386 "add_pragma_tabling.m"
                MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_169;
#line 386 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_170;
#line 386 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_171;
#line 386 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_172;

#line 386 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__ArgMsg_41 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_101_101, (MR_Integer) 0)));
#line 386 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__ErrorMsg_42 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_101_101, (MR_Integer) 1)));
#line 387 "add_pragma_tabling.m"
                {
#line 387 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_169 = parse_tree__prog_out__eval_method_to_string_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_20);
                }
#line 389 "add_pragma_tabling.m"
                {
#line 389 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_105_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 389 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_105_105, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 389 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_105_105, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_169));
#line 389 "add_pragma_tabling.m"
                }
#line 390 "add_pragma_tabling.m"
                {
#line 390 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_110_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 390 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_110_110, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 390 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_110_110, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_18));
#line 390 "add_pragma_tabling.m"
                }
#line 391 "add_pragma_tabling.m"
                {
#line 391 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 391 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_117_117, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__ArgMsg_41));
#line 391 "add_pragma_tabling.m"
                }
#line 391 "add_pragma_tabling.m"
                {
#line 391 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_119_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 391 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_119_119, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 391 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_119_119, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__ErrorMsg_42));
#line 391 "add_pragma_tabling.m"
                }
#line 391 "add_pragma_tabling.m"
                {
#line 391 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 391 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_118_118, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_119_119));
#line 391 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_118_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[1])));
#line 391 "add_pragma_tabling.m"
                }
#line 391 "add_pragma_tabling.m"
                {
#line 391 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 391 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_116_116, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_117_117));
#line 391 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_116_116, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_118_118));
#line 391 "add_pragma_tabling.m"
                }
#line 391 "add_pragma_tabling.m"
                {
#line 391 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 391 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_114_114, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 391 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_114_114, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_116_116));
#line 391 "add_pragma_tabling.m"
                }
#line 391 "add_pragma_tabling.m"
                {
#line 391 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 391 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_111_111, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[56])));
#line 391 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_111_111, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_114_114));
#line 391 "add_pragma_tabling.m"
                }
#line 390 "add_pragma_tabling.m"
                {
#line 390 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 390 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_109_109, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_110_110));
#line 390 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_109_109, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_111_111));
#line 390 "add_pragma_tabling.m"
                }
#line 390 "add_pragma_tabling.m"
                {
#line 390 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 390 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_106_106, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[49])));
#line 390 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_106_106, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_109_109));
#line 390 "add_pragma_tabling.m"
                }
#line 389 "add_pragma_tabling.m"
                {
#line 389 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 389 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_104_104, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_105_105));
#line 389 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_104_104, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_106_106));
#line 389 "add_pragma_tabling.m"
                }
#line 388 "add_pragma_tabling.m"
                {
#line 388 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 388 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_170, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[55])));
#line 388 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_170, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_104_104));
#line 388 "add_pragma_tabling.m"
                }
#line 392 "add_pragma_tabling.m"
                {
#line 392 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_124_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 392 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_124_124, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_170));
#line 392 "add_pragma_tabling.m"
                }
#line 392 "add_pragma_tabling.m"
                {
#line 392 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 392 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_123_123, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_124_124));
#line 392 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_123_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 392 "add_pragma_tabling.m"
                }
#line 392 "add_pragma_tabling.m"
                {
#line 392 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_171 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 392 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_171, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Context_17));
#line 392 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_171, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_123_123));
#line 392 "add_pragma_tabling.m"
                }
#line 394 "add_pragma_tabling.m"
                {
#line 394 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 394 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_128_128, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_171));
#line 394 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_128_128, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 394 "add_pragma_tabling.m"
                }
#line 393 "add_pragma_tabling.m"
                {
#line 393 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_172 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 393 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_172, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 393 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_172, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 393 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_172, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_128_128));
#line 393 "add_pragma_tabling.m"
                }
#line 395 "add_pragma_tabling.m"
                {
#line 395 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 395 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_130_130, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_172));
#line 395 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_130_130, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_51));
#line 395 "add_pragma_tabling.m"
                }
#line 386 "add_pragma_tabling.m"
              }
#line 399 "add_pragma_tabling.m"
            {
#line 399 "add_pragma_tabling.m"
              hlds__hlds_pred__proc_info_set_eval_method_3_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_20, hlds__make_hlds__add_pragma__add_pragma_tabling__ProcInfo0_16, &hlds__make_hlds__add_pragma__add_pragma_tabling__ProcInfo1_43);
            }
#line 400 "add_pragma_tabling.m"
            {
#line 400 "add_pragma_tabling.m"
              hlds__hlds_pred__proc_info_set_table_attributes_3_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeAttributes_21, hlds__make_hlds__add_pragma__add_pragma_tabling__ProcInfo1_43, &hlds__make_hlds__add_pragma__add_pragma_tabling__ProcInfo_44);
            }
#line 402 "add_pragma_tabling.m"
            {
#line 402 "add_pragma_tabling.m"
              mercury__map__det_update_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_15)), ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__ProcInfo_44)), hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_0_47, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_131_131);
            }
#line 409 "add_pragma_tabling.m"
            {
#line 409 "add_pragma_tabling.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_49, &hlds__make_hlds__add_pragma__add_pragma_tabling__Globals_45);
            }
#line 410 "add_pragma_tabling.m"
            {
#line 410 "add_pragma_tabling.m"
              libs__globals__get_backend_foreign_languages_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__Globals_45, &hlds__make_hlds__add_pragma__add_pragma_tabling__ForeignLanguages_46);
            }
#line 411 "add_pragma_tabling.m"
            {
#line 411 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded = mercury__list__member_2_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, ((MR_Box) ((MR_Integer) 0)), hlds__make_hlds__add_pragma__add_pragma_tabling__ForeignLanguages_46);
            }
#line 420 "add_pragma_tabling.m"
            if (hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded)
#line 417 "add_pragma_tabling.m"
              if ((hlds__make_hlds__add_pragma__add_pragma_tabling__Statistics_36 == (MR_Integer) 1))
#line 418 "add_pragma_tabling.m"
                {
#line 418 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_133_133 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_131_131;
#line 418 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_134_134 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_49;
#line 418 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_135_135 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_130_130;
#line 418 "add_pragma_tabling.m"
                }
#line 417 "add_pragma_tabling.m"
              else
#line 414 "add_pragma_tabling.m"
                {
#line 414 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__create_tabling_statistics_pred_11_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_15, hlds__make_hlds__add_pragma__add_pragma_tabling__Context_17, hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_18, hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_19, hlds__make_hlds__add_pragma__add_pragma_tabling__Status_22, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_131_131, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_133_133, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_49, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_134_134, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_130_130, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_135_135);
                }
#line 420 "add_pragma_tabling.m"
            else
#line 421 "add_pragma_tabling.m"
              {
#line 421 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_135_135 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_130_130;
#line 421 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_134_134 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_49;
#line 421 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_133_133 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_131_131;
#line 421 "add_pragma_tabling.m"
              }
#line 428 "add_pragma_tabling.m"
            if ((hlds__make_hlds__add_pragma__add_pragma_tabling__AllowReset_37 == (MR_Integer) 0))
#line 425 "add_pragma_tabling.m"
              {
#line 425 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__create_tabling_reset_pred_11_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_15, hlds__make_hlds__add_pragma__add_pragma_tabling__Context_17, hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_18, hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_19, hlds__make_hlds__add_pragma__add_pragma_tabling__Status_22, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_133_133, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_48, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_134_134, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_50, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_135_135, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_52);
#line 425 "add_pragma_tabling.m"
                return;
              }
#line 428 "add_pragma_tabling.m"
            else
#line 429 "add_pragma_tabling.m"
              {
#line 429 "add_pragma_tabling.m"
                *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_48 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_133_133;
#line 429 "add_pragma_tabling.m"
                *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_50 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_134_134;
#line 429 "add_pragma_tabling.m"
                *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_52 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_135_135;
#line 429 "add_pragma_tabling.m"
              }
#line 362 "add_pragma_tabling.m"
          }
#line 351 "add_pragma_tabling.m"
      }
#line 326 "add_pragma_tabling.m"
  }
#line 318 "add_pragma_tabling.m"
}

#line 299 "add_pragma_tabling.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__set_eval_method_create_aux_preds_list_13_p_0(
#line 299 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1,
#line 299 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Context_2,
#line 299 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_3,
#line 299 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_4,
#line 299 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_5,
#line 299 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeAttributes_6,
#line 299 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Status_7,
#line 299 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_0_8,
#line 299 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_9,
#line 299 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_10,
#line 299 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_11,
#line 299 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_12,
#line 299 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_13)
#line 299 "add_pragma_tabling.m"
{
#line 306 "add_pragma_tabling.m"
  while (MR_TRUE)
#line 306 "add_pragma_tabling.m"
    {
#line 306 "add_pragma_tabling.m"
      /* tailcall optimized into a loop */
#line 306 "add_pragma_tabling.m"
      {
#line 306 "add_pragma_tabling.m"
        MR_bool hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded;

#line 306 "add_pragma_tabling.m"
        if ((hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 306 "add_pragma_tabling.m"
          {
#line 307 "add_pragma_tabling.m"
            *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_13 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_12;
#line 307 "add_pragma_tabling.m"
            *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_11 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_10;
#line 307 "add_pragma_tabling.m"
            *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_9 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_0_8;
#line 306 "add_pragma_tabling.m"
          }
#line 306 "add_pragma_tabling.m"
        else
#line 310 "add_pragma_tabling.m"
          {
#line 310 "add_pragma_tabling.m"
            MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_29;
#line 310 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ProcInfo0_30;
#line 310 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Rest_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1, (MR_Integer) 1)));
#line 310 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1, (MR_Integer) 0)));
#line 310 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_48_48;
#line 310 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_49_49;
#line 310 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_50_50;

#line 308 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_47_47, (MR_Integer) 0)));
#line 308 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__ProcInfo0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_47_47, (MR_Integer) 1)));
#line 311 "add_pragma_tabling.m"
            {
#line 311 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__set_eval_method_create_aux_preds_14_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_29, hlds__make_hlds__add_pragma__add_pragma_tabling__ProcInfo0_30, hlds__make_hlds__add_pragma__add_pragma_tabling__Context_2, hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_3, hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_4, hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_5, hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeAttributes_6, hlds__make_hlds__add_pragma__add_pragma_tabling__Status_7, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_0_8, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_48_48, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_10, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_49_49, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_12, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_50_50);
            }
#line 314 "add_pragma_tabling.m"
            /* direct tailcall eliminated */
#line 314 "add_pragma_tabling.m"
            {
#line 314 "add_pragma_tabling.m"
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1__tmp_copy_1 = hlds__make_hlds__add_pragma__add_pragma_tabling__Rest_31;
#line 314 "add_pragma_tabling.m"
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_0__tmp_copy_8 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_48_48;
#line 314 "add_pragma_tabling.m"
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0__tmp_copy_10 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_49_49;
#line 314 "add_pragma_tabling.m"
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0__tmp_copy_12 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_50_50;

#line 314 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_12 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0__tmp_copy_12;
#line 314 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_10 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0__tmp_copy_10;
#line 314 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_0_8 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_0__tmp_copy_8;
#line 314 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1 = hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1__tmp_copy_1;
#line 314 "add_pragma_tabling.m"
            }
#line 314 "add_pragma_tabling.m"
            continue;
#line 310 "add_pragma_tabling.m"
          }
#line 306 "add_pragma_tabling.m"
      }
#line 306 "add_pragma_tabling.m"
      break;
#line 306 "add_pragma_tabling.m"
    }
#line 299 "add_pragma_tabling.m"
}

#line 148 "add_pragma_tabling.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__module_add_pragma_tabled_for_pred_13_p_0(
#line 148 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod0_14,
#line 148 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredName_15,
#line 148 "add_pragma_tabling.m"
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__Arity0_16,
#line 148 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MaybePredOrFunc_17,
#line 148 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeModes_18,
#line 148 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeAttributes_19,
#line 148 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Context_20,
#line 148 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Status_21,
#line 148 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredId_22,
#line 148 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_62,
#line 148 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_63,
#line 148 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_64,
#line 148 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_65)
#line 148 "add_pragma_tabling.m"
{
#line 156 "add_pragma_tabling.m"
  {
#line 156 "add_pragma_tabling.m"
    MR_bool hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded;
#line 156 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_237_237;
#line 156 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Globals_25;
#line 156 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_28;
#line 156 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredicateTable_29;
#line 156 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Preds_30;
#line 156 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredInfo0_31;
#line 156 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredOrFunc_33;
#line 156 "add_pragma_tabling.m"
    MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_34;
#line 156 "add_pragma_tabling.m"
    MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_35;
#line 156 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__VeryVerbose_36;
#line 156 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Markers_38;
#line 156 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_39;
#line 156 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_129_129;
#line 158 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_26_26;
#line 174 "add_pragma_tabling.m"
    MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling__conv0_PredInfo0_31;
#line 204 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__WarnTableWithInline_40;
#line 204 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_81_81;

#line 157 "add_pragma_tabling.m"
    {
#line 157 "add_pragma_tabling.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_62, &hlds__make_hlds__add_pragma__add_pragma_tabling__Globals_25);
    }
#line 158 "add_pragma_tabling.m"
    hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod0_14)) == (MR_mktag((MR_Integer) 2)));
#line 158 "add_pragma_tabling.m"
    if (hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded)
#line 158 "add_pragma_tabling.m"
      {
#line 158 "add_pragma_tabling.m"
        hlds__make_hlds__add_pragma__add_pragma_tabling__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod0_14, (MR_Integer) 0)));
#line 160 "add_pragma_tabling.m"
        {
#line 160 "add_pragma_tabling.m"
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__OwnStacks_27;

#line 159 "add_pragma_tabling.m"
          {
#line 159 "add_pragma_tabling.m"
            libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__Globals_25, (MR_Integer) 219, &hlds__make_hlds__add_pragma__add_pragma_tabling__OwnStacks_27);
          }
#line 164 "add_pragma_tabling.m"
          if ((hlds__make_hlds__add_pragma__add_pragma_tabling__OwnStacks_27 == (MR_Integer) 0))
#line 165 "add_pragma_tabling.m"
            {
#line 166 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_28 = (MR_Word) MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_2[1]);
#line 165 "add_pragma_tabling.m"
            }
#line 164 "add_pragma_tabling.m"
          else
#line 162 "add_pragma_tabling.m"
            {
#line 163 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_28 = (MR_Word) MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_2[2]);
#line 162 "add_pragma_tabling.m"
            }
#line 160 "add_pragma_tabling.m"
        }
#line 158 "add_pragma_tabling.m"
      }
#line 158 "add_pragma_tabling.m"
    else
#line 169 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_28 = hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod0_14;
#line 172 "add_pragma_tabling.m"
    {
#line 172 "add_pragma_tabling.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_62, &hlds__make_hlds__add_pragma__add_pragma_tabling__PredicateTable_29);
    }
#line 173 "add_pragma_tabling.m"
    {
#line 173 "add_pragma_tabling.m"
      hlds__pred_table__predicate_table_get_preds_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__PredicateTable_29, &hlds__make_hlds__add_pragma__add_pragma_tabling__Preds_30);
    }
#line 4172 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
    hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_237_237 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 174 "add_pragma_tabling.m"
    {
#line 174 "add_pragma_tabling.m"
      mercury__map__lookup_3_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_237_237, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, hlds__make_hlds__add_pragma__add_pragma_tabling__Preds_30, ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__PredId_22)), &hlds__make_hlds__add_pragma__add_pragma_tabling__conv0_PredInfo0_31);
    }
#line 174 "add_pragma_tabling.m"
    hlds__make_hlds__add_pragma__add_pragma_tabling__PredInfo0_31 = ((MR_Word) hlds__make_hlds__add_pragma__add_pragma_tabling__conv0_PredInfo0_31);
#line 178 "add_pragma_tabling.m"
    if ((hlds__make_hlds__add_pragma__add_pragma_tabling__MaybePredOrFunc_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 180 "add_pragma_tabling.m"
      {
#line 180 "add_pragma_tabling.m"
        hlds__make_hlds__add_pragma__add_pragma_tabling__PredOrFunc_33 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__PredInfo0_31);
      }
#line 178 "add_pragma_tabling.m"
    else
#line 176 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__PredOrFunc_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__MaybePredOrFunc_17, (MR_Integer) 0)));
#line 182 "add_pragma_tabling.m"
    {
#line 182 "add_pragma_tabling.m"
      parse_tree__prog_util__adjust_func_arity_3_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__PredOrFunc_33, hlds__make_hlds__add_pragma__add_pragma_tabling__Arity0_16, &hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_34);
    }
#line 184 "add_pragma_tabling.m"
    {
#line 184 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_35 = parse_tree__prog_out__eval_method_to_string_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_28);
    }
#line 185 "add_pragma_tabling.m"
    {
#line 185 "add_pragma_tabling.m"
      libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__Globals_25, (MR_Integer) 46, &hlds__make_hlds__add_pragma__add_pragma_tabling__VeryVerbose_36);
    }
#line 195 "add_pragma_tabling.m"
    if ((hlds__make_hlds__add_pragma__add_pragma_tabling__VeryVerbose_36 == (MR_Integer) 0))
#line 196 "add_pragma_tabling.m"
      {
#line 196 "add_pragma_tabling.m"
      }
#line 195 "add_pragma_tabling.m"
    else
#line 188 "add_pragma_tabling.m"
      {
#line 188 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_76_76;

#line 189 "add_pragma_tabling.m"
        {
#line 189 "add_pragma_tabling.m"
          mercury__io__write_string_3_p_0((MR_String) "% Processing \140:- pragma ");
        }
#line 190 "add_pragma_tabling.m"
        {
#line 190 "add_pragma_tabling.m"
          mercury__io__write_string_3_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_35);
        }
#line 191 "add_pragma_tabling.m"
        {
#line 191 "add_pragma_tabling.m"
          mercury__io__write_string_3_p_0((MR_String) "\' for ");
        }
#line 192 "add_pragma_tabling.m"
        {
#line 192 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 192 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_76_76, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__PredName_15));
#line 192 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_76_76, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_34));
#line 192 "add_pragma_tabling.m"
        }
#line 192 "add_pragma_tabling.m"
        {
#line 192 "add_pragma_tabling.m"
          parse_tree__prog_out__write_simple_call_id_4_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__PredOrFunc_33, hlds__make_hlds__add_pragma__add_pragma_tabling__V_76_76);
        }
#line 193 "add_pragma_tabling.m"
        {
#line 193 "add_pragma_tabling.m"
          mercury__io__write_string_3_p_0((MR_String) "...\n");
        }
#line 188 "add_pragma_tabling.m"
      }
#line 201 "add_pragma_tabling.m"
    {
#line 201 "add_pragma_tabling.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__PredInfo0_31, &hlds__make_hlds__add_pragma__add_pragma_tabling__Markers_38);
    }
#line 202 "add_pragma_tabling.m"
    {
#line 202 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 202 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_39, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__PredOrFunc_33));
#line 202 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_39, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__PredName_15));
#line 202 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_39, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_34));
#line 202 "add_pragma_tabling.m"
    }
#line 204 "add_pragma_tabling.m"
    {
#line 204 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded = hlds__hlds_pred__check_marker_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__Markers_38, (MR_Integer) 6);
    }
#line 204 "add_pragma_tabling.m"
    if (hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded)
#line 204 "add_pragma_tabling.m"
      {
#line 205 "add_pragma_tabling.m"
        hlds__make_hlds__add_pragma__add_pragma_tabling__V_81_81 = (MR_Integer) 30;
#line 205 "add_pragma_tabling.m"
        {
#line 205 "add_pragma_tabling.m"
          libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__Globals_25, hlds__make_hlds__add_pragma__add_pragma_tabling__V_81_81, &hlds__make_hlds__add_pragma__add_pragma_tabling__WarnTableWithInline_40);
        }
#line 207 "add_pragma_tabling.m"
        hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded = (hlds__make_hlds__add_pragma__add_pragma_tabling__WarnTableWithInline_40 == (MR_Integer) 1);
#line 204 "add_pragma_tabling.m"
      }
#line 221 "add_pragma_tabling.m"
    if (hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded)
#line 216 "add_pragma_tabling.m"
      {
#line 216 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__InlineWarningPieces_41;
#line 216 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__InlineWarningMsg_42;
#line 216 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__InlineWarningSpec_43;
#line 216 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_84_84;
#line 216 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_85_85;
#line 216 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_86_86;
#line 216 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_89_89;
#line 216 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_90_90;
#line 216 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_122_122;
#line 216 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_123_123;
#line 216 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_127_127;

#line 209 "add_pragma_tabling.m"
        {
#line 209 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_85_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 209 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_85_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 209 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_85_85, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_39));
#line 209 "add_pragma_tabling.m"
        }
#line 210 "add_pragma_tabling.m"
        {
#line 210 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_90_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 210 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_90_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 210 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_90_90, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_35));
#line 210 "add_pragma_tabling.m"
        }
#line 210 "add_pragma_tabling.m"
        {
#line 210 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 210 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_89_89, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_90_90));
#line 210 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[27])));
#line 210 "add_pragma_tabling.m"
        }
#line 210 "add_pragma_tabling.m"
        {
#line 210 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 210 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_86_86, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[46])));
#line 210 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_86_86, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_89_89));
#line 210 "add_pragma_tabling.m"
        }
#line 209 "add_pragma_tabling.m"
        {
#line 209 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 209 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_84_84, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_85_85));
#line 209 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_84_84, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_86_86));
#line 209 "add_pragma_tabling.m"
        }
#line 209 "add_pragma_tabling.m"
        {
#line 209 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__InlineWarningPieces_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 209 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__InlineWarningPieces_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[45])));
#line 209 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__InlineWarningPieces_41, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_84_84));
#line 209 "add_pragma_tabling.m"
        }
#line 217 "add_pragma_tabling.m"
        {
#line 217 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_123_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 217 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_123_123, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__InlineWarningPieces_41));
#line 217 "add_pragma_tabling.m"
        }
#line 217 "add_pragma_tabling.m"
        {
#line 217 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 217 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_122_122, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_123_123));
#line 217 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_122_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 217 "add_pragma_tabling.m"
        }
#line 217 "add_pragma_tabling.m"
        {
#line 217 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__InlineWarningMsg_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 217 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__InlineWarningMsg_42, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Context_20));
#line 217 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__InlineWarningMsg_42, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_122_122));
#line 217 "add_pragma_tabling.m"
        }
#line 219 "add_pragma_tabling.m"
        {
#line 219 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 219 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_127_127, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__InlineWarningMsg_42));
#line 219 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_127_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 219 "add_pragma_tabling.m"
        }
#line 218 "add_pragma_tabling.m"
        {
#line 218 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__InlineWarningSpec_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 218 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__InlineWarningSpec_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 218 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__InlineWarningSpec_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 218 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__InlineWarningSpec_43, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_127_127));
#line 218 "add_pragma_tabling.m"
        }
#line 220 "add_pragma_tabling.m"
        {
#line 220 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 220 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_129_129, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__InlineWarningSpec_43));
#line 220 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_129_129, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_64));
#line 220 "add_pragma_tabling.m"
        }
#line 216 "add_pragma_tabling.m"
      }
#line 221 "add_pragma_tabling.m"
    else
#line 221 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_129_129 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_64;
#line 224 "add_pragma_tabling.m"
    {
#line 224 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__PredInfo0_31);
    }
#line 231 "add_pragma_tabling.m"
    if (hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded)
#line 227 "add_pragma_tabling.m"
      {
#line 227 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_44;
#line 227 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_45;
#line 227 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_46;
#line 227 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_132_132;
#line 227 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_133_133;
#line 227 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_134_134;
#line 227 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_137_137;
#line 227 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_138_138;
#line 227 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_145_145;
#line 227 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_146_146;
#line 227 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_150_150;

#line 225 "add_pragma_tabling.m"
        {
#line 225 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_133_133 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 225 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_133_133, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 225 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_133_133, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_35));
#line 225 "add_pragma_tabling.m"
        }
#line 226 "add_pragma_tabling.m"
        {
#line 226 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_138_138 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 226 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_138_138, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 226 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_138_138, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_39));
#line 226 "add_pragma_tabling.m"
        }
#line 226 "add_pragma_tabling.m"
        {
#line 226 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 226 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_137_137, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_138_138));
#line 226 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_137_137, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[29])));
#line 226 "add_pragma_tabling.m"
        }
#line 226 "add_pragma_tabling.m"
        {
#line 226 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 226 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_134_134, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[48])));
#line 226 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_134_134, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_137_137));
#line 226 "add_pragma_tabling.m"
        }
#line 225 "add_pragma_tabling.m"
        {
#line 225 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_132_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 225 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_132_132, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_133_133));
#line 225 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_132_132, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_134_134));
#line 225 "add_pragma_tabling.m"
        }
#line 225 "add_pragma_tabling.m"
        {
#line 225 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 225 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[47])));
#line 225 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_44, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_132_132));
#line 225 "add_pragma_tabling.m"
        }
#line 228 "add_pragma_tabling.m"
        {
#line 228 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_146_146 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 228 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_146_146, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_44));
#line 228 "add_pragma_tabling.m"
        }
#line 228 "add_pragma_tabling.m"
        {
#line 228 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_145_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 228 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_145_145, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_146_146));
#line 228 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_145_145, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 228 "add_pragma_tabling.m"
        }
#line 228 "add_pragma_tabling.m"
        {
#line 228 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 228 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_45, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Context_20));
#line 228 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_45, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_145_145));
#line 228 "add_pragma_tabling.m"
        }
#line 229 "add_pragma_tabling.m"
        {
#line 229 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_150_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 229 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_150_150, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_45));
#line 229 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_150_150, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 229 "add_pragma_tabling.m"
        }
#line 229 "add_pragma_tabling.m"
        {
#line 229 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 229 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 229 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 229 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_46, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_150_150));
#line 229 "add_pragma_tabling.m"
        }
#line 230 "add_pragma_tabling.m"
        {
#line 230 "add_pragma_tabling.m"
          MR_Word base;
#line 230 "add_pragma_tabling.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 230 "add_pragma_tabling.m"
          *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_65 = base;
#line 230 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_46));
#line 230 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_129_129));
#line 230 "add_pragma_tabling.m"
        }
#line 227 "add_pragma_tabling.m"
        *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_63 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_62;
#line 227 "add_pragma_tabling.m"
      }
#line 231 "add_pragma_tabling.m"
    else
#line 233 "add_pragma_tabling.m"
      {
#line 233 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_239_239;
#line 233 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_240_240;
#line 233 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__NeedsStrat_47;
#line 233 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ProcTable0_50;
#line 233 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ExistingProcs_51;
#line 233 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_153_153;

#line 233 "add_pragma_tabling.m"
        {
#line 233 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__NeedsStrat_47 = hlds__hlds_pred__eval_method_needs_stratification_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_28);
        }
#line 240 "add_pragma_tabling.m"
        if ((hlds__make_hlds__add_pragma__add_pragma_tabling__NeedsStrat_47 == (MR_Integer) 0))
#line 241 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_153_153 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_62;
#line 240 "add_pragma_tabling.m"
        else
#line 235 "add_pragma_tabling.m"
          {
#line 235 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__StratPredIds0_48;
#line 235 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__StratPredIds_49;

#line 236 "add_pragma_tabling.m"
            {
#line 236 "add_pragma_tabling.m"
              hlds__hlds_module__module_info_get_must_be_stratified_preds_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_62, &hlds__make_hlds__add_pragma__add_pragma_tabling__StratPredIds0_48);
            }
#line 238 "add_pragma_tabling.m"
            {
#line 238 "add_pragma_tabling.m"
              mercury__set__insert_3_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_237_237, ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__PredId_22)), hlds__make_hlds__add_pragma__add_pragma_tabling__StratPredIds0_48, &hlds__make_hlds__add_pragma__add_pragma_tabling__StratPredIds_49);
            }
#line 239 "add_pragma_tabling.m"
            {
#line 239 "add_pragma_tabling.m"
              hlds__hlds_module__module_info_set_must_be_stratified_preds_3_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__StratPredIds_49, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_62, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_153_153);
            }
#line 235 "add_pragma_tabling.m"
          }
#line 245 "add_pragma_tabling.m"
        {
#line 245 "add_pragma_tabling.m"
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__PredInfo0_31, &hlds__make_hlds__add_pragma__add_pragma_tabling__ProcTable0_50);
        }
#line 4664 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
        hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_239_239 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 4666 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
        hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_240_240 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 246 "add_pragma_tabling.m"
        {
#line 246 "add_pragma_tabling.m"
          mercury__map__to_assoc_list_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_239_239, hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_240_240, hlds__make_hlds__add_pragma__add_pragma_tabling__ProcTable0_50, &hlds__make_hlds__add_pragma__add_pragma_tabling__ExistingProcs_51);
        }
#line 269 "add_pragma_tabling.m"
        if ((hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeModes_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 281 "add_pragma_tabling.m"
          if ((hlds__make_hlds__add_pragma__add_pragma_tabling__ExistingProcs_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 272 "add_pragma_tabling.m"
            {
#line 272 "add_pragma_tabling.m"
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_159_159;
#line 272 "add_pragma_tabling.m"
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_160_160;
#line 272 "add_pragma_tabling.m"
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_161_161;
#line 272 "add_pragma_tabling.m"
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_164_164;
#line 272 "add_pragma_tabling.m"
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_165_165;
#line 272 "add_pragma_tabling.m"
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_172_172;
#line 272 "add_pragma_tabling.m"
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_173_173;
#line 272 "add_pragma_tabling.m"
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_177_177;
#line 272 "add_pragma_tabling.m"
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_216;
#line 272 "add_pragma_tabling.m"
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_217;
#line 272 "add_pragma_tabling.m"
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_218;

#line 274 "add_pragma_tabling.m"
              {
#line 274 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__V_160_160 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 274 "add_pragma_tabling.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_160_160, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 274 "add_pragma_tabling.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_160_160, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_35));
#line 274 "add_pragma_tabling.m"
              }
#line 275 "add_pragma_tabling.m"
              {
#line 275 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__V_165_165 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 275 "add_pragma_tabling.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_165_165, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 275 "add_pragma_tabling.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_165_165, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_39));
#line 275 "add_pragma_tabling.m"
              }
#line 275 "add_pragma_tabling.m"
              {
#line 275 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 275 "add_pragma_tabling.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_164_164, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_165_165));
#line 275 "add_pragma_tabling.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_164_164, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[31])));
#line 275 "add_pragma_tabling.m"
              }
#line 275 "add_pragma_tabling.m"
              {
#line 275 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 275 "add_pragma_tabling.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_161_161, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[49])));
#line 275 "add_pragma_tabling.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_161_161, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_164_164));
#line 275 "add_pragma_tabling.m"
              }
#line 274 "add_pragma_tabling.m"
              {
#line 274 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 274 "add_pragma_tabling.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_159_159, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_160_160));
#line 274 "add_pragma_tabling.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_159_159, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_161_161));
#line 274 "add_pragma_tabling.m"
              }
#line 273 "add_pragma_tabling.m"
              {
#line 273 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_216 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 273 "add_pragma_tabling.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_216, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[47])));
#line 273 "add_pragma_tabling.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_216, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_159_159));
#line 273 "add_pragma_tabling.m"
              }
#line 277 "add_pragma_tabling.m"
              {
#line 277 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__V_173_173 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 277 "add_pragma_tabling.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_173_173, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_216));
#line 277 "add_pragma_tabling.m"
              }
#line 277 "add_pragma_tabling.m"
              {
#line 277 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__V_172_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 277 "add_pragma_tabling.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_172_172, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_173_173));
#line 277 "add_pragma_tabling.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_172_172, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 277 "add_pragma_tabling.m"
              }
#line 277 "add_pragma_tabling.m"
              {
#line 277 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_217 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 277 "add_pragma_tabling.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_217, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Context_20));
#line 277 "add_pragma_tabling.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_217, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_172_172));
#line 277 "add_pragma_tabling.m"
              }
#line 279 "add_pragma_tabling.m"
              {
#line 279 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__V_177_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 279 "add_pragma_tabling.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_177_177, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_217));
#line 279 "add_pragma_tabling.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_177_177, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 279 "add_pragma_tabling.m"
              }
#line 278 "add_pragma_tabling.m"
              {
#line 278 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_218 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 278 "add_pragma_tabling.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_218, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 278 "add_pragma_tabling.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_218, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 278 "add_pragma_tabling.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_218, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_177_177));
#line 278 "add_pragma_tabling.m"
              }
#line 280 "add_pragma_tabling.m"
              {
#line 280 "add_pragma_tabling.m"
                MR_Word base;
#line 280 "add_pragma_tabling.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 280 "add_pragma_tabling.m"
                *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_65 = base;
#line 280 "add_pragma_tabling.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_218));
#line 280 "add_pragma_tabling.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_129_129));
#line 280 "add_pragma_tabling.m"
              }
#line 272 "add_pragma_tabling.m"
              *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_63 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_153_153;
#line 272 "add_pragma_tabling.m"
            }
#line 281 "add_pragma_tabling.m"
          else
#line 282 "add_pragma_tabling.m"
            {
#line 282 "add_pragma_tabling.m"
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ExistingProcsTail_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__ExistingProcs_51, (MR_Integer) 1)));
#line 282 "add_pragma_tabling.m"
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_59;
#line 282 "add_pragma_tabling.m"
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_154_154;
#line 282 "add_pragma_tabling.m"
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ProcTable_219;
#line 282 "add_pragma_tabling.m"
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredInfo_220;
#line 282 "add_pragma_tabling.m"
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__ExistingProcs_51, (MR_Integer) 0)));

#line 286 "add_pragma_tabling.m"
              if ((hlds__make_hlds__add_pragma__add_pragma_tabling__ExistingProcsTail_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 285 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_59 = (MR_Integer) 1;
#line 286 "add_pragma_tabling.m"
              else
#line 288 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_59 = (MR_Integer) 0;
#line 290 "add_pragma_tabling.m"
              {
#line 290 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__set_eval_method_create_aux_preds_list_13_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ExistingProcs_51, hlds__make_hlds__add_pragma__add_pragma_tabling__Context_20, hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_39, hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_59, hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_28, hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeAttributes_19, hlds__make_hlds__add_pragma__add_pragma_tabling__Status_21, hlds__make_hlds__add_pragma__add_pragma_tabling__ProcTable0_50, &hlds__make_hlds__add_pragma__add_pragma_tabling__ProcTable_219, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_153_153, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_154_154, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_129_129, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_65);
              }
#line 293 "add_pragma_tabling.m"
              {
#line 293 "add_pragma_tabling.m"
                hlds__hlds_pred__pred_info_set_proc_table_3_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ProcTable_219, hlds__make_hlds__add_pragma__add_pragma_tabling__PredInfo0_31, &hlds__make_hlds__add_pragma__add_pragma_tabling__PredInfo_220);
              }
#line 294 "add_pragma_tabling.m"
              {
#line 294 "add_pragma_tabling.m"
                hlds__hlds_module__module_info_set_pred_info_4_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__PredId_22, hlds__make_hlds__add_pragma__add_pragma_tabling__PredInfo_220, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_154_154, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_63);
#line 294 "add_pragma_tabling.m"
                return;
              }
#line 282 "add_pragma_tabling.m"
            }
#line 269 "add_pragma_tabling.m"
        else
#line 248 "add_pragma_tabling.m"
          {
#line 248 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Modes_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeModes_18, (MR_Integer) 0)));
#line 259 "add_pragma_tabling.m"
            MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_53;

#line 250 "add_pragma_tabling.m"
            {
#line 250 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded = hlds__hlds_code_util__get_procedure_matching_argmodes_4_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ExistingProcs_51, hlds__make_hlds__add_pragma__add_pragma_tabling__Modes_52, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_153_153, &hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_53);
            }
#line 259 "add_pragma_tabling.m"
            if (hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded)
#line 253 "add_pragma_tabling.m"
              {
#line 253 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ProcInfo0_54;
#line 253 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ProcTable_55;
#line 253 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredInfo_56;
#line 253 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_181_181;
#line 253 "add_pragma_tabling.m"
                MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling__conv1_ProcInfo0_54;

#line 253 "add_pragma_tabling.m"
                {
#line 253 "add_pragma_tabling.m"
                  mercury__map__lookup_3_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_239_239, hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_240_240, hlds__make_hlds__add_pragma__add_pragma_tabling__ProcTable0_50, ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_53)), &hlds__make_hlds__add_pragma__add_pragma_tabling__conv1_ProcInfo0_54);
                }
#line 253 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__ProcInfo0_54 = ((MR_Word) hlds__make_hlds__add_pragma__add_pragma_tabling__conv1_ProcInfo0_54);
#line 254 "add_pragma_tabling.m"
                {
#line 254 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__set_eval_method_create_aux_preds_14_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_53, hlds__make_hlds__add_pragma__add_pragma_tabling__ProcInfo0_54, hlds__make_hlds__add_pragma__add_pragma_tabling__Context_20, hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_39, (MR_Integer) 1, hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_28, hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeAttributes_19, hlds__make_hlds__add_pragma__add_pragma_tabling__Status_21, hlds__make_hlds__add_pragma__add_pragma_tabling__ProcTable0_50, &hlds__make_hlds__add_pragma__add_pragma_tabling__ProcTable_55, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_153_153, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_181_181, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_129_129, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_65);
                }
#line 257 "add_pragma_tabling.m"
                {
#line 257 "add_pragma_tabling.m"
                  hlds__hlds_pred__pred_info_set_proc_table_3_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ProcTable_55, hlds__make_hlds__add_pragma__add_pragma_tabling__PredInfo0_31, &hlds__make_hlds__add_pragma__add_pragma_tabling__PredInfo_56);
                }
#line 258 "add_pragma_tabling.m"
                {
#line 258 "add_pragma_tabling.m"
                  hlds__hlds_module__module_info_set_pred_info_4_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__PredId_22, hlds__make_hlds__add_pragma__add_pragma_tabling__PredInfo_56, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_181_181, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_63);
#line 258 "add_pragma_tabling.m"
                  return;
                }
#line 253 "add_pragma_tabling.m"
              }
#line 259 "add_pragma_tabling.m"
            else
#line 263 "add_pragma_tabling.m"
              {
#line 263 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_186_186;
#line 263 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_187_187;
#line 263 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_188_188;
#line 263 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_191_191;
#line 263 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_192_192;
#line 263 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_199_199;
#line 263 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_200_200;
#line 263 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_204_204;
#line 263 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_207;
#line 263 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_208;
#line 263 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_209;

#line 261 "add_pragma_tabling.m"
                {
#line 261 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_187_187 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 261 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_187_187, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 261 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_187_187, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_35));
#line 261 "add_pragma_tabling.m"
                }
#line 263 "add_pragma_tabling.m"
                {
#line 263 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_192_192 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 263 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_192_192, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 263 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_192_192, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_39));
#line 263 "add_pragma_tabling.m"
                }
#line 263 "add_pragma_tabling.m"
                {
#line 263 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_191_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 263 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_191_191, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_192_192));
#line 263 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_191_191, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[29])));
#line 263 "add_pragma_tabling.m"
                }
#line 262 "add_pragma_tabling.m"
                {
#line 262 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_188_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 262 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_188_188, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[51])));
#line 262 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_188_188, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_191_191));
#line 262 "add_pragma_tabling.m"
                }
#line 261 "add_pragma_tabling.m"
                {
#line 261 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_186_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 261 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_186_186, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_187_187));
#line 261 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_186_186, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_188_188));
#line 261 "add_pragma_tabling.m"
                }
#line 260 "add_pragma_tabling.m"
                {
#line 260 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_207 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 260 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_207, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[50])));
#line 260 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_207, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_186_186));
#line 260 "add_pragma_tabling.m"
                }
#line 264 "add_pragma_tabling.m"
                {
#line 264 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_200_200 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 264 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_200_200, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_207));
#line 264 "add_pragma_tabling.m"
                }
#line 264 "add_pragma_tabling.m"
                {
#line 264 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_199_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 264 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_199_199, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_200_200));
#line 264 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_199_199, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 264 "add_pragma_tabling.m"
                }
#line 264 "add_pragma_tabling.m"
                {
#line 264 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_208 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 264 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_208, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Context_20));
#line 264 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_208, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_199_199));
#line 264 "add_pragma_tabling.m"
                }
#line 266 "add_pragma_tabling.m"
                {
#line 266 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_204_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 266 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_204_204, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_208));
#line 266 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_204_204, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 266 "add_pragma_tabling.m"
                }
#line 265 "add_pragma_tabling.m"
                {
#line 265 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_209 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 265 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_209, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 265 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_209, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 265 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_209, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_204_204));
#line 265 "add_pragma_tabling.m"
                }
#line 267 "add_pragma_tabling.m"
                {
#line 267 "add_pragma_tabling.m"
                  MR_Word base;
#line 267 "add_pragma_tabling.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "add_pragma_tabling.m"
                  *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_65 = base;
#line 267 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_209));
#line 267 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_129_129));
#line 267 "add_pragma_tabling.m"
                }
#line 263 "add_pragma_tabling.m"
                *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_63 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_153_153;
#line 263 "add_pragma_tabling.m"
              }
#line 248 "add_pragma_tabling.m"
          }
#line 233 "add_pragma_tabling.m"
      }
#line 156 "add_pragma_tabling.m"
  }
#line 148 "add_pragma_tabling.m"
}

#line 144 "add_pragma_tabling.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__module_add_pragma_tabled_7_p_0_1(
#line 144 "add_pragma_tabling.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling__closure_arg,
#line 144 "add_pragma_tabling.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling__wrapper_arg_1,
#line 144 "add_pragma_tabling.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling__wrapper_arg_2,
#line 144 "add_pragma_tabling.m"
  MR_Box * hlds__make_hlds__add_pragma__add_pragma_tabling__wrapper_arg_3,
#line 144 "add_pragma_tabling.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling__wrapper_arg_4,
#line 144 "add_pragma_tabling.m"
  MR_Box * hlds__make_hlds__add_pragma__add_pragma_tabling__wrapper_arg_5)
#line 144 "add_pragma_tabling.m"
{
#line 144 "add_pragma_tabling.m"
  {
#line 144 "add_pragma_tabling.m"
    MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling__closure = hlds__make_hlds__add_pragma__add_pragma_tabling__closure_arg;
#line 144 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__conv1_STATE_VARIABLE_ModuleInfo_63;
#line 144 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__conv0_STATE_VARIABLE_Specs_65;

#line 144 "add_pragma_tabling.m"
    {
#line 144 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__module_add_pragma_tabled_for_pred_13_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__closure, (MR_Integer) 9))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__closure, (MR_Integer) 10))), ((MR_Word) hlds__make_hlds__add_pragma__add_pragma_tabling__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_pragma__add_pragma_tabling__wrapper_arg_2), &hlds__make_hlds__add_pragma__add_pragma_tabling__conv1_STATE_VARIABLE_ModuleInfo_63, ((MR_Word) hlds__make_hlds__add_pragma__add_pragma_tabling__wrapper_arg_4), &hlds__make_hlds__add_pragma__add_pragma_tabling__conv0_STATE_VARIABLE_Specs_65);
    }
#line 144 "add_pragma_tabling.m"
    *hlds__make_hlds__add_pragma__add_pragma_tabling__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__conv1_STATE_VARIABLE_ModuleInfo_63));
#line 144 "add_pragma_tabling.m"
    *hlds__make_hlds__add_pragma__add_pragma_tabling__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__conv0_STATE_VARIABLE_Specs_65));
#line 144 "add_pragma_tabling.m"
  }
#line 144 "add_pragma_tabling.m"
}

#line 19 "add_pragma_tabling.m"
void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__module_add_pragma_tabled_7_p_0(
#line 19 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__TabledInfo_8,
#line 19 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Context_9,
#line 19 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Status_10,
#line 19 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_46,
#line 19 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_47,
#line 19 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_48,
#line 19 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_49)
#line 19 "add_pragma_tabling.m"
{
#line 59 "add_pragma_tabling.m"
  {
#line 59 "add_pragma_tabling.m"
    MR_bool hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded;
#line 59 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__TabledInfo_8, (MR_Integer) 0)));
#line 59 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredNameArityMPF_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__TabledInfo_8, (MR_Integer) 1)));
#line 59 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeModes_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__TabledInfo_8, (MR_Integer) 2)));
#line 59 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeAttributes_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__TabledInfo_8, (MR_Integer) 3)));
#line 59 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__PredNameArityMPF_14, (MR_Integer) 0)));
#line 59 "add_pragma_tabling.m"
    MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__PredNameArityMPF_14, (MR_Integer) 1)));
#line 59 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MaybePredOrFunc_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__PredNameArityMPF_14, (MR_Integer) 2)));
#line 59 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredicateTable0_20;
#line 59 "add_pragma_tabling.m"
    MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_21;
#line 59 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds_28;
#line 59 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_68_68;
#line 59 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_71_71;
#line 59 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_129_129;
#line 59 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_131_131;
#line 143 "add_pragma_tabling.m"
    MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling__conv3_STATE_VARIABLE_ModuleInfo_47;
#line 143 "add_pragma_tabling.m"
    MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling__conv2_STATE_VARIABLE_Specs_49;

#line 63 "add_pragma_tabling.m"
    {
#line 63 "add_pragma_tabling.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_46, &hlds__make_hlds__add_pragma__add_pragma_tabling__PredicateTable0_20);
    }
#line 64 "add_pragma_tabling.m"
    {
#line 64 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_21 = parse_tree__prog_out__eval_method_to_string_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_13);
    }
#line 86 "add_pragma_tabling.m"
    if ((hlds__make_hlds__add_pragma__add_pragma_tabling__MaybePredOrFunc_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 87 "add_pragma_tabling.m"
      {
#line 87 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds0_140;

#line 88 "add_pragma_tabling.m"
        {
#line 88 "add_pragma_tabling.m"
          hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__PredicateTable0_20, (MR_Integer) 0, hlds__make_hlds__add_pragma__add_pragma_tabling__PredName_17, hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_18, &hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds0_140);
        }
#line 98 "add_pragma_tabling.m"
        if ((hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds0_140 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 91 "add_pragma_tabling.m"
          {
#line 91 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_51_51;
#line 91 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_59_59;
#line 91 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleName_134;
#line 91 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__DescPieces_135;
#line 91 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredId_136;

#line 92 "add_pragma_tabling.m"
            {
#line 92 "add_pragma_tabling.m"
              hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_46, &hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleName_134);
            }
#line 93 "add_pragma_tabling.m"
            {
#line 93 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 93 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_51_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 93 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_51_51, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_21));
#line 93 "add_pragma_tabling.m"
            }
#line 93 "add_pragma_tabling.m"
            {
#line 93 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__DescPieces_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 93 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__DescPieces_135, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_51_51));
#line 93 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__DescPieces_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[41])));
#line 93 "add_pragma_tabling.m"
            }
#line 96 "add_pragma_tabling.m"
            {
#line 96 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_59_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 96 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_59_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 96 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_59_59, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__PredName_17));
#line 96 "add_pragma_tabling.m"
            }
#line 94 "add_pragma_tabling.m"
            {
#line 94 "add_pragma_tabling.m"
              hlds__make_hlds__add_pred__preds_add_implicit_report_error_14_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_46, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_68_68, hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleName_134, hlds__make_hlds__add_pragma__add_pragma_tabling__PredName_17, hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_18, (MR_Integer) 0, hlds__make_hlds__add_pragma__add_pragma_tabling__Status_10, (MR_Integer) 0, hlds__make_hlds__add_pragma__add_pragma_tabling__Context_9, hlds__make_hlds__add_pragma__add_pragma_tabling__V_59_59, hlds__make_hlds__add_pragma__add_pragma_tabling__DescPieces_135, &hlds__make_hlds__add_pragma__add_pragma_tabling__PredId_136, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_48, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_71_71);
            }
#line 97 "add_pragma_tabling.m"
            {
#line 97 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 97 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds_28, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__PredId_136));
#line 97 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 97 "add_pragma_tabling.m"
            }
#line 91 "add_pragma_tabling.m"
          }
#line 98 "add_pragma_tabling.m"
        else
#line 99 "add_pragma_tabling.m"
          {
#line 100 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds_28 = hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds0_140;
#line 99 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_68_68 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_46;
#line 99 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_71_71 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_48;
#line 99 "add_pragma_tabling.m"
          }
#line 87 "add_pragma_tabling.m"
      }
#line 86 "add_pragma_tabling.m"
    else
#line 66 "add_pragma_tabling.m"
      {
#line 66 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredOrFunc_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__MaybePredOrFunc_19, (MR_Integer) 0)));
#line 66 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds0_24;

#line 72 "add_pragma_tabling.m"
        {
#line 72 "add_pragma_tabling.m"
          hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__PredicateTable0_20, (MR_Integer) 0, hlds__make_hlds__add_pragma__add_pragma_tabling__PredOrFunc_23, hlds__make_hlds__add_pragma__add_pragma_tabling__PredName_17, hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_18, &hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds0_24);
        }
#line 82 "add_pragma_tabling.m"
        if ((hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds0_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 75 "add_pragma_tabling.m"
          {
#line 75 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleName_25;
#line 75 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__DescPieces_26;
#line 75 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredId_27;
#line 75 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_63_63;
#line 75 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_70_70;

#line 76 "add_pragma_tabling.m"
            {
#line 76 "add_pragma_tabling.m"
              hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_46, &hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleName_25);
            }
#line 77 "add_pragma_tabling.m"
            {
#line 77 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_63_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 77 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_63_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 77 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_63_63, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_21));
#line 77 "add_pragma_tabling.m"
            }
#line 77 "add_pragma_tabling.m"
            {
#line 77 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__DescPieces_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 77 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__DescPieces_26, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_63_63));
#line 77 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__DescPieces_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[41])));
#line 77 "add_pragma_tabling.m"
            }
#line 80 "add_pragma_tabling.m"
            {
#line 80 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_70_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 80 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_70_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 80 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_70_70, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__PredName_17));
#line 80 "add_pragma_tabling.m"
            }
#line 78 "add_pragma_tabling.m"
            {
#line 78 "add_pragma_tabling.m"
              hlds__make_hlds__add_pred__preds_add_implicit_report_error_14_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_46, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_68_68, hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleName_25, hlds__make_hlds__add_pragma__add_pragma_tabling__PredName_17, hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_18, hlds__make_hlds__add_pragma__add_pragma_tabling__PredOrFunc_23, hlds__make_hlds__add_pragma__add_pragma_tabling__Status_10, (MR_Integer) 0, hlds__make_hlds__add_pragma__add_pragma_tabling__Context_9, hlds__make_hlds__add_pragma__add_pragma_tabling__V_70_70, hlds__make_hlds__add_pragma__add_pragma_tabling__DescPieces_26, &hlds__make_hlds__add_pragma__add_pragma_tabling__PredId_27, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_48, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_71_71);
            }
#line 81 "add_pragma_tabling.m"
            {
#line 81 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 81 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds_28, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__PredId_27));
#line 81 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 81 "add_pragma_tabling.m"
            }
#line 75 "add_pragma_tabling.m"
          }
#line 82 "add_pragma_tabling.m"
        else
#line 83 "add_pragma_tabling.m"
          {
#line 84 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds_28 = hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds0_24;
#line 83 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_68_68 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_46;
#line 83 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_71_71 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_48;
#line 83 "add_pragma_tabling.m"
          }
#line 66 "add_pragma_tabling.m"
      }
#line 140 "add_pragma_tabling.m"
    if ((hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeAttributes_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 141 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_129_129 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_71_71;
#line 140 "add_pragma_tabling.m"
    else
#line 104 "add_pragma_tabling.m"
      {
#line 104 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Attributes_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeAttributes_16, (MR_Integer) 0)));
#line 104 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Statistics_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Attributes_33, (MR_Integer) 2)));
#line 104 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__AllowReset_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Attributes_33, (MR_Integer) 3)));
#line 104 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds_28, (MR_Integer) 1)));
#line 105 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Attributes_33, (MR_Integer) 0)));
#line 105 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Attributes_33, (MR_Integer) 1)));
#line 108 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds_28, (MR_Integer) 0)));

#line 109 "add_pragma_tabling.m"
        if ((hlds__make_hlds__add_pragma__add_pragma_tabling__V_158_158 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 108 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_129_129 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_71_71;
#line 109 "add_pragma_tabling.m"
        else
#line 110 "add_pragma_tabling.m"
          {
#line 110 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_101_101;

#line 122 "add_pragma_tabling.m"
            if ((hlds__make_hlds__add_pragma__add_pragma_tabling__Statistics_34 == (MR_Integer) 1))
#line 123 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_101_101 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_71_71;
#line 122 "add_pragma_tabling.m"
            else
#line 112 "add_pragma_tabling.m"
              {
#line 112 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__StatsPieces_40;
#line 112 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__StatsMsg_41;
#line 112 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__StatsSpec_42;
#line 112 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_76_76;
#line 112 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_79_79;
#line 112 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_80_80;
#line 112 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_81_81;
#line 112 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_94_94;
#line 112 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_95_95;
#line 112 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_99_99;

#line 115 "add_pragma_tabling.m"
                {
#line 115 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 115 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_81_81, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__PredName_17));
#line 115 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_81_81, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_18));
#line 115 "add_pragma_tabling.m"
                }
#line 115 "add_pragma_tabling.m"
                {
#line 115 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_80_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 115 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_80_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 115 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_80_80, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_81_81));
#line 115 "add_pragma_tabling.m"
                }
#line 115 "add_pragma_tabling.m"
                {
#line 115 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 115 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_79_79, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_80_80));
#line 115 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[7])));
#line 115 "add_pragma_tabling.m"
                }
#line 114 "add_pragma_tabling.m"
                {
#line 114 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 114 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_76_76, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[43])));
#line 114 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_76_76, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_79_79));
#line 114 "add_pragma_tabling.m"
                }
#line 113 "add_pragma_tabling.m"
                {
#line 113 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__StatsPieces_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 113 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsPieces_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[42])));
#line 113 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsPieces_40, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_76_76));
#line 113 "add_pragma_tabling.m"
                }
#line 118 "add_pragma_tabling.m"
                {
#line 118 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 118 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_95_95, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__StatsPieces_40));
#line 118 "add_pragma_tabling.m"
                }
#line 118 "add_pragma_tabling.m"
                {
#line 118 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 118 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_94_94, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_95_95));
#line 118 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_94_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 118 "add_pragma_tabling.m"
                }
#line 118 "add_pragma_tabling.m"
                {
#line 118 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__StatsMsg_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 118 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsMsg_41, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Context_9));
#line 118 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsMsg_41, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_94_94));
#line 118 "add_pragma_tabling.m"
                }
#line 120 "add_pragma_tabling.m"
                {
#line 120 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 120 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_99_99, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__StatsMsg_41));
#line 120 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 120 "add_pragma_tabling.m"
                }
#line 119 "add_pragma_tabling.m"
                {
#line 119 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__StatsSpec_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 119 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsSpec_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 119 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsSpec_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 119 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsSpec_42, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_99_99));
#line 119 "add_pragma_tabling.m"
                }
#line 121 "add_pragma_tabling.m"
                {
#line 121 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 121 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_101_101, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__StatsSpec_42));
#line 121 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_101_101, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_71_71));
#line 121 "add_pragma_tabling.m"
                }
#line 112 "add_pragma_tabling.m"
              }
#line 136 "add_pragma_tabling.m"
            if ((hlds__make_hlds__add_pragma__add_pragma_tabling__AllowReset_35 == (MR_Integer) 0))
#line 126 "add_pragma_tabling.m"
              {
#line 126 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ResetPieces_43;
#line 126 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ResetMsg_44;
#line 126 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ResetSpec_45;
#line 126 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_104_104;
#line 126 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_107_107;
#line 126 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_108_108;
#line 126 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_109_109;
#line 126 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_122_122;
#line 126 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_123_123;
#line 126 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_127_127;

#line 129 "add_pragma_tabling.m"
                {
#line 129 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_109_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 129 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_109_109, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__PredName_17));
#line 129 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_109_109, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_18));
#line 129 "add_pragma_tabling.m"
                }
#line 129 "add_pragma_tabling.m"
                {
#line 129 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_108_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 129 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_108_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 129 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_108_108, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_109_109));
#line 129 "add_pragma_tabling.m"
                }
#line 129 "add_pragma_tabling.m"
                {
#line 129 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 129 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_107_107, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_108_108));
#line 129 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_107_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[10])));
#line 129 "add_pragma_tabling.m"
                }
#line 128 "add_pragma_tabling.m"
                {
#line 128 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 128 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_104_104, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[43])));
#line 128 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_104_104, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_107_107));
#line 128 "add_pragma_tabling.m"
                }
#line 127 "add_pragma_tabling.m"
                {
#line 127 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__ResetPieces_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 127 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__ResetPieces_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[44])));
#line 127 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__ResetPieces_43, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_104_104));
#line 127 "add_pragma_tabling.m"
                }
#line 132 "add_pragma_tabling.m"
                {
#line 132 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_123_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 132 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_123_123, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__ResetPieces_43));
#line 132 "add_pragma_tabling.m"
                }
#line 132 "add_pragma_tabling.m"
                {
#line 132 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 132 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_122_122, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_123_123));
#line 132 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_122_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 132 "add_pragma_tabling.m"
                }
#line 132 "add_pragma_tabling.m"
                {
#line 132 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__ResetMsg_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 132 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ResetMsg_44, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Context_9));
#line 132 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ResetMsg_44, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_122_122));
#line 132 "add_pragma_tabling.m"
                }
#line 134 "add_pragma_tabling.m"
                {
#line 134 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 134 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_127_127, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__ResetMsg_44));
#line 134 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_127_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 134 "add_pragma_tabling.m"
                }
#line 133 "add_pragma_tabling.m"
                {
#line 133 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__ResetSpec_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 133 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ResetSpec_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 133 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ResetSpec_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 133 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ResetSpec_45, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_127_127));
#line 133 "add_pragma_tabling.m"
                }
#line 135 "add_pragma_tabling.m"
                {
#line 135 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 135 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_129_129, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__ResetSpec_45));
#line 135 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_129_129, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_101_101));
#line 135 "add_pragma_tabling.m"
                }
#line 126 "add_pragma_tabling.m"
              }
#line 136 "add_pragma_tabling.m"
            else
#line 137 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_129_129 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_101_101;
#line 110 "add_pragma_tabling.m"
          }
#line 104 "add_pragma_tabling.m"
      }
#line 144 "add_pragma_tabling.m"
    {
#line 144 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_131_131 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 144 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_131_131, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_3[0]));
#line 144 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_131_131, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__module_add_pragma_tabled_7_p_0_1));
#line 144 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_131_131, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 144 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_131_131, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_13));
#line 144 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_131_131, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__PredName_17));
#line 144 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_131_131, 5) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_18));
#line 144 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_131_131, 6) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__MaybePredOrFunc_19));
#line 144 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_131_131, 7) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeModes_15));
#line 144 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_131_131, 8) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeAttributes_16));
#line 144 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_131_131, 9) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Context_9));
#line 144 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_131_131, 10) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Status_10));
#line 144 "add_pragma_tabling.m"
    }
#line 143 "add_pragma_tabling.m"
    {
#line 143 "add_pragma_tabling.m"
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[0], hlds__make_hlds__add_pragma__add_pragma_tabling__V_131_131, hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds_28, ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_68_68)), &hlds__make_hlds__add_pragma__add_pragma_tabling__conv3_STATE_VARIABLE_ModuleInfo_47, ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_129_129)), &hlds__make_hlds__add_pragma__add_pragma_tabling__conv2_STATE_VARIABLE_Specs_49);
    }
#line 143 "add_pragma_tabling.m"
    *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_47 = ((MR_Word) hlds__make_hlds__add_pragma__add_pragma_tabling__conv3_STATE_VARIABLE_ModuleInfo_47);
#line 143 "add_pragma_tabling.m"
    *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_49 = ((MR_Word) hlds__make_hlds__add_pragma__add_pragma_tabling__conv2_STATE_VARIABLE_Specs_49);
#line 59 "add_pragma_tabling.m"
  }
#line 19 "add_pragma_tabling.m"
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
