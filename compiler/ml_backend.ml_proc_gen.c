/*
** Automatically generated from `ml_proc_gen.m'
** by the Mercury compiler,
** version rotd-2017-07-11
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
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
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
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
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
#include "hlds.passes_aux.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
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
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
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




static const MR_FA_TypeInfo_Struct1 ml_backend__ml_proc_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0;

static const MR_VA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen____vpti_pred_1__plain_libs__globals__type_ctor_info_gc_method_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_proc_gen__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_table_struct_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_data_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_hlds__hlds_module__type_ctor_info_pragma_exported_proc_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_libs__globals__type_ctor_info_foreign_language_0__plain_ml_backend__mlds__type_ctor_info_mlds_foreign_code_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_proc_gen__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_import_0;

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__pred__ml_gen_table_structs__759__2_2_p_0(
  MR_Word ml_backend__ml_proc_gen__GC_Method_10,
  MR_Word ml_backend__ml_proc_gen__HeadVar__2_14);

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__pred__ml_gen_table_structs__759__1_2_p_0(
  MR_Word ml_backend__ml_proc_gen__HeadVar__1_15,
  MR_Word ml_backend__ml_proc_gen__HeadVar__2_21);

static void MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__pred__ml_gen_proc_body__633__1_7_p_0(
  MR_Word ml_backend__ml_proc_gen__CodeModel_11,
  MR_Word ml_backend__ml_proc_gen__Context_22,
  MR_Word ml_backend__ml_proc_gen__ConvOutputStatements_26,
  MR_Word * ml_backend__ml_proc_gen__LambdaHeadVar__1_40,
  MR_Word * ml_backend__ml_proc_gen__LambdaHeadVar__2_41,
  MR_Word ml_backend__ml_proc_gen__LambdaHeadVar__3_42,
  MR_Word * ml_backend__ml_proc_gen__LambdaHeadVar__4_43);

static MR_Word MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__func__ml_find_procs_for_code_gen__331__1_2_f_0(
  MR_Word ml_backend__ml_proc_gen__PredId_10,
  MR_Integer ml_backend__ml_proc_gen__LambdaHeadVar__1_25);

static MR_Word MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__func__ml_gen_imports__150__1_1_f_0(
  MR_Word ml_backend__ml_proc_gen__LambdaHeadVar__1_15);

static MR_Word MR_CALL 
ml_backend__ml_proc_gen__attribute_to_mlds_attribute_2_f_0(
  MR_Word ml_backend__ml_proc_gen__ModuleInfo_4,
  MR_Word ml_backend__ml_proc_gen__HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_proc_gen__init_stats_step_3_p_0(
  MR_Word ml_backend__ml_proc_gen__StepId_4,
  MR_Word ml_backend__ml_proc_gen__StepDesc_5,
  MR_Word * ml_backend__ml_proc_gen__Init_6);

static MR_Word MR_CALL 
ml_backend__ml_proc_gen__init_step_desc_2_f_0(
  MR_Word ml_backend__ml_proc_gen__StructId_4,
  MR_Word ml_backend__ml_proc_gen__StepDesc_5);

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_gen_add_table_var_4_p_0_2(
  MR_Box ml_backend__ml_proc_gen__closure_arg,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_gen_add_table_var_4_p_0_1(
  MR_Box ml_backend__ml_proc_gen__closure_arg,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_add_table_var_4_p_0(
  MR_Word ml_backend__ml_proc_gen__ModuleInfo_5,
  MR_Word ml_backend__ml_proc_gen__HeadVar__2_2,
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_DataDefns_0_56,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_DataDefns_57);

static MR_Word MR_CALL 
ml_backend__ml_proc_gen__tabling_name_and_init_to_defn_5_f_0(
  MR_Word ml_backend__ml_proc_gen__ProcLabel_7,
  MR_Word ml_backend__ml_proc_gen__Context_8,
  MR_Word ml_backend__ml_proc_gen__Constness_9,
  MR_Word ml_backend__ml_proc_gen__Id_10,
  MR_Word ml_backend__ml_proc_gen__Initializer_11);

static MR_Word MR_CALL 
ml_backend__ml_proc_gen__gen_init_tabling_name_3_f_0(
  MR_Word ml_backend__ml_proc_gen__ModuleName_5,
  MR_Word ml_backend__ml_proc_gen__ProcLabel_6,
  MR_Word ml_backend__ml_proc_gen__TablingId_7);

static void MR_CALL 
ml_backend__ml_proc_gen__init_stats_8_p_0_1(
  MR_Box ml_backend__ml_proc_gen__closure_arg,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_proc_gen__init_stats_8_p_0(
  MR_Word ml_backend__ml_proc_gen__MLDS_ModuleName_9,
  MR_Word ml_backend__ml_proc_gen__MLDS_ProcLabel_10,
  MR_Word ml_backend__ml_proc_gen__Context_11,
  MR_Word ml_backend__ml_proc_gen__CallOrAnswer_12,
  MR_Word ml_backend__ml_proc_gen__CurrOrPrev_13,
  MR_Word ml_backend__ml_proc_gen__StepDescs_14,
  MR_Word * ml_backend__ml_proc_gen__StatsInit_15,
  MR_Word * ml_backend__ml_proc_gen__StatsStepDefns_16);

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__has_ptr_type_1_p_0(
  MR_Word ml_backend__ml_proc_gen__HeadVar__1_1);

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__ml_gen_pragma_export_proc_3_p_0_1(
  MR_Box ml_backend__ml_proc_gen__closure_arg,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_pragma_export_proc_3_p_0(
  MR_Word ml_backend__ml_proc_gen__ModuleInfo_4,
  MR_Word ml_backend__ml_proc_gen__PragmaExportedProc_5,
  MR_Word * ml_backend__ml_proc_gen__Defn_6);

static MR_Word MR_CALL 
ml_backend__ml_proc_gen__foreign_type_required_imports_2_f_0(
  MR_Word ml_backend__ml_proc_gen__Target_4,
  MR_Word ml_backend__ml_proc_gen__HeadVar__2_2);

static MR_Word MR_CALL 
ml_backend__ml_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_101_105_103_110_95_116_121_112_101_95_114_101_113_117_105_114_101_100_95_105_109_112_111_114_116_115_95_95_91_50_93_95_48_2_f_0(
  MR_Word ml_backend__ml_proc_gen__Target_4);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_foreign_code_lang_8_p_0_1(
  MR_Box ml_backend__ml_proc_gen__closure_arg,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_foreign_code_lang_8_p_0(
  MR_Word ml_backend__ml_proc_gen__ModuleInfo_9,
  MR_Word ml_backend__ml_proc_gen__ForeignDeclCodes_10,
  MR_Word ml_backend__ml_proc_gen__ForeignBodyCodes_11,
  MR_Word ml_backend__ml_proc_gen__WantedForeignImports_12,
  MR_Word ml_backend__ml_proc_gen__ForeignExports_13,
  MR_Word ml_backend__ml_proc_gen__Lang_14,
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Map_0_24,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_Map_25);

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_code_gen_3_p_0_5(
  MR_Box ml_backend__ml_proc_gen__closure_arg,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_code_gen_3_p_0_4(
  MR_Box ml_backend__ml_proc_gen__closure_arg,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_code_gen_3_p_0_3(
  MR_Box ml_backend__ml_proc_gen__closure_arg,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_code_gen_3_p_0_2(
  MR_Box ml_backend__ml_proc_gen__closure_arg,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_2,
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_3);

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_code_gen_3_p_0_1(
  MR_Box ml_backend__ml_proc_gen__closure_arg,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_defns_6_p_0_3(
  MR_Box ml_backend__ml_proc_gen__closure_arg,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_2,
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__ml_gen_defns_6_p_0_2(
  MR_Box ml_backend__ml_proc_gen__closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__ml_gen_defns_6_p_0_1(
  MR_Box ml_backend__ml_proc_gen__closure_arg,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_defns_6_p_0(
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_13,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_14,
  MR_Word * ml_backend__ml_proc_gen__TypeDefns_8,
  MR_Word * ml_backend__ml_proc_gen__TableStructDefns_9,
  MR_Word * ml_backend__ml_proc_gen__PredDefns_10,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_15);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_sccs_8_p_0(
  MR_Word ml_backend__ml_proc_gen__ConstStructMap_1,
  MR_Word ml_backend__ml_proc_gen__HeadVar__2_2,
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_FunctionDefns_0_3,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_FunctionDefns_4,
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_0_5,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_6,
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_8);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_procs_8_p_0(
  MR_Word ml_backend__ml_proc_gen__ConstStructMap_1,
  MR_Word ml_backend__ml_proc_gen__HeadVar__2_2,
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_FunctionDefns_0_3,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_FunctionDefns_4,
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_0_5,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_6,
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_8);

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_8_p_0_1(
  MR_Box ml_backend__ml_proc_gen__closure_arg,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_8_p_0(
  MR_Word ml_backend__ml_proc_gen__ConstStructMap_9,
  MR_Word ml_backend__ml_proc_gen__PredProcId_10,
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_FunctionDefns_0_59,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_FunctionDefns_60,
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_0_61,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_62,
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_63,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_64);

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__attributes_to_mlds_attributes_2_f_0_1(
  MR_Box ml_backend__ml_proc_gen__closure_arg,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1);

static MR_Word MR_CALL 
ml_backend__ml_proc_gen__attributes_to_mlds_attributes_2_f_0(
  MR_Word ml_backend__ml_proc_gen__ModuleInfo_4,
  MR_Word ml_backend__ml_proc_gen__Attrs_5);

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_body_10_p_0_3(
  MR_Box ml_backend__ml_proc_gen__closure_arg,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_body_10_p_0_2(
  MR_Box ml_backend__ml_proc_gen__closure_arg,
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_2,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_3,
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_body_10_p_0_1(
  MR_Box ml_backend__ml_proc_gen__closure_arg,
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_2,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_3,
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_body_10_p_0(
  MR_Word ml_backend__ml_proc_gen__CodeModel_11,
  MR_Word ml_backend__ml_proc_gen__HeadVars_12,
  MR_Word ml_backend__ml_proc_gen__ArgTypes_13,
  MR_Word ml_backend__ml_proc_gen__TopFunctorModes_14,
  MR_Word ml_backend__ml_proc_gen__CopiedOutputVars_15,
  MR_Word ml_backend__ml_proc_gen__Goal_16,
  MR_Word * ml_backend__ml_proc_gen__Decls_17,
  MR_Word * ml_backend__ml_proc_gen__Statements_18,
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Info_0_36,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_Info_37);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_convert_headvars_10_p_0(
  MR_Word ml_backend__ml_proc_gen__Vars_11,
  MR_Word ml_backend__ml_proc_gen__HeadTypes_12,
  MR_Word ml_backend__ml_proc_gen__TopFunctorModes_13,
  MR_Word ml_backend__ml_proc_gen__CopiedOutputVars_14,
  MR_Word ml_backend__ml_proc_gen__Context_15,
  MR_Word * ml_backend__ml_proc_gen__Decls_16,
  MR_Word * ml_backend__ml_proc_gen__InputStatements_17,
  MR_Word * ml_backend__ml_proc_gen__OutputStatements_18,
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Info_0_40,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_Info_41);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_set_up_initial_succ_cont_4_p_0(
  MR_Word ml_backend__ml_proc_gen__ModuleInfo_5,
  MR_Word * ml_backend__ml_proc_gen__NondetCopiedOutputVars_6,
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Info_0_13,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_Info_14);

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__ml_det_copy_out_vars_4_p_0_1(
  MR_Box ml_backend__ml_proc_gen__closure_arg,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_det_copy_out_vars_4_p_0(
  MR_Word ml_backend__ml_proc_gen__ModuleInfo_5,
  MR_Word * ml_backend__ml_proc_gen__CopiedOutputVars_6,
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Info_0_17,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_Info_18);

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_find_procs_for_code_gen_3_p_0_1(
  MR_Box ml_backend__ml_proc_gen__closure_arg,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_find_procs_for_code_gen_3_p_0(
  MR_Word ml_backend__ml_proc_gen__HeadVar__1_1,
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_CodeGenPredProcIds_0_2,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_CodeGenPredProcIds_3);


static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_1[12][2];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_2[8][3];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_3[7][6];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_4[1][9];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_5[1][10];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_6[5][5];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_7[4][4];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_8[1][7];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_10[1][11];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_11[3][1];


/* sealed */ struct ml_backend__ml_proc_gen__vector_common_type_9_0_s {
  const MR_Word ml_backend__ml_proc_gen__vector_common_type_9_0__vct_9_f_0;
};

static /* final */ const struct ml_backend__ml_proc_gen__vector_common_type_9_0_s ml_backend__ml_proc_gen_vector_common_9[4];



static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_1[12][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0))
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
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_defn_0))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_proc_gen_scalar_common_11[1])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_proc_gen_scalar_common_11[2])))
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

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_2[8][3] = {
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
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_6[0])),
    ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_proc_body_10_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_6[0])),
    ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_proc_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_6[3])),
    ((MR_Box) (ml_backend__ml_proc_gen__ml_code_gen_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_6[4])),
    ((MR_Box) (ml_backend__ml_proc_gen__ml_code_gen_3_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_7[1])),
    ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_pragma_export_proc_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_3[7][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_attribute_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_attribute_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_modules_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_compilation_target_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_import_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_pragma_export_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_proc_tabling_struct_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_step_desc_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_4[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_5[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_6[5][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_defn_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0))
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
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_import_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_7[4][4] = {
  /* row 0 */
  {
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_6[1])),
    ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_defns_6_p_0_1)),
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
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_3[6])),
    ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_add_table_var_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_proc_gen_scalar_common_11[1])))
  },
  /* row 3 */
  {
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_3[6])),
    ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_add_table_var_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_proc_gen_scalar_common_11[2])))
  },
};

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_8[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_table_struct_info_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_data_defn_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_data_defn_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_10[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_hlds__hlds_module__type_ctor_info_pragma_exported_proc_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_libs__globals__type_ctor_info_foreign_language_0__plain_ml_backend__mlds__type_ctor_info_mlds_foreign_code_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_libs__globals__type_ctor_info_foreign_language_0__plain_ml_backend__mlds__type_ctor_info_mlds_foreign_code_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_11[3][1] = {
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


static /* final */ const struct ml_backend__ml_proc_gen__vector_common_type_9_0_s ml_backend__ml_proc_gen_vector_common_9[4] = {
  /* row 0 */   {     (MR_Integer) 1 },
  /* row 1 */   {     (MR_Integer) 1 },
  /* row 2 */   {     (MR_Integer) 1 },
  /* row 3 */   {     (MR_Integer) 0 },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 ml_backend__ml_proc_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ml_backend__ml_proc_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen____vpti_pred_1__plain_libs__globals__type_ctor_info_gc_method_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_gc_method_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_proc_gen__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_table_struct_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_data_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_hlds__hlds_module__type_ctor_info_pragma_exported_proc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_libs__globals__type_ctor_info_foreign_language_0__plain_ml_backend__mlds__type_ctor_info_mlds_foreign_code_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_foreign_language_0,
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_foreign_code_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_proc_gen__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_import_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_import_0
  }
};

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__pred__ml_gen_table_structs__759__2_2_p_0(
  MR_Word ml_backend__ml_proc_gen__GC_Method_10,
  MR_Word ml_backend__ml_proc_gen__HeadVar__2_14)
{
  {
    MR_bool ml_backend__ml_proc_gen__succeeded;

    {
      ml_backend__ml_proc_gen__succeeded = mercury__std_util__isnt_2_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_gc_method_0, ml_backend__ml_proc_gen__HeadVar__2_14, ((MR_Box) (ml_backend__ml_proc_gen__GC_Method_10)));
    }
    return ml_backend__ml_proc_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__pred__ml_gen_table_structs__759__1_2_p_0(
  MR_Word ml_backend__ml_proc_gen__HeadVar__1_15,
  MR_Word ml_backend__ml_proc_gen__HeadVar__2_21)
{
  {
    MR_bool ml_backend__ml_proc_gen__succeeded = (ml_backend__ml_proc_gen__HeadVar__1_15 == ml_backend__ml_proc_gen__HeadVar__2_21);

    return ml_backend__ml_proc_gen__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__pred__ml_gen_proc_body__633__1_7_p_0(
  MR_Word ml_backend__ml_proc_gen__CodeModel_11,
  MR_Word ml_backend__ml_proc_gen__Context_22,
  MR_Word ml_backend__ml_proc_gen__ConvOutputStatements_26,
  MR_Word * ml_backend__ml_proc_gen__LambdaHeadVar__1_40,
  MR_Word * ml_backend__ml_proc_gen__LambdaHeadVar__2_41,
  MR_Word ml_backend__ml_proc_gen__LambdaHeadVar__3_42,
  MR_Word * ml_backend__ml_proc_gen__LambdaHeadVar__4_43)
{
  {
    MR_bool ml_backend__ml_proc_gen__succeeded;
    MR_Word ml_backend__ml_proc_gen__SuccStatements_33;

    {
      ml_backend__ml_code_util__ml_gen_success_5_p_0(ml_backend__ml_proc_gen__CodeModel_11, ml_backend__ml_proc_gen__Context_22, &ml_backend__ml_proc_gen__SuccStatements_33, ml_backend__ml_proc_gen__LambdaHeadVar__3_42, ml_backend__ml_proc_gen__LambdaHeadVar__4_43);
    }
    *ml_backend__ml_proc_gen__LambdaHeadVar__1_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      *ml_backend__ml_proc_gen__LambdaHeadVar__2_41 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, ml_backend__ml_proc_gen__ConvOutputStatements_26, ml_backend__ml_proc_gen__SuccStatements_33);
    }
  }
}

static MR_Word MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__func__ml_find_procs_for_code_gen__331__1_2_f_0(
  MR_Word ml_backend__ml_proc_gen__PredId_10,
  MR_Integer ml_backend__ml_proc_gen__LambdaHeadVar__1_25)
{
  {
    MR_bool ml_backend__ml_proc_gen__succeeded;
    MR_Word ml_backend__ml_proc_gen__LambdaHeadVar__2_26;

    {
      ml_backend__ml_proc_gen__LambdaHeadVar__2_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__LambdaHeadVar__2_26, 0) = ((MR_Box) (ml_backend__ml_proc_gen__PredId_10));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__LambdaHeadVar__2_26, 1) = ((MR_Box) (ml_backend__ml_proc_gen__LambdaHeadVar__1_25));
    }
    return ml_backend__ml_proc_gen__LambdaHeadVar__2_26;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__func__ml_gen_imports__150__1_1_f_0(
  MR_Word ml_backend__ml_proc_gen__LambdaHeadVar__1_15)
{
  {
    MR_bool ml_backend__ml_proc_gen__succeeded;
    MR_Word ml_backend__ml_proc_gen__LambdaHeadVar__2_16;
    MR_Word ml_backend__ml_proc_gen__Var_18;

    {
      ml_backend__ml_proc_gen__Var_18 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_proc_gen__LambdaHeadVar__1_15);
    }
    {
      ml_backend__ml_proc_gen__LambdaHeadVar__2_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__LambdaHeadVar__2_16, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__LambdaHeadVar__2_16, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_18));
    }
    return ml_backend__ml_proc_gen__LambdaHeadVar__2_16;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_proc_gen__attribute_to_mlds_attribute_2_f_0(
  MR_Word ml_backend__ml_proc_gen__ModuleInfo_4,
  MR_Word ml_backend__ml_proc_gen__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_proc_gen__succeeded;
    MR_Word ml_backend__ml_proc_gen__HeadVar__3_3;
    MR_Word ml_backend__ml_proc_gen__Type_5 = (MR_Word) ml_backend__ml_proc_gen__HeadVar__2_2;
    MR_Word ml_backend__ml_proc_gen__Var_6;

    {
      ml_backend__ml_proc_gen__Var_6 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_proc_gen__ModuleInfo_4, ml_backend__ml_proc_gen__Type_5);
    }
    ml_backend__ml_proc_gen__HeadVar__3_3 = (MR_Word) ml_backend__ml_proc_gen__Var_6;
    return ml_backend__ml_proc_gen__HeadVar__3_3;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__init_stats_step_3_p_0(
  MR_Word ml_backend__ml_proc_gen__StepId_4,
  MR_Word ml_backend__ml_proc_gen__StepDesc_5,
  MR_Word * ml_backend__ml_proc_gen__Init_6)
{
  {
    MR_bool ml_backend__ml_proc_gen__succeeded;
    MR_Word ml_backend__ml_proc_gen__Step_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__StepDesc_5, (MR_Integer) 1)));
    MR_String ml_backend__ml_proc_gen__KindStr_9;
    MR_Word ml_backend__ml_proc_gen__Var_10;
    MR_Word ml_backend__ml_proc_gen__Var_11;
    MR_Word ml_backend__ml_proc_gen__Var_12;
    MR_Word ml_backend__ml_proc_gen__Var_14;
    MR_Word ml_backend__ml_proc_gen__Var_15;
    MR_Word ml_backend__ml_proc_gen__Var_17;
    MR_Word ml_backend__ml_proc_gen__Var_18;
    MR_Word ml_backend__ml_proc_gen__Var_19;
    MR_Word ml_backend__ml_proc_gen__Var_20;
    MR_Word ml_backend__ml_proc_gen__Var_22;
    MR_Word ml_backend__ml_proc_gen__Var_23;
    MR_Word ml_backend__ml_proc_gen__Var_25;
    MR_Word ml_backend__ml_proc_gen__Var_26;
    MR_Word ml_backend__ml_proc_gen__Var_28;
    MR_Word ml_backend__ml_proc_gen__Var_29;
    MR_Word ml_backend__ml_proc_gen__Var_31;
    MR_Word ml_backend__ml_proc_gen__Var_32;
    MR_Word ml_backend__ml_proc_gen__Var_34;
    MR_Word ml_backend__ml_proc_gen__Var_35;
    MR_Word ml_backend__ml_proc_gen__Var_37;
    MR_Word ml_backend__ml_proc_gen__Var_38;
    MR_Word ml_backend__ml_proc_gen__Var_40;
    MR_Word ml_backend__ml_proc_gen__Var_41;
    MR_Word ml_backend__ml_proc_gen__Var_43;
    MR_Word ml_backend__ml_proc_gen__Var_44;
    MR_Word ml_backend__ml_proc_gen__Var_46;
    MR_Word ml_backend__ml_proc_gen__Var_47;
    MR_Word ml_backend__ml_proc_gen__Var_49;
    MR_Word ml_backend__ml_proc_gen__Var_50;
    MR_Word ml_backend__ml_proc_gen__Var_52;
    MR_Word ml_backend__ml_proc_gen__Var_53;
    MR_Word ml_backend__ml_proc_gen__Var_55;
    MR_Word ml_backend__ml_proc_gen__Var_56;
    MR_Word ml_backend__ml_proc_gen__Var_58;
    MR_Word ml_backend__ml_proc_gen__Var_59;
    MR_Word ml_backend__ml_proc_gen__Var_61;
    MR_Word ml_backend__ml_proc_gen__Var_62;
    MR_Word ml_backend__ml_proc_gen__Var_64;
    MR_Word ml_backend__ml_proc_gen__Var_65;
    MR_Word ml_backend__ml_proc_gen__Var_67;
    MR_Word ml_backend__ml_proc_gen__Var_68;
    MR_Word ml_backend__ml_proc_gen__Var_72;
    MR_Word ml_backend__ml_proc_gen__Var_73;
    MR_String ml_backend__ml_proc_gen___VarName_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__StepDesc_5, (MR_Integer) 0)));

    {
      ml_backend__ml_proc_gen__KindStr_9 = hlds__hlds_pred__table_step_stats_kind_1_f_0(ml_backend__ml_proc_gen__Step_8);
    }
    {
      ml_backend__ml_proc_gen__Var_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__Var_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__Var_10, 1) = ((MR_Box) (ml_backend__ml_proc_gen__StepId_4));
    }
    {
      ml_backend__ml_proc_gen__Var_12 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    }
    {
      ml_backend__ml_proc_gen__Var_15 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    }
    {
      ml_backend__ml_proc_gen__Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__Var_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__Var_73, 1) = ((MR_Box) (ml_backend__ml_proc_gen__KindStr_9));
    }
    {
      ml_backend__ml_proc_gen__Var_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__Var_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__Var_72, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_73));
    }
    {
      ml_backend__ml_proc_gen__Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_18, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_72));
    }
    {
      ml_backend__ml_proc_gen__Var_20 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    }
    {
      ml_backend__ml_proc_gen__Var_23 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    }
    {
      ml_backend__ml_proc_gen__Var_26 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    }
    {
      ml_backend__ml_proc_gen__Var_29 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    }
    {
      ml_backend__ml_proc_gen__Var_32 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    }
    {
      ml_backend__ml_proc_gen__Var_35 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    }
    {
      ml_backend__ml_proc_gen__Var_38 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    }
    {
      ml_backend__ml_proc_gen__Var_41 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    }
    {
      ml_backend__ml_proc_gen__Var_44 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    }
    {
      ml_backend__ml_proc_gen__Var_47 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    }
    {
      ml_backend__ml_proc_gen__Var_50 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    }
    {
      ml_backend__ml_proc_gen__Var_53 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    }
    {
      ml_backend__ml_proc_gen__Var_56 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    }
    {
      ml_backend__ml_proc_gen__Var_59 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    }
    {
      ml_backend__ml_proc_gen__Var_62 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    }
    {
      ml_backend__ml_proc_gen__Var_65 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    }
    {
      ml_backend__ml_proc_gen__Var_68 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    }
    {
      ml_backend__ml_proc_gen__Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_67, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_68));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__ml_proc_gen__Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_64, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_65));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_64, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_67));
    }
    {
      ml_backend__ml_proc_gen__Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_61, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_62));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_61, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_64));
    }
    {
      ml_backend__ml_proc_gen__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_58, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_59));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_58, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_61));
    }
    {
      ml_backend__ml_proc_gen__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_55, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_56));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_55, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_58));
    }
    {
      ml_backend__ml_proc_gen__Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_52, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_53));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_52, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_55));
    }
    {
      ml_backend__ml_proc_gen__Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_49, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_50));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_49, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_52));
    }
    {
      ml_backend__ml_proc_gen__Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_46, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_47));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_46, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_49));
    }
    {
      ml_backend__ml_proc_gen__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_43, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_44));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_43, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_46));
    }
    {
      ml_backend__ml_proc_gen__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_40, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_41));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_40, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_43));
    }
    {
      ml_backend__ml_proc_gen__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_37, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_38));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_37, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_40));
    }
    {
      ml_backend__ml_proc_gen__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_34, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_35));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_34, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_37));
    }
    {
      ml_backend__ml_proc_gen__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_31, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_32));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_31, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_34));
    }
    {
      ml_backend__ml_proc_gen__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_28, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_29));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_28, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_31));
    }
    {
      ml_backend__ml_proc_gen__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_25, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_26));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_25, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_28));
    }
    {
      ml_backend__ml_proc_gen__Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_22, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_23));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_22, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_25));
    }
    {
      ml_backend__ml_proc_gen__Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_19, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_20));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_19, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_22));
    }
    {
      ml_backend__ml_proc_gen__Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_17, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_18));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_17, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_19));
    }
    {
      ml_backend__ml_proc_gen__Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_14, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_15));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_14, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_17));
    }
    {
      ml_backend__ml_proc_gen__Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_11, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_12));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_11, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_14));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ml_backend__ml_proc_gen__Init_6 = base;
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_10));
      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_11));
    }
  }
}

static MR_Word MR_CALL 
ml_backend__ml_proc_gen__init_step_desc_2_f_0(
  MR_Word ml_backend__ml_proc_gen__StructId_4,
  MR_Word ml_backend__ml_proc_gen__StepDesc_5)
{
  {
    MR_bool ml_backend__ml_proc_gen__succeeded;
    MR_Word ml_backend__ml_proc_gen__HeadVar__3_3;
    MR_Word ml_backend__ml_proc_gen__StructType_6;
    MR_Word ml_backend__ml_proc_gen__FieldInits_7;
    MR_String ml_backend__ml_proc_gen__VarName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__StepDesc_5, (MR_Integer) 0)));
    MR_Word ml_backend__ml_proc_gen__Step_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__StepDesc_5, (MR_Integer) 1)));
    MR_String ml_backend__ml_proc_gen__StepStr_10;
    MR_Word ml_backend__ml_proc_gen__MaybeEnumRange_11;
    MR_Word ml_backend__ml_proc_gen__VarNameInit_12;
    MR_Word ml_backend__ml_proc_gen__StepInit_13;
    MR_Word ml_backend__ml_proc_gen__MaybeEnumRangeInit_14;
    MR_Word ml_backend__ml_proc_gen__Var_17;
    MR_Word ml_backend__ml_proc_gen__Var_18;
    MR_Word ml_backend__ml_proc_gen__Var_21;
    MR_Word ml_backend__ml_proc_gen__Var_22;

    {
      backend_libs__rtti__table_trie_step_to_c_3_p_0(ml_backend__ml_proc_gen__Step_9, &ml_backend__ml_proc_gen__StepStr_10, &ml_backend__ml_proc_gen__MaybeEnumRange_11);
    }
    {
      ml_backend__ml_proc_gen__VarNameInit_12 = ml_backend__ml_util__gen_init_string_1_f_0(ml_backend__ml_proc_gen__VarName_8);
    }
    {
      ml_backend__ml_proc_gen__Var_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__Var_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__Var_22, 1) = ((MR_Box) (ml_backend__ml_proc_gen__StepStr_10));
    }
    {
      ml_backend__ml_proc_gen__Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__Var_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__Var_21, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_22));
    }
    {
      ml_backend__ml_proc_gen__StepInit_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__StepInit_13, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_21));
    }
    if ((ml_backend__ml_proc_gen__MaybeEnumRange_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          ml_backend__ml_proc_gen__MaybeEnumRangeInit_14 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) -1);
        }
      }
    else
      {
        MR_Integer ml_backend__ml_proc_gen__EnumRange_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__MaybeEnumRange_11, (MR_Integer) 0)));

        {
          ml_backend__ml_proc_gen__MaybeEnumRangeInit_14 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__ml_proc_gen__EnumRange_15);
        }
      }
    {
      ml_backend__ml_proc_gen__StructType_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__StructType_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__StructType_6, 1) = ((MR_Box) (ml_backend__ml_proc_gen__StructId_4));
    }
    {
      ml_backend__ml_proc_gen__Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_18, 0) = ((MR_Box) (ml_backend__ml_proc_gen__MaybeEnumRangeInit_14));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__ml_proc_gen__Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_17, 0) = ((MR_Box) (ml_backend__ml_proc_gen__StepInit_13));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_17, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_18));
    }
    {
      ml_backend__ml_proc_gen__FieldInits_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__FieldInits_7, 0) = ((MR_Box) (ml_backend__ml_proc_gen__VarNameInit_12));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__FieldInits_7, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_17));
    }
    {
      ml_backend__ml_proc_gen__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_proc_gen__HeadVar__3_3, 0) = ((MR_Box) (ml_backend__ml_proc_gen__StructType_6));
      MR_hl_field(MR_mktag(2), ml_backend__ml_proc_gen__HeadVar__3_3, 1) = ((MR_Box) (ml_backend__ml_proc_gen__FieldInits_7));
    }
    return ml_backend__ml_proc_gen__HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_gen_add_table_var_4_p_0_2(
  MR_Box ml_backend__ml_proc_gen__closure_arg,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1)
{
  {
    MR_Box ml_backend__ml_proc_gen__wrapper_arg_2;
    MR_Box ml_backend__ml_proc_gen__closure = ml_backend__ml_proc_gen__closure_arg;
    MR_Word ml_backend__ml_proc_gen__conv1_HeadVar__3_3;

    {
      ml_backend__ml_proc_gen__conv1_HeadVar__3_3 = ml_backend__ml_proc_gen__init_step_desc_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_proc_gen__wrapper_arg_1));
    }
    ml_backend__ml_proc_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_proc_gen__conv1_HeadVar__3_3));
    return ml_backend__ml_proc_gen__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_gen_add_table_var_4_p_0_1(
  MR_Box ml_backend__ml_proc_gen__closure_arg,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1)
{
  {
    MR_Box ml_backend__ml_proc_gen__wrapper_arg_2;
    MR_Box ml_backend__ml_proc_gen__closure = ml_backend__ml_proc_gen__closure_arg;
    MR_Word ml_backend__ml_proc_gen__conv0_HeadVar__3_3;

    {
      ml_backend__ml_proc_gen__conv0_HeadVar__3_3 = ml_backend__ml_proc_gen__init_step_desc_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_proc_gen__wrapper_arg_1));
    }
    ml_backend__ml_proc_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_proc_gen__conv0_HeadVar__3_3));
    return ml_backend__ml_proc_gen__wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_add_table_var_4_p_0(
  MR_Word ml_backend__ml_proc_gen__ModuleInfo_5,
  MR_Word ml_backend__ml_proc_gen__HeadVar__2_2,
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_DataDefns_0_56,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_DataDefns_57)
{
  {
    MR_bool ml_backend__ml_proc_gen__succeeded;
    MR_Word ml_backend__ml_proc_gen__TypeCtorInfo_157_157;
    MR_Word ml_backend__ml_proc_gen__PredProcId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word ml_backend__ml_proc_gen__TableStructInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word ml_backend__ml_proc_gen__ModuleName_9;
    MR_Word ml_backend__ml_proc_gen__MLDS_ModuleName_10;
    MR_Integer ml_backend__ml_proc_gen__ProcId_12;
    MR_Word ml_backend__ml_proc_gen__ProcTableStructInfo_13;
    MR_Word ml_backend__ml_proc_gen__RttiProcLabel_15;
    MR_Word ml_backend__ml_proc_gen__Context_17;
    MR_Integer ml_backend__ml_proc_gen__NumInputs_18;
    MR_Integer ml_backend__ml_proc_gen__NumOutputs_19;
    MR_Word ml_backend__ml_proc_gen__InputSteps_20;
    MR_Word ml_backend__ml_proc_gen__MaybeOutputSteps_21;
    MR_Word ml_backend__ml_proc_gen__EvalMethod_23;
    MR_Word ml_backend__ml_proc_gen__PredLabel_24;
    MR_Word ml_backend__ml_proc_gen__MLDS_ProcLabel_26;
    MR_String ml_backend__ml_proc_gen__TableTypeStr_27;
    MR_Word ml_backend__ml_proc_gen__InputStepsRefInit_28;
    MR_Word ml_backend__ml_proc_gen__InputStepsDefns_29;
    MR_Word ml_backend__ml_proc_gen__CallStatsInit_34;
    MR_Word ml_backend__ml_proc_gen__CallStatsDefns_35;
    MR_Word ml_backend__ml_proc_gen__PrevCallStatsInit_36;
    MR_Word ml_backend__ml_proc_gen__PrevCallStatsDefns_37;
    MR_Word ml_backend__ml_proc_gen__CallDefns_38;
    MR_Integer ml_backend__ml_proc_gen__HasAnswerTable_39;
    MR_Word ml_backend__ml_proc_gen__OutputStepsRefInit_40;
    MR_Word ml_backend__ml_proc_gen__OutputStepsDefns_41;
    MR_Word ml_backend__ml_proc_gen__AnswerStatsInit_45;
    MR_Word ml_backend__ml_proc_gen__AnswerStatsDefns_46;
    MR_Word ml_backend__ml_proc_gen__PrevAnswerStatsInit_47;
    MR_Word ml_backend__ml_proc_gen__PrevAnswerStatsDefns_48;
    MR_Word ml_backend__ml_proc_gen__AnswerDefns_49;
    MR_Word ml_backend__ml_proc_gen__PTIsRefInit_50;
    MR_Word ml_backend__ml_proc_gen__TypeParamLocnsRefInit_51;
    MR_Word ml_backend__ml_proc_gen__RootNodeInit_52;
    MR_Word ml_backend__ml_proc_gen__TipsRefInit_53;
    MR_Word ml_backend__ml_proc_gen__ProcTableInfoInit_54;
    MR_Word ml_backend__ml_proc_gen__ProcTableInfoDefn_55;
    MR_Word ml_backend__ml_proc_gen__Var_75;
    MR_Word ml_backend__ml_proc_gen__Var_93;
    MR_Word ml_backend__ml_proc_gen__Var_100;
    MR_Word ml_backend__ml_proc_gen__Var_101;
    MR_Word ml_backend__ml_proc_gen__Var_108;
    MR_Word ml_backend__ml_proc_gen__Var_109;
    MR_Word ml_backend__ml_proc_gen__Var_110;
    MR_Word ml_backend__ml_proc_gen__Var_111;
    MR_Word ml_backend__ml_proc_gen__Var_112;
    MR_Word ml_backend__ml_proc_gen__Var_113;
    MR_Word ml_backend__ml_proc_gen__Var_114;
    MR_Word ml_backend__ml_proc_gen__Var_115;
    MR_Word ml_backend__ml_proc_gen__Var_116;
    MR_Word ml_backend__ml_proc_gen__Var_117;
    MR_Word ml_backend__ml_proc_gen__Var_118;
    MR_Word ml_backend__ml_proc_gen__Var_119;
    MR_Word ml_backend__ml_proc_gen__Var_120;
    MR_Word ml_backend__ml_proc_gen__Var_121;
    MR_Word ml_backend__ml_proc_gen__Var_122;
    MR_Word ml_backend__ml_proc_gen__Var_124;
    MR_Word ml_backend__ml_proc_gen__Var_125;
    MR_Word ml_backend__ml_proc_gen__Var_126;
    MR_Word ml_backend__ml_proc_gen__Var_127;
    MR_Word ml_backend__ml_proc_gen__Var_128;
    MR_Word ml_backend__ml_proc_gen__Var_129;
    MR_Word ml_backend__ml_proc_gen__Var_131;
    MR_Word ml_backend__ml_proc_gen__Var_132;
    MR_Word ml_backend__ml_proc_gen__Var_133;
    MR_Word ml_backend__ml_proc_gen__Var_134;
    MR_Word ml_backend__ml_proc_gen__Var_137;
    MR_Word ml_backend__ml_proc_gen__Var_138;
    MR_Word ml_backend__ml_proc_gen__Var_140;
    MR_Word ml_backend__ml_proc_gen__Var_141;
    MR_Word ml_backend__ml_proc_gen__Var_142;
    MR_Word ml_backend__ml_proc_gen__Var_144;
    MR_Word ml_backend__ml_proc_gen__Var_145;
    MR_Word ml_backend__ml_proc_gen__Var_151;
    MR_Word ml_backend__ml_proc_gen__Var_152;
    MR_Word ml_backend__ml_proc_gen___PredId_11;
    MR_Word ml_backend__ml_proc_gen___Attributes_14;
    MR_Word ml_backend__ml_proc_gen___TVarSet_16;
    MR_Word ml_backend__ml_proc_gen___ArgInfos_22;
    MR_Word ml_backend__ml_proc_gen___PredModule_25;

    {
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__ml_proc_gen__ModuleInfo_5, &ml_backend__ml_proc_gen__ModuleName_9);
    }
    {
      ml_backend__ml_proc_gen__MLDS_ModuleName_10 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_proc_gen__ModuleName_9);
    }
    ml_backend__ml_proc_gen___PredId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__PredProcId_6, (MR_Integer) 0)));
    ml_backend__ml_proc_gen__ProcId_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__PredProcId_6, (MR_Integer) 1)));
    ml_backend__ml_proc_gen__ProcTableStructInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__TableStructInfo_7, (MR_Integer) 0)));
    ml_backend__ml_proc_gen___Attributes_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__TableStructInfo_7, (MR_Integer) 1)));
    ml_backend__ml_proc_gen__RttiProcLabel_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__ProcTableStructInfo_13, (MR_Integer) 0)));
    ml_backend__ml_proc_gen___TVarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__ProcTableStructInfo_13, (MR_Integer) 1)));
    ml_backend__ml_proc_gen__Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__ProcTableStructInfo_13, (MR_Integer) 2)));
    ml_backend__ml_proc_gen__NumInputs_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__ProcTableStructInfo_13, (MR_Integer) 3)));
    ml_backend__ml_proc_gen__NumOutputs_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__ProcTableStructInfo_13, (MR_Integer) 4)));
    ml_backend__ml_proc_gen__InputSteps_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__ProcTableStructInfo_13, (MR_Integer) 5)));
    ml_backend__ml_proc_gen__MaybeOutputSteps_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__ProcTableStructInfo_13, (MR_Integer) 6)));
    ml_backend__ml_proc_gen___ArgInfos_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__ProcTableStructInfo_13, (MR_Integer) 7)));
    ml_backend__ml_proc_gen__EvalMethod_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__ProcTableStructInfo_13, (MR_Integer) 8)));
    {
      ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_p_0(ml_backend__ml_proc_gen__ModuleInfo_5, ml_backend__ml_proc_gen__RttiProcLabel_15, &ml_backend__ml_proc_gen__PredLabel_24, &ml_backend__ml_proc_gen___PredModule_25);
    }
    {
      ml_backend__ml_proc_gen__MLDS_ProcLabel_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__MLDS_ProcLabel_26, 0) = ((MR_Box) (ml_backend__ml_proc_gen__PredLabel_24));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__MLDS_ProcLabel_26, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ProcId_12));
    }
    {
      ml_backend__ml_proc_gen__TableTypeStr_27 = parse_tree__prog_data_pragma__eval_method_to_table_type_1_f_0(ml_backend__ml_proc_gen__EvalMethod_23);
    }
    if ((ml_backend__ml_proc_gen__InputSteps_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          ml_backend__ml_proc_gen__InputStepsRefInit_28 = ml_backend__ml_util__gen_init_null_pointer_1_f_0((MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_proc_gen_scalar_common_1[5]));
        }
        ml_backend__ml_proc_gen__InputStepsDefns_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Word ml_backend__ml_proc_gen__InputStepsInit_32;
        MR_Word ml_backend__ml_proc_gen__InputStepsDefn_33;
        MR_Word ml_backend__ml_proc_gen__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_proc_gen_scalar_common_11[1]);
        MR_Word ml_backend__ml_proc_gen__Var_60;

        {
          ml_backend__ml_proc_gen__InputStepsRefInit_28 = ml_backend__ml_proc_gen__gen_init_tabling_name_3_f_0(ml_backend__ml_proc_gen__MLDS_ModuleName_10, ml_backend__ml_proc_gen__MLDS_ProcLabel_26, ml_backend__ml_proc_gen__Var_58);
        }
        {
          ml_backend__ml_proc_gen__Var_60 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_step_desc_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_7[2], ml_backend__ml_proc_gen__InputSteps_20);
        }
        {
          ml_backend__ml_proc_gen__InputStepsInit_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__InputStepsInit_32, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_60));
        }
        {
          ml_backend__ml_proc_gen__InputStepsDefn_33 = ml_backend__ml_proc_gen__tabling_name_and_init_to_defn_5_f_0(ml_backend__ml_proc_gen__MLDS_ProcLabel_26, ml_backend__ml_proc_gen__Context_17, (MR_Integer) 1, ml_backend__ml_proc_gen__Var_58, ml_backend__ml_proc_gen__InputStepsInit_32);
        }
        {
          ml_backend__ml_proc_gen__InputStepsDefns_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__InputStepsDefns_29, 0) = ((MR_Box) (ml_backend__ml_proc_gen__InputStepsDefn_33));
          MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__InputStepsDefns_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    {
      ml_backend__ml_proc_gen__init_stats_8_p_0(ml_backend__ml_proc_gen__MLDS_ModuleName_10, ml_backend__ml_proc_gen__MLDS_ProcLabel_26, ml_backend__ml_proc_gen__Context_17, (MR_Integer) 0, (MR_Integer) 0, ml_backend__ml_proc_gen__InputSteps_20, &ml_backend__ml_proc_gen__CallStatsInit_34, &ml_backend__ml_proc_gen__CallStatsDefns_35);
    }
    {
      ml_backend__ml_proc_gen__init_stats_8_p_0(ml_backend__ml_proc_gen__MLDS_ModuleName_10, ml_backend__ml_proc_gen__MLDS_ProcLabel_26, ml_backend__ml_proc_gen__Context_17, (MR_Integer) 0, (MR_Integer) 1, ml_backend__ml_proc_gen__InputSteps_20, &ml_backend__ml_proc_gen__PrevCallStatsInit_36, &ml_backend__ml_proc_gen__PrevCallStatsDefns_37);
    }
    ml_backend__ml_proc_gen__TypeCtorInfo_157_157 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_defn_0;
    {
      ml_backend__ml_proc_gen__Var_75 = mercury__list__f_43_43_2_f_0(ml_backend__ml_proc_gen__TypeCtorInfo_157_157, ml_backend__ml_proc_gen__CallStatsDefns_35, ml_backend__ml_proc_gen__PrevCallStatsDefns_37);
    }
    {
      ml_backend__ml_proc_gen__CallDefns_38 = mercury__list__f_43_43_2_f_0(ml_backend__ml_proc_gen__TypeCtorInfo_157_157, ml_backend__ml_proc_gen__InputStepsDefns_29, ml_backend__ml_proc_gen__Var_75);
    }
    if ((ml_backend__ml_proc_gen__MaybeOutputSteps_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        ml_backend__ml_proc_gen__HasAnswerTable_39 = (MR_Integer) 0;
        {
          ml_backend__ml_proc_gen__OutputStepsRefInit_40 = ml_backend__ml_util__gen_init_null_pointer_1_f_0((MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_proc_gen_scalar_common_1[6]));
        }
        ml_backend__ml_proc_gen__OutputStepsDefns_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Word ml_backend__ml_proc_gen__OutputSteps_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__MaybeOutputSteps_21, (MR_Integer) 0)));
        MR_Word ml_backend__ml_proc_gen__OutputStepsInit_43;
        MR_Word ml_backend__ml_proc_gen__OutputStepsDefn_44;
        MR_Word ml_backend__ml_proc_gen__Var_76;
        MR_Word ml_backend__ml_proc_gen__Var_78;

        ml_backend__ml_proc_gen__HasAnswerTable_39 = (MR_Integer) 1;
        ml_backend__ml_proc_gen__Var_76 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_proc_gen_scalar_common_11[2]);
        {
          ml_backend__ml_proc_gen__OutputStepsRefInit_40 = ml_backend__ml_proc_gen__gen_init_tabling_name_3_f_0(ml_backend__ml_proc_gen__MLDS_ModuleName_10, ml_backend__ml_proc_gen__MLDS_ProcLabel_26, ml_backend__ml_proc_gen__Var_76);
        }
        {
          ml_backend__ml_proc_gen__Var_78 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_step_desc_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_7[3], ml_backend__ml_proc_gen__OutputSteps_42);
        }
        {
          ml_backend__ml_proc_gen__OutputStepsInit_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__OutputStepsInit_43, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_78));
        }
        {
          ml_backend__ml_proc_gen__OutputStepsDefn_44 = ml_backend__ml_proc_gen__tabling_name_and_init_to_defn_5_f_0(ml_backend__ml_proc_gen__MLDS_ProcLabel_26, ml_backend__ml_proc_gen__Context_17, (MR_Integer) 1, ml_backend__ml_proc_gen__Var_76, ml_backend__ml_proc_gen__OutputStepsInit_43);
        }
        {
          ml_backend__ml_proc_gen__OutputStepsDefns_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__OutputStepsDefns_41, 0) = ((MR_Box) (ml_backend__ml_proc_gen__OutputStepsDefn_44));
          MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__OutputStepsDefns_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    {
      ml_backend__ml_proc_gen__init_stats_8_p_0(ml_backend__ml_proc_gen__MLDS_ModuleName_10, ml_backend__ml_proc_gen__MLDS_ProcLabel_26, ml_backend__ml_proc_gen__Context_17, (MR_Integer) 1, (MR_Integer) 0, ml_backend__ml_proc_gen__InputSteps_20, &ml_backend__ml_proc_gen__AnswerStatsInit_45, &ml_backend__ml_proc_gen__AnswerStatsDefns_46);
    }
    {
      ml_backend__ml_proc_gen__init_stats_8_p_0(ml_backend__ml_proc_gen__MLDS_ModuleName_10, ml_backend__ml_proc_gen__MLDS_ProcLabel_26, ml_backend__ml_proc_gen__Context_17, (MR_Integer) 1, (MR_Integer) 1, ml_backend__ml_proc_gen__InputSteps_20, &ml_backend__ml_proc_gen__PrevAnswerStatsInit_47, &ml_backend__ml_proc_gen__PrevAnswerStatsDefns_48);
    }
    {
      ml_backend__ml_proc_gen__Var_93 = mercury__list__f_43_43_2_f_0(ml_backend__ml_proc_gen__TypeCtorInfo_157_157, ml_backend__ml_proc_gen__AnswerStatsDefns_46, ml_backend__ml_proc_gen__PrevAnswerStatsDefns_48);
    }
    {
      ml_backend__ml_proc_gen__AnswerDefns_49 = mercury__list__f_43_43_2_f_0(ml_backend__ml_proc_gen__TypeCtorInfo_157_157, ml_backend__ml_proc_gen__OutputStepsDefns_41, ml_backend__ml_proc_gen__Var_93);
    }
    {
      ml_backend__ml_proc_gen__PTIsRefInit_50 = ml_backend__ml_util__gen_init_null_pointer_1_f_0((MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_proc_gen_scalar_common_1[7]));
    }
    {
      ml_backend__ml_proc_gen__TypeParamLocnsRefInit_51 = ml_backend__ml_util__gen_init_null_pointer_1_f_0((MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_proc_gen_scalar_common_1[8]));
    }
    {
      ml_backend__ml_proc_gen__Var_101 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    }
    {
      ml_backend__ml_proc_gen__Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_100, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_101));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__ml_proc_gen__RootNodeInit_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_proc_gen__RootNodeInit_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_proc_gen_scalar_common_1[9])));
      MR_hl_field(MR_mktag(2), ml_backend__ml_proc_gen__RootNodeInit_52, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_100));
    }
    {
      ml_backend__ml_proc_gen__TipsRefInit_53 = ml_backend__ml_util__gen_init_null_pointer_1_f_0((MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_proc_gen_scalar_common_1[10]));
    }
    {
      ml_backend__ml_proc_gen__Var_109 = ml_backend__ml_util__gen_init_builtin_const_1_f_0(ml_backend__ml_proc_gen__TableTypeStr_27);
    }
    {
      ml_backend__ml_proc_gen__Var_111 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__ml_proc_gen__NumInputs_18);
    }
    {
      ml_backend__ml_proc_gen__Var_113 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__ml_proc_gen__NumOutputs_19);
    }
    {
      ml_backend__ml_proc_gen__Var_115 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__ml_proc_gen__HasAnswerTable_39);
    }
    {
      ml_backend__ml_proc_gen__Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_122, 0) = ((MR_Box) (ml_backend__ml_proc_gen__OutputStepsRefInit_40));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__ml_proc_gen__Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_121, 0) = ((MR_Box) (ml_backend__ml_proc_gen__InputStepsRefInit_28));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_121, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_122));
    }
    {
      ml_backend__ml_proc_gen__Var_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__Var_120, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_121));
    }
    {
      ml_backend__ml_proc_gen__Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_129, 0) = ((MR_Box) (ml_backend__ml_proc_gen__PrevCallStatsInit_36));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_129, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__ml_proc_gen__Var_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_128, 0) = ((MR_Box) (ml_backend__ml_proc_gen__CallStatsInit_34));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_128, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_129));
    }
    {
      ml_backend__ml_proc_gen__Var_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__Var_127, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_128));
    }
    {
      ml_backend__ml_proc_gen__Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_134, 0) = ((MR_Box) (ml_backend__ml_proc_gen__PrevAnswerStatsInit_47));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__ml_proc_gen__Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_133, 0) = ((MR_Box) (ml_backend__ml_proc_gen__AnswerStatsInit_45));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_133, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_134));
    }
    {
      ml_backend__ml_proc_gen__Var_132 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__Var_132, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_133));
    }
    {
      ml_backend__ml_proc_gen__Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_131, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_132));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_131, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__ml_proc_gen__Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_126, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_127));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_126, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_131));
    }
    {
      ml_backend__ml_proc_gen__Var_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__Var_125, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_126));
    }
    {
      ml_backend__ml_proc_gen__Var_138 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    }
    {
      ml_backend__ml_proc_gen__Var_142 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    }
    {
      ml_backend__ml_proc_gen__Var_145 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    }
    {
      ml_backend__ml_proc_gen__Var_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_144, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_145));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_144, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__ml_proc_gen__Var_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_141, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_142));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_141, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_144));
    }
    {
      ml_backend__ml_proc_gen__Var_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_140, 0) = ((MR_Box) (ml_backend__ml_proc_gen__TipsRefInit_53));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_140, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_141));
    }
    {
      ml_backend__ml_proc_gen__Var_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_137, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_138));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_137, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_140));
    }
    {
      ml_backend__ml_proc_gen__Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_124, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_125));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_124, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_137));
    }
    {
      ml_backend__ml_proc_gen__Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_119, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_120));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_119, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_124));
    }
    {
      ml_backend__ml_proc_gen__Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_118, 0) = ((MR_Box) (ml_backend__ml_proc_gen__RootNodeInit_52));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_118, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_119));
    }
    {
      ml_backend__ml_proc_gen__Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_117, 0) = ((MR_Box) (ml_backend__ml_proc_gen__TypeParamLocnsRefInit_51));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_117, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_118));
    }
    {
      ml_backend__ml_proc_gen__Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_116, 0) = ((MR_Box) (ml_backend__ml_proc_gen__PTIsRefInit_50));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_116, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_117));
    }
    {
      ml_backend__ml_proc_gen__Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_114, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_115));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_114, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_116));
    }
    {
      ml_backend__ml_proc_gen__Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_112, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_113));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_112, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_114));
    }
    {
      ml_backend__ml_proc_gen__Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_110, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_111));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_110, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_112));
    }
    {
      ml_backend__ml_proc_gen__Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_108, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_109));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_108, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_110));
    }
    {
      ml_backend__ml_proc_gen__ProcTableInfoInit_54 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_proc_gen__ProcTableInfoInit_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_proc_gen_scalar_common_1[11])));
      MR_hl_field(MR_mktag(2), ml_backend__ml_proc_gen__ProcTableInfoInit_54, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_108));
    }
    {
      ml_backend__ml_proc_gen__ProcTableInfoDefn_55 = ml_backend__ml_proc_gen__tabling_name_and_init_to_defn_5_f_0(ml_backend__ml_proc_gen__MLDS_ProcLabel_26, ml_backend__ml_proc_gen__Context_17, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_proc_gen__ProcTableInfoInit_54);
    }
    {
      ml_backend__ml_proc_gen__Var_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_152, 0) = ((MR_Box) (ml_backend__ml_proc_gen__ProcTableInfoDefn_55));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_152, 1) = ((MR_Box) (ml_backend__ml_proc_gen__STATE_VARIABLE_DataDefns_0_56));
    }
    {
      ml_backend__ml_proc_gen__Var_151 = mercury__list__f_43_43_2_f_0(ml_backend__ml_proc_gen__TypeCtorInfo_157_157, ml_backend__ml_proc_gen__AnswerDefns_49, ml_backend__ml_proc_gen__Var_152);
    }
    {
      *ml_backend__ml_proc_gen__STATE_VARIABLE_DataDefns_57 = mercury__list__f_43_43_2_f_0(ml_backend__ml_proc_gen__TypeCtorInfo_157_157, ml_backend__ml_proc_gen__CallDefns_38, ml_backend__ml_proc_gen__Var_151);
    }
  }
}

static MR_Word MR_CALL 
ml_backend__ml_proc_gen__tabling_name_and_init_to_defn_5_f_0(
  MR_Word ml_backend__ml_proc_gen__ProcLabel_7,
  MR_Word ml_backend__ml_proc_gen__Context_8,
  MR_Word ml_backend__ml_proc_gen__Constness_9,
  MR_Word ml_backend__ml_proc_gen__Id_10,
  MR_Word ml_backend__ml_proc_gen__Initializer_11)
{
  {
    MR_bool ml_backend__ml_proc_gen__succeeded;
    MR_Word ml_backend__ml_proc_gen__DataDefn_12;
    MR_Word ml_backend__ml_proc_gen__MLDS_Type_14;
    MR_Word ml_backend__ml_proc_gen__Flags_15;
    MR_Word ml_backend__ml_proc_gen__Name_16;

    {
      ml_backend__ml_proc_gen__MLDS_Type_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__MLDS_Type_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__MLDS_Type_14, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Id_10));
    }
    {
      ml_backend__ml_proc_gen__Flags_15 = ml_backend__mlds__init_data_decl_flags_3_f_0((MR_Integer) 1, (MR_Integer) 0, ml_backend__ml_proc_gen__Constness_9);
    }
    {
      ml_backend__ml_proc_gen__Name_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__Name_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__Name_16, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ProcLabel_7));
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__Name_16, 2) = ((MR_Box) (ml_backend__ml_proc_gen__Id_10));
    }
    {
      ml_backend__ml_proc_gen__DataDefn_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__DataDefn_12, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Name_16));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__DataDefn_12, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Context_8));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__DataDefn_12, 2) = ((MR_Box) (ml_backend__ml_proc_gen__Flags_15));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__DataDefn_12, 3) = ((MR_Box) (ml_backend__ml_proc_gen__MLDS_Type_14));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__DataDefn_12, 4) = ((MR_Box) (ml_backend__ml_proc_gen__Initializer_11));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__DataDefn_12, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return ml_backend__ml_proc_gen__DataDefn_12;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_proc_gen__gen_init_tabling_name_3_f_0(
  MR_Word ml_backend__ml_proc_gen__ModuleName_5,
  MR_Word ml_backend__ml_proc_gen__ProcLabel_6,
  MR_Word ml_backend__ml_proc_gen__TablingId_7)
{
  {
    MR_bool ml_backend__ml_proc_gen__succeeded;
    MR_Word ml_backend__ml_proc_gen__Rval_8;
    MR_Word ml_backend__ml_proc_gen__DataAddr_9;
    MR_Word ml_backend__ml_proc_gen__Var_10;
    MR_Word ml_backend__ml_proc_gen__Var_11;
    MR_Word ml_backend__ml_proc_gen__Var_12;

    {
      ml_backend__ml_proc_gen__Var_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__Var_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__Var_10, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ProcLabel_6));
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__Var_10, 2) = ((MR_Box) (ml_backend__ml_proc_gen__TablingId_7));
    }
    {
      ml_backend__ml_proc_gen__DataAddr_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__DataAddr_9, 0) = ((MR_Box) (ml_backend__ml_proc_gen__ModuleName_5));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__DataAddr_9, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_10));
    }
    ml_backend__ml_proc_gen__Var_12 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_proc_gen__DataAddr_9);
    {
      ml_backend__ml_proc_gen__Var_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__Var_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__Var_11, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_12));
    }
    {
      ml_backend__ml_proc_gen__Rval_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Rval_8, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_11));
    }
    return ml_backend__ml_proc_gen__Rval_8;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__init_stats_8_p_0_1(
  MR_Box ml_backend__ml_proc_gen__closure_arg,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_2)
{
  {
    MR_Box ml_backend__ml_proc_gen__closure = ml_backend__ml_proc_gen__closure_arg;
    MR_Word ml_backend__ml_proc_gen__conv0_Init_6;

    {
      ml_backend__ml_proc_gen__init_stats_step_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_proc_gen__wrapper_arg_1), &ml_backend__ml_proc_gen__conv0_Init_6);
    }
    *ml_backend__ml_proc_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_proc_gen__conv0_Init_6));
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__init_stats_8_p_0(
  MR_Word ml_backend__ml_proc_gen__MLDS_ModuleName_9,
  MR_Word ml_backend__ml_proc_gen__MLDS_ProcLabel_10,
  MR_Word ml_backend__ml_proc_gen__Context_11,
  MR_Word ml_backend__ml_proc_gen__CallOrAnswer_12,
  MR_Word ml_backend__ml_proc_gen__CurrOrPrev_13,
  MR_Word ml_backend__ml_proc_gen__StepDescs_14,
  MR_Word * ml_backend__ml_proc_gen__StatsInit_15,
  MR_Word * ml_backend__ml_proc_gen__StatsStepDefns_16)
{
  {
    MR_bool ml_backend__ml_proc_gen__succeeded;
    MR_Word ml_backend__ml_proc_gen__StatsId_17;
    MR_Word ml_backend__ml_proc_gen__StatsStepsId_18;
    MR_Word ml_backend__ml_proc_gen__StatsType_19;
    MR_Word ml_backend__ml_proc_gen__StatsStepsType_20;
    MR_Word ml_backend__ml_proc_gen__StatsStepsArrayRefInit_21;
    MR_Word ml_backend__ml_proc_gen__Var_31;
    MR_Word ml_backend__ml_proc_gen__Var_32;
    MR_Word ml_backend__ml_proc_gen__Var_34;
    MR_Word ml_backend__ml_proc_gen__Var_35;
    MR_Word ml_backend__ml_proc_gen__Var_37;

    {
      ml_backend__ml_proc_gen__StatsId_17 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_proc_gen__StatsId_17, 0) = ((MR_Box) (ml_backend__ml_proc_gen__CallOrAnswer_12));
      MR_hl_field(MR_mktag(2), ml_backend__ml_proc_gen__StatsId_17, 1) = ((MR_Box) (ml_backend__ml_proc_gen__CurrOrPrev_13));
    }
    {
      ml_backend__ml_proc_gen__StatsStepsId_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__StatsStepsId_18, 0) = ((MR_Box) (ml_backend__ml_proc_gen__CallOrAnswer_12));
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__StatsStepsId_18, 1) = ((MR_Box) (ml_backend__ml_proc_gen__CurrOrPrev_13));
    }
    {
      ml_backend__ml_proc_gen__StatsType_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__StatsType_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__StatsType_19, 1) = ((MR_Box) (ml_backend__ml_proc_gen__StatsId_17));
    }
    {
      ml_backend__ml_proc_gen__StatsStepsType_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__StatsStepsType_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__StatsStepsType_20, 1) = ((MR_Box) (ml_backend__ml_proc_gen__StatsStepsId_18));
    }
    if ((ml_backend__ml_proc_gen__StepDescs_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ml_backend__ml_proc_gen__StatsStepDefns_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          ml_backend__ml_proc_gen__StatsStepsArrayRefInit_21 = ml_backend__ml_util__gen_init_null_pointer_1_f_0(ml_backend__ml_proc_gen__StatsStepsType_20);
        }
      }
    else
      {
        MR_Word ml_backend__ml_proc_gen__StatsStepsInits_24;
        MR_Word ml_backend__ml_proc_gen__StatsStepsArrayInit_25;
        MR_Word ml_backend__ml_proc_gen__StatsStepDefn_26;
        MR_Word ml_backend__ml_proc_gen__Var_27;
        MR_Word ml_backend__ml_proc_gen__Flags_51;
        MR_Word ml_backend__ml_proc_gen__Name_52;
        MR_Word ml_backend__ml_proc_gen__DataAddr_61;
        MR_Word ml_backend__ml_proc_gen__Var_63;
        MR_Word ml_backend__ml_proc_gen__Var_64;

        {
          ml_backend__ml_proc_gen__Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_27, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_3[6]));
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_27, 1) = ((MR_Box) (ml_backend__ml_proc_gen__init_stats_8_p_0_1));
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_27, 3) = ((MR_Box) (ml_backend__ml_proc_gen__StatsStepsId_18));
        }
        {
          mercury__list__map_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_step_desc_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, ml_backend__ml_proc_gen__Var_27, ml_backend__ml_proc_gen__StepDescs_14, &ml_backend__ml_proc_gen__StatsStepsInits_24);
        }
        {
          ml_backend__ml_proc_gen__StatsStepsArrayInit_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__StatsStepsArrayInit_25, 0) = ((MR_Box) (ml_backend__ml_proc_gen__StatsStepsInits_24));
        }
        {
          ml_backend__ml_proc_gen__Flags_51 = ml_backend__mlds__init_data_decl_flags_3_f_0((MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0);
        }
        {
          ml_backend__ml_proc_gen__Name_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__Name_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__Name_52, 1) = ((MR_Box) (ml_backend__ml_proc_gen__MLDS_ProcLabel_10));
          MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__Name_52, 2) = ((MR_Box) (ml_backend__ml_proc_gen__StatsStepsId_18));
        }
        {
          ml_backend__ml_proc_gen__StatsStepDefn_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__StatsStepDefn_26, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Name_52));
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__StatsStepDefn_26, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Context_11));
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__StatsStepDefn_26, 2) = ((MR_Box) (ml_backend__ml_proc_gen__Flags_51));
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__StatsStepDefn_26, 3) = ((MR_Box) (ml_backend__ml_proc_gen__StatsStepsType_20));
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__StatsStepDefn_26, 4) = ((MR_Box) (ml_backend__ml_proc_gen__StatsStepsArrayInit_25));
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__StatsStepDefn_26, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_proc_gen__StatsStepDefns_16 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_proc_gen__StatsStepDefn_26));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          ml_backend__ml_proc_gen__DataAddr_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__DataAddr_61, 0) = ((MR_Box) (ml_backend__ml_proc_gen__MLDS_ModuleName_9));
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__DataAddr_61, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Name_52));
        }
        ml_backend__ml_proc_gen__Var_64 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_proc_gen__DataAddr_61);
        {
          ml_backend__ml_proc_gen__Var_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__Var_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__Var_63, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_64));
        }
        {
          ml_backend__ml_proc_gen__StatsStepsArrayRefInit_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__StatsStepsArrayRefInit_21, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_63));
        }
      }
    {
      ml_backend__ml_proc_gen__Var_32 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    }
    {
      ml_backend__ml_proc_gen__Var_35 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    }
    {
      ml_backend__ml_proc_gen__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_37, 0) = ((MR_Box) (ml_backend__ml_proc_gen__StatsStepsArrayRefInit_21));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__ml_proc_gen__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_34, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_35));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_34, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_37));
    }
    {
      ml_backend__ml_proc_gen__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_31, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_32));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_31, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_34));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ml_backend__ml_proc_gen__StatsInit_15 = base;
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ml_backend__ml_proc_gen__StatsType_19));
      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_31));
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__has_ptr_type_1_p_0(
  MR_Word ml_backend__ml_proc_gen__HeadVar__1_1)
{
  {
    MR_bool ml_backend__ml_proc_gen__succeeded;
    MR_Word ml_backend__ml_proc_gen__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word ml_backend__ml_proc_gen__Var_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word ml_backend__ml_proc_gen__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__HeadVar__1_1, (MR_Integer) 2)));
    MR_Word ml_backend__ml_proc_gen__Var_3;

    ml_backend__ml_proc_gen__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_proc_gen__Var_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__Var_5, (MR_Integer) 0)))) == (MR_Integer) 6)));
    if (ml_backend__ml_proc_gen__succeeded)
      ml_backend__ml_proc_gen__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__Var_5, (MR_Integer) 1)));
    return ml_backend__ml_proc_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__ml_gen_pragma_export_proc_3_p_0_1(
  MR_Box ml_backend__ml_proc_gen__closure_arg,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1)
{
  {
    MR_bool ml_backend__ml_proc_gen__succeeded;
    MR_Box ml_backend__ml_proc_gen__closure = ml_backend__ml_proc_gen__closure_arg;

    {
      ml_backend__ml_proc_gen__succeeded = ml_backend__ml_proc_gen__has_ptr_type_1_p_0(((MR_Word) ml_backend__ml_proc_gen__wrapper_arg_1));
    }
    return ml_backend__ml_proc_gen__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_pragma_export_proc_3_p_0(
  MR_Word ml_backend__ml_proc_gen__ModuleInfo_4,
  MR_Word ml_backend__ml_proc_gen__PragmaExportedProc_5,
  MR_Word * ml_backend__ml_proc_gen__Defn_6)
{
  {
    MR_bool ml_backend__ml_proc_gen__succeeded;
    MR_Word ml_backend__ml_proc_gen__Lang_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__PragmaExportedProc_5, (MR_Integer) 0)));
    MR_Word ml_backend__ml_proc_gen__PredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__PragmaExportedProc_5, (MR_Integer) 1)));
    MR_Integer ml_backend__ml_proc_gen__ProcId_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__PragmaExportedProc_5, (MR_Integer) 2)));
    MR_String ml_backend__ml_proc_gen__ExportName_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__PragmaExportedProc_5, (MR_Integer) 3)));
    MR_Word ml_backend__ml_proc_gen__Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__PragmaExportedProc_5, (MR_Integer) 4)));
    MR_Word ml_backend__ml_proc_gen__ModuleName_12;
    MR_Word ml_backend__ml_proc_gen__PlainName_13;
    MR_Word ml_backend__ml_proc_gen__MLDS_Name_14;
    MR_Word ml_backend__ml_proc_gen__FuncParams_15;
    MR_Word ml_backend__ml_proc_gen__PredInfo_16;
    MR_Word ml_backend__ml_proc_gen__UnivQTVars_17;
    MR_Word ml_backend__ml_proc_gen__Var_19;
    MR_Word ml_backend__ml_proc_gen__Globals_24;
    MR_Word ml_backend__ml_proc_gen__Target_25;
    MR_Word ml_backend__ml_proc_gen__FuncParamsByRef_28;
    MR_Word ml_backend__ml_proc_gen__GlobalsByRef_26;
    MR_Word ml_backend__ml_proc_gen__ModuleInfoByRef_27;
    MR_Word ml_backend__ml_proc_gen__Args_29;
    MR_Word ml_backend__ml_proc_gen__ReturnTypes_30;
    MR_Word ml_backend__ml_proc_gen__Var_34;
    MR_Word ml_backend__ml_proc_gen__Var_35;
    MR_Word ml_backend__ml_proc_gen__Var_36;

    {
      ml_backend__ml_code_util__ml_gen_proc_label_5_p_0(ml_backend__ml_proc_gen__ModuleInfo_4, ml_backend__ml_proc_gen__PredId_8, ml_backend__ml_proc_gen__ProcId_9, &ml_backend__ml_proc_gen__ModuleName_12, &ml_backend__ml_proc_gen__PlainName_13);
    }
    ml_backend__ml_proc_gen__Var_19 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ml_backend__ml_proc_gen__PlainName_13);
    {
      ml_backend__ml_proc_gen__MLDS_Name_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__MLDS_Name_14, 0) = ((MR_Box) (ml_backend__ml_proc_gen__ModuleName_12));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__MLDS_Name_14, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__MLDS_Name_14, 2) = ((MR_Box) (ml_backend__ml_proc_gen__Var_19));
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_proc_gen__ModuleInfo_4, &ml_backend__ml_proc_gen__Globals_24);
    }
    {
      libs__globals__get_target_2_p_0(ml_backend__ml_proc_gen__Globals_24, &ml_backend__ml_proc_gen__Target_25);
    }
    switch (ml_backend__ml_proc_gen__Target_25) {
      default:
        ml_backend__ml_proc_gen__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        ml_backend__ml_proc_gen__succeeded = MR_TRUE;
        break;
      case (MR_Integer) 2:
        ml_backend__ml_proc_gen__succeeded = MR_TRUE;
        break;
    }
    if (ml_backend__ml_proc_gen__succeeded)
      {
        ml_backend__ml_proc_gen__Var_34 = (MR_Integer) 266;
        ml_backend__ml_proc_gen__Var_36 = (MR_Integer) 0;
        ml_backend__ml_proc_gen__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_proc_gen_scalar_common_11[0]);
        {
          libs__globals__set_option_4_p_0(ml_backend__ml_proc_gen__Var_34, ml_backend__ml_proc_gen__Var_35, ml_backend__ml_proc_gen__Globals_24, &ml_backend__ml_proc_gen__GlobalsByRef_26);
        }
        {
          hlds__hlds_module__module_info_set_globals_3_p_0(ml_backend__ml_proc_gen__GlobalsByRef_26, ml_backend__ml_proc_gen__ModuleInfo_4, &ml_backend__ml_proc_gen__ModuleInfoByRef_27);
        }
        {
          ml_backend__ml_proc_gen__FuncParamsByRef_28 = ml_backend__ml_code_util__ml_gen_proc_params_3_f_0(ml_backend__ml_proc_gen__ModuleInfoByRef_27, ml_backend__ml_proc_gen__PredId_8, ml_backend__ml_proc_gen__ProcId_9);
        }
        ml_backend__ml_proc_gen__Args_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__FuncParamsByRef_28, (MR_Integer) 0)));
        ml_backend__ml_proc_gen__ReturnTypes_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__FuncParamsByRef_28, (MR_Integer) 1)));
        if ((ml_backend__ml_proc_gen__ReturnTypes_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word ml_backend__ml_proc_gen__TypeCtorInfo_26_41 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0;
            MR_Word ml_backend__ml_proc_gen__OutArgs_31;
            MR_Integer ml_backend__ml_proc_gen__Var_38;

            {
              mercury__list__filter_3_p_0(ml_backend__ml_proc_gen__TypeCtorInfo_26_41, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[7], ml_backend__ml_proc_gen__Args_29, &ml_backend__ml_proc_gen__OutArgs_31);
            }
            {
              ml_backend__ml_proc_gen__Var_38 = mercury__list__length_1_f_0(ml_backend__ml_proc_gen__TypeCtorInfo_26_41, ml_backend__ml_proc_gen__OutArgs_31);
            }
            ml_backend__ml_proc_gen__succeeded = (ml_backend__ml_proc_gen__Var_38 > (MR_Integer) 1);
          }
        else
          ml_backend__ml_proc_gen__succeeded = MR_TRUE;
      }
    if (ml_backend__ml_proc_gen__succeeded)
      ml_backend__ml_proc_gen__FuncParams_15 = ml_backend__ml_proc_gen__FuncParamsByRef_28;
    else
      {
        ml_backend__ml_proc_gen__FuncParams_15 = ml_backend__ml_code_util__ml_gen_proc_params_3_f_0(ml_backend__ml_proc_gen__ModuleInfo_4, ml_backend__ml_proc_gen__PredId_8, ml_backend__ml_proc_gen__ProcId_9);
      }
    {
      hlds__hlds_module__module_info_pred_info_3_p_0(ml_backend__ml_proc_gen__ModuleInfo_4, ml_backend__ml_proc_gen__PredId_8, &ml_backend__ml_proc_gen__PredInfo_16);
    }
    {
      hlds__hlds_pred__pred_info_get_univ_quant_tvars_2_p_0(ml_backend__ml_proc_gen__PredInfo_16, &ml_backend__ml_proc_gen__UnivQTVars_17);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_proc_gen__Defn_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Lang_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ExportName_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_proc_gen__MLDS_Name_14));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_proc_gen__FuncParams_15));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_proc_gen__UnivQTVars_17));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_proc_gen__Context_11));
    }
  }
}

static MR_Word MR_CALL 
ml_backend__ml_proc_gen__foreign_type_required_imports_2_f_0(
  MR_Word ml_backend__ml_proc_gen__Target_4,
  MR_Word ml_backend__ml_proc_gen__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_proc_gen__succeeded;
    MR_Word ml_backend__ml_proc_gen__Imports_7;

    {
      ml_backend__ml_proc_gen__Imports_7 = ml_backend__ml_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_101_105_103_110_95_116_121_112_101_95_114_101_113_117_105_114_101_100_95_105_109_112_111_114_116_115_95_95_91_50_93_95_48_2_f_0(ml_backend__ml_proc_gen__Target_4);
    }
    return ml_backend__ml_proc_gen__Imports_7;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_101_105_103_110_95_116_121_112_101_95_114_101_113_117_105_114_101_100_95_105_109_112_111_114_116_115_95_95_91_50_93_95_48_2_f_0(
  MR_Word ml_backend__ml_proc_gen__Target_4)
{
  {
    MR_bool ml_backend__ml_proc_gen__succeeded;
    MR_Word ml_backend__ml_proc_gen__Imports_7;

    switch (ml_backend__ml_proc_gen__Target_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        ml_backend__ml_proc_gen__Imports_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 3:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.ml_proc_gen.foreign_type_required_imports\'/2", (MR_String) "target erlang");
          }
        }
        break;
    }
    return ml_backend__ml_proc_gen__Imports_7;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_foreign_code_lang_8_p_0_1(
  MR_Box ml_backend__ml_proc_gen__closure_arg,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_2)
{
  {
    MR_Box ml_backend__ml_proc_gen__closure = ml_backend__ml_proc_gen__closure_arg;
    MR_Word ml_backend__ml_proc_gen__conv0_Defn_6;

    {
      ml_backend__ml_proc_gen__ml_gen_pragma_export_proc_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_proc_gen__wrapper_arg_1), &ml_backend__ml_proc_gen__conv0_Defn_6);
    }
    *ml_backend__ml_proc_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_proc_gen__conv0_Defn_6));
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_foreign_code_lang_8_p_0(
  MR_Word ml_backend__ml_proc_gen__ModuleInfo_9,
  MR_Word ml_backend__ml_proc_gen__ForeignDeclCodes_10,
  MR_Word ml_backend__ml_proc_gen__ForeignBodyCodes_11,
  MR_Word ml_backend__ml_proc_gen__WantedForeignImports_12,
  MR_Word ml_backend__ml_proc_gen__ForeignExports_13,
  MR_Word ml_backend__ml_proc_gen__Lang_14,
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Map_0_24,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_Map_25)
{
  {
    MR_bool ml_backend__ml_proc_gen__succeeded;
    MR_Word ml_backend__ml_proc_gen__WantedForeignDeclCodes_16;
    MR_Word ml_backend__ml_proc_gen__WantedForeignBodyCodes_18;
    MR_Word ml_backend__ml_proc_gen__WantedForeignExports_20;
    MR_Word ml_backend__ml_proc_gen__MLDSWantedForeignExports_22;
    MR_Word ml_backend__ml_proc_gen__MLDS_ForeignCode_23;
    MR_Word ml_backend__ml_proc_gen__Var_26;
    MR_Word ml_backend__ml_proc_gen___OtherForeignDeclCodes_17;
    MR_Word ml_backend__ml_proc_gen___OtherForeignBodyCodes_19;
    MR_Word ml_backend__ml_proc_gen___OtherForeignExports_21;

    {
      backend_libs__foreign__filter_decls_4_p_0(ml_backend__ml_proc_gen__Lang_14, ml_backend__ml_proc_gen__ForeignDeclCodes_10, &ml_backend__ml_proc_gen__WantedForeignDeclCodes_16, &ml_backend__ml_proc_gen___OtherForeignDeclCodes_17);
    }
    {
      backend_libs__foreign__filter_bodys_4_p_0(ml_backend__ml_proc_gen__Lang_14, ml_backend__ml_proc_gen__ForeignBodyCodes_11, &ml_backend__ml_proc_gen__WantedForeignBodyCodes_18, &ml_backend__ml_proc_gen___OtherForeignBodyCodes_19);
    }
    {
      backend_libs__foreign__filter_exports_4_p_0(ml_backend__ml_proc_gen__Lang_14, ml_backend__ml_proc_gen__ForeignExports_13, &ml_backend__ml_proc_gen__WantedForeignExports_20, &ml_backend__ml_proc_gen___OtherForeignExports_21);
    }
    {
      ml_backend__ml_proc_gen__Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_26, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_3[5]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_26, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_foreign_code_lang_8_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_26, 3) = ((MR_Box) (ml_backend__ml_proc_gen__ModuleInfo_9));
    }
    {
      mercury__list__map_3_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_pragma_export_0, ml_backend__ml_proc_gen__Var_26, ml_backend__ml_proc_gen__WantedForeignExports_20, &ml_backend__ml_proc_gen__MLDSWantedForeignExports_22);
    }
    {
      ml_backend__ml_proc_gen__MLDS_ForeignCode_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__MLDS_ForeignCode_23, 0) = ((MR_Box) (ml_backend__ml_proc_gen__WantedForeignDeclCodes_16));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__MLDS_ForeignCode_23, 1) = ((MR_Box) (ml_backend__ml_proc_gen__WantedForeignBodyCodes_18));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__MLDS_ForeignCode_23, 2) = ((MR_Box) (ml_backend__ml_proc_gen__WantedForeignImports_12));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__MLDS_ForeignCode_23, 3) = ((MR_Box) (ml_backend__ml_proc_gen__MLDSWantedForeignExports_22));
    }
    {
      mercury__map__det_insert_4_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_foreign_code_0, ((MR_Box) (ml_backend__ml_proc_gen__Lang_14)), ((MR_Box) (ml_backend__ml_proc_gen__MLDS_ForeignCode_23)), ml_backend__ml_proc_gen__STATE_VARIABLE_Map_0_24, ml_backend__ml_proc_gen__STATE_VARIABLE_Map_25);
    }
  }
}

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_code_gen_3_p_0_5(
  MR_Box ml_backend__ml_proc_gen__closure_arg,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1)
{
  {
    MR_Box ml_backend__ml_proc_gen__wrapper_arg_2;
    MR_Box ml_backend__ml_proc_gen__closure = ml_backend__ml_proc_gen__closure_arg;
    MR_Word ml_backend__ml_proc_gen__conv5_HeadVar__2_2;

    {
      ml_backend__ml_proc_gen__conv5_HeadVar__2_2 = ml_backend__mlds__wrap_function_defn_1_f_0(((MR_Word) ml_backend__ml_proc_gen__wrapper_arg_1));
    }
    ml_backend__ml_proc_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_proc_gen__conv5_HeadVar__2_2));
    return ml_backend__ml_proc_gen__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_code_gen_3_p_0_4(
  MR_Box ml_backend__ml_proc_gen__closure_arg,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1)
{
  {
    MR_Box ml_backend__ml_proc_gen__wrapper_arg_2;
    MR_Box ml_backend__ml_proc_gen__closure = ml_backend__ml_proc_gen__closure_arg;
    MR_Word ml_backend__ml_proc_gen__conv4_Imports_7;

    {
      ml_backend__ml_proc_gen__conv4_Imports_7 = ml_backend__ml_proc_gen__foreign_type_required_imports_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_proc_gen__wrapper_arg_1));
    }
    ml_backend__ml_proc_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_proc_gen__conv4_Imports_7));
    return ml_backend__ml_proc_gen__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_code_gen_3_p_0_3(
  MR_Box ml_backend__ml_proc_gen__closure_arg,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1)
{
  {
    MR_Box ml_backend__ml_proc_gen__wrapper_arg_2;
    MR_Box ml_backend__ml_proc_gen__closure = ml_backend__ml_proc_gen__closure_arg;
    MR_Word ml_backend__ml_proc_gen__conv3_LambdaHeadVar__2_16;

    {
      ml_backend__ml_proc_gen__conv3_LambdaHeadVar__2_16 = ml_backend__ml_proc_gen__IntroducedFrom__func__ml_gen_imports__150__1_1_f_0(((MR_Word) ml_backend__ml_proc_gen__wrapper_arg_1));
    }
    ml_backend__ml_proc_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_proc_gen__conv3_LambdaHeadVar__2_16));
    return ml_backend__ml_proc_gen__wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_code_gen_3_p_0_2(
  MR_Box ml_backend__ml_proc_gen__closure_arg,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_2,
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_3)
{
  {
    MR_Box ml_backend__ml_proc_gen__closure = ml_backend__ml_proc_gen__closure_arg;
    MR_Word ml_backend__ml_proc_gen__conv1_STATE_VARIABLE_Map_25;

    {
      ml_backend__ml_proc_gen__ml_gen_foreign_code_lang_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 7))), ((MR_Word) ml_backend__ml_proc_gen__wrapper_arg_1), ((MR_Word) ml_backend__ml_proc_gen__wrapper_arg_2), &ml_backend__ml_proc_gen__conv1_STATE_VARIABLE_Map_25);
    }
    *ml_backend__ml_proc_gen__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_proc_gen__conv1_STATE_VARIABLE_Map_25));
  }
}

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_code_gen_3_p_0_1(
  MR_Box ml_backend__ml_proc_gen__closure_arg,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1)
{
  {
    MR_Box ml_backend__ml_proc_gen__wrapper_arg_2;
    MR_Box ml_backend__ml_proc_gen__closure = ml_backend__ml_proc_gen__closure_arg;
    MR_Word ml_backend__ml_proc_gen__conv0_HeadVar__3_3;

    {
      ml_backend__ml_proc_gen__conv0_HeadVar__3_3 = parse_tree__prog_data_foreign__get_lang_foreign_import_module_infos_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_proc_gen__wrapper_arg_1));
    }
    ml_backend__ml_proc_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_proc_gen__conv0_HeadVar__3_3));
    return ml_backend__ml_proc_gen__wrapper_arg_2;
  }
}

void MR_CALL 
ml_backend__ml_proc_gen__ml_code_gen_3_p_0(
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_17,
  MR_Word * ml_backend__ml_proc_gen__MLDS_5)
{
  {
    MR_bool ml_backend__ml_proc_gen__succeeded;
    MR_Word ml_backend__ml_proc_gen__TypeCtorInfo_23_45;
    MR_Word ml_backend__ml_proc_gen__TypeCtorInfo_24_46;
    MR_Word ml_backend__ml_proc_gen__TypeCtorInfo_24_76;
    MR_Word ml_backend__ml_proc_gen__TypeCtorInfo_25_77;
    MR_Word ml_backend__ml_proc_gen__ModuleName_6;
    MR_Word ml_backend__ml_proc_gen__ForeignCode_7;
    MR_Word ml_backend__ml_proc_gen__Imports_8;
    MR_Word ml_backend__ml_proc_gen__TypeDefns_9;
    MR_Word ml_backend__ml_proc_gen__TableStructDefns_10;
    MR_Word ml_backend__ml_proc_gen__PredDefns_11;
    MR_Word ml_backend__ml_proc_gen__GlobalData_12;
    MR_Word ml_backend__ml_proc_gen__ExportedEnums_13;
    MR_Word ml_backend__ml_proc_gen__InitPreds_14;
    MR_Word ml_backend__ml_proc_gen__FinalPreds_15;
    MR_Word ml_backend__ml_proc_gen__Var_19;
    MR_Word ml_backend__ml_proc_gen__ForeignDeclCodeCord_27;
    MR_Word ml_backend__ml_proc_gen__ForeignBodyCodeCord_28;
    MR_Word ml_backend__ml_proc_gen__ForeignImportModules_29;
    MR_Word ml_backend__ml_proc_gen__ForeignExportsCord_30;
    MR_Word ml_backend__ml_proc_gen__ForeignDeclCodes_31;
    MR_Word ml_backend__ml_proc_gen__ForeignBodyCodes_32;
    MR_Word ml_backend__ml_proc_gen__ForeignExports_33;
    MR_Word ml_backend__ml_proc_gen__Globals_34;
    MR_Word ml_backend__ml_proc_gen__BackendForeignLanguages_35;
    MR_Word ml_backend__ml_proc_gen__WantedForeignImports_36;
    MR_Word ml_backend__ml_proc_gen__Var_37;
    MR_Word ml_backend__ml_proc_gen__Var_38;
    MR_Word ml_backend__ml_proc_gen__Var_39;
    MR_Word ml_backend__ml_proc_gen__Var_40;
    MR_Word ml_backend__ml_proc_gen__Var_41;
    MR_Word ml_backend__ml_proc_gen__Globals_57;
    MR_Word ml_backend__ml_proc_gen__Target_58;
    MR_Word ml_backend__ml_proc_gen__AllImports0_59;
    MR_Word ml_backend__ml_proc_gen__ThisModule_60;
    MR_Word ml_backend__ml_proc_gen__AllImports_61;
    MR_Word ml_backend__ml_proc_gen__TypeTable_64;
    MR_Word ml_backend__ml_proc_gen__TypeCtorsDefns_65;
    MR_Word ml_backend__ml_proc_gen__ForeignTypeImports_66;
    MR_Word ml_backend__ml_proc_gen__Var_71;
    MR_Word ml_backend__ml_proc_gen__Var_72;
    MR_Word ml_backend__ml_proc_gen__Var_73;
    MR_Word ml_backend__ml_proc_gen__Var_74;
    MR_Box ml_backend__ml_proc_gen__conv2_ForeignCode_7;

    {
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_16, &ml_backend__ml_proc_gen__ModuleName_6);
    }
    {
      hlds__hlds_module__module_info_get_foreign_decl_codes_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_16, &ml_backend__ml_proc_gen__ForeignDeclCodeCord_27);
    }
    {
      hlds__hlds_module__module_info_get_foreign_body_codes_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_16, &ml_backend__ml_proc_gen__ForeignBodyCodeCord_28);
    }
    {
      hlds__hlds_module__module_info_get_foreign_import_modules_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_16, &ml_backend__ml_proc_gen__ForeignImportModules_29);
    }
    {
      hlds__hlds_module__module_info_get_pragma_exported_procs_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_16, &ml_backend__ml_proc_gen__ForeignExportsCord_30);
    }
    {
      ml_backend__ml_proc_gen__ForeignDeclCodes_31 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0, ml_backend__ml_proc_gen__ForeignDeclCodeCord_27);
    }
    {
      ml_backend__ml_proc_gen__ForeignBodyCodes_32 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0, ml_backend__ml_proc_gen__ForeignBodyCodeCord_28);
    }
    {
      ml_backend__ml_proc_gen__ForeignExports_33 = mercury__cord__list_1_f_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0, ml_backend__ml_proc_gen__ForeignExportsCord_30);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_16, &ml_backend__ml_proc_gen__Globals_34);
    }
    {
      libs__globals__get_backend_foreign_languages_2_p_0(ml_backend__ml_proc_gen__Globals_34, &ml_backend__ml_proc_gen__BackendForeignLanguages_35);
    }
    ml_backend__ml_proc_gen__TypeCtorInfo_23_45 = (MR_Word) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0;
    ml_backend__ml_proc_gen__TypeCtorInfo_24_46 = (MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0;
    {
      ml_backend__ml_proc_gen__Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_39, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_3[3]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_39, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_code_gen_3_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_39, 3) = ((MR_Box) (ml_backend__ml_proc_gen__ForeignImportModules_29));
    }
    {
      ml_backend__ml_proc_gen__Var_38 = mercury__list__map_2_f_0(ml_backend__ml_proc_gen__TypeCtorInfo_24_46, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[0], ml_backend__ml_proc_gen__Var_39, ml_backend__ml_proc_gen__BackendForeignLanguages_35);
    }
    {
      ml_backend__ml_proc_gen__Var_37 = mercury__set__union_list_1_f_0(ml_backend__ml_proc_gen__TypeCtorInfo_23_45, ml_backend__ml_proc_gen__Var_38);
    }
    {
      ml_backend__ml_proc_gen__WantedForeignImports_36 = mercury__set__to_sorted_list_1_f_0(ml_backend__ml_proc_gen__TypeCtorInfo_23_45, ml_backend__ml_proc_gen__Var_37);
    }
    {
      ml_backend__ml_proc_gen__Var_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_40, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_40, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_code_gen_3_p_0_2));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_40, 3) = ((MR_Box) (ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_16));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_40, 4) = ((MR_Box) (ml_backend__ml_proc_gen__ForeignDeclCodes_31));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_40, 5) = ((MR_Box) (ml_backend__ml_proc_gen__ForeignBodyCodes_32));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_40, 6) = ((MR_Box) (ml_backend__ml_proc_gen__WantedForeignImports_36));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_40, 7) = ((MR_Box) (ml_backend__ml_proc_gen__ForeignExports_33));
    }
    {
      ml_backend__ml_proc_gen__Var_41 = mercury__map__init_0_f_0(ml_backend__ml_proc_gen__TypeCtorInfo_24_46, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_foreign_code_0);
    }
    {
      mercury__list__foldl_4_p_0(ml_backend__ml_proc_gen__TypeCtorInfo_24_46, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[0], ml_backend__ml_proc_gen__Var_40, ml_backend__ml_proc_gen__BackendForeignLanguages_35, ((MR_Box) (ml_backend__ml_proc_gen__Var_41)), &ml_backend__ml_proc_gen__conv2_ForeignCode_7);
    }
    ml_backend__ml_proc_gen__ForeignCode_7 = ((MR_Word) ml_backend__ml_proc_gen__conv2_ForeignCode_7);
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_16, &ml_backend__ml_proc_gen__Globals_57);
    }
    {
      libs__globals__get_target_2_p_0(ml_backend__ml_proc_gen__Globals_57, &ml_backend__ml_proc_gen__Target_58);
    }
    {
      hlds__hlds_module__module_info_get_all_deps_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_16, &ml_backend__ml_proc_gen__AllImports0_59);
    }
    {
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_16, &ml_backend__ml_proc_gen__ThisModule_60);
    }
    ml_backend__ml_proc_gen__TypeCtorInfo_24_76 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    {
      ml_backend__ml_proc_gen__AllImports_61 = mercury__set__delete_2_f_0(ml_backend__ml_proc_gen__TypeCtorInfo_24_76, ml_backend__ml_proc_gen__AllImports0_59, ((MR_Box) (ml_backend__ml_proc_gen__ThisModule_60)));
    }
    {
      hlds__hlds_module__module_info_get_type_table_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_16, &ml_backend__ml_proc_gen__TypeTable_64);
    }
    {
      hlds__hlds_data__get_all_type_ctor_defns_2_p_0(ml_backend__ml_proc_gen__TypeTable_64, &ml_backend__ml_proc_gen__TypeCtorsDefns_65);
    }
    ml_backend__ml_proc_gen__TypeCtorInfo_25_77 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_import_0;
    {
      ml_backend__ml_proc_gen__Var_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_72, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_3[4]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_72, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_code_gen_3_p_0_4));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_72, 3) = ((MR_Box) (ml_backend__ml_proc_gen__Target_58));
    }
    {
      ml_backend__ml_proc_gen__Var_71 = mercury__list__map_2_f_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[1], (MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[1], ml_backend__ml_proc_gen__Var_72, ml_backend__ml_proc_gen__TypeCtorsDefns_65);
    }
    {
      ml_backend__ml_proc_gen__ForeignTypeImports_66 = mercury__list__condense_1_f_0(ml_backend__ml_proc_gen__TypeCtorInfo_25_77, ml_backend__ml_proc_gen__Var_71);
    }
    {
      ml_backend__ml_proc_gen__Var_74 = mercury__set__to_sorted_list_1_f_0(ml_backend__ml_proc_gen__TypeCtorInfo_24_76, ml_backend__ml_proc_gen__AllImports_61);
    }
    {
      ml_backend__ml_proc_gen__Var_73 = mercury__list__map_2_f_0(ml_backend__ml_proc_gen__TypeCtorInfo_24_76, ml_backend__ml_proc_gen__TypeCtorInfo_25_77, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[5], ml_backend__ml_proc_gen__Var_74);
    }
    {
      ml_backend__ml_proc_gen__Imports_8 = mercury__list__f_43_43_2_f_0(ml_backend__ml_proc_gen__TypeCtorInfo_25_77, ml_backend__ml_proc_gen__ForeignTypeImports_66, ml_backend__ml_proc_gen__Var_73);
    }
    {
      ml_backend__ml_proc_gen__ml_gen_defns_6_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_16, ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_17, &ml_backend__ml_proc_gen__TypeDefns_9, &ml_backend__ml_proc_gen__TableStructDefns_10, &ml_backend__ml_proc_gen__PredDefns_11, &ml_backend__ml_proc_gen__GlobalData_12);
    }
    {
      ml_backend__ml_type_gen__ml_gen_exported_enums_2_p_0(*ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_17, &ml_backend__ml_proc_gen__ExportedEnums_13);
    }
    {
      hlds__hlds_module__module_info_user_init_pred_c_names_2_p_0(*ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_17, &ml_backend__ml_proc_gen__InitPreds_14);
    }
    {
      hlds__hlds_module__module_info_user_final_pred_c_names_2_p_0(*ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_17, &ml_backend__ml_proc_gen__FinalPreds_15);
    }
    {
      ml_backend__ml_proc_gen__Var_19 = mercury__list__map_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[6], ml_backend__ml_proc_gen__PredDefns_11);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_proc_gen__MLDS_5 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_proc_gen__ModuleName_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ForeignCode_7));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_proc_gen__Imports_8));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_proc_gen__GlobalData_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_proc_gen__TypeDefns_9));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_proc_gen__TableStructDefns_10));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_proc_gen__Var_19));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_proc_gen__InitPreds_14));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_proc_gen__FinalPreds_15));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ml_backend__ml_proc_gen__ExportedEnums_13));
    }
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_defns_6_p_0_3(
  MR_Box ml_backend__ml_proc_gen__closure_arg,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_2,
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_3)
{
  {
    MR_Box ml_backend__ml_proc_gen__closure = ml_backend__ml_proc_gen__closure_arg;
    MR_Word ml_backend__ml_proc_gen__conv0_STATE_VARIABLE_DataDefns_57;

    {
      ml_backend__ml_proc_gen__ml_gen_add_table_var_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_proc_gen__wrapper_arg_1), ((MR_Word) ml_backend__ml_proc_gen__wrapper_arg_2), &ml_backend__ml_proc_gen__conv0_STATE_VARIABLE_DataDefns_57);
    }
    *ml_backend__ml_proc_gen__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_proc_gen__conv0_STATE_VARIABLE_DataDefns_57));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__ml_gen_defns_6_p_0_2(
  MR_Box ml_backend__ml_proc_gen__closure_arg)
{
  {
    MR_bool ml_backend__ml_proc_gen__succeeded;
    MR_Box ml_backend__ml_proc_gen__closure = ml_backend__ml_proc_gen__closure_arg;

    {
      ml_backend__ml_proc_gen__succeeded = ml_backend__ml_proc_gen__IntroducedFrom__pred__ml_gen_table_structs__759__2_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 4))));
    }
    return ml_backend__ml_proc_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__ml_gen_defns_6_p_0_1(
  MR_Box ml_backend__ml_proc_gen__closure_arg,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1)
{
  {
    MR_bool ml_backend__ml_proc_gen__succeeded;
    MR_Box ml_backend__ml_proc_gen__closure = ml_backend__ml_proc_gen__closure_arg;

    {
      ml_backend__ml_proc_gen__succeeded = ml_backend__ml_proc_gen__IntroducedFrom__pred__ml_gen_table_structs__759__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_proc_gen__wrapper_arg_1));
    }
    return ml_backend__ml_proc_gen__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_defns_6_p_0(
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_13,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_14,
  MR_Word * ml_backend__ml_proc_gen__TypeDefns_8,
  MR_Word * ml_backend__ml_proc_gen__TableStructDefns_9,
  MR_Word * ml_backend__ml_proc_gen__PredDefns_10,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_15)
{
  {
    MR_bool ml_backend__ml_proc_gen__succeeded;
    MR_Word ml_backend__ml_proc_gen__TypeCtorInfo_29_75;
    MR_Word ml_backend__ml_proc_gen__ConstStructMap_12;
    MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_16_16;
    MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_17_17;
    MR_Word ml_backend__ml_proc_gen__TableStructMap_22;
    MR_Word ml_backend__ml_proc_gen__TableStructs_23;
    MR_Word ml_backend__ml_proc_gen__Globals_47;
    MR_Word ml_backend__ml_proc_gen__Target_48;
    MR_Word ml_backend__ml_proc_gen__UseCommonCells_49;
    MR_Word ml_backend__ml_proc_gen__UnboxedFloats_50;
    MR_Word ml_backend__ml_proc_gen__HaveUnboxedFloats_51;
    MR_Word ml_backend__ml_proc_gen__PredTable_61;
    MR_Word ml_backend__ml_proc_gen__PredIdInfos_62;
    MR_Word ml_backend__ml_proc_gen__PredProcIds_63;
    MR_Word ml_backend__ml_proc_gen__SortedPredProcIds_64;
    MR_Word ml_backend__ml_proc_gen__CodeGenPredProcIds_65;
    MR_Word ml_backend__ml_proc_gen__DepInfo_66;
    MR_Word ml_backend__ml_proc_gen__BottomUpSCCs_67;

    {
      ml_backend__ml_type_gen__ml_gen_types_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_13, ml_backend__ml_proc_gen__TypeDefns_8);
    }
    {
      hlds__hlds_module__module_info_get_table_struct_map_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_13, &ml_backend__ml_proc_gen__TableStructMap_22);
    }
    {
      mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0, ml_backend__ml_proc_gen__TableStructMap_22, &ml_backend__ml_proc_gen__TableStructs_23);
    }
    if ((ml_backend__ml_proc_gen__TableStructs_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ml_backend__ml_proc_gen__TableStructDefns_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word ml_backend__ml_proc_gen__Globals_26;
        MR_Word ml_backend__ml_proc_gen__GC_Method_27;
        MR_Word ml_backend__ml_proc_gen__Var_28;
        MR_Word ml_backend__ml_proc_gen__Var_33;
        MR_Box ml_backend__ml_proc_gen__conv1_TableStructDefns_9;

        {
          hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_13, &ml_backend__ml_proc_gen__Globals_26);
        }
        {
          libs__globals__get_gc_method_2_p_0(ml_backend__ml_proc_gen__Globals_26, &ml_backend__ml_proc_gen__GC_Method_27);
        }
        {
          ml_backend__ml_proc_gen__Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_28, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_6[2]));
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_28, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_defns_6_p_0_2));
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_28, 3) = ((MR_Box) (ml_backend__ml_proc_gen__GC_Method_27));
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_28, 4) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_7[0]));
        }
        {
          mercury__require__expect_3_p_0(ml_backend__ml_proc_gen__Var_28, (MR_String) "predicate \140ml_backend.ml_proc_gen.ml_gen_table_structs\'/2", (MR_String) "tabling and \140--gc accurate\'");
        }
        {
          ml_backend__ml_proc_gen__Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_33, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_8[0]));
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_33, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_defns_6_p_0_3));
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_33, 3) = ((MR_Box) (ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_13));
        }
        {
          mercury__list__foldl_4_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[2], (MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[4], ml_backend__ml_proc_gen__Var_33, ml_backend__ml_proc_gen__TableStructs_23, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &ml_backend__ml_proc_gen__conv1_TableStructDefns_9);
        }
        *ml_backend__ml_proc_gen__TableStructDefns_9 = ((MR_Word) ml_backend__ml_proc_gen__conv1_TableStructDefns_9);
      }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_13, &ml_backend__ml_proc_gen__Globals_47);
    }
    {
      libs__globals__get_target_2_p_0(ml_backend__ml_proc_gen__Globals_47, &ml_backend__ml_proc_gen__Target_48);
    }
    ml_backend__ml_proc_gen__UseCommonCells_49 = ((&ml_backend__ml_proc_gen_vector_common_9[0 + ml_backend__ml_proc_gen__Target_48]))->ml_backend__ml_proc_gen__vector_common_type_9_0__vct_9_f_0;
    {
      libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_proc_gen__Globals_47, (MR_Integer) 253, &ml_backend__ml_proc_gen__UnboxedFloats_50);
    }
    switch (ml_backend__ml_proc_gen__UnboxedFloats_50) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ml_backend__ml_proc_gen__HaveUnboxedFloats_51 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        ml_backend__ml_proc_gen__HaveUnboxedFloats_51 = (MR_Integer) 0;
        break;
    }
    {
      ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_16_16 = ml_backend__ml_global_data__ml_global_data_init_2_f_0(ml_backend__ml_proc_gen__UseCommonCells_49, ml_backend__ml_proc_gen__HaveUnboxedFloats_51);
    }
    {
      ml_backend__ml_unify_gen__ml_gen_const_structs_4_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_13, &ml_backend__ml_proc_gen__ConstStructMap_12, ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_16_16, &ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_17_17);
    }
    {
      hlds__hlds_module__module_info_get_preds_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_13, &ml_backend__ml_proc_gen__PredTable_61);
    }
    {
      mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, ml_backend__ml_proc_gen__PredTable_61, &ml_backend__ml_proc_gen__PredIdInfos_62);
    }
    {
      ml_backend__ml_proc_gen__ml_find_procs_for_code_gen_3_p_0(ml_backend__ml_proc_gen__PredIdInfos_62, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ml_backend__ml_proc_gen__PredProcIds_63);
    }
    ml_backend__ml_proc_gen__TypeCtorInfo_29_75 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
    {
      mercury__list__sort_2_p_0(ml_backend__ml_proc_gen__TypeCtorInfo_29_75, ml_backend__ml_proc_gen__PredProcIds_63, &ml_backend__ml_proc_gen__SortedPredProcIds_64);
    }
    {
      mercury__set__sorted_list_to_set_2_p_0(ml_backend__ml_proc_gen__TypeCtorInfo_29_75, ml_backend__ml_proc_gen__SortedPredProcIds_64, &ml_backend__ml_proc_gen__CodeGenPredProcIds_65);
    }
    {
      ml_backend__ml_proc_gen__DepInfo_66 = hlds__hlds_dependency_graph__build_proc_dependency_graph_3_f_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_13, ml_backend__ml_proc_gen__CodeGenPredProcIds_65, (MR_Integer) 1);
    }
    {
      ml_backend__ml_proc_gen__BottomUpSCCs_67 = libs__dependency_graph__dependency_info_get_bottom_up_sccs_1_f_0(ml_backend__ml_proc_gen__TypeCtorInfo_29_75, ml_backend__ml_proc_gen__DepInfo_66);
    }
    {
      ml_backend__ml_proc_gen__ml_gen_sccs_8_p_0(ml_backend__ml_proc_gen__ConstStructMap_12, ml_backend__ml_proc_gen__BottomUpSCCs_67, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_proc_gen__PredDefns_10, ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_17_17, ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_15, ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_13, ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_14);
    }
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_sccs_8_p_0(
  MR_Word ml_backend__ml_proc_gen__ConstStructMap_1,
  MR_Word ml_backend__ml_proc_gen__HeadVar__2_2,
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_FunctionDefns_0_3,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_FunctionDefns_4,
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_0_5,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_6,
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_proc_gen__succeeded;

        if ((ml_backend__ml_proc_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_8 = ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_7;
            *ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_6 = ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_0_5;
            *ml_backend__ml_proc_gen__STATE_VARIABLE_FunctionDefns_4 = ml_backend__ml_proc_gen__STATE_VARIABLE_FunctionDefns_0_3;
          }
        else
          {
            MR_Word ml_backend__ml_proc_gen__SCC_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word ml_backend__ml_proc_gen__SCCs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_FunctionDefns_31_31;
            MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_32_32;
            MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_33_33;
            MR_Word ml_backend__ml_proc_gen__PredProcIds_48;

            {
              mercury__set__to_sorted_list_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ml_backend__ml_proc_gen__SCC_20, &ml_backend__ml_proc_gen__PredProcIds_48);
            }
            {
              ml_backend__ml_proc_gen__ml_gen_procs_8_p_0(ml_backend__ml_proc_gen__ConstStructMap_1, ml_backend__ml_proc_gen__PredProcIds_48, ml_backend__ml_proc_gen__STATE_VARIABLE_FunctionDefns_0_3, &ml_backend__ml_proc_gen__STATE_VARIABLE_FunctionDefns_31_31, ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_0_5, &ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_32_32, ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_7, &ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_33_33);
            }
            /* direct tailcall eliminated */
            {
              MR_Word ml_backend__ml_proc_gen__next_value_of_HeadVar__2_2 = ml_backend__ml_proc_gen__SCCs_21;
              MR_Word ml_backend__ml_proc_gen__next_value_of_STATE_VARIABLE_FunctionDefns_0_3 = ml_backend__ml_proc_gen__STATE_VARIABLE_FunctionDefns_31_31;
              MR_Word ml_backend__ml_proc_gen__next_value_of_STATE_VARIABLE_GlobalData_0_5 = ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_32_32;
              MR_Word ml_backend__ml_proc_gen__next_value_of_STATE_VARIABLE_ModuleInfo_0_7 = ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_33_33;

              ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_7 = ml_backend__ml_proc_gen__next_value_of_STATE_VARIABLE_ModuleInfo_0_7;
              ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_0_5 = ml_backend__ml_proc_gen__next_value_of_STATE_VARIABLE_GlobalData_0_5;
              ml_backend__ml_proc_gen__STATE_VARIABLE_FunctionDefns_0_3 = ml_backend__ml_proc_gen__next_value_of_STATE_VARIABLE_FunctionDefns_0_3;
              ml_backend__ml_proc_gen__HeadVar__2_2 = ml_backend__ml_proc_gen__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_procs_8_p_0(
  MR_Word ml_backend__ml_proc_gen__ConstStructMap_1,
  MR_Word ml_backend__ml_proc_gen__HeadVar__2_2,
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_FunctionDefns_0_3,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_FunctionDefns_4,
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_0_5,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_6,
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_proc_gen__succeeded;

        if ((ml_backend__ml_proc_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_8 = ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_7;
            *ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_6 = ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_0_5;
            *ml_backend__ml_proc_gen__STATE_VARIABLE_FunctionDefns_4 = ml_backend__ml_proc_gen__STATE_VARIABLE_FunctionDefns_0_3;
          }
        else
          {
            MR_Word ml_backend__ml_proc_gen__PredProcId_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word ml_backend__ml_proc_gen__PredProcIds_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_FunctionDefns_31_31;
            MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_32_32;
            MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_33_33;

            {
              ml_backend__ml_proc_gen__ml_gen_proc_8_p_0(ml_backend__ml_proc_gen__ConstStructMap_1, ml_backend__ml_proc_gen__PredProcId_20, ml_backend__ml_proc_gen__STATE_VARIABLE_FunctionDefns_0_3, &ml_backend__ml_proc_gen__STATE_VARIABLE_FunctionDefns_31_31, ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_0_5, &ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_32_32, ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_7, &ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_33_33);
            }
            /* direct tailcall eliminated */
            {
              MR_Word ml_backend__ml_proc_gen__next_value_of_HeadVar__2_2 = ml_backend__ml_proc_gen__PredProcIds_21;
              MR_Word ml_backend__ml_proc_gen__next_value_of_STATE_VARIABLE_FunctionDefns_0_3 = ml_backend__ml_proc_gen__STATE_VARIABLE_FunctionDefns_31_31;
              MR_Word ml_backend__ml_proc_gen__next_value_of_STATE_VARIABLE_GlobalData_0_5 = ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_32_32;
              MR_Word ml_backend__ml_proc_gen__next_value_of_STATE_VARIABLE_ModuleInfo_0_7 = ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_33_33;

              ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_7 = ml_backend__ml_proc_gen__next_value_of_STATE_VARIABLE_ModuleInfo_0_7;
              ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_0_5 = ml_backend__ml_proc_gen__next_value_of_STATE_VARIABLE_GlobalData_0_5;
              ml_backend__ml_proc_gen__STATE_VARIABLE_FunctionDefns_0_3 = ml_backend__ml_proc_gen__next_value_of_STATE_VARIABLE_FunctionDefns_0_3;
              ml_backend__ml_proc_gen__HeadVar__2_2 = ml_backend__ml_proc_gen__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_8_p_0_1(
  MR_Box ml_backend__ml_proc_gen__closure_arg,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1)
{
  {
    MR_Box ml_backend__ml_proc_gen__wrapper_arg_2;
    MR_Box ml_backend__ml_proc_gen__closure = ml_backend__ml_proc_gen__closure_arg;
    MR_Word ml_backend__ml_proc_gen__conv0_HeadVar__2_2;

    {
      ml_backend__ml_proc_gen__conv0_HeadVar__2_2 = ml_backend__mlds__wrap_data_defn_1_f_0(((MR_Word) ml_backend__ml_proc_gen__wrapper_arg_1));
    }
    ml_backend__ml_proc_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_proc_gen__conv0_HeadVar__2_2));
    return ml_backend__ml_proc_gen__wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_8_p_0(
  MR_Word ml_backend__ml_proc_gen__ConstStructMap_9,
  MR_Word ml_backend__ml_proc_gen__PredProcId_10,
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_FunctionDefns_0_59,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_FunctionDefns_60,
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_0_61,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_62,
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_63,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_64)
{
  {
    MR_bool ml_backend__ml_proc_gen__succeeded;
    MR_Word ml_backend__ml_proc_gen__PredId_15;
    MR_Integer ml_backend__ml_proc_gen__ProcId_16;
    MR_Word ml_backend__ml_proc_gen__PredInfo_17;
    MR_Word ml_backend__ml_proc_gen__ProcInfo0_18;
    MR_Word ml_backend__ml_proc_gen__ProcInfo_19;
    MR_Word ml_backend__ml_proc_gen__PredStatus_20;
    MR_Word ml_backend__ml_proc_gen__ArgTypes_21;
    MR_Word ml_backend__ml_proc_gen__CodeModel_22;
    MR_Word ml_backend__ml_proc_gen__HeadVars_23;
    MR_Word ml_backend__ml_proc_gen__Modes_24;
    MR_Word ml_backend__ml_proc_gen__Goal_25;
    MR_Word ml_backend__ml_proc_gen__GoalInfo_27;
    MR_Word ml_backend__ml_proc_gen__Context_28;
    MR_Word ml_backend__ml_proc_gen__FunctionBody_31;
    MR_Word ml_backend__ml_proc_gen__ExtraDefns_32;
    MR_Word ml_backend__ml_proc_gen__MLDS_Params_33;
    MR_Word ml_backend__ml_proc_gen__EnvVarNames_48;
    MR_Word ml_backend__ml_proc_gen__ProcContext_49;
    MR_Word ml_backend__ml_proc_gen__PlainFuncName_51;
    MR_Word ml_backend__ml_proc_gen__DeclFlags_52;
    MR_Word ml_backend__ml_proc_gen__MaybePredProcId_53;
    MR_Word ml_backend__ml_proc_gen__MaybeRequireTailrecInfo_54;
    MR_Word ml_backend__ml_proc_gen__Attributes_55;
    MR_Word ml_backend__ml_proc_gen__AttributeList_56;
    MR_Word ml_backend__ml_proc_gen__MLDS_Attributes_57;
    MR_Word ml_backend__ml_proc_gen__FunctionDefn_58;
    MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Info_70_70;
    MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Info_77_77;
    MR_Word ml_backend__ml_proc_gen__Var_81;
    MR_Word ml_backend__ml_proc_gen__Var_83;
    MR_Word ml_backend__ml_proc_gen__PredInfo_93;
    MR_Word ml_backend__ml_proc_gen__Access_94;
    MR_Word ml_backend__ml_proc_gen___GoalExpr_26;
    MR_Word ml_backend__ml_proc_gen__Var_71;
    MR_Word ml_backend__ml_proc_gen__Var_30;
    MR_Word ml_backend__ml_proc_gen___ModuleName_50;

    {
      hlds__passes_aux__write_proc_progress_message_5_p_0((MR_String) "% Generating MLDS code for ", ml_backend__ml_proc_gen__PredProcId_10, ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_63);
    }
    ml_backend__ml_proc_gen__PredId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__PredProcId_10, (MR_Integer) 0)));
    ml_backend__ml_proc_gen__ProcId_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__PredProcId_10, (MR_Integer) 1)));
    {
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_63, ml_backend__ml_proc_gen__PredId_15, ml_backend__ml_proc_gen__ProcId_16, &ml_backend__ml_proc_gen__PredInfo_17, &ml_backend__ml_proc_gen__ProcInfo0_18);
    }
    {
      hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, ml_backend__ml_proc_gen__ProcInfo0_18, &ml_backend__ml_proc_gen__ProcInfo_19);
    }
    {
      hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(ml_backend__ml_proc_gen__PredId_15, ml_backend__ml_proc_gen__ProcId_16, ml_backend__ml_proc_gen__PredInfo_17, ml_backend__ml_proc_gen__ProcInfo_19, ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_63, ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_64);
    }
    {
      hlds__hlds_pred__pred_info_get_status_2_p_0(ml_backend__ml_proc_gen__PredInfo_17, &ml_backend__ml_proc_gen__PredStatus_20);
    }
    {
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(ml_backend__ml_proc_gen__PredInfo_17, &ml_backend__ml_proc_gen__ArgTypes_21);
    }
    {
      ml_backend__ml_proc_gen__CodeModel_22 = hlds__code_model__proc_info_interface_code_model_1_f_0(ml_backend__ml_proc_gen__ProcInfo_19);
    }
    {
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ml_backend__ml_proc_gen__ProcInfo_19, &ml_backend__ml_proc_gen__HeadVars_23);
    }
    {
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ml_backend__ml_proc_gen__ProcInfo_19, &ml_backend__ml_proc_gen__Modes_24);
    }
    {
      hlds__hlds_pred__proc_info_get_goal_2_p_0(ml_backend__ml_proc_gen__ProcInfo_19, &ml_backend__ml_proc_gen__Goal_25);
    }
    ml_backend__ml_proc_gen___GoalExpr_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Goal_25, (MR_Integer) 0)));
    ml_backend__ml_proc_gen__GoalInfo_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Goal_25, (MR_Integer) 1)));
    {
      ml_backend__ml_proc_gen__Context_28 = hlds__hlds_goal__goal_info_get_context_1_f_0(ml_backend__ml_proc_gen__GoalInfo_27);
    }
    {
      ml_backend__ml_proc_gen__STATE_VARIABLE_Info_70_70 = ml_backend__ml_gen_info__ml_gen_info_init_6_f_0(*ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_64, ml_backend__ml_proc_gen__ConstStructMap_9, ml_backend__ml_proc_gen__PredId_15, ml_backend__ml_proc_gen__ProcId_16, ml_backend__ml_proc_gen__ProcInfo_19, ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_0_61);
    }
    ml_backend__ml_proc_gen__Var_71 = (MR_Word) ml_backend__ml_proc_gen__PredStatus_20;
    ml_backend__ml_proc_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_proc_gen__Var_71)) == (MR_mktag((MR_Integer) 1)));
    if (ml_backend__ml_proc_gen__succeeded)
      {
        ml_backend__ml_proc_gen__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_71, (MR_Integer) 0)));
        {
          MR_Word ml_backend__ml_proc_gen___Info_34;

          ml_backend__ml_proc_gen__FunctionBody_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          ml_backend__ml_proc_gen__ExtraDefns_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          {
            ml_backend__ml_code_util__ml_gen_proc_params_5_p_0(ml_backend__ml_proc_gen__PredId_15, ml_backend__ml_proc_gen__ProcId_16, &ml_backend__ml_proc_gen__MLDS_Params_33, ml_backend__ml_proc_gen__STATE_VARIABLE_Info_70_70, &ml_backend__ml_proc_gen___Info_34);
          }
          ml_backend__ml_proc_gen__STATE_VARIABLE_Info_77_77 = ml_backend__ml_proc_gen__STATE_VARIABLE_Info_70_70;
          *ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_62 = ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_0_61;
        }
      }
    else
      {
        MR_Word ml_backend__ml_proc_gen__TypeCtorInfo_84_84;
        MR_Word ml_backend__ml_proc_gen__CopiedOutputVars_35;
        MR_Word ml_backend__ml_proc_gen__OutputVarLocals_36;
        MR_Word ml_backend__ml_proc_gen__MLDS_LocalVars_42;
        MR_Word ml_backend__ml_proc_gen__TopFunctorModes_43;
        MR_Word ml_backend__ml_proc_gen__Defns0_44;
        MR_Word ml_backend__ml_proc_gen__Statements_45;
        MR_Word ml_backend__ml_proc_gen__Defns_46;
        MR_Word ml_backend__ml_proc_gen__Statement_47;
        MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Info_73_73;
        MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Info_74_74;
        MR_Word ml_backend__ml_proc_gen__Var_75;
        MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Info_76_76;
        MR_Word ml_backend__ml_proc_gen__Var_79;

        switch (ml_backend__ml_proc_gen__CodeModel_22) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              ml_backend__ml_proc_gen__ml_det_copy_out_vars_4_p_0(*ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_64, &ml_backend__ml_proc_gen__CopiedOutputVars_35, ml_backend__ml_proc_gen__STATE_VARIABLE_Info_70_70, &ml_backend__ml_proc_gen__STATE_VARIABLE_Info_73_73);
            }
            break;
          case (MR_Integer) 2:
            {
              ml_backend__ml_proc_gen__ml_set_up_initial_succ_cont_4_p_0(*ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_64, &ml_backend__ml_proc_gen__CopiedOutputVars_35, ml_backend__ml_proc_gen__STATE_VARIABLE_Info_70_70, &ml_backend__ml_proc_gen__STATE_VARIABLE_Info_73_73);
            }
            break;
        }
        if ((ml_backend__ml_proc_gen__CopiedOutputVars_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            ml_backend__ml_proc_gen__OutputVarLocals_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            ml_backend__ml_proc_gen__STATE_VARIABLE_Info_74_74 = ml_backend__ml_proc_gen__STATE_VARIABLE_Info_73_73;
          }
        else
          {
            MR_Word ml_backend__ml_proc_gen__VarSet_39;
            MR_Word ml_backend__ml_proc_gen__VarTypes_40;
            MR_Word ml_backend__ml_proc_gen__UpdatedVarTypes_41;

            {
              hlds__hlds_pred__proc_info_get_varset_2_p_0(ml_backend__ml_proc_gen__ProcInfo_19, &ml_backend__ml_proc_gen__VarSet_39);
            }
            {
              hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ml_backend__ml_proc_gen__ProcInfo_19, &ml_backend__ml_proc_gen__VarTypes_40);
            }
            {
              hlds__vartypes__vartypes_overlay_corresponding_lists_4_p_0(ml_backend__ml_proc_gen__HeadVars_23, ml_backend__ml_proc_gen__ArgTypes_21, ml_backend__ml_proc_gen__VarTypes_40, &ml_backend__ml_proc_gen__UpdatedVarTypes_41);
            }
            {
              ml_backend__ml_code_gen__ml_gen_local_var_decls_7_p_0(ml_backend__ml_proc_gen__VarSet_39, ml_backend__ml_proc_gen__UpdatedVarTypes_41, ml_backend__ml_proc_gen__Context_28, ml_backend__ml_proc_gen__CopiedOutputVars_35, &ml_backend__ml_proc_gen__OutputVarLocals_36, ml_backend__ml_proc_gen__STATE_VARIABLE_Info_73_73, &ml_backend__ml_proc_gen__STATE_VARIABLE_Info_74_74);
            }
          }
        {
          ml_backend__ml_proc_gen__Var_75 = ml_backend__ml_code_util__ml_gen_succeeded_var_decl_1_f_0(ml_backend__ml_proc_gen__Context_28);
        }
        {
          ml_backend__ml_proc_gen__MLDS_LocalVars_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__MLDS_LocalVars_42, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_75));
          MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__MLDS_LocalVars_42, 1) = ((MR_Box) (ml_backend__ml_proc_gen__OutputVarLocals_36));
        }
        {
          check_hlds__mode_util__modes_to_top_functor_modes_4_p_0(*ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_64, ml_backend__ml_proc_gen__Modes_24, ml_backend__ml_proc_gen__ArgTypes_21, &ml_backend__ml_proc_gen__TopFunctorModes_43);
        }
        {
          ml_backend__ml_proc_gen__ml_gen_proc_body_10_p_0(ml_backend__ml_proc_gen__CodeModel_22, ml_backend__ml_proc_gen__HeadVars_23, ml_backend__ml_proc_gen__ArgTypes_21, ml_backend__ml_proc_gen__TopFunctorModes_43, ml_backend__ml_proc_gen__CopiedOutputVars_35, ml_backend__ml_proc_gen__Goal_25, &ml_backend__ml_proc_gen__Defns0_44, &ml_backend__ml_proc_gen__Statements_45, ml_backend__ml_proc_gen__STATE_VARIABLE_Info_74_74, &ml_backend__ml_proc_gen__STATE_VARIABLE_Info_76_76);
        }
        {
          ml_backend__ml_code_util__ml_gen_proc_params_5_p_0(ml_backend__ml_proc_gen__PredId_15, ml_backend__ml_proc_gen__ProcId_16, &ml_backend__ml_proc_gen__MLDS_Params_33, ml_backend__ml_proc_gen__STATE_VARIABLE_Info_76_76, &ml_backend__ml_proc_gen__STATE_VARIABLE_Info_77_77);
        }
        {
          ml_backend__ml_gen_info__ml_gen_info_get_closure_wrapper_defns_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_Info_77_77, &ml_backend__ml_proc_gen__ExtraDefns_32);
        }
        {
          ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_Info_77_77, ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_62);
        }
        ml_backend__ml_proc_gen__TypeCtorInfo_84_84 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
        {
          ml_backend__ml_proc_gen__Var_79 = mercury__list__map_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_defn_0, ml_backend__ml_proc_gen__TypeCtorInfo_84_84, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[4], ml_backend__ml_proc_gen__MLDS_LocalVars_42);
        }
        {
          ml_backend__ml_proc_gen__Defns_46 = mercury__list__f_43_43_2_f_0(ml_backend__ml_proc_gen__TypeCtorInfo_84_84, ml_backend__ml_proc_gen__Var_79, ml_backend__ml_proc_gen__Defns0_44);
        }
        {
          ml_backend__ml_proc_gen__Statement_47 = ml_backend__ml_code_util__ml_gen_block_3_f_0(ml_backend__ml_proc_gen__Defns_46, ml_backend__ml_proc_gen__Statements_45, ml_backend__ml_proc_gen__Context_28);
        }
        {
          ml_backend__ml_proc_gen__FunctionBody_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__FunctionBody_31, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Statement_47));
        }
      }
    {
      ml_backend__ml_gen_info__ml_gen_info_get_env_var_names_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_Info_77_77, &ml_backend__ml_proc_gen__EnvVarNames_48);
    }
    {
      hlds__hlds_pred__proc_info_get_context_2_p_0(ml_backend__ml_proc_gen__ProcInfo0_18, &ml_backend__ml_proc_gen__ProcContext_49);
    }
    {
      ml_backend__ml_code_util__ml_gen_proc_label_5_p_0(*ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_64, ml_backend__ml_proc_gen__PredId_15, ml_backend__ml_proc_gen__ProcId_16, &ml_backend__ml_proc_gen___ModuleName_50, &ml_backend__ml_proc_gen__PlainFuncName_51);
    }
    {
      hlds__hlds_module__module_info_pred_info_3_p_0(*ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_64, ml_backend__ml_proc_gen__PredId_15, &ml_backend__ml_proc_gen__PredInfo_93);
    }
    {
      ml_backend__ml_proc_gen__succeeded = hlds__hlds_pred__procedure_is_exported_3_p_0(*ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_64, ml_backend__ml_proc_gen__PredInfo_93, ml_backend__ml_proc_gen__ProcId_16);
    }
    if (ml_backend__ml_proc_gen__succeeded)
      ml_backend__ml_proc_gen__Access_94 = (MR_Integer) 0;
    else
      ml_backend__ml_proc_gen__Access_94 = (MR_Integer) 1;
    {
      ml_backend__ml_proc_gen__DeclFlags_52 = ml_backend__mlds__init_function_decl_flags_2_f_0(ml_backend__ml_proc_gen__Access_94, (MR_Integer) 0);
    }
    {
      ml_backend__ml_proc_gen__MaybePredProcId_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__MaybePredProcId_53, 0) = ((MR_Box) (ml_backend__ml_proc_gen__PredProcId_10));
    }
    {
      hlds__hlds_pred__proc_info_get_maybe_require_tailrec_info_2_p_0(ml_backend__ml_proc_gen__ProcInfo0_18, &ml_backend__ml_proc_gen__MaybeRequireTailrecInfo_54);
    }
    {
      hlds__hlds_pred__pred_info_get_attributes_2_p_0(ml_backend__ml_proc_gen__PredInfo_17, &ml_backend__ml_proc_gen__Attributes_55);
    }
    {
      hlds__hlds_pred__attributes_to_attribute_list_2_p_0(ml_backend__ml_proc_gen__Attributes_55, &ml_backend__ml_proc_gen__AttributeList_56);
    }
    {
      ml_backend__ml_proc_gen__MLDS_Attributes_57 = ml_backend__ml_proc_gen__attributes_to_mlds_attributes_2_f_0(*ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_64, ml_backend__ml_proc_gen__AttributeList_56);
    }
    ml_backend__ml_proc_gen__Var_81 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ml_backend__ml_proc_gen__PlainFuncName_51);
    {
      ml_backend__ml_proc_gen__FunctionDefn_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__FunctionDefn_58, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_81));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__FunctionDefn_58, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ProcContext_49));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__FunctionDefn_58, 2) = ((MR_Box) (ml_backend__ml_proc_gen__DeclFlags_52));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__FunctionDefn_58, 3) = ((MR_Box) (ml_backend__ml_proc_gen__MaybePredProcId_53));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__FunctionDefn_58, 4) = ((MR_Box) (ml_backend__ml_proc_gen__MLDS_Params_33));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__FunctionDefn_58, 5) = ((MR_Box) (ml_backend__ml_proc_gen__FunctionBody_31));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__FunctionDefn_58, 6) = ((MR_Box) (ml_backend__ml_proc_gen__MLDS_Attributes_57));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__FunctionDefn_58, 7) = ((MR_Box) (ml_backend__ml_proc_gen__EnvVarNames_48));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__FunctionDefn_58, 8) = ((MR_Box) (ml_backend__ml_proc_gen__MaybeRequireTailrecInfo_54));
    }
    {
      ml_backend__ml_proc_gen__Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_83, 0) = ((MR_Box) (ml_backend__ml_proc_gen__FunctionDefn_58));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_83, 1) = ((MR_Box) (ml_backend__ml_proc_gen__STATE_VARIABLE_FunctionDefns_0_59));
    }
    {
      *ml_backend__ml_proc_gen__STATE_VARIABLE_FunctionDefns_60 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0, ml_backend__ml_proc_gen__ExtraDefns_32, ml_backend__ml_proc_gen__Var_83);
    }
  }
}

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__attributes_to_mlds_attributes_2_f_0_1(
  MR_Box ml_backend__ml_proc_gen__closure_arg,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1)
{
  {
    MR_Box ml_backend__ml_proc_gen__wrapper_arg_2;
    MR_Box ml_backend__ml_proc_gen__closure = ml_backend__ml_proc_gen__closure_arg;
    MR_Word ml_backend__ml_proc_gen__conv0_HeadVar__3_3;

    {
      ml_backend__ml_proc_gen__conv0_HeadVar__3_3 = ml_backend__ml_proc_gen__attribute_to_mlds_attribute_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_proc_gen__wrapper_arg_1));
    }
    ml_backend__ml_proc_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_proc_gen__conv0_HeadVar__3_3));
    return ml_backend__ml_proc_gen__wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_proc_gen__attributes_to_mlds_attributes_2_f_0(
  MR_Word ml_backend__ml_proc_gen__ModuleInfo_4,
  MR_Word ml_backend__ml_proc_gen__Attrs_5)
{
  {
    MR_bool ml_backend__ml_proc_gen__succeeded;
    MR_Word ml_backend__ml_proc_gen__HeadVar__3_3;
    MR_Word ml_backend__ml_proc_gen__Var_6;

    {
      ml_backend__ml_proc_gen__Var_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_6, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_3[2]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_6, 1) = ((MR_Box) (ml_backend__ml_proc_gen__attributes_to_mlds_attributes_2_f_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_6, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_6, 3) = ((MR_Box) (ml_backend__ml_proc_gen__ModuleInfo_4));
    }
    {
      ml_backend__ml_proc_gen__HeadVar__3_3 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_attribute_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_attribute_0, ml_backend__ml_proc_gen__Var_6, ml_backend__ml_proc_gen__Attrs_5);
    }
    return ml_backend__ml_proc_gen__HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_body_10_p_0_3(
  MR_Box ml_backend__ml_proc_gen__closure_arg,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1)
{
  {
    MR_Box ml_backend__ml_proc_gen__wrapper_arg_2;
    MR_Box ml_backend__ml_proc_gen__closure = ml_backend__ml_proc_gen__closure_arg;
    MR_Word ml_backend__ml_proc_gen__conv6_HeadVar__2_2;

    {
      ml_backend__ml_proc_gen__conv6_HeadVar__2_2 = ml_backend__mlds__wrap_data_defn_1_f_0(((MR_Word) ml_backend__ml_proc_gen__wrapper_arg_1));
    }
    ml_backend__ml_proc_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_proc_gen__conv6_HeadVar__2_2));
    return ml_backend__ml_proc_gen__wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_body_10_p_0_2(
  MR_Box ml_backend__ml_proc_gen__closure_arg,
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_2,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_3,
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_4)
{
  {
    MR_Box ml_backend__ml_proc_gen__closure = ml_backend__ml_proc_gen__closure_arg;
    MR_Word ml_backend__ml_proc_gen__conv5_LambdaHeadVar__1_40;
    MR_Word ml_backend__ml_proc_gen__conv4_LambdaHeadVar__2_41;
    MR_Word ml_backend__ml_proc_gen__conv3_LambdaHeadVar__4_43;

    {
      ml_backend__ml_proc_gen__IntroducedFrom__pred__ml_gen_proc_body__633__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 5))), &ml_backend__ml_proc_gen__conv5_LambdaHeadVar__1_40, &ml_backend__ml_proc_gen__conv4_LambdaHeadVar__2_41, ((MR_Word) ml_backend__ml_proc_gen__wrapper_arg_3), &ml_backend__ml_proc_gen__conv3_LambdaHeadVar__4_43);
    }
    *ml_backend__ml_proc_gen__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_proc_gen__conv5_LambdaHeadVar__1_40));
    *ml_backend__ml_proc_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_proc_gen__conv4_LambdaHeadVar__2_41));
    *ml_backend__ml_proc_gen__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_proc_gen__conv3_LambdaHeadVar__4_43));
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_body_10_p_0_1(
  MR_Box ml_backend__ml_proc_gen__closure_arg,
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_2,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_3,
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_4)
{
  {
    MR_Box ml_backend__ml_proc_gen__closure = ml_backend__ml_proc_gen__closure_arg;
    MR_Word ml_backend__ml_proc_gen__conv2_HeadVar__3_3;
    MR_Word ml_backend__ml_proc_gen__conv1_HeadVar__4_4;
    MR_Word ml_backend__ml_proc_gen__conv0_HeadVar__6_6;

    {
      ml_backend__ml_code_gen__ml_gen_goal_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 4))), &ml_backend__ml_proc_gen__conv2_HeadVar__3_3, &ml_backend__ml_proc_gen__conv1_HeadVar__4_4, ((MR_Word) ml_backend__ml_proc_gen__wrapper_arg_3), &ml_backend__ml_proc_gen__conv0_HeadVar__6_6);
    }
    *ml_backend__ml_proc_gen__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_proc_gen__conv2_HeadVar__3_3));
    *ml_backend__ml_proc_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_proc_gen__conv1_HeadVar__4_4));
    *ml_backend__ml_proc_gen__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_proc_gen__conv0_HeadVar__6_6));
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_body_10_p_0(
  MR_Word ml_backend__ml_proc_gen__CodeModel_11,
  MR_Word ml_backend__ml_proc_gen__HeadVars_12,
  MR_Word ml_backend__ml_proc_gen__ArgTypes_13,
  MR_Word ml_backend__ml_proc_gen__TopFunctorModes_14,
  MR_Word ml_backend__ml_proc_gen__CopiedOutputVars_15,
  MR_Word ml_backend__ml_proc_gen__Goal_16,
  MR_Word * ml_backend__ml_proc_gen__Decls_17,
  MR_Word * ml_backend__ml_proc_gen__Statements_18,
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Info_0_36,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_Info_37)
{
  {
    MR_bool ml_backend__ml_proc_gen__succeeded;
    MR_Word ml_backend__ml_proc_gen__GoalInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Goal_16, (MR_Integer) 1)));
    MR_Word ml_backend__ml_proc_gen__Context_22;
    MR_Word ml_backend__ml_proc_gen__CopiedOutputVarOriginalLvals_23;
    MR_Word ml_backend__ml_proc_gen__ConvDecls_24;
    MR_Word ml_backend__ml_proc_gen__ConvInputStatements_25;
    MR_Word ml_backend__ml_proc_gen__ConvOutputStatements_26;
    MR_Word ml_backend__ml_proc_gen__Statements1_27;
    MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Info_38_38;
    MR_Word ml_backend__ml_proc_gen__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Goal_16, (MR_Integer) 0)));

    {
      ml_backend__ml_proc_gen__Context_22 = hlds__hlds_goal__goal_info_get_context_1_f_0(ml_backend__ml_proc_gen__GoalInfo_21);
    }
    {
      ml_backend__ml_code_util__ml_gen_var_list_3_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_Info_0_36, ml_backend__ml_proc_gen__CopiedOutputVars_15, &ml_backend__ml_proc_gen__CopiedOutputVarOriginalLvals_23);
    }
    {
      ml_backend__ml_proc_gen__ml_gen_convert_headvars_10_p_0(ml_backend__ml_proc_gen__HeadVars_12, ml_backend__ml_proc_gen__ArgTypes_13, ml_backend__ml_proc_gen__TopFunctorModes_14, ml_backend__ml_proc_gen__CopiedOutputVars_15, ml_backend__ml_proc_gen__Context_22, &ml_backend__ml_proc_gen__ConvDecls_24, &ml_backend__ml_proc_gen__ConvInputStatements_25, &ml_backend__ml_proc_gen__ConvOutputStatements_26, ml_backend__ml_proc_gen__STATE_VARIABLE_Info_0_36, &ml_backend__ml_proc_gen__STATE_VARIABLE_Info_38_38);
    }
    ml_backend__ml_proc_gen__succeeded = (ml_backend__ml_proc_gen__ConvDecls_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (ml_backend__ml_proc_gen__succeeded)
      {
        ml_backend__ml_proc_gen__succeeded = (ml_backend__ml_proc_gen__ConvInputStatements_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (ml_backend__ml_proc_gen__succeeded)
          ml_backend__ml_proc_gen__succeeded = (ml_backend__ml_proc_gen__ConvOutputStatements_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    if (ml_backend__ml_proc_gen__succeeded)
      {
        ml_backend__ml_code_gen__ml_gen_goal_6_p_0(ml_backend__ml_proc_gen__CodeModel_11, ml_backend__ml_proc_gen__Goal_16, ml_backend__ml_proc_gen__Decls_17, &ml_backend__ml_proc_gen__Statements1_27, ml_backend__ml_proc_gen__STATE_VARIABLE_Info_38_38, ml_backend__ml_proc_gen__STATE_VARIABLE_Info_37);
      }
    else
      {
        MR_Word ml_backend__ml_proc_gen__TypeCtorInfo_57_57;
        MR_Word ml_backend__ml_proc_gen__DoGenGoal_28;
        MR_Word ml_backend__ml_proc_gen__DoConvOutputs_29;
        MR_Word ml_backend__ml_proc_gen__Decls0_34;
        MR_Word ml_backend__ml_proc_gen__Statements0_35;
        MR_Word ml_backend__ml_proc_gen__Var_45;

        {
          ml_backend__ml_proc_gen__DoGenGoal_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__DoGenGoal_28, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__DoGenGoal_28, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_proc_body_10_p_0_1));
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__DoGenGoal_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__DoGenGoal_28, 3) = ((MR_Box) (ml_backend__ml_proc_gen__CodeModel_11));
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__DoGenGoal_28, 4) = ((MR_Box) (ml_backend__ml_proc_gen__Goal_16));
        }
        {
          ml_backend__ml_proc_gen__DoConvOutputs_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__DoConvOutputs_29, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_5[0]));
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__DoConvOutputs_29, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_proc_body_10_p_0_2));
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__DoConvOutputs_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__DoConvOutputs_29, 3) = ((MR_Box) (ml_backend__ml_proc_gen__CodeModel_11));
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__DoConvOutputs_29, 4) = ((MR_Box) (ml_backend__ml_proc_gen__Context_22));
          MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__DoConvOutputs_29, 5) = ((MR_Box) (ml_backend__ml_proc_gen__ConvOutputStatements_26));
        }
        {
          ml_backend__ml_code_util__ml_combine_conj_8_p_0(ml_backend__ml_proc_gen__CodeModel_11, ml_backend__ml_proc_gen__Context_22, ml_backend__ml_proc_gen__DoGenGoal_28, ml_backend__ml_proc_gen__DoConvOutputs_29, &ml_backend__ml_proc_gen__Decls0_34, &ml_backend__ml_proc_gen__Statements0_35, ml_backend__ml_proc_gen__STATE_VARIABLE_Info_38_38, ml_backend__ml_proc_gen__STATE_VARIABLE_Info_37);
        }
        {
          ml_backend__ml_proc_gen__Statements1_27 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, ml_backend__ml_proc_gen__ConvInputStatements_25, ml_backend__ml_proc_gen__Statements0_35);
        }
        ml_backend__ml_proc_gen__TypeCtorInfo_57_57 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
        {
          ml_backend__ml_proc_gen__Var_45 = mercury__list__map_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_defn_0, ml_backend__ml_proc_gen__TypeCtorInfo_57_57, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[3], ml_backend__ml_proc_gen__ConvDecls_24);
        }
        {
          *ml_backend__ml_proc_gen__Decls_17 = mercury__list__f_43_43_2_f_0(ml_backend__ml_proc_gen__TypeCtorInfo_57_57, ml_backend__ml_proc_gen__Var_45, ml_backend__ml_proc_gen__Decls0_34);
        }
      }
    {
      ml_backend__ml_code_util__ml_append_return_statement_6_p_0(*ml_backend__ml_proc_gen__STATE_VARIABLE_Info_37, ml_backend__ml_proc_gen__CodeModel_11, ml_backend__ml_proc_gen__CopiedOutputVarOriginalLvals_23, ml_backend__ml_proc_gen__Context_22, ml_backend__ml_proc_gen__Statements1_27, ml_backend__ml_proc_gen__Statements_18);
    }
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_convert_headvars_10_p_0(
  MR_Word ml_backend__ml_proc_gen__Vars_11,
  MR_Word ml_backend__ml_proc_gen__HeadTypes_12,
  MR_Word ml_backend__ml_proc_gen__TopFunctorModes_13,
  MR_Word ml_backend__ml_proc_gen__CopiedOutputVars_14,
  MR_Word ml_backend__ml_proc_gen__Context_15,
  MR_Word * ml_backend__ml_proc_gen__Decls_16,
  MR_Word * ml_backend__ml_proc_gen__InputStatements_17,
  MR_Word * ml_backend__ml_proc_gen__OutputStatements_18,
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Info_0_40,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_Info_41)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_proc_gen__succeeded = (ml_backend__ml_proc_gen__Vars_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

        if (ml_backend__ml_proc_gen__succeeded)
          {
            ml_backend__ml_proc_gen__succeeded = (ml_backend__ml_proc_gen__HeadTypes_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (ml_backend__ml_proc_gen__succeeded)
              ml_backend__ml_proc_gen__succeeded = (ml_backend__ml_proc_gen__TopFunctorModes_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        if (ml_backend__ml_proc_gen__succeeded)
          {
            *ml_backend__ml_proc_gen__Decls_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *ml_backend__ml_proc_gen__InputStatements_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *ml_backend__ml_proc_gen__OutputStatements_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *ml_backend__ml_proc_gen__STATE_VARIABLE_Info_41 = ml_backend__ml_proc_gen__STATE_VARIABLE_Info_0_40;
          }
        else
          {
            MR_Word ml_backend__ml_proc_gen__Var_20;
            MR_Word ml_backend__ml_proc_gen__VarsTail_21;
            MR_Word ml_backend__ml_proc_gen__HeadType_22;
            MR_Word ml_backend__ml_proc_gen__HeadTypesTail_23;
            MR_Word ml_backend__ml_proc_gen__TopFunctorMode_24;
            MR_Word ml_backend__ml_proc_gen__TopFunctorModesTail_25;

            ml_backend__ml_proc_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_proc_gen__Vars_11)) == (MR_mktag((MR_Integer) 1)));
            if (ml_backend__ml_proc_gen__succeeded)
              {
                ml_backend__ml_proc_gen__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Vars_11, (MR_Integer) 0)));
                ml_backend__ml_proc_gen__VarsTail_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Vars_11, (MR_Integer) 1)));
                ml_backend__ml_proc_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_proc_gen__HeadTypes_12)) == (MR_mktag((MR_Integer) 1)));
                if (ml_backend__ml_proc_gen__succeeded)
                  {
                    ml_backend__ml_proc_gen__HeadType_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__HeadTypes_12, (MR_Integer) 0)));
                    ml_backend__ml_proc_gen__HeadTypesTail_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__HeadTypes_12, (MR_Integer) 1)));
                    ml_backend__ml_proc_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_proc_gen__TopFunctorModes_13)) == (MR_mktag((MR_Integer) 1)));
                    if (ml_backend__ml_proc_gen__succeeded)
                      {
                        ml_backend__ml_proc_gen__TopFunctorMode_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__TopFunctorModes_13, (MR_Integer) 0)));
                        ml_backend__ml_proc_gen__TopFunctorModesTail_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__TopFunctorModes_13, (MR_Integer) 1)));
                      }
                  }
              }
            if (ml_backend__ml_proc_gen__succeeded)
              {
                MR_Word ml_backend__ml_proc_gen__BodyType_26;

                {
                  ml_backend__ml_code_util__ml_variable_type_3_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_Info_0_40, ml_backend__ml_proc_gen__Var_20, &ml_backend__ml_proc_gen__BodyType_26);
                }
                ml_backend__ml_proc_gen__succeeded = (ml_backend__ml_proc_gen__TopFunctorMode_24 == (MR_Integer) 2);
                if (ml_backend__ml_proc_gen__succeeded)
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word ml_backend__ml_proc_gen__next_value_of_Vars_11 = ml_backend__ml_proc_gen__VarsTail_21;
                      MR_Word ml_backend__ml_proc_gen__next_value_of_HeadTypes_12 = ml_backend__ml_proc_gen__HeadTypesTail_23;
                      MR_Word ml_backend__ml_proc_gen__next_value_of_TopFunctorModes_13 = ml_backend__ml_proc_gen__TopFunctorModesTail_25;

                      ml_backend__ml_proc_gen__TopFunctorModes_13 = ml_backend__ml_proc_gen__next_value_of_TopFunctorModes_13;
                      ml_backend__ml_proc_gen__HeadTypes_12 = ml_backend__ml_proc_gen__next_value_of_HeadTypes_12;
                      ml_backend__ml_proc_gen__Vars_11 = ml_backend__ml_proc_gen__next_value_of_Vars_11;
                    }
                    continue;
                  }
                else
                  {
                    MR_Word ml_backend__ml_proc_gen__TypeInfo_53_53 = (MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[3];
                    MR_Word ml_backend__ml_proc_gen__TypeCtorInfo_54_54 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
                    MR_Word ml_backend__ml_proc_gen__Subst0_27;
                    MR_Word ml_backend__ml_proc_gen__Subst_28;

                    {
                      mercury__map__init_1_p_0(ml_backend__ml_proc_gen__TypeInfo_53_53, ml_backend__ml_proc_gen__TypeCtorInfo_54_54, &ml_backend__ml_proc_gen__Subst0_27);
                    }
                    {
                      ml_backend__ml_proc_gen__succeeded = parse_tree__prog_type__type_unify_5_p_0(ml_backend__ml_proc_gen__HeadType_22, ml_backend__ml_proc_gen__BodyType_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_proc_gen__Subst0_27, &ml_backend__ml_proc_gen__Subst_28);
                    }
                    if (ml_backend__ml_proc_gen__succeeded)
                      {
                        ml_backend__ml_proc_gen__succeeded = mercury__map__is_empty_1_p_0(ml_backend__ml_proc_gen__TypeInfo_53_53, ml_backend__ml_proc_gen__TypeCtorInfo_54_54, ml_backend__ml_proc_gen__Subst_28);
                      }
                    if (ml_backend__ml_proc_gen__succeeded)
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word ml_backend__ml_proc_gen__next_value_of_Vars_11 = ml_backend__ml_proc_gen__VarsTail_21;
                          MR_Word ml_backend__ml_proc_gen__next_value_of_HeadTypes_12 = ml_backend__ml_proc_gen__HeadTypesTail_23;
                          MR_Word ml_backend__ml_proc_gen__next_value_of_TopFunctorModes_13 = ml_backend__ml_proc_gen__TopFunctorModesTail_25;

                          ml_backend__ml_proc_gen__TopFunctorModes_13 = ml_backend__ml_proc_gen__next_value_of_TopFunctorModes_13;
                          ml_backend__ml_proc_gen__HeadTypes_12 = ml_backend__ml_proc_gen__next_value_of_HeadTypes_12;
                          ml_backend__ml_proc_gen__Vars_11 = ml_backend__ml_proc_gen__next_value_of_Vars_11;
                        }
                        continue;
                      }
                    else
                      {
                        MR_Word ml_backend__ml_proc_gen__HeadVarLval_29;
                        MR_Word ml_backend__ml_proc_gen__VarSet_30;
                        MR_Word ml_backend__ml_proc_gen__VarName_31;
                        MR_Word ml_backend__ml_proc_gen__BodyLval_32;
                        MR_Word ml_backend__ml_proc_gen__ConvDecls_33;
                        MR_Word ml_backend__ml_proc_gen__ConvInputStatements_34;
                        MR_Word ml_backend__ml_proc_gen__ConvOutputStatements_35;
                        MR_Word ml_backend__ml_proc_gen__DeclsTail_36;
                        MR_Word ml_backend__ml_proc_gen__InputStatementsTail_37;
                        MR_Word ml_backend__ml_proc_gen__OutputStatementsTail_38;
                        MR_Word ml_backend__ml_proc_gen__ByRefOutputVars_39;
                        MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Info_48_48;
                        MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Info_49_49;

                        {
                          ml_backend__ml_code_util__ml_gen_var_with_type_4_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_Info_0_40, ml_backend__ml_proc_gen__Var_20, ml_backend__ml_proc_gen__HeadType_22, &ml_backend__ml_proc_gen__HeadVarLval_29);
                        }
                        {
                          ml_backend__ml_gen_info__ml_gen_info_get_varset_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_Info_0_40, &ml_backend__ml_proc_gen__VarSet_30);
                        }
                        {
                          ml_backend__ml_proc_gen__VarName_31 = ml_backend__ml_code_util__ml_gen_var_name_2_f_0(ml_backend__ml_proc_gen__VarSet_30, ml_backend__ml_proc_gen__Var_20);
                        }
                        {
                          ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_p_0(ml_backend__ml_proc_gen__HeadType_22, ml_backend__ml_proc_gen__BodyType_26, (MR_Integer) 0, ml_backend__ml_proc_gen__HeadVarLval_29, ml_backend__ml_proc_gen__VarName_31, ml_backend__ml_proc_gen__Context_15, (MR_Integer) 0, (MR_Integer) 0, &ml_backend__ml_proc_gen__BodyLval_32, &ml_backend__ml_proc_gen__ConvDecls_33, &ml_backend__ml_proc_gen__ConvInputStatements_34, &ml_backend__ml_proc_gen__ConvOutputStatements_35, ml_backend__ml_proc_gen__STATE_VARIABLE_Info_0_40, &ml_backend__ml_proc_gen__STATE_VARIABLE_Info_48_48);
                        }
                        {
                          ml_backend__ml_gen_info__ml_gen_info_set_var_lval_4_p_0(ml_backend__ml_proc_gen__Var_20, ml_backend__ml_proc_gen__BodyLval_32, ml_backend__ml_proc_gen__STATE_VARIABLE_Info_48_48, &ml_backend__ml_proc_gen__STATE_VARIABLE_Info_49_49);
                        }
                        {
                          ml_backend__ml_proc_gen__ml_gen_convert_headvars_10_p_0(ml_backend__ml_proc_gen__VarsTail_21, ml_backend__ml_proc_gen__HeadTypesTail_23, ml_backend__ml_proc_gen__TopFunctorModesTail_25, ml_backend__ml_proc_gen__CopiedOutputVars_14, ml_backend__ml_proc_gen__Context_15, &ml_backend__ml_proc_gen__DeclsTail_36, &ml_backend__ml_proc_gen__InputStatementsTail_37, &ml_backend__ml_proc_gen__OutputStatementsTail_38, ml_backend__ml_proc_gen__STATE_VARIABLE_Info_49_49, ml_backend__ml_proc_gen__STATE_VARIABLE_Info_41);
                        }
                        {
                          ml_backend__ml_gen_info__ml_gen_info_get_byref_output_vars_2_p_0(*ml_backend__ml_proc_gen__STATE_VARIABLE_Info_41, &ml_backend__ml_proc_gen__ByRefOutputVars_39);
                        }
                        {
                          ml_backend__ml_proc_gen__succeeded = mercury__list__member_2_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[2], ((MR_Box) (ml_backend__ml_proc_gen__Var_20)), ml_backend__ml_proc_gen__ByRefOutputVars_39);
                        }
                        if (!(ml_backend__ml_proc_gen__succeeded))
                          {
                            {
                              ml_backend__ml_proc_gen__succeeded = mercury__list__member_2_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[2], ((MR_Box) (ml_backend__ml_proc_gen__Var_20)), ml_backend__ml_proc_gen__CopiedOutputVars_14);
                            }
                          }
                        if (ml_backend__ml_proc_gen__succeeded)
                          {
                            *ml_backend__ml_proc_gen__InputStatements_17 = ml_backend__ml_proc_gen__InputStatementsTail_37;
                            {
                              *ml_backend__ml_proc_gen__OutputStatements_18 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, ml_backend__ml_proc_gen__OutputStatementsTail_38, ml_backend__ml_proc_gen__ConvOutputStatements_35);
                            }
                          }
                        else
                          {
                            {
                              *ml_backend__ml_proc_gen__InputStatements_17 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, ml_backend__ml_proc_gen__ConvInputStatements_34, ml_backend__ml_proc_gen__InputStatementsTail_37);
                            }
                            *ml_backend__ml_proc_gen__OutputStatements_18 = ml_backend__ml_proc_gen__OutputStatementsTail_38;
                          }
                        {
                          *ml_backend__ml_proc_gen__Decls_16 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_defn_0, ml_backend__ml_proc_gen__ConvDecls_33, ml_backend__ml_proc_gen__DeclsTail_36);
                        }
                      }
                  }
              }
            else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_proc_gen.ml_gen_convert_headvars\'/10", (MR_String) "length mismatch");
                  return;
                }
              }
          }
      }
      break;
    }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_set_up_initial_succ_cont_4_p_0(
  MR_Word ml_backend__ml_proc_gen__ModuleInfo_5,
  MR_Word * ml_backend__ml_proc_gen__NondetCopiedOutputVars_6,
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Info_0_13,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_Info_14)
{
  {
    MR_bool ml_backend__ml_proc_gen__succeeded;
    MR_Word ml_backend__ml_proc_gen__Globals_8;
    MR_Word ml_backend__ml_proc_gen__NondetCopyOut_9;
    MR_Word ml_backend__ml_proc_gen__OutputVarLvals_10;
    MR_Word ml_backend__ml_proc_gen__OutputVarTypes_11;
    MR_Word ml_backend__ml_proc_gen__InitialCont_12;
    MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Info_17_17;
    MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Info_18_18;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_proc_gen__ModuleInfo_5, &ml_backend__ml_proc_gen__Globals_8);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_proc_gen__Globals_8, (MR_Integer) 267, &ml_backend__ml_proc_gen__NondetCopyOut_9);
    }
    switch (ml_backend__ml_proc_gen__NondetCopyOut_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *ml_backend__ml_proc_gen__NondetCopiedOutputVars_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          ml_backend__ml_proc_gen__STATE_VARIABLE_Info_17_17 = ml_backend__ml_proc_gen__STATE_VARIABLE_Info_0_13;
        }
        break;
      case (MR_Integer) 1:
        {
          {
            ml_backend__ml_gen_info__ml_gen_info_get_byref_output_vars_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_Info_0_13, ml_backend__ml_proc_gen__NondetCopiedOutputVars_6);
          }
          {
            ml_backend__ml_gen_info__ml_gen_info_set_byref_output_vars_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_proc_gen__STATE_VARIABLE_Info_0_13, &ml_backend__ml_proc_gen__STATE_VARIABLE_Info_17_17);
          }
        }
        break;
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_set_value_output_vars_3_p_0(*ml_backend__ml_proc_gen__NondetCopiedOutputVars_6, ml_backend__ml_proc_gen__STATE_VARIABLE_Info_17_17, &ml_backend__ml_proc_gen__STATE_VARIABLE_Info_18_18);
    }
    {
      ml_backend__ml_code_util__ml_gen_var_list_3_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_Info_18_18, *ml_backend__ml_proc_gen__NondetCopiedOutputVars_6, &ml_backend__ml_proc_gen__OutputVarLvals_10);
    }
    {
      ml_backend__ml_code_util__ml_variable_types_3_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_Info_18_18, *ml_backend__ml_proc_gen__NondetCopiedOutputVars_6, &ml_backend__ml_proc_gen__OutputVarTypes_11);
    }
    {
      ml_backend__ml_code_util__ml_initial_cont_4_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_Info_18_18, ml_backend__ml_proc_gen__OutputVarLvals_10, ml_backend__ml_proc_gen__OutputVarTypes_11, &ml_backend__ml_proc_gen__InitialCont_12);
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_push_success_cont_3_p_0(ml_backend__ml_proc_gen__InitialCont_12, ml_backend__ml_proc_gen__STATE_VARIABLE_Info_18_18, ml_backend__ml_proc_gen__STATE_VARIABLE_Info_14);
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__ml_det_copy_out_vars_4_p_0_1(
  MR_Box ml_backend__ml_proc_gen__closure_arg,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1)
{
  {
    MR_bool ml_backend__ml_proc_gen__succeeded;
    MR_Box ml_backend__ml_proc_gen__closure = ml_backend__ml_proc_gen__closure_arg;

    {
      ml_backend__ml_proc_gen__succeeded = hlds__hlds_pred__var_is_of_dummy_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__ml_proc_gen__wrapper_arg_1));
    }
    return ml_backend__ml_proc_gen__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_det_copy_out_vars_4_p_0(
  MR_Word ml_backend__ml_proc_gen__ModuleInfo_5,
  MR_Word * ml_backend__ml_proc_gen__CopiedOutputVars_6,
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Info_0_17,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_Info_18)
{
  {
    MR_bool ml_backend__ml_proc_gen__succeeded;
    MR_Word ml_backend__ml_proc_gen__OutputVars_8;
    MR_Word ml_backend__ml_proc_gen__Globals_9;
    MR_Word ml_backend__ml_proc_gen__DetCopyOut_10;
    MR_Word ml_backend__ml_proc_gen__ByRefOutputVars_11;
    MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Info_22_22;

    {
      ml_backend__ml_gen_info__ml_gen_info_get_byref_output_vars_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_Info_0_17, &ml_backend__ml_proc_gen__OutputVars_8);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_proc_gen__ModuleInfo_5, &ml_backend__ml_proc_gen__Globals_9);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_proc_gen__Globals_9, (MR_Integer) 266, &ml_backend__ml_proc_gen__DetCopyOut_10);
    }
    switch (ml_backend__ml_proc_gen__DetCopyOut_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_proc_gen__ResultVar_16;
          MR_Word ml_backend__ml_proc_gen__PredId_14;
          MR_Integer ml_backend__ml_proc_gen__ProcId_15;

          {
            ml_backend__ml_gen_info__ml_gen_info_get_pred_id_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_Info_0_17, &ml_backend__ml_proc_gen__PredId_14);
          }
          {
            ml_backend__ml_gen_info__ml_gen_info_get_proc_id_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_Info_0_17, &ml_backend__ml_proc_gen__ProcId_15);
          }
          {
            ml_backend__ml_proc_gen__succeeded = ml_backend__ml_code_util__ml_is_output_det_function_4_p_0(ml_backend__ml_proc_gen__ModuleInfo_5, ml_backend__ml_proc_gen__PredId_14, ml_backend__ml_proc_gen__ProcId_15, &ml_backend__ml_proc_gen__ResultVar_16);
          }
          if (ml_backend__ml_proc_gen__succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_proc_gen__CopiedOutputVars_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_proc_gen__ResultVar_16));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                mercury__list__delete_all_3_p_1((MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[2], ml_backend__ml_proc_gen__OutputVars_8, ((MR_Box) (ml_backend__ml_proc_gen__ResultVar_16)), &ml_backend__ml_proc_gen__ByRefOutputVars_11);
              }
            }
          else
            {
              *ml_backend__ml_proc_gen__CopiedOutputVars_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              ml_backend__ml_proc_gen__ByRefOutputVars_11 = ml_backend__ml_proc_gen__OutputVars_8;
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_proc_gen__VarTypes_12;
          MR_Word ml_backend__ml_proc_gen__Var_21;
          MR_Word ml_backend__ml_proc_gen__Var_13;

          ml_backend__ml_proc_gen__ByRefOutputVars_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          {
            ml_backend__ml_gen_info__ml_gen_info_get_var_types_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_Info_0_17, &ml_backend__ml_proc_gen__VarTypes_12);
          }
          {
            ml_backend__ml_proc_gen__Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_21, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_3[1]));
            MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_21, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_det_copy_out_vars_4_p_0_1));
            MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_21, 3) = ((MR_Box) (ml_backend__ml_proc_gen__ModuleInfo_5));
            MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_21, 4) = ((MR_Box) (ml_backend__ml_proc_gen__VarTypes_12));
          }
          {
            mercury__list__filter_4_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[2], ml_backend__ml_proc_gen__Var_21, ml_backend__ml_proc_gen__OutputVars_8, &ml_backend__ml_proc_gen__Var_13, ml_backend__ml_proc_gen__CopiedOutputVars_6);
          }
        }
        break;
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_set_byref_output_vars_3_p_0(ml_backend__ml_proc_gen__ByRefOutputVars_11, ml_backend__ml_proc_gen__STATE_VARIABLE_Info_0_17, &ml_backend__ml_proc_gen__STATE_VARIABLE_Info_22_22);
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_set_value_output_vars_3_p_0(*ml_backend__ml_proc_gen__CopiedOutputVars_6, ml_backend__ml_proc_gen__STATE_VARIABLE_Info_22_22, ml_backend__ml_proc_gen__STATE_VARIABLE_Info_18);
    }
  }
}

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_find_procs_for_code_gen_3_p_0_1(
  MR_Box ml_backend__ml_proc_gen__closure_arg,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1)
{
  {
    MR_Box ml_backend__ml_proc_gen__wrapper_arg_2;
    MR_Box ml_backend__ml_proc_gen__closure = ml_backend__ml_proc_gen__closure_arg;
    MR_Word ml_backend__ml_proc_gen__conv0_LambdaHeadVar__2_26;

    {
      ml_backend__ml_proc_gen__conv0_LambdaHeadVar__2_26 = ml_backend__ml_proc_gen__IntroducedFrom__func__ml_find_procs_for_code_gen__331__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 3))), ((MR_Integer) ml_backend__ml_proc_gen__wrapper_arg_1));
    }
    ml_backend__ml_proc_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_proc_gen__conv0_LambdaHeadVar__2_26));
    return ml_backend__ml_proc_gen__wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_find_procs_for_code_gen_3_p_0(
  MR_Word ml_backend__ml_proc_gen__HeadVar__1_1,
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_CodeGenPredProcIds_0_2,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_CodeGenPredProcIds_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_proc_gen__succeeded;

        if ((ml_backend__ml_proc_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ml_backend__ml_proc_gen__STATE_VARIABLE_CodeGenPredProcIds_3 = ml_backend__ml_proc_gen__STATE_VARIABLE_CodeGenPredProcIds_0_2;
        else
          {
            MR_Word ml_backend__ml_proc_gen__PredIdInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ml_backend__ml_proc_gen__PredIdInfos_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ml_backend__ml_proc_gen__PredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__PredIdInfo_7, (MR_Integer) 0)));
            MR_Word ml_backend__ml_proc_gen__PredInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__PredIdInfo_7, (MR_Integer) 1)));
            MR_Word ml_backend__ml_proc_gen__PredStatus_12;
            MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_CodeGenPredProcIds_27_27;

            {
              hlds__hlds_pred__pred_info_get_status_2_p_0(ml_backend__ml_proc_gen__PredInfo_11, &ml_backend__ml_proc_gen__PredStatus_12);
            }
            {
              MR_Word ml_backend__ml_proc_gen__Var_22 = (MR_Word) ml_backend__ml_proc_gen__PredStatus_12;
              MR_Word ml_backend__ml_proc_gen__Var_13;

              ml_backend__ml_proc_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_proc_gen__Var_22)) == (MR_mktag((MR_Integer) 2)));
              if (ml_backend__ml_proc_gen__succeeded)
                ml_backend__ml_proc_gen__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_proc_gen__Var_22, (MR_Integer) 0)));
            }
            if (!(ml_backend__ml_proc_gen__succeeded))
              {
                MR_Word ml_backend__ml_proc_gen__Var_20;
                MR_Word ml_backend__ml_proc_gen__Var_21;

                {
                  ml_backend__ml_proc_gen__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(ml_backend__ml_proc_gen__PredInfo_11);
                }
                if (ml_backend__ml_proc_gen__succeeded)
                  {
                    ml_backend__ml_proc_gen__Var_20 = (MR_Word) ml_backend__ml_proc_gen__PredStatus_12;
                    ml_backend__ml_proc_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_proc_gen__Var_20)) == (MR_mktag((MR_Integer) 1)));
                    if (ml_backend__ml_proc_gen__succeeded)
                      {
                        ml_backend__ml_proc_gen__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_20, (MR_Integer) 0)));
                        ml_backend__ml_proc_gen__succeeded = (ml_backend__ml_proc_gen__Var_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
                      }
                  }
              }
            if (ml_backend__ml_proc_gen__succeeded)
              ml_backend__ml_proc_gen__STATE_VARIABLE_CodeGenPredProcIds_27_27 = ml_backend__ml_proc_gen__STATE_VARIABLE_CodeGenPredProcIds_0_2;
            else
              {
                MR_Word ml_backend__ml_proc_gen__TypeCtorInfo_31_31;
                MR_Word ml_backend__ml_proc_gen__ProcIds_15;
                MR_Word ml_backend__ml_proc_gen__PredProcIds_16;
                MR_Word ml_backend__ml_proc_gen__Var_24;
                MR_Word ml_backend__ml_proc_gen__Var_23 = (MR_Word) ml_backend__ml_proc_gen__PredStatus_12;
                MR_Word ml_backend__ml_proc_gen__Var_14;

                ml_backend__ml_proc_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_proc_gen__Var_23)) == (MR_mktag((MR_Integer) 1)));
                if (ml_backend__ml_proc_gen__succeeded)
                  {
                    ml_backend__ml_proc_gen__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_23, (MR_Integer) 0)));
                    {
                      ml_backend__ml_proc_gen__ProcIds_15 = hlds__hlds_pred__pred_info_procids_1_f_0(ml_backend__ml_proc_gen__PredInfo_11);
                    }
                  }
                else
                  {
                    ml_backend__ml_proc_gen__ProcIds_15 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(ml_backend__ml_proc_gen__PredInfo_11);
                  }
                ml_backend__ml_proc_gen__TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
                {
                  ml_backend__ml_proc_gen__Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_24, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_3[0]));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_24, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_find_procs_for_code_gen_3_p_0_1));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_24, 3) = ((MR_Box) (ml_backend__ml_proc_gen__PredId_10));
                }
                {
                  ml_backend__ml_proc_gen__PredProcIds_16 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__ml_proc_gen__TypeCtorInfo_31_31, ml_backend__ml_proc_gen__Var_24, ml_backend__ml_proc_gen__ProcIds_15);
                }
                {
                  ml_backend__ml_proc_gen__STATE_VARIABLE_CodeGenPredProcIds_27_27 = mercury__list__f_43_43_2_f_0(ml_backend__ml_proc_gen__TypeCtorInfo_31_31, ml_backend__ml_proc_gen__PredProcIds_16, ml_backend__ml_proc_gen__STATE_VARIABLE_CodeGenPredProcIds_0_2);
                }
              }
            /* direct tailcall eliminated */
            {
              MR_Word ml_backend__ml_proc_gen__next_value_of_HeadVar__1_1 = ml_backend__ml_proc_gen__PredIdInfos_8;
              MR_Word ml_backend__ml_proc_gen__next_value_of_STATE_VARIABLE_CodeGenPredProcIds_0_2 = ml_backend__ml_proc_gen__STATE_VARIABLE_CodeGenPredProcIds_27_27;

              ml_backend__ml_proc_gen__STATE_VARIABLE_CodeGenPredProcIds_0_2 = ml_backend__ml_proc_gen__next_value_of_STATE_VARIABLE_CodeGenPredProcIds_0_2;
              ml_backend__ml_proc_gen__HeadVar__1_1 = ml_backend__ml_proc_gen__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
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

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__ml_proc_gen__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module ml_backend.ml_proc_gen. */
