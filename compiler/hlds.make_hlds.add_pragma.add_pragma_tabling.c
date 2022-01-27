/*
** Automatically generated from `add_pragma_tabling.m'
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
#include "integer.mih"
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
#include "hlds.vartypes.mih"
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
#include "parse_tree.file_kind.mih"
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
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
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
#include "hlds.make_hlds.make_hlds_warn.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "ll_backend.llds_out.llds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "hlds.make_hlds.add_pragma.add_foreign_enum.mih"
#include "hlds.make_hlds.add_pragma.add_pragma_type_spec.mih"




#line 182 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_tabling__maybe__pti_maybe_1__plain_mdbcomp__prim_data__type_ctor_info_pred_or_func_0;

#line 185 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_tabling__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0;

#line 188 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_tabling__maybe__pti_maybe_1__plain_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0;

#line 191 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_tabling__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_table_attributes_0;

#line 194 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_tabling__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 636 "add_pragma_tabling.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__IntroducedFrom__pred__table_info_c_global_var_name__636__1_2_p_0(
#line 636 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Target_10,
#line 636 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__2_28);

#line 711 "add_pragma_tabling.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__check_pred_args_against_tabling_4_p_0(
#line 711 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1,
#line 711 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleInfo_2,
#line 711 "add_pragma_tabling.m"
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum_3,
#line 711 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__4_4);

#line 669 "add_pragma_tabling.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__check_pred_args_against_tabling_methods_5_p_0(
#line 669 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1,
#line 669 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__2_2,
#line 669 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleInfo_3,
#line 669 "add_pragma_tabling.m"
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum_4,
#line 669 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__5_5);

#line 636 "add_pragma_tabling.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__table_info_c_global_var_name_3_f_0_1(
#line 636 "add_pragma_tabling.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling__closure_arg);

#line 630 "add_pragma_tabling.m"
static MR_String MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__table_info_c_global_var_name_3_f_0(
#line 630 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleInfo_5,
#line 630 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_6,
#line 630 "add_pragma_tabling.m"
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_7);

#line 591 "add_pragma_tabling.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__tabling_reset_pred_name_3_f_0(
#line 591 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_5,
#line 591 "add_pragma_tabling.m"
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_6,
#line 591 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_7);

#line 585 "add_pragma_tabling.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__tabling_stats_pred_name_3_f_0(
#line 585 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_5,
#line 585 "add_pragma_tabling.m"
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_6,
#line 585 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_7);

#line 520 "add_pragma_tabling.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__create_tabling_reset_pred_13_p_0(
#line 520 "add_pragma_tabling.m"
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_14,
#line 520 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Context_15,
#line 520 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_16,
#line 520 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_17,
#line 520 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Status_18,
#line 520 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_0_49,
#line 520 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_50,
#line 520 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_51,
#line 520 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_52,
#line 520 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0_53,
#line 520 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_54,
#line 520 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_55,
#line 520 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_56);

#line 435 "add_pragma_tabling.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__create_tabling_statistics_pred_13_p_0(
#line 435 "add_pragma_tabling.m"
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_14,
#line 435 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Context_15,
#line 435 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_16,
#line 435 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_17,
#line 435 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Status_18,
#line 435 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_0_60,
#line 435 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_61,
#line 435 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_62,
#line 435 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_63,
#line 435 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0_64,
#line 435 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_65,
#line 435 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_66,
#line 435 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_67);

#line 323 "add_pragma_tabling.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__set_eval_method_create_aux_preds_16_p_0(
#line 323 "add_pragma_tabling.m"
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_17,
#line 323 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ProcInfo0_18,
#line 323 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Context_19,
#line 323 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_20,
#line 323 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_21,
#line 323 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_22,
#line 323 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeAttributes_23,
#line 323 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Status_24,
#line 323 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_0_48,
#line 323 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_49,
#line 323 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_50,
#line 323 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_51,
#line 323 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0_52,
#line 323 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_53,
#line 323 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_54,
#line 323 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_55);

#line 304 "add_pragma_tabling.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__set_eval_method_create_aux_preds_list_15_p_0(
#line 304 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1,
#line 304 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Context_2,
#line 304 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_3,
#line 304 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_4,
#line 304 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_5,
#line 304 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeAttributes_6,
#line 304 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Status_7,
#line 304 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_0_8,
#line 304 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_9,
#line 304 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_10,
#line 304 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_11,
#line 304 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0_12,
#line 304 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_13,
#line 304 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_14,
#line 304 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_15);

#line 151 "add_pragma_tabling.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__module_add_pragma_tabled_for_pred_15_p_0(
#line 151 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod0_16,
#line 151 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredName_17,
#line 151 "add_pragma_tabling.m"
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__Arity0_18,
#line 151 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MaybePredOrFunc_19,
#line 151 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeModes_20,
#line 151 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeAttributes_21,
#line 151 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Context_22,
#line 151 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Status_23,
#line 151 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredId_24,
#line 151 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_65,
#line 151 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_66,
#line 151 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0_67,
#line 151 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_68,
#line 151 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_69,
#line 151 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_70);

#line 147 "add_pragma_tabling.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__module_add_pragma_tabled_9_p_0_1(
#line 147 "add_pragma_tabling.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling__closure_arg,
#line 147 "add_pragma_tabling.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling__wrapper_arg_1,
#line 147 "add_pragma_tabling.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling__wrapper_arg_2,
#line 147 "add_pragma_tabling.m"
  MR_Box * hlds__make_hlds__add_pragma__add_pragma_tabling__wrapper_arg_3,
#line 147 "add_pragma_tabling.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling__wrapper_arg_4,
#line 147 "add_pragma_tabling.m"
  MR_Box * hlds__make_hlds__add_pragma__add_pragma_tabling__wrapper_arg_5,
#line 147 "add_pragma_tabling.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling__wrapper_arg_6,
#line 147 "add_pragma_tabling.m"
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
    ((MR_Box) ((MR_String) "pragmas specified."))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[1])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Only one kind of tabling pragma may be applied to it."))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[1])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[36])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "which has no declared modes."))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[1])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[6]))),
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
    ((MR_Box) ((MR_String) "has duplicate"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "has both"))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error in"))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
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
    ((MR_Box) (&parse_tree__status__parse_tree__status__type_ctor_info_import_status_0)),
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



#line 846 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_tabling__maybe__pti_maybe_1__plain_mdbcomp__prim_data__type_ctor_info_pred_or_func_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0
  }
};

#line 854 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_tabling__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0
  }
};

#line 862 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_tabling__maybe__pti_maybe_1__plain_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__add_pragma__add_pragma_tabling__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0
  }
};

#line 870 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_tabling__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_table_attributes_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_table_attributes_0
  }
};

#line 878 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_tabling__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 636 "add_pragma_tabling.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__IntroducedFrom__pred__table_info_c_global_var_name__636__1_2_p_0(
#line 636 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Target_10,
#line 636 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__2_28)
#line 636 "add_pragma_tabling.m"
{
#line 636 "add_pragma_tabling.m"
  {
#line 636 "add_pragma_tabling.m"
    MR_bool hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded = (hlds__make_hlds__add_pragma__add_pragma_tabling__Target_10 == hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__2_28);

#line 636 "add_pragma_tabling.m"
    return hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded;
#line 636 "add_pragma_tabling.m"
  }
#line 636 "add_pragma_tabling.m"
}

#line 711 "add_pragma_tabling.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__check_pred_args_against_tabling_4_p_0(
#line 711 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1,
#line 711 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleInfo_2,
#line 711 "add_pragma_tabling.m"
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum_3,
#line 711 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__4_4)
#line 711 "add_pragma_tabling.m"
{
#line 714 "add_pragma_tabling.m"
  while (MR_TRUE)
#line 714 "add_pragma_tabling.m"
    {
#line 714 "add_pragma_tabling.m"
      /* tailcall optimized into a loop */
#line 714 "add_pragma_tabling.m"
      {
#line 714 "add_pragma_tabling.m"
        MR_bool hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded;

#line 714 "add_pragma_tabling.m"
        if ((hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 714 "add_pragma_tabling.m"
          *hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 714 "add_pragma_tabling.m"
        else
#line 716 "add_pragma_tabling.m"
          {
#line 716 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Mode_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1, (MR_Integer) 0)));
#line 716 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Modes_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1, (MR_Integer) 1)));

#line 717 "add_pragma_tabling.m"
            {
#line 717 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded = check_hlds__mode_util__mode_is_fully_input_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleInfo_2, hlds__make_hlds__add_pragma__add_pragma_tabling__Mode_7);
            }
#line 720 "add_pragma_tabling.m"
            if (hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded)
#line 718 "add_pragma_tabling.m"
              {
#line 718 "add_pragma_tabling.m"
                MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__V_12_12 = (hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum_3 + (MR_Integer) 1);

#line 718 "add_pragma_tabling.m"
                /* direct tailcall eliminated */
#line 718 "add_pragma_tabling.m"
                {
#line 718 "add_pragma_tabling.m"
                  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1__tmp_copy_1 = hlds__make_hlds__add_pragma__add_pragma_tabling__Modes_8;
#line 718 "add_pragma_tabling.m"
                  MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum__tmp_copy_3 = hlds__make_hlds__add_pragma__add_pragma_tabling__V_12_12;

#line 718 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum_3 = hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum__tmp_copy_3;
#line 718 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1 = hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1__tmp_copy_1;
#line 718 "add_pragma_tabling.m"
                }
#line 718 "add_pragma_tabling.m"
                continue;
#line 718 "add_pragma_tabling.m"
              }
#line 720 "add_pragma_tabling.m"
            else
#line 723 "add_pragma_tabling.m"
              {
#line 720 "add_pragma_tabling.m"
                {
#line 720 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded = check_hlds__mode_util__mode_is_fully_output_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleInfo_2, hlds__make_hlds__add_pragma__add_pragma_tabling__Mode_7);
                }
#line 723 "add_pragma_tabling.m"
                if (hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded)
#line 721 "add_pragma_tabling.m"
                  {
#line 721 "add_pragma_tabling.m"
                    MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__V_14_14 = (hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum_3 + (MR_Integer) 1);

#line 721 "add_pragma_tabling.m"
                    /* direct tailcall eliminated */
#line 721 "add_pragma_tabling.m"
                    {
#line 721 "add_pragma_tabling.m"
                      MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1__tmp_copy_1 = hlds__make_hlds__add_pragma__add_pragma_tabling__Modes_8;
#line 721 "add_pragma_tabling.m"
                      MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum__tmp_copy_3 = hlds__make_hlds__add_pragma__add_pragma_tabling__V_14_14;

#line 721 "add_pragma_tabling.m"
                      hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum_3 = hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum__tmp_copy_3;
#line 721 "add_pragma_tabling.m"
                      hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1 = hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1__tmp_copy_1;
#line 721 "add_pragma_tabling.m"
                    }
#line 721 "add_pragma_tabling.m"
                    continue;
#line 721 "add_pragma_tabling.m"
                  }
#line 723 "add_pragma_tabling.m"
                else
#line 724 "add_pragma_tabling.m"
                  {
#line 724 "add_pragma_tabling.m"
                    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_16_16;
#line 724 "add_pragma_tabling.m"
                    MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_17_17;
#line 724 "add_pragma_tabling.m"
                    MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_19_19;

#line 724 "add_pragma_tabling.m"
                    {
#line 724 "add_pragma_tabling.m"
                      hlds__make_hlds__add_pragma__add_pragma_tabling__V_19_19 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum_3);
                    }
#line 724 "add_pragma_tabling.m"
                    {
#line 724 "add_pragma_tabling.m"
                      hlds__make_hlds__add_pragma__add_pragma_tabling__V_17_17 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", hlds__make_hlds__add_pragma__add_pragma_tabling__V_19_19);
                    }
#line 724 "add_pragma_tabling.m"
                    {
#line 724 "add_pragma_tabling.m"
                      hlds__make_hlds__add_pragma__add_pragma_tabling__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 724 "add_pragma_tabling.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_16_16, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_17_17));
#line 724 "add_pragma_tabling.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_16_16, 1) = ((MR_Box) ((MR_String) "is neither input or output."));
#line 724 "add_pragma_tabling.m"
                    }
#line 724 "add_pragma_tabling.m"
                    {
#line 724 "add_pragma_tabling.m"
                      MR_Word base;
#line 724 "add_pragma_tabling.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 724 "add_pragma_tabling.m"
                      *hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__4_4 = base;
#line 724 "add_pragma_tabling.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_16_16));
#line 724 "add_pragma_tabling.m"
                    }
#line 724 "add_pragma_tabling.m"
                  }
#line 723 "add_pragma_tabling.m"
              }
#line 716 "add_pragma_tabling.m"
          }
#line 714 "add_pragma_tabling.m"
      }
#line 714 "add_pragma_tabling.m"
      break;
#line 714 "add_pragma_tabling.m"
    }
#line 711 "add_pragma_tabling.m"
}

#line 669 "add_pragma_tabling.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__check_pred_args_against_tabling_methods_5_p_0(
#line 669 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1,
#line 669 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__2_2,
#line 669 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleInfo_3,
#line 669 "add_pragma_tabling.m"
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum_4,
#line 669 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__5_5)
#line 669 "add_pragma_tabling.m"
{
#line 673 "add_pragma_tabling.m"
  while (MR_TRUE)
#line 673 "add_pragma_tabling.m"
    {
#line 673 "add_pragma_tabling.m"
      /* tailcall optimized into a loop */
#line 673 "add_pragma_tabling.m"
      {
#line 673 "add_pragma_tabling.m"
        MR_bool hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded;

#line 673 "add_pragma_tabling.m"
        if ((hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 673 "add_pragma_tabling.m"
          if ((hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 673 "add_pragma_tabling.m"
            *hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 673 "add_pragma_tabling.m"
          else
#line 674 "add_pragma_tabling.m"
            {
#line 675 "add_pragma_tabling.m"
              *hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_3[5]);
#line 674 "add_pragma_tabling.m"
            }
#line 673 "add_pragma_tabling.m"
        else
#line 673 "add_pragma_tabling.m"
          {
#line 673 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1, (MR_Integer) 1)));
#line 673 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1, (MR_Integer) 0)));

#line 673 "add_pragma_tabling.m"
            if ((hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 676 "add_pragma_tabling.m"
              {
#line 677 "add_pragma_tabling.m"
                *hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_3[6]);
#line 676 "add_pragma_tabling.m"
              }
#line 673 "add_pragma_tabling.m"
            else
#line 679 "add_pragma_tabling.m"
              {
#line 679 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeArgMethod_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__2_2, (MR_Integer) 0)));
#line 679 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeArgMethods_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__2_2, (MR_Integer) 1)));

#line 682 "add_pragma_tabling.m"
                {
#line 682 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded = check_hlds__mode_util__mode_is_fully_input_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleInfo_3, hlds__make_hlds__add_pragma__add_pragma_tabling__V_67_67);
                }
#line 694 "add_pragma_tabling.m"
                if (hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded)
#line 687 "add_pragma_tabling.m"
                  if ((hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeArgMethod_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 688 "add_pragma_tabling.m"
                    {
#line 688 "add_pragma_tabling.m"
                      MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_33_33;
#line 688 "add_pragma_tabling.m"
                      MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_34_34;
#line 688 "add_pragma_tabling.m"
                      MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_36_36;
#line 688 "add_pragma_tabling.m"
                      MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_37_37;
#line 688 "add_pragma_tabling.m"
                      MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_39_39;
#line 688 "add_pragma_tabling.m"
                      MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_41_41;
#line 688 "add_pragma_tabling.m"
                      MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_42_42;

#line 689 "add_pragma_tabling.m"
                      {
#line 689 "add_pragma_tabling.m"
                        hlds__make_hlds__add_pragma__add_pragma_tabling__V_37_37 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum_4);
                      }
#line 689 "add_pragma_tabling.m"
                      {
#line 689 "add_pragma_tabling.m"
                        hlds__make_hlds__add_pragma__add_pragma_tabling__V_36_36 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__V_37_37, (MR_String) ":");
                      }
#line 689 "add_pragma_tabling.m"
                      {
#line 689 "add_pragma_tabling.m"
                        hlds__make_hlds__add_pragma__add_pragma_tabling__V_34_34 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", hlds__make_hlds__add_pragma__add_pragma_tabling__V_36_36);
                      }
#line 691 "add_pragma_tabling.m"
                      {
#line 691 "add_pragma_tabling.m"
                        hlds__make_hlds__add_pragma__add_pragma_tabling__V_42_42 = parse_tree__prog_out__maybe_arg_tabling_method_to_string_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeArgMethod_26);
                      }
#line 691 "add_pragma_tabling.m"
                      {
#line 691 "add_pragma_tabling.m"
                        hlds__make_hlds__add_pragma__add_pragma_tabling__V_41_41 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__V_42_42, (MR_String) "\' is not compatible with input modes.");
                      }
#line 690 "add_pragma_tabling.m"
                      {
#line 690 "add_pragma_tabling.m"
                        hlds__make_hlds__add_pragma__add_pragma_tabling__V_39_39 = mercury__string__f_43_43_2_f_0((MR_String) "argument tabling method \140", hlds__make_hlds__add_pragma__add_pragma_tabling__V_41_41);
                      }
#line 689 "add_pragma_tabling.m"
                      {
#line 689 "add_pragma_tabling.m"
                        hlds__make_hlds__add_pragma__add_pragma_tabling__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 689 "add_pragma_tabling.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_33_33, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_34_34));
#line 689 "add_pragma_tabling.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_33_33, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_39_39));
#line 689 "add_pragma_tabling.m"
                      }
#line 689 "add_pragma_tabling.m"
                      {
#line 689 "add_pragma_tabling.m"
                        MR_Word base;
#line 689 "add_pragma_tabling.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 689 "add_pragma_tabling.m"
                        *hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__5_5 = base;
#line 689 "add_pragma_tabling.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_33_33));
#line 689 "add_pragma_tabling.m"
                      }
#line 688 "add_pragma_tabling.m"
                    }
#line 687 "add_pragma_tabling.m"
                  else
#line 684 "add_pragma_tabling.m"
                    {
#line 684 "add_pragma_tabling.m"
                      MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__V_44_44 = (hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum_4 + (MR_Integer) 1);

#line 685 "add_pragma_tabling.m"
                      /* direct tailcall eliminated */
#line 685 "add_pragma_tabling.m"
                      {
#line 685 "add_pragma_tabling.m"
                        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1__tmp_copy_1 = hlds__make_hlds__add_pragma__add_pragma_tabling__V_66_66;
#line 685 "add_pragma_tabling.m"
                        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__2__tmp_copy_2 = hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeArgMethods_27;
#line 685 "add_pragma_tabling.m"
                        MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum__tmp_copy_4 = hlds__make_hlds__add_pragma__add_pragma_tabling__V_44_44;

#line 685 "add_pragma_tabling.m"
                        hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum_4 = hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum__tmp_copy_4;
#line 685 "add_pragma_tabling.m"
                        hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__2_2 = hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__2__tmp_copy_2;
#line 685 "add_pragma_tabling.m"
                        hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1 = hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1__tmp_copy_1;
#line 685 "add_pragma_tabling.m"
                      }
#line 685 "add_pragma_tabling.m"
                      continue;
#line 684 "add_pragma_tabling.m"
                    }
#line 694 "add_pragma_tabling.m"
                else
#line 706 "add_pragma_tabling.m"
                  {
#line 694 "add_pragma_tabling.m"
                    {
#line 694 "add_pragma_tabling.m"
                      hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded = check_hlds__mode_util__mode_is_fully_output_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleInfo_3, hlds__make_hlds__add_pragma__add_pragma_tabling__V_67_67);
                    }
#line 706 "add_pragma_tabling.m"
                    if (hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded)
#line 701 "add_pragma_tabling.m"
                      if ((hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeArgMethod_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 702 "add_pragma_tabling.m"
                        {
#line 702 "add_pragma_tabling.m"
                          MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__V_46_46 = (hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum_4 + (MR_Integer) 1);

#line 703 "add_pragma_tabling.m"
                          /* direct tailcall eliminated */
#line 703 "add_pragma_tabling.m"
                          {
#line 703 "add_pragma_tabling.m"
                            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1__tmp_copy_1 = hlds__make_hlds__add_pragma__add_pragma_tabling__V_66_66;
#line 703 "add_pragma_tabling.m"
                            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__2__tmp_copy_2 = hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeArgMethods_27;
#line 703 "add_pragma_tabling.m"
                            MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum__tmp_copy_4 = hlds__make_hlds__add_pragma__add_pragma_tabling__V_46_46;

#line 703 "add_pragma_tabling.m"
                            hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum_4 = hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum__tmp_copy_4;
#line 703 "add_pragma_tabling.m"
                            hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__2_2 = hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__2__tmp_copy_2;
#line 703 "add_pragma_tabling.m"
                            hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1 = hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1__tmp_copy_1;
#line 703 "add_pragma_tabling.m"
                          }
#line 703 "add_pragma_tabling.m"
                          continue;
#line 702 "add_pragma_tabling.m"
                        }
#line 701 "add_pragma_tabling.m"
                      else
#line 696 "add_pragma_tabling.m"
                        {
#line 696 "add_pragma_tabling.m"
                          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_48_48;
#line 696 "add_pragma_tabling.m"
                          MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_49_49;
#line 696 "add_pragma_tabling.m"
                          MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_51_51;
#line 696 "add_pragma_tabling.m"
                          MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_52_52;
#line 696 "add_pragma_tabling.m"
                          MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_54_54;
#line 696 "add_pragma_tabling.m"
                          MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_56_56;
#line 696 "add_pragma_tabling.m"
                          MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_57_57;

#line 697 "add_pragma_tabling.m"
                          {
#line 697 "add_pragma_tabling.m"
                            hlds__make_hlds__add_pragma__add_pragma_tabling__V_52_52 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum_4);
                          }
#line 697 "add_pragma_tabling.m"
                          {
#line 697 "add_pragma_tabling.m"
                            hlds__make_hlds__add_pragma__add_pragma_tabling__V_51_51 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__V_52_52, (MR_String) ":");
                          }
#line 697 "add_pragma_tabling.m"
                          {
#line 697 "add_pragma_tabling.m"
                            hlds__make_hlds__add_pragma__add_pragma_tabling__V_49_49 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", hlds__make_hlds__add_pragma__add_pragma_tabling__V_51_51);
                          }
#line 699 "add_pragma_tabling.m"
                          {
#line 699 "add_pragma_tabling.m"
                            hlds__make_hlds__add_pragma__add_pragma_tabling__V_57_57 = parse_tree__prog_out__maybe_arg_tabling_method_to_string_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeArgMethod_26);
                          }
#line 699 "add_pragma_tabling.m"
                          {
#line 699 "add_pragma_tabling.m"
                            hlds__make_hlds__add_pragma__add_pragma_tabling__V_56_56 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__V_57_57, (MR_String) "\' is not compatible with output modes.");
                          }
#line 698 "add_pragma_tabling.m"
                          {
#line 698 "add_pragma_tabling.m"
                            hlds__make_hlds__add_pragma__add_pragma_tabling__V_54_54 = mercury__string__f_43_43_2_f_0((MR_String) "argument tabling method \140", hlds__make_hlds__add_pragma__add_pragma_tabling__V_56_56);
                          }
#line 697 "add_pragma_tabling.m"
                          {
#line 697 "add_pragma_tabling.m"
                            hlds__make_hlds__add_pragma__add_pragma_tabling__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 697 "add_pragma_tabling.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_48_48, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_49_49));
#line 697 "add_pragma_tabling.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_48_48, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_54_54));
#line 697 "add_pragma_tabling.m"
                          }
#line 697 "add_pragma_tabling.m"
                          {
#line 697 "add_pragma_tabling.m"
                            MR_Word base;
#line 697 "add_pragma_tabling.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 697 "add_pragma_tabling.m"
                            *hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__5_5 = base;
#line 697 "add_pragma_tabling.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_48_48));
#line 697 "add_pragma_tabling.m"
                          }
#line 696 "add_pragma_tabling.m"
                        }
#line 706 "add_pragma_tabling.m"
                    else
#line 707 "add_pragma_tabling.m"
                      {
#line 707 "add_pragma_tabling.m"
                        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_59_59;
#line 707 "add_pragma_tabling.m"
                        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_60_60;
#line 707 "add_pragma_tabling.m"
                        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_62_62;
#line 707 "add_pragma_tabling.m"
                        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_63_63;

#line 707 "add_pragma_tabling.m"
                        {
#line 707 "add_pragma_tabling.m"
                          hlds__make_hlds__add_pragma__add_pragma_tabling__V_63_63 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ArgNum_4);
                        }
#line 707 "add_pragma_tabling.m"
                        {
#line 707 "add_pragma_tabling.m"
                          hlds__make_hlds__add_pragma__add_pragma_tabling__V_62_62 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__V_63_63, (MR_String) ":");
                        }
#line 707 "add_pragma_tabling.m"
                        {
#line 707 "add_pragma_tabling.m"
                          hlds__make_hlds__add_pragma__add_pragma_tabling__V_60_60 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", hlds__make_hlds__add_pragma__add_pragma_tabling__V_62_62);
                        }
#line 707 "add_pragma_tabling.m"
                        {
#line 707 "add_pragma_tabling.m"
                          hlds__make_hlds__add_pragma__add_pragma_tabling__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 707 "add_pragma_tabling.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_59_59, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_60_60));
#line 707 "add_pragma_tabling.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_59_59, 1) = ((MR_Box) ((MR_String) "is neither input or output."));
#line 707 "add_pragma_tabling.m"
                        }
#line 707 "add_pragma_tabling.m"
                        {
#line 707 "add_pragma_tabling.m"
                          MR_Word base;
#line 707 "add_pragma_tabling.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 707 "add_pragma_tabling.m"
                          *hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__5_5 = base;
#line 707 "add_pragma_tabling.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_59_59));
#line 707 "add_pragma_tabling.m"
                        }
#line 707 "add_pragma_tabling.m"
                      }
#line 706 "add_pragma_tabling.m"
                  }
#line 679 "add_pragma_tabling.m"
              }
#line 673 "add_pragma_tabling.m"
          }
#line 673 "add_pragma_tabling.m"
      }
#line 673 "add_pragma_tabling.m"
      break;
#line 673 "add_pragma_tabling.m"
    }
#line 669 "add_pragma_tabling.m"
}

#line 636 "add_pragma_tabling.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__table_info_c_global_var_name_3_f_0_1(
#line 636 "add_pragma_tabling.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling__closure_arg)
#line 636 "add_pragma_tabling.m"
{
#line 636 "add_pragma_tabling.m"
  {
#line 636 "add_pragma_tabling.m"
    MR_bool hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded;
#line 636 "add_pragma_tabling.m"
    MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling__closure = hlds__make_hlds__add_pragma__add_pragma_tabling__closure_arg;

#line 636 "add_pragma_tabling.m"
    {
#line 636 "add_pragma_tabling.m"
      return hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded = hlds__make_hlds__add_pragma__add_pragma_tabling__IntroducedFrom__pred__table_info_c_global_var_name__636__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__closure, (MR_Integer) 4))));
    }
#line 636 "add_pragma_tabling.m"
    return hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded;
#line 636 "add_pragma_tabling.m"
  }
#line 636 "add_pragma_tabling.m"
}

#line 630 "add_pragma_tabling.m"
static MR_String MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__table_info_c_global_var_name_3_f_0(
#line 630 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleInfo_5,
#line 630 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_6,
#line 630 "add_pragma_tabling.m"
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_7)
#line 630 "add_pragma_tabling.m"
{
#line 633 "add_pragma_tabling.m"
  {
#line 633 "add_pragma_tabling.m"
    MR_bool hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded;
#line 633 "add_pragma_tabling.m"
    MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__VarName_8;
#line 633 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Globals_9;
#line 633 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Target_10;
#line 633 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HighLevelCode_11;
#line 633 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleName_12;
#line 633 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredOrFunc_13;
#line 633 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredSymName_14;
#line 633 "add_pragma_tabling.m"
    MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_15;
#line 633 "add_pragma_tabling.m"
    MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__PredName_16;
#line 633 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_24_24;

#line 634 "add_pragma_tabling.m"
    {
#line 634 "add_pragma_tabling.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleInfo_5, &hlds__make_hlds__add_pragma__add_pragma_tabling__Globals_9);
    }
#line 635 "add_pragma_tabling.m"
    {
#line 635 "add_pragma_tabling.m"
      libs__globals__get_target_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__Globals_9, &hlds__make_hlds__add_pragma__add_pragma_tabling__Target_10);
    }
#line 636 "add_pragma_tabling.m"
    {
#line 636 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 636 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_24_24, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_4[0]));
#line 636 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_24_24, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__table_info_c_global_var_name_3_f_0_1));
#line 636 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 636 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_24_24, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Target_10));
#line 636 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_24_24, 4) = ((MR_Box) ((MR_Integer) 0));
#line 636 "add_pragma_tabling.m"
    }
#line 636 "add_pragma_tabling.m"
    {
#line 636 "add_pragma_tabling.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__V_24_24, (MR_String) "hlds.make_hlds.add_pragma.add_pragma_tabling", (MR_String) "function \140hlds.make_hlds.add_pragma.add_pragma_tabling.table_info_c_global_var_name\'/3", (MR_String) "memo table statistics and reset are supported only for C");
    }
#line 638 "add_pragma_tabling.m"
    {
#line 638 "add_pragma_tabling.m"
      libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__Globals_9, (MR_Integer) 255, &hlds__make_hlds__add_pragma__add_pragma_tabling__HighLevelCode_11);
    }
#line 639 "add_pragma_tabling.m"
    {
#line 639 "add_pragma_tabling.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleInfo_5, &hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleName_12);
    }
#line 640 "add_pragma_tabling.m"
    hlds__make_hlds__add_pragma__add_pragma_tabling__PredOrFunc_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_6, (MR_Integer) 0)));
#line 640 "add_pragma_tabling.m"
    hlds__make_hlds__add_pragma__add_pragma_tabling__PredSymName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_6, (MR_Integer) 1)));
#line 640 "add_pragma_tabling.m"
    hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_6, (MR_Integer) 2)));
#line 641 "add_pragma_tabling.m"
    {
#line 641 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__PredName_16 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__PredSymName_14);
    }
#line 656 "add_pragma_tabling.m"
#line 656 "add_pragma_tabling.m"
    switch (hlds__make_hlds__add_pragma__add_pragma_tabling__HighLevelCode_11) {
#line 656 "add_pragma_tabling.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 656 "add_pragma_tabling.m"
      case (MR_Integer) 0:
#line 657 "add_pragma_tabling.m"
        {
#line 657 "add_pragma_tabling.m"
          MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ProcIdInt_22;
#line 657 "add_pragma_tabling.m"
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ProcLabel_23;

#line 658 "add_pragma_tabling.m"
          {
#line 658 "add_pragma_tabling.m"
            hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_7, &hlds__make_hlds__add_pragma__add_pragma_tabling__ProcIdInt_22);
          }
#line 659 "add_pragma_tabling.m"
          {
#line 659 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__ProcLabel_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 659 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ProcLabel_23, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleName_12));
#line 659 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ProcLabel_23, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__PredOrFunc_13));
#line 659 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ProcLabel_23, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleName_12));
#line 659 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ProcLabel_23, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__PredName_16));
#line 659 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ProcLabel_23, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_15));
#line 659 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ProcLabel_23, 5) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__ProcIdInt_22));
#line 659 "add_pragma_tabling.m"
          }
#line 667 "add_pragma_tabling.m"
          {
#line 667 "add_pragma_tabling.m"
            return hlds__make_hlds__add_pragma__add_pragma_tabling__VarName_8 = ll_backend__rtti_out__tabling_struct_data_addr_string_2_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ProcLabel_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
#line 657 "add_pragma_tabling.m"
        }
#line 656 "add_pragma_tabling.m"
        break;
#line 656 "add_pragma_tabling.m"
      case (MR_Integer) 1:
#line 643 "add_pragma_tabling.m"
        {
#line 643 "add_pragma_tabling.m"
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MLDS_PredLabel_20;
#line 643 "add_pragma_tabling.m"
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MLDS_ProcLabel_21;
#line 643 "add_pragma_tabling.m"
          MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_31_31;
#line 643 "add_pragma_tabling.m"
          MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_32_32;
#line 643 "add_pragma_tabling.m"
          MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_34_34;

#line 651 "add_pragma_tabling.m"
          {
#line 651 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__MLDS_PredLabel_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 651 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__MLDS_PredLabel_20, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__PredOrFunc_13));
#line 651 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__MLDS_PredLabel_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 651 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__MLDS_PredLabel_20, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__PredName_16));
#line 651 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__MLDS_PredLabel_20, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_15));
#line 651 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__MLDS_PredLabel_20, 4) = ((MR_Box) ((MR_Integer) 0));
#line 651 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__MLDS_PredLabel_20, 5) = ((MR_Box) ((MR_Integer) 0));
#line 651 "add_pragma_tabling.m"
          }
#line 653 "add_pragma_tabling.m"
          {
#line 653 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__MLDS_ProcLabel_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 653 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__MLDS_ProcLabel_21, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__MLDS_PredLabel_20));
#line 653 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__MLDS_ProcLabel_21, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_7));
#line 653 "add_pragma_tabling.m"
          }
#line 654 "add_pragma_tabling.m"
          {
#line 654 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__V_31_31 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleName_12);
          }
#line 655 "add_pragma_tabling.m"
          {
#line 655 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__V_34_34 = ml_backend__mlds_to_c__mlds_tabling_data_name_2_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__MLDS_ProcLabel_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
#line 654 "add_pragma_tabling.m"
          {
#line 654 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__V_32_32 = mercury__string__f_43_43_2_f_0((MR_String) "__", hlds__make_hlds__add_pragma__add_pragma_tabling__V_34_34);
          }
#line 654 "add_pragma_tabling.m"
          {
#line 654 "add_pragma_tabling.m"
            return hlds__make_hlds__add_pragma__add_pragma_tabling__VarName_8 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__V_31_31, hlds__make_hlds__add_pragma__add_pragma_tabling__V_32_32);
          }
#line 643 "add_pragma_tabling.m"
        }
#line 656 "add_pragma_tabling.m"
        break;
#line 656 "add_pragma_tabling.m"
    }
#line 633 "add_pragma_tabling.m"
    return hlds__make_hlds__add_pragma__add_pragma_tabling__VarName_8;
#line 633 "add_pragma_tabling.m"
  }
#line 630 "add_pragma_tabling.m"
}

#line 591 "add_pragma_tabling.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__tabling_reset_pred_name_3_f_0(
#line 591 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_5,
#line 591 "add_pragma_tabling.m"
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_6,
#line 591 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_7)
#line 591 "add_pragma_tabling.m"
{
#line 593 "add_pragma_tabling.m"
  {
#line 593 "add_pragma_tabling.m"
    MR_bool hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded;
#line 593 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__4_4;
#line 593 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PorF_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_5, (MR_Integer) 0)));
#line 593 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SymName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_5, (MR_Integer) 1)));
#line 593 "add_pragma_tabling.m"
    MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__Arity0_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_5, (MR_Integer) 2)));
#line 593 "add_pragma_tabling.m"
    MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_17;
#line 593 "add_pragma_tabling.m"
    MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_28_28;
#line 593 "add_pragma_tabling.m"
    MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_30_30;

#line 603 "add_pragma_tabling.m"
#line 603 "add_pragma_tabling.m"
    switch (hlds__make_hlds__add_pragma__add_pragma_tabling__PorF_14) {
#line 603 "add_pragma_tabling.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 603 "add_pragma_tabling.m"
      case (MR_Integer) 1:
#line 604 "add_pragma_tabling.m"
        {
#line 605 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_17 = (hlds__make_hlds__add_pragma__add_pragma_tabling__Arity0_16 - (MR_Integer) 1);
#line 604 "add_pragma_tabling.m"
        }
#line 603 "add_pragma_tabling.m"
        break;
#line 603 "add_pragma_tabling.m"
      case (MR_Integer) 0:
#line 602 "add_pragma_tabling.m"
        hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_17 = hlds__make_hlds__add_pragma__add_pragma_tabling__Arity0_16;
#line 603 "add_pragma_tabling.m"
        break;
#line 603 "add_pragma_tabling.m"
    }
#line 614 "add_pragma_tabling.m"
    {
#line 614 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_30_30 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_17);
    }
#line 614 "add_pragma_tabling.m"
    {
#line 614 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_28_28 = mercury__string__f_43_43_2_f_0((MR_String) "_", hlds__make_hlds__add_pragma__add_pragma_tabling__V_30_30);
    }
#line 1724 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_pragma_tabling__SymName_15)) == (MR_mktag((MR_Integer) 1))))
#line 1726 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
      {
#line 1728 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__Name_19 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__SymName_15, (MR_Integer) 1)));
#line 1730 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__NewName0_21;
#line 1732 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__NewName_22;
#line 1734 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleNameAgain_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__SymName_15, (MR_Integer) 0)));
#line 1736 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_25_25;
#line 1738 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_27_27;

#line 614 "add_pragma_tabling.m"
        {
#line 614 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_27_27 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__Name_19, hlds__make_hlds__add_pragma__add_pragma_tabling__V_28_28);
        }
#line 614 "add_pragma_tabling.m"
        {
#line 614 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_25_25 = mercury__string__f_43_43_2_f_0((MR_String) "_", hlds__make_hlds__add_pragma__add_pragma_tabling__V_27_27);
        }
#line 614 "add_pragma_tabling.m"
        {
#line 614 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__NewName0_21 = mercury__string__f_43_43_2_f_0((MR_String) "table_reset_for", hlds__make_hlds__add_pragma__add_pragma_tabling__V_25_25);
        }
#line 618 "add_pragma_tabling.m"
#line 618 "add_pragma_tabling.m"
        switch (hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_7) {
#line 618 "add_pragma_tabling.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 618 "add_pragma_tabling.m"
          case (MR_Integer) 0:
#line 619 "add_pragma_tabling.m"
            {
#line 619 "add_pragma_tabling.m"
              MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_31_31;
#line 619 "add_pragma_tabling.m"
              MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_33_33;
#line 619 "add_pragma_tabling.m"
              MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__V_34_34;

#line 620 "add_pragma_tabling.m"
              {
#line 620 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__V_34_34 = hlds__hlds_pred__proc_id_to_int_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_6);
              }
#line 620 "add_pragma_tabling.m"
              {
#line 620 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__V_33_33 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__V_34_34);
              }
#line 620 "add_pragma_tabling.m"
              {
#line 620 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__V_31_31 = mercury__string__f_43_43_2_f_0((MR_String) "_", hlds__make_hlds__add_pragma__add_pragma_tabling__V_33_33);
              }
#line 620 "add_pragma_tabling.m"
              {
#line 620 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__NewName_22 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__NewName0_21, hlds__make_hlds__add_pragma__add_pragma_tabling__V_31_31);
              }
#line 619 "add_pragma_tabling.m"
            }
#line 618 "add_pragma_tabling.m"
            break;
#line 618 "add_pragma_tabling.m"
          case (MR_Integer) 1:
#line 617 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__NewName_22 = hlds__make_hlds__add_pragma__add_pragma_tabling__NewName0_21;
#line 618 "add_pragma_tabling.m"
            break;
#line 618 "add_pragma_tabling.m"
        }
#line 624 "add_pragma_tabling.m"
        {
#line 624 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 624 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__4_4, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleNameAgain_23));
#line 624 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__4_4, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__NewName_22));
#line 624 "add_pragma_tabling.m"
        }
#line 1814 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
      }
#line 1816 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
    else
#line 1818 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
      {
#line 1820 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__Name_44 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__SymName_15, (MR_Integer) 0)));
#line 1822 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__NewName0_46;
#line 1824 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__NewName_47;
#line 1826 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_48_48;
#line 1828 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_49_49;

#line 614 "add_pragma_tabling.m"
        {
#line 614 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_49_49 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__Name_44, hlds__make_hlds__add_pragma__add_pragma_tabling__V_28_28);
        }
#line 614 "add_pragma_tabling.m"
        {
#line 614 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_48_48 = mercury__string__f_43_43_2_f_0((MR_String) "_", hlds__make_hlds__add_pragma__add_pragma_tabling__V_49_49);
        }
#line 614 "add_pragma_tabling.m"
        {
#line 614 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__NewName0_46 = mercury__string__f_43_43_2_f_0((MR_String) "table_reset_for", hlds__make_hlds__add_pragma__add_pragma_tabling__V_48_48);
        }
#line 618 "add_pragma_tabling.m"
#line 618 "add_pragma_tabling.m"
        switch (hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_7) {
#line 618 "add_pragma_tabling.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 618 "add_pragma_tabling.m"
          case (MR_Integer) 0:
#line 619 "add_pragma_tabling.m"
            {
#line 619 "add_pragma_tabling.m"
              MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_36_36;
#line 619 "add_pragma_tabling.m"
              MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_38_38;
#line 619 "add_pragma_tabling.m"
              MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__V_39_39;

#line 620 "add_pragma_tabling.m"
              {
#line 620 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__V_39_39 = hlds__hlds_pred__proc_id_to_int_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_6);
              }
#line 620 "add_pragma_tabling.m"
              {
#line 620 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__V_38_38 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__V_39_39);
              }
#line 620 "add_pragma_tabling.m"
              {
#line 620 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__V_36_36 = mercury__string__f_43_43_2_f_0((MR_String) "_", hlds__make_hlds__add_pragma__add_pragma_tabling__V_38_38);
              }
#line 620 "add_pragma_tabling.m"
              {
#line 620 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__NewName_47 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__NewName0_46, hlds__make_hlds__add_pragma__add_pragma_tabling__V_36_36);
              }
#line 619 "add_pragma_tabling.m"
            }
#line 618 "add_pragma_tabling.m"
            break;
#line 618 "add_pragma_tabling.m"
          case (MR_Integer) 1:
#line 617 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__NewName_47 = hlds__make_hlds__add_pragma__add_pragma_tabling__NewName0_46;
#line 618 "add_pragma_tabling.m"
            break;
#line 618 "add_pragma_tabling.m"
        }
#line 627 "add_pragma_tabling.m"
        {
#line 627 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 627 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__4_4, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__NewName_47));
#line 627 "add_pragma_tabling.m"
        }
#line 1902 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
      }
#line 593 "add_pragma_tabling.m"
    return hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__4_4;
#line 593 "add_pragma_tabling.m"
  }
#line 591 "add_pragma_tabling.m"
}

#line 585 "add_pragma_tabling.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__tabling_stats_pred_name_3_f_0(
#line 585 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_5,
#line 585 "add_pragma_tabling.m"
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_6,
#line 585 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_7)
#line 585 "add_pragma_tabling.m"
{
#line 587 "add_pragma_tabling.m"
  {
#line 587 "add_pragma_tabling.m"
    MR_bool hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded;
#line 587 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__4_4;
#line 587 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PorF_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_5, (MR_Integer) 0)));
#line 587 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SymName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_5, (MR_Integer) 1)));
#line 587 "add_pragma_tabling.m"
    MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__Arity0_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_5, (MR_Integer) 2)));
#line 587 "add_pragma_tabling.m"
    MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_17;
#line 587 "add_pragma_tabling.m"
    MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_28_28;
#line 587 "add_pragma_tabling.m"
    MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_30_30;

#line 603 "add_pragma_tabling.m"
#line 603 "add_pragma_tabling.m"
    switch (hlds__make_hlds__add_pragma__add_pragma_tabling__PorF_14) {
#line 603 "add_pragma_tabling.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 603 "add_pragma_tabling.m"
      case (MR_Integer) 1:
#line 604 "add_pragma_tabling.m"
        {
#line 605 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_17 = (hlds__make_hlds__add_pragma__add_pragma_tabling__Arity0_16 - (MR_Integer) 1);
#line 604 "add_pragma_tabling.m"
        }
#line 603 "add_pragma_tabling.m"
        break;
#line 603 "add_pragma_tabling.m"
      case (MR_Integer) 0:
#line 602 "add_pragma_tabling.m"
        hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_17 = hlds__make_hlds__add_pragma__add_pragma_tabling__Arity0_16;
#line 603 "add_pragma_tabling.m"
        break;
#line 603 "add_pragma_tabling.m"
    }
#line 614 "add_pragma_tabling.m"
    {
#line 614 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_30_30 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_17);
    }
#line 614 "add_pragma_tabling.m"
    {
#line 614 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_28_28 = mercury__string__f_43_43_2_f_0((MR_String) "_", hlds__make_hlds__add_pragma__add_pragma_tabling__V_30_30);
    }
#line 1974 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_pragma_tabling__SymName_15)) == (MR_mktag((MR_Integer) 1))))
#line 1976 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
      {
#line 1978 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__Name_19 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__SymName_15, (MR_Integer) 1)));
#line 1980 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__NewName0_21;
#line 1982 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__NewName_22;
#line 1984 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleNameAgain_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__SymName_15, (MR_Integer) 0)));
#line 1986 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_25_25;
#line 1988 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_27_27;

#line 614 "add_pragma_tabling.m"
        {
#line 614 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_27_27 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__Name_19, hlds__make_hlds__add_pragma__add_pragma_tabling__V_28_28);
        }
#line 614 "add_pragma_tabling.m"
        {
#line 614 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_25_25 = mercury__string__f_43_43_2_f_0((MR_String) "_", hlds__make_hlds__add_pragma__add_pragma_tabling__V_27_27);
        }
#line 614 "add_pragma_tabling.m"
        {
#line 614 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__NewName0_21 = mercury__string__f_43_43_2_f_0((MR_String) "table_statistics_for", hlds__make_hlds__add_pragma__add_pragma_tabling__V_25_25);
        }
#line 618 "add_pragma_tabling.m"
#line 618 "add_pragma_tabling.m"
        switch (hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_7) {
#line 618 "add_pragma_tabling.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 618 "add_pragma_tabling.m"
          case (MR_Integer) 0:
#line 619 "add_pragma_tabling.m"
            {
#line 619 "add_pragma_tabling.m"
              MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_31_31;
#line 619 "add_pragma_tabling.m"
              MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_33_33;
#line 619 "add_pragma_tabling.m"
              MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__V_34_34;

#line 620 "add_pragma_tabling.m"
              {
#line 620 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__V_34_34 = hlds__hlds_pred__proc_id_to_int_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_6);
              }
#line 620 "add_pragma_tabling.m"
              {
#line 620 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__V_33_33 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__V_34_34);
              }
#line 620 "add_pragma_tabling.m"
              {
#line 620 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__V_31_31 = mercury__string__f_43_43_2_f_0((MR_String) "_", hlds__make_hlds__add_pragma__add_pragma_tabling__V_33_33);
              }
#line 620 "add_pragma_tabling.m"
              {
#line 620 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__NewName_22 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__NewName0_21, hlds__make_hlds__add_pragma__add_pragma_tabling__V_31_31);
              }
#line 619 "add_pragma_tabling.m"
            }
#line 618 "add_pragma_tabling.m"
            break;
#line 618 "add_pragma_tabling.m"
          case (MR_Integer) 1:
#line 617 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__NewName_22 = hlds__make_hlds__add_pragma__add_pragma_tabling__NewName0_21;
#line 618 "add_pragma_tabling.m"
            break;
#line 618 "add_pragma_tabling.m"
        }
#line 624 "add_pragma_tabling.m"
        {
#line 624 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 624 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__4_4, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleNameAgain_23));
#line 624 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__4_4, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__NewName_22));
#line 624 "add_pragma_tabling.m"
        }
#line 2064 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
      }
#line 2066 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
    else
#line 2068 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
      {
#line 2070 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__Name_44 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__SymName_15, (MR_Integer) 0)));
#line 2072 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__NewName0_46;
#line 2074 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__NewName_47;
#line 2076 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_48_48;
#line 2078 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_49_49;

#line 614 "add_pragma_tabling.m"
        {
#line 614 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_49_49 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__Name_44, hlds__make_hlds__add_pragma__add_pragma_tabling__V_28_28);
        }
#line 614 "add_pragma_tabling.m"
        {
#line 614 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_48_48 = mercury__string__f_43_43_2_f_0((MR_String) "_", hlds__make_hlds__add_pragma__add_pragma_tabling__V_49_49);
        }
#line 614 "add_pragma_tabling.m"
        {
#line 614 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__NewName0_46 = mercury__string__f_43_43_2_f_0((MR_String) "table_statistics_for", hlds__make_hlds__add_pragma__add_pragma_tabling__V_48_48);
        }
#line 618 "add_pragma_tabling.m"
#line 618 "add_pragma_tabling.m"
        switch (hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_7) {
#line 618 "add_pragma_tabling.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 618 "add_pragma_tabling.m"
          case (MR_Integer) 0:
#line 619 "add_pragma_tabling.m"
            {
#line 619 "add_pragma_tabling.m"
              MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_36_36;
#line 619 "add_pragma_tabling.m"
              MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_38_38;
#line 619 "add_pragma_tabling.m"
              MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__V_39_39;

#line 620 "add_pragma_tabling.m"
              {
#line 620 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__V_39_39 = hlds__hlds_pred__proc_id_to_int_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_6);
              }
#line 620 "add_pragma_tabling.m"
              {
#line 620 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__V_38_38 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__V_39_39);
              }
#line 620 "add_pragma_tabling.m"
              {
#line 620 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__V_36_36 = mercury__string__f_43_43_2_f_0((MR_String) "_", hlds__make_hlds__add_pragma__add_pragma_tabling__V_38_38);
              }
#line 620 "add_pragma_tabling.m"
              {
#line 620 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__NewName_47 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__NewName0_46, hlds__make_hlds__add_pragma__add_pragma_tabling__V_36_36);
              }
#line 619 "add_pragma_tabling.m"
            }
#line 618 "add_pragma_tabling.m"
            break;
#line 618 "add_pragma_tabling.m"
          case (MR_Integer) 1:
#line 617 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__NewName_47 = hlds__make_hlds__add_pragma__add_pragma_tabling__NewName0_46;
#line 618 "add_pragma_tabling.m"
            break;
#line 618 "add_pragma_tabling.m"
        }
#line 627 "add_pragma_tabling.m"
        {
#line 627 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 627 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__4_4, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__NewName_47));
#line 627 "add_pragma_tabling.m"
        }
#line 2152 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
      }
#line 587 "add_pragma_tabling.m"
    return hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__4_4;
#line 587 "add_pragma_tabling.m"
  }
#line 585 "add_pragma_tabling.m"
}

#line 520 "add_pragma_tabling.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__create_tabling_reset_pred_13_p_0(
#line 520 "add_pragma_tabling.m"
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_14,
#line 520 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Context_15,
#line 520 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_16,
#line 520 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_17,
#line 520 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Status_18,
#line 520 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_0_49,
#line 520 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_50,
#line 520 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_51,
#line 520 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_52,
#line 520 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0_53,
#line 520 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_54,
#line 520 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_55,
#line 520 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_56)
#line 520 "add_pragma_tabling.m"
{
#line 527 "add_pragma_tabling.m"
  {
#line 527 "add_pragma_tabling.m"
    MR_bool hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded;
#line 527 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_120_120;
#line 527 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg1_23;
#line 527 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg2_24;
#line 527 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArgs_25;
#line 527 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Origin_26;
#line 527 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__TypeVarSet_27;
#line 527 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__InstVarSet_28;
#line 527 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ResetPredSymName_30;
#line 527 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Markers_32;
#line 527 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ItemStatus0_33;
#line 527 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__IO0_37;
#line 527 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__IO_38;
#line 527 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Globals_39;
#line 527 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__IsTablingSupported_40;
#line 527 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_57_57;
#line 527 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_58_58;
#line 527 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_59_59;
#line 527 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_60_60;
#line 527 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_61_61;
#line 527 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_70_70;
#line 527 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_71_71;
#line 527 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_73_73;
#line 527 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_75_75;
#line 527 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_77_77;
#line 541 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_34_34;

#line 528 "add_pragma_tabling.m"
    {
#line 528 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_57_57 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
    }
#line 528 "add_pragma_tabling.m"
    {
#line 528 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_58_58 = parse_tree__prog_mode__di_mode_0_f_0();
    }
#line 528 "add_pragma_tabling.m"
    {
#line 528 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg1_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 528 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg1_23, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_57_57));
#line 528 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg1_23, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_58_58));
#line 528 "add_pragma_tabling.m"
    }
#line 529 "add_pragma_tabling.m"
    {
#line 529 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_59_59 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
    }
#line 529 "add_pragma_tabling.m"
    {
#line 529 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_60_60 = parse_tree__prog_mode__uo_mode_0_f_0();
    }
#line 529 "add_pragma_tabling.m"
    {
#line 529 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg2_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 529 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg2_24, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_59_59));
#line 529 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg2_24, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_60_60));
#line 529 "add_pragma_tabling.m"
    }
#line 530 "add_pragma_tabling.m"
    {
#line 530 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 530 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_61_61, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg2_24));
#line 530 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 530 "add_pragma_tabling.m"
    }
#line 530 "add_pragma_tabling.m"
    {
#line 530 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArgs_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 530 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArgs_25, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg1_23));
#line 530 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArgs_25, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_61_61));
#line 530 "add_pragma_tabling.m"
    }
#line 532 "add_pragma_tabling.m"
    {
#line 532 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__Origin_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 532 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__Origin_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 532 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__Origin_26, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_16));
#line 532 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__Origin_26, 2) = ((MR_Box) ((MR_Integer) 1));
#line 532 "add_pragma_tabling.m"
    }
#line 533 "add_pragma_tabling.m"
    {
#line 533 "add_pragma_tabling.m"
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &hlds__make_hlds__add_pragma__add_pragma_tabling__TypeVarSet_27);
    }
#line 534 "add_pragma_tabling.m"
    {
#line 534 "add_pragma_tabling.m"
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &hlds__make_hlds__add_pragma__add_pragma_tabling__InstVarSet_28);
    }
#line 536 "add_pragma_tabling.m"
    {
#line 536 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__ResetPredSymName_30 = hlds__make_hlds__add_pragma__add_pragma_tabling__tabling_reset_pred_name_3_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_16, hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_14, hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_17);
    }
#line 539 "add_pragma_tabling.m"
    {
#line 539 "add_pragma_tabling.m"
      hlds__hlds_pred__init_markers_1_p_0(&hlds__make_hlds__add_pragma__add_pragma_tabling__Markers_32);
    }
#line 540 "add_pragma_tabling.m"
    {
#line 540 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__ItemStatus0_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 540 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ItemStatus0_33, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Status_18));
#line 540 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ItemStatus0_33, 1) = ((MR_Box) ((MR_Integer) 1));
#line 540 "add_pragma_tabling.m"
    }
#line 541 "add_pragma_tabling.m"
    {
#line 541 "add_pragma_tabling.m"
      hlds__make_hlds__add_pred__module_add_pred_or_func_18_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__Origin_26, hlds__make_hlds__add_pragma__add_pragma_tabling__TypeVarSet_27, hlds__make_hlds__add_pragma__add_pragma_tabling__InstVarSet_28, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, hlds__make_hlds__add_pragma__add_pragma_tabling__ResetPredSymName_30, hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArgs_25, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_3[2]), (MR_Integer) 0, (MR_Word) &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[58], hlds__make_hlds__add_pragma__add_pragma_tabling__Markers_32, hlds__make_hlds__add_pragma__add_pragma_tabling__Context_15, hlds__make_hlds__add_pragma__add_pragma_tabling__ItemStatus0_33, &hlds__make_hlds__add_pragma__add_pragma_tabling__V_34_34, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_51, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_70_70, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_55, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_71_71);
    }
#line 2354 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
    hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_120_120 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 547 "add_pragma_tabling.m"
    {
#line 547 "add_pragma_tabling.m"
      mercury__varset__init_1_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_120_120, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_73_73);
    }
#line 548 "add_pragma_tabling.m"
    {
#line 548 "add_pragma_tabling.m"
      mercury__varset__new_named_var_4_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_120_120, (MR_String) "IO0", &hlds__make_hlds__add_pragma__add_pragma_tabling__IO0_37, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_73_73, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_75_75);
    }
#line 549 "add_pragma_tabling.m"
    {
#line 549 "add_pragma_tabling.m"
      mercury__varset__new_named_var_4_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_120_120, (MR_String) "IO", &hlds__make_hlds__add_pragma__add_pragma_tabling__IO_38, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_75_75, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_77_77);
    }
#line 551 "add_pragma_tabling.m"
    {
#line 551 "add_pragma_tabling.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_70_70, &hlds__make_hlds__add_pragma__add_pragma_tabling__Globals_39);
    }
#line 552 "add_pragma_tabling.m"
    {
#line 552 "add_pragma_tabling.m"
      libs__globals__current_grade_supports_tabling_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__Globals_39, &hlds__make_hlds__add_pragma__add_pragma_tabling__IsTablingSupported_40);
    }
#line 574 "add_pragma_tabling.m"
#line 574 "add_pragma_tabling.m"
    switch (hlds__make_hlds__add_pragma__add_pragma_tabling__IsTablingSupported_40) {
#line 574 "add_pragma_tabling.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 574 "add_pragma_tabling.m"
      case (MR_Integer) 0:
#line 575 "add_pragma_tabling.m"
        {
#line 575 "add_pragma_tabling.m"
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Args_47;
#line 575 "add_pragma_tabling.m"
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__BodyExpr_48;
#line 575 "add_pragma_tabling.m"
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_78_78;
#line 575 "add_pragma_tabling.m"
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_79_79;
#line 575 "add_pragma_tabling.m"
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_80_80;

#line 576 "add_pragma_tabling.m"
          {
#line 576 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 576 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_78_78, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__IO0_37));
#line 576 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_78_78, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Context_15));
#line 576 "add_pragma_tabling.m"
          }
#line 576 "add_pragma_tabling.m"
          {
#line 576 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 576 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_80_80, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__IO_38));
#line 576 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_80_80, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Context_15));
#line 576 "add_pragma_tabling.m"
          }
#line 576 "add_pragma_tabling.m"
          {
#line 576 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 576 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_79_79, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_80_80));
#line 576 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 576 "add_pragma_tabling.m"
          }
#line 576 "add_pragma_tabling.m"
          {
#line 576 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__Args_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 576 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__Args_47, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_78_78));
#line 576 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__Args_47, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_79_79));
#line 576 "add_pragma_tabling.m"
          }
#line 577 "add_pragma_tabling.m"
          {
#line 577 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__BodyExpr_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 577 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__BodyExpr_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 22));
#line 577 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__BodyExpr_48, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Context_15));
#line 577 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__BodyExpr_48, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_78_78));
#line 577 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__BodyExpr_48, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_80_80));
#line 577 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__BodyExpr_48, 4) = ((MR_Box) ((MR_Integer) 0));
#line 577 "add_pragma_tabling.m"
          }
#line 579 "add_pragma_tabling.m"
          {
#line 579 "add_pragma_tabling.m"
            hlds__make_hlds__add_clause__module_add_clause_15_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_77_77, (MR_Integer) 0, hlds__make_hlds__add_pragma__add_pragma_tabling__ResetPredSymName_30, hlds__make_hlds__add_pragma__add_pragma_tabling__Args_47, hlds__make_hlds__add_pragma__add_pragma_tabling__BodyExpr_48, hlds__make_hlds__add_pragma__add_pragma_tabling__Status_18, hlds__make_hlds__add_pragma__add_pragma_tabling__Context_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_70_70, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_52, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0_53, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_54, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_71_71, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_56);
          }
#line 575 "add_pragma_tabling.m"
        }
#line 574 "add_pragma_tabling.m"
        break;
#line 574 "add_pragma_tabling.m"
      case (MR_Integer) 1:
#line 554 "add_pragma_tabling.m"
        {
#line 554 "add_pragma_tabling.m"
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Arg1_41;
#line 554 "add_pragma_tabling.m"
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Arg2_42;
#line 554 "add_pragma_tabling.m"
          MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__GlobalVarName_43;
#line 554 "add_pragma_tabling.m"
          MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__ResetCode_44;
#line 554 "add_pragma_tabling.m"
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ResetImpl_45;
#line 554 "add_pragma_tabling.m"
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ResetPragmaFCInfo_46;
#line 554 "add_pragma_tabling.m"
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_92_92;
#line 554 "add_pragma_tabling.m"
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_95_95;
#line 554 "add_pragma_tabling.m"
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_97_97;
#line 554 "add_pragma_tabling.m"
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_100_100;
#line 554 "add_pragma_tabling.m"
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_102_102;
#line 554 "add_pragma_tabling.m"
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_104_104;
#line 554 "add_pragma_tabling.m"
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_106_106;
#line 554 "add_pragma_tabling.m"
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_109_109;
#line 554 "add_pragma_tabling.m"
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_111_111;
#line 554 "add_pragma_tabling.m"
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_112_112;

#line 555 "add_pragma_tabling.m"
          {
#line 555 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__V_92_92 = parse_tree__prog_mode__di_mode_0_f_0();
          }
#line 555 "add_pragma_tabling.m"
          {
#line 555 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__Arg1_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 555 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg1_41, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__IO0_37));
#line 555 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg1_41, 1) = ((MR_Box) ((MR_String) "_IO0"));
#line 555 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg1_41, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_92_92));
#line 555 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg1_41, 3) = ((MR_Box) ((MR_Integer) 1));
#line 555 "add_pragma_tabling.m"
          }
#line 556 "add_pragma_tabling.m"
          {
#line 556 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__V_95_95 = parse_tree__prog_mode__uo_mode_0_f_0();
          }
#line 556 "add_pragma_tabling.m"
          {
#line 556 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__Arg2_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 556 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg2_42, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__IO_38));
#line 556 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg2_42, 1) = ((MR_Box) ((MR_String) "_IO"));
#line 556 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg2_42, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_95_95));
#line 556 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg2_42, 3) = ((MR_Box) ((MR_Integer) 1));
#line 556 "add_pragma_tabling.m"
          }
#line 559 "add_pragma_tabling.m"
          {
#line 559 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_97_97 = parse_tree__prog_data__default_attributes_1_f_0((MR_Integer) 0);
          }
#line 560 "add_pragma_tabling.m"
          {
#line 560 "add_pragma_tabling.m"
            parse_tree__prog_data__set_may_call_mercury_3_p_0((MR_Integer) 1, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_97_97, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_100_100);
          }
#line 561 "add_pragma_tabling.m"
          {
#line 561 "add_pragma_tabling.m"
            parse_tree__prog_data__set_thread_safe_3_p_0((MR_Integer) 1, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_100_100, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_102_102);
          }
#line 562 "add_pragma_tabling.m"
          {
#line 562 "add_pragma_tabling.m"
            parse_tree__prog_data__set_purity_3_p_0((MR_Integer) 0, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_102_102, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_104_104);
          }
#line 563 "add_pragma_tabling.m"
          {
#line 563 "add_pragma_tabling.m"
            parse_tree__prog_data__set_may_duplicate_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_3[3]), hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_104_104, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_106_106);
          }
#line 565 "add_pragma_tabling.m"
          {
#line 565 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__GlobalVarName_43 = hlds__make_hlds__add_pragma__add_pragma_tabling__table_info_c_global_var_name_3_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_70_70, hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_16, hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_14);
          }
#line 567 "add_pragma_tabling.m"
          {
#line 567 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__ResetCode_44 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__GlobalVarName_43, (MR_String) ".MR_pt_tablenode.MR_integer = 0;");
          }
#line 568 "add_pragma_tabling.m"
          {
#line 568 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 568 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_109_109, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Context_15));
#line 568 "add_pragma_tabling.m"
          }
#line 568 "add_pragma_tabling.m"
          {
#line 568 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__ResetImpl_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 568 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ResetImpl_45, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__ResetCode_44));
#line 568 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ResetImpl_45, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_109_109));
#line 568 "add_pragma_tabling.m"
          }
#line 570 "add_pragma_tabling.m"
          {
#line 570 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 570 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_112_112, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Arg2_42));
#line 570 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_112_112, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 570 "add_pragma_tabling.m"
          }
#line 570 "add_pragma_tabling.m"
          {
#line 570 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 570 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_111_111, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Arg1_41));
#line 570 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_111_111, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_112_112));
#line 570 "add_pragma_tabling.m"
          }
#line 569 "add_pragma_tabling.m"
          {
#line 569 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__ResetPragmaFCInfo_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 569 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ResetPragmaFCInfo_46, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_106_106));
#line 569 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ResetPragmaFCInfo_46, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__ResetPredSymName_30));
#line 569 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ResetPragmaFCInfo_46, 2) = ((MR_Box) ((MR_Integer) 0));
#line 569 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ResetPragmaFCInfo_46, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_111_111));
#line 569 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ResetPragmaFCInfo_46, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_77_77));
#line 569 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ResetPragmaFCInfo_46, 5) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__InstVarSet_28));
#line 569 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ResetPragmaFCInfo_46, 6) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__ResetImpl_45));
#line 569 "add_pragma_tabling.m"
          }
#line 572 "add_pragma_tabling.m"
          {
#line 572 "add_pragma_tabling.m"
            hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ResetPragmaFCInfo_46, hlds__make_hlds__add_pragma__add_pragma_tabling__Status_18, hlds__make_hlds__add_pragma__add_pragma_tabling__Context_15, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_3[4]), hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_70_70, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_52, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_71_71, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_56);
          }
#line 554 "add_pragma_tabling.m"
          *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_54 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0_53;
#line 554 "add_pragma_tabling.m"
        }
#line 574 "add_pragma_tabling.m"
        break;
#line 574 "add_pragma_tabling.m"
    }
#line 527 "add_pragma_tabling.m"
    *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_50 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_0_49;
#line 527 "add_pragma_tabling.m"
  }
#line 520 "add_pragma_tabling.m"
}

#line 435 "add_pragma_tabling.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__create_tabling_statistics_pred_13_p_0(
#line 435 "add_pragma_tabling.m"
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_14,
#line 435 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Context_15,
#line 435 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_16,
#line 435 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_17,
#line 435 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Status_18,
#line 435 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_0_60,
#line 435 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_61,
#line 435 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_62,
#line 435 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_63,
#line 435 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0_64,
#line 435 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_65,
#line 435 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_66,
#line 435 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_67)
#line 435 "add_pragma_tabling.m"
{
#line 442 "add_pragma_tabling.m"
  {
#line 442 "add_pragma_tabling.m"
    MR_bool hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded;
#line 442 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_152_152;
#line 442 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__TableBuiltinModule_23;
#line 442 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__StatsTypeName_24;
#line 442 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__StatsType_25;
#line 442 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg1_26;
#line 442 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg2_27;
#line 442 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg3_28;
#line 442 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArgs_29;
#line 442 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Origin_30;
#line 442 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__TypeVarSet_31;
#line 442 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__InstVarSet_32;
#line 442 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__StatsPredSymName_34;
#line 442 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Markers_36;
#line 442 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ItemStatus0_37;
#line 442 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Stats_41;
#line 442 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__IO0_42;
#line 442 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__IO_43;
#line 442 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Globals_44;
#line 442 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__IsTablingSupported_45;
#line 442 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_71_71;
#line 442 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_72_72;
#line 442 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_73_73;
#line 442 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_74_74;
#line 442 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_75_75;
#line 442 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_76_76;
#line 442 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_77_77;
#line 442 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_86_86;
#line 442 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_87_87;
#line 442 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_89_89;
#line 442 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_91_91;
#line 442 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_93_93;
#line 442 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_95_95;
#line 460 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_38_38;

#line 443 "add_pragma_tabling.m"
    {
#line 443 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__TableBuiltinModule_23 = mdbcomp__builtin_modules__mercury_table_statistics_module_0_f_0();
    }
#line 444 "add_pragma_tabling.m"
    {
#line 444 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__StatsTypeName_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 444 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsTypeName_24, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__TableBuiltinModule_23));
#line 444 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsTypeName_24, 1) = ((MR_Box) ((MR_String) "proc_table_statistics"));
#line 444 "add_pragma_tabling.m"
    }
#line 445 "add_pragma_tabling.m"
    {
#line 445 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__StatsType_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 445 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsType_25, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__StatsTypeName_24));
#line 445 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsType_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 445 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsType_25, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 445 "add_pragma_tabling.m"
    }
#line 446 "add_pragma_tabling.m"
    {
#line 446 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_71_71 = parse_tree__prog_mode__out_mode_0_f_0();
    }
#line 446 "add_pragma_tabling.m"
    {
#line 446 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg1_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 446 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg1_26, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__StatsType_25));
#line 446 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg1_26, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_71_71));
#line 446 "add_pragma_tabling.m"
    }
#line 447 "add_pragma_tabling.m"
    {
#line 447 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_72_72 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
    }
#line 447 "add_pragma_tabling.m"
    {
#line 447 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_73_73 = parse_tree__prog_mode__di_mode_0_f_0();
    }
#line 447 "add_pragma_tabling.m"
    {
#line 447 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg2_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 447 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg2_27, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_72_72));
#line 447 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg2_27, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_73_73));
#line 447 "add_pragma_tabling.m"
    }
#line 448 "add_pragma_tabling.m"
    {
#line 448 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_74_74 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
    }
#line 448 "add_pragma_tabling.m"
    {
#line 448 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_75_75 = parse_tree__prog_mode__uo_mode_0_f_0();
    }
#line 448 "add_pragma_tabling.m"
    {
#line 448 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg3_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 448 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg3_28, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_74_74));
#line 448 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg3_28, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_75_75));
#line 448 "add_pragma_tabling.m"
    }
#line 449 "add_pragma_tabling.m"
    {
#line 449 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 449 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_77_77, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg3_28));
#line 449 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 449 "add_pragma_tabling.m"
    }
#line 449 "add_pragma_tabling.m"
    {
#line 449 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 449 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_76_76, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg2_27));
#line 449 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_76_76, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_77_77));
#line 449 "add_pragma_tabling.m"
    }
#line 449 "add_pragma_tabling.m"
    {
#line 449 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArgs_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 449 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArgs_29, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArg1_26));
#line 449 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArgs_29, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_76_76));
#line 449 "add_pragma_tabling.m"
    }
#line 451 "add_pragma_tabling.m"
    {
#line 451 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__Origin_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 451 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__Origin_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 451 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__Origin_30, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_16));
#line 451 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__Origin_30, 2) = ((MR_Box) ((MR_Integer) 0));
#line 451 "add_pragma_tabling.m"
    }
#line 452 "add_pragma_tabling.m"
    {
#line 452 "add_pragma_tabling.m"
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &hlds__make_hlds__add_pragma__add_pragma_tabling__TypeVarSet_31);
    }
#line 453 "add_pragma_tabling.m"
    {
#line 453 "add_pragma_tabling.m"
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &hlds__make_hlds__add_pragma__add_pragma_tabling__InstVarSet_32);
    }
#line 455 "add_pragma_tabling.m"
    {
#line 455 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__StatsPredSymName_34 = hlds__make_hlds__add_pragma__add_pragma_tabling__tabling_stats_pred_name_3_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_16, hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_14, hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_17);
    }
#line 458 "add_pragma_tabling.m"
    {
#line 458 "add_pragma_tabling.m"
      hlds__hlds_pred__init_markers_1_p_0(&hlds__make_hlds__add_pragma__add_pragma_tabling__Markers_36);
    }
#line 459 "add_pragma_tabling.m"
    {
#line 459 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__ItemStatus0_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 459 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ItemStatus0_37, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Status_18));
#line 459 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ItemStatus0_37, 1) = ((MR_Box) ((MR_Integer) 1));
#line 459 "add_pragma_tabling.m"
    }
#line 460 "add_pragma_tabling.m"
    {
#line 460 "add_pragma_tabling.m"
      hlds__make_hlds__add_pred__module_add_pred_or_func_18_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__Origin_30, hlds__make_hlds__add_pragma__add_pragma_tabling__TypeVarSet_31, hlds__make_hlds__add_pragma__add_pragma_tabling__InstVarSet_32, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, hlds__make_hlds__add_pragma__add_pragma_tabling__StatsPredSymName_34, hlds__make_hlds__add_pragma__add_pragma_tabling__TypeAndModeArgs_29, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_3[2]), (MR_Integer) 0, (MR_Word) &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[58], hlds__make_hlds__add_pragma__add_pragma_tabling__Markers_36, hlds__make_hlds__add_pragma__add_pragma_tabling__Context_15, hlds__make_hlds__add_pragma__add_pragma_tabling__ItemStatus0_37, &hlds__make_hlds__add_pragma__add_pragma_tabling__V_38_38, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_62, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_86_86, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_66, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_87_87);
    }
#line 2915 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
    hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_152_152 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 466 "add_pragma_tabling.m"
    {
#line 466 "add_pragma_tabling.m"
      mercury__varset__init_1_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_152_152, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_89_89);
    }
#line 467 "add_pragma_tabling.m"
    {
#line 467 "add_pragma_tabling.m"
      mercury__varset__new_named_var_4_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_152_152, (MR_String) "Stats", &hlds__make_hlds__add_pragma__add_pragma_tabling__Stats_41, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_89_89, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_91_91);
    }
#line 468 "add_pragma_tabling.m"
    {
#line 468 "add_pragma_tabling.m"
      mercury__varset__new_named_var_4_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_152_152, (MR_String) "IO0", &hlds__make_hlds__add_pragma__add_pragma_tabling__IO0_42, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_91_91, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_93_93);
    }
#line 469 "add_pragma_tabling.m"
    {
#line 469 "add_pragma_tabling.m"
      mercury__varset__new_named_var_4_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_152_152, (MR_String) "IO", &hlds__make_hlds__add_pragma__add_pragma_tabling__IO_43, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_93_93, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_95_95);
    }
#line 471 "add_pragma_tabling.m"
    {
#line 471 "add_pragma_tabling.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_86_86, &hlds__make_hlds__add_pragma__add_pragma_tabling__Globals_44);
    }
#line 472 "add_pragma_tabling.m"
    {
#line 472 "add_pragma_tabling.m"
      libs__globals__current_grade_supports_tabling_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__Globals_44, &hlds__make_hlds__add_pragma__add_pragma_tabling__IsTablingSupported_45);
    }
#line 498 "add_pragma_tabling.m"
#line 498 "add_pragma_tabling.m"
    switch (hlds__make_hlds__add_pragma__add_pragma_tabling__IsTablingSupported_45) {
#line 498 "add_pragma_tabling.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 498 "add_pragma_tabling.m"
      case (MR_Integer) 0:
#line 499 "add_pragma_tabling.m"
        {
#line 499 "add_pragma_tabling.m"
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__DummyStatsFuncSymName_53;
#line 499 "add_pragma_tabling.m"
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__DummyStatsFuncTerm_54;
#line 499 "add_pragma_tabling.m"
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Args_55;
#line 499 "add_pragma_tabling.m"
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__GetStatsExpr_56;
#line 499 "add_pragma_tabling.m"
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__UpdateIOExpr_57;
#line 499 "add_pragma_tabling.m"
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__GetStatsUpdateIOExpr_58;
#line 499 "add_pragma_tabling.m"
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__BodyExpr_59;
#line 499 "add_pragma_tabling.m"
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_96_96;
#line 499 "add_pragma_tabling.m"
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_99_99;
#line 499 "add_pragma_tabling.m"
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_100_100;
#line 499 "add_pragma_tabling.m"
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_101_101;
#line 499 "add_pragma_tabling.m"
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_102_102;
#line 499 "add_pragma_tabling.m"
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_103_103;

#line 500 "add_pragma_tabling.m"
          {
#line 500 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__V_96_96 = mdbcomp__builtin_modules__mercury_table_statistics_module_0_f_0();
          }
#line 500 "add_pragma_tabling.m"
          {
#line 500 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__DummyStatsFuncSymName_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 500 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__DummyStatsFuncSymName_53, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_96_96));
#line 500 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__DummyStatsFuncSymName_53, 1) = ((MR_Box) ((MR_String) "dummy_proc_table_statistics"));
#line 500 "add_pragma_tabling.m"
          }
#line 502 "add_pragma_tabling.m"
          {
#line 502 "add_pragma_tabling.m"
            mdbcomp__sym_name__sym_name_to_term_4_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_152_152, hlds__make_hlds__add_pragma__add_pragma_tabling__Context_15, hlds__make_hlds__add_pragma__add_pragma_tabling__DummyStatsFuncSymName_53, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__add_pragma__add_pragma_tabling__DummyStatsFuncTerm_54);
          }
#line 504 "add_pragma_tabling.m"
          {
#line 504 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 504 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_99_99, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Stats_41));
#line 504 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_99_99, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Context_15));
#line 504 "add_pragma_tabling.m"
          }
#line 505 "add_pragma_tabling.m"
          {
#line 505 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 505 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_101_101, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__IO0_42));
#line 505 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_101_101, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Context_15));
#line 505 "add_pragma_tabling.m"
          }
#line 505 "add_pragma_tabling.m"
          {
#line 505 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 505 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_103_103, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__IO_43));
#line 505 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_103_103, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Context_15));
#line 505 "add_pragma_tabling.m"
          }
#line 505 "add_pragma_tabling.m"
          {
#line 505 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 505 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_102_102, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_103_103));
#line 505 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_102_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 505 "add_pragma_tabling.m"
          }
#line 505 "add_pragma_tabling.m"
          {
#line 505 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 505 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_100_100, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_101_101));
#line 505 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_100_100, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_102_102));
#line 505 "add_pragma_tabling.m"
          }
#line 504 "add_pragma_tabling.m"
          {
#line 504 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__Args_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 504 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__Args_55, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_99_99));
#line 504 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__Args_55, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_100_100));
#line 504 "add_pragma_tabling.m"
          }
#line 506 "add_pragma_tabling.m"
          {
#line 506 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__GetStatsExpr_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 506 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__GetStatsExpr_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 22));
#line 506 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__GetStatsExpr_56, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Context_15));
#line 506 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__GetStatsExpr_56, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_99_99));
#line 506 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__GetStatsExpr_56, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__DummyStatsFuncTerm_54));
#line 506 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__GetStatsExpr_56, 4) = ((MR_Box) ((MR_Integer) 0));
#line 506 "add_pragma_tabling.m"
          }
#line 508 "add_pragma_tabling.m"
          {
#line 508 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__UpdateIOExpr_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 508 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__UpdateIOExpr_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 22));
#line 508 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__UpdateIOExpr_57, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Context_15));
#line 508 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__UpdateIOExpr_57, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_101_101));
#line 508 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__UpdateIOExpr_57, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_103_103));
#line 508 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__UpdateIOExpr_57, 4) = ((MR_Box) ((MR_Integer) 0));
#line 508 "add_pragma_tabling.m"
          }
#line 510 "add_pragma_tabling.m"
          {
#line 510 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__GetStatsUpdateIOExpr_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 510 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__GetStatsUpdateIOExpr_58, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Context_15));
#line 510 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__GetStatsUpdateIOExpr_58, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__GetStatsExpr_56));
#line 510 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__GetStatsUpdateIOExpr_58, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__UpdateIOExpr_57));
#line 510 "add_pragma_tabling.m"
          }
#line 512 "add_pragma_tabling.m"
          {
#line 512 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__BodyExpr_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 512 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__BodyExpr_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 512 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__BodyExpr_59, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Context_15));
#line 512 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__BodyExpr_59, 2) = ((MR_Box) ((MR_Integer) 0));
#line 512 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__BodyExpr_59, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__GetStatsUpdateIOExpr_58));
#line 512 "add_pragma_tabling.m"
          }
#line 514 "add_pragma_tabling.m"
          {
#line 514 "add_pragma_tabling.m"
            hlds__make_hlds__add_clause__module_add_clause_15_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_95_95, (MR_Integer) 0, hlds__make_hlds__add_pragma__add_pragma_tabling__StatsPredSymName_34, hlds__make_hlds__add_pragma__add_pragma_tabling__Args_55, hlds__make_hlds__add_pragma__add_pragma_tabling__BodyExpr_59, hlds__make_hlds__add_pragma__add_pragma_tabling__Status_18, hlds__make_hlds__add_pragma__add_pragma_tabling__Context_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_86_86, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_63, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0_64, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_65, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_87_87, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_67);
          }
#line 499 "add_pragma_tabling.m"
        }
#line 498 "add_pragma_tabling.m"
        break;
#line 498 "add_pragma_tabling.m"
      case (MR_Integer) 1:
#line 474 "add_pragma_tabling.m"
        {
#line 474 "add_pragma_tabling.m"
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Arg1_46;
#line 474 "add_pragma_tabling.m"
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Arg2_47;
#line 474 "add_pragma_tabling.m"
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Arg3_48;
#line 474 "add_pragma_tabling.m"
          MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__Global_49;
#line 474 "add_pragma_tabling.m"
          MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__StatsCode_50;
#line 474 "add_pragma_tabling.m"
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__StatsImpl_51;
#line 474 "add_pragma_tabling.m"
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__StatsPragmaFCInfo_52;
#line 474 "add_pragma_tabling.m"
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_118_118;
#line 474 "add_pragma_tabling.m"
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_121_121;
#line 474 "add_pragma_tabling.m"
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_124_124;
#line 474 "add_pragma_tabling.m"
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_126_126;
#line 474 "add_pragma_tabling.m"
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_129_129;
#line 474 "add_pragma_tabling.m"
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_131_131;
#line 474 "add_pragma_tabling.m"
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_133_133;
#line 474 "add_pragma_tabling.m"
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_135_135;
#line 474 "add_pragma_tabling.m"
          MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__V_138_138;
#line 474 "add_pragma_tabling.m"
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_140_140;
#line 474 "add_pragma_tabling.m"
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_142_142;
#line 474 "add_pragma_tabling.m"
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_143_143;
#line 474 "add_pragma_tabling.m"
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_144_144;

#line 475 "add_pragma_tabling.m"
          {
#line 475 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__V_118_118 = parse_tree__prog_mode__out_mode_0_f_0();
          }
#line 475 "add_pragma_tabling.m"
          {
#line 475 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__Arg1_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 475 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg1_46, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Stats_41));
#line 475 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg1_46, 1) = ((MR_Box) ((MR_String) "Stats"));
#line 475 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg1_46, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_118_118));
#line 475 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg1_46, 3) = ((MR_Box) ((MR_Integer) 1));
#line 475 "add_pragma_tabling.m"
          }
#line 476 "add_pragma_tabling.m"
          {
#line 476 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__V_121_121 = parse_tree__prog_mode__di_mode_0_f_0();
          }
#line 476 "add_pragma_tabling.m"
          {
#line 476 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__Arg2_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 476 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg2_47, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__IO0_42));
#line 476 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg2_47, 1) = ((MR_Box) ((MR_String) "_IO0"));
#line 476 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg2_47, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_121_121));
#line 476 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg2_47, 3) = ((MR_Box) ((MR_Integer) 1));
#line 476 "add_pragma_tabling.m"
          }
#line 477 "add_pragma_tabling.m"
          {
#line 477 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__V_124_124 = parse_tree__prog_mode__uo_mode_0_f_0();
          }
#line 477 "add_pragma_tabling.m"
          {
#line 477 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__Arg3_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 477 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg3_48, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__IO_43));
#line 477 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg3_48, 1) = ((MR_Box) ((MR_String) "_IO"));
#line 477 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg3_48, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_124_124));
#line 477 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Arg3_48, 3) = ((MR_Box) ((MR_Integer) 1));
#line 477 "add_pragma_tabling.m"
          }
#line 480 "add_pragma_tabling.m"
          {
#line 480 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_126_126 = parse_tree__prog_data__default_attributes_1_f_0((MR_Integer) 0);
          }
#line 484 "add_pragma_tabling.m"
          {
#line 484 "add_pragma_tabling.m"
            parse_tree__prog_data__set_may_call_mercury_3_p_0((MR_Integer) 0, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_126_126, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_129_129);
          }
#line 485 "add_pragma_tabling.m"
          {
#line 485 "add_pragma_tabling.m"
            parse_tree__prog_data__set_thread_safe_3_p_0((MR_Integer) 1, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_129_129, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_131_131);
          }
#line 486 "add_pragma_tabling.m"
          {
#line 486 "add_pragma_tabling.m"
            parse_tree__prog_data__set_purity_3_p_0((MR_Integer) 0, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_131_131, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_133_133);
          }
#line 487 "add_pragma_tabling.m"
          {
#line 487 "add_pragma_tabling.m"
            parse_tree__prog_data__set_may_duplicate_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_3[3]), hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_133_133, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_135_135);
          }
#line 489 "add_pragma_tabling.m"
          {
#line 489 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__Global_49 = hlds__make_hlds__add_pragma__add_pragma_tabling__table_info_c_global_var_name_3_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_86_86, hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_16, hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_14);
          }
#line 491 "add_pragma_tabling.m"
          {
#line 491 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__V_138_138 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__Global_49, (MR_String) ", &Stats);");
          }
#line 491 "add_pragma_tabling.m"
          {
#line 491 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__StatsCode_50 = mercury__string__f_43_43_2_f_0((MR_String) "MR_get_tabling_stats(&", hlds__make_hlds__add_pragma__add_pragma_tabling__V_138_138);
          }
#line 492 "add_pragma_tabling.m"
          {
#line 492 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 492 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_140_140, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Context_15));
#line 492 "add_pragma_tabling.m"
          }
#line 492 "add_pragma_tabling.m"
          {
#line 492 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__StatsImpl_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 492 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsImpl_51, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__StatsCode_50));
#line 492 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsImpl_51, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_140_140));
#line 492 "add_pragma_tabling.m"
          }
#line 494 "add_pragma_tabling.m"
          {
#line 494 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__V_144_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 494 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_144_144, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Arg3_48));
#line 494 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_144_144, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 494 "add_pragma_tabling.m"
          }
#line 494 "add_pragma_tabling.m"
          {
#line 494 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 494 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_143_143, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Arg2_47));
#line 494 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_143_143, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_144_144));
#line 494 "add_pragma_tabling.m"
          }
#line 494 "add_pragma_tabling.m"
          {
#line 494 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 494 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_142_142, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Arg1_46));
#line 494 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_142_142, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_143_143));
#line 494 "add_pragma_tabling.m"
          }
#line 493 "add_pragma_tabling.m"
          {
#line 493 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__StatsPragmaFCInfo_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 493 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsPragmaFCInfo_52, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Attrs_135_135));
#line 493 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsPragmaFCInfo_52, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__StatsPredSymName_34));
#line 493 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsPragmaFCInfo_52, 2) = ((MR_Box) ((MR_Integer) 0));
#line 493 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsPragmaFCInfo_52, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_142_142));
#line 493 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsPragmaFCInfo_52, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_VarSet_95_95));
#line 493 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsPragmaFCInfo_52, 5) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__InstVarSet_32));
#line 493 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsPragmaFCInfo_52, 6) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__StatsImpl_51));
#line 493 "add_pragma_tabling.m"
          }
#line 496 "add_pragma_tabling.m"
          {
#line 496 "add_pragma_tabling.m"
            hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__StatsPragmaFCInfo_52, hlds__make_hlds__add_pragma__add_pragma_tabling__Status_18, hlds__make_hlds__add_pragma__add_pragma_tabling__Context_15, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_3[4]), hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_86_86, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_63, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_87_87, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_67);
          }
#line 474 "add_pragma_tabling.m"
          *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_65 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0_64;
#line 474 "add_pragma_tabling.m"
        }
#line 498 "add_pragma_tabling.m"
        break;
#line 498 "add_pragma_tabling.m"
    }
#line 442 "add_pragma_tabling.m"
    *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_61 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_0_60;
#line 442 "add_pragma_tabling.m"
  }
#line 435 "add_pragma_tabling.m"
}

#line 323 "add_pragma_tabling.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__set_eval_method_create_aux_preds_16_p_0(
#line 323 "add_pragma_tabling.m"
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_17,
#line 323 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ProcInfo0_18,
#line 323 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Context_19,
#line 323 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_20,
#line 323 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_21,
#line 323 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_22,
#line 323 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeAttributes_23,
#line 323 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Status_24,
#line 323 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_0_48,
#line 323 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_49,
#line 323 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_50,
#line 323 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_51,
#line 323 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0_52,
#line 323 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_53,
#line 323 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_54,
#line 323 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_55)
#line 323 "add_pragma_tabling.m"
{
#line 332 "add_pragma_tabling.m"
  {
#line 332 "add_pragma_tabling.m"
    MR_bool hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded;
#line 332 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__OldEvalMethod_29;

#line 333 "add_pragma_tabling.m"
    {
#line 333 "add_pragma_tabling.m"
      hlds__hlds_pred__proc_info_get_eval_method_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ProcInfo0_18, &hlds__make_hlds__add_pragma__add_pragma_tabling__OldEvalMethod_29);
    }
#line 336 "add_pragma_tabling.m"
    hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded = (hlds__make_hlds__add_pragma__add_pragma_tabling__OldEvalMethod_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 336 "add_pragma_tabling.m"
    hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded = !(hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded);
#line 355 "add_pragma_tabling.m"
    if (hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded)
#line 339 "add_pragma_tabling.m"
      {
#line 339 "add_pragma_tabling.m"
        MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_30;
#line 339 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_31;
#line 339 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_33;
#line 339 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_34;
#line 339 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_94_94;
#line 339 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_95_95;
#line 339 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_99_99;

#line 339 "add_pragma_tabling.m"
        {
#line 339 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_30 = parse_tree__prog_out__eval_method_to_string_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_22);
        }
#line 340 "add_pragma_tabling.m"
        {
#line 340 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded = parse_tree__prog_data____Unify____eval_method_0_0(hlds__make_hlds__add_pragma__add_pragma_tabling__OldEvalMethod_29, hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_22);
        }
#line 344 "add_pragma_tabling.m"
        if (hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded)
#line 341 "add_pragma_tabling.m"
          {
#line 341 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_58_58;
#line 341 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_59_59;
#line 341 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_60_60;
#line 341 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_63_63;
#line 341 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_64_64;

#line 341 "add_pragma_tabling.m"
            {
#line 341 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_59_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 341 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_59_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 341 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_59_59, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_20));
#line 341 "add_pragma_tabling.m"
            }
#line 342 "add_pragma_tabling.m"
            {
#line 342 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_64_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 342 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pragma__add_pragma_tabling__V_64_64, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_30));
#line 342 "add_pragma_tabling.m"
            }
#line 342 "add_pragma_tabling.m"
            {
#line 342 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 342 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_63_63, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_64_64));
#line 342 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[34])));
#line 342 "add_pragma_tabling.m"
            }
#line 342 "add_pragma_tabling.m"
            {
#line 342 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 342 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_60_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[53])));
#line 342 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_60_60, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_63_63));
#line 342 "add_pragma_tabling.m"
            }
#line 341 "add_pragma_tabling.m"
            {
#line 341 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 341 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_58_58, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_59_59));
#line 341 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_58_58, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_60_60));
#line 341 "add_pragma_tabling.m"
            }
#line 341 "add_pragma_tabling.m"
            {
#line 341 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 341 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[51])));
#line 341 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_31, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_58_58));
#line 341 "add_pragma_tabling.m"
            }
#line 341 "add_pragma_tabling.m"
          }
#line 344 "add_pragma_tabling.m"
        else
#line 345 "add_pragma_tabling.m"
          {
#line 345 "add_pragma_tabling.m"
            MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__OldEvalMethodStr_32;
#line 345 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_73_73;
#line 345 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_74_74;
#line 345 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_75_75;
#line 345 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_78_78;
#line 345 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_79_79;
#line 345 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_80_80;
#line 345 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_83_83;
#line 345 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_84_84;

#line 345 "add_pragma_tabling.m"
            {
#line 345 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__OldEvalMethodStr_32 = parse_tree__prog_out__eval_method_to_string_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__OldEvalMethod_29);
            }
#line 346 "add_pragma_tabling.m"
            {
#line 346 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_74_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 346 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_74_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 346 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_74_74, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_20));
#line 346 "add_pragma_tabling.m"
            }
#line 347 "add_pragma_tabling.m"
            {
#line 347 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_79_79 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 347 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pragma__add_pragma_tabling__V_79_79, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__OldEvalMethodStr_32));
#line 347 "add_pragma_tabling.m"
            }
#line 348 "add_pragma_tabling.m"
            {
#line 348 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_84_84 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 348 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pragma__add_pragma_tabling__V_84_84, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_30));
#line 348 "add_pragma_tabling.m"
            }
#line 348 "add_pragma_tabling.m"
            {
#line 348 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 348 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_83_83, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_84_84));
#line 348 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[37])));
#line 348 "add_pragma_tabling.m"
            }
#line 347 "add_pragma_tabling.m"
            {
#line 347 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 347 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_80_80, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[55])));
#line 347 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_80_80, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_83_83));
#line 347 "add_pragma_tabling.m"
            }
#line 347 "add_pragma_tabling.m"
            {
#line 347 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 347 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_78_78, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_79_79));
#line 347 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_78_78, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_80_80));
#line 347 "add_pragma_tabling.m"
            }
#line 347 "add_pragma_tabling.m"
            {
#line 347 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 347 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_75_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[54])));
#line 347 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_75_75, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_78_78));
#line 347 "add_pragma_tabling.m"
            }
#line 346 "add_pragma_tabling.m"
            {
#line 346 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 346 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_73_73, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_74_74));
#line 346 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_73_73, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_75_75));
#line 346 "add_pragma_tabling.m"
            }
#line 346 "add_pragma_tabling.m"
            {
#line 346 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 346 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[51])));
#line 346 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_31, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_73_73));
#line 346 "add_pragma_tabling.m"
            }
#line 345 "add_pragma_tabling.m"
          }
#line 352 "add_pragma_tabling.m"
        {
#line 352 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 352 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_95_95, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_31));
#line 352 "add_pragma_tabling.m"
        }
#line 352 "add_pragma_tabling.m"
        {
#line 352 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 352 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_94_94, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_95_95));
#line 352 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_94_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 352 "add_pragma_tabling.m"
        }
#line 352 "add_pragma_tabling.m"
        {
#line 352 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 352 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_33, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Context_19));
#line 352 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_33, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_94_94));
#line 352 "add_pragma_tabling.m"
        }
#line 353 "add_pragma_tabling.m"
        {
#line 353 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 353 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_99_99, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_33));
#line 353 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 353 "add_pragma_tabling.m"
        }
#line 353 "add_pragma_tabling.m"
        {
#line 353 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 353 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 353 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 353 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_34, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_99_99));
#line 353 "add_pragma_tabling.m"
        }
#line 354 "add_pragma_tabling.m"
        {
#line 354 "add_pragma_tabling.m"
          MR_Word base;
#line 354 "add_pragma_tabling.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 354 "add_pragma_tabling.m"
          *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_55 = base;
#line 354 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_34));
#line 354 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_54));
#line 354 "add_pragma_tabling.m"
        }
#line 339 "add_pragma_tabling.m"
        *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_53 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0_52;
#line 339 "add_pragma_tabling.m"
        *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_51 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_50;
#line 339 "add_pragma_tabling.m"
        *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_49 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_0_48;
#line 339 "add_pragma_tabling.m"
      }
#line 355 "add_pragma_tabling.m"
    else
#line 357 "add_pragma_tabling.m"
      {
#line 357 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeDeclaredArgModes_35;

#line 356 "add_pragma_tabling.m"
        {
#line 356 "add_pragma_tabling.m"
          hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ProcInfo0_18, &hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeDeclaredArgModes_35);
        }
#line 367 "add_pragma_tabling.m"
        if ((hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeDeclaredArgModes_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 359 "add_pragma_tabling.m"
          {
#line 359 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_145_145;
#line 359 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_146_146;
#line 359 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_147_147;
#line 359 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_150_150;
#line 359 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_151_151;
#line 359 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_161_161;
#line 359 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_162_162;
#line 359 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_166_166;
#line 359 "add_pragma_tabling.m"
            MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_169;
#line 359 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_170;
#line 359 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_171;
#line 359 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_172;

#line 360 "add_pragma_tabling.m"
            {
#line 360 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_169 = parse_tree__prog_out__eval_method_to_string_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_22);
            }
#line 361 "add_pragma_tabling.m"
            {
#line 361 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_146_146 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 361 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_146_146, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
#line 361 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_146_146, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_169));
#line 361 "add_pragma_tabling.m"
            }
#line 362 "add_pragma_tabling.m"
            {
#line 362 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_151_151 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 362 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_151_151, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 362 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_151_151, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_20));
#line 362 "add_pragma_tabling.m"
            }
#line 362 "add_pragma_tabling.m"
            {
#line 362 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_150_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 362 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_150_150, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_151_151));
#line 362 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_150_150, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[40])));
#line 362 "add_pragma_tabling.m"
            }
#line 362 "add_pragma_tabling.m"
            {
#line 362 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_147_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 362 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_147_147, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[50])));
#line 362 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_147_147, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_150_150));
#line 362 "add_pragma_tabling.m"
            }
#line 361 "add_pragma_tabling.m"
            {
#line 361 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_145_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 361 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_145_145, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_146_146));
#line 361 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_145_145, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_147_147));
#line 361 "add_pragma_tabling.m"
            }
#line 361 "add_pragma_tabling.m"
            {
#line 361 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 361 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_170, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[51])));
#line 361 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_170, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_145_145));
#line 361 "add_pragma_tabling.m"
            }
#line 364 "add_pragma_tabling.m"
            {
#line 364 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_162_162 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 364 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_162_162, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_170));
#line 364 "add_pragma_tabling.m"
            }
#line 364 "add_pragma_tabling.m"
            {
#line 364 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 364 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_161_161, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_162_162));
#line 364 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_161_161, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 364 "add_pragma_tabling.m"
            }
#line 364 "add_pragma_tabling.m"
            {
#line 364 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_171 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 364 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_171, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Context_19));
#line 364 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_171, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_161_161));
#line 364 "add_pragma_tabling.m"
            }
#line 365 "add_pragma_tabling.m"
            {
#line 365 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_166_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 365 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_166_166, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_171));
#line 365 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_166_166, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 365 "add_pragma_tabling.m"
            }
#line 365 "add_pragma_tabling.m"
            {
#line 365 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_172 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 365 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_172, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 365 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_172, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 365 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_172, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_166_166));
#line 365 "add_pragma_tabling.m"
            }
#line 366 "add_pragma_tabling.m"
            {
#line 366 "add_pragma_tabling.m"
              MR_Word base;
#line 366 "add_pragma_tabling.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 366 "add_pragma_tabling.m"
              *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_55 = base;
#line 366 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_172));
#line 366 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_54));
#line 366 "add_pragma_tabling.m"
            }
#line 359 "add_pragma_tabling.m"
            *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_49 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_0_48;
#line 359 "add_pragma_tabling.m"
            *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_51 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_50;
#line 359 "add_pragma_tabling.m"
            *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_53 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0_52;
#line 359 "add_pragma_tabling.m"
          }
#line 367 "add_pragma_tabling.m"
        else
#line 368 "add_pragma_tabling.m"
          {
#line 368 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__DeclaredArgModes_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeDeclaredArgModes_35, (MR_Integer) 0)));
#line 368 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Statistics_39;
#line 368 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__AllowReset_40;
#line 368 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeError_43;
#line 368 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ProcInfo1_46;
#line 368 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ProcInfo_47;
#line 368 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_133_133;
#line 368 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_134_134;
#line 368 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_135_135;
#line 368 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_136_136;
#line 368 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_137_137;
#line 368 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_138_138;

#line 3912 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
            if ((hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeAttributes_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3914 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
              {
#line 377 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__Statistics_39 = (MR_Integer) 1;
#line 378 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__AllowReset_40 = (MR_Integer) 1;
#line 388 "add_pragma_tabling.m"
                {
#line 388 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__check_pred_args_against_tabling_4_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__DeclaredArgModes_36, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_50, (MR_Integer) 1, &hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeError_43);
                }
#line 3925 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
              }
#line 3927 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
            else
#line 3929 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
              {
#line 3931 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Attributes_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeAttributes_23, (MR_Integer) 0)));
#line 3933 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Strictness_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Attributes_37, (MR_Integer) 0)));
#line 371 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Attributes_37, (MR_Integer) 1)));

#line 371 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__Statistics_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Attributes_37, (MR_Integer) 2)));
#line 371 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__AllowReset_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Attributes_37, (MR_Integer) 3)));
#line 384 "add_pragma_tabling.m"
#line 384 "add_pragma_tabling.m"
                switch (MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_pragma_tabling__Strictness_207)) {
#line 384 "add_pragma_tabling.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 384 "add_pragma_tabling.m"
                  case (MR_Integer) 0:
#line 387 "add_pragma_tabling.m"
                    {
#line 388 "add_pragma_tabling.m"
                      {
#line 388 "add_pragma_tabling.m"
                        hlds__make_hlds__add_pragma__add_pragma_tabling__check_pred_args_against_tabling_4_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__DeclaredArgModes_36, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_50, (MR_Integer) 1, &hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeError_43);
                      }
#line 387 "add_pragma_tabling.m"
                    }
#line 384 "add_pragma_tabling.m"
                    break;
#line 384 "add_pragma_tabling.m"
                  case (MR_Integer) 1:
#line 381 "add_pragma_tabling.m"
                    {
#line 381 "add_pragma_tabling.m"
                      MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeArgMethods_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__Strictness_207, (MR_Integer) 0)));
#line 381 "add_pragma_tabling.m"
                      MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling___HiddenArgMethod_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__Strictness_207, (MR_Integer) 1)));

#line 382 "add_pragma_tabling.m"
                      {
#line 382 "add_pragma_tabling.m"
                        hlds__make_hlds__add_pragma__add_pragma_tabling__check_pred_args_against_tabling_methods_5_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__DeclaredArgModes_36, hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeArgMethods_41, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_50, (MR_Integer) 1, &hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeError_43);
                      }
#line 381 "add_pragma_tabling.m"
                    }
#line 384 "add_pragma_tabling.m"
                    break;
#line 384 "add_pragma_tabling.m"
                }
#line 3980 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
              }
#line 402 "add_pragma_tabling.m"
            if ((hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeError_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 403 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_133_133 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_54;
#line 402 "add_pragma_tabling.m"
            else
#line 392 "add_pragma_tabling.m"
              {
#line 392 "add_pragma_tabling.m"
                MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__ArgMsg_44;
#line 392 "add_pragma_tabling.m"
                MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__ErrorMsg_45;
#line 392 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeError_43, (MR_Integer) 0)));
#line 392 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_107_107;
#line 392 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_108_108;
#line 392 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_109_109;
#line 392 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_112_112;
#line 392 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_113_113;
#line 392 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_114_114;
#line 392 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_117_117;
#line 392 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_119_119;
#line 392 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_120_120;
#line 392 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_121_121;
#line 392 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_122_122;
#line 392 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_126_126;
#line 392 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_127_127;
#line 392 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_131_131;
#line 392 "add_pragma_tabling.m"
                MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_173;
#line 392 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_174;
#line 392 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_175;
#line 392 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_176;

#line 392 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__ArgMsg_44 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_104_104, (MR_Integer) 0)));
#line 392 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__ErrorMsg_45 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_104_104, (MR_Integer) 1)));
#line 393 "add_pragma_tabling.m"
                {
#line 393 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_173 = parse_tree__prog_out__eval_method_to_string_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_22);
                }
#line 395 "add_pragma_tabling.m"
                {
#line 395 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_108_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 395 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_108_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
#line 395 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_108_108, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_173));
#line 395 "add_pragma_tabling.m"
                }
#line 396 "add_pragma_tabling.m"
                {
#line 396 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_113_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 396 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_113_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 396 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_113_113, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_20));
#line 396 "add_pragma_tabling.m"
                }
#line 397 "add_pragma_tabling.m"
                {
#line 397 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_120_120 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 397 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pragma__add_pragma_tabling__V_120_120, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__ArgMsg_44));
#line 397 "add_pragma_tabling.m"
                }
#line 397 "add_pragma_tabling.m"
                {
#line 397 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_122_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 397 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_122_122, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 397 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_122_122, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__ErrorMsg_45));
#line 397 "add_pragma_tabling.m"
                }
#line 397 "add_pragma_tabling.m"
                {
#line 397 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 397 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_121_121, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_122_122));
#line 397 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_121_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[1])));
#line 397 "add_pragma_tabling.m"
                }
#line 397 "add_pragma_tabling.m"
                {
#line 397 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 397 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_119_119, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_120_120));
#line 397 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_119_119, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_121_121));
#line 397 "add_pragma_tabling.m"
                }
#line 397 "add_pragma_tabling.m"
                {
#line 397 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 397 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_117_117, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 397 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_117_117, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_119_119));
#line 397 "add_pragma_tabling.m"
                }
#line 397 "add_pragma_tabling.m"
                {
#line 397 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 397 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_114_114, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[57])));
#line 397 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_114_114, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_117_117));
#line 397 "add_pragma_tabling.m"
                }
#line 396 "add_pragma_tabling.m"
                {
#line 396 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 396 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_112_112, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_113_113));
#line 396 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_112_112, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_114_114));
#line 396 "add_pragma_tabling.m"
                }
#line 396 "add_pragma_tabling.m"
                {
#line 396 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 396 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_109_109, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[50])));
#line 396 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_109_109, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_112_112));
#line 396 "add_pragma_tabling.m"
                }
#line 395 "add_pragma_tabling.m"
                {
#line 395 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 395 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_107_107, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_108_108));
#line 395 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_107_107, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_109_109));
#line 395 "add_pragma_tabling.m"
                }
#line 394 "add_pragma_tabling.m"
                {
#line 394 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 394 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_174, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[56])));
#line 394 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_174, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_107_107));
#line 394 "add_pragma_tabling.m"
                }
#line 398 "add_pragma_tabling.m"
                {
#line 398 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_127_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 398 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_127_127, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_174));
#line 398 "add_pragma_tabling.m"
                }
#line 398 "add_pragma_tabling.m"
                {
#line 398 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 398 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_126_126, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_127_127));
#line 398 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_126_126, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 398 "add_pragma_tabling.m"
                }
#line 398 "add_pragma_tabling.m"
                {
#line 398 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_175 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 398 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_175, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Context_19));
#line 398 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_175, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_126_126));
#line 398 "add_pragma_tabling.m"
                }
#line 400 "add_pragma_tabling.m"
                {
#line 400 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 400 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_131_131, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_175));
#line 400 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_131_131, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 400 "add_pragma_tabling.m"
                }
#line 399 "add_pragma_tabling.m"
                {
#line 399 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_176 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 399 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_176, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 399 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_176, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 399 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_176, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_131_131));
#line 399 "add_pragma_tabling.m"
                }
#line 401 "add_pragma_tabling.m"
                {
#line 401 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_133_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 401 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_133_133, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_176));
#line 401 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_133_133, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_54));
#line 401 "add_pragma_tabling.m"
                }
#line 392 "add_pragma_tabling.m"
              }
#line 405 "add_pragma_tabling.m"
            {
#line 405 "add_pragma_tabling.m"
              hlds__hlds_pred__proc_info_set_eval_method_3_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_22, hlds__make_hlds__add_pragma__add_pragma_tabling__ProcInfo0_18, &hlds__make_hlds__add_pragma__add_pragma_tabling__ProcInfo1_46);
            }
#line 406 "add_pragma_tabling.m"
            {
#line 406 "add_pragma_tabling.m"
              hlds__hlds_pred__proc_info_set_table_attributes_3_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeAttributes_23, hlds__make_hlds__add_pragma__add_pragma_tabling__ProcInfo1_46, &hlds__make_hlds__add_pragma__add_pragma_tabling__ProcInfo_47);
            }
#line 408 "add_pragma_tabling.m"
            {
#line 408 "add_pragma_tabling.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_17, ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__ProcInfo_47)), hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_0_48, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_134_134);
            }
#line 421 "add_pragma_tabling.m"
#line 421 "add_pragma_tabling.m"
            switch (hlds__make_hlds__add_pragma__add_pragma_tabling__Statistics_39) {
#line 421 "add_pragma_tabling.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 421 "add_pragma_tabling.m"
              case (MR_Integer) 1:
#line 422 "add_pragma_tabling.m"
                {
#line 422 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_135_135 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_134_134;
#line 422 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_136_136 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_50;
#line 422 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_137_137 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0_52;
#line 422 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_138_138 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_133_133;
#line 422 "add_pragma_tabling.m"
                }
#line 421 "add_pragma_tabling.m"
                break;
#line 421 "add_pragma_tabling.m"
              case (MR_Integer) 0:
#line 418 "add_pragma_tabling.m"
                {
#line 418 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__create_tabling_statistics_pred_13_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_17, hlds__make_hlds__add_pragma__add_pragma_tabling__Context_19, hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_20, hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_21, hlds__make_hlds__add_pragma__add_pragma_tabling__Status_24, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_134_134, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_135_135, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_50, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_136_136, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0_52, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_137_137, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_133_133, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_138_138);
                }
#line 421 "add_pragma_tabling.m"
                break;
#line 421 "add_pragma_tabling.m"
            }
#line 429 "add_pragma_tabling.m"
#line 429 "add_pragma_tabling.m"
            switch (hlds__make_hlds__add_pragma__add_pragma_tabling__AllowReset_40) {
#line 429 "add_pragma_tabling.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 429 "add_pragma_tabling.m"
              case (MR_Integer) 0:
#line 426 "add_pragma_tabling.m"
                {
#line 426 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__create_tabling_reset_pred_13_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_17, hlds__make_hlds__add_pragma__add_pragma_tabling__Context_19, hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_20, hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_21, hlds__make_hlds__add_pragma__add_pragma_tabling__Status_24, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_135_135, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_49, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_136_136, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_51, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_137_137, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_53, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_138_138, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_55);
#line 426 "add_pragma_tabling.m"
                  return;
                }
#line 429 "add_pragma_tabling.m"
                break;
#line 429 "add_pragma_tabling.m"
              case (MR_Integer) 1:
#line 430 "add_pragma_tabling.m"
                {
#line 430 "add_pragma_tabling.m"
                  *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_49 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_135_135;
#line 430 "add_pragma_tabling.m"
                  *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_51 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_136_136;
#line 430 "add_pragma_tabling.m"
                  *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_53 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_137_137;
#line 430 "add_pragma_tabling.m"
                  *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_55 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_138_138;
#line 430 "add_pragma_tabling.m"
                }
#line 429 "add_pragma_tabling.m"
                break;
#line 429 "add_pragma_tabling.m"
            }
#line 368 "add_pragma_tabling.m"
          }
#line 357 "add_pragma_tabling.m"
      }
#line 332 "add_pragma_tabling.m"
  }
#line 323 "add_pragma_tabling.m"
}

#line 304 "add_pragma_tabling.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__set_eval_method_create_aux_preds_list_15_p_0(
#line 304 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1,
#line 304 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Context_2,
#line 304 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_3,
#line 304 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_4,
#line 304 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_5,
#line 304 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeAttributes_6,
#line 304 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Status_7,
#line 304 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_0_8,
#line 304 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_9,
#line 304 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_10,
#line 304 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_11,
#line 304 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0_12,
#line 304 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_13,
#line 304 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_14,
#line 304 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_15)
#line 304 "add_pragma_tabling.m"
{
#line 311 "add_pragma_tabling.m"
  while (MR_TRUE)
#line 311 "add_pragma_tabling.m"
    {
#line 311 "add_pragma_tabling.m"
      /* tailcall optimized into a loop */
#line 311 "add_pragma_tabling.m"
      {
#line 311 "add_pragma_tabling.m"
        MR_bool hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded;

#line 311 "add_pragma_tabling.m"
        if ((hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 311 "add_pragma_tabling.m"
          {
#line 312 "add_pragma_tabling.m"
            *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_15 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_14;
#line 312 "add_pragma_tabling.m"
            *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_13 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0_12;
#line 312 "add_pragma_tabling.m"
            *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_11 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_10;
#line 312 "add_pragma_tabling.m"
            *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_9 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_0_8;
#line 311 "add_pragma_tabling.m"
          }
#line 311 "add_pragma_tabling.m"
        else
#line 315 "add_pragma_tabling.m"
          {
#line 315 "add_pragma_tabling.m"
            MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_34;
#line 315 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ProcInfo0_35;
#line 315 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Rest_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1, (MR_Integer) 1)));
#line 315 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1, (MR_Integer) 0)));
#line 315 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_56_56;
#line 315 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_57_57;
#line 315 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_58_58;
#line 315 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_59_59;

#line 313 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_55_55, (MR_Integer) 0)));
#line 313 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__ProcInfo0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_55_55, (MR_Integer) 1)));
#line 316 "add_pragma_tabling.m"
            {
#line 316 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__set_eval_method_create_aux_preds_16_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_34, hlds__make_hlds__add_pragma__add_pragma_tabling__ProcInfo0_35, hlds__make_hlds__add_pragma__add_pragma_tabling__Context_2, hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_3, hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_4, hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_5, hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeAttributes_6, hlds__make_hlds__add_pragma__add_pragma_tabling__Status_7, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_0_8, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_56_56, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_10, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_57_57, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0_12, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_58_58, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_14, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_59_59);
            }
#line 319 "add_pragma_tabling.m"
            /* direct tailcall eliminated */
#line 319 "add_pragma_tabling.m"
            {
#line 319 "add_pragma_tabling.m"
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1__tmp_copy_1 = hlds__make_hlds__add_pragma__add_pragma_tabling__Rest_36;
#line 319 "add_pragma_tabling.m"
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_0__tmp_copy_8 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_56_56;
#line 319 "add_pragma_tabling.m"
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0__tmp_copy_10 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_57_57;
#line 319 "add_pragma_tabling.m"
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0__tmp_copy_12 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_58_58;
#line 319 "add_pragma_tabling.m"
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0__tmp_copy_14 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_59_59;

#line 319 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_14 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0__tmp_copy_14;
#line 319 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0_12 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0__tmp_copy_12;
#line 319 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_10 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0__tmp_copy_10;
#line 319 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_0_8 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ProcTable_0__tmp_copy_8;
#line 319 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1_1 = hlds__make_hlds__add_pragma__add_pragma_tabling__HeadVar__1__tmp_copy_1;
#line 319 "add_pragma_tabling.m"
            }
#line 319 "add_pragma_tabling.m"
            continue;
#line 315 "add_pragma_tabling.m"
          }
#line 311 "add_pragma_tabling.m"
      }
#line 311 "add_pragma_tabling.m"
      break;
#line 311 "add_pragma_tabling.m"
    }
#line 304 "add_pragma_tabling.m"
}

#line 151 "add_pragma_tabling.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__module_add_pragma_tabled_for_pred_15_p_0(
#line 151 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod0_16,
#line 151 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredName_17,
#line 151 "add_pragma_tabling.m"
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__Arity0_18,
#line 151 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MaybePredOrFunc_19,
#line 151 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeModes_20,
#line 151 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeAttributes_21,
#line 151 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Context_22,
#line 151 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Status_23,
#line 151 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredId_24,
#line 151 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_65,
#line 151 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_66,
#line 151 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0_67,
#line 151 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_68,
#line 151 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_69,
#line 151 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_70)
#line 151 "add_pragma_tabling.m"
{
#line 160 "add_pragma_tabling.m"
  {
#line 160 "add_pragma_tabling.m"
    MR_bool hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded;
#line 160 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_244_244;
#line 160 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Globals_28;
#line 160 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_31;
#line 160 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredicateTable_32;
#line 160 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Preds_33;
#line 160 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredInfo0_34;
#line 160 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredOrFunc_36;
#line 160 "add_pragma_tabling.m"
    MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_37;
#line 160 "add_pragma_tabling.m"
    MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_38;
#line 160 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__VeryVerbose_39;
#line 160 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Markers_41;
#line 160 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_42;
#line 160 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_134_134;
#line 162 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_29_29;
#line 178 "add_pragma_tabling.m"
    MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling__conv0_PredInfo0_34;
#line 208 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__WarnTableWithInline_43;
#line 208 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_86_86;

#line 161 "add_pragma_tabling.m"
    {
#line 161 "add_pragma_tabling.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_65, &hlds__make_hlds__add_pragma__add_pragma_tabling__Globals_28);
    }
#line 162 "add_pragma_tabling.m"
    hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod0_16)) == (MR_mktag((MR_Integer) 2)));
#line 162 "add_pragma_tabling.m"
    if (hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded)
#line 162 "add_pragma_tabling.m"
      {
#line 162 "add_pragma_tabling.m"
        hlds__make_hlds__add_pragma__add_pragma_tabling__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod0_16, (MR_Integer) 0)));
#line 164 "add_pragma_tabling.m"
        {
#line 164 "add_pragma_tabling.m"
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__OwnStacks_30;

#line 163 "add_pragma_tabling.m"
          {
#line 163 "add_pragma_tabling.m"
            libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__Globals_28, (MR_Integer) 222, &hlds__make_hlds__add_pragma__add_pragma_tabling__OwnStacks_30);
          }
#line 168 "add_pragma_tabling.m"
#line 168 "add_pragma_tabling.m"
          switch (hlds__make_hlds__add_pragma__add_pragma_tabling__OwnStacks_30) {
#line 168 "add_pragma_tabling.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 168 "add_pragma_tabling.m"
            case (MR_Integer) 0:
#line 169 "add_pragma_tabling.m"
              {
#line 170 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_31 = (MR_Word) MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_3[0]);
#line 169 "add_pragma_tabling.m"
              }
#line 168 "add_pragma_tabling.m"
              break;
#line 168 "add_pragma_tabling.m"
            case (MR_Integer) 1:
#line 166 "add_pragma_tabling.m"
              {
#line 167 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_31 = (MR_Word) MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_3[1]);
#line 166 "add_pragma_tabling.m"
              }
#line 168 "add_pragma_tabling.m"
              break;
#line 168 "add_pragma_tabling.m"
          }
#line 164 "add_pragma_tabling.m"
        }
#line 162 "add_pragma_tabling.m"
      }
#line 162 "add_pragma_tabling.m"
    else
#line 173 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_31 = hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod0_16;
#line 176 "add_pragma_tabling.m"
    {
#line 176 "add_pragma_tabling.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_65, &hlds__make_hlds__add_pragma__add_pragma_tabling__PredicateTable_32);
    }
#line 177 "add_pragma_tabling.m"
    {
#line 177 "add_pragma_tabling.m"
      hlds__pred_table__predicate_table_get_preds_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__PredicateTable_32, &hlds__make_hlds__add_pragma__add_pragma_tabling__Preds_33);
    }
#line 4584 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
    hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_244_244 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 178 "add_pragma_tabling.m"
    {
#line 178 "add_pragma_tabling.m"
      mercury__map__lookup_3_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_244_244, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, hlds__make_hlds__add_pragma__add_pragma_tabling__Preds_33, ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__PredId_24)), &hlds__make_hlds__add_pragma__add_pragma_tabling__conv0_PredInfo0_34);
    }
#line 178 "add_pragma_tabling.m"
    hlds__make_hlds__add_pragma__add_pragma_tabling__PredInfo0_34 = ((MR_Word) hlds__make_hlds__add_pragma__add_pragma_tabling__conv0_PredInfo0_34);
#line 182 "add_pragma_tabling.m"
    if ((hlds__make_hlds__add_pragma__add_pragma_tabling__MaybePredOrFunc_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 184 "add_pragma_tabling.m"
      {
#line 184 "add_pragma_tabling.m"
        hlds__make_hlds__add_pragma__add_pragma_tabling__PredOrFunc_36 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__PredInfo0_34);
      }
#line 182 "add_pragma_tabling.m"
    else
#line 180 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__PredOrFunc_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__MaybePredOrFunc_19, (MR_Integer) 0)));
#line 186 "add_pragma_tabling.m"
    {
#line 186 "add_pragma_tabling.m"
      parse_tree__prog_util__adjust_func_arity_3_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__PredOrFunc_36, hlds__make_hlds__add_pragma__add_pragma_tabling__Arity0_18, &hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_37);
    }
#line 188 "add_pragma_tabling.m"
    {
#line 188 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_38 = parse_tree__prog_out__eval_method_to_string_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_31);
    }
#line 189 "add_pragma_tabling.m"
    {
#line 189 "add_pragma_tabling.m"
      libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__Globals_28, (MR_Integer) 46, &hlds__make_hlds__add_pragma__add_pragma_tabling__VeryVerbose_39);
    }
#line 199 "add_pragma_tabling.m"
#line 199 "add_pragma_tabling.m"
    switch (hlds__make_hlds__add_pragma__add_pragma_tabling__VeryVerbose_39) {
#line 199 "add_pragma_tabling.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 199 "add_pragma_tabling.m"
      case (MR_Integer) 0:
#line 200 "add_pragma_tabling.m"
        {
#line 200 "add_pragma_tabling.m"
        }
#line 199 "add_pragma_tabling.m"
        break;
#line 199 "add_pragma_tabling.m"
      case (MR_Integer) 1:
#line 192 "add_pragma_tabling.m"
        {
#line 192 "add_pragma_tabling.m"
          MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_81_81;

#line 193 "add_pragma_tabling.m"
          {
#line 193 "add_pragma_tabling.m"
            mercury__io__write_string_3_p_0((MR_String) "% Processing \140:- pragma ");
          }
#line 194 "add_pragma_tabling.m"
          {
#line 194 "add_pragma_tabling.m"
            mercury__io__write_string_3_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_38);
          }
#line 195 "add_pragma_tabling.m"
          {
#line 195 "add_pragma_tabling.m"
            mercury__io__write_string_3_p_0((MR_String) "\' for ");
          }
#line 196 "add_pragma_tabling.m"
          {
#line 196 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 196 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_81_81, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__PredName_17));
#line 196 "add_pragma_tabling.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_81_81, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_37));
#line 196 "add_pragma_tabling.m"
          }
#line 196 "add_pragma_tabling.m"
          {
#line 196 "add_pragma_tabling.m"
            parse_tree__prog_out__write_simple_call_id_4_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__PredOrFunc_36, hlds__make_hlds__add_pragma__add_pragma_tabling__V_81_81);
          }
#line 197 "add_pragma_tabling.m"
          {
#line 197 "add_pragma_tabling.m"
            mercury__io__write_string_3_p_0((MR_String) "...\n");
          }
#line 192 "add_pragma_tabling.m"
        }
#line 199 "add_pragma_tabling.m"
        break;
#line 199 "add_pragma_tabling.m"
    }
#line 205 "add_pragma_tabling.m"
    {
#line 205 "add_pragma_tabling.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__PredInfo0_34, &hlds__make_hlds__add_pragma__add_pragma_tabling__Markers_41);
    }
#line 206 "add_pragma_tabling.m"
    {
#line 206 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 206 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_42, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__PredOrFunc_36));
#line 206 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_42, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__PredName_17));
#line 206 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_42, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_37));
#line 206 "add_pragma_tabling.m"
    }
#line 208 "add_pragma_tabling.m"
    {
#line 208 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded = hlds__hlds_pred__check_marker_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__Markers_41, (MR_Integer) 6);
    }
#line 208 "add_pragma_tabling.m"
    if (hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded)
#line 208 "add_pragma_tabling.m"
      {
#line 209 "add_pragma_tabling.m"
        hlds__make_hlds__add_pragma__add_pragma_tabling__V_86_86 = (MR_Integer) 30;
#line 209 "add_pragma_tabling.m"
        {
#line 209 "add_pragma_tabling.m"
          libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__Globals_28, hlds__make_hlds__add_pragma__add_pragma_tabling__V_86_86, &hlds__make_hlds__add_pragma__add_pragma_tabling__WarnTableWithInline_43);
        }
#line 211 "add_pragma_tabling.m"
        hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded = (hlds__make_hlds__add_pragma__add_pragma_tabling__WarnTableWithInline_43 == (MR_Integer) 1);
#line 208 "add_pragma_tabling.m"
      }
#line 225 "add_pragma_tabling.m"
    if (hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded)
#line 220 "add_pragma_tabling.m"
      {
#line 220 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__InlineWarningPieces_44;
#line 220 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__InlineWarningMsg_45;
#line 220 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__InlineWarningSpec_46;
#line 220 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_89_89;
#line 220 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_90_90;
#line 220 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_91_91;
#line 220 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_94_94;
#line 220 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_95_95;
#line 220 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_127_127;
#line 220 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_128_128;
#line 220 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_132_132;

#line 213 "add_pragma_tabling.m"
        {
#line 213 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_90_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 213 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_90_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 213 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_90_90, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_42));
#line 213 "add_pragma_tabling.m"
        }
#line 214 "add_pragma_tabling.m"
        {
#line 214 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_95_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 214 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_95_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
#line 214 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_95_95, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_38));
#line 214 "add_pragma_tabling.m"
        }
#line 214 "add_pragma_tabling.m"
        {
#line 214 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 214 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_94_94, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_95_95));
#line 214 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_94_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[28])));
#line 214 "add_pragma_tabling.m"
        }
#line 214 "add_pragma_tabling.m"
        {
#line 214 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 214 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_91_91, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[47])));
#line 214 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_91_91, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_94_94));
#line 214 "add_pragma_tabling.m"
        }
#line 213 "add_pragma_tabling.m"
        {
#line 213 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 213 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_89_89, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_90_90));
#line 213 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_89_89, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_91_91));
#line 213 "add_pragma_tabling.m"
        }
#line 213 "add_pragma_tabling.m"
        {
#line 213 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__InlineWarningPieces_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 213 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__InlineWarningPieces_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[46])));
#line 213 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__InlineWarningPieces_44, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_89_89));
#line 213 "add_pragma_tabling.m"
        }
#line 221 "add_pragma_tabling.m"
        {
#line 221 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_128_128 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 221 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_128_128, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__InlineWarningPieces_44));
#line 221 "add_pragma_tabling.m"
        }
#line 221 "add_pragma_tabling.m"
        {
#line 221 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 221 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_127_127, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_128_128));
#line 221 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_127_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 221 "add_pragma_tabling.m"
        }
#line 221 "add_pragma_tabling.m"
        {
#line 221 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__InlineWarningMsg_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 221 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__InlineWarningMsg_45, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Context_22));
#line 221 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__InlineWarningMsg_45, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_127_127));
#line 221 "add_pragma_tabling.m"
        }
#line 223 "add_pragma_tabling.m"
        {
#line 223 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_132_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 223 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_132_132, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__InlineWarningMsg_45));
#line 223 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_132_132, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 223 "add_pragma_tabling.m"
        }
#line 222 "add_pragma_tabling.m"
        {
#line 222 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__InlineWarningSpec_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 222 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__InlineWarningSpec_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 222 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__InlineWarningSpec_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 222 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__InlineWarningSpec_46, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_132_132));
#line 222 "add_pragma_tabling.m"
        }
#line 224 "add_pragma_tabling.m"
        {
#line 224 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 224 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_134_134, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__InlineWarningSpec_46));
#line 224 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_134_134, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_69));
#line 224 "add_pragma_tabling.m"
        }
#line 220 "add_pragma_tabling.m"
      }
#line 225 "add_pragma_tabling.m"
    else
#line 225 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_134_134 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_69;
#line 228 "add_pragma_tabling.m"
    {
#line 228 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__PredInfo0_34);
    }
#line 235 "add_pragma_tabling.m"
    if (hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded)
#line 231 "add_pragma_tabling.m"
      {
#line 231 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_47;
#line 231 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_48;
#line 231 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_49;
#line 231 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_137_137;
#line 231 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_138_138;
#line 231 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_139_139;
#line 231 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_142_142;
#line 231 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_143_143;
#line 231 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_150_150;
#line 231 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_151_151;
#line 231 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_155_155;

#line 229 "add_pragma_tabling.m"
        {
#line 229 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_138_138 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 229 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_138_138, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
#line 229 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_138_138, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_38));
#line 229 "add_pragma_tabling.m"
        }
#line 230 "add_pragma_tabling.m"
        {
#line 230 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_143_143 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 230 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_143_143, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 230 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_143_143, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_42));
#line 230 "add_pragma_tabling.m"
        }
#line 230 "add_pragma_tabling.m"
        {
#line 230 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 230 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_142_142, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_143_143));
#line 230 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_142_142, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[30])));
#line 230 "add_pragma_tabling.m"
        }
#line 230 "add_pragma_tabling.m"
        {
#line 230 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 230 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_139_139, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[49])));
#line 230 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_139_139, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_142_142));
#line 230 "add_pragma_tabling.m"
        }
#line 229 "add_pragma_tabling.m"
        {
#line 229 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 229 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_137_137, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_138_138));
#line 229 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_137_137, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_139_139));
#line 229 "add_pragma_tabling.m"
        }
#line 229 "add_pragma_tabling.m"
        {
#line 229 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 229 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[48])));
#line 229 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_47, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_137_137));
#line 229 "add_pragma_tabling.m"
        }
#line 232 "add_pragma_tabling.m"
        {
#line 232 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_151_151 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 232 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_151_151, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_47));
#line 232 "add_pragma_tabling.m"
        }
#line 232 "add_pragma_tabling.m"
        {
#line 232 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_150_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 232 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_150_150, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_151_151));
#line 232 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_150_150, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 232 "add_pragma_tabling.m"
        }
#line 232 "add_pragma_tabling.m"
        {
#line 232 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 232 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_48, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Context_22));
#line 232 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_48, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_150_150));
#line 232 "add_pragma_tabling.m"
        }
#line 233 "add_pragma_tabling.m"
        {
#line 233 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__V_155_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 233 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_155_155, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_48));
#line 233 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_155_155, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 233 "add_pragma_tabling.m"
        }
#line 233 "add_pragma_tabling.m"
        {
#line 233 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 233 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 233 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 233 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_49, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_155_155));
#line 233 "add_pragma_tabling.m"
        }
#line 234 "add_pragma_tabling.m"
        {
#line 234 "add_pragma_tabling.m"
          MR_Word base;
#line 234 "add_pragma_tabling.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 234 "add_pragma_tabling.m"
          *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_70 = base;
#line 234 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_49));
#line 234 "add_pragma_tabling.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_134_134));
#line 234 "add_pragma_tabling.m"
        }
#line 231 "add_pragma_tabling.m"
        *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_68 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0_67;
#line 231 "add_pragma_tabling.m"
        *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_66 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_65;
#line 231 "add_pragma_tabling.m"
      }
#line 235 "add_pragma_tabling.m"
    else
#line 237 "add_pragma_tabling.m"
      {
#line 237 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_247_247;
#line 237 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__NeedsStrat_50;
#line 237 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ProcTable0_53;
#line 237 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ExistingProcs_54;
#line 237 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_158_158;

#line 237 "add_pragma_tabling.m"
        {
#line 237 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__NeedsStrat_50 = hlds__hlds_pred__eval_method_needs_stratification_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_31);
        }
#line 244 "add_pragma_tabling.m"
#line 244 "add_pragma_tabling.m"
        switch (hlds__make_hlds__add_pragma__add_pragma_tabling__NeedsStrat_50) {
#line 244 "add_pragma_tabling.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 244 "add_pragma_tabling.m"
          case (MR_Integer) 0:
#line 245 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_158_158 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_65;
#line 244 "add_pragma_tabling.m"
            break;
#line 244 "add_pragma_tabling.m"
          case (MR_Integer) 1:
#line 239 "add_pragma_tabling.m"
            {
#line 239 "add_pragma_tabling.m"
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__StratPredIds0_51;
#line 239 "add_pragma_tabling.m"
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__StratPredIds_52;

#line 240 "add_pragma_tabling.m"
              {
#line 240 "add_pragma_tabling.m"
                hlds__hlds_module__module_info_get_must_be_stratified_preds_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_65, &hlds__make_hlds__add_pragma__add_pragma_tabling__StratPredIds0_51);
              }
#line 242 "add_pragma_tabling.m"
              {
#line 242 "add_pragma_tabling.m"
                mercury__set__insert_3_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_244_244, ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__PredId_24)), hlds__make_hlds__add_pragma__add_pragma_tabling__StratPredIds0_51, &hlds__make_hlds__add_pragma__add_pragma_tabling__StratPredIds_52);
              }
#line 243 "add_pragma_tabling.m"
              {
#line 243 "add_pragma_tabling.m"
                hlds__hlds_module__module_info_set_must_be_stratified_preds_3_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__StratPredIds_52, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_65, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_158_158);
              }
#line 239 "add_pragma_tabling.m"
            }
#line 244 "add_pragma_tabling.m"
            break;
#line 244 "add_pragma_tabling.m"
        }
#line 249 "add_pragma_tabling.m"
        {
#line 249 "add_pragma_tabling.m"
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__PredInfo0_34, &hlds__make_hlds__add_pragma__add_pragma_tabling__ProcTable0_53);
        }
#line 5098 "hlds.make_hlds.add_pragma.add_pragma_tabling.c"
        hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_247_247 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 250 "add_pragma_tabling.m"
        {
#line 250 "add_pragma_tabling.m"
          mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_247_247, hlds__make_hlds__add_pragma__add_pragma_tabling__ProcTable0_53, &hlds__make_hlds__add_pragma__add_pragma_tabling__ExistingProcs_54);
        }
#line 273 "add_pragma_tabling.m"
        if ((hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeModes_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 285 "add_pragma_tabling.m"
          if ((hlds__make_hlds__add_pragma__add_pragma_tabling__ExistingProcs_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 276 "add_pragma_tabling.m"
            {
#line 276 "add_pragma_tabling.m"
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_165_165;
#line 276 "add_pragma_tabling.m"
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_166_166;
#line 276 "add_pragma_tabling.m"
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_167_167;
#line 276 "add_pragma_tabling.m"
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_170_170;
#line 276 "add_pragma_tabling.m"
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_171_171;
#line 276 "add_pragma_tabling.m"
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_178_178;
#line 276 "add_pragma_tabling.m"
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_179_179;
#line 276 "add_pragma_tabling.m"
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_183_183;
#line 276 "add_pragma_tabling.m"
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_223;
#line 276 "add_pragma_tabling.m"
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_224;
#line 276 "add_pragma_tabling.m"
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_225;

#line 278 "add_pragma_tabling.m"
              {
#line 278 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__V_166_166 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 278 "add_pragma_tabling.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_166_166, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
#line 278 "add_pragma_tabling.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_166_166, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_38));
#line 278 "add_pragma_tabling.m"
              }
#line 279 "add_pragma_tabling.m"
              {
#line 279 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__V_171_171 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 279 "add_pragma_tabling.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_171_171, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 279 "add_pragma_tabling.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_171_171, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_42));
#line 279 "add_pragma_tabling.m"
              }
#line 279 "add_pragma_tabling.m"
              {
#line 279 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__V_170_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 279 "add_pragma_tabling.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_170_170, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_171_171));
#line 279 "add_pragma_tabling.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_170_170, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[32])));
#line 279 "add_pragma_tabling.m"
              }
#line 279 "add_pragma_tabling.m"
              {
#line 279 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__V_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 279 "add_pragma_tabling.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_167_167, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[50])));
#line 279 "add_pragma_tabling.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_167_167, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_170_170));
#line 279 "add_pragma_tabling.m"
              }
#line 278 "add_pragma_tabling.m"
              {
#line 278 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__V_165_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 278 "add_pragma_tabling.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_165_165, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_166_166));
#line 278 "add_pragma_tabling.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_165_165, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_167_167));
#line 278 "add_pragma_tabling.m"
              }
#line 277 "add_pragma_tabling.m"
              {
#line 277 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_223 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 277 "add_pragma_tabling.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_223, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[48])));
#line 277 "add_pragma_tabling.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_223, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_165_165));
#line 277 "add_pragma_tabling.m"
              }
#line 281 "add_pragma_tabling.m"
              {
#line 281 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__V_179_179 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 281 "add_pragma_tabling.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_179_179, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_223));
#line 281 "add_pragma_tabling.m"
              }
#line 281 "add_pragma_tabling.m"
              {
#line 281 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__V_178_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 281 "add_pragma_tabling.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_178_178, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_179_179));
#line 281 "add_pragma_tabling.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_178_178, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 281 "add_pragma_tabling.m"
              }
#line 281 "add_pragma_tabling.m"
              {
#line 281 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_224 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 281 "add_pragma_tabling.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_224, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Context_22));
#line 281 "add_pragma_tabling.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_224, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_178_178));
#line 281 "add_pragma_tabling.m"
              }
#line 283 "add_pragma_tabling.m"
              {
#line 283 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__V_183_183 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 283 "add_pragma_tabling.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_183_183, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_224));
#line 283 "add_pragma_tabling.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_183_183, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 283 "add_pragma_tabling.m"
              }
#line 282 "add_pragma_tabling.m"
              {
#line 282 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_225 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 282 "add_pragma_tabling.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_225, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 282 "add_pragma_tabling.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_225, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 282 "add_pragma_tabling.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_225, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_183_183));
#line 282 "add_pragma_tabling.m"
              }
#line 284 "add_pragma_tabling.m"
              {
#line 284 "add_pragma_tabling.m"
                MR_Word base;
#line 284 "add_pragma_tabling.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 284 "add_pragma_tabling.m"
                *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_70 = base;
#line 284 "add_pragma_tabling.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_225));
#line 284 "add_pragma_tabling.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_134_134));
#line 284 "add_pragma_tabling.m"
              }
#line 276 "add_pragma_tabling.m"
              *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_66 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_158_158;
#line 276 "add_pragma_tabling.m"
              *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_68 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0_67;
#line 276 "add_pragma_tabling.m"
            }
#line 285 "add_pragma_tabling.m"
          else
#line 286 "add_pragma_tabling.m"
            {
#line 286 "add_pragma_tabling.m"
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ExistingProcsTail_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__ExistingProcs_54, (MR_Integer) 1)));
#line 286 "add_pragma_tabling.m"
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_62;
#line 286 "add_pragma_tabling.m"
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_159_159;
#line 286 "add_pragma_tabling.m"
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ProcTable_226;
#line 286 "add_pragma_tabling.m"
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredInfo_227;
#line 286 "add_pragma_tabling.m"
              MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__ExistingProcs_54, (MR_Integer) 0)));

#line 290 "add_pragma_tabling.m"
              if ((hlds__make_hlds__add_pragma__add_pragma_tabling__ExistingProcsTail_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 289 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_62 = (MR_Integer) 1;
#line 290 "add_pragma_tabling.m"
              else
#line 292 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_62 = (MR_Integer) 0;
#line 294 "add_pragma_tabling.m"
              {
#line 294 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__set_eval_method_create_aux_preds_list_15_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ExistingProcs_54, hlds__make_hlds__add_pragma__add_pragma_tabling__Context_22, hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_42, hlds__make_hlds__add_pragma__add_pragma_tabling__SingleProc_62, hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_31, hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeAttributes_21, hlds__make_hlds__add_pragma__add_pragma_tabling__Status_23, hlds__make_hlds__add_pragma__add_pragma_tabling__ProcTable0_53, &hlds__make_hlds__add_pragma__add_pragma_tabling__ProcTable_226, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_158_158, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_159_159, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0_67, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_68, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_134_134, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_70);
              }
#line 298 "add_pragma_tabling.m"
              {
#line 298 "add_pragma_tabling.m"
                hlds__hlds_pred__pred_info_set_proc_table_3_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ProcTable_226, hlds__make_hlds__add_pragma__add_pragma_tabling__PredInfo0_34, &hlds__make_hlds__add_pragma__add_pragma_tabling__PredInfo_227);
              }
#line 299 "add_pragma_tabling.m"
              {
#line 299 "add_pragma_tabling.m"
                hlds__hlds_module__module_info_set_pred_info_4_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__PredId_24, hlds__make_hlds__add_pragma__add_pragma_tabling__PredInfo_227, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_159_159, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_66);
#line 299 "add_pragma_tabling.m"
                return;
              }
#line 286 "add_pragma_tabling.m"
            }
#line 273 "add_pragma_tabling.m"
        else
#line 252 "add_pragma_tabling.m"
          {
#line 252 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Modes_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeModes_20, (MR_Integer) 0)));
#line 263 "add_pragma_tabling.m"
            MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_56;

#line 254 "add_pragma_tabling.m"
            {
#line 254 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded = hlds__hlds_code_util__get_procedure_matching_argmodes_4_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ExistingProcs_54, hlds__make_hlds__add_pragma__add_pragma_tabling__Modes_55, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_158_158, &hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_56);
            }
#line 263 "add_pragma_tabling.m"
            if (hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded)
#line 257 "add_pragma_tabling.m"
              {
#line 257 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ProcInfo0_57;
#line 257 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ProcTable_58;
#line 257 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredInfo_59;
#line 257 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_187_187;
#line 257 "add_pragma_tabling.m"
                MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling__conv1_ProcInfo0_57;

#line 257 "add_pragma_tabling.m"
                {
#line 257 "add_pragma_tabling.m"
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__TypeCtorInfo_247_247, hlds__make_hlds__add_pragma__add_pragma_tabling__ProcTable0_53, hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_56, &hlds__make_hlds__add_pragma__add_pragma_tabling__conv1_ProcInfo0_57);
                }
#line 257 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__ProcInfo0_57 = ((MR_Word) hlds__make_hlds__add_pragma__add_pragma_tabling__conv1_ProcInfo0_57);
#line 258 "add_pragma_tabling.m"
                {
#line 258 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__set_eval_method_create_aux_preds_16_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ProcId_56, hlds__make_hlds__add_pragma__add_pragma_tabling__ProcInfo0_57, hlds__make_hlds__add_pragma__add_pragma_tabling__Context_22, hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_42, (MR_Integer) 1, hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_31, hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeAttributes_21, hlds__make_hlds__add_pragma__add_pragma_tabling__Status_23, hlds__make_hlds__add_pragma__add_pragma_tabling__ProcTable0_53, &hlds__make_hlds__add_pragma__add_pragma_tabling__ProcTable_58, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_158_158, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_187_187, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0_67, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_68, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_134_134, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_70);
                }
#line 261 "add_pragma_tabling.m"
                {
#line 261 "add_pragma_tabling.m"
                  hlds__hlds_pred__pred_info_set_proc_table_3_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__ProcTable_58, hlds__make_hlds__add_pragma__add_pragma_tabling__PredInfo0_34, &hlds__make_hlds__add_pragma__add_pragma_tabling__PredInfo_59);
                }
#line 262 "add_pragma_tabling.m"
                {
#line 262 "add_pragma_tabling.m"
                  hlds__hlds_module__module_info_set_pred_info_4_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__PredId_24, hlds__make_hlds__add_pragma__add_pragma_tabling__PredInfo_59, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_187_187, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_66);
#line 262 "add_pragma_tabling.m"
                  return;
                }
#line 257 "add_pragma_tabling.m"
              }
#line 263 "add_pragma_tabling.m"
            else
#line 267 "add_pragma_tabling.m"
              {
#line 267 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_193_193;
#line 267 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_194_194;
#line 267 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_195_195;
#line 267 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_198_198;
#line 267 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_199_199;
#line 267 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_206_206;
#line 267 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_207_207;
#line 267 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_211_211;
#line 267 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_214;
#line 267 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_215;
#line 267 "add_pragma_tabling.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_216;

#line 265 "add_pragma_tabling.m"
                {
#line 265 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_194_194 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 265 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_194_194, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
#line 265 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_194_194, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_38));
#line 265 "add_pragma_tabling.m"
                }
#line 267 "add_pragma_tabling.m"
                {
#line 267 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_199_199 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_199_199, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 267 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_199_199, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__SimpleCallId_42));
#line 267 "add_pragma_tabling.m"
                }
#line 267 "add_pragma_tabling.m"
                {
#line 267 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_198_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_198_198, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_199_199));
#line 267 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_198_198, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[30])));
#line 267 "add_pragma_tabling.m"
                }
#line 266 "add_pragma_tabling.m"
                {
#line 266 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_195_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 266 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_195_195, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[52])));
#line 266 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_195_195, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_198_198));
#line 266 "add_pragma_tabling.m"
                }
#line 265 "add_pragma_tabling.m"
                {
#line 265 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_193_193 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 265 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_193_193, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_194_194));
#line 265 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_193_193, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_195_195));
#line 265 "add_pragma_tabling.m"
                }
#line 264 "add_pragma_tabling.m"
                {
#line 264 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_214 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 264 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_214, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[51])));
#line 264 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_214, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_193_193));
#line 264 "add_pragma_tabling.m"
                }
#line 268 "add_pragma_tabling.m"
                {
#line 268 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_207_207 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 268 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_207_207, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Pieces_214));
#line 268 "add_pragma_tabling.m"
                }
#line 268 "add_pragma_tabling.m"
                {
#line 268 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_206_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 268 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_206_206, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_207_207));
#line 268 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_206_206, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 268 "add_pragma_tabling.m"
                }
#line 268 "add_pragma_tabling.m"
                {
#line 268 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_215 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 268 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_215, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Context_22));
#line 268 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_215, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_206_206));
#line 268 "add_pragma_tabling.m"
                }
#line 270 "add_pragma_tabling.m"
                {
#line 270 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__V_211_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 270 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_211_211, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Msg_215));
#line 270 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_211_211, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 270 "add_pragma_tabling.m"
                }
#line 269 "add_pragma_tabling.m"
                {
#line 269 "add_pragma_tabling.m"
                  hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_216 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 269 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_216, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 269 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_216, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 269 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_216, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_211_211));
#line 269 "add_pragma_tabling.m"
                }
#line 271 "add_pragma_tabling.m"
                {
#line 271 "add_pragma_tabling.m"
                  MR_Word base;
#line 271 "add_pragma_tabling.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 271 "add_pragma_tabling.m"
                  *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_70 = base;
#line 271 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Spec_216));
#line 271 "add_pragma_tabling.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_134_134));
#line 271 "add_pragma_tabling.m"
                }
#line 267 "add_pragma_tabling.m"
                *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_68 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0_67;
#line 267 "add_pragma_tabling.m"
                *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_66 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_158_158;
#line 267 "add_pragma_tabling.m"
              }
#line 252 "add_pragma_tabling.m"
          }
#line 237 "add_pragma_tabling.m"
      }
#line 160 "add_pragma_tabling.m"
  }
#line 151 "add_pragma_tabling.m"
}

#line 147 "add_pragma_tabling.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__module_add_pragma_tabled_9_p_0_1(
#line 147 "add_pragma_tabling.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling__closure_arg,
#line 147 "add_pragma_tabling.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling__wrapper_arg_1,
#line 147 "add_pragma_tabling.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling__wrapper_arg_2,
#line 147 "add_pragma_tabling.m"
  MR_Box * hlds__make_hlds__add_pragma__add_pragma_tabling__wrapper_arg_3,
#line 147 "add_pragma_tabling.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling__wrapper_arg_4,
#line 147 "add_pragma_tabling.m"
  MR_Box * hlds__make_hlds__add_pragma__add_pragma_tabling__wrapper_arg_5,
#line 147 "add_pragma_tabling.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling__wrapper_arg_6,
#line 147 "add_pragma_tabling.m"
  MR_Box * hlds__make_hlds__add_pragma__add_pragma_tabling__wrapper_arg_7)
#line 147 "add_pragma_tabling.m"
{
#line 147 "add_pragma_tabling.m"
  {
#line 147 "add_pragma_tabling.m"
    MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling__closure = hlds__make_hlds__add_pragma__add_pragma_tabling__closure_arg;
#line 147 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__conv2_STATE_VARIABLE_ModuleInfo_66;
#line 147 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__conv1_STATE_VARIABLE_QualInfo_68;
#line 147 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__conv0_STATE_VARIABLE_Specs_70;

#line 147 "add_pragma_tabling.m"
    {
#line 147 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__module_add_pragma_tabled_for_pred_15_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__closure, (MR_Integer) 9))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__closure, (MR_Integer) 10))), ((MR_Word) hlds__make_hlds__add_pragma__add_pragma_tabling__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_pragma__add_pragma_tabling__wrapper_arg_2), &hlds__make_hlds__add_pragma__add_pragma_tabling__conv2_STATE_VARIABLE_ModuleInfo_66, ((MR_Word) hlds__make_hlds__add_pragma__add_pragma_tabling__wrapper_arg_4), &hlds__make_hlds__add_pragma__add_pragma_tabling__conv1_STATE_VARIABLE_QualInfo_68, ((MR_Word) hlds__make_hlds__add_pragma__add_pragma_tabling__wrapper_arg_6), &hlds__make_hlds__add_pragma__add_pragma_tabling__conv0_STATE_VARIABLE_Specs_70);
    }
#line 147 "add_pragma_tabling.m"
    *hlds__make_hlds__add_pragma__add_pragma_tabling__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__conv2_STATE_VARIABLE_ModuleInfo_66));
#line 147 "add_pragma_tabling.m"
    *hlds__make_hlds__add_pragma__add_pragma_tabling__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__conv1_STATE_VARIABLE_QualInfo_68));
#line 147 "add_pragma_tabling.m"
    *hlds__make_hlds__add_pragma__add_pragma_tabling__wrapper_arg_7 = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__conv0_STATE_VARIABLE_Specs_70));
#line 147 "add_pragma_tabling.m"
  }
#line 147 "add_pragma_tabling.m"
}

#line 18 "add_pragma_tabling.m"
void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_tabling__module_add_pragma_tabled_9_p_0(
#line 18 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__TabledInfo_10,
#line 18 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Context_11,
#line 18 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Status_12,
#line 18 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_49,
#line 18 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_50,
#line 18 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0_51,
#line 18 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_52,
#line 18 "add_pragma_tabling.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_53,
#line 18 "add_pragma_tabling.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_54)
#line 18 "add_pragma_tabling.m"
{
#line 62 "add_pragma_tabling.m"
  {
#line 62 "add_pragma_tabling.m"
    MR_bool hlds__make_hlds__add_pragma__add_pragma_tabling__succeeded;
#line 62 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__TabledInfo_10, (MR_Integer) 0)));
#line 62 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredNameArityMPF_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__TabledInfo_10, (MR_Integer) 1)));
#line 62 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeModes_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__TabledInfo_10, (MR_Integer) 2)));
#line 62 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeAttributes_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__TabledInfo_10, (MR_Integer) 3)));
#line 62 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__PredNameArityMPF_17, (MR_Integer) 0)));
#line 62 "add_pragma_tabling.m"
    MR_Integer hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__PredNameArityMPF_17, (MR_Integer) 1)));
#line 62 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__MaybePredOrFunc_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__PredNameArityMPF_17, (MR_Integer) 2)));
#line 62 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredicateTable0_23;
#line 62 "add_pragma_tabling.m"
    MR_String hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_24;
#line 62 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds_31;
#line 62 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_73_73;
#line 62 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_76_76;
#line 62 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_134_134;
#line 62 "add_pragma_tabling.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_136_136;
#line 146 "add_pragma_tabling.m"
    MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling__conv5_STATE_VARIABLE_ModuleInfo_50;
#line 146 "add_pragma_tabling.m"
    MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling__conv4_STATE_VARIABLE_QualInfo_52;
#line 146 "add_pragma_tabling.m"
    MR_Box hlds__make_hlds__add_pragma__add_pragma_tabling__conv3_STATE_VARIABLE_Specs_54;

#line 66 "add_pragma_tabling.m"
    {
#line 66 "add_pragma_tabling.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_49, &hlds__make_hlds__add_pragma__add_pragma_tabling__PredicateTable0_23);
    }
#line 67 "add_pragma_tabling.m"
    {
#line 67 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_24 = parse_tree__prog_out__eval_method_to_string_1_f_0(hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_16);
    }
#line 89 "add_pragma_tabling.m"
    if ((hlds__make_hlds__add_pragma__add_pragma_tabling__MaybePredOrFunc_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 90 "add_pragma_tabling.m"
      {
#line 90 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds0_146;

#line 91 "add_pragma_tabling.m"
        {
#line 91 "add_pragma_tabling.m"
          hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__PredicateTable0_23, (MR_Integer) 0, hlds__make_hlds__add_pragma__add_pragma_tabling__PredName_20, hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_21, &hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds0_146);
        }
#line 101 "add_pragma_tabling.m"
        if ((hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds0_146 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 94 "add_pragma_tabling.m"
          {
#line 94 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_56_56;
#line 94 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_64_64;
#line 94 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleName_140;
#line 94 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__DescPieces_141;
#line 94 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredId_142;

#line 95 "add_pragma_tabling.m"
            {
#line 95 "add_pragma_tabling.m"
              hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_49, &hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleName_140);
            }
#line 96 "add_pragma_tabling.m"
            {
#line 96 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 96 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
#line 96 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_56_56, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_24));
#line 96 "add_pragma_tabling.m"
            }
#line 96 "add_pragma_tabling.m"
            {
#line 96 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__DescPieces_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 96 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__DescPieces_141, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_56_56));
#line 96 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__DescPieces_141, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[42])));
#line 96 "add_pragma_tabling.m"
            }
#line 99 "add_pragma_tabling.m"
            {
#line 99 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_64_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 99 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_64_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 99 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_64_64, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__PredName_20));
#line 99 "add_pragma_tabling.m"
            }
#line 97 "add_pragma_tabling.m"
            {
#line 97 "add_pragma_tabling.m"
              hlds__make_hlds__add_pred__preds_add_implicit_report_error_14_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_49, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_73_73, hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleName_140, hlds__make_hlds__add_pragma__add_pragma_tabling__PredName_20, hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_21, (MR_Integer) 0, hlds__make_hlds__add_pragma__add_pragma_tabling__Status_12, (MR_Integer) 0, hlds__make_hlds__add_pragma__add_pragma_tabling__Context_11, hlds__make_hlds__add_pragma__add_pragma_tabling__V_64_64, hlds__make_hlds__add_pragma__add_pragma_tabling__DescPieces_141, &hlds__make_hlds__add_pragma__add_pragma_tabling__PredId_142, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_53, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_76_76);
            }
#line 100 "add_pragma_tabling.m"
            {
#line 100 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 100 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds_31, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__PredId_142));
#line 100 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 100 "add_pragma_tabling.m"
            }
#line 94 "add_pragma_tabling.m"
          }
#line 101 "add_pragma_tabling.m"
        else
#line 102 "add_pragma_tabling.m"
          {
#line 103 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds_31 = hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds0_146;
#line 102 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_73_73 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_49;
#line 102 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_76_76 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_53;
#line 102 "add_pragma_tabling.m"
          }
#line 90 "add_pragma_tabling.m"
      }
#line 89 "add_pragma_tabling.m"
    else
#line 69 "add_pragma_tabling.m"
      {
#line 69 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredOrFunc_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__MaybePredOrFunc_22, (MR_Integer) 0)));
#line 69 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds0_27;

#line 75 "add_pragma_tabling.m"
        {
#line 75 "add_pragma_tabling.m"
          hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__PredicateTable0_23, (MR_Integer) 0, hlds__make_hlds__add_pragma__add_pragma_tabling__PredOrFunc_26, hlds__make_hlds__add_pragma__add_pragma_tabling__PredName_20, hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_21, &hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds0_27);
        }
#line 85 "add_pragma_tabling.m"
        if ((hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds0_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 78 "add_pragma_tabling.m"
          {
#line 78 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleName_28;
#line 78 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__DescPieces_29;
#line 78 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__PredId_30;
#line 78 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_68_68;
#line 78 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_75_75;

#line 79 "add_pragma_tabling.m"
            {
#line 79 "add_pragma_tabling.m"
              hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_49, &hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleName_28);
            }
#line 80 "add_pragma_tabling.m"
            {
#line 80 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_68_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 80 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_68_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
#line 80 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_68_68, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethodStr_24));
#line 80 "add_pragma_tabling.m"
            }
#line 80 "add_pragma_tabling.m"
            {
#line 80 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__DescPieces_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 80 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__DescPieces_29, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_68_68));
#line 80 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__DescPieces_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[42])));
#line 80 "add_pragma_tabling.m"
            }
#line 83 "add_pragma_tabling.m"
            {
#line 83 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__V_75_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 83 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_75_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 83 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_75_75, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__PredName_20));
#line 83 "add_pragma_tabling.m"
            }
#line 81 "add_pragma_tabling.m"
            {
#line 81 "add_pragma_tabling.m"
              hlds__make_hlds__add_pred__preds_add_implicit_report_error_14_p_0(hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_49, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_73_73, hlds__make_hlds__add_pragma__add_pragma_tabling__ModuleName_28, hlds__make_hlds__add_pragma__add_pragma_tabling__PredName_20, hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_21, hlds__make_hlds__add_pragma__add_pragma_tabling__PredOrFunc_26, hlds__make_hlds__add_pragma__add_pragma_tabling__Status_12, (MR_Integer) 0, hlds__make_hlds__add_pragma__add_pragma_tabling__Context_11, hlds__make_hlds__add_pragma__add_pragma_tabling__V_75_75, hlds__make_hlds__add_pragma__add_pragma_tabling__DescPieces_29, &hlds__make_hlds__add_pragma__add_pragma_tabling__PredId_30, hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_53, &hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_76_76);
            }
#line 84 "add_pragma_tabling.m"
            {
#line 84 "add_pragma_tabling.m"
              hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 84 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds_31, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__PredId_30));
#line 84 "add_pragma_tabling.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 84 "add_pragma_tabling.m"
            }
#line 78 "add_pragma_tabling.m"
          }
#line 85 "add_pragma_tabling.m"
        else
#line 86 "add_pragma_tabling.m"
          {
#line 87 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds_31 = hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds0_27;
#line 86 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_73_73 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_0_49;
#line 86 "add_pragma_tabling.m"
            hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_76_76 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_0_53;
#line 86 "add_pragma_tabling.m"
          }
#line 69 "add_pragma_tabling.m"
      }
#line 143 "add_pragma_tabling.m"
    if ((hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeAttributes_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 144 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_134_134 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_76_76;
#line 143 "add_pragma_tabling.m"
    else
#line 107 "add_pragma_tabling.m"
      {
#line 107 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Attributes_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeAttributes_19, (MR_Integer) 0)));
#line 107 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__Statistics_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Attributes_36, (MR_Integer) 2)));
#line 107 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__AllowReset_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Attributes_36, (MR_Integer) 3)));
#line 107 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds_31, (MR_Integer) 1)));
#line 108 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Attributes_36, (MR_Integer) 0)));
#line 108 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__Attributes_36, (MR_Integer) 1)));
#line 111 "add_pragma_tabling.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds_31, (MR_Integer) 0)));

#line 112 "add_pragma_tabling.m"
        if ((hlds__make_hlds__add_pragma__add_pragma_tabling__V_167_167 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 111 "add_pragma_tabling.m"
          hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_134_134 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_76_76;
#line 112 "add_pragma_tabling.m"
        else
#line 113 "add_pragma_tabling.m"
          {
#line 113 "add_pragma_tabling.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_106_106;

#line 125 "add_pragma_tabling.m"
#line 125 "add_pragma_tabling.m"
            switch (hlds__make_hlds__add_pragma__add_pragma_tabling__Statistics_37) {
#line 125 "add_pragma_tabling.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 125 "add_pragma_tabling.m"
              case (MR_Integer) 1:
#line 126 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_106_106 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_76_76;
#line 125 "add_pragma_tabling.m"
                break;
#line 125 "add_pragma_tabling.m"
              case (MR_Integer) 0:
#line 115 "add_pragma_tabling.m"
                {
#line 115 "add_pragma_tabling.m"
                  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__StatsPieces_43;
#line 115 "add_pragma_tabling.m"
                  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__StatsMsg_44;
#line 115 "add_pragma_tabling.m"
                  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__StatsSpec_45;
#line 115 "add_pragma_tabling.m"
                  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_81_81;
#line 115 "add_pragma_tabling.m"
                  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_84_84;
#line 115 "add_pragma_tabling.m"
                  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_85_85;
#line 115 "add_pragma_tabling.m"
                  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_86_86;
#line 115 "add_pragma_tabling.m"
                  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_99_99;
#line 115 "add_pragma_tabling.m"
                  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_100_100;
#line 115 "add_pragma_tabling.m"
                  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_104_104;

#line 118 "add_pragma_tabling.m"
                  {
#line 118 "add_pragma_tabling.m"
                    hlds__make_hlds__add_pragma__add_pragma_tabling__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 118 "add_pragma_tabling.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_86_86, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__PredName_20));
#line 118 "add_pragma_tabling.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_86_86, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_21));
#line 118 "add_pragma_tabling.m"
                  }
#line 118 "add_pragma_tabling.m"
                  {
#line 118 "add_pragma_tabling.m"
                    hlds__make_hlds__add_pragma__add_pragma_tabling__V_85_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 118 "add_pragma_tabling.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_85_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 118 "add_pragma_tabling.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_85_85, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_86_86));
#line 118 "add_pragma_tabling.m"
                  }
#line 118 "add_pragma_tabling.m"
                  {
#line 118 "add_pragma_tabling.m"
                    hlds__make_hlds__add_pragma__add_pragma_tabling__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 118 "add_pragma_tabling.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_84_84, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_85_85));
#line 118 "add_pragma_tabling.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[7])));
#line 118 "add_pragma_tabling.m"
                  }
#line 117 "add_pragma_tabling.m"
                  {
#line 117 "add_pragma_tabling.m"
                    hlds__make_hlds__add_pragma__add_pragma_tabling__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 117 "add_pragma_tabling.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_81_81, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[44])));
#line 117 "add_pragma_tabling.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_81_81, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_84_84));
#line 117 "add_pragma_tabling.m"
                  }
#line 116 "add_pragma_tabling.m"
                  {
#line 116 "add_pragma_tabling.m"
                    hlds__make_hlds__add_pragma__add_pragma_tabling__StatsPieces_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 116 "add_pragma_tabling.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsPieces_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[43])));
#line 116 "add_pragma_tabling.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsPieces_43, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_81_81));
#line 116 "add_pragma_tabling.m"
                  }
#line 121 "add_pragma_tabling.m"
                  {
#line 121 "add_pragma_tabling.m"
                    hlds__make_hlds__add_pragma__add_pragma_tabling__V_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 121 "add_pragma_tabling.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_100_100, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__StatsPieces_43));
#line 121 "add_pragma_tabling.m"
                  }
#line 121 "add_pragma_tabling.m"
                  {
#line 121 "add_pragma_tabling.m"
                    hlds__make_hlds__add_pragma__add_pragma_tabling__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 121 "add_pragma_tabling.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_99_99, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_100_100));
#line 121 "add_pragma_tabling.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 121 "add_pragma_tabling.m"
                  }
#line 121 "add_pragma_tabling.m"
                  {
#line 121 "add_pragma_tabling.m"
                    hlds__make_hlds__add_pragma__add_pragma_tabling__StatsMsg_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 121 "add_pragma_tabling.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsMsg_44, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Context_11));
#line 121 "add_pragma_tabling.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsMsg_44, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_99_99));
#line 121 "add_pragma_tabling.m"
                  }
#line 123 "add_pragma_tabling.m"
                  {
#line 123 "add_pragma_tabling.m"
                    hlds__make_hlds__add_pragma__add_pragma_tabling__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 123 "add_pragma_tabling.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_104_104, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__StatsMsg_44));
#line 123 "add_pragma_tabling.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_104_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 123 "add_pragma_tabling.m"
                  }
#line 122 "add_pragma_tabling.m"
                  {
#line 122 "add_pragma_tabling.m"
                    hlds__make_hlds__add_pragma__add_pragma_tabling__StatsSpec_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 122 "add_pragma_tabling.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsSpec_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 122 "add_pragma_tabling.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsSpec_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 122 "add_pragma_tabling.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__StatsSpec_45, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_104_104));
#line 122 "add_pragma_tabling.m"
                  }
#line 124 "add_pragma_tabling.m"
                  {
#line 124 "add_pragma_tabling.m"
                    hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 124 "add_pragma_tabling.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_106_106, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__StatsSpec_45));
#line 124 "add_pragma_tabling.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_106_106, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_76_76));
#line 124 "add_pragma_tabling.m"
                  }
#line 115 "add_pragma_tabling.m"
                }
#line 125 "add_pragma_tabling.m"
                break;
#line 125 "add_pragma_tabling.m"
            }
#line 139 "add_pragma_tabling.m"
#line 139 "add_pragma_tabling.m"
            switch (hlds__make_hlds__add_pragma__add_pragma_tabling__AllowReset_38) {
#line 139 "add_pragma_tabling.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 139 "add_pragma_tabling.m"
              case (MR_Integer) 0:
#line 129 "add_pragma_tabling.m"
                {
#line 129 "add_pragma_tabling.m"
                  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ResetPieces_46;
#line 129 "add_pragma_tabling.m"
                  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ResetMsg_47;
#line 129 "add_pragma_tabling.m"
                  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__ResetSpec_48;
#line 129 "add_pragma_tabling.m"
                  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_109_109;
#line 129 "add_pragma_tabling.m"
                  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_112_112;
#line 129 "add_pragma_tabling.m"
                  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_113_113;
#line 129 "add_pragma_tabling.m"
                  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_114_114;
#line 129 "add_pragma_tabling.m"
                  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_127_127;
#line 129 "add_pragma_tabling.m"
                  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_128_128;
#line 129 "add_pragma_tabling.m"
                  MR_Word hlds__make_hlds__add_pragma__add_pragma_tabling__V_132_132;

#line 132 "add_pragma_tabling.m"
                  {
#line 132 "add_pragma_tabling.m"
                    hlds__make_hlds__add_pragma__add_pragma_tabling__V_114_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 132 "add_pragma_tabling.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_114_114, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__PredName_20));
#line 132 "add_pragma_tabling.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_114_114, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_21));
#line 132 "add_pragma_tabling.m"
                  }
#line 132 "add_pragma_tabling.m"
                  {
#line 132 "add_pragma_tabling.m"
                    hlds__make_hlds__add_pragma__add_pragma_tabling__V_113_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 132 "add_pragma_tabling.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_113_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 132 "add_pragma_tabling.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_tabling__V_113_113, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_114_114));
#line 132 "add_pragma_tabling.m"
                  }
#line 132 "add_pragma_tabling.m"
                  {
#line 132 "add_pragma_tabling.m"
                    hlds__make_hlds__add_pragma__add_pragma_tabling__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 132 "add_pragma_tabling.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_112_112, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_113_113));
#line 132 "add_pragma_tabling.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_112_112, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[10])));
#line 132 "add_pragma_tabling.m"
                  }
#line 131 "add_pragma_tabling.m"
                  {
#line 131 "add_pragma_tabling.m"
                    hlds__make_hlds__add_pragma__add_pragma_tabling__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 131 "add_pragma_tabling.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_109_109, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[44])));
#line 131 "add_pragma_tabling.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_109_109, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_112_112));
#line 131 "add_pragma_tabling.m"
                  }
#line 130 "add_pragma_tabling.m"
                  {
#line 130 "add_pragma_tabling.m"
                    hlds__make_hlds__add_pragma__add_pragma_tabling__ResetPieces_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 130 "add_pragma_tabling.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__ResetPieces_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[45])));
#line 130 "add_pragma_tabling.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__ResetPieces_46, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_109_109));
#line 130 "add_pragma_tabling.m"
                  }
#line 135 "add_pragma_tabling.m"
                  {
#line 135 "add_pragma_tabling.m"
                    hlds__make_hlds__add_pragma__add_pragma_tabling__V_128_128 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 135 "add_pragma_tabling.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_128_128, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__ResetPieces_46));
#line 135 "add_pragma_tabling.m"
                  }
#line 135 "add_pragma_tabling.m"
                  {
#line 135 "add_pragma_tabling.m"
                    hlds__make_hlds__add_pragma__add_pragma_tabling__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 135 "add_pragma_tabling.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_127_127, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_128_128));
#line 135 "add_pragma_tabling.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_127_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 135 "add_pragma_tabling.m"
                  }
#line 135 "add_pragma_tabling.m"
                  {
#line 135 "add_pragma_tabling.m"
                    hlds__make_hlds__add_pragma__add_pragma_tabling__ResetMsg_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 135 "add_pragma_tabling.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ResetMsg_47, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Context_11));
#line 135 "add_pragma_tabling.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ResetMsg_47, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_127_127));
#line 135 "add_pragma_tabling.m"
                  }
#line 137 "add_pragma_tabling.m"
                  {
#line 137 "add_pragma_tabling.m"
                    hlds__make_hlds__add_pragma__add_pragma_tabling__V_132_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 137 "add_pragma_tabling.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_132_132, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__ResetMsg_47));
#line 137 "add_pragma_tabling.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__V_132_132, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 137 "add_pragma_tabling.m"
                  }
#line 136 "add_pragma_tabling.m"
                  {
#line 136 "add_pragma_tabling.m"
                    hlds__make_hlds__add_pragma__add_pragma_tabling__ResetSpec_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 136 "add_pragma_tabling.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ResetSpec_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 136 "add_pragma_tabling.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ResetSpec_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 136 "add_pragma_tabling.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__ResetSpec_48, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__V_132_132));
#line 136 "add_pragma_tabling.m"
                  }
#line 138 "add_pragma_tabling.m"
                  {
#line 138 "add_pragma_tabling.m"
                    hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 138 "add_pragma_tabling.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_134_134, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__ResetSpec_48));
#line 138 "add_pragma_tabling.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_134_134, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_106_106));
#line 138 "add_pragma_tabling.m"
                  }
#line 129 "add_pragma_tabling.m"
                }
#line 139 "add_pragma_tabling.m"
                break;
#line 139 "add_pragma_tabling.m"
              case (MR_Integer) 1:
#line 140 "add_pragma_tabling.m"
                hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_134_134 = hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_106_106;
#line 139 "add_pragma_tabling.m"
                break;
#line 139 "add_pragma_tabling.m"
            }
#line 113 "add_pragma_tabling.m"
          }
#line 107 "add_pragma_tabling.m"
      }
#line 147 "add_pragma_tabling.m"
    {
#line 147 "add_pragma_tabling.m"
      hlds__make_hlds__add_pragma__add_pragma_tabling__V_136_136 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 147 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_136_136, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_2[0]));
#line 147 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_136_136, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__module_add_pragma_tabled_9_p_0_1));
#line 147 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_136_136, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 147 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_136_136, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__EvalMethod_16));
#line 147 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_136_136, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__PredName_20));
#line 147 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_136_136, 5) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Arity_21));
#line 147 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_136_136, 6) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__MaybePredOrFunc_22));
#line 147 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_136_136, 7) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeModes_18));
#line 147 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_136_136, 8) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__MaybeAttributes_19));
#line 147 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_136_136, 9) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Context_11));
#line 147 "add_pragma_tabling.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_tabling__V_136_136, 10) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__Status_12));
#line 147 "add_pragma_tabling.m"
    }
#line 146 "add_pragma_tabling.m"
    {
#line 146 "add_pragma_tabling.m"
      mercury__list__foldl3_8_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0, (MR_Word) &hlds__make_hlds__add_pragma__add_pragma_tabling_scalar_common_1[0], hlds__make_hlds__add_pragma__add_pragma_tabling__V_136_136, hlds__make_hlds__add_pragma__add_pragma_tabling__PredIds_31, ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_73_73)), &hlds__make_hlds__add_pragma__add_pragma_tabling__conv5_STATE_VARIABLE_ModuleInfo_50, ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_0_51)), &hlds__make_hlds__add_pragma__add_pragma_tabling__conv4_STATE_VARIABLE_QualInfo_52, ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_134_134)), &hlds__make_hlds__add_pragma__add_pragma_tabling__conv3_STATE_VARIABLE_Specs_54);
    }
#line 146 "add_pragma_tabling.m"
    *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_ModuleInfo_50 = ((MR_Word) hlds__make_hlds__add_pragma__add_pragma_tabling__conv5_STATE_VARIABLE_ModuleInfo_50);
#line 146 "add_pragma_tabling.m"
    *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_QualInfo_52 = ((MR_Word) hlds__make_hlds__add_pragma__add_pragma_tabling__conv4_STATE_VARIABLE_QualInfo_52);
#line 146 "add_pragma_tabling.m"
    *hlds__make_hlds__add_pragma__add_pragma_tabling__STATE_VARIABLE_Specs_54 = ((MR_Word) hlds__make_hlds__add_pragma__add_pragma_tabling__conv3_STATE_VARIABLE_Specs_54);
#line 62 "add_pragma_tabling.m"
  }
#line 18 "add_pragma_tabling.m"
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
