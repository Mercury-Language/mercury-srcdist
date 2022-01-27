/*
** Automatically generated from `ml_proc_gen.m'
** by the Mercury compiler,
** version rotd-2015-09-15
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


/* :- module ml_backend.ml_proc_gen. */
/* :- implementation. */

/*
INIT mercury__ml_backend__ml_proc_gen__init
ENDINIT
*/

#include "ml_backend.ml_proc_gen.mih"


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
#include "std_util.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
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
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
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
#include "hlds.passes_aux.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
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
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "ml_backend.ml_code_gen.mih"
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_type_gen.mih"
#include "ml_backend.ml_unify_gen.mih"
#include "ml_backend.ml_util.mih"
#include "ml_backend.mlds.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 158 "ml_backend.ml_proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0;

#line 161 "ml_backend.ml_proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0;

#line 164 "ml_backend.ml_proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0;

#line 167 "ml_backend.ml_proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0;

#line 170 "ml_backend.ml_proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_hlds__hlds_module__type_ctor_info_pragma_exported_proc_0;

#line 173 "ml_backend.ml_proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_libs__globals__type_ctor_info_foreign_language_0__plain_ml_backend__mlds__type_ctor_info_mlds_foreign_code_0;

#line 176 "ml_backend.ml_proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_proc_gen__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

#line 179 "ml_backend.ml_proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_import_0;

#line 182 "ml_backend.ml_proc_gen.c"
static const MR_VA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen____vpti_pred_1__plain_libs__globals__type_ctor_info_gc_method_0;

#line 185 "ml_backend.ml_proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_proc_gen__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_table_struct_info_0;

#line 188 "ml_backend.ml_proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0;

#line 191 "ml_backend.ml_proc_gen.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_proc_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 194 "ml_backend.ml_proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 197 "ml_backend.ml_proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 200 "ml_backend.ml_proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_statement_0;

#line 756 "ml_proc_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__pred__ml_gen_table_structs__756__2_2_p_0(
#line 756 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__GC_Method_10,
#line 756 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__HeadVar__2_15);

#line 756 "ml_proc_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__pred__ml_gen_table_structs__756__1_2_p_0(
#line 756 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__HeadVar__1_16,
#line 756 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__HeadVar__2_22);

#line 633 "ml_proc_gen.m"
static void MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__pred__ml_gen_proc_body__633__1_7_p_0(
#line 633 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__CodeModel_11,
#line 633 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__Context_22,
#line 633 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__ConvOutputStatements_26,
#line 633 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__HeadVar__4_40,
#line 633 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__HeadVar__5_41,
#line 633 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__HeadVar__6_42,
#line 633 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__HeadVar__7_43);

#line 139 "ml_proc_gen.m"
static MR_Word MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__func__ml_gen_imports__139__1_1_f_0(
#line 139 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__HeadVar__1_15);

#line 997 "ml_proc_gen.m"
static MR_Word MR_CALL 
ml_backend__ml_proc_gen__attribute_to_mlds_attribute_2_f_0(
#line 997 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__ModuleInfo_4,
#line 997 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__HeadVar__2_2);

#line 995 "ml_proc_gen.m"
static MR_Box MR_CALL 
ml_backend__ml_proc_gen__attributes_to_mlds_attributes_2_f_0_1(
#line 995 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__closure_arg,
#line 995 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1);

#line 991 "ml_proc_gen.m"
static MR_Word MR_CALL 
ml_backend__ml_proc_gen__attributes_to_mlds_attributes_2_f_0(
#line 991 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__ModuleInfo_4,
#line 991 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__Attrs_5);

#line 961 "ml_proc_gen.m"
static MR_Word MR_CALL 
ml_backend__ml_proc_gen__tabling_name_and_init_to_defn_5_f_0(
#line 961 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__ProcLabel_7,
#line 961 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__MLDS_Context_8,
#line 961 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__Constness_9,
#line 961 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__Id_10,
#line 961 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__Initializer_11);

#line 954 "ml_proc_gen.m"
static MR_Word MR_CALL 
ml_backend__ml_proc_gen__gen_init_tabling_name_3_f_0(
#line 954 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__ModuleName_5,
#line 954 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__ProcLabel_6,
#line 954 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__TablingId_7);

#line 912 "ml_proc_gen.m"
static void MR_CALL 
ml_backend__ml_proc_gen__init_stats_step_3_p_0(
#line 912 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__StepId_4,
#line 912 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__StepDesc_5,
#line 912 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__Init_6);

#line 898 "ml_proc_gen.m"
static void MR_CALL 
ml_backend__ml_proc_gen__init_stats_8_p_0_1(
#line 898 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__closure_arg,
#line 898 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1,
#line 898 "ml_proc_gen.m"
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_2);

#line 881 "ml_proc_gen.m"
static void MR_CALL 
ml_backend__ml_proc_gen__init_stats_8_p_0(
#line 881 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__MLDS_ModuleName_9,
#line 881 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__MLDS_ProcLabel_10,
#line 881 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__MLDS_Context_11,
#line 881 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__CallOrAnswer_12,
#line 881 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__CurrOrPrev_13,
#line 881 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__StepDescs_14,
#line 881 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__StatsInit_15,
#line 881 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__StatsStepDefns_16);

#line 863 "ml_proc_gen.m"
static MR_Word MR_CALL 
ml_backend__ml_proc_gen__init_step_desc_2_f_0(
#line 863 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__StructId_4,
#line 863 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__StepDesc_5);

#line 818 "ml_proc_gen.m"
static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_gen_add_table_var_4_p_0_2(
#line 818 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__closure_arg,
#line 818 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1);

#line 792 "ml_proc_gen.m"
static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_gen_add_table_var_4_p_0_1(
#line 792 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__closure_arg,
#line 792 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1);

#line 762 "ml_proc_gen.m"
static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_add_table_var_4_p_0(
#line 762 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__ModuleInfo_5,
#line 762 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__HeadVar__2_2,
#line 762 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Defns_0_57,
#line 762 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_Defns_58);

#line 655 "ml_proc_gen.m"
static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_convert_headvars_10_p_0(
#line 655 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__Vars_11,
#line 655 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__HeadTypes_12,
#line 655 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__ArgModes_13,
#line 655 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__CopiedOutputVars_14,
#line 655 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__Context_15,
#line 655 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__Decls_16,
#line 655 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__InputStatements_17,
#line 655 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__OutputStatements_18,
#line 655 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Info_0_40,
#line 655 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_Info_41);

#line 633 "ml_proc_gen.m"
static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_body_10_p_0_2(
#line 633 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__closure_arg,
#line 633 "ml_proc_gen.m"
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_1,
#line 633 "ml_proc_gen.m"
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_2,
#line 633 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_3,
#line 633 "ml_proc_gen.m"
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_4);

#line 628 "ml_proc_gen.m"
static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_body_10_p_0_1(
#line 628 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__closure_arg,
#line 628 "ml_proc_gen.m"
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_1,
#line 628 "ml_proc_gen.m"
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_2,
#line 628 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_3,
#line 628 "ml_proc_gen.m"
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_4);

#line 597 "ml_proc_gen.m"
static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_body_10_p_0(
#line 597 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__CodeModel_11,
#line 597 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__HeadVars_12,
#line 597 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__ArgTypes_13,
#line 597 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__ArgModes_14,
#line 597 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__CopiedOutputVars_15,
#line 597 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__Goal_16,
#line 597 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__Decls_17,
#line 597 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__Statements_18,
#line 597 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Info_0_36,
#line 597 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_Info_37);

#line 544 "ml_proc_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_proc_gen__ml_det_copy_out_vars_4_p_0_1(
#line 544 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__closure_arg,
#line 544 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1);

#line 531 "ml_proc_gen.m"
static void MR_CALL 
ml_backend__ml_proc_gen__ml_det_copy_out_vars_4_p_0(
#line 531 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__ModuleInfo_5,
#line 531 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__CopiedOutputVars_6,
#line 531 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Info_0_17,
#line 531 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_Info_18);

#line 509 "ml_proc_gen.m"
static MR_Word MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_decl_flags_3_f_0(
#line 509 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__ModuleInfo_5,
#line 509 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__PredId_6,
#line 509 "ml_proc_gen.m"
  MR_Integer ml_backend__ml_proc_gen__ProcId_7);

#line 383 "ml_proc_gen.m"
static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_9_p_0(
#line 383 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_59,
#line 383 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_60,
#line 383 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__ConstStructMap_11,
#line 383 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__PredId_12,
#line 383 "ml_proc_gen.m"
  MR_Integer ml_backend__ml_proc_gen__ProcId_13,
#line 383 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Defns_0_61,
#line 383 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_Defns_62,
#line 383 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_0_63,
#line 383 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_64);

#line 365 "ml_proc_gen.m"
static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_procs_9_p_0(
#line 365 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_1,
#line 365 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_2,
#line 365 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__ConstStructMap_3,
#line 365 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__PredId_4,
#line 365 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__HeadVar__5_5,
#line 365 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Defns_0_6,
#line 365 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_Defns_7,
#line 365 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_0_8,
#line 365 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_9);

#line 302 "ml_proc_gen.m"
static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_preds_acc_8_p_0(
#line 302 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_22,
#line 302 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_23,
#line 302 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__ConstStructMap_10,
#line 302 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__PredIds0_11,
#line 302 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Defns_0_24,
#line 302 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_Defns_25,
#line 302 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalDefns_0_26,
#line 302 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalDefns_27);

#line 280 "ml_proc_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_proc_gen__has_ptr_type_1_p_0(
#line 280 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__HeadVar__1_1);

#line 269 "ml_proc_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_proc_gen__ml_gen_pragma_export_proc_3_p_0_1(
#line 269 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__closure_arg,
#line 269 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1);

#line 236 "ml_proc_gen.m"
static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_pragma_export_proc_3_p_0(
#line 236 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__ModuleInfo_4,
#line 236 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__PragmaExportedProc_5,
#line 236 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__Defn_6);

#line 759 "ml_proc_gen.m"
static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_defns_4_p_0_3(
#line 759 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__closure_arg,
#line 759 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1,
#line 759 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_2,
#line 759 "ml_proc_gen.m"
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_3);

#line 756 "ml_proc_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_proc_gen__ml_gen_defns_4_p_0_2(
#line 756 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__closure_arg);

#line 756 "ml_proc_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_proc_gen__ml_gen_defns_4_p_0_1(
#line 756 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__closure_arg,
#line 756 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1);

#line 192 "ml_proc_gen.m"
static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_defns_4_p_0(
#line 192 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_12,
#line 192 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_13,
#line 192 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__Defns_6,
#line 192 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_14);

#line 152 "ml_proc_gen.m"
static MR_Word MR_CALL 
ml_backend__ml_proc_gen__foreign_type_required_imports_2_f_0(
#line 152 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__Target_4,
#line 152 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__HeadVar__2_2);

#line 121 "ml_proc_gen.m"
static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_foreign_code_lang_8_p_0_1(
#line 121 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__closure_arg,
#line 121 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1,
#line 121 "ml_proc_gen.m"
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_2);

#line 106 "ml_proc_gen.m"
static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_foreign_code_lang_8_p_0(
#line 106 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__ModuleInfo_9,
#line 106 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__ForeignDeclCodes_10,
#line 106 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__ForeignBodyCodes_11,
#line 106 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__WantedForeignImports_12,
#line 106 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__ForeignExports_13,
#line 106 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__Lang_14,
#line 106 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Map_0_24,
#line 106 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_Map_25);

#line 147 "ml_proc_gen.m"
static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_code_gen_3_p_0_4(
#line 147 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__closure_arg,
#line 147 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1);

#line 139 "ml_proc_gen.m"
static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_code_gen_3_p_0_3(
#line 139 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__closure_arg,
#line 139 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1);

#line 101 "ml_proc_gen.m"
static void MR_CALL 
ml_backend__ml_proc_gen__ml_code_gen_3_p_0_2(
#line 101 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__closure_arg,
#line 101 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1,
#line 101 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_2,
#line 101 "ml_proc_gen.m"
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_3);

#line 97 "ml_proc_gen.m"
static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_code_gen_3_p_0_1(
#line 97 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__closure_arg,
#line 97 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1);


static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_1[12][2];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_2[5][3];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_3[6][6];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_4[1][11];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_5[3][5];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_6[4][4];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_7[1][7];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_9[3][1];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_10[1][9];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_11[1][10];


#line 214 "ml_proc_gen.m"
/* sealed */ struct ml_backend__ml_proc_gen__vector_common_type_8_0_s {
#line 214 "ml_proc_gen.m"
  const MR_Word ml_backend__ml_proc_gen__vector_common_type_8_0__vct_8_f_0;
#line 214 "ml_proc_gen.m"
};

static /* final */ const struct ml_backend__ml_proc_gen__vector_common_type_8_0_s ml_backend__ml_proc_gen_vector_common_8[5];



static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_1[12][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_import_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_proc_gen_scalar_common_9[1])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_proc_gen_scalar_common_9[2])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_2[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_foreign_code_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_5[0])),
    ((MR_Box) (ml_backend__ml_proc_gen__ml_code_gen_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_6[1])),
    ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_pragma_export_proc_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_3[6][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_modules_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_compilation_target_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_import_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_pragma_export_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_proc_tabling_struct_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_step_desc_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_attribute_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_attribute_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_4[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_hlds__hlds_module__type_ctor_info_pragma_exported_proc_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_libs__globals__type_ctor_info_foreign_language_0__plain_ml_backend__mlds__type_ctor_info_mlds_foreign_code_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_libs__globals__type_ctor_info_foreign_language_0__plain_ml_backend__mlds__type_ctor_info_mlds_foreign_code_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_5[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_import_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_gc_method_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_gc_method_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_gc_method_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen____vpti_pred_1__plain_libs__globals__type_ctor_info_gc_method_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_6[4][4] = {
  /* row 0 */
  {
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_5[1])),
    ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_defns_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 5))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_3[4])),
    ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_add_table_var_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_proc_gen_scalar_common_9[1])))
  },
  /* row 3 */
  {
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_3[4])),
    ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_add_table_var_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_proc_gen_scalar_common_9[2])))
  },
};

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_7[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_table_struct_info_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_9[3][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_10[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_statement_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_11[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_statement_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_statement_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0))
  },
};


static /* final */ const struct ml_backend__ml_proc_gen__vector_common_type_8_0_s ml_backend__ml_proc_gen_vector_common_8[5] = {
  /* row 0 */   {     (MR_Integer) 1 },
  /* row 1 */   {     (MR_Integer) 0 },
  /* row 2 */   {     (MR_Integer) 1 },
  /* row 3 */   {     (MR_Integer) 1 },
  /* row 4 */   {     (MR_Integer) 0 },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1010 "ml_backend.ml_proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0
  }
};

#line 1018 "ml_backend.ml_proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0
  }
};

#line 1026 "ml_backend.ml_proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0
  }
};

#line 1034 "ml_backend.ml_proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0
  }
};

#line 1042 "ml_backend.ml_proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_hlds__hlds_module__type_ctor_info_pragma_exported_proc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0
  }
};

#line 1050 "ml_backend.ml_proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_libs__globals__type_ctor_info_foreign_language_0__plain_ml_backend__mlds__type_ctor_info_mlds_foreign_code_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_foreign_language_0,
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_foreign_code_0
  }
};

#line 1059 "ml_backend.ml_proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_proc_gen__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0
  }
};

#line 1068 "ml_backend.ml_proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_import_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_import_0
  }
};

#line 1076 "ml_backend.ml_proc_gen.c"
static const MR_VA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen____vpti_pred_1__plain_libs__globals__type_ctor_info_gc_method_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_gc_method_0
  }
};

#line 1085 "ml_backend.ml_proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_proc_gen__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_table_struct_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0
  }
};

#line 1094 "ml_backend.ml_proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0
  }
};

#line 1102 "ml_backend.ml_proc_gen.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_proc_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1110 "ml_backend.ml_proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ml_backend__ml_proc_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1119 "ml_backend.ml_proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1127 "ml_backend.ml_proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_statement_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0
  }
};

#line 756 "ml_proc_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__pred__ml_gen_table_structs__756__2_2_p_0(
#line 756 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__GC_Method_10,
#line 756 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__HeadVar__2_15)
#line 756 "ml_proc_gen.m"
{
#line 756 "ml_proc_gen.m"
  {
#line 756 "ml_proc_gen.m"
    MR_bool ml_backend__ml_proc_gen__succeeded;

#line 756 "ml_proc_gen.m"
    {
#line 756 "ml_proc_gen.m"
      return ml_backend__ml_proc_gen__succeeded = mercury__std_util__isnt_2_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_gc_method_0, ml_backend__ml_proc_gen__HeadVar__2_15, ((MR_Box) (ml_backend__ml_proc_gen__GC_Method_10)));
    }
#line 756 "ml_proc_gen.m"
    return ml_backend__ml_proc_gen__succeeded;
#line 756 "ml_proc_gen.m"
  }
#line 756 "ml_proc_gen.m"
}

#line 756 "ml_proc_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__pred__ml_gen_table_structs__756__1_2_p_0(
#line 756 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__HeadVar__1_16,
#line 756 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__HeadVar__2_22)
#line 756 "ml_proc_gen.m"
{
#line 756 "ml_proc_gen.m"
  {
#line 756 "ml_proc_gen.m"
    MR_bool ml_backend__ml_proc_gen__succeeded = (ml_backend__ml_proc_gen__HeadVar__1_16 == ml_backend__ml_proc_gen__HeadVar__2_22);

#line 756 "ml_proc_gen.m"
    return ml_backend__ml_proc_gen__succeeded;
#line 756 "ml_proc_gen.m"
  }
#line 756 "ml_proc_gen.m"
}

#line 633 "ml_proc_gen.m"
static void MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__pred__ml_gen_proc_body__633__1_7_p_0(
#line 633 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__CodeModel_11,
#line 633 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__Context_22,
#line 633 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__ConvOutputStatements_26,
#line 633 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__HeadVar__4_40,
#line 633 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__HeadVar__5_41,
#line 633 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__HeadVar__6_42,
#line 633 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__HeadVar__7_43)
#line 633 "ml_proc_gen.m"
{
#line 633 "ml_proc_gen.m"
  {
#line 633 "ml_proc_gen.m"
    MR_bool ml_backend__ml_proc_gen__succeeded;
#line 633 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__SuccStatements_33;

#line 635 "ml_proc_gen.m"
    {
#line 635 "ml_proc_gen.m"
      ml_backend__ml_code_util__ml_gen_success_5_p_0(ml_backend__ml_proc_gen__CodeModel_11, ml_backend__ml_proc_gen__Context_22, &ml_backend__ml_proc_gen__SuccStatements_33, ml_backend__ml_proc_gen__HeadVar__6_42, ml_backend__ml_proc_gen__HeadVar__7_43);
    }
#line 636 "ml_proc_gen.m"
    *ml_backend__ml_proc_gen__HeadVar__4_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 637 "ml_proc_gen.m"
    {
#line 637 "ml_proc_gen.m"
      *ml_backend__ml_proc_gen__HeadVar__5_41 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_proc_gen__ConvOutputStatements_26, ml_backend__ml_proc_gen__SuccStatements_33);
    }
#line 633 "ml_proc_gen.m"
  }
#line 633 "ml_proc_gen.m"
}

#line 139 "ml_proc_gen.m"
static MR_Word MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__func__ml_gen_imports__139__1_1_f_0(
#line 139 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__HeadVar__1_15)
#line 139 "ml_proc_gen.m"
{
#line 139 "ml_proc_gen.m"
  {
#line 139 "ml_proc_gen.m"
    MR_bool ml_backend__ml_proc_gen__succeeded;
#line 139 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__HeadVar__2_16;
#line 139 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_18_18;

#line 140 "ml_proc_gen.m"
    {
#line 140 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_18_18 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_proc_gen__HeadVar__1_15);
    }
#line 139 "ml_proc_gen.m"
    {
#line 139 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__HeadVar__2_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 139 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__HeadVar__2_16, 0) = ((MR_Box) ((MR_Integer) 1));
#line 139 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__HeadVar__2_16, 1) = ((MR_Box) (ml_backend__ml_proc_gen__V_18_18));
#line 139 "ml_proc_gen.m"
    }
#line 139 "ml_proc_gen.m"
    return ml_backend__ml_proc_gen__HeadVar__2_16;
#line 139 "ml_proc_gen.m"
  }
#line 139 "ml_proc_gen.m"
}

#line 997 "ml_proc_gen.m"
static MR_Word MR_CALL 
ml_backend__ml_proc_gen__attribute_to_mlds_attribute_2_f_0(
#line 997 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__ModuleInfo_4,
#line 997 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__HeadVar__2_2)
#line 997 "ml_proc_gen.m"
{
#line 1000 "ml_proc_gen.m"
  {
#line 1000 "ml_proc_gen.m"
    MR_bool ml_backend__ml_proc_gen__succeeded;
#line 1000 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__HeadVar__3_3;
#line 1000 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__Type_5 = (MR_Word) ml_backend__ml_proc_gen__HeadVar__2_2;
#line 1000 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_6_6;

#line 1001 "ml_proc_gen.m"
    {
#line 1001 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_6_6 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_proc_gen__ModuleInfo_4, ml_backend__ml_proc_gen__Type_5);
    }
#line 1001 "ml_proc_gen.m"
    ml_backend__ml_proc_gen__HeadVar__3_3 = (MR_Word) ml_backend__ml_proc_gen__V_6_6;
#line 1000 "ml_proc_gen.m"
    return ml_backend__ml_proc_gen__HeadVar__3_3;
#line 1000 "ml_proc_gen.m"
  }
#line 997 "ml_proc_gen.m"
}

#line 995 "ml_proc_gen.m"
static MR_Box MR_CALL 
ml_backend__ml_proc_gen__attributes_to_mlds_attributes_2_f_0_1(
#line 995 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__closure_arg,
#line 995 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1)
#line 995 "ml_proc_gen.m"
{
#line 995 "ml_proc_gen.m"
  {
#line 995 "ml_proc_gen.m"
    MR_Box ml_backend__ml_proc_gen__wrapper_arg_2;
#line 995 "ml_proc_gen.m"
    MR_Box ml_backend__ml_proc_gen__closure = ml_backend__ml_proc_gen__closure_arg;
#line 995 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__conv0_HeadVar__3_3;

#line 995 "ml_proc_gen.m"
    {
#line 995 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__conv0_HeadVar__3_3 = ml_backend__ml_proc_gen__attribute_to_mlds_attribute_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_proc_gen__wrapper_arg_1));
    }
#line 995 "ml_proc_gen.m"
    ml_backend__ml_proc_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_proc_gen__conv0_HeadVar__3_3));
#line 995 "ml_proc_gen.m"
    return ml_backend__ml_proc_gen__wrapper_arg_2;
#line 995 "ml_proc_gen.m"
  }
#line 995 "ml_proc_gen.m"
}

#line 991 "ml_proc_gen.m"
static MR_Word MR_CALL 
ml_backend__ml_proc_gen__attributes_to_mlds_attributes_2_f_0(
#line 991 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__ModuleInfo_4,
#line 991 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__Attrs_5)
#line 991 "ml_proc_gen.m"
{
#line 994 "ml_proc_gen.m"
  {
#line 994 "ml_proc_gen.m"
    MR_bool ml_backend__ml_proc_gen__succeeded;
#line 994 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__HeadVar__3_3;
#line 994 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_6_6;

#line 995 "ml_proc_gen.m"
    {
#line 995 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 995 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__V_6_6, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_3[5]));
#line 995 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__V_6_6, 1) = ((MR_Box) (ml_backend__ml_proc_gen__attributes_to_mlds_attributes_2_f_0_1));
#line 995 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__V_6_6, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 995 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__V_6_6, 3) = ((MR_Box) (ml_backend__ml_proc_gen__ModuleInfo_4));
#line 995 "ml_proc_gen.m"
    }
#line 995 "ml_proc_gen.m"
    {
#line 995 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__HeadVar__3_3 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_attribute_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_attribute_0, ml_backend__ml_proc_gen__V_6_6, ml_backend__ml_proc_gen__Attrs_5);
    }
#line 994 "ml_proc_gen.m"
    return ml_backend__ml_proc_gen__HeadVar__3_3;
#line 994 "ml_proc_gen.m"
  }
#line 991 "ml_proc_gen.m"
}

#line 961 "ml_proc_gen.m"
static MR_Word MR_CALL 
ml_backend__ml_proc_gen__tabling_name_and_init_to_defn_5_f_0(
#line 961 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__ProcLabel_7,
#line 961 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__MLDS_Context_8,
#line 961 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__Constness_9,
#line 961 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__Id_10,
#line 961 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__Initializer_11)
#line 961 "ml_proc_gen.m"
{
#line 965 "ml_proc_gen.m"
  {
#line 965 "ml_proc_gen.m"
    MR_bool ml_backend__ml_proc_gen__succeeded;
#line 965 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__Defn_12;
#line 965 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__MLDS_Type_14;
#line 965 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__Flags_15;
#line 965 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__DefnBody_16;
#line 965 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__Name_17;
#line 965 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_18_18;

#line 967 "ml_proc_gen.m"
    {
#line 967 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__MLDS_Type_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 967 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__MLDS_Type_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 967 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__MLDS_Type_14, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Id_10));
#line 967 "ml_proc_gen.m"
    }
#line 983 "ml_proc_gen.m"
    {
#line 983 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__Flags_15 = ml_backend__mlds__init_decl_flags_6_f_0((MR_Integer) 2, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, ml_backend__ml_proc_gen__Constness_9, (MR_Integer) 0);
    }
#line 969 "ml_proc_gen.m"
    {
#line 969 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__DefnBody_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 969 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__DefnBody_16, 0) = ((MR_Box) (ml_backend__ml_proc_gen__MLDS_Type_14));
#line 969 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__DefnBody_16, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Initializer_11));
#line 969 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__DefnBody_16, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 969 "ml_proc_gen.m"
    }
#line 970 "ml_proc_gen.m"
    {
#line 970 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_18_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 970 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__V_18_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 970 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__V_18_18, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ProcLabel_7));
#line 970 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__V_18_18, 2) = ((MR_Box) (ml_backend__ml_proc_gen__Id_10));
#line 970 "ml_proc_gen.m"
    }
#line 970 "ml_proc_gen.m"
    {
#line 970 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__Name_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 970 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Name_17, 0) = ((MR_Box) (ml_backend__ml_proc_gen__V_18_18));
#line 970 "ml_proc_gen.m"
    }
#line 971 "ml_proc_gen.m"
    {
#line 971 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__Defn_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 971 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Defn_12, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Name_17));
#line 971 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Defn_12, 1) = ((MR_Box) (ml_backend__ml_proc_gen__MLDS_Context_8));
#line 971 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Defn_12, 2) = ((MR_Box) (ml_backend__ml_proc_gen__Flags_15));
#line 971 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Defn_12, 3) = ((MR_Box) (ml_backend__ml_proc_gen__DefnBody_16));
#line 971 "ml_proc_gen.m"
    }
#line 965 "ml_proc_gen.m"
    return ml_backend__ml_proc_gen__Defn_12;
#line 965 "ml_proc_gen.m"
  }
#line 961 "ml_proc_gen.m"
}

#line 954 "ml_proc_gen.m"
static MR_Word MR_CALL 
ml_backend__ml_proc_gen__gen_init_tabling_name_3_f_0(
#line 954 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__ModuleName_5,
#line 954 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__ProcLabel_6,
#line 954 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__TablingId_7)
#line 954 "ml_proc_gen.m"
{
#line 957 "ml_proc_gen.m"
  {
#line 957 "ml_proc_gen.m"
    MR_bool ml_backend__ml_proc_gen__succeeded;
#line 957 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__Rval_8;
#line 957 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__DataAddr_9;
#line 957 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_10_10;
#line 957 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_11_11;
#line 957 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_12_12;

#line 958 "ml_proc_gen.m"
    {
#line 958 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_10_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 958 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__V_10_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 958 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__V_10_10, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ProcLabel_6));
#line 958 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__V_10_10, 2) = ((MR_Box) (ml_backend__ml_proc_gen__TablingId_7));
#line 958 "ml_proc_gen.m"
    }
#line 958 "ml_proc_gen.m"
    {
#line 958 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__DataAddr_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 958 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__DataAddr_9, 0) = ((MR_Box) (ml_backend__ml_proc_gen__ModuleName_5));
#line 958 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__DataAddr_9, 1) = ((MR_Box) (ml_backend__ml_proc_gen__V_10_10));
#line 958 "ml_proc_gen.m"
    }
#line 959 "ml_proc_gen.m"
    ml_backend__ml_proc_gen__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_proc_gen__DataAddr_9);
#line 959 "ml_proc_gen.m"
    {
#line 959 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_11_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 959 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__V_11_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 959 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__V_11_11, 1) = ((MR_Box) (ml_backend__ml_proc_gen__V_12_12));
#line 959 "ml_proc_gen.m"
    }
#line 959 "ml_proc_gen.m"
    {
#line 959 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__Rval_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 959 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Rval_8, 0) = ((MR_Box) (ml_backend__ml_proc_gen__V_11_11));
#line 959 "ml_proc_gen.m"
    }
#line 957 "ml_proc_gen.m"
    return ml_backend__ml_proc_gen__Rval_8;
#line 957 "ml_proc_gen.m"
  }
#line 954 "ml_proc_gen.m"
}

#line 912 "ml_proc_gen.m"
static void MR_CALL 
ml_backend__ml_proc_gen__init_stats_step_3_p_0(
#line 912 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__StepId_4,
#line 912 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__StepDesc_5,
#line 912 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__Init_6)
#line 912 "ml_proc_gen.m"
{
#line 915 "ml_proc_gen.m"
  {
#line 915 "ml_proc_gen.m"
    MR_bool ml_backend__ml_proc_gen__succeeded;
#line 915 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__Step_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__StepDesc_5, (MR_Integer) 1)));
#line 915 "ml_proc_gen.m"
    MR_String ml_backend__ml_proc_gen__KindStr_9;
#line 915 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_10_10;
#line 915 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_11_11;
#line 915 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_12_12;
#line 915 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_14_14;
#line 915 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_15_15;
#line 915 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_17_17;
#line 915 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_18_18;
#line 915 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_19_19;
#line 915 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_20_20;
#line 915 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_22_22;
#line 915 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_23_23;
#line 915 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_25_25;
#line 915 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_26_26;
#line 915 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_28_28;
#line 915 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_29_29;
#line 915 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_31_31;
#line 915 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_32_32;
#line 915 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_34_34;
#line 915 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_35_35;
#line 915 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_37_37;
#line 915 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_38_38;
#line 915 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_40_40;
#line 915 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_41_41;
#line 915 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_43_43;
#line 915 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_44_44;
#line 915 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_46_46;
#line 915 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_47_47;
#line 915 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_49_49;
#line 915 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_50_50;
#line 915 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_52_52;
#line 915 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_53_53;
#line 915 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_55_55;
#line 915 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_56_56;
#line 915 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_58_58;
#line 915 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_59_59;
#line 915 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_61_61;
#line 915 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_62_62;
#line 915 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_64_64;
#line 915 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_65_65;
#line 915 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_67_67;
#line 915 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_68_68;
#line 915 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_72_72;
#line 915 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_73_73;
#line 916 "ml_proc_gen.m"
    MR_String ml_backend__ml_proc_gen___VarName_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__StepDesc_5, (MR_Integer) 0)));

#line 917 "ml_proc_gen.m"
    {
#line 917 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__KindStr_9 = hlds__hlds_pred__table_step_stats_kind_1_f_0(ml_backend__ml_proc_gen__Step_8);
    }
#line 918 "ml_proc_gen.m"
    {
#line 918 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_10_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 918 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__V_10_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 918 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__V_10_10, 1) = ((MR_Box) (ml_backend__ml_proc_gen__StepId_4));
#line 918 "ml_proc_gen.m"
    }
#line 919 "ml_proc_gen.m"
    {
#line 919 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_12_12 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    }
#line 920 "ml_proc_gen.m"
    {
#line 920 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_15_15 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    }
#line 952 "ml_proc_gen.m"
    {
#line 952 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_73_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 952 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__V_73_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 952 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__V_73_73, 1) = ((MR_Box) (ml_backend__ml_proc_gen__KindStr_9));
#line 952 "ml_proc_gen.m"
    }
#line 952 "ml_proc_gen.m"
    {
#line 952 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_72_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 952 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__V_72_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 952 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__V_72_72, 1) = ((MR_Box) (ml_backend__ml_proc_gen__V_73_73));
#line 952 "ml_proc_gen.m"
    }
#line 952 "ml_proc_gen.m"
    {
#line 952 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 952 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_18_18, 0) = ((MR_Box) (ml_backend__ml_proc_gen__V_72_72));
#line 952 "ml_proc_gen.m"
    }
#line 924 "ml_proc_gen.m"
    {
#line 924 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_20_20 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    }
#line 925 "ml_proc_gen.m"
    {
#line 925 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_23_23 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    }
#line 926 "ml_proc_gen.m"
    {
#line 926 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_26_26 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    }
#line 927 "ml_proc_gen.m"
    {
#line 927 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_29_29 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    }
#line 928 "ml_proc_gen.m"
    {
#line 928 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_32_32 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    }
#line 929 "ml_proc_gen.m"
    {
#line 929 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_35_35 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    }
#line 930 "ml_proc_gen.m"
    {
#line 930 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_38_38 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    }
#line 931 "ml_proc_gen.m"
    {
#line 931 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_41_41 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    }
#line 932 "ml_proc_gen.m"
    {
#line 932 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_44_44 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    }
#line 935 "ml_proc_gen.m"
    {
#line 935 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_47_47 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    }
#line 936 "ml_proc_gen.m"
    {
#line 936 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_50_50 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    }
#line 939 "ml_proc_gen.m"
    {
#line 939 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_53_53 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    }
#line 940 "ml_proc_gen.m"
    {
#line 940 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_56_56 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    }
#line 941 "ml_proc_gen.m"
    {
#line 941 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_59_59 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    }
#line 942 "ml_proc_gen.m"
    {
#line 942 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_62_62 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    }
#line 945 "ml_proc_gen.m"
    {
#line 945 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_65_65 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    }
#line 946 "ml_proc_gen.m"
    {
#line 946 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_68_68 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    }
#line 947 "ml_proc_gen.m"
    {
#line 947 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 947 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_67_67, 0) = ((MR_Box) (ml_backend__ml_proc_gen__V_68_68));
#line 947 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 947 "ml_proc_gen.m"
    }
#line 945 "ml_proc_gen.m"
    {
#line 945 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 945 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_64_64, 0) = ((MR_Box) (ml_backend__ml_proc_gen__V_65_65));
#line 945 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_64_64, 1) = ((MR_Box) (ml_backend__ml_proc_gen__V_67_67));
#line 945 "ml_proc_gen.m"
    }
#line 942 "ml_proc_gen.m"
    {
#line 942 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 942 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_61_61, 0) = ((MR_Box) (ml_backend__ml_proc_gen__V_62_62));
#line 942 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_61_61, 1) = ((MR_Box) (ml_backend__ml_proc_gen__V_64_64));
#line 942 "ml_proc_gen.m"
    }
#line 941 "ml_proc_gen.m"
    {
#line 941 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 941 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_58_58, 0) = ((MR_Box) (ml_backend__ml_proc_gen__V_59_59));
#line 941 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_58_58, 1) = ((MR_Box) (ml_backend__ml_proc_gen__V_61_61));
#line 941 "ml_proc_gen.m"
    }
#line 940 "ml_proc_gen.m"
    {
#line 940 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 940 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_55_55, 0) = ((MR_Box) (ml_backend__ml_proc_gen__V_56_56));
#line 940 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_55_55, 1) = ((MR_Box) (ml_backend__ml_proc_gen__V_58_58));
#line 940 "ml_proc_gen.m"
    }
#line 939 "ml_proc_gen.m"
    {
#line 939 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 939 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_52_52, 0) = ((MR_Box) (ml_backend__ml_proc_gen__V_53_53));
#line 939 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_52_52, 1) = ((MR_Box) (ml_backend__ml_proc_gen__V_55_55));
#line 939 "ml_proc_gen.m"
    }
#line 936 "ml_proc_gen.m"
    {
#line 936 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 936 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_49_49, 0) = ((MR_Box) (ml_backend__ml_proc_gen__V_50_50));
#line 936 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_49_49, 1) = ((MR_Box) (ml_backend__ml_proc_gen__V_52_52));
#line 936 "ml_proc_gen.m"
    }
#line 935 "ml_proc_gen.m"
    {
#line 935 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 935 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_46_46, 0) = ((MR_Box) (ml_backend__ml_proc_gen__V_47_47));
#line 935 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_46_46, 1) = ((MR_Box) (ml_backend__ml_proc_gen__V_49_49));
#line 935 "ml_proc_gen.m"
    }
#line 932 "ml_proc_gen.m"
    {
#line 932 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 932 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_43_43, 0) = ((MR_Box) (ml_backend__ml_proc_gen__V_44_44));
#line 932 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_43_43, 1) = ((MR_Box) (ml_backend__ml_proc_gen__V_46_46));
#line 932 "ml_proc_gen.m"
    }
#line 931 "ml_proc_gen.m"
    {
#line 931 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 931 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_40_40, 0) = ((MR_Box) (ml_backend__ml_proc_gen__V_41_41));
#line 931 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_40_40, 1) = ((MR_Box) (ml_backend__ml_proc_gen__V_43_43));
#line 931 "ml_proc_gen.m"
    }
#line 930 "ml_proc_gen.m"
    {
#line 930 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 930 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_37_37, 0) = ((MR_Box) (ml_backend__ml_proc_gen__V_38_38));
#line 930 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_37_37, 1) = ((MR_Box) (ml_backend__ml_proc_gen__V_40_40));
#line 930 "ml_proc_gen.m"
    }
#line 929 "ml_proc_gen.m"
    {
#line 929 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 929 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_34_34, 0) = ((MR_Box) (ml_backend__ml_proc_gen__V_35_35));
#line 929 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_34_34, 1) = ((MR_Box) (ml_backend__ml_proc_gen__V_37_37));
#line 929 "ml_proc_gen.m"
    }
#line 928 "ml_proc_gen.m"
    {
#line 928 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 928 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_31_31, 0) = ((MR_Box) (ml_backend__ml_proc_gen__V_32_32));
#line 928 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_31_31, 1) = ((MR_Box) (ml_backend__ml_proc_gen__V_34_34));
#line 928 "ml_proc_gen.m"
    }
#line 927 "ml_proc_gen.m"
    {
#line 927 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 927 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_28_28, 0) = ((MR_Box) (ml_backend__ml_proc_gen__V_29_29));
#line 927 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_28_28, 1) = ((MR_Box) (ml_backend__ml_proc_gen__V_31_31));
#line 927 "ml_proc_gen.m"
    }
#line 926 "ml_proc_gen.m"
    {
#line 926 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 926 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_25_25, 0) = ((MR_Box) (ml_backend__ml_proc_gen__V_26_26));
#line 926 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_25_25, 1) = ((MR_Box) (ml_backend__ml_proc_gen__V_28_28));
#line 926 "ml_proc_gen.m"
    }
#line 925 "ml_proc_gen.m"
    {
#line 925 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 925 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_22_22, 0) = ((MR_Box) (ml_backend__ml_proc_gen__V_23_23));
#line 925 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_22_22, 1) = ((MR_Box) (ml_backend__ml_proc_gen__V_25_25));
#line 925 "ml_proc_gen.m"
    }
#line 924 "ml_proc_gen.m"
    {
#line 924 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 924 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_19_19, 0) = ((MR_Box) (ml_backend__ml_proc_gen__V_20_20));
#line 924 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_19_19, 1) = ((MR_Box) (ml_backend__ml_proc_gen__V_22_22));
#line 924 "ml_proc_gen.m"
    }
#line 921 "ml_proc_gen.m"
    {
#line 921 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 921 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_17_17, 0) = ((MR_Box) (ml_backend__ml_proc_gen__V_18_18));
#line 921 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_17_17, 1) = ((MR_Box) (ml_backend__ml_proc_gen__V_19_19));
#line 921 "ml_proc_gen.m"
    }
#line 920 "ml_proc_gen.m"
    {
#line 920 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 920 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_14_14, 0) = ((MR_Box) (ml_backend__ml_proc_gen__V_15_15));
#line 920 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_14_14, 1) = ((MR_Box) (ml_backend__ml_proc_gen__V_17_17));
#line 920 "ml_proc_gen.m"
    }
#line 919 "ml_proc_gen.m"
    {
#line 919 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 919 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_11_11, 0) = ((MR_Box) (ml_backend__ml_proc_gen__V_12_12));
#line 919 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_11_11, 1) = ((MR_Box) (ml_backend__ml_proc_gen__V_14_14));
#line 919 "ml_proc_gen.m"
    }
#line 918 "ml_proc_gen.m"
    {
#line 918 "ml_proc_gen.m"
      MR_Word base;
#line 918 "ml_proc_gen.m"
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 918 "ml_proc_gen.m"
      *ml_backend__ml_proc_gen__Init_6 = base;
#line 918 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ml_backend__ml_proc_gen__V_10_10));
#line 918 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ml_backend__ml_proc_gen__V_11_11));
#line 918 "ml_proc_gen.m"
    }
#line 915 "ml_proc_gen.m"
  }
#line 912 "ml_proc_gen.m"
}

#line 898 "ml_proc_gen.m"
static void MR_CALL 
ml_backend__ml_proc_gen__init_stats_8_p_0_1(
#line 898 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__closure_arg,
#line 898 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1,
#line 898 "ml_proc_gen.m"
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_2)
#line 898 "ml_proc_gen.m"
{
#line 898 "ml_proc_gen.m"
  {
#line 898 "ml_proc_gen.m"
    MR_Box ml_backend__ml_proc_gen__closure = ml_backend__ml_proc_gen__closure_arg;
#line 898 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__conv0_Init_6;

#line 898 "ml_proc_gen.m"
    {
#line 898 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__init_stats_step_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_proc_gen__wrapper_arg_1), &ml_backend__ml_proc_gen__conv0_Init_6);
    }
#line 898 "ml_proc_gen.m"
    *ml_backend__ml_proc_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_proc_gen__conv0_Init_6));
#line 898 "ml_proc_gen.m"
  }
#line 898 "ml_proc_gen.m"
}

#line 881 "ml_proc_gen.m"
static void MR_CALL 
ml_backend__ml_proc_gen__init_stats_8_p_0(
#line 881 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__MLDS_ModuleName_9,
#line 881 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__MLDS_ProcLabel_10,
#line 881 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__MLDS_Context_11,
#line 881 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__CallOrAnswer_12,
#line 881 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__CurrOrPrev_13,
#line 881 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__StepDescs_14,
#line 881 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__StatsInit_15,
#line 881 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__StatsStepDefns_16)
#line 881 "ml_proc_gen.m"
{
#line 887 "ml_proc_gen.m"
  {
#line 887 "ml_proc_gen.m"
    MR_bool ml_backend__ml_proc_gen__succeeded;
#line 887 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__StatsId_17;
#line 887 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__StatsStepsId_18;
#line 887 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__StatsType_19;
#line 887 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__StatsStepsType_20;
#line 887 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__StatsStepsArrayRefInit_21;
#line 887 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_31_31;
#line 887 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_32_32;
#line 887 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_34_34;
#line 887 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_35_35;
#line 887 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_37_37;

#line 888 "ml_proc_gen.m"
    {
#line 888 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__StatsId_17 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 888 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_proc_gen__StatsId_17, 0) = ((MR_Box) (ml_backend__ml_proc_gen__CallOrAnswer_12));
#line 888 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_proc_gen__StatsId_17, 1) = ((MR_Box) (ml_backend__ml_proc_gen__CurrOrPrev_13));
#line 888 "ml_proc_gen.m"
    }
#line 889 "ml_proc_gen.m"
    {
#line 889 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__StatsStepsId_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 889 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__StatsStepsId_18, 0) = ((MR_Box) (ml_backend__ml_proc_gen__CallOrAnswer_12));
#line 889 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__StatsStepsId_18, 1) = ((MR_Box) (ml_backend__ml_proc_gen__CurrOrPrev_13));
#line 889 "ml_proc_gen.m"
    }
#line 890 "ml_proc_gen.m"
    {
#line 890 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__StatsType_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 890 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__StatsType_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 890 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__StatsType_19, 1) = ((MR_Box) (ml_backend__ml_proc_gen__StatsId_17));
#line 890 "ml_proc_gen.m"
    }
#line 891 "ml_proc_gen.m"
    {
#line 891 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__StatsStepsType_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 891 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__StatsStepsType_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 891 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__StatsStepsType_20, 1) = ((MR_Box) (ml_backend__ml_proc_gen__StatsStepsId_18));
#line 891 "ml_proc_gen.m"
    }
#line 896 "ml_proc_gen.m"
    if ((ml_backend__ml_proc_gen__StepDescs_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 893 "ml_proc_gen.m"
      {
#line 894 "ml_proc_gen.m"
        *ml_backend__ml_proc_gen__StatsStepDefns_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 895 "ml_proc_gen.m"
        {
#line 895 "ml_proc_gen.m"
          ml_backend__ml_proc_gen__StatsStepsArrayRefInit_21 = ml_backend__ml_util__gen_init_null_pointer_1_f_0(ml_backend__ml_proc_gen__StatsStepsType_20);
        }
#line 893 "ml_proc_gen.m"
      }
#line 896 "ml_proc_gen.m"
    else
#line 897 "ml_proc_gen.m"
      {
#line 897 "ml_proc_gen.m"
        MR_Word ml_backend__ml_proc_gen__StatsStepsInits_24;
#line 897 "ml_proc_gen.m"
        MR_Word ml_backend__ml_proc_gen__StatsStepsArrayInit_25;
#line 897 "ml_proc_gen.m"
        MR_Word ml_backend__ml_proc_gen__StatsStepDefn_26;
#line 897 "ml_proc_gen.m"
        MR_Word ml_backend__ml_proc_gen__V_27_27;
#line 897 "ml_proc_gen.m"
        MR_Word ml_backend__ml_proc_gen__Flags_51;
#line 897 "ml_proc_gen.m"
        MR_Word ml_backend__ml_proc_gen__DefnBody_52;
#line 897 "ml_proc_gen.m"
        MR_Word ml_backend__ml_proc_gen__Name_53;
#line 897 "ml_proc_gen.m"
        MR_Word ml_backend__ml_proc_gen__V_54_54;
#line 897 "ml_proc_gen.m"
        MR_Word ml_backend__ml_proc_gen__DataAddr_66;
#line 897 "ml_proc_gen.m"
        MR_Word ml_backend__ml_proc_gen__V_68_68;
#line 897 "ml_proc_gen.m"
        MR_Word ml_backend__ml_proc_gen__V_69_69;

#line 898 "ml_proc_gen.m"
        {
#line 898 "ml_proc_gen.m"
          ml_backend__ml_proc_gen__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 898 "ml_proc_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__V_27_27, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_3[4]));
#line 898 "ml_proc_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__V_27_27, 1) = ((MR_Box) (ml_backend__ml_proc_gen__init_stats_8_p_0_1));
#line 898 "ml_proc_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 898 "ml_proc_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__V_27_27, 3) = ((MR_Box) (ml_backend__ml_proc_gen__StatsStepsId_18));
#line 898 "ml_proc_gen.m"
        }
#line 898 "ml_proc_gen.m"
        {
#line 898 "ml_proc_gen.m"
          mercury__list__map_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_step_desc_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, ml_backend__ml_proc_gen__V_27_27, ml_backend__ml_proc_gen__StepDescs_14, &ml_backend__ml_proc_gen__StatsStepsInits_24);
        }
#line 899 "ml_proc_gen.m"
        {
#line 899 "ml_proc_gen.m"
          ml_backend__ml_proc_gen__StatsStepsArrayInit_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 899 "ml_proc_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__StatsStepsArrayInit_25, 0) = ((MR_Box) (ml_backend__ml_proc_gen__StatsStepsInits_24));
#line 899 "ml_proc_gen.m"
        }
#line 983 "ml_proc_gen.m"
        {
#line 983 "ml_proc_gen.m"
          ml_backend__ml_proc_gen__Flags_51 = ml_backend__mlds__init_decl_flags_6_f_0((MR_Integer) 2, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0);
        }
#line 969 "ml_proc_gen.m"
        {
#line 969 "ml_proc_gen.m"
          ml_backend__ml_proc_gen__DefnBody_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 969 "ml_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__DefnBody_52, 0) = ((MR_Box) (ml_backend__ml_proc_gen__StatsStepsType_20));
#line 969 "ml_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__DefnBody_52, 1) = ((MR_Box) (ml_backend__ml_proc_gen__StatsStepsArrayInit_25));
#line 969 "ml_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__DefnBody_52, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 969 "ml_proc_gen.m"
        }
#line 970 "ml_proc_gen.m"
        {
#line 970 "ml_proc_gen.m"
          ml_backend__ml_proc_gen__V_54_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 970 "ml_proc_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__V_54_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 970 "ml_proc_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__V_54_54, 1) = ((MR_Box) (ml_backend__ml_proc_gen__MLDS_ProcLabel_10));
#line 970 "ml_proc_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__V_54_54, 2) = ((MR_Box) (ml_backend__ml_proc_gen__StatsStepsId_18));
#line 970 "ml_proc_gen.m"
        }
#line 970 "ml_proc_gen.m"
        {
#line 970 "ml_proc_gen.m"
          ml_backend__ml_proc_gen__Name_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 970 "ml_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Name_53, 0) = ((MR_Box) (ml_backend__ml_proc_gen__V_54_54));
#line 970 "ml_proc_gen.m"
        }
#line 971 "ml_proc_gen.m"
        {
#line 971 "ml_proc_gen.m"
          ml_backend__ml_proc_gen__StatsStepDefn_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 971 "ml_proc_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__StatsStepDefn_26, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Name_53));
#line 971 "ml_proc_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__StatsStepDefn_26, 1) = ((MR_Box) (ml_backend__ml_proc_gen__MLDS_Context_11));
#line 971 "ml_proc_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__StatsStepDefn_26, 2) = ((MR_Box) (ml_backend__ml_proc_gen__Flags_51));
#line 971 "ml_proc_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__StatsStepDefn_26, 3) = ((MR_Box) (ml_backend__ml_proc_gen__DefnBody_52));
#line 971 "ml_proc_gen.m"
        }
#line 902 "ml_proc_gen.m"
        {
#line 902 "ml_proc_gen.m"
          MR_Word base;
#line 902 "ml_proc_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 902 "ml_proc_gen.m"
          *ml_backend__ml_proc_gen__StatsStepDefns_16 = base;
#line 902 "ml_proc_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_proc_gen__StatsStepDefn_26));
#line 902 "ml_proc_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 902 "ml_proc_gen.m"
        }
#line 958 "ml_proc_gen.m"
        {
#line 958 "ml_proc_gen.m"
          ml_backend__ml_proc_gen__DataAddr_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 958 "ml_proc_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__DataAddr_66, 0) = ((MR_Box) (ml_backend__ml_proc_gen__MLDS_ModuleName_9));
#line 958 "ml_proc_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__DataAddr_66, 1) = ((MR_Box) (ml_backend__ml_proc_gen__V_54_54));
#line 958 "ml_proc_gen.m"
        }
#line 959 "ml_proc_gen.m"
        ml_backend__ml_proc_gen__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_proc_gen__DataAddr_66);
#line 959 "ml_proc_gen.m"
        {
#line 959 "ml_proc_gen.m"
          ml_backend__ml_proc_gen__V_68_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 959 "ml_proc_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__V_68_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 959 "ml_proc_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__V_68_68, 1) = ((MR_Box) (ml_backend__ml_proc_gen__V_69_69));
#line 959 "ml_proc_gen.m"
        }
#line 959 "ml_proc_gen.m"
        {
#line 959 "ml_proc_gen.m"
          ml_backend__ml_proc_gen__StatsStepsArrayRefInit_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 959 "ml_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__StatsStepsArrayRefInit_21, 0) = ((MR_Box) (ml_backend__ml_proc_gen__V_68_68));
#line 959 "ml_proc_gen.m"
        }
#line 897 "ml_proc_gen.m"
      }
#line 907 "ml_proc_gen.m"
    {
#line 907 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_32_32 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    }
#line 908 "ml_proc_gen.m"
    {
#line 908 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_35_35 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    }
#line 910 "ml_proc_gen.m"
    {
#line 910 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 910 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_37_37, 0) = ((MR_Box) (ml_backend__ml_proc_gen__StatsStepsArrayRefInit_21));
#line 910 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 910 "ml_proc_gen.m"
    }
#line 908 "ml_proc_gen.m"
    {
#line 908 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 908 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_34_34, 0) = ((MR_Box) (ml_backend__ml_proc_gen__V_35_35));
#line 908 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_34_34, 1) = ((MR_Box) (ml_backend__ml_proc_gen__V_37_37));
#line 908 "ml_proc_gen.m"
    }
#line 907 "ml_proc_gen.m"
    {
#line 907 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 907 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_31_31, 0) = ((MR_Box) (ml_backend__ml_proc_gen__V_32_32));
#line 907 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_31_31, 1) = ((MR_Box) (ml_backend__ml_proc_gen__V_34_34));
#line 907 "ml_proc_gen.m"
    }
#line 906 "ml_proc_gen.m"
    {
#line 906 "ml_proc_gen.m"
      MR_Word base;
#line 906 "ml_proc_gen.m"
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 906 "ml_proc_gen.m"
      *ml_backend__ml_proc_gen__StatsInit_15 = base;
#line 906 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ml_backend__ml_proc_gen__StatsType_19));
#line 906 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ml_backend__ml_proc_gen__V_31_31));
#line 906 "ml_proc_gen.m"
    }
#line 887 "ml_proc_gen.m"
  }
#line 881 "ml_proc_gen.m"
}

#line 863 "ml_proc_gen.m"
static MR_Word MR_CALL 
ml_backend__ml_proc_gen__init_step_desc_2_f_0(
#line 863 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__StructId_4,
#line 863 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__StepDesc_5)
#line 863 "ml_proc_gen.m"
{
#line 866 "ml_proc_gen.m"
  {
#line 866 "ml_proc_gen.m"
    MR_bool ml_backend__ml_proc_gen__succeeded;
#line 866 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__HeadVar__3_3;
#line 866 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__StructType_6;
#line 866 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__FieldInits_7;
#line 866 "ml_proc_gen.m"
    MR_String ml_backend__ml_proc_gen__VarName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__StepDesc_5, (MR_Integer) 0)));
#line 866 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__Step_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__StepDesc_5, (MR_Integer) 1)));
#line 866 "ml_proc_gen.m"
    MR_String ml_backend__ml_proc_gen__StepStr_10;
#line 866 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__MaybeEnumRange_11;
#line 866 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__VarNameInit_12;
#line 866 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__StepInit_13;
#line 866 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__MaybeEnumRangeInit_14;
#line 866 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_17_17;
#line 866 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_18_18;
#line 866 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_21_21;
#line 866 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_22_22;

#line 868 "ml_proc_gen.m"
    {
#line 868 "ml_proc_gen.m"
      backend_libs__rtti__table_trie_step_to_c_3_p_0(ml_backend__ml_proc_gen__Step_9, &ml_backend__ml_proc_gen__StepStr_10, &ml_backend__ml_proc_gen__MaybeEnumRange_11);
    }
#line 869 "ml_proc_gen.m"
    {
#line 869 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__VarNameInit_12 = ml_backend__ml_util__gen_init_string_1_f_0(ml_backend__ml_proc_gen__VarName_8);
    }
#line 952 "ml_proc_gen.m"
    {
#line 952 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_22_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 952 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__V_22_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 952 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__V_22_22, 1) = ((MR_Box) (ml_backend__ml_proc_gen__StepStr_10));
#line 952 "ml_proc_gen.m"
    }
#line 952 "ml_proc_gen.m"
    {
#line 952 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 952 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__V_21_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 952 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__V_21_21, 1) = ((MR_Box) (ml_backend__ml_proc_gen__V_22_22));
#line 952 "ml_proc_gen.m"
    }
#line 952 "ml_proc_gen.m"
    {
#line 952 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__StepInit_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 952 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__StepInit_13, 0) = ((MR_Box) (ml_backend__ml_proc_gen__V_21_21));
#line 952 "ml_proc_gen.m"
    }
#line 874 "ml_proc_gen.m"
    if ((ml_backend__ml_proc_gen__MaybeEnumRange_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 872 "ml_proc_gen.m"
      {
#line 873 "ml_proc_gen.m"
        {
#line 873 "ml_proc_gen.m"
          ml_backend__ml_proc_gen__MaybeEnumRangeInit_14 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) -1);
        }
#line 872 "ml_proc_gen.m"
      }
#line 874 "ml_proc_gen.m"
    else
#line 875 "ml_proc_gen.m"
      {
#line 875 "ml_proc_gen.m"
        MR_Integer ml_backend__ml_proc_gen__EnumRange_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__MaybeEnumRange_11, (MR_Integer) 0)));

#line 876 "ml_proc_gen.m"
        {
#line 876 "ml_proc_gen.m"
          ml_backend__ml_proc_gen__MaybeEnumRangeInit_14 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__ml_proc_gen__EnumRange_15);
        }
#line 875 "ml_proc_gen.m"
      }
#line 878 "ml_proc_gen.m"
    {
#line 878 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__StructType_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 878 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__StructType_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 878 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__StructType_6, 1) = ((MR_Box) (ml_backend__ml_proc_gen__StructId_4));
#line 878 "ml_proc_gen.m"
    }
#line 879 "ml_proc_gen.m"
    {
#line 879 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 879 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_18_18, 0) = ((MR_Box) (ml_backend__ml_proc_gen__MaybeEnumRangeInit_14));
#line 879 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 879 "ml_proc_gen.m"
    }
#line 879 "ml_proc_gen.m"
    {
#line 879 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 879 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_17_17, 0) = ((MR_Box) (ml_backend__ml_proc_gen__StepInit_13));
#line 879 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_17_17, 1) = ((MR_Box) (ml_backend__ml_proc_gen__V_18_18));
#line 879 "ml_proc_gen.m"
    }
#line 879 "ml_proc_gen.m"
    {
#line 879 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__FieldInits_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 879 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__FieldInits_7, 0) = ((MR_Box) (ml_backend__ml_proc_gen__VarNameInit_12));
#line 879 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__FieldInits_7, 1) = ((MR_Box) (ml_backend__ml_proc_gen__V_17_17));
#line 879 "ml_proc_gen.m"
    }
#line 866 "ml_proc_gen.m"
    {
#line 866 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 866 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_proc_gen__HeadVar__3_3, 0) = ((MR_Box) (ml_backend__ml_proc_gen__StructType_6));
#line 866 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_proc_gen__HeadVar__3_3, 1) = ((MR_Box) (ml_backend__ml_proc_gen__FieldInits_7));
#line 866 "ml_proc_gen.m"
    }
#line 866 "ml_proc_gen.m"
    return ml_backend__ml_proc_gen__HeadVar__3_3;
#line 866 "ml_proc_gen.m"
  }
#line 863 "ml_proc_gen.m"
}

#line 818 "ml_proc_gen.m"
static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_gen_add_table_var_4_p_0_2(
#line 818 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__closure_arg,
#line 818 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1)
#line 818 "ml_proc_gen.m"
{
#line 818 "ml_proc_gen.m"
  {
#line 818 "ml_proc_gen.m"
    MR_Box ml_backend__ml_proc_gen__wrapper_arg_2;
#line 818 "ml_proc_gen.m"
    MR_Box ml_backend__ml_proc_gen__closure = ml_backend__ml_proc_gen__closure_arg;
#line 818 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__conv1_HeadVar__3_3;

#line 818 "ml_proc_gen.m"
    {
#line 818 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__conv1_HeadVar__3_3 = ml_backend__ml_proc_gen__init_step_desc_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_proc_gen__wrapper_arg_1));
    }
#line 818 "ml_proc_gen.m"
    ml_backend__ml_proc_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_proc_gen__conv1_HeadVar__3_3));
#line 818 "ml_proc_gen.m"
    return ml_backend__ml_proc_gen__wrapper_arg_2;
#line 818 "ml_proc_gen.m"
  }
#line 818 "ml_proc_gen.m"
}

#line 792 "ml_proc_gen.m"
static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_gen_add_table_var_4_p_0_1(
#line 792 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__closure_arg,
#line 792 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1)
#line 792 "ml_proc_gen.m"
{
#line 792 "ml_proc_gen.m"
  {
#line 792 "ml_proc_gen.m"
    MR_Box ml_backend__ml_proc_gen__wrapper_arg_2;
#line 792 "ml_proc_gen.m"
    MR_Box ml_backend__ml_proc_gen__closure = ml_backend__ml_proc_gen__closure_arg;
#line 792 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__conv0_HeadVar__3_3;

#line 792 "ml_proc_gen.m"
    {
#line 792 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__conv0_HeadVar__3_3 = ml_backend__ml_proc_gen__init_step_desc_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_proc_gen__wrapper_arg_1));
    }
#line 792 "ml_proc_gen.m"
    ml_backend__ml_proc_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_proc_gen__conv0_HeadVar__3_3));
#line 792 "ml_proc_gen.m"
    return ml_backend__ml_proc_gen__wrapper_arg_2;
#line 792 "ml_proc_gen.m"
  }
#line 792 "ml_proc_gen.m"
}

#line 762 "ml_proc_gen.m"
static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_add_table_var_4_p_0(
#line 762 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__ModuleInfo_5,
#line 762 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__HeadVar__2_2,
#line 762 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Defns_0_57,
#line 762 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_Defns_58)
#line 762 "ml_proc_gen.m"
{
#line 766 "ml_proc_gen.m"
  {
#line 766 "ml_proc_gen.m"
    MR_bool ml_backend__ml_proc_gen__succeeded;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__TypeCtorInfo_158_158;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__PredProcId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__TableStructInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__ModuleName_9;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__MLDS_ModuleName_10;
#line 766 "ml_proc_gen.m"
    MR_Integer ml_backend__ml_proc_gen__ProcId_12;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__ProcTableStructInfo_13;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__RttiProcLabel_15;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__Context_17;
#line 766 "ml_proc_gen.m"
    MR_Integer ml_backend__ml_proc_gen__NumInputs_18;
#line 766 "ml_proc_gen.m"
    MR_Integer ml_backend__ml_proc_gen__NumOutputs_19;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__InputSteps_20;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__MaybeOutputSteps_21;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__EvalMethod_23;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__PredLabel_24;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__MLDS_ProcLabel_26;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__MLDS_Context_27;
#line 766 "ml_proc_gen.m"
    MR_String ml_backend__ml_proc_gen__TableTypeStr_28;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__InputStepsRefInit_29;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__InputStepsDefns_30;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__CallStatsInit_35;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__CallStatsDefns_36;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__PrevCallStatsInit_37;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__PrevCallStatsDefns_38;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__CallDefns_39;
#line 766 "ml_proc_gen.m"
    MR_Integer ml_backend__ml_proc_gen__HasAnswerTable_40;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__OutputStepsRefInit_41;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__OutputStepsDefns_42;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__AnswerStatsInit_46;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__AnswerStatsDefns_47;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__PrevAnswerStatsInit_48;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__PrevAnswerStatsDefns_49;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__AnswerDefns_50;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__PTIsRefInit_51;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__TypeParamLocnsRefInit_52;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__RootNodeInit_53;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__TipsRefInit_54;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__ProcTableInfoInit_55;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__ProcTableInfoDefn_56;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_76_76;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_94_94;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_101_101;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_102_102;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_109_109;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_110_110;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_111_111;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_112_112;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_113_113;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_114_114;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_115_115;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_116_116;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_117_117;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_118_118;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_119_119;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_120_120;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_121_121;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_122_122;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_123_123;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_125_125;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_126_126;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_127_127;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_128_128;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_129_129;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_130_130;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_132_132;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_133_133;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_134_134;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_135_135;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_138_138;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_139_139;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_141_141;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_142_142;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_143_143;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_145_145;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_146_146;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_152_152;
#line 766 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_153_153;
#line 769 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen___PredId_11;
#line 771 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen___Attributes_14;
#line 772 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen___TVarSet_16;
#line 772 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen___ArgInfos_22;
#line 776 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen___PredModule_25;

#line 767 "ml_proc_gen.m"
    {
#line 767 "ml_proc_gen.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__ml_proc_gen__ModuleInfo_5, &ml_backend__ml_proc_gen__ModuleName_9);
    }
#line 768 "ml_proc_gen.m"
    {
#line 768 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__MLDS_ModuleName_10 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_proc_gen__ModuleName_9);
    }
#line 769 "ml_proc_gen.m"
    ml_backend__ml_proc_gen___PredId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__PredProcId_6, (MR_Integer) 0)));
#line 769 "ml_proc_gen.m"
    ml_backend__ml_proc_gen__ProcId_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__PredProcId_6, (MR_Integer) 1)));
#line 771 "ml_proc_gen.m"
    ml_backend__ml_proc_gen__ProcTableStructInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__TableStructInfo_7, (MR_Integer) 0)));
#line 771 "ml_proc_gen.m"
    ml_backend__ml_proc_gen___Attributes_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__TableStructInfo_7, (MR_Integer) 1)));
#line 772 "ml_proc_gen.m"
    ml_backend__ml_proc_gen__RttiProcLabel_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__ProcTableStructInfo_13, (MR_Integer) 0)));
#line 772 "ml_proc_gen.m"
    ml_backend__ml_proc_gen___TVarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__ProcTableStructInfo_13, (MR_Integer) 1)));
#line 772 "ml_proc_gen.m"
    ml_backend__ml_proc_gen__Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__ProcTableStructInfo_13, (MR_Integer) 2)));
#line 772 "ml_proc_gen.m"
    ml_backend__ml_proc_gen__NumInputs_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__ProcTableStructInfo_13, (MR_Integer) 3)));
#line 772 "ml_proc_gen.m"
    ml_backend__ml_proc_gen__NumOutputs_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__ProcTableStructInfo_13, (MR_Integer) 4)));
#line 772 "ml_proc_gen.m"
    ml_backend__ml_proc_gen__InputSteps_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__ProcTableStructInfo_13, (MR_Integer) 5)));
#line 772 "ml_proc_gen.m"
    ml_backend__ml_proc_gen__MaybeOutputSteps_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__ProcTableStructInfo_13, (MR_Integer) 6)));
#line 772 "ml_proc_gen.m"
    ml_backend__ml_proc_gen___ArgInfos_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__ProcTableStructInfo_13, (MR_Integer) 7)));
#line 772 "ml_proc_gen.m"
    ml_backend__ml_proc_gen__EvalMethod_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__ProcTableStructInfo_13, (MR_Integer) 8)));
#line 776 "ml_proc_gen.m"
    {
#line 776 "ml_proc_gen.m"
      ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_p_0(ml_backend__ml_proc_gen__ModuleInfo_5, ml_backend__ml_proc_gen__RttiProcLabel_15, &ml_backend__ml_proc_gen__PredLabel_24, &ml_backend__ml_proc_gen___PredModule_25);
    }
#line 778 "ml_proc_gen.m"
    {
#line 778 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__MLDS_ProcLabel_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 778 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__MLDS_ProcLabel_26, 0) = ((MR_Box) (ml_backend__ml_proc_gen__PredLabel_24));
#line 778 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__MLDS_ProcLabel_26, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ProcId_12));
#line 778 "ml_proc_gen.m"
    }
#line 779 "ml_proc_gen.m"
    {
#line 779 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__MLDS_Context_27 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_proc_gen__Context_17);
    }
#line 780 "ml_proc_gen.m"
    {
#line 780 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__TableTypeStr_28 = parse_tree__prog_data__eval_method_to_table_type_1_f_0(ml_backend__ml_proc_gen__EvalMethod_23);
    }
#line 787 "ml_proc_gen.m"
    if ((ml_backend__ml_proc_gen__InputSteps_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 782 "ml_proc_gen.m"
      {
#line 784 "ml_proc_gen.m"
        {
#line 784 "ml_proc_gen.m"
          ml_backend__ml_proc_gen__InputStepsRefInit_29 = ml_backend__ml_util__gen_init_null_pointer_1_f_0((MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_proc_gen_scalar_common_1[5]));
        }
#line 786 "ml_proc_gen.m"
        ml_backend__ml_proc_gen__InputStepsDefns_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 782 "ml_proc_gen.m"
      }
#line 787 "ml_proc_gen.m"
    else
#line 788 "ml_proc_gen.m"
      {
#line 788 "ml_proc_gen.m"
        MR_Word ml_backend__ml_proc_gen__InputStepsInit_33;
#line 788 "ml_proc_gen.m"
        MR_Word ml_backend__ml_proc_gen__InputStepsDefn_34;
#line 788 "ml_proc_gen.m"
        MR_Word ml_backend__ml_proc_gen__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_proc_gen_scalar_common_9[1]);
#line 788 "ml_proc_gen.m"
        MR_Word ml_backend__ml_proc_gen__V_61_61;

#line 789 "ml_proc_gen.m"
        {
#line 789 "ml_proc_gen.m"
          ml_backend__ml_proc_gen__InputStepsRefInit_29 = ml_backend__ml_proc_gen__gen_init_tabling_name_3_f_0(ml_backend__ml_proc_gen__MLDS_ModuleName_10, ml_backend__ml_proc_gen__MLDS_ProcLabel_26, ml_backend__ml_proc_gen__V_59_59);
        }
#line 792 "ml_proc_gen.m"
        {
#line 792 "ml_proc_gen.m"
          ml_backend__ml_proc_gen__V_61_61 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_step_desc_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_6[2], ml_backend__ml_proc_gen__InputSteps_20);
        }
#line 791 "ml_proc_gen.m"
        {
#line 791 "ml_proc_gen.m"
          ml_backend__ml_proc_gen__InputStepsInit_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 791 "ml_proc_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__InputStepsInit_33, 0) = ((MR_Box) (ml_backend__ml_proc_gen__V_61_61));
#line 791 "ml_proc_gen.m"
        }
#line 794 "ml_proc_gen.m"
        {
#line 794 "ml_proc_gen.m"
          ml_backend__ml_proc_gen__InputStepsDefn_34 = ml_backend__ml_proc_gen__tabling_name_and_init_to_defn_5_f_0(ml_backend__ml_proc_gen__MLDS_ProcLabel_26, ml_backend__ml_proc_gen__MLDS_Context_27, (MR_Integer) 1, ml_backend__ml_proc_gen__V_59_59, ml_backend__ml_proc_gen__InputStepsInit_33);
        }
#line 797 "ml_proc_gen.m"
        {
#line 797 "ml_proc_gen.m"
          ml_backend__ml_proc_gen__InputStepsDefns_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 797 "ml_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__InputStepsDefns_30, 0) = ((MR_Box) (ml_backend__ml_proc_gen__InputStepsDefn_34));
#line 797 "ml_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__InputStepsDefns_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 797 "ml_proc_gen.m"
        }
#line 788 "ml_proc_gen.m"
      }
#line 799 "ml_proc_gen.m"
    {
#line 799 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__init_stats_8_p_0(ml_backend__ml_proc_gen__MLDS_ModuleName_10, ml_backend__ml_proc_gen__MLDS_ProcLabel_26, ml_backend__ml_proc_gen__MLDS_Context_27, (MR_Integer) 0, (MR_Integer) 0, ml_backend__ml_proc_gen__InputSteps_20, &ml_backend__ml_proc_gen__CallStatsInit_35, &ml_backend__ml_proc_gen__CallStatsDefns_36);
    }
#line 802 "ml_proc_gen.m"
    {
#line 802 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__init_stats_8_p_0(ml_backend__ml_proc_gen__MLDS_ModuleName_10, ml_backend__ml_proc_gen__MLDS_ProcLabel_26, ml_backend__ml_proc_gen__MLDS_Context_27, (MR_Integer) 0, (MR_Integer) 1, ml_backend__ml_proc_gen__InputSteps_20, &ml_backend__ml_proc_gen__PrevCallStatsInit_37, &ml_backend__ml_proc_gen__PrevCallStatsDefns_38);
    }
#line 2892 "ml_backend.ml_proc_gen.c"
    ml_backend__ml_proc_gen__TypeCtorInfo_158_158 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
#line 805 "ml_proc_gen.m"
    {
#line 805 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_76_76 = mercury__list__f_43_43_2_f_0(ml_backend__ml_proc_gen__TypeCtorInfo_158_158, ml_backend__ml_proc_gen__CallStatsDefns_36, ml_backend__ml_proc_gen__PrevCallStatsDefns_38);
    }
#line 805 "ml_proc_gen.m"
    {
#line 805 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__CallDefns_39 = mercury__list__f_43_43_2_f_0(ml_backend__ml_proc_gen__TypeCtorInfo_158_158, ml_backend__ml_proc_gen__InputStepsDefns_30, ml_backend__ml_proc_gen__V_76_76);
    }
#line 812 "ml_proc_gen.m"
    if ((ml_backend__ml_proc_gen__MaybeOutputSteps_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 807 "ml_proc_gen.m"
      {
#line 808 "ml_proc_gen.m"
        ml_backend__ml_proc_gen__HasAnswerTable_40 = (MR_Integer) 0;
#line 809 "ml_proc_gen.m"
        {
#line 809 "ml_proc_gen.m"
          ml_backend__ml_proc_gen__OutputStepsRefInit_41 = ml_backend__ml_util__gen_init_null_pointer_1_f_0((MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_proc_gen_scalar_common_1[6]));
        }
#line 811 "ml_proc_gen.m"
        ml_backend__ml_proc_gen__OutputStepsDefns_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 807 "ml_proc_gen.m"
      }
#line 812 "ml_proc_gen.m"
    else
#line 813 "ml_proc_gen.m"
      {
#line 813 "ml_proc_gen.m"
        MR_Word ml_backend__ml_proc_gen__OutputSteps_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__MaybeOutputSteps_21, (MR_Integer) 0)));
#line 813 "ml_proc_gen.m"
        MR_Word ml_backend__ml_proc_gen__OutputStepsInit_44;
#line 813 "ml_proc_gen.m"
        MR_Word ml_backend__ml_proc_gen__OutputStepsDefn_45;
#line 813 "ml_proc_gen.m"
        MR_Word ml_backend__ml_proc_gen__V_77_77;
#line 813 "ml_proc_gen.m"
        MR_Word ml_backend__ml_proc_gen__V_79_79;

#line 814 "ml_proc_gen.m"
        ml_backend__ml_proc_gen__HasAnswerTable_40 = (MR_Integer) 1;
#line 816 "ml_proc_gen.m"
        ml_backend__ml_proc_gen__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_proc_gen_scalar_common_9[2]);
#line 815 "ml_proc_gen.m"
        {
#line 815 "ml_proc_gen.m"
          ml_backend__ml_proc_gen__OutputStepsRefInit_41 = ml_backend__ml_proc_gen__gen_init_tabling_name_3_f_0(ml_backend__ml_proc_gen__MLDS_ModuleName_10, ml_backend__ml_proc_gen__MLDS_ProcLabel_26, ml_backend__ml_proc_gen__V_77_77);
        }
#line 818 "ml_proc_gen.m"
        {
#line 818 "ml_proc_gen.m"
          ml_backend__ml_proc_gen__V_79_79 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_step_desc_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_6[3], ml_backend__ml_proc_gen__OutputSteps_43);
        }
#line 817 "ml_proc_gen.m"
        {
#line 817 "ml_proc_gen.m"
          ml_backend__ml_proc_gen__OutputStepsInit_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 817 "ml_proc_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__OutputStepsInit_44, 0) = ((MR_Box) (ml_backend__ml_proc_gen__V_79_79));
#line 817 "ml_proc_gen.m"
        }
#line 820 "ml_proc_gen.m"
        {
#line 820 "ml_proc_gen.m"
          ml_backend__ml_proc_gen__OutputStepsDefn_45 = ml_backend__ml_proc_gen__tabling_name_and_init_to_defn_5_f_0(ml_backend__ml_proc_gen__MLDS_ProcLabel_26, ml_backend__ml_proc_gen__MLDS_Context_27, (MR_Integer) 1, ml_backend__ml_proc_gen__V_77_77, ml_backend__ml_proc_gen__OutputStepsInit_44);
        }
#line 823 "ml_proc_gen.m"
        {
#line 823 "ml_proc_gen.m"
          ml_backend__ml_proc_gen__OutputStepsDefns_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 823 "ml_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__OutputStepsDefns_42, 0) = ((MR_Box) (ml_backend__ml_proc_gen__OutputStepsDefn_45));
#line 823 "ml_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__OutputStepsDefns_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 823 "ml_proc_gen.m"
        }
#line 813 "ml_proc_gen.m"
      }
#line 825 "ml_proc_gen.m"
    {
#line 825 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__init_stats_8_p_0(ml_backend__ml_proc_gen__MLDS_ModuleName_10, ml_backend__ml_proc_gen__MLDS_ProcLabel_26, ml_backend__ml_proc_gen__MLDS_Context_27, (MR_Integer) 1, (MR_Integer) 0, ml_backend__ml_proc_gen__InputSteps_20, &ml_backend__ml_proc_gen__AnswerStatsInit_46, &ml_backend__ml_proc_gen__AnswerStatsDefns_47);
    }
#line 828 "ml_proc_gen.m"
    {
#line 828 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__init_stats_8_p_0(ml_backend__ml_proc_gen__MLDS_ModuleName_10, ml_backend__ml_proc_gen__MLDS_ProcLabel_26, ml_backend__ml_proc_gen__MLDS_Context_27, (MR_Integer) 1, (MR_Integer) 1, ml_backend__ml_proc_gen__InputSteps_20, &ml_backend__ml_proc_gen__PrevAnswerStatsInit_48, &ml_backend__ml_proc_gen__PrevAnswerStatsDefns_49);
    }
#line 831 "ml_proc_gen.m"
    {
#line 831 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_94_94 = mercury__list__f_43_43_2_f_0(ml_backend__ml_proc_gen__TypeCtorInfo_158_158, ml_backend__ml_proc_gen__AnswerStatsDefns_47, ml_backend__ml_proc_gen__PrevAnswerStatsDefns_49);
    }
#line 831 "ml_proc_gen.m"
    {
#line 831 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__AnswerDefns_50 = mercury__list__f_43_43_2_f_0(ml_backend__ml_proc_gen__TypeCtorInfo_158_158, ml_backend__ml_proc_gen__OutputStepsDefns_42, ml_backend__ml_proc_gen__V_94_94);
    }
#line 833 "ml_proc_gen.m"
    {
#line 833 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__PTIsRefInit_51 = ml_backend__ml_util__gen_init_null_pointer_1_f_0((MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_proc_gen_scalar_common_1[7]));
    }
#line 834 "ml_proc_gen.m"
    {
#line 834 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__TypeParamLocnsRefInit_52 = ml_backend__ml_util__gen_init_null_pointer_1_f_0((MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_proc_gen_scalar_common_1[8]));
    }
#line 837 "ml_proc_gen.m"
    {
#line 837 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_102_102 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    }
#line 837 "ml_proc_gen.m"
    {
#line 837 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 837 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_101_101, 0) = ((MR_Box) (ml_backend__ml_proc_gen__V_102_102));
#line 837 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 837 "ml_proc_gen.m"
    }
#line 836 "ml_proc_gen.m"
    {
#line 836 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__RootNodeInit_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 836 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_proc_gen__RootNodeInit_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_proc_gen_scalar_common_1[9])));
#line 836 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_proc_gen__RootNodeInit_53, 1) = ((MR_Box) (ml_backend__ml_proc_gen__V_101_101));
#line 836 "ml_proc_gen.m"
    }
#line 838 "ml_proc_gen.m"
    {
#line 838 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__TipsRefInit_54 = ml_backend__ml_util__gen_init_null_pointer_1_f_0((MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_proc_gen_scalar_common_1[10]));
    }
#line 841 "ml_proc_gen.m"
    {
#line 841 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_110_110 = ml_backend__ml_util__gen_init_builtin_const_1_f_0(ml_backend__ml_proc_gen__TableTypeStr_28);
    }
#line 842 "ml_proc_gen.m"
    {
#line 842 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_112_112 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__ml_proc_gen__NumInputs_18);
    }
#line 843 "ml_proc_gen.m"
    {
#line 843 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_114_114 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__ml_proc_gen__NumOutputs_19);
    }
#line 844 "ml_proc_gen.m"
    {
#line 844 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_116_116 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__ml_proc_gen__HasAnswerTable_40);
    }
#line 848 "ml_proc_gen.m"
    {
#line 848 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 848 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_123_123, 0) = ((MR_Box) (ml_backend__ml_proc_gen__OutputStepsRefInit_41));
#line 848 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_123_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 848 "ml_proc_gen.m"
    }
#line 848 "ml_proc_gen.m"
    {
#line 848 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 848 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_122_122, 0) = ((MR_Box) (ml_backend__ml_proc_gen__InputStepsRefInit_29));
#line 848 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_122_122, 1) = ((MR_Box) (ml_backend__ml_proc_gen__V_123_123));
#line 848 "ml_proc_gen.m"
    }
#line 848 "ml_proc_gen.m"
    {
#line 848 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_121_121 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 848 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__V_121_121, 0) = ((MR_Box) (ml_backend__ml_proc_gen__V_122_122));
#line 848 "ml_proc_gen.m"
    }
#line 850 "ml_proc_gen.m"
    {
#line 850 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 850 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_130_130, 0) = ((MR_Box) (ml_backend__ml_proc_gen__PrevCallStatsInit_37));
#line 850 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_130_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 850 "ml_proc_gen.m"
    }
#line 850 "ml_proc_gen.m"
    {
#line 850 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 850 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_129_129, 0) = ((MR_Box) (ml_backend__ml_proc_gen__CallStatsInit_35));
#line 850 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_129_129, 1) = ((MR_Box) (ml_backend__ml_proc_gen__V_130_130));
#line 850 "ml_proc_gen.m"
    }
#line 850 "ml_proc_gen.m"
    {
#line 850 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_128_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 850 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__V_128_128, 0) = ((MR_Box) (ml_backend__ml_proc_gen__V_129_129));
#line 850 "ml_proc_gen.m"
    }
#line 851 "ml_proc_gen.m"
    {
#line 851 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 851 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_135_135, 0) = ((MR_Box) (ml_backend__ml_proc_gen__PrevAnswerStatsInit_48));
#line 851 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_135_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 851 "ml_proc_gen.m"
    }
#line 851 "ml_proc_gen.m"
    {
#line 851 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 851 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_134_134, 0) = ((MR_Box) (ml_backend__ml_proc_gen__AnswerStatsInit_46));
#line 851 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_134_134, 1) = ((MR_Box) (ml_backend__ml_proc_gen__V_135_135));
#line 851 "ml_proc_gen.m"
    }
#line 851 "ml_proc_gen.m"
    {
#line 851 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_133_133 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 851 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__V_133_133, 0) = ((MR_Box) (ml_backend__ml_proc_gen__V_134_134));
#line 851 "ml_proc_gen.m"
    }
#line 852 "ml_proc_gen.m"
    {
#line 852 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_132_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 852 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_132_132, 0) = ((MR_Box) (ml_backend__ml_proc_gen__V_133_133));
#line 852 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_132_132, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 852 "ml_proc_gen.m"
    }
#line 850 "ml_proc_gen.m"
    {
#line 850 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 850 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_127_127, 0) = ((MR_Box) (ml_backend__ml_proc_gen__V_128_128));
#line 850 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_127_127, 1) = ((MR_Box) (ml_backend__ml_proc_gen__V_132_132));
#line 850 "ml_proc_gen.m"
    }
#line 849 "ml_proc_gen.m"
    {
#line 849 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_126_126 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 849 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__V_126_126, 0) = ((MR_Box) (ml_backend__ml_proc_gen__V_127_127));
#line 849 "ml_proc_gen.m"
    }
#line 853 "ml_proc_gen.m"
    {
#line 853 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_139_139 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    }
#line 855 "ml_proc_gen.m"
    {
#line 855 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_143_143 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    }
#line 856 "ml_proc_gen.m"
    {
#line 856 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_146_146 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    }
#line 857 "ml_proc_gen.m"
    {
#line 857 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_145_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 857 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_145_145, 0) = ((MR_Box) (ml_backend__ml_proc_gen__V_146_146));
#line 857 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_145_145, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 857 "ml_proc_gen.m"
    }
#line 855 "ml_proc_gen.m"
    {
#line 855 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 855 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_142_142, 0) = ((MR_Box) (ml_backend__ml_proc_gen__V_143_143));
#line 855 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_142_142, 1) = ((MR_Box) (ml_backend__ml_proc_gen__V_145_145));
#line 855 "ml_proc_gen.m"
    }
#line 854 "ml_proc_gen.m"
    {
#line 854 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_141_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 854 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_141_141, 0) = ((MR_Box) (ml_backend__ml_proc_gen__TipsRefInit_54));
#line 854 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_141_141, 1) = ((MR_Box) (ml_backend__ml_proc_gen__V_142_142));
#line 854 "ml_proc_gen.m"
    }
#line 853 "ml_proc_gen.m"
    {
#line 853 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 853 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_138_138, 0) = ((MR_Box) (ml_backend__ml_proc_gen__V_139_139));
#line 853 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_138_138, 1) = ((MR_Box) (ml_backend__ml_proc_gen__V_141_141));
#line 853 "ml_proc_gen.m"
    }
#line 852 "ml_proc_gen.m"
    {
#line 852 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 852 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_125_125, 0) = ((MR_Box) (ml_backend__ml_proc_gen__V_126_126));
#line 852 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_125_125, 1) = ((MR_Box) (ml_backend__ml_proc_gen__V_138_138));
#line 852 "ml_proc_gen.m"
    }
#line 848 "ml_proc_gen.m"
    {
#line 848 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 848 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_120_120, 0) = ((MR_Box) (ml_backend__ml_proc_gen__V_121_121));
#line 848 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_120_120, 1) = ((MR_Box) (ml_backend__ml_proc_gen__V_125_125));
#line 848 "ml_proc_gen.m"
    }
#line 847 "ml_proc_gen.m"
    {
#line 847 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 847 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_119_119, 0) = ((MR_Box) (ml_backend__ml_proc_gen__RootNodeInit_53));
#line 847 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_119_119, 1) = ((MR_Box) (ml_backend__ml_proc_gen__V_120_120));
#line 847 "ml_proc_gen.m"
    }
#line 846 "ml_proc_gen.m"
    {
#line 846 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 846 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_118_118, 0) = ((MR_Box) (ml_backend__ml_proc_gen__TypeParamLocnsRefInit_52));
#line 846 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_118_118, 1) = ((MR_Box) (ml_backend__ml_proc_gen__V_119_119));
#line 846 "ml_proc_gen.m"
    }
#line 845 "ml_proc_gen.m"
    {
#line 845 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 845 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_117_117, 0) = ((MR_Box) (ml_backend__ml_proc_gen__PTIsRefInit_51));
#line 845 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_117_117, 1) = ((MR_Box) (ml_backend__ml_proc_gen__V_118_118));
#line 845 "ml_proc_gen.m"
    }
#line 844 "ml_proc_gen.m"
    {
#line 844 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 844 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_115_115, 0) = ((MR_Box) (ml_backend__ml_proc_gen__V_116_116));
#line 844 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_115_115, 1) = ((MR_Box) (ml_backend__ml_proc_gen__V_117_117));
#line 844 "ml_proc_gen.m"
    }
#line 843 "ml_proc_gen.m"
    {
#line 843 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 843 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_113_113, 0) = ((MR_Box) (ml_backend__ml_proc_gen__V_114_114));
#line 843 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_113_113, 1) = ((MR_Box) (ml_backend__ml_proc_gen__V_115_115));
#line 843 "ml_proc_gen.m"
    }
#line 842 "ml_proc_gen.m"
    {
#line 842 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 842 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_111_111, 0) = ((MR_Box) (ml_backend__ml_proc_gen__V_112_112));
#line 842 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_111_111, 1) = ((MR_Box) (ml_backend__ml_proc_gen__V_113_113));
#line 842 "ml_proc_gen.m"
    }
#line 841 "ml_proc_gen.m"
    {
#line 841 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 841 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_109_109, 0) = ((MR_Box) (ml_backend__ml_proc_gen__V_110_110));
#line 841 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_109_109, 1) = ((MR_Box) (ml_backend__ml_proc_gen__V_111_111));
#line 841 "ml_proc_gen.m"
    }
#line 840 "ml_proc_gen.m"
    {
#line 840 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__ProcTableInfoInit_55 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 840 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_proc_gen__ProcTableInfoInit_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_proc_gen_scalar_common_1[11])));
#line 840 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_proc_gen__ProcTableInfoInit_55, 1) = ((MR_Box) (ml_backend__ml_proc_gen__V_109_109));
#line 840 "ml_proc_gen.m"
    }
#line 858 "ml_proc_gen.m"
    {
#line 858 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__ProcTableInfoDefn_56 = ml_backend__ml_proc_gen__tabling_name_and_init_to_defn_5_f_0(ml_backend__ml_proc_gen__MLDS_ProcLabel_26, ml_backend__ml_proc_gen__MLDS_Context_27, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_proc_gen__ProcTableInfoInit_55);
    }
#line 861 "ml_proc_gen.m"
    {
#line 861 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_153_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 861 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_153_153, 0) = ((MR_Box) (ml_backend__ml_proc_gen__ProcTableInfoDefn_56));
#line 861 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_153_153, 1) = ((MR_Box) (ml_backend__ml_proc_gen__STATE_VARIABLE_Defns_0_57));
#line 861 "ml_proc_gen.m"
    }
#line 861 "ml_proc_gen.m"
    {
#line 861 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_152_152 = mercury__list__f_43_43_2_f_0(ml_backend__ml_proc_gen__TypeCtorInfo_158_158, ml_backend__ml_proc_gen__AnswerDefns_50, ml_backend__ml_proc_gen__V_153_153);
    }
#line 861 "ml_proc_gen.m"
    {
#line 861 "ml_proc_gen.m"
      *ml_backend__ml_proc_gen__STATE_VARIABLE_Defns_58 = mercury__list__f_43_43_2_f_0(ml_backend__ml_proc_gen__TypeCtorInfo_158_158, ml_backend__ml_proc_gen__CallDefns_39, ml_backend__ml_proc_gen__V_152_152);
    }
#line 766 "ml_proc_gen.m"
  }
#line 762 "ml_proc_gen.m"
}

#line 655 "ml_proc_gen.m"
static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_convert_headvars_10_p_0(
#line 655 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__Vars_11,
#line 655 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__HeadTypes_12,
#line 655 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__ArgModes_13,
#line 655 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__CopiedOutputVars_14,
#line 655 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__Context_15,
#line 655 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__Decls_16,
#line 655 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__InputStatements_17,
#line 655 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__OutputStatements_18,
#line 655 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Info_0_40,
#line 655 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_Info_41)
#line 655 "ml_proc_gen.m"
{
#line 670 "ml_proc_gen.m"
  while (MR_TRUE)
#line 670 "ml_proc_gen.m"
    {
#line 670 "ml_proc_gen.m"
      /* tailcall optimized into a loop */
#line 670 "ml_proc_gen.m"
      {
#line 670 "ml_proc_gen.m"
        MR_bool ml_backend__ml_proc_gen__succeeded = (ml_backend__ml_proc_gen__Vars_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 663 "ml_proc_gen.m"
        if (ml_backend__ml_proc_gen__succeeded)
#line 663 "ml_proc_gen.m"
          {
#line 664 "ml_proc_gen.m"
            ml_backend__ml_proc_gen__succeeded = (ml_backend__ml_proc_gen__HeadTypes_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 663 "ml_proc_gen.m"
            if (ml_backend__ml_proc_gen__succeeded)
#line 665 "ml_proc_gen.m"
              ml_backend__ml_proc_gen__succeeded = (ml_backend__ml_proc_gen__ArgModes_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 663 "ml_proc_gen.m"
          }
#line 670 "ml_proc_gen.m"
        if (ml_backend__ml_proc_gen__succeeded)
#line 667 "ml_proc_gen.m"
          {
#line 667 "ml_proc_gen.m"
            *ml_backend__ml_proc_gen__Decls_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 668 "ml_proc_gen.m"
            *ml_backend__ml_proc_gen__InputStatements_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 669 "ml_proc_gen.m"
            *ml_backend__ml_proc_gen__OutputStatements_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 667 "ml_proc_gen.m"
            *ml_backend__ml_proc_gen__STATE_VARIABLE_Info_41 = ml_backend__ml_proc_gen__STATE_VARIABLE_Info_0_40;
#line 667 "ml_proc_gen.m"
          }
#line 670 "ml_proc_gen.m"
        else
#line 729 "ml_proc_gen.m"
          {
#line 729 "ml_proc_gen.m"
            MR_Word ml_backend__ml_proc_gen__Var_20;
#line 729 "ml_proc_gen.m"
            MR_Word ml_backend__ml_proc_gen__VarsTail_21;
#line 729 "ml_proc_gen.m"
            MR_Word ml_backend__ml_proc_gen__HeadType_22;
#line 729 "ml_proc_gen.m"
            MR_Word ml_backend__ml_proc_gen__HeadTypesTail_23;
#line 729 "ml_proc_gen.m"
            MR_Word ml_backend__ml_proc_gen__ArgMode_24;
#line 729 "ml_proc_gen.m"
            MR_Word ml_backend__ml_proc_gen__ArgModesTail_25;

#line 671 "ml_proc_gen.m"
            ml_backend__ml_proc_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_proc_gen__Vars_11)) == (MR_mktag((MR_Integer) 1)));
#line 671 "ml_proc_gen.m"
            if (ml_backend__ml_proc_gen__succeeded)
#line 671 "ml_proc_gen.m"
              {
#line 671 "ml_proc_gen.m"
                ml_backend__ml_proc_gen__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Vars_11, (MR_Integer) 0)));
#line 671 "ml_proc_gen.m"
                ml_backend__ml_proc_gen__VarsTail_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Vars_11, (MR_Integer) 1)));
#line 672 "ml_proc_gen.m"
                ml_backend__ml_proc_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_proc_gen__HeadTypes_12)) == (MR_mktag((MR_Integer) 1)));
#line 672 "ml_proc_gen.m"
                if (ml_backend__ml_proc_gen__succeeded)
#line 672 "ml_proc_gen.m"
                  {
#line 672 "ml_proc_gen.m"
                    ml_backend__ml_proc_gen__HeadType_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__HeadTypes_12, (MR_Integer) 0)));
#line 672 "ml_proc_gen.m"
                    ml_backend__ml_proc_gen__HeadTypesTail_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__HeadTypes_12, (MR_Integer) 1)));
#line 673 "ml_proc_gen.m"
                    ml_backend__ml_proc_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_proc_gen__ArgModes_13)) == (MR_mktag((MR_Integer) 1)));
#line 673 "ml_proc_gen.m"
                    if (ml_backend__ml_proc_gen__succeeded)
#line 673 "ml_proc_gen.m"
                      {
#line 673 "ml_proc_gen.m"
                        ml_backend__ml_proc_gen__ArgMode_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__ArgModes_13, (MR_Integer) 0)));
#line 673 "ml_proc_gen.m"
                        ml_backend__ml_proc_gen__ArgModesTail_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__ArgModes_13, (MR_Integer) 1)));
#line 673 "ml_proc_gen.m"
                      }
#line 672 "ml_proc_gen.m"
                  }
#line 671 "ml_proc_gen.m"
              }
#line 729 "ml_proc_gen.m"
            if (ml_backend__ml_proc_gen__succeeded)
#line 675 "ml_proc_gen.m"
              {
#line 675 "ml_proc_gen.m"
                MR_Word ml_backend__ml_proc_gen__BodyType_26;

#line 675 "ml_proc_gen.m"
                {
#line 675 "ml_proc_gen.m"
                  ml_backend__ml_code_util__ml_variable_type_3_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_Info_0_40, ml_backend__ml_proc_gen__Var_20, &ml_backend__ml_proc_gen__BodyType_26);
                }
#line 678 "ml_proc_gen.m"
                ml_backend__ml_proc_gen__succeeded = (ml_backend__ml_proc_gen__ArgMode_24 == (MR_Integer) 2);
#line 683 "ml_proc_gen.m"
                if (ml_backend__ml_proc_gen__succeeded)
#line 680 "ml_proc_gen.m"
                  {
#line 680 "ml_proc_gen.m"
                    /* direct tailcall eliminated */
#line 680 "ml_proc_gen.m"
                    {
#line 680 "ml_proc_gen.m"
                      MR_Word ml_backend__ml_proc_gen__Vars__tmp_copy_11 = ml_backend__ml_proc_gen__VarsTail_21;
#line 680 "ml_proc_gen.m"
                      MR_Word ml_backend__ml_proc_gen__HeadTypes__tmp_copy_12 = ml_backend__ml_proc_gen__HeadTypesTail_23;
#line 680 "ml_proc_gen.m"
                      MR_Word ml_backend__ml_proc_gen__ArgModes__tmp_copy_13 = ml_backend__ml_proc_gen__ArgModesTail_25;

#line 680 "ml_proc_gen.m"
                      ml_backend__ml_proc_gen__ArgModes_13 = ml_backend__ml_proc_gen__ArgModes__tmp_copy_13;
#line 680 "ml_proc_gen.m"
                      ml_backend__ml_proc_gen__HeadTypes_12 = ml_backend__ml_proc_gen__HeadTypes__tmp_copy_12;
#line 680 "ml_proc_gen.m"
                      ml_backend__ml_proc_gen__Vars_11 = ml_backend__ml_proc_gen__Vars__tmp_copy_11;
#line 680 "ml_proc_gen.m"
                    }
#line 680 "ml_proc_gen.m"
                    continue;
#line 680 "ml_proc_gen.m"
                  }
#line 683 "ml_proc_gen.m"
                else
#line 693 "ml_proc_gen.m"
                  {
#line 686 "ml_proc_gen.m"
                    MR_Word ml_backend__ml_proc_gen__TypeInfo_54_54 = (MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[3];
#line 686 "ml_proc_gen.m"
                    MR_Word ml_backend__ml_proc_gen__TypeCtorInfo_55_55 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 686 "ml_proc_gen.m"
                    MR_Word ml_backend__ml_proc_gen__Subst0_27;
#line 686 "ml_proc_gen.m"
                    MR_Word ml_backend__ml_proc_gen__Subst_28;

#line 686 "ml_proc_gen.m"
                    {
#line 686 "ml_proc_gen.m"
                      mercury__map__init_1_p_0(ml_backend__ml_proc_gen__TypeInfo_54_54, ml_backend__ml_proc_gen__TypeCtorInfo_55_55, &ml_backend__ml_proc_gen__Subst0_27);
                    }
#line 687 "ml_proc_gen.m"
                    {
#line 687 "ml_proc_gen.m"
                      ml_backend__ml_proc_gen__succeeded = parse_tree__prog_type__type_unify_5_p_0(ml_backend__ml_proc_gen__HeadType_22, ml_backend__ml_proc_gen__BodyType_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_proc_gen__Subst0_27, &ml_backend__ml_proc_gen__Subst_28);
                    }
#line 686 "ml_proc_gen.m"
                    if (ml_backend__ml_proc_gen__succeeded)
#line 688 "ml_proc_gen.m"
                      {
#line 688 "ml_proc_gen.m"
                        ml_backend__ml_proc_gen__succeeded = mercury__map__is_empty_1_p_0(ml_backend__ml_proc_gen__TypeInfo_54_54, ml_backend__ml_proc_gen__TypeCtorInfo_55_55, ml_backend__ml_proc_gen__Subst_28);
                      }
#line 693 "ml_proc_gen.m"
                    if (ml_backend__ml_proc_gen__succeeded)
#line 690 "ml_proc_gen.m"
                      {
#line 690 "ml_proc_gen.m"
                        /* direct tailcall eliminated */
#line 690 "ml_proc_gen.m"
                        {
#line 690 "ml_proc_gen.m"
                          MR_Word ml_backend__ml_proc_gen__Vars__tmp_copy_11 = ml_backend__ml_proc_gen__VarsTail_21;
#line 690 "ml_proc_gen.m"
                          MR_Word ml_backend__ml_proc_gen__HeadTypes__tmp_copy_12 = ml_backend__ml_proc_gen__HeadTypesTail_23;
#line 690 "ml_proc_gen.m"
                          MR_Word ml_backend__ml_proc_gen__ArgModes__tmp_copy_13 = ml_backend__ml_proc_gen__ArgModesTail_25;

#line 690 "ml_proc_gen.m"
                          ml_backend__ml_proc_gen__ArgModes_13 = ml_backend__ml_proc_gen__ArgModes__tmp_copy_13;
#line 690 "ml_proc_gen.m"
                          ml_backend__ml_proc_gen__HeadTypes_12 = ml_backend__ml_proc_gen__HeadTypes__tmp_copy_12;
#line 690 "ml_proc_gen.m"
                          ml_backend__ml_proc_gen__Vars_11 = ml_backend__ml_proc_gen__Vars__tmp_copy_11;
#line 690 "ml_proc_gen.m"
                        }
#line 690 "ml_proc_gen.m"
                        continue;
#line 690 "ml_proc_gen.m"
                      }
#line 693 "ml_proc_gen.m"
                    else
#line 695 "ml_proc_gen.m"
                      {
#line 695 "ml_proc_gen.m"
                        MR_Word ml_backend__ml_proc_gen__HeadVarLval_29;
#line 695 "ml_proc_gen.m"
                        MR_Word ml_backend__ml_proc_gen__VarSet_30;
#line 695 "ml_proc_gen.m"
                        MR_Word ml_backend__ml_proc_gen__VarName_31;
#line 695 "ml_proc_gen.m"
                        MR_Word ml_backend__ml_proc_gen__BodyLval_32;
#line 695 "ml_proc_gen.m"
                        MR_Word ml_backend__ml_proc_gen__ConvDecls_33;
#line 695 "ml_proc_gen.m"
                        MR_Word ml_backend__ml_proc_gen__ConvInputStatements_34;
#line 695 "ml_proc_gen.m"
                        MR_Word ml_backend__ml_proc_gen__ConvOutputStatements_35;
#line 695 "ml_proc_gen.m"
                        MR_Word ml_backend__ml_proc_gen__DeclsTail_36;
#line 695 "ml_proc_gen.m"
                        MR_Word ml_backend__ml_proc_gen__InputStatementsTail_37;
#line 695 "ml_proc_gen.m"
                        MR_Word ml_backend__ml_proc_gen__OutputStatementsTail_38;
#line 695 "ml_proc_gen.m"
                        MR_Word ml_backend__ml_proc_gen__ByRefOutputVars_39;
#line 695 "ml_proc_gen.m"
                        MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Info_48_48;
#line 695 "ml_proc_gen.m"
                        MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Info_49_49;

#line 695 "ml_proc_gen.m"
                        {
#line 695 "ml_proc_gen.m"
                          ml_backend__ml_code_util__ml_gen_var_with_type_4_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_Info_0_40, ml_backend__ml_proc_gen__Var_20, ml_backend__ml_proc_gen__HeadType_22, &ml_backend__ml_proc_gen__HeadVarLval_29);
                        }
#line 699 "ml_proc_gen.m"
                        {
#line 699 "ml_proc_gen.m"
                          ml_backend__ml_gen_info__ml_gen_info_get_varset_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_Info_0_40, &ml_backend__ml_proc_gen__VarSet_30);
                        }
#line 700 "ml_proc_gen.m"
                        {
#line 700 "ml_proc_gen.m"
                          ml_backend__ml_proc_gen__VarName_31 = ml_backend__ml_code_util__ml_gen_var_name_2_f_0(ml_backend__ml_proc_gen__VarSet_30, ml_backend__ml_proc_gen__Var_20);
                        }
#line 701 "ml_proc_gen.m"
                        {
#line 701 "ml_proc_gen.m"
                          ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_p_0(ml_backend__ml_proc_gen__HeadType_22, ml_backend__ml_proc_gen__BodyType_26, (MR_Integer) 0, ml_backend__ml_proc_gen__HeadVarLval_29, ml_backend__ml_proc_gen__VarName_31, ml_backend__ml_proc_gen__Context_15, (MR_Integer) 0, (MR_Integer) 0, &ml_backend__ml_proc_gen__BodyLval_32, &ml_backend__ml_proc_gen__ConvDecls_33, &ml_backend__ml_proc_gen__ConvInputStatements_34, &ml_backend__ml_proc_gen__ConvOutputStatements_35, ml_backend__ml_proc_gen__STATE_VARIABLE_Info_0_40, &ml_backend__ml_proc_gen__STATE_VARIABLE_Info_48_48);
                        }
#line 708 "ml_proc_gen.m"
                        {
#line 708 "ml_proc_gen.m"
                          ml_backend__ml_gen_info__ml_gen_info_set_var_lval_4_p_0(ml_backend__ml_proc_gen__Var_20, ml_backend__ml_proc_gen__BodyLval_32, ml_backend__ml_proc_gen__STATE_VARIABLE_Info_48_48, &ml_backend__ml_proc_gen__STATE_VARIABLE_Info_49_49);
                        }
#line 710 "ml_proc_gen.m"
                        {
#line 710 "ml_proc_gen.m"
                          ml_backend__ml_proc_gen__ml_gen_convert_headvars_10_p_0(ml_backend__ml_proc_gen__VarsTail_21, ml_backend__ml_proc_gen__HeadTypesTail_23, ml_backend__ml_proc_gen__ArgModesTail_25, ml_backend__ml_proc_gen__CopiedOutputVars_14, ml_backend__ml_proc_gen__Context_15, &ml_backend__ml_proc_gen__DeclsTail_36, &ml_backend__ml_proc_gen__InputStatementsTail_37, &ml_backend__ml_proc_gen__OutputStatementsTail_38, ml_backend__ml_proc_gen__STATE_VARIABLE_Info_49_49, ml_backend__ml_proc_gen__STATE_VARIABLE_Info_41);
                        }
#line 715 "ml_proc_gen.m"
                        {
#line 715 "ml_proc_gen.m"
                          ml_backend__ml_gen_info__ml_gen_info_get_byref_output_vars_2_p_0(*ml_backend__ml_proc_gen__STATE_VARIABLE_Info_41, &ml_backend__ml_proc_gen__ByRefOutputVars_39);
                        }
#line 717 "ml_proc_gen.m"
                        {
#line 717 "ml_proc_gen.m"
                          ml_backend__ml_proc_gen__succeeded = mercury__list__member_2_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[2], ((MR_Box) (ml_backend__ml_proc_gen__Var_20)), ml_backend__ml_proc_gen__ByRefOutputVars_39);
                        }
#line 718 "ml_proc_gen.m"
                        if (!(ml_backend__ml_proc_gen__succeeded))
#line 718 "ml_proc_gen.m"
                          {
#line 718 "ml_proc_gen.m"
                            {
#line 718 "ml_proc_gen.m"
                              ml_backend__ml_proc_gen__succeeded = mercury__list__member_2_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[2], ((MR_Box) (ml_backend__ml_proc_gen__Var_20)), ml_backend__ml_proc_gen__CopiedOutputVars_14);
                            }
#line 718 "ml_proc_gen.m"
                          }
#line 723 "ml_proc_gen.m"
                        if (ml_backend__ml_proc_gen__succeeded)
#line 721 "ml_proc_gen.m"
                          {
#line 721 "ml_proc_gen.m"
                            *ml_backend__ml_proc_gen__InputStatements_17 = ml_backend__ml_proc_gen__InputStatementsTail_37;
#line 722 "ml_proc_gen.m"
                            {
#line 722 "ml_proc_gen.m"
                              *ml_backend__ml_proc_gen__OutputStatements_18 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_proc_gen__OutputStatementsTail_38, ml_backend__ml_proc_gen__ConvOutputStatements_35);
                            }
#line 721 "ml_proc_gen.m"
                          }
#line 723 "ml_proc_gen.m"
                        else
#line 724 "ml_proc_gen.m"
                          {
#line 724 "ml_proc_gen.m"
                            {
#line 724 "ml_proc_gen.m"
                              *ml_backend__ml_proc_gen__InputStatements_17 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_proc_gen__ConvInputStatements_34, ml_backend__ml_proc_gen__InputStatementsTail_37);
                            }
#line 725 "ml_proc_gen.m"
                            *ml_backend__ml_proc_gen__OutputStatements_18 = ml_backend__ml_proc_gen__OutputStatementsTail_38;
#line 724 "ml_proc_gen.m"
                          }
#line 727 "ml_proc_gen.m"
                        {
#line 727 "ml_proc_gen.m"
                          *ml_backend__ml_proc_gen__Decls_16 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, ml_backend__ml_proc_gen__ConvDecls_33, ml_backend__ml_proc_gen__DeclsTail_36);
                        }
#line 695 "ml_proc_gen.m"
                      }
#line 693 "ml_proc_gen.m"
                  }
#line 675 "ml_proc_gen.m"
              }
#line 729 "ml_proc_gen.m"
            else
#line 730 "ml_proc_gen.m"
              {
#line 730 "ml_proc_gen.m"
                {
#line 730 "ml_proc_gen.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_proc_gen", (MR_String) "predicate \140ml_backend.ml_proc_gen.ml_gen_convert_headvars\'/10", (MR_String) "length mismatch");
#line 730 "ml_proc_gen.m"
                  return;
                }
#line 730 "ml_proc_gen.m"
              }
#line 729 "ml_proc_gen.m"
          }
#line 670 "ml_proc_gen.m"
      }
#line 670 "ml_proc_gen.m"
      break;
#line 670 "ml_proc_gen.m"
    }
#line 655 "ml_proc_gen.m"
}

#line 633 "ml_proc_gen.m"
static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_body_10_p_0_2(
#line 633 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__closure_arg,
#line 633 "ml_proc_gen.m"
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_1,
#line 633 "ml_proc_gen.m"
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_2,
#line 633 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_3,
#line 633 "ml_proc_gen.m"
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_4)
#line 633 "ml_proc_gen.m"
{
#line 633 "ml_proc_gen.m"
  {
#line 633 "ml_proc_gen.m"
    MR_Box ml_backend__ml_proc_gen__closure = ml_backend__ml_proc_gen__closure_arg;
#line 633 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__conv5_HeadVar__4_40;
#line 633 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__conv4_HeadVar__5_41;
#line 633 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__conv3_HeadVar__7_43;

#line 633 "ml_proc_gen.m"
    {
#line 633 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__IntroducedFrom__pred__ml_gen_proc_body__633__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 5))), &ml_backend__ml_proc_gen__conv5_HeadVar__4_40, &ml_backend__ml_proc_gen__conv4_HeadVar__5_41, ((MR_Word) ml_backend__ml_proc_gen__wrapper_arg_3), &ml_backend__ml_proc_gen__conv3_HeadVar__7_43);
    }
#line 633 "ml_proc_gen.m"
    *ml_backend__ml_proc_gen__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_proc_gen__conv5_HeadVar__4_40));
#line 633 "ml_proc_gen.m"
    *ml_backend__ml_proc_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_proc_gen__conv4_HeadVar__5_41));
#line 633 "ml_proc_gen.m"
    *ml_backend__ml_proc_gen__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_proc_gen__conv3_HeadVar__7_43));
#line 633 "ml_proc_gen.m"
  }
#line 633 "ml_proc_gen.m"
}

#line 628 "ml_proc_gen.m"
static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_body_10_p_0_1(
#line 628 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__closure_arg,
#line 628 "ml_proc_gen.m"
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_1,
#line 628 "ml_proc_gen.m"
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_2,
#line 628 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_3,
#line 628 "ml_proc_gen.m"
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_4)
#line 628 "ml_proc_gen.m"
{
#line 628 "ml_proc_gen.m"
  {
#line 628 "ml_proc_gen.m"
    MR_Box ml_backend__ml_proc_gen__closure = ml_backend__ml_proc_gen__closure_arg;
#line 628 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__conv2_HeadVar__3_3;
#line 628 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__conv1_HeadVar__4_4;
#line 628 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__conv0_HeadVar__6_6;

#line 628 "ml_proc_gen.m"
    {
#line 628 "ml_proc_gen.m"
      ml_backend__ml_code_gen__ml_gen_goal_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 4))), &ml_backend__ml_proc_gen__conv2_HeadVar__3_3, &ml_backend__ml_proc_gen__conv1_HeadVar__4_4, ((MR_Word) ml_backend__ml_proc_gen__wrapper_arg_3), &ml_backend__ml_proc_gen__conv0_HeadVar__6_6);
    }
#line 628 "ml_proc_gen.m"
    *ml_backend__ml_proc_gen__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_proc_gen__conv2_HeadVar__3_3));
#line 628 "ml_proc_gen.m"
    *ml_backend__ml_proc_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_proc_gen__conv1_HeadVar__4_4));
#line 628 "ml_proc_gen.m"
    *ml_backend__ml_proc_gen__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_proc_gen__conv0_HeadVar__6_6));
#line 628 "ml_proc_gen.m"
  }
#line 628 "ml_proc_gen.m"
}

#line 597 "ml_proc_gen.m"
static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_body_10_p_0(
#line 597 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__CodeModel_11,
#line 597 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__HeadVars_12,
#line 597 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__ArgTypes_13,
#line 597 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__ArgModes_14,
#line 597 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__CopiedOutputVars_15,
#line 597 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__Goal_16,
#line 597 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__Decls_17,
#line 597 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__Statements_18,
#line 597 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Info_0_36,
#line 597 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_Info_37)
#line 597 "ml_proc_gen.m"
{
#line 603 "ml_proc_gen.m"
  {
#line 603 "ml_proc_gen.m"
    MR_bool ml_backend__ml_proc_gen__succeeded;
#line 603 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__GoalInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Goal_16, (MR_Integer) 1)));
#line 603 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__Context_22;
#line 603 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__CopiedOutputVarOriginalLvals_23;
#line 603 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__ConvDecls_24;
#line 603 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__ConvInputStatements_25;
#line 603 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__ConvOutputStatements_26;
#line 603 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__Statements1_27;
#line 603 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Info_38_38;
#line 604 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Goal_16, (MR_Integer) 0)));

#line 605 "ml_proc_gen.m"
    {
#line 605 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__Context_22 = hlds__hlds_goal__goal_info_get_context_1_f_0(ml_backend__ml_proc_gen__GoalInfo_21);
    }
#line 617 "ml_proc_gen.m"
    {
#line 617 "ml_proc_gen.m"
      ml_backend__ml_code_util__ml_gen_var_list_3_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_Info_0_36, ml_backend__ml_proc_gen__CopiedOutputVars_15, &ml_backend__ml_proc_gen__CopiedOutputVarOriginalLvals_23);
    }
#line 618 "ml_proc_gen.m"
    {
#line 618 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__ml_gen_convert_headvars_10_p_0(ml_backend__ml_proc_gen__HeadVars_12, ml_backend__ml_proc_gen__ArgTypes_13, ml_backend__ml_proc_gen__ArgModes_14, ml_backend__ml_proc_gen__CopiedOutputVars_15, ml_backend__ml_proc_gen__Context_22, &ml_backend__ml_proc_gen__ConvDecls_24, &ml_backend__ml_proc_gen__ConvInputStatements_25, &ml_backend__ml_proc_gen__ConvOutputStatements_26, ml_backend__ml_proc_gen__STATE_VARIABLE_Info_0_36, &ml_backend__ml_proc_gen__STATE_VARIABLE_Info_38_38);
    }
#line 621 "ml_proc_gen.m"
    ml_backend__ml_proc_gen__succeeded = (ml_backend__ml_proc_gen__ConvDecls_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 621 "ml_proc_gen.m"
    if (ml_backend__ml_proc_gen__succeeded)
#line 621 "ml_proc_gen.m"
      {
#line 622 "ml_proc_gen.m"
        ml_backend__ml_proc_gen__succeeded = (ml_backend__ml_proc_gen__ConvInputStatements_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 621 "ml_proc_gen.m"
        if (ml_backend__ml_proc_gen__succeeded)
#line 623 "ml_proc_gen.m"
          ml_backend__ml_proc_gen__succeeded = (ml_backend__ml_proc_gen__ConvOutputStatements_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 621 "ml_proc_gen.m"
      }
#line 627 "ml_proc_gen.m"
    if (ml_backend__ml_proc_gen__succeeded)
#line 626 "ml_proc_gen.m"
      {
#line 626 "ml_proc_gen.m"
        ml_backend__ml_code_gen__ml_gen_goal_6_p_0(ml_backend__ml_proc_gen__CodeModel_11, ml_backend__ml_proc_gen__Goal_16, ml_backend__ml_proc_gen__Decls_17, &ml_backend__ml_proc_gen__Statements1_27, ml_backend__ml_proc_gen__STATE_VARIABLE_Info_38_38, ml_backend__ml_proc_gen__STATE_VARIABLE_Info_37);
      }
#line 627 "ml_proc_gen.m"
    else
#line 628 "ml_proc_gen.m"
      {
#line 628 "ml_proc_gen.m"
        MR_Word ml_backend__ml_proc_gen__DoGenGoal_28;
#line 628 "ml_proc_gen.m"
        MR_Word ml_backend__ml_proc_gen__DoConvOutputs_29;
#line 628 "ml_proc_gen.m"
        MR_Word ml_backend__ml_proc_gen__Decls0_34;
#line 628 "ml_proc_gen.m"
        MR_Word ml_backend__ml_proc_gen__Statements0_35;

#line 628 "ml_proc_gen.m"
        {
#line 628 "ml_proc_gen.m"
          ml_backend__ml_proc_gen__DoGenGoal_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 628 "ml_proc_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__DoGenGoal_28, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_10[0]));
#line 628 "ml_proc_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__DoGenGoal_28, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_proc_body_10_p_0_1));
#line 628 "ml_proc_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__DoGenGoal_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 628 "ml_proc_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__DoGenGoal_28, 3) = ((MR_Box) (ml_backend__ml_proc_gen__CodeModel_11));
#line 628 "ml_proc_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__DoGenGoal_28, 4) = ((MR_Box) (ml_backend__ml_proc_gen__Goal_16));
#line 628 "ml_proc_gen.m"
        }
#line 633 "ml_proc_gen.m"
        {
#line 633 "ml_proc_gen.m"
          ml_backend__ml_proc_gen__DoConvOutputs_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 633 "ml_proc_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__DoConvOutputs_29, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_11[0]));
#line 633 "ml_proc_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__DoConvOutputs_29, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_proc_body_10_p_0_2));
#line 633 "ml_proc_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__DoConvOutputs_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 633 "ml_proc_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__DoConvOutputs_29, 3) = ((MR_Box) (ml_backend__ml_proc_gen__CodeModel_11));
#line 633 "ml_proc_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__DoConvOutputs_29, 4) = ((MR_Box) (ml_backend__ml_proc_gen__Context_22));
#line 633 "ml_proc_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__DoConvOutputs_29, 5) = ((MR_Box) (ml_backend__ml_proc_gen__ConvOutputStatements_26));
#line 633 "ml_proc_gen.m"
        }
#line 639 "ml_proc_gen.m"
        {
#line 639 "ml_proc_gen.m"
          ml_backend__ml_code_util__ml_combine_conj_8_p_0(ml_backend__ml_proc_gen__CodeModel_11, ml_backend__ml_proc_gen__Context_22, ml_backend__ml_proc_gen__DoGenGoal_28, ml_backend__ml_proc_gen__DoConvOutputs_29, &ml_backend__ml_proc_gen__Decls0_34, &ml_backend__ml_proc_gen__Statements0_35, ml_backend__ml_proc_gen__STATE_VARIABLE_Info_38_38, ml_backend__ml_proc_gen__STATE_VARIABLE_Info_37);
        }
#line 641 "ml_proc_gen.m"
        {
#line 641 "ml_proc_gen.m"
          ml_backend__ml_proc_gen__Statements1_27 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_proc_gen__ConvInputStatements_25, ml_backend__ml_proc_gen__Statements0_35);
        }
#line 642 "ml_proc_gen.m"
        {
#line 642 "ml_proc_gen.m"
          *ml_backend__ml_proc_gen__Decls_17 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, ml_backend__ml_proc_gen__ConvDecls_24, ml_backend__ml_proc_gen__Decls0_34);
        }
#line 628 "ml_proc_gen.m"
      }
#line 646 "ml_proc_gen.m"
    {
#line 646 "ml_proc_gen.m"
      ml_backend__ml_code_util__ml_append_return_statement_6_p_0(*ml_backend__ml_proc_gen__STATE_VARIABLE_Info_37, ml_backend__ml_proc_gen__CodeModel_11, ml_backend__ml_proc_gen__CopiedOutputVarOriginalLvals_23, ml_backend__ml_proc_gen__Context_22, ml_backend__ml_proc_gen__Statements1_27, ml_backend__ml_proc_gen__Statements_18);
#line 646 "ml_proc_gen.m"
      return;
    }
#line 603 "ml_proc_gen.m"
  }
#line 597 "ml_proc_gen.m"
}

#line 544 "ml_proc_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_proc_gen__ml_det_copy_out_vars_4_p_0_1(
#line 544 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__closure_arg,
#line 544 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1)
#line 544 "ml_proc_gen.m"
{
#line 544 "ml_proc_gen.m"
  {
#line 544 "ml_proc_gen.m"
    MR_bool ml_backend__ml_proc_gen__succeeded;
#line 544 "ml_proc_gen.m"
    MR_Box ml_backend__ml_proc_gen__closure = ml_backend__ml_proc_gen__closure_arg;

#line 544 "ml_proc_gen.m"
    {
#line 544 "ml_proc_gen.m"
      return ml_backend__ml_proc_gen__succeeded = hlds__hlds_pred__var_is_of_dummy_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__ml_proc_gen__wrapper_arg_1));
    }
#line 544 "ml_proc_gen.m"
    return ml_backend__ml_proc_gen__succeeded;
#line 544 "ml_proc_gen.m"
  }
#line 544 "ml_proc_gen.m"
}

#line 531 "ml_proc_gen.m"
static void MR_CALL 
ml_backend__ml_proc_gen__ml_det_copy_out_vars_4_p_0(
#line 531 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__ModuleInfo_5,
#line 531 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__CopiedOutputVars_6,
#line 531 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Info_0_17,
#line 531 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_Info_18)
#line 531 "ml_proc_gen.m"
{
#line 534 "ml_proc_gen.m"
  {
#line 534 "ml_proc_gen.m"
    MR_bool ml_backend__ml_proc_gen__succeeded;
#line 534 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__OutputVars_8;
#line 534 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__Globals_9;
#line 534 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__DetCopyOut_10;
#line 534 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__ByRefOutputVars_11;
#line 534 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Info_22_22;

#line 535 "ml_proc_gen.m"
    {
#line 535 "ml_proc_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_byref_output_vars_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_Info_0_17, &ml_backend__ml_proc_gen__OutputVars_8);
    }
#line 536 "ml_proc_gen.m"
    {
#line 536 "ml_proc_gen.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_proc_gen__ModuleInfo_5, &ml_backend__ml_proc_gen__Globals_9);
    }
#line 537 "ml_proc_gen.m"
    {
#line 537 "ml_proc_gen.m"
      libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_proc_gen__Globals_9, (MR_Integer) 259, &ml_backend__ml_proc_gen__DetCopyOut_10);
    }
#line 546 "ml_proc_gen.m"
#line 546 "ml_proc_gen.m"
    switch (ml_backend__ml_proc_gen__DetCopyOut_10) {
#line 546 "ml_proc_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 546 "ml_proc_gen.m"
      case (MR_Integer) 0:
#line 558 "ml_proc_gen.m"
        {
#line 558 "ml_proc_gen.m"
          MR_Word ml_backend__ml_proc_gen__ResultVar_16;
#line 552 "ml_proc_gen.m"
          MR_Word ml_backend__ml_proc_gen__PredId_14;
#line 552 "ml_proc_gen.m"
          MR_Integer ml_backend__ml_proc_gen__ProcId_15;

#line 552 "ml_proc_gen.m"
          {
#line 552 "ml_proc_gen.m"
            ml_backend__ml_gen_info__ml_gen_info_get_pred_id_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_Info_0_17, &ml_backend__ml_proc_gen__PredId_14);
          }
#line 553 "ml_proc_gen.m"
          {
#line 553 "ml_proc_gen.m"
            ml_backend__ml_gen_info__ml_gen_info_get_proc_id_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_Info_0_17, &ml_backend__ml_proc_gen__ProcId_15);
          }
#line 554 "ml_proc_gen.m"
          {
#line 554 "ml_proc_gen.m"
            ml_backend__ml_proc_gen__succeeded = ml_backend__ml_code_util__ml_is_output_det_function_4_p_0(ml_backend__ml_proc_gen__ModuleInfo_5, ml_backend__ml_proc_gen__PredId_14, ml_backend__ml_proc_gen__ProcId_15, &ml_backend__ml_proc_gen__ResultVar_16);
          }
#line 558 "ml_proc_gen.m"
          if (ml_backend__ml_proc_gen__succeeded)
#line 556 "ml_proc_gen.m"
            {
#line 556 "ml_proc_gen.m"
              {
#line 556 "ml_proc_gen.m"
                MR_Word base;
#line 556 "ml_proc_gen.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 556 "ml_proc_gen.m"
                *ml_backend__ml_proc_gen__CopiedOutputVars_6 = base;
#line 556 "ml_proc_gen.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_proc_gen__ResultVar_16));
#line 556 "ml_proc_gen.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 556 "ml_proc_gen.m"
              }
#line 557 "ml_proc_gen.m"
              {
#line 557 "ml_proc_gen.m"
                mercury__list__delete_all_3_p_1((MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[2], ml_backend__ml_proc_gen__OutputVars_8, ((MR_Box) (ml_backend__ml_proc_gen__ResultVar_16)), &ml_backend__ml_proc_gen__ByRefOutputVars_11);
              }
#line 556 "ml_proc_gen.m"
            }
#line 558 "ml_proc_gen.m"
          else
#line 560 "ml_proc_gen.m"
            {
#line 560 "ml_proc_gen.m"
              *ml_backend__ml_proc_gen__CopiedOutputVars_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 561 "ml_proc_gen.m"
              ml_backend__ml_proc_gen__ByRefOutputVars_11 = ml_backend__ml_proc_gen__OutputVars_8;
#line 560 "ml_proc_gen.m"
            }
#line 558 "ml_proc_gen.m"
        }
#line 546 "ml_proc_gen.m"
        break;
#line 546 "ml_proc_gen.m"
      case (MR_Integer) 1:
#line 541 "ml_proc_gen.m"
        {
#line 541 "ml_proc_gen.m"
          MR_Word ml_backend__ml_proc_gen__VarTypes_12;
#line 541 "ml_proc_gen.m"
          MR_Word ml_backend__ml_proc_gen__V_21_21;
#line 544 "ml_proc_gen.m"
          MR_Word ml_backend__ml_proc_gen__V_13_13;

#line 542 "ml_proc_gen.m"
          ml_backend__ml_proc_gen__ByRefOutputVars_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 543 "ml_proc_gen.m"
          {
#line 543 "ml_proc_gen.m"
            ml_backend__ml_gen_info__ml_gen_info_get_var_types_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_Info_0_17, &ml_backend__ml_proc_gen__VarTypes_12);
          }
#line 544 "ml_proc_gen.m"
          {
#line 544 "ml_proc_gen.m"
            ml_backend__ml_proc_gen__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 544 "ml_proc_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__V_21_21, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_3[3]));
#line 544 "ml_proc_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__V_21_21, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_det_copy_out_vars_4_p_0_1));
#line 544 "ml_proc_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 544 "ml_proc_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__V_21_21, 3) = ((MR_Box) (ml_backend__ml_proc_gen__ModuleInfo_5));
#line 544 "ml_proc_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__V_21_21, 4) = ((MR_Box) (ml_backend__ml_proc_gen__VarTypes_12));
#line 544 "ml_proc_gen.m"
          }
#line 544 "ml_proc_gen.m"
          {
#line 544 "ml_proc_gen.m"
            mercury__list__filter_4_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[2], ml_backend__ml_proc_gen__V_21_21, ml_backend__ml_proc_gen__OutputVars_8, &ml_backend__ml_proc_gen__V_13_13, ml_backend__ml_proc_gen__CopiedOutputVars_6);
          }
#line 541 "ml_proc_gen.m"
        }
#line 546 "ml_proc_gen.m"
        break;
#line 546 "ml_proc_gen.m"
    }
#line 564 "ml_proc_gen.m"
    {
#line 564 "ml_proc_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_set_byref_output_vars_3_p_0(ml_backend__ml_proc_gen__ByRefOutputVars_11, ml_backend__ml_proc_gen__STATE_VARIABLE_Info_0_17, &ml_backend__ml_proc_gen__STATE_VARIABLE_Info_22_22);
    }
#line 565 "ml_proc_gen.m"
    {
#line 565 "ml_proc_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_set_value_output_vars_3_p_0(*ml_backend__ml_proc_gen__CopiedOutputVars_6, ml_backend__ml_proc_gen__STATE_VARIABLE_Info_22_22, ml_backend__ml_proc_gen__STATE_VARIABLE_Info_18);
#line 565 "ml_proc_gen.m"
      return;
    }
#line 534 "ml_proc_gen.m"
  }
#line 531 "ml_proc_gen.m"
}

#line 509 "ml_proc_gen.m"
static MR_Word MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_decl_flags_3_f_0(
#line 509 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__ModuleInfo_5,
#line 509 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__PredId_6,
#line 509 "ml_proc_gen.m"
  MR_Integer ml_backend__ml_proc_gen__ProcId_7)
#line 509 "ml_proc_gen.m"
{
#line 512 "ml_proc_gen.m"
  {
#line 512 "ml_proc_gen.m"
    MR_bool ml_backend__ml_proc_gen__succeeded;
#line 512 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__DeclFlags_8;
#line 512 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__PredInfo_9;
#line 512 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__Access_10;

#line 513 "ml_proc_gen.m"
    {
#line 513 "ml_proc_gen.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(ml_backend__ml_proc_gen__ModuleInfo_5, ml_backend__ml_proc_gen__PredId_6, &ml_backend__ml_proc_gen__PredInfo_9);
    }
#line 514 "ml_proc_gen.m"
    {
#line 514 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__succeeded = hlds__hlds_pred__procedure_is_exported_3_p_0(ml_backend__ml_proc_gen__ModuleInfo_5, ml_backend__ml_proc_gen__PredInfo_9, ml_backend__ml_proc_gen__ProcId_7);
    }
#line 516 "ml_proc_gen.m"
    if (ml_backend__ml_proc_gen__succeeded)
#line 515 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__Access_10 = (MR_Integer) 0;
#line 516 "ml_proc_gen.m"
    else
#line 517 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__Access_10 = (MR_Integer) 2;
#line 524 "ml_proc_gen.m"
    {
#line 524 "ml_proc_gen.m"
      return ml_backend__ml_proc_gen__DeclFlags_8 = ml_backend__mlds__init_decl_flags_6_f_0(ml_backend__ml_proc_gen__Access_10, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
    }
#line 512 "ml_proc_gen.m"
    return ml_backend__ml_proc_gen__DeclFlags_8;
#line 512 "ml_proc_gen.m"
  }
#line 509 "ml_proc_gen.m"
}

#line 383 "ml_proc_gen.m"
static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_9_p_0(
#line 383 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_59,
#line 383 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_60,
#line 383 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__ConstStructMap_11,
#line 383 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__PredId_12,
#line 383 "ml_proc_gen.m"
  MR_Integer ml_backend__ml_proc_gen__ProcId_13,
#line 383 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Defns_0_61,
#line 383 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_Defns_62,
#line 383 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_0_63,
#line 383 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_64)
#line 383 "ml_proc_gen.m"
{
#line 388 "ml_proc_gen.m"
  {
#line 388 "ml_proc_gen.m"
    MR_bool ml_backend__ml_proc_gen__succeeded;
#line 388 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__PredInfo_16;
#line 388 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__ProcInfo0_17;
#line 388 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__ProcInfo_18;
#line 388 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__PredStatus_19;
#line 388 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__ArgTypes_20;
#line 388 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__CodeModel_21;
#line 388 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__HeadVars_22;
#line 388 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__Modes_23;
#line 388 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__Goal_24;
#line 388 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__GoalInfo_26;
#line 388 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__Context_27;
#line 388 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__FunctionBody_30;
#line 388 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__ExtraDefns_31;
#line 388 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__MLDS_Params_32;
#line 388 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__EnvVarNames_47;
#line 388 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__ProcContext_48;
#line 388 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__EntityName_49;
#line 388 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__MLDS_ProcContext_51;
#line 388 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__DeclFlags_52;
#line 388 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__MaybePredProcId_53;
#line 388 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__Attributes_54;
#line 388 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__AttributeList_55;
#line 388 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__MLDS_Attributes_56;
#line 388 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__EntityBody_57;
#line 388 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__ProcDefn_58;
#line 388 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Info_67_67;
#line 388 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Info_74_74;
#line 388 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_76_76;
#line 388 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_78_78;
#line 415 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen___GoalExpr_25;
#line 422 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_68_68;
#line 422 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_29_29;
#line 494 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen___ModuleName_50;

#line 402 "ml_proc_gen.m"
    {
#line 402 "ml_proc_gen.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_59, ml_backend__ml_proc_gen__PredId_12, ml_backend__ml_proc_gen__ProcId_13, &ml_backend__ml_proc_gen__PredInfo_16, &ml_backend__ml_proc_gen__ProcInfo0_17);
    }
#line 404 "ml_proc_gen.m"
    {
#line 404 "ml_proc_gen.m"
      hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, ml_backend__ml_proc_gen__ProcInfo0_17, &ml_backend__ml_proc_gen__ProcInfo_18);
    }
#line 405 "ml_proc_gen.m"
    {
#line 405 "ml_proc_gen.m"
      hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(ml_backend__ml_proc_gen__PredId_12, ml_backend__ml_proc_gen__ProcId_13, ml_backend__ml_proc_gen__PredInfo_16, ml_backend__ml_proc_gen__ProcInfo_18, ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_59, ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_60);
    }
#line 408 "ml_proc_gen.m"
    {
#line 408 "ml_proc_gen.m"
      hlds__hlds_pred__pred_info_get_status_2_p_0(ml_backend__ml_proc_gen__PredInfo_16, &ml_backend__ml_proc_gen__PredStatus_19);
    }
#line 409 "ml_proc_gen.m"
    {
#line 409 "ml_proc_gen.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(ml_backend__ml_proc_gen__PredInfo_16, &ml_backend__ml_proc_gen__ArgTypes_20);
    }
#line 410 "ml_proc_gen.m"
    {
#line 410 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__CodeModel_21 = hlds__code_model__proc_info_interface_code_model_1_f_0(ml_backend__ml_proc_gen__ProcInfo_18);
    }
#line 411 "ml_proc_gen.m"
    {
#line 411 "ml_proc_gen.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ml_backend__ml_proc_gen__ProcInfo_18, &ml_backend__ml_proc_gen__HeadVars_22);
    }
#line 412 "ml_proc_gen.m"
    {
#line 412 "ml_proc_gen.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ml_backend__ml_proc_gen__ProcInfo_18, &ml_backend__ml_proc_gen__Modes_23);
    }
#line 413 "ml_proc_gen.m"
    {
#line 413 "ml_proc_gen.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(ml_backend__ml_proc_gen__ProcInfo_18, &ml_backend__ml_proc_gen__Goal_24);
    }
#line 415 "ml_proc_gen.m"
    ml_backend__ml_proc_gen___GoalExpr_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Goal_24, (MR_Integer) 0)));
#line 415 "ml_proc_gen.m"
    ml_backend__ml_proc_gen__GoalInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Goal_24, (MR_Integer) 1)));
#line 416 "ml_proc_gen.m"
    {
#line 416 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__Context_27 = hlds__hlds_goal__goal_info_get_context_1_f_0(ml_backend__ml_proc_gen__GoalInfo_26);
    }
#line 419 "ml_proc_gen.m"
    {
#line 419 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__STATE_VARIABLE_Info_67_67 = ml_backend__ml_gen_info__ml_gen_info_init_6_f_0(*ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_60, ml_backend__ml_proc_gen__ConstStructMap_11, ml_backend__ml_proc_gen__PredId_12, ml_backend__ml_proc_gen__ProcId_13, ml_backend__ml_proc_gen__ProcInfo_18, ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_0_63);
    }
#line 422 "ml_proc_gen.m"
    ml_backend__ml_proc_gen__V_68_68 = (MR_Word) ml_backend__ml_proc_gen__PredStatus_19;
#line 422 "ml_proc_gen.m"
    ml_backend__ml_proc_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_proc_gen__V_68_68)) == (MR_mktag((MR_Integer) 1)));
#line 422 "ml_proc_gen.m"
    if (ml_backend__ml_proc_gen__succeeded)
#line 422 "ml_proc_gen.m"
      {
#line 422 "ml_proc_gen.m"
        ml_backend__ml_proc_gen__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_68_68, (MR_Integer) 0)));
#line 430 "ml_proc_gen.m"
        {
#line 432 "ml_proc_gen.m"
          MR_Word ml_backend__ml_proc_gen___Info_33;

#line 430 "ml_proc_gen.m"
          ml_backend__ml_proc_gen__FunctionBody_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 431 "ml_proc_gen.m"
          ml_backend__ml_proc_gen__ExtraDefns_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 432 "ml_proc_gen.m"
          {
#line 432 "ml_proc_gen.m"
            ml_backend__ml_code_util__ml_gen_proc_params_5_p_0(ml_backend__ml_proc_gen__PredId_12, ml_backend__ml_proc_gen__ProcId_13, &ml_backend__ml_proc_gen__MLDS_Params_32, ml_backend__ml_proc_gen__STATE_VARIABLE_Info_67_67, &ml_backend__ml_proc_gen___Info_33);
          }
#line 430 "ml_proc_gen.m"
          ml_backend__ml_proc_gen__STATE_VARIABLE_Info_74_74 = ml_backend__ml_proc_gen__STATE_VARIABLE_Info_67_67;
#line 430 "ml_proc_gen.m"
          *ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_64 = ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_0_63;
#line 430 "ml_proc_gen.m"
        }
#line 422 "ml_proc_gen.m"
      }
#line 422 "ml_proc_gen.m"
    else
#line 447 "ml_proc_gen.m"
      {
#line 447 "ml_proc_gen.m"
        MR_Word ml_backend__ml_proc_gen__Defns_14;
#line 447 "ml_proc_gen.m"
        MR_Word ml_backend__ml_proc_gen__CopiedOutputVars_34;
#line 447 "ml_proc_gen.m"
        MR_Word ml_backend__ml_proc_gen__OutputVarLocals_35;
#line 447 "ml_proc_gen.m"
        MR_Word ml_backend__ml_proc_gen__MLDS_Context_41;
#line 447 "ml_proc_gen.m"
        MR_Word ml_backend__ml_proc_gen__MLDS_LocalVars_42;
#line 447 "ml_proc_gen.m"
        MR_Word ml_backend__ml_proc_gen__ArgModes_43;
#line 447 "ml_proc_gen.m"
        MR_Word ml_backend__ml_proc_gen__Defns0_44;
#line 447 "ml_proc_gen.m"
        MR_Word ml_backend__ml_proc_gen__Statements_45;
#line 447 "ml_proc_gen.m"
        MR_Word ml_backend__ml_proc_gen__Statement_46;
#line 447 "ml_proc_gen.m"
        MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Info_70_70;
#line 447 "ml_proc_gen.m"
        MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Info_71_71;
#line 447 "ml_proc_gen.m"
        MR_Word ml_backend__ml_proc_gen__V_72_72;
#line 447 "ml_proc_gen.m"
        MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Info_73_73;

#line 443 "ml_proc_gen.m"
#line 443 "ml_proc_gen.m"
        switch (ml_backend__ml_proc_gen__CodeModel_21) {
#line 443 "ml_proc_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 443 "ml_proc_gen.m"
          case (MR_Integer) 0:
#line 443 "ml_proc_gen.m"
          case (MR_Integer) 1:
#line 442 "ml_proc_gen.m"
            {
#line 442 "ml_proc_gen.m"
              ml_backend__ml_proc_gen__ml_det_copy_out_vars_4_p_0(*ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_60, &ml_backend__ml_proc_gen__CopiedOutputVars_34, ml_backend__ml_proc_gen__STATE_VARIABLE_Info_67_67, &ml_backend__ml_proc_gen__STATE_VARIABLE_Info_70_70);
            }
#line 443 "ml_proc_gen.m"
            break;
#line 443 "ml_proc_gen.m"
          case (MR_Integer) 2:
#line 575 "ml_proc_gen.m"
            {
#line 575 "ml_proc_gen.m"
              MR_Word ml_backend__ml_proc_gen__Globals_86;
#line 575 "ml_proc_gen.m"
              MR_Word ml_backend__ml_proc_gen__NondetCopyOut_87;
#line 575 "ml_proc_gen.m"
              MR_Word ml_backend__ml_proc_gen__OutputVarLvals_88;
#line 575 "ml_proc_gen.m"
              MR_Word ml_backend__ml_proc_gen__OutputVarTypes_89;
#line 575 "ml_proc_gen.m"
              MR_Word ml_backend__ml_proc_gen__InitialCont_90;
#line 575 "ml_proc_gen.m"
              MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Info_17_93;
#line 575 "ml_proc_gen.m"
              MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Info_18_94;

#line 576 "ml_proc_gen.m"
              {
#line 576 "ml_proc_gen.m"
                hlds__hlds_module__module_info_get_globals_2_p_0(*ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_60, &ml_backend__ml_proc_gen__Globals_86);
              }
#line 577 "ml_proc_gen.m"
              {
#line 577 "ml_proc_gen.m"
                libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_proc_gen__Globals_86, (MR_Integer) 260, &ml_backend__ml_proc_gen__NondetCopyOut_87);
              }
#line 585 "ml_proc_gen.m"
#line 585 "ml_proc_gen.m"
              switch (ml_backend__ml_proc_gen__NondetCopyOut_87) {
#line 585 "ml_proc_gen.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 585 "ml_proc_gen.m"
                case (MR_Integer) 0:
#line 586 "ml_proc_gen.m"
                  {
#line 587 "ml_proc_gen.m"
                    ml_backend__ml_proc_gen__CopiedOutputVars_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 586 "ml_proc_gen.m"
                    ml_backend__ml_proc_gen__STATE_VARIABLE_Info_17_93 = ml_backend__ml_proc_gen__STATE_VARIABLE_Info_67_67;
#line 586 "ml_proc_gen.m"
                  }
#line 585 "ml_proc_gen.m"
                  break;
#line 585 "ml_proc_gen.m"
                case (MR_Integer) 1:
#line 579 "ml_proc_gen.m"
                  {
#line 583 "ml_proc_gen.m"
                    {
#line 583 "ml_proc_gen.m"
                      ml_backend__ml_gen_info__ml_gen_info_get_byref_output_vars_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_Info_67_67, &ml_backend__ml_proc_gen__CopiedOutputVars_34);
                    }
#line 584 "ml_proc_gen.m"
                    {
#line 584 "ml_proc_gen.m"
                      ml_backend__ml_gen_info__ml_gen_info_set_byref_output_vars_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_proc_gen__STATE_VARIABLE_Info_67_67, &ml_backend__ml_proc_gen__STATE_VARIABLE_Info_17_93);
                    }
#line 579 "ml_proc_gen.m"
                  }
#line 585 "ml_proc_gen.m"
                  break;
#line 585 "ml_proc_gen.m"
              }
#line 589 "ml_proc_gen.m"
              {
#line 589 "ml_proc_gen.m"
                ml_backend__ml_gen_info__ml_gen_info_set_value_output_vars_3_p_0(ml_backend__ml_proc_gen__CopiedOutputVars_34, ml_backend__ml_proc_gen__STATE_VARIABLE_Info_17_93, &ml_backend__ml_proc_gen__STATE_VARIABLE_Info_18_94);
              }
#line 590 "ml_proc_gen.m"
              {
#line 590 "ml_proc_gen.m"
                ml_backend__ml_code_util__ml_gen_var_list_3_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_Info_18_94, ml_backend__ml_proc_gen__CopiedOutputVars_34, &ml_backend__ml_proc_gen__OutputVarLvals_88);
              }
#line 591 "ml_proc_gen.m"
              {
#line 591 "ml_proc_gen.m"
                ml_backend__ml_code_util__ml_variable_types_3_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_Info_18_94, ml_backend__ml_proc_gen__CopiedOutputVars_34, &ml_backend__ml_proc_gen__OutputVarTypes_89);
              }
#line 592 "ml_proc_gen.m"
              {
#line 592 "ml_proc_gen.m"
                ml_backend__ml_code_util__ml_initial_cont_4_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_Info_18_94, ml_backend__ml_proc_gen__OutputVarLvals_88, ml_backend__ml_proc_gen__OutputVarTypes_89, &ml_backend__ml_proc_gen__InitialCont_90);
              }
#line 593 "ml_proc_gen.m"
              {
#line 593 "ml_proc_gen.m"
                ml_backend__ml_gen_info__ml_gen_info_push_success_cont_3_p_0(ml_backend__ml_proc_gen__InitialCont_90, ml_backend__ml_proc_gen__STATE_VARIABLE_Info_18_94, &ml_backend__ml_proc_gen__STATE_VARIABLE_Info_70_70);
              }
#line 575 "ml_proc_gen.m"
            }
#line 443 "ml_proc_gen.m"
            break;
#line 443 "ml_proc_gen.m"
        }
#line 462 "ml_proc_gen.m"
        if ((ml_backend__ml_proc_gen__CopiedOutputVars_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 459 "ml_proc_gen.m"
          {
#line 461 "ml_proc_gen.m"
            ml_backend__ml_proc_gen__OutputVarLocals_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 459 "ml_proc_gen.m"
            ml_backend__ml_proc_gen__STATE_VARIABLE_Info_71_71 = ml_backend__ml_proc_gen__STATE_VARIABLE_Info_70_70;
#line 459 "ml_proc_gen.m"
          }
#line 462 "ml_proc_gen.m"
        else
#line 463 "ml_proc_gen.m"
          {
#line 463 "ml_proc_gen.m"
            MR_Word ml_backend__ml_proc_gen__VarSet_38;
#line 463 "ml_proc_gen.m"
            MR_Word ml_backend__ml_proc_gen__VarTypes_39;
#line 463 "ml_proc_gen.m"
            MR_Word ml_backend__ml_proc_gen__UpdatedVarTypes_40;

#line 464 "ml_proc_gen.m"
            {
#line 464 "ml_proc_gen.m"
              hlds__hlds_pred__proc_info_get_varset_2_p_0(ml_backend__ml_proc_gen__ProcInfo_18, &ml_backend__ml_proc_gen__VarSet_38);
            }
#line 465 "ml_proc_gen.m"
            {
#line 465 "ml_proc_gen.m"
              hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ml_backend__ml_proc_gen__ProcInfo_18, &ml_backend__ml_proc_gen__VarTypes_39);
            }
#line 468 "ml_proc_gen.m"
            {
#line 468 "ml_proc_gen.m"
              hlds__vartypes__vartypes_overlay_corresponding_lists_4_p_0(ml_backend__ml_proc_gen__HeadVars_22, ml_backend__ml_proc_gen__ArgTypes_20, ml_backend__ml_proc_gen__VarTypes_39, &ml_backend__ml_proc_gen__UpdatedVarTypes_40);
            }
#line 470 "ml_proc_gen.m"
            {
#line 470 "ml_proc_gen.m"
              ml_backend__ml_code_gen__ml_gen_local_var_decls_7_p_0(ml_backend__ml_proc_gen__VarSet_38, ml_backend__ml_proc_gen__UpdatedVarTypes_40, ml_backend__ml_proc_gen__Context_27, ml_backend__ml_proc_gen__CopiedOutputVars_34, &ml_backend__ml_proc_gen__OutputVarLocals_35, ml_backend__ml_proc_gen__STATE_VARIABLE_Info_70_70, &ml_backend__ml_proc_gen__STATE_VARIABLE_Info_71_71);
            }
#line 463 "ml_proc_gen.m"
          }
#line 473 "ml_proc_gen.m"
        {
#line 473 "ml_proc_gen.m"
          ml_backend__ml_proc_gen__MLDS_Context_41 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_proc_gen__Context_27);
        }
#line 474 "ml_proc_gen.m"
        {
#line 474 "ml_proc_gen.m"
          ml_backend__ml_proc_gen__V_72_72 = ml_backend__ml_code_util__ml_gen_succeeded_var_decl_1_f_0(ml_backend__ml_proc_gen__MLDS_Context_41);
        }
#line 474 "ml_proc_gen.m"
        {
#line 474 "ml_proc_gen.m"
          ml_backend__ml_proc_gen__MLDS_LocalVars_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 474 "ml_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__MLDS_LocalVars_42, 0) = ((MR_Box) (ml_backend__ml_proc_gen__V_72_72));
#line 474 "ml_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__MLDS_LocalVars_42, 1) = ((MR_Box) (ml_backend__ml_proc_gen__OutputVarLocals_35));
#line 474 "ml_proc_gen.m"
        }
#line 476 "ml_proc_gen.m"
        {
#line 476 "ml_proc_gen.m"
          check_hlds__mode_util__modes_to_arg_modes_4_p_0(*ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_60, ml_backend__ml_proc_gen__Modes_23, ml_backend__ml_proc_gen__ArgTypes_20, &ml_backend__ml_proc_gen__ArgModes_43);
        }
#line 477 "ml_proc_gen.m"
        {
#line 477 "ml_proc_gen.m"
          ml_backend__ml_proc_gen__ml_gen_proc_body_10_p_0(ml_backend__ml_proc_gen__CodeModel_21, ml_backend__ml_proc_gen__HeadVars_22, ml_backend__ml_proc_gen__ArgTypes_20, ml_backend__ml_proc_gen__ArgModes_43, ml_backend__ml_proc_gen__CopiedOutputVars_34, ml_backend__ml_proc_gen__Goal_24, &ml_backend__ml_proc_gen__Defns0_44, &ml_backend__ml_proc_gen__Statements_45, ml_backend__ml_proc_gen__STATE_VARIABLE_Info_71_71, &ml_backend__ml_proc_gen__STATE_VARIABLE_Info_73_73);
        }
#line 479 "ml_proc_gen.m"
        {
#line 479 "ml_proc_gen.m"
          ml_backend__ml_code_util__ml_gen_proc_params_5_p_0(ml_backend__ml_proc_gen__PredId_12, ml_backend__ml_proc_gen__ProcId_13, &ml_backend__ml_proc_gen__MLDS_Params_32, ml_backend__ml_proc_gen__STATE_VARIABLE_Info_73_73, &ml_backend__ml_proc_gen__STATE_VARIABLE_Info_74_74);
        }
#line 480 "ml_proc_gen.m"
        {
#line 480 "ml_proc_gen.m"
          ml_backend__ml_gen_info__ml_gen_info_get_closure_wrapper_defns_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_Info_74_74, &ml_backend__ml_proc_gen__ExtraDefns_31);
        }
#line 481 "ml_proc_gen.m"
        {
#line 481 "ml_proc_gen.m"
          ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_Info_74_74, ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_64);
        }
#line 482 "ml_proc_gen.m"
        {
#line 482 "ml_proc_gen.m"
          ml_backend__ml_proc_gen__Defns_14 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, ml_backend__ml_proc_gen__MLDS_LocalVars_42, ml_backend__ml_proc_gen__Defns0_44);
        }
#line 483 "ml_proc_gen.m"
        {
#line 483 "ml_proc_gen.m"
          ml_backend__ml_proc_gen__Statement_46 = ml_backend__ml_code_util__ml_gen_block_3_f_0(ml_backend__ml_proc_gen__Defns_14, ml_backend__ml_proc_gen__Statements_45, ml_backend__ml_proc_gen__Context_27);
        }
#line 484 "ml_proc_gen.m"
        ml_backend__ml_proc_gen__FunctionBody_30 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_proc_gen__Statement_46);
#line 447 "ml_proc_gen.m"
      }
#line 490 "ml_proc_gen.m"
    {
#line 490 "ml_proc_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_env_var_names_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_Info_74_74, &ml_backend__ml_proc_gen__EnvVarNames_47);
    }
#line 493 "ml_proc_gen.m"
    {
#line 493 "ml_proc_gen.m"
      hlds__hlds_pred__proc_info_get_context_2_p_0(ml_backend__ml_proc_gen__ProcInfo0_17, &ml_backend__ml_proc_gen__ProcContext_48);
    }
#line 494 "ml_proc_gen.m"
    {
#line 494 "ml_proc_gen.m"
      ml_backend__ml_code_util__ml_gen_proc_label_5_p_0(*ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_60, ml_backend__ml_proc_gen__PredId_12, ml_backend__ml_proc_gen__ProcId_13, &ml_backend__ml_proc_gen__EntityName_49, &ml_backend__ml_proc_gen___ModuleName_50);
    }
#line 495 "ml_proc_gen.m"
    {
#line 495 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__MLDS_ProcContext_51 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_proc_gen__ProcContext_48);
    }
#line 496 "ml_proc_gen.m"
    {
#line 496 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__DeclFlags_52 = ml_backend__ml_proc_gen__ml_gen_proc_decl_flags_3_f_0(*ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_60, ml_backend__ml_proc_gen__PredId_12, ml_backend__ml_proc_gen__ProcId_13);
    }
#line 497 "ml_proc_gen.m"
    {
#line 497 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 497 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__V_76_76, 0) = ((MR_Box) (ml_backend__ml_proc_gen__PredId_12));
#line 497 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__V_76_76, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ProcId_13));
#line 497 "ml_proc_gen.m"
    }
#line 497 "ml_proc_gen.m"
    {
#line 497 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__MaybePredProcId_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 497 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__MaybePredProcId_53, 0) = ((MR_Box) (ml_backend__ml_proc_gen__V_76_76));
#line 497 "ml_proc_gen.m"
    }
#line 498 "ml_proc_gen.m"
    {
#line 498 "ml_proc_gen.m"
      hlds__hlds_pred__pred_info_get_attributes_2_p_0(ml_backend__ml_proc_gen__PredInfo_16, &ml_backend__ml_proc_gen__Attributes_54);
    }
#line 499 "ml_proc_gen.m"
    {
#line 499 "ml_proc_gen.m"
      hlds__hlds_pred__attributes_to_attribute_list_2_p_0(ml_backend__ml_proc_gen__Attributes_54, &ml_backend__ml_proc_gen__AttributeList_55);
    }
#line 500 "ml_proc_gen.m"
    {
#line 500 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__MLDS_Attributes_56 = ml_backend__ml_proc_gen__attributes_to_mlds_attributes_2_f_0(*ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_60, ml_backend__ml_proc_gen__AttributeList_55);
    }
#line 502 "ml_proc_gen.m"
    {
#line 502 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__EntityBody_57 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 502 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_proc_gen__EntityBody_57, 0) = ((MR_Box) (ml_backend__ml_proc_gen__MaybePredProcId_53));
#line 502 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_proc_gen__EntityBody_57, 1) = ((MR_Box) (ml_backend__ml_proc_gen__MLDS_Params_32));
#line 502 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_proc_gen__EntityBody_57, 2) = ((MR_Box) (ml_backend__ml_proc_gen__FunctionBody_30));
#line 502 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_proc_gen__EntityBody_57, 3) = ((MR_Box) (ml_backend__ml_proc_gen__MLDS_Attributes_56));
#line 502 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_proc_gen__EntityBody_57, 4) = ((MR_Box) (ml_backend__ml_proc_gen__EnvVarNames_47));
#line 502 "ml_proc_gen.m"
    }
#line 504 "ml_proc_gen.m"
    {
#line 504 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__ProcDefn_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 504 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__ProcDefn_58, 0) = ((MR_Box) (ml_backend__ml_proc_gen__EntityName_49));
#line 504 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__ProcDefn_58, 1) = ((MR_Box) (ml_backend__ml_proc_gen__MLDS_ProcContext_51));
#line 504 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__ProcDefn_58, 2) = ((MR_Box) (ml_backend__ml_proc_gen__DeclFlags_52));
#line 504 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__ProcDefn_58, 3) = ((MR_Box) (ml_backend__ml_proc_gen__EntityBody_57));
#line 504 "ml_proc_gen.m"
    }
#line 505 "ml_proc_gen.m"
    {
#line 505 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 505 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_78_78, 0) = ((MR_Box) (ml_backend__ml_proc_gen__ProcDefn_58));
#line 505 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_78_78, 1) = ((MR_Box) (ml_backend__ml_proc_gen__STATE_VARIABLE_Defns_0_61));
#line 505 "ml_proc_gen.m"
    }
#line 505 "ml_proc_gen.m"
    {
#line 505 "ml_proc_gen.m"
      *ml_backend__ml_proc_gen__STATE_VARIABLE_Defns_62 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, ml_backend__ml_proc_gen__ExtraDefns_31, ml_backend__ml_proc_gen__V_78_78);
    }
#line 388 "ml_proc_gen.m"
  }
#line 383 "ml_proc_gen.m"
}

#line 365 "ml_proc_gen.m"
static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_procs_9_p_0(
#line 365 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_1,
#line 365 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_2,
#line 365 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__ConstStructMap_3,
#line 365 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__PredId_4,
#line 365 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__HeadVar__5_5,
#line 365 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Defns_0_6,
#line 365 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_Defns_7,
#line 365 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_0_8,
#line 365 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_9)
#line 365 "ml_proc_gen.m"
{
#line 370 "ml_proc_gen.m"
  while (MR_TRUE)
#line 370 "ml_proc_gen.m"
    {
#line 370 "ml_proc_gen.m"
      /* tailcall optimized into a loop */
#line 370 "ml_proc_gen.m"
      {
#line 370 "ml_proc_gen.m"
        MR_bool ml_backend__ml_proc_gen__succeeded;

#line 370 "ml_proc_gen.m"
        if ((ml_backend__ml_proc_gen__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 370 "ml_proc_gen.m"
          {
#line 370 "ml_proc_gen.m"
            *ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_9 = ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_0_8;
#line 370 "ml_proc_gen.m"
            *ml_backend__ml_proc_gen__STATE_VARIABLE_Defns_7 = ml_backend__ml_proc_gen__STATE_VARIABLE_Defns_0_6;
#line 370 "ml_proc_gen.m"
            *ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_2 = ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_1;
#line 370 "ml_proc_gen.m"
          }
#line 370 "ml_proc_gen.m"
        else
#line 372 "ml_proc_gen.m"
          {
#line 372 "ml_proc_gen.m"
            MR_Integer ml_backend__ml_proc_gen__ProcId_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__HeadVar__5_5, (MR_Integer) 0)));
#line 372 "ml_proc_gen.m"
            MR_Word ml_backend__ml_proc_gen__ProcIds_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__HeadVar__5_5, (MR_Integer) 1)));
#line 372 "ml_proc_gen.m"
            MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_34_34;
#line 372 "ml_proc_gen.m"
            MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Defns_35_35;
#line 372 "ml_proc_gen.m"
            MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_36_36;

#line 373 "ml_proc_gen.m"
            {
#line 373 "ml_proc_gen.m"
              ml_backend__ml_proc_gen__ml_gen_proc_9_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_1, &ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_34_34, ml_backend__ml_proc_gen__ConstStructMap_3, ml_backend__ml_proc_gen__PredId_4, ml_backend__ml_proc_gen__ProcId_24, ml_backend__ml_proc_gen__STATE_VARIABLE_Defns_0_6, &ml_backend__ml_proc_gen__STATE_VARIABLE_Defns_35_35, ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_0_8, &ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_36_36);
            }
#line 375 "ml_proc_gen.m"
            /* direct tailcall eliminated */
#line 375 "ml_proc_gen.m"
            {
#line 375 "ml_proc_gen.m"
              MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0__tmp_copy_1 = ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_34_34;
#line 375 "ml_proc_gen.m"
              MR_Word ml_backend__ml_proc_gen__HeadVar__5__tmp_copy_5 = ml_backend__ml_proc_gen__ProcIds_25;
#line 375 "ml_proc_gen.m"
              MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Defns_0__tmp_copy_6 = ml_backend__ml_proc_gen__STATE_VARIABLE_Defns_35_35;
#line 375 "ml_proc_gen.m"
              MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_0__tmp_copy_8 = ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_36_36;

#line 375 "ml_proc_gen.m"
              ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_0_8 = ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_0__tmp_copy_8;
#line 375 "ml_proc_gen.m"
              ml_backend__ml_proc_gen__STATE_VARIABLE_Defns_0_6 = ml_backend__ml_proc_gen__STATE_VARIABLE_Defns_0__tmp_copy_6;
#line 375 "ml_proc_gen.m"
              ml_backend__ml_proc_gen__HeadVar__5_5 = ml_backend__ml_proc_gen__HeadVar__5__tmp_copy_5;
#line 375 "ml_proc_gen.m"
              ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_1 = ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0__tmp_copy_1;
#line 375 "ml_proc_gen.m"
            }
#line 375 "ml_proc_gen.m"
            continue;
#line 372 "ml_proc_gen.m"
          }
#line 370 "ml_proc_gen.m"
      }
#line 370 "ml_proc_gen.m"
      break;
#line 370 "ml_proc_gen.m"
    }
#line 365 "ml_proc_gen.m"
}

#line 302 "ml_proc_gen.m"
static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_preds_acc_8_p_0(
#line 302 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_22,
#line 302 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_23,
#line 302 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__ConstStructMap_10,
#line 302 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__PredIds0_11,
#line 302 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Defns_0_24,
#line 302 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_Defns_25,
#line 302 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalDefns_0_26,
#line 302 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalDefns_27)
#line 302 "ml_proc_gen.m"
{
#line 310 "ml_proc_gen.m"
  while (MR_TRUE)
#line 310 "ml_proc_gen.m"
    {
#line 310 "ml_proc_gen.m"
      /* tailcall optimized into a loop */
#line 310 "ml_proc_gen.m"
      {
#line 310 "ml_proc_gen.m"
        MR_bool ml_backend__ml_proc_gen__succeeded;

#line 310 "ml_proc_gen.m"
        if ((ml_backend__ml_proc_gen__PredIds0_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 340 "ml_proc_gen.m"
          {
#line 340 "ml_proc_gen.m"
            *ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_23 = ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_22;
#line 340 "ml_proc_gen.m"
            *ml_backend__ml_proc_gen__STATE_VARIABLE_Defns_25 = ml_backend__ml_proc_gen__STATE_VARIABLE_Defns_0_24;
#line 340 "ml_proc_gen.m"
            *ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalDefns_27 = ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalDefns_0_26;
#line 340 "ml_proc_gen.m"
          }
#line 310 "ml_proc_gen.m"
        else
#line 310 "ml_proc_gen.m"
          {
#line 310 "ml_proc_gen.m"
            MR_Word ml_backend__ml_proc_gen__PredId_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__PredIds0_11, (MR_Integer) 0)));
#line 310 "ml_proc_gen.m"
            MR_Word ml_backend__ml_proc_gen__PredIds_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__PredIds0_11, (MR_Integer) 1)));
#line 310 "ml_proc_gen.m"
            MR_Word ml_backend__ml_proc_gen__PredTable_16;
#line 310 "ml_proc_gen.m"
            MR_Word ml_backend__ml_proc_gen__PredInfo_17;
#line 310 "ml_proc_gen.m"
            MR_Word ml_backend__ml_proc_gen__PredStatus_18;
#line 310 "ml_proc_gen.m"
            MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_32_32;
#line 310 "ml_proc_gen.m"
            MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Defns_33_33;
#line 310 "ml_proc_gen.m"
            MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalDefns_34_34;
#line 312 "ml_proc_gen.m"
            MR_Box ml_backend__ml_proc_gen__conv0_PredInfo_17;

#line 311 "ml_proc_gen.m"
            {
#line 311 "ml_proc_gen.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_22, &ml_backend__ml_proc_gen__PredTable_16);
            }
#line 312 "ml_proc_gen.m"
            {
#line 312 "ml_proc_gen.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, ml_backend__ml_proc_gen__PredTable_16, ((MR_Box) (ml_backend__ml_proc_gen__PredId_14)), &ml_backend__ml_proc_gen__conv0_PredInfo_17);
            }
#line 312 "ml_proc_gen.m"
            ml_backend__ml_proc_gen__PredInfo_17 = ((MR_Word) ml_backend__ml_proc_gen__conv0_PredInfo_17);
#line 313 "ml_proc_gen.m"
            {
#line 313 "ml_proc_gen.m"
              hlds__hlds_pred__pred_info_get_status_2_p_0(ml_backend__ml_proc_gen__PredInfo_17, &ml_backend__ml_proc_gen__PredStatus_18);
            }
#line 316 "ml_proc_gen.m"
            {
#line 316 "ml_proc_gen.m"
              MR_Word ml_backend__ml_proc_gen__V_30_30 = (MR_Word) ml_backend__ml_proc_gen__PredStatus_18;
#line 316 "ml_proc_gen.m"
              MR_Word ml_backend__ml_proc_gen__V_19_19;

#line 316 "ml_proc_gen.m"
              ml_backend__ml_proc_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_proc_gen__V_30_30)) == (MR_mktag((MR_Integer) 2)));
#line 316 "ml_proc_gen.m"
              if (ml_backend__ml_proc_gen__succeeded)
#line 316 "ml_proc_gen.m"
                ml_backend__ml_proc_gen__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_proc_gen__V_30_30, (MR_Integer) 0)));
#line 316 "ml_proc_gen.m"
            }
#line 317 "ml_proc_gen.m"
            if (!(ml_backend__ml_proc_gen__succeeded))
#line 320 "ml_proc_gen.m"
              {
#line 320 "ml_proc_gen.m"
                MR_Word ml_backend__ml_proc_gen__V_28_28;
#line 320 "ml_proc_gen.m"
                MR_Word ml_backend__ml_proc_gen__V_29_29;

#line 320 "ml_proc_gen.m"
                {
#line 320 "ml_proc_gen.m"
                  ml_backend__ml_proc_gen__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(ml_backend__ml_proc_gen__PredInfo_17);
                }
#line 320 "ml_proc_gen.m"
                if (ml_backend__ml_proc_gen__succeeded)
#line 320 "ml_proc_gen.m"
                  {
#line 322 "ml_proc_gen.m"
                    ml_backend__ml_proc_gen__V_28_28 = (MR_Word) ml_backend__ml_proc_gen__PredStatus_18;
#line 322 "ml_proc_gen.m"
                    ml_backend__ml_proc_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_proc_gen__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 322 "ml_proc_gen.m"
                    if (ml_backend__ml_proc_gen__succeeded)
#line 322 "ml_proc_gen.m"
                      {
#line 322 "ml_proc_gen.m"
                        ml_backend__ml_proc_gen__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_28_28, (MR_Integer) 0)));
#line 322 "ml_proc_gen.m"
                        ml_backend__ml_proc_gen__succeeded = (ml_backend__ml_proc_gen__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 322 "ml_proc_gen.m"
                      }
#line 320 "ml_proc_gen.m"
                  }
#line 320 "ml_proc_gen.m"
              }
#line 326 "ml_proc_gen.m"
            if (ml_backend__ml_proc_gen__succeeded)
#line 325 "ml_proc_gen.m"
              {
#line 325 "ml_proc_gen.m"
                ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalDefns_34_34 = ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalDefns_0_26;
#line 325 "ml_proc_gen.m"
                ml_backend__ml_proc_gen__STATE_VARIABLE_Defns_33_33 = ml_backend__ml_proc_gen__STATE_VARIABLE_Defns_0_24;
#line 325 "ml_proc_gen.m"
                ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_32_32 = ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_22;
#line 325 "ml_proc_gen.m"
              }
#line 326 "ml_proc_gen.m"
            else
#line 333 "ml_proc_gen.m"
              {
#line 333 "ml_proc_gen.m"
                MR_Word ml_backend__ml_proc_gen__ProcIds_21;
#line 329 "ml_proc_gen.m"
                MR_Word ml_backend__ml_proc_gen__V_31_31 = (MR_Word) ml_backend__ml_proc_gen__PredStatus_18;
#line 329 "ml_proc_gen.m"
                MR_Word ml_backend__ml_proc_gen__V_20_20;

#line 329 "ml_proc_gen.m"
                ml_backend__ml_proc_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_proc_gen__V_31_31)) == (MR_mktag((MR_Integer) 1)));
#line 329 "ml_proc_gen.m"
                if (ml_backend__ml_proc_gen__succeeded)
#line 329 "ml_proc_gen.m"
                  {
#line 329 "ml_proc_gen.m"
                    ml_backend__ml_proc_gen__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_31_31, (MR_Integer) 0)));
#line 330 "ml_proc_gen.m"
                    {
#line 330 "ml_proc_gen.m"
                      ml_backend__ml_proc_gen__ProcIds_21 = hlds__hlds_pred__pred_info_procids_1_f_0(ml_backend__ml_proc_gen__PredInfo_17);
                    }
#line 329 "ml_proc_gen.m"
                  }
#line 329 "ml_proc_gen.m"
                else
#line 332 "ml_proc_gen.m"
                  {
#line 332 "ml_proc_gen.m"
                    ml_backend__ml_proc_gen__ProcIds_21 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(ml_backend__ml_proc_gen__PredInfo_17);
                  }
#line 354 "ml_proc_gen.m"
                if ((ml_backend__ml_proc_gen__ProcIds_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 354 "ml_proc_gen.m"
                  {
#line 354 "ml_proc_gen.m"
                    ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_32_32 = ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_22;
#line 354 "ml_proc_gen.m"
                    ml_backend__ml_proc_gen__STATE_VARIABLE_Defns_33_33 = ml_backend__ml_proc_gen__STATE_VARIABLE_Defns_0_24;
#line 354 "ml_proc_gen.m"
                    ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalDefns_34_34 = ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalDefns_0_26;
#line 354 "ml_proc_gen.m"
                  }
#line 354 "ml_proc_gen.m"
                else
#line 356 "ml_proc_gen.m"
                  {
#line 356 "ml_proc_gen.m"
                    MR_Integer ml_backend__ml_proc_gen__ProcId_75;
#line 356 "ml_proc_gen.m"
                    MR_Word ml_backend__ml_proc_gen__ProcIds_76;
#line 356 "ml_proc_gen.m"
                    MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_34_85;
#line 356 "ml_proc_gen.m"
                    MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Defns_35_86;
#line 356 "ml_proc_gen.m"
                    MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_36_87;

#line 358 "ml_proc_gen.m"
                    {
#line 358 "ml_proc_gen.m"
                      hlds__passes_aux__write_pred_progress_message_5_p_0((MR_String) "% Generating MLDS code for ", ml_backend__ml_proc_gen__PredId_14, ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_22);
                    }
#line 371 "ml_proc_gen.m"
                    ml_backend__ml_proc_gen__ProcId_75 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__ProcIds_21, (MR_Integer) 0)));
#line 371 "ml_proc_gen.m"
                    ml_backend__ml_proc_gen__ProcIds_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__ProcIds_21, (MR_Integer) 1)));
#line 373 "ml_proc_gen.m"
                    {
#line 373 "ml_proc_gen.m"
                      ml_backend__ml_proc_gen__ml_gen_proc_9_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_22, &ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_34_85, ml_backend__ml_proc_gen__ConstStructMap_10, ml_backend__ml_proc_gen__PredId_14, ml_backend__ml_proc_gen__ProcId_75, ml_backend__ml_proc_gen__STATE_VARIABLE_Defns_0_24, &ml_backend__ml_proc_gen__STATE_VARIABLE_Defns_35_86, ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalDefns_0_26, &ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_36_87);
                    }
#line 375 "ml_proc_gen.m"
                    {
#line 375 "ml_proc_gen.m"
                      ml_backend__ml_proc_gen__ml_gen_procs_9_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_34_85, &ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_32_32, ml_backend__ml_proc_gen__ConstStructMap_10, ml_backend__ml_proc_gen__PredId_14, ml_backend__ml_proc_gen__ProcIds_76, ml_backend__ml_proc_gen__STATE_VARIABLE_Defns_35_86, &ml_backend__ml_proc_gen__STATE_VARIABLE_Defns_33_33, ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_36_87, &ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalDefns_34_34);
                    }
#line 356 "ml_proc_gen.m"
                  }
#line 333 "ml_proc_gen.m"
              }
#line 337 "ml_proc_gen.m"
            /* direct tailcall eliminated */
#line 337 "ml_proc_gen.m"
            {
#line 337 "ml_proc_gen.m"
              MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0__tmp_copy_22 = ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_32_32;
#line 337 "ml_proc_gen.m"
              MR_Word ml_backend__ml_proc_gen__PredIds0__tmp_copy_11 = ml_backend__ml_proc_gen__PredIds_15;
#line 337 "ml_proc_gen.m"
              MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Defns_0__tmp_copy_24 = ml_backend__ml_proc_gen__STATE_VARIABLE_Defns_33_33;
#line 337 "ml_proc_gen.m"
              MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalDefns_0__tmp_copy_26 = ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalDefns_34_34;

#line 337 "ml_proc_gen.m"
              ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalDefns_0_26 = ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalDefns_0__tmp_copy_26;
#line 337 "ml_proc_gen.m"
              ml_backend__ml_proc_gen__STATE_VARIABLE_Defns_0_24 = ml_backend__ml_proc_gen__STATE_VARIABLE_Defns_0__tmp_copy_24;
#line 337 "ml_proc_gen.m"
              ml_backend__ml_proc_gen__PredIds0_11 = ml_backend__ml_proc_gen__PredIds0__tmp_copy_11;
#line 337 "ml_proc_gen.m"
              ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_22 = ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0__tmp_copy_22;
#line 337 "ml_proc_gen.m"
            }
#line 337 "ml_proc_gen.m"
            continue;
#line 310 "ml_proc_gen.m"
          }
#line 310 "ml_proc_gen.m"
      }
#line 310 "ml_proc_gen.m"
      break;
#line 310 "ml_proc_gen.m"
    }
#line 302 "ml_proc_gen.m"
}

#line 280 "ml_proc_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_proc_gen__has_ptr_type_1_p_0(
#line 280 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__HeadVar__1_1)
#line 280 "ml_proc_gen.m"
{
#line 282 "ml_proc_gen.m"
  {
#line 282 "ml_proc_gen.m"
    MR_bool ml_backend__ml_proc_gen__succeeded;
#line 282 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 282 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 282 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__HeadVar__1_1, (MR_Integer) 2)));
#line 282 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_3_3;

#line 282 "ml_proc_gen.m"
    ml_backend__ml_proc_gen__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_proc_gen__V_5_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__V_5_5, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 282 "ml_proc_gen.m"
    if (ml_backend__ml_proc_gen__succeeded)
#line 282 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__V_5_5, (MR_Integer) 1)));
#line 282 "ml_proc_gen.m"
    return ml_backend__ml_proc_gen__succeeded;
#line 282 "ml_proc_gen.m"
  }
#line 280 "ml_proc_gen.m"
}

#line 269 "ml_proc_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_proc_gen__ml_gen_pragma_export_proc_3_p_0_1(
#line 269 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__closure_arg,
#line 269 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1)
#line 269 "ml_proc_gen.m"
{
#line 269 "ml_proc_gen.m"
  {
#line 269 "ml_proc_gen.m"
    MR_bool ml_backend__ml_proc_gen__succeeded;
#line 269 "ml_proc_gen.m"
    MR_Box ml_backend__ml_proc_gen__closure = ml_backend__ml_proc_gen__closure_arg;

#line 269 "ml_proc_gen.m"
    {
#line 269 "ml_proc_gen.m"
      return ml_backend__ml_proc_gen__succeeded = ml_backend__ml_proc_gen__has_ptr_type_1_p_0(((MR_Word) ml_backend__ml_proc_gen__wrapper_arg_1));
    }
#line 269 "ml_proc_gen.m"
    return ml_backend__ml_proc_gen__succeeded;
#line 269 "ml_proc_gen.m"
  }
#line 269 "ml_proc_gen.m"
}

#line 236 "ml_proc_gen.m"
static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_pragma_export_proc_3_p_0(
#line 236 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__ModuleInfo_4,
#line 236 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__PragmaExportedProc_5,
#line 236 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__Defn_6)
#line 236 "ml_proc_gen.m"
{
#line 239 "ml_proc_gen.m"
  {
#line 239 "ml_proc_gen.m"
    MR_bool ml_backend__ml_proc_gen__succeeded;
#line 239 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__Lang_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__PragmaExportedProc_5, (MR_Integer) 0)));
#line 239 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__PredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__PragmaExportedProc_5, (MR_Integer) 1)));
#line 239 "ml_proc_gen.m"
    MR_Integer ml_backend__ml_proc_gen__ProcId_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__PragmaExportedProc_5, (MR_Integer) 2)));
#line 239 "ml_proc_gen.m"
    MR_String ml_backend__ml_proc_gen__ExportName_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__PragmaExportedProc_5, (MR_Integer) 3)));
#line 239 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__ProgContext_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__PragmaExportedProc_5, (MR_Integer) 4)));
#line 239 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__Name_12;
#line 239 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__ModuleName_13;
#line 239 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__MLDS_Name_14;
#line 239 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__FuncParams_15;
#line 239 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__PredInfo_16;
#line 239 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__UnivQTVars_17;
#line 239 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__MLDS_Context_18;
#line 239 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__Globals_24;
#line 239 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__Target_25;
#line 276 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__FuncParamsByRef_28;
#line 260 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__GlobalsByRef_26;
#line 260 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__ModuleInfoByRef_27;
#line 260 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__Args_29;
#line 260 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__ReturnTypes_30;
#line 260 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_34_34;
#line 260 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_35_35;
#line 260 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_36_36;

#line 242 "ml_proc_gen.m"
    {
#line 242 "ml_proc_gen.m"
      ml_backend__ml_code_util__ml_gen_proc_label_5_p_0(ml_backend__ml_proc_gen__ModuleInfo_4, ml_backend__ml_proc_gen__PredId_8, ml_backend__ml_proc_gen__ProcId_9, &ml_backend__ml_proc_gen__Name_12, &ml_backend__ml_proc_gen__ModuleName_13);
    }
#line 243 "ml_proc_gen.m"
    {
#line 243 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__MLDS_Name_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 243 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__MLDS_Name_14, 0) = ((MR_Box) (ml_backend__ml_proc_gen__ModuleName_13));
#line 243 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__MLDS_Name_14, 1) = ((MR_Box) ((MR_Integer) 0));
#line 243 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__MLDS_Name_14, 2) = ((MR_Box) (ml_backend__ml_proc_gen__Name_12));
#line 243 "ml_proc_gen.m"
    }
#line 255 "ml_proc_gen.m"
    {
#line 255 "ml_proc_gen.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_proc_gen__ModuleInfo_4, &ml_backend__ml_proc_gen__Globals_24);
    }
#line 256 "ml_proc_gen.m"
    {
#line 256 "ml_proc_gen.m"
      libs__globals__get_target_2_p_0(ml_backend__ml_proc_gen__Globals_24, &ml_backend__ml_proc_gen__Target_25);
    }
#line 259 "ml_proc_gen.m"
#line 259 "ml_proc_gen.m"
    switch (ml_backend__ml_proc_gen__Target_25) {
#line 259 "ml_proc_gen.m"
      default:
#line 259 "ml_proc_gen.m"
        ml_backend__ml_proc_gen__succeeded = MR_FALSE;
#line 259 "ml_proc_gen.m"
        break;
#line 259 "ml_proc_gen.m"
      case (MR_Integer) 2:
#line 259 "ml_proc_gen.m"
        ml_backend__ml_proc_gen__succeeded = MR_TRUE;
#line 259 "ml_proc_gen.m"
        break;
#line 259 "ml_proc_gen.m"
      case (MR_Integer) 3:
#line 258 "ml_proc_gen.m"
        ml_backend__ml_proc_gen__succeeded = MR_TRUE;
#line 259 "ml_proc_gen.m"
        break;
#line 259 "ml_proc_gen.m"
    }
#line 260 "ml_proc_gen.m"
    if (ml_backend__ml_proc_gen__succeeded)
#line 260 "ml_proc_gen.m"
      {
#line 261 "ml_proc_gen.m"
        ml_backend__ml_proc_gen__V_34_34 = (MR_Integer) 259;
#line 261 "ml_proc_gen.m"
        ml_backend__ml_proc_gen__V_36_36 = (MR_Integer) 0;
#line 261 "ml_proc_gen.m"
        ml_backend__ml_proc_gen__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_proc_gen_scalar_common_9[0]);
#line 261 "ml_proc_gen.m"
        {
#line 261 "ml_proc_gen.m"
          libs__globals__set_option_4_p_0(ml_backend__ml_proc_gen__V_34_34, ml_backend__ml_proc_gen__V_35_35, ml_backend__ml_proc_gen__Globals_24, &ml_backend__ml_proc_gen__GlobalsByRef_26);
        }
#line 262 "ml_proc_gen.m"
        {
#line 262 "ml_proc_gen.m"
          hlds__hlds_module__module_info_set_globals_3_p_0(ml_backend__ml_proc_gen__GlobalsByRef_26, ml_backend__ml_proc_gen__ModuleInfo_4, &ml_backend__ml_proc_gen__ModuleInfoByRef_27);
        }
#line 263 "ml_proc_gen.m"
        {
#line 263 "ml_proc_gen.m"
          ml_backend__ml_proc_gen__FuncParamsByRef_28 = ml_backend__ml_code_util__ml_gen_proc_params_3_f_0(ml_backend__ml_proc_gen__ModuleInfoByRef_27, ml_backend__ml_proc_gen__PredId_8, ml_backend__ml_proc_gen__ProcId_9);
        }
#line 264 "ml_proc_gen.m"
        ml_backend__ml_proc_gen__Args_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__FuncParamsByRef_28, (MR_Integer) 0)));
#line 264 "ml_proc_gen.m"
        ml_backend__ml_proc_gen__ReturnTypes_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__FuncParamsByRef_28, (MR_Integer) 1)));
#line 271 "ml_proc_gen.m"
        if ((ml_backend__ml_proc_gen__ReturnTypes_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 266 "ml_proc_gen.m"
          {
#line 266 "ml_proc_gen.m"
            MR_Word ml_backend__ml_proc_gen__TypeCtorInfo_26_41 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0;
#line 266 "ml_proc_gen.m"
            MR_Word ml_backend__ml_proc_gen__OutArgs_31;
#line 266 "ml_proc_gen.m"
            MR_Integer ml_backend__ml_proc_gen__V_38_38;

#line 269 "ml_proc_gen.m"
            {
#line 269 "ml_proc_gen.m"
              mercury__list__filter_3_p_0(ml_backend__ml_proc_gen__TypeCtorInfo_26_41, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[4], ml_backend__ml_proc_gen__Args_29, &ml_backend__ml_proc_gen__OutArgs_31);
            }
#line 270 "ml_proc_gen.m"
            {
#line 270 "ml_proc_gen.m"
              ml_backend__ml_proc_gen__V_38_38 = mercury__list__length_1_f_0(ml_backend__ml_proc_gen__TypeCtorInfo_26_41, ml_backend__ml_proc_gen__OutArgs_31);
            }
#line 270 "ml_proc_gen.m"
            ml_backend__ml_proc_gen__succeeded = (ml_backend__ml_proc_gen__V_38_38 > (MR_Integer) 1);
#line 266 "ml_proc_gen.m"
          }
#line 271 "ml_proc_gen.m"
        else
#line 272 "ml_proc_gen.m"
          ml_backend__ml_proc_gen__succeeded = MR_TRUE;
#line 260 "ml_proc_gen.m"
      }
#line 276 "ml_proc_gen.m"
    if (ml_backend__ml_proc_gen__succeeded)
#line 275 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__FuncParams_15 = ml_backend__ml_proc_gen__FuncParamsByRef_28;
#line 276 "ml_proc_gen.m"
    else
#line 277 "ml_proc_gen.m"
      {
#line 277 "ml_proc_gen.m"
        ml_backend__ml_proc_gen__FuncParams_15 = ml_backend__ml_code_util__ml_gen_proc_params_3_f_0(ml_backend__ml_proc_gen__ModuleInfo_4, ml_backend__ml_proc_gen__PredId_8, ml_backend__ml_proc_gen__ProcId_9);
      }
#line 245 "ml_proc_gen.m"
    {
#line 245 "ml_proc_gen.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(ml_backend__ml_proc_gen__ModuleInfo_4, ml_backend__ml_proc_gen__PredId_8, &ml_backend__ml_proc_gen__PredInfo_16);
    }
#line 246 "ml_proc_gen.m"
    {
#line 246 "ml_proc_gen.m"
      hlds__hlds_pred__pred_info_get_univ_quant_tvars_2_p_0(ml_backend__ml_proc_gen__PredInfo_16, &ml_backend__ml_proc_gen__UnivQTVars_17);
    }
#line 247 "ml_proc_gen.m"
    {
#line 247 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__MLDS_Context_18 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_proc_gen__ProgContext_11);
    }
#line 248 "ml_proc_gen.m"
    {
#line 248 "ml_proc_gen.m"
      MR_Word base;
#line 248 "ml_proc_gen.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 248 "ml_proc_gen.m"
      *ml_backend__ml_proc_gen__Defn_6 = base;
#line 248 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Lang_7));
#line 248 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ExportName_10));
#line 248 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_proc_gen__MLDS_Name_14));
#line 248 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_proc_gen__FuncParams_15));
#line 248 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_proc_gen__UnivQTVars_17));
#line 248 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_proc_gen__MLDS_Context_18));
#line 248 "ml_proc_gen.m"
    }
#line 239 "ml_proc_gen.m"
  }
#line 236 "ml_proc_gen.m"
}

#line 759 "ml_proc_gen.m"
static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_defns_4_p_0_3(
#line 759 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__closure_arg,
#line 759 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1,
#line 759 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_2,
#line 759 "ml_proc_gen.m"
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_3)
#line 759 "ml_proc_gen.m"
{
#line 759 "ml_proc_gen.m"
  {
#line 759 "ml_proc_gen.m"
    MR_Box ml_backend__ml_proc_gen__closure = ml_backend__ml_proc_gen__closure_arg;
#line 759 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__conv0_STATE_VARIABLE_Defns_58;

#line 759 "ml_proc_gen.m"
    {
#line 759 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__ml_gen_add_table_var_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_proc_gen__wrapper_arg_1), ((MR_Word) ml_backend__ml_proc_gen__wrapper_arg_2), &ml_backend__ml_proc_gen__conv0_STATE_VARIABLE_Defns_58);
    }
#line 759 "ml_proc_gen.m"
    *ml_backend__ml_proc_gen__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_proc_gen__conv0_STATE_VARIABLE_Defns_58));
#line 759 "ml_proc_gen.m"
  }
#line 759 "ml_proc_gen.m"
}

#line 756 "ml_proc_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_proc_gen__ml_gen_defns_4_p_0_2(
#line 756 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__closure_arg)
#line 756 "ml_proc_gen.m"
{
#line 756 "ml_proc_gen.m"
  {
#line 756 "ml_proc_gen.m"
    MR_bool ml_backend__ml_proc_gen__succeeded;
#line 756 "ml_proc_gen.m"
    MR_Box ml_backend__ml_proc_gen__closure = ml_backend__ml_proc_gen__closure_arg;

#line 756 "ml_proc_gen.m"
    {
#line 756 "ml_proc_gen.m"
      return ml_backend__ml_proc_gen__succeeded = ml_backend__ml_proc_gen__IntroducedFrom__pred__ml_gen_table_structs__756__2_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 4))));
    }
#line 756 "ml_proc_gen.m"
    return ml_backend__ml_proc_gen__succeeded;
#line 756 "ml_proc_gen.m"
  }
#line 756 "ml_proc_gen.m"
}

#line 756 "ml_proc_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_proc_gen__ml_gen_defns_4_p_0_1(
#line 756 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__closure_arg,
#line 756 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1)
#line 756 "ml_proc_gen.m"
{
#line 756 "ml_proc_gen.m"
  {
#line 756 "ml_proc_gen.m"
    MR_bool ml_backend__ml_proc_gen__succeeded;
#line 756 "ml_proc_gen.m"
    MR_Box ml_backend__ml_proc_gen__closure = ml_backend__ml_proc_gen__closure_arg;

#line 756 "ml_proc_gen.m"
    {
#line 756 "ml_proc_gen.m"
      return ml_backend__ml_proc_gen__succeeded = ml_backend__ml_proc_gen__IntroducedFrom__pred__ml_gen_table_structs__756__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_proc_gen__wrapper_arg_1));
    }
#line 756 "ml_proc_gen.m"
    return ml_backend__ml_proc_gen__succeeded;
#line 756 "ml_proc_gen.m"
  }
#line 756 "ml_proc_gen.m"
}

#line 192 "ml_proc_gen.m"
static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_defns_4_p_0(
#line 192 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_12,
#line 192 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_13,
#line 192 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__Defns_6,
#line 192 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_14)
#line 192 "ml_proc_gen.m"
{
#line 195 "ml_proc_gen.m"
  {
#line 195 "ml_proc_gen.m"
    MR_bool ml_backend__ml_proc_gen__succeeded;
#line 195 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__TypeCtorInfo_20_20;
#line 195 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__TypeDefns_8;
#line 195 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__TableStructDefns_9;
#line 195 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__ConstStructMap_10;
#line 195 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__PredDefns_11;
#line 195 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_15_15;
#line 195 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_16_16;
#line 195 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_19_19;
#line 195 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__TableStructMap_23;
#line 195 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__TableStructs_24;
#line 195 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__Globals_49;
#line 195 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__Target_50;
#line 195 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__UseCommonCells_51;
#line 195 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__UnboxedFloats_52;
#line 195 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__HaveUnboxedFloats_53;
#line 195 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__PredTable_63;
#line 195 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__PredIds_64;

#line 196 "ml_proc_gen.m"
    {
#line 196 "ml_proc_gen.m"
      ml_backend__ml_type_gen__ml_gen_types_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_12, &ml_backend__ml_proc_gen__TypeDefns_8);
    }
#line 741 "ml_proc_gen.m"
    {
#line 741 "ml_proc_gen.m"
      hlds__hlds_module__module_info_get_table_struct_map_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_12, &ml_backend__ml_proc_gen__TableStructMap_23);
    }
#line 742 "ml_proc_gen.m"
    {
#line 742 "ml_proc_gen.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0, ml_backend__ml_proc_gen__TableStructMap_23, &ml_backend__ml_proc_gen__TableStructs_24);
    }
#line 746 "ml_proc_gen.m"
    if ((ml_backend__ml_proc_gen__TableStructs_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 745 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__TableStructDefns_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 746 "ml_proc_gen.m"
    else
#line 747 "ml_proc_gen.m"
      {
#line 747 "ml_proc_gen.m"
        MR_Word ml_backend__ml_proc_gen__Globals_27;
#line 747 "ml_proc_gen.m"
        MR_Word ml_backend__ml_proc_gen__GC_Method_28;
#line 747 "ml_proc_gen.m"
        MR_Word ml_backend__ml_proc_gen__V_29_29;
#line 747 "ml_proc_gen.m"
        MR_Word ml_backend__ml_proc_gen__V_35_35;
#line 759 "ml_proc_gen.m"
        MR_Box ml_backend__ml_proc_gen__conv1_TableStructDefns_9;

#line 748 "ml_proc_gen.m"
        {
#line 748 "ml_proc_gen.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_12, &ml_backend__ml_proc_gen__Globals_27);
        }
#line 749 "ml_proc_gen.m"
        {
#line 749 "ml_proc_gen.m"
          libs__globals__get_gc_method_2_p_0(ml_backend__ml_proc_gen__Globals_27, &ml_backend__ml_proc_gen__GC_Method_28);
        }
#line 756 "ml_proc_gen.m"
        {
#line 756 "ml_proc_gen.m"
          ml_backend__ml_proc_gen__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 756 "ml_proc_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__V_29_29, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_5[2]));
#line 756 "ml_proc_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__V_29_29, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_defns_4_p_0_2));
#line 756 "ml_proc_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__V_29_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 756 "ml_proc_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__V_29_29, 3) = ((MR_Box) (ml_backend__ml_proc_gen__GC_Method_28));
#line 756 "ml_proc_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__V_29_29, 4) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_6[0]));
#line 756 "ml_proc_gen.m"
        }
#line 756 "ml_proc_gen.m"
        {
#line 756 "ml_proc_gen.m"
          mercury__require__expect_4_p_0(ml_backend__ml_proc_gen__V_29_29, (MR_String) "ml_backend.ml_proc_gen", (MR_String) "predicate \140ml_backend.ml_proc_gen.ml_gen_table_structs\'/2", (MR_String) "tabling and \140--gc accurate\'");
        }
#line 759 "ml_proc_gen.m"
        {
#line 759 "ml_proc_gen.m"
          ml_backend__ml_proc_gen__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 759 "ml_proc_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__V_35_35, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_7[0]));
#line 759 "ml_proc_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__V_35_35, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_defns_4_p_0_3));
#line 759 "ml_proc_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 759 "ml_proc_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__V_35_35, 3) = ((MR_Box) (ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_12));
#line 759 "ml_proc_gen.m"
        }
#line 759 "ml_proc_gen.m"
        {
#line 759 "ml_proc_gen.m"
          mercury__list__foldl_4_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[2], (MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[4], ml_backend__ml_proc_gen__V_35_35, ml_backend__ml_proc_gen__TableStructs_24, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &ml_backend__ml_proc_gen__conv1_TableStructDefns_9);
        }
#line 759 "ml_proc_gen.m"
        ml_backend__ml_proc_gen__TableStructDefns_9 = ((MR_Word) ml_backend__ml_proc_gen__conv1_TableStructDefns_9);
#line 747 "ml_proc_gen.m"
      }
#line 206 "ml_proc_gen.m"
    {
#line 206 "ml_proc_gen.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_12, &ml_backend__ml_proc_gen__Globals_49);
    }
#line 207 "ml_proc_gen.m"
    {
#line 207 "ml_proc_gen.m"
      libs__globals__get_target_2_p_0(ml_backend__ml_proc_gen__Globals_49, &ml_backend__ml_proc_gen__Target_50);
    }
#line 214 "ml_proc_gen.m"
    ml_backend__ml_proc_gen__UseCommonCells_51 = ((&ml_backend__ml_proc_gen_vector_common_8[0 + ml_backend__ml_proc_gen__Target_50]))->ml_backend__ml_proc_gen__vector_common_type_8_0__vct_8_f_0;
#line 220 "ml_proc_gen.m"
    {
#line 220 "ml_proc_gen.m"
      libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_proc_gen__Globals_49, (MR_Integer) 245, &ml_backend__ml_proc_gen__UnboxedFloats_52);
    }
#line 224 "ml_proc_gen.m"
#line 224 "ml_proc_gen.m"
    switch (ml_backend__ml_proc_gen__UnboxedFloats_52) {
#line 224 "ml_proc_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 224 "ml_proc_gen.m"
      case (MR_Integer) 0:
#line 226 "ml_proc_gen.m"
        ml_backend__ml_proc_gen__HaveUnboxedFloats_53 = (MR_Integer) 1;
#line 224 "ml_proc_gen.m"
        break;
#line 224 "ml_proc_gen.m"
      case (MR_Integer) 1:
#line 223 "ml_proc_gen.m"
        ml_backend__ml_proc_gen__HaveUnboxedFloats_53 = (MR_Integer) 0;
#line 224 "ml_proc_gen.m"
        break;
#line 224 "ml_proc_gen.m"
    }
#line 228 "ml_proc_gen.m"
    {
#line 228 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_15_15 = ml_backend__ml_global_data__ml_global_data_init_2_f_0(ml_backend__ml_proc_gen__UseCommonCells_51, ml_backend__ml_proc_gen__HaveUnboxedFloats_53);
    }
#line 199 "ml_proc_gen.m"
    {
#line 199 "ml_proc_gen.m"
      ml_backend__ml_unify_gen__ml_gen_const_structs_4_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_12, &ml_backend__ml_proc_gen__ConstStructMap_10, ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_15_15, &ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_16_16);
    }
#line 297 "ml_proc_gen.m"
    {
#line 297 "ml_proc_gen.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_12, &ml_backend__ml_proc_gen__PredTable_63);
    }
#line 298 "ml_proc_gen.m"
    {
#line 298 "ml_proc_gen.m"
      mercury__map__keys_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, ml_backend__ml_proc_gen__PredTable_63, &ml_backend__ml_proc_gen__PredIds_64);
    }
#line 299 "ml_proc_gen.m"
    {
#line 299 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__ml_gen_preds_acc_8_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_12, ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_13, ml_backend__ml_proc_gen__ConstStructMap_10, ml_backend__ml_proc_gen__PredIds_64, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ml_backend__ml_proc_gen__PredDefns_11, ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_16_16, ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_14);
    }
#line 5683 "ml_backend.ml_proc_gen.c"
    ml_backend__ml_proc_gen__TypeCtorInfo_20_20 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
#line 201 "ml_proc_gen.m"
    {
#line 201 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_19_19 = mercury__list__f_43_43_2_f_0(ml_backend__ml_proc_gen__TypeCtorInfo_20_20, ml_backend__ml_proc_gen__TableStructDefns_9, ml_backend__ml_proc_gen__PredDefns_11);
    }
#line 201 "ml_proc_gen.m"
    {
#line 201 "ml_proc_gen.m"
      *ml_backend__ml_proc_gen__Defns_6 = mercury__list__f_43_43_2_f_0(ml_backend__ml_proc_gen__TypeCtorInfo_20_20, ml_backend__ml_proc_gen__TypeDefns_8, ml_backend__ml_proc_gen__V_19_19);
    }
#line 195 "ml_proc_gen.m"
  }
#line 192 "ml_proc_gen.m"
}

#line 152 "ml_proc_gen.m"
static MR_Word MR_CALL 
ml_backend__ml_proc_gen__foreign_type_required_imports_2_f_0(
#line 152 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__Target_4,
#line 152 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__HeadVar__2_2)
#line 152 "ml_proc_gen.m"
{
#line 155 "ml_proc_gen.m"
  {
#line 155 "ml_proc_gen.m"
    MR_bool ml_backend__ml_proc_gen__succeeded;
#line 155 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__Imports_7;
#line 155 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__TypeDefn_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 155 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen___TypeCtor_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__HeadVar__2_2, (MR_Integer) 0)));

#line 162 "ml_proc_gen.m"
#line 162 "ml_proc_gen.m"
    switch (ml_backend__ml_proc_gen__Target_4) {
#line 162 "ml_proc_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 162 "ml_proc_gen.m"
      case (MR_Integer) 0:
#line 162 "ml_proc_gen.m"
      case (MR_Integer) 2:
#line 162 "ml_proc_gen.m"
      case (MR_Integer) 3:
#line 161 "ml_proc_gen.m"
        ml_backend__ml_proc_gen__Imports_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 162 "ml_proc_gen.m"
        break;
#line 162 "ml_proc_gen.m"
      case (MR_Integer) 4:
#line 188 "ml_proc_gen.m"
        {
#line 189 "ml_proc_gen.m"
          {
#line 189 "ml_proc_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_proc_gen", (MR_String) "function \140ml_backend.ml_proc_gen.foreign_type_required_imports\'/2", (MR_String) "target erlang");
          }
#line 188 "ml_proc_gen.m"
        }
#line 162 "ml_proc_gen.m"
        break;
#line 162 "ml_proc_gen.m"
      case (MR_Integer) 1:
#line 163 "ml_proc_gen.m"
        {
#line 163 "ml_proc_gen.m"
          MR_Word ml_backend__ml_proc_gen__TypeBody_8;

#line 164 "ml_proc_gen.m"
          {
#line 164 "ml_proc_gen.m"
            hlds__hlds_data__get_type_defn_body_2_p_0(ml_backend__ml_proc_gen__TypeDefn_6, &ml_backend__ml_proc_gen__TypeBody_8);
          }
#line 179 "ml_proc_gen.m"
#line 179 "ml_proc_gen.m"
          switch (MR_tag((MR_Word) ml_backend__ml_proc_gen__TypeBody_8)) {
#line 179 "ml_proc_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 179 "ml_proc_gen.m"
            case (MR_Integer) 0:
#line 166 "ml_proc_gen.m"
              {
#line 166 "ml_proc_gen.m"
                MR_Word ml_backend__ml_proc_gen__ForeignTypeBody_9 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_proc_gen__TypeBody_8), (MR_Integer) 0);
#line 166 "ml_proc_gen.m"
                MR_Word ml_backend__ml_proc_gen__MaybeIL_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__ForeignTypeBody_9, (MR_Integer) 0)));
#line 167 "ml_proc_gen.m"
                MR_Word ml_backend__ml_proc_gen___MaybeC_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__ForeignTypeBody_9, (MR_Integer) 1)));
#line 167 "ml_proc_gen.m"
                MR_Word ml_backend__ml_proc_gen___MaybeJava_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__ForeignTypeBody_9, (MR_Integer) 2)));
#line 167 "ml_proc_gen.m"
                MR_Word ml_backend__ml_proc_gen___MaybeCSharp_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__ForeignTypeBody_9, (MR_Integer) 3)));
#line 167 "ml_proc_gen.m"
                MR_Word ml_backend__ml_proc_gen___MaybeErlang_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__ForeignTypeBody_9, (MR_Integer) 4)));
#line 176 "ml_proc_gen.m"
                MR_String ml_backend__ml_proc_gen__Location_17;
#line 170 "ml_proc_gen.m"
                MR_Word ml_backend__ml_proc_gen__Data_15;
#line 170 "ml_proc_gen.m"
                MR_Word ml_backend__ml_proc_gen__V_38_38;
#line 171 "ml_proc_gen.m"
                MR_Word ml_backend__ml_proc_gen__V_19_19;
#line 171 "ml_proc_gen.m"
                MR_Word ml_backend__ml_proc_gen__V_20_20;
#line 171 "ml_proc_gen.m"
                MR_Word ml_backend__ml_proc_gen__V_16_16;
#line 171 "ml_proc_gen.m"
                MR_Word ml_backend__ml_proc_gen__V_18_18;

#line 170 "ml_proc_gen.m"
                ml_backend__ml_proc_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_proc_gen__MaybeIL_10)) == (MR_mktag((MR_Integer) 1)));
#line 170 "ml_proc_gen.m"
                if (ml_backend__ml_proc_gen__succeeded)
#line 170 "ml_proc_gen.m"
                  {
#line 170 "ml_proc_gen.m"
                    ml_backend__ml_proc_gen__Data_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__MaybeIL_10, (MR_Integer) 0)));
#line 171 "ml_proc_gen.m"
                    ml_backend__ml_proc_gen__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Data_15, (MR_Integer) 0)));
#line 171 "ml_proc_gen.m"
                    ml_backend__ml_proc_gen__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Data_15, (MR_Integer) 1)));
#line 171 "ml_proc_gen.m"
                    ml_backend__ml_proc_gen__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Data_15, (MR_Integer) 2)));
#line 171 "ml_proc_gen.m"
                    ml_backend__ml_proc_gen__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__V_38_38, (MR_Integer) 0)));
#line 171 "ml_proc_gen.m"
                    ml_backend__ml_proc_gen__Location_17 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__V_38_38, (MR_Integer) 1)));
#line 171 "ml_proc_gen.m"
                    ml_backend__ml_proc_gen__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__V_38_38, (MR_Integer) 2)));
#line 171 "ml_proc_gen.m"
                    ml_backend__ml_proc_gen__succeeded = MR_TRUE;
#line 170 "ml_proc_gen.m"
                  }
#line 176 "ml_proc_gen.m"
                if (ml_backend__ml_proc_gen__succeeded)
#line 174 "ml_proc_gen.m"
                  {
#line 174 "ml_proc_gen.m"
                    MR_Word ml_backend__ml_proc_gen__Name_21;
#line 174 "ml_proc_gen.m"
                    MR_Word ml_backend__ml_proc_gen__V_39_39;
#line 174 "ml_proc_gen.m"
                    MR_Word ml_backend__ml_proc_gen__V_40_40;
#line 174 "ml_proc_gen.m"
                    MR_Word ml_backend__ml_proc_gen__V_41_41;

#line 174 "ml_proc_gen.m"
                    {
#line 174 "ml_proc_gen.m"
                      ml_backend__ml_proc_gen__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 174 "ml_proc_gen.m"
                      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__V_40_40, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Location_17));
#line 174 "ml_proc_gen.m"
                    }
#line 173 "ml_proc_gen.m"
                    {
#line 173 "ml_proc_gen.m"
                      ml_backend__ml_proc_gen__V_39_39 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_proc_gen__V_40_40);
                    }
#line 173 "ml_proc_gen.m"
                    ml_backend__ml_proc_gen__Name_21 = (MR_Word) ml_backend__ml_proc_gen__V_39_39;
#line 175 "ml_proc_gen.m"
                    {
#line 175 "ml_proc_gen.m"
                      ml_backend__ml_proc_gen__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 175 "ml_proc_gen.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__V_41_41, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Name_21));
#line 175 "ml_proc_gen.m"
                    }
#line 175 "ml_proc_gen.m"
                    {
#line 175 "ml_proc_gen.m"
                      ml_backend__ml_proc_gen__Imports_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 175 "ml_proc_gen.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Imports_7, 0) = ((MR_Box) (ml_backend__ml_proc_gen__V_41_41));
#line 175 "ml_proc_gen.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Imports_7, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 175 "ml_proc_gen.m"
                    }
#line 174 "ml_proc_gen.m"
                  }
#line 176 "ml_proc_gen.m"
                else
#line 177 "ml_proc_gen.m"
                  {
#line 177 "ml_proc_gen.m"
                    {
#line 177 "ml_proc_gen.m"
                      mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_proc_gen", (MR_String) "function \140ml_backend.ml_proc_gen.foreign_type_required_imports\'/2", (MR_String) "no IL type");
                    }
#line 177 "ml_proc_gen.m"
                  }
#line 166 "ml_proc_gen.m"
              }
#line 179 "ml_proc_gen.m"
              break;
#line 179 "ml_proc_gen.m"
            case (MR_Integer) 1:
#line 179 "ml_proc_gen.m"
            case (MR_Integer) 2:
#line 185 "ml_proc_gen.m"
              ml_backend__ml_proc_gen__Imports_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 179 "ml_proc_gen.m"
              break;
#line 179 "ml_proc_gen.m"
            case (MR_Integer) 3:
#line 185 "ml_proc_gen.m"
              ml_backend__ml_proc_gen__Imports_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 179 "ml_proc_gen.m"
              break;
#line 179 "ml_proc_gen.m"
          }
#line 163 "ml_proc_gen.m"
        }
#line 162 "ml_proc_gen.m"
        break;
#line 162 "ml_proc_gen.m"
    }
#line 155 "ml_proc_gen.m"
    return ml_backend__ml_proc_gen__Imports_7;
#line 155 "ml_proc_gen.m"
  }
#line 152 "ml_proc_gen.m"
}

#line 121 "ml_proc_gen.m"
static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_foreign_code_lang_8_p_0_1(
#line 121 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__closure_arg,
#line 121 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1,
#line 121 "ml_proc_gen.m"
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_2)
#line 121 "ml_proc_gen.m"
{
#line 121 "ml_proc_gen.m"
  {
#line 121 "ml_proc_gen.m"
    MR_Box ml_backend__ml_proc_gen__closure = ml_backend__ml_proc_gen__closure_arg;
#line 121 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__conv0_Defn_6;

#line 121 "ml_proc_gen.m"
    {
#line 121 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__ml_gen_pragma_export_proc_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_proc_gen__wrapper_arg_1), &ml_backend__ml_proc_gen__conv0_Defn_6);
    }
#line 121 "ml_proc_gen.m"
    *ml_backend__ml_proc_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_proc_gen__conv0_Defn_6));
#line 121 "ml_proc_gen.m"
  }
#line 121 "ml_proc_gen.m"
}

#line 106 "ml_proc_gen.m"
static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_foreign_code_lang_8_p_0(
#line 106 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__ModuleInfo_9,
#line 106 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__ForeignDeclCodes_10,
#line 106 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__ForeignBodyCodes_11,
#line 106 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__WantedForeignImports_12,
#line 106 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__ForeignExports_13,
#line 106 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__Lang_14,
#line 106 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Map_0_24,
#line 106 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_Map_25)
#line 106 "ml_proc_gen.m"
{
#line 114 "ml_proc_gen.m"
  {
#line 114 "ml_proc_gen.m"
    MR_bool ml_backend__ml_proc_gen__succeeded;
#line 114 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__WantedForeignDeclCodes_16;
#line 114 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__WantedForeignBodyCodes_18;
#line 114 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__WantedForeignExports_20;
#line 114 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__MLDSWantedForeignExports_22;
#line 114 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__MLDS_ForeignCode_23;
#line 114 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_26_26;
#line 115 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen___OtherForeignDeclCodes_17;
#line 117 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen___OtherForeignBodyCodes_19;
#line 119 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen___OtherForeignExports_21;

#line 115 "ml_proc_gen.m"
    {
#line 115 "ml_proc_gen.m"
      backend_libs__foreign__filter_decls_4_p_0(ml_backend__ml_proc_gen__Lang_14, ml_backend__ml_proc_gen__ForeignDeclCodes_10, &ml_backend__ml_proc_gen__WantedForeignDeclCodes_16, &ml_backend__ml_proc_gen___OtherForeignDeclCodes_17);
    }
#line 117 "ml_proc_gen.m"
    {
#line 117 "ml_proc_gen.m"
      backend_libs__foreign__filter_bodys_4_p_0(ml_backend__ml_proc_gen__Lang_14, ml_backend__ml_proc_gen__ForeignBodyCodes_11, &ml_backend__ml_proc_gen__WantedForeignBodyCodes_18, &ml_backend__ml_proc_gen___OtherForeignBodyCodes_19);
    }
#line 119 "ml_proc_gen.m"
    {
#line 119 "ml_proc_gen.m"
      backend_libs__foreign__filter_exports_4_p_0(ml_backend__ml_proc_gen__Lang_14, ml_backend__ml_proc_gen__ForeignExports_13, &ml_backend__ml_proc_gen__WantedForeignExports_20, &ml_backend__ml_proc_gen___OtherForeignExports_21);
    }
#line 121 "ml_proc_gen.m"
    {
#line 121 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 121 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__V_26_26, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_3[2]));
#line 121 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__V_26_26, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_foreign_code_lang_8_p_0_1));
#line 121 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 121 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__V_26_26, 3) = ((MR_Box) (ml_backend__ml_proc_gen__ModuleInfo_9));
#line 121 "ml_proc_gen.m"
    }
#line 121 "ml_proc_gen.m"
    {
#line 121 "ml_proc_gen.m"
      mercury__list__map_3_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_pragma_export_0, ml_backend__ml_proc_gen__V_26_26, ml_backend__ml_proc_gen__WantedForeignExports_20, &ml_backend__ml_proc_gen__MLDSWantedForeignExports_22);
    }
#line 123 "ml_proc_gen.m"
    {
#line 123 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__MLDS_ForeignCode_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 123 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__MLDS_ForeignCode_23, 0) = ((MR_Box) (ml_backend__ml_proc_gen__WantedForeignDeclCodes_16));
#line 123 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__MLDS_ForeignCode_23, 1) = ((MR_Box) (ml_backend__ml_proc_gen__WantedForeignBodyCodes_18));
#line 123 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__MLDS_ForeignCode_23, 2) = ((MR_Box) (ml_backend__ml_proc_gen__WantedForeignImports_12));
#line 123 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__MLDS_ForeignCode_23, 3) = ((MR_Box) (ml_backend__ml_proc_gen__MLDSWantedForeignExports_22));
#line 123 "ml_proc_gen.m"
    }
#line 126 "ml_proc_gen.m"
    {
#line 126 "ml_proc_gen.m"
      mercury__map__det_insert_4_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_foreign_code_0, ((MR_Box) (ml_backend__ml_proc_gen__Lang_14)), ((MR_Box) (ml_backend__ml_proc_gen__MLDS_ForeignCode_23)), ml_backend__ml_proc_gen__STATE_VARIABLE_Map_0_24, ml_backend__ml_proc_gen__STATE_VARIABLE_Map_25);
#line 126 "ml_proc_gen.m"
      return;
    }
#line 114 "ml_proc_gen.m"
  }
#line 106 "ml_proc_gen.m"
}

#line 147 "ml_proc_gen.m"
static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_code_gen_3_p_0_4(
#line 147 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__closure_arg,
#line 147 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1)
#line 147 "ml_proc_gen.m"
{
#line 147 "ml_proc_gen.m"
  {
#line 147 "ml_proc_gen.m"
    MR_Box ml_backend__ml_proc_gen__wrapper_arg_2;
#line 147 "ml_proc_gen.m"
    MR_Box ml_backend__ml_proc_gen__closure = ml_backend__ml_proc_gen__closure_arg;
#line 147 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__conv4_Imports_7;

#line 147 "ml_proc_gen.m"
    {
#line 147 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__conv4_Imports_7 = ml_backend__ml_proc_gen__foreign_type_required_imports_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_proc_gen__wrapper_arg_1));
    }
#line 147 "ml_proc_gen.m"
    ml_backend__ml_proc_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_proc_gen__conv4_Imports_7));
#line 147 "ml_proc_gen.m"
    return ml_backend__ml_proc_gen__wrapper_arg_2;
#line 147 "ml_proc_gen.m"
  }
#line 147 "ml_proc_gen.m"
}

#line 139 "ml_proc_gen.m"
static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_code_gen_3_p_0_3(
#line 139 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__closure_arg,
#line 139 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1)
#line 139 "ml_proc_gen.m"
{
#line 139 "ml_proc_gen.m"
  {
#line 139 "ml_proc_gen.m"
    MR_Box ml_backend__ml_proc_gen__wrapper_arg_2;
#line 139 "ml_proc_gen.m"
    MR_Box ml_backend__ml_proc_gen__closure = ml_backend__ml_proc_gen__closure_arg;
#line 139 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__conv3_HeadVar__2_16;

#line 139 "ml_proc_gen.m"
    {
#line 139 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__conv3_HeadVar__2_16 = ml_backend__ml_proc_gen__IntroducedFrom__func__ml_gen_imports__139__1_1_f_0(((MR_Word) ml_backend__ml_proc_gen__wrapper_arg_1));
    }
#line 139 "ml_proc_gen.m"
    ml_backend__ml_proc_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_proc_gen__conv3_HeadVar__2_16));
#line 139 "ml_proc_gen.m"
    return ml_backend__ml_proc_gen__wrapper_arg_2;
#line 139 "ml_proc_gen.m"
  }
#line 139 "ml_proc_gen.m"
}

#line 101 "ml_proc_gen.m"
static void MR_CALL 
ml_backend__ml_proc_gen__ml_code_gen_3_p_0_2(
#line 101 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__closure_arg,
#line 101 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1,
#line 101 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_2,
#line 101 "ml_proc_gen.m"
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_3)
#line 101 "ml_proc_gen.m"
{
#line 101 "ml_proc_gen.m"
  {
#line 101 "ml_proc_gen.m"
    MR_Box ml_backend__ml_proc_gen__closure = ml_backend__ml_proc_gen__closure_arg;
#line 101 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__conv1_STATE_VARIABLE_Map_25;

#line 101 "ml_proc_gen.m"
    {
#line 101 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__ml_gen_foreign_code_lang_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 7))), ((MR_Word) ml_backend__ml_proc_gen__wrapper_arg_1), ((MR_Word) ml_backend__ml_proc_gen__wrapper_arg_2), &ml_backend__ml_proc_gen__conv1_STATE_VARIABLE_Map_25);
    }
#line 101 "ml_proc_gen.m"
    *ml_backend__ml_proc_gen__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_proc_gen__conv1_STATE_VARIABLE_Map_25));
#line 101 "ml_proc_gen.m"
  }
#line 101 "ml_proc_gen.m"
}

#line 97 "ml_proc_gen.m"
static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_code_gen_3_p_0_1(
#line 97 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__closure_arg,
#line 97 "ml_proc_gen.m"
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1)
#line 97 "ml_proc_gen.m"
{
#line 97 "ml_proc_gen.m"
  {
#line 97 "ml_proc_gen.m"
    MR_Box ml_backend__ml_proc_gen__wrapper_arg_2;
#line 97 "ml_proc_gen.m"
    MR_Box ml_backend__ml_proc_gen__closure = ml_backend__ml_proc_gen__closure_arg;
#line 97 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__conv0_HeadVar__3_3;

#line 97 "ml_proc_gen.m"
    {
#line 97 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__conv0_HeadVar__3_3 = parse_tree__prog_data__get_lang_foreign_import_module_infos_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_proc_gen__wrapper_arg_1));
    }
#line 97 "ml_proc_gen.m"
    ml_backend__ml_proc_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_proc_gen__conv0_HeadVar__3_3));
#line 97 "ml_proc_gen.m"
    return ml_backend__ml_proc_gen__wrapper_arg_2;
#line 97 "ml_proc_gen.m"
  }
#line 97 "ml_proc_gen.m"
}

#line 24 "ml_proc_gen.m"
void MR_CALL 
ml_backend__ml_proc_gen__ml_code_gen_3_p_0(
#line 24 "ml_proc_gen.m"
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_14,
#line 24 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_15,
#line 24 "ml_proc_gen.m"
  MR_Word * ml_backend__ml_proc_gen__MLDS_5)
#line 24 "ml_proc_gen.m"
{
#line 71 "ml_proc_gen.m"
  {
#line 71 "ml_proc_gen.m"
    MR_bool ml_backend__ml_proc_gen__succeeded;
#line 71 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__TypeCtorInfo_23_37;
#line 71 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__TypeCtorInfo_24_38;
#line 71 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__TypeCtorInfo_24_68;
#line 71 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__TypeCtorInfo_25_69;
#line 71 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__ModuleName_6;
#line 71 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__ForeignCode_7;
#line 71 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__Imports_8;
#line 71 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__Defns_9;
#line 71 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__GlobalData_10;
#line 71 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__ExportedEnums_11;
#line 71 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__InitPreds_12;
#line 71 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__FinalPreds_13;
#line 71 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__ForeignDeclCodeCord_19;
#line 71 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__ForeignBodyCodeCord_20;
#line 71 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__ForeignImportModules_21;
#line 71 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__ForeignExportsCord_22;
#line 71 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__ForeignDeclCodes_23;
#line 71 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__ForeignBodyCodes_24;
#line 71 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__ForeignExports_25;
#line 71 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__Globals_26;
#line 71 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__BackendForeignLanguages_27;
#line 71 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__WantedForeignImports_28;
#line 71 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_29_29;
#line 71 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_30_30;
#line 71 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_31_31;
#line 71 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_32_32;
#line 71 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_33_33;
#line 71 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__Globals_49;
#line 71 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__Target_50;
#line 71 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__AllImports0_51;
#line 71 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__ThisModule_52;
#line 71 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__AllImports_53;
#line 71 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__TypeTable_56;
#line 71 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__TypeCtorsDefns_57;
#line 71 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__ForeignTypeImports_58;
#line 71 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_63_63;
#line 71 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_64_64;
#line 71 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_65_65;
#line 71 "ml_proc_gen.m"
    MR_Word ml_backend__ml_proc_gen__V_66_66;
#line 100 "ml_proc_gen.m"
    MR_Box ml_backend__ml_proc_gen__conv2_ForeignCode_7;

#line 72 "ml_proc_gen.m"
    {
#line 72 "ml_proc_gen.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_14, &ml_backend__ml_proc_gen__ModuleName_6);
    }
#line 86 "ml_proc_gen.m"
    {
#line 86 "ml_proc_gen.m"
      hlds__hlds_module__module_info_get_foreign_decl_codes_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_14, &ml_backend__ml_proc_gen__ForeignDeclCodeCord_19);
    }
#line 87 "ml_proc_gen.m"
    {
#line 87 "ml_proc_gen.m"
      hlds__hlds_module__module_info_get_foreign_body_codes_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_14, &ml_backend__ml_proc_gen__ForeignBodyCodeCord_20);
    }
#line 88 "ml_proc_gen.m"
    {
#line 88 "ml_proc_gen.m"
      hlds__hlds_module__module_info_get_foreign_import_modules_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_14, &ml_backend__ml_proc_gen__ForeignImportModules_21);
    }
#line 89 "ml_proc_gen.m"
    {
#line 89 "ml_proc_gen.m"
      hlds__hlds_module__module_info_get_pragma_exported_procs_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_14, &ml_backend__ml_proc_gen__ForeignExportsCord_22);
    }
#line 90 "ml_proc_gen.m"
    {
#line 90 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__ForeignDeclCodes_23 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0, ml_backend__ml_proc_gen__ForeignDeclCodeCord_19);
    }
#line 91 "ml_proc_gen.m"
    {
#line 91 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__ForeignBodyCodes_24 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0, ml_backend__ml_proc_gen__ForeignBodyCodeCord_20);
    }
#line 92 "ml_proc_gen.m"
    {
#line 92 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__ForeignExports_25 = mercury__cord__list_1_f_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0, ml_backend__ml_proc_gen__ForeignExportsCord_22);
    }
#line 94 "ml_proc_gen.m"
    {
#line 94 "ml_proc_gen.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_14, &ml_backend__ml_proc_gen__Globals_26);
    }
#line 95 "ml_proc_gen.m"
    {
#line 95 "ml_proc_gen.m"
      libs__globals__get_backend_foreign_languages_2_p_0(ml_backend__ml_proc_gen__Globals_26, &ml_backend__ml_proc_gen__BackendForeignLanguages_27);
    }
#line 6320 "ml_backend.ml_proc_gen.c"
    ml_backend__ml_proc_gen__TypeCtorInfo_23_37 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0;
#line 6322 "ml_backend.ml_proc_gen.c"
    ml_backend__ml_proc_gen__TypeCtorInfo_24_38 = (MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0;
#line 97 "ml_proc_gen.m"
    {
#line 97 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 97 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__V_31_31, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_3[0]));
#line 97 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__V_31_31, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_code_gen_3_p_0_1));
#line 97 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 97 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__V_31_31, 3) = ((MR_Box) (ml_backend__ml_proc_gen__ForeignImportModules_21));
#line 97 "ml_proc_gen.m"
    }
#line 97 "ml_proc_gen.m"
    {
#line 97 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_30_30 = mercury__list__map_2_f_0(ml_backend__ml_proc_gen__TypeCtorInfo_24_38, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[0], ml_backend__ml_proc_gen__V_31_31, ml_backend__ml_proc_gen__BackendForeignLanguages_27);
    }
#line 96 "ml_proc_gen.m"
    {
#line 96 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_29_29 = mercury__set__union_list_1_f_0(ml_backend__ml_proc_gen__TypeCtorInfo_23_37, ml_backend__ml_proc_gen__V_30_30);
    }
#line 96 "ml_proc_gen.m"
    {
#line 96 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__WantedForeignImports_28 = mercury__set__to_sorted_list_1_f_0(ml_backend__ml_proc_gen__TypeCtorInfo_23_37, ml_backend__ml_proc_gen__V_29_29);
    }
#line 101 "ml_proc_gen.m"
    {
#line 101 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 101 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__V_32_32, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_4[0]));
#line 101 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__V_32_32, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_code_gen_3_p_0_2));
#line 101 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 101 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__V_32_32, 3) = ((MR_Box) (ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_14));
#line 101 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__V_32_32, 4) = ((MR_Box) (ml_backend__ml_proc_gen__ForeignDeclCodes_23));
#line 101 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__V_32_32, 5) = ((MR_Box) (ml_backend__ml_proc_gen__ForeignBodyCodes_24));
#line 101 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__V_32_32, 6) = ((MR_Box) (ml_backend__ml_proc_gen__WantedForeignImports_28));
#line 101 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__V_32_32, 7) = ((MR_Box) (ml_backend__ml_proc_gen__ForeignExports_25));
#line 101 "ml_proc_gen.m"
    }
#line 104 "ml_proc_gen.m"
    {
#line 104 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_33_33 = mercury__map__init_0_f_0(ml_backend__ml_proc_gen__TypeCtorInfo_24_38, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_foreign_code_0);
    }
#line 100 "ml_proc_gen.m"
    {
#line 100 "ml_proc_gen.m"
      mercury__list__foldl_4_p_0(ml_backend__ml_proc_gen__TypeCtorInfo_24_38, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[0], ml_backend__ml_proc_gen__V_32_32, ml_backend__ml_proc_gen__BackendForeignLanguages_27, ((MR_Box) (ml_backend__ml_proc_gen__V_33_33)), &ml_backend__ml_proc_gen__conv2_ForeignCode_7);
    }
#line 100 "ml_proc_gen.m"
    ml_backend__ml_proc_gen__ForeignCode_7 = ((MR_Word) ml_backend__ml_proc_gen__conv2_ForeignCode_7);
#line 133 "ml_proc_gen.m"
    {
#line 133 "ml_proc_gen.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_14, &ml_backend__ml_proc_gen__Globals_49);
    }
#line 134 "ml_proc_gen.m"
    {
#line 134 "ml_proc_gen.m"
      libs__globals__get_target_2_p_0(ml_backend__ml_proc_gen__Globals_49, &ml_backend__ml_proc_gen__Target_50);
    }
#line 135 "ml_proc_gen.m"
    {
#line 135 "ml_proc_gen.m"
      hlds__hlds_module__module_info_get_all_deps_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_14, &ml_backend__ml_proc_gen__AllImports0_51);
    }
#line 137 "ml_proc_gen.m"
    {
#line 137 "ml_proc_gen.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_14, &ml_backend__ml_proc_gen__ThisModule_52);
    }
#line 6407 "ml_backend.ml_proc_gen.c"
    ml_backend__ml_proc_gen__TypeCtorInfo_24_68 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 138 "ml_proc_gen.m"
    {
#line 138 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__AllImports_53 = mercury__set__delete_2_f_0(ml_backend__ml_proc_gen__TypeCtorInfo_24_68, ml_backend__ml_proc_gen__AllImports0_51, ((MR_Box) (ml_backend__ml_proc_gen__ThisModule_52)));
    }
#line 144 "ml_proc_gen.m"
    {
#line 144 "ml_proc_gen.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_14, &ml_backend__ml_proc_gen__TypeTable_56);
    }
#line 145 "ml_proc_gen.m"
    {
#line 145 "ml_proc_gen.m"
      hlds__hlds_data__get_all_type_ctor_defns_2_p_0(ml_backend__ml_proc_gen__TypeTable_56, &ml_backend__ml_proc_gen__TypeCtorsDefns_57);
    }
#line 6424 "ml_backend.ml_proc_gen.c"
    ml_backend__ml_proc_gen__TypeCtorInfo_25_69 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_import_0;
#line 147 "ml_proc_gen.m"
    {
#line 147 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 147 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__V_64_64, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_3[1]));
#line 147 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__V_64_64, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_code_gen_3_p_0_4));
#line 147 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__V_64_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 147 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__V_64_64, 3) = ((MR_Box) (ml_backend__ml_proc_gen__Target_50));
#line 147 "ml_proc_gen.m"
    }
#line 147 "ml_proc_gen.m"
    {
#line 147 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_63_63 = mercury__list__map_2_f_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[1], (MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[1], ml_backend__ml_proc_gen__V_64_64, ml_backend__ml_proc_gen__TypeCtorsDefns_57);
    }
#line 146 "ml_proc_gen.m"
    {
#line 146 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__ForeignTypeImports_58 = mercury__list__condense_1_f_0(ml_backend__ml_proc_gen__TypeCtorInfo_25_69, ml_backend__ml_proc_gen__V_63_63);
    }
#line 150 "ml_proc_gen.m"
    {
#line 150 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_66_66 = mercury__set__to_sorted_list_1_f_0(ml_backend__ml_proc_gen__TypeCtorInfo_24_68, ml_backend__ml_proc_gen__AllImports_53);
    }
#line 150 "ml_proc_gen.m"
    {
#line 150 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__V_65_65 = mercury__list__map_2_f_0(ml_backend__ml_proc_gen__TypeCtorInfo_24_68, ml_backend__ml_proc_gen__TypeCtorInfo_25_69, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[3], ml_backend__ml_proc_gen__V_66_66);
    }
#line 149 "ml_proc_gen.m"
    {
#line 149 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__Imports_8 = mercury__list__f_43_43_2_f_0(ml_backend__ml_proc_gen__TypeCtorInfo_25_69, ml_backend__ml_proc_gen__ForeignTypeImports_58, ml_backend__ml_proc_gen__V_65_65);
    }
#line 75 "ml_proc_gen.m"
    {
#line 75 "ml_proc_gen.m"
      ml_backend__ml_proc_gen__ml_gen_defns_4_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_14, ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_15, &ml_backend__ml_proc_gen__Defns_9, &ml_backend__ml_proc_gen__GlobalData_10);
    }
#line 76 "ml_proc_gen.m"
    {
#line 76 "ml_proc_gen.m"
      ml_backend__ml_type_gen__ml_gen_exported_enums_2_p_0(*ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_15, &ml_backend__ml_proc_gen__ExportedEnums_11);
    }
#line 77 "ml_proc_gen.m"
    {
#line 77 "ml_proc_gen.m"
      hlds__hlds_module__module_info_user_init_pred_c_names_2_p_0(*ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_15, &ml_backend__ml_proc_gen__InitPreds_12);
    }
#line 78 "ml_proc_gen.m"
    {
#line 78 "ml_proc_gen.m"
      hlds__hlds_module__module_info_user_final_pred_c_names_2_p_0(*ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_15, &ml_backend__ml_proc_gen__FinalPreds_13);
    }
#line 79 "ml_proc_gen.m"
    {
#line 79 "ml_proc_gen.m"
      MR_Word base;
#line 79 "ml_proc_gen.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 79 "ml_proc_gen.m"
      *ml_backend__ml_proc_gen__MLDS_5 = base;
#line 79 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_proc_gen__ModuleName_6));
#line 79 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ForeignCode_7));
#line 79 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_proc_gen__Imports_8));
#line 79 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_proc_gen__GlobalData_10));
#line 79 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_proc_gen__Defns_9));
#line 79 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_proc_gen__InitPreds_12));
#line 79 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_proc_gen__FinalPreds_13));
#line 79 "ml_proc_gen.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_proc_gen__ExportedEnums_11));
#line 79 "ml_proc_gen.m"
    }
#line 71 "ml_proc_gen.m"
  }
#line 24 "ml_proc_gen.m"
}

void mercury__ml_backend__ml_proc_gen__init(void)
{
}

void mercury__ml_backend__ml_proc_gen__init_type_tables(void)
{
}

void mercury__ml_backend__ml_proc_gen__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ml_backend.ml_proc_gen. */
